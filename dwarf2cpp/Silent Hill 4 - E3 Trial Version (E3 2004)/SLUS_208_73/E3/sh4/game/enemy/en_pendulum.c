typedef struct sfObj;
typedef struct EnemyFeetParameter;
typedef struct EnemyClHitResult;
typedef struct EnemyPendulum;
typedef struct EnemyFeet;
typedef enum EnemyPendulumMode : unsigned char;
typedef enum EnemyFeetMode : unsigned char;
typedef union _anon0;
typedef struct EnemyMeasureResult;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef enum EnemyClHitResultType : unsigned char;

typedef void(*type_7)(sfObj*);
typedef void(*type_9)(sfObj*);
typedef void(*type_10)(void*, float*);
typedef void(*type_11)(void*, float*);
typedef void(*type_12)(void*, float*);
typedef void(*type_21)(void*, float*);
typedef void(*type_22)(void*, float*);
typedef void(*type_24)(void*, float*);

typedef float type_0[4];
typedef float type_1[4][2];
typedef float type_2[2];
typedef float type_3[2];
typedef float type_4[2];
typedef float type_5[4];
typedef _anon0 type_6[256];
typedef float type_8[4][2];
typedef short type_13[2];
typedef unsigned short type_14[2];
typedef char type_15[4];
typedef _anon2 type_16[4];
typedef unsigned char type_17[4];
typedef _anon3 type_18[0];
typedef float type_19[1];
typedef int type_20[1];
typedef float type_23[4][2];
typedef float type_25[4][2];
typedef float type_26[4][2];
typedef float type_27[4][2];
typedef float type_28[4][2];
typedef float type_29[4][2];

