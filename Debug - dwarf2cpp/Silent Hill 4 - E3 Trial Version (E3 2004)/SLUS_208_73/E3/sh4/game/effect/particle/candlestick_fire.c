typedef struct sfObj;
typedef enum _cam3Step : unsigned char;
typedef struct _cam3Work;
typedef union _anon0;
typedef struct FireWork;

typedef void(*type_2)();
typedef void(*type_5)(sfObj*);
typedef void(*type_6)(sfObj*);
typedef void(*type_9)(sfObj*);

typedef float type_0[4];
typedef float type_1[4][4];
typedef void(*type_3)()[2];
typedef _anon0 type_4[256];
typedef void(*type_7)(sfObj*)[3];
typedef FireWork type_8[5];
typedef short type_10[2];
typedef unsigned short type_11[2];
typedef char type_12[4];
typedef unsigned char type_13[4];
typedef float type_14[1];
typedef int type_15[1];
typedef float type_16[4];

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

struct FireWork
{
	float GenPos[4];
	float BrightRate;
	float AboutFireHeight;
	float MaxPolyWidth;
	float ChgColStartTime;
	float ChgColTime;
	float PrevGenPos[4];
	int PrevPosMkFlag;
	sfObj* pObj;
	float GenLifeRate;
};

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
FireWork FireWAry[5];
_cam3Work cam3_work;

void CandlestickFire_Generate(int CandleNo, float* GenPos, float FireHeight, float FireWidth, unsigned int DemoFlag);

// 
// Start address: 0x2f3540
void CandlestickFire_Generate(int CandleNo, float* GenPos, float FireHeight, float FireWidth, unsigned int DemoFlag)
{
	FireWork* pFW;
	// Line 38, Address: 0x2f3540, Func Offset: 0
	// Line 39, Address: 0x2f3544, Func Offset: 0x4
	// Line 38, Address: 0x2f3548, Func Offset: 0x8
	// Line 39, Address: 0x2f354c, Func Offset: 0xc
	// Line 38, Address: 0x2f3550, Func Offset: 0x10
	// Line 39, Address: 0x2f3554, Func Offset: 0x14
	// Line 38, Address: 0x2f3558, Func Offset: 0x18
	// Line 39, Address: 0x2f355c, Func Offset: 0x1c
	// Line 38, Address: 0x2f3560, Func Offset: 0x20
	// Line 39, Address: 0x2f3564, Func Offset: 0x24
	// Line 38, Address: 0x2f3568, Func Offset: 0x28
	// Line 39, Address: 0x2f356c, Func Offset: 0x2c
	// Line 38, Address: 0x2f3570, Func Offset: 0x30
	// Line 39, Address: 0x2f3574, Func Offset: 0x34
	// Line 42, Address: 0x2f357c, Func Offset: 0x3c
	// Line 43, Address: 0x2f3590, Func Offset: 0x50
	// Line 45, Address: 0x2f35a0, Func Offset: 0x60
	// Line 46, Address: 0x2f35d0, Func Offset: 0x90
	// Line 48, Address: 0x2f35d8, Func Offset: 0x98
	// Line 46, Address: 0x2f35dc, Func Offset: 0x9c
	// Line 48, Address: 0x2f35e0, Func Offset: 0xa0
	// Line 47, Address: 0x2f35e4, Func Offset: 0xa4
	// Line 48, Address: 0x2f35e8, Func Offset: 0xa8
	// Line 49, Address: 0x2f35ec, Func Offset: 0xac
	// Func End, Address: 0x2f360c, Func Offset: 0xcc
}

