typedef struct _anon0;


typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[4];

struct _anon0
{
	float start[4];
	float end[4];
};

float sg_vector_zero[4];
float sg_vector_unit_z[4];
float sg_vector_unit_w[4];
float sg_matrix_unit[4][4];
float sg_vector_unit_y[4];

void FilterCameraMove_MakeMatrixRotZAxis2Vec(float Mat[4], float* TgtDirVec);
void FilterCameraMove_MakeCamSpeedByControleCircle(float* ControlSpd, float* ChkPos, float* ChkPosSpd, float MaxSpdVal, float* CntpetleCenterPos, float* CntfugalCenterPos, float StillCenterBackDist, float CircleRadius, float ControlAngY, int FightingPoseFlag);
void FilterCameraMove_ViewSmooth(float* ViewVec, float* ViewOmegaVec, float* WatchTgtPos, float* CamPos, float MaxOmega, float RotAcclVal, float DragCoffForYaw);
void FilterCameraMove_CameraSmooth(float* CamSpd, float* CamPos, float* CamTgtPos, float MaxCamSpdConst, float StdAcclVal, float MaxAcclVal, float DragCoffForYaw);
float analize_speed_vector_to_target(float* FwdSpd2TgtDLVec, float* YawSpd2TgtDLVec, float* SpdDLVec, float* CamSpd, float* CamPos, float* CamTgtPos);
float get_limit_speed(float DistCam2Target, float MaxCamSpdConst, float StdAcclVal);
void FilterCameraMove_SearchView(float* NewWatchPos, float* OrgWatchPos, float* CamPos, float SideAddAng, float UpAddAng);
void FilterCameraMove_MakeViewRotBaseMatrix(float ViewRotBaseMat[4], float ViewOrgAngX, float ViewOrgAngY);
int FilterCameraMove_LimitViewAngleXY(float* ViewVec, float MinAngX, float MaxAngX, float MinAngY, float MaxAngY, float AngRateX, float AngRateY, float ViewRotBaseMat[4]);
float FilterCameraMove_CalcAreaNearestPos(float* AreaNearestPos, float* ChkPos, float* LPos0XYZ, float* LPos1XYZ, float LRadius, unsigned int CylinderMode);
void move_to_capsule_line_area(float* AdjPos, float* NearestLinePos, float DistFromLine, float CapsuleRadius);

// 
// Start address: 0x2877d0
void FilterCameraMove_MakeMatrixRotZAxis2Vec(float Mat[4], float* TgtDirVec)
{
	float CosAngX;
	float TanAngX;
	// Line 73, Address: 0x2877d0, Func Offset: 0
	// Line 77, Address: 0x2877dc, Func Offset: 0xc
	// Line 80, Address: 0x2877f4, Func Offset: 0x24
	// Line 81, Address: 0x287808, Func Offset: 0x38
	// Line 83, Address: 0x28781c, Func Offset: 0x4c
	// Line 84, Address: 0x287830, Func Offset: 0x60
	// Line 86, Address: 0x287844, Func Offset: 0x74
	// Line 87, Address: 0x287850, Func Offset: 0x80
	// Line 89, Address: 0x287854, Func Offset: 0x84
	// Line 90, Address: 0x287860, Func Offset: 0x90
	// Line 91, Address: 0x287864, Func Offset: 0x94
	// Line 92, Address: 0x287868, Func Offset: 0x98
	// Line 91, Address: 0x28786c, Func Offset: 0x9c
	// Line 92, Address: 0x287874, Func Offset: 0xa4
	// Line 93, Address: 0x28787c, Func Offset: 0xac
	// Line 97, Address: 0x287888, Func Offset: 0xb8
	// Line 98, Address: 0x2878a4, Func Offset: 0xd4
	// Func End, Address: 0x2878ac, Func Offset: 0xdc
}

