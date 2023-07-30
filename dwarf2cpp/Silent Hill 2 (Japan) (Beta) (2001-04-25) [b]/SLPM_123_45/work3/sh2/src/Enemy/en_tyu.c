typedef struct _CL_VHIT_CHARA;
typedef struct EnLOCAL_DATA;
typedef struct _CL_HITPOLY_HEAD;
typedef struct SubCharacter;
typedef struct EnPATH_DATA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon0;
typedef struct EnCOMMUNICATION;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct EnMKN_DATA;
typedef struct _anon1;
typedef struct EnIKE_DATA;
typedef struct EnRED_DATA;
typedef struct _anon2;
typedef struct shSkelton;
typedef struct EnANIME_DATA;
typedef struct shBattleFight;
typedef struct EnNSE_DATA;
typedef struct shBattleShot;
typedef struct EnEDB_DATA;
typedef struct EnLOCAL_WORK;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct EnPAP_DATA;
typedef struct EnSCU_DATA;
typedef struct EnTYU_DATA;
typedef struct EnBOS_DATA;
typedef struct shAttackInfo;
typedef union _anon3;
typedef struct _CL_VHIT_WALL;

typedef void(*type_11)(EnLOCAL_DATA*);
typedef void(*type_14)(SubCharacter*);
typedef void(*type_19)(SubCharacter*);
typedef void(*type_22)(EnLOCAL_DATA*);

typedef unsigned char type_0[10];
typedef short type_1[5];
typedef short type_2[5];
typedef float type_3[5];
typedef float type_4[5];
typedef unsigned char type_5[13];
typedef float type_6[5];
typedef float type_7[5];
typedef unsigned char type_8[34];
typedef float type_9[4];
typedef float type_10[4][4];
typedef void(*type_12)(EnLOCAL_DATA*)[6];
typedef unsigned char type_13[10];
typedef EnLOCAL_DATA type_15[64];
typedef EnANIME_DATA type_16[2];
typedef shAttackInfo type_17[46];
typedef EnCOMMUNICATION type_18[8];
typedef char type_20[3];
typedef unsigned char type_21[4];
typedef void(*type_23)(EnLOCAL_DATA*)[9];
typedef float type_24[4];
typedef short type_25[5];
typedef float type_26[4];
typedef char type_27[2];

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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
	char anim;
	unsigned char anim_loop;
	char hoge[2];
	unsigned short flag;
	short anim_s;
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
	float size;
	float new_size;
	float tall;
	float new_tall;
	float center_y;
	float new_center;
	float eye_y;
	float new_eye;
	float p_dist;
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
		EnBOS_DATA bos;
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

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon1 pos;
	_anon1 rot;
	_anon1 pos_spd;
	_anon1 rot_spd;
	_anon2 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon1 b_pos;
	_anon1 b_rot;
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

struct _CL_VHIT_RESULT
{
	int kind;
	_anon0 hobj;
};

union _anon0
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct EnCOMMUNICATION
{
	float pos[4];
	int kind;
	int type;
	int time;
	float dist;
};

struct EnAMBUSH_DATA
{
	short pl_x_min;
	short pl_z_min;
	short pl_x_max;
	short pl_z_max;
	short pos_x;
	short pos_z;
	float dir;
};

struct EnONI_DATA
{
	char id;
	short timer2;
	void* other;
};

struct EnMKN_DATA
{
	float stpos[4];
	float target[4];
	short frame;
};

struct _anon1
{
	float x;
	float y;
	float z;
	float w;
};

struct EnIKE_DATA
{
	float handpos[4];
	char direc;
};

struct EnRED_DATA
{
	int dummy;
};

