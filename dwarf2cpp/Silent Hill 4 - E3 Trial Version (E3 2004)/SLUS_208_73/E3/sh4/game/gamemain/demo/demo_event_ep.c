typedef struct sfObj;
typedef struct _anon0;
typedef union _anon1;
typedef struct DemoEventTable;

typedef void(*type_0)(sfObj*);
typedef void(*type_2)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef void(*type_5)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef void(*type_13)(sfObj*);
typedef void(*type_14)(sfObj*);

typedef _anon1 type_1[256];
typedef short type_4[2];
typedef unsigned short type_6[2];
typedef char type_7[4];
typedef unsigned char type_8[4];
typedef float type_9[1];
typedef int type_10[1];

struct sfObj
{
	_anon1 fwork[256];
	_anon1* work;
	void(*func)(sfObj*);
	_anon1* work_pt0;
	_anon1* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon1* sys_work;
	_anon1* scene_work;
	_anon1* event_work;
	_anon1* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon0
{
	int step;
	sfObj* childobj;
	float alpha;
};

union _anon1
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

struct DemoEventTable
{
	int demo_id;
	void(*init)(sfObj*);
	void(*exec)(sfObj*);
	void(*end)(sfObj*);
	void(*draw)(sfObj*);
};

sfObj* demo069_obj;
DemoEventTable demo_event_ls069;
DemoEventTable demo_event_ls070;
_anon0 ep071wk;
void(*ep071_reset_transparency)(sfObj*);
void(*ep071_set_transparency)(sfObj*);
DemoEventTable demo_event_ep071;

void DemoEventInitLS069();
void DemoEventExecLS069(sfObj* obj);
void DemoEventDrawLS069();
void DemoEventEndLS069();
void DemoEventInitLS070(sfObj* obj);
void DemoEventExecLS070(sfObj* obj);
void ep071_set_transparency();
void ep071_reset_transparency();
void DemoEventInitEp071();
void DemoEventExecEp071();

// 
// Start address: 0x2df480
void DemoEventInitLS069()
{
	// Line 33, Address: 0x2df480, Func Offset: 0
	// Func End, Address: 0x2df488, Func Offset: 0x8
}

// 
// Start address: 0x2df490
void DemoEventExecLS069(sfObj* obj)
{
	// Line 37, Address: 0x2df490, Func Offset: 0
	// Line 38, Address: 0x2df494, Func Offset: 0x4
	// Line 37, Address: 0x2df498, Func Offset: 0x8
	// Line 38, Address: 0x2df4a4, Func Offset: 0x14
	// Line 40, Address: 0x2df4c0, Func Offset: 0x30
	// Line 41, Address: 0x2df4d0, Func Offset: 0x40
	// Line 42, Address: 0x2df4dc, Func Offset: 0x4c
	// Line 45, Address: 0x2df4e8, Func Offset: 0x58
	// Line 46, Address: 0x2df4f4, Func Offset: 0x64
	// Line 47, Address: 0x2df504, Func Offset: 0x74
	// Line 48, Address: 0x2df50c, Func Offset: 0x7c
	// Line 49, Address: 0x2df510, Func Offset: 0x80
	// Line 50, Address: 0x2df520, Func Offset: 0x90
	// Line 52, Address: 0x2df528, Func Offset: 0x98
	// Line 53, Address: 0x2df538, Func Offset: 0xa8
	// Line 55, Address: 0x2df540, Func Offset: 0xb0
	// Line 56, Address: 0x2df550, Func Offset: 0xc0
	// Line 58, Address: 0x2df558, Func Offset: 0xc8
	// Line 59, Address: 0x2df568, Func Offset: 0xd8
	// Line 63, Address: 0x2df570, Func Offset: 0xe0
	// Func End, Address: 0x2df580, Func Offset: 0xf0
}

// 
// Start address: 0x2df580
void DemoEventDrawLS069()
{
	// Line 67, Address: 0x2df580, Func Offset: 0
	// Func End, Address: 0x2df58c, Func Offset: 0xc
}

// 
// Start address: 0x2df590
void DemoEventEndLS069()
{
	// Line 71, Address: 0x2df590, Func Offset: 0
	// Line 72, Address: 0x2df594, Func Offset: 0x4
	// Line 71, Address: 0x2df598, Func Offset: 0x8
	// Line 72, Address: 0x2df59c, Func Offset: 0xc
	// Line 73, Address: 0x2df5a4, Func Offset: 0x14
	// Line 74, Address: 0x2df5b0, Func Offset: 0x20
	// Line 75, Address: 0x2df5b8, Func Offset: 0x28
	// Func End, Address: 0x2df5c4, Func Offset: 0x34
}

// 
// Start address: 0x2df5d0
void DemoEventInitLS070(sfObj* obj)
{
	// Line 89, Address: 0x2df5d0, Func Offset: 0
	// Line 90, Address: 0x2df5d8, Func Offset: 0x8
	// Line 91, Address: 0x2df5e0, Func Offset: 0x10
	// Line 92, Address: 0x2df5e8, Func Offset: 0x18
	// Func End, Address: 0x2df5f4, Func Offset: 0x24
}

// 
// Start address: 0x2df600
void DemoEventExecLS070(sfObj* obj)
{
	// Line 95, Address: 0x2df600, Func Offset: 0
	// Line 96, Address: 0x2df608, Func Offset: 0x8
	// Line 97, Address: 0x2df610, Func Offset: 0x10
	// Line 98, Address: 0x2df620, Func Offset: 0x20
	// Line 100, Address: 0x2df628, Func Offset: 0x28
	// Func End, Address: 0x2df634, Func Offset: 0x34
}

// 
// Start address: 0x2df640
void ep071_set_transparency()
{
	_anon0* wk;
	int a;
	// Line 130, Address: 0x2df640, Func Offset: 0
	// Line 131, Address: 0x2df644, Func Offset: 0x4
	// Line 130, Address: 0x2df648, Func Offset: 0x8
	// Line 131, Address: 0x2df64c, Func Offset: 0xc
	// Line 134, Address: 0x2df650, Func Offset: 0x10
	// Line 135, Address: 0x2df668, Func Offset: 0x28
	// Line 134, Address: 0x2df66c, Func Offset: 0x2c
	// Line 135, Address: 0x2df670, Func Offset: 0x30
	// Line 136, Address: 0x2df694, Func Offset: 0x54
	// Line 137, Address: 0x2df6a8, Func Offset: 0x68
	// Line 138, Address: 0x2df6b4, Func Offset: 0x74
	// Func End, Address: 0x2df6c0, Func Offset: 0x80
}

// 
// Start address: 0x2df6c0
void ep071_reset_transparency()
{
	// Line 140, Address: 0x2df6c0, Func Offset: 0
	// Line 141, Address: 0x2df6c8, Func Offset: 0x8
	// Line 142, Address: 0x2df6d0, Func Offset: 0x10
	// Line 143, Address: 0x2df6d8, Func Offset: 0x18
	// Func End, Address: 0x2df6e4, Func Offset: 0x24
}

// 
// Start address: 0x2df6f0
void DemoEventInitEp071()
{
	// Line 147, Address: 0x2df6f0, Func Offset: 0
	// Func End, Address: 0x2df704, Func Offset: 0x14
}

// 
// Start address: 0x2df710
void DemoEventExecEp071()
{
	_anon0* wk;
	int demo_flame;
	// Line 150, Address: 0x2df710, Func Offset: 0
	// Line 155, Address: 0x2df714, Func Offset: 0x4
	// Line 150, Address: 0x2df718, Func Offset: 0x8
	// Line 155, Address: 0x2df71c, Func Offset: 0xc
	// Line 150, Address: 0x2df720, Func Offset: 0x10
	// Line 155, Address: 0x2df724, Func Offset: 0x14
	// Line 153, Address: 0x2df728, Func Offset: 0x18
	// Line 155, Address: 0x2df72c, Func Offset: 0x1c
	// Line 157, Address: 0x2df750, Func Offset: 0x40
	// Line 158, Address: 0x2df760, Func Offset: 0x50
	// Line 160, Address: 0x2df768, Func Offset: 0x58
	// Line 163, Address: 0x2df770, Func Offset: 0x60
	// Line 165, Address: 0x2df784, Func Offset: 0x74
	// Line 167, Address: 0x2df790, Func Offset: 0x80
	// Line 168, Address: 0x2df79c, Func Offset: 0x8c
	// Line 169, Address: 0x2df7a4, Func Offset: 0x94
	// Line 170, Address: 0x2df7b0, Func Offset: 0xa0
	// Line 176, Address: 0x2df7bc, Func Offset: 0xac
	// Line 177, Address: 0x2df7c8, Func Offset: 0xb8
	// Line 176, Address: 0x2df7cc, Func Offset: 0xbc
	// Line 177, Address: 0x2df7f0, Func Offset: 0xe0
	// Line 178, Address: 0x2df7fc, Func Offset: 0xec
	// Line 185, Address: 0x2df80c, Func Offset: 0xfc
	// Line 186, Address: 0x2df810, Func Offset: 0x100
	// Func End, Address: 0x2df820, Func Offset: 0x110
}

