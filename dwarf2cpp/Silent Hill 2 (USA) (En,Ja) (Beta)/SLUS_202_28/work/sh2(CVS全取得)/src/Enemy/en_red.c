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
typedef struct _anon2;
typedef union _anon3;
typedef struct EnMKN_DATA;
typedef struct _anon4;
typedef struct EnEDB_DATA;
typedef struct EnPAP_DATA;
typedef struct EnNIK_DATA;
typedef struct _AnimeInfo;

typedef void(*type_17)(EnLOCAL_DATA*);
typedef void(*type_26)(EnLOCAL_DATA*);
typedef void(*type_40)(SubCharacter*);
typedef void(*type_41)(SubCharacter*);

typedef unsigned char type_0[4];
typedef _AnimeInfo type_1[12];
typedef float type_2[5];
typedef unsigned char type_3[14];
typedef float type_4[5];
typedef float type_5[5];
typedef float type_6[4][6];
typedef unsigned char type_7[97];
typedef float type_8[4];
typedef float type_9[5];
typedef float type_10[5];
typedef EnLOCAL_DATA type_11[32];
typedef EnCOMMUNICATION type_12[8];
typedef EnFORBIDDENAREA type_13[2];
typedef _AnimeInfo type_14[7];
typedef EnSOUND_QUEUE type_15[8];
typedef EnANIME_DATA type_16[11];
typedef void(*type_18)(EnLOCAL_DATA*)[6];
typedef unsigned char type_19[20];
typedef unsigned int type_20[255];
typedef unsigned int type_21[32];
typedef unsigned char type_22[4];
typedef char type_23[4];
typedef char type_24[4];
typedef char type_25[4];
typedef void(*type_27)(EnLOCAL_DATA*)[9];
typedef char type_28[4];
typedef float type_29[4];
typedef unsigned char type_30[14];
typedef char type_31[4];
typedef float type_32[4][4];
typedef shAttackInfo type_33[66];
typedef char type_34[3];
typedef int type_35[5];
typedef float type_36[5];
typedef float type_37[4][3];
typedef unsigned char type_38[69];
typedef float type_39[4];

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
	_anon3 hobj;
};

struct _anon2
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
_AnimeInfo red_anim[12];
_AnimeInfo d_red_anim[7];
EnANIME_DATA EnREDAnime[11];
float ap_boss_point[4][3];
float ap_boss_end_point[4][6];
float hp_roof_pos[4];
_anon2 game_flag;
EnLOCAL_WORK enLocalWork;

void enREDInitData(EnLOCAL_DATA* dp);
void enREDCtrlMain(EnLOCAL_DATA* dp);
void enREDCtrlAutomatic(EnLOCAL_DATA* dp);
void enREDCtrlSleep(EnLOCAL_DATA* dp);
void enREDCtrlGoPlayable(EnLOCAL_DATA* dp);
void enREDCtrlEvent(EnLOCAL_DATA* dp);
void enREDCtrlHand();
void enREDCtrlWander(EnLOCAL_DATA* dp);
void enREDCtrlChase(EnLOCAL_DATA* dp);
void enREDCtrlBerserk(EnLOCAL_DATA* dp);
void enREDCtrlStair(EnLOCAL_DATA* dp);
void enREDCtrlAttack(EnLOCAL_DATA* dp);
void enREDCtrlSeize(EnLOCAL_DATA* dp);
void enREDCtrlConfuse(EnLOCAL_DATA* dp);
void enREDCtrlBattleEnd(EnLOCAL_DATA* dp);
void enREDCtrlOnlyWalk(EnLOCAL_DATA* dp);
void enREDCheckPlayerWeapon(EnLOCAL_DATA* dp);
int enREDSetDamage(EnLOCAL_DATA* dp);
int enREDCanSeePlayer(EnLOCAL_DATA* dp);
int enREDCanSeeCharacter(EnLOCAL_DATA* dp, SubCharacter* scp);
void enREDAnimeSet(EnLOCAL_DATA* dp, int anim);
void enREDAnimeReset(EnLOCAL_DATA* dp, int anim);
void enREDAnimeExec(EnLOCAL_DATA* dp);
float enREDGetSpeed(EnLOCAL_DATA* dp);
float enREDGetWalkSpeed(EnLOCAL_DATA* dp);
float enREDGetAttackSpeed(EnLOCAL_DATA* dp);
float enREDGetFeelRange();
float enREDGetRotSpeed();
void enREDSetSlowTime(EnLOCAL_DATA* dp);
void enREDSetMoveCount(EnLOCAL_DATA* dp);
void enREDSoundLife(EnLOCAL_DATA* dp);

// 
// Start address: 0x15d410
void enREDInitData(EnLOCAL_DATA* dp)
{
	float ep;
	float hp;
	int mode;
	float endurance[5];
	float vitarity[5];
	// Line 140, Address: 0x15d410, Func Offset: 0
	// Line 141, Address: 0x15d42c, Func Offset: 0x1c
	// Line 148, Address: 0x15d448, Func Offset: 0x38
	// Line 155, Address: 0x15d464, Func Offset: 0x54
	// Line 158, Address: 0x15d470, Func Offset: 0x60
	// Line 159, Address: 0x15d4a0, Func Offset: 0x90
	// Line 160, Address: 0x15d4a8, Func Offset: 0x98
	// Line 162, Address: 0x15d4b8, Func Offset: 0xa8
	// Line 164, Address: 0x15d4ec, Func Offset: 0xdc
	// Line 165, Address: 0x15d4f8, Func Offset: 0xe8
	// Line 166, Address: 0x15d500, Func Offset: 0xf0
	// Line 167, Address: 0x15d50c, Func Offset: 0xfc
	// Line 168, Address: 0x15d520, Func Offset: 0x110
	// Line 169, Address: 0x15d52c, Func Offset: 0x11c
	// Line 170, Address: 0x15d534, Func Offset: 0x124
	// Line 171, Address: 0x15d53c, Func Offset: 0x12c
	// Line 173, Address: 0x15d544, Func Offset: 0x134
	// Line 175, Address: 0x15d54c, Func Offset: 0x13c
	// Line 176, Address: 0x15d554, Func Offset: 0x144
	// Line 177, Address: 0x15d558, Func Offset: 0x148
	// Line 178, Address: 0x15d578, Func Offset: 0x168
	// Line 179, Address: 0x15d588, Func Offset: 0x178
	// Line 180, Address: 0x15d594, Func Offset: 0x184
	// Line 182, Address: 0x15d59c, Func Offset: 0x18c
	// Line 183, Address: 0x15d5a4, Func Offset: 0x194
	// Line 184, Address: 0x15d5ac, Func Offset: 0x19c
	// Line 185, Address: 0x15d5cc, Func Offset: 0x1bc
	// Line 187, Address: 0x15d5d4, Func Offset: 0x1c4
	// Line 188, Address: 0x15d5dc, Func Offset: 0x1cc
	// Line 189, Address: 0x15d5e0, Func Offset: 0x1d0
	// Line 190, Address: 0x15d5ec, Func Offset: 0x1dc
	// Line 191, Address: 0x15d5f8, Func Offset: 0x1e8
	// Line 192, Address: 0x15d604, Func Offset: 0x1f4
	// Line 195, Address: 0x15d60c, Func Offset: 0x1fc
	// Line 196, Address: 0x15d614, Func Offset: 0x204
	// Line 201, Address: 0x15d628, Func Offset: 0x218
	// Line 202, Address: 0x15d638, Func Offset: 0x228
	// Line 203, Address: 0x15d64c, Func Offset: 0x23c
	// Line 205, Address: 0x15d658, Func Offset: 0x248
	// Func End, Address: 0x15d678, Func Offset: 0x268
}

