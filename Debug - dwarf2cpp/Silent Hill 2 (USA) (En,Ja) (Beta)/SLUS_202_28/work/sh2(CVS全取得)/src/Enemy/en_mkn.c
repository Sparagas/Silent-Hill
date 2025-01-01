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
typedef struct EnANIME_RANGE;
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
typedef struct _AnimeInfo;

typedef void(*type_1)(EnLOCAL_DATA*);
typedef void(*type_7)(EnLOCAL_DATA*);
typedef void(*type_34)(SubCharacter*);
typedef void(*type_35)(SubCharacter*);

typedef float type_0[5];
typedef void(*type_2)(EnLOCAL_DATA*)[7];
typedef unsigned char type_3[4];
typedef _AnimeInfo type_4[35];
typedef short type_5[5];
typedef unsigned char type_6[14];
typedef void(*type_8)(EnLOCAL_DATA*)[13];
typedef float type_9[5];
typedef unsigned char type_10[97];
typedef float type_11[4];
typedef short type_12[5];
typedef float type_13[5];
typedef EnLOCAL_DATA type_14[32];
typedef EnCOMMUNICATION type_15[8];
typedef float type_16[5];
typedef EnFORBIDDENAREA type_17[2];
typedef _AnimeInfo type_18[8];
typedef EnSOUND_QUEUE type_19[8];
typedef float type_20[5];
typedef float type_21[5];
typedef unsigned char type_22[20];
typedef EnANIME_RANGE type_23[2];
typedef float type_24[5];
typedef float type_25[5];
typedef float type_26[4];
typedef unsigned char type_27[14];
typedef float type_28[4][4];
typedef shAttackInfo type_29[66];
typedef char type_30[3];
typedef EnANIME_DATA type_31[32];
typedef unsigned char type_32[69];
typedef float type_33[4];

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

struct EnANIME_RANGE
{
	unsigned short Anime;
	short Start;
	short End;
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
_AnimeInfo mkn_anim[35];
_AnimeInfo d_mkn_anim[8];
EnANIME_DATA EnMKNAnime[32];
EnLOCAL_WORK enLocalWork;

void enMKNInitData(EnLOCAL_DATA* dp);
void enMKNCtrlMain(EnLOCAL_DATA* dp);
void enMKNCtrlAutomatic(EnLOCAL_DATA* dp);
void enMKNCtrlSleep(EnLOCAL_DATA* dp);
void enMKNCtrlGoPlayable(EnLOCAL_DATA* dp);
void enMKNCtrlEvent(EnLOCAL_DATA* dp);
void enMKNCtrlHand();
void enMKNCtrlMannequin(EnLOCAL_DATA* dp);
void enMKNCtrlMannequin2(EnLOCAL_DATA* dp);
void enMKNCtrlWaitFall(EnLOCAL_DATA* dp);
void enMKNCtrlWaitJump(EnLOCAL_DATA* dp);
void enMKNCtrlWander(EnLOCAL_DATA* dp);
void enMKNCtrlPrecaution(EnLOCAL_DATA* dp);
void enMKNCtrlChase(EnLOCAL_DATA* dp);
void enMKNCtrlAround(EnLOCAL_DATA* dp);
void enMKNCtrlAttack(EnLOCAL_DATA* dp);
void enMKNCtrlDamage(EnLOCAL_DATA* dp);
void enMKNCtrlConfuse(EnLOCAL_DATA* dp);
void enMKNCtrlDown(EnLOCAL_DATA* dp);
int enMKNCanSeePlayer(EnLOCAL_DATA* dp);
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
void enMKNSetDc(EnLOCAL_DATA* dp);
void enMKNSoundLife(EnLOCAL_DATA* dp);

// 
// Start address: 0x153410
void enMKNInitData(EnLOCAL_DATA* dp)
{
	float rate;
	int mode;
	float endurance[5];
	float vitarity[5];
	// Line 177, Address: 0x153410, Func Offset: 0
	// Line 178, Address: 0x153428, Func Offset: 0x18
	// Line 185, Address: 0x153444, Func Offset: 0x34
	// Line 192, Address: 0x153460, Func Offset: 0x50
	// Line 195, Address: 0x15346c, Func Offset: 0x5c
	// Line 196, Address: 0x153474, Func Offset: 0x64
	// Line 198, Address: 0x15347c, Func Offset: 0x6c
	// Line 199, Address: 0x15348c, Func Offset: 0x7c
	// Line 201, Address: 0x153498, Func Offset: 0x88
	// Line 203, Address: 0x1534b0, Func Offset: 0xa0
	// Line 204, Address: 0x1534b4, Func Offset: 0xa4
	// Line 206, Address: 0x1534bc, Func Offset: 0xac
	// Line 210, Address: 0x1534c4, Func Offset: 0xb4
	// Line 211, Address: 0x1534f0, Func Offset: 0xe0
	// Line 212, Address: 0x1534f8, Func Offset: 0xe8
	// Line 213, Address: 0x153508, Func Offset: 0xf8
	// Line 215, Address: 0x153538, Func Offset: 0x128
	// Line 216, Address: 0x153544, Func Offset: 0x134
	// Line 218, Address: 0x15354c, Func Offset: 0x13c
	// Line 219, Address: 0x153554, Func Offset: 0x144
	// Line 221, Address: 0x15355c, Func Offset: 0x14c
	// Line 223, Address: 0x153564, Func Offset: 0x154
	// Line 224, Address: 0x153570, Func Offset: 0x160
	// Line 225, Address: 0x15357c, Func Offset: 0x16c
	// Line 226, Address: 0x15358c, Func Offset: 0x17c
	// Line 227, Address: 0x1535b8, Func Offset: 0x1a8
	// Line 229, Address: 0x1535c0, Func Offset: 0x1b0
	// Line 230, Address: 0x1535cc, Func Offset: 0x1bc
	// Line 231, Address: 0x1535e0, Func Offset: 0x1d0
	// Line 233, Address: 0x1535e8, Func Offset: 0x1d8
	// Line 234, Address: 0x1535f8, Func Offset: 0x1e8
	// Line 235, Address: 0x153604, Func Offset: 0x1f4
	// Line 236, Address: 0x153608, Func Offset: 0x1f8
	// Line 238, Address: 0x153610, Func Offset: 0x200
	// Line 239, Address: 0x153620, Func Offset: 0x210
	// Line 240, Address: 0x15362c, Func Offset: 0x21c
	// Line 241, Address: 0x153630, Func Offset: 0x220
	// Line 243, Address: 0x153638, Func Offset: 0x228
	// Line 244, Address: 0x153640, Func Offset: 0x230
	// Line 245, Address: 0x153648, Func Offset: 0x238
	// Line 246, Address: 0x153658, Func Offset: 0x248
	// Line 247, Address: 0x153664, Func Offset: 0x254
	// Line 248, Address: 0x15366c, Func Offset: 0x25c
	// Line 249, Address: 0x153674, Func Offset: 0x264
	// Line 251, Address: 0x15367c, Func Offset: 0x26c
	// Line 252, Address: 0x153684, Func Offset: 0x274
	// Line 253, Address: 0x15368c, Func Offset: 0x27c
	// Line 254, Address: 0x15369c, Func Offset: 0x28c
	// Line 255, Address: 0x1536a8, Func Offset: 0x298
	// Line 256, Address: 0x1536b0, Func Offset: 0x2a0
	// Line 257, Address: 0x1536b8, Func Offset: 0x2a8
	// Line 259, Address: 0x1536c0, Func Offset: 0x2b0
	// Line 260, Address: 0x1536c8, Func Offset: 0x2b8
	// Line 261, Address: 0x1536d4, Func Offset: 0x2c4
	// Line 262, Address: 0x1536e0, Func Offset: 0x2d0
	// Line 264, Address: 0x1536e8, Func Offset: 0x2d8
	// Line 266, Address: 0x1536f0, Func Offset: 0x2e0
	// Line 267, Address: 0x153714, Func Offset: 0x304
	// Line 268, Address: 0x153734, Func Offset: 0x324
	// Line 269, Address: 0x153748, Func Offset: 0x338
	// Line 271, Address: 0x153754, Func Offset: 0x344
	// Func End, Address: 0x153770, Func Offset: 0x360
}

// 
// Start address: 0x153770
void enMKNCtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlMKNFunc)(EnLOCAL_DATA*)[7];
	// Line 277, Address: 0x153770, Func Offset: 0
	// Line 278, Address: 0x153778, Func Offset: 0x8
	// Line 288, Address: 0x15379c, Func Offset: 0x2c
	// Line 289, Address: 0x1537b4, Func Offset: 0x44
	// Func End, Address: 0x1537c4, Func Offset: 0x54
}

