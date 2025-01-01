typedef struct _anon0;
typedef struct _AnimeInfo;
typedef struct shSkelton;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct SubCharacter;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct shAttackInfo;
typedef struct shStayObjectSettingData;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;

typedef void(*type_5)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);
typedef void(*type_11)(SubCharacter*);

typedef shStayObjectSettingData type_0[11];
typedef unsigned char type_1[34];
typedef float type_2[4];
typedef float type_3[4][4];
typedef unsigned char type_4[10];
typedef float type_7[4];
typedef shAttackInfo type_8[46];
typedef unsigned char type_9[4];
typedef _AnimeInfo type_10[5];
typedef unsigned char type_12[10];
typedef short type_13[11];
typedef float type_14[4];
typedef short type_15[11];
typedef unsigned char type_16[13];

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
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

	void ObjectNIKFunction();
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
_AnimeInfo nik_anim[5];
shStayObjectSettingData nik_pos_data[11];
void(*ObjectNIKFunction)(SubCharacter*);

int ObjectNIKInit();
void ObjectNIKFunction();
void shCharacterSetObjectNIKLow(SubCharacter* scp);

// 
// Start address: 0x21fa70
int ObjectNIKInit()
{
	// Line 44, Address: 0x21fa70, Func Offset: 0
	// Line 46, Address: 0x21fa74, Func Offset: 0x4
	// Line 47, Address: 0x21fa78, Func Offset: 0x8
	// Func End, Address: 0x21fa84, Func Offset: 0x14
}

// 
// Start address: 0x21fa90
void SubCharacter::ObjectNIKFunction()
{
	short init_anime[11];
	short init_frame[11];
	// Line 59, Address: 0x21fa90, Func Offset: 0
	// Line 64, Address: 0x21fa9c, Func Offset: 0xc
	// Line 77, Address: 0x21fac0, Func Offset: 0x30
	// Line 92, Address: 0x21fae4, Func Offset: 0x54
	// Line 97, Address: 0x21fb08, Func Offset: 0x78
	// Line 98, Address: 0x21fb14, Func Offset: 0x84
	// Line 125, Address: 0x21fb24, Func Offset: 0x94
	// Line 129, Address: 0x21fb30, Func Offset: 0xa0
	// Line 136, Address: 0x21fb40, Func Offset: 0xb0
	// Func End, Address: 0x21fb50, Func Offset: 0xc0
}

// 
// Start address: 0x21fb50
void shCharacterSetObjectNIKLow(SubCharacter* scp)
{
	// Line 152, Address: 0x21fb50, Func Offset: 0
	// Line 153, Address: 0x21fb5c, Func Offset: 0xc
	// Line 154, Address: 0x21fb70, Func Offset: 0x20
	// Func End, Address: 0x21fb80, Func Offset: 0x30
}

