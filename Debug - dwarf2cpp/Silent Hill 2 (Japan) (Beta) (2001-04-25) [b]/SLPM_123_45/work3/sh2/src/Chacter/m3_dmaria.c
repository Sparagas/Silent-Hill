typedef struct _AnimeInfo;
typedef struct _anon0;
typedef struct shSkelton;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct SubCharacter;
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

typedef void(*type_6)(SubCharacter*);
typedef void(*type_8)(SubCharacter*);
typedef void(*type_14)(SubCharacter*);

typedef unsigned char type_0[13];
typedef unsigned char type_1[34];
typedef float type_2[4];
typedef float type_3[4][4];
typedef _AnimeInfo type_4[18];
typedef unsigned char type_5[10];
typedef float type_7[4];
typedef int type_9[18];
typedef shAttackInfo type_10[46];
typedef unsigned char type_11[4];
typedef unsigned char type_12[10];
typedef int type_13[18];
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

	void HumanDMARFunction();
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
_AnimeInfo dmaria_anim[18];
int dmaria_anime_adr_list[18];
int dmaria_clani_adr_list[18];
void(*HumanDMARFunction)(SubCharacter*);

int HumanDMARInit(SubCharacter* scp);
void HumanDMARFunction();
void shCharacterSetHumanDMARLow(SubCharacter* scp);
int shCharacterHumanDMARAnimeSet(SubCharacter* scp, int anime_id);

// 
// Start address: 0x1059c0
int HumanDMARInit(SubCharacter* scp)
{
	// Line 89, Address: 0x1059c0, Func Offset: 0
	// Line 90, Address: 0x1059cc, Func Offset: 0xc
	// Line 91, Address: 0x1059d8, Func Offset: 0x18
	// Line 92, Address: 0x1059e8, Func Offset: 0x28
	// Line 93, Address: 0x1059ec, Func Offset: 0x2c
	// Func End, Address: 0x1059fc, Func Offset: 0x3c
}

// 
// Start address: 0x105a00
void SubCharacter::HumanDMARFunction()
{
	_AnimeInfo* aip;
	// Line 105, Address: 0x105a00, Func Offset: 0
	// Line 109, Address: 0x105a10, Func Offset: 0x10
	// Line 114, Address: 0x105a34, Func Offset: 0x34
	// Line 115, Address: 0x105a54, Func Offset: 0x54
	// Line 119, Address: 0x105a60, Func Offset: 0x60
	// Line 120, Address: 0x105a68, Func Offset: 0x68
	// Line 128, Address: 0x105a94, Func Offset: 0x94
	// Line 134, Address: 0x105aa4, Func Offset: 0xa4
	// Func End, Address: 0x105ab8, Func Offset: 0xb8
}

// 
// Start address: 0x105ac0
void shCharacterSetHumanDMARLow(SubCharacter* scp)
{
	// Line 150, Address: 0x105ac0, Func Offset: 0
	// Line 151, Address: 0x105acc, Func Offset: 0xc
	// Line 152, Address: 0x105ae0, Func Offset: 0x20
	// Func End, Address: 0x105af0, Func Offset: 0x30
}

// 
// Start address: 0x105af0
int shCharacterHumanDMARAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 166, Address: 0x105af0, Func Offset: 0
	// Line 169, Address: 0x105b04, Func Offset: 0x14
	// Line 172, Address: 0x105b24, Func Offset: 0x34
	// Line 173, Address: 0x105b44, Func Offset: 0x54
	// Line 188, Address: 0x105b90, Func Offset: 0xa0
	// Line 192, Address: 0x105bc8, Func Offset: 0xd8
	// Line 194, Address: 0x105bd4, Func Offset: 0xe4
	// Line 196, Address: 0x105bd8, Func Offset: 0xe8
	// Func End, Address: 0x105bec, Func Offset: 0xfc
}

