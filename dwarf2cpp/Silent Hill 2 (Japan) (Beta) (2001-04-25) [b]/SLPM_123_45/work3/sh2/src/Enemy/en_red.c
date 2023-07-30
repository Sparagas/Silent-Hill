typedef struct _CL_VHIT_CHARA;
typedef struct _CL_HITPOLY_HEAD;
typedef struct SubCharacter;
typedef struct EnPATH_DATA;
typedef struct EnLOCAL_DATA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon0;
typedef struct EnCOMMUNICATION;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct EnMKN_DATA;
typedef struct _anon1;
typedef struct EnIKE_DATA;
typedef struct EnRED_DATA;
typedef struct _anon2;
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
typedef struct shAttackInfo;
typedef union _anon3;
typedef struct _CL_VHIT_WALL;

typedef void(*type_9)(EnLOCAL_DATA*);
typedef void(*type_14)(EnLOCAL_DATA*);
typedef void(*type_17)(SubCharacter*);
typedef void(*type_21)(SubCharacter*);

typedef float type_0[5];
typedef unsigned char type_1[10];
typedef float type_2[5];
typedef float type_3[5];
typedef unsigned char type_4[13];
typedef EnANIME_DATA type_5[7];
typedef unsigned char type_6[34];
typedef float type_7[4];
typedef float type_8[4][4];
typedef void(*type_10)(EnLOCAL_DATA*)[6];
typedef float type_11[5];
typedef float type_12[5];
typedef float type_13[5];
typedef void(*type_15)(EnLOCAL_DATA*)[8];
typedef unsigned char type_16[10];
typedef EnLOCAL_DATA type_18[64];
typedef shAttackInfo type_19[46];
typedef EnCOMMUNICATION type_20[8];
typedef char type_22[3];
typedef float type_23[4][3];
typedef unsigned char type_24[4];
typedef float type_25[4];
typedef int type_26[5];
typedef float type_27[4];
typedef char type_28[2];

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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
EnANIME_DATA EnREDAnime[7];
float ap_boss_point[4][3];
EnLOCAL_WORK enLocalWork;

void enREDInitData(EnLOCAL_DATA* dp);
void enREDCtrlMain(EnLOCAL_DATA* dp);
void enREDCtrlAutomatic(EnLOCAL_DATA* dp);
void enREDCtrlSleep(EnLOCAL_DATA* dp);
void enREDCtrlGoPlayable(EnLOCAL_DATA* dp);
void enREDCtrlEvent(EnLOCAL_DATA* dp);
void enREDCtrlHand(EnLOCAL_DATA* dp);
void enREDCtrlWander(EnLOCAL_DATA* dp);
void enREDCtrlChase(EnLOCAL_DATA* dp);
void enREDCtrlBerserk(EnLOCAL_DATA* dp);
void enREDCtrlStair(EnLOCAL_DATA* dp);
void enREDCtrlAttack(EnLOCAL_DATA* dp);
void enREDCtrlSeize();
void enREDCtrlDead(EnLOCAL_DATA* dp);
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

// 
// Start address: 0x165dc0
void enREDInitData(EnLOCAL_DATA* dp)
{
	float ep;
	float hp;
	int mode;
	float endurance[5];
	float vitarity[5];
	// Line 110, Address: 0x165dc0, Func Offset: 0
	// Line 111, Address: 0x165dd0, Func Offset: 0x10
	// Line 118, Address: 0x165dec, Func Offset: 0x2c
	// Line 125, Address: 0x165e08, Func Offset: 0x48
	// Line 128, Address: 0x165e14, Func Offset: 0x54
	// Line 130, Address: 0x165e20, Func Offset: 0x60
	// Line 132, Address: 0x165e3c, Func Offset: 0x7c
	// Line 133, Address: 0x165e50, Func Offset: 0x90
	// Line 134, Address: 0x165e5c, Func Offset: 0x9c
	// Line 135, Address: 0x165e6c, Func Offset: 0xac
	// Line 136, Address: 0x165e8c, Func Offset: 0xcc
	// Line 138, Address: 0x165e94, Func Offset: 0xd4
	// Line 139, Address: 0x165ea4, Func Offset: 0xe4
	// Line 140, Address: 0x165eac, Func Offset: 0xec
	// Line 141, Address: 0x165ec0, Func Offset: 0x100
	// Line 142, Address: 0x165ed0, Func Offset: 0x110
	// Line 145, Address: 0x165edc, Func Offset: 0x11c
	// Line 147, Address: 0x165ef0, Func Offset: 0x130
	// Line 148, Address: 0x165f20, Func Offset: 0x160
	// Line 152, Address: 0x165f2c, Func Offset: 0x16c
	// Line 153, Address: 0x165f3c, Func Offset: 0x17c
	// Func End, Address: 0x165f50, Func Offset: 0x190
}

