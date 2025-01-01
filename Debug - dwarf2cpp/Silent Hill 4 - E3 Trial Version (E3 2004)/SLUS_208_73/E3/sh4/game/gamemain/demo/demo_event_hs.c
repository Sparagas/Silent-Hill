typedef struct DemoEventTable;
typedef struct sfObj;
typedef union _anon0;

typedef void(*type_0)(sfObj*);
typedef void(*type_1)(sfObj*);
typedef void(*type_2)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef void(*type_5)(sfObj*);
typedef void(*type_12)(sfObj*);

typedef _anon0 type_4[256];
typedef short type_6[2];
typedef unsigned short type_7[2];
typedef char type_8[4];
typedef unsigned char type_9[4];
typedef float type_10[1];
typedef int type_11[1];

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

DemoEventTable demo_event_hs038;
DemoEventTable demo_event_hs040;

void DemoEventInitHS038(sfObj* obj);
void DemoEventExecHS038(sfObj* obj);
void DemoEventDrawHS038(sfObj* obj);
void DemoEventEndHS038(sfObj* obj);
void DemoEventInitHS040(sfObj* obj);

// 
// Start address: 0x274c90
void DemoEventInitHS038(sfObj* obj)
{
	// Line 17, Address: 0x274c90, Func Offset: 0
	// Func End, Address: 0x274c98, Func Offset: 0x8
}

// 
// Start address: 0x274ca0
void DemoEventExecHS038(sfObj* obj)
{
	// Line 23, Address: 0x274ca0, Func Offset: 0
	// Func End, Address: 0x274ca8, Func Offset: 0x8
}

// 
// Start address: 0x274cb0
void DemoEventDrawHS038(sfObj* obj)
{
	// Line 29, Address: 0x274cb0, Func Offset: 0
	// Func End, Address: 0x274cb8, Func Offset: 0x8
}

// 
// Start address: 0x274cc0
void DemoEventEndHS038(sfObj* obj)
{
	// Line 35, Address: 0x274cc0, Func Offset: 0
	// Func End, Address: 0x274cc8, Func Offset: 0x8
}

// 
// Start address: 0x274cd0
void DemoEventInitHS040(sfObj* obj)
{
	// Line 49, Address: 0x274cd0, Func Offset: 0
	// Line 50, Address: 0x274ce0, Func Offset: 0x10
	// Line 51, Address: 0x274ce8, Func Offset: 0x18
	// Line 52, Address: 0x274cf0, Func Offset: 0x20
	// Func End, Address: 0x274d00, Func Offset: 0x30
}

