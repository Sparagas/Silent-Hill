typedef struct EnLOCAL_DATA;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_HITPOLY_HEAD;
typedef struct SubCharacter;
typedef struct EnPATH_DATA;
typedef struct EnAMBUSH_DATA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon0;
typedef struct EnCOMMUNICATION;
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

typedef int(*type_8)(EnLOCAL_DATA*);
typedef void(*type_12)(EnLOCAL_DATA*);
typedef void(*type_20)(EnLOCAL_DATA*);
typedef void(*type_25)(SubCharacter*);
typedef void(*type_29)(SubCharacter*);

typedef float type_0[5];
typedef float type_1[5];
typedef unsigned char type_2[10];
typedef float type_3[5];
typedef EnAMBUSH_DATA type_4[1];
typedef float type_5[5];
typedef unsigned char type_6[13];
typedef EnAMBUSH_DATA type_7[2];
typedef float type_9[5];
typedef unsigned char type_10[34];
typedef float type_11[5];
typedef void(*type_13)(EnLOCAL_DATA*)[6];
typedef float type_14[4];
typedef float type_15[4][4];
typedef EnAMBUSH_DATA* type_16[5];
typedef float type_17[5];
typedef EnANIME_DATA type_18[30];
typedef float type_19[5];
typedef void(*type_21)(EnLOCAL_DATA*)[10];
typedef float type_22[5];
typedef unsigned char type_23[10];
typedef float type_24[5];
typedef EnLOCAL_DATA type_26[64];
typedef shAttackInfo type_27[46];
typedef EnCOMMUNICATION type_28[8];
typedef char type_30[3];
typedef float type_31[5];
typedef short type_32[5];
typedef EnAMBUSH_DATA type_33[1];
typedef float type_34[5];
typedef float type_35[5];
typedef unsigned char type_36[4];
typedef float type_37[4];
typedef float type_38[4];
typedef int type_39[5];
typedef EnAMBUSH_DATA type_40[3];
typedef char type_41[2];

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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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
EnANIME_DATA EnSCUAnime[30];
EnAMBUSH_DATA ambush_apart[3];
EnAMBUSH_DATA ambush_hospital[2];
EnAMBUSH_DATA ambush_delusion[1];
EnAMBUSH_DATA ambush_hotel[1];
EnAMBUSH_DATA* ambush_data[5];
int ambush_num[5];
EnLOCAL_WORK enLocalWork;
int(*enCheckFinishedByHuman)(EnLOCAL_DATA*);

void enSCUInitData(EnLOCAL_DATA* dp);
void enSCUCtrlMain(EnLOCAL_DATA* dp);
void enSCUCtrlAutomatic(EnLOCAL_DATA* dp);
void enSCUCtrlSleep(EnLOCAL_DATA* dp);
void enSCUCtrlGoPlayable(EnLOCAL_DATA* dp);
void enSCUCtrlEvent(EnLOCAL_DATA* dp);
void enSCUCtrlHand(EnLOCAL_DATA* dp);
void enSCUCtrlWander(EnLOCAL_DATA* dp);
void enSCUCtrlPrecaution(EnLOCAL_DATA* dp);
void enSCUCtrlChase(EnLOCAL_DATA* dp);
void enSCUCtrlBackward(EnLOCAL_DATA* dp);
void enSCUCtrlAmbush(EnLOCAL_DATA* dp);
void enSCUCtrlCrawl(EnLOCAL_DATA* dp);
void enSCUCtrlAttack(EnLOCAL_DATA* dp);
void enSCUCtrlDamage(EnLOCAL_DATA* dp);
void enSCUCtrlDown(EnLOCAL_DATA* dp);
int enSCUCanSeePlayer(EnLOCAL_DATA* dp, float angle);
int enSCUCheckAmbush(EnLOCAL_DATA* dp);
void enSCUAnimeSet(EnLOCAL_DATA* dp, int anim);
void enSCUAnimeReset(EnLOCAL_DATA* dp, int anim);
void enSCUAnimeExec(EnLOCAL_DATA* dp);
void enSCUAutoRecovery(EnLOCAL_DATA* dp);
float enSCUGetWalkSpeed(EnLOCAL_DATA* dp);
float enSCUGetCrawlSpeed(EnLOCAL_DATA* dp);
float enSCUGetFeelRange();
float enSCUGetAttackRange();
float enSCUGetAttackAngle();
float enSCUGetAttackProbability();
float enSCUGetRepertAttackProbability();
float enSCUGetAttackSpeed(EnLOCAL_DATA* dp);
float enSCUGetRotSpeed();
void enSCUSetDownTime(EnLOCAL_DATA* dp);
float enSCUGetCrawlProbability();
void enSCUSetMoveCount(EnLOCAL_DATA* dp);
void enSCUSoundLife(EnLOCAL_DATA* dp);
void enSCUSoundCrawlInit(EnLOCAL_DATA* dp);
void enSCUSoundCrawl(EnLOCAL_DATA* dp);

// 
// Start address: 0x167d60
void enSCUInitData(EnLOCAL_DATA* dp)
{
	float rate;
	int mode;
	float endurance[5];
	float vitarity[5];
	// Line 187, Address: 0x167d60, Func Offset: 0
	// Line 188, Address: 0x167d78, Func Offset: 0x18
	// Line 195, Address: 0x167d94, Func Offset: 0x34
	// Line 202, Address: 0x167db0, Func Offset: 0x50
	// Line 205, Address: 0x167dbc, Func Offset: 0x5c
	// Line 206, Address: 0x167dc4, Func Offset: 0x64
	// Line 208, Address: 0x167dcc, Func Offset: 0x6c
	// Line 209, Address: 0x167ddc, Func Offset: 0x7c
	// Line 221, Address: 0x167df0, Func Offset: 0x90
	// Line 223, Address: 0x167e08, Func Offset: 0xa8
	// Line 224, Address: 0x167e10, Func Offset: 0xb0
	// Line 226, Address: 0x167e18, Func Offset: 0xb8
	// Line 231, Address: 0x167e20, Func Offset: 0xc0
	// Line 232, Address: 0x167e54, Func Offset: 0xf4
	// Line 233, Address: 0x167e5c, Func Offset: 0xfc
	// Line 234, Address: 0x167e6c, Func Offset: 0x10c
	// Line 236, Address: 0x167eac, Func Offset: 0x14c
	// Line 237, Address: 0x167eb8, Func Offset: 0x158
	// Line 239, Address: 0x167ec0, Func Offset: 0x160
	// Line 240, Address: 0x167ec8, Func Offset: 0x168
	// Line 242, Address: 0x167ed0, Func Offset: 0x170
	// Line 244, Address: 0x167ed8, Func Offset: 0x178
	// Line 245, Address: 0x167ee4, Func Offset: 0x184
	// Line 246, Address: 0x167ef0, Func Offset: 0x190
	// Line 247, Address: 0x167f00, Func Offset: 0x1a0
	// Line 248, Address: 0x167f2c, Func Offset: 0x1cc
	// Line 250, Address: 0x167f34, Func Offset: 0x1d4
	// Line 252, Address: 0x167f3c, Func Offset: 0x1dc
	// Line 253, Address: 0x167f68, Func Offset: 0x208
	// Line 254, Address: 0x167f88, Func Offset: 0x228
	// Line 255, Address: 0x167f94, Func Offset: 0x234
	// Func End, Address: 0x167fb0, Func Offset: 0x250
}

// 
// Start address: 0x167fb0
void enSCUCtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlSCUFunc)(EnLOCAL_DATA*)[6];
	// Line 261, Address: 0x167fb0, Func Offset: 0
	// Line 262, Address: 0x167fbc, Func Offset: 0xc
	// Line 271, Address: 0x167fd8, Func Offset: 0x28
	// Line 272, Address: 0x168000, Func Offset: 0x50
	// Func End, Address: 0x168010, Func Offset: 0x60
}

// 
// Start address: 0x168010
void enSCUCtrlAutomatic(EnLOCAL_DATA* dp)
{
	void(*enCtrlSCUSubFunc)(EnLOCAL_DATA*)[10];
	// Line 276, Address: 0x168010, Func Offset: 0
	// Line 277, Address: 0x16801c, Func Offset: 0xc
	// Line 290, Address: 0x168040, Func Offset: 0x30
	// Line 292, Address: 0x168050, Func Offset: 0x40
	// Line 295, Address: 0x168078, Func Offset: 0x68
	// Line 297, Address: 0x168084, Func Offset: 0x74
	// Line 298, Address: 0x168090, Func Offset: 0x80
	// Func End, Address: 0x1680a0, Func Offset: 0x90
}

// 
// Start address: 0x1680a0
void enSCUCtrlSleep(EnLOCAL_DATA* dp)
{
	// Line 302, Address: 0x1680a0, Func Offset: 0
	// Line 303, Address: 0x1680ac, Func Offset: 0xc
	// Line 304, Address: 0x1680c0, Func Offset: 0x20
	// Line 305, Address: 0x1680cc, Func Offset: 0x2c
	// Line 307, Address: 0x1680d8, Func Offset: 0x38
	// Func End, Address: 0x1680e8, Func Offset: 0x48
}