// 
// Start address: 0x165f50
void enREDCtrlMain(EnLOCAL_DATA* dp)
{
	void(*enCtrlREDFunc)(EnLOCAL_DATA*)[6];
	// Line 158, Address: 0x165f50, Func Offset: 0
	// Line 159, Address: 0x165f5c, Func Offset: 0xc
	// Line 168, Address: 0x165f78, Func Offset: 0x28
	// Line 169, Address: 0x165fa0, Func Offset: 0x50
	// Func End, Address: 0x165fb0, Func Offset: 0x60
}

// 
// Start address: 0x165fb0
void enREDCtrlAutomatic(EnLOCAL_DATA* dp)
{
	void(*enCtrlREDSubFunc)(EnLOCAL_DATA*)[8];
	// Line 173, Address: 0x165fb0, Func Offset: 0
	// Line 174, Address: 0x165fbc, Func Offset: 0xc
	// Line 186, Address: 0x165fd8, Func Offset: 0x28
	// Line 189, Address: 0x165fe8, Func Offset: 0x38
	// Line 191, Address: 0x165ff4, Func Offset: 0x44
	// Line 193, Address: 0x16601c, Func Offset: 0x6c
	// Line 194, Address: 0x166030, Func Offset: 0x80
	// Line 195, Address: 0x16606c, Func Offset: 0xbc
	// Line 199, Address: 0x16607c, Func Offset: 0xcc
	// Line 201, Address: 0x166088, Func Offset: 0xd8
	// Line 202, Address: 0x166094, Func Offset: 0xe4
	// Func End, Address: 0x1660a4, Func Offset: 0xf4
}

// 
// Start address: 0x1660b0
void enREDCtrlSleep(EnLOCAL_DATA* dp)
{
	// Line 205, Address: 0x1660b0, Func Offset: 0
	// Line 206, Address: 0x1660bc, Func Offset: 0xc
	// Line 207, Address: 0x1660d0, Func Offset: 0x20
	// Line 208, Address: 0x1660dc, Func Offset: 0x2c
	// Line 209, Address: 0x1660ec, Func Offset: 0x3c
	// Line 211, Address: 0x1660f4, Func Offset: 0x44
	// Func End, Address: 0x166104, Func Offset: 0x54
}

// 
// Start address: 0x166110
void enREDCtrlGoPlayable(EnLOCAL_DATA* dp)
{
	// Line 214, Address: 0x166110, Func Offset: 0
	// Line 215, Address: 0x166118, Func Offset: 0x8
	// Line 216, Address: 0x166124, Func Offset: 0x14
	// Line 217, Address: 0x166138, Func Offset: 0x28
	// Func End, Address: 0x166144, Func Offset: 0x34
}

// 
// Start address: 0x166150
void enREDCtrlEvent(EnLOCAL_DATA* dp)
{
	// Line 221, Address: 0x166150, Func Offset: 0
	// Line 222, Address: 0x166158, Func Offset: 0x8
	// Line 223, Address: 0x166174, Func Offset: 0x24
	// Line 224, Address: 0x166180, Func Offset: 0x30
	// Line 227, Address: 0x166194, Func Offset: 0x44
	// Func End, Address: 0x1661a0, Func Offset: 0x50
}

