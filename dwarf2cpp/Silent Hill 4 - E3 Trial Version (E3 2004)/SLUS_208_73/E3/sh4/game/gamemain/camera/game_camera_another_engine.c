typedef struct BgObstPolygon;
typedef struct _anon0;
typedef union _anon1;
typedef enum _cam3Step : unsigned char;
typedef struct sfObj;
typedef struct _cam3Work;
typedef struct _anon2;
typedef struct _anon3;
typedef struct CameraEngineWork;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;

typedef void(*type_0)(float*, float*, float);
typedef void(*type_3)(float*, float*, float);
typedef void(*type_4)();
typedef void(*type_15)(sfObj*);
typedef void(*type_17)(sfObj*);
typedef void(*type_18)(sfObj*);

typedef float type_1[4];
typedef BgObstPolygon type_2[32];
typedef void(*type_5)()[2];
typedef short type_6[2];
typedef unsigned short type_7[2];
typedef char type_8[4];
typedef unsigned char type_9[4];
typedef _anon1 type_10[256];
typedef float type_11[1];
typedef float type_12[4];
typedef int type_13[1];
typedef float type_14[4][4];
typedef int type_16[32];
typedef float type_19[3];
typedef float type_20[4];
typedef void(*type_21)(sfObj*)[3];
typedef _anon5 type_22[4];
typedef _anon6 type_23[0];

struct BgObstPolygon
{
	_anon0* pPoly;
	int Type;
	float InvadeDist;
	float PrsAngY;
	float PrsXZDir[4];
};

struct _anon0
{
	_anon6 vertex[0];
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

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
};

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

struct _cam3Work
{
	_cam3Step step;
	float mtx[4][4];
	float rot[4];
	float lookat[4];
	int run;
	int forceRotate;
};

struct _anon2
{
	float start[4];
	float end[4];
};

struct _anon3
{
	float abcd[4];
};

struct CameraEngineWork
{
	int BypassCamUseFlag;
	float BypassView2WldMat[4][4];
	float BypassViewAng;
	float View2WldMat[4][4];
	float ViewAng;
	float RollTgtAng;
	float RollOmega;
	float RollAng;
	float CameraHitRadius;
	float CeilingKeepDist;
	float FloorKeepDist;
	float CamMaxSpd;
	float CamAccelVal;
	void(*AdjCamTgtMvVecFunc)(float*, float*, float);
	float TgtPosAddMvVec[4];
	float CamInputTgtPos[4];
	float CamRealTgtPos[4];
	float CamPos[4];
	float CamSpd[4];
	float ControlAngY;
	float WatchTgtPos[4];
	float ViewVec[4];
	float ViewOmegaVec[4];
	float CamOmegaVec[4];
	float ViewDownVec[4];
	float ViewOrgAngX;
	float ViewOrgAngY;
	float ViewLimAngWidthX;
	float ViewLimAngWidthY;
	float ViewLimAngMvRateX;
	float ViewLimAngMvRateY;
	BgObstPolygon ObstPolyAry[32];
	int ObstPolyNum;
};

struct _anon4
{
	float center[4];
	float radius;
};

struct _anon5
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

union _anon6
{
	float node[4];
	_anon5 data[4];
};

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
CameraEngineWork ceW;
float sg_matrix_unit[4][4];
float sg_vector_zero[4];
float sg_vector_unit_y[4];
_cam3Work cam3_work;

void CameraEngine_StageInit();
int IntersectLineAndPlane(float* pDist, _anon2* pLine, _anon3* pPlane);
unsigned int CameraEngine_BypassCameraUseFlag();
void CameraEngine_SetBypassCamera(float* CamPos, float* WatchPos, float ViewAng);
void CameraEngine_SetBypassCameraByAngle(float* CamPos, float AngX, float AngY, float ViewAng);
void CameraEngine_SetBypassCameraRoll(float RollAng);
void CameraEngine_SetCameraHitRadius(float CameraHitRadius);
float CameraEngine_GetCameraHitRadius();
float CameraEngine_SetCameraCeilingKeepDist(float CeilingKeepDist);
float CameraEngine_SetCameraFloorKeepDist(float FloorKeepDist);
void* CameraEngine_SetAdjustCamTgtMoveFunc(void(*AdjCamTgtMvVecFunc)(float*, float*, float));
void CameraEngine_SetCameraMaxSpeed(float CamMaxSpd);
float CameraEngine_GetCameraMaxSpeed();
void CameraEngine_SetCameraAccel(float CamAccelVal);
void CameraEngine_GetCameraSpeed(float* Vec);
void CameraEngine_SetCameraPosition(float* Pos, unsigned int ContinueMvMode);
void CameraEngine_GetCameraTargetPosition(float* RealTgtPos);
void CameraEngine_GetCameraPosition(float* Pos);
float CameraEngine_SetControlAngY(float ControlAngY);
void CameraEngine_SetViewRotBaseMatrix(float ViewOrgAngX, float ViewOrgAngY);
void CameraEngine_SetViewLimitAngleWidth(float LimAngWidthX, float LimAngWidthY);
void CameraEngine_SetViewLimitAngMoveRate(float ViewLimAngMvRateX, float ViewLimAngMvRateY);
void CameraEngine_SetWatchPosition(float* Pos, unsigned int ContinueMvMode);
void CameraEngine_GetViewVector(float* Vec);
void CameraEngine_GetCameraOmegaVector(float* OmegaVec);
void CameraEngine_SetRollAngle(float Ang, unsigned int TargetMode);
void CameraEngine_SetViewAngle(float Ang);
float CameraEngine_GetViewAngle();
float[4] CameraEngine_CalcCameraMatrix(int HitCheckWarpedCircleFlag);
void CalcOmegaVectorFromTwoVectors(float* OmegaVec, float* RotVec, float* PrevVec);
int shortMoveVecWhenInBgObstacle(float* MvVec, float* CamTgtPos);
void adjustMoveVectorByBgObstacle(float* MvVec, int HitCheckWarpedCircleFlag, float MinMvLen, float* CenterPos, float XZHitDist, float CeilingKeepDist, float FloorKeepDist, float* WatchTgtPos);
void get_floor_and_ceiling_y(float* pFloorY, float* pCeilingY, float* ChkPos, float ChkDist);
void obstacleObstPolygon_Init();
void ObstPolygon_AddData(_anon0* pPoly, float BasisCamAreaRadius, float* Center, float* WarpDirVec);
void construct_BgObstPolygon(BgObstPolygon* pObstPoly, _anon0* pPoly, float InvadeDist, float* PrsXZDir, int Type);
void make_press_angle_order_of_ObstPolyIdx(int* ObstPolyIdxOrderAry, int ObstPolyNum, BgObstPolygon* ObstPolyAry);
unsigned int AdjustMoveVector_EscapeFromObstacles(float* MvVec, int ObstPolyNum, BgObstPolygon* ObstPolyAry, int* ObstPolyIdxOrderAry, float MinMvLen);
void adjust_move_vec_repulsion_from_wall(float* MvVec, float* WallNormal, float MinMvFromWall);
void make_vector_from_invade_dist_to_two_walls(float* EscMvVec, float L_WallInvadeDist, float R_WallInvadeDist, float* L_AngDir, float* R_AngDir, float* L_PrsXZDir);

// 
// Start address: 0x28b660
void CameraEngine_StageInit()
{
	// Line 161, Address: 0x28b660, Func Offset: 0
	// Line 162, Address: 0x28b664, Func Offset: 0x4
	// Line 161, Address: 0x28b668, Func Offset: 0x8
	// Line 162, Address: 0x28b66c, Func Offset: 0xc
	// Line 163, Address: 0x28b67c, Func Offset: 0x1c
	// Line 165, Address: 0x28b688, Func Offset: 0x28
	// Line 171, Address: 0x28b68c, Func Offset: 0x2c
	// Line 165, Address: 0x28b690, Func Offset: 0x30
	// Line 171, Address: 0x28b694, Func Offset: 0x34
	// Line 165, Address: 0x28b698, Func Offset: 0x38
	// Line 166, Address: 0x28b69c, Func Offset: 0x3c
	// Line 165, Address: 0x28b6a0, Func Offset: 0x40
	// Line 171, Address: 0x28b6ac, Func Offset: 0x4c
	// Line 166, Address: 0x28b6b4, Func Offset: 0x54
	// Line 169, Address: 0x28b6bc, Func Offset: 0x5c
	// Line 168, Address: 0x28b6c4, Func Offset: 0x64
	// Line 173, Address: 0x28b6dc, Func Offset: 0x7c
	// Func End, Address: 0x28b6e8, Func Offset: 0x88
}

