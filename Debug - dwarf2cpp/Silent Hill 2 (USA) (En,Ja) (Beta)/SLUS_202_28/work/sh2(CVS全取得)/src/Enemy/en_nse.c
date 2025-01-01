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
typedef struct EnMKN_DATA;
typedef struct _anon3;
typedef struct EnEDB_DATA;
typedef struct EnPAP_DATA;
typedef struct EnNIK_DATA;

typedef void(*type_3)(EnLOCAL_DATA*);
typedef void(*type_11)(EnLOCAL_DATA*);
typedef void(*type_30)(SubCharacter*);
typedef void(*type_31)(SubCharacter*);

typedef float type_0[5];
typedef unsigned char type_1[4];
typedef short type_2[5];
typedef void(*type_4)(EnLOCAL_DATA*)[7];
typedef unsigned char type_5[14];
typedef float type_6[5];
typedef short type_7[5];
typedef float type_8[5];
typedef unsigned char type_9[97];
typedef float type_10[4];
typedef void(*type_12)(EnLOCAL_DATA*)[8];
typedef short type_13[5];
typedef EnLOCAL_DATA type_14[32];
typedef EnCOMMUNICATION type_15[8];
typedef EnFORBIDDENAREA type_16[2];
typedef float type_17[5];
typedef EnSOUND_QUEUE type_18[8];
typedef float type_19[5];
typedef EnANIME_DATA type_20[28];
typedef unsigned char type_21[20];
typedef float type_22[5];
typedef float type_23[4];
typedef unsigned char type_24[14];
typedef float type_25[4][4];
typedef shAttackInfo type_26[66];
typedef char type_27[3];
typedef unsigned char type_28[69];
typedef float type_29[4];

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
EnANIME_DATA EnNSEAnime[28];
EnLOCAL_WORK enLocalWork;

void enNSEInitData(EnLOCAL_DATA* dp);
void enNSECtrlMain(EnLOCAL_DATA* dp);
void enNSECtrlAutomatic(EnLOCAL_DATA* dp);
void enNSECtrlSleep(EnLOCAL_DATA* dp);
void enNSECtrlGoPlayable(EnLOCAL_DATA* dp);
void enNSECtrlEvent(EnLOCAL_DATA* dp);
void enNSECtrlHand();
void enNSECtrlWander(EnLOCAL_DATA* dp);
void enNSECtrlPrecaution(EnLOCAL_DATA* dp);
void enNSECtrlChase(EnLOCAL_DATA* dp);
void enNSECtrlAttack(EnLOCAL_DATA* dp);
void enNSECtrlDamage(EnLOCAL_DATA* dp);
void enNSECtrlConfuse(EnLOCAL_DATA* dp);
void enNSECtrlDown(EnLOCAL_DATA* dp);
int enNSECanSeePlayer(EnLOCAL_DATA* dp);
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
void enNSESetDc(EnLOCAL_DATA* dp);
void enNSESoundSigns(EnLOCAL_DATA* dp);
void enNSESoundVoice(EnLOCAL_DATA* dp);
void enNSESoundAttackVoice(EnLOCAL_DATA* dp);

// 
// Start address: 0x1577b0
void enNSEInitData(EnLOCAL_DATA* dp)
{
	float rate;
	int mode;
	float endurance[5];
	short vitarity[5];
	// Line 128, Address: 0x1577b0, Func Offset: 0
	// Line 129, Address: 0x1577c8, Func Offset: 0x18
	// Line 136, Address: 0x1577e4, Func Offset: 0x34
	// Line 143, Address: 0x157800, Func Offset: 0x50
	// Line 146, Address: 0x15780c, Func Offset: 0x5c
	// Line 147, Address: 0x157814, Func Offset: 0x64
	// Line 148, Address: 0x15781c, Func Offset: 0x6c
	// Line 150, Address: 0x15782c, Func Offset: 0x7c
	// Line 151, Address: 0x15785c, Func Offset: 0xac
	// Line 152, Address: 0x157864, Func Offset: 0xb4
	// Line 154, Address: 0x1578ac, Func Offset: 0xfc
	// Line 155, Address: 0x1578b8, Func Offset: 0x108
	// Line 157, Address: 0x1578c0, Func Offset: 0x110
	// Line 158, Address: 0x1578c8, Func Offset: 0x118
	// Line 160, Address: 0x1578d0, Func Offset: 0x120
	// Line 162, Address: 0x1578d8, Func Offset: 0x128
	// Line 163, Address: 0x1578e4, Func Offset: 0x134
	// Line 164, Address: 0x1578f0, Func Offset: 0x140
	// Line 165, Address: 0x157900, Func Offset: 0x150
	// Line 166, Address: 0x157928, Func Offset: 0x178
	// Line 168, Address: 0x157930, Func Offset: 0x180
	// Line 169, Address: 0x15793c, Func Offset: 0x18c
	// Line 170, Address: 0x157950, Func Offset: 0x1a0
	// Line 172, Address: 0x157958, Func Offset: 0x1a8
	// Line 174, Address: 0x157960, Func Offset: 0x1b0
	// Line 175, Address: 0x157974, Func Offset: 0x1c4
	// Line 177, Address: 0x157988, Func Offset: 0x1d8
	// Line 178, Address: 0x1579c0, Func Offset: 0x210
	// Line 179, Address: 0x1579e0, Func Offset: 0x230
	// Line 180, Address: 0x1579f0, Func Offset: 0x240
	// Line 181, Address: 0x1579fc, Func Offset: 0x24c
	// Line 182, Address: 0x157a10, Func Offset: 0x260
	// Line 184, Address: 0x157a1c, Func Offset: 0x26c
	// Func End, Address: 0x157a38, Func Offset: 0x288
}

