typedef struct shAttackInfo;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct Model_List;
typedef struct Item;
typedef struct _anon4;
typedef struct _anon5;
typedef struct shBattleFight;
typedef struct shBattleShot;

typedef void(*type_6)();
typedef int(*type_7)();

typedef unsigned char type_0[10];
typedef unsigned int type_1[256];
typedef unsigned int type_2[32];
typedef unsigned char type_3[4];
typedef char type_4[4];
typedef char type_5[4];
typedef unsigned char type_8[4];
typedef Model_List type_9[2];
typedef unsigned char type_10[13];
typedef unsigned int type_11[2];
typedef unsigned short type_12[11];
typedef float type_13[4];
typedef unsigned short type_14[3];
typedef unsigned char type_15[360];
typedef unsigned char type_16[34];
typedef unsigned char type_17[10];
typedef shAttackInfo type_18[46];
typedef int(*type_19)()[4];
typedef _anon0 type_20[24];

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

struct Item
{
	unsigned int flag[2];
	unsigned short number[11];
	unsigned char light_switch;
	unsigned char radio_switch;
	unsigned char radio_volume;
	unsigned char equip;
	float ampoule_efficacy;
	unsigned short event_use[3];
	unsigned short short_pad;
	unsigned char last_cursor;
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
unsigned char ev_pos[360];
_anon0 ev_list[24];
int(*ev_prog)()[4];
Model_List mdl_list[2];
_anon5 stage_apart_stair;
_anon2 game_flag;
Item item;

int EvProgUseYardKey();
int EvProgGetApartMap();
int EvProgGetApartWestMap();
void StageInit();

// 
// Start address: 0x225f30
int EvProgUseYardKey()
{
	// Line 76, Address: 0x225f30, Func Offset: 0
	// Line 77, Address: 0x225f38, Func Offset: 0x8
	// Line 78, Address: 0x225f48, Func Offset: 0x18
	// Func End, Address: 0x225f58, Func Offset: 0x28
}

// 
// Start address: 0x225f60
int EvProgGetApartMap()
{
	// Line 85, Address: 0x225f60, Func Offset: 0
	// Line 86, Address: 0x225f64, Func Offset: 0x4
	// Func End, Address: 0x225f6c, Func Offset: 0xc
}

// 
// Start address: 0x225f70
int EvProgGetApartWestMap()
{
	// Line 93, Address: 0x225f70, Func Offset: 0
	// Line 94, Address: 0x225f74, Func Offset: 0x4
	// Func End, Address: 0x225f7c, Func Offset: 0xc
}

// 
// Start address: 0x225f80
void StageInit()
{
	// Line 99, Address: 0x225f80, Func Offset: 0
	// Line 100, Address: 0x225f88, Func Offset: 0x8
	// Line 101, Address: 0x225f94, Func Offset: 0x14
	// Line 102, Address: 0x225fac, Func Offset: 0x2c
	// Line 103, Address: 0x225fb8, Func Offset: 0x38
	// Func End, Address: 0x225fc8, Func Offset: 0x48
}

