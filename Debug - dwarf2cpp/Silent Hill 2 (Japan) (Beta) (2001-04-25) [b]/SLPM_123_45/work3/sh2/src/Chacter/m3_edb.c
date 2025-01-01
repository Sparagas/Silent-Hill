typedef struct _AnimeInfo;
typedef struct EnCOMMUNICATION;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct _anon0;
typedef struct EnMKN_DATA;
typedef struct SubCharacter;
typedef struct shSkelton;
typedef struct EnIKE_DATA;
typedef struct EnRED_DATA;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct EnNSE_DATA;
typedef struct shBattleInfo;
typedef struct EnEDB_DATA;
typedef struct EnPAP_DATA;
typedef struct EnSCU_DATA;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef struct EnTYU_DATA;
typedef union _anon2;
typedef struct EnBOS_DATA;
typedef struct _CL_HITPOLY_HEAD;
typedef struct EnLOCAL_DATA;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;
typedef struct EnPATH_DATA;

typedef void(*type_6)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_10)(SubCharacter*);

typedef int type_0[1];
typedef unsigned char type_1[34];
typedef _AnimeInfo type_2[22];
typedef float type_3[4];
typedef float type_4[4][4];
typedef unsigned char type_5[10];
typedef float type_8[4];
typedef shAttackInfo type_9[46];
typedef unsigned char type_11[4];
typedef char type_12[3];
typedef _AnimeInfo type_13[1];
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

struct EnCOMMUNICATION
{
	float pos[4];
	int kind;
	int type;
	int time;
	float dist;
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

struct _anon0
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

	void EnemyEDBFunction();
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

struct EnIKE_DATA
{
	float handpos[4];
	char direc;
};

struct EnRED_DATA
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

struct EnNSE_DATA
{
	float speed;
	float tspeed;
	char avoid;
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

struct EnTYU_DATA
{
	float point[4];
	EnCOMMUNICATION* tcomm;
};

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
};

struct EnBOS_DATA
{
	int dummy;
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

struct EnPATH_DATA
{
	float angle;
	float markangle;
	float dist;
	char step;
	char deadend;
	short timer;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
_AnimeInfo edb_anim[22];
_AnimeInfo d_edb_anim[1];
int dedb_anime_adr_list[1];
void(*EnemyEDBFunction)(SubCharacter*);

int EnemyEDBInit();
void EnemyEDBFunction();
void shCharacterSetEnemyEDBLow(SubCharacter* scp);
int shCharacterEnemyEDBAnimeSetP(SubCharacter* scp, int anime_id, int comp);

// 
// Start address: 0x20a2e0
int EnemyEDBInit()
{
	// Line 53, Address: 0x20a2e0, Func Offset: 0
	// Line 55, Address: 0x20a2e4, Func Offset: 0x4
	// Line 56, Address: 0x20a2e8, Func Offset: 0x8
	// Func End, Address: 0x20a2f4, Func Offset: 0x14
}

// 
// Start address: 0x20a300
void SubCharacter::EnemyEDBFunction()
{
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	// Line 69, Address: 0x20a300, Func Offset: 0
	// Line 73, Address: 0x20a310, Func Offset: 0x10
	// Line 79, Address: 0x20a330, Func Offset: 0x30
	// Line 80, Address: 0x20a340, Func Offset: 0x40
	// Line 82, Address: 0x20a350, Func Offset: 0x50
	// Line 84, Address: 0x20a360, Func Offset: 0x60
	// Line 85, Address: 0x20a36c, Func Offset: 0x6c
	// Line 87, Address: 0x20a37c, Func Offset: 0x7c
	// Line 97, Address: 0x20a390, Func Offset: 0x90
	// Line 100, Address: 0x20a3a0, Func Offset: 0xa0
	// Line 101, Address: 0x20a3b8, Func Offset: 0xb8
	// Line 102, Address: 0x20a3bc, Func Offset: 0xbc
	// Line 103, Address: 0x20a3c8, Func Offset: 0xc8
	// Line 104, Address: 0x20a3d0, Func Offset: 0xd0
	// Line 109, Address: 0x20a3d4, Func Offset: 0xd4
	// Line 110, Address: 0x20a3e4, Func Offset: 0xe4
	// Line 112, Address: 0x20a3f4, Func Offset: 0xf4
	// Line 120, Address: 0x20a400, Func Offset: 0x100
	// Func End, Address: 0x20a414, Func Offset: 0x114
}

// 
// Start address: 0x20a420
void shCharacterSetEnemyEDBLow(SubCharacter* scp)
{
	// Line 136, Address: 0x20a420, Func Offset: 0
	// Line 137, Address: 0x20a42c, Func Offset: 0xc
	// Line 138, Address: 0x20a440, Func Offset: 0x20
	// Func End, Address: 0x20a450, Func Offset: 0x30
}

// 
// Start address: 0x20a450
int shCharacterEnemyEDBAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 184, Address: 0x20a450, Func Offset: 0
	// Line 187, Address: 0x20a46c, Func Offset: 0x1c
	// Line 188, Address: 0x20a48c, Func Offset: 0x3c
	// Line 189, Address: 0x20a4ac, Func Offset: 0x5c
	// Line 196, Address: 0x20a508, Func Offset: 0xb8
	// Line 198, Address: 0x20a514, Func Offset: 0xc4
	// Line 200, Address: 0x20a518, Func Offset: 0xc8
	// Func End, Address: 0x20a530, Func Offset: 0xe0
}

