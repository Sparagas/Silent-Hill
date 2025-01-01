typedef union sgQsortEasyData;
typedef struct EnemyRailJunction;
typedef struct EnemyRailData;


typedef unsigned char type_0[0];
typedef EnemyRailData type_1[0];
typedef EnemyRailData type_2[0];
typedef EnemyRailData type_3[0];

union sgQsortEasyData
{
	unsigned long ul;
	int value;
	void* data;
};

struct EnemyRailJunction
{
	short x;
	short z;
	unsigned char next_offset;
	unsigned char branch[0];
};

struct EnemyRailData
{
	int scene;
	EnemyRailJunction* data;
};

EnemyRailData en_raildata_test[0];
EnemyRailData en_raildata_bd[0];
EnemyRailData en_raildata_hs[0];

EnemyRailJunction* get_data_base_address();
EnemyRailJunction* get_junction_address(EnemyRailJunction* prd, int junction);
int get_all_junction_number(EnemyRailJunction* prj);
void EnemyRailGetJunctionPosition(int junction, float* pos);
int EnemyRailGetJunctionBranchNumber(int junction);
int EnemyRailGetJunctionBranch(int junction, int index);
float EnemyRailGetJunctionDirection(int junction, int index);
float calc_intersection_line_xz(float* intersection, float* line_edge1, float* line_edge2, float* point, float* direction);
float EnemyRailGetNearPoint(float* point, int* junction, float* pos);
float EnemyRailGetNearPointWithDirection(float* point, int* junction, float* pos, float direction);

// 
// Start address: 0x289780
EnemyRailJunction* get_data_base_address()
{
	EnemyRailData* prd;
	int n;
	// Line 49, Address: 0x289780, Func Offset: 0
	// Line 52, Address: 0x28978c, Func Offset: 0xc
	// Line 53, Address: 0x2897c4, Func Offset: 0x44
	// Line 54, Address: 0x2897c8, Func Offset: 0x48
	// Line 55, Address: 0x2897cc, Func Offset: 0x4c
	// Line 56, Address: 0x2897d4, Func Offset: 0x54
	// Line 57, Address: 0x2897d8, Func Offset: 0x58
	// Line 58, Address: 0x2897dc, Func Offset: 0x5c
	// Line 60, Address: 0x2897e4, Func Offset: 0x64
	// Line 61, Address: 0x2897e8, Func Offset: 0x68
	// Line 64, Address: 0x2897f0, Func Offset: 0x70
	// Line 66, Address: 0x2897f8, Func Offset: 0x78
	// Line 68, Address: 0x289800, Func Offset: 0x80
	// Line 69, Address: 0x289808, Func Offset: 0x88
	// Line 70, Address: 0x289818, Func Offset: 0x98
	// Line 72, Address: 0x289824, Func Offset: 0xa4
	// Line 73, Address: 0x28982c, Func Offset: 0xac
	// Line 74, Address: 0x289830, Func Offset: 0xb0
	// Line 75, Address: 0x289834, Func Offset: 0xb4
	// Line 76, Address: 0x289840, Func Offset: 0xc0
	// Line 77, Address: 0x289848, Func Offset: 0xc8
	// Func End, Address: 0x289858, Func Offset: 0xd8
}

// 
// Start address: 0x289860
EnemyRailJunction* get_junction_address(EnemyRailJunction* prd, int junction)
{
	// Line 98, Address: 0x289860, Func Offset: 0
	// Line 99, Address: 0x289868, Func Offset: 0x8
	// Line 100, Address: 0x289880, Func Offset: 0x20
	// Line 102, Address: 0x2898a0, Func Offset: 0x40
	// Func End, Address: 0x2898a8, Func Offset: 0x48
}

// 
// Start address: 0x2898b0
int get_all_junction_number(EnemyRailJunction* prj)
{
	int n;
	int nofs;
	// Line 111, Address: 0x2898b0, Func Offset: 0
	// Line 113, Address: 0x2898c0, Func Offset: 0x10
	// Line 114, Address: 0x2898d0, Func Offset: 0x20
	// Line 116, Address: 0x2898d4, Func Offset: 0x24
	// Line 115, Address: 0x2898d8, Func Offset: 0x28
	// Line 116, Address: 0x2898dc, Func Offset: 0x2c
	// Line 118, Address: 0x2898f0, Func Offset: 0x40
	// Func End, Address: 0x2898f8, Func Offset: 0x48
}