// 
// Start address: 0x1661a0
void enREDCtrlHand(EnLOCAL_DATA* dp)
{
	int move;
	// Line 231, Address: 0x1661a0, Func Offset: 0
	// Line 233, Address: 0x1661b0, Func Offset: 0x10
	// Line 234, Address: 0x1661c0, Func Offset: 0x20
	// Line 235, Address: 0x1661d4, Func Offset: 0x34
	// Line 237, Address: 0x166208, Func Offset: 0x68
	// Line 238, Address: 0x16621c, Func Offset: 0x7c
	// Line 240, Address: 0x166250, Func Offset: 0xb0
	// Line 241, Address: 0x16626c, Func Offset: 0xcc
	// Line 242, Address: 0x16627c, Func Offset: 0xdc
	// Line 244, Address: 0x166288, Func Offset: 0xe8
	// Line 245, Address: 0x1662a4, Func Offset: 0x104
	// Line 246, Address: 0x1662b4, Func Offset: 0x114
	// Line 248, Address: 0x1662c0, Func Offset: 0x120
	// Line 249, Address: 0x1662dc, Func Offset: 0x13c
	// Line 250, Address: 0x1662ec, Func Offset: 0x14c
	// Line 252, Address: 0x1662f0, Func Offset: 0x150
	// Line 253, Address: 0x16630c, Func Offset: 0x16c
	// Line 254, Address: 0x16631c, Func Offset: 0x17c
	// Line 256, Address: 0x166320, Func Offset: 0x180
	// Line 257, Address: 0x16633c, Func Offset: 0x19c
	// Line 258, Address: 0x16634c, Func Offset: 0x1ac
	// Line 260, Address: 0x166350, Func Offset: 0x1b0
	// Line 261, Address: 0x166364, Func Offset: 0x1c4
	// Line 262, Address: 0x16637c, Func Offset: 0x1dc
	// Line 263, Address: 0x166388, Func Offset: 0x1e8
	// Line 264, Address: 0x166390, Func Offset: 0x1f0
	// Line 267, Address: 0x16639c, Func Offset: 0x1fc
	// Line 268, Address: 0x1663bc, Func Offset: 0x21c
	// Line 270, Address: 0x1663c0, Func Offset: 0x220
	// Line 271, Address: 0x1663cc, Func Offset: 0x22c
	// Line 272, Address: 0x1663d8, Func Offset: 0x238
	// Line 274, Address: 0x1663e0, Func Offset: 0x240
	// Func End, Address: 0x1663f4, Func Offset: 0x254
}

// 
// Start address: 0x166400
void enREDCtrlWander(EnLOCAL_DATA* dp)
{
	int t;
	float vec[4];
	// Line 278, Address: 0x166400, Func Offset: 0
	// Line 281, Address: 0x166410, Func Offset: 0x10
	// Line 282, Address: 0x166430, Func Offset: 0x30
	// Line 283, Address: 0x166444, Func Offset: 0x44
	// Line 284, Address: 0x166450, Func Offset: 0x50
	// Line 287, Address: 0x166458, Func Offset: 0x58
	// Line 288, Address: 0x16646c, Func Offset: 0x6c
	// Line 289, Address: 0x16647c, Func Offset: 0x7c
	// Line 290, Address: 0x166490, Func Offset: 0x90
	// Line 292, Address: 0x16649c, Func Offset: 0x9c
	// Line 294, Address: 0x1664a8, Func Offset: 0xa8
	// Line 295, Address: 0x1664c8, Func Offset: 0xc8
	// Line 296, Address: 0x1664e8, Func Offset: 0xe8
	// Line 297, Address: 0x166500, Func Offset: 0x100
	// Line 298, Address: 0x166518, Func Offset: 0x118
	// Line 300, Address: 0x166524, Func Offset: 0x124
	// Line 301, Address: 0x166530, Func Offset: 0x130
	// Line 302, Address: 0x16653c, Func Offset: 0x13c
	// Line 303, Address: 0x166548, Func Offset: 0x148
	// Line 304, Address: 0x16655c, Func Offset: 0x15c
	// Line 306, Address: 0x166568, Func Offset: 0x168
	// Func End, Address: 0x16657c, Func Offset: 0x17c
}

