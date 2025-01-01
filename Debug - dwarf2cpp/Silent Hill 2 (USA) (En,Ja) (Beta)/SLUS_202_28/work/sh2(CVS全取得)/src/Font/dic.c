

typedef unsigned short type_0[15];
typedef unsigned short type_1[7];
typedef unsigned short type_2[6];
typedef unsigned short type_3[128];
typedef unsigned short type_4[128][4];
typedef unsigned short type_5[4];

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
// Start address: 0x171220
unsigned short* dicSetStr(void* str)
{
	unsigned char c;
	unsigned short* spos;
	unsigned char* ucp;
	int wf;
	int latin;
	int code;
	// Line 30, Address: 0x171220, Func Offset: 0
	// Line 32, Address: 0x17123c, Func Offset: 0x1c
	// Line 33, Address: 0x171240, Func Offset: 0x20
	// Line 36, Address: 0x171258, Func Offset: 0x38
	// Line 37, Address: 0x171264, Func Offset: 0x44
	// Line 38, Address: 0x17126c, Func Offset: 0x4c
	// Line 39, Address: 0x171274, Func Offset: 0x54
	// Line 41, Address: 0x171290, Func Offset: 0x70
	// Line 42, Address: 0x17129c, Func Offset: 0x7c
	// Line 43, Address: 0x1712a8, Func Offset: 0x88
	// Line 44, Address: 0x1712bc, Func Offset: 0x9c
	// Line 45, Address: 0x1712d8, Func Offset: 0xb8
	// Line 46, Address: 0x1712e0, Func Offset: 0xc0
	// Line 47, Address: 0x1712f4, Func Offset: 0xd4
	// Line 48, Address: 0x1712fc, Func Offset: 0xdc
	// Line 49, Address: 0x171318, Func Offset: 0xf8
	// Line 50, Address: 0x17131c, Func Offset: 0xfc
	// Line 51, Address: 0x171340, Func Offset: 0x120
	// Line 52, Address: 0x17139c, Func Offset: 0x17c
	// Line 53, Address: 0x1713c0, Func Offset: 0x1a0
	// Line 54, Address: 0x17141c, Func Offset: 0x1fc
	// Line 55, Address: 0x171428, Func Offset: 0x208
	// Line 56, Address: 0x171430, Func Offset: 0x210
	// Line 58, Address: 0x171448, Func Offset: 0x228
	// Line 59, Address: 0x171450, Func Offset: 0x230
	// Line 60, Address: 0x171458, Func Offset: 0x238
	// Line 61, Address: 0x171464, Func Offset: 0x244
	// Line 62, Address: 0x17146c, Func Offset: 0x24c
	// Line 63, Address: 0x171470, Func Offset: 0x250
	// Line 64, Address: 0x171478, Func Offset: 0x258
	// Line 65, Address: 0x171484, Func Offset: 0x264
	// Line 66, Address: 0x171498, Func Offset: 0x278
	// Line 67, Address: 0x1714a4, Func Offset: 0x284
	// Line 68, Address: 0x1714ac, Func Offset: 0x28c
	// Line 69, Address: 0x1714b8, Func Offset: 0x298
	// Line 70, Address: 0x1714d8, Func Offset: 0x2b8
	// Line 71, Address: 0x1714e4, Func Offset: 0x2c4
	// Line 72, Address: 0x1714ec, Func Offset: 0x2cc
	// Line 73, Address: 0x1714f4, Func Offset: 0x2d4
	// Line 74, Address: 0x171500, Func Offset: 0x2e0
	// Line 75, Address: 0x17150c, Func Offset: 0x2ec
	// Line 76, Address: 0x171520, Func Offset: 0x300
	// Line 77, Address: 0x171588, Func Offset: 0x368
	// Line 78, Address: 0x171590, Func Offset: 0x370
	// Line 79, Address: 0x17159c, Func Offset: 0x37c
	// Line 80, Address: 0x171600, Func Offset: 0x3e0
	// Line 81, Address: 0x171608, Func Offset: 0x3e8
	// Line 82, Address: 0x171620, Func Offset: 0x400
	// Line 83, Address: 0x17162c, Func Offset: 0x40c
	// Line 84, Address: 0x171650, Func Offset: 0x430
	// Line 85, Address: 0x17165c, Func Offset: 0x43c
	// Line 86, Address: 0x171680, Func Offset: 0x460
	// Line 87, Address: 0x17168c, Func Offset: 0x46c
	// Line 88, Address: 0x1716b0, Func Offset: 0x490
	// Line 89, Address: 0x171718, Func Offset: 0x4f8
	// Line 90, Address: 0x171720, Func Offset: 0x500
	// Line 91, Address: 0x171738, Func Offset: 0x518
	// Line 92, Address: 0x1717a0, Func Offset: 0x580
	// Line 93, Address: 0x1717a8, Func Offset: 0x588
	// Line 94, Address: 0x1717c0, Func Offset: 0x5a0
	// Line 95, Address: 0x1717c4, Func Offset: 0x5a4
	// Line 96, Address: 0x1717e8, Func Offset: 0x5c8
	// Line 97, Address: 0x1717ec, Func Offset: 0x5cc
	// Line 98, Address: 0x17180c, Func Offset: 0x5ec
	// Line 99, Address: 0x171810, Func Offset: 0x5f0
	// Line 100, Address: 0x171818, Func Offset: 0x5f8
	// Line 101, Address: 0x171830, Func Offset: 0x610
	// Line 102, Address: 0x171840, Func Offset: 0x620
	// Line 103, Address: 0x171844, Func Offset: 0x624
	// Line 105, Address: 0x17184c, Func Offset: 0x62c
	// Line 106, Address: 0x17186c, Func Offset: 0x64c
	// Line 107, Address: 0x171870, Func Offset: 0x650
	// Line 108, Address: 0x171890, Func Offset: 0x670
	// Line 109, Address: 0x17189c, Func Offset: 0x67c
	// Line 110, Address: 0x1718c0, Func Offset: 0x6a0
	// Line 111, Address: 0x1718cc, Func Offset: 0x6ac
	// Line 112, Address: 0x1718f0, Func Offset: 0x6d0
	// Line 113, Address: 0x1718fc, Func Offset: 0x6dc
	// Line 114, Address: 0x171920, Func Offset: 0x700
	// Line 115, Address: 0x171928, Func Offset: 0x708
	// Line 116, Address: 0x171940, Func Offset: 0x720
	// Line 117, Address: 0x171950, Func Offset: 0x730
	// Line 118, Address: 0x171958, Func Offset: 0x738
	// Line 119, Address: 0x171964, Func Offset: 0x744
	// Line 121, Address: 0x17196c, Func Offset: 0x74c
	// Line 122, Address: 0x171978, Func Offset: 0x758
	// Line 123, Address: 0x1719e0, Func Offset: 0x7c0
	// Line 124, Address: 0x1719e8, Func Offset: 0x7c8
	// Line 125, Address: 0x171a00, Func Offset: 0x7e0
	// Line 126, Address: 0x171a08, Func Offset: 0x7e8
	// Line 127, Address: 0x171a10, Func Offset: 0x7f0
	// Line 128, Address: 0x171a28, Func Offset: 0x808
	// Line 129, Address: 0x171a2c, Func Offset: 0x80c
	// Line 130, Address: 0x171a34, Func Offset: 0x814
	// Line 131, Address: 0x171a58, Func Offset: 0x838
	// Line 132, Address: 0x171ab4, Func Offset: 0x894
	// Line 133, Address: 0x171ad8, Func Offset: 0x8b8
	// Line 134, Address: 0x171b34, Func Offset: 0x914
	// Line 135, Address: 0x171b40, Func Offset: 0x920
	// Line 136, Address: 0x171b48, Func Offset: 0x928
	// Line 137, Address: 0x171b4c, Func Offset: 0x92c
	// Line 138, Address: 0x171b54, Func Offset: 0x934
	// Line 139, Address: 0x171b70, Func Offset: 0x950
	// Line 140, Address: 0x171b78, Func Offset: 0x958
	// Line 141, Address: 0x171b90, Func Offset: 0x970
	// Line 142, Address: 0x171b94, Func Offset: 0x974
	// Line 143, Address: 0x171bb8, Func Offset: 0x998
	// Line 144, Address: 0x171c14, Func Offset: 0x9f4
	// Line 145, Address: 0x171c38, Func Offset: 0xa18
	// Line 146, Address: 0x171c94, Func Offset: 0xa74
	// Line 147, Address: 0x171ca0, Func Offset: 0xa80
	// Line 148, Address: 0x171ca8, Func Offset: 0xa88
	// Line 149, Address: 0x171cb4, Func Offset: 0xa94
	// Line 150, Address: 0x171cb8, Func Offset: 0xa98
	// Line 151, Address: 0x171ccc, Func Offset: 0xaac
	// Line 152, Address: 0x171cf0, Func Offset: 0xad0
	// Line 153, Address: 0x171cfc, Func Offset: 0xadc
	// Line 157, Address: 0x171d10, Func Offset: 0xaf0
	// Line 158, Address: 0x171d18, Func Offset: 0xaf8
	// Line 159, Address: 0x171d20, Func Offset: 0xb00
	// Line 160, Address: 0x171d28, Func Offset: 0xb08
	// Line 161, Address: 0x171d30, Func Offset: 0xb10
	// Line 162, Address: 0x171d54, Func Offset: 0xb34
	// Line 163, Address: 0x171d68, Func Offset: 0xb48
	// Line 164, Address: 0x171d6c, Func Offset: 0xb4c
	// Func End, Address: 0x171d90, Func Offset: 0xb70
}

