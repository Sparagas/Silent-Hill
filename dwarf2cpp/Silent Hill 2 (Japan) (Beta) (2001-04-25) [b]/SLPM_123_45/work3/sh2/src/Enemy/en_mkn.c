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
typedef struct EnANIME_RANGE;
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

typedef void(*type_12)(SubCharacter*);
typedef void(*type_16)(SubCharacter*);
typedef void(*type_19)(EnLOCAL_DATA*);
typedef void(*type_27)(EnLOCAL_DATA*);

typedef float type_0[5];
typedef unsigned char type_1[10];
typedef float type_2[5];
typedef float type_3[5];
typedef unsigned char type_4[13];
typedef EnANIME_DATA type_5[28];
typedef float type_6[5];
typedef unsigned char type_7[34];
typedef float type_8[4];
typedef float type_9[4][4];
typedef float type_10[5];
typedef unsigned char type_11[10];
typedef EnLOCAL_DATA type_13[64];
typedef shAttackInfo type_14[46];
typedef EnCOMMUNICATION type_15[8];
typedef char type_17[3];
typedef float type_18[5];
typedef void(*type_20)(EnLOCAL_DATA*)[6];
typedef unsigned char type_21[4];
typedef float type_22[4];
typedef float type_23[5];
typedef short type_24[5];
typedef float type_25[4];
typedef EnANIME_RANGE type_26[2];
typedef void(*type_28)(EnLOCAL_DATA*)[9];
typedef float type_29[5];
typedef char type_30[2];
typedef float type_31[5];

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

struct EnANIME_RANGE
{
	unsigned short Anime;
	short Start;
	short End;
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
EnANIME_DATA EnMKNAnime[28];
EnLOCAL_WORK enLocalWork;

void enMKNInitData(EnLOCAL_DATA* dp);
void enMKNCtrlMain(EnLOCAL_DATA* dp);
void enMKNCtrlAutomatic(EnLOCAL_DATA* dp);
void enMKNCtrlSleep(EnLOCAL_DATA* dp);
void enMKNCtrlGoPlayable(EnLOCAL_DATA* dp);
void enMKNCtrlEvent(EnLOCAL_DATA* dp);
void enMKNCtrlHand(EnLOCAL_DATA* dp);
void enMKNCtrlMannequin(EnLOCAL_DATA* dp);
void enMKNCtrlWander(EnLOCAL_DATA* dp);
void enMKNCtrlPrecaution(EnLOCAL_DATA* dp);
void enMKNCtrlChase(EnLOCAL_DATA* dp);
void enMKNCtrlAround(EnLOCAL_DATA* dp);
void enMKNCtrlAttack(EnLOCAL_DATA* dp);
void enMKNCtrlDamage(EnLOCAL_DATA* dp);
void enMKNCtrlDown(EnLOCAL_DATA* dp);
int enMKNCanSeePlayer(EnLOCAL_DATA* dp, float angle);
int enMKNCanSeePlayer2(EnLOCAL_DATA* dp);
void enMKNAnimeSet(EnLOCAL_DATA* dp, int anim);
void enMKNAnimeReset(EnLOCAL_DATA* dp, int anim);
void enMKNAnimeExec(EnLOCAL_DATA* dp);
void enMKNAutoRecovery(EnLOCAL_DATA* dp);
float enMKNGetWalkSpeed(EnLOCAL_DATA* dp);
float enMKNGetFeelRange();
float enMKNGetAttackProbability();
float enMKNGetRepertAttackProbability();
float enMKNGetAttackSpeed(EnLOCAL_DATA* dp);
float enMKNGetRotSpeed();
void enMKNSetDownTime(EnLOCAL_DATA* dp);
void enMKNSetMoveCount(EnLOCAL_DATA* dp);
void enMKNSoundLife(EnLOCAL_DATA* dp);

// 
// Start address: 0x15c020
void enMKNInitData(EnLOCAL_DATA* dp)
{
	float rate;
	int mode;
	float endurance[5];
	float vitarity[5];
	// Line 150, Address: 0x15c020, Func Offset: 0
	// Line 151, Address: 0x15c038, Func Offset: 0x18
	// Line 158, Address: 0x15c054, Func Offset: 0x34
	// Line 165, Address: 0x15c070, Func Offset: 0x50
	// Line 168, Address: 0x15c07c, Func Offset: 0x5c
	// Line 169, Address: 0x15c084, Func Offset: 0x64
	// Line 171, Address: 0x15c08c, Func Offset: 0x6c
	// Line 172, Address: 0x15c09c, Func Offset: 0x7c
	// Line 174, Address: 0x15c0b0, Func Offset: 0x90
	// Line 176, Address: 0x15c0c8, Func Offset: 0xa8
	// Line 177, Address: 0x15c0cc, Func Offset: 0xac
	// Line 179, Address: 0x15c0d4, Func Offset: 0xb4
	// Line 183, Address: 0x15c0dc, Func Offset: 0xbc
	// Line 184, Address: 0x15c110, Func Offset: 0xf0
	// Line 185, Address: 0x15c118, Func Offset: 0xf8
	// Line 186, Address: 0x15c128, Func Offset: 0x108
	// Line 188, Address: 0x15c168, Func Offset: 0x148
	// Line 189, Address: 0x15c174, Func Offset: 0x154
	// Line 191, Address: 0x15c17c, Func Offset: 0x15c
	// Line 192, Address: 0x15c184, Func Offset: 0x164
	// Line 194, Address: 0x15c18c, Func Offset: 0x16c
	// Line 196, Address: 0x15c194, Func Offset: 0x174
	// Line 197, Address: 0x15c1a0, Func Offset: 0x180
	// Line 198, Address: 0x15c1ac, Func Offset: 0x18c
	// Line 199, Address: 0x15c1bc, Func Offset: 0x19c
	// Line 200, Address: 0x15c1e8, Func Offset: 0x1c8
	// Line 202, Address: 0x15c1f0, Func Offset: 0x1d0
	// Line 204, Address: 0x15c1f8, Func Offset: 0x1d8
	// Line 205, Address: 0x15c224, Func Offset: 0x204
	// Line 206, Address: 0x15c244, Func Offset: 0x224
	// Func End, Address: 0x15c260, Func Offset: 0x240
}

// 
// Start address: 0x15c260
void enMKNCtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlMKNFunc)(EnLOCAL_DATA*)[6];
	// Line 212, Address: 0x15c260, Func Offset: 0
	// Line 213, Address: 0x15c26c, Func Offset: 0xc
	// Line 222, Address: 0x15c288, Func Offset: 0x28
	// Line 223, Address: 0x15c2b0, Func Offset: 0x50
	// Func End, Address: 0x15c2c0, Func Offset: 0x60
}

// 
// Start address: 0x15c2c0
void enMKNCtrlAutomatic(EnLOCAL_DATA* dp)
{
	void(*enCtrlMKNSubFunc)(EnLOCAL_DATA*)[9];
	// Line 227, Address: 0x15c2c0, Func Offset: 0
	// Line 228, Address: 0x15c2cc, Func Offset: 0xc
	// Line 240, Address: 0x15c2f0, Func Offset: 0x30
	// Line 242, Address: 0x15c300, Func Offset: 0x40
	// Line 245, Address: 0x15c328, Func Offset: 0x68
	// Line 247, Address: 0x15c334, Func Offset: 0x74
	// Line 248, Address: 0x15c340, Func Offset: 0x80
	// Func End, Address: 0x15c350, Func Offset: 0x90
}

