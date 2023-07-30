typedef struct _CL_VHIT_CHARA;
typedef struct EnLOCAL_DATA;
typedef struct _CL_HITPOLY_HEAD;
typedef struct SubCharacter;
typedef struct EnPATH_DATA;
typedef struct SPACK_DATA;
typedef struct SPACK_OT_DATA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon0;
typedef struct EnCOMMUNICATION;
typedef struct EnAMBUSH_DATA;
typedef struct SPACK_ENV_DATA;
typedef struct EnONI_DATA;
typedef struct EnMKN_DATA;
typedef struct _anon1;
typedef struct SPACK_STATIC_DATA;
typedef struct EnIKE_DATA;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct EnRED_DATA;
typedef struct _anon2;
typedef struct shSkelton;
typedef struct EDB_ANM_DATA1;
typedef struct EnANIME_DATA;
typedef struct _VbWVSMATRIX;
typedef struct shBattleFight;
typedef struct EnNSE_DATA;
typedef struct shBattleShot;
typedef struct EnEDB_DATA;
typedef struct EnLOCAL_WORK;
typedef struct _AnimeInfo;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct EnPAP_DATA;
typedef struct EnSCU_DATA;
typedef struct EnTYU_DATA;
typedef struct EnBOS_DATA;
typedef struct EDB_ANM_DATA2;
typedef struct shAttackInfo;
typedef struct shStayObjectSettingData;
typedef union _anon3;
typedef struct _CL_VHIT_WALL;

typedef void(*type_18)(SubCharacter*);
typedef void(*type_22)(EnLOCAL_DATA*);
typedef void(*type_23)(SubCharacter*);
typedef void(*type_33)(EnLOCAL_DATA*);

typedef short type_0[5];
typedef unsigned char type_1[10];
typedef shStayObjectSettingData type_2[11];
typedef float type_3[5];
typedef float type_4[5];
typedef float type_5[5];
typedef unsigned char type_6[13];
typedef float type_7[5];
typedef unsigned char type_8[34];
typedef SubCharacter type_9[11];
typedef EnANIME_DATA type_10[22];
typedef float type_11[4][2];
typedef float type_12[4];
typedef float type_13[4][4];
typedef float type_14[5];
typedef EDB_ANM_DATA1 type_15[6];
typedef _AnimeInfo type_16[5];
typedef unsigned char type_17[10];
typedef EnLOCAL_DATA type_19[64];
typedef shAttackInfo type_20[46];
typedef EnCOMMUNICATION type_21[8];
typedef void(*type_24)(EnLOCAL_DATA*)[6];
typedef char type_25[3];
typedef unsigned char type_26[4];
typedef int type_27[4];
typedef float type_28[4];
typedef float type_29[4][6];
typedef float type_30[4];
typedef float type_31[4][4];
typedef float type_32[4];
typedef void(*type_34)(EnLOCAL_DATA*)[10];
typedef EDB_ANM_DATA2 type_35[6];
typedef float type_36[5];
typedef int type_37[4][4];
typedef float type_38[5];
typedef char type_39[2];

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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
	_anon2 mat;
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

struct EnPATH_DATA
{
	float angle;
	float markangle;
	float dist;
	char step;
	char deadend;
	short timer;
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

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
};

struct EnIKE_DATA
{
	float handpos[4];
	char direc;
};

struct _CL_HITPOLY_COLUMN
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4][2];
};

struct EnRED_DATA
{
	int dummy;
};

