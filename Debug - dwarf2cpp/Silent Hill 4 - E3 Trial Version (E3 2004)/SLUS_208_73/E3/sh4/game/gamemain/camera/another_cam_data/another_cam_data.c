typedef enum _cam3Step : unsigned char;
typedef struct sfObj;
typedef union _anon0;
typedef struct _cam3Work;

typedef void(*type_0)();
typedef void(*type_3)(sfObj*);
typedef void(*type_4)(sfObj*);
typedef void(*type_6)(sfObj*);

typedef void(*type_1)()[2];
typedef _anon0 type_2[256];
typedef void(*type_5)(sfObj*)[3];
typedef short type_7[2];
typedef unsigned short type_8[2];
typedef char type_9[4];
typedef unsigned char type_10[4];
typedef float type_11[4];
typedef float type_12[1];
typedef float type_13[4][4];
typedef int type_14[1];
typedef float type_15[4];

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
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

struct _cam3Work
{
	_cam3Step step;
	float mtx[4][4];
	float rot[4];
	float lookat[4];
	int run;
	int forceRotate;
};

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
_cam3Work cam3_work;

int another_cam_dummy_func(int dummy);

// 
// Start address: 0x2b5020
int another_cam_dummy_func(int dummy)
{
	// Line 37, Address: 0x2b5020, Func Offset: 0
	// Func End, Address: 0x2b5028, Func Offset: 0x8
}

