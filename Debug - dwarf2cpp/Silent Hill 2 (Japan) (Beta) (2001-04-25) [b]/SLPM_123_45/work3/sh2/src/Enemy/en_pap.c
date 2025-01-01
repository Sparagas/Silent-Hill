typedef struct _CL_VHIT_CHARA;
typedef struct SPACK_OT_DATA;
typedef struct _CL_HITPOLY_HEAD;
typedef struct SubCharacter;
typedef struct EnLOCAL_DATA;
typedef struct EnPATH_DATA;
typedef struct SPACK_ENV_DATA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon0;
typedef struct SPACK_STATIC_DATA;
typedef struct EnCOMMUNICATION;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct EnMKN_DATA;
typedef struct _anon1;
typedef struct EnIKE_DATA;
typedef struct EnRED_DATA;
typedef struct _anon2;
typedef struct _anon3;
typedef struct shSkelton;
typedef struct EnANIME_DATA;
typedef struct shBattleFight;
typedef struct EnNSE_DATA;
typedef struct shBattleShot;
typedef struct EnEDB_DATA;
typedef struct EnLOCAL_WORK;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct EnPAP_DATA;
typedef struct EnSCU_DATA;
typedef struct EnTYU_DATA;
typedef struct EnBOS_DATA;
typedef struct SPACK_DATA;
typedef struct shAttackInfo;
typedef union _anon4;
typedef struct _CL_VHIT_WALL;

typedef void(*type_8)(EnLOCAL_DATA*);
typedef void(*type_16)(EnLOCAL_DATA*);
typedef void(*type_20)(SubCharacter*);
typedef void(*type_24)(SubCharacter*);

typedef unsigned char type_0[10];
typedef float type_1[5];
typedef float type_2[5];
typedef float type_3[5];
typedef EnANIME_DATA type_4[31];
typedef unsigned char type_5[13];
typedef float type_6[5];
typedef short type_7[5];
typedef void(*type_9)(EnLOCAL_DATA*)[6];
typedef float type_10[5];
typedef short type_11[5];
typedef unsigned char type_12[34];
typedef float type_13[4];
typedef float type_14[4][4];
typedef float type_15[5];
typedef void(*type_17)(EnLOCAL_DATA*)[8];
typedef float type_18[5];
typedef unsigned char type_19[10];
typedef EnLOCAL_DATA type_21[64];
typedef shAttackInfo type_22[46];
typedef EnCOMMUNICATION type_23[8];
typedef char type_25[3];
typedef unsigned char type_26[4];
typedef int type_27[4];
typedef float type_28[4];
typedef float type_29[4][4];
typedef float type_30[4];
typedef float type_31[4][4];
typedef float type_32[5];
typedef float type_33[4];
typedef float type_34[4];
typedef float type_35[4][4];
typedef unsigned long type_36[4];
typedef char type_37[2];

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
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
	_anon1 pos;
	_anon1 rot;
	_anon1 pos_spd;
	_anon1 rot_spd;
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
	char anim;
	unsigned char anim_loop;
	char hoge[2];
	unsigned short flag;
	short anim_s;
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
	float size;
	float new_size;
	float tall;
	float new_tall;
	float center_y;
	float new_center;
	float eye_y;
	float new_eye;
	float p_dist;
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
		EnBOS_DATA bos;
	};
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

struct _CL_VHIT_RESULT
{
	int kind;
	_anon0 hobj;
};

union _anon0
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
};

struct EnCOMMUNICATION
{
	float pos[4];
	int kind;
	int type;
	int time;
	float dist;
};

struct EnAMBUSH_DATA
{
	short pl_x_min;
	short pl_z_min;
	short pl_x_max;
	short pl_z_max;
	short pos_x;
	short pos_z;
	float dir;
};

struct EnONI_DATA
{
	char id;
	short timer2;
	void* other;
};

struct EnMKN_DATA
{
	float stpos[4];
	float target[4];
	short frame;
};

struct _anon1
{
	float x;
	float y;
	float z;
	float w;
};

struct EnIKE_DATA
{
	float handpos[4];
	char direc;
};

struct EnRED_DATA
{
	int dummy;
};

struct _anon2
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

