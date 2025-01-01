typedef struct EnLOCAL_DATA;
typedef struct SubCharacter;
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
typedef struct EnFORBIDDENAREA;
typedef struct EnINS_DATA;
typedef struct EnIKE_DATA;
typedef struct EnSOUND_QUEUE;
typedef struct EnLOCAL_WORK;
typedef struct _anon0;
typedef struct EnARM_DATA;
typedef struct EnTYU_DATA;
typedef struct _CL_VHIT_WALL;
typedef struct EnNSE_DATA;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct _anon1;
typedef union _anon2;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;
typedef struct EnMKN_DATA;
typedef struct _anon4;
typedef struct EnEDB_DATA;
typedef struct EnPAP_DATA;
typedef struct EnNIK_DATA;

typedef void(*type_25)(EnLOCAL_DATA*);
typedef void(*type_33)(EnLOCAL_DATA*);
typedef void(*type_39)(SubCharacter*);
typedef void(*type_40)(SubCharacter*);

typedef unsigned char type_0[4];
typedef float type_1[5];
typedef float type_2[5];
typedef float type_3[5];
typedef unsigned char type_4[14];
typedef char type_5[4];
typedef float type_6[5];
typedef unsigned char type_7[97];
typedef float type_8[4];
typedef EnLOCAL_DATA type_9[32];
typedef unsigned int type_10[255];
typedef EnCOMMUNICATION type_11[8];
typedef int type_12[5];
typedef unsigned int type_13[32];
typedef EnFORBIDDENAREA type_14[2];
typedef unsigned char type_15[4];
typedef EnSOUND_QUEUE type_16[8];
typedef EnANIME_DATA type_17[16];
typedef char type_18[4];
typedef char type_19[4];
typedef char type_20[4];
typedef unsigned char type_21[20];
typedef char type_22[4];
typedef float type_23[5];
typedef char type_24[4];
typedef void(*type_26)(EnLOCAL_DATA*)[6];
typedef float type_27[4][2];
typedef float type_28[5];
typedef float type_29[4];
typedef unsigned char type_30[14];
typedef float type_31[4][4];
typedef shAttackInfo type_32[66];
typedef void(*type_34)(EnLOCAL_DATA*)[11];
typedef char type_35[3];
typedef float type_36[4][13];
typedef unsigned char type_37[69];
typedef float type_38[4];

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
	_anon1 pos;
	_anon1 rot;
	_anon1 pos_spd;
	_anon1 rot_spd;
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
	_anon1 src_t;
	_anon4 des_m;
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

struct EnFORBIDDENAREA
{
	float x0;
	float z0;
	float x1;
	float z1;
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

struct EnSOUND_QUEUE
{
	SubCharacter* scp;
	int num;
	float vol;
	float time;
};

struct EnLOCAL_WORK
{
	EnLOCAL_DATA Data[32];
	EnCOMMUNICATION Communication[8];
	EnFORBIDDENAREA ForbiddenArea[2];
	EnSOUND_QUEUE SoundQueue[8];
	int CommunicationNum;
	int ForbiddenNum;
	int SoundQueueNum;
	unsigned int Status;
	EnLOCAL_DATA* This;
	_CL_VHIT_RESULT HitResult;
	int Max3DSounds;
	int ActiveEnemy;
};

struct _anon0
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
	_anon2 hit_check;
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

struct _anon1
{
	float x;
	float y;
	float z;
	float w;
};

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon3 hobj;
};

union _anon3
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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
EnANIME_DATA EnONIAnime[16];
float check_point[4][13];
char warp_check[4];
float suicide_point[4][2];
EnLOCAL_WORK enLocalWork;
_anon0 game_flag;

void enONIInitData(EnLOCAL_DATA* dp);
void enONICtrlMain(EnLOCAL_DATA* dp);
void enONICtrlAutomatic(EnLOCAL_DATA* dp);
void enONICtrlSleep(EnLOCAL_DATA* dp);
void enONICtrlGoPlayable(EnLOCAL_DATA* dp);
void enONICtrlEvent(EnLOCAL_DATA* dp);
void enONICtrlEventChase(EnLOCAL_DATA* dp);
void enONICtrlHand();
void enONICtrlWander(EnLOCAL_DATA* dp);
void enONICtrlChase(EnLOCAL_DATA* dp);
void enONICtrlBothAttack(EnLOCAL_DATA* dp);
void enONICtrlWait(EnLOCAL_DATA* dp);
void enONICtrlBerserk(EnLOCAL_DATA* dp);
void enONICtrlAttack(EnLOCAL_DATA* dp);
void enONICtrlAttack3(EnLOCAL_DATA* dp);
void enONICtrlDamage(EnLOCAL_DATA* dp);
void enONICtrlConfuse(EnLOCAL_DATA* dp);
void enONICtrlSuicide(EnLOCAL_DATA* dp);
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
void enONISoundLife(EnLOCAL_DATA* dp);

// 
// Start address: 0x228b00
void enONIInitData(EnLOCAL_DATA* dp)
{
	EnLOCAL_DATA* tp;
	int n;
	int i;
	float hp;
	int mode;
	float endurance[5];
	float vitarity[5];
	// Line 142, Address: 0x228b00, Func Offset: 0
	// Line 143, Address: 0x228b18, Func Offset: 0x18
	// Line 150, Address: 0x228b34, Func Offset: 0x34
	// Line 157, Address: 0x228b50, Func Offset: 0x50
	// Line 160, Address: 0x228b5c, Func Offset: 0x5c
	// Line 161, Address: 0x228b60, Func Offset: 0x60
	// Line 162, Address: 0x228b68, Func Offset: 0x68
	// Line 163, Address: 0x228b70, Func Offset: 0x70
	// Line 165, Address: 0x228ba0, Func Offset: 0xa0
	// Line 167, Address: 0x228bd4, Func Offset: 0xd4
	// Line 168, Address: 0x228c04, Func Offset: 0x104
	// Line 169, Address: 0x228c0c, Func Offset: 0x10c
	// Line 170, Address: 0x228c10, Func Offset: 0x110
	// Line 171, Address: 0x228c14, Func Offset: 0x114
	// Line 172, Address: 0x228c20, Func Offset: 0x120
	// Line 174, Address: 0x228c2c, Func Offset: 0x12c
	// Line 176, Address: 0x228c48, Func Offset: 0x148
	// Line 178, Address: 0x228c50, Func Offset: 0x150
	// Line 179, Address: 0x228c5c, Func Offset: 0x15c
	// Line 180, Address: 0x228c64, Func Offset: 0x164
	// Line 183, Address: 0x228c70, Func Offset: 0x170
	// Line 184, Address: 0x228c74, Func Offset: 0x174
	// Line 185, Address: 0x228c7c, Func Offset: 0x17c
	// Line 186, Address: 0x228c88, Func Offset: 0x188
	// Line 187, Address: 0x228ca0, Func Offset: 0x1a0
	// Line 188, Address: 0x228ca4, Func Offset: 0x1a4
	// Line 189, Address: 0x228ca8, Func Offset: 0x1a8
	// Line 190, Address: 0x228cac, Func Offset: 0x1ac
	// Line 191, Address: 0x228cb0, Func Offset: 0x1b0
	// Line 192, Address: 0x228cc4, Func Offset: 0x1c4
	// Line 194, Address: 0x228cc8, Func Offset: 0x1c8
	// Line 195, Address: 0x228cd8, Func Offset: 0x1d8
	// Line 197, Address: 0x228ce0, Func Offset: 0x1e0
	// Line 198, Address: 0x228cec, Func Offset: 0x1ec
	// Line 199, Address: 0x228cf0, Func Offset: 0x1f0
	// Line 201, Address: 0x228cf8, Func Offset: 0x1f8
	// Line 202, Address: 0x228d00, Func Offset: 0x200
	// Line 203, Address: 0x228d04, Func Offset: 0x204
	// Line 204, Address: 0x228d10, Func Offset: 0x210
	// Line 207, Address: 0x228d1c, Func Offset: 0x21c
	// Line 208, Address: 0x228d38, Func Offset: 0x238
	// Line 209, Address: 0x228d4c, Func Offset: 0x24c
	// Line 211, Address: 0x228d58, Func Offset: 0x258
	// Func End, Address: 0x228d74, Func Offset: 0x274
}