// 
// Start address: 0x1680f0
void enSCUCtrlGoPlayable(EnLOCAL_DATA* dp)
{
	// Line 311, Address: 0x1680f0, Func Offset: 0
	// Line 312, Address: 0x1680fc, Func Offset: 0xc
	// Line 313, Address: 0x168108, Func Offset: 0x18
	// Line 314, Address: 0x168124, Func Offset: 0x34
	// Line 315, Address: 0x168134, Func Offset: 0x44
	// Line 316, Address: 0x168140, Func Offset: 0x50
	// Line 317, Address: 0x168148, Func Offset: 0x58
	// Line 318, Address: 0x16815c, Func Offset: 0x6c
	// Line 320, Address: 0x168168, Func Offset: 0x78
	// Func End, Address: 0x168178, Func Offset: 0x88
}

// 
// Start address: 0x168180
void enSCUCtrlEvent(EnLOCAL_DATA* dp)
{
	void* tmp;
	// Line 324, Address: 0x168180, Func Offset: 0
	// Line 325, Address: 0x16818c, Func Offset: 0xc
	// Line 326, Address: 0x168190, Func Offset: 0x10
	// Func End, Address: 0x1681a0, Func Offset: 0x20
}

// 
// Start address: 0x1681a0
void enSCUCtrlHand(EnLOCAL_DATA* dp)
{
	int ms;
	int move;
	float s;
	// Line 330, Address: 0x1681a0, Func Offset: 0
	// Line 332, Address: 0x1681b4, Func Offset: 0x14
	// Line 333, Address: 0x1681c0, Func Offset: 0x20
	// Line 334, Address: 0x1681d0, Func Offset: 0x30
	// Line 335, Address: 0x1681d4, Func Offset: 0x34
	// Line 336, Address: 0x1681e8, Func Offset: 0x48
	// Line 337, Address: 0x16821c, Func Offset: 0x7c
	// Line 339, Address: 0x168220, Func Offset: 0x80
	// Line 340, Address: 0x168234, Func Offset: 0x94
	// Line 341, Address: 0x168268, Func Offset: 0xc8
	// Line 343, Address: 0x16826c, Func Offset: 0xcc
	// Line 344, Address: 0x168280, Func Offset: 0xe0
	// Line 345, Address: 0x168288, Func Offset: 0xe8
	// Line 346, Address: 0x168298, Func Offset: 0xf8
	// Line 347, Address: 0x1682a4, Func Offset: 0x104
	// Line 348, Address: 0x1682b8, Func Offset: 0x118
	// Line 349, Address: 0x1682c8, Func Offset: 0x128
	// Line 350, Address: 0x1682d4, Func Offset: 0x134
	// Line 351, Address: 0x1682f0, Func Offset: 0x150
	// Line 354, Address: 0x1682f4, Func Offset: 0x154
	// Line 355, Address: 0x168308, Func Offset: 0x168
	// Line 356, Address: 0x168310, Func Offset: 0x170
	// Line 357, Address: 0x168320, Func Offset: 0x180
	// Line 358, Address: 0x16832c, Func Offset: 0x18c
	// Line 359, Address: 0x168340, Func Offset: 0x1a0
	// Line 360, Address: 0x168350, Func Offset: 0x1b0
	// Line 361, Address: 0x16835c, Func Offset: 0x1bc
	// Line 362, Address: 0x168378, Func Offset: 0x1d8
	// Line 365, Address: 0x16837c, Func Offset: 0x1dc
	// Line 366, Address: 0x168398, Func Offset: 0x1f8
	// Line 367, Address: 0x1683a8, Func Offset: 0x208
	// Line 368, Address: 0x1683ac, Func Offset: 0x20c
	// Line 370, Address: 0x1683b8, Func Offset: 0x218
	// Line 371, Address: 0x1683cc, Func Offset: 0x22c
	// Line 372, Address: 0x1683d4, Func Offset: 0x234
	// Line 373, Address: 0x1683e4, Func Offset: 0x244
	// Line 374, Address: 0x1683f8, Func Offset: 0x258
	// Line 377, Address: 0x168408, Func Offset: 0x268
	// Line 378, Address: 0x16841c, Func Offset: 0x27c
	// Line 379, Address: 0x168424, Func Offset: 0x284
	// Line 380, Address: 0x168434, Func Offset: 0x294
	// Line 381, Address: 0x168438, Func Offset: 0x298
	// Line 382, Address: 0x16844c, Func Offset: 0x2ac
	// Line 383, Address: 0x16845c, Func Offset: 0x2bc
	// Line 386, Address: 0x168460, Func Offset: 0x2c0
	// Line 387, Address: 0x168474, Func Offset: 0x2d4
	// Line 388, Address: 0x16847c, Func Offset: 0x2dc
	// Line 389, Address: 0x16848c, Func Offset: 0x2ec
	// Line 392, Address: 0x168490, Func Offset: 0x2f0
	// Line 393, Address: 0x1684a4, Func Offset: 0x304
	// Line 394, Address: 0x1684ac, Func Offset: 0x30c
	// Line 395, Address: 0x1684bc, Func Offset: 0x31c
	// Line 398, Address: 0x1684c0, Func Offset: 0x320
	// Line 399, Address: 0x1684d4, Func Offset: 0x334
	// Line 400, Address: 0x1684ec, Func Offset: 0x34c
	// Line 401, Address: 0x1684f8, Func Offset: 0x358
	// Line 402, Address: 0x168500, Func Offset: 0x360
	// Line 405, Address: 0x16850c, Func Offset: 0x36c
	// Line 406, Address: 0x168520, Func Offset: 0x380
	// Line 407, Address: 0x16852c, Func Offset: 0x38c
	// Line 409, Address: 0x168538, Func Offset: 0x398
	// Line 410, Address: 0x168544, Func Offset: 0x3a4
	// Line 411, Address: 0x168554, Func Offset: 0x3b4
	// Line 413, Address: 0x16856c, Func Offset: 0x3cc
	// Line 414, Address: 0x16858c, Func Offset: 0x3ec
	// Line 415, Address: 0x16859c, Func Offset: 0x3fc
	// Line 417, Address: 0x1685a0, Func Offset: 0x400
	// Line 418, Address: 0x1685c0, Func Offset: 0x420
	// Line 419, Address: 0x1685d0, Func Offset: 0x430
	// Line 421, Address: 0x1685d4, Func Offset: 0x434
	// Line 422, Address: 0x1685fc, Func Offset: 0x45c
	// Line 423, Address: 0x168604, Func Offset: 0x464
	// Line 424, Address: 0x168610, Func Offset: 0x470
	// Line 425, Address: 0x168618, Func Offset: 0x478
	// Line 428, Address: 0x168624, Func Offset: 0x484
	// Line 429, Address: 0x168630, Func Offset: 0x490
	// Line 430, Address: 0x16863c, Func Offset: 0x49c
	// Line 431, Address: 0x168644, Func Offset: 0x4a4
	// Line 433, Address: 0x168650, Func Offset: 0x4b0
	// Line 434, Address: 0x168664, Func Offset: 0x4c4
	// Line 436, Address: 0x168688, Func Offset: 0x4e8
	// Line 439, Address: 0x168694, Func Offset: 0x4f4
	// Line 440, Address: 0x1686b0, Func Offset: 0x510
	// Line 442, Address: 0x1686b4, Func Offset: 0x514
	// Line 443, Address: 0x1686bc, Func Offset: 0x51c
	// Line 445, Address: 0x1686d8, Func Offset: 0x538
	// Line 447, Address: 0x1686e4, Func Offset: 0x544
	// Line 448, Address: 0x1686ec, Func Offset: 0x54c
	// Line 449, Address: 0x16870c, Func Offset: 0x56c
	// Line 450, Address: 0x168718, Func Offset: 0x578
	// Line 452, Address: 0x168724, Func Offset: 0x584
	// Func End, Address: 0x16873c, Func Offset: 0x59c
}