struct _anon2
{
	float d[4][4];
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon2 src_m;
	_anon1 src_t;
	_anon2 des_m;
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

struct EDB_ANM_DATA1
{
	short start1;
	short end1;
	float rate1;
	short end2;
	float rate2;
};

struct EnANIME_DATA
{
	unsigned short Anime;
	unsigned char Loop;
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
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

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	unsigned char pad;
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

struct EDB_ANM_DATA2
{
	short end;
	float rate;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon3 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
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

union _anon3
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
float door_pos[4];
float room_corner[4][6];
_AnimeInfo nik_anim[5];
shStayObjectSettingData nik_pos_data[11];
EnANIME_DATA EnEDBAnime[22];
EnLOCAL_WORK enLocalWork;
SubCharacter DummyMeat[11];
SPACK_DATA spack;
_VbWVSMATRIX VbWvsMatrix;

void enEDBInitData(EnLOCAL_DATA* dp);
void enEDBCtrlMain(EnLOCAL_DATA* dp);
void enEDBCtrlAutomatic(EnLOCAL_DATA* dp);
void enEDBCtrlGoPlayable(EnLOCAL_DATA* dp);
void enEDBCtrlHand(EnLOCAL_DATA* dp);
void enEDBCtrlApproach(EnLOCAL_DATA* dp);
void enEDBCtrlFeint(EnLOCAL_DATA* dp);
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
void enEDBAutoRecovery(EnLOCAL_DATA* dp);
float enEDBGetSpeed(EnLOCAL_DATA* dp);
float enEDBGetWalkSpeed(EnLOCAL_DATA* dp);
float enEDBGetRunSpeed(EnLOCAL_DATA* dp);
float enEDBGetHoldSpeed(EnLOCAL_DATA* dp);
int enEDBGetDefAfford();
void enEDBAddAfford(EnLOCAL_DATA* dp);
void SetMeat();
void draw_poly(float* pos1, float* pos2);

// 
// Start address: 0x154170
void enEDBInitData(EnLOCAL_DATA* dp)
{
	float hp;
	int mode;
	float endurance[5];
	float vitarity2[5];
	float vitarity1[5];
	// Line 176, Address: 0x154170, Func Offset: 0
	// Line 177, Address: 0x154180, Func Offset: 0x10
	// Line 184, Address: 0x15419c, Func Offset: 0x2c
	// Line 191, Address: 0x1541b8, Func Offset: 0x48
	// Line 198, Address: 0x1541d4, Func Offset: 0x64
	// Line 201, Address: 0x1541e0, Func Offset: 0x70
	// Line 202, Address: 0x1541ec, Func Offset: 0x7c
	// Line 203, Address: 0x1541fc, Func Offset: 0x8c
	// Line 205, Address: 0x154208, Func Offset: 0x98
	// Line 207, Address: 0x154230, Func Offset: 0xc0
	// Line 208, Address: 0x154240, Func Offset: 0xd0
	// Line 209, Address: 0x154248, Func Offset: 0xd8
	// Line 210, Address: 0x154258, Func Offset: 0xe8
	// Line 212, Address: 0x154260, Func Offset: 0xf0
	// Line 213, Address: 0x154274, Func Offset: 0x104
	// Line 214, Address: 0x154280, Func Offset: 0x110
	// Line 215, Address: 0x154290, Func Offset: 0x120
	// Line 216, Address: 0x1542a0, Func Offset: 0x130
	// Line 218, Address: 0x1542b0, Func Offset: 0x140
	// Line 220, Address: 0x1542c4, Func Offset: 0x154
	// Line 222, Address: 0x1542cc, Func Offset: 0x15c
	// Line 223, Address: 0x1542e0, Func Offset: 0x170
	// Line 225, Address: 0x1542e8, Func Offset: 0x178
	// Line 226, Address: 0x1542f4, Func Offset: 0x184
	// Line 229, Address: 0x154308, Func Offset: 0x198
	// Line 231, Address: 0x154324, Func Offset: 0x1b4
	// Line 232, Address: 0x15435c, Func Offset: 0x1ec
	// Line 234, Address: 0x154368, Func Offset: 0x1f8
	// Line 235, Address: 0x154374, Func Offset: 0x204
	// Line 236, Address: 0x15438c, Func Offset: 0x21c
	// Line 237, Address: 0x15439c, Func Offset: 0x22c
	// Line 238, Address: 0x1543ac, Func Offset: 0x23c
	// Line 239, Address: 0x1543bc, Func Offset: 0x24c
	// Func End, Address: 0x1543d0, Func Offset: 0x260
}

// 
// Start address: 0x1543d0
void enEDBCtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlEDBFunc)(EnLOCAL_DATA*)[6];
	// Line 245, Address: 0x1543d0, Func Offset: 0
	// Line 246, Address: 0x1543dc, Func Offset: 0xc
	// Line 255, Address: 0x1543f8, Func Offset: 0x28
	// Line 257, Address: 0x154420, Func Offset: 0x50
	// Line 258, Address: 0x154444, Func Offset: 0x74
	// Func End, Address: 0x154454, Func Offset: 0x84
}

// 
// Start address: 0x154460
void enEDBCtrlAutomatic(EnLOCAL_DATA* dp)
{
	int n;
	void(*enCtrlEDBSubFunc)(EnLOCAL_DATA*)[10];
	// Line 262, Address: 0x154460, Func Offset: 0
	// Line 263, Address: 0x154474, Func Offset: 0x14
	// Line 276, Address: 0x154498, Func Offset: 0x38
	// Line 277, Address: 0x1544c0, Func Offset: 0x60
	// Line 279, Address: 0x1544e8, Func Offset: 0x88
	// Line 281, Address: 0x1544f8, Func Offset: 0x98
	// Line 284, Address: 0x154520, Func Offset: 0xc0
	// Line 286, Address: 0x154590, Func Offset: 0x130
	// Line 288, Address: 0x15459c, Func Offset: 0x13c
	// Line 290, Address: 0x1545a8, Func Offset: 0x148
	// Line 291, Address: 0x1545bc, Func Offset: 0x15c
	// Line 292, Address: 0x154604, Func Offset: 0x1a4
	// Line 293, Address: 0x154620, Func Offset: 0x1c0
	// Line 294, Address: 0x154634, Func Offset: 0x1d4
	// Line 295, Address: 0x154640, Func Offset: 0x1e0
	// Line 296, Address: 0x15466c, Func Offset: 0x20c
	// Line 299, Address: 0x154698, Func Offset: 0x238
	// Func End, Address: 0x1546b0, Func Offset: 0x250
}

// 
// Start address: 0x1546b0
void enEDBCtrlGoPlayable(EnLOCAL_DATA* dp)
{
	// Line 303, Address: 0x1546b0, Func Offset: 0
	// Line 304, Address: 0x1546b8, Func Offset: 0x8
	// Line 305, Address: 0x1546c4, Func Offset: 0x14
	// Line 306, Address: 0x1546d8, Func Offset: 0x28
	// Func End, Address: 0x1546e4, Func Offset: 0x34
}

// 
// Start address: 0x1546f0
void enEDBCtrlHand(EnLOCAL_DATA* dp)
{
	int dash;
	int move;
	float s;
	int nn;
	// Line 310, Address: 0x1546f0, Func Offset: 0
	// Line 312, Address: 0x154704, Func Offset: 0x14
	// Line 313, Address: 0x154710, Func Offset: 0x20
	// Line 314, Address: 0x154720, Func Offset: 0x30
	// Line 316, Address: 0x154724, Func Offset: 0x34
	// Line 317, Address: 0x154740, Func Offset: 0x50
	// Line 318, Address: 0x154750, Func Offset: 0x60
	// Line 319, Address: 0x154754, Func Offset: 0x64
	// Line 320, Address: 0x15477c, Func Offset: 0x8c
	// Line 321, Address: 0x15478c, Func Offset: 0x9c
	// Line 322, Address: 0x154790, Func Offset: 0xa0
	// Line 323, Address: 0x1547b8, Func Offset: 0xc8
	// Line 324, Address: 0x1547d0, Func Offset: 0xe0
	// Line 325, Address: 0x1547e0, Func Offset: 0xf0
	// Line 326, Address: 0x1547e8, Func Offset: 0xf8
	// Line 327, Address: 0x1547f8, Func Offset: 0x108
	// Line 328, Address: 0x154808, Func Offset: 0x118
	// Line 330, Address: 0x154814, Func Offset: 0x124
	// Line 332, Address: 0x154818, Func Offset: 0x128
	// Line 333, Address: 0x154820, Func Offset: 0x130
	// Line 334, Address: 0x154834, Func Offset: 0x144
	// Line 336, Address: 0x154838, Func Offset: 0x148
	// Line 337, Address: 0x15484c, Func Offset: 0x15c
	// Line 338, Address: 0x154854, Func Offset: 0x164
	// Line 339, Address: 0x154864, Func Offset: 0x174
	// Line 340, Address: 0x154870, Func Offset: 0x180
	// Line 341, Address: 0x154888, Func Offset: 0x198
	// Line 342, Address: 0x154890, Func Offset: 0x1a0
	// Line 343, Address: 0x1548a0, Func Offset: 0x1b0
	// Line 344, Address: 0x1548ac, Func Offset: 0x1bc
	// Line 347, Address: 0x1548c4, Func Offset: 0x1d4
	// Line 348, Address: 0x1548d8, Func Offset: 0x1e8
	// Line 349, Address: 0x1548e0, Func Offset: 0x1f0
	// Line 350, Address: 0x1548f0, Func Offset: 0x200
	// Line 351, Address: 0x1548fc, Func Offset: 0x20c
	// Line 352, Address: 0x154914, Func Offset: 0x224
	// Line 353, Address: 0x15491c, Func Offset: 0x22c
	// Line 354, Address: 0x15492c, Func Offset: 0x23c
	// Line 355, Address: 0x154938, Func Offset: 0x248
	// Line 358, Address: 0x154950, Func Offset: 0x260
	// Line 359, Address: 0x154964, Func Offset: 0x274
	// Line 360, Address: 0x15497c, Func Offset: 0x28c
	// Line 361, Address: 0x15498c, Func Offset: 0x29c
	// Line 362, Address: 0x1549a0, Func Offset: 0x2b0
	// Line 364, Address: 0x1549b0, Func Offset: 0x2c0
	// Line 365, Address: 0x1549b8, Func Offset: 0x2c8
	// Line 368, Address: 0x1549ec, Func Offset: 0x2fc
	// Line 369, Address: 0x154a00, Func Offset: 0x310
	// Line 370, Address: 0x154a18, Func Offset: 0x328
	// Line 371, Address: 0x154a28, Func Offset: 0x338
	// Line 372, Address: 0x154a3c, Func Offset: 0x34c
	// Line 374, Address: 0x154a4c, Func Offset: 0x35c
	// Line 375, Address: 0x154a54, Func Offset: 0x364
	// Line 378, Address: 0x154a88, Func Offset: 0x398
	// Line 379, Address: 0x154a9c, Func Offset: 0x3ac
	// Line 381, Address: 0x154aac, Func Offset: 0x3bc
	// Line 382, Address: 0x154ac0, Func Offset: 0x3d0
	// Line 383, Address: 0x154ad0, Func Offset: 0x3e0
	// Line 385, Address: 0x154adc, Func Offset: 0x3ec
	// Line 386, Address: 0x154af0, Func Offset: 0x400
	// Line 387, Address: 0x154b0c, Func Offset: 0x41c
	// Line 389, Address: 0x154b18, Func Offset: 0x428
	// Line 390, Address: 0x154b2c, Func Offset: 0x43c
	// Line 391, Address: 0x154b48, Func Offset: 0x458
	// Line 393, Address: 0x154b54, Func Offset: 0x464
	// Line 394, Address: 0x154b68, Func Offset: 0x478
	// Line 396, Address: 0x154b90, Func Offset: 0x4a0
	// Line 397, Address: 0x154ba4, Func Offset: 0x4b4
	// Line 398, Address: 0x154bb4, Func Offset: 0x4c4
	// Line 400, Address: 0x154bb8, Func Offset: 0x4c8
	// Line 401, Address: 0x154bd8, Func Offset: 0x4e8
	// Line 402, Address: 0x154bec, Func Offset: 0x4fc
	// Line 404, Address: 0x154c20, Func Offset: 0x530
	// Line 405, Address: 0x154c34, Func Offset: 0x544
	// Line 408, Address: 0x154c68, Func Offset: 0x578
	// Line 409, Address: 0x154c7c, Func Offset: 0x58c
	// Line 410, Address: 0x154c94, Func Offset: 0x5a4
	// Line 411, Address: 0x154ca0, Func Offset: 0x5b0
	// Line 412, Address: 0x154ca8, Func Offset: 0x5b8
	// Line 415, Address: 0x154cb4, Func Offset: 0x5c4
	// Line 416, Address: 0x154ce0, Func Offset: 0x5f0
	// Line 418, Address: 0x154ce4, Func Offset: 0x5f4
	// Line 419, Address: 0x154d00, Func Offset: 0x610
	// Line 421, Address: 0x154d04, Func Offset: 0x614
	// Line 422, Address: 0x154d18, Func Offset: 0x628
	// Line 423, Address: 0x154d34, Func Offset: 0x644
	// Line 424, Address: 0x154d40, Func Offset: 0x650
	// Line 425, Address: 0x154d4c, Func Offset: 0x65c
	// Line 427, Address: 0x154d58, Func Offset: 0x668
	// Line 428, Address: 0x154d60, Func Offset: 0x670
	// Line 429, Address: 0x154d80, Func Offset: 0x690
	// Line 430, Address: 0x154d8c, Func Offset: 0x69c
	// Line 432, Address: 0x154d98, Func Offset: 0x6a8
	// Func End, Address: 0x154db0, Func Offset: 0x6c0
}

// 
// Start address: 0x154db0
void enEDBCtrlApproach(EnLOCAL_DATA* dp)
{
	int c;
	int t;
	// Line 436, Address: 0x154db0, Func Offset: 0
	// Line 438, Address: 0x154dc4, Func Offset: 0x14
	// Line 439, Address: 0x154de8, Func Offset: 0x38
	// Line 440, Address: 0x154dfc, Func Offset: 0x4c
	// Line 441, Address: 0x154e10, Func Offset: 0x60
	// Line 444, Address: 0x154e18, Func Offset: 0x68
	// Line 445, Address: 0x154e30, Func Offset: 0x80
	// Line 446, Address: 0x154e40, Func Offset: 0x90
	// Line 447, Address: 0x154e68, Func Offset: 0xb8
	// Line 448, Address: 0x154e7c, Func Offset: 0xcc
	// Line 450, Address: 0x154e84, Func Offset: 0xd4
	// Line 451, Address: 0x154ea8, Func Offset: 0xf8
	// Line 452, Address: 0x154ebc, Func Offset: 0x10c
	// Line 454, Address: 0x154ec4, Func Offset: 0x114
	// Line 455, Address: 0x154ef8, Func Offset: 0x148
	// Line 456, Address: 0x154f0c, Func Offset: 0x15c
	// Line 458, Address: 0x154f14, Func Offset: 0x164
	// Line 459, Address: 0x154f2c, Func Offset: 0x17c
	// Line 460, Address: 0x154f48, Func Offset: 0x198
	// Line 461, Address: 0x154f58, Func Offset: 0x1a8
	// Line 463, Address: 0x154f68, Func Offset: 0x1b8
	// Line 464, Address: 0x154f7c, Func Offset: 0x1cc
	// Line 465, Address: 0x154f98, Func Offset: 0x1e8
	// Line 466, Address: 0x154fcc, Func Offset: 0x21c
	// Line 467, Address: 0x154fd8, Func Offset: 0x228
	// Func End, Address: 0x154ff0, Func Offset: 0x240
}

// 
// Start address: 0x154ff0
void enEDBCtrlFeint(EnLOCAL_DATA* dp)
{
	float pos2[4];
	float pos1[4];
	float vec[4];
	float d2;
	float d1;
	int c;
	// Line 471, Address: 0x154ff0, Func Offset: 0
	// Line 475, Address: 0x155008, Func Offset: 0x18
	// Line 476, Address: 0x155028, Func Offset: 0x38
	// Line 477, Address: 0x15503c, Func Offset: 0x4c
	// Line 478, Address: 0x155048, Func Offset: 0x58
	// Line 481, Address: 0x155050, Func Offset: 0x60
	// Line 483, Address: 0x155078, Func Offset: 0x88
	// Line 484, Address: 0x1550ac, Func Offset: 0xbc
	// Line 485, Address: 0x1550d0, Func Offset: 0xe0
	// Line 486, Address: 0x1550f4, Func Offset: 0x104
	// Line 487, Address: 0x155110, Func Offset: 0x120
	// Line 488, Address: 0x155128, Func Offset: 0x138
	// Line 489, Address: 0x155140, Func Offset: 0x150
	// Line 490, Address: 0x155158, Func Offset: 0x168
	// Line 491, Address: 0x15517c, Func Offset: 0x18c
	// Line 492, Address: 0x155184, Func Offset: 0x194
	// Line 494, Address: 0x15518c, Func Offset: 0x19c
	// Line 495, Address: 0x155194, Func Offset: 0x1a4
	// Line 496, Address: 0x1551ac, Func Offset: 0x1bc
	// Line 497, Address: 0x1551b4, Func Offset: 0x1c4
	// Line 498, Address: 0x1551bc, Func Offset: 0x1cc
	// Line 499, Address: 0x1551c4, Func Offset: 0x1d4
	// Line 502, Address: 0x1551cc, Func Offset: 0x1dc
	// Line 503, Address: 0x1551dc, Func Offset: 0x1ec
	// Line 504, Address: 0x1551f0, Func Offset: 0x200
	// Line 505, Address: 0x1551fc, Func Offset: 0x20c
	// Line 507, Address: 0x155204, Func Offset: 0x214
	// Line 509, Address: 0x15524c, Func Offset: 0x25c
	// Line 510, Address: 0x15526c, Func Offset: 0x27c
	// Line 511, Address: 0x15528c, Func Offset: 0x29c
	// Line 513, Address: 0x1552d4, Func Offset: 0x2e4
	// Line 514, Address: 0x1552f4, Func Offset: 0x304
	// Line 515, Address: 0x155310, Func Offset: 0x320
	// Line 516, Address: 0x155328, Func Offset: 0x338
	// Line 517, Address: 0x155334, Func Offset: 0x344
	// Line 518, Address: 0x15533c, Func Offset: 0x34c
	// Line 519, Address: 0x155344, Func Offset: 0x354
	// Line 522, Address: 0x15534c, Func Offset: 0x35c
	// Line 523, Address: 0x155364, Func Offset: 0x374
	// Line 525, Address: 0x15538c, Func Offset: 0x39c
	// Line 526, Address: 0x15539c, Func Offset: 0x3ac
	// Line 528, Address: 0x1553d4, Func Offset: 0x3e4
	// Line 529, Address: 0x1553e0, Func Offset: 0x3f0
	// Line 530, Address: 0x155408, Func Offset: 0x418
	// Line 533, Address: 0x155414, Func Offset: 0x424
	// Line 534, Address: 0x155418, Func Offset: 0x428
	// Line 535, Address: 0x155424, Func Offset: 0x434
	// Func End, Address: 0x155440, Func Offset: 0x450
}

// 
// Start address: 0x155440
void enEDBCtrlHidden(EnLOCAL_DATA* dp)
{
	float a;
	// Line 539, Address: 0x155440, Func Offset: 0
	// Line 541, Address: 0x155450, Func Offset: 0x10
	// Line 542, Address: 0x155470, Func Offset: 0x30
	// Line 543, Address: 0x155484, Func Offset: 0x44
	// Line 544, Address: 0x155490, Func Offset: 0x50
	// Line 547, Address: 0x155498, Func Offset: 0x58
	// Line 549, Address: 0x1554cc, Func Offset: 0x8c
	// Line 550, Address: 0x1554dc, Func Offset: 0x9c
	// Line 551, Address: 0x1554f4, Func Offset: 0xb4
	// Line 552, Address: 0x155500, Func Offset: 0xc0
	// Line 554, Address: 0x155508, Func Offset: 0xc8
	// Line 555, Address: 0x155518, Func Offset: 0xd8
	// Line 557, Address: 0x155524, Func Offset: 0xe4
	// Line 558, Address: 0x155544, Func Offset: 0x104
	// Line 559, Address: 0x155550, Func Offset: 0x110
	// Line 561, Address: 0x155558, Func Offset: 0x118
	// Line 562, Address: 0x1555a4, Func Offset: 0x164
	// Line 563, Address: 0x1555ac, Func Offset: 0x16c
	// Line 565, Address: 0x1555b4, Func Offset: 0x174
	// Line 566, Address: 0x1555cc, Func Offset: 0x18c
	// Line 567, Address: 0x1555e0, Func Offset: 0x1a0
	// Line 568, Address: 0x1555f8, Func Offset: 0x1b8
	// Line 569, Address: 0x155618, Func Offset: 0x1d8
	// Line 570, Address: 0x155628, Func Offset: 0x1e8
	// Line 571, Address: 0x155630, Func Offset: 0x1f0
	// Line 572, Address: 0x155638, Func Offset: 0x1f8
	// Line 573, Address: 0x155658, Func Offset: 0x218
	// Line 574, Address: 0x155668, Func Offset: 0x228
	// Line 575, Address: 0x155670, Func Offset: 0x230
	// Line 578, Address: 0x155678, Func Offset: 0x238
	// Line 579, Address: 0x155690, Func Offset: 0x250
	// Line 581, Address: 0x1556b8, Func Offset: 0x278
	// Line 583, Address: 0x1556c0, Func Offset: 0x280
	// Line 584, Address: 0x1556cc, Func Offset: 0x28c
	// Line 585, Address: 0x1556dc, Func Offset: 0x29c
	// Line 586, Address: 0x1556ec, Func Offset: 0x2ac
	// Line 587, Address: 0x155700, Func Offset: 0x2c0
	// Line 588, Address: 0x155710, Func Offset: 0x2d0
	// Line 589, Address: 0x155718, Func Offset: 0x2d8
	// Line 593, Address: 0x155720, Func Offset: 0x2e0
	// Line 594, Address: 0x15572c, Func Offset: 0x2ec
	// Line 595, Address: 0x155740, Func Offset: 0x300
	// Line 596, Address: 0x155750, Func Offset: 0x310
	// Line 597, Address: 0x155758, Func Offset: 0x318
	// Line 598, Address: 0x155760, Func Offset: 0x320
	// Line 599, Address: 0x155770, Func Offset: 0x330
	// Line 600, Address: 0x155780, Func Offset: 0x340
	// Line 602, Address: 0x155788, Func Offset: 0x348
	// Line 604, Address: 0x155790, Func Offset: 0x350
	// Line 605, Address: 0x15579c, Func Offset: 0x35c
	// Line 606, Address: 0x1557ac, Func Offset: 0x36c
	// Line 607, Address: 0x1557c0, Func Offset: 0x380
	// Line 608, Address: 0x1557d0, Func Offset: 0x390
	// Line 609, Address: 0x1557d8, Func Offset: 0x398
	// Line 610, Address: 0x1557e0, Func Offset: 0x3a0
	// Line 611, Address: 0x1557f0, Func Offset: 0x3b0
	// Line 612, Address: 0x155800, Func Offset: 0x3c0
	// Line 615, Address: 0x155808, Func Offset: 0x3c8
	// Line 617, Address: 0x155810, Func Offset: 0x3d0
	// Line 618, Address: 0x15581c, Func Offset: 0x3dc
	// Line 619, Address: 0x155830, Func Offset: 0x3f0
	// Line 620, Address: 0x155848, Func Offset: 0x408
	// Line 621, Address: 0x155854, Func Offset: 0x414
	// Line 622, Address: 0x15585c, Func Offset: 0x41c
	// Line 623, Address: 0x15586c, Func Offset: 0x42c
	// Line 624, Address: 0x15587c, Func Offset: 0x43c
	// Line 626, Address: 0x155884, Func Offset: 0x444
	// Line 628, Address: 0x15588c, Func Offset: 0x44c
	// Line 630, Address: 0x1558d4, Func Offset: 0x494
	// Line 631, Address: 0x1558e0, Func Offset: 0x4a0
	// Line 633, Address: 0x1558e8, Func Offset: 0x4a8
	// Line 634, Address: 0x1558f4, Func Offset: 0x4b4
	// Line 636, Address: 0x1558fc, Func Offset: 0x4bc
	// Line 637, Address: 0x155920, Func Offset: 0x4e0
	// Line 638, Address: 0x155938, Func Offset: 0x4f8
	// Line 639, Address: 0x155944, Func Offset: 0x504
	// Line 640, Address: 0x15594c, Func Offset: 0x50c
	// Line 641, Address: 0x15595c, Func Offset: 0x51c
	// Line 642, Address: 0x15596c, Func Offset: 0x52c
	// Line 644, Address: 0x155974, Func Offset: 0x534
	// Line 646, Address: 0x1559d4, Func Offset: 0x594
	// Line 648, Address: 0x1559d8, Func Offset: 0x598
	// Line 650, Address: 0x1559e0, Func Offset: 0x5a0
	// Line 651, Address: 0x1559f0, Func Offset: 0x5b0
	// Line 652, Address: 0x1559fc, Func Offset: 0x5bc
	// Line 653, Address: 0x155a14, Func Offset: 0x5d4
	// Line 658, Address: 0x155a20, Func Offset: 0x5e0
	// Line 659, Address: 0x155a2c, Func Offset: 0x5ec
	// Func End, Address: 0x155a40, Func Offset: 0x600
}

// 
// Start address: 0x155a40
void enEDBCtrlEscape(EnLOCAL_DATA* dp)
{
	float vec[4];
	float a;
	int t;
	// Line 663, Address: 0x155a40, Func Offset: 0
	// Line 667, Address: 0x155a54, Func Offset: 0x14
	// Line 668, Address: 0x155a74, Func Offset: 0x34
	// Line 669, Address: 0x155a88, Func Offset: 0x48
	// Line 670, Address: 0x155a94, Func Offset: 0x54
	// Line 673, Address: 0x155a9c, Func Offset: 0x5c
	// Line 675, Address: 0x155ad0, Func Offset: 0x90
	// Line 676, Address: 0x155af0, Func Offset: 0xb0
	// Line 677, Address: 0x155b28, Func Offset: 0xe8
	// Line 678, Address: 0x155b38, Func Offset: 0xf8
	// Line 679, Address: 0x155b40, Func Offset: 0x100
	// Line 680, Address: 0x155b48, Func Offset: 0x108
	// Line 681, Address: 0x155b80, Func Offset: 0x140
	// Line 682, Address: 0x155b90, Func Offset: 0x150
	// Line 683, Address: 0x155b98, Func Offset: 0x158
	// Line 685, Address: 0x155ba0, Func Offset: 0x160
	// Line 686, Address: 0x155bb0, Func Offset: 0x170
	// Line 687, Address: 0x155bc4, Func Offset: 0x184
	// Line 688, Address: 0x155bc8, Func Offset: 0x188
	// Line 689, Address: 0x155bd8, Func Offset: 0x198
	// Line 690, Address: 0x155be0, Func Offset: 0x1a0
	// Line 692, Address: 0x155be8, Func Offset: 0x1a8
	// Line 693, Address: 0x155bf4, Func Offset: 0x1b4
	// Line 694, Address: 0x155c04, Func Offset: 0x1c4
	// Line 695, Address: 0x155c14, Func Offset: 0x1d4
	// Line 696, Address: 0x155c28, Func Offset: 0x1e8
	// Line 697, Address: 0x155c2c, Func Offset: 0x1ec
	// Line 698, Address: 0x155c3c, Func Offset: 0x1fc
	// Line 700, Address: 0x155c44, Func Offset: 0x204
	// Line 702, Address: 0x155c4c, Func Offset: 0x20c
	// Line 705, Address: 0x155c80, Func Offset: 0x240
	// Line 706, Address: 0x155c90, Func Offset: 0x250
	// Line 707, Address: 0x155c9c, Func Offset: 0x25c
	// Line 708, Address: 0x155cb0, Func Offset: 0x270
	// Line 709, Address: 0x155cc0, Func Offset: 0x280
	// Line 710, Address: 0x155cc8, Func Offset: 0x288
	// Line 711, Address: 0x155cd0, Func Offset: 0x290
	// Line 713, Address: 0x155cd8, Func Offset: 0x298
	// Line 715, Address: 0x155ce0, Func Offset: 0x2a0
	// Line 716, Address: 0x155cfc, Func Offset: 0x2bc
	// Line 717, Address: 0x155d1c, Func Offset: 0x2dc
	// Line 718, Address: 0x155d3c, Func Offset: 0x2fc
	// Line 720, Address: 0x155d74, Func Offset: 0x334
	// Line 721, Address: 0x155d84, Func Offset: 0x344
	// Line 722, Address: 0x155d8c, Func Offset: 0x34c
	// Line 724, Address: 0x155d94, Func Offset: 0x354
	// Line 725, Address: 0x155d98, Func Offset: 0x358
	// Line 726, Address: 0x155da0, Func Offset: 0x360
	// Line 728, Address: 0x155da4, Func Offset: 0x364
	// Line 729, Address: 0x155dc4, Func Offset: 0x384
	// Line 731, Address: 0x155dd8, Func Offset: 0x398
	// Line 732, Address: 0x155de4, Func Offset: 0x3a4
	// Line 735, Address: 0x155dec, Func Offset: 0x3ac
	// Line 737, Address: 0x155dfc, Func Offset: 0x3bc
	// Line 738, Address: 0x155e14, Func Offset: 0x3d4
	// Line 740, Address: 0x155e3c, Func Offset: 0x3fc
	// Line 741, Address: 0x155e5c, Func Offset: 0x41c
	// Line 743, Address: 0x155e68, Func Offset: 0x428
	// Line 745, Address: 0x155e70, Func Offset: 0x430
	// Line 746, Address: 0x155e7c, Func Offset: 0x43c
	// Line 747, Address: 0x155e8c, Func Offset: 0x44c
	// Line 749, Address: 0x155e98, Func Offset: 0x458
	// Line 751, Address: 0x155ea0, Func Offset: 0x460
	// Line 752, Address: 0x155eac, Func Offset: 0x46c
	// Line 753, Address: 0x155ec0, Func Offset: 0x480
	// Line 754, Address: 0x155ecc, Func Offset: 0x48c
	// Line 756, Address: 0x155ed4, Func Offset: 0x494
	// Line 757, Address: 0x155ef4, Func Offset: 0x4b4
	// Line 758, Address: 0x155f0c, Func Offset: 0x4cc
	// Line 759, Address: 0x155f1c, Func Offset: 0x4dc
	// Line 760, Address: 0x155f24, Func Offset: 0x4e4
	// Line 762, Address: 0x155f34, Func Offset: 0x4f4
	// Line 763, Address: 0x155f38, Func Offset: 0x4f8
	// Line 764, Address: 0x155f44, Func Offset: 0x504
	// Line 766, Address: 0x155f4c, Func Offset: 0x50c
	// Line 767, Address: 0x155f58, Func Offset: 0x518
	// Line 768, Address: 0x155f68, Func Offset: 0x528
	// Line 769, Address: 0x155f84, Func Offset: 0x544
	// Line 770, Address: 0x155f88, Func Offset: 0x548
	// Line 772, Address: 0x155f90, Func Offset: 0x550
	// Line 773, Address: 0x155fb8, Func Offset: 0x578
	// Line 774, Address: 0x155fd8, Func Offset: 0x598
	// Line 775, Address: 0x155ff8, Func Offset: 0x5b8
	// Line 776, Address: 0x156008, Func Offset: 0x5c8
	// Line 777, Address: 0x156010, Func Offset: 0x5d0
	// Line 778, Address: 0x156030, Func Offset: 0x5f0
	// Line 779, Address: 0x156040, Func Offset: 0x600
	// Line 782, Address: 0x156048, Func Offset: 0x608
	// Line 783, Address: 0x156058, Func Offset: 0x618
	// Line 784, Address: 0x15606c, Func Offset: 0x62c
	// Line 785, Address: 0x156090, Func Offset: 0x650
	// Line 787, Address: 0x15609c, Func Offset: 0x65c
	// Line 789, Address: 0x1560a4, Func Offset: 0x664
	// Line 790, Address: 0x1560b0, Func Offset: 0x670
	// Line 791, Address: 0x1560c8, Func Offset: 0x688
	// Line 792, Address: 0x1560dc, Func Offset: 0x69c
	// Line 793, Address: 0x1560f0, Func Offset: 0x6b0
	// Line 794, Address: 0x1560f8, Func Offset: 0x6b8
	// Line 795, Address: 0x156104, Func Offset: 0x6c4
	// Line 796, Address: 0x15610c, Func Offset: 0x6cc
	// Line 798, Address: 0x156118, Func Offset: 0x6d8
	// Line 800, Address: 0x156120, Func Offset: 0x6e0
	// Line 802, Address: 0x156158, Func Offset: 0x718
	// Line 803, Address: 0x156164, Func Offset: 0x724
	// Line 806, Address: 0x15616c, Func Offset: 0x72c
	// Line 807, Address: 0x15617c, Func Offset: 0x73c
	// Line 808, Address: 0x156194, Func Offset: 0x754
	// Line 811, Address: 0x1561a0, Func Offset: 0x760
	// Line 812, Address: 0x1561ac, Func Offset: 0x76c
	// Func End, Address: 0x1561c4, Func Offset: 0x784
}

// 
// Start address: 0x1561d0
void enEDBCtrlSearch(EnLOCAL_DATA* dp)
{
	float vec[4];
	// Line 816, Address: 0x1561d0, Func Offset: 0
	// Line 818, Address: 0x1561e0, Func Offset: 0x10
	// Line 819, Address: 0x156200, Func Offset: 0x30
	// Line 820, Address: 0x156214, Func Offset: 0x44
	// Line 821, Address: 0x156220, Func Offset: 0x50
	// Line 824, Address: 0x156228, Func Offset: 0x58
	// Line 825, Address: 0x15623c, Func Offset: 0x6c
	// Line 826, Address: 0x15624c, Func Offset: 0x7c
	// Line 827, Address: 0x156260, Func Offset: 0x90
	// Line 828, Address: 0x15626c, Func Offset: 0x9c
	// Line 829, Address: 0x15627c, Func Offset: 0xac
	// Line 831, Address: 0x156288, Func Offset: 0xb8
	// Line 833, Address: 0x1562e0, Func Offset: 0x110
	// Line 834, Address: 0x1562f0, Func Offset: 0x120
	// Line 836, Address: 0x156330, Func Offset: 0x160
	// Line 837, Address: 0x15633c, Func Offset: 0x16c
	// Line 839, Address: 0x156344, Func Offset: 0x174
	// Line 840, Address: 0x156350, Func Offset: 0x180
	// Line 842, Address: 0x156358, Func Offset: 0x188
	// Line 843, Address: 0x156364, Func Offset: 0x194
	// Line 845, Address: 0x15636c, Func Offset: 0x19c
	// Line 846, Address: 0x156394, Func Offset: 0x1c4
	// Line 847, Address: 0x1563a0, Func Offset: 0x1d0
	// Line 851, Address: 0x1563a8, Func Offset: 0x1d8
	// Line 852, Address: 0x1563cc, Func Offset: 0x1fc
	// Line 853, Address: 0x1563ec, Func Offset: 0x21c
	// Line 854, Address: 0x15640c, Func Offset: 0x23c
	// Line 855, Address: 0x156410, Func Offset: 0x240
	// Line 858, Address: 0x156420, Func Offset: 0x250
	// Line 859, Address: 0x156438, Func Offset: 0x268
	// Line 860, Address: 0x156458, Func Offset: 0x288
	// Line 861, Address: 0x156464, Func Offset: 0x294
	// Func End, Address: 0x156478, Func Offset: 0x2a8
}

// 
// Start address: 0x156480
void enEDBCtrlShoot(EnLOCAL_DATA* dp)
{
	// Line 865, Address: 0x156480, Func Offset: 0
	// Line 866, Address: 0x15648c, Func Offset: 0xc
	// Line 867, Address: 0x1564b0, Func Offset: 0x30
	// Line 868, Address: 0x1564c4, Func Offset: 0x44
	// Line 869, Address: 0x1564d8, Func Offset: 0x58
	// Line 872, Address: 0x1564e0, Func Offset: 0x60
	// Line 874, Address: 0x156518, Func Offset: 0x98
	// Line 875, Address: 0x156530, Func Offset: 0xb0
	// Line 876, Address: 0x156540, Func Offset: 0xc0
	// Line 877, Address: 0x15654c, Func Offset: 0xcc
	// Line 879, Address: 0x156554, Func Offset: 0xd4
	// Line 881, Address: 0x156564, Func Offset: 0xe4
	// Line 882, Address: 0x156570, Func Offset: 0xf0
	// Line 883, Address: 0x156580, Func Offset: 0x100
	// Line 884, Address: 0x15659c, Func Offset: 0x11c
	// Line 885, Address: 0x1565ac, Func Offset: 0x12c
	// Line 887, Address: 0x1565b4, Func Offset: 0x134
	// Line 888, Address: 0x1565c0, Func Offset: 0x140
	// Line 889, Address: 0x1565d4, Func Offset: 0x154
	// Line 890, Address: 0x1565f0, Func Offset: 0x170
	// Line 891, Address: 0x156604, Func Offset: 0x184
	// Line 892, Address: 0x156618, Func Offset: 0x198
	// Line 893, Address: 0x156628, Func Offset: 0x1a8
	// Line 894, Address: 0x156634, Func Offset: 0x1b4
	// Line 895, Address: 0x156640, Func Offset: 0x1c0
	// Line 896, Address: 0x156650, Func Offset: 0x1d0
	// Line 898, Address: 0x156660, Func Offset: 0x1e0
	// Line 900, Address: 0x156668, Func Offset: 0x1e8
	// Line 901, Address: 0x156674, Func Offset: 0x1f4
	// Line 902, Address: 0x156684, Func Offset: 0x204
	// Line 903, Address: 0x156698, Func Offset: 0x218
	// Line 904, Address: 0x1566a4, Func Offset: 0x224
	// Line 905, Address: 0x1566bc, Func Offset: 0x23c
	// Line 906, Address: 0x1566cc, Func Offset: 0x24c
	// Line 907, Address: 0x1566d4, Func Offset: 0x254
	// Line 911, Address: 0x156754, Func Offset: 0x2d4
	// Line 912, Address: 0x156764, Func Offset: 0x2e4
	// Line 913, Address: 0x156774, Func Offset: 0x2f4
	// Line 914, Address: 0x156784, Func Offset: 0x304
	// Line 915, Address: 0x15678c, Func Offset: 0x30c
	// Line 919, Address: 0x1567a0, Func Offset: 0x320
	// Line 921, Address: 0x1567a8, Func Offset: 0x328
	// Line 922, Address: 0x1567b4, Func Offset: 0x334
	// Line 923, Address: 0x1567c8, Func Offset: 0x348
	// Line 924, Address: 0x1567e4, Func Offset: 0x364
	// Line 925, Address: 0x1567f8, Func Offset: 0x378
	// Line 926, Address: 0x156804, Func Offset: 0x384
	// Line 928, Address: 0x156840, Func Offset: 0x3c0
	// Line 929, Address: 0x156860, Func Offset: 0x3e0
	// Line 930, Address: 0x156874, Func Offset: 0x3f4
	// Line 932, Address: 0x15687c, Func Offset: 0x3fc
	// Line 933, Address: 0x156890, Func Offset: 0x410
	// Line 934, Address: 0x1568a4, Func Offset: 0x424
	// Line 936, Address: 0x1568ac, Func Offset: 0x42c
	// Line 937, Address: 0x1568bc, Func Offset: 0x43c
	// Line 938, Address: 0x1568c8, Func Offset: 0x448
	// Line 939, Address: 0x1568d4, Func Offset: 0x454
	// Line 940, Address: 0x1568e4, Func Offset: 0x464
	// Line 942, Address: 0x1568f0, Func Offset: 0x470
	// Line 944, Address: 0x1568f8, Func Offset: 0x478
	// Line 945, Address: 0x156904, Func Offset: 0x484
	// Line 946, Address: 0x156918, Func Offset: 0x498
	// Line 950, Address: 0x156924, Func Offset: 0x4a4
	// Line 951, Address: 0x156930, Func Offset: 0x4b0
	// Func End, Address: 0x156940, Func Offset: 0x4c0
}

// 
// Start address: 0x156940
void enEDBCtrlPunch(EnLOCAL_DATA* dp)
{
	float vec[4];
	float d2;
	float d1;
	int t;
	// Line 955, Address: 0x156940, Func Offset: 0
	// Line 959, Address: 0x156954, Func Offset: 0x14
	// Line 960, Address: 0x156974, Func Offset: 0x34
	// Line 961, Address: 0x156988, Func Offset: 0x48
	// Line 962, Address: 0x156994, Func Offset: 0x54
	// Line 965, Address: 0x15699c, Func Offset: 0x5c
	// Line 967, Address: 0x1569d0, Func Offset: 0x90
	// Line 968, Address: 0x1569e4, Func Offset: 0xa4
	// Line 969, Address: 0x1569f0, Func Offset: 0xb0
	// Line 970, Address: 0x156a00, Func Offset: 0xc0
	// Line 971, Address: 0x156a0c, Func Offset: 0xcc
	// Line 972, Address: 0x156a14, Func Offset: 0xd4
	// Line 973, Address: 0x156a1c, Func Offset: 0xdc
	// Line 974, Address: 0x156a2c, Func Offset: 0xec
	// Line 975, Address: 0x156a40, Func Offset: 0x100
	// Line 977, Address: 0x156a4c, Func Offset: 0x10c
	// Line 979, Address: 0x156a54, Func Offset: 0x114
	// Line 980, Address: 0x156a68, Func Offset: 0x128
	// Line 981, Address: 0x156a74, Func Offset: 0x134
	// Line 982, Address: 0x156a84, Func Offset: 0x144
	// Line 983, Address: 0x156a90, Func Offset: 0x150
	// Line 984, Address: 0x156a98, Func Offset: 0x158
	// Line 985, Address: 0x156ae4, Func Offset: 0x1a4
	// Line 986, Address: 0x156af0, Func Offset: 0x1b0
	// Line 988, Address: 0x156af8, Func Offset: 0x1b8
	// Line 989, Address: 0x156b1c, Func Offset: 0x1dc
	// Line 990, Address: 0x156b34, Func Offset: 0x1f4
	// Line 993, Address: 0x156b5c, Func Offset: 0x21c
	// Line 996, Address: 0x156bbc, Func Offset: 0x27c
	// Line 997, Address: 0x156bd0, Func Offset: 0x290
	// Line 998, Address: 0x156bd8, Func Offset: 0x298
	// Line 999, Address: 0x156be0, Func Offset: 0x2a0
	// Line 1002, Address: 0x156bec, Func Offset: 0x2ac
	// Line 1004, Address: 0x156bf4, Func Offset: 0x2b4
	// Line 1005, Address: 0x156c00, Func Offset: 0x2c0
	// Line 1006, Address: 0x156c10, Func Offset: 0x2d0
	// Line 1007, Address: 0x156c28, Func Offset: 0x2e8
	// Line 1008, Address: 0x156c34, Func Offset: 0x2f4
	// Line 1009, Address: 0x156c44, Func Offset: 0x304
	// Line 1010, Address: 0x156c54, Func Offset: 0x314
	// Line 1011, Address: 0x156c60, Func Offset: 0x320
	// Line 1012, Address: 0x156c74, Func Offset: 0x334
	// Line 1013, Address: 0x156c84, Func Offset: 0x344
	// Line 1014, Address: 0x156c8c, Func Offset: 0x34c
	// Line 1015, Address: 0x156c94, Func Offset: 0x354
	// Line 1016, Address: 0x156ca8, Func Offset: 0x368
	// Line 1017, Address: 0x156cb0, Func Offset: 0x370
	// Line 1018, Address: 0x156cb8, Func Offset: 0x378
	// Line 1019, Address: 0x156ccc, Func Offset: 0x38c
	// Line 1020, Address: 0x156cd8, Func Offset: 0x398
	// Line 1021, Address: 0x156ce0, Func Offset: 0x3a0
	// Line 1026, Address: 0x156ce8, Func Offset: 0x3a8
	// Line 1028, Address: 0x156cf0, Func Offset: 0x3b0
	// Line 1029, Address: 0x156cfc, Func Offset: 0x3bc
	// Line 1030, Address: 0x156d0c, Func Offset: 0x3cc
	// Line 1031, Address: 0x156d20, Func Offset: 0x3e0
	// Line 1032, Address: 0x156d28, Func Offset: 0x3e8
	// Line 1033, Address: 0x156d30, Func Offset: 0x3f0
	// Line 1034, Address: 0x156d44, Func Offset: 0x404
	// Line 1035, Address: 0x156d50, Func Offset: 0x410
	// Line 1036, Address: 0x156d58, Func Offset: 0x418
	// Line 1037, Address: 0x156d60, Func Offset: 0x420
	// Line 1038, Address: 0x156d80, Func Offset: 0x440
	// Line 1043, Address: 0x156d8c, Func Offset: 0x44c
	// Line 1045, Address: 0x156d94, Func Offset: 0x454
	// Line 1046, Address: 0x156da0, Func Offset: 0x460
	// Line 1047, Address: 0x156dd0, Func Offset: 0x490
	// Line 1048, Address: 0x156df0, Func Offset: 0x4b0
	// Line 1049, Address: 0x156e0c, Func Offset: 0x4cc
	// Line 1050, Address: 0x156e3c, Func Offset: 0x4fc
	// Line 1051, Address: 0x156e54, Func Offset: 0x514
	// Line 1052, Address: 0x156e84, Func Offset: 0x544
	// Line 1053, Address: 0x156ebc, Func Offset: 0x57c
	// Line 1054, Address: 0x156ecc, Func Offset: 0x58c
	// Line 1055, Address: 0x156ed4, Func Offset: 0x594
	// Line 1057, Address: 0x156ee4, Func Offset: 0x5a4
	// Line 1058, Address: 0x156f04, Func Offset: 0x5c4
	// Line 1059, Address: 0x156f14, Func Offset: 0x5d4
	// Line 1060, Address: 0x156f44, Func Offset: 0x604
	// Line 1061, Address: 0x156f54, Func Offset: 0x614
	// Line 1062, Address: 0x156f5c, Func Offset: 0x61c
	// Line 1064, Address: 0x156f6c, Func Offset: 0x62c
	// Line 1065, Address: 0x156f78, Func Offset: 0x638
	// Line 1067, Address: 0x156f80, Func Offset: 0x640
	// Line 1068, Address: 0x156f8c, Func Offset: 0x64c
	// Line 1069, Address: 0x156f9c, Func Offset: 0x65c
	// Line 1070, Address: 0x156fb0, Func Offset: 0x670
	// Line 1071, Address: 0x156fc0, Func Offset: 0x680
	// Line 1072, Address: 0x156fd0, Func Offset: 0x690
	// Line 1074, Address: 0x156fdc, Func Offset: 0x69c
	// Line 1076, Address: 0x156fe4, Func Offset: 0x6a4
	// Line 1077, Address: 0x157000, Func Offset: 0x6c0
	// Line 1078, Address: 0x157020, Func Offset: 0x6e0
	// Line 1079, Address: 0x157038, Func Offset: 0x6f8
	// Line 1080, Address: 0x157050, Func Offset: 0x710
	// Line 1082, Address: 0x157078, Func Offset: 0x738
	// Line 1083, Address: 0x15709c, Func Offset: 0x75c
	// Line 1084, Address: 0x1570a8, Func Offset: 0x768
	// Line 1085, Address: 0x1570c4, Func Offset: 0x784
	// Line 1089, Address: 0x1570d0, Func Offset: 0x790
	// Line 1090, Address: 0x1570dc, Func Offset: 0x79c
	// Func End, Address: 0x1570f4, Func Offset: 0x7b4
}

// 
// Start address: 0x157100
void enEDBCtrlDamage(EnLOCAL_DATA* dp)
{
	// Line 1094, Address: 0x157100, Func Offset: 0
	// Line 1095, Address: 0x15710c, Func Offset: 0xc
	// Line 1097, Address: 0x157138, Func Offset: 0x38
	// Line 1098, Address: 0x157154, Func Offset: 0x54
	// Line 1099, Address: 0x157174, Func Offset: 0x74
	// Line 1101, Address: 0x157184, Func Offset: 0x84
	// Line 1102, Address: 0x157194, Func Offset: 0x94
	// Line 1103, Address: 0x1571a4, Func Offset: 0xa4
	// Line 1105, Address: 0x1571ac, Func Offset: 0xac
	// Line 1106, Address: 0x1571d0, Func Offset: 0xd0
	// Line 1108, Address: 0x1571dc, Func Offset: 0xdc
	// Line 1109, Address: 0x1571f0, Func Offset: 0xf0
	// Line 1110, Address: 0x157208, Func Offset: 0x108
	// Line 1111, Address: 0x15722c, Func Offset: 0x12c
	// Line 1114, Address: 0x157248, Func Offset: 0x148
	// Line 1116, Address: 0x15725c, Func Offset: 0x15c
	// Line 1117, Address: 0x157264, Func Offset: 0x164
	// Line 1118, Address: 0x15727c, Func Offset: 0x17c
	// Line 1119, Address: 0x157290, Func Offset: 0x190
	// Line 1120, Address: 0x157298, Func Offset: 0x198
	// Line 1123, Address: 0x1572ac, Func Offset: 0x1ac
	// Line 1124, Address: 0x1572b4, Func Offset: 0x1b4
	// Line 1127, Address: 0x1572d8, Func Offset: 0x1d8
	// Line 1128, Address: 0x1572f0, Func Offset: 0x1f0
	// Line 1129, Address: 0x157304, Func Offset: 0x204
	// Line 1130, Address: 0x15730c, Func Offset: 0x20c
	// Line 1137, Address: 0x157320, Func Offset: 0x220
	// Func End, Address: 0x157330, Func Offset: 0x230
}

// 
// Start address: 0x157330
void enEDBCtrlEscape2(EnLOCAL_DATA* dp)
{
	float a;
	int t;
	// Line 1141, Address: 0x157330, Func Offset: 0
	// Line 1144, Address: 0x157340, Func Offset: 0x10
	// Line 1145, Address: 0x157360, Func Offset: 0x30
	// Line 1146, Address: 0x15736c, Func Offset: 0x3c
	// Line 1148, Address: 0x157374, Func Offset: 0x44
	// Line 1150, Address: 0x1573a8, Func Offset: 0x78
	// Line 1151, Address: 0x157408, Func Offset: 0xd8
	// Line 1152, Address: 0x157410, Func Offset: 0xe0
	// Line 1154, Address: 0x157418, Func Offset: 0xe8
	// Line 1155, Address: 0x157428, Func Offset: 0xf8
	// Line 1156, Address: 0x157434, Func Offset: 0x104
	// Line 1157, Address: 0x157444, Func Offset: 0x114
	// Line 1158, Address: 0x157450, Func Offset: 0x120
	// Line 1160, Address: 0x157458, Func Offset: 0x128
	// Line 1161, Address: 0x15746c, Func Offset: 0x13c
	// Line 1162, Address: 0x157480, Func Offset: 0x150
	// Line 1163, Address: 0x15748c, Func Offset: 0x15c
	// Line 1164, Address: 0x157498, Func Offset: 0x168
	// Line 1167, Address: 0x1574a0, Func Offset: 0x170
	// Line 1170, Address: 0x1574e4, Func Offset: 0x1b4
	// Line 1172, Address: 0x157510, Func Offset: 0x1e0
	// Line 1173, Address: 0x157528, Func Offset: 0x1f8
	// Line 1174, Address: 0x157538, Func Offset: 0x208
	// Line 1175, Address: 0x157540, Func Offset: 0x210
	// Line 1177, Address: 0x157550, Func Offset: 0x220
	// Line 1180, Address: 0x15755c, Func Offset: 0x22c
	// Line 1181, Address: 0x157574, Func Offset: 0x244
	// Line 1182, Address: 0x157594, Func Offset: 0x264
	// Line 1184, Address: 0x15759c, Func Offset: 0x26c
	// Line 1185, Address: 0x1575ac, Func Offset: 0x27c
	// Line 1186, Address: 0x1575b4, Func Offset: 0x284
	// Line 1188, Address: 0x1575c0, Func Offset: 0x290
	// Line 1190, Address: 0x1575c8, Func Offset: 0x298
	// Line 1191, Address: 0x1575dc, Func Offset: 0x2ac
	// Line 1192, Address: 0x1575ec, Func Offset: 0x2bc
	// Line 1194, Address: 0x1575f4, Func Offset: 0x2c4
	// Line 1195, Address: 0x157604, Func Offset: 0x2d4
	// Line 1196, Address: 0x157618, Func Offset: 0x2e8
	// Line 1197, Address: 0x157624, Func Offset: 0x2f4
	// Line 1199, Address: 0x15762c, Func Offset: 0x2fc
	// Line 1200, Address: 0x15763c, Func Offset: 0x30c
	// Line 1201, Address: 0x157654, Func Offset: 0x324
	// Line 1202, Address: 0x157660, Func Offset: 0x330
	// Line 1203, Address: 0x157690, Func Offset: 0x360
	// Line 1204, Address: 0x1576a0, Func Offset: 0x370
	// Line 1205, Address: 0x1576ac, Func Offset: 0x37c
	// Line 1206, Address: 0x1576b8, Func Offset: 0x388
	// Line 1208, Address: 0x1576c4, Func Offset: 0x394
	// Line 1210, Address: 0x1576cc, Func Offset: 0x39c
	// Line 1211, Address: 0x1576dc, Func Offset: 0x3ac
	// Line 1212, Address: 0x1576ec, Func Offset: 0x3bc
	// Line 1216, Address: 0x1576f4, Func Offset: 0x3c4
	// Line 1217, Address: 0x157700, Func Offset: 0x3d0
	// Func End, Address: 0x157714, Func Offset: 0x3e4
}

// 
// Start address: 0x157720
void enEDBCtrlDead(EnLOCAL_DATA* dp)
{
	void* tmp;
	// Line 1221, Address: 0x157720, Func Offset: 0
	// Line 1223, Address: 0x15772c, Func Offset: 0xc
	// Line 1224, Address: 0x157730, Func Offset: 0x10
	// Func End, Address: 0x157740, Func Offset: 0x20
}

// 
// Start address: 0x157740
int enEDBCheckArriveCorner(EnLOCAL_DATA* dp)
{
	float d;
	int i;
	// Line 1234, Address: 0x157740, Func Offset: 0
	// Line 1235, Address: 0x15774c, Func Offset: 0xc
	// Line 1236, Address: 0x157788, Func Offset: 0x48
	// Line 1237, Address: 0x1577ac, Func Offset: 0x6c
	// Line 1238, Address: 0x1577bc, Func Offset: 0x7c
	// Line 1239, Address: 0x1577c0, Func Offset: 0x80
	// Func End, Address: 0x1577c8, Func Offset: 0x88
}

// 
// Start address: 0x1577d0
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
	// Line 1270, Address: 0x1577d0, Func Offset: 0
	// Line 1273, Address: 0x1577f4, Func Offset: 0x24
	// Line 1275, Address: 0x157804, Func Offset: 0x34
	// Line 1276, Address: 0x157810, Func Offset: 0x40
	// Line 1277, Address: 0x157814, Func Offset: 0x44
	// Line 1278, Address: 0x157820, Func Offset: 0x50
	// Line 1279, Address: 0x157824, Func Offset: 0x54
	// Line 1280, Address: 0x15783c, Func Offset: 0x6c
	// Line 1281, Address: 0x15785c, Func Offset: 0x8c
	// Line 1282, Address: 0x15786c, Func Offset: 0x9c
	// Line 1283, Address: 0x157884, Func Offset: 0xb4
	// Line 1284, Address: 0x1578a0, Func Offset: 0xd0
	// Line 1285, Address: 0x1578b8, Func Offset: 0xe8
	// Line 1286, Address: 0x1578d0, Func Offset: 0x100
	// Line 1287, Address: 0x157914, Func Offset: 0x144
	// Line 1288, Address: 0x157918, Func Offset: 0x148
	// Line 1289, Address: 0x157928, Func Offset: 0x158
	// Line 1290, Address: 0x15792c, Func Offset: 0x15c
	// Line 1291, Address: 0x157930, Func Offset: 0x160
	// Line 1293, Address: 0x157940, Func Offset: 0x170
	// Line 1294, Address: 0x157954, Func Offset: 0x184
	// Line 1295, Address: 0x157960, Func Offset: 0x190
	// Line 1296, Address: 0x157970, Func Offset: 0x1a0
	// Line 1298, Address: 0x157980, Func Offset: 0x1b0
	// Line 1299, Address: 0x157984, Func Offset: 0x1b4
	// Func End, Address: 0x1579ac, Func Offset: 0x1dc
}

