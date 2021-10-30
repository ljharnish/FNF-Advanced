
@{{BLOCK(leftreceptor_bn_graphics)

@=======================================================================
@
@	leftreceptor_bn_graphics, 16x16@4, 
@	+ palette 16 entries, not compressed
@	+ 4 tiles not compressed
@	Total size: 32 + 128 = 160
@
@	Time-stamp: 2021-08-24, 20:36:46
@	Exported by Cearn's GBA Image Transmogrifier, v0.8.17
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global leftreceptor_bn_graphicsTiles		@ 128 unsigned chars
	.hidden leftreceptor_bn_graphicsTiles
leftreceptor_bn_graphicsTiles:
	.word 0x11000000,0x21100000,0x42110000,0x54211000,0x34431100,0x33443110,0x33344311,0x33334421
	.word 0x00000111,0x00001123,0x00001344,0x00001343,0x00011243,0x01111266,0x12354446,0x13533333
	.word 0x33334421,0x33344311,0x33443110,0x34431100,0x54211000,0x42110000,0x21100000,0x11000000
	.word 0x13533333,0x12354446,0x01111266,0x00011243,0x00001343,0x00001344,0x00001123,0x00000111

	.section .rodata
	.align	2
	.global leftreceptor_bn_graphicsPal		@ 32 unsigned chars
	.hidden leftreceptor_bn_graphicsPal
leftreceptor_bn_graphicsPal:
	.hword 0x7C1F,0x2108,0x6290,0x6314,0x7FFF,0x7BFF,0x6378,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(leftreceptor_bn_graphics)
