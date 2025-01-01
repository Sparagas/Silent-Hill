typedef struct EnLOCAL_DATA;
typedef struct _CL_HITPOLY_HEAD;
typedef struct EnNIK_DATA;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct SubCharacter;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct EnBOS_DATA;
typedef struct EnSCU_DATA;
typedef struct _AnimeInfo;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct shSkelton;
typedef struct _anon2;
typedef struct EnPATH_DATA;
typedef struct EnRED_DATA;
typedef struct EnCOMMUNICATION;
typedef struct _anon3;
typedef struct EnINS_DATA;
typedef struct EnIKE_DATA;
typedef struct EnARM_DATA;
typedef struct EnTYU_DATA;
typedef struct EnNSE_DATA;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct EnMKN_DATA;
typedef struct EnEDB_DATA;
typedef struct EnPAP_DATA;
typedef struct _CL_VHIT_WALL;

typedef void(*type_5)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_11)(SubCharacter*);

typedef unsigned char type_0[20];
typedef _AnimeInfo type_1[27];
typedef int type_2[1];
typedef shAttackInfo type_3[66];
typedef unsigned char type_4[14];
typedef unsigned char type_6[69];
typedef float type_8[4];
typedef float type_9[4][4];
typedef _AnimeInfo type_10[1];
typedef unsigned char type_12[4];
typedef unsigned char type_13[14];
typedef float type_14[4];
typedef float type_15[4];
typedef unsigned char type_16[97];
typedef char type_17[3];

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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct EnNIK_DATA
{
	float swing[4];
	float acc[4];
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

	void EnemyNSEFunction();
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

struct EnNSE_DATA
{
	float speed;
	float tspeed;
	char signs;
	char count;
	char dc;
	char dcm;
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

struct EnPAP_DATA
{
	float target[4];
	char dc;
	char dcm;
	char signs;
	char count;
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
_AnimeInfo nse_anim[27];
_AnimeInfo d_nse_anim[1];
int dnse_anime_adr_list[1];
void(*EnemyNSEFunction)(SubCharacter*);

int EnemyNSEInit();
void EnemyNSEFunction();
void shCharacterSetEnemyNSELow(SubCharacter* scp);
int shCharacterEnemyNSEAnimeSetP(SubCharacter* scp, int anime_id, int comp);
void shGetEnemyNSEAttackPos(SubCharacter* scp, float* s_pos, float* s_vec);

// 
// Start address: 0x20dac0
int EnemyNSEInit()
{
	// Line 54, Address: 0x20dac0, Func Offset: 0
	// Line 55, Address: 0x20dac4, Func Offset: 0x4
	// Func End, Address: 0x20dacc, Func Offset: 0xc
}

// 
// Start address: 0x20dad0
void SubCharacter::EnemyNSEFunction()
{
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	// Line 67, Address: 0x20dad0, Func Offset: 0
	// Line 71, Address: 0x20dae0, Func Offset: 0x10
	// Line 73, Address: 0x20db0c, Func Offset: 0x3c
	// Line 77, Address: 0x20db1c, Func Offset: 0x4c
	// Line 78, Address: 0x20db28, Func Offset: 0x58
	// Line 80, Address: 0x20db34, Func Offset: 0x64
	// Line 82, Address: 0x20db3c, Func Offset: 0x6c
	// Line 84, Address: 0x20db4c, Func Offset: 0x7c
	// Line 86, Address: 0x20db5c, Func Offset: 0x8c
	// Line 96, Address: 0x20db70, Func Offset: 0xa0
	// Line 97, Address: 0x20db7c, Func Offset: 0xac
	// Line 99, Address: 0x20db88, Func Offset: 0xb8
	// Line 102, Address: 0x20db98, Func Offset: 0xc8
	// Line 103, Address: 0x20dbb0, Func Offset: 0xe0
	// Line 104, Address: 0x20dbb4, Func Offset: 0xe4
	// Line 105, Address: 0x20dbc0, Func Offset: 0xf0
	// Line 106, Address: 0x20dbc8, Func Offset: 0xf8
	// Line 112, Address: 0x20dbcc, Func Offset: 0xfc
	// Line 122, Address: 0x20dbd8, Func Offset: 0x108
	// Func End, Address: 0x20dbec, Func Offset: 0x11c
}

// 
// Start address: 0x20dbf0
void shCharacterSetEnemyNSELow(SubCharacter* scp)
{
	// Line 138, Address: 0x20dbf0, Func Offset: 0
	// Line 139, Address: 0x20dbf8, Func Offset: 0x8
	// Line 140, Address: 0x20dc08, Func Offset: 0x18
	// Func End, Address: 0x20dc18, Func Offset: 0x28
}

// 
// Start address: 0x20dc20
int shCharacterEnemyNSEAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 185, Address: 0x20dc20, Func Offset: 0
	// Line 188, Address: 0x20dc40, Func Offset: 0x20
	// Line 190, Address: 0x20dc7c, Func Offset: 0x5c
	// Line 191, Address: 0x20dc98, Func Offset: 0x78
	// Line 198, Address: 0x20dce0, Func Offset: 0xc0
	// Line 200, Address: 0x20dcec, Func Offset: 0xcc
	// Line 202, Address: 0x20dcf0, Func Offset: 0xd0
	// Func End, Address: 0x20dd0c, Func Offset: 0xec
}

// 
// Start address: 0x20dd10
void shGetEnemyNSEAttackPos(SubCharacter* scp, float* s_pos, float* s_vec)
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
	// Line 214, Address: 0x20dd10, Func Offset: 0
	// Line 218, Address: 0x20dd2c, Func Offset: 0x1c
	// Line 221, Address: 0x20dd40, Func Offset: 0x30
	// Line 222, Address: 0x20dd70, Func Offset: 0x60
	// Line 224, Address: 0x20dd74, Func Offset: 0x64
	// Line 225, Address: 0x20dd78, Func Offset: 0x68
	// Line 226, Address: 0x20dd84, Func Offset: 0x74
	// Line 229, Address: 0x20dda4, Func Offset: 0x94
	// Line 230, Address: 0x20ddd4, Func Offset: 0xc4
	// Line 231, Address: 0x20dddc, Func Offset: 0xcc
	// Line 232, Address: 0x20dde4, Func Offset: 0xd4
	// Line 233, Address: 0x20ddec, Func Offset: 0xdc
	// Line 234, Address: 0x20ddf4, Func Offset: 0xe4
	// Line 235, Address: 0x20ddf8, Func Offset: 0xe8
	// Line 237, Address: 0x20de00, Func Offset: 0xf0
	// Line 238, Address: 0x20de14, Func Offset: 0x104
	// Line 242, Address: 0x20de20, Func Offset: 0x110
	// Line 243, Address: 0x20de34, Func Offset: 0x124
	// Line 244, Address: 0x20de44, Func Offset: 0x134
	// Line 245, Address: 0x20de54, Func Offset: 0x144
	// Line 246, Address: 0x20de64, Func Offset: 0x154
	// Line 247, Address: 0x20de6c, Func Offset: 0x15c
	// Line 248, Address: 0x20de80, Func Offset: 0x170
	// Line 249, Address: 0x20de90, Func Offset: 0x180
	// Line 250, Address: 0x20dea0, Func Offset: 0x190
	// Line 251, Address: 0x20deb0, Func Offset: 0x1a0
	// Line 252, Address: 0x20deb4, Func Offset: 0x1a4
	// Line 253, Address: 0x20ded8, Func Offset: 0x1c8
	// Func End, Address: 0x20def4, Func Offset: 0x1e4
}