// 
// Start address: 0x171d90
unsigned short dicTransCode(unsigned short code)
{
	unsigned char cl;
	unsigned char ch;
	// Line 167, Address: 0x171d90, Func Offset: 0
	// Line 169, Address: 0x171d98, Func Offset: 0x8
	// Line 170, Address: 0x171da4, Func Offset: 0x14
	// Line 171, Address: 0x171da8, Func Offset: 0x18
	// Line 173, Address: 0x171df4, Func Offset: 0x64
	// Line 175, Address: 0x171e04, Func Offset: 0x74
	// Line 177, Address: 0x171e14, Func Offset: 0x84
	// Line 179, Address: 0x171e24, Func Offset: 0x94
	// Line 181, Address: 0x171e34, Func Offset: 0xa4
	// Line 183, Address: 0x171e44, Func Offset: 0xb4
	// Line 185, Address: 0x171e54, Func Offset: 0xc4
	// Line 186, Address: 0x171e88, Func Offset: 0xf8
	// Line 187, Address: 0x171ea8, Func Offset: 0x118
	// Line 188, Address: 0x171ebc, Func Offset: 0x12c
	// Line 190, Address: 0x171eec, Func Offset: 0x15c
	// Line 191, Address: 0x171f0c, Func Offset: 0x17c
	// Line 192, Address: 0x171f20, Func Offset: 0x190
	// Line 194, Address: 0x171f50, Func Offset: 0x1c0
	// Line 195, Address: 0x171f70, Func Offset: 0x1e0
	// Line 196, Address: 0x171f84, Func Offset: 0x1f4
	// Line 198, Address: 0x171fb4, Func Offset: 0x224
	// Line 199, Address: 0x171fd4, Func Offset: 0x244
	// Line 200, Address: 0x171fe8, Func Offset: 0x258
	// Line 202, Address: 0x172018, Func Offset: 0x288
	// Line 203, Address: 0x172038, Func Offset: 0x2a8
	// Line 204, Address: 0x17204c, Func Offset: 0x2bc
	// Line 206, Address: 0x17207c, Func Offset: 0x2ec
	// Line 207, Address: 0x172080, Func Offset: 0x2f0
	// Func End, Address: 0x172090, Func Offset: 0x300
}

