typedef struct SubCharacter;
typedef struct EnNSE_DATA;
typedef struct EnEDB_DATA;
typedef struct _anon0;
typedef struct shSkelton;
typedef struct EnPAP_DATA;
typedef struct EnSCU_DATA;
typedef struct _AnimeInfo;
typedef struct EnAMBUSH_DATA;
typedef struct EnTYU_DATA;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct EnBOS_DATA;
typedef struct EnCOMMUNICATION;
typedef struct EnLOCAL_DATA;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct EnPATH_DATA;
typedef struct shAttackInfo;
typedef struct EnONI_DATA;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct EnMKN_DATA;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef struct EnIKE_DATA;
typedef union _anon3;
typedef struct EnRED_DATA;

typedef void(*type_6)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_12)(SubCharacter*);

typedef unsigned char type_0[34];
typedef char type_1[3];
typedef _AnimeInfo type_2[26];
typedef float type_3[4];
typedef float type_4[4][4];
typedef unsigned char type_5[10];
typedef float type_8[4];
typedef shAttackInfo type_9[46];
typedef unsigned char type_10[4];
typedef char type_11[2];
typedef int type_13[8];
typedef _AnimeInfo type_14[8];
typedef unsigned char type_15[10];
typedef float type_16[4];
typedef unsigned char type_17[13];

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

	void EnemyPAPFunction();
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

struct EnTYU_DATA
{
	float point[4];
	EnCOMMUNICATION* tcomm;
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

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
};

struct EnMKN_DATA
{
	float stpos[4];
	float target[4];
	short frame;
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

struct EnIKE_DATA
{
	float handpos[4];
	char direc;
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
_AnimeInfo pap_anim[26];
_AnimeInfo d_pap_anim[8];
int dpap_anime_adr_list[8];
void(*EnemyPAPFunction)(SubCharacter*);

int EnemyPAPInit(SubCharacter* scp);
void EnemyPAPFunction();
void shCharacterSetEnemyPAPLow(SubCharacter* scp);
int shCharacterEnemyPAPAnimeSet(SubCharacter* scp, int anime_id);
int shCharacterEnemyPAPAnimeSetP(SubCharacter* scp, int anime_id, int comp);

// 
// Start address: 0x106970
int EnemyPAPInit(SubCharacter* scp)
{
	// Line 65, Address: 0x106970, Func Offset: 0
	// Line 66, Address: 0x106978, Func Offset: 0x8
	// Line 67, Address: 0x106984, Func Offset: 0x14
	// Line 68, Address: 0x106988, Func Offset: 0x18
	// Func End, Address: 0x106994, Func Offset: 0x24
}

// 
// Start address: 0x1069a0
void SubCharacter::EnemyPAPFunction()
{
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	// Line 80, Address: 0x1069a0, Func Offset: 0
	// Line 84, Address: 0x1069b0, Func Offset: 0x10
	// Line 90, Address: 0x1069dc, Func Offset: 0x3c
	// Line 91, Address: 0x1069ec, Func Offset: 0x4c
	// Line 95, Address: 0x1069fc, Func Offset: 0x5c
	// Line 96, Address: 0x106a08, Func Offset: 0x68
	// Line 98, Address: 0x106a18, Func Offset: 0x78
	// Line 108, Address: 0x106a2c, Func Offset: 0x8c
	// Line 111, Address: 0x106a3c, Func Offset: 0x9c
	// Line 112, Address: 0x106a54, Func Offset: 0xb4
	// Line 113, Address: 0x106a58, Func Offset: 0xb8
	// Line 114, Address: 0x106a64, Func Offset: 0xc4
	// Line 115, Address: 0x106a6c, Func Offset: 0xcc
	// Line 119, Address: 0x106a70, Func Offset: 0xd0
	// Line 120, Address: 0x106a80, Func Offset: 0xe0
	// Line 122, Address: 0x106a90, Func Offset: 0xf0
	// Line 131, Address: 0x106a9c, Func Offset: 0xfc
	// Func End, Address: 0x106ab0, Func Offset: 0x110
}

// 
// Start address: 0x106ab0
void shCharacterSetEnemyPAPLow(SubCharacter* scp)
{
	// Line 147, Address: 0x106ab0, Func Offset: 0
	// Line 148, Address: 0x106abc, Func Offset: 0xc
	// Line 149, Address: 0x106ad0, Func Offset: 0x20
	// Func End, Address: 0x106ae0, Func Offset: 0x30
}

// 
// Start address: 0x106ae0
int shCharacterEnemyPAPAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 162, Address: 0x106ae0, Func Offset: 0
	// Line 165, Address: 0x106af4, Func Offset: 0x14
	// Line 166, Address: 0x106b14, Func Offset: 0x34
	// Line 167, Address: 0x106b24, Func Offset: 0x44
	// Line 168, Address: 0x106b44, Func Offset: 0x64
	// Line 176, Address: 0x106b90, Func Offset: 0xb0
	// Line 178, Address: 0x106b9c, Func Offset: 0xbc
	// Line 180, Address: 0x106ba0, Func Offset: 0xc0
	// Func End, Address: 0x106bb4, Func Offset: 0xd4
}

// 
// Start address: 0x106bc0
int shCharacterEnemyPAPAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 193, Address: 0x106bc0, Func Offset: 0
	// Line 196, Address: 0x106bdc, Func Offset: 0x1c
	// Line 197, Address: 0x106bfc, Func Offset: 0x3c
	// Line 198, Address: 0x106c1c, Func Offset: 0x5c
	// Line 205, Address: 0x106c78, Func Offset: 0xb8
	// Line 207, Address: 0x106c84, Func Offset: 0xc4
	// Line 209, Address: 0x106c88, Func Offset: 0xc8
	// Func End, Address: 0x106ca0, Func Offset: 0xe0
}

