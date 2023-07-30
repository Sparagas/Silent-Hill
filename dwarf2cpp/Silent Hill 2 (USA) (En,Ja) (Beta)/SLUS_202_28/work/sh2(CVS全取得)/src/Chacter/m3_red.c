typedef struct EnARM_DATA;
typedef struct _CL_HITPOLY_HEAD;
typedef struct EnTYU_DATA;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct EnNSE_DATA;
typedef struct EnCOMMUNICATION;
typedef struct EnLOCAL_DATA;
typedef struct SubCharacter;
typedef struct _AnimeInfo;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct shSkelton;
typedef struct _anon2;
typedef struct EnMKN_DATA;
typedef struct EnEDB_DATA;
typedef struct EnPAP_DATA;
typedef struct _anon3;
typedef struct EnNIK_DATA;
typedef struct EnBOS_DATA;
typedef struct EnSCU_DATA;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct shBattleFight;
typedef struct EnPATH_DATA;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct EnRED_DATA;
typedef struct shBattleInfo;
typedef struct EnINS_DATA;
typedef struct EnIKE_DATA;
typedef struct _CL_VHIT_WALL;

typedef void(*type_6)(SubCharacter*);
typedef void(*type_8)(SubCharacter*);
typedef void(*type_13)(SubCharacter*);

typedef unsigned char type_0[20];
typedef _AnimeInfo type_1[12];
typedef shAttackInfo type_2[66];
typedef int type_3[7];
typedef unsigned char type_4[14];
typedef char type_5[3];
typedef unsigned char type_7[69];
typedef float type_9[4];
typedef float type_10[4][4];
typedef _AnimeInfo type_11[7];
typedef unsigned char type_12[4];
typedef unsigned char type_14[14];
typedef float type_15[4];
typedef float type_16[4];
typedef unsigned char type_17[97];

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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
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
	char pad;
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

struct _anon3
{
	float d[4][4];
};

struct EnNIK_DATA
{
	float swing[4];
	float acc[4];
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct EnRED_DATA
{
	int attack_count;
	int boss_timer;
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
_AnimeInfo red_anim[12];
_AnimeInfo d_red_anim[7];
int dred_anime_adr_list[7];
void(*EnemyREDFunction)(SubCharacter*);

int EnemyREDInit();
void EnemyREDFunction();
void shCharacterSetEnemyREDLow(SubCharacter* scp);
void shCharacterSetWeaponRED(SubCharacter* scp, int on_off);
int shCharacterEnemyREDAnimeSet(SubCharacter* scp, int anime_id);
int shCharacterEnemyREDAnimeSetP(SubCharacter* scp, int anime_id, int comp);
void shGetEnemyREDAttackPos(SubCharacter* scp, float* s_pos, float* s_vec, unsigned short atk);

// 
// Start address: 0x11c980
int EnemyREDInit()
{
	// Line 66, Address: 0x11c980, Func Offset: 0
	// Line 67, Address: 0x11c984, Func Offset: 0x4
	// Func End, Address: 0x11c98c, Func Offset: 0xc
}

// 
// Start address: 0x11c990
void SubCharacter::EnemyREDFunction()
{
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	// Line 79, Address: 0x11c990, Func Offset: 0
	// Line 83, Address: 0x11c9a0, Func Offset: 0x10
	// Line 85, Address: 0x11c9c0, Func Offset: 0x30
	// Line 89, Address: 0x11c9d0, Func Offset: 0x40
	// Line 90, Address: 0x11c9dc, Func Offset: 0x4c
	// Line 92, Address: 0x11c9e8, Func Offset: 0x58
	// Line 95, Address: 0x11c9f0, Func Offset: 0x60
	// Line 97, Address: 0x11ca00, Func Offset: 0x70
	// Line 98, Address: 0x11ca10, Func Offset: 0x80
	// Line 109, Address: 0x11ca24, Func Offset: 0x94
	// Line 112, Address: 0x11ca34, Func Offset: 0xa4
	// Line 113, Address: 0x11ca48, Func Offset: 0xb8
	// Line 114, Address: 0x11ca4c, Func Offset: 0xbc
	// Line 115, Address: 0x11ca5c, Func Offset: 0xcc
	// Line 116, Address: 0x11ca64, Func Offset: 0xd4
	// Line 121, Address: 0x11ca68, Func Offset: 0xd8
	// Line 124, Address: 0x11ca7c, Func Offset: 0xec
	// Line 125, Address: 0x11ca88, Func Offset: 0xf8
	// Line 127, Address: 0x11ca94, Func Offset: 0x104
	// Line 135, Address: 0x11caa0, Func Offset: 0x110
	// Func End, Address: 0x11cab4, Func Offset: 0x124
}

// 
// Start address: 0x11cac0
void shCharacterSetEnemyREDLow(SubCharacter* scp)
{
	// Line 151, Address: 0x11cac0, Func Offset: 0
	// Line 152, Address: 0x11cac8, Func Offset: 0x8
	// Line 153, Address: 0x11cad8, Func Offset: 0x18
	// Func End, Address: 0x11cae8, Func Offset: 0x28
}

// 
// Start address: 0x11caf0
void shCharacterSetWeaponRED(SubCharacter* scp, int on_off)
{
	// Line 161, Address: 0x11caf0, Func Offset: 0
	// Line 162, Address: 0x11caf8, Func Offset: 0x8
	// Line 163, Address: 0x11cb10, Func Offset: 0x20
	// Func End, Address: 0x11cb20, Func Offset: 0x30
}

// 
// Start address: 0x11cb20
int shCharacterEnemyREDAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 176, Address: 0x11cb20, Func Offset: 0
	// Line 179, Address: 0x11cb3c, Func Offset: 0x1c
	// Line 181, Address: 0x11cb58, Func Offset: 0x38
	// Line 183, Address: 0x11cb64, Func Offset: 0x44
	// Line 184, Address: 0x11cb74, Func Offset: 0x54
	// Line 185, Address: 0x11cb90, Func Offset: 0x70
	// Line 193, Address: 0x11cbcc, Func Offset: 0xac
	// Line 195, Address: 0x11cbd8, Func Offset: 0xb8
	// Line 197, Address: 0x11cbdc, Func Offset: 0xbc
	// Func End, Address: 0x11cbf8, Func Offset: 0xd8
}

// 
// Start address: 0x11cc00
int shCharacterEnemyREDAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 210, Address: 0x11cc00, Func Offset: 0
	// Line 213, Address: 0x11cc20, Func Offset: 0x20
	// Line 214, Address: 0x11cc3c, Func Offset: 0x3c
	// Line 215, Address: 0x11cc58, Func Offset: 0x58
	// Line 222, Address: 0x11cca0, Func Offset: 0xa0
	// Line 224, Address: 0x11ccac, Func Offset: 0xac
	// Line 226, Address: 0x11ccb0, Func Offset: 0xb0
	// Func End, Address: 0x11cccc, Func Offset: 0xcc
}

