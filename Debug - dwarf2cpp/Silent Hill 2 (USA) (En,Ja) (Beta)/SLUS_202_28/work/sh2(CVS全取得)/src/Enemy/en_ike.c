typedef struct SubCharacter;
typedef struct EnLOCAL_DATA;
typedef struct EnBOS_DATA;
typedef struct EnSCU_DATA;
typedef struct shSkelton;
typedef struct _CL_VHIT_RESULT;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct _anon0;
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
typedef union _anon3;
typedef struct EnMKN_DATA;
typedef struct _anon4;
typedef struct EnEDB_DATA;
typedef struct EnPAP_DATA;
typedef struct EnNIK_DATA;

typedef void(*type_15)(EnLOCAL_DATA*);
typedef void(*type_23)(EnLOCAL_DATA*);
typedef void(*type_32)(SubCharacter*);
typedef void(*type_33)(SubCharacter*);

typedef unsigned char type_0[4];
typedef float type_1[5];
typedef unsigned int type_2[255];
typedef unsigned int type_3[32];
typedef unsigned char type_4[14];
typedef unsigned char type_5[4];
typedef EnANIME_DATA type_6[21];
typedef char type_7[4];
typedef char type_8[4];
typedef char type_9[4];
typedef char type_10[4];
typedef char type_11[4];
typedef unsigned char type_12[97];
typedef float type_13[4];
typedef EnLOCAL_DATA type_14[32];
typedef EnCOMMUNICATION type_16[8];
typedef void(*type_17)(EnLOCAL_DATA*)[6];
typedef EnFORBIDDENAREA type_18[2];
typedef EnSOUND_QUEUE type_19[8];
typedef unsigned char type_20[20];
typedef float type_21[4][7];
typedef float type_22[5];
typedef void(*type_24)(EnLOCAL_DATA*)[11];
typedef float type_25[4];
typedef unsigned char type_26[14];
typedef float type_27[4][4];
typedef shAttackInfo type_28[66];
typedef char type_29[3];
typedef unsigned char type_30[69];
typedef float type_31[4];

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

struct _CL_VHIT_RESULT
{
	int kind;
	_anon3 hobj;
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
EnANIME_DATA EnIKEAnime[21];
float appearance_point[4][7];
EnLOCAL_WORK enLocalWork;
_anon0 game_flag;

void enIKEInitData(EnLOCAL_DATA* dp);
void enIKECtrlMain(EnLOCAL_DATA* dp);
void enIKECtrlAutomatic(EnLOCAL_DATA* dp);
void enIKECtrlGoPlayable(EnLOCAL_DATA* dp);
void enIKECtrlHand();
void enIKECtrlWait(EnLOCAL_DATA* dp);
void enIKECtrlAppearance(EnLOCAL_DATA* dp);
void enIKECtrlMove(EnLOCAL_DATA* dp);
void enIKECtrlChase(EnLOCAL_DATA* dp);
void enIKECtrlKick(EnLOCAL_DATA* dp);
void enIKECtrlSwing(EnLOCAL_DATA* dp);
void enIKECtrlAttack(EnLOCAL_DATA* dp);
void enIKECtrlAttack2(EnLOCAL_DATA* dp);
void enIKECtrlTakePlayer(EnLOCAL_DATA* dp);
void enIKECtrlDamage(EnLOCAL_DATA* dp);
void enIKECtrlDead(EnLOCAL_DATA* dp);
int enIKECountActive(EnLOCAL_DATA* dp);
int enIKECheckOther(EnLOCAL_DATA* dp);
int enIKECheckOther2(EnLOCAL_DATA* dp);
float* enIKECheckNearOther(EnLOCAL_DATA* dp);
void enIKECheckNearPlayer(EnLOCAL_DATA* dp);
int enIKEGetDamageMotion(EnLOCAL_DATA* dp);
int enIKECanSeePlayer(EnLOCAL_DATA* dp);
int enIKECanSeePlayer2(EnLOCAL_DATA* dp);
void enIKEAnimeSet(EnLOCAL_DATA* dp, int anim);
void enIKEAnimeExec(EnLOCAL_DATA* dp);
float enIKEGetMoveSpeed(EnLOCAL_DATA* dp);
void enIKESoundSwing(EnLOCAL_DATA* dp);
void enIKESoundSigns(EnLOCAL_DATA* dp);

// 
// Start address: 0x150b50
void enIKEInitData(EnLOCAL_DATA* dp)
{
	int mode;
	float vitarity[5];
	// Line 152, Address: 0x150b50, Func Offset: 0
	// Line 153, Address: 0x150b64, Func Offset: 0x14
	// Line 160, Address: 0x150b80, Func Offset: 0x30
	// Line 162, Address: 0x150b8c, Func Offset: 0x3c
	// Line 163, Address: 0x150b94, Func Offset: 0x44
	// Line 164, Address: 0x150b9c, Func Offset: 0x4c
	// Line 165, Address: 0x150ba8, Func Offset: 0x58
	// Line 166, Address: 0x150bd0, Func Offset: 0x80
	// Line 169, Address: 0x150bd8, Func Offset: 0x88
	// Line 170, Address: 0x150c08, Func Offset: 0xb8
	// Line 171, Address: 0x150c1c, Func Offset: 0xcc
	// Line 175, Address: 0x150c2c, Func Offset: 0xdc
	// Line 176, Address: 0x150c38, Func Offset: 0xe8
	// Line 177, Address: 0x150c48, Func Offset: 0xf8
	// Line 178, Address: 0x150c5c, Func Offset: 0x10c
	// Func End, Address: 0x150c74, Func Offset: 0x124
}

// 
// Start address: 0x150c80
void enIKECtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlIKEFunc)(EnLOCAL_DATA*)[6];
	// Line 184, Address: 0x150c80, Func Offset: 0
	// Line 185, Address: 0x150c88, Func Offset: 0x8
	// Line 194, Address: 0x150ca4, Func Offset: 0x24
	// Line 195, Address: 0x150cbc, Func Offset: 0x3c
	// Func End, Address: 0x150ccc, Func Offset: 0x4c
}

