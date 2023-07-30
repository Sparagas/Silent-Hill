typedef struct EnRED_DATA;
typedef struct _AnimeInfo;
typedef struct _anon0;
typedef struct SubCharacter;
typedef struct EnNSE_DATA;
typedef struct shSkelton;
typedef struct EnEDB_DATA;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct EnPAP_DATA;
typedef struct EnSCU_DATA;
typedef struct shBattleShot;
typedef struct EnAMBUSH_DATA;
typedef struct shBattleArea;
typedef struct EnTYU_DATA;
typedef struct EnBOS_DATA;
typedef struct EnCOMMUNICATION;
typedef struct shBattleInfo;
typedef struct EnLOCAL_DATA;
typedef struct EnPATH_DATA;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct EnONI_DATA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;
typedef struct EnMKN_DATA;
typedef struct EnIKE_DATA;

typedef void(*type_1)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_8)(SubCharacter*);

typedef unsigned char type_0[34];
typedef char type_2[3];
typedef _AnimeInfo type_3[25];
typedef float type_4[4];
typedef float type_5[4][4];
typedef unsigned char type_6[10];
typedef float type_9[4];
typedef shAttackInfo type_10[46];
typedef unsigned char type_11[4];
typedef char type_12[2];
typedef _AnimeInfo type_13[1];
typedef unsigned char type_14[10];
typedef int type_15[1];
typedef float type_16[4];
typedef unsigned char type_17[13];

struct EnRED_DATA
{
	int dummy;
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

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
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

	void EnemyNSEFunction();
};

