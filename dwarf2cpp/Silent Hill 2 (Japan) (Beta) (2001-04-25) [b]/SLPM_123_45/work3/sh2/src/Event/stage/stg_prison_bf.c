typedef struct shAttackInfo;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct Model_List;
typedef struct _CL_HITPOLY_PLANE;
typedef struct _anon4;
typedef struct _anon5;
typedef struct shBattleFight;
typedef struct shBattleShot;

typedef void(*type_8)();
typedef int(*type_9)();

typedef _CL_HITPOLY_PLANE type_0[2];
typedef unsigned char type_1[10];
typedef unsigned int type_2[256];
typedef unsigned int type_3[32];
typedef unsigned char type_4[4];
typedef unsigned char type_5[164];
typedef char type_6[4];
typedef char type_7[4];
typedef unsigned char type_10[4];
typedef unsigned char type_11[13];
typedef float type_12[4][4];
typedef float type_13[4];
typedef unsigned char type_14[34];
typedef _anon0 type_15[15];
typedef int(*type_16)()[4];
typedef unsigned char type_17[10];
typedef shAttackInfo type_18[46];

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

struct _anon0
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon2
{
	unsigned int flag[256];
	unsigned int enemy[32];
	unsigned char safe[4];
	char guruguru[4];
	char cylinder[4];
	unsigned short clock;
	unsigned short carbon;
	unsigned short hanging;
	unsigned char trunk[4];
};

struct _anon3
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
};

struct _CL_HITPOLY_PLANE
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4][4];
};

struct _anon4
{
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	short condition;
};

struct _anon5
{
	_anon0* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon3* gi_list;
	Model_List* mdl_list;
	_anon4* en_list;
	void(*stage_init)();
	void(*room_init)();
	void(*alltime_func)();
	int glb_crd;
	int reserve_05;
	int reserve_06;
	int reserve_07;
	int reserve_08;
	int reserve_09;
	int reserve_10;
	int reserve_11;
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
unsigned char ev_pos[164];
_anon0 ev_list[15];
_CL_HITPOLY_PLANE clActWallList_ps57[2];
int(*ev_prog)()[4];
_anon5 stage_prison_bf;
_anon2 game_flag;

int EvProgHoleTo6thLayer();
int EvProgDoorOpen6Layer();
int EvProgHoleTo7thLayer();
void EvAllTimeFunc();

// 
// Start address: 0x231920
int EvProgHoleTo6thLayer()
{
	// Line 67, Address: 0x231920, Func Offset: 0
	// Line 68, Address: 0x231924, Func Offset: 0x4
	// Func End, Address: 0x23192c, Func Offset: 0xc
}

// 
// Start address: 0x231930
int EvProgDoorOpen6Layer()
{
	// Line 74, Address: 0x231930, Func Offset: 0
	// Line 75, Address: 0x231934, Func Offset: 0x4
	// Func End, Address: 0x23193c, Func Offset: 0xc
}

// 
// Start address: 0x231940
int EvProgHoleTo7thLayer()
{
	// Line 82, Address: 0x231940, Func Offset: 0
	// Line 83, Address: 0x231944, Func Offset: 0x4
	// Func End, Address: 0x23194c, Func Offset: 0xc
}

// 
// Start address: 0x231950
void EvAllTimeFunc()
{
	// Line 88, Address: 0x231950, Func Offset: 0
	// Line 89, Address: 0x231958, Func Offset: 0x8
	// Line 91, Address: 0x231974, Func Offset: 0x24
	// Line 92, Address: 0x23198c, Func Offset: 0x3c
	// Line 95, Address: 0x23199c, Func Offset: 0x4c
	// Func End, Address: 0x2319ac, Func Offset: 0x5c
}

