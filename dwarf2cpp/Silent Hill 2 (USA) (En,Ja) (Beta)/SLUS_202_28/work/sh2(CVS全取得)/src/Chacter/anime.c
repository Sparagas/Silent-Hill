typedef struct _anon0;
typedef struct _anon1;
typedef struct shAnime3d;
typedef struct shSkelton;
typedef struct _AnimeInfo;
typedef struct _anon2;
typedef struct _USXY;
typedef struct _SXY;
typedef struct _IXY;
typedef union _anon3;


typedef float type_0[4];
typedef _anon0 type_1[41];
typedef float type_2[9];
typedef float type_3[4];
typedef float type_4[4][4];
typedef _anon1 type_5[2];
typedef float type_6[4];

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

struct shAnime3d
{
	shSkelton* top;
	void* anime;
	void* frame_top;
	void* p_anime;
	void* p_frame_top;
	unsigned int frame_size;
	int total_count;
	_IXY c_count;
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

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	char pad;
};

struct _anon2
{
	_anon0 matrix;
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

struct _IXY
{
	int x;
	int y;
};

union _anon3
{
	int i;
	float f;
};

_anon0 kt_unit_matrix;
_anon2 kt_gte;
int demo_status;

float GetSF(void* adr);
void shCharacterAnimeInterMatrix(_anon0* out, _anon0* in1, _anon0* in2, float t);
void shCharacterStayModelExecItem(shSkelton* stp, float* rot);
void shCharacterStayModelExecNthParts(shSkelton* stp, float* pos, float* rot);
void* shExec(void* anime, shSkelton* stp, int inter_type, int* ret);
void shCharacterAnimePartsControl(shSkelton* stp, _anon1* rot);
void shCharacterAnimeReconstruct(shAnime3d* ap, int inter_type, int type, int frame);
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
	// Line 96, Address: 0x1000c0, Func Offset: 0
	// Line 108, Address: 0x1000c4, Func Offset: 0x4
	// Line 109, Address: 0x1000c8, Func Offset: 0x8
	// Line 110, Address: 0x1000d0, Func Offset: 0x10
	// Line 111, Address: 0x1000d8, Func Offset: 0x18
	// Line 115, Address: 0x1000dc, Func Offset: 0x1c
	// Line 116, Address: 0x1000f4, Func Offset: 0x34
	// Line 119, Address: 0x100100, Func Offset: 0x40
	// Line 120, Address: 0x10011c, Func Offset: 0x5c
	// Line 121, Address: 0x100124, Func Offset: 0x64
	// Func End, Address: 0x100130, Func Offset: 0x70
}

// 
// Start address: 0x100130
void shCharacterAnimeInterMatrix(_anon0* out, _anon0* in1, _anon0* in2, float t)
{
	int i1;
	_anon1 v2;
	_anon1 v1;
	// Line 143, Address: 0x100130, Func Offset: 0
	// Line 147, Address: 0x100134, Func Offset: 0x4
	// Line 148, Address: 0x100140, Func Offset: 0x10
	// Line 149, Address: 0x10016c, Func Offset: 0x3c
	// Line 150, Address: 0x100194, Func Offset: 0x64
	// Line 151, Address: 0x1001bc, Func Offset: 0x8c
	// Line 152, Address: 0x1001cc, Func Offset: 0x9c
	// Func End, Address: 0x1001d8, Func Offset: 0xa8
}

// 
// Start address: 0x1001e0
void shCharacterStayModelExecItem(shSkelton* stp, float* rot)
{
	float pos[4];
	// Line 161, Address: 0x1001e0, Func Offset: 0
	// Line 162, Address: 0x1001ec, Func Offset: 0xc
	// Line 164, Address: 0x100200, Func Offset: 0x20
	// Line 165, Address: 0x100208, Func Offset: 0x28
	// Func End, Address: 0x100218, Func Offset: 0x38
}

// 
// Start address: 0x100220
void shCharacterStayModelExecNthParts(shSkelton* stp, float* pos, float* rot)
{
	_anon1 buf;
	// Line 188, Address: 0x100220, Func Offset: 0
	// Line 192, Address: 0x100238, Func Offset: 0x18
	// Line 193, Address: 0x10025c, Func Offset: 0x3c
	// Line 196, Address: 0x100268, Func Offset: 0x48
	// Line 198, Address: 0x100278, Func Offset: 0x58
	// Line 199, Address: 0x100280, Func Offset: 0x60
	// Line 200, Address: 0x100288, Func Offset: 0x68
	// Line 201, Address: 0x100290, Func Offset: 0x70
	// Line 202, Address: 0x100298, Func Offset: 0x78
	// Line 203, Address: 0x1002a0, Func Offset: 0x80
	// Line 204, Address: 0x1002a8, Func Offset: 0x88
	// Func End, Address: 0x1002c0, Func Offset: 0xa0
}