// 
// Start address: 0x28b6f0
int IntersectLineAndPlane(float* pDist, _anon2* pLine, _anon3* pPlane)
{
	float LineDir[4];
	float Start2PlaneDist;
	float DotVal;
	// Line 191, Address: 0x28b6f0, Func Offset: 0
	// Line 186, Address: 0x28b6f4, Func Offset: 0x4
	// Line 191, Address: 0x28b6f8, Func Offset: 0x8
	// Line 193, Address: 0x28b6fc, Func Offset: 0xc
	// Line 191, Address: 0x28b700, Func Offset: 0x10
	// Line 193, Address: 0x28b704, Func Offset: 0x14
	// Line 191, Address: 0x28b708, Func Offset: 0x18
	// Line 193, Address: 0x28b72c, Func Offset: 0x3c
	// Line 194, Address: 0x28b740, Func Offset: 0x50
	// Line 195, Address: 0x28b76c, Func Offset: 0x7c
	// Line 198, Address: 0x28b78c, Func Offset: 0x9c
	// Line 200, Address: 0x28b7c4, Func Offset: 0xd4
	// Line 202, Address: 0x28b7e4, Func Offset: 0xf4
	// Line 203, Address: 0x28b7e8, Func Offset: 0xf8
	// Line 205, Address: 0x28b7f0, Func Offset: 0x100
	// Line 207, Address: 0x28b7f8, Func Offset: 0x108
	// Line 211, Address: 0x28b80c, Func Offset: 0x11c
	// Line 210, Address: 0x28b810, Func Offset: 0x120
	// Line 211, Address: 0x28b81c, Func Offset: 0x12c
	// Line 212, Address: 0x28b824, Func Offset: 0x134
	// Line 214, Address: 0x28b828, Func Offset: 0x138
	// Line 216, Address: 0x28b830, Func Offset: 0x140
	// Func End, Address: 0x28b838, Func Offset: 0x148
}

// 
// Start address: 0x28b840
unsigned int CameraEngine_BypassCameraUseFlag()
{
	// Line 224, Address: 0x28b840, Func Offset: 0
	// Line 225, Address: 0x28b848, Func Offset: 0x8
	// Func End, Address: 0x28b850, Func Offset: 0x10
}

// 
// Start address: 0x28b850
void CameraEngine_SetBypassCamera(float* CamPos, float* WatchPos, float ViewAng)
{
	float ViewVec[4];
	float DownVec[4];
	float CosX;
	// Line 239, Address: 0x28b850, Func Offset: 0
	// Line 235, Address: 0x28b854, Func Offset: 0x4
	// Line 239, Address: 0x28b858, Func Offset: 0x8
	// Line 238, Address: 0x28b85c, Func Offset: 0xc
	// Line 240, Address: 0x28b864, Func Offset: 0x14
	// Line 238, Address: 0x28b868, Func Offset: 0x18
	// Line 240, Address: 0x28b86c, Func Offset: 0x1c
	// Line 241, Address: 0x28b87c, Func Offset: 0x2c
	// Line 248, Address: 0x28b8a8, Func Offset: 0x58
	// Line 243, Address: 0x28b8b4, Func Offset: 0x64
	// Line 248, Address: 0x28b8b8, Func Offset: 0x68
	// Line 243, Address: 0x28b8bc, Func Offset: 0x6c
	// Line 244, Address: 0x28b8c8, Func Offset: 0x78
	// Line 245, Address: 0x28b8cc, Func Offset: 0x7c
	// Line 244, Address: 0x28b8d0, Func Offset: 0x80
	// Line 243, Address: 0x28b8d4, Func Offset: 0x84
	// Line 244, Address: 0x28b8e4, Func Offset: 0x94
	// Line 245, Address: 0x28b8f0, Func Offset: 0xa0
	// Line 243, Address: 0x28b8f8, Func Offset: 0xa8
	// Line 244, Address: 0x28b8fc, Func Offset: 0xac
	// Line 245, Address: 0x28b900, Func Offset: 0xb0
	// Line 248, Address: 0x28b90c, Func Offset: 0xbc
	// Line 249, Address: 0x28b924, Func Offset: 0xd4
	// Line 250, Address: 0x28b938, Func Offset: 0xe8
	// Line 251, Address: 0x28b94c, Func Offset: 0xfc
	// Line 252, Address: 0x28b95c, Func Offset: 0x10c
	// Line 255, Address: 0x28b964, Func Offset: 0x114
	// Line 252, Address: 0x28b968, Func Offset: 0x118
	// Line 253, Address: 0x28b96c, Func Offset: 0x11c
	// Line 255, Address: 0x28b974, Func Offset: 0x124
	// Line 253, Address: 0x28b97c, Func Offset: 0x12c
	// Line 255, Address: 0x28b980, Func Offset: 0x130
	// Line 254, Address: 0x28b988, Func Offset: 0x138
	// Line 256, Address: 0x28b994, Func Offset: 0x144
	// Func End, Address: 0x28b99c, Func Offset: 0x14c
}

// 
// Start address: 0x28b9a0
void CameraEngine_SetBypassCameraByAngle(float* CamPos, float AngX, float AngY, float ViewAng)
{
	float WatchPos[4];
	// Line 268, Address: 0x28b9a0, Func Offset: 0
	// Line 271, Address: 0x28b9c8, Func Offset: 0x28
	// Line 272, Address: 0x28b9e0, Func Offset: 0x40
	// Line 273, Address: 0x28b9f0, Func Offset: 0x50
	// Line 274, Address: 0x28ba0c, Func Offset: 0x6c
	// Line 275, Address: 0x28ba14, Func Offset: 0x74
	// Line 273, Address: 0x28ba18, Func Offset: 0x78
	// Line 275, Address: 0x28ba1c, Func Offset: 0x7c
	// Line 276, Address: 0x28ba30, Func Offset: 0x90
	// Line 277, Address: 0x28ba40, Func Offset: 0xa0
	// Func End, Address: 0x28ba60, Func Offset: 0xc0
}

// 
// Start address: 0x28ba60
void CameraEngine_SetBypassCameraRoll(float RollAng)
{
	float RollZMat[4][4];
	// Line 286, Address: 0x28ba60, Func Offset: 0
	// Line 289, Address: 0x28ba64, Func Offset: 0x4
	// Line 286, Address: 0x28ba68, Func Offset: 0x8
	// Line 289, Address: 0x28ba6c, Func Offset: 0xc
	// Line 290, Address: 0x28ba78, Func Offset: 0x18
	// Line 291, Address: 0x28baf4, Func Offset: 0x94
	// Func End, Address: 0x28bb00, Func Offset: 0xa0
}

// 
// Start address: 0x28bb00
void CameraEngine_SetCameraHitRadius(float CameraHitRadius)
{
	// Line 302, Address: 0x28bb00, Func Offset: 0
	// Line 303, Address: 0x28bb04, Func Offset: 0x4
	// Func End, Address: 0x28bb0c, Func Offset: 0xc
}

// 
// Start address: 0x28bb10
float CameraEngine_GetCameraHitRadius()
{
	// Line 309, Address: 0x28bb10, Func Offset: 0
	// Line 310, Address: 0x28bb14, Func Offset: 0x4
	// Func End, Address: 0x28bb1c, Func Offset: 0xc
}

// 
// Start address: 0x28bb20
float CameraEngine_SetCameraCeilingKeepDist(float CeilingKeepDist)
{
	float OldVal;
	// Line 319, Address: 0x28bb20, Func Offset: 0
	// Line 320, Address: 0x28bb28, Func Offset: 0x8
	// Line 322, Address: 0x28bb2c, Func Offset: 0xc
	// Func End, Address: 0x28bb34, Func Offset: 0x14
}

// 
// Start address: 0x28bb40
float CameraEngine_SetCameraFloorKeepDist(float FloorKeepDist)
{
	float OldVal;
	// Line 330, Address: 0x28bb40, Func Offset: 0
	// Line 331, Address: 0x28bb48, Func Offset: 0x8
	// Line 333, Address: 0x28bb4c, Func Offset: 0xc
	// Func End, Address: 0x28bb54, Func Offset: 0x14
}

// 
// Start address: 0x28bb60
void* CameraEngine_SetAdjustCamTgtMoveFunc(void(*AdjCamTgtMvVecFunc)(float*, float*, float))
{
	void* PreFunc;
	// Line 354, Address: 0x28bb60, Func Offset: 0
	// Line 355, Address: 0x28bb68, Func Offset: 0x8
	// Line 358, Address: 0x28bb6c, Func Offset: 0xc
	// Func End, Address: 0x28bb74, Func Offset: 0x14
}

// 
// Start address: 0x28bb80
void CameraEngine_SetCameraMaxSpeed(float CamMaxSpd)
{
	// Line 368, Address: 0x28bb80, Func Offset: 0
	// Line 369, Address: 0x28bb84, Func Offset: 0x4
	// Func End, Address: 0x28bb8c, Func Offset: 0xc
}

// 
// Start address: 0x28bb90
float CameraEngine_GetCameraMaxSpeed()
{
	// Line 375, Address: 0x28bb90, Func Offset: 0
	// Line 376, Address: 0x28bb94, Func Offset: 0x4
	// Func End, Address: 0x28bb9c, Func Offset: 0xc
}