// 
// Start address: 0x1579b0
void enEDBClearMark(EnLOCAL_DATA* dp)
{
	int i;
	// Line 1303, Address: 0x1579b0, Func Offset: 0
	// Line 1305, Address: 0x1579bc, Func Offset: 0xc
	// Line 1306, Address: 0x1579c8, Func Offset: 0x18
	// Line 1307, Address: 0x1579d8, Func Offset: 0x28
	// Line 1308, Address: 0x1579ec, Func Offset: 0x3c
	// Line 1309, Address: 0x1579f4, Func Offset: 0x44
	// Func End, Address: 0x157a04, Func Offset: 0x54
}

// 
// Start address: 0x157a10
void enEDBSetMark(EnLOCAL_DATA* dp, int mark)
{
	// Line 1313, Address: 0x157a10, Func Offset: 0
	// Line 1314, Address: 0x157a1c, Func Offset: 0xc
	// Line 1315, Address: 0x157a3c, Func Offset: 0x2c
	// Line 1316, Address: 0x157a70, Func Offset: 0x60
	// Func End, Address: 0x157a7c, Func Offset: 0x6c
}

// 
// Start address: 0x157a80
int enEDBCheckMark(EnLOCAL_DATA* dp, int mark)
{
	int i;
	// Line 1321, Address: 0x157a80, Func Offset: 0
	// Line 1323, Address: 0x157a90, Func Offset: 0x10
	// Line 1324, Address: 0x157a9c, Func Offset: 0x1c
	// Line 1325, Address: 0x157ac8, Func Offset: 0x48
	// Line 1326, Address: 0x157adc, Func Offset: 0x5c
	// Line 1327, Address: 0x157ae0, Func Offset: 0x60
	// Func End, Address: 0x157af0, Func Offset: 0x70
}

