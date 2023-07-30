typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct SubCharacter;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct _AnimeInfo;
typedef struct shSkelton;
typedef struct _anon2;
typedef struct _anon3;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _CL_VHIT_WALL;

typedef void(*type_5)(SubCharacter*);
typedef void(*type_9)(SubCharacter*);
typedef void(*type_10)(SubCharacter*);

typedef int type_0[30];
typedef unsigned char type_1[20];
typedef _AnimeInfo type_2[30];
typedef shAttackInfo type_3[66];
typedef unsigned char type_4[14];
typedef float type_6[4];
typedef float type_7[4][4];
typedef unsigned char type_8[69];
typedef _AnimeInfo type_11[6];
typedef unsigned char type_12[4];
typedef int type_13[31];
typedef unsigned char type_14[14];
typedef float type_15[4];
typedef float type_16[4];
typedef unsigned char type_17[97];

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

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
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

	void HumanDMARFunction();
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
_AnimeInfo dmaria_anim[30];
_AnimeInfo p_hhh_mar_anim[6];
int dmaria_anime_adr_list[31];
int dmaria_clani_adr_list[30];
void(*HumanDMARFunction)(SubCharacter*);

int HumanDMARInit();
void HumanDMARFunction();
void shCharacterSetHumanDMARLow(SubCharacter* scp);
int shCharacterHumanDMARAnimeSet(SubCharacter* scp, int anime_id);
int shCharacterHumanDMARAnimeSetP(SubCharacter* scp, int anime_id);

// 
// Start address: 0x104b50
int HumanDMARInit()
{
	// Line 122, Address: 0x104b50, Func Offset: 0
	// Line 123, Address: 0x104b54, Func Offset: 0x4
	// Func End, Address: 0x104b5c, Func Offset: 0xc
}

// 
// Start address: 0x104b60
void SubCharacter::HumanDMARFunction()
{
	_AnimeInfo* aip;
	// Line 135, Address: 0x104b60, Func Offset: 0
	// Line 139, Address: 0x104b70, Func Offset: 0x10
	// Line 144, Address: 0x104b90, Func Offset: 0x30
	// Line 145, Address: 0x104bac, Func Offset: 0x4c
	// Line 150, Address: 0x104bb8, Func Offset: 0x58
	// Line 158, Address: 0x104be4, Func Offset: 0x84
	// Line 164, Address: 0x104bf0, Func Offset: 0x90
	// Func End, Address: 0x104c04, Func Offset: 0xa4
}

// 
// Start address: 0x104c10
void shCharacterSetHumanDMARLow(SubCharacter* scp)
{
	// Line 180, Address: 0x104c10, Func Offset: 0
	// Line 181, Address: 0x104c18, Func Offset: 0x8
	// Line 182, Address: 0x104c28, Func Offset: 0x18
	// Func End, Address: 0x104c38, Func Offset: 0x28
}

// 
// Start address: 0x104c40
int shCharacterHumanDMARAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 196, Address: 0x104c40, Func Offset: 0
	// Line 199, Address: 0x104c5c, Func Offset: 0x1c
	// Line 200, Address: 0x104c68, Func Offset: 0x28
	// Line 203, Address: 0x104c88, Func Offset: 0x48
	// Line 204, Address: 0x104ca4, Func Offset: 0x64
	// Line 213, Address: 0x104ce0, Func Offset: 0xa0
	// Line 217, Address: 0x104d0c, Func Offset: 0xcc
	// Line 219, Address: 0x104d18, Func Offset: 0xd8
	// Line 221, Address: 0x104d1c, Func Offset: 0xdc
	// Func End, Address: 0x104d38, Func Offset: 0xf8
}

// 
// Start address: 0x104d40
int shCharacterHumanDMARAnimeSetP(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 233, Address: 0x104d40, Func Offset: 0
	// Line 236, Address: 0x104d58, Func Offset: 0x18
	// Line 237, Address: 0x104d64, Func Offset: 0x24
	// Line 240, Address: 0x104d84, Func Offset: 0x44
	// Line 250, Address: 0x104dc8, Func Offset: 0x88
	// Line 256, Address: 0x104dd8, Func Offset: 0x98
	// Line 257, Address: 0x104df4, Func Offset: 0xb4
	// Line 265, Address: 0x104e1c, Func Offset: 0xdc
	// Line 267, Address: 0x104e28, Func Offset: 0xe8
	// Line 269, Address: 0x104e2c, Func Offset: 0xec
	// Func End, Address: 0x104e44, Func Offset: 0x104
}