// 
// Start address: 0x289900
void EnemyRailGetJunctionPosition(int junction, float* pos)
{
	EnemyRailJunction* prj;
	// Line 125, Address: 0x289900, Func Offset: 0
	// Line 127, Address: 0x289914, Func Offset: 0x14
	// Line 128, Address: 0x289928, Func Offset: 0x28
	// Line 129, Address: 0x28992c, Func Offset: 0x2c
	// Line 130, Address: 0x289940, Func Offset: 0x40
	// Line 131, Address: 0x28995c, Func Offset: 0x5c
	// Func End, Address: 0x289970, Func Offset: 0x70
}

// 
// Start address: 0x289970
int EnemyRailGetJunctionBranchNumber(int junction)
{
	EnemyRailJunction* prj;
	int n;
	// Line 138, Address: 0x289970, Func Offset: 0
	// Line 141, Address: 0x28997c, Func Offset: 0xc
	// Line 143, Address: 0x289990, Func Offset: 0x20
	// Line 144, Address: 0x2899a0, Func Offset: 0x30
	// Line 145, Address: 0x2899a4, Func Offset: 0x34
	// Line 147, Address: 0x2899c0, Func Offset: 0x50
	// Line 146, Address: 0x2899c8, Func Offset: 0x58
	// Line 147, Address: 0x2899cc, Func Offset: 0x5c
	// Func End, Address: 0x2899d4, Func Offset: 0x64
}

// 
// Start address: 0x2899e0
int EnemyRailGetJunctionBranch(int junction, int index)
{
	EnemyRailJunction* prj;
	// Line 155, Address: 0x2899e0, Func Offset: 0
	// Line 157, Address: 0x2899f4, Func Offset: 0x14
	// Line 158, Address: 0x289a08, Func Offset: 0x28
	// Line 159, Address: 0x289a0c, Func Offset: 0x2c
	// Line 158, Address: 0x289a18, Func Offset: 0x38
	// Line 159, Address: 0x289a1c, Func Offset: 0x3c
	// Func End, Address: 0x289a24, Func Offset: 0x44
}

// 
// Start address: 0x289a30
float EnemyRailGetJunctionDirection(int junction, int index)
{
	EnemyRailJunction* prd;
	EnemyRailJunction* prj;
	EnemyRailJunction* prj2;
	// Line 167, Address: 0x289a30, Func Offset: 0
	// Line 170, Address: 0x289a44, Func Offset: 0x14
	// Line 171, Address: 0x289a50, Func Offset: 0x20
	// Line 172, Address: 0x289a5c, Func Offset: 0x2c
	// Line 173, Address: 0x289a70, Func Offset: 0x40
	// Line 175, Address: 0x289aac, Func Offset: 0x7c
	// Func End, Address: 0x289ac0, Func Offset: 0x90
}