// 
// Start address: 0x1002c0
void* shExec(void* anime, shSkelton* stp, int inter_type, int* ret)
{
	shSkelton dummy_st;
	_anon1 axis;
	_anon1 rot;
	int type;
	short* sp;
	int bits;
	unsigned int flag;
	// Line 262, Address: 0x1002c0, Func Offset: 0
	// Line 283, Address: 0x1002ec, Func Offset: 0x2c
	// Line 285, Address: 0x100300, Func Offset: 0x40
	// Line 286, Address: 0x100304, Func Offset: 0x44
	// Line 287, Address: 0x100314, Func Offset: 0x54
	// Line 288, Address: 0x100318, Func Offset: 0x58
	// Line 294, Address: 0x10031c, Func Offset: 0x5c
	// Line 295, Address: 0x100324, Func Offset: 0x64
	// Line 296, Address: 0x100334, Func Offset: 0x74
	// Line 297, Address: 0x100344, Func Offset: 0x84
	// Line 298, Address: 0x100348, Func Offset: 0x88
	// Line 299, Address: 0x10034c, Func Offset: 0x8c
	// Line 300, Address: 0x100350, Func Offset: 0x90
	// Line 301, Address: 0x100354, Func Offset: 0x94
	// Line 303, Address: 0x100358, Func Offset: 0x98
	// Line 304, Address: 0x100360, Func Offset: 0xa0
	// Line 306, Address: 0x100368, Func Offset: 0xa8
	// Line 307, Address: 0x100370, Func Offset: 0xb0
	// Line 308, Address: 0x100374, Func Offset: 0xb4
	// Line 311, Address: 0x10037c, Func Offset: 0xbc
	// Line 318, Address: 0x100388, Func Offset: 0xc8
	// Line 319, Address: 0x100394, Func Offset: 0xd4
	// Line 320, Address: 0x10039c, Func Offset: 0xdc
	// Line 322, Address: 0x1003a4, Func Offset: 0xe4
	// Line 330, Address: 0x1003a8, Func Offset: 0xe8
	// Line 332, Address: 0x1003d0, Func Offset: 0x110
	// Line 333, Address: 0x1003d8, Func Offset: 0x118
	// Line 334, Address: 0x1003e4, Func Offset: 0x124
	// Line 335, Address: 0x1003f4, Func Offset: 0x134
	// Line 336, Address: 0x100404, Func Offset: 0x144
	// Line 337, Address: 0x100414, Func Offset: 0x154
	// Line 338, Address: 0x100418, Func Offset: 0x158
	// Line 339, Address: 0x10041c, Func Offset: 0x15c
	// Line 340, Address: 0x100424, Func Offset: 0x164
	// Line 341, Address: 0x100440, Func Offset: 0x180
	// Line 342, Address: 0x10045c, Func Offset: 0x19c
	// Line 343, Address: 0x100478, Func Offset: 0x1b8
	// Line 344, Address: 0x10047c, Func Offset: 0x1bc
	// Line 346, Address: 0x100480, Func Offset: 0x1c0
	// Line 347, Address: 0x100488, Func Offset: 0x1c8
	// Line 348, Address: 0x100494, Func Offset: 0x1d4
	// Line 349, Address: 0x1004a4, Func Offset: 0x1e4
	// Line 350, Address: 0x1004b4, Func Offset: 0x1f4
	// Line 351, Address: 0x1004c4, Func Offset: 0x204
	// Line 352, Address: 0x1004c8, Func Offset: 0x208
	// Line 353, Address: 0x1004cc, Func Offset: 0x20c
	// Line 354, Address: 0x1004d4, Func Offset: 0x214
	// Line 355, Address: 0x1004f0, Func Offset: 0x230
	// Line 356, Address: 0x10050c, Func Offset: 0x24c
	// Line 357, Address: 0x100528, Func Offset: 0x268
	// Line 358, Address: 0x10052c, Func Offset: 0x26c
	// Line 363, Address: 0x100530, Func Offset: 0x270
	// Line 364, Address: 0x100540, Func Offset: 0x280
	// Line 365, Address: 0x100550, Func Offset: 0x290
	// Line 366, Address: 0x100560, Func Offset: 0x2a0
	// Line 369, Address: 0x100564, Func Offset: 0x2a4
	// Line 371, Address: 0x100574, Func Offset: 0x2b4
	// Line 372, Address: 0x10057c, Func Offset: 0x2bc
	// Line 373, Address: 0x1005c8, Func Offset: 0x308
	// Line 374, Address: 0x1005d0, Func Offset: 0x310
	// Line 376, Address: 0x10061c, Func Offset: 0x35c
	// Line 384, Address: 0x100624, Func Offset: 0x364
	// Line 385, Address: 0x100630, Func Offset: 0x370
	// Line 386, Address: 0x100640, Func Offset: 0x380
	// Line 387, Address: 0x100650, Func Offset: 0x390
	// Line 388, Address: 0x100660, Func Offset: 0x3a0
	// Line 389, Address: 0x100664, Func Offset: 0x3a4
	// Line 390, Address: 0x10066c, Func Offset: 0x3ac
	// Line 391, Address: 0x100688, Func Offset: 0x3c8
	// Line 392, Address: 0x1006a4, Func Offset: 0x3e4
	// Line 393, Address: 0x1006c0, Func Offset: 0x400
	// Line 395, Address: 0x1006c4, Func Offset: 0x404
	// Line 399, Address: 0x1006cc, Func Offset: 0x40c
	// Line 401, Address: 0x1006ec, Func Offset: 0x42c
	// Line 403, Address: 0x1006f0, Func Offset: 0x430
	// Line 404, Address: 0x1006fc, Func Offset: 0x43c
	// Line 405, Address: 0x10070c, Func Offset: 0x44c
	// Line 406, Address: 0x10071c, Func Offset: 0x45c
	// Line 407, Address: 0x10072c, Func Offset: 0x46c
	// Line 408, Address: 0x100730, Func Offset: 0x470
	// Line 409, Address: 0x100734, Func Offset: 0x474
	// Line 410, Address: 0x10073c, Func Offset: 0x47c
	// Line 411, Address: 0x10074c, Func Offset: 0x48c
	// Line 412, Address: 0x10075c, Func Offset: 0x49c
	// Line 413, Address: 0x10076c, Func Offset: 0x4ac
	// Line 414, Address: 0x100770, Func Offset: 0x4b0
	// Line 415, Address: 0x100774, Func Offset: 0x4b4
	// Line 449, Address: 0x100778, Func Offset: 0x4b8
	// Line 450, Address: 0x100788, Func Offset: 0x4c8
	// Line 451, Address: 0x100798, Func Offset: 0x4d8
	// Line 452, Address: 0x1007a8, Func Offset: 0x4e8
	// Line 455, Address: 0x1007ac, Func Offset: 0x4ec
	// Line 457, Address: 0x1007bc, Func Offset: 0x4fc
	// Line 458, Address: 0x1007c4, Func Offset: 0x504
	// Line 459, Address: 0x100810, Func Offset: 0x550
	// Line 460, Address: 0x100818, Func Offset: 0x558
	// Line 461, Address: 0x100864, Func Offset: 0x5a4
	// Line 462, Address: 0x100868, Func Offset: 0x5a8
	// Line 463, Address: 0x100878, Func Offset: 0x5b8
	// Line 464, Address: 0x100888, Func Offset: 0x5c8
	// Line 465, Address: 0x100898, Func Offset: 0x5d8
	// Line 467, Address: 0x10089c, Func Offset: 0x5dc
	// Line 468, Address: 0x1008ac, Func Offset: 0x5ec
	// Line 470, Address: 0x1008cc, Func Offset: 0x60c
	// Line 472, Address: 0x1008dc, Func Offset: 0x61c
	// Line 473, Address: 0x1008ec, Func Offset: 0x62c
	// Line 479, Address: 0x1008f4, Func Offset: 0x634
	// Line 481, Address: 0x1008f8, Func Offset: 0x638
	// Line 485, Address: 0x100900, Func Offset: 0x640
	// Line 486, Address: 0x100908, Func Offset: 0x648
	// Line 488, Address: 0x100928, Func Offset: 0x668
	// Line 492, Address: 0x100930, Func Offset: 0x670
	// Line 493, Address: 0x10093c, Func Offset: 0x67c
	// Line 494, Address: 0x10094c, Func Offset: 0x68c
	// Line 495, Address: 0x10095c, Func Offset: 0x69c
	// Line 496, Address: 0x10096c, Func Offset: 0x6ac
	// Line 497, Address: 0x100970, Func Offset: 0x6b0
	// Line 498, Address: 0x100974, Func Offset: 0x6b4
	// Line 499, Address: 0x10097c, Func Offset: 0x6bc
	// Line 500, Address: 0x100998, Func Offset: 0x6d8
	// Line 501, Address: 0x1009b4, Func Offset: 0x6f4
	// Line 502, Address: 0x1009d0, Func Offset: 0x710
	// Line 503, Address: 0x1009d4, Func Offset: 0x714
	// Line 505, Address: 0x1009d8, Func Offset: 0x718
	// Line 506, Address: 0x1009f8, Func Offset: 0x738
	// Line 509, Address: 0x100a00, Func Offset: 0x740
	// Line 522, Address: 0x100a10, Func Offset: 0x750
	// Line 523, Address: 0x100a14, Func Offset: 0x754
	// Func End, Address: 0x100a3c, Func Offset: 0x77c
}

// 
// Start address: 0x100a40
void shCharacterAnimePartsControl(shSkelton* stp, _anon1* rot)
{
	_anon0 test_mat;
	// Line 535, Address: 0x100a40, Func Offset: 0
	// Line 542, Address: 0x100a5c, Func Offset: 0x1c
	// Line 543, Address: 0x100a60, Func Offset: 0x20
	// Line 544, Address: 0x100a64, Func Offset: 0x24
	// Line 548, Address: 0x100a68, Func Offset: 0x28
	// Line 549, Address: 0x100a6c, Func Offset: 0x2c
	// Line 550, Address: 0x100a70, Func Offset: 0x30
	// Line 554, Address: 0x100a74, Func Offset: 0x34
	// Line 560, Address: 0x100ac0, Func Offset: 0x80
	// Line 564, Address: 0x100ad4, Func Offset: 0x94
	// Line 565, Address: 0x100ad8, Func Offset: 0x98
	// Line 566, Address: 0x100adc, Func Offset: 0x9c
	// Line 568, Address: 0x100ae0, Func Offset: 0xa0
	// Line 569, Address: 0x100ae4, Func Offset: 0xa4
	// Func End, Address: 0x100b04, Func Offset: 0xc4
}

