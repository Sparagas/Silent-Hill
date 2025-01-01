typedef struct SubCharacter;
typedef struct EnCOMMUNICATION;
typedef struct EnBOS_DATA;
typedef struct EnSCU_DATA;
typedef struct shSkelton;
typedef struct EnLOCAL_DATA;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct EnPATH_DATA;
typedef struct shBattleFight;
typedef struct _CL_VHIT_RESULT;
typedef struct shBattleShot;
typedef struct EnANIME_DATA;
typedef struct EnRED_DATA;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct EnFORBIDDENAREA;
typedef struct EnINS_DATA;
typedef struct EnIKE_DATA;
typedef struct EnSOUND_QUEUE;
typedef struct EnLOCAL_WORK;
typedef struct EnARM_DATA;
typedef struct EnTYU_DATA;
typedef struct _CL_VHIT_WALL;
typedef struct EnNSE_DATA;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct _anon0;
typedef union _anon1;
typedef union _anon2;
typedef struct EnMKN_DATA;
typedef struct _anon3;
typedef struct EnEDB_DATA;
typedef struct EnPAP_DATA;
typedef struct EnNIK_DATA;

typedef void(*type_2)(EnLOCAL_DATA*);
typedef void(*type_5)(EnLOCAL_DATA*);
typedef void(*type_13)(EnLOCAL_DATA*);
typedef void(*type_28)(EnLOCAL_DATA*);
typedef void(*type_32)(SubCharacter*);
typedef void(*type_35)(SubCharacter*);

typedef float type_0[5];
typedef unsigned char type_1[4];
typedef void(*type_3)(EnLOCAL_DATA*)[4];
typedef unsigned char type_4[14];
typedef void(*type_6)(EnLOCAL_DATA*)[7];
typedef float type_7[5];
typedef unsigned char type_8[97];
typedef float type_9[4];
typedef float type_10[5];
typedef EnLOCAL_DATA type_11[32];
typedef EnCOMMUNICATION type_12[8];
typedef void(*type_14)(EnLOCAL_DATA*)[9];
typedef EnFORBIDDENAREA type_15[2];
typedef EnSOUND_QUEUE type_16[8];
typedef short type_17[5];
typedef unsigned char type_18[20];
typedef short type_19[5];
typedef short type_20[5];
typedef EnANIME_DATA type_21[2];
typedef float type_22[4];
typedef unsigned char type_23[14];
typedef float type_24[4][4];
typedef shAttackInfo type_25[66];
typedef char type_26[3];
typedef float type_27[5];
typedef void(*type_29)(EnLOCAL_DATA*)[3];
typedef unsigned char type_30[69];
typedef float type_31[4];
typedef float type_33[4];
typedef float type_34[4][4];

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

struct EnCOMMUNICATION
{
	float pos[4];
	int kind;
	int type;
	int time;
	float dist;
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
	_anon3 src_m;
	_anon0 src_t;
	_anon3 des_m;
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

struct _CL_VHIT_RESULT
{
	int kind;
	_anon2 hobj;
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

union _anon2
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

struct _anon3
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
EnANIME_DATA EnTYUAnime[2];
EnLOCAL_WORK enLocalWork;

void enTYUInitData(EnLOCAL_DATA* dp);
void enTYUCtrlMain(EnLOCAL_DATA* dp);
void enTYUCtrlAutomatic(EnLOCAL_DATA* dp);
void enTYUCtrlSleep(EnLOCAL_DATA* dp);
void enTYUCtrlGoPlayable(EnLOCAL_DATA* dp);
void enTYUCtrlEvent(EnLOCAL_DATA* dp);
void enTYUCtrlHand();
void enTYUCtrlStraight(EnLOCAL_DATA* dp);
void enTYUCtrlChase(EnLOCAL_DATA* dp);
void enTYUCtrlGathering(EnLOCAL_DATA* dp);
void enTYUCtrlEscape(EnLOCAL_DATA* dp);
void enTYUCtrlOnWall(EnLOCAL_DATA* dp);
void enTYUCtrlOnCeiling(EnLOCAL_DATA* dp);
void enTYUCtrlAttack(EnLOCAL_DATA* dp);
void enTYUCtrlDown(EnLOCAL_DATA* dp);
void enTYUCtrlDead(EnLOCAL_DATA* dp);
int enTYUSetPathV(EnLOCAL_DATA* dp);
int enTYUCheckNormal(float* normal);
int enTYUCheckNearWall(EnLOCAL_DATA* dp);
void enTYUCheckWall(EnLOCAL_DATA* dp);
void enTYUCheckUnderWall(EnLOCAL_DATA* dp);
int enTYUCanSeePlayer(EnLOCAL_DATA* dp);
void enTYUCheckNearPlayer(EnLOCAL_DATA* dp);
void enTYUAnimeSet(EnLOCAL_DATA* dp, int anim);
void enTYUAnimeExec(EnLOCAL_DATA* dp);
float enTYUGetSpeed();
void enTYUSetAttackTime(EnLOCAL_DATA* dp);
void enTYUSetStopTime(EnLOCAL_DATA* dp);
void enTYUSetDownTime(EnLOCAL_DATA* dp);
void enTYUSoundMove(EnLOCAL_DATA* dp);
void enTY2InitData(EnLOCAL_DATA* dp);
void enTY2CtrlMain(EnLOCAL_DATA* dp);
void enTY2CtrlFloor(EnLOCAL_DATA* dp);
void enTY2CtrlWall(EnLOCAL_DATA* dp);
void enTY2CtrlCeiling(EnLOCAL_DATA* dp);
void enTY2CtrlDead(EnLOCAL_DATA* dp);
void enTY2CheckCreateCharacter(EnLOCAL_DATA* dp);
void enTY3InitData(EnLOCAL_DATA* dp);
void enTY3CtrlMain(EnLOCAL_DATA* dp);
void enTY3CtrlFloor(EnLOCAL_DATA* dp);
void enTY3CtrlWall(EnLOCAL_DATA* dp);
void enTY3CtrlCeiling(EnLOCAL_DATA* dp);
void enTY3CheckCreateCharacter(EnLOCAL_DATA* dp);

// 
// Start address: 0x165000
void enTYUInitData(EnLOCAL_DATA* dp)
{
	int mode;
	float endurance[5];
	float vitarity[5];
	// Line 118, Address: 0x165000, Func Offset: 0
	// Line 119, Address: 0x165014, Func Offset: 0x14
	// Line 126, Address: 0x165030, Func Offset: 0x30
	// Line 133, Address: 0x16504c, Func Offset: 0x4c
	// Line 135, Address: 0x165058, Func Offset: 0x58
	// Line 136, Address: 0x165060, Func Offset: 0x60
	// Line 139, Address: 0x1650a0, Func Offset: 0xa0
	// Line 140, Address: 0x1650ac, Func Offset: 0xac
	// Line 142, Address: 0x1650b4, Func Offset: 0xb4
	// Line 143, Address: 0x1650bc, Func Offset: 0xbc
	// Line 145, Address: 0x1650c4, Func Offset: 0xc4
	// Line 146, Address: 0x1650d0, Func Offset: 0xd0
	// Line 148, Address: 0x1650d8, Func Offset: 0xd8
	// Line 152, Address: 0x1650e0, Func Offset: 0xe0
	// Line 154, Address: 0x1650e4, Func Offset: 0xe4
	// Line 155, Address: 0x16510c, Func Offset: 0x10c
	// Line 156, Address: 0x165118, Func Offset: 0x118
	// Line 157, Address: 0x165130, Func Offset: 0x130
	// Line 158, Address: 0x165140, Func Offset: 0x140
	// Line 159, Address: 0x16514c, Func Offset: 0x14c
	// Line 160, Address: 0x165158, Func Offset: 0x158
	// Line 161, Address: 0x165164, Func Offset: 0x164
	// Line 162, Address: 0x16516c, Func Offset: 0x16c
	// Line 163, Address: 0x165180, Func Offset: 0x180
	// Line 164, Address: 0x165194, Func Offset: 0x194
	// Line 166, Address: 0x1651a0, Func Offset: 0x1a0
	// Line 167, Address: 0x1651a8, Func Offset: 0x1a8
	// Func End, Address: 0x1651c0, Func Offset: 0x1c0
}

// 
// Start address: 0x1651c0
void enTYUCtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlTYUFunc)(EnLOCAL_DATA*)[7];
	// Line 173, Address: 0x1651c0, Func Offset: 0
	// Line 174, Address: 0x1651c8, Func Offset: 0x8
	// Line 184, Address: 0x1651ec, Func Offset: 0x2c
	// Line 185, Address: 0x165204, Func Offset: 0x44
	// Func End, Address: 0x165214, Func Offset: 0x54
}

