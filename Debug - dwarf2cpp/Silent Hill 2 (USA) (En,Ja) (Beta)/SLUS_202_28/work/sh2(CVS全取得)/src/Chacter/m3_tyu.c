typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct SubCharacter;
typedef struct EnBOS_DATA;
typedef struct EnSCU_DATA;
typedef struct EnAMBUSH_DATA;
typedef struct _CL_VHIT_RESULT;
typedef struct EnONI_DATA;
typedef union _anon1;
typedef struct _AnimeInfo;
typedef struct EnPATH_DATA;
typedef struct shSkelton;
typedef struct _anon2;
typedef struct EnRED_DATA;
typedef struct EnCOMMUNICATION;
typedef struct EnINS_DATA;
typedef struct EnIKE_DATA;
typedef struct _anon3;
typedef struct EnARM_DATA;
typedef struct EnTYU_DATA;
typedef struct EnNSE_DATA;
typedef struct EnLOCAL_DATA;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct EnMKN_DATA;
typedef struct shBattleArea;
typedef struct EnEDB_DATA;
typedef struct shBattleInfo;
typedef struct EnPAP_DATA;
typedef struct EnNIK_DATA;
typedef struct _CL_VHIT_WALL;

typedef void(*type_5)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);
typedef void(*type_8)(SubCharacter*);

typedef int type_0[1];
typedef unsigned char type_1[20];
typedef _AnimeInfo type_2[3];
typedef shAttackInfo type_3[66];
typedef unsigned char type_4[14];
typedef unsigned char type_7[69];
typedef float type_9[4];
typedef float type_10[4][4];
typedef _AnimeInfo type_11[1];
typedef unsigned char type_12[4];
typedef unsigned char type_13[14];
typedef float type_14[4];
typedef float type_15[4];
typedef unsigned char type_16[97];
typedef char type_17[3];

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
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
	unsigned int model_type;
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

	void EnemyTYUFunction();
};

struct EnBOS_DATA
{
	float target[4];
	void* insect_dp;
	int near_count;
	float dist;
	float move_speed;
	float rot_speed;
	float rot_add;
	float y_speed;
	int mode;
	int end_count;
	char signs;
	char count;
};

struct EnSCU_DATA
{
	float stpos[4];
	float target[4];
	EnAMBUSH_DATA* ambush;
	int count;
	char dc;
	char dcm;
};

struct EnAMBUSH_DATA
{
	float pl_x_min;
	float pl_z_min;
	float pl_x_max;
	float pl_z_max;
	float pos_x;
	float pos_z;
	float dir;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
};

struct EnONI_DATA
{
	char id;
	char check;
	char warp;
	short timer2;
	void* other;
	void* tp;
};

union _anon1
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	char pad;
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

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

struct EnRED_DATA
{
	int attack_count;
	int boss_timer;
	void* tp;
};

struct EnCOMMUNICATION
{
	float pos[4];
	int kind;
	int type;
	int time;
	float dist;
};

struct EnINS_DATA
{
	float view_rot[4];
	float rot_add[4];
	void* leader;
	float def_speed;
	float move_speed;
	float speed_add;
	float rot_speed;
	float y_speed;
	float twin_dist;
	float dist_add;
};

struct EnIKE_DATA
{
	float handpos[4];
	float swing;
	int near_count;
	float dist;
	char direc;
	char signs;
	char count;
	char pipe_count;
};

struct _anon3
{
	float d[4][4];
};

struct EnARM_DATA
{
	float hand_pos[4];
	float old_pos[4];
	int near_count;
	float dist;
	char arm;
	char attack;
	char scount;
	char signs;
	char count;
	char dir;
};

struct EnTYU_DATA
{
	float point[4];
	EnCOMMUNICATION* tcomm;
	int near_count;
	float dist;
	short count;
	char moves;
};

struct EnNSE_DATA
{
	float speed;
	float tspeed;
	char signs;
	char count;
	char dc;
	char dcm;
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
	char d_count;
	char last_atk;
	char anim;
	unsigned char anim_loop;
	short anim_s;
	unsigned int flag;
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
	float trx;
	float trz;
	float size;
	float new_size;
	float tall;
	float new_tall;
	float center_y;
	float new_center;
	float eye_y;
	float new_eye;
	float p_dist;
	float radio;
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
		EnARM_DATA arm;
		EnBOS_DATA bos;
		EnNIK_DATA nik;
		EnINS_DATA ins;
	};
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

struct EnMKN_DATA
{
	float stpos[4];
	float target[4];
	void* tp;
	float fall;
	short frame;
	char dc;
	char dcm;
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
	char pcount;
};

struct shBattleInfo
{
	float pos[4];
	float vec[4];
	unsigned short id;
	unsigned short kind;
	float dead_timer;
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
	unsigned char se;
};

struct EnPAP_DATA
{
	float target[4];
	char dc;
	char dcm;
	char signs;
	char count;
};

