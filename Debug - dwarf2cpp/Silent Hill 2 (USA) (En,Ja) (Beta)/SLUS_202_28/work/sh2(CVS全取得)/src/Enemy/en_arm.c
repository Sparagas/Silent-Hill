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

typedef void(*type_0)(EnLOCAL_DATA*);
typedef void(*type_4)(EnLOCAL_DATA*);
typedef void(*type_22)(SubCharacter*);
typedef void(*type_25)(SubCharacter*);

typedef float type_1[5];
typedef unsigned char type_2[4];
typedef unsigned char type_3[14];
typedef void(*type_5)(EnLOCAL_DATA*)[4];
typedef unsigned char type_6[97];
typedef float type_7[4];
typedef EnANIME_DATA type_8[14];
typedef EnLOCAL_DATA type_9[32];
typedef EnCOMMUNICATION type_10[8];
typedef EnFORBIDDENAREA type_11[2];
typedef EnSOUND_QUEUE type_12[8];
typedef unsigned char type_13[20];
typedef float type_14[4];
typedef unsigned char type_15[14];
typedef float type_16[4][4];
typedef shAttackInfo type_17[66];
typedef char type_18[3];
typedef float type_19[5];
typedef unsigned char type_20[69];
typedef float type_21[4];
typedef float type_23[4];
typedef float type_24[4][4];
typedef void(*type_26)(EnLOCAL_DATA*)[6];

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
EnANIME_DATA EnARMAnime[14];
EnLOCAL_WORK enLocalWork;

void enARMInitData(EnLOCAL_DATA* dp);
void enARMCtrlMain(EnLOCAL_DATA* dp);
void enARMCtrlAutomatic(EnLOCAL_DATA* dp);
void enARMCtrlSleep(EnLOCAL_DATA* dp);
void enARMCtrlGoPlayable(EnLOCAL_DATA* dp);
void enARMCtrlEvent(EnLOCAL_DATA* dp);
void enARMCtrlHand();
void enARMCtrlWander(EnLOCAL_DATA* dp);
void enARMCtrlTurn(EnLOCAL_DATA* dp);
void enARMCtrlDamage(EnLOCAL_DATA* dp);
void enARMCtrlDead(EnLOCAL_DATA* dp);
void enARMCheckNearPlayer(EnLOCAL_DATA* dp);
int enARMGetDamageMotion(EnLOCAL_DATA* dp);
int enARMCanSeePlayer(EnLOCAL_DATA* dp);
int enARMCheckNearOther(EnLOCAL_DATA* dp);
void enARMAnimeSet(EnLOCAL_DATA* dp, int anim);
void enARMAnimeReset(EnLOCAL_DATA* dp, int anim);
void enARMAnimeExec(EnLOCAL_DATA* dp);
void enARMSetHandPos(EnLOCAL_DATA* dp, int d);
void enARMGetHandPos(float* vec, EnLOCAL_DATA* dp, int d);
int enARMCheckFloor(EnLOCAL_DATA* dp, int d);
float enARMGetMoveSpeed(EnLOCAL_DATA* dp);
void enARMSoundSigns(EnLOCAL_DATA* dp);

// 
// Start address: 0x2396b0
void enARMInitData(EnLOCAL_DATA* dp)
{
	int mode;
	float vitarity[5];
	// Line 85, Address: 0x2396b0, Func Offset: 0
	// Line 86, Address: 0x2396c4, Func Offset: 0x14
	// Line 93, Address: 0x2396e0, Func Offset: 0x30
	// Line 95, Address: 0x2396ec, Func Offset: 0x3c
	// Line 96, Address: 0x2396f4, Func Offset: 0x44
	// Line 98, Address: 0x2396fc, Func Offset: 0x4c
	// Line 100, Address: 0x23970c, Func Offset: 0x5c
	// Line 101, Address: 0x239738, Func Offset: 0x88
	// Line 102, Address: 0x23974c, Func Offset: 0x9c
	// Line 103, Address: 0x23975c, Func Offset: 0xac
	// Line 105, Address: 0x239768, Func Offset: 0xb8
	// Line 106, Address: 0x239774, Func Offset: 0xc4
	// Line 107, Address: 0x239784, Func Offset: 0xd4
	// Line 108, Address: 0x23978c, Func Offset: 0xdc
	// Line 109, Address: 0x2397a0, Func Offset: 0xf0
	// Line 111, Address: 0x2397ac, Func Offset: 0xfc
	// Func End, Address: 0x2397c4, Func Offset: 0x114
}