// 
// Start address: 0x100b10
void shCharacterAnimeReconstruct(shAnime3d* ap, int inter_type, int type, int frame)
{
	_anon1 rot;
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
	_anon0 r_mat;
	int inter_rate;
	int count;
	int i;
	_anon0 mat_tmp;
	_anon1 trans_tmp;
	// Line 582, Address: 0x100b10, Func Offset: 0
	// Line 583, Address: 0x100b50, Func Offset: 0x40
	// Line 590, Address: 0x100b54, Func Offset: 0x44
	// Line 592, Address: 0x100b58, Func Offset: 0x48
	// Line 596, Address: 0x100b9c, Func Offset: 0x8c
	// Line 598, Address: 0x100ba0, Func Offset: 0x90
	// Line 600, Address: 0x100ba8, Func Offset: 0x98
	// Line 601, Address: 0x100bac, Func Offset: 0x9c
	// Line 603, Address: 0x100bb4, Func Offset: 0xa4
	// Line 607, Address: 0x100bb8, Func Offset: 0xa8
	// Line 608, Address: 0x100bbc, Func Offset: 0xac
	// Line 609, Address: 0x100bc0, Func Offset: 0xb0
	// Line 611, Address: 0x100bc4, Func Offset: 0xb4
	// Line 612, Address: 0x100bc8, Func Offset: 0xb8
	// Line 613, Address: 0x100bcc, Func Offset: 0xbc
	// Line 614, Address: 0x100bd0, Func Offset: 0xc0
	// Line 617, Address: 0x100bd8, Func Offset: 0xc8
	// Line 625, Address: 0x100be4, Func Offset: 0xd4
	// Line 635, Address: 0x100bf0, Func Offset: 0xe0
	// Line 636, Address: 0x100bf8, Func Offset: 0xe8
	// Line 646, Address: 0x100c00, Func Offset: 0xf0
	// Line 652, Address: 0x100c3c, Func Offset: 0x12c
	// Line 653, Address: 0x100c4c, Func Offset: 0x13c
	// Line 654, Address: 0x100c58, Func Offset: 0x148
	// Line 655, Address: 0x100c68, Func Offset: 0x158
	// Line 656, Address: 0x100c78, Func Offset: 0x168
	// Line 657, Address: 0x100c88, Func Offset: 0x178
	// Line 660, Address: 0x100c98, Func Offset: 0x188
	// Line 661, Address: 0x100ca0, Func Offset: 0x190
	// Line 662, Address: 0x100ca8, Func Offset: 0x198
	// Line 663, Address: 0x100cb0, Func Offset: 0x1a0
	// Line 665, Address: 0x100cb8, Func Offset: 0x1a8
	// Line 666, Address: 0x100cc0, Func Offset: 0x1b0
	// Line 667, Address: 0x100cc8, Func Offset: 0x1b8
	// Line 668, Address: 0x100cd0, Func Offset: 0x1c0
	// Line 670, Address: 0x100cd8, Func Offset: 0x1c8
	// Line 671, Address: 0x100ce0, Func Offset: 0x1d0
	// Line 672, Address: 0x100ce8, Func Offset: 0x1d8
	// Line 673, Address: 0x100cf0, Func Offset: 0x1e0
	// Line 679, Address: 0x100cf8, Func Offset: 0x1e8
	// Line 684, Address: 0x100d0c, Func Offset: 0x1fc
	// Line 690, Address: 0x100d60, Func Offset: 0x250
	// Line 692, Address: 0x100d64, Func Offset: 0x254
	// Line 693, Address: 0x100d68, Func Offset: 0x258
	// Line 700, Address: 0x100d6c, Func Offset: 0x25c
	// Line 706, Address: 0x100d74, Func Offset: 0x264
	// Line 707, Address: 0x100d84, Func Offset: 0x274
	// Line 712, Address: 0x100db8, Func Offset: 0x2a8
	// Line 713, Address: 0x100dc0, Func Offset: 0x2b0
	// Line 714, Address: 0x100dcc, Func Offset: 0x2bc
	// Line 715, Address: 0x100dd8, Func Offset: 0x2c8
	// Line 716, Address: 0x100de4, Func Offset: 0x2d4
	// Line 717, Address: 0x100dec, Func Offset: 0x2dc
	// Line 718, Address: 0x100df4, Func Offset: 0x2e4
	// Line 719, Address: 0x100dfc, Func Offset: 0x2ec
	// Line 720, Address: 0x100e04, Func Offset: 0x2f4
	// Line 722, Address: 0x100e08, Func Offset: 0x2f8
	// Line 724, Address: 0x100e10, Func Offset: 0x300
	// Line 725, Address: 0x100e18, Func Offset: 0x308
	// Line 727, Address: 0x100e2c, Func Offset: 0x31c
	// Line 728, Address: 0x100e34, Func Offset: 0x324
	// Line 729, Address: 0x100e44, Func Offset: 0x334
	// Line 732, Address: 0x100e54, Func Offset: 0x344
	// Line 741, Address: 0x100e5c, Func Offset: 0x34c
	// Line 745, Address: 0x100e64, Func Offset: 0x354
	// Line 746, Address: 0x100e9c, Func Offset: 0x38c
	// Line 747, Address: 0x100ea0, Func Offset: 0x390
	// Line 748, Address: 0x100ea8, Func Offset: 0x398
	// Line 754, Address: 0x100ec0, Func Offset: 0x3b0
	// Line 760, Address: 0x100ed8, Func Offset: 0x3c8
	// Line 768, Address: 0x100ee0, Func Offset: 0x3d0
	// Line 771, Address: 0x100ee8, Func Offset: 0x3d8
	// Line 772, Address: 0x100ef4, Func Offset: 0x3e4
	// Line 775, Address: 0x100f08, Func Offset: 0x3f8
	// Line 777, Address: 0x100f30, Func Offset: 0x420
	// Line 778, Address: 0x100f48, Func Offset: 0x438
	// Line 780, Address: 0x100f5c, Func Offset: 0x44c
	// Line 782, Address: 0x100f64, Func Offset: 0x454
	// Line 783, Address: 0x100f88, Func Offset: 0x478
	// Line 784, Address: 0x100f9c, Func Offset: 0x48c
	// Line 797, Address: 0x100fa0, Func Offset: 0x490
	// Line 799, Address: 0x100fa8, Func Offset: 0x498
	// Line 801, Address: 0x100fb0, Func Offset: 0x4a0
	// Line 802, Address: 0x100fb4, Func Offset: 0x4a4
	// Line 803, Address: 0x100fc8, Func Offset: 0x4b8
	// Func End, Address: 0x101004, Func Offset: 0x4f4
}