// 
// Start address: 0x2878b0
void FilterCameraMove_MakeCamSpeedByControleCircle(float* ControlSpd, float* ChkPos, float* ChkPosSpd, float MaxSpdVal, float* CntpetleCenterPos, float* CntfugalCenterPos, float StillCenterBackDist, float CircleRadius, float ControlAngY, int FightingPoseFlag)
{
	float CntfugalXZDir[4];
	float CntfugalCenterXZDist;
	float CntfugalRadiusXZRate;
	float ChkPosSpdVal;
	float Vec[4];
	float CntpetleXZDir[4];
	float CntpetleCenterXZDist;
	float CntpetleRadiusXZRate;
	float StillRadiusXZDist;
	float StillCenterPos[4];
	float AngDir[4];
	float DotVal;
	float StartRadius;
	float SpdRate;
	float Diff2CntrY;
	float SpdY;
	float Rate;
	float SpdVal;
	float coff;
	float DotValBound;
	// Line 120, Address: 0x2878b0, Func Offset: 0
	// Line 124, Address: 0x2878fc, Func Offset: 0x4c
	// Line 131, Address: 0x28791c, Func Offset: 0x6c
	// Line 133, Address: 0x28792c, Func Offset: 0x7c
	// Line 140, Address: 0x287940, Func Offset: 0x90
	// Line 141, Address: 0x287958, Func Offset: 0xa8
	// Line 142, Address: 0x28795c, Func Offset: 0xac
	// Line 141, Address: 0x287960, Func Offset: 0xb0
	// Line 142, Address: 0x287964, Func Offset: 0xb4
	// Line 143, Address: 0x287984, Func Offset: 0xd4
	// Line 146, Address: 0x2879b0, Func Offset: 0x100
	// Line 154, Address: 0x2879b4, Func Offset: 0x104
	// Line 156, Address: 0x2879cc, Func Offset: 0x11c
	// Line 155, Address: 0x2879d0, Func Offset: 0x120
	// Line 156, Address: 0x2879dc, Func Offset: 0x12c
	// Line 157, Address: 0x2879fc, Func Offset: 0x14c
	// Line 162, Address: 0x287a28, Func Offset: 0x178
	// Line 160, Address: 0x287a2c, Func Offset: 0x17c
	// Line 162, Address: 0x287a30, Func Offset: 0x180
	// Line 165, Address: 0x287a48, Func Offset: 0x198
	// Line 166, Address: 0x287a9c, Func Offset: 0x1ec
	// Line 167, Address: 0x287ab4, Func Offset: 0x204
	// Line 171, Address: 0x287ab8, Func Offset: 0x208
	// Line 174, Address: 0x287ad4, Func Offset: 0x224
	// Line 175, Address: 0x287b18, Func Offset: 0x268
	// Line 186, Address: 0x287b30, Func Offset: 0x280
	// Line 188, Address: 0x287b40, Func Offset: 0x290
	// Line 186, Address: 0x287b44, Func Offset: 0x294
	// Line 187, Address: 0x287b4c, Func Offset: 0x29c
	// Line 188, Address: 0x287b50, Func Offset: 0x2a0
	// Line 190, Address: 0x287b5c, Func Offset: 0x2ac
	// Line 188, Address: 0x287b64, Func Offset: 0x2b4
	// Line 190, Address: 0x287b70, Func Offset: 0x2c0
	// Line 191, Address: 0x287b84, Func Offset: 0x2d4
	// Line 192, Address: 0x287b88, Func Offset: 0x2d8
	// Line 191, Address: 0x287b8c, Func Offset: 0x2dc
	// Line 192, Address: 0x287b90, Func Offset: 0x2e0
	// Line 194, Address: 0x287bb0, Func Offset: 0x300
	// Line 201, Address: 0x287bdc, Func Offset: 0x32c
	// Line 202, Address: 0x287be4, Func Offset: 0x334
	// Line 204, Address: 0x287bec, Func Offset: 0x33c
	// Line 205, Address: 0x287bf8, Func Offset: 0x348
	// Line 209, Address: 0x287c00, Func Offset: 0x350
	// Line 211, Address: 0x287c08, Func Offset: 0x358
	// Line 210, Address: 0x287c0c, Func Offset: 0x35c
	// Line 211, Address: 0x287c10, Func Offset: 0x360
	// Line 213, Address: 0x287c1c, Func Offset: 0x36c
	// Line 215, Address: 0x287c40, Func Offset: 0x390
	// Line 218, Address: 0x287c54, Func Offset: 0x3a4
	// Line 220, Address: 0x287c74, Func Offset: 0x3c4
	// Line 218, Address: 0x287c78, Func Offset: 0x3c8
	// Line 220, Address: 0x287c80, Func Offset: 0x3d0
	// Line 223, Address: 0x287c8c, Func Offset: 0x3dc
	// Line 224, Address: 0x287ca4, Func Offset: 0x3f4
	// Line 226, Address: 0x287ca8, Func Offset: 0x3f8
	// Line 228, Address: 0x287cc4, Func Offset: 0x414
	// Line 237, Address: 0x287cc8, Func Offset: 0x418
	// Line 238, Address: 0x287cd0, Func Offset: 0x420
	// Line 240, Address: 0x287cdc, Func Offset: 0x42c
	// Line 239, Address: 0x287ce4, Func Offset: 0x434
	// Line 240, Address: 0x287cec, Func Offset: 0x43c
	// Line 241, Address: 0x287cf8, Func Offset: 0x448
	// Line 243, Address: 0x287d10, Func Offset: 0x460
	// Line 244, Address: 0x287d18, Func Offset: 0x468
	// Line 243, Address: 0x287d1c, Func Offset: 0x46c
	// Line 244, Address: 0x287d24, Func Offset: 0x474
	// Line 245, Address: 0x287d30, Func Offset: 0x480
	// Line 246, Address: 0x287d34, Func Offset: 0x484
	// Line 247, Address: 0x287d38, Func Offset: 0x488
	// Line 248, Address: 0x287d44, Func Offset: 0x494
	// Line 250, Address: 0x287d48, Func Offset: 0x498
	// Line 253, Address: 0x287d54, Func Offset: 0x4a4
	// Line 254, Address: 0x287d78, Func Offset: 0x4c8
	// Line 255, Address: 0x287d84, Func Offset: 0x4d4
	// Line 256, Address: 0x287da4, Func Offset: 0x4f4
	// Line 258, Address: 0x287da8, Func Offset: 0x4f8
	// Func End, Address: 0x287dd8, Func Offset: 0x528
}

