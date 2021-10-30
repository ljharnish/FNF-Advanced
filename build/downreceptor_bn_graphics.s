
@{{BLOCK(downreceptor_bn_graphics)

@=======================================================================
@
@	downreceptor_bn_graphics, 16x16@4, 
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
	.global downreceptor_bn_graphicsTiles		@ 128 unsigned chars
	.hidden downreceptor_bn_graphicsTiles
downreceptor_bn_graphicsTiles:
	.word 0x11000000,0x32100000,0x43100000,0x34110000,0x35111110,0x35223311,0x35655521,0x36633531
	.word 0x00000011,0x00000123,0x00000134,0x00001143,0x01111153,0x11332253,0x12555653,0x13533663
	.word 0x33334521,0x33355211,0x33552110,0x35531100,0x55311000,0x53110000,0x21100000,0x11000000
	.word 0x12543333,0x11255333,0x01125533,0x00113553,0x00011355,0x00001135,0x00000112,0x00000011

	.section .rodata
	.align	2
	.global downreceptor_bn_graphicsPal		@ 32 unsigned chars
	.hidden downreceptor_bn_graphicsPal
downreceptor_bn_graphicsPal:
	.hword 0x7C1F,0x2108,0x6290,0x6314,0x7BFF,0x7FFF,0x6378,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(downreceptor_bn_graphics)