// 
// Start address: 0x101040
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
	// Line 812, Address: 0x101040, Func Offset: 0
	// Line 822, Address: 0x101048, Func Offset: 0x8
	// Line 823, Address: 0x101060, Func Offset: 0x20
	// Line 824, Address: 0x101068, Func Offset: 0x28
	// Line 825, Address: 0x101070, Func Offset: 0x30
	// Line 826, Address: 0x101078, Func Offset: 0x38
	// Line 827, Address: 0x101084, Func Offset: 0x44
	// Line 828, Address: 0x10108c, Func Offset: 0x4c
	// Line 829, Address: 0x101094, Func Offset: 0x54
	// Line 830, Address: 0x10109c, Func Offset: 0x5c
	// Line 834, Address: 0x1010a8, Func Offset: 0x68
	// Line 835, Address: 0x1010c4, Func Offset: 0x84
	// Line 836, Address: 0x1010d8, Func Offset: 0x98
	// Line 838, Address: 0x1010e4, Func Offset: 0xa4
	// Line 839, Address: 0x1010f8, Func Offset: 0xb8
	// Line 840, Address: 0x101108, Func Offset: 0xc8
	// Line 842, Address: 0x101114, Func Offset: 0xd4
	// Line 843, Address: 0x101120, Func Offset: 0xe0
	// Line 844, Address: 0x10112c, Func Offset: 0xec
	// Line 846, Address: 0x101138, Func Offset: 0xf8
	// Line 847, Address: 0x101144, Func Offset: 0x104
	// Line 848, Address: 0x101150, Func Offset: 0x110
	// Line 849, Address: 0x101188, Func Offset: 0x148
	// Line 852, Address: 0x1011ac, Func Offset: 0x16c
	// Line 853, Address: 0x1011b0, Func Offset: 0x170
	// Line 854, Address: 0x1011b4, Func Offset: 0x174
	// Line 855, Address: 0x1011c0, Func Offset: 0x180
	// Line 856, Address: 0x1011cc, Func Offset: 0x18c
	// Line 857, Address: 0x1011f4, Func Offset: 0x1b4
	// Line 858, Address: 0x1011f8, Func Offset: 0x1b8
	// Line 859, Address: 0x1011fc, Func Offset: 0x1bc
	// Line 860, Address: 0x101200, Func Offset: 0x1c0
	// Line 865, Address: 0x101224, Func Offset: 0x1e4
	// Line 869, Address: 0x10124c, Func Offset: 0x20c
	// Line 870, Address: 0x101254, Func Offset: 0x214
	// Line 871, Address: 0x10125c, Func Offset: 0x21c
	// Line 872, Address: 0x101264, Func Offset: 0x224
	// Line 873, Address: 0x10126c, Func Offset: 0x22c
	// Line 874, Address: 0x101274, Func Offset: 0x234
	// Line 875, Address: 0x10127c, Func Offset: 0x23c
	// Line 879, Address: 0x101284, Func Offset: 0x244
	// Line 880, Address: 0x10128c, Func Offset: 0x24c
	// Line 881, Address: 0x101294, Func Offset: 0x254
	// Line 882, Address: 0x10129c, Func Offset: 0x25c
	// Line 883, Address: 0x1012a4, Func Offset: 0x264
	// Line 884, Address: 0x1012ac, Func Offset: 0x26c
	// Line 885, Address: 0x1012b4, Func Offset: 0x274
	// Line 889, Address: 0x1012bc, Func Offset: 0x27c
	// Line 890, Address: 0x1012c4, Func Offset: 0x284
	// Line 891, Address: 0x1012cc, Func Offset: 0x28c
	// Line 892, Address: 0x1012d4, Func Offset: 0x294
	// Line 893, Address: 0x1012dc, Func Offset: 0x29c
	// Line 894, Address: 0x1012e4, Func Offset: 0x2a4
	// Line 900, Address: 0x1012ec, Func Offset: 0x2ac
	// Line 903, Address: 0x101310, Func Offset: 0x2d0
	// Line 906, Address: 0x101320, Func Offset: 0x2e0
	// Func End, Address: 0x101330, Func Offset: 0x2f0
}

// 
// Start address: 0x101360
void EigenVec2Mat(_anon1* ev, _anon0* smat)
{
	_anon1 mv2;
	_anon1 mv1;
	_anon1 mv0;
	_anon1 v2;
	_anon1 v1;
	// Line 915, Address: 0x101360, Func Offset: 0
	// Line 919, Address: 0x101378, Func Offset: 0x18
	// Line 921, Address: 0x101388, Func Offset: 0x28
	// Line 922, Address: 0x101390, Func Offset: 0x30
	// Line 923, Address: 0x101398, Func Offset: 0x38
	// Line 926, Address: 0x1013a0, Func Offset: 0x40
	// Line 927, Address: 0x1013cc, Func Offset: 0x6c
	// Line 928, Address: 0x1013f8, Func Offset: 0x98
	// Line 929, Address: 0x101400, Func Offset: 0xa0
	// Line 930, Address: 0x10140c, Func Offset: 0xac
	// Line 931, Address: 0x101428, Func Offset: 0xc8
	// Line 933, Address: 0x101454, Func Offset: 0xf4
	// Line 934, Address: 0x101458, Func Offset: 0xf8
	// Line 935, Address: 0x101460, Func Offset: 0x100
	// Line 936, Address: 0x10147c, Func Offset: 0x11c
	// Line 937, Address: 0x101480, Func Offset: 0x120
	// Line 938, Address: 0x10148c, Func Offset: 0x12c
	// Line 939, Address: 0x101494, Func Offset: 0x134
	// Line 940, Address: 0x10149c, Func Offset: 0x13c
	// Line 942, Address: 0x1014a4, Func Offset: 0x144
	// Line 943, Address: 0x1014c0, Func Offset: 0x160
	// Line 945, Address: 0x1014f4, Func Offset: 0x194
	// Line 947, Address: 0x1014f8, Func Offset: 0x198
	// Line 948, Address: 0x101500, Func Offset: 0x1a0
	// Line 949, Address: 0x10152c, Func Offset: 0x1cc
	// Line 950, Address: 0x101534, Func Offset: 0x1d4
	// Line 951, Address: 0x101540, Func Offset: 0x1e0
	// Line 952, Address: 0x10155c, Func Offset: 0x1fc
	// Line 954, Address: 0x101588, Func Offset: 0x228
	// Line 955, Address: 0x10158c, Func Offset: 0x22c
	// Line 956, Address: 0x101594, Func Offset: 0x234
	// Line 957, Address: 0x1015b0, Func Offset: 0x250
	// Line 958, Address: 0x1015b4, Func Offset: 0x254
	// Line 959, Address: 0x1015c0, Func Offset: 0x260
	// Line 960, Address: 0x1015c8, Func Offset: 0x268
	// Line 961, Address: 0x1015d0, Func Offset: 0x270
	// Line 963, Address: 0x1015d8, Func Offset: 0x278
	// Line 964, Address: 0x1015f4, Func Offset: 0x294
	// Line 966, Address: 0x101628, Func Offset: 0x2c8
	// Line 970, Address: 0x10162c, Func Offset: 0x2cc
	// Line 973, Address: 0x10163c, Func Offset: 0x2dc
	// Line 974, Address: 0x101644, Func Offset: 0x2e4
	// Line 975, Address: 0x10164c, Func Offset: 0x2ec
	// Line 979, Address: 0x101654, Func Offset: 0x2f4
	// Line 982, Address: 0x101678, Func Offset: 0x318
	// Line 985, Address: 0x101684, Func Offset: 0x324
	// Line 986, Address: 0x10168c, Func Offset: 0x32c
	// Line 987, Address: 0x101694, Func Offset: 0x334
	// Line 989, Address: 0x10169c, Func Offset: 0x33c
	// Line 990, Address: 0x1016a0, Func Offset: 0x340
	// Line 991, Address: 0x1016a4, Func Offset: 0x344
	// Line 992, Address: 0x1016a8, Func Offset: 0x348
	// Line 993, Address: 0x1016b0, Func Offset: 0x350
	// Line 994, Address: 0x1016b4, Func Offset: 0x354
	// Line 995, Address: 0x1016b8, Func Offset: 0x358
	// Line 998, Address: 0x1016bc, Func Offset: 0x35c
	// Func End, Address: 0x1016d4, Func Offset: 0x374
}