// 
// Start address: 0x287de0
void FilterCameraMove_ViewSmooth(float* ViewVec, float* ViewOmegaVec, float* WatchTgtPos, float* CamPos, float MaxOmega, float RotAcclVal, float DragCoffForYaw)
{
	float dt;
	float LimitOmega;
	float ViewVecW;
	float ViewOmegaVecW;
	float Cam2WatchTgtDir[4];
	float V2TOmegaDir[4];
	float V2TOmegaVal;
	float YawOmegaDir[4];
	float YawOmegaVal;
	float Vec[4];
	float SinVal;
	float LimitBySin;
	float NewOmegaVal;
	float AddOmegaVal;
	float MvYawOmegaRate;
	float MvV2TOmegaRate;
	float AddViewVec[4];
	// Line 275, Address: 0x287de0, Func Offset: 0
	// Line 276, Address: 0x287e1c, Func Offset: 0x3c
	// Line 279, Address: 0x287e24, Func Offset: 0x44
	// Line 293, Address: 0x287e28, Func Offset: 0x48
	// Line 280, Address: 0x287e2c, Func Offset: 0x4c
	// Line 293, Address: 0x287e30, Func Offset: 0x50
	// Line 294, Address: 0x287e44, Func Offset: 0x64
	// Line 298, Address: 0x287e70, Func Offset: 0x90
	// Line 299, Address: 0x287e90, Func Offset: 0xb0
	// Line 300, Address: 0x287ebc, Func Offset: 0xdc
	// Line 304, Address: 0x287ee0, Func Offset: 0x100
	// Line 305, Address: 0x287f00, Func Offset: 0x120
	// Line 306, Address: 0x287f24, Func Offset: 0x144
	// Line 307, Address: 0x287f48, Func Offset: 0x168
	// Line 313, Address: 0x287f74, Func Offset: 0x194
	// Line 317, Address: 0x287fa8, Func Offset: 0x1c8
	// Line 318, Address: 0x287fc8, Func Offset: 0x1e8
	// Line 319, Address: 0x287ff0, Func Offset: 0x210
	// Line 320, Address: 0x287ff4, Func Offset: 0x214
	// Line 321, Address: 0x288000, Func Offset: 0x220
	// Line 323, Address: 0x288004, Func Offset: 0x224
	// Line 339, Address: 0x288008, Func Offset: 0x228
	// Line 335, Address: 0x28800c, Func Offset: 0x22c
	// Line 339, Address: 0x288010, Func Offset: 0x230
	// Line 335, Address: 0x288014, Func Offset: 0x234
	// Line 331, Address: 0x28801c, Func Offset: 0x23c
	// Line 338, Address: 0x288020, Func Offset: 0x240
	// Line 339, Address: 0x288024, Func Offset: 0x244
	// Line 338, Address: 0x288028, Func Offset: 0x248
	// Line 339, Address: 0x288030, Func Offset: 0x250
	// Line 341, Address: 0x28803c, Func Offset: 0x25c
	// Line 342, Address: 0x288040, Func Offset: 0x260
	// Line 343, Address: 0x288044, Func Offset: 0x264
	// Line 345, Address: 0x288050, Func Offset: 0x270
	// Line 346, Address: 0x288054, Func Offset: 0x274
	// Line 349, Address: 0x288058, Func Offset: 0x278
	// Line 353, Address: 0x288060, Func Offset: 0x280
	// Line 349, Address: 0x288064, Func Offset: 0x284
	// Line 350, Address: 0x288074, Func Offset: 0x294
	// Line 353, Address: 0x28807c, Func Offset: 0x29c
	// Line 354, Address: 0x288098, Func Offset: 0x2b8
	// Line 355, Address: 0x2880bc, Func Offset: 0x2dc
	// Line 358, Address: 0x2880d4, Func Offset: 0x2f4
	// Line 360, Address: 0x2880f8, Func Offset: 0x318
	// Line 361, Address: 0x288104, Func Offset: 0x324
	// Line 368, Address: 0x288120, Func Offset: 0x340
	// Line 369, Address: 0x28813c, Func Offset: 0x35c
	// Line 370, Address: 0x288160, Func Offset: 0x380
	// Line 371, Address: 0x288178, Func Offset: 0x398
	// Line 373, Address: 0x28819c, Func Offset: 0x3bc
	// Line 374, Address: 0x2881a0, Func Offset: 0x3c0
	// Line 375, Address: 0x2881a4, Func Offset: 0x3c4
	// Func End, Address: 0x2881cc, Func Offset: 0x3ec
}