// 
// Start address: 0x228d80
void enONICtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlONIFunc)(EnLOCAL_DATA*)[6];
	// Line 216, Address: 0x228d80, Func Offset: 0
	// Line 217, Address: 0x228d88, Func Offset: 0x8
	// Line 226, Address: 0x228da4, Func Offset: 0x24
	// Line 227, Address: 0x228dbc, Func Offset: 0x3c
	// Func End, Address: 0x228dcc, Func Offset: 0x4c
}

// 
// Start address: 0x228dd0
void enONICtrlAutomatic(EnLOCAL_DATA* dp)
{
	void(*enCtrlONISubFunc)(EnLOCAL_DATA*)[11];
	// Line 231, Address: 0x228dd0, Func Offset: 0
	// Line 232, Address: 0x228de0, Func Offset: 0x10
	// Line 246, Address: 0x228e0c, Func Offset: 0x3c
	// Line 248, Address: 0x228e18, Func Offset: 0x48
	// Line 250, Address: 0x228e24, Func Offset: 0x54
	// Line 252, Address: 0x228e40, Func Offset: 0x70
	// Line 253, Address: 0x228e54, Func Offset: 0x84
	// Line 254, Address: 0x228e8c, Func Offset: 0xbc
	// Line 258, Address: 0x228e90, Func Offset: 0xc0
	// Line 260, Address: 0x228e9c, Func Offset: 0xcc
	// Line 261, Address: 0x228ea8, Func Offset: 0xd8
	// Line 263, Address: 0x228ecc, Func Offset: 0xfc
	// Line 265, Address: 0x228ed8, Func Offset: 0x108
	// Func End, Address: 0x228eec, Func Offset: 0x11c
}

// 
// Start address: 0x228ef0
void enONICtrlSleep(EnLOCAL_DATA* dp)
{
	// Line 269, Address: 0x228ef0, Func Offset: 0
	// Line 270, Address: 0x228f00, Func Offset: 0x10
	// Line 271, Address: 0x228f10, Func Offset: 0x20
	// Line 272, Address: 0x228f1c, Func Offset: 0x2c
	// Line 273, Address: 0x228f24, Func Offset: 0x34
	// Line 275, Address: 0x228f28, Func Offset: 0x38
	// Func End, Address: 0x228f3c, Func Offset: 0x4c
}

// 
// Start address: 0x228f40
void enONICtrlGoPlayable(EnLOCAL_DATA* dp)
{
	// Line 280, Address: 0x228f40, Func Offset: 0
	// Line 281, Address: 0x228f48, Func Offset: 0x8
	// Line 282, Address: 0x228f50, Func Offset: 0x10
	// Func End, Address: 0x228f58, Func Offset: 0x18
}

// 
// Start address: 0x228f60
void enONICtrlEvent(EnLOCAL_DATA* dp)
{
	int n;
	// Line 286, Address: 0x228f60, Func Offset: 0
	// Line 288, Address: 0x228f70, Func Offset: 0x10
	// Line 289, Address: 0x228f7c, Func Offset: 0x1c
	// Line 291, Address: 0x228f9c, Func Offset: 0x3c
	// Line 292, Address: 0x228fa8, Func Offset: 0x48
	// Line 294, Address: 0x228fb0, Func Offset: 0x50
	// Line 295, Address: 0x228fb4, Func Offset: 0x54
	// Line 296, Address: 0x228fd4, Func Offset: 0x74
	// Line 298, Address: 0x228fd8, Func Offset: 0x78
	// Line 299, Address: 0x228fdc, Func Offset: 0x7c
	// Line 303, Address: 0x228fe0, Func Offset: 0x80
	// Line 305, Address: 0x228fec, Func Offset: 0x8c
	// Line 306, Address: 0x228ff8, Func Offset: 0x98
	// Func End, Address: 0x22900c, Func Offset: 0xac
}

// 
// Start address: 0x229010
void enONICtrlEventChase(EnLOCAL_DATA* dp)
{
	float d2;
	float d1;
	float* tpos;
	// Line 310, Address: 0x229010, Func Offset: 0
	// Line 313, Address: 0x229028, Func Offset: 0x18
	// Line 314, Address: 0x229038, Func Offset: 0x28
	// Line 322, Address: 0x229078, Func Offset: 0x68
	// Line 325, Address: 0x229084, Func Offset: 0x74
	// Line 327, Address: 0x229090, Func Offset: 0x80
	// Line 329, Address: 0x2290bc, Func Offset: 0xac
	// Line 330, Address: 0x2290c8, Func Offset: 0xb8
	// Line 331, Address: 0x2290dc, Func Offset: 0xcc
	// Line 332, Address: 0x2290e4, Func Offset: 0xd4
	// Line 333, Address: 0x2290ec, Func Offset: 0xdc
	// Line 334, Address: 0x2290f8, Func Offset: 0xe8
	// Line 336, Address: 0x229100, Func Offset: 0xf0
	// Line 337, Address: 0x229114, Func Offset: 0x104
	// Line 338, Address: 0x22912c, Func Offset: 0x11c
	// Line 339, Address: 0x229144, Func Offset: 0x134
	// Line 340, Address: 0x229150, Func Offset: 0x140
	// Line 341, Address: 0x229160, Func Offset: 0x150
	// Line 342, Address: 0x229188, Func Offset: 0x178
	// Line 343, Address: 0x2291a4, Func Offset: 0x194
	// Line 344, Address: 0x2291b0, Func Offset: 0x1a0
	// Line 345, Address: 0x2291e0, Func Offset: 0x1d0
	// Line 348, Address: 0x2291e4, Func Offset: 0x1d4
	// Line 350, Address: 0x229228, Func Offset: 0x218
	// Line 352, Address: 0x229248, Func Offset: 0x238
	// Line 355, Address: 0x2292a4, Func Offset: 0x294
	// Line 356, Address: 0x2292b4, Func Offset: 0x2a4
	// Line 357, Address: 0x2292c0, Func Offset: 0x2b0
	// Line 358, Address: 0x2292dc, Func Offset: 0x2cc
	// Line 359, Address: 0x2292e8, Func Offset: 0x2d8
	// Line 361, Address: 0x2292f4, Func Offset: 0x2e4
	// Line 364, Address: 0x2292fc, Func Offset: 0x2ec
	// Line 365, Address: 0x22930c, Func Offset: 0x2fc
	// Line 366, Address: 0x229324, Func Offset: 0x314
	// Line 367, Address: 0x229334, Func Offset: 0x324
	// Line 371, Address: 0x229338, Func Offset: 0x328
	// Func End, Address: 0x229354, Func Offset: 0x344
}

// 
// Start address: 0x229360
void enONICtrlHand()
{
	// Line 458, Address: 0x229360, Func Offset: 0
	// Func End, Address: 0x229368, Func Offset: 0x8
}

