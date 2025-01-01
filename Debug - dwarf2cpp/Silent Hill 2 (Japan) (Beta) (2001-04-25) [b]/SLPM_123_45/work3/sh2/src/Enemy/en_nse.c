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
typedef void(*type_6)(EnLOCAL_DATA*);
typedef void(*type_16)(SubCharacter*);
typedef void(*type_20)(SubCharacter*);

typedef unsigned char type_0[10];
typedef short type_1[5];
typedef float type_2[5];
typedef void(*type_4)(EnLOCAL_DATA*)[6];
typedef unsigned char type_5[13];
typedef void(*type_7)(EnLOCAL_DATA*)[7];
typedef unsigned char type_8[34];
typedef float type_9[4];
typedef float type_10[4][4];
typedef short type_11[5];
typedef float type_12[5];
typedef float type_13[5];
typedef float type_14[5];
typedef unsigned char type_15[10];
typedef EnLOCAL_DATA type_17[64];
typedef shAttackInfo type_18[46];
typedef EnCOMMUNICATION type_19[8];
typedef char type_21[3];
typedef float type_22[5];
typedef unsigned char type_23[4];
typedef float type_24[4];
typedef float type_25[4];
typedef float type_26[5];
typedef EnANIME_DATA type_27[29];
typedef float type_28[5];
typedef char type_29[2];

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
EnANIME_DATA EnNSEAnime[29];
EnLOCAL_WORK enLocalWork;

void enNSEInitData(EnLOCAL_DATA* dp);
void enNSECtrlMain(EnLOCAL_DATA* dp);
void enNSECtrlAutomatic(EnLOCAL_DATA* dp);
void enNSECtrlSleep(EnLOCAL_DATA* dp);
void enNSECtrlGoPlayable(EnLOCAL_DATA* dp);
void enNSECtrlEvent(EnLOCAL_DATA* dp);
void enNSECtrlHand(EnLOCAL_DATA* dp);
void enNSECtrlWander(EnLOCAL_DATA* dp);
void enNSECtrlPrecaution(EnLOCAL_DATA* dp);
void enNSECtrlChase(EnLOCAL_DATA* dp);
void enNSECtrlAttack(EnLOCAL_DATA* dp);
void enNSECtrlDamage(EnLOCAL_DATA* dp);
void enNSECtrlDown(EnLOCAL_DATA* dp);
void enNSECtrlDead(EnLOCAL_DATA* dp);
int enNSECanSeePlayer(EnLOCAL_DATA* dp, float angle);
void enNSEAnimeSet(EnLOCAL_DATA* dp, int anim);
void enNSEAnimeReset(EnLOCAL_DATA* dp, int anim);
void enNSEAnimeExec(EnLOCAL_DATA* dp);
void enNSEAutoRecovery(EnLOCAL_DATA* dp);
float enNSEGetWalkSpeed(EnLOCAL_DATA* dp);
float enNSEGetFeelRange();
float enNSEGetAttackProbability();
float enNSEGetAttackSpeed(EnLOCAL_DATA* dp);
float enNSEGetRotSpeed();
void enNSESetDownTime(EnLOCAL_DATA* dp);
void enNSESetMoveCount(EnLOCAL_DATA* dp);

// 
// Start address: 0x15fa20
void enNSEInitData(EnLOCAL_DATA* dp)
{
	float rate;
	int mode;
	float endurance[5];
	short vitarity[5];
	// Line 128, Address: 0x15fa20, Func Offset: 0
	// Line 129, Address: 0x15fa30, Func Offset: 0x10
	// Line 136, Address: 0x15fa4c, Func Offset: 0x2c
	// Line 143, Address: 0x15fa68, Func Offset: 0x48
	// Line 146, Address: 0x15fa74, Func Offset: 0x54
	// Line 147, Address: 0x15fa80, Func Offset: 0x60
	// Line 148, Address: 0x15fa90, Func Offset: 0x70
	// Line 150, Address: 0x15faa0, Func Offset: 0x80
	// Line 151, Address: 0x15fad4, Func Offset: 0xb4
	// Line 152, Address: 0x15fae0, Func Offset: 0xc0
	// Line 154, Address: 0x15fb24, Func Offset: 0x104
	// Line 155, Address: 0x15fb38, Func Offset: 0x118
	// Line 157, Address: 0x15fb40, Func Offset: 0x120
	// Line 158, Address: 0x15fb50, Func Offset: 0x130
	// Line 160, Address: 0x15fb58, Func Offset: 0x138
	// Line 162, Address: 0x15fb64, Func Offset: 0x144
	// Line 163, Address: 0x15fb78, Func Offset: 0x158
	// Line 164, Address: 0x15fb8c, Func Offset: 0x16c
	// Line 165, Address: 0x15fb9c, Func Offset: 0x17c
	// Line 166, Address: 0x15fbc8, Func Offset: 0x1a8
	// Line 168, Address: 0x15fbd0, Func Offset: 0x1b0
	// Line 170, Address: 0x15fbe0, Func Offset: 0x1c0
	// Line 171, Address: 0x15fc20, Func Offset: 0x200
	// Line 172, Address: 0x15fc40, Func Offset: 0x220
	// Line 173, Address: 0x15fc50, Func Offset: 0x230
	// Line 174, Address: 0x15fc5c, Func Offset: 0x23c
	// Func End, Address: 0x15fc70, Func Offset: 0x250
}

// 
// Start address: 0x15fc70
void enNSECtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlNSEFunc)(EnLOCAL_DATA*)[6];
	// Line 180, Address: 0x15fc70, Func Offset: 0
	// Line 181, Address: 0x15fc7c, Func Offset: 0xc
	// Line 190, Address: 0x15fc98, Func Offset: 0x28
	// Line 191, Address: 0x15fcc0, Func Offset: 0x50
	// Func End, Address: 0x15fcd0, Func Offset: 0x60
}

