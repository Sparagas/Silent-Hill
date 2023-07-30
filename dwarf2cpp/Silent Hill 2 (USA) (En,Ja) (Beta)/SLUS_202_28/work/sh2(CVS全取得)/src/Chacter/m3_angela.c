typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct SubCharacter;
typedef union _anon0;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct shSkelton;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _AnimeInfo;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _CL_VHIT_WALL;

typedef void(*type_3)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);
typedef void(*type_10)(SubCharacter*);
typedef void(*type_13)(SubCharacter*);

typedef unsigned char type_0[20];
typedef _AnimeInfo type_1[32];
typedef int type_2[32];
typedef shAttackInfo type_4[66];
typedef unsigned char type_5[14];
typedef float type_7[4];
typedef float type_8[4][4];
typedef unsigned char type_9[69];
typedef unsigned char type_11[4];
typedef _AnimeInfo type_12[6];
typedef unsigned char type_14[14];
typedef float type_15[4];
typedef float type_16[4];
typedef int type_17[32];
typedef unsigned char type_18[97];

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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
	unsigned int model_type;
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

	void HumanAGLFunction();
	void HumanRAGLFunction();
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
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

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

struct _anon3
{
	float d[4][4];
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct shBattleArea
{
	float center;
	float radius;
};

struct shBattleInfo
{
	float pos[4];
	float vec[4];
	unsigned short id;
	unsigned short kind;
	float dead_timer;
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
	unsigned char se;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo dangela_anim[32];
_AnimeInfo pangela_anim[6];
int dangela_anime_adr_list[32];
int dangela_clani_adr_list[32];
void(*HumanAGLFunction)(SubCharacter*);
float wall_pos;
int mirror_mode;
void(*HumanRAGLFunction)(SubCharacter*);

void HumanAGLFunction();
void shCharacterSetHumanAGLLow(SubCharacter* scp);
int shCharacterHumanAGLAnimeSet(SubCharacter* scp, int anime_id);
int shCharacterHumanAGLAnimeSetP(SubCharacter* scp, int anime_id);
int HumanRAGLInit(SubCharacter* scp);
void HumanRAGLFunction();
void shCharacterSetHumanRAGLLow(SubCharacter* scp);

// 
// Start address: 0x103610
void SubCharacter::HumanAGLFunction()
{
	short id;
	_AnimeInfo* aip;
	// Line 151, Address: 0x103610, Func Offset: 0
	// Line 155, Address: 0x103620, Func Offset: 0x10
	// Line 162, Address: 0x103640, Func Offset: 0x30
	// Line 164, Address: 0x103650, Func Offset: 0x40
	// Line 170, Address: 0x10365c, Func Offset: 0x4c
	// Line 178, Address: 0x10368c, Func Offset: 0x7c
	// Line 186, Address: 0x103698, Func Offset: 0x88
	// Func End, Address: 0x1036ac, Func Offset: 0x9c
}

// 
// Start address: 0x1036b0
void shCharacterSetHumanAGLLow(SubCharacter* scp)
{
	// Line 202, Address: 0x1036b0, Func Offset: 0
	// Line 203, Address: 0x1036b8, Func Offset: 0x8
	// Line 204, Address: 0x1036c8, Func Offset: 0x18
	// Func End, Address: 0x1036d8, Func Offset: 0x28
}

// 
// Start address: 0x1036e0
int shCharacterHumanAGLAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 218, Address: 0x1036e0, Func Offset: 0
	// Line 221, Address: 0x1036fc, Func Offset: 0x1c
	// Line 223, Address: 0x103708, Func Offset: 0x28
	// Line 225, Address: 0x103728, Func Offset: 0x48
	// Line 226, Address: 0x103744, Func Offset: 0x64
	// Line 235, Address: 0x103780, Func Offset: 0xa0
	// Line 239, Address: 0x1037ac, Func Offset: 0xcc
	// Line 241, Address: 0x1037b8, Func Offset: 0xd8
	// Line 243, Address: 0x1037bc, Func Offset: 0xdc
	// Func End, Address: 0x1037d8, Func Offset: 0xf8
}

// 
// Start address: 0x1037e0
int shCharacterHumanAGLAnimeSetP(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 255, Address: 0x1037e0, Func Offset: 0
	// Line 258, Address: 0x1037f8, Func Offset: 0x18
	// Line 260, Address: 0x103804, Func Offset: 0x24
	// Line 263, Address: 0x103824, Func Offset: 0x44
	// Line 265, Address: 0x103868, Func Offset: 0x88
	// Line 267, Address: 0x103878, Func Offset: 0x98
	// Line 269, Address: 0x103880, Func Offset: 0xa0
	// Line 271, Address: 0x103890, Func Offset: 0xb0
	// Line 273, Address: 0x103898, Func Offset: 0xb8
	// Line 283, Address: 0x1038a4, Func Offset: 0xc4
	// Line 284, Address: 0x1038c0, Func Offset: 0xe0
	// Line 292, Address: 0x1038e8, Func Offset: 0x108
	// Line 294, Address: 0x1038f4, Func Offset: 0x114
	// Line 296, Address: 0x1038f8, Func Offset: 0x118
	// Func End, Address: 0x103910, Func Offset: 0x130
}

// 
// Start address: 0x103910
int HumanRAGLInit(SubCharacter* scp)
{
	// Line 321, Address: 0x103910, Func Offset: 0
	// Line 322, Address: 0x103920, Func Offset: 0x10
	// Line 324, Address: 0x10392c, Func Offset: 0x1c
	// Line 327, Address: 0x103934, Func Offset: 0x24
	// Line 329, Address: 0x10395c, Func Offset: 0x4c
	// Line 330, Address: 0x103964, Func Offset: 0x54
	// Line 331, Address: 0x103974, Func Offset: 0x64
	// Line 333, Address: 0x10397c, Func Offset: 0x6c
	// Line 334, Address: 0x103988, Func Offset: 0x78
	// Line 337, Address: 0x103998, Func Offset: 0x88
	// Line 338, Address: 0x10399c, Func Offset: 0x8c
	// Func End, Address: 0x1039b0, Func Offset: 0xa0
}

// 
// Start address: 0x1039b0
void SubCharacter::HumanRAGLFunction()
{
	SubCharacter* scp;
	// Line 347, Address: 0x1039b0, Func Offset: 0
	// Line 350, Address: 0x1039c0, Func Offset: 0x10
	// Line 352, Address: 0x1039e0, Func Offset: 0x30
	// Line 353, Address: 0x1039e8, Func Offset: 0x38
	// Line 354, Address: 0x1039f4, Func Offset: 0x44
	// Line 357, Address: 0x1039fc, Func Offset: 0x4c
	// Line 358, Address: 0x103a14, Func Offset: 0x64
	// Line 362, Address: 0x103a1c, Func Offset: 0x6c
	// Line 365, Address: 0x103a4c, Func Offset: 0x9c
	// Line 366, Address: 0x103a64, Func Offset: 0xb4
	// Line 367, Address: 0x103a6c, Func Offset: 0xbc
	// Line 368, Address: 0x103a74, Func Offset: 0xc4
	// Line 369, Address: 0x103a80, Func Offset: 0xd0
	// Line 372, Address: 0x103a88, Func Offset: 0xd8
	// Line 378, Address: 0x103a90, Func Offset: 0xe0
	// Line 380, Address: 0x103aa8, Func Offset: 0xf8
	// Line 381, Address: 0x103ab0, Func Offset: 0x100
	// Line 382, Address: 0x103ab8, Func Offset: 0x108
	// Line 383, Address: 0x103ac4, Func Offset: 0x114
	// Line 386, Address: 0x103acc, Func Offset: 0x11c
	// Line 387, Address: 0x103ad4, Func Offset: 0x124
	// Line 388, Address: 0x103adc, Func Offset: 0x12c
	// Line 389, Address: 0x103af4, Func Offset: 0x144
	// Line 390, Address: 0x103b10, Func Offset: 0x160
	// Line 391, Address: 0x103b28, Func Offset: 0x178
	// Line 392, Address: 0x103b30, Func Offset: 0x180
	// Line 399, Address: 0x103b48, Func Offset: 0x198
	// Func End, Address: 0x103b5c, Func Offset: 0x1ac
}

// 
// Start address: 0x103b60
void shCharacterSetHumanRAGLLow(SubCharacter* scp)
{
	// Line 414, Address: 0x103b60, Func Offset: 0
	// Line 415, Address: 0x103b68, Func Offset: 0x8
	// Line 416, Address: 0x103b78, Func Offset: 0x18
	// Func End, Address: 0x103b88, Func Offset: 0x28
}

