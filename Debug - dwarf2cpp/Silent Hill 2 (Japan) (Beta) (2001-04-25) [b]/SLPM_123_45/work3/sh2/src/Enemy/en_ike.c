typedef struct _CL_VHIT_CHARA;
typedef struct _CL_HITPOLY_HEAD;
typedef struct EnLOCAL_DATA;
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

typedef void(*type_6)(EnLOCAL_DATA*);
typedef void(*type_9)(SubCharacter*);
typedef void(*type_13)(SubCharacter*);
typedef void(*type_16)(EnLOCAL_DATA*);

typedef unsigned char type_0[10];
typedef unsigned char type_1[13];
typedef EnANIME_DATA type_2[21];
typedef unsigned char type_3[34];
typedef float type_4[4];
typedef float type_5[4][4];
typedef void(*type_7)(EnLOCAL_DATA*)[6];
typedef unsigned char type_8[10];
typedef EnLOCAL_DATA type_10[64];
typedef shAttackInfo type_11[46];
typedef EnCOMMUNICATION type_12[8];
typedef char type_14[3];
typedef float type_15[5];
typedef void(*type_17)(EnLOCAL_DATA*)[7];
typedef unsigned char type_18[4];
typedef float type_19[4];
typedef float type_20[5];
typedef float type_21[4];
typedef char type_22[2];

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
EnANIME_DATA EnIKEAnime[21];
EnLOCAL_WORK enLocalWork;

void enIKEInitData(EnLOCAL_DATA* dp);
void enIKECtrlMain(EnLOCAL_DATA* dp);
void enIKECtrlAutomatic(EnLOCAL_DATA* dp);
void enIKECtrlGoPlayable(EnLOCAL_DATA* dp);
void enIKECtrlHand(EnLOCAL_DATA* dp);
void enIKECtrlAppearance(EnLOCAL_DATA* dp);
void enIKECtrlMove(EnLOCAL_DATA* dp);
void enIKECtrlChase(EnLOCAL_DATA* dp);
void enIKECtrlAttack(EnLOCAL_DATA* dp);
void enIKECtrlAttack2(EnLOCAL_DATA* dp);
void enIKECtrlDamage(EnLOCAL_DATA* dp);
void enIKECtrlDead(EnLOCAL_DATA* dp);
int enIKECheckOther(EnLOCAL_DATA* dp);
int enIKEGetDamageMotion(EnLOCAL_DATA* dp);
int enIKECanSeePlayer(EnLOCAL_DATA* dp);
int enIKECanSeePlayer2(EnLOCAL_DATA* dp);
void enIKEAnimeSet(EnLOCAL_DATA* dp, int anim);
void enIKEAnimeReset(EnLOCAL_DATA* dp, int anim);
void enIKEAnimeExec(EnLOCAL_DATA* dp);
float enIKEGetMoveSpeed(EnLOCAL_DATA* dp);

// 
// Start address: 0x15a000
void enIKEInitData(EnLOCAL_DATA* dp)
{
	int mode;
	float vitarity[5];
	// Line 116, Address: 0x15a000, Func Offset: 0
	// Line 117, Address: 0x15a010, Func Offset: 0x10
	// Line 124, Address: 0x15a02c, Func Offset: 0x2c
	// Line 126, Address: 0x15a038, Func Offset: 0x38
	// Line 127, Address: 0x15a044, Func Offset: 0x44
	// Line 128, Address: 0x15a054, Func Offset: 0x54
	// Line 130, Address: 0x15a064, Func Offset: 0x64
	// Line 131, Address: 0x15a090, Func Offset: 0x90
	// Line 132, Address: 0x15a09c, Func Offset: 0x9c
	// Line 133, Address: 0x15a0c0, Func Offset: 0xc0
	// Line 134, Address: 0x15a0d0, Func Offset: 0xd0
	// Line 135, Address: 0x15a0e0, Func Offset: 0xe0
	// Func End, Address: 0x15a0f4, Func Offset: 0xf4
}

// 
// Start address: 0x15a100
void enIKECtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlIKEFunc)(EnLOCAL_DATA*)[6];
	// Line 141, Address: 0x15a100, Func Offset: 0
	// Line 142, Address: 0x15a10c, Func Offset: 0xc
	// Line 151, Address: 0x15a128, Func Offset: 0x28
	// Line 152, Address: 0x15a150, Func Offset: 0x50
	// Func End, Address: 0x15a160, Func Offset: 0x60
}