// 
// Start address: 0x157a40
void enNSECtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlNSEFunc)(EnLOCAL_DATA*)[7];
	// Line 190, Address: 0x157a40, Func Offset: 0
	// Line 191, Address: 0x157a48, Func Offset: 0x8
	// Line 201, Address: 0x157a6c, Func Offset: 0x2c
	// Line 202, Address: 0x157a84, Func Offset: 0x44
	// Func End, Address: 0x157a94, Func Offset: 0x54
}

// 
// Start address: 0x157aa0
void enNSECtrlAutomatic(EnLOCAL_DATA* dp)
{
	void(*enCtrlNSESubFunc)(EnLOCAL_DATA*)[8];
	// Line 206, Address: 0x157aa0, Func Offset: 0
	// Line 207, Address: 0x157ab0, Func Offset: 0x10
	// Line 218, Address: 0x157acc, Func Offset: 0x2c
	// Line 220, Address: 0x157ad8, Func Offset: 0x38
	// Line 223, Address: 0x157af4, Func Offset: 0x54
	// Line 225, Address: 0x157b00, Func Offset: 0x60
	// Line 227, Address: 0x157b0c, Func Offset: 0x6c
	// Line 228, Address: 0x157b1c, Func Offset: 0x7c
	// Line 229, Address: 0x157b30, Func Offset: 0x90
	// Line 230, Address: 0x157b3c, Func Offset: 0x9c
	// Line 231, Address: 0x157b44, Func Offset: 0xa4
	// Line 234, Address: 0x157b50, Func Offset: 0xb0
	// Func End, Address: 0x157b64, Func Offset: 0xc4
}

// 
// Start address: 0x157b70
void enNSECtrlSleep(EnLOCAL_DATA* dp)
{
	// Line 238, Address: 0x157b70, Func Offset: 0
	// Line 239, Address: 0x157b80, Func Offset: 0x10
	// Line 240, Address: 0x157b90, Func Offset: 0x20
	// Line 242, Address: 0x157b9c, Func Offset: 0x2c
	// Func End, Address: 0x157bb0, Func Offset: 0x40
}

// 
// Start address: 0x157bb0
void enNSECtrlGoPlayable(EnLOCAL_DATA* dp)
{
	// Line 247, Address: 0x157bb0, Func Offset: 0
	// Line 248, Address: 0x157bb8, Func Offset: 0x8
	// Line 249, Address: 0x157bc0, Func Offset: 0x10
	// Func End, Address: 0x157bc8, Func Offset: 0x18
}

// 
// Start address: 0x157bd0
void enNSECtrlEvent(EnLOCAL_DATA* dp)
{
	void* tmp;
	// Line 255, Address: 0x157bd0, Func Offset: 0
	// Func End, Address: 0x157bd8, Func Offset: 0x8
}

// 
// Start address: 0x157be0
void enNSECtrlHand()
{
	// Line 387, Address: 0x157be0, Func Offset: 0
	// Func End, Address: 0x157be8, Func Offset: 0x8
}

// 
// Start address: 0x157bf0
void enNSECtrlWander(EnLOCAL_DATA* dp)
{
	float vec[4];
	int t;
	float a;
	float d;
	// Line 391, Address: 0x157bf0, Func Offset: 0
	// Line 395, Address: 0x157c04, Func Offset: 0x14
	// Line 396, Address: 0x157c14, Func Offset: 0x24
	// Line 397, Address: 0x157c20, Func Offset: 0x30
	// Line 400, Address: 0x157c28, Func Offset: 0x38
	// Line 401, Address: 0x157c34, Func Offset: 0x44
	// Line 402, Address: 0x157c40, Func Offset: 0x50
	// Line 403, Address: 0x157c4c, Func Offset: 0x5c
	// Line 404, Address: 0x157c54, Func Offset: 0x64
	// Line 405, Address: 0x157c60, Func Offset: 0x70
	// Line 406, Address: 0x157c6c, Func Offset: 0x7c
	// Line 409, Address: 0x157c74, Func Offset: 0x84
	// Line 410, Address: 0x157ca4, Func Offset: 0xb4
	// Line 411, Address: 0x157cb0, Func Offset: 0xc0
	// Line 413, Address: 0x157cb8, Func Offset: 0xc8
	// Line 414, Address: 0x157cc0, Func Offset: 0xd0
	// Line 416, Address: 0x157cec, Func Offset: 0xfc
	// Line 417, Address: 0x157cf8, Func Offset: 0x108
	// Line 418, Address: 0x157d08, Func Offset: 0x118
	// Line 419, Address: 0x157d38, Func Offset: 0x148
	// Line 420, Address: 0x157d44, Func Offset: 0x154
	// Line 422, Address: 0x157d4c, Func Offset: 0x15c
	// Line 423, Address: 0x157d54, Func Offset: 0x164
	// Line 424, Address: 0x157d74, Func Offset: 0x184
	// Line 425, Address: 0x157d84, Func Offset: 0x194
	// Line 426, Address: 0x157d90, Func Offset: 0x1a0
	// Line 427, Address: 0x157d98, Func Offset: 0x1a8
	// Line 428, Address: 0x157dcc, Func Offset: 0x1dc
	// Line 429, Address: 0x157df8, Func Offset: 0x208
	// Line 431, Address: 0x157e38, Func Offset: 0x248
	// Line 433, Address: 0x157e40, Func Offset: 0x250
	// Line 434, Address: 0x157e50, Func Offset: 0x260
	// Line 435, Address: 0x157e60, Func Offset: 0x270
	// Line 436, Address: 0x157e8c, Func Offset: 0x29c
	// Line 441, Address: 0x157e94, Func Offset: 0x2a4
	// Line 442, Address: 0x157ea4, Func Offset: 0x2b4
	// Line 443, Address: 0x157eb0, Func Offset: 0x2c0
	// Line 444, Address: 0x157ed4, Func Offset: 0x2e4
	// Line 445, Address: 0x157ef8, Func Offset: 0x308
	// Line 446, Address: 0x157f04, Func Offset: 0x314
	// Line 449, Address: 0x157f34, Func Offset: 0x344
	// Line 450, Address: 0x157f4c, Func Offset: 0x35c
	// Line 451, Address: 0x157f68, Func Offset: 0x378
	// Line 452, Address: 0x157f84, Func Offset: 0x394
	// Line 454, Address: 0x157f88, Func Offset: 0x398
	// Line 455, Address: 0x157fa0, Func Offset: 0x3b0
	// Line 456, Address: 0x157fac, Func Offset: 0x3bc
	// Line 457, Address: 0x157fb8, Func Offset: 0x3c8
	// Func End, Address: 0x157fd0, Func Offset: 0x3e0
}