struct sfObj
{
	_anon0 fwork[256];
	_anon0* work;
	void(*func)(sfObj*);
	_anon0* work_pt0;
	_anon0* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon0* sys_work;
	_anon0* scene_work;
	_anon0* event_work;
	_anon0* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct EnemyFeetParameter
{
	float leg_length;
	float foot_size;
	float foot_thickness;
	float angle_limit_h;
	float angle_limit_fh;
	float angle_limit_fvl;
	float angle_limit_fvh;
	float leg_minimum;
	float move_limit_minimum;
	float move_limit_maximum;
	float attenuation_air;
	float attenuation;
	float approach_speed;
};

struct EnemyClHitResult
{
};

struct EnemyPendulum
{
	float move[4];
	float accumulate[4];
	float size;
	float limit;
	float limit_n;
	float weight;
	float speed;
	float abate;
	float friction;
	EnemyPendulumMode mode;
	int reset;
	int status;
	float floor_height;
	void(*get_fulcrum_func)(void*, float*);
	void(*get_pos_func)(void*, float*);
	void(*set_pos_func)(void*, float*);
	void* func_data;
};

struct EnemyFeet
{
	float hit_pos[4][2];
	float move[4][2];
	float heel_pos[4][2];
	float toe_pos[4][2];
	float old_crotch_pos[4][2];
	float target_pos[4][2];
	float foot_rot[4][2];
	float angle_v[2];
	float friction[2];
	float friction_limit[2];
	EnemyFeetParameter* fparam;
	EnemyFeetMode mode;
	int swing_mode;
	int reset;
	float swing;
	float swing_add;
	float scale;
};

enum EnemyPendulumMode : unsigned char
{
	ENEMY_PENDULUM_MODE_NORMAL,
	ENEMY_PENDULUM_MODE_ONLY_FLOOR,
	ENEMY_PENDULUM_MODE_ONLY_FLOOR_HOVER,
	ENEMY_PENDULUM_MODE_NOCHECK_ALL,
	ENEMY_PENDULUM_MODE_FIXING
};

enum EnemyFeetMode : unsigned char
{
	ENEMY_FEET_MODE_NORMAL,
	ENEMY_FEET_MODE_ONLY_FLOOR,
	ENEMY_FEET_MODE_CIRCLELIMIT,
	ENEMY_FEET_MODE_NOCHECK_ALL,
	ENEMY_FEET_MODE_CLOSE,
	ENEMY_FEET_MODE_CLOSE_PRE,
	ENEMY_FEET_MODE_FIX
};

union _anon0
{
	int si;
	unsigned int ui;
	void* pt;
	short ss[2];
	unsigned short us[2];
	char sc[4];
	unsigned char uc[4];
	float f;
	float fv[1];
	int iv[1];
};

struct EnemyMeasureResult
{
	float pos[4];
	float normal[4];
	float dist;
	int exist;
	_anon1* poly;
};

struct _anon1
{
	_anon3 vertex[0];
};

struct _anon2
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

union _anon3
{
	float node[4];
	_anon2 data[4];
};

enum EnemyClHitResultType : unsigned char
{
	EN_CL_RESULT_NOTHING,
	EN_CL_RESULT_WALL,
	EN_CL_RESULT_CHARA,
	EN_CL_RESULT_VOID
};

float sg_vector_unit_y[4];
float sg_vector_unit_x[4];
float* fulcrum_pos;

EnemyFeet* EnemyFeetWorkAllocate(sfObj* obj);
void EnemyFeetConstruct(EnemyFeet* pef, EnemyFeetParameter* fparam);
void EnemyFeetResetPos(EnemyFeet* pef, float heel_pos[4], float foot_rot[4]);
void EnemyFeetSetMode(EnemyFeet* pef, EnemyFeetMode mode);
EnemyFeetMode EnemyFeetGetMode(EnemyFeet* pef);
void EnemyFeetSetSwingMode(EnemyFeet* pef, int mode);
void EnemyFeetSetScale(EnemyFeet* pef, float scale);
void reset_pos(EnemyFeet* pef);
int check_hit(float* pos, float* base_pos, float size, EnemyFeetMode mode);
void move_close(EnemyFeet* pef);
void EnemyFeetMove(EnemyFeet* pef, float crotch_pos[4], float* waist_rot, float calf_rot[4]);
void EnemyFeetSetTarget(EnemyFeet* pef, float target_pos[4]);
void EnemyFeetGetPosAndRot(EnemyFeet* pef, float heel_pos[4], float foot_rot[4]);

// 
// Start address: 0x1d64b0
EnemyFeet* EnemyFeetWorkAllocate(sfObj* obj)
{
	// Line 314, Address: 0x1d64b0, Func Offset: 0
	// Func End, Address: 0x1d64b8, Func Offset: 0x8
}

// 
// Start address: 0x1d64c0
void EnemyFeetConstruct(EnemyFeet* pef, EnemyFeetParameter* fparam)
{
	// Line 323, Address: 0x1d64c0, Func Offset: 0
	// Line 324, Address: 0x1d64c8, Func Offset: 0x8
	// Line 325, Address: 0x1d64cc, Func Offset: 0xc
	// Line 326, Address: 0x1d64d4, Func Offset: 0x14
	// Line 327, Address: 0x1d64dc, Func Offset: 0x1c
	// Line 328, Address: 0x1d64e4, Func Offset: 0x24
	// Line 329, Address: 0x1d64ec, Func Offset: 0x2c
	// Func End, Address: 0x1d64f8, Func Offset: 0x38
}

// 
// Start address: 0x1d6500
void EnemyFeetResetPos(EnemyFeet* pef, float heel_pos[4], float foot_rot[4])
{
	// Line 338, Address: 0x1d6500, Func Offset: 0
	// Line 339, Address: 0x1d6514, Func Offset: 0x14
	// Line 340, Address: 0x1d651c, Func Offset: 0x1c
	// Line 341, Address: 0x1d6524, Func Offset: 0x24
	// Line 342, Address: 0x1d652c, Func Offset: 0x2c
	// Line 343, Address: 0x1d6538, Func Offset: 0x38
	// Line 344, Address: 0x1d6544, Func Offset: 0x44
	// Line 345, Address: 0x1d654c, Func Offset: 0x4c
	// Func End, Address: 0x1d6564, Func Offset: 0x64
}

// 
// Start address: 0x1d6570
void EnemyFeetSetMode(EnemyFeet* pef, EnemyFeetMode mode)
{
	// Line 353, Address: 0x1d6570, Func Offset: 0
	// Line 354, Address: 0x1d6578, Func Offset: 0x8
	// Line 355, Address: 0x1d657c, Func Offset: 0xc
	// Func End, Address: 0x1d6588, Func Offset: 0x18
}

// 
// Start address: 0x1d6590
EnemyFeetMode EnemyFeetGetMode(EnemyFeet* pef)
{
	// Line 363, Address: 0x1d6590, Func Offset: 0
	// Line 365, Address: 0x1d659c, Func Offset: 0xc
	// Func End, Address: 0x1d65a4, Func Offset: 0x14
}

// 
// Start address: 0x1d65b0
void EnemyFeetSetSwingMode(EnemyFeet* pef, int mode)
{
	// Line 373, Address: 0x1d65b0, Func Offset: 0
	// Line 374, Address: 0x1d65b8, Func Offset: 0x8
	// Line 375, Address: 0x1d65bc, Func Offset: 0xc
	// Func End, Address: 0x1d65c8, Func Offset: 0x18
}

// 
// Start address: 0x1d65d0
void EnemyFeetSetScale(EnemyFeet* pef, float scale)
{
	// Line 383, Address: 0x1d65d0, Func Offset: 0
	// Line 384, Address: 0x1d65d8, Func Offset: 0x8
	// Line 385, Address: 0x1d65dc, Func Offset: 0xc
	// Func End, Address: 0x1d65e8, Func Offset: 0x18
}

// 
// Start address: 0x1d65f0
void reset_pos(EnemyFeet* pef)
{
	int i;
	float vec[4];
	float s;
	// Line 391, Address: 0x1d65f0, Func Offset: 0
	// Line 395, Address: 0x1d6608, Func Offset: 0x18
	// Line 396, Address: 0x1d6610, Func Offset: 0x20
	// Line 397, Address: 0x1d6618, Func Offset: 0x28
	// Line 398, Address: 0x1d6628, Func Offset: 0x38
	// Line 399, Address: 0x1d6634, Func Offset: 0x44
	// Line 400, Address: 0x1d6654, Func Offset: 0x64
	// Line 401, Address: 0x1d6684, Func Offset: 0x94
	// Line 402, Address: 0x1d6694, Func Offset: 0xa4
	// Line 403, Address: 0x1d66a8, Func Offset: 0xb8
	// Line 404, Address: 0x1d66b0, Func Offset: 0xc0
	// Line 403, Address: 0x1d66b4, Func Offset: 0xc4
	// Line 404, Address: 0x1d66b8, Func Offset: 0xc8
	// Line 405, Address: 0x1d66bc, Func Offset: 0xcc
	// Line 403, Address: 0x1d66c0, Func Offset: 0xd0
	// Line 404, Address: 0x1d66c4, Func Offset: 0xd4
	// Line 405, Address: 0x1d66d0, Func Offset: 0xe0
	// Line 406, Address: 0x1d66dc, Func Offset: 0xec
	// Line 407, Address: 0x1d66e0, Func Offset: 0xf0
	// Line 408, Address: 0x1d66e4, Func Offset: 0xf4
	// Line 409, Address: 0x1d66e8, Func Offset: 0xf8
	// Func End, Address: 0x1d6700, Func Offset: 0x110
}

// 
// Start address: 0x1d6700
int check_hit(float* pos, float* base_pos, float size, EnemyFeetMode mode)
{
	float tpos[4];
	float vec[4];
	int m;
	// Line 420, Address: 0x1d6700, Func Offset: 0
	// Line 423, Address: 0x1d6704, Func Offset: 0x4
	// Line 420, Address: 0x1d6708, Func Offset: 0x8
	// Line 423, Address: 0x1d670c, Func Offset: 0xc
	// Line 420, Address: 0x1d6710, Func Offset: 0x10
	// Line 423, Address: 0x1d6714, Func Offset: 0x14
	// Line 426, Address: 0x1d6740, Func Offset: 0x40
	// Line 429, Address: 0x1d6748, Func Offset: 0x48
	// Line 433, Address: 0x1d6750, Func Offset: 0x50
	// Line 435, Address: 0x1d6758, Func Offset: 0x58
	// Line 436, Address: 0x1d6770, Func Offset: 0x70
	// Line 437, Address: 0x1d677c, Func Offset: 0x7c
	// Line 440, Address: 0x1d67a8, Func Offset: 0xa8
	// Line 441, Address: 0x1d67b4, Func Offset: 0xb4
	// Line 442, Address: 0x1d67bc, Func Offset: 0xbc
	// Line 443, Address: 0x1d67c0, Func Offset: 0xc0
	// Line 444, Address: 0x1d67c8, Func Offset: 0xc8
	// Func End, Address: 0x1d67d8, Func Offset: 0xd8
}

// 
// Start address: 0x1d67e0
void move_close(EnemyFeet* pef)
{
	float vec[4];
	float d;
	float s;
	float dt;
	int i;
	int f;
	// Line 447, Address: 0x1d67e0, Func Offset: 0
	// Line 451, Address: 0x1d67ec, Func Offset: 0xc
	// Line 452, Address: 0x1d67f4, Func Offset: 0x14
	// Line 453, Address: 0x1d67fc, Func Offset: 0x1c
	// Line 454, Address: 0x1d6800, Func Offset: 0x20
	// Line 452, Address: 0x1d6808, Func Offset: 0x28
	// Line 454, Address: 0x1d680c, Func Offset: 0x2c
	// Line 455, Address: 0x1d6818, Func Offset: 0x38
	// Line 456, Address: 0x1d683c, Func Offset: 0x5c
	// Line 457, Address: 0x1d6874, Func Offset: 0x94
	// Line 458, Address: 0x1d6880, Func Offset: 0xa0
	// Line 460, Address: 0x1d68a0, Func Offset: 0xc0
	// Line 461, Address: 0x1d68a8, Func Offset: 0xc8
	// Line 462, Address: 0x1d68c4, Func Offset: 0xe4
	// Line 464, Address: 0x1d68f0, Func Offset: 0x110
	// Line 465, Address: 0x1d6904, Func Offset: 0x124
	// Line 466, Address: 0x1d690c, Func Offset: 0x12c
	// Line 467, Address: 0x1d6914, Func Offset: 0x134
	// Line 468, Address: 0x1d6918, Func Offset: 0x138
	// Line 469, Address: 0x1d6920, Func Offset: 0x140
	// Func End, Address: 0x1d6930, Func Offset: 0x150
}

// 
// Start address: 0x1d6930
void EnemyFeetMove(EnemyFeet* pef, float crotch_pos[4], float* waist_rot, float calf_rot[4])
{
	float tpos[4];
	float bpos[4];
	float tswing[4];
	float tcross[4];
	float vec[4];
	float dir[4];
	float npos[4][2];
	float trot[4];
	float nrot[4];
	EnemyFeetParameter* fparam;
	int i;
	float dt;
	float d;
	float ll;
	float dp;
	float tn;
	float wr;
	float ml;
	float scale;
	// Line 479, Address: 0x1d6930, Func Offset: 0
	// Line 485, Address: 0x1d6970, Func Offset: 0x40
	// Line 486, Address: 0x1d6978, Func Offset: 0x48
	// Line 487, Address: 0x1d6988, Func Offset: 0x58
	// Line 488, Address: 0x1d6994, Func Offset: 0x64
	// Line 489, Address: 0x1d699c, Func Offset: 0x6c
	// Line 490, Address: 0x1d69a4, Func Offset: 0x74
	// Line 491, Address: 0x1d69a8, Func Offset: 0x78
	// Line 492, Address: 0x1d69b4, Func Offset: 0x84
	// Line 493, Address: 0x1d69bc, Func Offset: 0x8c
	// Line 494, Address: 0x1d69c4, Func Offset: 0x94
	// Line 495, Address: 0x1d69cc, Func Offset: 0x9c
	// Line 496, Address: 0x1d69d0, Func Offset: 0xa0
	// Line 497, Address: 0x1d69d8, Func Offset: 0xa8
	// Line 496, Address: 0x1d69dc, Func Offset: 0xac
	// Line 498, Address: 0x1d69e0, Func Offset: 0xb0
	// Line 500, Address: 0x1d69e4, Func Offset: 0xb4
	// Line 499, Address: 0x1d69ec, Func Offset: 0xbc
	// Line 500, Address: 0x1d69f0, Func Offset: 0xc0
	// Line 501, Address: 0x1d69f8, Func Offset: 0xc8
	// Line 502, Address: 0x1d6a04, Func Offset: 0xd4
	// Line 504, Address: 0x1d6a48, Func Offset: 0x118
	// Line 505, Address: 0x1d6a50, Func Offset: 0x120
	// Line 506, Address: 0x1d6a84, Func Offset: 0x154
	// Line 508, Address: 0x1d6a90, Func Offset: 0x160
	// Line 509, Address: 0x1d6ab8, Func Offset: 0x188
	// Line 513, Address: 0x1d6ac4, Func Offset: 0x194
	// Line 511, Address: 0x1d6ac8, Func Offset: 0x198
	// Line 510, Address: 0x1d6acc, Func Offset: 0x19c
	// Line 511, Address: 0x1d6ad0, Func Offset: 0x1a0
	// Line 510, Address: 0x1d6ad4, Func Offset: 0x1a4
	// Line 513, Address: 0x1d6ad8, Func Offset: 0x1a8
	// Line 514, Address: 0x1d6ae0, Func Offset: 0x1b0
	// Line 516, Address: 0x1d6af4, Func Offset: 0x1c4
	// Line 517, Address: 0x1d6b1c, Func Offset: 0x1ec
	// Line 516, Address: 0x1d6b20, Func Offset: 0x1f0
	// Line 517, Address: 0x1d6b24, Func Offset: 0x1f4
	// Line 518, Address: 0x1d6b4c, Func Offset: 0x21c
	// Line 519, Address: 0x1d6b6c, Func Offset: 0x23c
	// Line 520, Address: 0x1d6b8c, Func Offset: 0x25c
	// Line 521, Address: 0x1d6bac, Func Offset: 0x27c
	// Line 523, Address: 0x1d6bf0, Func Offset: 0x2c0
	// Line 524, Address: 0x1d6bf8, Func Offset: 0x2c8
	// Line 523, Address: 0x1d6bfc, Func Offset: 0x2cc
	// Line 524, Address: 0x1d6c00, Func Offset: 0x2d0
	// Line 523, Address: 0x1d6c0c, Func Offset: 0x2dc
	// Line 524, Address: 0x1d6c14, Func Offset: 0x2e4
	// Line 526, Address: 0x1d6c28, Func Offset: 0x2f8
	// Line 528, Address: 0x1d6c44, Func Offset: 0x314
	// Line 529, Address: 0x1d6c50, Func Offset: 0x320
	// Line 531, Address: 0x1d6c94, Func Offset: 0x364
	// Line 532, Address: 0x1d6cb4, Func Offset: 0x384
	// Line 534, Address: 0x1d6cb8, Func Offset: 0x388
	// Line 535, Address: 0x1d6ccc, Func Offset: 0x39c
	// Line 534, Address: 0x1d6cd4, Func Offset: 0x3a4
	// Line 535, Address: 0x1d6cd8, Func Offset: 0x3a8
	// Line 536, Address: 0x1d6ce4, Func Offset: 0x3b4
	// Line 537, Address: 0x1d6d0c, Func Offset: 0x3dc
	// Line 538, Address: 0x1d6d3c, Func Offset: 0x40c
	// Line 539, Address: 0x1d6d5c, Func Offset: 0x42c
	// Line 540, Address: 0x1d6d7c, Func Offset: 0x44c
	// Line 541, Address: 0x1d6d94, Func Offset: 0x464
	// Line 542, Address: 0x1d6d98, Func Offset: 0x468
	// Line 544, Address: 0x1d6db4, Func Offset: 0x484
	// Line 545, Address: 0x1d6dd8, Func Offset: 0x4a8
	// Line 546, Address: 0x1d6e00, Func Offset: 0x4d0
	// Line 547, Address: 0x1d6e0c, Func Offset: 0x4dc
	// Line 548, Address: 0x1d6e34, Func Offset: 0x504
	// Line 549, Address: 0x1d6e54, Func Offset: 0x524
	// Line 550, Address: 0x1d6e84, Func Offset: 0x554
	// Line 551, Address: 0x1d6e88, Func Offset: 0x558
	// Line 552, Address: 0x1d6e90, Func Offset: 0x560
	// Line 553, Address: 0x1d6e9c, Func Offset: 0x56c
	// Line 554, Address: 0x1d6ec4, Func Offset: 0x594
	// Line 555, Address: 0x1d6ee4, Func Offset: 0x5b4
	// Line 556, Address: 0x1d6f14, Func Offset: 0x5e4
	// Line 558, Address: 0x1d6f30, Func Offset: 0x600
	// Line 559, Address: 0x1d6f44, Func Offset: 0x614
	// Line 560, Address: 0x1d6f4c, Func Offset: 0x61c
	// Line 561, Address: 0x1d6f58, Func Offset: 0x628
	// Line 562, Address: 0x1d6f80, Func Offset: 0x650
	// Line 563, Address: 0x1d6f84, Func Offset: 0x654
	// Line 562, Address: 0x1d6f90, Func Offset: 0x660
	// Line 563, Address: 0x1d6f94, Func Offset: 0x664
	// Line 564, Address: 0x1d6fa8, Func Offset: 0x678
	// Line 566, Address: 0x1d6fd8, Func Offset: 0x6a8
	// Line 567, Address: 0x1d6fe8, Func Offset: 0x6b8
	// Line 568, Address: 0x1d6ff0, Func Offset: 0x6c0
	// Line 569, Address: 0x1d6ffc, Func Offset: 0x6cc
	// Line 570, Address: 0x1d7024, Func Offset: 0x6f4
	// Line 571, Address: 0x1d7028, Func Offset: 0x6f8
	// Line 570, Address: 0x1d7034, Func Offset: 0x704
	// Line 571, Address: 0x1d7038, Func Offset: 0x708
	// Line 572, Address: 0x1d704c, Func Offset: 0x71c
	// Line 574, Address: 0x1d707c, Func Offset: 0x74c
	// Line 576, Address: 0x1d7080, Func Offset: 0x750
	// Line 577, Address: 0x1d7090, Func Offset: 0x760
	// Line 578, Address: 0x1d70ac, Func Offset: 0x77c
	// Line 579, Address: 0x1d70b0, Func Offset: 0x780
	// Line 580, Address: 0x1d70c0, Func Offset: 0x790
	// Line 581, Address: 0x1d70d0, Func Offset: 0x7a0
	// Line 582, Address: 0x1d70e0, Func Offset: 0x7b0
	// Line 583, Address: 0x1d70f4, Func Offset: 0x7c4
	// Line 584, Address: 0x1d7104, Func Offset: 0x7d4
	// Line 586, Address: 0x1d7114, Func Offset: 0x7e4
	// Line 587, Address: 0x1d7118, Func Offset: 0x7e8
	// Line 588, Address: 0x1d713c, Func Offset: 0x80c
	// Line 590, Address: 0x1d7154, Func Offset: 0x824
	// Line 591, Address: 0x1d716c, Func Offset: 0x83c
	// Line 592, Address: 0x1d7194, Func Offset: 0x864
	// Line 593, Address: 0x1d71bc, Func Offset: 0x88c
	// Line 592, Address: 0x1d71c4, Func Offset: 0x894
	// Line 593, Address: 0x1d71cc, Func Offset: 0x89c
	// Line 594, Address: 0x1d71d8, Func Offset: 0x8a8
	// Line 595, Address: 0x1d71f8, Func Offset: 0x8c8
	// Line 596, Address: 0x1d7218, Func Offset: 0x8e8
	// Line 599, Address: 0x1d7230, Func Offset: 0x900
	// Line 600, Address: 0x1d7250, Func Offset: 0x920
	// Line 601, Address: 0x1d7254, Func Offset: 0x924
	// Line 600, Address: 0x1d7258, Func Offset: 0x928
	// Line 601, Address: 0x1d725c, Func Offset: 0x92c
	// Line 602, Address: 0x1d7280, Func Offset: 0x950
	// Line 603, Address: 0x1d728c, Func Offset: 0x95c
	// Line 604, Address: 0x1d72b4, Func Offset: 0x984
	// Line 605, Address: 0x1d72d4, Func Offset: 0x9a4
	// Line 606, Address: 0x1d72d8, Func Offset: 0x9a8
	// Line 607, Address: 0x1d72f0, Func Offset: 0x9c0
	// Line 608, Address: 0x1d72f4, Func Offset: 0x9c4
	// Line 609, Address: 0x1d72f8, Func Offset: 0x9c8
	// Line 610, Address: 0x1d7310, Func Offset: 0x9e0
	// Line 613, Address: 0x1d7324, Func Offset: 0x9f4
	// Line 612, Address: 0x1d7328, Func Offset: 0x9f8
	// Line 613, Address: 0x1d7330, Func Offset: 0xa00
	// Line 615, Address: 0x1d7338, Func Offset: 0xa08
	// Line 616, Address: 0x1d7354, Func Offset: 0xa24
	// Line 617, Address: 0x1d7368, Func Offset: 0xa38
	// Line 618, Address: 0x1d736c, Func Offset: 0xa3c
	// Line 617, Address: 0x1d7374, Func Offset: 0xa44
	// Line 618, Address: 0x1d7378, Func Offset: 0xa48
	// Line 619, Address: 0x1d7394, Func Offset: 0xa64
	// Line 620, Address: 0x1d73bc, Func Offset: 0xa8c
	// Line 622, Address: 0x1d73e4, Func Offset: 0xab4
	// Line 621, Address: 0x1d73e8, Func Offset: 0xab8
	// Line 622, Address: 0x1d73f4, Func Offset: 0xac4
	// Line 623, Address: 0x1d7414, Func Offset: 0xae4
	// Line 624, Address: 0x1d742c, Func Offset: 0xafc
	// Line 625, Address: 0x1d744c, Func Offset: 0xb1c
	// Line 626, Address: 0x1d7458, Func Offset: 0xb28
	// Line 629, Address: 0x1d7480, Func Offset: 0xb50
	// Line 630, Address: 0x1d7490, Func Offset: 0xb60
	// Line 631, Address: 0x1d74a0, Func Offset: 0xb70
	// Line 632, Address: 0x1d74ac, Func Offset: 0xb7c
	// Line 634, Address: 0x1d74bc, Func Offset: 0xb8c
	// Line 635, Address: 0x1d74e4, Func Offset: 0xbb4
	// Line 636, Address: 0x1d74ec, Func Offset: 0xbbc
	// Line 637, Address: 0x1d74f0, Func Offset: 0xbc0
	// Line 638, Address: 0x1d74f8, Func Offset: 0xbc8
	// Line 637, Address: 0x1d7514, Func Offset: 0xbe4
	// Line 638, Address: 0x1d7518, Func Offset: 0xbe8
	// Line 639, Address: 0x1d7520, Func Offset: 0xbf0
	// Line 640, Address: 0x1d752c, Func Offset: 0xbfc
	// Line 641, Address: 0x1d753c, Func Offset: 0xc0c
	// Line 642, Address: 0x1d7544, Func Offset: 0xc14
	// Line 643, Address: 0x1d7548, Func Offset: 0xc18
	// Line 644, Address: 0x1d7554, Func Offset: 0xc24
	// Line 645, Address: 0x1d7568, Func Offset: 0xc38
	// Line 646, Address: 0x1d7578, Func Offset: 0xc48
	// Line 647, Address: 0x1d7590, Func Offset: 0xc60
	// Line 648, Address: 0x1d75a4, Func Offset: 0xc74
	// Line 649, Address: 0x1d75c0, Func Offset: 0xc90
	// Line 650, Address: 0x1d75c4, Func Offset: 0xc94
	// Line 649, Address: 0x1d75cc, Func Offset: 0xc9c
	// Line 650, Address: 0x1d75d0, Func Offset: 0xca0
	// Line 651, Address: 0x1d75ec, Func Offset: 0xcbc
	// Line 652, Address: 0x1d760c, Func Offset: 0xcdc
	// Line 656, Address: 0x1d763c, Func Offset: 0xd0c
	// Line 657, Address: 0x1d764c, Func Offset: 0xd1c
	// Func End, Address: 0x1d7688, Func Offset: 0xd58
}

// 
// Start address: 0x1d7690
void EnemyFeetSetTarget(EnemyFeet* pef, float target_pos[4])
{
	int i;
	// Line 679, Address: 0x1d7690, Func Offset: 0
	// Line 681, Address: 0x1d769c, Func Offset: 0xc
	// Line 682, Address: 0x1d76ac, Func Offset: 0x1c
	// Line 683, Address: 0x1d76bc, Func Offset: 0x2c
	// Func End, Address: 0x1d76c8, Func Offset: 0x38
}

// 
// Start address: 0x1d76d0
void EnemyFeetGetPosAndRot(EnemyFeet* pef, float heel_pos[4], float foot_rot[4])
{
	// Line 692, Address: 0x1d76d0, Func Offset: 0
	// Line 693, Address: 0x1d76e8, Func Offset: 0x18
	// Line 694, Address: 0x1d76f0, Func Offset: 0x20
	// Line 695, Address: 0x1d76f8, Func Offset: 0x28
	// Line 696, Address: 0x1d7704, Func Offset: 0x34
	// Line 697, Address: 0x1d7710, Func Offset: 0x40
	// Func End, Address: 0x1d7724, Func Offset: 0x54
}