// 
// Start address: 0x157af0
int enEDBGetDamageMotion(EnLOCAL_DATA* dp)
{
	float a;
	int dd;
	int id;
	int m;
	// Line 1334, Address: 0x157af0, Func Offset: 0
	// Line 1338, Address: 0x157b04, Func Offset: 0x14
	// Line 1339, Address: 0x157b28, Func Offset: 0x38
	// Line 1340, Address: 0x157b58, Func Offset: 0x68
	// Line 1342, Address: 0x157b5c, Func Offset: 0x6c
	// Line 1343, Address: 0x157b80, Func Offset: 0x90
	// Line 1345, Address: 0x157b84, Func Offset: 0x94
	// Line 1346, Address: 0x157b90, Func Offset: 0xa0
	// Line 1351, Address: 0x157c40, Func Offset: 0x150
	// Line 1352, Address: 0x157c44, Func Offset: 0x154
	// Line 1359, Address: 0x157c4c, Func Offset: 0x15c
	// Line 1360, Address: 0x157c50, Func Offset: 0x160
	// Line 1363, Address: 0x157c58, Func Offset: 0x168
	// Line 1364, Address: 0x157c60, Func Offset: 0x170
	// Line 1367, Address: 0x157c68, Func Offset: 0x178
	// Line 1368, Address: 0x157c6c, Func Offset: 0x17c
	// Line 1369, Address: 0x157c78, Func Offset: 0x188
	// Line 1370, Address: 0x157c84, Func Offset: 0x194
	// Line 1372, Address: 0x157c8c, Func Offset: 0x19c
	// Line 1373, Address: 0x157c90, Func Offset: 0x1a0
	// Line 1375, Address: 0x157ca0, Func Offset: 0x1b0
	// Line 1376, Address: 0x157ca4, Func Offset: 0x1b4
	// Func End, Address: 0x157cbc, Func Offset: 0x1cc
}

