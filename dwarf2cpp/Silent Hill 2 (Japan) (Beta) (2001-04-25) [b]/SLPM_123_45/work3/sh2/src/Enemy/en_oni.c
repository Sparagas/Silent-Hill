typedef struct EnLOCAL_DATA;
typedef struct _CL_VHIT_CHARA;
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

typedef void(*type_3)(EnLOCAL_DATA*);
typedef void(*type_7)(EnLOCAL_DATA*);
typedef void(*type_15)(SubCharacter*);
typedef void(*type_19)(SubCharacter*);

typedef unsigned char type_0[10];
typedef float type_1[5];
typedef float type_2[5];
typedef void(*type_4)(EnLOCAL_DATA*)[6];
typedef unsigned char type_5[13];
typedef float type_6[5];
typedef void(*type_8)(EnLOCAL_DATA*)[10];
typedef unsigned char type_9[34];
typedef float type_10[4];
typedef float type_11[4][4];
typedef int type_12[5];
typedef EnANIME_DATA type_13[17];
typedef unsigned char type_14[10];
typedef EnLOCAL_DATA type_16[64];
typedef shAttackInfo type_17[46];
typedef EnCOMMUNICATION type_18[8];
typedef char type_20[3];
typedef unsigned char type_21[4];
typedef float type_22[5];
typedef float type_23[4];
typedef float type_24[5];
typedef float type_25[5];
typedef float type_26[4];
typedef char type_27[2];

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
EnANIME_DATA EnONIAnime[17];
EnLOCAL_WORK enLocalWork;

void enONIInitData(EnLOCAL_DATA* dp);
void enONICtrlMain(EnLOCAL_DATA* dp);
void enONICtrlAutomatic(EnLOCAL_DATA* dp);
void enONICtrlSleep(EnLOCAL_DATA* dp);
void enONICtrlGoPlayable(EnLOCAL_DATA* dp);
void enONICtrlEvent(EnLOCAL_DATA* dp);
void enONICtrlHand(EnLOCAL_DATA* dp);
void enONICtrlWander(EnLOCAL_DATA* dp);
void enONICtrlChase(EnLOCAL_DATA* dp);
void enONICtrlBothAttack(EnLOCAL_DATA* dp);
void enONICtrlWait(EnLOCAL_DATA* dp);
void enONICtrlBerserk(EnLOCAL_DATA* dp);
void enONICtrlAttack(EnLOCAL_DATA* dp);
void enONICtrlAttack3(EnLOCAL_DATA* dp);
void enONICtrlSeize(EnLOCAL_DATA* dp);
void enONICtrlDamage(EnLOCAL_DATA* dp);
void enONICtrlDead(EnLOCAL_DATA* dp);
void enONICheckPlayerWeapon(EnLOCAL_DATA* dp);
int enONIGetDamageMotion(EnLOCAL_DATA* dp);
int enONISetDamage(EnLOCAL_DATA* dp);
int enONICanSeePlayer(EnLOCAL_DATA* dp);
int enONICanSeeCharacter(EnLOCAL_DATA* dp, SubCharacter* scp);
void enONIAnimeSet(EnLOCAL_DATA* dp, int anim);
void enONIAnimeReset(EnLOCAL_DATA* dp, int anim);
void enONIAnimeExec(EnLOCAL_DATA* dp);
float enONIGetSpeed(EnLOCAL_DATA* dp);
float enONIGetWalkSpeed(EnLOCAL_DATA* dp);
float enONIGetAttackSpeed(EnLOCAL_DATA* dp);
float enONIGetFeelRange();
float enONIGetRotSpeed();
void enONISetSlowTime(EnLOCAL_DATA* dp);

// 
// Start address: 0x232560
void enONIInitData(EnLOCAL_DATA* dp)
{
	EnLOCAL_DATA* tp;
	int n;
	int i;
	float hp;
	int mode;
	float endurance[5];
	float vitarity[5];
	// Line 136, Address: 0x232560, Func Offset: 0
	// Line 137, Address: 0x23257c, Func Offset: 0x1c
	// Line 144, Address: 0x232598, Func Offset: 0x38
	// Line 151, Address: 0x2325b4, Func Offset: 0x54
	// Line 154, Address: 0x2325c0, Func Offset: 0x60
	// Line 155, Address: 0x2325cc, Func Offset: 0x6c
	// Line 157, Address: 0x2325d4, Func Offset: 0x74
	// Line 159, Address: 0x2325f0, Func Offset: 0x90
	// Line 160, Address: 0x232604, Func Offset: 0xa4
	// Line 161, Address: 0x232610, Func Offset: 0xb0
	// Line 164, Address: 0x232620, Func Offset: 0xc0
	// Line 165, Address: 0x232624, Func Offset: 0xc4
	// Line 166, Address: 0x23262c, Func Offset: 0xcc
	// Line 167, Address: 0x232638, Func Offset: 0xd8
	// Line 168, Address: 0x23265c, Func Offset: 0xfc
	// Line 169, Address: 0x232664, Func Offset: 0x104
	// Line 170, Address: 0x23266c, Func Offset: 0x10c
	// Line 172, Address: 0x232670, Func Offset: 0x110
	// Line 173, Address: 0x232684, Func Offset: 0x124
	// Line 175, Address: 0x23268c, Func Offset: 0x12c
	// Line 176, Address: 0x23269c, Func Offset: 0x13c
	// Line 178, Address: 0x2326a4, Func Offset: 0x144
	// Line 179, Address: 0x2326b4, Func Offset: 0x154
	// Line 180, Address: 0x2326bc, Func Offset: 0x15c
	// Line 181, Address: 0x2326d0, Func Offset: 0x170
	// Line 184, Address: 0x2326dc, Func Offset: 0x17c
	// Line 186, Address: 0x2326f8, Func Offset: 0x198
	// Line 187, Address: 0x232728, Func Offset: 0x1c8
	// Line 188, Address: 0x232734, Func Offset: 0x1d4
	// Line 189, Address: 0x232744, Func Offset: 0x1e4
	// Func End, Address: 0x232764, Func Offset: 0x204
}

