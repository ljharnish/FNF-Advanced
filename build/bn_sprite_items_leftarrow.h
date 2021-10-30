#ifndef BN_SPRITE_ITEMS_LEFTARROW_H
#define BN_SPRITE_ITEMS_LEFTARROW_H

#include "bn_sprite_item.h"

//{{BLOCK(leftarrow_bn_graphics)

//======================================================================
//
//	leftarrow_bn_graphics, 16x16@4, 
//	+ palette 16 entries, not compressed
//	+ 4 tiles not compressed
//	Total size: 32 + 128 = 160
//
//	Time-stamp: 2021-08-24, 20:59:45
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.17
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_LEFTARROW_BN_GRAPHICS_H
#define GRIT_LEFTARROW_BN_GRAPHICS_H

#define leftarrow_bn_graphicsTilesLen 128
extern const bn::tile leftarrow_bn_graphicsTiles[bn::max(32 / 8, 1)];

#define leftarrow_bn_graphicsPalLen 32
extern const bn::color leftarrow_bn_graphicsPal[16];

#endif // GRIT_LEFTARROW_BN_GRAPHICS_H

//}}BLOCK(leftarrow_bn_graphics)

namespace bn::sprite_items
{
    constexpr inline sprite_item leftarrow(sprite_shape_size(sprite_shape::SQUARE, sprite_size::NORMAL), 
            sprite_tiles_item(span<const tile>(leftarrow_bn_graphicsTiles, 4), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(leftarrow_bn_graphicsPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

