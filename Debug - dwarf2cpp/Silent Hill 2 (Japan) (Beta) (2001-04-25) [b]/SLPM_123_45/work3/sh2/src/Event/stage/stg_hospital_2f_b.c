typedef struct shAttackInfo;
typedef struct Pad_KeyConfig;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct Model_List;
typedef struct _anon4;
typedef struct _anon5;
typedef struct shBattleFight;
typedef struct shBattleShot;

typedef void(*type_6)();
typedef int(*type_8)();

typedef _anon0 type_0[23];
typedef unsigned char type_1[10];
typedef unsigned int type_2[256];
typedef unsigned int type_3[32];
typedef unsigned char type_4[4];
typedef char type_5[4];
typedef char type_7[4];
typedef unsigned char type_9[4];
typedef Model_List type_10[4];
typedef float type_11[4];
typedef unsigned char type_12[13];
typedef unsigned char type_13[34];
typedef unsigned char type_14[266];
typedef unsigned char type_15[10];
typedef shAttackInfo type_16[46];
typedef int(*type_17)()[4];

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

struct Pad_KeyConfig
{
	int enter;
	int cancel;
	int skip;
	int front_move;
	int back_move;
	int right_turn;
	int left_turn;
	int right_move;
	int left_move;
	int action;
	int attack;
	int dash;
	int light;
	int item;
	int search_view;
	int ready;
	int pause;
	int map;
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
unsigned char ev_pos[266];
_anon0 ev_list[23];
int(*ev_prog)()[4];
Model_List mdl_list[4];
_anon5 stage_hospital_2f_b;
_anon2 game_flag;
Pad_KeyConfig key_config;

int EvProgRefrigeratorOpen();
int EvProgGetDryCell();
int EvProgGetStoreroomKey();
void EvAllTimeFunc();

// 
// Start address: 0x22c9b0
int EvProgRefrigeratorOpen()
{
	// Line 122, Address: 0x22c9b0, Func Offset: 0
	// Func End, Address: 0x22c9b8, Func Offset: 0x8
}

// 
// Start address: 0x22c9c0
int EvProgGetDryCell()
{
	// Line 128, Address: 0x22c9c0, Func Offset: 0
	// Line 129, Address: 0x22c9c8, Func Offset: 0x8
	// Line 130, Address: 0x22c9d8, Func Offset: 0x18
	// Func End, Address: 0x22c9e8, Func Offset: 0x28
}

// 
// Start address: 0x22c9f0
int EvProgGetStoreroomKey()
{
	// Line 136, Address: 0x22c9f0, Func Offset: 0
	// Line 137, Address: 0x22c9f8, Func Offset: 0x8
	// Line 138, Address: 0x22ca08, Func Offset: 0x18
	// Func End, Address: 0x22ca18, Func Offset: 0x28
}

// 
// Start address: 0x22ca20
void EvAllTimeFunc()
{
	// Line 143, Address: 0x22ca20, Func Offset: 0
	// Line 144, Address: 0x22ca28, Func Offset: 0x8
	// Line 145, Address: 0x22ca44, Func Offset: 0x24
	// Line 146, Address: 0x22ca6c, Func Offset: 0x4c
	// Line 148, Address: 0x22ca94, Func Offset: 0x74
	// Func End, Address: 0x22caa4, Func Offset: 0x84
}