// 
// Start address: 0x172090
unsigned short dicCodeAsc(unsigned char c)
{
	unsigned short num4[4];
	unsigned short num3[6];
	unsigned short num2[7];
	unsigned short num1[15];
	// Line 210, Address: 0x172090, Func Offset: 0
	// Line 211, Address: 0x172094, Func Offset: 0x4
	// Line 213, Address: 0x1720c0, Func Offset: 0x30
	// Line 214, Address: 0x1720e4, Func Offset: 0x54
	// Line 215, Address: 0x172100, Func Offset: 0x70
	// Line 216, Address: 0x172114, Func Offset: 0x84
	// Line 217, Address: 0x172130, Func Offset: 0xa0
	// Line 218, Address: 0x172158, Func Offset: 0xc8
	// Line 219, Address: 0x172174, Func Offset: 0xe4
	// Line 220, Address: 0x17219c, Func Offset: 0x10c
	// Line 221, Address: 0x1721b8, Func Offset: 0x128
	// Line 222, Address: 0x1721e0, Func Offset: 0x150
	// Line 224, Address: 0x172210, Func Offset: 0x180
	// Func End, Address: 0x17221c, Func Offset: 0x18c
}

// 
// Start address: 0x172220
unsigned short dicCode81(unsigned char c)
{
	// Line 228, Address: 0x172220, Func Offset: 0
	// Line 231, Address: 0x1722c0, Func Offset: 0xa0
	// Line 233, Address: 0x1722cc, Func Offset: 0xac
	// Line 234, Address: 0x1722e4, Func Offset: 0xc4
	// Line 235, Address: 0x172300, Func Offset: 0xe0
	// Line 236, Address: 0x17231c, Func Offset: 0xfc
	// Line 237, Address: 0x172338, Func Offset: 0x118
	// Line 238, Address: 0x172354, Func Offset: 0x134
	// Line 239, Address: 0x172370, Func Offset: 0x150
	// Line 241, Address: 0x172390, Func Offset: 0x170
	// Func End, Address: 0x172398, Func Offset: 0x178
}