// 
// Start address: 0x166580
void enREDCtrlChase(EnLOCAL_DATA* dp)
{
	int t;
	// Line 310, Address: 0x166580, Func Offset: 0
	// Line 312, Address: 0x166594, Func Offset: 0x14
	// Line 313, Address: 0x1665b4, Func Offset: 0x34
	// Line 314, Address: 0x1665c8, Func Offset: 0x48
	// Line 315, Address: 0x1665d4, Func Offset: 0x54
	// Line 318, Address: 0x1665dc, Func Offset: 0x5c
	// Line 319, Address: 0x1665f0, Func Offset: 0x70
	// Line 320, Address: 0x166600, Func Offset: 0x80
	// Line 321, Address: 0x166614, Func Offset: 0x94
	// Line 323, Address: 0x166620, Func Offset: 0xa0
	// Line 324, Address: 0x166644, Func Offset: 0xc4
	// Line 325, Address: 0x16665c, Func Offset: 0xdc
	// Line 326, Address: 0x166668, Func Offset: 0xe8
	// Line 329, Address: 0x1666c4, Func Offset: 0x144
	// Line 330, Address: 0x1666d0, Func Offset: 0x150
	// Line 331, Address: 0x1666dc, Func Offset: 0x15c
	// Line 332, Address: 0x1666e8, Func Offset: 0x168
	// Line 333, Address: 0x1666fc, Func Offset: 0x17c
	// Line 334, Address: 0x166708, Func Offset: 0x188
	// Line 335, Address: 0x166730, Func Offset: 0x1b0
	// Line 336, Address: 0x166738, Func Offset: 0x1b8
	// Line 338, Address: 0x166788, Func Offset: 0x208
	// Line 339, Address: 0x166794, Func Offset: 0x214
	// Line 340, Address: 0x166798, Func Offset: 0x218
	// Func End, Address: 0x1667b0, Func Offset: 0x230
}

// 
// Start address: 0x1667b0
void enREDCtrlBerserk(EnLOCAL_DATA* dp)
{
	float* pos;
	SubCharacter* scp;
	int t;
	float d;
	float vec[4];
	// Line 344, Address: 0x1667b0, Func Offset: 0
	// Line 350, Address: 0x1667c4, Func Offset: 0x14
	// Line 351, Address: 0x1667e4, Func Offset: 0x34
	// Line 352, Address: 0x1667f8, Func Offset: 0x48
	// Line 353, Address: 0x166804, Func Offset: 0x54
	// Line 356, Address: 0x16680c, Func Offset: 0x5c
	// Line 357, Address: 0x166820, Func Offset: 0x70
	// Line 358, Address: 0x166830, Func Offset: 0x80
	// Line 359, Address: 0x166844, Func Offset: 0x94
	// Line 361, Address: 0x166850, Func Offset: 0xa0
	// Line 362, Address: 0x16685c, Func Offset: 0xac
	// Line 364, Address: 0x16686c, Func Offset: 0xbc
	// Line 365, Address: 0x166870, Func Offset: 0xc0
	// Line 366, Address: 0x16688c, Func Offset: 0xdc
	// Line 367, Address: 0x1668ac, Func Offset: 0xfc
	// Line 368, Address: 0x1668c8, Func Offset: 0x118
	// Line 369, Address: 0x1668d4, Func Offset: 0x124
	// Line 370, Address: 0x1668dc, Func Offset: 0x12c
	// Line 371, Address: 0x166908, Func Offset: 0x158
	// Line 373, Address: 0x166920, Func Offset: 0x170
	// Line 374, Address: 0x166938, Func Offset: 0x188
	// Line 375, Address: 0x166950, Func Offset: 0x1a0
	// Line 377, Address: 0x16695c, Func Offset: 0x1ac
	// Line 378, Address: 0x16696c, Func Offset: 0x1bc
	// Line 379, Address: 0x166978, Func Offset: 0x1c8
	// Line 380, Address: 0x166984, Func Offset: 0x1d4
	// Line 381, Address: 0x166988, Func Offset: 0x1d8
	// Func End, Address: 0x1669a0, Func Offset: 0x1f0
}

