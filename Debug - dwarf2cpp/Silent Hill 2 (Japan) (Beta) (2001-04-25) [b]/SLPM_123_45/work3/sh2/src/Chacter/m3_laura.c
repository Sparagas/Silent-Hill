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

typedef void(*type_5)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);
typedef void(*type_12)(SubCharacter*);

typedef unsigned char type_0[34];
typedef float type_1[4];
typedef _AnimeInfo type_2[28];
typedef float type_3[4][4];
typedef unsigned char type_4[10];
typedef float type_7[4];
typedef shAttackInfo type_8[46];
typedef unsigned char type_9[4];
typedef int type_10[28];
typedef unsigned char type_11[10];
typedef float type_13[4];
typedef int type_14[28];
typedef unsigned char type_15[13];

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

	void HumanLAUFunction();
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
_AnimeInfo laura_anim[28];
int dlaura_anime_adr_list[28];
int dlaura_clani_adr_list[28];
void(*HumanLAUFunction)(SubCharacter*);

int HumanLAUInit(SubCharacter* scp);
void HumanLAUFunction();
void shCharacterSetHumanLAULow(SubCharacter* scp);
int shCharacterHumanLAUAnimeSet(SubCharacter* scp, int anime_id);

// 
// Start address: 0x1061a0
int HumanLAUInit(SubCharacter* scp)
{
	// Line 117, Address: 0x1061a0, Func Offset: 0
	// Line 118, Address: 0x1061ac, Func Offset: 0xc
	// Line 119, Address: 0x1061b8, Func Offset: 0x18
	// Line 120, Address: 0x1061c8, Func Offset: 0x28
	// Line 121, Address: 0x1061cc, Func Offset: 0x2c
	// Func End, Address: 0x1061dc, Func Offset: 0x3c
}

// 
// Start address: 0x1061e0
void SubCharacter::HumanLAUFunction()
{
	short id;
	_AnimeInfo* aip;
	// Line 133, Address: 0x1061e0, Func Offset: 0
	// Line 137, Address: 0x1061f4, Func Offset: 0x14
	// Line 144, Address: 0x106218, Func Offset: 0x38
	// Line 146, Address: 0x10622c, Func Offset: 0x4c
	// Line 147, Address: 0x106240, Func Offset: 0x60
	// Line 151, Address: 0x10624c, Func Offset: 0x6c
	// Line 152, Address: 0x106254, Func Offset: 0x74
	// Line 160, Address: 0x106280, Func Offset: 0xa0
	// Line 168, Address: 0x106290, Func Offset: 0xb0
	// Func End, Address: 0x1062a8, Func Offset: 0xc8
}

// 
// Start address: 0x1062b0
void shCharacterSetHumanLAULow(SubCharacter* scp)
{
	// Line 184, Address: 0x1062b0, Func Offset: 0
	// Line 185, Address: 0x1062bc, Func Offset: 0xc
	// Line 186, Address: 0x1062d0, Func Offset: 0x20
	// Func End, Address: 0x1062e0, Func Offset: 0x30
}

// 
// Start address: 0x1062e0
int shCharacterHumanLAUAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	short id;
	// Line 200, Address: 0x1062e0, Func Offset: 0
	// Line 204, Address: 0x1062f8, Func Offset: 0x18
	// Line 206, Address: 0x10630c, Func Offset: 0x2c
	// Line 209, Address: 0x106320, Func Offset: 0x40
	// Line 210, Address: 0x106340, Func Offset: 0x60
	// Line 220, Address: 0x10638c, Func Offset: 0xac
	// Line 226, Address: 0x1063c4, Func Offset: 0xe4
	// Line 228, Address: 0x1063d0, Func Offset: 0xf0
	// Line 230, Address: 0x1063d4, Func Offset: 0xf4
	// Func End, Address: 0x1063ec, Func Offset: 0x10c
}