// 
// Start address: 0x289ac0
float calc_intersection_line_xz(float* intersection, float* line_edge1, float* line_edge2, float* point, float* direction)
{
	float lx;
	float lz;
	float lx2;
	float lz2;
	float ldx;
	float ldz;
	float px;
	float pz;
	float pdx;
	float pdz;
	float plx;
	float plz;
	float r;
	float c;
	float d;
	float ldr;
	float cx;
	float cz;
	int f;
	// Line 199, Address: 0x289ac0, Func Offset: 0
	// Line 201, Address: 0x289ac4, Func Offset: 0x4
	// Line 203, Address: 0x289ac8, Func Offset: 0x8
	// Line 200, Address: 0x289acc, Func Offset: 0xc
	// Line 202, Address: 0x289ad0, Func Offset: 0x10
	// Line 204, Address: 0x289ad4, Func Offset: 0x14
	// Line 205, Address: 0x289ad8, Func Offset: 0x18
	// Line 206, Address: 0x289adc, Func Offset: 0x1c
	// Line 207, Address: 0x289ae0, Func Offset: 0x20
	// Line 208, Address: 0x289ae4, Func Offset: 0x24
	// Line 209, Address: 0x289ae8, Func Offset: 0x28
	// Line 210, Address: 0x289af0, Func Offset: 0x30
	// Line 212, Address: 0x289b08, Func Offset: 0x48
	// Line 213, Address: 0x289b10, Func Offset: 0x50
	// Line 214, Address: 0x289b14, Func Offset: 0x54
	// Line 215, Address: 0x289b18, Func Offset: 0x58
	// Line 216, Address: 0x289b1c, Func Offset: 0x5c
	// Line 217, Address: 0x289b20, Func Offset: 0x60
	// Line 218, Address: 0x289b24, Func Offset: 0x64
	// Line 219, Address: 0x289b28, Func Offset: 0x68
	// Line 220, Address: 0x289b34, Func Offset: 0x74
	// Line 221, Address: 0x289b3c, Func Offset: 0x7c
	// Line 222, Address: 0x289b40, Func Offset: 0x80
	// Line 225, Address: 0x289b48, Func Offset: 0x88
	// Line 229, Address: 0x289b4c, Func Offset: 0x8c
	// Line 222, Address: 0x289b50, Func Offset: 0x90
	// Line 225, Address: 0x289b54, Func Offset: 0x94
	// Line 224, Address: 0x289b5c, Func Offset: 0x9c
	// Line 223, Address: 0x289b60, Func Offset: 0xa0
	// Line 225, Address: 0x289b64, Func Offset: 0xa4
	// Line 228, Address: 0x289b68, Func Offset: 0xa8
	// Line 229, Address: 0x289b74, Func Offset: 0xb4
	// Line 231, Address: 0x289b88, Func Offset: 0xc8
	// Line 234, Address: 0x289ba0, Func Offset: 0xe0
	// Line 235, Address: 0x289ba8, Func Offset: 0xe8
	// Line 236, Address: 0x289bac, Func Offset: 0xec
	// Line 239, Address: 0x289bb0, Func Offset: 0xf0
	// Line 240, Address: 0x289bb8, Func Offset: 0xf8
	// Line 241, Address: 0x289bc0, Func Offset: 0x100
	// Line 242, Address: 0x289bc8, Func Offset: 0x108
	// Line 243, Address: 0x289bdc, Func Offset: 0x11c
	// Line 244, Address: 0x289be0, Func Offset: 0x120
	// Line 245, Address: 0x289be4, Func Offset: 0x124
	// Line 246, Address: 0x289be8, Func Offset: 0x128
	// Line 247, Address: 0x289bec, Func Offset: 0x12c
	// Line 248, Address: 0x289bf0, Func Offset: 0x130
	// Line 249, Address: 0x289bf4, Func Offset: 0x134
	// Line 250, Address: 0x289c00, Func Offset: 0x140
	// Line 251, Address: 0x289c0c, Func Offset: 0x14c
	// Line 253, Address: 0x289c10, Func Offset: 0x150
	// Line 254, Address: 0x289c14, Func Offset: 0x154
	// Line 255, Address: 0x289c2c, Func Offset: 0x16c
	// Line 257, Address: 0x289c30, Func Offset: 0x170
	// Line 259, Address: 0x289c34, Func Offset: 0x174
	// Line 261, Address: 0x289c40, Func Offset: 0x180
	// Line 264, Address: 0x289c58, Func Offset: 0x198
	// Line 265, Address: 0x289c60, Func Offset: 0x1a0
	// Line 266, Address: 0x289c64, Func Offset: 0x1a4
	// Line 268, Address: 0x289c68, Func Offset: 0x1a8
	// Line 270, Address: 0x289c6c, Func Offset: 0x1ac
	// Line 271, Address: 0x289c70, Func Offset: 0x1b0
	// Line 272, Address: 0x289c78, Func Offset: 0x1b8
	// Line 273, Address: 0x289c7c, Func Offset: 0x1bc
	// Line 274, Address: 0x289c80, Func Offset: 0x1c0
	// Line 275, Address: 0x289c84, Func Offset: 0x1c4
	// Line 276, Address: 0x289c88, Func Offset: 0x1c8
	// Line 277, Address: 0x289c8c, Func Offset: 0x1cc
	// Line 278, Address: 0x289c90, Func Offset: 0x1d0
	// Line 279, Address: 0x289ca4, Func Offset: 0x1e4
	// Line 280, Address: 0x289ca8, Func Offset: 0x1e8
	// Line 281, Address: 0x289cac, Func Offset: 0x1ec
	// Line 282, Address: 0x289cb0, Func Offset: 0x1f0
	// Line 283, Address: 0x289cb4, Func Offset: 0x1f4
	// Line 284, Address: 0x289cc8, Func Offset: 0x208
	// Line 286, Address: 0x289cd8, Func Offset: 0x218
	// Func End, Address: 0x289ce0, Func Offset: 0x220
}

