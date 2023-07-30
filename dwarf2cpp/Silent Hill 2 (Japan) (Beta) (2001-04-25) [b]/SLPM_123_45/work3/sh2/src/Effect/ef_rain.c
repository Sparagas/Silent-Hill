typedef struct _EF_EF_RAINDROP_TASK;
typedef struct SPACK_OT_DATA;
typedef struct SPACK_ENV_DATA;
typedef struct _VbSCREENINFO;
typedef struct _EF_RAIN_LINE;
typedef struct shBattleFight;
typedef struct SPACK_STATIC_DATA;
typedef struct shBattleShot;
typedef struct SubCharacter;
typedef struct _shTskEXECUTE;
typedef struct shBattleArea;
typedef struct _shTskTASK;
typedef struct shBattleInfo;
typedef struct shSkelton;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon0;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct _EF_RAINDROP_DATA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct _anon2;
typedef struct SPACK_DATA;
typedef struct _VbWVSMATRIX;
typedef struct _anon3;

typedef void(*type_11)(SubCharacter*);
typedef void(*type_13)(SubCharacter*);
typedef void(*type_14)(void*);
typedef void(*type_18)(_shTskTASK*);

typedef unsigned long type_0[2];
typedef float type_1[4][2];
typedef unsigned char type_2[300];
typedef int type_3[4];
typedef int type_4[4][2];
typedef float type_5[4];
typedef float type_6[4][2];
typedef unsigned char type_7[4];
typedef unsigned char type_8[10];
typedef float type_9[4];
typedef float type_10[4][4];
typedef shAttackInfo type_12[46];
typedef unsigned char type_15[4];
typedef unsigned char type_16[492];
typedef unsigned char type_17[10];
typedef _shTskTASK* type_19[8];
typedef float type_20[4];
typedef unsigned char type_21[13];
typedef unsigned char type_22[34];
typedef unsigned long type_23[2];
typedef float type_24[4][4];
typedef float type_25[4][4];
typedef float type_26[4];
typedef float type_27[4][4];

struct _EF_EF_RAINDROP_TASK
{
	_shTskEXECUTE exe;
	_EF_RAINDROP_DATA data;
	unsigned char freemem[300];
};

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

