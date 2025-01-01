

typedef unsigned short type_0[15];
typedef unsigned short type_1[7];
typedef unsigned short type_2[6];
typedef unsigned short type_3[4];
typedef unsigned short type_4[128];
typedef unsigned short type_5[128][4];

unsigned short buf_switch;
unsigned short str_buf[128][4];

unsigned short* dicSetStr(void* str);
void dicSetStrBuffer(void* buffer, void* str);
unsigned short dicTransCode(unsigned short code);
unsigned short dicCodeAsc(unsigned char c);
unsigned short dicCode81(unsigned char c);
unsigned short dicCode82(unsigned char c);
unsigned short dicCode83(unsigned char c);
unsigned short dicCode84(unsigned char c);
unsigned short dicCode87(unsigned char c);

// 
// Start address: 0x141d10
unsigned short* dicSetStr(void* str)
{
	unsigned short* spos;
	// Line 35, Address: 0x141d10, Func Offset: 0
	// Line 37, Address: 0x141d14, Func Offset: 0x4
	// Line 35, Address: 0x141d18, Func Offset: 0x8
	// Line 37, Address: 0x141d1c, Func Offset: 0xc
	// Line 35, Address: 0x141d20, Func Offset: 0x10
	// Line 37, Address: 0x141d28, Func Offset: 0x18
	// Line 39, Address: 0x141d44, Func Offset: 0x34
	// Line 38, Address: 0x141d48, Func Offset: 0x38
	// Line 39, Address: 0x141d58, Func Offset: 0x48
	// Line 40, Address: 0x141d60, Func Offset: 0x50
	// Line 41, Address: 0x141d64, Func Offset: 0x54
	// Func End, Address: 0x141d74, Func Offset: 0x64
}

