#ifndef BN_SPRITE_ITEMS_SICK2_H
#define BN_SPRITE_ITEMS_SICK2_H

#include "bn_sprite_item.h"

//{{BLOCK(sick2_bn_graphics)

//======================================================================
//
//	sick2_bn_graphics, 16x16@4, 
//	+ palette 16 entries, not compressed
//	+ 4 tiles not compressed
//	Total size: 32 + 128 = 160
//
//	Time-stamp: 2021-08-27, 18:41:04
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.17
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_SICK2_BN_GRAPHICS_H
#define GRIT_SICK2_BN_GRAPHICS_H

#define sick2_bn_graphicsTilesLen 128
extern const bn::tile sick2_bn_graphicsTiles[bn::max(32 / 8, 1)];

#define sick2_bn_graphicsPalLen 32
extern const bn::color sick2_bn_graphicsPal[16];

#endif // GRIT_SICK2_BN_GRAPHICS_H

//}}BLOCK(sick2_bn_graphics)

namespace bn::sprite_items
{
    constexpr inline sprite_item sick2(sprite_shape_size(sprite_shape::SQUARE, sprite_size::NORMAL), 
            sprite_tiles_item(span<const tile>(sick2_bn_graphicsTiles, 4), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(sick2_bn_graphicsPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

