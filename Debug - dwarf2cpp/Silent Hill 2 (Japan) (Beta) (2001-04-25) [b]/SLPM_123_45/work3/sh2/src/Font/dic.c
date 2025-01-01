

typedef unsigned short type_0[6];
typedef unsigned short type_1[128];
typedef unsigned short type_2[4];
typedef unsigned short type_3[128][4];
typedef unsigned short type_4[15];
typedef unsigned short type_5[7];

unsigned short buf_switch;
unsigned short str_buf[128][4];

unsigned short* dicSetStr(void* str);
unsigned short dicTransCode(unsigned short code);
unsigned short dicCodeAsc(unsigned char c);
unsigned short dicCode81(unsigned char c);
unsigned short dicCode82(unsigned char c);
unsigned short dicCode83(unsigned char c);
unsigned short dicCode84(unsigned char c);
unsigned short dicCode87(unsigned char c);

// 
// Start address: 0x175380
unsigned short* dicSetStr(void* str)
{
	unsigned char c;
	unsigned short* spos;
	unsigned char* ucp;
	int wf;
	int latin;
	int code;
	// Line 30, Address: 0x175380, Func Offset: 0
	// Line 32, Address: 0x1753b0, Func Offset: 0x30
	// Line 33, Address: 0x1753b8, Func Offset: 0x38
	// Line 36, Address: 0x1753d8, Func Offset: 0x58
	// Line 37, Address: 0x1753e4, Func Offset: 0x64
	// Line 38, Address: 0x1753fc, Func Offset: 0x7c
	// Line 39, Address: 0x175404, Func Offset: 0x84
	// Line 41, Address: 0x175424, Func Offset: 0xa4
	// Line 42, Address: 0x175434, Func Offset: 0xb4
	// Line 43, Address: 0x175448, Func Offset: 0xc8
	// Line 44, Address: 0x175460, Func Offset: 0xe0
	// Line 45, Address: 0x175484, Func Offset: 0x104
	// Line 46, Address: 0x175494, Func Offset: 0x114
	// Line 47, Address: 0x1754ac, Func Offset: 0x12c
	// Line 48, Address: 0x1754c4, Func Offset: 0x144
	// Line 49, Address: 0x1754e8, Func Offset: 0x168
	// Line 50, Address: 0x1754f0, Func Offset: 0x170
	// Line 51, Address: 0x175518, Func Offset: 0x198
	// Line 52, Address: 0x175590, Func Offset: 0x210
	// Line 53, Address: 0x1755b8, Func Offset: 0x238
	// Line 54, Address: 0x175638, Func Offset: 0x2b8
	// Line 55, Address: 0x175644, Func Offset: 0x2c4
	// Line 56, Address: 0x17564c, Func Offset: 0x2cc
	// Line 58, Address: 0x17566c, Func Offset: 0x2ec
	// Line 59, Address: 0x175674, Func Offset: 0x2f4
	// Line 60, Address: 0x175684, Func Offset: 0x304
	// Line 61, Address: 0x175698, Func Offset: 0x318
	// Line 62, Address: 0x1756ac, Func Offset: 0x32c
	// Line 63, Address: 0x1756b0, Func Offset: 0x330
	// Line 64, Address: 0x1756b8, Func Offset: 0x338
	// Line 65, Address: 0x1756c8, Func Offset: 0x348
	// Line 66, Address: 0x1756e0, Func Offset: 0x360
	// Line 67, Address: 0x1756fc, Func Offset: 0x37c
	// Line 68, Address: 0x175704, Func Offset: 0x384
	// Line 69, Address: 0x175714, Func Offset: 0x394
	// Line 70, Address: 0x175740, Func Offset: 0x3c0
	// Line 71, Address: 0x175758, Func Offset: 0x3d8
	// Line 72, Address: 0x175760, Func Offset: 0x3e0
	// Line 73, Address: 0x175778, Func Offset: 0x3f8
	// Line 74, Address: 0x175788, Func Offset: 0x408
	// Line 75, Address: 0x17579c, Func Offset: 0x41c
	// Line 76, Address: 0x1757b4, Func Offset: 0x434
	// Line 77, Address: 0x175844, Func Offset: 0x4c4
	// Line 78, Address: 0x17584c, Func Offset: 0x4cc
	// Line 79, Address: 0x17585c, Func Offset: 0x4dc
	// Line 80, Address: 0x1758f8, Func Offset: 0x578
	// Line 81, Address: 0x175900, Func Offset: 0x580
	// Line 82, Address: 0x175920, Func Offset: 0x5a0
	// Line 83, Address: 0x175934, Func Offset: 0x5b4
	// Line 84, Address: 0x175960, Func Offset: 0x5e0
	// Line 85, Address: 0x175974, Func Offset: 0x5f4
	// Line 86, Address: 0x1759a0, Func Offset: 0x620
	// Line 87, Address: 0x1759b4, Func Offset: 0x634
	// Line 88, Address: 0x1759e0, Func Offset: 0x660
	// Line 89, Address: 0x175a78, Func Offset: 0x6f8
	// Line 90, Address: 0x175a80, Func Offset: 0x700
	// Line 91, Address: 0x175aa0, Func Offset: 0x720
	// Line 92, Address: 0x175b38, Func Offset: 0x7b8
	// Line 93, Address: 0x175b40, Func Offset: 0x7c0
	// Line 94, Address: 0x175b60, Func Offset: 0x7e0
	// Line 95, Address: 0x175b68, Func Offset: 0x7e8
	// Line 96, Address: 0x175b90, Func Offset: 0x810
	// Line 97, Address: 0x175b94, Func Offset: 0x814
	// Line 98, Address: 0x175bbc, Func Offset: 0x83c
	// Line 99, Address: 0x175bc8, Func Offset: 0x848
	// Line 100, Address: 0x175bdc, Func Offset: 0x85c
	// Line 101, Address: 0x175c00, Func Offset: 0x880
	// Line 102, Address: 0x175c1c, Func Offset: 0x89c
	// Line 103, Address: 0x175c20, Func Offset: 0x8a0
	// Line 105, Address: 0x175c28, Func Offset: 0x8a8
	// Line 106, Address: 0x175c58, Func Offset: 0x8d8
	// Line 107, Address: 0x175c5c, Func Offset: 0x8dc
	// Line 108, Address: 0x175c88, Func Offset: 0x908
	// Line 109, Address: 0x175c9c, Func Offset: 0x91c
	// Line 110, Address: 0x175cc8, Func Offset: 0x948
	// Line 111, Address: 0x175cdc, Func Offset: 0x95c
	// Line 112, Address: 0x175d08, Func Offset: 0x988
	// Line 113, Address: 0x175d1c, Func Offset: 0x99c
	// Line 114, Address: 0x175d48, Func Offset: 0x9c8
	// Line 115, Address: 0x175d5c, Func Offset: 0x9dc
	// Line 116, Address: 0x175d7c, Func Offset: 0x9fc
	// Line 117, Address: 0x175d9c, Func Offset: 0xa1c
	// Line 118, Address: 0x175da4, Func Offset: 0xa24
	// Line 119, Address: 0x175db8, Func Offset: 0xa38
	// Line 121, Address: 0x175dc0, Func Offset: 0xa40
	// Line 122, Address: 0x175dd0, Func Offset: 0xa50
	// Line 123, Address: 0x175e6c, Func Offset: 0xaec
	// Line 124, Address: 0x175e74, Func Offset: 0xaf4
	// Line 125, Address: 0x175e98, Func Offset: 0xb18
	// Line 126, Address: 0x175eac, Func Offset: 0xb2c
	// Line 127, Address: 0x175ec4, Func Offset: 0xb44
	// Line 128, Address: 0x175ee8, Func Offset: 0xb68
	// Line 129, Address: 0x175ef0, Func Offset: 0xb70
	// Line 130, Address: 0x175f08, Func Offset: 0xb88
	// Line 131, Address: 0x175f30, Func Offset: 0xbb0
	// Line 132, Address: 0x175fb4, Func Offset: 0xc34
	// Line 133, Address: 0x175fe0, Func Offset: 0xc60
	// Line 134, Address: 0x176064, Func Offset: 0xce4
	// Line 135, Address: 0x176070, Func Offset: 0xcf0
	// Line 136, Address: 0x176084, Func Offset: 0xd04
	// Line 137, Address: 0x176088, Func Offset: 0xd08
	// Line 138, Address: 0x176090, Func Offset: 0xd10
	// Line 139, Address: 0x1760b0, Func Offset: 0xd30
	// Line 140, Address: 0x1760c4, Func Offset: 0xd44
	// Line 141, Address: 0x1760e8, Func Offset: 0xd68
	// Line 142, Address: 0x1760f0, Func Offset: 0xd70
	// Line 143, Address: 0x176118, Func Offset: 0xd98
	// Line 144, Address: 0x1761a4, Func Offset: 0xe24
	// Line 145, Address: 0x1761d0, Func Offset: 0xe50
	// Line 146, Address: 0x176254, Func Offset: 0xed4
	// Line 147, Address: 0x176260, Func Offset: 0xee0
	// Line 148, Address: 0x176268, Func Offset: 0xee8
	// Line 149, Address: 0x176278, Func Offset: 0xef8
	// Line 150, Address: 0x176280, Func Offset: 0xf00
	// Line 151, Address: 0x176298, Func Offset: 0xf18
	// Line 152, Address: 0x1762c4, Func Offset: 0xf44
	// Line 153, Address: 0x1762d8, Func Offset: 0xf58
	// Line 157, Address: 0x1762f0, Func Offset: 0xf70
	// Line 158, Address: 0x176308, Func Offset: 0xf88
	// Line 159, Address: 0x176310, Func Offset: 0xf90
	// Line 160, Address: 0x176324, Func Offset: 0xfa4
	// Line 161, Address: 0x17633c, Func Offset: 0xfbc
	// Line 162, Address: 0x176368, Func Offset: 0xfe8
	// Line 163, Address: 0x176380, Func Offset: 0x1000
	// Line 164, Address: 0x176384, Func Offset: 0x1004
	// Func End, Address: 0x1763b8, Func Offset: 0x1038
}

