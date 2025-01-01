typedef union _anon0;
typedef enum LDOOR_TYPE : unsigned char;
typedef struct LockDoor;


typedef LockDoor type_0[14];
typedef short type_1[2];
typedef unsigned short type_2[2];
typedef char type_3[4];
typedef unsigned char type_4[4];
typedef float type_5[1];
typedef int type_6[1];

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

LockDoor fr_stg_ld[14];

int DoorFuncFr20Door19();

// 
// Start address: 0x2a6a10
int DoorFuncFr20Door19()
{
	// Line 96, Address: 0x2a6a10, Func Offset: 0
	// Line 97, Address: 0x2a6a18, Func Offset: 0x8
	// Line 99, Address: 0x2a6a20, Func Offset: 0x10
	// Line 98, Address: 0x2a6a24, Func Offset: 0x14
	// Line 99, Address: 0x2a6a28, Func Offset: 0x18
	// Func End, Address: 0x2a6a30, Func Offset: 0x20
}

