typedef struct _CL_HITPOLY_HEAD;
typedef struct EnLOCAL_DATA;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct SubCharacter;
typedef struct EnPAP_DATA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct EnNIK_DATA;
typedef struct shSkelton;
typedef struct EnBOS_DATA;
typedef struct EnSCU_DATA;
typedef struct _anon2;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct EnPATH_DATA;
typedef struct _anon3;
typedef struct EnRED_DATA;
typedef struct _AnimeInfo;
typedef struct EnCOMMUNICATION;
typedef struct EnINS_DATA;
typedef struct EnIKE_DATA;
typedef struct shBattleFight;
typedef struct EnARM_DATA;
typedef struct EnTYU_DATA;
typedef struct EnNSE_DATA;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct EnMKN_DATA;
typedef struct _CL_VHIT_WALL;
typedef struct EnEDB_DATA;

typedef void(*type_6)(SubCharacter*);
typedef void(*type_8)(SubCharacter*);
typedef void(*type_13)(SubCharacter*);

typedef char type_0[3];
typedef unsigned char type_1[20];
typedef _AnimeInfo type_2[16];
typedef int type_3[10];
typedef shAttackInfo type_4[66];
typedef unsigned char type_5[14];
typedef unsigned char type_7[69];
typedef float type_9[4];
typedef float type_10[4][4];
typedef _AnimeInfo type_11[10];
typedef unsigned char type_12[4];
typedef unsigned char type_14[14];
typedef float type_15[4];
typedef float type_16[4];
typedef unsigned char type_17[97];

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
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

	void EnemyONIFunction();
};

struct EnPAP_DATA
{
	float target[4];
	char dc;
	char dcm;
	char signs;
	char count;
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

struct EnNIK_DATA
{
	float swing[4];
	float acc[4];
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

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo oni_anim[16];
_AnimeInfo d_oni_anim[10];
int doni_anime_adr_list[10];
void(*EnemyONIFunction)(SubCharacter*);

int EnemyONIInit();
void EnemyONIFunction();
void shCharacterSetEnemyONILow(SubCharacter* scp);
int shCharacterEnemyONIAnimeSet(SubCharacter* scp, int anime_id);
int shCharacterEnemyONIAnimeSetP(SubCharacter* scp, int anime_id, int comp);
void shGetEnemyONIAttackPos(SubCharacter* scp, float* s_pos, float* s_vec);

// 
// Start address: 0x221050
int EnemyONIInit()
{
	// Line 67, Address: 0x221050, Func Offset: 0
	// Line 68, Address: 0x221054, Func Offset: 0x4
	// Func End, Address: 0x22105c, Func Offset: 0xc
}

// 
// Start address: 0x221060
void SubCharacter::EnemyONIFunction()
{
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	// Line 80, Address: 0x221060, Func Offset: 0
	// Line 84, Address: 0x221070, Func Offset: 0x10
	// Line 86, Address: 0x221090, Func Offset: 0x30
	// Line 90, Address: 0x2210a0, Func Offset: 0x40
	// Line 91, Address: 0x2210ac, Func Offset: 0x4c
	// Line 93, Address: 0x2210b8, Func Offset: 0x58
	// Line 95, Address: 0x2210c0, Func Offset: 0x60
	// Line 97, Address: 0x2210d0, Func Offset: 0x70
	// Line 98, Address: 0x2210e0, Func Offset: 0x80
	// Line 109, Address: 0x2210f4, Func Offset: 0x94
	// Line 112, Address: 0x221104, Func Offset: 0xa4
	// Line 113, Address: 0x22111c, Func Offset: 0xbc
	// Line 114, Address: 0x221120, Func Offset: 0xc0
	// Line 115, Address: 0x22112c, Func Offset: 0xcc
	// Line 116, Address: 0x221134, Func Offset: 0xd4
	// Line 122, Address: 0x221138, Func Offset: 0xd8
	// Line 123, Address: 0x221144, Func Offset: 0xe4
	// Line 125, Address: 0x221150, Func Offset: 0xf0
	// Line 133, Address: 0x22115c, Func Offset: 0xfc
	// Func End, Address: 0x221170, Func Offset: 0x110
}

// 
// Start address: 0x221170
void shCharacterSetEnemyONILow(SubCharacter* scp)
{
	// Line 149, Address: 0x221170, Func Offset: 0
	// Line 150, Address: 0x221178, Func Offset: 0x8
	// Line 151, Address: 0x221188, Func Offset: 0x18
	// Func End, Address: 0x221198, Func Offset: 0x28
}

// 
// Start address: 0x2211a0
int shCharacterEnemyONIAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 164, Address: 0x2211a0, Func Offset: 0
	// Line 167, Address: 0x2211bc, Func Offset: 0x1c
	// Line 168, Address: 0x2211d8, Func Offset: 0x38
	// Line 169, Address: 0x2211e8, Func Offset: 0x48
	// Line 170, Address: 0x221204, Func Offset: 0x64
	// Line 178, Address: 0x221240, Func Offset: 0xa0
	// Line 180, Address: 0x22124c, Func Offset: 0xac
	// Line 182, Address: 0x221250, Func Offset: 0xb0
	// Func End, Address: 0x22126c, Func Offset: 0xcc
}

// 
// Start address: 0x221270
int shCharacterEnemyONIAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 195, Address: 0x221270, Func Offset: 0
	// Line 198, Address: 0x221290, Func Offset: 0x20
	// Line 199, Address: 0x2212ac, Func Offset: 0x3c
	// Line 200, Address: 0x2212c8, Func Offset: 0x58
	// Line 207, Address: 0x221310, Func Offset: 0xa0
	// Line 209, Address: 0x22131c, Func Offset: 0xac
	// Line 211, Address: 0x221320, Func Offset: 0xb0
	// Func End, Address: 0x22133c, Func Offset: 0xcc
}

