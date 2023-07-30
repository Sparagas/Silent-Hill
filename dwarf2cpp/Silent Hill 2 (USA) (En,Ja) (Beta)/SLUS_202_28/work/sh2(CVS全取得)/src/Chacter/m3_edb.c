typedef struct _CL_HITPOLY_HEAD;
typedef struct EnPAP_DATA;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct SubCharacter;
typedef struct EnNIK_DATA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct EnBOS_DATA;
typedef struct EnSCU_DATA;
typedef struct EnAMBUSH_DATA;
typedef struct shSkelton;
typedef struct EnONI_DATA;
typedef struct _anon2;
typedef struct _AnimeInfo;
typedef struct EnPATH_DATA;
typedef struct EnRED_DATA;
typedef struct EnCOMMUNICATION;
typedef struct _anon3;
typedef struct EnINS_DATA;
typedef struct EnIKE_DATA;
typedef struct EnARM_DATA;
typedef struct EnTYU_DATA;
typedef struct shBattleFight;
typedef struct EnNSE_DATA;
typedef struct EnLOCAL_DATA;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct EnMKN_DATA;
typedef struct EnEDB_DATA;
typedef struct _CL_VHIT_WALL;

typedef void(*type_5)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_12)(SubCharacter*);

typedef unsigned char type_0[20];
typedef _AnimeInfo type_1[22];
typedef int type_2[2];
typedef shAttackInfo type_3[66];
typedef unsigned char type_4[14];
typedef unsigned char type_6[69];
typedef float type_8[4];
typedef float type_9[4][4];
typedef _AnimeInfo type_10[2];
typedef unsigned char type_11[4];
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

struct EnPAP_DATA
{
	float target[4];
	char dc;
	char dcm;
	char signs;
	char count;
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

	void EnemyEDBFunction();
};

struct EnNIK_DATA
{
	float swing[4];
	float acc[4];
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

struct EnONI_DATA
{
	char id;
	char check;
	char warp;
	short timer2;
	void* other;
	void* tp;
};

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
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

struct _anon3
{
	float d[4][4];
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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
_AnimeInfo edb_anim[22];
_AnimeInfo d_edb_anim[2];
int dedb_anime_adr_list[2];
void(*EnemyEDBFunction)(SubCharacter*);

int EnemyEDBInit();
void EnemyEDBFunction();
void shCharacterSetEnemyEDBLow(SubCharacter* scp);
int shCharacterEnemyEDBAnimeSet(SubCharacter* scp, int anime_id);
int shCharacterEnemyEDBAnimeSetP(SubCharacter* scp, int anime_id, int comp);
void shGetEnemyEDBAttackPos(SubCharacter* scp, float* s_pos, float* s_vec, unsigned short atk);

// 
// Start address: 0x209bb0
int EnemyEDBInit()
{
	// Line 56, Address: 0x209bb0, Func Offset: 0
	// Line 57, Address: 0x209bb4, Func Offset: 0x4
	// Func End, Address: 0x209bbc, Func Offset: 0xc
}

// 
// Start address: 0x209bc0
void SubCharacter::EnemyEDBFunction()
{
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	// Line 70, Address: 0x209bc0, Func Offset: 0
	// Line 74, Address: 0x209bd0, Func Offset: 0x10
	// Line 80, Address: 0x209bf0, Func Offset: 0x30
	// Line 81, Address: 0x209bfc, Func Offset: 0x3c
	// Line 83, Address: 0x209c08, Func Offset: 0x48
	// Line 85, Address: 0x209c18, Func Offset: 0x58
	// Line 86, Address: 0x209c24, Func Offset: 0x64
	// Line 88, Address: 0x209c30, Func Offset: 0x70
	// Line 98, Address: 0x209c44, Func Offset: 0x84
	// Line 101, Address: 0x209c54, Func Offset: 0x94
	// Line 102, Address: 0x209c6c, Func Offset: 0xac
	// Line 103, Address: 0x209c70, Func Offset: 0xb0
	// Line 104, Address: 0x209c7c, Func Offset: 0xbc
	// Line 105, Address: 0x209c84, Func Offset: 0xc4
	// Line 110, Address: 0x209c88, Func Offset: 0xc8
	// Line 111, Address: 0x209c94, Func Offset: 0xd4
	// Line 113, Address: 0x209ca0, Func Offset: 0xe0
	// Line 121, Address: 0x209cac, Func Offset: 0xec
	// Func End, Address: 0x209cc0, Func Offset: 0x100
}

// 
// Start address: 0x209cc0
void shCharacterSetEnemyEDBLow(SubCharacter* scp)
{
	// Line 137, Address: 0x209cc0, Func Offset: 0
	// Line 138, Address: 0x209cc8, Func Offset: 0x8
	// Line 139, Address: 0x209cd8, Func Offset: 0x18
	// Func End, Address: 0x209ce8, Func Offset: 0x28
}

// 
// Start address: 0x209cf0
int shCharacterEnemyEDBAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	short id;
	// Line 152, Address: 0x209cf0, Func Offset: 0
	// Line 156, Address: 0x209d0c, Func Offset: 0x1c
	// Line 158, Address: 0x209d1c, Func Offset: 0x2c
	// Line 159, Address: 0x209d28, Func Offset: 0x38
	// Line 160, Address: 0x209d38, Func Offset: 0x48
	// Line 161, Address: 0x209d54, Func Offset: 0x64
	// Line 168, Address: 0x209d90, Func Offset: 0xa0
	// Line 170, Address: 0x209d9c, Func Offset: 0xac
	// Line 172, Address: 0x209da0, Func Offset: 0xb0
	// Func End, Address: 0x209dbc, Func Offset: 0xcc
}

// 
// Start address: 0x209dc0
int shCharacterEnemyEDBAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 185, Address: 0x209dc0, Func Offset: 0
	// Line 188, Address: 0x209de0, Func Offset: 0x20
	// Line 189, Address: 0x209dfc, Func Offset: 0x3c
	// Line 190, Address: 0x209e18, Func Offset: 0x58
	// Line 197, Address: 0x209e60, Func Offset: 0xa0
	// Line 199, Address: 0x209e6c, Func Offset: 0xac
	// Line 201, Address: 0x209e70, Func Offset: 0xb0
	// Func End, Address: 0x209e8c, Func Offset: 0xcc
}

