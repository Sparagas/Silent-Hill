typedef struct sfObj;
typedef struct DemoEventTable;
typedef union _anon0;

typedef void(*type_0)(sfObj*);
typedef void(*type_1)(sfObj*);
typedef void(*type_2)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef void(*type_5)(sfObj*);
typedef void(*type_13)(sfObj*);

typedef _anon0 type_4[256];
typedef short type_6[2];
typedef unsigned short type_7[2];
typedef char type_8[4];
typedef unsigned char type_9[4];
typedef DemoEventTable* type_10[109];
typedef float type_11[1];
typedef int type_12[1];

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

struct DemoEventTable
{
	int demo_id;
	void(*init)(sfObj*);
	void(*exec)(sfObj*);
	void(*end)(sfObj*);
	void(*draw)(sfObj*);
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

DemoEventTable* demo_event[109];

void DemoEventInit(int demo_id);
void DemoEventExec(int demo_id);
void DemoEventEnd(int demo_id);
void DemoEventDraw(int demo_id);
int DemoEventJustTime(int time);
int DemoEventDuringTime(int start_time, int end_time);

// 
// Start address: 0x2733e0
void DemoEventInit(int demo_id)
{
	int i;
	sfObj* obj;
	// Line 143, Address: 0x2733e0, Func Offset: 0
	// Line 145, Address: 0x2733ec, Func Offset: 0xc
	// Line 147, Address: 0x2733f4, Func Offset: 0x14
	// Line 145, Address: 0x2733f8, Func Offset: 0x18
	// Line 147, Address: 0x2733fc, Func Offset: 0x1c
	// Line 148, Address: 0x273410, Func Offset: 0x30
	// Line 149, Address: 0x273434, Func Offset: 0x54
	// Line 150, Address: 0x27343c, Func Offset: 0x5c
	// Line 152, Address: 0x273444, Func Offset: 0x64
	// Line 154, Address: 0x27344c, Func Offset: 0x6c
	// Line 152, Address: 0x273450, Func Offset: 0x70
	// Line 154, Address: 0x273454, Func Offset: 0x74
	// Line 155, Address: 0x273460, Func Offset: 0x80
	// Func End, Address: 0x273470, Func Offset: 0x90
}

// 
// Start address: 0x273470
void DemoEventExec(int demo_id)
{
	int i;
	float current_time;
	float old_time;
	sfObj* obj;
	// Line 161, Address: 0x273470, Func Offset: 0
	// Line 165, Address: 0x273484, Func Offset: 0x14
	// Line 167, Address: 0x27348c, Func Offset: 0x1c
	// Line 168, Address: 0x273494, Func Offset: 0x24
	// Line 170, Address: 0x27349c, Func Offset: 0x2c
	// Line 174, Address: 0x2734a8, Func Offset: 0x38
	// Line 175, Address: 0x2734c0, Func Offset: 0x50
	// Line 176, Address: 0x2734e4, Func Offset: 0x74
	// Line 177, Address: 0x2734ec, Func Offset: 0x7c
	// Line 179, Address: 0x2734f4, Func Offset: 0x84
	// Line 181, Address: 0x2734fc, Func Offset: 0x8c
	// Line 179, Address: 0x273500, Func Offset: 0x90
	// Line 181, Address: 0x273504, Func Offset: 0x94
	// Line 182, Address: 0x273510, Func Offset: 0xa0
	// Func End, Address: 0x273528, Func Offset: 0xb8
}

// 
// Start address: 0x273530
void DemoEventEnd(int demo_id)
{
	int i;
	sfObj* obj;
	// Line 187, Address: 0x273530, Func Offset: 0
	// Line 189, Address: 0x27353c, Func Offset: 0xc
	// Line 191, Address: 0x273544, Func Offset: 0x14
	// Line 189, Address: 0x273548, Func Offset: 0x18
	// Line 191, Address: 0x27354c, Func Offset: 0x1c
	// Line 192, Address: 0x273560, Func Offset: 0x30
	// Line 193, Address: 0x273584, Func Offset: 0x54
	// Line 194, Address: 0x27358c, Func Offset: 0x5c
	// Line 196, Address: 0x273594, Func Offset: 0x64
	// Line 198, Address: 0x27359c, Func Offset: 0x6c
	// Line 196, Address: 0x2735a0, Func Offset: 0x70
	// Line 198, Address: 0x2735a4, Func Offset: 0x74
	// Line 199, Address: 0x2735b0, Func Offset: 0x80
	// Func End, Address: 0x2735c0, Func Offset: 0x90
}

// 
// Start address: 0x2735c0
void DemoEventDraw(int demo_id)
{
	int i;
	sfObj* obj;
	// Line 204, Address: 0x2735c0, Func Offset: 0
	// Line 206, Address: 0x2735cc, Func Offset: 0xc
	// Line 208, Address: 0x2735d4, Func Offset: 0x14
	// Line 206, Address: 0x2735d8, Func Offset: 0x18
	// Line 208, Address: 0x2735dc, Func Offset: 0x1c
	// Line 209, Address: 0x2735f0, Func Offset: 0x30
	// Line 210, Address: 0x273614, Func Offset: 0x54
	// Line 211, Address: 0x27361c, Func Offset: 0x5c
	// Line 213, Address: 0x273624, Func Offset: 0x64
	// Line 215, Address: 0x27362c, Func Offset: 0x6c
	// Line 213, Address: 0x273630, Func Offset: 0x70
	// Line 215, Address: 0x273634, Func Offset: 0x74
	// Line 216, Address: 0x273640, Func Offset: 0x80
	// Func End, Address: 0x273650, Func Offset: 0x90
}

// 
// Start address: 0x273650
int DemoEventJustTime(int time)
{
	float current_time;
	float old_time;
	// Line 222, Address: 0x273650, Func Offset: 0
	// Line 226, Address: 0x273660, Func Offset: 0x10
	// Line 227, Address: 0x273670, Func Offset: 0x20
	// Line 230, Address: 0x273678, Func Offset: 0x28
	// Line 231, Address: 0x273680, Func Offset: 0x30
	// Line 233, Address: 0x273688, Func Offset: 0x38
	// Line 234, Address: 0x2736ac, Func Offset: 0x5c
	// Line 235, Address: 0x2736b4, Func Offset: 0x64
	// Line 236, Address: 0x2736b8, Func Offset: 0x68
	// Line 237, Address: 0x2736c0, Func Offset: 0x70
	// Func End, Address: 0x2736d4, Func Offset: 0x84
}

// 
// Start address: 0x2736e0
int DemoEventDuringTime(int start_time, int end_time)
{
	float current_time;
	float old_time;
	// Line 243, Address: 0x2736e0, Func Offset: 0
	// Line 247, Address: 0x2736f8, Func Offset: 0x18
	// Line 248, Address: 0x273708, Func Offset: 0x28
	// Line 251, Address: 0x273710, Func Offset: 0x30
	// Line 252, Address: 0x273718, Func Offset: 0x38
	// Line 254, Address: 0x273720, Func Offset: 0x40
	// Line 255, Address: 0x273750, Func Offset: 0x70
	// Line 257, Address: 0x273758, Func Offset: 0x78
	// Line 258, Address: 0x273760, Func Offset: 0x80
	// Func End, Address: 0x273778, Func Offset: 0x98
}

