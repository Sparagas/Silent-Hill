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
typedef struct shBattleFight;
typedef struct shStayObjectSettingData;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shItemScreenObjectSettingData;
typedef struct shBattleInfo;
typedef struct _CL_VHIT_WALL;

typedef void(*type_2)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);
typedef void(*type_10)(SubCharacter*);

typedef shItemScreenObjectSettingData type_0[58];
typedef unsigned char type_1[20];
typedef shAttackInfo type_3[66];
typedef unsigned char type_4[14];
typedef shStayObjectSettingData type_5[19];
typedef float type_7[4];
typedef float type_8[4][4];
typedef unsigned char type_9[69];
typedef unsigned char type_11[4];
typedef unsigned char type_12[14];
typedef float type_13[4];
typedef float type_14[4];
typedef unsigned char type_15[97];

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

	void StayObjectFunction();
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

struct shStayObjectSettingData
{
	int chara_id;
	int bg_name_id;
	int index;
	_anon2 scale;
	_anon2 rot;
	_anon2 trans;
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
shStayObjectSettingData stay_obj_data[19];
shItemScreenObjectSettingData item_screen_obj_data[58];
void(*StayObjectFunction)(SubCharacter*);

int shCharacterStayObjectInit(SubCharacter* scp);
void StayObjectFunction();
void shCharacterSetStayObjectLow(SubCharacter* scp);

// 
// Start address: 0x102e80
int shCharacterStayObjectInit(SubCharacter* scp)
{
	// Line 49, Address: 0x102e80, Func Offset: 0
	// Line 50, Address: 0x102e88, Func Offset: 0x8
	// Line 51, Address: 0x102e94, Func Offset: 0x14
	// Line 52, Address: 0x102e98, Func Offset: 0x18
	// Func End, Address: 0x102ea8, Func Offset: 0x28
}

// 
// Start address: 0x102eb0
void SubCharacter::StayObjectFunction()
{
	float scale;
	// Line 64, Address: 0x102eb0, Func Offset: 0
	// Line 72, Address: 0x102ec0, Func Offset: 0x10
	// Line 74, Address: 0x102ee0, Func Offset: 0x30
	// Line 94, Address: 0x102ee8, Func Offset: 0x38
	// Line 95, Address: 0x102efc, Func Offset: 0x4c
	// Line 123, Address: 0x102f18, Func Offset: 0x68
	// Line 224, Address: 0x102f24, Func Offset: 0x74
	// Func End, Address: 0x102f38, Func Offset: 0x88
}

// 
// Start address: 0x102f40
void shCharacterSetStayObjectLow(SubCharacter* scp)
{
	// Line 239, Address: 0x102f40, Func Offset: 0
	// Line 240, Address: 0x102f48, Func Offset: 0x8
	// Line 241, Address: 0x102f58, Func Offset: 0x18
	// Func End, Address: 0x102f68, Func Offset: 0x28
}

