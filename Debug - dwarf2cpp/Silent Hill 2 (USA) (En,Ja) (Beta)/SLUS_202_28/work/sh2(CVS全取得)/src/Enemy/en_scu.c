typedef struct SubCharacter;
typedef struct EnLOCAL_DATA;
typedef struct EnBOS_DATA;
typedef struct EnSCU_DATA;
typedef struct shSkelton;
typedef struct _anon0;
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
typedef struct _AnimeInfo;

typedef void(*type_8)(EnLOCAL_DATA*);
typedef void(*type_49)(EnLOCAL_DATA*);
typedef void(*type_54)(SubCharacter*);
typedef void(*type_55)(SubCharacter*);

typedef EnAMBUSH_DATA type_0[9];
typedef unsigned char type_1[4];
typedef short type_2[5];
typedef unsigned int type_3[255];
typedef _AnimeInfo type_4[36];
typedef EnAMBUSH_DATA* type_5[6];
typedef unsigned int type_6[32];
typedef unsigned char type_7[4];
typedef void(*type_9)(EnLOCAL_DATA*)[12];
typedef char type_10[4];
typedef float type_11[5];
typedef char type_12[4];
typedef char type_13[4];
typedef float type_14[5];
typedef float type_15[5];
typedef unsigned char type_16[14];
typedef char type_17[4];
typedef float type_18[5];
typedef char type_19[4];
typedef float type_20[5];
typedef unsigned char type_21[97];
typedef float type_22[4];
typedef EnAMBUSH_DATA type_23[4];
typedef float type_24[5];
typedef EnAMBUSH_DATA type_25[9];
typedef EnLOCAL_DATA type_26[32];
typedef float type_27[5];
typedef EnCOMMUNICATION type_28[8];
typedef EnFORBIDDENAREA type_29[2];
typedef _AnimeInfo type_30[10];
typedef EnSOUND_QUEUE type_31[8];
typedef float type_32[5];
typedef unsigned char type_33[20];
typedef float type_34[5];
typedef int type_35[6];
typedef float type_36[5];
typedef EnANIME_DATA type_37[33];
typedef float type_38[5];
typedef EnAMBUSH_DATA type_39[5];
typedef short type_40[5];
typedef float type_41[5];
typedef EnAMBUSH_DATA type_42[9];
typedef float type_43[4];
typedef unsigned char type_44[14];
typedef float type_45[4][4];
typedef shAttackInfo type_46[66];
typedef float type_47[5];
typedef char type_48[3];
typedef void(*type_50)(EnLOCAL_DATA*)[7];
typedef float type_51[5];
typedef unsigned char type_52[69];
typedef float type_53[4];

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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo scu_anim[36];
_AnimeInfo d_scu_anim[10];
EnANIME_DATA EnSCUAnime[33];
EnAMBUSH_DATA ambush_apart[9];
EnAMBUSH_DATA ambush_hospital[9];
EnAMBUSH_DATA ambush_delusion[9];
EnAMBUSH_DATA ambush_hotel_f[4];
EnAMBUSH_DATA ambush_hotel_b[5];
EnAMBUSH_DATA* ambush_data[6];
int ambush_num[6];
EnLOCAL_WORK enLocalWork;
_anon0 game_flag;

void enSCUInitData(EnLOCAL_DATA* dp);
void enSCUCtrlMain(EnLOCAL_DATA* dp);
void enSCUCtrlAutomatic(EnLOCAL_DATA* dp);
void enSCUCtrlSleep(EnLOCAL_DATA* dp);
void enSCUCtrlGoPlayable(EnLOCAL_DATA* dp);
void enSCUCtrlEvent(EnLOCAL_DATA* dp);
void enSCUCtrlHand();
void enSCUCtrlWander(EnLOCAL_DATA* dp);
void enSCUCtrlPrecaution(EnLOCAL_DATA* dp);
void enSCUCtrlChase(EnLOCAL_DATA* dp);
void enSCUCtrlBackward(EnLOCAL_DATA* dp);
void enSCUCtrlAmbush(EnLOCAL_DATA* dp);
void enSCUCtrlWaitCar(EnLOCAL_DATA* dp);
void enSCUCtrlCrawl(EnLOCAL_DATA* dp);
void enSCUCtrlAttack(EnLOCAL_DATA* dp);
void enSCUCtrlDamage(EnLOCAL_DATA* dp);
void enSCUCtrlConfuse(EnLOCAL_DATA* dp);
void enSCUCtrlDown(EnLOCAL_DATA* dp);
int enSCUCanSeePlayer(EnLOCAL_DATA* dp);
int enSCUCheckAmbush(EnLOCAL_DATA* dp);
int enSCUCheckUpper(EnLOCAL_DATA* dp);
void enSCUAnimeSet(EnLOCAL_DATA* dp, int anim);
void enSCUAnimeReset(EnLOCAL_DATA* dp, int anim);
void enSCUAnimeExec(EnLOCAL_DATA* dp);
void enSCUAutoRecovery(EnLOCAL_DATA* dp);
float enSCUGetWalkSpeed(EnLOCAL_DATA* dp);
float enSCUGetCrawlSpeed(EnLOCAL_DATA* dp);
float enSCUGetFeelRange();
float enSCUGetAttackRange();
float enSCUGetAttackAngle();
float enSCUGetAttackProbability(EnLOCAL_DATA* dp);
float enSCUGetRepertAttackProbability();
float enSCUGetAttackSpeed(EnLOCAL_DATA* dp);
float enSCUGetRotSpeed();
float enSCUGetAimingSpeed();
void enSCUSetDownTime(EnLOCAL_DATA* dp);
float enSCUGetCrawlProbability();
void enSCUSetMoveCount(EnLOCAL_DATA* dp);
void enSCUSetDc(EnLOCAL_DATA* dp);
void enSCUSoundLife(EnLOCAL_DATA* dp);
void enSCUSoundCrawlInit(EnLOCAL_DATA* dp);
void enSCUSoundCrawl(EnLOCAL_DATA* dp);

// 
// Start address: 0x1603b0
void enSCUInitData(EnLOCAL_DATA* dp)
{
	float rate;
	int mode;
	float endurance[5];
	float vitarity[5];
	// Line 233, Address: 0x1603b0, Func Offset: 0
	// Line 234, Address: 0x1603c8, Func Offset: 0x18
	// Line 241, Address: 0x1603e4, Func Offset: 0x34
	// Line 248, Address: 0x160400, Func Offset: 0x50
	// Line 251, Address: 0x16040c, Func Offset: 0x5c
	// Line 252, Address: 0x160414, Func Offset: 0x64
	// Line 254, Address: 0x16041c, Func Offset: 0x6c
	// Line 255, Address: 0x16042c, Func Offset: 0x7c
	// Line 267, Address: 0x160438, Func Offset: 0x88
	// Line 269, Address: 0x160450, Func Offset: 0xa0
	// Line 270, Address: 0x160458, Func Offset: 0xa8
	// Line 272, Address: 0x160460, Func Offset: 0xb0
	// Line 277, Address: 0x160468, Func Offset: 0xb8
	// Line 278, Address: 0x160494, Func Offset: 0xe4
	// Line 279, Address: 0x16049c, Func Offset: 0xec
	// Line 280, Address: 0x1604ac, Func Offset: 0xfc
	// Line 282, Address: 0x1604dc, Func Offset: 0x12c
	// Line 283, Address: 0x1604e8, Func Offset: 0x138
	// Line 285, Address: 0x1604f0, Func Offset: 0x140
	// Line 286, Address: 0x1604f8, Func Offset: 0x148
	// Line 288, Address: 0x160500, Func Offset: 0x150
	// Line 290, Address: 0x160508, Func Offset: 0x158
	// Line 291, Address: 0x160514, Func Offset: 0x164
	// Line 292, Address: 0x160520, Func Offset: 0x170
	// Line 293, Address: 0x160530, Func Offset: 0x180
	// Line 294, Address: 0x16055c, Func Offset: 0x1ac
	// Line 296, Address: 0x160564, Func Offset: 0x1b4
	// Line 297, Address: 0x160570, Func Offset: 0x1c0
	// Line 298, Address: 0x160584, Func Offset: 0x1d4
	// Line 300, Address: 0x16058c, Func Offset: 0x1dc
	// Line 301, Address: 0x160594, Func Offset: 0x1e4
	// Line 302, Address: 0x1605a0, Func Offset: 0x1f0
	// Line 303, Address: 0x1605ac, Func Offset: 0x1fc
	// Line 305, Address: 0x1605b4, Func Offset: 0x204
	// Line 306, Address: 0x1605bc, Func Offset: 0x20c
	// Line 307, Address: 0x1605c8, Func Offset: 0x218
	// Line 308, Address: 0x1605d4, Func Offset: 0x224
	// Line 310, Address: 0x1605dc, Func Offset: 0x22c
	// Line 311, Address: 0x1605ec, Func Offset: 0x23c
	// Line 312, Address: 0x1605f8, Func Offset: 0x248
	// Line 313, Address: 0x160610, Func Offset: 0x260
	// Line 315, Address: 0x160618, Func Offset: 0x268
	// Line 316, Address: 0x160628, Func Offset: 0x278
	// Line 317, Address: 0x160630, Func Offset: 0x280
	// Line 318, Address: 0x16063c, Func Offset: 0x28c
	// Line 319, Address: 0x160658, Func Offset: 0x2a8
	// Line 321, Address: 0x160660, Func Offset: 0x2b0
	// Line 322, Address: 0x160668, Func Offset: 0x2b8
	// Line 323, Address: 0x160674, Func Offset: 0x2c4
	// Line 325, Address: 0x16067c, Func Offset: 0x2cc
	// Line 326, Address: 0x160684, Func Offset: 0x2d4
	// Line 327, Address: 0x16068c, Func Offset: 0x2dc
	// Line 329, Address: 0x160694, Func Offset: 0x2e4
	// Line 330, Address: 0x1606a4, Func Offset: 0x2f4
	// Line 331, Address: 0x1606b0, Func Offset: 0x300
	// Line 332, Address: 0x1606c8, Func Offset: 0x318
	// Line 334, Address: 0x1606d0, Func Offset: 0x320
	// Line 336, Address: 0x1606d8, Func Offset: 0x328
	// Line 337, Address: 0x1606fc, Func Offset: 0x34c
	// Line 338, Address: 0x16071c, Func Offset: 0x36c
	// Line 339, Address: 0x160728, Func Offset: 0x378
	// Line 340, Address: 0x16073c, Func Offset: 0x38c
	// Line 342, Address: 0x160748, Func Offset: 0x398
	// Func End, Address: 0x160764, Func Offset: 0x3b4
}