// 
// Start address: 0x157cc0
int enEDBSetDamage(EnLOCAL_DATA* dp)
{
	// Line 1381, Address: 0x157cc0, Func Offset: 0
	// Line 1382, Address: 0x157ccc, Func Offset: 0xc
	// Line 1383, Address: 0x157cdc, Func Offset: 0x1c
	// Line 1384, Address: 0x157ce8, Func Offset: 0x28
	// Line 1385, Address: 0x157d0c, Func Offset: 0x4c
	// Line 1387, Address: 0x157d18, Func Offset: 0x58
	// Line 1392, Address: 0x157d60, Func Offset: 0xa0
	// Line 1395, Address: 0x157d6c, Func Offset: 0xac
	// Line 1396, Address: 0x157d78, Func Offset: 0xb8
	// Line 1397, Address: 0x157d7c, Func Offset: 0xbc
	// Func End, Address: 0x157d8c, Func Offset: 0xcc
}

// 
// Start address: 0x157d90
int enEDBCanSeePlayer(EnLOCAL_DATA* dp, float angle)
{
	float vec[4];
	float a;
	float dist;
	float* ppos;
	// Line 1402, Address: 0x157d90, Func Offset: 0
	// Line 1403, Address: 0x157db4, Func Offset: 0x24
	// Line 1405, Address: 0x157dc4, Func Offset: 0x34
	// Line 1406, Address: 0x157de0, Func Offset: 0x50
	// Line 1408, Address: 0x157df8, Func Offset: 0x68
	// Line 1409, Address: 0x157e20, Func Offset: 0x90
	// Line 1410, Address: 0x157e40, Func Offset: 0xb0
	// Line 1412, Address: 0x157e4c, Func Offset: 0xbc
	// Line 1413, Address: 0x157e50, Func Offset: 0xc0
	// Line 1414, Address: 0x157e7c, Func Offset: 0xec
	// Line 1415, Address: 0x157e94, Func Offset: 0x104
	// Line 1416, Address: 0x157ea8, Func Offset: 0x118
	// Line 1417, Address: 0x157ef0, Func Offset: 0x160
	// Line 1418, Address: 0x157f40, Func Offset: 0x1b0
	// Line 1419, Address: 0x157f4c, Func Offset: 0x1bc
	// Line 1420, Address: 0x157f78, Func Offset: 0x1e8
	// Line 1421, Address: 0x157f7c, Func Offset: 0x1ec
	// Func End, Address: 0x157fa0, Func Offset: 0x210
}

