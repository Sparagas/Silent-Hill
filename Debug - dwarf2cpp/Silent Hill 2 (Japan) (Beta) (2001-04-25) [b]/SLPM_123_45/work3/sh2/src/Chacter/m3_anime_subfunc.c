typedef struct shSkelton;
typedef struct _anon0;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shAttackInfo;
typedef union _anon2;


typedef unsigned char type_0[13];
typedef unsigned char type_1[34];
typedef float type_2[4];
typedef float type_3[4][4];
typedef unsigned char type_4[10];
typedef shAttackInfo type_5[46];
typedef unsigned char type_6[10];

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon1 src_m;
	_anon0 src_t;
	_anon1 des_m;
	_anon0 des_t;
	_anon0 axis;
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
	float x;
	float y;
	float z;
	float w;
};

struct _anon1
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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon2 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];

void sh_PJMS_SetUntouchUpper(shSkelton* stp);
void sh_PJMS_SetUntouchUpper2(shSkelton* stp);
void sh_PJMS_SetUntouchUnder(shSkelton* stp);
void sh_PJMS_SetUntouchUnder2(shSkelton* stp);
void sh_PJMS_ResetUntouchUpper(shSkelton* stp);
void sh_PJMS_ResetUntouchUpper2(shSkelton* stp);
void sh_PJMS_ResetUntouchUnder(shSkelton* stp);
void sh_PJMS_ResetUntouchUnder2(shSkelton* stp);
void mizSetUntouchWithoutNeck(shSkelton* stp);
void mizResetUntouchWithoutNeck(shSkelton* stp);
void mizSetUntouchWithoutKnee(shSkelton* stp);
void mizResetUntouchWithoutKnee(shSkelton* stp);
void MariaSetUntouchWithoutNeck(shSkelton* stp);
void MariaResetUntouchWithoutNeck(shSkelton* stp);

// 
// Start address: 0x104350
void sh_PJMS_SetUntouchUpper(shSkelton* stp)
{
	// Line 37, Address: 0x104350, Func Offset: 0
	// Line 38, Address: 0x104358, Func Offset: 0x8
	// Line 65, Address: 0x10442c, Func Offset: 0xdc
	// Func End, Address: 0x104438, Func Offset: 0xe8
}

// 
// Start address: 0x104440
void sh_PJMS_SetUntouchUpper2(shSkelton* stp)
{
	// Line 67, Address: 0x104440, Func Offset: 0
	// Line 68, Address: 0x104448, Func Offset: 0x8
	// Line 95, Address: 0x1044ec, Func Offset: 0xac
	// Func End, Address: 0x1044f8, Func Offset: 0xb8
}

// 
// Start address: 0x104500
void sh_PJMS_SetUntouchUnder(shSkelton* stp)
{
	// Line 105, Address: 0x104500, Func Offset: 0
	// Line 106, Address: 0x104508, Func Offset: 0x8
	// Line 121, Address: 0x104584, Func Offset: 0x84
	// Func End, Address: 0x104590, Func Offset: 0x90
}

// 
// Start address: 0x104590
void sh_PJMS_SetUntouchUnder2(shSkelton* stp)
{
	// Line 123, Address: 0x104590, Func Offset: 0
	// Line 124, Address: 0x104598, Func Offset: 0x8
	// Line 145, Address: 0x104644, Func Offset: 0xb4
	// Func End, Address: 0x104650, Func Offset: 0xc0
}

// 
// Start address: 0x104650
void sh_PJMS_ResetUntouchUpper(shSkelton* stp)
{
	// Line 155, Address: 0x104650, Func Offset: 0
	// Line 156, Address: 0x104658, Func Offset: 0x8
	// Line 183, Address: 0x104728, Func Offset: 0xd8
	// Func End, Address: 0x104734, Func Offset: 0xe4
}

// 
// Start address: 0x104740
void sh_PJMS_ResetUntouchUpper2(shSkelton* stp)
{
	// Line 185, Address: 0x104740, Func Offset: 0
	// Line 186, Address: 0x104748, Func Offset: 0x8
	// Line 207, Address: 0x1047e8, Func Offset: 0xa8
	// Func End, Address: 0x1047f4, Func Offset: 0xb4
}

