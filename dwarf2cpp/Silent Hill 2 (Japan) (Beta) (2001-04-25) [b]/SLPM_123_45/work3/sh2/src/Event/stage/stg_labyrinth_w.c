typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
typedef struct Model_List;
typedef struct _anon3;
typedef struct _anon4;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shAttackInfo;

typedef int(*type_1)();
typedef void(*type_3)();

typedef unsigned char type_0[10];
typedef int(*type_2)()[7];
typedef unsigned char type_4[13];
typedef _anon0 type_5[18];
typedef unsigned char type_6[34];
typedef float type_7[4];
typedef unsigned char type_8[10];
typedef shAttackInfo type_9[46];
typedef unsigned char type_10[218];

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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
unsigned char ev_pos[218];
_anon0 ev_list[18];
int(*ev_prog)()[7];
_anon4 stage_labyrinth_w;

int EvProgGetGreatKnife();
int EvProgControlCube();
int EvProgMariaIsAlive();
int EvProgAfterMariaIsAlive();
int EvProgGetWireCutter();
int EvProgUseWireCutter();

// 
// Start address: 0x231470
int EvProgGetGreatKnife()
{
	// Line 70, Address: 0x231470, Func Offset: 0
	// Line 71, Address: 0x231474, Func Offset: 0x4
	// Func End, Address: 0x23147c, Func Offset: 0xc
}

// 
// Start address: 0x231480
int EvProgControlCube()
{
	// Line 78, Address: 0x231480, Func Offset: 0
	// Line 79, Address: 0x231484, Func Offset: 0x4
	// Func End, Address: 0x23148c, Func Offset: 0xc
}

// 
// Start address: 0x231490
int EvProgMariaIsAlive()
{
	// Line 86, Address: 0x231490, Func Offset: 0
	// Line 87, Address: 0x231494, Func Offset: 0x4
	// Func End, Address: 0x23149c, Func Offset: 0xc
}

// 
// Start address: 0x2314a0
int EvProgAfterMariaIsAlive()
{
	// Line 94, Address: 0x2314a0, Func Offset: 0
	// Line 95, Address: 0x2314a4, Func Offset: 0x4
	// Func End, Address: 0x2314ac, Func Offset: 0xc
}

// 
// Start address: 0x2314b0
int EvProgGetWireCutter()
{
	// Line 102, Address: 0x2314b0, Func Offset: 0
	// Line 103, Address: 0x2314b4, Func Offset: 0x4
	// Func End, Address: 0x2314bc, Func Offset: 0xc
}

// 
// Start address: 0x2314c0
int EvProgUseWireCutter()
{
	// Line 110, Address: 0x2314c0, Func Offset: 0
	// Line 111, Address: 0x2314c4, Func Offset: 0x4
	// Func End, Address: 0x2314cc, Func Offset: 0xc
}