// 
// Start address: 0x15d680
void enREDCtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlREDFunc)(EnLOCAL_DATA*)[6];
	// Line 210, Address: 0x15d680, Func Offset: 0
	// Line 211, Address: 0x15d688, Func Offset: 0x8
	// Line 220, Address: 0x15d6a4, Func Offset: 0x24
	// Line 221, Address: 0x15d6bc, Func Offset: 0x3c
	// Func End, Address: 0x15d6cc, Func Offset: 0x4c
}

// 
// Start address: 0x15d6d0
void enREDCtrlAutomatic(EnLOCAL_DATA* dp)
{
	void(*enCtrlREDSubFunc)(EnLOCAL_DATA*)[9];
	// Line 225, Address: 0x15d6d0, Func Offset: 0
	// Line 226, Address: 0x15d6e0, Func Offset: 0x10
	// Line 239, Address: 0x15d704, Func Offset: 0x34
	// Line 242, Address: 0x15d710, Func Offset: 0x40
	// Line 244, Address: 0x15d71c, Func Offset: 0x4c
	// Line 246, Address: 0x15d738, Func Offset: 0x68
	// Line 247, Address: 0x15d74c, Func Offset: 0x7c
	// Line 248, Address: 0x15d784, Func Offset: 0xb4
	// Line 251, Address: 0x15d788, Func Offset: 0xb8
	// Line 252, Address: 0x15d7a8, Func Offset: 0xd8
	// Line 253, Address: 0x15d7c4, Func Offset: 0xf4
	// Line 254, Address: 0x15d7d0, Func Offset: 0x100
	// Line 256, Address: 0x15d7e4, Func Offset: 0x114
	// Line 258, Address: 0x15d7e8, Func Offset: 0x118
	// Line 260, Address: 0x15d7f4, Func Offset: 0x124
	// Line 261, Address: 0x15d800, Func Offset: 0x130
	// Line 263, Address: 0x15d824, Func Offset: 0x154
	// Line 265, Address: 0x15d830, Func Offset: 0x160
	// Func End, Address: 0x15d844, Func Offset: 0x174
}

// 
// Start address: 0x15d850
void enREDCtrlSleep(EnLOCAL_DATA* dp)
{
	// Line 269, Address: 0x15d850, Func Offset: 0
	// Line 270, Address: 0x15d860, Func Offset: 0x10
	// Line 271, Address: 0x15d870, Func Offset: 0x20
	// Line 272, Address: 0x15d87c, Func Offset: 0x2c
	// Line 273, Address: 0x15d884, Func Offset: 0x34
	// Line 275, Address: 0x15d888, Func Offset: 0x38
	// Func End, Address: 0x15d89c, Func Offset: 0x4c
}

// 
// Start address: 0x15d8a0
void enREDCtrlGoPlayable(EnLOCAL_DATA* dp)
{
	// Line 280, Address: 0x15d8a0, Func Offset: 0
	// Line 281, Address: 0x15d8a8, Func Offset: 0x8
	// Line 282, Address: 0x15d8b0, Func Offset: 0x10
	// Func End, Address: 0x15d8b8, Func Offset: 0x18
}

// 
// Start address: 0x15d8c0
void enREDCtrlEvent(EnLOCAL_DATA* dp)
{
	// Line 286, Address: 0x15d8c0, Func Offset: 0
	// Line 294, Address: 0x15d8d0, Func Offset: 0x10
	// Line 296, Address: 0x15d8f0, Func Offset: 0x30
	// Line 297, Address: 0x15d8fc, Func Offset: 0x3c
	// Line 298, Address: 0x15d908, Func Offset: 0x48
	// Line 300, Address: 0x15d914, Func Offset: 0x54
	// Line 302, Address: 0x15d91c, Func Offset: 0x5c
	// Line 303, Address: 0x15d928, Func Offset: 0x68
	// Line 304, Address: 0x15d930, Func Offset: 0x70
	// Line 305, Address: 0x15d948, Func Offset: 0x88
	// Line 307, Address: 0x15d954, Func Offset: 0x94
	// Line 308, Address: 0x15d970, Func Offset: 0xb0
	// Line 309, Address: 0x15d988, Func Offset: 0xc8
	// Line 310, Address: 0x15d994, Func Offset: 0xd4
	// Line 311, Address: 0x15d9e0, Func Offset: 0x120
	// Line 316, Address: 0x15d9f4, Func Offset: 0x134
	// Line 318, Address: 0x15da00, Func Offset: 0x140
	// Line 319, Address: 0x15da0c, Func Offset: 0x14c
	// Func End, Address: 0x15da20, Func Offset: 0x160
}

// 
// Start address: 0x15da20
void enREDCtrlHand()
{
	// Line 374, Address: 0x15da20, Func Offset: 0
	// Func End, Address: 0x15da28, Func Offset: 0x8
}

// 
// Start address: 0x15da30
void enREDCtrlWander(EnLOCAL_DATA* dp)
{
	int t;
	float vec[4];
	// Line 378, Address: 0x15da30, Func Offset: 0
	// Line 381, Address: 0x15da40, Func Offset: 0x10
	// Line 382, Address: 0x15da50, Func Offset: 0x20
	// Line 383, Address: 0x15da64, Func Offset: 0x34
	// Line 384, Address: 0x15da70, Func Offset: 0x40
	// Line 386, Address: 0x15da78, Func Offset: 0x48
	// Line 387, Address: 0x15da8c, Func Offset: 0x5c
	// Line 388, Address: 0x15da98, Func Offset: 0x68
	// Line 391, Address: 0x15daa0, Func Offset: 0x70
	// Line 392, Address: 0x15daac, Func Offset: 0x7c
	// Line 393, Address: 0x15dabc, Func Offset: 0x8c
	// Line 394, Address: 0x15dad0, Func Offset: 0xa0
	// Line 396, Address: 0x15dadc, Func Offset: 0xac
	// Line 398, Address: 0x15dae8, Func Offset: 0xb8
	// Line 399, Address: 0x15db08, Func Offset: 0xd8
	// Line 400, Address: 0x15db24, Func Offset: 0xf4
	// Line 401, Address: 0x15db38, Func Offset: 0x108
	// Line 402, Address: 0x15db50, Func Offset: 0x120
	// Line 404, Address: 0x15db5c, Func Offset: 0x12c
	// Line 405, Address: 0x15db68, Func Offset: 0x138
	// Line 406, Address: 0x15db74, Func Offset: 0x144
	// Line 407, Address: 0x15db80, Func Offset: 0x150
	// Line 408, Address: 0x15db94, Func Offset: 0x164
	// Line 409, Address: 0x15db9c, Func Offset: 0x16c
	// Line 410, Address: 0x15dba0, Func Offset: 0x170
	// Line 411, Address: 0x15dbac, Func Offset: 0x17c
	// Func End, Address: 0x15dbc0, Func Offset: 0x190
}

