typedef struct SubCharacter;
typedef struct EnBOS_DATA;
typedef struct EnSCU_DATA;
typedef struct EnLOCAL_DATA;
typedef struct shSkelton;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct EnPATH_DATA;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct EnANIME_DATA;
typedef struct shStayObjectSettingData;
typedef struct EnRED_DATA;
typedef struct EnCOMMUNICATION;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _anon0;
typedef struct EnINS_DATA;
typedef struct EnIKE_DATA;
typedef struct EDB_ANM_DATA1;
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
typedef struct EDB_ANM_DATA2;
typedef struct EnPAP_DATA;
typedef struct EnNIK_DATA;
typedef struct _AnimeInfo;

typedef void(*type_1)(EnLOCAL_DATA*);
typedef void(*type_34)(EnLOCAL_DATA*);
typedef void(*type_38)(SubCharacter*);
typedef void(*type_40)(SubCharacter*);

typedef unsigned char type_0[4];
typedef void(*type_2)(EnLOCAL_DATA*)[10];
typedef EnANIME_DATA type_3[22];
typedef short type_4[5];
typedef unsigned char type_5[14];
typedef _AnimeInfo type_6[4];
typedef unsigned char type_7[97];
typedef float type_8[4];
typedef unsigned int type_9[255];
typedef unsigned int type_10[32];
typedef float type_11[4][6];
typedef unsigned char type_12[4];
typedef char type_13[4];
typedef char type_14[4];
typedef float type_15[5];
typedef char type_16[4];
typedef float type_17[5];
typedef float type_18[5];
typedef EDB_ANM_DATA1 type_19[6];
typedef char type_20[4];
typedef char type_21[4];
typedef unsigned char type_22[20];
typedef shStayObjectSettingData type_23[11];
typedef float type_24[5];
typedef float type_25[4];
typedef unsigned char type_26[14];
typedef float type_27[4][4];
typedef float type_28[5];
typedef shAttackInfo type_29[66];
typedef EDB_ANM_DATA2 type_30[6];
typedef char type_31[3];
typedef char type_32[5];
typedef float type_33[5];
typedef void(*type_35)(EnLOCAL_DATA*)[6];
typedef unsigned char type_36[69];
typedef float type_37[4];
typedef float type_39[5];
typedef short type_41[5];

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

