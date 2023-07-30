typedef struct EN_FLY_DATA;
typedef struct EnNSE_DATA;
typedef struct shBattleFight;
typedef struct EnEDB_DATA;
typedef struct EnLOCAL_WORK;
typedef struct shBattleShot;
typedef struct SubCharacter;
typedef struct shBattleArea;
typedef struct shSkelton;
typedef struct EnLOCAL_DATA;
typedef struct EnPAP_DATA;
typedef struct shBattleInfo;
typedef struct EnSCU_DATA;
typedef struct EnAMBUSH_DATA;
typedef struct EnTYU_DATA;
typedef struct EnBOS_DATA;
typedef struct EnCOMMUNICATION;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon0;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct EnPATH_DATA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct EnONI_DATA;
typedef struct _anon2;
typedef struct EnMKN_DATA;
typedef struct EnIKE_DATA;
typedef struct EnRED_DATA;
typedef struct _anon3;

typedef void(*type_2)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);

typedef float type_0[4];
typedef unsigned char type_1[10];
typedef EnLOCAL_DATA type_3[64];
typedef shAttackInfo type_4[46];
typedef EnCOMMUNICATION type_5[8];
typedef char type_7[3];
typedef unsigned char type_8[4];
typedef char type_9[2];
typedef unsigned char type_10[10];
typedef float type_11[4];
typedef unsigned char type_12[13];
typedef unsigned char type_13[34];
typedef float type_14[4];
typedef float type_15[4][4];

struct EN_FLY_DATA
{
	SubCharacter scp;
	EnLOCAL_DATA dp;
};

struct EnNSE_DATA
{
	float speed;
	float tspeed;
	char avoid;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct EnLOCAL_WORK
{
	EnLOCAL_DATA Data[64];
	EnCOMMUNICATION Communication[8];
	int CommunicationNum;
	EnLOCAL_DATA* This;
	_CL_VHIT_RESULT HitResult;
	int Max3DSounds;
	EnLOCAL_DATA* view_data;
	short view_x;
	short view_y;
	float fps;
	float spf;
	unsigned int dbflag;
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
};

struct shBattleArea
{
	float center;
	float radius;
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

struct EnPAP_DATA
{
	float target[4];
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
	_anon0 hit_check;
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

union _anon0
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

struct EnPATH_DATA
{
	float angle;
	float markangle;
	float dist;
	char step;
	char deadend;
	short timer;
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

struct EnONI_DATA
{
	char id;
	short timer2;
	void* other;
};

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
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

struct EnRED_DATA
{
	int dummy;
};

struct _anon3
{
	float d[4][4];
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
EN_FLY_DATA fly;
EnLOCAL_WORK enLocalWork;

void flyInit(float* pos);
void flyMove();
void flyGetPos(float* pos);

// 
// Start address: 0x1e0790
void flyInit(float* pos)
{
	// Line 41, Address: 0x1e0790, Func Offset: 0
	// Line 43, Address: 0x1e07a0, Func Offset: 0x10
	// Line 44, Address: 0x1e07b4, Func Offset: 0x24
	// Line 45, Address: 0x1e07c4, Func Offset: 0x34
	// Line 46, Address: 0x1e07d8, Func Offset: 0x48
	// Line 47, Address: 0x1e081c, Func Offset: 0x8c
	// Line 48, Address: 0x1e0828, Func Offset: 0x98
	// Line 49, Address: 0x1e0840, Func Offset: 0xb0
	// Line 50, Address: 0x1e0850, Func Offset: 0xc0
	// Line 51, Address: 0x1e0860, Func Offset: 0xd0
	// Line 52, Address: 0x1e0880, Func Offset: 0xf0
	// Line 53, Address: 0x1e08a0, Func Offset: 0x110
	// Func End, Address: 0x1e08b4, Func Offset: 0x124
}

// 
// Start address: 0x1e08c0
void flyMove()
{
	float vec[4];
	// Line 56, Address: 0x1e08c0, Func Offset: 0
	// Line 58, Address: 0x1e08c8, Func Offset: 0x8
	// Line 60, Address: 0x1e0948, Func Offset: 0x88
	// Line 61, Address: 0x1e0968, Func Offset: 0xa8
	// Line 62, Address: 0x1e09a8, Func Offset: 0xe8
	// Line 63, Address: 0x1e09e8, Func Offset: 0x128
	// Line 65, Address: 0x1e0a58, Func Offset: 0x198
	// Line 66, Address: 0x1e0a94, Func Offset: 0x1d4
	// Line 67, Address: 0x1e0ac0, Func Offset: 0x200
	// Line 68, Address: 0x1e0ae0, Func Offset: 0x220
	// Line 69, Address: 0x1e0b04, Func Offset: 0x244
	// Line 70, Address: 0x1e0b14, Func Offset: 0x254
	// Line 72, Address: 0x1e0b30, Func Offset: 0x270
	// Line 73, Address: 0x1e0b4c, Func Offset: 0x28c
	// Line 75, Address: 0x1e0b80, Func Offset: 0x2c0
	// Line 101, Address: 0x1e0ba4, Func Offset: 0x2e4
	// Func End, Address: 0x1e0bb4, Func Offset: 0x2f4
}

// 
// Start address: 0x1e0bc0
void flyGetPos(float* pos)
{
	// Line 105, Address: 0x1e0bc0, Func Offset: 0
	// Line 106, Address: 0x1e0bd0, Func Offset: 0x10
	// Func End, Address: 0x1e0bd8, Func Offset: 0x18
}

