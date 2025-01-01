typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
typedef struct Model_List;
typedef struct _anon3;
typedef struct _anon4;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shAttackInfo;

typedef void(*type_1)();
typedef int(*type_2)();

typedef unsigned char type_0[10];
typedef unsigned char type_3[13];
typedef unsigned char type_4[34];
typedef float type_5[4];
typedef unsigned char type_6[304];
typedef int(*type_7)()[6];
typedef unsigned char type_8[10];
typedef shAttackInfo type_9[46];
typedef _anon0 type_10[30];

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
unsigned char ev_pos[304];
_anon0 ev_list[30];
int(*ev_prog)()[6];
_anon4 stage_hotel_bf_f;

int EvProgGetThinner();
int EvProgGetBarKey();
int EvProgGetLightbulb();
int EvProgUseLightbulb();
int EvProgUseBarKey();

// 
// Start address: 0x230ce0
int EvProgGetThinner()
{
	// Line 69, Address: 0x230ce0, Func Offset: 0
	// Line 70, Address: 0x230ce8, Func Offset: 0x8
	// Line 71, Address: 0x230cf8, Func Offset: 0x18
	// Func End, Address: 0x230d08, Func Offset: 0x28
}

// 
// Start address: 0x230d10
int EvProgGetBarKey()
{
	// Line 77, Address: 0x230d10, Func Offset: 0
	// Line 78, Address: 0x230d18, Func Offset: 0x8
	// Line 79, Address: 0x230d28, Func Offset: 0x18
	// Func End, Address: 0x230d38, Func Offset: 0x28
}

// 
// Start address: 0x230d40
int EvProgGetLightbulb()
{
	// Line 86, Address: 0x230d40, Func Offset: 0
	// Line 87, Address: 0x230d44, Func Offset: 0x4
	// Func End, Address: 0x230d4c, Func Offset: 0xc
}

// 
// Start address: 0x230d50
int EvProgUseLightbulb()
{
	// Line 93, Address: 0x230d50, Func Offset: 0
	// Line 94, Address: 0x230d58, Func Offset: 0x8
	// Line 95, Address: 0x230d68, Func Offset: 0x18
	// Func End, Address: 0x230d78, Func Offset: 0x28
}

// 
// Start address: 0x230d80
int EvProgUseBarKey()
{
	// Line 101, Address: 0x230d80, Func Offset: 0
	// Line 102, Address: 0x230d88, Func Offset: 0x8
	// Line 103, Address: 0x230d98, Func Offset: 0x18
	// Func End, Address: 0x230da8, Func Offset: 0x28
}

