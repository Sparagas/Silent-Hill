typedef union shGameKeyData;
typedef struct shSysKeyAdjustData;
typedef struct shGameKeyAssign;
typedef struct _anon0;


typedef unsigned char type_0[16];
typedef unsigned char type_1[16];
typedef unsigned char type_2[16];
typedef unsigned char type_3[16];
typedef unsigned char type_4[16];
typedef unsigned char type_5[16];
typedef unsigned char type_6[16];
typedef unsigned char type_7[16];
typedef unsigned char type_8[16];
typedef shGameKeyData type_9[1];
typedef unsigned char type_10[16];
typedef shGameKeyData type_11[1];
typedef shGameKeyData type_12[1];
typedef unsigned char type_13[16];
typedef shGameKeyData type_14[1];
typedef unsigned char type_15[16];
typedef unsigned char type_16[16];
typedef unsigned char type_17[16];
typedef unsigned char type_18[16];
typedef unsigned char type_19[16];
typedef int type_20[6];

union shGameKeyData
{
	unsigned long bit;
	_anon0 f;
};

struct shSysKeyAdjustData
{
	unsigned char AN_6[16];
	unsigned char AN_4[16];
	unsigned char AN_8[16];
	unsigned char AN_2[16];
	unsigned char AN_A[16];
	unsigned char AN_O[16];
	unsigned char AN_X[16];
	unsigned char AN_D[16];
	unsigned char AN_L1[16];
	unsigned char AN_R1[16];
	unsigned char AN_L2[16];
	unsigned char AN_R2[16];
	unsigned char AN_L3[16];
	unsigned char AN_R3[16];
	unsigned char AN_STA[16];
	unsigned char AN_SEL[16];
};

struct shGameKeyAssign
{
	unsigned short type;
	unsigned char DIR_AX;
	unsigned char DIR_AY;
	unsigned char DIR_BX;
	unsigned char DIR_BY;
	unsigned char DIR_CX;
	unsigned char DIR_CY;
	unsigned short DRINK;
	unsigned short RADIO;
	unsigned short LIGHT;
	unsigned short ITEM;
	unsigned short MAP;
	unsigned short DECIDE;
	unsigned short CANCEL;
	unsigned short SKIP;
	unsigned short PAUSE;
	unsigned short ACTION;
	unsigned short DASH;
	unsigned short LSLIDE;
	unsigned short RSLIDE;
	unsigned short READY;
	unsigned short VIEW;
};

struct _anon0
{
	struct
	{
		unsigned long type : 1;
		unsigned long DRINK : 1;
		unsigned long RADIO : 1;
		unsigned long LIGHT : 1;
		unsigned long ITEM : 1;
		unsigned long MAP : 1;
		unsigned long DECIDE : 1;
		unsigned long CANCEL : 1;
		unsigned long SKIP : 1;
		unsigned long PAUSE : 1;
		unsigned long ACTION : 2;
		unsigned long DASH : 2;
		unsigned long LSLIDE : 2;
		unsigned long RSLIDE : 2;
		unsigned long READY : 2;
		unsigned long VIEW : 2;
		unsigned long frame_m1 : 2;
		long AX : 4;
		long AY : 4;
		long BX : 2;
		long BY : 2;
		long CX : 4;
		long CY : 4;
		unsigned long reserve : 2;
		unsigned long trg : 1;
		unsigned long rpt : 1;
		unsigned long len : 16;
	};
};

shSysKeyAdjustData adjust_prs;
shGameKeyAssign gkey_assign;
int st_idx_conv[6];
int keyhistcnt;
int keyhistcnt_dummy;
shGameKeyData keyhist[1];

int shSysKeyNormalize(char* paddata);
int shSysKeyAdjust(char* paddata);
unsigned int shGameKeyGetAnalog(char* paddata, unsigned short an_assign, int bit);
unsigned int shGameKeyGetStick(char* paddata, unsigned char st_assign, int bit);
int shGameKeyConvert(shGameKeyData* key, char* paddata);
void shGameKeyGetAssign(shGameKeyAssign* assign);
void shGameKeySetAssign(shGameKeyAssign* assign);