// 
// Start address: 0x141d80
void dicSetStrBuffer(void* buffer, void* str)
{
	int code;
	int latin;
	int wf;
	unsigned char* ucp;
	unsigned short* spos;
	unsigned char c;
	// Line 48, Address: 0x141d80, Func Offset: 0
	// Line 50, Address: 0x141d94, Func Offset: 0x14
	// Line 48, Address: 0x141d98, Func Offset: 0x18
	// Line 51, Address: 0x141d9c, Func Offset: 0x1c
	// Line 54, Address: 0x141da0, Func Offset: 0x20
	// Line 55, Address: 0x141da8, Func Offset: 0x28
	// Line 57, Address: 0x141db0, Func Offset: 0x30
	// Line 56, Address: 0x141db4, Func Offset: 0x34
	// Line 58, Address: 0x141db8, Func Offset: 0x38
	// Line 62, Address: 0x141dc0, Func Offset: 0x40
	// Line 61, Address: 0x141dc4, Func Offset: 0x44
	// Line 63, Address: 0x141dd0, Func Offset: 0x50
	// Line 64, Address: 0x141ddc, Func Offset: 0x5c
	// Line 66, Address: 0x141df0, Func Offset: 0x70
	// Line 67, Address: 0x141dfc, Func Offset: 0x7c
	// Line 68, Address: 0x141e00, Func Offset: 0x80
	// Line 69, Address: 0x141e14, Func Offset: 0x94
	// Line 70, Address: 0x141e28, Func Offset: 0xa8
	// Line 71, Address: 0x141e2c, Func Offset: 0xac
	// Line 72, Address: 0x141e44, Func Offset: 0xc4
	// Line 73, Address: 0x141e48, Func Offset: 0xc8
	// Line 75, Address: 0x141e60, Func Offset: 0xe0
	// Line 76, Address: 0x141e80, Func Offset: 0x100
	// Line 77, Address: 0x141ec8, Func Offset: 0x148
	// Line 78, Address: 0x141ee8, Func Offset: 0x168
	// Line 79, Address: 0x141f30, Func Offset: 0x1b0
	// Line 80, Address: 0x141f38, Func Offset: 0x1b8
	// Line 81, Address: 0x141f40, Func Offset: 0x1c0
	// Line 83, Address: 0x141f54, Func Offset: 0x1d4
	// Line 84, Address: 0x141f5c, Func Offset: 0x1dc
	// Line 85, Address: 0x141f64, Func Offset: 0x1e4
	// Line 86, Address: 0x141f6c, Func Offset: 0x1ec
	// Line 87, Address: 0x141f70, Func Offset: 0x1f0
	// Line 88, Address: 0x141f74, Func Offset: 0x1f4
	// Line 89, Address: 0x141f80, Func Offset: 0x200
	// Line 90, Address: 0x141f8c, Func Offset: 0x20c
	// Line 91, Address: 0x141fa0, Func Offset: 0x220
	// Line 92, Address: 0x141fac, Func Offset: 0x22c
	// Line 93, Address: 0x141fb8, Func Offset: 0x238
	// Line 94, Address: 0x141fc4, Func Offset: 0x244
	// Line 95, Address: 0x141fe0, Func Offset: 0x260
	// Line 96, Address: 0x141ff8, Func Offset: 0x278
	// Line 97, Address: 0x141ffc, Func Offset: 0x27c
	// Line 98, Address: 0x142008, Func Offset: 0x288
	// Line 99, Address: 0x14200c, Func Offset: 0x28c
	// Line 100, Address: 0x142018, Func Offset: 0x298
	// Line 101, Address: 0x142020, Func Offset: 0x2a0
	// Line 102, Address: 0x142034, Func Offset: 0x2b4
	// Line 103, Address: 0x14208c, Func Offset: 0x30c
	// Line 104, Address: 0x142094, Func Offset: 0x314
	// Line 105, Address: 0x1420a4, Func Offset: 0x324
	// Line 106, Address: 0x1420fc, Func Offset: 0x37c
	// Line 107, Address: 0x142104, Func Offset: 0x384
	// Line 108, Address: 0x142120, Func Offset: 0x3a0
	// Line 109, Address: 0x142128, Func Offset: 0x3a8
	// Line 110, Address: 0x142148, Func Offset: 0x3c8
	// Line 111, Address: 0x142150, Func Offset: 0x3d0
	// Line 112, Address: 0x142170, Func Offset: 0x3f0
	// Line 113, Address: 0x142178, Func Offset: 0x3f8
	// Line 114, Address: 0x14218c, Func Offset: 0x40c
	// Line 115, Address: 0x142190, Func Offset: 0x410
	// Line 116, Address: 0x1421a4, Func Offset: 0x424
	// Line 117, Address: 0x1421a8, Func Offset: 0x428
	// Line 119, Address: 0x1421c8, Func Offset: 0x448
	// Line 121, Address: 0x1421e8, Func Offset: 0x468
	// Line 123, Address: 0x142204, Func Offset: 0x484
	// Line 124, Address: 0x142208, Func Offset: 0x488
	// Line 125, Address: 0x142220, Func Offset: 0x4a0
	// Line 126, Address: 0x142228, Func Offset: 0x4a8
	// Line 125, Address: 0x14222c, Func Offset: 0x4ac
	// Line 127, Address: 0x142230, Func Offset: 0x4b0
	// Line 129, Address: 0x142238, Func Offset: 0x4b8
	// Line 130, Address: 0x142240, Func Offset: 0x4c0
	// Line 129, Address: 0x142244, Func Offset: 0x4c4
	// Line 131, Address: 0x142258, Func Offset: 0x4d8
	// Line 132, Address: 0x142278, Func Offset: 0x4f8
	// Line 133, Address: 0x142280, Func Offset: 0x500
	// Line 134, Address: 0x142294, Func Offset: 0x514
	// Line 135, Address: 0x142298, Func Offset: 0x518
	// Line 136, Address: 0x1422ac, Func Offset: 0x52c
	// Line 137, Address: 0x1422b0, Func Offset: 0x530
	// Line 138, Address: 0x1422d0, Func Offset: 0x550
	// Line 139, Address: 0x1422d8, Func Offset: 0x558
	// Line 140, Address: 0x1422f8, Func Offset: 0x578
	// Line 141, Address: 0x142300, Func Offset: 0x580
	// Line 142, Address: 0x142320, Func Offset: 0x5a0
	// Line 143, Address: 0x142324, Func Offset: 0x5a4
	// Line 144, Address: 0x14233c, Func Offset: 0x5bc
	// Line 145, Address: 0x142344, Func Offset: 0x5c4
	// Line 146, Address: 0x142350, Func Offset: 0x5d0
	// Line 147, Address: 0x142358, Func Offset: 0x5d8
	// Line 149, Address: 0x142360, Func Offset: 0x5e0
	// Line 150, Address: 0x14236c, Func Offset: 0x5ec
	// Line 152, Address: 0x142370, Func Offset: 0x5f0
	// Line 151, Address: 0x142374, Func Offset: 0x5f4
	// Line 153, Address: 0x142378, Func Offset: 0x5f8
	// Line 154, Address: 0x142390, Func Offset: 0x610
	// Line 155, Address: 0x142398, Func Offset: 0x618
	// Line 154, Address: 0x14239c, Func Offset: 0x61c
	// Line 156, Address: 0x1423a0, Func Offset: 0x620
	// Line 158, Address: 0x1423a8, Func Offset: 0x628
	// Line 159, Address: 0x1423b0, Func Offset: 0x630
	// Line 158, Address: 0x1423b4, Func Offset: 0x634
	// Line 160, Address: 0x1423c8, Func Offset: 0x648
	// Line 161, Address: 0x1423dc, Func Offset: 0x65c
	// Line 162, Address: 0x142434, Func Offset: 0x6b4
	// Line 163, Address: 0x14243c, Func Offset: 0x6bc
	// Line 164, Address: 0x14244c, Func Offset: 0x6cc
	// Line 165, Address: 0x142450, Func Offset: 0x6d0
	// Line 166, Address: 0x142464, Func Offset: 0x6e4
	// Line 167, Address: 0x142468, Func Offset: 0x6e8
	// Line 168, Address: 0x142488, Func Offset: 0x708
	// Line 169, Address: 0x142490, Func Offset: 0x710
	// Line 170, Address: 0x142494, Func Offset: 0x714
	// Line 172, Address: 0x1424b0, Func Offset: 0x730
	// Line 171, Address: 0x1424b4, Func Offset: 0x734
	// Line 173, Address: 0x1424b8, Func Offset: 0x738
	// Line 174, Address: 0x1424d8, Func Offset: 0x758
	// Line 175, Address: 0x142520, Func Offset: 0x7a0
	// Line 176, Address: 0x142540, Func Offset: 0x7c0
	// Line 177, Address: 0x142588, Func Offset: 0x808
	// Line 178, Address: 0x142598, Func Offset: 0x818
	// Line 180, Address: 0x1425a0, Func Offset: 0x820
	// Line 181, Address: 0x1425a8, Func Offset: 0x828
	// Line 182, Address: 0x1425c0, Func Offset: 0x840
	// Line 183, Address: 0x1425c4, Func Offset: 0x844
	// Line 185, Address: 0x1425e0, Func Offset: 0x860
	// Line 186, Address: 0x142600, Func Offset: 0x880
	// Line 187, Address: 0x142648, Func Offset: 0x8c8
	// Line 188, Address: 0x142668, Func Offset: 0x8e8
	// Line 189, Address: 0x1426b0, Func Offset: 0x930
	// Line 190, Address: 0x1426b8, Func Offset: 0x938
	// Line 191, Address: 0x1426c0, Func Offset: 0x940
	// Line 193, Address: 0x1426cc, Func Offset: 0x94c
	// Line 194, Address: 0x1426e4, Func Offset: 0x964
	// Line 195, Address: 0x142700, Func Offset: 0x980
	// Line 196, Address: 0x142708, Func Offset: 0x988
	// Line 197, Address: 0x14271c, Func Offset: 0x99c
	// Line 198, Address: 0x142720, Func Offset: 0x9a0
	// Line 200, Address: 0x142728, Func Offset: 0x9a8
	// Line 201, Address: 0x142730, Func Offset: 0x9b0
	// Line 202, Address: 0x142744, Func Offset: 0x9c4
	// Line 205, Address: 0x14275c, Func Offset: 0x9dc
	// Line 206, Address: 0x142760, Func Offset: 0x9e0
	// Line 207, Address: 0x142768, Func Offset: 0x9e8
	// Line 208, Address: 0x142770, Func Offset: 0x9f0
	// Line 209, Address: 0x142774, Func Offset: 0x9f4
	// Line 208, Address: 0x142778, Func Offset: 0x9f8
	// Line 209, Address: 0x14277c, Func Offset: 0x9fc
	// Line 210, Address: 0x142780, Func Offset: 0xa00
	// Func End, Address: 0x1427a0, Func Offset: 0xa20
}