// 
// Start address: 0x165220
void enTYUCtrlAutomatic(EnLOCAL_DATA* dp)
{
	void(*enCtrlTYUSubFunc)(EnLOCAL_DATA*)[9];
	// Line 189, Address: 0x165220, Func Offset: 0
	// Line 190, Address: 0x165230, Func Offset: 0x10
	// Line 202, Address: 0x165254, Func Offset: 0x34
	// Line 204, Address: 0x165260, Func Offset: 0x40
	// Line 207, Address: 0x16527c, Func Offset: 0x5c
	// Line 209, Address: 0x165288, Func Offset: 0x68
	// Line 210, Address: 0x165294, Func Offset: 0x74
	// Line 212, Address: 0x1652b8, Func Offset: 0x98
	// Line 214, Address: 0x1652c4, Func Offset: 0xa4
	// Func End, Address: 0x1652d8, Func Offset: 0xb8
}

// 
// Start address: 0x1652e0
void enTYUCtrlSleep(EnLOCAL_DATA* dp)
{
	// Line 218, Address: 0x1652e0, Func Offset: 0
	// Line 219, Address: 0x1652f0, Func Offset: 0x10
	// Line 220, Address: 0x165300, Func Offset: 0x20
	// Line 221, Address: 0x16530c, Func Offset: 0x2c
	// Line 222, Address: 0x165318, Func Offset: 0x38
	// Line 223, Address: 0x16532c, Func Offset: 0x4c
	// Line 226, Address: 0x16535c, Func Offset: 0x7c
	// Line 227, Address: 0x165368, Func Offset: 0x88
	// Line 229, Address: 0x165370, Func Offset: 0x90
	// Line 230, Address: 0x16537c, Func Offset: 0x9c
	// Line 232, Address: 0x165384, Func Offset: 0xa4
	// Line 233, Address: 0x16538c, Func Offset: 0xac
	// Line 237, Address: 0x165398, Func Offset: 0xb8
	// Func End, Address: 0x1653ac, Func Offset: 0xcc
}

// 
// Start address: 0x1653b0
void enTYUCtrlGoPlayable(EnLOCAL_DATA* dp)
{
	// Line 242, Address: 0x1653b0, Func Offset: 0
	// Line 243, Address: 0x1653b8, Func Offset: 0x8
	// Line 244, Address: 0x1653c0, Func Offset: 0x10
	// Func End, Address: 0x1653c8, Func Offset: 0x18
}

// 
// Start address: 0x1653d0
void enTYUCtrlEvent(EnLOCAL_DATA* dp)
{
	void* tmp;
	// Line 250, Address: 0x1653d0, Func Offset: 0
	// Func End, Address: 0x1653d8, Func Offset: 0x8
}

// 
// Start address: 0x1653e0
void enTYUCtrlHand()
{
	// Line 306, Address: 0x1653e0, Func Offset: 0
	// Func End, Address: 0x1653e8, Func Offset: 0x8
}

// 
// Start address: 0x1653f0
void enTYUCtrlStraight(EnLOCAL_DATA* dp)
{
	_CL_VHIT_RESULT* res;
	EnCOMMUNICATION* comm;
	int t;
	float vec[4];
	// Line 310, Address: 0x1653f0, Func Offset: 0
	// Line 314, Address: 0x165400, Func Offset: 0x10
	// Line 315, Address: 0x165410, Func Offset: 0x20
	// Line 316, Address: 0x16541c, Func Offset: 0x2c
	// Line 318, Address: 0x165424, Func Offset: 0x34
	// Line 319, Address: 0x165430, Func Offset: 0x40
	// Line 320, Address: 0x165440, Func Offset: 0x50
	// Line 321, Address: 0x165448, Func Offset: 0x58
	// Line 322, Address: 0x165454, Func Offset: 0x64
	// Line 323, Address: 0x165468, Func Offset: 0x78
	// Line 325, Address: 0x165474, Func Offset: 0x84
	// Line 326, Address: 0x165484, Func Offset: 0x94
	// Line 327, Address: 0x1654a0, Func Offset: 0xb0
	// Line 328, Address: 0x1654c0, Func Offset: 0xd0
	// Line 330, Address: 0x165504, Func Offset: 0x114
	// Line 331, Address: 0x165510, Func Offset: 0x120
	// Line 332, Address: 0x16551c, Func Offset: 0x12c
	// Line 333, Address: 0x165524, Func Offset: 0x134
	// Line 335, Address: 0x165530, Func Offset: 0x140
	// Line 337, Address: 0x165538, Func Offset: 0x148
	// Line 338, Address: 0x165554, Func Offset: 0x164
	// Line 339, Address: 0x165558, Func Offset: 0x168
	// Line 340, Address: 0x165564, Func Offset: 0x174
	// Line 342, Address: 0x16556c, Func Offset: 0x17c
	// Line 343, Address: 0x165594, Func Offset: 0x1a4
	// Line 346, Address: 0x1655d8, Func Offset: 0x1e8
	// Line 347, Address: 0x1655f4, Func Offset: 0x204
	// Line 348, Address: 0x165610, Func Offset: 0x220
	// Line 350, Address: 0x16563c, Func Offset: 0x24c
	// Line 351, Address: 0x165644, Func Offset: 0x254
	// Line 352, Address: 0x165654, Func Offset: 0x264
	// Line 353, Address: 0x16565c, Func Offset: 0x26c
	// Line 354, Address: 0x165660, Func Offset: 0x270
	// Line 358, Address: 0x165668, Func Offset: 0x278
	// Line 359, Address: 0x165680, Func Offset: 0x290
	// Line 360, Address: 0x1656a4, Func Offset: 0x2b4
	// Line 361, Address: 0x1656b0, Func Offset: 0x2c0
	// Line 362, Address: 0x1656bc, Func Offset: 0x2cc
	// Line 363, Address: 0x1656c8, Func Offset: 0x2d8
	// Line 364, Address: 0x1656dc, Func Offset: 0x2ec
	// Line 365, Address: 0x1656e4, Func Offset: 0x2f4
	// Line 366, Address: 0x1656e8, Func Offset: 0x2f8
	// Line 367, Address: 0x16571c, Func Offset: 0x32c
	// Line 369, Address: 0x165720, Func Offset: 0x330
	// Line 370, Address: 0x16572c, Func Offset: 0x33c
	// Line 371, Address: 0x165738, Func Offset: 0x348
	// Line 372, Address: 0x165744, Func Offset: 0x354
	// Func End, Address: 0x165758, Func Offset: 0x368
}

// 
// Start address: 0x165760
void enTYUCtrlChase(EnLOCAL_DATA* dp)
{
	int t;
	// Line 376, Address: 0x165760, Func Offset: 0
	// Line 378, Address: 0x165774, Func Offset: 0x14
	// Line 379, Address: 0x165784, Func Offset: 0x24
	// Line 380, Address: 0x165790, Func Offset: 0x30
	// Line 382, Address: 0x165798, Func Offset: 0x38
	// Line 383, Address: 0x1657a4, Func Offset: 0x44
	// Line 384, Address: 0x1657b4, Func Offset: 0x54
	// Line 385, Address: 0x1657bc, Func Offset: 0x5c
	// Line 386, Address: 0x1657d8, Func Offset: 0x78
	// Line 387, Address: 0x1657e4, Func Offset: 0x84
	// Line 390, Address: 0x1657f0, Func Offset: 0x90
	// Line 392, Address: 0x165814, Func Offset: 0xb4
	// Line 393, Address: 0x16582c, Func Offset: 0xcc
	// Line 395, Address: 0x165878, Func Offset: 0x118
	// Line 396, Address: 0x165884, Func Offset: 0x124
	// Line 397, Address: 0x165890, Func Offset: 0x130
	// Line 398, Address: 0x16589c, Func Offset: 0x13c
	// Line 399, Address: 0x1658ac, Func Offset: 0x14c
	// Line 400, Address: 0x1658b4, Func Offset: 0x154
	// Line 401, Address: 0x1658b8, Func Offset: 0x158
	// Line 402, Address: 0x1658ec, Func Offset: 0x18c
	// Line 404, Address: 0x1658f0, Func Offset: 0x190
	// Line 405, Address: 0x1658fc, Func Offset: 0x19c
	// Line 406, Address: 0x165908, Func Offset: 0x1a8
	// Line 407, Address: 0x165914, Func Offset: 0x1b4
	// Func End, Address: 0x16592c, Func Offset: 0x1cc
}

