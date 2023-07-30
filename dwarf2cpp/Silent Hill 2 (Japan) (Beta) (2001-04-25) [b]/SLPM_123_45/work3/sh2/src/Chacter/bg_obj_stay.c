typedef struct _anon0;
typedef struct shSkelton;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct SubCharacter;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct shAttackInfo;
typedef struct shStayObjectSettingData;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct shItemScreenObjectSettingData;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;

typedef void(*type_6)(SubCharacter*);
typedef void(*type_8)(SubCharacter*);
typedef void(*type_9)(SubCharacter*);

typedef unsigned char type_0[13];
typedef unsigned char type_1[34];
typedef shItemScreenObjectSettingData type_2[58];
typedef float type_3[4];
typedef float type_4[4][4];
typedef unsigned char type_5[10];
typedef float type_7[4];
typedef shAttackInfo type_10[46];
typedef unsigned char type_11[4];
typedef shStayObjectSettingData type_12[19];
typedef unsigned char type_13[10];
typedef float type_14[4];

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

struct shBattleShot
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

	void StayObjectFunction();
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

struct shStayObjectSettingData
{
	int chara_id;
	int bg_name_id;
	int index;
	_anon0 scale;
	_anon0 rot;
	_anon0 trans;
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

struct shItemScreenObjectSettingData
{
	int chara_id;
	float scale;
	_anon0 rot;
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
shStayObjectSettingData stay_obj_data[19];
shItemScreenObjectSettingData item_screen_obj_data[58];
void(*StayObjectFunction)(SubCharacter*);

int shCharacterStayObjectInit(SubCharacter* scp);
void StayObjectFunction();
void shCharacterSetStayObjectLow(SubCharacter* scp);

// 
// Start address: 0x103aa0
int shCharacterStayObjectInit(SubCharacter* scp)
{
	// Line 49, Address: 0x103aa0, Func Offset: 0
	// Line 50, Address: 0x103aac, Func Offset: 0xc
	// Line 51, Address: 0x103abc, Func Offset: 0x1c
	// Line 52, Address: 0x103ac0, Func Offset: 0x20
	// Func End, Address: 0x103ad0, Func Offset: 0x30
}

// 
// Start address: 0x103ad0
void SubCharacter::StayObjectFunction()
{
	// Line 64, Address: 0x103ad0, Func Offset: 0
	// Line 71, Address: 0x103adc, Func Offset: 0xc
	// Line 73, Address: 0x103b00, Func Offset: 0x30
	// Line 80, Address: 0x103b0c, Func Offset: 0x3c
	// Line 81, Address: 0x103b2c, Func Offset: 0x5c
	// Line 82, Address: 0x103b40, Func Offset: 0x70
	// Line 110, Address: 0x103b58, Func Offset: 0x88
	// Line 211, Address: 0x103b68, Func Offset: 0x98
	// Func End, Address: 0x103b78, Func Offset: 0xa8
}

// 
// Start address: 0x103b80
void shCharacterSetStayObjectLow(SubCharacter* scp)
{
	// Line 226, Address: 0x103b80, Func Offset: 0
	// Line 227, Address: 0x103b8c, Func Offset: 0xc
	// Line 228, Address: 0x103ba0, Func Offset: 0x20
	// Func End, Address: 0x103bb0, Func Offset: 0x30
}

