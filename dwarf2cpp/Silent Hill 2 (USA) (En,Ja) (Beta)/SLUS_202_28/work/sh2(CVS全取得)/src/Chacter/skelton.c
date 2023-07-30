typedef struct shSkelton;
typedef struct _anon0;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shSkeltonWork;
typedef struct shAttackInfo;
typedef union _anon1;
typedef struct _anon2;


typedef unsigned char type_0[69];
typedef float type_1[4];
typedef float type_2[4][4];
typedef unsigned char type_3[14];
typedef shSkelton type_4[400];
typedef unsigned char type_5[97];
typedef unsigned char type_6[20];
typedef shAttackInfo type_7[66];
typedef unsigned char type_8[14];

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon0 src_m;
	_anon2 src_t;
	_anon0 des_m;
	_anon2 des_t;
	_anon2 axis;
	float theta;
	float xx;
	float yy;
	float zz;
	float xy;
	float yz;
	float zx;
	unsigned short c_count;
	unsigned short c_speed;
	char change;
	char reserved;
	char is_key;
	char pad;
	void* untouchable;
};

struct _anon0
{
	float d[4][4];
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

struct shSkeltonWork
{
	shSkelton work[400];
	shSkelton* free;
	int last;
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

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
shSkeltonWork sh2skelton;

void shCharacterInitSkeltons();
void shCharacterFreeSkeltons(shSkelton* top);
shSkelton* shCharacterGetSkeletons(int n, unsigned char* hrc);

// 
// Start address: 0x124ef0
void shCharacterInitSkeltons()
{
	int i;
	shSkelton* stp;
	// Line 34, Address: 0x124ef0, Func Offset: 0
	// Line 38, Address: 0x124ef8, Func Offset: 0x8
	// Line 39, Address: 0x124f14, Func Offset: 0x24
	// Line 41, Address: 0x124f20, Func Offset: 0x30
	// Line 42, Address: 0x124f28, Func Offset: 0x38
	// Line 46, Address: 0x124f38, Func Offset: 0x48
	// Line 47, Address: 0x124f44, Func Offset: 0x54
	// Line 48, Address: 0x124f4c, Func Offset: 0x5c
	// Line 49, Address: 0x124f64, Func Offset: 0x74
	// Line 50, Address: 0x124f68, Func Offset: 0x78
	// Func End, Address: 0x124f78, Func Offset: 0x88
}

// 
// Start address: 0x124f80
void shCharacterFreeSkeltons(shSkelton* top)
{
	shSkelton* free;
	int i;
	// Line 69, Address: 0x124f80, Func Offset: 0
	// Line 71, Address: 0x124f88, Func Offset: 0x8
	// Line 75, Address: 0x124f8c, Func Offset: 0xc
	// Line 79, Address: 0x124f94, Func Offset: 0x14
	// Line 80, Address: 0x124fac, Func Offset: 0x2c
	// Line 81, Address: 0x124fb4, Func Offset: 0x34
	// Line 82, Address: 0x124fbc, Func Offset: 0x3c
	// Line 84, Address: 0x124fd0, Func Offset: 0x50
	// Line 86, Address: 0x124fd4, Func Offset: 0x54
	// Line 87, Address: 0x124fec, Func Offset: 0x6c
	// Line 91, Address: 0x12500c, Func Offset: 0x8c
	// Line 93, Address: 0x125010, Func Offset: 0x90
	// Line 95, Address: 0x12502c, Func Offset: 0xac
	// Func End, Address: 0x12503c, Func Offset: 0xbc
}

// 
// Start address: 0x125040
shSkelton* shCharacterGetSkeletons(int n, unsigned char* hrc)
{
	int j;
	shSkelton* parent;
	int i;
	shSkelton* pre_stp;
	shSkelton* top_stp;
	shSkelton* stp;
	// Line 119, Address: 0x125040, Func Offset: 0
	// Line 128, Address: 0x125054, Func Offset: 0x14
	// Line 129, Address: 0x125080, Func Offset: 0x40
	// Line 131, Address: 0x12508c, Func Offset: 0x4c
	// Line 133, Address: 0x1250a0, Func Offset: 0x60
	// Line 134, Address: 0x1250b4, Func Offset: 0x74
	// Line 135, Address: 0x1250b8, Func Offset: 0x78
	// Line 136, Address: 0x1250bc, Func Offset: 0x7c
	// Line 138, Address: 0x1250c8, Func Offset: 0x88
	// Line 139, Address: 0x1250d8, Func Offset: 0x98
	// Line 145, Address: 0x1250dc, Func Offset: 0x9c
	// Line 151, Address: 0x1250e4, Func Offset: 0xa4
	// Line 152, Address: 0x1250f0, Func Offset: 0xb0
	// Line 153, Address: 0x1250f4, Func Offset: 0xb4
	// Line 154, Address: 0x125108, Func Offset: 0xc8
	// Line 155, Address: 0x12510c, Func Offset: 0xcc
	// Line 156, Address: 0x125110, Func Offset: 0xd0
	// Line 158, Address: 0x12512c, Func Offset: 0xec
	// Line 160, Address: 0x125148, Func Offset: 0x108
	// Line 161, Address: 0x125154, Func Offset: 0x114
	// Line 162, Address: 0x125158, Func Offset: 0x118
	// Line 163, Address: 0x12515c, Func Offset: 0x11c
	// Func End, Address: 0x125174, Func Offset: 0x134
}