struct _anon3
{
	float d[4][4];
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon3 src_m;
	_anon1 src_t;
	_anon3 des_m;
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

struct EnANIME_DATA
{
	unsigned short Anime;
	unsigned char Loop;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct EnNSE_DATA
{
	float speed;
	float tspeed;
	char avoid;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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
};

struct EnLOCAL_WORK
{
	EnLOCAL_DATA Data[64];
	EnCOMMUNICATION Communication[8];
	int CommunicationNum;
	EnLOCAL_DATA* This;
	_CL_VHIT_RESULT HitResult;
	int Max3DSounds;
	EnLOCAL_DATA* view_data;
	short view_x;
	short view_y;
	float fps;
	float spf;
	unsigned int dbflag;
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
};

struct EnPAP_DATA
{
	float target[4];
};

struct EnSCU_DATA
{
	float stpos[4];
	float target[4];
	EnAMBUSH_DATA* ambush;
	int count;
};

struct EnTYU_DATA
{
	float point[4];
	EnCOMMUNICATION* tcomm;
};

struct EnBOS_DATA
{
	int dummy;
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
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon4 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union _anon4
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
EnANIME_DATA EnPAPAnime[31];
float dead_pos[4];
EnLOCAL_WORK enLocalWork;
SPACK_DATA spack;
_anon2 cam0;

void enPAPInitData(EnLOCAL_DATA* dp);
void enPAPCtrlMain(EnLOCAL_DATA* dp);
void enPAPCtrlAutomatic(EnLOCAL_DATA* dp);
void enPAPCtrlSleep(EnLOCAL_DATA* dp);
void enPAPCtrlGoPlayable(EnLOCAL_DATA* dp);
void enPAPCtrlHand(EnLOCAL_DATA* dp);
void enPAPCtrlWander(EnLOCAL_DATA* dp);
void enPAPCtrlStraight(EnLOCAL_DATA* dp);
void enPAPCtrlChase(EnLOCAL_DATA* dp);
void enPAPCtrlAttack(EnLOCAL_DATA* dp);
void enPAPCtrlDamage(EnLOCAL_DATA* dp);
void enPAPCtrlDown(EnLOCAL_DATA* dp);
void enPAPCtrlLastMove();
void enPAPMoveAngle(EnLOCAL_DATA* dp);
int enPAPCanSeePlayer(EnLOCAL_DATA* dp, float angle);
void enPAPAnimeSet(EnLOCAL_DATA* dp, int anim);
void enPAPAnimeReset(EnLOCAL_DATA* dp, int anim);
void enPAPAnimeExec(EnLOCAL_DATA* dp);
void enPAPAutoRecovery(EnLOCAL_DATA* dp);
float enPAPGetWalkSpeed(EnLOCAL_DATA* dp);
float enPAPGetRotSpeed();
float enPAPGetTurnSpeed(EnLOCAL_DATA* dp);
void enPAPSetDownTime(EnLOCAL_DATA* dp);
void enPAPSetMoveCount(EnLOCAL_DATA* dp);
void enPAPDrawBoad(EnLOCAL_DATA* dp);

// 
// Start address: 0x162b20
void enPAPInitData(EnLOCAL_DATA* dp)
{
	int mode;
	float endurance2[5];
	float vitarity2[5];
	float endurance[5];
	float vitarity[5];
	// Line 125, Address: 0x162b20, Func Offset: 0
	// Line 126, Address: 0x162b30, Func Offset: 0x10
	// Line 133, Address: 0x162b4c, Func Offset: 0x2c
	// Line 141, Address: 0x162b68, Func Offset: 0x48
	// Line 148, Address: 0x162b84, Func Offset: 0x64
	// Line 155, Address: 0x162ba0, Func Offset: 0x80
	// Line 157, Address: 0x162bac, Func Offset: 0x8c
	// Line 158, Address: 0x162bb8, Func Offset: 0x98
	// Line 159, Address: 0x162bcc, Func Offset: 0xac
	// Line 160, Address: 0x162be0, Func Offset: 0xc0
	// Line 161, Address: 0x162c04, Func Offset: 0xe4
	// Line 162, Address: 0x162c10, Func Offset: 0xf0
	// Line 163, Address: 0x162c18, Func Offset: 0xf8
	// Line 164, Address: 0x162c2c, Func Offset: 0x10c
	// Line 165, Address: 0x162c50, Func Offset: 0x130
	// Line 168, Address: 0x162c58, Func Offset: 0x138
	// Line 169, Address: 0x162c8c, Func Offset: 0x16c
	// Line 170, Address: 0x162c98, Func Offset: 0x178
	// Line 171, Address: 0x162ca8, Func Offset: 0x188
	// Line 172, Address: 0x162cb8, Func Offset: 0x198
	// Func End, Address: 0x162ccc, Func Offset: 0x1ac
}

// 
// Start address: 0x162cd0
void enPAPCtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlPAPFunc)(EnLOCAL_DATA*)[6];
	// Line 178, Address: 0x162cd0, Func Offset: 0
	// Line 179, Address: 0x162cdc, Func Offset: 0xc
	// Line 188, Address: 0x162cf8, Func Offset: 0x28
	// Line 189, Address: 0x162d20, Func Offset: 0x50
	// Func End, Address: 0x162d30, Func Offset: 0x60
}

// 
// Start address: 0x162d30
void enPAPCtrlAutomatic(EnLOCAL_DATA* dp)
{
	void(*enCtrlPAPSubFunc)(EnLOCAL_DATA*)[8];
	// Line 193, Address: 0x162d30, Func Offset: 0
	// Line 194, Address: 0x162d3c, Func Offset: 0xc
	// Line 205, Address: 0x162d58, Func Offset: 0x28
	// Line 207, Address: 0x162d68, Func Offset: 0x38
	// Line 210, Address: 0x162d90, Func Offset: 0x60
	// Line 212, Address: 0x162d9c, Func Offset: 0x6c
	// Line 213, Address: 0x162da8, Func Offset: 0x78
	// Func End, Address: 0x162db8, Func Offset: 0x88
}

// 
// Start address: 0x162dc0
void enPAPCtrlSleep(EnLOCAL_DATA* dp)
{
	// Line 217, Address: 0x162dc0, Func Offset: 0
	// Line 218, Address: 0x162dcc, Func Offset: 0xc
	// Line 219, Address: 0x162de0, Func Offset: 0x20
	// Line 220, Address: 0x162dec, Func Offset: 0x2c
	// Line 221, Address: 0x162e00, Func Offset: 0x40
	// Line 223, Address: 0x162e0c, Func Offset: 0x4c
	// Func End, Address: 0x162e1c, Func Offset: 0x5c
}

// 
// Start address: 0x162e20
void enPAPCtrlGoPlayable(EnLOCAL_DATA* dp)
{
	// Line 227, Address: 0x162e20, Func Offset: 0
	// Line 228, Address: 0x162e28, Func Offset: 0x8
	// Line 229, Address: 0x162e34, Func Offset: 0x14
	// Line 230, Address: 0x162e44, Func Offset: 0x24
	// Func End, Address: 0x162e50, Func Offset: 0x30
}

// 
// Start address: 0x162e50
void enPAPCtrlHand(EnLOCAL_DATA* dp)
{
	int move;
	// Line 240, Address: 0x162e50, Func Offset: 0
	// Line 242, Address: 0x162e60, Func Offset: 0x10
	// Line 243, Address: 0x162e70, Func Offset: 0x20
	// Line 244, Address: 0x162e84, Func Offset: 0x34
	// Line 245, Address: 0x162ea0, Func Offset: 0x50
	// Line 246, Address: 0x162ed4, Func Offset: 0x84
	// Line 247, Address: 0x162edc, Func Offset: 0x8c
	// Line 250, Address: 0x162f10, Func Offset: 0xc0
	// Line 251, Address: 0x162f24, Func Offset: 0xd4
	// Line 252, Address: 0x162f40, Func Offset: 0xf0
	// Line 253, Address: 0x162f74, Func Offset: 0x124
	// Line 254, Address: 0x162f7c, Func Offset: 0x12c
	// Line 257, Address: 0x162fb0, Func Offset: 0x160
	// Line 258, Address: 0x162fc4, Func Offset: 0x174
	// Line 259, Address: 0x162fd4, Func Offset: 0x184
	// Line 261, Address: 0x162fe0, Func Offset: 0x190
	// Line 262, Address: 0x162ff4, Func Offset: 0x1a4
	// Line 263, Address: 0x163004, Func Offset: 0x1b4
	// Line 265, Address: 0x163010, Func Offset: 0x1c0
	// Line 266, Address: 0x163024, Func Offset: 0x1d4
	// Line 267, Address: 0x16302c, Func Offset: 0x1dc
	// Line 268, Address: 0x16303c, Func Offset: 0x1ec
	// Line 269, Address: 0x163050, Func Offset: 0x200
	// Line 272, Address: 0x163060, Func Offset: 0x210
	// Line 273, Address: 0x163074, Func Offset: 0x224
	// Line 274, Address: 0x16307c, Func Offset: 0x22c
	// Line 275, Address: 0x163080, Func Offset: 0x230
	// Line 276, Address: 0x163090, Func Offset: 0x240
	// Line 277, Address: 0x1630a4, Func Offset: 0x254
	// Line 278, Address: 0x1630a8, Func Offset: 0x258
	// Line 281, Address: 0x1630b8, Func Offset: 0x268
	// Line 282, Address: 0x1630cc, Func Offset: 0x27c
	// Line 283, Address: 0x1630d4, Func Offset: 0x284
	// Line 284, Address: 0x1630d8, Func Offset: 0x288
	// Line 285, Address: 0x1630e8, Func Offset: 0x298
	// Line 286, Address: 0x1630fc, Func Offset: 0x2ac
	// Line 287, Address: 0x163100, Func Offset: 0x2b0
	// Line 290, Address: 0x163110, Func Offset: 0x2c0
	// Line 291, Address: 0x163124, Func Offset: 0x2d4
	// Line 292, Address: 0x16312c, Func Offset: 0x2dc
	// Line 293, Address: 0x163130, Func Offset: 0x2e0
	// Line 294, Address: 0x163140, Func Offset: 0x2f0
	// Line 295, Address: 0x163154, Func Offset: 0x304
	// Line 296, Address: 0x163158, Func Offset: 0x308
	// Line 299, Address: 0x163168, Func Offset: 0x318
	// Line 300, Address: 0x16317c, Func Offset: 0x32c
	// Line 302, Address: 0x16318c, Func Offset: 0x33c
	// Line 303, Address: 0x1631ac, Func Offset: 0x35c
	// Line 304, Address: 0x1631bc, Func Offset: 0x36c
	// Line 306, Address: 0x1631c0, Func Offset: 0x370
	// Line 307, Address: 0x1631d4, Func Offset: 0x384
	// Line 308, Address: 0x1631dc, Func Offset: 0x38c
	// Line 309, Address: 0x1631e0, Func Offset: 0x390
	// Line 311, Address: 0x1631f0, Func Offset: 0x3a0
	// Line 312, Address: 0x163204, Func Offset: 0x3b4
	// Line 313, Address: 0x163208, Func Offset: 0x3b8
	// Line 315, Address: 0x163218, Func Offset: 0x3c8
	// Line 316, Address: 0x16322c, Func Offset: 0x3dc
	// Line 317, Address: 0x163244, Func Offset: 0x3f4
	// Line 318, Address: 0x163250, Func Offset: 0x400
	// Line 319, Address: 0x163258, Func Offset: 0x408
	// Line 322, Address: 0x163264, Func Offset: 0x414
	// Line 323, Address: 0x163278, Func Offset: 0x428
	// Line 324, Address: 0x163284, Func Offset: 0x434
	// Line 326, Address: 0x163290, Func Offset: 0x440
	// Line 327, Address: 0x1632b0, Func Offset: 0x460
	// Line 328, Address: 0x1632b4, Func Offset: 0x464
	// Line 330, Address: 0x1632c4, Func Offset: 0x474
	// Line 331, Address: 0x1632e4, Func Offset: 0x494
	// Line 333, Address: 0x1632e8, Func Offset: 0x498
	// Line 334, Address: 0x163308, Func Offset: 0x4b8
	// Line 336, Address: 0x16330c, Func Offset: 0x4bc
	// Line 337, Address: 0x16332c, Func Offset: 0x4dc
	// Line 339, Address: 0x163330, Func Offset: 0x4e0
	// Line 340, Address: 0x16333c, Func Offset: 0x4ec
	// Line 341, Address: 0x163348, Func Offset: 0x4f8
	// Line 342, Address: 0x163350, Func Offset: 0x500
	// Line 344, Address: 0x16335c, Func Offset: 0x50c
	// Line 345, Address: 0x163370, Func Offset: 0x520
	// Line 346, Address: 0x16339c, Func Offset: 0x54c
	// Line 347, Address: 0x1633a4, Func Offset: 0x554
	// Line 349, Address: 0x1633d8, Func Offset: 0x588
	// Line 350, Address: 0x1633ec, Func Offset: 0x59c
	// Line 351, Address: 0x163410, Func Offset: 0x5c0
	// Line 355, Address: 0x16341c, Func Offset: 0x5cc
	// Line 356, Address: 0x163438, Func Offset: 0x5e8
	// Line 358, Address: 0x16343c, Func Offset: 0x5ec
	// Line 359, Address: 0x163444, Func Offset: 0x5f4
	// Line 361, Address: 0x163460, Func Offset: 0x610
	// Line 363, Address: 0x16346c, Func Offset: 0x61c
	// Line 364, Address: 0x163474, Func Offset: 0x624
	// Line 365, Address: 0x163480, Func Offset: 0x630
	// Line 367, Address: 0x16348c, Func Offset: 0x63c
	// Func End, Address: 0x1634a0, Func Offset: 0x650
}

// 
// Start address: 0x1634a0
void enPAPCtrlWander(EnLOCAL_DATA* dp)
{
	int t;
	float a;
	float vec[4];
	// Line 371, Address: 0x1634a0, Func Offset: 0
	// Line 375, Address: 0x1634b0, Func Offset: 0x10
	// Line 376, Address: 0x1634c4, Func Offset: 0x24
	// Line 377, Address: 0x1634d0, Func Offset: 0x30
	// Line 379, Address: 0x1634d8, Func Offset: 0x38
	// Line 380, Address: 0x1634ec, Func Offset: 0x4c
	// Line 381, Address: 0x1634f8, Func Offset: 0x58
	// Line 382, Address: 0x163504, Func Offset: 0x64
	// Line 383, Address: 0x16350c, Func Offset: 0x6c
	// Line 384, Address: 0x163538, Func Offset: 0x98
	// Line 385, Address: 0x163544, Func Offset: 0xa4
	// Line 387, Address: 0x16354c, Func Offset: 0xac
	// Line 389, Address: 0x16358c, Func Offset: 0xec
	// Line 390, Address: 0x16359c, Func Offset: 0xfc
	// Line 391, Address: 0x1635a8, Func Offset: 0x108
	// Line 392, Address: 0x1635bc, Func Offset: 0x11c
	// Line 393, Address: 0x1635dc, Func Offset: 0x13c
	// Line 394, Address: 0x1635fc, Func Offset: 0x15c
	// Line 395, Address: 0x163608, Func Offset: 0x168
	// Line 397, Address: 0x163610, Func Offset: 0x170
	// Line 398, Address: 0x163638, Func Offset: 0x198
	// Line 399, Address: 0x163648, Func Offset: 0x1a8
	// Line 400, Address: 0x163650, Func Offset: 0x1b0
	// Line 402, Address: 0x163658, Func Offset: 0x1b8
	// Line 404, Address: 0x1636d0, Func Offset: 0x230
	// Line 405, Address: 0x163718, Func Offset: 0x278
	// Line 406, Address: 0x163730, Func Offset: 0x290
	// Line 408, Address: 0x163750, Func Offset: 0x2b0
	// Line 409, Address: 0x163770, Func Offset: 0x2d0
	// Line 410, Address: 0x16378c, Func Offset: 0x2ec
	// Line 411, Address: 0x1637ac, Func Offset: 0x30c
	// Line 413, Address: 0x1637b0, Func Offset: 0x310
	// Line 415, Address: 0x1637b8, Func Offset: 0x318
	// Line 416, Address: 0x1637c8, Func Offset: 0x328
	// Line 417, Address: 0x1637d8, Func Offset: 0x338
	// Line 419, Address: 0x1637e0, Func Offset: 0x340
	// Line 421, Address: 0x1637e8, Func Offset: 0x348
	// Line 422, Address: 0x1637f8, Func Offset: 0x358
	// Line 423, Address: 0x163808, Func Offset: 0x368
	// Line 427, Address: 0x163810, Func Offset: 0x370
	// Line 428, Address: 0x16381c, Func Offset: 0x37c
	// Line 429, Address: 0x16384c, Func Offset: 0x3ac
	// Line 430, Address: 0x16385c, Func Offset: 0x3bc
	// Line 432, Address: 0x163864, Func Offset: 0x3c4
	// Line 433, Address: 0x163870, Func Offset: 0x3d0
	// Line 434, Address: 0x163884, Func Offset: 0x3e4
	// Line 436, Address: 0x163890, Func Offset: 0x3f0
	// Func End, Address: 0x1638a4, Func Offset: 0x404
}

// 
// Start address: 0x1638b0
void enPAPCtrlStraight(EnLOCAL_DATA* dp)
{
	float vec[4];
	// Line 440, Address: 0x1638b0, Func Offset: 0
	// Line 442, Address: 0x1638c0, Func Offset: 0x10
	// Line 443, Address: 0x1638d4, Func Offset: 0x24
	// Line 444, Address: 0x1638e0, Func Offset: 0x30
	// Line 445, Address: 0x1638ec, Func Offset: 0x3c
	// Line 447, Address: 0x1638f4, Func Offset: 0x44
	// Line 449, Address: 0x163934, Func Offset: 0x84
	// Line 450, Address: 0x163944, Func Offset: 0x94
	// Line 451, Address: 0x163950, Func Offset: 0xa0
	// Line 452, Address: 0x163964, Func Offset: 0xb4
	// Line 453, Address: 0x163984, Func Offset: 0xd4
	// Line 454, Address: 0x1639a4, Func Offset: 0xf4
	// Line 455, Address: 0x1639b0, Func Offset: 0x100
	// Line 457, Address: 0x1639b8, Func Offset: 0x108
	// Line 458, Address: 0x1639e0, Func Offset: 0x130
	// Line 459, Address: 0x1639f0, Func Offset: 0x140
	// Line 460, Address: 0x1639f8, Func Offset: 0x148
	// Line 462, Address: 0x163a00, Func Offset: 0x150
	// Line 463, Address: 0x163a20, Func Offset: 0x170
	// Line 464, Address: 0x163a2c, Func Offset: 0x17c
	// Line 465, Address: 0x163a38, Func Offset: 0x188
	// Line 467, Address: 0x163a40, Func Offset: 0x190
	// Line 468, Address: 0x163a60, Func Offset: 0x1b0
	// Line 469, Address: 0x163a88, Func Offset: 0x1d8
	// Line 470, Address: 0x163a98, Func Offset: 0x1e8
	// Line 471, Address: 0x163aa0, Func Offset: 0x1f0
	// Line 473, Address: 0x163aa8, Func Offset: 0x1f8
	// Line 475, Address: 0x163aac, Func Offset: 0x1fc
	// Line 477, Address: 0x163ab4, Func Offset: 0x204
	// Line 478, Address: 0x163ac4, Func Offset: 0x214
	// Line 479, Address: 0x163ad4, Func Offset: 0x224
	// Line 480, Address: 0x163adc, Func Offset: 0x22c
	// Line 481, Address: 0x163ae4, Func Offset: 0x234
	// Line 484, Address: 0x163aec, Func Offset: 0x23c
	// Line 485, Address: 0x163afc, Func Offset: 0x24c
	// Line 486, Address: 0x163b0c, Func Offset: 0x25c
	// Line 490, Address: 0x163b14, Func Offset: 0x264
	// Line 491, Address: 0x163b20, Func Offset: 0x270
	// Line 492, Address: 0x163b50, Func Offset: 0x2a0
	// Line 493, Address: 0x163b60, Func Offset: 0x2b0
	// Line 495, Address: 0x163b68, Func Offset: 0x2b8
	// Line 496, Address: 0x163b84, Func Offset: 0x2d4
	// Line 497, Address: 0x163ba4, Func Offset: 0x2f4
	// Line 498, Address: 0x163bb0, Func Offset: 0x300
	// Line 499, Address: 0x163bc4, Func Offset: 0x314
	// Line 501, Address: 0x163bd0, Func Offset: 0x320
	// Func End, Address: 0x163be4, Func Offset: 0x334
}

// 
// Start address: 0x163bf0
void enPAPCtrlChase(EnLOCAL_DATA* dp)
{
	int t;
	// Line 505, Address: 0x163bf0, Func Offset: 0
	// Line 507, Address: 0x163c04, Func Offset: 0x14
	// Line 508, Address: 0x163c18, Func Offset: 0x28
	// Line 509, Address: 0x163c24, Func Offset: 0x34
	// Line 511, Address: 0x163c2c, Func Offset: 0x3c
	// Line 512, Address: 0x163c40, Func Offset: 0x50
	// Line 513, Address: 0x163c50, Func Offset: 0x60
	// Line 514, Address: 0x163c5c, Func Offset: 0x6c
	// Line 515, Address: 0x163c7c, Func Offset: 0x8c
	// Line 516, Address: 0x163c8c, Func Offset: 0x9c
	// Line 517, Address: 0x163c9c, Func Offset: 0xac
	// Line 520, Address: 0x163ca4, Func Offset: 0xb4
	// Line 521, Address: 0x163cb4, Func Offset: 0xc4
	// Line 522, Address: 0x163cc0, Func Offset: 0xd0
	// Line 523, Address: 0x163ccc, Func Offset: 0xdc
	// Line 524, Address: 0x163ce4, Func Offset: 0xf4
	// Line 526, Address: 0x163d40, Func Offset: 0x150
	// Line 527, Address: 0x163d54, Func Offset: 0x164
	// Line 528, Address: 0x163d60, Func Offset: 0x170
	// Line 529, Address: 0x163d6c, Func Offset: 0x17c
	// Line 531, Address: 0x163db4, Func Offset: 0x1c4
	// Line 532, Address: 0x163dbc, Func Offset: 0x1cc
	// Line 534, Address: 0x163df4, Func Offset: 0x204
	// Line 535, Address: 0x163e04, Func Offset: 0x214
	// Line 538, Address: 0x163e0c, Func Offset: 0x21c
	// Line 539, Address: 0x163e18, Func Offset: 0x228
	// Func End, Address: 0x163e30, Func Offset: 0x240
}

// 
// Start address: 0x163e30
void enPAPCtrlAttack(EnLOCAL_DATA* dp)
{
	// Line 543, Address: 0x163e30, Func Offset: 0
	// Line 544, Address: 0x163e3c, Func Offset: 0xc
	// Line 545, Address: 0x163e50, Func Offset: 0x20
	// Line 546, Address: 0x163e64, Func Offset: 0x34
	// Line 548, Address: 0x163e6c, Func Offset: 0x3c
	// Line 550, Address: 0x163eb0, Func Offset: 0x80
	// Line 551, Address: 0x163ec0, Func Offset: 0x90
	// Line 552, Address: 0x163ecc, Func Offset: 0x9c
	// Line 553, Address: 0x163ed8, Func Offset: 0xa8
	// Line 554, Address: 0x163ee8, Func Offset: 0xb8
	// Line 557, Address: 0x163ef0, Func Offset: 0xc0
	// Line 558, Address: 0x163f04, Func Offset: 0xd4
	// Line 559, Address: 0x163f18, Func Offset: 0xe8
	// Line 560, Address: 0x163f34, Func Offset: 0x104
	// Line 561, Address: 0x163f48, Func Offset: 0x118
	// Line 562, Address: 0x163f5c, Func Offset: 0x12c
	// Line 563, Address: 0x163f80, Func Offset: 0x150
	// Line 564, Address: 0x163f90, Func Offset: 0x160
	// Line 565, Address: 0x163f9c, Func Offset: 0x16c
	// Line 566, Address: 0x163fa4, Func Offset: 0x174
	// Line 567, Address: 0x163fb4, Func Offset: 0x184
	// Line 570, Address: 0x163fc0, Func Offset: 0x190
	// Line 573, Address: 0x163fc8, Func Offset: 0x198
	// Line 574, Address: 0x163fec, Func Offset: 0x1bc
	// Line 575, Address: 0x163ffc, Func Offset: 0x1cc
	// Line 577, Address: 0x16400c, Func Offset: 0x1dc
	// Line 579, Address: 0x164014, Func Offset: 0x1e4
	// Line 580, Address: 0x164028, Func Offset: 0x1f8
	// Line 581, Address: 0x164034, Func Offset: 0x204
	// Line 582, Address: 0x16405c, Func Offset: 0x22c
	// Line 583, Address: 0x16406c, Func Offset: 0x23c
	// Line 585, Address: 0x164074, Func Offset: 0x244
	// Line 586, Address: 0x16408c, Func Offset: 0x25c
	// Line 587, Address: 0x16409c, Func Offset: 0x26c
	// Line 588, Address: 0x1640a4, Func Offset: 0x274
	// Line 593, Address: 0x1640b8, Func Offset: 0x288
	// Line 594, Address: 0x1640c4, Func Offset: 0x294
	// Func End, Address: 0x1640d4, Func Offset: 0x2a4
}

// 
// Start address: 0x1640e0
void enPAPCtrlDamage(EnLOCAL_DATA* dp)
{
	float d;
	// Line 598, Address: 0x1640e0, Func Offset: 0
	// Line 600, Address: 0x1640ec, Func Offset: 0xc
	// Line 602, Address: 0x164130, Func Offset: 0x50
	// Line 604, Address: 0x164164, Func Offset: 0x84
	// Line 605, Address: 0x164170, Func Offset: 0x90
	// Line 606, Address: 0x16417c, Func Offset: 0x9c
	// Line 607, Address: 0x164188, Func Offset: 0xa8
	// Line 608, Address: 0x164198, Func Offset: 0xb8
	// Line 609, Address: 0x1641a4, Func Offset: 0xc4
	// Line 611, Address: 0x1641ac, Func Offset: 0xcc
	// Line 612, Address: 0x1641b8, Func Offset: 0xd8
	// Line 613, Address: 0x1641c8, Func Offset: 0xe8
	// Line 615, Address: 0x164254, Func Offset: 0x174
	// Line 616, Address: 0x164270, Func Offset: 0x190
	// Line 617, Address: 0x164278, Func Offset: 0x198
	// Line 619, Address: 0x164294, Func Offset: 0x1b4
	// Line 620, Address: 0x1642cc, Func Offset: 0x1ec
	// Line 621, Address: 0x1642d8, Func Offset: 0x1f8
	// Line 622, Address: 0x164304, Func Offset: 0x224
	// Line 623, Address: 0x164310, Func Offset: 0x230
	// Line 624, Address: 0x164318, Func Offset: 0x238
	// Line 626, Address: 0x164324, Func Offset: 0x244
	// Line 627, Address: 0x164330, Func Offset: 0x250
	// Line 629, Address: 0x164338, Func Offset: 0x258
	// Line 630, Address: 0x16436c, Func Offset: 0x28c
	// Line 631, Address: 0x164380, Func Offset: 0x2a0
	// Line 632, Address: 0x16439c, Func Offset: 0x2bc
	// Line 634, Address: 0x1643a4, Func Offset: 0x2c4
	// Line 636, Address: 0x1643ac, Func Offset: 0x2cc
	// Line 637, Address: 0x1643c0, Func Offset: 0x2e0
	// Line 638, Address: 0x1643d4, Func Offset: 0x2f4
	// Line 640, Address: 0x1643e0, Func Offset: 0x300
	// Line 642, Address: 0x1643e8, Func Offset: 0x308
	// Line 643, Address: 0x1643fc, Func Offset: 0x31c
	// Line 644, Address: 0x164410, Func Offset: 0x330
	// Line 645, Address: 0x16442c, Func Offset: 0x34c
	// Line 649, Address: 0x164434, Func Offset: 0x354
	// Func End, Address: 0x164444, Func Offset: 0x364
}

// 
// Start address: 0x164450
void enPAPCtrlDown(EnLOCAL_DATA* dp)
{
	// Line 653, Address: 0x164450, Func Offset: 0
	// Line 654, Address: 0x16445c, Func Offset: 0xc
	// Line 656, Address: 0x164494, Func Offset: 0x44
	// Line 657, Address: 0x1644a0, Func Offset: 0x50
	// Line 658, Address: 0x1644b8, Func Offset: 0x68
	// Line 660, Address: 0x1644c4, Func Offset: 0x74
	// Line 661, Address: 0x1644f0, Func Offset: 0xa0
	// Line 662, Address: 0x164514, Func Offset: 0xc4
	// Line 663, Address: 0x164530, Func Offset: 0xe0
	// Line 664, Address: 0x164544, Func Offset: 0xf4
	// Line 665, Address: 0x16454c, Func Offset: 0xfc
	// Line 666, Address: 0x164558, Func Offset: 0x108
	// Line 667, Address: 0x164580, Func Offset: 0x130
	// Line 668, Address: 0x164594, Func Offset: 0x144
	// Line 669, Address: 0x1645a4, Func Offset: 0x154
	// Line 670, Address: 0x1645ac, Func Offset: 0x15c
	// Line 671, Address: 0x1645bc, Func Offset: 0x16c
	// Line 674, Address: 0x1645c8, Func Offset: 0x178
	// Line 676, Address: 0x1645d0, Func Offset: 0x180
	// Line 677, Address: 0x1645dc, Func Offset: 0x18c
	// Line 679, Address: 0x1645ec, Func Offset: 0x19c
	// Line 680, Address: 0x164600, Func Offset: 0x1b0
	// Line 681, Address: 0x164610, Func Offset: 0x1c0
	// Line 682, Address: 0x16461c, Func Offset: 0x1cc
	// Line 683, Address: 0x164628, Func Offset: 0x1d8
	// Line 684, Address: 0x16463c, Func Offset: 0x1ec
	// Line 685, Address: 0x164650, Func Offset: 0x200
	// Line 686, Address: 0x164660, Func Offset: 0x210
	// Line 688, Address: 0x164668, Func Offset: 0x218
	// Line 689, Address: 0x164674, Func Offset: 0x224
	// Line 690, Address: 0x164684, Func Offset: 0x234
	// Line 692, Address: 0x1646b4, Func Offset: 0x264
	// Line 693, Address: 0x1646c4, Func Offset: 0x274
	// Line 694, Address: 0x1646d0, Func Offset: 0x280
	// Line 695, Address: 0x1646dc, Func Offset: 0x28c
	// Line 696, Address: 0x164710, Func Offset: 0x2c0
	// Line 697, Address: 0x164724, Func Offset: 0x2d4
	// Line 698, Address: 0x164730, Func Offset: 0x2e0
	// Line 699, Address: 0x164750, Func Offset: 0x300
	// Line 700, Address: 0x16476c, Func Offset: 0x31c
	// Line 702, Address: 0x1647b0, Func Offset: 0x360
	// Line 703, Address: 0x1647c0, Func Offset: 0x370
	// Line 705, Address: 0x1647d4, Func Offset: 0x384
	// Line 706, Address: 0x1647dc, Func Offset: 0x38c
	// Line 708, Address: 0x164820, Func Offset: 0x3d0
	// Line 709, Address: 0x164830, Func Offset: 0x3e0
	// Line 710, Address: 0x164838, Func Offset: 0x3e8
	// Line 714, Address: 0x16484c, Func Offset: 0x3fc
	// Line 716, Address: 0x164854, Func Offset: 0x404
	// Line 717, Address: 0x164868, Func Offset: 0x418
	// Line 718, Address: 0x164874, Func Offset: 0x424
	// Line 719, Address: 0x164880, Func Offset: 0x430
	// Line 721, Address: 0x164894, Func Offset: 0x444
	// Line 723, Address: 0x16489c, Func Offset: 0x44c
	// Line 724, Address: 0x1648b0, Func Offset: 0x460
	// Line 725, Address: 0x1648bc, Func Offset: 0x46c
	// Line 726, Address: 0x1648c8, Func Offset: 0x478
	// Line 727, Address: 0x1648dc, Func Offset: 0x48c
	// Line 728, Address: 0x1648f0, Func Offset: 0x4a0
	// Line 729, Address: 0x164900, Func Offset: 0x4b0
	// Line 731, Address: 0x164908, Func Offset: 0x4b8
	// Line 732, Address: 0x164918, Func Offset: 0x4c8
	// Line 733, Address: 0x164954, Func Offset: 0x504
	// Line 734, Address: 0x164978, Func Offset: 0x528
	// Line 735, Address: 0x164994, Func Offset: 0x544
	// Line 736, Address: 0x1649a8, Func Offset: 0x558
	// Line 738, Address: 0x1649b0, Func Offset: 0x560
	// Line 739, Address: 0x1649d8, Func Offset: 0x588
	// Line 740, Address: 0x1649ec, Func Offset: 0x59c
	// Line 741, Address: 0x1649fc, Func Offset: 0x5ac
	// Line 742, Address: 0x164a04, Func Offset: 0x5b4
	// Line 743, Address: 0x164a14, Func Offset: 0x5c4
	// Line 745, Address: 0x164a20, Func Offset: 0x5d0
	// Line 747, Address: 0x164a28, Func Offset: 0x5d8
	// Line 748, Address: 0x164a3c, Func Offset: 0x5ec
	// Line 749, Address: 0x164a48, Func Offset: 0x5f8
	// Line 751, Address: 0x164a50, Func Offset: 0x600
	// Line 752, Address: 0x164a60, Func Offset: 0x610
	// Line 753, Address: 0x164a74, Func Offset: 0x624
	// Line 754, Address: 0x164a80, Func Offset: 0x630
	// Line 755, Address: 0x164a8c, Func Offset: 0x63c
	// Line 756, Address: 0x164ac0, Func Offset: 0x670
	// Line 759, Address: 0x164acc, Func Offset: 0x67c
	// Line 761, Address: 0x164ad4, Func Offset: 0x684
	// Line 762, Address: 0x164ae8, Func Offset: 0x698
	// Line 763, Address: 0x164af4, Func Offset: 0x6a4
	// Line 764, Address: 0x164b00, Func Offset: 0x6b0
	// Line 765, Address: 0x164b18, Func Offset: 0x6c8
	// Line 766, Address: 0x164b2c, Func Offset: 0x6dc
	// Line 767, Address: 0x164b40, Func Offset: 0x6f0
	// Line 768, Address: 0x164b50, Func Offset: 0x700
	// Line 770, Address: 0x164b58, Func Offset: 0x708
	// Line 771, Address: 0x164b68, Func Offset: 0x718
	// Line 772, Address: 0x164b74, Func Offset: 0x724
	// Line 773, Address: 0x164b90, Func Offset: 0x740
	// Line 774, Address: 0x164ba4, Func Offset: 0x754
	// Line 776, Address: 0x164bb4, Func Offset: 0x764
	// Line 778, Address: 0x164bbc, Func Offset: 0x76c
	// Line 779, Address: 0x164bd4, Func Offset: 0x784
	// Line 780, Address: 0x164be0, Func Offset: 0x790
	// Line 781, Address: 0x164bf4, Func Offset: 0x7a4
	// Line 782, Address: 0x164c0c, Func Offset: 0x7bc
	// Line 783, Address: 0x164c20, Func Offset: 0x7d0
	// Line 784, Address: 0x164c30, Func Offset: 0x7e0
	// Line 786, Address: 0x164c38, Func Offset: 0x7e8
	// Line 787, Address: 0x164c4c, Func Offset: 0x7fc
	// Line 788, Address: 0x164c58, Func Offset: 0x808
	// Line 789, Address: 0x164c78, Func Offset: 0x828
	// Line 790, Address: 0x164c90, Func Offset: 0x840
	// Line 791, Address: 0x164ca4, Func Offset: 0x854
	// Line 792, Address: 0x164cb4, Func Offset: 0x864
	// Line 793, Address: 0x164cc4, Func Offset: 0x874
	// Line 794, Address: 0x164cfc, Func Offset: 0x8ac
	// Line 798, Address: 0x164d08, Func Offset: 0x8b8
	// Func End, Address: 0x164d18, Func Offset: 0x8c8
}

// 
// Start address: 0x164d20
void enPAPCtrlLastMove()
{
	// Line 802, Address: 0x164d20, Func Offset: 0
	// Line 889, Address: 0x164d24, Func Offset: 0x4
	// Func End, Address: 0x164d30, Func Offset: 0x10
}

// 
// Start address: 0x164d30
void enPAPMoveAngle(EnLOCAL_DATA* dp)
{
	float d;
	float a;
	float tpos[4];
	float vec2[4];
	float vec[4];
	// Line 893, Address: 0x164d30, Func Offset: 0
	// Line 896, Address: 0x164d48, Func Offset: 0x18
	// Line 897, Address: 0x164d60, Func Offset: 0x30
	// Line 898, Address: 0x164d6c, Func Offset: 0x3c
	// Line 899, Address: 0x164d70, Func Offset: 0x40
	// Line 900, Address: 0x164d94, Func Offset: 0x64
	// Line 901, Address: 0x164db4, Func Offset: 0x84
	// Line 902, Address: 0x164dd8, Func Offset: 0xa8
	// Line 903, Address: 0x164df4, Func Offset: 0xc4
	// Line 904, Address: 0x164e24, Func Offset: 0xf4
	// Line 906, Address: 0x164e28, Func Offset: 0xf8
	// Line 907, Address: 0x164e44, Func Offset: 0x114
	// Line 908, Address: 0x164e74, Func Offset: 0x144
	// Line 910, Address: 0x164e78, Func Offset: 0x148
	// Line 911, Address: 0x164e88, Func Offset: 0x158
	// Line 912, Address: 0x164e90, Func Offset: 0x160
	// Line 915, Address: 0x164efc, Func Offset: 0x1cc
	// Line 916, Address: 0x164f0c, Func Offset: 0x1dc
	// Line 917, Address: 0x164f18, Func Offset: 0x1e8
	// Func End, Address: 0x164f34, Func Offset: 0x204
}

// 
// Start address: 0x164f40
int enPAPCanSeePlayer(EnLOCAL_DATA* dp, float angle)
{
	float a;
	float dist;
	float* ppos;
	// Line 922, Address: 0x164f40, Func Offset: 0
	// Line 923, Address: 0x164f64, Func Offset: 0x24
	// Line 925, Address: 0x164f74, Func Offset: 0x34
	// Line 926, Address: 0x164f90, Func Offset: 0x50
	// Line 927, Address: 0x164fa8, Func Offset: 0x68
	// Line 928, Address: 0x164fdc, Func Offset: 0x9c
	// Line 930, Address: 0x164fe8, Func Offset: 0xa8
	// Line 931, Address: 0x164fec, Func Offset: 0xac
	// Line 932, Address: 0x165018, Func Offset: 0xd8
	// Line 933, Address: 0x165030, Func Offset: 0xf0
	// Line 934, Address: 0x165044, Func Offset: 0x104
	// Line 935, Address: 0x165090, Func Offset: 0x150
	// Line 937, Address: 0x16509c, Func Offset: 0x15c
	// Line 938, Address: 0x1650c8, Func Offset: 0x188
	// Line 939, Address: 0x1650cc, Func Offset: 0x18c
	// Func End, Address: 0x1650f0, Func Offset: 0x1b0
}

// 
// Start address: 0x1650f0
void enPAPAnimeSet(EnLOCAL_DATA* dp, int anim)
{
	// Line 943, Address: 0x1650f0, Func Offset: 0
	// Line 944, Address: 0x165108, Func Offset: 0x18
	// Line 945, Address: 0x165124, Func Offset: 0x34
	// Line 946, Address: 0x165130, Func Offset: 0x40
	// Line 947, Address: 0x165140, Func Offset: 0x50
	// Line 949, Address: 0x16514c, Func Offset: 0x5c
	// Line 952, Address: 0x165154, Func Offset: 0x64
	// Line 953, Address: 0x1651ac, Func Offset: 0xbc
	// Line 954, Address: 0x1651bc, Func Offset: 0xcc
	// Line 955, Address: 0x1651ec, Func Offset: 0xfc
	// Line 956, Address: 0x1651f4, Func Offset: 0x104
	// Line 957, Address: 0x165220, Func Offset: 0x130
	// Line 958, Address: 0x165230, Func Offset: 0x140
	// Line 961, Address: 0x16523c, Func Offset: 0x14c
	// Line 962, Address: 0x16525c, Func Offset: 0x16c
	// Line 963, Address: 0x16526c, Func Offset: 0x17c
	// Line 964, Address: 0x165274, Func Offset: 0x184
	// Line 966, Address: 0x165284, Func Offset: 0x194
	// Func End, Address: 0x16529c, Func Offset: 0x1ac
}

// 
// Start address: 0x1652a0
void enPAPAnimeReset(EnLOCAL_DATA* dp, int anim)
{
	// Line 970, Address: 0x1652a0, Func Offset: 0
	// Line 972, Address: 0x1652b8, Func Offset: 0x18
	// Line 973, Address: 0x165310, Func Offset: 0x70
	// Line 974, Address: 0x165320, Func Offset: 0x80
	// Line 975, Address: 0x165350, Func Offset: 0xb0
	// Line 976, Address: 0x165358, Func Offset: 0xb8
	// Line 977, Address: 0x165384, Func Offset: 0xe4
	// Line 978, Address: 0x165394, Func Offset: 0xf4
	// Line 981, Address: 0x1653a0, Func Offset: 0x100
	// Line 982, Address: 0x1653c0, Func Offset: 0x120
	// Line 983, Address: 0x1653d0, Func Offset: 0x130
	// Line 984, Address: 0x1653d8, Func Offset: 0x138
	// Line 986, Address: 0x1653e8, Func Offset: 0x148
	// Func End, Address: 0x165400, Func Offset: 0x160
}

// 
// Start address: 0x165400
void enPAPAnimeExec(EnLOCAL_DATA* dp)
{
	int of;
	// Line 990, Address: 0x165400, Func Offset: 0
	// Line 991, Address: 0x165410, Func Offset: 0x10
	// Line 992, Address: 0x165418, Func Offset: 0x18
	// Line 993, Address: 0x165430, Func Offset: 0x30
	// Line 995, Address: 0x16544c, Func Offset: 0x4c
	// Line 997, Address: 0x165458, Func Offset: 0x58
	// Line 998, Address: 0x16548c, Func Offset: 0x8c
	// Line 1001, Address: 0x1654fc, Func Offset: 0xfc
	// Line 1002, Address: 0x165508, Func Offset: 0x108
	// Line 1004, Address: 0x16552c, Func Offset: 0x12c
	// Line 1006, Address: 0x165538, Func Offset: 0x138
	// Line 1016, Address: 0x1655f8, Func Offset: 0x1f8
	// Line 1022, Address: 0x165608, Func Offset: 0x208
	// Line 1024, Address: 0x16562c, Func Offset: 0x22c
	// Line 1025, Address: 0x165644, Func Offset: 0x244
	// Line 1026, Address: 0x165650, Func Offset: 0x250
	// Line 1027, Address: 0x165658, Func Offset: 0x258
	// Line 1030, Address: 0x165664, Func Offset: 0x264
	// Func End, Address: 0x165678, Func Offset: 0x278
}

// 
// Start address: 0x165680
void enPAPAutoRecovery(EnLOCAL_DATA* dp)
{
	float recover_rate[5];
	// Line 1034, Address: 0x165680, Func Offset: 0
	// Line 1035, Address: 0x16568c, Func Offset: 0xc
	// Line 1042, Address: 0x1656a8, Func Offset: 0x28
	// Line 1043, Address: 0x1656c8, Func Offset: 0x48
	// Func End, Address: 0x1656d8, Func Offset: 0x58
}

// 
// Start address: 0x1656e0
float enPAPGetWalkSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1047, Address: 0x1656e0, Func Offset: 0
	// Line 1048, Address: 0x1656f0, Func Offset: 0x10
	// Line 1055, Address: 0x16570c, Func Offset: 0x2c
	// Line 1056, Address: 0x165720, Func Offset: 0x40
	// Line 1057, Address: 0x165748, Func Offset: 0x68
	// Line 1059, Address: 0x165768, Func Offset: 0x88
	// Func End, Address: 0x16577c, Func Offset: 0x9c
}

