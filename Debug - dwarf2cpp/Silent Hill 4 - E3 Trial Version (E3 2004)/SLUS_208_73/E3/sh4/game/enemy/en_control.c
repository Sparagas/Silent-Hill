typedef struct sfObj;
typedef union _anon0;
typedef struct EnemyControlWork;
typedef enum EnemyKind : unsigned char;

typedef void(*type_0)(sfObj*);
typedef void(*type_1)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef void(*type_4)(sfObj*);

typedef _anon0 type_2[256];
typedef short type_5[2];
typedef unsigned short type_6[2];
typedef char type_7[4];
typedef unsigned char type_8[4];
typedef float type_9[1];
typedef int type_10[1];

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

struct EnemyControlWork
{
	sfObj* objtop;
	sfObj* objlast;
	int num;
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

EnemyControlWork en_control;

void EnemyControlReset();
void EnemyControlEntry(sfObj* obj);
void EnemyControlLeave(sfObj* obj);
void EnemyControlAllDestruct();
int EnemyControlNumber();
int EnemyObjInControl(sfObj* obj);
sfObj* EnemyControlSearchObj(sfObj* obj);
sfObj* EnemyControlSearchObjKind(EnemyKind kind, sfObj* obj);
sfObj* EnemyControlSearchObjID(unsigned int id);

// 
// Start address: 0x1976e0
void EnemyControlReset()
{
	// Line 30, Address: 0x1976e0, Func Offset: 0
	// Func End, Address: 0x1976f0, Func Offset: 0x10
}

// 
// Start address: 0x1976f0
void EnemyControlEntry(sfObj* obj)
{
	sfObj* obj2;
	// Line 37, Address: 0x1976f0, Func Offset: 0
	// Line 39, Address: 0x1976f4, Func Offset: 0x4
	// Line 37, Address: 0x1976f8, Func Offset: 0x8
	// Line 39, Address: 0x197704, Func Offset: 0x14
	// Line 40, Address: 0x197708, Func Offset: 0x18
	// Line 41, Address: 0x197710, Func Offset: 0x20
	// Line 42, Address: 0x197718, Func Offset: 0x28
	// Line 43, Address: 0x197720, Func Offset: 0x30
	// Line 45, Address: 0x197728, Func Offset: 0x38
	// Line 46, Address: 0x197730, Func Offset: 0x40
	// Line 47, Address: 0x197744, Func Offset: 0x54
	// Func End, Address: 0x197754, Func Offset: 0x64
}

// 
// Start address: 0x197760
void EnemyControlLeave(sfObj* obj)
{
	sfObj* obj2;
	sfObj* pre;
	// Line 53, Address: 0x197760, Func Offset: 0
	// Line 55, Address: 0x197764, Func Offset: 0x4
	// Line 53, Address: 0x197768, Func Offset: 0x8
	// Line 55, Address: 0x197778, Func Offset: 0x18
	// Line 57, Address: 0x19777c, Func Offset: 0x1c
	// Line 58, Address: 0x197788, Func Offset: 0x28
	// Line 59, Address: 0x197790, Func Offset: 0x30
	// Line 60, Address: 0x197798, Func Offset: 0x38
	// Line 61, Address: 0x1977ac, Func Offset: 0x4c
	// Line 62, Address: 0x1977b8, Func Offset: 0x58
	// Line 64, Address: 0x1977c8, Func Offset: 0x68
	// Line 65, Address: 0x1977d8, Func Offset: 0x78
	// Line 66, Address: 0x1977dc, Func Offset: 0x7c
	// Line 67, Address: 0x1977e0, Func Offset: 0x80
	// Line 68, Address: 0x1977ec, Func Offset: 0x8c
	// Line 69, Address: 0x1977fc, Func Offset: 0x9c
	// Line 70, Address: 0x197804, Func Offset: 0xa4
	// Line 72, Address: 0x197808, Func Offset: 0xa8
	// Line 73, Address: 0x197814, Func Offset: 0xb4
	// Line 74, Address: 0x197820, Func Offset: 0xc0
	// Func End, Address: 0x197834, Func Offset: 0xd4
}

// 
// Start address: 0x197840
void EnemyControlAllDestruct()
{
	sfObj* obj;
	sfObj* nobj;
	// Line 102, Address: 0x197840, Func Offset: 0
	// Line 104, Address: 0x197844, Func Offset: 0x4
	// Line 102, Address: 0x197848, Func Offset: 0x8
	// Line 104, Address: 0x197854, Func Offset: 0x14
	// Line 105, Address: 0x197858, Func Offset: 0x18
	// Line 106, Address: 0x197860, Func Offset: 0x20
	// Line 107, Address: 0x19786c, Func Offset: 0x2c
	// Line 109, Address: 0x197874, Func Offset: 0x34
	// Line 110, Address: 0x197880, Func Offset: 0x40
	// Line 111, Address: 0x197888, Func Offset: 0x48
	// Func End, Address: 0x19789c, Func Offset: 0x5c
}

// 
// Start address: 0x1978a0
int EnemyControlNumber()
{
	// Line 118, Address: 0x1978a0, Func Offset: 0
	// Line 119, Address: 0x1978a4, Func Offset: 0x4
	// Func End, Address: 0x1978ac, Func Offset: 0xc
}

// 
// Start address: 0x1978b0
int EnemyObjInControl(sfObj* obj)
{
	sfObj* tobj;
	// Line 126, Address: 0x1978b0, Func Offset: 0
	// Line 128, Address: 0x1978b4, Func Offset: 0x4
	// Line 126, Address: 0x1978b8, Func Offset: 0x8
	// Line 128, Address: 0x1978c4, Func Offset: 0x14
	// Line 129, Address: 0x1978c8, Func Offset: 0x18
	// Line 130, Address: 0x1978d0, Func Offset: 0x20
	// Line 131, Address: 0x1978e0, Func Offset: 0x30
	// Line 132, Address: 0x1978ec, Func Offset: 0x3c
	// Line 133, Address: 0x1978f8, Func Offset: 0x48
	// Line 134, Address: 0x197900, Func Offset: 0x50
	// Func End, Address: 0x197910, Func Offset: 0x60
}

// 
// Start address: 0x197910
sfObj* EnemyControlSearchObj(sfObj* obj)
{
	// Line 144, Address: 0x197910, Func Offset: 0
	// Line 148, Address: 0x197914, Func Offset: 0x4
	// Line 151, Address: 0x197930, Func Offset: 0x20
	// Func End, Address: 0x19793c, Func Offset: 0x2c
}

// 
// Start address: 0x197940
sfObj* EnemyControlSearchObjKind(EnemyKind kind, sfObj* obj)
{
	// Line 162, Address: 0x197940, Func Offset: 0
	// Line 163, Address: 0x197944, Func Offset: 0x4
	// Line 162, Address: 0x197948, Func Offset: 0x8
	// Line 163, Address: 0x197958, Func Offset: 0x18
	// Line 170, Address: 0x197970, Func Offset: 0x30
	// Line 171, Address: 0x197984, Func Offset: 0x44
	// Line 172, Address: 0x19798c, Func Offset: 0x4c
	// Line 173, Address: 0x197990, Func Offset: 0x50
	// Line 174, Address: 0x19799c, Func Offset: 0x5c
	// Line 175, Address: 0x1979a8, Func Offset: 0x68
	// Line 167, Address: 0x1979bc, Func Offset: 0x7c
	// Line 175, Address: 0x1979c4, Func Offset: 0x84
	// Line 176, Address: 0x1979d8, Func Offset: 0x98
	// Func End, Address: 0x1979ec, Func Offset: 0xac
}

// 
// Start address: 0x1979f0
sfObj* EnemyControlSearchObjID(unsigned int id)
{
	sfObj* obj;
	// Line 183, Address: 0x1979f0, Func Offset: 0
	// Line 185, Address: 0x1979f4, Func Offset: 0x4
	// Line 183, Address: 0x1979f8, Func Offset: 0x8
	// Line 185, Address: 0x197a04, Func Offset: 0x14
	// Line 186, Address: 0x197a08, Func Offset: 0x18
	// Line 187, Address: 0x197a10, Func Offset: 0x20
	// Line 188, Address: 0x197a20, Func Offset: 0x30
	// Line 190, Address: 0x197a28, Func Offset: 0x38
	// Line 191, Address: 0x197a34, Func Offset: 0x44
	// Line 192, Address: 0x197a40, Func Offset: 0x50
	// Line 193, Address: 0x197a48, Func Offset: 0x58
	// Func End, Address: 0x197a5c, Func Offset: 0x6c
}

