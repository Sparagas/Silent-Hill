typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct _AnimeInfo;
typedef union _anon0;
typedef struct SubCharacter;
typedef struct EnBOS_DATA;
typedef struct EnSCU_DATA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
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
typedef struct shBattleArea;
typedef struct EnMKN_DATA;
typedef struct shBattleInfo;
typedef struct EnEDB_DATA;
typedef struct EnPAP_DATA;
typedef struct EnNIK_DATA;
typedef struct _CL_VHIT_WALL;

typedef void(*type_5)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_10)(SubCharacter*);

typedef unsigned char type_0[20];
typedef _AnimeInfo type_1[14];
typedef int type_2[1];
typedef shAttackInfo type_3[66];
typedef unsigned char type_4[14];
typedef unsigned char type_6[69];
typedef float type_8[4];
typedef float type_9[4][4];
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

	void EnemyARMFunction();
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

struct shBattleArea
{
	float center;
	float radius;
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
_AnimeInfo arm_anim[14];
_AnimeInfo d_arm_anim[1];
int darm_anime_adr_list[1];
void(*EnemyARMFunction)(SubCharacter*);

int EnemyARMInit();
void EnemyARMFunction();
void shCharacterSetEnemyARMLow(SubCharacter* scp);
int shCharacterEnemyARMAnimeSetP(SubCharacter* scp, int anime_id, int comp);
void shGetEnemyARMAttackPos(SubCharacter* scp, float* s_pos, float* s_vec, unsigned short atk);

// 
// Start address: 0x238ed0
int EnemyARMInit()
{
	// Line 56, Address: 0x238ed0, Func Offset: 0
	// Line 57, Address: 0x238ed4, Func Offset: 0x4
	// Func End, Address: 0x238edc, Func Offset: 0xc
}

// 
// Start address: 0x238ee0
void SubCharacter::EnemyARMFunction()
{
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	// Line 69, Address: 0x238ee0, Func Offset: 0
	// Line 73, Address: 0x238ef0, Func Offset: 0x10
	// Line 75, Address: 0x238f10, Func Offset: 0x30
	// Line 79, Address: 0x238f20, Func Offset: 0x40
	// Line 80, Address: 0x238f2c, Func Offset: 0x4c
	// Line 82, Address: 0x238f38, Func Offset: 0x58
	// Line 84, Address: 0x238f40, Func Offset: 0x60
	// Line 86, Address: 0x238f50, Func Offset: 0x70
	// Line 88, Address: 0x238f60, Func Offset: 0x80
	// Line 97, Address: 0x238f74, Func Offset: 0x94
	// Line 100, Address: 0x238f84, Func Offset: 0xa4
	// Line 101, Address: 0x238f9c, Func Offset: 0xbc
	// Line 102, Address: 0x238fa0, Func Offset: 0xc0
	// Line 103, Address: 0x238fac, Func Offset: 0xcc
	// Line 104, Address: 0x238fb4, Func Offset: 0xd4
	// Line 109, Address: 0x238fb8, Func Offset: 0xd8
	// Line 110, Address: 0x238fc4, Func Offset: 0xe4
	// Line 112, Address: 0x238fd0, Func Offset: 0xf0
	// Line 120, Address: 0x238fdc, Func Offset: 0xfc
	// Func End, Address: 0x238ff0, Func Offset: 0x110
}

// 
// Start address: 0x238ff0
void shCharacterSetEnemyARMLow(SubCharacter* scp)
{
	// Line 136, Address: 0x238ff0, Func Offset: 0
	// Line 137, Address: 0x238ff8, Func Offset: 0x8
	// Line 138, Address: 0x239008, Func Offset: 0x18
	// Func End, Address: 0x239018, Func Offset: 0x28
}

// 
// Start address: 0x239020
int shCharacterEnemyARMAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 181, Address: 0x239020, Func Offset: 0
	// Line 184, Address: 0x239040, Func Offset: 0x20
	// Line 185, Address: 0x23905c, Func Offset: 0x3c
	// Line 186, Address: 0x239078, Func Offset: 0x58
	// Line 193, Address: 0x2390c0, Func Offset: 0xa0
	// Line 195, Address: 0x2390cc, Func Offset: 0xac
	// Line 197, Address: 0x2390d0, Func Offset: 0xb0
	// Func End, Address: 0x2390ec, Func Offset: 0xcc
}

// 
// Start address: 0x2390f0
void shGetEnemyARMAttackPos(SubCharacter* scp, float* s_pos, float* s_vec, unsigned short atk)
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
	// Line 210, Address: 0x2390f0, Func Offset: 0
	// Line 214, Address: 0x23910c, Func Offset: 0x1c
	// Line 217, Address: 0x239120, Func Offset: 0x30
	// Line 218, Address: 0x239150, Func Offset: 0x60
	// Line 220, Address: 0x239154, Func Offset: 0x64
	// Line 222, Address: 0x239174, Func Offset: 0x84
	// Line 223, Address: 0x239178, Func Offset: 0x88
	// Line 225, Address: 0x239180, Func Offset: 0x90
	// Line 228, Address: 0x239184, Func Offset: 0x94
	// Line 229, Address: 0x239190, Func Offset: 0xa0
	// Line 232, Address: 0x2391ac, Func Offset: 0xbc
	// Line 233, Address: 0x2391dc, Func Offset: 0xec
	// Line 234, Address: 0x2391e4, Func Offset: 0xf4
	// Line 235, Address: 0x2391ec, Func Offset: 0xfc
	// Line 236, Address: 0x2391f4, Func Offset: 0x104
	// Line 237, Address: 0x2391fc, Func Offset: 0x10c
	// Line 238, Address: 0x239200, Func Offset: 0x110
	// Line 240, Address: 0x239208, Func Offset: 0x118
	// Line 241, Address: 0x23921c, Func Offset: 0x12c
	// Line 244, Address: 0x239228, Func Offset: 0x138
	// Line 245, Address: 0x23923c, Func Offset: 0x14c
	// Line 246, Address: 0x23924c, Func Offset: 0x15c
	// Line 247, Address: 0x23925c, Func Offset: 0x16c
	// Line 248, Address: 0x23926c, Func Offset: 0x17c
	// Line 249, Address: 0x239274, Func Offset: 0x184
	// Line 250, Address: 0x239288, Func Offset: 0x198
	// Line 251, Address: 0x239298, Func Offset: 0x1a8
	// Line 252, Address: 0x2392a8, Func Offset: 0x1b8
	// Line 253, Address: 0x2392b8, Func Offset: 0x1c8
	// Line 254, Address: 0x2392bc, Func Offset: 0x1cc
	// Line 255, Address: 0x2392e0, Func Offset: 0x1f0
	// Func End, Address: 0x2392fc, Func Offset: 0x20c
}