struct EnNSE_DATA
{
	float speed;
	float tspeed;
	char avoid;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct shBattleArea
{
	float center;
	float radius;
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

struct EnONI_DATA
{
	char id;
	short timer2;
	void* other;
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
_AnimeInfo nse_anim[25];
_AnimeInfo d_nse_anim[1];
int dnse_anime_adr_list[1];
void(*EnemyNSEFunction)(SubCharacter*);

int EnemyNSEInit();
void EnemyNSEFunction();
void shCharacterSetEnemyNSELow(SubCharacter* scp);
int shCharacterEnemyNSEAnimeSetP(SubCharacter* scp, int anime_id, int comp);
void shGetEnemyNSEAttackPos(SubCharacter* scp, float* s_pos, float* s_vec);

// 
// Start address: 0x20b970
int EnemyNSEInit()
{
	// Line 52, Address: 0x20b970, Func Offset: 0
	// Line 54, Address: 0x20b974, Func Offset: 0x4
	// Line 55, Address: 0x20b978, Func Offset: 0x8
	// Func End, Address: 0x20b984, Func Offset: 0x14
}

// 
// Start address: 0x20b990
void SubCharacter::EnemyNSEFunction()
{
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	// Line 67, Address: 0x20b990, Func Offset: 0
	// Line 71, Address: 0x20b9a0, Func Offset: 0x10
	// Line 77, Address: 0x20b9cc, Func Offset: 0x3c
	// Line 78, Address: 0x20b9dc, Func Offset: 0x4c
	// Line 80, Address: 0x20b9ec, Func Offset: 0x5c
	// Line 82, Address: 0x20b9f8, Func Offset: 0x68
	// Line 84, Address: 0x20ba08, Func Offset: 0x78
	// Line 86, Address: 0x20ba18, Func Offset: 0x88
	// Line 96, Address: 0x20ba2c, Func Offset: 0x9c
	// Line 97, Address: 0x20ba3c, Func Offset: 0xac
	// Line 99, Address: 0x20ba4c, Func Offset: 0xbc
	// Line 102, Address: 0x20ba5c, Func Offset: 0xcc
	// Line 103, Address: 0x20ba74, Func Offset: 0xe4
	// Line 104, Address: 0x20ba78, Func Offset: 0xe8
	// Line 105, Address: 0x20ba84, Func Offset: 0xf4
	// Line 106, Address: 0x20ba8c, Func Offset: 0xfc
	// Line 112, Address: 0x20ba90, Func Offset: 0x100
	// Line 122, Address: 0x20ba9c, Func Offset: 0x10c
	// Func End, Address: 0x20bab0, Func Offset: 0x120
}

// 
// Start address: 0x20bab0
void shCharacterSetEnemyNSELow(SubCharacter* scp)
{
	// Line 138, Address: 0x20bab0, Func Offset: 0
	// Line 139, Address: 0x20babc, Func Offset: 0xc
	// Line 140, Address: 0x20bad0, Func Offset: 0x20
	// Func End, Address: 0x20bae0, Func Offset: 0x30
}

// 
// Start address: 0x20bae0
int shCharacterEnemyNSEAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 184, Address: 0x20bae0, Func Offset: 0
	// Line 187, Address: 0x20bafc, Func Offset: 0x1c
	// Line 188, Address: 0x20bb1c, Func Offset: 0x3c
	// Line 189, Address: 0x20bb3c, Func Offset: 0x5c
	// Line 196, Address: 0x20bb98, Func Offset: 0xb8
	// Line 198, Address: 0x20bba4, Func Offset: 0xc4
	// Line 200, Address: 0x20bba8, Func Offset: 0xc8
	// Func End, Address: 0x20bbc0, Func Offset: 0xe0
}

// 
// Start address: 0x20bbc0
void shGetEnemyNSEAttackPos(SubCharacter* scp, float* s_pos, float* s_vec)
{
	shSkelton* stp;
	float wep_range[4];
	int sk_num;
	int i;
	_anon1 mat;
	_anon1 lw_mat;
	float vec[4];
	float pos1[4];
	float pos0[4];
	// Line 212, Address: 0x20bbc0, Func Offset: 0
	// Line 217, Address: 0x20bbdc, Func Offset: 0x1c
	// Line 220, Address: 0x20bbf0, Func Offset: 0x30
	// Line 221, Address: 0x20bc20, Func Offset: 0x60
	// Line 223, Address: 0x20bc24, Func Offset: 0x64
	// Line 224, Address: 0x20bc28, Func Offset: 0x68
	// Line 225, Address: 0x20bc34, Func Offset: 0x74
	// Line 228, Address: 0x20bc54, Func Offset: 0x94
	// Line 229, Address: 0x20bc84, Func Offset: 0xc4
	// Line 230, Address: 0x20bc8c, Func Offset: 0xcc
	// Line 231, Address: 0x20bc94, Func Offset: 0xd4
	// Line 232, Address: 0x20bc9c, Func Offset: 0xdc
	// Line 233, Address: 0x20bca4, Func Offset: 0xe4
	// Line 234, Address: 0x20bcb8, Func Offset: 0xf8
	// Line 236, Address: 0x20bcc8, Func Offset: 0x108
	// Line 237, Address: 0x20bcdc, Func Offset: 0x11c
	// Line 241, Address: 0x20bce8, Func Offset: 0x128
	// Line 242, Address: 0x20bcfc, Func Offset: 0x13c
	// Line 243, Address: 0x20bd0c, Func Offset: 0x14c
	// Line 244, Address: 0x20bd1c, Func Offset: 0x15c
	// Line 245, Address: 0x20bd2c, Func Offset: 0x16c
	// Line 246, Address: 0x20bd34, Func Offset: 0x174
	// Line 247, Address: 0x20bd48, Func Offset: 0x188
	// Line 248, Address: 0x20bd58, Func Offset: 0x198
	// Line 249, Address: 0x20bd68, Func Offset: 0x1a8
	// Line 250, Address: 0x20bd78, Func Offset: 0x1b8
	// Line 251, Address: 0x20bd84, Func Offset: 0x1c4
	// Line 252, Address: 0x20bda8, Func Offset: 0x1e8
	// Func End, Address: 0x20bdc4, Func Offset: 0x204
}