// 
// Start address: 0x1427a0
unsigned short dicTransCode(unsigned short code)
{
	unsigned char ch;
	unsigned char cl;
	// Line 217, Address: 0x1427a4, Func Offset: 0x4
	// Line 219, Address: 0x1427a8, Func Offset: 0x8
	// Line 217, Address: 0x1427ac, Func Offset: 0xc
	// Line 219, Address: 0x1427b0, Func Offset: 0x10
	// Line 221, Address: 0x1427b4, Func Offset: 0x14
	// Line 223, Address: 0x1427f8, Func Offset: 0x58
	// Line 225, Address: 0x142808, Func Offset: 0x68
	// Line 227, Address: 0x142818, Func Offset: 0x78
	// Line 229, Address: 0x142828, Func Offset: 0x88
	// Line 231, Address: 0x142838, Func Offset: 0x98
	// Line 233, Address: 0x142848, Func Offset: 0xa8
	// Line 235, Address: 0x14285c, Func Offset: 0xbc
	// Line 236, Address: 0x142880, Func Offset: 0xe0
	// Line 237, Address: 0x14289c, Func Offset: 0xfc
	// Line 238, Address: 0x1428b0, Func Offset: 0x110
	// Line 239, Address: 0x1428dc, Func Offset: 0x13c
	// Line 240, Address: 0x1428e0, Func Offset: 0x140
	// Line 241, Address: 0x1428fc, Func Offset: 0x15c
	// Line 242, Address: 0x142910, Func Offset: 0x170
	// Line 243, Address: 0x14293c, Func Offset: 0x19c
	// Line 244, Address: 0x142940, Func Offset: 0x1a0
	// Line 245, Address: 0x14295c, Func Offset: 0x1bc
	// Line 246, Address: 0x142970, Func Offset: 0x1d0
	// Line 247, Address: 0x14299c, Func Offset: 0x1fc
	// Line 248, Address: 0x1429a0, Func Offset: 0x200
	// Line 249, Address: 0x1429bc, Func Offset: 0x21c
	// Line 250, Address: 0x1429d0, Func Offset: 0x230
	// Line 251, Address: 0x1429fc, Func Offset: 0x25c
	// Line 252, Address: 0x142a00, Func Offset: 0x260
	// Line 253, Address: 0x142a1c, Func Offset: 0x27c
	// Line 254, Address: 0x142a30, Func Offset: 0x290
	// Line 255, Address: 0x142a5c, Func Offset: 0x2bc
	// Line 256, Address: 0x142a60, Func Offset: 0x2c0
	// Line 257, Address: 0x142a68, Func Offset: 0x2c8
	// Func End, Address: 0x142a74, Func Offset: 0x2d4
}

