typedef struct SubCharacter;
typedef struct _anon0;
typedef struct shSkelton;
typedef struct _AnimeInfo;
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
typedef void(*type_7)(SubCharacter*);
typedef void(*type_13)(SubCharacter*);

typedef unsigned char type_0[34];
typedef _AnimeInfo type_1[3];
typedef float type_2[4];
typedef float type_3[4][4];
typedef unsigned char type_4[10];
typedef int type_6[1];
typedef float type_8[4];
typedef shAttackInfo type_9[46];
typedef unsigned char type_10[4];
typedef _AnimeInfo type_11[1];
typedef unsigned char type_12[10];
typedef float type_14[4];
typedef unsigned char type_15[13];

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

	void EnemyBOSFunction();
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
_AnimeInfo bos_anim[3];
_AnimeInfo d_bos_anim[1];
int dbos_anime_adr_list[1];
void(*EnemyBOSFunction)(SubCharacter*);

int EnemyBOSInit();
void EnemyBOSFunction();
void shCharacterSetEnemyBOSLow(SubCharacter* scp);
int shCharacterEnemyBOSAnimeSetP(SubCharacter* scp, int anime_id, int comp);

// 
// Start address: 0x21ec80
int EnemyBOSInit()
{
	// Line 55, Address: 0x21ec80, Func Offset: 0
	// Line 57, Address: 0x21ec84, Func Offset: 0x4
	// Line 58, Address: 0x21ec88, Func Offset: 0x8
	// Func End, Address: 0x21ec94, Func Offset: 0x14
}

// 
// Start address: 0x21eca0
void SubCharacter::EnemyBOSFunction()
{
	float rot[4];
	float pos[4];
	// Line 70, Address: 0x21eca0, Func Offset: 0
	// Line 74, Address: 0x21ecb0, Func Offset: 0x10
	// Line 80, Address: 0x21ecd0, Func Offset: 0x30
	// Line 81, Address: 0x21ece0, Func Offset: 0x40
	// Line 85, Address: 0x21ecf0, Func Offset: 0x50
	// Line 86, Address: 0x21ecfc, Func Offset: 0x5c
	// Line 88, Address: 0x21ed0c, Func Offset: 0x6c
	// Line 98, Address: 0x21ed20, Func Offset: 0x80
	// Line 102, Address: 0x21ed28, Func Offset: 0x88
	// Line 103, Address: 0x21ed38, Func Offset: 0x98
	// Line 105, Address: 0x21ed48, Func Offset: 0xa8
	// Line 112, Address: 0x21ed54, Func Offset: 0xb4
	// Func End, Address: 0x21ed68, Func Offset: 0xc8
}

// 
// Start address: 0x21ed70
void shCharacterSetEnemyBOSLow(SubCharacter* scp)
{
	// Line 128, Address: 0x21ed70, Func Offset: 0
	// Line 129, Address: 0x21ed7c, Func Offset: 0xc
	// Line 130, Address: 0x21ed90, Func Offset: 0x20
	// Func End, Address: 0x21eda0, Func Offset: 0x30
}

// 
// Start address: 0x21eda0
int shCharacterEnemyBOSAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 174, Address: 0x21eda0, Func Offset: 0
	// Line 177, Address: 0x21edbc, Func Offset: 0x1c
	// Line 178, Address: 0x21eddc, Func Offset: 0x3c
	// Line 179, Address: 0x21edfc, Func Offset: 0x5c
	// Line 186, Address: 0x21ee58, Func Offset: 0xb8
	// Line 188, Address: 0x21ee64, Func Offset: 0xc4
	// Line 190, Address: 0x21ee68, Func Offset: 0xc8
	// Func End, Address: 0x21ee80, Func Offset: 0xe0
}

