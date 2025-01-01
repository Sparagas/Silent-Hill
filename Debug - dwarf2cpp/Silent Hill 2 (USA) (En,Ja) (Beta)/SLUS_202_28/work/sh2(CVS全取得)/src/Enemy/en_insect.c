typedef struct SubCharacter;
typedef struct EnPAP_DATA;
typedef struct shSkelton;
typedef struct EnLOCAL_DATA;
typedef struct EnNIK_DATA;
typedef struct EnSCU_DATA;
typedef struct shBattleFight;
typedef struct EnAMBUSH_DATA;
typedef struct EnBOS_DATA;
typedef struct EnONI_DATA;
typedef struct shBattleShot;
typedef struct _CL_VHIT_RESULT;
typedef struct EnPATH_DATA;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct EnCOMMUNICATION;
typedef struct EnRED_DATA;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct EnSOUND_QUEUE;
typedef struct EnFORBIDDENAREA;
typedef struct EnIKE_DATA;
typedef struct shAttackInfo;
typedef struct EnINS_DATA;
typedef struct _CL_VHIT_CHARA;
typedef struct _anon0;
typedef struct EnLOCAL_WORK;
typedef struct EnTYU_DATA;
typedef union _anon1;
typedef struct EnARM_DATA;
typedef union _anon2;
typedef struct EnNSE_DATA;
typedef struct _anon3;
typedef struct EnMKN_DATA;
typedef struct EnEDB_DATA;

typedef void(*type_0)(SubCharacter*);
typedef void(*type_8)(EnLOCAL_DATA*);
typedef void(*type_20)(SubCharacter*);

typedef unsigned char type_1[4];
typedef unsigned char type_2[14];
typedef float type_3[4];
typedef unsigned char type_4[97];
typedef float type_5[4][3];
typedef char type_6[0];
typedef unsigned char type_7[20];
typedef void(*type_9)(EnLOCAL_DATA*)[5];
typedef EnLOCAL_DATA type_10[32];
typedef EnCOMMUNICATION type_11[8];
typedef EnFORBIDDENAREA type_12[2];
typedef EnSOUND_QUEUE type_13[8];
typedef float type_14[4];
typedef float type_15[4][4];
typedef unsigned char type_16[14];
typedef shAttackInfo type_17[66];
typedef float type_18[4];
typedef unsigned char type_19[69];
typedef char type_21[3];

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

