typedef struct EnLOCAL_DATA;
typedef struct SubCharacter;
typedef struct EnBOS_DATA;
typedef struct EnSCU_DATA;
typedef struct shSkelton;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct _anon0;
typedef struct EnPATH_DATA;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct EnANIME_DATA;
typedef struct SPACK_OT_DATA;
typedef struct EnRED_DATA;
typedef struct EnCOMMUNICATION;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct EnFORBIDDENAREA;
typedef struct EnINS_DATA;
typedef struct EnIKE_DATA;
typedef struct SPACK_ENV_DATA;
typedef struct EnSOUND_QUEUE;
typedef struct EnLOCAL_WORK;
typedef struct EnARM_DATA;
typedef struct EnTYU_DATA;
typedef struct _CL_VHIT_WALL;
typedef struct SPACK_STATIC_DATA;
typedef struct EnNSE_DATA;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct SPACK_DATA;
typedef struct _anon1;
typedef union _anon2;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;
typedef struct EnMKN_DATA;
typedef struct _anon4;
typedef struct EnEDB_DATA;
typedef struct _anon5;
typedef struct EnPAP_DATA;
typedef struct EnNIK_DATA;

typedef void(*type_29)(EnLOCAL_DATA*);
typedef void(*type_36)(EnLOCAL_DATA*);
typedef void(*type_43)(SubCharacter*);
typedef void(*type_46)(SubCharacter*);

typedef unsigned char type_0[4];
typedef short type_1[5];
typedef float type_2[5];
typedef unsigned int type_3[255];
typedef unsigned int type_4[32];
typedef unsigned char type_5[14];
typedef unsigned char type_6[4];
typedef float type_7[5];
typedef float type_8[5];
typedef char type_9[4];
typedef char type_10[4];
typedef char type_11[4];
typedef char type_12[4];
typedef float type_13[5];
typedef char type_14[4];
typedef unsigned char type_15[97];
typedef float type_16[4];
typedef float type_17[4];
typedef float type_18[4][4];
typedef float type_19[5];
typedef float type_20[5];
typedef EnLOCAL_DATA type_21[32];
typedef EnCOMMUNICATION type_22[8];
typedef float type_23[4][4];
typedef EnFORBIDDENAREA type_24[2];
typedef EnSOUND_QUEUE type_25[8];
typedef EnANIME_DATA type_26[33];
typedef unsigned char type_27[20];
typedef unsigned long type_28[4];
typedef void(*type_30)(EnLOCAL_DATA*)[6];
typedef float type_31[5];
typedef float type_32[4];
typedef unsigned char type_33[14];
typedef float type_34[4][4];
typedef shAttackInfo type_35[66];
typedef char type_37[3];
typedef void(*type_38)(EnLOCAL_DATA*)[10];
typedef short type_39[5];
typedef int type_40[4];
typedef unsigned char type_41[69];
typedef float type_42[4];
typedef float type_44[4];
typedef float type_45[4][4];
typedef short type_47[5];

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

struct SPACK_OT_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
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

struct SPACK_ENV_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int pad1;
	unsigned short VifQwc;
	unsigned char pad2;
	unsigned char VifDirect;
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

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
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

struct SPACK_DATA
{
	SPACK_OT_DATA** ot_top;
	SPACK_OT_DATA** ot_last;
	unsigned int ot_size;
	unsigned int ot_width;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int envid;
	SPACK_OT_DATA* dma_top;
	SPACK_OT_DATA* dmabuf_pos;
	SPACK_ENV_DATA* env_top;
	unsigned long* pk_last;
	unsigned long* pos;
	short* ot_max;
	<unknown fundamental type (0xa510)>* packet;
	SPACK_STATIC_DATA* ps_top;
	unsigned long* pgiftag;
	unsigned long giftag_b;
	unsigned int flag;
	void* kick_top;
	void* old_lastpos;
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

struct _anon5
{
	float pos[4];
	float zdir[4];
	float ydir[4];
	float rot[4];
	float clip_volume[4];
	float world_view[4][4];
	float view_screen[4][4];
	float view_clip[4][4];
	float world_screen[4][4];
	float world_clip[4][4];
	float clip_screen[4][4];
	float camera_pam[4];
	float screen_pam1[4];
	float screen_pam2[4];
	float rot_zdir[4];
	float rot_ydir[4];
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
EnANIME_DATA EnPAPAnime[33];
EnLOCAL_WORK enLocalWork;
_anon0 game_flag;
SPACK_DATA spack;
_anon5 cam0;

void enPAPInitData(EnLOCAL_DATA* dp);
void enPAPCtrlMain(EnLOCAL_DATA* dp);
void enPAPCtrlAutomatic(EnLOCAL_DATA* dp);
void enPAPCtrlSleep(EnLOCAL_DATA* dp);
void enPAPCtrlGoPlayable(EnLOCAL_DATA* dp);
void enPAPCtrlEvent(EnLOCAL_DATA* dp);
void enPAPCtrlHand();
void enPAPCtrlWander(EnLOCAL_DATA* dp);
void enPAPCtrlStraight(EnLOCAL_DATA* dp);
void enPAPCtrlChase(EnLOCAL_DATA* dp);
void enPAPCtrlRush(EnLOCAL_DATA* dp);
void enPAPCtrlAttack(EnLOCAL_DATA* dp);
void enPAPCtrlDamage(EnLOCAL_DATA* dp);
void enPAPCtrlConfuse(EnLOCAL_DATA* dp);
void enPAPCtrlDown(EnLOCAL_DATA* dp);
void enPAPCtrlLastMove(EnLOCAL_DATA* dp);
void enPAPMoveAngle(EnLOCAL_DATA* dp);
int enPAPCanSeePlayer(EnLOCAL_DATA* dp);
void enPAPAnimeSet(EnLOCAL_DATA* dp, int anim);
void enPAPAnimeExec(EnLOCAL_DATA* dp);
void enPAPAutoRecovery(EnLOCAL_DATA* dp);
float enPAPGetWalkSpeed(EnLOCAL_DATA* dp);
float enPAPGetRotSpeed();
float enPAPGetTurnSpeed(EnLOCAL_DATA* dp);
void enPAPSetDownTime(EnLOCAL_DATA* dp);
void enPAPSetMoveCount(EnLOCAL_DATA* dp);
void enPAPSetDc(EnLOCAL_DATA* dp);
void enPAPDrawBoad(EnLOCAL_DATA* dp);
void enPAPSoundSigns(EnLOCAL_DATA* dp);

// 
// Start address: 0x15a060
void enPAPInitData(EnLOCAL_DATA* dp)
{
	int mode;
	float endurance2[5];
	float vitarity2[5];
	float endurance[5];
	float vitarity[5];
	// Line 130, Address: 0x15a060, Func Offset: 0
	// Line 131, Address: 0x15a070, Func Offset: 0x10
	// Line 138, Address: 0x15a08c, Func Offset: 0x2c
	// Line 146, Address: 0x15a0a8, Func Offset: 0x48
	// Line 153, Address: 0x15a0c4, Func Offset: 0x64
	// Line 160, Address: 0x15a0e0, Func Offset: 0x80
	// Line 162, Address: 0x15a0e8, Func Offset: 0x88
	// Line 163, Address: 0x15a0f0, Func Offset: 0x90
	// Line 165, Address: 0x15a124, Func Offset: 0xc4
	// Line 166, Address: 0x15a134, Func Offset: 0xd4
	// Line 167, Address: 0x15a14c, Func Offset: 0xec
	// Line 168, Address: 0x15a154, Func Offset: 0xf4
	// Line 170, Address: 0x15a15c, Func Offset: 0xfc
	// Line 171, Address: 0x15a160, Func Offset: 0x100
	// Line 172, Address: 0x15a168, Func Offset: 0x108
	// Line 173, Address: 0x15a178, Func Offset: 0x118
	// Line 174, Address: 0x15a1a4, Func Offset: 0x144
	// Line 175, Address: 0x15a1ac, Func Offset: 0x14c
	// Line 176, Address: 0x15a1b8, Func Offset: 0x158
	// Line 177, Address: 0x15a1c0, Func Offset: 0x160
	// Line 179, Address: 0x15a1c8, Func Offset: 0x168
	// Line 180, Address: 0x15a1d8, Func Offset: 0x178
	// Line 181, Address: 0x15a1e4, Func Offset: 0x184
	// Line 183, Address: 0x15a1ec, Func Offset: 0x18c
	// Line 184, Address: 0x15a1f8, Func Offset: 0x198
	// Line 185, Address: 0x15a210, Func Offset: 0x1b0
	// Line 189, Address: 0x15a214, Func Offset: 0x1b4
	// Line 190, Address: 0x15a240, Func Offset: 0x1e0
	// Line 191, Address: 0x15a248, Func Offset: 0x1e8
	// Line 192, Address: 0x15a258, Func Offset: 0x1f8
	// Line 193, Address: 0x15a268, Func Offset: 0x208
	// Line 194, Address: 0x15a27c, Func Offset: 0x21c
	// Line 196, Address: 0x15a288, Func Offset: 0x228
	// Func End, Address: 0x15a29c, Func Offset: 0x23c
}

// 
// Start address: 0x15a2a0
void enPAPCtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlPAPFunc)(EnLOCAL_DATA*)[6];
	// Line 202, Address: 0x15a2a0, Func Offset: 0
	// Line 203, Address: 0x15a2a8, Func Offset: 0x8
	// Line 212, Address: 0x15a2c4, Func Offset: 0x24
	// Line 213, Address: 0x15a2dc, Func Offset: 0x3c
	// Func End, Address: 0x15a2ec, Func Offset: 0x4c
}

