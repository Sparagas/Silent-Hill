typedef struct sgBSPNode;
typedef struct _anon0;
typedef struct _anon1;


typedef float type[4];

struct sgBSPNode
{
	_anon1 plane;
	int positive_offset;
	int negative_offset;
};

struct _anon0
{
	float start[4];
	float end[4];
};

struct _anon1
{
	float abcd[4];
};


sgBSPNode* sgBSPTestPoint_In(sgBSPNode* node, float* point);
int sgBSPTestPoint(sgBSPNode* root_node, float* point);
sgBSPNode* BSPIntersectLine_Trv(sgBSPNode* node, float* from, float* to, int* flag);
sgBSPNode* sgBSPTestLineFirstFrontHit(sgBSPNode* root_node, _anon0* line);
sgBSPNode* BSPIntersectLineFromBack_Trv(sgBSPNode* node, float* from, float* to, int* flag);
sgBSPNode* sgBSPTestLineFirstBackHit(sgBSPNode* node, _anon0* line);

// 
// Start address: 0x173380
sgBSPNode* sgBSPTestPoint_In(sgBSPNode* node, float* point)
{
	// Line 9, Address: 0x173380, Func Offset: 0
	// Line 11, Address: 0x173384, Func Offset: 0x4
	// Line 9, Address: 0x173388, Func Offset: 0x8
	// Line 11, Address: 0x17338c, Func Offset: 0xc
	// Line 13, Address: 0x173414, Func Offset: 0x94
	// Line 14, Address: 0x173428, Func Offset: 0xa8
	// Line 15, Address: 0x173430, Func Offset: 0xb0
	// Line 17, Address: 0x173440, Func Offset: 0xc0
	// Line 20, Address: 0x17344c, Func Offset: 0xcc
	// Line 21, Address: 0x173460, Func Offset: 0xe0
	// Line 22, Address: 0x173468, Func Offset: 0xe8
	// Line 24, Address: 0x173478, Func Offset: 0xf8
	// Line 26, Address: 0x173480, Func Offset: 0x100
	// Func End, Address: 0x17348c, Func Offset: 0x10c
}

// 
// Start address: 0x173490
int sgBSPTestPoint(sgBSPNode* root_node, float* point)
{
	// Line 35, Address: 0x173490, Func Offset: 0
	// Line 37, Address: 0x173498, Func Offset: 0x8
	// Line 40, Address: 0x1734a0, Func Offset: 0x10
	// Line 37, Address: 0x1734a4, Func Offset: 0x14
	// Line 40, Address: 0x1734a8, Func Offset: 0x18
	// Func End, Address: 0x1734b0, Func Offset: 0x20
}

