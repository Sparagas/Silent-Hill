typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon0;
typedef enum _MARIA_SUB_STATUS : unsigned char;
typedef struct shSkelton;
typedef struct SubCharacter;
typedef struct SubObject;
typedef struct _anon1;
typedef struct shBattleFight;
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
typedef struct shMariaWork;
typedef enum _MARIA_MAIN_STATUS : unsigned char;

typedef void(*type_7)(SubCharacter*);
typedef void(*type_8)(SubCharacter*);
typedef void(*type_10)(SubCharacter*);
typedef void(*type_15)(SubCharacter*);
typedef void(*type_17)(SubCharacter*);

typedef float type_0[4][5];
typedef unsigned char type_1[34];
typedef float type_2[4][2];
typedef _AnimeInfo type_3[36];
typedef float type_4[4];
typedef float type_5[4][4];
typedef unsigned char type_6[10];
typedef float type_9[4];
typedef shAttackInfo type_11[46];
typedef unsigned char type_12[4];
typedef unsigned int type_13[8];
typedef unsigned char type_14[10];
typedef float type_16[4];
typedef unsigned char type_18[13];

struct _CL_HITPOLY_COLUMN
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4][2];
};

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

enum _MARIA_SUB_STATUS : unsigned char
{
	MAR_SUB_ST_STAND,
	MAR_SUB_ST_RELAX,
	MAR_SUB_ST_RELAX_OFF,
	MAR_SUB_ST_AFRAID,
	MAR_SUB_ST_TIRED,
	MAR_SUB_ST_WALK,
	MAR_SUB_ST_RUN,
	MAR_SUB_ST_DAMAGE
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

	void HumanMARFunction();
};