// 
// Start address: 0x168740
void enSCUCtrlWander(EnLOCAL_DATA* dp)
{
	float vec[4];
	int t;
	float d;
	// Line 456, Address: 0x168740, Func Offset: 0
	// Line 460, Address: 0x168754, Func Offset: 0x14
	// Line 461, Address: 0x168768, Func Offset: 0x28
	// Line 462, Address: 0x168774, Func Offset: 0x34
	// Line 464, Address: 0x16877c, Func Offset: 0x3c
	// Line 465, Address: 0x168790, Func Offset: 0x50
	// Line 466, Address: 0x16879c, Func Offset: 0x5c
	// Line 469, Address: 0x1687a4, Func Offset: 0x64
	// Line 470, Address: 0x1687c0, Func Offset: 0x80
	// Line 471, Address: 0x1687cc, Func Offset: 0x8c
	// Line 474, Address: 0x1687d4, Func Offset: 0x94
	// Line 476, Address: 0x1687e8, Func Offset: 0xa8
	// Line 477, Address: 0x168814, Func Offset: 0xd4
	// Line 478, Address: 0x168820, Func Offset: 0xe0
	// Line 480, Address: 0x168828, Func Offset: 0xe8
	// Line 482, Address: 0x168868, Func Offset: 0x128
	// Line 483, Address: 0x16887c, Func Offset: 0x13c
	// Line 484, Address: 0x16888c, Func Offset: 0x14c
	// Line 485, Address: 0x168898, Func Offset: 0x158
	// Line 486, Address: 0x1688ac, Func Offset: 0x16c
	// Line 487, Address: 0x1688c8, Func Offset: 0x188
	// Line 488, Address: 0x1688e8, Func Offset: 0x1a8
	// Line 490, Address: 0x1688f4, Func Offset: 0x1b4
	// Line 491, Address: 0x168924, Func Offset: 0x1e4
	// Line 493, Address: 0x16895c, Func Offset: 0x21c
	// Line 494, Address: 0x16896c, Func Offset: 0x22c
	// Line 495, Address: 0x168974, Func Offset: 0x234
	// Line 496, Address: 0x168984, Func Offset: 0x244
	// Line 497, Address: 0x16898c, Func Offset: 0x24c
	// Line 499, Address: 0x168a00, Func Offset: 0x2c0
	// Line 500, Address: 0x168a48, Func Offset: 0x308
	// Line 501, Address: 0x168a5c, Func Offset: 0x31c
	// Line 502, Address: 0x168a7c, Func Offset: 0x33c
	// Line 505, Address: 0x168ae0, Func Offset: 0x3a0
	// Line 506, Address: 0x168b3c, Func Offset: 0x3fc
	// Line 507, Address: 0x168b50, Func Offset: 0x410
	// Line 509, Address: 0x168b70, Func Offset: 0x430
	// Line 510, Address: 0x168ba0, Func Offset: 0x460
	// Line 511, Address: 0x168bb0, Func Offset: 0x470
	// Line 514, Address: 0x168bb8, Func Offset: 0x478
	// Line 516, Address: 0x168bc0, Func Offset: 0x480
	// Line 517, Address: 0x168bf0, Func Offset: 0x4b0
	// Line 518, Address: 0x168c10, Func Offset: 0x4d0
	// Line 519, Address: 0x168c18, Func Offset: 0x4d8
	// Line 520, Address: 0x168c34, Func Offset: 0x4f4
	// Line 521, Address: 0x168c48, Func Offset: 0x508
	// Line 523, Address: 0x168c50, Func Offset: 0x510
	// Line 525, Address: 0x168c58, Func Offset: 0x518
	// Line 526, Address: 0x168c68, Func Offset: 0x528
	// Line 527, Address: 0x168c78, Func Offset: 0x538
	// Line 528, Address: 0x168c84, Func Offset: 0x544
	// Line 533, Address: 0x168c8c, Func Offset: 0x54c
	// Line 534, Address: 0x168cac, Func Offset: 0x56c
	// Line 535, Address: 0x168cc4, Func Offset: 0x584
	// Line 537, Address: 0x168ce4, Func Offset: 0x5a4
	// Line 538, Address: 0x168cfc, Func Offset: 0x5bc
	// Line 539, Address: 0x168d08, Func Offset: 0x5c8
	// Line 540, Address: 0x168d14, Func Offset: 0x5d4
	// Line 541, Address: 0x168d2c, Func Offset: 0x5ec
	// Line 542, Address: 0x168d38, Func Offset: 0x5f8
	// Line 543, Address: 0x168d4c, Func Offset: 0x60c
	// Line 545, Address: 0x168d58, Func Offset: 0x618
	// Line 546, Address: 0x168d6c, Func Offset: 0x62c
	// Line 548, Address: 0x168d78, Func Offset: 0x638
	// Line 549, Address: 0x168d84, Func Offset: 0x644
	// Func End, Address: 0x168d9c, Func Offset: 0x65c
}

// 
// Start address: 0x168da0
void enSCUCtrlPrecaution(EnLOCAL_DATA* dp)
{
	int t;
	// Line 553, Address: 0x168da0, Func Offset: 0
	// Line 555, Address: 0x168db0, Func Offset: 0x10
	// Line 556, Address: 0x168dc4, Func Offset: 0x24
	// Line 557, Address: 0x168dd8, Func Offset: 0x38
	// Line 559, Address: 0x168de0, Func Offset: 0x40
	// Line 560, Address: 0x168df8, Func Offset: 0x58
	// Line 561, Address: 0x168e08, Func Offset: 0x68
	// Line 562, Address: 0x168e24, Func Offset: 0x84
	// Line 564, Address: 0x168e34, Func Offset: 0x94
	// Line 565, Address: 0x168e48, Func Offset: 0xa8
	// Line 566, Address: 0x168e5c, Func Offset: 0xbc
	// Line 568, Address: 0x168e64, Func Offset: 0xc4
	// Line 570, Address: 0x168e78, Func Offset: 0xd8
	// Line 571, Address: 0x168e94, Func Offset: 0xf4
	// Line 572, Address: 0x168ea0, Func Offset: 0x100
	// Line 573, Address: 0x168eb4, Func Offset: 0x114
	// Line 575, Address: 0x168eec, Func Offset: 0x14c
	// Line 576, Address: 0x168f00, Func Offset: 0x160
	// Line 578, Address: 0x168f28, Func Offset: 0x188
	// Line 579, Address: 0x168f48, Func Offset: 0x1a8
	// Line 581, Address: 0x168f58, Func Offset: 0x1b8
	// Line 582, Address: 0x168f60, Func Offset: 0x1c0
	// Line 586, Address: 0x168f70, Func Offset: 0x1d0
	// Line 587, Address: 0x168f88, Func Offset: 0x1e8
	// Line 588, Address: 0x168f94, Func Offset: 0x1f4
	// Line 589, Address: 0x168fa0, Func Offset: 0x200
	// Func End, Address: 0x168fb4, Func Offset: 0x214
}

// 
// Start address: 0x168fc0
void enSCUCtrlChase(EnLOCAL_DATA* dp)
{
	int t;
	// Line 593, Address: 0x168fc0, Func Offset: 0
	// Line 595, Address: 0x168fd4, Func Offset: 0x14
	// Line 596, Address: 0x168fe8, Func Offset: 0x28
	// Line 597, Address: 0x168ff4, Func Offset: 0x34
	// Line 599, Address: 0x168ffc, Func Offset: 0x3c
	// Line 600, Address: 0x169010, Func Offset: 0x50
	// Line 601, Address: 0x169020, Func Offset: 0x60
	// Line 602, Address: 0x169034, Func Offset: 0x74
	// Line 603, Address: 0x169044, Func Offset: 0x84
	// Line 606, Address: 0x169070, Func Offset: 0xb0
	// Line 609, Address: 0x16907c, Func Offset: 0xbc
	// Line 611, Address: 0x1690a0, Func Offset: 0xe0
	// Line 612, Address: 0x1690b8, Func Offset: 0xf8
	// Line 614, Address: 0x1690c4, Func Offset: 0x104
	// Line 616, Address: 0x169120, Func Offset: 0x160
	// Line 618, Address: 0x16912c, Func Offset: 0x16c
	// Line 619, Address: 0x169140, Func Offset: 0x180
	// Line 620, Address: 0x169158, Func Offset: 0x198
	// Line 621, Address: 0x169164, Func Offset: 0x1a4
	// Line 622, Address: 0x169190, Func Offset: 0x1d0
	// Line 624, Address: 0x1691ac, Func Offset: 0x1ec
	// Line 625, Address: 0x1691b4, Func Offset: 0x1f4
	// Line 626, Address: 0x1691bc, Func Offset: 0x1fc
	// Line 628, Address: 0x1691c8, Func Offset: 0x208
	// Line 630, Address: 0x169228, Func Offset: 0x268
	// Line 631, Address: 0x169234, Func Offset: 0x274
	// Line 632, Address: 0x169238, Func Offset: 0x278
	// Line 633, Address: 0x169244, Func Offset: 0x284
	// Func End, Address: 0x16925c, Func Offset: 0x29c
}

// 
// Start address: 0x169260
void enSCUCtrlBackward(EnLOCAL_DATA* dp)
{
	int t;
	// Line 637, Address: 0x169260, Func Offset: 0
	// Line 639, Address: 0x169270, Func Offset: 0x10
	// Line 640, Address: 0x169284, Func Offset: 0x24
	// Line 641, Address: 0x169298, Func Offset: 0x38
	// Line 643, Address: 0x1692a0, Func Offset: 0x40
	// Line 644, Address: 0x1692b8, Func Offset: 0x58
	// Line 645, Address: 0x1692c8, Func Offset: 0x68
	// Line 646, Address: 0x1692d4, Func Offset: 0x74
	// Line 647, Address: 0x1692e0, Func Offset: 0x80
	// Line 648, Address: 0x1692fc, Func Offset: 0x9c
	// Line 651, Address: 0x16930c, Func Offset: 0xac
	// Line 652, Address: 0x169324, Func Offset: 0xc4
	// Line 654, Address: 0x169330, Func Offset: 0xd0
	// Line 655, Address: 0x16934c, Func Offset: 0xec
	// Line 657, Address: 0x169384, Func Offset: 0x124
	// Line 658, Address: 0x169398, Func Offset: 0x138
	// Line 660, Address: 0x1693e0, Func Offset: 0x180
	// Line 662, Address: 0x169400, Func Offset: 0x1a0
	// Line 663, Address: 0x169410, Func Offset: 0x1b0
	// Line 664, Address: 0x169418, Func Offset: 0x1b8
	// Line 666, Address: 0x16942c, Func Offset: 0x1cc
	// Line 668, Address: 0x169474, Func Offset: 0x214
	// Line 670, Address: 0x169488, Func Offset: 0x228
	// Line 671, Address: 0x169494, Func Offset: 0x234
	// Func End, Address: 0x1694a8, Func Offset: 0x248
}

