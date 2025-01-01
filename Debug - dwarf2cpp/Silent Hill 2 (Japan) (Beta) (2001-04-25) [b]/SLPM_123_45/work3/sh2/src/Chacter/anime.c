typedef struct shAnime3d;
typedef struct _anon0;
typedef struct _anon1;
typedef struct shSkelton;
typedef struct _USXY;
typedef struct _SXY;
typedef struct _AnimeInfo;
typedef struct _anon2;
typedef union _anon3;


typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef _anon0 type_4[41];
typedef float type_5[9];
typedef _anon1 type_6[2];

struct shAnime3d
{
	shSkelton* top;
	void* anime;
	void* frame_top;
	void* p_anime;
	void* p_frame_top;
	unsigned int frame_size;
	int total_count;
	_SXY c_count;
	_SXY c_speed;
	_SXY total_speed;
	_USXY cur_frame;
	char first_bone_type;
	char comp_type;
	_AnimeInfo* anim_a;
	_AnimeInfo* anim_b;
	_anon1 rot_neck;
	_anon1 rot_arms;
	_anon1 rot_body_neck;
	_anon1 rot_body;
	float scale;
};

struct _anon0
{
	float d[4][4];
};

struct _anon1
{
	float x;
	float y;
	float z;
	float w;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon0 src_m;
	_anon1 src_t;
	_anon0 des_m;
	_anon1 des_t;
	_anon1 axis;
	float theta;
	float xx;
	float yy;
	float zz;
	float xy;
	float yz;
	float zx;
	unsigned short c_count;
	unsigned short c_speed;
	char change;
	char reserved;
	char is_key;
	char pad;
	void* untouchable;
};

struct _USXY
{
	unsigned short x;
	unsigned short y;
};

struct _SXY
{
	short x;
	short y;
};

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	unsigned char pad;
};

struct _anon2
{
	_anon0 matrix;
};

union _anon3
{
	int i;
	float f;
};

_anon0 kt_unit_matrix;
_anon2 kt_gte;
int dt;

float GetSF(void* adr);
void shCharacterAnimeInterMatrix(_anon0* out, _anon0* in1, _anon0* in2, float t);
void shCharacterStayModelExec(shSkelton* stp, _anon1* rot);
void* shExec(void* anime, shSkelton* stp, int inter_type);
void shCharacterAnimePartsControl(shSkelton* stp, _anon1* rot);
void shCharacterAnimeReconstruct(shAnime3d* ap, int inter_type, int type);
void EigenVector(_anon0* m, _anon1* t);
void EigenVec2Mat(_anon1* ev, _anon0* smat);
void shCharacterAnimeCalcComplement(shAnime3d* ap);
void shCharacterAnimeSetSkelton(shAnime3d* ap, shSkelton* stp);
int shCharacterDramaAnimeExecMain(shAnime3d* ap);
int shCharacterPlayingAnimeExecMain(shAnime3d* ap, int type);
void shCharacterStayModelScale(shAnime3d* ap);

// 
// Start address: 0x1000c0
float GetSF(void* adr)
{
	_anon3 fi;
	int i;
	int exp;
	int coeff;
	int sign;
	unsigned short* sp;
	// Line 100, Address: 0x1000c0, Func Offset: 0
	// Line 111, Address: 0x1000dc, Func Offset: 0x1c
	// Line 112, Address: 0x1000e0, Func Offset: 0x20
	// Line 113, Address: 0x1000e8, Func Offset: 0x28
	// Line 114, Address: 0x1000f0, Func Offset: 0x30
	// Line 115, Address: 0x1000f8, Func Offset: 0x38
	// Line 116, Address: 0x1000fc, Func Offset: 0x3c
	// Line 117, Address: 0x100100, Func Offset: 0x40
	// Line 119, Address: 0x100104, Func Offset: 0x44
	// Line 120, Address: 0x100114, Func Offset: 0x54
	// Line 123, Address: 0x100120, Func Offset: 0x60
	// Line 124, Address: 0x100134, Func Offset: 0x74
	// Line 125, Address: 0x10013c, Func Offset: 0x7c
	// Func End, Address: 0x10015c, Func Offset: 0x9c
}

// 
// Start address: 0x100160
void shCharacterAnimeInterMatrix(_anon0* out, _anon0* in1, _anon0* in2, float t)
{
	int i1;
	_anon1 v2;
	_anon1 v1;
	// Line 147, Address: 0x100160, Func Offset: 0
	// Line 151, Address: 0x100164, Func Offset: 0x4
	// Line 152, Address: 0x100170, Func Offset: 0x10
	// Line 153, Address: 0x10019c, Func Offset: 0x3c
	// Line 155, Address: 0x1001c8, Func Offset: 0x68
	// Line 156, Address: 0x1001fc, Func Offset: 0x9c
	// Line 157, Address: 0x10020c, Func Offset: 0xac
	// Func End, Address: 0x100218, Func Offset: 0xb8
}

// 
// Start address: 0x100220
void shCharacterStayModelExec(shSkelton* stp, _anon1* rot)
{
	float m[4][4];
	// Line 166, Address: 0x100220, Func Offset: 0
	// Line 169, Address: 0x100238, Func Offset: 0x18
	// Line 174, Address: 0x100260, Func Offset: 0x40
	// Line 175, Address: 0x100274, Func Offset: 0x54
	// Line 176, Address: 0x100288, Func Offset: 0x68
	// Func End, Address: 0x1002a0, Func Offset: 0x80
}