// 
// Start address: 0x1723a0
unsigned short dicCode82(unsigned char c)
{
	// Line 245, Address: 0x1723a0, Func Offset: 0
	// Line 247, Address: 0x172404, Func Offset: 0x64
	// Line 249, Address: 0x172410, Func Offset: 0x70
	// Line 250, Address: 0x17242c, Func Offset: 0x8c
	// Line 251, Address: 0x172448, Func Offset: 0xa8
	// Line 253, Address: 0x17246c, Func Offset: 0xcc
	// Func End, Address: 0x172474, Func Offset: 0xd4
}

// 
// Start address: 0x172480
unsigned short dicCode83(unsigned char c)
{
	// Line 257, Address: 0x172480, Func Offset: 0
	// Line 259, Address: 0x1724d8, Func Offset: 0x58
	// Line 261, Address: 0x1724e4, Func Offset: 0x64
	// Line 262, Address: 0x172500, Func Offset: 0x80
	// Line 263, Address: 0x17251c, Func Offset: 0x9c
	// Line 265, Address: 0x172540, Func Offset: 0xc0
	// Func End, Address: 0x172548, Func Offset: 0xc8
}

// 
// Start address: 0x172550
unsigned short dicCode84(unsigned char c)
{
	// Line 269, Address: 0x172550, Func Offset: 0
	// Line 271, Address: 0x1725a8, Func Offset: 0x58
	// Line 273, Address: 0x1725b4, Func Offset: 0x64
	// Line 274, Address: 0x1725d0, Func Offset: 0x80
	// Line 275, Address: 0x1725ec, Func Offset: 0x9c
	// Line 277, Address: 0x172610, Func Offset: 0xc0
	// Func End, Address: 0x172618, Func Offset: 0xc8
}

// 
// Start address: 0x172620
unsigned short dicCode87(unsigned char c)
{
	// Line 281, Address: 0x172620, Func Offset: 0
	// Line 283, Address: 0x17266c, Func Offset: 0x4c
	// Line 285, Address: 0x172678, Func Offset: 0x58
	// Line 286, Address: 0x172694, Func Offset: 0x74
	// Line 287, Address: 0x1726b0, Func Offset: 0x90
	// Line 289, Address: 0x1726d0, Func Offset: 0xb0
	// Func End, Address: 0x1726d8, Func Offset: 0xb8
}

