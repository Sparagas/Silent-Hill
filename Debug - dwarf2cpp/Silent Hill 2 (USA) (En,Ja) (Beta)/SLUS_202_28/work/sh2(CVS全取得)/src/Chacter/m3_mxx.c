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
typedef struct _AnimeInfo;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _CL_VHIT_WALL;

typedef void(*type_5)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);
typedef void(*type_8)(SubCharacter*);

typedef unsigned char type_0[20];
typedef _AnimeInfo type_1[11];
typedef int type_2[11];
typedef shAttackInfo type_3[66];
typedef unsigned char type_4[14];
typedef unsigned char type_7[69];
typedef float type_9[4];
typedef float type_10[4][4];
typedef int type_11[11];
typedef unsigned char type_12[4];
typedef unsigned char type_13[14];
typedef float type_14[4];
typedef float type_15[4];
typedef unsigned char type_16[97];

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

	void HumanMXXFunction();
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
_AnimeInfo dmxx_anim[11];
int dmxx_anime_adr_list[11];
int dmxx_clani_adr_list[11];
void(*HumanMXXFunction)(SubCharacter*);

int HumanMXXInit(SubCharacter* scp);
void HumanMXXFunction();
void shCharacterSetHumanMXXLow(SubCharacter* scp);

// 
// Start address: 0x2395a0
int HumanMXXInit(SubCharacter* scp)
{
	// Line 71, Address: 0x2395a0, Func Offset: 0
	// Line 72, Address: 0x2395a8, Func Offset: 0x8
	// Line 73, Address: 0x2395b0, Func Offset: 0x10
	// Line 74, Address: 0x2395bc, Func Offset: 0x1c
	// Line 75, Address: 0x2395c0, Func Offset: 0x20
	// Func End, Address: 0x2395d0, Func Offset: 0x30
}

// 
// Start address: 0x2395d0
void SubCharacter::HumanMXXFunction()
{
	short id;
	_AnimeInfo* aip;
	// Line 87, Address: 0x2395d0, Func Offset: 0
	// Line 91, Address: 0x2395e0, Func Offset: 0x10
	// Line 98, Address: 0x239600, Func Offset: 0x30
	// Line 100, Address: 0x239610, Func Offset: 0x40
	// Line 101, Address: 0x23961c, Func Offset: 0x4c
	// Line 106, Address: 0x239628, Func Offset: 0x58
	// Line 114, Address: 0x239658, Func Offset: 0x88
	// Line 122, Address: 0x239664, Func Offset: 0x94
	// Func End, Address: 0x239678, Func Offset: 0xa8
}

// 
// Start address: 0x239680
void shCharacterSetHumanMXXLow(SubCharacter* scp)
{
	// Line 138, Address: 0x239680, Func Offset: 0
	// Line 139, Address: 0x239688, Func Offset: 0x8
	// Line 140, Address: 0x239698, Func Offset: 0x18
	// Func End, Address: 0x2396a8, Func Offset: 0x28
}