// 
// Start address: 0x1016e0
void shCharacterAnimeCalcComplement(shAnime3d* ap)
{
	float theta;
	_anon1 axis;
	_anon0 ieig;
	_anon0 eig;
	_anon0 mat;
	shSkelton* stp;
	// Line 1030, Address: 0x1016e0, Func Offset: 0
	// Line 1038, Address: 0x1016ec, Func Offset: 0xc
	// Line 1039, Address: 0x1016f8, Func Offset: 0x18
	// Line 1040, Address: 0x101704, Func Offset: 0x24
	// Line 1041, Address: 0x101748, Func Offset: 0x68
	// Line 1042, Address: 0x101758, Func Offset: 0x78
	// Line 1043, Address: 0x101768, Func Offset: 0x88
	// Line 1044, Address: 0x101778, Func Offset: 0x98
	// Line 1045, Address: 0x1017c0, Func Offset: 0xe0
	// Line 1046, Address: 0x1017d0, Func Offset: 0xf0
	// Line 1048, Address: 0x1017e4, Func Offset: 0x104
	// Line 1049, Address: 0x1017f4, Func Offset: 0x114
	// Line 1050, Address: 0x1017fc, Func Offset: 0x11c
	// Line 1051, Address: 0x101820, Func Offset: 0x140
	// Line 1052, Address: 0x101830, Func Offset: 0x150
	// Line 1053, Address: 0x101840, Func Offset: 0x160
	// Line 1054, Address: 0x101850, Func Offset: 0x170
	// Line 1055, Address: 0x101860, Func Offset: 0x180
	// Line 1056, Address: 0x101868, Func Offset: 0x188
	// Line 1057, Address: 0x101870, Func Offset: 0x190
	// Line 1059, Address: 0x101878, Func Offset: 0x198
	// Line 1061, Address: 0x101888, Func Offset: 0x1a8
	// Func End, Address: 0x10189c, Func Offset: 0x1bc
}

// 
// Start address: 0x1018a0
void shCharacterAnimeSetSkelton(shAnime3d* ap, shSkelton* stp)
{
	// Line 1077, Address: 0x1018a0, Func Offset: 0
	// Line 1078, Address: 0x1018a4, Func Offset: 0x4
	// Line 1079, Address: 0x1018a8, Func Offset: 0x8
	// Func End, Address: 0x1018b0, Func Offset: 0x10
}

// 
// Start address: 0x1018b0
int shCharacterDramaAnimeExecMain(shAnime3d* ap)
{
	int frame;
	int result;
	void* adr;
	shSkelton* stp;
	short des_frame;
	short src_frame;
	int inter_cont;
	int dt;
	// Line 1099, Address: 0x1018b0, Func Offset: 0
	// Line 1101, Address: 0x1018c8, Func Offset: 0x18
	// Line 1106, Address: 0x1018d0, Func Offset: 0x20
	// Line 1107, Address: 0x1018d4, Func Offset: 0x24
	// Line 1112, Address: 0x1018d8, Func Offset: 0x28
	// Line 1116, Address: 0x101910, Func Offset: 0x60
	// Line 1117, Address: 0x101930, Func Offset: 0x80
	// Line 1118, Address: 0x101948, Func Offset: 0x98
	// Line 1121, Address: 0x101950, Func Offset: 0xa0
	// Line 1123, Address: 0x101954, Func Offset: 0xa4
	// Line 1124, Address: 0x10196c, Func Offset: 0xbc
	// Line 1125, Address: 0x101984, Func Offset: 0xd4
	// Line 1126, Address: 0x10198c, Func Offset: 0xdc
	// Line 1129, Address: 0x101994, Func Offset: 0xe4
	// Line 1130, Address: 0x101998, Func Offset: 0xe8
	// Line 1133, Address: 0x1019a4, Func Offset: 0xf4
	// Line 1138, Address: 0x1019b8, Func Offset: 0x108
	// Line 1139, Address: 0x1019d0, Func Offset: 0x120
	// Line 1143, Address: 0x1019e0, Func Offset: 0x130
	// Line 1145, Address: 0x101a00, Func Offset: 0x150
	// Line 1146, Address: 0x101a08, Func Offset: 0x158
	// Line 1147, Address: 0x101a18, Func Offset: 0x168
	// Line 1148, Address: 0x101a24, Func Offset: 0x174
	// Line 1149, Address: 0x101a28, Func Offset: 0x178
	// Line 1150, Address: 0x101a3c, Func Offset: 0x18c
	// Line 1153, Address: 0x101a4c, Func Offset: 0x19c
	// Line 1154, Address: 0x101a64, Func Offset: 0x1b4
	// Line 1155, Address: 0x101a68, Func Offset: 0x1b8
	// Line 1156, Address: 0x101a74, Func Offset: 0x1c4
	// Line 1157, Address: 0x101a78, Func Offset: 0x1c8
	// Line 1161, Address: 0x101a80, Func Offset: 0x1d0
	// Line 1162, Address: 0x101a98, Func Offset: 0x1e8
	// Line 1163, Address: 0x101aa4, Func Offset: 0x1f4
	// Line 1167, Address: 0x101aa8, Func Offset: 0x1f8
	// Line 1168, Address: 0x101abc, Func Offset: 0x20c
	// Line 1169, Address: 0x101adc, Func Offset: 0x22c
	// Line 1170, Address: 0x101ae4, Func Offset: 0x234
	// Line 1172, Address: 0x101afc, Func Offset: 0x24c
	// Line 1173, Address: 0x101b14, Func Offset: 0x264
	// Line 1174, Address: 0x101b18, Func Offset: 0x268
	// Line 1180, Address: 0x101b24, Func Offset: 0x274
	// Line 1182, Address: 0x101b2c, Func Offset: 0x27c
	// Line 1187, Address: 0x101b4c, Func Offset: 0x29c
	// Line 1191, Address: 0x101b60, Func Offset: 0x2b0
	// Line 1192, Address: 0x101b6c, Func Offset: 0x2bc
	// Line 1193, Address: 0x101b78, Func Offset: 0x2c8
	// Line 1194, Address: 0x101bac, Func Offset: 0x2fc
	// Line 1195, Address: 0x101bcc, Func Offset: 0x31c
	// Line 1196, Address: 0x101bd0, Func Offset: 0x320
	// Line 1198, Address: 0x101be0, Func Offset: 0x330
	// Line 1200, Address: 0x101be4, Func Offset: 0x334
	// Line 1201, Address: 0x101bec, Func Offset: 0x33c
	// Line 1202, Address: 0x101c08, Func Offset: 0x358
	// Line 1203, Address: 0x101c14, Func Offset: 0x364
	// Line 1204, Address: 0x101c28, Func Offset: 0x378
	// Line 1208, Address: 0x101c2c, Func Offset: 0x37c
	// Line 1209, Address: 0x101c38, Func Offset: 0x388
	// Line 1210, Address: 0x101c44, Func Offset: 0x394
	// Line 1211, Address: 0x101c74, Func Offset: 0x3c4
	// Line 1212, Address: 0x101c94, Func Offset: 0x3e4
	// Line 1213, Address: 0x101c98, Func Offset: 0x3e8
	// Line 1215, Address: 0x101ca8, Func Offset: 0x3f8
	// Line 1217, Address: 0x101cb0, Func Offset: 0x400
	// Line 1218, Address: 0x101cbc, Func Offset: 0x40c
	// Line 1219, Address: 0x101cc8, Func Offset: 0x418
	// Line 1220, Address: 0x101cfc, Func Offset: 0x44c
	// Line 1221, Address: 0x101d1c, Func Offset: 0x46c
	// Line 1222, Address: 0x101d20, Func Offset: 0x470
	// Line 1227, Address: 0x101d30, Func Offset: 0x480
	// Line 1230, Address: 0x101d34, Func Offset: 0x484
	// Line 1231, Address: 0x101d38, Func Offset: 0x488
	// Line 1233, Address: 0x101d3c, Func Offset: 0x48c
	// Line 1234, Address: 0x101d44, Func Offset: 0x494
	// Line 1235, Address: 0x101d50, Func Offset: 0x4a0
	// Line 1236, Address: 0x101d54, Func Offset: 0x4a4
	// Line 1237, Address: 0x101d70, Func Offset: 0x4c0
	// Line 1240, Address: 0x101d84, Func Offset: 0x4d4
	// Line 1254, Address: 0x101d98, Func Offset: 0x4e8
	// Line 1255, Address: 0x101dac, Func Offset: 0x4fc
	// Line 1256, Address: 0x101dc8, Func Offset: 0x518
	// Line 1257, Address: 0x101dd0, Func Offset: 0x520
	// Line 1258, Address: 0x101de8, Func Offset: 0x538
	// Line 1260, Address: 0x101df0, Func Offset: 0x540
	// Line 1261, Address: 0x101e04, Func Offset: 0x554
	// Line 1265, Address: 0x101e0c, Func Offset: 0x55c
	// Line 1266, Address: 0x101e10, Func Offset: 0x560
	// Line 1271, Address: 0x101e1c, Func Offset: 0x56c
	// Line 1279, Address: 0x101e34, Func Offset: 0x584
	// Line 1320, Address: 0x101e3c, Func Offset: 0x58c
	// Line 1321, Address: 0x101e40, Func Offset: 0x590
	// Line 1333, Address: 0x101e5c, Func Offset: 0x5ac
	// Line 1334, Address: 0x101e60, Func Offset: 0x5b0
	// Line 1335, Address: 0x101e68, Func Offset: 0x5b8
	// Line 1336, Address: 0x101e84, Func Offset: 0x5d4
	// Line 1337, Address: 0x101e88, Func Offset: 0x5d8
	// Line 1340, Address: 0x101e98, Func Offset: 0x5e8
	// Line 1342, Address: 0x101ea8, Func Offset: 0x5f8
	// Line 1343, Address: 0x101eac, Func Offset: 0x5fc
	// Line 1344, Address: 0x101ebc, Func Offset: 0x60c
	// Line 1346, Address: 0x101ec4, Func Offset: 0x614
	// Line 1348, Address: 0x101ed0, Func Offset: 0x620
	// Line 1350, Address: 0x101ee8, Func Offset: 0x638
	// Line 1351, Address: 0x101f00, Func Offset: 0x650
	// Line 1359, Address: 0x101f0c, Func Offset: 0x65c
	// Line 1360, Address: 0x101f10, Func Offset: 0x660
	// Func End, Address: 0x101f2c, Func Offset: 0x67c
}