// 
// Start address: 0x28bba0
void CameraEngine_SetCameraAccel(float CamAccelVal)
{
	// Line 385, Address: 0x28bba0, Func Offset: 0
	// Line 386, Address: 0x28bba4, Func Offset: 0x4
	// Func End, Address: 0x28bbac, Func Offset: 0xc
}

// 
// Start address: 0x28bbb0
void CameraEngine_GetCameraSpeed(float* Vec)
{
	// Line 410, Address: 0x28bbb0, Func Offset: 0
	// Line 411, Address: 0x28bbbc, Func Offset: 0xc
	// Func End, Address: 0x28bbc4, Func Offset: 0x14
}

// 
// Start address: 0x28bbd0
void CameraEngine_SetCameraPosition(float* Pos, unsigned int ContinueMvMode)
{
	// Line 423, Address: 0x28bbd0, Func Offset: 0
	// Line 425, Address: 0x28bbd8, Func Offset: 0x8
	// Line 428, Address: 0x28bbe0, Func Offset: 0x10
	// Line 425, Address: 0x28bbe4, Func Offset: 0x14
	// Line 426, Address: 0x28bbe8, Func Offset: 0x18
	// Line 427, Address: 0x28bbf4, Func Offset: 0x24
	// Line 428, Address: 0x28bc00, Func Offset: 0x30
	// Line 430, Address: 0x28bc08, Func Offset: 0x38
	// Line 432, Address: 0x28bc10, Func Offset: 0x40
	// Line 433, Address: 0x28bc28, Func Offset: 0x58
	// Line 434, Address: 0x28bc38, Func Offset: 0x68
	// Line 435, Address: 0x28bc50, Func Offset: 0x80
	// Line 436, Address: 0x28bc60, Func Offset: 0x90
	// Line 438, Address: 0x28bc70, Func Offset: 0xa0
	// Func End, Address: 0x28bc78, Func Offset: 0xa8
}

// 
// Start address: 0x28bc80
void CameraEngine_GetCameraTargetPosition(float* RealTgtPos)
{
	// Line 447, Address: 0x28bc80, Func Offset: 0
	// Line 448, Address: 0x28bc8c, Func Offset: 0xc
	// Func End, Address: 0x28bc94, Func Offset: 0x14
}

// 
// Start address: 0x28bca0
void CameraEngine_GetCameraPosition(float* Pos)
{
	// Line 457, Address: 0x28bca0, Func Offset: 0
	// Line 458, Address: 0x28bcac, Func Offset: 0xc
	// Func End, Address: 0x28bcb4, Func Offset: 0x14
}

// 
// Start address: 0x28bcc0
float CameraEngine_SetControlAngY(float ControlAngY)
{
	float PrevVal;
	// Line 467, Address: 0x28bcc0, Func Offset: 0
	// Line 468, Address: 0x28bcc8, Func Offset: 0x8
	// Line 470, Address: 0x28bccc, Func Offset: 0xc
	// Func End, Address: 0x28bcd4, Func Offset: 0x14
}

// 
// Start address: 0x28bce0
void CameraEngine_SetViewRotBaseMatrix(float ViewOrgAngX, float ViewOrgAngY)
{
	// Line 503, Address: 0x28bce0, Func Offset: 0
	// Line 504, Address: 0x28bce8, Func Offset: 0x8
	// Line 505, Address: 0x28bcec, Func Offset: 0xc
	// Func End, Address: 0x28bcf4, Func Offset: 0x14
}

// 
// Start address: 0x28bd00
void CameraEngine_SetViewLimitAngleWidth(float LimAngWidthX, float LimAngWidthY)
{
	// Line 518, Address: 0x28bd00, Func Offset: 0
	// Line 519, Address: 0x28bd08, Func Offset: 0x8
	// Line 520, Address: 0x28bd0c, Func Offset: 0xc
	// Func End, Address: 0x28bd14, Func Offset: 0x14
}

// 
// Start address: 0x28bd20
void CameraEngine_SetViewLimitAngMoveRate(float ViewLimAngMvRateX, float ViewLimAngMvRateY)
{
	// Line 535, Address: 0x28bd20, Func Offset: 0
	// Line 536, Address: 0x28bd28, Func Offset: 0x8
	// Line 537, Address: 0x28bd2c, Func Offset: 0xc
	// Func End, Address: 0x28bd34, Func Offset: 0x14
}

// 
// Start address: 0x28bd40
void CameraEngine_SetWatchPosition(float* Pos, unsigned int ContinueMvMode)
{
	// Line 547, Address: 0x28bd40, Func Offset: 0
	// Line 549, Address: 0x28bd48, Func Offset: 0x8
	// Line 552, Address: 0x28bd50, Func Offset: 0x10
	// Line 549, Address: 0x28bd54, Func Offset: 0x14
	// Line 550, Address: 0x28bd58, Func Offset: 0x18
	// Line 551, Address: 0x28bd64, Func Offset: 0x24
	// Line 552, Address: 0x28bd70, Func Offset: 0x30
	// Line 554, Address: 0x28bd78, Func Offset: 0x38
	// Line 556, Address: 0x28bd80, Func Offset: 0x40
	// Line 557, Address: 0x28bd9c, Func Offset: 0x5c
	// Line 559, Address: 0x28bdd0, Func Offset: 0x90
	// Line 561, Address: 0x28bde8, Func Offset: 0xa8
	// Line 563, Address: 0x28be00, Func Offset: 0xc0
	// Func End, Address: 0x28be08, Func Offset: 0xc8
}

// 
// Start address: 0x28be10
void CameraEngine_GetViewVector(float* Vec)
{
	// Line 571, Address: 0x28be10, Func Offset: 0
	// Line 572, Address: 0x28be1c, Func Offset: 0xc
	// Func End, Address: 0x28be24, Func Offset: 0x14
}

// 
// Start address: 0x28be30
void CameraEngine_GetCameraOmegaVector(float* OmegaVec)
{
	// Line 581, Address: 0x28be30, Func Offset: 0
	// Line 582, Address: 0x28be3c, Func Offset: 0xc
	// Func End, Address: 0x28be44, Func Offset: 0x14
}

// 
// Start address: 0x28be50
void CameraEngine_SetRollAngle(float Ang, unsigned int TargetMode)
{
	// Line 593, Address: 0x28be50, Func Offset: 0
	// Line 595, Address: 0x28be54, Func Offset: 0x4
	// Line 596, Address: 0x28be5c, Func Offset: 0xc
	// Line 597, Address: 0x28be64, Func Offset: 0x14
	// Line 598, Address: 0x28be74, Func Offset: 0x24
	// Line 599, Address: 0x28be78, Func Offset: 0x28
	// Func End, Address: 0x28be80, Func Offset: 0x30
}

// 
// Start address: 0x28be80
void CameraEngine_SetViewAngle(float Ang)
{
	// Line 616, Address: 0x28be80, Func Offset: 0
	// Line 617, Address: 0x28be84, Func Offset: 0x4
	// Func End, Address: 0x28be8c, Func Offset: 0xc
}

// 
// Start address: 0x28be90
float CameraEngine_GetViewAngle()
{
	// Line 623, Address: 0x28be90, Func Offset: 0
	// Line 624, Address: 0x28be94, Func Offset: 0x4
	// Func End, Address: 0x28be9c, Func Offset: 0xc
}