// 
// Start address: 0x104800
void sh_PJMS_ResetUntouchUnder(shSkelton* stp)
{
	// Line 218, Address: 0x104800, Func Offset: 0
	// Line 219, Address: 0x104808, Func Offset: 0x8
	// Line 234, Address: 0x104880, Func Offset: 0x80
	// Func End, Address: 0x10488c, Func Offset: 0x8c
}

// 
// Start address: 0x104890
void sh_PJMS_ResetUntouchUnder2(shSkelton* stp)
{
	// Line 236, Address: 0x104890, Func Offset: 0
	// Line 237, Address: 0x104898, Func Offset: 0x8
	// Line 258, Address: 0x104940, Func Offset: 0xb0
	// Func End, Address: 0x10494c, Func Offset: 0xbc
}

// 
// Start address: 0x104950
void mizSetUntouchWithoutNeck(shSkelton* stp)
{
	// Line 264, Address: 0x104950, Func Offset: 0
	// Line 265, Address: 0x104958, Func Offset: 0x8
	// Line 306, Address: 0x104a7c, Func Offset: 0x12c
	// Func End, Address: 0x104a88, Func Offset: 0x138
}

// 
// Start address: 0x104a90
void mizResetUntouchWithoutNeck(shSkelton* stp)
{
	// Line 309, Address: 0x104a90, Func Offset: 0
	// Line 310, Address: 0x104a98, Func Offset: 0x8
	// Line 351, Address: 0x104bb8, Func Offset: 0x128
	// Func End, Address: 0x104bc4, Func Offset: 0x134
}

// 
// Start address: 0x104bd0
void mizSetUntouchWithoutKnee(shSkelton* stp)
{
	// Line 356, Address: 0x104bd0, Func Offset: 0
	// Line 357, Address: 0x104bd8, Func Offset: 0x8
	// Line 402, Address: 0x104d14, Func Offset: 0x144
	// Func End, Address: 0x104d20, Func Offset: 0x150
}

// 
// Start address: 0x104d20
void mizResetUntouchWithoutKnee(shSkelton* stp)
{
	// Line 405, Address: 0x104d20, Func Offset: 0
	// Line 406, Address: 0x104d28, Func Offset: 0x8
	// Line 449, Address: 0x104e60, Func Offset: 0x140
	// Func End, Address: 0x104e6c, Func Offset: 0x14c
}

// 
// Start address: 0x104e70
void MariaSetUntouchWithoutNeck(shSkelton* stp)
{
	int i;
	// Line 551, Address: 0x104e70, Func Offset: 0
	// Line 556, Address: 0x104e7c, Func Offset: 0xc
	// Line 557, Address: 0x104e80, Func Offset: 0x10
	// Line 558, Address: 0x104e88, Func Offset: 0x18
	// Line 559, Address: 0x104ea0, Func Offset: 0x30
	// Line 560, Address: 0x104eac, Func Offset: 0x3c
	// Line 561, Address: 0x104eb0, Func Offset: 0x40
	// Line 562, Address: 0x104ebc, Func Offset: 0x4c
	// Line 563, Address: 0x104ec0, Func Offset: 0x50
	// Line 566, Address: 0x104ed0, Func Offset: 0x60
	// Func End, Address: 0x104ee0, Func Offset: 0x70
}

// 
// Start address: 0x104ee0
void MariaResetUntouchWithoutNeck(shSkelton* stp)
{
	int i;
	// Line 568, Address: 0x104ee0, Func Offset: 0
	// Line 573, Address: 0x104eec, Func Offset: 0xc
	// Line 574, Address: 0x104ef0, Func Offset: 0x10
	// Line 575, Address: 0x104ef8, Func Offset: 0x18
	// Line 576, Address: 0x104f10, Func Offset: 0x30
	// Line 578, Address: 0x104f18, Func Offset: 0x38
	// Line 579, Address: 0x104f24, Func Offset: 0x44
	// Line 580, Address: 0x104f28, Func Offset: 0x48
	// Line 583, Address: 0x104f38, Func Offset: 0x58
	// Func End, Address: 0x104f48, Func Offset: 0x68
}

