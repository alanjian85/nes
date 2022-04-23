#ifndef NES_COMPONENTS_CPU_BUS_H_
#define NES_COMPONENTS_CPU_BUS_H_

#include <array>
#include <cstdint>

#include "cpu.h"
#include "io/controller.h"
#include "mappers/mapper.h"
#include "ppu.h"

namespace nes {
    class CpuBus final {
    public:
        CpuBus(Mapper& mapper);

        [[nodiscard]] std::uint8_t read(std::uint16_t addr) const;

        void write(std::uint16_t addr, std::uint8_t val);

        void setCpu(Cpu& cpu);

        void setPpu(Ppu& ppu);

        void setController1(Controller& controller1);

        void setController2(Controller& controller2);
    private:
        std::array<std::uint8_t, 0x800> ram_;
        Mapper& mapper_;

        Cpu* cpu_;
        Ppu* ppu_;

        Controller* controller1_;
        Controller* controller2_;
    };
}

#endif // NES_COMPONENTS_CPU_BUS_H_