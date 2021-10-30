#ifndef BN_SPRITE_ITEMS_DOWNARROW_H
#define BN_SPRITE_ITEMS_DOWNARROW_H

#include "bn_sprite_item.h"

//{{BLOCK(downarrow_bn_graphics)

//======================================================================
//
//	downarrow_bn_graphics, 16x16@4, 
//	+ palette 16 entries, not compressed
//	+ 4 tiles not compressed
//	Total size: 32 + 128 = 160
//
//	Time-stamp: 2021-08-24, 20:59:45
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.17
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_DOWNARROW_BN_GRAPHICS_H
#define GRIT_DOWNARROW_BN_GRAPHICS_H

#define downarrow_bn_graphicsTilesLen 128
extern const bn::tile downarrow_bn_graphicsTiles[bn::max(32 / 8, 1)];

#define downarrow_bn_graphicsPalLen 32
extern const bn::color downarrow_bn_graphicsPal[16];

#endif // GRIT_DOWNARROW_BN_GRAPHICS_H

//}}BLOCK(downarrow_bn_graphics)

namespace bn::sprite_items
{
    constexpr inline sprite_item downarrow(sprite_shape_size(sprite_shape::SQUARE, sprite_size::NORMAL), 
            sprite_tiles_item(span<const tile>(downarrow_bn_graphicsTiles, 4), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(downarrow_bn_graphicsPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