// 
// Start address: 0x150cd0
void enIKECtrlAutomatic(EnLOCAL_DATA* dp)
{
	void(*enCtrlIKESubFunc)(EnLOCAL_DATA*)[11];
	// Line 199, Address: 0x150cd0, Func Offset: 0
	// Line 200, Address: 0x150ce0, Func Offset: 0x10
	// Line 214, Address: 0x150d0c, Func Offset: 0x3c
	// Line 216, Address: 0x150d18, Func Offset: 0x48
	// Line 219, Address: 0x150d34, Func Offset: 0x64
	// Line 221, Address: 0x150d40, Func Offset: 0x70
	// Line 222, Address: 0x150d4c, Func Offset: 0x7c
	// Func End, Address: 0x150d60, Func Offset: 0x90
}

// 
// Start address: 0x150d60
void enIKECtrlGoPlayable(EnLOCAL_DATA* dp)
{
	// Line 227, Address: 0x150d60, Func Offset: 0
	// Line 228, Address: 0x150d68, Func Offset: 0x8
	// Line 229, Address: 0x150d74, Func Offset: 0x14
	// Func End, Address: 0x150d7c, Func Offset: 0x1c
}

// 
// Start address: 0x150d80
void enIKECtrlHand()
{
	// Line 366, Address: 0x150d80, Func Offset: 0
	// Func End, Address: 0x150d88, Func Offset: 0x8
}

// 
// Start address: 0x150d90
void enIKECtrlWait(EnLOCAL_DATA* dp)
{
	EnLOCAL_DATA* tp;
	float* ppos;
	int j;
	float d;
	float dm;
	int n;
	int i;
	// Line 370, Address: 0x150d90, Func Offset: 0
	// Line 372, Address: 0x150da4, Func Offset: 0x14
	// Line 374, Address: 0x150dc4, Func Offset: 0x34
	// Line 375, Address: 0x150dcc, Func Offset: 0x3c
	// Line 376, Address: 0x150ddc, Func Offset: 0x4c
	// Line 377, Address: 0x150de8, Func Offset: 0x58
	// Line 378, Address: 0x150df4, Func Offset: 0x64
	// Line 379, Address: 0x150e00, Func Offset: 0x70
	// Line 382, Address: 0x150e08, Func Offset: 0x78
	// Line 383, Address: 0x150e14, Func Offset: 0x84
	// Line 386, Address: 0x150e30, Func Offset: 0xa0
	// Line 389, Address: 0x150e3c, Func Offset: 0xac
	// Line 390, Address: 0x150e40, Func Offset: 0xb0
	// Line 391, Address: 0x150e4c, Func Offset: 0xbc
	// Line 392, Address: 0x150e54, Func Offset: 0xc4
	// Line 393, Address: 0x150e60, Func Offset: 0xd0
	// Line 396, Address: 0x150ecc, Func Offset: 0x13c
	// Line 397, Address: 0x150ed0, Func Offset: 0x140
	// Line 399, Address: 0x150ed8, Func Offset: 0x148
	// Line 400, Address: 0x150ef0, Func Offset: 0x160
	// Line 401, Address: 0x150efc, Func Offset: 0x16c
	// Line 402, Address: 0x150f38, Func Offset: 0x1a8
	// Line 403, Address: 0x150f48, Func Offset: 0x1b8
	// Line 404, Address: 0x150f4c, Func Offset: 0x1bc
	// Line 406, Address: 0x150f50, Func Offset: 0x1c0
	// Line 407, Address: 0x150f68, Func Offset: 0x1d8
	// Line 408, Address: 0x150f8c, Func Offset: 0x1fc
	// Line 409, Address: 0x150f98, Func Offset: 0x208
	// Line 410, Address: 0x150fb0, Func Offset: 0x220
	// Line 411, Address: 0x150fbc, Func Offset: 0x22c
	// Line 415, Address: 0x150fc8, Func Offset: 0x238
	// Func End, Address: 0x150fe0, Func Offset: 0x250
}

// 
// Start address: 0x150fe0
void enIKECtrlAppearance(EnLOCAL_DATA* dp)
{
	// Line 419, Address: 0x150fe0, Func Offset: 0
	// Line 420, Address: 0x150ff0, Func Offset: 0x10
	// Line 422, Address: 0x15101c, Func Offset: 0x3c
	// Line 423, Address: 0x151040, Func Offset: 0x60
	// Line 424, Address: 0x151048, Func Offset: 0x68
	// Line 426, Address: 0x151050, Func Offset: 0x70
	// Line 427, Address: 0x151058, Func Offset: 0x78
	// Line 428, Address: 0x151064, Func Offset: 0x84
	// Line 430, Address: 0x151070, Func Offset: 0x90
	// Line 431, Address: 0x15109c, Func Offset: 0xbc
	// Line 432, Address: 0x1510a0, Func Offset: 0xc0
	// Line 433, Address: 0x1510b0, Func Offset: 0xd0
	// Line 434, Address: 0x1510c4, Func Offset: 0xe4
	// Line 435, Address: 0x1510d0, Func Offset: 0xf0
	// Line 436, Address: 0x1510d8, Func Offset: 0xf8
	// Line 438, Address: 0x1510e0, Func Offset: 0x100
	// Line 440, Address: 0x1510e8, Func Offset: 0x108
	// Line 441, Address: 0x151108, Func Offset: 0x128
	// Line 442, Address: 0x15111c, Func Offset: 0x13c
	// Line 443, Address: 0x15112c, Func Offset: 0x14c
	// Line 446, Address: 0x151138, Func Offset: 0x158
	// Line 447, Address: 0x151144, Func Offset: 0x164
	// Func End, Address: 0x151158, Func Offset: 0x178
}

