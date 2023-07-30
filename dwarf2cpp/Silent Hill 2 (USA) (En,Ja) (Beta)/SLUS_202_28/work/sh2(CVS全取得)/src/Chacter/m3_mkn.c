typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct SubCharacter;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct EnBOS_DATA;
typedef struct EnSCU_DATA;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct shSkelton;
typedef struct EnPATH_DATA;
typedef struct _anon2;
typedef struct _AnimeInfo;
typedef struct EnRED_DATA;
typedef struct EnCOMMUNICATION;
typedef struct _anon3;
typedef struct EnINS_DATA;
typedef struct EnIKE_DATA;
typedef struct EnARM_DATA;
typedef struct EnTYU_DATA;
typedef struct EnNSE_DATA;
typedef struct EnLOCAL_DATA;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct EnMKN_DATA;
typedef struct EnEDB_DATA;
typedef struct EnPAP_DATA;
typedef struct _CL_VHIT_WALL;
typedef struct EnNIK_DATA;

typedef void(*type_2)(SubCharacter*);
typedef void(*type_5)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);

typedef unsigned char type_0[20];
typedef _AnimeInfo type_1[35];
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
typedef float type_15[4];
typedef float type_16[4][4];
typedef unsigned char type_17[97];
typedef int type_18[8];
typedef char type_19[3];

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

	void EnemyMKNFunction();
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

struct EnPATH_DATA
{
	float angle;
	float markangle;
	float dist;
	char step;
	char deadend;
	short timer;
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
_AnimeInfo mkn_anim[35];
_AnimeInfo d_mkn_anim[8];
int dmkn_anime_adr_list[8];
void(*EnemyMKNFunction)(SubCharacter*);

int EnemyMKNInit();
void EnemyMKNFunction();
void shCharacterSetEnemyMKNLow(SubCharacter* scp);
int shCharacterEnemyMKNAnimeSet(SubCharacter* scp, int anime_id);
int shCharacterEnemyMKNAnimeSetP(SubCharacter* scp, int anime_id, int comp);
void shGetEnemyMKNAttackPos(SubCharacter* scp, float* s_pos, float* s_vec, unsigned short atk);
void shEnemyMKN_EffectFoot(SubCharacter* scp, int type);

// 
// Start address: 0x1058c0
int EnemyMKNInit()
{
	// Line 67, Address: 0x1058c0, Func Offset: 0
	// Line 68, Address: 0x1058c4, Func Offset: 0x4
	// Func End, Address: 0x1058cc, Func Offset: 0xc
}

// 
// Start address: 0x1058d0
void SubCharacter::EnemyMKNFunction()
{
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	// Line 80, Address: 0x1058d0, Func Offset: 0
	// Line 84, Address: 0x1058e0, Func Offset: 0x10
	// Line 86, Address: 0x105900, Func Offset: 0x30
	// Line 90, Address: 0x105910, Func Offset: 0x40
	// Line 91, Address: 0x10591c, Func Offset: 0x4c
	// Line 95, Address: 0x105928, Func Offset: 0x58
	// Line 97, Address: 0x105930, Func Offset: 0x60
	// Line 99, Address: 0x105940, Func Offset: 0x70
	// Line 101, Address: 0x105950, Func Offset: 0x80
	// Line 111, Address: 0x105964, Func Offset: 0x94
	// Line 114, Address: 0x105974, Func Offset: 0xa4
	// Line 115, Address: 0x10598c, Func Offset: 0xbc
	// Line 116, Address: 0x105990, Func Offset: 0xc0
	// Line 117, Address: 0x10599c, Func Offset: 0xcc
	// Line 118, Address: 0x1059a4, Func Offset: 0xd4
	// Line 124, Address: 0x1059a8, Func Offset: 0xd8
	// Line 125, Address: 0x1059b4, Func Offset: 0xe4
	// Line 127, Address: 0x1059c0, Func Offset: 0xf0
	// Line 136, Address: 0x1059cc, Func Offset: 0xfc
	// Func End, Address: 0x1059e0, Func Offset: 0x110
}

// 
// Start address: 0x1059e0
void shCharacterSetEnemyMKNLow(SubCharacter* scp)
{
	// Line 152, Address: 0x1059e0, Func Offset: 0
	// Line 153, Address: 0x1059e8, Func Offset: 0x8
	// Line 154, Address: 0x1059f8, Func Offset: 0x18
	// Func End, Address: 0x105a08, Func Offset: 0x28
}

// 
// Start address: 0x105a10
int shCharacterEnemyMKNAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 167, Address: 0x105a10, Func Offset: 0
	// Line 170, Address: 0x105a2c, Func Offset: 0x1c
	// Line 171, Address: 0x105a48, Func Offset: 0x38
	// Line 172, Address: 0x105a58, Func Offset: 0x48
	// Line 173, Address: 0x105a74, Func Offset: 0x64
	// Line 181, Address: 0x105ab0, Func Offset: 0xa0
	// Line 183, Address: 0x105abc, Func Offset: 0xac
	// Line 185, Address: 0x105ac0, Func Offset: 0xb0
	// Func End, Address: 0x105adc, Func Offset: 0xcc
}

