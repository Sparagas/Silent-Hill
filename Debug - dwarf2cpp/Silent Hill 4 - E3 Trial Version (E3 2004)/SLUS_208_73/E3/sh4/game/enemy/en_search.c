typedef struct EnemySearchPoint;
typedef struct EnemyClHitResult;
typedef struct EnemySearchData;
typedef union _anon0;
typedef enum EnemySearchPathType : unsigned char;
typedef struct _anon1;
typedef struct sfObj;
typedef union _anon2;
typedef struct _anon3;
typedef enum EnemyKind : unsigned char;
typedef struct EnemySearchWork;
typedef struct sfAllocateList;
typedef enum _enum : unsigned char;

typedef void(*type_2)(sfObj*);
typedef void(*type_4)(sfObj*);

typedef char type_0[2];
typedef _anon0 type_1[256];
typedef _anon2 type_3[32];
typedef float type_5[4];
typedef short type_6[2];
typedef unsigned short type_7[2];
typedef char type_8[4];
typedef unsigned char type_9[4];
typedef float type_10[1];
typedef int type_11[1];

struct EnemySearchPoint
{
	union
	{
		_anon2 pathpoint;
		float pos[4];
	};
	_enum type;
	int index;
	int available;
};

struct EnemyClHitResult
{
};