// 
// Start address: 0x15a2f0
void enPAPCtrlAutomatic(EnLOCAL_DATA* dp)
{
	void(*enCtrlPAPSubFunc)(EnLOCAL_DATA*)[10];
	// Line 217, Address: 0x15a2f0, Func Offset: 0
	// Line 218, Address: 0x15a300, Func Offset: 0x10
	// Line 231, Address: 0x15a324, Func Offset: 0x34
	// Line 233, Address: 0x15a330, Func Offset: 0x40
	// Line 236, Address: 0x15a34c, Func Offset: 0x5c
	// Line 238, Address: 0x15a358, Func Offset: 0x68
	// Line 239, Address: 0x15a364, Func Offset: 0x74
	// Line 241, Address: 0x15a398, Func Offset: 0xa8
	// Line 243, Address: 0x15a3a4, Func Offset: 0xb4
	// Func End, Address: 0x15a3b8, Func Offset: 0xc8
}

// 
// Start address: 0x15a3c0
void enPAPCtrlSleep(EnLOCAL_DATA* dp)
{
	// Line 247, Address: 0x15a3c0, Func Offset: 0
	// Line 248, Address: 0x15a3d0, Func Offset: 0x10
	// Line 249, Address: 0x15a3e0, Func Offset: 0x20
	// Line 250, Address: 0x15a3ec, Func Offset: 0x2c
	// Line 251, Address: 0x15a3f8, Func Offset: 0x38
	// Line 253, Address: 0x15a404, Func Offset: 0x44
	// Func End, Address: 0x15a418, Func Offset: 0x58
}

// 
// Start address: 0x15a420
void enPAPCtrlGoPlayable(EnLOCAL_DATA* dp)
{
	// Line 258, Address: 0x15a420, Func Offset: 0
	// Line 259, Address: 0x15a428, Func Offset: 0x8
	// Line 260, Address: 0x15a430, Func Offset: 0x10
	// Func End, Address: 0x15a438, Func Offset: 0x18
}

// 
// Start address: 0x15a440
void enPAPCtrlEvent(EnLOCAL_DATA* dp)
{
	// Line 264, Address: 0x15a440, Func Offset: 0
	// Line 265, Address: 0x15a450, Func Offset: 0x10
	// Line 266, Address: 0x15a470, Func Offset: 0x30
	// Line 267, Address: 0x15a478, Func Offset: 0x38
	// Line 268, Address: 0x15a480, Func Offset: 0x40
	// Line 270, Address: 0x15a48c, Func Offset: 0x4c
	// Func End, Address: 0x15a4a0, Func Offset: 0x60
}

// 
// Start address: 0x15a4a0
void enPAPCtrlHand()
{
	// Line 401, Address: 0x15a4a0, Func Offset: 0
	// Func End, Address: 0x15a4a8, Func Offset: 0x8
}

// 
// Start address: 0x15a4b0
void enPAPCtrlWander(EnLOCAL_DATA* dp)
{
	int t;
	float a;
	float vec[4];
	// Line 405, Address: 0x15a4b0, Func Offset: 0
	// Line 409, Address: 0x15a4c0, Func Offset: 0x10
	// Line 410, Address: 0x15a4d0, Func Offset: 0x20
	// Line 411, Address: 0x15a4e4, Func Offset: 0x34
	// Line 412, Address: 0x15a4f0, Func Offset: 0x40
	// Line 413, Address: 0x15a500, Func Offset: 0x50
	// Line 414, Address: 0x15a50c, Func Offset: 0x5c
	// Line 417, Address: 0x15a514, Func Offset: 0x64
	// Line 418, Address: 0x15a520, Func Offset: 0x70
	// Line 421, Address: 0x15a528, Func Offset: 0x78
	// Line 422, Address: 0x15a534, Func Offset: 0x84
	// Line 423, Address: 0x15a540, Func Offset: 0x90
	// Line 424, Address: 0x15a54c, Func Offset: 0x9c
	// Line 425, Address: 0x15a554, Func Offset: 0xa4
	// Line 426, Address: 0x15a580, Func Offset: 0xd0
	// Line 427, Address: 0x15a58c, Func Offset: 0xdc
	// Line 429, Address: 0x15a594, Func Offset: 0xe4
	// Line 431, Address: 0x15a5c4, Func Offset: 0x114
	// Line 432, Address: 0x15a5d0, Func Offset: 0x120
	// Line 433, Address: 0x15a5dc, Func Offset: 0x12c
	// Line 434, Address: 0x15a5f0, Func Offset: 0x140
	// Line 435, Address: 0x15a610, Func Offset: 0x160
	// Line 436, Address: 0x15a630, Func Offset: 0x180
	// Line 437, Address: 0x15a63c, Func Offset: 0x18c
	// Line 439, Address: 0x15a644, Func Offset: 0x194
	// Line 440, Address: 0x15a66c, Func Offset: 0x1bc
	// Line 441, Address: 0x15a67c, Func Offset: 0x1cc
	// Line 442, Address: 0x15a684, Func Offset: 0x1d4
	// Line 444, Address: 0x15a68c, Func Offset: 0x1dc
	// Line 446, Address: 0x15a6fc, Func Offset: 0x24c
	// Line 447, Address: 0x15a744, Func Offset: 0x294
	// Line 448, Address: 0x15a75c, Func Offset: 0x2ac
	// Line 450, Address: 0x15a77c, Func Offset: 0x2cc
	// Line 451, Address: 0x15a79c, Func Offset: 0x2ec
	// Line 452, Address: 0x15a7b8, Func Offset: 0x308
	// Line 453, Address: 0x15a7d8, Func Offset: 0x328
	// Line 455, Address: 0x15a7dc, Func Offset: 0x32c
	// Line 457, Address: 0x15a7e4, Func Offset: 0x334
	// Line 458, Address: 0x15a7f4, Func Offset: 0x344
	// Line 459, Address: 0x15a800, Func Offset: 0x350
	// Line 461, Address: 0x15a808, Func Offset: 0x358
	// Line 463, Address: 0x15a810, Func Offset: 0x360
	// Line 464, Address: 0x15a820, Func Offset: 0x370
	// Line 465, Address: 0x15a82c, Func Offset: 0x37c
	// Line 469, Address: 0x15a834, Func Offset: 0x384
	// Line 470, Address: 0x15a840, Func Offset: 0x390
	// Line 471, Address: 0x15a870, Func Offset: 0x3c0
	// Line 472, Address: 0x15a880, Func Offset: 0x3d0
	// Line 474, Address: 0x15a888, Func Offset: 0x3d8
	// Line 475, Address: 0x15a894, Func Offset: 0x3e4
	// Line 476, Address: 0x15a8a0, Func Offset: 0x3f0
	// Func End, Address: 0x15a8b4, Func Offset: 0x404
}