// 
// Start address: 0x289ce0
float EnemyRailGetNearPoint(float* point, int* junction, float* pos)
{
	sgQsortEasyData* base_data;
	sgQsortEasyData* pd;
	EnemyRailJunction* prd;
	EnemyRailJunction* prj;
	EnemyRailJunction* prj2;
	EnemyRailJunction* tp;
	float* tpos;
	float* ipos;
	float* jpos1;
	float* jpos2;
	float* jposb;
	int i;
	int j;
	int n;
	int m;
	float d;
	float dm;
	float rot;
	// Line 296, Address: 0x289ce0, Func Offset: 0
	// Line 304, Address: 0x289ce4, Func Offset: 0x4
	// Line 296, Address: 0x289ce8, Func Offset: 0x8
	// Line 304, Address: 0x289d20, Func Offset: 0x40
	// Line 305, Address: 0x289d38, Func Offset: 0x58
	// Line 304, Address: 0x289d3c, Func Offset: 0x5c
	// Line 307, Address: 0x289d40, Func Offset: 0x60
	// Line 305, Address: 0x289d44, Func Offset: 0x64
	// Line 306, Address: 0x289d48, Func Offset: 0x68
	// Line 308, Address: 0x289d50, Func Offset: 0x70
	// Line 309, Address: 0x289d58, Func Offset: 0x78
	// Line 311, Address: 0x289d5c, Func Offset: 0x7c
	// Line 312, Address: 0x289d68, Func Offset: 0x88
	// Line 314, Address: 0x289d74, Func Offset: 0x94
	// Line 316, Address: 0x289d88, Func Offset: 0xa8
	// Line 318, Address: 0x289d98, Func Offset: 0xb8
	// Line 319, Address: 0x289d9c, Func Offset: 0xbc
	// Line 320, Address: 0x289da0, Func Offset: 0xc0
	// Line 321, Address: 0x289da8, Func Offset: 0xc8
	// Line 323, Address: 0x289de0, Func Offset: 0x100
	// Line 324, Address: 0x289dec, Func Offset: 0x10c
	// Line 325, Address: 0x289df0, Func Offset: 0x110
	// Line 326, Address: 0x289e10, Func Offset: 0x130
	// Line 327, Address: 0x289e14, Func Offset: 0x134
	// Line 328, Address: 0x289e24, Func Offset: 0x144
	// Line 331, Address: 0x289e2c, Func Offset: 0x14c
	// Line 332, Address: 0x289e40, Func Offset: 0x160
	// Line 333, Address: 0x289e48, Func Offset: 0x168
	// Line 334, Address: 0x289e4c, Func Offset: 0x16c
	// Line 335, Address: 0x289e54, Func Offset: 0x174
	// Line 336, Address: 0x289e58, Func Offset: 0x178
	// Line 337, Address: 0x289e60, Func Offset: 0x180
	// Line 340, Address: 0x289e64, Func Offset: 0x184
	// Line 338, Address: 0x289e68, Func Offset: 0x188
	// Line 339, Address: 0x289e88, Func Offset: 0x1a8
	// Line 341, Address: 0x289ea4, Func Offset: 0x1c4
	// Line 343, Address: 0x289eb0, Func Offset: 0x1d0
	// Line 344, Address: 0x289ec0, Func Offset: 0x1e0
	// Line 346, Address: 0x289ec4, Func Offset: 0x1e4
	// Line 344, Address: 0x289ed4, Func Offset: 0x1f4
	// Line 345, Address: 0x289eec, Func Offset: 0x20c
	// Line 346, Address: 0x289f04, Func Offset: 0x224
	// Line 348, Address: 0x289f0c, Func Offset: 0x22c
	// Line 350, Address: 0x289f18, Func Offset: 0x238
	// Line 349, Address: 0x289f1c, Func Offset: 0x23c
	// Line 350, Address: 0x289f20, Func Offset: 0x240
	// Line 351, Address: 0x289f2c, Func Offset: 0x24c
	// Line 352, Address: 0x289f38, Func Offset: 0x258
	// Line 353, Address: 0x289f3c, Func Offset: 0x25c
	// Line 352, Address: 0x289f40, Func Offset: 0x260
	// Line 355, Address: 0x289f44, Func Offset: 0x264
	// Line 356, Address: 0x289f58, Func Offset: 0x278
	// Line 357, Address: 0x289f6c, Func Offset: 0x28c
	// Line 359, Address: 0x289f80, Func Offset: 0x2a0
	// Line 361, Address: 0x289f88, Func Offset: 0x2a8
	// Line 362, Address: 0x289f98, Func Offset: 0x2b8
	// Line 365, Address: 0x289fa4, Func Offset: 0x2c4
	// Line 366, Address: 0x289fb8, Func Offset: 0x2d8
	// Line 367, Address: 0x289fc0, Func Offset: 0x2e0
	// Line 368, Address: 0x289fe0, Func Offset: 0x300
	// Line 370, Address: 0x289fec, Func Offset: 0x30c
	// Line 371, Address: 0x289ff8, Func Offset: 0x318
	// Line 376, Address: 0x28a000, Func Offset: 0x320
	// Line 371, Address: 0x28a004, Func Offset: 0x324
	// Line 377, Address: 0x28a010, Func Offset: 0x330
	// Func End, Address: 0x28a044, Func Offset: 0x364
}

