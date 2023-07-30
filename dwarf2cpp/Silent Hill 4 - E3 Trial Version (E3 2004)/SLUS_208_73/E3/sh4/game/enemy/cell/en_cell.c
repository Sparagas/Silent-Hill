typedef struct sfObj;
typedef struct EnemyCellWork;
typedef enum EnemyCondition : unsigned char;
typedef struct _anon0;
typedef struct EnemyClHitResult;
typedef union _anon1;
typedef struct EnemyTexParameter;
typedef struct _anon2;
typedef struct EnemyManageDataOne;
typedef enum EnemyManageEntryType : unsigned char;
typedef enum EnemyTexIdentity : unsigned char;

typedef void(*type_9)(sfObj*);
typedef void(*type_12)(sfObj*);

typedef float type_0[4];
typedef float type_1[4][4];
typedef _anon1 type_2[4];
typedef float type_3[3];
typedef float type_4[4][9];
typedef float type_5[4];
typedef float type_6[4];
typedef _anon0 type_7[5];
typedef _anon1 type_8[256];
typedef _anon2 type_10[2];
typedef float type_11[4];
typedef short type_13[2];
typedef unsigned short type_14[2];
typedef char type_15[4];
typedef unsigned char type_16[4];
typedef float type_17[1];
typedef int type_18[1];
typedef float type_19[4];

