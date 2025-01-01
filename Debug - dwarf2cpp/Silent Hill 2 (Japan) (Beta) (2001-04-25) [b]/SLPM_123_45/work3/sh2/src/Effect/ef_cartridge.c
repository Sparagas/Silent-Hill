typedef struct SPACK_OT_DATA;
typedef struct shSkelton;
typedef struct _EF_CARTDISCH_TASK;
typedef struct SPACK_ENV_DATA;
typedef struct _VbSCREENINFO;
typedef struct _EF_CD_F4;
typedef struct shBattleFight;
typedef struct SPACK_STATIC_DATA;
typedef struct shBattleShot;
typedef struct SubCharacter;
typedef struct _shTskEXECUTE;
typedef struct shBattleArea;
typedef struct _EF_CARTDISCH_DATA;
typedef struct shBattleInfo;
typedef struct _shTskTASK;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon0;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct _anon2;
typedef struct SPACK_DATA;
typedef struct _VbWVSMATRIX;
typedef struct _anon3;

typedef void(*type_9)(SubCharacter*);
typedef void(*type_12)(void*);
typedef void(*type_13)(SubCharacter*);
typedef void(*type_17)(_shTskTASK*);

typedef unsigned char type_0[364];
typedef int type_1[4];
typedef unsigned long type_2[2];
typedef float type_3[4];
typedef unsigned char type_4[10];
typedef unsigned char type_5[4];
typedef float type_6[4][4];
typedef float type_7[4];
typedef float type_8[4][4];
typedef float type_10[4][4];
typedef shAttackInfo type_11[46];
typedef int type_14[4][4];
typedef unsigned char type_15[4];
typedef unsigned char type_16[492];
typedef unsigned char type_18[10];
typedef float type_19[4];
typedef unsigned char type_20[13];
typedef unsigned char type_21[34];
typedef float type_22[4][2];
typedef float type_23[4];
typedef float type_24[4][4];

struct SPACK_OT_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon3 src_m;
	_anon2 src_t;
	_anon3 des_m;
	_anon2 des_t;
	_anon2 axis;
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

struct _EF_CARTDISCH_TASK
{
	_shTskEXECUTE exe;
	_EF_CARTDISCH_DATA data;
	unsigned char freemem[364];
};

struct SPACK_ENV_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int pad1;
	unsigned short VifQwc;
	unsigned char pad2;
	unsigned char VifDirect;
};

struct _VbSCREENINFO
{
	float scr_z;
	float sx;
	float sy;
	float cx;
	float cy;
	float zmin;
	float zmax;
	float nearz;
	float farz;
};

struct _EF_CD_F4
{
	float v[4][4];
	unsigned char rgba[4];
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon2 pos;
	_anon2 rot;
	_anon2 pos_spd;
	_anon2 rot_spd;
	_anon3 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon2 b_pos;
	_anon2 b_rot;
	int en_first_status;
	int colis_fall_timer;
	shBattleInfo battle;
	_CL_VHIT_RESULT eye;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubCharacter* pre;
	SubCharacter* next;
	unsigned char work[4];
	void* enemy_p;
};

struct _shTskEXECUTE
{
	void(*adrs)(void*);
	void* next;
	void* prev;
	int mode;
	int atr;
};

struct shBattleArea
{
	float center;
	float radius;
};

struct _EF_CARTDISCH_DATA
{
	float pos[4];
	float mvec[4];
	float rot[4];
	float vrot[4];
	int kind;
	int life;
	int move;
};

struct shBattleInfo
{
	float pos[4];
	float vec[4];
	unsigned short id;
	unsigned short kind;
	float damage;
	float shock;
	int atk_result;
	float prev_atk_pos[4];
	SubCharacter* target;
	float hp;
	float hp_max;
	float hp_rate;
	unsigned int status;
	shBattleArea look;
	shBattleArea feel;
};

struct _shTskTASK
{
	_shTskEXECUTE exe;
	unsigned char freemem[492];
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon0 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct _CL_HITPOLY_COLUMN
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4][2];
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
};

union _anon1
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

