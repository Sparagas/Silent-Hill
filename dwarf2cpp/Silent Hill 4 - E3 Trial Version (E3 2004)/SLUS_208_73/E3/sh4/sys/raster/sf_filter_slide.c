

typedef unsigned long type[2];

unsigned long* sg_packet_cur;

void sfFilterSlide();

// 
// Start address: 0x1a9670
void sfFilterSlide()
{
	<unknown fundamental type (0xa510)>* prim;
	int y;
	int t;
	int x_from;
	int x_to;
	int u;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	int hcount;
	unsigned long giftag[2];
	// Line 26, Address: 0x1a9670, Func Offset: 0
	// Line 46, Address: 0x1a9694, Func Offset: 0x24
	// Line 48, Address: 0x1a96c8, Func Offset: 0x58
	// Line 49, Address: 0x1a96d8, Func Offset: 0x68
	// Line 50, Address: 0x1a9708, Func Offset: 0x98
	// Line 52, Address: 0x1a9710, Func Offset: 0xa0
	// Line 54, Address: 0x1a974c, Func Offset: 0xdc
	// Line 57, Address: 0x1a9750, Func Offset: 0xe0
	// Line 60, Address: 0x1a9768, Func Offset: 0xf8
	// Line 61, Address: 0x1a9770, Func Offset: 0x100
	// Line 62, Address: 0x1a9778, Func Offset: 0x108
	// Line 68, Address: 0x1a9784, Func Offset: 0x114
	// Line 76, Address: 0x1a97c0, Func Offset: 0x150
	// Line 68, Address: 0x1a97c4, Func Offset: 0x154
	// Line 76, Address: 0x1a97dc, Func Offset: 0x16c
	// Line 77, Address: 0x1a9814, Func Offset: 0x1a4
	// Line 76, Address: 0x1a9818, Func Offset: 0x1a8
	// Line 77, Address: 0x1a9834, Func Offset: 0x1c4
	// Line 76, Address: 0x1a9838, Func Offset: 0x1c8
	// Line 83, Address: 0x1a9844, Func Offset: 0x1d4
	// Line 76, Address: 0x1a9848, Func Offset: 0x1d8
	// Line 83, Address: 0x1a984c, Func Offset: 0x1dc
	// Line 79, Address: 0x1a9850, Func Offset: 0x1e0
	// Line 77, Address: 0x1a9854, Func Offset: 0x1e4
	// Line 79, Address: 0x1a9858, Func Offset: 0x1e8
	// Line 78, Address: 0x1a985c, Func Offset: 0x1ec
	// Line 79, Address: 0x1a9860, Func Offset: 0x1f0
	// Line 80, Address: 0x1a986c, Func Offset: 0x1fc
	// Line 84, Address: 0x1a9870, Func Offset: 0x200
	// Line 83, Address: 0x1a9874, Func Offset: 0x204
	// Line 84, Address: 0x1a9878, Func Offset: 0x208
	// Line 80, Address: 0x1a9880, Func Offset: 0x210
	// Line 77, Address: 0x1a9884, Func Offset: 0x214
	// Line 80, Address: 0x1a9888, Func Offset: 0x218
	// Line 89, Address: 0x1a988c, Func Offset: 0x21c
	// Line 83, Address: 0x1a9890, Func Offset: 0x220
	// Line 89, Address: 0x1a9894, Func Offset: 0x224
	// Line 83, Address: 0x1a9898, Func Offset: 0x228
	// Line 77, Address: 0x1a98a0, Func Offset: 0x230
	// Line 88, Address: 0x1a98ac, Func Offset: 0x23c
	// Line 77, Address: 0x1a98b0, Func Offset: 0x240
	// Line 78, Address: 0x1a98b4, Func Offset: 0x244
	// Line 88, Address: 0x1a98bc, Func Offset: 0x24c
	// Line 85, Address: 0x1a98c0, Func Offset: 0x250
	// Line 88, Address: 0x1a98c4, Func Offset: 0x254
	// Line 78, Address: 0x1a98c8, Func Offset: 0x258
	// Line 79, Address: 0x1a98d8, Func Offset: 0x268
	// Line 78, Address: 0x1a98dc, Func Offset: 0x26c
	// Line 79, Address: 0x1a98e0, Func Offset: 0x270
	// Line 80, Address: 0x1a98f4, Func Offset: 0x284
	// Line 79, Address: 0x1a98f8, Func Offset: 0x288
	// Line 80, Address: 0x1a98fc, Func Offset: 0x28c
	// Line 83, Address: 0x1a9910, Func Offset: 0x2a0
	// Line 80, Address: 0x1a9914, Func Offset: 0x2a4
	// Line 83, Address: 0x1a9918, Func Offset: 0x2a8
	// Line 84, Address: 0x1a992c, Func Offset: 0x2bc
	// Line 83, Address: 0x1a9930, Func Offset: 0x2c0
	// Line 84, Address: 0x1a9934, Func Offset: 0x2c4
	// Line 85, Address: 0x1a9948, Func Offset: 0x2d8
	// Line 84, Address: 0x1a994c, Func Offset: 0x2dc
	// Line 85, Address: 0x1a9950, Func Offset: 0x2e0
	// Line 88, Address: 0x1a9964, Func Offset: 0x2f4
	// Line 85, Address: 0x1a9968, Func Offset: 0x2f8
	// Line 88, Address: 0x1a996c, Func Offset: 0x2fc
	// Line 89, Address: 0x1a9980, Func Offset: 0x310
	// Line 92, Address: 0x1a9998, Func Offset: 0x328
	// Line 95, Address: 0x1a99bc, Func Offset: 0x34c
	// Line 92, Address: 0x1a99c0, Func Offset: 0x350
	// Line 95, Address: 0x1a99c4, Func Offset: 0x354
	// Line 98, Address: 0x1a9a24, Func Offset: 0x3b4
	// Line 95, Address: 0x1a9a28, Func Offset: 0x3b8
	// Line 98, Address: 0x1a9a48, Func Offset: 0x3d8
	// Line 102, Address: 0x1a9a60, Func Offset: 0x3f0
	// Line 98, Address: 0x1a9a64, Func Offset: 0x3f4
	// Line 102, Address: 0x1a9a80, Func Offset: 0x410
	// Line 103, Address: 0x1a9af8, Func Offset: 0x488
	// Line 102, Address: 0x1a9afc, Func Offset: 0x48c
	// Line 103, Address: 0x1a9b00, Func Offset: 0x490
	// Line 102, Address: 0x1a9b04, Func Offset: 0x494
	// Line 103, Address: 0x1a9b14, Func Offset: 0x4a4
	// Line 121, Address: 0x1a9b28, Func Offset: 0x4b8
	// Line 128, Address: 0x1a9b64, Func Offset: 0x4f4
	// Line 121, Address: 0x1a9b68, Func Offset: 0x4f8
	// Line 128, Address: 0x1a9b80, Func Offset: 0x510
	// Line 130, Address: 0x1a9bb8, Func Offset: 0x548
	// Line 128, Address: 0x1a9bbc, Func Offset: 0x54c
	// Line 130, Address: 0x1a9be8, Func Offset: 0x578
	// Line 131, Address: 0x1a9bf4, Func Offset: 0x584
	// Line 135, Address: 0x1a9c18, Func Offset: 0x5a8
	// Line 138, Address: 0x1a9c40, Func Offset: 0x5d0
	// Line 135, Address: 0x1a9c44, Func Offset: 0x5d4
	// Line 138, Address: 0x1a9c48, Func Offset: 0x5d8
	// Line 141, Address: 0x1a9ca8, Func Offset: 0x638
	// Line 138, Address: 0x1a9cac, Func Offset: 0x63c
	// Line 141, Address: 0x1a9cd0, Func Offset: 0x660
	// Line 145, Address: 0x1a9cf8, Func Offset: 0x688
	// Line 141, Address: 0x1a9cfc, Func Offset: 0x68c
	// Line 145, Address: 0x1a9d08, Func Offset: 0x698
	// Line 146, Address: 0x1a9d7c, Func Offset: 0x70c
	// Line 145, Address: 0x1a9d80, Func Offset: 0x710
	// Line 146, Address: 0x1a9d84, Func Offset: 0x714
	// Line 145, Address: 0x1a9d88, Func Offset: 0x718
	// Line 146, Address: 0x1a9da0, Func Offset: 0x730
	// Line 147, Address: 0x1a9db4, Func Offset: 0x744
	// Line 149, Address: 0x1a9dc0, Func Offset: 0x750
	// Line 153, Address: 0x1a9dd8, Func Offset: 0x768
	// Line 156, Address: 0x1a9e04, Func Offset: 0x794
	// Line 153, Address: 0x1a9e08, Func Offset: 0x798
	// Line 156, Address: 0x1a9e0c, Func Offset: 0x79c
	// Line 159, Address: 0x1a9e6c, Func Offset: 0x7fc
	// Line 156, Address: 0x1a9e70, Func Offset: 0x800
	// Line 159, Address: 0x1a9e94, Func Offset: 0x824
	// Line 163, Address: 0x1a9ebc, Func Offset: 0x84c
	// Line 159, Address: 0x1a9ec0, Func Offset: 0x850
	// Line 163, Address: 0x1a9ed0, Func Offset: 0x860
	// Line 164, Address: 0x1a9f44, Func Offset: 0x8d4
	// Line 163, Address: 0x1a9f48, Func Offset: 0x8d8
	// Line 164, Address: 0x1a9f4c, Func Offset: 0x8dc
	// Line 163, Address: 0x1a9f50, Func Offset: 0x8e0
	// Line 164, Address: 0x1a9f68, Func Offset: 0x8f8
	// Line 166, Address: 0x1a9f80, Func Offset: 0x910
	// Line 167, Address: 0x1a9f94, Func Offset: 0x924
	// Line 169, Address: 0x1a9f98, Func Offset: 0x928
	// Line 170, Address: 0x1a9fa0, Func Offset: 0x930
	// Line 172, Address: 0x1a9fa8, Func Offset: 0x938
	// Line 173, Address: 0x1a9fb4, Func Offset: 0x944
	// Line 176, Address: 0x1a9fbc, Func Offset: 0x94c
	// Func End, Address: 0x1a9fe8, Func Offset: 0x978
}