// 
// Start address: 0x1763c0
unsigned short dicTransCode(unsigned short code)
{
	unsigned char cl;
	unsigned char ch;
	// Line 167, Address: 0x1763c0, Func Offset: 0
	// Line 169, Address: 0x1763d4, Func Offset: 0x14
	// Line 170, Address: 0x1763ec, Func Offset: 0x2c
	// Line 171, Address: 0x176404, Func Offset: 0x44
	// Line 173, Address: 0x176454, Func Offset: 0x94
	// Line 175, Address: 0x176468, Func Offset: 0xa8
	// Line 177, Address: 0x17647c, Func Offset: 0xbc
	// Line 179, Address: 0x176490, Func Offset: 0xd0
	// Line 181, Address: 0x1764a4, Func Offset: 0xe4
	// Line 183, Address: 0x1764b8, Func Offset: 0xf8
	// Line 185, Address: 0x1764cc, Func Offset: 0x10c
	// Line 186, Address: 0x176508, Func Offset: 0x148
	// Line 187, Address: 0x176538, Func Offset: 0x178
	// Line 188, Address: 0x176550, Func Offset: 0x190
	// Line 190, Address: 0x176584, Func Offset: 0x1c4
	// Line 191, Address: 0x1765b4, Func Offset: 0x1f4
	// Line 192, Address: 0x1765cc, Func Offset: 0x20c
	// Line 194, Address: 0x176600, Func Offset: 0x240
	// Line 195, Address: 0x176630, Func Offset: 0x270
	// Line 196, Address: 0x176648, Func Offset: 0x288
	// Line 198, Address: 0x17667c, Func Offset: 0x2bc
	// Line 199, Address: 0x1766ac, Func Offset: 0x2ec
	// Line 200, Address: 0x1766c4, Func Offset: 0x304
	// Line 202, Address: 0x1766f8, Func Offset: 0x338
	// Line 203, Address: 0x176728, Func Offset: 0x368
	// Line 204, Address: 0x176740, Func Offset: 0x380
	// Line 206, Address: 0x176774, Func Offset: 0x3b4
	// Line 207, Address: 0x176778, Func Offset: 0x3b8
	// Func End, Address: 0x176790, Func Offset: 0x3d0
}