// 
// Start address: 0x15dbc0
void enREDCtrlChase(EnLOCAL_DATA* dp)
{
	int t;
	// Line 415, Address: 0x15dbc0, Func Offset: 0
	// Line 417, Address: 0x15dbd4, Func Offset: 0x14
	// Line 418, Address: 0x15dbe4, Func Offset: 0x24
	// Line 419, Address: 0x15dbf8, Func Offset: 0x38
	// Line 420, Address: 0x15dc04, Func Offset: 0x44
	// Line 422, Address: 0x15dc0c, Func Offset: 0x4c
	// Line 423, Address: 0x15dc20, Func Offset: 0x60
	// Line 424, Address: 0x15dc2c, Func Offset: 0x6c
	// Line 427, Address: 0x15dc34, Func Offset: 0x74
	// Line 428, Address: 0x15dc40, Func Offset: 0x80
	// Line 429, Address: 0x15dc50, Func Offset: 0x90
	// Line 430, Address: 0x15dc64, Func Offset: 0xa4
	// Line 432, Address: 0x15dc70, Func Offset: 0xb0
	// Line 433, Address: 0x15dc94, Func Offset: 0xd4
	// Line 434, Address: 0x15dcac, Func Offset: 0xec
	// Line 435, Address: 0x15dcb8, Func Offset: 0xf8
	// Line 438, Address: 0x15dd10, Func Offset: 0x150
	// Line 439, Address: 0x15dd1c, Func Offset: 0x15c
	// Line 440, Address: 0x15dd28, Func Offset: 0x168
	// Line 441, Address: 0x15dd30, Func Offset: 0x170
	// Line 442, Address: 0x15dd44, Func Offset: 0x184
	// Line 443, Address: 0x15dd50, Func Offset: 0x190
	// Line 444, Address: 0x15dd70, Func Offset: 0x1b0
	// Line 445, Address: 0x15dd78, Func Offset: 0x1b8
	// Line 447, Address: 0x15ddc0, Func Offset: 0x200
	// Line 448, Address: 0x15ddcc, Func Offset: 0x20c
	// Line 451, Address: 0x15de3c, Func Offset: 0x27c
	// Line 452, Address: 0x15de48, Func Offset: 0x288
	// Line 453, Address: 0x15de70, Func Offset: 0x2b0
	// Line 454, Address: 0x15de78, Func Offset: 0x2b8
	// Line 455, Address: 0x15de80, Func Offset: 0x2c0
	// Line 458, Address: 0x15de88, Func Offset: 0x2c8
	// Line 459, Address: 0x15de94, Func Offset: 0x2d4
	// Func End, Address: 0x15deac, Func Offset: 0x2ec
}

// 
// Start address: 0x15deb0
void enREDCtrlBerserk(EnLOCAL_DATA* dp)
{
	float* pos;
	SubCharacter* scp;
	int t;
	float d;
	float vec[4];
	// Line 463, Address: 0x15deb0, Func Offset: 0
	// Line 469, Address: 0x15dec4, Func Offset: 0x14
	// Line 470, Address: 0x15ded4, Func Offset: 0x24
	// Line 471, Address: 0x15dee8, Func Offset: 0x38
	// Line 472, Address: 0x15def4, Func Offset: 0x44
	// Line 474, Address: 0x15defc, Func Offset: 0x4c
	// Line 475, Address: 0x15df10, Func Offset: 0x60
	// Line 476, Address: 0x15df1c, Func Offset: 0x6c
	// Line 479, Address: 0x15df24, Func Offset: 0x74
	// Line 480, Address: 0x15df30, Func Offset: 0x80
	// Line 481, Address: 0x15df40, Func Offset: 0x90
	// Line 482, Address: 0x15df54, Func Offset: 0xa4
	// Line 484, Address: 0x15df60, Func Offset: 0xb0
	// Line 485, Address: 0x15df6c, Func Offset: 0xbc
	// Line 487, Address: 0x15df7c, Func Offset: 0xcc
	// Line 488, Address: 0x15df80, Func Offset: 0xd0
	// Line 489, Address: 0x15df9c, Func Offset: 0xec
	// Line 490, Address: 0x15dfb8, Func Offset: 0x108
	// Line 491, Address: 0x15dfd4, Func Offset: 0x124
	// Line 492, Address: 0x15dfdc, Func Offset: 0x12c
	// Line 493, Address: 0x15dfe4, Func Offset: 0x134
	// Line 494, Address: 0x15e004, Func Offset: 0x154
	// Line 496, Address: 0x15e014, Func Offset: 0x164
	// Line 497, Address: 0x15e02c, Func Offset: 0x17c
	// Line 498, Address: 0x15e044, Func Offset: 0x194
	// Line 500, Address: 0x15e050, Func Offset: 0x1a0
	// Line 501, Address: 0x15e060, Func Offset: 0x1b0
	// Line 502, Address: 0x15e06c, Func Offset: 0x1bc
	// Line 504, Address: 0x15e078, Func Offset: 0x1c8
	// Line 505, Address: 0x15e084, Func Offset: 0x1d4
	// Func End, Address: 0x15e09c, Func Offset: 0x1ec
}

