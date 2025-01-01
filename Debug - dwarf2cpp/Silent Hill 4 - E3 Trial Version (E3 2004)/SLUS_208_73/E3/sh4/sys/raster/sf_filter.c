

typedef unsigned int type_0[0];
typedef unsigned int type_1[0];
typedef unsigned int type_2[256];
typedef char type_3[64];

char flash_tbl[64];
unsigned int sf_filter_grayclut[0];
unsigned int sf_filter_sepiaclut[0];

void sfFilterInit();
void sfFilterFadeBlack(int depth);
void sfFilterFadeWhite(int depth);
void sfFilterFadeRed(int depth);
void sfFilterFlash(int depth);
void sfFilterContrast(int depth);
void sfFilterBloodEdgeBL(int depth);
void sfFilterColorEdgeBL(int r, int g, int b, int depth);
void sfFilterIllustrate(int r, int g, int b, int depth);
void sfFilterBlur(int depth);
void sfFilterBlurBL(int size, int depth);
void sfFilterSharp(int depth);
void sfFilterGrayscale(int depth);
void sfFilterSepia(int depth);

// 
// Start address: 0x140a90
void sfFilterInit()
{
	// Line 72, Address: 0x140a90, Func Offset: 0
	// Line 78, Address: 0x140a98, Func Offset: 0x8
	// Line 79, Address: 0x140aa0, Func Offset: 0x10
	// Line 80, Address: 0x140aa8, Func Offset: 0x18
	// Line 83, Address: 0x140ab0, Func Offset: 0x20
	// Func End, Address: 0x140abc, Func Offset: 0x2c
}

// 
// Start address: 0x140ac0
void sfFilterFadeBlack(int depth)
{
	int d;
	// Line 104, Address: 0x140ac0, Func Offset: 0
	// Line 105, Address: 0x140acc, Func Offset: 0xc
	// Line 107, Address: 0x140ad0, Func Offset: 0x10
	// Func End, Address: 0x140af0, Func Offset: 0x30
}

// 
// Start address: 0x140af0
void sfFilterFadeWhite(int depth)
{
	int d;
	// Line 131, Address: 0x140af0, Func Offset: 0
	// Line 132, Address: 0x140afc, Func Offset: 0xc
	// Line 134, Address: 0x140b00, Func Offset: 0x10
	// Func End, Address: 0x140b20, Func Offset: 0x30
}

// 
// Start address: 0x140b20
void sfFilterFadeRed(int depth)
{
	int d;
	// Line 158, Address: 0x140b20, Func Offset: 0
	// Line 159, Address: 0x140b2c, Func Offset: 0xc
	// Line 161, Address: 0x140b30, Func Offset: 0x10
	// Func End, Address: 0x140b48, Func Offset: 0x28
}

// 
// Start address: 0x140b50
void sfFilterFlash(int depth)
{
	int delta;
	int frm;
	// Line 206, Address: 0x140b50, Func Offset: 0
	// Line 211, Address: 0x140b60, Func Offset: 0x10
	// Line 212, Address: 0x140b6c, Func Offset: 0x1c
	// Line 214, Address: 0x140b70, Func Offset: 0x20
	// Line 215, Address: 0x140b84, Func Offset: 0x34
	// Line 214, Address: 0x140b8c, Func Offset: 0x3c
	// Line 215, Address: 0x140b90, Func Offset: 0x40
	// Line 221, Address: 0x140b94, Func Offset: 0x44
	// Line 214, Address: 0x140b9c, Func Offset: 0x4c
	// Line 215, Address: 0x140ba0, Func Offset: 0x50
	// Line 214, Address: 0x140ba8, Func Offset: 0x58
	// Line 215, Address: 0x140bac, Func Offset: 0x5c
	// Line 221, Address: 0x140bbc, Func Offset: 0x6c
	// Line 225, Address: 0x140c00, Func Offset: 0xb0
	// Func End, Address: 0x140c10, Func Offset: 0xc0
}

// 
// Start address: 0x140c10
void sfFilterContrast(int depth)
{
	// Line 447, Address: 0x140c10, Func Offset: 0
	// Line 448, Address: 0x140c14, Func Offset: 0x4
	// Line 449, Address: 0x140c20, Func Offset: 0x10
	// Line 451, Address: 0x140c28, Func Offset: 0x18
	// Line 453, Address: 0x140c44, Func Offset: 0x34
	// Line 456, Address: 0x140c50, Func Offset: 0x40
	// Func End, Address: 0x140c5c, Func Offset: 0x4c
}