// 
// Start address: 0x2397d0
void enARMCtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlARMFunc)(EnLOCAL_DATA*)[6];
	// Line 117, Address: 0x2397d0, Func Offset: 0
	// Line 118, Address: 0x2397d8, Func Offset: 0x8
	// Line 127, Address: 0x2397f4, Func Offset: 0x24
	// Line 128, Address: 0x23980c, Func Offset: 0x3c
	// Func End, Address: 0x23981c, Func Offset: 0x4c
}

// 
// Start address: 0x239820
void enARMCtrlAutomatic(EnLOCAL_DATA* dp)
{
	void(*enCtrlARMSubFunc)(EnLOCAL_DATA*)[4];
	// Line 132, Address: 0x239820, Func Offset: 0
	// Line 133, Address: 0x239830, Func Offset: 0x10
	// Line 140, Address: 0x239844, Func Offset: 0x24
	// Line 143, Address: 0x239850, Func Offset: 0x30
	// Line 146, Address: 0x23988c, Func Offset: 0x6c
	// Line 147, Address: 0x23989c, Func Offset: 0x7c
	// Line 148, Address: 0x2398a0, Func Offset: 0x80
	// Line 151, Address: 0x2398a8, Func Offset: 0x88
	// Line 152, Address: 0x2398b8, Func Offset: 0x98
	// Line 153, Address: 0x2398c0, Func Offset: 0xa0
	// Line 155, Address: 0x2398c8, Func Offset: 0xa8
	// Line 159, Address: 0x2398d0, Func Offset: 0xb0
	// Line 162, Address: 0x2398ec, Func Offset: 0xcc
	// Line 164, Address: 0x2398f8, Func Offset: 0xd8
	// Line 165, Address: 0x239904, Func Offset: 0xe4
	// Line 167, Address: 0x239910, Func Offset: 0xf0
	// Line 168, Address: 0x239920, Func Offset: 0x100
	// Line 170, Address: 0x23992c, Func Offset: 0x10c
	// Line 171, Address: 0x239940, Func Offset: 0x120
	// Line 173, Address: 0x23994c, Func Offset: 0x12c
	// Func End, Address: 0x239960, Func Offset: 0x140
}

// 
// Start address: 0x239960
void enARMCtrlSleep(EnLOCAL_DATA* dp)
{
	// Line 177, Address: 0x239960, Func Offset: 0
	// Line 178, Address: 0x239970, Func Offset: 0x10
	// Line 179, Address: 0x239980, Func Offset: 0x20
	// Line 180, Address: 0x23998c, Func Offset: 0x2c
	// Line 181, Address: 0x239994, Func Offset: 0x34
	// Line 183, Address: 0x23999c, Func Offset: 0x3c
	// Line 184, Address: 0x2399a4, Func Offset: 0x44
	// Func End, Address: 0x2399b8, Func Offset: 0x58
}

// 
// Start address: 0x2399c0
void enARMCtrlGoPlayable(EnLOCAL_DATA* dp)
{
	// Line 189, Address: 0x2399c0, Func Offset: 0
	// Line 190, Address: 0x2399c8, Func Offset: 0x8
	// Line 191, Address: 0x2399d0, Func Offset: 0x10
	// Line 192, Address: 0x2399d8, Func Offset: 0x18
	// Func End, Address: 0x2399e0, Func Offset: 0x20
}

// 
// Start address: 0x2399e0
void enARMCtrlEvent(EnLOCAL_DATA* dp)
{
	void* tmp;
	// Line 198, Address: 0x2399e0, Func Offset: 0
	// Func End, Address: 0x2399e8, Func Offset: 0x8
}

// 
// Start address: 0x2399f0
void enARMCtrlHand()
{
	// Line 272, Address: 0x2399f0, Func Offset: 0
	// Func End, Address: 0x2399f8, Func Offset: 0x8
}