// 
// Start address: 0x160770
void enSCUCtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlSCUFunc)(EnLOCAL_DATA*)[7];
	// Line 348, Address: 0x160770, Func Offset: 0
	// Line 349, Address: 0x160778, Func Offset: 0x8
	// Line 359, Address: 0x16079c, Func Offset: 0x2c
	// Line 360, Address: 0x1607b4, Func Offset: 0x44
	// Func End, Address: 0x1607c4, Func Offset: 0x54
}

// 
// Start address: 0x1607d0
void enSCUCtrlAutomatic(EnLOCAL_DATA* dp)
{
	void(*enCtrlSCUSubFunc)(EnLOCAL_DATA*)[12];
	// Line 364, Address: 0x1607d0, Func Offset: 0
	// Line 365, Address: 0x1607e0, Func Offset: 0x10
	// Line 380, Address: 0x160804, Func Offset: 0x34
	// Line 382, Address: 0x160810, Func Offset: 0x40
	// Line 385, Address: 0x16082c, Func Offset: 0x5c
	// Line 387, Address: 0x160838, Func Offset: 0x68
	// Line 388, Address: 0x160844, Func Offset: 0x74
	// Line 390, Address: 0x160868, Func Offset: 0x98
	// Line 392, Address: 0x160874, Func Offset: 0xa4
	// Func End, Address: 0x160888, Func Offset: 0xb8
}

// 
// Start address: 0x160890
void enSCUCtrlSleep(EnLOCAL_DATA* dp)
{
	// Line 396, Address: 0x160890, Func Offset: 0
	// Line 397, Address: 0x1608a0, Func Offset: 0x10
	// Line 398, Address: 0x1608b0, Func Offset: 0x20
	// Line 399, Address: 0x1608bc, Func Offset: 0x2c
	// Line 400, Address: 0x1608c8, Func Offset: 0x38
	// Line 401, Address: 0x1608d0, Func Offset: 0x40
	// Line 402, Address: 0x1608e0, Func Offset: 0x50
	// Line 405, Address: 0x1608ec, Func Offset: 0x5c
	// Func End, Address: 0x160900, Func Offset: 0x70
}

// 
// Start address: 0x160900
void enSCUCtrlGoPlayable(EnLOCAL_DATA* dp)
{
	// Line 410, Address: 0x160900, Func Offset: 0
	// Line 411, Address: 0x160908, Func Offset: 0x8
	// Line 412, Address: 0x160918, Func Offset: 0x18
	// Line 413, Address: 0x160924, Func Offset: 0x24
	// Line 414, Address: 0x160930, Func Offset: 0x30
	// Line 415, Address: 0x160944, Func Offset: 0x44
	// Line 416, Address: 0x160950, Func Offset: 0x50
	// Line 417, Address: 0x160958, Func Offset: 0x58
	// Line 419, Address: 0x160960, Func Offset: 0x60
	// Line 420, Address: 0x160968, Func Offset: 0x68
	// Line 421, Address: 0x160974, Func Offset: 0x74
	// Line 422, Address: 0x160978, Func Offset: 0x78
	// Func End, Address: 0x160980, Func Offset: 0x80
}

// 
// Start address: 0x160980
void enSCUCtrlEvent(EnLOCAL_DATA* dp)
{
	// Line 426, Address: 0x160980, Func Offset: 0
	// Line 427, Address: 0x160990, Func Offset: 0x10
	// Line 428, Address: 0x160998, Func Offset: 0x18
	// Line 429, Address: 0x1609a4, Func Offset: 0x24
	// Func End, Address: 0x1609b8, Func Offset: 0x38
}

// 
// Start address: 0x1609c0
void enSCUCtrlHand()
{
	// Line 562, Address: 0x1609c0, Func Offset: 0
	// Func End, Address: 0x1609c8, Func Offset: 0x8
}

// 
// Start address: 0x1609d0
void enSCUCtrlWander(EnLOCAL_DATA* dp)
{
	float vec[4];
	int t;
	float d;
	// Line 566, Address: 0x1609d0, Func Offset: 0
	// Line 570, Address: 0x1609e4, Func Offset: 0x14
	// Line 571, Address: 0x1609f4, Func Offset: 0x24
	// Line 572, Address: 0x160a00, Func Offset: 0x30
	// Line 574, Address: 0x160a08, Func Offset: 0x38
	// Line 575, Address: 0x160a1c, Func Offset: 0x4c
	// Line 576, Address: 0x160a28, Func Offset: 0x58
	// Line 579, Address: 0x160a30, Func Offset: 0x60
	// Line 581, Address: 0x160a60, Func Offset: 0x90
	// Line 582, Address: 0x160a6c, Func Offset: 0x9c
	// Line 585, Address: 0x160a74, Func Offset: 0xa4
	// Line 587, Address: 0x160a84, Func Offset: 0xb4
	// Line 589, Address: 0x160ac4, Func Offset: 0xf4
	// Line 590, Address: 0x160ad0, Func Offset: 0x100
	// Line 592, Address: 0x160ad8, Func Offset: 0x108
	// Line 594, Address: 0x160b10, Func Offset: 0x140
	// Line 595, Address: 0x160b1c, Func Offset: 0x14c
	// Line 596, Address: 0x160b28, Func Offset: 0x158
	// Line 597, Address: 0x160b34, Func Offset: 0x164
	// Line 598, Address: 0x160b48, Func Offset: 0x178
	// Line 599, Address: 0x160b64, Func Offset: 0x194
	// Line 600, Address: 0x160b84, Func Offset: 0x1b4
	// Line 602, Address: 0x160b90, Func Offset: 0x1c0
	// Line 603, Address: 0x160bbc, Func Offset: 0x1ec
	// Line 605, Address: 0x160bec, Func Offset: 0x21c
	// Line 606, Address: 0x160bf4, Func Offset: 0x224
	// Line 607, Address: 0x160bfc, Func Offset: 0x22c
	// Line 608, Address: 0x160c0c, Func Offset: 0x23c
	// Line 609, Address: 0x160c14, Func Offset: 0x244
	// Line 611, Address: 0x160c80, Func Offset: 0x2b0
	// Line 612, Address: 0x160cc8, Func Offset: 0x2f8
	// Line 613, Address: 0x160cdc, Func Offset: 0x30c
	// Line 614, Address: 0x160cfc, Func Offset: 0x32c
	// Line 617, Address: 0x160d50, Func Offset: 0x380
	// Line 618, Address: 0x160dac, Func Offset: 0x3dc
	// Line 619, Address: 0x160dc0, Func Offset: 0x3f0
	// Line 621, Address: 0x160de0, Func Offset: 0x410
	// Line 622, Address: 0x160e10, Func Offset: 0x440
	// Line 623, Address: 0x160e20, Func Offset: 0x450
	// Line 626, Address: 0x160e28, Func Offset: 0x458
	// Line 628, Address: 0x160e30, Func Offset: 0x460
	// Line 629, Address: 0x160e58, Func Offset: 0x488
	// Line 630, Address: 0x160e78, Func Offset: 0x4a8
	// Line 631, Address: 0x160e80, Func Offset: 0x4b0
	// Line 632, Address: 0x160e9c, Func Offset: 0x4cc
	// Line 633, Address: 0x160ea8, Func Offset: 0x4d8
	// Line 635, Address: 0x160eb0, Func Offset: 0x4e0
	// Line 637, Address: 0x160eb8, Func Offset: 0x4e8
	// Line 638, Address: 0x160ec8, Func Offset: 0x4f8
	// Line 639, Address: 0x160ed8, Func Offset: 0x508
	// Line 640, Address: 0x160ee4, Func Offset: 0x514
	// Line 645, Address: 0x160eec, Func Offset: 0x51c
	// Line 646, Address: 0x160f0c, Func Offset: 0x53c
	// Line 647, Address: 0x160f24, Func Offset: 0x554
	// Line 649, Address: 0x160f44, Func Offset: 0x574
	// Line 650, Address: 0x160f5c, Func Offset: 0x58c
	// Line 651, Address: 0x160f68, Func Offset: 0x598
	// Line 652, Address: 0x160f74, Func Offset: 0x5a4
	// Line 653, Address: 0x160f8c, Func Offset: 0x5bc
	// Line 654, Address: 0x160f98, Func Offset: 0x5c8
	// Line 655, Address: 0x160fac, Func Offset: 0x5dc
	// Line 657, Address: 0x160fb8, Func Offset: 0x5e8
	// Line 658, Address: 0x160fc4, Func Offset: 0x5f4
	// Func End, Address: 0x160fdc, Func Offset: 0x60c
}

// 
// Start address: 0x160fe0
void enSCUCtrlPrecaution(EnLOCAL_DATA* dp)
{
	int t;
	// Line 662, Address: 0x160fe0, Func Offset: 0
	// Line 664, Address: 0x160ff0, Func Offset: 0x10
	// Line 665, Address: 0x161000, Func Offset: 0x20
	// Line 666, Address: 0x16100c, Func Offset: 0x2c
	// Line 668, Address: 0x161014, Func Offset: 0x34
	// Line 669, Address: 0x161020, Func Offset: 0x40
	// Line 670, Address: 0x161030, Func Offset: 0x50
	// Line 671, Address: 0x161044, Func Offset: 0x64
	// Line 673, Address: 0x161050, Func Offset: 0x70
	// Line 674, Address: 0x161064, Func Offset: 0x84
	// Line 675, Address: 0x161070, Func Offset: 0x90
	// Line 677, Address: 0x161078, Func Offset: 0x98
	// Line 679, Address: 0x161088, Func Offset: 0xa8
	// Line 680, Address: 0x161094, Func Offset: 0xb4
	// Line 681, Address: 0x1610a0, Func Offset: 0xc0
	// Line 682, Address: 0x1610ac, Func Offset: 0xcc
	// Line 684, Address: 0x1610e0, Func Offset: 0x100
	// Line 685, Address: 0x1610e8, Func Offset: 0x108
	// Line 687, Address: 0x16110c, Func Offset: 0x12c
	// Line 688, Address: 0x161128, Func Offset: 0x148
	// Line 690, Address: 0x161130, Func Offset: 0x150
	// Line 691, Address: 0x161138, Func Offset: 0x158
	// Line 695, Address: 0x161148, Func Offset: 0x168
	// Line 696, Address: 0x161160, Func Offset: 0x180
	// Line 697, Address: 0x16116c, Func Offset: 0x18c
	// Line 698, Address: 0x161178, Func Offset: 0x198
	// Func End, Address: 0x16118c, Func Offset: 0x1ac
}