// 
// Start address: 0x15e0a0
void enREDCtrlStair(EnLOCAL_DATA* dp)
{
	float* target;
	// Line 509, Address: 0x15e0a0, Func Offset: 0
	// Line 510, Address: 0x15e0b4, Func Offset: 0x14
	// Line 511, Address: 0x15e0b8, Func Offset: 0x18
	// Line 512, Address: 0x15e0c8, Func Offset: 0x28
	// Line 513, Address: 0x15e0dc, Func Offset: 0x3c
	// Line 514, Address: 0x15e0e8, Func Offset: 0x48
	// Line 516, Address: 0x15e0f0, Func Offset: 0x50
	// Line 517, Address: 0x15e104, Func Offset: 0x64
	// Line 518, Address: 0x15e110, Func Offset: 0x70
	// Line 521, Address: 0x15e118, Func Offset: 0x78
	// Line 522, Address: 0x15e148, Func Offset: 0xa8
	// Line 523, Address: 0x15e154, Func Offset: 0xb4
	// Line 525, Address: 0x15e15c, Func Offset: 0xbc
	// Line 527, Address: 0x15e188, Func Offset: 0xe8
	// Line 528, Address: 0x15e198, Func Offset: 0xf8
	// Line 529, Address: 0x15e1ac, Func Offset: 0x10c
	// Line 531, Address: 0x15e1b8, Func Offset: 0x118
	// Line 532, Address: 0x15e1c0, Func Offset: 0x120
	// Line 533, Address: 0x15e204, Func Offset: 0x164
	// Line 535, Address: 0x15e210, Func Offset: 0x170
	// Line 537, Address: 0x15e218, Func Offset: 0x178
	// Line 538, Address: 0x15e220, Func Offset: 0x180
	// Line 539, Address: 0x15e264, Func Offset: 0x1c4
	// Line 541, Address: 0x15e26c, Func Offset: 0x1cc
	// Line 543, Address: 0x15e274, Func Offset: 0x1d4
	// Line 544, Address: 0x15e284, Func Offset: 0x1e4
	// Line 546, Address: 0x15e28c, Func Offset: 0x1ec
	// Line 548, Address: 0x15e2bc, Func Offset: 0x21c
	// Line 549, Address: 0x15e2cc, Func Offset: 0x22c
	// Line 550, Address: 0x15e2dc, Func Offset: 0x23c
	// Line 551, Address: 0x15e2e8, Func Offset: 0x248
	// Line 552, Address: 0x15e2fc, Func Offset: 0x25c
	// Line 553, Address: 0x15e324, Func Offset: 0x284
	// Line 554, Address: 0x15e32c, Func Offset: 0x28c
	// Line 555, Address: 0x15e334, Func Offset: 0x294
	// Line 558, Address: 0x15e33c, Func Offset: 0x29c
	// Line 560, Address: 0x15e344, Func Offset: 0x2a4
	// Line 561, Address: 0x15e34c, Func Offset: 0x2ac
	// Line 562, Address: 0x15e390, Func Offset: 0x2f0
	// Line 564, Address: 0x15e398, Func Offset: 0x2f8
	// Line 566, Address: 0x15e3a0, Func Offset: 0x300
	// Line 567, Address: 0x15e3a8, Func Offset: 0x308
	// Line 568, Address: 0x15e3ec, Func Offset: 0x34c
	// Line 572, Address: 0x15e3f8, Func Offset: 0x358
	// Line 575, Address: 0x15e480, Func Offset: 0x3e0
	// Line 576, Address: 0x15e490, Func Offset: 0x3f0
	// Line 577, Address: 0x15e4a0, Func Offset: 0x400
	// Line 578, Address: 0x15e4a8, Func Offset: 0x408
	// Line 580, Address: 0x15e4b8, Func Offset: 0x418
	// Line 581, Address: 0x15e4c4, Func Offset: 0x424
	// Line 582, Address: 0x15e4d0, Func Offset: 0x430
	// Line 584, Address: 0x15e4d8, Func Offset: 0x438
	// Line 585, Address: 0x15e4e4, Func Offset: 0x444
	// Line 586, Address: 0x15e4fc, Func Offset: 0x45c
	// Line 587, Address: 0x15e514, Func Offset: 0x474
	// Line 588, Address: 0x15e520, Func Offset: 0x480
	// Line 589, Address: 0x15e550, Func Offset: 0x4b0
	// Line 590, Address: 0x15e55c, Func Offset: 0x4bc
	// Line 591, Address: 0x15e560, Func Offset: 0x4c0
	// Line 592, Address: 0x15e56c, Func Offset: 0x4cc
	// Func End, Address: 0x15e584, Func Offset: 0x4e4
}

// 
// Start address: 0x15e590
void enREDCtrlAttack(EnLOCAL_DATA* dp)
{
	int t;
	// Line 596, Address: 0x15e590, Func Offset: 0
	// Line 598, Address: 0x15e5a0, Func Offset: 0x10
	// Line 599, Address: 0x15e5b0, Func Offset: 0x20
	// Line 601, Address: 0x15e5bc, Func Offset: 0x2c
	// Line 603, Address: 0x15e5dc, Func Offset: 0x4c
	// Line 604, Address: 0x15e5e8, Func Offset: 0x58
	// Line 605, Address: 0x15e5f4, Func Offset: 0x64
	// Line 606, Address: 0x15e604, Func Offset: 0x74
	// Line 607, Address: 0x15e618, Func Offset: 0x88
	// Line 608, Address: 0x15e628, Func Offset: 0x98
	// Line 609, Address: 0x15e630, Func Offset: 0xa0
	// Line 611, Address: 0x15e63c, Func Offset: 0xac
	// Line 612, Address: 0x15e648, Func Offset: 0xb8
	// Line 613, Address: 0x15e654, Func Offset: 0xc4
	// Line 614, Address: 0x15e660, Func Offset: 0xd0
	// Line 615, Address: 0x15e66c, Func Offset: 0xdc
	// Line 618, Address: 0x15e674, Func Offset: 0xe4
	// Line 619, Address: 0x15e684, Func Offset: 0xf4
	// Line 622, Address: 0x15e69c, Func Offset: 0x10c
	// Line 623, Address: 0x15e6b0, Func Offset: 0x120
	// Line 624, Address: 0x15e6c0, Func Offset: 0x130
	// Line 625, Address: 0x15e6cc, Func Offset: 0x13c
	// Line 626, Address: 0x15e6f0, Func Offset: 0x160
	// Line 627, Address: 0x15e6fc, Func Offset: 0x16c
	// Line 629, Address: 0x15e704, Func Offset: 0x174
	// Line 630, Address: 0x15e71c, Func Offset: 0x18c
	// Line 631, Address: 0x15e720, Func Offset: 0x190
	// Line 632, Address: 0x15e738, Func Offset: 0x1a8
	// Line 633, Address: 0x15e744, Func Offset: 0x1b4
	// Line 634, Address: 0x15e758, Func Offset: 0x1c8
	// Line 636, Address: 0x15e780, Func Offset: 0x1f0
	// Line 637, Address: 0x15e784, Func Offset: 0x1f4
	// Line 638, Address: 0x15e78c, Func Offset: 0x1fc
	// Line 639, Address: 0x15e794, Func Offset: 0x204
	// Line 641, Address: 0x15e7a0, Func Offset: 0x210
	// Line 642, Address: 0x15e7a8, Func Offset: 0x218
	// Line 647, Address: 0x15e7b0, Func Offset: 0x220
	// Line 648, Address: 0x15e7bc, Func Offset: 0x22c
	// Func End, Address: 0x15e7d0, Func Offset: 0x240
}

