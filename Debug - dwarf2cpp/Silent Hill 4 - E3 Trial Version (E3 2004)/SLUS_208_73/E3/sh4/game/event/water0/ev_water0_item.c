typedef struct sfObj;
typedef struct _EventInst;
typedef struct EventFlag;
typedef union _anon0;
typedef struct _EventDriver;

typedef int(*type_1)(sfObj*);
typedef int(*type_2)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef int(*type_11)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef int(*type_13)(sfObj*);
typedef int(*type_14)(sfObj*);
typedef int(*type_15)(sfObj*);
typedef void(*type_17)(sfObj*);

typedef unsigned char type_0[320];
typedef short type_3[2];
typedef unsigned short type_4[2];
typedef char type_5[4];
typedef unsigned char type_6[4];
typedef float type_8[1];
typedef _anon0 type_9[256];
typedef int type_10[1];
typedef _anon0 type_16[4];

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

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
};

struct EventFlag
{
	unsigned char flag[320];
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

_EventDriver ev_water0_mz03_262;
_EventDriver ev_water0_mz03_263;
_EventDriver ev_water0_mz03_264;
_EventDriver ev_water0_mz13_277;
_EventDriver ev_water0_mz13_278;
_EventDriver ev_water0_mz13_279;
_EventDriver ev_water0_mz23_280;
_EventDriver ev_water0_mz24_272;
_EventDriver ev_water0_mz39_2302;
_EventDriver ev_water0_mz16_2303;
_EventDriver ev_water0_mz13_brownjack;
_EventDriver ev_water0_mz38_plate;
_EventDriver ev_water_mz32_key;
EventFlag event_flag;
_EventDriver ev_water0_mz32_upper_key_get;
_EventDriver ev_water_mz34_upper_key;
_EventDriver ev_water0_mz01_804;
_EventDriver ev_water0_mz32_803;
_EventDriver ev_water0_mz32_805;
_EventDriver ev_water0_mz32_805_after;
_EventDriver ev_3ldk0_rl02_get_stungun;

int ev_water0_mz32_upper_key_get_end();
int ev_water0_mz32_805_after_trgchk(sfObj* obj);
int ev_water0_mz32_805_after_init(sfObj* obj);
int ev_3ldk0_trgchk_mcd_afterprologue();

// 
// Start address: 0x1ed7fd0
int ev_water0_mz32_upper_key_get_end()
{
	// Line 271, Address: 0x1ed7fd0, Func Offset: 0
	// Line 272, Address: 0x1ed7fd8, Func Offset: 0x8
	// Line 274, Address: 0x1ed7fe8, Func Offset: 0x18
	// Line 275, Address: 0x1ed7ff0, Func Offset: 0x20
	// Line 277, Address: 0x1ed7ff8, Func Offset: 0x28
	// Line 280, Address: 0x1ed8000, Func Offset: 0x30
	// Line 283, Address: 0x1ed8004, Func Offset: 0x34
	// Line 286, Address: 0x1ed8010, Func Offset: 0x40
	// Line 285, Address: 0x1ed8014, Func Offset: 0x44
	// Line 286, Address: 0x1ed8018, Func Offset: 0x48
	// Func End, Address: 0x1ed8020, Func Offset: 0x50
	// Line 216, Address: 0x1ed7fd0, Func Offset: 0
	// Line 217, Address: 0x1ed7fd4, Func Offset: 0x4
	// Line 216, Address: 0x1ed7fd8, Func Offset: 0x8
	// Line 218, Address: 0x1ed7fe4, Func Offset: 0x14
	// Func End, Address: 0x1ed7fec, Func Offset: 0x1c
}

// 
// Start address: 0x1ed7ff0
int ev_water0_mz32_805_after_trgchk(sfObj* obj)
{
	// Line 1119, Address: 0x1ed7ff0, Func Offset: 0
	// Line 1120, Address: 0x1ed7ffc, Func Offset: 0xc
	// Line 1122, Address: 0x1ed8000, Func Offset: 0x10
	// Line 1123, Address: 0x1ed8008, Func Offset: 0x18
	// Line 1124, Address: 0x1ed8010, Func Offset: 0x20
	// Line 1125, Address: 0x1ed8018, Func Offset: 0x28
	// Line 1126, Address: 0x1ed8020, Func Offset: 0x30
	// Line 1127, Address: 0x1ed8028, Func Offset: 0x38
	// Line 1130, Address: 0x1ed8030, Func Offset: 0x40
	// Line 1129, Address: 0x1ed8034, Func Offset: 0x44
	// Line 1130, Address: 0x1ed8038, Func Offset: 0x48
	// Func End, Address: 0x1ed8044, Func Offset: 0x54
	// Line 255, Address: 0x1ed7ff0, Func Offset: 0
	// Line 257, Address: 0x1ed7ff4, Func Offset: 0x4
	// Line 255, Address: 0x1ed7ff8, Func Offset: 0x8
	// Line 257, Address: 0x1ed7ffc, Func Offset: 0xc
	// Line 260, Address: 0x1ed8014, Func Offset: 0x24
	// Func End, Address: 0x1ed8020, Func Offset: 0x30
	// Line 74, Address: 0x1ed7ff0, Func Offset: 0
	// Func End, Address: 0x1ed7ff8, Func Offset: 0x8
}

// 
// Start address: 0x1ed8020
int ev_water0_mz32_805_after_init(sfObj* obj)
{
	_EventInst* inst;
	// Line 316, Address: 0x1ed8020, Func Offset: 0
	// Line 317, Address: 0x1ed8030, Func Offset: 0x10
	// Line 320, Address: 0x1ed803c, Func Offset: 0x1c
	// Line 321, Address: 0x1ed8050, Func Offset: 0x30
	// Line 324, Address: 0x1ed8058, Func Offset: 0x38
	// Line 325, Address: 0x1ed8064, Func Offset: 0x44
	// Line 326, Address: 0x1ed806c, Func Offset: 0x4c
	// Line 329, Address: 0x1ed8070, Func Offset: 0x50
	// Line 330, Address: 0x1ed807c, Func Offset: 0x5c
	// Line 333, Address: 0x1ed8088, Func Offset: 0x68
	// Line 335, Address: 0x1ed8094, Func Offset: 0x74
	// Line 337, Address: 0x1ed809c, Func Offset: 0x7c
	// Line 340, Address: 0x1ed80a8, Func Offset: 0x88
	// Line 342, Address: 0x1ed80b0, Func Offset: 0x90
	// Line 345, Address: 0x1ed80b4, Func Offset: 0x94
	// Line 348, Address: 0x1ed80bc, Func Offset: 0x9c
	// Line 351, Address: 0x1ed80c4, Func Offset: 0xa4
	// Line 350, Address: 0x1ed80c8, Func Offset: 0xa8
	// Line 351, Address: 0x1ed80cc, Func Offset: 0xac
	// Func End, Address: 0x1ed80dc, Func Offset: 0xbc
	// Line 262, Address: 0x1ed8020, Func Offset: 0
	// Line 263, Address: 0x1ed802c, Func Offset: 0xc
	// Line 264, Address: 0x1ed8034, Func Offset: 0x14
	// Line 265, Address: 0x1ed8040, Func Offset: 0x20
	// Line 266, Address: 0x1ed8048, Func Offset: 0x28
	// Func End, Address: 0x1ed8058, Func Offset: 0x38
}

// 
// Start address: 0x1ed8060
int ev_3ldk0_trgchk_mcd_afterprologue()
{
	// Line 285, Address: 0x1ed8060, Func Offset: 0
	// Func End, Address: 0x1ed8068, Func Offset: 0x8
}

