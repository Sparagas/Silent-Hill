typedef struct _anon0;
typedef struct Model_List;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shAttackInfo;
typedef union _anon4;

typedef void(*type_0)();
typedef int(*type_1)();

typedef unsigned char type_2[13];
typedef _anon3 type_3[5];
typedef unsigned char type_4[34];
typedef float type_5[4];
typedef unsigned char type_6[10];
typedef shAttackInfo type_7[46];
typedef int(*type_8)()[3];
typedef unsigned char type_9[38];
typedef unsigned char type_10[10];

struct _anon0
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

struct _anon1
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

struct _anon2
{
	_anon3* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon0* gi_list;
	Model_List* mdl_list;
	_anon1* en_list;
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

struct _anon3
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
unsigned char ev_pos[38];
_anon3 ev_list[5];
int(*ev_prog)()[3];
_anon2 stage_to_heaven;

int EvProgLauraWentSideRoad();
int EvProgMariaUnlockHeaven();

// 
// Start address: 0x22a990
int EvProgLauraWentSideRoad()
{
	// Line 58, Address: 0x22a990, Func Offset: 0
	// Line 59, Address: 0x22a994, Func Offset: 0x4
	// Func End, Address: 0x22a99c, Func Offset: 0xc
}

// 
// Start address: 0x22a9a0
int EvProgMariaUnlockHeaven()
{
	// Line 66, Address: 0x22a9a0, Func Offset: 0
	// Line 67, Address: 0x22a9a4, Func Offset: 0x4
	// Func End, Address: 0x22a9ac, Func Offset: 0xc
}