// 
// Start address: 0x161190
void enSCUCtrlChase(EnLOCAL_DATA* dp)
{
	int t;
	// Line 702, Address: 0x161190, Func Offset: 0
	// Line 704, Address: 0x1611a4, Func Offset: 0x14
	// Line 705, Address: 0x1611b4, Func Offset: 0x24
	// Line 706, Address: 0x1611c0, Func Offset: 0x30
	// Line 708, Address: 0x1611c8, Func Offset: 0x38
	// Line 709, Address: 0x1611d4, Func Offset: 0x44
	// Line 710, Address: 0x1611e4, Func Offset: 0x54
	// Line 711, Address: 0x1611f8, Func Offset: 0x68
	// Line 712, Address: 0x161208, Func Offset: 0x78
	// Line 715, Address: 0x161234, Func Offset: 0xa4
	// Line 718, Address: 0x161240, Func Offset: 0xb0
	// Line 720, Address: 0x161264, Func Offset: 0xd4
	// Line 721, Address: 0x16127c, Func Offset: 0xec
	// Line 723, Address: 0x161288, Func Offset: 0xf8
	// Line 725, Address: 0x1612e0, Func Offset: 0x150
	// Line 727, Address: 0x1612ec, Func Offset: 0x15c
	// Line 728, Address: 0x1612f8, Func Offset: 0x168
	// Line 729, Address: 0x161310, Func Offset: 0x180
	// Line 730, Address: 0x16131c, Func Offset: 0x18c
	// Line 732, Address: 0x16135c, Func Offset: 0x1cc
	// Line 734, Address: 0x161378, Func Offset: 0x1e8
	// Line 735, Address: 0x161380, Func Offset: 0x1f0
	// Line 736, Address: 0x161388, Func Offset: 0x1f8
	// Line 738, Address: 0x161394, Func Offset: 0x204
	// Line 740, Address: 0x1613ec, Func Offset: 0x25c
	// Line 742, Address: 0x1613f8, Func Offset: 0x268
	// Line 743, Address: 0x161404, Func Offset: 0x274
	// Func End, Address: 0x16141c, Func Offset: 0x28c
}

// 
// Start address: 0x161420
void enSCUCtrlBackward(EnLOCAL_DATA* dp)
{
	int t;
	// Line 747, Address: 0x161420, Func Offset: 0
	// Line 749, Address: 0x161434, Func Offset: 0x14
	// Line 750, Address: 0x161444, Func Offset: 0x24
	// Line 751, Address: 0x161450, Func Offset: 0x30
	// Line 753, Address: 0x161458, Func Offset: 0x38
	// Line 754, Address: 0x161464, Func Offset: 0x44
	// Line 755, Address: 0x161474, Func Offset: 0x54
	// Line 756, Address: 0x161480, Func Offset: 0x60
	// Line 757, Address: 0x16148c, Func Offset: 0x6c
	// Line 758, Address: 0x1614a0, Func Offset: 0x80
	// Line 761, Address: 0x1614ac, Func Offset: 0x8c
	// Line 762, Address: 0x1614c4, Func Offset: 0xa4
	// Line 764, Address: 0x1614d0, Func Offset: 0xb0
	// Line 765, Address: 0x1614e0, Func Offset: 0xc0
	// Line 767, Address: 0x161510, Func Offset: 0xf0
	// Line 768, Address: 0x16151c, Func Offset: 0xfc
	// Line 770, Address: 0x161558, Func Offset: 0x138
	// Line 772, Address: 0x161574, Func Offset: 0x154
	// Line 773, Address: 0x16157c, Func Offset: 0x15c
	// Line 774, Address: 0x161584, Func Offset: 0x164
	// Line 776, Address: 0x161590, Func Offset: 0x170
	// Line 778, Address: 0x1615cc, Func Offset: 0x1ac
	// Line 780, Address: 0x1615d8, Func Offset: 0x1b8
	// Line 781, Address: 0x1615e4, Func Offset: 0x1c4
	// Func End, Address: 0x1615fc, Func Offset: 0x1dc
}

// 
// Start address: 0x161600
void enSCUCtrlAmbush(EnLOCAL_DATA* dp)
{
	EnAMBUSH_DATA* pa;
	float d;
	float a;
	short pz;
	short px;
	float vec[4];
	int t;
	// Line 785, Address: 0x161600, Func Offset: 0
	// Line 790, Address: 0x161614, Func Offset: 0x14
	// Line 791, Address: 0x161618, Func Offset: 0x18
	// Line 792, Address: 0x161628, Func Offset: 0x28
	// Line 793, Address: 0x161634, Func Offset: 0x34
	// Line 795, Address: 0x16163c, Func Offset: 0x3c
	// Line 797, Address: 0x161674, Func Offset: 0x74
	// Line 798, Address: 0x161680, Func Offset: 0x80
	// Line 799, Address: 0x161694, Func Offset: 0x94
	// Line 800, Address: 0x1616a0, Func Offset: 0xa0
	// Line 803, Address: 0x1616a8, Func Offset: 0xa8
	// Line 804, Address: 0x1616b0, Func Offset: 0xb0
	// Line 805, Address: 0x1616b8, Func Offset: 0xb8
	// Line 806, Address: 0x1616c4, Func Offset: 0xc4
	// Line 807, Address: 0x1616dc, Func Offset: 0xdc
	// Line 808, Address: 0x1616ec, Func Offset: 0xec
	// Line 810, Address: 0x161730, Func Offset: 0x130
	// Line 811, Address: 0x161758, Func Offset: 0x158
	// Line 812, Address: 0x161760, Func Offset: 0x160
	// Line 814, Address: 0x161768, Func Offset: 0x168
	// Line 816, Address: 0x1617ac, Func Offset: 0x1ac
	// Line 817, Address: 0x1617c0, Func Offset: 0x1c0
	// Line 818, Address: 0x1617c8, Func Offset: 0x1c8
	// Line 822, Address: 0x1617d0, Func Offset: 0x1d0
	// Line 823, Address: 0x1617e8, Func Offset: 0x1e8
	// Line 824, Address: 0x1617ec, Func Offset: 0x1ec
	// Line 825, Address: 0x1617fc, Func Offset: 0x1fc
	// Line 826, Address: 0x161804, Func Offset: 0x204
	// Line 827, Address: 0x16180c, Func Offset: 0x20c
	// Line 829, Address: 0x161830, Func Offset: 0x230
	// Line 830, Address: 0x16183c, Func Offset: 0x23c
	// Line 831, Address: 0x161858, Func Offset: 0x258
	// Line 832, Address: 0x161884, Func Offset: 0x284
	// Line 833, Address: 0x1618a0, Func Offset: 0x2a0
	// Line 834, Address: 0x1618b0, Func Offset: 0x2b0
	// Line 835, Address: 0x1618c8, Func Offset: 0x2c8
	// Line 836, Address: 0x1618dc, Func Offset: 0x2dc
	// Line 837, Address: 0x1618e4, Func Offset: 0x2e4
	// Line 838, Address: 0x16190c, Func Offset: 0x30c
	// Line 840, Address: 0x161914, Func Offset: 0x314
	// Line 843, Address: 0x16191c, Func Offset: 0x31c
	// Line 845, Address: 0x16195c, Func Offset: 0x35c
	// Line 846, Address: 0x161974, Func Offset: 0x374
	// Line 848, Address: 0x161980, Func Offset: 0x380
	// Line 849, Address: 0x1619b4, Func Offset: 0x3b4
	// Line 850, Address: 0x1619cc, Func Offset: 0x3cc
	// Line 851, Address: 0x1619e4, Func Offset: 0x3e4
	// Line 854, Address: 0x161a4c, Func Offset: 0x44c
	// Line 855, Address: 0x161a54, Func Offset: 0x454
	// Line 857, Address: 0x161a5c, Func Offset: 0x45c
	// Line 858, Address: 0x161a6c, Func Offset: 0x46c
	// Line 859, Address: 0x161a7c, Func Offset: 0x47c
	// Line 860, Address: 0x161a90, Func Offset: 0x490
	// Line 864, Address: 0x161a9c, Func Offset: 0x49c
	// Line 866, Address: 0x161aa8, Func Offset: 0x4a8
	// Line 867, Address: 0x161ab4, Func Offset: 0x4b4
	// Line 868, Address: 0x161acc, Func Offset: 0x4cc
	// Line 869, Address: 0x161ad8, Func Offset: 0x4d8
	// Line 871, Address: 0x161afc, Func Offset: 0x4fc
	// Line 873, Address: 0x161b08, Func Offset: 0x508
	// Func End, Address: 0x161b20, Func Offset: 0x520
}

// 
// Start address: 0x161b20
void enSCUCtrlWaitCar(EnLOCAL_DATA* dp)
{
	// Line 877, Address: 0x161b20, Func Offset: 0
	// Line 878, Address: 0x161b30, Func Offset: 0x10
	// Line 879, Address: 0x161b3c, Func Offset: 0x1c
	// Line 880, Address: 0x161b60, Func Offset: 0x40
	// Line 881, Address: 0x161b70, Func Offset: 0x50
	// Line 882, Address: 0x161b7c, Func Offset: 0x5c
	// Line 883, Address: 0x161b88, Func Offset: 0x68
	// Line 884, Address: 0x161b94, Func Offset: 0x74
	// Line 885, Address: 0x161b98, Func Offset: 0x78
	// Line 887, Address: 0x161ba4, Func Offset: 0x84
	// Line 888, Address: 0x161bc4, Func Offset: 0xa4
	// Line 889, Address: 0x161bd8, Func Offset: 0xb8
	// Line 890, Address: 0x161be4, Func Offset: 0xc4
	// Line 891, Address: 0x161bf4, Func Offset: 0xd4
	// Line 892, Address: 0x161c00, Func Offset: 0xe0
	// Line 894, Address: 0x161c0c, Func Offset: 0xec
	// Func End, Address: 0x161c20, Func Offset: 0x100
}