// 
// Start address: 0x1694b0
void enSCUCtrlAmbush(EnLOCAL_DATA* dp)
{
	EnAMBUSH_DATA* pa;
	float d;
	float a;
	short pz;
	short px;
	float vec[4];
	int t;
	// Line 675, Address: 0x1694b0, Func Offset: 0
	// Line 680, Address: 0x1694c4, Func Offset: 0x14
	// Line 681, Address: 0x1694c8, Func Offset: 0x18
	// Line 682, Address: 0x1694dc, Func Offset: 0x2c
	// Line 683, Address: 0x1694e8, Func Offset: 0x38
	// Line 685, Address: 0x1694f0, Func Offset: 0x40
	// Line 687, Address: 0x169530, Func Offset: 0x80
	// Line 688, Address: 0x169540, Func Offset: 0x90
	// Line 689, Address: 0x169554, Func Offset: 0xa4
	// Line 690, Address: 0x169560, Func Offset: 0xb0
	// Line 693, Address: 0x169568, Func Offset: 0xb8
	// Line 694, Address: 0x16958c, Func Offset: 0xdc
	// Line 695, Address: 0x1695b0, Func Offset: 0x100
	// Line 696, Address: 0x1695c8, Func Offset: 0x118
	// Line 697, Address: 0x1695e0, Func Offset: 0x130
	// Line 699, Address: 0x16962c, Func Offset: 0x17c
	// Line 700, Address: 0x169654, Func Offset: 0x1a4
	// Line 701, Address: 0x16965c, Func Offset: 0x1ac
	// Line 703, Address: 0x169664, Func Offset: 0x1b4
	// Line 705, Address: 0x1696b0, Func Offset: 0x200
	// Line 706, Address: 0x1696c4, Func Offset: 0x214
	// Line 707, Address: 0x1696cc, Func Offset: 0x21c
	// Line 711, Address: 0x1696d4, Func Offset: 0x224
	// Line 712, Address: 0x1696ec, Func Offset: 0x23c
	// Line 713, Address: 0x1696f0, Func Offset: 0x240
	// Line 714, Address: 0x169708, Func Offset: 0x258
	// Line 715, Address: 0x169710, Func Offset: 0x260
	// Line 716, Address: 0x169718, Func Offset: 0x268
	// Line 718, Address: 0x16973c, Func Offset: 0x28c
	// Line 719, Address: 0x169748, Func Offset: 0x298
	// Line 720, Address: 0x16976c, Func Offset: 0x2bc
	// Line 721, Address: 0x16979c, Func Offset: 0x2ec
	// Line 722, Address: 0x1697b8, Func Offset: 0x308
	// Line 723, Address: 0x1697c8, Func Offset: 0x318
	// Line 724, Address: 0x1697e4, Func Offset: 0x334
	// Line 725, Address: 0x1697f8, Func Offset: 0x348
	// Line 726, Address: 0x169800, Func Offset: 0x350
	// Line 727, Address: 0x169828, Func Offset: 0x378
	// Line 729, Address: 0x169830, Func Offset: 0x380
	// Line 732, Address: 0x169838, Func Offset: 0x388
	// Line 734, Address: 0x169878, Func Offset: 0x3c8
	// Line 735, Address: 0x169890, Func Offset: 0x3e0
	// Line 737, Address: 0x16989c, Func Offset: 0x3ec
	// Line 738, Address: 0x1698d0, Func Offset: 0x420
	// Line 739, Address: 0x1698e8, Func Offset: 0x438
	// Line 740, Address: 0x169900, Func Offset: 0x450
	// Line 743, Address: 0x169980, Func Offset: 0x4d0
	// Line 744, Address: 0x169988, Func Offset: 0x4d8
	// Line 746, Address: 0x169990, Func Offset: 0x4e0
	// Line 747, Address: 0x1699a0, Func Offset: 0x4f0
	// Line 748, Address: 0x1699b0, Func Offset: 0x500
	// Line 752, Address: 0x1699bc, Func Offset: 0x50c
	// Line 754, Address: 0x1699c8, Func Offset: 0x518
	// Line 755, Address: 0x1699dc, Func Offset: 0x52c
	// Line 756, Address: 0x1699f4, Func Offset: 0x544
	// Line 757, Address: 0x169a00, Func Offset: 0x550
	// Line 759, Address: 0x169a2c, Func Offset: 0x57c
	// Line 761, Address: 0x169a38, Func Offset: 0x588
	// Func End, Address: 0x169a50, Func Offset: 0x5a0
}