// 
// Start address: 0x15a8c0
void enPAPCtrlStraight(EnLOCAL_DATA* dp)
{
	float vec[4];
	// Line 480, Address: 0x15a8c0, Func Offset: 0
	// Line 482, Address: 0x15a8d0, Func Offset: 0x10
	// Line 483, Address: 0x15a8e0, Func Offset: 0x20
	// Line 484, Address: 0x15a8ec, Func Offset: 0x2c
	// Line 485, Address: 0x15a900, Func Offset: 0x40
	// Line 486, Address: 0x15a90c, Func Offset: 0x4c
	// Line 487, Address: 0x15a91c, Func Offset: 0x5c
	// Line 488, Address: 0x15a928, Func Offset: 0x68
	// Line 491, Address: 0x15a930, Func Offset: 0x70
	// Line 492, Address: 0x15a93c, Func Offset: 0x7c
	// Line 495, Address: 0x15a944, Func Offset: 0x84
	// Line 497, Address: 0x15a97c, Func Offset: 0xbc
	// Line 498, Address: 0x15a988, Func Offset: 0xc8
	// Line 499, Address: 0x15a994, Func Offset: 0xd4
	// Line 500, Address: 0x15a9a8, Func Offset: 0xe8
	// Line 501, Address: 0x15a9c8, Func Offset: 0x108
	// Line 502, Address: 0x15a9e8, Func Offset: 0x128
	// Line 503, Address: 0x15a9f4, Func Offset: 0x134
	// Line 505, Address: 0x15a9fc, Func Offset: 0x13c
	// Line 506, Address: 0x15aa24, Func Offset: 0x164
	// Line 507, Address: 0x15aa34, Func Offset: 0x174
	// Line 508, Address: 0x15aa3c, Func Offset: 0x17c
	// Line 510, Address: 0x15aa44, Func Offset: 0x184
	// Line 511, Address: 0x15aa5c, Func Offset: 0x19c
	// Line 512, Address: 0x15aa68, Func Offset: 0x1a8
	// Line 513, Address: 0x15aa74, Func Offset: 0x1b4
	// Line 515, Address: 0x15aa7c, Func Offset: 0x1bc
	// Line 516, Address: 0x15aa9c, Func Offset: 0x1dc
	// Line 517, Address: 0x15aac4, Func Offset: 0x204
	// Line 518, Address: 0x15aad4, Func Offset: 0x214
	// Line 519, Address: 0x15aadc, Func Offset: 0x21c
	// Line 521, Address: 0x15aae4, Func Offset: 0x224
	// Line 523, Address: 0x15aae8, Func Offset: 0x228
	// Line 525, Address: 0x15aaf0, Func Offset: 0x230
	// Line 526, Address: 0x15ab00, Func Offset: 0x240
	// Line 527, Address: 0x15ab10, Func Offset: 0x250
	// Line 528, Address: 0x15ab18, Func Offset: 0x258
	// Line 529, Address: 0x15ab20, Func Offset: 0x260
	// Line 532, Address: 0x15ab28, Func Offset: 0x268
	// Line 533, Address: 0x15ab38, Func Offset: 0x278
	// Line 534, Address: 0x15ab48, Func Offset: 0x288
	// Line 538, Address: 0x15ab50, Func Offset: 0x290
	// Line 539, Address: 0x15ab5c, Func Offset: 0x29c
	// Line 540, Address: 0x15ab8c, Func Offset: 0x2cc
	// Line 541, Address: 0x15ab9c, Func Offset: 0x2dc
	// Line 543, Address: 0x15aba4, Func Offset: 0x2e4
	// Line 544, Address: 0x15abc0, Func Offset: 0x300
	// Line 545, Address: 0x15abe0, Func Offset: 0x320
	// Line 546, Address: 0x15abec, Func Offset: 0x32c
	// Line 547, Address: 0x15abf8, Func Offset: 0x338
	// Func End, Address: 0x15ac0c, Func Offset: 0x34c
}

// 
// Start address: 0x15ac10
void enPAPCtrlChase(EnLOCAL_DATA* dp)
{
	int t;
	// Line 551, Address: 0x15ac10, Func Offset: 0
	// Line 553, Address: 0x15ac24, Func Offset: 0x14
	// Line 554, Address: 0x15ac34, Func Offset: 0x24
	// Line 555, Address: 0x15ac48, Func Offset: 0x38
	// Line 556, Address: 0x15ac54, Func Offset: 0x44
	// Line 557, Address: 0x15ac64, Func Offset: 0x54
	// Line 558, Address: 0x15ac70, Func Offset: 0x60
	// Line 561, Address: 0x15ac78, Func Offset: 0x68
	// Line 562, Address: 0x15ac84, Func Offset: 0x74
	// Line 565, Address: 0x15ac8c, Func Offset: 0x7c
	// Line 566, Address: 0x15ac98, Func Offset: 0x88
	// Line 567, Address: 0x15aca8, Func Offset: 0x98
	// Line 568, Address: 0x15acb4, Func Offset: 0xa4
	// Line 569, Address: 0x15acc8, Func Offset: 0xb8
	// Line 570, Address: 0x15acd8, Func Offset: 0xc8
	// Line 571, Address: 0x15ace8, Func Offset: 0xd8
	// Line 574, Address: 0x15acf0, Func Offset: 0xe0
	// Line 575, Address: 0x15ad00, Func Offset: 0xf0
	// Line 576, Address: 0x15ad0c, Func Offset: 0xfc
	// Line 577, Address: 0x15ad18, Func Offset: 0x108
	// Line 578, Address: 0x15ad28, Func Offset: 0x118
	// Line 580, Address: 0x15ad80, Func Offset: 0x170
	// Line 581, Address: 0x15ad8c, Func Offset: 0x17c
	// Line 582, Address: 0x15ad98, Func Offset: 0x188
	// Line 583, Address: 0x15ada4, Func Offset: 0x194
	// Line 586, Address: 0x15adf8, Func Offset: 0x1e8
	// Line 587, Address: 0x15ae00, Func Offset: 0x1f0
	// Line 589, Address: 0x15ae38, Func Offset: 0x228
	// Line 590, Address: 0x15ae48, Func Offset: 0x238
	// Line 593, Address: 0x15ae50, Func Offset: 0x240
	// Line 594, Address: 0x15ae5c, Func Offset: 0x24c
	// Line 595, Address: 0x15ae68, Func Offset: 0x258
	// Func End, Address: 0x15ae80, Func Offset: 0x270
}