struct _anon2
{
	float d[4][4];
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon2 src_m;
	_anon1 src_t;
	_anon2 des_m;
	_anon1 des_t;
	_anon1 axis;
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

struct EnANIME_DATA
{
	unsigned short Anime;
	unsigned char Loop;
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
	char avoid;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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
};

struct EnLOCAL_WORK
{
	EnLOCAL_DATA Data[64];
	EnCOMMUNICATION Communication[8];
	int CommunicationNum;
	EnLOCAL_DATA* This;
	_CL_VHIT_RESULT HitResult;
	int Max3DSounds;
	EnLOCAL_DATA* view_data;
	short view_x;
	short view_y;
	float fps;
	float spf;
	unsigned int dbflag;
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
};

struct EnPAP_DATA
{
	float target[4];
};

struct EnSCU_DATA
{
	float stpos[4];
	float target[4];
	EnAMBUSH_DATA* ambush;
	int count;
};

struct EnTYU_DATA
{
	float point[4];
	EnCOMMUNICATION* tcomm;
};

struct EnBOS_DATA
{
	int dummy;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon3 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union _anon3
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
EnANIME_DATA EnTYUAnime[2];
EnLOCAL_WORK enLocalWork;

void enTYUInitData(EnLOCAL_DATA* dp);
void enTYUCtrlMain(EnLOCAL_DATA* dp);
void enTYUCtrlAutomatic(EnLOCAL_DATA* dp);
void enTYUCtrlSleep(EnLOCAL_DATA* dp);
void enTYUCtrlGoPlayable(EnLOCAL_DATA* dp);
void enTYUCtrlEvent(EnLOCAL_DATA* dp);
void enTYUCtrlHand(EnLOCAL_DATA* dp);
void enTYUCtrlStraight(EnLOCAL_DATA* dp);
void enTYUCtrlChase(EnLOCAL_DATA* dp);
void enTYUCtrlGathering(EnLOCAL_DATA* dp);
void enTYUCtrlEscape(EnLOCAL_DATA* dp);
void enTYUCtrlOnWall(EnLOCAL_DATA* dp);
void enTYUCtrlOnCeiling(EnLOCAL_DATA* dp);
void enTYUCtrlAttack(EnLOCAL_DATA* dp);
void enTYUCtrlDown(EnLOCAL_DATA* dp);
int enTYUCanSeePlayer(EnLOCAL_DATA* dp);
void enTYUAnimeSet(EnLOCAL_DATA* dp, int anim);
void enTYUAnimeExec(EnLOCAL_DATA* dp);
float enTYUGetSpeed();
void enTYUSetAttackTime(EnLOCAL_DATA* dp);
void enTYUSetStopTime(EnLOCAL_DATA* dp);
void enTYUSetDownTime(EnLOCAL_DATA* dp);

// 
// Start address: 0x16c840
void enTYUInitData(EnLOCAL_DATA* dp)
{
	int mode;
	float endurance[5];
	float vitarity[5];
	// Line 82, Address: 0x16c840, Func Offset: 0
	// Line 83, Address: 0x16c850, Func Offset: 0x10
	// Line 90, Address: 0x16c86c, Func Offset: 0x2c
	// Line 97, Address: 0x16c888, Func Offset: 0x48
	// Line 99, Address: 0x16c894, Func Offset: 0x54
	// Line 100, Address: 0x16c8a0, Func Offset: 0x60
	// Line 103, Address: 0x16c8e8, Func Offset: 0xa8
	// Line 104, Address: 0x16c8fc, Func Offset: 0xbc
	// Line 106, Address: 0x16c904, Func Offset: 0xc4
	// Line 107, Address: 0x16c918, Func Offset: 0xd8
	// Line 109, Address: 0x16c920, Func Offset: 0xe0
	// Line 113, Address: 0x16c930, Func Offset: 0xf0
	// Line 115, Address: 0x16c938, Func Offset: 0xf8
	// Line 116, Address: 0x16c964, Func Offset: 0x124
	// Line 117, Address: 0x16c970, Func Offset: 0x130
	// Line 118, Address: 0x16c994, Func Offset: 0x154
	// Line 119, Address: 0x16c9a4, Func Offset: 0x164
	// Line 120, Address: 0x16c9b0, Func Offset: 0x170
	// Func End, Address: 0x16c9c4, Func Offset: 0x184
}

// 
// Start address: 0x16c9d0
void enTYUCtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlTYUFunc)(EnLOCAL_DATA*)[6];
	// Line 126, Address: 0x16c9d0, Func Offset: 0
	// Line 127, Address: 0x16c9dc, Func Offset: 0xc
	// Line 136, Address: 0x16c9f8, Func Offset: 0x28
	// Line 137, Address: 0x16ca20, Func Offset: 0x50
	// Func End, Address: 0x16ca30, Func Offset: 0x60
}