// 
// Start address: 0x15c350
void enMKNCtrlSleep(EnLOCAL_DATA* dp)
{
	// Line 252, Address: 0x15c350, Func Offset: 0
	// Line 253, Address: 0x15c35c, Func Offset: 0xc
	// Line 254, Address: 0x15c370, Func Offset: 0x20
	// Line 255, Address: 0x15c37c, Func Offset: 0x2c
	// Line 256, Address: 0x15c38c, Func Offset: 0x3c
	// Line 258, Address: 0x15c398, Func Offset: 0x48
	// Func End, Address: 0x15c3a8, Func Offset: 0x58
}

// 
// Start address: 0x15c3b0
void enMKNCtrlGoPlayable(EnLOCAL_DATA* dp)
{
	// Line 262, Address: 0x15c3b0, Func Offset: 0
	// Line 263, Address: 0x15c3b8, Func Offset: 0x8
	// Line 264, Address: 0x15c3c4, Func Offset: 0x14
	// Line 265, Address: 0x15c3d8, Func Offset: 0x28
	// Func End, Address: 0x15c3e4, Func Offset: 0x34
}

// 
// Start address: 0x15c3f0
void enMKNCtrlEvent(EnLOCAL_DATA* dp)
{
	void* tmp;
	// Line 269, Address: 0x15c3f0, Func Offset: 0
	// Line 270, Address: 0x15c3fc, Func Offset: 0xc
	// Line 271, Address: 0x15c400, Func Offset: 0x10
	// Func End, Address: 0x15c410, Func Offset: 0x20
}

// 
// Start address: 0x15c410
void enMKNCtrlHand(EnLOCAL_DATA* dp)
{
	int move;
	// Line 275, Address: 0x15c410, Func Offset: 0
	// Line 277, Address: 0x15c424, Func Offset: 0x14
	// Line 278, Address: 0x15c434, Func Offset: 0x24
	// Line 279, Address: 0x15c448, Func Offset: 0x38
	// Line 281, Address: 0x15c47c, Func Offset: 0x6c
	// Line 282, Address: 0x15c490, Func Offset: 0x80
	// Line 284, Address: 0x15c4c4, Func Offset: 0xb4
	// Line 285, Address: 0x15c4d8, Func Offset: 0xc8
	// Line 286, Address: 0x15c4e0, Func Offset: 0xd0
	// Line 287, Address: 0x15c4f0, Func Offset: 0xe0
	// Line 290, Address: 0x15c4fc, Func Offset: 0xec
	// Line 291, Address: 0x15c510, Func Offset: 0x100
	// Line 292, Address: 0x15c518, Func Offset: 0x108
	// Line 293, Address: 0x15c528, Func Offset: 0x118
	// Line 296, Address: 0x15c534, Func Offset: 0x124
	// Line 297, Address: 0x15c550, Func Offset: 0x140
	// Line 298, Address: 0x15c560, Func Offset: 0x150
	// Line 299, Address: 0x15c564, Func Offset: 0x154
	// Line 301, Address: 0x15c570, Func Offset: 0x160
	// Line 302, Address: 0x15c58c, Func Offset: 0x17c
	// Line 303, Address: 0x15c59c, Func Offset: 0x18c
	// Line 304, Address: 0x15c5a0, Func Offset: 0x190
	// Line 306, Address: 0x15c5ac, Func Offset: 0x19c
	// Line 307, Address: 0x15c5c0, Func Offset: 0x1b0
	// Line 308, Address: 0x15c5c8, Func Offset: 0x1b8
	// Line 309, Address: 0x15c5d8, Func Offset: 0x1c8
	// Line 310, Address: 0x15c5ec, Func Offset: 0x1dc
	// Line 313, Address: 0x15c5fc, Func Offset: 0x1ec
	// Line 314, Address: 0x15c610, Func Offset: 0x200
	// Line 315, Address: 0x15c618, Func Offset: 0x208
	// Line 316, Address: 0x15c628, Func Offset: 0x218
	// Line 317, Address: 0x15c62c, Func Offset: 0x21c
	// Line 318, Address: 0x15c640, Func Offset: 0x230
	// Line 319, Address: 0x15c650, Func Offset: 0x240
	// Line 322, Address: 0x15c654, Func Offset: 0x244
	// Line 323, Address: 0x15c668, Func Offset: 0x258
	// Line 324, Address: 0x15c670, Func Offset: 0x260
	// Line 325, Address: 0x15c680, Func Offset: 0x270
	// Line 326, Address: 0x15c684, Func Offset: 0x274
	// Line 327, Address: 0x15c698, Func Offset: 0x288
	// Line 328, Address: 0x15c6a8, Func Offset: 0x298
	// Line 331, Address: 0x15c6ac, Func Offset: 0x29c
	// Line 332, Address: 0x15c6c0, Func Offset: 0x2b0
	// Line 333, Address: 0x15c6c8, Func Offset: 0x2b8
	// Line 334, Address: 0x15c6d8, Func Offset: 0x2c8
	// Line 335, Address: 0x15c6dc, Func Offset: 0x2cc
	// Line 336, Address: 0x15c6f0, Func Offset: 0x2e0
	// Line 337, Address: 0x15c700, Func Offset: 0x2f0
	// Line 340, Address: 0x15c704, Func Offset: 0x2f4
	// Line 341, Address: 0x15c718, Func Offset: 0x308
	// Line 342, Address: 0x15c730, Func Offset: 0x320
	// Line 343, Address: 0x15c73c, Func Offset: 0x32c
	// Line 344, Address: 0x15c744, Func Offset: 0x334
	// Line 347, Address: 0x15c750, Func Offset: 0x340
	// Line 348, Address: 0x15c764, Func Offset: 0x354
	// Line 349, Address: 0x15c770, Func Offset: 0x360
	// Line 351, Address: 0x15c77c, Func Offset: 0x36c
	// Line 352, Address: 0x15c788, Func Offset: 0x378
	// Line 353, Address: 0x15c7bc, Func Offset: 0x3ac
	// Line 355, Address: 0x15c800, Func Offset: 0x3f0
	// Line 356, Address: 0x15c818, Func Offset: 0x408
	// Line 357, Address: 0x15c834, Func Offset: 0x424
	// Line 358, Address: 0x15c868, Func Offset: 0x458
	// Line 359, Address: 0x15c870, Func Offset: 0x460
	// Line 362, Address: 0x15c89c, Func Offset: 0x48c
	// Line 363, Address: 0x15c8bc, Func Offset: 0x4ac
	// Line 364, Address: 0x15c8cc, Func Offset: 0x4bc
	// Line 366, Address: 0x15c8d0, Func Offset: 0x4c0
	// Line 367, Address: 0x15c8dc, Func Offset: 0x4cc
	// Line 368, Address: 0x15c8e8, Func Offset: 0x4d8
	// Line 369, Address: 0x15c8f0, Func Offset: 0x4e0
	// Line 371, Address: 0x15c8fc, Func Offset: 0x4ec
	// Line 372, Address: 0x15c910, Func Offset: 0x500
	// Line 374, Address: 0x15c934, Func Offset: 0x524
	// Line 377, Address: 0x15c940, Func Offset: 0x530
	// Line 378, Address: 0x15c95c, Func Offset: 0x54c
	// Line 380, Address: 0x15c960, Func Offset: 0x550
	// Line 381, Address: 0x15c968, Func Offset: 0x558
	// Line 383, Address: 0x15c984, Func Offset: 0x574
	// Line 385, Address: 0x15c990, Func Offset: 0x580
	// Line 386, Address: 0x15c998, Func Offset: 0x588
	// Line 387, Address: 0x15c9a4, Func Offset: 0x594
	// Line 389, Address: 0x15c9b0, Func Offset: 0x5a0
	// Func End, Address: 0x15c9c8, Func Offset: 0x5b8
}