// 
// Start address: 0x15fcd0
void enNSECtrlAutomatic(EnLOCAL_DATA* dp)
{
	void(*enCtrlNSESubFunc)(EnLOCAL_DATA*)[7];
	// Line 195, Address: 0x15fcd0, Func Offset: 0
	// Line 196, Address: 0x15fcdc, Func Offset: 0xc
	// Line 206, Address: 0x15fd00, Func Offset: 0x30
	// Line 208, Address: 0x15fd10, Func Offset: 0x40
	// Line 211, Address: 0x15fd38, Func Offset: 0x68
	// Line 214, Address: 0x15fd44, Func Offset: 0x74
	// Line 216, Address: 0x15fd50, Func Offset: 0x80
	// Line 217, Address: 0x15fd5c, Func Offset: 0x8c
	// Func End, Address: 0x15fd6c, Func Offset: 0x9c
}

// 
// Start address: 0x15fd70
void enNSECtrlSleep(EnLOCAL_DATA* dp)
{
	// Line 221, Address: 0x15fd70, Func Offset: 0
	// Line 222, Address: 0x15fd7c, Func Offset: 0xc
	// Line 223, Address: 0x15fd90, Func Offset: 0x20
	// Line 225, Address: 0x15fd9c, Func Offset: 0x2c
	// Func End, Address: 0x15fdac, Func Offset: 0x3c
}

// 
// Start address: 0x15fdb0
void enNSECtrlGoPlayable(EnLOCAL_DATA* dp)
{
	// Line 229, Address: 0x15fdb0, Func Offset: 0
	// Line 230, Address: 0x15fdb8, Func Offset: 0x8
	// Line 231, Address: 0x15fdc4, Func Offset: 0x14
	// Line 232, Address: 0x15fdd4, Func Offset: 0x24
	// Func End, Address: 0x15fde0, Func Offset: 0x30
}

// 
// Start address: 0x15fde0
void enNSECtrlEvent(EnLOCAL_DATA* dp)
{
	void* tmp;
	// Line 236, Address: 0x15fde0, Func Offset: 0
	// Line 237, Address: 0x15fdec, Func Offset: 0xc
	// Line 238, Address: 0x15fdf0, Func Offset: 0x10
	// Func End, Address: 0x15fe00, Func Offset: 0x20
}

// 
// Start address: 0x15fe00
void enNSECtrlHand(EnLOCAL_DATA* dp)
{
	int move;
	// Line 242, Address: 0x15fe00, Func Offset: 0
	// Line 244, Address: 0x15fe14, Func Offset: 0x14
	// Line 245, Address: 0x15fe24, Func Offset: 0x24
	// Line 246, Address: 0x15fe38, Func Offset: 0x38
	// Line 248, Address: 0x15fe6c, Func Offset: 0x6c
	// Line 249, Address: 0x15fe80, Func Offset: 0x80
	// Line 251, Address: 0x15feb4, Func Offset: 0xb4
	// Line 252, Address: 0x15fec8, Func Offset: 0xc8
	// Line 253, Address: 0x15fed0, Func Offset: 0xd0
	// Line 254, Address: 0x15fee0, Func Offset: 0xe0
	// Line 257, Address: 0x15feec, Func Offset: 0xec
	// Line 258, Address: 0x15ff00, Func Offset: 0x100
	// Line 259, Address: 0x15ff08, Func Offset: 0x108
	// Line 260, Address: 0x15ff18, Func Offset: 0x118
	// Line 263, Address: 0x15ff24, Func Offset: 0x124
	// Line 264, Address: 0x15ff40, Func Offset: 0x140
	// Line 265, Address: 0x15ff50, Func Offset: 0x150
	// Line 266, Address: 0x15ff54, Func Offset: 0x154
	// Line 267, Address: 0x15ff60, Func Offset: 0x160
	// Line 269, Address: 0x15ff70, Func Offset: 0x170
	// Line 270, Address: 0x15ff8c, Func Offset: 0x18c
	// Line 271, Address: 0x15ff9c, Func Offset: 0x19c
	// Line 272, Address: 0x15ffa0, Func Offset: 0x1a0
	// Line 273, Address: 0x15ffac, Func Offset: 0x1ac
	// Line 275, Address: 0x15ffbc, Func Offset: 0x1bc
	// Line 276, Address: 0x15ffc8, Func Offset: 0x1c8
	// Line 278, Address: 0x15ffd8, Func Offset: 0x1d8
	// Line 279, Address: 0x15ffec, Func Offset: 0x1ec
	// Line 280, Address: 0x15fff4, Func Offset: 0x1f4
	// Line 281, Address: 0x160004, Func Offset: 0x204
	// Line 282, Address: 0x160018, Func Offset: 0x218
	// Line 283, Address: 0x160034, Func Offset: 0x234
	// Line 284, Address: 0x160044, Func Offset: 0x244
	// Line 285, Address: 0x16004c, Func Offset: 0x24c
	// Line 289, Address: 0x16005c, Func Offset: 0x25c
	// Line 290, Address: 0x160070, Func Offset: 0x270
	// Line 291, Address: 0x160078, Func Offset: 0x278
	// Line 292, Address: 0x160088, Func Offset: 0x288
	// Line 293, Address: 0x16008c, Func Offset: 0x28c
	// Line 294, Address: 0x1600a0, Func Offset: 0x2a0
	// Line 295, Address: 0x1600b0, Func Offset: 0x2b0
	// Line 298, Address: 0x1600b4, Func Offset: 0x2b4
	// Line 299, Address: 0x1600c8, Func Offset: 0x2c8
	// Line 300, Address: 0x1600d0, Func Offset: 0x2d0
	// Line 301, Address: 0x1600e0, Func Offset: 0x2e0
	// Line 302, Address: 0x1600e4, Func Offset: 0x2e4
	// Line 303, Address: 0x1600f8, Func Offset: 0x2f8
	// Line 304, Address: 0x160108, Func Offset: 0x308
	// Line 307, Address: 0x16010c, Func Offset: 0x30c
	// Line 308, Address: 0x160120, Func Offset: 0x320
	// Line 309, Address: 0x160128, Func Offset: 0x328
	// Line 310, Address: 0x160138, Func Offset: 0x338
	// Line 311, Address: 0x16013c, Func Offset: 0x33c
	// Line 312, Address: 0x160150, Func Offset: 0x350
	// Line 313, Address: 0x160160, Func Offset: 0x360
	// Line 316, Address: 0x160164, Func Offset: 0x364
	// Line 317, Address: 0x160178, Func Offset: 0x378
	// Line 318, Address: 0x160190, Func Offset: 0x390
	// Line 319, Address: 0x16019c, Func Offset: 0x39c
	// Line 320, Address: 0x1601a4, Func Offset: 0x3a4
	// Line 323, Address: 0x1601b0, Func Offset: 0x3b0
	// Line 324, Address: 0x1601c4, Func Offset: 0x3c4
	// Line 325, Address: 0x1601d0, Func Offset: 0x3d0
	// Line 327, Address: 0x1601dc, Func Offset: 0x3dc
	// Line 328, Address: 0x1601e8, Func Offset: 0x3e8
	// Line 329, Address: 0x16021c, Func Offset: 0x41c
	// Line 331, Address: 0x160260, Func Offset: 0x460
	// Line 332, Address: 0x160278, Func Offset: 0x478
	// Line 333, Address: 0x160294, Func Offset: 0x494
	// Line 334, Address: 0x1602c8, Func Offset: 0x4c8
	// Line 335, Address: 0x1602d0, Func Offset: 0x4d0
	// Line 338, Address: 0x1602fc, Func Offset: 0x4fc
	// Line 339, Address: 0x16031c, Func Offset: 0x51c
	// Line 340, Address: 0x16032c, Func Offset: 0x52c
	// Line 342, Address: 0x160330, Func Offset: 0x530
	// Line 343, Address: 0x16033c, Func Offset: 0x53c
	// Line 344, Address: 0x160348, Func Offset: 0x548
	// Line 345, Address: 0x160350, Func Offset: 0x550
	// Line 347, Address: 0x16035c, Func Offset: 0x55c
	// Line 348, Address: 0x160370, Func Offset: 0x570
	// Line 350, Address: 0x160394, Func Offset: 0x594
	// Line 353, Address: 0x1603a0, Func Offset: 0x5a0
	// Line 354, Address: 0x1603bc, Func Offset: 0x5bc
	// Line 356, Address: 0x1603c0, Func Offset: 0x5c0
	// Line 357, Address: 0x1603c8, Func Offset: 0x5c8
	// Line 359, Address: 0x1603e4, Func Offset: 0x5e4
	// Line 361, Address: 0x1603f0, Func Offset: 0x5f0
	// Line 362, Address: 0x1603f8, Func Offset: 0x5f8
	// Line 363, Address: 0x160404, Func Offset: 0x604
	// Line 365, Address: 0x160410, Func Offset: 0x610
	// Func End, Address: 0x160428, Func Offset: 0x628
}