// 
// Start address: 0x142a80
unsigned short dicCodeAsc(unsigned char c)
{
	unsigned short num4[4];
	unsigned short num3[6];
	unsigned short num2[7];
	unsigned short num1[15];
	// Line 267, Address: 0x142a84, Func Offset: 0x4
	// Line 268, Address: 0x142a98, Func Offset: 0x18
	// Line 269, Address: 0x142ac0, Func Offset: 0x40
	// Line 270, Address: 0x142ad8, Func Offset: 0x58
	// Line 271, Address: 0x142b00, Func Offset: 0x80
	// Line 272, Address: 0x142b18, Func Offset: 0x98
	// Line 273, Address: 0x142b40, Func Offset: 0xc0
	// Line 275, Address: 0x142b70, Func Offset: 0xf0
	// Func End, Address: 0x142b78, Func Offset: 0xf8
}

// 
// Start address: 0x142b80
unsigned short dicCode81(unsigned char c)
{
	// Line 280, Address: 0x142b84, Func Offset: 0x4
	// Line 283, Address: 0x142c20, Func Offset: 0xa0
	// Line 285, Address: 0x142c28, Func Offset: 0xa8
	// Line 286, Address: 0x142c40, Func Offset: 0xc0
	// Line 287, Address: 0x142c58, Func Offset: 0xd8
	// Line 288, Address: 0x142c70, Func Offset: 0xf0
	// Line 289, Address: 0x142c88, Func Offset: 0x108
	// Line 290, Address: 0x142ca0, Func Offset: 0x120
	// Line 291, Address: 0x142cb8, Func Offset: 0x138
	// Line 293, Address: 0x142cd0, Func Offset: 0x150
	// Func End, Address: 0x142cd8, Func Offset: 0x158
}