// 
// Start address: 0x15c9d0
void enMKNCtrlMannequin(EnLOCAL_DATA* dp)
{
	EnANIME_RANGE pose[2];
	int t;
	// Line 393, Address: 0x15c9d0, Func Offset: 0
	// Line 395, Address: 0x15c9e8, Func Offset: 0x18
	// Line 399, Address: 0x15ca04, Func Offset: 0x34
	// Line 400, Address: 0x15ca18, Func Offset: 0x48
	// Line 401, Address: 0x15ca4c, Func Offset: 0x7c
	// Line 402, Address: 0x15ca58, Func Offset: 0x88
	// Line 403, Address: 0x15ca64, Func Offset: 0x94
	// Line 406, Address: 0x15ca6c, Func Offset: 0x9c
	// Line 408, Address: 0x15ca84, Func Offset: 0xb4
	// Line 410, Address: 0x15cac4, Func Offset: 0xf4
	// Line 411, Address: 0x15cae8, Func Offset: 0x118
	// Line 412, Address: 0x15cb0c, Func Offset: 0x13c
	// Line 414, Address: 0x15cb98, Func Offset: 0x1c8
	// Line 416, Address: 0x15cbe0, Func Offset: 0x210
	// Line 417, Address: 0x15cbe8, Func Offset: 0x218
	// Line 418, Address: 0x15cbf4, Func Offset: 0x224
	// Line 420, Address: 0x15cbfc, Func Offset: 0x22c
	// Line 421, Address: 0x15cc10, Func Offset: 0x240
	// Line 422, Address: 0x15cc24, Func Offset: 0x254
	// Line 423, Address: 0x15cc30, Func Offset: 0x260
	// Line 425, Address: 0x15cc3c, Func Offset: 0x26c
	// Line 427, Address: 0x15cc44, Func Offset: 0x274
	// Line 428, Address: 0x15cc58, Func Offset: 0x288
	// Line 430, Address: 0x15cc7c, Func Offset: 0x2ac
	// Line 431, Address: 0x15cc88, Func Offset: 0x2b8
	// Line 432, Address: 0x15cc94, Func Offset: 0x2c4
	// Line 433, Address: 0x15cca8, Func Offset: 0x2d8
	// Line 434, Address: 0x15ccb4, Func Offset: 0x2e4
	// Line 435, Address: 0x15cce8, Func Offset: 0x318
	// Line 437, Address: 0x15ccf4, Func Offset: 0x324
	// Line 439, Address: 0x15ccfc, Func Offset: 0x32c
	// Line 441, Address: 0x15cd3c, Func Offset: 0x36c
	// Line 442, Address: 0x15cd54, Func Offset: 0x384
	// Line 443, Address: 0x15cd64, Func Offset: 0x394
	// Line 444, Address: 0x15cd98, Func Offset: 0x3c8
	// Line 446, Address: 0x15cda4, Func Offset: 0x3d4
	// Line 449, Address: 0x15cdac, Func Offset: 0x3dc
	// Line 450, Address: 0x15cdbc, Func Offset: 0x3ec
	// Line 451, Address: 0x15cdc8, Func Offset: 0x3f8
	// Line 453, Address: 0x15cdec, Func Offset: 0x41c
	// Line 454, Address: 0x15cdf8, Func Offset: 0x428
	// Line 455, Address: 0x15ce04, Func Offset: 0x434
	// Line 456, Address: 0x15ce18, Func Offset: 0x448
	// Line 457, Address: 0x15ce28, Func Offset: 0x458
	// Line 458, Address: 0x15ce30, Func Offset: 0x460
	// Line 460, Address: 0x15ce6c, Func Offset: 0x49c
	// Line 461, Address: 0x15ce7c, Func Offset: 0x4ac
	// Line 463, Address: 0x15ce84, Func Offset: 0x4b4
	// Line 464, Address: 0x15ce98, Func Offset: 0x4c8
	// Line 466, Address: 0x15cea4, Func Offset: 0x4d4
	// Func End, Address: 0x15cec0, Func Offset: 0x4f0
}

