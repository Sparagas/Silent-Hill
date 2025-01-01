typedef struct EnAMBUSH_DATA;
typedef struct EnTYU_DATA;
typedef struct EnBOS_DATA;
typedef struct EnCOMMUNICATION;
typedef struct EnLOCAL_DATA;
typedef struct _anon0;
typedef struct shSkelton;
typedef struct SubCharacter;
typedef struct EnPATH_DATA;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct _AnimeInfo;
typedef struct shBattleArea;
typedef struct EnONI_DATA;
typedef struct EnMKN_DATA;
typedef struct shBattleInfo;
typedef struct EnIKE_DATA;
typedef struct EnRED_DATA;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct EnNSE_DATA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;
typedef struct EnEDB_DATA;
typedef struct EnPAP_DATA;
typedef struct EnSCU_DATA;

typedef void(*type_6)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_14)(SubCharacter*);

typedef unsigned char type_0[34];
typedef char type_1[2];
typedef _AnimeInfo type_2[29];
typedef float type_3[4];
typedef float type_4[4][4];
typedef unsigned char type_5[10];
typedef float type_8[4];
typedef shAttackInfo type_9[46];
typedef int type_10[8];
typedef unsigned char type_11[4];
typedef _AnimeInfo type_12[8];
typedef unsigned char type_13[10];
typedef float type_15[4];
typedef char type_16[3];
typedef unsigned char type_17[13];

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

	void EnemyMKNFunction();
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

