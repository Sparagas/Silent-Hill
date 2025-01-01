typedef struct EnRED_DATA;
typedef struct SubCharacter;
typedef struct _anon0;
typedef struct EnNSE_DATA;
typedef struct shSkelton;
typedef struct _AnimeInfo;
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
typedef _AnimeInfo type_3[32];
typedef float type_4[4];
typedef float type_5[4][4];
typedef unsigned char type_6[10];
typedef float type_9[4];
typedef shAttackInfo type_10[46];
typedef unsigned char type_11[4];
typedef char type_12[2];
typedef _AnimeInfo type_13[9];
typedef unsigned char type_14[10];
typedef int type_15[8];
typedef float type_16[4];
typedef unsigned char type_17[13];

struct EnRED_DATA
{
	int dummy;
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

	void EnemySCUFunction();
};

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
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
_AnimeInfo scu_anim[32];
_AnimeInfo d_scu_anim[9];
int dscu_anime_adr_list[8];
void(*EnemySCUFunction)(SubCharacter*);

int EnemySCUInit();
void EnemySCUFunction();
void shCharacterSetEnemySCULow(SubCharacter* scp);
int shCharacterEnemySCUAnimeSet(SubCharacter* scp, int anime_id);
int shCharacterEnemySCUAnimeSetP(SubCharacter* scp, int anime_id, int comp);
void shGetEnemySCUAttackPos(SubCharacter* scp, float* s_pos, float* s_vec, unsigned short atk);

// 
// Start address: 0x128700
int EnemySCUInit()
{
	// Line 62, Address: 0x128700, Func Offset: 0
	// Line 64, Address: 0x128704, Func Offset: 0x4
	// Line 65, Address: 0x128708, Func Offset: 0x8
	// Func End, Address: 0x128714, Func Offset: 0x14
}

// 
// Start address: 0x128720
void SubCharacter::EnemySCUFunction()
{
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	// Line 77, Address: 0x128720, Func Offset: 0
	// Line 81, Address: 0x128730, Func Offset: 0x10
	// Line 87, Address: 0x128750, Func Offset: 0x30
	// Line 88, Address: 0x128760, Func Offset: 0x40
	// Line 90, Address: 0x128770, Func Offset: 0x50
	// Line 92, Address: 0x12877c, Func Offset: 0x5c
	// Line 94, Address: 0x12878c, Func Offset: 0x6c
	// Line 96, Address: 0x12879c, Func Offset: 0x7c
	// Line 106, Address: 0x1287b0, Func Offset: 0x90
	// Line 109, Address: 0x1287c0, Func Offset: 0xa0
	// Line 110, Address: 0x1287d8, Func Offset: 0xb8
	// Line 111, Address: 0x1287e0, Func Offset: 0xc0
	// Line 112, Address: 0x1287e4, Func Offset: 0xc4
	// Line 114, Address: 0x1287ec, Func Offset: 0xcc
	// Line 115, Address: 0x1287f8, Func Offset: 0xd8
	// Line 116, Address: 0x128800, Func Offset: 0xe0
	// Line 122, Address: 0x128808, Func Offset: 0xe8
	// Line 123, Address: 0x128818, Func Offset: 0xf8
	// Line 125, Address: 0x128828, Func Offset: 0x108
	// Line 133, Address: 0x128834, Func Offset: 0x114
	// Func End, Address: 0x128848, Func Offset: 0x128
}

// 
// Start address: 0x128850
void shCharacterSetEnemySCULow(SubCharacter* scp)
{
	// Line 149, Address: 0x128850, Func Offset: 0
	// Line 150, Address: 0x12885c, Func Offset: 0xc
	// Line 151, Address: 0x128870, Func Offset: 0x20
	// Func End, Address: 0x128880, Func Offset: 0x30
}

// 
// Start address: 0x128880
int shCharacterEnemySCUAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 163, Address: 0x128880, Func Offset: 0
	// Line 166, Address: 0x128894, Func Offset: 0x14
	// Line 167, Address: 0x1288b4, Func Offset: 0x34
	// Line 168, Address: 0x1288c4, Func Offset: 0x44
	// Line 169, Address: 0x1288e4, Func Offset: 0x64
	// Line 177, Address: 0x128930, Func Offset: 0xb0
	// Line 179, Address: 0x12893c, Func Offset: 0xbc
	// Line 181, Address: 0x128940, Func Offset: 0xc0
	// Func End, Address: 0x128954, Func Offset: 0xd4
}

// 
// Start address: 0x128960
int shCharacterEnemySCUAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 194, Address: 0x128960, Func Offset: 0
	// Line 197, Address: 0x12897c, Func Offset: 0x1c
	// Line 198, Address: 0x12899c, Func Offset: 0x3c
	// Line 199, Address: 0x1289bc, Func Offset: 0x5c
	// Line 206, Address: 0x128a18, Func Offset: 0xb8
	// Line 208, Address: 0x128a24, Func Offset: 0xc4
	// Line 210, Address: 0x128a28, Func Offset: 0xc8
	// Func End, Address: 0x128a40, Func Offset: 0xe0
}

// 
// Start address: 0x128a40
void shGetEnemySCUAttackPos(SubCharacter* scp, float* s_pos, float* s_vec, unsigned short atk)
{
	float vec[4];
	float pos1[4];
	float pos0[4];
	// Line 223, Address: 0x128a40, Func Offset: 0
	// Line 232, Address: 0x128a58, Func Offset: 0x18
	// Line 233, Address: 0x128a60, Func Offset: 0x20
	// Line 234, Address: 0x128a7c, Func Offset: 0x3c
	// Line 236, Address: 0x128a84, Func Offset: 0x44
	// Line 246, Address: 0x128a90, Func Offset: 0x50
	// Line 248, Address: 0x128ad4, Func Offset: 0x94
	// Line 249, Address: 0x128afc, Func Offset: 0xbc
	// Line 250, Address: 0x128b04, Func Offset: 0xc4
	// Line 252, Address: 0x128b0c, Func Offset: 0xcc
	// Line 253, Address: 0x128b34, Func Offset: 0xf4
	// Line 254, Address: 0x128b64, Func Offset: 0x124
	// Line 256, Address: 0x128b6c, Func Offset: 0x12c
	// Line 257, Address: 0x128ba8, Func Offset: 0x168
	// Line 258, Address: 0x128bb0, Func Offset: 0x170
	// Line 260, Address: 0x128bb8, Func Offset: 0x178
	// Line 261, Address: 0x128be0, Func Offset: 0x1a0
	// Line 262, Address: 0x128c10, Func Offset: 0x1d0
	// Line 264, Address: 0x128c18, Func Offset: 0x1d8
	// Line 265, Address: 0x128c54, Func Offset: 0x214
	// Line 268, Address: 0x128c5c, Func Offset: 0x21c
	// Line 270, Address: 0x128c84, Func Offset: 0x244
	// Line 271, Address: 0x128c94, Func Offset: 0x254
	// Line 272, Address: 0x128ca4, Func Offset: 0x264
	// Line 273, Address: 0x128cb4, Func Offset: 0x274
	// Line 274, Address: 0x128cc0, Func Offset: 0x280
	// Line 275, Address: 0x128ce4, Func Offset: 0x2a4
	// Func End, Address: 0x128cfc, Func Offset: 0x2bc
}