// 
// Start address: 0x165780
float enPAPGetRotSpeed()
{
	float rot_rate[5];
	// Line 1063, Address: 0x165780, Func Offset: 0
	// Line 1064, Address: 0x165788, Func Offset: 0x8
	// Line 1071, Address: 0x1657a4, Func Offset: 0x24
	// Line 1072, Address: 0x1657c8, Func Offset: 0x48
	// Func End, Address: 0x1657d8, Func Offset: 0x58
}

// 
// Start address: 0x1657e0
float enPAPGetTurnSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float rot_rate[5];
	// Line 1076, Address: 0x1657e0, Func Offset: 0
	// Line 1077, Address: 0x1657f0, Func Offset: 0x10
	// Line 1084, Address: 0x16580c, Func Offset: 0x2c
	// Line 1085, Address: 0x165820, Func Offset: 0x40
	// Line 1086, Address: 0x165840, Func Offset: 0x60
	// Line 1087, Address: 0x165854, Func Offset: 0x74
	// Func End, Address: 0x165868, Func Offset: 0x88
}

// 
// Start address: 0x165870
void enPAPSetDownTime(EnLOCAL_DATA* dp)
{
	short down_time2[5];
	short down_time[5];
	// Line 1091, Address: 0x165870, Func Offset: 0
	// Line 1092, Address: 0x16587c, Func Offset: 0xc
	// Line 1099, Address: 0x165898, Func Offset: 0x28
	// Line 1106, Address: 0x1658b4, Func Offset: 0x44
	// Line 1107, Address: 0x1658cc, Func Offset: 0x5c
	// Line 1108, Address: 0x1658f4, Func Offset: 0x84
	// Line 1109, Address: 0x1658fc, Func Offset: 0x8c
	// Line 1111, Address: 0x165924, Func Offset: 0xb4
	// Func End, Address: 0x165934, Func Offset: 0xc4
}

