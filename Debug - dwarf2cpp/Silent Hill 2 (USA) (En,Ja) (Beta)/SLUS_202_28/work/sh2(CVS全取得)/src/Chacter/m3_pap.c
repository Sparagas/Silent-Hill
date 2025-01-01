typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct SubCharacter;
typedef struct _CL_VHIT_RESULT;
typedef struct EnBOS_DATA;
typedef struct EnSCU_DATA;
typedef union _anon1;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct EnPATH_DATA;
typedef struct shSkelton;
typedef struct _anon2;
typedef struct EnRED_DATA;
typedef struct EnCOMMUNICATION;
typedef struct EnLOCAL_DATA;
typedef struct _anon3;
typedef struct _AnimeInfo;
typedef struct EnINS_DATA;
typedef struct EnIKE_DATA;
typedef struct EnARM_DATA;
typedef struct EnTYU_DATA;
typedef struct EnNSE_DATA;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct EnMKN_DATA;
typedef struct shBattleInfo;
typedef struct EnEDB_DATA;
typedef struct EnPAP_DATA;
typedef struct _CL_VHIT_WALL;
typedef struct EnNIK_DATA;

typedef void(*type_5)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_18)(SubCharacter*);

typedef int type_0[8];
typedef unsigned char type_1[20];
typedef _AnimeInfo type_2[29];
typedef shAttackInfo type_3[66];
typedef unsigned char type_4[14];
typedef unsigned char type_6[69];
typedef float type_8[4];
typedef float type_9[4][4];
typedef _AnimeInfo type_10[8];
typedef unsigned char type_11[4];
typedef unsigned char type_12[14];
typedef float type_13[4];
typedef float type_14[4];
typedef unsigned char type_15[97];
typedef float type_16[4][2];
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

	void EnemyPAPFunction();
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
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

struct _anon3
{
	float d[4][4];
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct EnNIK_DATA
{
	float swing[4];
	float acc[4];
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo pap_anim[29];
_AnimeInfo d_pap_anim[8];
int dpap_anime_adr_list[8];
void(*EnemyPAPFunction)(SubCharacter*);

int EnemyPAPInit(SubCharacter* scp);
void EnemyPAPFunction();
void shCharacterSetEnemyPAPLow(SubCharacter* scp);
int shCharacterEnemyPAPAnimeSet(SubCharacter* scp, int anime_id);
int shCharacterEnemyPAPAnimeSetP(SubCharacter* scp, int anime_id, int comp);
void shGetEnemyPAPAttackPos(SubCharacter* scp, float* s_pos, float* s_vec, unsigned short atk);

// 
// Start address: 0x105e60
int EnemyPAPInit(SubCharacter* scp)
{
	// Line 66, Address: 0x105e60, Func Offset: 0
	// Line 67, Address: 0x105e68, Func Offset: 0x8
	// Line 68, Address: 0x105e6c, Func Offset: 0xc
	// Func End, Address: 0x105e74, Func Offset: 0x14
}

// 
// Start address: 0x105e80
void SubCharacter::EnemyPAPFunction()
{
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	// Line 80, Address: 0x105e80, Func Offset: 0
	// Line 84, Address: 0x105e90, Func Offset: 0x10
	// Line 86, Address: 0x105ebc, Func Offset: 0x3c
	// Line 90, Address: 0x105ecc, Func Offset: 0x4c
	// Line 91, Address: 0x105ed8, Func Offset: 0x58
	// Line 93, Address: 0x105ee4, Func Offset: 0x64
	// Line 95, Address: 0x105eec, Func Offset: 0x6c
	// Line 97, Address: 0x105efc, Func Offset: 0x7c
	// Line 99, Address: 0x105f0c, Func Offset: 0x8c
	// Line 109, Address: 0x105f20, Func Offset: 0xa0
	// Line 112, Address: 0x105f30, Func Offset: 0xb0
	// Line 113, Address: 0x105f48, Func Offset: 0xc8
	// Line 114, Address: 0x105f4c, Func Offset: 0xcc
	// Line 115, Address: 0x105f58, Func Offset: 0xd8
	// Line 116, Address: 0x105f60, Func Offset: 0xe0
	// Line 121, Address: 0x105f64, Func Offset: 0xe4
	// Line 122, Address: 0x105f70, Func Offset: 0xf0
	// Line 124, Address: 0x105f7c, Func Offset: 0xfc
	// Line 133, Address: 0x105f88, Func Offset: 0x108
	// Func End, Address: 0x105f9c, Func Offset: 0x11c
}

// 
// Start address: 0x105fa0
void shCharacterSetEnemyPAPLow(SubCharacter* scp)
{
	// Line 149, Address: 0x105fa0, Func Offset: 0
	// Line 150, Address: 0x105fa8, Func Offset: 0x8
	// Line 151, Address: 0x105fb8, Func Offset: 0x18
	// Func End, Address: 0x105fc8, Func Offset: 0x28
}

// 
// Start address: 0x105fd0
int shCharacterEnemyPAPAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 164, Address: 0x105fd0, Func Offset: 0
	// Line 167, Address: 0x105fec, Func Offset: 0x1c
	// Line 168, Address: 0x106008, Func Offset: 0x38
	// Line 169, Address: 0x106018, Func Offset: 0x48
	// Line 170, Address: 0x106034, Func Offset: 0x64
	// Line 178, Address: 0x106070, Func Offset: 0xa0
	// Line 180, Address: 0x10607c, Func Offset: 0xac
	// Line 182, Address: 0x106080, Func Offset: 0xb0
	// Func End, Address: 0x10609c, Func Offset: 0xcc
}

// 
// Start address: 0x1060a0
int shCharacterEnemyPAPAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 195, Address: 0x1060a0, Func Offset: 0
	// Line 198, Address: 0x1060c0, Func Offset: 0x20
	// Line 199, Address: 0x1060dc, Func Offset: 0x3c
	// Line 200, Address: 0x1060f8, Func Offset: 0x58
	// Line 207, Address: 0x106140, Func Offset: 0xa0
	// Line 209, Address: 0x10614c, Func Offset: 0xac
	// Line 211, Address: 0x106150, Func Offset: 0xb0
	// Func End, Address: 0x10616c, Func Offset: 0xcc
}