// 
// Start address: 0x15a160
void enIKECtrlAutomatic(EnLOCAL_DATA* dp)
{
	void(*enCtrlIKESubFunc)(EnLOCAL_DATA*)[7];
	// Line 156, Address: 0x15a160, Func Offset: 0
	// Line 157, Address: 0x15a16c, Func Offset: 0xc
	// Line 167, Address: 0x15a190, Func Offset: 0x30
	// Line 169, Address: 0x15a1a0, Func Offset: 0x40
	// Line 172, Address: 0x15a1c8, Func Offset: 0x68
	// Line 174, Address: 0x15a1d4, Func Offset: 0x74
	// Line 175, Address: 0x15a1e0, Func Offset: 0x80
	// Func End, Address: 0x15a1f0, Func Offset: 0x90
}

// 
// Start address: 0x15a1f0
void enIKECtrlGoPlayable(EnLOCAL_DATA* dp)
{
	// Line 179, Address: 0x15a1f0, Func Offset: 0
	// Line 180, Address: 0x15a1f8, Func Offset: 0x8
	// Line 181, Address: 0x15a204, Func Offset: 0x14
	// Line 182, Address: 0x15a218, Func Offset: 0x28
	// Func End, Address: 0x15a224, Func Offset: 0x34
}

// 
// Start address: 0x15a230
void enIKECtrlHand(EnLOCAL_DATA* dp)
{
	int d;
	int move;
	int c;
	float s;
	// Line 186, Address: 0x15a230, Func Offset: 0
	// Line 188, Address: 0x15a248, Func Offset: 0x18
	// Line 189, Address: 0x15a254, Func Offset: 0x24
	// Line 190, Address: 0x15a258, Func Offset: 0x28
	// Line 191, Address: 0x15a268, Func Offset: 0x38
	// Line 192, Address: 0x15a278, Func Offset: 0x48
	// Line 193, Address: 0x15a280, Func Offset: 0x50
	// Line 194, Address: 0x15a294, Func Offset: 0x64
	// Line 195, Address: 0x15a298, Func Offset: 0x68
	// Line 197, Address: 0x15a2a8, Func Offset: 0x78
	// Line 198, Address: 0x15a2bc, Func Offset: 0x8c
	// Line 199, Address: 0x15a2c0, Func Offset: 0x90
	// Line 201, Address: 0x15a2d0, Func Offset: 0xa0
	// Line 202, Address: 0x15a2e4, Func Offset: 0xb4
	// Line 203, Address: 0x15a2e8, Func Offset: 0xb8
	// Line 205, Address: 0x15a2f8, Func Offset: 0xc8
	// Line 206, Address: 0x15a30c, Func Offset: 0xdc
	// Line 207, Address: 0x15a310, Func Offset: 0xe0
	// Line 209, Address: 0x15a320, Func Offset: 0xf0
	// Line 210, Address: 0x15a338, Func Offset: 0x108
	// Line 213, Address: 0x15a340, Func Offset: 0x110
	// Line 214, Address: 0x15a354, Func Offset: 0x124
	// Line 216, Address: 0x15a388, Func Offset: 0x158
	// Line 217, Address: 0x15a39c, Func Offset: 0x16c
	// Line 219, Address: 0x15a3d0, Func Offset: 0x1a0
	// Line 220, Address: 0x15a3e8, Func Offset: 0x1b8
	// Line 221, Address: 0x15a400, Func Offset: 0x1d0
	// Line 222, Address: 0x15a414, Func Offset: 0x1e4
	// Line 224, Address: 0x15a43c, Func Offset: 0x20c
	// Line 225, Address: 0x15a448, Func Offset: 0x218
	// Line 226, Address: 0x15a458, Func Offset: 0x228
	// Line 227, Address: 0x15a45c, Func Offset: 0x22c
	// Line 228, Address: 0x15a464, Func Offset: 0x234
	// Line 229, Address: 0x15a470, Func Offset: 0x240
	// Line 230, Address: 0x15a480, Func Offset: 0x250
	// Line 232, Address: 0x15a488, Func Offset: 0x258
	// Line 233, Address: 0x15a498, Func Offset: 0x268
	// Line 234, Address: 0x15a49c, Func Offset: 0x26c
	// Line 236, Address: 0x15a4a4, Func Offset: 0x274
	// Line 237, Address: 0x15a4b8, Func Offset: 0x288
	// Line 238, Address: 0x15a4c8, Func Offset: 0x298
	// Line 240, Address: 0x15a4cc, Func Offset: 0x29c
	// Line 242, Address: 0x15a4d4, Func Offset: 0x2a4
	// Line 243, Address: 0x15a4e8, Func Offset: 0x2b8
	// Line 244, Address: 0x15a4f8, Func Offset: 0x2c8
	// Line 248, Address: 0x15a4fc, Func Offset: 0x2cc
	// Line 249, Address: 0x15a504, Func Offset: 0x2d4
	// Line 250, Address: 0x15a510, Func Offset: 0x2e0
	// Line 251, Address: 0x15a520, Func Offset: 0x2f0
	// Line 252, Address: 0x15a524, Func Offset: 0x2f4
	// Line 253, Address: 0x15a544, Func Offset: 0x314
	// Line 254, Address: 0x15a554, Func Offset: 0x324
	// Line 257, Address: 0x15a558, Func Offset: 0x328
	// Line 258, Address: 0x15a56c, Func Offset: 0x33c
	// Line 260, Address: 0x15a594, Func Offset: 0x364
	// Line 261, Address: 0x15a5b8, Func Offset: 0x388
	// Line 262, Address: 0x15a5c8, Func Offset: 0x398
	// Line 263, Address: 0x15a5d0, Func Offset: 0x3a0
	// Line 265, Address: 0x15a5e0, Func Offset: 0x3b0
	// Line 267, Address: 0x15a5e8, Func Offset: 0x3b8
	// Line 268, Address: 0x15a60c, Func Offset: 0x3dc
	// Line 269, Address: 0x15a61c, Func Offset: 0x3ec
	// Line 270, Address: 0x15a624, Func Offset: 0x3f4
	// Line 272, Address: 0x15a634, Func Offset: 0x404
	// Line 274, Address: 0x15a63c, Func Offset: 0x40c
	// Line 277, Address: 0x15a64c, Func Offset: 0x41c
	// Line 279, Address: 0x15a650, Func Offset: 0x420
	// Line 280, Address: 0x15a664, Func Offset: 0x434
	// Line 282, Address: 0x15a68c, Func Offset: 0x45c
	// Line 283, Address: 0x15a6b0, Func Offset: 0x480
	// Line 284, Address: 0x15a6c0, Func Offset: 0x490
	// Line 285, Address: 0x15a6c8, Func Offset: 0x498
	// Line 287, Address: 0x15a6d8, Func Offset: 0x4a8
	// Line 289, Address: 0x15a6e0, Func Offset: 0x4b0
	// Line 290, Address: 0x15a704, Func Offset: 0x4d4
	// Line 291, Address: 0x15a714, Func Offset: 0x4e4
	// Line 292, Address: 0x15a71c, Func Offset: 0x4ec
	// Line 294, Address: 0x15a72c, Func Offset: 0x4fc
	// Line 296, Address: 0x15a734, Func Offset: 0x504
	// Line 299, Address: 0x15a744, Func Offset: 0x514
	// Line 301, Address: 0x15a748, Func Offset: 0x518
	// Line 302, Address: 0x15a75c, Func Offset: 0x52c
	// Line 303, Address: 0x15a774, Func Offset: 0x544
	// Line 304, Address: 0x15a780, Func Offset: 0x550
	// Line 305, Address: 0x15a788, Func Offset: 0x558
	// Line 308, Address: 0x15a794, Func Offset: 0x564
	// Line 309, Address: 0x15a7b4, Func Offset: 0x584
	// Line 310, Address: 0x15a7c4, Func Offset: 0x594
	// Line 312, Address: 0x15a7c8, Func Offset: 0x598
	// Line 313, Address: 0x15a7d0, Func Offset: 0x5a0
	// Line 315, Address: 0x15a82c, Func Offset: 0x5fc
	// Line 317, Address: 0x15a838, Func Offset: 0x608
	// Line 319, Address: 0x15a844, Func Offset: 0x614
	// Func End, Address: 0x15a860, Func Offset: 0x630
}