// 
// Start address: 0x169a50
void enSCUCtrlCrawl(EnLOCAL_DATA* dp)
{
	int t;
	float vec[4];
	// Line 765, Address: 0x169a50, Func Offset: 0
	// Line 768, Address: 0x169a64, Func Offset: 0x14
	// Line 769, Address: 0x169a78, Func Offset: 0x28
	// Line 770, Address: 0x169a84, Func Offset: 0x34
	// Line 771, Address: 0x169a94, Func Offset: 0x44
	// Line 772, Address: 0x169aa0, Func Offset: 0x50
	// Line 773, Address: 0x169ab4, Func Offset: 0x64
	// Line 774, Address: 0x169ac0, Func Offset: 0x70
	// Line 776, Address: 0x169ac8, Func Offset: 0x78
	// Line 777, Address: 0x169ad0, Func Offset: 0x80
	// Line 779, Address: 0x169ae0, Func Offset: 0x90
	// Line 781, Address: 0x169b18, Func Offset: 0xc8
	// Line 782, Address: 0x169b28, Func Offset: 0xd8
	// Line 783, Address: 0x169b54, Func Offset: 0x104
	// Line 784, Address: 0x169b60, Func Offset: 0x110
	// Line 786, Address: 0x169b68, Func Offset: 0x118
	// Line 787, Address: 0x169b78, Func Offset: 0x128
	// Line 789, Address: 0x169b7c, Func Offset: 0x12c
	// Line 791, Address: 0x169b84, Func Offset: 0x134
	// Line 792, Address: 0x169b94, Func Offset: 0x144
	// Line 793, Address: 0x169ba0, Func Offset: 0x150
	// Line 794, Address: 0x169bb4, Func Offset: 0x164
	// Line 796, Address: 0x169bf0, Func Offset: 0x1a0
	// Line 797, Address: 0x169c10, Func Offset: 0x1c0
	// Line 798, Address: 0x169c1c, Func Offset: 0x1cc
	// Line 799, Address: 0x169c68, Func Offset: 0x218
	// Line 800, Address: 0x169c74, Func Offset: 0x224
	// Line 801, Address: 0x169c80, Func Offset: 0x230
	// Line 803, Address: 0x169c88, Func Offset: 0x238
	// Line 804, Address: 0x169c94, Func Offset: 0x244
	// Line 806, Address: 0x169d08, Func Offset: 0x2b8
	// Line 808, Address: 0x169d44, Func Offset: 0x2f4
	// Line 810, Address: 0x169d64, Func Offset: 0x314
	// Line 811, Address: 0x169d7c, Func Offset: 0x32c
	// Line 812, Address: 0x169d90, Func Offset: 0x340
	// Line 815, Address: 0x169df0, Func Offset: 0x3a0
	// Line 816, Address: 0x169e00, Func Offset: 0x3b0
	// Line 817, Address: 0x169e0c, Func Offset: 0x3bc
	// Line 818, Address: 0x169e18, Func Offset: 0x3c8
	// Line 819, Address: 0x169e4c, Func Offset: 0x3fc
	// Line 820, Address: 0x169e60, Func Offset: 0x410
	// Line 821, Address: 0x169e68, Func Offset: 0x418
	// Line 822, Address: 0x169e98, Func Offset: 0x448
	// Line 823, Address: 0x169ea8, Func Offset: 0x458
	// Line 824, Address: 0x169f0c, Func Offset: 0x4bc
	// Line 825, Address: 0x169f14, Func Offset: 0x4c4
	// Line 826, Address: 0x169f1c, Func Offset: 0x4cc
	// Line 827, Address: 0x169f20, Func Offset: 0x4d0
	// Line 828, Address: 0x169f2c, Func Offset: 0x4dc
	// Line 829, Address: 0x169f90, Func Offset: 0x540
	// Line 830, Address: 0x169f98, Func Offset: 0x548
	// Line 832, Address: 0x169fac, Func Offset: 0x55c
	// Line 833, Address: 0x169fb4, Func Offset: 0x564
	// Line 835, Address: 0x169fc8, Func Offset: 0x578
	// Line 836, Address: 0x169fcc, Func Offset: 0x57c
	// Line 837, Address: 0x169fd8, Func Offset: 0x588
	// Line 838, Address: 0x16a03c, Func Offset: 0x5ec
	// Line 840, Address: 0x16a044, Func Offset: 0x5f4
	// Line 842, Address: 0x16a04c, Func Offset: 0x5fc
	// Line 843, Address: 0x16a05c, Func Offset: 0x60c
	// Line 844, Address: 0x16a068, Func Offset: 0x618
	// Line 845, Address: 0x16a074, Func Offset: 0x624
	// Line 846, Address: 0x16a090, Func Offset: 0x640
	// Line 847, Address: 0x16a09c, Func Offset: 0x64c
	// Line 848, Address: 0x16a0a4, Func Offset: 0x654
	// Line 850, Address: 0x16a0b0, Func Offset: 0x660
	// Line 852, Address: 0x16a0bc, Func Offset: 0x66c
	// Line 854, Address: 0x16a0c4, Func Offset: 0x674
	// Line 855, Address: 0x16a0ec, Func Offset: 0x69c
	// Line 856, Address: 0x16a104, Func Offset: 0x6b4
	// Line 859, Address: 0x16a168, Func Offset: 0x718
	// Line 863, Address: 0x16a17c, Func Offset: 0x72c
	// Line 864, Address: 0x16a18c, Func Offset: 0x73c
	// Line 865, Address: 0x16a198, Func Offset: 0x748
	// Line 866, Address: 0x16a1a4, Func Offset: 0x754
	// Line 867, Address: 0x16a1d8, Func Offset: 0x788
	// Line 868, Address: 0x16a1ec, Func Offset: 0x79c
	// Line 869, Address: 0x16a1f4, Func Offset: 0x7a4
	// Line 870, Address: 0x16a224, Func Offset: 0x7d4
	// Line 871, Address: 0x16a234, Func Offset: 0x7e4
	// Line 872, Address: 0x16a298, Func Offset: 0x848
	// Line 873, Address: 0x16a2a0, Func Offset: 0x850
	// Line 874, Address: 0x16a2a8, Func Offset: 0x858
	// Line 875, Address: 0x16a2b4, Func Offset: 0x864
	// Line 878, Address: 0x16a2b8, Func Offset: 0x868
	// Line 880, Address: 0x16a2c0, Func Offset: 0x870
	// Line 881, Address: 0x16a2d4, Func Offset: 0x884
	// Line 882, Address: 0x16a2e8, Func Offset: 0x898
	// Line 884, Address: 0x16a32c, Func Offset: 0x8dc
	// Line 885, Address: 0x16a330, Func Offset: 0x8e0
	// Line 886, Address: 0x16a338, Func Offset: 0x8e8
	// Line 887, Address: 0x16a348, Func Offset: 0x8f8
	// Line 888, Address: 0x16a3ac, Func Offset: 0x95c
	// Line 891, Address: 0x16a3b4, Func Offset: 0x964
	// Line 893, Address: 0x16a3bc, Func Offset: 0x96c
	// Line 894, Address: 0x16a3ec, Func Offset: 0x99c
	// Line 895, Address: 0x16a3f8, Func Offset: 0x9a8
	// Line 896, Address: 0x16a404, Func Offset: 0x9b4
	// Line 897, Address: 0x16a408, Func Offset: 0x9b8
	// Line 900, Address: 0x16a410, Func Offset: 0x9c0
	// Line 901, Address: 0x16a430, Func Offset: 0x9e0
	// Line 902, Address: 0x16a448, Func Offset: 0x9f8
	// Line 903, Address: 0x16a468, Func Offset: 0xa18
	// Line 906, Address: 0x16a46c, Func Offset: 0xa1c
	// Line 907, Address: 0x16a484, Func Offset: 0xa34
	// Line 908, Address: 0x16a4ac, Func Offset: 0xa5c
	// Line 909, Address: 0x16a4b8, Func Offset: 0xa68
	// Line 910, Address: 0x16a4cc, Func Offset: 0xa7c
	// Line 912, Address: 0x16a4d8, Func Offset: 0xa88
	// Func End, Address: 0x16a4f0, Func Offset: 0xaa0
}

// 
// Start address: 0x16a4f0
void enSCUCtrlAttack(EnLOCAL_DATA* dp)
{
	// Line 916, Address: 0x16a4f0, Func Offset: 0
	// Line 917, Address: 0x16a500, Func Offset: 0x10
	// Line 918, Address: 0x16a514, Func Offset: 0x24
	// Line 919, Address: 0x16a528, Func Offset: 0x38
	// Line 921, Address: 0x16a530, Func Offset: 0x40
	// Line 923, Address: 0x16a568, Func Offset: 0x78
	// Line 924, Address: 0x16a58c, Func Offset: 0x9c
	// Line 925, Address: 0x16a59c, Func Offset: 0xac
	// Line 926, Address: 0x16a5a8, Func Offset: 0xb8
	// Line 927, Address: 0x16a5b4, Func Offset: 0xc4
	// Line 928, Address: 0x16a5c0, Func Offset: 0xd0
	// Line 929, Address: 0x16a5d0, Func Offset: 0xe0
	// Line 930, Address: 0x16a5d8, Func Offset: 0xe8
	// Line 931, Address: 0x16a5f4, Func Offset: 0x104
	// Line 932, Address: 0x16a600, Func Offset: 0x110
	// Line 933, Address: 0x16a608, Func Offset: 0x118
	// Line 934, Address: 0x16a610, Func Offset: 0x120
	// Line 936, Address: 0x16a620, Func Offset: 0x130
	// Line 937, Address: 0x16a62c, Func Offset: 0x13c
	// Line 941, Address: 0x16a634, Func Offset: 0x144
	// Line 942, Address: 0x16a644, Func Offset: 0x154
	// Line 943, Address: 0x16a658, Func Offset: 0x168
	// Line 944, Address: 0x16a664, Func Offset: 0x174
	// Line 947, Address: 0x16a6ac, Func Offset: 0x1bc
	// Line 948, Address: 0x16a6b4, Func Offset: 0x1c4
	// Line 949, Address: 0x16a6bc, Func Offset: 0x1cc
	// Line 950, Address: 0x16a6d8, Func Offset: 0x1e8
	// Line 952, Address: 0x16a714, Func Offset: 0x224
	// Line 953, Address: 0x16a728, Func Offset: 0x238
	// Line 954, Address: 0x16a730, Func Offset: 0x240
	// Line 956, Address: 0x16a744, Func Offset: 0x254
	// Line 957, Address: 0x16a74c, Func Offset: 0x25c
	// Line 960, Address: 0x16a760, Func Offset: 0x270
	// Line 964, Address: 0x16a768, Func Offset: 0x278
	// Line 965, Address: 0x16a774, Func Offset: 0x284
	// Line 966, Address: 0x16a788, Func Offset: 0x298
	// Line 967, Address: 0x16a7a4, Func Offset: 0x2b4
	// Line 968, Address: 0x16a7d0, Func Offset: 0x2e0
	// Line 969, Address: 0x16a7d8, Func Offset: 0x2e8
	// Line 970, Address: 0x16a7e0, Func Offset: 0x2f0
	// Line 972, Address: 0x16a7f4, Func Offset: 0x304
	// Line 973, Address: 0x16a7fc, Func Offset: 0x30c
	// Line 978, Address: 0x16a810, Func Offset: 0x320
	// Line 979, Address: 0x16a81c, Func Offset: 0x32c
	// Func End, Address: 0x16a830, Func Offset: 0x340
}

// 
// Start address: 0x16a830
void enSCUCtrlDamage(EnLOCAL_DATA* dp)
{
	float d;
	// Line 983, Address: 0x16a830, Func Offset: 0
	// Line 985, Address: 0x16a83c, Func Offset: 0xc
	// Line 987, Address: 0x16a874, Func Offset: 0x44
	// Line 988, Address: 0x16a884, Func Offset: 0x54
	// Line 990, Address: 0x16a8fc, Func Offset: 0xcc
	// Line 991, Address: 0x16a918, Func Offset: 0xe8
	// Line 992, Address: 0x16a920, Func Offset: 0xf0
	// Line 994, Address: 0x16a93c, Func Offset: 0x10c
	// Line 995, Address: 0x16a974, Func Offset: 0x144
	// Line 996, Address: 0x16a99c, Func Offset: 0x16c
	// Line 997, Address: 0x16a9c8, Func Offset: 0x198
	// Line 998, Address: 0x16a9d4, Func Offset: 0x1a4
	// Line 999, Address: 0x16a9dc, Func Offset: 0x1ac
	// Line 1001, Address: 0x16a9e8, Func Offset: 0x1b8
	// Line 1002, Address: 0x16a9f4, Func Offset: 0x1c4
	// Line 1004, Address: 0x16a9fc, Func Offset: 0x1cc
	// Line 1005, Address: 0x16aa30, Func Offset: 0x200
	// Line 1006, Address: 0x16aa44, Func Offset: 0x214
	// Line 1007, Address: 0x16aa60, Func Offset: 0x230
	// Line 1009, Address: 0x16aa68, Func Offset: 0x238
	// Line 1011, Address: 0x16aa70, Func Offset: 0x240
	// Line 1012, Address: 0x16aa84, Func Offset: 0x254
	// Line 1014, Address: 0x16aa90, Func Offset: 0x260
	// Line 1015, Address: 0x16aaa4, Func Offset: 0x274
	// Line 1019, Address: 0x16aab8, Func Offset: 0x288
	// Func End, Address: 0x16aac8, Func Offset: 0x298
}