// 
// Start address: 0x209e90
void shGetEnemyEDBAttackPos(SubCharacter* scp, float* s_pos, float* s_vec, unsigned short atk)
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
	// Line 219, Address: 0x209e90, Func Offset: 0
	// Line 229, Address: 0x209eac, Func Offset: 0x1c
	// Line 232, Address: 0x209ec0, Func Offset: 0x30
	// Line 233, Address: 0x209ef0, Func Offset: 0x60
	// Line 235, Address: 0x209ef4, Func Offset: 0x64
	// Line 237, Address: 0x209f18, Func Offset: 0x88
	// Line 239, Address: 0x209f1c, Func Offset: 0x8c
	// Line 240, Address: 0x209f28, Func Offset: 0x98
	// Line 243, Address: 0x209f44, Func Offset: 0xb4
	// Line 244, Address: 0x209f74, Func Offset: 0xe4
	// Line 245, Address: 0x209f78, Func Offset: 0xe8
	// Line 246, Address: 0x209f80, Func Offset: 0xf0
	// Line 247, Address: 0x209f88, Func Offset: 0xf8
	// Line 248, Address: 0x209f90, Func Offset: 0x100
	// Line 249, Address: 0x209f98, Func Offset: 0x108
	// Line 251, Address: 0x209f9c, Func Offset: 0x10c
	// Line 253, Address: 0x209fb0, Func Offset: 0x120
	// Line 254, Address: 0x209fc0, Func Offset: 0x130
	// Line 255, Address: 0x209fd0, Func Offset: 0x140
	// Line 256, Address: 0x209fe0, Func Offset: 0x150
	// Line 259, Address: 0x209fe8, Func Offset: 0x158
	// Line 261, Address: 0x209ffc, Func Offset: 0x16c
	// Line 262, Address: 0x20a008, Func Offset: 0x178
	// Line 263, Address: 0x20a010, Func Offset: 0x180
	// Line 264, Address: 0x20a018, Func Offset: 0x188
	// Line 267, Address: 0x20a01c, Func Offset: 0x18c
	// Line 269, Address: 0x20a030, Func Offset: 0x1a0
	// Line 270, Address: 0x20a040, Func Offset: 0x1b0
	// Line 271, Address: 0x20a050, Func Offset: 0x1c0
	// Line 272, Address: 0x20a060, Func Offset: 0x1d0
	// Line 275, Address: 0x20a068, Func Offset: 0x1d8
	// Line 277, Address: 0x20a07c, Func Offset: 0x1ec
	// Line 278, Address: 0x20a08c, Func Offset: 0x1fc
	// Line 279, Address: 0x20a09c, Func Offset: 0x20c
	// Line 282, Address: 0x20a0ac, Func Offset: 0x21c
	// Line 283, Address: 0x20a0cc, Func Offset: 0x23c
	// Line 285, Address: 0x20a0d4, Func Offset: 0x244
	// Line 287, Address: 0x20a0d8, Func Offset: 0x248
	// Line 288, Address: 0x20a0e4, Func Offset: 0x254
	// Line 291, Address: 0x20a104, Func Offset: 0x274
	// Line 292, Address: 0x20a134, Func Offset: 0x2a4
	// Line 293, Address: 0x20a13c, Func Offset: 0x2ac
	// Line 294, Address: 0x20a144, Func Offset: 0x2b4
	// Line 295, Address: 0x20a14c, Func Offset: 0x2bc
	// Line 296, Address: 0x20a154, Func Offset: 0x2c4
	// Line 297, Address: 0x20a158, Func Offset: 0x2c8
	// Line 299, Address: 0x20a160, Func Offset: 0x2d0
	// Line 300, Address: 0x20a174, Func Offset: 0x2e4
	// Line 303, Address: 0x20a180, Func Offset: 0x2f0
	// Line 304, Address: 0x20a194, Func Offset: 0x304
	// Line 305, Address: 0x20a1a4, Func Offset: 0x314
	// Line 306, Address: 0x20a1b4, Func Offset: 0x324
	// Line 307, Address: 0x20a1c4, Func Offset: 0x334
	// Line 308, Address: 0x20a1cc, Func Offset: 0x33c
	// Line 309, Address: 0x20a1e0, Func Offset: 0x350
	// Line 310, Address: 0x20a1f0, Func Offset: 0x360
	// Line 311, Address: 0x20a200, Func Offset: 0x370
	// Line 312, Address: 0x20a210, Func Offset: 0x380
	// Line 313, Address: 0x20a214, Func Offset: 0x384
	// Line 318, Address: 0x20a238, Func Offset: 0x3a8
	// Func End, Address: 0x20a254, Func Offset: 0x3c4
}