// 
// Start address: 0x229370
void enONICtrlWander(EnLOCAL_DATA* dp)
{
	int t;
	float vec[4];
	// Line 462, Address: 0x229370, Func Offset: 0
	// Line 465, Address: 0x229380, Func Offset: 0x10
	// Line 466, Address: 0x229390, Func Offset: 0x20
	// Line 467, Address: 0x2293a4, Func Offset: 0x34
	// Line 468, Address: 0x2293b0, Func Offset: 0x40
	// Line 470, Address: 0x2293b8, Func Offset: 0x48
	// Line 471, Address: 0x2293cc, Func Offset: 0x5c
	// Line 472, Address: 0x2293d8, Func Offset: 0x68
	// Line 475, Address: 0x2293e0, Func Offset: 0x70
	// Line 476, Address: 0x2293ec, Func Offset: 0x7c
	// Line 477, Address: 0x2293fc, Func Offset: 0x8c
	// Line 478, Address: 0x229410, Func Offset: 0xa0
	// Line 480, Address: 0x22941c, Func Offset: 0xac
	// Line 482, Address: 0x229428, Func Offset: 0xb8
	// Line 483, Address: 0x229448, Func Offset: 0xd8
	// Line 484, Address: 0x229464, Func Offset: 0xf4
	// Line 485, Address: 0x229478, Func Offset: 0x108
	// Line 486, Address: 0x229490, Func Offset: 0x120
	// Line 488, Address: 0x22949c, Func Offset: 0x12c
	// Line 489, Address: 0x2294a8, Func Offset: 0x138
	// Line 490, Address: 0x2294b4, Func Offset: 0x144
	// Line 491, Address: 0x2294c0, Func Offset: 0x150
	// Line 492, Address: 0x2294d4, Func Offset: 0x164
	// Line 493, Address: 0x2294dc, Func Offset: 0x16c
	// Line 494, Address: 0x2294e0, Func Offset: 0x170
	// Func End, Address: 0x2294f4, Func Offset: 0x184
}

// 
// Start address: 0x229500
void enONICtrlChase(EnLOCAL_DATA* dp)
{
	int t;
	// Line 498, Address: 0x229500, Func Offset: 0
	// Line 500, Address: 0x229514, Func Offset: 0x14
	// Line 501, Address: 0x229524, Func Offset: 0x24
	// Line 502, Address: 0x229538, Func Offset: 0x38
	// Line 503, Address: 0x229544, Func Offset: 0x44
	// Line 505, Address: 0x22954c, Func Offset: 0x4c
	// Line 506, Address: 0x229560, Func Offset: 0x60
	// Line 507, Address: 0x22956c, Func Offset: 0x6c
	// Line 510, Address: 0x229574, Func Offset: 0x74
	// Line 511, Address: 0x229580, Func Offset: 0x80
	// Line 512, Address: 0x229590, Func Offset: 0x90
	// Line 513, Address: 0x2295a4, Func Offset: 0xa4
	// Line 515, Address: 0x2295b0, Func Offset: 0xb0
	// Line 516, Address: 0x2295d4, Func Offset: 0xd4
	// Line 517, Address: 0x2295ec, Func Offset: 0xec
	// Line 518, Address: 0x2295f8, Func Offset: 0xf8
	// Line 520, Address: 0x229650, Func Offset: 0x150
	// Line 522, Address: 0x2296b4, Func Offset: 0x1b4
	// Line 525, Address: 0x2296d8, Func Offset: 0x1d8
	// Line 526, Address: 0x2296e4, Func Offset: 0x1e4
	// Line 527, Address: 0x2296f0, Func Offset: 0x1f0
	// Line 528, Address: 0x2296fc, Func Offset: 0x1fc
	// Line 529, Address: 0x229710, Func Offset: 0x210
	// Line 530, Address: 0x22971c, Func Offset: 0x21c
	// Line 531, Address: 0x229738, Func Offset: 0x238
	// Line 532, Address: 0x229740, Func Offset: 0x240
	// Line 534, Address: 0x229784, Func Offset: 0x284
	// Line 536, Address: 0x229790, Func Offset: 0x290
	// Func End, Address: 0x2297a8, Func Offset: 0x2a8
}

// 
// Start address: 0x2297b0
void enONICtrlBothAttack(EnLOCAL_DATA* dp)
{
	int t;
	float a2;
	float a1;
	float a;
	float vec[4];
	// Line 540, Address: 0x2297b0, Func Offset: 0
	// Line 544, Address: 0x2297c8, Func Offset: 0x18
	// Line 545, Address: 0x2297d8, Func Offset: 0x28
	// Line 546, Address: 0x2297ec, Func Offset: 0x3c
	// Line 547, Address: 0x2297f8, Func Offset: 0x48
	// Line 549, Address: 0x229800, Func Offset: 0x50
	// Line 550, Address: 0x229814, Func Offset: 0x64
	// Line 551, Address: 0x229820, Func Offset: 0x70
	// Line 554, Address: 0x229828, Func Offset: 0x78
	// Line 555, Address: 0x229838, Func Offset: 0x88
	// Line 556, Address: 0x229844, Func Offset: 0x94
	// Line 559, Address: 0x229878, Func Offset: 0xc8
	// Line 560, Address: 0x229884, Func Offset: 0xd4
	// Line 561, Address: 0x229890, Func Offset: 0xe0
	// Line 562, Address: 0x2298e0, Func Offset: 0x130
	// Line 563, Address: 0x2298ec, Func Offset: 0x13c
	// Line 564, Address: 0x2298f4, Func Offset: 0x144
	// Line 566, Address: 0x229900, Func Offset: 0x150
	// Line 567, Address: 0x229908, Func Offset: 0x158
	// Line 568, Address: 0x229914, Func Offset: 0x164
	// Line 569, Address: 0x229920, Func Offset: 0x170
	// Line 570, Address: 0x229928, Func Offset: 0x178
	// Line 571, Address: 0x229948, Func Offset: 0x198
	// Line 572, Address: 0x229954, Func Offset: 0x1a4
	// Line 574, Address: 0x22995c, Func Offset: 0x1ac
	// Line 575, Address: 0x229974, Func Offset: 0x1c4
	// Line 576, Address: 0x229980, Func Offset: 0x1d0
	// Line 578, Address: 0x229988, Func Offset: 0x1d8
	// Line 579, Address: 0x229998, Func Offset: 0x1e8
	// Line 580, Address: 0x2299a8, Func Offset: 0x1f8
	// Line 581, Address: 0x2299b8, Func Offset: 0x208
	// Line 583, Address: 0x2299fc, Func Offset: 0x24c
	// Line 584, Address: 0x229a1c, Func Offset: 0x26c
	// Line 585, Address: 0x229a28, Func Offset: 0x278
	// Line 586, Address: 0x229a30, Func Offset: 0x280
	// Line 588, Address: 0x229a38, Func Offset: 0x288
	// Line 589, Address: 0x229a48, Func Offset: 0x298
	// Line 590, Address: 0x229a54, Func Offset: 0x2a4
	// Line 592, Address: 0x229a60, Func Offset: 0x2b0
	// Line 594, Address: 0x229ab0, Func Offset: 0x300
	// Line 595, Address: 0x229ad0, Func Offset: 0x320
	// Line 596, Address: 0x229ae4, Func Offset: 0x334
	// Line 597, Address: 0x229afc, Func Offset: 0x34c
	// Line 598, Address: 0x229b08, Func Offset: 0x358
	// Line 599, Address: 0x229b2c, Func Offset: 0x37c
	// Line 601, Address: 0x229b34, Func Offset: 0x384
	// Line 603, Address: 0x229b3c, Func Offset: 0x38c
	// Line 604, Address: 0x229b54, Func Offset: 0x3a4
	// Line 605, Address: 0x229b74, Func Offset: 0x3c4
	// Line 607, Address: 0x229b90, Func Offset: 0x3e0
	// Line 609, Address: 0x229b98, Func Offset: 0x3e8
	// Line 611, Address: 0x229bb8, Func Offset: 0x408
	// Line 613, Address: 0x229bc0, Func Offset: 0x410
	// Line 614, Address: 0x229bd8, Func Offset: 0x428
	// Line 615, Address: 0x229be4, Func Offset: 0x434
	// Line 617, Address: 0x229bec, Func Offset: 0x43c
	// Line 618, Address: 0x229c04, Func Offset: 0x454
	// Line 619, Address: 0x229c28, Func Offset: 0x478
	// Line 620, Address: 0x229c30, Func Offset: 0x480
	// Line 622, Address: 0x229c54, Func Offset: 0x4a4
	// Line 623, Address: 0x229c64, Func Offset: 0x4b4
	// Line 625, Address: 0x229c6c, Func Offset: 0x4bc
	// Line 627, Address: 0x229c74, Func Offset: 0x4c4
	// Line 628, Address: 0x229c8c, Func Offset: 0x4dc
	// Line 630, Address: 0x229cbc, Func Offset: 0x50c
	// Line 631, Address: 0x229ccc, Func Offset: 0x51c
	// Line 635, Address: 0x229cd4, Func Offset: 0x524
	// Func End, Address: 0x229cf0, Func Offset: 0x540
}