// 
// Start address: 0x16aad0
void enSCUCtrlDown(EnLOCAL_DATA* dp)
{
	// Line 1023, Address: 0x16aad0, Func Offset: 0
	// Line 1024, Address: 0x16aae0, Func Offset: 0x10
	// Line 1026, Address: 0x16ab18, Func Offset: 0x48
	// Line 1027, Address: 0x16ab24, Func Offset: 0x54
	// Line 1028, Address: 0x16ab50, Func Offset: 0x80
	// Line 1029, Address: 0x16ab74, Func Offset: 0xa4
	// Line 1030, Address: 0x16ab80, Func Offset: 0xb0
	// Line 1031, Address: 0x16abb0, Func Offset: 0xe0
	// Line 1032, Address: 0x16abc4, Func Offset: 0xf4
	// Line 1033, Address: 0x16abcc, Func Offset: 0xfc
	// Line 1034, Address: 0x16abdc, Func Offset: 0x10c
	// Line 1036, Address: 0x16abe8, Func Offset: 0x118
	// Line 1038, Address: 0x16abf0, Func Offset: 0x120
	// Line 1039, Address: 0x16ac00, Func Offset: 0x130
	// Line 1042, Address: 0x16ac30, Func Offset: 0x160
	// Line 1044, Address: 0x16ac40, Func Offset: 0x170
	// Line 1046, Address: 0x16ac50, Func Offset: 0x180
	// Line 1047, Address: 0x16ac64, Func Offset: 0x194
	// Line 1048, Address: 0x16ac84, Func Offset: 0x1b4
	// Line 1049, Address: 0x16ac90, Func Offset: 0x1c0
	// Line 1050, Address: 0x16ac9c, Func Offset: 0x1cc
	// Line 1051, Address: 0x16acb0, Func Offset: 0x1e0
	// Line 1052, Address: 0x16acc4, Func Offset: 0x1f4
	// Line 1054, Address: 0x16accc, Func Offset: 0x1fc
	// Line 1055, Address: 0x16acd8, Func Offset: 0x208
	// Line 1056, Address: 0x16acec, Func Offset: 0x21c
	// Line 1058, Address: 0x16ad1c, Func Offset: 0x24c
	// Line 1059, Address: 0x16ad34, Func Offset: 0x264
	// Line 1062, Address: 0x16ad8c, Func Offset: 0x2bc
	// Line 1063, Address: 0x16ada0, Func Offset: 0x2d0
	// Line 1065, Address: 0x16ada8, Func Offset: 0x2d8
	// Line 1066, Address: 0x16adc8, Func Offset: 0x2f8
	// Line 1067, Address: 0x16add8, Func Offset: 0x308
	// Line 1068, Address: 0x16ade4, Func Offset: 0x314
	// Line 1069, Address: 0x16ae18, Func Offset: 0x348
	// Line 1070, Address: 0x16ae24, Func Offset: 0x354
	// Line 1071, Address: 0x16ae58, Func Offset: 0x388
	// Line 1072, Address: 0x16ae94, Func Offset: 0x3c4
	// Line 1073, Address: 0x16aeb0, Func Offset: 0x3e0
	// Line 1074, Address: 0x16aec0, Func Offset: 0x3f0
	// Line 1075, Address: 0x16aed0, Func Offset: 0x400
	// Line 1076, Address: 0x16aedc, Func Offset: 0x40c
	// Line 1077, Address: 0x16aee4, Func Offset: 0x414
	// Line 1079, Address: 0x16aef8, Func Offset: 0x428
	// Line 1081, Address: 0x16af00, Func Offset: 0x430
	// Line 1082, Address: 0x16af38, Func Offset: 0x468
	// Line 1084, Address: 0x16af6c, Func Offset: 0x49c
	// Line 1085, Address: 0x16af8c, Func Offset: 0x4bc
	// Line 1087, Address: 0x16afa0, Func Offset: 0x4d0
	// Line 1088, Address: 0x16afa8, Func Offset: 0x4d8
	// Line 1090, Address: 0x16afec, Func Offset: 0x51c
	// Line 1091, Address: 0x16b00c, Func Offset: 0x53c
	// Line 1092, Address: 0x16b014, Func Offset: 0x544
	// Line 1096, Address: 0x16b028, Func Offset: 0x558
	// Line 1098, Address: 0x16b030, Func Offset: 0x560
	// Line 1099, Address: 0x16b044, Func Offset: 0x574
	// Line 1100, Address: 0x16b050, Func Offset: 0x580
	// Line 1101, Address: 0x16b05c, Func Offset: 0x58c
	// Line 1102, Address: 0x16b07c, Func Offset: 0x5ac
	// Line 1103, Address: 0x16b090, Func Offset: 0x5c0
	// Line 1104, Address: 0x16b098, Func Offset: 0x5c8
	// Line 1107, Address: 0x16b0ac, Func Offset: 0x5dc
	// Line 1109, Address: 0x16b0b4, Func Offset: 0x5e4
	// Line 1110, Address: 0x16b0c8, Func Offset: 0x5f8
	// Line 1111, Address: 0x16b0d4, Func Offset: 0x604
	// Line 1112, Address: 0x16b0e0, Func Offset: 0x610
	// Line 1113, Address: 0x16b0f4, Func Offset: 0x624
	// Line 1114, Address: 0x16b108, Func Offset: 0x638
	// Line 1116, Address: 0x16b110, Func Offset: 0x640
	// Line 1117, Address: 0x16b120, Func Offset: 0x650
	// Line 1118, Address: 0x16b15c, Func Offset: 0x68c
	// Line 1119, Address: 0x16b180, Func Offset: 0x6b0
	// Line 1120, Address: 0x16b1a8, Func Offset: 0x6d8
	// Line 1121, Address: 0x16b1bc, Func Offset: 0x6ec
	// Line 1122, Address: 0x16b1c4, Func Offset: 0x6f4
	// Line 1123, Address: 0x16b1d4, Func Offset: 0x704
	// Line 1125, Address: 0x16b1e0, Func Offset: 0x710
	// Line 1126, Address: 0x16b1e8, Func Offset: 0x718
	// Line 1127, Address: 0x16b204, Func Offset: 0x734
	// Line 1128, Address: 0x16b210, Func Offset: 0x740
	// Line 1131, Address: 0x16b218, Func Offset: 0x748
	// Line 1132, Address: 0x16b228, Func Offset: 0x758
	// Line 1133, Address: 0x16b234, Func Offset: 0x764
	// Line 1135, Address: 0x16b23c, Func Offset: 0x76c
	// Line 1136, Address: 0x16b25c, Func Offset: 0x78c
	// Line 1137, Address: 0x16b270, Func Offset: 0x7a0
	// Line 1138, Address: 0x16b27c, Func Offset: 0x7ac
	// Line 1139, Address: 0x16b28c, Func Offset: 0x7bc
	// Line 1140, Address: 0x16b2c0, Func Offset: 0x7f0
	// Line 1143, Address: 0x16b2cc, Func Offset: 0x7fc
	// Line 1145, Address: 0x16b2d4, Func Offset: 0x804
	// Line 1146, Address: 0x16b2e8, Func Offset: 0x818
	// Line 1147, Address: 0x16b2f4, Func Offset: 0x824
	// Line 1148, Address: 0x16b304, Func Offset: 0x834
	// Line 1149, Address: 0x16b31c, Func Offset: 0x84c
	// Line 1150, Address: 0x16b338, Func Offset: 0x868
	// Line 1151, Address: 0x16b34c, Func Offset: 0x87c
	// Line 1153, Address: 0x16b354, Func Offset: 0x884
	// Line 1154, Address: 0x16b368, Func Offset: 0x898
	// Line 1155, Address: 0x16b374, Func Offset: 0x8a4
	// Line 1156, Address: 0x16b398, Func Offset: 0x8c8
	// Line 1158, Address: 0x16b3ac, Func Offset: 0x8dc
	// Line 1160, Address: 0x16b3b4, Func Offset: 0x8e4
	// Line 1161, Address: 0x16b3c8, Func Offset: 0x8f8
	// Line 1162, Address: 0x16b3d4, Func Offset: 0x904
	// Line 1163, Address: 0x16b3e4, Func Offset: 0x914
	// Line 1164, Address: 0x16b3f8, Func Offset: 0x928
	// Line 1165, Address: 0x16b40c, Func Offset: 0x93c
	// Line 1167, Address: 0x16b414, Func Offset: 0x944
	// Line 1168, Address: 0x16b424, Func Offset: 0x954
	// Line 1169, Address: 0x16b430, Func Offset: 0x960
	// Line 1170, Address: 0x16b450, Func Offset: 0x980
	// Line 1172, Address: 0x16b464, Func Offset: 0x994
	// Line 1174, Address: 0x16b46c, Func Offset: 0x99c
	// Line 1175, Address: 0x16b480, Func Offset: 0x9b0
	// Line 1176, Address: 0x16b48c, Func Offset: 0x9bc
	// Line 1177, Address: 0x16b498, Func Offset: 0x9c8
	// Line 1178, Address: 0x16b4ac, Func Offset: 0x9dc
	// Line 1179, Address: 0x16b4c0, Func Offset: 0x9f0
	// Line 1181, Address: 0x16b4c8, Func Offset: 0x9f8
	// Line 1182, Address: 0x16b4dc, Func Offset: 0xa0c
	// Line 1183, Address: 0x16b4e8, Func Offset: 0xa18
	// Line 1184, Address: 0x16b504, Func Offset: 0xa34
	// Line 1185, Address: 0x16b524, Func Offset: 0xa54
	// Line 1186, Address: 0x16b538, Func Offset: 0xa68
	// Line 1187, Address: 0x16b548, Func Offset: 0xa78
	// Line 1188, Address: 0x16b558, Func Offset: 0xa88
	// Line 1189, Address: 0x16b58c, Func Offset: 0xabc
	// Line 1193, Address: 0x16b598, Func Offset: 0xac8
	// Func End, Address: 0x16b5ac, Func Offset: 0xadc
}