// 
// Start address: 0x165930
void enTYUCtrlGathering(EnLOCAL_DATA* dp)
{
	EnCOMMUNICATION* comm;
	int t;
	// Line 411, Address: 0x165930, Func Offset: 0
	// Line 414, Address: 0x165948, Func Offset: 0x18
	// Line 415, Address: 0x165958, Func Offset: 0x28
	// Line 416, Address: 0x165964, Func Offset: 0x34
	// Line 418, Address: 0x16596c, Func Offset: 0x3c
	// Line 419, Address: 0x165990, Func Offset: 0x60
	// Line 420, Address: 0x165994, Func Offset: 0x64
	// Line 421, Address: 0x16599c, Func Offset: 0x6c
	// Line 422, Address: 0x1659a4, Func Offset: 0x74
	// Line 425, Address: 0x1659ac, Func Offset: 0x7c
	// Line 426, Address: 0x1659b8, Func Offset: 0x88
	// Line 427, Address: 0x1659c8, Func Offset: 0x98
	// Line 428, Address: 0x1659d4, Func Offset: 0xa4
	// Line 430, Address: 0x1659e0, Func Offset: 0xb0
	// Line 432, Address: 0x1659f8, Func Offset: 0xc8
	// Line 433, Address: 0x165a10, Func Offset: 0xe0
	// Line 435, Address: 0x165a50, Func Offset: 0x120
	// Line 436, Address: 0x165a5c, Func Offset: 0x12c
	// Line 437, Address: 0x165a68, Func Offset: 0x138
	// Line 438, Address: 0x165a74, Func Offset: 0x144
	// Line 439, Address: 0x165a88, Func Offset: 0x158
	// Line 441, Address: 0x165a90, Func Offset: 0x160
	// Line 442, Address: 0x165ac4, Func Offset: 0x194
	// Line 444, Address: 0x165ac8, Func Offset: 0x198
	// Line 445, Address: 0x165ad4, Func Offset: 0x1a4
	// Line 446, Address: 0x165ae0, Func Offset: 0x1b0
	// Line 447, Address: 0x165aec, Func Offset: 0x1bc
	// Func End, Address: 0x165b08, Func Offset: 0x1d8
}

// 
// Start address: 0x165b10
void enTYUCtrlEscape(EnLOCAL_DATA* dp)
{
	_CL_VHIT_RESULT* res;
	float vec[4];
	int t;
	// Line 451, Address: 0x165b10, Func Offset: 0
	// Line 454, Address: 0x165b20, Func Offset: 0x10
	// Line 455, Address: 0x165b30, Func Offset: 0x20
	// Line 456, Address: 0x165b3c, Func Offset: 0x2c
	// Line 458, Address: 0x165b44, Func Offset: 0x34
	// Line 459, Address: 0x165b50, Func Offset: 0x40
	// Line 460, Address: 0x165b60, Func Offset: 0x50
	// Line 461, Address: 0x165b74, Func Offset: 0x64
	// Line 462, Address: 0x165b80, Func Offset: 0x70
	// Line 464, Address: 0x165b8c, Func Offset: 0x7c
	// Line 465, Address: 0x165bac, Func Offset: 0x9c
	// Line 468, Address: 0x165bbc, Func Offset: 0xac
	// Line 469, Address: 0x165bf0, Func Offset: 0xe0
	// Line 470, Address: 0x165c0c, Func Offset: 0xfc
	// Line 472, Address: 0x165c38, Func Offset: 0x128
	// Line 473, Address: 0x165c40, Func Offset: 0x130
	// Line 474, Address: 0x165c50, Func Offset: 0x140
	// Line 475, Address: 0x165c58, Func Offset: 0x148
	// Line 476, Address: 0x165c60, Func Offset: 0x150
	// Line 477, Address: 0x165c64, Func Offset: 0x154
	// Line 481, Address: 0x165c6c, Func Offset: 0x15c
	// Line 482, Address: 0x165c84, Func Offset: 0x174
	// Line 483, Address: 0x165ca8, Func Offset: 0x198
	// Line 485, Address: 0x165cdc, Func Offset: 0x1cc
	// Line 486, Address: 0x165ce4, Func Offset: 0x1d4
	// Line 488, Address: 0x165cec, Func Offset: 0x1dc
	// Line 489, Address: 0x165cf8, Func Offset: 0x1e8
	// Line 490, Address: 0x165d00, Func Offset: 0x1f0
	// Line 492, Address: 0x165d08, Func Offset: 0x1f8
	// Line 493, Address: 0x165d3c, Func Offset: 0x22c
	// Line 494, Address: 0x165d40, Func Offset: 0x230
	// Line 496, Address: 0x165d48, Func Offset: 0x238
	// Line 497, Address: 0x165d54, Func Offset: 0x244
	// Line 498, Address: 0x165d60, Func Offset: 0x250
	// Line 499, Address: 0x165d6c, Func Offset: 0x25c
	// Func End, Address: 0x165d80, Func Offset: 0x270
}

// 
// Start address: 0x165d80
void enTYUCtrlOnWall(EnLOCAL_DATA* dp)
{
	float vec[4];
	// Line 503, Address: 0x165d80, Func Offset: 0
	// Line 504, Address: 0x165d90, Func Offset: 0x10
	// Line 505, Address: 0x165da0, Func Offset: 0x20
	// Line 506, Address: 0x165dac, Func Offset: 0x2c
	// Line 507, Address: 0x165db4, Func Offset: 0x34
	// Line 509, Address: 0x165dbc, Func Offset: 0x3c
	// Line 510, Address: 0x165dc8, Func Offset: 0x48
	// Line 512, Address: 0x165dd8, Func Offset: 0x58
	// Line 513, Address: 0x165dec, Func Offset: 0x6c
	// Line 514, Address: 0x165dfc, Func Offset: 0x7c
	// Line 515, Address: 0x165e04, Func Offset: 0x84
	// Line 517, Address: 0x165e0c, Func Offset: 0x8c
	// Line 519, Address: 0x165e14, Func Offset: 0x94
	// Line 521, Address: 0x165e20, Func Offset: 0xa0
	// Line 522, Address: 0x165e2c, Func Offset: 0xac
	// Line 523, Address: 0x165e4c, Func Offset: 0xcc
	// Line 525, Address: 0x165e74, Func Offset: 0xf4
	// Line 528, Address: 0x165e94, Func Offset: 0x114
	// Line 529, Address: 0x165ec0, Func Offset: 0x140
	// Line 530, Address: 0x165ecc, Func Offset: 0x14c
	// Line 531, Address: 0x165ed8, Func Offset: 0x158
	// Line 532, Address: 0x165ee0, Func Offset: 0x160
	// Line 533, Address: 0x165eec, Func Offset: 0x16c
	// Line 534, Address: 0x165ef4, Func Offset: 0x174
	// Line 535, Address: 0x165efc, Func Offset: 0x17c
	// Line 536, Address: 0x165f18, Func Offset: 0x198
	// Line 537, Address: 0x165f3c, Func Offset: 0x1bc
	// Line 538, Address: 0x165f48, Func Offset: 0x1c8
	// Line 541, Address: 0x165f50, Func Offset: 0x1d0
	// Line 542, Address: 0x165f58, Func Offset: 0x1d8
	// Line 543, Address: 0x165f78, Func Offset: 0x1f8
	// Line 546, Address: 0x165f90, Func Offset: 0x210
	// Line 547, Address: 0x165f98, Func Offset: 0x218
	// Line 549, Address: 0x165fb0, Func Offset: 0x230
	// Line 551, Address: 0x165fe8, Func Offset: 0x268
	// Line 553, Address: 0x165ff8, Func Offset: 0x278
	// Line 554, Address: 0x166004, Func Offset: 0x284
	// Line 555, Address: 0x166024, Func Offset: 0x2a4
	// Line 556, Address: 0x166030, Func Offset: 0x2b0
	// Line 557, Address: 0x16603c, Func Offset: 0x2bc
	// Func End, Address: 0x166050, Func Offset: 0x2d0
}

// 
// Start address: 0x166050
void enTYUCtrlOnCeiling(EnLOCAL_DATA* dp)
{
	float vec[4];
	// Line 561, Address: 0x166050, Func Offset: 0
	// Line 563, Address: 0x166060, Func Offset: 0x10
	// Line 564, Address: 0x166070, Func Offset: 0x20
	// Line 565, Address: 0x16607c, Func Offset: 0x2c
	// Line 566, Address: 0x166084, Func Offset: 0x34
	// Line 568, Address: 0x16608c, Func Offset: 0x3c
	// Line 569, Address: 0x166098, Func Offset: 0x48
	// Line 571, Address: 0x1660a0, Func Offset: 0x50
	// Line 572, Address: 0x1660ac, Func Offset: 0x5c
	// Line 573, Address: 0x1660c0, Func Offset: 0x70
	// Line 574, Address: 0x1660d4, Func Offset: 0x84
	// Line 576, Address: 0x1660e0, Func Offset: 0x90
	// Line 577, Address: 0x166108, Func Offset: 0xb8
	// Line 580, Address: 0x16614c, Func Offset: 0xfc
	// Line 581, Address: 0x166164, Func Offset: 0x114
	// Line 582, Address: 0x166180, Func Offset: 0x130
	// Line 584, Address: 0x166194, Func Offset: 0x144
	// Line 585, Address: 0x1661ac, Func Offset: 0x15c
	// Line 586, Address: 0x1661d0, Func Offset: 0x180
	// Line 587, Address: 0x1661dc, Func Offset: 0x18c
	// Line 588, Address: 0x1661e8, Func Offset: 0x198
	// Func End, Address: 0x1661fc, Func Offset: 0x1ac
}

