typedef struct EnNSE_DATA;
typedef struct EnEDB_DATA;
typedef struct SubCharacter;
typedef struct _anon0;
typedef struct EnPAP_DATA;
typedef struct shSkelton;
typedef struct EnSCU_DATA;
typedef struct EnAMBUSH_DATA;
typedef struct EnTYU_DATA;
typedef struct EnBOS_DATA;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct EnCOMMUNICATION;
typedef struct EnLOCAL_DATA;
typedef struct _AnimeInfo;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct EnPATH_DATA;
typedef struct shAttackInfo;
typedef struct EnONI_DATA;
typedef struct _CL_VHIT_WALL;
typedef struct EnMKN_DATA;
typedef union _anon2;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct EnIKE_DATA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;
typedef struct EnRED_DATA;

typedef void(*type_6)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_12)(SubCharacter*);

typedef unsigned char type_0[34];
typedef char type_1[3];
typedef _AnimeInfo type_2[22];
typedef float type_3[4];
typedef float type_4[4][4];
typedef unsigned char type_5[10];
typedef float type_8[4];
typedef shAttackInfo type_9[46];
typedef char type_10[2];
typedef unsigned char type_11[4];
typedef _AnimeInfo type_13[12];
typedef int type_14[12];
typedef unsigned char type_15[10];
typedef float type_16[4];
typedef unsigned char type_17[13];

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

	void EnemyIKEFunction();
};

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

struct EnPAP_DATA
{
	float target[4];
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

struct EnCOMMUNICATION
{
	float pos[4];
	int kind;
	int type;
	int time;
	float dist;
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

struct EnPATH_DATA
{
	float angle;
	float markangle;
	float dist;
	char step;
	char deadend;
	short timer;
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

struct EnONI_DATA
{
	char id;
	short timer2;
	void* other;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct EnMKN_DATA
{
	float stpos[4];
	float target[4];
	short frame;
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

struct EnIKE_DATA
{
	float handpos[4];
	char direc;
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

struct EnRED_DATA
{
	int dummy;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
_AnimeInfo ike_anim[22];
_AnimeInfo d_ike_anim[12];
int dike_anime_adr_list[12];
void(*EnemyIKEFunction)(SubCharacter*);

int EnemyIKEInit(SubCharacter* scp);
void EnemyIKEFunction();
void shCharacterSetEnemyIKELow(SubCharacter* scp);
int shCharacterEnemyIKEAnimeSet(SubCharacter* scp, int anime_id);
int shCharacterEnemyIKEAnimeSetP(SubCharacter* scp, int anime_id, int comp);

// 
// Start address: 0x105e40
int EnemyIKEInit(SubCharacter* scp)
{
	// Line 71, Address: 0x105e40, Func Offset: 0
	// Line 72, Address: 0x105e48, Func Offset: 0x8
	// Line 73, Address: 0x105e54, Func Offset: 0x14
	// Line 74, Address: 0x105e58, Func Offset: 0x18
	// Func End, Address: 0x105e64, Func Offset: 0x24
}

// 
// Start address: 0x105e70
void SubCharacter::EnemyIKEFunction()
{
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	// Line 86, Address: 0x105e70, Func Offset: 0
	// Line 90, Address: 0x105e80, Func Offset: 0x10
	// Line 96, Address: 0x105ea0, Func Offset: 0x30
	// Line 97, Address: 0x105eb0, Func Offset: 0x40
	// Line 99, Address: 0x105ec0, Func Offset: 0x50
	// Line 101, Address: 0x105ecc, Func Offset: 0x5c
	// Line 103, Address: 0x105edc, Func Offset: 0x6c
	// Line 105, Address: 0x105eec, Func Offset: 0x7c
	// Line 114, Address: 0x105f00, Func Offset: 0x90
	// Line 117, Address: 0x105f10, Func Offset: 0xa0
	// Line 118, Address: 0x105f28, Func Offset: 0xb8
	// Line 119, Address: 0x105f2c, Func Offset: 0xbc
	// Line 120, Address: 0x105f38, Func Offset: 0xc8
	// Line 121, Address: 0x105f40, Func Offset: 0xd0
	// Line 127, Address: 0x105f44, Func Offset: 0xd4
	// Line 128, Address: 0x105f54, Func Offset: 0xe4
	// Line 130, Address: 0x105f64, Func Offset: 0xf4
	// Line 137, Address: 0x105f70, Func Offset: 0x100
	// Func End, Address: 0x105f84, Func Offset: 0x114
}

// 
// Start address: 0x105f90
void shCharacterSetEnemyIKELow(SubCharacter* scp)
{
	// Line 153, Address: 0x105f90, Func Offset: 0
	// Line 154, Address: 0x105f9c, Func Offset: 0xc
	// Line 155, Address: 0x105fb0, Func Offset: 0x20
	// Func End, Address: 0x105fc0, Func Offset: 0x30
}

// 
// Start address: 0x105fc0
int shCharacterEnemyIKEAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 168, Address: 0x105fc0, Func Offset: 0
	// Line 171, Address: 0x105fd4, Func Offset: 0x14
	// Line 172, Address: 0x105ff4, Func Offset: 0x34
	// Line 173, Address: 0x106004, Func Offset: 0x44
	// Line 174, Address: 0x106024, Func Offset: 0x64
	// Line 182, Address: 0x106070, Func Offset: 0xb0
	// Line 184, Address: 0x10607c, Func Offset: 0xbc
	// Line 186, Address: 0x106080, Func Offset: 0xc0
	// Func End, Address: 0x106094, Func Offset: 0xd4
}

// 
// Start address: 0x1060a0
int shCharacterEnemyIKEAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 199, Address: 0x1060a0, Func Offset: 0
	// Line 203, Address: 0x1060bc, Func Offset: 0x1c
	// Line 206, Address: 0x1060f0, Func Offset: 0x50
	// Line 207, Address: 0x106110, Func Offset: 0x70
	// Line 214, Address: 0x10616c, Func Offset: 0xcc
	// Line 216, Address: 0x106178, Func Offset: 0xd8
	// Line 218, Address: 0x10617c, Func Offset: 0xdc
	// Func End, Address: 0x106194, Func Offset: 0xf4
}