// 
// Start address: 0x151160
void enIKECtrlMove(EnLOCAL_DATA* dp)
{
	EnLOCAL_DATA* tp;
	float* tpos;
	float a;
	int t;
	float vec[4];
	// Line 451, Address: 0x151160, Func Offset: 0
	// Line 456, Address: 0x151170, Func Offset: 0x10
	// Line 457, Address: 0x151180, Func Offset: 0x20
	// Line 458, Address: 0x15118c, Func Offset: 0x2c
	// Line 460, Address: 0x151194, Func Offset: 0x34
	// Line 461, Address: 0x1511a0, Func Offset: 0x40
	// Line 462, Address: 0x1511b0, Func Offset: 0x50
	// Line 463, Address: 0x1511c0, Func Offset: 0x60
	// Line 465, Address: 0x1511cc, Func Offset: 0x6c
	// Line 467, Address: 0x1511f4, Func Offset: 0x94
	// Line 468, Address: 0x151200, Func Offset: 0xa0
	// Line 473, Address: 0x1512e4, Func Offset: 0x184
	// Line 474, Address: 0x1512f0, Func Offset: 0x190
	// Line 477, Address: 0x1512f8, Func Offset: 0x198
	// Line 478, Address: 0x15130c, Func Offset: 0x1ac
	// Line 479, Address: 0x151320, Func Offset: 0x1c0
	// Line 480, Address: 0x151334, Func Offset: 0x1d4
	// Line 481, Address: 0x15139c, Func Offset: 0x23c
	// Line 482, Address: 0x1513d0, Func Offset: 0x270
	// Line 484, Address: 0x1513e0, Func Offset: 0x280
	// Line 485, Address: 0x1513f8, Func Offset: 0x298
	// Line 486, Address: 0x151414, Func Offset: 0x2b4
	// Line 487, Address: 0x151428, Func Offset: 0x2c8
	// Line 488, Address: 0x151448, Func Offset: 0x2e8
	// Line 489, Address: 0x151450, Func Offset: 0x2f0
	// Line 490, Address: 0x151464, Func Offset: 0x304
	// Line 491, Address: 0x15148c, Func Offset: 0x32c
	// Line 492, Address: 0x1514c8, Func Offset: 0x368
	// Line 493, Address: 0x151518, Func Offset: 0x3b8
	// Line 496, Address: 0x151528, Func Offset: 0x3c8
	// Line 497, Address: 0x151540, Func Offset: 0x3e0
	// Line 498, Address: 0x151590, Func Offset: 0x430
	// Line 499, Address: 0x1515b0, Func Offset: 0x450
	// Line 500, Address: 0x1515bc, Func Offset: 0x45c
	// Line 501, Address: 0x1515c8, Func Offset: 0x468
	// Line 502, Address: 0x1515d4, Func Offset: 0x474
	// Line 503, Address: 0x1515e8, Func Offset: 0x488
	// Line 504, Address: 0x1515f4, Func Offset: 0x494
	// Line 505, Address: 0x15161c, Func Offset: 0x4bc
	// Line 506, Address: 0x151628, Func Offset: 0x4c8
	// Line 508, Address: 0x151658, Func Offset: 0x4f8
	// Line 509, Address: 0x151664, Func Offset: 0x504
	// Line 510, Address: 0x151668, Func Offset: 0x508
	// Line 511, Address: 0x151674, Func Offset: 0x514
	// Line 512, Address: 0x151680, Func Offset: 0x520
	// Func End, Address: 0x151694, Func Offset: 0x534
}

// 
// Start address: 0x1516a0
void enIKECtrlChase(EnLOCAL_DATA* dp)
{
	_CL_VHIT_RESULT* res;
	int t;
	float a2;
	float a1;
	// Line 516, Address: 0x1516a0, Func Offset: 0
	// Line 519, Address: 0x1516b8, Func Offset: 0x18
	// Line 520, Address: 0x1516c8, Func Offset: 0x28
	// Line 521, Address: 0x1516d4, Func Offset: 0x34
	// Line 523, Address: 0x1516dc, Func Offset: 0x3c
	// Line 524, Address: 0x1516e8, Func Offset: 0x48
	// Line 525, Address: 0x1516f8, Func Offset: 0x58
	// Line 526, Address: 0x15171c, Func Offset: 0x7c
	// Line 527, Address: 0x15177c, Func Offset: 0xdc
	// Line 528, Address: 0x1517b0, Func Offset: 0x110
	// Line 529, Address: 0x1517c0, Func Offset: 0x120
	// Line 531, Address: 0x1517cc, Func Offset: 0x12c
	// Line 532, Address: 0x1517f0, Func Offset: 0x150
	// Line 533, Address: 0x15182c, Func Offset: 0x18c
	// Line 534, Address: 0x15184c, Func Offset: 0x1ac
	// Line 535, Address: 0x151870, Func Offset: 0x1d0
	// Line 536, Address: 0x151878, Func Offset: 0x1d8
	// Line 537, Address: 0x15187c, Func Offset: 0x1dc
	// Line 538, Address: 0x151890, Func Offset: 0x1f0
	// Line 540, Address: 0x1518a0, Func Offset: 0x200
	// Line 541, Address: 0x1518d4, Func Offset: 0x234
	// Line 542, Address: 0x151934, Func Offset: 0x294
	// Line 543, Address: 0x151968, Func Offset: 0x2c8
	// Line 545, Address: 0x151978, Func Offset: 0x2d8
	// Line 546, Address: 0x1519a4, Func Offset: 0x304
	// Line 547, Address: 0x1519ac, Func Offset: 0x30c
	// Line 551, Address: 0x151a20, Func Offset: 0x380
	// Line 552, Address: 0x151a2c, Func Offset: 0x38c
	// Line 554, Address: 0x151a30, Func Offset: 0x390
	// Line 555, Address: 0x151a48, Func Offset: 0x3a8
	// Line 556, Address: 0x151a98, Func Offset: 0x3f8
	// Line 557, Address: 0x151ab8, Func Offset: 0x418
	// Line 558, Address: 0x151ac4, Func Offset: 0x424
	// Line 559, Address: 0x151ad0, Func Offset: 0x430
	// Line 560, Address: 0x151adc, Func Offset: 0x43c
	// Line 561, Address: 0x151af0, Func Offset: 0x450
	// Line 562, Address: 0x151afc, Func Offset: 0x45c
	// Line 563, Address: 0x151b20, Func Offset: 0x480
	// Line 564, Address: 0x151b48, Func Offset: 0x4a8
	// Line 565, Address: 0x151b54, Func Offset: 0x4b4
	// Line 567, Address: 0x151b58, Func Offset: 0x4b8
	// Line 568, Address: 0x151b64, Func Offset: 0x4c4
	// Line 569, Address: 0x151b70, Func Offset: 0x4d0
	// Func End, Address: 0x151b8c, Func Offset: 0x4ec
}

