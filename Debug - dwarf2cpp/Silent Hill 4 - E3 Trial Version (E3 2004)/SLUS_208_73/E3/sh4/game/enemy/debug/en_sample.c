typedef struct EnemySearchData;
typedef struct EnemySearchPoint;
typedef struct EnemySampleWork;
typedef struct EnemyManageDataOne;
typedef enum EnemyCondition : unsigned char;
typedef struct _anon0;
typedef struct sfObj;
typedef union _anon1;
typedef enum EnemyManageEntryType : unsigned char;

typedef void(*type_4)(sfObj*);
typedef void(*type_5)(sfObj*);

typedef float type_0[4];
typedef _anon1 type_1[4];
typedef float type_2[4];
typedef _anon1 type_3[256];
typedef short type_6[2];
typedef unsigned short type_7[2];
typedef char type_8[4];
typedef unsigned char type_9[4];
typedef float type_10[1];
typedef int type_11[1];

struct EnemySearchData
{
};

struct EnemySearchPoint
{
};

struct EnemySampleWork
{
	EnemySearchData* search;
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
	float center[4];
	float radius;
};

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

enum EnemyManageEntryType : unsigned char
{
	ENEMY_MANAGE_ENTRY_TYPE_APPEAR,
	ENEMY_MANAGE_ENTRY_TYPE_FLAG_WAIT,
	ENEMY_MANAGE_ENTRY_TYPE_DIFFERENT_LEVEL,
	ENEMY_MANAGE_ENTRY_TYPE_ERASED,
	ENEMY_MANAGE_ENTRY_TYPE_ALREADY,
	ENEMY_MANAGE_ENTRY_TYPE_ANOTHER_SCENE
};

int use_new_collision;

void EnemySampleConstruct(sfObj* obj);
void EnemySampleHandle(sfObj* obj);
void EnemySampleDraw(sfObj* obj);
void EnemySampleDestruct(sfObj* obj);
void EnemySampleDataPreserve(sfObj* obj);
void EnemySampleDataExtract(sfObj* obj);
void EnemySampleControl(sfObj* obj);
void EnemySampleControlChase(sfObj* obj);
void EnemySampleControlDead();
void EnemySampleHitCheck(sfObj* obj);

// 
// Start address: 0x1a7310
void EnemySampleConstruct(sfObj* obj)
{
	EnemySampleWork* ew;
	EnemyManageEntryType etype;
	// Line 34, Address: 0x1a7310, Func Offset: 0
	// Line 38, Address: 0x1a7314, Func Offset: 0x4
	// Line 34, Address: 0x1a7318, Func Offset: 0x8
	// Line 38, Address: 0x1a732c, Func Offset: 0x1c
	// Line 40, Address: 0x1a7334, Func Offset: 0x24
	// Line 41, Address: 0x1a7340, Func Offset: 0x30
	// Line 43, Address: 0x1a7358, Func Offset: 0x48
	// Line 44, Address: 0x1a7360, Func Offset: 0x50
	// Line 47, Address: 0x1a7368, Func Offset: 0x58
	// Line 49, Address: 0x1a7378, Func Offset: 0x68
	// Line 50, Address: 0x1a7388, Func Offset: 0x78
	// Line 51, Address: 0x1a7390, Func Offset: 0x80
	// Line 53, Address: 0x1a73bc, Func Offset: 0xac
	// Line 54, Address: 0x1a73c8, Func Offset: 0xb8
	// Line 55, Address: 0x1a73d8, Func Offset: 0xc8
	// Line 56, Address: 0x1a73e4, Func Offset: 0xd4
	// Line 60, Address: 0x1a7404, Func Offset: 0xf4
	// Line 62, Address: 0x1a740c, Func Offset: 0xfc
	// Line 64, Address: 0x1a7418, Func Offset: 0x108
	// Line 66, Address: 0x1a7420, Func Offset: 0x110
	// Line 67, Address: 0x1a742c, Func Offset: 0x11c
	// Func End, Address: 0x1a744c, Func Offset: 0x13c
}

