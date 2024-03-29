#ifndef NES_EMULATOR_H_
#define NES_EMULATOR_H_

#include <chrono>
#include <filesystem>
#include <fstream>
#include <memory>

#include "components/cpu.h"
#include "components/cpu_bus.h"
#include "components/ppu.h"
#include "components/ppu_bus.h"
#include "graphics/framebuffer.h"
#include "graphics/renderer.h"
#include "graphics/window.h"
#include "io/cartridge.h"
#include "io/controller.h"
#include "mappers/mapper.h"
#include "settings.h"

namespace nes {
class Emulator final {
   public:
    Emulator(int width, int height, const std::filesystem::path& path,
             const Settings& settings);

    void loop();

#ifndef __EMSCRIPTEN__
    void run();

    void resize(int width, int height);
#endif

    using Clock = std::chrono::high_resolution_clock;

    std::chrono::nanoseconds cycle_interval_;
    Clock::time_point prev_time_;
    std::chrono::nanoseconds elapsed_time_;

    Settings settings_;
    Cartridge cartridge_;
    std::unique_ptr<Mapper> mapper_;
    Controller controller1_;
    Controller controller2_;
    CpuBus cpu_bus_;
    Cpu cpu_;
    PpuBus ppu_bus_;
    Ppu ppu_;

    Window window_;
    Renderer renderer_;
    Framebuffer framebuffer_;

#ifndef __EMSCRIPTEN__
    bool quit_;
    SDL_Rect rect_;
#endif
};
}  // namespace nes

#endif  // NES_EMULATOR_H_