// 
// Start address: 0x28bea0
float[4] CameraEngine_CalcCameraMatrix(int HitCheckWarpedCircleFlag)
{
	float dt;
	float ViewRotBaseMat[4][4];
	float SetOrgAngX;
	float Vec[4];
	float MaxLimAngX;
	float MinLimAngX;
	float RealTgtMvVec[4];
	float DiffVec[4];
	float DiffLen;
	float RealTgtMaxSpd;
	float PrevViewVec[4];
	float Diff2TgtAng;
	float LimOmega;
	float EXV[4];
	float RollEffectMat[4][4];
	float arg[3];
	// Line 633, Address: 0x28bea0, Func Offset: 0
	// Line 635, Address: 0x28beb4, Func Offset: 0x14
	// Line 640, Address: 0x28bebc, Func Offset: 0x1c
	// Line 641, Address: 0x28becc, Func Offset: 0x2c
	// Line 642, Address: 0x28bed4, Func Offset: 0x34
	// Line 643, Address: 0x28bee0, Func Offset: 0x40
	// Line 644, Address: 0x28beec, Func Offset: 0x4c
	// Line 652, Address: 0x28bef0, Func Offset: 0x50
	// Line 653, Address: 0x28bf18, Func Offset: 0x78
	// Line 654, Address: 0x28bf48, Func Offset: 0xa8
	// Line 658, Address: 0x28bf50, Func Offset: 0xb0
	// Line 661, Address: 0x28bf6c, Func Offset: 0xcc
	// Line 663, Address: 0x28bf78, Func Offset: 0xd8
	// Line 665, Address: 0x28bfa4, Func Offset: 0x104
	// Line 667, Address: 0x28bfd0, Func Offset: 0x130
	// Line 668, Address: 0x28bfd8, Func Offset: 0x138
	// Line 672, Address: 0x28bff0, Func Offset: 0x150
	// Line 674, Address: 0x28c010, Func Offset: 0x170
	// Line 675, Address: 0x28c020, Func Offset: 0x180
	// Line 677, Address: 0x28c030, Func Offset: 0x190
	// Line 687, Address: 0x28c040, Func Offset: 0x1a0
	// Line 688, Address: 0x28c054, Func Offset: 0x1b4
	// Line 687, Address: 0x28c068, Func Offset: 0x1c8
	// Line 688, Address: 0x28c06c, Func Offset: 0x1cc
	// Line 689, Address: 0x28c080, Func Offset: 0x1e0
	// Line 690, Address: 0x28c0a4, Func Offset: 0x204
	// Line 691, Address: 0x28c0b8, Func Offset: 0x218
	// Line 692, Address: 0x28c0c4, Func Offset: 0x224
	// Line 693, Address: 0x28c0d0, Func Offset: 0x230
	// Line 694, Address: 0x28c0e8, Func Offset: 0x248
	// Line 695, Address: 0x28c0f0, Func Offset: 0x250
	// Line 697, Address: 0x28c0f8, Func Offset: 0x258
	// Line 701, Address: 0x28c128, Func Offset: 0x288
	// Line 702, Address: 0x28c138, Func Offset: 0x298
	// Line 704, Address: 0x28c164, Func Offset: 0x2c4
	// Line 706, Address: 0x28c168, Func Offset: 0x2c8
	// Line 709, Address: 0x28c184, Func Offset: 0x2e4
	// Line 714, Address: 0x28c190, Func Offset: 0x2f0
	// Line 726, Address: 0x28c1d8, Func Offset: 0x338
	// Line 731, Address: 0x28c1e8, Func Offset: 0x348
	// Line 732, Address: 0x28c210, Func Offset: 0x370
	// Line 733, Address: 0x28c224, Func Offset: 0x384
	// Line 735, Address: 0x28c230, Func Offset: 0x390
	// Line 737, Address: 0x28c238, Func Offset: 0x398
	// Line 748, Address: 0x28c260, Func Offset: 0x3c0
	// Line 757, Address: 0x28c2a4, Func Offset: 0x404
	// Line 763, Address: 0x28c2b0, Func Offset: 0x410
	// Line 757, Address: 0x28c2bc, Func Offset: 0x41c
	// Line 763, Address: 0x28c2c0, Func Offset: 0x420
	// Line 764, Address: 0x28c2c8, Func Offset: 0x428
	// Line 773, Address: 0x28c304, Func Offset: 0x464
	// Line 785, Address: 0x28c354, Func Offset: 0x4b4
	// Line 796, Address: 0x28c36c, Func Offset: 0x4cc
	// Line 797, Address: 0x28c37c, Func Offset: 0x4dc
	// Line 801, Address: 0x28c384, Func Offset: 0x4e4
	// Line 797, Address: 0x28c394, Func Offset: 0x4f4
	// Line 801, Address: 0x28c398, Func Offset: 0x4f8
	// Line 802, Address: 0x28c3b4, Func Offset: 0x514
	// Line 803, Address: 0x28c3c0, Func Offset: 0x520
	// Line 804, Address: 0x28c3c4, Func Offset: 0x524
	// Line 805, Address: 0x28c3c8, Func Offset: 0x528
	// Line 806, Address: 0x28c3e4, Func Offset: 0x544
	// Line 808, Address: 0x28c3e8, Func Offset: 0x548
	// Line 809, Address: 0x28c3fc, Func Offset: 0x55c
	// Line 810, Address: 0x28c424, Func Offset: 0x584
	// Line 811, Address: 0x28c434, Func Offset: 0x594
	// Line 812, Address: 0x28c440, Func Offset: 0x5a0
	// Line 813, Address: 0x28c468, Func Offset: 0x5c8
	// Line 814, Address: 0x28c47c, Func Offset: 0x5dc
	// Line 815, Address: 0x28c480, Func Offset: 0x5e0
	// Line 822, Address: 0x28c48c, Func Offset: 0x5ec
	// Line 815, Address: 0x28c490, Func Offset: 0x5f0
	// Line 822, Address: 0x28c494, Func Offset: 0x5f4
	// Line 815, Address: 0x28c4a0, Func Offset: 0x600
	// Line 822, Address: 0x28c4b8, Func Offset: 0x618
	// Line 823, Address: 0x28c4d0, Func Offset: 0x630
	// Line 824, Address: 0x28c4fc, Func Offset: 0x65c
	// Line 838, Address: 0x28c528, Func Offset: 0x688
	// Line 840, Address: 0x28c540, Func Offset: 0x6a0
	// Line 842, Address: 0x28c570, Func Offset: 0x6d0
	// Line 841, Address: 0x28c578, Func Offset: 0x6d8
	// Line 842, Address: 0x28c580, Func Offset: 0x6e0
	// Line 841, Address: 0x28c588, Func Offset: 0x6e8
	// Line 842, Address: 0x28c58c, Func Offset: 0x6ec
	// Line 843, Address: 0x28c594, Func Offset: 0x6f4
	// Line 844, Address: 0x28c5ac, Func Offset: 0x70c
	// Line 846, Address: 0x28c5c4, Func Offset: 0x724
	// Line 849, Address: 0x28c648, Func Offset: 0x7a8
	// Line 851, Address: 0x28c658, Func Offset: 0x7b8
	// Line 850, Address: 0x28c65c, Func Offset: 0x7bc
	// Line 851, Address: 0x28c660, Func Offset: 0x7c0
	// Line 855, Address: 0x28c668, Func Offset: 0x7c8
	// Func End, Address: 0x28c680, Func Offset: 0x7e0
}

// 
// Start address: 0x28c680
void CalcOmegaVectorFromTwoVectors(float* OmegaVec, float* RotVec, float* PrevVec)
{
	float CrsVec[4];
	float SinVal;
	float CosVal;
	float RotRad;
	// Line 866, Address: 0x28c680, Func Offset: 0
	// Line 870, Address: 0x28c688, Func Offset: 0x8
	// Line 866, Address: 0x28c68c, Func Offset: 0xc
	// Line 870, Address: 0x28c69c, Func Offset: 0x1c
	// Line 871, Address: 0x28c6b4, Func Offset: 0x34
	// Line 872, Address: 0x28c6d8, Func Offset: 0x58
	// Line 874, Address: 0x28c6f8, Func Offset: 0x78
	// Line 875, Address: 0x28c718, Func Offset: 0x98
	// Line 876, Address: 0x28c720, Func Offset: 0xa0
	// Line 878, Address: 0x28c728, Func Offset: 0xa8
	// Line 879, Address: 0x28c730, Func Offset: 0xb0
	// Line 881, Address: 0x28c760, Func Offset: 0xe0
	// Func End, Address: 0x28c778, Func Offset: 0xf8
}

// 
// Start address: 0x28c780
int shortMoveVecWhenInBgObstacle(float* MvVec, float* CamTgtPos)
{
	_anon2 ChkLine;
	_anon3 Plane;
	int HitFlag;
	float MvLen;
	float Dist;
	// Line 891, Address: 0x28c780, Func Offset: 0
	// Line 902, Address: 0x28c798, Func Offset: 0x18
	// Line 904, Address: 0x28c7b0, Func Offset: 0x30
	// Line 906, Address: 0x28c7b8, Func Offset: 0x38
	// Line 907, Address: 0x28c7d8, Func Offset: 0x58
	// Line 908, Address: 0x28c7ec, Func Offset: 0x6c
	// Line 909, Address: 0x28c7f4, Func Offset: 0x74
	// Line 911, Address: 0x28c7f8, Func Offset: 0x78
	// Line 912, Address: 0x28c804, Func Offset: 0x84
	// Line 914, Address: 0x28c81c, Func Offset: 0x9c
	// Line 916, Address: 0x28c828, Func Offset: 0xa8
	// Line 919, Address: 0x28c848, Func Offset: 0xc8
	// Line 922, Address: 0x28c880, Func Offset: 0x100
	// Line 923, Address: 0x28c888, Func Offset: 0x108
	// Func End, Address: 0x28c8a0, Func Offset: 0x120
}

