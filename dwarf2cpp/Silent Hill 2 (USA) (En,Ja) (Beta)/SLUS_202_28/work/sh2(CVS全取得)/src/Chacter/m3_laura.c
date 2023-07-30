typedef struct _AnimeInfo;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct SubCharacter;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct shSkelton;
typedef struct _anon2;
typedef struct _anon3;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _CL_VHIT_WALL;

typedef void(*type_5)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_12)(SubCharacter*);

typedef unsigned char type_0[20];
typedef _AnimeInfo type_1[41];
typedef int type_2[41];
typedef shAttackInfo type_3[66];
typedef unsigned char type_4[14];
typedef unsigned char type_6[69];
typedef float type_8[4];
typedef float type_9[4][4];
typedef _AnimeInfo type_10[3];
typedef unsigned char type_11[4];
typedef unsigned char type_13[14];
typedef float type_14[4];
typedef float type_15[4];
typedef int type_16[41];
typedef unsigned char type_17[97];

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

	void HumanLAUFunction();
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
_AnimeInfo laura_anim[41];
_AnimeInfo plaura_anim[3];
int dlaura_anime_adr_list[41];
int dlaura_clani_adr_list[41];
void(*HumanLAUFunction)(SubCharacter*);

int HumanLAUInit();
void HumanLAUFunction();
void shCharacterSetHumanLAULow(SubCharacter* scp);
int shCharacterHumanLAUAnimeSet(SubCharacter* scp, int anime_id);
int shCharacterHumanLAUAnimeSetP(SubCharacter* scp, int anime_id);

// 
// Start address: 0x105620
int HumanLAUInit()
{
	// Line 148, Address: 0x105620, Func Offset: 0
	// Line 149, Address: 0x105624, Func Offset: 0x4
	// Func End, Address: 0x10562c, Func Offset: 0xc
}

// 
// Start address: 0x105630
void SubCharacter::HumanLAUFunction()
{
	short id;
	_AnimeInfo* aip;
	// Line 161, Address: 0x105630, Func Offset: 0
	// Line 165, Address: 0x105640, Func Offset: 0x10
	// Line 172, Address: 0x105660, Func Offset: 0x30
	// Line 174, Address: 0x105670, Func Offset: 0x40
	// Line 175, Address: 0x10567c, Func Offset: 0x4c
	// Line 180, Address: 0x105688, Func Offset: 0x58
	// Line 188, Address: 0x1056b4, Func Offset: 0x84
	// Line 196, Address: 0x1056c0, Func Offset: 0x90
	// Func End, Address: 0x1056d4, Func Offset: 0xa4
}

// 
// Start address: 0x1056e0
void shCharacterSetHumanLAULow(SubCharacter* scp)
{
	// Line 212, Address: 0x1056e0, Func Offset: 0
	// Line 213, Address: 0x1056e8, Func Offset: 0x8
	// Line 214, Address: 0x1056f8, Func Offset: 0x18
	// Func End, Address: 0x105708, Func Offset: 0x28
}

// 
// Start address: 0x105710
int shCharacterHumanLAUAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 228, Address: 0x105710, Func Offset: 0
	// Line 232, Address: 0x10572c, Func Offset: 0x1c
	// Line 233, Address: 0x105738, Func Offset: 0x28
	// Line 236, Address: 0x105758, Func Offset: 0x48
	// Line 237, Address: 0x105774, Func Offset: 0x64
	// Line 247, Address: 0x1057b0, Func Offset: 0xa0
	// Line 253, Address: 0x1057dc, Func Offset: 0xcc
	// Line 255, Address: 0x1057e8, Func Offset: 0xd8
	// Line 257, Address: 0x1057ec, Func Offset: 0xdc
	// Func End, Address: 0x105808, Func Offset: 0xf8
}

// 
// Start address: 0x105810
int shCharacterHumanLAUAnimeSetP(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 269, Address: 0x105810, Func Offset: 0
	// Line 273, Address: 0x105828, Func Offset: 0x18
	// Line 275, Address: 0x105834, Func Offset: 0x24
	// Line 282, Address: 0x105854, Func Offset: 0x44
	// Line 283, Address: 0x105870, Func Offset: 0x60
	// Line 290, Address: 0x105898, Func Offset: 0x88
	// Line 292, Address: 0x1058a4, Func Offset: 0x94
	// Line 294, Address: 0x1058a8, Func Offset: 0x98
	// Func End, Address: 0x1058c0, Func Offset: 0xb0
}