// 
// Start address: 0x157fa0
void enEDBAnimeSet(EnLOCAL_DATA* dp, int anim)
{
	// Line 1425, Address: 0x157fa0, Func Offset: 0
	// Line 1426, Address: 0x157fb8, Func Offset: 0x18
	// Line 1427, Address: 0x157fd4, Func Offset: 0x34
	// Line 1428, Address: 0x157fe0, Func Offset: 0x40
	// Line 1431, Address: 0x157fe8, Func Offset: 0x48
	// Line 1432, Address: 0x158040, Func Offset: 0xa0
	// Line 1433, Address: 0x15806c, Func Offset: 0xcc
	// Func End, Address: 0x158084, Func Offset: 0xe4
}

// 
// Start address: 0x158090
void enEDBAnimeReset(EnLOCAL_DATA* dp, int anim)
{
	// Line 1437, Address: 0x158090, Func Offset: 0
	// Line 1439, Address: 0x1580a8, Func Offset: 0x18
	// Line 1440, Address: 0x158100, Func Offset: 0x70
	// Line 1441, Address: 0x15812c, Func Offset: 0x9c
	// Func End, Address: 0x158144, Func Offset: 0xb4
}

// 
// Start address: 0x158150
void enEDBAnimeExec(EnLOCAL_DATA* dp)
{
	EDB_ANM_DATA2 edb_anm_data2[6];
	EDB_ANM_DATA1 edb_anm_data1[6];
	int d;
	int of;
	// Line 1445, Address: 0x158150, Func Offset: 0
	// Line 1446, Address: 0x158164, Func Offset: 0x14
	// Line 1448, Address: 0x15816c, Func Offset: 0x1c
	// Line 1449, Address: 0x158184, Func Offset: 0x34
	// Line 1450, Address: 0x1581b8, Func Offset: 0x68
	// Line 1451, Address: 0x1581bc, Func Offset: 0x6c
	// Line 1453, Address: 0x1581f4, Func Offset: 0xa4
	// Line 1455, Address: 0x1581f8, Func Offset: 0xa8
	// Line 1456, Address: 0x15820c, Func Offset: 0xbc
	// Line 1459, Address: 0x158258, Func Offset: 0x108
	// Line 1460, Address: 0x158270, Func Offset: 0x120
	// Line 1461, Address: 0x15827c, Func Offset: 0x12c
	// Line 1462, Address: 0x15828c, Func Offset: 0x13c
	// Line 1463, Address: 0x15829c, Func Offset: 0x14c
	// Line 1464, Address: 0x1582ac, Func Offset: 0x15c
	// Line 1467, Address: 0x1582b8, Func Offset: 0x168
	// Line 1469, Address: 0x1582c0, Func Offset: 0x170
	// Line 1471, Address: 0x1582c4, Func Offset: 0x174
	// Line 1473, Address: 0x1582c8, Func Offset: 0x178
	// Line 1475, Address: 0x1582cc, Func Offset: 0x17c
	// Line 1477, Address: 0x1582d0, Func Offset: 0x180
	// Line 1479, Address: 0x1582d4, Func Offset: 0x184
	// Line 1481, Address: 0x1582d8, Func Offset: 0x188
	// Line 1494, Address: 0x158314, Func Offset: 0x1c4
	// Line 1496, Address: 0x15838c, Func Offset: 0x23c
	// Line 1497, Address: 0x1583a4, Func Offset: 0x254
	// Line 1498, Address: 0x1583e8, Func Offset: 0x298
	// Line 1501, Address: 0x158400, Func Offset: 0x2b0
	// Line 1503, Address: 0x158408, Func Offset: 0x2b8
	// Line 1505, Address: 0x15840c, Func Offset: 0x2bc
	// Line 1507, Address: 0x158410, Func Offset: 0x2c0
	// Line 1509, Address: 0x158414, Func Offset: 0x2c4
	// Line 1511, Address: 0x158418, Func Offset: 0x2c8
	// Line 1513, Address: 0x15841c, Func Offset: 0x2cc
	// Line 1515, Address: 0x158420, Func Offset: 0x2d0
	// Line 1526, Address: 0x158444, Func Offset: 0x2f4
	// Line 1527, Address: 0x158480, Func Offset: 0x330
	// Line 1530, Address: 0x158498, Func Offset: 0x348
	// Line 1532, Address: 0x1584a0, Func Offset: 0x350
	// Line 1544, Address: 0x1585b0, Func Offset: 0x460
	// Line 1546, Address: 0x1585e8, Func Offset: 0x498
	// Line 1549, Address: 0x1585f0, Func Offset: 0x4a0
	// Line 1559, Address: 0x1586b0, Func Offset: 0x560
	// Line 1565, Address: 0x1586c0, Func Offset: 0x570
	// Line 1568, Address: 0x1586c8, Func Offset: 0x578
	// Line 1578, Address: 0x158788, Func Offset: 0x638
	// Line 1586, Address: 0x158798, Func Offset: 0x648
	// Func End, Address: 0x1587b0, Func Offset: 0x660
}