// 
// Start address: 0x1669a0
void enREDCtrlStair(EnLOCAL_DATA* dp)
{
	float* target;
	// Line 385, Address: 0x1669a0, Func Offset: 0
	// Line 386, Address: 0x1669b4, Func Offset: 0x14
	// Line 387, Address: 0x1669b8, Func Offset: 0x18
	// Line 388, Address: 0x1669d8, Func Offset: 0x38
	// Line 389, Address: 0x1669ec, Func Offset: 0x4c
	// Line 390, Address: 0x1669f8, Func Offset: 0x58
	// Line 393, Address: 0x166a00, Func Offset: 0x60
	// Line 395, Address: 0x166a34, Func Offset: 0x94
	// Line 396, Address: 0x166a44, Func Offset: 0xa4
	// Line 397, Address: 0x166a58, Func Offset: 0xb8
	// Line 399, Address: 0x166a64, Func Offset: 0xc4
	// Line 400, Address: 0x166a6c, Func Offset: 0xcc
	// Line 401, Address: 0x166ab4, Func Offset: 0x114
	// Line 403, Address: 0x166ac0, Func Offset: 0x120
	// Line 405, Address: 0x166ac8, Func Offset: 0x128
	// Line 406, Address: 0x166ad0, Func Offset: 0x130
	// Line 407, Address: 0x166b18, Func Offset: 0x178
	// Line 409, Address: 0x166b24, Func Offset: 0x184
	// Line 411, Address: 0x166b2c, Func Offset: 0x18c
	// Line 412, Address: 0x166b3c, Func Offset: 0x19c
	// Line 414, Address: 0x166b44, Func Offset: 0x1a4
	// Line 415, Address: 0x166b54, Func Offset: 0x1b4
	// Line 416, Address: 0x166b64, Func Offset: 0x1c4
	// Line 417, Address: 0x166b74, Func Offset: 0x1d4
	// Line 418, Address: 0x166b80, Func Offset: 0x1e0
	// Line 419, Address: 0x166b94, Func Offset: 0x1f4
	// Line 420, Address: 0x166bc0, Func Offset: 0x220
	// Line 421, Address: 0x166bc8, Func Offset: 0x228
	// Line 422, Address: 0x166bd0, Func Offset: 0x230
	// Line 425, Address: 0x166bd8, Func Offset: 0x238
	// Line 427, Address: 0x166be0, Func Offset: 0x240
	// Line 428, Address: 0x166be8, Func Offset: 0x248
	// Line 429, Address: 0x166c30, Func Offset: 0x290
	// Line 431, Address: 0x166c3c, Func Offset: 0x29c
	// Line 433, Address: 0x166c44, Func Offset: 0x2a4
	// Line 434, Address: 0x166c4c, Func Offset: 0x2ac
	// Line 435, Address: 0x166c94, Func Offset: 0x2f4
	// Line 439, Address: 0x166ca0, Func Offset: 0x300
	// Line 442, Address: 0x166d30, Func Offset: 0x390
	// Line 443, Address: 0x166d40, Func Offset: 0x3a0
	// Line 444, Address: 0x166d4c, Func Offset: 0x3ac
	// Line 446, Address: 0x166d54, Func Offset: 0x3b4
	// Line 447, Address: 0x166d60, Func Offset: 0x3c0
	// Line 448, Address: 0x166d78, Func Offset: 0x3d8
	// Line 449, Address: 0x166d90, Func Offset: 0x3f0
	// Line 450, Address: 0x166d9c, Func Offset: 0x3fc
	// Func End, Address: 0x166db4, Func Offset: 0x414
}

// 
// Start address: 0x166dc0
void enREDCtrlAttack(EnLOCAL_DATA* dp)
{
	int t;
	// Line 454, Address: 0x166dc0, Func Offset: 0
	// Line 456, Address: 0x166dd0, Func Offset: 0x10
	// Line 457, Address: 0x166df4, Func Offset: 0x34
	// Line 459, Address: 0x166e00, Func Offset: 0x40
	// Line 461, Address: 0x166e2c, Func Offset: 0x6c
	// Line 462, Address: 0x166e3c, Func Offset: 0x7c
	// Line 463, Address: 0x166e6c, Func Offset: 0xac
	// Line 464, Address: 0x166e7c, Func Offset: 0xbc
	// Line 465, Address: 0x166e90, Func Offset: 0xd0
	// Line 466, Address: 0x166ea0, Func Offset: 0xe0
	// Line 467, Address: 0x166ea8, Func Offset: 0xe8
	// Line 469, Address: 0x166eb8, Func Offset: 0xf8
	// Line 470, Address: 0x166ec4, Func Offset: 0x104
	// Line 471, Address: 0x166ed0, Func Offset: 0x110
	// Line 472, Address: 0x166ee0, Func Offset: 0x120
	// Line 475, Address: 0x166ee8, Func Offset: 0x128
	// Line 476, Address: 0x166f08, Func Offset: 0x148
	// Line 477, Address: 0x166f1c, Func Offset: 0x15c
	// Line 478, Address: 0x166f28, Func Offset: 0x168
	// Line 479, Address: 0x166f4c, Func Offset: 0x18c
	// Line 480, Address: 0x166f60, Func Offset: 0x1a0
	// Line 482, Address: 0x166f68, Func Offset: 0x1a8
	// Line 483, Address: 0x166f80, Func Offset: 0x1c0
	// Line 484, Address: 0x166f88, Func Offset: 0x1c8
	// Line 485, Address: 0x166fac, Func Offset: 0x1ec
	// Line 486, Address: 0x166fc0, Func Offset: 0x200
	// Line 487, Address: 0x166fe4, Func Offset: 0x224
	// Line 489, Address: 0x167018, Func Offset: 0x258
	// Line 490, Address: 0x167020, Func Offset: 0x260
	// Line 491, Address: 0x167030, Func Offset: 0x270
	// Line 492, Address: 0x167038, Func Offset: 0x278
	// Line 494, Address: 0x16704c, Func Offset: 0x28c
	// Line 495, Address: 0x167054, Func Offset: 0x294
	// Line 496, Address: 0x167064, Func Offset: 0x2a4
	// Line 497, Address: 0x167068, Func Offset: 0x2a8
	// Line 501, Address: 0x167070, Func Offset: 0x2b0
	// Line 502, Address: 0x16707c, Func Offset: 0x2bc
	// Func End, Address: 0x167090, Func Offset: 0x2d0
}