// 
// Start address: 0x239a00
void enARMCtrlWander(EnLOCAL_DATA* dp)
{
	char s;
	float vec[4];
	// Line 276, Address: 0x239a00, Func Offset: 0
	// Line 279, Address: 0x239a14, Func Offset: 0x14
	// Line 280, Address: 0x239a24, Func Offset: 0x24
	// Line 281, Address: 0x239a30, Func Offset: 0x30
	// Line 283, Address: 0x239a38, Func Offset: 0x38
	// Line 284, Address: 0x239a44, Func Offset: 0x44
	// Line 285, Address: 0x239a58, Func Offset: 0x58
	// Line 287, Address: 0x239a60, Func Offset: 0x60
	// Line 288, Address: 0x239a6c, Func Offset: 0x6c
	// Line 289, Address: 0x239a7c, Func Offset: 0x7c
	// Line 290, Address: 0x239a90, Func Offset: 0x90
	// Line 291, Address: 0x239a9c, Func Offset: 0x9c
	// Line 292, Address: 0x239aac, Func Offset: 0xac
	// Line 293, Address: 0x239ab0, Func Offset: 0xb0
	// Line 295, Address: 0x239ab8, Func Offset: 0xb8
	// Line 297, Address: 0x239aec, Func Offset: 0xec
	// Line 298, Address: 0x239af0, Func Offset: 0xf0
	// Line 299, Address: 0x239af4, Func Offset: 0xf4
	// Line 301, Address: 0x239afc, Func Offset: 0xfc
	// Line 304, Address: 0x239b00, Func Offset: 0x100
	// Line 306, Address: 0x239b08, Func Offset: 0x108
	// Line 307, Address: 0x239b0c, Func Offset: 0x10c
	// Line 309, Address: 0x239b14, Func Offset: 0x114
	// Line 310, Address: 0x239b18, Func Offset: 0x118
	// Line 313, Address: 0x239b24, Func Offset: 0x124
	// Line 315, Address: 0x239b70, Func Offset: 0x170
	// Line 316, Address: 0x239b80, Func Offset: 0x180
	// Line 317, Address: 0x239b84, Func Offset: 0x184
	// Line 319, Address: 0x239b88, Func Offset: 0x188
	// Line 320, Address: 0x239b8c, Func Offset: 0x18c
	// Line 321, Address: 0x239b9c, Func Offset: 0x19c
	// Line 324, Address: 0x239bc4, Func Offset: 0x1c4
	// Line 325, Address: 0x239bc8, Func Offset: 0x1c8
	// Line 326, Address: 0x239bd0, Func Offset: 0x1d0
	// Line 329, Address: 0x239bd8, Func Offset: 0x1d8
	// Line 330, Address: 0x239bec, Func Offset: 0x1ec
	// Line 331, Address: 0x239c04, Func Offset: 0x204
	// Line 332, Address: 0x239c0c, Func Offset: 0x20c
	// Line 333, Address: 0x239c24, Func Offset: 0x224
	// Line 336, Address: 0x239c30, Func Offset: 0x230
	// Line 337, Address: 0x239c3c, Func Offset: 0x23c
	// Line 338, Address: 0x239c4c, Func Offset: 0x24c
	// Line 339, Address: 0x239c68, Func Offset: 0x268
	// Line 340, Address: 0x239c84, Func Offset: 0x284
	// Line 341, Address: 0x239c98, Func Offset: 0x298
	// Line 342, Address: 0x239ca0, Func Offset: 0x2a0
	// Line 343, Address: 0x239cac, Func Offset: 0x2ac
	// Line 346, Address: 0x239cdc, Func Offset: 0x2dc
	// Line 348, Address: 0x239d00, Func Offset: 0x300
	// Line 349, Address: 0x239d18, Func Offset: 0x318
	// Line 350, Address: 0x239d24, Func Offset: 0x324
	// Line 351, Address: 0x239d30, Func Offset: 0x330
	// Func End, Address: 0x239d48, Func Offset: 0x348
}