struct shStayObjectSettingData
{
	int chara_id;
	int bg_name_id;
	int index;
	_anon1 scale;
	_anon1 rot;
	_anon1 trans;
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

struct EDB_ANM_DATA1
{
	short start1;
	short end1;
	float rate1;
	short end2;
	float rate2;
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

struct EDB_ANM_DATA2
{
	short end;
	float rate;
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
float door_pos[4];
float room_corner[4][6];
_AnimeInfo nik_anim[4];
shStayObjectSettingData nik_pos_data[11];
EnANIME_DATA EnEDBAnime[22];
_anon0 game_flag;

void enEDBInitData(EnLOCAL_DATA* dp);
void enEDBCtrlMain(EnLOCAL_DATA* dp);
void enEDBCtrlAutomatic(EnLOCAL_DATA* dp);
void enEDBCtrlGoPlayable(EnLOCAL_DATA* dp);
void enEDBCtrlHand();
void enEDBCtrlApproach(EnLOCAL_DATA* dp);
void enEDBCtrlAway(EnLOCAL_DATA* dp);
void enEDBCtrlHidden(EnLOCAL_DATA* dp);
void enEDBCtrlEscape(EnLOCAL_DATA* dp);
void enEDBCtrlSearch(EnLOCAL_DATA* dp);
void enEDBCtrlShoot(EnLOCAL_DATA* dp);
void enEDBCtrlPunch(EnLOCAL_DATA* dp);
void enEDBCtrlDamage(EnLOCAL_DATA* dp);
void enEDBCtrlEscape2(EnLOCAL_DATA* dp);
void enEDBCtrlDead(EnLOCAL_DATA* dp);
int enEDBCheckArriveCorner(EnLOCAL_DATA* dp);
int enEDBGetNearMeat(EnLOCAL_DATA* dp);
void enEDBClearMark(EnLOCAL_DATA* dp);
void enEDBSetMark(EnLOCAL_DATA* dp, int mark);
int enEDBCheckMark(EnLOCAL_DATA* dp, int mark);
int enEDBGetDamageMotion(EnLOCAL_DATA* dp);
int enEDBSetDamage(EnLOCAL_DATA* dp);
int enEDBCanSeePlayer(EnLOCAL_DATA* dp, float angle);
void enEDBAnimeSet(EnLOCAL_DATA* dp, int anim);
void enEDBAnimeReset(EnLOCAL_DATA* dp, int anim);
void enEDBAnimeExec(EnLOCAL_DATA* dp);
void enEDBSetGunFire(EnLOCAL_DATA* dp);
void enEDBSetCartridge(EnLOCAL_DATA* dp);
void enEDBAutoRecovery(EnLOCAL_DATA* dp);
float enEDBGetSpeed(EnLOCAL_DATA* dp);
float enEDBGetWalkSpeed(EnLOCAL_DATA* dp);
float enEDBGetRunSpeed(EnLOCAL_DATA* dp);
float enEDBGetHoldSpeed(EnLOCAL_DATA* dp);
float enEDBGetAimingSpeed();
int enEDBGetDefAfford();
int enEDBGetPunchLimit();
void enEDBAddAfford(EnLOCAL_DATA* dp);
void enNIKInitData(EnLOCAL_DATA* dp);
void enNIKCtrlMain(EnLOCAL_DATA* dp);

// 
// Start address: 0x1494c0
void enEDBInitData(EnLOCAL_DATA* dp)
{
	float hp;
	int mode;
	float endurance[5];
	float vitarity2[5];
	float vitarity1[5];
	// Line 195, Address: 0x1494c0, Func Offset: 0
	// Line 196, Address: 0x1494d4, Func Offset: 0x14
	// Line 203, Address: 0x1494f0, Func Offset: 0x30
	// Line 210, Address: 0x14950c, Func Offset: 0x4c
	// Line 217, Address: 0x149528, Func Offset: 0x68
	// Line 220, Address: 0x149534, Func Offset: 0x74
	// Line 221, Address: 0x14953c, Func Offset: 0x7c
	// Line 222, Address: 0x149548, Func Offset: 0x88
	// Line 224, Address: 0x149550, Func Offset: 0x90
	// Line 226, Address: 0x149568, Func Offset: 0xa8
	// Line 227, Address: 0x149574, Func Offset: 0xb4
	// Line 228, Address: 0x14957c, Func Offset: 0xbc
	// Line 229, Address: 0x149588, Func Offset: 0xc8
	// Line 233, Address: 0x149594, Func Offset: 0xd4
	// Line 235, Address: 0x14959c, Func Offset: 0xdc
	// Line 236, Address: 0x1495a4, Func Offset: 0xe4
	// Line 237, Address: 0x1495a8, Func Offset: 0xe8
	// Line 238, Address: 0x1495b4, Func Offset: 0xf4
	// Line 240, Address: 0x1495c4, Func Offset: 0x104
	// Line 241, Address: 0x1495c8, Func Offset: 0x108
	// Line 243, Address: 0x1495e0, Func Offset: 0x120
	// Line 244, Address: 0x149614, Func Offset: 0x154
	// Line 246, Address: 0x14961c, Func Offset: 0x15c
	// Line 247, Address: 0x149628, Func Offset: 0x168
	// Line 248, Address: 0x149634, Func Offset: 0x174
	// Line 249, Address: 0x14963c, Func Offset: 0x17c
	// Line 250, Address: 0x14964c, Func Offset: 0x18c
	// Line 251, Address: 0x149658, Func Offset: 0x198
	// Func End, Address: 0x149670, Func Offset: 0x1b0
}

// 
// Start address: 0x149670
void enEDBCtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlEDBFunc)(EnLOCAL_DATA*)[6];
	// Line 257, Address: 0x149670, Func Offset: 0
	// Line 258, Address: 0x149678, Func Offset: 0x8
	// Line 267, Address: 0x149694, Func Offset: 0x24
	// Line 268, Address: 0x1496ac, Func Offset: 0x3c
	// Func End, Address: 0x1496bc, Func Offset: 0x4c
}

// 
// Start address: 0x1496c0
void enEDBCtrlAutomatic(EnLOCAL_DATA* dp)
{
	void(*enCtrlEDBSubFunc)(EnLOCAL_DATA*)[10];
	// Line 272, Address: 0x1496c0, Func Offset: 0
	// Line 273, Address: 0x1496d0, Func Offset: 0x10
	// Line 286, Address: 0x1496f4, Func Offset: 0x34
	// Line 288, Address: 0x149700, Func Offset: 0x40
	// Line 291, Address: 0x14971c, Func Offset: 0x5c
	// Line 293, Address: 0x14977c, Func Offset: 0xbc
	// Line 295, Address: 0x149788, Func Offset: 0xc8
	// Line 310, Address: 0x149794, Func Offset: 0xd4
	// Func End, Address: 0x1497a8, Func Offset: 0xe8
}

// 
// Start address: 0x1497b0
void enEDBCtrlGoPlayable(EnLOCAL_DATA* dp)
{
	// Line 315, Address: 0x1497b0, Func Offset: 0
	// Line 316, Address: 0x1497b8, Func Offset: 0x8
	// Line 317, Address: 0x1497c4, Func Offset: 0x14
	// Func End, Address: 0x1497cc, Func Offset: 0x1c
}

// 
// Start address: 0x1497d0
void enEDBCtrlHand()
{
	// Line 453, Address: 0x1497d0, Func Offset: 0
	// Func End, Address: 0x1497d8, Func Offset: 0x8
}

// 
// Start address: 0x1497e0
void enEDBCtrlApproach(EnLOCAL_DATA* dp)
{
	int c;
	int t;
	// Line 457, Address: 0x1497e0, Func Offset: 0
	// Line 459, Address: 0x1497f4, Func Offset: 0x14
	// Line 460, Address: 0x149804, Func Offset: 0x24
	// Line 461, Address: 0x149818, Func Offset: 0x38
	// Line 462, Address: 0x149824, Func Offset: 0x44
	// Line 465, Address: 0x14982c, Func Offset: 0x4c
	// Line 466, Address: 0x149840, Func Offset: 0x60
	// Line 467, Address: 0x14984c, Func Offset: 0x6c
	// Line 469, Address: 0x149884, Func Offset: 0xa4
	// Line 470, Address: 0x149890, Func Offset: 0xb0
	// Line 472, Address: 0x149898, Func Offset: 0xb8
	// Line 473, Address: 0x1498b8, Func Offset: 0xd8
	// Line 474, Address: 0x1498c4, Func Offset: 0xe4
	// Line 476, Address: 0x1498cc, Func Offset: 0xec
	// Line 477, Address: 0x1498d8, Func Offset: 0xf8
	// Line 478, Address: 0x1498ec, Func Offset: 0x10c
	// Line 479, Address: 0x1498fc, Func Offset: 0x11c
	// Line 481, Address: 0x149908, Func Offset: 0x128
	// Line 482, Address: 0x149920, Func Offset: 0x140
	// Line 483, Address: 0x149944, Func Offset: 0x164
	// Line 484, Address: 0x149950, Func Offset: 0x170
	// Func End, Address: 0x149968, Func Offset: 0x188
}

// 
// Start address: 0x149970
void enEDBCtrlAway(EnLOCAL_DATA* dp)
{
	int dir;
	float vec2[4];
	float d2;
	float d1;
	float vec[4];
	// Line 488, Address: 0x149970, Func Offset: 0
	// Line 490, Address: 0x149984, Func Offset: 0x14
	// Line 491, Address: 0x149994, Func Offset: 0x24
	// Line 492, Address: 0x1499a8, Func Offset: 0x38
	// Line 493, Address: 0x1499b4, Func Offset: 0x44
	// Line 495, Address: 0x1499bc, Func Offset: 0x4c
	// Line 496, Address: 0x1499f4, Func Offset: 0x84
	// Line 497, Address: 0x149a00, Func Offset: 0x90
	// Line 500, Address: 0x149a08, Func Offset: 0x98
	// Line 502, Address: 0x149a34, Func Offset: 0xc4
	// Line 503, Address: 0x149a40, Func Offset: 0xd0
	// Line 504, Address: 0x149a54, Func Offset: 0xe4
	// Line 505, Address: 0x149a64, Func Offset: 0xf4
	// Line 507, Address: 0x149a70, Func Offset: 0x100
	// Line 508, Address: 0x149a94, Func Offset: 0x124
	// Line 509, Address: 0x149ab0, Func Offset: 0x140
	// Line 510, Address: 0x149abc, Func Offset: 0x14c
	// Line 511, Address: 0x149ae8, Func Offset: 0x178
	// Line 512, Address: 0x149b08, Func Offset: 0x198
	// Line 513, Address: 0x149b3c, Func Offset: 0x1cc
	// Line 515, Address: 0x149b7c, Func Offset: 0x20c
	// Line 516, Address: 0x149b88, Func Offset: 0x218
	// Line 517, Address: 0x149b90, Func Offset: 0x220
	// Line 519, Address: 0x149b94, Func Offset: 0x224
	// Line 520, Address: 0x149b9c, Func Offset: 0x22c
	// Line 522, Address: 0x149ba4, Func Offset: 0x234
	// Line 523, Address: 0x149bac, Func Offset: 0x23c
	// Line 524, Address: 0x149bc0, Func Offset: 0x250
	// Line 525, Address: 0x149bcc, Func Offset: 0x25c
	// Line 528, Address: 0x149bd0, Func Offset: 0x260
	// Line 532, Address: 0x149bf0, Func Offset: 0x280
	// Line 533, Address: 0x149c20, Func Offset: 0x2b0
	// Line 534, Address: 0x149c40, Func Offset: 0x2d0
	// Line 535, Address: 0x149c58, Func Offset: 0x2e8
	// Line 536, Address: 0x149c78, Func Offset: 0x308
	// Line 537, Address: 0x149c8c, Func Offset: 0x31c
	// Line 538, Address: 0x149ca4, Func Offset: 0x334
	// Line 539, Address: 0x149cb4, Func Offset: 0x344
	// Line 540, Address: 0x149cb8, Func Offset: 0x348
	// Line 541, Address: 0x149cc0, Func Offset: 0x350
	// Line 543, Address: 0x149cc4, Func Offset: 0x354
	// Line 544, Address: 0x149ccc, Func Offset: 0x35c
	// Line 545, Address: 0x149cec, Func Offset: 0x37c
	// Line 546, Address: 0x149cf0, Func Offset: 0x380
	// Line 547, Address: 0x149cf8, Func Offset: 0x388
	// Line 550, Address: 0x149cfc, Func Offset: 0x38c
	// Line 551, Address: 0x149d0c, Func Offset: 0x39c
	// Line 552, Address: 0x149d14, Func Offset: 0x3a4
	// Line 554, Address: 0x149d1c, Func Offset: 0x3ac
	// Line 555, Address: 0x149d34, Func Offset: 0x3c4
	// Line 557, Address: 0x149d5c, Func Offset: 0x3ec
	// Line 559, Address: 0x149d64, Func Offset: 0x3f4
	// Line 560, Address: 0x149d74, Func Offset: 0x404
	// Line 561, Address: 0x149d90, Func Offset: 0x420
	// Line 562, Address: 0x149dc0, Func Offset: 0x450
	// Line 563, Address: 0x149dd0, Func Offset: 0x460
	// Line 564, Address: 0x149de4, Func Offset: 0x474
	// Line 565, Address: 0x149dec, Func Offset: 0x47c
	// Line 566, Address: 0x149df4, Func Offset: 0x484
	// Line 567, Address: 0x149dfc, Func Offset: 0x48c
	// Line 571, Address: 0x149e00, Func Offset: 0x490
	// Line 572, Address: 0x149e0c, Func Offset: 0x49c
	// Func End, Address: 0x149e24, Func Offset: 0x4b4
}

// 
// Start address: 0x149e30
void enEDBCtrlHidden(EnLOCAL_DATA* dp)
{
	float* npos;
	float a;
	// Line 576, Address: 0x149e30, Func Offset: 0
	// Line 578, Address: 0x149e48, Func Offset: 0x18
	// Line 579, Address: 0x149e58, Func Offset: 0x28
	// Line 580, Address: 0x149e6c, Func Offset: 0x3c
	// Line 581, Address: 0x149e78, Func Offset: 0x48
	// Line 584, Address: 0x149e80, Func Offset: 0x50
	// Line 586, Address: 0x149eac, Func Offset: 0x7c
	// Line 587, Address: 0x149ebc, Func Offset: 0x8c
	// Line 588, Address: 0x149ed4, Func Offset: 0xa4
	// Line 589, Address: 0x149ee0, Func Offset: 0xb0
	// Line 591, Address: 0x149ee8, Func Offset: 0xb8
	// Line 592, Address: 0x149ef8, Func Offset: 0xc8
	// Line 594, Address: 0x149f04, Func Offset: 0xd4
	// Line 595, Address: 0x149f24, Func Offset: 0xf4
	// Line 596, Address: 0x149f30, Func Offset: 0x100
	// Line 598, Address: 0x149f38, Func Offset: 0x108
	// Line 599, Address: 0x149f7c, Func Offset: 0x14c
	// Line 600, Address: 0x149f84, Func Offset: 0x154
	// Line 602, Address: 0x149f8c, Func Offset: 0x15c
	// Line 603, Address: 0x149fa0, Func Offset: 0x170
	// Line 604, Address: 0x149fb4, Func Offset: 0x184
	// Line 605, Address: 0x149fcc, Func Offset: 0x19c
	// Line 606, Address: 0x149fec, Func Offset: 0x1bc
	// Line 607, Address: 0x149ffc, Func Offset: 0x1cc
	// Line 608, Address: 0x14a004, Func Offset: 0x1d4
	// Line 609, Address: 0x14a00c, Func Offset: 0x1dc
	// Line 610, Address: 0x14a02c, Func Offset: 0x1fc
	// Line 611, Address: 0x14a03c, Func Offset: 0x20c
	// Line 612, Address: 0x14a044, Func Offset: 0x214
	// Line 615, Address: 0x14a04c, Func Offset: 0x21c
	// Line 616, Address: 0x14a064, Func Offset: 0x234
	// Line 618, Address: 0x14a08c, Func Offset: 0x25c
	// Line 620, Address: 0x14a094, Func Offset: 0x264
	// Line 621, Address: 0x14a0a0, Func Offset: 0x270
	// Line 622, Address: 0x14a0b0, Func Offset: 0x280
	// Line 623, Address: 0x14a0c0, Func Offset: 0x290
	// Line 624, Address: 0x14a0d4, Func Offset: 0x2a4
	// Line 625, Address: 0x14a0e4, Func Offset: 0x2b4
	// Line 626, Address: 0x14a0ec, Func Offset: 0x2bc
	// Line 630, Address: 0x14a0f4, Func Offset: 0x2c4
	// Line 631, Address: 0x14a100, Func Offset: 0x2d0
	// Line 632, Address: 0x14a10c, Func Offset: 0x2dc
	// Line 633, Address: 0x14a11c, Func Offset: 0x2ec
	// Line 634, Address: 0x14a124, Func Offset: 0x2f4
	// Line 635, Address: 0x14a12c, Func Offset: 0x2fc
	// Line 636, Address: 0x14a13c, Func Offset: 0x30c
	// Line 637, Address: 0x14a14c, Func Offset: 0x31c
	// Line 639, Address: 0x14a154, Func Offset: 0x324
	// Line 641, Address: 0x14a15c, Func Offset: 0x32c
	// Line 642, Address: 0x14a168, Func Offset: 0x338
	// Line 643, Address: 0x14a178, Func Offset: 0x348
	// Line 644, Address: 0x14a184, Func Offset: 0x354
	// Line 645, Address: 0x14a194, Func Offset: 0x364
	// Line 646, Address: 0x14a19c, Func Offset: 0x36c
	// Line 647, Address: 0x14a1a4, Func Offset: 0x374
	// Line 648, Address: 0x14a1b4, Func Offset: 0x384
	// Line 649, Address: 0x14a1c4, Func Offset: 0x394
	// Line 652, Address: 0x14a1cc, Func Offset: 0x39c
	// Line 654, Address: 0x14a1d4, Func Offset: 0x3a4
	// Line 655, Address: 0x14a1e0, Func Offset: 0x3b0
	// Line 656, Address: 0x14a1f4, Func Offset: 0x3c4
	// Line 657, Address: 0x14a20c, Func Offset: 0x3dc
	// Line 658, Address: 0x14a218, Func Offset: 0x3e8
	// Line 659, Address: 0x14a220, Func Offset: 0x3f0
	// Line 660, Address: 0x14a230, Func Offset: 0x400
	// Line 661, Address: 0x14a240, Func Offset: 0x410
	// Line 663, Address: 0x14a248, Func Offset: 0x418
	// Line 665, Address: 0x14a250, Func Offset: 0x420
	// Line 667, Address: 0x14a298, Func Offset: 0x468
	// Line 668, Address: 0x14a2a4, Func Offset: 0x474
	// Line 670, Address: 0x14a2ac, Func Offset: 0x47c
	// Line 671, Address: 0x14a2b8, Func Offset: 0x488
	// Line 673, Address: 0x14a2c0, Func Offset: 0x490
	// Line 674, Address: 0x14a2e4, Func Offset: 0x4b4
	// Line 675, Address: 0x14a2fc, Func Offset: 0x4cc
	// Line 676, Address: 0x14a308, Func Offset: 0x4d8
	// Line 677, Address: 0x14a310, Func Offset: 0x4e0
	// Line 678, Address: 0x14a320, Func Offset: 0x4f0
	// Line 679, Address: 0x14a330, Func Offset: 0x500
	// Line 681, Address: 0x14a338, Func Offset: 0x508
	// Line 683, Address: 0x14a398, Func Offset: 0x568
	// Line 684, Address: 0x14a39c, Func Offset: 0x56c
	// Line 685, Address: 0x14a3a4, Func Offset: 0x574
	// Line 687, Address: 0x14a3c8, Func Offset: 0x598
	// Line 689, Address: 0x14a40c, Func Offset: 0x5dc
	// Line 690, Address: 0x14a42c, Func Offset: 0x5fc
	// Line 693, Address: 0x14a430, Func Offset: 0x600
	// Line 695, Address: 0x14a438, Func Offset: 0x608
	// Line 696, Address: 0x14a448, Func Offset: 0x618
	// Line 697, Address: 0x14a454, Func Offset: 0x624
	// Line 698, Address: 0x14a46c, Func Offset: 0x63c
	// Line 703, Address: 0x14a478, Func Offset: 0x648
	// Line 704, Address: 0x14a484, Func Offset: 0x654
	// Func End, Address: 0x14a4a0, Func Offset: 0x670
}

// 
// Start address: 0x14a4a0
void enEDBCtrlEscape(EnLOCAL_DATA* dp)
{
	float vec[4];
	float a;
	int t;
	// Line 708, Address: 0x14a4a0, Func Offset: 0
	// Line 712, Address: 0x14a4b4, Func Offset: 0x14
	// Line 713, Address: 0x14a4c4, Func Offset: 0x24
	// Line 714, Address: 0x14a4d8, Func Offset: 0x38
	// Line 715, Address: 0x14a4e4, Func Offset: 0x44
	// Line 718, Address: 0x14a4ec, Func Offset: 0x4c
	// Line 720, Address: 0x14a518, Func Offset: 0x78
	// Line 721, Address: 0x14a538, Func Offset: 0x98
	// Line 722, Address: 0x14a570, Func Offset: 0xd0
	// Line 723, Address: 0x14a580, Func Offset: 0xe0
	// Line 724, Address: 0x14a588, Func Offset: 0xe8
	// Line 725, Address: 0x14a590, Func Offset: 0xf0
	// Line 726, Address: 0x14a5c8, Func Offset: 0x128
	// Line 727, Address: 0x14a5d8, Func Offset: 0x138
	// Line 728, Address: 0x14a5e0, Func Offset: 0x140
	// Line 730, Address: 0x14a5e8, Func Offset: 0x148
	// Line 731, Address: 0x14a5f8, Func Offset: 0x158
	// Line 732, Address: 0x14a60c, Func Offset: 0x16c
	// Line 733, Address: 0x14a610, Func Offset: 0x170
	// Line 734, Address: 0x14a620, Func Offset: 0x180
	// Line 735, Address: 0x14a628, Func Offset: 0x188
	// Line 737, Address: 0x14a630, Func Offset: 0x190
	// Line 738, Address: 0x14a63c, Func Offset: 0x19c
	// Line 739, Address: 0x14a64c, Func Offset: 0x1ac
	// Line 740, Address: 0x14a65c, Func Offset: 0x1bc
	// Line 741, Address: 0x14a670, Func Offset: 0x1d0
	// Line 742, Address: 0x14a674, Func Offset: 0x1d4
	// Line 743, Address: 0x14a684, Func Offset: 0x1e4
	// Line 745, Address: 0x14a68c, Func Offset: 0x1ec
	// Line 747, Address: 0x14a694, Func Offset: 0x1f4
	// Line 750, Address: 0x14a6c8, Func Offset: 0x228
	// Line 751, Address: 0x14a6d8, Func Offset: 0x238
	// Line 752, Address: 0x14a6e4, Func Offset: 0x244
	// Line 753, Address: 0x14a6f0, Func Offset: 0x250
	// Line 754, Address: 0x14a700, Func Offset: 0x260
	// Line 755, Address: 0x14a708, Func Offset: 0x268
	// Line 756, Address: 0x14a710, Func Offset: 0x270
	// Line 758, Address: 0x14a718, Func Offset: 0x278
	// Line 760, Address: 0x14a720, Func Offset: 0x280
	// Line 761, Address: 0x14a73c, Func Offset: 0x29c
	// Line 762, Address: 0x14a758, Func Offset: 0x2b8
	// Line 763, Address: 0x14a774, Func Offset: 0x2d4
	// Line 765, Address: 0x14a7ac, Func Offset: 0x30c
	// Line 766, Address: 0x14a7d8, Func Offset: 0x338
	// Line 767, Address: 0x14a7e8, Func Offset: 0x348
	// Line 768, Address: 0x14a7f0, Func Offset: 0x350
	// Line 770, Address: 0x14a800, Func Offset: 0x360
	// Line 771, Address: 0x14a808, Func Offset: 0x368
	// Line 773, Address: 0x14a810, Func Offset: 0x370
	// Line 774, Address: 0x14a814, Func Offset: 0x374
	// Line 775, Address: 0x14a81c, Func Offset: 0x37c
	// Line 777, Address: 0x14a820, Func Offset: 0x380
	// Line 778, Address: 0x14a840, Func Offset: 0x3a0
	// Line 780, Address: 0x14a854, Func Offset: 0x3b4
	// Line 781, Address: 0x14a860, Func Offset: 0x3c0
	// Line 784, Address: 0x14a868, Func Offset: 0x3c8
	// Line 786, Address: 0x14a878, Func Offset: 0x3d8
	// Line 787, Address: 0x14a890, Func Offset: 0x3f0
	// Line 789, Address: 0x14a8b8, Func Offset: 0x418
	// Line 790, Address: 0x14a8d8, Func Offset: 0x438
	// Line 792, Address: 0x14a8e4, Func Offset: 0x444
	// Line 794, Address: 0x14a8ec, Func Offset: 0x44c
	// Line 795, Address: 0x14a8f8, Func Offset: 0x458
	// Line 796, Address: 0x14a908, Func Offset: 0x468
	// Line 798, Address: 0x14a914, Func Offset: 0x474
	// Line 800, Address: 0x14a91c, Func Offset: 0x47c
	// Line 801, Address: 0x14a928, Func Offset: 0x488
	// Line 802, Address: 0x14a93c, Func Offset: 0x49c
	// Line 803, Address: 0x14a948, Func Offset: 0x4a8
	// Line 805, Address: 0x14a950, Func Offset: 0x4b0
	// Line 806, Address: 0x14a970, Func Offset: 0x4d0
	// Line 807, Address: 0x14a988, Func Offset: 0x4e8
	// Line 808, Address: 0x14a998, Func Offset: 0x4f8
	// Line 809, Address: 0x14a9a0, Func Offset: 0x500
	// Line 811, Address: 0x14a9b0, Func Offset: 0x510
	// Line 812, Address: 0x14a9b4, Func Offset: 0x514
	// Line 813, Address: 0x14a9c0, Func Offset: 0x520
	// Line 815, Address: 0x14a9c8, Func Offset: 0x528
	// Line 816, Address: 0x14a9d4, Func Offset: 0x534
	// Line 817, Address: 0x14a9e4, Func Offset: 0x544
	// Line 818, Address: 0x14aa00, Func Offset: 0x560
	// Line 819, Address: 0x14aa04, Func Offset: 0x564
	// Line 821, Address: 0x14aa0c, Func Offset: 0x56c
	// Line 822, Address: 0x14aa2c, Func Offset: 0x58c
	// Line 823, Address: 0x14aa4c, Func Offset: 0x5ac
	// Line 824, Address: 0x14aa6c, Func Offset: 0x5cc
	// Line 825, Address: 0x14aa7c, Func Offset: 0x5dc
	// Line 826, Address: 0x14aa84, Func Offset: 0x5e4
	// Line 827, Address: 0x14aaa4, Func Offset: 0x604
	// Line 828, Address: 0x14aab4, Func Offset: 0x614
	// Line 831, Address: 0x14aabc, Func Offset: 0x61c
	// Line 832, Address: 0x14aacc, Func Offset: 0x62c
	// Line 833, Address: 0x14aae0, Func Offset: 0x640
	// Line 834, Address: 0x14ab04, Func Offset: 0x664
	// Line 836, Address: 0x14ab10, Func Offset: 0x670
	// Line 838, Address: 0x14ab18, Func Offset: 0x678
	// Line 839, Address: 0x14ab24, Func Offset: 0x684
	// Line 840, Address: 0x14ab3c, Func Offset: 0x69c
	// Line 841, Address: 0x14ab48, Func Offset: 0x6a8
	// Line 842, Address: 0x14ab54, Func Offset: 0x6b4
	// Line 844, Address: 0x14ab5c, Func Offset: 0x6bc
	// Line 846, Address: 0x14ab94, Func Offset: 0x6f4
	// Line 847, Address: 0x14aba0, Func Offset: 0x700
	// Line 848, Address: 0x14aba8, Func Offset: 0x708
	// Line 849, Address: 0x14abb4, Func Offset: 0x714
	// Line 850, Address: 0x14abbc, Func Offset: 0x71c
	// Line 852, Address: 0x14abc8, Func Offset: 0x728
	// Line 854, Address: 0x14abd0, Func Offset: 0x730
	// Line 856, Address: 0x14ac08, Func Offset: 0x768
	// Line 857, Address: 0x14ac14, Func Offset: 0x774
	// Line 860, Address: 0x14ac1c, Func Offset: 0x77c
	// Line 861, Address: 0x14ac2c, Func Offset: 0x78c
	// Line 862, Address: 0x14ac44, Func Offset: 0x7a4
	// Line 865, Address: 0x14ac50, Func Offset: 0x7b0
	// Line 866, Address: 0x14ac5c, Func Offset: 0x7bc
	// Func End, Address: 0x14ac74, Func Offset: 0x7d4
}

// 
// Start address: 0x14ac80
void enEDBCtrlSearch(EnLOCAL_DATA* dp)
{
	float vec[4];
	// Line 870, Address: 0x14ac80, Func Offset: 0
	// Line 872, Address: 0x14ac94, Func Offset: 0x14
	// Line 873, Address: 0x14aca4, Func Offset: 0x24
	// Line 874, Address: 0x14acb8, Func Offset: 0x38
	// Line 875, Address: 0x14acc4, Func Offset: 0x44
	// Line 878, Address: 0x14accc, Func Offset: 0x4c
	// Line 879, Address: 0x14acd8, Func Offset: 0x58
	// Line 880, Address: 0x14ace8, Func Offset: 0x68
	// Line 881, Address: 0x14acfc, Func Offset: 0x7c
	// Line 882, Address: 0x14ad08, Func Offset: 0x88
	// Line 883, Address: 0x14ad10, Func Offset: 0x90
	// Line 885, Address: 0x14ad1c, Func Offset: 0x9c
	// Line 887, Address: 0x14ad70, Func Offset: 0xf0
	// Line 888, Address: 0x14ad7c, Func Offset: 0xfc
	// Line 890, Address: 0x14adbc, Func Offset: 0x13c
	// Line 891, Address: 0x14adc8, Func Offset: 0x148
	// Line 893, Address: 0x14add0, Func Offset: 0x150
	// Line 894, Address: 0x14addc, Func Offset: 0x15c
	// Line 896, Address: 0x14ade4, Func Offset: 0x164
	// Line 897, Address: 0x14adfc, Func Offset: 0x17c
	// Line 898, Address: 0x14ae08, Func Offset: 0x188
	// Line 902, Address: 0x14ae10, Func Offset: 0x190
	// Line 903, Address: 0x14ae38, Func Offset: 0x1b8
	// Line 904, Address: 0x14ae44, Func Offset: 0x1c4
	// Line 906, Address: 0x14ae4c, Func Offset: 0x1cc
	// Line 907, Address: 0x14ae70, Func Offset: 0x1f0
	// Line 908, Address: 0x14ae7c, Func Offset: 0x1fc
	// Line 912, Address: 0x14ae84, Func Offset: 0x204
	// Line 913, Address: 0x14aea8, Func Offset: 0x228
	// Line 914, Address: 0x14aec4, Func Offset: 0x244
	// Line 915, Address: 0x14aee0, Func Offset: 0x260
	// Line 916, Address: 0x14aee4, Func Offset: 0x264
	// Line 919, Address: 0x14aeec, Func Offset: 0x26c
	// Line 920, Address: 0x14af04, Func Offset: 0x284
	// Line 921, Address: 0x14af24, Func Offset: 0x2a4
	// Line 922, Address: 0x14af30, Func Offset: 0x2b0
	// Func End, Address: 0x14af48, Func Offset: 0x2c8
}

// 
// Start address: 0x14af50
void enEDBCtrlShoot(EnLOCAL_DATA* dp)
{
	float d;
	int t;
	// Line 926, Address: 0x14af50, Func Offset: 0
	// Line 928, Address: 0x14af64, Func Offset: 0x14
	// Line 929, Address: 0x14af74, Func Offset: 0x24
	// Line 930, Address: 0x14af88, Func Offset: 0x38
	// Line 931, Address: 0x14af94, Func Offset: 0x44
	// Line 934, Address: 0x14af9c, Func Offset: 0x4c
	// Line 936, Address: 0x14afc8, Func Offset: 0x78
	// Line 937, Address: 0x14afd4, Func Offset: 0x84
	// Line 938, Address: 0x14afe4, Func Offset: 0x94
	// Line 939, Address: 0x14afec, Func Offset: 0x9c
	// Line 941, Address: 0x14aff4, Func Offset: 0xa4
	// Line 942, Address: 0x14b008, Func Offset: 0xb8
	// Line 943, Address: 0x14b018, Func Offset: 0xc8
	// Line 944, Address: 0x14b028, Func Offset: 0xd8
	// Line 945, Address: 0x14b030, Func Offset: 0xe0
	// Line 947, Address: 0x14b038, Func Offset: 0xe8
	// Line 949, Address: 0x14b088, Func Offset: 0x138
	// Line 950, Address: 0x14b094, Func Offset: 0x144
	// Line 952, Address: 0x14b09c, Func Offset: 0x14c
	// Line 956, Address: 0x14b0a8, Func Offset: 0x158
	// Line 957, Address: 0x14b0c8, Func Offset: 0x178
	// Line 958, Address: 0x14b0e8, Func Offset: 0x198
	// Line 959, Address: 0x14b0f8, Func Offset: 0x1a8
	// Line 960, Address: 0x14b100, Func Offset: 0x1b0
	// Line 961, Address: 0x14b108, Func Offset: 0x1b8
	// Line 962, Address: 0x14b128, Func Offset: 0x1d8
	// Line 963, Address: 0x14b138, Func Offset: 0x1e8
	// Line 964, Address: 0x14b140, Func Offset: 0x1f0
	// Line 967, Address: 0x14b148, Func Offset: 0x1f8
	// Line 968, Address: 0x14b154, Func Offset: 0x204
	// Line 969, Address: 0x14b164, Func Offset: 0x214
	// Line 970, Address: 0x14b178, Func Offset: 0x228
	// Line 971, Address: 0x14b184, Func Offset: 0x234
	// Line 972, Address: 0x14b190, Func Offset: 0x240
	// Line 974, Address: 0x14b198, Func Offset: 0x248
	// Line 975, Address: 0x14b1a4, Func Offset: 0x254
	// Line 976, Address: 0x14b1c0, Func Offset: 0x270
	// Line 978, Address: 0x14b1ec, Func Offset: 0x29c
	// Line 979, Address: 0x14b1f8, Func Offset: 0x2a8
	// Line 980, Address: 0x14b208, Func Offset: 0x2b8
	// Line 981, Address: 0x14b214, Func Offset: 0x2c4
	// Line 982, Address: 0x14b21c, Func Offset: 0x2cc
	// Line 984, Address: 0x14b228, Func Offset: 0x2d8
	// Line 986, Address: 0x14b230, Func Offset: 0x2e0
	// Line 987, Address: 0x14b240, Func Offset: 0x2f0
	// Line 988, Address: 0x14b250, Func Offset: 0x300
	// Line 990, Address: 0x14b25c, Func Offset: 0x30c
	// Line 991, Address: 0x14b260, Func Offset: 0x310
	// Line 992, Address: 0x14b26c, Func Offset: 0x31c
	// Line 994, Address: 0x14b278, Func Offset: 0x328
	// Line 996, Address: 0x14b280, Func Offset: 0x330
	// Line 997, Address: 0x14b28c, Func Offset: 0x33c
	// Line 998, Address: 0x14b29c, Func Offset: 0x34c
	// Line 999, Address: 0x14b2ac, Func Offset: 0x35c
	// Line 1000, Address: 0x14b2b8, Func Offset: 0x368
	// Line 1001, Address: 0x14b2c4, Func Offset: 0x374
	// Line 1002, Address: 0x14b2d0, Func Offset: 0x380
	// Line 1003, Address: 0x14b2d8, Func Offset: 0x388
	// Line 1004, Address: 0x14b2e0, Func Offset: 0x390
	// Line 1008, Address: 0x14b344, Func Offset: 0x3f4
	// Line 1009, Address: 0x14b354, Func Offset: 0x404
	// Line 1010, Address: 0x14b360, Func Offset: 0x410
	// Line 1011, Address: 0x14b370, Func Offset: 0x420
	// Line 1012, Address: 0x14b37c, Func Offset: 0x42c
	// Line 1013, Address: 0x14b384, Func Offset: 0x434
	// Line 1014, Address: 0x14b3a8, Func Offset: 0x458
	// Line 1015, Address: 0x14b3b4, Func Offset: 0x464
	// Line 1016, Address: 0x14b3bc, Func Offset: 0x46c
	// Line 1021, Address: 0x14b3c8, Func Offset: 0x478
	// Line 1023, Address: 0x14b3d0, Func Offset: 0x480
	// Line 1024, Address: 0x14b3dc, Func Offset: 0x48c
	// Line 1025, Address: 0x14b3f8, Func Offset: 0x4a8
	// Line 1026, Address: 0x14b404, Func Offset: 0x4b4
	// Line 1027, Address: 0x14b41c, Func Offset: 0x4cc
	// Line 1028, Address: 0x14b42c, Func Offset: 0x4dc
	// Line 1029, Address: 0x14b45c, Func Offset: 0x50c
	// Line 1030, Address: 0x14b470, Func Offset: 0x520
	// Line 1031, Address: 0x14b47c, Func Offset: 0x52c
	// Line 1033, Address: 0x14b484, Func Offset: 0x534
	// Line 1034, Address: 0x14b494, Func Offset: 0x544
	// Line 1036, Address: 0x14b4a0, Func Offset: 0x550
	// Line 1037, Address: 0x14b4a4, Func Offset: 0x554
	// Line 1038, Address: 0x14b4b0, Func Offset: 0x560
	// Line 1040, Address: 0x14b4b8, Func Offset: 0x568
	// Line 1041, Address: 0x14b4c0, Func Offset: 0x570
	// Line 1042, Address: 0x14b4c8, Func Offset: 0x578
	// Line 1043, Address: 0x14b4ec, Func Offset: 0x59c
	// Line 1044, Address: 0x14b4f8, Func Offset: 0x5a8
	// Line 1045, Address: 0x14b500, Func Offset: 0x5b0
	// Line 1046, Address: 0x14b50c, Func Offset: 0x5bc
	// Line 1047, Address: 0x14b510, Func Offset: 0x5c0
	// Line 1048, Address: 0x14b51c, Func Offset: 0x5cc
	// Line 1049, Address: 0x14b530, Func Offset: 0x5e0
	// Line 1050, Address: 0x14b53c, Func Offset: 0x5ec
	// Line 1053, Address: 0x14b548, Func Offset: 0x5f8
	// Line 1055, Address: 0x14b550, Func Offset: 0x600
	// Line 1056, Address: 0x14b55c, Func Offset: 0x60c
	// Line 1057, Address: 0x14b56c, Func Offset: 0x61c
	// Line 1059, Address: 0x14b574, Func Offset: 0x624
	// Line 1061, Address: 0x14b57c, Func Offset: 0x62c
	// Line 1062, Address: 0x14b594, Func Offset: 0x644
	// Line 1064, Address: 0x14b5c8, Func Offset: 0x678
	// Line 1065, Address: 0x14b5d0, Func Offset: 0x680
	// Line 1067, Address: 0x14b5d8, Func Offset: 0x688
	// Line 1068, Address: 0x14b5e4, Func Offset: 0x694
	// Line 1070, Address: 0x14b5ec, Func Offset: 0x69c
	// Line 1071, Address: 0x14b600, Func Offset: 0x6b0
	// Line 1072, Address: 0x14b60c, Func Offset: 0x6bc
	// Line 1073, Address: 0x14b614, Func Offset: 0x6c4
	// Line 1074, Address: 0x14b61c, Func Offset: 0x6cc
	// Line 1076, Address: 0x14b628, Func Offset: 0x6d8
	// Line 1077, Address: 0x14b644, Func Offset: 0x6f4
	// Line 1081, Address: 0x14b64c, Func Offset: 0x6fc
	// Line 1083, Address: 0x14b654, Func Offset: 0x704
	// Line 1084, Address: 0x14b660, Func Offset: 0x710
	// Line 1085, Address: 0x14b670, Func Offset: 0x720
	// Line 1089, Address: 0x14b678, Func Offset: 0x728
	// Line 1090, Address: 0x14b684, Func Offset: 0x734
	// Func End, Address: 0x14b69c, Func Offset: 0x74c
}

// 
// Start address: 0x14b6a0
void enEDBCtrlPunch(EnLOCAL_DATA* dp)
{
	float vec[4];
	float d2;
	float d1;
	int t;
	// Line 1094, Address: 0x14b6a0, Func Offset: 0
	// Line 1098, Address: 0x14b6b8, Func Offset: 0x18
	// Line 1099, Address: 0x14b6c8, Func Offset: 0x28
	// Line 1100, Address: 0x14b6dc, Func Offset: 0x3c
	// Line 1101, Address: 0x14b6e8, Func Offset: 0x48
	// Line 1103, Address: 0x14b6f0, Func Offset: 0x50
	// Line 1105, Address: 0x14b734, Func Offset: 0x94
	// Line 1106, Address: 0x14b740, Func Offset: 0xa0
	// Line 1109, Address: 0x14b748, Func Offset: 0xa8
	// Line 1111, Address: 0x14b774, Func Offset: 0xd4
	// Line 1112, Address: 0x14b78c, Func Offset: 0xec
	// Line 1113, Address: 0x14b798, Func Offset: 0xf8
	// Line 1115, Address: 0x14b7a0, Func Offset: 0x100
	// Line 1116, Address: 0x14b7b4, Func Offset: 0x114
	// Line 1117, Address: 0x14b7c0, Func Offset: 0x120
	// Line 1118, Address: 0x14b7d0, Func Offset: 0x130
	// Line 1119, Address: 0x14b7dc, Func Offset: 0x13c
	// Line 1120, Address: 0x14b7e4, Func Offset: 0x144
	// Line 1121, Address: 0x14b7ec, Func Offset: 0x14c
	// Line 1122, Address: 0x14b800, Func Offset: 0x160
	// Line 1123, Address: 0x14b810, Func Offset: 0x170
	// Line 1124, Address: 0x14b824, Func Offset: 0x184
	// Line 1125, Address: 0x14b834, Func Offset: 0x194
	// Line 1126, Address: 0x14b840, Func Offset: 0x1a0
	// Line 1127, Address: 0x14b848, Func Offset: 0x1a8
	// Line 1128, Address: 0x14b858, Func Offset: 0x1b8
	// Line 1131, Address: 0x14b860, Func Offset: 0x1c0
	// Line 1134, Address: 0x14b868, Func Offset: 0x1c8
	// Line 1135, Address: 0x14b87c, Func Offset: 0x1dc
	// Line 1136, Address: 0x14b888, Func Offset: 0x1e8
	// Line 1138, Address: 0x14b8e0, Func Offset: 0x240
	// Line 1139, Address: 0x14b8ec, Func Offset: 0x24c
	// Line 1141, Address: 0x14b8f4, Func Offset: 0x254
	// Line 1142, Address: 0x14b904, Func Offset: 0x264
	// Line 1143, Address: 0x14b910, Func Offset: 0x270
	// Line 1144, Address: 0x14b91c, Func Offset: 0x27c
	// Line 1145, Address: 0x14b924, Func Offset: 0x284
	// Line 1146, Address: 0x14b92c, Func Offset: 0x28c
	// Line 1147, Address: 0x14b950, Func Offset: 0x2b0
	// Line 1148, Address: 0x14b968, Func Offset: 0x2c8
	// Line 1149, Address: 0x14b978, Func Offset: 0x2d8
	// Line 1151, Address: 0x14b9a0, Func Offset: 0x300
	// Line 1152, Address: 0x14b9a8, Func Offset: 0x308
	// Line 1156, Address: 0x14b9d0, Func Offset: 0x330
	// Line 1159, Address: 0x14ba30, Func Offset: 0x390
	// Line 1160, Address: 0x14ba3c, Func Offset: 0x39c
	// Line 1161, Address: 0x14ba44, Func Offset: 0x3a4
	// Line 1162, Address: 0x14ba4c, Func Offset: 0x3ac
	// Line 1163, Address: 0x14ba70, Func Offset: 0x3d0
	// Line 1164, Address: 0x14ba7c, Func Offset: 0x3dc
	// Line 1167, Address: 0x14ba80, Func Offset: 0x3e0
	// Line 1168, Address: 0x14baa0, Func Offset: 0x400
	// Line 1170, Address: 0x14baac, Func Offset: 0x40c
	// Line 1172, Address: 0x14bab4, Func Offset: 0x414
	// Line 1173, Address: 0x14bac0, Func Offset: 0x420
	// Line 1174, Address: 0x14bad8, Func Offset: 0x438
	// Line 1175, Address: 0x14bae8, Func Offset: 0x448
	// Line 1176, Address: 0x14baf8, Func Offset: 0x458
	// Line 1177, Address: 0x14bb04, Func Offset: 0x464
	// Line 1178, Address: 0x14bb10, Func Offset: 0x470
	// Line 1179, Address: 0x14bb1c, Func Offset: 0x47c
	// Line 1180, Address: 0x14bb28, Func Offset: 0x488
	// Line 1181, Address: 0x14bb38, Func Offset: 0x498
	// Line 1182, Address: 0x14bb44, Func Offset: 0x4a4
	// Line 1183, Address: 0x14bb4c, Func Offset: 0x4ac
	// Line 1184, Address: 0x14bb54, Func Offset: 0x4b4
	// Line 1185, Address: 0x14bb60, Func Offset: 0x4c0
	// Line 1186, Address: 0x14bb6c, Func Offset: 0x4cc
	// Line 1187, Address: 0x14bb74, Func Offset: 0x4d4
	// Line 1188, Address: 0x14bb80, Func Offset: 0x4e0
	// Line 1189, Address: 0x14bb8c, Func Offset: 0x4ec
	// Line 1190, Address: 0x14bb94, Func Offset: 0x4f4
	// Line 1195, Address: 0x14bb9c, Func Offset: 0x4fc
	// Line 1197, Address: 0x14bba4, Func Offset: 0x504
	// Line 1198, Address: 0x14bbb0, Func Offset: 0x510
	// Line 1199, Address: 0x14bbc0, Func Offset: 0x520
	// Line 1200, Address: 0x14bbcc, Func Offset: 0x52c
	// Line 1201, Address: 0x14bbd8, Func Offset: 0x538
	// Line 1202, Address: 0x14bbe4, Func Offset: 0x544
	// Line 1203, Address: 0x14bbec, Func Offset: 0x54c
	// Line 1204, Address: 0x14bbf8, Func Offset: 0x558
	// Line 1205, Address: 0x14bc04, Func Offset: 0x564
	// Line 1206, Address: 0x14bc0c, Func Offset: 0x56c
	// Line 1207, Address: 0x14bc14, Func Offset: 0x574
	// Line 1208, Address: 0x14bc34, Func Offset: 0x594
	// Line 1213, Address: 0x14bc40, Func Offset: 0x5a0
	// Line 1215, Address: 0x14bc48, Func Offset: 0x5a8
	// Line 1216, Address: 0x14bc54, Func Offset: 0x5b4
	// Line 1217, Address: 0x14bc84, Func Offset: 0x5e4
	// Line 1218, Address: 0x14bca0, Func Offset: 0x600
	// Line 1219, Address: 0x14bcb8, Func Offset: 0x618
	// Line 1220, Address: 0x14bce8, Func Offset: 0x648
	// Line 1221, Address: 0x14bd00, Func Offset: 0x660
	// Line 1222, Address: 0x14bd28, Func Offset: 0x688
	// Line 1223, Address: 0x14bd60, Func Offset: 0x6c0
	// Line 1224, Address: 0x14bd70, Func Offset: 0x6d0
	// Line 1225, Address: 0x14bd78, Func Offset: 0x6d8
	// Line 1227, Address: 0x14bd88, Func Offset: 0x6e8
	// Line 1228, Address: 0x14bda8, Func Offset: 0x708
	// Line 1229, Address: 0x14bdb8, Func Offset: 0x718
	// Line 1230, Address: 0x14bde0, Func Offset: 0x740
	// Line 1231, Address: 0x14bdf0, Func Offset: 0x750
	// Line 1232, Address: 0x14bdf8, Func Offset: 0x758
	// Line 1234, Address: 0x14be08, Func Offset: 0x768
	// Line 1235, Address: 0x14be14, Func Offset: 0x774
	// Line 1237, Address: 0x14be1c, Func Offset: 0x77c
	// Line 1238, Address: 0x14be28, Func Offset: 0x788
	// Line 1239, Address: 0x14be38, Func Offset: 0x798
	// Line 1240, Address: 0x14be4c, Func Offset: 0x7ac
	// Line 1241, Address: 0x14be5c, Func Offset: 0x7bc
	// Line 1242, Address: 0x14be6c, Func Offset: 0x7cc
	// Line 1244, Address: 0x14be78, Func Offset: 0x7d8
	// Line 1246, Address: 0x14be80, Func Offset: 0x7e0
	// Line 1247, Address: 0x14be9c, Func Offset: 0x7fc
	// Line 1248, Address: 0x14beb8, Func Offset: 0x818
	// Line 1249, Address: 0x14becc, Func Offset: 0x82c
	// Line 1250, Address: 0x14bee4, Func Offset: 0x844
	// Line 1252, Address: 0x14bf0c, Func Offset: 0x86c
	// Line 1253, Address: 0x14bf30, Func Offset: 0x890
	// Line 1254, Address: 0x14bf54, Func Offset: 0x8b4
	// Line 1255, Address: 0x14bf60, Func Offset: 0x8c0
	// Line 1256, Address: 0x14bf7c, Func Offset: 0x8dc
	// Line 1258, Address: 0x14bf88, Func Offset: 0x8e8
	// Line 1259, Address: 0x14bf90, Func Offset: 0x8f0
	// Line 1260, Address: 0x14bf9c, Func Offset: 0x8fc
	// Line 1263, Address: 0x14bfa0, Func Offset: 0x900
	// Line 1264, Address: 0x14bfac, Func Offset: 0x90c
	// Func End, Address: 0x14bfc8, Func Offset: 0x928
}

// 
// Start address: 0x14bfd0
void enEDBCtrlDamage(EnLOCAL_DATA* dp)
{
	int w;
	// Line 1268, Address: 0x14bfd0, Func Offset: 0
	// Line 1269, Address: 0x14bfe4, Func Offset: 0x14
	// Line 1271, Address: 0x14c004, Func Offset: 0x34
	// Line 1273, Address: 0x14c034, Func Offset: 0x64
	// Line 1274, Address: 0x14c040, Func Offset: 0x70
	// Line 1276, Address: 0x14c048, Func Offset: 0x78
	// Line 1277, Address: 0x14c064, Func Offset: 0x94
	// Line 1278, Address: 0x14c080, Func Offset: 0xb0
	// Line 1280, Address: 0x14c088, Func Offset: 0xb8
	// Line 1281, Address: 0x14c094, Func Offset: 0xc4
	// Line 1282, Address: 0x14c09c, Func Offset: 0xcc
	// Line 1283, Address: 0x14c0a8, Func Offset: 0xd8
	// Line 1285, Address: 0x14c0b0, Func Offset: 0xe0
	// Line 1286, Address: 0x14c0c0, Func Offset: 0xf0
	// Line 1288, Address: 0x14c0cc, Func Offset: 0xfc
	// Line 1291, Address: 0x14c0f0, Func Offset: 0x120
	// Line 1292, Address: 0x14c0fc, Func Offset: 0x12c
	// Line 1293, Address: 0x14c108, Func Offset: 0x138
	// Line 1294, Address: 0x14c114, Func Offset: 0x144
	// Line 1296, Address: 0x14c120, Func Offset: 0x150
	// Line 1298, Address: 0x14c13c, Func Offset: 0x16c
	// Line 1299, Address: 0x14c148, Func Offset: 0x178
	// Line 1300, Address: 0x14c154, Func Offset: 0x184
	// Line 1302, Address: 0x14c15c, Func Offset: 0x18c
	// Line 1303, Address: 0x14c16c, Func Offset: 0x19c
	// Line 1304, Address: 0x14c178, Func Offset: 0x1a8
	// Line 1305, Address: 0x14c18c, Func Offset: 0x1bc
	// Line 1306, Address: 0x14c198, Func Offset: 0x1c8
	// Line 1307, Address: 0x14c1a0, Func Offset: 0x1d0
	// Line 1308, Address: 0x14c1ac, Func Offset: 0x1dc
	// Line 1309, Address: 0x14c1cc, Func Offset: 0x1fc
	// Line 1310, Address: 0x14c1d8, Func Offset: 0x208
	// Line 1311, Address: 0x14c200, Func Offset: 0x230
	// Line 1312, Address: 0x14c20c, Func Offset: 0x23c
	// Line 1313, Address: 0x14c214, Func Offset: 0x244
	// Line 1316, Address: 0x14c220, Func Offset: 0x250
	// Line 1317, Address: 0x14c228, Func Offset: 0x258
	// Line 1318, Address: 0x14c234, Func Offset: 0x264
	// Line 1319, Address: 0x14c240, Func Offset: 0x270
	// Line 1320, Address: 0x14c26c, Func Offset: 0x29c
	// Line 1321, Address: 0x14c278, Func Offset: 0x2a8
	// Line 1322, Address: 0x14c280, Func Offset: 0x2b0
	// Line 1327, Address: 0x14c28c, Func Offset: 0x2bc
	// Line 1328, Address: 0x14c290, Func Offset: 0x2c0
	// Func End, Address: 0x14c2a8, Func Offset: 0x2d8
}

// 
// Start address: 0x14c2b0
void enEDBCtrlEscape2(EnLOCAL_DATA* dp)
{
	int t;
	int t;
	// Line 1332, Address: 0x14c2b0, Func Offset: 0
	// Line 1334, Address: 0x14c2c0, Func Offset: 0x10
	// Line 1335, Address: 0x14c2d0, Func Offset: 0x20
	// Line 1336, Address: 0x14c2e4, Func Offset: 0x34
	// Line 1337, Address: 0x14c2f0, Func Offset: 0x40
	// Line 1338, Address: 0x14c2f8, Func Offset: 0x48
	// Line 1339, Address: 0x14c304, Func Offset: 0x54
	// Line 1342, Address: 0x14c30c, Func Offset: 0x5c
	// Line 1344, Address: 0x14c338, Func Offset: 0x88
	// Line 1345, Address: 0x14c348, Func Offset: 0x98
	// Line 1346, Address: 0x14c35c, Func Offset: 0xac
	// Line 1347, Address: 0x14c36c, Func Offset: 0xbc
	// Line 1348, Address: 0x14c378, Func Offset: 0xc8
	// Line 1350, Address: 0x14c380, Func Offset: 0xd0
	// Line 1351, Address: 0x14c394, Func Offset: 0xe4
	// Line 1352, Address: 0x14c3a8, Func Offset: 0xf8
	// Line 1353, Address: 0x14c3b4, Func Offset: 0x104
	// Line 1354, Address: 0x14c3c4, Func Offset: 0x114
	// Line 1355, Address: 0x14c3d0, Func Offset: 0x120
	// Line 1356, Address: 0x14c3d8, Func Offset: 0x128
	// Line 1359, Address: 0x14c3e0, Func Offset: 0x130
	// Line 1360, Address: 0x14c3fc, Func Offset: 0x14c
	// Line 1364, Address: 0x14c47c, Func Offset: 0x1cc
	// Line 1367, Address: 0x14c494, Func Offset: 0x1e4
	// Line 1368, Address: 0x14c4ac, Func Offset: 0x1fc
	// Line 1369, Address: 0x14c4cc, Func Offset: 0x21c
	// Line 1371, Address: 0x14c4d4, Func Offset: 0x224
	// Line 1372, Address: 0x14c4e0, Func Offset: 0x230
	// Line 1373, Address: 0x14c4f8, Func Offset: 0x248
	// Line 1374, Address: 0x14c508, Func Offset: 0x258
	// Line 1375, Address: 0x14c518, Func Offset: 0x268
	// Line 1376, Address: 0x14c52c, Func Offset: 0x27c
	// Line 1377, Address: 0x14c538, Func Offset: 0x288
	// Line 1378, Address: 0x14c53c, Func Offset: 0x28c
	// Line 1379, Address: 0x14c550, Func Offset: 0x2a0
	// Line 1380, Address: 0x14c55c, Func Offset: 0x2ac
	// Line 1381, Address: 0x14c56c, Func Offset: 0x2bc
	// Line 1382, Address: 0x14c574, Func Offset: 0x2c4
	// Line 1383, Address: 0x14c57c, Func Offset: 0x2cc
	// Line 1384, Address: 0x14c58c, Func Offset: 0x2dc
	// Line 1386, Address: 0x14c594, Func Offset: 0x2e4
	// Line 1387, Address: 0x14c59c, Func Offset: 0x2ec
	// Line 1388, Address: 0x14c5a8, Func Offset: 0x2f8
	// Line 1391, Address: 0x14c5b0, Func Offset: 0x300
	// Line 1393, Address: 0x14c5b8, Func Offset: 0x308
	// Line 1394, Address: 0x14c5c8, Func Offset: 0x318
	// Line 1395, Address: 0x14c5d8, Func Offset: 0x328
	// Line 1397, Address: 0x14c5e0, Func Offset: 0x330
	// Line 1399, Address: 0x14c5e8, Func Offset: 0x338
	// Line 1400, Address: 0x14c5f4, Func Offset: 0x344
	// Line 1401, Address: 0x14c610, Func Offset: 0x360
	// Line 1402, Address: 0x14c620, Func Offset: 0x370
	// Line 1403, Address: 0x14c630, Func Offset: 0x380
	// Line 1405, Address: 0x14c63c, Func Offset: 0x38c
	// Line 1407, Address: 0x14c644, Func Offset: 0x394
	// Line 1408, Address: 0x14c678, Func Offset: 0x3c8
	// Line 1409, Address: 0x14c688, Func Offset: 0x3d8
	// Line 1410, Address: 0x14c690, Func Offset: 0x3e0
	// Line 1411, Address: 0x14c6ac, Func Offset: 0x3fc
	// Line 1412, Address: 0x14c6bc, Func Offset: 0x40c
	// Line 1413, Address: 0x14c6c8, Func Offset: 0x418
	// Line 1414, Address: 0x14c6d4, Func Offset: 0x424
	// Line 1416, Address: 0x14c6e0, Func Offset: 0x430
	// Line 1418, Address: 0x14c6e8, Func Offset: 0x438
	// Line 1419, Address: 0x14c6f4, Func Offset: 0x444
	// Line 1420, Address: 0x14c704, Func Offset: 0x454
	// Line 1421, Address: 0x14c714, Func Offset: 0x464
	// Line 1422, Address: 0x14c724, Func Offset: 0x474
	// Line 1426, Address: 0x14c72c, Func Offset: 0x47c
	// Line 1427, Address: 0x14c738, Func Offset: 0x488
	// Func End, Address: 0x14c74c, Func Offset: 0x49c
}

// 
// Start address: 0x14c750
void enEDBCtrlDead(EnLOCAL_DATA* dp)
{
	// Line 1431, Address: 0x14c750, Func Offset: 0
	// Line 1432, Address: 0x14c760, Func Offset: 0x10
	// Line 1433, Address: 0x14c76c, Func Offset: 0x1c
	// Line 1434, Address: 0x14c774, Func Offset: 0x24
	// Line 1435, Address: 0x14c780, Func Offset: 0x30
	// Line 1436, Address: 0x14c788, Func Offset: 0x38
	// Line 1437, Address: 0x14c794, Func Offset: 0x44
	// Line 1439, Address: 0x14c7a0, Func Offset: 0x50
	// Line 1440, Address: 0x14c7b4, Func Offset: 0x64
	// Line 1441, Address: 0x14c7bc, Func Offset: 0x6c
	// Line 1443, Address: 0x14c7d4, Func Offset: 0x84
	// Func End, Address: 0x14c7e8, Func Offset: 0x98
}

// 
// Start address: 0x14c7f0
int enEDBCheckArriveCorner(EnLOCAL_DATA* dp)
{
	float d;
	int i;
	// Line 1453, Address: 0x14c7f0, Func Offset: 0
	// Line 1454, Address: 0x14c7fc, Func Offset: 0xc
	// Line 1455, Address: 0x14c834, Func Offset: 0x44
	// Line 1456, Address: 0x14c858, Func Offset: 0x68
	// Line 1457, Address: 0x14c86c, Func Offset: 0x7c
	// Line 1458, Address: 0x14c870, Func Offset: 0x80
	// Func End, Address: 0x14c878, Func Offset: 0x88
}

// 
// Start address: 0x14c880
int enEDBGetNearMeat(EnLOCAL_DATA* dp)
{
	float vec[4];
	float tpos[4];
	float pos[4];
	float* ppos;
	float dm;
	float d;
	float a;
	int m;
	int j;
	int i;
	// Line 1489, Address: 0x14c880, Func Offset: 0
	// Line 1492, Address: 0x14c8a4, Func Offset: 0x24
	// Line 1494, Address: 0x14c8b0, Func Offset: 0x30
	// Line 1495, Address: 0x14c8bc, Func Offset: 0x3c
	// Line 1496, Address: 0x14c8c0, Func Offset: 0x40
	// Line 1497, Address: 0x14c8cc, Func Offset: 0x4c
	// Line 1498, Address: 0x14c8d0, Func Offset: 0x50
	// Line 1499, Address: 0x14c8e8, Func Offset: 0x68
	// Line 1500, Address: 0x14c904, Func Offset: 0x84
	// Line 1501, Address: 0x14c910, Func Offset: 0x90
	// Line 1502, Address: 0x14c928, Func Offset: 0xa8
	// Line 1503, Address: 0x14c940, Func Offset: 0xc0
	// Line 1504, Address: 0x14c954, Func Offset: 0xd4
	// Line 1505, Address: 0x14c96c, Func Offset: 0xec
	// Line 1506, Address: 0x14c9b0, Func Offset: 0x130
	// Line 1507, Address: 0x14c9b4, Func Offset: 0x134
	// Line 1508, Address: 0x14c9c4, Func Offset: 0x144
	// Line 1509, Address: 0x14c9c8, Func Offset: 0x148
	// Line 1510, Address: 0x14c9cc, Func Offset: 0x14c
	// Line 1512, Address: 0x14c9d8, Func Offset: 0x158
	// Line 1513, Address: 0x14c9ec, Func Offset: 0x16c
	// Line 1514, Address: 0x14c9f8, Func Offset: 0x178
	// Line 1515, Address: 0x14ca04, Func Offset: 0x184
	// Line 1517, Address: 0x14ca14, Func Offset: 0x194
	// Line 1518, Address: 0x14ca18, Func Offset: 0x198
	// Func End, Address: 0x14ca40, Func Offset: 0x1c0
}

// 
// Start address: 0x14ca40
void enEDBClearMark(EnLOCAL_DATA* dp)
{
	int i;
	// Line 1524, Address: 0x14ca40, Func Offset: 0
	// Line 1525, Address: 0x14ca4c, Func Offset: 0xc
	// Line 1526, Address: 0x14ca58, Func Offset: 0x18
	// Line 1527, Address: 0x14ca6c, Func Offset: 0x2c
	// Line 1528, Address: 0x14ca70, Func Offset: 0x30
	// Func End, Address: 0x14ca78, Func Offset: 0x38
}

// 
// Start address: 0x14ca80
void enEDBSetMark(EnLOCAL_DATA* dp, int mark)
{
	// Line 1533, Address: 0x14ca80, Func Offset: 0
	// Line 1534, Address: 0x14caa4, Func Offset: 0x24
	// Line 1535, Address: 0x14cab0, Func Offset: 0x30
	// Func End, Address: 0x14cab8, Func Offset: 0x38
}

// 
// Start address: 0x14cac0
int enEDBCheckMark(EnLOCAL_DATA* dp, int mark)
{
	int i;
	// Line 1542, Address: 0x14cac0, Func Offset: 0
	// Line 1543, Address: 0x14cacc, Func Offset: 0xc
	// Line 1544, Address: 0x14cae8, Func Offset: 0x28
	// Line 1545, Address: 0x14cafc, Func Offset: 0x3c
	// Line 1546, Address: 0x14cb00, Func Offset: 0x40
	// Func End, Address: 0x14cb08, Func Offset: 0x48
}

// 
// Start address: 0x14cb10
int enEDBGetDamageMotion(EnLOCAL_DATA* dp)
{
	float a;
	int dd;
	int id;
	int m;
	// Line 1553, Address: 0x14cb10, Func Offset: 0
	// Line 1557, Address: 0x14cb24, Func Offset: 0x14
	// Line 1558, Address: 0x14cb48, Func Offset: 0x38
	// Line 1559, Address: 0x14cb78, Func Offset: 0x68
	// Line 1561, Address: 0x14cb7c, Func Offset: 0x6c
	// Line 1562, Address: 0x14cbbc, Func Offset: 0xac
	// Line 1564, Address: 0x14cbc0, Func Offset: 0xb0
	// Line 1565, Address: 0x14cbc4, Func Offset: 0xb4
	// Line 1570, Address: 0x14cbec, Func Offset: 0xdc
	// Line 1571, Address: 0x14cbf0, Func Offset: 0xe0
	// Line 1579, Address: 0x14cbf8, Func Offset: 0xe8
	// Line 1580, Address: 0x14cbfc, Func Offset: 0xec
	// Line 1585, Address: 0x14cc04, Func Offset: 0xf4
	// Line 1586, Address: 0x14cc0c, Func Offset: 0xfc
	// Line 1589, Address: 0x14cc14, Func Offset: 0x104
	// Line 1590, Address: 0x14cc18, Func Offset: 0x108
	// Line 1591, Address: 0x14cc20, Func Offset: 0x110
	// Line 1592, Address: 0x14cc24, Func Offset: 0x114
	// Line 1594, Address: 0x14cc2c, Func Offset: 0x11c
	// Line 1595, Address: 0x14cc30, Func Offset: 0x120
	// Line 1597, Address: 0x14cc40, Func Offset: 0x130
	// Line 1598, Address: 0x14cc44, Func Offset: 0x134
	// Func End, Address: 0x14cc5c, Func Offset: 0x14c
}

// 
// Start address: 0x14cc60
int enEDBSetDamage(EnLOCAL_DATA* dp)
{
	// Line 1603, Address: 0x14cc60, Func Offset: 0
	// Line 1604, Address: 0x14cc70, Func Offset: 0x10
	// Line 1605, Address: 0x14cc80, Func Offset: 0x20
	// Line 1606, Address: 0x14cc8c, Func Offset: 0x2c
	// Line 1607, Address: 0x14cc94, Func Offset: 0x34
	// Line 1608, Address: 0x14ccb4, Func Offset: 0x54
	// Line 1610, Address: 0x14ccc0, Func Offset: 0x60
	// Line 1612, Address: 0x14cccc, Func Offset: 0x6c
	// Line 1613, Address: 0x14ccd8, Func Offset: 0x78
	// Line 1614, Address: 0x14cce4, Func Offset: 0x84
	// Line 1616, Address: 0x14cd00, Func Offset: 0xa0
	// Line 1617, Address: 0x14cd18, Func Offset: 0xb8
	// Line 1619, Address: 0x14cd2c, Func Offset: 0xcc
	// Line 1620, Address: 0x14cd44, Func Offset: 0xe4
	// Line 1622, Address: 0x14cd78, Func Offset: 0x118
	// Line 1624, Address: 0x14cd90, Func Offset: 0x130
	// Line 1625, Address: 0x14cdc0, Func Offset: 0x160
	// Line 1627, Address: 0x14cdcc, Func Offset: 0x16c
	// Line 1628, Address: 0x14cde8, Func Offset: 0x188
	// Line 1635, Address: 0x14ce18, Func Offset: 0x1b8
	// Line 1637, Address: 0x14ce24, Func Offset: 0x1c4
	// Line 1638, Address: 0x14ce2c, Func Offset: 0x1cc
	// Line 1639, Address: 0x14ce30, Func Offset: 0x1d0
	// Func End, Address: 0x14ce44, Func Offset: 0x1e4
}

// 
// Start address: 0x14ce50
int enEDBCanSeePlayer(EnLOCAL_DATA* dp, float angle)
{
	float vec[4];
	float a;
	float dist;
	float* ppos;
	// Line 1644, Address: 0x14ce50, Func Offset: 0
	// Line 1645, Address: 0x14ce74, Func Offset: 0x24
	// Line 1647, Address: 0x14ce80, Func Offset: 0x30
	// Line 1648, Address: 0x14ce9c, Func Offset: 0x4c
	// Line 1650, Address: 0x14ceb4, Func Offset: 0x64
	// Line 1651, Address: 0x14cedc, Func Offset: 0x8c
	// Line 1652, Address: 0x14cef8, Func Offset: 0xa8
	// Line 1654, Address: 0x14cf04, Func Offset: 0xb4
	// Line 1655, Address: 0x14cf2c, Func Offset: 0xdc
	// Line 1656, Address: 0x14cf58, Func Offset: 0x108
	// Line 1657, Address: 0x14cf6c, Func Offset: 0x11c
	// Line 1658, Address: 0x14cf80, Func Offset: 0x130
	// Line 1659, Address: 0x14cfcc, Func Offset: 0x17c
	// Line 1660, Address: 0x14d01c, Func Offset: 0x1cc
	// Line 1661, Address: 0x14d028, Func Offset: 0x1d8
	// Line 1662, Address: 0x14d054, Func Offset: 0x204
	// Line 1663, Address: 0x14d058, Func Offset: 0x208
	// Func End, Address: 0x14d07c, Func Offset: 0x22c
}

// 
// Start address: 0x14d080
void enEDBAnimeSet(EnLOCAL_DATA* dp, int anim)
{
	// Line 1667, Address: 0x14d080, Func Offset: 0
	// Line 1668, Address: 0x14d098, Func Offset: 0x18
	// Line 1669, Address: 0x14d0a4, Func Offset: 0x24
	// Line 1670, Address: 0x14d0ac, Func Offset: 0x2c
	// Line 1673, Address: 0x14d0b4, Func Offset: 0x34
	// Line 1674, Address: 0x14d0f4, Func Offset: 0x74
	// Line 1675, Address: 0x14d118, Func Offset: 0x98
	// Func End, Address: 0x14d130, Func Offset: 0xb0
}

// 
// Start address: 0x14d130
void enEDBAnimeReset(EnLOCAL_DATA* dp, int anim)
{
	// Line 1679, Address: 0x14d130, Func Offset: 0
	// Line 1681, Address: 0x14d148, Func Offset: 0x18
	// Line 1682, Address: 0x14d188, Func Offset: 0x58
	// Line 1683, Address: 0x14d1ac, Func Offset: 0x7c
	// Func End, Address: 0x14d1c4, Func Offset: 0x94
}

// 
// Start address: 0x14d1d0
void enEDBAnimeExec(EnLOCAL_DATA* dp)
{
	EDB_ANM_DATA2 edb_anm_data2[6];
	EDB_ANM_DATA1 edb_anm_data1[6];
	int d;
	int of;
	// Line 1687, Address: 0x14d1d0, Func Offset: 0
	// Line 1688, Address: 0x14d1e8, Func Offset: 0x18
	// Line 1690, Address: 0x14d1ec, Func Offset: 0x1c
	// Line 1691, Address: 0x14d200, Func Offset: 0x30
	// Line 1693, Address: 0x14d228, Func Offset: 0x58
	// Line 1695, Address: 0x14d254, Func Offset: 0x84
	// Line 1697, Address: 0x14d258, Func Offset: 0x88
	// Line 1698, Address: 0x14d264, Func Offset: 0x94
	// Line 1701, Address: 0x14d2ac, Func Offset: 0xdc
	// Line 1702, Address: 0x14d2c0, Func Offset: 0xf0
	// Line 1703, Address: 0x14d2cc, Func Offset: 0xfc
	// Line 1704, Address: 0x14d2d8, Func Offset: 0x108
	// Line 1705, Address: 0x14d2e0, Func Offset: 0x110
	// Line 1706, Address: 0x14d2e8, Func Offset: 0x118
	// Line 1709, Address: 0x14d2f0, Func Offset: 0x120
	// Line 1711, Address: 0x14d2f8, Func Offset: 0x128
	// Line 1713, Address: 0x14d2fc, Func Offset: 0x12c
	// Line 1715, Address: 0x14d300, Func Offset: 0x130
	// Line 1717, Address: 0x14d304, Func Offset: 0x134
	// Line 1719, Address: 0x14d308, Func Offset: 0x138
	// Line 1723, Address: 0x14d30c, Func Offset: 0x13c
	// Line 1736, Address: 0x14d348, Func Offset: 0x178
	// Line 1738, Address: 0x14d3a0, Func Offset: 0x1d0
	// Line 1739, Address: 0x14d3b0, Func Offset: 0x1e0
	// Line 1740, Address: 0x14d3e0, Func Offset: 0x210
	// Line 1743, Address: 0x14d3f0, Func Offset: 0x220
	// Line 1745, Address: 0x14d3f8, Func Offset: 0x228
	// Line 1747, Address: 0x14d3fc, Func Offset: 0x22c
	// Line 1749, Address: 0x14d400, Func Offset: 0x230
	// Line 1751, Address: 0x14d404, Func Offset: 0x234
	// Line 1753, Address: 0x14d408, Func Offset: 0x238
	// Line 1757, Address: 0x14d40c, Func Offset: 0x23c
	// Line 1768, Address: 0x14d430, Func Offset: 0x260
	// Line 1769, Address: 0x14d464, Func Offset: 0x294
	// Line 1772, Address: 0x14d474, Func Offset: 0x2a4
	// Line 1774, Address: 0x14d47c, Func Offset: 0x2ac
	// Line 1786, Address: 0x14d554, Func Offset: 0x384
	// Line 1787, Address: 0x14d564, Func Offset: 0x394
	// Line 1789, Address: 0x14d56c, Func Offset: 0x39c
	// Line 1793, Address: 0x14d588, Func Offset: 0x3b8
	// Line 1795, Address: 0x14d5a4, Func Offset: 0x3d4
	// Line 1797, Address: 0x14d5b0, Func Offset: 0x3e0
	// Line 1800, Address: 0x14d5b8, Func Offset: 0x3e8
	// Line 1811, Address: 0x14d63c, Func Offset: 0x46c
	// Line 1812, Address: 0x14d648, Func Offset: 0x478
	// Line 1813, Address: 0x14d664, Func Offset: 0x494
	// Line 1814, Address: 0x14d66c, Func Offset: 0x49c
	// Line 1818, Address: 0x14d688, Func Offset: 0x4b8
	// Line 1821, Address: 0x14d690, Func Offset: 0x4c0
	// Line 1832, Address: 0x14d714, Func Offset: 0x544
	// Line 1833, Address: 0x14d720, Func Offset: 0x550
	// Line 1834, Address: 0x14d73c, Func Offset: 0x56c
	// Line 1835, Address: 0x14d744, Func Offset: 0x574
	// Line 1841, Address: 0x14d760, Func Offset: 0x590
	// Func End, Address: 0x14d77c, Func Offset: 0x5ac
}

// 
// Start address: 0x14d780
void enEDBSetGunFire(EnLOCAL_DATA* dp)
{
	float vec2[4];
	float vec1[4];
	// Line 1845, Address: 0x14d780, Func Offset: 0
	// Line 1847, Address: 0x14d790, Func Offset: 0x10
	// Line 1848, Address: 0x14d7a4, Func Offset: 0x24
	// Line 1849, Address: 0x14d7b8, Func Offset: 0x38
	// Line 1850, Address: 0x14d7d0, Func Offset: 0x50
	// Line 1851, Address: 0x14d7f0, Func Offset: 0x70
	// Line 1852, Address: 0x14d808, Func Offset: 0x88
	// Line 1853, Address: 0x14d820, Func Offset: 0xa0
	// Line 1854, Address: 0x14d834, Func Offset: 0xb4
	// Line 1855, Address: 0x14d844, Func Offset: 0xc4
	// Line 1856, Address: 0x14d85c, Func Offset: 0xdc
	// Line 1857, Address: 0x14d860, Func Offset: 0xe0
	// Line 1858, Address: 0x14d880, Func Offset: 0x100
	// Line 1859, Address: 0x14d888, Func Offset: 0x108
	// Func End, Address: 0x14d89c, Func Offset: 0x11c
}

// 
// Start address: 0x14d8a0
void enEDBSetCartridge(EnLOCAL_DATA* dp)
{
	float vec[4];
	// Line 1863, Address: 0x14d8a0, Func Offset: 0
	// Line 1865, Address: 0x14d8b0, Func Offset: 0x10
	// Line 1866, Address: 0x14d8c4, Func Offset: 0x24
	// Line 1867, Address: 0x14d8dc, Func Offset: 0x3c
	// Line 1868, Address: 0x14d8f4, Func Offset: 0x54
	// Line 1869, Address: 0x14d90c, Func Offset: 0x6c
	// Line 1870, Address: 0x14d928, Func Offset: 0x88
	// Line 1871, Address: 0x14d930, Func Offset: 0x90
	// Func End, Address: 0x14d944, Func Offset: 0xa4
}

// 
// Start address: 0x14d950
void enEDBAutoRecovery(EnLOCAL_DATA* dp)
{
	short recover_rate[5];
	// Line 1888, Address: 0x14d950, Func Offset: 0
	// Line 1889, Address: 0x14d960, Func Offset: 0x10
	// Line 1896, Address: 0x14d97c, Func Offset: 0x2c
	// Line 1897, Address: 0x14d9a8, Func Offset: 0x58
	// Func End, Address: 0x14d9bc, Func Offset: 0x6c
}

// 
// Start address: 0x14d9c0
float enEDBGetSpeed(EnLOCAL_DATA* dp)
{
	// Line 1902, Address: 0x14d9c0, Func Offset: 0
	// Line 1903, Address: 0x14d9e0, Func Offset: 0x20
	// Line 1904, Address: 0x14d9e4, Func Offset: 0x24
	// Func End, Address: 0x14d9ec, Func Offset: 0x2c
}

// 
// Start address: 0x14d9f0
float enEDBGetWalkSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1908, Address: 0x14d9f0, Func Offset: 0
	// Line 1909, Address: 0x14da00, Func Offset: 0x10
	// Line 1916, Address: 0x14da1c, Func Offset: 0x2c
	// Line 1917, Address: 0x14da38, Func Offset: 0x48
	// Line 1918, Address: 0x14da58, Func Offset: 0x68
	// Line 1919, Address: 0x14da68, Func Offset: 0x78
	// Func End, Address: 0x14da7c, Func Offset: 0x8c
}