// 
// Start address: 0x28c8a0
void adjustMoveVectorByBgObstacle(float* MvVec, int HitCheckWarpedCircleFlag, float MinMvLen, float* CenterPos, float XZHitDist, float CeilingKeepDist, float FloorKeepDist, float* WatchTgtPos)
{
	_anon4 ObstChkBall;
	int ChkPolyNum;
	int PolyNo;
	_anon0* pPoly;
	float MvLen;
	_anon3 Plane;
	float DotVal;
	float WatchTgtDirVec[4];
	float* WarpDirVecPtr;
	int ObstPolyIdxOrderAry[32];
	float ChkPos[4];
	float FloorY;
	float CeilingY;
	// Line 999, Address: 0x28c8a0, Func Offset: 0
	// Line 1011, Address: 0x28c8f4, Func Offset: 0x54
	// Line 1012, Address: 0x28c914, Func Offset: 0x74
	// Line 1014, Address: 0x28c920, Func Offset: 0x80
	// Line 1013, Address: 0x28c924, Func Offset: 0x84
	// Line 1014, Address: 0x28c92c, Func Offset: 0x8c
	// Line 1018, Address: 0x28c950, Func Offset: 0xb0
	// Line 1014, Address: 0x28c954, Func Offset: 0xb4
	// Line 1018, Address: 0x28c95c, Func Offset: 0xbc
	// Line 1019, Address: 0x28c964, Func Offset: 0xc4
	// Line 1021, Address: 0x28c96c, Func Offset: 0xcc
	// Line 1025, Address: 0x28c978, Func Offset: 0xd8
	// Line 1027, Address: 0x28c984, Func Offset: 0xe4
	// Line 1029, Address: 0x28c990, Func Offset: 0xf0
	// Line 1030, Address: 0x28c9b4, Func Offset: 0x114
	// Line 1029, Address: 0x28c9bc, Func Offset: 0x11c
	// Line 1030, Address: 0x28c9c0, Func Offset: 0x120
	// Line 1034, Address: 0x28c9cc, Func Offset: 0x12c
	// Line 1036, Address: 0x28c9f0, Func Offset: 0x150
	// Line 1040, Address: 0x28ca10, Func Offset: 0x170
	// Line 1042, Address: 0x28ca18, Func Offset: 0x178
	// Line 1043, Address: 0x28ca2c, Func Offset: 0x18c
	// Line 1044, Address: 0x28ca30, Func Offset: 0x190
	// Line 1043, Address: 0x28ca38, Func Offset: 0x198
	// Line 1044, Address: 0x28ca3c, Func Offset: 0x19c
	// Line 1046, Address: 0x28ca60, Func Offset: 0x1c0
	// Line 1048, Address: 0x28ca68, Func Offset: 0x1c8
	// Line 1049, Address: 0x28ca6c, Func Offset: 0x1cc
	// Line 1051, Address: 0x28ca70, Func Offset: 0x1d0
	// Line 1053, Address: 0x28ca80, Func Offset: 0x1e0
	// Line 1056, Address: 0x28ca94, Func Offset: 0x1f4
	// Line 1061, Address: 0x28caa0, Func Offset: 0x200
	// Line 1066, Address: 0x28caac, Func Offset: 0x20c
	// Line 1083, Address: 0x28cad0, Func Offset: 0x230
	// Line 1084, Address: 0x28cae4, Func Offset: 0x244
	// Line 1086, Address: 0x28cafc, Func Offset: 0x25c
	// Line 1087, Address: 0x28cb14, Func Offset: 0x274
	// Line 1089, Address: 0x28cb20, Func Offset: 0x280
	// Line 1090, Address: 0x28cb38, Func Offset: 0x298
	// Line 1091, Address: 0x28cb44, Func Offset: 0x2a4
	// Line 1094, Address: 0x28cb48, Func Offset: 0x2a8
	// Func End, Address: 0x28cb80, Func Offset: 0x2e0
}

// 
// Start address: 0x28cb80
void get_floor_and_ceiling_y(float* pFloorY, float* pCeilingY, float* ChkPos, float ChkDist)
{
	_anon2 ChkLine;
	_anon3 Plane;
	int HitFlag;
	float Dist;
	// Line 1105, Address: 0x28cb80, Func Offset: 0
	// Line 1111, Address: 0x28cbb0, Func Offset: 0x30
	// Line 1112, Address: 0x28cbbc, Func Offset: 0x3c
	// Line 1115, Address: 0x28cbcc, Func Offset: 0x4c
	// Line 1116, Address: 0x28cbd0, Func Offset: 0x50
	// Line 1115, Address: 0x28cbd4, Func Offset: 0x54
	// Line 1116, Address: 0x28cbd8, Func Offset: 0x58
	// Line 1118, Address: 0x28cbe0, Func Offset: 0x60
	// Line 1120, Address: 0x28cc00, Func Offset: 0x80
	// Line 1121, Address: 0x28cc0c, Func Offset: 0x8c
	// Line 1122, Address: 0x28cc1c, Func Offset: 0x9c
	// Line 1127, Address: 0x28cc28, Func Offset: 0xa8
	// Line 1126, Address: 0x28cc2c, Func Offset: 0xac
	// Line 1127, Address: 0x28cc30, Func Offset: 0xb0
	// Line 1126, Address: 0x28cc34, Func Offset: 0xb4
	// Line 1127, Address: 0x28cc38, Func Offset: 0xb8
	// Line 1128, Address: 0x28cc40, Func Offset: 0xc0
	// Line 1130, Address: 0x28cc60, Func Offset: 0xe0
	// Line 1131, Address: 0x28cc6c, Func Offset: 0xec
	// Line 1132, Address: 0x28cc78, Func Offset: 0xf8
	// Line 1133, Address: 0x28cc84, Func Offset: 0x104
	// Line 1134, Address: 0x28cc88, Func Offset: 0x108
	// Func End, Address: 0x28ccac, Func Offset: 0x12c
}

// 
// Start address: 0x28ccb0
void obstacleObstPolygon_Init()
{
	// Line 1142, Address: 0x28ccb0, Func Offset: 0
	// Line 1143, Address: 0x28ccb4, Func Offset: 0x4
	// Func End, Address: 0x28ccbc, Func Offset: 0xc
}