// 
// Start address: 0x1537d0
void enMKNCtrlAutomatic(EnLOCAL_DATA* dp)
{
	void(*enCtrlMKNSubFunc)(EnLOCAL_DATA*)[13];
	// Line 293, Address: 0x1537d0, Func Offset: 0
	// Line 294, Address: 0x1537e0, Func Offset: 0x10
	// Line 310, Address: 0x15380c, Func Offset: 0x3c
	// Line 312, Address: 0x153818, Func Offset: 0x48
	// Line 315, Address: 0x153834, Func Offset: 0x64
	// Line 317, Address: 0x153840, Func Offset: 0x70
	// Line 318, Address: 0x15384c, Func Offset: 0x7c
	// Line 320, Address: 0x153870, Func Offset: 0xa0
	// Line 322, Address: 0x15387c, Func Offset: 0xac
	// Func End, Address: 0x153890, Func Offset: 0xc0
}

// 
// Start address: 0x153890
void enMKNCtrlSleep(EnLOCAL_DATA* dp)
{
	// Line 326, Address: 0x153890, Func Offset: 0
	// Line 327, Address: 0x1538a0, Func Offset: 0x10
	// Line 328, Address: 0x1538b0, Func Offset: 0x20
	// Line 329, Address: 0x1538bc, Func Offset: 0x2c
	// Line 331, Address: 0x1538f8, Func Offset: 0x68
	// Line 332, Address: 0x153904, Func Offset: 0x74
	// Line 333, Address: 0x153910, Func Offset: 0x80
	// Line 335, Address: 0x153918, Func Offset: 0x88
	// Line 336, Address: 0x153924, Func Offset: 0x94
	// Line 337, Address: 0x153930, Func Offset: 0xa0
	// Line 339, Address: 0x153938, Func Offset: 0xa8
	// Line 340, Address: 0x153944, Func Offset: 0xb4
	// Line 342, Address: 0x15394c, Func Offset: 0xbc
	// Line 343, Address: 0x153958, Func Offset: 0xc8
	// Line 344, Address: 0x153964, Func Offset: 0xd4
	// Line 346, Address: 0x15396c, Func Offset: 0xdc
	// Line 347, Address: 0x153978, Func Offset: 0xe8
	// Line 351, Address: 0x153980, Func Offset: 0xf0
	// Func End, Address: 0x153994, Func Offset: 0x104
}

// 
// Start address: 0x1539a0
void enMKNCtrlGoPlayable(EnLOCAL_DATA* dp)
{
	// Line 356, Address: 0x1539a0, Func Offset: 0
	// Line 357, Address: 0x1539a8, Func Offset: 0x8
	// Line 358, Address: 0x1539b4, Func Offset: 0x14
	// Func End, Address: 0x1539bc, Func Offset: 0x1c
}

// 
// Start address: 0x1539c0
void enMKNCtrlEvent(EnLOCAL_DATA* dp)
{
	void* tmp;
	// Line 364, Address: 0x1539c0, Func Offset: 0
	// Func End, Address: 0x1539c8, Func Offset: 0x8
}

// 
// Start address: 0x1539d0
void enMKNCtrlHand()
{
	// Line 482, Address: 0x1539d0, Func Offset: 0
	// Func End, Address: 0x1539d8, Func Offset: 0x8
}

// 
// Start address: 0x1539e0
void enMKNCtrlMannequin(EnLOCAL_DATA* dp)
{
	EnANIME_RANGE pose[2];
	int t;
	// Line 486, Address: 0x1539e0, Func Offset: 0
	// Line 488, Address: 0x1539f8, Func Offset: 0x18
	// Line 492, Address: 0x153a14, Func Offset: 0x34
	// Line 493, Address: 0x153a24, Func Offset: 0x44
	// Line 494, Address: 0x153a54, Func Offset: 0x74
	// Line 495, Address: 0x153a60, Func Offset: 0x80
	// Line 496, Address: 0x153a6c, Func Offset: 0x8c
	// Line 501, Address: 0x153a74, Func Offset: 0x94
	// Line 503, Address: 0x153aac, Func Offset: 0xcc
	// Line 504, Address: 0x153ad0, Func Offset: 0xf0
	// Line 505, Address: 0x153af0, Func Offset: 0x110
	// Line 507, Address: 0x153b5c, Func Offset: 0x17c
	// Line 509, Address: 0x153b84, Func Offset: 0x1a4
	// Line 510, Address: 0x153b8c, Func Offset: 0x1ac
	// Line 511, Address: 0x153b98, Func Offset: 0x1b8
	// Line 513, Address: 0x153ba0, Func Offset: 0x1c0
	// Line 514, Address: 0x153bb0, Func Offset: 0x1d0
	// Line 515, Address: 0x153bc4, Func Offset: 0x1e4
	// Line 516, Address: 0x153bd0, Func Offset: 0x1f0
	// Line 518, Address: 0x153bdc, Func Offset: 0x1fc
	// Line 520, Address: 0x153be4, Func Offset: 0x204
	// Line 521, Address: 0x153bf8, Func Offset: 0x218
	// Line 523, Address: 0x153c1c, Func Offset: 0x23c
	// Line 524, Address: 0x153c28, Func Offset: 0x248
	// Line 525, Address: 0x153c34, Func Offset: 0x254
	// Line 526, Address: 0x153c48, Func Offset: 0x268
	// Line 527, Address: 0x153c54, Func Offset: 0x274
	// Line 528, Address: 0x153c80, Func Offset: 0x2a0
	// Line 530, Address: 0x153c8c, Func Offset: 0x2ac
	// Line 532, Address: 0x153c94, Func Offset: 0x2b4
	// Line 534, Address: 0x153cc4, Func Offset: 0x2e4
	// Line 535, Address: 0x153cdc, Func Offset: 0x2fc
	// Line 536, Address: 0x153cec, Func Offset: 0x30c
	// Line 537, Address: 0x153d1c, Func Offset: 0x33c
	// Line 538, Address: 0x153d28, Func Offset: 0x348
	// Line 540, Address: 0x153d3c, Func Offset: 0x35c
	// Line 543, Address: 0x153d44, Func Offset: 0x364
	// Line 544, Address: 0x153d54, Func Offset: 0x374
	// Line 545, Address: 0x153d60, Func Offset: 0x380
	// Line 547, Address: 0x153d80, Func Offset: 0x3a0
	// Line 548, Address: 0x153d8c, Func Offset: 0x3ac
	// Line 549, Address: 0x153d98, Func Offset: 0x3b8
	// Line 550, Address: 0x153dac, Func Offset: 0x3cc
	// Line 551, Address: 0x153dc0, Func Offset: 0x3e0
	// Line 552, Address: 0x153dd0, Func Offset: 0x3f0
	// Line 553, Address: 0x153dd8, Func Offset: 0x3f8
	// Line 555, Address: 0x153e08, Func Offset: 0x428
	// Line 556, Address: 0x153e18, Func Offset: 0x438
	// Line 558, Address: 0x153e20, Func Offset: 0x440
	// Func End, Address: 0x153e3c, Func Offset: 0x45c
}

// 
// Start address: 0x153e40
void enMKNCtrlMannequin2(EnLOCAL_DATA* dp)
{
	// Line 562, Address: 0x153e40, Func Offset: 0
	// Line 563, Address: 0x153e50, Func Offset: 0x10
	// Line 565, Address: 0x153e7c, Func Offset: 0x3c
	// Line 566, Address: 0x153e88, Func Offset: 0x48
	// Line 567, Address: 0x153eb0, Func Offset: 0x70
	// Line 568, Address: 0x153ebc, Func Offset: 0x7c
	// Line 569, Address: 0x153ec8, Func Offset: 0x88
	// Line 571, Address: 0x153ed0, Func Offset: 0x90
	// Line 572, Address: 0x153ee0, Func Offset: 0xa0
	// Line 573, Address: 0x153eec, Func Offset: 0xac
	// Line 574, Address: 0x153f1c, Func Offset: 0xdc
	// Line 575, Address: 0x153f28, Func Offset: 0xe8
	// Line 576, Address: 0x153f34, Func Offset: 0xf4
	// Line 577, Address: 0x153f40, Func Offset: 0x100
	// Line 578, Address: 0x153f80, Func Offset: 0x140
	// Line 580, Address: 0x153f98, Func Offset: 0x158
	// Line 581, Address: 0x153fa0, Func Offset: 0x160
	// Line 583, Address: 0x153fa8, Func Offset: 0x168
	// Line 586, Address: 0x153fb0, Func Offset: 0x170
	// Line 588, Address: 0x153fbc, Func Offset: 0x17c
	// Line 590, Address: 0x153fc4, Func Offset: 0x184
	// Line 591, Address: 0x153fd4, Func Offset: 0x194
	// Line 592, Address: 0x153fdc, Func Offset: 0x19c
	// Line 593, Address: 0x153fe8, Func Offset: 0x1a8
	// Line 597, Address: 0x153ff4, Func Offset: 0x1b4
	// Func End, Address: 0x154008, Func Offset: 0x1c8
}