// 
// Start address: 0x15e7d0
void enREDCtrlSeize(EnLOCAL_DATA* dp)
{
	int t;
	// Line 652, Address: 0x15e7d0, Func Offset: 0
	// Line 654, Address: 0x15e7e0, Func Offset: 0x10
	// Line 655, Address: 0x15e7f0, Func Offset: 0x20
	// Line 657, Address: 0x15e800, Func Offset: 0x30
	// Line 658, Address: 0x15e80c, Func Offset: 0x3c
	// Line 659, Address: 0x15e828, Func Offset: 0x58
	// Line 660, Address: 0x15e834, Func Offset: 0x64
	// Line 663, Address: 0x15e83c, Func Offset: 0x6c
	// Line 665, Address: 0x15e880, Func Offset: 0xb0
	// Line 666, Address: 0x15e88c, Func Offset: 0xbc
	// Line 667, Address: 0x15e89c, Func Offset: 0xcc
	// Line 668, Address: 0x15e8cc, Func Offset: 0xfc
	// Line 669, Address: 0x15e8d8, Func Offset: 0x108
	// Line 670, Address: 0x15e8e4, Func Offset: 0x114
	// Line 671, Address: 0x15e8f0, Func Offset: 0x120
	// Line 672, Address: 0x15e904, Func Offset: 0x134
	// Line 673, Address: 0x15e910, Func Offset: 0x140
	// Line 676, Address: 0x15e918, Func Offset: 0x148
	// Line 677, Address: 0x15e928, Func Offset: 0x158
	// Line 678, Address: 0x15e940, Func Offset: 0x170
	// Line 680, Address: 0x15e94c, Func Offset: 0x17c
	// Line 681, Address: 0x15e95c, Func Offset: 0x18c
	// Line 682, Address: 0x15e96c, Func Offset: 0x19c
	// Line 684, Address: 0x15e974, Func Offset: 0x1a4
	// Line 685, Address: 0x15e984, Func Offset: 0x1b4
	// Line 686, Address: 0x15e9b4, Func Offset: 0x1e4
	// Line 687, Address: 0x15e9c0, Func Offset: 0x1f0
	// Line 688, Address: 0x15e9cc, Func Offset: 0x1fc
	// Line 689, Address: 0x15e9dc, Func Offset: 0x20c
	// Line 690, Address: 0x15e9ec, Func Offset: 0x21c
	// Line 691, Address: 0x15e9f4, Func Offset: 0x224
	// Line 692, Address: 0x15e9fc, Func Offset: 0x22c
	// Line 693, Address: 0x15ea0c, Func Offset: 0x23c
	// Line 694, Address: 0x15ea18, Func Offset: 0x248
	// Line 696, Address: 0x15ea20, Func Offset: 0x250
	// Line 698, Address: 0x15ea34, Func Offset: 0x264
	// Line 701, Address: 0x15ea3c, Func Offset: 0x26c
	// Line 702, Address: 0x15ea4c, Func Offset: 0x27c
	// Line 703, Address: 0x15ea5c, Func Offset: 0x28c
	// Line 705, Address: 0x15ea68, Func Offset: 0x298
	// Line 707, Address: 0x15ea70, Func Offset: 0x2a0
	// Line 708, Address: 0x15ea80, Func Offset: 0x2b0
	// Line 709, Address: 0x15ea90, Func Offset: 0x2c0
	// Line 710, Address: 0x15eaa0, Func Offset: 0x2d0
	// Line 712, Address: 0x15eaac, Func Offset: 0x2dc
	// Line 714, Address: 0x15eab4, Func Offset: 0x2e4
	// Line 715, Address: 0x15eac4, Func Offset: 0x2f4
	// Line 716, Address: 0x15ead4, Func Offset: 0x304
	// Line 717, Address: 0x15eae4, Func Offset: 0x314
	// Line 718, Address: 0x15eaf0, Func Offset: 0x320
	// Line 719, Address: 0x15eb04, Func Offset: 0x334
	// Line 720, Address: 0x15eb08, Func Offset: 0x338
	// Line 721, Address: 0x15eb10, Func Offset: 0x340
	// Line 722, Address: 0x15eb18, Func Offset: 0x348
	// Line 727, Address: 0x15eb20, Func Offset: 0x350
	// Func End, Address: 0x15eb34, Func Offset: 0x364
}

// 
// Start address: 0x15eb40
void enREDCtrlConfuse(EnLOCAL_DATA* dp)
{
	EnLOCAL_DATA* tp;
	// Line 731, Address: 0x15eb40, Func Offset: 0
	// Line 733, Address: 0x15eb54, Func Offset: 0x14
	// Line 734, Address: 0x15eb64, Func Offset: 0x24
	// Line 735, Address: 0x15eb78, Func Offset: 0x38
	// Line 736, Address: 0x15eb88, Func Offset: 0x48
	// Line 738, Address: 0x15eb8c, Func Offset: 0x4c
	// Line 739, Address: 0x15eb94, Func Offset: 0x54
	// Line 740, Address: 0x15eba8, Func Offset: 0x68
	// Line 741, Address: 0x15ebb4, Func Offset: 0x74
	// Line 742, Address: 0x15ebbc, Func Offset: 0x7c
	// Line 743, Address: 0x15ebc4, Func Offset: 0x84
	// Line 744, Address: 0x15ebc8, Func Offset: 0x88
	// Line 747, Address: 0x15ebd0, Func Offset: 0x90
	// Line 748, Address: 0x15ebdc, Func Offset: 0x9c
	// Line 749, Address: 0x15ebe8, Func Offset: 0xa8
	// Line 750, Address: 0x15ebf8, Func Offset: 0xb8
	// Line 752, Address: 0x15ec04, Func Offset: 0xc4
	// Line 753, Address: 0x15ec14, Func Offset: 0xd4
	// Line 754, Address: 0x15ec18, Func Offset: 0xd8
	// Line 755, Address: 0x15ec34, Func Offset: 0xf4
	// Line 756, Address: 0x15ec4c, Func Offset: 0x10c
	// Line 757, Address: 0x15ec58, Func Offset: 0x118
	// Line 758, Address: 0x15ec68, Func Offset: 0x128
	// Line 759, Address: 0x15ec78, Func Offset: 0x138
	// Line 761, Address: 0x15ece0, Func Offset: 0x1a0
	// Line 762, Address: 0x15ecec, Func Offset: 0x1ac
	// Line 763, Address: 0x15ecfc, Func Offset: 0x1bc
	// Line 764, Address: 0x15ed04, Func Offset: 0x1c4
	// Line 765, Address: 0x15ed0c, Func Offset: 0x1cc
	// Line 767, Address: 0x15ed10, Func Offset: 0x1d0
	// Line 769, Address: 0x15ed18, Func Offset: 0x1d8
	// Line 770, Address: 0x15ed34, Func Offset: 0x1f4
	// Line 771, Address: 0x15ed44, Func Offset: 0x204
	// Line 774, Address: 0x15edd0, Func Offset: 0x290
	// Line 775, Address: 0x15edd4, Func Offset: 0x294
	// Line 776, Address: 0x15ede0, Func Offset: 0x2a0
	// Line 777, Address: 0x15edf0, Func Offset: 0x2b0
	// Line 778, Address: 0x15ee04, Func Offset: 0x2c4
	// Line 779, Address: 0x15ee0c, Func Offset: 0x2cc
	// Line 780, Address: 0x15ee14, Func Offset: 0x2d4
	// Line 781, Address: 0x15ee20, Func Offset: 0x2e0
	// Line 783, Address: 0x15ee50, Func Offset: 0x310
	// Line 784, Address: 0x15ee7c, Func Offset: 0x33c
	// Line 785, Address: 0x15ee84, Func Offset: 0x344
	// Line 786, Address: 0x15ee88, Func Offset: 0x348
	// Line 787, Address: 0x15ee94, Func Offset: 0x354
	// Func End, Address: 0x15eeac, Func Offset: 0x36c
}