// 
// Start address: 0x176790
unsigned short dicCodeAsc(unsigned char c)
{
	unsigned short num4[4];
	unsigned short num3[6];
	unsigned short num2[7];
	unsigned short num1[15];
	// Line 210, Address: 0x176790, Func Offset: 0
	// Line 211, Address: 0x176798, Func Offset: 0x8
	// Line 213, Address: 0x1767c4, Func Offset: 0x34
	// Line 214, Address: 0x1767e8, Func Offset: 0x58
	// Line 215, Address: 0x176804, Func Offset: 0x74
	// Line 216, Address: 0x176818, Func Offset: 0x88
	// Line 217, Address: 0x176838, Func Offset: 0xa8
	// Line 218, Address: 0x17687c, Func Offset: 0xec
	// Line 219, Address: 0x1768a8, Func Offset: 0x118
	// Line 220, Address: 0x1768ec, Func Offset: 0x15c
	// Line 221, Address: 0x176918, Func Offset: 0x188
	// Line 222, Address: 0x17695c, Func Offset: 0x1cc
	// Line 223, Address: 0x176988, Func Offset: 0x1f8
	// Line 224, Address: 0x1769b0, Func Offset: 0x220
	// Func End, Address: 0x1769bc, Func Offset: 0x22c
}

// 
// Start address: 0x1769c0
unsigned short dicCode81(unsigned char c)
{
	// Line 227, Address: 0x1769c0, Func Offset: 0
	// Line 228, Address: 0x1769c8, Func Offset: 0x8
	// Line 231, Address: 0x176acc, Func Offset: 0x10c
	// Line 233, Address: 0x176ad8, Func Offset: 0x118
	// Line 234, Address: 0x176af8, Func Offset: 0x138
	// Line 235, Address: 0x176b24, Func Offset: 0x164
	// Line 236, Address: 0x176b50, Func Offset: 0x190
	// Line 237, Address: 0x176b7c, Func Offset: 0x1bc
	// Line 238, Address: 0x176ba8, Func Offset: 0x1e8
	// Line 239, Address: 0x176bd4, Func Offset: 0x214
	// Line 240, Address: 0x176c00, Func Offset: 0x240
	// Line 241, Address: 0x176c04, Func Offset: 0x244
	// Func End, Address: 0x176c10, Func Offset: 0x250
}