// 
// Start address: 0x15a860
void enIKECtrlAppearance(EnLOCAL_DATA* dp)
{
	// Line 323, Address: 0x15a860, Func Offset: 0
	// Line 324, Address: 0x15a86c, Func Offset: 0xc
	// Line 326, Address: 0x15a8a4, Func Offset: 0x44
	// Line 327, Address: 0x15a8d0, Func Offset: 0x70
	// Line 328, Address: 0x15a8e4, Func Offset: 0x84
	// Line 330, Address: 0x15a8ec, Func Offset: 0x8c
	// Line 331, Address: 0x15a8fc, Func Offset: 0x9c
	// Line 332, Address: 0x15a90c, Func Offset: 0xac
	// Line 334, Address: 0x15a91c, Func Offset: 0xbc
	// Line 335, Address: 0x15a948, Func Offset: 0xe8
	// Line 336, Address: 0x15a960, Func Offset: 0x100
	// Line 337, Address: 0x15a970, Func Offset: 0x110
	// Line 338, Address: 0x15a980, Func Offset: 0x120
	// Line 339, Address: 0x15a988, Func Offset: 0x128
	// Line 341, Address: 0x15a998, Func Offset: 0x138
	// Line 343, Address: 0x15a9a0, Func Offset: 0x140
	// Line 344, Address: 0x15a9cc, Func Offset: 0x16c
	// Line 345, Address: 0x15a9e0, Func Offset: 0x180
	// Line 346, Address: 0x15a9f0, Func Offset: 0x190
	// Line 349, Address: 0x15aa04, Func Offset: 0x1a4
	// Func End, Address: 0x15aa14, Func Offset: 0x1b4
}