// 
// Start address: 0x1002a0
void* shExec(void* anime, shSkelton* stp, int inter_type)
{
	shSkelton dummy_st;
	_anon1 axis;
	_anon1 rot;
	int type;
	short* sp;
	int bits;
	unsigned int flag;
	// Line 239, Address: 0x1002a0, Func Offset: 0
	// Line 259, Address: 0x1002c4, Func Offset: 0x24
	// Line 261, Address: 0x1002d8, Func Offset: 0x38
	// Line 262, Address: 0x1002dc, Func Offset: 0x3c
	// Line 263, Address: 0x1002f4, Func Offset: 0x54
	// Line 264, Address: 0x1002f8, Func Offset: 0x58
	// Line 270, Address: 0x1002fc, Func Offset: 0x5c
	// Line 271, Address: 0x100304, Func Offset: 0x64
	// Line 272, Address: 0x100314, Func Offset: 0x74
	// Line 273, Address: 0x10032c, Func Offset: 0x8c
	// Line 274, Address: 0x100330, Func Offset: 0x90
	// Line 275, Address: 0x100334, Func Offset: 0x94
	// Line 276, Address: 0x100338, Func Offset: 0x98
	// Line 277, Address: 0x10033c, Func Offset: 0x9c
	// Line 279, Address: 0x100340, Func Offset: 0xa0
	// Line 280, Address: 0x100348, Func Offset: 0xa8
	// Line 282, Address: 0x100350, Func Offset: 0xb0
	// Line 283, Address: 0x100358, Func Offset: 0xb8
	// Line 284, Address: 0x10035c, Func Offset: 0xbc
	// Line 287, Address: 0x100364, Func Offset: 0xc4
	// Line 294, Address: 0x10036c, Func Offset: 0xcc
	// Line 295, Address: 0x100378, Func Offset: 0xd8
	// Line 296, Address: 0x100380, Func Offset: 0xe0
	// Line 298, Address: 0x100388, Func Offset: 0xe8
	// Line 299, Address: 0x10038c, Func Offset: 0xec
	// Line 313, Address: 0x100390, Func Offset: 0xf0
	// Line 315, Address: 0x1003b8, Func Offset: 0x118
	// Line 316, Address: 0x1003c0, Func Offset: 0x120
	// Line 317, Address: 0x1003cc, Func Offset: 0x12c
	// Line 318, Address: 0x1003dc, Func Offset: 0x13c
	// Line 319, Address: 0x1003ec, Func Offset: 0x14c
	// Line 320, Address: 0x1003fc, Func Offset: 0x15c
	// Line 321, Address: 0x100408, Func Offset: 0x168
	// Line 322, Address: 0x10040c, Func Offset: 0x16c
	// Line 323, Address: 0x100414, Func Offset: 0x174
	// Line 324, Address: 0x100438, Func Offset: 0x198
	// Line 326, Address: 0x100460, Func Offset: 0x1c0
	// Line 327, Address: 0x100488, Func Offset: 0x1e8
	// Line 328, Address: 0x100494, Func Offset: 0x1f4
	// Line 330, Address: 0x100498, Func Offset: 0x1f8
	// Line 331, Address: 0x1004a0, Func Offset: 0x200
	// Line 332, Address: 0x1004ac, Func Offset: 0x20c
	// Line 333, Address: 0x1004bc, Func Offset: 0x21c
	// Line 334, Address: 0x1004cc, Func Offset: 0x22c
	// Line 335, Address: 0x1004dc, Func Offset: 0x23c
	// Line 336, Address: 0x1004e8, Func Offset: 0x248
	// Line 337, Address: 0x1004ec, Func Offset: 0x24c
	// Line 338, Address: 0x1004f4, Func Offset: 0x254
	// Line 339, Address: 0x100518, Func Offset: 0x278
	// Line 341, Address: 0x100540, Func Offset: 0x2a0
	// Line 342, Address: 0x100568, Func Offset: 0x2c8
	// Line 343, Address: 0x100574, Func Offset: 0x2d4
	// Line 348, Address: 0x100578, Func Offset: 0x2d8
	// Line 349, Address: 0x100590, Func Offset: 0x2f0
	// Line 350, Address: 0x1005a8, Func Offset: 0x308
	// Line 351, Address: 0x1005c0, Func Offset: 0x320
	// Line 354, Address: 0x1005c4, Func Offset: 0x324
	// Line 364, Address: 0x1005d8, Func Offset: 0x338
	// Line 365, Address: 0x1005e0, Func Offset: 0x340
	// Line 366, Address: 0x10062c, Func Offset: 0x38c
	// Line 367, Address: 0x100634, Func Offset: 0x394
	// Line 369, Address: 0x100680, Func Offset: 0x3e0
	// Line 378, Address: 0x100688, Func Offset: 0x3e8
	// Line 379, Address: 0x100694, Func Offset: 0x3f4
	// Line 380, Address: 0x1006a4, Func Offset: 0x404
	// Line 381, Address: 0x1006b4, Func Offset: 0x414
	// Line 382, Address: 0x1006c4, Func Offset: 0x424
	// Line 383, Address: 0x1006c8, Func Offset: 0x428
	// Line 384, Address: 0x1006d0, Func Offset: 0x430
	// Line 385, Address: 0x1006f4, Func Offset: 0x454
	// Line 387, Address: 0x10071c, Func Offset: 0x47c
	// Line 388, Address: 0x100744, Func Offset: 0x4a4
	// Line 390, Address: 0x100748, Func Offset: 0x4a8
	// Line 394, Address: 0x100750, Func Offset: 0x4b0
	// Line 398, Address: 0x100778, Func Offset: 0x4d8
	// Line 399, Address: 0x100784, Func Offset: 0x4e4
	// Line 400, Address: 0x100794, Func Offset: 0x4f4
	// Line 401, Address: 0x1007a4, Func Offset: 0x504
	// Line 402, Address: 0x1007b4, Func Offset: 0x514
	// Line 403, Address: 0x1007c0, Func Offset: 0x520
	// Line 404, Address: 0x1007c4, Func Offset: 0x524
	// Line 405, Address: 0x1007cc, Func Offset: 0x52c
	// Line 406, Address: 0x1007dc, Func Offset: 0x53c
	// Line 408, Address: 0x1007ec, Func Offset: 0x54c
	// Line 409, Address: 0x1007fc, Func Offset: 0x55c
	// Line 410, Address: 0x100808, Func Offset: 0x568
	// Line 411, Address: 0x10080c, Func Offset: 0x56c
	// Line 448, Address: 0x100810, Func Offset: 0x570
	// Line 449, Address: 0x100828, Func Offset: 0x588
	// Line 450, Address: 0x100840, Func Offset: 0x5a0
	// Line 451, Address: 0x100858, Func Offset: 0x5b8
	// Line 454, Address: 0x10085c, Func Offset: 0x5bc
	// Line 476, Address: 0x100870, Func Offset: 0x5d0
	// Line 477, Address: 0x100878, Func Offset: 0x5d8
	// Line 478, Address: 0x1008c4, Func Offset: 0x624
	// Line 479, Address: 0x1008cc, Func Offset: 0x62c
	// Line 481, Address: 0x100918, Func Offset: 0x678
	// Line 482, Address: 0x100930, Func Offset: 0x690
	// Line 483, Address: 0x100948, Func Offset: 0x6a8
	// Line 484, Address: 0x100960, Func Offset: 0x6c0
	// Line 486, Address: 0x100964, Func Offset: 0x6c4
	// Line 487, Address: 0x100978, Func Offset: 0x6d8
	// Line 489, Address: 0x1009a0, Func Offset: 0x700
	// Line 491, Address: 0x1009b8, Func Offset: 0x718
	// Line 492, Address: 0x1009cc, Func Offset: 0x72c
	// Line 496, Address: 0x1009d4, Func Offset: 0x734
	// Line 498, Address: 0x1009d8, Func Offset: 0x738
	// Line 502, Address: 0x1009e0, Func Offset: 0x740
	// Line 503, Address: 0x1009e8, Func Offset: 0x748
	// Line 505, Address: 0x100a10, Func Offset: 0x770
	// Line 509, Address: 0x100a18, Func Offset: 0x778
	// Line 510, Address: 0x100a24, Func Offset: 0x784
	// Line 511, Address: 0x100a34, Func Offset: 0x794
	// Line 512, Address: 0x100a44, Func Offset: 0x7a4
	// Line 513, Address: 0x100a54, Func Offset: 0x7b4
	// Line 514, Address: 0x100a60, Func Offset: 0x7c0
	// Line 515, Address: 0x100a64, Func Offset: 0x7c4
	// Line 516, Address: 0x100a6c, Func Offset: 0x7cc
	// Line 517, Address: 0x100a90, Func Offset: 0x7f0
	// Line 518, Address: 0x100ab8, Func Offset: 0x818
	// Line 519, Address: 0x100ae0, Func Offset: 0x840
	// Line 520, Address: 0x100aec, Func Offset: 0x84c
	// Line 522, Address: 0x100af0, Func Offset: 0x850
	// Line 523, Address: 0x100b18, Func Offset: 0x878
	// Line 527, Address: 0x100b20, Func Offset: 0x880
	// Line 532, Address: 0x100b30, Func Offset: 0x890
	// Line 533, Address: 0x100b34, Func Offset: 0x894
	// Func End, Address: 0x100b58, Func Offset: 0x8b8
}

// 
// Start address: 0x100b60
void shCharacterAnimePartsControl(shSkelton* stp, _anon1* rot)
{
	_anon0 test_mat;
	_anon1 test_vec;
	// Line 572, Address: 0x100b60, Func Offset: 0
	// Line 579, Address: 0x100b70, Func Offset: 0x10
	// Line 580, Address: 0x100b7c, Func Offset: 0x1c
	// Line 581, Address: 0x100b88, Func Offset: 0x28
	// Line 585, Address: 0x100b94, Func Offset: 0x34
	// Line 586, Address: 0x100ba0, Func Offset: 0x40
	// Line 587, Address: 0x100bac, Func Offset: 0x4c
	// Line 592, Address: 0x100bb8, Func Offset: 0x58
	// Line 598, Address: 0x100c10, Func Offset: 0xb0
	// Line 602, Address: 0x100c2c, Func Offset: 0xcc
	// Line 603, Address: 0x100c38, Func Offset: 0xd8
	// Line 604, Address: 0x100c44, Func Offset: 0xe4
	// Line 606, Address: 0x100c50, Func Offset: 0xf0
	// Line 607, Address: 0x100c58, Func Offset: 0xf8
	// Func End, Address: 0x100c68, Func Offset: 0x108
}