// 
// Start address: 0x15ae80
void enPAPCtrlRush(EnLOCAL_DATA* dp)
{
	// Line 599, Address: 0x15ae80, Func Offset: 0
	// Line 600, Address: 0x15ae94, Func Offset: 0x14
	// Line 601, Address: 0x15aea4, Func Offset: 0x24
	// Line 602, Address: 0x15aeb8, Func Offset: 0x38
	// Line 603, Address: 0x15aec4, Func Offset: 0x44
	// Line 604, Address: 0x15aed4, Func Offset: 0x54
	// Line 605, Address: 0x15aee0, Func Offset: 0x60
	// Line 608, Address: 0x15aee8, Func Offset: 0x68
	// Line 610, Address: 0x15af04, Func Offset: 0x84
	// Line 611, Address: 0x15af20, Func Offset: 0xa0
	// Line 612, Address: 0x15af2c, Func Offset: 0xac
	// Line 613, Address: 0x15af4c, Func Offset: 0xcc
	// Line 614, Address: 0x15af58, Func Offset: 0xd8
	// Line 617, Address: 0x15af60, Func Offset: 0xe0
	// Line 618, Address: 0x15af6c, Func Offset: 0xec
	// Line 622, Address: 0x15af74, Func Offset: 0xf4
	// Line 623, Address: 0x15af80, Func Offset: 0x100
	// Line 624, Address: 0x15af90, Func Offset: 0x110
	// Line 626, Address: 0x15afbc, Func Offset: 0x13c
	// Line 627, Address: 0x15afcc, Func Offset: 0x14c
	// Line 628, Address: 0x15afd8, Func Offset: 0x158
	// Line 629, Address: 0x15afec, Func Offset: 0x16c
	// Line 630, Address: 0x15affc, Func Offset: 0x17c
	// Line 631, Address: 0x15b00c, Func Offset: 0x18c
	// Line 634, Address: 0x15b018, Func Offset: 0x198
	// Line 635, Address: 0x15b028, Func Offset: 0x1a8
	// Line 636, Address: 0x15b034, Func Offset: 0x1b4
	// Line 637, Address: 0x15b040, Func Offset: 0x1c0
	// Line 638, Address: 0x15b054, Func Offset: 0x1d4
	// Line 639, Address: 0x15b060, Func Offset: 0x1e0
	// Line 640, Address: 0x15b090, Func Offset: 0x210
	// Line 642, Address: 0x15b098, Func Offset: 0x218
	// Line 643, Address: 0x15b0a8, Func Offset: 0x228
	// Line 645, Address: 0x15b100, Func Offset: 0x280
	// Line 646, Address: 0x15b118, Func Offset: 0x298
	// Line 647, Address: 0x15b124, Func Offset: 0x2a4
	// Line 650, Address: 0x15b130, Func Offset: 0x2b0
	// Line 651, Address: 0x15b13c, Func Offset: 0x2bc
	// Line 652, Address: 0x15b148, Func Offset: 0x2c8
	// Func End, Address: 0x15b160, Func Offset: 0x2e0
}

// 
// Start address: 0x15b160
void enPAPCtrlAttack(EnLOCAL_DATA* dp)
{
	float vec[4];
	// Line 656, Address: 0x15b160, Func Offset: 0
	// Line 658, Address: 0x15b174, Func Offset: 0x14
	// Line 659, Address: 0x15b184, Func Offset: 0x24
	// Line 661, Address: 0x15b194, Func Offset: 0x34
	// Line 662, Address: 0x15b1a0, Func Offset: 0x40
	// Line 663, Address: 0x15b1a8, Func Offset: 0x48
	// Line 664, Address: 0x15b1bc, Func Offset: 0x5c
	// Line 665, Address: 0x15b1c8, Func Offset: 0x68
	// Line 666, Address: 0x15b1d8, Func Offset: 0x78
	// Line 667, Address: 0x15b1e4, Func Offset: 0x84
	// Line 670, Address: 0x15b1ec, Func Offset: 0x8c
	// Line 671, Address: 0x15b1f8, Func Offset: 0x98
	// Line 675, Address: 0x15b200, Func Offset: 0xa0
	// Line 677, Address: 0x15b244, Func Offset: 0xe4
	// Line 679, Address: 0x15b290, Func Offset: 0x130
	// Line 680, Address: 0x15b2a0, Func Offset: 0x140
	// Line 681, Address: 0x15b2a8, Func Offset: 0x148
	// Line 683, Address: 0x15b2b8, Func Offset: 0x158
	// Line 684, Address: 0x15b2e8, Func Offset: 0x188
	// Line 685, Address: 0x15b2f4, Func Offset: 0x194
	// Line 686, Address: 0x15b300, Func Offset: 0x1a0
	// Line 687, Address: 0x15b30c, Func Offset: 0x1ac
	// Line 689, Address: 0x15b314, Func Offset: 0x1b4
	// Line 690, Address: 0x15b324, Func Offset: 0x1c4
	// Line 691, Address: 0x15b334, Func Offset: 0x1d4
	// Line 692, Address: 0x15b340, Func Offset: 0x1e0
	// Line 693, Address: 0x15b358, Func Offset: 0x1f8
	// Line 694, Address: 0x15b364, Func Offset: 0x204
	// Line 695, Address: 0x15b374, Func Offset: 0x214
	// Line 697, Address: 0x15b380, Func Offset: 0x220
	// Line 698, Address: 0x15b3a4, Func Offset: 0x244
	// Line 699, Address: 0x15b3c4, Func Offset: 0x264
	// Line 700, Address: 0x15b3dc, Func Offset: 0x27c
	// Line 701, Address: 0x15b3e4, Func Offset: 0x284
	// Line 702, Address: 0x15b408, Func Offset: 0x2a8
	// Line 704, Address: 0x15b434, Func Offset: 0x2d4
	// Line 705, Address: 0x15b444, Func Offset: 0x2e4
	// Line 706, Address: 0x15b450, Func Offset: 0x2f0
	// Line 707, Address: 0x15b460, Func Offset: 0x300
	// Line 709, Address: 0x15b490, Func Offset: 0x330
	// Line 710, Address: 0x15b498, Func Offset: 0x338
	// Line 711, Address: 0x15b4a0, Func Offset: 0x340
	// Line 713, Address: 0x15b4d0, Func Offset: 0x370
	// Line 714, Address: 0x15b4dc, Func Offset: 0x37c
	// Line 716, Address: 0x15b4e4, Func Offset: 0x384
	// Line 718, Address: 0x15b4f8, Func Offset: 0x398
	// Line 720, Address: 0x15b500, Func Offset: 0x3a0
	// Line 721, Address: 0x15b510, Func Offset: 0x3b0
	// Line 722, Address: 0x15b520, Func Offset: 0x3c0
	// Line 724, Address: 0x15b550, Func Offset: 0x3f0
	// Line 726, Address: 0x15b55c, Func Offset: 0x3fc
	// Line 729, Address: 0x15b564, Func Offset: 0x404
	// Line 731, Address: 0x15b580, Func Offset: 0x420
	// Line 732, Address: 0x15b590, Func Offset: 0x430
	// Line 733, Address: 0x15b5bc, Func Offset: 0x45c
	// Line 734, Address: 0x15b5cc, Func Offset: 0x46c
	// Line 735, Address: 0x15b5d8, Func Offset: 0x478
	// Line 736, Address: 0x15b5e4, Func Offset: 0x484
	// Line 737, Address: 0x15b5f0, Func Offset: 0x490
	// Line 738, Address: 0x15b5f8, Func Offset: 0x498
	// Line 739, Address: 0x15b600, Func Offset: 0x4a0
	// Line 740, Address: 0x15b60c, Func Offset: 0x4ac
	// Line 744, Address: 0x15b610, Func Offset: 0x4b0
	// Line 745, Address: 0x15b61c, Func Offset: 0x4bc
	// Line 746, Address: 0x15b628, Func Offset: 0x4c8
	// Func End, Address: 0x15b640, Func Offset: 0x4e0
}

