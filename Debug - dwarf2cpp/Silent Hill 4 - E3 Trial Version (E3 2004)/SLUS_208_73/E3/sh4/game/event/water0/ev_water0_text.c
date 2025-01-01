typedef union _anon0;
typedef struct sfObj;
typedef struct _EventInst;
typedef struct EventFlag;
typedef struct _EventDriver;

typedef int(*type_1)(sfObj*);
typedef int(*type_2)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef int(*type_4)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef void(*type_8)(sfObj*);
typedef int(*type_19)(sfObj*);
typedef int(*type_20)(sfObj*);

typedef _anon0 type_0[256];
typedef _anon0 type_7[4];
typedef _anon0 type_9[0];
typedef _anon0 type_10[0];
typedef _anon0 type_11[0];
typedef _anon0 type_12[0];
typedef short type_13[2];
typedef unsigned short type_14[2];
typedef char type_15[4];
typedef unsigned char type_16[4];
typedef float type_17[1];
typedef int type_18[1];
typedef unsigned char type_21[320];

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

_EventDriver ev_water0_mz05_266;
_EventDriver ev_water0_mz08_267;
_EventDriver ev_water0_mz12_268;
_EventDriver ev_water0_mz16_269;
_EventDriver ev_water0_mz17_270;
_EventDriver ev_water0_mz22_271;
_EventDriver ev_water0_mz24_273;
_EventDriver ev_water0_mz26_274;
_EventDriver ev_water0_mz27_275;
_EventDriver ev_water0_mz30_276;
_EventDriver ev_water0_mz38_password;
_EventDriver ev_water0_locked;
_anon0 MsgWater0_282_02[0];
_anon0 MsgWater0_282_01[0];
_EventDriver ev_water0_mz41_dynamo;
_EventDriver ev_water0_mz42_dynamo;
_anon0 MsgWater0_282_04[0];
_anon0 MsgWater0_282_03[0];
_EventDriver ev_water0_mz41_transformer;
_EventDriver ev_water0_mz42_transformer;
_EventDriver ev_water0_mz16_bottle;
_EventDriver ev_water0_mz22_shirt;
_EventDriver ev_water0_mz38_door;
_EventDriver ev_water0_mz41_door;
EventFlag event_flag;
_EventDriver ev_water0_valve_not_move;

int ev_mz41_dynamo_init(sfObj* obj);
int ev_mz41_transformer_init(sfObj* obj);
int ev_water0_valve_not_move_trgchk();

// 
// Start address: 0x1ed94b0
int ev_mz41_dynamo_init(sfObj* obj)
{
	_EventInst* inst;
	// Line 233, Address: 0x1ed94b0, Func Offset: 0
	// Line 234, Address: 0x1ed94c0, Func Offset: 0x10
	// Line 236, Address: 0x1ed94cc, Func Offset: 0x1c
	// Line 237, Address: 0x1ed94d4, Func Offset: 0x24
	// Line 239, Address: 0x1ed94e4, Func Offset: 0x34
	// Line 240, Address: 0x1ed94f4, Func Offset: 0x44
	// Line 243, Address: 0x1ed9500, Func Offset: 0x50
	// Line 245, Address: 0x1ed9514, Func Offset: 0x64
	// Line 246, Address: 0x1ed9518, Func Offset: 0x68
	// Line 249, Address: 0x1ed9520, Func Offset: 0x70
	// Line 248, Address: 0x1ed9524, Func Offset: 0x74
	// Line 249, Address: 0x1ed9528, Func Offset: 0x78
	// Func End, Address: 0x1ed9538, Func Offset: 0x88
}

// 
// Start address: 0x1ed9540
int ev_mz41_transformer_init(sfObj* obj)
{
	_EventInst* inst;
	// Line 279, Address: 0x1ed9540, Func Offset: 0
	// Line 280, Address: 0x1ed9550, Func Offset: 0x10
	// Line 282, Address: 0x1ed955c, Func Offset: 0x1c
	// Line 283, Address: 0x1ed9564, Func Offset: 0x24
	// Line 285, Address: 0x1ed9574, Func Offset: 0x34
	// Line 286, Address: 0x1ed9584, Func Offset: 0x44
	// Line 289, Address: 0x1ed9590, Func Offset: 0x50
	// Line 291, Address: 0x1ed95a4, Func Offset: 0x64
	// Line 292, Address: 0x1ed95a8, Func Offset: 0x68
	// Line 295, Address: 0x1ed95b0, Func Offset: 0x70
	// Line 294, Address: 0x1ed95b4, Func Offset: 0x74
	// Line 295, Address: 0x1ed95b8, Func Offset: 0x78
	// Func End, Address: 0x1ed95c8, Func Offset: 0x88
}

// 
// Start address: 0x1ed95d0
int ev_water0_valve_not_move_trgchk()
{
	// Line 349, Address: 0x1ed95d0, Func Offset: 0
	// Line 351, Address: 0x1ed95dc, Func Offset: 0xc
	// Func End, Address: 0x1ed95e4, Func Offset: 0x14
}