// 
// Start address: 0x28ccc0
void ObstPolygon_AddData(_anon0* pPoly, float BasisCamAreaRadius, float* Center, float* WarpDirVec)
{
	BgObstPolygon* pFarest;
	int No;
	float InvadeDist;
	float PrsXZDir[4];
	int Type;
	float NearPos[4];
	float RevCosVal;
	float NearestDist3D;
	float DirRate;
	float DirAng;
	float XZFrontVec[4];
	float CoreArcR;
	float ArcEdgeDist;
	float CenterNearPos[4];
	int CenterType;
	float Near3DDist;
	float NearPosXZDir[4];
	float InvCosVal;
	float DiffAng;
	float ToNearVec[4];
	float NearXZDist;
	float AbsCosVal;
	float LCornerPos[4];
	float LCNearPos[4];
	float LCVec[4];
	float LCDiffAng;
	float LCVecLen;
	float LeftLC_SinVal;
	float LeftLC_CosVal;
	float RCornerPos[4];
	float RCNearPos[4];
	float RCVec[4];
	float RCDiffAng;
	float RCVecLen;
	float RightRC_SinVal;
	float RightRC_CosVal;
	BgObstPolygon* pObstPoly;
	float ArcHalfAng;
	// Line 1155, Address: 0x28ccc0, Func Offset: 0
	// Line 1164, Address: 0x28ccf4, Func Offset: 0x34
	// Line 1171, Address: 0x28cd28, Func Offset: 0x68
	// Line 1172, Address: 0x28cd3c, Func Offset: 0x7c
	// Line 1173, Address: 0x28cd58, Func Offset: 0x98
	// Line 1175, Address: 0x28cd7c, Func Offset: 0xbc
	// Line 1176, Address: 0x28cda8, Func Offset: 0xe8
	// Line 1177, Address: 0x28cdac, Func Offset: 0xec
	// Line 1176, Address: 0x28cdb0, Func Offset: 0xf0
	// Line 1177, Address: 0x28cdb4, Func Offset: 0xf4
	// Line 1179, Address: 0x28cdd4, Func Offset: 0x114
	// Line 1177, Address: 0x28cdd8, Func Offset: 0x118
	// Line 1179, Address: 0x28cde8, Func Offset: 0x128
	// Line 1178, Address: 0x28cdec, Func Offset: 0x12c
	// Line 1179, Address: 0x28cdf4, Func Offset: 0x134
	// Line 1180, Address: 0x28ce0c, Func Offset: 0x14c
	// Line 1191, Address: 0x28ce18, Func Offset: 0x158
	// Line 1193, Address: 0x28ce28, Func Offset: 0x168
	// Line 1191, Address: 0x28ce2c, Func Offset: 0x16c
	// Line 1193, Address: 0x28ce3c, Func Offset: 0x17c
	// Line 1194, Address: 0x28ce4c, Func Offset: 0x18c
	// Line 1198, Address: 0x28ce50, Func Offset: 0x190
	// Line 1193, Address: 0x28ce54, Func Offset: 0x194
	// Line 1198, Address: 0x28ce58, Func Offset: 0x198
	// Line 1195, Address: 0x28ce5c, Func Offset: 0x19c
	// Line 1198, Address: 0x28ce60, Func Offset: 0x1a0
	// Line 1197, Address: 0x28ce68, Func Offset: 0x1a8
	// Line 1194, Address: 0x28ce6c, Func Offset: 0x1ac
	// Line 1198, Address: 0x28ce70, Func Offset: 0x1b0
	// Line 1195, Address: 0x28ce74, Func Offset: 0x1b4
	// Line 1196, Address: 0x28ce78, Func Offset: 0x1b8
	// Line 1197, Address: 0x28ce80, Func Offset: 0x1c0
	// Line 1198, Address: 0x28ce84, Func Offset: 0x1c4
	// Line 1203, Address: 0x28cea0, Func Offset: 0x1e0
	// Line 1212, Address: 0x28ceb4, Func Offset: 0x1f4
	// Line 1218, Address: 0x28cecc, Func Offset: 0x20c
	// Line 1212, Address: 0x28ced4, Func Offset: 0x214
	// Line 1218, Address: 0x28ced8, Func Offset: 0x218
	// Line 1219, Address: 0x28ceec, Func Offset: 0x22c
	// Line 1220, Address: 0x28cef0, Func Offset: 0x230
	// Line 1219, Address: 0x28cef4, Func Offset: 0x234
	// Line 1220, Address: 0x28cef8, Func Offset: 0x238
	// Line 1222, Address: 0x28cf18, Func Offset: 0x258
	// Line 1221, Address: 0x28cf24, Func Offset: 0x264
	// Line 1222, Address: 0x28cf28, Func Offset: 0x268
	// Line 1226, Address: 0x28cf4c, Func Offset: 0x28c
	// Line 1227, Address: 0x28cf50, Func Offset: 0x290
	// Line 1226, Address: 0x28cf54, Func Offset: 0x294
	// Line 1227, Address: 0x28cf58, Func Offset: 0x298
	// Line 1226, Address: 0x28cf5c, Func Offset: 0x29c
	// Line 1227, Address: 0x28cf60, Func Offset: 0x2a0
	// Line 1230, Address: 0x28cf84, Func Offset: 0x2c4
	// Line 1233, Address: 0x28cf98, Func Offset: 0x2d8
	// Line 1236, Address: 0x28cfc0, Func Offset: 0x300
	// Line 1237, Address: 0x28cfc4, Func Offset: 0x304
	// Line 1236, Address: 0x28cfd0, Func Offset: 0x310
	// Line 1237, Address: 0x28cfd4, Func Offset: 0x314
	// Line 1238, Address: 0x28cff4, Func Offset: 0x334
	// Line 1239, Address: 0x28cff8, Func Offset: 0x338
	// Line 1240, Address: 0x28d000, Func Offset: 0x340
	// Line 1243, Address: 0x28d018, Func Offset: 0x358
	// Line 1244, Address: 0x28d01c, Func Offset: 0x35c
	// Line 1243, Address: 0x28d028, Func Offset: 0x368
	// Line 1244, Address: 0x28d030, Func Offset: 0x370
	// Line 1245, Address: 0x28d050, Func Offset: 0x390
	// Line 1246, Address: 0x28d054, Func Offset: 0x394
	// Line 1247, Address: 0x28d060, Func Offset: 0x3a0
	// Line 1252, Address: 0x28d070, Func Offset: 0x3b0
	// Line 1254, Address: 0x28d07c, Func Offset: 0x3bc
	// Line 1252, Address: 0x28d080, Func Offset: 0x3c0
	// Line 1254, Address: 0x28d084, Func Offset: 0x3c4
	// Line 1252, Address: 0x28d088, Func Offset: 0x3c8
	// Line 1254, Address: 0x28d08c, Func Offset: 0x3cc
	// Line 1252, Address: 0x28d094, Func Offset: 0x3d4
	// Line 1253, Address: 0x28d098, Func Offset: 0x3d8
	// Line 1254, Address: 0x28d09c, Func Offset: 0x3dc
	// Line 1255, Address: 0x28d0a8, Func Offset: 0x3e8
	// Line 1257, Address: 0x28d0ac, Func Offset: 0x3ec
	// Line 1254, Address: 0x28d0bc, Func Offset: 0x3fc
	// Line 1255, Address: 0x28d0c4, Func Offset: 0x404
	// Line 1257, Address: 0x28d0c8, Func Offset: 0x408
	// Line 1262, Address: 0x28d0d0, Func Offset: 0x410
	// Line 1263, Address: 0x28d0f0, Func Offset: 0x430
	// Line 1264, Address: 0x28d0f4, Func Offset: 0x434
	// Line 1266, Address: 0x28d10c, Func Offset: 0x44c
	// Line 1270, Address: 0x28d144, Func Offset: 0x484
	// Line 1272, Address: 0x28d168, Func Offset: 0x4a8
	// Line 1271, Address: 0x28d170, Func Offset: 0x4b0
	// Line 1272, Address: 0x28d174, Func Offset: 0x4b4
	// Line 1271, Address: 0x28d178, Func Offset: 0x4b8
	// Line 1272, Address: 0x28d17c, Func Offset: 0x4bc
	// Line 1273, Address: 0x28d1a0, Func Offset: 0x4e0
	// Line 1275, Address: 0x28d1a8, Func Offset: 0x4e8
	// Line 1276, Address: 0x28d1cc, Func Offset: 0x50c
	// Line 1275, Address: 0x28d1dc, Func Offset: 0x51c
	// Line 1276, Address: 0x28d1e0, Func Offset: 0x520
	// Line 1278, Address: 0x28d1f4, Func Offset: 0x534
	// Line 1279, Address: 0x28d1f8, Func Offset: 0x538
	// Line 1278, Address: 0x28d1fc, Func Offset: 0x53c
	// Line 1280, Address: 0x28d200, Func Offset: 0x540
	// Line 1277, Address: 0x28d208, Func Offset: 0x548
	// Line 1283, Address: 0x28d21c, Func Offset: 0x55c
	// Line 1290, Address: 0x28d228, Func Offset: 0x568
	// Line 1292, Address: 0x28d234, Func Offset: 0x574
	// Line 1290, Address: 0x28d238, Func Offset: 0x578
	// Line 1292, Address: 0x28d23c, Func Offset: 0x57c
	// Line 1290, Address: 0x28d240, Func Offset: 0x580
	// Line 1292, Address: 0x28d244, Func Offset: 0x584
	// Line 1290, Address: 0x28d248, Func Offset: 0x588
	// Line 1291, Address: 0x28d24c, Func Offset: 0x58c
	// Line 1292, Address: 0x28d250, Func Offset: 0x590
	// Line 1293, Address: 0x28d25c, Func Offset: 0x59c
	// Line 1294, Address: 0x28d260, Func Offset: 0x5a0
	// Line 1292, Address: 0x28d270, Func Offset: 0x5b0
	// Line 1293, Address: 0x28d278, Func Offset: 0x5b8
	// Line 1294, Address: 0x28d27c, Func Offset: 0x5bc
	// Line 1298, Address: 0x28d284, Func Offset: 0x5c4
	// Line 1299, Address: 0x28d2a4, Func Offset: 0x5e4
	// Line 1300, Address: 0x28d2a8, Func Offset: 0x5e8
	// Line 1301, Address: 0x28d2c0, Func Offset: 0x600
	// Line 1304, Address: 0x28d2f4, Func Offset: 0x634
	// Line 1307, Address: 0x28d318, Func Offset: 0x658
	// Line 1306, Address: 0x28d31c, Func Offset: 0x65c
	// Line 1307, Address: 0x28d320, Func Offset: 0x660
	// Line 1306, Address: 0x28d328, Func Offset: 0x668
	// Line 1307, Address: 0x28d32c, Func Offset: 0x66c
	// Line 1305, Address: 0x28d330, Func Offset: 0x670
	// Line 1307, Address: 0x28d334, Func Offset: 0x674
	// Line 1305, Address: 0x28d338, Func Offset: 0x678
	// Line 1307, Address: 0x28d33c, Func Offset: 0x67c
	// Line 1308, Address: 0x28d354, Func Offset: 0x694
	// Line 1310, Address: 0x28d360, Func Offset: 0x6a0
	// Line 1311, Address: 0x28d384, Func Offset: 0x6c4
	// Line 1310, Address: 0x28d394, Func Offset: 0x6d4
	// Line 1311, Address: 0x28d398, Func Offset: 0x6d8
	// Line 1313, Address: 0x28d3ac, Func Offset: 0x6ec
	// Line 1314, Address: 0x28d3b0, Func Offset: 0x6f0
	// Line 1313, Address: 0x28d3b4, Func Offset: 0x6f4
	// Line 1315, Address: 0x28d3b8, Func Offset: 0x6f8
	// Line 1312, Address: 0x28d3c0, Func Offset: 0x700
	// Line 1323, Address: 0x28d3d8, Func Offset: 0x718
	// Line 1325, Address: 0x28d3ec, Func Offset: 0x72c
	// Line 1327, Address: 0x28d400, Func Offset: 0x740
	// Line 1330, Address: 0x28d424, Func Offset: 0x764
	// Line 1331, Address: 0x28d434, Func Offset: 0x774
	// Line 1332, Address: 0x28d43c, Func Offset: 0x77c
	// Line 1336, Address: 0x28d440, Func Offset: 0x780
	// Line 1339, Address: 0x28d458, Func Offset: 0x798
	// Line 1340, Address: 0x28d460, Func Offset: 0x7a0
	// Line 1341, Address: 0x28d474, Func Offset: 0x7b4
	// Line 1343, Address: 0x28d478, Func Offset: 0x7b8
	// Line 1345, Address: 0x28d48c, Func Offset: 0x7cc
	// Line 1347, Address: 0x28d49c, Func Offset: 0x7dc
	// Line 1350, Address: 0x28d4ac, Func Offset: 0x7ec
	// Line 1351, Address: 0x28d4b0, Func Offset: 0x7f0
	// Func End, Address: 0x28d4dc, Func Offset: 0x81c
}