// 
// Start address: 0x154010
void enMKNCtrlWaitFall(EnLOCAL_DATA* dp)
{
	float vec[4];
	float pos[4];
	float* ppos;
	float d;
	// Line 601, Address: 0x154010, Func Offset: 0
	// Line 605, Address: 0x154028, Func Offset: 0x18
	// Line 606, Address: 0x154038, Func Offset: 0x28
	// Line 607, Address: 0x154044, Func Offset: 0x34
	// Line 609, Address: 0x154050, Func Offset: 0x40
	// Line 611, Address: 0x154088, Func Offset: 0x78
	// Line 612, Address: 0x1540b4, Func Offset: 0xa4
	// Line 613, Address: 0x1540c0, Func Offset: 0xb0
	// Line 614, Address: 0x1540d0, Func Offset: 0xc0
	// Line 616, Address: 0x1540f8, Func Offset: 0xe8
	// Line 617, Address: 0x154114, Func Offset: 0x104
	// Line 618, Address: 0x154170, Func Offset: 0x160
	// Line 619, Address: 0x154190, Func Offset: 0x180
	// Line 620, Address: 0x154194, Func Offset: 0x184
	// Line 622, Address: 0x1541a0, Func Offset: 0x190
	// Line 624, Address: 0x1541a8, Func Offset: 0x198
	// Line 625, Address: 0x1541b8, Func Offset: 0x1a8
	// Line 626, Address: 0x1541dc, Func Offset: 0x1cc
	// Line 627, Address: 0x1541f4, Func Offset: 0x1e4
	// Line 628, Address: 0x154218, Func Offset: 0x208
	// Line 630, Address: 0x154230, Func Offset: 0x220
	// Line 631, Address: 0x154250, Func Offset: 0x240
	// Line 632, Address: 0x15428c, Func Offset: 0x27c
	// Line 633, Address: 0x154294, Func Offset: 0x284
	// Line 634, Address: 0x15429c, Func Offset: 0x28c
	// Line 636, Address: 0x1542c0, Func Offset: 0x2b0
	// Line 637, Address: 0x1542e8, Func Offset: 0x2d8
	// Line 638, Address: 0x1542ec, Func Offset: 0x2dc
	// Line 639, Address: 0x1542fc, Func Offset: 0x2ec
	// Line 640, Address: 0x154318, Func Offset: 0x308
	// Line 641, Address: 0x154358, Func Offset: 0x348
	// Line 642, Address: 0x154360, Func Offset: 0x350
	// Line 645, Address: 0x154378, Func Offset: 0x368
	// Line 647, Address: 0x1543a0, Func Offset: 0x390
	// Line 648, Address: 0x1543bc, Func Offset: 0x3ac
	// Line 650, Address: 0x1543c4, Func Offset: 0x3b4
	// Line 657, Address: 0x1543e0, Func Offset: 0x3d0
	// Line 658, Address: 0x1543e8, Func Offset: 0x3d8
	// Line 659, Address: 0x1543ec, Func Offset: 0x3dc
	// Line 660, Address: 0x1543fc, Func Offset: 0x3ec
	// Line 661, Address: 0x154410, Func Offset: 0x400
	// Line 662, Address: 0x154418, Func Offset: 0x408
	// Line 663, Address: 0x154424, Func Offset: 0x414
	// Line 664, Address: 0x154434, Func Offset: 0x424
	// Line 666, Address: 0x154440, Func Offset: 0x430
	// Line 668, Address: 0x154474, Func Offset: 0x464
	// Line 669, Address: 0x154480, Func Offset: 0x470
	// Line 671, Address: 0x15448c, Func Offset: 0x47c
	// Line 673, Address: 0x154494, Func Offset: 0x484
	// Line 674, Address: 0x1544a4, Func Offset: 0x494
	// Line 675, Address: 0x1544b8, Func Offset: 0x4a8
	// Line 676, Address: 0x1544c8, Func Offset: 0x4b8
	// Line 677, Address: 0x1544d4, Func Offset: 0x4c4
	// Line 678, Address: 0x1544e0, Func Offset: 0x4d0
	// Line 679, Address: 0x15450c, Func Offset: 0x4fc
	// Line 680, Address: 0x154520, Func Offset: 0x510
	// Line 681, Address: 0x15452c, Func Offset: 0x51c
	// Line 684, Address: 0x154538, Func Offset: 0x528
	// Line 686, Address: 0x154540, Func Offset: 0x530
	// Line 687, Address: 0x154550, Func Offset: 0x540
	// Line 688, Address: 0x15455c, Func Offset: 0x54c
	// Line 692, Address: 0x154568, Func Offset: 0x558
	// Func End, Address: 0x154584, Func Offset: 0x574
}

// 
// Start address: 0x154590
void enMKNCtrlWaitJump(EnLOCAL_DATA* dp)
{
	float pos[4];
	float* ppos;
	float d;
	// Line 696, Address: 0x154590, Func Offset: 0
	// Line 700, Address: 0x1545a8, Func Offset: 0x18
	// Line 701, Address: 0x1545b8, Func Offset: 0x28
	// Line 702, Address: 0x1545c4, Func Offset: 0x34
	// Line 704, Address: 0x1545d0, Func Offset: 0x40
	// Line 706, Address: 0x154608, Func Offset: 0x78
	// Line 707, Address: 0x154634, Func Offset: 0xa4
	// Line 708, Address: 0x154640, Func Offset: 0xb0
	// Line 709, Address: 0x154650, Func Offset: 0xc0
	// Line 710, Address: 0x154678, Func Offset: 0xe8
	// Line 711, Address: 0x154684, Func Offset: 0xf4
	// Line 713, Address: 0x154690, Func Offset: 0x100
	// Line 715, Address: 0x154698, Func Offset: 0x108
	// Line 716, Address: 0x1546a8, Func Offset: 0x118
	// Line 717, Address: 0x1546c4, Func Offset: 0x134
	// Line 718, Address: 0x1546c8, Func Offset: 0x138
	// Line 719, Address: 0x1546f0, Func Offset: 0x160
	// Line 720, Address: 0x154708, Func Offset: 0x178
	// Line 721, Address: 0x15470c, Func Offset: 0x17c
	// Line 723, Address: 0x154720, Func Offset: 0x190
	// Line 724, Address: 0x15473c, Func Offset: 0x1ac
	// Line 725, Address: 0x154798, Func Offset: 0x208
	// Line 728, Address: 0x1547b8, Func Offset: 0x228
	// Line 729, Address: 0x1547c0, Func Offset: 0x230
	// Line 730, Address: 0x1547d0, Func Offset: 0x240
	// Line 731, Address: 0x1547ec, Func Offset: 0x25c
	// Line 732, Address: 0x15482c, Func Offset: 0x29c
	// Line 733, Address: 0x154834, Func Offset: 0x2a4
	// Line 736, Address: 0x15484c, Func Offset: 0x2bc
	// Line 738, Address: 0x154874, Func Offset: 0x2e4
	// Line 739, Address: 0x154890, Func Offset: 0x300
	// Line 741, Address: 0x154898, Func Offset: 0x308
	// Line 748, Address: 0x1548b4, Func Offset: 0x324
	// Line 749, Address: 0x1548bc, Func Offset: 0x32c
	// Line 750, Address: 0x1548c0, Func Offset: 0x330
	// Line 751, Address: 0x1548d0, Func Offset: 0x340
	// Line 752, Address: 0x1548e4, Func Offset: 0x354
	// Line 753, Address: 0x1548ec, Func Offset: 0x35c
	// Line 754, Address: 0x1548f8, Func Offset: 0x368
	// Line 755, Address: 0x154908, Func Offset: 0x378
	// Line 758, Address: 0x154914, Func Offset: 0x384
	// Line 760, Address: 0x15491c, Func Offset: 0x38c
	// Line 761, Address: 0x15492c, Func Offset: 0x39c
	// Line 762, Address: 0x154940, Func Offset: 0x3b0
	// Line 763, Address: 0x154950, Func Offset: 0x3c0
	// Line 764, Address: 0x15495c, Func Offset: 0x3cc
	// Line 765, Address: 0x154968, Func Offset: 0x3d8
	// Line 766, Address: 0x154994, Func Offset: 0x404
	// Line 767, Address: 0x1549a8, Func Offset: 0x418
	// Line 768, Address: 0x1549b4, Func Offset: 0x424
	// Line 771, Address: 0x1549c0, Func Offset: 0x430
	// Line 773, Address: 0x1549c8, Func Offset: 0x438
	// Line 774, Address: 0x1549d8, Func Offset: 0x448
	// Line 775, Address: 0x1549e4, Func Offset: 0x454
	// Line 779, Address: 0x1549f0, Func Offset: 0x460
	// Func End, Address: 0x154a0c, Func Offset: 0x47c
}