// 
// Start address: 0x1587b0
void enEDBSetGunFire(EnLOCAL_DATA* dp)
{
	float rot[4][4];
	float vec2[4];
	float vec1[4];
	// Line 1590, Address: 0x1587b0, Func Offset: 0
	// Line 1593, Address: 0x1587c0, Func Offset: 0x10
	// Line 1594, Address: 0x1587d4, Func Offset: 0x24
	// Line 1595, Address: 0x1587e8, Func Offset: 0x38
	// Line 1596, Address: 0x158804, Func Offset: 0x54
	// Line 1597, Address: 0x15882c, Func Offset: 0x7c
	// Line 1598, Address: 0x158844, Func Offset: 0x94
	// Line 1599, Address: 0x15885c, Func Offset: 0xac
	// Line 1600, Address: 0x158884, Func Offset: 0xd4
	// Line 1601, Address: 0x15889c, Func Offset: 0xec
	// Line 1602, Address: 0x1588d0, Func Offset: 0x120
	// Line 1603, Address: 0x1588e0, Func Offset: 0x130
	// Line 1604, Address: 0x158900, Func Offset: 0x150
	// Line 1605, Address: 0x15890c, Func Offset: 0x15c
	// Line 1606, Address: 0x158934, Func Offset: 0x184
	// Line 1607, Address: 0x158944, Func Offset: 0x194
	// Line 1608, Address: 0x158950, Func Offset: 0x1a0
	// Line 1609, Address: 0x158970, Func Offset: 0x1c0
	// Func End, Address: 0x158984, Func Offset: 0x1d4
}