struct shBattleArea
{
	float center;
	float radius;
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

struct EnIKE_DATA
{
	float handpos[4];
	char direc;
};

struct EnRED_DATA
{
	int dummy;
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

struct EnNSE_DATA
{
	float speed;
	float tspeed;
	char avoid;
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
_AnimeInfo mkn_anim[29];
_AnimeInfo d_mkn_anim[8];
int dmkn_anime_adr_list[8];
void(*EnemyMKNFunction)(SubCharacter*);

int EnemyMKNInit();
void EnemyMKNFunction();
void shCharacterSetEnemyMKNLow(SubCharacter* scp);
int shCharacterEnemyMKNAnimeSet(SubCharacter* scp, int anime_id);
int shCharacterEnemyMKNAnimeSetP(SubCharacter* scp, int anime_id, int comp);
void shGetEnemyMKNAttackPos(SubCharacter* scp, float* s_pos, float* s_vec, unsigned short atk);

// 
// Start address: 0x1063f0
int EnemyMKNInit()
{
	// Line 64, Address: 0x1063f0, Func Offset: 0
	// Line 66, Address: 0x1063f4, Func Offset: 0x4
	// Line 67, Address: 0x1063f8, Func Offset: 0x8
	// Func End, Address: 0x106404, Func Offset: 0x14
}

// 
// Start address: 0x106410
void SubCharacter::EnemyMKNFunction()
{
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	// Line 79, Address: 0x106410, Func Offset: 0
	// Line 83, Address: 0x106420, Func Offset: 0x10
	// Line 89, Address: 0x106440, Func Offset: 0x30
	// Line 90, Address: 0x106450, Func Offset: 0x40
	// Line 94, Address: 0x106460, Func Offset: 0x50
	// Line 96, Address: 0x10646c, Func Offset: 0x5c
	// Line 98, Address: 0x10647c, Func Offset: 0x6c
	// Line 100, Address: 0x10648c, Func Offset: 0x7c
	// Line 110, Address: 0x1064a0, Func Offset: 0x90
	// Line 113, Address: 0x1064b0, Func Offset: 0xa0
	// Line 114, Address: 0x1064c8, Func Offset: 0xb8
	// Line 115, Address: 0x1064d0, Func Offset: 0xc0
	// Line 116, Address: 0x1064d4, Func Offset: 0xc4
	// Line 118, Address: 0x1064dc, Func Offset: 0xcc
	// Line 119, Address: 0x1064e8, Func Offset: 0xd8
	// Line 120, Address: 0x1064f0, Func Offset: 0xe0
	// Line 126, Address: 0x1064f8, Func Offset: 0xe8
	// Line 127, Address: 0x106508, Func Offset: 0xf8
	// Line 129, Address: 0x106518, Func Offset: 0x108
	// Line 138, Address: 0x106524, Func Offset: 0x114
	// Func End, Address: 0x106538, Func Offset: 0x128
}

// 
// Start address: 0x106540
void shCharacterSetEnemyMKNLow(SubCharacter* scp)
{
	// Line 154, Address: 0x106540, Func Offset: 0
	// Line 155, Address: 0x10654c, Func Offset: 0xc
	// Line 156, Address: 0x106560, Func Offset: 0x20
	// Func End, Address: 0x106570, Func Offset: 0x30
}

// 
// Start address: 0x106570
int shCharacterEnemyMKNAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 169, Address: 0x106570, Func Offset: 0
	// Line 172, Address: 0x106584, Func Offset: 0x14
	// Line 173, Address: 0x1065a4, Func Offset: 0x34
	// Line 174, Address: 0x1065b4, Func Offset: 0x44
	// Line 175, Address: 0x1065d4, Func Offset: 0x64
	// Line 183, Address: 0x106620, Func Offset: 0xb0
	// Line 185, Address: 0x10662c, Func Offset: 0xbc
	// Line 187, Address: 0x106630, Func Offset: 0xc0
	// Func End, Address: 0x106644, Func Offset: 0xd4
}

// 
// Start address: 0x106650
int shCharacterEnemyMKNAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 200, Address: 0x106650, Func Offset: 0
	// Line 203, Address: 0x10666c, Func Offset: 0x1c
	// Line 204, Address: 0x10668c, Func Offset: 0x3c
	// Line 205, Address: 0x1066ac, Func Offset: 0x5c
	// Line 212, Address: 0x106708, Func Offset: 0xb8
	// Line 214, Address: 0x106714, Func Offset: 0xc4
	// Line 216, Address: 0x106718, Func Offset: 0xc8
	// Func End, Address: 0x106730, Func Offset: 0xe0
}

// 
// Start address: 0x106730
void shGetEnemyMKNAttackPos(SubCharacter* scp, float* s_pos, float* s_vec, unsigned short atk)
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
	// Line 228, Address: 0x106730, Func Offset: 0
	// Line 234, Address: 0x10674c, Func Offset: 0x1c
	// Line 237, Address: 0x106760, Func Offset: 0x30
	// Line 238, Address: 0x106790, Func Offset: 0x60
	// Line 240, Address: 0x106794, Func Offset: 0x64
	// Line 242, Address: 0x1067b8, Func Offset: 0x88
	// Line 243, Address: 0x1067bc, Func Offset: 0x8c
	// Line 245, Address: 0x1067c4, Func Offset: 0x94
	// Line 248, Address: 0x1067c8, Func Offset: 0x98
	// Line 249, Address: 0x1067d4, Func Offset: 0xa4
	// Line 252, Address: 0x1067f4, Func Offset: 0xc4
	// Line 253, Address: 0x106824, Func Offset: 0xf4
	// Line 254, Address: 0x10682c, Func Offset: 0xfc
	// Line 255, Address: 0x106834, Func Offset: 0x104
	// Line 256, Address: 0x10683c, Func Offset: 0x10c
	// Line 257, Address: 0x106844, Func Offset: 0x114
	// Line 258, Address: 0x106858, Func Offset: 0x128
	// Line 260, Address: 0x106868, Func Offset: 0x138
	// Line 261, Address: 0x10687c, Func Offset: 0x14c
	// Line 265, Address: 0x106888, Func Offset: 0x158
	// Line 266, Address: 0x10689c, Func Offset: 0x16c
	// Line 267, Address: 0x1068ac, Func Offset: 0x17c
	// Line 268, Address: 0x1068bc, Func Offset: 0x18c
	// Line 269, Address: 0x1068cc, Func Offset: 0x19c
	// Line 270, Address: 0x1068d4, Func Offset: 0x1a4
	// Line 271, Address: 0x1068e8, Func Offset: 0x1b8
	// Line 272, Address: 0x1068f8, Func Offset: 0x1c8
	// Line 273, Address: 0x106908, Func Offset: 0x1d8
	// Line 274, Address: 0x106918, Func Offset: 0x1e8
	// Line 275, Address: 0x106924, Func Offset: 0x1f4
	// Line 276, Address: 0x106948, Func Offset: 0x218
	// Func End, Address: 0x106964, Func Offset: 0x234
}

