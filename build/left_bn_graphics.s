
@{{BLOCK(left_bn_graphics)

@=======================================================================
@
@	left_bn_graphics, 16x16@4, 
@	+ palette 16 entries, not compressed
@	+ 4 tiles not compressed
@	Total size: 32 + 128 = 160
@
@	Time-stamp: 2021-08-29, 15:07:26
@	Exported by Cearn's GBA Image Transmogrifier, v0.8.17
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global left_bn_graphicsTiles		@ 128 unsigned chars
	.hidden left_bn_graphicsTiles
left_bn_graphicsTiles:
	.word 0x11100000,0x22100000,0x22100000,0x22100000,0x22100000,0x22111111,0x22333331,0x22333331
	.word 0x00000111,0x00000122,0x00000122,0x00000122,0x00000122,0x11111122,0x12222222,0x12222222
	.word 0x22333331,0x22333331,0x22111111,0x22100000,0x22100000,0x22100000,0x22100000,0x11100000
	.word 0x12222222,0x12222222,0x11111122,0x00000122,0x00000122,0x00000122,0x00000122,0x00000111

	.section .rodata
	.align	2
	.global left_bn_graphicsPal		@ 32 unsigned chars
	.hidden left_bn_graphicsPal
left_bn_graphicsPal:
	.hword 0x7C1F,0x0000,0x2108,0x7C80,0x0000,0x0000,0x0000,0x0000
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

@}}BLOCK(left_bn_graphics)
