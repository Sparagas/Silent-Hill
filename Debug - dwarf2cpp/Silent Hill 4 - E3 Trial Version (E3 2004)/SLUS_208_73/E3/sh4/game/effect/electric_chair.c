typedef struct sfObj;
typedef union _anon0;
typedef struct RichardSmokeOrg;
typedef struct SparkSmokeWork;
typedef enum _cam3Step : unsigned char;
typedef struct _cam3Work;

typedef void(*type_2)(sfObj*);
typedef void(*type_5)();
typedef void(*type_9)(sfObj*);
typedef void(*type_15)(sfObj*);

typedef _anon0 type_0[256];
typedef float type_1[4];
typedef float type_3[4][4];
typedef float type_4[4];
typedef void(*type_6)()[2];
typedef RichardSmokeOrg type_7[5];
typedef SparkSmokeWork type_8[4];
typedef unsigned char type_10[4];
typedef float type_11[4][2];
typedef short type_12[2];
typedef unsigned short type_13[2];
typedef char type_14[4];
typedef unsigned char type_16[4];
typedef void(*type_17)(sfObj*)[3];
typedef float type_18[1];
typedef int type_19[1];

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

struct RichardSmokeOrg
{
	float OrgPos[4];
	float OrgZWidth;
	float SmokeWidth;
};

struct SparkSmokeWork
{
	float IntervalTime;
	sfObj* pObj;
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

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
_cam3Work cam3_work;

void ElectricChair_SparkSmoke();
void ElectricChair_LineSpark_FromHenry();
void ElectricChair_BodySmoke_Weak();
void ElectricChair_BodySmoke_Strong();
void ElectricChair_BodySmoke(int SmokeAlpahVal);

// 
// Start address: 0x2f2930
void ElectricChair_SparkSmoke()
{
	int No;
	float Ang;
	unsigned char SparkRgba[4];
	float RadiusVec2[4];
	float RadiusVec1[4];
	float CenterPosAry[4][2];
	SparkSmokeWork ssWAry[4];
	// Line 45, Address: 0x2f2930, Func Offset: 0
	// Line 58, Address: 0x2f2940, Func Offset: 0x10
	// Line 60, Address: 0x2f294c, Func Offset: 0x1c
	// Line 62, Address: 0x2f2954, Func Offset: 0x24
	// Line 63, Address: 0x2f2988, Func Offset: 0x58
	// Line 65, Address: 0x2f2990, Func Offset: 0x60
	// Line 66, Address: 0x2f29a0, Func Offset: 0x70
	// Line 67, Address: 0x2f29d4, Func Offset: 0xa4
	// Line 68, Address: 0x2f29e0, Func Offset: 0xb0
	// Line 70, Address: 0x2f2a1c, Func Offset: 0xec
	// Line 71, Address: 0x2f2a20, Func Offset: 0xf0
	// Line 83, Address: 0x2f2a74, Func Offset: 0x144
	// Line 84, Address: 0x2f2a84, Func Offset: 0x154
	// Func End, Address: 0x2f2a98, Func Offset: 0x168
}

// 
// Start address: 0x2f2aa0
void ElectricChair_LineSpark_FromHenry()
{
	float GenPos[4];
	float GenSpdVec[4];
	float SpreadAng;
	float SparkSpdVal;
	int No;
	unsigned char SparkRgba[4];
	// Line 92, Address: 0x2f2aa0, Func Offset: 0
	// Line 94, Address: 0x2f2aa4, Func Offset: 0x4
	// Line 92, Address: 0x2f2aa8, Func Offset: 0x8
	// Line 95, Address: 0x2f2aac, Func Offset: 0xc
	// Line 92, Address: 0x2f2ab0, Func Offset: 0x10
	// Line 94, Address: 0x2f2ab4, Func Offset: 0x14
	// Line 92, Address: 0x2f2ab8, Func Offset: 0x18
	// Line 94, Address: 0x2f2abc, Func Offset: 0x1c
	// Line 92, Address: 0x2f2ac0, Func Offset: 0x20
	// Line 95, Address: 0x2f2ac4, Func Offset: 0x24
	// Line 94, Address: 0x2f2ac8, Func Offset: 0x28
	// Line 95, Address: 0x2f2acc, Func Offset: 0x2c
	// Line 96, Address: 0x2f2ad0, Func Offset: 0x30
	// Line 94, Address: 0x2f2ad4, Func Offset: 0x34
	// Line 96, Address: 0x2f2ad8, Func Offset: 0x38
	// Line 95, Address: 0x2f2ae0, Func Offset: 0x40
	// Line 97, Address: 0x2f2ae8, Func Offset: 0x48
	// Line 100, Address: 0x2f2b08, Func Offset: 0x68
	// Line 102, Address: 0x2f2b10, Func Offset: 0x70
	// Line 110, Address: 0x2f2b3c, Func Offset: 0x9c
	// Line 111, Address: 0x2f2b4c, Func Offset: 0xac
	// Func End, Address: 0x2f2b64, Func Offset: 0xc4
}

// 
// Start address: 0x2f2b70
void ElectricChair_BodySmoke_Weak()
{
	// Line 130, Address: 0x2f2b70, Func Offset: 0
	// Func End, Address: 0x2f2b78, Func Offset: 0x8
}

// 
// Start address: 0x2f2b80
void ElectricChair_BodySmoke_Strong()
{
	// Line 137, Address: 0x2f2b80, Func Offset: 0
	// Line 138, Address: 0x2f2b88, Func Offset: 0x8
	// Line 139, Address: 0x2f2b90, Func Offset: 0x10
	// Line 140, Address: 0x2f2b98, Func Offset: 0x18
	// Func End, Address: 0x2f2ba4, Func Offset: 0x24
}

// 
// Start address: 0x2f2bb0
void ElectricChair_BodySmoke(int SmokeAlpahVal)
{
	int No;
	RichardSmokeOrg OrgData[5];
	// Line 146, Address: 0x2f2bb0, Func Offset: 0
	// Line 177, Address: 0x2f2bc8, Func Offset: 0x18
	// Line 179, Address: 0x2f2bd8, Func Offset: 0x28
	// Line 186, Address: 0x2f2bf0, Func Offset: 0x40
	// Line 187, Address: 0x2f2c00, Func Offset: 0x50
	// Func End, Address: 0x2f2c18, Func Offset: 0x68
}

