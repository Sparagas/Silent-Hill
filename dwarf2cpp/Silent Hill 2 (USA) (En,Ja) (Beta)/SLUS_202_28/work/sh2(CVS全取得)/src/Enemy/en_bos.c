typedef struct SubCharacter;
typedef struct EnLOCAL_DATA;
typedef struct EnBOS_DATA;
typedef struct EnSCU_DATA;
typedef struct shSkelton;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct EnPATH_DATA;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct EnANIME_DATA;
typedef struct EnRED_DATA;
typedef struct EnCOMMUNICATION;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct EnINS_DATA;
typedef struct EnIKE_DATA;
typedef struct EnARM_DATA;
typedef struct EnTYU_DATA;
typedef struct _CL_VHIT_WALL;
typedef struct EnNSE_DATA;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct _anon0;
typedef union _anon1;
typedef struct _CL_VHIT_RESULT;
typedef union _anon2;
typedef struct _anon3;
typedef struct EnMKN_DATA;
typedef struct _anon4;
typedef struct EnEDB_DATA;
typedef struct EnPAP_DATA;
typedef struct EnNIK_DATA;

typedef void(*type_0)(EnLOCAL_DATA*);
typedef void(*type_5)(EnLOCAL_DATA*);
typedef void(*type_27)(SubCharacter*);
typedef void(*type_28)(SubCharacter*);

typedef void(*type_1)(EnLOCAL_DATA*)[6];
typedef unsigned char type_2[4];
typedef float type_3[5];
typedef unsigned char type_4[14];
typedef void(*type_6)(EnLOCAL_DATA*)[6];
typedef unsigned char type_7[97];
typedef float type_8[4];
typedef float type_9[5];
typedef EnANIME_DATA type_10[10];
typedef unsigned char type_11[20];
typedef unsigned int type_12[255];
typedef unsigned int type_13[32];
typedef unsigned char type_14[4];
typedef char type_15[4];
typedef float type_16[4];
typedef unsigned char type_17[14];
typedef float type_18[4][4];
typedef char type_19[4];
typedef shAttackInfo type_20[66];
typedef char type_21[4];
typedef char type_22[3];
typedef char type_23[4];
typedef char type_24[4];
typedef unsigned char type_25[69];
typedef float type_26[4];

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
	_anon0 pos;
	_anon0 rot;
	_anon0 pos_spd;
	_anon0 rot_spd;
	_anon4 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon0 b_pos;
	_anon0 b_rot;
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon4 src_m;
	_anon0 src_t;
	_anon4 des_m;
	_anon0 des_t;
	_anon0 axis;
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

struct EnANIME_DATA
{
	unsigned short Anime;
	unsigned char Loop;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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
	_anon1 hit_check;
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

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon2 hobj;
};