// 
// Start address: 0x28a050
float EnemyRailGetNearPointWithDirection(float* point, int* junction, float* pos, float direction)
{
	sgQsortEasyData* base_data;
	sgQsortEasyData* pd;
	EnemyRailJunction* prd;
	EnemyRailJunction* prj;
	EnemyRailJunction* prj2;
	EnemyRailJunction* tp;
	float* tpos;
	float* ipos;
	float* jpos1;
	float* jpos2;
	float* jposb;
	float* dirv;
	int i;
	int j;
	int n;
	int m;
	int f;
	float d;
	float dm;
	float rot;
	// Line 388, Address: 0x28a050, Func Offset: 0
	// Line 396, Address: 0x28a054, Func Offset: 0x4
	// Line 388, Address: 0x28a058, Func Offset: 0x8
	// Line 396, Address: 0x28a098, Func Offset: 0x48
	// Line 397, Address: 0x28a0b0, Func Offset: 0x60
	// Line 396, Address: 0x28a0b4, Func Offset: 0x64
	// Line 398, Address: 0x28a0b8, Func Offset: 0x68
	// Line 397, Address: 0x28a0bc, Func Offset: 0x6c
	// Line 399, Address: 0x28a0c0, Func Offset: 0x70
	// Line 401, Address: 0x28a0c4, Func Offset: 0x74
	// Line 400, Address: 0x28a0c8, Func Offset: 0x78
	// Line 401, Address: 0x28a0cc, Func Offset: 0x7c
	// Line 402, Address: 0x28a0d0, Func Offset: 0x80
	// Line 403, Address: 0x28a0d8, Func Offset: 0x88
	// Line 405, Address: 0x28a0e0, Func Offset: 0x90
	// Line 406, Address: 0x28a0ec, Func Offset: 0x9c
	// Line 408, Address: 0x28a0f8, Func Offset: 0xa8
	// Line 410, Address: 0x28a110, Func Offset: 0xc0
	// Line 412, Address: 0x28a120, Func Offset: 0xd0
	// Line 413, Address: 0x28a124, Func Offset: 0xd4
	// Line 414, Address: 0x28a128, Func Offset: 0xd8
	// Line 415, Address: 0x28a130, Func Offset: 0xe0
	// Line 417, Address: 0x28a168, Func Offset: 0x118
	// Line 418, Address: 0x28a174, Func Offset: 0x124
	// Line 419, Address: 0x28a178, Func Offset: 0x128
	// Line 420, Address: 0x28a198, Func Offset: 0x148
	// Line 421, Address: 0x28a19c, Func Offset: 0x14c
	// Line 422, Address: 0x28a1ac, Func Offset: 0x15c
	// Line 425, Address: 0x28a1b4, Func Offset: 0x164
	// Line 426, Address: 0x28a1c8, Func Offset: 0x178
	// Line 427, Address: 0x28a1cc, Func Offset: 0x17c
	// Line 428, Address: 0x28a1d0, Func Offset: 0x180
	// Line 429, Address: 0x28a1d8, Func Offset: 0x188
	// Line 430, Address: 0x28a1dc, Func Offset: 0x18c
	// Line 431, Address: 0x28a1e0, Func Offset: 0x190
	// Line 432, Address: 0x28a1e8, Func Offset: 0x198
	// Line 435, Address: 0x28a1ec, Func Offset: 0x19c
	// Line 433, Address: 0x28a1f0, Func Offset: 0x1a0
	// Line 434, Address: 0x28a20c, Func Offset: 0x1bc
	// Line 436, Address: 0x28a224, Func Offset: 0x1d4
	// Line 438, Address: 0x28a230, Func Offset: 0x1e0
	// Line 439, Address: 0x28a240, Func Offset: 0x1f0
	// Line 441, Address: 0x28a244, Func Offset: 0x1f4
	// Line 439, Address: 0x28a258, Func Offset: 0x208
	// Line 440, Address: 0x28a270, Func Offset: 0x220
	// Line 441, Address: 0x28a288, Func Offset: 0x238
	// Line 442, Address: 0x28a290, Func Offset: 0x240
	// Line 443, Address: 0x28a298, Func Offset: 0x248
	// Line 445, Address: 0x28a2ac, Func Offset: 0x25c
	// Line 446, Address: 0x28a2b0, Func Offset: 0x260
	// Line 449, Address: 0x28a2b8, Func Offset: 0x268
	// Line 450, Address: 0x28a2c0, Func Offset: 0x270
	// Line 453, Address: 0x28a2d4, Func Offset: 0x284
	// Line 454, Address: 0x28a2d8, Func Offset: 0x288
	// Line 456, Address: 0x28a2e4, Func Offset: 0x294
	// Line 455, Address: 0x28a2e8, Func Offset: 0x298
	// Line 456, Address: 0x28a2ec, Func Offset: 0x29c
	// Line 457, Address: 0x28a2f4, Func Offset: 0x2a4
	// Line 459, Address: 0x28a2fc, Func Offset: 0x2ac
	// Line 458, Address: 0x28a300, Func Offset: 0x2b0
	// Line 461, Address: 0x28a304, Func Offset: 0x2b4
	// Line 462, Address: 0x28a318, Func Offset: 0x2c8
	// Line 463, Address: 0x28a32c, Func Offset: 0x2dc
	// Line 465, Address: 0x28a33c, Func Offset: 0x2ec
	// Line 467, Address: 0x28a348, Func Offset: 0x2f8
	// Line 468, Address: 0x28a358, Func Offset: 0x308
	// Line 471, Address: 0x28a364, Func Offset: 0x314
	// Line 472, Address: 0x28a378, Func Offset: 0x328
	// Line 473, Address: 0x28a37c, Func Offset: 0x32c
	// Line 474, Address: 0x28a390, Func Offset: 0x340
	// Line 476, Address: 0x28a39c, Func Offset: 0x34c
	// Line 477, Address: 0x28a3a8, Func Offset: 0x358
	// Line 478, Address: 0x28a3b0, Func Offset: 0x360
	// Line 477, Address: 0x28a3b4, Func Offset: 0x364
	// Line 478, Address: 0x28a3bc, Func Offset: 0x36c
	// Line 480, Address: 0x28a3e4, Func Offset: 0x394
	// Line 482, Address: 0x28a3e8, Func Offset: 0x398
	// Line 480, Address: 0x28a3f8, Func Offset: 0x3a8
	// Line 482, Address: 0x28a3fc, Func Offset: 0x3ac
	// Line 488, Address: 0x28a408, Func Offset: 0x3b8
	// Line 489, Address: 0x28a410, Func Offset: 0x3c0
	// Func End, Address: 0x28a448, Func Offset: 0x3f8
}