// 
// Start address: 0x221340
void shGetEnemyONIAttackPos(SubCharacter* scp, float* s_pos, float* s_vec)
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
	// Line 223, Address: 0x221340, Func Offset: 0
	// Line 227, Address: 0x22135c, Func Offset: 0x1c
	// Line 230, Address: 0x221370, Func Offset: 0x30
	// Line 231, Address: 0x2213a0, Func Offset: 0x60
	// Line 233, Address: 0x2213a4, Func Offset: 0x64
	// Line 234, Address: 0x2213a8, Func Offset: 0x68
	// Line 235, Address: 0x2213b4, Func Offset: 0x74
	// Line 238, Address: 0x2213d4, Func Offset: 0x94
	// Line 239, Address: 0x221404, Func Offset: 0xc4
	// Line 240, Address: 0x22140c, Func Offset: 0xcc
	// Line 241, Address: 0x221414, Func Offset: 0xd4
	// Line 242, Address: 0x22141c, Func Offset: 0xdc
	// Line 243, Address: 0x221424, Func Offset: 0xe4
	// Line 244, Address: 0x221428, Func Offset: 0xe8
	// Line 246, Address: 0x221430, Func Offset: 0xf0
	// Line 247, Address: 0x221444, Func Offset: 0x104
	// Line 251, Address: 0x221450, Func Offset: 0x110
	// Line 252, Address: 0x221464, Func Offset: 0x124
	// Line 253, Address: 0x221474, Func Offset: 0x134
	// Line 254, Address: 0x221484, Func Offset: 0x144
	// Line 255, Address: 0x221494, Func Offset: 0x154
	// Line 256, Address: 0x22149c, Func Offset: 0x15c
	// Line 257, Address: 0x2214b0, Func Offset: 0x170
	// Line 258, Address: 0x2214c0, Func Offset: 0x180
	// Line 259, Address: 0x2214d0, Func Offset: 0x190
	// Line 260, Address: 0x2214e0, Func Offset: 0x1a0
	// Line 261, Address: 0x2214e4, Func Offset: 0x1a4
	// Line 262, Address: 0x221508, Func Offset: 0x1c8
	// Func End, Address: 0x221524, Func Offset: 0x1e4
}