// 
// Start address: 0x16ca30
void enTYUCtrlAutomatic(EnLOCAL_DATA* dp)
{
	void(*enCtrlTYUSubFunc)(EnLOCAL_DATA*)[9];
	// Line 141, Address: 0x16ca30, Func Offset: 0
	// Line 142, Address: 0x16ca3c, Func Offset: 0xc
	// Line 154, Address: 0x16ca60, Func Offset: 0x30
	// Line 156, Address: 0x16ca70, Func Offset: 0x40
	// Line 159, Address: 0x16ca98, Func Offset: 0x68
	// Line 161, Address: 0x16caa4, Func Offset: 0x74
	// Line 162, Address: 0x16cab0, Func Offset: 0x80
	// Func End, Address: 0x16cac0, Func Offset: 0x90
}

// 
// Start address: 0x16cac0
void enTYUCtrlSleep(EnLOCAL_DATA* dp)
{
	// Line 166, Address: 0x16cac0, Func Offset: 0
	// Line 167, Address: 0x16cacc, Func Offset: 0xc
	// Line 168, Address: 0x16cae0, Func Offset: 0x20
	// Line 169, Address: 0x16caec, Func Offset: 0x2c
	// Line 170, Address: 0x16cafc, Func Offset: 0x3c
	// Line 172, Address: 0x16cb08, Func Offset: 0x48
	// Func End, Address: 0x16cb18, Func Offset: 0x58
}

// 
// Start address: 0x16cb20
void enTYUCtrlGoPlayable(EnLOCAL_DATA* dp)
{
	// Line 176, Address: 0x16cb20, Func Offset: 0
	// Line 177, Address: 0x16cb28, Func Offset: 0x8
	// Line 178, Address: 0x16cb34, Func Offset: 0x14
	// Line 179, Address: 0x16cb44, Func Offset: 0x24
	// Func End, Address: 0x16cb50, Func Offset: 0x30
}

// 
// Start address: 0x16cb50
void enTYUCtrlEvent(EnLOCAL_DATA* dp)
{
	void* tmp;
	// Line 183, Address: 0x16cb50, Func Offset: 0
	// Line 184, Address: 0x16cb5c, Func Offset: 0xc
	// Line 185, Address: 0x16cb60, Func Offset: 0x10
	// Func End, Address: 0x16cb70, Func Offset: 0x20
}

// 
// Start address: 0x16cb70
void enTYUCtrlHand(EnLOCAL_DATA* dp)
{
	int move;
	float s;
	// Line 189, Address: 0x16cb70, Func Offset: 0
	// Line 191, Address: 0x16cb80, Func Offset: 0x10
	// Line 192, Address: 0x16cb8c, Func Offset: 0x1c
	// Line 193, Address: 0x16cb9c, Func Offset: 0x2c
	// Line 194, Address: 0x16cbb0, Func Offset: 0x40
	// Line 196, Address: 0x16cbe4, Func Offset: 0x74
	// Line 197, Address: 0x16cbf8, Func Offset: 0x88
	// Line 199, Address: 0x16cc2c, Func Offset: 0xbc
	// Line 200, Address: 0x16cc40, Func Offset: 0xd0
	// Line 201, Address: 0x16cc48, Func Offset: 0xd8
	// Line 202, Address: 0x16cc54, Func Offset: 0xe4
	// Line 205, Address: 0x16cc6c, Func Offset: 0xfc
	// Line 206, Address: 0x16cc80, Func Offset: 0x110
	// Line 207, Address: 0x16cc88, Func Offset: 0x118
	// Line 208, Address: 0x16cc94, Func Offset: 0x124
	// Line 211, Address: 0x16ccac, Func Offset: 0x13c
	// Line 212, Address: 0x16ccc0, Func Offset: 0x150
	// Line 214, Address: 0x16ccd0, Func Offset: 0x160
	// Line 215, Address: 0x16cce4, Func Offset: 0x174
	// Line 217, Address: 0x16ccf8, Func Offset: 0x188
	// Line 218, Address: 0x16cd0c, Func Offset: 0x19c
	// Line 219, Address: 0x16cd24, Func Offset: 0x1b4
	// Line 220, Address: 0x16cd30, Func Offset: 0x1c0
	// Line 221, Address: 0x16cd38, Func Offset: 0x1c8
	// Line 224, Address: 0x16cd44, Func Offset: 0x1d4
	// Line 225, Address: 0x16cd58, Func Offset: 0x1e8
	// Line 226, Address: 0x16cd64, Func Offset: 0x1f4
	// Line 228, Address: 0x16cd70, Func Offset: 0x200
	// Line 229, Address: 0x16cd84, Func Offset: 0x214
	// Line 230, Address: 0x16cd90, Func Offset: 0x220
	// Line 232, Address: 0x16cd9c, Func Offset: 0x22c
	// Line 233, Address: 0x16cda4, Func Offset: 0x234
	// Line 234, Address: 0x16cdc4, Func Offset: 0x254
	// Line 235, Address: 0x16cdd0, Func Offset: 0x260
	// Line 237, Address: 0x16cddc, Func Offset: 0x26c
	// Func End, Address: 0x16cdf0, Func Offset: 0x280
}