union _anon2
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _anon3
{
	unsigned int flag[255];
	float time_deai;
	unsigned int enemy[32];
	unsigned char safe[4];
	char rotate[4];
	char guruguru[4];
	char cylinder[4];
	unsigned short clock;
	unsigned short carbon;
	char runaway[4];
	unsigned short hanging;
	short pad;
	char trunk[4];
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

struct _anon4
{
	float d[4][4];
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
EnANIME_DATA EnBOSAnime[10];
_anon3 game_flag;
float bed_pos[4];
float stair_pos[4];

void enBOSInitData(EnLOCAL_DATA* dp);
void enBOSCtrlMain(EnLOCAL_DATA* dp);
void enBOSCtrlAutomatic(EnLOCAL_DATA* dp);
void enBOSCtrlGoPlayable(EnLOCAL_DATA* dp);
void enBOSCtrlHand();
void enBOSCtrlApproach(EnLOCAL_DATA* dp);
void enBOSCtrlDistance(EnLOCAL_DATA* dp);
void enBOSCtrlGenerate(EnLOCAL_DATA* dp);
void enBOSCtrlAttack(EnLOCAL_DATA* dp);
void enBOSCtrlAttack2(EnLOCAL_DATA* dp);
void enBOSCtrlDead(EnLOCAL_DATA* dp);
int enBOSCheckPlayerLastBullet(EnLOCAL_DATA* dp);
int enBOSCanAttackPlayer(EnLOCAL_DATA* dp);
void enBOSResetSpeed(EnLOCAL_DATA* dp);
int enBOSCheckDamage(EnLOCAL_DATA* dp);
int enBOSCheckFloor(EnLOCAL_DATA* dp);
void enBOSCheckNearPlayer(EnLOCAL_DATA* dp);
void enBOSMoveExec(EnLOCAL_DATA* dp);
void enBOSAnimeSet(EnLOCAL_DATA* dp, int anim);
void enBOSAnimeExec(EnLOCAL_DATA* dp);
float enBOSGetMoveSpeed();
void enBOSSoundSigns(EnLOCAL_DATA* dp);

// 
// Start address: 0x13fa10
void enBOSInitData(EnLOCAL_DATA* dp)
{
	int mode;
	float vitarity[5];
	// Line 104, Address: 0x13fa10, Func Offset: 0
	// Line 105, Address: 0x13fa24, Func Offset: 0x14
	// Line 112, Address: 0x13fa40, Func Offset: 0x30
	// Line 114, Address: 0x13fa4c, Func Offset: 0x3c
	// Line 115, Address: 0x13fa60, Func Offset: 0x50
	// Line 116, Address: 0x13fa70, Func Offset: 0x60
	// Line 117, Address: 0x13fa9c, Func Offset: 0x8c
	// Line 118, Address: 0x13faa4, Func Offset: 0x94
	// Line 119, Address: 0x13fab0, Func Offset: 0xa0
	// Line 120, Address: 0x13fabc, Func Offset: 0xac
	// Line 121, Address: 0x13fac4, Func Offset: 0xb4
	// Line 122, Address: 0x13facc, Func Offset: 0xbc
	// Line 125, Address: 0x13fad4, Func Offset: 0xc4
	// Line 126, Address: 0x13fae8, Func Offset: 0xd8
	// Line 127, Address: 0x13faf8, Func Offset: 0xe8
	// Line 128, Address: 0x13fb20, Func Offset: 0x110
	// Line 129, Address: 0x13fb2c, Func Offset: 0x11c
	// Line 130, Address: 0x13fb34, Func Offset: 0x124
	// Line 131, Address: 0x13fb3c, Func Offset: 0x12c
	// Line 132, Address: 0x13fb40, Func Offset: 0x130
	// Func End, Address: 0x13fb58, Func Offset: 0x148
}

// 
// Start address: 0x13fb60
void enBOSCtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlBOSFunc)(EnLOCAL_DATA*)[6];
	// Line 138, Address: 0x13fb60, Func Offset: 0
	// Line 139, Address: 0x13fb68, Func Offset: 0x8
	// Line 148, Address: 0x13fb84, Func Offset: 0x24
	// Line 149, Address: 0x13fb9c, Func Offset: 0x3c
	// Func End, Address: 0x13fbac, Func Offset: 0x4c
}

// 
// Start address: 0x13fbb0
void enBOSCtrlAutomatic(EnLOCAL_DATA* dp)
{
	void(*enCtrlBOSSubFunc)(EnLOCAL_DATA*)[6];
	// Line 153, Address: 0x13fbb0, Func Offset: 0
	// Line 154, Address: 0x13fbc0, Func Offset: 0x10
	// Line 163, Address: 0x13fbdc, Func Offset: 0x2c
	// Line 165, Address: 0x13fbe8, Func Offset: 0x38
	// Line 168, Address: 0x13fc04, Func Offset: 0x54
	// Line 170, Address: 0x13fc10, Func Offset: 0x60
	// Line 171, Address: 0x13fc20, Func Offset: 0x70
	// Line 173, Address: 0x13fc2c, Func Offset: 0x7c
	// Line 175, Address: 0x13fc38, Func Offset: 0x88
	// Line 176, Address: 0x13fc48, Func Offset: 0x98
	// Line 177, Address: 0x13fc50, Func Offset: 0xa0
	// Line 178, Address: 0x13fc5c, Func Offset: 0xac
	// Line 180, Address: 0x13fc64, Func Offset: 0xb4
	// Func End, Address: 0x13fc78, Func Offset: 0xc8
}

// 
// Start address: 0x13fc80
void enBOSCtrlGoPlayable(EnLOCAL_DATA* dp)
{
	// Line 185, Address: 0x13fc80, Func Offset: 0
	// Line 186, Address: 0x13fc88, Func Offset: 0x8
	// Line 187, Address: 0x13fc90, Func Offset: 0x10
	// Func End, Address: 0x13fc98, Func Offset: 0x18
}

