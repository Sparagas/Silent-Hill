typedef struct shAttackInfo;
typedef union _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct Model_List;
typedef struct _anon3;
typedef struct _anon4;
typedef struct shBattleFight;
typedef struct shBattleShot;

typedef void(*type_2)();
typedef int(*type_3)();

typedef unsigned char type_0[10];
typedef Model_List type_1[2];
typedef unsigned char type_4[13];
typedef float type_5[4];
typedef unsigned char type_6[326];
typedef unsigned char type_7[34];
typedef int(*type_8)()[4];
typedef unsigned char type_9[10];
typedef shAttackInfo type_10[46];
typedef _anon1 type_11[30];

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
unsigned char ev_pos[326];
_anon1 ev_list[30];
int(*ev_prog)()[4];
Model_List mdl_list[2];
_anon4 stage_hospital_1fe_b;

int EvProgUseHospitalEnterKey();
int EvProgGetHospitalEnterKey();
int EvProgLookDirectorMap();

// 
// Start address: 0x22c8b0
int EvProgUseHospitalEnterKey()
{
	// Line 75, Address: 0x22c8b0, Func Offset: 0
	// Line 76, Address: 0x22c8b8, Func Offset: 0x8
	// Line 78, Address: 0x22c8c8, Func Offset: 0x18
	// Func End, Address: 0x22c8d8, Func Offset: 0x28
}

// 
// Start address: 0x22c8e0
int EvProgGetHospitalEnterKey()
{
	// Line 85, Address: 0x22c8e0, Func Offset: 0
	// Line 86, Address: 0x22c8e4, Func Offset: 0x4
	// Func End, Address: 0x22c8ec, Func Offset: 0xc
}

// 
// Start address: 0x22c8f0
int EvProgLookDirectorMap()
{
	// Line 93, Address: 0x22c8f0, Func Offset: 0
	// Line 94, Address: 0x22c8f4, Func Offset: 0x4
	// Func End, Address: 0x22c8fc, Func Offset: 0xc
}