// 
// Start address: 0x229cf0
void enONICtrlWait(EnLOCAL_DATA* dp)
{
	int t;
	// Line 639, Address: 0x229cf0, Func Offset: 0
	// Line 641, Address: 0x229d04, Func Offset: 0x14
	// Line 642, Address: 0x229d14, Func Offset: 0x24
	// Line 643, Address: 0x229d28, Func Offset: 0x38
	// Line 644, Address: 0x229d34, Func Offset: 0x44
	// Line 646, Address: 0x229d3c, Func Offset: 0x4c
	// Line 647, Address: 0x229d50, Func Offset: 0x60
	// Line 648, Address: 0x229d5c, Func Offset: 0x6c
	// Line 651, Address: 0x229d64, Func Offset: 0x74
	// Line 653, Address: 0x229d70, Func Offset: 0x80
	// Line 654, Address: 0x229d7c, Func Offset: 0x8c
	// Line 655, Address: 0x229d88, Func Offset: 0x98
	// Line 656, Address: 0x229dd8, Func Offset: 0xe8
	// Line 657, Address: 0x229de4, Func Offset: 0xf4
	// Line 658, Address: 0x229dec, Func Offset: 0xfc
	// Line 660, Address: 0x229df8, Func Offset: 0x108
	// Line 661, Address: 0x229e00, Func Offset: 0x110
	// Line 662, Address: 0x229e0c, Func Offset: 0x11c
	// Line 663, Address: 0x229e18, Func Offset: 0x128
	// Line 664, Address: 0x229e20, Func Offset: 0x130
	// Line 665, Address: 0x229e44, Func Offset: 0x154
	// Line 666, Address: 0x229e50, Func Offset: 0x160
	// Line 667, Address: 0x229e58, Func Offset: 0x168
	// Line 669, Address: 0x229ea4, Func Offset: 0x1b4
	// Line 670, Address: 0x229eb0, Func Offset: 0x1c0
	// Line 672, Address: 0x229eb8, Func Offset: 0x1c8
	// Line 673, Address: 0x229ec4, Func Offset: 0x1d4
	// Line 674, Address: 0x229ed4, Func Offset: 0x1e4
	// Line 675, Address: 0x229ee8, Func Offset: 0x1f8
	// Line 677, Address: 0x229ef4, Func Offset: 0x204
	// Line 678, Address: 0x229f0c, Func Offset: 0x21c
	// Func End, Address: 0x229f24, Func Offset: 0x234
}

// 
// Start address: 0x229f30
void enONICtrlBerserk(EnLOCAL_DATA* dp)
{
	float* pos;
	SubCharacter* scp;
	int t;
	float d;
	float vec[4];
	// Line 682, Address: 0x229f30, Func Offset: 0
	// Line 688, Address: 0x229f44, Func Offset: 0x14
	// Line 689, Address: 0x229f54, Func Offset: 0x24
	// Line 690, Address: 0x229f68, Func Offset: 0x38
	// Line 691, Address: 0x229f74, Func Offset: 0x44
	// Line 693, Address: 0x229f7c, Func Offset: 0x4c
	// Line 694, Address: 0x229f90, Func Offset: 0x60
	// Line 695, Address: 0x229f9c, Func Offset: 0x6c
	// Line 698, Address: 0x229fa4, Func Offset: 0x74
	// Line 699, Address: 0x229fb0, Func Offset: 0x80
	// Line 700, Address: 0x229fc0, Func Offset: 0x90
	// Line 701, Address: 0x229fd4, Func Offset: 0xa4
	// Line 703, Address: 0x229fe0, Func Offset: 0xb0
	// Line 704, Address: 0x229fec, Func Offset: 0xbc
	// Line 706, Address: 0x229ffc, Func Offset: 0xcc
	// Line 707, Address: 0x22a00c, Func Offset: 0xdc
	// Line 708, Address: 0x22a018, Func Offset: 0xe8
	// Line 709, Address: 0x22a024, Func Offset: 0xf4
	// Line 711, Address: 0x22a028, Func Offset: 0xf8
	// Line 712, Address: 0x22a02c, Func Offset: 0xfc
	// Line 713, Address: 0x22a048, Func Offset: 0x118
	// Line 714, Address: 0x22a064, Func Offset: 0x134
	// Line 715, Address: 0x22a080, Func Offset: 0x150
	// Line 716, Address: 0x22a088, Func Offset: 0x158
	// Line 717, Address: 0x22a090, Func Offset: 0x160
	// Line 718, Address: 0x22a0b0, Func Offset: 0x180
	// Line 720, Address: 0x22a0c0, Func Offset: 0x190
	// Line 721, Address: 0x22a0d8, Func Offset: 0x1a8
	// Line 722, Address: 0x22a0f0, Func Offset: 0x1c0
	// Line 723, Address: 0x22a0fc, Func Offset: 0x1cc
	// Func End, Address: 0x22a114, Func Offset: 0x1e4
}