// 
// Start address: 0x2881d0
void FilterCameraMove_CameraSmooth(float* CamSpd, float* CamPos, float* CamTgtPos, float MaxCamSpdConst, float StdAcclVal, float MaxAcclVal, float DragCoffForYaw)
{
	float dt;
	float Dist2Tgt;
	float FwdSpd2TgtDLVec[4];
	float YawSpd2TgtDLVec[4];
	float SpdDLVec[4];
	float FwdAddSpdVal;
	float YawAddSpdVal;
	float AddChgSpdVal;
	float NewSpdVal;
	float LimitSpdVal;
	float Vec[4];
	float FwdSpd;
	float YawSpd;
	float Rate;
	float AddPos[4];
	// Line 391, Address: 0x2881d0, Func Offset: 0
	// Line 392, Address: 0x288210, Func Offset: 0x40
	// Line 399, Address: 0x28821c, Func Offset: 0x4c
	// Line 401, Address: 0x288230, Func Offset: 0x60
	// Line 402, Address: 0x288234, Func Offset: 0x64
	// Line 403, Address: 0x288238, Func Offset: 0x68
	// Line 405, Address: 0x28824c, Func Offset: 0x7c
	// Line 407, Address: 0x288258, Func Offset: 0x88
	// Line 409, Address: 0x28826c, Func Offset: 0x9c
	// Line 410, Address: 0x288278, Func Offset: 0xa8
	// Line 411, Address: 0x28827c, Func Offset: 0xac
	// Line 413, Address: 0x288280, Func Offset: 0xb0
	// Line 415, Address: 0x288294, Func Offset: 0xc4
	// Line 416, Address: 0x2882a0, Func Offset: 0xd0
	// Line 420, Address: 0x2882a8, Func Offset: 0xd8
	// Line 426, Address: 0x2882c4, Func Offset: 0xf4
	// Line 428, Address: 0x2882f8, Func Offset: 0x128
	// Line 429, Address: 0x288304, Func Offset: 0x134
	// Line 430, Address: 0x28830c, Func Offset: 0x13c
	// Line 441, Address: 0x288310, Func Offset: 0x140
	// Line 444, Address: 0x288320, Func Offset: 0x150
	// Line 446, Address: 0x288324, Func Offset: 0x154
	// Line 443, Address: 0x28832c, Func Offset: 0x15c
	// Line 444, Address: 0x288330, Func Offset: 0x160
	// Line 446, Address: 0x288338, Func Offset: 0x168
	// Line 449, Address: 0x288344, Func Offset: 0x174
	// Line 451, Address: 0x288348, Func Offset: 0x178
	// Line 450, Address: 0x28834c, Func Offset: 0x17c
	// Line 451, Address: 0x288350, Func Offset: 0x180
	// Line 452, Address: 0x288358, Func Offset: 0x188
	// Line 453, Address: 0x288364, Func Offset: 0x194
	// Line 457, Address: 0x288368, Func Offset: 0x198
	// Line 458, Address: 0x288378, Func Offset: 0x1a8
	// Line 460, Address: 0x288388, Func Offset: 0x1b8
	// Line 461, Address: 0x288394, Func Offset: 0x1c4
	// Line 462, Address: 0x288398, Func Offset: 0x1c8
	// Line 463, Address: 0x28839c, Func Offset: 0x1cc
	// Line 467, Address: 0x2883a0, Func Offset: 0x1d0
	// Line 468, Address: 0x2883c4, Func Offset: 0x1f4
	// Line 470, Address: 0x2883dc, Func Offset: 0x20c
	// Line 471, Address: 0x288400, Func Offset: 0x230
	// Line 475, Address: 0x288418, Func Offset: 0x248
	// Line 476, Address: 0x288438, Func Offset: 0x268
	// Line 478, Address: 0x288450, Func Offset: 0x280
	// Func End, Address: 0x28847c, Func Offset: 0x2ac
}