// 
// Start address: 0x232770
void enONICtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlONIFunc)(EnLOCAL_DATA*)[6];
	// Line 194, Address: 0x232770, Func Offset: 0
	// Line 195, Address: 0x23277c, Func Offset: 0xc
	// Line 204, Address: 0x232798, Func Offset: 0x28
	// Line 205, Address: 0x2327c0, Func Offset: 0x50
	// Func End, Address: 0x2327d0, Func Offset: 0x60
}

// 
// Start address: 0x2327d0
void enONICtrlAutomatic(EnLOCAL_DATA* dp)
{
	void(*enCtrlONISubFunc)(EnLOCAL_DATA*)[10];
	// Line 209, Address: 0x2327d0, Func Offset: 0
	// Line 210, Address: 0x2327dc, Func Offset: 0xc
	// Line 223, Address: 0x232800, Func Offset: 0x30
	// Line 225, Address: 0x232810, Func Offset: 0x40
	// Line 227, Address: 0x23281c, Func Offset: 0x4c
	// Line 229, Address: 0x232844, Func Offset: 0x74
	// Line 230, Address: 0x232858, Func Offset: 0x88
	// Line 231, Address: 0x232894, Func Offset: 0xc4
	// Line 235, Address: 0x2328a4, Func Offset: 0xd4
	// Line 237, Address: 0x2328b0, Func Offset: 0xe0
	// Line 238, Address: 0x2328bc, Func Offset: 0xec
	// Func End, Address: 0x2328cc, Func Offset: 0xfc
}

// 
// Start address: 0x2328d0
void enONICtrlSleep(EnLOCAL_DATA* dp)
{
	// Line 241, Address: 0x2328d0, Func Offset: 0
	// Line 242, Address: 0x2328dc, Func Offset: 0xc
	// Line 243, Address: 0x2328f0, Func Offset: 0x20
	// Line 244, Address: 0x2328fc, Func Offset: 0x2c
	// Line 245, Address: 0x23290c, Func Offset: 0x3c
	// Line 247, Address: 0x232914, Func Offset: 0x44
	// Func End, Address: 0x232924, Func Offset: 0x54
}

// 
// Start address: 0x232930
void enONICtrlGoPlayable(EnLOCAL_DATA* dp)
{
	// Line 250, Address: 0x232930, Func Offset: 0
	// Line 251, Address: 0x232938, Func Offset: 0x8
	// Line 252, Address: 0x232944, Func Offset: 0x14
	// Line 253, Address: 0x232958, Func Offset: 0x28
	// Func End, Address: 0x232964, Func Offset: 0x34
}

// 
// Start address: 0x232970
void enONICtrlEvent(EnLOCAL_DATA* dp)
{
	void* tmp;
	// Line 257, Address: 0x232970, Func Offset: 0
	// Line 258, Address: 0x23297c, Func Offset: 0xc
	// Line 259, Address: 0x232980, Func Offset: 0x10
	// Func End, Address: 0x232990, Func Offset: 0x20
}

// 
// Start address: 0x232990
void enONICtrlHand(EnLOCAL_DATA* dp)
{
	int move;
	// Line 263, Address: 0x232990, Func Offset: 0
	// Line 265, Address: 0x2329a0, Func Offset: 0x10
	// Line 266, Address: 0x2329b0, Func Offset: 0x20
	// Line 267, Address: 0x2329c4, Func Offset: 0x34
	// Line 269, Address: 0x2329f8, Func Offset: 0x68
	// Line 270, Address: 0x232a0c, Func Offset: 0x7c
	// Line 272, Address: 0x232a40, Func Offset: 0xb0
	// Line 273, Address: 0x232a5c, Func Offset: 0xcc
	// Line 274, Address: 0x232a6c, Func Offset: 0xdc
	// Line 275, Address: 0x232a80, Func Offset: 0xf0
	// Line 276, Address: 0x232a8c, Func Offset: 0xfc
	// Line 277, Address: 0x232a94, Func Offset: 0x104
	// Line 280, Address: 0x232aa0, Func Offset: 0x110
	// Line 281, Address: 0x232abc, Func Offset: 0x12c
	// Line 282, Address: 0x232acc, Func Offset: 0x13c
	// Line 283, Address: 0x232ae0, Func Offset: 0x150
	// Line 284, Address: 0x232aec, Func Offset: 0x15c
	// Line 285, Address: 0x232af4, Func Offset: 0x164
	// Line 288, Address: 0x232b00, Func Offset: 0x170
	// Line 289, Address: 0x232b1c, Func Offset: 0x18c
	// Line 290, Address: 0x232b2c, Func Offset: 0x19c
	// Line 292, Address: 0x232b30, Func Offset: 0x1a0
	// Line 293, Address: 0x232b4c, Func Offset: 0x1bc
	// Line 294, Address: 0x232b5c, Func Offset: 0x1cc
	// Line 296, Address: 0x232b60, Func Offset: 0x1d0
	// Line 297, Address: 0x232b74, Func Offset: 0x1e4
	// Line 298, Address: 0x232b7c, Func Offset: 0x1ec
	// Line 299, Address: 0x232b8c, Func Offset: 0x1fc
	// Line 300, Address: 0x232b90, Func Offset: 0x200
	// Line 301, Address: 0x232bb8, Func Offset: 0x228
	// Line 302, Address: 0x232bc8, Func Offset: 0x238
	// Line 304, Address: 0x232bcc, Func Offset: 0x23c
	// Line 306, Address: 0x232c14, Func Offset: 0x284
	// Line 307, Address: 0x232c24, Func Offset: 0x294
	// Line 309, Address: 0x232c28, Func Offset: 0x298
	// Line 310, Address: 0x232c3c, Func Offset: 0x2ac
	// Line 311, Address: 0x232c58, Func Offset: 0x2c8
	// Line 312, Address: 0x232c68, Func Offset: 0x2d8
	// Line 314, Address: 0x232c6c, Func Offset: 0x2dc
	// Line 315, Address: 0x232c88, Func Offset: 0x2f8
	// Line 316, Address: 0x232c98, Func Offset: 0x308
	// Line 318, Address: 0x232c9c, Func Offset: 0x30c
	// Line 319, Address: 0x232cb8, Func Offset: 0x328
	// Line 320, Address: 0x232cc8, Func Offset: 0x338
	// Line 322, Address: 0x232ccc, Func Offset: 0x33c
	// Line 323, Address: 0x232cd4, Func Offset: 0x344
	// Line 324, Address: 0x232cf0, Func Offset: 0x360
	// Line 326, Address: 0x232d00, Func Offset: 0x370
	// Line 327, Address: 0x232d1c, Func Offset: 0x38c
	// Line 328, Address: 0x232d2c, Func Offset: 0x39c
	// Line 330, Address: 0x232d30, Func Offset: 0x3a0
	// Line 331, Address: 0x232d4c, Func Offset: 0x3bc
	// Line 332, Address: 0x232d5c, Func Offset: 0x3cc
	// Line 335, Address: 0x232d60, Func Offset: 0x3d0
	// Line 336, Address: 0x232d74, Func Offset: 0x3e4
	// Line 337, Address: 0x232d8c, Func Offset: 0x3fc
	// Line 338, Address: 0x232d98, Func Offset: 0x408
	// Line 339, Address: 0x232da0, Func Offset: 0x410
	// Line 342, Address: 0x232dac, Func Offset: 0x41c
	// Line 343, Address: 0x232dcc, Func Offset: 0x43c
	// Line 345, Address: 0x232dd0, Func Offset: 0x440
	// Line 346, Address: 0x232ddc, Func Offset: 0x44c
	// Line 347, Address: 0x232de8, Func Offset: 0x458
	// Line 349, Address: 0x232df0, Func Offset: 0x460
	// Func End, Address: 0x232e04, Func Offset: 0x474
}