// 
// Start address: 0x22a120
void enONICtrlAttack(EnLOCAL_DATA* dp)
{
	// Line 727, Address: 0x22a120, Func Offset: 0
	// Line 728, Address: 0x22a130, Func Offset: 0x10
	// Line 729, Address: 0x22a140, Func Offset: 0x20
	// Line 730, Address: 0x22a154, Func Offset: 0x34
	// Line 731, Address: 0x22a160, Func Offset: 0x40
	// Line 734, Address: 0x22a168, Func Offset: 0x48
	// Line 736, Address: 0x22a188, Func Offset: 0x68
	// Line 737, Address: 0x22a198, Func Offset: 0x78
	// Line 738, Address: 0x22a1ac, Func Offset: 0x8c
	// Line 739, Address: 0x22a1b8, Func Offset: 0x98
	// Line 740, Address: 0x22a1c4, Func Offset: 0xa4
	// Line 741, Address: 0x22a1d0, Func Offset: 0xb0
	// Line 744, Address: 0x22a1d8, Func Offset: 0xb8
	// Line 745, Address: 0x22a1e8, Func Offset: 0xc8
	// Line 746, Address: 0x22a1fc, Func Offset: 0xdc
	// Line 748, Address: 0x22a214, Func Offset: 0xf4
	// Line 749, Address: 0x22a224, Func Offset: 0x104
	// Line 751, Address: 0x22a244, Func Offset: 0x124
	// Line 753, Address: 0x22a248, Func Offset: 0x128
	// Line 754, Address: 0x22a254, Func Offset: 0x134
	// Line 755, Address: 0x22a264, Func Offset: 0x144
	// Line 756, Address: 0x22a270, Func Offset: 0x150
	// Line 757, Address: 0x22a280, Func Offset: 0x160
	// Line 758, Address: 0x22a288, Func Offset: 0x168
	// Line 759, Address: 0x22a290, Func Offset: 0x170
	// Line 760, Address: 0x22a298, Func Offset: 0x178
	// Line 761, Address: 0x22a2b8, Func Offset: 0x198
	// Line 766, Address: 0x22a2c4, Func Offset: 0x1a4
	// Line 767, Address: 0x22a2c8, Func Offset: 0x1a8
	// Line 768, Address: 0x22a2d4, Func Offset: 0x1b4
	// Func End, Address: 0x22a2e8, Func Offset: 0x1c8
}

// 
// Start address: 0x22a2f0
void enONICtrlAttack3(EnLOCAL_DATA* dp)
{
	// Line 772, Address: 0x22a2f0, Func Offset: 0
	// Line 773, Address: 0x22a300, Func Offset: 0x10
	// Line 774, Address: 0x22a310, Func Offset: 0x20
	// Line 775, Address: 0x22a31c, Func Offset: 0x2c
	// Line 776, Address: 0x22a32c, Func Offset: 0x3c
	// Line 777, Address: 0x22a340, Func Offset: 0x50
	// Line 778, Address: 0x22a34c, Func Offset: 0x5c
	// Line 781, Address: 0x22a354, Func Offset: 0x64
	// Line 783, Address: 0x22a38c, Func Offset: 0x9c
	// Line 784, Address: 0x22a39c, Func Offset: 0xac
	// Line 785, Address: 0x22a3a8, Func Offset: 0xb8
	// Line 786, Address: 0x22a3b4, Func Offset: 0xc4
	// Line 787, Address: 0x22a3c0, Func Offset: 0xd0
	// Line 789, Address: 0x22a3c8, Func Offset: 0xd8
	// Line 790, Address: 0x22a3d8, Func Offset: 0xe8
	// Line 791, Address: 0x22a3e8, Func Offset: 0xf8
	// Line 792, Address: 0x22a400, Func Offset: 0x110
	// Line 794, Address: 0x22a40c, Func Offset: 0x11c
	// Line 796, Address: 0x22a414, Func Offset: 0x124
	// Line 797, Address: 0x22a424, Func Offset: 0x134
	// Line 800, Address: 0x22a494, Func Offset: 0x1a4
	// Line 801, Address: 0x22a4a4, Func Offset: 0x1b4
	// Line 803, Address: 0x22a4b0, Func Offset: 0x1c0
	// Line 805, Address: 0x22a4b8, Func Offset: 0x1c8
	// Line 806, Address: 0x22a4c8, Func Offset: 0x1d8
	// Line 807, Address: 0x22a4d4, Func Offset: 0x1e4
	// Line 811, Address: 0x22a4e0, Func Offset: 0x1f0
	// Line 812, Address: 0x22a4ec, Func Offset: 0x1fc
	// Func End, Address: 0x22a500, Func Offset: 0x210
}

// 
// Start address: 0x22a500
void enONICtrlDamage(EnLOCAL_DATA* dp)
{
	int n2;
	int n1;
	int id;
	float d4;
	float d3;
	float d2;
	float d1;
	float d0;
	int m;
	// Line 816, Address: 0x22a500, Func Offset: 0
	// Line 818, Address: 0x22a524, Func Offset: 0x24
	// Line 820, Address: 0x22a544, Func Offset: 0x44
	// Line 821, Address: 0x22a554, Func Offset: 0x54
	// Line 822, Address: 0x22a55c, Func Offset: 0x5c
	// Line 823, Address: 0x22a564, Func Offset: 0x64
	// Line 825, Address: 0x22a580, Func Offset: 0x80
	// Line 826, Address: 0x22a590, Func Offset: 0x90
	// Line 827, Address: 0x22a5bc, Func Offset: 0xbc
	// Line 828, Address: 0x22a5cc, Func Offset: 0xcc
	// Line 829, Address: 0x22a5d8, Func Offset: 0xd8
	// Line 830, Address: 0x22a5e4, Func Offset: 0xe4
	// Line 832, Address: 0x22a5ec, Func Offset: 0xec
	// Line 833, Address: 0x22a5fc, Func Offset: 0xfc
	// Line 834, Address: 0x22a610, Func Offset: 0x110
	// Line 835, Address: 0x22a614, Func Offset: 0x114
	// Line 838, Address: 0x22a61c, Func Offset: 0x11c
	// Line 839, Address: 0x22a62c, Func Offset: 0x12c
	// Line 842, Address: 0x22a664, Func Offset: 0x164
	// Line 843, Address: 0x22a670, Func Offset: 0x170
	// Line 844, Address: 0x22a678, Func Offset: 0x178
	// Line 848, Address: 0x22a680, Func Offset: 0x180
	// Line 849, Address: 0x22a6a0, Func Offset: 0x1a0
	// Line 850, Address: 0x22a6bc, Func Offset: 0x1bc
	// Line 851, Address: 0x22a6d8, Func Offset: 0x1d8
	// Line 852, Address: 0x22a6e8, Func Offset: 0x1e8
	// Line 853, Address: 0x22a6f4, Func Offset: 0x1f4
	// Line 854, Address: 0x22a710, Func Offset: 0x210
	// Line 855, Address: 0x22a740, Func Offset: 0x240
	// Line 856, Address: 0x22a764, Func Offset: 0x264
	// Line 857, Address: 0x22a788, Func Offset: 0x288
	// Line 858, Address: 0x22a7b4, Func Offset: 0x2b4
	// Line 859, Address: 0x22a7e0, Func Offset: 0x2e0
	// Line 860, Address: 0x22a800, Func Offset: 0x300
	// Line 861, Address: 0x22a804, Func Offset: 0x304
	// Line 862, Address: 0x22a82c, Func Offset: 0x32c
	// Line 863, Address: 0x22a830, Func Offset: 0x330
	// Line 865, Address: 0x22a838, Func Offset: 0x338
	// Line 866, Address: 0x22a83c, Func Offset: 0x33c
	// Line 867, Address: 0x22a84c, Func Offset: 0x34c
	// Line 868, Address: 0x22a850, Func Offset: 0x350
	// Line 870, Address: 0x22a854, Func Offset: 0x354
	// Line 871, Address: 0x22a858, Func Offset: 0x358
	// Line 872, Address: 0x22a868, Func Offset: 0x368
	// Line 873, Address: 0x22a86c, Func Offset: 0x36c
	// Line 875, Address: 0x22a870, Func Offset: 0x370
	// Line 877, Address: 0x22a888, Func Offset: 0x388
	// Line 878, Address: 0x22a890, Func Offset: 0x390
	// Line 881, Address: 0x22a894, Func Offset: 0x394
	// Line 882, Address: 0x22a89c, Func Offset: 0x39c
	// Line 883, Address: 0x22a8b4, Func Offset: 0x3b4
	// Line 884, Address: 0x22a8b8, Func Offset: 0x3b8
	// Line 885, Address: 0x22a8c0, Func Offset: 0x3c0
	// Line 888, Address: 0x22a8c4, Func Offset: 0x3c4
	// Line 889, Address: 0x22a8c8, Func Offset: 0x3c8
	// Line 891, Address: 0x22a8d4, Func Offset: 0x3d4
	// Line 892, Address: 0x22a8dc, Func Offset: 0x3dc
	// Line 897, Address: 0x22a8e8, Func Offset: 0x3e8
	// Func End, Address: 0x22a910, Func Offset: 0x410
}

