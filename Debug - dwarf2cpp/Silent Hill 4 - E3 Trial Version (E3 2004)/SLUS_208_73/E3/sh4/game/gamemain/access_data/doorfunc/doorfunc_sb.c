typedef struct sfObj;
typedef union _anon0;
typedef struct _EventDriver;
typedef enum LDOOR_TYPE : unsigned char;
typedef struct LockDoor;

typedef void(*type_1)(sfObj*);
typedef void(*type_2)(sfObj*);
typedef int(*type_8)(sfObj*);
typedef int(*type_11)(sfObj*);
typedef int(*type_12)(sfObj*);
typedef int(*type_13)(sfObj*);
typedef int(*type_14)(sfObj*);

typedef _anon0 type_0[256];
typedef LockDoor type_3[53];
typedef short type_4[2];
typedef unsigned short type_5[2];
typedef char type_6[4];
typedef unsigned char type_7[4];
typedef float type_9[1];
typedef int type_10[1];
typedef _anon0 type_15[4];

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

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon0 val[4];
};

enum LDOOR_TYPE : unsigned char
{
	LDOOR_UNLOCK_ONESIDE_TOUCH,
	LDOOR_UNLOCK_ITEM_USE,
	LDOOR_UNLOCK_ITEM_USE_NOT_ERASE,
	LDOOR_BROKEN,
	LDOOR_HARD_CLOSE,
	LDOOR_CONDITION,
	LDOOR_LOCK_MESSAGE
};

struct LockDoor
{
	int door;
	LDOOR_TYPE type;
	_anon0 v0;
	_anon0 v1;
	_anon0 v2;
	_anon0 v3;
	_anon0 v4;
	_anon0 v5;
};

LockDoor sb_stg_ld[53];
_EventDriver ev_sb22_175;

int DoorCheckAtSb22Door35();

// 
// Start address: 0x1ed4490
int DoorCheckAtSb22Door35()
{
	int rtv;
	// Line 321, Address: 0x1ed4490, Func Offset: 0
	// Line 324, Address: 0x1ed449c, Func Offset: 0xc
	// Line 325, Address: 0x1ed44ac, Func Offset: 0x1c
	// Line 326, Address: 0x1ed44b8, Func Offset: 0x28
	// Line 329, Address: 0x1ed44c0, Func Offset: 0x30
	// Line 330, Address: 0x1ed44c4, Func Offset: 0x34
	// Line 332, Address: 0x1ed44c8, Func Offset: 0x38
	// Line 333, Address: 0x1ed44cc, Func Offset: 0x3c
	// Func End, Address: 0x1ed44dc, Func Offset: 0x4c
}