// 
// Start address: 0x160430
void enNSECtrlWander(EnLOCAL_DATA* dp)
{
	float vec[4];
	int t;
	float a;
	float d;
	// Line 369, Address: 0x160430, Func Offset: 0
	// Line 373, Address: 0x160444, Func Offset: 0x14
	// Line 374, Address: 0x160458, Func Offset: 0x28
	// Line 375, Address: 0x160464, Func Offset: 0x34
	// Line 378, Address: 0x16046c, Func Offset: 0x3c
	// Line 379, Address: 0x16047c, Func Offset: 0x4c
	// Line 380, Address: 0x160488, Func Offset: 0x58
	// Line 381, Address: 0x160494, Func Offset: 0x64
	// Line 382, Address: 0x16049c, Func Offset: 0x6c
	// Line 383, Address: 0x1604a8, Func Offset: 0x78
	// Line 384, Address: 0x1604b4, Func Offset: 0x84
	// Line 387, Address: 0x1604bc, Func Offset: 0x8c
	// Line 388, Address: 0x1604d8, Func Offset: 0xa8
	// Line 389, Address: 0x1604e4, Func Offset: 0xb4
	// Line 391, Address: 0x1604ec, Func Offset: 0xbc
	// Line 392, Address: 0x1604f4, Func Offset: 0xc4
	// Line 394, Address: 0x160528, Func Offset: 0xf8
	// Line 395, Address: 0x160538, Func Offset: 0x108
	// Line 396, Address: 0x160548, Func Offset: 0x118
	// Line 397, Address: 0x160574, Func Offset: 0x144
	// Line 398, Address: 0x160578, Func Offset: 0x148
	// Line 399, Address: 0x160584, Func Offset: 0x154
	// Line 401, Address: 0x16058c, Func Offset: 0x15c
	// Line 402, Address: 0x160594, Func Offset: 0x164
	// Line 403, Address: 0x1605b4, Func Offset: 0x184
	// Line 404, Address: 0x1605c4, Func Offset: 0x194
	// Line 405, Address: 0x1605d4, Func Offset: 0x1a4
	// Line 406, Address: 0x1605dc, Func Offset: 0x1ac
	// Line 407, Address: 0x160604, Func Offset: 0x1d4
	// Line 408, Address: 0x160614, Func Offset: 0x1e4
	// Line 409, Address: 0x160624, Func Offset: 0x1f4
	// Line 410, Address: 0x16062c, Func Offset: 0x1fc
	// Line 411, Address: 0x160668, Func Offset: 0x238
	// Line 412, Address: 0x160694, Func Offset: 0x264
	// Line 414, Address: 0x1606d4, Func Offset: 0x2a4
	// Line 416, Address: 0x1606dc, Func Offset: 0x2ac
	// Line 417, Address: 0x1606ec, Func Offset: 0x2bc
	// Line 418, Address: 0x1606fc, Func Offset: 0x2cc
	// Line 419, Address: 0x160728, Func Offset: 0x2f8
	// Line 424, Address: 0x160730, Func Offset: 0x300
	// Line 425, Address: 0x160748, Func Offset: 0x318
	// Line 426, Address: 0x160754, Func Offset: 0x324
	// Line 427, Address: 0x160780, Func Offset: 0x350
	// Line 428, Address: 0x1607ac, Func Offset: 0x37c
	// Line 429, Address: 0x1607b8, Func Offset: 0x388
	// Line 432, Address: 0x1607e8, Func Offset: 0x3b8
	// Line 433, Address: 0x160800, Func Offset: 0x3d0
	// Line 434, Address: 0x160820, Func Offset: 0x3f0
	// Line 435, Address: 0x160840, Func Offset: 0x410
	// Line 437, Address: 0x160844, Func Offset: 0x414
	// Line 438, Address: 0x16085c, Func Offset: 0x42c
	// Line 439, Address: 0x160868, Func Offset: 0x438
	// Line 440, Address: 0x160874, Func Offset: 0x444
	// Line 441, Address: 0x160888, Func Offset: 0x458
	// Line 443, Address: 0x160894, Func Offset: 0x464
	// Func End, Address: 0x1608ac, Func Offset: 0x47c
}