// 
// Start address: 0x100c70
void shCharacterAnimeReconstruct(shAnime3d* ap, int inter_type, int type)
{
	_anon1 rot;
	_anon0 r_mat;
	_anon1* axis;
	float d2;
	float d;
	float c_1;
	float c;
	float s;
	float delta;
	shSkelton* p_stp;
	_anon0* mat;
	_anon1* pos;
	shSkelton* parent;
	shSkelton* stp;
	int count;
	int i;
	_anon0 mat_tmp;
	_anon1 trans_tmp;
	// Line 620, Address: 0x100c70, Func Offset: 0
	// Line 621, Address: 0x100ca8, Func Offset: 0x38
	// Line 626, Address: 0x100cac, Func Offset: 0x3c
	// Line 628, Address: 0x100cb0, Func Offset: 0x40
	// Line 632, Address: 0x100cf4, Func Offset: 0x84
	// Line 634, Address: 0x100d00, Func Offset: 0x90
	// Line 636, Address: 0x100d08, Func Offset: 0x98
	// Line 637, Address: 0x100d14, Func Offset: 0xa4
	// Line 639, Address: 0x100d1c, Func Offset: 0xac
	// Line 642, Address: 0x100d20, Func Offset: 0xb0
	// Line 650, Address: 0x100d2c, Func Offset: 0xbc
	// Line 661, Address: 0x100d38, Func Offset: 0xc8
	// Line 662, Address: 0x100d40, Func Offset: 0xd0
	// Line 668, Address: 0x100d48, Func Offset: 0xd8
	// Line 674, Address: 0x100d74, Func Offset: 0x104
	// Line 675, Address: 0x100d84, Func Offset: 0x114
	// Line 676, Address: 0x100d90, Func Offset: 0x120
	// Line 677, Address: 0x100da0, Func Offset: 0x130
	// Line 678, Address: 0x100db0, Func Offset: 0x140
	// Line 679, Address: 0x100dc0, Func Offset: 0x150
	// Line 681, Address: 0x100dd0, Func Offset: 0x160
	// Line 682, Address: 0x100dd4, Func Offset: 0x164
	// Line 683, Address: 0x100ddc, Func Offset: 0x16c
	// Line 684, Address: 0x100de4, Func Offset: 0x174
	// Line 685, Address: 0x100dec, Func Offset: 0x17c
	// Line 687, Address: 0x100df4, Func Offset: 0x184
	// Line 688, Address: 0x100dfc, Func Offset: 0x18c
	// Line 689, Address: 0x100e04, Func Offset: 0x194
	// Line 690, Address: 0x100e0c, Func Offset: 0x19c
	// Line 692, Address: 0x100e14, Func Offset: 0x1a4
	// Line 693, Address: 0x100e1c, Func Offset: 0x1ac
	// Line 694, Address: 0x100e24, Func Offset: 0x1b4
	// Line 695, Address: 0x100e2c, Func Offset: 0x1bc
	// Line 697, Address: 0x100e34, Func Offset: 0x1c4
	// Line 698, Address: 0x100e40, Func Offset: 0x1d0
	// Line 699, Address: 0x100e4c, Func Offset: 0x1dc
	// Line 701, Address: 0x100e58, Func Offset: 0x1e8
	// Line 702, Address: 0x100e64, Func Offset: 0x1f4
	// Line 703, Address: 0x100e70, Func Offset: 0x200
	// Line 704, Address: 0x100e7c, Func Offset: 0x20c
	// Line 710, Address: 0x100e8c, Func Offset: 0x21c
	// Line 712, Address: 0x100ea0, Func Offset: 0x230
	// Line 717, Address: 0x100ee4, Func Offset: 0x274
	// Line 719, Address: 0x100ee8, Func Offset: 0x278
	// Line 720, Address: 0x100eec, Func Offset: 0x27c
	// Line 727, Address: 0x100efc, Func Offset: 0x28c
	// Line 733, Address: 0x100f04, Func Offset: 0x294
	// Line 734, Address: 0x100f1c, Func Offset: 0x2ac
	// Line 739, Address: 0x100f50, Func Offset: 0x2e0
	// Line 740, Address: 0x100f58, Func Offset: 0x2e8
	// Line 741, Address: 0x100f64, Func Offset: 0x2f4
	// Line 742, Address: 0x100f70, Func Offset: 0x300
	// Line 743, Address: 0x100f7c, Func Offset: 0x30c
	// Line 744, Address: 0x100f84, Func Offset: 0x314
	// Line 745, Address: 0x100f8c, Func Offset: 0x31c
	// Line 746, Address: 0x100f94, Func Offset: 0x324
	// Line 747, Address: 0x100f9c, Func Offset: 0x32c
	// Line 749, Address: 0x100fa0, Func Offset: 0x330
	// Line 751, Address: 0x100fa8, Func Offset: 0x338
	// Line 752, Address: 0x100fb0, Func Offset: 0x340
	// Line 755, Address: 0x100fc4, Func Offset: 0x354
	// Line 756, Address: 0x100fcc, Func Offset: 0x35c
	// Line 757, Address: 0x100fdc, Func Offset: 0x36c
	// Line 762, Address: 0x100ff0, Func Offset: 0x380
	// Line 771, Address: 0x100ff8, Func Offset: 0x388
	// Line 775, Address: 0x101000, Func Offset: 0x390
	// Line 776, Address: 0x101034, Func Offset: 0x3c4
	// Line 777, Address: 0x101038, Func Offset: 0x3c8
	// Line 778, Address: 0x101048, Func Offset: 0x3d8
	// Line 784, Address: 0x101060, Func Offset: 0x3f0
	// Line 790, Address: 0x101078, Func Offset: 0x408
	// Line 791, Address: 0x101088, Func Offset: 0x418
	// Line 798, Address: 0x10108c, Func Offset: 0x41c
	// Line 805, Address: 0x101094, Func Offset: 0x424
	// Line 807, Address: 0x1010c8, Func Offset: 0x458
	// Line 808, Address: 0x1010e0, Func Offset: 0x470
	// Line 810, Address: 0x1010f4, Func Offset: 0x484
	// Line 812, Address: 0x1010fc, Func Offset: 0x48c
	// Line 814, Address: 0x101108, Func Offset: 0x498
	// Line 815, Address: 0x10111c, Func Offset: 0x4ac
	// Line 817, Address: 0x101130, Func Offset: 0x4c0
	// Line 819, Address: 0x101138, Func Offset: 0x4c8
	// Line 821, Address: 0x101144, Func Offset: 0x4d4
	// Line 830, Address: 0x101158, Func Offset: 0x4e8
	// Line 832, Address: 0x101160, Func Offset: 0x4f0
	// Line 834, Address: 0x101170, Func Offset: 0x500
	// Line 835, Address: 0x101174, Func Offset: 0x504
	// Line 839, Address: 0x101188, Func Offset: 0x518
	// Func End, Address: 0x1011c0, Func Offset: 0x550
}

