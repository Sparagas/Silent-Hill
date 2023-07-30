typedef struct _CL_HITPOLY_HEAD;
typedef struct shSkelton;
typedef struct EnMKN_DATA;
typedef struct shAttackInfo;
typedef struct EnEDB_DATA;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct SubCharacter;
typedef struct _CL_VHIT_RESULT;
typedef struct _AnimeInfo;
typedef union _anon1;
typedef struct EnPAP_DATA;
typedef struct EnNIK_DATA;
typedef struct _anon2;
typedef struct EnBOS_DATA;
typedef struct EnSCU_DATA;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct EnPATH_DATA;
typedef struct _anon3;
typedef struct EnRED_DATA;
typedef struct EnCOMMUNICATION;
typedef struct EnINS_DATA;
typedef struct EnIKE_DATA;
typedef struct shBattleFight;
typedef struct EnARM_DATA;
typedef struct shBattleShot;
typedef struct EnTYU_DATA;
typedef struct EnNSE_DATA;
typedef struct shBattleArea;
typedef struct EnLOCAL_DATA;
typedef struct shBattleInfo;
typedef struct _CL_VHIT_WALL;

typedef void(*type_6)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_9)(SubCharacter*);

typedef int type_0[10];
typedef unsigned char type_1[20];
typedef _AnimeInfo type_2[36];
typedef char type_3[3];
typedef shAttackInfo type_4[66];
typedef unsigned char type_5[14];
typedef unsigned char type_8[69];
typedef float type_10[4];
typedef float type_11[4][4];
typedef _AnimeInfo type_12[10];
typedef unsigned char type_13[4];
typedef unsigned char type_14[14];
typedef float type_15[4];
typedef float type_16[4];
typedef float type_17[4];
typedef float type_18[4][4];
typedef unsigned char type_19[97];

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
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

	void EnemySCUFunction();
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
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

union _anon1
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
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