// 
// Start address: 0x1be820
int shSysKeyNormalize(char* paddata)
{
	int add;
	int an;
	unsigned char* pd;
	unsigned short button;
	int idlen;
	int stat;
	// Line 326, Address: 0x1be820, Func Offset: 0
	// Line 328, Address: 0x1be834, Func Offset: 0x14
	// Line 329, Address: 0x1be838, Func Offset: 0x18
	// Line 331, Address: 0x1be840, Func Offset: 0x20
	// Line 332, Address: 0x1be844, Func Offset: 0x24
	// Line 333, Address: 0x1be858, Func Offset: 0x38
	// Line 334, Address: 0x1be860, Func Offset: 0x40
	// Line 335, Address: 0x1be864, Func Offset: 0x44
	// Line 339, Address: 0x1be868, Func Offset: 0x48
	// Line 341, Address: 0x1be874, Func Offset: 0x54
	// Line 342, Address: 0x1be890, Func Offset: 0x70
	// Line 343, Address: 0x1be8ac, Func Offset: 0x8c
	// Line 344, Address: 0x1be8c8, Func Offset: 0xa8
	// Line 345, Address: 0x1be8e4, Func Offset: 0xc4
	// Line 346, Address: 0x1be900, Func Offset: 0xe0
	// Line 347, Address: 0x1be91c, Func Offset: 0xfc
	// Line 348, Address: 0x1be938, Func Offset: 0x118
	// Line 349, Address: 0x1be954, Func Offset: 0x134
	// Line 350, Address: 0x1be970, Func Offset: 0x150
	// Line 351, Address: 0x1be98c, Func Offset: 0x16c
	// Line 352, Address: 0x1be9a8, Func Offset: 0x188
	// Line 353, Address: 0x1be9c4, Func Offset: 0x1a4
	// Line 355, Address: 0x1be9cc, Func Offset: 0x1ac
	// Line 356, Address: 0x1be9e0, Func Offset: 0x1c0
	// Line 357, Address: 0x1be9f0, Func Offset: 0x1d0
	// Line 358, Address: 0x1bea00, Func Offset: 0x1e0
	// Line 359, Address: 0x1bea10, Func Offset: 0x1f0
	// Line 360, Address: 0x1bea20, Func Offset: 0x200
	// Line 361, Address: 0x1bea30, Func Offset: 0x210
	// Line 362, Address: 0x1bea40, Func Offset: 0x220
	// Line 364, Address: 0x1bea50, Func Offset: 0x230
	// Line 365, Address: 0x1bea60, Func Offset: 0x240
	// Line 366, Address: 0x1bea70, Func Offset: 0x250
	// Line 367, Address: 0x1bea80, Func Offset: 0x260
	// Line 370, Address: 0x1bea90, Func Offset: 0x270
	// Line 376, Address: 0x1beac8, Func Offset: 0x2a8
	// Line 377, Address: 0x1bead0, Func Offset: 0x2b0
	// Line 378, Address: 0x1bead4, Func Offset: 0x2b4
	// Line 379, Address: 0x1bead8, Func Offset: 0x2b8
	// Line 380, Address: 0x1beadc, Func Offset: 0x2bc
	// Line 381, Address: 0x1beae0, Func Offset: 0x2c0
	// Line 391, Address: 0x1beae4, Func Offset: 0x2c4
	// Line 392, Address: 0x1beaf0, Func Offset: 0x2d0
	// Line 393, Address: 0x1beaf4, Func Offset: 0x2d4
	// Line 394, Address: 0x1beb04, Func Offset: 0x2e4
	// Line 395, Address: 0x1beb10, Func Offset: 0x2f0
	// Line 397, Address: 0x1beb1c, Func Offset: 0x2fc
	// Line 399, Address: 0x1beb24, Func Offset: 0x304
	// Line 400, Address: 0x1beb30, Func Offset: 0x310
	// Line 401, Address: 0x1beb34, Func Offset: 0x314
	// Line 402, Address: 0x1beb44, Func Offset: 0x324
	// Line 403, Address: 0x1beb50, Func Offset: 0x330
	// Line 405, Address: 0x1beb5c, Func Offset: 0x33c
	// Line 409, Address: 0x1beb64, Func Offset: 0x344
	// Line 410, Address: 0x1beb78, Func Offset: 0x358
	// Line 411, Address: 0x1beb88, Func Offset: 0x368
	// Line 412, Address: 0x1beb98, Func Offset: 0x378
	// Line 414, Address: 0x1beba8, Func Offset: 0x388
	// Line 415, Address: 0x1bebac, Func Offset: 0x38c
	// Func End, Address: 0x1bebb4, Func Offset: 0x394
}