// 
// Start address: 0x28d4e0
void construct_BgObstPolygon(BgObstPolygon* pObstPoly, _anon0* pPoly, float InvadeDist, float* PrsXZDir, int Type)
{
	// Line 1362, Address: 0x28d4e0, Func Offset: 0
	// Line 1365, Address: 0x28d4f4, Func Offset: 0x14
	// Line 1366, Address: 0x28d4fc, Func Offset: 0x1c
	// Line 1367, Address: 0x28d500, Func Offset: 0x20
	// Line 1368, Address: 0x28d508, Func Offset: 0x28
	// Line 1369, Address: 0x28d50c, Func Offset: 0x2c
	// Line 1370, Address: 0x28d524, Func Offset: 0x44
	// Line 1371, Address: 0x28d528, Func Offset: 0x48
	// Func End, Address: 0x28d53c, Func Offset: 0x5c
}

// 
// Start address: 0x28d540
void make_press_angle_order_of_ObstPolyIdx(int* ObstPolyIdxOrderAry, int ObstPolyNum, BgObstPolygon* ObstPolyAry)
{
	int LoopNo;
	int SetOrderIdx;
	int LoopNo;
	float MinAngY;
	int MinAngYPolyIdx;
	int SaveLoopNo;
	int ChkPolyIdx;
	BgObstPolygon* pChkPoly;
	// Line 1390, Address: 0x28d540, Func Offset: 0
	// Line 1392, Address: 0x28d54c, Func Offset: 0xc
	// Line 1394, Address: 0x28d550, Func Offset: 0x10
	// Line 1395, Address: 0x28d570, Func Offset: 0x30
	// Line 1396, Address: 0x28d5d4, Func Offset: 0x94
	// Line 1395, Address: 0x28d5d8, Func Offset: 0x98
	// Line 1396, Address: 0x28d5dc, Func Offset: 0x9c
	// Line 1398, Address: 0x28d5f0, Func Offset: 0xb0
	// Line 1404, Address: 0x28d600, Func Offset: 0xc0
	// Line 1406, Address: 0x28d618, Func Offset: 0xd8
	// Line 1407, Address: 0x28d61c, Func Offset: 0xdc
	// Line 1409, Address: 0x28d620, Func Offset: 0xe0
	// Line 1412, Address: 0x28d638, Func Offset: 0xf8
	// Line 1411, Address: 0x28d63c, Func Offset: 0xfc
	// Line 1413, Address: 0x28d640, Func Offset: 0x100
	// Line 1415, Address: 0x28d644, Func Offset: 0x104
	// Line 1418, Address: 0x28d658, Func Offset: 0x118
	// Line 1421, Address: 0x28d660, Func Offset: 0x120
	// Line 1418, Address: 0x28d664, Func Offset: 0x124
	// Line 1421, Address: 0x28d668, Func Offset: 0x128
	// Line 1418, Address: 0x28d66c, Func Offset: 0x12c
	// Line 1419, Address: 0x28d670, Func Offset: 0x130
	// Line 1421, Address: 0x28d674, Func Offset: 0x134
	// Line 1422, Address: 0x28d680, Func Offset: 0x140
	// Func End, Address: 0x28d688, Func Offset: 0x148
}

