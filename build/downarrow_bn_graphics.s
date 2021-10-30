
@{{BLOCK(downarrow_bn_graphics)

@=======================================================================
@
@	downarrow_bn_graphics, 16x16@4, 
@	+ palette 16 entries, not compressed
@	+ 4 tiles not compressed
@	Total size: 32 + 128 = 160
@
@	Time-stamp: 2021-08-24, 20:59:45
@	Exported by Cearn's GBA Image Transmogrifier, v0.8.17
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global downarrow_bn_graphicsTiles		@ 128 unsigned chars
	.hidden downarrow_bn_graphicsTiles
downarrow_bn_graphicsTiles:
	.word 0x11000000,0x21100000,0x32100000,0x23110000,0x23111110,0x23442211,0x23533341,0x25522321
	.word 0x00000011,0x00000112,0x00000123,0x00001132,0x01111132,0x11224432,0x14333532,0x12322552
	.word 0x22226341,0x22233411,0x22334110,0x23321100,0x33211000,0x32110000,0x41100000,0x11000000
	.word 0x14362222,0x11433222,0x01143322,0x00112332,0x00011233,0x00001123,0x00000114,0x00000011

	.section .rodata
	.align	2
	.global downarrow_bn_graphicsPal		@ 32 unsigned chars
	.hidden downarrow_bn_graphicsPal
downarrow_bn_graphicsPal:
	.hword 0x7C1F,0x30C0,0x7F27,0x7FFE,0x7EA0,0x7F90,0x7FFC,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(downarrow_bn_graphics)