// 
// Start address: 0x157fd0
void enNSECtrlPrecaution(EnLOCAL_DATA* dp)
{
	int t;
	// Line 461, Address: 0x157fd0, Func Offset: 0
	// Line 463, Address: 0x157fe0, Func Offset: 0x10
	// Line 464, Address: 0x157ff0, Func Offset: 0x20
	// Line 465, Address: 0x158020, Func Offset: 0x50
	// Line 466, Address: 0x15802c, Func Offset: 0x5c
	// Line 469, Address: 0x158034, Func Offset: 0x64
	// Line 470, Address: 0x158040, Func Offset: 0x70
	// Line 471, Address: 0x15804c, Func Offset: 0x7c
	// Line 472, Address: 0x158058, Func Offset: 0x88
	// Line 473, Address: 0x158060, Func Offset: 0x90
	// Line 474, Address: 0x15806c, Func Offset: 0x9c
	// Line 475, Address: 0x158078, Func Offset: 0xa8
	// Line 478, Address: 0x158080, Func Offset: 0xb0
	// Line 480, Address: 0x15809c, Func Offset: 0xcc
	// Line 481, Address: 0x1580a4, Func Offset: 0xd4
	// Line 484, Address: 0x1580ac, Func Offset: 0xdc
	// Line 486, Address: 0x1580cc, Func Offset: 0xfc
	// Line 487, Address: 0x1580dc, Func Offset: 0x10c
	// Line 489, Address: 0x1580e8, Func Offset: 0x118
	// Line 490, Address: 0x1580f8, Func Offset: 0x128
	// Line 495, Address: 0x158108, Func Offset: 0x138
	// Line 496, Address: 0x158120, Func Offset: 0x150
	// Line 497, Address: 0x15812c, Func Offset: 0x15c
	// Func End, Address: 0x158140, Func Offset: 0x170
}

// 
// Start address: 0x158140
void enNSECtrlChase(EnLOCAL_DATA* dp)
{
	int t;
	float d;
	// Line 501, Address: 0x158140, Func Offset: 0
	// Line 504, Address: 0x158150, Func Offset: 0x10
	// Line 505, Address: 0x158160, Func Offset: 0x20
	// Line 506, Address: 0x158190, Func Offset: 0x50
	// Line 507, Address: 0x15819c, Func Offset: 0x5c
	// Line 510, Address: 0x1581a4, Func Offset: 0x64
	// Line 511, Address: 0x1581b0, Func Offset: 0x70
	// Line 512, Address: 0x1581bc, Func Offset: 0x7c
	// Line 513, Address: 0x1581c8, Func Offset: 0x88
	// Line 514, Address: 0x1581d0, Func Offset: 0x90
	// Line 517, Address: 0x158208, Func Offset: 0xc8
	// Line 518, Address: 0x158210, Func Offset: 0xd0
	// Line 520, Address: 0x158218, Func Offset: 0xd8
	// Line 522, Address: 0x158238, Func Offset: 0xf8
	// Line 523, Address: 0x158244, Func Offset: 0x104
	// Line 524, Address: 0x158254, Func Offset: 0x114
	// Line 525, Address: 0x158260, Func Offset: 0x120
	// Line 528, Address: 0x15826c, Func Offset: 0x12c
	// Line 530, Address: 0x158290, Func Offset: 0x150
	// Line 535, Address: 0x1582b8, Func Offset: 0x178
	// Line 536, Address: 0x1582c8, Func Offset: 0x188
	// Line 537, Address: 0x1582d4, Func Offset: 0x194
	// Line 538, Address: 0x1582f8, Func Offset: 0x1b8
	// Line 539, Address: 0x15831c, Func Offset: 0x1dc
	// Line 540, Address: 0x158328, Func Offset: 0x1e8
	// Line 543, Address: 0x158358, Func Offset: 0x218
	// Line 544, Address: 0x158370, Func Offset: 0x230
	// Line 545, Address: 0x15837c, Func Offset: 0x23c
	// Line 546, Address: 0x158388, Func Offset: 0x248
	// Func End, Address: 0x15839c, Func Offset: 0x25c
}