struct _EF_RAIN_LINE
{
	float v[4][2];
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

struct _shTskTASK
{
	_shTskEXECUTE exe;
	unsigned char freemem[492];
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

struct _EF_RAINDROP_DATA
{
	float p[4][4];
	float v[4][4];
	int life;
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
void(*EFCTRainDropMain)(_shTskTASK*);
_shTskTASK* shTskTaskListTop[8];
SPACK_DATA spack;
_VbSCREENINFO VbScreenInfo;
_VbWVSMATRIX VbWvsMatrix;

int EFCTSetRainDrop(int lev);
void EFCTDelRainDrop();
void EFCTRainDropMain(_shTskTASK* ptr);
int efRainDropInitSpray(_EF_RAINDROP_DATA* dat, float* pos);
int efRainDropDrawSpray(_EF_RAINDROP_DATA* dat);
void efRainDropDrawLINE(_EF_RAIN_LINE* p);

// 
// Start address: 0x23d440
int EFCTSetRainDrop(int lev)
{
	_EF_EF_RAINDROP_TASK* ptr;
	int i;
	// Line 69, Address: 0x23d440, Func Offset: 0
	// Line 73, Address: 0x23d454, Func Offset: 0x14
	// Line 75, Address: 0x23d460, Func Offset: 0x20
	// Line 76, Address: 0x23d478, Func Offset: 0x38
	// Line 78, Address: 0x23d480, Func Offset: 0x40
	// Line 79, Address: 0x23d488, Func Offset: 0x48
	// Line 80, Address: 0x23d48c, Func Offset: 0x4c
	// Line 82, Address: 0x23d494, Func Offset: 0x54
	// Line 83, Address: 0x23d4a0, Func Offset: 0x60
	// Line 84, Address: 0x23d4b8, Func Offset: 0x78
	// Line 85, Address: 0x23d4bc, Func Offset: 0x7c
	// Func End, Address: 0x23d4d4, Func Offset: 0x94
}

// 
// Start address: 0x23d4e0
void EFCTDelRainDrop()
{
	_shTskTASK* seekp;
	_shTskTASK* ptr;
	// Line 102, Address: 0x23d4e0, Func Offset: 0
	// Line 106, Address: 0x23d4f0, Func Offset: 0x10
	// Line 107, Address: 0x23d4f8, Func Offset: 0x18
	// Line 112, Address: 0x23d508, Func Offset: 0x28
	// Line 113, Address: 0x23d520, Func Offset: 0x40
	// Line 115, Address: 0x23d528, Func Offset: 0x48
	// Line 116, Address: 0x23d52c, Func Offset: 0x4c
	// Line 117, Address: 0x23d538, Func Offset: 0x58
	// Line 118, Address: 0x23d540, Func Offset: 0x60
	// Func End, Address: 0x23d558, Func Offset: 0x78
}

// 
// Start address: 0x23d560
void EFCTRainDropMain(_shTskTASK* ptr)
{
	float campos[4];
	int i;
	_EF_RAIN_LINE line;
	// Line 135, Address: 0x23d560, Func Offset: 0
	// Line 140, Address: 0x23d570, Func Offset: 0x10
	// Line 142, Address: 0x23d57c, Func Offset: 0x1c
	// Line 143, Address: 0x23d584, Func Offset: 0x24
	// Line 144, Address: 0x23d58c, Func Offset: 0x2c
	// Line 145, Address: 0x23d594, Func Offset: 0x34
	// Line 146, Address: 0x23d59c, Func Offset: 0x3c
	// Line 148, Address: 0x23d5a8, Func Offset: 0x48
	// Line 149, Address: 0x23d5ec, Func Offset: 0x8c
	// Line 150, Address: 0x23d640, Func Offset: 0xe0
	// Line 151, Address: 0x23d684, Func Offset: 0x124
	// Line 153, Address: 0x23d694, Func Offset: 0x134
	// Line 154, Address: 0x23d69c, Func Offset: 0x13c
	// Line 155, Address: 0x23d6b0, Func Offset: 0x150
	// Line 156, Address: 0x23d6b8, Func Offset: 0x158
	// Line 158, Address: 0x23d6c0, Func Offset: 0x160
	// Line 159, Address: 0x23d6cc, Func Offset: 0x16c
	// Line 162, Address: 0x23d6dc, Func Offset: 0x17c
	// Line 165, Address: 0x23d700, Func Offset: 0x1a0
	// Line 166, Address: 0x23d71c, Func Offset: 0x1bc
	// Line 167, Address: 0x23d72c, Func Offset: 0x1cc
	// Line 169, Address: 0x23d734, Func Offset: 0x1d4
	// Line 170, Address: 0x23d74c, Func Offset: 0x1ec
	// Line 173, Address: 0x23d754, Func Offset: 0x1f4
	// Func End, Address: 0x23d768, Func Offset: 0x208
}

// 
// Start address: 0x23d770
int efRainDropInitSpray(_EF_RAINDROP_DATA* dat, float* pos)
{
	float ed[4];
	_CL_VHIT_RESULT res;
	// Line 190, Address: 0x23d770, Func Offset: 0
	// Line 194, Address: 0x23d788, Func Offset: 0x18
	// Line 195, Address: 0x23d7dc, Func Offset: 0x6c
	// Line 196, Address: 0x23d7e4, Func Offset: 0x74
	// Line 197, Address: 0x23d838, Func Offset: 0xc8
	// Line 199, Address: 0x23d848, Func Offset: 0xd8
	// Line 200, Address: 0x23d854, Func Offset: 0xe4
	// Line 202, Address: 0x23d870, Func Offset: 0x100
	// Line 204, Address: 0x23d898, Func Offset: 0x128
	// Line 205, Address: 0x23d8ac, Func Offset: 0x13c
	// Line 208, Address: 0x23d8bc, Func Offset: 0x14c
	// Line 210, Address: 0x23d8d0, Func Offset: 0x160
	// Line 211, Address: 0x23d8e4, Func Offset: 0x174
	// Line 212, Address: 0x23d8ec, Func Offset: 0x17c
	// Line 213, Address: 0x23d8f4, Func Offset: 0x184
	// Line 215, Address: 0x23d8fc, Func Offset: 0x18c
	// Line 216, Address: 0x23d904, Func Offset: 0x194
	// Line 217, Address: 0x23d90c, Func Offset: 0x19c
	// Line 218, Address: 0x23d924, Func Offset: 0x1b4
	// Line 220, Address: 0x23d92c, Func Offset: 0x1bc
	// Line 221, Address: 0x23d940, Func Offset: 0x1d0
	// Line 222, Address: 0x23d948, Func Offset: 0x1d8
	// Line 223, Address: 0x23d960, Func Offset: 0x1f0
	// Line 225, Address: 0x23d968, Func Offset: 0x1f8
	// Line 226, Address: 0x23d974, Func Offset: 0x204
	// Line 227, Address: 0x23d980, Func Offset: 0x210
	// Line 228, Address: 0x23d98c, Func Offset: 0x21c
	// Line 229, Address: 0x23d99c, Func Offset: 0x22c
	// Line 231, Address: 0x23d9a4, Func Offset: 0x234
	// Line 233, Address: 0x23d9b0, Func Offset: 0x240
	// Line 234, Address: 0x23d9b4, Func Offset: 0x244
	// Func End, Address: 0x23d9cc, Func Offset: 0x25c
}

// 
// Start address: 0x23d9d0
int efRainDropDrawSpray(_EF_RAINDROP_DATA* dat)
{
	_EF_RAIN_LINE line;
	int i;
	// Line 251, Address: 0x23d9d0, Func Offset: 0
	// Line 255, Address: 0x23d9e4, Func Offset: 0x14
	// Line 256, Address: 0x23d9ec, Func Offset: 0x1c
	// Line 257, Address: 0x23d9f4, Func Offset: 0x24
	// Line 258, Address: 0x23d9fc, Func Offset: 0x2c
	// Line 260, Address: 0x23da04, Func Offset: 0x34
	// Line 264, Address: 0x23da10, Func Offset: 0x40
	// Line 265, Address: 0x23da24, Func Offset: 0x54
	// Line 266, Address: 0x23da38, Func Offset: 0x68
	// Line 267, Address: 0x23da50, Func Offset: 0x80
	// Line 268, Address: 0x23da5c, Func Offset: 0x8c
	// Line 270, Address: 0x23da6c, Func Offset: 0x9c
	// Line 272, Address: 0x23da78, Func Offset: 0xa8
	// Line 273, Address: 0x23da84, Func Offset: 0xb4
	// Line 276, Address: 0x23da90, Func Offset: 0xc0
	// Line 277, Address: 0x23da94, Func Offset: 0xc4
	// Func End, Address: 0x23daac, Func Offset: 0xdc
}

// 
// Start address: 0x23dab0
void efRainDropDrawLINE(_EF_RAIN_LINE* p)
{
	unsigned int aaa;
	float zn;
	unsigned int aaa;
	float zn;
	unsigned char alpha;
	unsigned char fog;
	int i;
	int sp[4][2];
	float vp[4][2];
	float z;
	float q;
	unsigned long giftag_quad[2];
	// Line 280, Address: 0x23dab0, Func Offset: 0
	// Line 281, Address: 0x23dac8, Func Offset: 0x18
	// Line 283, Address: 0x23dadc, Func Offset: 0x2c
	// Line 284, Address: 0x23daec, Func Offset: 0x3c
	// Line 291, Address: 0x23daf0, Func Offset: 0x40
	// Line 293, Address: 0x23dafc, Func Offset: 0x4c
	// Line 294, Address: 0x23db40, Func Offset: 0x90
	// Line 295, Address: 0x23db50, Func Offset: 0xa0
	// Line 298, Address: 0x23db64, Func Offset: 0xb4
	// Line 299, Address: 0x23db74, Func Offset: 0xc4
	// Line 300, Address: 0x23dbb0, Func Offset: 0x100
	// Line 302, Address: 0x23dbb8, Func Offset: 0x108
	// Line 304, Address: 0x23dbc4, Func Offset: 0x114
	// Line 305, Address: 0x23dbf0, Func Offset: 0x140
	// Line 307, Address: 0x23dc68, Func Offset: 0x1b8
	// Line 308, Address: 0x23dc70, Func Offset: 0x1c0
	// Line 314, Address: 0x23dc84, Func Offset: 0x1d4
	// Line 316, Address: 0x23dc8c, Func Offset: 0x1dc
	// Line 318, Address: 0x23dc9c, Func Offset: 0x1ec
	// Line 319, Address: 0x23dcb8, Func Offset: 0x208
	// Line 320, Address: 0x23dcc4, Func Offset: 0x214
	// Line 321, Address: 0x23dcd4, Func Offset: 0x224
	// Line 322, Address: 0x23dce0, Func Offset: 0x230
	// Line 324, Address: 0x23dcf0, Func Offset: 0x240
	// Line 331, Address: 0x23dcf4, Func Offset: 0x244
	// Line 341, Address: 0x23dcfc, Func Offset: 0x24c
	// Line 343, Address: 0x23dd0c, Func Offset: 0x25c
	// Line 344, Address: 0x23dd28, Func Offset: 0x278
	// Line 345, Address: 0x23dd34, Func Offset: 0x284
	// Line 347, Address: 0x23dd44, Func Offset: 0x294
	// Line 351, Address: 0x23dd48, Func Offset: 0x298
	// Line 352, Address: 0x23dd5c, Func Offset: 0x2ac
	// Line 355, Address: 0x23dd78, Func Offset: 0x2c8
	// Line 357, Address: 0x23de00, Func Offset: 0x350
	// Line 358, Address: 0x23de58, Func Offset: 0x3a8
	// Line 359, Address: 0x23debc, Func Offset: 0x40c
	// Line 361, Address: 0x23df14, Func Offset: 0x464
	// Line 362, Address: 0x23df1c, Func Offset: 0x46c
	// Func End, Address: 0x23df38, Func Offset: 0x488
}