// 
// Start address: 0x154a10
void enMKNCtrlWander(EnLOCAL_DATA* dp)
{
	float vec[4];
	int t;
	float r;
	float d;
	// Line 783, Address: 0x154a10, Func Offset: 0
	// Line 787, Address: 0x154a24, Func Offset: 0x14
	// Line 788, Address: 0x154a34, Func Offset: 0x24
	// Line 789, Address: 0x154a40, Func Offset: 0x30
	// Line 791, Address: 0x154a48, Func Offset: 0x38
	// Line 793, Address: 0x154a80, Func Offset: 0x70
	// Line 794, Address: 0x154a8c, Func Offset: 0x7c
	// Line 795, Address: 0x154a98, Func Offset: 0x88
	// Line 796, Address: 0x154aa4, Func Offset: 0x94
	// Line 797, Address: 0x154ab8, Func Offset: 0xa8
	// Line 798, Address: 0x154ad4, Func Offset: 0xc4
	// Line 799, Address: 0x154af4, Func Offset: 0xe4
	// Line 801, Address: 0x154b00, Func Offset: 0xf0
	// Line 802, Address: 0x154b2c, Func Offset: 0x11c
	// Line 804, Address: 0x154b5c, Func Offset: 0x14c
	// Line 805, Address: 0x154b64, Func Offset: 0x154
	// Line 806, Address: 0x154b6c, Func Offset: 0x15c
	// Line 807, Address: 0x154b7c, Func Offset: 0x16c
	// Line 808, Address: 0x154b84, Func Offset: 0x174
	// Line 809, Address: 0x154b8c, Func Offset: 0x17c
	// Line 811, Address: 0x154bf0, Func Offset: 0x1e0
	// Line 812, Address: 0x154c38, Func Offset: 0x228
	// Line 813, Address: 0x154c50, Func Offset: 0x240
	// Line 814, Address: 0x154c70, Func Offset: 0x260
	// Line 817, Address: 0x154cc4, Func Offset: 0x2b4
	// Line 819, Address: 0x154d20, Func Offset: 0x310
	// Line 820, Address: 0x154d38, Func Offset: 0x328
	// Line 822, Address: 0x154d58, Func Offset: 0x348
	// Line 823, Address: 0x154d80, Func Offset: 0x370
	// Line 824, Address: 0x154d90, Func Offset: 0x380
	// Line 827, Address: 0x154d98, Func Offset: 0x388
	// Line 829, Address: 0x154da0, Func Offset: 0x390
	// Line 831, Address: 0x154dec, Func Offset: 0x3dc
	// Line 832, Address: 0x154e14, Func Offset: 0x404
	// Line 833, Address: 0x154e34, Func Offset: 0x424
	// Line 834, Address: 0x154e3c, Func Offset: 0x42c
	// Line 835, Address: 0x154e44, Func Offset: 0x434
	// Line 836, Address: 0x154e60, Func Offset: 0x450
	// Line 837, Address: 0x154e68, Func Offset: 0x458
	// Line 838, Address: 0x154e74, Func Offset: 0x464
	// Line 839, Address: 0x154e7c, Func Offset: 0x46c
	// Line 840, Address: 0x154eac, Func Offset: 0x49c
	// Line 841, Address: 0x154ebc, Func Offset: 0x4ac
	// Line 843, Address: 0x154ec4, Func Offset: 0x4b4
	// Line 845, Address: 0x154ecc, Func Offset: 0x4bc
	// Line 846, Address: 0x154edc, Func Offset: 0x4cc
	// Line 847, Address: 0x154eec, Func Offset: 0x4dc
	// Line 848, Address: 0x154ef8, Func Offset: 0x4e8
	// Line 853, Address: 0x154f00, Func Offset: 0x4f0
	// Line 855, Address: 0x154f20, Func Offset: 0x510
	// Line 856, Address: 0x154f3c, Func Offset: 0x52c
	// Line 858, Address: 0x154f5c, Func Offset: 0x54c
	// Line 859, Address: 0x154f74, Func Offset: 0x564
	// Line 860, Address: 0x154f80, Func Offset: 0x570
	// Line 862, Address: 0x154f8c, Func Offset: 0x57c
	// Line 863, Address: 0x154f98, Func Offset: 0x588
	// Line 864, Address: 0x154fb0, Func Offset: 0x5a0
	// Line 865, Address: 0x154fbc, Func Offset: 0x5ac
	// Line 866, Address: 0x154fd0, Func Offset: 0x5c0
	// Line 867, Address: 0x154fdc, Func Offset: 0x5cc
	// Line 869, Address: 0x15500c, Func Offset: 0x5fc
	// Line 871, Address: 0x155018, Func Offset: 0x608
	// Line 872, Address: 0x155024, Func Offset: 0x614
	// Func End, Address: 0x15503c, Func Offset: 0x62c
}

// 
// Start address: 0x155040
void enMKNCtrlPrecaution(EnLOCAL_DATA* dp)
{
	int t;
	// Line 876, Address: 0x155040, Func Offset: 0
	// Line 878, Address: 0x155050, Func Offset: 0x10
	// Line 879, Address: 0x155060, Func Offset: 0x20
	// Line 880, Address: 0x15506c, Func Offset: 0x2c
	// Line 882, Address: 0x155074, Func Offset: 0x34
	// Line 883, Address: 0x155080, Func Offset: 0x40
	// Line 884, Address: 0x155090, Func Offset: 0x50
	// Line 886, Address: 0x15509c, Func Offset: 0x5c
	// Line 888, Address: 0x1550ac, Func Offset: 0x6c
	// Line 889, Address: 0x1550b8, Func Offset: 0x78
	// Line 891, Address: 0x1550c4, Func Offset: 0x84
	// Line 892, Address: 0x1550d0, Func Offset: 0x90
	// Line 894, Address: 0x155104, Func Offset: 0xc4
	// Line 895, Address: 0x155110, Func Offset: 0xd0
	// Line 897, Address: 0x155134, Func Offset: 0xf4
	// Line 898, Address: 0x155140, Func Offset: 0x100
	// Line 899, Address: 0x155148, Func Offset: 0x108
	// Line 903, Address: 0x155158, Func Offset: 0x118
	// Line 904, Address: 0x155170, Func Offset: 0x130
	// Line 905, Address: 0x15517c, Func Offset: 0x13c
	// Line 906, Address: 0x155188, Func Offset: 0x148
	// Func End, Address: 0x15519c, Func Offset: 0x15c
}

// 
// Start address: 0x1551a0
void enMKNCtrlChase(EnLOCAL_DATA* dp)
{
	int t;
	// Line 910, Address: 0x1551a0, Func Offset: 0
	// Line 912, Address: 0x1551b4, Func Offset: 0x14
	// Line 913, Address: 0x1551c4, Func Offset: 0x24
	// Line 914, Address: 0x1551d0, Func Offset: 0x30
	// Line 916, Address: 0x1551d8, Func Offset: 0x38
	// Line 917, Address: 0x1551e4, Func Offset: 0x44
	// Line 918, Address: 0x1551f4, Func Offset: 0x54
	// Line 921, Address: 0x155200, Func Offset: 0x60
	// Line 923, Address: 0x155224, Func Offset: 0x84
	// Line 924, Address: 0x15523c, Func Offset: 0x9c
	// Line 926, Address: 0x155248, Func Offset: 0xa8
	// Line 928, Address: 0x1552a0, Func Offset: 0x100
	// Line 930, Address: 0x1552ac, Func Offset: 0x10c
	// Line 931, Address: 0x1552b8, Func Offset: 0x118
	// Line 932, Address: 0x1552d0, Func Offset: 0x130
	// Line 933, Address: 0x1552dc, Func Offset: 0x13c
	// Line 936, Address: 0x15531c, Func Offset: 0x17c
	// Line 937, Address: 0x155340, Func Offset: 0x1a0
	// Line 938, Address: 0x15534c, Func Offset: 0x1ac
	// Line 939, Address: 0x155354, Func Offset: 0x1b4
	// Line 941, Address: 0x155360, Func Offset: 0x1c0
	// Line 943, Address: 0x155394, Func Offset: 0x1f4
	// Line 945, Address: 0x1553a0, Func Offset: 0x200
	// Line 946, Address: 0x1553ac, Func Offset: 0x20c
	// Func End, Address: 0x1553c4, Func Offset: 0x224
}

