typedef struct shAttackInfo;
typedef union _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct Model_List;
typedef struct _anon3;
typedef struct _anon4;
typedef struct shBattleFight;
typedef struct shBattleShot;

typedef int(*type_0)();
typedef void(*type_3)();

typedef int(*type_1)()[5];
typedef unsigned char type_2[10];
typedef _anon1 type_4[20];
typedef unsigned char type_5[13];
typedef float type_6[4];
typedef unsigned char type_7[34];
typedef Model_List type_8[2];
typedef unsigned char type_9[10];
typedef shAttackInfo type_10[46];
typedef unsigned char type_11[214];

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon0 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon1
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
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
	_anon1* ev_list;
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
unsigned char ev_pos[214];
_anon1 ev_list[20];
int(*ev_prog)()[5];
Model_List mdl_list[2];
_anon4 stage_hospital_bf_b;

int EvProgMariaMeetAgain();
int EvProgMoveEmptyShelf();
int EvProgGetCopperRing();
int EvProgUseStoreroomKey();

// 
// Start address: 0x22a860
int EvProgMariaMeetAgain()
{
	// Line 78, Address: 0x22a860, Func Offset: 0
	// Line 79, Address: 0x22a864, Func Offset: 0x4
	// Func End, Address: 0x22a86c, Func Offset: 0xc
}

// 
// Start address: 0x22a870
int EvProgMoveEmptyShelf()
{
	// Line 86, Address: 0x22a870, Func Offset: 0
	// Line 87, Address: 0x22a874, Func Offset: 0x4
	// Func End, Address: 0x22a87c, Func Offset: 0xc
}

// 
// Start address: 0x22a880
int EvProgGetCopperRing()
{
	// Line 93, Address: 0x22a880, Func Offset: 0
	// Line 94, Address: 0x22a888, Func Offset: 0x8
	// Line 95, Address: 0x22a898, Func Offset: 0x18
	// Func End, Address: 0x22a8a8, Func Offset: 0x28
}

// 
// Start address: 0x22a8b0
int EvProgUseStoreroomKey()
{
	// Line 101, Address: 0x22a8b0, Func Offset: 0
	// Line 102, Address: 0x22a8b8, Func Offset: 0x8
	// Line 103, Address: 0x22a8c8, Func Offset: 0x18
	// Func End, Address: 0x22a8d8, Func Offset: 0x28
}