// 
// Start address: 0x1bebc0
int shSysKeyAdjust(char* paddata)
{
	int idx;
	int st;
	int i;
	unsigned char* pd;
	// Line 421, Address: 0x1bebc0, Func Offset: 0
	// Line 425, Address: 0x1bebd4, Func Offset: 0x14
	// Line 426, Address: 0x1bebfc, Func Offset: 0x3c
	// Line 427, Address: 0x1bec24, Func Offset: 0x64
	// Line 428, Address: 0x1bec4c, Func Offset: 0x8c
	// Line 429, Address: 0x1bec74, Func Offset: 0xb4
	// Line 430, Address: 0x1bec9c, Func Offset: 0xdc
	// Line 431, Address: 0x1becc4, Func Offset: 0x104
	// Line 432, Address: 0x1becec, Func Offset: 0x12c
	// Line 433, Address: 0x1bed14, Func Offset: 0x154
	// Line 434, Address: 0x1bed3c, Func Offset: 0x17c
	// Line 435, Address: 0x1bed64, Func Offset: 0x1a4
	// Line 436, Address: 0x1bed8c, Func Offset: 0x1cc
	// Line 437, Address: 0x1bedb4, Func Offset: 0x1f4
	// Line 438, Address: 0x1beddc, Func Offset: 0x21c
	// Line 439, Address: 0x1bee04, Func Offset: 0x244
	// Line 440, Address: 0x1bee2c, Func Offset: 0x26c
	// Line 454, Address: 0x1bee54, Func Offset: 0x294
	// Line 455, Address: 0x1bee60, Func Offset: 0x2a0
	// Line 456, Address: 0x1bee74, Func Offset: 0x2b4
	// Line 457, Address: 0x1bee7c, Func Offset: 0x2bc
	// Line 458, Address: 0x1beebc, Func Offset: 0x2fc
	// Line 459, Address: 0x1beef4, Func Offset: 0x334
	// Line 460, Address: 0x1beef8, Func Offset: 0x338
	// Line 461, Address: 0x1bef00, Func Offset: 0x340
	// Line 464, Address: 0x1bef14, Func Offset: 0x354
	// Line 465, Address: 0x1bef18, Func Offset: 0x358
	// Func End, Address: 0x1bef20, Func Offset: 0x360
}

// 
// Start address: 0x1bef20
unsigned int shGameKeyGetAnalog(char* paddata, unsigned short an_assign, int bit)
{
	int k;
	int key;
	int an_idx;
	unsigned char* pd;
	// Line 474, Address: 0x1bef20, Func Offset: 0
	// Line 475, Address: 0x1bef24, Func Offset: 0x4
	// Line 477, Address: 0x1bef28, Func Offset: 0x8
	// Line 480, Address: 0x1bef30, Func Offset: 0x10
	// Line 481, Address: 0x1bef3c, Func Offset: 0x1c
	// Line 482, Address: 0x1bef50, Func Offset: 0x30
	// Line 483, Address: 0x1bef68, Func Offset: 0x48
	// Line 484, Address: 0x1bef78, Func Offset: 0x58
	// Line 485, Address: 0x1bef8c, Func Offset: 0x6c
	// Line 486, Address: 0x1bef90, Func Offset: 0x70
	// Line 488, Address: 0x1befb8, Func Offset: 0x98
	// Func End, Address: 0x1befc0, Func Offset: 0xa0
}