// 
// Start address: 0x161c20
void enSCUCtrlCrawl(EnLOCAL_DATA* dp)
{
	int t;
	float vec[4];
	// Line 898, Address: 0x161c20, Func Offset: 0
	// Line 901, Address: 0x161c34, Func Offset: 0x14
	// Line 902, Address: 0x161c44, Func Offset: 0x24
	// Line 903, Address: 0x161c5c, Func Offset: 0x3c
	// Line 904, Address: 0x161c68, Func Offset: 0x48
	// Line 905, Address: 0x161c84, Func Offset: 0x64
	// Line 906, Address: 0x161c90, Func Offset: 0x70
	// Line 907, Address: 0x161ca0, Func Offset: 0x80
	// Line 908, Address: 0x161cb0, Func Offset: 0x90
	// Line 909, Address: 0x161cb8, Func Offset: 0x98
	// Line 910, Address: 0x161cc0, Func Offset: 0xa0
	// Line 911, Address: 0x161ccc, Func Offset: 0xac
	// Line 912, Address: 0x161cdc, Func Offset: 0xbc
	// Line 913, Address: 0x161ce8, Func Offset: 0xc8
	// Line 914, Address: 0x161cfc, Func Offset: 0xdc
	// Line 915, Address: 0x161d08, Func Offset: 0xe8
	// Line 916, Address: 0x161d14, Func Offset: 0xf4
	// Line 918, Address: 0x161d1c, Func Offset: 0xfc
	// Line 919, Address: 0x161d24, Func Offset: 0x104
	// Line 922, Address: 0x161d34, Func Offset: 0x114
	// Line 924, Address: 0x161d64, Func Offset: 0x144
	// Line 925, Address: 0x161d70, Func Offset: 0x150
	// Line 926, Address: 0x161d80, Func Offset: 0x160
	// Line 927, Address: 0x161da8, Func Offset: 0x188
	// Line 928, Address: 0x161db4, Func Offset: 0x194
	// Line 930, Address: 0x161dbc, Func Offset: 0x19c
	// Line 931, Address: 0x161dcc, Func Offset: 0x1ac
	// Line 933, Address: 0x161dd0, Func Offset: 0x1b0
	// Line 935, Address: 0x161dd8, Func Offset: 0x1b8
	// Line 936, Address: 0x161de8, Func Offset: 0x1c8
	// Line 938, Address: 0x161e10, Func Offset: 0x1f0
	// Line 939, Address: 0x161e1c, Func Offset: 0x1fc
	// Line 940, Address: 0x161e24, Func Offset: 0x204
	// Line 942, Address: 0x161e30, Func Offset: 0x210
	// Line 943, Address: 0x161e3c, Func Offset: 0x21c
	// Line 944, Address: 0x161e48, Func Offset: 0x228
	// Line 945, Address: 0x161e5c, Func Offset: 0x23c
	// Line 947, Address: 0x161e98, Func Offset: 0x278
	// Line 948, Address: 0x161eb8, Func Offset: 0x298
	// Line 949, Address: 0x161ebc, Func Offset: 0x29c
	// Line 950, Address: 0x161ec8, Func Offset: 0x2a8
	// Line 951, Address: 0x161f14, Func Offset: 0x2f4
	// Line 952, Address: 0x161f20, Func Offset: 0x300
	// Line 954, Address: 0x161f2c, Func Offset: 0x30c
	// Line 955, Address: 0x161f38, Func Offset: 0x318
	// Line 957, Address: 0x161fa4, Func Offset: 0x384
	// Line 959, Address: 0x161fe0, Func Offset: 0x3c0
	// Line 961, Address: 0x162000, Func Offset: 0x3e0
	// Line 962, Address: 0x162010, Func Offset: 0x3f0
	// Line 964, Address: 0x162044, Func Offset: 0x424
	// Line 965, Address: 0x162048, Func Offset: 0x428
	// Line 966, Address: 0x162054, Func Offset: 0x434
	// Line 967, Address: 0x1620a0, Func Offset: 0x480
	// Line 968, Address: 0x1620a8, Func Offset: 0x488
	// Line 969, Address: 0x1620b0, Func Offset: 0x490
	// Line 970, Address: 0x1620c4, Func Offset: 0x4a4
	// Line 974, Address: 0x16213c, Func Offset: 0x51c
	// Line 976, Address: 0x16214c, Func Offset: 0x52c
	// Line 977, Address: 0x16215c, Func Offset: 0x53c
	// Line 978, Address: 0x162168, Func Offset: 0x548
	// Line 979, Address: 0x162174, Func Offset: 0x554
	// Line 981, Address: 0x16217c, Func Offset: 0x55c
	// Line 982, Address: 0x16218c, Func Offset: 0x56c
	// Line 983, Address: 0x162198, Func Offset: 0x578
	// Line 984, Address: 0x1621a4, Func Offset: 0x584
	// Line 985, Address: 0x1621b0, Func Offset: 0x590
	// Line 986, Address: 0x1621e0, Func Offset: 0x5c0
	// Line 987, Address: 0x1621f4, Func Offset: 0x5d4
	// Line 988, Address: 0x1621fc, Func Offset: 0x5dc
	// Line 989, Address: 0x16222c, Func Offset: 0x60c
	// Line 990, Address: 0x16223c, Func Offset: 0x61c
	// Line 991, Address: 0x162288, Func Offset: 0x668
	// Line 992, Address: 0x162290, Func Offset: 0x670
	// Line 993, Address: 0x162298, Func Offset: 0x678
	// Line 994, Address: 0x16229c, Func Offset: 0x67c
	// Line 995, Address: 0x1622a8, Func Offset: 0x688
	// Line 996, Address: 0x1622f4, Func Offset: 0x6d4
	// Line 997, Address: 0x1622fc, Func Offset: 0x6dc
	// Line 999, Address: 0x162310, Func Offset: 0x6f0
	// Line 1001, Address: 0x162318, Func Offset: 0x6f8
	// Line 1003, Address: 0x16235c, Func Offset: 0x73c
	// Line 1004, Address: 0x16236c, Func Offset: 0x74c
	// Line 1005, Address: 0x16237c, Func Offset: 0x75c
	// Line 1006, Address: 0x162388, Func Offset: 0x768
	// Line 1007, Address: 0x162394, Func Offset: 0x774
	// Line 1008, Address: 0x1623a0, Func Offset: 0x780
	// Line 1009, Address: 0x1623d0, Func Offset: 0x7b0
	// Line 1010, Address: 0x1623d8, Func Offset: 0x7b8
	// Line 1013, Address: 0x1623e0, Func Offset: 0x7c0
	// Line 1014, Address: 0x162400, Func Offset: 0x7e0
	// Line 1015, Address: 0x162418, Func Offset: 0x7f8
	// Line 1016, Address: 0x162438, Func Offset: 0x818
	// Line 1019, Address: 0x16243c, Func Offset: 0x81c
	// Line 1020, Address: 0x162454, Func Offset: 0x834
	// Line 1022, Address: 0x16247c, Func Offset: 0x85c
	// Line 1024, Address: 0x162484, Func Offset: 0x864
	// Line 1025, Address: 0x162494, Func Offset: 0x874
	// Line 1026, Address: 0x1624a0, Func Offset: 0x880
	// Line 1027, Address: 0x1624ac, Func Offset: 0x88c
	// Line 1028, Address: 0x1624c0, Func Offset: 0x8a0
	// Line 1029, Address: 0x1624cc, Func Offset: 0x8ac
	// Line 1030, Address: 0x1624d4, Func Offset: 0x8b4
	// Line 1032, Address: 0x1624e0, Func Offset: 0x8c0
	// Line 1034, Address: 0x1624f0, Func Offset: 0x8d0
	// Line 1036, Address: 0x1624f8, Func Offset: 0x8d8
	// Line 1037, Address: 0x162520, Func Offset: 0x900
	// Line 1038, Address: 0x162530, Func Offset: 0x910
	// Line 1042, Address: 0x1625a8, Func Offset: 0x988
	// Line 1046, Address: 0x1625bc, Func Offset: 0x99c
	// Line 1048, Address: 0x1625cc, Func Offset: 0x9ac
	// Line 1049, Address: 0x1625dc, Func Offset: 0x9bc
	// Line 1050, Address: 0x1625ec, Func Offset: 0x9cc
	// Line 1051, Address: 0x1625f8, Func Offset: 0x9d8
	// Line 1052, Address: 0x162604, Func Offset: 0x9e4
	// Line 1055, Address: 0x16260c, Func Offset: 0x9ec
	// Line 1056, Address: 0x16261c, Func Offset: 0x9fc
	// Line 1057, Address: 0x162628, Func Offset: 0xa08
	// Line 1058, Address: 0x162634, Func Offset: 0xa14
	// Line 1059, Address: 0x162640, Func Offset: 0xa20
	// Line 1060, Address: 0x16266c, Func Offset: 0xa4c
	// Line 1061, Address: 0x162680, Func Offset: 0xa60
	// Line 1062, Address: 0x162688, Func Offset: 0xa68
	// Line 1063, Address: 0x1626b8, Func Offset: 0xa98
	// Line 1064, Address: 0x1626c8, Func Offset: 0xaa8
	// Line 1065, Address: 0x162714, Func Offset: 0xaf4
	// Line 1066, Address: 0x16271c, Func Offset: 0xafc
	// Line 1067, Address: 0x162724, Func Offset: 0xb04
	// Line 1070, Address: 0x162728, Func Offset: 0xb08
	// Line 1072, Address: 0x162730, Func Offset: 0xb10
	// Line 1073, Address: 0x162744, Func Offset: 0xb24
	// Line 1074, Address: 0x162758, Func Offset: 0xb38
	// Line 1076, Address: 0x16279c, Func Offset: 0xb7c
	// Line 1077, Address: 0x1627a0, Func Offset: 0xb80
	// Line 1078, Address: 0x1627a8, Func Offset: 0xb88
	// Line 1079, Address: 0x1627b8, Func Offset: 0xb98
	// Line 1080, Address: 0x162804, Func Offset: 0xbe4
	// Line 1083, Address: 0x16280c, Func Offset: 0xbec
	// Line 1085, Address: 0x162814, Func Offset: 0xbf4
	// Line 1086, Address: 0x162844, Func Offset: 0xc24
	// Line 1087, Address: 0x162850, Func Offset: 0xc30
	// Line 1089, Address: 0x162860, Func Offset: 0xc40
	// Line 1091, Address: 0x162868, Func Offset: 0xc48
	// Line 1092, Address: 0x16287c, Func Offset: 0xc5c
	// Line 1093, Address: 0x16288c, Func Offset: 0xc6c
	// Line 1094, Address: 0x1628d8, Func Offset: 0xcb8
	// Line 1098, Address: 0x1628e0, Func Offset: 0xcc0
	// Line 1099, Address: 0x1628ec, Func Offset: 0xccc
	// Func End, Address: 0x162904, Func Offset: 0xce4
}