// 
// Start address: 0x16b5b0
int enSCUCanSeePlayer(EnLOCAL_DATA* dp, float angle)
{
	int wcd;
	float a;
	float dist;
	float* ppos;
	// Line 1198, Address: 0x16b5b0, Func Offset: 0
	// Line 1199, Address: 0x16b5c8, Func Offset: 0x18
	// Line 1201, Address: 0x16b5d8, Func Offset: 0x28
	// Line 1202, Address: 0x16b5e4, Func Offset: 0x34
	// Line 1203, Address: 0x16b604, Func Offset: 0x54
	// Line 1204, Address: 0x16b620, Func Offset: 0x70
	// Line 1207, Address: 0x16b654, Func Offset: 0xa4
	// Line 1208, Address: 0x16b670, Func Offset: 0xc0
	// Line 1209, Address: 0x16b684, Func Offset: 0xd4
	// Line 1211, Address: 0x16b6ac, Func Offset: 0xfc
	// Line 1212, Address: 0x16b6cc, Func Offset: 0x11c
	// Line 1214, Address: 0x16b6d8, Func Offset: 0x128
	// Line 1216, Address: 0x16b6e4, Func Offset: 0x134
	// Line 1217, Address: 0x16b6f0, Func Offset: 0x140
	// Line 1219, Address: 0x16b724, Func Offset: 0x174
	// Line 1222, Address: 0x16b754, Func Offset: 0x1a4
	// Line 1225, Address: 0x16b780, Func Offset: 0x1d0
	// Line 1228, Address: 0x16b7ac, Func Offset: 0x1fc
	// Line 1231, Address: 0x16b7d8, Func Offset: 0x228
	// Line 1232, Address: 0x16b7f4, Func Offset: 0x244
	// Line 1233, Address: 0x16b808, Func Offset: 0x258
	// Line 1234, Address: 0x16b850, Func Offset: 0x2a0
	// Line 1235, Address: 0x16b85c, Func Offset: 0x2ac
	// Line 1237, Address: 0x16b888, Func Offset: 0x2d8
	// Line 1238, Address: 0x16b8b8, Func Offset: 0x308
	// Line 1239, Address: 0x16b8bc, Func Offset: 0x30c
	// Func End, Address: 0x16b8d4, Func Offset: 0x324
}

// 
// Start address: 0x16b8e0
int enSCUCheckAmbush(EnLOCAL_DATA* dp)
{
	float pos[4];
	short pz;
	short px;
	int i;
	int num_max;
	EnAMBUSH_DATA* pa;
	// Line 1244, Address: 0x16b8e0, Func Offset: 0
	// Line 1245, Address: 0x16b8f8, Func Offset: 0x18
	// Line 1246, Address: 0x16b914, Func Offset: 0x34
	// Line 1250, Address: 0x16b930, Func Offset: 0x50
	// Line 1251, Address: 0x16b96c, Func Offset: 0x8c
	// Line 1252, Address: 0x16b978, Func Offset: 0x98
	// Line 1253, Address: 0x16b9ac, Func Offset: 0xcc
	// Line 1254, Address: 0x16b9c4, Func Offset: 0xe4
	// Line 1255, Address: 0x16b9dc, Func Offset: 0xfc
	// Line 1256, Address: 0x16b9e8, Func Offset: 0x108
	// Line 1258, Address: 0x16ba68, Func Offset: 0x188
	// Line 1259, Address: 0x16ba8c, Func Offset: 0x1ac
	// Line 1260, Address: 0x16bab0, Func Offset: 0x1d0
	// Line 1261, Address: 0x16bb00, Func Offset: 0x220
	// Line 1262, Address: 0x16bb04, Func Offset: 0x224
	// Line 1263, Address: 0x16bb10, Func Offset: 0x230
	// Line 1264, Address: 0x16bb24, Func Offset: 0x244
	// Line 1265, Address: 0x16bb28, Func Offset: 0x248
	// Func End, Address: 0x16bb44, Func Offset: 0x264
}

// 
// Start address: 0x16bb50
void enSCUAnimeSet(EnLOCAL_DATA* dp, int anim)
{
	// Line 1269, Address: 0x16bb50, Func Offset: 0
	// Line 1270, Address: 0x16bb68, Func Offset: 0x18
	// Line 1271, Address: 0x16bb84, Func Offset: 0x34
	// Line 1272, Address: 0x16bb90, Func Offset: 0x40
	// Line 1273, Address: 0x16bb9c, Func Offset: 0x4c
	// Line 1274, Address: 0x16bba4, Func Offset: 0x54
	// Line 1277, Address: 0x16bbac, Func Offset: 0x5c
	// Line 1278, Address: 0x16bc04, Func Offset: 0xb4
	// Line 1279, Address: 0x16bc14, Func Offset: 0xc4
	// Line 1280, Address: 0x16bc44, Func Offset: 0xf4
	// Line 1281, Address: 0x16bc4c, Func Offset: 0xfc
	// Line 1282, Address: 0x16bc78, Func Offset: 0x128
	// Line 1283, Address: 0x16bc88, Func Offset: 0x138
	// Line 1286, Address: 0x16bc94, Func Offset: 0x144
	// Func End, Address: 0x16bcac, Func Offset: 0x15c
}

// 
// Start address: 0x16bcb0
void enSCUAnimeReset(EnLOCAL_DATA* dp, int anim)
{
	// Line 1290, Address: 0x16bcb0, Func Offset: 0
	// Line 1292, Address: 0x16bcc8, Func Offset: 0x18
	// Line 1293, Address: 0x16bd20, Func Offset: 0x70
	// Line 1294, Address: 0x16bd30, Func Offset: 0x80
	// Line 1295, Address: 0x16bd60, Func Offset: 0xb0
	// Line 1296, Address: 0x16bd68, Func Offset: 0xb8
	// Line 1297, Address: 0x16bd94, Func Offset: 0xe4
	// Line 1298, Address: 0x16bda4, Func Offset: 0xf4
	// Line 1301, Address: 0x16bdb0, Func Offset: 0x100
	// Func End, Address: 0x16bdc8, Func Offset: 0x118
}

// 
// Start address: 0x16bdd0
void enSCUAnimeExec(EnLOCAL_DATA* dp)
{
	float vec[4];
	float pos[4];
	int of;
	// Line 1305, Address: 0x16bdd0, Func Offset: 0
	// Line 1306, Address: 0x16bde4, Func Offset: 0x14
	// Line 1307, Address: 0x16bde8, Func Offset: 0x18
	// Line 1308, Address: 0x16be00, Func Offset: 0x30
	// Line 1309, Address: 0x16be2c, Func Offset: 0x5c
	// Line 1312, Address: 0x16be74, Func Offset: 0xa4
	// Line 1313, Address: 0x16be80, Func Offset: 0xb0
	// Line 1315, Address: 0x16beb8, Func Offset: 0xe8
	// Line 1316, Address: 0x16bec4, Func Offset: 0xf4
	// Line 1318, Address: 0x16bee4, Func Offset: 0x114
	// Line 1320, Address: 0x16bf04, Func Offset: 0x134
	// Line 1321, Address: 0x16bf18, Func Offset: 0x148
	// Line 1322, Address: 0x16bf30, Func Offset: 0x160
	// Line 1323, Address: 0x16bf50, Func Offset: 0x180
	// Line 1324, Address: 0x16bf8c, Func Offset: 0x1bc
	// Line 1325, Address: 0x16bf9c, Func Offset: 0x1cc
	// Line 1326, Address: 0x16bfb0, Func Offset: 0x1e0
	// Line 1329, Address: 0x16bfb8, Func Offset: 0x1e8
	// Line 1331, Address: 0x16bfd8, Func Offset: 0x208
	// Line 1333, Address: 0x16bfe4, Func Offset: 0x214
	// Line 1343, Address: 0x16c08c, Func Offset: 0x2bc
	// Line 1344, Address: 0x16c0a0, Func Offset: 0x2d0
	// Line 1345, Address: 0x16c0bc, Func Offset: 0x2ec
	// Line 1346, Address: 0x16c0c4, Func Offset: 0x2f4
	// Line 1350, Address: 0x16c0e0, Func Offset: 0x310
	// Func End, Address: 0x16c0f8, Func Offset: 0x328
}