// 
// Start address: 0x28d690
unsigned int AdjustMoveVector_EscapeFromObstacles(float* MvVec, int ObstPolyNum, BgObstPolygon* ObstPolyAry, int* ObstPolyIdxOrderAry, float MinMvLen)
{
	int Count;
	int OrderIdxNo;
	float DiffAng;
	BgObstPolygon* pObst;
	BgObstPolygon* pObstSeed;
	int SeedObstIdxNo;
	BgObstPolygon* pObstRight;
	BgObstPolygon* pObstLeft;
	float LR_DiffAng;
	float MvAdjVec[4];
	float LineDir[4];
	float MaxPrsLineDist;
	float MinPrsLineDist;
	float LineAdjVec[4];
	int No;
	float LeftPrsDist;
	float DotVal;
	float PrsDist;
	float L_AngDir[4];
	float R_AngDir[4];
	float EscMvVec[4];
	float L_DirDotVal;
	float R_DirDotVal;
	float L_PrsDotVal;
	float R_PrsDotVal;
	float L_MinMvLen;
	float R_MinMvLen;
	// Line 1461, Address: 0x28d690, Func Offset: 0
	// Line 1479, Address: 0x28d698, Func Offset: 0x8
	// Line 1461, Address: 0x28d69c, Func Offset: 0xc
	// Line 1479, Address: 0x28d6a4, Func Offset: 0x14
	// Line 1461, Address: 0x28d6a8, Func Offset: 0x18
	// Line 1479, Address: 0x28d6b4, Func Offset: 0x24
	// Line 1461, Address: 0x28d6b8, Func Offset: 0x28
	// Line 1479, Address: 0x28d6cc, Func Offset: 0x3c
	// Line 1461, Address: 0x28d6d0, Func Offset: 0x40
	// Line 1479, Address: 0x28d6e4, Func Offset: 0x54
	// Line 1481, Address: 0x28d6f0, Func Offset: 0x60
	// Line 1482, Address: 0x28d708, Func Offset: 0x78
	// Line 1483, Address: 0x28d718, Func Offset: 0x88
	// Line 1485, Address: 0x28d71c, Func Offset: 0x8c
	// Line 1487, Address: 0x28d724, Func Offset: 0x94
	// Line 1489, Address: 0x28d740, Func Offset: 0xb0
	// Line 1490, Address: 0x28d748, Func Offset: 0xb8
	// Line 1494, Address: 0x28d750, Func Offset: 0xc0
	// Line 1500, Address: 0x28d760, Func Offset: 0xd0
	// Line 1502, Address: 0x28d768, Func Offset: 0xd8
	// Line 1503, Address: 0x28d770, Func Offset: 0xe0
	// Line 1504, Address: 0x28d774, Func Offset: 0xe4
	// Line 1506, Address: 0x28d778, Func Offset: 0xe8
	// Line 1507, Address: 0x28d784, Func Offset: 0xf4
	// Line 1509, Address: 0x28d788, Func Offset: 0xf8
	// Line 1511, Address: 0x28d790, Func Offset: 0x100
	// Line 1509, Address: 0x28d794, Func Offset: 0x104
	// Line 1511, Address: 0x28d7a4, Func Offset: 0x114
	// Line 1515, Address: 0x28d7b4, Func Offset: 0x124
	// Line 1517, Address: 0x28d7c4, Func Offset: 0x134
	// Line 1520, Address: 0x28d7d8, Func Offset: 0x148
	// Line 1523, Address: 0x28d7e0, Func Offset: 0x150
	// Line 1525, Address: 0x28d7e4, Func Offset: 0x154
	// Line 1527, Address: 0x28d800, Func Offset: 0x170
	// Line 1529, Address: 0x28d808, Func Offset: 0x178
	// Line 1532, Address: 0x28d810, Func Offset: 0x180
	// Line 1536, Address: 0x28d818, Func Offset: 0x188
	// Line 1537, Address: 0x28d828, Func Offset: 0x198
	// Line 1545, Address: 0x28d830, Func Offset: 0x1a0
	// Line 1546, Address: 0x28d840, Func Offset: 0x1b0
	// Line 1567, Address: 0x28d880, Func Offset: 0x1f0
	// Line 1566, Address: 0x28d884, Func Offset: 0x1f4
	// Line 1567, Address: 0x28d888, Func Offset: 0x1f8
	// Line 1566, Address: 0x28d88c, Func Offset: 0x1fc
	// Line 1556, Address: 0x28d890, Func Offset: 0x200
	// Line 1557, Address: 0x28d898, Func Offset: 0x208
	// Line 1566, Address: 0x28d89c, Func Offset: 0x20c
	// Line 1567, Address: 0x28d8a0, Func Offset: 0x210
	// Line 1574, Address: 0x28d8bc, Func Offset: 0x22c
	// Line 1572, Address: 0x28d8c8, Func Offset: 0x238
	// Line 1574, Address: 0x28d8cc, Func Offset: 0x23c
	// Line 1571, Address: 0x28d8d4, Func Offset: 0x244
	// Line 1574, Address: 0x28d8d8, Func Offset: 0x248
	// Line 1571, Address: 0x28d8e0, Func Offset: 0x250
	// Line 1572, Address: 0x28d8e4, Func Offset: 0x254
	// Line 1573, Address: 0x28d8e8, Func Offset: 0x258
	// Line 1574, Address: 0x28d8f0, Func Offset: 0x260
	// Line 1578, Address: 0x28d8f8, Func Offset: 0x268
	// Line 1583, Address: 0x28d918, Func Offset: 0x288
	// Line 1584, Address: 0x28d93c, Func Offset: 0x2ac
	// Line 1587, Address: 0x28d94c, Func Offset: 0x2bc
	// Line 1588, Address: 0x28d960, Func Offset: 0x2d0
	// Line 1589, Address: 0x28d96c, Func Offset: 0x2dc
	// Line 1591, Address: 0x28d970, Func Offset: 0x2e0
	// Line 1592, Address: 0x28d97c, Func Offset: 0x2ec
	// Line 1594, Address: 0x28d980, Func Offset: 0x2f0
	// Line 1595, Address: 0x28d994, Func Offset: 0x304
	// Line 1598, Address: 0x28d9b4, Func Offset: 0x324
	// Line 1599, Address: 0x28d9c4, Func Offset: 0x334
	// Line 1600, Address: 0x28d9cc, Func Offset: 0x33c
	// Line 1602, Address: 0x28d9d0, Func Offset: 0x340
	// Line 1603, Address: 0x28d9e0, Func Offset: 0x350
	// Line 1604, Address: 0x28da00, Func Offset: 0x370
	// Line 1605, Address: 0x28da08, Func Offset: 0x378
	// Line 1606, Address: 0x28da2c, Func Offset: 0x39c
	// Line 1607, Address: 0x28da30, Func Offset: 0x3a0
	// Line 1608, Address: 0x28da50, Func Offset: 0x3c0
	// Line 1609, Address: 0x28da68, Func Offset: 0x3d8
	// Line 1622, Address: 0x28da70, Func Offset: 0x3e0
	// Line 1624, Address: 0x28da80, Func Offset: 0x3f0
	// Line 1627, Address: 0x28da88, Func Offset: 0x3f8
	// Line 1629, Address: 0x28da98, Func Offset: 0x408
	// Line 1630, Address: 0x28daa0, Func Offset: 0x410
	// Line 1631, Address: 0x28daa4, Func Offset: 0x414
	// Line 1645, Address: 0x28daa8, Func Offset: 0x418
	// Line 1634, Address: 0x28daac, Func Offset: 0x41c
	// Line 1645, Address: 0x28dab0, Func Offset: 0x420
	// Line 1634, Address: 0x28dab8, Func Offset: 0x428
	// Line 1635, Address: 0x28dabc, Func Offset: 0x42c
	// Line 1634, Address: 0x28dac0, Func Offset: 0x430
	// Line 1636, Address: 0x28dac4, Func Offset: 0x434
	// Line 1639, Address: 0x28dacc, Func Offset: 0x43c
	// Line 1640, Address: 0x28dad4, Func Offset: 0x444
	// Line 1641, Address: 0x28dad8, Func Offset: 0x448
	// Line 1645, Address: 0x28dae4, Func Offset: 0x454
	// Line 1650, Address: 0x28daf4, Func Offset: 0x464
	// Line 1654, Address: 0x28db24, Func Offset: 0x494
	// Line 1655, Address: 0x28db44, Func Offset: 0x4b4
	// Line 1656, Address: 0x28db64, Func Offset: 0x4d4
	// Line 1657, Address: 0x28db84, Func Offset: 0x4f4
	// Line 1658, Address: 0x28dba4, Func Offset: 0x514
	// Line 1660, Address: 0x28dbdc, Func Offset: 0x54c
	// Line 1662, Address: 0x28dbe8, Func Offset: 0x558
	// Line 1664, Address: 0x28dbf4, Func Offset: 0x564
	// Line 1665, Address: 0x28dbfc, Func Offset: 0x56c
	// Line 1667, Address: 0x28dc00, Func Offset: 0x570
	// Line 1670, Address: 0x28dc0c, Func Offset: 0x57c
	// Line 1671, Address: 0x28dc18, Func Offset: 0x588
	// Line 1673, Address: 0x28dc20, Func Offset: 0x590
	// Line 1676, Address: 0x28dc34, Func Offset: 0x5a4
	// Line 1678, Address: 0x28dc40, Func Offset: 0x5b0
	// Line 1680, Address: 0x28dc4c, Func Offset: 0x5bc
	// Line 1682, Address: 0x28dc58, Func Offset: 0x5c8
	// Line 1683, Address: 0x28dc68, Func Offset: 0x5d8
	// Line 1685, Address: 0x28dc70, Func Offset: 0x5e0
	// Line 1687, Address: 0x28dc84, Func Offset: 0x5f4
	// Line 1689, Address: 0x28dc90, Func Offset: 0x600
	// Line 1692, Address: 0x28dca4, Func Offset: 0x614
	// Line 1694, Address: 0x28dcb0, Func Offset: 0x620
	// Line 1696, Address: 0x28dcbc, Func Offset: 0x62c
	// Line 1698, Address: 0x28dcc8, Func Offset: 0x638
	// Line 1701, Address: 0x28dcd0, Func Offset: 0x640
	// Line 1703, Address: 0x28dce0, Func Offset: 0x650
	// Line 1705, Address: 0x28dcf4, Func Offset: 0x664
	// Line 1707, Address: 0x28dd00, Func Offset: 0x670
	// Line 1710, Address: 0x28dd08, Func Offset: 0x678
	// Line 1712, Address: 0x28dd14, Func Offset: 0x684
	// Line 1714, Address: 0x28dd20, Func Offset: 0x690
	// Line 1717, Address: 0x28dd38, Func Offset: 0x6a8
	// Line 1719, Address: 0x28dd40, Func Offset: 0x6b0
	// Func End, Address: 0x28dd78, Func Offset: 0x6e8
}

// 
// Start address: 0x28dd80
void adjust_move_vec_repulsion_from_wall(float* MvVec, float* WallNormal, float MinMvFromWall)
{
	float MvFromWall;
	float AdjVec[4];
	// Line 1730, Address: 0x28dd80, Func Offset: 0
	// Line 1732, Address: 0x28dd84, Func Offset: 0x4
	// Line 1733, Address: 0x28dda4, Func Offset: 0x24
	// Line 1736, Address: 0x28ddb0, Func Offset: 0x30
	// Line 1737, Address: 0x28dde4, Func Offset: 0x64
	// Line 1738, Address: 0x28ddfc, Func Offset: 0x7c
	// Line 1739, Address: 0x28de00, Func Offset: 0x80
	// Func End, Address: 0x28de08, Func Offset: 0x88
}

// 
// Start address: 0x28de10
void make_vector_from_invade_dist_to_two_walls(float* EscMvVec, float L_WallInvadeDist, float R_WallInvadeDist, float* L_AngDir, float* R_AngDir, float* L_PrsXZDir)
{
	float TransCoff;
	float Vec[4];
	// Line 1795, Address: 0x28de10, Func Offset: 0
	// Line 1797, Address: 0x28de30, Func Offset: 0x20
	// Line 1798, Address: 0x28de3c, Func Offset: 0x2c
	// Line 1800, Address: 0x28de40, Func Offset: 0x30
	// Line 1802, Address: 0x28de78, Func Offset: 0x68
	// Line 1803, Address: 0x28de80, Func Offset: 0x70
	// Line 1806, Address: 0x28de88, Func Offset: 0x78
	// Line 1807, Address: 0x28dea4, Func Offset: 0x94
	// Line 1806, Address: 0x28deac, Func Offset: 0x9c
	// Line 1807, Address: 0x28deb0, Func Offset: 0xa0
	// Line 1809, Address: 0x28dec4, Func Offset: 0xb4
	// Line 1810, Address: 0x28dedc, Func Offset: 0xcc
	// Line 1811, Address: 0x28dee8, Func Offset: 0xd8
	// Line 1812, Address: 0x28defc, Func Offset: 0xec
	// Line 1813, Address: 0x28df1c, Func Offset: 0x10c
	// Line 1814, Address: 0x28df40, Func Offset: 0x130
	// Line 1816, Address: 0x28df58, Func Offset: 0x148
	// Func End, Address: 0x28df60, Func Offset: 0x150
}