// 
// Start address: 0x14da80
float enEDBGetRunSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1923, Address: 0x14da80, Func Offset: 0
	// Line 1924, Address: 0x14da90, Func Offset: 0x10
	// Line 1931, Address: 0x14daac, Func Offset: 0x2c
	// Line 1932, Address: 0x14dac8, Func Offset: 0x48
	// Line 1933, Address: 0x14dae8, Func Offset: 0x68
	// Line 1934, Address: 0x14daf8, Func Offset: 0x78
	// Func End, Address: 0x14db0c, Func Offset: 0x8c
}

// 
// Start address: 0x14db10
float enEDBGetHoldSpeed(EnLOCAL_DATA* dp)
{
	float speed_rate[5];
	float r;
	// Line 1938, Address: 0x14db10, Func Offset: 0
	// Line 1940, Address: 0x14db24, Func Offset: 0x14
	// Line 1941, Address: 0x14db30, Func Offset: 0x20
	// Line 1942, Address: 0x14db38, Func Offset: 0x28
	// Line 1943, Address: 0x14db40, Func Offset: 0x30
	// Line 1950, Address: 0x14db5c, Func Offset: 0x4c
	// Line 1951, Address: 0x14db70, Func Offset: 0x60
	// Line 1952, Address: 0x14dba4, Func Offset: 0x94
	// Line 1954, Address: 0x14dbac, Func Offset: 0x9c
	// Line 1955, Address: 0x14dbcc, Func Offset: 0xbc
	// Line 1956, Address: 0x14dbd0, Func Offset: 0xc0
	// Func End, Address: 0x14dbe8, Func Offset: 0xd8
}