// 
// Start address: 0x288480
float analize_speed_vector_to_target(float* FwdSpd2TgtDLVec, float* YawSpd2TgtDLVec, float* SpdDLVec, float* CamSpd, float* CamPos, float* CamTgtPos)
{
	float Cam2Dist2Tgt;
	float Vec[4];
	// Line 492, Address: 0x288480, Func Offset: 0
	// Line 498, Address: 0x288484, Func Offset: 0x4
	// Line 499, Address: 0x2884a8, Func Offset: 0x28
	// Line 503, Address: 0x2884d0, Func Offset: 0x50
	// Line 504, Address: 0x2884e8, Func Offset: 0x68
	// Line 505, Address: 0x28850c, Func Offset: 0x8c
	// Line 506, Address: 0x288534, Func Offset: 0xb4
	// Line 510, Address: 0x288558, Func Offset: 0xd8
	// Line 511, Address: 0x288574, Func Offset: 0xf4
	// Line 512, Address: 0x288594, Func Offset: 0x114
	// Line 513, Address: 0x2885bc, Func Offset: 0x13c
	// Line 516, Address: 0x2885e8, Func Offset: 0x168
	// Func End, Address: 0x2885f0, Func Offset: 0x170
}

// 
// Start address: 0x2885f0
float get_limit_speed(float DistCam2Target, float MaxCamSpdConst, float StdAcclVal)
{
	float lim_spd;
	// Line 532, Address: 0x2885f0, Func Offset: 0
	// Line 534, Address: 0x288608, Func Offset: 0x18
	// Line 535, Address: 0x288614, Func Offset: 0x24
	// Line 538, Address: 0x288618, Func Offset: 0x28
	// Func End, Address: 0x288620, Func Offset: 0x30
}

// 
// Start address: 0x288620
void FilterCameraMove_SearchView(float* NewWatchPos, float* OrgWatchPos, float* CamPos, float SideAddAng, float UpAddAng)
{
	float WatchVec[4];
	float WatchVecLen;
	float SearchMat[4][4];
	float MkOrgVecMat[4][4];
	float DirVec[4];
	// Line 550, Address: 0x288620, Func Offset: 0
	// Line 557, Address: 0x288628, Func Offset: 0x8
	// Line 550, Address: 0x28862c, Func Offset: 0xc
	// Line 557, Address: 0x288648, Func Offset: 0x28
	// Line 558, Address: 0x28865c, Func Offset: 0x3c
	// Line 559, Address: 0x288660, Func Offset: 0x40
	// Line 558, Address: 0x288664, Func Offset: 0x44
	// Line 559, Address: 0x288668, Func Offset: 0x48
	// Line 560, Address: 0x288688, Func Offset: 0x68
	// Line 561, Address: 0x28869c, Func Offset: 0x7c
	// Line 567, Address: 0x2886ac, Func Offset: 0x8c
	// Line 568, Address: 0x2886d8, Func Offset: 0xb8
	// Line 569, Address: 0x2886e4, Func Offset: 0xc4
	// Line 570, Address: 0x2886f8, Func Offset: 0xd8
	// Line 573, Address: 0x288774, Func Offset: 0x154
	// Line 574, Address: 0x2887a8, Func Offset: 0x188
	// Line 575, Address: 0x2887cc, Func Offset: 0x1ac
	// Line 576, Address: 0x2887e4, Func Offset: 0x1c4
	// Func End, Address: 0x288800, Func Offset: 0x1e0
}

