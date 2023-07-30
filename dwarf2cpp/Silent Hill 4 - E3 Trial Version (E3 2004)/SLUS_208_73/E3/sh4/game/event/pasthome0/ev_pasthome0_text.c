typedef struct _EventDriver;
typedef union _anon0;
typedef struct sfObj;
typedef struct EventFlag;

typedef void(*type_1)(sfObj*);
typedef int(*type_2)(sfObj*);
typedef int(*type_3)(sfObj*);
typedef int(*type_4)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef void(*type_8)(sfObj*);

typedef _anon0 type_0[256];
typedef _anon0 type_7[4];
typedef short type_9[2];
typedef unsigned short type_10[2];
typedef char type_11[4];
typedef unsigned char type_12[4];
typedef _anon0 type_13[7];
typedef float type_14[1];
typedef int type_15[1];
typedef unsigned char type_16[320];

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

struct EventFlag
{
	unsigned char flag[320];
};

_EventDriver ev_pasthome0_cm01_202;
_EventDriver ev_pasthome0_cm03_213;
_EventDriver ev_pasthome0_cm15_215;
_EventDriver ev_pasthome0_cm21_194_01;
_EventDriver ev_pasthome0_cm21_194_02;
EventFlag event_flag;
_EventDriver ev_pasthome0_cm03_212;
_EventDriver ev_pasthome0_ItemFull;
_EventDriver ev_pasthome0_msg_1101_01;
_EventDriver ev_pasthome0_msg_1104_02;
_EventDriver ev_pasthome0_msg_1117_01;
_EventDriver ev_pasthome0_msg_1117_02;
_EventDriver ev_pasthome0_msg_1117_03;
_EventDriver ev_pasthome0_msg_1117_04;
_EventDriver ev_pasthome0_msg_1117_05;
_EventDriver ev_pasthome0_msg_1117_06;
_EventDriver ev_pasthome0_msg_1117_07;
_EventDriver ev_pasthome0_msg_1117_08;
_EventDriver ev_pasthome0_msg_1117_09;
_EventDriver ev_pasthome0_msg_1117_10;
_EventDriver ev_pasthome0_msg_1117_11;
_EventDriver ev_pasthome0_msg_1117_12;
_EventDriver ev_pasthome0_msg_1117_13;
_EventDriver ev_pasthome0_msg_1117_14;
_EventDriver ev_pasthome0_msg_1117_15;
_EventDriver ev_pasthome0_msg_1117_16;
_EventDriver ev_pasthome0_msg_1117_17;
_EventDriver ev_pasthome0_msg_1117_19;
_EventDriver ev_pasthome0_msg_1117_20;

int ev_pasthome0_cm03_212_init();

// 
// Start address: 0x1ed4d00
int ev_pasthome0_cm03_212_init()
{
	_anon0 msglist[7];
	int num;
	// Line 56, Address: 0x1ed4d00, Func Offset: 0
	// Line 57, Address: 0x1ed4d04, Func Offset: 0x4
	// Line 56, Address: 0x1ed4d08, Func Offset: 0x8
	// Line 57, Address: 0x1ed4d0c, Func Offset: 0xc
	// Line 67, Address: 0x1ed4d20, Func Offset: 0x20
	// Line 57, Address: 0x1ed4d24, Func Offset: 0x24
	// Line 67, Address: 0x1ed4d30, Func Offset: 0x30
	// Line 68, Address: 0x1ed4d5c, Func Offset: 0x5c
	// Line 69, Address: 0x1ed4d7c, Func Offset: 0x7c
	// Line 70, Address: 0x1ed4d9c, Func Offset: 0x9c
	// Line 71, Address: 0x1ed4dbc, Func Offset: 0xbc
	// Line 72, Address: 0x1ed4ddc, Func Offset: 0xdc
	// Line 73, Address: 0x1ed4dfc, Func Offset: 0xfc
	// Line 74, Address: 0x1ed4e0c, Func Offset: 0x10c
	// Line 76, Address: 0x1ed4e1c, Func Offset: 0x11c
	// Line 75, Address: 0x1ed4e20, Func Offset: 0x120
	// Line 76, Address: 0x1ed4e24, Func Offset: 0x124
	// Func End, Address: 0x1ed4e2c, Func Offset: 0x12c
}