// 
// Start address: 0x16cdf0
void enTYUCtrlStraight(EnLOCAL_DATA* dp)
{
	EnCOMMUNICATION* comm;
	int t;
	float vec[4];
	// Line 241, Address: 0x16cdf0, Func Offset: 0
	// Line 245, Address: 0x16ce00, Func Offset: 0x10
	// Line 246, Address: 0x16ce20, Func Offset: 0x30
	// Line 247, Address: 0x16ce2c, Func Offset: 0x3c
	// Line 249, Address: 0x16ce34, Func Offset: 0x44
	// Line 250, Address: 0x16ce48, Func Offset: 0x58
	// Line 251, Address: 0x16ce58, Func Offset: 0x68
	// Line 252, Address: 0x16ce6c, Func Offset: 0x7c
	// Line 254, Address: 0x16ce78, Func Offset: 0x88
	// Line 255, Address: 0x16ce90, Func Offset: 0xa0
	// Line 256, Address: 0x16ceac, Func Offset: 0xbc
	// Line 257, Address: 0x16cecc, Func Offset: 0xdc
	// Line 259, Address: 0x16cf28, Func Offset: 0x138
	// Line 260, Address: 0x16cf3c, Func Offset: 0x14c
	// Line 261, Address: 0x16cf5c, Func Offset: 0x16c
	// Line 262, Address: 0x16cf74, Func Offset: 0x184
	// Line 264, Address: 0x16cf80, Func Offset: 0x190
	// Line 266, Address: 0x16cf88, Func Offset: 0x198
	// Line 267, Address: 0x16cfa4, Func Offset: 0x1b4
	// Line 268, Address: 0x16cfa8, Func Offset: 0x1b8
	// Line 269, Address: 0x16cfb4, Func Offset: 0x1c4
	// Line 271, Address: 0x16cfbc, Func Offset: 0x1cc
	// Line 272, Address: 0x16cfe4, Func Offset: 0x1f4
	// Line 275, Address: 0x16d028, Func Offset: 0x238
	// Line 276, Address: 0x16d048, Func Offset: 0x258
	// Line 290, Address: 0x16d068, Func Offset: 0x278
	// Line 292, Address: 0x16d098, Func Offset: 0x2a8
	// Line 293, Address: 0x16d0b0, Func Offset: 0x2c0
	// Line 294, Address: 0x16d0d4, Func Offset: 0x2e4
	// Line 300, Address: 0x16d0e0, Func Offset: 0x2f0
	// Func End, Address: 0x16d0f4, Func Offset: 0x304
}