// 
// Start address: 0x162910
void enSCUCtrlAttack(EnLOCAL_DATA* dp)
{
	// Line 1103, Address: 0x162910, Func Offset: 0
	// Line 1104, Address: 0x162924, Func Offset: 0x14
	// Line 1105, Address: 0x162934, Func Offset: 0x24
	// Line 1106, Address: 0x162940, Func Offset: 0x30
	// Line 1108, Address: 0x162948, Func Offset: 0x38
	// Line 1110, Address: 0x162974, Func Offset: 0x64
	// Line 1111, Address: 0x16299c, Func Offset: 0x8c
	// Line 1112, Address: 0x1629ac, Func Offset: 0x9c
	// Line 1113, Address: 0x1629b8, Func Offset: 0xa8
	// Line 1114, Address: 0x1629c4, Func Offset: 0xb4
	// Line 1115, Address: 0x1629d0, Func Offset: 0xc0
	// Line 1116, Address: 0x1629dc, Func Offset: 0xcc
	// Line 1117, Address: 0x1629e4, Func Offset: 0xd4
	// Line 1118, Address: 0x1629f4, Func Offset: 0xe4
	// Line 1119, Address: 0x162a00, Func Offset: 0xf0
	// Line 1120, Address: 0x162a04, Func Offset: 0xf4
	// Line 1121, Address: 0x162a0c, Func Offset: 0xfc
	// Line 1123, Address: 0x162a18, Func Offset: 0x108
	// Line 1125, Address: 0x162a20, Func Offset: 0x110
	// Line 1127, Address: 0x162a28, Func Offset: 0x118
	// Line 1129, Address: 0x162a40, Func Offset: 0x130
	// Line 1130, Address: 0x162a50, Func Offset: 0x140
	// Line 1131, Address: 0x162a60, Func Offset: 0x150
	// Line 1132, Address: 0x162a6c, Func Offset: 0x15c
	// Line 1135, Address: 0x162aa8, Func Offset: 0x198
	// Line 1136, Address: 0x162aac, Func Offset: 0x19c
	// Line 1137, Address: 0x162ab4, Func Offset: 0x1a4
	// Line 1138, Address: 0x162ac4, Func Offset: 0x1b4
	// Line 1140, Address: 0x162b00, Func Offset: 0x1f0
	// Line 1141, Address: 0x162b0c, Func Offset: 0x1fc
	// Line 1142, Address: 0x162b14, Func Offset: 0x204
	// Line 1144, Address: 0x162b20, Func Offset: 0x210
	// Line 1145, Address: 0x162b28, Func Offset: 0x218
	// Line 1149, Address: 0x162b34, Func Offset: 0x224
	// Line 1151, Address: 0x162b3c, Func Offset: 0x22c
	// Line 1152, Address: 0x162b48, Func Offset: 0x238
	// Line 1153, Address: 0x162b58, Func Offset: 0x248
	// Line 1154, Address: 0x162b68, Func Offset: 0x258
	// Line 1155, Address: 0x162b94, Func Offset: 0x284
	// Line 1156, Address: 0x162b98, Func Offset: 0x288
	// Line 1157, Address: 0x162ba0, Func Offset: 0x290
	// Line 1159, Address: 0x162bac, Func Offset: 0x29c
	// Line 1160, Address: 0x162bb4, Func Offset: 0x2a4
	// Line 1165, Address: 0x162bc0, Func Offset: 0x2b0
	// Line 1166, Address: 0x162bcc, Func Offset: 0x2bc
	// Func End, Address: 0x162be4, Func Offset: 0x2d4
}

// 
// Start address: 0x162bf0
void enSCUCtrlDamage(EnLOCAL_DATA* dp)
{
	float d;
	// Line 1170, Address: 0x162bf0, Func Offset: 0
	// Line 1172, Address: 0x162c04, Func Offset: 0x14
	// Line 1174, Address: 0x162c30, Func Offset: 0x40
	// Line 1175, Address: 0x162c3c, Func Offset: 0x4c
	// Line 1176, Address: 0x162c50, Func Offset: 0x60
	// Line 1177, Address: 0x162c60, Func Offset: 0x70
	// Line 1178, Address: 0x162c6c, Func Offset: 0x7c
	// Line 1179, Address: 0x162c74, Func Offset: 0x84
	// Line 1180, Address: 0x162c7c, Func Offset: 0x8c
	// Line 1182, Address: 0x162c88, Func Offset: 0x98
	// Line 1184, Address: 0x162c90, Func Offset: 0xa0
	// Line 1186, Address: 0x162d00, Func Offset: 0x110
	// Line 1187, Address: 0x162d1c, Func Offset: 0x12c
	// Line 1188, Address: 0x162d24, Func Offset: 0x134
	// Line 1190, Address: 0x162d40, Func Offset: 0x150
	// Line 1191, Address: 0x162d5c, Func Offset: 0x16c
	// Line 1192, Address: 0x162d68, Func Offset: 0x178
	// Line 1193, Address: 0x162d94, Func Offset: 0x1a4
	// Line 1194, Address: 0x162d9c, Func Offset: 0x1ac
	// Line 1195, Address: 0x162da4, Func Offset: 0x1b4
	// Line 1197, Address: 0x162dac, Func Offset: 0x1bc
	// Line 1198, Address: 0x162db8, Func Offset: 0x1c8
	// Line 1200, Address: 0x162dc0, Func Offset: 0x1d0
	// Line 1201, Address: 0x162dec, Func Offset: 0x1fc
	// Line 1202, Address: 0x162df4, Func Offset: 0x204
	// Line 1203, Address: 0x162e10, Func Offset: 0x220
	// Line 1205, Address: 0x162e14, Func Offset: 0x224
	// Line 1207, Address: 0x162e1c, Func Offset: 0x22c
	// Line 1208, Address: 0x162e2c, Func Offset: 0x23c
	// Line 1210, Address: 0x162e38, Func Offset: 0x248
	// Line 1211, Address: 0x162e48, Func Offset: 0x258
	// Line 1212, Address: 0x162e58, Func Offset: 0x268
	// Line 1213, Address: 0x162e60, Func Offset: 0x270
	// Line 1214, Address: 0x162e68, Func Offset: 0x278
	// Line 1215, Address: 0x162e6c, Func Offset: 0x27c
	// Line 1216, Address: 0x162e78, Func Offset: 0x288
	// Line 1217, Address: 0x162e8c, Func Offset: 0x29c
	// Line 1218, Address: 0x162e9c, Func Offset: 0x2ac
	// Line 1219, Address: 0x162ea8, Func Offset: 0x2b8
	// Line 1220, Address: 0x162eb0, Func Offset: 0x2c0
	// Line 1224, Address: 0x162ebc, Func Offset: 0x2cc
	// Line 1225, Address: 0x162ec0, Func Offset: 0x2d0
	// Func End, Address: 0x162ed8, Func Offset: 0x2e8
}

// 
// Start address: 0x162ee0
void enSCUCtrlConfuse(EnLOCAL_DATA* dp)
{
	// Line 1229, Address: 0x162ee0, Func Offset: 0
	// Line 1230, Address: 0x162ef0, Func Offset: 0x10
	// Line 1231, Address: 0x162f00, Func Offset: 0x20
	// Line 1232, Address: 0x162f14, Func Offset: 0x34
	// Line 1233, Address: 0x162f18, Func Offset: 0x38
	// Line 1234, Address: 0x162f20, Func Offset: 0x40
	// Line 1235, Address: 0x162f2c, Func Offset: 0x4c
	// Line 1238, Address: 0x162f34, Func Offset: 0x54
	// Line 1239, Address: 0x162f40, Func Offset: 0x60
	// Line 1240, Address: 0x162f4c, Func Offset: 0x6c
	// Line 1241, Address: 0x162f5c, Func Offset: 0x7c
	// Line 1243, Address: 0x162f68, Func Offset: 0x88
	// Line 1244, Address: 0x162f88, Func Offset: 0xa8
	// Line 1245, Address: 0x162f90, Func Offset: 0xb0
	// Line 1246, Address: 0x162fc0, Func Offset: 0xe0
	// Line 1247, Address: 0x162fe8, Func Offset: 0x108
	// Line 1248, Address: 0x162ff4, Func Offset: 0x114
	// Line 1249, Address: 0x162ff8, Func Offset: 0x118
	// Func End, Address: 0x16300c, Func Offset: 0x12c
}

