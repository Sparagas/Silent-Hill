typedef struct sfObj;
typedef enum EnemyKind : unsigned char;
typedef union _anon0;
typedef enum EnemySeKind : unsigned char;

typedef void(*type_1)(sfObj*);
typedef void(*type_2)(sfObj*);
typedef void(*type_5)(sfObj*);
typedef void(*type_9)(sfObj*);

typedef _anon0 type_0[256];
typedef void(*type_3)(sfObj*)[19];
typedef short type_4[2];
typedef unsigned short type_6[2];
typedef char type_7[4];
typedef unsigned char type_8[4];
typedef void(*type_10)(sfObj*)[19];
typedef float type_11[1];
typedef int type_12[1];

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

enum EnemySeKind : unsigned char
{
	ENEMY_SE_KIND_NOTHING,
	ENEMY_SE_KIND_CELL,
	ENEMY_SE_KIND_MUSH,
	ENEMY_SE_KIND_BUZZ,
	ENEMY_SE_KIND_MM,
	ENEMY_SE_KIND_WALLMAN,
	ENEMY_SE_KIND_WHEEL,
	ENEMY_SE_KIND_JINMEN,
	ENEMY_SE_KIND_TWINS,
	ENEMY_SE_KIND_HIL,
	ENEMY_SE_KIND_HYENA,
	ENEMY_SE_KIND_MULTI,
	ENEMY_SE_KIND_PICKGIRL,
	ENEMY_SE_KIND_FLAMES,
	ENEMY_SE_KIND_FAT,
	ENEMY_SE_KIND_SCRATCH,
	ENEMY_SE_KIND_KILLER0,
	ENEMY_SE_KIND_KILLER1,
	ENEMY_SE_KIND_KILLER2,
	ENEMY_SE_KIND_KILLER3,
	ENEMY_SE_KIND_NURSE,
	ENEMY_SE_KIND_MAX
};

void(*preserve_func)(sfObj*)[19];
void(*extract_func)(sfObj*)[19];

void EnemyKindExecuteWaiting(void* data, EnemyKind kind);
void EnemyKindDataPreserve(sfObj* obj, EnemyKind kind);
int EnemyIsGhost(EnemyKind kind);
int EnemyCanSprout(EnemyKind kind);
EnemySeKind EnemyGetSeKind(EnemyKind kind, int type);

// 
// Start address: 0x19ba50
void EnemyKindExecuteWaiting(void* data, EnemyKind kind)
{
	// Line 84, Address: 0x19ba50, Func Offset: 0
	// Line 85, Address: 0x19ba54, Func Offset: 0x4
	// Line 86, Address: 0x19ba5c, Func Offset: 0xc
	// Line 91, Address: 0x19ba8c, Func Offset: 0x3c
	// Line 92, Address: 0x19ba90, Func Offset: 0x40
	// Line 93, Address: 0x19ba98, Func Offset: 0x48
	// Line 97, Address: 0x19baa0, Func Offset: 0x50
	// Line 100, Address: 0x19baa8, Func Offset: 0x58
	// Func End, Address: 0x19bab4, Func Offset: 0x64
}

// 
// Start address: 0x19bac0
void EnemyKindDataPreserve(sfObj* obj, EnemyKind kind)
{
	// Line 107, Address: 0x19bac0, Func Offset: 0
	// Line 108, Address: 0x19bac4, Func Offset: 0x4
	// Line 109, Address: 0x19bacc, Func Offset: 0xc
	// Line 110, Address: 0x19baf0, Func Offset: 0x30
	// Line 111, Address: 0x19baf8, Func Offset: 0x38
	// Line 113, Address: 0x19bb00, Func Offset: 0x40
	// Func End, Address: 0x19bb0c, Func Offset: 0x4c
}

// 
// Start address: 0x19bb10
int EnemyIsGhost(EnemyKind kind)
{
	int r;
	// Line 135, Address: 0x19bb10, Func Offset: 0
	// Line 141, Address: 0x19bb50, Func Offset: 0x40
	// Line 142, Address: 0x19bb54, Func Offset: 0x44
	// Line 144, Address: 0x19bb58, Func Offset: 0x48
	// Func End, Address: 0x19bb60, Func Offset: 0x50
}

// 
// Start address: 0x19bb60
int EnemyCanSprout(EnemyKind kind)
{
	int r;
	// Line 153, Address: 0x19bb60, Func Offset: 0
	// Line 156, Address: 0x19bb8c, Func Offset: 0x2c
	// Line 157, Address: 0x19bb90, Func Offset: 0x30
	// Line 158, Address: 0x19bb94, Func Offset: 0x34
	// Line 160, Address: 0x19bb98, Func Offset: 0x38
	// Func End, Address: 0x19bba0, Func Offset: 0x40
}

// 
// Start address: 0x19bba0
EnemySeKind EnemyGetSeKind(EnemyKind kind, int type)
{
	// Line 168, Address: 0x19bba4, Func Offset: 0x4
	// Line 169, Address: 0x19bbb8, Func Offset: 0x18
	// Line 171, Address: 0x19bbc0, Func Offset: 0x20
	// Line 172, Address: 0x19bbd8, Func Offset: 0x38
	// Line 173, Address: 0x19bbf0, Func Offset: 0x50
	// Line 175, Address: 0x19bc28, Func Offset: 0x88
	// Line 179, Address: 0x19bc30, Func Offset: 0x90
	// Line 181, Address: 0x19bc38, Func Offset: 0x98
	// Line 183, Address: 0x19bc40, Func Offset: 0xa0
	// Line 184, Address: 0x19bc48, Func Offset: 0xa8
	// Func End, Address: 0x19bc50, Func Offset: 0xb0
}