// 
// Start address: 0x151b90
void enIKECtrlKick(EnLOCAL_DATA* dp)
{
	float d2;
	float d;
	int t;
	// Line 573, Address: 0x151b90, Func Offset: 0
	// Line 577, Address: 0x151ba4, Func Offset: 0x14
	// Line 578, Address: 0x151bb4, Func Offset: 0x24
	// Line 579, Address: 0x151bc0, Func Offset: 0x30
	// Line 581, Address: 0x151bc8, Func Offset: 0x38
	// Line 582, Address: 0x151bd4, Func Offset: 0x44
	// Line 583, Address: 0x151be4, Func Offset: 0x54
	// Line 584, Address: 0x151bf8, Func Offset: 0x68
	// Line 585, Address: 0x151bfc, Func Offset: 0x6c
	// Line 587, Address: 0x151c08, Func Offset: 0x78
	// Line 588, Address: 0x151c18, Func Offset: 0x88
	// Line 589, Address: 0x151c30, Func Offset: 0xa0
	// Line 590, Address: 0x151c40, Func Offset: 0xb0
	// Line 591, Address: 0x151c54, Func Offset: 0xc4
	// Line 592, Address: 0x151c6c, Func Offset: 0xdc
	// Line 593, Address: 0x151c78, Func Offset: 0xe8
	// Line 594, Address: 0x151c84, Func Offset: 0xf4
	// Line 595, Address: 0x151c90, Func Offset: 0x100
	// Line 596, Address: 0x151ca4, Func Offset: 0x114
	// Line 597, Address: 0x151cb0, Func Offset: 0x120
	// Line 598, Address: 0x151cd4, Func Offset: 0x144
	// Line 599, Address: 0x151cdc, Func Offset: 0x14c
	// Line 600, Address: 0x151ce0, Func Offset: 0x150
	// Line 601, Address: 0x151cec, Func Offset: 0x15c
	// Line 602, Address: 0x151cf8, Func Offset: 0x168
	// Func End, Address: 0x151d10, Func Offset: 0x180
}

// 
// Start address: 0x151d10
void enIKECtrlSwing(EnLOCAL_DATA* dp)
{
	float a;
	int d;
	// Line 606, Address: 0x151d10, Func Offset: 0
	// Line 609, Address: 0x151d28, Func Offset: 0x18
	// Line 610, Address: 0x151d38, Func Offset: 0x28
	// Line 611, Address: 0x151d44, Func Offset: 0x34
	// Line 613, Address: 0x151d4c, Func Offset: 0x3c
	// Line 614, Address: 0x151d58, Func Offset: 0x48
	// Line 615, Address: 0x151d68, Func Offset: 0x58
	// Line 616, Address: 0x151d7c, Func Offset: 0x6c
	// Line 617, Address: 0x151d90, Func Offset: 0x80
	// Line 618, Address: 0x151d94, Func Offset: 0x84
	// Line 620, Address: 0x151da0, Func Offset: 0x90
	// Line 621, Address: 0x151da4, Func Offset: 0x94
	// Line 622, Address: 0x151db8, Func Offset: 0xa8
	// Line 624, Address: 0x151de0, Func Offset: 0xd0
	// Line 627, Address: 0x151e1c, Func Offset: 0x10c
	// Line 628, Address: 0x151e3c, Func Offset: 0x12c
	// Line 629, Address: 0x151e48, Func Offset: 0x138
	// Line 630, Address: 0x151e54, Func Offset: 0x144
	// Line 631, Address: 0x151e64, Func Offset: 0x154
	// Line 632, Address: 0x151e70, Func Offset: 0x160
	// Line 633, Address: 0x151e78, Func Offset: 0x168
	// Line 634, Address: 0x151e7c, Func Offset: 0x16c
	// Line 637, Address: 0x151e84, Func Offset: 0x174
	// Line 638, Address: 0x151eb0, Func Offset: 0x1a0
	// Line 641, Address: 0x151eb8, Func Offset: 0x1a8
	// Line 642, Address: 0x151ed8, Func Offset: 0x1c8
	// Line 643, Address: 0x151ee4, Func Offset: 0x1d4
	// Line 644, Address: 0x151ef0, Func Offset: 0x1e0
	// Line 645, Address: 0x151f00, Func Offset: 0x1f0
	// Line 648, Address: 0x151f0c, Func Offset: 0x1fc
	// Line 651, Address: 0x151f2c, Func Offset: 0x21c
	// Line 652, Address: 0x151f38, Func Offset: 0x228
	// Line 653, Address: 0x151f44, Func Offset: 0x234
	// Line 654, Address: 0x151f50, Func Offset: 0x240
	// Func End, Address: 0x151f6c, Func Offset: 0x25c
}