// 
// Start address: 0x15cec0
void enMKNCtrlWander(EnLOCAL_DATA* dp)
{
	float vec[4];
	int t;
	float r;
	float d;
	// Line 470, Address: 0x15cec0, Func Offset: 0
	// Line 474, Address: 0x15ced4, Func Offset: 0x14
	// Line 475, Address: 0x15cee8, Func Offset: 0x28
	// Line 476, Address: 0x15cef4, Func Offset: 0x34
	// Line 478, Address: 0x15cefc, Func Offset: 0x3c
	// Line 480, Address: 0x15cf3c, Func Offset: 0x7c
	// Line 481, Address: 0x15cf50, Func Offset: 0x90
	// Line 482, Address: 0x15cf60, Func Offset: 0xa0
	// Line 483, Address: 0x15cf6c, Func Offset: 0xac
	// Line 484, Address: 0x15cf80, Func Offset: 0xc0
	// Line 485, Address: 0x15cf9c, Func Offset: 0xdc
	// Line 486, Address: 0x15cfbc, Func Offset: 0xfc
	// Line 488, Address: 0x15cfc8, Func Offset: 0x108
	// Line 489, Address: 0x15cff8, Func Offset: 0x138
	// Line 491, Address: 0x15d02c, Func Offset: 0x16c
	// Line 492, Address: 0x15d03c, Func Offset: 0x17c
	// Line 493, Address: 0x15d044, Func Offset: 0x184
	// Line 494, Address: 0x15d054, Func Offset: 0x194
	// Line 495, Address: 0x15d05c, Func Offset: 0x19c
	// Line 496, Address: 0x15d064, Func Offset: 0x1a4
	// Line 498, Address: 0x15d0d0, Func Offset: 0x210
	// Line 499, Address: 0x15d118, Func Offset: 0x258
	// Line 500, Address: 0x15d130, Func Offset: 0x270
	// Line 501, Address: 0x15d150, Func Offset: 0x290
	// Line 504, Address: 0x15d1b0, Func Offset: 0x2f0
	// Line 506, Address: 0x15d20c, Func Offset: 0x34c
	// Line 507, Address: 0x15d224, Func Offset: 0x364
	// Line 509, Address: 0x15d244, Func Offset: 0x384
	// Line 510, Address: 0x15d26c, Func Offset: 0x3ac
	// Line 511, Address: 0x15d27c, Func Offset: 0x3bc
	// Line 514, Address: 0x15d284, Func Offset: 0x3c4
	// Line 516, Address: 0x15d28c, Func Offset: 0x3cc
	// Line 518, Address: 0x15d2d8, Func Offset: 0x418
	// Line 519, Address: 0x15d308, Func Offset: 0x448
	// Line 520, Address: 0x15d328, Func Offset: 0x468
	// Line 521, Address: 0x15d330, Func Offset: 0x470
	// Line 522, Address: 0x15d338, Func Offset: 0x478
	// Line 523, Address: 0x15d354, Func Offset: 0x494
	// Line 524, Address: 0x15d35c, Func Offset: 0x49c
	// Line 525, Address: 0x15d370, Func Offset: 0x4b0
	// Line 526, Address: 0x15d378, Func Offset: 0x4b8
	// Line 527, Address: 0x15d3a8, Func Offset: 0x4e8
	// Line 528, Address: 0x15d3b8, Func Offset: 0x4f8
	// Line 530, Address: 0x15d3c0, Func Offset: 0x500
	// Line 532, Address: 0x15d3c8, Func Offset: 0x508
	// Line 533, Address: 0x15d3d8, Func Offset: 0x518
	// Line 534, Address: 0x15d3e8, Func Offset: 0x528
	// Line 535, Address: 0x15d3f4, Func Offset: 0x534
	// Line 540, Address: 0x15d3fc, Func Offset: 0x53c
	// Line 542, Address: 0x15d41c, Func Offset: 0x55c
	// Line 543, Address: 0x15d438, Func Offset: 0x578
	// Line 545, Address: 0x15d458, Func Offset: 0x598
	// Line 546, Address: 0x15d470, Func Offset: 0x5b0
	// Line 547, Address: 0x15d47c, Func Offset: 0x5bc
	// Line 549, Address: 0x15d488, Func Offset: 0x5c8
	// Line 550, Address: 0x15d49c, Func Offset: 0x5dc
	// Line 551, Address: 0x15d4b4, Func Offset: 0x5f4
	// Line 552, Address: 0x15d4c0, Func Offset: 0x600
	// Line 553, Address: 0x15d4d4, Func Offset: 0x614
	// Line 554, Address: 0x15d4e0, Func Offset: 0x620
	// Line 556, Address: 0x15d510, Func Offset: 0x650
	// Line 557, Address: 0x15d51c, Func Offset: 0x65c
	// Line 558, Address: 0x15d520, Func Offset: 0x660
	// Line 559, Address: 0x15d534, Func Offset: 0x674
	// Line 561, Address: 0x15d540, Func Offset: 0x680
	// Line 562, Address: 0x15d54c, Func Offset: 0x68c
	// Func End, Address: 0x15d564, Func Offset: 0x6a4
}

// 
// Start address: 0x15d570
void enMKNCtrlPrecaution(EnLOCAL_DATA* dp)
{
	int t;
	// Line 566, Address: 0x15d570, Func Offset: 0
	// Line 568, Address: 0x15d580, Func Offset: 0x10
	// Line 569, Address: 0x15d594, Func Offset: 0x24
	// Line 570, Address: 0x15d5a8, Func Offset: 0x38
	// Line 572, Address: 0x15d5b0, Func Offset: 0x40
	// Line 573, Address: 0x15d5c8, Func Offset: 0x58
	// Line 574, Address: 0x15d5d8, Func Offset: 0x68
	// Line 576, Address: 0x15d5e8, Func Offset: 0x78
	// Line 578, Address: 0x15d5fc, Func Offset: 0x8c
	// Line 579, Address: 0x15d618, Func Offset: 0xa8
	// Line 581, Address: 0x15d624, Func Offset: 0xb4
	// Line 582, Address: 0x15d638, Func Offset: 0xc8
	// Line 584, Address: 0x15d670, Func Offset: 0x100
	// Line 585, Address: 0x15d684, Func Offset: 0x114
	// Line 587, Address: 0x15d6ac, Func Offset: 0x13c
	// Line 588, Address: 0x15d6c0, Func Offset: 0x150
	// Line 589, Address: 0x15d6c8, Func Offset: 0x158
	// Line 593, Address: 0x15d6d8, Func Offset: 0x168
	// Line 594, Address: 0x15d6f0, Func Offset: 0x180
	// Line 595, Address: 0x15d6fc, Func Offset: 0x18c
	// Line 596, Address: 0x15d708, Func Offset: 0x198
	// Func End, Address: 0x15d71c, Func Offset: 0x1ac
}

// 
// Start address: 0x15d720
void enMKNCtrlChase(EnLOCAL_DATA* dp)
{
	int t;
	// Line 600, Address: 0x15d720, Func Offset: 0
	// Line 602, Address: 0x15d734, Func Offset: 0x14
	// Line 603, Address: 0x15d748, Func Offset: 0x28
	// Line 604, Address: 0x15d754, Func Offset: 0x34
	// Line 606, Address: 0x15d75c, Func Offset: 0x3c
	// Line 607, Address: 0x15d770, Func Offset: 0x50
	// Line 608, Address: 0x15d780, Func Offset: 0x60
	// Line 611, Address: 0x15d78c, Func Offset: 0x6c
	// Line 613, Address: 0x15d7b0, Func Offset: 0x90
	// Line 614, Address: 0x15d7c8, Func Offset: 0xa8
	// Line 616, Address: 0x15d7d4, Func Offset: 0xb4
	// Line 618, Address: 0x15d830, Func Offset: 0x110
	// Line 620, Address: 0x15d83c, Func Offset: 0x11c
	// Line 621, Address: 0x15d850, Func Offset: 0x130
	// Line 622, Address: 0x15d868, Func Offset: 0x148
	// Line 623, Address: 0x15d874, Func Offset: 0x154
	// Line 625, Address: 0x15d8a0, Func Offset: 0x180
	// Line 626, Address: 0x15d8c8, Func Offset: 0x1a8
	// Line 627, Address: 0x15d8d4, Func Offset: 0x1b4
	// Line 628, Address: 0x15d8dc, Func Offset: 0x1bc
	// Line 630, Address: 0x15d8e8, Func Offset: 0x1c8
	// Line 632, Address: 0x15d91c, Func Offset: 0x1fc
	// Line 634, Address: 0x15d928, Func Offset: 0x208
	// Line 635, Address: 0x15d934, Func Offset: 0x214
	// Func End, Address: 0x15d94c, Func Offset: 0x22c
}