// 
// Start address: 0x15aa20
void enIKECtrlMove(EnLOCAL_DATA* dp)
{
	float vec2[4];
	float pos3[4];
	float pos2[4];
	float d2;
	float d1;
	float a;
	int t;
	float vec[4];
	// Line 353, Address: 0x15aa20, Func Offset: 0
	// Line 358, Address: 0x15aa38, Func Offset: 0x18
	// Line 359, Address: 0x15aa58, Func Offset: 0x38
	// Line 360, Address: 0x15aa64, Func Offset: 0x44
	// Line 362, Address: 0x15aa6c, Func Offset: 0x4c
	// Line 363, Address: 0x15aa80, Func Offset: 0x60
	// Line 364, Address: 0x15aa90, Func Offset: 0x70
	// Line 365, Address: 0x15aaa0, Func Offset: 0x80
	// Line 367, Address: 0x15aaac, Func Offset: 0x8c
	// Line 368, Address: 0x15aac8, Func Offset: 0xa8
	// Line 369, Address: 0x15aae8, Func Offset: 0xc8
	// Line 370, Address: 0x15aaf8, Func Offset: 0xd8
	// Line 371, Address: 0x15ab14, Func Offset: 0xf4
	// Line 372, Address: 0x15ab2c, Func Offset: 0x10c
	// Line 373, Address: 0x15ab7c, Func Offset: 0x15c
	// Line 374, Address: 0x15ab9c, Func Offset: 0x17c
	// Line 375, Address: 0x15abb4, Func Offset: 0x194
	// Line 376, Address: 0x15abbc, Func Offset: 0x19c
	// Line 377, Address: 0x15abc4, Func Offset: 0x1a4
	// Line 378, Address: 0x15abd0, Func Offset: 0x1b0
	// Line 379, Address: 0x15abf0, Func Offset: 0x1d0
	// Line 380, Address: 0x15ac0c, Func Offset: 0x1ec
	// Line 381, Address: 0x15ac24, Func Offset: 0x204
	// Line 382, Address: 0x15ac44, Func Offset: 0x224
	// Line 383, Address: 0x15ac60, Func Offset: 0x240
	// Line 384, Address: 0x15ac74, Func Offset: 0x254
	// Line 386, Address: 0x15ac94, Func Offset: 0x274
	// Line 387, Address: 0x15ac9c, Func Offset: 0x27c
	// Line 388, Address: 0x15accc, Func Offset: 0x2ac
	// Line 389, Address: 0x15acd8, Func Offset: 0x2b8
	// Line 390, Address: 0x15ad10, Func Offset: 0x2f0
	// Line 391, Address: 0x15ad1c, Func Offset: 0x2fc
	// Line 392, Address: 0x15ad24, Func Offset: 0x304
	// Line 394, Address: 0x15ad28, Func Offset: 0x308
	// Line 395, Address: 0x15ad30, Func Offset: 0x310
	// Line 397, Address: 0x15ad44, Func Offset: 0x324
	// Line 398, Address: 0x15ad6c, Func Offset: 0x34c
	// Line 399, Address: 0x15ada8, Func Offset: 0x388
	// Line 400, Address: 0x15adf8, Func Offset: 0x3d8
	// Line 403, Address: 0x15ae08, Func Offset: 0x3e8
	// Line 404, Address: 0x15ae18, Func Offset: 0x3f8
	// Line 405, Address: 0x15ae24, Func Offset: 0x404
	// Line 406, Address: 0x15ae30, Func Offset: 0x410
	// Line 407, Address: 0x15ae44, Func Offset: 0x424
	// Line 408, Address: 0x15ae50, Func Offset: 0x430
	// Line 411, Address: 0x15ae70, Func Offset: 0x450
	// Func End, Address: 0x15ae8c, Func Offset: 0x46c
}