// 
// Start address: 0x142ce0
unsigned short dicCode82(unsigned char c)
{
	// Line 298, Address: 0x142ce4, Func Offset: 0x4
	// Line 300, Address: 0x142d40, Func Offset: 0x60
	// Line 302, Address: 0x142d48, Func Offset: 0x68
	// Line 303, Address: 0x142d60, Func Offset: 0x80
	// Line 304, Address: 0x142d78, Func Offset: 0x98
	// Line 306, Address: 0x142d98, Func Offset: 0xb8
	// Func End, Address: 0x142da0, Func Offset: 0xc0
}

// 
// Start address: 0x142da0
unsigned short dicCode83(unsigned char c)
{
	// Line 311, Address: 0x142da4, Func Offset: 0x4
	// Line 313, Address: 0x142df8, Func Offset: 0x58
	// Line 315, Address: 0x142e00, Func Offset: 0x60
	// Line 316, Address: 0x142e18, Func Offset: 0x78
	// Line 317, Address: 0x142e30, Func Offset: 0x90
	// Line 319, Address: 0x142e50, Func Offset: 0xb0
	// Func End, Address: 0x142e58, Func Offset: 0xb8
}

// 
// Start address: 0x142e60
unsigned short dicCode84(unsigned char c)
{
	// Line 324, Address: 0x142e64, Func Offset: 0x4
	// Line 326, Address: 0x142eb0, Func Offset: 0x50
	// Line 328, Address: 0x142eb8, Func Offset: 0x58
	// Line 329, Address: 0x142ed0, Func Offset: 0x70
	// Line 330, Address: 0x142ee8, Func Offset: 0x88
	// Line 332, Address: 0x142f08, Func Offset: 0xa8
	// Func End, Address: 0x142f10, Func Offset: 0xb0
}

// 
// Start address: 0x142f10
unsigned short dicCode87(unsigned char c)
{
	// Line 337, Address: 0x142f14, Func Offset: 0x4
	// Line 339, Address: 0x142f58, Func Offset: 0x48
	// Line 341, Address: 0x142f60, Func Offset: 0x50
	// Line 342, Address: 0x142f78, Func Offset: 0x68
	// Line 343, Address: 0x142f90, Func Offset: 0x80
	// Line 345, Address: 0x142fa8, Func Offset: 0x98
	// Func End, Address: 0x142fb0, Func Offset: 0xa0
}