// 
// Start address: 0x105ae0
int shCharacterEnemyMKNAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 198, Address: 0x105ae0, Func Offset: 0
	// Line 201, Address: 0x105b00, Func Offset: 0x20
	// Line 202, Address: 0x105b1c, Func Offset: 0x3c
	// Line 203, Address: 0x105b38, Func Offset: 0x58
	// Line 210, Address: 0x105b80, Func Offset: 0xa0
	// Line 212, Address: 0x105b8c, Func Offset: 0xac
	// Line 214, Address: 0x105b90, Func Offset: 0xb0
	// Func End, Address: 0x105bac, Func Offset: 0xcc
}

// 
// Start address: 0x105bb0
void shGetEnemyMKNAttackPos(SubCharacter* scp, float* s_pos, float* s_vec, unsigned short atk)
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
	// Line 226, Address: 0x105bb0, Func Offset: 0
	// Line 232, Address: 0x105bcc, Func Offset: 0x1c
	// Line 235, Address: 0x105be0, Func Offset: 0x30
	// Line 236, Address: 0x105c10, Func Offset: 0x60
	// Line 238, Address: 0x105c14, Func Offset: 0x64
	// Line 240, Address: 0x105c38, Func Offset: 0x88
	// Line 241, Address: 0x105c3c, Func Offset: 0x8c
	// Line 243, Address: 0x105c44, Func Offset: 0x94
	// Line 246, Address: 0x105c48, Func Offset: 0x98
	// Line 247, Address: 0x105c54, Func Offset: 0xa4
	// Line 250, Address: 0x105c74, Func Offset: 0xc4
	// Line 251, Address: 0x105ca4, Func Offset: 0xf4
	// Line 252, Address: 0x105cac, Func Offset: 0xfc
	// Line 253, Address: 0x105cb4, Func Offset: 0x104
	// Line 254, Address: 0x105cbc, Func Offset: 0x10c
	// Line 255, Address: 0x105cc4, Func Offset: 0x114
	// Line 256, Address: 0x105cc8, Func Offset: 0x118
	// Line 258, Address: 0x105cd0, Func Offset: 0x120
	// Line 259, Address: 0x105ce4, Func Offset: 0x134
	// Line 263, Address: 0x105cf0, Func Offset: 0x140
	// Line 264, Address: 0x105d04, Func Offset: 0x154
	// Line 265, Address: 0x105d14, Func Offset: 0x164
	// Line 266, Address: 0x105d24, Func Offset: 0x174
	// Line 267, Address: 0x105d34, Func Offset: 0x184
	// Line 268, Address: 0x105d3c, Func Offset: 0x18c
	// Line 269, Address: 0x105d50, Func Offset: 0x1a0
	// Line 270, Address: 0x105d60, Func Offset: 0x1b0
	// Line 271, Address: 0x105d70, Func Offset: 0x1c0
	// Line 272, Address: 0x105d80, Func Offset: 0x1d0
	// Line 273, Address: 0x105d84, Func Offset: 0x1d4
	// Line 274, Address: 0x105da8, Func Offset: 0x1f8
	// Func End, Address: 0x105dc4, Func Offset: 0x214
}

// 
// Start address: 0x105dd0
void shEnemyMKN_EffectFoot(SubCharacter* scp, int type)
{
	shSkelton* sk;
	int foot;
	int i1;
	float mat[4][4];
	// Line 284, Address: 0x105dd0, Func Offset: 0
	// Line 292, Address: 0x105de0, Func Offset: 0x10
	// Line 295, Address: 0x105dec, Func Offset: 0x1c
	// Line 296, Address: 0x105df0, Func Offset: 0x20
	// Line 297, Address: 0x105dfc, Func Offset: 0x2c
	// Line 299, Address: 0x105e1c, Func Offset: 0x4c
	// Line 305, Address: 0x105e30, Func Offset: 0x60
	// Line 306, Address: 0x105e40, Func Offset: 0x70
	// Func End, Address: 0x105e54, Func Offset: 0x84
}