// 
// Start address: 0x163010
void enSCUCtrlDown(EnLOCAL_DATA* dp)
{
	// Line 1253, Address: 0x163010, Func Offset: 0
	// Line 1254, Address: 0x163024, Func Offset: 0x14
	// Line 1256, Address: 0x163050, Func Offset: 0x40
	// Line 1257, Address: 0x16305c, Func Offset: 0x4c
	// Line 1258, Address: 0x163068, Func Offset: 0x58
	// Line 1259, Address: 0x163090, Func Offset: 0x80
	// Line 1260, Address: 0x1630a4, Func Offset: 0x94
	// Line 1261, Address: 0x1630b0, Func Offset: 0xa0
	// Line 1262, Address: 0x1630d8, Func Offset: 0xc8
	// Line 1263, Address: 0x1630e4, Func Offset: 0xd4
	// Line 1264, Address: 0x1630f0, Func Offset: 0xe0
	// Line 1265, Address: 0x1630f8, Func Offset: 0xe8
	// Line 1266, Address: 0x163104, Func Offset: 0xf4
	// Line 1268, Address: 0x16310c, Func Offset: 0xfc
	// Line 1270, Address: 0x163114, Func Offset: 0x104
	// Line 1271, Address: 0x163120, Func Offset: 0x110
	// Line 1274, Address: 0x163140, Func Offset: 0x130
	// Line 1276, Address: 0x163158, Func Offset: 0x148
	// Line 1277, Address: 0x163164, Func Offset: 0x154
	// Line 1279, Address: 0x16316c, Func Offset: 0x15c
	// Line 1280, Address: 0x16317c, Func Offset: 0x16c
	// Line 1281, Address: 0x163190, Func Offset: 0x180
	// Line 1282, Address: 0x16319c, Func Offset: 0x18c
	// Line 1283, Address: 0x1631a8, Func Offset: 0x198
	// Line 1284, Address: 0x1631bc, Func Offset: 0x1ac
	// Line 1285, Address: 0x1631c8, Func Offset: 0x1b8
	// Line 1286, Address: 0x1631f0, Func Offset: 0x1e0
	// Line 1287, Address: 0x1631fc, Func Offset: 0x1ec
	// Line 1288, Address: 0x163208, Func Offset: 0x1f8
	// Line 1289, Address: 0x163210, Func Offset: 0x200
	// Line 1290, Address: 0x16321c, Func Offset: 0x20c
	// Line 1292, Address: 0x163224, Func Offset: 0x214
	// Line 1294, Address: 0x16322c, Func Offset: 0x21c
	// Line 1295, Address: 0x163234, Func Offset: 0x224
	// Line 1296, Address: 0x163244, Func Offset: 0x234
	// Line 1297, Address: 0x163274, Func Offset: 0x264
	// Line 1299, Address: 0x163284, Func Offset: 0x274
	// Line 1300, Address: 0x163294, Func Offset: 0x284
	// Line 1301, Address: 0x1632a0, Func Offset: 0x290
	// Line 1302, Address: 0x1632ac, Func Offset: 0x29c
	// Line 1305, Address: 0x1632b4, Func Offset: 0x2a4
	// Line 1306, Address: 0x1632c8, Func Offset: 0x2b8
	// Line 1309, Address: 0x16331c, Func Offset: 0x30c
	// Line 1310, Address: 0x163328, Func Offset: 0x318
	// Line 1312, Address: 0x163330, Func Offset: 0x320
	// Line 1313, Address: 0x163344, Func Offset: 0x334
	// Line 1314, Address: 0x163350, Func Offset: 0x340
	// Line 1315, Address: 0x16335c, Func Offset: 0x34c
	// Line 1316, Address: 0x163368, Func Offset: 0x358
	// Line 1317, Address: 0x163398, Func Offset: 0x388
	// Line 1318, Address: 0x1633a0, Func Offset: 0x390
	// Line 1319, Address: 0x1633cc, Func Offset: 0x3bc
	// Line 1320, Address: 0x1633fc, Func Offset: 0x3ec
	// Line 1321, Address: 0x16340c, Func Offset: 0x3fc
	// Line 1322, Address: 0x16341c, Func Offset: 0x40c
	// Line 1323, Address: 0x16342c, Func Offset: 0x41c
	// Line 1324, Address: 0x163434, Func Offset: 0x424
	// Line 1325, Address: 0x16343c, Func Offset: 0x42c
	// Line 1327, Address: 0x163448, Func Offset: 0x438
	// Line 1329, Address: 0x163450, Func Offset: 0x440
	// Line 1330, Address: 0x16346c, Func Offset: 0x45c
	// Line 1332, Address: 0x16349c, Func Offset: 0x48c
	// Line 1333, Address: 0x1634b0, Func Offset: 0x4a0
	// Line 1335, Address: 0x1634c4, Func Offset: 0x4b4
	// Line 1336, Address: 0x1634cc, Func Offset: 0x4bc
	// Line 1338, Address: 0x16350c, Func Offset: 0x4fc
	// Line 1339, Address: 0x163520, Func Offset: 0x510
	// Line 1340, Address: 0x163528, Func Offset: 0x518
	// Line 1344, Address: 0x16353c, Func Offset: 0x52c
	// Line 1346, Address: 0x163544, Func Offset: 0x534
	// Line 1347, Address: 0x163554, Func Offset: 0x544
	// Line 1348, Address: 0x16355c, Func Offset: 0x54c
	// Line 1349, Address: 0x163568, Func Offset: 0x558
	// Line 1350, Address: 0x16357c, Func Offset: 0x56c
	// Line 1351, Address: 0x163588, Func Offset: 0x578
	// Line 1352, Address: 0x163590, Func Offset: 0x580
	// Line 1355, Address: 0x16359c, Func Offset: 0x58c
	// Line 1357, Address: 0x1635a4, Func Offset: 0x594
	// Line 1358, Address: 0x1635b4, Func Offset: 0x5a4
	// Line 1359, Address: 0x1635c0, Func Offset: 0x5b0
	// Line 1360, Address: 0x1635cc, Func Offset: 0x5bc
	// Line 1361, Address: 0x1635e0, Func Offset: 0x5d0
	// Line 1362, Address: 0x1635ec, Func Offset: 0x5dc
	// Line 1363, Address: 0x163614, Func Offset: 0x604
	// Line 1364, Address: 0x163620, Func Offset: 0x610
	// Line 1365, Address: 0x16362c, Func Offset: 0x61c
	// Line 1366, Address: 0x163634, Func Offset: 0x624
	// Line 1367, Address: 0x163640, Func Offset: 0x630
	// Line 1369, Address: 0x163648, Func Offset: 0x638
	// Line 1371, Address: 0x163650, Func Offset: 0x640
	// Line 1372, Address: 0x163664, Func Offset: 0x654
	// Line 1373, Address: 0x163670, Func Offset: 0x660
	// Line 1374, Address: 0x16367c, Func Offset: 0x66c
	// Line 1376, Address: 0x163684, Func Offset: 0x674
	// Line 1377, Address: 0x163694, Func Offset: 0x684
	// Line 1378, Address: 0x1636cc, Func Offset: 0x6bc
	// Line 1380, Address: 0x1636dc, Func Offset: 0x6cc
	// Line 1381, Address: 0x1636ec, Func Offset: 0x6dc
	// Line 1382, Address: 0x1636f8, Func Offset: 0x6e8
	// Line 1383, Address: 0x163704, Func Offset: 0x6f4
	// Line 1386, Address: 0x16370c, Func Offset: 0x6fc
	// Line 1387, Address: 0x16371c, Func Offset: 0x70c
	// Line 1388, Address: 0x163724, Func Offset: 0x714
	// Line 1390, Address: 0x16372c, Func Offset: 0x71c
	// Line 1391, Address: 0x163740, Func Offset: 0x730
	// Line 1392, Address: 0x163748, Func Offset: 0x738
	// Line 1394, Address: 0x163750, Func Offset: 0x740
	// Line 1395, Address: 0x163764, Func Offset: 0x754
	// Line 1396, Address: 0x163770, Func Offset: 0x760
	// Line 1397, Address: 0x16377c, Func Offset: 0x76c
	// Line 1399, Address: 0x163784, Func Offset: 0x774
	// Line 1400, Address: 0x163798, Func Offset: 0x788
	// Line 1401, Address: 0x1637ac, Func Offset: 0x79c
	// Line 1402, Address: 0x1637b8, Func Offset: 0x7a8
	// Line 1403, Address: 0x1637c4, Func Offset: 0x7b4
	// Line 1404, Address: 0x1637d0, Func Offset: 0x7c0
	// Line 1405, Address: 0x163800, Func Offset: 0x7f0
	// Line 1407, Address: 0x163808, Func Offset: 0x7f8
	// Line 1409, Address: 0x163810, Func Offset: 0x800
	// Line 1410, Address: 0x163820, Func Offset: 0x810
	// Line 1411, Address: 0x16382c, Func Offset: 0x81c
	// Line 1412, Address: 0x163838, Func Offset: 0x828
	// Line 1413, Address: 0x163870, Func Offset: 0x860
	// Line 1414, Address: 0x1638a8, Func Offset: 0x898
	// Line 1415, Address: 0x1638b4, Func Offset: 0x8a4
	// Line 1416, Address: 0x1638c0, Func Offset: 0x8b0
	// Line 1418, Address: 0x1638c8, Func Offset: 0x8b8
	// Line 1419, Address: 0x1638d8, Func Offset: 0x8c8
	// Line 1420, Address: 0x1638f4, Func Offset: 0x8e4
	// Line 1421, Address: 0x163900, Func Offset: 0x8f0
	// Line 1423, Address: 0x16390c, Func Offset: 0x8fc
	// Line 1425, Address: 0x163914, Func Offset: 0x904
	// Line 1426, Address: 0x163924, Func Offset: 0x914
	// Line 1427, Address: 0x163930, Func Offset: 0x920
	// Line 1428, Address: 0x16393c, Func Offset: 0x92c
	// Line 1429, Address: 0x163950, Func Offset: 0x940
	// Line 1430, Address: 0x16395c, Func Offset: 0x94c
	// Line 1431, Address: 0x163984, Func Offset: 0x974
	// Line 1432, Address: 0x163990, Func Offset: 0x980
	// Line 1433, Address: 0x16399c, Func Offset: 0x98c
	// Line 1434, Address: 0x1639a4, Func Offset: 0x994
	// Line 1435, Address: 0x1639b0, Func Offset: 0x9a0
	// Line 1437, Address: 0x1639b8, Func Offset: 0x9a8
	// Line 1439, Address: 0x1639c0, Func Offset: 0x9b0
	// Line 1440, Address: 0x1639d0, Func Offset: 0x9c0
	// Line 1441, Address: 0x1639d8, Func Offset: 0x9c8
	// Line 1442, Address: 0x1639f4, Func Offset: 0x9e4
	// Line 1444, Address: 0x163a00, Func Offset: 0x9f0
	// Line 1446, Address: 0x163a08, Func Offset: 0x9f8
	// Line 1447, Address: 0x163a18, Func Offset: 0xa08
	// Line 1448, Address: 0x163a24, Func Offset: 0xa14
	// Line 1449, Address: 0x163a30, Func Offset: 0xa20
	// Line 1450, Address: 0x163a44, Func Offset: 0xa34
	// Line 1451, Address: 0x163a50, Func Offset: 0xa40
	// Line 1452, Address: 0x163a78, Func Offset: 0xa68
	// Line 1453, Address: 0x163a84, Func Offset: 0xa74
	// Line 1454, Address: 0x163a90, Func Offset: 0xa80
	// Line 1455, Address: 0x163a98, Func Offset: 0xa88
	// Line 1456, Address: 0x163aa4, Func Offset: 0xa94
	// Line 1458, Address: 0x163aac, Func Offset: 0xa9c
	// Line 1460, Address: 0x163ab4, Func Offset: 0xaa4
	// Line 1461, Address: 0x163ac4, Func Offset: 0xab4
	// Line 1462, Address: 0x163acc, Func Offset: 0xabc
	// Line 1463, Address: 0x163ae8, Func Offset: 0xad8
	// Line 1464, Address: 0x163afc, Func Offset: 0xaec
	// Line 1465, Address: 0x163b10, Func Offset: 0xb00
	// Line 1466, Address: 0x163b1c, Func Offset: 0xb0c
	// Line 1467, Address: 0x163b28, Func Offset: 0xb18
	// Line 1468, Address: 0x163b34, Func Offset: 0xb24
	// Line 1469, Address: 0x163b60, Func Offset: 0xb50
	// Line 1473, Address: 0x163b68, Func Offset: 0xb58
	// Func End, Address: 0x163b80, Func Offset: 0xb70
}

