#ifndef BN_SPRITE_TILES_ITEMS_IMAGE_H
#define BN_SPRITE_TILES_ITEMS_IMAGE_H

#include "bn_sprite_tiles_item.h"
#include "bn_sprite_shape_size.h"

//{{BLOCK(image_bn_graphics)

//======================================================================
//
//	image_bn_graphics, 64x256@8, 
//	+ 256 tiles not compressed
//	Total size: 16384 = 16384
//
//	Time-stamp: 2021-08-24, 20:10:13
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.17
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_IMAGE_BN_GRAPHICS_H
#define GRIT_IMAGE_BN_GRAPHICS_H

#define image_bn_graphicsTilesLen 16384
extern const bn::tile image_bn_graphicsTiles[bn::max(4096 / 8, 1)];

#endif // GRIT_IMAGE_BN_GRAPHICS_H

//}}BLOCK(image_bn_graphics)

namespace bn::sprite_tiles_items
{
    constexpr inline sprite_tiles_item image(span<const tile>(image_bn_graphicsTiles, 512), 
            bpp_mode::BPP_8, compression_type::NONE, 4);

    constexpr inline sprite_shape_size image_shape_size(sprite_shape::SQUARE, sprite_size::HUGE);
}

#endif

