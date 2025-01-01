typedef struct EnPAP_DATA;
typedef struct EnSCU_DATA;
typedef struct EnAMBUSH_DATA;
typedef struct EnTYU_DATA;
typedef struct EnBOS_DATA;
typedef struct _anon0;
typedef struct EnCOMMUNICATION;
typedef struct SubCharacter;
typedef struct EnLOCAL_DATA;
typedef struct shSkelton;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct EnPATH_DATA;
typedef struct _AnimeInfo;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct EnONI_DATA;
typedef struct EnMKN_DATA;
typedef struct EnIKE_DATA;
typedef struct shAttackInfo;
typedef struct EnRED_DATA;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;
typedef struct EnNSE_DATA;
typedef struct EnEDB_DATA;

typedef void(*type_6)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_14)(SubCharacter*);

typedef unsigned char type_0[34];
typedef char type_1[2];
typedef _AnimeInfo type_2[3];
typedef float type_3[4];
typedef float type_4[4][4];
typedef unsigned char type_5[10];
typedef float type_8[4];
typedef shAttackInfo type_9[46];
typedef unsigned char type_10[4];
typedef int type_11[1];
typedef _AnimeInfo type_12[1];
typedef unsigned char type_13[10];
typedef float type_15[4];
typedef char type_16[3];
typedef unsigned char type_17[13];

struct EnPAP_DATA
{
	float target[4];
};

struct EnSCU_DATA
{
	float stpos[4];
	float target[4];
	EnAMBUSH_DATA* ambush;
	int count;
};

struct EnAMBUSH_DATA
{
	short pl_x_min;
	short pl_z_min;
	short pl_x_max;
	short pl_z_max;
	short pos_x;
	short pos_z;
	float dir;
};

struct EnTYU_DATA
{
	float point[4];
	EnCOMMUNICATION* tcomm;
};

struct EnBOS_DATA
{
	int dummy;
};

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

struct EnCOMMUNICATION
{
	float pos[4];
	int kind;
	int type;
	int time;
	float dist;
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

	void EnemyTYUFunction();
};

struct EnLOCAL_DATA
{
	char kind;
	char kind2;
	char mlv;
	char slv;
	char sslv;
	char type;
	unsigned char weight;
	char lie;
	char anim;
	unsigned char anim_loop;
	char hoge[2];
	unsigned short flag;
	short anim_s;
	int anim_n;
	int anim_step;
	SubCharacter* scp;
	EnPATH_DATA path;
	float vec[4];
	float endurance;
	float endurance_max;
	float hb_x;
	float hb_z;
	float hb_s;
	float tx;
	float tz;
	float tx2;
	float tz2;
	float size;
	float new_size;
	float tall;
	float new_tall;
	float center_y;
	float new_center;
	float eye_y;
	float new_eye;
	float p_dist;
	int timer;
	int sound_wait;
	int randseed;
	union
	{
		EnSCU_DATA scu;
		EnMKN_DATA mkn;
		EnTYU_DATA tyu;
		EnRED_DATA red;
		EnONI_DATA oni;
		EnNSE_DATA nse;
		EnIKE_DATA ike;
		EnPAP_DATA pap;
		EnEDB_DATA edb;
		EnBOS_DATA bos;
	};
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

struct EnPATH_DATA
{
	float angle;
	float markangle;
	float dist;
	char step;
	char deadend;
	short timer;
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

struct EnONI_DATA
{
	char id;
	short timer2;
	void* other;
};

struct EnMKN_DATA
{
	float stpos[4];
	float target[4];
	short frame;
};

struct EnIKE_DATA
{
	float handpos[4];
	char direc;
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

struct EnRED_DATA
{
	int dummy;
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

struct EnNSE_DATA
{
	float speed;
	float tspeed;
	char avoid;
};

struct EnEDB_DATA
{
	float target[4];
	float rot;
	float arot;
	float speed;
	char bullet;
	char mark[3];
	char mark_n;
	char turn;
	char afford;
	char ccount;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
_AnimeInfo tyu_anim[3];
_AnimeInfo d_tyu_anim[1];
int dtyu_anime_adr_list[1];
void(*EnemyTYUFunction)(SubCharacter*);

int EnemyTYUInit();
void EnemyTYUFunction();
void shCharacterSetEnemyTYULow(SubCharacter* scp);
int shCharacterEnemyTYUAnimeSetP(SubCharacter* scp, int anime_id, int comp);

// 
// Start address: 0x21ea30
int EnemyTYUInit()
{
	// Line 55, Address: 0x21ea30, Func Offset: 0
	// Line 57, Address: 0x21ea34, Func Offset: 0x4
	// Line 58, Address: 0x21ea38, Func Offset: 0x8
	// Func End, Address: 0x21ea44, Func Offset: 0x14
}

// 
// Start address: 0x21ea50
void SubCharacter::EnemyTYUFunction()
{
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	// Line 70, Address: 0x21ea50, Func Offset: 0
	// Line 74, Address: 0x21ea60, Func Offset: 0x10
	// Line 80, Address: 0x21ea80, Func Offset: 0x30
	// Line 81, Address: 0x21ea90, Func Offset: 0x40
	// Line 83, Address: 0x21eaa0, Func Offset: 0x50
	// Line 85, Address: 0x21eaac, Func Offset: 0x5c
	// Line 87, Address: 0x21eabc, Func Offset: 0x6c
	// Line 89, Address: 0x21eacc, Func Offset: 0x7c
	// Line 99, Address: 0x21eae0, Func Offset: 0x90
	// Line 102, Address: 0x21eaf0, Func Offset: 0xa0
	// Line 103, Address: 0x21eb08, Func Offset: 0xb8
	// Line 104, Address: 0x21eb0c, Func Offset: 0xbc
	// Line 105, Address: 0x21eb18, Func Offset: 0xc8
	// Line 106, Address: 0x21eb20, Func Offset: 0xd0
	// Line 112, Address: 0x21eb24, Func Offset: 0xd4
	// Line 113, Address: 0x21eb34, Func Offset: 0xe4
	// Line 115, Address: 0x21eb44, Func Offset: 0xf4
	// Line 122, Address: 0x21eb50, Func Offset: 0x100
	// Func End, Address: 0x21eb64, Func Offset: 0x114
}

// 
// Start address: 0x21eb70
void shCharacterSetEnemyTYULow(SubCharacter* scp)
{
	// Line 138, Address: 0x21eb70, Func Offset: 0
	// Line 139, Address: 0x21eb7c, Func Offset: 0xc
	// Line 140, Address: 0x21eb90, Func Offset: 0x20
	// Func End, Address: 0x21eba0, Func Offset: 0x30
}

// 
// Start address: 0x21eba0
int shCharacterEnemyTYUAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 185, Address: 0x21eba0, Func Offset: 0
	// Line 188, Address: 0x21ebbc, Func Offset: 0x1c
	// Line 189, Address: 0x21ebdc, Func Offset: 0x3c
	// Line 190, Address: 0x21ebfc, Func Offset: 0x5c
	// Line 197, Address: 0x21ec58, Func Offset: 0xb8
	// Line 199, Address: 0x21ec64, Func Offset: 0xc4
	// Line 201, Address: 0x21ec68, Func Offset: 0xc8
	// Func End, Address: 0x21ec80, Func Offset: 0xe0
}

