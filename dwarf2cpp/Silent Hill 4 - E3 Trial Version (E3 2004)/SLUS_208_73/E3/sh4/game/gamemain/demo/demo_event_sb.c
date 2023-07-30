typedef struct DemoEventTable;
typedef struct sfObj;
typedef union _anon0;

typedef void(*type_0)(sfObj*);
typedef void(*type_1)(sfObj*);
typedef void(*type_2)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef void(*type_5)(sfObj*);
typedef void(*type_6)(sfObj*);
typedef void(*type_9)(sfObj*);
typedef void(*type_10)(sfObj*);

typedef _anon0 type_4[256];
typedef float type_7[4];
typedef float type_8[4];
typedef short type_11[2];
typedef unsigned short type_12[2];
typedef char type_13[4];
typedef unsigned char type_14[4];
typedef float type_15[1];
typedef int type_16[1];

struct DemoEventTable
{
	int demo_id;
	void(*init)(sfObj*);
	void(*exec)(sfObj*);
	void(*end)(sfObj*);
	void(*draw)(sfObj*);
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

DemoEventTable demo_event_sb001;
DemoEventTable demo_event_sb002;
DemoEventTable demo_event_sb004;
DemoEventTable demo_event_sb006;
int demo007_init;
void(*reset_transparency)(sfObj*);
void(*set_reverse)(sfObj*);
DemoEventTable demo_event_sb007;

void DemoEventExecFR002();
void DemoEventExecFR004();
void DemoEventInitFR017();
void set_reverse();
void reset_transparency();
void DemoEventInitSB007();
void DemoEventExecSB007();

// 
// Start address: 0x2758c0
void DemoEventExecFR002()
{
	// Line 34, Address: 0x2758c0, Func Offset: 0
	// Func End, Address: 0x2758c8, Func Offset: 0x8
}

// 
// Start address: 0x2758d0
void DemoEventExecFR004()
{
	// Line 56, Address: 0x2758d0, Func Offset: 0
	// Func End, Address: 0x2758d8, Func Offset: 0x8
}

// 
// Start address: 0x2758e0
void DemoEventInitFR017()
{
	// Line 72, Address: 0x2758e0, Func Offset: 0
	// Func End, Address: 0x2758e8, Func Offset: 0x8
}

// 
// Start address: 0x2758f0
void set_reverse()
{
	// Line 87, Address: 0x2758f0, Func Offset: 0
	// Line 88, Address: 0x2758f8, Func Offset: 0x8
	// Line 90, Address: 0x275900, Func Offset: 0x10
	// Line 91, Address: 0x27590c, Func Offset: 0x1c
	// Func End, Address: 0x275918, Func Offset: 0x28
}

// 
// Start address: 0x275920
void reset_transparency()
{
	// Line 94, Address: 0x275920, Func Offset: 0
	// Line 95, Address: 0x275928, Func Offset: 0x8
	// Line 96, Address: 0x275930, Func Offset: 0x10
	// Line 97, Address: 0x275938, Func Offset: 0x18
	// Func End, Address: 0x275944, Func Offset: 0x24
}

// 
// Start address: 0x275950
void DemoEventInitSB007()
{
	float pos[4];
	float rot[4];
	// Line 101, Address: 0x275950, Func Offset: 0
	// Line 102, Address: 0x275954, Func Offset: 0x4
	// Line 101, Address: 0x275958, Func Offset: 0x8
	// Line 102, Address: 0x27595c, Func Offset: 0xc
	// Line 103, Address: 0x275968, Func Offset: 0x18
	// Line 113, Address: 0x275974, Func Offset: 0x24
	// Line 102, Address: 0x275980, Func Offset: 0x30
	// Line 113, Address: 0x275984, Func Offset: 0x34
	// Line 103, Address: 0x275988, Func Offset: 0x38
	// Line 113, Address: 0x27598c, Func Offset: 0x3c
	// Line 115, Address: 0x275994, Func Offset: 0x44
	// Line 116, Address: 0x27599c, Func Offset: 0x4c
	// Func End, Address: 0x2759a8, Func Offset: 0x58
}

// 
// Start address: 0x2759b0
void DemoEventExecSB007()
{
	sfObj* cyoh_obj;
	// Line 119, Address: 0x2759b0, Func Offset: 0
	// Line 120, Address: 0x2759b4, Func Offset: 0x4
	// Line 119, Address: 0x2759b8, Func Offset: 0x8
	// Line 120, Address: 0x2759c0, Func Offset: 0x10
	// Line 122, Address: 0x2759cc, Func Offset: 0x1c
	// Line 123, Address: 0x2759d8, Func Offset: 0x28
	// Line 124, Address: 0x2759e8, Func Offset: 0x38
	// Line 125, Address: 0x2759f8, Func Offset: 0x48
	// Line 126, Address: 0x275a04, Func Offset: 0x54
	// Line 127, Address: 0x275a08, Func Offset: 0x58
	// Func End, Address: 0x275a18, Func Offset: 0x68
}