// 
// Start address: 0x13fca0
void enBOSCtrlHand()
{
	// Line 286, Address: 0x13fca0, Func Offset: 0
	// Func End, Address: 0x13fca8, Func Offset: 0x8
}

// 
// Start address: 0x13fcb0
void enBOSCtrlApproach(EnLOCAL_DATA* dp)
{
	float a;
	float vec[4];
	float pos[4];
	// Line 290, Address: 0x13fcb0, Func Offset: 0
	// Line 293, Address: 0x13fcc0, Func Offset: 0x10
	// Line 294, Address: 0x13fcd0, Func Offset: 0x20
	// Line 295, Address: 0x13fce8, Func Offset: 0x38
	// Line 297, Address: 0x13fcfc, Func Offset: 0x4c
	// Line 298, Address: 0x13fd18, Func Offset: 0x68
	// Line 300, Address: 0x13fd24, Func Offset: 0x74
	// Line 303, Address: 0x13fd30, Func Offset: 0x80
	// Line 304, Address: 0x13fd54, Func Offset: 0xa4
	// Line 305, Address: 0x13fd78, Func Offset: 0xc8
	// Line 306, Address: 0x13fd9c, Func Offset: 0xec
	// Line 308, Address: 0x13fdc0, Func Offset: 0x110
	// Line 309, Address: 0x13fdd4, Func Offset: 0x124
	// Line 310, Address: 0x13fde4, Func Offset: 0x134
	// Line 311, Address: 0x13fdfc, Func Offset: 0x14c
	// Line 313, Address: 0x13fe28, Func Offset: 0x178
	// Line 314, Address: 0x13fe34, Func Offset: 0x184
	// Line 316, Address: 0x13fe3c, Func Offset: 0x18c
	// Line 317, Address: 0x13fe50, Func Offset: 0x1a0
	// Line 318, Address: 0x13fe5c, Func Offset: 0x1ac
	// Line 319, Address: 0x13fe64, Func Offset: 0x1b4
	// Line 321, Address: 0x13fe70, Func Offset: 0x1c0
	// Line 323, Address: 0x13fe78, Func Offset: 0x1c8
	// Line 324, Address: 0x13feb0, Func Offset: 0x200
	// Line 325, Address: 0x13febc, Func Offset: 0x20c
	// Line 326, Address: 0x13fec8, Func Offset: 0x218
	// Line 331, Address: 0x13fecc, Func Offset: 0x21c
	// Line 335, Address: 0x13fed8, Func Offset: 0x228
	// Line 336, Address: 0x13fee4, Func Offset: 0x234
	// Func End, Address: 0x13fef8, Func Offset: 0x248
}

// 
// Start address: 0x13ff00
void enBOSCtrlDistance(EnLOCAL_DATA* dp)
{
	float a;
	float vec[4];
	float pos[4];
	// Line 340, Address: 0x13ff00, Func Offset: 0
	// Line 343, Address: 0x13ff10, Func Offset: 0x10
	// Line 344, Address: 0x13ff20, Func Offset: 0x20
	// Line 346, Address: 0x13ff4c, Func Offset: 0x4c
	// Line 348, Address: 0x13ff54, Func Offset: 0x54
	// Line 349, Address: 0x13ff5c, Func Offset: 0x5c
	// Line 351, Address: 0x13ff64, Func Offset: 0x64
	// Line 353, Address: 0x13ff78, Func Offset: 0x78
	// Line 354, Address: 0x13ff90, Func Offset: 0x90
	// Line 356, Address: 0x13ff9c, Func Offset: 0x9c
	// Line 357, Address: 0x13ffac, Func Offset: 0xac
	// Line 360, Address: 0x13ffb8, Func Offset: 0xb8
	// Line 361, Address: 0x13ffe0, Func Offset: 0xe0
	// Line 362, Address: 0x140004, Func Offset: 0x104
	// Line 363, Address: 0x140014, Func Offset: 0x114
	// Line 364, Address: 0x140024, Func Offset: 0x124
	// Line 365, Address: 0x14003c, Func Offset: 0x13c
	// Line 366, Address: 0x140064, Func Offset: 0x164
	// Line 367, Address: 0x14006c, Func Offset: 0x16c
	// Line 368, Address: 0x140070, Func Offset: 0x170
	// Line 369, Address: 0x14007c, Func Offset: 0x17c
	// Func End, Address: 0x140090, Func Offset: 0x190
}