// 
// Start address: 0x15d950
void enMKNCtrlAround(EnLOCAL_DATA* dp)
{
	float vec[4];
	int t;
	float a;
	// Line 639, Address: 0x15d950, Func Offset: 0
	// Line 643, Address: 0x15d964, Func Offset: 0x14
	// Line 644, Address: 0x15d978, Func Offset: 0x28
	// Line 645, Address: 0x15d984, Func Offset: 0x34
	// Line 647, Address: 0x15d98c, Func Offset: 0x3c
	// Line 648, Address: 0x15d9a0, Func Offset: 0x50
	// Line 649, Address: 0x15d9b0, Func Offset: 0x60
	// Line 650, Address: 0x15d9bc, Func Offset: 0x6c
	// Line 653, Address: 0x15d9c8, Func Offset: 0x78
	// Line 654, Address: 0x15d9d8, Func Offset: 0x88
	// Line 655, Address: 0x15da08, Func Offset: 0xb8
	// Line 656, Address: 0x15da1c, Func Offset: 0xcc
	// Line 657, Address: 0x15da24, Func Offset: 0xd4
	// Line 660, Address: 0x15da38, Func Offset: 0xe8
	// Line 661, Address: 0x15da50, Func Offset: 0x100
	// Line 662, Address: 0x15da74, Func Offset: 0x124
	// Line 663, Address: 0x15da8c, Func Offset: 0x13c
	// Line 664, Address: 0x15dab0, Func Offset: 0x160
	// Line 665, Address: 0x15dabc, Func Offset: 0x16c
	// Line 667, Address: 0x15dac0, Func Offset: 0x170
	// Line 668, Address: 0x15dad8, Func Offset: 0x188
	// Line 669, Address: 0x15dae4, Func Offset: 0x194
	// Line 671, Address: 0x15daf0, Func Offset: 0x1a0
	// Line 672, Address: 0x15db04, Func Offset: 0x1b4
	// Line 673, Address: 0x15db1c, Func Offset: 0x1cc
	// Line 674, Address: 0x15db28, Func Offset: 0x1d8
	// Line 675, Address: 0x15db4c, Func Offset: 0x1fc
	// Line 676, Address: 0x15db58, Func Offset: 0x208
	// Line 677, Address: 0x15db84, Func Offset: 0x234
	// Line 679, Address: 0x15db90, Func Offset: 0x240
	// Line 680, Address: 0x15db9c, Func Offset: 0x24c
	// Func End, Address: 0x15dbb4, Func Offset: 0x264
}

// 
// Start address: 0x15dbc0
void enMKNCtrlAttack(EnLOCAL_DATA* dp)
{
	// Line 684, Address: 0x15dbc0, Func Offset: 0
	// Line 685, Address: 0x15dbd4, Func Offset: 0x14
	// Line 686, Address: 0x15dbe8, Func Offset: 0x28
	// Line 687, Address: 0x15dbfc, Func Offset: 0x3c
	// Line 689, Address: 0x15dc04, Func Offset: 0x44
	// Line 691, Address: 0x15dc3c, Func Offset: 0x7c
	// Line 692, Address: 0x15dc60, Func Offset: 0xa0
	// Line 693, Address: 0x15dc7c, Func Offset: 0xbc
	// Line 694, Address: 0x15dc8c, Func Offset: 0xcc
	// Line 695, Address: 0x15dcc4, Func Offset: 0x104
	// Line 696, Address: 0x15dcd4, Func Offset: 0x114
	// Line 697, Address: 0x15dcdc, Func Offset: 0x11c
	// Line 699, Address: 0x15dcec, Func Offset: 0x12c
	// Line 700, Address: 0x15dcf8, Func Offset: 0x138
	// Line 701, Address: 0x15dd00, Func Offset: 0x140
	// Line 702, Address: 0x15dd10, Func Offset: 0x150
	// Line 703, Address: 0x15dd1c, Func Offset: 0x15c
	// Line 705, Address: 0x15dd24, Func Offset: 0x164
	// Line 706, Address: 0x15dd30, Func Offset: 0x170
	// Line 707, Address: 0x15dd40, Func Offset: 0x180
	// Line 710, Address: 0x15dd48, Func Offset: 0x188
	// Line 712, Address: 0x15dd8c, Func Offset: 0x1cc
	// Line 713, Address: 0x15dda0, Func Offset: 0x1e0
	// Line 716, Address: 0x15dde8, Func Offset: 0x228
	// Line 717, Address: 0x15ddf0, Func Offset: 0x230
	// Line 718, Address: 0x15ddf8, Func Offset: 0x238
	// Line 719, Address: 0x15de0c, Func Offset: 0x24c
	// Line 720, Address: 0x15de10, Func Offset: 0x250
	// Line 724, Address: 0x15de18, Func Offset: 0x258
	// Line 725, Address: 0x15de24, Func Offset: 0x264
	// Line 726, Address: 0x15de38, Func Offset: 0x278
	// Line 727, Address: 0x15de5c, Func Offset: 0x29c
	// Line 728, Address: 0x15de64, Func Offset: 0x2a4
	// Line 729, Address: 0x15de6c, Func Offset: 0x2ac
	// Line 735, Address: 0x15de80, Func Offset: 0x2c0
	// Line 736, Address: 0x15de98, Func Offset: 0x2d8
	// Line 737, Address: 0x15dea4, Func Offset: 0x2e4
	// Func End, Address: 0x15debc, Func Offset: 0x2fc
}

// 
// Start address: 0x15dec0
void enMKNCtrlDamage(EnLOCAL_DATA* dp)
{
	float d;
	// Line 741, Address: 0x15dec0, Func Offset: 0
	// Line 743, Address: 0x15decc, Func Offset: 0xc
	// Line 745, Address: 0x15df04, Func Offset: 0x44
	// Line 747, Address: 0x15df2c, Func Offset: 0x6c
	// Line 748, Address: 0x15df3c, Func Offset: 0x7c
	// Line 750, Address: 0x15dfb4, Func Offset: 0xf4
	// Line 751, Address: 0x15dfd0, Func Offset: 0x110
	// Line 752, Address: 0x15dfd8, Func Offset: 0x118
	// Line 754, Address: 0x15dff4, Func Offset: 0x134
	// Line 755, Address: 0x15e02c, Func Offset: 0x16c
	// Line 756, Address: 0x15e054, Func Offset: 0x194
	// Line 758, Address: 0x15e080, Func Offset: 0x1c0
	// Line 759, Address: 0x15e08c, Func Offset: 0x1cc
	// Line 760, Address: 0x15e094, Func Offset: 0x1d4
	// Line 762, Address: 0x15e0a0, Func Offset: 0x1e0
	// Line 763, Address: 0x15e0ac, Func Offset: 0x1ec
	// Line 765, Address: 0x15e0b4, Func Offset: 0x1f4
	// Line 766, Address: 0x15e0e8, Func Offset: 0x228
	// Line 767, Address: 0x15e0fc, Func Offset: 0x23c
	// Line 768, Address: 0x15e118, Func Offset: 0x258
	// Line 770, Address: 0x15e120, Func Offset: 0x260
	// Line 772, Address: 0x15e128, Func Offset: 0x268
	// Line 773, Address: 0x15e13c, Func Offset: 0x27c
	// Line 775, Address: 0x15e148, Func Offset: 0x288
	// Line 776, Address: 0x15e15c, Func Offset: 0x29c
	// Line 777, Address: 0x15e170, Func Offset: 0x2b0
	// Line 781, Address: 0x15e17c, Func Offset: 0x2bc
	// Func End, Address: 0x15e18c, Func Offset: 0x2cc
}

