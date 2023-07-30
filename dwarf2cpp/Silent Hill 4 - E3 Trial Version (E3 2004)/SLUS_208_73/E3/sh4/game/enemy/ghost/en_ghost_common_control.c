typedef struct sfObj;
typedef struct EnemyManageDataOne;
typedef struct EnemyKindTable;
typedef struct EnemyGhostCommonAnotherWork;
typedef struct EnemyGhostWallThroughParameter;
typedef union _anon0;
typedef struct EnemyGhostInWallParameter;
typedef struct EnemyGhostAppearFromWallParameter;

typedef void(*type_0)(sfObj*);
typedef void(*type_1)(sfObj*);
typedef void(*type_2)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef void(*type_4)(sfObj*);
typedef void(*type_5)(sfObj*);
typedef void(*type_7)(sfObj*);
typedef void(*type_10)(sfObj*);

typedef _anon0 type_6[256];
typedef float type_8[4];
typedef _anon0 type_9[4];
typedef short type_11[2];
typedef float type_12[4];
typedef unsigned short type_13[2];
typedef char type_14[4];
typedef unsigned char type_15[4];
typedef float type_16[1];
typedef int type_17[1];

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

struct EnemyManageDataOne
{
	float pos[4];
	float rot[4];
	unsigned int id;
	short kind;
	short condition;
	float hp;
	float leave_time;
	short serial;
	char step;
	char type;
	char mode;
	char anime;
	char stage;
	char scene;
	unsigned int lru_point;
	_anon0 work[4];
	unsigned int padding;
};

struct EnemyKindTable
{
	void(*func)(sfObj*);
	void(*cnst)(sfObj*);
	void(*dest)(sfObj*);
	void(*rend)(sfObj*);
};

struct EnemyGhostCommonAnotherWork
{
	float hp;
	float down_timer;
	int type;
	int falling_direction;
};