// 
// Start address: 0x16d100
void enTYUCtrlChase(EnLOCAL_DATA* dp)
{
	int t;
	// Line 304, Address: 0x16d100, Func Offset: 0
	// Line 306, Address: 0x16d114, Func Offset: 0x14
	// Line 307, Address: 0x16d138, Func Offset: 0x38
	// Line 308, Address: 0x16d14c, Func Offset: 0x4c
	// Line 310, Address: 0x16d154, Func Offset: 0x54
	// Line 311, Address: 0x16d16c, Func Offset: 0x6c
	// Line 312, Address: 0x16d17c, Func Offset: 0x7c
	// Line 315, Address: 0x16d18c, Func Offset: 0x8c
	// Line 317, Address: 0x16d1b4, Func Offset: 0xb4
	// Line 318, Address: 0x16d1d0, Func Offset: 0xd0
	// Line 321, Address: 0x16d230, Func Offset: 0x130
	// Line 322, Address: 0x16d240, Func Offset: 0x140
	// Line 323, Address: 0x16d24c, Func Offset: 0x14c
	// Line 324, Address: 0x16d260, Func Offset: 0x160
	// Line 325, Address: 0x16d270, Func Offset: 0x170
	// Line 327, Address: 0x16d280, Func Offset: 0x180
	// Func End, Address: 0x16d298, Func Offset: 0x198
}

// 
// Start address: 0x16d2a0
void enTYUCtrlGathering(EnLOCAL_DATA* dp)
{
	EnCOMMUNICATION* comm;
	int t;
	// Line 331, Address: 0x16d2a0, Func Offset: 0
	// Line 334, Address: 0x16d2b8, Func Offset: 0x18
	// Line 335, Address: 0x16d2dc, Func Offset: 0x3c
	// Line 336, Address: 0x16d2f0, Func Offset: 0x50
	// Line 338, Address: 0x16d2f8, Func Offset: 0x58
	// Line 339, Address: 0x16d324, Func Offset: 0x84
	// Line 340, Address: 0x16d32c, Func Offset: 0x8c
	// Line 341, Address: 0x16d334, Func Offset: 0x94
	// Line 342, Address: 0x16d344, Func Offset: 0xa4
	// Line 345, Address: 0x16d34c, Func Offset: 0xac
	// Line 346, Address: 0x16d364, Func Offset: 0xc4
	// Line 347, Address: 0x16d374, Func Offset: 0xd4
	// Line 349, Address: 0x16d384, Func Offset: 0xe4
	// Line 351, Address: 0x16d3a0, Func Offset: 0x100
	// Line 352, Address: 0x16d3bc, Func Offset: 0x11c
	// Line 355, Address: 0x16d410, Func Offset: 0x170
	// Line 356, Address: 0x16d420, Func Offset: 0x180
	// Line 357, Address: 0x16d42c, Func Offset: 0x18c
	// Line 358, Address: 0x16d440, Func Offset: 0x1a0
	// Line 359, Address: 0x16d454, Func Offset: 0x1b4
	// Line 361, Address: 0x16d468, Func Offset: 0x1c8
	// Func End, Address: 0x16d484, Func Offset: 0x1e4
}

// 
// Start address: 0x16d490
void enTYUCtrlEscape(EnLOCAL_DATA* dp)
{
	float vec[4];
	int t;
	// Line 365, Address: 0x16d490, Func Offset: 0
	// Line 368, Address: 0x16d4a0, Func Offset: 0x10
	// Line 369, Address: 0x16d4c0, Func Offset: 0x30
	// Line 370, Address: 0x16d4cc, Func Offset: 0x3c
	// Line 372, Address: 0x16d4d4, Func Offset: 0x44
	// Line 373, Address: 0x16d4e8, Func Offset: 0x58
	// Line 374, Address: 0x16d4f8, Func Offset: 0x68
	// Line 378, Address: 0x16d504, Func Offset: 0x74
	// Line 379, Address: 0x16d53c, Func Offset: 0xac
	// Line 380, Address: 0x16d55c, Func Offset: 0xcc
	// Line 382, Address: 0x16d574, Func Offset: 0xe4
	// Line 383, Address: 0x16d58c, Func Offset: 0xfc
	// Line 384, Address: 0x16d5b0, Func Offset: 0x120
	// Line 385, Address: 0x16d5bc, Func Offset: 0x12c
	// Line 386, Address: 0x16d5c4, Func Offset: 0x134
	// Line 387, Address: 0x16d5cc, Func Offset: 0x13c
	// Line 388, Address: 0x16d5d0, Func Offset: 0x140
	// Func End, Address: 0x16d5e4, Func Offset: 0x154
}