// 
// Start address: 0x1583a0
void enNSECtrlAttack(EnLOCAL_DATA* dp)
{
	// Line 550, Address: 0x1583a0, Func Offset: 0
	// Line 551, Address: 0x1583b4, Func Offset: 0x14
	// Line 552, Address: 0x1583c4, Func Offset: 0x24
	// Line 553, Address: 0x1583d0, Func Offset: 0x30
	// Line 554, Address: 0x158400, Func Offset: 0x60
	// Line 555, Address: 0x158410, Func Offset: 0x70
	// Line 557, Address: 0x158418, Func Offset: 0x78
	// Line 559, Address: 0x158444, Func Offset: 0xa4
	// Line 560, Address: 0x158468, Func Offset: 0xc8
	// Line 562, Address: 0x1584c4, Func Offset: 0x124
	// Line 563, Address: 0x1584d4, Func Offset: 0x134
	// Line 564, Address: 0x1584dc, Func Offset: 0x13c
	// Line 566, Address: 0x1584ec, Func Offset: 0x14c
	// Line 567, Address: 0x1584f4, Func Offset: 0x154
	// Line 568, Address: 0x158504, Func Offset: 0x164
	// Line 569, Address: 0x15850c, Func Offset: 0x16c
	// Line 571, Address: 0x158514, Func Offset: 0x174
	// Line 572, Address: 0x158520, Func Offset: 0x180
	// Line 573, Address: 0x158550, Func Offset: 0x1b0
	// Line 574, Address: 0x15855c, Func Offset: 0x1bc
	// Line 575, Address: 0x158568, Func Offset: 0x1c8
	// Line 576, Address: 0x15857c, Func Offset: 0x1dc
	// Line 577, Address: 0x158588, Func Offset: 0x1e8
	// Line 578, Address: 0x158594, Func Offset: 0x1f4
	// Line 581, Address: 0x15859c, Func Offset: 0x1fc
	// Line 582, Address: 0x1585b0, Func Offset: 0x210
	// Line 584, Address: 0x1585e0, Func Offset: 0x240
	// Line 585, Address: 0x1585e8, Func Offset: 0x248
	// Line 588, Address: 0x158618, Func Offset: 0x278
	// Line 590, Address: 0x15863c, Func Offset: 0x29c
	// Line 592, Address: 0x158654, Func Offset: 0x2b4
	// Line 593, Address: 0x158664, Func Offset: 0x2c4
	// Line 594, Address: 0x15867c, Func Offset: 0x2dc
	// Line 595, Address: 0x158680, Func Offset: 0x2e0
	// Line 597, Address: 0x158688, Func Offset: 0x2e8
	// Line 598, Address: 0x158694, Func Offset: 0x2f4
	// Line 599, Address: 0x1586c4, Func Offset: 0x324
	// Line 601, Address: 0x1586d4, Func Offset: 0x334
	// Line 603, Address: 0x1586dc, Func Offset: 0x33c
	// Line 604, Address: 0x1586ec, Func Offset: 0x34c
	// Line 605, Address: 0x158704, Func Offset: 0x364
	// Line 606, Address: 0x158708, Func Offset: 0x368
	// Line 607, Address: 0x158710, Func Offset: 0x370
	// Line 611, Address: 0x15871c, Func Offset: 0x37c
	// Line 612, Address: 0x158720, Func Offset: 0x380
	// Line 613, Address: 0x15872c, Func Offset: 0x38c
	// Func End, Address: 0x158744, Func Offset: 0x3a4
}

// 
// Start address: 0x158750
void enNSECtrlDamage(EnLOCAL_DATA* dp)
{
	float d;
	// Line 617, Address: 0x158750, Func Offset: 0
	// Line 619, Address: 0x158764, Func Offset: 0x14
	// Line 621, Address: 0x158790, Func Offset: 0x40
	// Line 622, Address: 0x15879c, Func Offset: 0x4c
	// Line 623, Address: 0x1587b0, Func Offset: 0x60
	// Line 624, Address: 0x1587bc, Func Offset: 0x6c
	// Line 626, Address: 0x1587c4, Func Offset: 0x74
	// Line 628, Address: 0x158834, Func Offset: 0xe4
	// Line 629, Address: 0x158850, Func Offset: 0x100
	// Line 630, Address: 0x158858, Func Offset: 0x108
	// Line 632, Address: 0x158874, Func Offset: 0x124
	// Line 633, Address: 0x158890, Func Offset: 0x140
	// Line 634, Address: 0x15889c, Func Offset: 0x14c
	// Line 635, Address: 0x1588a8, Func Offset: 0x158
	// Line 637, Address: 0x1588d4, Func Offset: 0x184
	// Line 638, Address: 0x1588dc, Func Offset: 0x18c
	// Line 639, Address: 0x1588e4, Func Offset: 0x194
	// Line 641, Address: 0x1588ec, Func Offset: 0x19c
	// Line 642, Address: 0x1588f8, Func Offset: 0x1a8
	// Line 644, Address: 0x158900, Func Offset: 0x1b0
	// Line 645, Address: 0x15892c, Func Offset: 0x1dc
	// Line 646, Address: 0x158934, Func Offset: 0x1e4
	// Line 647, Address: 0x158950, Func Offset: 0x200
	// Line 649, Address: 0x158954, Func Offset: 0x204
	// Line 651, Address: 0x15895c, Func Offset: 0x20c
	// Line 652, Address: 0x15896c, Func Offset: 0x21c
	// Line 653, Address: 0x158978, Func Offset: 0x228
	// Line 657, Address: 0x158980, Func Offset: 0x230
	// Func End, Address: 0x158998, Func Offset: 0x248
}