// 
// Start address: 0x1011f0
void EigenVector(_anon0* m, _anon1* t)
{
	int j;
	int i;
	_anon1 nv;
	_anon1 v[2];
	float max;
	int maxs;
	float sm[9];
	_anon0 me;
	// Line 848, Address: 0x1011f0, Func Offset: 0
	// Line 858, Address: 0x1011f8, Func Offset: 0x8
	// Line 859, Address: 0x101210, Func Offset: 0x20
	// Line 860, Address: 0x101218, Func Offset: 0x28
	// Line 861, Address: 0x101220, Func Offset: 0x30
	// Line 862, Address: 0x101228, Func Offset: 0x38
	// Line 863, Address: 0x101240, Func Offset: 0x50
	// Line 864, Address: 0x101248, Func Offset: 0x58
	// Line 865, Address: 0x101250, Func Offset: 0x60
	// Line 866, Address: 0x101258, Func Offset: 0x68
	// Line 870, Address: 0x101270, Func Offset: 0x80
	// Line 871, Address: 0x101290, Func Offset: 0xa0
	// Line 872, Address: 0x1012b0, Func Offset: 0xc0
	// Line 874, Address: 0x1012d0, Func Offset: 0xe0
	// Line 875, Address: 0x1012f0, Func Offset: 0x100
	// Line 876, Address: 0x101310, Func Offset: 0x120
	// Line 878, Address: 0x101330, Func Offset: 0x140
	// Line 879, Address: 0x101350, Func Offset: 0x160
	// Line 880, Address: 0x101370, Func Offset: 0x180
	// Line 882, Address: 0x101390, Func Offset: 0x1a0
	// Line 883, Address: 0x10139c, Func Offset: 0x1ac
	// Line 884, Address: 0x1013a8, Func Offset: 0x1b8
	// Line 885, Address: 0x101410, Func Offset: 0x220
	// Line 888, Address: 0x101434, Func Offset: 0x244
	// Line 889, Address: 0x101438, Func Offset: 0x248
	// Line 890, Address: 0x10143c, Func Offset: 0x24c
	// Line 891, Address: 0x101448, Func Offset: 0x258
	// Line 892, Address: 0x101454, Func Offset: 0x264
	// Line 893, Address: 0x10147c, Func Offset: 0x28c
	// Line 894, Address: 0x101488, Func Offset: 0x298
	// Line 895, Address: 0x1014a4, Func Offset: 0x2b4
	// Line 896, Address: 0x1014a8, Func Offset: 0x2b8
	// Line 901, Address: 0x1014cc, Func Offset: 0x2dc
	// Line 905, Address: 0x1014f4, Func Offset: 0x304
	// Line 906, Address: 0x1014fc, Func Offset: 0x30c
	// Line 907, Address: 0x101504, Func Offset: 0x314
	// Line 908, Address: 0x10150c, Func Offset: 0x31c
	// Line 909, Address: 0x101514, Func Offset: 0x324
	// Line 910, Address: 0x10151c, Func Offset: 0x32c
	// Line 911, Address: 0x101524, Func Offset: 0x334
	// Line 915, Address: 0x10152c, Func Offset: 0x33c
	// Line 916, Address: 0x101534, Func Offset: 0x344
	// Line 917, Address: 0x10153c, Func Offset: 0x34c
	// Line 918, Address: 0x101544, Func Offset: 0x354
	// Line 919, Address: 0x10154c, Func Offset: 0x35c
	// Line 920, Address: 0x101554, Func Offset: 0x364
	// Line 921, Address: 0x10155c, Func Offset: 0x36c
	// Line 925, Address: 0x101564, Func Offset: 0x374
	// Line 926, Address: 0x10156c, Func Offset: 0x37c
	// Line 927, Address: 0x101574, Func Offset: 0x384
	// Line 928, Address: 0x10157c, Func Offset: 0x38c
	// Line 929, Address: 0x101584, Func Offset: 0x394
	// Line 930, Address: 0x10158c, Func Offset: 0x39c
	// Line 936, Address: 0x101594, Func Offset: 0x3a4
	// Line 939, Address: 0x1015b8, Func Offset: 0x3c8
	// Line 942, Address: 0x1015cc, Func Offset: 0x3dc
	// Func End, Address: 0x1015dc, Func Offset: 0x3ec
}

// 
// Start address: 0x101610
void EigenVec2Mat(_anon1* ev, _anon0* smat)
{
	_anon1 mv2;
	_anon1 mv1;
	_anon1 mv0;
	_anon1 v2;
	_anon1 v1;
	// Line 951, Address: 0x101610, Func Offset: 0
	// Line 955, Address: 0x101628, Func Offset: 0x18
	// Line 957, Address: 0x101638, Func Offset: 0x28
	// Line 958, Address: 0x101640, Func Offset: 0x30
	// Line 959, Address: 0x101648, Func Offset: 0x38
	// Line 962, Address: 0x101650, Func Offset: 0x40
	// Line 963, Address: 0x10167c, Func Offset: 0x6c
	// Line 964, Address: 0x1016a8, Func Offset: 0x98
	// Line 965, Address: 0x1016b0, Func Offset: 0xa0
	// Line 966, Address: 0x1016bc, Func Offset: 0xac
	// Line 967, Address: 0x1016d8, Func Offset: 0xc8
	// Line 969, Address: 0x101714, Func Offset: 0x104
	// Line 970, Address: 0x101720, Func Offset: 0x110
	// Line 971, Address: 0x101728, Func Offset: 0x118
	// Line 972, Address: 0x101744, Func Offset: 0x134
	// Line 973, Address: 0x10174c, Func Offset: 0x13c
	// Line 974, Address: 0x101758, Func Offset: 0x148
	// Line 975, Address: 0x101760, Func Offset: 0x150
	// Line 976, Address: 0x10176c, Func Offset: 0x15c
	// Line 978, Address: 0x101774, Func Offset: 0x164
	// Line 979, Address: 0x101790, Func Offset: 0x180
	// Line 981, Address: 0x1017cc, Func Offset: 0x1bc
	// Line 983, Address: 0x1017d8, Func Offset: 0x1c8
	// Line 984, Address: 0x1017e0, Func Offset: 0x1d0
	// Line 985, Address: 0x10180c, Func Offset: 0x1fc
	// Line 986, Address: 0x101814, Func Offset: 0x204
	// Line 987, Address: 0x101820, Func Offset: 0x210
	// Line 988, Address: 0x10183c, Func Offset: 0x22c
	// Line 990, Address: 0x101878, Func Offset: 0x268
	// Line 991, Address: 0x101884, Func Offset: 0x274
	// Line 992, Address: 0x10188c, Func Offset: 0x27c
	// Line 993, Address: 0x1018a8, Func Offset: 0x298
	// Line 994, Address: 0x1018b0, Func Offset: 0x2a0
	// Line 995, Address: 0x1018bc, Func Offset: 0x2ac
	// Line 996, Address: 0x1018c4, Func Offset: 0x2b4
	// Line 997, Address: 0x1018d0, Func Offset: 0x2c0
	// Line 999, Address: 0x1018d8, Func Offset: 0x2c8
	// Line 1000, Address: 0x1018f4, Func Offset: 0x2e4
	// Line 1002, Address: 0x101930, Func Offset: 0x320
	// Line 1006, Address: 0x10193c, Func Offset: 0x32c
	// Line 1009, Address: 0x10194c, Func Offset: 0x33c
	// Line 1010, Address: 0x101954, Func Offset: 0x344
	// Line 1011, Address: 0x10195c, Func Offset: 0x34c
	// Line 1015, Address: 0x101964, Func Offset: 0x354
	// Line 1018, Address: 0x101988, Func Offset: 0x378
	// Line 1021, Address: 0x101998, Func Offset: 0x388
	// Line 1022, Address: 0x1019a0, Func Offset: 0x390
	// Line 1023, Address: 0x1019a8, Func Offset: 0x398
	// Line 1025, Address: 0x1019b0, Func Offset: 0x3a0
	// Line 1026, Address: 0x1019bc, Func Offset: 0x3ac
	// Line 1027, Address: 0x1019c8, Func Offset: 0x3b8
	// Line 1028, Address: 0x1019d4, Func Offset: 0x3c4
	// Line 1029, Address: 0x1019e4, Func Offset: 0x3d4
	// Line 1030, Address: 0x1019f0, Func Offset: 0x3e0
	// Line 1031, Address: 0x1019fc, Func Offset: 0x3ec
	// Line 1034, Address: 0x101a08, Func Offset: 0x3f8
	// Func End, Address: 0x101a20, Func Offset: 0x410
}

