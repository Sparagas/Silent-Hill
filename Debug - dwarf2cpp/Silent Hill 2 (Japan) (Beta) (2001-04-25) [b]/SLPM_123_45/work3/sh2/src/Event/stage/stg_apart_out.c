typedef struct _anon0;
typedef struct Model_List;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shAttackInfo;
typedef union _anon4;

typedef void(*type_1)();
typedef int(*type_2)();

typedef unsigned char type_0[130];
typedef unsigned char type_3[13];
typedef float type_4[4];
typedef unsigned char type_5[34];
typedef _anon3 type_6[9];
typedef unsigned char type_7[10];
typedef shAttackInfo type_8[46];
typedef int(*type_9)()[2];
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
unsigned char ev_pos[130];
_anon3 ev_list[9];
int(*ev_prog)()[2];
_anon2 stage_apart_out;

int EvProgGetCoinOfSnake();

// 
// Start address: 0x22ae60
int EvProgGetCoinOfSnake()
{
	// Line 58, Address: 0x22ae60, Func Offset: 0
	// Line 59, Address: 0x22ae64, Func Offset: 0x4
	// Func End, Address: 0x22ae6c, Func Offset: 0xc
}