// 
// Start address: 0x1608b0
void enNSECtrlPrecaution(EnLOCAL_DATA* dp)
{
	int t;
	// Line 447, Address: 0x1608b0, Func Offset: 0
	// Line 449, Address: 0x1608c0, Func Offset: 0x10
	// Line 450, Address: 0x1608d4, Func Offset: 0x24
	// Line 451, Address: 0x160908, Func Offset: 0x58
	// Line 452, Address: 0x16091c, Func Offset: 0x6c
	// Line 455, Address: 0x160924, Func Offset: 0x74
	// Line 456, Address: 0x16093c, Func Offset: 0x8c
	// Line 457, Address: 0x160948, Func Offset: 0x98
	// Line 458, Address: 0x16095c, Func Offset: 0xac
	// Line 459, Address: 0x160964, Func Offset: 0xb4
	// Line 460, Address: 0x160970, Func Offset: 0xc0
	// Line 461, Address: 0x160984, Func Offset: 0xd4
	// Line 464, Address: 0x16098c, Func Offset: 0xdc
	// Line 466, Address: 0x1609ac, Func Offset: 0xfc
	// Line 467, Address: 0x1609bc, Func Offset: 0x10c
	// Line 470, Address: 0x1609c4, Func Offset: 0x114
	// Line 472, Address: 0x1609fc, Func Offset: 0x14c
	// Line 473, Address: 0x160a0c, Func Offset: 0x15c
	// Line 474, Address: 0x160a20, Func Offset: 0x170
	// Line 476, Address: 0x160a30, Func Offset: 0x180
	// Line 477, Address: 0x160a70, Func Offset: 0x1c0
	// Line 478, Address: 0x160a80, Func Offset: 0x1d0
	// Line 479, Address: 0x160ab0, Func Offset: 0x200
	// Line 480, Address: 0x160abc, Func Offset: 0x20c
	// Line 482, Address: 0x160acc, Func Offset: 0x21c
	// Line 483, Address: 0x160ae0, Func Offset: 0x230
	// Line 485, Address: 0x160af0, Func Offset: 0x240
	// Line 487, Address: 0x160af8, Func Offset: 0x248
	// Line 488, Address: 0x160b0c, Func Offset: 0x25c
	// Line 489, Address: 0x160b1c, Func Offset: 0x26c
	// Line 490, Address: 0x160b50, Func Offset: 0x2a0
	// Line 492, Address: 0x160b5c, Func Offset: 0x2ac
	// Line 495, Address: 0x160b64, Func Offset: 0x2b4
	// Line 496, Address: 0x160b7c, Func Offset: 0x2cc
	// Line 497, Address: 0x160b88, Func Offset: 0x2d8
	// Func End, Address: 0x160b9c, Func Offset: 0x2ec
}

// 
// Start address: 0x160ba0
void enNSECtrlChase(EnLOCAL_DATA* dp)
{
	int t;
	float d;
	// Line 501, Address: 0x160ba0, Func Offset: 0
	// Line 504, Address: 0x160bb4, Func Offset: 0x14
	// Line 505, Address: 0x160bc8, Func Offset: 0x28
	// Line 506, Address: 0x160bfc, Func Offset: 0x5c
	// Line 507, Address: 0x160c08, Func Offset: 0x68
	// Line 510, Address: 0x160c10, Func Offset: 0x70
	// Line 511, Address: 0x160c24, Func Offset: 0x84
	// Line 512, Address: 0x160c30, Func Offset: 0x90
	// Line 513, Address: 0x160c3c, Func Offset: 0x9c
	// Line 514, Address: 0x160c44, Func Offset: 0xa4
	// Line 516, Address: 0x160c68, Func Offset: 0xc8
	// Line 517, Address: 0x160c70, Func Offset: 0xd0
	// Line 519, Address: 0x160c78, Func Offset: 0xd8
	// Line 521, Address: 0x160cac, Func Offset: 0x10c
	// Line 522, Address: 0x160cbc, Func Offset: 0x11c
	// Line 523, Address: 0x160ccc, Func Offset: 0x12c
	// Line 524, Address: 0x160cdc, Func Offset: 0x13c
	// Line 526, Address: 0x160ce8, Func Offset: 0x148
	// Line 527, Address: 0x160cfc, Func Offset: 0x15c
	// Line 529, Address: 0x160d00, Func Offset: 0x160
	// Line 530, Address: 0x160d0c, Func Offset: 0x16c
	// Line 532, Address: 0x160d58, Func Offset: 0x1b8
	// Line 533, Address: 0x160d68, Func Offset: 0x1c8
	// Line 534, Address: 0x160d98, Func Offset: 0x1f8
	// Line 535, Address: 0x160da0, Func Offset: 0x200
	// Line 538, Address: 0x160dac, Func Offset: 0x20c
	// Line 540, Address: 0x160dd0, Func Offset: 0x230
	// Line 542, Address: 0x160df8, Func Offset: 0x258
	// Line 544, Address: 0x160e00, Func Offset: 0x260
	// Line 545, Address: 0x160e10, Func Offset: 0x270
	// Line 546, Address: 0x160e20, Func Offset: 0x280
	// Line 547, Address: 0x160e30, Func Offset: 0x290
	// Line 548, Address: 0x160e64, Func Offset: 0x2c4
	// Line 549, Address: 0x160e74, Func Offset: 0x2d4
	// Line 550, Address: 0x160e84, Func Offset: 0x2e4
	// Line 552, Address: 0x160e8c, Func Offset: 0x2ec
	// Line 555, Address: 0x160e94, Func Offset: 0x2f4
	// Line 556, Address: 0x160eac, Func Offset: 0x30c
	// Line 557, Address: 0x160eb8, Func Offset: 0x318
	// Line 558, Address: 0x160ee4, Func Offset: 0x344
	// Line 559, Address: 0x160f10, Func Offset: 0x370
	// Line 560, Address: 0x160f1c, Func Offset: 0x37c
	// Line 563, Address: 0x160f4c, Func Offset: 0x3ac
	// Line 564, Address: 0x160f64, Func Offset: 0x3c4
	// Line 565, Address: 0x160f70, Func Offset: 0x3d0
	// Line 566, Address: 0x160f7c, Func Offset: 0x3dc
	// Func End, Address: 0x160f94, Func Offset: 0x3f4
}