// 
// Start address: 0x151f70
void enIKECtrlAttack(EnLOCAL_DATA* dp)
{
	// Line 658, Address: 0x151f70, Func Offset: 0
	// Line 659, Address: 0x151f80, Func Offset: 0x10
	// Line 660, Address: 0x151f90, Func Offset: 0x20
	// Line 662, Address: 0x151fa0, Func Offset: 0x30
	// Line 663, Address: 0x151fac, Func Offset: 0x3c
	// Line 664, Address: 0x151fb4, Func Offset: 0x44
	// Line 665, Address: 0x151fc0, Func Offset: 0x50
	// Line 666, Address: 0x151ff0, Func Offset: 0x80
	// Line 667, Address: 0x152004, Func Offset: 0x94
	// Line 670, Address: 0x15200c, Func Offset: 0x9c
	// Line 672, Address: 0x152050, Func Offset: 0xe0
	// Line 673, Address: 0x15205c, Func Offset: 0xec
	// Line 674, Address: 0x15206c, Func Offset: 0xfc
	// Line 675, Address: 0x152094, Func Offset: 0x124
	// Line 676, Address: 0x1520a0, Func Offset: 0x130
	// Line 677, Address: 0x1520ac, Func Offset: 0x13c
	// Line 678, Address: 0x1520b8, Func Offset: 0x148
	// Line 679, Address: 0x1520c4, Func Offset: 0x154
	// Line 681, Address: 0x1520cc, Func Offset: 0x15c
	// Line 682, Address: 0x1520d8, Func Offset: 0x168
	// Line 683, Address: 0x1520e8, Func Offset: 0x178
	// Line 684, Address: 0x1520f8, Func Offset: 0x188
	// Line 685, Address: 0x1520fc, Func Offset: 0x18c
	// Line 686, Address: 0x15210c, Func Offset: 0x19c
	// Line 687, Address: 0x15211c, Func Offset: 0x1ac
	// Line 688, Address: 0x152124, Func Offset: 0x1b4
	// Line 689, Address: 0x15212c, Func Offset: 0x1bc
	// Line 690, Address: 0x15213c, Func Offset: 0x1cc
	// Line 693, Address: 0x152148, Func Offset: 0x1d8
	// Line 695, Address: 0x152150, Func Offset: 0x1e0
	// Line 696, Address: 0x152160, Func Offset: 0x1f0
	// Line 697, Address: 0x15216c, Func Offset: 0x1fc
	// Line 698, Address: 0x152178, Func Offset: 0x208
	// Line 699, Address: 0x152188, Func Offset: 0x218
	// Line 700, Address: 0x15219c, Func Offset: 0x22c
	// Line 702, Address: 0x1521a8, Func Offset: 0x238
	// Line 704, Address: 0x1521b0, Func Offset: 0x240
	// Line 705, Address: 0x1521c4, Func Offset: 0x254
	// Line 706, Address: 0x1521d0, Func Offset: 0x260
	// Line 708, Address: 0x1521d8, Func Offset: 0x268
	// Line 709, Address: 0x1521e8, Func Offset: 0x278
	// Line 711, Address: 0x1521fc, Func Offset: 0x28c
	// Line 713, Address: 0x152228, Func Offset: 0x2b8
	// Line 715, Address: 0x152238, Func Offset: 0x2c8
	// Line 716, Address: 0x152248, Func Offset: 0x2d8
	// Line 717, Address: 0x152258, Func Offset: 0x2e8
	// Line 719, Address: 0x152264, Func Offset: 0x2f4
	// Line 721, Address: 0x15226c, Func Offset: 0x2fc
	// Line 722, Address: 0x15227c, Func Offset: 0x30c
	// Line 723, Address: 0x152288, Func Offset: 0x318
	// Line 724, Address: 0x15229c, Func Offset: 0x32c
	// Line 725, Address: 0x1522a8, Func Offset: 0x338
	// Line 729, Address: 0x1522d8, Func Offset: 0x368
	// Line 730, Address: 0x1522e4, Func Offset: 0x374
	// Func End, Address: 0x1522f8, Func Offset: 0x388
}

// 
// Start address: 0x152300
void enIKECtrlAttack2(EnLOCAL_DATA* dp)
{
	// Line 734, Address: 0x152300, Func Offset: 0
	// Line 735, Address: 0x152310, Func Offset: 0x10
	// Line 736, Address: 0x152320, Func Offset: 0x20
	// Line 737, Address: 0x15232c, Func Offset: 0x2c
	// Line 738, Address: 0x15235c, Func Offset: 0x5c
	// Line 740, Address: 0x152364, Func Offset: 0x64
	// Line 742, Address: 0x152384, Func Offset: 0x84
	// Line 743, Address: 0x152394, Func Offset: 0x94
	// Line 744, Address: 0x1523a0, Func Offset: 0xa0
	// Line 745, Address: 0x1523c8, Func Offset: 0xc8
	// Line 746, Address: 0x1523d4, Func Offset: 0xd4
	// Line 748, Address: 0x1523e0, Func Offset: 0xe0
	// Line 749, Address: 0x1523f0, Func Offset: 0xf0
	// Line 750, Address: 0x152400, Func Offset: 0x100
	// Line 751, Address: 0x15240c, Func Offset: 0x10c
	// Line 752, Address: 0x15243c, Func Offset: 0x13c
	// Line 753, Address: 0x152448, Func Offset: 0x148
	// Line 756, Address: 0x15244c, Func Offset: 0x14c
	// Line 757, Address: 0x152458, Func Offset: 0x158
	// Line 758, Address: 0x152464, Func Offset: 0x164
	// Func End, Address: 0x152478, Func Offset: 0x178
}

