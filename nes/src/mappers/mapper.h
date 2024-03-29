#ifndef NES_MAPPERS_MAPPER_H_
#define NES_MAPPERS_MAPPER_H_

#include <cstdint>
#include <memory>
#include <string>

#include "io/cartridge.h"

namespace nes {
class Mapper {
   public:
    Mapper(Cartridge& cartridge);

    virtual ~Mapper() noexcept = default;

    [[nodiscard]] virtual std::string getName() const = 0;

    [[nodiscard]] virtual std::uint8_t readPrg(std::uint16_t addr) = 0;

    virtual void writePrg(std::uint16_t addr, std::uint8_t val) = 0;

    [[nodiscard]] virtual std::uint8_t readChr(std::uint16_t addr) = 0;

    virtual void writeChr(std::uint16_t addr, std::uint8_t val) = 0;

    [[nodiscard]] virtual Mirroring getMirroring() = 0;

   protected:
    Cartridge& cartridge_;
};

std::unique_ptr<Mapper> MakeMapper(Cartridge& cartridge);
}  // namespace nes

#endif  // NES_MAPPERS_MAPPER_H_