// 
// Start address: 0x14dbf0
float enEDBGetAimingSpeed()
{
	float speed_rate[5];
	// Line 1960, Address: 0x14dbf0, Func Offset: 0
	// Line 1961, Address: 0x14dbf8, Func Offset: 0x8
	// Line 1968, Address: 0x14dc14, Func Offset: 0x24
	// Line 1969, Address: 0x14dc38, Func Offset: 0x48
	// Func End, Address: 0x14dc48, Func Offset: 0x58
}

// 
// Start address: 0x14dc50
int enEDBGetDefAfford()
{
	short afford[5];
	// Line 1973, Address: 0x14dc50, Func Offset: 0
	// Line 1974, Address: 0x14dc58, Func Offset: 0x8
	// Line 1981, Address: 0x14dc74, Func Offset: 0x24
	// Line 1982, Address: 0x14dc88, Func Offset: 0x38
	// Func End, Address: 0x14dc98, Func Offset: 0x48
}

// 
// Start address: 0x14dca0
int enEDBGetPunchLimit()
{
	char limit[5];
	// Line 1986, Address: 0x14dca0, Func Offset: 0
	// Line 1987, Address: 0x14dca8, Func Offset: 0x8
	// Line 1994, Address: 0x14dcc4, Func Offset: 0x24
	// Line 1995, Address: 0x14dcd4, Func Offset: 0x34
	// Func End, Address: 0x14dce4, Func Offset: 0x44
}