// 
// Start address: 0x1734b0
sgBSPNode* BSPIntersectLine_Trv(sgBSPNode* node, float* from, float* to, int* flag)
{
	float t;
	int s1;
	int s2;
	float mid[4];
	sgBSPNode* p;
	sgBSPNode* from_side;
	sgBSPNode* to_side;
	sgBSPNode* posi;
	sgBSPNode* nega;
	_anon0 line;
	// Line 144, Address: 0x1734b0, Func Offset: 0
	// Line 154, Address: 0x1734f4, Func Offset: 0x44
	// Line 155, Address: 0x17355c, Func Offset: 0xac
	// Line 154, Address: 0x173560, Func Offset: 0xb0
	// Line 155, Address: 0x173564, Func Offset: 0xb4
	// Line 156, Address: 0x1735cc, Func Offset: 0x11c
	// Line 157, Address: 0x1735e4, Func Offset: 0x134
	// Line 160, Address: 0x1735f0, Func Offset: 0x140
	// Line 161, Address: 0x1735f4, Func Offset: 0x144
	// Line 162, Address: 0x1735fc, Func Offset: 0x14c
	// Line 163, Address: 0x173604, Func Offset: 0x154
	// Line 165, Address: 0x173614, Func Offset: 0x164
	// Line 167, Address: 0x173620, Func Offset: 0x170
	// Line 168, Address: 0x173628, Func Offset: 0x178
	// Line 170, Address: 0x173630, Func Offset: 0x180
	// Line 171, Address: 0x173638, Func Offset: 0x188
	// Line 173, Address: 0x17364c, Func Offset: 0x19c
	// Line 175, Address: 0x173650, Func Offset: 0x1a0
	// Line 176, Address: 0x173658, Func Offset: 0x1a8
	// Line 178, Address: 0x173660, Func Offset: 0x1b0
	// Line 179, Address: 0x173668, Func Offset: 0x1b8
	// Line 181, Address: 0x173674, Func Offset: 0x1c4
	// Line 180, Address: 0x173678, Func Offset: 0x1c8
	// Line 184, Address: 0x17367c, Func Offset: 0x1cc
	// Line 185, Address: 0x173680, Func Offset: 0x1d0
	// Line 189, Address: 0x173688, Func Offset: 0x1d8
	// Line 191, Address: 0x173698, Func Offset: 0x1e8
	// Line 192, Address: 0x1736a0, Func Offset: 0x1f0
	// Line 193, Address: 0x1736b0, Func Offset: 0x200
	// Line 195, Address: 0x1736b8, Func Offset: 0x208
	// Line 196, Address: 0x1736c4, Func Offset: 0x214
	// Line 198, Address: 0x1736d4, Func Offset: 0x224
	// Line 200, Address: 0x1736d8, Func Offset: 0x228
	// Line 201, Address: 0x1736e4, Func Offset: 0x234
	// Line 214, Address: 0x1736e8, Func Offset: 0x238
	// Line 220, Address: 0x1736f0, Func Offset: 0x240
	// Line 221, Address: 0x1736fc, Func Offset: 0x24c
	// Line 222, Address: 0x173708, Func Offset: 0x258
	// Line 227, Address: 0x173714, Func Offset: 0x264
	// Line 230, Address: 0x173720, Func Offset: 0x270
	// Line 231, Address: 0x173728, Func Offset: 0x278
	// Line 232, Address: 0x17372c, Func Offset: 0x27c
	// Line 238, Address: 0x173730, Func Offset: 0x280
	// Line 239, Address: 0x173738, Func Offset: 0x288
	// Line 240, Address: 0x173744, Func Offset: 0x294
	// Line 241, Address: 0x17374c, Func Offset: 0x29c
	// Line 249, Address: 0x173754, Func Offset: 0x2a4
	// Line 250, Address: 0x173758, Func Offset: 0x2a8
	// Line 251, Address: 0x173764, Func Offset: 0x2b4
	// Line 253, Address: 0x17376c, Func Offset: 0x2bc
	// Line 255, Address: 0x173770, Func Offset: 0x2c0
	// Line 256, Address: 0x173778, Func Offset: 0x2c8
	// Line 257, Address: 0x173788, Func Offset: 0x2d8
	// Line 258, Address: 0x173790, Func Offset: 0x2e0
	// Line 259, Address: 0x17379c, Func Offset: 0x2ec
	// Line 261, Address: 0x1737a8, Func Offset: 0x2f8
	// Line 262, Address: 0x1737ac, Func Offset: 0x2fc
	// Line 264, Address: 0x1737b0, Func Offset: 0x300
	// Line 265, Address: 0x1737b8, Func Offset: 0x308
	// Line 267, Address: 0x1737c4, Func Offset: 0x314
	// Line 266, Address: 0x1737c8, Func Offset: 0x318
	// Line 269, Address: 0x1737cc, Func Offset: 0x31c
	// Line 271, Address: 0x1737d0, Func Offset: 0x320
	// Func End, Address: 0x173800, Func Offset: 0x350
}

// 
// Start address: 0x173800
sgBSPNode* sgBSPTestLineFirstFrontHit(sgBSPNode* root_node, _anon0* line)
{
	sgBSPNode* hit_node;
	int flag;
	// Line 282, Address: 0x173800, Func Offset: 0
	// Line 285, Address: 0x173804, Func Offset: 0x4
	// Line 282, Address: 0x173808, Func Offset: 0x8
	// Line 285, Address: 0x17380c, Func Offset: 0xc
	// Line 286, Address: 0x173818, Func Offset: 0x18
	// Line 287, Address: 0x173824, Func Offset: 0x24
	// Line 289, Address: 0x173828, Func Offset: 0x28
	// Func End, Address: 0x173834, Func Offset: 0x34
}

