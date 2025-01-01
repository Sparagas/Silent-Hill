typedef struct shAttackInfo;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
typedef struct Model_List;
typedef struct _anon3;
typedef struct _anon4;
typedef struct DramaDemo_MessageTime;
typedef struct shBattleFight;
typedef struct shBattleShot;

typedef void(*type_1)();
typedef int(*type_2)();

typedef unsigned char type_0[10];
typedef unsigned char type_3[13];
typedef float type_4[4];
typedef unsigned char type_5[34];
typedef unsigned char type_6[384];
typedef int(*type_7)()[5];
typedef DramaDemo_MessageTime type_8[9];
typedef unsigned char type_9[10];
typedef shAttackInfo type_10[46];
typedef _anon0 type_11[38];

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

struct DramaDemo_MessageTime
{
	unsigned short start;
	unsigned short end;
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
unsigned char ev_pos[384];
_anon0 ev_list[38];
int(*ev_prog)()[5];
_anon4 stage_hotel_3f_f;
DramaDemo_MessageTime video_msg[9];

int EvProgUseHotelStairKey();
int EvProgUseHotel312Key();
int EvProgMemoryOfMurder();
int EvProgVideoReplay();

// 
// Start address: 0x22a8e0
int EvProgUseHotelStairKey()
{
	// Line 65, Address: 0x22a8e0, Func Offset: 0
	// Line 66, Address: 0x22a8e8, Func Offset: 0x8
	// Line 67, Address: 0x22a8f8, Func Offset: 0x18
	// Func End, Address: 0x22a908, Func Offset: 0x28
}

// 
// Start address: 0x22a910
int EvProgUseHotel312Key()
{
	// Line 72, Address: 0x22a910, Func Offset: 0
	// Line 73, Address: 0x22a918, Func Offset: 0x8
	// Line 74, Address: 0x22a928, Func Offset: 0x18
	// Func End, Address: 0x22a938, Func Offset: 0x28
}

// 
// Start address: 0x22a940
int EvProgMemoryOfMurder()
{
	// Line 140, Address: 0x22a940, Func Offset: 0
	// Line 141, Address: 0x22a944, Func Offset: 0x4
	// Func End, Address: 0x22a94c, Func Offset: 0xc
}

// 
// Start address: 0x22a950
int EvProgVideoReplay()
{
	// Line 148, Address: 0x22a950, Func Offset: 0
	// Line 149, Address: 0x22a954, Func Offset: 0x4
	// Func End, Address: 0x22a95c, Func Offset: 0xc
}