// 
// Start address: 0x160fa0
void enNSECtrlAttack(EnLOCAL_DATA* dp)
{
	// Line 570, Address: 0x160fa0, Func Offset: 0
	// Line 571, Address: 0x160fb4, Func Offset: 0x14
	// Line 572, Address: 0x160fc8, Func Offset: 0x28
	// Line 573, Address: 0x160fdc, Func Offset: 0x3c
	// Line 574, Address: 0x161010, Func Offset: 0x70
	// Line 575, Address: 0x161020, Func Offset: 0x80
	// Line 577, Address: 0x161028, Func Offset: 0x88
	// Line 579, Address: 0x161060, Func Offset: 0xc0
	// Line 580, Address: 0x161084, Func Offset: 0xe4
	// Line 582, Address: 0x1610f0, Func Offset: 0x150
	// Line 583, Address: 0x161100, Func Offset: 0x160
	// Line 584, Address: 0x161108, Func Offset: 0x168
	// Line 586, Address: 0x161118, Func Offset: 0x178
	// Line 587, Address: 0x161120, Func Offset: 0x180
	// Line 588, Address: 0x161130, Func Offset: 0x190
	// Line 589, Address: 0x16113c, Func Offset: 0x19c
	// Line 591, Address: 0x161144, Func Offset: 0x1a4
	// Line 592, Address: 0x161150, Func Offset: 0x1b0
	// Line 593, Address: 0x161184, Func Offset: 0x1e4
	// Line 594, Address: 0x161194, Func Offset: 0x1f4
	// Line 595, Address: 0x1611a0, Func Offset: 0x200
	// Line 596, Address: 0x1611b4, Func Offset: 0x214
	// Line 597, Address: 0x1611d0, Func Offset: 0x230
	// Line 600, Address: 0x1611e0, Func Offset: 0x240
	// Line 602, Address: 0x161224, Func Offset: 0x284
	// Line 604, Address: 0x161238, Func Offset: 0x298
	// Line 606, Address: 0x161250, Func Offset: 0x2b0
	// Line 607, Address: 0x161264, Func Offset: 0x2c4
	// Line 608, Address: 0x161278, Func Offset: 0x2d8
	// Line 609, Address: 0x1612ac, Func Offset: 0x30c
	// Line 610, Address: 0x1612bc, Func Offset: 0x31c
	// Line 611, Address: 0x1612c4, Func Offset: 0x324
	// Line 615, Address: 0x1612cc, Func Offset: 0x32c
	// Line 616, Address: 0x1612e0, Func Offset: 0x340
	// Line 617, Address: 0x161304, Func Offset: 0x364
	// Line 618, Address: 0x16130c, Func Offset: 0x36c
	// Line 619, Address: 0x161314, Func Offset: 0x374
	// Line 624, Address: 0x161328, Func Offset: 0x388
	// Line 625, Address: 0x161334, Func Offset: 0x394
	// Func End, Address: 0x16134c, Func Offset: 0x3ac
}

// 
// Start address: 0x161350
void enNSECtrlDamage(EnLOCAL_DATA* dp)
{
	float d;
	// Line 629, Address: 0x161350, Func Offset: 0
	// Line 631, Address: 0x16135c, Func Offset: 0xc
	// Line 633, Address: 0x161394, Func Offset: 0x44
	// Line 634, Address: 0x1613a4, Func Offset: 0x54
	// Line 636, Address: 0x16141c, Func Offset: 0xcc
	// Line 637, Address: 0x161438, Func Offset: 0xe8
	// Line 638, Address: 0x161440, Func Offset: 0xf0
	// Line 640, Address: 0x16145c, Func Offset: 0x10c
	// Line 641, Address: 0x161494, Func Offset: 0x144
	// Line 642, Address: 0x1614bc, Func Offset: 0x16c
	// Line 643, Address: 0x1614c8, Func Offset: 0x178
	// Line 645, Address: 0x1614f4, Func Offset: 0x1a4
	// Line 646, Address: 0x161500, Func Offset: 0x1b0
	// Line 647, Address: 0x161508, Func Offset: 0x1b8
	// Line 649, Address: 0x161514, Func Offset: 0x1c4
	// Line 650, Address: 0x161520, Func Offset: 0x1d0
	// Line 651, Address: 0x161528, Func Offset: 0x1d8
	// Line 653, Address: 0x161530, Func Offset: 0x1e0
	// Line 654, Address: 0x161564, Func Offset: 0x214
	// Line 655, Address: 0x161578, Func Offset: 0x228
	// Line 656, Address: 0x161594, Func Offset: 0x244
	// Line 658, Address: 0x16159c, Func Offset: 0x24c
	// Line 660, Address: 0x1615a4, Func Offset: 0x254
	// Line 661, Address: 0x1615b8, Func Offset: 0x268
	// Line 662, Address: 0x1615cc, Func Offset: 0x27c
	// Line 666, Address: 0x1615d8, Func Offset: 0x288
	// Func End, Address: 0x1615e8, Func Offset: 0x298
}