struct sfObj
{
	_anon1 fwork[256];
	_anon1* work;
	void(*func)(sfObj*);
	_anon1* work_pt0;
	_anon1* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon1* sys_work;
	_anon1* scene_work;
	_anon1* event_work;
	_anon1* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct EnemyCellWork
{
	float wall_normal[4];
	float bpos[4][4];
	float dir;
	float dir_add;
	float move_speed;
	float move_speed_add;
	float viscosity;
	float old_pos[3];
	int texanime_count;
	float texanime_count2;
};

enum EnemyCondition : unsigned char
{
	ENEMY_CONDITION_NOENTRY,
	ENEMY_CONDITION_NORMAL,
	ENEMY_CONDITION_CAUTION,
	ENEMY_CONDITION_CHASE,
	ENEMY_CONDITION_ESCAPE,
	ENEMY_CONDITION_BATTLE,
	ENEMY_CONDITION_SEIZE,
	ENEMY_CONDITION_INVINCIBLE,
	ENEMY_CONDITION_RISE,
	ENEMY_CONDITION_DAMAGE,
	ENEMY_CONDITION_DYING,
	ENEMY_CONDITION_DEAD,
	ENEMY_CONDITION_SPECIAL,
	ENEMY_CONDITION_HIDDEN,
	ENEMY_CONDITION_FULLHIDDEN,
	ENEMY_CONDITION_ANOTHERSCENE,
	ENEMY_CONDITION_ERASE,
	ENEMY_CONDITION_FLAGWAIT,
	ENEMY_CONDITION_EVENT
};

struct _anon0
{
	float bmin[4];
	float bmax[4];
};

struct EnemyClHitResult
{
};

union _anon1
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

struct EnemyTexParameter
{
	_anon2 st[2];
	EnemyTexIdentity texid;
	unsigned long clamp;
	int rotate;
};

struct _anon2
{
	float S;
	float T;
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
	_anon1 work[4];
	unsigned int padding;
};

enum EnemyManageEntryType : unsigned char
{
	ENEMY_MANAGE_ENTRY_TYPE_APPEAR,
	ENEMY_MANAGE_ENTRY_TYPE_FLAG_WAIT,
	ENEMY_MANAGE_ENTRY_TYPE_DIFFERENT_LEVEL,
	ENEMY_MANAGE_ENTRY_TYPE_ERASED,
	ENEMY_MANAGE_ENTRY_TYPE_ALREADY,
	ENEMY_MANAGE_ENTRY_TYPE_ANOTHER_SCENE
};

enum EnemyTexIdentity : unsigned char
{
	EN_TEX_ID_COALTAR,
	EN_TEX_ID_GHOSTSTAIN,
	EN_TEX_ID_CELL,
	EN_TEX_ID_CELL2,
	EN_TEX_ID_MUCUS,
	EN_TEX_ID_CRUSH_HIL,
	EN_TEX_ID_EARTHWORM,
	EN_TEX_ID_EARTHWORM2,
	EN_TEX_ID_EARTHWORM3,
	EN_TEX_ID_EARTHWORM4,
	EN_TEX_ID_BLOODPOOL,
	EN_TEX_ID_FLAME1,
	EN_TEX_ID_FLAME2,
	EN_TEX_ID_TOACH,
	EN_TEX_ID_FIRE,
	EN_TEX_ID_FIRELIGHT,
	EN_TEX_ID_WALL,
	EN_TEX_ID_MAX
};

_anon0 limit_sb01[5];
_anon0 limit_mz05;
_anon0 limit_mz09;
_anon0 limit_mz10;
_anon0 limit_mz16;
_anon0 limit_mz18;
_anon0 limit_mz20;
_anon0 limit_mz25;
_anon0 limit_mz30a;
_anon0 limit_mz30b;
float cell_skeleton_dist[4];
float cell_skeleton_dist2[4];
float cell_skeleton_limit[4];
float speed_accel;
float speed_now;
sfObj* speed_master;
float sg_vector_zero[4];

void EnemyCellConstruct(sfObj* obj);
void EnemyCellSkeletonReset(sfObj* obj);
void EnemyCellHandle(sfObj* obj);
void EnemyCellDraw(sfObj* obj);
void EnemyCellDestruct(sfObj* obj);
void EnemyCellDataPreserve(sfObj* obj);
void EnemyCellDataExtract(sfObj* obj);
void EnemyCellControl(sfObj* obj);
void EnemyCellControlInit(sfObj* obj);
void EnemyCellControlWander(sfObj* obj);
void EnemyCellControlApproach(sfObj* obj);
void EnemyCellControlEscape();
void EnemyCellControlDead();
void EnemyCellSkeletonControl(sfObj* obj);
void EnemyCellHitCheck(sfObj* obj);
void EnemyCellCheckLimit(sfObj* obj);
void EnemyCellTexAnime(sfObj* obj);

// 
// Start address: 0x1f8da0
void EnemyCellConstruct(sfObj* obj)
{
	EnemyManageEntryType etype;
	// Line 152, Address: 0x1f8da0, Func Offset: 0
	// Line 155, Address: 0x1f8da4, Func Offset: 0x4
	// Line 152, Address: 0x1f8da8, Func Offset: 0x8
	// Line 155, Address: 0x1f8db4, Func Offset: 0x14
	// Line 157, Address: 0x1f8dbc, Func Offset: 0x1c
	// Line 158, Address: 0x1f8dc8, Func Offset: 0x28
	// Line 160, Address: 0x1f8de0, Func Offset: 0x40
	// Line 161, Address: 0x1f8de8, Func Offset: 0x48
	// Line 164, Address: 0x1f8df0, Func Offset: 0x50
	// Line 165, Address: 0x1f8e00, Func Offset: 0x60
	// Line 167, Address: 0x1f8e14, Func Offset: 0x74
	// Line 168, Address: 0x1f8e20, Func Offset: 0x80
	// Line 169, Address: 0x1f8e30, Func Offset: 0x90
	// Line 171, Address: 0x1f8e50, Func Offset: 0xb0
	// Line 173, Address: 0x1f8e70, Func Offset: 0xd0
	// Line 174, Address: 0x1f8e78, Func Offset: 0xd8
	// Line 175, Address: 0x1f8e8c, Func Offset: 0xec
	// Line 176, Address: 0x1f8e94, Func Offset: 0xf4
	// Line 177, Address: 0x1f8ea4, Func Offset: 0x104
	// Line 178, Address: 0x1f8eb4, Func Offset: 0x114
	// Line 180, Address: 0x1f8eb8, Func Offset: 0x118
	// Line 182, Address: 0x1f8ec0, Func Offset: 0x120
	// Line 184, Address: 0x1f8ecc, Func Offset: 0x12c
	// Line 185, Address: 0x1f8ed4, Func Offset: 0x134
	// Line 187, Address: 0x1f8ed8, Func Offset: 0x138
	// Line 188, Address: 0x1f8ee4, Func Offset: 0x144
	// Line 190, Address: 0x1f8eec, Func Offset: 0x14c
	// Line 192, Address: 0x1f8efc, Func Offset: 0x15c
	// Line 191, Address: 0x1f8f00, Func Offset: 0x160
	// Line 192, Address: 0x1f8f04, Func Offset: 0x164
	// Line 193, Address: 0x1f8f0c, Func Offset: 0x16c
	// Line 194, Address: 0x1f8f14, Func Offset: 0x174
	// Line 195, Address: 0x1f8f18, Func Offset: 0x178
	// Func End, Address: 0x1f8f2c, Func Offset: 0x18c
}

// 
// Start address: 0x1f8f30
void EnemyCellSkeletonReset(sfObj* obj)
{
	EnemyCellWork* ew;
	float* pos;
	int i;
	// Line 199, Address: 0x1f8f30, Func Offset: 0
	// Line 203, Address: 0x1f8f3c, Func Offset: 0xc
	// Line 205, Address: 0x1f8f44, Func Offset: 0x14
	// Line 206, Address: 0x1f8f54, Func Offset: 0x24
	// Line 207, Address: 0x1f8f58, Func Offset: 0x28
	// Line 208, Address: 0x1f8f68, Func Offset: 0x38
	// Line 209, Address: 0x1f8f78, Func Offset: 0x48
	// Line 210, Address: 0x1f8f7c, Func Offset: 0x4c
	// Func End, Address: 0x1f8f8c, Func Offset: 0x5c
}

// 
// Start address: 0x1f8f90
void EnemyCellHandle(sfObj* obj)
{
	EnemyCondition cond;
	// Line 214, Address: 0x1f8f90, Func Offset: 0
	// Line 216, Address: 0x1f8f9c, Func Offset: 0xc
	// Line 217, Address: 0x1f8fa4, Func Offset: 0x14
	// Line 218, Address: 0x1f8fac, Func Offset: 0x1c
	// Line 219, Address: 0x1f8fbc, Func Offset: 0x2c
	// Line 220, Address: 0x1f8fc4, Func Offset: 0x34
	// Line 221, Address: 0x1f8fd0, Func Offset: 0x40
	// Line 222, Address: 0x1f8fd8, Func Offset: 0x48
	// Line 223, Address: 0x1f8fe0, Func Offset: 0x50
	// Line 224, Address: 0x1f8fe8, Func Offset: 0x58
	// Line 225, Address: 0x1f8ff0, Func Offset: 0x60
	// Line 227, Address: 0x1f8ff8, Func Offset: 0x68
	// Line 228, Address: 0x1f9008, Func Offset: 0x78
	// Line 230, Address: 0x1f9050, Func Offset: 0xc0
	// Line 231, Address: 0x1f907c, Func Offset: 0xec
	// Line 232, Address: 0x1f9080, Func Offset: 0xf0
	// Line 233, Address: 0x1f9088, Func Offset: 0xf8
	// Func End, Address: 0x1f9098, Func Offset: 0x108
}

// 
// Start address: 0x1f90a0
void EnemyCellDraw(sfObj* obj)
{
	float* pos;
	float* rot;
	float tpos[4];
	float vec[4];
	float def[4];
	float ppos[4][9];
	float ppp[4];
	float nom[4];
	float light[4];
	EnemyClHitResult* cres;
	EnemyCellWork* ew;
	EnemyTexParameter tex;
	int i;
	float d;
	int f;
	// Line 237, Address: 0x1f90a0, Func Offset: 0
	// Line 247, Address: 0x1f90c4, Func Offset: 0x24
	// Line 248, Address: 0x1f90d4, Func Offset: 0x34
	// Line 249, Address: 0x1f90dc, Func Offset: 0x3c
	// Line 250, Address: 0x1f90e8, Func Offset: 0x48
	// Line 251, Address: 0x1f90f4, Func Offset: 0x54
	// Line 252, Address: 0x1f9100, Func Offset: 0x60
	// Line 253, Address: 0x1f910c, Func Offset: 0x6c
	// Line 254, Address: 0x1f9124, Func Offset: 0x84
	// Line 255, Address: 0x1f9130, Func Offset: 0x90
	// Line 256, Address: 0x1f914c, Func Offset: 0xac
	// Line 255, Address: 0x1f9150, Func Offset: 0xb0
	// Line 256, Address: 0x1f9154, Func Offset: 0xb4
	// Line 257, Address: 0x1f916c, Func Offset: 0xcc
	// Line 256, Address: 0x1f9170, Func Offset: 0xd0
	// Line 257, Address: 0x1f9174, Func Offset: 0xd4
	// Line 258, Address: 0x1f918c, Func Offset: 0xec
	// Line 257, Address: 0x1f9190, Func Offset: 0xf0
	// Line 258, Address: 0x1f9194, Func Offset: 0xf4
	// Line 260, Address: 0x1f919c, Func Offset: 0xfc
	// Line 259, Address: 0x1f91a0, Func Offset: 0x100
	// Line 260, Address: 0x1f91a8, Func Offset: 0x108
	// Line 262, Address: 0x1f91cc, Func Offset: 0x12c
	// Line 263, Address: 0x1f91d0, Func Offset: 0x130
	// Line 265, Address: 0x1f91f8, Func Offset: 0x158
	// Line 266, Address: 0x1f9200, Func Offset: 0x160
	// Line 268, Address: 0x1f9208, Func Offset: 0x168
	// Line 272, Address: 0x1f926c, Func Offset: 0x1cc
	// Line 273, Address: 0x1f9270, Func Offset: 0x1d0
	// Line 274, Address: 0x1f9278, Func Offset: 0x1d8
	// Line 278, Address: 0x1f9280, Func Offset: 0x1e0
	// Line 283, Address: 0x1f92c0, Func Offset: 0x220
	// Line 284, Address: 0x1f92c8, Func Offset: 0x228
	// Line 285, Address: 0x1f92cc, Func Offset: 0x22c
	// Line 283, Address: 0x1f92d0, Func Offset: 0x230
	// Line 286, Address: 0x1f92d4, Func Offset: 0x234
	// Line 283, Address: 0x1f92d8, Func Offset: 0x238
	// Line 284, Address: 0x1f92dc, Func Offset: 0x23c
	// Line 285, Address: 0x1f92e0, Func Offset: 0x240
	// Line 286, Address: 0x1f92e4, Func Offset: 0x244
	// Line 283, Address: 0x1f92e8, Func Offset: 0x248
	// Line 284, Address: 0x1f92ec, Func Offset: 0x24c
	// Line 285, Address: 0x1f92f0, Func Offset: 0x250
	// Line 293, Address: 0x1f92f4, Func Offset: 0x254
	// Line 294, Address: 0x1f92f8, Func Offset: 0x258
	// Line 295, Address: 0x1f931c, Func Offset: 0x27c
	// Line 296, Address: 0x1f9334, Func Offset: 0x294
	// Line 297, Address: 0x1f9340, Func Offset: 0x2a0
	// Line 299, Address: 0x1f935c, Func Offset: 0x2bc
	// Line 300, Address: 0x1f9368, Func Offset: 0x2c8
	// Line 302, Address: 0x1f9380, Func Offset: 0x2e0
	// Line 303, Address: 0x1f9388, Func Offset: 0x2e8
	// Line 304, Address: 0x1f93a8, Func Offset: 0x308
	// Line 305, Address: 0x1f93b4, Func Offset: 0x314
	// Line 308, Address: 0x1f93b8, Func Offset: 0x318
	// Line 309, Address: 0x1f93e0, Func Offset: 0x340
	// Line 310, Address: 0x1f93ec, Func Offset: 0x34c
	// Line 311, Address: 0x1f93f8, Func Offset: 0x358
	// Line 313, Address: 0x1f9418, Func Offset: 0x378
	// Line 314, Address: 0x1f9424, Func Offset: 0x384
	// Line 315, Address: 0x1f9450, Func Offset: 0x3b0
	// Line 317, Address: 0x1f946c, Func Offset: 0x3cc
	// Line 316, Address: 0x1f9474, Func Offset: 0x3d4
	// Line 317, Address: 0x1f9478, Func Offset: 0x3d8
	// Line 318, Address: 0x1f9480, Func Offset: 0x3e0
	// Line 319, Address: 0x1f9498, Func Offset: 0x3f8
	// Line 320, Address: 0x1f94c4, Func Offset: 0x424
	// Line 321, Address: 0x1f94dc, Func Offset: 0x43c
	// Line 324, Address: 0x1f9514, Func Offset: 0x474
	// Line 325, Address: 0x1f951c, Func Offset: 0x47c
	// Line 326, Address: 0x1f9520, Func Offset: 0x480
	// Line 329, Address: 0x1f9550, Func Offset: 0x4b0
	// Line 331, Address: 0x1f9558, Func Offset: 0x4b8
	// Line 332, Address: 0x1f9564, Func Offset: 0x4c4
	// Line 333, Address: 0x1f9590, Func Offset: 0x4f0
	// Line 335, Address: 0x1f95ac, Func Offset: 0x50c
	// Line 334, Address: 0x1f95b4, Func Offset: 0x514
	// Line 335, Address: 0x1f95b8, Func Offset: 0x518
	// Line 336, Address: 0x1f95c0, Func Offset: 0x520
	// Line 337, Address: 0x1f95d8, Func Offset: 0x538
	// Line 338, Address: 0x1f9604, Func Offset: 0x564
	// Line 339, Address: 0x1f961c, Func Offset: 0x57c
	// Line 344, Address: 0x1f9654, Func Offset: 0x5b4
	// Line 345, Address: 0x1f9658, Func Offset: 0x5b8
	// Line 346, Address: 0x1f9660, Func Offset: 0x5c0
	// Line 348, Address: 0x1f9668, Func Offset: 0x5c8
	// Func End, Address: 0x1f9690, Func Offset: 0x5f0
}

// 
// Start address: 0x1f9690
void EnemyCellDestruct(sfObj* obj)
{
	// Line 352, Address: 0x1f9690, Func Offset: 0
	// Line 353, Address: 0x1f969c, Func Offset: 0xc
	// Line 354, Address: 0x1f96a4, Func Offset: 0x14
	// Line 355, Address: 0x1f96b4, Func Offset: 0x24
	// Line 357, Address: 0x1f96b8, Func Offset: 0x28
	// Line 361, Address: 0x1f96c0, Func Offset: 0x30
	// Line 362, Address: 0x1f96c8, Func Offset: 0x38
	// Line 363, Address: 0x1f96d0, Func Offset: 0x40
	// Func End, Address: 0x1f96e0, Func Offset: 0x50
}

// 
// Start address: 0x1f96e0
void EnemyCellDataPreserve(sfObj* obj)
{
	EnemyManageDataOne* pe;
	// Line 367, Address: 0x1f96e0, Func Offset: 0
	// Line 369, Address: 0x1f96ec, Func Offset: 0xc
	// Line 370, Address: 0x1f96f4, Func Offset: 0x14
	// Line 369, Address: 0x1f96f8, Func Offset: 0x18
	// Line 370, Address: 0x1f96fc, Func Offset: 0x1c
	// Line 371, Address: 0x1f9704, Func Offset: 0x24
	// Line 372, Address: 0x1f970c, Func Offset: 0x2c
	// Func End, Address: 0x1f971c, Func Offset: 0x3c
}

// 
// Start address: 0x1f9720
void EnemyCellDataExtract(sfObj* obj)
{
	EnemyManageDataOne* pe;
	// Line 376, Address: 0x1f9720, Func Offset: 0
	// Line 378, Address: 0x1f9730, Func Offset: 0x10
	// Line 379, Address: 0x1f9744, Func Offset: 0x24
	// Line 380, Address: 0x1f9750, Func Offset: 0x30
	// Line 383, Address: 0x1f9758, Func Offset: 0x38
	// Line 384, Address: 0x1f9764, Func Offset: 0x44
	// Func End, Address: 0x1f9778, Func Offset: 0x58
}

// 
// Start address: 0x1f9780
void EnemyCellControl(sfObj* obj)
{
	// Line 403, Address: 0x1f9780, Func Offset: 0
	// Line 406, Address: 0x1f978c, Func Offset: 0xc
	// Line 407, Address: 0x1f97cc, Func Offset: 0x4c
	// Line 408, Address: 0x1f97d0, Func Offset: 0x50
	// Line 409, Address: 0x1f97d8, Func Offset: 0x58
	// Line 411, Address: 0x1f97e0, Func Offset: 0x60
	// Line 412, Address: 0x1f97e8, Func Offset: 0x68
	// Line 415, Address: 0x1f97f0, Func Offset: 0x70
	// Line 416, Address: 0x1f97f8, Func Offset: 0x78
	// Line 418, Address: 0x1f9800, Func Offset: 0x80
	// Line 424, Address: 0x1f9808, Func Offset: 0x88
	// Line 427, Address: 0x1f9834, Func Offset: 0xb4
	// Line 428, Address: 0x1f983c, Func Offset: 0xbc
	// Line 429, Address: 0x1f9840, Func Offset: 0xc0
	// Func End, Address: 0x1f9850, Func Offset: 0xd0
}

// 
// Start address: 0x1f9850
void EnemyCellControlInit(sfObj* obj)
{
	EnemyCellWork* ew;
	// Line 433, Address: 0x1f9850, Func Offset: 0
	// Line 435, Address: 0x1f985c, Func Offset: 0xc
	// Line 436, Address: 0x1f9864, Func Offset: 0x14
	// Line 437, Address: 0x1f9874, Func Offset: 0x24
	// Line 438, Address: 0x1f9878, Func Offset: 0x28
	// Line 439, Address: 0x1f987c, Func Offset: 0x2c
	// Line 440, Address: 0x1f9880, Func Offset: 0x30
	// Line 441, Address: 0x1f9884, Func Offset: 0x34
	// Func End, Address: 0x1f9894, Func Offset: 0x44
}

// 
// Start address: 0x1f98a0
void EnemyCellControlWander(sfObj* obj)
{
	EnemyCellWork* ew;
	float vec[4];
	float rot[4];
	float rot2[4];
	float speed;
	float dt;
	sfObj* eobj;
	// Line 445, Address: 0x1f98a0, Func Offset: 0
	// Line 451, Address: 0x1f98b8, Func Offset: 0x18
	// Line 452, Address: 0x1f98c0, Func Offset: 0x20
	// Line 453, Address: 0x1f98cc, Func Offset: 0x2c
	// Line 455, Address: 0x1f98f8, Func Offset: 0x58
	// Line 456, Address: 0x1f9900, Func Offset: 0x60
	// Line 459, Address: 0x1f9908, Func Offset: 0x68
	// Line 460, Address: 0x1f992c, Func Offset: 0x8c
	// Line 461, Address: 0x1f9940, Func Offset: 0xa0
	// Line 460, Address: 0x1f9944, Func Offset: 0xa4
	// Line 461, Address: 0x1f9954, Func Offset: 0xb4
	// Line 463, Address: 0x1f995c, Func Offset: 0xbc
	// Line 464, Address: 0x1f9964, Func Offset: 0xc4
	// Line 465, Address: 0x1f9968, Func Offset: 0xc8
	// Line 466, Address: 0x1f9984, Func Offset: 0xe4
	// Line 470, Address: 0x1f9988, Func Offset: 0xe8
	// Line 467, Address: 0x1f998c, Func Offset: 0xec
	// Line 468, Address: 0x1f9990, Func Offset: 0xf0
	// Line 470, Address: 0x1f9994, Func Offset: 0xf4
	// Line 473, Address: 0x1f999c, Func Offset: 0xfc
	// Line 475, Address: 0x1f99a0, Func Offset: 0x100
	// Line 476, Address: 0x1f99b0, Func Offset: 0x110
	// Line 477, Address: 0x1f99d0, Func Offset: 0x130
	// Line 478, Address: 0x1f99e4, Func Offset: 0x144
	// Line 479, Address: 0x1f99e8, Func Offset: 0x148
	// Line 483, Address: 0x1f99f0, Func Offset: 0x150
	// Line 484, Address: 0x1f99f8, Func Offset: 0x158
	// Line 485, Address: 0x1f9a0c, Func Offset: 0x16c
	// Line 487, Address: 0x1f9a44, Func Offset: 0x1a4
	// Line 488, Address: 0x1f9a50, Func Offset: 0x1b0
	// Line 492, Address: 0x1f9a90, Func Offset: 0x1f0
	// Line 493, Address: 0x1f9a9c, Func Offset: 0x1fc
	// Line 494, Address: 0x1f9aa8, Func Offset: 0x208
	// Line 495, Address: 0x1f9ad4, Func Offset: 0x234
	// Line 496, Address: 0x1f9ae4, Func Offset: 0x244
	// Line 497, Address: 0x1f9af0, Func Offset: 0x250
	// Line 498, Address: 0x1f9afc, Func Offset: 0x25c
	// Line 499, Address: 0x1f9b0c, Func Offset: 0x26c
	// Line 498, Address: 0x1f9b10, Func Offset: 0x270
	// Line 499, Address: 0x1f9b14, Func Offset: 0x274
	// Line 498, Address: 0x1f9b34, Func Offset: 0x294
	// Line 499, Address: 0x1f9b38, Func Offset: 0x298
	// Line 501, Address: 0x1f9b5c, Func Offset: 0x2bc
	// Line 502, Address: 0x1f9b78, Func Offset: 0x2d8
	// Line 503, Address: 0x1f9b88, Func Offset: 0x2e8
	// Line 504, Address: 0x1f9bac, Func Offset: 0x30c
	// Line 505, Address: 0x1f9bb8, Func Offset: 0x318
	// Line 507, Address: 0x1f9bd8, Func Offset: 0x338
	// Line 508, Address: 0x1f9c04, Func Offset: 0x364
	// Line 509, Address: 0x1f9c10, Func Offset: 0x370
	// Line 511, Address: 0x1f9c34, Func Offset: 0x394
	// Line 512, Address: 0x1f9c3c, Func Offset: 0x39c
	// Line 514, Address: 0x1f9c48, Func Offset: 0x3a8
	// Line 515, Address: 0x1f9c58, Func Offset: 0x3b8
	// Line 516, Address: 0x1f9c60, Func Offset: 0x3c0
	// Line 518, Address: 0x1f9c98, Func Offset: 0x3f8
	// Line 522, Address: 0x1f9ca0, Func Offset: 0x400
	// Func End, Address: 0x1f9cbc, Func Offset: 0x41c
}

// 
// Start address: 0x1f9cc0
void EnemyCellControlApproach(sfObj* obj)
{
	EnemyCellWork* ew;
	float* pos;
	float* ppos;
	float vec[4];
	float rot[4];
	float rot2[4];
	float dir;
	float speed;
	float dt;
	sfObj* eobj;
	// Line 526, Address: 0x1f9cc0, Func Offset: 0
	// Line 532, Address: 0x1f9ce0, Func Offset: 0x20
	// Line 533, Address: 0x1f9ce8, Func Offset: 0x28
	// Line 534, Address: 0x1f9cf4, Func Offset: 0x34
	// Line 535, Address: 0x1f9d00, Func Offset: 0x40
	// Line 536, Address: 0x1f9d0c, Func Offset: 0x4c
	// Line 537, Address: 0x1f9d20, Func Offset: 0x60
	// Line 538, Address: 0x1f9d28, Func Offset: 0x68
	// Line 540, Address: 0x1f9d30, Func Offset: 0x70
	// Line 541, Address: 0x1f9d3c, Func Offset: 0x7c
	// Line 542, Address: 0x1f9d44, Func Offset: 0x84
	// Line 543, Address: 0x1f9d4c, Func Offset: 0x8c
	// Line 544, Address: 0x1f9d54, Func Offset: 0x94
	// Line 545, Address: 0x1f9d58, Func Offset: 0x98
	// Line 546, Address: 0x1f9d64, Func Offset: 0xa4
	// Line 547, Address: 0x1f9d68, Func Offset: 0xa8
	// Line 549, Address: 0x1f9d80, Func Offset: 0xc0
	// Line 550, Address: 0x1f9d8c, Func Offset: 0xcc
	// Line 552, Address: 0x1f9d94, Func Offset: 0xd4
	// Line 553, Address: 0x1f9d98, Func Offset: 0xd8
	// Line 554, Address: 0x1f9db0, Func Offset: 0xf0
	// Line 555, Address: 0x1f9dbc, Func Offset: 0xfc
	// Line 556, Address: 0x1f9dd8, Func Offset: 0x118
	// Line 555, Address: 0x1f9e08, Func Offset: 0x148
	// Line 556, Address: 0x1f9e0c, Func Offset: 0x14c
	// Line 558, Address: 0x1f9e14, Func Offset: 0x154
	// Line 559, Address: 0x1f9e20, Func Offset: 0x160
	// Line 560, Address: 0x1f9e4c, Func Offset: 0x18c
	// Line 561, Address: 0x1f9e5c, Func Offset: 0x19c
	// Line 562, Address: 0x1f9e68, Func Offset: 0x1a8
	// Line 563, Address: 0x1f9e74, Func Offset: 0x1b4
	// Line 564, Address: 0x1f9e84, Func Offset: 0x1c4
	// Line 563, Address: 0x1f9e88, Func Offset: 0x1c8
	// Line 564, Address: 0x1f9e8c, Func Offset: 0x1cc
	// Line 563, Address: 0x1f9eac, Func Offset: 0x1ec
	// Line 564, Address: 0x1f9eb0, Func Offset: 0x1f0
	// Line 566, Address: 0x1f9ed4, Func Offset: 0x214
	// Line 567, Address: 0x1f9ef0, Func Offset: 0x230
	// Line 568, Address: 0x1f9f00, Func Offset: 0x240
	// Line 569, Address: 0x1f9f24, Func Offset: 0x264
	// Line 570, Address: 0x1f9f30, Func Offset: 0x270
	// Line 572, Address: 0x1f9f50, Func Offset: 0x290
	// Line 573, Address: 0x1f9f7c, Func Offset: 0x2bc
	// Line 574, Address: 0x1f9f88, Func Offset: 0x2c8
	// Line 575, Address: 0x1f9fac, Func Offset: 0x2ec
	// Line 576, Address: 0x1f9fb4, Func Offset: 0x2f4
	// Line 577, Address: 0x1f9fb8, Func Offset: 0x2f8
	// Func End, Address: 0x1f9fdc, Func Offset: 0x31c
}

// 
// Start address: 0x1f9fe0
void EnemyCellControlEscape()
{
	// Line 582, Address: 0x1f9fe0, Func Offset: 0
	// Func End, Address: 0x1f9fe8, Func Offset: 0x8
}

// 
// Start address: 0x1f9ff0
void EnemyCellControlDead()
{
	// Line 588, Address: 0x1f9ff0, Func Offset: 0
	// Func End, Address: 0x1f9ff8, Func Offset: 0x8
}

// 
// Start address: 0x1fa000
void EnemyCellSkeletonControl(sfObj* obj)
{
	EnemyCellWork* ew;
	float ppos[4];
	float vec[4];
	float uvec[4];
	float rot[4];
	float rrot[4];
	float d;
	float ang;
	float pang;
	float dist;
	float lim;
	float* psd;
	float* psl;
	int i;
	// Line 592, Address: 0x1fa000, Func Offset: 0
	// Line 600, Address: 0x1fa024, Func Offset: 0x24
	// Line 601, Address: 0x1fa038, Func Offset: 0x38
	// Line 602, Address: 0x1fa044, Func Offset: 0x44
	// Line 603, Address: 0x1fa050, Func Offset: 0x50
	// Line 610, Address: 0x1fa05c, Func Offset: 0x5c
	// Line 611, Address: 0x1fa068, Func Offset: 0x68
	// Line 612, Address: 0x1fa074, Func Offset: 0x74
	// Line 613, Address: 0x1fa078, Func Offset: 0x78
	// Line 614, Address: 0x1fa08c, Func Offset: 0x8c
	// Line 615, Address: 0x1fa090, Func Offset: 0x90
	// Line 616, Address: 0x1fa094, Func Offset: 0x94
	// Line 617, Address: 0x1fa09c, Func Offset: 0x9c
	// Line 618, Address: 0x1fa0a0, Func Offset: 0xa0
	// Line 621, Address: 0x1fa0a8, Func Offset: 0xa8
	// Line 622, Address: 0x1fa0b0, Func Offset: 0xb0
	// Line 623, Address: 0x1fa0b8, Func Offset: 0xb8
	// Line 624, Address: 0x1fa0bc, Func Offset: 0xbc
	// Line 623, Address: 0x1fa0c0, Func Offset: 0xc0
	// Line 625, Address: 0x1fa0c4, Func Offset: 0xc4
	// Line 626, Address: 0x1fa0cc, Func Offset: 0xcc
	// Line 627, Address: 0x1fa0d0, Func Offset: 0xd0
	// Line 628, Address: 0x1fa0d8, Func Offset: 0xd8
	// Line 629, Address: 0x1fa100, Func Offset: 0x100
	// Line 630, Address: 0x1fa110, Func Offset: 0x110
	// Line 631, Address: 0x1fa118, Func Offset: 0x118
	// Line 632, Address: 0x1fa12c, Func Offset: 0x12c
	// Line 634, Address: 0x1fa138, Func Offset: 0x138
	// Line 635, Address: 0x1fa144, Func Offset: 0x144
	// Line 636, Address: 0x1fa168, Func Offset: 0x168
	// Line 637, Address: 0x1fa178, Func Offset: 0x178
	// Line 638, Address: 0x1fa198, Func Offset: 0x198
	// Line 639, Address: 0x1fa1e0, Func Offset: 0x1e0
	// Line 641, Address: 0x1fa1f8, Func Offset: 0x1f8
	// Line 642, Address: 0x1fa20c, Func Offset: 0x20c
	// Func End, Address: 0x1fa238, Func Offset: 0x238
}

// 
// Start address: 0x1fa240
void EnemyCellHitCheck(sfObj* obj)
{
	// Line 646, Address: 0x1fa240, Func Offset: 0
	// Line 647, Address: 0x1fa24c, Func Offset: 0xc
	// Line 648, Address: 0x1fa254, Func Offset: 0x14
	// Line 649, Address: 0x1fa25c, Func Offset: 0x1c
	// Func End, Address: 0x1fa26c, Func Offset: 0x2c
}

// 
// Start address: 0x1fa270
void EnemyCellCheckLimit(sfObj* obj)
{
	float* pos;
	int stage;
	int scene;
	_anon0* limit;
	// Line 653, Address: 0x1fa270, Func Offset: 0
	// Line 657, Address: 0x1fa288, Func Offset: 0x18
	// Line 658, Address: 0x1fa290, Func Offset: 0x20
	// Line 659, Address: 0x1fa29c, Func Offset: 0x2c
	// Line 660, Address: 0x1fa2a8, Func Offset: 0x38
	// Line 661, Address: 0x1fa2bc, Func Offset: 0x4c
	// Line 663, Address: 0x1fa2d8, Func Offset: 0x68
	// Line 664, Address: 0x1fa2e4, Func Offset: 0x74
	// Line 666, Address: 0x1fa2e8, Func Offset: 0x78
	// Line 668, Address: 0x1fa308, Func Offset: 0x98
	// Line 669, Address: 0x1fa31c, Func Offset: 0xac
	// Line 670, Address: 0x1fa320, Func Offset: 0xb0
	// Line 673, Address: 0x1fa334, Func Offset: 0xc4
	// Line 674, Address: 0x1fa33c, Func Offset: 0xcc
	// Line 675, Address: 0x1fa340, Func Offset: 0xd0
	// Line 677, Address: 0x1fa390, Func Offset: 0x120
	// Line 678, Address: 0x1fa394, Func Offset: 0x124
	// Line 679, Address: 0x1fa39c, Func Offset: 0x12c
	// Line 680, Address: 0x1fa3a0, Func Offset: 0x130
	// Line 681, Address: 0x1fa3a4, Func Offset: 0x134
	// Line 687, Address: 0x1fa3ac, Func Offset: 0x13c
	// Line 688, Address: 0x1fa3b0, Func Offset: 0x140
	// Line 689, Address: 0x1fa3b4, Func Offset: 0x144
	// Line 690, Address: 0x1fa3bc, Func Offset: 0x14c
	// Line 691, Address: 0x1fa3c0, Func Offset: 0x150
	// Line 692, Address: 0x1fa3c4, Func Offset: 0x154
	// Line 693, Address: 0x1fa3cc, Func Offset: 0x15c
	// Line 694, Address: 0x1fa3d0, Func Offset: 0x160
	// Line 695, Address: 0x1fa3d4, Func Offset: 0x164
	// Line 696, Address: 0x1fa3dc, Func Offset: 0x16c
	// Line 697, Address: 0x1fa3e0, Func Offset: 0x170
	// Line 698, Address: 0x1fa3e4, Func Offset: 0x174
	// Line 699, Address: 0x1fa3ec, Func Offset: 0x17c
	// Line 700, Address: 0x1fa3f0, Func Offset: 0x180
	// Line 702, Address: 0x1fa400, Func Offset: 0x190
	// Line 703, Address: 0x1fa408, Func Offset: 0x198
	// Line 709, Address: 0x1fa410, Func Offset: 0x1a0
	// Line 710, Address: 0x1fa418, Func Offset: 0x1a8
	// Line 712, Address: 0x1fa420, Func Offset: 0x1b0
	// Func End, Address: 0x1fa43c, Func Offset: 0x1cc
}

// 
// Start address: 0x1fa440
void EnemyCellTexAnime(sfObj* obj)
{
	EnemyCellWork* ew;
	// Line 716, Address: 0x1fa440, Func Offset: 0
	// Line 718, Address: 0x1fa448, Func Offset: 0x8
	// Line 719, Address: 0x1fa450, Func Offset: 0x10
	// Line 720, Address: 0x1fa45c, Func Offset: 0x1c
	// Line 719, Address: 0x1fa46c, Func Offset: 0x2c
	// Line 720, Address: 0x1fa470, Func Offset: 0x30
	// Line 721, Address: 0x1fa47c, Func Offset: 0x3c
	// Line 722, Address: 0x1fa484, Func Offset: 0x44
	// Line 724, Address: 0x1fa490, Func Offset: 0x50
	// Func End, Address: 0x1fa4a0, Func Offset: 0x60
}

