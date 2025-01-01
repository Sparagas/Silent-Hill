typedef struct _anon0;
typedef struct shSkelton;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct SubCharacter;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _AnimeInfo;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;

typedef void(*type_6)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_8)(SubCharacter*);

typedef int type_0[6];
typedef unsigned char type_1[34];
typedef float type_2[4];
typedef _AnimeInfo type_3[6];
typedef float type_4[4][4];
typedef unsigned char type_5[10];
typedef float type_9[4];
typedef shAttackInfo type_10[46];
typedef unsigned char type_11[4];
typedef int type_12[5];
typedef unsigned char type_13[10];
typedef float type_14[4];
typedef unsigned char type_15[13];

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

	void HumanEDIFunction();
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
_AnimeInfo eddie_anim[6];
int deddie_anime_adr_list[6];
int deddie_clani_adr_list[5];
void(*HumanEDIFunction)(SubCharacter*);

int HumanEDIInit(SubCharacter* scp);
void HumanEDIFunction();
void shCharacterSetHumanEDILow(SubCharacter* scp);
int shCharacterHumanEDIAnimeSet(SubCharacter* scp, int anime_id);

// 
// Start address: 0x105bf0
int HumanEDIInit(SubCharacter* scp)
{
	// Line 67, Address: 0x105bf0, Func Offset: 0
	// Line 68, Address: 0x105bfc, Func Offset: 0xc
	// Line 69, Address: 0x105c08, Func Offset: 0x18
	// Line 70, Address: 0x105c18, Func Offset: 0x28
	// Line 71, Address: 0x105c1c, Func Offset: 0x2c
	// Func End, Address: 0x105c2c, Func Offset: 0x3c
}

// 
// Start address: 0x105c30
void SubCharacter::HumanEDIFunction()
{
	short id;
	_AnimeInfo* aip;
	// Line 83, Address: 0x105c30, Func Offset: 0
	// Line 87, Address: 0x105c44, Func Offset: 0x14
	// Line 94, Address: 0x105c68, Func Offset: 0x38
	// Line 96, Address: 0x105c7c, Func Offset: 0x4c
	// Line 97, Address: 0x105c90, Func Offset: 0x60
	// Line 101, Address: 0x105c9c, Func Offset: 0x6c
	// Line 102, Address: 0x105ca4, Func Offset: 0x74
	// Line 110, Address: 0x105cd0, Func Offset: 0xa0
	// Line 118, Address: 0x105ce0, Func Offset: 0xb0
	// Func End, Address: 0x105cf8, Func Offset: 0xc8
}

// 
// Start address: 0x105d00
void shCharacterSetHumanEDILow(SubCharacter* scp)
{
	// Line 134, Address: 0x105d00, Func Offset: 0
	// Line 135, Address: 0x105d0c, Func Offset: 0xc
	// Line 136, Address: 0x105d20, Func Offset: 0x20
	// Func End, Address: 0x105d30, Func Offset: 0x30
}

// 
// Start address: 0x105d30
int shCharacterHumanEDIAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	short id;
	// Line 150, Address: 0x105d30, Func Offset: 0
	// Line 154, Address: 0x105d48, Func Offset: 0x18
	// Line 156, Address: 0x105d5c, Func Offset: 0x2c
	// Line 159, Address: 0x105d70, Func Offset: 0x40
	// Line 160, Address: 0x105d90, Func Offset: 0x60
	// Line 171, Address: 0x105ddc, Func Offset: 0xac
	// Line 175, Address: 0x105e14, Func Offset: 0xe4
	// Line 177, Address: 0x105e20, Func Offset: 0xf0
	// Line 179, Address: 0x105e24, Func Offset: 0xf4
	// Func End, Address: 0x105e3c, Func Offset: 0x10c
}