struct EnemyGhostWallThroughParameter
{
	int enter_anime;
	float move_speed;
	float rot_limit;
	float stain_appear_range;
	float stain_disappear_range;
	float through_range;
	int enter_sound;
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

struct EnemyGhostInWallParameter
{
	float warp_rate;
	float awake_rate;
	float trap_rate;
	float move_speed;
	float target_range;
	float stain_appear_range;
	float appear_range;
};

struct EnemyGhostAppearFromWallParameter
{
	int appear_anime;
	int anime_type;
	int neutral_anime;
	int neutral_anime_valiation;
	float move_speed;
	float move_range;
	float appear_range;
	float stain_appear_range;
	float stain_disappear_range;
	float awake_rate;
	float normal_height;
	int float_start_frame;
	int appear_sound;
};

EnemyGhostWallThroughParameter* wt_param;
EnemyGhostInWallParameter* iw_param;
EnemyGhostAppearFromWallParameter* aw_param;
void(*EnemyGhostCommonAnotherDestruct)(sfObj*);
void(*EnemyGhostCommonAnotherHandle)(sfObj*);

int EnemyGhostCommonThroughWall(sfObj* obj, EnemyGhostWallThroughParameter* pwp);
int through_wall_init(sfObj* obj);
int through_wall_to_wall(sfObj* obj);
int through_wall_approach_wall(sfObj* obj);
void through_wall_enter1(sfObj* obj);
int through_wall_enter2(sfObj* obj);
void through_wall_through1(sfObj* obj);
int through_wall_through2(sfObj* obj);
int move_and_rot1(sfObj* obj, float* target);
void move_and_rot2(sfObj* obj, float* move, float* direction);
void move_and_rot3(sfObj* obj);
int EnemyGhostCommonInWall(sfObj* obj, EnemyGhostInWallParameter* pip);
void in_wall_init(sfObj* obj);
void in_wall_premove(sfObj* obj);
int choice_target(sfObj* obj);
int check_trap(sfObj* obj);
int in_wall_to_target(sfObj* obj);
int in_wall_appear(sfObj* obj);
int EnemyGhostCommonAppearFromWall(sfObj* obj, EnemyGhostAppearFromWallParameter* paw);
void appear_init(sfObj* obj);
void appear_ready(sfObj* obj);
void appear_ready2(sfObj* obj);
void appear_appear(sfObj* obj);
void appear_float(sfObj* obj);
void appear_appear2(sfObj* obj);
int appear_after(sfObj* obj);
void appear_move(sfObj* obj);
int EnemyGhostCommonCheckAppearFinish(sfObj* obj);
void EnemyGhostCommonAnotherConstruct(EnemyManageDataOne* pm);
void EnemyGhostCommonAnotherDestruct(sfObj* obj);
void EnemyGhostCommonAnotherDataPreserve(sfObj* obj);
void EnemyGhostCommonAnotherHandle(sfObj* obj);
void EnemyGhostCommonAnotherControl(sfObj* obj);
void EnemyGhostCommonAnotherShiftToNormal(sfObj* obj);
void EnemyGhostCommonAnotherConstructDead(EnemyManageDataOne* pm);
void EnemyGhostCommonAnotherRecovery(EnemyManageDataOne* pm);
void EnemyGhostCommonAnotherExecuteWaiting(void* data);

// 
// Start address: 0x2914f0
int EnemyGhostCommonThroughWall(sfObj* obj, EnemyGhostWallThroughParameter* pwp)
{
	int r;
	// Line 114, Address: 0x2914f0, Func Offset: 0
	// Line 116, Address: 0x2914f4, Func Offset: 0x4
	// Line 114, Address: 0x2914f8, Func Offset: 0x8
	// Line 116, Address: 0x291508, Func Offset: 0x18
	// Line 117, Address: 0x29150c, Func Offset: 0x1c
	// Line 119, Address: 0x291538, Func Offset: 0x48
	// Line 120, Address: 0x291544, Func Offset: 0x54
	// Line 125, Address: 0x291550, Func Offset: 0x60
	// Line 126, Address: 0x29155c, Func Offset: 0x6c
	// Line 127, Address: 0x291568, Func Offset: 0x78
	// Line 131, Address: 0x291570, Func Offset: 0x80
	// Line 132, Address: 0x29157c, Func Offset: 0x8c
	// Line 133, Address: 0x291588, Func Offset: 0x98
	// Line 136, Address: 0x291590, Func Offset: 0xa0
	// Line 137, Address: 0x291598, Func Offset: 0xa8
	// Line 140, Address: 0x2915a0, Func Offset: 0xb0
	// Line 141, Address: 0x2915a8, Func Offset: 0xb8
	// Line 144, Address: 0x2915b0, Func Offset: 0xc0
	// Line 145, Address: 0x2915b8, Func Offset: 0xc8
	// Line 148, Address: 0x2915c0, Func Offset: 0xd0
	// Line 150, Address: 0x2915cc, Func Offset: 0xdc
	// Line 151, Address: 0x2915d0, Func Offset: 0xe0
	// Line 152, Address: 0x2915d4, Func Offset: 0xe4
	// Func End, Address: 0x2915e8, Func Offset: 0xf8
}

// 
// Start address: 0x2915f0
int through_wall_init(sfObj* obj)
{
	float* pos;
	float epos[4];
	float nom[4];
	// Line 156, Address: 0x2915f0, Func Offset: 0
	// Line 159, Address: 0x2915fc, Func Offset: 0xc
	// Line 160, Address: 0x291604, Func Offset: 0x14
	// Line 161, Address: 0x29163c, Func Offset: 0x4c
	// Line 162, Address: 0x291640, Func Offset: 0x50
	// Line 164, Address: 0x291648, Func Offset: 0x58
	// Line 165, Address: 0x291650, Func Offset: 0x60
	// Line 167, Address: 0x291658, Func Offset: 0x68
	// Line 170, Address: 0x291660, Func Offset: 0x70
	// Line 171, Address: 0x291670, Func Offset: 0x80
	// Line 172, Address: 0x29167c, Func Offset: 0x8c
	// Line 173, Address: 0x29168c, Func Offset: 0x9c
	// Line 172, Address: 0x291690, Func Offset: 0xa0
	// Line 173, Address: 0x291694, Func Offset: 0xa4
	// Line 174, Address: 0x2916ac, Func Offset: 0xbc
	// Line 175, Address: 0x2916b4, Func Offset: 0xc4
	// Line 176, Address: 0x2916dc, Func Offset: 0xec
	// Line 177, Address: 0x2916e4, Func Offset: 0xf4
	// Line 178, Address: 0x2916f0, Func Offset: 0x100
	// Line 179, Address: 0x2916fc, Func Offset: 0x10c
	// Line 180, Address: 0x291700, Func Offset: 0x110
	// Line 181, Address: 0x29170c, Func Offset: 0x11c
	// Line 182, Address: 0x291710, Func Offset: 0x120
	// Func End, Address: 0x291720, Func Offset: 0x130
}

// 
// Start address: 0x291720
int through_wall_to_wall(sfObj* obj)
{
	float* pos;
	float epos[4];
	float vec[4];
	// Line 186, Address: 0x291720, Func Offset: 0
	// Line 189, Address: 0x291734, Func Offset: 0x14
	// Line 190, Address: 0x291740, Func Offset: 0x20
	// Line 191, Address: 0x29174c, Func Offset: 0x2c
	// Line 192, Address: 0x291758, Func Offset: 0x38
	// Line 193, Address: 0x291780, Func Offset: 0x60
	// Line 194, Address: 0x2917a0, Func Offset: 0x80
	// Line 196, Address: 0x2917c8, Func Offset: 0xa8
	// Line 197, Address: 0x2917ec, Func Offset: 0xcc
	// Line 198, Address: 0x2917f0, Func Offset: 0xd0
	// Line 199, Address: 0x2917fc, Func Offset: 0xdc
	// Line 200, Address: 0x291808, Func Offset: 0xe8
	// Line 202, Address: 0x291810, Func Offset: 0xf0
	// Line 203, Address: 0x291818, Func Offset: 0xf8
	// Line 205, Address: 0x291824, Func Offset: 0x104
	// Line 206, Address: 0x291828, Func Offset: 0x108
	// Line 207, Address: 0x291834, Func Offset: 0x114
	// Line 208, Address: 0x291840, Func Offset: 0x120
	// Line 209, Address: 0x29184c, Func Offset: 0x12c
	// Line 210, Address: 0x291850, Func Offset: 0x130
	// Line 211, Address: 0x29185c, Func Offset: 0x13c
	// Func End, Address: 0x291874, Func Offset: 0x154
}

// 
// Start address: 0x291880
int through_wall_approach_wall(sfObj* obj)
{
	float* pos;
	float epos[4];
	float nom[4];
	// Line 215, Address: 0x291880, Func Offset: 0
	// Line 218, Address: 0x291894, Func Offset: 0x14
	// Line 219, Address: 0x2918a0, Func Offset: 0x20
	// Line 220, Address: 0x2918ac, Func Offset: 0x2c
	// Line 222, Address: 0x2918d4, Func Offset: 0x54
	// Line 223, Address: 0x2918dc, Func Offset: 0x5c
	// Line 224, Address: 0x2918e8, Func Offset: 0x68
	// Line 225, Address: 0x291908, Func Offset: 0x88
	// Line 227, Address: 0x291910, Func Offset: 0x90
	// Line 228, Address: 0x291924, Func Offset: 0xa4
	// Line 229, Address: 0x291938, Func Offset: 0xb8
	// Line 230, Address: 0x29195c, Func Offset: 0xdc
	// Line 231, Address: 0x291960, Func Offset: 0xe0
	// Line 232, Address: 0x29196c, Func Offset: 0xec
	// Line 233, Address: 0x291974, Func Offset: 0xf4
	// Line 234, Address: 0x291978, Func Offset: 0xf8
	// Line 236, Address: 0x291984, Func Offset: 0x104
	// Line 237, Address: 0x291988, Func Offset: 0x108
	// Line 239, Address: 0x291990, Func Offset: 0x110
	// Line 240, Address: 0x29199c, Func Offset: 0x11c
	// Func End, Address: 0x2919b4, Func Offset: 0x134
}

// 
// Start address: 0x2919c0
void through_wall_enter1(sfObj* obj)
{
	float* pos;
	float epos[4];
	float vec[4];
	float vec2[4];
	// Line 244, Address: 0x2919c0, Func Offset: 0
	// Line 247, Address: 0x2919d0, Func Offset: 0x10
	// Line 248, Address: 0x2919dc, Func Offset: 0x1c
	// Line 249, Address: 0x2919e8, Func Offset: 0x28
	// Line 250, Address: 0x291a04, Func Offset: 0x44
	// Line 251, Address: 0x291a30, Func Offset: 0x70
	// Line 252, Address: 0x291a3c, Func Offset: 0x7c
	// Line 253, Address: 0x291a54, Func Offset: 0x94
	// Line 254, Address: 0x291a64, Func Offset: 0xa4
	// Line 256, Address: 0x291aa8, Func Offset: 0xe8
	// Line 257, Address: 0x291ab4, Func Offset: 0xf4
	// Line 258, Address: 0x291ac0, Func Offset: 0x100
	// Line 259, Address: 0x291ac8, Func Offset: 0x108
	// Line 261, Address: 0x291ad0, Func Offset: 0x110
	// Func End, Address: 0x291ae4, Func Offset: 0x124
}

// 
// Start address: 0x291af0
int through_wall_enter2(sfObj* obj)
{
	float* pos;
	float epos[4];
	float vec[4];
	// Line 265, Address: 0x291af0, Func Offset: 0
	// Line 268, Address: 0x291b04, Func Offset: 0x14
	// Line 269, Address: 0x291b10, Func Offset: 0x20
	// Line 270, Address: 0x291b1c, Func Offset: 0x2c
	// Line 271, Address: 0x291b28, Func Offset: 0x38
	// Line 272, Address: 0x291b3c, Func Offset: 0x4c
	// Line 273, Address: 0x291b48, Func Offset: 0x58
	// Line 276, Address: 0x291b90, Func Offset: 0xa0
	// Line 277, Address: 0x291b98, Func Offset: 0xa8
	// Line 278, Address: 0x291ba0, Func Offset: 0xb0
	// Line 280, Address: 0x291ba8, Func Offset: 0xb8
	// Line 281, Address: 0x291bb0, Func Offset: 0xc0
	// Func End, Address: 0x291bc8, Func Offset: 0xd8
}

// 
// Start address: 0x291bd0
void through_wall_through1(sfObj* obj)
{
	float* pos;
	float epos[4];
	float vec[4];
	float nom[4];
	// Line 285, Address: 0x291bd0, Func Offset: 0
	// Line 288, Address: 0x291be0, Func Offset: 0x10
	// Line 289, Address: 0x291be8, Func Offset: 0x18
	// Line 290, Address: 0x291bf4, Func Offset: 0x24
	// Line 291, Address: 0x291c00, Func Offset: 0x30
	// Line 292, Address: 0x291c1c, Func Offset: 0x4c
	// Line 293, Address: 0x291c28, Func Offset: 0x58
	// Line 295, Address: 0x291c80, Func Offset: 0xb0
	// Line 296, Address: 0x291c8c, Func Offset: 0xbc
	// Line 297, Address: 0x291c98, Func Offset: 0xc8
	// Line 298, Address: 0x291ca0, Func Offset: 0xd0
	// Line 300, Address: 0x291ca8, Func Offset: 0xd8
	// Func End, Address: 0x291cbc, Func Offset: 0xec
}

// 
// Start address: 0x291cc0
int through_wall_through2(sfObj* obj)
{
	// Line 304, Address: 0x291cc0, Func Offset: 0
	// Line 305, Address: 0x291ccc, Func Offset: 0xc
	// Line 306, Address: 0x291cd4, Func Offset: 0x14
	// Line 308, Address: 0x291d08, Func Offset: 0x48
	// Line 309, Address: 0x291d10, Func Offset: 0x50
	// Line 310, Address: 0x291d18, Func Offset: 0x58
	// Line 312, Address: 0x291d20, Func Offset: 0x60
	// Line 313, Address: 0x291d28, Func Offset: 0x68
	// Func End, Address: 0x291d38, Func Offset: 0x78
}

// 
// Start address: 0x291d40
int move_and_rot1(sfObj* obj, float* target)
{
	float* pos;
	float tpos[4];
	float vec[4];
	float rot[4];
	float dt;
	int r;
	// Line 317, Address: 0x291d40, Func Offset: 0
	// Line 323, Address: 0x291d5c, Func Offset: 0x1c
	// Line 324, Address: 0x291d68, Func Offset: 0x28
	// Line 325, Address: 0x291d74, Func Offset: 0x34
	// Line 326, Address: 0x291d7c, Func Offset: 0x3c
	// Line 329, Address: 0x291df0, Func Offset: 0xb0
	// Line 330, Address: 0x291df4, Func Offset: 0xb4
	// Line 331, Address: 0x291df8, Func Offset: 0xb8
	// Line 333, Address: 0x291e24, Func Offset: 0xe4
	// Line 334, Address: 0x291e30, Func Offset: 0xf0
	// Line 336, Address: 0x291e50, Func Offset: 0x110
	// Line 337, Address: 0x291e5c, Func Offset: 0x11c
	// Line 338, Address: 0x291e68, Func Offset: 0x128
	// Line 339, Address: 0x291e94, Func Offset: 0x154
	// Line 340, Address: 0x291ea0, Func Offset: 0x160
	// Line 341, Address: 0x291ea4, Func Offset: 0x164
	// Func End, Address: 0x291ec0, Func Offset: 0x180
}

// 
// Start address: 0x291ec0
void move_and_rot2(sfObj* obj, float* move, float* direction)
{
	float vec[4];
	float rot[4];
	float trot[4];
	float dt;
	// Line 346, Address: 0x291ec0, Func Offset: 0
	// Line 350, Address: 0x291ee0, Func Offset: 0x20
	// Line 351, Address: 0x291eec, Func Offset: 0x2c
	// Line 352, Address: 0x291ef8, Func Offset: 0x38
	// Line 353, Address: 0x291f04, Func Offset: 0x44
	// Line 354, Address: 0x291f24, Func Offset: 0x64
	// Line 355, Address: 0x291f30, Func Offset: 0x70
	// Line 356, Address: 0x291f5c, Func Offset: 0x9c
	// Line 357, Address: 0x291f68, Func Offset: 0xa8
	// Func End, Address: 0x291f84, Func Offset: 0xc4
}

// 
// Start address: 0x291f90
void move_and_rot3(sfObj* obj)
{
	float vec[4];
	float rot[4];
	float trot[4];
	float dt;
	// Line 361, Address: 0x291f90, Func Offset: 0
	// Line 365, Address: 0x291fa0, Func Offset: 0x10
	// Line 366, Address: 0x291fac, Func Offset: 0x1c
	// Line 367, Address: 0x291fb8, Func Offset: 0x28
	// Line 368, Address: 0x291fc4, Func Offset: 0x34
	// Line 369, Address: 0x291fd0, Func Offset: 0x40
	// Line 370, Address: 0x291ff0, Func Offset: 0x60
	// Line 371, Address: 0x291ffc, Func Offset: 0x6c
	// Line 373, Address: 0x292038, Func Offset: 0xa8
	// Line 374, Address: 0x292044, Func Offset: 0xb4
	// Func End, Address: 0x292058, Func Offset: 0xc8
}

// 
// Start address: 0x292060
int EnemyGhostCommonInWall(sfObj* obj, EnemyGhostInWallParameter* pip)
{
	int r;
	// Line 388, Address: 0x292060, Func Offset: 0
	// Line 390, Address: 0x292064, Func Offset: 0x4
	// Line 388, Address: 0x292068, Func Offset: 0x8
	// Line 390, Address: 0x292078, Func Offset: 0x18
	// Line 391, Address: 0x29207c, Func Offset: 0x1c
	// Line 394, Address: 0x2920a8, Func Offset: 0x48
	// Line 398, Address: 0x2920b0, Func Offset: 0x50
	// Line 399, Address: 0x2920b8, Func Offset: 0x58
	// Line 404, Address: 0x2920c0, Func Offset: 0x60
	// Line 405, Address: 0x2920c8, Func Offset: 0x68
	// Line 409, Address: 0x2920d0, Func Offset: 0x70
	// Line 411, Address: 0x2920dc, Func Offset: 0x7c
	// Line 412, Address: 0x2920e0, Func Offset: 0x80
	// Line 413, Address: 0x2920e4, Func Offset: 0x84
	// Func End, Address: 0x2920f8, Func Offset: 0x98
}

// 
// Start address: 0x292100
void in_wall_init(sfObj* obj)
{
	// Line 417, Address: 0x292100, Func Offset: 0
	// Line 418, Address: 0x292104, Func Offset: 0x4
	// Line 417, Address: 0x292108, Func Offset: 0x8
	// Line 418, Address: 0x292110, Func Offset: 0x10
	// Line 419, Address: 0x292118, Func Offset: 0x18
	// Line 420, Address: 0x292128, Func Offset: 0x28
	// Line 421, Address: 0x292134, Func Offset: 0x34
	// Line 422, Address: 0x292140, Func Offset: 0x40
	// Line 423, Address: 0x29214c, Func Offset: 0x4c
	// Line 424, Address: 0x292158, Func Offset: 0x58
	// Line 425, Address: 0x292164, Func Offset: 0x64
	// Func End, Address: 0x292174, Func Offset: 0x74
}

// 
// Start address: 0x292180
void in_wall_premove(sfObj* obj)
{
	float* pos;
	float* ppos;
	float vec[4];
	float d;
	float dt;
	// Line 429, Address: 0x292180, Func Offset: 0
	// Line 433, Address: 0x292198, Func Offset: 0x18
	// Line 434, Address: 0x2921a4, Func Offset: 0x24
	// Line 435, Address: 0x2921ac, Func Offset: 0x2c
	// Line 436, Address: 0x2921b4, Func Offset: 0x34
	// Line 437, Address: 0x2921cc, Func Offset: 0x4c
	// Line 438, Address: 0x2921d8, Func Offset: 0x58
	// Line 439, Address: 0x2921e8, Func Offset: 0x68
	// Line 438, Address: 0x2921ec, Func Offset: 0x6c
	// Line 439, Address: 0x2921f0, Func Offset: 0x70
	// Line 440, Address: 0x292234, Func Offset: 0xb4
	// Line 441, Address: 0x292240, Func Offset: 0xc0
	// Line 442, Address: 0x292270, Func Offset: 0xf0
	// Line 443, Address: 0x2922a4, Func Offset: 0x124
	// Line 444, Address: 0x2922a8, Func Offset: 0x128
	// Line 445, Address: 0x2922b4, Func Offset: 0x134
	// Line 446, Address: 0x2922c0, Func Offset: 0x140
	// Line 448, Address: 0x2922c8, Func Offset: 0x148
	// Line 449, Address: 0x2922d4, Func Offset: 0x154
	// Line 450, Address: 0x2922e0, Func Offset: 0x160
	// Line 452, Address: 0x2922e8, Func Offset: 0x168
	// Line 453, Address: 0x2922f4, Func Offset: 0x174
	// Line 454, Address: 0x292300, Func Offset: 0x180
	// Line 456, Address: 0x292308, Func Offset: 0x188
	// Line 458, Address: 0x292314, Func Offset: 0x194
	// Line 459, Address: 0x292318, Func Offset: 0x198
	// Func End, Address: 0x292334, Func Offset: 0x1b4
}

// 
// Start address: 0x292340
int choice_target(sfObj* obj)
{
	float* ppos;
	float* target;
	float tpos[4];
	float vec[4];
	float nom[4];
	float epos[4];
	float rot[4];
	int r;
	// Line 463, Address: 0x292340, Func Offset: 0
	// Line 469, Address: 0x292358, Func Offset: 0x18
	// Line 470, Address: 0x292368, Func Offset: 0x28
	// Line 471, Address: 0x292374, Func Offset: 0x34
	// Line 472, Address: 0x292388, Func Offset: 0x48
	// Line 473, Address: 0x2923b4, Func Offset: 0x74
	// Line 474, Address: 0x2923d0, Func Offset: 0x90
	// Line 475, Address: 0x2923dc, Func Offset: 0x9c
	// Line 477, Address: 0x2923fc, Func Offset: 0xbc
	// Line 478, Address: 0x29241c, Func Offset: 0xdc
	// Line 479, Address: 0x292420, Func Offset: 0xe0
	// Line 480, Address: 0x292430, Func Offset: 0xf0
	// Line 482, Address: 0x292450, Func Offset: 0x110
	// Line 483, Address: 0x29246c, Func Offset: 0x12c
	// Line 485, Address: 0x2924a4, Func Offset: 0x164
	// Line 488, Address: 0x2924ac, Func Offset: 0x16c
	// Line 489, Address: 0x2924b0, Func Offset: 0x170
	// Line 490, Address: 0x2924bc, Func Offset: 0x17c
	// Line 491, Address: 0x2924ec, Func Offset: 0x1ac
	// Line 492, Address: 0x292508, Func Offset: 0x1c8
	// Line 493, Address: 0x29250c, Func Offset: 0x1cc
	// Line 494, Address: 0x29251c, Func Offset: 0x1dc
	// Line 497, Address: 0x292528, Func Offset: 0x1e8
	// Line 499, Address: 0x292530, Func Offset: 0x1f0
	// Line 500, Address: 0x29253c, Func Offset: 0x1fc
	// Line 501, Address: 0x292548, Func Offset: 0x208
	// Line 503, Address: 0x29254c, Func Offset: 0x20c
	// Line 504, Address: 0x292550, Func Offset: 0x210
	// Line 505, Address: 0x292554, Func Offset: 0x214
	// Func End, Address: 0x292570, Func Offset: 0x230
}

// 
// Start address: 0x292570
int check_trap(sfObj* obj)
{
	float* pos;
	float* ppos;
	float tpos[4];
	float vec[4];
	// Line 509, Address: 0x292570, Func Offset: 0
	// Line 512, Address: 0x292580, Func Offset: 0x10
	// Line 513, Address: 0x29258c, Func Offset: 0x1c
	// Line 514, Address: 0x292594, Func Offset: 0x24
	// Line 516, Address: 0x2925c8, Func Offset: 0x58
	// Line 517, Address: 0x2925d0, Func Offset: 0x60
	// Line 518, Address: 0x2925dc, Func Offset: 0x6c
	// Line 519, Address: 0x292608, Func Offset: 0x98
	// Line 520, Address: 0x292628, Func Offset: 0xb8
	// Line 521, Address: 0x292644, Func Offset: 0xd4
	// Line 522, Address: 0x292650, Func Offset: 0xe0
	// Line 524, Address: 0x292658, Func Offset: 0xe8
	// Line 525, Address: 0x292660, Func Offset: 0xf0
	// Func End, Address: 0x292674, Func Offset: 0x104
}

// 
// Start address: 0x292680
int in_wall_to_target(sfObj* obj)
{
	float* pos;
	float* ppos;
	float* target;
	float vec[4];
	float rot[4];
	float d;
	float d2;
	float dt;
	// Line 529, Address: 0x292680, Func Offset: 0
	// Line 535, Address: 0x29269c, Func Offset: 0x1c
	// Line 536, Address: 0x2926a8, Func Offset: 0x28
	// Line 537, Address: 0x2926b4, Func Offset: 0x34
	// Line 538, Address: 0x2926bc, Func Offset: 0x3c
	// Line 539, Address: 0x2926c8, Func Offset: 0x48
	// Line 540, Address: 0x2926d8, Func Offset: 0x58
	// Line 542, Address: 0x2926e0, Func Offset: 0x60
	// Line 543, Address: 0x2926f8, Func Offset: 0x78
	// Line 544, Address: 0x29271c, Func Offset: 0x9c
	// Line 545, Address: 0x29272c, Func Offset: 0xac
	// Line 546, Address: 0x292738, Func Offset: 0xb8
	// Line 548, Address: 0x292760, Func Offset: 0xe0
	// Line 553, Address: 0x29276c, Func Offset: 0xec
	// Line 554, Address: 0x292778, Func Offset: 0xf8
	// Line 555, Address: 0x292794, Func Offset: 0x114
	// Line 556, Address: 0x2927c4, Func Offset: 0x144
	// Line 557, Address: 0x2927c8, Func Offset: 0x148
	// Line 559, Address: 0x2927d0, Func Offset: 0x150
	// Line 560, Address: 0x2927e8, Func Offset: 0x168
	// Line 561, Address: 0x2927f4, Func Offset: 0x174
	// Line 562, Address: 0x292800, Func Offset: 0x180
	// Line 564, Address: 0x292808, Func Offset: 0x188
	// Line 565, Address: 0x292820, Func Offset: 0x1a0
	// Line 566, Address: 0x292824, Func Offset: 0x1a4
	// Line 567, Address: 0x292834, Func Offset: 0x1b4
	// Line 568, Address: 0x292840, Func Offset: 0x1c0
	// Line 569, Address: 0x292858, Func Offset: 0x1d8
	// Line 570, Address: 0x292864, Func Offset: 0x1e4
	// Line 574, Address: 0x292870, Func Offset: 0x1f0
	// Line 575, Address: 0x292878, Func Offset: 0x1f8
	// Func End, Address: 0x292898, Func Offset: 0x218
}

// 
// Start address: 0x2928a0
int in_wall_appear(sfObj* obj)
{
	float dt;
	float t;
	int r;
	// Line 603, Address: 0x2928a0, Func Offset: 0
	// Line 606, Address: 0x2928b0, Func Offset: 0x10
	// Line 607, Address: 0x2928bc, Func Offset: 0x1c
	// Line 608, Address: 0x2928dc, Func Offset: 0x3c
	// Line 610, Address: 0x2928e8, Func Offset: 0x48
	// Line 611, Address: 0x2928fc, Func Offset: 0x5c
	// Line 613, Address: 0x292920, Func Offset: 0x80
	// Line 615, Address: 0x292928, Func Offset: 0x88
	// Line 616, Address: 0x292930, Func Offset: 0x90
	// Line 619, Address: 0x292938, Func Offset: 0x98
	// Line 620, Address: 0x292940, Func Offset: 0xa0
	// Func End, Address: 0x292954, Func Offset: 0xb4
}

// 
// Start address: 0x292960
int EnemyGhostCommonAppearFromWall(sfObj* obj, EnemyGhostAppearFromWallParameter* paw)
{
	int r;
	// Line 635, Address: 0x292960, Func Offset: 0
	// Line 638, Address: 0x292964, Func Offset: 0x4
	// Line 635, Address: 0x292968, Func Offset: 0x8
	// Line 638, Address: 0x292978, Func Offset: 0x18
	// Line 639, Address: 0x29297c, Func Offset: 0x1c
	// Line 642, Address: 0x2929a8, Func Offset: 0x48
	// Line 646, Address: 0x2929b0, Func Offset: 0x50
	// Line 647, Address: 0x2929b8, Func Offset: 0x58
	// Line 650, Address: 0x2929c0, Func Offset: 0x60
	// Line 652, Address: 0x2929c8, Func Offset: 0x68
	// Line 655, Address: 0x2929d0, Func Offset: 0x70
	// Line 657, Address: 0x2929d8, Func Offset: 0x78
	// Line 660, Address: 0x2929e0, Func Offset: 0x80
	// Line 662, Address: 0x2929e8, Func Offset: 0x88
	// Line 665, Address: 0x2929f0, Func Offset: 0x90
	// Line 667, Address: 0x2929f8, Func Offset: 0x98
	// Line 670, Address: 0x292a00, Func Offset: 0xa0
	// Line 672, Address: 0x292a0c, Func Offset: 0xac
	// Line 673, Address: 0x292a10, Func Offset: 0xb0
	// Line 674, Address: 0x292a14, Func Offset: 0xb4
	// Func End, Address: 0x292a28, Func Offset: 0xc8
}

// 
// Start address: 0x292a30
void appear_init(sfObj* obj)
{
	float tpos[4];
	float nom[4];
	// Line 678, Address: 0x292a30, Func Offset: 0
	// Line 680, Address: 0x292a3c, Func Offset: 0xc
	// Line 681, Address: 0x292a54, Func Offset: 0x24
	// Line 682, Address: 0x292a5c, Func Offset: 0x2c
	// Line 683, Address: 0x292a60, Func Offset: 0x30
	// Line 684, Address: 0x292a70, Func Offset: 0x40
	// Line 685, Address: 0x292a7c, Func Offset: 0x4c
	// Line 686, Address: 0x292a88, Func Offset: 0x58
	// Line 687, Address: 0x292a94, Func Offset: 0x64
	// Line 688, Address: 0x292aa0, Func Offset: 0x70
	// Line 689, Address: 0x292aac, Func Offset: 0x7c
	// Line 690, Address: 0x292ad8, Func Offset: 0xa8
	// Line 691, Address: 0x292af8, Func Offset: 0xc8
	// Line 692, Address: 0x292b10, Func Offset: 0xe0
	// Line 693, Address: 0x292b1c, Func Offset: 0xec
	// Func End, Address: 0x292b2c, Func Offset: 0xfc
}

// 
// Start address: 0x292b30
void appear_ready(sfObj* obj)
{
	float* pos;
	float* target;
	float epos[4];
	float nom[4];
	float vec[4];
	float rot[4];
	// Line 697, Address: 0x292b30, Func Offset: 0
	// Line 702, Address: 0x292b44, Func Offset: 0x14
	// Line 703, Address: 0x292b50, Func Offset: 0x20
	// Line 704, Address: 0x292b5c, Func Offset: 0x2c
	// Line 705, Address: 0x292b68, Func Offset: 0x38
	// Line 706, Address: 0x292b74, Func Offset: 0x44
	// Line 707, Address: 0x292b90, Func Offset: 0x60
	// Line 708, Address: 0x292bc8, Func Offset: 0x98
	// Line 709, Address: 0x292bd0, Func Offset: 0xa0
	// Line 710, Address: 0x292bd4, Func Offset: 0xa4
	// Line 711, Address: 0x292bd8, Func Offset: 0xa8
	// Line 712, Address: 0x292bfc, Func Offset: 0xcc
	// Line 713, Address: 0x292c04, Func Offset: 0xd4
	// Line 714, Address: 0x292c10, Func Offset: 0xe0
	// Line 715, Address: 0x292c1c, Func Offset: 0xec
	// Line 716, Address: 0x292c28, Func Offset: 0xf8
	// Line 717, Address: 0x292c34, Func Offset: 0x104
	// Line 718, Address: 0x292c38, Func Offset: 0x108
	// Line 719, Address: 0x292c40, Func Offset: 0x110
	// Func End, Address: 0x292c58, Func Offset: 0x128
}

// 
// Start address: 0x292c60
void appear_ready2(sfObj* obj)
{
	float* pos;
	float* target;
	float tpos[4];
	float nom[4];
	// Line 723, Address: 0x292c60, Func Offset: 0
	// Line 727, Address: 0x292c74, Func Offset: 0x14
	// Line 728, Address: 0x292c80, Func Offset: 0x20
	// Line 729, Address: 0x292c88, Func Offset: 0x28
	// Line 731, Address: 0x292cb0, Func Offset: 0x50
	// Line 732, Address: 0x292cb8, Func Offset: 0x58
	// Line 733, Address: 0x292cc4, Func Offset: 0x64
	// Line 734, Address: 0x292cd0, Func Offset: 0x70
	// Line 735, Address: 0x292ce4, Func Offset: 0x84
	// Line 736, Address: 0x292cec, Func Offset: 0x8c
	// Line 737, Address: 0x292d18, Func Offset: 0xb8
	// Line 738, Address: 0x292d38, Func Offset: 0xd8
	// Line 739, Address: 0x292d44, Func Offset: 0xe4
	// Line 740, Address: 0x292d4c, Func Offset: 0xec
	// Line 741, Address: 0x292d58, Func Offset: 0xf8
	// Line 742, Address: 0x292d60, Func Offset: 0x100
	// Line 743, Address: 0x292d6c, Func Offset: 0x10c
	// Line 744, Address: 0x292d70, Func Offset: 0x110
	// Line 746, Address: 0x292d9c, Func Offset: 0x13c
	// Line 747, Address: 0x292db4, Func Offset: 0x154
	// Line 748, Address: 0x292dc0, Func Offset: 0x160
	// Line 749, Address: 0x292dd4, Func Offset: 0x174
	// Line 750, Address: 0x292dd8, Func Offset: 0x178
	// Line 751, Address: 0x292de4, Func Offset: 0x184
	// Line 752, Address: 0x292dec, Func Offset: 0x18c
	// Line 753, Address: 0x292e00, Func Offset: 0x1a0
	// Line 754, Address: 0x292e08, Func Offset: 0x1a8
	// Line 756, Address: 0x292e10, Func Offset: 0x1b0
	// Func End, Address: 0x292e28, Func Offset: 0x1c8
}

// 
// Start address: 0x292e30
void appear_appear(sfObj* obj)
{
	int frame;
	// Line 760, Address: 0x292e30, Func Offset: 0
	// Line 762, Address: 0x292e3c, Func Offset: 0xc
	// Line 763, Address: 0x292e44, Func Offset: 0x14
	// Line 764, Address: 0x292e5c, Func Offset: 0x2c
	// Line 765, Address: 0x292e64, Func Offset: 0x34
	// Line 766, Address: 0x292e70, Func Offset: 0x40
	// Line 767, Address: 0x292e84, Func Offset: 0x54
	// Line 768, Address: 0x292e8c, Func Offset: 0x5c
	// Line 770, Address: 0x292e98, Func Offset: 0x68
	// Line 771, Address: 0x292ea0, Func Offset: 0x70
	// Func End, Address: 0x292eb0, Func Offset: 0x80
}

// 
// Start address: 0x292eb0
void appear_float(sfObj* obj)
{
	// Line 775, Address: 0x292eb0, Func Offset: 0
	// Line 776, Address: 0x292ec0, Func Offset: 0x10
	// Line 777, Address: 0x292ed0, Func Offset: 0x20
	// Line 779, Address: 0x292efc, Func Offset: 0x4c
	// Line 780, Address: 0x292f08, Func Offset: 0x58
	// Line 781, Address: 0x292f10, Func Offset: 0x60
	// Line 782, Address: 0x292f1c, Func Offset: 0x6c
	// Line 783, Address: 0x292f20, Func Offset: 0x70
	// Func End, Address: 0x292f34, Func Offset: 0x84
}

// 
// Start address: 0x292f40
void appear_appear2(sfObj* obj)
{
	float vec[4];
	float dt;
	// Line 787, Address: 0x292f40, Func Offset: 0
	// Line 790, Address: 0x292f50, Func Offset: 0x10
	// Line 791, Address: 0x292f5c, Func Offset: 0x1c
	// Line 792, Address: 0x292f6c, Func Offset: 0x2c
	// Line 793, Address: 0x292f74, Func Offset: 0x34
	// Line 794, Address: 0x292f80, Func Offset: 0x40
	// Line 795, Address: 0x292f8c, Func Offset: 0x4c
	// Line 796, Address: 0x292fa0, Func Offset: 0x60
	// Line 798, Address: 0x292fd0, Func Offset: 0x90
	// Line 799, Address: 0x292fdc, Func Offset: 0x9c
	// Line 800, Address: 0x292fe4, Func Offset: 0xa4
	// Line 802, Address: 0x292ff0, Func Offset: 0xb0
	// Line 803, Address: 0x292ffc, Func Offset: 0xbc
	// Line 804, Address: 0x29302c, Func Offset: 0xec
	// Line 805, Address: 0x293038, Func Offset: 0xf8
	// Func End, Address: 0x29304c, Func Offset: 0x10c
}

// 
// Start address: 0x293050
int appear_after(sfObj* obj)
{
	// Line 809, Address: 0x293050, Func Offset: 0
	// Line 810, Address: 0x29305c, Func Offset: 0xc
	// Line 811, Address: 0x29307c, Func Offset: 0x2c
	// Line 812, Address: 0x293084, Func Offset: 0x34
	// Line 813, Address: 0x293090, Func Offset: 0x40
	// Line 814, Address: 0x293098, Func Offset: 0x48
	// Line 815, Address: 0x2930a0, Func Offset: 0x50
	// Line 817, Address: 0x2930a8, Func Offset: 0x58
	// Line 818, Address: 0x2930b0, Func Offset: 0x60
	// Func End, Address: 0x2930c0, Func Offset: 0x70
}

// 
// Start address: 0x2930c0
void appear_move(sfObj* obj)
{
	float* pos;
	float vec[4];
	float dt;
	// Line 822, Address: 0x2930c0, Func Offset: 0
	// Line 826, Address: 0x2930d4, Func Offset: 0x14
	// Line 827, Address: 0x2930dc, Func Offset: 0x1c
	// Line 828, Address: 0x2930e8, Func Offset: 0x28
	// Line 829, Address: 0x293108, Func Offset: 0x48
	// Line 830, Address: 0x293120, Func Offset: 0x60
	// Line 831, Address: 0x29312c, Func Offset: 0x6c
	// Func End, Address: 0x293144, Func Offset: 0x84
}

// 
// Start address: 0x293150
int EnemyGhostCommonCheckAppearFinish(sfObj* obj)
{
	// Line 838, Address: 0x293150, Func Offset: 0
	// Line 839, Address: 0x293158, Func Offset: 0x8
	// Line 840, Address: 0x293160, Func Offset: 0x10
	// Line 839, Address: 0x293164, Func Offset: 0x14
	// Line 840, Address: 0x29316c, Func Offset: 0x1c
	// Func End, Address: 0x293174, Func Offset: 0x24
}

// 
// Start address: 0x293180
void EnemyGhostCommonAnotherConstruct(EnemyManageDataOne* pm)
{
	sfObj* obj;
	EnemyGhostCommonAnotherWork* ew;
	float pos[4];
	int type;
	// Line 850, Address: 0x293180, Func Offset: 0
	// Line 855, Address: 0x29319c, Func Offset: 0x1c
	// Line 856, Address: 0x2931a8, Func Offset: 0x28
	// Line 857, Address: 0x2931ac, Func Offset: 0x2c
	// Line 863, Address: 0x2931e8, Func Offset: 0x68
	// Line 866, Address: 0x2931f0, Func Offset: 0x70
	// Line 867, Address: 0x2931fc, Func Offset: 0x7c
	// Line 868, Address: 0x29320c, Func Offset: 0x8c
	// Line 870, Address: 0x29321c, Func Offset: 0x9c
	// Line 871, Address: 0x29322c, Func Offset: 0xac
	// Line 873, Address: 0x29324c, Func Offset: 0xcc
	// Line 874, Address: 0x293254, Func Offset: 0xd4
	// Line 875, Address: 0x29325c, Func Offset: 0xdc
	// Line 876, Address: 0x293260, Func Offset: 0xe0
	// Line 877, Address: 0x293268, Func Offset: 0xe8
	// Line 878, Address: 0x293274, Func Offset: 0xf4
	// Line 879, Address: 0x29327c, Func Offset: 0xfc
	// Line 880, Address: 0x293288, Func Offset: 0x108
	// Line 881, Address: 0x293290, Func Offset: 0x110
	// Func End, Address: 0x2932ac, Func Offset: 0x12c
}

// 
// Start address: 0x2932b0
void EnemyGhostCommonAnotherDestruct(sfObj* obj)
{
	// Line 885, Address: 0x2932b0, Func Offset: 0
	// Line 886, Address: 0x2932bc, Func Offset: 0xc
	// Line 887, Address: 0x2932c4, Func Offset: 0x14
	// Line 888, Address: 0x2932cc, Func Offset: 0x1c
	// Line 889, Address: 0x2932d4, Func Offset: 0x24
	// Line 890, Address: 0x2932dc, Func Offset: 0x2c
	// Func End, Address: 0x2932ec, Func Offset: 0x3c
}

// 
// Start address: 0x2932f0
void EnemyGhostCommonAnotherDataPreserve(sfObj* obj)
{
	EnemyGhostCommonAnotherWork* ew;
	EnemyManageDataOne* pm;
	_anon0 td;
	// Line 894, Address: 0x2932f0, Func Offset: 0
	// Line 898, Address: 0x293304, Func Offset: 0x14
	// Line 899, Address: 0x29331c, Func Offset: 0x2c
	// Line 900, Address: 0x293324, Func Offset: 0x34
	// Line 901, Address: 0x293330, Func Offset: 0x40
	// Line 902, Address: 0x29333c, Func Offset: 0x4c
	// Line 903, Address: 0x293340, Func Offset: 0x50
	// Line 905, Address: 0x293344, Func Offset: 0x54
	// Line 907, Address: 0x293348, Func Offset: 0x58
	// Line 908, Address: 0x29334c, Func Offset: 0x5c
	// Line 902, Address: 0x293350, Func Offset: 0x60
	// Line 903, Address: 0x293354, Func Offset: 0x64
	// Line 904, Address: 0x293358, Func Offset: 0x68
	// Line 905, Address: 0x293360, Func Offset: 0x70
	// Line 906, Address: 0x293368, Func Offset: 0x78
	// Line 907, Address: 0x293370, Func Offset: 0x80
	// Line 908, Address: 0x293374, Func Offset: 0x84
	// Line 909, Address: 0x293380, Func Offset: 0x90
	// Func End, Address: 0x293398, Func Offset: 0xa8
}

// 
// Start address: 0x2933a0
void EnemyGhostCommonAnotherHandle(sfObj* obj)
{
	// Line 913, Address: 0x2933a0, Func Offset: 0
	// Line 914, Address: 0x2933ac, Func Offset: 0xc
	// Line 915, Address: 0x2933c4, Func Offset: 0x24
	// Line 916, Address: 0x2933cc, Func Offset: 0x2c
	// Line 917, Address: 0x2933d4, Func Offset: 0x34
	// Line 918, Address: 0x2933e4, Func Offset: 0x44
	// Line 919, Address: 0x2933ec, Func Offset: 0x4c
	// Line 920, Address: 0x2933f0, Func Offset: 0x50
	// Line 922, Address: 0x2933f8, Func Offset: 0x58
	// Func End, Address: 0x293408, Func Offset: 0x68
}

// 
// Start address: 0x293410
void EnemyGhostCommonAnotherControl(sfObj* obj)
{
	EnemyGhostCommonAnotherWork* ew;
	float max_hp;
	float dt;
	// Line 926, Address: 0x293410, Func Offset: 0
	// Line 929, Address: 0x293428, Func Offset: 0x18
	// Line 930, Address: 0x293430, Func Offset: 0x20
	// Line 931, Address: 0x29343c, Func Offset: 0x2c
	// Line 935, Address: 0x293454, Func Offset: 0x44
	// Line 938, Address: 0x293464, Func Offset: 0x54
	// Line 940, Address: 0x293468, Func Offset: 0x58
	// Line 944, Address: 0x293480, Func Offset: 0x70
	// Line 945, Address: 0x293490, Func Offset: 0x80
	// Line 947, Address: 0x2934b8, Func Offset: 0xa8
	// Line 948, Address: 0x2934e4, Func Offset: 0xd4
	// Line 949, Address: 0x2934ec, Func Offset: 0xdc
	// Line 950, Address: 0x2934f0, Func Offset: 0xe0
	// Func End, Address: 0x29350c, Func Offset: 0xfc
}

// 
// Start address: 0x293510
void EnemyGhostCommonAnotherShiftToNormal(sfObj* obj)
{
	EnemyGhostCommonAnotherWork* ew;
	sfObj* obj2;
	float max_hp;
	EnemyKindTable* pt;
	// Line 954, Address: 0x293510, Func Offset: 0
	// Line 959, Address: 0x293530, Func Offset: 0x20
	// Line 960, Address: 0x293538, Func Offset: 0x28
	// Line 961, Address: 0x293544, Func Offset: 0x34
	// Line 962, Address: 0x293558, Func Offset: 0x48
	// Line 968, Address: 0x2935c0, Func Offset: 0xb0
	// Line 969, Address: 0x2935c8, Func Offset: 0xb8
	// Line 970, Address: 0x2935e8, Func Offset: 0xd8
	// Line 971, Address: 0x2935fc, Func Offset: 0xec
	// Line 972, Address: 0x293618, Func Offset: 0x108
	// Line 973, Address: 0x29362c, Func Offset: 0x11c
	// Line 974, Address: 0x293630, Func Offset: 0x120
	// Line 975, Address: 0x29363c, Func Offset: 0x12c
	// Line 976, Address: 0x293644, Func Offset: 0x134
	// Func End, Address: 0x29366c, Func Offset: 0x15c
}

// 
// Start address: 0x293670
void EnemyGhostCommonAnotherConstructDead(EnemyManageDataOne* pm)
{
	sfObj* obj2;
	EnemyKindTable* pt;
	int type;
	// Line 980, Address: 0x293670, Func Offset: 0
	// Line 984, Address: 0x293688, Func Offset: 0x18
	// Line 985, Address: 0x29368c, Func Offset: 0x1c
	// Line 986, Address: 0x293698, Func Offset: 0x28
	// Line 993, Address: 0x2936c8, Func Offset: 0x58
	// Func End, Address: 0x2936e0, Func Offset: 0x70
}

// 
// Start address: 0x2936e0
void EnemyGhostCommonAnotherRecovery(EnemyManageDataOne* pm)
{
	float dt;
	float f;
	float mh;
	_anon0 td;
	// Line 997, Address: 0x2936e0, Func Offset: 0
	// Line 1000, Address: 0x2936f8, Func Offset: 0x18
	// Line 1001, Address: 0x293700, Func Offset: 0x20
	// Line 1000, Address: 0x293704, Func Offset: 0x24
	// Line 1002, Address: 0x293708, Func Offset: 0x28
	// Line 1006, Address: 0x29371c, Func Offset: 0x3c
	// Line 1007, Address: 0x293720, Func Offset: 0x40
	// Line 1008, Address: 0x29372c, Func Offset: 0x4c
	// Line 1011, Address: 0x293730, Func Offset: 0x50
	// Line 1010, Address: 0x293734, Func Offset: 0x54
	// Line 1011, Address: 0x293738, Func Offset: 0x58
	// Line 1012, Address: 0x29373c, Func Offset: 0x5c
	// Line 1014, Address: 0x293748, Func Offset: 0x68
	// Line 1013, Address: 0x29374c, Func Offset: 0x6c
	// Line 1014, Address: 0x293750, Func Offset: 0x70
	// Line 1019, Address: 0x29375c, Func Offset: 0x7c
	// Line 1020, Address: 0x293768, Func Offset: 0x88
	// Line 1021, Address: 0x29378c, Func Offset: 0xac
	// Line 1023, Address: 0x293794, Func Offset: 0xb4
	// Line 1024, Address: 0x293798, Func Offset: 0xb8
	// Func End, Address: 0x2937b4, Func Offset: 0xd4
}

// 
// Start address: 0x2937c0
void EnemyGhostCommonAnotherExecuteWaiting(void* data)
{
	// Line 1028, Address: 0x2937c0, Func Offset: 0
	// Line 1029, Address: 0x2937d4, Func Offset: 0x14
	// Line 1030, Address: 0x2937dc, Func Offset: 0x1c
	// Line 1032, Address: 0x2937ec, Func Offset: 0x2c
	// Line 1033, Address: 0x2937fc, Func Offset: 0x3c
	// Line 1035, Address: 0x29381c, Func Offset: 0x5c
	// Line 1037, Address: 0x293824, Func Offset: 0x64
	// Line 1039, Address: 0x293868, Func Offset: 0xa8
	// Line 1042, Address: 0x293870, Func Offset: 0xb0
	// Func End, Address: 0x293888, Func Offset: 0xc8
}