// 
// Start address: 0x173840
sgBSPNode* BSPIntersectLineFromBack_Trv(sgBSPNode* node, float* from, float* to, int* flag)
{
	float t;
	int s1;
	int s2;
	float mid[4];
	sgBSPNode* p;
	sgBSPNode* from_side;
	sgBSPNode* to_side;
	sgBSPNode* posi;
	sgBSPNode* nega;
	_anon0 line;
	// Line 302, Address: 0x173840, Func Offset: 0
	// Line 312, Address: 0x173884, Func Offset: 0x44
	// Line 313, Address: 0x1738ec, Func Offset: 0xac
	// Line 312, Address: 0x1738f0, Func Offset: 0xb0
	// Line 313, Address: 0x1738f4, Func Offset: 0xb4
	// Line 314, Address: 0x17395c, Func Offset: 0x11c
	// Line 315, Address: 0x173974, Func Offset: 0x134
	// Line 318, Address: 0x173980, Func Offset: 0x140
	// Line 319, Address: 0x173984, Func Offset: 0x144
	// Line 320, Address: 0x17398c, Func Offset: 0x14c
	// Line 322, Address: 0x173994, Func Offset: 0x154
	// Line 323, Address: 0x1739a0, Func Offset: 0x160
	// Line 325, Address: 0x1739b4, Func Offset: 0x174
	// Line 327, Address: 0x1739c0, Func Offset: 0x180
	// Line 328, Address: 0x1739c8, Func Offset: 0x188
	// Line 329, Address: 0x1739d0, Func Offset: 0x190
	// Line 333, Address: 0x1739e0, Func Offset: 0x1a0
	// Line 334, Address: 0x1739e8, Func Offset: 0x1a8
	// Line 335, Address: 0x1739f0, Func Offset: 0x1b0
	// Line 336, Address: 0x1739f8, Func Offset: 0x1b8
	// Line 338, Address: 0x173a04, Func Offset: 0x1c4
	// Line 337, Address: 0x173a08, Func Offset: 0x1c8
	// Line 341, Address: 0x173a0c, Func Offset: 0x1cc
	// Line 342, Address: 0x173a10, Func Offset: 0x1d0
	// Line 346, Address: 0x173a18, Func Offset: 0x1d8
	// Line 348, Address: 0x173a28, Func Offset: 0x1e8
	// Line 349, Address: 0x173a30, Func Offset: 0x1f0
	// Line 350, Address: 0x173a40, Func Offset: 0x200
	// Line 351, Address: 0x173a48, Func Offset: 0x208
	// Line 352, Address: 0x173a54, Func Offset: 0x214
	// Line 353, Address: 0x173a64, Func Offset: 0x224
	// Line 367, Address: 0x173a68, Func Offset: 0x228
	// Line 373, Address: 0x173a70, Func Offset: 0x230
	// Line 374, Address: 0x173a7c, Func Offset: 0x23c
	// Line 375, Address: 0x173a88, Func Offset: 0x248
	// Line 380, Address: 0x173a94, Func Offset: 0x254
	// Line 383, Address: 0x173aa0, Func Offset: 0x260
	// Line 384, Address: 0x173aa8, Func Offset: 0x268
	// Line 385, Address: 0x173aac, Func Offset: 0x26c
	// Line 389, Address: 0x173ab0, Func Offset: 0x270
	// Line 390, Address: 0x173ab8, Func Offset: 0x278
	// Line 391, Address: 0x173ac4, Func Offset: 0x284
	// Line 392, Address: 0x173acc, Func Offset: 0x28c
	// Line 394, Address: 0x173ad4, Func Offset: 0x294
	// Line 395, Address: 0x173ad8, Func Offset: 0x298
	// Line 396, Address: 0x173ae4, Func Offset: 0x2a4
	// Line 398, Address: 0x173aec, Func Offset: 0x2ac
	// Line 400, Address: 0x173af0, Func Offset: 0x2b0
	// Line 401, Address: 0x173af8, Func Offset: 0x2b8
	// Line 402, Address: 0x173b08, Func Offset: 0x2c8
	// Line 403, Address: 0x173b10, Func Offset: 0x2d0
	// Line 404, Address: 0x173b1c, Func Offset: 0x2dc
	// Line 406, Address: 0x173b28, Func Offset: 0x2e8
	// Line 407, Address: 0x173b2c, Func Offset: 0x2ec
	// Line 409, Address: 0x173b30, Func Offset: 0x2f0
	// Line 410, Address: 0x173b38, Func Offset: 0x2f8
	// Line 412, Address: 0x173b44, Func Offset: 0x304
	// Line 411, Address: 0x173b48, Func Offset: 0x308
	// Line 414, Address: 0x173b4c, Func Offset: 0x30c
	// Line 416, Address: 0x173b50, Func Offset: 0x310
	// Func End, Address: 0x173b80, Func Offset: 0x340
}

// 
// Start address: 0x173b80
sgBSPNode* sgBSPTestLineFirstBackHit(sgBSPNode* node, _anon0* line)
{
	int flag;
	sgBSPNode* hit_node;
	// Line 426, Address: 0x173b80, Func Offset: 0
	// Line 430, Address: 0x173b84, Func Offset: 0x4
	// Line 426, Address: 0x173b88, Func Offset: 0x8
	// Line 430, Address: 0x173b8c, Func Offset: 0xc
	// Line 431, Address: 0x173b98, Func Offset: 0x18
	// Line 432, Address: 0x173ba4, Func Offset: 0x24
	// Line 435, Address: 0x173ba8, Func Offset: 0x28
	// Func End, Address: 0x173bb4, Func Offset: 0x34
}