// 
// Start address: 0x1553d0
void enMKNCtrlAround(EnLOCAL_DATA* dp)
{
	float vec[4];
	int t;
	float a;
	// Line 950, Address: 0x1553d0, Func Offset: 0
	// Line 954, Address: 0x1553e4, Func Offset: 0x14
	// Line 955, Address: 0x1553f4, Func Offset: 0x24
	// Line 956, Address: 0x155400, Func Offset: 0x30
	// Line 958, Address: 0x155408, Func Offset: 0x38
	// Line 959, Address: 0x155414, Func Offset: 0x44
	// Line 960, Address: 0x155424, Func Offset: 0x54
	// Line 961, Address: 0x155430, Func Offset: 0x60
	// Line 964, Address: 0x15543c, Func Offset: 0x6c
	// Line 965, Address: 0x15544c, Func Offset: 0x7c
	// Line 966, Address: 0x15547c, Func Offset: 0xac
	// Line 967, Address: 0x155490, Func Offset: 0xc0
	// Line 968, Address: 0x155498, Func Offset: 0xc8
	// Line 971, Address: 0x1554ac, Func Offset: 0xdc
	// Line 972, Address: 0x1554c4, Func Offset: 0xf4
	// Line 973, Address: 0x1554e4, Func Offset: 0x114
	// Line 974, Address: 0x1554f8, Func Offset: 0x128
	// Line 975, Address: 0x15551c, Func Offset: 0x14c
	// Line 978, Address: 0x155528, Func Offset: 0x158
	// Line 979, Address: 0x155540, Func Offset: 0x170
	// Line 980, Address: 0x15554c, Func Offset: 0x17c
	// Line 982, Address: 0x155558, Func Offset: 0x188
	// Line 983, Address: 0x155564, Func Offset: 0x194
	// Line 984, Address: 0x15557c, Func Offset: 0x1ac
	// Line 985, Address: 0x155588, Func Offset: 0x1b8
	// Line 986, Address: 0x1555ac, Func Offset: 0x1dc
	// Line 987, Address: 0x1555b8, Func Offset: 0x1e8
	// Line 988, Address: 0x1555e0, Func Offset: 0x210
	// Line 989, Address: 0x1555ec, Func Offset: 0x21c
	// Line 990, Address: 0x1555f0, Func Offset: 0x220
	// Line 991, Address: 0x1555fc, Func Offset: 0x22c
	// Func End, Address: 0x155614, Func Offset: 0x244
}

// 
// Start address: 0x155620
void enMKNCtrlAttack(EnLOCAL_DATA* dp)
{
	// Line 995, Address: 0x155620, Func Offset: 0
	// Line 996, Address: 0x155634, Func Offset: 0x14
	// Line 997, Address: 0x155644, Func Offset: 0x24
	// Line 998, Address: 0x155650, Func Offset: 0x30
	// Line 1000, Address: 0x155658, Func Offset: 0x38
	// Line 1002, Address: 0x155684, Func Offset: 0x64
	// Line 1003, Address: 0x1556a8, Func Offset: 0x88
	// Line 1004, Address: 0x1556b8, Func Offset: 0x98
	// Line 1005, Address: 0x1556c8, Func Offset: 0xa8
	// Line 1006, Address: 0x1556f0, Func Offset: 0xd0
	// Line 1007, Address: 0x155700, Func Offset: 0xe0
	// Line 1008, Address: 0x155708, Func Offset: 0xe8
	// Line 1010, Address: 0x155718, Func Offset: 0xf8
	// Line 1011, Address: 0x155724, Func Offset: 0x104
	// Line 1012, Address: 0x15572c, Func Offset: 0x10c
	// Line 1013, Address: 0x15573c, Func Offset: 0x11c
	// Line 1014, Address: 0x155744, Func Offset: 0x124
	// Line 1016, Address: 0x15574c, Func Offset: 0x12c
	// Line 1017, Address: 0x155758, Func Offset: 0x138
	// Line 1018, Address: 0x155764, Func Offset: 0x144
	// Line 1021, Address: 0x15576c, Func Offset: 0x14c
	// Line 1023, Address: 0x15579c, Func Offset: 0x17c
	// Line 1024, Address: 0x1557ac, Func Offset: 0x18c
	// Line 1027, Address: 0x1557e8, Func Offset: 0x1c8
	// Line 1028, Address: 0x1557ec, Func Offset: 0x1cc
	// Line 1029, Address: 0x1557f4, Func Offset: 0x1d4
	// Line 1031, Address: 0x155800, Func Offset: 0x1e0
	// Line 1035, Address: 0x155808, Func Offset: 0x1e8
	// Line 1036, Address: 0x155814, Func Offset: 0x1f4
	// Line 1037, Address: 0x155824, Func Offset: 0x204
	// Line 1038, Address: 0x15583c, Func Offset: 0x21c
	// Line 1039, Address: 0x155840, Func Offset: 0x220
	// Line 1040, Address: 0x155848, Func Offset: 0x228
	// Line 1044, Address: 0x155854, Func Offset: 0x234
	// Line 1046, Address: 0x155858, Func Offset: 0x238
	// Line 1047, Address: 0x155870, Func Offset: 0x250
	// Line 1048, Address: 0x15587c, Func Offset: 0x25c
	// Func End, Address: 0x155894, Func Offset: 0x274
}

// 
// Start address: 0x1558a0
void enMKNCtrlDamage(EnLOCAL_DATA* dp)
{
	float d;
	// Line 1052, Address: 0x1558a0, Func Offset: 0
	// Line 1054, Address: 0x1558b4, Func Offset: 0x14
	// Line 1056, Address: 0x1558e0, Func Offset: 0x40
	// Line 1058, Address: 0x1558fc, Func Offset: 0x5c
	// Line 1059, Address: 0x15590c, Func Offset: 0x6c
	// Line 1060, Address: 0x155920, Func Offset: 0x80
	// Line 1061, Address: 0x15592c, Func Offset: 0x8c
	// Line 1063, Address: 0x155934, Func Offset: 0x94
	// Line 1065, Address: 0x1559a4, Func Offset: 0x104
	// Line 1066, Address: 0x1559c0, Func Offset: 0x120
	// Line 1067, Address: 0x1559c8, Func Offset: 0x128
	// Line 1069, Address: 0x1559e4, Func Offset: 0x144
	// Line 1070, Address: 0x155a00, Func Offset: 0x160
	// Line 1071, Address: 0x155a0c, Func Offset: 0x16c
	// Line 1073, Address: 0x155a34, Func Offset: 0x194
	// Line 1074, Address: 0x155a3c, Func Offset: 0x19c
	// Line 1075, Address: 0x155a44, Func Offset: 0x1a4
	// Line 1077, Address: 0x155a4c, Func Offset: 0x1ac
	// Line 1078, Address: 0x155a58, Func Offset: 0x1b8
	// Line 1080, Address: 0x155a60, Func Offset: 0x1c0
	// Line 1081, Address: 0x155a8c, Func Offset: 0x1ec
	// Line 1082, Address: 0x155a98, Func Offset: 0x1f8
	// Line 1083, Address: 0x155ab4, Func Offset: 0x214
	// Line 1085, Address: 0x155ab8, Func Offset: 0x218
	// Line 1087, Address: 0x155ac0, Func Offset: 0x220
	// Line 1088, Address: 0x155ad0, Func Offset: 0x230
	// Line 1090, Address: 0x155adc, Func Offset: 0x23c
	// Line 1091, Address: 0x155aec, Func Offset: 0x24c
	// Line 1092, Address: 0x155af8, Func Offset: 0x258
	// Line 1096, Address: 0x155b04, Func Offset: 0x264
	// Func End, Address: 0x155b1c, Func Offset: 0x27c
}