// 
// Start address: 0x1589a0
void enNSECtrlConfuse(EnLOCAL_DATA* dp)
{
	// Line 661, Address: 0x1589a0, Func Offset: 0
	// Line 662, Address: 0x1589b0, Func Offset: 0x10
	// Line 663, Address: 0x1589c0, Func Offset: 0x20
	// Line 664, Address: 0x1589d4, Func Offset: 0x34
	// Line 665, Address: 0x1589d8, Func Offset: 0x38
	// Line 666, Address: 0x1589e0, Func Offset: 0x40
	// Line 667, Address: 0x1589ec, Func Offset: 0x4c
	// Line 670, Address: 0x1589f4, Func Offset: 0x54
	// Line 671, Address: 0x158a00, Func Offset: 0x60
	// Line 672, Address: 0x158a0c, Func Offset: 0x6c
	// Line 673, Address: 0x158a1c, Func Offset: 0x7c
	// Line 675, Address: 0x158a28, Func Offset: 0x88
	// Line 676, Address: 0x158a48, Func Offset: 0xa8
	// Line 677, Address: 0x158a50, Func Offset: 0xb0
	// Line 678, Address: 0x158a80, Func Offset: 0xe0
	// Line 679, Address: 0x158aa8, Func Offset: 0x108
	// Line 680, Address: 0x158ab4, Func Offset: 0x114
	// Line 681, Address: 0x158ab8, Func Offset: 0x118
	// Func End, Address: 0x158acc, Func Offset: 0x12c
}

