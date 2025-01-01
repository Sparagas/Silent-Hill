typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct SubCharacter;
typedef struct _AnimeInfo;
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
typedef void(*type_8)(SubCharacter*);
typedef void(*type_17)(SubCharacter*);

typedef int type_0[21];
typedef unsigned char type_1[20];
typedef _AnimeInfo type_2[21];
typedef shAttackInfo type_3[66];
typedef unsigned char type_4[14];
typedef unsigned char type_6[69];
typedef int type_7[21];
typedef float type_9[4];
typedef float type_10[4][4];
typedef _AnimeInfo type_11[3];
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

	void HumanMRYFunction();
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
_AnimeInfo dmary_anim[21];
_AnimeInfo pmary_anim[3];
int dmary_anime_adr_list[21];
int dmary_clani_adr_list[21];
void(*HumanMRYFunction)(SubCharacter*);

int HumanMRYInit();
void HumanMRYFunction();
void shCharacterSetHumanMRYLow(SubCharacter* scp);
int shCharacterHumanMRYAnimeSet(SubCharacter* scp, int anime_id);
int shCharacterHumanMRYAnimeSetP(SubCharacter* scp, int anime_id);

// 
// Start address: 0x239300
int HumanMRYInit()
{
	// Line 93, Address: 0x239300, Func Offset: 0
	// Line 94, Address: 0x239304, Func Offset: 0x4
	// Func End, Address: 0x23930c, Func Offset: 0xc
}

// 
// Start address: 0x239310
void SubCharacter::HumanMRYFunction()
{
	short id;
	_AnimeInfo* aip;
	// Line 106, Address: 0x239310, Func Offset: 0
	// Line 110, Address: 0x239320, Func Offset: 0x10
	// Line 117, Address: 0x239340, Func Offset: 0x30
	// Line 119, Address: 0x239350, Func Offset: 0x40
	// Line 120, Address: 0x23935c, Func Offset: 0x4c
	// Line 125, Address: 0x239368, Func Offset: 0x58
	// Line 133, Address: 0x239394, Func Offset: 0x84
	// Line 141, Address: 0x2393a0, Func Offset: 0x90
	// Func End, Address: 0x2393b4, Func Offset: 0xa4
}

// 
// Start address: 0x2393c0
void shCharacterSetHumanMRYLow(SubCharacter* scp)
{
	// Line 157, Address: 0x2393c0, Func Offset: 0
	// Line 158, Address: 0x2393c8, Func Offset: 0x8
	// Line 159, Address: 0x2393d8, Func Offset: 0x18
	// Func End, Address: 0x2393e8, Func Offset: 0x28
}

// 
// Start address: 0x2393f0
int shCharacterHumanMRYAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 173, Address: 0x2393f0, Func Offset: 0
	// Line 177, Address: 0x23940c, Func Offset: 0x1c
	// Line 178, Address: 0x239418, Func Offset: 0x28
	// Line 180, Address: 0x239438, Func Offset: 0x48
	// Line 181, Address: 0x239454, Func Offset: 0x64
	// Line 190, Address: 0x239490, Func Offset: 0xa0
	// Line 194, Address: 0x2394bc, Func Offset: 0xcc
	// Line 196, Address: 0x2394c8, Func Offset: 0xd8
	// Line 198, Address: 0x2394cc, Func Offset: 0xdc
	// Func End, Address: 0x2394e8, Func Offset: 0xf8
}

// 
// Start address: 0x2394f0
int shCharacterHumanMRYAnimeSetP(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 210, Address: 0x2394f0, Func Offset: 0
	// Line 213, Address: 0x239508, Func Offset: 0x18
	// Line 214, Address: 0x239514, Func Offset: 0x24
	// Line 216, Address: 0x239534, Func Offset: 0x44
	// Line 217, Address: 0x239550, Func Offset: 0x60
	// Line 226, Address: 0x239578, Func Offset: 0x88
	// Line 228, Address: 0x239584, Func Offset: 0x94
	// Line 230, Address: 0x239588, Func Offset: 0x98
	// Func End, Address: 0x2395a0, Func Offset: 0xb0
}