// 
// Start address: 0x165940
void enPAPSetMoveCount(EnLOCAL_DATA* dp)
{
	int n;
	// Line 1115, Address: 0x165940, Func Offset: 0
	// Line 1117, Address: 0x165954, Func Offset: 0x14
	// Line 1118, Address: 0x1659b4, Func Offset: 0x74
	// Line 1119, Address: 0x1659c4, Func Offset: 0x84
	// Func End, Address: 0x1659dc, Func Offset: 0x9c
}

// 
// Start address: 0x1659e0
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
	// Line 1123, Address: 0x1659e0, Func Offset: 0
	// Line 1131, Address: 0x1659f8, Func Offset: 0x18
	// Line 1132, Address: 0x165a0c, Func Offset: 0x2c
	// Line 1133, Address: 0x165a2c, Func Offset: 0x4c
	// Line 1134, Address: 0x165a5c, Func Offset: 0x7c
	// Line 1135, Address: 0x165a7c, Func Offset: 0x9c
	// Line 1136, Address: 0x165a98, Func Offset: 0xb8
	// Line 1137, Address: 0x165ab8, Func Offset: 0xd8
	// Line 1138, Address: 0x165ad4, Func Offset: 0xf4
	// Line 1139, Address: 0x165af4, Func Offset: 0x114
	// Line 1140, Address: 0x165b14, Func Offset: 0x134
	// Line 1141, Address: 0x165b30, Func Offset: 0x150
	// Line 1142, Address: 0x165b50, Func Offset: 0x170
	// Line 1143, Address: 0x165b6c, Func Offset: 0x18c
	// Line 1144, Address: 0x165b70, Func Offset: 0x190
	// Line 1145, Address: 0x165b74, Func Offset: 0x194
	// Line 1146, Address: 0x165b80, Func Offset: 0x1a0
	// Line 1147, Address: 0x165ba0, Func Offset: 0x1c0
	// Line 1148, Address: 0x165bb4, Func Offset: 0x1d4
	// Line 1149, Address: 0x165c20, Func Offset: 0x240
	// Line 1150, Address: 0x165c70, Func Offset: 0x290
	// Line 1151, Address: 0x165c78, Func Offset: 0x298
	// Line 1152, Address: 0x165c90, Func Offset: 0x2b0
	// Line 1153, Address: 0x165ca8, Func Offset: 0x2c8
	// Line 1154, Address: 0x165cbc, Func Offset: 0x2dc
	// Line 1155, Address: 0x165cc8, Func Offset: 0x2e8
	// Line 1157, Address: 0x165cec, Func Offset: 0x30c
	// Line 1158, Address: 0x165d08, Func Offset: 0x328
	// Line 1159, Address: 0x165d20, Func Offset: 0x340
	// Line 1160, Address: 0x165d3c, Func Offset: 0x35c
	// Line 1161, Address: 0x165d58, Func Offset: 0x378
	// Line 1162, Address: 0x165d74, Func Offset: 0x394
	// Line 1163, Address: 0x165d90, Func Offset: 0x3b0
	// Line 1164, Address: 0x165d98, Func Offset: 0x3b8
	// Func End, Address: 0x165db4, Func Offset: 0x3d4
}