// 
// Start address: 0x15b640
void enPAPCtrlDamage(EnLOCAL_DATA* dp)
{
	float d;
	// Line 750, Address: 0x15b640, Func Offset: 0
	// Line 752, Address: 0x15b654, Func Offset: 0x14
	// Line 754, Address: 0x15b68c, Func Offset: 0x4c
	// Line 756, Address: 0x15b6b4, Func Offset: 0x74
	// Line 757, Address: 0x15b6c0, Func Offset: 0x80
	// Line 758, Address: 0x15b6cc, Func Offset: 0x8c
	// Line 759, Address: 0x15b6d8, Func Offset: 0x98
	// Line 760, Address: 0x15b6e8, Func Offset: 0xa8
	// Line 761, Address: 0x15b6f0, Func Offset: 0xb0
	// Line 763, Address: 0x15b6f8, Func Offset: 0xb8
	// Line 764, Address: 0x15b704, Func Offset: 0xc4
	// Line 765, Address: 0x15b714, Func Offset: 0xd4
	// Line 767, Address: 0x15b784, Func Offset: 0x144
	// Line 768, Address: 0x15b7a0, Func Offset: 0x160
	// Line 770, Address: 0x15b7d0, Func Offset: 0x190
	// Line 771, Address: 0x15b7d8, Func Offset: 0x198
	// Line 772, Address: 0x15b7e4, Func Offset: 0x1a4
	// Line 774, Address: 0x15b7ec, Func Offset: 0x1ac
	// Line 775, Address: 0x15b7f4, Func Offset: 0x1b4
	// Line 777, Address: 0x15b810, Func Offset: 0x1d0
	// Line 778, Address: 0x15b82c, Func Offset: 0x1ec
	// Line 779, Address: 0x15b838, Func Offset: 0x1f8
	// Line 780, Address: 0x15b860, Func Offset: 0x220
	// Line 781, Address: 0x15b868, Func Offset: 0x228
	// Line 782, Address: 0x15b870, Func Offset: 0x230
	// Line 784, Address: 0x15b878, Func Offset: 0x238
	// Line 785, Address: 0x15b884, Func Offset: 0x244
	// Line 787, Address: 0x15b88c, Func Offset: 0x24c
	// Line 788, Address: 0x15b8b8, Func Offset: 0x278
	// Line 791, Address: 0x15b8f4, Func Offset: 0x2b4
	// Line 792, Address: 0x15b900, Func Offset: 0x2c0
	// Line 793, Address: 0x15b908, Func Offset: 0x2c8
	// Line 795, Address: 0x15b914, Func Offset: 0x2d4
	// Line 796, Address: 0x15b930, Func Offset: 0x2f0
	// Line 798, Address: 0x15b934, Func Offset: 0x2f4
	// Line 800, Address: 0x15b93c, Func Offset: 0x2fc
	// Line 801, Address: 0x15b94c, Func Offset: 0x30c
	// Line 802, Address: 0x15b958, Func Offset: 0x318
	// Line 804, Address: 0x15b960, Func Offset: 0x320
	// Line 806, Address: 0x15b968, Func Offset: 0x328
	// Line 807, Address: 0x15b978, Func Offset: 0x338
	// Line 808, Address: 0x15b984, Func Offset: 0x344
	// Line 809, Address: 0x15b9a0, Func Offset: 0x360
	// Line 813, Address: 0x15b9a4, Func Offset: 0x364
	// Func End, Address: 0x15b9bc, Func Offset: 0x37c
}

// 
// Start address: 0x15b9c0
void enPAPCtrlConfuse(EnLOCAL_DATA* dp)
{
	// Line 817, Address: 0x15b9c0, Func Offset: 0
	// Line 818, Address: 0x15b9d0, Func Offset: 0x10
	// Line 819, Address: 0x15b9e0, Func Offset: 0x20
	// Line 820, Address: 0x15b9f4, Func Offset: 0x34
	// Line 821, Address: 0x15b9f8, Func Offset: 0x38
	// Line 822, Address: 0x15ba00, Func Offset: 0x40
	// Line 823, Address: 0x15ba0c, Func Offset: 0x4c
	// Line 826, Address: 0x15ba14, Func Offset: 0x54
	// Line 827, Address: 0x15ba20, Func Offset: 0x60
	// Line 828, Address: 0x15ba2c, Func Offset: 0x6c
	// Line 829, Address: 0x15ba3c, Func Offset: 0x7c
	// Line 831, Address: 0x15ba48, Func Offset: 0x88
	// Line 832, Address: 0x15ba68, Func Offset: 0xa8
	// Line 833, Address: 0x15ba70, Func Offset: 0xb0
	// Line 834, Address: 0x15baa0, Func Offset: 0xe0
	// Line 835, Address: 0x15bac8, Func Offset: 0x108
	// Line 837, Address: 0x15bad0, Func Offset: 0x110
	// Func End, Address: 0x15bae4, Func Offset: 0x124
}