// 
// Start address: 0x152480
void enIKECtrlTakePlayer(EnLOCAL_DATA* dp)
{
	EnLOCAL_DATA* tp;
	int i;
	// Line 762, Address: 0x152480, Func Offset: 0
	// Line 763, Address: 0x152490, Func Offset: 0x10
	// Line 764, Address: 0x15249c, Func Offset: 0x1c
	// Line 765, Address: 0x1524b0, Func Offset: 0x30
	// Line 766, Address: 0x1524dc, Func Offset: 0x5c
	// Line 767, Address: 0x1524e0, Func Offset: 0x60
	// Line 768, Address: 0x1524e8, Func Offset: 0x68
	// Line 772, Address: 0x1524f4, Func Offset: 0x74
	// Line 773, Address: 0x1524fc, Func Offset: 0x7c
	// Line 774, Address: 0x152508, Func Offset: 0x88
	// Line 775, Address: 0x152518, Func Offset: 0x98
	// Line 776, Address: 0x15251c, Func Offset: 0x9c
	// Line 777, Address: 0x152520, Func Offset: 0xa0
	// Line 779, Address: 0x152534, Func Offset: 0xb4
	// Line 780, Address: 0x15253c, Func Offset: 0xbc
	// Line 781, Address: 0x152548, Func Offset: 0xc8
	// Line 783, Address: 0x152554, Func Offset: 0xd4
	// Line 784, Address: 0x152564, Func Offset: 0xe4
	// Line 785, Address: 0x15257c, Func Offset: 0xfc
	// Line 786, Address: 0x152588, Func Offset: 0x108
	// Line 787, Address: 0x152598, Func Offset: 0x118
	// Line 788, Address: 0x1525a0, Func Offset: 0x120
	// Line 789, Address: 0x1525c4, Func Offset: 0x144
	// Line 791, Address: 0x1525cc, Func Offset: 0x14c
	// Line 792, Address: 0x1525fc, Func Offset: 0x17c
	// Line 793, Address: 0x152604, Func Offset: 0x184
	// Line 794, Address: 0x152610, Func Offset: 0x190
	// Line 795, Address: 0x152618, Func Offset: 0x198
	// Line 796, Address: 0x152620, Func Offset: 0x1a0
	// Line 797, Address: 0x152648, Func Offset: 0x1c8
	// Line 800, Address: 0x152654, Func Offset: 0x1d4
	// Func End, Address: 0x152668, Func Offset: 0x1e8
}

// 
// Start address: 0x152670
void enIKECtrlDamage(EnLOCAL_DATA* dp)
{
	// Line 804, Address: 0x152670, Func Offset: 0
	// Line 805, Address: 0x152680, Func Offset: 0x10
	// Line 806, Address: 0x15268c, Func Offset: 0x1c
	// Line 808, Address: 0x15269c, Func Offset: 0x2c
	// Line 809, Address: 0x1526cc, Func Offset: 0x5c
	// Line 810, Address: 0x1526dc, Func Offset: 0x6c
	// Line 811, Address: 0x1526e8, Func Offset: 0x78
	// Line 813, Address: 0x1526ec, Func Offset: 0x7c
	// Line 814, Address: 0x1526f8, Func Offset: 0x88
	// Line 815, Address: 0x15270c, Func Offset: 0x9c
	// Line 816, Address: 0x152718, Func Offset: 0xa8
	// Line 820, Address: 0x152720, Func Offset: 0xb0
	// Line 822, Address: 0x152724, Func Offset: 0xb4
	// Line 823, Address: 0x152730, Func Offset: 0xc0
	// Line 824, Address: 0x152744, Func Offset: 0xd4
	// Line 825, Address: 0x152754, Func Offset: 0xe4
	// Line 826, Address: 0x152760, Func Offset: 0xf0
	// Line 828, Address: 0x152768, Func Offset: 0xf8
	// Line 829, Address: 0x152784, Func Offset: 0x114
	// Line 830, Address: 0x152790, Func Offset: 0x120
	// Line 831, Address: 0x1527a4, Func Offset: 0x134
	// Line 832, Address: 0x1527d0, Func Offset: 0x160
	// Line 833, Address: 0x1527d4, Func Offset: 0x164
	// Line 835, Address: 0x1527e0, Func Offset: 0x170
	// Line 836, Address: 0x1527f4, Func Offset: 0x184
	// Line 837, Address: 0x152800, Func Offset: 0x190
	// Line 838, Address: 0x15280c, Func Offset: 0x19c
	// Line 840, Address: 0x152820, Func Offset: 0x1b0
	// Line 841, Address: 0x152830, Func Offset: 0x1c0
	// Line 842, Address: 0x15283c, Func Offset: 0x1cc
	// Line 843, Address: 0x15286c, Func Offset: 0x1fc
	// Line 844, Address: 0x152880, Func Offset: 0x210
	// Line 845, Address: 0x15288c, Func Offset: 0x21c
	// Line 846, Address: 0x152898, Func Offset: 0x228
	// Line 847, Address: 0x1528a0, Func Offset: 0x230
	// Line 849, Address: 0x1528ac, Func Offset: 0x23c
	// Line 850, Address: 0x1528b0, Func Offset: 0x240
	// Line 851, Address: 0x1528bc, Func Offset: 0x24c
	// Func End, Address: 0x1528d0, Func Offset: 0x260
}

