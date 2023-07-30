typedef struct _anon0;
typedef struct Model_List;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shAttackInfo;
typedef union _anon4;
typedef struct _anon5;

typedef void(*type_3)();
typedef int(*type_5)();

typedef unsigned int type_0[32];
typedef unsigned char type_1[4];
typedef char type_2[4];
typedef char type_4[4];
typedef unsigned char type_6[4];
typedef unsigned char type_7[13];
typedef _anon3 type_8[11];
typedef float type_9[4];
typedef unsigned char type_10[34];
typedef unsigned char type_11[10];
typedef shAttackInfo type_12[46];
typedef int(*type_13)()[2];
typedef unsigned char type_14[144];
typedef unsigned char type_15[10];
typedef unsigned int type_16[256];

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

struct _anon5
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
unsigned char ev_pos[144];
_anon3 ev_list[11];
int(*ev_prog)()[2];
_anon2 stage_delusion_2;
_anon5 game_flag;

int EvProgHoleTo3rdLayer();

// 
// Start address: 0x22c850
int EvProgHoleTo3rdLayer()
{
	// Line 55, Address: 0x22c850, Func Offset: 0
	// Line 56, Address: 0x22c868, Func Offset: 0x18
	// Line 57, Address: 0x22c86c, Func Offset: 0x1c
	// Func End, Address: 0x22c874, Func Offset: 0x24
}