// 
// Start address: 0x232e10
void enONICtrlWander(EnLOCAL_DATA* dp)
{
	int t;
	float vec[4];
	// Line 353, Address: 0x232e10, Func Offset: 0
	// Line 356, Address: 0x232e20, Func Offset: 0x10
	// Line 357, Address: 0x232e40, Func Offset: 0x30
	// Line 358, Address: 0x232e54, Func Offset: 0x44
	// Line 359, Address: 0x232e60, Func Offset: 0x50
	// Line 362, Address: 0x232e68, Func Offset: 0x58
	// Line 363, Address: 0x232e7c, Func Offset: 0x6c
	// Line 364, Address: 0x232e8c, Func Offset: 0x7c
	// Line 365, Address: 0x232ea0, Func Offset: 0x90
	// Line 367, Address: 0x232eac, Func Offset: 0x9c
	// Line 369, Address: 0x232eb8, Func Offset: 0xa8
	// Line 370, Address: 0x232ed8, Func Offset: 0xc8
	// Line 371, Address: 0x232ef8, Func Offset: 0xe8
	// Line 372, Address: 0x232f10, Func Offset: 0x100
	// Line 373, Address: 0x232f28, Func Offset: 0x118
	// Line 375, Address: 0x232f34, Func Offset: 0x124
	// Line 376, Address: 0x232f40, Func Offset: 0x130
	// Line 377, Address: 0x232f4c, Func Offset: 0x13c
	// Line 378, Address: 0x232f58, Func Offset: 0x148
	// Line 379, Address: 0x232f6c, Func Offset: 0x15c
	// Line 381, Address: 0x232f78, Func Offset: 0x168
	// Func End, Address: 0x232f8c, Func Offset: 0x17c
}

// 
// Start address: 0x232f90
void enONICtrlChase(EnLOCAL_DATA* dp)
{
	int t;
	// Line 385, Address: 0x232f90, Func Offset: 0
	// Line 387, Address: 0x232fa4, Func Offset: 0x14
	// Line 388, Address: 0x232fc4, Func Offset: 0x34
	// Line 389, Address: 0x232fd8, Func Offset: 0x48
	// Line 390, Address: 0x232fe4, Func Offset: 0x54
	// Line 393, Address: 0x232fec, Func Offset: 0x5c
	// Line 394, Address: 0x233000, Func Offset: 0x70
	// Line 395, Address: 0x233010, Func Offset: 0x80
	// Line 396, Address: 0x233024, Func Offset: 0x94
	// Line 398, Address: 0x233030, Func Offset: 0xa0
	// Line 399, Address: 0x233054, Func Offset: 0xc4
	// Line 400, Address: 0x23306c, Func Offset: 0xdc
	// Line 401, Address: 0x233078, Func Offset: 0xe8
	// Line 403, Address: 0x2330d4, Func Offset: 0x144
	// Line 405, Address: 0x233140, Func Offset: 0x1b0
	// Line 408, Address: 0x233178, Func Offset: 0x1e8
	// Line 409, Address: 0x233184, Func Offset: 0x1f4
	// Line 410, Address: 0x233190, Func Offset: 0x200
	// Line 411, Address: 0x23319c, Func Offset: 0x20c
	// Line 412, Address: 0x2331b0, Func Offset: 0x220
	// Line 413, Address: 0x2331bc, Func Offset: 0x22c
	// Line 414, Address: 0x2331e4, Func Offset: 0x254
	// Line 415, Address: 0x2331ec, Func Offset: 0x25c
	// Line 417, Address: 0x233240, Func Offset: 0x2b0
	// Line 418, Address: 0x23324c, Func Offset: 0x2bc
	// Line 419, Address: 0x233250, Func Offset: 0x2c0
	// Func End, Address: 0x233268, Func Offset: 0x2d8
}