// 
// Start address: 0x15eeb0
void enREDCtrlBattleEnd(EnLOCAL_DATA* dp)
{
	float* target;
	// Line 791, Address: 0x15eeb0, Func Offset: 0
	// Line 793, Address: 0x15eec4, Func Offset: 0x14
	// Line 794, Address: 0x15eed4, Func Offset: 0x24
	// Line 796, Address: 0x15eee0, Func Offset: 0x30
	// Line 798, Address: 0x15ef0c, Func Offset: 0x5c
	// Line 799, Address: 0x15ef1c, Func Offset: 0x6c
	// Line 800, Address: 0x15ef30, Func Offset: 0x80
	// Line 801, Address: 0x15ef48, Func Offset: 0x98
	// Line 802, Address: 0x15ef58, Func Offset: 0xa8
	// Line 803, Address: 0x15ef64, Func Offset: 0xb4
	// Line 805, Address: 0x15ef6c, Func Offset: 0xbc
	// Line 806, Address: 0x15ef84, Func Offset: 0xd4
	// Line 807, Address: 0x15efcc, Func Offset: 0x11c
	// Line 808, Address: 0x15efdc, Func Offset: 0x12c
	// Line 809, Address: 0x15efe8, Func Offset: 0x138
	// Line 810, Address: 0x15eff0, Func Offset: 0x140
	// Line 811, Address: 0x15f03c, Func Offset: 0x18c
	// Line 812, Address: 0x15f054, Func Offset: 0x1a4
	// Line 813, Address: 0x15f05c, Func Offset: 0x1ac
	// Line 814, Address: 0x15f084, Func Offset: 0x1d4
	// Line 815, Address: 0x15f08c, Func Offset: 0x1dc
	// Line 816, Address: 0x15f094, Func Offset: 0x1e4
	// Line 817, Address: 0x15f09c, Func Offset: 0x1ec
	// Line 820, Address: 0x15f0a8, Func Offset: 0x1f8
	// Line 822, Address: 0x15f0b0, Func Offset: 0x200
	// Line 823, Address: 0x15f0bc, Func Offset: 0x20c
	// Line 824, Address: 0x15f0d4, Func Offset: 0x224
	// Line 825, Address: 0x15f0e4, Func Offset: 0x234
	// Line 826, Address: 0x15f0f4, Func Offset: 0x244
	// Line 827, Address: 0x15f13c, Func Offset: 0x28c
	// Line 828, Address: 0x15f14c, Func Offset: 0x29c
	// Line 829, Address: 0x15f158, Func Offset: 0x2a8
	// Line 830, Address: 0x15f160, Func Offset: 0x2b0
	// Line 831, Address: 0x15f168, Func Offset: 0x2b8
	// Line 832, Address: 0x15f178, Func Offset: 0x2c8
	// Line 835, Address: 0x15f180, Func Offset: 0x2d0
	// Line 837, Address: 0x15f188, Func Offset: 0x2d8
	// Line 838, Address: 0x15f194, Func Offset: 0x2e4
	// Line 839, Address: 0x15f1ac, Func Offset: 0x2fc
	// Line 840, Address: 0x15f1bc, Func Offset: 0x30c
	// Line 841, Address: 0x15f1cc, Func Offset: 0x31c
	// Line 842, Address: 0x15f214, Func Offset: 0x364
	// Line 843, Address: 0x15f224, Func Offset: 0x374
	// Line 844, Address: 0x15f230, Func Offset: 0x380
	// Line 845, Address: 0x15f238, Func Offset: 0x388
	// Line 846, Address: 0x15f248, Func Offset: 0x398
	// Line 849, Address: 0x15f250, Func Offset: 0x3a0
	// Line 856, Address: 0x15f258, Func Offset: 0x3a8
	// Line 857, Address: 0x15f264, Func Offset: 0x3b4
	// Line 858, Address: 0x15f27c, Func Offset: 0x3cc
	// Line 859, Address: 0x15f294, Func Offset: 0x3e4
	// Line 860, Address: 0x15f2ac, Func Offset: 0x3fc
	// Line 861, Address: 0x15f2b8, Func Offset: 0x408
	// Line 862, Address: 0x15f2c8, Func Offset: 0x418
	// Line 864, Address: 0x15f2d0, Func Offset: 0x420
	// Line 865, Address: 0x15f314, Func Offset: 0x464
	// Line 866, Address: 0x15f324, Func Offset: 0x474
	// Line 867, Address: 0x15f340, Func Offset: 0x490
	// Line 869, Address: 0x15f34c, Func Offset: 0x49c
	// Line 870, Address: 0x15f35c, Func Offset: 0x4ac
	// Line 872, Address: 0x15f368, Func Offset: 0x4b8
	// Line 873, Address: 0x15f370, Func Offset: 0x4c0
	// Line 878, Address: 0x15f388, Func Offset: 0x4d8
	// Func End, Address: 0x15f3a0, Func Offset: 0x4f0
}

// 
// Start address: 0x15f3a0
void enREDCtrlOnlyWalk(EnLOCAL_DATA* dp)
{
	// Line 882, Address: 0x15f3a0, Func Offset: 0
	// Line 883, Address: 0x15f3b0, Func Offset: 0x10
	// Line 884, Address: 0x15f3bc, Func Offset: 0x1c
	// Line 885, Address: 0x15f3c8, Func Offset: 0x28
	// Line 887, Address: 0x15f3d4, Func Offset: 0x34
	// Func End, Address: 0x15f3e8, Func Offset: 0x48
}