// 
// Start address: 0x288800
void FilterCameraMove_MakeViewRotBaseMatrix(float ViewRotBaseMat[4], float ViewOrgAngX, float ViewOrgAngY)
{
	float SinX;
	float CosX;
	float SinY;
	float CosY;
	float Vec[4];
	// Line 587, Address: 0x288800, Func Offset: 0
	// Line 588, Address: 0x288820, Func Offset: 0x20
	// Line 589, Address: 0x288838, Func Offset: 0x38
	// Line 592, Address: 0x28884c, Func Offset: 0x4c
	// Line 593, Address: 0x28885c, Func Offset: 0x5c
	// Line 598, Address: 0x288860, Func Offset: 0x60
	// Line 593, Address: 0x288870, Func Offset: 0x70
	// Line 594, Address: 0x288874, Func Offset: 0x74
	// Line 595, Address: 0x288878, Func Offset: 0x78
	// Line 594, Address: 0x28887c, Func Offset: 0x7c
	// Line 595, Address: 0x288880, Func Offset: 0x80
	// Line 596, Address: 0x288884, Func Offset: 0x84
	// Line 598, Address: 0x288888, Func Offset: 0x88
	// Line 599, Address: 0x2888a0, Func Offset: 0xa0
	// Line 600, Address: 0x2888c8, Func Offset: 0xc8
	// Line 601, Address: 0x2888cc, Func Offset: 0xcc
	// Line 600, Address: 0x2888d4, Func Offset: 0xd4
	// Line 601, Address: 0x2888d8, Func Offset: 0xd8
	// Line 602, Address: 0x2888f0, Func Offset: 0xf0
	// Line 603, Address: 0x2888fc, Func Offset: 0xfc
	// Func End, Address: 0x288918, Func Offset: 0x118
}