// 
// Start address: 0x233270
void enONICtrlBothAttack(EnLOCAL_DATA* dp)
{
	int t;
	float a2;
	float a1;
	float a;
	float vec[4];
	// Line 423, Address: 0x233270, Func Offset: 0
	// Line 427, Address: 0x233288, Func Offset: 0x18
	// Line 428, Address: 0x2332a8, Func Offset: 0x38
	// Line 429, Address: 0x2332bc, Func Offset: 0x4c
	// Line 430, Address: 0x2332c8, Func Offset: 0x58
	// Line 433, Address: 0x2332d0, Func Offset: 0x60
	// Line 435, Address: 0x2332dc, Func Offset: 0x6c
	// Line 436, Address: 0x2332e8, Func Offset: 0x78
	// Line 438, Address: 0x2332f0, Func Offset: 0x80
	// Line 440, Address: 0x233314, Func Offset: 0xa4
	// Line 441, Address: 0x233320, Func Offset: 0xb0
	// Line 442, Address: 0x23332c, Func Offset: 0xbc
	// Line 443, Address: 0x233380, Func Offset: 0x110
	// Line 444, Address: 0x23338c, Func Offset: 0x11c
	// Line 445, Address: 0x233394, Func Offset: 0x124
	// Line 447, Address: 0x2333a0, Func Offset: 0x130
	// Line 448, Address: 0x2333a8, Func Offset: 0x138
	// Line 449, Address: 0x2333b4, Func Offset: 0x144
	// Line 450, Address: 0x2333c0, Func Offset: 0x150
	// Line 451, Address: 0x2333c8, Func Offset: 0x158
	// Line 452, Address: 0x2333e8, Func Offset: 0x178
	// Line 453, Address: 0x2333f4, Func Offset: 0x184
	// Line 455, Address: 0x2333fc, Func Offset: 0x18c
	// Line 456, Address: 0x233418, Func Offset: 0x1a8
	// Line 457, Address: 0x233424, Func Offset: 0x1b4
	// Line 459, Address: 0x23342c, Func Offset: 0x1bc
	// Line 460, Address: 0x23343c, Func Offset: 0x1cc
	// Line 461, Address: 0x23344c, Func Offset: 0x1dc
	// Line 462, Address: 0x23345c, Func Offset: 0x1ec
	// Line 464, Address: 0x2334a8, Func Offset: 0x238
	// Line 465, Address: 0x2334c8, Func Offset: 0x258
	// Line 466, Address: 0x2334d8, Func Offset: 0x268
	// Line 467, Address: 0x2334e0, Func Offset: 0x270
	// Line 469, Address: 0x2334e8, Func Offset: 0x278
	// Line 470, Address: 0x2334f8, Func Offset: 0x288
	// Line 471, Address: 0x233504, Func Offset: 0x294
	// Line 473, Address: 0x233510, Func Offset: 0x2a0
	// Line 475, Address: 0x233568, Func Offset: 0x2f8
	// Line 476, Address: 0x23358c, Func Offset: 0x31c
	// Line 477, Address: 0x2335a4, Func Offset: 0x334
	// Line 478, Address: 0x2335bc, Func Offset: 0x34c
	// Line 479, Address: 0x2335c8, Func Offset: 0x358
	// Line 480, Address: 0x2335ec, Func Offset: 0x37c
	// Line 482, Address: 0x2335f4, Func Offset: 0x384
	// Line 484, Address: 0x2335fc, Func Offset: 0x38c
	// Line 485, Address: 0x233614, Func Offset: 0x3a4
	// Line 486, Address: 0x233638, Func Offset: 0x3c8
	// Line 488, Address: 0x233658, Func Offset: 0x3e8
	// Line 490, Address: 0x233660, Func Offset: 0x3f0
	// Line 492, Address: 0x233680, Func Offset: 0x410
	// Line 494, Address: 0x233688, Func Offset: 0x418
	// Line 495, Address: 0x2336a0, Func Offset: 0x430
	// Line 496, Address: 0x2336ac, Func Offset: 0x43c
	// Line 498, Address: 0x2336b4, Func Offset: 0x444
	// Line 499, Address: 0x2336cc, Func Offset: 0x45c
	// Line 500, Address: 0x2336f0, Func Offset: 0x480
	// Line 501, Address: 0x2336f8, Func Offset: 0x488
	// Line 503, Address: 0x233720, Func Offset: 0x4b0
	// Line 504, Address: 0x233730, Func Offset: 0x4c0
	// Line 506, Address: 0x233738, Func Offset: 0x4c8
	// Line 508, Address: 0x233740, Func Offset: 0x4d0
	// Line 509, Address: 0x233758, Func Offset: 0x4e8
	// Line 511, Address: 0x23378c, Func Offset: 0x51c
	// Line 512, Address: 0x23379c, Func Offset: 0x52c
	// Line 516, Address: 0x2337a4, Func Offset: 0x534
	// Func End, Address: 0x2337c0, Func Offset: 0x550
}