// 
// Start address: 0x176c10
unsigned short dicCode82(unsigned char c)
{
	// Line 244, Address: 0x176c10, Func Offset: 0
	// Line 245, Address: 0x176c18, Func Offset: 0x8
	// Line 247, Address: 0x176cb8, Func Offset: 0xa8
	// Line 249, Address: 0x176cc4, Func Offset: 0xb4
	// Line 250, Address: 0x176cf0, Func Offset: 0xe0
	// Line 251, Address: 0x176d1c, Func Offset: 0x10c
	// Line 252, Address: 0x176d48, Func Offset: 0x138
	// Line 253, Address: 0x176d58, Func Offset: 0x148
	// Func End, Address: 0x176d64, Func Offset: 0x154
}

// 
// Start address: 0x176d70
unsigned short dicCode83(unsigned char c)
{
	// Line 256, Address: 0x176d70, Func Offset: 0
	// Line 257, Address: 0x176d78, Func Offset: 0x8
	// Line 259, Address: 0x176e04, Func Offset: 0x94
	// Line 261, Address: 0x176e10, Func Offset: 0xa0
	// Line 262, Address: 0x176e3c, Func Offset: 0xcc
	// Line 263, Address: 0x176e68, Func Offset: 0xf8
	// Line 264, Address: 0x176e94, Func Offset: 0x124
	// Line 265, Address: 0x176ea4, Func Offset: 0x134
	// Func End, Address: 0x176eb0, Func Offset: 0x140
}

// 
// Start address: 0x176eb0
unsigned short dicCode84(unsigned char c)
{
	// Line 268, Address: 0x176eb0, Func Offset: 0
	// Line 269, Address: 0x176eb8, Func Offset: 0x8
	// Line 271, Address: 0x176f44, Func Offset: 0x94
	// Line 273, Address: 0x176f50, Func Offset: 0xa0
	// Line 274, Address: 0x176f7c, Func Offset: 0xcc
	// Line 275, Address: 0x176fa8, Func Offset: 0xf8
	// Line 276, Address: 0x176fd4, Func Offset: 0x124
	// Line 277, Address: 0x176fe4, Func Offset: 0x134
	// Func End, Address: 0x176ff0, Func Offset: 0x140
}

// 
// Start address: 0x176ff0
unsigned short dicCode87(unsigned char c)
{
	// Line 280, Address: 0x176ff0, Func Offset: 0
	// Line 281, Address: 0x176ff8, Func Offset: 0x8
	// Line 283, Address: 0x177070, Func Offset: 0x80
	// Line 285, Address: 0x17707c, Func Offset: 0x8c
	// Line 286, Address: 0x1770a8, Func Offset: 0xb8
	// Line 287, Address: 0x1770d4, Func Offset: 0xe4
	// Line 288, Address: 0x1770f4, Func Offset: 0x104
	// Line 289, Address: 0x177104, Func Offset: 0x114
	// Func End, Address: 0x177110, Func Offset: 0x120
}

