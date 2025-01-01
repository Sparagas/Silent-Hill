typedef struct shSysKeyAdjustData;
typedef union shGameKeyData;
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
typedef unsigned char type_9[16];
typedef unsigned char type_10[16];
typedef unsigned char type_11[16];
typedef unsigned char type_12[16];
typedef unsigned char type_13[16];
typedef unsigned char type_14[16];
typedef unsigned char type_15[16];
typedef shGameKeyData type_16[1];
typedef shGameKeyData type_17[1];
typedef shGameKeyData type_18[1];
typedef int type_19[6];
typedef shGameKeyData type_20[1];

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

union shGameKeyData
{
	unsigned long bit;
	_anon0 f;
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

// 
// Start address: 0x1c8040
int shSysKeyNormalize(char* paddata)
{
	int add;
	int an;
	unsigned char* pd;
	unsigned short button;
	int idlen;
	int stat;
	// Line 320, Address: 0x1c8040, Func Offset: 0
	// Line 324, Address: 0x1c8060, Func Offset: 0x20
	// Line 326, Address: 0x1c8064, Func Offset: 0x24
	// Line 328, Address: 0x1c8078, Func Offset: 0x38
	// Line 329, Address: 0x1c8080, Func Offset: 0x40
	// Line 331, Address: 0x1c8088, Func Offset: 0x48
	// Line 332, Address: 0x1c8090, Func Offset: 0x50
	// Line 333, Address: 0x1c80b0, Func Offset: 0x70
	// Line 334, Address: 0x1c80b8, Func Offset: 0x78
	// Line 335, Address: 0x1c80bc, Func Offset: 0x7c
	// Line 339, Address: 0x1c80c0, Func Offset: 0x80
	// Line 341, Address: 0x1c80cc, Func Offset: 0x8c
	// Line 342, Address: 0x1c80ec, Func Offset: 0xac
	// Line 343, Address: 0x1c810c, Func Offset: 0xcc
	// Line 344, Address: 0x1c812c, Func Offset: 0xec
	// Line 345, Address: 0x1c814c, Func Offset: 0x10c
	// Line 346, Address: 0x1c816c, Func Offset: 0x12c
	// Line 347, Address: 0x1c818c, Func Offset: 0x14c
	// Line 348, Address: 0x1c81ac, Func Offset: 0x16c
	// Line 349, Address: 0x1c81cc, Func Offset: 0x18c
	// Line 350, Address: 0x1c81ec, Func Offset: 0x1ac
	// Line 351, Address: 0x1c820c, Func Offset: 0x1cc
	// Line 352, Address: 0x1c822c, Func Offset: 0x1ec
	// Line 353, Address: 0x1c824c, Func Offset: 0x20c
	// Line 355, Address: 0x1c8254, Func Offset: 0x214
	// Line 356, Address: 0x1c826c, Func Offset: 0x22c
	// Line 357, Address: 0x1c8284, Func Offset: 0x244
	// Line 358, Address: 0x1c829c, Func Offset: 0x25c
	// Line 359, Address: 0x1c82b4, Func Offset: 0x274
	// Line 360, Address: 0x1c82cc, Func Offset: 0x28c
	// Line 361, Address: 0x1c82e4, Func Offset: 0x2a4
	// Line 362, Address: 0x1c82fc, Func Offset: 0x2bc
	// Line 364, Address: 0x1c8314, Func Offset: 0x2d4
	// Line 365, Address: 0x1c832c, Func Offset: 0x2ec
	// Line 366, Address: 0x1c8344, Func Offset: 0x304
	// Line 367, Address: 0x1c835c, Func Offset: 0x31c
	// Line 370, Address: 0x1c8374, Func Offset: 0x334
	// Line 376, Address: 0x1c83ac, Func Offset: 0x36c
	// Line 377, Address: 0x1c83b4, Func Offset: 0x374
	// Line 378, Address: 0x1c83bc, Func Offset: 0x37c
	// Line 379, Address: 0x1c83c4, Func Offset: 0x384
	// Line 380, Address: 0x1c83cc, Func Offset: 0x38c
	// Line 381, Address: 0x1c83d4, Func Offset: 0x394
	// Line 391, Address: 0x1c83dc, Func Offset: 0x39c
	// Line 392, Address: 0x1c83f0, Func Offset: 0x3b0
	// Line 393, Address: 0x1c83f4, Func Offset: 0x3b4
	// Line 394, Address: 0x1c8404, Func Offset: 0x3c4
	// Line 395, Address: 0x1c8410, Func Offset: 0x3d0
	// Line 397, Address: 0x1c841c, Func Offset: 0x3dc
	// Line 399, Address: 0x1c8428, Func Offset: 0x3e8
	// Line 400, Address: 0x1c843c, Func Offset: 0x3fc
	// Line 401, Address: 0x1c8440, Func Offset: 0x400
	// Line 402, Address: 0x1c8450, Func Offset: 0x410
	// Line 403, Address: 0x1c845c, Func Offset: 0x41c
	// Line 405, Address: 0x1c8468, Func Offset: 0x428
	// Line 409, Address: 0x1c8474, Func Offset: 0x434
	// Line 410, Address: 0x1c848c, Func Offset: 0x44c
	// Line 411, Address: 0x1c84a4, Func Offset: 0x464
	// Line 412, Address: 0x1c84bc, Func Offset: 0x47c
	// Line 414, Address: 0x1c84d4, Func Offset: 0x494
	// Line 415, Address: 0x1c84d8, Func Offset: 0x498
	// Func End, Address: 0x1c84fc, Func Offset: 0x4bc
}

// 
// Start address: 0x1c8500
int shSysKeyAdjust(char* paddata)
{
	int idx;
	int st;
	int i;
	unsigned char* pd;
	// Line 418, Address: 0x1c8500, Func Offset: 0
	// Line 419, Address: 0x1c8518, Func Offset: 0x18
	// Line 421, Address: 0x1c851c, Func Offset: 0x1c
	// Line 425, Address: 0x1c8530, Func Offset: 0x30
	// Line 426, Address: 0x1c855c, Func Offset: 0x5c
	// Line 427, Address: 0x1c8588, Func Offset: 0x88
	// Line 428, Address: 0x1c85b4, Func Offset: 0xb4
	// Line 429, Address: 0x1c85e0, Func Offset: 0xe0
	// Line 430, Address: 0x1c860c, Func Offset: 0x10c
	// Line 431, Address: 0x1c8638, Func Offset: 0x138
	// Line 432, Address: 0x1c8664, Func Offset: 0x164
	// Line 433, Address: 0x1c8690, Func Offset: 0x190
	// Line 434, Address: 0x1c86bc, Func Offset: 0x1bc
	// Line 435, Address: 0x1c86e8, Func Offset: 0x1e8
	// Line 436, Address: 0x1c8714, Func Offset: 0x214
	// Line 437, Address: 0x1c8740, Func Offset: 0x240
	// Line 438, Address: 0x1c876c, Func Offset: 0x26c
	// Line 439, Address: 0x1c8798, Func Offset: 0x298
	// Line 440, Address: 0x1c87c4, Func Offset: 0x2c4
	// Line 454, Address: 0x1c87f0, Func Offset: 0x2f0
	// Line 455, Address: 0x1c87fc, Func Offset: 0x2fc
	// Line 456, Address: 0x1c8810, Func Offset: 0x310
	// Line 457, Address: 0x1c881c, Func Offset: 0x31c
	// Line 458, Address: 0x1c8860, Func Offset: 0x360
	// Line 459, Address: 0x1c889c, Func Offset: 0x39c
	// Line 460, Address: 0x1c88a0, Func Offset: 0x3a0
	// Line 461, Address: 0x1c88b0, Func Offset: 0x3b0
	// Line 464, Address: 0x1c88c4, Func Offset: 0x3c4
	// Line 465, Address: 0x1c88c8, Func Offset: 0x3c8
	// Func End, Address: 0x1c88e4, Func Offset: 0x3e4
}

// 
// Start address: 0x1c88f0
unsigned int shGameKeyGetAnalog(char* paddata, unsigned short an_assign, int bit)
{
	int k;
	int key;
	int an_idx;
	unsigned char* pd;
	// Line 472, Address: 0x1c88f0, Func Offset: 0
	// Line 473, Address: 0x1c8910, Func Offset: 0x20
	// Line 474, Address: 0x1c8914, Func Offset: 0x24
	// Line 475, Address: 0x1c8918, Func Offset: 0x28
	// Line 477, Address: 0x1c891c, Func Offset: 0x2c
	// Line 480, Address: 0x1c8924, Func Offset: 0x34
	// Line 481, Address: 0x1c8938, Func Offset: 0x48
	// Line 482, Address: 0x1c8954, Func Offset: 0x64
	// Line 483, Address: 0x1c8970, Func Offset: 0x80
	// Line 484, Address: 0x1c8980, Func Offset: 0x90
	// Line 486, Address: 0x1c8998, Func Offset: 0xa8
	// Line 487, Address: 0x1c89c8, Func Offset: 0xd8
	// Line 488, Address: 0x1c89cc, Func Offset: 0xdc
	// Func End, Address: 0x1c89e8, Func Offset: 0xf8
}

// 
// Start address: 0x1c89f0
unsigned int shGameKeyGetStick(char* paddata, unsigned char st_assign, int bit)
{
	int st_idx_idx;
	int st_idx;
	int key;
	int st;
	int plus_absmax;
	int minus_absmax;
	// Line 495, Address: 0x1c89f0, Func Offset: 0
	// Line 496, Address: 0x1c8a18, Func Offset: 0x28
	// Line 497, Address: 0x1c8a1c, Func Offset: 0x2c
	// Line 502, Address: 0x1c8a20, Func Offset: 0x30
	// Line 505, Address: 0x1c8a38, Func Offset: 0x48
	// Line 506, Address: 0x1c8a4c, Func Offset: 0x5c
	// Line 507, Address: 0x1c8a60, Func Offset: 0x70
	// Line 508, Address: 0x1c8a84, Func Offset: 0x94
	// Line 510, Address: 0x1c8a8c, Func Offset: 0x9c
	// Line 511, Address: 0x1c8ab0, Func Offset: 0xc0
	// Line 513, Address: 0x1c8ad0, Func Offset: 0xe0
	// Line 515, Address: 0x1c8ad8, Func Offset: 0xe8
	// Line 516, Address: 0x1c8ae8, Func Offset: 0xf8
	// Line 518, Address: 0x1c8af0, Func Offset: 0x100
	// Line 521, Address: 0x1c8b00, Func Offset: 0x110
	// Line 522, Address: 0x1c8b30, Func Offset: 0x140
	// Line 523, Address: 0x1c8b34, Func Offset: 0x144
	// Line 524, Address: 0x1c8b38, Func Offset: 0x148
	// Func End, Address: 0x1c8b5c, Func Offset: 0x16c
}

// 
// Start address: 0x1c8b60
int shGameKeyConvert(shGameKeyData* key, char* paddata)
{
	// Line 532, Address: 0x1c8b60, Func Offset: 0
	// Line 533, Address: 0x1c8b70, Func Offset: 0x10
	// Line 534, Address: 0x1c8b88, Func Offset: 0x28
	// Line 537, Address: 0x1c8ba0, Func Offset: 0x40
	// Line 538, Address: 0x1c8be0, Func Offset: 0x80
	// Line 539, Address: 0x1c8c20, Func Offset: 0xc0
	// Line 540, Address: 0x1c8c5c, Func Offset: 0xfc
	// Line 541, Address: 0x1c8c98, Func Offset: 0x138
	// Line 542, Address: 0x1c8cd4, Func Offset: 0x174
	// Line 543, Address: 0x1c8d10, Func Offset: 0x1b0
	// Line 544, Address: 0x1c8d4c, Func Offset: 0x1ec
	// Line 545, Address: 0x1c8d84, Func Offset: 0x224
	// Line 548, Address: 0x1c8dc0, Func Offset: 0x260
	// Line 549, Address: 0x1c8dfc, Func Offset: 0x29c
	// Line 550, Address: 0x1c8e38, Func Offset: 0x2d8
	// Line 551, Address: 0x1c8e74, Func Offset: 0x314
	// Line 552, Address: 0x1c8eac, Func Offset: 0x34c
	// Line 553, Address: 0x1c8ee8, Func Offset: 0x388
	// Line 556, Address: 0x1c8f24, Func Offset: 0x3c4
	// Line 557, Address: 0x1c8f60, Func Offset: 0x400
	// Line 558, Address: 0x1c8fa0, Func Offset: 0x440
	// Line 559, Address: 0x1c8fdc, Func Offset: 0x47c
	// Line 560, Address: 0x1c901c, Func Offset: 0x4bc
	// Line 561, Address: 0x1c9060, Func Offset: 0x500
	// Line 563, Address: 0x1c90a0, Func Offset: 0x540
	// Line 564, Address: 0x1c90a4, Func Offset: 0x544
	// Func End, Address: 0x1c90b4, Func Offset: 0x554
}

