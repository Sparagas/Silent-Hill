typedef struct shAttackInfo;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
typedef struct Model_List;
typedef struct _anon3;
typedef struct _anon4;
typedef struct shBattleFight;
typedef struct shBattleShot;

typedef void(*type_1)();
typedef int(*type_2)();

typedef unsigned char type_0[10];
typedef _anon0 type_3[1];
typedef unsigned char type_4[13];
typedef float type_5[4];
typedef unsigned char type_6[34];
typedef unsigned char type_7[10];
typedef shAttackInfo type_8[46];
typedef int(*type_9)()[4];
typedef unsigned char type_10[1];

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

struct _anon3
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

struct _anon4
{
	_anon0* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon2* gi_list;
	Model_List* mdl_list;
	_anon3* en_list;
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
unsigned char ev_pos[1];
_anon0 ev_list[1];
int(*ev_prog)()[4];
_anon4 stage_forest;

int EvProgAngelaInGrave();
int EvProgGraveSureQuiet();
int EvProgGraveLookingFor();

// 
// Start address: 0x22c880
int EvProgAngelaInGrave()
{
	// Line 99, Address: 0x22c880, Func Offset: 0
	// Line 100, Address: 0x22c884, Func Offset: 0x4
	// Func End, Address: 0x22c88c, Func Offset: 0xc
}

// 
// Start address: 0x22c890
int EvProgGraveSureQuiet()
{
	// Line 122, Address: 0x22c890, Func Offset: 0
	// Line 123, Address: 0x22c894, Func Offset: 0x4
	// Func End, Address: 0x22c89c, Func Offset: 0xc
}

// 
// Start address: 0x22c8a0
int EvProgGraveLookingFor()
{
	// Line 143, Address: 0x22c8a0, Func Offset: 0
	// Line 144, Address: 0x22c8a4, Func Offset: 0x4
	// Func End, Address: 0x22c8ac, Func Offset: 0xc
}