// 
// Start address: 0x101f30
int shCharacterPlayingAnimeExecMain(shAnime3d* ap, int type)
{
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
	int t_count;
	int end;
	int start;
	void* adr;
	shSkelton* stp;
	short des_frame;
	short src_frame;
	int result;
	int inter_cont;
	int i1;
	float t;
	_anon0 backup[41];
	int dt;
	// Line 1380, Address: 0x101f30, Func Offset: 0
	// Line 1382, Address: 0x101f54, Func Offset: 0x24
	// Line 1398, Address: 0x101f60, Func Offset: 0x30
	// Line 1400, Address: 0x101f90, Func Offset: 0x60
	// Line 1401, Address: 0x101fa8, Func Offset: 0x78
	// Line 1403, Address: 0x101fb0, Func Offset: 0x80
	// Line 1407, Address: 0x101fb4, Func Offset: 0x84
	// Line 1408, Address: 0x101fcc, Func Offset: 0x9c
	// Line 1409, Address: 0x101fe4, Func Offset: 0xb4
	// Line 1410, Address: 0x101ff0, Func Offset: 0xc0
	// Line 1411, Address: 0x101ff8, Func Offset: 0xc8
	// Line 1413, Address: 0x101ffc, Func Offset: 0xcc
	// Line 1414, Address: 0x102008, Func Offset: 0xd8
	// Line 1415, Address: 0x102020, Func Offset: 0xf0
	// Line 1429, Address: 0x102028, Func Offset: 0xf8
	// Line 1430, Address: 0x102034, Func Offset: 0x104
	// Line 1435, Address: 0x102040, Func Offset: 0x110
	// Line 1452, Address: 0x102048, Func Offset: 0x118
	// Line 1453, Address: 0x102050, Func Offset: 0x120
	// Line 1459, Address: 0x102054, Func Offset: 0x124
	// Line 1460, Address: 0x102074, Func Offset: 0x144
	// Line 1464, Address: 0x102084, Func Offset: 0x154
	// Line 1465, Address: 0x1020a8, Func Offset: 0x178
	// Line 1466, Address: 0x1020ac, Func Offset: 0x17c
	// Line 1467, Address: 0x1020c0, Func Offset: 0x190
	// Line 1469, Address: 0x1020c4, Func Offset: 0x194
	// Line 1476, Address: 0x1020cc, Func Offset: 0x19c
	// Line 1480, Address: 0x1020d4, Func Offset: 0x1a4
	// Line 1481, Address: 0x1020e8, Func Offset: 0x1b8
	// Line 1482, Address: 0x1020f4, Func Offset: 0x1c4
	// Line 1486, Address: 0x1020f8, Func Offset: 0x1c8
	// Line 1487, Address: 0x102100, Func Offset: 0x1d0
	// Line 1488, Address: 0x10210c, Func Offset: 0x1dc
	// Line 1503, Address: 0x102110, Func Offset: 0x1e0
	// Line 1512, Address: 0x10211c, Func Offset: 0x1ec
	// Line 1514, Address: 0x102134, Func Offset: 0x204
	// Line 1515, Address: 0x10214c, Func Offset: 0x21c
	// Line 1517, Address: 0x102164, Func Offset: 0x234
	// Line 1518, Address: 0x10217c, Func Offset: 0x24c
	// Line 1523, Address: 0x102184, Func Offset: 0x254
	// Line 1530, Address: 0x1021b0, Func Offset: 0x280
	// Line 1531, Address: 0x1021bc, Func Offset: 0x28c
	// Line 1532, Address: 0x1021c8, Func Offset: 0x298
	// Line 1533, Address: 0x1021fc, Func Offset: 0x2cc
	// Line 1534, Address: 0x10221c, Func Offset: 0x2ec
	// Line 1535, Address: 0x102220, Func Offset: 0x2f0
	// Line 1536, Address: 0x102230, Func Offset: 0x300
	// Line 1538, Address: 0x102248, Func Offset: 0x318
	// Line 1539, Address: 0x102260, Func Offset: 0x330
	// Line 1544, Address: 0x102268, Func Offset: 0x338
	// Line 1546, Address: 0x10227c, Func Offset: 0x34c
	// Line 1547, Address: 0x102294, Func Offset: 0x364
	// Line 1549, Address: 0x1022ac, Func Offset: 0x37c
	// Line 1552, Address: 0x1022c4, Func Offset: 0x394
	// Line 1562, Address: 0x1022d0, Func Offset: 0x3a0
	// Line 1566, Address: 0x1022e8, Func Offset: 0x3b8
	// Line 1570, Address: 0x1022f8, Func Offset: 0x3c8
	// Line 1576, Address: 0x102310, Func Offset: 0x3e0
	// Line 1579, Address: 0x102320, Func Offset: 0x3f0
	// Line 1581, Address: 0x102324, Func Offset: 0x3f4
	// Line 1585, Address: 0x102338, Func Offset: 0x408
	// Line 1586, Address: 0x102340, Func Offset: 0x410
	// Line 1587, Address: 0x102350, Func Offset: 0x420
	// Line 1588, Address: 0x102370, Func Offset: 0x440
	// Line 1590, Address: 0x102374, Func Offset: 0x444
	// Line 1591, Address: 0x10237c, Func Offset: 0x44c
	// Line 1592, Address: 0x102384, Func Offset: 0x454
	// Line 1593, Address: 0x102388, Func Offset: 0x458
	// Line 1594, Address: 0x102390, Func Offset: 0x460
	// Line 1595, Address: 0x102394, Func Offset: 0x464
	// Line 1596, Address: 0x1023b0, Func Offset: 0x480
	// Line 1597, Address: 0x1023b4, Func Offset: 0x484
	// Line 1602, Address: 0x1023bc, Func Offset: 0x48c
	// Line 1608, Address: 0x1023c0, Func Offset: 0x490
	// Line 1623, Address: 0x1023c8, Func Offset: 0x498
	// Line 1624, Address: 0x1023d4, Func Offset: 0x4a4
	// Line 1625, Address: 0x1023dc, Func Offset: 0x4ac
	// Line 1626, Address: 0x1023e4, Func Offset: 0x4b4
	// Line 1631, Address: 0x1023f4, Func Offset: 0x4c4
	// Line 1635, Address: 0x102404, Func Offset: 0x4d4
	// Line 1637, Address: 0x102414, Func Offset: 0x4e4
	// Line 1640, Address: 0x102444, Func Offset: 0x514
	// Line 1641, Address: 0x102454, Func Offset: 0x524
	// Line 1643, Address: 0x102468, Func Offset: 0x538
	// Line 1644, Address: 0x102470, Func Offset: 0x540
	// Line 1649, Address: 0x102474, Func Offset: 0x544
	// Line 1650, Address: 0x102478, Func Offset: 0x548
	// Line 1651, Address: 0x10247c, Func Offset: 0x54c
	// Line 1657, Address: 0x102484, Func Offset: 0x554
	// Line 1658, Address: 0x10248c, Func Offset: 0x55c
	// Line 1659, Address: 0x102494, Func Offset: 0x564
	// Line 1660, Address: 0x10249c, Func Offset: 0x56c
	// Line 1664, Address: 0x1024a4, Func Offset: 0x574
	// Line 1665, Address: 0x1024a8, Func Offset: 0x578
	// Line 1666, Address: 0x1024ac, Func Offset: 0x57c
	// Line 1671, Address: 0x1024c4, Func Offset: 0x594
	// Line 1672, Address: 0x1024c8, Func Offset: 0x598
	// Line 1673, Address: 0x1024d0, Func Offset: 0x5a0
	// Line 1674, Address: 0x1024d8, Func Offset: 0x5a8
	// Line 1675, Address: 0x1024e0, Func Offset: 0x5b0
	// Line 1676, Address: 0x1024f0, Func Offset: 0x5c0
	// Line 1678, Address: 0x1024fc, Func Offset: 0x5cc
	// Line 1679, Address: 0x102504, Func Offset: 0x5d4
	// Line 1680, Address: 0x10250c, Func Offset: 0x5dc
	// Line 1681, Address: 0x102514, Func Offset: 0x5e4
	// Line 1683, Address: 0x10251c, Func Offset: 0x5ec
	// Line 1687, Address: 0x102524, Func Offset: 0x5f4
	// Line 1688, Address: 0x102534, Func Offset: 0x604
	// Line 1689, Address: 0x10254c, Func Offset: 0x61c
	// Line 1690, Address: 0x102554, Func Offset: 0x624
	// Line 1691, Address: 0x10256c, Func Offset: 0x63c
	// Line 1693, Address: 0x102578, Func Offset: 0x648
	// Line 1696, Address: 0x102590, Func Offset: 0x660
	// Line 1718, Address: 0x102598, Func Offset: 0x668
	// Line 1720, Address: 0x1025a8, Func Offset: 0x678
	// Line 1721, Address: 0x1025b4, Func Offset: 0x684
	// Line 1722, Address: 0x1025c0, Func Offset: 0x690
	// Line 1723, Address: 0x1025f4, Func Offset: 0x6c4
	// Line 1724, Address: 0x102614, Func Offset: 0x6e4
	// Line 1725, Address: 0x102618, Func Offset: 0x6e8
	// Line 1726, Address: 0x102628, Func Offset: 0x6f8
	// Line 1731, Address: 0x102630, Func Offset: 0x700
	// Line 1733, Address: 0x102648, Func Offset: 0x718
	// Line 1741, Address: 0x102660, Func Offset: 0x730
	// Line 1742, Address: 0x102670, Func Offset: 0x740
	// Line 1744, Address: 0x102678, Func Offset: 0x748
	// Line 1748, Address: 0x102690, Func Offset: 0x760
	// Line 1752, Address: 0x10269c, Func Offset: 0x76c
	// Line 1754, Address: 0x1026a8, Func Offset: 0x778
	// Line 1755, Address: 0x1026c0, Func Offset: 0x790
	// Line 1789, Address: 0x1026c8, Func Offset: 0x798
	// Line 1795, Address: 0x1026d0, Func Offset: 0x7a0
	// Line 1796, Address: 0x1026d8, Func Offset: 0x7a8
	// Line 1798, Address: 0x1026dc, Func Offset: 0x7ac
	// Line 1801, Address: 0x1026fc, Func Offset: 0x7cc
	// Line 1802, Address: 0x102704, Func Offset: 0x7d4
	// Line 1805, Address: 0x102708, Func Offset: 0x7d8
	// Line 1806, Address: 0x102714, Func Offset: 0x7e4
	// Line 1809, Address: 0x102718, Func Offset: 0x7e8
	// Line 1810, Address: 0x102720, Func Offset: 0x7f0
	// Line 1814, Address: 0x102728, Func Offset: 0x7f8
	// Line 1815, Address: 0x102740, Func Offset: 0x810
	// Line 1817, Address: 0x102750, Func Offset: 0x820
	// Line 1820, Address: 0x102754, Func Offset: 0x824
	// Line 1821, Address: 0x10275c, Func Offset: 0x82c
	// Line 1822, Address: 0x102768, Func Offset: 0x838
	// Line 1823, Address: 0x102784, Func Offset: 0x854
	// Line 1826, Address: 0x102788, Func Offset: 0x858
	// Line 1833, Address: 0x10278c, Func Offset: 0x85c
	// Line 1834, Address: 0x102798, Func Offset: 0x868
	// Line 1838, Address: 0x1027a8, Func Offset: 0x878
	// Line 1851, Address: 0x1027b8, Func Offset: 0x888
	// Line 1852, Address: 0x1027bc, Func Offset: 0x88c
	// Line 1853, Address: 0x1027c0, Func Offset: 0x890
	// Line 1854, Address: 0x1027c4, Func Offset: 0x894
	// Line 1855, Address: 0x1027cc, Func Offset: 0x89c
	// Line 1857, Address: 0x1027d4, Func Offset: 0x8a4
	// Line 1858, Address: 0x1027dc, Func Offset: 0x8ac
	// Line 1861, Address: 0x1027ec, Func Offset: 0x8bc
	// Line 1874, Address: 0x1027f4, Func Offset: 0x8c4
	// Line 1877, Address: 0x102814, Func Offset: 0x8e4
	// Line 1878, Address: 0x10282c, Func Offset: 0x8fc
	// Line 1881, Address: 0x10284c, Func Offset: 0x91c
	// Line 1883, Address: 0x102864, Func Offset: 0x934
	// Line 1885, Address: 0x102870, Func Offset: 0x940
	// Line 1887, Address: 0x102888, Func Offset: 0x958
	// Line 1888, Address: 0x10288c, Func Offset: 0x95c
	// Line 1889, Address: 0x102898, Func Offset: 0x968
	// Line 1890, Address: 0x1028a4, Func Offset: 0x974
	// Line 1891, Address: 0x1028dc, Func Offset: 0x9ac
	// Line 1892, Address: 0x1028e0, Func Offset: 0x9b0
	// Line 1893, Address: 0x1028e4, Func Offset: 0x9b4
	// Line 1896, Address: 0x1028f8, Func Offset: 0x9c8
	// Line 1899, Address: 0x102918, Func Offset: 0x9e8
	// Line 1900, Address: 0x102930, Func Offset: 0xa00
	// Line 1903, Address: 0x102950, Func Offset: 0xa20
	// Line 1905, Address: 0x102968, Func Offset: 0xa38
	// Line 1907, Address: 0x102974, Func Offset: 0xa44
	// Line 1910, Address: 0x10298c, Func Offset: 0xa5c
	// Line 1911, Address: 0x102990, Func Offset: 0xa60
	// Line 1912, Address: 0x1029a8, Func Offset: 0xa78
	// Line 1913, Address: 0x1029b4, Func Offset: 0xa84
	// Line 1914, Address: 0x1029c0, Func Offset: 0xa90
	// Line 1920, Address: 0x1029dc, Func Offset: 0xaac
	// Line 1921, Address: 0x1029e0, Func Offset: 0xab0
	// Line 1922, Address: 0x1029e4, Func Offset: 0xab4
	// Line 1930, Address: 0x1029f8, Func Offset: 0xac8
	// Line 1945, Address: 0x102a00, Func Offset: 0xad0
	// Line 1946, Address: 0x102a08, Func Offset: 0xad8
	// Line 1948, Address: 0x102a0c, Func Offset: 0xadc
	// Line 1951, Address: 0x102a2c, Func Offset: 0xafc
	// Line 1952, Address: 0x102a34, Func Offset: 0xb04
	// Line 1955, Address: 0x102a38, Func Offset: 0xb08
	// Line 1956, Address: 0x102a44, Func Offset: 0xb14
	// Line 1959, Address: 0x102a48, Func Offset: 0xb18
	// Line 1960, Address: 0x102a50, Func Offset: 0xb20
	// Line 1964, Address: 0x102a58, Func Offset: 0xb28
	// Line 1965, Address: 0x102a70, Func Offset: 0xb40
	// Line 1967, Address: 0x102a80, Func Offset: 0xb50
	// Line 1970, Address: 0x102a84, Func Offset: 0xb54
	// Line 1971, Address: 0x102a8c, Func Offset: 0xb5c
	// Line 1972, Address: 0x102a98, Func Offset: 0xb68
	// Line 1973, Address: 0x102ab4, Func Offset: 0xb84
	// Line 1976, Address: 0x102ab8, Func Offset: 0xb88
	// Line 1981, Address: 0x102abc, Func Offset: 0xb8c
	// Line 1982, Address: 0x102ac8, Func Offset: 0xb98
	// Line 1995, Address: 0x102ad8, Func Offset: 0xba8
	// Line 1998, Address: 0x102af8, Func Offset: 0xbc8
	// Line 1999, Address: 0x102b10, Func Offset: 0xbe0
	// Line 2002, Address: 0x102b30, Func Offset: 0xc00
	// Line 2004, Address: 0x102b48, Func Offset: 0xc18
	// Line 2006, Address: 0x102b54, Func Offset: 0xc24
	// Line 2008, Address: 0x102b6c, Func Offset: 0xc3c
	// Line 2009, Address: 0x102b70, Func Offset: 0xc40
	// Line 2010, Address: 0x102b7c, Func Offset: 0xc4c
	// Line 2011, Address: 0x102b88, Func Offset: 0xc58
	// Line 2012, Address: 0x102bc4, Func Offset: 0xc94
	// Line 2013, Address: 0x102bc8, Func Offset: 0xc98
	// Line 2014, Address: 0x102bcc, Func Offset: 0xc9c
	// Line 2017, Address: 0x102be0, Func Offset: 0xcb0
	// Line 2020, Address: 0x102c00, Func Offset: 0xcd0
	// Line 2021, Address: 0x102c18, Func Offset: 0xce8
	// Line 2024, Address: 0x102c38, Func Offset: 0xd08
	// Line 2026, Address: 0x102c50, Func Offset: 0xd20
	// Line 2028, Address: 0x102c5c, Func Offset: 0xd2c
	// Line 2031, Address: 0x102c74, Func Offset: 0xd44
	// Line 2032, Address: 0x102c78, Func Offset: 0xd48
	// Line 2033, Address: 0x102c90, Func Offset: 0xd60
	// Line 2034, Address: 0x102c9c, Func Offset: 0xd6c
	// Line 2035, Address: 0x102ca8, Func Offset: 0xd78
	// Line 2041, Address: 0x102cc4, Func Offset: 0xd94
	// Line 2042, Address: 0x102cc8, Func Offset: 0xd98
	// Line 2043, Address: 0x102ccc, Func Offset: 0xd9c
	// Line 2047, Address: 0x102ce0, Func Offset: 0xdb0
	// Line 2051, Address: 0x102ce8, Func Offset: 0xdb8
	// Line 2058, Address: 0x102cf0, Func Offset: 0xdc0
	// Line 2062, Address: 0x102cfc, Func Offset: 0xdcc
	// Line 2068, Address: 0x102d14, Func Offset: 0xde4
	// Line 2071, Address: 0x102d24, Func Offset: 0xdf4
	// Line 2072, Address: 0x102d2c, Func Offset: 0xdfc
	// Line 2107, Address: 0x102d3c, Func Offset: 0xe0c
	// Line 2108, Address: 0x102d48, Func Offset: 0xe18
	// Line 2110, Address: 0x102d5c, Func Offset: 0xe2c
	// Line 2113, Address: 0x102d8c, Func Offset: 0xe5c
	// Line 2114, Address: 0x102d90, Func Offset: 0xe60
	// Func End, Address: 0x102db4, Func Offset: 0xe84
}

// 
// Start address: 0x102dc0
void shCharacterStayModelScale(shAnime3d* ap)
{
	shSkelton* stp;
	float scale;
	// Line 2121, Address: 0x102dc0, Func Offset: 0
	// Line 2125, Address: 0x102dd0, Func Offset: 0x10
	// Line 2126, Address: 0x102dd4, Func Offset: 0x14
	// Line 2127, Address: 0x102de0, Func Offset: 0x20
	// Line 2129, Address: 0x102df4, Func Offset: 0x34
	// Line 2131, Address: 0x102e08, Func Offset: 0x48
	// Line 2133, Address: 0x102e1c, Func Offset: 0x5c
	// Line 2135, Address: 0x102e30, Func Offset: 0x70
	// Line 2137, Address: 0x102e44, Func Offset: 0x84
	// Line 2139, Address: 0x102e58, Func Offset: 0x98
	// Line 2140, Address: 0x102e68, Func Offset: 0xa8
	// Func End, Address: 0x102e80, Func Offset: 0xc0
}