// 
// Start address: 0x2337c0
void enONICtrlWait(EnLOCAL_DATA* dp)
{
	int t;
	// Line 520, Address: 0x2337c0, Func Offset: 0
	// Line 522, Address: 0x2337d4, Func Offset: 0x14
	// Line 523, Address: 0x2337f4, Func Offset: 0x34
	// Line 524, Address: 0x233808, Func Offset: 0x48
	// Line 525, Address: 0x233814, Func Offset: 0x54
	// Line 528, Address: 0x23381c, Func Offset: 0x5c
	// Line 530, Address: 0x233828, Func Offset: 0x68
	// Line 531, Address: 0x233834, Func Offset: 0x74
	// Line 533, Address: 0x23383c, Func Offset: 0x7c
	// Line 535, Address: 0x233848, Func Offset: 0x88
	// Line 536, Address: 0x233854, Func Offset: 0x94
	// Line 537, Address: 0x233860, Func Offset: 0xa0
	// Line 538, Address: 0x2338b4, Func Offset: 0xf4
	// Line 539, Address: 0x2338c0, Func Offset: 0x100
	// Line 540, Address: 0x2338c8, Func Offset: 0x108
	// Line 541, Address: 0x2338d4, Func Offset: 0x114
	// Line 542, Address: 0x2338d8, Func Offset: 0x118
	// Line 543, Address: 0x2338e0, Func Offset: 0x120
	// Line 544, Address: 0x2338ec, Func Offset: 0x12c
	// Line 545, Address: 0x2338f8, Func Offset: 0x138
	// Line 546, Address: 0x233900, Func Offset: 0x140
	// Line 547, Address: 0x233924, Func Offset: 0x164
	// Line 548, Address: 0x233930, Func Offset: 0x170
	// Line 549, Address: 0x233938, Func Offset: 0x178
	// Line 551, Address: 0x233984, Func Offset: 0x1c4
	// Line 552, Address: 0x233990, Func Offset: 0x1d0
	// Line 554, Address: 0x233998, Func Offset: 0x1d8
	// Line 555, Address: 0x2339ac, Func Offset: 0x1ec
	// Line 556, Address: 0x2339bc, Func Offset: 0x1fc
	// Line 557, Address: 0x2339d0, Func Offset: 0x210
	// Line 559, Address: 0x2339dc, Func Offset: 0x21c
	// Line 560, Address: 0x2339f4, Func Offset: 0x234
	// Func End, Address: 0x233a0c, Func Offset: 0x24c
}

// 
// Start address: 0x233a10
void enONICtrlBerserk(EnLOCAL_DATA* dp)
{
	float* pos;
	SubCharacter* scp;
	int t;
	float d;
	float vec[4];
	// Line 564, Address: 0x233a10, Func Offset: 0
	// Line 570, Address: 0x233a24, Func Offset: 0x14
	// Line 571, Address: 0x233a44, Func Offset: 0x34
	// Line 572, Address: 0x233a58, Func Offset: 0x48
	// Line 573, Address: 0x233a64, Func Offset: 0x54
	// Line 576, Address: 0x233a6c, Func Offset: 0x5c
	// Line 577, Address: 0x233a80, Func Offset: 0x70
	// Line 578, Address: 0x233a90, Func Offset: 0x80
	// Line 579, Address: 0x233aa4, Func Offset: 0x94
	// Line 581, Address: 0x233ab0, Func Offset: 0xa0
	// Line 582, Address: 0x233abc, Func Offset: 0xac
	// Line 584, Address: 0x233acc, Func Offset: 0xbc
	// Line 585, Address: 0x233adc, Func Offset: 0xcc
	// Line 586, Address: 0x233ae8, Func Offset: 0xd8
	// Line 587, Address: 0x233af4, Func Offset: 0xe4
	// Line 589, Address: 0x233af8, Func Offset: 0xe8
	// Line 590, Address: 0x233afc, Func Offset: 0xec
	// Line 591, Address: 0x233b18, Func Offset: 0x108
	// Line 592, Address: 0x233b38, Func Offset: 0x128
	// Line 593, Address: 0x233b54, Func Offset: 0x144
	// Line 594, Address: 0x233b60, Func Offset: 0x150
	// Line 595, Address: 0x233b68, Func Offset: 0x158
	// Line 596, Address: 0x233b94, Func Offset: 0x184
	// Line 598, Address: 0x233bac, Func Offset: 0x19c
	// Line 599, Address: 0x233bc4, Func Offset: 0x1b4
	// Line 600, Address: 0x233bdc, Func Offset: 0x1cc
	// Line 601, Address: 0x233be8, Func Offset: 0x1d8
	// Func End, Address: 0x233c00, Func Offset: 0x1f0
}

// 
// Start address: 0x233c00
void enONICtrlAttack(EnLOCAL_DATA* dp)
{
	int t;
	// Line 605, Address: 0x233c00, Func Offset: 0
	// Line 607, Address: 0x233c10, Func Offset: 0x10
	// Line 608, Address: 0x233c34, Func Offset: 0x34
	// Line 609, Address: 0x233c48, Func Offset: 0x48
	// Line 610, Address: 0x233c5c, Func Offset: 0x5c
	// Line 613, Address: 0x233c64, Func Offset: 0x64
	// Line 615, Address: 0x233c90, Func Offset: 0x90
	// Line 616, Address: 0x233ca0, Func Offset: 0xa0
	// Line 617, Address: 0x233cb0, Func Offset: 0xb0
	// Line 618, Address: 0x233ccc, Func Offset: 0xcc
	// Line 619, Address: 0x233cd8, Func Offset: 0xd8
	// Line 620, Address: 0x233ce4, Func Offset: 0xe4
	// Line 621, Address: 0x233cf4, Func Offset: 0xf4
	// Line 624, Address: 0x233cfc, Func Offset: 0xfc
	// Line 625, Address: 0x233d0c, Func Offset: 0x10c
	// Line 626, Address: 0x233d20, Func Offset: 0x120
	// Line 628, Address: 0x233d38, Func Offset: 0x138
	// Line 629, Address: 0x233d4c, Func Offset: 0x14c
	// Line 631, Address: 0x233d80, Func Offset: 0x180
	// Line 633, Address: 0x233d88, Func Offset: 0x188
	// Line 634, Address: 0x233d94, Func Offset: 0x194
	// Line 635, Address: 0x233db0, Func Offset: 0x1b0
	// Line 636, Address: 0x233dc4, Func Offset: 0x1c4
	// Line 637, Address: 0x233de4, Func Offset: 0x1e4
	// Line 638, Address: 0x233df4, Func Offset: 0x1f4
	// Line 639, Address: 0x233dfc, Func Offset: 0x1fc
	// Line 640, Address: 0x233e10, Func Offset: 0x210
	// Line 641, Address: 0x233e3c, Func Offset: 0x23c
	// Line 647, Address: 0x233e50, Func Offset: 0x250
	// Line 648, Address: 0x233e5c, Func Offset: 0x25c
	// Func End, Address: 0x233e70, Func Offset: 0x270
}