// 
// Start address: 0x15e190
void enMKNCtrlDown(EnLOCAL_DATA* dp)
{
	// Line 785, Address: 0x15e190, Func Offset: 0
	// Line 786, Address: 0x15e19c, Func Offset: 0xc
	// Line 788, Address: 0x15e1d4, Func Offset: 0x44
	// Line 789, Address: 0x15e1e4, Func Offset: 0x54
	// Line 790, Address: 0x15e1f0, Func Offset: 0x60
	// Line 791, Address: 0x15e21c, Func Offset: 0x8c
	// Line 792, Address: 0x15e240, Func Offset: 0xb0
	// Line 793, Address: 0x15e24c, Func Offset: 0xbc
	// Line 794, Address: 0x15e27c, Func Offset: 0xec
	// Line 795, Address: 0x15e290, Func Offset: 0x100
	// Line 796, Address: 0x15e298, Func Offset: 0x108
	// Line 797, Address: 0x15e2a8, Func Offset: 0x118
	// Line 799, Address: 0x15e2b4, Func Offset: 0x124
	// Line 801, Address: 0x15e2bc, Func Offset: 0x12c
	// Line 802, Address: 0x15e2c8, Func Offset: 0x138
	// Line 805, Address: 0x15e2f8, Func Offset: 0x168
	// Line 807, Address: 0x15e308, Func Offset: 0x178
	// Line 809, Address: 0x15e318, Func Offset: 0x188
	// Line 810, Address: 0x15e32c, Func Offset: 0x19c
	// Line 811, Address: 0x15e34c, Func Offset: 0x1bc
	// Line 812, Address: 0x15e358, Func Offset: 0x1c8
	// Line 813, Address: 0x15e364, Func Offset: 0x1d4
	// Line 814, Address: 0x15e378, Func Offset: 0x1e8
	// Line 815, Address: 0x15e38c, Func Offset: 0x1fc
	// Line 817, Address: 0x15e394, Func Offset: 0x204
	// Line 818, Address: 0x15e3a0, Func Offset: 0x210
	// Line 819, Address: 0x15e3b0, Func Offset: 0x220
	// Line 820, Address: 0x15e3e0, Func Offset: 0x250
	// Line 821, Address: 0x15e3fc, Func Offset: 0x26c
	// Line 822, Address: 0x15e40c, Func Offset: 0x27c
	// Line 825, Address: 0x15e414, Func Offset: 0x284
	// Line 826, Address: 0x15e434, Func Offset: 0x2a4
	// Line 827, Address: 0x15e448, Func Offset: 0x2b8
	// Line 828, Address: 0x15e454, Func Offset: 0x2c4
	// Line 829, Address: 0x15e460, Func Offset: 0x2d0
	// Line 830, Address: 0x15e494, Func Offset: 0x304
	// Line 831, Address: 0x15e4a0, Func Offset: 0x310
	// Line 832, Address: 0x15e4c0, Func Offset: 0x330
	// Line 833, Address: 0x15e4f8, Func Offset: 0x368
	// Line 835, Address: 0x15e52c, Func Offset: 0x39c
	// Line 836, Address: 0x15e54c, Func Offset: 0x3bc
	// Line 838, Address: 0x15e560, Func Offset: 0x3d0
	// Line 839, Address: 0x15e568, Func Offset: 0x3d8
	// Line 841, Address: 0x15e5ac, Func Offset: 0x41c
	// Line 842, Address: 0x15e5cc, Func Offset: 0x43c
	// Line 843, Address: 0x15e5d4, Func Offset: 0x444
	// Line 847, Address: 0x15e5e8, Func Offset: 0x458
	// Line 849, Address: 0x15e5f0, Func Offset: 0x460
	// Line 850, Address: 0x15e604, Func Offset: 0x474
	// Line 851, Address: 0x15e610, Func Offset: 0x480
	// Line 853, Address: 0x15e61c, Func Offset: 0x48c
	// Line 854, Address: 0x15e63c, Func Offset: 0x4ac
	// Line 855, Address: 0x15e650, Func Offset: 0x4c0
	// Line 856, Address: 0x15e658, Func Offset: 0x4c8
	// Line 859, Address: 0x15e66c, Func Offset: 0x4dc
	// Line 861, Address: 0x15e674, Func Offset: 0x4e4
	// Line 862, Address: 0x15e688, Func Offset: 0x4f8
	// Line 863, Address: 0x15e694, Func Offset: 0x504
	// Line 864, Address: 0x15e6a0, Func Offset: 0x510
	// Line 865, Address: 0x15e6b4, Func Offset: 0x524
	// Line 866, Address: 0x15e6c8, Func Offset: 0x538
	// Line 868, Address: 0x15e6d0, Func Offset: 0x540
	// Line 869, Address: 0x15e6e0, Func Offset: 0x550
	// Line 870, Address: 0x15e71c, Func Offset: 0x58c
	// Line 871, Address: 0x15e740, Func Offset: 0x5b0
	// Line 872, Address: 0x15e768, Func Offset: 0x5d8
	// Line 874, Address: 0x15e77c, Func Offset: 0x5ec
	// Line 875, Address: 0x15e784, Func Offset: 0x5f4
	// Line 876, Address: 0x15e7a0, Func Offset: 0x610
	// Line 877, Address: 0x15e7b0, Func Offset: 0x620
	// Line 878, Address: 0x15e7bc, Func Offset: 0x62c
	// Line 881, Address: 0x15e7c4, Func Offset: 0x634
	// Line 882, Address: 0x15e7d8, Func Offset: 0x648
	// Line 883, Address: 0x15e7e4, Func Offset: 0x654
	// Line 885, Address: 0x15e7ec, Func Offset: 0x65c
	// Line 886, Address: 0x15e80c, Func Offset: 0x67c
	// Line 887, Address: 0x15e820, Func Offset: 0x690
	// Line 888, Address: 0x15e82c, Func Offset: 0x69c
	// Line 889, Address: 0x15e838, Func Offset: 0x6a8
	// Line 890, Address: 0x15e86c, Func Offset: 0x6dc
	// Line 893, Address: 0x15e878, Func Offset: 0x6e8
	// Line 895, Address: 0x15e880, Func Offset: 0x6f0
	// Line 896, Address: 0x15e894, Func Offset: 0x704
	// Line 897, Address: 0x15e8a0, Func Offset: 0x710
	// Line 898, Address: 0x15e8ac, Func Offset: 0x71c
	// Line 899, Address: 0x15e8c4, Func Offset: 0x734
	// Line 900, Address: 0x15e8d8, Func Offset: 0x748
	// Line 901, Address: 0x15e8ec, Func Offset: 0x75c
	// Line 903, Address: 0x15e8f4, Func Offset: 0x764
	// Line 904, Address: 0x15e908, Func Offset: 0x778
	// Line 905, Address: 0x15e914, Func Offset: 0x784
	// Line 906, Address: 0x15e934, Func Offset: 0x7a4
	// Line 908, Address: 0x15e948, Func Offset: 0x7b8
	// Line 910, Address: 0x15e950, Func Offset: 0x7c0
	// Line 911, Address: 0x15e968, Func Offset: 0x7d8
	// Line 912, Address: 0x15e974, Func Offset: 0x7e4
	// Line 913, Address: 0x15e980, Func Offset: 0x7f0
	// Line 914, Address: 0x15e994, Func Offset: 0x804
	// Line 915, Address: 0x15e9a8, Func Offset: 0x818
	// Line 917, Address: 0x15e9b0, Func Offset: 0x820
	// Line 918, Address: 0x15e9c4, Func Offset: 0x834
	// Line 919, Address: 0x15e9d0, Func Offset: 0x840
	// Line 920, Address: 0x15e9f0, Func Offset: 0x860
	// Line 921, Address: 0x15ea18, Func Offset: 0x888
	// Line 922, Address: 0x15ea30, Func Offset: 0x8a0
	// Line 923, Address: 0x15ea3c, Func Offset: 0x8ac
	// Line 924, Address: 0x15ea48, Func Offset: 0x8b8
	// Line 925, Address: 0x15ea7c, Func Offset: 0x8ec
	// Line 929, Address: 0x15ea88, Func Offset: 0x8f8
	// Func End, Address: 0x15ea98, Func Offset: 0x908
}