// 
// Start address: 0x166200
void enTYUCtrlAttack(EnLOCAL_DATA* dp)
{
	int t;
	// Line 592, Address: 0x166200, Func Offset: 0
	// Line 594, Address: 0x166210, Func Offset: 0x10
	// Line 595, Address: 0x166220, Func Offset: 0x20
	// Line 596, Address: 0x16622c, Func Offset: 0x2c
	// Line 598, Address: 0x166234, Func Offset: 0x34
	// Line 599, Address: 0x166240, Func Offset: 0x40
	// Line 600, Address: 0x16624c, Func Offset: 0x4c
	// Line 601, Address: 0x166258, Func Offset: 0x58
	// Line 603, Address: 0x166264, Func Offset: 0x64
	// Line 604, Address: 0x166274, Func Offset: 0x74
	// Line 605, Address: 0x166288, Func Offset: 0x88
	// Line 606, Address: 0x166294, Func Offset: 0x94
	// Line 607, Address: 0x1662a0, Func Offset: 0xa0
	// Line 608, Address: 0x1662c8, Func Offset: 0xc8
	// Line 609, Address: 0x1662cc, Func Offset: 0xcc
	// Line 610, Address: 0x1662d4, Func Offset: 0xd4
	// Line 612, Address: 0x1662e0, Func Offset: 0xe0
	// Line 613, Address: 0x1662f4, Func Offset: 0xf4
	// Line 614, Address: 0x1662fc, Func Offset: 0xfc
	// Line 615, Address: 0x166304, Func Offset: 0x104
	// Line 617, Address: 0x16630c, Func Offset: 0x10c
	// Line 618, Address: 0x166310, Func Offset: 0x110
	// Line 619, Address: 0x16631c, Func Offset: 0x11c
	// Func End, Address: 0x166330, Func Offset: 0x130
}

// 
// Start address: 0x166330
void enTYUCtrlDown(EnLOCAL_DATA* dp)
{
	_CL_VHIT_RESULT* res;
	// Line 623, Address: 0x166330, Func Offset: 0
	// Line 624, Address: 0x166344, Func Offset: 0x14
	// Line 626, Address: 0x166388, Func Offset: 0x58
	// Line 627, Address: 0x166398, Func Offset: 0x68
	// Line 629, Address: 0x1663a8, Func Offset: 0x78
	// Line 630, Address: 0x1663cc, Func Offset: 0x9c
	// Line 631, Address: 0x1663d8, Func Offset: 0xa8
	// Line 632, Address: 0x1663e0, Func Offset: 0xb0
	// Line 634, Address: 0x1663ec, Func Offset: 0xbc
	// Line 635, Address: 0x1663f8, Func Offset: 0xc8
	// Line 637, Address: 0x16641c, Func Offset: 0xec
	// Line 640, Address: 0x166444, Func Offset: 0x114
	// Line 641, Address: 0x166450, Func Offset: 0x120
	// Line 642, Address: 0x166464, Func Offset: 0x134
	// Line 643, Address: 0x166474, Func Offset: 0x144
	// Line 646, Address: 0x16649c, Func Offset: 0x16c
	// Line 647, Address: 0x1664b0, Func Offset: 0x180
	// Line 648, Address: 0x1664bc, Func Offset: 0x18c
	// Line 649, Address: 0x1664c8, Func Offset: 0x198
	// Line 650, Address: 0x1664d0, Func Offset: 0x1a0
	// Line 651, Address: 0x1664e0, Func Offset: 0x1b0
	// Line 653, Address: 0x1664e8, Func Offset: 0x1b8
	// Line 654, Address: 0x1664f0, Func Offset: 0x1c0
	// Line 656, Address: 0x1664fc, Func Offset: 0x1cc
	// Line 658, Address: 0x166504, Func Offset: 0x1d4
	// Line 659, Address: 0x166514, Func Offset: 0x1e4
	// Line 660, Address: 0x166520, Func Offset: 0x1f0
	// Line 661, Address: 0x166534, Func Offset: 0x204
	// Line 662, Address: 0x166544, Func Offset: 0x214
	// Line 665, Address: 0x16656c, Func Offset: 0x23c
	// Line 666, Address: 0x166580, Func Offset: 0x250
	// Line 667, Address: 0x16658c, Func Offset: 0x25c
	// Line 668, Address: 0x166598, Func Offset: 0x268
	// Line 669, Address: 0x1665a0, Func Offset: 0x270
	// Line 670, Address: 0x1665b0, Func Offset: 0x280
	// Line 672, Address: 0x1665b8, Func Offset: 0x288
	// Line 674, Address: 0x1665c0, Func Offset: 0x290
	// Line 675, Address: 0x1665dc, Func Offset: 0x2ac
	// Line 676, Address: 0x1665e8, Func Offset: 0x2b8
	// Line 677, Address: 0x1665f0, Func Offset: 0x2c0
	// Line 679, Address: 0x1665fc, Func Offset: 0x2cc
	// Line 681, Address: 0x166608, Func Offset: 0x2d8
	// Line 682, Address: 0x166630, Func Offset: 0x300
	// Line 683, Address: 0x16663c, Func Offset: 0x30c
	// Line 684, Address: 0x166658, Func Offset: 0x328
	// Line 685, Address: 0x16666c, Func Offset: 0x33c
	// Line 686, Address: 0x166678, Func Offset: 0x348
	// Line 687, Address: 0x166680, Func Offset: 0x350
	// Line 689, Address: 0x16668c, Func Offset: 0x35c
	// Line 693, Address: 0x166694, Func Offset: 0x364
	// Line 694, Address: 0x1666a4, Func Offset: 0x374
	// Line 695, Address: 0x1666b0, Func Offset: 0x380
	// Line 696, Address: 0x1666bc, Func Offset: 0x38c
	// Line 697, Address: 0x1666d0, Func Offset: 0x3a0
	// Line 698, Address: 0x1666dc, Func Offset: 0x3ac
	// Line 699, Address: 0x1666e8, Func Offset: 0x3b8
	// Line 701, Address: 0x1666f0, Func Offset: 0x3c0
	// Line 702, Address: 0x166700, Func Offset: 0x3d0
	// Line 703, Address: 0x16671c, Func Offset: 0x3ec
	// Line 704, Address: 0x166728, Func Offset: 0x3f8
	// Line 706, Address: 0x166734, Func Offset: 0x404
	// Line 708, Address: 0x16673c, Func Offset: 0x40c
	// Line 709, Address: 0x166744, Func Offset: 0x414
	// Line 711, Address: 0x16674c, Func Offset: 0x41c
	// Line 712, Address: 0x166758, Func Offset: 0x428
	// Line 713, Address: 0x166764, Func Offset: 0x434
	// Line 715, Address: 0x166770, Func Offset: 0x440
	// Line 716, Address: 0x166788, Func Offset: 0x458
	// Line 717, Address: 0x166790, Func Offset: 0x460
	// Line 718, Address: 0x1667bc, Func Offset: 0x48c
	// Line 719, Address: 0x1667c4, Func Offset: 0x494
	// Line 720, Address: 0x1667d0, Func Offset: 0x4a0
	// Line 721, Address: 0x1667dc, Func Offset: 0x4ac
	// Line 722, Address: 0x1667e8, Func Offset: 0x4b8
	// Line 723, Address: 0x1667f4, Func Offset: 0x4c4
	// Line 725, Address: 0x166818, Func Offset: 0x4e8
	// Line 726, Address: 0x166820, Func Offset: 0x4f0
	// Line 727, Address: 0x166828, Func Offset: 0x4f8
	// Line 729, Address: 0x16682c, Func Offset: 0x4fc
	// Line 730, Address: 0x166830, Func Offset: 0x500
	// Line 733, Address: 0x166838, Func Offset: 0x508
	// Line 736, Address: 0x166844, Func Offset: 0x514
	// Line 737, Address: 0x166850, Func Offset: 0x520
	// Func End, Address: 0x166868, Func Offset: 0x538
}