// 
// Start address: 0x288920
int FilterCameraMove_LimitViewAngleXY(float* ViewVec, float MinAngX, float MaxAngX, float MinAngY, float MaxAngY, float AngRateX, float AngRateY, float ViewRotBaseMat[4])
{
	float VAngX;
	float VAngY;
	float InvBaseMat[4][4];
	float VecOnBase[4];
	int RetBool;
	float XZLen;
	float CosX;
	float KeepW;
	// Line 622, Address: 0x288920, Func Offset: 0
	// Line 630, Address: 0x288924, Func Offset: 0x4
	// Line 622, Address: 0x288928, Func Offset: 0x8
	// Line 630, Address: 0x28892c, Func Offset: 0xc
	// Line 622, Address: 0x288930, Func Offset: 0x10
	// Line 626, Address: 0x288948, Func Offset: 0x28
	// Line 622, Address: 0x28894c, Func Offset: 0x2c
	// Line 630, Address: 0x288968, Func Offset: 0x48
	// Line 622, Address: 0x28896c, Func Offset: 0x4c
	// Line 630, Address: 0x288980, Func Offset: 0x60
	// Line 632, Address: 0x288988, Func Offset: 0x68
	// Line 633, Address: 0x28898c, Func Offset: 0x6c
	// Line 634, Address: 0x288990, Func Offset: 0x70
	// Line 636, Address: 0x2889a8, Func Offset: 0x88
	// Line 637, Address: 0x2889ac, Func Offset: 0x8c
	// Line 640, Address: 0x2889b0, Func Offset: 0x90
	// Line 641, Address: 0x2889f4, Func Offset: 0xd4
	// Line 645, Address: 0x288a20, Func Offset: 0x100
	// Line 646, Address: 0x288a30, Func Offset: 0x110
	// Line 645, Address: 0x288a34, Func Offset: 0x114
	// Line 646, Address: 0x288a44, Func Offset: 0x124
	// Line 648, Address: 0x288a50, Func Offset: 0x130
	// Line 646, Address: 0x288a54, Func Offset: 0x134
	// Line 648, Address: 0x288a58, Func Offset: 0x138
	// Line 649, Address: 0x288a78, Func Offset: 0x158
	// Line 651, Address: 0x288a98, Func Offset: 0x178
	// Line 652, Address: 0x288aac, Func Offset: 0x18c
	// Line 653, Address: 0x288ad0, Func Offset: 0x1b0
	// Line 654, Address: 0x288ae0, Func Offset: 0x1c0
	// Line 655, Address: 0x288ae4, Func Offset: 0x1c4
	// Line 656, Address: 0x288af0, Func Offset: 0x1d0
	// Line 661, Address: 0x288b00, Func Offset: 0x1e0
	// Line 662, Address: 0x288b18, Func Offset: 0x1f8
	// Line 663, Address: 0x288b24, Func Offset: 0x204
	// Line 665, Address: 0x288b28, Func Offset: 0x208
	// Line 666, Address: 0x288b40, Func Offset: 0x220
	// Line 667, Address: 0x288b4c, Func Offset: 0x22c
	// Line 670, Address: 0x288b50, Func Offset: 0x230
	// Line 671, Address: 0x288b5c, Func Offset: 0x23c
	// Line 672, Address: 0x288b60, Func Offset: 0x240
	// Line 673, Address: 0x288b74, Func Offset: 0x254
	// Line 674, Address: 0x288b7c, Func Offset: 0x25c
	// Line 676, Address: 0x288b80, Func Offset: 0x260
	// Line 677, Address: 0x288b8c, Func Offset: 0x26c
	// Line 678, Address: 0x288b90, Func Offset: 0x270
	// Line 679, Address: 0x288ba4, Func Offset: 0x284
	// Line 680, Address: 0x288bac, Func Offset: 0x28c
	// Line 682, Address: 0x288bb0, Func Offset: 0x290
	// Line 683, Address: 0x288bb8, Func Offset: 0x298
	// Line 685, Address: 0x288bc0, Func Offset: 0x2a0
	// Line 686, Address: 0x288bc8, Func Offset: 0x2a8
	// Line 685, Address: 0x288bcc, Func Offset: 0x2ac
	// Line 687, Address: 0x288bd0, Func Offset: 0x2b0
	// Line 688, Address: 0x288bdc, Func Offset: 0x2bc
	// Line 689, Address: 0x288bec, Func Offset: 0x2cc
	// Line 690, Address: 0x288bfc, Func Offset: 0x2dc
	// Line 689, Address: 0x288c00, Func Offset: 0x2e0
	// Line 690, Address: 0x288c04, Func Offset: 0x2e4
	// Line 692, Address: 0x288c28, Func Offset: 0x308
	// Line 691, Address: 0x288c2c, Func Offset: 0x30c
	// Line 694, Address: 0x288c30, Func Offset: 0x310
	// Func End, Address: 0x288c68, Func Offset: 0x348
}