// 
// Start address: 0x15eaa0
int enMKNCanSeePlayer(EnLOCAL_DATA* dp, float angle)
{
	int wcd;
	float a;
	float dist;
	float* ppos;
	// Line 934, Address: 0x15eaa0, Func Offset: 0
	// Line 935, Address: 0x15eab8, Func Offset: 0x18
	// Line 937, Address: 0x15eac8, Func Offset: 0x28
	// Line 938, Address: 0x15ead4, Func Offset: 0x34
	// Line 939, Address: 0x15eaf4, Func Offset: 0x54
	// Line 940, Address: 0x15eb10, Func Offset: 0x70
	// Line 941, Address: 0x15eb30, Func Offset: 0x90
	// Line 943, Address: 0x15eb3c, Func Offset: 0x9c
	// Line 945, Address: 0x15eb48, Func Offset: 0xa8
	// Line 946, Address: 0x15eb54, Func Offset: 0xb4
	// Line 948, Address: 0x15eb88, Func Offset: 0xe8
	// Line 951, Address: 0x15ebb8, Func Offset: 0x118
	// Line 954, Address: 0x15ebe4, Func Offset: 0x144
	// Line 957, Address: 0x15ec10, Func Offset: 0x170
	// Line 960, Address: 0x15ec40, Func Offset: 0x1a0
	// Line 961, Address: 0x15ec5c, Func Offset: 0x1bc
	// Line 962, Address: 0x15ec70, Func Offset: 0x1d0
	// Line 964, Address: 0x15ecc8, Func Offset: 0x228
	// Line 966, Address: 0x15ecd4, Func Offset: 0x234
	// Line 968, Address: 0x15ed00, Func Offset: 0x260
	// Line 969, Address: 0x15ed30, Func Offset: 0x290
	// Line 970, Address: 0x15ed34, Func Offset: 0x294
	// Func End, Address: 0x15ed4c, Func Offset: 0x2ac
}

// 
// Start address: 0x15ed50
int enMKNCanSeePlayer2(EnLOCAL_DATA* dp)
{
	int wcd;
	float a2;
	float a1;
	float a;
	float dist;
	float* ppos;
	// Line 975, Address: 0x15ed50, Func Offset: 0
	// Line 976, Address: 0x15ed70, Func Offset: 0x20
	// Line 978, Address: 0x15ed80, Func Offset: 0x30
	// Line 979, Address: 0x15ed88, Func Offset: 0x38
	// Line 980, Address: 0x15eda4, Func Offset: 0x54
	// Line 981, Address: 0x15edbc, Func Offset: 0x6c
	// Line 983, Address: 0x15edc8, Func Offset: 0x78
	// Line 984, Address: 0x15ee04, Func Offset: 0xb4
	// Line 985, Address: 0x15ee1c, Func Offset: 0xcc
	// Line 986, Address: 0x15ee34, Func Offset: 0xe4
	// Line 987, Address: 0x15ee44, Func Offset: 0xf4
	// Line 988, Address: 0x15ee70, Func Offset: 0x120
	// Line 989, Address: 0x15eeb0, Func Offset: 0x160
	// Line 990, Address: 0x15eed8, Func Offset: 0x188
	// Line 993, Address: 0x15eee4, Func Offset: 0x194
	// Line 994, Address: 0x15ef24, Func Offset: 0x1d4
	// Line 995, Address: 0x15ef4c, Func Offset: 0x1fc
	// Line 998, Address: 0x15ef58, Func Offset: 0x208
	// Line 999, Address: 0x15efa8, Func Offset: 0x258
	// Line 1000, Address: 0x15efb4, Func Offset: 0x264
	// Line 1001, Address: 0x15efb8, Func Offset: 0x268
	// Func End, Address: 0x15efdc, Func Offset: 0x28c
}

// 
// Start address: 0x15efe0
void enMKNAnimeSet(EnLOCAL_DATA* dp, int anim)
{
	// Line 1005, Address: 0x15efe0, Func Offset: 0
	// Line 1006, Address: 0x15eff8, Func Offset: 0x18
	// Line 1007, Address: 0x15f014, Func Offset: 0x34
	// Line 1008, Address: 0x15f020, Func Offset: 0x40
	// Line 1009, Address: 0x15f02c, Func Offset: 0x4c
	// Line 1012, Address: 0x15f034, Func Offset: 0x54
	// Line 1013, Address: 0x15f08c, Func Offset: 0xac
	// Line 1014, Address: 0x15f0ac, Func Offset: 0xcc
	// Line 1015, Address: 0x15f0dc, Func Offset: 0xfc
	// Line 1016, Address: 0x15f0e4, Func Offset: 0x104
	// Line 1017, Address: 0x15f110, Func Offset: 0x130
	// Line 1018, Address: 0x15f120, Func Offset: 0x140
	// Line 1021, Address: 0x15f12c, Func Offset: 0x14c
	// Func End, Address: 0x15f144, Func Offset: 0x164
}

// 
// Start address: 0x15f150
void enMKNAnimeReset(EnLOCAL_DATA* dp, int anim)
{
	// Line 1025, Address: 0x15f150, Func Offset: 0
	// Line 1027, Address: 0x15f168, Func Offset: 0x18
	// Line 1028, Address: 0x15f1c0, Func Offset: 0x70
	// Line 1029, Address: 0x15f1e0, Func Offset: 0x90
	// Line 1030, Address: 0x15f210, Func Offset: 0xc0
	// Line 1031, Address: 0x15f218, Func Offset: 0xc8
	// Line 1032, Address: 0x15f244, Func Offset: 0xf4
	// Line 1033, Address: 0x15f254, Func Offset: 0x104
	// Line 1036, Address: 0x15f260, Func Offset: 0x110
	// Func End, Address: 0x15f278, Func Offset: 0x128
}

