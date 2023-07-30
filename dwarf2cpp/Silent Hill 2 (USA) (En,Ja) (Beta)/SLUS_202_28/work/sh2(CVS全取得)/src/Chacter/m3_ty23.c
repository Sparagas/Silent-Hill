typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct EnAMBUSH_DATA;
typedef struct SubCharacter;
typedef struct _CL_VHIT_RESULT;
typedef struct EnINS_DATA;
typedef struct EnIKE_DATA;
typedef union _anon1;
typedef struct EnARM_DATA;
typedef struct EnTYU_DATA;
typedef struct EnNSE_DATA;
typedef struct EnCOMMUNICATION;
typedef struct shSkelton;
typedef struct EnLOCAL_DATA;
typedef struct _anon2;
typedef struct _anon3;
typedef struct EnMKN_DATA;
typedef struct EnEDB_DATA;
typedef struct EnPAP_DATA;
typedef struct EnNIK_DATA;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct EnBOS_DATA;
typedef struct EnSCU_DATA;
typedef struct shBattleArea;
typedef struct EnONI_DATA;
typedef struct shBattleInfo;
typedef struct EnPATH_DATA;
typedef struct _CL_VHIT_WALL;
typedef struct EnRED_DATA;

typedef void(*type_3)(SubCharacter*);
typedef void(*type_5)(SubCharacter*);
typedef void(*type_13)(SubCharacter*);

typedef unsigned char type_0[20];
typedef shAttackInfo type_1[66];
typedef unsigned char type_2[14];
typedef unsigned char type_4[69];
typedef float type_6[4];
typedef float type_7[4][4];
typedef unsigned char type_8[4];
typedef char type_9[3];
typedef unsigned char type_10[14];
typedef float type_11[4];
typedef float type_12[4];
typedef unsigned char type_14[97];

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

	void EnemyTY23Function();
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
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

union _anon1
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

struct _anon3
{
	float d[4][4];
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

struct shBattleArea
{
	float center;
	float radius;
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

struct EnPATH_DATA
{
	float angle;
	float markangle;
	float dist;
	char step;
	char deadend;
	short timer;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct EnRED_DATA
{
	int attack_count;
	int boss_timer;
	void* tp;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
void(*EnemyTY23Function)(SubCharacter*);

int EnemyTY23Init();
void EnemyTY23Function();
void shCharacterSetEnemyTY23Low(SubCharacter* scp);

// 
// Start address: 0x291500
int EnemyTY23Init()
{
	// Line 40, Address: 0x291500, Func Offset: 0
	// Line 41, Address: 0x291504, Func Offset: 0x4
	// Func End, Address: 0x29150c, Func Offset: 0xc
}

// 
// Start address: 0x291510
void SubCharacter::EnemyTY23Function()
{
	EnLOCAL_DATA* dp;
	float scale;
	// Line 53, Address: 0x291510, Func Offset: 0
	// Line 57, Address: 0x291520, Func Offset: 0x10
	// Line 59, Address: 0x291540, Func Offset: 0x30
	// Line 61, Address: 0x291550, Func Offset: 0x40
	// Line 62, Address: 0x291558, Func Offset: 0x48
	// Line 64, Address: 0x291564, Func Offset: 0x54
	// Line 66, Address: 0x291584, Func Offset: 0x74
	// Line 67, Address: 0x29159c, Func Offset: 0x8c
	// Line 68, Address: 0x2915a0, Func Offset: 0x90
	// Line 69, Address: 0x2915b0, Func Offset: 0xa0
	// Line 71, Address: 0x2915cc, Func Offset: 0xbc
	// Line 77, Address: 0x2915d8, Func Offset: 0xc8
	// Func End, Address: 0x2915ec, Func Offset: 0xdc
}

// 
// Start address: 0x2915f0
void shCharacterSetEnemyTY23Low(SubCharacter* scp)
{
	// Line 93, Address: 0x2915f0, Func Offset: 0
	// Line 94, Address: 0x2915f8, Func Offset: 0x8
	// Line 95, Address: 0x291608, Func Offset: 0x18
	// Func End, Address: 0x291618, Func Offset: 0x28
}