// 
// Start address: 0x140090
void enBOSCtrlGenerate(EnLOCAL_DATA* dp)
{
	SubCharacter* tscp;
	float a;
	float vec[4];
	float pos[4];
	EnLOCAL_DATA* tp;
	int i;
	// Line 373, Address: 0x140090, Func Offset: 0
	// Line 378, Address: 0x1400b0, Func Offset: 0x20
	// Line 379, Address: 0x1400c4, Func Offset: 0x34
	// Line 380, Address: 0x1400c8, Func Offset: 0x38
	// Line 381, Address: 0x1400dc, Func Offset: 0x4c
	// Line 383, Address: 0x140114, Func Offset: 0x84
	// Line 384, Address: 0x14012c, Func Offset: 0x9c
	// Line 388, Address: 0x140138, Func Offset: 0xa8
	// Line 389, Address: 0x140150, Func Offset: 0xc0
	// Line 390, Address: 0x140158, Func Offset: 0xc8
	// Line 392, Address: 0x140160, Func Offset: 0xd0
	// Line 393, Address: 0x140170, Func Offset: 0xe0
	// Line 394, Address: 0x14017c, Func Offset: 0xec
	// Line 395, Address: 0x140180, Func Offset: 0xf0
	// Line 396, Address: 0x140194, Func Offset: 0x104
	// Line 397, Address: 0x1401a4, Func Offset: 0x114
	// Line 398, Address: 0x1401a8, Func Offset: 0x118
	// Line 399, Address: 0x1401b4, Func Offset: 0x124
	// Line 402, Address: 0x1401cc, Func Offset: 0x13c
	// Line 403, Address: 0x1401dc, Func Offset: 0x14c
	// Line 404, Address: 0x1401e8, Func Offset: 0x158
	// Line 405, Address: 0x1401ec, Func Offset: 0x15c
	// Line 406, Address: 0x1401fc, Func Offset: 0x16c
	// Line 408, Address: 0x140210, Func Offset: 0x180
	// Line 409, Address: 0x140214, Func Offset: 0x184
	// Line 410, Address: 0x14021c, Func Offset: 0x18c
	// Line 411, Address: 0x140228, Func Offset: 0x198
	// Line 412, Address: 0x140234, Func Offset: 0x1a4
	// Line 414, Address: 0x14023c, Func Offset: 0x1ac
	// Line 415, Address: 0x140248, Func Offset: 0x1b8
	// Line 416, Address: 0x140258, Func Offset: 0x1c8
	// Line 417, Address: 0x140268, Func Offset: 0x1d8
	// Line 418, Address: 0x140274, Func Offset: 0x1e4
	// Line 420, Address: 0x140280, Func Offset: 0x1f0
	// Line 421, Address: 0x140290, Func Offset: 0x200
	// Line 423, Address: 0x140298, Func Offset: 0x208
	// Line 425, Address: 0x1402a0, Func Offset: 0x210
	// Line 426, Address: 0x1402b0, Func Offset: 0x220
	// Line 427, Address: 0x1402c0, Func Offset: 0x230
	// Line 428, Address: 0x1402c8, Func Offset: 0x238
	// Line 430, Address: 0x1402d4, Func Offset: 0x244
	// Line 432, Address: 0x1402dc, Func Offset: 0x24c
	// Line 433, Address: 0x1402f4, Func Offset: 0x264
	// Line 434, Address: 0x140308, Func Offset: 0x278
	// Line 435, Address: 0x140314, Func Offset: 0x284
	// Line 437, Address: 0x14031c, Func Offset: 0x28c
	// Line 438, Address: 0x140328, Func Offset: 0x298
	// Line 443, Address: 0x140330, Func Offset: 0x2a0
	// Line 444, Address: 0x140354, Func Offset: 0x2c4
	// Line 445, Address: 0x140378, Func Offset: 0x2e8
	// Line 446, Address: 0x14039c, Func Offset: 0x30c
	// Line 448, Address: 0x1403c0, Func Offset: 0x330
	// Line 449, Address: 0x1403d4, Func Offset: 0x344
	// Line 450, Address: 0x1403e8, Func Offset: 0x358
	// Line 451, Address: 0x140400, Func Offset: 0x370
	// Line 452, Address: 0x14040c, Func Offset: 0x37c
	// Line 453, Address: 0x140414, Func Offset: 0x384
	// Line 454, Address: 0x140418, Func Offset: 0x388
	// Line 455, Address: 0x14041c, Func Offset: 0x38c
	// Line 456, Address: 0x140420, Func Offset: 0x390
	// Line 457, Address: 0x14042c, Func Offset: 0x39c
	// Func End, Address: 0x140450, Func Offset: 0x3c0
}