// 
// Start address: 0x16c100
void enSCUAutoRecovery(EnLOCAL_DATA* dp)
{
	float recover_rate[5];
	// Line 1354, Address: 0x16c100, Func Offset: 0
	// Line 1355, Address: 0x16c10c, Func Offset: 0xc
	// Line 1362, Address: 0x16c128, Func Offset: 0x28
	// Line 1363, Address: 0x16c148, Func Offset: 0x48
	// Func End, Address: 0x16c158, Func Offset: 0x58
}

// 
// Start address: 0x16c160
float enSCUGetWalkSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1367, Address: 0x16c160, Func Offset: 0
	// Line 1368, Address: 0x16c170, Func Offset: 0x10
	// Line 1375, Address: 0x16c18c, Func Offset: 0x2c
	// Line 1376, Address: 0x16c1a0, Func Offset: 0x40
	// Line 1377, Address: 0x16c1cc, Func Offset: 0x6c
	// Line 1379, Address: 0x16c1ec, Func Offset: 0x8c
	// Func End, Address: 0x16c200, Func Offset: 0xa0
}

// 
// Start address: 0x16c200
float enSCUGetCrawlSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1383, Address: 0x16c200, Func Offset: 0
	// Line 1384, Address: 0x16c210, Func Offset: 0x10
	// Line 1391, Address: 0x16c22c, Func Offset: 0x2c
	// Line 1392, Address: 0x16c240, Func Offset: 0x40
	// Line 1393, Address: 0x16c268, Func Offset: 0x68
	// Line 1394, Address: 0x16c288, Func Offset: 0x88
	// Line 1395, Address: 0x16c29c, Func Offset: 0x9c
	// Func End, Address: 0x16c2b0, Func Offset: 0xb0
}

// 
// Start address: 0x16c2b0
float enSCUGetFeelRange()
{
	float feel_range[5];
	// Line 1399, Address: 0x16c2b0, Func Offset: 0
	// Line 1400, Address: 0x16c2b8, Func Offset: 0x8
	// Line 1407, Address: 0x16c2d4, Func Offset: 0x24
	// Line 1408, Address: 0x16c2e8, Func Offset: 0x38
	// Line 1410, Address: 0x16c2f8, Func Offset: 0x48
	// Line 1411, Address: 0x16c310, Func Offset: 0x60
	// Func End, Address: 0x16c320, Func Offset: 0x70
}

// 
// Start address: 0x16c320
float enSCUGetAttackRange()
{
	float attack_range[5];
	// Line 1415, Address: 0x16c320, Func Offset: 0
	// Line 1416, Address: 0x16c328, Func Offset: 0x8
	// Line 1423, Address: 0x16c344, Func Offset: 0x24
	// Line 1424, Address: 0x16c358, Func Offset: 0x38
	// Func End, Address: 0x16c368, Func Offset: 0x48
}

// 
// Start address: 0x16c370
float enSCUGetAttackAngle()
{
	float attack_angle[5];
	// Line 1428, Address: 0x16c370, Func Offset: 0
	// Line 1429, Address: 0x16c378, Func Offset: 0x8
	// Line 1436, Address: 0x16c394, Func Offset: 0x24
	// Line 1437, Address: 0x16c3a8, Func Offset: 0x38
	// Func End, Address: 0x16c3b8, Func Offset: 0x48
}

// 
// Start address: 0x16c3c0
float enSCUGetAttackProbability()
{
	float attack_rate[5];
	// Line 1441, Address: 0x16c3c0, Func Offset: 0
	// Line 1442, Address: 0x16c3c8, Func Offset: 0x8
	// Line 1449, Address: 0x16c3e4, Func Offset: 0x24
	// Line 1450, Address: 0x16c3f8, Func Offset: 0x38
	// Func End, Address: 0x16c408, Func Offset: 0x48
}

// 
// Start address: 0x16c410
float enSCUGetRepertAttackProbability()
{
	float attack_rate[5];
	// Line 1454, Address: 0x16c410, Func Offset: 0
	// Line 1455, Address: 0x16c418, Func Offset: 0x8
	// Line 1462, Address: 0x16c434, Func Offset: 0x24
	// Line 1463, Address: 0x16c448, Func Offset: 0x38
	// Func End, Address: 0x16c458, Func Offset: 0x48
}

// 
// Start address: 0x16c460
float enSCUGetAttackSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1467, Address: 0x16c460, Func Offset: 0
	// Line 1468, Address: 0x16c470, Func Offset: 0x10
	// Line 1475, Address: 0x16c48c, Func Offset: 0x2c
	// Line 1476, Address: 0x16c4a0, Func Offset: 0x40
	// Line 1477, Address: 0x16c4c8, Func Offset: 0x68
	// Line 1479, Address: 0x16c4e8, Func Offset: 0x88
	// Func End, Address: 0x16c4fc, Func Offset: 0x9c
}

// 
// Start address: 0x16c500
float enSCUGetRotSpeed()
{
	float rot_rate[5];
	// Line 1483, Address: 0x16c500, Func Offset: 0
	// Line 1484, Address: 0x16c508, Func Offset: 0x8
	// Line 1491, Address: 0x16c524, Func Offset: 0x24
	// Line 1492, Address: 0x16c548, Func Offset: 0x48
	// Func End, Address: 0x16c558, Func Offset: 0x58
}

// 
// Start address: 0x16c560
void enSCUSetDownTime(EnLOCAL_DATA* dp)
{
	short down_time[5];
	// Line 1496, Address: 0x16c560, Func Offset: 0
	// Line 1497, Address: 0x16c56c, Func Offset: 0xc
	// Line 1504, Address: 0x16c588, Func Offset: 0x28
	// Line 1505, Address: 0x16c5b0, Func Offset: 0x50
	// Func End, Address: 0x16c5c0, Func Offset: 0x60
}

// 
// Start address: 0x16c5c0
float enSCUGetCrawlProbability()
{
	float crawl_rate[5];
	// Line 1509, Address: 0x16c5c0, Func Offset: 0
	// Line 1510, Address: 0x16c5c8, Func Offset: 0x8
	// Line 1517, Address: 0x16c5e4, Func Offset: 0x24
	// Line 1518, Address: 0x16c5f8, Func Offset: 0x38
	// Func End, Address: 0x16c608, Func Offset: 0x48
}

// 
// Start address: 0x16c610
void enSCUSetMoveCount(EnLOCAL_DATA* dp)
{
	int n;
	// Line 1522, Address: 0x16c610, Func Offset: 0
	// Line 1524, Address: 0x16c624, Func Offset: 0x14
	// Line 1525, Address: 0x16c684, Func Offset: 0x74
	// Line 1526, Address: 0x16c694, Func Offset: 0x84
	// Func End, Address: 0x16c6ac, Func Offset: 0x9c
}

// 
// Start address: 0x16c6b0
void enSCUSoundLife(EnLOCAL_DATA* dp)
{
	// Line 1530, Address: 0x16c6b0, Func Offset: 0
	// Line 1531, Address: 0x16c6c0, Func Offset: 0x10
	// Line 1532, Address: 0x16c6d0, Func Offset: 0x20
	// Line 1533, Address: 0x16c6dc, Func Offset: 0x2c
	// Line 1534, Address: 0x16c72c, Func Offset: 0x7c
	// Line 1535, Address: 0x16c76c, Func Offset: 0xbc
	// Line 1537, Address: 0x16c770, Func Offset: 0xc0
	// Func End, Address: 0x16c784, Func Offset: 0xd4
}

// 
// Start address: 0x16c790
void enSCUSoundCrawlInit(EnLOCAL_DATA* dp)
{
	// Line 1541, Address: 0x16c790, Func Offset: 0
	// Line 1542, Address: 0x16c798, Func Offset: 0x8
	// Line 1543, Address: 0x16c7a0, Func Offset: 0x10
	// Func End, Address: 0x16c7ac, Func Offset: 0x1c
}

// 
// Start address: 0x16c7b0
void enSCUSoundCrawl(EnLOCAL_DATA* dp)
{
	// Line 1547, Address: 0x16c7b0, Func Offset: 0
	// Line 1548, Address: 0x16c7c0, Func Offset: 0x10
	// Line 1549, Address: 0x16c7dc, Func Offset: 0x2c
	// Line 1550, Address: 0x16c7e4, Func Offset: 0x34
	// Line 1552, Address: 0x16c820, Func Offset: 0x70
	// Func End, Address: 0x16c834, Func Offset: 0x84
}