// 
// Start address: 0x155b20
void enMKNCtrlConfuse(EnLOCAL_DATA* dp)
{
	EnLOCAL_DATA* tp;
	// Line 1100, Address: 0x155b20, Func Offset: 0
	// Line 1102, Address: 0x155b34, Func Offset: 0x14
	// Line 1103, Address: 0x155b44, Func Offset: 0x24
	// Line 1104, Address: 0x155b58, Func Offset: 0x38
	// Line 1105, Address: 0x155b68, Func Offset: 0x48
	// Line 1107, Address: 0x155b6c, Func Offset: 0x4c
	// Line 1108, Address: 0x155b74, Func Offset: 0x54
	// Line 1109, Address: 0x155b80, Func Offset: 0x60
	// Line 1112, Address: 0x155b88, Func Offset: 0x68
	// Line 1113, Address: 0x155b94, Func Offset: 0x74
	// Line 1114, Address: 0x155ba0, Func Offset: 0x80
	// Line 1115, Address: 0x155bb0, Func Offset: 0x90
	// Line 1117, Address: 0x155bbc, Func Offset: 0x9c
	// Line 1118, Address: 0x155bcc, Func Offset: 0xac
	// Line 1119, Address: 0x155bd0, Func Offset: 0xb0
	// Line 1120, Address: 0x155bec, Func Offset: 0xcc
	// Line 1121, Address: 0x155c04, Func Offset: 0xe4
	// Line 1122, Address: 0x155c10, Func Offset: 0xf0
	// Line 1124, Address: 0x155c40, Func Offset: 0x120
	// Line 1125, Address: 0x155c50, Func Offset: 0x130
	// Line 1126, Address: 0x155c70, Func Offset: 0x150
	// Line 1127, Address: 0x155c7c, Func Offset: 0x15c
	// Line 1129, Address: 0x155cac, Func Offset: 0x18c
	// Line 1130, Address: 0x155cb4, Func Offset: 0x194
	// Line 1133, Address: 0x155cc0, Func Offset: 0x1a0
	// Line 1135, Address: 0x155cc8, Func Offset: 0x1a8
	// Line 1136, Address: 0x155ce4, Func Offset: 0x1c4
	// Line 1137, Address: 0x155cf4, Func Offset: 0x1d4
	// Line 1140, Address: 0x155d84, Func Offset: 0x264
	// Line 1141, Address: 0x155d88, Func Offset: 0x268
	// Line 1142, Address: 0x155d94, Func Offset: 0x274
	// Line 1143, Address: 0x155db4, Func Offset: 0x294
	// Line 1144, Address: 0x155dc8, Func Offset: 0x2a8
	// Line 1145, Address: 0x155dd0, Func Offset: 0x2b0
	// Line 1146, Address: 0x155dd8, Func Offset: 0x2b8
	// Line 1147, Address: 0x155de4, Func Offset: 0x2c4
	// Line 1149, Address: 0x155e14, Func Offset: 0x2f4
	// Line 1150, Address: 0x155e40, Func Offset: 0x320
	// Line 1151, Address: 0x155e4c, Func Offset: 0x32c
	// Line 1152, Address: 0x155e50, Func Offset: 0x330
	// Func End, Address: 0x155e68, Func Offset: 0x348
}

// 
// Start address: 0x155e70
void enMKNCtrlDown(EnLOCAL_DATA* dp)
{
	// Line 1156, Address: 0x155e70, Func Offset: 0
	// Line 1157, Address: 0x155e80, Func Offset: 0x10
	// Line 1159, Address: 0x155eac, Func Offset: 0x3c
	// Line 1160, Address: 0x155eb8, Func Offset: 0x48
	// Line 1161, Address: 0x155ec4, Func Offset: 0x54
	// Line 1162, Address: 0x155ed0, Func Offset: 0x60
	// Line 1163, Address: 0x155ef8, Func Offset: 0x88
	// Line 1164, Address: 0x155f0c, Func Offset: 0x9c
	// Line 1165, Address: 0x155f18, Func Offset: 0xa8
	// Line 1166, Address: 0x155f40, Func Offset: 0xd0
	// Line 1167, Address: 0x155f4c, Func Offset: 0xdc
	// Line 1168, Address: 0x155f58, Func Offset: 0xe8
	// Line 1169, Address: 0x155f60, Func Offset: 0xf0
	// Line 1170, Address: 0x155f6c, Func Offset: 0xfc
	// Line 1172, Address: 0x155f74, Func Offset: 0x104
	// Line 1174, Address: 0x155f7c, Func Offset: 0x10c
	// Line 1175, Address: 0x155f88, Func Offset: 0x118
	// Line 1178, Address: 0x155fa8, Func Offset: 0x138
	// Line 1180, Address: 0x155fc0, Func Offset: 0x150
	// Line 1181, Address: 0x155fcc, Func Offset: 0x15c
	// Line 1183, Address: 0x155fd4, Func Offset: 0x164
	// Line 1184, Address: 0x155fe4, Func Offset: 0x174
	// Line 1185, Address: 0x155ff8, Func Offset: 0x188
	// Line 1186, Address: 0x156004, Func Offset: 0x194
	// Line 1187, Address: 0x156010, Func Offset: 0x1a0
	// Line 1188, Address: 0x156024, Func Offset: 0x1b4
	// Line 1189, Address: 0x156030, Func Offset: 0x1c0
	// Line 1190, Address: 0x156058, Func Offset: 0x1e8
	// Line 1191, Address: 0x156064, Func Offset: 0x1f4
	// Line 1192, Address: 0x156070, Func Offset: 0x200
	// Line 1193, Address: 0x156078, Func Offset: 0x208
	// Line 1194, Address: 0x156084, Func Offset: 0x214
	// Line 1196, Address: 0x15608c, Func Offset: 0x21c
	// Line 1198, Address: 0x156094, Func Offset: 0x224
	// Line 1199, Address: 0x15609c, Func Offset: 0x22c
	// Line 1200, Address: 0x1560ac, Func Offset: 0x23c
	// Line 1201, Address: 0x1560dc, Func Offset: 0x26c
	// Line 1203, Address: 0x1560ec, Func Offset: 0x27c
	// Line 1204, Address: 0x1560fc, Func Offset: 0x28c
	// Line 1205, Address: 0x156108, Func Offset: 0x298
	// Line 1206, Address: 0x156114, Func Offset: 0x2a4
	// Line 1208, Address: 0x15611c, Func Offset: 0x2ac
	// Line 1209, Address: 0x15612c, Func Offset: 0x2bc
	// Line 1210, Address: 0x156144, Func Offset: 0x2d4
	// Line 1213, Address: 0x15614c, Func Offset: 0x2dc
	// Line 1214, Address: 0x156160, Func Offset: 0x2f0
	// Line 1215, Address: 0x156174, Func Offset: 0x304
	// Line 1216, Address: 0x156180, Func Offset: 0x310
	// Line 1217, Address: 0x15618c, Func Offset: 0x31c
	// Line 1218, Address: 0x156198, Func Offset: 0x328
	// Line 1219, Address: 0x1561c4, Func Offset: 0x354
	// Line 1220, Address: 0x1561cc, Func Offset: 0x35c
	// Line 1221, Address: 0x1561e4, Func Offset: 0x374
	// Line 1222, Address: 0x156200, Func Offset: 0x390
	// Line 1224, Address: 0x156230, Func Offset: 0x3c0
	// Line 1225, Address: 0x156244, Func Offset: 0x3d4
	// Line 1227, Address: 0x156258, Func Offset: 0x3e8
	// Line 1228, Address: 0x156260, Func Offset: 0x3f0
	// Line 1230, Address: 0x1562a0, Func Offset: 0x430
	// Line 1231, Address: 0x1562b4, Func Offset: 0x444
	// Line 1232, Address: 0x1562bc, Func Offset: 0x44c
	// Line 1236, Address: 0x1562d0, Func Offset: 0x460
	// Line 1238, Address: 0x1562d8, Func Offset: 0x468
	// Line 1239, Address: 0x1562e8, Func Offset: 0x478
	// Line 1240, Address: 0x1562f0, Func Offset: 0x480
	// Line 1242, Address: 0x1562fc, Func Offset: 0x48c
	// Line 1243, Address: 0x156310, Func Offset: 0x4a0
	// Line 1244, Address: 0x15631c, Func Offset: 0x4ac
	// Line 1245, Address: 0x156324, Func Offset: 0x4b4
	// Line 1248, Address: 0x156330, Func Offset: 0x4c0
	// Line 1250, Address: 0x156338, Func Offset: 0x4c8
	// Line 1251, Address: 0x156348, Func Offset: 0x4d8
	// Line 1252, Address: 0x156354, Func Offset: 0x4e4
	// Line 1253, Address: 0x156360, Func Offset: 0x4f0
	// Line 1254, Address: 0x156374, Func Offset: 0x504
	// Line 1255, Address: 0x156380, Func Offset: 0x510
	// Line 1256, Address: 0x1563a8, Func Offset: 0x538
	// Line 1257, Address: 0x1563b4, Func Offset: 0x544
	// Line 1258, Address: 0x1563c0, Func Offset: 0x550
	// Line 1259, Address: 0x1563c8, Func Offset: 0x558
	// Line 1260, Address: 0x1563d4, Func Offset: 0x564
	// Line 1262, Address: 0x1563dc, Func Offset: 0x56c
	// Line 1264, Address: 0x1563e4, Func Offset: 0x574
	// Line 1265, Address: 0x1563f8, Func Offset: 0x588
	// Line 1266, Address: 0x156404, Func Offset: 0x594
	// Line 1267, Address: 0x156410, Func Offset: 0x5a0
	// Line 1269, Address: 0x156418, Func Offset: 0x5a8
	// Line 1270, Address: 0x156428, Func Offset: 0x5b8
	// Line 1271, Address: 0x156460, Func Offset: 0x5f0
	// Line 1273, Address: 0x156470, Func Offset: 0x600
	// Line 1274, Address: 0x156480, Func Offset: 0x610
	// Line 1275, Address: 0x15648c, Func Offset: 0x61c
	// Line 1276, Address: 0x156498, Func Offset: 0x628
	// Line 1278, Address: 0x1564a0, Func Offset: 0x630
	// Line 1279, Address: 0x1564b0, Func Offset: 0x640
	// Line 1280, Address: 0x1564c0, Func Offset: 0x650
	// Line 1281, Address: 0x1564c8, Func Offset: 0x658
	// Line 1284, Address: 0x1564d0, Func Offset: 0x660
	// Line 1285, Address: 0x1564e4, Func Offset: 0x674
	// Line 1286, Address: 0x1564ec, Func Offset: 0x67c
	// Line 1288, Address: 0x1564f4, Func Offset: 0x684
	// Line 1289, Address: 0x156508, Func Offset: 0x698
	// Line 1290, Address: 0x15651c, Func Offset: 0x6ac
	// Line 1291, Address: 0x156528, Func Offset: 0x6b8
	// Line 1292, Address: 0x156534, Func Offset: 0x6c4
	// Line 1293, Address: 0x156540, Func Offset: 0x6d0
	// Line 1294, Address: 0x15656c, Func Offset: 0x6fc
	// Line 1296, Address: 0x156574, Func Offset: 0x704
	// Line 1298, Address: 0x15657c, Func Offset: 0x70c
	// Line 1299, Address: 0x15658c, Func Offset: 0x71c
	// Line 1300, Address: 0x156598, Func Offset: 0x728
	// Line 1301, Address: 0x1565a4, Func Offset: 0x734
	// Line 1302, Address: 0x1565dc, Func Offset: 0x76c
	// Line 1303, Address: 0x156614, Func Offset: 0x7a4
	// Line 1304, Address: 0x156620, Func Offset: 0x7b0
	// Line 1305, Address: 0x15662c, Func Offset: 0x7bc
	// Line 1307, Address: 0x156634, Func Offset: 0x7c4
	// Line 1308, Address: 0x156644, Func Offset: 0x7d4
	// Line 1309, Address: 0x156660, Func Offset: 0x7f0
	// Line 1310, Address: 0x15666c, Func Offset: 0x7fc
	// Line 1312, Address: 0x156678, Func Offset: 0x808
	// Line 1314, Address: 0x156680, Func Offset: 0x810
	// Line 1315, Address: 0x156690, Func Offset: 0x820
	// Line 1316, Address: 0x15669c, Func Offset: 0x82c
	// Line 1317, Address: 0x1566a8, Func Offset: 0x838
	// Line 1318, Address: 0x1566bc, Func Offset: 0x84c
	// Line 1319, Address: 0x1566c8, Func Offset: 0x858
	// Line 1320, Address: 0x1566f0, Func Offset: 0x880
	// Line 1321, Address: 0x1566fc, Func Offset: 0x88c
	// Line 1322, Address: 0x156708, Func Offset: 0x898
	// Line 1323, Address: 0x156710, Func Offset: 0x8a0
	// Line 1324, Address: 0x15671c, Func Offset: 0x8ac
	// Line 1326, Address: 0x156724, Func Offset: 0x8b4
	// Line 1328, Address: 0x15672c, Func Offset: 0x8bc
	// Line 1329, Address: 0x15673c, Func Offset: 0x8cc
	// Line 1330, Address: 0x156744, Func Offset: 0x8d4
	// Line 1331, Address: 0x156760, Func Offset: 0x8f0
	// Line 1332, Address: 0x156774, Func Offset: 0x904
	// Line 1333, Address: 0x156788, Func Offset: 0x918
	// Line 1334, Address: 0x156794, Func Offset: 0x924
	// Line 1335, Address: 0x1567a0, Func Offset: 0x930
	// Line 1336, Address: 0x1567ac, Func Offset: 0x93c
	// Line 1337, Address: 0x1567dc, Func Offset: 0x96c
	// Line 1341, Address: 0x1567e4, Func Offset: 0x974
	// Func End, Address: 0x1567f8, Func Offset: 0x988
}