// 
// Start address: 0x1a7450
void EnemySampleHandle(sfObj* obj)
{
	EnemyCondition cond;
	// Line 71, Address: 0x1a7450, Func Offset: 0
	// Line 73, Address: 0x1a745c, Func Offset: 0xc
	// Line 74, Address: 0x1a7464, Func Offset: 0x14
	// Line 75, Address: 0x1a746c, Func Offset: 0x1c
	// Line 76, Address: 0x1a747c, Func Offset: 0x2c
	// Line 77, Address: 0x1a7484, Func Offset: 0x34
	// Line 78, Address: 0x1a7490, Func Offset: 0x40
	// Line 79, Address: 0x1a7498, Func Offset: 0x48
	// Line 81, Address: 0x1a74a0, Func Offset: 0x50
	// Line 82, Address: 0x1a74a8, Func Offset: 0x58
	// Func End, Address: 0x1a74b8, Func Offset: 0x68
}

// 
// Start address: 0x1a74c0
void EnemySampleDraw(sfObj* obj)
{
	// Line 86, Address: 0x1a74c0, Func Offset: 0
	// Line 87, Address: 0x1a74cc, Func Offset: 0xc
	// Line 88, Address: 0x1a74dc, Func Offset: 0x1c
	// Line 89, Address: 0x1a74e4, Func Offset: 0x24
	// Line 90, Address: 0x1a74f0, Func Offset: 0x30
	// Line 92, Address: 0x1a74f8, Func Offset: 0x38
	// Func End, Address: 0x1a7508, Func Offset: 0x48
}

// 
// Start address: 0x1a7510
void EnemySampleDestruct(sfObj* obj)
{
	EnemySampleWork* ew;
	// Line 96, Address: 0x1a7510, Func Offset: 0
	// Line 98, Address: 0x1a751c, Func Offset: 0xc
	// Line 99, Address: 0x1a7524, Func Offset: 0x14
	// Line 100, Address: 0x1a752c, Func Offset: 0x1c
	// Line 101, Address: 0x1a7534, Func Offset: 0x24
	// Line 102, Address: 0x1a753c, Func Offset: 0x2c
	// Line 104, Address: 0x1a7544, Func Offset: 0x34
	// Line 105, Address: 0x1a754c, Func Offset: 0x3c
	// Line 106, Address: 0x1a7554, Func Offset: 0x44
	// Line 107, Address: 0x1a755c, Func Offset: 0x4c
	// Func End, Address: 0x1a756c, Func Offset: 0x5c
}

// 
// Start address: 0x1a7570
void EnemySampleDataPreserve(sfObj* obj)
{
	EnemyManageDataOne* pe;
	// Line 111, Address: 0x1a7570, Func Offset: 0
	// Line 113, Address: 0x1a7580, Func Offset: 0x10
	// Line 114, Address: 0x1a758c, Func Offset: 0x1c
	// Line 115, Address: 0x1a7598, Func Offset: 0x28
	// Line 116, Address: 0x1a75a4, Func Offset: 0x34
	// Func End, Address: 0x1a75b8, Func Offset: 0x48
}

// 
// Start address: 0x1a75c0
void EnemySampleDataExtract(sfObj* obj)
{
	EnemyManageDataOne* pe;
	// Line 120, Address: 0x1a75c0, Func Offset: 0
	// Line 122, Address: 0x1a75d0, Func Offset: 0x10
	// Line 123, Address: 0x1a75e4, Func Offset: 0x24
	// Line 124, Address: 0x1a75f0, Func Offset: 0x30
	// Line 125, Address: 0x1a75fc, Func Offset: 0x3c
	// Line 128, Address: 0x1a7604, Func Offset: 0x44
	// Line 129, Address: 0x1a7610, Func Offset: 0x50
	// Func End, Address: 0x1a7624, Func Offset: 0x64
}

// 
// Start address: 0x1a7630
void EnemySampleControl(sfObj* obj)
{
	// Line 149, Address: 0x1a7630, Func Offset: 0
	// Line 157, Address: 0x1a763c, Func Offset: 0xc
	// Line 159, Address: 0x1a7660, Func Offset: 0x30
	// Line 162, Address: 0x1a7668, Func Offset: 0x38
	// Line 165, Address: 0x1a7670, Func Offset: 0x40
	// Func End, Address: 0x1a7680, Func Offset: 0x50
}