// 
// Start address: 0x163b80
int enSCUCanSeePlayer(EnLOCAL_DATA* dp)
{
	int wcd;
	float a;
	float dist;
	float* ppos;
	// Line 1478, Address: 0x163b80, Func Offset: 0
	// Line 1479, Address: 0x163ba0, Func Offset: 0x20
	// Line 1481, Address: 0x163bac, Func Offset: 0x2c
	// Line 1482, Address: 0x163bb8, Func Offset: 0x38
	// Line 1483, Address: 0x163bd4, Func Offset: 0x54
	// Line 1484, Address: 0x163bec, Func Offset: 0x6c
	// Line 1487, Address: 0x163c1c, Func Offset: 0x9c
	// Line 1488, Address: 0x163c34, Func Offset: 0xb4
	// Line 1489, Address: 0x163c4c, Func Offset: 0xcc
	// Line 1491, Address: 0x163c70, Func Offset: 0xf0
	// Line 1493, Address: 0x163ca4, Func Offset: 0x124
	// Line 1495, Address: 0x163cb0, Func Offset: 0x130
	// Line 1497, Address: 0x163cbc, Func Offset: 0x13c
	// Line 1498, Address: 0x163cc0, Func Offset: 0x140
	// Line 1500, Address: 0x163d00, Func Offset: 0x180
	// Line 1503, Address: 0x163d2c, Func Offset: 0x1ac
	// Line 1507, Address: 0x163d58, Func Offset: 0x1d8
	// Line 1510, Address: 0x163d80, Func Offset: 0x200
	// Line 1513, Address: 0x163da8, Func Offset: 0x228
	// Line 1514, Address: 0x163dc0, Func Offset: 0x240
	// Line 1515, Address: 0x163dd8, Func Offset: 0x258
	// Line 1516, Address: 0x163e1c, Func Offset: 0x29c
	// Line 1517, Address: 0x163e28, Func Offset: 0x2a8
	// Line 1519, Address: 0x163e54, Func Offset: 0x2d4
	// Line 1520, Address: 0x163e80, Func Offset: 0x300
	// Line 1522, Address: 0x163e94, Func Offset: 0x314
	// Func End, Address: 0x163eb8, Func Offset: 0x338
}

// 
// Start address: 0x163ec0
int enSCUCheckAmbush(EnLOCAL_DATA* dp)
{
	float pos[4];
	float* ppos;
	float pz;
	float px;
	int i;
	int num_max;
	EnAMBUSH_DATA* pa;
	// Line 1527, Address: 0x163ec0, Func Offset: 0
	// Line 1528, Address: 0x163ed8, Func Offset: 0x18
	// Line 1529, Address: 0x163ef4, Func Offset: 0x34
	// Line 1534, Address: 0x163f10, Func Offset: 0x50
	// Line 1535, Address: 0x163f44, Func Offset: 0x84
	// Line 1536, Address: 0x163f50, Func Offset: 0x90
	// Line 1537, Address: 0x163f5c, Func Offset: 0x9c
	// Line 1538, Address: 0x163f60, Func Offset: 0xa0
	// Line 1539, Address: 0x163f64, Func Offset: 0xa4
	// Line 1540, Address: 0x163f70, Func Offset: 0xb0
	// Line 1542, Address: 0x163fc0, Func Offset: 0x100
	// Line 1543, Address: 0x163fc8, Func Offset: 0x108
	// Line 1544, Address: 0x163fd0, Func Offset: 0x110
	// Line 1545, Address: 0x16401c, Func Offset: 0x15c
	// Line 1546, Address: 0x164020, Func Offset: 0x160
	// Line 1547, Address: 0x16402c, Func Offset: 0x16c
	// Line 1548, Address: 0x164044, Func Offset: 0x184
	// Line 1549, Address: 0x164048, Func Offset: 0x188
	// Func End, Address: 0x164064, Func Offset: 0x1a4
}

// 
// Start address: 0x164070
int enSCUCheckUpper(EnLOCAL_DATA* dp)
{
	float pos2[4];
	float pos1[4];
	// Line 1554, Address: 0x164070, Func Offset: 0
	// Line 1556, Address: 0x164078, Func Offset: 0x8
	// Line 1557, Address: 0x164088, Func Offset: 0x18
	// Line 1558, Address: 0x164098, Func Offset: 0x28
	// Line 1559, Address: 0x1640b4, Func Offset: 0x44
	// Line 1560, Address: 0x1640cc, Func Offset: 0x5c
	// Line 1561, Address: 0x1640ec, Func Offset: 0x7c
	// Line 1563, Address: 0x1640f8, Func Offset: 0x88
	// Line 1564, Address: 0x1640fc, Func Offset: 0x8c
	// Func End, Address: 0x16410c, Func Offset: 0x9c
}

// 
// Start address: 0x164110
void enSCUAnimeSet(EnLOCAL_DATA* dp, int anim)
{
	// Line 1568, Address: 0x164110, Func Offset: 0
	// Line 1569, Address: 0x164128, Func Offset: 0x18
	// Line 1570, Address: 0x164134, Func Offset: 0x24
	// Line 1571, Address: 0x164140, Func Offset: 0x30
	// Line 1572, Address: 0x164148, Func Offset: 0x38
	// Line 1573, Address: 0x164150, Func Offset: 0x40
	// Line 1574, Address: 0x164154, Func Offset: 0x44
	// Line 1575, Address: 0x164160, Func Offset: 0x50
	// Line 1577, Address: 0x16416c, Func Offset: 0x5c
	// Line 1580, Address: 0x164174, Func Offset: 0x64
	// Line 1581, Address: 0x1641b4, Func Offset: 0xa4
	// Line 1582, Address: 0x1641c0, Func Offset: 0xb0
	// Line 1584, Address: 0x1641cc, Func Offset: 0xbc
	// Line 1585, Address: 0x1641f0, Func Offset: 0xe0
	// Line 1586, Address: 0x1641fc, Func Offset: 0xec
	// Line 1588, Address: 0x164210, Func Offset: 0x100
	// Line 1589, Address: 0x16421c, Func Offset: 0x10c
	// Line 1591, Address: 0x164228, Func Offset: 0x118
	// Func End, Address: 0x164240, Func Offset: 0x130
}

// 
// Start address: 0x164240
void enSCUAnimeReset(EnLOCAL_DATA* dp, int anim)
{
	// Line 1595, Address: 0x164240, Func Offset: 0
	// Line 1597, Address: 0x164258, Func Offset: 0x18
	// Line 1598, Address: 0x164298, Func Offset: 0x58
	// Line 1599, Address: 0x1642bc, Func Offset: 0x7c
	// Line 1600, Address: 0x1642c8, Func Offset: 0x88
	// Line 1602, Address: 0x1642d4, Func Offset: 0x94
	// Func End, Address: 0x1642ec, Func Offset: 0xac
}

// 
// Start address: 0x1642f0
void enSCUAnimeExec(EnLOCAL_DATA* dp)
{
	float vec[4];
	float pos[4];
	int of;
	// Line 1606, Address: 0x1642f0, Func Offset: 0
	// Line 1607, Address: 0x164304, Func Offset: 0x14
	// Line 1608, Address: 0x164308, Func Offset: 0x18
	// Line 1609, Address: 0x16431c, Func Offset: 0x2c
	// Line 1610, Address: 0x164344, Func Offset: 0x54
	// Line 1613, Address: 0x164370, Func Offset: 0x80
	// Line 1614, Address: 0x16437c, Func Offset: 0x8c
	// Line 1616, Address: 0x16439c, Func Offset: 0xac
	// Line 1617, Address: 0x1643a8, Func Offset: 0xb8
	// Line 1619, Address: 0x1643c0, Func Offset: 0xd0
	// Line 1621, Address: 0x1643e0, Func Offset: 0xf0
	// Line 1622, Address: 0x1643f0, Func Offset: 0x100
	// Line 1623, Address: 0x164408, Func Offset: 0x118
	// Line 1625, Address: 0x164450, Func Offset: 0x160
	// Line 1626, Address: 0x164488, Func Offset: 0x198
	// Line 1627, Address: 0x164498, Func Offset: 0x1a8
	// Line 1628, Address: 0x1644ac, Func Offset: 0x1bc
	// Line 1631, Address: 0x1644b4, Func Offset: 0x1c4
	// Line 1633, Address: 0x1644c8, Func Offset: 0x1d8
	// Line 1635, Address: 0x1644d4, Func Offset: 0x1e4
	// Line 1646, Address: 0x16456c, Func Offset: 0x27c
	// Line 1647, Address: 0x164580, Func Offset: 0x290
	// Line 1648, Address: 0x16459c, Func Offset: 0x2ac
	// Line 1650, Address: 0x1645a4, Func Offset: 0x2b4
	// Line 1651, Address: 0x1645b4, Func Offset: 0x2c4
	// Line 1652, Address: 0x1645d0, Func Offset: 0x2e0
	// Line 1653, Address: 0x1645d8, Func Offset: 0x2e8
	// Line 1655, Address: 0x1645f4, Func Offset: 0x304
	// Line 1659, Address: 0x164614, Func Offset: 0x324
	// Func End, Address: 0x16462c, Func Offset: 0x33c
}