// 
// Start address: 0x158990
void enEDBAutoRecovery(EnLOCAL_DATA* dp)
{
	float recover_rate[5];
	// Line 1626, Address: 0x158990, Func Offset: 0
	// Line 1627, Address: 0x15899c, Func Offset: 0xc
	// Line 1634, Address: 0x1589b8, Func Offset: 0x28
	// Line 1635, Address: 0x1589d8, Func Offset: 0x48
	// Func End, Address: 0x1589e8, Func Offset: 0x58
}

// 
// Start address: 0x1589f0
float enEDBGetSpeed(EnLOCAL_DATA* dp)
{
	// Line 1640, Address: 0x1589f0, Func Offset: 0
	// Line 1641, Address: 0x158a10, Func Offset: 0x20
	// Line 1642, Address: 0x158a14, Func Offset: 0x24
	// Func End, Address: 0x158a1c, Func Offset: 0x2c
}

// 
// Start address: 0x158a20
float enEDBGetWalkSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1646, Address: 0x158a20, Func Offset: 0
	// Line 1647, Address: 0x158a30, Func Offset: 0x10
	// Line 1654, Address: 0x158a4c, Func Offset: 0x2c
	// Line 1655, Address: 0x158a68, Func Offset: 0x48
	// Line 1656, Address: 0x158a88, Func Offset: 0x68
	// Line 1657, Address: 0x158a98, Func Offset: 0x78
	// Func End, Address: 0x158aac, Func Offset: 0x8c
}

// 
// Start address: 0x158ab0
float enEDBGetRunSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1661, Address: 0x158ab0, Func Offset: 0
	// Line 1662, Address: 0x158ac0, Func Offset: 0x10
	// Line 1669, Address: 0x158adc, Func Offset: 0x2c
	// Line 1670, Address: 0x158af8, Func Offset: 0x48
	// Line 1671, Address: 0x158b18, Func Offset: 0x68
	// Line 1672, Address: 0x158b28, Func Offset: 0x78
	// Func End, Address: 0x158b3c, Func Offset: 0x8c
}

// 
// Start address: 0x158b40
float enEDBGetHoldSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 1676, Address: 0x158b40, Func Offset: 0
	// Line 1677, Address: 0x158b50, Func Offset: 0x10
	// Line 1684, Address: 0x158b6c, Func Offset: 0x2c
	// Line 1685, Address: 0x158b88, Func Offset: 0x48
	// Line 1687, Address: 0x158ba8, Func Offset: 0x68
	// Func End, Address: 0x158bbc, Func Offset: 0x7c
}

// 
// Start address: 0x158bc0
int enEDBGetDefAfford()
{
	short afford[5];
	// Line 1691, Address: 0x158bc0, Func Offset: 0
	// Line 1692, Address: 0x158bc8, Func Offset: 0x8
	// Line 1699, Address: 0x158be4, Func Offset: 0x24
	// Line 1700, Address: 0x158c00, Func Offset: 0x40
	// Func End, Address: 0x158c10, Func Offset: 0x50
}

// 
// Start address: 0x158c10
void enEDBAddAfford(EnLOCAL_DATA* dp)
{
	int max;
	// Line 1704, Address: 0x158c10, Func Offset: 0
	// Line 1705, Address: 0x158c20, Func Offset: 0x10
	// Line 1706, Address: 0x158c2c, Func Offset: 0x1c
	// Line 1707, Address: 0x158c58, Func Offset: 0x48
	// Line 1709, Address: 0x158c60, Func Offset: 0x50
	// Func End, Address: 0x158c74, Func Offset: 0x64
}

// 
// Start address: 0x158c80
void SetMeat()
{
	float pos2[4];
	float pos1[4];
	float* pos;
	_CL_HITPOLY_COLUMN column;
	int f;
	int j;
	int i;
	// Line 1715, Address: 0x158c80, Func Offset: 0
	// Line 1720, Address: 0x158c98, Func Offset: 0x18
	// Line 1721, Address: 0x158ca0, Func Offset: 0x20
	// Line 1722, Address: 0x158ca8, Func Offset: 0x28
	// Line 1723, Address: 0x158cb0, Func Offset: 0x30
	// Line 1724, Address: 0x158cb8, Func Offset: 0x38
	// Line 1725, Address: 0x158cc0, Func Offset: 0x40
	// Line 1726, Address: 0x158cd0, Func Offset: 0x50
	// Line 1727, Address: 0x158cf8, Func Offset: 0x78
	// Line 1728, Address: 0x158cfc, Func Offset: 0x7c
	// Line 1729, Address: 0x158d04, Func Offset: 0x84
	// Line 1731, Address: 0x158d08, Func Offset: 0x88
	// Line 1732, Address: 0x158d14, Func Offset: 0x94
	// Line 1733, Address: 0x158d28, Func Offset: 0xa8
	// Line 1734, Address: 0x158d4c, Func Offset: 0xcc
	// Line 1735, Address: 0x158d70, Func Offset: 0xf0
	// Line 1736, Address: 0x158d7c, Func Offset: 0xfc
	// Line 1737, Address: 0x158d9c, Func Offset: 0x11c
	// Line 1738, Address: 0x158da4, Func Offset: 0x124
	// Line 1739, Address: 0x158db0, Func Offset: 0x130
	// Line 1740, Address: 0x158ddc, Func Offset: 0x15c
	// Line 1741, Address: 0x158de4, Func Offset: 0x164
	// Line 1742, Address: 0x158df0, Func Offset: 0x170
	// Line 1744, Address: 0x158e40, Func Offset: 0x1c0
	// Line 1745, Address: 0x158e58, Func Offset: 0x1d8
	// Line 1746, Address: 0x158e70, Func Offset: 0x1f0
	// Line 1747, Address: 0x158e80, Func Offset: 0x200
	// Line 1748, Address: 0x158e94, Func Offset: 0x214
	// Line 1749, Address: 0x158e98, Func Offset: 0x218
	// Line 1750, Address: 0x158eac, Func Offset: 0x22c
	// Func End, Address: 0x158ecc, Func Offset: 0x24c
}

// 
// Start address: 0x158ed0
void draw_poly(float* pos1, float* pos2)
{
	int cn;
	int w;
	int ch;
	int cl;
	int i;
	void* WSM;
	int v0[4][4];
	float pos[4];
	// Line 1753, Address: 0x158ed0, Func Offset: 0
	// Line 1756, Address: 0x158ed8, Func Offset: 0x8
	// Line 1758, Address: 0x158ee0, Func Offset: 0x10
	// Line 1759, Address: 0x158ee4, Func Offset: 0x14
	// Line 1760, Address: 0x158ee8, Func Offset: 0x18
	// Line 1761, Address: 0x158ef8, Func Offset: 0x28
	// Line 1762, Address: 0x158f3c, Func Offset: 0x6c
	// Line 1763, Address: 0x158f4c, Func Offset: 0x7c
	// Line 1764, Address: 0x158f90, Func Offset: 0xc0
	// Line 1765, Address: 0x158fa0, Func Offset: 0xd0
	// Line 1766, Address: 0x158fb0, Func Offset: 0xe0
	// Line 1767, Address: 0x158ff4, Func Offset: 0x124
	// Line 1768, Address: 0x159004, Func Offset: 0x134
	// Line 1769, Address: 0x159014, Func Offset: 0x144
	// Line 1770, Address: 0x159058, Func Offset: 0x188
	// Line 1771, Address: 0x15905c, Func Offset: 0x18c
	// Line 1772, Address: 0x159060, Func Offset: 0x190
	// Line 1773, Address: 0x15906c, Func Offset: 0x19c
	// Line 1774, Address: 0x1590e0, Func Offset: 0x210
	// Line 1775, Address: 0x1590e8, Func Offset: 0x218
	// Line 1776, Address: 0x159148, Func Offset: 0x278
	// Line 1777, Address: 0x15914c, Func Offset: 0x27c
	// Line 1778, Address: 0x159150, Func Offset: 0x280
	// Line 1779, Address: 0x159178, Func Offset: 0x2a8
	// Line 1780, Address: 0x15918c, Func Offset: 0x2bc
	// Line 1781, Address: 0x159198, Func Offset: 0x2c8
	// Line 1783, Address: 0x1591b8, Func Offset: 0x2e8
	// Line 1784, Address: 0x1591d4, Func Offset: 0x304
	// Line 1785, Address: 0x1591f8, Func Offset: 0x328
	// Line 1786, Address: 0x159204, Func Offset: 0x334
	// Line 1787, Address: 0x159238, Func Offset: 0x368
	// Line 1788, Address: 0x15924c, Func Offset: 0x37c
	// Line 1789, Address: 0x159254, Func Offset: 0x384
	// Func End, Address: 0x159264, Func Offset: 0x394
}

