#ifndef BN_REGULAR_BG_ITEMS_BG_H
#define BN_REGULAR_BG_ITEMS_BG_H

#include "bn_regular_bg_item.h"

//{{BLOCK(bg_bn_graphics)

//======================================================================
//
//	bg_bn_graphics, 512x256@8, 
//	+ palette 256 entries, not compressed
//	+ 829 tiles (t|f reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x32 
//	Total size: 512 + 53056 + 4096 = 57664
//
//	Time-stamp: 2021-08-27, 16:28:33
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.17
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BG_BN_GRAPHICS_H
#define GRIT_BG_BN_GRAPHICS_H

#define bg_bn_graphicsTilesLen 53056
extern const bn::tile bg_bn_graphicsTiles[bn::max(13264 / 8, 1)];

#define bg_bn_graphicsMapLen 4096
extern const bn::regular_bg_map_cell bg_bn_graphicsMap[2048];

#define bg_bn_graphicsPalLen 512
extern const bn::color bg_bn_graphicsPal[256];

#endif // GRIT_BG_BN_GRAPHICS_H

//}}BLOCK(bg_bn_graphics)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item bg(
            regular_bg_tiles_item(span<const tile>(bg_bn_graphicsTiles, 1658), bpp_mode::BPP_8, compression_type::NONE), 
            bg_palette_item(span<const color>(bg_bn_graphicsPal, 256), bpp_mode::BPP_8, compression_type::NONE),
            regular_bg_map_item(bg_bn_graphicsMap[0], size(64, 32), compression_type::NONE));
}

#endif