// 
// Start address: 0x1615f0
void enNSECtrlDown(EnLOCAL_DATA* dp)
{
	// Line 670, Address: 0x1615f0, Func Offset: 0
	// Line 671, Address: 0x1615fc, Func Offset: 0xc
	// Line 673, Address: 0x161634, Func Offset: 0x44
	// Line 674, Address: 0x161644, Func Offset: 0x54
	// Line 675, Address: 0x161654, Func Offset: 0x64
	// Line 676, Address: 0x161680, Func Offset: 0x90
	// Line 677, Address: 0x1616a4, Func Offset: 0xb4
	// Line 678, Address: 0x1616b0, Func Offset: 0xc0
	// Line 679, Address: 0x1616dc, Func Offset: 0xec
	// Line 680, Address: 0x1616f0, Func Offset: 0x100
	// Line 681, Address: 0x1616f8, Func Offset: 0x108
	// Line 682, Address: 0x16170c, Func Offset: 0x11c
	// Line 684, Address: 0x161718, Func Offset: 0x128
	// Line 686, Address: 0x161720, Func Offset: 0x130
	// Line 687, Address: 0x16172c, Func Offset: 0x13c
	// Line 690, Address: 0x16175c, Func Offset: 0x16c
	// Line 692, Address: 0x16176c, Func Offset: 0x17c
	// Line 694, Address: 0x16177c, Func Offset: 0x18c
	// Line 695, Address: 0x161790, Func Offset: 0x1a0
	// Line 696, Address: 0x1617ac, Func Offset: 0x1bc
	// Line 697, Address: 0x1617b8, Func Offset: 0x1c8
	// Line 698, Address: 0x1617c0, Func Offset: 0x1d0
	// Line 700, Address: 0x1617e0, Func Offset: 0x1f0
	// Line 701, Address: 0x1617ec, Func Offset: 0x1fc
	// Line 702, Address: 0x1617f8, Func Offset: 0x208
	// Line 703, Address: 0x16180c, Func Offset: 0x21c
	// Line 704, Address: 0x161820, Func Offset: 0x230
	// Line 706, Address: 0x161828, Func Offset: 0x238
	// Line 707, Address: 0x161834, Func Offset: 0x244
	// Line 708, Address: 0x161844, Func Offset: 0x254
	// Line 709, Address: 0x161874, Func Offset: 0x284
	// Line 710, Address: 0x161890, Func Offset: 0x2a0
	// Line 711, Address: 0x1618a0, Func Offset: 0x2b0
	// Line 714, Address: 0x1618a8, Func Offset: 0x2b8
	// Line 715, Address: 0x1618c8, Func Offset: 0x2d8
	// Line 716, Address: 0x1618dc, Func Offset: 0x2ec
	// Line 717, Address: 0x1618e8, Func Offset: 0x2f8
	// Line 718, Address: 0x1618f4, Func Offset: 0x304
	// Line 719, Address: 0x161928, Func Offset: 0x338
	// Line 720, Address: 0x161934, Func Offset: 0x344
	// Line 721, Address: 0x161954, Func Offset: 0x364
	// Line 722, Address: 0x16198c, Func Offset: 0x39c
	// Line 724, Address: 0x1619d0, Func Offset: 0x3e0
	// Line 725, Address: 0x1619ec, Func Offset: 0x3fc
	// Line 726, Address: 0x1619f8, Func Offset: 0x408
	// Line 727, Address: 0x161a00, Func Offset: 0x410
	// Line 729, Address: 0x161a20, Func Offset: 0x430
	// Line 731, Address: 0x161a34, Func Offset: 0x444
	// Line 732, Address: 0x161a3c, Func Offset: 0x44c
	// Line 734, Address: 0x161a80, Func Offset: 0x490
	// Line 735, Address: 0x161aa0, Func Offset: 0x4b0
	// Line 736, Address: 0x161aa8, Func Offset: 0x4b8
	// Line 740, Address: 0x161abc, Func Offset: 0x4cc
	// Line 742, Address: 0x161ac4, Func Offset: 0x4d4
	// Line 743, Address: 0x161ad8, Func Offset: 0x4e8
	// Line 744, Address: 0x161ae4, Func Offset: 0x4f4
	// Line 745, Address: 0x161af0, Func Offset: 0x500
	// Line 747, Address: 0x161b04, Func Offset: 0x514
	// Line 749, Address: 0x161b0c, Func Offset: 0x51c
	// Line 750, Address: 0x161b20, Func Offset: 0x530
	// Line 751, Address: 0x161b2c, Func Offset: 0x53c
	// Line 752, Address: 0x161b38, Func Offset: 0x548
	// Line 753, Address: 0x161b4c, Func Offset: 0x55c
	// Line 754, Address: 0x161b60, Func Offset: 0x570
	// Line 756, Address: 0x161b68, Func Offset: 0x578
	// Line 757, Address: 0x161b78, Func Offset: 0x588
	// Line 758, Address: 0x161bb4, Func Offset: 0x5c4
	// Line 759, Address: 0x161bd8, Func Offset: 0x5e8
	// Line 760, Address: 0x161c00, Func Offset: 0x610
	// Line 762, Address: 0x161c14, Func Offset: 0x624
	// Line 763, Address: 0x161c1c, Func Offset: 0x62c
	// Line 764, Address: 0x161c38, Func Offset: 0x648
	// Line 765, Address: 0x161c48, Func Offset: 0x658
	// Line 766, Address: 0x161c54, Func Offset: 0x664
	// Line 769, Address: 0x161c5c, Func Offset: 0x66c
	// Line 770, Address: 0x161c70, Func Offset: 0x680
	// Line 771, Address: 0x161c7c, Func Offset: 0x68c
	// Line 773, Address: 0x161c84, Func Offset: 0x694
	// Line 774, Address: 0x161ca4, Func Offset: 0x6b4
	// Line 775, Address: 0x161cb8, Func Offset: 0x6c8
	// Line 776, Address: 0x161cc4, Func Offset: 0x6d4
	// Line 777, Address: 0x161cd0, Func Offset: 0x6e0
	// Line 778, Address: 0x161d04, Func Offset: 0x714
	// Line 781, Address: 0x161d10, Func Offset: 0x720
	// Line 783, Address: 0x161d18, Func Offset: 0x728
	// Line 784, Address: 0x161d2c, Func Offset: 0x73c
	// Line 785, Address: 0x161d38, Func Offset: 0x748
	// Line 786, Address: 0x161d44, Func Offset: 0x754
	// Line 787, Address: 0x161d5c, Func Offset: 0x76c
	// Line 788, Address: 0x161d74, Func Offset: 0x784
	// Line 789, Address: 0x161d88, Func Offset: 0x798
	// Line 791, Address: 0x161d90, Func Offset: 0x7a0
	// Line 792, Address: 0x161da0, Func Offset: 0x7b0
	// Line 793, Address: 0x161dac, Func Offset: 0x7bc
	// Line 794, Address: 0x161dc8, Func Offset: 0x7d8
	// Line 796, Address: 0x161ddc, Func Offset: 0x7ec
	// Line 798, Address: 0x161de4, Func Offset: 0x7f4
	// Line 799, Address: 0x161dfc, Func Offset: 0x80c
	// Line 800, Address: 0x161e08, Func Offset: 0x818
	// Line 801, Address: 0x161e14, Func Offset: 0x824
	// Line 802, Address: 0x161e28, Func Offset: 0x838
	// Line 803, Address: 0x161e3c, Func Offset: 0x84c
	// Line 805, Address: 0x161e44, Func Offset: 0x854
	// Line 806, Address: 0x161e58, Func Offset: 0x868
	// Line 807, Address: 0x161e64, Func Offset: 0x874
	// Line 808, Address: 0x161e84, Func Offset: 0x894
	// Line 809, Address: 0x161ea4, Func Offset: 0x8b4
	// Line 810, Address: 0x161eb8, Func Offset: 0x8c8
	// Line 811, Address: 0x161ec4, Func Offset: 0x8d4
	// Line 812, Address: 0x161ed0, Func Offset: 0x8e0
	// Line 813, Address: 0x161f04, Func Offset: 0x914
	// Line 817, Address: 0x161f10, Func Offset: 0x920
	// Func End, Address: 0x161f20, Func Offset: 0x930
}