// 
// Start address: 0x15ae90
void enIKECtrlChase(EnLOCAL_DATA* dp)
{
	float vec[4];
	int t;
	float a2;
	float a1;
	// Line 415, Address: 0x15ae90, Func Offset: 0
	// Line 418, Address: 0x15aea4, Func Offset: 0x14
	// Line 419, Address: 0x15aec4, Func Offset: 0x34
	// Line 420, Address: 0x15aed0, Func Offset: 0x40
	// Line 422, Address: 0x15aed8, Func Offset: 0x48
	// Line 423, Address: 0x15aeec, Func Offset: 0x5c
	// Line 424, Address: 0x15aefc, Func Offset: 0x6c
	// Line 425, Address: 0x15af4c, Func Offset: 0xbc
	// Line 426, Address: 0x15af5c, Func Offset: 0xcc
	// Line 428, Address: 0x15af68, Func Offset: 0xd8
	// Line 429, Address: 0x15af8c, Func Offset: 0xfc
	// Line 430, Address: 0x15afc8, Func Offset: 0x138
	// Line 431, Address: 0x15afe8, Func Offset: 0x158
	// Line 432, Address: 0x15b010, Func Offset: 0x180
	// Line 433, Address: 0x15b024, Func Offset: 0x194
	// Line 434, Address: 0x15b028, Func Offset: 0x198
	// Line 435, Address: 0x15b03c, Func Offset: 0x1ac
	// Line 437, Address: 0x15b04c, Func Offset: 0x1bc
	// Line 438, Address: 0x15b080, Func Offset: 0x1f0
	// Line 439, Address: 0x15b0f4, Func Offset: 0x264
	// Line 440, Address: 0x15b144, Func Offset: 0x2b4
	// Line 442, Address: 0x15b154, Func Offset: 0x2c4
	// Line 443, Address: 0x15b178, Func Offset: 0x2e8
	// Line 446, Address: 0x15b190, Func Offset: 0x300
	// Line 447, Address: 0x15b1ac, Func Offset: 0x31c
	// Line 448, Address: 0x15b1cc, Func Offset: 0x33c
	// Line 450, Address: 0x15b1dc, Func Offset: 0x34c
	// Line 451, Address: 0x15b22c, Func Offset: 0x39c
	// Line 452, Address: 0x15b24c, Func Offset: 0x3bc
	// Line 453, Address: 0x15b258, Func Offset: 0x3c8
	// Line 454, Address: 0x15b264, Func Offset: 0x3d4
	// Line 455, Address: 0x15b270, Func Offset: 0x3e0
	// Line 456, Address: 0x15b284, Func Offset: 0x3f4
	// Line 457, Address: 0x15b290, Func Offset: 0x400
	// Line 458, Address: 0x15b2b4, Func Offset: 0x424
	// Line 460, Address: 0x15b2c0, Func Offset: 0x430
	// Func End, Address: 0x15b2d8, Func Offset: 0x448
}