// 
// Start address: 0x239d50
void enARMCtrlTurn(EnLOCAL_DATA* dp)
{
	// Line 355, Address: 0x239d50, Func Offset: 0
	// Line 356, Address: 0x239d60, Func Offset: 0x10
	// Line 357, Address: 0x239d70, Func Offset: 0x20
	// Line 358, Address: 0x239d7c, Func Offset: 0x2c
	// Line 360, Address: 0x239d84, Func Offset: 0x34
	// Line 361, Address: 0x239d90, Func Offset: 0x40
	// Line 362, Address: 0x239da4, Func Offset: 0x54
	// Line 363, Address: 0x239dac, Func Offset: 0x5c
	// Line 364, Address: 0x239db8, Func Offset: 0x68
	// Line 367, Address: 0x239de0, Func Offset: 0x90
	// Line 368, Address: 0x239de4, Func Offset: 0x94
	// Line 369, Address: 0x239dec, Func Offset: 0x9c
	// Line 372, Address: 0x239df4, Func Offset: 0xa4
	// Line 373, Address: 0x239e0c, Func Offset: 0xbc
	// Line 374, Address: 0x239e24, Func Offset: 0xd4
	// Line 375, Address: 0x239e30, Func Offset: 0xe0
	// Line 376, Address: 0x239e38, Func Offset: 0xe8
	// Line 378, Address: 0x239e50, Func Offset: 0x100
	// Line 380, Address: 0x239e5c, Func Offset: 0x10c
	// Line 381, Address: 0x239e6c, Func Offset: 0x11c
	// Line 382, Address: 0x239e7c, Func Offset: 0x12c
	// Line 383, Address: 0x239e90, Func Offset: 0x140
	// Line 385, Address: 0x239ea0, Func Offset: 0x150
	// Line 386, Address: 0x239eac, Func Offset: 0x15c
	// Line 387, Address: 0x239ed0, Func Offset: 0x180
	// Line 388, Address: 0x239eec, Func Offset: 0x19c
	// Line 390, Address: 0x239ef4, Func Offset: 0x1a4
	// Line 391, Address: 0x239f24, Func Offset: 0x1d4
	// Line 392, Address: 0x239f30, Func Offset: 0x1e0
	// Line 393, Address: 0x239f3c, Func Offset: 0x1ec
	// Line 394, Address: 0x239f48, Func Offset: 0x1f8
	// Line 395, Address: 0x239f58, Func Offset: 0x208
	// Line 396, Address: 0x239f78, Func Offset: 0x228
	// Line 397, Address: 0x239f90, Func Offset: 0x240
	// Line 398, Address: 0x239fa8, Func Offset: 0x258
	// Line 399, Address: 0x239fb4, Func Offset: 0x264
	// Line 400, Address: 0x239fbc, Func Offset: 0x26c
	// Line 402, Address: 0x239fd4, Func Offset: 0x284
	// Line 403, Address: 0x239fdc, Func Offset: 0x28c
	// Line 405, Address: 0x239fe4, Func Offset: 0x294
	// Line 406, Address: 0x239fe8, Func Offset: 0x298
	// Func End, Address: 0x239ffc, Func Offset: 0x2ac
}

// 
// Start address: 0x23a000
void enARMCtrlDamage(EnLOCAL_DATA* dp)
{
	// Line 410, Address: 0x23a000, Func Offset: 0
	// Line 411, Address: 0x23a010, Func Offset: 0x10
	// Line 413, Address: 0x23a03c, Func Offset: 0x3c
	// Line 414, Address: 0x23a044, Func Offset: 0x44
	// Line 415, Address: 0x23a058, Func Offset: 0x58
	// Line 416, Address: 0x23a074, Func Offset: 0x74
	// Line 417, Address: 0x23a080, Func Offset: 0x80
	// Line 419, Address: 0x23a088, Func Offset: 0x88
	// Line 420, Address: 0x23a098, Func Offset: 0x98
	// Line 422, Address: 0x23a0a4, Func Offset: 0xa4
	// Line 423, Address: 0x23a0b4, Func Offset: 0xb4
	// Line 424, Address: 0x23a0c8, Func Offset: 0xc8
	// Line 427, Address: 0x23a0f0, Func Offset: 0xf0
	// Line 428, Address: 0x23a100, Func Offset: 0x100
	// Line 429, Address: 0x23a108, Func Offset: 0x108
	// Line 431, Address: 0x23a118, Func Offset: 0x118
	// Line 432, Address: 0x23a15c, Func Offset: 0x15c
	// Line 433, Address: 0x23a168, Func Offset: 0x168
	// Line 434, Address: 0x23a174, Func Offset: 0x174
	// Line 435, Address: 0x23a180, Func Offset: 0x180
	// Line 436, Address: 0x23a18c, Func Offset: 0x18c
	// Line 437, Address: 0x23a198, Func Offset: 0x198
	// Line 438, Address: 0x23a1a0, Func Offset: 0x1a0
	// Line 439, Address: 0x23a1a8, Func Offset: 0x1a8
	// Line 440, Address: 0x23a1b8, Func Offset: 0x1b8
	// Line 441, Address: 0x23a1bc, Func Offset: 0x1bc
	// Line 444, Address: 0x23a1c8, Func Offset: 0x1c8
	// Line 446, Address: 0x23a1d0, Func Offset: 0x1d0
	// Line 447, Address: 0x23a1e0, Func Offset: 0x1e0
	// Line 450, Address: 0x23a1ec, Func Offset: 0x1ec
	// Line 451, Address: 0x23a1f0, Func Offset: 0x1f0
	// Line 452, Address: 0x23a1fc, Func Offset: 0x1fc
	// Func End, Address: 0x23a210, Func Offset: 0x210
}

