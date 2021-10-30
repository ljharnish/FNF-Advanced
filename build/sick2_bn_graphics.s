
@{{BLOCK(sick2_bn_graphics)

@=======================================================================
@
@	sick2_bn_graphics, 16x16@4, 
@	+ palette 16 entries, not compressed
@	+ 4 tiles not compressed
@	Total size: 32 + 128 = 160
@
@	Time-stamp: 2021-08-27, 18:41:04
@	Exported by Cearn's GBA Image Transmogrifier, v0.8.17
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global sick2_bn_graphicsTiles		@ 128 unsigned chars
	.hidden sick2_bn_graphicsTiles
sick2_bn_graphicsTiles:
	.word 0x00011111,0x00013211,0x00013321,0x11113311,0x33203311,0x33303311,0x33313321,0x23333321
	.word 0x00001111,0x00001331,0x00011330,0x11111231,0x11331131,0x01331131,0x01331131,0x00331121
	.word 0x33333311,0x33312312,0x31111313,0x31103313,0x11112312,0x11111111,0x00000011,0x00000000
	.word 0x00111111,0x01111112,0x01221213,0x01331323,0x01111311,0x00001111,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global sick2_bn_graphicsPal		@ 32 unsigned chars
	.hidden sick2_bn_graphicsPal
sick2_bn_graphicsPal:
	.hword 0x7C1F,0x2108,0x6290,0x7FFF,0x0000,0x0000,0x0000,0x0000
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

@}}BLOCK(sick2_bn_graphics)