// 
// Start address: 0x15b2e0
void enIKECtrlAttack(EnLOCAL_DATA* dp)
{
	// Line 464, Address: 0x15b2e0, Func Offset: 0
	// Line 465, Address: 0x15b2ec, Func Offset: 0xc
	// Line 466, Address: 0x15b310, Func Offset: 0x30
	// Line 467, Address: 0x15b324, Func Offset: 0x44
	// Line 468, Address: 0x15b350, Func Offset: 0x70
	// Line 469, Address: 0x15b360, Func Offset: 0x80
	// Line 471, Address: 0x15b368, Func Offset: 0x88
	// Line 473, Address: 0x15b3b8, Func Offset: 0xd8
	// Line 474, Address: 0x15b3c8, Func Offset: 0xe8
	// Line 475, Address: 0x15b3d4, Func Offset: 0xf4
	// Line 476, Address: 0x15b400, Func Offset: 0x120
	// Line 477, Address: 0x15b410, Func Offset: 0x130
	// Line 478, Address: 0x15b41c, Func Offset: 0x13c
	// Line 481, Address: 0x15b42c, Func Offset: 0x14c
	// Line 482, Address: 0x15b440, Func Offset: 0x160
	// Line 484, Address: 0x15b458, Func Offset: 0x178
	// Line 485, Address: 0x15b468, Func Offset: 0x188
	// Line 486, Address: 0x15b474, Func Offset: 0x194
	// Line 487, Address: 0x15b47c, Func Offset: 0x19c
	// Line 488, Address: 0x15b48c, Func Offset: 0x1ac
	// Line 491, Address: 0x15b49c, Func Offset: 0x1bc
	// Line 493, Address: 0x15b4a4, Func Offset: 0x1c4
	// Line 494, Address: 0x15b4b8, Func Offset: 0x1d8
	// Line 495, Address: 0x15b4c8, Func Offset: 0x1e8
	// Line 496, Address: 0x15b4d8, Func Offset: 0x1f8
	// Line 498, Address: 0x15b4e8, Func Offset: 0x208
	// Line 500, Address: 0x15b4f0, Func Offset: 0x210
	// Line 501, Address: 0x15b508, Func Offset: 0x228
	// Line 502, Address: 0x15b518, Func Offset: 0x238
	// Line 504, Address: 0x15b528, Func Offset: 0x248
	// Line 506, Address: 0x15b530, Func Offset: 0x250
	// Line 507, Address: 0x15b544, Func Offset: 0x264
	// Line 508, Address: 0x15b558, Func Offset: 0x278
	// Line 509, Address: 0x15b564, Func Offset: 0x284
	// Line 510, Address: 0x15b574, Func Offset: 0x294
	// Line 514, Address: 0x15b5a0, Func Offset: 0x2c0
	// Func End, Address: 0x15b5b0, Func Offset: 0x2d0
}

// 
// Start address: 0x15b5b0
void enIKECtrlAttack2(EnLOCAL_DATA* dp)
{
	// Line 518, Address: 0x15b5b0, Func Offset: 0
	// Line 519, Address: 0x15b5bc, Func Offset: 0xc
	// Line 520, Address: 0x15b5e0, Func Offset: 0x30
	// Line 521, Address: 0x15b5f4, Func Offset: 0x44
	// Line 522, Address: 0x15b620, Func Offset: 0x70
	// Line 524, Address: 0x15b628, Func Offset: 0x78
	// Line 526, Address: 0x15b654, Func Offset: 0xa4
	// Line 527, Address: 0x15b664, Func Offset: 0xb4
	// Line 528, Address: 0x15b670, Func Offset: 0xc0
	// Line 529, Address: 0x15b69c, Func Offset: 0xec
	// Line 530, Address: 0x15b6a8, Func Offset: 0xf8
	// Line 533, Address: 0x15b6b8, Func Offset: 0x108
	// Line 534, Address: 0x15b6cc, Func Offset: 0x11c
	// Line 537, Address: 0x15b6e0, Func Offset: 0x130
	// Func End, Address: 0x15b6f0, Func Offset: 0x140
}

