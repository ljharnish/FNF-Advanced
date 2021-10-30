
@{{BLOCK(upreceptor_bn_graphics)

@=======================================================================
@
@	upreceptor_bn_graphics, 16x16@4, 
@	+ palette 16 entries, not compressed
@	+ 4 tiles not compressed
@	Total size: 32 + 128 = 160
@
@	Time-stamp: 2021-08-24, 20:36:47
@	Exported by Cearn's GBA Image Transmogrifier, v0.8.17
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global upreceptor_bn_graphicsTiles		@ 128 unsigned chars
	.hidden upreceptor_bn_graphicsTiles
upreceptor_bn_graphicsTiles:
	.word 0x11000000,0x21100000,0x43110000,0x44311000,0x34431100,0x33442110,0x33344211,0x33335421
	.word 0x00000011,0x00000112,0x00001134,0x00011344,0x00113443,0x01124433,0x11244333,0x12453333
	.word 0x36633431,0x34644421,0x34223311,0x34111110,0x35110000,0x53100000,0x32100000,0x11000000
	.word 0x13433663,0x12444643,0x11332243,0x01111143,0x00001153,0x00000135,0x00000123,0x00000011

	.section .rodata
	.align	2
	.global upreceptor_bn_graphicsPal		@ 32 unsigned chars
	.hidden upreceptor_bn_graphicsPal
upreceptor_bn_graphicsPal:
	.hword 0x7C1F,0x2108,0x6290,0x6314,0x7FFF,0x7BFF,0x6378,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(upreceptor_bn_graphics)