// 
// Start address: 0x158ad0
void enNSECtrlDown(EnLOCAL_DATA* dp)
{
	// Line 685, Address: 0x158ad0, Func Offset: 0
	// Line 686, Address: 0x158ae0, Func Offset: 0x10
	// Line 688, Address: 0x158b0c, Func Offset: 0x3c
	// Line 689, Address: 0x158b18, Func Offset: 0x48
	// Line 690, Address: 0x158b24, Func Offset: 0x54
	// Line 691, Address: 0x158b30, Func Offset: 0x60
	// Line 692, Address: 0x158b54, Func Offset: 0x84
	// Line 693, Address: 0x158b68, Func Offset: 0x98
	// Line 694, Address: 0x158b74, Func Offset: 0xa4
	// Line 695, Address: 0x158b9c, Func Offset: 0xcc
	// Line 696, Address: 0x158ba8, Func Offset: 0xd8
	// Line 697, Address: 0x158bb4, Func Offset: 0xe4
	// Line 698, Address: 0x158bbc, Func Offset: 0xec
	// Line 699, Address: 0x158bc8, Func Offset: 0xf8
	// Line 701, Address: 0x158bd0, Func Offset: 0x100
	// Line 703, Address: 0x158bd8, Func Offset: 0x108
	// Line 704, Address: 0x158be4, Func Offset: 0x114
	// Line 707, Address: 0x158c04, Func Offset: 0x134
	// Line 709, Address: 0x158c1c, Func Offset: 0x14c
	// Line 710, Address: 0x158c28, Func Offset: 0x158
	// Line 712, Address: 0x158c30, Func Offset: 0x160
	// Line 713, Address: 0x158c40, Func Offset: 0x170
	// Line 714, Address: 0x158c4c, Func Offset: 0x17c
	// Line 715, Address: 0x158c58, Func Offset: 0x188
	// Line 716, Address: 0x158c64, Func Offset: 0x194
	// Line 717, Address: 0x158c78, Func Offset: 0x1a8
	// Line 718, Address: 0x158c84, Func Offset: 0x1b4
	// Line 719, Address: 0x158cac, Func Offset: 0x1dc
	// Line 720, Address: 0x158cb8, Func Offset: 0x1e8
	// Line 721, Address: 0x158cc4, Func Offset: 0x1f4
	// Line 722, Address: 0x158ccc, Func Offset: 0x1fc
	// Line 723, Address: 0x158cd8, Func Offset: 0x208
	// Line 725, Address: 0x158ce0, Func Offset: 0x210
	// Line 727, Address: 0x158ce8, Func Offset: 0x218
	// Line 728, Address: 0x158cf0, Func Offset: 0x220
	// Line 729, Address: 0x158d00, Func Offset: 0x230
	// Line 730, Address: 0x158d30, Func Offset: 0x260
	// Line 732, Address: 0x158d40, Func Offset: 0x270
	// Line 733, Address: 0x158d50, Func Offset: 0x280
	// Line 734, Address: 0x158d5c, Func Offset: 0x28c
	// Line 735, Address: 0x158d68, Func Offset: 0x298
	// Line 737, Address: 0x158d70, Func Offset: 0x2a0
	// Line 738, Address: 0x158d80, Func Offset: 0x2b0
	// Line 739, Address: 0x158d98, Func Offset: 0x2c8
	// Line 742, Address: 0x158da0, Func Offset: 0x2d0
	// Line 743, Address: 0x158db4, Func Offset: 0x2e4
	// Line 744, Address: 0x158dc8, Func Offset: 0x2f8
	// Line 745, Address: 0x158dd4, Func Offset: 0x304
	// Line 746, Address: 0x158de0, Func Offset: 0x310
	// Line 747, Address: 0x158dec, Func Offset: 0x31c
	// Line 748, Address: 0x158e1c, Func Offset: 0x34c
	// Line 749, Address: 0x158e24, Func Offset: 0x354
	// Line 750, Address: 0x158e3c, Func Offset: 0x36c
	// Line 751, Address: 0x158e58, Func Offset: 0x388
	// Line 753, Address: 0x158e98, Func Offset: 0x3c8
	// Line 754, Address: 0x158ea4, Func Offset: 0x3d4
	// Line 756, Address: 0x158eb8, Func Offset: 0x3e8
	// Line 757, Address: 0x158ec0, Func Offset: 0x3f0
	// Line 759, Address: 0x158f00, Func Offset: 0x430
	// Line 760, Address: 0x158f14, Func Offset: 0x444
	// Line 761, Address: 0x158f1c, Func Offset: 0x44c
	// Line 765, Address: 0x158f30, Func Offset: 0x460
	// Line 767, Address: 0x158f38, Func Offset: 0x468
	// Line 768, Address: 0x158f48, Func Offset: 0x478
	// Line 769, Address: 0x158f50, Func Offset: 0x480
	// Line 770, Address: 0x158f5c, Func Offset: 0x48c
	// Line 772, Address: 0x158f68, Func Offset: 0x498
	// Line 774, Address: 0x158f70, Func Offset: 0x4a0
	// Line 775, Address: 0x158f80, Func Offset: 0x4b0
	// Line 776, Address: 0x158f8c, Func Offset: 0x4bc
	// Line 777, Address: 0x158f98, Func Offset: 0x4c8
	// Line 778, Address: 0x158fac, Func Offset: 0x4dc
	// Line 779, Address: 0x158fb8, Func Offset: 0x4e8
	// Line 780, Address: 0x158fe0, Func Offset: 0x510
	// Line 781, Address: 0x158fec, Func Offset: 0x51c
	// Line 782, Address: 0x158ff8, Func Offset: 0x528
	// Line 783, Address: 0x159000, Func Offset: 0x530
	// Line 784, Address: 0x15900c, Func Offset: 0x53c
	// Line 786, Address: 0x159014, Func Offset: 0x544
	// Line 788, Address: 0x15901c, Func Offset: 0x54c
	// Line 789, Address: 0x15902c, Func Offset: 0x55c
	// Line 790, Address: 0x159064, Func Offset: 0x594
	// Line 792, Address: 0x159074, Func Offset: 0x5a4
	// Line 793, Address: 0x159084, Func Offset: 0x5b4
	// Line 794, Address: 0x159090, Func Offset: 0x5c0
	// Line 795, Address: 0x15909c, Func Offset: 0x5cc
	// Line 797, Address: 0x1590a4, Func Offset: 0x5d4
	// Line 798, Address: 0x1590b4, Func Offset: 0x5e4
	// Line 799, Address: 0x1590c4, Func Offset: 0x5f4
	// Line 800, Address: 0x1590cc, Func Offset: 0x5fc
	// Line 803, Address: 0x1590d4, Func Offset: 0x604
	// Line 804, Address: 0x1590e8, Func Offset: 0x618
	// Line 805, Address: 0x1590f0, Func Offset: 0x620
	// Line 807, Address: 0x1590f8, Func Offset: 0x628
	// Line 808, Address: 0x15910c, Func Offset: 0x63c
	// Line 809, Address: 0x159120, Func Offset: 0x650
	// Line 810, Address: 0x15912c, Func Offset: 0x65c
	// Line 811, Address: 0x159138, Func Offset: 0x668
	// Line 812, Address: 0x159144, Func Offset: 0x674
	// Line 813, Address: 0x159174, Func Offset: 0x6a4
	// Line 815, Address: 0x15917c, Func Offset: 0x6ac
	// Line 817, Address: 0x159184, Func Offset: 0x6b4
	// Line 818, Address: 0x159194, Func Offset: 0x6c4
	// Line 819, Address: 0x1591a0, Func Offset: 0x6d0
	// Line 820, Address: 0x1591ac, Func Offset: 0x6dc
	// Line 821, Address: 0x1591e4, Func Offset: 0x714
	// Line 822, Address: 0x15921c, Func Offset: 0x74c
	// Line 823, Address: 0x159228, Func Offset: 0x758
	// Line 824, Address: 0x159234, Func Offset: 0x764
	// Line 826, Address: 0x15923c, Func Offset: 0x76c
	// Line 827, Address: 0x15924c, Func Offset: 0x77c
	// Line 828, Address: 0x159268, Func Offset: 0x798
	// Line 829, Address: 0x159274, Func Offset: 0x7a4
	// Line 831, Address: 0x159280, Func Offset: 0x7b0
	// Line 833, Address: 0x159288, Func Offset: 0x7b8
	// Line 834, Address: 0x159298, Func Offset: 0x7c8
	// Line 835, Address: 0x1592a4, Func Offset: 0x7d4
	// Line 836, Address: 0x1592b0, Func Offset: 0x7e0
	// Line 837, Address: 0x1592c4, Func Offset: 0x7f4
	// Line 838, Address: 0x1592d0, Func Offset: 0x800
	// Line 839, Address: 0x1592f8, Func Offset: 0x828
	// Line 840, Address: 0x159304, Func Offset: 0x834
	// Line 841, Address: 0x159310, Func Offset: 0x840
	// Line 842, Address: 0x159318, Func Offset: 0x848
	// Line 843, Address: 0x159324, Func Offset: 0x854
	// Line 845, Address: 0x15932c, Func Offset: 0x85c
	// Line 847, Address: 0x159334, Func Offset: 0x864
	// Line 848, Address: 0x159344, Func Offset: 0x874
	// Line 849, Address: 0x15934c, Func Offset: 0x87c
	// Line 850, Address: 0x159368, Func Offset: 0x898
	// Line 851, Address: 0x15937c, Func Offset: 0x8ac
	// Line 852, Address: 0x159390, Func Offset: 0x8c0
	// Line 853, Address: 0x15939c, Func Offset: 0x8cc
	// Line 854, Address: 0x1593a8, Func Offset: 0x8d8
	// Line 855, Address: 0x1593b4, Func Offset: 0x8e4
	// Line 856, Address: 0x1593e4, Func Offset: 0x914
	// Line 860, Address: 0x1593ec, Func Offset: 0x91c
	// Func End, Address: 0x159400, Func Offset: 0x930
}