// 
// Start address: 0x15baf0
void enPAPCtrlDown(EnLOCAL_DATA* dp)
{
	// Line 841, Address: 0x15baf0, Func Offset: 0
	// Line 842, Address: 0x15bb00, Func Offset: 0x10
	// Line 844, Address: 0x15bb2c, Func Offset: 0x3c
	// Line 845, Address: 0x15bb38, Func Offset: 0x48
	// Line 846, Address: 0x15bb44, Func Offset: 0x54
	// Line 847, Address: 0x15bb50, Func Offset: 0x60
	// Line 849, Address: 0x15bb5c, Func Offset: 0x6c
	// Line 850, Address: 0x15bb84, Func Offset: 0x94
	// Line 851, Address: 0x15bb98, Func Offset: 0xa8
	// Line 852, Address: 0x15bba8, Func Offset: 0xb8
	// Line 853, Address: 0x15bbb0, Func Offset: 0xc0
	// Line 854, Address: 0x15bbbc, Func Offset: 0xcc
	// Line 855, Address: 0x15bbc8, Func Offset: 0xd8
	// Line 856, Address: 0x15bbd0, Func Offset: 0xe0
	// Line 857, Address: 0x15bbdc, Func Offset: 0xec
	// Line 858, Address: 0x15bc04, Func Offset: 0x114
	// Line 859, Address: 0x15bc10, Func Offset: 0x120
	// Line 860, Address: 0x15bc20, Func Offset: 0x130
	// Line 861, Address: 0x15bc2c, Func Offset: 0x13c
	// Line 862, Address: 0x15bc34, Func Offset: 0x144
	// Line 863, Address: 0x15bc40, Func Offset: 0x150
	// Line 866, Address: 0x15bc48, Func Offset: 0x158
	// Line 868, Address: 0x15bc50, Func Offset: 0x160
	// Line 869, Address: 0x15bc60, Func Offset: 0x170
	// Line 870, Address: 0x15bc6c, Func Offset: 0x17c
	// Line 871, Address: 0x15bc74, Func Offset: 0x184
	// Line 873, Address: 0x15bc84, Func Offset: 0x194
	// Line 874, Address: 0x15bc90, Func Offset: 0x1a0
	// Line 876, Address: 0x15bc98, Func Offset: 0x1a8
	// Line 877, Address: 0x15bca8, Func Offset: 0x1b8
	// Line 878, Address: 0x15bcb4, Func Offset: 0x1c4
	// Line 879, Address: 0x15bcc0, Func Offset: 0x1d0
	// Line 880, Address: 0x15bccc, Func Offset: 0x1dc
	// Line 881, Address: 0x15bce0, Func Offset: 0x1f0
	// Line 882, Address: 0x15bcec, Func Offset: 0x1fc
	// Line 883, Address: 0x15bcfc, Func Offset: 0x20c
	// Line 884, Address: 0x15bd08, Func Offset: 0x218
	// Line 886, Address: 0x15bd10, Func Offset: 0x220
	// Line 887, Address: 0x15bd18, Func Offset: 0x228
	// Line 888, Address: 0x15bd28, Func Offset: 0x238
	// Line 889, Address: 0x15bd58, Func Offset: 0x268
	// Line 891, Address: 0x15bd78, Func Offset: 0x288
	// Line 892, Address: 0x15bd88, Func Offset: 0x298
	// Line 893, Address: 0x15bd94, Func Offset: 0x2a4
	// Line 894, Address: 0x15bda0, Func Offset: 0x2b0
	// Line 897, Address: 0x15bda8, Func Offset: 0x2b8
	// Line 898, Address: 0x15bdb8, Func Offset: 0x2c8
	// Line 899, Address: 0x15bdc4, Func Offset: 0x2d4
	// Line 900, Address: 0x15bdd0, Func Offset: 0x2e0
	// Line 901, Address: 0x15bddc, Func Offset: 0x2ec
	// Line 902, Address: 0x15be08, Func Offset: 0x318
	// Line 903, Address: 0x15be1c, Func Offset: 0x32c
	// Line 904, Address: 0x15be24, Func Offset: 0x334
	// Line 905, Address: 0x15be3c, Func Offset: 0x34c
	// Line 906, Address: 0x15be4c, Func Offset: 0x35c
	// Line 908, Address: 0x15be8c, Func Offset: 0x39c
	// Line 909, Address: 0x15be98, Func Offset: 0x3a8
	// Line 911, Address: 0x15beac, Func Offset: 0x3bc
	// Line 912, Address: 0x15beb4, Func Offset: 0x3c4
	// Line 914, Address: 0x15bef4, Func Offset: 0x404
	// Line 915, Address: 0x15bf04, Func Offset: 0x414
	// Line 916, Address: 0x15bf0c, Func Offset: 0x41c
	// Line 920, Address: 0x15bf20, Func Offset: 0x430
	// Line 922, Address: 0x15bf28, Func Offset: 0x438
	// Line 923, Address: 0x15bf38, Func Offset: 0x448
	// Line 924, Address: 0x15bf40, Func Offset: 0x450
	// Line 925, Address: 0x15bf4c, Func Offset: 0x45c
	// Line 927, Address: 0x15bf58, Func Offset: 0x468
	// Line 929, Address: 0x15bf60, Func Offset: 0x470
	// Line 930, Address: 0x15bf70, Func Offset: 0x480
	// Line 931, Address: 0x15bf7c, Func Offset: 0x48c
	// Line 932, Address: 0x15bf88, Func Offset: 0x498
	// Line 933, Address: 0x15bf9c, Func Offset: 0x4ac
	// Line 934, Address: 0x15bfa8, Func Offset: 0x4b8
	// Line 935, Address: 0x15bfb8, Func Offset: 0x4c8
	// Line 936, Address: 0x15bfc0, Func Offset: 0x4d0
	// Line 937, Address: 0x15bfcc, Func Offset: 0x4dc
	// Line 938, Address: 0x15bfd8, Func Offset: 0x4e8
	// Line 939, Address: 0x15bfe0, Func Offset: 0x4f0
	// Line 940, Address: 0x15c008, Func Offset: 0x518
	// Line 941, Address: 0x15c014, Func Offset: 0x524
	// Line 942, Address: 0x15c024, Func Offset: 0x534
	// Line 943, Address: 0x15c030, Func Offset: 0x540
	// Line 944, Address: 0x15c038, Func Offset: 0x548
	// Line 945, Address: 0x15c044, Func Offset: 0x554
	// Line 948, Address: 0x15c04c, Func Offset: 0x55c
	// Line 950, Address: 0x15c054, Func Offset: 0x564
	// Line 951, Address: 0x15c068, Func Offset: 0x578
	// Line 952, Address: 0x15c074, Func Offset: 0x584
	// Line 953, Address: 0x15c084, Func Offset: 0x594
	// Line 954, Address: 0x15c090, Func Offset: 0x5a0
	// Line 956, Address: 0x15c098, Func Offset: 0x5a8
	// Line 957, Address: 0x15c0a8, Func Offset: 0x5b8
	// Line 958, Address: 0x15c0e0, Func Offset: 0x5f0
	// Line 960, Address: 0x15c100, Func Offset: 0x610
	// Line 961, Address: 0x15c110, Func Offset: 0x620
	// Line 962, Address: 0x15c11c, Func Offset: 0x62c
	// Line 963, Address: 0x15c128, Func Offset: 0x638
	// Line 966, Address: 0x15c130, Func Offset: 0x640
	// Line 967, Address: 0x15c144, Func Offset: 0x654
	// Line 968, Address: 0x15c14c, Func Offset: 0x65c
	// Line 970, Address: 0x15c154, Func Offset: 0x664
	// Line 971, Address: 0x15c164, Func Offset: 0x674
	// Line 972, Address: 0x15c178, Func Offset: 0x688
	// Line 973, Address: 0x15c184, Func Offset: 0x694
	// Line 974, Address: 0x15c190, Func Offset: 0x6a0
	// Line 975, Address: 0x15c19c, Func Offset: 0x6ac
	// Line 976, Address: 0x15c1c8, Func Offset: 0x6d8
	// Line 978, Address: 0x15c1d0, Func Offset: 0x6e0
	// Line 980, Address: 0x15c1d8, Func Offset: 0x6e8
	// Line 981, Address: 0x15c1e8, Func Offset: 0x6f8
	// Line 982, Address: 0x15c1f4, Func Offset: 0x704
	// Line 983, Address: 0x15c200, Func Offset: 0x710
	// Line 984, Address: 0x15c238, Func Offset: 0x748
	// Line 985, Address: 0x15c270, Func Offset: 0x780
	// Line 986, Address: 0x15c27c, Func Offset: 0x78c
	// Line 987, Address: 0x15c28c, Func Offset: 0x79c
	// Line 988, Address: 0x15c298, Func Offset: 0x7a8
	// Line 990, Address: 0x15c2a0, Func Offset: 0x7b0
	// Line 991, Address: 0x15c2b0, Func Offset: 0x7c0
	// Line 992, Address: 0x15c2cc, Func Offset: 0x7dc
	// Line 993, Address: 0x15c2d8, Func Offset: 0x7e8
	// Line 994, Address: 0x15c2e8, Func Offset: 0x7f8
	// Line 996, Address: 0x15c2f4, Func Offset: 0x804
	// Line 998, Address: 0x15c2fc, Func Offset: 0x80c
	// Line 999, Address: 0x15c30c, Func Offset: 0x81c
	// Line 1000, Address: 0x15c318, Func Offset: 0x828
	// Line 1001, Address: 0x15c324, Func Offset: 0x834
	// Line 1002, Address: 0x15c338, Func Offset: 0x848
	// Line 1003, Address: 0x15c344, Func Offset: 0x854
	// Line 1004, Address: 0x15c354, Func Offset: 0x864
	// Line 1005, Address: 0x15c360, Func Offset: 0x870
	// Line 1007, Address: 0x15c368, Func Offset: 0x878
	// Line 1008, Address: 0x15c378, Func Offset: 0x888
	// Line 1009, Address: 0x15c380, Func Offset: 0x890
	// Line 1010, Address: 0x15c39c, Func Offset: 0x8ac
	// Line 1011, Address: 0x15c3ac, Func Offset: 0x8bc
	// Line 1012, Address: 0x15c3c0, Func Offset: 0x8d0
	// Line 1013, Address: 0x15c3cc, Func Offset: 0x8dc
	// Line 1014, Address: 0x15c3d8, Func Offset: 0x8e8
	// Line 1015, Address: 0x15c3e4, Func Offset: 0x8f4
	// Line 1016, Address: 0x15c410, Func Offset: 0x920
	// Line 1020, Address: 0x15c418, Func Offset: 0x928
	// Func End, Address: 0x15c42c, Func Offset: 0x93c
}

