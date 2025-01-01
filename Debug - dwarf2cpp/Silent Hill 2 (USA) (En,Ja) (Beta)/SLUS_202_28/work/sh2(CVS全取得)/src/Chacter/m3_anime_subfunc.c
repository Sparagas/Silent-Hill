typedef struct shSkelton;
typedef struct shAttackInfo;
typedef union _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct shBattleFight;
typedef struct shBattleShot;


typedef unsigned char type_0[20];
typedef shAttackInfo type_1[66];
typedef unsigned char type_2[14];
typedef float type_3[4];
typedef float type_4[4][4];
typedef unsigned char type_5[69];
typedef unsigned char type_6[14];
typedef unsigned char type_7[97];

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon2 src_m;
	_anon1 src_t;
	_anon2 des_m;
	_anon1 des_t;
	_anon1 axis;
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
	float x;
	float y;
	float z;
	float w;
};

struct _anon2
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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];

void sh_PJMS_SetUntouchUpper(shSkelton* stp);
void sh_PJMS_SetUntouchUnder(shSkelton* stp);
void sh_PJMS_ResetUntouchUpper(shSkelton* stp);
void sh_PJMS_ResetUntouchUnder(shSkelton* stp);
void mizSetUntouchWithoutKnee(shSkelton* stp);
void mizResetUntouchWithoutKnee(shSkelton* stp);
void MariaSetUntouchWithoutNeck(shSkelton* stp);
void MariaResetUntouchWithoutNeck(shSkelton* stp);

// 
// Start address: 0x103b90
void sh_PJMS_SetUntouchUpper(shSkelton* stp)
{
	// Line 38, Address: 0x103b90, Func Offset: 0
	// Line 65, Address: 0x103bfc, Func Offset: 0x6c
	// Func End, Address: 0x103c04, Func Offset: 0x74
}

// 
// Start address: 0x103c10
void sh_PJMS_SetUntouchUnder(shSkelton* stp)
{
	// Line 106, Address: 0x103c10, Func Offset: 0
	// Line 121, Address: 0x103c50, Func Offset: 0x40
	// Func End, Address: 0x103c58, Func Offset: 0x48
}

// 
// Start address: 0x103c60
void sh_PJMS_ResetUntouchUpper(shSkelton* stp)
{
	// Line 156, Address: 0x103c60, Func Offset: 0
	// Line 183, Address: 0x103cc8, Func Offset: 0x68
	// Func End, Address: 0x103cd0, Func Offset: 0x70
}

// 
// Start address: 0x103cd0
void sh_PJMS_ResetUntouchUnder(shSkelton* stp)
{
	// Line 219, Address: 0x103cd0, Func Offset: 0
	// Line 234, Address: 0x103d0c, Func Offset: 0x3c
	// Func End, Address: 0x103d14, Func Offset: 0x44
}

// 
// Start address: 0x103d20
void mizSetUntouchWithoutKnee(shSkelton* stp)
{
	// Line 385, Address: 0x103d20, Func Offset: 0
	// Line 430, Address: 0x103dc0, Func Offset: 0xa0
	// Func End, Address: 0x103dc8, Func Offset: 0xa8
}

// 
// Start address: 0x103dd0
void mizResetUntouchWithoutKnee(shSkelton* stp)
{
	// Line 434, Address: 0x103dd0, Func Offset: 0
	// Line 477, Address: 0x103e6c, Func Offset: 0x9c
	// Func End, Address: 0x103e74, Func Offset: 0xa4
}

// 
// Start address: 0x103e80
void MariaSetUntouchWithoutNeck(shSkelton* stp)
{
	int i;
	// Line 584, Address: 0x103e80, Func Offset: 0
	// Line 585, Address: 0x103e84, Func Offset: 0x4
	// Line 586, Address: 0x103e8c, Func Offset: 0xc
	// Line 587, Address: 0x103ea4, Func Offset: 0x24
	// Line 588, Address: 0x103eac, Func Offset: 0x2c
	// Line 589, Address: 0x103eb0, Func Offset: 0x30
	// Line 590, Address: 0x103eb4, Func Offset: 0x34
	// Line 591, Address: 0x103eb8, Func Offset: 0x38
	// Line 594, Address: 0x103ec4, Func Offset: 0x44
	// Func End, Address: 0x103ecc, Func Offset: 0x4c
}

// 
// Start address: 0x103ed0
void MariaResetUntouchWithoutNeck(shSkelton* stp)
{
	int i;
	// Line 601, Address: 0x103ed0, Func Offset: 0
	// Line 602, Address: 0x103ed4, Func Offset: 0x4
	// Line 603, Address: 0x103edc, Func Offset: 0xc
	// Line 604, Address: 0x103ef4, Func Offset: 0x24
	// Line 606, Address: 0x103ef8, Func Offset: 0x28
	// Line 607, Address: 0x103efc, Func Offset: 0x2c
	// Line 608, Address: 0x103f00, Func Offset: 0x30
	// Line 611, Address: 0x103f0c, Func Offset: 0x3c
	// Func End, Address: 0x103f14, Func Offset: 0x44
}

