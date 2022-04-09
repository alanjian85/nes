#ifndef NES_MAPPER_NROM_H_
#define NES_MAPPER_NROM_H_

#include "mapper.h"

namespace nes {
    class MapperNrom : public Mapper {
    public:
        MapperNrom(Cartridge& cartridge);

        [[nodiscard]] virtual std::uint8_t readPrg(std::uint16_t addr) override;

        virtual void writePrg(std::uint16_t addr, std::uint8_t val) override;
    
        [[nodiscard]] virtual std::uint8_t readChr(std::uint16_t addr) override;

        virtual void writeChr(std::uint16_t addr, std::uint8_t val) override;
    };
}

#endif // NES_MAPPER_NROM_H_