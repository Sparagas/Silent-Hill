typedef struct EnPATH_DATA;
typedef struct SubCharacter;
typedef struct _AnimeInfo;
typedef struct _anon0;
typedef struct EnCOMMUNICATION;
typedef struct shSkelton;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct EnMKN_DATA;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct EnIKE_DATA;
typedef struct shBattleShot;
typedef struct EnRED_DATA;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct EnNSE_DATA;
typedef struct EnEDB_DATA;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct _CL_HITPOLY_HEAD;
typedef struct EnPAP_DATA;
typedef struct EnSCU_DATA;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef struct EnTYU_DATA;
typedef union _anon3;
typedef struct EnBOS_DATA;
typedef struct EnLOCAL_DATA;

typedef void(*type_7)(SubCharacter*);
typedef void(*type_8)(SubCharacter*);
typedef void(*type_12)(SubCharacter*);

typedef char type_0[2];
typedef unsigned char type_1[34];
typedef int type_2[7];
typedef _AnimeInfo type_3[6];
typedef float type_4[4];
typedef float type_5[4][4];
typedef unsigned char type_6[10];
typedef float type_9[4];
typedef shAttackInfo type_10[46];
typedef unsigned char type_11[4];
typedef char type_13[3];
typedef _AnimeInfo type_14[7];
typedef unsigned char type_15[10];
typedef float type_16[4];
typedef unsigned char type_17[13];

struct EnPATH_DATA
{
	float angle;
	float markangle;
	float dist;
	char step;
	char deadend;
	short timer;
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

