typedef struct SubCharacter;
typedef struct _AnimeInfo;
typedef struct shSkelton;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct _anon0;
typedef union _anon1;
typedef struct _CL_VHIT_RESULT;
typedef union _anon2;
typedef struct _anon3;

typedef void(*type_0)(SubCharacter*);
typedef void(*type_2)(SubCharacter*);
typedef void(*type_10)(SubCharacter*);

typedef unsigned char type_1[69];
typedef int type_3[3];
typedef unsigned char type_4[4];
typedef float type_5[4];
typedef _AnimeInfo type_6[1];
typedef unsigned char type_7[14];
typedef unsigned char type_8[97];
typedef float type_9[4];
typedef unsigned char type_11[20];
typedef _AnimeInfo type_12[3];
typedef float type_13[4];
typedef float type_14[4][4];
typedef shAttackInfo type_15[66];
typedef unsigned char type_16[14];

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
	_anon0 pos;
	_anon0 rot;
	_anon0 pos_spd;
	_anon0 rot_spd;
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

	void HumanINUFunction();
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
	_anon0 src_t;
	_anon3 des_m;
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
	_anon1 hit_check;
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

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon2 hobj;
};

union _anon2
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _anon3
{
	float d[4][4];
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo inu_anim[1];
_AnimeInfo d_inu_anim[3];
int dinu_anime_adr_list[3];
void(*HumanINUFunction)(SubCharacter*);

void HumanINUFunction();
void shCharacterSetHumanINULow(SubCharacter* scp);
int shCharacterHumanINUAnimeSet(SubCharacter* scp, int anime_id);
int shCharacterHumanINUAnimeSetP(SubCharacter* scp, int anime_id, int comp);

// 
// Start address: 0x26f4f0
void SubCharacter::HumanINUFunction()
{
	float rot[4];
	float pos[4];
	// Line 69, Address: 0x26f4f0, Func Offset: 0
	// Line 73, Address: 0x26f500, Func Offset: 0x10
	// Line 79, Address: 0x26f520, Func Offset: 0x30
	// Line 80, Address: 0x26f52c, Func Offset: 0x3c
	// Line 82, Address: 0x26f538, Func Offset: 0x48
	// Line 84, Address: 0x26f548, Func Offset: 0x58
	// Line 86, Address: 0x26f558, Func Offset: 0x68
	// Line 91, Address: 0x26f56c, Func Offset: 0x7c
	// Line 92, Address: 0x26f578, Func Offset: 0x88
	// Line 94, Address: 0x26f584, Func Offset: 0x94
	// Line 102, Address: 0x26f590, Func Offset: 0xa0
	// Func End, Address: 0x26f5a4, Func Offset: 0xb4
}

// 
// Start address: 0x26f5b0
void shCharacterSetHumanINULow(SubCharacter* scp)
{
	// Line 118, Address: 0x26f5b0, Func Offset: 0
	// Line 119, Address: 0x26f5b8, Func Offset: 0x8
	// Line 120, Address: 0x26f5c8, Func Offset: 0x18
	// Func End, Address: 0x26f5d8, Func Offset: 0x28
}

// 
// Start address: 0x26f5e0
int shCharacterHumanINUAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 132, Address: 0x26f5e0, Func Offset: 0
	// Line 135, Address: 0x26f5fc, Func Offset: 0x1c
	// Line 136, Address: 0x26f618, Func Offset: 0x38
	// Line 137, Address: 0x26f628, Func Offset: 0x48
	// Line 138, Address: 0x26f644, Func Offset: 0x64
	// Line 146, Address: 0x26f680, Func Offset: 0xa0
	// Line 148, Address: 0x26f68c, Func Offset: 0xac
	// Line 150, Address: 0x26f690, Func Offset: 0xb0
	// Func End, Address: 0x26f6ac, Func Offset: 0xcc
}

// 
// Start address: 0x26f6b0
int shCharacterHumanINUAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 163, Address: 0x26f6b0, Func Offset: 0
	// Line 166, Address: 0x26f6d0, Func Offset: 0x20
	// Line 167, Address: 0x26f6ec, Func Offset: 0x3c
	// Line 168, Address: 0x26f708, Func Offset: 0x58
	// Line 175, Address: 0x26f750, Func Offset: 0xa0
	// Line 177, Address: 0x26f75c, Func Offset: 0xac
	// Line 179, Address: 0x26f760, Func Offset: 0xb0
	// Func End, Address: 0x26f77c, Func Offset: 0xcc
}