// 
// Start address: 0x1befc0
unsigned int shGameKeyGetStick(char* paddata, unsigned char st_assign, int bit)
{
	int st_idx_idx;
	int st_idx;
	int key;
	int st;
	int plus_absmax;
	int minus_absmax;
	// Line 496, Address: 0x1befc0, Func Offset: 0
	// Line 497, Address: 0x1befc4, Func Offset: 0x4
	// Line 502, Address: 0x1befc8, Func Offset: 0x8
	// Line 505, Address: 0x1befd4, Func Offset: 0x14
	// Line 506, Address: 0x1befe0, Func Offset: 0x20
	// Line 507, Address: 0x1beff4, Func Offset: 0x34
	// Line 508, Address: 0x1bf008, Func Offset: 0x48
	// Line 510, Address: 0x1bf010, Func Offset: 0x50
	// Line 511, Address: 0x1bf020, Func Offset: 0x60
	// Line 512, Address: 0x1bf02c, Func Offset: 0x6c
	// Line 513, Address: 0x1bf030, Func Offset: 0x70
	// Line 515, Address: 0x1bf038, Func Offset: 0x78
	// Line 516, Address: 0x1bf048, Func Offset: 0x88
	// Line 518, Address: 0x1bf050, Func Offset: 0x90
	// Line 521, Address: 0x1bf060, Func Offset: 0xa0
	// Line 522, Address: 0x1bf088, Func Offset: 0xc8
	// Line 524, Address: 0x1bf08c, Func Offset: 0xcc
	// Func End, Address: 0x1bf094, Func Offset: 0xd4
}

// 
// Start address: 0x1bf0a0
int shGameKeyConvert(shGameKeyData* key, char* paddata)
{
	// Line 532, Address: 0x1bf0a0, Func Offset: 0
	// Line 533, Address: 0x1bf0b0, Func Offset: 0x10
	// Line 534, Address: 0x1bf0c4, Func Offset: 0x24
	// Line 537, Address: 0x1bf0d8, Func Offset: 0x38
	// Line 538, Address: 0x1bf108, Func Offset: 0x68
	// Line 539, Address: 0x1bf134, Func Offset: 0x94
	// Line 540, Address: 0x1bf160, Func Offset: 0xc0
	// Line 541, Address: 0x1bf18c, Func Offset: 0xec
	// Line 542, Address: 0x1bf1b8, Func Offset: 0x118
	// Line 543, Address: 0x1bf1e4, Func Offset: 0x144
	// Line 544, Address: 0x1bf210, Func Offset: 0x170
	// Line 545, Address: 0x1bf238, Func Offset: 0x198
	// Line 548, Address: 0x1bf264, Func Offset: 0x1c4
	// Line 549, Address: 0x1bf294, Func Offset: 0x1f4
	// Line 550, Address: 0x1bf2c0, Func Offset: 0x220
	// Line 551, Address: 0x1bf2ec, Func Offset: 0x24c
	// Line 552, Address: 0x1bf314, Func Offset: 0x274
	// Line 553, Address: 0x1bf340, Func Offset: 0x2a0
	// Line 556, Address: 0x1bf36c, Func Offset: 0x2cc
	// Line 557, Address: 0x1bf3a0, Func Offset: 0x300
	// Line 558, Address: 0x1bf3d4, Func Offset: 0x334
	// Line 559, Address: 0x1bf408, Func Offset: 0x368
	// Line 560, Address: 0x1bf43c, Func Offset: 0x39c
	// Line 561, Address: 0x1bf474, Func Offset: 0x3d4
	// Line 563, Address: 0x1bf4a4, Func Offset: 0x404
	// Line 564, Address: 0x1bf4a8, Func Offset: 0x408
	// Func End, Address: 0x1bf4b8, Func Offset: 0x418
}

// 
// Start address: 0x1bf4c0
void shGameKeyGetAssign(shGameKeyAssign* assign)
{
	// Line 682, Address: 0x1bf4c0, Func Offset: 0
	// Line 683, Address: 0x1bf4f0, Func Offset: 0x30
	// Func End, Address: 0x1bf4f8, Func Offset: 0x38
}

// 
// Start address: 0x1bf500
void shGameKeySetAssign(shGameKeyAssign* assign)
{
	// Line 687, Address: 0x1bf500, Func Offset: 0
	// Line 688, Address: 0x1bf530, Func Offset: 0x30
	// Func End, Address: 0x1bf538, Func Offset: 0x38
}