struct EnONI_DATA
{
	char id;
	char check;
	char warp;
	short timer2;
	void* other;
	void* tp;
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

struct _anon3
{
	float d[4][4];
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct shBattleArea
{
	float center;
	float radius;
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
_AnimeInfo scu_anim[36];
_AnimeInfo d_scu_anim[10];
int dscu_anime_adr_list[10];
void(*EnemySCUFunction)(SubCharacter*);

int EnemySCUInit();
void EnemySCUFunction();
void shCharacterSetEnemySCULow(SubCharacter* scp);
int shCharacterEnemySCUAnimeSet(SubCharacter* scp, int anime_id);
int shCharacterEnemySCUAnimeSetP(SubCharacter* scp, int anime_id, int comp);
void shGetEnemySCUAttackPos(SubCharacter* scp, float* s_pos, float* s_vec, unsigned short atk);
void shEnemySCU_EffectFoot(SubCharacter* scp, int type);

// 
// Start address: 0x11f8c0
int EnemySCUInit()
{
	// Line 66, Address: 0x11f8c0, Func Offset: 0
	// Line 67, Address: 0x11f8c4, Func Offset: 0x4
	// Func End, Address: 0x11f8cc, Func Offset: 0xc
}

// 
// Start address: 0x11f8d0
void SubCharacter::EnemySCUFunction()
{
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	// Line 79, Address: 0x11f8d0, Func Offset: 0
	// Line 83, Address: 0x11f8e0, Func Offset: 0x10
	// Line 85, Address: 0x11f900, Func Offset: 0x30
	// Line 89, Address: 0x11f910, Func Offset: 0x40
	// Line 90, Address: 0x11f91c, Func Offset: 0x4c
	// Line 92, Address: 0x11f928, Func Offset: 0x58
	// Line 94, Address: 0x11f930, Func Offset: 0x60
	// Line 96, Address: 0x11f940, Func Offset: 0x70
	// Line 98, Address: 0x11f950, Func Offset: 0x80
	// Line 108, Address: 0x11f964, Func Offset: 0x94
	// Line 111, Address: 0x11f974, Func Offset: 0xa4
	// Line 112, Address: 0x11f98c, Func Offset: 0xbc
	// Line 113, Address: 0x11f990, Func Offset: 0xc0
	// Line 114, Address: 0x11f99c, Func Offset: 0xcc
	// Line 115, Address: 0x11f9a4, Func Offset: 0xd4
	// Line 121, Address: 0x11f9a8, Func Offset: 0xd8
	// Line 122, Address: 0x11f9b4, Func Offset: 0xe4
	// Line 124, Address: 0x11f9c0, Func Offset: 0xf0
	// Line 132, Address: 0x11f9cc, Func Offset: 0xfc
	// Func End, Address: 0x11f9e0, Func Offset: 0x110
}

// 
// Start address: 0x11f9e0
void shCharacterSetEnemySCULow(SubCharacter* scp)
{
	// Line 148, Address: 0x11f9e0, Func Offset: 0
	// Line 149, Address: 0x11f9e8, Func Offset: 0x8
	// Line 150, Address: 0x11f9f8, Func Offset: 0x18
	// Func End, Address: 0x11fa08, Func Offset: 0x28
}

// 
// Start address: 0x11fa10
int shCharacterEnemySCUAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 162, Address: 0x11fa10, Func Offset: 0
	// Line 165, Address: 0x11fa2c, Func Offset: 0x1c
	// Line 166, Address: 0x11fa48, Func Offset: 0x38
	// Line 167, Address: 0x11fa58, Func Offset: 0x48
	// Line 168, Address: 0x11fa74, Func Offset: 0x64
	// Line 176, Address: 0x11fab0, Func Offset: 0xa0
	// Line 178, Address: 0x11fabc, Func Offset: 0xac
	// Line 180, Address: 0x11fac0, Func Offset: 0xb0
	// Func End, Address: 0x11fadc, Func Offset: 0xcc
}

// 
// Start address: 0x11fae0
int shCharacterEnemySCUAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 193, Address: 0x11fae0, Func Offset: 0
	// Line 196, Address: 0x11fb00, Func Offset: 0x20
	// Line 197, Address: 0x11fb1c, Func Offset: 0x3c
	// Line 198, Address: 0x11fb38, Func Offset: 0x58
	// Line 205, Address: 0x11fb80, Func Offset: 0xa0
	// Line 207, Address: 0x11fb8c, Func Offset: 0xac
	// Line 209, Address: 0x11fb90, Func Offset: 0xb0
	// Func End, Address: 0x11fbac, Func Offset: 0xcc
}

// 
// Start address: 0x11fbb0
void shGetEnemySCUAttackPos(SubCharacter* scp, float* s_pos, float* s_vec, unsigned short atk)
{
	float vec[4];
	float pos1[4];
	float pos0[4];
	// Line 222, Address: 0x11fbb0, Func Offset: 0
	// Line 231, Address: 0x11fbc8, Func Offset: 0x18
	// Line 232, Address: 0x11fbd0, Func Offset: 0x20
	// Line 233, Address: 0x11fbec, Func Offset: 0x3c
	// Line 235, Address: 0x11fbf4, Func Offset: 0x44
	// Line 245, Address: 0x11fc00, Func Offset: 0x50
	// Line 247, Address: 0x11fc44, Func Offset: 0x94
	// Line 248, Address: 0x11fc6c, Func Offset: 0xbc
	// Line 249, Address: 0x11fc94, Func Offset: 0xe4
	// Line 250, Address: 0x11fc9c, Func Offset: 0xec
	// Line 252, Address: 0x11fca4, Func Offset: 0xf4
	// Line 253, Address: 0x11fccc, Func Offset: 0x11c
	// Line 254, Address: 0x11fcf4, Func Offset: 0x144
	// Line 255, Address: 0x11fd24, Func Offset: 0x174
	// Line 257, Address: 0x11fd2c, Func Offset: 0x17c
	// Line 258, Address: 0x11fd68, Func Offset: 0x1b8
	// Line 259, Address: 0x11fda4, Func Offset: 0x1f4
	// Line 260, Address: 0x11fdac, Func Offset: 0x1fc
	// Line 262, Address: 0x11fdb4, Func Offset: 0x204
	// Line 263, Address: 0x11fddc, Func Offset: 0x22c
	// Line 264, Address: 0x11fe04, Func Offset: 0x254
	// Line 265, Address: 0x11fe34, Func Offset: 0x284
	// Line 267, Address: 0x11fe3c, Func Offset: 0x28c
	// Line 268, Address: 0x11fe78, Func Offset: 0x2c8
	// Line 269, Address: 0x11feb4, Func Offset: 0x304
	// Line 273, Address: 0x11febc, Func Offset: 0x30c
	// Line 274, Address: 0x11fecc, Func Offset: 0x31c
	// Line 275, Address: 0x11fedc, Func Offset: 0x32c
	// Line 276, Address: 0x11feec, Func Offset: 0x33c
	// Line 277, Address: 0x11fef0, Func Offset: 0x340
	// Line 278, Address: 0x11ff14, Func Offset: 0x364
	// Func End, Address: 0x11ff2c, Func Offset: 0x37c
}

// 
// Start address: 0x11ff30
void shEnemySCU_EffectFoot(SubCharacter* scp, int type)
{
	shSkelton* sk;
	int foot;
	int i1;
	float mat[4][4];
	// Line 289, Address: 0x11ff30, Func Offset: 0
	// Line 299, Address: 0x11ff40, Func Offset: 0x10
	// Line 302, Address: 0x11ff4c, Func Offset: 0x1c
	// Line 303, Address: 0x11ff50, Func Offset: 0x20
	// Line 304, Address: 0x11ff5c, Func Offset: 0x2c
	// Line 306, Address: 0x11ff7c, Func Offset: 0x4c
	// Line 313, Address: 0x11ff90, Func Offset: 0x60
	// Line 315, Address: 0x11ffa8, Func Offset: 0x78
	// Line 316, Address: 0x11ffb8, Func Offset: 0x88
	// Func End, Address: 0x11ffcc, Func Offset: 0x9c
}

