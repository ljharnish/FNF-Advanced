
@{{BLOCK(sick1_bn_graphics)

@=======================================================================
@
@	sick1_bn_graphics, 16x16@4, 
@	+ palette 16 entries, not compressed
@	+ 4 tiles not compressed
@	Total size: 32 + 128 = 160
@
@	Time-stamp: 2021-08-27, 18:32:05
@	Exported by Cearn's GBA Image Transmogrifier, v0.8.17
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global sick1_bn_graphicsTiles		@ 128 unsigned chars
	.hidden sick1_bn_graphicsTiles
sick1_bn_graphicsTiles:
	.word 0x11100000,0x32111000,0x33311110,0x33333210,0x33233310,0x23133310,0x11133310,0x11133310
	.word 0x00000111,0x11111111,0x23311321,0x33331331,0x32331111,0x31231111,0x31132333,0x21132332
	.word 0x33321110,0x33311221,0x33311333,0x33311333,0x11112331,0x10011231,0x10000111,0x10000011
	.word 0x10133133,0x30133133,0x30133133,0x30133133,0x33331333,0x33321133,0x11111111,0x01110001

	.section .rodata
	.align	2
	.global sick1_bn_graphicsPal		@ 32 unsigned chars
	.hidden sick1_bn_graphicsPal
sick1_bn_graphicsPal:
	.hword 0x7C1F,0x2108,0x6290,0x7FFF,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(sick1_bn_graphics)