// 
// Start address: 0x166870
void enTYUCtrlDead(EnLOCAL_DATA* dp)
{
	float rot[4];
	float pos[4];
	short id;
	// Line 741, Address: 0x166870, Func Offset: 0
	// Line 742, Address: 0x166880, Func Offset: 0x10
	// Line 743, Address: 0x16688c, Func Offset: 0x1c
	// Line 744, Address: 0x166894, Func Offset: 0x24
	// Line 745, Address: 0x1668a0, Func Offset: 0x30
	// Line 746, Address: 0x1668ac, Func Offset: 0x3c
	// Line 747, Address: 0x1668b8, Func Offset: 0x48
	// Line 748, Address: 0x1668fc, Func Offset: 0x8c
	// Line 749, Address: 0x166908, Func Offset: 0x98
	// Line 753, Address: 0x16691c, Func Offset: 0xac
	// Line 755, Address: 0x166930, Func Offset: 0xc0
	// Line 756, Address: 0x166940, Func Offset: 0xd0
	// Line 758, Address: 0x166950, Func Offset: 0xe0
	// Line 760, Address: 0x166964, Func Offset: 0xf4
	// Line 768, Address: 0x166970, Func Offset: 0x100
	// Func End, Address: 0x166984, Func Offset: 0x114
}

// 
// Start address: 0x166990
int enTYUSetPathV(EnLOCAL_DATA* dp)
{
	int k;
	float rot[4];
	float pos[4];
	float rmat[4][4];
	float d2;
	float d1;
	float a2;
	float a1;
	float a;
	float ma;
	float dist;
	EnPATH_DATA* p;
	// Line 773, Address: 0x166990, Func Offset: 0
	// Line 774, Address: 0x1669bc, Func Offset: 0x2c
	// Line 779, Address: 0x1669c0, Func Offset: 0x30
	// Line 780, Address: 0x1669e8, Func Offset: 0x58
	// Line 781, Address: 0x166a28, Func Offset: 0x98
	// Line 782, Address: 0x166a30, Func Offset: 0xa0
	// Line 783, Address: 0x166a38, Func Offset: 0xa8
	// Line 784, Address: 0x166a64, Func Offset: 0xd4
	// Line 785, Address: 0x166a80, Func Offset: 0xf0
	// Line 786, Address: 0x166a8c, Func Offset: 0xfc
	// Line 787, Address: 0x166aa4, Func Offset: 0x114
	// Line 788, Address: 0x166aa8, Func Offset: 0x118
	// Line 789, Address: 0x166ac0, Func Offset: 0x130
	// Line 790, Address: 0x166ac8, Func Offset: 0x138
	// Line 791, Address: 0x166acc, Func Offset: 0x13c
	// Line 792, Address: 0x166ad0, Func Offset: 0x140
	// Line 794, Address: 0x166adc, Func Offset: 0x14c
	// Line 795, Address: 0x166ae0, Func Offset: 0x150
	// Line 796, Address: 0x166af0, Func Offset: 0x160
	// Line 798, Address: 0x166b1c, Func Offset: 0x18c
	// Line 799, Address: 0x166b20, Func Offset: 0x190
	// Line 800, Address: 0x166b38, Func Offset: 0x1a8
	// Line 801, Address: 0x166b54, Func Offset: 0x1c4
	// Line 802, Address: 0x166b6c, Func Offset: 0x1dc
	// Line 803, Address: 0x166b84, Func Offset: 0x1f4
	// Line 804, Address: 0x166bac, Func Offset: 0x21c
	// Line 805, Address: 0x166bb0, Func Offset: 0x220
	// Line 806, Address: 0x166be0, Func Offset: 0x250
	// Line 807, Address: 0x166be4, Func Offset: 0x254
	// Line 808, Address: 0x166bec, Func Offset: 0x25c
	// Line 809, Address: 0x166c34, Func Offset: 0x2a4
	// Line 810, Address: 0x166c48, Func Offset: 0x2b8
	// Line 811, Address: 0x166c50, Func Offset: 0x2c0
	// Line 812, Address: 0x166c58, Func Offset: 0x2c8
	// Line 813, Address: 0x166c6c, Func Offset: 0x2dc
	// Line 816, Address: 0x166c74, Func Offset: 0x2e4
	// Line 818, Address: 0x166c7c, Func Offset: 0x2ec
	// Line 819, Address: 0x166c90, Func Offset: 0x300
	// Line 820, Address: 0x166cb4, Func Offset: 0x324
	// Line 821, Address: 0x166ce4, Func Offset: 0x354
	// Line 822, Address: 0x166d20, Func Offset: 0x390
	// Line 823, Address: 0x166d24, Func Offset: 0x394
	// Line 824, Address: 0x166d40, Func Offset: 0x3b0
	// Line 825, Address: 0x166d58, Func Offset: 0x3c8
	// Line 826, Address: 0x166d5c, Func Offset: 0x3cc
	// Line 828, Address: 0x166d64, Func Offset: 0x3d4
	// Line 829, Address: 0x166d68, Func Offset: 0x3d8
	// Line 830, Address: 0x166d80, Func Offset: 0x3f0
	// Line 833, Address: 0x166d98, Func Offset: 0x408
	// Line 834, Address: 0x166da8, Func Offset: 0x418
	// Line 835, Address: 0x166dac, Func Offset: 0x41c
	// Line 837, Address: 0x166db0, Func Offset: 0x420
	// Line 838, Address: 0x166df0, Func Offset: 0x460
	// Line 839, Address: 0x166df4, Func Offset: 0x464
	// Line 840, Address: 0x166e0c, Func Offset: 0x47c
	// Line 841, Address: 0x166e24, Func Offset: 0x494
	// Line 842, Address: 0x166e28, Func Offset: 0x498
	// Line 843, Address: 0x166e40, Func Offset: 0x4b0
	// Line 844, Address: 0x166e44, Func Offset: 0x4b4
	// Line 846, Address: 0x166e4c, Func Offset: 0x4bc
	// Line 847, Address: 0x166e50, Func Offset: 0x4c0
	// Line 849, Address: 0x166e58, Func Offset: 0x4c8
	// Line 851, Address: 0x166e60, Func Offset: 0x4d0
	// Line 852, Address: 0x166e64, Func Offset: 0x4d4
	// Line 853, Address: 0x166e94, Func Offset: 0x504
	// Line 854, Address: 0x166e98, Func Offset: 0x508
	// Line 856, Address: 0x166ea0, Func Offset: 0x510
	// Line 859, Address: 0x166ea8, Func Offset: 0x518
	// Line 860, Address: 0x166ec8, Func Offset: 0x538
	// Line 861, Address: 0x166ecc, Func Offset: 0x53c
	// Line 862, Address: 0x166ee8, Func Offset: 0x558
	// Line 863, Address: 0x166f08, Func Offset: 0x578
	// Line 864, Address: 0x166f0c, Func Offset: 0x57c
	// Line 865, Address: 0x166f24, Func Offset: 0x594
	// Line 866, Address: 0x166f3c, Func Offset: 0x5ac
	// Line 867, Address: 0x166f4c, Func Offset: 0x5bc
	// Line 868, Address: 0x166f5c, Func Offset: 0x5cc
	// Line 869, Address: 0x166f60, Func Offset: 0x5d0
	// Line 871, Address: 0x166f64, Func Offset: 0x5d4
	// Line 872, Address: 0x166f6c, Func Offset: 0x5dc
	// Line 873, Address: 0x166f70, Func Offset: 0x5e0
	// Line 875, Address: 0x166f74, Func Offset: 0x5e4
	// Line 876, Address: 0x166f8c, Func Offset: 0x5fc
	// Line 877, Address: 0x166f90, Func Offset: 0x600
	// Line 878, Address: 0x166f94, Func Offset: 0x604
	// Line 879, Address: 0x166f9c, Func Offset: 0x60c
	// Line 880, Address: 0x166fac, Func Offset: 0x61c
	// Line 881, Address: 0x166fb0, Func Offset: 0x620
	// Line 882, Address: 0x166fb8, Func Offset: 0x628
	// Line 884, Address: 0x166fbc, Func Offset: 0x62c
	// Line 886, Address: 0x166fcc, Func Offset: 0x63c
	// Line 887, Address: 0x166fe0, Func Offset: 0x650
	// Line 890, Address: 0x166fe4, Func Offset: 0x654
	// Line 892, Address: 0x166fe8, Func Offset: 0x658
	// Line 893, Address: 0x166ff8, Func Offset: 0x668
	// Line 894, Address: 0x166ffc, Func Offset: 0x66c
	// Func End, Address: 0x16702c, Func Offset: 0x69c
}

// 
// Start address: 0x167030
int enTYUCheckNormal(float* normal)
{
	float dz;
	float dy;
	float dx;
	// Line 901, Address: 0x167030, Func Offset: 0
	// Line 902, Address: 0x167058, Func Offset: 0x28
	// Line 903, Address: 0x16705c, Func Offset: 0x2c
	// Line 904, Address: 0x167060, Func Offset: 0x30
	// Line 906, Address: 0x167080, Func Offset: 0x50
	// Func End, Address: 0x167088, Func Offset: 0x58
}