// 
// Start address: 0x15b6f0
void enIKECtrlDamage(EnLOCAL_DATA* dp)
{
	// Line 541, Address: 0x15b6f0, Func Offset: 0
	// Line 542, Address: 0x15b6fc, Func Offset: 0xc
	// Line 543, Address: 0x15b714, Func Offset: 0x24
	// Line 544, Address: 0x15b720, Func Offset: 0x30
	// Line 545, Address: 0x15b73c, Func Offset: 0x4c
	// Line 546, Address: 0x15b748, Func Offset: 0x58
	// Line 547, Address: 0x15b760, Func Offset: 0x70
	// Line 548, Address: 0x15b78c, Func Offset: 0x9c
	// Line 550, Address: 0x15b79c, Func Offset: 0xac
	// Line 551, Address: 0x15b7c0, Func Offset: 0xd0
	// Line 552, Address: 0x15b7cc, Func Offset: 0xdc
	// Line 553, Address: 0x15b7d8, Func Offset: 0xe8
	// Line 555, Address: 0x15b7f0, Func Offset: 0x100
	// Line 556, Address: 0x15b804, Func Offset: 0x114
	// Line 557, Address: 0x15b830, Func Offset: 0x140
	// Line 558, Address: 0x15b854, Func Offset: 0x164
	// Line 559, Address: 0x15b868, Func Offset: 0x178
	// Line 560, Address: 0x15b870, Func Offset: 0x180
	// Line 561, Address: 0x15b884, Func Offset: 0x194
	// Line 563, Address: 0x15b888, Func Offset: 0x198
	// Func End, Address: 0x15b898, Func Offset: 0x1a8
}

// 
// Start address: 0x15b8a0
void enIKECtrlDead(EnLOCAL_DATA* dp)
{
	EnLOCAL_DATA* tp;
	int n;
	int i;
	// Line 567, Address: 0x15b8a0, Func Offset: 0
	// Line 571, Address: 0x15b8b8, Func Offset: 0x18
	// Line 572, Address: 0x15b8d0, Func Offset: 0x30
	// Line 573, Address: 0x15b8e0, Func Offset: 0x40
	// Line 574, Address: 0x15b8e4, Func Offset: 0x44
	// Line 575, Address: 0x15b8ec, Func Offset: 0x4c
	// Line 576, Address: 0x15b8f8, Func Offset: 0x58
	// Line 577, Address: 0x15b92c, Func Offset: 0x8c
	// Line 579, Address: 0x15b930, Func Offset: 0x90
	// Line 580, Address: 0x15b944, Func Offset: 0xa4
	// Line 582, Address: 0x15b94c, Func Offset: 0xac
	// Line 584, Address: 0x15b95c, Func Offset: 0xbc
	// Line 586, Address: 0x15b96c, Func Offset: 0xcc
	// Func End, Address: 0x15b988, Func Offset: 0xe8
}

// 
// Start address: 0x15b990
int enIKECheckOther(EnLOCAL_DATA* dp)
{
	int i;
	EnLOCAL_DATA* tp;
	// Line 592, Address: 0x15b990, Func Offset: 0
	// Line 593, Address: 0x15b9a0, Func Offset: 0x10
	// Line 595, Address: 0x15b9a8, Func Offset: 0x18
	// Line 596, Address: 0x15b9b4, Func Offset: 0x24
	// Line 597, Address: 0x15b9c0, Func Offset: 0x30
	// Line 598, Address: 0x15b9f0, Func Offset: 0x60
	// Line 600, Address: 0x15ba1c, Func Offset: 0x8c
	// Line 601, Address: 0x15ba34, Func Offset: 0xa4
	// Line 602, Address: 0x15ba38, Func Offset: 0xa8
	// Func End, Address: 0x15ba4c, Func Offset: 0xbc
}

// 
// Start address: 0x15ba50
int enIKEGetDamageMotion(EnLOCAL_DATA* dp)
{
	float vec[4];
	float a;
	int dd;
	int id;
	int m;
	// Line 608, Address: 0x15ba50, Func Offset: 0
	// Line 613, Address: 0x15ba64, Func Offset: 0x14
	// Line 614, Address: 0x15ba88, Func Offset: 0x38
	// Line 615, Address: 0x15bab8, Func Offset: 0x68
	// Line 617, Address: 0x15babc, Func Offset: 0x6c
	// Line 618, Address: 0x15bad0, Func Offset: 0x80
	// Line 619, Address: 0x15baf4, Func Offset: 0xa4
	// Line 620, Address: 0x15bb00, Func Offset: 0xb0
	// Line 623, Address: 0x15bb5c, Func Offset: 0x10c
	// Line 624, Address: 0x15bb60, Func Offset: 0x110
	// Line 627, Address: 0x15bb68, Func Offset: 0x118
	// Line 628, Address: 0x15bb6c, Func Offset: 0x11c
	// Line 632, Address: 0x15bb74, Func Offset: 0x124
	// Line 633, Address: 0x15bb78, Func Offset: 0x128
	// Line 635, Address: 0x15bb80, Func Offset: 0x130
	// Line 636, Address: 0x15bb84, Func Offset: 0x134
	// Line 638, Address: 0x15bb94, Func Offset: 0x144
	// Line 639, Address: 0x15bb98, Func Offset: 0x148
	// Func End, Address: 0x15bbb0, Func Offset: 0x160
}