// 
// Start address: 0x106170
void shGetEnemyPAPAttackPos(SubCharacter* scp, float* s_pos, float* s_vec, unsigned short atk)
{
	shSkelton* stp;
	float wep_range[4][2];
	int sk_num;
	int i;
	_anon3 mat;
	_anon3 lw_mat;
	float vec[4];
	float pos1[4];
	float pos0[4];
	// Line 224, Address: 0x106170, Func Offset: 0
	// Line 228, Address: 0x106194, Func Offset: 0x24
	// Line 234, Address: 0x1061b0, Func Offset: 0x40
	// Line 235, Address: 0x1061e0, Func Offset: 0x70
	// Line 237, Address: 0x1061e4, Func Offset: 0x74
	// Line 238, Address: 0x1061e8, Func Offset: 0x78
	// Line 239, Address: 0x1061f4, Func Offset: 0x84
	// Line 240, Address: 0x1061f8, Func Offset: 0x88
	// Line 243, Address: 0x106214, Func Offset: 0xa4
	// Line 244, Address: 0x106244, Func Offset: 0xd4
	// Line 245, Address: 0x10624c, Func Offset: 0xdc
	// Line 246, Address: 0x106254, Func Offset: 0xe4
	// Line 247, Address: 0x10625c, Func Offset: 0xec
	// Line 248, Address: 0x106264, Func Offset: 0xf4
	// Line 249, Address: 0x106270, Func Offset: 0x100
	// Line 251, Address: 0x106278, Func Offset: 0x108
	// Line 252, Address: 0x10628c, Func Offset: 0x11c
	// Line 256, Address: 0x106298, Func Offset: 0x128
	// Line 257, Address: 0x1062a8, Func Offset: 0x138
	// Line 258, Address: 0x1062bc, Func Offset: 0x14c
	// Line 259, Address: 0x1062c4, Func Offset: 0x154
	// Line 261, Address: 0x1062d8, Func Offset: 0x168
	// Line 262, Address: 0x1062e8, Func Offset: 0x178
	// Line 263, Address: 0x1062f8, Func Offset: 0x188
	// Line 264, Address: 0x106308, Func Offset: 0x198
	// Line 265, Address: 0x106310, Func Offset: 0x1a0
	// Line 266, Address: 0x106324, Func Offset: 0x1b4
	// Line 267, Address: 0x106334, Func Offset: 0x1c4
	// Line 268, Address: 0x106344, Func Offset: 0x1d4
	// Line 269, Address: 0x106354, Func Offset: 0x1e4
	// Line 270, Address: 0x106358, Func Offset: 0x1e8
	// Line 271, Address: 0x10637c, Func Offset: 0x20c
	// Func End, Address: 0x10639c, Func Offset: 0x22c
}

