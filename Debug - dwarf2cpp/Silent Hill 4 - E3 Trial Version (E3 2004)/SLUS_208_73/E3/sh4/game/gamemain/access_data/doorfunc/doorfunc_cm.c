typedef enum LDOOR_TYPE : unsigned char;
typedef union _anon0;
typedef struct LockDoor;


typedef short type_0[2];
typedef LockDoor type_1[29];
typedef unsigned short type_2[2];
typedef char type_3[4];
typedef unsigned char type_4[4];
typedef float type_5[1];
typedef int type_6[1];

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

LockDoor cm_stg_ld[29];