// 
// Start address: 0x140450
void enBOSCtrlAttack(EnLOCAL_DATA* dp)
{
	float vec[4];
	// Line 461, Address: 0x140450, Func Offset: 0
	// Line 463, Address: 0x140460, Func Offset: 0x10
	// Line 464, Address: 0x140470, Func Offset: 0x20
	// Line 466, Address: 0x140480, Func Offset: 0x30
	// Line 467, Address: 0x14048c, Func Offset: 0x3c
	// Line 468, Address: 0x140494, Func Offset: 0x44
	// Line 469, Address: 0x1404ac, Func Offset: 0x5c
	// Line 470, Address: 0x1404b8, Func Offset: 0x68
	// Line 473, Address: 0x1404c0, Func Offset: 0x70
	// Line 475, Address: 0x140504, Func Offset: 0xb4
	// Line 476, Address: 0x140510, Func Offset: 0xc0
	// Line 477, Address: 0x14051c, Func Offset: 0xcc
	// Line 478, Address: 0x140528, Func Offset: 0xd8
	// Line 479, Address: 0x140534, Func Offset: 0xe4
	// Line 480, Address: 0x14053c, Func Offset: 0xec
	// Line 481, Address: 0x140548, Func Offset: 0xf8
	// Line 483, Address: 0x140550, Func Offset: 0x100
	// Line 484, Address: 0x140574, Func Offset: 0x124
	// Line 485, Address: 0x140594, Func Offset: 0x144
	// Line 486, Address: 0x1405b0, Func Offset: 0x160
	// Line 487, Address: 0x1405b8, Func Offset: 0x168
	// Line 488, Address: 0x1405c8, Func Offset: 0x178
	// Line 489, Address: 0x1405d8, Func Offset: 0x188
	// Line 490, Address: 0x1405e8, Func Offset: 0x198
	// Line 491, Address: 0x1405f8, Func Offset: 0x1a8
	// Line 492, Address: 0x140600, Func Offset: 0x1b0
	// Line 493, Address: 0x140608, Func Offset: 0x1b8
	// Line 494, Address: 0x140618, Func Offset: 0x1c8
	// Line 495, Address: 0x140624, Func Offset: 0x1d4
	// Line 498, Address: 0x140630, Func Offset: 0x1e0
	// Line 501, Address: 0x140638, Func Offset: 0x1e8
	// Line 502, Address: 0x140648, Func Offset: 0x1f8
	// Line 503, Address: 0x140658, Func Offset: 0x208
	// Line 504, Address: 0x14066c, Func Offset: 0x21c
	// Line 506, Address: 0x140678, Func Offset: 0x228
	// Line 508, Address: 0x140680, Func Offset: 0x230
	// Line 509, Address: 0x140690, Func Offset: 0x240
	// Line 510, Address: 0x1406a0, Func Offset: 0x250
	// Line 511, Address: 0x1406b0, Func Offset: 0x260
	// Line 513, Address: 0x1406bc, Func Offset: 0x26c
	// Line 515, Address: 0x1406c4, Func Offset: 0x274
	// Line 516, Address: 0x1406d4, Func Offset: 0x284
	// Line 517, Address: 0x1406e0, Func Offset: 0x290
	// Line 518, Address: 0x1406f4, Func Offset: 0x2a4
	// Line 519, Address: 0x140700, Func Offset: 0x2b0
	// Line 523, Address: 0x14070c, Func Offset: 0x2bc
	// Func End, Address: 0x140720, Func Offset: 0x2d0
}