// 
// Start address: 0x23a210
void enARMCtrlDead(EnLOCAL_DATA* dp)
{
	// Line 457, Address: 0x23a210, Func Offset: 0
	// Line 465, Address: 0x23a220, Func Offset: 0x10
	// Line 466, Address: 0x23a22c, Func Offset: 0x1c
	// Line 467, Address: 0x23a238, Func Offset: 0x28
	// Line 469, Address: 0x23a244, Func Offset: 0x34
	// Line 471, Address: 0x23a258, Func Offset: 0x48
	// Line 473, Address: 0x23a264, Func Offset: 0x54
	// Func End, Address: 0x23a278, Func Offset: 0x68
}

// 
// Start address: 0x23a280
void enARMCheckNearPlayer(EnLOCAL_DATA* dp)
{
	// Line 477, Address: 0x23a280, Func Offset: 0
	// Line 478, Address: 0x23a288, Func Offset: 0x8
	// Line 479, Address: 0x23a2a0, Func Offset: 0x20
	// Func End, Address: 0x23a2b0, Func Offset: 0x30
}

// 
// Start address: 0x23a2b0
int enARMGetDamageMotion(EnLOCAL_DATA* dp)
{
	float a;
	int arm;
	int dd;
	int id;
	int m;
	// Line 485, Address: 0x23a2b0, Func Offset: 0
	// Line 489, Address: 0x23a2c0, Func Offset: 0x10
	// Line 490, Address: 0x23a2e4, Func Offset: 0x34
	// Line 491, Address: 0x23a314, Func Offset: 0x64
	// Line 493, Address: 0x23a318, Func Offset: 0x68
	// Line 498, Address: 0x23a344, Func Offset: 0x94
	// Line 499, Address: 0x23a360, Func Offset: 0xb0
	// Line 504, Address: 0x23a368, Func Offset: 0xb8
	// Line 505, Address: 0x23a36c, Func Offset: 0xbc
	// Line 507, Address: 0x23a374, Func Offset: 0xc4
	// Line 510, Address: 0x23a378, Func Offset: 0xc8
	// Line 511, Address: 0x23a37c, Func Offset: 0xcc
	// Line 514, Address: 0x23a3b4, Func Offset: 0x104
	// Line 515, Address: 0x23a3b8, Func Offset: 0x108
	// Line 518, Address: 0x23a3c0, Func Offset: 0x110
	// Line 519, Address: 0x23a3cc, Func Offset: 0x11c
	// Line 521, Address: 0x23a3d4, Func Offset: 0x124
	// Line 522, Address: 0x23a3d8, Func Offset: 0x128
	// Line 524, Address: 0x23a3e8, Func Offset: 0x138
	// Line 525, Address: 0x23a3ec, Func Offset: 0x13c
	// Func End, Address: 0x23a400, Func Offset: 0x150
}

