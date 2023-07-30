typedef struct _AnimeInfo;
typedef struct _anon0;
typedef struct shSkelton;
typedef struct SubCharacter;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;

typedef void(*type_7)(SubCharacter*);
typedef void(*type_9)(SubCharacter*);
typedef void(*type_14)(SubCharacter*);

typedef unsigned char type_0[13];
typedef unsigned char type_1[34];
typedef float type_2[4];
typedef float type_3[4][4];
typedef _AnimeInfo type_4[24];
typedef int type_5[24];
typedef unsigned char type_6[10];
typedef float type_8[4];
typedef shAttackInfo type_10[46];
typedef unsigned char type_11[4];
typedef int type_12[24];
typedef unsigned char type_13[10];
typedef float type_15[4];

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

struct _anon0
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
	_anon1 src_m;
	_anon0 src_t;
	_anon1 des_m;
	_anon0 des_t;
	_anon0 axis;
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

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon0 pos;
	_anon0 rot;
	_anon0 pos_spd;
	_anon0 rot_spd;
	_anon1 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon0 b_pos;
	_anon0 b_rot;
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
};

struct _anon1
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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon2 hit_check;
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

union _anon2
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

struct _CL_VHIT_RESULT
{
	int kind;
	_anon3 hobj;
};

union _anon3
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
_AnimeInfo dangela_anim[24];
int dangela_anime_adr_list[24];
int dangela_clani_adr_list[24];
void(*HumanAGLFunction)(SubCharacter*);

int HumanAGLInit(SubCharacter* scp);
void HumanAGLFunction();
void shCharacterSetHumanAGLLow(SubCharacter* scp);
int shCharacterHumanAGLAnimeSet(SubCharacter* scp, int anime_id);

// 
// Start address: 0x104100
int HumanAGLInit(SubCharacter* scp)
{
	// Line 105, Address: 0x104100, Func Offset: 0
	// Line 106, Address: 0x10410c, Func Offset: 0xc
	// Line 107, Address: 0x104118, Func Offset: 0x18
	// Line 108, Address: 0x104128, Func Offset: 0x28
	// Line 109, Address: 0x10412c, Func Offset: 0x2c
	// Func End, Address: 0x10413c, Func Offset: 0x3c
}

// 
// Start address: 0x104140
void SubCharacter::HumanAGLFunction()
{
	short id;
	_AnimeInfo* aip;
	// Line 121, Address: 0x104140, Func Offset: 0
	// Line 125, Address: 0x104154, Func Offset: 0x14
	// Line 132, Address: 0x104178, Func Offset: 0x38
	// Line 134, Address: 0x10418c, Func Offset: 0x4c
	// Line 135, Address: 0x1041a0, Func Offset: 0x60
	// Line 139, Address: 0x1041ac, Func Offset: 0x6c
	// Line 140, Address: 0x1041b4, Func Offset: 0x74
	// Line 148, Address: 0x1041e0, Func Offset: 0xa0
	// Line 156, Address: 0x1041f0, Func Offset: 0xb0
	// Func End, Address: 0x104208, Func Offset: 0xc8
}

// 
// Start address: 0x104210
void shCharacterSetHumanAGLLow(SubCharacter* scp)
{
	// Line 172, Address: 0x104210, Func Offset: 0
	// Line 173, Address: 0x10421c, Func Offset: 0xc
	// Line 174, Address: 0x104230, Func Offset: 0x20
	// Func End, Address: 0x104240, Func Offset: 0x30
}

// 
// Start address: 0x104240
int shCharacterHumanAGLAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	short id;
	// Line 188, Address: 0x104240, Func Offset: 0
	// Line 192, Address: 0x104258, Func Offset: 0x18
	// Line 194, Address: 0x10426c, Func Offset: 0x2c
	// Line 196, Address: 0x104280, Func Offset: 0x40
	// Line 197, Address: 0x1042a0, Func Offset: 0x60
	// Line 207, Address: 0x1042ec, Func Offset: 0xac
	// Line 213, Address: 0x104324, Func Offset: 0xe4
	// Line 215, Address: 0x104330, Func Offset: 0xf0
	// Line 217, Address: 0x104334, Func Offset: 0xf4
	// Func End, Address: 0x10434c, Func Offset: 0x10c
}