struct EnPAP_DATA
{
	float target[4];
	char dc;
	char dcm;
	char signs;
	char count;
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

struct EnNIK_DATA
{
	float swing[4];
	float acc[4];
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct EnONI_DATA
{
	char id;
	char check;
	char warp;
	short timer2;
	void* other;
	void* tp;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon2 hobj;
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

struct EnCOMMUNICATION
{
	float pos[4];
	int kind;
	int type;
	int time;
	float dist;
};

struct EnRED_DATA
{
	int attack_count;
	int boss_timer;
	void* tp;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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

struct EnSOUND_QUEUE
{
	SubCharacter* scp;
	int num;
	float vol;
	float time;
};

struct EnFORBIDDENAREA
{
	float x0;
	float z0;
	float x1;
	float z1;
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

struct EnTYU_DATA
{
	float point[4];
	EnCOMMUNICATION* tcomm;
	int near_count;
	float dist;
	short count;
	char moves;
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
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

union _anon2
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct _anon3
{
	float d[4][4];
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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
float escape_point[4][3];
EnLOCAL_WORK enLocalWork;
float stay_pos[4];
char MemShare_gp_data_buf[0];

void enINSInitData(EnLOCAL_DATA* dp);
void enSetInsect(float* pos, int num);
void enKillAllInsect();
void enWaitAllInsect();
SubCharacter* enINSGetSubCharacter(EnLOCAL_DATA* dp);
void enINSCtrlMain(EnLOCAL_DATA* dp);
void enINSCtrlApproach(EnLOCAL_DATA* dp);
void enINSCtrlAttack(EnLOCAL_DATA* dp);
void enINSCtrlEscape(EnLOCAL_DATA* dp);
void enINSCtrlChase(EnLOCAL_DATA* dp);
void enINSCtrlStay(EnLOCAL_DATA* dp);
void enINSMove(EnLOCAL_DATA* dp, float* target, float rot_rate, float rot_delta, float speed);
void enINSCheckWall(EnLOCAL_DATA* dp);
void enINSAnimeExec(EnLOCAL_DATA* dp);

// 
// Start address: 0x27d0b0
void enINSInitData(EnLOCAL_DATA* dp)
{
	int i;
	EnLOCAL_DATA* tp;
	// Line 65, Address: 0x27d0b0, Func Offset: 0
	// Line 66, Address: 0x27d0c4, Func Offset: 0x14
	// Line 68, Address: 0x27d0cc, Func Offset: 0x1c
	// Line 69, Address: 0x27d0e4, Func Offset: 0x34
	// Line 70, Address: 0x27d0f0, Func Offset: 0x40
	// Line 71, Address: 0x27d0f8, Func Offset: 0x48
	// Line 72, Address: 0x27d108, Func Offset: 0x58
	// Line 73, Address: 0x27d10c, Func Offset: 0x5c
	// Line 75, Address: 0x27d114, Func Offset: 0x64
	// Line 76, Address: 0x27d130, Func Offset: 0x80
	// Line 77, Address: 0x27d138, Func Offset: 0x88
	// Line 78, Address: 0x27d144, Func Offset: 0x94
	// Line 79, Address: 0x27d14c, Func Offset: 0x9c
	// Line 80, Address: 0x27d154, Func Offset: 0xa4
	// Line 82, Address: 0x27d160, Func Offset: 0xb0
	// Line 83, Address: 0x27d168, Func Offset: 0xb8
	// Line 84, Address: 0x27d18c, Func Offset: 0xdc
	// Line 85, Address: 0x27d1b0, Func Offset: 0x100
	// Line 86, Address: 0x27d1b8, Func Offset: 0x108
	// Line 87, Address: 0x27d1d0, Func Offset: 0x120
	// Line 88, Address: 0x27d1e8, Func Offset: 0x138
	// Line 89, Address: 0x27d1f0, Func Offset: 0x140
	// Line 90, Address: 0x27d1f8, Func Offset: 0x148
	// Func End, Address: 0x27d210, Func Offset: 0x160
}

// 
// Start address: 0x27d210
void enSetInsect(float* pos, int num)
{
	int i;
	float vec[4];
	SubCharacter* scp;
	EnLOCAL_DATA* dp;
	// Line 96, Address: 0x27d210, Func Offset: 0
	// Line 101, Address: 0x27d234, Func Offset: 0x24
	// Line 102, Address: 0x27d244, Func Offset: 0x34
	// Line 103, Address: 0x27d250, Func Offset: 0x40
	// Line 106, Address: 0x27d268, Func Offset: 0x58
	// Line 107, Address: 0x27d278, Func Offset: 0x68
	// Line 108, Address: 0x27d28c, Func Offset: 0x7c
	// Line 109, Address: 0x27d2a4, Func Offset: 0x94
	// Line 110, Address: 0x27d2ac, Func Offset: 0x9c
	// Line 111, Address: 0x27d2b0, Func Offset: 0xa0
	// Line 112, Address: 0x27d2b4, Func Offset: 0xa4
	// Line 113, Address: 0x27d2b8, Func Offset: 0xa8
	// Line 114, Address: 0x27d2d4, Func Offset: 0xc4
	// Line 115, Address: 0x27d2dc, Func Offset: 0xcc
	// Line 116, Address: 0x27d2e8, Func Offset: 0xd8
	// Line 117, Address: 0x27d2f0, Func Offset: 0xe0
	// Line 118, Address: 0x27d314, Func Offset: 0x104
	// Line 119, Address: 0x27d338, Func Offset: 0x128
	// Line 120, Address: 0x27d340, Func Offset: 0x130
	// Line 121, Address: 0x27d358, Func Offset: 0x148
	// Line 122, Address: 0x27d370, Func Offset: 0x160
	// Line 123, Address: 0x27d378, Func Offset: 0x168
	// Line 124, Address: 0x27d394, Func Offset: 0x184
	// Line 125, Address: 0x27d3a4, Func Offset: 0x194
	// Func End, Address: 0x27d3c8, Func Offset: 0x1b8
}

// 
// Start address: 0x27d3d0
void enKillAllInsect()
{
	int i;
	EnLOCAL_DATA* dp;
	// Line 130, Address: 0x27d3d0, Func Offset: 0
	// Line 132, Address: 0x27d3d8, Func Offset: 0x8
	// Line 133, Address: 0x27d3e4, Func Offset: 0x14
	// Line 134, Address: 0x27d3f4, Func Offset: 0x24
	// Line 136, Address: 0x27d3f8, Func Offset: 0x28
	// Line 137, Address: 0x27d40c, Func Offset: 0x3c
	// Func End, Address: 0x27d414, Func Offset: 0x44
}

// 
// Start address: 0x27d420
void enWaitAllInsect()
{
	int i;
	EnLOCAL_DATA* dp;
	// Line 142, Address: 0x27d420, Func Offset: 0
	// Line 144, Address: 0x27d428, Func Offset: 0x8
	// Line 145, Address: 0x27d43c, Func Offset: 0x1c
	// Line 146, Address: 0x27d448, Func Offset: 0x28
	// Line 147, Address: 0x27d468, Func Offset: 0x48
	// Line 148, Address: 0x27d47c, Func Offset: 0x5c
	// Line 150, Address: 0x27d484, Func Offset: 0x64
	// Line 152, Address: 0x27d4a0, Func Offset: 0x80
	// Line 153, Address: 0x27d4ac, Func Offset: 0x8c
	// Line 154, Address: 0x27d4bc, Func Offset: 0x9c
	// Line 155, Address: 0x27d4c4, Func Offset: 0xa4
	// Line 156, Address: 0x27d4c8, Func Offset: 0xa8
	// Line 157, Address: 0x27d4dc, Func Offset: 0xbc
	// Func End, Address: 0x27d4e4, Func Offset: 0xc4
}

// 
// Start address: 0x27d4f0
SubCharacter* enINSGetSubCharacter(EnLOCAL_DATA* dp)
{
	// Line 163, Address: 0x27d4f0, Func Offset: 0
	// Line 164, Address: 0x27d538, Func Offset: 0x48
	// Func End, Address: 0x27d540, Func Offset: 0x50
}

// 
// Start address: 0x27d540
void enINSCtrlMain(EnLOCAL_DATA* dp)
{
	SubCharacter* scp;
	void(*enCtrlINSSubFunc)(EnLOCAL_DATA*)[5];
	// Line 168, Address: 0x27d540, Func Offset: 0
	// Line 169, Address: 0x27d550, Func Offset: 0x10
	// Line 177, Address: 0x27d56c, Func Offset: 0x2c
	// Line 179, Address: 0x27d578, Func Offset: 0x38
	// Line 181, Address: 0x27d588, Func Offset: 0x48
	// Line 182, Address: 0x27d594, Func Offset: 0x54
	// Line 183, Address: 0x27d5a4, Func Offset: 0x64
	// Line 184, Address: 0x27d5b4, Func Offset: 0x74
	// Line 185, Address: 0x27d5b8, Func Offset: 0x78
	// Line 186, Address: 0x27d5bc, Func Offset: 0x7c
	// Line 187, Address: 0x27d5c0, Func Offset: 0x80
	// Line 188, Address: 0x27d5dc, Func Offset: 0x9c
	// Line 191, Address: 0x27d5e0, Func Offset: 0xa0
	// Line 194, Address: 0x27d5fc, Func Offset: 0xbc
	// Line 197, Address: 0x27d608, Func Offset: 0xc8
	// Line 200, Address: 0x27d614, Func Offset: 0xd4
	// Line 201, Address: 0x27d620, Func Offset: 0xe0
	// Func End, Address: 0x27d634, Func Offset: 0xf4
}

// 
// Start address: 0x27d640
void enINSCtrlApproach(EnLOCAL_DATA* dp)
{
	float tpos[4];
	float d;
	float speed;
	// Line 205, Address: 0x27d640, Func Offset: 0
	// Line 208, Address: 0x27d654, Func Offset: 0x14
	// Line 209, Address: 0x27d660, Func Offset: 0x20
	// Line 210, Address: 0x27d674, Func Offset: 0x34
	// Line 211, Address: 0x27d680, Func Offset: 0x40
	// Line 212, Address: 0x27d690, Func Offset: 0x50
	// Line 215, Address: 0x27d69c, Func Offset: 0x5c
	// Line 218, Address: 0x27d6bc, Func Offset: 0x7c
	// Line 219, Address: 0x27d6d4, Func Offset: 0x94
	// Line 220, Address: 0x27d708, Func Offset: 0xc8
	// Line 221, Address: 0x27d72c, Func Offset: 0xec
	// Line 222, Address: 0x27d748, Func Offset: 0x108
	// Line 223, Address: 0x27d754, Func Offset: 0x114
	// Line 224, Address: 0x27d77c, Func Offset: 0x13c
	// Line 225, Address: 0x27d798, Func Offset: 0x158
	// Line 226, Address: 0x27d7a8, Func Offset: 0x168
	// Line 227, Address: 0x27d7b4, Func Offset: 0x174
	// Line 228, Address: 0x27d7d0, Func Offset: 0x190
	// Line 229, Address: 0x27d7dc, Func Offset: 0x19c
	// Line 231, Address: 0x27d7e0, Func Offset: 0x1a0
	// Func End, Address: 0x27d7f8, Func Offset: 0x1b8
}

// 
// Start address: 0x27d800
void enINSCtrlAttack(EnLOCAL_DATA* dp)
{
	float tpos[4];
	// Line 235, Address: 0x27d800, Func Offset: 0
	// Line 237, Address: 0x27d810, Func Offset: 0x10
	// Line 238, Address: 0x27d824, Func Offset: 0x24
	// Line 239, Address: 0x27d830, Func Offset: 0x30
	// Line 241, Address: 0x27d860, Func Offset: 0x60
	// Line 243, Address: 0x27d884, Func Offset: 0x84
	// Func End, Address: 0x27d898, Func Offset: 0x98
}

// 
// Start address: 0x27d8a0
void enINSCtrlEscape(EnLOCAL_DATA* dp)
{
	EnLOCAL_DATA* tp;
	int i;
	float dm;
	float d;
	int i;
	float vec[4];
	float* ppos;
	// Line 247, Address: 0x27d8a0, Func Offset: 0
	// Line 248, Address: 0x27d8b4, Func Offset: 0x14
	// Line 250, Address: 0x27d8bc, Func Offset: 0x1c
	// Line 253, Address: 0x27d8c8, Func Offset: 0x28
	// Line 254, Address: 0x27d8cc, Func Offset: 0x2c
	// Line 255, Address: 0x27d8d8, Func Offset: 0x38
	// Line 256, Address: 0x27d928, Func Offset: 0x88
	// Line 257, Address: 0x27d938, Func Offset: 0x98
	// Line 258, Address: 0x27d93c, Func Offset: 0x9c
	// Line 260, Address: 0x27d940, Func Offset: 0xa0
	// Line 261, Address: 0x27d954, Func Offset: 0xb4
	// Line 263, Address: 0x27d960, Func Offset: 0xc0
	// Line 264, Address: 0x27d980, Func Offset: 0xe0
	// Line 265, Address: 0x27d990, Func Offset: 0xf0
	// Line 267, Address: 0x27d99c, Func Offset: 0xfc
	// Line 269, Address: 0x27d9d0, Func Offset: 0x130
	// Line 271, Address: 0x27d9f4, Func Offset: 0x154
	// Line 272, Address: 0x27da04, Func Offset: 0x164
	// Line 273, Address: 0x27da60, Func Offset: 0x1c0
	// Line 275, Address: 0x27da68, Func Offset: 0x1c8
	// Line 276, Address: 0x27da70, Func Offset: 0x1d0
	// Line 278, Address: 0x27da98, Func Offset: 0x1f8
	// Line 279, Address: 0x27daa0, Func Offset: 0x200
	// Line 280, Address: 0x27daac, Func Offset: 0x20c
	// Line 281, Address: 0x27dabc, Func Offset: 0x21c
	// Line 283, Address: 0x27dac8, Func Offset: 0x228
	// Line 285, Address: 0x27dadc, Func Offset: 0x23c
	// Line 289, Address: 0x27dae8, Func Offset: 0x248
	// Func End, Address: 0x27db00, Func Offset: 0x260
}

// 
// Start address: 0x27db00
void enINSCtrlChase(EnLOCAL_DATA* dp)
{
	float tpos[4];
	// Line 293, Address: 0x27db00, Func Offset: 0
	// Line 294, Address: 0x27db10, Func Offset: 0x10
	// Line 295, Address: 0x27db1c, Func Offset: 0x1c
	// Line 296, Address: 0x27db54, Func Offset: 0x54
	// Line 298, Address: 0x27db60, Func Offset: 0x60
	// Line 300, Address: 0x27db74, Func Offset: 0x74
	// Line 301, Address: 0x27db8c, Func Offset: 0x8c
	// Line 302, Address: 0x27db98, Func Offset: 0x98
	// Line 303, Address: 0x27dbc8, Func Offset: 0xc8
	// Line 304, Address: 0x27dbd0, Func Offset: 0xd0
	// Line 307, Address: 0x27dc58, Func Offset: 0x158
	// Func End, Address: 0x27dc6c, Func Offset: 0x16c
}

// 
// Start address: 0x27dc70
void enINSCtrlStay(EnLOCAL_DATA* dp)
{
	float vec[4];
	// Line 311, Address: 0x27dc70, Func Offset: 0
	// Line 312, Address: 0x27dc80, Func Offset: 0x10
	// Line 313, Address: 0x27dc8c, Func Offset: 0x1c
	// Line 314, Address: 0x27dcc4, Func Offset: 0x54
	// Line 316, Address: 0x27dccc, Func Offset: 0x5c
	// Line 319, Address: 0x27dd18, Func Offset: 0xa8
	// Line 320, Address: 0x27dd3c, Func Offset: 0xcc
	// Line 321, Address: 0x27dd5c, Func Offset: 0xec
	// Line 322, Address: 0x27dd68, Func Offset: 0xf8
	// Line 323, Address: 0x27dd98, Func Offset: 0x128
	// Line 324, Address: 0x27dda0, Func Offset: 0x130
	// Line 327, Address: 0x27ddd4, Func Offset: 0x164
	// Line 328, Address: 0x27dde8, Func Offset: 0x178
	// Func End, Address: 0x27ddfc, Func Offset: 0x18c
}

// 
// Start address: 0x27de00
void enINSMove(EnLOCAL_DATA* dp, float* target, float rot_rate, float rot_delta, float speed)
{
	float vec[4];
	float a;
	// Line 333, Address: 0x27de00, Func Offset: 0
	// Line 336, Address: 0x27de30, Func Offset: 0x30
	// Line 338, Address: 0x27de90, Func Offset: 0x90
	// Line 339, Address: 0x27deb4, Func Offset: 0xb4
	// Line 340, Address: 0x27ded4, Func Offset: 0xd4
	// Line 341, Address: 0x27dee4, Func Offset: 0xe4
	// Line 342, Address: 0x27def4, Func Offset: 0xf4
	// Line 344, Address: 0x27df4c, Func Offset: 0x14c
	// Line 345, Address: 0x27df58, Func Offset: 0x158
	// Line 346, Address: 0x27df78, Func Offset: 0x178
	// Line 347, Address: 0x27df7c, Func Offset: 0x17c
	// Line 348, Address: 0x27df80, Func Offset: 0x180
	// Line 349, Address: 0x27dfac, Func Offset: 0x1ac
	// Line 350, Address: 0x27dfb0, Func Offset: 0x1b0
	// Line 352, Address: 0x27dfb4, Func Offset: 0x1b4
	// Line 353, Address: 0x27dfd0, Func Offset: 0x1d0
	// Line 354, Address: 0x27dfd8, Func Offset: 0x1d8
	// Line 355, Address: 0x27dffc, Func Offset: 0x1fc
	// Line 356, Address: 0x27e010, Func Offset: 0x210
	// Line 357, Address: 0x27e020, Func Offset: 0x220
	// Line 358, Address: 0x27e030, Func Offset: 0x230
	// Line 359, Address: 0x27e040, Func Offset: 0x240
	// Line 361, Address: 0x27e0a4, Func Offset: 0x2a4
	// Line 362, Address: 0x27e0b0, Func Offset: 0x2b0
	// Line 363, Address: 0x27e0bc, Func Offset: 0x2bc
	// Func End, Address: 0x27e0e0, Func Offset: 0x2e0
}

// 
// Start address: 0x27e0e0
void enINSCheckWall(EnLOCAL_DATA* dp)
{
	float tpos[4];
	float d;
	float vec[4];
	float ep[4];
	float sp[4];
	_CL_VHIT_RESULT* res;
	// Line 367, Address: 0x27e0e0, Func Offset: 0
	// Line 368, Address: 0x27e0f4, Func Offset: 0x14
	// Line 371, Address: 0x27e0fc, Func Offset: 0x1c
	// Line 372, Address: 0x27e118, Func Offset: 0x38
	// Line 373, Address: 0x27e138, Func Offset: 0x58
	// Line 374, Address: 0x27e154, Func Offset: 0x74
	// Line 375, Address: 0x27e160, Func Offset: 0x80
	// Line 376, Address: 0x27e170, Func Offset: 0x90
	// Line 377, Address: 0x27e1a8, Func Offset: 0xc8
	// Line 379, Address: 0x27e1c4, Func Offset: 0xe4
	// Line 380, Address: 0x27e1ec, Func Offset: 0x10c
	// Line 381, Address: 0x27e200, Func Offset: 0x120
	// Line 382, Address: 0x27e218, Func Offset: 0x138
	// Line 383, Address: 0x27e22c, Func Offset: 0x14c
	// Line 384, Address: 0x27e23c, Func Offset: 0x15c
	// Line 385, Address: 0x27e254, Func Offset: 0x174
	// Line 389, Address: 0x27e258, Func Offset: 0x178
	// Func End, Address: 0x27e270, Func Offset: 0x190
}

// 
// Start address: 0x27e270
void enINSAnimeExec(EnLOCAL_DATA* dp)
{
	int n;
	// Line 393, Address: 0x27e270, Func Offset: 0
	// Line 394, Address: 0x27e284, Func Offset: 0x14
	// Line 395, Address: 0x27e288, Func Offset: 0x18
	// Line 396, Address: 0x27e2bc, Func Offset: 0x4c
	// Line 397, Address: 0x27e2c8, Func Offset: 0x58
	// Line 399, Address: 0x27e2cc, Func Offset: 0x5c
	// Line 400, Address: 0x27e2d0, Func Offset: 0x60
	// Line 401, Address: 0x27e2f4, Func Offset: 0x84
	// Func End, Address: 0x27e30c, Func Offset: 0x9c
}

