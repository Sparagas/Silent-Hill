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
typedef int(*type_2)();

typedef unsigned char type_1[122];
typedef int(*type_3)()[3];
typedef unsigned char type_4[13];
typedef unsigned char type_5[34];
typedef float type_6[4];
typedef _anon3 type_7[12];
typedef Model_List type_8[4];
typedef unsigned char type_9[10];
typedef shAttackInfo type_10[46];
typedef _anon1 type_11[3];
typedef unsigned char type_12[10];

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
unsigned char ev_pos[122];
_anon3 ev_list[12];
int(*ev_prog)()[3];
Model_List mdl_list[4];
_anon1 en_list[3];
_anon2 stage_apart_e3fw;

int EvProgLauraKickKey();
int EvProgGetHandgun();

// 
// Start address: 0x22ae40
int EvProgLauraKickKey()
{
	// Line 105, Address: 0x22ae40, Func Offset: 0
	// Line 106, Address: 0x22ae44, Func Offset: 0x4
	// Func End, Address: 0x22ae4c, Func Offset: 0xc
}

// 
// Start address: 0x22ae50
int EvProgGetHandgun()
{
	// Line 112, Address: 0x22ae50, Func Offset: 0
	// Line 113, Address: 0x22ae54, Func Offset: 0x4
	// Func End, Address: 0x22ae5c, Func Offset: 0xc
}