// 
// Start address: 0x16d5f0
void enTYUCtrlOnWall(EnLOCAL_DATA* dp)
{
	// Line 392, Address: 0x16d5f0, Func Offset: 0
	// Line 393, Address: 0x16d5fc, Func Offset: 0xc
	// Line 394, Address: 0x16d620, Func Offset: 0x30
	// Line 395, Address: 0x16d634, Func Offset: 0x44
	// Line 396, Address: 0x16d640, Func Offset: 0x50
	// Line 398, Address: 0x16d648, Func Offset: 0x58
	// Line 399, Address: 0x16d660, Func Offset: 0x70
	// Line 400, Address: 0x16d670, Func Offset: 0x80
	// Line 402, Address: 0x16d680, Func Offset: 0x90
	// Func End, Address: 0x16d690, Func Offset: 0xa0
}

// 
// Start address: 0x16d690
void enTYUCtrlOnCeiling(EnLOCAL_DATA* dp)
{
	// Line 406, Address: 0x16d690, Func Offset: 0
	// Line 407, Address: 0x16d698, Func Offset: 0x8
	// Line 408, Address: 0x16d6bc, Func Offset: 0x2c
	// Line 409, Address: 0x16d6d0, Func Offset: 0x40
	// Line 410, Address: 0x16d6dc, Func Offset: 0x4c
	// Line 412, Address: 0x16d6e4, Func Offset: 0x54
	// Line 413, Address: 0x16d6fc, Func Offset: 0x6c
	// Line 415, Address: 0x16d70c, Func Offset: 0x7c
	// Func End, Address: 0x16d718, Func Offset: 0x88
}

// 
// Start address: 0x16d720
void enTYUCtrlAttack(EnLOCAL_DATA* dp)
{
	int t;
	// Line 419, Address: 0x16d720, Func Offset: 0
	// Line 421, Address: 0x16d730, Func Offset: 0x10
	// Line 422, Address: 0x16d754, Func Offset: 0x34
	// Line 423, Address: 0x16d768, Func Offset: 0x48
	// Line 425, Address: 0x16d770, Func Offset: 0x50
	// Line 426, Address: 0x16d788, Func Offset: 0x68
	// Line 427, Address: 0x16d794, Func Offset: 0x74
	// Line 428, Address: 0x16d7a0, Func Offset: 0x80
	// Line 431, Address: 0x16d7b0, Func Offset: 0x90
	// Line 432, Address: 0x16d7c4, Func Offset: 0xa4
	// Line 433, Address: 0x16d7d4, Func Offset: 0xb4
	// Line 434, Address: 0x16d7e0, Func Offset: 0xc0
	// Line 435, Address: 0x16d808, Func Offset: 0xe8
	// Line 436, Address: 0x16d810, Func Offset: 0xf0
	// Line 437, Address: 0x16d818, Func Offset: 0xf8
	// Line 439, Address: 0x16d82c, Func Offset: 0x10c
	// Line 440, Address: 0x16d840, Func Offset: 0x120
	// Line 441, Address: 0x16d854, Func Offset: 0x134
	// Line 442, Address: 0x16d85c, Func Offset: 0x13c
	// Line 443, Address: 0x16d86c, Func Offset: 0x14c
	// Line 445, Address: 0x16d870, Func Offset: 0x150
	// Func End, Address: 0x16d884, Func Offset: 0x164
}