// 
// Start address: 0x140720
void enBOSCtrlAttack2(EnLOCAL_DATA* dp)
{
	// Line 527, Address: 0x140720, Func Offset: 0
	// Line 528, Address: 0x140730, Func Offset: 0x10
	// Line 529, Address: 0x140740, Func Offset: 0x20
	// Line 530, Address: 0x140758, Func Offset: 0x38
	// Line 531, Address: 0x140764, Func Offset: 0x44
	// Line 533, Address: 0x14076c, Func Offset: 0x4c
	// Line 535, Address: 0x14078c, Func Offset: 0x6c
	// Line 536, Address: 0x14079c, Func Offset: 0x7c
	// Line 537, Address: 0x1407a8, Func Offset: 0x88
	// Line 538, Address: 0x1407b4, Func Offset: 0x94
	// Line 540, Address: 0x1407c0, Func Offset: 0xa0
	// Line 541, Address: 0x1407d0, Func Offset: 0xb0
	// Line 542, Address: 0x1407e0, Func Offset: 0xc0
	// Line 543, Address: 0x1407e8, Func Offset: 0xc8
	// Line 546, Address: 0x1407f4, Func Offset: 0xd4
	// Line 547, Address: 0x140800, Func Offset: 0xe0
	// Func End, Address: 0x140814, Func Offset: 0xf4
}

// 
// Start address: 0x140820
void enBOSCtrlDead(EnLOCAL_DATA* dp)
{
	// Line 551, Address: 0x140820, Func Offset: 0
	// Line 552, Address: 0x140830, Func Offset: 0x10
	// Line 553, Address: 0x140844, Func Offset: 0x24
	// Line 554, Address: 0x140854, Func Offset: 0x34
	// Line 555, Address: 0x140864, Func Offset: 0x44
	// Line 556, Address: 0x14086c, Func Offset: 0x4c
	// Line 558, Address: 0x140884, Func Offset: 0x64
	// Line 560, Address: 0x14088c, Func Offset: 0x6c
	// Line 561, Address: 0x14089c, Func Offset: 0x7c
	// Line 562, Address: 0x1408a8, Func Offset: 0x88
	// Line 563, Address: 0x1408b0, Func Offset: 0x90
	// Line 564, Address: 0x1408c0, Func Offset: 0xa0
	// Line 565, Address: 0x1408cc, Func Offset: 0xac
	// Line 567, Address: 0x1408d8, Func Offset: 0xb8
	// Line 568, Address: 0x1408e0, Func Offset: 0xc0
	// Line 569, Address: 0x1408ec, Func Offset: 0xcc
	// Line 570, Address: 0x1408f8, Func Offset: 0xd8
	// Line 571, Address: 0x140900, Func Offset: 0xe0
	// Line 572, Address: 0x14090c, Func Offset: 0xec
	// Line 574, Address: 0x140918, Func Offset: 0xf8
	// Line 575, Address: 0x14092c, Func Offset: 0x10c
	// Line 576, Address: 0x140934, Func Offset: 0x114
	// Line 579, Address: 0x14094c, Func Offset: 0x12c
	// Func End, Address: 0x140960, Func Offset: 0x140
}

// 
// Start address: 0x140960
int enBOSCheckPlayerLastBullet(EnLOCAL_DATA* dp)
{
	EnLOCAL_DATA* tp;
	// Line 584, Address: 0x140960, Func Offset: 0
	// Line 586, Address: 0x140970, Func Offset: 0x10
	// Line 587, Address: 0x140980, Func Offset: 0x20
	// Line 589, Address: 0x14098c, Func Offset: 0x2c
	// Line 590, Address: 0x1409c0, Func Offset: 0x60
	// Line 591, Address: 0x1409c4, Func Offset: 0x64
	// Line 592, Address: 0x1409e8, Func Offset: 0x88
	// Line 594, Address: 0x1409f0, Func Offset: 0x90
	// Line 595, Address: 0x140a08, Func Offset: 0xa8
	// Line 596, Address: 0x140a0c, Func Offset: 0xac
	// Func End, Address: 0x140a20, Func Offset: 0xc0
}