// 
// Start address: 0x14dcf0
void enEDBAddAfford(EnLOCAL_DATA* dp)
{
	int max;
	// Line 1999, Address: 0x14dcf0, Func Offset: 0
	// Line 2000, Address: 0x14dd00, Func Offset: 0x10
	// Line 2001, Address: 0x14dd08, Func Offset: 0x18
	// Line 2002, Address: 0x14dd28, Func Offset: 0x38
	// Line 2004, Address: 0x14dd2c, Func Offset: 0x3c
	// Func End, Address: 0x14dd40, Func Offset: 0x50
}

// 
// Start address: 0x14dd40
void enNIKInitData(EnLOCAL_DATA* dp)
{
	// Line 2012, Address: 0x14dd40, Func Offset: 0
	// Line 2013, Address: 0x14dd50, Func Offset: 0x10
	// Line 2014, Address: 0x14dd64, Func Offset: 0x24
	// Line 2015, Address: 0x14dd94, Func Offset: 0x54
	// Line 2016, Address: 0x14dd9c, Func Offset: 0x5c
	// Line 2017, Address: 0x14dda8, Func Offset: 0x68
	// Line 2018, Address: 0x14ddb0, Func Offset: 0x70
	// Line 2019, Address: 0x14ddbc, Func Offset: 0x7c
	// Func End, Address: 0x14ddd0, Func Offset: 0x90
}