// 
// Start address: 0x159400
int enNSECanSeePlayer(EnLOCAL_DATA* dp)
{
	int wcd;
	float a;
	float dist;
	float* ppos;
	// Line 865, Address: 0x159400, Func Offset: 0
	// Line 866, Address: 0x159420, Func Offset: 0x20
	// Line 868, Address: 0x15942c, Func Offset: 0x2c
	// Line 869, Address: 0x159438, Func Offset: 0x38
	// Line 870, Address: 0x159454, Func Offset: 0x54
	// Line 871, Address: 0x15946c, Func Offset: 0x6c
	// Line 873, Address: 0x1594a0, Func Offset: 0xa0
	// Line 875, Address: 0x1594ac, Func Offset: 0xac
	// Line 877, Address: 0x1594b8, Func Offset: 0xb8
	// Line 878, Address: 0x1594bc, Func Offset: 0xbc
	// Line 880, Address: 0x1594d0, Func Offset: 0xd0
	// Line 883, Address: 0x1594f8, Func Offset: 0xf8
	// Line 886, Address: 0x159520, Func Offset: 0x120
	// Line 887, Address: 0x159538, Func Offset: 0x138
	// Line 888, Address: 0x159550, Func Offset: 0x150
	// Line 890, Address: 0x1595b0, Func Offset: 0x1b0
	// Line 892, Address: 0x1595bc, Func Offset: 0x1bc
	// Line 894, Address: 0x15960c, Func Offset: 0x20c
	// Line 896, Address: 0x159618, Func Offset: 0x218
	// Line 897, Address: 0x159638, Func Offset: 0x238
	// Line 899, Address: 0x159664, Func Offset: 0x264
	// Line 900, Address: 0x159690, Func Offset: 0x290
	// Line 901, Address: 0x159694, Func Offset: 0x294
	// Func End, Address: 0x1596b8, Func Offset: 0x2b8
}

// 
// Start address: 0x1596c0
void enNSEAnimeSet(EnLOCAL_DATA* dp, int anim)
{
	// Line 905, Address: 0x1596c0, Func Offset: 0
	// Line 906, Address: 0x1596d8, Func Offset: 0x18
	// Line 907, Address: 0x1596e4, Func Offset: 0x24
	// Line 908, Address: 0x1596ec, Func Offset: 0x2c
	// Line 909, Address: 0x1596f8, Func Offset: 0x38
	// Line 911, Address: 0x159704, Func Offset: 0x44
	// Line 914, Address: 0x15970c, Func Offset: 0x4c
	// Line 915, Address: 0x15974c, Func Offset: 0x8c
	// Line 916, Address: 0x159770, Func Offset: 0xb0
	// Line 917, Address: 0x15977c, Func Offset: 0xbc
	// Line 919, Address: 0x159788, Func Offset: 0xc8
	// Func End, Address: 0x1597a0, Func Offset: 0xe0
}

// 
// Start address: 0x1597a0
void enNSEAnimeReset(EnLOCAL_DATA* dp, int anim)
{
	// Line 923, Address: 0x1597a0, Func Offset: 0
	// Line 925, Address: 0x1597b8, Func Offset: 0x18
	// Line 926, Address: 0x1597f8, Func Offset: 0x58
	// Line 927, Address: 0x15981c, Func Offset: 0x7c
	// Line 928, Address: 0x159828, Func Offset: 0x88
	// Line 930, Address: 0x159834, Func Offset: 0x94
	// Func End, Address: 0x15984c, Func Offset: 0xac
}

// 
// Start address: 0x159850
void enNSEAnimeExec(EnLOCAL_DATA* dp)
{
	int of;
	// Line 934, Address: 0x159850, Func Offset: 0
	// Line 935, Address: 0x159864, Func Offset: 0x14
	// Line 936, Address: 0x159868, Func Offset: 0x18
	// Line 937, Address: 0x15987c, Func Offset: 0x2c
	// Line 938, Address: 0x1598a4, Func Offset: 0x54
	// Line 940, Address: 0x1598c0, Func Offset: 0x70
	// Line 941, Address: 0x1598cc, Func Offset: 0x7c
	// Line 943, Address: 0x1598ec, Func Offset: 0x9c
	// Line 944, Address: 0x1598f8, Func Offset: 0xa8
	// Line 946, Address: 0x159918, Func Offset: 0xc8
	// Line 947, Address: 0x159924, Func Offset: 0xd4
	// Line 949, Address: 0x159938, Func Offset: 0xe8
	// Line 951, Address: 0x159944, Func Offset: 0xf4
	// Line 962, Address: 0x1599e8, Func Offset: 0x198
	// Line 963, Address: 0x1599fc, Func Offset: 0x1ac
	// Line 964, Address: 0x159a18, Func Offset: 0x1c8
	// Line 966, Address: 0x159a20, Func Offset: 0x1d0
	// Line 967, Address: 0x159a30, Func Offset: 0x1e0
	// Line 968, Address: 0x159a4c, Func Offset: 0x1fc
	// Line 969, Address: 0x159a54, Func Offset: 0x204
	// Line 973, Address: 0x159a70, Func Offset: 0x220
	// Func End, Address: 0x159a88, Func Offset: 0x238
}

// 
// Start address: 0x159a90
void enNSEAutoRecovery(EnLOCAL_DATA* dp)
{
	short recover_rate[5];
	// Line 977, Address: 0x159a90, Func Offset: 0
	// Line 978, Address: 0x159aa0, Func Offset: 0x10
	// Line 985, Address: 0x159abc, Func Offset: 0x2c
	// Line 986, Address: 0x159ae8, Func Offset: 0x58
	// Func End, Address: 0x159afc, Func Offset: 0x6c
}