// 
// Start address: 0x288c70
float FilterCameraMove_CalcAreaNearestPos(float* AreaNearestPos, float* ChkPos, float* LPos0XYZ, float* LPos1XYZ, float LRadius, unsigned int CylinderMode)
{
	_anon0 line;
	float NearestLinePos[4];
	float LineDir[4];
	float Dist;
	int Type;
	float SideDist;
	float CircleStaDist;
	float CircleEndDist;
	float CircleDist;
	float Vec[4];
	float Line2PosVec[4];
	float Circle2PosVal;
	float Pos2CircleVec[4];
	float Line2PosLen;
	float Vec[4];
	// Line 708, Address: 0x288c70, Func Offset: 0
	// Line 718, Address: 0x288c74, Func Offset: 0x4
	// Line 708, Address: 0x288c78, Func Offset: 0x8
	// Line 723, Address: 0x288c9c, Func Offset: 0x2c
	// Line 715, Address: 0x288ca0, Func Offset: 0x30
	// Line 723, Address: 0x288ca4, Func Offset: 0x34
	// Line 715, Address: 0x288cac, Func Offset: 0x3c
	// Line 716, Address: 0x288cb0, Func Offset: 0x40
	// Line 717, Address: 0x288cb8, Func Offset: 0x48
	// Line 718, Address: 0x288cc0, Func Offset: 0x50
	// Line 719, Address: 0x288cc4, Func Offset: 0x54
	// Line 723, Address: 0x288cc8, Func Offset: 0x58
	// Line 719, Address: 0x288ccc, Func Offset: 0x5c
	// Line 720, Address: 0x288cd0, Func Offset: 0x60
	// Line 721, Address: 0x288cd8, Func Offset: 0x68
	// Line 723, Address: 0x288ce0, Func Offset: 0x70
	// Line 725, Address: 0x288cf0, Func Offset: 0x80
	// Line 726, Address: 0x288d10, Func Offset: 0xa0
	// Line 728, Address: 0x288d38, Func Offset: 0xc8
	// Line 731, Address: 0x288d50, Func Offset: 0xe0
	// Line 732, Address: 0x288d58, Func Offset: 0xe8
	// Line 735, Address: 0x288d64, Func Offset: 0xf4
	// Line 741, Address: 0x288d74, Func Offset: 0x104
	// Line 742, Address: 0x288d78, Func Offset: 0x108
	// Line 743, Address: 0x288d7c, Func Offset: 0x10c
	// Line 744, Address: 0x288d80, Func Offset: 0x110
	// Line 746, Address: 0x288da0, Func Offset: 0x130
	// Line 753, Address: 0x288da8, Func Offset: 0x138
	// Line 754, Address: 0x288dc4, Func Offset: 0x154
	// Line 755, Address: 0x288de8, Func Offset: 0x178
	// Line 756, Address: 0x288e04, Func Offset: 0x194
	// Line 757, Address: 0x288e2c, Func Offset: 0x1bc
	// Line 758, Address: 0x288e48, Func Offset: 0x1d8
	// Line 766, Address: 0x288e70, Func Offset: 0x200
	// Line 768, Address: 0x288ea8, Func Offset: 0x238
	// Line 769, Address: 0x288eac, Func Offset: 0x23c
	// Line 770, Address: 0x288eb0, Func Offset: 0x240
	// Line 772, Address: 0x288ec4, Func Offset: 0x254
	// Line 773, Address: 0x288ecc, Func Offset: 0x25c
	// Line 775, Address: 0x288ed0, Func Offset: 0x260
	// Line 779, Address: 0x288eec, Func Offset: 0x27c
	// Line 780, Address: 0x288f10, Func Offset: 0x2a0
	// Line 781, Address: 0x288f38, Func Offset: 0x2c8
	// Line 786, Address: 0x288f58, Func Offset: 0x2e8
	// Line 787, Address: 0x288f80, Func Offset: 0x310
	// Line 789, Address: 0x288f8c, Func Offset: 0x31c
	// Line 790, Address: 0x288fb4, Func Offset: 0x344
	// Line 793, Address: 0x288fb8, Func Offset: 0x348
	// Line 794, Address: 0x288fd0, Func Offset: 0x360
	// Line 797, Address: 0x288fd8, Func Offset: 0x368
	// Line 794, Address: 0x288fdc, Func Offset: 0x36c
	// Line 797, Address: 0x288fe0, Func Offset: 0x370
	// Line 798, Address: 0x288ff4, Func Offset: 0x384
	// Line 801, Address: 0x289018, Func Offset: 0x3a8
	// Func End, Address: 0x289038, Func Offset: 0x3c8
}

// 
// Start address: 0x289040
void move_to_capsule_line_area(float* AdjPos, float* NearestLinePos, float DistFromLine, float CapsuleRadius)
{
	float Pos2LineVec[4];
	// Line 812, Address: 0x289040, Func Offset: 0
	// Line 814, Address: 0x289044, Func Offset: 0x4
	// Line 815, Address: 0x28905c, Func Offset: 0x1c
	// Line 816, Address: 0x289088, Func Offset: 0x48
	// Line 817, Address: 0x2890b0, Func Offset: 0x70
	// Line 818, Address: 0x2890c8, Func Offset: 0x88
	// Func End, Address: 0x2890d0, Func Offset: 0x90
}