// 
// Start address: 0x16d890
void enTYUCtrlDown(EnLOCAL_DATA* dp)
{
	// Line 449, Address: 0x16d890, Func Offset: 0
	// Line 450, Address: 0x16d89c, Func Offset: 0xc
	// Line 452, Address: 0x16d8ec, Func Offset: 0x5c
	// Line 453, Address: 0x16d910, Func Offset: 0x80
	// Line 454, Address: 0x16d91c, Func Offset: 0x8c
	// Line 455, Address: 0x16d924, Func Offset: 0x94
	// Line 457, Address: 0x16d930, Func Offset: 0xa0
	// Line 458, Address: 0x16d93c, Func Offset: 0xac
	// Line 459, Address: 0x16d94c, Func Offset: 0xbc
	// Line 462, Address: 0x16d978, Func Offset: 0xe8
	// Line 463, Address: 0x16d984, Func Offset: 0xf4
	// Line 464, Address: 0x16d990, Func Offset: 0x100
	// Line 465, Address: 0x16d9b4, Func Offset: 0x124
	// Line 466, Address: 0x16d9c4, Func Offset: 0x134
	// Line 469, Address: 0x16d9f0, Func Offset: 0x160
	// Line 470, Address: 0x16da04, Func Offset: 0x174
	// Line 471, Address: 0x16da18, Func Offset: 0x188
	// Line 472, Address: 0x16da20, Func Offset: 0x190
	// Line 473, Address: 0x16da30, Func Offset: 0x1a0
	// Line 475, Address: 0x16da3c, Func Offset: 0x1ac
	// Line 476, Address: 0x16da44, Func Offset: 0x1b4
	// Line 478, Address: 0x16da54, Func Offset: 0x1c4
	// Line 480, Address: 0x16da5c, Func Offset: 0x1cc
	// Line 481, Address: 0x16da80, Func Offset: 0x1f0
	// Line 482, Address: 0x16daa4, Func Offset: 0x214
	// Line 483, Address: 0x16dab0, Func Offset: 0x220
	// Line 484, Address: 0x16dab8, Func Offset: 0x228
	// Line 486, Address: 0x16dac4, Func Offset: 0x234
	// Line 488, Address: 0x16dad0, Func Offset: 0x240
	// Line 489, Address: 0x16daf8, Func Offset: 0x268
	// Line 490, Address: 0x16db04, Func Offset: 0x274
	// Line 491, Address: 0x16db28, Func Offset: 0x298
	// Line 492, Address: 0x16db38, Func Offset: 0x2a8
	// Line 495, Address: 0x16db64, Func Offset: 0x2d4
	// Line 496, Address: 0x16db8c, Func Offset: 0x2fc
	// Line 497, Address: 0x16dba0, Func Offset: 0x310
	// Line 498, Address: 0x16dba8, Func Offset: 0x318
	// Line 499, Address: 0x16dbb8, Func Offset: 0x328
	// Line 501, Address: 0x16dbc4, Func Offset: 0x334
	// Line 502, Address: 0x16dbcc, Func Offset: 0x33c
	// Line 503, Address: 0x16dbd8, Func Offset: 0x348
	// Line 504, Address: 0x16dbf8, Func Offset: 0x368
	// Line 505, Address: 0x16dc0c, Func Offset: 0x37c
	// Line 506, Address: 0x16dc20, Func Offset: 0x390
	// Line 507, Address: 0x16dc28, Func Offset: 0x398
	// Line 510, Address: 0x16dc3c, Func Offset: 0x3ac
	// Line 514, Address: 0x16dc44, Func Offset: 0x3b4
	// Line 515, Address: 0x16dc58, Func Offset: 0x3c8
	// Line 516, Address: 0x16dc64, Func Offset: 0x3d4
	// Line 517, Address: 0x16dc70, Func Offset: 0x3e0
	// Line 518, Address: 0x16dc84, Func Offset: 0x3f4
	// Line 519, Address: 0x16dc98, Func Offset: 0x408
	// Line 521, Address: 0x16dca0, Func Offset: 0x410
	// Line 522, Address: 0x16dcb0, Func Offset: 0x420
	// Line 523, Address: 0x16dccc, Func Offset: 0x43c
	// Line 525, Address: 0x16dce0, Func Offset: 0x450
	// Line 527, Address: 0x16dce8, Func Offset: 0x458
	// Line 528, Address: 0x16dcf4, Func Offset: 0x464
	// Line 529, Address: 0x16dd00, Func Offset: 0x470
	// Line 530, Address: 0x16dd08, Func Offset: 0x478
	// Line 533, Address: 0x16dd18, Func Offset: 0x488
	// Line 537, Address: 0x16dd24, Func Offset: 0x494
	// Func End, Address: 0x16dd34, Func Offset: 0x4a4
}