// 
// Start address: 0x1528d0
void enIKECtrlDead(EnLOCAL_DATA* dp)
{
	// Line 855, Address: 0x1528d0, Func Offset: 0
	// Line 856, Address: 0x1528e0, Func Offset: 0x10
	// Line 857, Address: 0x1528f0, Func Offset: 0x20
	// Line 859, Address: 0x1528fc, Func Offset: 0x2c
	// Line 860, Address: 0x152908, Func Offset: 0x38
	// Line 861, Address: 0x152918, Func Offset: 0x48
	// Line 862, Address: 0x152924, Func Offset: 0x54
	// Line 863, Address: 0x152930, Func Offset: 0x60
	// Line 864, Address: 0x152980, Func Offset: 0xb0
	// Line 865, Address: 0x1529ac, Func Offset: 0xdc
	// Line 866, Address: 0x1529c8, Func Offset: 0xf8
	// Line 867, Address: 0x1529d0, Func Offset: 0x100
	// Line 869, Address: 0x1529dc, Func Offset: 0x10c
	// Line 870, Address: 0x1529e4, Func Offset: 0x114
	// Line 872, Address: 0x1529f0, Func Offset: 0x120
	// Line 873, Address: 0x152a00, Func Offset: 0x130
	// Line 875, Address: 0x152a90, Func Offset: 0x1c0
	// Line 876, Address: 0x152aa0, Func Offset: 0x1d0
	// Line 877, Address: 0x152aac, Func Offset: 0x1dc
	// Line 879, Address: 0x152ab4, Func Offset: 0x1e4
	// Line 881, Address: 0x152ad4, Func Offset: 0x204
	// Line 882, Address: 0x152ae4, Func Offset: 0x214
	// Line 883, Address: 0x152af4, Func Offset: 0x224
	// Line 886, Address: 0x152b0c, Func Offset: 0x23c
	// Func End, Address: 0x152b20, Func Offset: 0x250
}

// 
// Start address: 0x152b20
int enIKECountActive(EnLOCAL_DATA* dp)
{
	int n;
	int i;
	EnLOCAL_DATA* tp;
	// Line 893, Address: 0x152b20, Func Offset: 0
	// Line 895, Address: 0x152b28, Func Offset: 0x8
	// Line 896, Address: 0x152b2c, Func Offset: 0xc
	// Line 897, Address: 0x152b38, Func Offset: 0x18
	// Line 898, Address: 0x152b40, Func Offset: 0x20
	// Line 900, Address: 0x152b68, Func Offset: 0x48
	// Line 902, Address: 0x152b6c, Func Offset: 0x4c
	// Line 904, Address: 0x152b84, Func Offset: 0x64
	// Func End, Address: 0x152b8c, Func Offset: 0x6c
}

// 
// Start address: 0x152b90
int enIKECheckOther(EnLOCAL_DATA* dp)
{
	int i;
	EnLOCAL_DATA* tp;
	// Line 910, Address: 0x152b90, Func Offset: 0
	// Line 911, Address: 0x152ba8, Func Offset: 0x18
	// Line 913, Address: 0x152bb0, Func Offset: 0x20
	// Line 914, Address: 0x152bbc, Func Offset: 0x2c
	// Line 915, Address: 0x152bc4, Func Offset: 0x34
	// Line 917, Address: 0x152bf0, Func Offset: 0x60
	// Line 919, Address: 0x152c24, Func Offset: 0x94
	// Line 920, Address: 0x152c3c, Func Offset: 0xac
	// Line 921, Address: 0x152c40, Func Offset: 0xb0
	// Func End, Address: 0x152c5c, Func Offset: 0xcc
}

// 
// Start address: 0x152c60
int enIKECheckOther2(EnLOCAL_DATA* dp)
{
	int i;
	EnLOCAL_DATA* tp;
	// Line 928, Address: 0x152c60, Func Offset: 0
	// Line 930, Address: 0x152c68, Func Offset: 0x8
	// Line 931, Address: 0x152c74, Func Offset: 0x14
	// Line 932, Address: 0x152c7c, Func Offset: 0x1c
	// Line 934, Address: 0x152ca8, Func Offset: 0x48
	// Line 936, Address: 0x152cb4, Func Offset: 0x54
	// Line 937, Address: 0x152ccc, Func Offset: 0x6c
	// Line 938, Address: 0x152cd0, Func Offset: 0x70
	// Func End, Address: 0x152cd8, Func Offset: 0x78
}

// 
// Start address: 0x152ce0
float* enIKECheckNearOther(EnLOCAL_DATA* dp)
{
	float* pos;
	float md;
	float d;
	int i;
	EnLOCAL_DATA* tp;
	// Line 945, Address: 0x152ce0, Func Offset: 0
	// Line 948, Address: 0x152ce8, Func Offset: 0x8
	// Line 949, Address: 0x152cf4, Func Offset: 0x14
	// Line 950, Address: 0x152cf8, Func Offset: 0x18
	// Line 951, Address: 0x152d04, Func Offset: 0x24
	// Line 952, Address: 0x152d0c, Func Offset: 0x2c
	// Line 953, Address: 0x152d2c, Func Offset: 0x4c
	// Line 954, Address: 0x152d58, Func Offset: 0x78
	// Line 955, Address: 0x152d84, Func Offset: 0xa4
	// Line 956, Address: 0x152d88, Func Offset: 0xa8
	// Line 957, Address: 0x152d8c, Func Offset: 0xac
	// Line 959, Address: 0x152d90, Func Offset: 0xb0
	// Line 961, Address: 0x152da4, Func Offset: 0xc4
	// Func End, Address: 0x152dac, Func Offset: 0xcc
}

// 
// Start address: 0x152db0
void enIKECheckNearPlayer(EnLOCAL_DATA* dp)
{
	// Line 965, Address: 0x152db0, Func Offset: 0
	// Line 966, Address: 0x152db8, Func Offset: 0x8
	// Line 967, Address: 0x152dd0, Func Offset: 0x20
	// Func End, Address: 0x152de0, Func Offset: 0x30
}