	void EnemyREDFunction();
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

struct EnCOMMUNICATION
{
	float pos[4];
	int kind;
	int type;
	int time;
	float dist;
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

struct EnIKE_DATA
{
	float handpos[4];
	char direc;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct EnRED_DATA
{
	int dummy;
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

struct EnTYU_DATA
{
	float point[4];
	EnCOMMUNICATION* tcomm;
};

union _anon3
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct EnBOS_DATA
{
	int dummy;
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
_AnimeInfo red_anim[6];
_AnimeInfo d_red_anim[7];
int dred_anime_adr_list[7];
void(*EnemyREDFunction)(SubCharacter*);

int EnemyREDInit();
void EnemyREDFunction();
void shCharacterSetEnemyREDLow(SubCharacter* scp);
int shCharacterEnemyREDAnimeSet(SubCharacter* scp, int anime_id);
int shCharacterEnemyREDAnimeSetP(SubCharacter* scp, int anime_id, int comp);
void shGetEnemyREDAttackPos(SubCharacter* scp, float* s_pos, float* s_vec, unsigned short atk);

// 
// Start address: 0x125770
int EnemyREDInit()
{
	// Line 62, Address: 0x125770, Func Offset: 0
	// Line 64, Address: 0x125774, Func Offset: 0x4
	// Line 65, Address: 0x125778, Func Offset: 0x8
	// Func End, Address: 0x125784, Func Offset: 0x14
}

// 
// Start address: 0x125790
void SubCharacter::EnemyREDFunction()
{
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	// Line 77, Address: 0x125790, Func Offset: 0
	// Line 81, Address: 0x1257a0, Func Offset: 0x10
	// Line 87, Address: 0x1257c0, Func Offset: 0x30
	// Line 88, Address: 0x1257d0, Func Offset: 0x40
	// Line 90, Address: 0x1257e0, Func Offset: 0x50
	// Line 93, Address: 0x1257ec, Func Offset: 0x5c
	// Line 95, Address: 0x1257fc, Func Offset: 0x6c
	// Line 96, Address: 0x12580c, Func Offset: 0x7c
	// Line 107, Address: 0x125820, Func Offset: 0x90
	// Line 110, Address: 0x125830, Func Offset: 0xa0
	// Line 111, Address: 0x125844, Func Offset: 0xb4
	// Line 112, Address: 0x125848, Func Offset: 0xb8
	// Line 113, Address: 0x125858, Func Offset: 0xc8
	// Line 114, Address: 0x125860, Func Offset: 0xd0
	// Line 119, Address: 0x125864, Func Offset: 0xd4
	// Line 122, Address: 0x125878, Func Offset: 0xe8
	// Line 123, Address: 0x125888, Func Offset: 0xf8
	// Line 125, Address: 0x125898, Func Offset: 0x108
	// Line 133, Address: 0x1258a4, Func Offset: 0x114
	// Func End, Address: 0x1258b8, Func Offset: 0x128
}

// 
// Start address: 0x1258c0
void shCharacterSetEnemyREDLow(SubCharacter* scp)
{
	// Line 149, Address: 0x1258c0, Func Offset: 0
	// Line 150, Address: 0x1258cc, Func Offset: 0xc
	// Line 151, Address: 0x1258e0, Func Offset: 0x20
	// Func End, Address: 0x1258f0, Func Offset: 0x30
}

// 
// Start address: 0x1258f0
int shCharacterEnemyREDAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 164, Address: 0x1258f0, Func Offset: 0
	// Line 167, Address: 0x125904, Func Offset: 0x14
	// Line 168, Address: 0x125924, Func Offset: 0x34
	// Line 169, Address: 0x125934, Func Offset: 0x44
	// Line 170, Address: 0x125954, Func Offset: 0x64
	// Line 178, Address: 0x1259a0, Func Offset: 0xb0
	// Line 180, Address: 0x1259ac, Func Offset: 0xbc
	// Line 182, Address: 0x1259b0, Func Offset: 0xc0
	// Func End, Address: 0x1259c4, Func Offset: 0xd4
}

// 
// Start address: 0x1259d0
int shCharacterEnemyREDAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 195, Address: 0x1259d0, Func Offset: 0
	// Line 198, Address: 0x1259ec, Func Offset: 0x1c
	// Line 199, Address: 0x125a0c, Func Offset: 0x3c
	// Line 200, Address: 0x125a2c, Func Offset: 0x5c
	// Line 207, Address: 0x125a88, Func Offset: 0xb8
	// Line 209, Address: 0x125a94, Func Offset: 0xc4
	// Line 211, Address: 0x125a98, Func Offset: 0xc8
	// Func End, Address: 0x125ab0, Func Offset: 0xe0
}

// 
// Start address: 0x125ab0
void shGetEnemyREDAttackPos(SubCharacter* scp, float* s_pos, float* s_vec, unsigned short atk)
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
	// Line 223, Address: 0x125ab0, Func Offset: 0
	// Line 227, Address: 0x125acc, Func Offset: 0x1c
	// Line 230, Address: 0x125ae0, Func Offset: 0x30
	// Line 231, Address: 0x125b10, Func Offset: 0x60
	// Line 233, Address: 0x125b14, Func Offset: 0x64
	// Line 236, Address: 0x125b44, Func Offset: 0x94
	// Line 237, Address: 0x125b48, Func Offset: 0x98
	// Line 239, Address: 0x125b50, Func Offset: 0xa0
	// Line 242, Address: 0x125b54, Func Offset: 0xa4
	// Line 243, Address: 0x125b60, Func Offset: 0xb0
	// Line 246, Address: 0x125b7c, Func Offset: 0xcc
	// Line 247, Address: 0x125bac, Func Offset: 0xfc
	// Line 248, Address: 0x125bb4, Func Offset: 0x104
	// Line 249, Address: 0x125bbc, Func Offset: 0x10c
	// Line 250, Address: 0x125bc4, Func Offset: 0x114
	// Line 251, Address: 0x125bcc, Func Offset: 0x11c
	// Line 252, Address: 0x125be0, Func Offset: 0x130
	// Line 254, Address: 0x125bf0, Func Offset: 0x140
	// Line 255, Address: 0x125c04, Func Offset: 0x154
	// Line 259, Address: 0x125c10, Func Offset: 0x160
	// Line 260, Address: 0x125c24, Func Offset: 0x174
	// Line 261, Address: 0x125c34, Func Offset: 0x184
	// Line 262, Address: 0x125c44, Func Offset: 0x194
	// Line 263, Address: 0x125c54, Func Offset: 0x1a4
	// Line 264, Address: 0x125c5c, Func Offset: 0x1ac
	// Line 265, Address: 0x125c70, Func Offset: 0x1c0
	// Line 266, Address: 0x125c80, Func Offset: 0x1d0
	// Line 267, Address: 0x125c90, Func Offset: 0x1e0
	// Line 268, Address: 0x125ca0, Func Offset: 0x1f0
	// Line 269, Address: 0x125cac, Func Offset: 0x1fc
	// Line 270, Address: 0x125cd0, Func Offset: 0x220
	// Func End, Address: 0x125cec, Func Offset: 0x23c
}