// 
// Start address: 0x15f280
void enMKNAnimeExec(EnLOCAL_DATA* dp)
{
	int of;
	// Line 1040, Address: 0x15f280, Func Offset: 0
	// Line 1041, Address: 0x15f290, Func Offset: 0x10
	// Line 1042, Address: 0x15f298, Func Offset: 0x18
	// Line 1043, Address: 0x15f2b0, Func Offset: 0x30
	// Line 1044, Address: 0x15f2e4, Func Offset: 0x64
	// Line 1046, Address: 0x15f31c, Func Offset: 0x9c
	// Line 1047, Address: 0x15f328, Func Offset: 0xa8
	// Line 1049, Address: 0x15f368, Func Offset: 0xe8
	// Line 1050, Address: 0x15f374, Func Offset: 0xf4
	// Line 1052, Address: 0x15f3b4, Func Offset: 0x134
	// Line 1053, Address: 0x15f3c0, Func Offset: 0x140
	// Line 1055, Address: 0x15f3e4, Func Offset: 0x164
	// Line 1057, Address: 0x15f3f0, Func Offset: 0x170
	// Line 1067, Address: 0x15f4b8, Func Offset: 0x238
	// Line 1068, Address: 0x15f4d0, Func Offset: 0x250
	// Line 1069, Address: 0x15f4f0, Func Offset: 0x270
	// Line 1070, Address: 0x15f4f8, Func Offset: 0x278
	// Line 1074, Address: 0x15f518, Func Offset: 0x298
	// Func End, Address: 0x15f52c, Func Offset: 0x2ac
}

// 
// Start address: 0x15f530
void enMKNAutoRecovery(EnLOCAL_DATA* dp)
{
	float recover_rate[5];
	// Line 1078, Address: 0x15f530, Func Offset: 0
	// Line 1079, Address: 0x15f53c, Func Offset: 0xc
	// Line 1086, Address: 0x15f558, Func Offset: 0x28
	// Line 1087, Address: 0x15f578, Func Offset: 0x48
	// Func End, Address: 0x15f588, Func Offset: 0x58
}

// 
// Start address: 0x15f590
float enMKNGetWalkSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1091, Address: 0x15f590, Func Offset: 0
	// Line 1092, Address: 0x15f5a0, Func Offset: 0x10
	// Line 1099, Address: 0x15f5bc, Func Offset: 0x2c
	// Line 1100, Address: 0x15f5d0, Func Offset: 0x40
	// Line 1101, Address: 0x15f5f8, Func Offset: 0x68
	// Line 1103, Address: 0x15f618, Func Offset: 0x88
	// Func End, Address: 0x15f62c, Func Offset: 0x9c
}

// 
// Start address: 0x15f630
float enMKNGetFeelRange()
{
	float feel_range[5];
	// Line 1107, Address: 0x15f630, Func Offset: 0
	// Line 1108, Address: 0x15f638, Func Offset: 0x8
	// Line 1115, Address: 0x15f654, Func Offset: 0x24
	// Line 1116, Address: 0x15f668, Func Offset: 0x38
	// Line 1118, Address: 0x15f678, Func Offset: 0x48
	// Line 1119, Address: 0x15f690, Func Offset: 0x60
	// Func End, Address: 0x15f6a0, Func Offset: 0x70
}

// 
// Start address: 0x15f6a0
float enMKNGetAttackProbability()
{
	float attack_rate[5];
	// Line 1123, Address: 0x15f6a0, Func Offset: 0
	// Line 1124, Address: 0x15f6a8, Func Offset: 0x8
	// Line 1131, Address: 0x15f6c4, Func Offset: 0x24
	// Line 1132, Address: 0x15f6d8, Func Offset: 0x38
	// Func End, Address: 0x15f6e8, Func Offset: 0x48
}

// 
// Start address: 0x15f6f0
float enMKNGetRepertAttackProbability()
{
	float attack_rate[5];
	// Line 1136, Address: 0x15f6f0, Func Offset: 0
	// Line 1137, Address: 0x15f6f8, Func Offset: 0x8
	// Line 1144, Address: 0x15f714, Func Offset: 0x24
	// Line 1145, Address: 0x15f728, Func Offset: 0x38
	// Func End, Address: 0x15f738, Func Offset: 0x48
}

// 
// Start address: 0x15f740
float enMKNGetAttackSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1149, Address: 0x15f740, Func Offset: 0
	// Line 1150, Address: 0x15f750, Func Offset: 0x10
	// Line 1157, Address: 0x15f76c, Func Offset: 0x2c
	// Line 1158, Address: 0x15f780, Func Offset: 0x40
	// Line 1159, Address: 0x15f7a8, Func Offset: 0x68
	// Line 1161, Address: 0x15f7c8, Func Offset: 0x88
	// Func End, Address: 0x15f7dc, Func Offset: 0x9c
}

// 
// Start address: 0x15f7e0
float enMKNGetRotSpeed()
{
	float rot_rate[5];
	// Line 1165, Address: 0x15f7e0, Func Offset: 0
	// Line 1166, Address: 0x15f7e8, Func Offset: 0x8
	// Line 1173, Address: 0x15f804, Func Offset: 0x24
	// Line 1174, Address: 0x15f828, Func Offset: 0x48
	// Func End, Address: 0x15f838, Func Offset: 0x58
}

// 
// Start address: 0x15f840
void enMKNSetDownTime(EnLOCAL_DATA* dp)
{
	short down_time[5];
	// Line 1178, Address: 0x15f840, Func Offset: 0
	// Line 1179, Address: 0x15f84c, Func Offset: 0xc
	// Line 1186, Address: 0x15f868, Func Offset: 0x28
	// Line 1187, Address: 0x15f890, Func Offset: 0x50
	// Func End, Address: 0x15f8a0, Func Offset: 0x60
}

// 
// Start address: 0x15f8a0
void enMKNSetMoveCount(EnLOCAL_DATA* dp)
{
	int n;
	// Line 1191, Address: 0x15f8a0, Func Offset: 0
	// Line 1193, Address: 0x15f8b4, Func Offset: 0x14
	// Line 1194, Address: 0x15f914, Func Offset: 0x74
	// Line 1195, Address: 0x15f924, Func Offset: 0x84
	// Func End, Address: 0x15f93c, Func Offset: 0x9c
}

// 
// Start address: 0x15f940
void enMKNSoundLife(EnLOCAL_DATA* dp)
{
	// Line 1199, Address: 0x15f940, Func Offset: 0
	// Line 1200, Address: 0x15f950, Func Offset: 0x10
	// Line 1201, Address: 0x15f960, Func Offset: 0x20
	// Line 1202, Address: 0x15f96c, Func Offset: 0x2c
	// Line 1203, Address: 0x15f9bc, Func Offset: 0x7c
	// Line 1204, Address: 0x15f9fc, Func Offset: 0xbc
	// Line 1206, Address: 0x15fa00, Func Offset: 0xc0
	// Func End, Address: 0x15fa14, Func Offset: 0xd4
}