// 
// Start address: 0x233e70
void enONICtrlAttack3(EnLOCAL_DATA* dp)
{
	// Line 652, Address: 0x233e70, Func Offset: 0
	// Line 653, Address: 0x233e7c, Func Offset: 0xc
	// Line 654, Address: 0x233ea0, Func Offset: 0x30
	// Line 655, Address: 0x233eac, Func Offset: 0x3c
	// Line 657, Address: 0x233ebc, Func Offset: 0x4c
	// Line 659, Address: 0x233f00, Func Offset: 0x90
	// Line 660, Address: 0x233f10, Func Offset: 0xa0
	// Line 661, Address: 0x233f1c, Func Offset: 0xac
	// Line 662, Address: 0x233f28, Func Offset: 0xb8
	// Line 663, Address: 0x233f38, Func Offset: 0xc8
	// Line 665, Address: 0x233f40, Func Offset: 0xd0
	// Line 666, Address: 0x233f54, Func Offset: 0xe4
	// Line 667, Address: 0x233f64, Func Offset: 0xf4
	// Line 668, Address: 0x233f88, Func Offset: 0x118
	// Line 670, Address: 0x233f98, Func Offset: 0x128
	// Line 672, Address: 0x233fa0, Func Offset: 0x130
	// Line 673, Address: 0x233fb0, Func Offset: 0x140
	// Line 676, Address: 0x234054, Func Offset: 0x1e4
	// Line 677, Address: 0x234064, Func Offset: 0x1f4
	// Line 679, Address: 0x234074, Func Offset: 0x204
	// Line 681, Address: 0x23407c, Func Offset: 0x20c
	// Line 682, Address: 0x234090, Func Offset: 0x220
	// Line 683, Address: 0x23409c, Func Offset: 0x22c
	// Line 687, Address: 0x2340b0, Func Offset: 0x240
	// Line 688, Address: 0x2340bc, Func Offset: 0x24c
	// Func End, Address: 0x2340cc, Func Offset: 0x25c
}

// 
// Start address: 0x2340d0
void enONICtrlSeize(EnLOCAL_DATA* dp)
{
	// Line 692, Address: 0x2340d0, Func Offset: 0
	// Line 734, Address: 0x2340d8, Func Offset: 0x8
	// Line 736, Address: 0x2340ec, Func Offset: 0x1c
	// Func End, Address: 0x2340f8, Func Offset: 0x28
}

// 
// Start address: 0x234100
void enONICtrlDamage(EnLOCAL_DATA* dp)
{
	int m;
	// Line 740, Address: 0x234100, Func Offset: 0
	// Line 742, Address: 0x234114, Func Offset: 0x14
	// Line 744, Address: 0x23414c, Func Offset: 0x4c
	// Line 745, Address: 0x234168, Func Offset: 0x68
	// Line 746, Address: 0x234178, Func Offset: 0x78
	// Line 747, Address: 0x234180, Func Offset: 0x80
	// Line 749, Address: 0x2341a4, Func Offset: 0xa4
	// Line 750, Address: 0x2341b4, Func Offset: 0xb4
	// Line 751, Address: 0x2341e8, Func Offset: 0xe8
	// Line 752, Address: 0x2341f8, Func Offset: 0xf8
	// Line 753, Address: 0x234204, Func Offset: 0x104
	// Line 754, Address: 0x234214, Func Offset: 0x114
	// Line 756, Address: 0x23421c, Func Offset: 0x11c
	// Line 757, Address: 0x234240, Func Offset: 0x140
	// Line 758, Address: 0x234254, Func Offset: 0x154
	// Line 759, Address: 0x23425c, Func Offset: 0x15c
	// Line 762, Address: 0x234264, Func Offset: 0x164
	// Line 763, Address: 0x234278, Func Offset: 0x178
	// Line 765, Address: 0x2342b8, Func Offset: 0x1b8
	// Line 766, Address: 0x2342c8, Func Offset: 0x1c8
	// Line 767, Address: 0x2342d8, Func Offset: 0x1d8
	// Line 769, Address: 0x2342e4, Func Offset: 0x1e4
	// Line 770, Address: 0x2342f0, Func Offset: 0x1f0
	// Line 771, Address: 0x2342f8, Func Offset: 0x1f8
	// Line 774, Address: 0x23430c, Func Offset: 0x20c
	// Line 776, Address: 0x234314, Func Offset: 0x214
	// Line 777, Address: 0x234328, Func Offset: 0x228
	// Line 778, Address: 0x23433c, Func Offset: 0x23c
	// Line 779, Address: 0x234348, Func Offset: 0x248
	// Line 785, Address: 0x234358, Func Offset: 0x258
	// Func End, Address: 0x234370, Func Offset: 0x270
}

// 
// Start address: 0x234370
void enONICtrlDead(EnLOCAL_DATA* dp)
{
	void* tmp;
	// Line 789, Address: 0x234370, Func Offset: 0
	// Line 791, Address: 0x23437c, Func Offset: 0xc
	// Line 792, Address: 0x234380, Func Offset: 0x10
	// Func End, Address: 0x234390, Func Offset: 0x20
}