// 
// Start address: 0x11ccd0
void shGetEnemyREDAttackPos(SubCharacter* scp, float* s_pos, float* s_vec, unsigned short atk)
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
	// Line 238, Address: 0x11ccd0, Func Offset: 0
	// Line 242, Address: 0x11ccec, Func Offset: 0x1c
	// Line 245, Address: 0x11cd00, Func Offset: 0x30
	// Line 246, Address: 0x11cd30, Func Offset: 0x60
	// Line 248, Address: 0x11cd34, Func Offset: 0x64
	// Line 251, Address: 0x11cd7c, Func Offset: 0xac
	// Line 252, Address: 0x11cd80, Func Offset: 0xb0
	// Line 256, Address: 0x11cd88, Func Offset: 0xb8
	// Line 259, Address: 0x11cd8c, Func Offset: 0xbc
	// Line 260, Address: 0x11cd98, Func Offset: 0xc8
	// Line 261, Address: 0x11cd9c, Func Offset: 0xcc
	// Line 264, Address: 0x11cdb4, Func Offset: 0xe4
	// Line 265, Address: 0x11cde4, Func Offset: 0x114
	// Line 266, Address: 0x11cdec, Func Offset: 0x11c
	// Line 267, Address: 0x11cdf4, Func Offset: 0x124
	// Line 268, Address: 0x11cdfc, Func Offset: 0x12c
	// Line 269, Address: 0x11ce04, Func Offset: 0x134
	// Line 270, Address: 0x11ce08, Func Offset: 0x138
	// Line 272, Address: 0x11ce10, Func Offset: 0x140
	// Line 273, Address: 0x11ce24, Func Offset: 0x154
	// Line 277, Address: 0x11ce30, Func Offset: 0x160
	// Line 278, Address: 0x11ce44, Func Offset: 0x174
	// Line 279, Address: 0x11ce54, Func Offset: 0x184
	// Line 280, Address: 0x11ce64, Func Offset: 0x194
	// Line 281, Address: 0x11ce74, Func Offset: 0x1a4
	// Line 282, Address: 0x11ce7c, Func Offset: 0x1ac
	// Line 283, Address: 0x11ce90, Func Offset: 0x1c0
	// Line 284, Address: 0x11cea0, Func Offset: 0x1d0
	// Line 285, Address: 0x11ceb0, Func Offset: 0x1e0
	// Line 286, Address: 0x11cec0, Func Offset: 0x1f0
	// Line 287, Address: 0x11cec4, Func Offset: 0x1f4
	// Line 288, Address: 0x11cee8, Func Offset: 0x218
	// Func End, Address: 0x11cf04, Func Offset: 0x234
}

