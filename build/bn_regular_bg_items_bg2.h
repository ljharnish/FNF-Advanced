#ifndef BN_REGULAR_BG_ITEMS_BG2_H
#define BN_REGULAR_BG_ITEMS_BG2_H

#include "bn_regular_bg_item.h"

//{{BLOCK(bg2_bn_graphics)

//======================================================================
//
//	bg2_bn_graphics, 512x256@8, 
//	+ palette 256 entries, not compressed
//	+ 537 tiles (t|f reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x32 
//	Total size: 512 + 34368 + 4096 = 38976
//
//	Time-stamp: 2021-08-27, 16:43:52
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.17
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BG2_BN_GRAPHICS_H
#define GRIT_BG2_BN_GRAPHICS_H

#define bg2_bn_graphicsTilesLen 34368
extern const bn::tile bg2_bn_graphicsTiles[bn::max(8592 / 8, 1)];

#define bg2_bn_graphicsMapLen 4096
extern const bn::regular_bg_map_cell bg2_bn_graphicsMap[2048];

#define bg2_bn_graphicsPalLen 512
extern const bn::color bg2_bn_graphicsPal[256];

#endif // GRIT_BG2_BN_GRAPHICS_H

//}}BLOCK(bg2_bn_graphics)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item bg2(
            regular_bg_tiles_item(span<const tile>(bg2_bn_graphicsTiles, 1074), bpp_mode::BPP_8, compression_type::NONE), 
            bg_palette_item(span<const color>(bg2_bn_graphicsPal, 256), bpp_mode::BPP_8, compression_type::NONE),
            regular_bg_map_item(bg2_bn_graphicsMap[0], size(64, 32), compression_type::NONE));
}

#endif