struct EnemySearchData
{
	_anon3 path;
	float start[4];
	float goal[4];
	_enum type;
	int success;
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

enum EnemySearchPathType : unsigned char
{
	ENEMY_PATH_STAGE,
	ENEMY_PATH_DETAIL
};

struct _anon1
{
	float x;
	float y;
	float z;
	char scene[2];
	char attr;
	char padding;
};

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

union _anon2
{
	float vec[4];
	_anon1 val;
};

struct _anon3
{
	_anon2 path[32];
	int path_num;
	_enum type;
};

enum EnemyKind : unsigned char
{
	ENEMY_KIND_NOTHING,
	ENEMY_KIND_CELL,
	ENEMY_KIND_MUSH,
	ENEMY_KIND_BUZZ,
	ENEMY_KIND_MM,
	ENEMY_KIND_WALLMAN,
	ENEMY_KIND_WHEEL,
	ENEMY_KIND_JINMEN,
	ENEMY_KIND_TWINS,
	ENEMY_KIND_HIL,
	ENEMY_KIND_HYENA,
	ENEMY_KIND_MULTI,
	ENEMY_KIND_PICKGIRL,
	ENEMY_KIND_FLAMES,
	ENEMY_KIND_FAT,
	ENEMY_KIND_SCRATCH,
	ENEMY_KIND_KILLER,
	ENEMY_KIND_NURSE,
	ENEMY_KIND_SAMPLE,
	ENEMY_KIND_MAX,
	ENEMY_KIND_TEST00 = 0,
	ENEMY_KIND_ALL = 0x13
};

struct EnemySearchWork
{
	sfAllocateList work_list;
	sfAllocateList point_list;
	EnemySearchPoint tmp_point;
	unsigned long appear_point;
	unsigned long warp_point;
};

struct sfAllocateList
{
	char* work_top;
	unsigned int size;
	int number;
};

enum _enum : unsigned char
{
	SF_STAGE_PATH,
	SF_DETAIL_PATH,
	SF_GHOST_POINT,
	SF_WARP_POINT,
	SF_PATH_TYPE_NUM,
	SF_BLUE_PATH = 0,
	SF_RED_PATH,
	SF_GREEN_POINT,
	SF_YELLOW_POINT
};

EnemySearchWork en_search_work;
float sg_vector_unit_y[4];

void EnemySearchWorkInit();
EnemySearchData* EnemySearchDataAllocate(EnemySearchPathType type);
void EnemySearchDataConstruct(EnemySearchData* esd, EnemySearchPathType type);
void EnemySearchDataDestruct(EnemySearchData* esd);
void EnemySearchDataWorkAllDestruct();
void EnemySearchPointGetPos(EnemySearchPoint* esp, float* pos);
EnemySearchPoint* EnemySearchPointTmpAllocate();
int EnemySearchPointIsThinWall(EnemySearchPoint* esp);
int EnemySearchPointIsGoal(EnemySearchPoint* esp);
void EnemySearchPathReset(EnemySearchData* esd);
int EnemySearchPath(EnemySearchData* esd, EnemySearchPoint* esp, float* start, float* goal);
int check_hit(float* pos, float* target, float hit_width);
int EnemySearchPathGetTargetPoint(EnemySearchData* esd, EnemySearchPoint* esp, float* pos, float hit_width, float range);
void EnemySearchPathGetLastPos(EnemySearchData* esd, float* pos);
int EnemySearchNearestGhostPoint(EnemySearchPoint* esp, float* pos, float* ignore);
int EnemySearchAppearPointNumber();
int EnemySearchAppearPointGet(EnemySearchPoint* esp, int index);
int EnemySearchAppearPointNearLine(EnemySearchPoint* esp, float* pos, float* target, float width);
int EnemySearchWarpPointNumber();
int EnemySearchWarpPointGet(EnemySearchPoint* esp, int index);
int EnemySearchNearestWarpPoint(EnemySearchPoint* esp, float* pos);
void EnemySearchPointLock(EnemySearchPoint* esp);
int EnemySearchPointIsLockG(int index);
int EnemySearchPointIsLockW(int index);
void EnemySearchPointDataWrite(_anon0* p, EnemySearchPoint* esp);
void EnemySearchPointDataReset(_anon0* p);
void EnemySearchPointUnlockD(_anon0* p);
sfObj* EnemySearchNearestEnemyByKind(sfObj* obj, float* pos, EnemyKind kind, float limit, float* charapos);

// 
// Start address: 0x1a30c0
void EnemySearchWorkInit()
{
	// Line 68, Address: 0x1a30c0, Func Offset: 0
	// Line 69, Address: 0x1a30c4, Func Offset: 0x4
	// Line 68, Address: 0x1a30c8, Func Offset: 0x8
	// Line 69, Address: 0x1a30cc, Func Offset: 0xc
	// Line 71, Address: 0x1a30d8, Func Offset: 0x18
	// Line 73, Address: 0x1a30e8, Func Offset: 0x28
	// Line 74, Address: 0x1a30f0, Func Offset: 0x30
	// Line 75, Address: 0x1a30f8, Func Offset: 0x38
	// Func End, Address: 0x1a3104, Func Offset: 0x44
}

// 
// Start address: 0x1a3110
EnemySearchData* EnemySearchDataAllocate(EnemySearchPathType type)
{
	EnemySearchData* esd;
	// Line 84, Address: 0x1a3110, Func Offset: 0
	// Line 86, Address: 0x1a3124, Func Offset: 0x14
	// Line 87, Address: 0x1a3134, Func Offset: 0x24
	// Line 88, Address: 0x1a3148, Func Offset: 0x38
	// Line 89, Address: 0x1a3154, Func Offset: 0x44
	// Line 90, Address: 0x1a3158, Func Offset: 0x48
	// Func End, Address: 0x1a316c, Func Offset: 0x5c
}

// 
// Start address: 0x1a3170
void EnemySearchDataConstruct(EnemySearchData* esd, EnemySearchPathType type)
{
	// Line 98, Address: 0x1a3170, Func Offset: 0
	// Line 99, Address: 0x1a3178, Func Offset: 0x8
	// Line 100, Address: 0x1a317c, Func Offset: 0xc
	// Line 101, Address: 0x1a3180, Func Offset: 0x10
	// Func End, Address: 0x1a3188, Func Offset: 0x18
}

// 
// Start address: 0x1a3190
void EnemySearchDataDestruct(EnemySearchData* esd)
{
	// Line 107, Address: 0x1a3190, Func Offset: 0
	// Line 108, Address: 0x1a3198, Func Offset: 0x8
	// Line 109, Address: 0x1a31a0, Func Offset: 0x10
	// Line 110, Address: 0x1a31ac, Func Offset: 0x1c
	// Func End, Address: 0x1a31bc, Func Offset: 0x2c
}

// 
// Start address: 0x1a31c0
void EnemySearchDataWorkAllDestruct()
{
	// Line 115, Address: 0x1a31c0, Func Offset: 0
	// Line 121, Address: 0x1a31c4, Func Offset: 0x4
	// Line 115, Address: 0x1a31c8, Func Offset: 0x8
	// Line 121, Address: 0x1a31cc, Func Offset: 0xc
	// Line 122, Address: 0x1a31d4, Func Offset: 0x14
	// Line 123, Address: 0x1a31e0, Func Offset: 0x20
	// Func End, Address: 0x1a31ec, Func Offset: 0x2c
}

// 
// Start address: 0x1a31f0
void EnemySearchPointGetPos(EnemySearchPoint* esp, float* pos)
{
	// Line 152, Address: 0x1a31f0, Func Offset: 0
	// Line 155, Address: 0x1a31fc, Func Offset: 0xc
	// Line 156, Address: 0x1a320c, Func Offset: 0x1c
	// Line 158, Address: 0x1a3240, Func Offset: 0x50
	// Line 159, Address: 0x1a3248, Func Offset: 0x58
	// Line 160, Address: 0x1a3254, Func Offset: 0x64
	// Line 162, Address: 0x1a325c, Func Offset: 0x6c
	// Line 163, Address: 0x1a3260, Func Offset: 0x70
	// Line 164, Address: 0x1a3268, Func Offset: 0x78
	// Line 166, Address: 0x1a3270, Func Offset: 0x80
	// Line 169, Address: 0x1a3278, Func Offset: 0x88
	// Func End, Address: 0x1a3288, Func Offset: 0x98
}

// 
// Start address: 0x1a3290
EnemySearchPoint* EnemySearchPointTmpAllocate()
{
	EnemySearchPoint* esp;
	// Line 187, Address: 0x1a3290, Func Offset: 0
	// Line 190, Address: 0x1a3298, Func Offset: 0x8
	// Func End, Address: 0x1a32a0, Func Offset: 0x10
}

// 
// Start address: 0x1a32a0
int EnemySearchPointIsThinWall(EnemySearchPoint* esp)
{
	// Line 244, Address: 0x1a32a0, Func Offset: 0
	// Line 245, Address: 0x1a32b8, Func Offset: 0x18
	// Line 249, Address: 0x1a32e0, Func Offset: 0x40
	// Line 251, Address: 0x1a32e8, Func Offset: 0x48
	// Line 252, Address: 0x1a3300, Func Offset: 0x60
	// Func End, Address: 0x1a3308, Func Offset: 0x68
}

// 
// Start address: 0x1a3310
int EnemySearchPointIsGoal(EnemySearchPoint* esp)
{
	// Line 261, Address: 0x1a3310, Func Offset: 0
	// Line 262, Address: 0x1a3328, Func Offset: 0x18
	// Line 265, Address: 0x1a3348, Func Offset: 0x38
	// Line 267, Address: 0x1a3350, Func Offset: 0x40
	// Line 268, Address: 0x1a3368, Func Offset: 0x58
	// Func End, Address: 0x1a3370, Func Offset: 0x60
}

// 
// Start address: 0x1a3370
void EnemySearchPathReset(EnemySearchData* esd)
{
	// Line 276, Address: 0x1a3370, Func Offset: 0
	// Func End, Address: 0x1a3378, Func Offset: 0x8
}

// 
// Start address: 0x1a3380
int EnemySearchPath(EnemySearchData* esd, EnemySearchPoint* esp, float* start, float* goal)
{
	float sp[4];
	float gp[4];
	int r;
	// Line 287, Address: 0x1a3380, Func Offset: 0
	// Line 290, Address: 0x1a33ac, Func Offset: 0x2c
	// Line 291, Address: 0x1a33b8, Func Offset: 0x38
	// Line 297, Address: 0x1a340c, Func Offset: 0x8c
	// Line 298, Address: 0x1a3418, Func Offset: 0x98
	// Line 300, Address: 0x1a3438, Func Offset: 0xb8
	// Line 301, Address: 0x1a3444, Func Offset: 0xc4
	// Line 302, Address: 0x1a3450, Func Offset: 0xd0
	// Line 303, Address: 0x1a3460, Func Offset: 0xe0
	// Line 305, Address: 0x1a3468, Func Offset: 0xe8
	// Line 306, Address: 0x1a3474, Func Offset: 0xf4
	// Line 307, Address: 0x1a3480, Func Offset: 0x100
	// Line 309, Address: 0x1a348c, Func Offset: 0x10c
	// Line 310, Address: 0x1a3490, Func Offset: 0x110
	// Line 311, Address: 0x1a3494, Func Offset: 0x114
	// Line 312, Address: 0x1a349c, Func Offset: 0x11c
	// Line 313, Address: 0x1a34a4, Func Offset: 0x124
	// Line 314, Address: 0x1a34a8, Func Offset: 0x128
	// Line 316, Address: 0x1a34b8, Func Offset: 0x138
	// Line 317, Address: 0x1a34c4, Func Offset: 0x144
	// Line 319, Address: 0x1a34c8, Func Offset: 0x148
	// Line 317, Address: 0x1a34cc, Func Offset: 0x14c
	// Line 318, Address: 0x1a34d0, Func Offset: 0x150
	// Line 319, Address: 0x1a34d4, Func Offset: 0x154
	// Line 321, Address: 0x1a34d8, Func Offset: 0x158
	// Line 322, Address: 0x1a34dc, Func Offset: 0x15c
	// Func End, Address: 0x1a34fc, Func Offset: 0x17c
}

// 
// Start address: 0x1a3500
int check_hit(float* pos, float* target, float hit_width)
{
	int r;
	float tpos[4];
	float ttarget[4];
	float vec[4];
	// Line 332, Address: 0x1a3500, Func Offset: 0
	// Line 336, Address: 0x1a3508, Func Offset: 0x8
	// Line 332, Address: 0x1a350c, Func Offset: 0xc
	// Line 336, Address: 0x1a3524, Func Offset: 0x24
	// Line 338, Address: 0x1a352c, Func Offset: 0x2c
	// Line 337, Address: 0x1a3530, Func Offset: 0x30
	// Line 338, Address: 0x1a3548, Func Offset: 0x48
	// Line 340, Address: 0x1a3550, Func Offset: 0x50
	// Line 339, Address: 0x1a3554, Func Offset: 0x54
	// Line 340, Address: 0x1a3558, Func Offset: 0x58
	// Line 339, Address: 0x1a3564, Func Offset: 0x64
	// Line 340, Address: 0x1a3568, Func Offset: 0x68
	// Line 342, Address: 0x1a3578, Func Offset: 0x78
	// Line 343, Address: 0x1a3598, Func Offset: 0x98
	// Line 345, Address: 0x1a35a0, Func Offset: 0xa0
	// Line 346, Address: 0x1a35b8, Func Offset: 0xb8
	// Line 347, Address: 0x1a35e0, Func Offset: 0xe0
	// Line 348, Address: 0x1a360c, Func Offset: 0x10c
	// Line 349, Address: 0x1a3630, Func Offset: 0x130
	// Line 350, Address: 0x1a3650, Func Offset: 0x150
	// Line 351, Address: 0x1a3670, Func Offset: 0x170
	// Line 353, Address: 0x1a3690, Func Offset: 0x190
	// Line 354, Address: 0x1a3698, Func Offset: 0x198
	// Line 355, Address: 0x1a36b4, Func Offset: 0x1b4
	// Line 356, Address: 0x1a36bc, Func Offset: 0x1bc
	// Line 355, Address: 0x1a36c0, Func Offset: 0x1c0
	// Line 356, Address: 0x1a36c4, Func Offset: 0x1c4
	// Line 355, Address: 0x1a36c8, Func Offset: 0x1c8
	// Line 356, Address: 0x1a36d0, Func Offset: 0x1d0
	// Line 357, Address: 0x1a36e4, Func Offset: 0x1e4
	// Line 358, Address: 0x1a36ec, Func Offset: 0x1ec
	// Line 357, Address: 0x1a36fc, Func Offset: 0x1fc
	// Line 358, Address: 0x1a3700, Func Offset: 0x200
	// Line 357, Address: 0x1a3704, Func Offset: 0x204
	// Line 358, Address: 0x1a3708, Func Offset: 0x208
	// Line 362, Address: 0x1a3718, Func Offset: 0x218
	// Func End, Address: 0x1a3730, Func Offset: 0x230
}

// 
// Start address: 0x1a3730
int EnemySearchPathGetTargetPoint(EnemySearchData* esd, EnemySearchPoint* esp, float* pos, float hit_width, float range)
{
	float p1[4];
	float p2[4];
	float vec[4];
	float vec2[4];
	_anon2 tpp;
	float d;
	int nm;
	// Line 375, Address: 0x1a3730, Func Offset: 0
	// Line 380, Address: 0x1a375c, Func Offset: 0x2c
	// Line 381, Address: 0x1a3764, Func Offset: 0x34
	// Line 382, Address: 0x1a3778, Func Offset: 0x48
	// Line 383, Address: 0x1a3788, Func Offset: 0x58
	// Line 385, Address: 0x1a378c, Func Offset: 0x5c
	// Line 386, Address: 0x1a3790, Func Offset: 0x60
	// Line 383, Address: 0x1a379c, Func Offset: 0x6c
	// Line 384, Address: 0x1a37a0, Func Offset: 0x70
	// Line 386, Address: 0x1a37a4, Func Offset: 0x74
	// Line 388, Address: 0x1a37b4, Func Offset: 0x84
	// Line 389, Address: 0x1a37bc, Func Offset: 0x8c
	// Line 390, Address: 0x1a37c4, Func Offset: 0x94
	// Line 391, Address: 0x1a37cc, Func Offset: 0x9c
	// Line 392, Address: 0x1a37d0, Func Offset: 0xa0
	// Line 393, Address: 0x1a37e4, Func Offset: 0xb4
	// Line 394, Address: 0x1a37f0, Func Offset: 0xc0
	// Line 395, Address: 0x1a3800, Func Offset: 0xd0
	// Line 396, Address: 0x1a380c, Func Offset: 0xdc
	// Line 398, Address: 0x1a3820, Func Offset: 0xf0
	// Line 399, Address: 0x1a382c, Func Offset: 0xfc
	// Line 400, Address: 0x1a3838, Func Offset: 0x108
	// Line 402, Address: 0x1a3844, Func Offset: 0x114
	// Line 403, Address: 0x1a3848, Func Offset: 0x118
	// Line 405, Address: 0x1a3860, Func Offset: 0x130
	// Line 407, Address: 0x1a3868, Func Offset: 0x138
	// Line 408, Address: 0x1a387c, Func Offset: 0x14c
	// Line 411, Address: 0x1a388c, Func Offset: 0x15c
	// Line 410, Address: 0x1a3890, Func Offset: 0x160
	// Line 411, Address: 0x1a3894, Func Offset: 0x164
	// Line 410, Address: 0x1a3898, Func Offset: 0x168
	// Line 411, Address: 0x1a389c, Func Offset: 0x16c
	// Line 412, Address: 0x1a38a4, Func Offset: 0x174
	// Line 413, Address: 0x1a38a8, Func Offset: 0x178
	// Line 414, Address: 0x1a38b4, Func Offset: 0x184
	// Line 415, Address: 0x1a38c0, Func Offset: 0x190
	// Line 416, Address: 0x1a38cc, Func Offset: 0x19c
	// Line 418, Address: 0x1a38e0, Func Offset: 0x1b0
	// Line 420, Address: 0x1a38ec, Func Offset: 0x1bc
	// Line 421, Address: 0x1a38f0, Func Offset: 0x1c0
	// Line 422, Address: 0x1a390c, Func Offset: 0x1dc
	// Line 423, Address: 0x1a3928, Func Offset: 0x1f8
	// Line 424, Address: 0x1a3954, Func Offset: 0x224
	// Line 425, Address: 0x1a3980, Func Offset: 0x250
	// Line 427, Address: 0x1a39c0, Func Offset: 0x290
	// Line 429, Address: 0x1a39c8, Func Offset: 0x298
	// Line 431, Address: 0x1a39dc, Func Offset: 0x2ac
	// Line 432, Address: 0x1a39e4, Func Offset: 0x2b4
	// Line 434, Address: 0x1a39e8, Func Offset: 0x2b8
	// Line 436, Address: 0x1a39f4, Func Offset: 0x2c4
	// Line 437, Address: 0x1a39f8, Func Offset: 0x2c8
	// Line 438, Address: 0x1a3a00, Func Offset: 0x2d0
	// Func End, Address: 0x1a3a24, Func Offset: 0x2f4
}

// 
// Start address: 0x1a3a30
void EnemySearchPathGetLastPos(EnemySearchData* esd, float* pos)
{
	_anon2 tpp;
	int m;
	// Line 511, Address: 0x1a3a30, Func Offset: 0
	// Line 514, Address: 0x1a3a48, Func Offset: 0x18
	// Line 515, Address: 0x1a3a50, Func Offset: 0x20
	// Line 516, Address: 0x1a3a5c, Func Offset: 0x2c
	// Line 517, Address: 0x1a3a64, Func Offset: 0x34
	// Line 518, Address: 0x1a3a6c, Func Offset: 0x3c
	// Line 519, Address: 0x1a3a78, Func Offset: 0x48
	// Line 520, Address: 0x1a3a84, Func Offset: 0x54
	// Func End, Address: 0x1a3a9c, Func Offset: 0x6c
}

// 
// Start address: 0x1a3aa0
int EnemySearchNearestGhostPoint(EnemySearchPoint* esp, float* pos, float* ignore)
{
	int i;
	int m;
	int r;
	int pp;
	float d;
	float dm;
	_anon2 tpp;
	float ppos[4];
	float vec[4];
	// Line 530, Address: 0x1a3aa0, Func Offset: 0
	// Line 535, Address: 0x1a3ad8, Func Offset: 0x38
	// Line 536, Address: 0x1a3adc, Func Offset: 0x3c
	// Line 537, Address: 0x1a3ae4, Func Offset: 0x44
	// Line 539, Address: 0x1a3af0, Func Offset: 0x50
	// Line 538, Address: 0x1a3af4, Func Offset: 0x54
	// Line 540, Address: 0x1a3afc, Func Offset: 0x5c
	// Line 541, Address: 0x1a3b08, Func Offset: 0x68
	// Line 544, Address: 0x1a3b24, Func Offset: 0x84
	// Line 545, Address: 0x1a3b2c, Func Offset: 0x8c
	// Line 546, Address: 0x1a3b38, Func Offset: 0x98
	// Line 549, Address: 0x1a3b64, Func Offset: 0xc4
	// Line 550, Address: 0x1a3b68, Func Offset: 0xc8
	// Line 551, Address: 0x1a3b78, Func Offset: 0xd8
	// Line 552, Address: 0x1a3b94, Func Offset: 0xf4
	// Line 553, Address: 0x1a3bac, Func Offset: 0x10c
	// Line 554, Address: 0x1a3be0, Func Offset: 0x140
	// Line 555, Address: 0x1a3bfc, Func Offset: 0x15c
	// Line 558, Address: 0x1a3c0c, Func Offset: 0x16c
	// Line 559, Address: 0x1a3c10, Func Offset: 0x170
	// Line 564, Address: 0x1a3c1c, Func Offset: 0x17c
	// Line 561, Address: 0x1a3c20, Func Offset: 0x180
	// Line 560, Address: 0x1a3c24, Func Offset: 0x184
	// Line 562, Address: 0x1a3c28, Func Offset: 0x188
	// Line 561, Address: 0x1a3c2c, Func Offset: 0x18c
	// Line 562, Address: 0x1a3c30, Func Offset: 0x190
	// Line 563, Address: 0x1a3c34, Func Offset: 0x194
	// Line 564, Address: 0x1a3c38, Func Offset: 0x198
	// Line 567, Address: 0x1a3c3c, Func Offset: 0x19c
	// Line 569, Address: 0x1a3c54, Func Offset: 0x1b4
	// Func End, Address: 0x1a3c84, Func Offset: 0x1e4
}

// 
// Start address: 0x1a3c90
int EnemySearchAppearPointNumber()
{
	// Line 576, Address: 0x1a3c90, Func Offset: 0
	// Func End, Address: 0x1a3c98, Func Offset: 0x8
}

// 
// Start address: 0x1a3ca0
int EnemySearchAppearPointGet(EnemySearchPoint* esp, int index)
{
	// Line 585, Address: 0x1a3ca0, Func Offset: 0
	// Line 586, Address: 0x1a3cb4, Func Offset: 0x14
	// Line 587, Address: 0x1a3cd0, Func Offset: 0x30
	// Line 588, Address: 0x1a3cd4, Func Offset: 0x34
	// Line 589, Address: 0x1a3cdc, Func Offset: 0x3c
	// Line 590, Address: 0x1a3ce0, Func Offset: 0x40
	// Line 591, Address: 0x1a3cec, Func Offset: 0x4c
	// Line 593, Address: 0x1a3cf0, Func Offset: 0x50
	// Line 591, Address: 0x1a3cf4, Func Offset: 0x54
	// Line 592, Address: 0x1a3cf8, Func Offset: 0x58
	// Line 593, Address: 0x1a3cfc, Func Offset: 0x5c
	// Line 595, Address: 0x1a3d00, Func Offset: 0x60
	// Func End, Address: 0x1a3d14, Func Offset: 0x74
}

// 
// Start address: 0x1a3d20
int EnemySearchAppearPointNearLine(EnemySearchPoint* esp, float* pos, float* target, float width)
{
	float ppos[4];
	float cpos[4];
	float vec[4];
	_anon2 tpp;
	int i;
	int m;
	int r;
	int pp;
	float d;
	float dm;
	// Line 606, Address: 0x1a3d20, Func Offset: 0
	// Line 612, Address: 0x1a3d60, Func Offset: 0x40
	// Line 613, Address: 0x1a3d6c, Func Offset: 0x4c
	// Line 614, Address: 0x1a3d80, Func Offset: 0x60
	// Line 615, Address: 0x1a3d8c, Func Offset: 0x6c
	// Line 616, Address: 0x1a3d90, Func Offset: 0x70
	// Line 617, Address: 0x1a3d98, Func Offset: 0x78
	// Line 618, Address: 0x1a3da0, Func Offset: 0x80
	// Line 621, Address: 0x1a3dbc, Func Offset: 0x9c
	// Line 622, Address: 0x1a3dc4, Func Offset: 0xa4
	// Line 623, Address: 0x1a3dd0, Func Offset: 0xb0
	// Line 625, Address: 0x1a3de8, Func Offset: 0xc8
	// Line 626, Address: 0x1a3df4, Func Offset: 0xd4
	// Line 627, Address: 0x1a3e00, Func Offset: 0xe0
	// Line 629, Address: 0x1a3e0c, Func Offset: 0xec
	// Line 630, Address: 0x1a3e24, Func Offset: 0x104
	// Line 631, Address: 0x1a3e50, Func Offset: 0x130
	// Line 632, Address: 0x1a3e6c, Func Offset: 0x14c
	// Line 636, Address: 0x1a3e7c, Func Offset: 0x15c
	// Line 637, Address: 0x1a3e80, Func Offset: 0x160
	// Line 641, Address: 0x1a3e8c, Func Offset: 0x16c
	// Line 640, Address: 0x1a3e90, Func Offset: 0x170
	// Line 639, Address: 0x1a3e94, Func Offset: 0x174
	// Line 638, Address: 0x1a3e98, Func Offset: 0x178
	// Line 640, Address: 0x1a3e9c, Func Offset: 0x17c
	// Line 641, Address: 0x1a3ea0, Func Offset: 0x180
	// Line 642, Address: 0x1a3ea4, Func Offset: 0x184
	// Line 643, Address: 0x1a3ea8, Func Offset: 0x188
	// Line 646, Address: 0x1a3eac, Func Offset: 0x18c
	// Line 647, Address: 0x1a3ec4, Func Offset: 0x1a4
	// Line 648, Address: 0x1a3ec8, Func Offset: 0x1a8
	// Func End, Address: 0x1a3efc, Func Offset: 0x1dc
}

// 
// Start address: 0x1a3f00
int EnemySearchWarpPointNumber()
{
	// Line 655, Address: 0x1a3f00, Func Offset: 0
	// Func End, Address: 0x1a3f08, Func Offset: 0x8
}

// 
// Start address: 0x1a3f10
int EnemySearchWarpPointGet(EnemySearchPoint* esp, int index)
{
	// Line 664, Address: 0x1a3f10, Func Offset: 0
	// Line 665, Address: 0x1a3f24, Func Offset: 0x14
	// Line 666, Address: 0x1a3f40, Func Offset: 0x30
	// Line 667, Address: 0x1a3f44, Func Offset: 0x34
	// Line 668, Address: 0x1a3f4c, Func Offset: 0x3c
	// Line 669, Address: 0x1a3f50, Func Offset: 0x40
	// Line 670, Address: 0x1a3f5c, Func Offset: 0x4c
	// Line 672, Address: 0x1a3f60, Func Offset: 0x50
	// Line 670, Address: 0x1a3f64, Func Offset: 0x54
	// Line 671, Address: 0x1a3f68, Func Offset: 0x58
	// Line 672, Address: 0x1a3f6c, Func Offset: 0x5c
	// Line 674, Address: 0x1a3f70, Func Offset: 0x60
	// Func End, Address: 0x1a3f84, Func Offset: 0x74
}

// 
// Start address: 0x1a3f90
int EnemySearchNearestWarpPoint(EnemySearchPoint* esp, float* pos)
{
	int i;
	int m;
	float d;
	float dm;
	float tpos[4];
	// Line 682, Address: 0x1a3f90, Func Offset: 0
	// Line 686, Address: 0x1a3fb0, Func Offset: 0x20
	// Line 687, Address: 0x1a3fbc, Func Offset: 0x2c
	// Line 688, Address: 0x1a3fc4, Func Offset: 0x34
	// Line 689, Address: 0x1a3fc8, Func Offset: 0x38
	// Line 691, Address: 0x1a3fd0, Func Offset: 0x40
	// Line 692, Address: 0x1a3fd8, Func Offset: 0x48
	// Line 693, Address: 0x1a3fe8, Func Offset: 0x58
	// Line 694, Address: 0x1a3ff4, Func Offset: 0x64
	// Line 695, Address: 0x1a4000, Func Offset: 0x70
	// Line 696, Address: 0x1a400c, Func Offset: 0x7c
	// Line 697, Address: 0x1a4010, Func Offset: 0x80
	// Line 699, Address: 0x1a4014, Func Offset: 0x84
	// Line 700, Address: 0x1a4028, Func Offset: 0x98
	// Line 701, Address: 0x1a4030, Func Offset: 0xa0
	// Line 703, Address: 0x1a4038, Func Offset: 0xa8
	// Func End, Address: 0x1a4058, Func Offset: 0xc8
}

// 
// Start address: 0x1a4060
void EnemySearchPointLock(EnemySearchPoint* esp)
{
	// Line 710, Address: 0x1a4060, Func Offset: 0
	// Line 711, Address: 0x1a4074, Func Offset: 0x14
	// Line 712, Address: 0x1a4094, Func Offset: 0x34
	// Line 713, Address: 0x1a4098, Func Offset: 0x38
	// Line 714, Address: 0x1a40b4, Func Offset: 0x54
	// Line 715, Address: 0x1a40bc, Func Offset: 0x5c
	// Line 716, Address: 0x1a40c0, Func Offset: 0x60
	// Line 720, Address: 0x1a40e0, Func Offset: 0x80
	// Func End, Address: 0x1a40e8, Func Offset: 0x88
}

// 
// Start address: 0x1a40f0
int EnemySearchPointIsLockG(int index)
{
	// Line 765, Address: 0x1a40f0, Func Offset: 0
	// Line 766, Address: 0x1a4104, Func Offset: 0x14
	// Func End, Address: 0x1a410c, Func Offset: 0x1c
}

// 
// Start address: 0x1a4110
int EnemySearchPointIsLockW(int index)
{
	// Line 774, Address: 0x1a4110, Func Offset: 0
	// Line 775, Address: 0x1a4124, Func Offset: 0x14
	// Func End, Address: 0x1a412c, Func Offset: 0x1c
}

// 
// Start address: 0x1a4130
void EnemySearchPointDataWrite(_anon0* p, EnemySearchPoint* esp)
{
	// Line 783, Address: 0x1a4130, Func Offset: 0
	// Line 784, Address: 0x1a4138, Func Offset: 0x8
	// Line 785, Address: 0x1a413c, Func Offset: 0xc
	// Func End, Address: 0x1a4144, Func Offset: 0x14
}

// 
// Start address: 0x1a4150
void EnemySearchPointDataReset(_anon0* p)
{
	// Line 792, Address: 0x1a4150, Func Offset: 0
	// Line 793, Address: 0x1a4154, Func Offset: 0x4
	// Func End, Address: 0x1a415c, Func Offset: 0xc
}

// 
// Start address: 0x1a4160
void EnemySearchPointUnlockD(_anon0* p)
{
	// Line 815, Address: 0x1a4160, Func Offset: 0
	// Line 817, Address: 0x1a4180, Func Offset: 0x20
	// Line 818, Address: 0x1a41a8, Func Offset: 0x48
	// Line 820, Address: 0x1a41b0, Func Offset: 0x50
	// Line 822, Address: 0x1a41dc, Func Offset: 0x7c
	// Line 823, Address: 0x1a41e0, Func Offset: 0x80
	// Func End, Address: 0x1a41e8, Func Offset: 0x88
}

// 
// Start address: 0x1a41f0
sfObj* EnemySearchNearestEnemyByKind(sfObj* obj, float* pos, EnemyKind kind, float limit, float* charapos)
{
	sfObj* tobj;
	sfObj* robj;
	float* tpos;
	float dist;
	float dlim;
	// Line 861, Address: 0x1a41f0, Func Offset: 0
	// Line 868, Address: 0x1a4220, Func Offset: 0x30
	// Line 861, Address: 0x1a4224, Func Offset: 0x34
	// Line 868, Address: 0x1a4228, Func Offset: 0x38
	// Line 861, Address: 0x1a422c, Func Offset: 0x3c
	// Line 865, Address: 0x1a4230, Func Offset: 0x40
	// Line 868, Address: 0x1a4234, Func Offset: 0x44
	// Line 869, Address: 0x1a4248, Func Offset: 0x58
	// Line 870, Address: 0x1a4250, Func Offset: 0x60
	// Line 871, Address: 0x1a425c, Func Offset: 0x6c
	// Line 872, Address: 0x1a4268, Func Offset: 0x78
	// Line 873, Address: 0x1a4274, Func Offset: 0x84
	// Line 874, Address: 0x1a4278, Func Offset: 0x88
	// Line 875, Address: 0x1a427c, Func Offset: 0x8c
	// Line 877, Address: 0x1a4284, Func Offset: 0x94
	// Line 878, Address: 0x1a42a0, Func Offset: 0xb0
	// Line 879, Address: 0x1a42a4, Func Offset: 0xb4
	// Func End, Address: 0x1a42d0, Func Offset: 0xe0
}