// 
// Start address: 0x15f3f0
void enREDCheckPlayerWeapon(EnLOCAL_DATA* dp)
{
	// Line 891, Address: 0x15f3f0, Func Offset: 0
	// Line 892, Address: 0x15f400, Func Offset: 0x10
	// Line 893, Address: 0x15f410, Func Offset: 0x20
	// Line 898, Address: 0x15f44c, Func Offset: 0x5c
	// Line 899, Address: 0x15f458, Func Offset: 0x68
	// Line 901, Address: 0x15f460, Func Offset: 0x70
	// Line 904, Address: 0x15f46c, Func Offset: 0x7c
	// Func End, Address: 0x15f480, Func Offset: 0x90
}

// 
// Start address: 0x15f480
int enREDSetDamage(EnLOCAL_DATA* dp)
{
	// Line 909, Address: 0x15f480, Func Offset: 0
	// Line 910, Address: 0x15f490, Func Offset: 0x10
	// Line 911, Address: 0x15f498, Func Offset: 0x18
	// Line 912, Address: 0x15f4a8, Func Offset: 0x28
	// Line 913, Address: 0x15f4d8, Func Offset: 0x58
	// Line 914, Address: 0x15f4e0, Func Offset: 0x60
	// Line 915, Address: 0x15f4e8, Func Offset: 0x68
	// Line 916, Address: 0x15f4f4, Func Offset: 0x74
	// Line 917, Address: 0x15f508, Func Offset: 0x88
	// Line 920, Address: 0x15f514, Func Offset: 0x94
	// Line 921, Address: 0x15f518, Func Offset: 0x98
	// Func End, Address: 0x15f52c, Func Offset: 0xac
}

// 
// Start address: 0x15f530
int enREDCanSeePlayer(EnLOCAL_DATA* dp)
{
	int wcd;
	float a1;
	float a;
	float dist;
	float* ppos;
	// Line 926, Address: 0x15f530, Func Offset: 0
	// Line 927, Address: 0x15f54c, Func Offset: 0x1c
	// Line 929, Address: 0x15f558, Func Offset: 0x28
	// Line 930, Address: 0x15f564, Func Offset: 0x34
	// Line 931, Address: 0x15f580, Func Offset: 0x50
	// Line 932, Address: 0x15f598, Func Offset: 0x68
	// Line 933, Address: 0x15f5b8, Func Offset: 0x88
	// Line 935, Address: 0x15f5c4, Func Offset: 0x94
	// Line 937, Address: 0x15f5d0, Func Offset: 0xa0
	// Line 938, Address: 0x15f5f8, Func Offset: 0xc8
	// Line 939, Address: 0x15f618, Func Offset: 0xe8
	// Line 940, Address: 0x15f638, Func Offset: 0x108
	// Line 942, Address: 0x15f65c, Func Offset: 0x12c
	// Line 945, Address: 0x15f664, Func Offset: 0x134
	// Line 946, Address: 0x15f690, Func Offset: 0x160
	// Line 947, Address: 0x15f6a0, Func Offset: 0x170
	// Line 948, Address: 0x15f6b8, Func Offset: 0x188
	// Line 949, Address: 0x15f6bc, Func Offset: 0x18c
	// Line 950, Address: 0x15f708, Func Offset: 0x1d8
	// Line 951, Address: 0x15f714, Func Offset: 0x1e4
	// Line 952, Address: 0x15f764, Func Offset: 0x234
	// Line 953, Address: 0x15f770, Func Offset: 0x240
	// Line 954, Address: 0x15f7b8, Func Offset: 0x288
	// Line 955, Address: 0x15f83c, Func Offset: 0x30c
	// Line 956, Address: 0x15f848, Func Offset: 0x318
	// Line 957, Address: 0x15f868, Func Offset: 0x338
	// Line 958, Address: 0x15f86c, Func Offset: 0x33c
	// Func End, Address: 0x15f88c, Func Offset: 0x35c
}

// 
// Start address: 0x15f890
int enREDCanSeeCharacter(EnLOCAL_DATA* dp, SubCharacter* scp)
{
	EnFORBIDDENAREA* fa;
	int i;
	int wcd;
	float a1;
	float a;
	float dist;
	float* ppos;
	// Line 963, Address: 0x15f890, Func Offset: 0
	// Line 964, Address: 0x15f8a8, Func Offset: 0x18
	// Line 966, Address: 0x15f8ac, Func Offset: 0x1c
	// Line 967, Address: 0x15f8b4, Func Offset: 0x24
	// Line 968, Address: 0x15f8d0, Func Offset: 0x40
	// Line 969, Address: 0x15f8f4, Func Offset: 0x64
	// Line 970, Address: 0x15f928, Func Offset: 0x98
	// Line 972, Address: 0x15f94c, Func Offset: 0xbc
	// Line 973, Address: 0x15f960, Func Offset: 0xd0
	// Line 974, Address: 0x15f978, Func Offset: 0xe8
	// Line 975, Address: 0x15f97c, Func Offset: 0xec
	// Line 976, Address: 0x15f9c4, Func Offset: 0x134
	// Line 977, Address: 0x15fa10, Func Offset: 0x180
	// Line 978, Address: 0x15fa94, Func Offset: 0x204
	// Line 981, Address: 0x15faa0, Func Offset: 0x210
	// Line 982, Address: 0x15faa8, Func Offset: 0x218
	// Line 983, Address: 0x15fab4, Func Offset: 0x224
	// Line 985, Address: 0x15fb0c, Func Offset: 0x27c
	// Line 987, Address: 0x15fb18, Func Offset: 0x288
	// Line 989, Address: 0x15fb34, Func Offset: 0x2a4
	// Line 990, Address: 0x15fb38, Func Offset: 0x2a8
	// Func End, Address: 0x15fb54, Func Offset: 0x2c4
}

// 
// Start address: 0x15fb60
void enREDAnimeSet(EnLOCAL_DATA* dp, int anim)
{
	// Line 994, Address: 0x15fb60, Func Offset: 0
	// Line 995, Address: 0x15fb78, Func Offset: 0x18
	// Line 996, Address: 0x15fb84, Func Offset: 0x24
	// Line 997, Address: 0x15fb8c, Func Offset: 0x2c
	// Line 998, Address: 0x15fb98, Func Offset: 0x38
	// Line 1000, Address: 0x15fba4, Func Offset: 0x44
	// Line 1003, Address: 0x15fbac, Func Offset: 0x4c
	// Line 1004, Address: 0x15fbec, Func Offset: 0x8c
	// Line 1005, Address: 0x15fc10, Func Offset: 0xb0
	// Line 1006, Address: 0x15fc1c, Func Offset: 0xbc
	// Line 1008, Address: 0x15fc28, Func Offset: 0xc8
	// Func End, Address: 0x15fc40, Func Offset: 0xe0
}

