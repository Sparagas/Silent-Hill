typedef struct shBattleShot;
typedef struct _anon0;
typedef struct shSkeltonWork;
typedef struct shSkelton;
typedef struct shAttackInfo;
typedef union _anon1;
typedef struct _anon2;
typedef struct shBattleFight;


typedef unsigned char type_0[10];
typedef shAttackInfo type_1[46];
typedef float type_2[4];
typedef float type_3[4][4];
typedef shSkelton type_4[400];
typedef unsigned char type_5[10];
typedef unsigned char type_6[13];
typedef unsigned char type_7[34];

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon0
{
	float d[4][4];
};

struct shSkeltonWork
{
	shSkelton work[400];
	shSkelton* free;
	int last;
};

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

struct shBattleFight
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
shSkeltonWork sh2skelton;

void shCharacterInitSkeltons();
void shCharacterFreeSkeltons(shSkelton* top);
shSkelton* shCharacterGetSkeletons(int n, unsigned char* hrc);

// 
// Start address: 0x12d790
void shCharacterInitSkeltons()
{
	int i;
	shSkelton* stp;
	// Line 34, Address: 0x12d790, Func Offset: 0
	// Line 38, Address: 0x12d7a0, Func Offset: 0x10
	// Line 39, Address: 0x12d7bc, Func Offset: 0x2c
	// Line 41, Address: 0x12d7c8, Func Offset: 0x38
	// Line 42, Address: 0x12d7d0, Func Offset: 0x40
	// Line 46, Address: 0x12d7d8, Func Offset: 0x48
	// Line 47, Address: 0x12d7e4, Func Offset: 0x54
	// Line 48, Address: 0x12d7ec, Func Offset: 0x5c
	// Line 49, Address: 0x12d804, Func Offset: 0x74
	// Line 50, Address: 0x12d808, Func Offset: 0x78
	// Func End, Address: 0x12d820, Func Offset: 0x90
}

// 
// Start address: 0x12d820
void shCharacterFreeSkeltons(shSkelton* top)
{
	shSkelton* free;
	int i;
	// Line 69, Address: 0x12d820, Func Offset: 0
	// Line 71, Address: 0x12d834, Func Offset: 0x14
	// Line 75, Address: 0x12d838, Func Offset: 0x18
	// Line 79, Address: 0x12d844, Func Offset: 0x24
	// Line 80, Address: 0x12d84c, Func Offset: 0x2c
	// Line 81, Address: 0x12d858, Func Offset: 0x38
	// Line 82, Address: 0x12d860, Func Offset: 0x40
	// Line 84, Address: 0x12d874, Func Offset: 0x54
	// Line 86, Address: 0x12d878, Func Offset: 0x58
	// Line 87, Address: 0x12d898, Func Offset: 0x78
	// Line 89, Address: 0x12d8ac, Func Offset: 0x8c
	// Line 91, Address: 0x12d8b0, Func Offset: 0x90
	// Line 93, Address: 0x12d8b8, Func Offset: 0x98
	// Line 95, Address: 0x12d8d4, Func Offset: 0xb4
	// Func End, Address: 0x12d8ec, Func Offset: 0xcc
}

// 
// Start address: 0x12d8f0
shSkelton* shCharacterGetSkeletons(int n, unsigned char* hrc)
{
	int j;
	shSkelton* parent;
	int i;
	shSkelton* pre_stp;
	shSkelton* top_stp;
	shSkelton* stp;
	// Line 119, Address: 0x12d8f0, Func Offset: 0
	// Line 128, Address: 0x12d918, Func Offset: 0x28
	// Line 129, Address: 0x12d93c, Func Offset: 0x4c
	// Line 131, Address: 0x12d948, Func Offset: 0x58
	// Line 133, Address: 0x12d960, Func Offset: 0x70
	// Line 134, Address: 0x12d968, Func Offset: 0x78
	// Line 135, Address: 0x12d96c, Func Offset: 0x7c
	// Line 136, Address: 0x12d970, Func Offset: 0x80
	// Line 138, Address: 0x12d97c, Func Offset: 0x8c
	// Line 139, Address: 0x12d994, Func Offset: 0xa4
	// Line 145, Address: 0x12d998, Func Offset: 0xa8
	// Line 151, Address: 0x12d9a0, Func Offset: 0xb0
	// Line 152, Address: 0x12d9b8, Func Offset: 0xc8
	// Line 153, Address: 0x12d9bc, Func Offset: 0xcc
	// Line 154, Address: 0x12d9d0, Func Offset: 0xe0
	// Line 155, Address: 0x12d9d4, Func Offset: 0xe4
	// Line 156, Address: 0x12d9d8, Func Offset: 0xe8
	// Line 158, Address: 0x12da00, Func Offset: 0x110
	// Line 160, Address: 0x12da1c, Func Offset: 0x12c
	// Line 161, Address: 0x12da28, Func Offset: 0x138
	// Line 162, Address: 0x12da2c, Func Offset: 0x13c
	// Line 163, Address: 0x12da30, Func Offset: 0x140
	// Func End, Address: 0x12da58, Func Offset: 0x168
}