// 
// Start address: 0x140c60
void sfFilterBloodEdgeBL(int depth)
{
	// Line 497, Address: 0x140c60, Func Offset: 0
	// Line 496, Address: 0x140c64, Func Offset: 0x4
	// Line 498, Address: 0x140c68, Func Offset: 0x8
	// Line 499, Address: 0x140c74, Func Offset: 0x14
	// Line 501, Address: 0x140c78, Func Offset: 0x18
	// Line 503, Address: 0x140c8c, Func Offset: 0x2c
	// Line 506, Address: 0x140c98, Func Offset: 0x38
	// Func End, Address: 0x140ca4, Func Offset: 0x44
}

// 
// Start address: 0x140cb0
void sfFilterColorEdgeBL(int r, int g, int b, int depth)
{
	// Line 509, Address: 0x140cb0, Func Offset: 0
	// Line 508, Address: 0x140cb4, Func Offset: 0x4
	// Line 510, Address: 0x140cb8, Func Offset: 0x8
	// Line 511, Address: 0x140cc4, Func Offset: 0x14
	// Line 513, Address: 0x140cc8, Func Offset: 0x18
	// Line 515, Address: 0x140d04, Func Offset: 0x54
	// Line 518, Address: 0x140d10, Func Offset: 0x60
	// Func End, Address: 0x140d1c, Func Offset: 0x6c
}

// 
// Start address: 0x140d20
void sfFilterIllustrate(int r, int g, int b, int depth)
{
	// Line 537, Address: 0x140d20, Func Offset: 0
	// Line 538, Address: 0x140d24, Func Offset: 0x4
	// Line 539, Address: 0x140d30, Func Offset: 0x10
	// Line 542, Address: 0x140d38, Func Offset: 0x18
	// Line 544, Address: 0x140da4, Func Offset: 0x84
	// Line 547, Address: 0x140db0, Func Offset: 0x90
	// Func End, Address: 0x140dbc, Func Offset: 0x9c
}

// 
// Start address: 0x140dc0
void sfFilterBlur(int depth)
{
	// Line 590, Address: 0x140dc0, Func Offset: 0
	// Line 591, Address: 0x140dc4, Func Offset: 0x4
	// Line 592, Address: 0x140dd0, Func Offset: 0x10
	// Line 594, Address: 0x140dd8, Func Offset: 0x18
	// Line 596, Address: 0x140df4, Func Offset: 0x34
	// Line 599, Address: 0x140e00, Func Offset: 0x40
	// Func End, Address: 0x140e0c, Func Offset: 0x4c
}

// 
// Start address: 0x140e10
void sfFilterBlurBL(int size, int depth)
{
	// Line 643, Address: 0x140e10, Func Offset: 0
	// Line 644, Address: 0x140e14, Func Offset: 0x4
	// Line 645, Address: 0x140e1c, Func Offset: 0xc
	// Line 646, Address: 0x140e28, Func Offset: 0x18
	// Line 647, Address: 0x140e34, Func Offset: 0x24
	// Line 649, Address: 0x140e38, Func Offset: 0x28
	// Line 650, Address: 0x140e44, Func Offset: 0x34
	// Line 652, Address: 0x140e48, Func Offset: 0x38
	// Line 654, Address: 0x140e68, Func Offset: 0x58
	// Line 657, Address: 0x140e74, Func Offset: 0x64
	// Func End, Address: 0x140e80, Func Offset: 0x70
}

// 
// Start address: 0x140e80
void sfFilterSharp(int depth)
{
	// Line 691, Address: 0x140e80, Func Offset: 0
	// Line 692, Address: 0x140e84, Func Offset: 0x4
	// Line 693, Address: 0x140e90, Func Offset: 0x10
	// Line 695, Address: 0x140e98, Func Offset: 0x18
	// Line 697, Address: 0x140eb4, Func Offset: 0x34
	// Line 700, Address: 0x140ec0, Func Offset: 0x40
	// Func End, Address: 0x140ecc, Func Offset: 0x4c
}

// 
// Start address: 0x140ed0
void sfFilterGrayscale(int depth)
{
	// Line 736, Address: 0x140ed4, Func Offset: 0x4
	// Line 737, Address: 0x140ed8, Func Offset: 0x8
	// Line 738, Address: 0x140ee4, Func Offset: 0x14
	// Line 740, Address: 0x140ee8, Func Offset: 0x18
	// Line 742, Address: 0x140ef4, Func Offset: 0x24
	// Line 745, Address: 0x140f00, Func Offset: 0x30
	// Func End, Address: 0x140f0c, Func Offset: 0x3c
}

// 
// Start address: 0x140f10
void sfFilterSepia(int depth)
{
	// Line 758, Address: 0x140f14, Func Offset: 0x4
	// Line 759, Address: 0x140f18, Func Offset: 0x8
	// Line 760, Address: 0x140f24, Func Offset: 0x14
	// Line 762, Address: 0x140f28, Func Offset: 0x18
	// Line 764, Address: 0x140f34, Func Offset: 0x24
	// Line 767, Address: 0x140f40, Func Offset: 0x30
	// Func End, Address: 0x140f4c, Func Offset: 0x3c
}