// 
// Start address: 0x22a910
void enONICtrlConfuse(EnLOCAL_DATA* dp)
{
	EnLOCAL_DATA* tp;
	// Line 901, Address: 0x22a910, Func Offset: 0
	// Line 903, Address: 0x22a924, Func Offset: 0x14
	// Line 904, Address: 0x22a934, Func Offset: 0x24
	// Line 905, Address: 0x22a948, Func Offset: 0x38
	// Line 906, Address: 0x22a958, Func Offset: 0x48
	// Line 908, Address: 0x22a95c, Func Offset: 0x4c
	// Line 909, Address: 0x22a964, Func Offset: 0x54
	// Line 910, Address: 0x22a978, Func Offset: 0x68
	// Line 911, Address: 0x22a984, Func Offset: 0x74
	// Line 912, Address: 0x22a98c, Func Offset: 0x7c
	// Line 913, Address: 0x22a994, Func Offset: 0x84
	// Line 914, Address: 0x22a998, Func Offset: 0x88
	// Line 917, Address: 0x22a9a0, Func Offset: 0x90
	// Line 918, Address: 0x22a9ac, Func Offset: 0x9c
	// Line 919, Address: 0x22a9b8, Func Offset: 0xa8
	// Line 920, Address: 0x22a9c8, Func Offset: 0xb8
	// Line 922, Address: 0x22a9d4, Func Offset: 0xc4
	// Line 923, Address: 0x22a9e4, Func Offset: 0xd4
	// Line 924, Address: 0x22a9e8, Func Offset: 0xd8
	// Line 925, Address: 0x22aa04, Func Offset: 0xf4
	// Line 926, Address: 0x22aa1c, Func Offset: 0x10c
	// Line 927, Address: 0x22aa28, Func Offset: 0x118
	// Line 928, Address: 0x22aa38, Func Offset: 0x128
	// Line 929, Address: 0x22aa48, Func Offset: 0x138
	// Line 931, Address: 0x22aab4, Func Offset: 0x1a4
	// Line 932, Address: 0x22aac0, Func Offset: 0x1b0
	// Line 933, Address: 0x22aad0, Func Offset: 0x1c0
	// Line 934, Address: 0x22aad8, Func Offset: 0x1c8
	// Line 937, Address: 0x22aae0, Func Offset: 0x1d0
	// Line 939, Address: 0x22aae8, Func Offset: 0x1d8
	// Line 940, Address: 0x22ab04, Func Offset: 0x1f4
	// Line 941, Address: 0x22ab14, Func Offset: 0x204
	// Line 944, Address: 0x22aba4, Func Offset: 0x294
	// Line 945, Address: 0x22aba8, Func Offset: 0x298
	// Line 946, Address: 0x22abb4, Func Offset: 0x2a4
	// Line 947, Address: 0x22abc4, Func Offset: 0x2b4
	// Line 948, Address: 0x22abd8, Func Offset: 0x2c8
	// Line 949, Address: 0x22abe0, Func Offset: 0x2d0
	// Line 950, Address: 0x22abe8, Func Offset: 0x2d8
	// Line 951, Address: 0x22abf4, Func Offset: 0x2e4
	// Line 953, Address: 0x22ac24, Func Offset: 0x314
	// Line 954, Address: 0x22ac50, Func Offset: 0x340
	// Line 956, Address: 0x22ac58, Func Offset: 0x348
	// Line 957, Address: 0x22ac64, Func Offset: 0x354
	// Func End, Address: 0x22ac7c, Func Offset: 0x36c
}

// 
// Start address: 0x22ac80
void enONICtrlSuicide(EnLOCAL_DATA* dp)
{
	int ts;
	int td;
	int t;
	float a;
	float d;
	// Line 961, Address: 0x22ac80, Func Offset: 0
	// Line 964, Address: 0x22ac98, Func Offset: 0x18
	// Line 965, Address: 0x22aca8, Func Offset: 0x28
	// Line 967, Address: 0x22acb4, Func Offset: 0x34
	// Line 969, Address: 0x22acec, Func Offset: 0x6c
	// Line 970, Address: 0x22acfc, Func Offset: 0x7c
	// Line 971, Address: 0x22ad04, Func Offset: 0x84
	// Line 972, Address: 0x22ad18, Func Offset: 0x98
	// Line 973, Address: 0x22ad24, Func Offset: 0xa4
	// Line 976, Address: 0x22ad2c, Func Offset: 0xac
	// Line 977, Address: 0x22ad3c, Func Offset: 0xbc
	// Line 978, Address: 0x22ad54, Func Offset: 0xd4
	// Line 979, Address: 0x22ad64, Func Offset: 0xe4
	// Line 981, Address: 0x22ad68, Func Offset: 0xe8
	// Line 984, Address: 0x22ad70, Func Offset: 0xf0
	// Line 985, Address: 0x22ad8c, Func Offset: 0x10c
	// Line 986, Address: 0x22ada4, Func Offset: 0x124
	// Line 987, Address: 0x22adb0, Func Offset: 0x130
	// Line 988, Address: 0x22ade0, Func Offset: 0x160
	// Line 989, Address: 0x22ade8, Func Offset: 0x168
	// Line 990, Address: 0x22ae04, Func Offset: 0x184
	// Line 991, Address: 0x22ae0c, Func Offset: 0x18c
	// Line 992, Address: 0x22ae1c, Func Offset: 0x19c
	// Line 995, Address: 0x22ae30, Func Offset: 0x1b0
	// Line 997, Address: 0x22ae38, Func Offset: 0x1b8
	// Line 998, Address: 0x22ae90, Func Offset: 0x210
	// Line 999, Address: 0x22aea0, Func Offset: 0x220
	// Line 1000, Address: 0x22aea8, Func Offset: 0x228
	// Line 1002, Address: 0x22aeb0, Func Offset: 0x230
	// Line 1004, Address: 0x22af10, Func Offset: 0x290
	// Line 1005, Address: 0x22af14, Func Offset: 0x294
	// Line 1006, Address: 0x22af1c, Func Offset: 0x29c
	// Line 1008, Address: 0x22af20, Func Offset: 0x2a0
	// Line 1009, Address: 0x22af40, Func Offset: 0x2c0
	// Line 1010, Address: 0x22af48, Func Offset: 0x2c8
	// Line 1011, Address: 0x22af68, Func Offset: 0x2e8
	// Line 1012, Address: 0x22af84, Func Offset: 0x304
	// Line 1013, Address: 0x22af88, Func Offset: 0x308
	// Line 1014, Address: 0x22afb4, Func Offset: 0x334
	// Line 1015, Address: 0x22afcc, Func Offset: 0x34c
	// Line 1016, Address: 0x22afd8, Func Offset: 0x358
	// Line 1018, Address: 0x22b038, Func Offset: 0x3b8
	// Line 1019, Address: 0x22b048, Func Offset: 0x3c8
	// Line 1020, Address: 0x22b054, Func Offset: 0x3d4
	// Line 1022, Address: 0x22b05c, Func Offset: 0x3dc
	// Func End, Address: 0x22b078, Func Offset: 0x3f8
}