// 
// Start address: 0x234390
void enONICheckPlayerWeapon(EnLOCAL_DATA* dp)
{
	// Line 796, Address: 0x234390, Func Offset: 0
	// Line 797, Address: 0x23439c, Func Offset: 0xc
	// Line 802, Address: 0x2343d8, Func Offset: 0x48
	// Line 803, Address: 0x2343e4, Func Offset: 0x54
	// Line 805, Address: 0x2343ec, Func Offset: 0x5c
	// Line 808, Address: 0x2343f8, Func Offset: 0x68
	// Func End, Address: 0x234408, Func Offset: 0x78
}

// 
// Start address: 0x234410
int enONIGetDamageMotion(EnLOCAL_DATA* dp)
{
	float a;
	int dd;
	int id;
	int m;
	// Line 814, Address: 0x234410, Func Offset: 0
	// Line 818, Address: 0x234420, Func Offset: 0x10
	// Line 819, Address: 0x234444, Func Offset: 0x34
	// Line 820, Address: 0x234478, Func Offset: 0x68
	// Line 821, Address: 0x23447c, Func Offset: 0x6c
	// Line 822, Address: 0x234488, Func Offset: 0x78
	// Line 833, Address: 0x23455c, Func Offset: 0x14c
	// Line 834, Address: 0x234560, Func Offset: 0x150
	// Line 837, Address: 0x234568, Func Offset: 0x158
	// Line 838, Address: 0x23456c, Func Offset: 0x15c
	// Line 841, Address: 0x234574, Func Offset: 0x164
	// Line 842, Address: 0x234578, Func Offset: 0x168
	// Line 844, Address: 0x234580, Func Offset: 0x170
	// Line 845, Address: 0x234584, Func Offset: 0x174
	// Line 847, Address: 0x23458c, Func Offset: 0x17c
	// Line 848, Address: 0x2345a4, Func Offset: 0x194
	// Line 849, Address: 0x2345a8, Func Offset: 0x198
	// Line 850, Address: 0x2345b0, Func Offset: 0x1a0
	// Line 852, Address: 0x2345b4, Func Offset: 0x1a4
	// Line 854, Address: 0x2345bc, Func Offset: 0x1ac
	// Line 855, Address: 0x2345c0, Func Offset: 0x1b0
	// Line 857, Address: 0x2345c8, Func Offset: 0x1b8
	// Line 858, Address: 0x2345cc, Func Offset: 0x1bc
	// Line 860, Address: 0x2345dc, Func Offset: 0x1cc
	// Line 861, Address: 0x2345e0, Func Offset: 0x1d0
	// Func End, Address: 0x2345f4, Func Offset: 0x1e4
}

// 
// Start address: 0x234600
int enONISetDamage(EnLOCAL_DATA* dp)
{
	// Line 866, Address: 0x234600, Func Offset: 0
	// Line 867, Address: 0x23460c, Func Offset: 0xc
	// Line 868, Address: 0x234618, Func Offset: 0x18
	// Line 869, Address: 0x234634, Func Offset: 0x34
	// Line 870, Address: 0x234674, Func Offset: 0x74
	// Line 871, Address: 0x234684, Func Offset: 0x84
	// Line 872, Address: 0x23468c, Func Offset: 0x8c
	// Line 873, Address: 0x2346b0, Func Offset: 0xb0
	// Line 876, Address: 0x2346bc, Func Offset: 0xbc
	// Line 877, Address: 0x2346c0, Func Offset: 0xc0
	// Func End, Address: 0x2346d0, Func Offset: 0xd0
}

// 
// Start address: 0x2346d0
int enONICanSeePlayer(EnLOCAL_DATA* dp)
{
	int wcd;
	float a;
	float dist;
	float* ppos;
	// Line 882, Address: 0x2346d0, Func Offset: 0
	// Line 883, Address: 0x2346ec, Func Offset: 0x1c
	// Line 885, Address: 0x2346fc, Func Offset: 0x2c
	// Line 886, Address: 0x234708, Func Offset: 0x38
	// Line 887, Address: 0x234724, Func Offset: 0x54
	// Line 888, Address: 0x23473c, Func Offset: 0x6c
	// Line 889, Address: 0x23475c, Func Offset: 0x8c
	// Line 891, Address: 0x234768, Func Offset: 0x98
	// Line 893, Address: 0x234774, Func Offset: 0xa4
	// Line 894, Address: 0x234778, Func Offset: 0xa8
	// Line 895, Address: 0x23479c, Func Offset: 0xcc
	// Line 896, Address: 0x2347b8, Func Offset: 0xe8
	// Line 898, Address: 0x234818, Func Offset: 0x148
	// Line 900, Address: 0x234824, Func Offset: 0x154
	// Line 901, Address: 0x234838, Func Offset: 0x168
	// Line 903, Address: 0x23484c, Func Offset: 0x17c
	// Line 904, Address: 0x234898, Func Offset: 0x1c8
	// Line 907, Address: 0x23492c, Func Offset: 0x25c
	// Line 910, Address: 0x2349dc, Func Offset: 0x30c
	// Line 912, Address: 0x2349e8, Func Offset: 0x318
	// Line 913, Address: 0x2349ec, Func Offset: 0x31c
	// Func End, Address: 0x234a0c, Func Offset: 0x33c
}

