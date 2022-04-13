#ifndef NES_CPU_BUS_H_
#define NES_CPU_BUS_H_

#include <array>
#include <cstdint>

#include "mappers/mapper.h"
#include "ppu_latch.h"

namespace nes {
    class CpuBus final {
    public:
        CpuBus(Mapper& mapper, PpuLatch& ppu_latch);

        [[nodiscard]] std::uint8_t read(std::uint16_t addr) const;

        void write(std::uint16_t addr, std::uint8_t val);
    private:
        std::array<std::uint8_t, 0x800> ram_;
        Mapper& mapper_;
        PpuLatch& ppu_latch_;
    };
}

#endif // NES_CPU_BUS_H_