// 
// Start address: 0x101a20
void shCharacterAnimeCalcComplement(shAnime3d* ap)
{
	float theta;
	_anon1 axis;
	_anon0 ieig;
	_anon0 eig;
	_anon0 mat;
	shSkelton* stp;
	// Line 1066, Address: 0x101a20, Func Offset: 0
	// Line 1074, Address: 0x101a2c, Func Offset: 0xc
	// Line 1075, Address: 0x101a38, Func Offset: 0x18
	// Line 1076, Address: 0x101a44, Func Offset: 0x24
	// Line 1077, Address: 0x101a8c, Func Offset: 0x6c
	// Line 1078, Address: 0x101aa0, Func Offset: 0x80
	// Line 1079, Address: 0x101ab0, Func Offset: 0x90
	// Line 1080, Address: 0x101ac0, Func Offset: 0xa0
	// Line 1081, Address: 0x101b08, Func Offset: 0xe8
	// Line 1082, Address: 0x101b1c, Func Offset: 0xfc
	// Line 1084, Address: 0x101b30, Func Offset: 0x110
	// Line 1085, Address: 0x101b40, Func Offset: 0x120
	// Line 1086, Address: 0x101b48, Func Offset: 0x128
	// Line 1087, Address: 0x101b70, Func Offset: 0x150
	// Line 1088, Address: 0x101b80, Func Offset: 0x160
	// Line 1089, Address: 0x101b90, Func Offset: 0x170
	// Line 1090, Address: 0x101ba0, Func Offset: 0x180
	// Line 1091, Address: 0x101bbc, Func Offset: 0x19c
	// Line 1092, Address: 0x101bc4, Func Offset: 0x1a4
	// Line 1093, Address: 0x101bcc, Func Offset: 0x1ac
	// Line 1094, Address: 0x101bd4, Func Offset: 0x1b4
	// Line 1095, Address: 0x101bd8, Func Offset: 0x1b8
	// Line 1097, Address: 0x101be8, Func Offset: 0x1c8
	// Func End, Address: 0x101bfc, Func Offset: 0x1dc
}

// 
// Start address: 0x101c00
void shCharacterAnimeSetSkelton(shAnime3d* ap, shSkelton* stp)
{
	// Line 1113, Address: 0x101c00, Func Offset: 0
	// Line 1114, Address: 0x101c0c, Func Offset: 0xc
	// Line 1115, Address: 0x101c18, Func Offset: 0x18
	// Line 1116, Address: 0x101c24, Func Offset: 0x24
	// Func End, Address: 0x101c30, Func Offset: 0x30
}

// 
// Start address: 0x101c30
int shCharacterDramaAnimeExecMain(shAnime3d* ap)
{
	void* adr;
	shSkelton* stp;
	short des_frame;
	short src_frame;
	int inter_cont;
	// Line 1136, Address: 0x101c30, Func Offset: 0
	// Line 1138, Address: 0x101c54, Func Offset: 0x24
	// Line 1144, Address: 0x101c58, Func Offset: 0x28
	// Line 1147, Address: 0x101c94, Func Offset: 0x64
	// Line 1148, Address: 0x101ca8, Func Offset: 0x78
	// Line 1152, Address: 0x101cb0, Func Offset: 0x80
	// Line 1153, Address: 0x101cb8, Func Offset: 0x88
	// Line 1154, Address: 0x101cd0, Func Offset: 0xa0
	// Line 1155, Address: 0x101ce8, Func Offset: 0xb8
	// Line 1156, Address: 0x101cf4, Func Offset: 0xc4
	// Line 1159, Address: 0x101cfc, Func Offset: 0xcc
	// Line 1160, Address: 0x101d14, Func Offset: 0xe4
	// Line 1162, Address: 0x101d2c, Func Offset: 0xfc
	// Line 1163, Address: 0x101d50, Func Offset: 0x120
	// Line 1167, Address: 0x101d5c, Func Offset: 0x12c
	// Line 1168, Address: 0x101d88, Func Offset: 0x158
	// Line 1170, Address: 0x101da0, Func Offset: 0x170
	// Line 1171, Address: 0x101da8, Func Offset: 0x178
	// Line 1172, Address: 0x101db8, Func Offset: 0x188
	// Line 1173, Address: 0x101dc8, Func Offset: 0x198
	// Line 1174, Address: 0x101dcc, Func Offset: 0x19c
	// Line 1175, Address: 0x101dec, Func Offset: 0x1bc
	// Line 1176, Address: 0x101e0c, Func Offset: 0x1dc
	// Line 1177, Address: 0x101e28, Func Offset: 0x1f8
	// Line 1178, Address: 0x101e58, Func Offset: 0x228
	// Line 1179, Address: 0x101e60, Func Offset: 0x230
	// Line 1184, Address: 0x101eb8, Func Offset: 0x288
	// Line 1185, Address: 0x101ec0, Func Offset: 0x290
	// Line 1186, Address: 0x101ee8, Func Offset: 0x2b8
	// Line 1187, Address: 0x101f08, Func Offset: 0x2d8
	// Line 1188, Address: 0x101f24, Func Offset: 0x2f4
	// Line 1189, Address: 0x101f4c, Func Offset: 0x31c
	// Line 1190, Address: 0x101f54, Func Offset: 0x324
	// Line 1191, Address: 0x101f7c, Func Offset: 0x34c
	// Line 1193, Address: 0x101f88, Func Offset: 0x358
	// Line 1194, Address: 0x101fac, Func Offset: 0x37c
	// Line 1197, Address: 0x101fbc, Func Offset: 0x38c
	// Line 1198, Address: 0x101fcc, Func Offset: 0x39c
	// Line 1199, Address: 0x101fd8, Func Offset: 0x3a8
	// Line 1200, Address: 0x10200c, Func Offset: 0x3dc
	// Line 1201, Address: 0x102034, Func Offset: 0x404
	// Line 1202, Address: 0x102038, Func Offset: 0x408
	// Line 1203, Address: 0x102048, Func Offset: 0x418
	// Line 1205, Address: 0x102050, Func Offset: 0x420
	// Line 1207, Address: 0x10206c, Func Offset: 0x43c
	// Line 1208, Address: 0x102074, Func Offset: 0x444
	// Line 1209, Address: 0x10207c, Func Offset: 0x44c
	// Line 1210, Address: 0x102088, Func Offset: 0x458
	// Line 1211, Address: 0x1020a8, Func Offset: 0x478
	// Line 1213, Address: 0x1020ac, Func Offset: 0x47c
	// Line 1215, Address: 0x1020b8, Func Offset: 0x488
	// Line 1216, Address: 0x1020d4, Func Offset: 0x4a4
	// Line 1217, Address: 0x1020f4, Func Offset: 0x4c4
	// Line 1218, Address: 0x1020fc, Func Offset: 0x4cc
	// Line 1219, Address: 0x10210c, Func Offset: 0x4dc
	// Line 1220, Address: 0x102118, Func Offset: 0x4e8
	// Line 1221, Address: 0x10214c, Func Offset: 0x51c
	// Line 1222, Address: 0x102174, Func Offset: 0x544
	// Line 1223, Address: 0x102178, Func Offset: 0x548
	// Line 1226, Address: 0x102188, Func Offset: 0x558
	// Line 1228, Address: 0x1021a0, Func Offset: 0x570
	// Line 1229, Address: 0x1021a8, Func Offset: 0x578
	// Line 1230, Address: 0x1021b0, Func Offset: 0x580
	// Line 1231, Address: 0x1021bc, Func Offset: 0x58c
	// Line 1232, Address: 0x1021dc, Func Offset: 0x5ac
	// Line 1234, Address: 0x1021e0, Func Offset: 0x5b0
	// Line 1235, Address: 0x1021ec, Func Offset: 0x5bc
	// Line 1236, Address: 0x1021f0, Func Offset: 0x5c0
	// Line 1237, Address: 0x10220c, Func Offset: 0x5dc
	// Line 1238, Address: 0x10222c, Func Offset: 0x5fc
	// Line 1240, Address: 0x102234, Func Offset: 0x604
	// Line 1245, Address: 0x102240, Func Offset: 0x610
	// Line 1252, Address: 0x102254, Func Offset: 0x624
	// Line 1255, Address: 0x10225c, Func Offset: 0x62c
	// Line 1256, Address: 0x10227c, Func Offset: 0x64c
	// Line 1257, Address: 0x102294, Func Offset: 0x664
	// Line 1258, Address: 0x1022b0, Func Offset: 0x680
	// Line 1259, Address: 0x1022b8, Func Offset: 0x688
	// Line 1260, Address: 0x1022c0, Func Offset: 0x690
	// Line 1261, Address: 0x1022c8, Func Offset: 0x698
	// Line 1262, Address: 0x1022d0, Func Offset: 0x6a0
	// Line 1263, Address: 0x1022d8, Func Offset: 0x6a8
	// Line 1264, Address: 0x1022e0, Func Offset: 0x6b0
	// Line 1265, Address: 0x1022f0, Func Offset: 0x6c0
	// Line 1266, Address: 0x1022fc, Func Offset: 0x6cc
	// Line 1267, Address: 0x10230c, Func Offset: 0x6dc
	// Line 1268, Address: 0x102318, Func Offset: 0x6e8
	// Line 1270, Address: 0x102320, Func Offset: 0x6f0
	// Line 1272, Address: 0x102338, Func Offset: 0x708
	// Line 1275, Address: 0x102340, Func Offset: 0x710
	// Line 1276, Address: 0x102350, Func Offset: 0x720
	// Line 1277, Address: 0x10235c, Func Offset: 0x72c
	// Line 1278, Address: 0x10238c, Func Offset: 0x75c
	// Line 1279, Address: 0x1023b4, Func Offset: 0x784
	// Line 1280, Address: 0x1023b8, Func Offset: 0x788
	// Line 1281, Address: 0x1023c8, Func Offset: 0x798
	// Line 1282, Address: 0x1023e8, Func Offset: 0x7b8
	// Line 1283, Address: 0x1023f0, Func Offset: 0x7c0
	// Line 1284, Address: 0x1023fc, Func Offset: 0x7cc
	// Line 1286, Address: 0x102408, Func Offset: 0x7d8
	// Line 1287, Address: 0x10241c, Func Offset: 0x7ec
	// Line 1295, Address: 0x102424, Func Offset: 0x7f4
	// Line 1296, Address: 0x10242c, Func Offset: 0x7fc
	// Line 1297, Address: 0x10244c, Func Offset: 0x81c
	// Line 1298, Address: 0x102464, Func Offset: 0x834
	// Line 1299, Address: 0x102470, Func Offset: 0x840
	// Line 1300, Address: 0x102478, Func Offset: 0x848
	// Line 1302, Address: 0x102484, Func Offset: 0x854
	// Line 1311, Address: 0x102498, Func Offset: 0x868
	// Line 1312, Address: 0x10249c, Func Offset: 0x86c
	// Func End, Address: 0x1024c4, Func Offset: 0x894
}