// 
// Start address: 0x167090
int enTYUCheckNearWall(EnLOCAL_DATA* dp)
{
	float dm;
	float r;
	float d;
	float cp[4];
	float vec[4];
	float ep[4];
	float sp[4];
	_CL_VHIT_RESULT* res;
	// Line 912, Address: 0x167090, Func Offset: 0
	// Line 913, Address: 0x1670ac, Func Offset: 0x1c
	// Line 917, Address: 0x1670b4, Func Offset: 0x24
	// Line 918, Address: 0x1670c0, Func Offset: 0x30
	// Line 919, Address: 0x1670d8, Func Offset: 0x48
	// Line 920, Address: 0x1670f8, Func Offset: 0x68
	// Line 921, Address: 0x167114, Func Offset: 0x84
	// Line 922, Address: 0x167120, Func Offset: 0x90
	// Line 923, Address: 0x167130, Func Offset: 0xa0
	// Line 924, Address: 0x167158, Func Offset: 0xc8
	// Line 925, Address: 0x167180, Func Offset: 0xf0
	// Line 926, Address: 0x1671a0, Func Offset: 0x110
	// Line 927, Address: 0x1671b8, Func Offset: 0x128
	// Line 929, Address: 0x1671c4, Func Offset: 0x134
	// Line 930, Address: 0x1671d8, Func Offset: 0x148
	// Line 931, Address: 0x1671ec, Func Offset: 0x15c
	// Line 932, Address: 0x1671fc, Func Offset: 0x16c
	// Line 933, Address: 0x16720c, Func Offset: 0x17c
	// Line 934, Address: 0x167220, Func Offset: 0x190
	// Line 935, Address: 0x167230, Func Offset: 0x1a0
	// Line 936, Address: 0x167260, Func Offset: 0x1d0
	// Line 937, Address: 0x167270, Func Offset: 0x1e0
	// Line 938, Address: 0x167274, Func Offset: 0x1e4
	// Line 939, Address: 0x16729c, Func Offset: 0x20c
	// Line 940, Address: 0x1672bc, Func Offset: 0x22c
	// Line 941, Address: 0x1672d4, Func Offset: 0x244
	// Line 944, Address: 0x1672e0, Func Offset: 0x250
	// Line 945, Address: 0x1672f4, Func Offset: 0x264
	// Line 946, Address: 0x167308, Func Offset: 0x278
	// Line 947, Address: 0x167318, Func Offset: 0x288
	// Line 948, Address: 0x167328, Func Offset: 0x298
	// Line 949, Address: 0x16733c, Func Offset: 0x2ac
	// Line 950, Address: 0x16734c, Func Offset: 0x2bc
	// Line 951, Address: 0x16737c, Func Offset: 0x2ec
	// Line 952, Address: 0x16738c, Func Offset: 0x2fc
	// Line 953, Address: 0x167390, Func Offset: 0x300
	// Line 954, Address: 0x1673b8, Func Offset: 0x328
	// Line 955, Address: 0x1673d8, Func Offset: 0x348
	// Line 956, Address: 0x1673f0, Func Offset: 0x360
	// Line 959, Address: 0x1673fc, Func Offset: 0x36c
	// Line 960, Address: 0x167410, Func Offset: 0x380
	// Line 961, Address: 0x167424, Func Offset: 0x394
	// Line 962, Address: 0x167434, Func Offset: 0x3a4
	// Line 963, Address: 0x167444, Func Offset: 0x3b4
	// Line 964, Address: 0x167458, Func Offset: 0x3c8
	// Line 965, Address: 0x167468, Func Offset: 0x3d8
	// Line 966, Address: 0x167498, Func Offset: 0x408
	// Line 967, Address: 0x1674a8, Func Offset: 0x418
	// Line 968, Address: 0x1674ac, Func Offset: 0x41c
	// Line 969, Address: 0x1674d4, Func Offset: 0x444
	// Line 970, Address: 0x1674f4, Func Offset: 0x464
	// Line 971, Address: 0x16750c, Func Offset: 0x47c
	// Line 974, Address: 0x167518, Func Offset: 0x488
	// Line 975, Address: 0x167544, Func Offset: 0x4b4
	// Line 976, Address: 0x167550, Func Offset: 0x4c0
	// Line 977, Address: 0x167558, Func Offset: 0x4c8
	// Line 978, Address: 0x167570, Func Offset: 0x4e0
	// Line 979, Address: 0x167584, Func Offset: 0x4f4
	// Line 980, Address: 0x16758c, Func Offset: 0x4fc
	// Line 981, Address: 0x1675b4, Func Offset: 0x524
	// Line 982, Address: 0x1675c4, Func Offset: 0x534
	// Line 983, Address: 0x1675c8, Func Offset: 0x538
	// Func End, Address: 0x1675e8, Func Offset: 0x558
}

// 
// Start address: 0x1675f0
void enTYUCheckWall(EnLOCAL_DATA* dp)
{
	float r;
	float tpos[4];
	float d;
	float vec[4];
	float ep[4];
	float sp[4];
	_CL_VHIT_RESULT* res;
	// Line 987, Address: 0x1675f0, Func Offset: 0
	// Line 988, Address: 0x167608, Func Offset: 0x18
	// Line 991, Address: 0x167610, Func Offset: 0x20
	// Line 992, Address: 0x16762c, Func Offset: 0x3c
	// Line 993, Address: 0x16764c, Func Offset: 0x5c
	// Line 994, Address: 0x167668, Func Offset: 0x78
	// Line 995, Address: 0x167678, Func Offset: 0x88
	// Line 996, Address: 0x167690, Func Offset: 0xa0
	// Line 997, Address: 0x16769c, Func Offset: 0xac
	// Line 998, Address: 0x1676a4, Func Offset: 0xb4
	// Line 999, Address: 0x1676bc, Func Offset: 0xcc
	// Line 1001, Address: 0x1676c8, Func Offset: 0xd8
	// Line 1002, Address: 0x1676dc, Func Offset: 0xec
	// Line 1003, Address: 0x1676ec, Func Offset: 0xfc
	// Line 1004, Address: 0x167724, Func Offset: 0x134
	// Line 1007, Address: 0x167740, Func Offset: 0x150
	// Line 1008, Address: 0x167768, Func Offset: 0x178
	// Line 1009, Address: 0x16777c, Func Offset: 0x18c
	// Line 1010, Address: 0x167794, Func Offset: 0x1a4
	// Line 1011, Address: 0x1677a0, Func Offset: 0x1b0
	// Line 1012, Address: 0x1677b0, Func Offset: 0x1c0
	// Line 1013, Address: 0x1677c0, Func Offset: 0x1d0
	// Line 1014, Address: 0x1677d8, Func Offset: 0x1e8
	// Line 1015, Address: 0x1677e0, Func Offset: 0x1f0
	// Line 1017, Address: 0x1677f8, Func Offset: 0x208
	// Line 1018, Address: 0x16780c, Func Offset: 0x21c
	// Line 1019, Address: 0x16781c, Func Offset: 0x22c
	// Line 1020, Address: 0x167834, Func Offset: 0x244
	// Line 1021, Address: 0x167840, Func Offset: 0x250
	// Line 1022, Address: 0x167844, Func Offset: 0x254
	// Line 1026, Address: 0x16785c, Func Offset: 0x26c
	// Func End, Address: 0x167878, Func Offset: 0x288
}

// 
// Start address: 0x167880
void enTYUCheckUnderWall(EnLOCAL_DATA* dp)
{
	float vec[4];
	float ep[4];
	float sp[4];
	_CL_VHIT_RESULT* res;
	// Line 1031, Address: 0x167880, Func Offset: 0
	// Line 1032, Address: 0x167894, Func Offset: 0x14
	// Line 1035, Address: 0x16789c, Func Offset: 0x1c
	// Line 1036, Address: 0x1678bc, Func Offset: 0x3c
	// Line 1037, Address: 0x1678dc, Func Offset: 0x5c
	// Line 1038, Address: 0x1678f8, Func Offset: 0x78
	// Line 1039, Address: 0x167904, Func Offset: 0x84
	// Line 1040, Address: 0x167914, Func Offset: 0x94
	// Line 1041, Address: 0x16793c, Func Offset: 0xbc
	// Line 1042, Address: 0x16795c, Func Offset: 0xdc
	// Line 1043, Address: 0x167970, Func Offset: 0xf0
	// Line 1044, Address: 0x16797c, Func Offset: 0xfc
	// Line 1045, Address: 0x167988, Func Offset: 0x108
	// Line 1046, Address: 0x167990, Func Offset: 0x110
	// Line 1047, Address: 0x16799c, Func Offset: 0x11c
	// Line 1048, Address: 0x1679a4, Func Offset: 0x124
	// Line 1049, Address: 0x1679a8, Func Offset: 0x128
	// Func End, Address: 0x1679c0, Func Offset: 0x140
}