// 
// Start address: 0x152de0
int enIKEGetDamageMotion(EnLOCAL_DATA* dp)
{
	float vec[4];
	float a;
	int dd;
	int id;
	int m;
	// Line 973, Address: 0x152de0, Func Offset: 0
	// Line 978, Address: 0x152df4, Func Offset: 0x14
	// Line 979, Address: 0x152e18, Func Offset: 0x38
	// Line 980, Address: 0x152e48, Func Offset: 0x68
	// Line 982, Address: 0x152e4c, Func Offset: 0x6c
	// Line 983, Address: 0x152e60, Func Offset: 0x80
	// Line 984, Address: 0x152e84, Func Offset: 0xa4
	// Line 985, Address: 0x152e88, Func Offset: 0xa8
	// Line 988, Address: 0x152ef0, Func Offset: 0x110
	// Line 989, Address: 0x152ef4, Func Offset: 0x114
	// Line 992, Address: 0x152efc, Func Offset: 0x11c
	// Line 993, Address: 0x152f00, Func Offset: 0x120
	// Line 998, Address: 0x152f08, Func Offset: 0x128
	// Line 999, Address: 0x152f0c, Func Offset: 0x12c
	// Line 1001, Address: 0x152f14, Func Offset: 0x134
	// Line 1002, Address: 0x152f18, Func Offset: 0x138
	// Line 1004, Address: 0x152f28, Func Offset: 0x148
	// Line 1005, Address: 0x152f2c, Func Offset: 0x14c
	// Func End, Address: 0x152f44, Func Offset: 0x164
}

// 
// Start address: 0x152f50
int enIKECanSeePlayer(EnLOCAL_DATA* dp)
{
	float dist;
	// Line 1010, Address: 0x152f50, Func Offset: 0
	// Line 1011, Address: 0x152f64, Func Offset: 0x14
	// Line 1012, Address: 0x152f70, Func Offset: 0x20
	// Line 1013, Address: 0x152fb0, Func Offset: 0x60
	// Line 1014, Address: 0x152fbc, Func Offset: 0x6c
	// Line 1016, Address: 0x152fe0, Func Offset: 0x90
	// Func End, Address: 0x152ff8, Func Offset: 0xa8
}

// 
// Start address: 0x153000
int enIKECanSeePlayer2(EnLOCAL_DATA* dp)
{
	float dist;
	_CL_VHIT_RESULT* res;
	float d;
	// Line 1021, Address: 0x153000, Func Offset: 0
	// Line 1024, Address: 0x153014, Func Offset: 0x14
	// Line 1025, Address: 0x153020, Func Offset: 0x20
	// Line 1026, Address: 0x153060, Func Offset: 0x60
	// Line 1027, Address: 0x15306c, Func Offset: 0x6c
	// Line 1028, Address: 0x153098, Func Offset: 0x98
	// Line 1029, Address: 0x1530bc, Func Offset: 0xbc
	// Line 1034, Address: 0x153184, Func Offset: 0x184
	// Line 1036, Address: 0x153190, Func Offset: 0x190
	// Line 1037, Address: 0x153194, Func Offset: 0x194
	// Func End, Address: 0x1531ac, Func Offset: 0x1ac
}

// 
// Start address: 0x1531b0
void enIKEAnimeSet(EnLOCAL_DATA* dp, int anim)
{
	// Line 1041, Address: 0x1531b0, Func Offset: 0
	// Line 1042, Address: 0x1531c8, Func Offset: 0x18
	// Line 1044, Address: 0x1531d4, Func Offset: 0x24
	// Line 1045, Address: 0x153214, Func Offset: 0x64
	// Line 1046, Address: 0x153238, Func Offset: 0x88
	// Func End, Address: 0x153250, Func Offset: 0xa0
}

// 
// Start address: 0x153250
void enIKEAnimeExec(EnLOCAL_DATA* dp)
{
	// Line 1058, Address: 0x153250, Func Offset: 0
	// Line 1059, Address: 0x153258, Func Offset: 0x8
	// Line 1060, Address: 0x15326c, Func Offset: 0x1c
	// Func End, Address: 0x15327c, Func Offset: 0x2c
}

// 
// Start address: 0x153280
float enIKEGetMoveSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1064, Address: 0x153280, Func Offset: 0
	// Line 1065, Address: 0x153290, Func Offset: 0x10
	// Line 1072, Address: 0x1532ac, Func Offset: 0x2c
	// Line 1073, Address: 0x1532c0, Func Offset: 0x40
	// Line 1074, Address: 0x1532ec, Func Offset: 0x6c
	// Line 1075, Address: 0x1532f0, Func Offset: 0x70
	// Func End, Address: 0x153304, Func Offset: 0x84
}

// 
// Start address: 0x153310
void enIKESoundSwing(EnLOCAL_DATA* dp)
{
	// Line 1079, Address: 0x153310, Func Offset: 0
	// Line 1081, Address: 0x153320, Func Offset: 0x10
	// Line 1083, Address: 0x15334c, Func Offset: 0x3c
	// Func End, Address: 0x153360, Func Offset: 0x50
}

// 
// Start address: 0x153360
void enIKESoundSigns(EnLOCAL_DATA* dp)
{
	int signs;
	// Line 1087, Address: 0x153360, Func Offset: 0
	// Line 1089, Address: 0x153370, Func Offset: 0x10
	// Line 1090, Address: 0x15339c, Func Offset: 0x3c
	// Line 1092, Address: 0x1533ac, Func Offset: 0x4c
	// Line 1093, Address: 0x1533cc, Func Offset: 0x6c
	// Line 1094, Address: 0x1533d8, Func Offset: 0x78
	// Line 1096, Address: 0x1533dc, Func Offset: 0x7c
	// Line 1099, Address: 0x1533f8, Func Offset: 0x98
	// Func End, Address: 0x15340c, Func Offset: 0xac
}