// 
// Start address: 0x167090
void enREDCtrlSeize()
{
	// Line 506, Address: 0x167090, Func Offset: 0
	// Line 546, Address: 0x167094, Func Offset: 0x4
	// Func End, Address: 0x1670a0, Func Offset: 0x10
}

// 
// Start address: 0x1670a0
void enREDCtrlDead(EnLOCAL_DATA* dp)
{
	// Line 550, Address: 0x1670a0, Func Offset: 0
	// Line 551, Address: 0x1670a8, Func Offset: 0x8
	// Line 553, Address: 0x1670c0, Func Offset: 0x20
	// Line 555, Address: 0x1670cc, Func Offset: 0x2c
	// Func End, Address: 0x1670d8, Func Offset: 0x38
}

// 
// Start address: 0x1670e0
void enREDCtrlOnlyWalk(EnLOCAL_DATA* dp)
{
	// Line 559, Address: 0x1670e0, Func Offset: 0
	// Line 560, Address: 0x1670ec, Func Offset: 0xc
	// Line 561, Address: 0x167104, Func Offset: 0x24
	// Line 562, Address: 0x167114, Func Offset: 0x34
	// Line 564, Address: 0x167120, Func Offset: 0x40
	// Func End, Address: 0x167130, Func Offset: 0x50
}

// 
// Start address: 0x167130
void enREDCheckPlayerWeapon(EnLOCAL_DATA* dp)
{
	// Line 568, Address: 0x167130, Func Offset: 0
	// Line 569, Address: 0x16713c, Func Offset: 0xc
	// Line 570, Address: 0x167158, Func Offset: 0x28
	// Line 575, Address: 0x167194, Func Offset: 0x64
	// Line 576, Address: 0x1671a0, Func Offset: 0x70
	// Line 578, Address: 0x1671a8, Func Offset: 0x78
	// Line 581, Address: 0x1671b4, Func Offset: 0x84
	// Func End, Address: 0x1671c4, Func Offset: 0x94
}

// 
// Start address: 0x1671d0
int enREDSetDamage(EnLOCAL_DATA* dp)
{
	// Line 586, Address: 0x1671d0, Func Offset: 0
	// Line 587, Address: 0x1671dc, Func Offset: 0xc
	// Line 588, Address: 0x1671e8, Func Offset: 0x18
	// Line 589, Address: 0x167204, Func Offset: 0x34
	// Line 590, Address: 0x167244, Func Offset: 0x74
	// Line 591, Address: 0x167254, Func Offset: 0x84
	// Line 592, Address: 0x16725c, Func Offset: 0x8c
	// Line 593, Address: 0x167268, Func Offset: 0x98
	// Line 594, Address: 0x16728c, Func Offset: 0xbc
	// Line 597, Address: 0x167298, Func Offset: 0xc8
	// Line 598, Address: 0x16729c, Func Offset: 0xcc
	// Func End, Address: 0x1672ac, Func Offset: 0xdc
}