// 
// Start address: 0x14ddd0
void enNIKCtrlMain(EnLOCAL_DATA* dp)
{
	float vec[4];
	// Line 2025, Address: 0x14ddd0, Func Offset: 0
	// Line 2027, Address: 0x14dde0, Func Offset: 0x10
	// Line 2028, Address: 0x14ddf0, Func Offset: 0x20
	// Line 2029, Address: 0x14de1c, Func Offset: 0x4c
	// Line 2030, Address: 0x14de38, Func Offset: 0x68
	// Line 2031, Address: 0x14de3c, Func Offset: 0x6c
	// Line 2032, Address: 0x14de50, Func Offset: 0x80
	// Line 2034, Address: 0x14de5c, Func Offset: 0x8c
	// Line 2035, Address: 0x14de90, Func Offset: 0xc0
	// Line 2036, Address: 0x14dea4, Func Offset: 0xd4
	// Line 2037, Address: 0x14dee4, Func Offset: 0x114
	// Line 2038, Address: 0x14def8, Func Offset: 0x128
	// Line 2039, Address: 0x14df10, Func Offset: 0x140
	// Line 2040, Address: 0x14df30, Func Offset: 0x160
	// Line 2041, Address: 0x14df54, Func Offset: 0x184
	// Line 2045, Address: 0x14df88, Func Offset: 0x1b8
	// Line 2060, Address: 0x14df94, Func Offset: 0x1c4
	// Line 2061, Address: 0x14dfa0, Func Offset: 0x1d0
	// Line 2062, Address: 0x14dfe8, Func Offset: 0x218
	// Line 2063, Address: 0x14dff8, Func Offset: 0x228
	// Line 2064, Address: 0x14e000, Func Offset: 0x230
	// Line 2066, Address: 0x14e00c, Func Offset: 0x23c
	// Func End, Address: 0x14e020, Func Offset: 0x250
}