// 
// Start address: 0x22b080
void enONICtrlDead(EnLOCAL_DATA* dp)
{
	// Line 1026, Address: 0x22b080, Func Offset: 0
	// Line 1027, Address: 0x22b090, Func Offset: 0x10
	// Line 1028, Address: 0x22b09c, Func Offset: 0x1c
	// Line 1029, Address: 0x22b0a4, Func Offset: 0x24
	// Line 1030, Address: 0x22b0b0, Func Offset: 0x30
	// Line 1031, Address: 0x22b0bc, Func Offset: 0x3c
	// Line 1032, Address: 0x22b0c8, Func Offset: 0x48
	// Line 1034, Address: 0x22b0d4, Func Offset: 0x54
	// Func End, Address: 0x22b0e8, Func Offset: 0x68
}

// 
// Start address: 0x22b0f0
void enONICheckPlayerWeapon(EnLOCAL_DATA* dp)
{
	// Line 1038, Address: 0x22b0f0, Func Offset: 0
	// Line 1039, Address: 0x22b100, Func Offset: 0x10
	// Line 1044, Address: 0x22b13c, Func Offset: 0x4c
	// Line 1045, Address: 0x22b148, Func Offset: 0x58
	// Line 1047, Address: 0x22b150, Func Offset: 0x60
	// Line 1050, Address: 0x22b15c, Func Offset: 0x6c
	// Func End, Address: 0x22b170, Func Offset: 0x80
}

// 
// Start address: 0x22b170
int enONIGetDamageMotion(EnLOCAL_DATA* dp)
{
	float a;
	int dd;
	int id;
	int m;
	// Line 1056, Address: 0x22b170, Func Offset: 0
	// Line 1060, Address: 0x22b180, Func Offset: 0x10
	// Line 1061, Address: 0x22b1a4, Func Offset: 0x34
	// Line 1062, Address: 0x22b1d8, Func Offset: 0x68
	// Line 1063, Address: 0x22b1dc, Func Offset: 0x6c
	// Line 1064, Address: 0x22b1e0, Func Offset: 0x70
	// Line 1076, Address: 0x22b2d8, Func Offset: 0x168
	// Line 1077, Address: 0x22b2dc, Func Offset: 0x16c
	// Line 1080, Address: 0x22b2e4, Func Offset: 0x174
	// Line 1081, Address: 0x22b2e8, Func Offset: 0x178
	// Line 1084, Address: 0x22b2f0, Func Offset: 0x180
	// Line 1085, Address: 0x22b2f4, Func Offset: 0x184
	// Line 1087, Address: 0x22b2fc, Func Offset: 0x18c
	// Line 1088, Address: 0x22b300, Func Offset: 0x190
	// Line 1091, Address: 0x22b308, Func Offset: 0x198
	// Line 1092, Address: 0x22b320, Func Offset: 0x1b0
	// Line 1093, Address: 0x22b324, Func Offset: 0x1b4
	// Line 1094, Address: 0x22b32c, Func Offset: 0x1bc
	// Line 1096, Address: 0x22b330, Func Offset: 0x1c0
	// Line 1099, Address: 0x22b338, Func Offset: 0x1c8
	// Line 1100, Address: 0x22b33c, Func Offset: 0x1cc
	// Line 1102, Address: 0x22b344, Func Offset: 0x1d4
	// Line 1103, Address: 0x22b348, Func Offset: 0x1d8
	// Line 1105, Address: 0x22b358, Func Offset: 0x1e8
	// Line 1106, Address: 0x22b35c, Func Offset: 0x1ec
	// Func End, Address: 0x22b370, Func Offset: 0x200
}

// 
// Start address: 0x22b370
int enONISetDamage(EnLOCAL_DATA* dp)
{
	// Line 1111, Address: 0x22b370, Func Offset: 0
	// Line 1112, Address: 0x22b380, Func Offset: 0x10
	// Line 1113, Address: 0x22b388, Func Offset: 0x18
	// Line 1114, Address: 0x22b398, Func Offset: 0x28
	// Line 1115, Address: 0x22b3c8, Func Offset: 0x58
	// Line 1116, Address: 0x22b3d0, Func Offset: 0x60
	// Line 1117, Address: 0x22b3d8, Func Offset: 0x68
	// Line 1118, Address: 0x22b404, Func Offset: 0x94
	// Line 1119, Address: 0x22b408, Func Offset: 0x98
	// Line 1120, Address: 0x22b440, Func Offset: 0xd0
	// Line 1122, Address: 0x22b454, Func Offset: 0xe4
	// Line 1124, Address: 0x22b474, Func Offset: 0x104
	// Line 1126, Address: 0x22b47c, Func Offset: 0x10c
	// Line 1127, Address: 0x22b4a8, Func Offset: 0x138
	// Line 1129, Address: 0x22b4ac, Func Offset: 0x13c
	// Line 1130, Address: 0x22b4b8, Func Offset: 0x148
	// Line 1131, Address: 0x22b4d8, Func Offset: 0x168
	// Line 1132, Address: 0x22b4f4, Func Offset: 0x184
	// Line 1135, Address: 0x22b500, Func Offset: 0x190
	// Line 1136, Address: 0x22b504, Func Offset: 0x194
	// Func End, Address: 0x22b518, Func Offset: 0x1a8
}

// 
// Start address: 0x22b520
int enONICanSeePlayer(EnLOCAL_DATA* dp)
{
	int wcd;
	float a;
	float dist;
	float* ppos;
	// Line 1141, Address: 0x22b520, Func Offset: 0
	// Line 1142, Address: 0x22b53c, Func Offset: 0x1c
	// Line 1144, Address: 0x22b548, Func Offset: 0x28
	// Line 1145, Address: 0x22b554, Func Offset: 0x34
	// Line 1146, Address: 0x22b570, Func Offset: 0x50
	// Line 1147, Address: 0x22b588, Func Offset: 0x68
	// Line 1148, Address: 0x22b5a8, Func Offset: 0x88
	// Line 1150, Address: 0x22b5b4, Func Offset: 0x94
	// Line 1152, Address: 0x22b5c0, Func Offset: 0xa0
	// Line 1153, Address: 0x22b5c4, Func Offset: 0xa4
	// Line 1154, Address: 0x22b5e8, Func Offset: 0xc8
	// Line 1155, Address: 0x22b608, Func Offset: 0xe8
	// Line 1156, Address: 0x22b630, Func Offset: 0x110
	// Line 1158, Address: 0x22b63c, Func Offset: 0x11c
	// Line 1159, Address: 0x22b650, Func Offset: 0x130
	// Line 1160, Address: 0x22b664, Func Offset: 0x144
	// Line 1163, Address: 0x22b6ec, Func Offset: 0x1cc
	// Line 1166, Address: 0x22b778, Func Offset: 0x258
	// Line 1168, Address: 0x22b784, Func Offset: 0x264
	// Line 1169, Address: 0x22b7d0, Func Offset: 0x2b0
	// Line 1170, Address: 0x22b7d4, Func Offset: 0x2b4
	// Func End, Address: 0x22b7f4, Func Offset: 0x2d4
}

