typedef struct _AnimeInfo;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct EnMKN_DATA;
typedef struct SubCharacter;
typedef struct _anon0;
typedef struct EnIKE_DATA;
typedef struct EnRED_DATA;
typedef struct shSkelton;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct EnNSE_DATA;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct EnEDB_DATA;
typedef struct EnLOCAL_DATA;
typedef struct shBattleInfo;
typedef struct EnPAP_DATA;
typedef struct EnSCU_DATA;
typedef struct EnTYU_DATA;
typedef struct EnBOS_DATA;
typedef struct EnCOMMUNICATION;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef struct EnPATH_DATA;
typedef union _anon3;

typedef void(*type_0)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);

typedef unsigned char type_1[34];
typedef _AnimeInfo type_2[12];
typedef float type_3[4];
typedef float type_4[4][4];
typedef unsigned char type_5[10];
typedef float type_8[4];
typedef shAttackInfo type_9[46];
typedef unsigned char type_10[4];
typedef char type_11[3];
typedef _AnimeInfo type_12[5];
typedef int type_13[5];
typedef unsigned char type_14[10];
typedef char type_15[2];
typedef float type_16[4];
typedef unsigned char type_17[13];

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

	void EnemyONIFunction();
};

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

struct EnIKE_DATA
{
	float handpos[4];
	char direc;
};

struct EnRED_DATA
{
	int dummy;
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

struct EnNSE_DATA
{
	float speed;
	float tspeed;
	char avoid;
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

struct EnTYU_DATA
{
	float point[4];
	EnCOMMUNICATION* tcomm;
};

struct EnBOS_DATA
{
	int dummy;
};

struct EnCOMMUNICATION
{
	float pos[4];
	int kind;
	int type;
	int time;
	float dist;
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

struct EnPATH_DATA
{
	float angle;
	float markangle;
	float dist;
	char step;
	char deadend;
	short timer;
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
_AnimeInfo oni_anim[12];
_AnimeInfo d_oni_anim[5];
int doni_anime_adr_list[5];
void(*EnemyONIFunction)(SubCharacter*);

int EnemyONIInit();
void EnemyONIFunction();
void shCharacterSetEnemyONILow(SubCharacter* scp);
int shCharacterEnemyONIAnimeSetP(SubCharacter* scp, int anime_id, int comp);

// 
// Start address: 0x21ee80
int EnemyONIInit()
{
	// Line 60, Address: 0x21ee80, Func Offset: 0
	// Line 62, Address: 0x21ee84, Func Offset: 0x4
	// Line 63, Address: 0x21ee88, Func Offset: 0x8
	// Func End, Address: 0x21ee94, Func Offset: 0x14
}

// 
// Start address: 0x21eea0
void SubCharacter::EnemyONIFunction()
{
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	// Line 75, Address: 0x21eea0, Func Offset: 0
	// Line 79, Address: 0x21eeb0, Func Offset: 0x10
	// Line 85, Address: 0x21eed0, Func Offset: 0x30
	// Line 86, Address: 0x21eee0, Func Offset: 0x40
	// Line 88, Address: 0x21eef0, Func Offset: 0x50
	// Line 90, Address: 0x21eefc, Func Offset: 0x5c
	// Line 92, Address: 0x21ef0c, Func Offset: 0x6c
	// Line 93, Address: 0x21ef1c, Func Offset: 0x7c
	// Line 104, Address: 0x21ef30, Func Offset: 0x90
	// Line 107, Address: 0x21ef40, Func Offset: 0xa0
	// Line 108, Address: 0x21ef58, Func Offset: 0xb8
	// Line 109, Address: 0x21ef5c, Func Offset: 0xbc
	// Line 110, Address: 0x21ef68, Func Offset: 0xc8
	// Line 111, Address: 0x21ef70, Func Offset: 0xd0
	// Line 117, Address: 0x21ef74, Func Offset: 0xd4
	// Line 118, Address: 0x21ef84, Func Offset: 0xe4
	// Line 120, Address: 0x21ef94, Func Offset: 0xf4
	// Line 128, Address: 0x21efa0, Func Offset: 0x100
	// Func End, Address: 0x21efb4, Func Offset: 0x114
}

// 
// Start address: 0x21efc0
void shCharacterSetEnemyONILow(SubCharacter* scp)
{
	// Line 144, Address: 0x21efc0, Func Offset: 0
	// Line 145, Address: 0x21efcc, Func Offset: 0xc
	// Line 146, Address: 0x21efe0, Func Offset: 0x20
	// Func End, Address: 0x21eff0, Func Offset: 0x30
}

// 
// Start address: 0x21eff0
int shCharacterEnemyONIAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 190, Address: 0x21eff0, Func Offset: 0
	// Line 193, Address: 0x21f00c, Func Offset: 0x1c
	// Line 194, Address: 0x21f02c, Func Offset: 0x3c
	// Line 195, Address: 0x21f04c, Func Offset: 0x5c
	// Line 202, Address: 0x21f0a8, Func Offset: 0xb8
	// Line 204, Address: 0x21f0b4, Func Offset: 0xc4
	// Line 206, Address: 0x21f0b8, Func Offset: 0xc8
	// Func End, Address: 0x21f0d0, Func Offset: 0xe0
}