// 
// Start address: 0x15fc40
void enREDAnimeReset(EnLOCAL_DATA* dp, int anim)
{
	// Line 1012, Address: 0x15fc40, Func Offset: 0
	// Line 1014, Address: 0x15fc58, Func Offset: 0x18
	// Line 1015, Address: 0x15fc98, Func Offset: 0x58
	// Line 1016, Address: 0x15fcbc, Func Offset: 0x7c
	// Line 1017, Address: 0x15fcc8, Func Offset: 0x88
	// Line 1019, Address: 0x15fcd4, Func Offset: 0x94
	// Func End, Address: 0x15fcec, Func Offset: 0xac
}

// 
// Start address: 0x15fcf0
void enREDAnimeExec(EnLOCAL_DATA* dp)
{
	int of;
	// Line 1023, Address: 0x15fcf0, Func Offset: 0
	// Line 1024, Address: 0x15fd04, Func Offset: 0x14
	// Line 1025, Address: 0x15fd08, Func Offset: 0x18
	// Line 1026, Address: 0x15fd1c, Func Offset: 0x2c
	// Line 1027, Address: 0x15fd44, Func Offset: 0x54
	// Line 1028, Address: 0x15fd54, Func Offset: 0x64
	// Line 1030, Address: 0x15fd60, Func Offset: 0x70
	// Line 1036, Address: 0x15fdb0, Func Offset: 0xc0
	// Line 1037, Address: 0x15fde4, Func Offset: 0xf4
	// Line 1038, Address: 0x15fdfc, Func Offset: 0x10c
	// Line 1040, Address: 0x15fe04, Func Offset: 0x114
	// Line 1041, Address: 0x15fe18, Func Offset: 0x128
	// Line 1045, Address: 0x15fe34, Func Offset: 0x144
	// Line 1046, Address: 0x15fe58, Func Offset: 0x168
	// Line 1048, Address: 0x15fe9c, Func Offset: 0x1ac
	// Line 1049, Address: 0x15fea4, Func Offset: 0x1b4
	// Line 1054, Address: 0x15fee4, Func Offset: 0x1f4
	// Line 1055, Address: 0x15ff04, Func Offset: 0x214
	// Line 1056, Address: 0x15ff24, Func Offset: 0x234
	// Line 1058, Address: 0x15ff2c, Func Offset: 0x23c
	// Line 1062, Address: 0x15ff48, Func Offset: 0x258
	// Func End, Address: 0x15ff60, Func Offset: 0x270
}

// 
// Start address: 0x15ff60
float enREDGetSpeed(EnLOCAL_DATA* dp)
{
	// Line 1067, Address: 0x15ff60, Func Offset: 0
	// Line 1068, Address: 0x15ff8c, Func Offset: 0x2c
	// Func End, Address: 0x15ff94, Func Offset: 0x34
}

// 
// Start address: 0x15ffa0
float enREDGetWalkSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1072, Address: 0x15ffa0, Func Offset: 0
	// Line 1073, Address: 0x15ffb0, Func Offset: 0x10
	// Line 1080, Address: 0x15ffcc, Func Offset: 0x2c
	// Line 1081, Address: 0x15fff0, Func Offset: 0x50
	// Line 1082, Address: 0x160000, Func Offset: 0x60
	// Line 1084, Address: 0x160014, Func Offset: 0x74
	// Line 1086, Address: 0x160034, Func Offset: 0x94
	// Func End, Address: 0x160048, Func Offset: 0xa8
}

// 
// Start address: 0x160050
float enREDGetAttackSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1090, Address: 0x160050, Func Offset: 0
	// Line 1091, Address: 0x160060, Func Offset: 0x10
	// Line 1098, Address: 0x16007c, Func Offset: 0x2c
	// Line 1099, Address: 0x1600a0, Func Offset: 0x50
	// Line 1101, Address: 0x1600c0, Func Offset: 0x70
	// Func End, Address: 0x1600d4, Func Offset: 0x84
}

// 
// Start address: 0x1600e0
float enREDGetFeelRange()
{
	float r;
	float feel_range[5];
	// Line 1105, Address: 0x1600e0, Func Offset: 0
	// Line 1106, Address: 0x1600ec, Func Offset: 0xc
	// Line 1113, Address: 0x160108, Func Offset: 0x28
	// Line 1114, Address: 0x16011c, Func Offset: 0x3c
	// Line 1115, Address: 0x160130, Func Offset: 0x50
	// Line 1117, Address: 0x160140, Func Offset: 0x60
	// Line 1118, Address: 0x160144, Func Offset: 0x64
	// Func End, Address: 0x160158, Func Offset: 0x78
}

// 
// Start address: 0x160160
float enREDGetRotSpeed()
{
	float rot_rate[5];
	// Line 1122, Address: 0x160160, Func Offset: 0
	// Line 1123, Address: 0x160168, Func Offset: 0x8
	// Line 1130, Address: 0x160184, Func Offset: 0x24
	// Line 1131, Address: 0x1601a8, Func Offset: 0x48
	// Func End, Address: 0x1601b8, Func Offset: 0x58
}

// 
// Start address: 0x1601c0
void enREDSetSlowTime(EnLOCAL_DATA* dp)
{
	int timer[5];
	// Line 1135, Address: 0x1601c0, Func Offset: 0
	// Line 1136, Address: 0x1601d0, Func Offset: 0x10
	// Line 1143, Address: 0x1601ec, Func Offset: 0x2c
	// Line 1144, Address: 0x160210, Func Offset: 0x50
	// Func End, Address: 0x160224, Func Offset: 0x64
}

// 
// Start address: 0x160230
void enREDSetMoveCount(EnLOCAL_DATA* dp)
{
	int n;
	// Line 1148, Address: 0x160230, Func Offset: 0
	// Line 1150, Address: 0x160244, Func Offset: 0x14
	// Line 1151, Address: 0x1602a4, Func Offset: 0x74
	// Line 1152, Address: 0x1602b4, Func Offset: 0x84
	// Func End, Address: 0x1602cc, Func Offset: 0x9c
}

// 
// Start address: 0x1602d0
void enREDSoundLife(EnLOCAL_DATA* dp)
{
	// Line 1156, Address: 0x1602d0, Func Offset: 0
	// Line 1157, Address: 0x1602e4, Func Offset: 0x14
	// Line 1158, Address: 0x1602f4, Func Offset: 0x24
	// Line 1159, Address: 0x1602fc, Func Offset: 0x2c
	// Line 1161, Address: 0x16034c, Func Offset: 0x7c
	// Line 1163, Address: 0x16038c, Func Offset: 0xbc
	// Line 1165, Address: 0x160390, Func Offset: 0xc0
	// Func End, Address: 0x1603a8, Func Offset: 0xd8
}