// 
// Start address: 0x161f20
void enNSECtrlDead(EnLOCAL_DATA* dp)
{
	// Line 821, Address: 0x161f20, Func Offset: 0
	// Line 822, Address: 0x161f2c, Func Offset: 0xc
	// Line 824, Address: 0x161f44, Func Offset: 0x24
	// Line 825, Address: 0x161f50, Func Offset: 0x30
	// Line 826, Address: 0x161f5c, Func Offset: 0x3c
	// Line 827, Address: 0x161f68, Func Offset: 0x48
	// Line 828, Address: 0x161f74, Func Offset: 0x54
	// Line 830, Address: 0x161f84, Func Offset: 0x64
	// Line 831, Address: 0x161f90, Func Offset: 0x70
	// Func End, Address: 0x161fa0, Func Offset: 0x80
}

// 
// Start address: 0x161fa0
int enNSECanSeePlayer(EnLOCAL_DATA* dp, float angle)
{
	int wcd;
	float a;
	float dist;
	float* ppos;
	// Line 836, Address: 0x161fa0, Func Offset: 0
	// Line 837, Address: 0x161fb8, Func Offset: 0x18
	// Line 839, Address: 0x161fc8, Func Offset: 0x28
	// Line 840, Address: 0x161fd4, Func Offset: 0x34
	// Line 841, Address: 0x161ff4, Func Offset: 0x54
	// Line 842, Address: 0x162010, Func Offset: 0x70
	// Line 843, Address: 0x162030, Func Offset: 0x90
	// Line 845, Address: 0x16203c, Func Offset: 0x9c
	// Line 847, Address: 0x162048, Func Offset: 0xa8
	// Line 848, Address: 0x162054, Func Offset: 0xb4
	// Line 850, Address: 0x162074, Func Offset: 0xd4
	// Line 854, Address: 0x1620a0, Func Offset: 0x100
	// Line 857, Address: 0x1620cc, Func Offset: 0x12c
	// Line 858, Address: 0x1620e8, Func Offset: 0x148
	// Line 859, Address: 0x1620fc, Func Offset: 0x15c
	// Line 861, Address: 0x162160, Func Offset: 0x1c0
	// Line 863, Address: 0x16216c, Func Offset: 0x1cc
	// Line 865, Address: 0x1621c0, Func Offset: 0x220
	// Line 867, Address: 0x1621cc, Func Offset: 0x22c
	// Line 869, Address: 0x1621f8, Func Offset: 0x258
	// Line 870, Address: 0x162228, Func Offset: 0x288
	// Line 871, Address: 0x16222c, Func Offset: 0x28c
	// Func End, Address: 0x162244, Func Offset: 0x2a4
}

// 
// Start address: 0x162250
void enNSEAnimeSet(EnLOCAL_DATA* dp, int anim)
{
	// Line 875, Address: 0x162250, Func Offset: 0
	// Line 876, Address: 0x162268, Func Offset: 0x18
	// Line 877, Address: 0x162284, Func Offset: 0x34
	// Line 878, Address: 0x162290, Func Offset: 0x40
	// Line 881, Address: 0x162298, Func Offset: 0x48
	// Line 882, Address: 0x1622f0, Func Offset: 0xa0
	// Line 883, Address: 0x162310, Func Offset: 0xc0
	// Line 884, Address: 0x162340, Func Offset: 0xf0
	// Line 885, Address: 0x162348, Func Offset: 0xf8
	// Line 886, Address: 0x162374, Func Offset: 0x124
	// Line 887, Address: 0x162384, Func Offset: 0x134
	// Line 890, Address: 0x162390, Func Offset: 0x140
	// Func End, Address: 0x1623a8, Func Offset: 0x158
}