// 
// Start address: 0x1672b0
int enREDCanSeePlayer(EnLOCAL_DATA* dp)
{
	int wcd;
	float a1;
	float a;
	float dist;
	float* ppos;
	// Line 603, Address: 0x1672b0, Func Offset: 0
	// Line 604, Address: 0x1672cc, Func Offset: 0x1c
	// Line 606, Address: 0x1672dc, Func Offset: 0x2c
	// Line 607, Address: 0x1672e8, Func Offset: 0x38
	// Line 608, Address: 0x167304, Func Offset: 0x54
	// Line 609, Address: 0x16731c, Func Offset: 0x6c
	// Line 610, Address: 0x16733c, Func Offset: 0x8c
	// Line 612, Address: 0x167348, Func Offset: 0x98
	// Line 614, Address: 0x167354, Func Offset: 0xa4
	// Line 615, Address: 0x167358, Func Offset: 0xa8
	// Line 616, Address: 0x16737c, Func Offset: 0xcc
	// Line 617, Address: 0x167398, Func Offset: 0xe8
	// Line 618, Address: 0x1673b8, Func Offset: 0x108
	// Line 620, Address: 0x1673e4, Func Offset: 0x134
	// Line 623, Address: 0x1673f0, Func Offset: 0x140
	// Line 624, Address: 0x167404, Func Offset: 0x154
	// Line 625, Address: 0x16741c, Func Offset: 0x16c
	// Line 627, Address: 0x167424, Func Offset: 0x174
	// Line 628, Address: 0x167480, Func Offset: 0x1d0
	// Line 629, Address: 0x16748c, Func Offset: 0x1dc
	// Line 630, Address: 0x1674d8, Func Offset: 0x228
	// Line 631, Address: 0x167520, Func Offset: 0x270
	// Line 632, Address: 0x167524, Func Offset: 0x274
	// Func End, Address: 0x167544, Func Offset: 0x294
}

// 
// Start address: 0x167550
int enREDCanSeeCharacter(EnLOCAL_DATA* dp, SubCharacter* scp)
{
	int wcd;
	float a1;
	float a;
	float dist;
	float* ppos;
	// Line 637, Address: 0x167550, Func Offset: 0
	// Line 638, Address: 0x167568, Func Offset: 0x18
	// Line 640, Address: 0x16756c, Func Offset: 0x1c
	// Line 641, Address: 0x167574, Func Offset: 0x24
	// Line 642, Address: 0x167590, Func Offset: 0x40
	// Line 643, Address: 0x1675b4, Func Offset: 0x64
	// Line 644, Address: 0x1675ec, Func Offset: 0x9c
	// Line 646, Address: 0x167610, Func Offset: 0xc0
	// Line 647, Address: 0x167624, Func Offset: 0xd4
	// Line 648, Address: 0x16763c, Func Offset: 0xec
	// Line 649, Address: 0x167644, Func Offset: 0xf4
	// Line 650, Address: 0x16768c, Func Offset: 0x13c
	// Line 651, Address: 0x1676d8, Func Offset: 0x188
	// Line 652, Address: 0x167734, Func Offset: 0x1e4
	// Line 653, Address: 0x167740, Func Offset: 0x1f0
	// Line 654, Address: 0x167744, Func Offset: 0x1f4
	// Func End, Address: 0x167760, Func Offset: 0x210
}

// 
// Start address: 0x167760
void enREDAnimeSet(EnLOCAL_DATA* dp, int anim)
{
	// Line 658, Address: 0x167760, Func Offset: 0
	// Line 659, Address: 0x167778, Func Offset: 0x18
	// Line 660, Address: 0x167794, Func Offset: 0x34
	// Line 661, Address: 0x1677a0, Func Offset: 0x40
	// Line 664, Address: 0x1677a8, Func Offset: 0x48
	// Line 665, Address: 0x167800, Func Offset: 0xa0
	// Line 666, Address: 0x16782c, Func Offset: 0xcc
	// Func End, Address: 0x167844, Func Offset: 0xe4
}

// 
// Start address: 0x167850
void enREDAnimeReset(EnLOCAL_DATA* dp, int anim)
{
	// Line 670, Address: 0x167850, Func Offset: 0
	// Line 672, Address: 0x167868, Func Offset: 0x18
	// Line 673, Address: 0x1678c0, Func Offset: 0x70
	// Line 674, Address: 0x1678ec, Func Offset: 0x9c
	// Func End, Address: 0x167904, Func Offset: 0xb4
}

