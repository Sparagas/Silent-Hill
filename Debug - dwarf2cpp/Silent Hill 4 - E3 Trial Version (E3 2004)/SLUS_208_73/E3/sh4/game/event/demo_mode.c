typedef enum _cam3Step : unsigned char;
typedef struct _cam3Work;
typedef union _anon0;
typedef struct sfObj;

typedef void(*type_3)();
typedef void(*type_7)(sfObj*);
typedef void(*type_8)(sfObj*);
typedef void(*type_15)(sfObj*);

typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[4];
typedef void(*type_4)()[2];
typedef _anon0 type_5[256];
typedef short type_6[2];
typedef unsigned short type_9[2];
typedef void(*type_10)(sfObj*)[3];
typedef char type_11[4];
typedef unsigned char type_12[4];
typedef float type_13[1];
typedef int type_14[1];

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
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

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
_cam3Work cam3_work;

void DemoModeEnter();
void DemoModeExit();

// 
// Start address: 0x27b380
void DemoModeEnter()
{
	// Line 53, Address: 0x27b380, Func Offset: 0
	// Line 55, Address: 0x27b388, Func Offset: 0x8
	// Line 56, Address: 0x27b390, Func Offset: 0x10
	// Line 57, Address: 0x27b398, Func Offset: 0x18
	// Func End, Address: 0x27b3a4, Func Offset: 0x24
}

// 
// Start address: 0x27b3b0
void DemoModeExit()
{
	// Line 65, Address: 0x27b3b0, Func Offset: 0
	// Line 67, Address: 0x27b3b8, Func Offset: 0x8
	// Line 68, Address: 0x27b3c0, Func Offset: 0x10
	// Line 69, Address: 0x27b3c8, Func Offset: 0x18
	// Func End, Address: 0x27b3d4, Func Offset: 0x24
}