// 
// Start address: 0x15c430
void enPAPCtrlLastMove(EnLOCAL_DATA* dp)
{
	// Line 1024, Address: 0x15c430, Func Offset: 0
	// Line 1025, Address: 0x15c440, Func Offset: 0x10
	// Line 1026, Address: 0x15c450, Func Offset: 0x20
	// Line 1027, Address: 0x15c458, Func Offset: 0x28
	// Line 1028, Address: 0x15c46c, Func Offset: 0x3c
	// Line 1029, Address: 0x15c47c, Func Offset: 0x4c
	// Line 1031, Address: 0x15c488, Func Offset: 0x58
	// Func End, Address: 0x15c49c, Func Offset: 0x6c
}

// 
// Start address: 0x15c4a0
void enPAPMoveAngle(EnLOCAL_DATA* dp)
{
	float d;
	float a;
	float tpos[4];
	float vec2[4];
	float vec[4];
	// Line 1035, Address: 0x15c4a0, Func Offset: 0
	// Line 1038, Address: 0x15c4b8, Func Offset: 0x18
	// Line 1039, Address: 0x15c4c8, Func Offset: 0x28
	// Line 1040, Address: 0x15c4d4, Func Offset: 0x34
	// Line 1041, Address: 0x15c4d8, Func Offset: 0x38
	// Line 1042, Address: 0x15c4fc, Func Offset: 0x5c
	// Line 1043, Address: 0x15c518, Func Offset: 0x78
	// Line 1044, Address: 0x15c53c, Func Offset: 0x9c
	// Line 1045, Address: 0x15c558, Func Offset: 0xb8
	// Line 1046, Address: 0x15c584, Func Offset: 0xe4
	// Line 1048, Address: 0x15c588, Func Offset: 0xe8
	// Line 1049, Address: 0x15c5a4, Func Offset: 0x104
	// Line 1050, Address: 0x15c5d0, Func Offset: 0x130
	// Line 1052, Address: 0x15c5d4, Func Offset: 0x134
	// Line 1053, Address: 0x15c5e4, Func Offset: 0x144
	// Line 1054, Address: 0x15c5ec, Func Offset: 0x14c
	// Line 1057, Address: 0x15c650, Func Offset: 0x1b0
	// Line 1058, Address: 0x15c660, Func Offset: 0x1c0
	// Line 1059, Address: 0x15c66c, Func Offset: 0x1cc
	// Func End, Address: 0x15c688, Func Offset: 0x1e8
}

// 
// Start address: 0x15c690
int enPAPCanSeePlayer(EnLOCAL_DATA* dp)
{
	float a;
	float dist;
	float* ppos;
	// Line 1064, Address: 0x15c690, Func Offset: 0
	// Line 1065, Address: 0x15c6b0, Func Offset: 0x20
	// Line 1067, Address: 0x15c6bc, Func Offset: 0x2c
	// Line 1068, Address: 0x15c6d8, Func Offset: 0x48
	// Line 1069, Address: 0x15c704, Func Offset: 0x74
	// Line 1070, Address: 0x15c71c, Func Offset: 0x8c
	// Line 1072, Address: 0x15c728, Func Offset: 0x98
	// Line 1073, Address: 0x15c72c, Func Offset: 0x9c
	// Line 1074, Address: 0x15c758, Func Offset: 0xc8
	// Line 1075, Address: 0x15c770, Func Offset: 0xe0
	// Line 1076, Address: 0x15c788, Func Offset: 0xf8
	// Line 1079, Address: 0x15c810, Func Offset: 0x180
	// Line 1081, Address: 0x15c81c, Func Offset: 0x18c
	// Line 1082, Address: 0x15c83c, Func Offset: 0x1ac
	// Line 1083, Address: 0x15c868, Func Offset: 0x1d8
	// Line 1084, Address: 0x15c86c, Func Offset: 0x1dc
	// Func End, Address: 0x15c890, Func Offset: 0x200
}

// 
// Start address: 0x15c890
void enPAPAnimeSet(EnLOCAL_DATA* dp, int anim)
{
	// Line 1088, Address: 0x15c890, Func Offset: 0
	// Line 1089, Address: 0x15c8a8, Func Offset: 0x18
	// Line 1090, Address: 0x15c8b4, Func Offset: 0x24
	// Line 1091, Address: 0x15c8bc, Func Offset: 0x2c
	// Line 1092, Address: 0x15c8c8, Func Offset: 0x38
	// Line 1094, Address: 0x15c8d4, Func Offset: 0x44
	// Line 1097, Address: 0x15c8dc, Func Offset: 0x4c
	// Line 1098, Address: 0x15c91c, Func Offset: 0x8c
	// Line 1099, Address: 0x15c940, Func Offset: 0xb0
	// Line 1100, Address: 0x15c94c, Func Offset: 0xbc
	// Line 1102, Address: 0x15c958, Func Offset: 0xc8
	// Line 1103, Address: 0x15c970, Func Offset: 0xe0
	// Line 1104, Address: 0x15c980, Func Offset: 0xf0
	// Line 1105, Address: 0x15c988, Func Offset: 0xf8
	// Line 1107, Address: 0x15c994, Func Offset: 0x104
	// Func End, Address: 0x15c9ac, Func Offset: 0x11c
}

// 
// Start address: 0x15c9b0
void enPAPAnimeExec(EnLOCAL_DATA* dp)
{
	int of;
	// Line 1127, Address: 0x15c9b0, Func Offset: 0
	// Line 1128, Address: 0x15c9c4, Func Offset: 0x14
	// Line 1129, Address: 0x15c9c8, Func Offset: 0x18
	// Line 1130, Address: 0x15c9dc, Func Offset: 0x2c
	// Line 1132, Address: 0x15c9ec, Func Offset: 0x3c
	// Line 1134, Address: 0x15c9f8, Func Offset: 0x48
	// Line 1135, Address: 0x15ca20, Func Offset: 0x70
	// Line 1138, Address: 0x15ca54, Func Offset: 0xa4
	// Line 1139, Address: 0x15ca60, Func Offset: 0xb0
	// Line 1141, Address: 0x15ca74, Func Offset: 0xc4
	// Line 1143, Address: 0x15ca80, Func Offset: 0xd0
	// Line 1155, Address: 0x15cb14, Func Offset: 0x164
	// Line 1156, Address: 0x15cb28, Func Offset: 0x178
	// Line 1157, Address: 0x15cb44, Func Offset: 0x194
	// Line 1159, Address: 0x15cb4c, Func Offset: 0x19c
	// Line 1160, Address: 0x15cb5c, Func Offset: 0x1ac
	// Line 1161, Address: 0x15cb78, Func Offset: 0x1c8
	// Line 1162, Address: 0x15cb80, Func Offset: 0x1d0
	// Line 1166, Address: 0x15cb9c, Func Offset: 0x1ec
	// Line 1168, Address: 0x15cbb0, Func Offset: 0x200
	// Line 1169, Address: 0x15cbc0, Func Offset: 0x210
	// Line 1170, Address: 0x15cbcc, Func Offset: 0x21c
	// Line 1171, Address: 0x15cbd4, Func Offset: 0x224
	// Line 1174, Address: 0x15cbe0, Func Offset: 0x230
	// Func End, Address: 0x15cbf8, Func Offset: 0x248
}

