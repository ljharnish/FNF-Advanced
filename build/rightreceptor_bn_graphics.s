
@{{BLOCK(rightreceptor_bn_graphics)

@=======================================================================
@
@	rightreceptor_bn_graphics, 16x16@4, 
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
	.global rightreceptor_bn_graphicsTiles		@ 128 unsigned chars
	.hidden rightreceptor_bn_graphicsTiles
rightreceptor_bn_graphicsTiles:
	.word 0x11100000,0x32110000,0x44310000,0x34310000,0x34211000,0x66211110,0x64445321,0x33333531
	.word 0x00000011,0x00000112,0x00001124,0x00011245,0x00113443,0x01134433,0x11344333,0x12443333
	.word 0x33333531,0x64445321,0x66211110,0x34211000,0x34310000,0x44310000,0x32110000,0x11100000
	.word 0x12443333,0x11344333,0x01134433,0x00113443,0x00011245,0x00001124,0x00000112,0x00000011

	.section .rodata
	.align	2
	.global rightreceptor_bn_graphicsPal		@ 32 unsigned chars
	.hidden rightreceptor_bn_graphicsPal
rightreceptor_bn_graphicsPal:
	.hword 0x7C1F,0x2108,0x6290,0x6314,0x7FFF,0x7BFF,0x6378,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(rightreceptor_bn_graphics)
