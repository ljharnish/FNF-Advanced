#ifndef BN_REGULAR_BG_ITEMS_BGTEST_H
#define BN_REGULAR_BG_ITEMS_BGTEST_H

#include "bn_regular_bg_item.h"

//{{BLOCK(bgtest_bn_graphics)

//======================================================================
//
//	bgtest_bn_graphics, 512x256@8, 
//	+ palette 256 entries, not compressed
//	+ 474 tiles (t|f reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x32 
//	Total size: 512 + 30336 + 4096 = 34944
//
//	Time-stamp: 2021-08-27, 16:58:11
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.17
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BGTEST_BN_GRAPHICS_H
#define GRIT_BGTEST_BN_GRAPHICS_H

#define bgtest_bn_graphicsTilesLen 30336
extern const bn::tile bgtest_bn_graphicsTiles[bn::max(7584 / 8, 1)];

#define bgtest_bn_graphicsMapLen 4096
extern const bn::regular_bg_map_cell bgtest_bn_graphicsMap[2048];

#define bgtest_bn_graphicsPalLen 512
extern const bn::color bgtest_bn_graphicsPal[256];

#endif // GRIT_BGTEST_BN_GRAPHICS_H

//}}BLOCK(bgtest_bn_graphics)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item bgtest(
            regular_bg_tiles_item(span<const tile>(bgtest_bn_graphicsTiles, 948), bpp_mode::BPP_8, compression_type::NONE), 
            bg_palette_item(span<const color>(bgtest_bn_graphicsPal, 256), bpp_mode::BPP_8, compression_type::NONE),
            regular_bg_map_item(bgtest_bn_graphicsMap[0], size(64, 32), compression_type::NONE));
}

#endif