struct SPACK_DATA
{
	SPACK_OT_DATA** ot_top;
	SPACK_OT_DATA** ot_last;
	unsigned int ot_size;
	unsigned int ot_width;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int envid;
	SPACK_OT_DATA* dma_top;
	SPACK_OT_DATA* dmabuf_pos;
	SPACK_ENV_DATA* env_top;
	unsigned long* pk_last;
	unsigned long* pos;
	short* ot_max;
	<unknown fundamental type (0xa510)>* packet;
	SPACK_STATIC_DATA* ps_top;
	unsigned long* pgiftag;
	unsigned long giftag_b;
	unsigned int flag;
	void* kick_top;
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

struct _anon3
{
	float d[4][4];
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
void(*EFCTCartridgeDischarge)(_shTskTASK*);
SPACK_DATA spack;
_VbSCREENINFO VbScreenInfo;
_VbWVSMATRIX VbWvsMatrix;

void EFCTSetDischargeCartridge(int kind);
void EFCTCartridgeDischarge(_shTskTASK* ptr);
void efCartridgeDischargeDisp(_EF_CARTDISCH_TASK* ptr);
void efCartridgeDischargeDel(_EF_CARTDISCH_TASK* ptr);
void efCartridgeDrawCart(_EF_CARTDISCH_DATA* cart);
void efCartridgeDischargeDrawPolyF4(_EF_CD_F4* p);

// 
// Start address: 0x220290
void EFCTSetDischargeCartridge(int kind)
{
	float svec[4];
	float pos1[4];
	float vec[4];
	float pos0[4];
	float m0[4][4];
	float rot0[4];
	_EF_CARTDISCH_TASK* ptr;
	// Line 72, Address: 0x220290, Func Offset: 0
	// Line 80, Address: 0x2202a4, Func Offset: 0x14
	// Line 85, Address: 0x2202c8, Func Offset: 0x38
	// Line 86, Address: 0x2202e0, Func Offset: 0x50
	// Line 88, Address: 0x2202e8, Func Offset: 0x58
	// Line 89, Address: 0x2202f0, Func Offset: 0x60
	// Line 92, Address: 0x2202f4, Func Offset: 0x64
	// Line 93, Address: 0x220304, Func Offset: 0x74
	// Line 94, Address: 0x220314, Func Offset: 0x84
	// Line 97, Address: 0x220340, Func Offset: 0xb0
	// Line 98, Address: 0x22036c, Func Offset: 0xdc
	// Line 99, Address: 0x220398, Func Offset: 0x108
	// Line 100, Address: 0x2203b4, Func Offset: 0x124
	// Line 101, Address: 0x2203c4, Func Offset: 0x134
	// Line 104, Address: 0x2203cc, Func Offset: 0x13c
	// Line 105, Address: 0x2203e8, Func Offset: 0x158
	// Line 106, Address: 0x220414, Func Offset: 0x184
	// Line 107, Address: 0x220430, Func Offset: 0x1a0
	// Line 108, Address: 0x220440, Func Offset: 0x1b0
	// Line 111, Address: 0x220448, Func Offset: 0x1b8
	// Line 112, Address: 0x220464, Func Offset: 0x1d4
	// Line 113, Address: 0x220490, Func Offset: 0x200
	// Line 114, Address: 0x2204ac, Func Offset: 0x21c
	// Line 119, Address: 0x2204bc, Func Offset: 0x22c
	// Line 120, Address: 0x2204cc, Func Offset: 0x23c
	// Line 123, Address: 0x2204dc, Func Offset: 0x24c
	// Line 124, Address: 0x2204fc, Func Offset: 0x26c
	// Line 125, Address: 0x220508, Func Offset: 0x278
	// Line 126, Address: 0x220528, Func Offset: 0x298
	// Line 129, Address: 0x220538, Func Offset: 0x2a8
	// Line 130, Address: 0x220588, Func Offset: 0x2f8
	// Line 131, Address: 0x2205d4, Func Offset: 0x344
	// Line 132, Address: 0x220620, Func Offset: 0x390
	// Line 133, Address: 0x220630, Func Offset: 0x3a0
	// Line 134, Address: 0x220658, Func Offset: 0x3c8
	// Line 135, Address: 0x220668, Func Offset: 0x3d8
	// Line 137, Address: 0x22069c, Func Offset: 0x40c
	// Line 138, Address: 0x2206a4, Func Offset: 0x414
	// Line 139, Address: 0x2206ac, Func Offset: 0x41c
	// Line 141, Address: 0x2206b0, Func Offset: 0x420
	// Func End, Address: 0x2206c8, Func Offset: 0x438
}

// 
// Start address: 0x2206d0
void EFCTCartridgeDischarge(_shTskTASK* ptr)
{
	// Line 158, Address: 0x2206d0, Func Offset: 0
	// Line 159, Address: 0x2206dc, Func Offset: 0xc
	// Line 162, Address: 0x220700, Func Offset: 0x30
	// Line 163, Address: 0x22070c, Func Offset: 0x3c
	// Line 166, Address: 0x220714, Func Offset: 0x44
	// Line 169, Address: 0x220720, Func Offset: 0x50
	// Func End, Address: 0x220730, Func Offset: 0x60
}

// 
// Start address: 0x220730
void efCartridgeDischargeDisp(_EF_CARTDISCH_TASK* ptr)
{
	_CL_HITPOLY_COLUMN* col;
	float m0[4][4];
	float vec[4];
	float ang;
	float m0[4][4];
	float npos[4];
	float ang;
	float nml[4];
	_CL_VHIT_RESULT res;
	float oldpos[4];
	float mv[4];
	// Line 186, Address: 0x220730, Func Offset: 0
	// Line 191, Address: 0x220740, Func Offset: 0x10
	// Line 194, Address: 0x220750, Func Offset: 0x20
	// Line 195, Address: 0x220760, Func Offset: 0x30
	// Line 196, Address: 0x22078c, Func Offset: 0x5c
	// Line 199, Address: 0x2207a8, Func Offset: 0x78
	// Line 202, Address: 0x2207c4, Func Offset: 0x94
	// Line 203, Address: 0x2207f0, Func Offset: 0xc0
	// Line 207, Address: 0x22080c, Func Offset: 0xdc
	// Line 208, Address: 0x220824, Func Offset: 0xf4
	// Line 210, Address: 0x220834, Func Offset: 0x104
	// Line 212, Address: 0x22085c, Func Offset: 0x12c
	// Line 213, Address: 0x22086c, Func Offset: 0x13c
	// Line 214, Address: 0x220884, Func Offset: 0x154
	// Line 215, Address: 0x22089c, Func Offset: 0x16c
	// Line 216, Address: 0x2208b4, Func Offset: 0x184
	// Line 219, Address: 0x2208bc, Func Offset: 0x18c
	// Line 220, Address: 0x2208c4, Func Offset: 0x194
	// Line 221, Address: 0x2208cc, Func Offset: 0x19c
	// Line 222, Address: 0x2208d8, Func Offset: 0x1a8
	// Line 223, Address: 0x2208e4, Func Offset: 0x1b4
	// Line 227, Address: 0x2208e8, Func Offset: 0x1b8
	// Line 228, Address: 0x2208fc, Func Offset: 0x1cc
	// Line 232, Address: 0x22090c, Func Offset: 0x1dc
	// Line 234, Address: 0x220934, Func Offset: 0x204
	// Line 236, Address: 0x220958, Func Offset: 0x228
	// Line 238, Address: 0x220980, Func Offset: 0x250
	// Line 239, Address: 0x220990, Func Offset: 0x260
	// Line 240, Address: 0x2209a8, Func Offset: 0x278
	// Line 241, Address: 0x2209c0, Func Offset: 0x290
	// Line 242, Address: 0x2209d8, Func Offset: 0x2a8
	// Line 245, Address: 0x2209e0, Func Offset: 0x2b0
	// Line 246, Address: 0x2209e8, Func Offset: 0x2b8
	// Line 247, Address: 0x2209f0, Func Offset: 0x2c0
	// Line 248, Address: 0x2209fc, Func Offset: 0x2cc
	// Line 249, Address: 0x220a08, Func Offset: 0x2d8
	// Line 251, Address: 0x220a0c, Func Offset: 0x2dc
	// Line 258, Address: 0x220a14, Func Offset: 0x2e4
	// Line 259, Address: 0x220a1c, Func Offset: 0x2ec
	// Line 260, Address: 0x220a28, Func Offset: 0x2f8
	// Line 263, Address: 0x220a4c, Func Offset: 0x31c
	// Line 264, Address: 0x220a74, Func Offset: 0x344
	// Line 265, Address: 0x220a88, Func Offset: 0x358
	// Line 266, Address: 0x220abc, Func Offset: 0x38c
	// Line 267, Address: 0x220ac4, Func Offset: 0x394
	// Line 268, Address: 0x220acc, Func Offset: 0x39c
	// Line 270, Address: 0x220adc, Func Offset: 0x3ac
	// Line 271, Address: 0x220ae4, Func Offset: 0x3b4
	// Line 278, Address: 0x220af4, Func Offset: 0x3c4
	// Line 279, Address: 0x220af8, Func Offset: 0x3c8
	// Line 280, Address: 0x220b14, Func Offset: 0x3e4
	// Line 281, Address: 0x220b20, Func Offset: 0x3f0
	// Line 284, Address: 0x220b44, Func Offset: 0x414
	// Line 285, Address: 0x220b6c, Func Offset: 0x43c
	// Line 286, Address: 0x220b80, Func Offset: 0x450
	// Line 287, Address: 0x220bb4, Func Offset: 0x484
	// Line 288, Address: 0x220bbc, Func Offset: 0x48c
	// Line 294, Address: 0x220bc4, Func Offset: 0x494
	// Line 295, Address: 0x220bd0, Func Offset: 0x4a0
	// Line 296, Address: 0x220bdc, Func Offset: 0x4ac
	// Line 299, Address: 0x220be8, Func Offset: 0x4b8
	// Line 300, Address: 0x220bf4, Func Offset: 0x4c4
	// Func End, Address: 0x220c08, Func Offset: 0x4d8
}

// 
// Start address: 0x220c10
void efCartridgeDischargeDel(_EF_CARTDISCH_TASK* ptr)
{
	// Line 317, Address: 0x220c10, Func Offset: 0
	// Line 319, Address: 0x220c1c, Func Offset: 0xc
	// Line 320, Address: 0x220c28, Func Offset: 0x18
	// Func End, Address: 0x220c38, Func Offset: 0x28
}

// 
// Start address: 0x220c40
void efCartridgeDrawCart(_EF_CARTDISCH_DATA* cart)
{
	float rl;
	float br;
	float mat1[4][4];
	float mat0[4][4];
	float v1[4];
	float v0[4];
	int dang;
	_EF_CD_F4 f4;
	// Line 337, Address: 0x220c40, Func Offset: 0
	// Line 344, Address: 0x220c58, Func Offset: 0x18
	// Line 347, Address: 0x220c88, Func Offset: 0x48
	// Line 348, Address: 0x220c90, Func Offset: 0x50
	// Line 349, Address: 0x220c98, Func Offset: 0x58
	// Line 352, Address: 0x220ca0, Func Offset: 0x60
	// Line 353, Address: 0x220ca8, Func Offset: 0x68
	// Line 354, Address: 0x220cb0, Func Offset: 0x70
	// Line 357, Address: 0x220cb8, Func Offset: 0x78
	// Line 358, Address: 0x220cc0, Func Offset: 0x80
	// Line 362, Address: 0x220cc8, Func Offset: 0x88
	// Line 363, Address: 0x220cd8, Func Offset: 0x98
	// Line 364, Address: 0x220ce8, Func Offset: 0xa8
	// Line 365, Address: 0x220cf8, Func Offset: 0xb8
	// Line 367, Address: 0x220d08, Func Offset: 0xc8
	// Line 368, Address: 0x220d0c, Func Offset: 0xcc
	// Line 369, Address: 0x220d18, Func Offset: 0xd8
	// Line 370, Address: 0x220d24, Func Offset: 0xe4
	// Line 372, Address: 0x220d34, Func Offset: 0xf4
	// Line 373, Address: 0x220d3c, Func Offset: 0xfc
	// Line 374, Address: 0x220d44, Func Offset: 0x104
	// Line 375, Address: 0x220d4c, Func Offset: 0x10c
	// Line 376, Address: 0x220d54, Func Offset: 0x114
	// Line 377, Address: 0x220d7c, Func Offset: 0x13c
	// Line 379, Address: 0x220d88, Func Offset: 0x148
	// Line 380, Address: 0x220d8c, Func Offset: 0x14c
	// Line 381, Address: 0x220d90, Func Offset: 0x150
	// Line 382, Address: 0x220d98, Func Offset: 0x158
	// Line 384, Address: 0x220da0, Func Offset: 0x160
	// Line 385, Address: 0x220dd8, Func Offset: 0x198
	// Line 386, Address: 0x220e0c, Func Offset: 0x1cc
	// Line 387, Address: 0x220e14, Func Offset: 0x1d4
	// Line 388, Address: 0x220e1c, Func Offset: 0x1dc
	// Line 389, Address: 0x220e24, Func Offset: 0x1e4
	// Line 391, Address: 0x220e2c, Func Offset: 0x1ec
	// Line 392, Address: 0x220e6c, Func Offset: 0x22c
	// Line 393, Address: 0x220ea0, Func Offset: 0x260
	// Line 394, Address: 0x220ea8, Func Offset: 0x268
	// Line 395, Address: 0x220eb0, Func Offset: 0x270
	// Line 396, Address: 0x220eb8, Func Offset: 0x278
	// Line 398, Address: 0x220ec0, Func Offset: 0x280
	// Line 399, Address: 0x220efc, Func Offset: 0x2bc
	// Line 400, Address: 0x220f2c, Func Offset: 0x2ec
	// Line 401, Address: 0x220f60, Func Offset: 0x320
	// Line 402, Address: 0x220f94, Func Offset: 0x354
	// Line 403, Address: 0x220fc8, Func Offset: 0x388
	// Line 405, Address: 0x220ffc, Func Offset: 0x3bc
	// Line 407, Address: 0x221008, Func Offset: 0x3c8
	// Line 408, Address: 0x221014, Func Offset: 0x3d4
	// Line 409, Address: 0x221020, Func Offset: 0x3e0
	// Line 410, Address: 0x22102c, Func Offset: 0x3ec
	// Line 411, Address: 0x22103c, Func Offset: 0x3fc
	// Func End, Address: 0x221058, Func Offset: 0x418
}

// 
// Start address: 0x221060
void efCartridgeDischargeDrawPolyF4(_EF_CD_F4* p)
{
	unsigned int aaa;
	float zn;
	float pparam[4];
	float e2[4];
	float e1[4];
	unsigned char fog;
	int i;
	int sp[4][4];
	float vp[4][4];
	float z;
	float q;
	unsigned long giftag_quad[2];
	// Line 414, Address: 0x221060, Func Offset: 0
	// Line 415, Address: 0x221074, Func Offset: 0x14
	// Line 417, Address: 0x221088, Func Offset: 0x28
	// Line 418, Address: 0x221098, Func Offset: 0x38
	// Line 425, Address: 0x22109c, Func Offset: 0x3c
	// Line 427, Address: 0x2210a8, Func Offset: 0x48
	// Line 428, Address: 0x2210ec, Func Offset: 0x8c
	// Line 429, Address: 0x2210fc, Func Offset: 0x9c
	// Line 431, Address: 0x22110c, Func Offset: 0xac
	// Line 432, Address: 0x221128, Func Offset: 0xc8
	// Line 433, Address: 0x221144, Func Offset: 0xe4
	// Line 434, Address: 0x221168, Func Offset: 0x108
	// Line 438, Address: 0x221184, Func Offset: 0x124
	// Line 439, Address: 0x221194, Func Offset: 0x134
	// Line 440, Address: 0x2211d0, Func Offset: 0x170
	// Line 442, Address: 0x2211d8, Func Offset: 0x178
	// Line 444, Address: 0x2211e4, Func Offset: 0x184
	// Line 445, Address: 0x221210, Func Offset: 0x1b0
	// Line 447, Address: 0x221288, Func Offset: 0x228
	// Line 448, Address: 0x221290, Func Offset: 0x230
	// Line 454, Address: 0x2212a4, Func Offset: 0x244
	// Line 456, Address: 0x2212ac, Func Offset: 0x24c
	// Line 458, Address: 0x2212bc, Func Offset: 0x25c
	// Line 459, Address: 0x2212d8, Func Offset: 0x278
	// Line 460, Address: 0x2212e4, Func Offset: 0x284
	// Line 462, Address: 0x2212f4, Func Offset: 0x294
	// Line 466, Address: 0x2212f8, Func Offset: 0x298
	// Line 467, Address: 0x22130c, Func Offset: 0x2ac
	// Line 470, Address: 0x221328, Func Offset: 0x2c8
	// Line 472, Address: 0x22138c, Func Offset: 0x32c
	// Line 473, Address: 0x2213e4, Func Offset: 0x384
	// Line 474, Address: 0x22143c, Func Offset: 0x3dc
	// Line 476, Address: 0x221494, Func Offset: 0x434
	// Line 478, Address: 0x2214ec, Func Offset: 0x48c
	// Line 479, Address: 0x2214f4, Func Offset: 0x494
	// Func End, Address: 0x22150c, Func Offset: 0x4ac
}