// 
// Start address: 0x156800
int enMKNCanSeePlayer(EnLOCAL_DATA* dp)
{
	int wcd;
	float a;
	float dist;
	float* ppos;
	// Line 1346, Address: 0x156800, Func Offset: 0
	// Line 1347, Address: 0x156820, Func Offset: 0x20
	// Line 1349, Address: 0x15682c, Func Offset: 0x2c
	// Line 1350, Address: 0x156838, Func Offset: 0x38
	// Line 1351, Address: 0x156854, Func Offset: 0x54
	// Line 1352, Address: 0x15686c, Func Offset: 0x6c
	// Line 1354, Address: 0x1568a0, Func Offset: 0xa0
	// Line 1356, Address: 0x1568ac, Func Offset: 0xac
	// Line 1358, Address: 0x1568b8, Func Offset: 0xb8
	// Line 1359, Address: 0x1568bc, Func Offset: 0xbc
	// Line 1361, Address: 0x1568fc, Func Offset: 0xfc
	// Line 1364, Address: 0x156928, Func Offset: 0x128
	// Line 1368, Address: 0x156950, Func Offset: 0x150
	// Line 1371, Address: 0x156978, Func Offset: 0x178
	// Line 1374, Address: 0x1569a4, Func Offset: 0x1a4
	// Line 1375, Address: 0x1569bc, Func Offset: 0x1bc
	// Line 1376, Address: 0x1569d4, Func Offset: 0x1d4
	// Line 1378, Address: 0x156a28, Func Offset: 0x228
	// Line 1380, Address: 0x156a34, Func Offset: 0x234
	// Line 1381, Address: 0x156a54, Func Offset: 0x254
	// Line 1383, Address: 0x156a80, Func Offset: 0x280
	// Line 1384, Address: 0x156aac, Func Offset: 0x2ac
	// Line 1385, Address: 0x156ab0, Func Offset: 0x2b0
	// Func End, Address: 0x156ad4, Func Offset: 0x2d4
}

// 
// Start address: 0x156ae0
int enMKNCanSeePlayer2(EnLOCAL_DATA* dp)
{
	int wcd;
	float a2;
	float a1;
	float a;
	float dist;
	float* ppos;
	// Line 1390, Address: 0x156ae0, Func Offset: 0
	// Line 1391, Address: 0x156b04, Func Offset: 0x24
	// Line 1393, Address: 0x156b10, Func Offset: 0x30
	// Line 1394, Address: 0x156b1c, Func Offset: 0x3c
	// Line 1396, Address: 0x156b4c, Func Offset: 0x6c
	// Line 1398, Address: 0x156b58, Func Offset: 0x78
	// Line 1399, Address: 0x156b70, Func Offset: 0x90
	// Line 1400, Address: 0x156b88, Func Offset: 0xa8
	// Line 1402, Address: 0x156b94, Func Offset: 0xb4
	// Line 1403, Address: 0x156b98, Func Offset: 0xb8
	// Line 1404, Address: 0x156bb0, Func Offset: 0xd0
	// Line 1405, Address: 0x156bc8, Func Offset: 0xe8
	// Line 1406, Address: 0x156bd4, Func Offset: 0xf4
	// Line 1407, Address: 0x156bf4, Func Offset: 0x114
	// Line 1410, Address: 0x156c00, Func Offset: 0x120
	// Line 1411, Address: 0x156c10, Func Offset: 0x130
	// Line 1412, Address: 0x156c3c, Func Offset: 0x15c
	// Line 1413, Address: 0x156c7c, Func Offset: 0x19c
	// Line 1414, Address: 0x156ca4, Func Offset: 0x1c4
	// Line 1417, Address: 0x156cb0, Func Offset: 0x1d0
	// Line 1418, Address: 0x156cf0, Func Offset: 0x210
	// Line 1419, Address: 0x156d18, Func Offset: 0x238
	// Line 1423, Address: 0x156d24, Func Offset: 0x244
	// Line 1424, Address: 0x156d78, Func Offset: 0x298
	// Line 1425, Address: 0x156d84, Func Offset: 0x2a4
	// Line 1426, Address: 0x156d88, Func Offset: 0x2a8
	// Func End, Address: 0x156db0, Func Offset: 0x2d0
}

// 
// Start address: 0x156db0
void enMKNAnimeSet(EnLOCAL_DATA* dp, int anim)
{
	// Line 1430, Address: 0x156db0, Func Offset: 0
	// Line 1431, Address: 0x156dc8, Func Offset: 0x18
	// Line 1432, Address: 0x156dd4, Func Offset: 0x24
	// Line 1433, Address: 0x156ddc, Func Offset: 0x2c
	// Line 1434, Address: 0x156de4, Func Offset: 0x34
	// Line 1435, Address: 0x156df0, Func Offset: 0x40
	// Line 1437, Address: 0x156dfc, Func Offset: 0x4c
	// Line 1440, Address: 0x156e04, Func Offset: 0x54
	// Line 1441, Address: 0x156e44, Func Offset: 0x94
	// Line 1442, Address: 0x156e50, Func Offset: 0xa0
	// Line 1443, Address: 0x156e78, Func Offset: 0xc8
	// Line 1444, Address: 0x156e80, Func Offset: 0xd0
	// Line 1445, Address: 0x156ea4, Func Offset: 0xf4
	// Line 1446, Address: 0x156eb0, Func Offset: 0x100
	// Line 1449, Address: 0x156ebc, Func Offset: 0x10c
	// Func End, Address: 0x156ed4, Func Offset: 0x124
}