// 
// Start address: 0x15bbb0
int enIKECanSeePlayer(EnLOCAL_DATA* dp)
{
	// Line 644, Address: 0x15bbb0, Func Offset: 0
	// Line 645, Address: 0x15bbb8, Func Offset: 0x8
	// Line 646, Address: 0x15bbe8, Func Offset: 0x38
	// Line 647, Address: 0x15bc18, Func Offset: 0x68
	// Line 648, Address: 0x15bc1c, Func Offset: 0x6c
	// Func End, Address: 0x15bc28, Func Offset: 0x78
}

// 
// Start address: 0x15bc30
int enIKECanSeePlayer2(EnLOCAL_DATA* dp)
{
	_CL_VHIT_RESULT* res;
	float d;
	// Line 653, Address: 0x15bc30, Func Offset: 0
	// Line 655, Address: 0x15bc40, Func Offset: 0x10
	// Line 656, Address: 0x15bc48, Func Offset: 0x18
	// Line 657, Address: 0x15bc78, Func Offset: 0x48
	// Line 658, Address: 0x15bcac, Func Offset: 0x7c
	// Line 659, Address: 0x15bcd8, Func Offset: 0xa8
	// Line 663, Address: 0x15bd8c, Func Offset: 0x15c
	// Line 665, Address: 0x15bd98, Func Offset: 0x168
	// Line 666, Address: 0x15bd9c, Func Offset: 0x16c
	// Func End, Address: 0x15bdb0, Func Offset: 0x180
}

// 
// Start address: 0x15bdb0
void enIKEAnimeSet(EnLOCAL_DATA* dp, int anim)
{
	// Line 670, Address: 0x15bdb0, Func Offset: 0
	// Line 671, Address: 0x15bdc8, Func Offset: 0x18
	// Line 673, Address: 0x15bde4, Func Offset: 0x34
	// Line 674, Address: 0x15be3c, Func Offset: 0x8c
	// Line 675, Address: 0x15be68, Func Offset: 0xb8
	// Func End, Address: 0x15be80, Func Offset: 0xd0
}

// 
// Start address: 0x15be80
void enIKEAnimeReset(EnLOCAL_DATA* dp, int anim)
{
	// Line 679, Address: 0x15be80, Func Offset: 0
	// Line 681, Address: 0x15be98, Func Offset: 0x18
	// Line 682, Address: 0x15bef0, Func Offset: 0x70
	// Line 683, Address: 0x15bf1c, Func Offset: 0x9c
	// Func End, Address: 0x15bf34, Func Offset: 0xb4
}

// 
// Start address: 0x15bf40
void enIKEAnimeExec(EnLOCAL_DATA* dp)
{
	// Line 687, Address: 0x15bf40, Func Offset: 0
	// Line 688, Address: 0x15bf4c, Func Offset: 0xc
	// Line 689, Address: 0x15bf64, Func Offset: 0x24
	// Func End, Address: 0x15bf74, Func Offset: 0x34
}

// 
// Start address: 0x15bf80
float enIKEGetMoveSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 693, Address: 0x15bf80, Func Offset: 0
	// Line 694, Address: 0x15bf8c, Func Offset: 0xc
	// Line 701, Address: 0x15bfa8, Func Offset: 0x28
	// Line 702, Address: 0x15bfc0, Func Offset: 0x40
	// Line 703, Address: 0x15bff8, Func Offset: 0x78
	// Line 704, Address: 0x15c008, Func Offset: 0x88
	// Func End, Address: 0x15c018, Func Offset: 0x98
}

