typedef struct _EventDriver;
typedef enum _enum : unsigned char;
typedef struct sfObj;
typedef union _anon0;

typedef int(*type_0)(sfObj*);
typedef int(*type_2)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef int(*type_4)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef void(*type_8)(sfObj*);

typedef _anon0 type_1[256];
typedef _anon0 type_7[4];
typedef short type_9[2];
typedef unsigned short type_10[2];
typedef char type_11[4];
typedef unsigned char type_12[4];
typedef float type_13[1];
typedef int type_14[1];

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

enum _enum : unsigned char
{
	EVENT_TYPE_INVALID,
	EVENT_TYPE_ITEM,
	EVENT_TYPE_MEMO,
	EVENT_TYPE_TEXT,
	EVENT_TYPE_FILELOAD,
	EVENT_TYPE_ETC,
	EVENT_TYPE_MAX
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

_EventDriver* now_trgchk_evdrv;

int EventDriverEvnum(_EventDriver* evdrv);
int* EventDriverTriggeCheckFunc(_EventDriver* evdrv);
int* EventDriverInitFunc(_EventDriver* evdrv);
int* EventDriverExecFunc(_EventDriver* evdrv);
int* EventDriverDrawFunc(_EventDriver* evdrv);
int* EventDriverEndFunc(_EventDriver* evdrv);
unsigned int* EventDriverFileList(_EventDriver* evdrv);
_anon0 EventDriverVal(_EventDriver* evdrv, int num);
void EventDriverSetVal(_EventDriver* evdrv, int num, _anon0 uni);
void EventDriverSetSelfAtTrgchk(_EventDriver* evdrv);
_EventDriver* EventDriverSelfAtTrgchk();
int EventDriverWakeUpEventWithType(_EventDriver* evdriver, int trgchk, _enum type);
int EventDriverWakeUpEvent(_EventDriver* evdriver, int trgchk);
int EventDriverWakeUpEventText(_EventDriver* evdriver, int trgchk);
sfObj* EventDriverWakeUpEventForce(_EventDriver* evdriver, int trgchk);

// 
// Start address: 0x2763a0
int EventDriverEvnum(_EventDriver* evdrv)
{
	// Line 105, Address: 0x2763a0, Func Offset: 0
	// Line 108, Address: 0x2763ac, Func Offset: 0xc
	// Func End, Address: 0x2763b4, Func Offset: 0x14
}

// 
// Start address: 0x2763c0
int* EventDriverTriggeCheckFunc(_EventDriver* evdrv)
{
	// Line 120, Address: 0x2763c0, Func Offset: 0
	// Line 123, Address: 0x2763cc, Func Offset: 0xc
	// Func End, Address: 0x2763d4, Func Offset: 0x14
}

// 
// Start address: 0x2763e0
int* EventDriverInitFunc(_EventDriver* evdrv)
{
	// Line 135, Address: 0x2763e0, Func Offset: 0
	// Line 138, Address: 0x2763ec, Func Offset: 0xc
	// Func End, Address: 0x2763f4, Func Offset: 0x14
}

// 
// Start address: 0x276400
int* EventDriverExecFunc(_EventDriver* evdrv)
{
	// Line 150, Address: 0x276400, Func Offset: 0
	// Line 153, Address: 0x27640c, Func Offset: 0xc
	// Func End, Address: 0x276414, Func Offset: 0x14
}

// 
// Start address: 0x276420
int* EventDriverDrawFunc(_EventDriver* evdrv)
{
	// Line 165, Address: 0x276420, Func Offset: 0
	// Line 168, Address: 0x27642c, Func Offset: 0xc
	// Func End, Address: 0x276434, Func Offset: 0x14
}

// 
// Start address: 0x276440
int* EventDriverEndFunc(_EventDriver* evdrv)
{
	// Line 180, Address: 0x276440, Func Offset: 0
	// Line 183, Address: 0x27644c, Func Offset: 0xc
	// Func End, Address: 0x276454, Func Offset: 0x14
}

// 
// Start address: 0x276460
unsigned int* EventDriverFileList(_EventDriver* evdrv)
{
	// Line 195, Address: 0x276460, Func Offset: 0
	// Line 198, Address: 0x27646c, Func Offset: 0xc
	// Func End, Address: 0x276474, Func Offset: 0x14
}

// 
// Start address: 0x276480
_anon0 EventDriverVal(_EventDriver* evdrv, int num)
{
	_anon0 dummy;
	// Line 209, Address: 0x276480, Func Offset: 0
	// Line 210, Address: 0x27648c, Func Offset: 0xc
	// Line 212, Address: 0x276494, Func Offset: 0x14
	// Line 213, Address: 0x2764a4, Func Offset: 0x24
	// Line 214, Address: 0x2764b4, Func Offset: 0x34
	// Line 217, Address: 0x2764b8, Func Offset: 0x38
	// Line 218, Address: 0x2764c8, Func Offset: 0x48
	// Line 219, Address: 0x2764cc, Func Offset: 0x4c
	// Line 221, Address: 0x2764d0, Func Offset: 0x50
	// Line 222, Address: 0x2764e0, Func Offset: 0x60
	// Func End, Address: 0x2764f0, Func Offset: 0x70
}

// 
// Start address: 0x2764f0
void EventDriverSetVal(_EventDriver* evdrv, int num, _anon0 uni)
{
	// Line 233, Address: 0x2764f0, Func Offset: 0
	// Line 234, Address: 0x2764f4, Func Offset: 0x4
	// Line 238, Address: 0x2764fc, Func Offset: 0xc
	// Line 239, Address: 0x276510, Func Offset: 0x20
	// Line 240, Address: 0x276514, Func Offset: 0x24
	// Line 242, Address: 0x276518, Func Offset: 0x28
	// Line 243, Address: 0x27652c, Func Offset: 0x3c
	// Func End, Address: 0x276538, Func Offset: 0x48
}

// 
// Start address: 0x276540
void EventDriverSetSelfAtTrgchk(_EventDriver* evdrv)
{
	// Line 254, Address: 0x276540, Func Offset: 0
	// Line 255, Address: 0x276544, Func Offset: 0x4
	// Func End, Address: 0x27654c, Func Offset: 0xc
}

// 
// Start address: 0x276550
_EventDriver* EventDriverSelfAtTrgchk()
{
	// Line 265, Address: 0x276550, Func Offset: 0
	// Line 266, Address: 0x276554, Func Offset: 0x4
	// Func End, Address: 0x27655c, Func Offset: 0xc
}

// 
// Start address: 0x276560
int EventDriverWakeUpEventWithType(_EventDriver* evdriver, int trgchk, _enum type)
{
	// Line 295, Address: 0x276560, Func Offset: 0
	// Line 297, Address: 0x27657c, Func Offset: 0x1c
	// Line 298, Address: 0x27658c, Func Offset: 0x2c
	// Line 299, Address: 0x276594, Func Offset: 0x34
	// Line 301, Address: 0x276598, Func Offset: 0x38
	// Line 303, Address: 0x2765a4, Func Offset: 0x44
	// Line 304, Address: 0x2765b4, Func Offset: 0x54
	// Line 305, Address: 0x2765bc, Func Offset: 0x5c
	// Line 308, Address: 0x2765c0, Func Offset: 0x60
	// Line 309, Address: 0x2765d0, Func Offset: 0x70
	// Line 314, Address: 0x2765d8, Func Offset: 0x78
	// Line 315, Address: 0x2765f0, Func Offset: 0x90
	// Line 317, Address: 0x2765f8, Func Offset: 0x98
	// Line 318, Address: 0x276600, Func Offset: 0xa0
	// Func End, Address: 0x276618, Func Offset: 0xb8
}

// 
// Start address: 0x276620
int EventDriverWakeUpEvent(_EventDriver* evdriver, int trgchk)
{
	// Line 332, Address: 0x276620, Func Offset: 0
	// Func End, Address: 0x276628, Func Offset: 0x8
}

// 
// Start address: 0x276630
int EventDriverWakeUpEventText(_EventDriver* evdriver, int trgchk)
{
	// Line 347, Address: 0x276630, Func Offset: 0
	// Func End, Address: 0x276638, Func Offset: 0x8
}

// 
// Start address: 0x276640
sfObj* EventDriverWakeUpEventForce(_EventDriver* evdriver, int trgchk)
{
	sfObj* obj;
	// Line 380, Address: 0x276640, Func Offset: 0
	// Line 384, Address: 0x276654, Func Offset: 0x14
	// Line 385, Address: 0x276664, Func Offset: 0x24
	// Line 386, Address: 0x27666c, Func Offset: 0x2c
	// Line 388, Address: 0x276670, Func Offset: 0x30
	// Line 390, Address: 0x27667c, Func Offset: 0x3c
	// Line 391, Address: 0x27668c, Func Offset: 0x4c
	// Line 392, Address: 0x276694, Func Offset: 0x54
	// Line 395, Address: 0x276698, Func Offset: 0x58
	// Line 396, Address: 0x2766a8, Func Offset: 0x68
	// Line 401, Address: 0x2766b0, Func Offset: 0x70
	// Line 403, Address: 0x2766c0, Func Offset: 0x80
	// Func End, Address: 0x2766d4, Func Offset: 0x94
}