// 
// Start address: 0x15cc00
void enPAPAutoRecovery(EnLOCAL_DATA* dp)
{
	short recover_rate[5];
	// Line 1178, Address: 0x15cc00, Func Offset: 0
	// Line 1179, Address: 0x15cc10, Func Offset: 0x10
	// Line 1186, Address: 0x15cc2c, Func Offset: 0x2c
	// Line 1187, Address: 0x15cc58, Func Offset: 0x58
	// Func End, Address: 0x15cc6c, Func Offset: 0x6c
}

// 
// Start address: 0x15cc70
float enPAPGetWalkSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1191, Address: 0x15cc70, Func Offset: 0
	// Line 1192, Address: 0x15cc80, Func Offset: 0x10
	// Line 1199, Address: 0x15cc9c, Func Offset: 0x2c
	// Line 1200, Address: 0x15ccb0, Func Offset: 0x40
	// Line 1201, Address: 0x15ccd8, Func Offset: 0x68
	// Line 1202, Address: 0x15ccec, Func Offset: 0x7c
	// Line 1204, Address: 0x15cd0c, Func Offset: 0x9c
	// Func End, Address: 0x15cd20, Func Offset: 0xb0
}

// 
// Start address: 0x15cd20
float enPAPGetRotSpeed()
{
	float rot_rate[5];
	// Line 1208, Address: 0x15cd20, Func Offset: 0
	// Line 1209, Address: 0x15cd28, Func Offset: 0x8
	// Line 1216, Address: 0x15cd44, Func Offset: 0x24
	// Line 1217, Address: 0x15cd68, Func Offset: 0x48
	// Func End, Address: 0x15cd78, Func Offset: 0x58
}

// 
// Start address: 0x15cd80
float enPAPGetTurnSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float rot_rate[5];
	// Line 1221, Address: 0x15cd80, Func Offset: 0
	// Line 1222, Address: 0x15cd90, Func Offset: 0x10
	// Line 1229, Address: 0x15cdac, Func Offset: 0x2c
	// Line 1230, Address: 0x15cdc0, Func Offset: 0x40
	// Line 1231, Address: 0x15cde0, Func Offset: 0x60
	// Line 1232, Address: 0x15cdf4, Func Offset: 0x74
	// Func End, Address: 0x15ce08, Func Offset: 0x88
}

// 
// Start address: 0x15ce10
void enPAPSetDownTime(EnLOCAL_DATA* dp)
{
	short down_time2[5];
	short down_time[5];
	// Line 1236, Address: 0x15ce10, Func Offset: 0
	// Line 1237, Address: 0x15ce20, Func Offset: 0x10
	// Line 1244, Address: 0x15ce3c, Func Offset: 0x2c
	// Line 1251, Address: 0x15ce58, Func Offset: 0x48
	// Line 1252, Address: 0x15ce64, Func Offset: 0x54
	// Line 1253, Address: 0x15ce84, Func Offset: 0x74
	// Line 1254, Address: 0x15ce8c, Func Offset: 0x7c
	// Line 1256, Address: 0x15ceac, Func Offset: 0x9c
	// Func End, Address: 0x15cec0, Func Offset: 0xb0
}

// 
// Start address: 0x15cec0
void enPAPSetMoveCount(EnLOCAL_DATA* dp)
{
	int n;
	// Line 1260, Address: 0x15cec0, Func Offset: 0
	// Line 1262, Address: 0x15ced4, Func Offset: 0x14
	// Line 1263, Address: 0x15cf34, Func Offset: 0x74
	// Line 1264, Address: 0x15cf44, Func Offset: 0x84
	// Func End, Address: 0x15cf5c, Func Offset: 0x9c
}

// 
// Start address: 0x15cf60
void enPAPSetDc(EnLOCAL_DATA* dp)
{
	// Line 1268, Address: 0x15cf60, Func Offset: 0
	// Line 1269, Address: 0x15cf74, Func Offset: 0x14
	// Line 1270, Address: 0x15cf80, Func Offset: 0x20
	// Line 1271, Address: 0x15cf84, Func Offset: 0x24
	// Line 1272, Address: 0x15cfb4, Func Offset: 0x54
	// Func End, Address: 0x15cfcc, Func Offset: 0x6c
}

// 
// Start address: 0x15cfd0
void enPAPDrawBoad(EnLOCAL_DATA* dp)
{
	unsigned int w;
	int cn;
	int i;
	unsigned long xyz[4];
	int iv[4];
	float wsm[4][4];
	float vec2[4];
	float vec1[4];
	float pos[4][4];
	// Line 1276, Address: 0x15cfd0, Func Offset: 0
	// Line 1284, Address: 0x15cfe8, Func Offset: 0x18
	// Line 1285, Address: 0x15cffc, Func Offset: 0x2c
	// Line 1286, Address: 0x15d01c, Func Offset: 0x4c
	// Line 1287, Address: 0x15d04c, Func Offset: 0x7c
	// Line 1288, Address: 0x15d06c, Func Offset: 0x9c
	// Line 1289, Address: 0x15d080, Func Offset: 0xb0
	// Line 1290, Address: 0x15d09c, Func Offset: 0xcc
	// Line 1291, Address: 0x15d0ac, Func Offset: 0xdc
	// Line 1292, Address: 0x15d0c8, Func Offset: 0xf8
	// Line 1293, Address: 0x15d0e8, Func Offset: 0x118
	// Line 1294, Address: 0x15d0fc, Func Offset: 0x12c
	// Line 1295, Address: 0x15d118, Func Offset: 0x148
	// Line 1296, Address: 0x15d128, Func Offset: 0x158
	// Line 1297, Address: 0x15d12c, Func Offset: 0x15c
	// Line 1298, Address: 0x15d130, Func Offset: 0x160
	// Line 1299, Address: 0x15d13c, Func Offset: 0x16c
	// Line 1300, Address: 0x15d15c, Func Offset: 0x18c
	// Line 1301, Address: 0x15d164, Func Offset: 0x194
	// Line 1302, Address: 0x15d1c8, Func Offset: 0x1f8
	// Line 1303, Address: 0x15d218, Func Offset: 0x248
	// Line 1304, Address: 0x15d220, Func Offset: 0x250
	// Line 1305, Address: 0x15d234, Func Offset: 0x264
	// Line 1306, Address: 0x15d248, Func Offset: 0x278
	// Line 1307, Address: 0x15d25c, Func Offset: 0x28c
	// Line 1308, Address: 0x15d268, Func Offset: 0x298
	// Line 1310, Address: 0x15d28c, Func Offset: 0x2bc
	// Line 1311, Address: 0x15d2a8, Func Offset: 0x2d8
	// Line 1312, Address: 0x15d2c8, Func Offset: 0x2f8
	// Line 1313, Address: 0x15d2e4, Func Offset: 0x314
	// Line 1314, Address: 0x15d300, Func Offset: 0x330
	// Line 1315, Address: 0x15d31c, Func Offset: 0x34c
	// Line 1316, Address: 0x15d338, Func Offset: 0x368
	// Line 1317, Address: 0x15d340, Func Offset: 0x370
	// Func End, Address: 0x15d35c, Func Offset: 0x38c
}

// 
// Start address: 0x15d360
void enPAPSoundSigns(EnLOCAL_DATA* dp)
{
	int signs;
	// Line 1321, Address: 0x15d360, Func Offset: 0
	// Line 1323, Address: 0x15d370, Func Offset: 0x10
	// Line 1324, Address: 0x15d39c, Func Offset: 0x3c
	// Line 1326, Address: 0x15d3ac, Func Offset: 0x4c
	// Line 1327, Address: 0x15d3bc, Func Offset: 0x5c
	// Line 1328, Address: 0x15d3cc, Func Offset: 0x6c
	// Line 1330, Address: 0x15d3d0, Func Offset: 0x70
	// Line 1333, Address: 0x15d3f0, Func Offset: 0x90
	// Func End, Address: 0x15d404, Func Offset: 0xa4
}

