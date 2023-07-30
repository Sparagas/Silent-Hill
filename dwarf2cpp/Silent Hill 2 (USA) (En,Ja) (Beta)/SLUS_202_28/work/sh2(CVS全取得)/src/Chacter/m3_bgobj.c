typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _AnimeInfo;
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
typedef struct shItemScreenObjectSettingData;
typedef struct shBattleInfo;
typedef struct _CL_VHIT_WALL;

typedef void(*type_6)(SubCharacter*);
typedef void(*type_8)(SubCharacter*);
typedef void(*type_13)(SubCharacter*);
typedef void(*type_18)(SubCharacter*);

typedef int type_0[247];
typedef unsigned char type_1[20];
typedef shItemScreenObjectSettingData type_2[58];
typedef shAttackInfo type_3[66];
typedef unsigned char type_4[14];
typedef _AnimeInfo type_5[6];
typedef unsigned char type_7[69];
typedef float type_9[4];
typedef float type_10[4][4];
typedef unsigned char type_11[4];
typedef unsigned char type_12[14];
typedef float type_14[4];
typedef float type_15[4];
typedef unsigned char type_16[97];
typedef _AnimeInfo type_17[247];

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

	void ObjectFunction();
	void RObjectFunction();
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

struct shItemScreenObjectSettingData
{
	int chara_id;
	float scale;
	_anon2 rot;
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
shItemScreenObjectSettingData item_screen_obj_data[58];
_AnimeInfo bg_obj_anim[247];
_AnimeInfo p_bg_obj_anim[6];
int obj_anime_adr_list[247];
void(*ObjectFunction)(SubCharacter*);
float wall_pos;
int mirror_mode;
void(*RObjectFunction)(SubCharacter*);

int ObjectInit(SubCharacter* scp);
void ObjectFunction();
void shCharacterSetObjectLow(SubCharacter* scp);
int shCharacterObjectAnimeSet(SubCharacter* scp, int anime_id);
int shCharacterObjectAnimeSetP(SubCharacter* scp, int anime_id);
int RObjectInit(SubCharacter* scp);
void RObjectFunction();
void shCharacterSetRObjectLow(SubCharacter* scp);

// 
// Start address: 0x103f20
int ObjectInit(SubCharacter* scp)
{
	// Line 340, Address: 0x103f20, Func Offset: 0
	// Line 341, Address: 0x103f28, Func Offset: 0x8
	// Line 342, Address: 0x103f34, Func Offset: 0x14
	// Line 343, Address: 0x103f38, Func Offset: 0x18
	// Func End, Address: 0x103f48, Func Offset: 0x28
}

// 
// Start address: 0x103f50
void SubCharacter::ObjectFunction()
{
	float scale;
	short id;
	// Line 376, Address: 0x103f50, Func Offset: 0
	// Line 381, Address: 0x103f60, Func Offset: 0x10
	// Line 386, Address: 0x103f80, Func Offset: 0x30
	// Line 388, Address: 0x103f88, Func Offset: 0x38
	// Line 392, Address: 0x103f98, Func Offset: 0x48
	// Line 404, Address: 0x103fa8, Func Offset: 0x58
	// Line 405, Address: 0x103fbc, Func Offset: 0x6c
	// Line 407, Address: 0x103fc8, Func Offset: 0x78
	// Line 408, Address: 0x103fd0, Func Offset: 0x80
	// Line 529, Address: 0x103fdc, Func Offset: 0x8c
	// Line 531, Address: 0x103fe8, Func Offset: 0x98
	// Line 533, Address: 0x103ff0, Func Offset: 0xa0
	// Line 536, Address: 0x10400c, Func Offset: 0xbc
	// Func End, Address: 0x104020, Func Offset: 0xd0
}

// 
// Start address: 0x104020
void shCharacterSetObjectLow(SubCharacter* scp)
{
	// Line 551, Address: 0x104020, Func Offset: 0
	// Line 552, Address: 0x104028, Func Offset: 0x8
	// Line 553, Address: 0x104038, Func Offset: 0x18
	// Func End, Address: 0x104048, Func Offset: 0x28
}

// 
// Start address: 0x104050
int shCharacterObjectAnimeSet(SubCharacter* scp, int anime_id)
{
	int test;
	_AnimeInfo* aip;
	short id;
	// Line 566, Address: 0x104050, Func Offset: 0
	// Line 572, Address: 0x10406c, Func Offset: 0x1c
	// Line 573, Address: 0x10407c, Func Offset: 0x2c
	// Line 574, Address: 0x10408c, Func Offset: 0x3c
	// Line 575, Address: 0x10409c, Func Offset: 0x4c
	// Line 577, Address: 0x1040a4, Func Offset: 0x54
	// Line 580, Address: 0x1040bc, Func Offset: 0x6c
	// Line 581, Address: 0x1040d8, Func Offset: 0x88
	// Line 589, Address: 0x104114, Func Offset: 0xc4
	// Line 591, Address: 0x104120, Func Offset: 0xd0
	// Line 593, Address: 0x104124, Func Offset: 0xd4
	// Func End, Address: 0x104140, Func Offset: 0xf0
}

// 
// Start address: 0x104140
int shCharacterObjectAnimeSetP(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	short id;
	// Line 612, Address: 0x104140, Func Offset: 0
	// Line 619, Address: 0x10415c, Func Offset: 0x1c
	// Line 620, Address: 0x10416c, Func Offset: 0x2c
	// Line 621, Address: 0x10417c, Func Offset: 0x3c
	// Line 623, Address: 0x10418c, Func Offset: 0x4c
	// Line 624, Address: 0x10419c, Func Offset: 0x5c
	// Line 625, Address: 0x1041ac, Func Offset: 0x6c
	// Line 626, Address: 0x1041b4, Func Offset: 0x74
	// Line 628, Address: 0x1041c0, Func Offset: 0x80
	// Line 629, Address: 0x1041d8, Func Offset: 0x98
	// Line 630, Address: 0x1041f4, Func Offset: 0xb4
	// Line 638, Address: 0x10421c, Func Offset: 0xdc
	// Line 640, Address: 0x104228, Func Offset: 0xe8
	// Line 642, Address: 0x10422c, Func Offset: 0xec
	// Func End, Address: 0x104248, Func Offset: 0x108
}

// 
// Start address: 0x104250
int RObjectInit(SubCharacter* scp)
{
	// Line 669, Address: 0x104250, Func Offset: 0
	// Line 670, Address: 0x104260, Func Offset: 0x10
	// Line 672, Address: 0x10426c, Func Offset: 0x1c
	// Line 675, Address: 0x104274, Func Offset: 0x24
	// Line 677, Address: 0x10429c, Func Offset: 0x4c
	// Line 678, Address: 0x1042a4, Func Offset: 0x54
	// Line 679, Address: 0x1042b4, Func Offset: 0x64
	// Line 681, Address: 0x1042bc, Func Offset: 0x6c
	// Line 682, Address: 0x1042c8, Func Offset: 0x78
	// Line 685, Address: 0x1042d8, Func Offset: 0x88
	// Line 686, Address: 0x1042dc, Func Offset: 0x8c
	// Func End, Address: 0x1042f0, Func Offset: 0xa0
}

// 
// Start address: 0x1042f0
void SubCharacter::RObjectFunction()
{
	SubCharacter* scp;
	// Line 695, Address: 0x1042f0, Func Offset: 0
	// Line 698, Address: 0x104300, Func Offset: 0x10
	// Line 700, Address: 0x104320, Func Offset: 0x30
	// Line 701, Address: 0x104328, Func Offset: 0x38
	// Line 702, Address: 0x104334, Func Offset: 0x44
	// Line 705, Address: 0x10433c, Func Offset: 0x4c
	// Line 706, Address: 0x104358, Func Offset: 0x68
	// Line 710, Address: 0x104360, Func Offset: 0x70
	// Line 712, Address: 0x104390, Func Offset: 0xa0
	// Line 713, Address: 0x1043a8, Func Offset: 0xb8
	// Line 714, Address: 0x1043b0, Func Offset: 0xc0
	// Line 715, Address: 0x1043b8, Func Offset: 0xc8
	// Line 716, Address: 0x1043c4, Func Offset: 0xd4
	// Line 718, Address: 0x1043cc, Func Offset: 0xdc
	// Line 724, Address: 0x1043d4, Func Offset: 0xe4
	// Line 726, Address: 0x1043ec, Func Offset: 0xfc
	// Line 727, Address: 0x1043f4, Func Offset: 0x104
	// Line 728, Address: 0x1043fc, Func Offset: 0x10c
	// Line 729, Address: 0x104408, Func Offset: 0x118
	// Line 731, Address: 0x104410, Func Offset: 0x120
	// Line 732, Address: 0x104418, Func Offset: 0x128
	// Line 733, Address: 0x104420, Func Offset: 0x130
	// Line 734, Address: 0x104438, Func Offset: 0x148
	// Line 735, Address: 0x104454, Func Offset: 0x164
	// Line 736, Address: 0x10446c, Func Offset: 0x17c
	// Line 737, Address: 0x104474, Func Offset: 0x184
	// Line 744, Address: 0x10448c, Func Offset: 0x19c
	// Func End, Address: 0x1044a0, Func Offset: 0x1b0
}

// 
// Start address: 0x1044a0
void shCharacterSetRObjectLow(SubCharacter* scp)
{
	// Line 759, Address: 0x1044a0, Func Offset: 0
	// Line 760, Address: 0x1044a8, Func Offset: 0x8
	// Line 761, Address: 0x1044b8, Func Offset: 0x18
	// Func End, Address: 0x1044c8, Func Offset: 0x28
}