// 
// Start address: 0x1024d0
int shCharacterPlayingAnimeExecMain(shAnime3d* ap, int type)
{
	int count;
	int c_frame_y;
	int c_frame_x;
	int t_count;
	int end;
	int start;
	int count;
	int c_frame_y;
	int c_frame_x;
	int t_count;
	int end;
	int start;
	int comp_tmp;
	int count;
	int t_count;
	int end;
	int start;
	void* adr;
	shSkelton* stp;
	short des_frame;
	short src_frame;
	int inter_cont;
	int i1;
	float t;
	_anon0 backup[41];
	// Line 1333, Address: 0x1024d0, Func Offset: 0
	// Line 1339, Address: 0x102504, Func Offset: 0x34
	// Line 1348, Address: 0x102508, Func Offset: 0x38
	// Line 1350, Address: 0x102544, Func Offset: 0x74
	// Line 1351, Address: 0x102558, Func Offset: 0x88
	// Line 1354, Address: 0x102560, Func Offset: 0x90
	// Line 1358, Address: 0x10256c, Func Offset: 0x9c
	// Line 1359, Address: 0x102584, Func Offset: 0xb4
	// Line 1364, Address: 0x10259c, Func Offset: 0xcc
	// Line 1365, Address: 0x1025a8, Func Offset: 0xd8
	// Line 1379, Address: 0x1025b0, Func Offset: 0xe0
	// Line 1380, Address: 0x1025c4, Func Offset: 0xf4
	// Line 1385, Address: 0x1025d8, Func Offset: 0x108
	// Line 1402, Address: 0x1025fc, Func Offset: 0x12c
	// Line 1403, Address: 0x10260c, Func Offset: 0x13c
	// Line 1409, Address: 0x10261c, Func Offset: 0x14c
	// Line 1410, Address: 0x102654, Func Offset: 0x184
	// Line 1414, Address: 0x102670, Func Offset: 0x1a0
	// Line 1415, Address: 0x1026ac, Func Offset: 0x1dc
	// Line 1417, Address: 0x1026b4, Func Offset: 0x1e4
	// Line 1419, Address: 0x1026c0, Func Offset: 0x1f0
	// Line 1424, Address: 0x1026cc, Func Offset: 0x1fc
	// Line 1428, Address: 0x1026ec, Func Offset: 0x21c
	// Line 1429, Address: 0x102708, Func Offset: 0x238
	// Line 1430, Address: 0x10271c, Func Offset: 0x24c
	// Line 1434, Address: 0x102728, Func Offset: 0x258
	// Line 1435, Address: 0x102730, Func Offset: 0x260
	// Line 1436, Address: 0x102744, Func Offset: 0x274
	// Line 1451, Address: 0x102754, Func Offset: 0x284
	// Line 1458, Address: 0x10276c, Func Offset: 0x29c
	// Line 1460, Address: 0x102798, Func Offset: 0x2c8
	// Line 1462, Address: 0x1027b4, Func Offset: 0x2e4
	// Line 1464, Address: 0x1027e0, Func Offset: 0x310
	// Line 1465, Address: 0x102804, Func Offset: 0x334
	// Line 1466, Address: 0x10280c, Func Offset: 0x33c
	// Line 1472, Address: 0x10282c, Func Offset: 0x35c
	// Line 1473, Address: 0x10283c, Func Offset: 0x36c
	// Line 1474, Address: 0x102848, Func Offset: 0x378
	// Line 1475, Address: 0x10287c, Func Offset: 0x3ac
	// Line 1476, Address: 0x1028a4, Func Offset: 0x3d4
	// Line 1477, Address: 0x1028a8, Func Offset: 0x3d8
	// Line 1479, Address: 0x1028b8, Func Offset: 0x3e8
	// Line 1481, Address: 0x1028e4, Func Offset: 0x414
	// Line 1482, Address: 0x102908, Func Offset: 0x438
	// Line 1488, Address: 0x102910, Func Offset: 0x440
	// Line 1490, Address: 0x10293c, Func Offset: 0x46c
	// Line 1492, Address: 0x10295c, Func Offset: 0x48c
	// Line 1494, Address: 0x102988, Func Offset: 0x4b8
	// Line 1497, Address: 0x1029a4, Func Offset: 0x4d4
	// Line 1507, Address: 0x1029b0, Func Offset: 0x4e0
	// Line 1511, Address: 0x1029c8, Func Offset: 0x4f8
	// Line 1515, Address: 0x1029e4, Func Offset: 0x514
	// Line 1521, Address: 0x102a10, Func Offset: 0x540
	// Line 1524, Address: 0x102a30, Func Offset: 0x560
	// Line 1526, Address: 0x102a38, Func Offset: 0x568
	// Line 1530, Address: 0x102a54, Func Offset: 0x584
	// Line 1531, Address: 0x102a5c, Func Offset: 0x58c
	// Line 1532, Address: 0x102a6c, Func Offset: 0x59c
	// Line 1533, Address: 0x102a8c, Func Offset: 0x5bc
	// Line 1535, Address: 0x102aa0, Func Offset: 0x5d0
	// Line 1536, Address: 0x102aa8, Func Offset: 0x5d8
	// Line 1537, Address: 0x102ab0, Func Offset: 0x5e0
	// Line 1538, Address: 0x102ab4, Func Offset: 0x5e4
	// Line 1539, Address: 0x102ac0, Func Offset: 0x5f0
	// Line 1540, Address: 0x102acc, Func Offset: 0x5fc
	// Line 1541, Address: 0x102ae8, Func Offset: 0x618
	// Line 1542, Address: 0x102af0, Func Offset: 0x620
	// Line 1543, Address: 0x102afc, Func Offset: 0x62c
	// Line 1547, Address: 0x102b10, Func Offset: 0x640
	// Line 1549, Address: 0x102b18, Func Offset: 0x648
	// Line 1551, Address: 0x102b20, Func Offset: 0x650
	// Line 1552, Address: 0x102b4c, Func Offset: 0x67c
	// Line 1558, Address: 0x102b78, Func Offset: 0x6a8
	// Line 1574, Address: 0x102b80, Func Offset: 0x6b0
	// Line 1575, Address: 0x102b9c, Func Offset: 0x6cc
	// Line 1576, Address: 0x102ba8, Func Offset: 0x6d8
	// Line 1578, Address: 0x102bb0, Func Offset: 0x6e0
	// Line 1583, Address: 0x102bd0, Func Offset: 0x700
	// Line 1587, Address: 0x102be8, Func Offset: 0x718
	// Line 1589, Address: 0x102c04, Func Offset: 0x734
	// Line 1592, Address: 0x102c44, Func Offset: 0x774
	// Line 1593, Address: 0x102c60, Func Offset: 0x790
	// Line 1595, Address: 0x102c90, Func Offset: 0x7c0
	// Line 1596, Address: 0x102c98, Func Offset: 0x7c8
	// Line 1601, Address: 0x102ca0, Func Offset: 0x7d0
	// Line 1602, Address: 0x102ca8, Func Offset: 0x7d8
	// Line 1603, Address: 0x102cb0, Func Offset: 0x7e0
	// Line 1609, Address: 0x102cb8, Func Offset: 0x7e8
	// Line 1610, Address: 0x102cc8, Func Offset: 0x7f8
	// Line 1611, Address: 0x102cd8, Func Offset: 0x808
	// Line 1612, Address: 0x102ce8, Func Offset: 0x818
	// Line 1616, Address: 0x102cf8, Func Offset: 0x828
	// Line 1617, Address: 0x102d00, Func Offset: 0x830
	// Line 1618, Address: 0x102d08, Func Offset: 0x838
	// Line 1623, Address: 0x102d34, Func Offset: 0x864
	// Line 1624, Address: 0x102d3c, Func Offset: 0x86c
	// Line 1625, Address: 0x102d4c, Func Offset: 0x87c
	// Line 1626, Address: 0x102d5c, Func Offset: 0x88c
	// Line 1627, Address: 0x102d68, Func Offset: 0x898
	// Line 1628, Address: 0x102d78, Func Offset: 0x8a8
	// Line 1630, Address: 0x102d88, Func Offset: 0x8b8
	// Line 1631, Address: 0x102d98, Func Offset: 0x8c8
	// Line 1632, Address: 0x102da8, Func Offset: 0x8d8
	// Line 1633, Address: 0x102db8, Func Offset: 0x8e8
	// Line 1635, Address: 0x102dc8, Func Offset: 0x8f8
	// Line 1639, Address: 0x102dd0, Func Offset: 0x900
	// Line 1640, Address: 0x102dec, Func Offset: 0x91c
	// Line 1641, Address: 0x102e0c, Func Offset: 0x93c
	// Line 1642, Address: 0x102e1c, Func Offset: 0x94c
	// Line 1643, Address: 0x102e3c, Func Offset: 0x96c
	// Line 1645, Address: 0x102e48, Func Offset: 0x978
	// Line 1648, Address: 0x102e5c, Func Offset: 0x98c
	// Line 1670, Address: 0x102e64, Func Offset: 0x994
	// Line 1672, Address: 0x102e80, Func Offset: 0x9b0
	// Line 1673, Address: 0x102e90, Func Offset: 0x9c0
	// Line 1674, Address: 0x102e9c, Func Offset: 0x9cc
	// Line 1675, Address: 0x102ecc, Func Offset: 0x9fc
	// Line 1676, Address: 0x102ef4, Func Offset: 0xa24
	// Line 1677, Address: 0x102ef8, Func Offset: 0xa28
	// Line 1678, Address: 0x102f08, Func Offset: 0xa38
	// Line 1683, Address: 0x102f10, Func Offset: 0xa40
	// Line 1685, Address: 0x102f3c, Func Offset: 0xa6c
	// Line 1698, Address: 0x102f58, Func Offset: 0xa88
	// Line 1700, Address: 0x102f74, Func Offset: 0xaa4
	// Line 1702, Address: 0x102f84, Func Offset: 0xab4
	// Line 1707, Address: 0x102fac, Func Offset: 0xadc
	// Line 1718, Address: 0x102fb8, Func Offset: 0xae8
	// Line 1720, Address: 0x102fc8, Func Offset: 0xaf8
	// Line 1721, Address: 0x102fdc, Func Offset: 0xb0c
	// Line 1755, Address: 0x102fe4, Func Offset: 0xb14
	// Line 1761, Address: 0x102ff0, Func Offset: 0xb20
	// Line 1762, Address: 0x103000, Func Offset: 0xb30
	// Line 1764, Address: 0x103014, Func Offset: 0xb44
	// Line 1767, Address: 0x103050, Func Offset: 0xb80
	// Line 1768, Address: 0x103060, Func Offset: 0xb90
	// Line 1771, Address: 0x10306c, Func Offset: 0xb9c
	// Line 1772, Address: 0x103080, Func Offset: 0xbb0
	// Line 1775, Address: 0x103084, Func Offset: 0xbb4
	// Line 1776, Address: 0x103098, Func Offset: 0xbc8
	// Line 1780, Address: 0x1030ac, Func Offset: 0xbdc
	// Line 1781, Address: 0x1030d8, Func Offset: 0xc08
	// Line 1783, Address: 0x1030f8, Func Offset: 0xc28
	// Line 1786, Address: 0x103104, Func Offset: 0xc34
	// Line 1787, Address: 0x10310c, Func Offset: 0xc3c
	// Line 1788, Address: 0x103124, Func Offset: 0xc54
	// Line 1789, Address: 0x103148, Func Offset: 0xc78
	// Line 1792, Address: 0x10315c, Func Offset: 0xc8c
	// Line 1797, Address: 0x103164, Func Offset: 0xc94
	// Line 1798, Address: 0x103180, Func Offset: 0xcb0
	// Line 1802, Address: 0x103198, Func Offset: 0xcc8
	// Line 1806, Address: 0x1031b4, Func Offset: 0xce4
	// Line 1807, Address: 0x1031bc, Func Offset: 0xcec
	// Line 1808, Address: 0x1031c4, Func Offset: 0xcf4
	// Line 1809, Address: 0x1031cc, Func Offset: 0xcfc
	// Line 1810, Address: 0x1031d8, Func Offset: 0xd08
	// Line 1811, Address: 0x1031e8, Func Offset: 0xd18
	// Line 1812, Address: 0x1031f8, Func Offset: 0xd28
	// Line 1825, Address: 0x103200, Func Offset: 0xd30
	// Line 1828, Address: 0x103238, Func Offset: 0xd68
	// Line 1829, Address: 0x103254, Func Offset: 0xd84
	// Line 1832, Address: 0x10328c, Func Offset: 0xdbc
	// Line 1834, Address: 0x1032a8, Func Offset: 0xdd8
	// Line 1836, Address: 0x1032b8, Func Offset: 0xde8
	// Line 1838, Address: 0x1032d8, Func Offset: 0xe08
	// Line 1839, Address: 0x1032dc, Func Offset: 0xe0c
	// Line 1840, Address: 0x1032f0, Func Offset: 0xe20
	// Line 1841, Address: 0x1032fc, Func Offset: 0xe2c
	// Line 1842, Address: 0x103334, Func Offset: 0xe64
	// Line 1843, Address: 0x103338, Func Offset: 0xe68
	// Line 1844, Address: 0x10333c, Func Offset: 0xe6c
	// Line 1847, Address: 0x103350, Func Offset: 0xe80
	// Line 1850, Address: 0x103388, Func Offset: 0xeb8
	// Line 1851, Address: 0x1033ac, Func Offset: 0xedc
	// Line 1854, Address: 0x1033e4, Func Offset: 0xf14
	// Line 1856, Address: 0x103400, Func Offset: 0xf30
	// Line 1858, Address: 0x103410, Func Offset: 0xf40
	// Line 1861, Address: 0x10342c, Func Offset: 0xf5c
	// Line 1862, Address: 0x103430, Func Offset: 0xf60
	// Line 1863, Address: 0x103458, Func Offset: 0xf88
	// Line 1864, Address: 0x103468, Func Offset: 0xf98
	// Line 1865, Address: 0x103474, Func Offset: 0xfa4
	// Line 1871, Address: 0x103494, Func Offset: 0xfc4
	// Line 1872, Address: 0x103498, Func Offset: 0xfc8
	// Line 1873, Address: 0x1034a0, Func Offset: 0xfd0
	// Line 1878, Address: 0x1034b0, Func Offset: 0xfe0
	// Line 1891, Address: 0x1034b8, Func Offset: 0xfe8
	// Line 1897, Address: 0x1034c4, Func Offset: 0xff4
	// Line 1898, Address: 0x1034d8, Func Offset: 0x1008
	// Line 1900, Address: 0x1034ec, Func Offset: 0x101c
	// Line 1903, Address: 0x103524, Func Offset: 0x1054
	// Line 1904, Address: 0x103534, Func Offset: 0x1064
	// Line 1907, Address: 0x103540, Func Offset: 0x1070
	// Line 1908, Address: 0x103554, Func Offset: 0x1084
	// Line 1911, Address: 0x103558, Func Offset: 0x1088
	// Line 1912, Address: 0x10356c, Func Offset: 0x109c
	// Line 1916, Address: 0x103580, Func Offset: 0x10b0
	// Line 1917, Address: 0x1035ac, Func Offset: 0x10dc
	// Line 1919, Address: 0x1035cc, Func Offset: 0x10fc
	// Line 1922, Address: 0x1035d4, Func Offset: 0x1104
	// Line 1923, Address: 0x1035dc, Func Offset: 0x110c
	// Line 1924, Address: 0x1035f4, Func Offset: 0x1124
	// Line 1925, Address: 0x103618, Func Offset: 0x1148
	// Line 1928, Address: 0x103630, Func Offset: 0x1160
	// Line 1933, Address: 0x103638, Func Offset: 0x1168
	// Line 1934, Address: 0x103654, Func Offset: 0x1184
	// Line 1947, Address: 0x10366c, Func Offset: 0x119c
	// Line 1950, Address: 0x1036a4, Func Offset: 0x11d4
	// Line 1951, Address: 0x1036c0, Func Offset: 0x11f0
	// Line 1954, Address: 0x1036f8, Func Offset: 0x1228
	// Line 1956, Address: 0x103714, Func Offset: 0x1244
	// Line 1958, Address: 0x103724, Func Offset: 0x1254
	// Line 1960, Address: 0x103740, Func Offset: 0x1270
	// Line 1961, Address: 0x103744, Func Offset: 0x1274
	// Line 1962, Address: 0x103754, Func Offset: 0x1284
	// Line 1963, Address: 0x103760, Func Offset: 0x1290
	// Line 1964, Address: 0x10379c, Func Offset: 0x12cc
	// Line 1965, Address: 0x1037a0, Func Offset: 0x12d0
	// Line 1966, Address: 0x1037a8, Func Offset: 0x12d8
	// Line 1969, Address: 0x1037b8, Func Offset: 0x12e8
	// Line 1972, Address: 0x1037f0, Func Offset: 0x1320
	// Line 1973, Address: 0x103810, Func Offset: 0x1340
	// Line 1976, Address: 0x103848, Func Offset: 0x1378
	// Line 1978, Address: 0x103870, Func Offset: 0x13a0
	// Line 1980, Address: 0x103884, Func Offset: 0x13b4
	// Line 1983, Address: 0x10389c, Func Offset: 0x13cc
	// Line 1984, Address: 0x1038a0, Func Offset: 0x13d0
	// Line 1985, Address: 0x1038c8, Func Offset: 0x13f8
	// Line 1986, Address: 0x1038dc, Func Offset: 0x140c
	// Line 1987, Address: 0x1038e8, Func Offset: 0x1418
	// Line 1994, Address: 0x103908, Func Offset: 0x1438
	// Line 1995, Address: 0x103910, Func Offset: 0x1440
	// Line 1999, Address: 0x103920, Func Offset: 0x1450
	// Line 2003, Address: 0x10392c, Func Offset: 0x145c
	// Line 2006, Address: 0x103934, Func Offset: 0x1464
	// Line 2007, Address: 0x103940, Func Offset: 0x1470
	// Line 2015, Address: 0x103954, Func Offset: 0x1484
	// Line 2018, Address: 0x103990, Func Offset: 0x14c0
	// Line 2019, Address: 0x103994, Func Offset: 0x14c4
	// Func End, Address: 0x1039c8, Func Offset: 0x14f8
}

// 
// Start address: 0x1039d0
void shCharacterStayModelScale(shAnime3d* ap)
{
	shSkelton* stp;
	float scale;
	// Line 2026, Address: 0x1039d0, Func Offset: 0
	// Line 2030, Address: 0x1039e0, Func Offset: 0x10
	// Line 2031, Address: 0x1039ec, Func Offset: 0x1c
	// Line 2032, Address: 0x1039fc, Func Offset: 0x2c
	// Line 2034, Address: 0x103a10, Func Offset: 0x40
	// Line 2036, Address: 0x103a24, Func Offset: 0x54
	// Line 2038, Address: 0x103a38, Func Offset: 0x68
	// Line 2040, Address: 0x103a4c, Func Offset: 0x7c
	// Line 2042, Address: 0x103a60, Func Offset: 0x90
	// Line 2044, Address: 0x103a74, Func Offset: 0xa4
	// Line 2045, Address: 0x103a88, Func Offset: 0xb8
	// Func End, Address: 0x103a9c, Func Offset: 0xcc
}