// 
// Start address: 0x140a20
int enBOSCanAttackPlayer(EnLOCAL_DATA* dp)
{
	float a;
	float dist;
	// Line 601, Address: 0x140a20, Func Offset: 0
	// Line 603, Address: 0x140a38, Func Offset: 0x18
	// Line 604, Address: 0x140a48, Func Offset: 0x28
	// Line 605, Address: 0x140a6c, Func Offset: 0x4c
	// Line 608, Address: 0x140b18, Func Offset: 0xf8
	// Line 610, Address: 0x140b24, Func Offset: 0x104
	// Line 611, Address: 0x140b74, Func Offset: 0x154
	// Line 613, Address: 0x140b80, Func Offset: 0x160
	// Line 614, Address: 0x140b84, Func Offset: 0x164
	// Func End, Address: 0x140ba0, Func Offset: 0x180
}

// 
// Start address: 0x140ba0
void enBOSResetSpeed(EnLOCAL_DATA* dp)
{
	// Line 619, Address: 0x140ba0, Func Offset: 0
	// Line 620, Address: 0x140ba4, Func Offset: 0x4
	// Line 621, Address: 0x140bb0, Func Offset: 0x10
	// Line 622, Address: 0x140bb4, Func Offset: 0x14
	// Func End, Address: 0x140bbc, Func Offset: 0x1c
}

// 
// Start address: 0x140bc0
int enBOSCheckDamage(EnLOCAL_DATA* dp)
{
	EnLOCAL_DATA* tp;
	// Line 627, Address: 0x140bc0, Func Offset: 0
	// Line 628, Address: 0x140bd0, Func Offset: 0x10
	// Line 630, Address: 0x140bec, Func Offset: 0x2c
	// Line 631, Address: 0x140c18, Func Offset: 0x58
	// Line 634, Address: 0x140c2c, Func Offset: 0x6c
	// Line 636, Address: 0x140c48, Func Offset: 0x88
	// Line 638, Address: 0x140c60, Func Offset: 0xa0
	// Line 639, Address: 0x140c6c, Func Offset: 0xac
	// Line 640, Address: 0x140c78, Func Offset: 0xb8
	// Line 641, Address: 0x140c8c, Func Offset: 0xcc
	// Line 642, Address: 0x140ca0, Func Offset: 0xe0
	// Line 643, Address: 0x140ca4, Func Offset: 0xe4
	// Line 644, Address: 0x140cc8, Func Offset: 0x108
	// Line 646, Address: 0x140cd0, Func Offset: 0x110
	// Line 647, Address: 0x140cdc, Func Offset: 0x11c
	// Line 649, Address: 0x140ce8, Func Offset: 0x128
	// Line 650, Address: 0x140cf8, Func Offset: 0x138
	// Line 651, Address: 0x140cfc, Func Offset: 0x13c
	// Func End, Address: 0x140d10, Func Offset: 0x150
}

// 
// Start address: 0x140d10
int enBOSCheckFloor(EnLOCAL_DATA* dp)
{
	// Line 659, Address: 0x140d10, Func Offset: 0
	// Line 661, Address: 0x140d9c, Func Offset: 0x8c
	// Line 663, Address: 0x140da8, Func Offset: 0x98
	// Line 664, Address: 0x140dac, Func Offset: 0x9c
	// Func End, Address: 0x140db4, Func Offset: 0xa4
}

// 
// Start address: 0x140dc0
void enBOSCheckNearPlayer(EnLOCAL_DATA* dp)
{
	// Line 668, Address: 0x140dc0, Func Offset: 0
	// Line 669, Address: 0x140dc8, Func Offset: 0x8
	// Line 670, Address: 0x140de0, Func Offset: 0x20
	// Func End, Address: 0x140df0, Func Offset: 0x30
}

