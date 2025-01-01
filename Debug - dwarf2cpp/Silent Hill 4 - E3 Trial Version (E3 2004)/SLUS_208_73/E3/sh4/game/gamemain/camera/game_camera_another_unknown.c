typedef struct CamDriveArea;
typedef struct CamMvLimitAngleArg;
typedef struct CamMvCircumArg;
typedef enum _cam3Step : unsigned char;
typedef struct sfObj;
typedef struct CamMvCmprxCircumArg;
typedef union _anon0;
typedef struct _cam3Work;
typedef union CamMoveArgUnion;
typedef struct CamLineArea;
typedef struct CamMakeView;
typedef struct CamLimitView;
typedef struct CamMvUnknownArg;
typedef struct CamMvChaseArg;

typedef void(*type_2)();
typedef void(*type_5)(sfObj*);
typedef void(*type_7)(sfObj*);
typedef void(*type_8)(sfObj*);
typedef int(*type_23)();

typedef float type_0[3];
typedef float type_1[2];
typedef void(*type_3)()[2];
typedef _anon0 type_4[256];
typedef float type_6[20];
typedef void(*type_9)(sfObj*)[3];
typedef char type_10[16];
typedef float type_11[4];
typedef float type_12[8];
typedef short type_13[2];
typedef unsigned short type_14[2];
typedef char type_15[4];
typedef unsigned char type_16[4];
typedef float type_17[1];
typedef float type_18[3];
typedef float type_19[4];
typedef int type_20[1];
typedef float type_21[4][4];
typedef float type_22[3];
typedef float type_24[2];
typedef float type_25[3];
typedef float type_26[2];
typedef float type_27[2];
typedef float type_28[4];

struct CamDriveArea
{
	char Name[16];
	unsigned short DataNo;
	union
	{
		float InputDriveArea[8];
		CamLineArea DriveArea;
	};
	int CamMvType;
	float CamViewAng;
	float ColideCamRadius;
	CamMoveArgUnion CamMvArg;
	unsigned char AreaPriority;
	unsigned short AreaBit;
	unsigned short ConvineCamMvAreaBit;
	unsigned short JumpCamMvAreaBit;
	unsigned short InhibitChgAreaBit;
	int(*UseThisCheckFunc)();
	float DistFromControlPos;
	float NearestLinePosXYZ[3];
};

struct CamMvLimitAngleArg
{
	CamLineArea CamMoveArea;
	float Watch2CamVecXYZ[3];
	CamMakeView MakeView;
	CamLimitView LimView;
	float L2ChgType;
};

struct CamMvCircumArg
{
	float CenterPosXZ[2];
	float Radius;
	float Cam2PlayerArcDist;
	float CamYMode;
	float CamY;
	float WatchPlayerY;
	float ViewOrgAngX;
	float WatchOfs2CenterDist;
};

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

struct CamMvCmprxCircumArg
{
	float RailCenterPos[4];
	float MkCharaAngPos[4];
	float OrgCharaAng;
	float OrgRailAng;
	float DiffChara2RailAngRate;
	float RailRadius;
	float ZoomUpDist;
	float WatchPlayerY;
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

union CamMoveArgUnion
{
	float Data[20];
	CamMvUnknownArg Unknown;
	CamMvChaseArg Chase;
	CamMvLimitAngleArg LimAngle;
	CamMvCircumArg Circum;
	CamMvCmprxCircumArg CmprxCircum;
};

struct CamLineArea
{
	float Pos0XYZ[3];
	float Pos1XYZ[3];
	float Radius;
	float CylinderMode;
};

struct CamMakeView
{
	float WatchPlayerY;
	float ViewOrgAngXY[2];
};

struct CamLimitView
{
	float LimOfsAngWidthXY[2];
	float LimAngMvRateXY[2];
};

struct CamMvUnknownArg
{
	int UseViewLimitFlag;
};

struct CamMvChaseArg
{
	CamLineArea CamMoveArea;
	CamMakeView MakeView;
	float ControlCamCircleRadius;
	float ControlCamCircleFwdOffset;
	float Player2CamY;
};

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
_cam3Work cam3_work;

void GameCameraUnknown_SceneInit();
void GameCameraUnknown_ChangeTypeInit(CamDriveArea* pArea);
void GameCameraUnknown_Main();

// 
// Start address: 0x2b4f60
void GameCameraUnknown_SceneInit()
{
	// Line 48, Address: 0x2b4f60, Func Offset: 0
	// Func End, Address: 0x2b4f68, Func Offset: 0x8
}

// 
// Start address: 0x2b4f70
void GameCameraUnknown_ChangeTypeInit(CamDriveArea* pArea)
{
	// Line 51, Address: 0x2b4f70, Func Offset: 0
	// Line 52, Address: 0x2b4f78, Func Offset: 0x8
	// Line 53, Address: 0x2b4f84, Func Offset: 0x14
	// Line 54, Address: 0x2b4f94, Func Offset: 0x24
	// Line 55, Address: 0x2b4fa4, Func Offset: 0x34
	// Line 56, Address: 0x2b4fac, Func Offset: 0x3c
	// Line 58, Address: 0x2b4fb0, Func Offset: 0x40
	// Line 59, Address: 0x2b4fc4, Func Offset: 0x54
	// Line 60, Address: 0x2b4fd8, Func Offset: 0x68
	// Func End, Address: 0x2b4fe4, Func Offset: 0x74
}

// 
// Start address: 0x2b4ff0
void GameCameraUnknown_Main()
{
	float CamMatPtr[4];
	// Line 64, Address: 0x2b4ff0, Func Offset: 0
	// Line 66, Address: 0x2b4ff8, Func Offset: 0x8
	// Line 68, Address: 0x2b5000, Func Offset: 0x10
	// Line 69, Address: 0x2b5008, Func Offset: 0x18
	// Func End, Address: 0x2b5014, Func Offset: 0x24
}