// 
// Start address: 0x16dd40
int enTYUCanSeePlayer(EnLOCAL_DATA* dp)
{
	float feel_range[5];
	float vec[4];
	float a;
	float dist;
	float* ppos;
	// Line 542, Address: 0x16dd40, Func Offset: 0
	// Line 543, Address: 0x16dd54, Func Offset: 0x14
	// Line 546, Address: 0x16dd60, Func Offset: 0x20
	// Line 553, Address: 0x16dd7c, Func Offset: 0x3c
	// Line 554, Address: 0x16dd98, Func Offset: 0x58
	// Line 555, Address: 0x16ddc4, Func Offset: 0x84
	// Line 557, Address: 0x16ddd4, Func Offset: 0x94
	// Line 559, Address: 0x16dde0, Func Offset: 0xa0
	// Line 560, Address: 0x16de00, Func Offset: 0xc0
	// Line 561, Address: 0x16de48, Func Offset: 0x108
	// Line 562, Address: 0x16de78, Func Offset: 0x138
	// Line 563, Address: 0x16de7c, Func Offset: 0x13c
	// Func End, Address: 0x16de94, Func Offset: 0x154
}

// 
// Start address: 0x16dea0
void enTYUAnimeSet(EnLOCAL_DATA* dp, int anim)
{
	// Line 567, Address: 0x16dea0, Func Offset: 0
	// Line 568, Address: 0x16deb8, Func Offset: 0x18
	// Line 570, Address: 0x16ded4, Func Offset: 0x34
	// Line 571, Address: 0x16df2c, Func Offset: 0x8c
	// Line 572, Address: 0x16df58, Func Offset: 0xb8
	// Func End, Address: 0x16df70, Func Offset: 0xd0
}

// 
// Start address: 0x16df70
void enTYUAnimeExec(EnLOCAL_DATA* dp)
{
	// Line 584, Address: 0x16df70, Func Offset: 0
	// Line 585, Address: 0x16df7c, Func Offset: 0xc
	// Line 586, Address: 0x16df94, Func Offset: 0x24
	// Func End, Address: 0x16dfa4, Func Offset: 0x34
}

// 
// Start address: 0x16dfb0
float enTYUGetSpeed()
{
	float speed_rate[5];
	// Line 590, Address: 0x16dfb0, Func Offset: 0
	// Line 591, Address: 0x16dfb8, Func Offset: 0x8
	// Line 598, Address: 0x16dfd4, Func Offset: 0x24
	// Line 599, Address: 0x16dff4, Func Offset: 0x44
	// Func End, Address: 0x16e004, Func Offset: 0x54
}

// 
// Start address: 0x16e010
void enTYUSetAttackTime(EnLOCAL_DATA* dp)
{
	short attack_time[5];
	// Line 603, Address: 0x16e010, Func Offset: 0
	// Line 604, Address: 0x16e01c, Func Offset: 0xc
	// Line 611, Address: 0x16e038, Func Offset: 0x28
	// Line 612, Address: 0x16e060, Func Offset: 0x50
	// Func End, Address: 0x16e070, Func Offset: 0x60
}

// 
// Start address: 0x16e070
void enTYUSetStopTime(EnLOCAL_DATA* dp)
{
	short stop_time[5];
	// Line 616, Address: 0x16e070, Func Offset: 0
	// Line 617, Address: 0x16e07c, Func Offset: 0xc
	// Line 624, Address: 0x16e098, Func Offset: 0x28
	// Line 625, Address: 0x16e0c0, Func Offset: 0x50
	// Func End, Address: 0x16e0d0, Func Offset: 0x60
}

// 
// Start address: 0x16e0d0
void enTYUSetDownTime(EnLOCAL_DATA* dp)
{
	short down_time[5];
	// Line 629, Address: 0x16e0d0, Func Offset: 0
	// Line 630, Address: 0x16e0dc, Func Offset: 0xc
	// Line 637, Address: 0x16e0f8, Func Offset: 0x28
	// Line 638, Address: 0x16e120, Func Offset: 0x50
	// Func End, Address: 0x16e130, Func Offset: 0x60
}