// 
// Start address: 0x1a7680
void EnemySampleControlChase(sfObj* obj)
{
	float tpos[4];
	float pos[4];
	float vec[4];
	float vec2[4];
	float rot[4];
	EnemySampleWork* ew;
	EnemySearchPoint* esp;
	float dt;
	// Line 169, Address: 0x1a7680, Func Offset: 0
	// Line 177, Address: 0x1a7698, Func Offset: 0x18
	// Line 178, Address: 0x1a76a0, Func Offset: 0x20
	// Line 179, Address: 0x1a76a8, Func Offset: 0x28
	// Line 181, Address: 0x1a76b4, Func Offset: 0x34
	// Line 182, Address: 0x1a76cc, Func Offset: 0x4c
	// Line 183, Address: 0x1a76d0, Func Offset: 0x50
	// Line 184, Address: 0x1a76dc, Func Offset: 0x5c
	// Line 185, Address: 0x1a76e4, Func Offset: 0x64
	// Line 187, Address: 0x1a76ec, Func Offset: 0x6c
	// Line 189, Address: 0x1a76f0, Func Offset: 0x70
	// Line 190, Address: 0x1a76fc, Func Offset: 0x7c
	// Line 191, Address: 0x1a7710, Func Offset: 0x90
	// Line 192, Address: 0x1a771c, Func Offset: 0x9c
	// Line 191, Address: 0x1a7720, Func Offset: 0xa0
	// Line 192, Address: 0x1a7724, Func Offset: 0xa4
	// Line 191, Address: 0x1a7728, Func Offset: 0xa8
	// Line 192, Address: 0x1a7730, Func Offset: 0xb0
	// Line 193, Address: 0x1a7744, Func Offset: 0xc4
	// Line 194, Address: 0x1a774c, Func Offset: 0xcc
	// Line 195, Address: 0x1a7750, Func Offset: 0xd0
	// Line 196, Address: 0x1a7770, Func Offset: 0xf0
	// Line 197, Address: 0x1a779c, Func Offset: 0x11c
	// Line 198, Address: 0x1a77c4, Func Offset: 0x144
	// Line 200, Address: 0x1a77f4, Func Offset: 0x174
	// Line 202, Address: 0x1a7800, Func Offset: 0x180
	// Line 203, Address: 0x1a780c, Func Offset: 0x18c
	// Line 204, Address: 0x1a7818, Func Offset: 0x198
	// Func End, Address: 0x1a7834, Func Offset: 0x1b4
}

// 
// Start address: 0x1a7840
void EnemySampleControlDead()
{
	// Line 210, Address: 0x1a7840, Func Offset: 0
	// Func End, Address: 0x1a7848, Func Offset: 0x8
}

// 
// Start address: 0x1a7850
void EnemySampleHitCheck(sfObj* obj)
{
	float* pos;
	float move[4];
	_anon0 sphere;
	// Line 215, Address: 0x1a7850, Func Offset: 0
	// Line 219, Address: 0x1a7860, Func Offset: 0x10
	// Line 222, Address: 0x1a7868, Func Offset: 0x18
	// Line 226, Address: 0x1a7878, Func Offset: 0x28
	// Line 227, Address: 0x1a7884, Func Offset: 0x34
	// Line 228, Address: 0x1a7890, Func Offset: 0x40
	// Line 229, Address: 0x1a78ac, Func Offset: 0x5c
	// Line 230, Address: 0x1a78b4, Func Offset: 0x64
	// Line 232, Address: 0x1a78f8, Func Offset: 0xa8
	// Line 233, Address: 0x1a7900, Func Offset: 0xb0
	// Line 235, Address: 0x1a7908, Func Offset: 0xb8
	// Line 236, Address: 0x1a7910, Func Offset: 0xc0
	// Line 238, Address: 0x1a7918, Func Offset: 0xc8
	// Line 239, Address: 0x1a7920, Func Offset: 0xd0
	// Line 241, Address: 0x1a7928, Func Offset: 0xd8
	// Line 242, Address: 0x1a7934, Func Offset: 0xe4
	// Line 243, Address: 0x1a793c, Func Offset: 0xec
	// Line 244, Address: 0x1a7940, Func Offset: 0xf0
	// Line 246, Address: 0x1a794c, Func Offset: 0xfc
	// Line 247, Address: 0x1a7950, Func Offset: 0x100
	// Line 248, Address: 0x1a796c, Func Offset: 0x11c
	// Line 249, Address: 0x1a7978, Func Offset: 0x128
	// Line 250, Address: 0x1a7984, Func Offset: 0x134
	// Line 251, Address: 0x1a7990, Func Offset: 0x140
	// Line 252, Address: 0x1a799c, Func Offset: 0x14c
	// Line 253, Address: 0x1a79a0, Func Offset: 0x150
	// Line 254, Address: 0x1a79a8, Func Offset: 0x158
	// Func End, Address: 0x1a79bc, Func Offset: 0x16c
}