// 
// Start address: 0x22b800
int enONICanSeeCharacter(EnLOCAL_DATA* dp, SubCharacter* scp)
{
	int wcd;
	float a;
	float dist;
	float* ppos;
	// Line 1175, Address: 0x22b800, Func Offset: 0
	// Line 1176, Address: 0x22b818, Func Offset: 0x18
	// Line 1178, Address: 0x22b81c, Func Offset: 0x1c
	// Line 1179, Address: 0x22b824, Func Offset: 0x24
	// Line 1180, Address: 0x22b840, Func Offset: 0x40
	// Line 1181, Address: 0x22b864, Func Offset: 0x64
	// Line 1182, Address: 0x22b898, Func Offset: 0x98
	// Line 1184, Address: 0x22b8bc, Func Offset: 0xbc
	// Line 1185, Address: 0x22b8d0, Func Offset: 0xd0
	// Line 1186, Address: 0x22b8e4, Func Offset: 0xe4
	// Line 1187, Address: 0x22b930, Func Offset: 0x130
	// Line 1188, Address: 0x22b950, Func Offset: 0x150
	// Line 1189, Address: 0x22b954, Func Offset: 0x154
	// Func End, Address: 0x22b970, Func Offset: 0x170
}

// 
// Start address: 0x22b970
void enONIAnimeSet(EnLOCAL_DATA* dp, int anim)
{
	// Line 1193, Address: 0x22b970, Func Offset: 0
	// Line 1194, Address: 0x22b988, Func Offset: 0x18
	// Line 1195, Address: 0x22b994, Func Offset: 0x24
	// Line 1196, Address: 0x22b99c, Func Offset: 0x2c
	// Line 1199, Address: 0x22b9a4, Func Offset: 0x34
	// Line 1200, Address: 0x22b9e4, Func Offset: 0x74
	// Line 1201, Address: 0x22ba08, Func Offset: 0x98
	// Func End, Address: 0x22ba20, Func Offset: 0xb0
}

// 
// Start address: 0x22ba20
void enONIAnimeReset(EnLOCAL_DATA* dp, int anim)
{
	// Line 1205, Address: 0x22ba20, Func Offset: 0
	// Line 1207, Address: 0x22ba38, Func Offset: 0x18
	// Line 1208, Address: 0x22ba78, Func Offset: 0x58
	// Line 1209, Address: 0x22ba9c, Func Offset: 0x7c
	// Func End, Address: 0x22bab4, Func Offset: 0x94
}

// 
// Start address: 0x22bac0
void enONIAnimeExec(EnLOCAL_DATA* dp)
{
	int of;
	// Line 1213, Address: 0x22bac0, Func Offset: 0
	// Line 1214, Address: 0x22bad4, Func Offset: 0x14
	// Line 1215, Address: 0x22bad8, Func Offset: 0x18
	// Line 1216, Address: 0x22baec, Func Offset: 0x2c
	// Line 1217, Address: 0x22bb14, Func Offset: 0x54
	// Line 1219, Address: 0x22bb24, Func Offset: 0x64
	// Line 1221, Address: 0x22bb30, Func Offset: 0x70
	// Line 1232, Address: 0x22bbe4, Func Offset: 0x124
	// Line 1233, Address: 0x22bbf8, Func Offset: 0x138
	// Line 1234, Address: 0x22bc14, Func Offset: 0x154
	// Line 1237, Address: 0x22bc1c, Func Offset: 0x15c
	// Line 1238, Address: 0x22bc2c, Func Offset: 0x16c
	// Line 1239, Address: 0x22bc48, Func Offset: 0x188
	// Line 1240, Address: 0x22bc50, Func Offset: 0x190
	// Line 1245, Address: 0x22bc6c, Func Offset: 0x1ac
	// Func End, Address: 0x22bc84, Func Offset: 0x1c4
}

// 
// Start address: 0x22bc90
float enONIGetSpeed(EnLOCAL_DATA* dp)
{
	// Line 1250, Address: 0x22bc90, Func Offset: 0
	// Line 1251, Address: 0x22bcbc, Func Offset: 0x2c
	// Func End, Address: 0x22bcc4, Func Offset: 0x34
}

// 
// Start address: 0x22bcd0
float enONIGetWalkSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1255, Address: 0x22bcd0, Func Offset: 0
	// Line 1256, Address: 0x22bce0, Func Offset: 0x10
	// Line 1263, Address: 0x22bcfc, Func Offset: 0x2c
	// Line 1264, Address: 0x22bd20, Func Offset: 0x50
	// Line 1265, Address: 0x22bd30, Func Offset: 0x60
	// Line 1267, Address: 0x22bd40, Func Offset: 0x70
	// Line 1269, Address: 0x22bd60, Func Offset: 0x90
	// Func End, Address: 0x22bd74, Func Offset: 0xa4
}

// 
// Start address: 0x22bd80
float enONIGetAttackSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1273, Address: 0x22bd80, Func Offset: 0
	// Line 1274, Address: 0x22bd90, Func Offset: 0x10
	// Line 1281, Address: 0x22bdac, Func Offset: 0x2c
	// Line 1282, Address: 0x22bdd0, Func Offset: 0x50
	// Line 1284, Address: 0x22bdf0, Func Offset: 0x70
	// Func End, Address: 0x22be04, Func Offset: 0x84
}

// 
// Start address: 0x22be10
float enONIGetFeelRange()
{
	float r;
	float feel_range[5];
	// Line 1288, Address: 0x22be10, Func Offset: 0
	// Line 1289, Address: 0x22be1c, Func Offset: 0xc
	// Line 1296, Address: 0x22be38, Func Offset: 0x28
	// Line 1297, Address: 0x22be4c, Func Offset: 0x3c
	// Line 1298, Address: 0x22be60, Func Offset: 0x50
	// Line 1300, Address: 0x22be70, Func Offset: 0x60
	// Line 1301, Address: 0x22be74, Func Offset: 0x64
	// Func End, Address: 0x22be88, Func Offset: 0x78
}

// 
// Start address: 0x22be90
float enONIGetRotSpeed()
{
	float rot_rate[5];
	// Line 1305, Address: 0x22be90, Func Offset: 0
	// Line 1306, Address: 0x22be98, Func Offset: 0x8
	// Line 1313, Address: 0x22beb4, Func Offset: 0x24
	// Line 1314, Address: 0x22bed8, Func Offset: 0x48
	// Func End, Address: 0x22bee8, Func Offset: 0x58
}

// 
// Start address: 0x22bef0
void enONISetSlowTime(EnLOCAL_DATA* dp)
{
	int timer[5];
	// Line 1318, Address: 0x22bef0, Func Offset: 0
	// Line 1319, Address: 0x22bf00, Func Offset: 0x10
	// Line 1326, Address: 0x22bf1c, Func Offset: 0x2c
	// Line 1327, Address: 0x22bf3c, Func Offset: 0x4c
	// Func End, Address: 0x22bf50, Func Offset: 0x60
}

// 
// Start address: 0x22bf50
void enONISoundLife(EnLOCAL_DATA* dp)
{
	// Line 1331, Address: 0x22bf50, Func Offset: 0
	// Line 1332, Address: 0x22bf64, Func Offset: 0x14
	// Line 1333, Address: 0x22bf74, Func Offset: 0x24
	// Line 1334, Address: 0x22bf7c, Func Offset: 0x2c
	// Line 1336, Address: 0x22bfcc, Func Offset: 0x7c
	// Line 1338, Address: 0x22c00c, Func Offset: 0xbc
	// Line 1340, Address: 0x22c010, Func Offset: 0xc0
	// Func End, Address: 0x22c028, Func Offset: 0xd8
}