// 
// Start address: 0x156ee0
void enMKNAnimeReset(EnLOCAL_DATA* dp, int anim)
{
	// Line 1453, Address: 0x156ee0, Func Offset: 0
	// Line 1455, Address: 0x156ef8, Func Offset: 0x18
	// Line 1456, Address: 0x156f38, Func Offset: 0x58
	// Line 1457, Address: 0x156f44, Func Offset: 0x64
	// Line 1458, Address: 0x156f6c, Func Offset: 0x8c
	// Line 1459, Address: 0x156f74, Func Offset: 0x94
	// Line 1460, Address: 0x156f98, Func Offset: 0xb8
	// Line 1461, Address: 0x156fa4, Func Offset: 0xc4
	// Line 1464, Address: 0x156fb0, Func Offset: 0xd0
	// Func End, Address: 0x156fc8, Func Offset: 0xe8
}

// 
// Start address: 0x156fd0
void enMKNAnimeExec(EnLOCAL_DATA* dp)
{
	int of;
	// Line 1468, Address: 0x156fd0, Func Offset: 0
	// Line 1469, Address: 0x156fe4, Func Offset: 0x14
	// Line 1470, Address: 0x156fe8, Func Offset: 0x18
	// Line 1471, Address: 0x156ffc, Func Offset: 0x2c
	// Line 1472, Address: 0x157024, Func Offset: 0x54
	// Line 1474, Address: 0x157040, Func Offset: 0x70
	// Line 1475, Address: 0x15704c, Func Offset: 0x7c
	// Line 1477, Address: 0x15706c, Func Offset: 0x9c
	// Line 1478, Address: 0x157078, Func Offset: 0xa8
	// Line 1480, Address: 0x157098, Func Offset: 0xc8
	// Line 1481, Address: 0x1570a4, Func Offset: 0xd4
	// Line 1483, Address: 0x1570b8, Func Offset: 0xe8
	// Line 1485, Address: 0x1570c4, Func Offset: 0xf4
	// Line 1496, Address: 0x157160, Func Offset: 0x190
	// Line 1497, Address: 0x157174, Func Offset: 0x1a4
	// Line 1498, Address: 0x157190, Func Offset: 0x1c0
	// Line 1500, Address: 0x157198, Func Offset: 0x1c8
	// Line 1501, Address: 0x1571a8, Func Offset: 0x1d8
	// Line 1502, Address: 0x1571c4, Func Offset: 0x1f4
	// Line 1503, Address: 0x1571cc, Func Offset: 0x1fc
	// Line 1505, Address: 0x1571e8, Func Offset: 0x218
	// Line 1509, Address: 0x157208, Func Offset: 0x238
	// Func End, Address: 0x157220, Func Offset: 0x250
}

// 
// Start address: 0x157220
void enMKNAutoRecovery(EnLOCAL_DATA* dp)
{
	short recover_rate[5];
	// Line 1513, Address: 0x157220, Func Offset: 0
	// Line 1514, Address: 0x157230, Func Offset: 0x10
	// Line 1521, Address: 0x15724c, Func Offset: 0x2c
	// Line 1522, Address: 0x157278, Func Offset: 0x58
	// Func End, Address: 0x15728c, Func Offset: 0x6c
}

// 
// Start address: 0x157290
float enMKNGetWalkSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1526, Address: 0x157290, Func Offset: 0
	// Line 1527, Address: 0x1572a0, Func Offset: 0x10
	// Line 1534, Address: 0x1572bc, Func Offset: 0x2c
	// Line 1535, Address: 0x1572d0, Func Offset: 0x40
	// Line 1536, Address: 0x1572f8, Func Offset: 0x68
	// Line 1538, Address: 0x157318, Func Offset: 0x88
	// Func End, Address: 0x15732c, Func Offset: 0x9c
}

// 
// Start address: 0x157330
float enMKNGetFeelRange()
{
	float feel_range[5];
	// Line 1542, Address: 0x157330, Func Offset: 0
	// Line 1543, Address: 0x157338, Func Offset: 0x8
	// Line 1551, Address: 0x157354, Func Offset: 0x24
	// Line 1554, Address: 0x157390, Func Offset: 0x60
	// Func End, Address: 0x1573a0, Func Offset: 0x70
}

// 
// Start address: 0x1573a0
float enMKNGetAttackProbability()
{
	float attack_rate[5];
	// Line 1558, Address: 0x1573a0, Func Offset: 0
	// Line 1559, Address: 0x1573a8, Func Offset: 0x8
	// Line 1566, Address: 0x1573c4, Func Offset: 0x24
	// Line 1568, Address: 0x157400, Func Offset: 0x60
	// Func End, Address: 0x157410, Func Offset: 0x70
}

// 
// Start address: 0x157410
float enMKNGetRepertAttackProbability()
{
	float attack_rate[5];
	// Line 1572, Address: 0x157410, Func Offset: 0
	// Line 1573, Address: 0x157418, Func Offset: 0x8
	// Line 1580, Address: 0x157434, Func Offset: 0x24
	// Line 1581, Address: 0x157448, Func Offset: 0x38
	// Func End, Address: 0x157458, Func Offset: 0x48
}

// 
// Start address: 0x157460
float enMKNGetAttackSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1585, Address: 0x157460, Func Offset: 0
	// Line 1586, Address: 0x157470, Func Offset: 0x10
	// Line 1593, Address: 0x15748c, Func Offset: 0x2c
	// Line 1594, Address: 0x1574a0, Func Offset: 0x40
	// Line 1595, Address: 0x1574c8, Func Offset: 0x68
	// Line 1597, Address: 0x1574e8, Func Offset: 0x88
	// Func End, Address: 0x1574fc, Func Offset: 0x9c
}

// 
// Start address: 0x157500
float enMKNGetRotSpeed()
{
	float rot_rate[5];
	// Line 1601, Address: 0x157500, Func Offset: 0
	// Line 1602, Address: 0x157508, Func Offset: 0x8
	// Line 1609, Address: 0x157524, Func Offset: 0x24
	// Line 1610, Address: 0x157548, Func Offset: 0x48
	// Func End, Address: 0x157558, Func Offset: 0x58
}

// 
// Start address: 0x157560
void enMKNSetDownTime(EnLOCAL_DATA* dp)
{
	short down_time[5];
	// Line 1614, Address: 0x157560, Func Offset: 0
	// Line 1615, Address: 0x157570, Func Offset: 0x10
	// Line 1622, Address: 0x15758c, Func Offset: 0x2c
	// Line 1623, Address: 0x1575ac, Func Offset: 0x4c
	// Func End, Address: 0x1575c0, Func Offset: 0x60
}

// 
// Start address: 0x1575c0
void enMKNSetMoveCount(EnLOCAL_DATA* dp)
{
	int n;
	// Line 1627, Address: 0x1575c0, Func Offset: 0
	// Line 1629, Address: 0x1575d4, Func Offset: 0x14
	// Line 1630, Address: 0x157634, Func Offset: 0x74
	// Line 1631, Address: 0x157644, Func Offset: 0x84
	// Func End, Address: 0x15765c, Func Offset: 0x9c
}

// 
// Start address: 0x157660
void enMKNSetDc(EnLOCAL_DATA* dp)
{
	// Line 1635, Address: 0x157660, Func Offset: 0
	// Line 1636, Address: 0x157674, Func Offset: 0x14
	// Line 1637, Address: 0x157680, Func Offset: 0x20
	// Line 1638, Address: 0x157684, Func Offset: 0x24
	// Line 1639, Address: 0x1576b4, Func Offset: 0x54
	// Func End, Address: 0x1576cc, Func Offset: 0x6c
}

// 
// Start address: 0x1576d0
void enMKNSoundLife(EnLOCAL_DATA* dp)
{
	// Line 1643, Address: 0x1576d0, Func Offset: 0
	// Line 1644, Address: 0x1576e4, Func Offset: 0x14
	// Line 1645, Address: 0x1576f4, Func Offset: 0x24
	// Line 1646, Address: 0x1576fc, Func Offset: 0x2c
	// Line 1647, Address: 0x15774c, Func Offset: 0x7c
	// Line 1648, Address: 0x15778c, Func Offset: 0xbc
	// Line 1650, Address: 0x157790, Func Offset: 0xc0
	// Func End, Address: 0x1577a8, Func Offset: 0xd8
}