// 
// Start address: 0x234a10
int enONICanSeeCharacter(EnLOCAL_DATA* dp, SubCharacter* scp)
{
	int wcd;
	float a;
	float dist;
	float* ppos;
	// Line 918, Address: 0x234a10, Func Offset: 0
	// Line 919, Address: 0x234a28, Func Offset: 0x18
	// Line 921, Address: 0x234a2c, Func Offset: 0x1c
	// Line 922, Address: 0x234a34, Func Offset: 0x24
	// Line 923, Address: 0x234a50, Func Offset: 0x40
	// Line 924, Address: 0x234a74, Func Offset: 0x64
	// Line 925, Address: 0x234aac, Func Offset: 0x9c
	// Line 927, Address: 0x234ad0, Func Offset: 0xc0
	// Line 928, Address: 0x234ae4, Func Offset: 0xd4
	// Line 929, Address: 0x234af8, Func Offset: 0xe8
	// Line 930, Address: 0x234b44, Func Offset: 0x134
	// Line 931, Address: 0x234b48, Func Offset: 0x138
	// Func End, Address: 0x234b64, Func Offset: 0x154
}

// 
// Start address: 0x234b70
void enONIAnimeSet(EnLOCAL_DATA* dp, int anim)
{
	// Line 935, Address: 0x234b70, Func Offset: 0
	// Line 936, Address: 0x234b88, Func Offset: 0x18
	// Line 937, Address: 0x234ba4, Func Offset: 0x34
	// Line 938, Address: 0x234bb0, Func Offset: 0x40
	// Line 941, Address: 0x234bb8, Func Offset: 0x48
	// Line 942, Address: 0x234c10, Func Offset: 0xa0
	// Line 943, Address: 0x234c3c, Func Offset: 0xcc
	// Func End, Address: 0x234c54, Func Offset: 0xe4
}

// 
// Start address: 0x234c60
void enONIAnimeReset(EnLOCAL_DATA* dp, int anim)
{
	// Line 947, Address: 0x234c60, Func Offset: 0
	// Line 949, Address: 0x234c78, Func Offset: 0x18
	// Line 950, Address: 0x234cd0, Func Offset: 0x70
	// Line 951, Address: 0x234cfc, Func Offset: 0x9c
	// Func End, Address: 0x234d14, Func Offset: 0xb4
}

// 
// Start address: 0x234d20
void enONIAnimeExec(EnLOCAL_DATA* dp)
{
	int of;
	// Line 955, Address: 0x234d20, Func Offset: 0
	// Line 956, Address: 0x234d30, Func Offset: 0x10
	// Line 957, Address: 0x234d38, Func Offset: 0x18
	// Line 958, Address: 0x234d50, Func Offset: 0x30
	// Line 959, Address: 0x234d84, Func Offset: 0x64
	// Line 961, Address: 0x234da0, Func Offset: 0x80
	// Line 963, Address: 0x234dac, Func Offset: 0x8c
	// Line 973, Address: 0x234e8c, Func Offset: 0x16c
	// Line 980, Address: 0x234e9c, Func Offset: 0x17c
	// Func End, Address: 0x234eb0, Func Offset: 0x190
}

// 
// Start address: 0x234eb0
float enONIGetSpeed(EnLOCAL_DATA* dp)
{
	// Line 984, Address: 0x234eb0, Func Offset: 0
	// Line 985, Address: 0x234eb8, Func Offset: 0x8
	// Line 986, Address: 0x234eec, Func Offset: 0x3c
	// Func End, Address: 0x234ef8, Func Offset: 0x48
}

// 
// Start address: 0x234f00
float enONIGetWalkSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 990, Address: 0x234f00, Func Offset: 0
	// Line 991, Address: 0x234f10, Func Offset: 0x10
	// Line 998, Address: 0x234f2c, Func Offset: 0x2c
	// Line 999, Address: 0x234f50, Func Offset: 0x50
	// Line 1000, Address: 0x234f68, Func Offset: 0x68
	// Line 1002, Address: 0x234f78, Func Offset: 0x78
	// Line 1004, Address: 0x234f98, Func Offset: 0x98
	// Func End, Address: 0x234fac, Func Offset: 0xac
}

// 
// Start address: 0x234fb0
float enONIGetAttackSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1008, Address: 0x234fb0, Func Offset: 0
	// Line 1009, Address: 0x234fc0, Func Offset: 0x10
	// Line 1016, Address: 0x234fdc, Func Offset: 0x2c
	// Line 1017, Address: 0x235000, Func Offset: 0x50
	// Line 1019, Address: 0x235020, Func Offset: 0x70
	// Func End, Address: 0x235034, Func Offset: 0x84
}

// 
// Start address: 0x235040
float enONIGetFeelRange()
{
	float r;
	float feel_range[5];
	// Line 1023, Address: 0x235040, Func Offset: 0
	// Line 1024, Address: 0x235048, Func Offset: 0x8
	// Line 1031, Address: 0x235064, Func Offset: 0x24
	// Line 1032, Address: 0x23507c, Func Offset: 0x3c
	// Line 1033, Address: 0x235090, Func Offset: 0x50
	// Line 1035, Address: 0x2350a4, Func Offset: 0x64
	// Line 1036, Address: 0x2350a8, Func Offset: 0x68
	// Func End, Address: 0x2350b8, Func Offset: 0x78
}

// 
// Start address: 0x2350c0
float enONIGetRotSpeed()
{
	float rot_rate[5];
	// Line 1040, Address: 0x2350c0, Func Offset: 0
	// Line 1041, Address: 0x2350c8, Func Offset: 0x8
	// Line 1048, Address: 0x2350e4, Func Offset: 0x24
	// Line 1049, Address: 0x235108, Func Offset: 0x48
	// Func End, Address: 0x235118, Func Offset: 0x58
}

// 
// Start address: 0x235120
void enONISetSlowTime(EnLOCAL_DATA* dp)
{
	int timer[5];
	// Line 1053, Address: 0x235120, Func Offset: 0
	// Line 1054, Address: 0x23512c, Func Offset: 0xc
	// Line 1061, Address: 0x235148, Func Offset: 0x28
	// Line 1062, Address: 0x235168, Func Offset: 0x48
	// Func End, Address: 0x235178, Func Offset: 0x58
}