// 
// Start address: 0x164630
void enSCUAutoRecovery(EnLOCAL_DATA* dp)
{
	short recover_rate[5];
	// Line 1663, Address: 0x164630, Func Offset: 0
	// Line 1664, Address: 0x164640, Func Offset: 0x10
	// Line 1671, Address: 0x16465c, Func Offset: 0x2c
	// Line 1672, Address: 0x164688, Func Offset: 0x58
	// Func End, Address: 0x16469c, Func Offset: 0x6c
}

// 
// Start address: 0x1646a0
float enSCUGetWalkSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1676, Address: 0x1646a0, Func Offset: 0
	// Line 1677, Address: 0x1646b0, Func Offset: 0x10
	// Line 1684, Address: 0x1646cc, Func Offset: 0x2c
	// Line 1685, Address: 0x1646e0, Func Offset: 0x40
	// Line 1686, Address: 0x16470c, Func Offset: 0x6c
	// Line 1688, Address: 0x16472c, Func Offset: 0x8c
	// Func End, Address: 0x164740, Func Offset: 0xa0
}

// 
// Start address: 0x164740
float enSCUGetCrawlSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1692, Address: 0x164740, Func Offset: 0
	// Line 1693, Address: 0x164750, Func Offset: 0x10
	// Line 1700, Address: 0x16476c, Func Offset: 0x2c
	// Line 1701, Address: 0x164780, Func Offset: 0x40
	// Line 1702, Address: 0x1647a8, Func Offset: 0x68
	// Line 1703, Address: 0x1647c8, Func Offset: 0x88
	// Line 1704, Address: 0x1647dc, Func Offset: 0x9c
	// Func End, Address: 0x1647f0, Func Offset: 0xb0
}

// 
// Start address: 0x1647f0
float enSCUGetFeelRange()
{
	float feel_range[5];
	// Line 1708, Address: 0x1647f0, Func Offset: 0
	// Line 1709, Address: 0x1647f8, Func Offset: 0x8
	// Line 1717, Address: 0x164814, Func Offset: 0x24
	// Line 1720, Address: 0x164850, Func Offset: 0x60
	// Func End, Address: 0x164860, Func Offset: 0x70
}

// 
// Start address: 0x164860
float enSCUGetAttackRange()
{
	float r;
	float attack_range[5];
	// Line 1724, Address: 0x164860, Func Offset: 0
	// Line 1725, Address: 0x16486c, Func Offset: 0xc
	// Line 1732, Address: 0x164888, Func Offset: 0x28
	// Line 1733, Address: 0x16489c, Func Offset: 0x3c
	// Line 1734, Address: 0x1648c0, Func Offset: 0x60
	// Line 1735, Address: 0x1648c4, Func Offset: 0x64
	// Func End, Address: 0x1648d8, Func Offset: 0x78
}

// 
// Start address: 0x1648e0
float enSCUGetAttackAngle()
{
	float attack_angle[5];
	// Line 1739, Address: 0x1648e0, Func Offset: 0
	// Line 1740, Address: 0x1648e8, Func Offset: 0x8
	// Line 1747, Address: 0x164904, Func Offset: 0x24
	// Line 1748, Address: 0x164918, Func Offset: 0x38
	// Func End, Address: 0x164928, Func Offset: 0x48
}

// 
// Start address: 0x164930
float enSCUGetAttackProbability(EnLOCAL_DATA* dp)
{
	int m;
	float attack_rate[5];
	// Line 1752, Address: 0x164930, Func Offset: 0
	// Line 1753, Address: 0x164944, Func Offset: 0x14
	// Line 1760, Address: 0x164960, Func Offset: 0x30
	// Line 1761, Address: 0x16496c, Func Offset: 0x3c
	// Line 1762, Address: 0x1649a0, Func Offset: 0x70
	// Line 1763, Address: 0x1649bc, Func Offset: 0x8c
	// Line 1765, Address: 0x1649e0, Func Offset: 0xb0
	// Line 1766, Address: 0x1649f0, Func Offset: 0xc0
	// Func End, Address: 0x164a08, Func Offset: 0xd8
}

// 
// Start address: 0x164a10
float enSCUGetRepertAttackProbability()
{
	float attack_rate[5];
	// Line 1770, Address: 0x164a10, Func Offset: 0
	// Line 1771, Address: 0x164a18, Func Offset: 0x8
	// Line 1778, Address: 0x164a34, Func Offset: 0x24
	// Line 1779, Address: 0x164a48, Func Offset: 0x38
	// Func End, Address: 0x164a58, Func Offset: 0x48
}

// 
// Start address: 0x164a60
float enSCUGetAttackSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1783, Address: 0x164a60, Func Offset: 0
	// Line 1784, Address: 0x164a70, Func Offset: 0x10
	// Line 1791, Address: 0x164a8c, Func Offset: 0x2c
	// Line 1792, Address: 0x164aa0, Func Offset: 0x40
	// Line 1793, Address: 0x164ac8, Func Offset: 0x68
	// Line 1795, Address: 0x164ae8, Func Offset: 0x88
	// Func End, Address: 0x164afc, Func Offset: 0x9c
}

// 
// Start address: 0x164b00
float enSCUGetRotSpeed()
{
	float rot_rate[5];
	// Line 1799, Address: 0x164b00, Func Offset: 0
	// Line 1800, Address: 0x164b08, Func Offset: 0x8
	// Line 1807, Address: 0x164b24, Func Offset: 0x24
	// Line 1808, Address: 0x164b48, Func Offset: 0x48
	// Func End, Address: 0x164b58, Func Offset: 0x58
}

// 
// Start address: 0x164b60
float enSCUGetAimingSpeed()
{
	float speed_rate2[5];
	float speed_rate[5];
	// Line 1812, Address: 0x164b60, Func Offset: 0
	// Line 1813, Address: 0x164b68, Func Offset: 0x8
	// Line 1820, Address: 0x164b84, Func Offset: 0x24
	// Line 1828, Address: 0x164ba0, Func Offset: 0x40
	// Line 1832, Address: 0x164c04, Func Offset: 0xa4
	// Func End, Address: 0x164c14, Func Offset: 0xb4
}

// 
// Start address: 0x164c20
void enSCUSetDownTime(EnLOCAL_DATA* dp)
{
	short down_time[5];
	// Line 1836, Address: 0x164c20, Func Offset: 0
	// Line 1837, Address: 0x164c30, Func Offset: 0x10
	// Line 1844, Address: 0x164c4c, Func Offset: 0x2c
	// Line 1845, Address: 0x164c6c, Func Offset: 0x4c
	// Func End, Address: 0x164c80, Func Offset: 0x60
}

// 
// Start address: 0x164c80
float enSCUGetCrawlProbability()
{
	float crawl_rate[5];
	// Line 1849, Address: 0x164c80, Func Offset: 0
	// Line 1850, Address: 0x164c88, Func Offset: 0x8
	// Line 1857, Address: 0x164ca4, Func Offset: 0x24
	// Line 1858, Address: 0x164cb8, Func Offset: 0x38
	// Func End, Address: 0x164cc8, Func Offset: 0x48
}

// 
// Start address: 0x164cd0
void enSCUSetMoveCount(EnLOCAL_DATA* dp)
{
	int n;
	// Line 1862, Address: 0x164cd0, Func Offset: 0
	// Line 1864, Address: 0x164ce4, Func Offset: 0x14
	// Line 1865, Address: 0x164d44, Func Offset: 0x74
	// Line 1866, Address: 0x164d54, Func Offset: 0x84
	// Func End, Address: 0x164d6c, Func Offset: 0x9c
}

// 
// Start address: 0x164d70
void enSCUSetDc(EnLOCAL_DATA* dp)
{
	// Line 1870, Address: 0x164d70, Func Offset: 0
	// Line 1871, Address: 0x164d84, Func Offset: 0x14
	// Line 1872, Address: 0x164d90, Func Offset: 0x20
	// Line 1873, Address: 0x164d94, Func Offset: 0x24
	// Line 1874, Address: 0x164dc4, Func Offset: 0x54
	// Func End, Address: 0x164ddc, Func Offset: 0x6c
}

// 
// Start address: 0x164de0
void enSCUSoundLife(EnLOCAL_DATA* dp)
{
	// Line 1878, Address: 0x164de0, Func Offset: 0
	// Line 1879, Address: 0x164df4, Func Offset: 0x14
	// Line 1880, Address: 0x164e04, Func Offset: 0x24
	// Line 1881, Address: 0x164e0c, Func Offset: 0x2c
	// Line 1882, Address: 0x164e5c, Func Offset: 0x7c
	// Line 1883, Address: 0x164e9c, Func Offset: 0xbc
	// Line 1885, Address: 0x164ea0, Func Offset: 0xc0
	// Func End, Address: 0x164eb8, Func Offset: 0xd8
}

// 
// Start address: 0x164ec0
void enSCUSoundCrawlInit(EnLOCAL_DATA* dp)
{
	// Line 1890, Address: 0x164ec0, Func Offset: 0
	// Line 1891, Address: 0x164ec4, Func Offset: 0x4
	// Func End, Address: 0x164ecc, Func Offset: 0xc
}

// 
// Start address: 0x164ed0
void enSCUSoundCrawl(EnLOCAL_DATA* dp)
{
	char r;
	// Line 1895, Address: 0x164ed0, Func Offset: 0
	// Line 1896, Address: 0x164ee0, Func Offset: 0x10
	// Line 1897, Address: 0x164efc, Func Offset: 0x2c
	// Line 1899, Address: 0x164f0c, Func Offset: 0x3c
	// Line 1900, Address: 0x164f1c, Func Offset: 0x4c
	// Line 1901, Address: 0x164f48, Func Offset: 0x78
	// Line 1902, Address: 0x164f54, Func Offset: 0x84
	// Line 1903, Address: 0x164f70, Func Offset: 0xa0
	// Line 1904, Address: 0x164f78, Func Offset: 0xa8
	// Line 1906, Address: 0x164f9c, Func Offset: 0xcc
	// Line 1908, Address: 0x164fa4, Func Offset: 0xd4
	// Line 1910, Address: 0x164fe0, Func Offset: 0x110
	// Func End, Address: 0x164ff4, Func Offset: 0x124
}

