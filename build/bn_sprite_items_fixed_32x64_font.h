#ifndef BN_SPRITE_ITEMS_FIXED_32X64_FONT_H
#define BN_SPRITE_ITEMS_FIXED_32X64_FONT_H

#include "bn_sprite_item.h"

//{{BLOCK(fixed_32x64_font_bn_graphics)

//======================================================================
//
//	fixed_32x64_font_bn_graphics, 32x7040@4, 
//	+ palette 16 entries, not compressed
//	+ 3520 tiles not compressed
//	Total size: 32 + 112640 = 112672
//
//	Time-stamp: 2021-08-29, 14:42:56
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.17
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_FIXED_32X64_FONT_BN_GRAPHICS_H
#define GRIT_FIXED_32X64_FONT_BN_GRAPHICS_H

#define fixed_32x64_font_bn_graphicsTilesLen 112640
extern const bn::tile fixed_32x64_font_bn_graphicsTiles[bn::max(28160 / 8, 1)];

#define fixed_32x64_font_bn_graphicsPalLen 32
extern const bn::color fixed_32x64_font_bn_graphicsPal[16];

#endif // GRIT_FIXED_32X64_FONT_BN_GRAPHICS_H

//}}BLOCK(fixed_32x64_font_bn_graphics)

namespace bn::sprite_items
{
    constexpr inline sprite_item fixed_32x64_font(sprite_shape_size(sprite_shape::TALL, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(fixed_32x64_font_bn_graphicsTiles, 3520), bpp_mode::BPP_4, compression_type::NONE, 110), 
            sprite_palette_item(span<const color>(fixed_32x64_font_bn_graphicsPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

