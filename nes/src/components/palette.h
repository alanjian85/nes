#ifndef NES_COMPONENTS_PALETTE_H_
#define NES_COMPONENTS_PALETTE_H_

#include <cstdint>

namespace nes {
const std::uint32_t kPalette[64] = {
    0x5C5C5CFF, 0x002267FF, 0x131280FF, 0x2E067EFF, 0x460060FF, 0x530231FF,
    0x510A02FF, 0x411900FF, 0x282900FF, 0x0D3700FF, 0x003E00FF, 0x003C0AFF,
    0x00313BFF, 0x000000FF, 0x000000FF, 0x000000FF, 0xA7A7A7FF, 0x1E55b7FF,
    0x3F3DDAFF, 0x662BD6FF, 0x8822ACFF, 0x9A246BFF, 0x983225FF, 0x814700FF,
    0x5D5F00FF, 0x367300FF, 0x187D00FF, 0x097A32FF, 0x0B6B79FF, 0x000000FF,
    0x000000FF, 0x000000FF, 0xFEFFFFFF, 0x6AA7FFFF, 0x8F8DFFFF, 0xB979FFFF,
    0xDD6FFFFF, 0xF172BEFF, 0xEE8173FF, 0xD69837FF, 0xB0B218FF, 0x86C71CFF,
    0x64D141FF, 0x52CE81FF, 0x54BECDFF, 0x454545FF, 0x000000FF, 0x000000FF,
    0xFEFFFFFF, 0xC0DAFFFF, 0xD0CFFFFF, 0xE2C6FFFF, 0xF1C2FFFF, 0xF9C3E4FF,
    0xF8CAC4FF, 0xEED4A9FF, 0xDEDF9BFF, 0xCCE79DFF, 0xBDECAEFF, 0xB5EACAFF,
    0xB6E4EAFF, 0xB0B0B0FF, 0x000000FF, 0x000000FF};
}

#endif  // NES_COMPONENTS_PALETTE_H_