struct EnNIK_DATA
{
	float swing[4];
	float acc[4];
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo tyu_anim[3];
_AnimeInfo d_tyu_anim[1];
int dtyu_anime_adr_list[1];
void(*EnemyTYUFunction)(SubCharacter*);

int EnemyTYUInit();
void EnemyTYUFunction();
void shCharacterSetEnemyTYULow(SubCharacter* scp);
int shCharacterEnemyTYUAnimeSetP(SubCharacter* scp, int anime_id, int comp);
void shGetEnemyTYUAttackPos(SubCharacter* scp, float* s_pos, float* s_vec);

// 
// Start address: 0x220700
int EnemyTYUInit()
{
	// Line 57, Address: 0x220700, Func Offset: 0
	// Line 58, Address: 0x220704, Func Offset: 0x4
	// Func End, Address: 0x22070c, Func Offset: 0xc
}

// 
// Start address: 0x220710
void SubCharacter::EnemyTYUFunction()
{
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	// Line 70, Address: 0x220710, Func Offset: 0
	// Line 74, Address: 0x220720, Func Offset: 0x10
	// Line 76, Address: 0x220740, Func Offset: 0x30
	// Line 80, Address: 0x220750, Func Offset: 0x40
	// Line 81, Address: 0x22075c, Func Offset: 0x4c
	// Line 83, Address: 0x220768, Func Offset: 0x58
	// Line 85, Address: 0x220770, Func Offset: 0x60
	// Line 87, Address: 0x220780, Func Offset: 0x70
	// Line 89, Address: 0x220790, Func Offset: 0x80
	// Line 99, Address: 0x2207a4, Func Offset: 0x94
	// Line 102, Address: 0x2207b4, Func Offset: 0xa4
	// Line 103, Address: 0x2207cc, Func Offset: 0xbc
	// Line 104, Address: 0x2207d0, Func Offset: 0xc0
	// Line 105, Address: 0x2207dc, Func Offset: 0xcc
	// Line 106, Address: 0x2207e4, Func Offset: 0xd4
	// Line 112, Address: 0x2207e8, Func Offset: 0xd8
	// Line 113, Address: 0x2207f4, Func Offset: 0xe4
	// Line 115, Address: 0x220800, Func Offset: 0xf0
	// Line 122, Address: 0x22080c, Func Offset: 0xfc
	// Func End, Address: 0x220820, Func Offset: 0x110
}

// 
// Start address: 0x220820
void shCharacterSetEnemyTYULow(SubCharacter* scp)
{
	// Line 138, Address: 0x220820, Func Offset: 0
	// Line 139, Address: 0x220828, Func Offset: 0x8
	// Line 140, Address: 0x220838, Func Offset: 0x18
	// Func End, Address: 0x220848, Func Offset: 0x28
}

// 
// Start address: 0x220850
int shCharacterEnemyTYUAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 185, Address: 0x220850, Func Offset: 0
	// Line 188, Address: 0x220870, Func Offset: 0x20
	// Line 189, Address: 0x22088c, Func Offset: 0x3c
	// Line 190, Address: 0x2208a8, Func Offset: 0x58
	// Line 197, Address: 0x2208f0, Func Offset: 0xa0
	// Line 199, Address: 0x2208fc, Func Offset: 0xac
	// Line 201, Address: 0x220900, Func Offset: 0xb0
	// Func End, Address: 0x22091c, Func Offset: 0xcc
}

// 
// Start address: 0x220920
void shGetEnemyTYUAttackPos(SubCharacter* scp, float* s_pos, float* s_vec)
{
	shSkelton* stp;
	float wep_range[4];
	int sk_num;
	int i;
	_anon3 mat;
	_anon3 lw_mat;
	float vec[4];
	float pos1[4];
	float pos0[4];
	// Line 213, Address: 0x220920, Func Offset: 0
	// Line 217, Address: 0x22093c, Func Offset: 0x1c
	// Line 220, Address: 0x220950, Func Offset: 0x30
	// Line 221, Address: 0x220980, Func Offset: 0x60
	// Line 223, Address: 0x220984, Func Offset: 0x64
	// Line 224, Address: 0x220988, Func Offset: 0x68
	// Line 225, Address: 0x220994, Func Offset: 0x74
	// Line 228, Address: 0x2209b4, Func Offset: 0x94
	// Line 229, Address: 0x2209e4, Func Offset: 0xc4
	// Line 230, Address: 0x2209ec, Func Offset: 0xcc
	// Line 231, Address: 0x2209f4, Func Offset: 0xd4
	// Line 232, Address: 0x2209fc, Func Offset: 0xdc
	// Line 233, Address: 0x220a04, Func Offset: 0xe4
	// Line 234, Address: 0x220a08, Func Offset: 0xe8
	// Line 236, Address: 0x220a10, Func Offset: 0xf0
	// Line 237, Address: 0x220a24, Func Offset: 0x104
	// Line 241, Address: 0x220a30, Func Offset: 0x110
	// Line 242, Address: 0x220a44, Func Offset: 0x124
	// Line 243, Address: 0x220a54, Func Offset: 0x134
	// Line 244, Address: 0x220a64, Func Offset: 0x144
	// Line 245, Address: 0x220a74, Func Offset: 0x154
	// Line 246, Address: 0x220a7c, Func Offset: 0x15c
	// Line 247, Address: 0x220a90, Func Offset: 0x170
	// Line 248, Address: 0x220aa0, Func Offset: 0x180
	// Line 249, Address: 0x220ab0, Func Offset: 0x190
	// Line 250, Address: 0x220ac0, Func Offset: 0x1a0
	// Line 251, Address: 0x220ac4, Func Offset: 0x1a4
	// Line 252, Address: 0x220ae8, Func Offset: 0x1c8
	// Func End, Address: 0x220b04, Func Offset: 0x1e4
}