// 
// Start address: 0x1679c0
int enTYUCanSeePlayer(EnLOCAL_DATA* dp)
{
	float feel_range[5];
	float a;
	float dist;
	// Line 1054, Address: 0x1679c0, Func Offset: 0
	// Line 1056, Address: 0x1679d4, Func Offset: 0x14
	// Line 1063, Address: 0x1679f0, Func Offset: 0x30
	// Line 1065, Address: 0x167a00, Func Offset: 0x40
	// Line 1067, Address: 0x167a0c, Func Offset: 0x4c
	// Line 1068, Address: 0x167a10, Func Offset: 0x50
	// Line 1069, Address: 0x167a30, Func Offset: 0x70
	// Line 1070, Address: 0x167a78, Func Offset: 0xb8
	// Line 1071, Address: 0x167a98, Func Offset: 0xd8
	// Line 1073, Address: 0x167ac4, Func Offset: 0x104
	// Func End, Address: 0x167adc, Func Offset: 0x11c
}

// 
// Start address: 0x167ae0
void enTYUCheckNearPlayer(EnLOCAL_DATA* dp)
{
	// Line 1077, Address: 0x167ae0, Func Offset: 0
	// Line 1078, Address: 0x167ae8, Func Offset: 0x8
	// Line 1079, Address: 0x167b00, Func Offset: 0x20
	// Func End, Address: 0x167b10, Func Offset: 0x30
}

// 
// Start address: 0x167b10
void enTYUAnimeSet(EnLOCAL_DATA* dp, int anim)
{
	// Line 1083, Address: 0x167b10, Func Offset: 0
	// Line 1084, Address: 0x167b28, Func Offset: 0x18
	// Line 1085, Address: 0x167b34, Func Offset: 0x24
	// Line 1086, Address: 0x167b3c, Func Offset: 0x2c
	// Line 1089, Address: 0x167b44, Func Offset: 0x34
	// Line 1090, Address: 0x167b84, Func Offset: 0x74
	// Line 1091, Address: 0x167ba8, Func Offset: 0x98
	// Func End, Address: 0x167bc0, Func Offset: 0xb0
}

// 
// Start address: 0x167bc0
void enTYUAnimeExec(EnLOCAL_DATA* dp)
{
	// Line 1103, Address: 0x167bc0, Func Offset: 0
	// Line 1104, Address: 0x167bc8, Func Offset: 0x8
	// Line 1105, Address: 0x167bdc, Func Offset: 0x1c
	// Func End, Address: 0x167bec, Func Offset: 0x2c
}

// 
// Start address: 0x167bf0
float enTYUGetSpeed()
{
	float speed_rate[5];
	// Line 1109, Address: 0x167bf0, Func Offset: 0
	// Line 1110, Address: 0x167bf8, Func Offset: 0x8
	// Line 1117, Address: 0x167c14, Func Offset: 0x24
	// Line 1118, Address: 0x167c38, Func Offset: 0x48
	// Func End, Address: 0x167c48, Func Offset: 0x58
}

// 
// Start address: 0x167c50
void enTYUSetAttackTime(EnLOCAL_DATA* dp)
{
	short attack_time[5];
	// Line 1122, Address: 0x167c50, Func Offset: 0
	// Line 1123, Address: 0x167c60, Func Offset: 0x10
	// Line 1130, Address: 0x167c7c, Func Offset: 0x2c
	// Line 1131, Address: 0x167c9c, Func Offset: 0x4c
	// Func End, Address: 0x167cb0, Func Offset: 0x60
}

// 
// Start address: 0x167cb0
void enTYUSetStopTime(EnLOCAL_DATA* dp)
{
	short stop_time[5];
	// Line 1135, Address: 0x167cb0, Func Offset: 0
	// Line 1136, Address: 0x167cc0, Func Offset: 0x10
	// Line 1143, Address: 0x167cdc, Func Offset: 0x2c
	// Line 1144, Address: 0x167cfc, Func Offset: 0x4c
	// Func End, Address: 0x167d10, Func Offset: 0x60
}

// 
// Start address: 0x167d10
void enTYUSetDownTime(EnLOCAL_DATA* dp)
{
	short down_time[5];
	// Line 1148, Address: 0x167d10, Func Offset: 0
	// Line 1149, Address: 0x167d20, Func Offset: 0x10
	// Line 1156, Address: 0x167d3c, Func Offset: 0x2c
	// Line 1157, Address: 0x167d5c, Func Offset: 0x4c
	// Func End, Address: 0x167d70, Func Offset: 0x60
}

// 
// Start address: 0x167d70
void enTYUSoundMove(EnLOCAL_DATA* dp)
{
	char r;
	// Line 1161, Address: 0x167d70, Func Offset: 0
	// Line 1164, Address: 0x167d84, Func Offset: 0x14
	// Line 1165, Address: 0x167db0, Func Offset: 0x40
	// Line 1166, Address: 0x167dc0, Func Offset: 0x50
	// Line 1168, Address: 0x167dd0, Func Offset: 0x60
	// Line 1169, Address: 0x167dfc, Func Offset: 0x8c
	// Line 1170, Address: 0x167e08, Func Offset: 0x98
	// Line 1171, Address: 0x167e30, Func Offset: 0xc0
	// Line 1172, Address: 0x167e54, Func Offset: 0xe4
	// Line 1174, Address: 0x167e5c, Func Offset: 0xec
	// Line 1175, Address: 0x167e88, Func Offset: 0x118
	// Line 1176, Address: 0x167e94, Func Offset: 0x124
	// Line 1178, Address: 0x167ebc, Func Offset: 0x14c
	// Line 1181, Address: 0x167ec0, Func Offset: 0x150
	// Func End, Address: 0x167ed8, Func Offset: 0x168
}

// 
// Start address: 0x167ee0
void enTY2InitData(EnLOCAL_DATA* dp)
{
	// Line 1189, Address: 0x167ee0, Func Offset: 0
	// Line 1190, Address: 0x167ef0, Func Offset: 0x10
	// Line 1191, Address: 0x167ef8, Func Offset: 0x18
	// Line 1192, Address: 0x167f20, Func Offset: 0x40
	// Line 1193, Address: 0x167f28, Func Offset: 0x48
	// Line 1194, Address: 0x167f44, Func Offset: 0x64
	// Line 1195, Address: 0x167f4c, Func Offset: 0x6c
	// Line 1197, Address: 0x167f8c, Func Offset: 0xac
	// Line 1198, Address: 0x167f94, Func Offset: 0xb4
	// Line 1199, Address: 0x167f9c, Func Offset: 0xbc
	// Line 1200, Address: 0x167fb0, Func Offset: 0xd0
	// Line 1203, Address: 0x167fb8, Func Offset: 0xd8
	// Line 1204, Address: 0x167fc4, Func Offset: 0xe4
	// Line 1206, Address: 0x167fcc, Func Offset: 0xec
	// Line 1207, Address: 0x167fd8, Func Offset: 0xf8
	// Line 1209, Address: 0x167fe0, Func Offset: 0x100
	// Line 1212, Address: 0x167fe8, Func Offset: 0x108
	// Line 1213, Address: 0x167ff4, Func Offset: 0x114
	// Func End, Address: 0x168008, Func Offset: 0x128
}

// 
// Start address: 0x168010
void enTY2CtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlTY2SubFunc)(EnLOCAL_DATA*)[4];
	// Line 1219, Address: 0x168010, Func Offset: 0
	// Line 1220, Address: 0x168020, Func Offset: 0x10
	// Line 1227, Address: 0x168034, Func Offset: 0x24
	// Line 1229, Address: 0x168040, Func Offset: 0x30
	// Line 1232, Address: 0x16805c, Func Offset: 0x4c
	// Line 1233, Address: 0x168068, Func Offset: 0x58
	// Func End, Address: 0x16807c, Func Offset: 0x6c
}

// 
// Start address: 0x168080
void enTY2CtrlFloor(EnLOCAL_DATA* dp)
{
	// Line 1237, Address: 0x168080, Func Offset: 0
	// Line 1238, Address: 0x168090, Func Offset: 0x10
	// Line 1239, Address: 0x1680a0, Func Offset: 0x20
	// Line 1240, Address: 0x1680ac, Func Offset: 0x2c
	// Line 1242, Address: 0x1680b8, Func Offset: 0x38
	// Func End, Address: 0x1680cc, Func Offset: 0x4c
}

// 
// Start address: 0x1680d0
void enTY2CtrlWall(EnLOCAL_DATA* dp)
{
	// Line 1246, Address: 0x1680d0, Func Offset: 0
	// Line 1247, Address: 0x1680e0, Func Offset: 0x10
	// Line 1249, Address: 0x1680ec, Func Offset: 0x1c
	// Line 1252, Address: 0x1680fc, Func Offset: 0x2c
	// Line 1254, Address: 0x168108, Func Offset: 0x38
	// Line 1255, Address: 0x16811c, Func Offset: 0x4c
	// Line 1256, Address: 0x168128, Func Offset: 0x58
	// Line 1258, Address: 0x168134, Func Offset: 0x64
	// Func End, Address: 0x168148, Func Offset: 0x78
}