// 
// Start address: 0x23a400
int enARMCanSeePlayer(EnLOCAL_DATA* dp)
{
	float vec[4];
	float a;
	// Line 530, Address: 0x23a400, Func Offset: 0
	// Line 531, Address: 0x23a410, Func Offset: 0x10
	// Line 532, Address: 0x23a42c, Func Offset: 0x2c
	// Line 533, Address: 0x23a44c, Func Offset: 0x4c
	// Line 534, Address: 0x23a4a0, Func Offset: 0xa0
	// Line 535, Address: 0x23a4ac, Func Offset: 0xac
	// Line 536, Address: 0x23a4cc, Func Offset: 0xcc
	// Line 538, Address: 0x23a500, Func Offset: 0x100
	// Line 539, Address: 0x23a51c, Func Offset: 0x11c
	// Line 540, Address: 0x23a538, Func Offset: 0x138
	// Line 543, Address: 0x23a558, Func Offset: 0x158
	// Line 544, Address: 0x23a55c, Func Offset: 0x15c
	// Func End, Address: 0x23a570, Func Offset: 0x170
}

// 
// Start address: 0x23a570
int enARMCheckNearOther(EnLOCAL_DATA* dp)
{
	float d;
	float* tpos;
	int i;
	EnLOCAL_DATA* tp;
	// Line 549, Address: 0x23a570, Func Offset: 0
	// Line 550, Address: 0x23a588, Func Offset: 0x18
	// Line 553, Address: 0x23a590, Func Offset: 0x20
	// Line 554, Address: 0x23a59c, Func Offset: 0x2c
	// Line 555, Address: 0x23a5b4, Func Offset: 0x44
	// Line 556, Address: 0x23a5bc, Func Offset: 0x4c
	// Line 557, Address: 0x23a610, Func Offset: 0xa0
	// Line 558, Address: 0x23a630, Func Offset: 0xc0
	// Line 559, Address: 0x23a658, Func Offset: 0xe8
	// Line 560, Address: 0x23a670, Func Offset: 0x100
	// Line 561, Address: 0x23a678, Func Offset: 0x108
	// Line 562, Address: 0x23a680, Func Offset: 0x110
	// Line 564, Address: 0x23a688, Func Offset: 0x118
	// Line 567, Address: 0x23a694, Func Offset: 0x124
	// Line 568, Address: 0x23a6ac, Func Offset: 0x13c
	// Line 569, Address: 0x23a6b0, Func Offset: 0x140
	// Func End, Address: 0x23a6cc, Func Offset: 0x15c
}

// 
// Start address: 0x23a6d0
void enARMAnimeSet(EnLOCAL_DATA* dp, int anim)
{
	// Line 573, Address: 0x23a6d0, Func Offset: 0
	// Line 574, Address: 0x23a6e8, Func Offset: 0x18
	// Line 575, Address: 0x23a6f4, Func Offset: 0x24
	// Line 576, Address: 0x23a6fc, Func Offset: 0x2c
	// Line 579, Address: 0x23a704, Func Offset: 0x34
	// Line 580, Address: 0x23a744, Func Offset: 0x74
	// Line 581, Address: 0x23a768, Func Offset: 0x98
	// Line 582, Address: 0x23a770, Func Offset: 0xa0
	// Func End, Address: 0x23a788, Func Offset: 0xb8
}

// 
// Start address: 0x23a790
void enARMAnimeReset(EnLOCAL_DATA* dp, int anim)
{
	// Line 586, Address: 0x23a790, Func Offset: 0
	// Line 588, Address: 0x23a7a8, Func Offset: 0x18
	// Line 589, Address: 0x23a7e8, Func Offset: 0x58
	// Line 590, Address: 0x23a80c, Func Offset: 0x7c
	// Line 591, Address: 0x23a814, Func Offset: 0x84
	// Func End, Address: 0x23a82c, Func Offset: 0x9c
}

