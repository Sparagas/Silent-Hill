typedef struct DemoEventTable;
typedef struct sfObj;
typedef union _anon0;

typedef void(*type_0)(sfObj*);
typedef void(*type_1)(sfObj*);
typedef void(*type_2)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef void(*type_5)(sfObj*);
typedef void(*type_6)(sfObj*);
typedef void(*type_7)(sfObj*);
typedef void(*type_8)(sfObj*);

typedef _anon0 type_4[256];
typedef short type_9[2];
typedef unsigned short type_10[2];
typedef char type_11[4];
typedef unsigned char type_12[4];
typedef float type_13[1];
typedef int type_14[1];

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

DemoEventTable demo_event_bd034;
DemoEventTable demo_event_bd036;
int demo037_effect;
float child_alpha;
void(*bd15_reset_transparency)(sfObj*);
void(*bd15_set_transparency)(sfObj*);
DemoEventTable demo_event_bd037;
DemoEventTable demo_event_bd039;

void bd15_set_transparency();
void bd15_reset_transparency();
void DemoEventInitBD037();
void DemoEventExecBD037();
void DemoEventEndBD037(sfObj* obj);
void DemoEventInitBD039();

// 
// Start address: 0x2b7dd0
void bd15_set_transparency()
{
	int a;
	// Line 93, Address: 0x2b7dd0, Func Offset: 0
	// Line 96, Address: 0x2b7dd4, Func Offset: 0x4
	// Line 93, Address: 0x2b7dd8, Func Offset: 0x8
	// Line 96, Address: 0x2b7ddc, Func Offset: 0xc
	// Line 97, Address: 0x2b7df4, Func Offset: 0x24
	// Line 96, Address: 0x2b7df8, Func Offset: 0x28
	// Line 97, Address: 0x2b7dfc, Func Offset: 0x2c
	// Line 98, Address: 0x2b7e20, Func Offset: 0x50
	// Line 99, Address: 0x2b7e34, Func Offset: 0x64
	// Line 100, Address: 0x2b7e40, Func Offset: 0x70
	// Func End, Address: 0x2b7e4c, Func Offset: 0x7c
}

// 
// Start address: 0x2b7e50
void bd15_reset_transparency()
{
	// Line 103, Address: 0x2b7e50, Func Offset: 0
	// Line 104, Address: 0x2b7e58, Func Offset: 0x8
	// Line 105, Address: 0x2b7e60, Func Offset: 0x10
	// Line 106, Address: 0x2b7e68, Func Offset: 0x18
	// Func End, Address: 0x2b7e74, Func Offset: 0x24
}

// 
// Start address: 0x2b7e80
void DemoEventInitBD037()
{
	// Line 109, Address: 0x2b7e80, Func Offset: 0
	// Line 125, Address: 0x2b7e88, Func Offset: 0x8
	// Line 127, Address: 0x2b7e90, Func Offset: 0x10
	// Line 129, Address: 0x2b7e98, Func Offset: 0x18
	// Line 130, Address: 0x2b7ea0, Func Offset: 0x20
	// Func End, Address: 0x2b7eac, Func Offset: 0x2c
}

// 
// Start address: 0x2b7eb0
void DemoEventExecBD037()
{
	sfObj* child_obj;
	// Line 133, Address: 0x2b7eb0, Func Offset: 0
	// Line 150, Address: 0x2b7eb4, Func Offset: 0x4
	// Line 133, Address: 0x2b7eb8, Func Offset: 0x8
	// Line 150, Address: 0x2b7ebc, Func Offset: 0xc
	// Line 152, Address: 0x2b7ee0, Func Offset: 0x30
	// Line 154, Address: 0x2b7ee8, Func Offset: 0x38
	// Line 155, Address: 0x2b7ef8, Func Offset: 0x48
	// Line 157, Address: 0x2b7f00, Func Offset: 0x50
	// Line 158, Address: 0x2b7f10, Func Offset: 0x60
	// Line 162, Address: 0x2b7f18, Func Offset: 0x68
	// Line 164, Address: 0x2b7f2c, Func Offset: 0x7c
	// Line 165, Address: 0x2b7f34, Func Offset: 0x84
	// Line 167, Address: 0x2b7f48, Func Offset: 0x98
	// Line 165, Address: 0x2b7f4c, Func Offset: 0x9c
	// Line 167, Address: 0x2b7f50, Func Offset: 0xa0
	// Line 165, Address: 0x2b7f54, Func Offset: 0xa4
	// Line 167, Address: 0x2b7f58, Func Offset: 0xa8
	// Line 165, Address: 0x2b7f5c, Func Offset: 0xac
	// Line 167, Address: 0x2b7f6c, Func Offset: 0xbc
	// Line 168, Address: 0x2b7f74, Func Offset: 0xc4
	// Line 169, Address: 0x2b7f84, Func Offset: 0xd4
	// Line 170, Address: 0x2b7f88, Func Offset: 0xd8
	// Func End, Address: 0x2b7f98, Func Offset: 0xe8
}

// 
// Start address: 0x2b7fa0
void DemoEventEndBD037(sfObj* obj)
{
	// Line 180, Address: 0x2b7fa0, Func Offset: 0
	// Func End, Address: 0x2b7fa8, Func Offset: 0x8
}

// 
// Start address: 0x2b7fb0
void DemoEventInitBD039()
{
	// Line 197, Address: 0x2b7fb0, Func Offset: 0
	// Func End, Address: 0x2b7fb8, Func Offset: 0x8
}

