typedef enum _cam3Step : unsigned char;
typedef struct _AfObjEntryHandler;
typedef struct sfObj;
typedef struct _cam3Work;
typedef union _anon0;

typedef void(*type_2)(sfObj*);
typedef void(*type_3)(sfObj*);

typedef sfObj* type_0[64];
typedef _anon0 type_1[256];
typedef float type_4[4];
typedef float type_5[4][4];
typedef short type_6[2];
typedef unsigned short type_7[2];
typedef float type_8[4];
typedef char type_9[4];
typedef unsigned char type_10[4];
typedef float type_11[1];
typedef int type_12[1];

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
};

struct _AfObjEntryHandler
{
	sfObj* obj[64];
	int cnt;
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

struct _cam3Work
{
	_cam3Step step;
	float mtx[4][4];
	float rot[4];
	float lookat[4];
	int run;
	int forceRotate;
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

_AfObjEntryHandler afobj_handler;
_cam3Work cam3_work;

void AfObjEntryInit();
void AfObjEntryDelete();
void AfObjEntryAdd(sfObj* obj);
void AfObjEntryAddMain();

// 
// Start address: 0x279100
void AfObjEntryInit()
{
	// Line 62, Address: 0x279100, Func Offset: 0
	// Func End, Address: 0x279110, Func Offset: 0x10
}

// 
// Start address: 0x279110
void AfObjEntryDelete()
{
	int cnt;
	// Line 72, Address: 0x279110, Func Offset: 0
	// Line 74, Address: 0x279114, Func Offset: 0x4
	// Line 72, Address: 0x279118, Func Offset: 0x8
	// Line 74, Address: 0x279124, Func Offset: 0x14
	// Line 75, Address: 0x279140, Func Offset: 0x30
	// Line 77, Address: 0x279148, Func Offset: 0x38
	// Line 76, Address: 0x27914c, Func Offset: 0x3c
	// Line 77, Address: 0x279150, Func Offset: 0x40
	// Line 78, Address: 0x279160, Func Offset: 0x50
	// Func End, Address: 0x279174, Func Offset: 0x64
}

// 
// Start address: 0x279180
void AfObjEntryAdd(sfObj* obj)
{
	// Line 90, Address: 0x279180, Func Offset: 0
	// Line 91, Address: 0x279194, Func Offset: 0x14
	// Line 92, Address: 0x27919c, Func Offset: 0x1c
	// Line 94, Address: 0x2791a0, Func Offset: 0x20
	// Line 95, Address: 0x2791b4, Func Offset: 0x34
	// Line 94, Address: 0x2791b8, Func Offset: 0x38
	// Line 95, Address: 0x2791c0, Func Offset: 0x40
	// Line 96, Address: 0x2791cc, Func Offset: 0x4c
	// Func End, Address: 0x2791d4, Func Offset: 0x54
}

// 
// Start address: 0x2791e0
void AfObjEntryAddMain()
{
	// Line 106, Address: 0x2791e0, Func Offset: 0
	// Line 111, Address: 0x2791e8, Func Offset: 0x8
	// Line 114, Address: 0x2791f0, Func Offset: 0x10
	// Line 115, Address: 0x2791f8, Func Offset: 0x18
	// Func End, Address: 0x279204, Func Offset: 0x24
}

