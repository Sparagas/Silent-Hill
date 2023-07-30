typedef struct _EventDriver;
typedef union _anon0;
typedef struct sfObj;
typedef struct _EventInst;
typedef struct EventFlag;

typedef int(*type_1)(sfObj*);
typedef void(*type_2)(sfObj*);
typedef int(*type_3)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef void(*type_9)(sfObj*);
typedef int(*type_18)(sfObj*);
typedef int(*type_19)(sfObj*);

typedef _anon0 type_0[256];
typedef _anon0 type_4[0];
typedef _anon0 type_8[4];
typedef _anon0 type_10[0];
typedef _anon0 type_11[0];
typedef short type_12[2];
typedef unsigned short type_13[2];
typedef char type_14[4];
typedef unsigned char type_15[4];
typedef float type_16[1];
typedef int type_17[1];
typedef unsigned char type_20[320];

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

_anon0 MsgBuilding0_2231_01[0];
_anon0 MsgCommon_ItemFull[0];
_anon0 MsgBuilding0_2231_00[0];
_EventDriver ev_building0_bd07_2231_1_A;
_EventDriver ev_building0_bd07_2231_1_B;
_EventDriver ev_building0_bd07_2231_2;
_EventDriver ev_building0_bd24_2232;
_EventDriver ev_building0_bd08_2233;
_EventDriver ev_building0_bd14_2234;
_EventDriver ev_building0_bd14_2247;
_EventDriver ev_building0_bd03_2236;
_EventDriver ev_building0_bd03_2237;
_EventDriver ev_building0_bd03_2238;
_EventDriver ev_building0_bd03_2239;
_EventDriver ev_building0_bd03_2240;
_EventDriver ev_building0_bd16_2253;
EventFlag event_flag;
_EventDriver ev_building0_GetDriver;
_EventDriver ev_building0_GetSpoon;
_EventDriver ev_building0_GetMidMashy;
_EventDriver ev_building0_GetMashy;
_EventDriver ev_building0_GetMashyNiblick;
_EventDriver ev_building0_GetPitcher;
_EventDriver ev_building0_GetPitchingWedge;
_EventDriver ev_building0_GetSandWedge;
_EventDriver ev_water0_mz13_metal_bat;
_EventDriver ev_3ldk0_rl02_get_scoop;
_EventDriver ev_hospital0_GetRustyHatchet;
_EventDriver ev_hospital0_hs04_2291;

int ev_building0_bd07_2231_1_a_exec(sfObj* obj);
int ev_building0_bd07_2231_1_a_end(sfObj* obj);
int ev_building0_bd16_2253_checkfunc(sfObj* obj);
int ev_3ldk0_rl02_trgchk_walldepth();

// 
// Start address: 0x1ed7e20
int ev_building0_bd07_2231_1_a_exec(sfObj* obj)
{
	int ret;
	_EventInst* inst;
	_EventInst* inst;
	// Line 81, Address: 0x1ed7e20, Func Offset: 0
	// Line 83, Address: 0x1ed7e34, Func Offset: 0x14
	// Line 85, Address: 0x1ed7e60, Func Offset: 0x40
	// Line 86, Address: 0x1ed7e6c, Func Offset: 0x4c
	// Line 88, Address: 0x1ed7e74, Func Offset: 0x54
	// Line 89, Address: 0x1ed7e78, Func Offset: 0x58
	// Line 90, Address: 0x1ed7e88, Func Offset: 0x68
	// Line 93, Address: 0x1ed7ea0, Func Offset: 0x80
	// Line 95, Address: 0x1ed7ea8, Func Offset: 0x88
	// Line 96, Address: 0x1ed7eb4, Func Offset: 0x94
	// Line 97, Address: 0x1ed7ebc, Func Offset: 0x9c
	// Line 98, Address: 0x1ed7ec0, Func Offset: 0xa0
	// Line 99, Address: 0x1ed7ecc, Func Offset: 0xac
	// Line 100, Address: 0x1ed7ed4, Func Offset: 0xb4
	// Line 101, Address: 0x1ed7edc, Func Offset: 0xbc
	// Line 103, Address: 0x1ed7ee8, Func Offset: 0xc8
	// Line 106, Address: 0x1ed7ef0, Func Offset: 0xd0
	// Line 107, Address: 0x1ed7efc, Func Offset: 0xdc
	// Line 108, Address: 0x1ed7f04, Func Offset: 0xe4
	// Line 109, Address: 0x1ed7f08, Func Offset: 0xe8
	// Line 110, Address: 0x1ed7f14, Func Offset: 0xf4
	// Line 111, Address: 0x1ed7f2c, Func Offset: 0x10c
	// Line 112, Address: 0x1ed7f34, Func Offset: 0x114
	// Line 116, Address: 0x1ed7f40, Func Offset: 0x120
	// Line 117, Address: 0x1ed7f44, Func Offset: 0x124
	// Func End, Address: 0x1ed7f58, Func Offset: 0x138
}

// 
// Start address: 0x1ed7f60
int ev_building0_bd07_2231_1_a_end(sfObj* obj)
{
	// Line 1044, Address: 0x1ed7f60, Func Offset: 0
	// Func End, Address: 0x1ed7f68, Func Offset: 0x8
	// Line 120, Address: 0x1ed7f60, Func Offset: 0
	// Line 121, Address: 0x1ed7f64, Func Offset: 0x4
	// Line 120, Address: 0x1ed7f68, Func Offset: 0x8
	// Line 121, Address: 0x1ed7f6c, Func Offset: 0xc
	// Line 123, Address: 0x1ed7f88, Func Offset: 0x28
	// Line 126, Address: 0x1ed7f90, Func Offset: 0x30
	// Line 125, Address: 0x1ed7f94, Func Offset: 0x34
	// Line 126, Address: 0x1ed7f98, Func Offset: 0x38
	// Func End, Address: 0x1ed7fa0, Func Offset: 0x40
}

// 
// Start address: 0x1ed7fa0
int ev_building0_bd16_2253_checkfunc(sfObj* obj)
{
	// Line 167, Address: 0x1ed7fa0, Func Offset: 0
	// Line 168, Address: 0x1ed7fa4, Func Offset: 0x4
	// Line 167, Address: 0x1ed7fa8, Func Offset: 0x8
	// Line 168, Address: 0x1ed7fac, Func Offset: 0xc
	// Line 170, Address: 0x1ed7fcc, Func Offset: 0x2c
	// Func End, Address: 0x1ed7fd8, Func Offset: 0x38
}

// 
// Start address: 0x1ed7fe0
int ev_3ldk0_rl02_trgchk_walldepth()
{
	// Line 235, Address: 0x1ed7fe0, Func Offset: 0
	// Func End, Address: 0x1ed7fe8, Func Offset: 0x8
}