// 
// Start address: 0x168150
void enTY2CtrlCeiling(EnLOCAL_DATA* dp)
{
	// Line 1262, Address: 0x168150, Func Offset: 0
	// Line 1263, Address: 0x168160, Func Offset: 0x10
	// Line 1264, Address: 0x16816c, Func Offset: 0x1c
	// Line 1266, Address: 0x168174, Func Offset: 0x24
	// Line 1267, Address: 0x168180, Func Offset: 0x30
	// Line 1268, Address: 0x168194, Func Offset: 0x44
	// Line 1269, Address: 0x1681a8, Func Offset: 0x58
	// Line 1271, Address: 0x1681b4, Func Offset: 0x64
	// Line 1272, Address: 0x1681c8, Func Offset: 0x78
	// Line 1273, Address: 0x1681d4, Func Offset: 0x84
	// Line 1275, Address: 0x1681e0, Func Offset: 0x90
	// Func End, Address: 0x1681f4, Func Offset: 0xa4
}

// 
// Start address: 0x168200
void enTY2CtrlDead(EnLOCAL_DATA* dp)
{
	// Line 1279, Address: 0x168200, Func Offset: 0
	// Line 1280, Address: 0x168210, Func Offset: 0x10
	// Line 1281, Address: 0x16821c, Func Offset: 0x1c
	// Line 1282, Address: 0x168224, Func Offset: 0x24
	// Line 1283, Address: 0x168230, Func Offset: 0x30
	// Line 1284, Address: 0x16823c, Func Offset: 0x3c
	// Line 1285, Address: 0x168280, Func Offset: 0x80
	// Line 1287, Address: 0x16828c, Func Offset: 0x8c
	// Func End, Address: 0x1682a0, Func Offset: 0xa0
}

// 
// Start address: 0x1682a0
void enTY2CheckCreateCharacter(EnLOCAL_DATA* dp)
{
	int i;
	EnLOCAL_DATA* tp;
	SubCharacter* scp;
	// Line 1291, Address: 0x1682a0, Func Offset: 0
	// Line 1294, Address: 0x1682b0, Func Offset: 0x10
	// Line 1296, Address: 0x1682c4, Func Offset: 0x24
	// Line 1297, Address: 0x1682cc, Func Offset: 0x2c
	// Line 1298, Address: 0x1682d8, Func Offset: 0x38
	// Line 1299, Address: 0x1682e8, Func Offset: 0x48
	// Line 1300, Address: 0x1682f8, Func Offset: 0x58
	// Line 1301, Address: 0x168308, Func Offset: 0x68
	// Line 1302, Address: 0x168318, Func Offset: 0x78
	// Line 1303, Address: 0x168328, Func Offset: 0x88
	// Line 1305, Address: 0x168330, Func Offset: 0x90
	// Line 1306, Address: 0x168344, Func Offset: 0xa4
	// Line 1308, Address: 0x16834c, Func Offset: 0xac
	// Line 1310, Address: 0x16836c, Func Offset: 0xcc
	// Line 1311, Address: 0x168374, Func Offset: 0xd4
	// Line 1312, Address: 0x168378, Func Offset: 0xd8
	// Line 1313, Address: 0x168380, Func Offset: 0xe0
	// Line 1317, Address: 0x1683b0, Func Offset: 0x110
	// Line 1320, Address: 0x1683b8, Func Offset: 0x118
	// Line 1321, Address: 0x1683c4, Func Offset: 0x124
	// Func End, Address: 0x1683d8, Func Offset: 0x138
}

// 
// Start address: 0x1683e0
void enTY3InitData(EnLOCAL_DATA* dp)
{
	// Line 1328, Address: 0x1683e0, Func Offset: 0
	// Line 1329, Address: 0x1683f0, Func Offset: 0x10
	// Line 1330, Address: 0x1683f8, Func Offset: 0x18
	// Line 1331, Address: 0x168420, Func Offset: 0x40
	// Line 1332, Address: 0x168428, Func Offset: 0x48
	// Line 1333, Address: 0x168444, Func Offset: 0x64
	// Line 1336, Address: 0x168478, Func Offset: 0x98
	// Line 1337, Address: 0x168484, Func Offset: 0xa4
	// Line 1339, Address: 0x16848c, Func Offset: 0xac
	// Line 1340, Address: 0x168498, Func Offset: 0xb8
	// Line 1342, Address: 0x1684a0, Func Offset: 0xc0
	// Line 1345, Address: 0x1684a8, Func Offset: 0xc8
	// Line 1346, Address: 0x1684b0, Func Offset: 0xd0
	// Line 1347, Address: 0x1684bc, Func Offset: 0xdc
	// Func End, Address: 0x1684d0, Func Offset: 0xf0
}

// 
// Start address: 0x1684d0
void enTY3CtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlTY3SubFunc)(EnLOCAL_DATA*)[3];
	// Line 1353, Address: 0x1684d0, Func Offset: 0
	// Line 1354, Address: 0x1684e0, Func Offset: 0x10
	// Line 1360, Address: 0x1684fc, Func Offset: 0x2c
	// Line 1362, Address: 0x168508, Func Offset: 0x38
	// Line 1365, Address: 0x168524, Func Offset: 0x54
	// Line 1366, Address: 0x168530, Func Offset: 0x60
	// Func End, Address: 0x168544, Func Offset: 0x74
}

// 
// Start address: 0x168550
void enTY3CtrlFloor(EnLOCAL_DATA* dp)
{
	// Line 1370, Address: 0x168550, Func Offset: 0
	// Line 1371, Address: 0x168560, Func Offset: 0x10
	// Line 1372, Address: 0x168570, Func Offset: 0x20
	// Line 1373, Address: 0x16857c, Func Offset: 0x2c
	// Line 1375, Address: 0x168588, Func Offset: 0x38
	// Func End, Address: 0x16859c, Func Offset: 0x4c
}

// 
// Start address: 0x1685a0
void enTY3CtrlWall(EnLOCAL_DATA* dp)
{
	// Line 1379, Address: 0x1685a0, Func Offset: 0
	// Line 1380, Address: 0x1685b0, Func Offset: 0x10
	// Line 1382, Address: 0x1685bc, Func Offset: 0x1c
	// Line 1385, Address: 0x1685cc, Func Offset: 0x2c
	// Line 1387, Address: 0x1685d8, Func Offset: 0x38
	// Line 1388, Address: 0x1685ec, Func Offset: 0x4c
	// Line 1389, Address: 0x1685f8, Func Offset: 0x58
	// Line 1391, Address: 0x168604, Func Offset: 0x64
	// Func End, Address: 0x168618, Func Offset: 0x78
}

// 
// Start address: 0x168620
void enTY3CtrlCeiling(EnLOCAL_DATA* dp)
{
	// Line 1395, Address: 0x168620, Func Offset: 0
	// Line 1396, Address: 0x168630, Func Offset: 0x10
	// Line 1397, Address: 0x16863c, Func Offset: 0x1c
	// Line 1399, Address: 0x168644, Func Offset: 0x24
	// Line 1400, Address: 0x168650, Func Offset: 0x30
	// Line 1401, Address: 0x168664, Func Offset: 0x44
	// Line 1402, Address: 0x168678, Func Offset: 0x58
	// Line 1404, Address: 0x168684, Func Offset: 0x64
	// Line 1405, Address: 0x168698, Func Offset: 0x78
	// Line 1406, Address: 0x1686a4, Func Offset: 0x84
	// Line 1408, Address: 0x1686b0, Func Offset: 0x90
	// Func End, Address: 0x1686c4, Func Offset: 0xa4
}

// 
// Start address: 0x1686d0
void enTY3CheckCreateCharacter(EnLOCAL_DATA* dp)
{
	EnLOCAL_DATA* tp;
	SubCharacter* scp;
	// Line 1412, Address: 0x1686d0, Func Offset: 0
	// Line 1415, Address: 0x1686e0, Func Offset: 0x10
	// Line 1416, Address: 0x1686e8, Func Offset: 0x18
	// Line 1417, Address: 0x1686fc, Func Offset: 0x2c
	// Line 1419, Address: 0x16871c, Func Offset: 0x4c
	// Line 1420, Address: 0x168724, Func Offset: 0x54
	// Line 1421, Address: 0x168728, Func Offset: 0x58
	// Line 1422, Address: 0x168730, Func Offset: 0x60
	// Line 1426, Address: 0x168760, Func Offset: 0x90
	// Line 1429, Address: 0x168768, Func Offset: 0x98
	// Line 1430, Address: 0x168794, Func Offset: 0xc4
	// Line 1432, Address: 0x1687a0, Func Offset: 0xd0
	// Line 1433, Address: 0x1687bc, Func Offset: 0xec
	// Func End, Address: 0x1687d0, Func Offset: 0x100
}