// 
// Start address: 0x23a830
void enARMAnimeExec(EnLOCAL_DATA* dp)
{
	float pos[4];
	int of;
	// Line 595, Address: 0x23a830, Func Offset: 0
	// Line 597, Address: 0x23a840, Func Offset: 0x10
	// Line 598, Address: 0x23a854, Func Offset: 0x24
	// Line 600, Address: 0x23a88c, Func Offset: 0x5c
	// Line 601, Address: 0x23a894, Func Offset: 0x64
	// Line 603, Address: 0x23a8d8, Func Offset: 0xa8
	// Line 604, Address: 0x23a8dc, Func Offset: 0xac
	// Line 605, Address: 0x23a8f4, Func Offset: 0xc4
	// Line 606, Address: 0x23a910, Func Offset: 0xe0
	// Line 608, Address: 0x23a91c, Func Offset: 0xec
	// Line 610, Address: 0x23a938, Func Offset: 0x108
	// Line 611, Address: 0x23a954, Func Offset: 0x124
	// Line 613, Address: 0x23a95c, Func Offset: 0x12c
	// Line 619, Address: 0x23a978, Func Offset: 0x148
	// Line 620, Address: 0x23a998, Func Offset: 0x168
	// Func End, Address: 0x23a9ac, Func Offset: 0x17c
}

// 
// Start address: 0x23a9b0
void enARMSetHandPos(EnLOCAL_DATA* dp, int d)
{
	float vec[4];
	// Line 626, Address: 0x23a9b0, Func Offset: 0
	// Line 628, Address: 0x23a9c4, Func Offset: 0x14
	// Line 629, Address: 0x23a9d4, Func Offset: 0x24
	// Line 630, Address: 0x23a9f4, Func Offset: 0x44
	// Func End, Address: 0x23aa08, Func Offset: 0x58
}

// 
// Start address: 0x23aa10
void enARMGetHandPos(float* vec, EnLOCAL_DATA* dp, int d)
{
	float mat[4][4];
	// Line 637, Address: 0x23aa10, Func Offset: 0
	// Line 639, Address: 0x23aa28, Func Offset: 0x18
	// Line 640, Address: 0x23aa38, Func Offset: 0x28
	// Line 641, Address: 0x23aa3c, Func Offset: 0x2c
	// Line 642, Address: 0x23aa48, Func Offset: 0x38
	// Line 643, Address: 0x23aa74, Func Offset: 0x64
	// Line 644, Address: 0x23aa98, Func Offset: 0x88
	// Line 645, Address: 0x23aaac, Func Offset: 0x9c
	// Line 646, Address: 0x23aad8, Func Offset: 0xc8
	// Func End, Address: 0x23aaf0, Func Offset: 0xe0
}

// 
// Start address: 0x23aaf0
int enARMCheckFloor(EnLOCAL_DATA* dp, int d)
{
	float pos[4];
	// Line 653, Address: 0x23aaf0, Func Offset: 0
	// Line 655, Address: 0x23ab00, Func Offset: 0x10
	// Line 656, Address: 0x23ab10, Func Offset: 0x20
	// Line 657, Address: 0x23ab1c, Func Offset: 0x2c
	// Func End, Address: 0x23ab2c, Func Offset: 0x3c
}

// 
// Start address: 0x23ab30
float enARMGetMoveSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 661, Address: 0x23ab30, Func Offset: 0
	// Line 662, Address: 0x23ab40, Func Offset: 0x10
	// Line 669, Address: 0x23ab5c, Func Offset: 0x2c
	// Line 670, Address: 0x23ab70, Func Offset: 0x40
	// Line 671, Address: 0x23ab9c, Func Offset: 0x6c
	// Line 672, Address: 0x23abd0, Func Offset: 0xa0
	// Line 674, Address: 0x23abf0, Func Offset: 0xc0
	// Func End, Address: 0x23ac04, Func Offset: 0xd4
}

// 
// Start address: 0x23ac10
void enARMSoundSigns(EnLOCAL_DATA* dp)
{
	int signs;
	// Line 678, Address: 0x23ac10, Func Offset: 0
	// Line 680, Address: 0x23ac20, Func Offset: 0x10
	// Line 681, Address: 0x23ac4c, Func Offset: 0x3c
	// Line 683, Address: 0x23ac5c, Func Offset: 0x4c
	// Line 684, Address: 0x23ac6c, Func Offset: 0x5c
	// Line 685, Address: 0x23ac7c, Func Offset: 0x6c
	// Line 687, Address: 0x23ac80, Func Offset: 0x70
	// Line 690, Address: 0x23ac9c, Func Offset: 0x8c
	// Func End, Address: 0x23acb0, Func Offset: 0xa0
}