// 
// Start address: 0x1623b0
void enNSEAnimeReset(EnLOCAL_DATA* dp, int anim)
{
	// Line 894, Address: 0x1623b0, Func Offset: 0
	// Line 896, Address: 0x1623c8, Func Offset: 0x18
	// Line 897, Address: 0x162420, Func Offset: 0x70
	// Line 898, Address: 0x162440, Func Offset: 0x90
	// Line 899, Address: 0x162470, Func Offset: 0xc0
	// Line 900, Address: 0x162478, Func Offset: 0xc8
	// Line 901, Address: 0x1624a4, Func Offset: 0xf4
	// Line 902, Address: 0x1624b4, Func Offset: 0x104
	// Line 905, Address: 0x1624c0, Func Offset: 0x110
	// Func End, Address: 0x1624d8, Func Offset: 0x128
}

// 
// Start address: 0x1624e0
void enNSEAnimeExec(EnLOCAL_DATA* dp)
{
	int of;
	// Line 909, Address: 0x1624e0, Func Offset: 0
	// Line 910, Address: 0x1624f0, Func Offset: 0x10
	// Line 911, Address: 0x1624f8, Func Offset: 0x18
	// Line 912, Address: 0x162510, Func Offset: 0x30
	// Line 913, Address: 0x162544, Func Offset: 0x64
	// Line 915, Address: 0x16257c, Func Offset: 0x9c
	// Line 916, Address: 0x162588, Func Offset: 0xa8
	// Line 918, Address: 0x1625c8, Func Offset: 0xe8
	// Line 919, Address: 0x1625d4, Func Offset: 0xf4
	// Line 921, Address: 0x162614, Func Offset: 0x134
	// Line 922, Address: 0x162620, Func Offset: 0x140
	// Line 924, Address: 0x162644, Func Offset: 0x164
	// Line 926, Address: 0x162650, Func Offset: 0x170
	// Line 936, Address: 0x162720, Func Offset: 0x240
	// Line 943, Address: 0x162730, Func Offset: 0x250
	// Func End, Address: 0x162744, Func Offset: 0x264
}

// 
// Start address: 0x162750
void enNSEAutoRecovery(EnLOCAL_DATA* dp)
{
	float recover_rate[5];
	// Line 947, Address: 0x162750, Func Offset: 0
	// Line 948, Address: 0x16275c, Func Offset: 0xc
	// Line 955, Address: 0x162778, Func Offset: 0x28
	// Line 956, Address: 0x162798, Func Offset: 0x48
	// Func End, Address: 0x1627a8, Func Offset: 0x58
}

// 
// Start address: 0x1627b0
float enNSEGetWalkSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 960, Address: 0x1627b0, Func Offset: 0
	// Line 961, Address: 0x1627c0, Func Offset: 0x10
	// Line 968, Address: 0x1627dc, Func Offset: 0x2c
	// Line 969, Address: 0x1627f0, Func Offset: 0x40
	// Line 970, Address: 0x162818, Func Offset: 0x68
	// Line 972, Address: 0x162838, Func Offset: 0x88
	// Func End, Address: 0x16284c, Func Offset: 0x9c
}

// 
// Start address: 0x162850
float enNSEGetFeelRange()
{
	float feel_range[5];
	// Line 976, Address: 0x162850, Func Offset: 0
	// Line 977, Address: 0x162858, Func Offset: 0x8
	// Line 984, Address: 0x162874, Func Offset: 0x24
	// Line 985, Address: 0x162888, Func Offset: 0x38
	// Line 987, Address: 0x16289c, Func Offset: 0x4c
	// Line 988, Address: 0x1628b4, Func Offset: 0x64
	// Func End, Address: 0x1628c4, Func Offset: 0x74
}

// 
// Start address: 0x1628d0
float enNSEGetAttackProbability()
{
	float attack_rate[5];
	// Line 992, Address: 0x1628d0, Func Offset: 0
	// Line 993, Address: 0x1628d8, Func Offset: 0x8
	// Line 1000, Address: 0x1628f4, Func Offset: 0x24
	// Line 1001, Address: 0x162908, Func Offset: 0x38
	// Func End, Address: 0x162918, Func Offset: 0x48
}

// 
// Start address: 0x162920
float enNSEGetAttackSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1005, Address: 0x162920, Func Offset: 0
	// Line 1006, Address: 0x162930, Func Offset: 0x10
	// Line 1013, Address: 0x16294c, Func Offset: 0x2c
	// Line 1014, Address: 0x162960, Func Offset: 0x40
	// Line 1015, Address: 0x162988, Func Offset: 0x68
	// Line 1017, Address: 0x1629a8, Func Offset: 0x88
	// Func End, Address: 0x1629bc, Func Offset: 0x9c
}

// 
// Start address: 0x1629c0
float enNSEGetRotSpeed()
{
	float rot_rate[5];
	// Line 1021, Address: 0x1629c0, Func Offset: 0
	// Line 1022, Address: 0x1629c8, Func Offset: 0x8
	// Line 1029, Address: 0x1629e4, Func Offset: 0x24
	// Line 1030, Address: 0x162a08, Func Offset: 0x48
	// Func End, Address: 0x162a18, Func Offset: 0x58
}

// 
// Start address: 0x162a20
void enNSESetDownTime(EnLOCAL_DATA* dp)
{
	short down_time[5];
	// Line 1034, Address: 0x162a20, Func Offset: 0
	// Line 1035, Address: 0x162a2c, Func Offset: 0xc
	// Line 1042, Address: 0x162a48, Func Offset: 0x28
	// Line 1043, Address: 0x162a70, Func Offset: 0x50
	// Func End, Address: 0x162a80, Func Offset: 0x60
}

// 
// Start address: 0x162a80
void enNSESetMoveCount(EnLOCAL_DATA* dp)
{
	int n;
	// Line 1047, Address: 0x162a80, Func Offset: 0
	// Line 1049, Address: 0x162a94, Func Offset: 0x14
	// Line 1050, Address: 0x162af4, Func Offset: 0x74
	// Line 1051, Address: 0x162b04, Func Offset: 0x84
	// Func End, Address: 0x162b1c, Func Offset: 0x9c
}

