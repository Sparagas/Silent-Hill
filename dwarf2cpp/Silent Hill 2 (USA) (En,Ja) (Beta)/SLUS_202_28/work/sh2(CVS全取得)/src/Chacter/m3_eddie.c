typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct SubCharacter;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct shSkelton;
typedef struct _anon2;
typedef struct _AnimeInfo;
typedef struct _anon3;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _CL_VHIT_WALL;

typedef void(*type_4)(SubCharacter*);
typedef void(*type_5)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);

typedef unsigned char type_0[20];
typedef _AnimeInfo type_1[28];
typedef shAttackInfo type_2[66];
typedef unsigned char type_3[14];
typedef unsigned char type_6[69];
typedef float type_8[4];
typedef float type_9[4][4];
typedef _AnimeInfo type_10[4];
typedef int type_11[28];
typedef unsigned char type_12[4];
typedef unsigned char type_13[14];
typedef float type_14[4];
typedef float type_15[4];
typedef unsigned char type_16[97];
typedef int type_17[28];

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

	void HumanEDIFunction();
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
_AnimeInfo eddie_anim[28];
_AnimeInfo peddie_anim[4];
int deddie_anime_adr_list[28];
int deddie_clani_adr_list[28];
void(*HumanEDIFunction)(SubCharacter*);

void HumanEDIFunction();
void shCharacterSetHumanEDILow(SubCharacter* scp);
int shCharacterHumanEDIAnimeSet(SubCharacter* scp, int anime_id);
int shCharacterHumanEDIAnimeSetP(SubCharacter* scp, int anime_id);

// 
// Start address: 0x104e50
void SubCharacter::HumanEDIFunction()
{
	short id;
	_AnimeInfo* aip;
	// Line 143, Address: 0x104e50, Func Offset: 0
	// Line 147, Address: 0x104e60, Func Offset: 0x10
	// Line 154, Address: 0x104e80, Func Offset: 0x30
	// Line 156, Address: 0x104e90, Func Offset: 0x40
	// Line 162, Address: 0x104e9c, Func Offset: 0x4c
	// Line 170, Address: 0x104ecc, Func Offset: 0x7c
	// Line 208, Address: 0x104ed8, Func Offset: 0x88
	// Func End, Address: 0x104eec, Func Offset: 0x9c
}

// 
// Start address: 0x104ef0
void shCharacterSetHumanEDILow(SubCharacter* scp)
{
	// Line 224, Address: 0x104ef0, Func Offset: 0
	// Line 225, Address: 0x104ef8, Func Offset: 0x8
	// Line 226, Address: 0x104f08, Func Offset: 0x18
	// Func End, Address: 0x104f18, Func Offset: 0x28
}

// 
// Start address: 0x104f20
int shCharacterHumanEDIAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 240, Address: 0x104f20, Func Offset: 0
	// Line 243, Address: 0x104f3c, Func Offset: 0x1c
	// Line 245, Address: 0x104f48, Func Offset: 0x28
	// Line 248, Address: 0x104f68, Func Offset: 0x48
	// Line 249, Address: 0x104f84, Func Offset: 0x64
	// Line 260, Address: 0x104fc0, Func Offset: 0xa0
	// Line 264, Address: 0x104fec, Func Offset: 0xcc
	// Line 266, Address: 0x104ff8, Func Offset: 0xd8
	// Line 268, Address: 0x104ffc, Func Offset: 0xdc
	// Func End, Address: 0x105018, Func Offset: 0xf8
}

// 
// Start address: 0x105020
int shCharacterHumanEDIAnimeSetP(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 280, Address: 0x105020, Func Offset: 0
	// Line 283, Address: 0x105038, Func Offset: 0x18
	// Line 285, Address: 0x105044, Func Offset: 0x24
	// Line 288, Address: 0x105064, Func Offset: 0x44
	// Line 290, Address: 0x105090, Func Offset: 0x70
	// Line 292, Address: 0x1050a0, Func Offset: 0x80
	// Line 294, Address: 0x1050a8, Func Offset: 0x88
	// Line 302, Address: 0x1050b8, Func Offset: 0x98
	// Line 303, Address: 0x1050d4, Func Offset: 0xb4
	// Line 311, Address: 0x1050fc, Func Offset: 0xdc
	// Line 313, Address: 0x105108, Func Offset: 0xe8
	// Line 315, Address: 0x10510c, Func Offset: 0xec
	// Func End, Address: 0x105124, Func Offset: 0x104
}