// 
// Start address: 0x140df0
void enBOSMoveExec(EnLOCAL_DATA* dp)
{
	EnPATH_DATA tpath;
	int mode;
	float s;
	float d;
	float add;
	// Line 674, Address: 0x140df0, Func Offset: 0
	// Line 676, Address: 0x140e0c, Func Offset: 0x1c
	// Line 678, Address: 0x140e10, Func Offset: 0x20
	// Line 679, Address: 0x140e1c, Func Offset: 0x2c
	// Line 680, Address: 0x140e3c, Func Offset: 0x4c
	// Line 681, Address: 0x140e4c, Func Offset: 0x5c
	// Line 682, Address: 0x140e64, Func Offset: 0x74
	// Line 683, Address: 0x140e7c, Func Offset: 0x8c
	// Line 684, Address: 0x140e80, Func Offset: 0x90
	// Line 685, Address: 0x140e90, Func Offset: 0xa0
	// Line 686, Address: 0x140eb0, Func Offset: 0xc0
	// Line 687, Address: 0x140eb4, Func Offset: 0xc4
	// Line 688, Address: 0x140ec4, Func Offset: 0xd4
	// Line 690, Address: 0x140ed4, Func Offset: 0xe4
	// Line 691, Address: 0x140edc, Func Offset: 0xec
	// Line 692, Address: 0x140ee4, Func Offset: 0xf4
	// Line 694, Address: 0x140efc, Func Offset: 0x10c
	// Line 696, Address: 0x140f14, Func Offset: 0x124
	// Line 697, Address: 0x140f24, Func Offset: 0x134
	// Line 698, Address: 0x140f30, Func Offset: 0x140
	// Line 699, Address: 0x140f48, Func Offset: 0x158
	// Line 705, Address: 0x140f54, Func Offset: 0x164
	// Line 707, Address: 0x141000, Func Offset: 0x210
	// Line 709, Address: 0x141080, Func Offset: 0x290
	// Line 711, Address: 0x141094, Func Offset: 0x2a4
	// Line 712, Address: 0x1410d8, Func Offset: 0x2e8
	// Line 714, Address: 0x1410e0, Func Offset: 0x2f0
	// Line 715, Address: 0x1410ec, Func Offset: 0x2fc
	// Func End, Address: 0x14110c, Func Offset: 0x31c
}

// 
// Start address: 0x141110
void enBOSAnimeSet(EnLOCAL_DATA* dp, int anim)
{
	// Line 719, Address: 0x141110, Func Offset: 0
	// Line 720, Address: 0x141128, Func Offset: 0x18
	// Line 721, Address: 0x141134, Func Offset: 0x24
	// Line 722, Address: 0x14113c, Func Offset: 0x2c
	// Line 725, Address: 0x141144, Func Offset: 0x34
	// Line 726, Address: 0x141184, Func Offset: 0x74
	// Line 727, Address: 0x1411a8, Func Offset: 0x98
	// Func End, Address: 0x1411c0, Func Offset: 0xb0
}

// 
// Start address: 0x1411c0
void enBOSAnimeExec(EnLOCAL_DATA* dp)
{
	// Line 739, Address: 0x1411c0, Func Offset: 0
	// Line 740, Address: 0x1411d0, Func Offset: 0x10
	// Line 741, Address: 0x1411e4, Func Offset: 0x24
	// Line 742, Address: 0x14120c, Func Offset: 0x4c
	// Line 743, Address: 0x14121c, Func Offset: 0x5c
	// Line 746, Address: 0x141244, Func Offset: 0x84
	// Line 747, Address: 0x14124c, Func Offset: 0x8c
	// Line 748, Address: 0x141254, Func Offset: 0x94
	// Line 751, Address: 0x14125c, Func Offset: 0x9c
	// Func End, Address: 0x141270, Func Offset: 0xb0
}

// 
// Start address: 0x141270
float enBOSGetMoveSpeed()
{
	float speed_rate[5];
	// Line 755, Address: 0x141270, Func Offset: 0
	// Line 756, Address: 0x141278, Func Offset: 0x8
	// Line 763, Address: 0x141294, Func Offset: 0x24
	// Line 764, Address: 0x1412b4, Func Offset: 0x44
	// Func End, Address: 0x1412c4, Func Offset: 0x54
}

// 
// Start address: 0x1412d0
void enBOSSoundSigns(EnLOCAL_DATA* dp)
{
	int signs;
	// Line 768, Address: 0x1412d0, Func Offset: 0
	// Line 770, Address: 0x1412e0, Func Offset: 0x10
	// Line 771, Address: 0x14130c, Func Offset: 0x3c
	// Line 773, Address: 0x14131c, Func Offset: 0x4c
	// Line 774, Address: 0x14132c, Func Offset: 0x5c
	// Line 775, Address: 0x14133c, Func Offset: 0x6c
	// Line 777, Address: 0x141340, Func Offset: 0x70
	// Line 778, Address: 0x141348, Func Offset: 0x78
	// Line 779, Address: 0x141368, Func Offset: 0x98
	// Line 780, Address: 0x141370, Func Offset: 0xa0
	// Line 784, Address: 0x141390, Func Offset: 0xc0
	// Func End, Address: 0x1413a4, Func Offset: 0xd4
}