struct SubObject
{
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
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
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

struct shMariaWork
{
	SubCharacter* mar_p;
	_anon0 pos;
	_anon0 rot;
	float to_target;
	float tgt_pos[4][5];
	int tgt_pointer;
	_MARIA_MAIN_STATUS main_status_now;
	_MARIA_MAIN_STATUS main_status_prev;
	_MARIA_SUB_STATUS sub_status_now;
	_MARIA_SUB_STATUS sub_status_prev;
	unsigned int sub_st_flg;
	unsigned int anime_st_flg;
	unsigned int anime_pause;
	_CL_VHIT_RESULT r_forward;
	_CL_VHIT_RESULT l_forward;
	_CL_VHIT_RESULT forward;
	_CL_VHIT_RESULT ft_floor;
	_CL_VHIT_RESULT r_foot;
	_CL_VHIT_RESULT l_foot;
	_CL_HITPOLY_COLUMN column_mov;
	_CL_HITPOLY_COLUMN column_atk;
	float col_mov_z_hosei;
	float col_atk_z_hosei;
	_anon0 tgt_neck_angle;
	SubCharacter* look_tgt;
	SubObject* look_obj;
	float dist_to_jms;
	float hp_recover;
	float stand_time;
	float move_time;
	float muteki_time;
	float relax_time;
	float afraid_time;
	int tired;
	int tired_max;
	unsigned char relax_flag;
	unsigned char no_damage;
	unsigned char dead;
	unsigned short damage_no;
	unsigned char enemy_around;
	unsigned char enemy_atk_area;
	unsigned char look_jms;
	unsigned char random_status;
};

enum _MARIA_MAIN_STATUS : unsigned char
{
	MAR_MAIN_ST_STAND,
	MAR_MAIN_ST_CLOSE_TO,
	MAR_MAIN_ST_ALERT,
	MAR_MAIN_ST_DISCOVER,
	MAR_MAIN_ST_RECOVER,
	MAR_MAIN_ST_BOREDOM,
	MAR_MAIN_ST_DAMAGED
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
_AnimeInfo pmaria_anim[36];
unsigned int pmaria_sub_status_flag[8];
shMariaWork sh2mar;
void(*HumanMARFunction)(SubCharacter*);

int HumanMARInit(SubCharacter* scp);
void HumanMARFunction();
void shCharacterSetHumanMARLow(SubCharacter* scp);
int shCharacterHumanMARAnimeSetP(SubCharacter* scp, int anime_id, int comp);
void shCharacterMariaWorkInit();
void shCharacterMariaWorkInitAtGameStart();

// 
// Start address: 0x21e690
int HumanMARInit(SubCharacter* scp)
{
	// Line 58, Address: 0x21e690, Func Offset: 0
	// Line 60, Address: 0x21e69c, Func Offset: 0xc
	// Line 62, Address: 0x21e6ac, Func Offset: 0x1c
	// Line 64, Address: 0x21e6bc, Func Offset: 0x2c
	// Line 65, Address: 0x21e6c0, Func Offset: 0x30
	// Func End, Address: 0x21e6d0, Func Offset: 0x40
}

// 
// Start address: 0x21e6d0
void SubCharacter::HumanMARFunction()
{
	float rot[4];
	float pos[4];
	// Line 77, Address: 0x21e6d0, Func Offset: 0
	// Line 85, Address: 0x21e6e0, Func Offset: 0x10
	// Line 91, Address: 0x21e700, Func Offset: 0x30
	// Line 92, Address: 0x21e710, Func Offset: 0x40
	// Line 96, Address: 0x21e720, Func Offset: 0x50
	// Line 98, Address: 0x21e72c, Func Offset: 0x5c
	// Line 102, Address: 0x21e740, Func Offset: 0x70
	// Line 104, Address: 0x21e74c, Func Offset: 0x7c
	// Line 106, Address: 0x21e758, Func Offset: 0x88
	// Line 113, Address: 0x21e760, Func Offset: 0x90
	// Line 114, Address: 0x21e76c, Func Offset: 0x9c
	// Line 115, Address: 0x21e778, Func Offset: 0xa8
	// Line 116, Address: 0x21e784, Func Offset: 0xb4
	// Line 117, Address: 0x21e790, Func Offset: 0xc0
	// Line 118, Address: 0x21e79c, Func Offset: 0xcc
	// Line 119, Address: 0x21e7a8, Func Offset: 0xd8
	// Line 132, Address: 0x21e7b0, Func Offset: 0xe0
	// Func End, Address: 0x21e7c4, Func Offset: 0xf4
}

// 
// Start address: 0x21e7d0
void shCharacterSetHumanMARLow(SubCharacter* scp)
{
	// Line 148, Address: 0x21e7d0, Func Offset: 0
	// Line 149, Address: 0x21e7dc, Func Offset: 0xc
	// Line 151, Address: 0x21e7f0, Func Offset: 0x20
	// Line 152, Address: 0x21e7f8, Func Offset: 0x28
	// Line 153, Address: 0x21e804, Func Offset: 0x34
	// Line 154, Address: 0x21e80c, Func Offset: 0x3c
	// Func End, Address: 0x21e81c, Func Offset: 0x4c
}

// 
// Start address: 0x21e820
int shCharacterHumanMARAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 168, Address: 0x21e820, Func Offset: 0
	// Line 171, Address: 0x21e83c, Func Offset: 0x1c
	// Line 172, Address: 0x21e85c, Func Offset: 0x3c
	// Line 173, Address: 0x21e87c, Func Offset: 0x5c
	// Line 180, Address: 0x21e8d8, Func Offset: 0xb8
	// Line 182, Address: 0x21e8e4, Func Offset: 0xc4
	// Line 184, Address: 0x21e8e8, Func Offset: 0xc8
	// Func End, Address: 0x21e900, Func Offset: 0xe0
}

// 
// Start address: 0x21e900
void shCharacterMariaWorkInit()
{
	// Line 194, Address: 0x21e900, Func Offset: 0
	// Line 195, Address: 0x21e908, Func Offset: 0x8
	// Line 196, Address: 0x21e91c, Func Offset: 0x1c
	// Func End, Address: 0x21e92c, Func Offset: 0x2c
}

// 
// Start address: 0x21e930
void shCharacterMariaWorkInitAtGameStart()
{
	// Line 205, Address: 0x21e930, Func Offset: 0
	// Line 208, Address: 0x21e938, Func Offset: 0x8
	// Line 210, Address: 0x21e958, Func Offset: 0x28
	// Line 214, Address: 0x21e964, Func Offset: 0x34
	// Line 215, Address: 0x21e96c, Func Offset: 0x3c
	// Line 216, Address: 0x21e974, Func Offset: 0x44
	// Line 217, Address: 0x21e97c, Func Offset: 0x4c
	// Line 220, Address: 0x21e984, Func Offset: 0x54
	// Line 221, Address: 0x21e998, Func Offset: 0x68
	// Line 222, Address: 0x21e9ac, Func Offset: 0x7c
	// Line 226, Address: 0x21e9c0, Func Offset: 0x90
	// Line 227, Address: 0x21e9d8, Func Offset: 0xa8
	// Line 228, Address: 0x21e9ec, Func Offset: 0xbc
	// Line 229, Address: 0x21ea00, Func Offset: 0xd0
	// Line 231, Address: 0x21ea18, Func Offset: 0xe8
	// Func End, Address: 0x21ea28, Func Offset: 0xf8
}