// 
// Start address: 0x159b00
float enNSEGetWalkSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 990, Address: 0x159b00, Func Offset: 0
	// Line 991, Address: 0x159b10, Func Offset: 0x10
	// Line 998, Address: 0x159b2c, Func Offset: 0x2c
	// Line 999, Address: 0x159b40, Func Offset: 0x40
	// Line 1000, Address: 0x159b68, Func Offset: 0x68
	// Line 1002, Address: 0x159b88, Func Offset: 0x88
	// Func End, Address: 0x159b9c, Func Offset: 0x9c
}

// 
// Start address: 0x159ba0
float enNSEGetFeelRange()
{
	float feel_range[5];
	// Line 1006, Address: 0x159ba0, Func Offset: 0
	// Line 1007, Address: 0x159ba8, Func Offset: 0x8
	// Line 1015, Address: 0x159bc4, Func Offset: 0x24
	// Line 1018, Address: 0x159c04, Func Offset: 0x64
	// Func End, Address: 0x159c14, Func Offset: 0x74
}

// 
// Start address: 0x159c20
float enNSEGetAttackProbability()
{
	float attack_rate[5];
	// Line 1022, Address: 0x159c20, Func Offset: 0
	// Line 1023, Address: 0x159c28, Func Offset: 0x8
	// Line 1030, Address: 0x159c44, Func Offset: 0x24
	// Line 1031, Address: 0x159c58, Func Offset: 0x38
	// Func End, Address: 0x159c68, Func Offset: 0x48
}

// 
// Start address: 0x159c70
float enNSEGetAttackSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1035, Address: 0x159c70, Func Offset: 0
	// Line 1036, Address: 0x159c80, Func Offset: 0x10
	// Line 1043, Address: 0x159c9c, Func Offset: 0x2c
	// Line 1044, Address: 0x159cb0, Func Offset: 0x40
	// Line 1045, Address: 0x159cd8, Func Offset: 0x68
	// Line 1047, Address: 0x159cf8, Func Offset: 0x88
	// Func End, Address: 0x159d0c, Func Offset: 0x9c
}

// 
// Start address: 0x159d10
float enNSEGetRotSpeed()
{
	float rot_rate[5];
	// Line 1051, Address: 0x159d10, Func Offset: 0
	// Line 1052, Address: 0x159d18, Func Offset: 0x8
	// Line 1059, Address: 0x159d34, Func Offset: 0x24
	// Line 1060, Address: 0x159d58, Func Offset: 0x48
	// Func End, Address: 0x159d68, Func Offset: 0x58
}

// 
// Start address: 0x159d70
void enNSESetDownTime(EnLOCAL_DATA* dp)
{
	short down_time[5];
	// Line 1064, Address: 0x159d70, Func Offset: 0
	// Line 1065, Address: 0x159d80, Func Offset: 0x10
	// Line 1072, Address: 0x159d9c, Func Offset: 0x2c
	// Line 1073, Address: 0x159dbc, Func Offset: 0x4c
	// Func End, Address: 0x159dd0, Func Offset: 0x60
}

// 
// Start address: 0x159dd0
void enNSESetMoveCount(EnLOCAL_DATA* dp)
{
	int n;
	// Line 1077, Address: 0x159dd0, Func Offset: 0
	// Line 1079, Address: 0x159de4, Func Offset: 0x14
	// Line 1080, Address: 0x159e44, Func Offset: 0x74
	// Line 1081, Address: 0x159e54, Func Offset: 0x84
	// Func End, Address: 0x159e6c, Func Offset: 0x9c
}

// 
// Start address: 0x159e70
void enNSESetDc(EnLOCAL_DATA* dp)
{
	// Line 1085, Address: 0x159e70, Func Offset: 0
	// Line 1086, Address: 0x159e84, Func Offset: 0x14
	// Line 1087, Address: 0x159e90, Func Offset: 0x20
	// Line 1088, Address: 0x159e94, Func Offset: 0x24
	// Line 1089, Address: 0x159ec4, Func Offset: 0x54
	// Func End, Address: 0x159edc, Func Offset: 0x6c
}

// 
// Start address: 0x159ee0
void enNSESoundSigns(EnLOCAL_DATA* dp)
{
	int signs;
	// Line 1093, Address: 0x159ee0, Func Offset: 0
	// Line 1095, Address: 0x159ef0, Func Offset: 0x10
	// Line 1096, Address: 0x159f1c, Func Offset: 0x3c
	// Line 1098, Address: 0x159f2c, Func Offset: 0x4c
	// Line 1099, Address: 0x159f3c, Func Offset: 0x5c
	// Line 1100, Address: 0x159f4c, Func Offset: 0x6c
	// Line 1101, Address: 0x159f50, Func Offset: 0x70
	// Line 1103, Address: 0x159f70, Func Offset: 0x90
	// Func End, Address: 0x159f84, Func Offset: 0xa4
}

// 
// Start address: 0x159f90
void enNSESoundVoice(EnLOCAL_DATA* dp)
{
	// Line 1107, Address: 0x159f90, Func Offset: 0
	// Line 1108, Address: 0x159fa0, Func Offset: 0x10
	// Line 1109, Address: 0x159fe0, Func Offset: 0x50
	// Func End, Address: 0x159ff4, Func Offset: 0x64
}

// 
// Start address: 0x15a000
void enNSESoundAttackVoice(EnLOCAL_DATA* dp)
{
	// Line 1113, Address: 0x15a000, Func Offset: 0
	// Line 1114, Address: 0x15a010, Func Offset: 0x10
	// Line 1115, Address: 0x15a04c, Func Offset: 0x4c
	// Func End, Address: 0x15a060, Func Offset: 0x60
}