// 
// Start address: 0x167910
void enREDAnimeExec(EnLOCAL_DATA* dp)
{
	int of;
	// Line 678, Address: 0x167910, Func Offset: 0
	// Line 679, Address: 0x167920, Func Offset: 0x10
	// Line 680, Address: 0x167928, Func Offset: 0x18
	// Line 681, Address: 0x167940, Func Offset: 0x30
	// Line 682, Address: 0x167974, Func Offset: 0x64
	// Line 683, Address: 0x167990, Func Offset: 0x80
	// Line 685, Address: 0x16799c, Func Offset: 0x8c
	// Line 695, Address: 0x167a64, Func Offset: 0x154
	// Line 702, Address: 0x167a74, Func Offset: 0x164
	// Func End, Address: 0x167a88, Func Offset: 0x178
}

// 
// Start address: 0x167a90
float enREDGetSpeed(EnLOCAL_DATA* dp)
{
	// Line 706, Address: 0x167a90, Func Offset: 0
	// Line 707, Address: 0x167a98, Func Offset: 0x8
	// Line 708, Address: 0x167acc, Func Offset: 0x3c
	// Func End, Address: 0x167ad8, Func Offset: 0x48
}

// 
// Start address: 0x167ae0
float enREDGetWalkSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 712, Address: 0x167ae0, Func Offset: 0
	// Line 713, Address: 0x167af0, Func Offset: 0x10
	// Line 720, Address: 0x167b0c, Func Offset: 0x2c
	// Line 721, Address: 0x167b30, Func Offset: 0x50
	// Line 722, Address: 0x167b48, Func Offset: 0x68
	// Line 724, Address: 0x167b58, Func Offset: 0x78
	// Line 726, Address: 0x167b78, Func Offset: 0x98
	// Func End, Address: 0x167b8c, Func Offset: 0xac
}

// 
// Start address: 0x167b90
float enREDGetAttackSpeed(EnLOCAL_DATA* dp)
{
	float r;
	float speed_rate[5];
	// Line 730, Address: 0x167b90, Func Offset: 0
	// Line 731, Address: 0x167ba0, Func Offset: 0x10
	// Line 738, Address: 0x167bbc, Func Offset: 0x2c
	// Line 739, Address: 0x167be0, Func Offset: 0x50
	// Line 741, Address: 0x167c00, Func Offset: 0x70
	// Func End, Address: 0x167c14, Func Offset: 0x84
}

// 
// Start address: 0x167c20
float enREDGetFeelRange()
{
	float r;
	float feel_range[5];
	// Line 745, Address: 0x167c20, Func Offset: 0
	// Line 746, Address: 0x167c28, Func Offset: 0x8
	// Line 753, Address: 0x167c44, Func Offset: 0x24
	// Line 754, Address: 0x167c5c, Func Offset: 0x3c
	// Line 755, Address: 0x167c70, Func Offset: 0x50
	// Line 757, Address: 0x167c84, Func Offset: 0x64
	// Line 758, Address: 0x167c88, Func Offset: 0x68
	// Func End, Address: 0x167c98, Func Offset: 0x78
}

// 
// Start address: 0x167ca0
float enREDGetRotSpeed()
{
	float rot_rate[5];
	// Line 762, Address: 0x167ca0, Func Offset: 0
	// Line 763, Address: 0x167ca8, Func Offset: 0x8
	// Line 770, Address: 0x167cc4, Func Offset: 0x24
	// Line 771, Address: 0x167ce8, Func Offset: 0x48
	// Func End, Address: 0x167cf8, Func Offset: 0x58
}

// 
// Start address: 0x167d00
void enREDSetSlowTime(EnLOCAL_DATA* dp)
{
	int timer[5];
	// Line 775, Address: 0x167d00, Func Offset: 0
	// Line 776, Address: 0x167d0c, Func Offset: 0xc
	// Line 783, Address: 0x167d28, Func Offset: 0x28
	// Line 784, Address: 0x167d4c, Func Offset: 0x4c
	// Func End, Address: 0x167d5c, Func Offset: 0x5c
}

