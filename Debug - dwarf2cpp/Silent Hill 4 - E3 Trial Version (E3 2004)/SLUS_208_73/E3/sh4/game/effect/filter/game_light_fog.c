typedef union _anon0;
typedef union _anon1;
typedef struct _anon2;
typedef struct LightFogVertSPRAM;
typedef struct _cam3Work;
typedef struct LightFogColumn;
typedef struct sfObj;
typedef struct LightFogVert;
typedef struct LightFogFilter;
typedef struct FogData;
typedef enum sgLightType : unsigned char;
typedef struct _anon3;
typedef struct FogChildData;
typedef struct LightFogFilterSCPAD;
typedef enum _cam3Step : unsigned char;

typedef void(*type_10)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef void(*type_29)();
typedef void(*type_36)(sfObj*);

typedef int type_0[4];
typedef unsigned int type_1[4];
typedef void* type_2[4];
typedef short type_3[8];
typedef unsigned short type_4[8];
typedef char type_5[16];
typedef unsigned char type_6[16];
typedef float type_7[4];
typedef float type_8[1];
typedef int type_9[1];
typedef long type_11[1];
typedef void(*type_13)(sfObj*)[3];
typedef FogData type_14[9];
typedef float type_15[4];
typedef float type_16[4][4];
typedef float type_17[4];
typedef int type_18[4];
typedef unsigned char type_19[4];
typedef short type_20[2];
typedef unsigned short type_21[2];
typedef LightFogVert type_22[12];
typedef char type_23[4];
typedef unsigned char type_24[4];
typedef float type_25[3];
typedef float type_26[1];
typedef int type_27[1];
typedef LightFogColumn type_28[17];
typedef FogChildData type_30[4];
typedef void(*type_31)()[2];
typedef LightFogVertSPRAM type_32[12];
typedef LightFogVertSPRAM type_33[12][17];
typedef _anon1 type_34[256];
typedef long type_35[2];
typedef unsigned long type_37[2];

union _anon0
{
	long sl[2];
	unsigned long ul[2];
	<unknown fundamental type (0xa510)> sl128;
	<unknown fundamental type (0xa510)> ul128;
	int si[4];
	unsigned int ui[4];
	void* pt[4];
	short ss[8];
	unsigned short us[8];
	char sc[16];
	unsigned char uc[16];
	float f[4];
	float fv[1];
	int iv[1];
	long lv[1];
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

struct _anon2
{
	float start[4];
	float end[4];
};

struct LightFogVertSPRAM
{
	float ForwdPow[4];
	float BackwdPow[4];
	unsigned char ForwdCol[4];
	unsigned char BackwdCol[4];
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

struct LightFogColumn
{
	LightFogVert VertAry[12];
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

struct LightFogVert
{
	float DirVec[4];
	int DispX;
	int DispY;
	int iRandVal;
};

struct LightFogFilter
{
	LightFogColumn ColumnAry[17];
	int ScnFrameNum;
	_anon0* pPkTop;
};

struct FogData
{
	float Pos[4];
	float Radius;
	float ChildRotAngY;
	float ChildRotAngX;
	float FadeDist;
	float ThickRate;
};

enum sgLightType : unsigned char
{
	SG_LIGHT_NONE,
	SG_LIGHT_AMBIENT,
	SG_LIGHT_DIRECTIONAL,
	SG_LIGHT_POINT,
	SG_LIGHT_SPOT,
	SG_LIGHT_REFRECT_DIRECTIONAL,
	SG_LIGHT_REFRECT_POINT
};

struct _anon3
{
	float color[4];
	float direction[4];
	float position[4];
	sgLightType type;
	float start;
	float end;
	float spot_cone_angle;
	float falloff_angle;
	int flag;
};

struct FogChildData
{
	float RateVecXYZ[3];
	float RateRadius;
	unsigned int MkShapeRandVal;
};

struct LightFogFilterSCPAD
{
	LightFogVertSPRAM VtWorkAry2[12][17];
};

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
};

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
FogChildData ChildData[4];
FogData FarFogData[9];
LightFogFilterSCPAD* pSprW;
LightFogFilter LffW;
float sg_vector_zero[4];
float sg_matrix_unit[4][4];
float sg_vector_unit_w[4];
_cam3Work cam3_work;

void GameFilterLightFogInit();
void GameFilterLightFogInitScene();
void GameFilterLightFogDraw();
int light_fog_use_scene();
void Lff_SetVertNormalVec();
unsigned int UseTexBufAddress();
_anon0* OpenPacketBuffer();
void CloseAndSendPacketBuffer(_anon0* pPk);
_anon0* FirstPacket_ForLightFogFilter(_anon0* pPk);
_anon0* LastPacket_ForLightFogFilter(_anon0* pPk);
void Lff_ClearPowAndColOfVertex();
void Lff_AddAllSceneLight(int LightNum);
void chg_color_by_glow_level(float* ChgCol, float* InCol, int DiffGlowLevel, float ChgColUnitVal);
void Lff_AddLight(float* LtScnPos, float LtPow, float rr, float gg, float bb);
float MakeLightFogRate(LightFogVert* pVt, float* LtPosDirVec, float DistFromCam, float LtPow, int ForwdGlowFlag);
void Lff_MkLightColFromPow();
unsigned char MakePsColFromLightPow(float LtPow);
void Lff_Draw();
void MakeTexture_ThatHas_FrameBufPixAndAlpha_MadeFromZBuf(unsigned int MkTexBufAdr, unsigned int FbufAdr, unsigned int ZbufAdr, unsigned int AlphaZeroZBitNo, unsigned int MkAlphaBitNum);
_anon0* make_framebuf_alpha_constant_back_of_a_pos(_anon0* pPk, float* LtViewPos);
int LightFog_WorldPosToAlpha(unsigned int* pAlpha, unsigned int* piZBuf, float* ViewPos);
_anon0* GiveFrameBufContrast(_anon0* pPk, unsigned char SleshR, unsigned char SleshG, unsigned char SleshB, unsigned char ContrastAlpha);
_anon0* ClearAllFrameBuffer(_anon0* pPk, unsigned char r, unsigned char g, unsigned char b, unsigned char a, unsigned int ZbufVal, unsigned long alpha_reg, unsigned int GifTagEOP);
_anon0* FillAllFrameBufferWithSameSizeSplite(_anon0* pPk, unsigned char r, unsigned char g, unsigned char b, unsigned char a, unsigned int ZbufVal, unsigned long alpha_reg, unsigned int GifTagEOP);

// 
// Start address: 0x279210
void GameFilterLightFogInit()
{
	LightFogFilter* pLff;
	int ClmnNo;
	int VtNo;
	float ClmnYH;
	// Line 272, Address: 0x279210, Func Offset: 0
	// Line 273, Address: 0x279220, Func Offset: 0x10
	// Line 272, Address: 0x279224, Func Offset: 0x14
	// Line 273, Address: 0x279228, Func Offset: 0x18
	// Line 272, Address: 0x27922c, Func Offset: 0x1c
	// Line 276, Address: 0x279230, Func Offset: 0x20
	// Line 272, Address: 0x279234, Func Offset: 0x24
	// Line 279, Address: 0x279248, Func Offset: 0x38
	// Line 282, Address: 0x27925c, Func Offset: 0x4c
	// Line 279, Address: 0x279260, Func Offset: 0x50
	// Line 285, Address: 0x2792a0, Func Offset: 0x90
	// Line 286, Address: 0x2792b8, Func Offset: 0xa8
	// Line 287, Address: 0x2792ec, Func Offset: 0xdc
	// Line 286, Address: 0x2792f4, Func Offset: 0xe4
	// Line 287, Address: 0x279314, Func Offset: 0x104
	// Line 288, Address: 0x27931c, Func Offset: 0x10c
	// Line 287, Address: 0x279320, Func Offset: 0x110
	// Line 288, Address: 0x279324, Func Offset: 0x114
	// Line 289, Address: 0x279330, Func Offset: 0x120
	// Func End, Address: 0x27935c, Func Offset: 0x14c
}

// 
// Start address: 0x279360
void GameFilterLightFogInitScene()
{
	LightFogFilter* pLff;
	int ClmnNo;
	int VtNo;
	// Line 297, Address: 0x279360, Func Offset: 0
	// Line 301, Address: 0x279364, Func Offset: 0x4
	// Line 297, Address: 0x279368, Func Offset: 0x8
	// Line 298, Address: 0x279374, Func Offset: 0x14
	// Line 297, Address: 0x279378, Func Offset: 0x18
	// Line 298, Address: 0x27937c, Func Offset: 0x1c
	// Line 297, Address: 0x279380, Func Offset: 0x20
	// Line 303, Address: 0x279384, Func Offset: 0x24
	// Line 301, Address: 0x279388, Func Offset: 0x28
	// Line 303, Address: 0x27938c, Func Offset: 0x2c
	// Line 306, Address: 0x279390, Func Offset: 0x30
	// Line 309, Address: 0x279398, Func Offset: 0x38
	// Line 312, Address: 0x2793a0, Func Offset: 0x40
	// Line 313, Address: 0x2793a8, Func Offset: 0x48
	// Line 312, Address: 0x2793ac, Func Offset: 0x4c
	// Line 313, Address: 0x2793b0, Func Offset: 0x50
	// Line 312, Address: 0x2793b4, Func Offset: 0x54
	// Line 313, Address: 0x2793b8, Func Offset: 0x58
	// Line 314, Address: 0x2793c0, Func Offset: 0x60
	// Line 315, Address: 0x2793d0, Func Offset: 0x70
	// Func End, Address: 0x2793ec, Func Offset: 0x8c
}

// 
// Start address: 0x2793f0
void GameFilterLightFogDraw()
{
	int GlowLightNum;
	// Line 322, Address: 0x2793f0, Func Offset: 0
	// Line 325, Address: 0x2793f8, Func Offset: 0x8
	// Line 326, Address: 0x279408, Func Offset: 0x18
	// Line 328, Address: 0x279418, Func Offset: 0x28
	// Line 329, Address: 0x279424, Func Offset: 0x34
	// Line 335, Address: 0x27942c, Func Offset: 0x3c
	// Line 336, Address: 0x279434, Func Offset: 0x44
	// Line 343, Address: 0x27943c, Func Offset: 0x4c
	// Line 344, Address: 0x279444, Func Offset: 0x54
	// Line 345, Address: 0x27944c, Func Offset: 0x5c
	// Line 346, Address: 0x279454, Func Offset: 0x64
	// Func End, Address: 0x279468, Func Offset: 0x78
}

// 
// Start address: 0x279470
int light_fog_use_scene()
{
	// Line 378, Address: 0x279470, Func Offset: 0
	// Func End, Address: 0x279478, Func Offset: 0x8
}

// 
// Start address: 0x279480
void Lff_SetVertNormalVec()
{
	LightFogFilter* pLff;
	int ClmnNo;
	int VtNo;
	float ViewScrMat[4][4];
	LightFogColumn* pClmn;
	float ClmnYH;
	LightFogVert* pVt;
	LightFogVertSPRAM* pVtW;
	float HalfViewTan;
	// Line 385, Address: 0x279480, Func Offset: 0
	// Line 390, Address: 0x279488, Func Offset: 0x8
	// Line 385, Address: 0x27948c, Func Offset: 0xc
	// Line 386, Address: 0x279494, Func Offset: 0x14
	// Line 385, Address: 0x279498, Func Offset: 0x18
	// Line 386, Address: 0x27949c, Func Offset: 0x1c
	// Line 385, Address: 0x2794a0, Func Offset: 0x20
	// Line 390, Address: 0x2794a4, Func Offset: 0x24
	// Line 392, Address: 0x2794ac, Func Offset: 0x2c
	// Line 394, Address: 0x2794b8, Func Offset: 0x38
	// Line 395, Address: 0x2794c4, Func Offset: 0x44
	// Line 398, Address: 0x2794cc, Func Offset: 0x4c
	// Line 400, Address: 0x2794d8, Func Offset: 0x58
	// Line 402, Address: 0x2794dc, Func Offset: 0x5c
	// Line 409, Address: 0x2794e4, Func Offset: 0x64
	// Line 402, Address: 0x2794e8, Func Offset: 0x68
	// Line 411, Address: 0x2794ec, Func Offset: 0x6c
	// Line 409, Address: 0x2794f0, Func Offset: 0x70
	// Line 410, Address: 0x279508, Func Offset: 0x88
	// Line 411, Address: 0x279528, Func Offset: 0xa8
	// Line 412, Address: 0x27952c, Func Offset: 0xac
	// Line 413, Address: 0x279530, Func Offset: 0xb0
	// Line 414, Address: 0x279554, Func Offset: 0xd4
	// Line 415, Address: 0x279564, Func Offset: 0xe4
	// Line 416, Address: 0x279574, Func Offset: 0xf4
	// Func End, Address: 0x279594, Func Offset: 0x114
}

// 
// Start address: 0x2795a0
unsigned int UseTexBufAddress()
{
	// Line 422, Address: 0x2795a0, Func Offset: 0
	// Func End, Address: 0x2795a8, Func Offset: 0x8
}

// 
// Start address: 0x2795b0
_anon0* OpenPacketBuffer()
{
	// Line 430, Address: 0x2795b0, Func Offset: 0
	// Line 431, Address: 0x2795b8, Func Offset: 0x8
	// Line 432, Address: 0x2795d8, Func Offset: 0x28
	// Func End, Address: 0x2795e4, Func Offset: 0x34
}

// 
// Start address: 0x2795f0
void CloseAndSendPacketBuffer(_anon0* pPk)
{
	int qwc;
	// Line 442, Address: 0x2795f0, Func Offset: 0
	// Line 439, Address: 0x2795f4, Func Offset: 0x4
	// Line 442, Address: 0x2795f8, Func Offset: 0x8
	// Line 439, Address: 0x2795fc, Func Offset: 0xc
	// Line 442, Address: 0x279600, Func Offset: 0x10
	// Line 439, Address: 0x279604, Func Offset: 0x14
	// Line 442, Address: 0x279608, Func Offset: 0x18
	// Line 449, Address: 0x27960c, Func Offset: 0x1c
	// Line 442, Address: 0x279610, Func Offset: 0x20
	// Line 443, Address: 0x279614, Func Offset: 0x24
	// Line 448, Address: 0x27961c, Func Offset: 0x2c
	// Line 447, Address: 0x279620, Func Offset: 0x30
	// Line 448, Address: 0x279624, Func Offset: 0x34
	// Line 449, Address: 0x279628, Func Offset: 0x38
	// Line 451, Address: 0x279630, Func Offset: 0x40
	// Line 452, Address: 0x279644, Func Offset: 0x54
	// Line 453, Address: 0x27964c, Func Offset: 0x5c
	// Line 454, Address: 0x279654, Func Offset: 0x64
	// Line 455, Address: 0x279658, Func Offset: 0x68
	// Line 456, Address: 0x27966c, Func Offset: 0x7c
	// Func End, Address: 0x27967c, Func Offset: 0x8c
}

// 
// Start address: 0x279680
_anon0* FirstPacket_ForLightFogFilter(_anon0* pPk)
{
	// Line 465, Address: 0x279680, Func Offset: 0
	// Line 471, Address: 0x279684, Func Offset: 0x4
	// Line 465, Address: 0x279688, Func Offset: 0x8
	// Line 476, Address: 0x27968c, Func Offset: 0xc
	// Line 465, Address: 0x279690, Func Offset: 0x10
	// Line 480, Address: 0x279694, Func Offset: 0x14
	// Line 465, Address: 0x279698, Func Offset: 0x18
	// Line 466, Address: 0x2796a0, Func Offset: 0x20
	// Line 470, Address: 0x2796a4, Func Offset: 0x24
	// Line 466, Address: 0x2796a8, Func Offset: 0x28
	// Line 470, Address: 0x2796ac, Func Offset: 0x2c
	// Line 481, Address: 0x2796c4, Func Offset: 0x44
	// Line 471, Address: 0x2796c8, Func Offset: 0x48
	// Line 486, Address: 0x2796cc, Func Offset: 0x4c
	// Line 472, Address: 0x2796d0, Func Offset: 0x50
	// Line 475, Address: 0x2796d4, Func Offset: 0x54
	// Line 476, Address: 0x2796d8, Func Offset: 0x58
	// Line 480, Address: 0x2796dc, Func Offset: 0x5c
	// Line 481, Address: 0x2796e0, Func Offset: 0x60
	// Line 482, Address: 0x2796e4, Func Offset: 0x64
	// Line 485, Address: 0x2796e8, Func Offset: 0x68
	// Line 488, Address: 0x2796ec, Func Offset: 0x6c
	// Line 489, Address: 0x2796f0, Func Offset: 0x70
	// Func End, Address: 0x2796f8, Func Offset: 0x78
}

// 
// Start address: 0x279700
_anon0* LastPacket_ForLightFogFilter(_anon0* pPk)
{
	// Line 497, Address: 0x279700, Func Offset: 0
	// Line 507, Address: 0x279704, Func Offset: 0x4
	// Line 497, Address: 0x279708, Func Offset: 0x8
	// Line 508, Address: 0x27970c, Func Offset: 0xc
	// Line 497, Address: 0x279710, Func Offset: 0x10
	// Line 498, Address: 0x27971c, Func Offset: 0x1c
	// Line 503, Address: 0x279724, Func Offset: 0x24
	// Line 502, Address: 0x279728, Func Offset: 0x28
	// Line 503, Address: 0x27972c, Func Offset: 0x2c
	// Line 504, Address: 0x279730, Func Offset: 0x30
	// Line 512, Address: 0x279734, Func Offset: 0x34
	// Line 507, Address: 0x279738, Func Offset: 0x38
	// Line 512, Address: 0x27973c, Func Offset: 0x3c
	// Line 508, Address: 0x279740, Func Offset: 0x40
	// Line 513, Address: 0x279744, Func Offset: 0x44
	// Line 512, Address: 0x279748, Func Offset: 0x48
	// Line 513, Address: 0x27974c, Func Offset: 0x4c
	// Line 514, Address: 0x279750, Func Offset: 0x50
	// Line 517, Address: 0x279754, Func Offset: 0x54
	// Func End, Address: 0x27975c, Func Offset: 0x5c
}

// 
// Start address: 0x279760
void Lff_ClearPowAndColOfVertex()
{
	LightFogFilter* pLff;
	int ClmnNo;
	int VtNo;
	LightFogVertSPRAM* pVtW;
	// Line 526, Address: 0x279760, Func Offset: 0
	// Line 534, Address: 0x279764, Func Offset: 0x4
	// Line 526, Address: 0x27976c, Func Offset: 0xc
	// Line 530, Address: 0x279770, Func Offset: 0x10
	// Line 533, Address: 0x279774, Func Offset: 0x14
	// Line 534, Address: 0x27979c, Func Offset: 0x3c
	// Line 535, Address: 0x2797a4, Func Offset: 0x44
	// Line 536, Address: 0x2797ac, Func Offset: 0x4c
	// Line 537, Address: 0x2797bc, Func Offset: 0x5c
	// Line 538, Address: 0x2797cc, Func Offset: 0x6c
	// Func End, Address: 0x2797d4, Func Offset: 0x74
}

// 
// Start address: 0x2797e0
void Lff_AddAllSceneLight(int LightNum)
{
	int LtNo;
	_anon3* pLt;
	float pos[4];
	float col[4];
	sgLightType type;
	int GlowLevel;
	// Line 796, Address: 0x2797e0, Func Offset: 0
	// Line 802, Address: 0x2797fc, Func Offset: 0x1c
	// Line 796, Address: 0x279800, Func Offset: 0x20
	// Line 802, Address: 0x279804, Func Offset: 0x24
	// Line 796, Address: 0x279808, Func Offset: 0x28
	// Line 802, Address: 0x27980c, Func Offset: 0x2c
	// Line 804, Address: 0x279820, Func Offset: 0x40
	// Line 812, Address: 0x27982c, Func Offset: 0x4c
	// Line 814, Address: 0x279834, Func Offset: 0x54
	// Line 815, Address: 0x27983c, Func Offset: 0x5c
	// Line 817, Address: 0x27984c, Func Offset: 0x6c
	// Line 819, Address: 0x279858, Func Offset: 0x78
	// Line 823, Address: 0x279860, Func Offset: 0x80
	// Line 824, Address: 0x279868, Func Offset: 0x88
	// Line 826, Address: 0x279880, Func Offset: 0xa0
	// Line 828, Address: 0x2798bc, Func Offset: 0xdc
	// Line 830, Address: 0x2798c0, Func Offset: 0xe0
	// Line 831, Address: 0x2798cc, Func Offset: 0xec
	// Line 835, Address: 0x2798d0, Func Offset: 0xf0
	// Line 831, Address: 0x2798d4, Func Offset: 0xf4
	// Line 835, Address: 0x2798dc, Func Offset: 0xfc
	// Line 836, Address: 0x2798f4, Func Offset: 0x114
	// Line 837, Address: 0x279908, Func Offset: 0x128
	// Func End, Address: 0x279930, Func Offset: 0x150
}

// 
// Start address: 0x279930
void chg_color_by_glow_level(float* ChgCol, float* InCol, int DiffGlowLevel, float ChgColUnitVal)
{
	float Col[4];
	float ChgUnitCol[4];
	int MaxColNo;
	int CNo;
	float MaxColVal;
	// Line 859, Address: 0x279930, Func Offset: 0
	// Line 861, Address: 0x279938, Func Offset: 0x8
	// Line 862, Address: 0x27993c, Func Offset: 0xc
	// Line 863, Address: 0x279944, Func Offset: 0x14
	// Line 866, Address: 0x279948, Func Offset: 0x18
	// Line 869, Address: 0x279954, Func Offset: 0x24
	// Line 870, Address: 0x279960, Func Offset: 0x30
	// Line 871, Address: 0x279978, Func Offset: 0x48
	// Line 874, Address: 0x27997c, Func Offset: 0x4c
	// Line 877, Address: 0x279994, Func Offset: 0x64
	// Line 878, Address: 0x2799a8, Func Offset: 0x78
	// Line 879, Address: 0x2799d4, Func Offset: 0xa4
	// Line 880, Address: 0x2799e0, Func Offset: 0xb0
	// Line 881, Address: 0x2799ec, Func Offset: 0xbc
	// Line 883, Address: 0x2799f0, Func Offset: 0xc0
	// Line 884, Address: 0x279a1c, Func Offset: 0xec
	// Line 885, Address: 0x279a3c, Func Offset: 0x10c
	// Line 886, Address: 0x279a5c, Func Offset: 0x12c
	// Func End, Address: 0x279a68, Func Offset: 0x138
}

// 
// Start address: 0x279a70
void Lff_AddLight(float* LtScnPos, float LtPow, float rr, float gg, float bb)
{
	LightFogFilter* pLff;
	int ClmnNo;
	int VtNo;
	float WldViewMat[4][4];
	float LtPos[4];
	float LtPosDirVec[4];
	float Col[4];
	float LtDist;
	float ForwdLtRate;
	LightFogColumn* pClmn;
	LightFogVert* pVt;
	LightFogVertSPRAM* pVtW;
	float Pow[4];
	float BackwdLtRate;
	// Line 902, Address: 0x279a70, Func Offset: 0
	// Line 908, Address: 0x279a74, Func Offset: 0x4
	// Line 902, Address: 0x279a78, Func Offset: 0x8
	// Line 908, Address: 0x279a7c, Func Offset: 0xc
	// Line 902, Address: 0x279a80, Func Offset: 0x10
	// Line 908, Address: 0x279a84, Func Offset: 0x14
	// Line 902, Address: 0x279a88, Func Offset: 0x18
	// Line 903, Address: 0x279a8c, Func Offset: 0x1c
	// Line 902, Address: 0x279a90, Func Offset: 0x20
	// Line 903, Address: 0x279a94, Func Offset: 0x24
	// Line 902, Address: 0x279a98, Func Offset: 0x28
	// Line 913, Address: 0x279ab0, Func Offset: 0x40
	// Line 908, Address: 0x279ab4, Func Offset: 0x44
	// Line 913, Address: 0x279ac8, Func Offset: 0x58
	// Line 914, Address: 0x279ad0, Func Offset: 0x60
	// Line 915, Address: 0x279b00, Func Offset: 0x90
	// Line 916, Address: 0x279b2c, Func Offset: 0xbc
	// Line 918, Address: 0x279b50, Func Offset: 0xe0
	// Line 920, Address: 0x279b58, Func Offset: 0xe8
	// Line 922, Address: 0x279b60, Func Offset: 0xf0
	// Line 920, Address: 0x279b64, Func Offset: 0xf4
	// Line 922, Address: 0x279b68, Func Offset: 0xf8
	// Line 924, Address: 0x279b70, Func Offset: 0x100
	// Line 925, Address: 0x279b78, Func Offset: 0x108
	// Line 929, Address: 0x279b88, Func Offset: 0x118
	// Line 925, Address: 0x279b8c, Func Offset: 0x11c
	// Line 929, Address: 0x279b90, Func Offset: 0x120
	// Line 925, Address: 0x279b94, Func Offset: 0x124
	// Line 929, Address: 0x279b98, Func Offset: 0x128
	// Line 925, Address: 0x279b9c, Func Offset: 0x12c
	// Line 929, Address: 0x279ba8, Func Offset: 0x138
	// Line 925, Address: 0x279bac, Func Offset: 0x13c
	// Line 929, Address: 0x279bb0, Func Offset: 0x140
	// Line 930, Address: 0x279bb8, Func Offset: 0x148
	// Line 931, Address: 0x279bd8, Func Offset: 0x168
	// Line 933, Address: 0x279bf4, Func Offset: 0x184
	// Line 934, Address: 0x279c0c, Func Offset: 0x19c
	// Line 935, Address: 0x279c30, Func Offset: 0x1c0
	// Line 936, Address: 0x279c44, Func Offset: 0x1d4
	// Line 937, Address: 0x279c54, Func Offset: 0x1e4
	// Line 938, Address: 0x279c64, Func Offset: 0x1f4
	// Func End, Address: 0x279c90, Func Offset: 0x220
}

// 
// Start address: 0x279c90
float MakeLightFogRate(LightFogVert* pVt, float* LtPosDirVec, float DistFromCam, float LtPow, int ForwdGlowFlag)
{
	float RetRate;
	float DirRate;
	float LtPowRate;
	float DistanceRate;
	float AboutHalfRadiusDist;
	float CrsVec[4];
	float CrsVal;
	float AdjByDistCoff;
	// Line 958, Address: 0x279c90, Func Offset: 0
	// Line 959, Address: 0x279c98, Func Offset: 0x8
	// Line 960, Address: 0x279ca0, Func Offset: 0x10
	// Line 961, Address: 0x279ca8, Func Offset: 0x18
	// Line 965, Address: 0x279cb0, Func Offset: 0x20
	// Line 966, Address: 0x279cbc, Func Offset: 0x2c
	// Line 967, Address: 0x279cd0, Func Offset: 0x40
	// Line 968, Address: 0x279cd8, Func Offset: 0x48
	// Line 971, Address: 0x279ce0, Func Offset: 0x50
	// Line 972, Address: 0x279ce8, Func Offset: 0x58
	// Line 974, Address: 0x279d00, Func Offset: 0x70
	// Line 973, Address: 0x279d04, Func Offset: 0x74
	// Line 974, Address: 0x279d08, Func Offset: 0x78
	// Line 975, Address: 0x279d18, Func Offset: 0x88
	// Line 976, Address: 0x279d34, Func Offset: 0xa4
	// Line 977, Address: 0x279d38, Func Offset: 0xa8
	// Line 981, Address: 0x279d48, Func Offset: 0xb8
	// Line 984, Address: 0x279d4c, Func Offset: 0xbc
	// Line 990, Address: 0x279d7c, Func Offset: 0xec
	// Line 991, Address: 0x279d94, Func Offset: 0x104
	// Line 993, Address: 0x279db8, Func Offset: 0x128
	// Line 996, Address: 0x279ddc, Func Offset: 0x14c
	// Line 997, Address: 0x279de8, Func Offset: 0x158
	// Line 996, Address: 0x279df0, Func Offset: 0x160
	// Line 997, Address: 0x279df4, Func Offset: 0x164
	// Line 998, Address: 0x279e00, Func Offset: 0x170
	// Line 1001, Address: 0x279e08, Func Offset: 0x178
	// Line 1002, Address: 0x279e10, Func Offset: 0x180
	// Line 1007, Address: 0x279e18, Func Offset: 0x188
	// Line 1009, Address: 0x279e20, Func Offset: 0x190
	// Line 1010, Address: 0x279e30, Func Offset: 0x1a0
	// Line 1012, Address: 0x279e48, Func Offset: 0x1b8
	// Func End, Address: 0x279e50, Func Offset: 0x1c0
}

// 
// Start address: 0x279e50
void Lff_MkLightColFromPow()
{
	int ClmnNo;
	int VtNo;
	LightFogVertSPRAM* pVtW;
	// Line 1019, Address: 0x279e50, Func Offset: 0
	// Line 1022, Address: 0x279e60, Func Offset: 0x10
	// Line 1019, Address: 0x279e64, Func Offset: 0x14
	// Line 1022, Address: 0x279e74, Func Offset: 0x24
	// Line 1026, Address: 0x279e78, Func Offset: 0x28
	// Line 1028, Address: 0x279e80, Func Offset: 0x30
	// Line 1031, Address: 0x279e90, Func Offset: 0x40
	// Line 1032, Address: 0x279f08, Func Offset: 0xb8
	// Line 1033, Address: 0x279f90, Func Offset: 0x140
	// Line 1034, Address: 0x27a018, Func Offset: 0x1c8
	// Line 1035, Address: 0x27a090, Func Offset: 0x240
	// Line 1036, Address: 0x27a118, Func Offset: 0x2c8
	// Line 1037, Address: 0x27a19c, Func Offset: 0x34c
	// Line 1036, Address: 0x27a1a0, Func Offset: 0x350
	// Line 1037, Address: 0x27a1a4, Func Offset: 0x354
	// Line 1038, Address: 0x27a1b0, Func Offset: 0x360
	// Line 1039, Address: 0x27a1c0, Func Offset: 0x370
	// Func End, Address: 0x27a1e0, Func Offset: 0x390
}

// 
// Start address: 0x27a1e0
unsigned char MakePsColFromLightPow(float LtPow)
{
	float val;
	// Line 1051, Address: 0x27a1e0, Func Offset: 0
	// Line 1053, Address: 0x27a1e8, Func Offset: 0x8
	// Line 1051, Address: 0x27a1ec, Func Offset: 0xc
	// Line 1053, Address: 0x27a1f0, Func Offset: 0x10
	// Line 1051, Address: 0x27a1f8, Func Offset: 0x18
	// Line 1053, Address: 0x27a1fc, Func Offset: 0x1c
	// Line 1054, Address: 0x27a210, Func Offset: 0x30
	// Line 1055, Address: 0x27a250, Func Offset: 0x70
	// Func End, Address: 0x27a258, Func Offset: 0x78
}

// 
// Start address: 0x27a260
void Lff_Draw()
{
	LightFogFilter* pLff;
	int LffTypeNo;
	int ClmnNo;
	int VtNo;
	_anon0* pPk;
	float LtViewPos[4];
	unsigned long GsReg_Alpha;
	LightFogColumn* pClmn1;
	LightFogVertSPRAM* pClmnVtAryW0;
	LightFogVertSPRAM* pClmnVtAryW1;
	LightFogVert* pVtUp;
	LightFogVert* pVtLow;
	LightFogVertSPRAM* pVtWUp;
	LightFogVertSPRAM* pVtWLow;
	unsigned char* ColWUp;
	unsigned char* ColWLow;
	unsigned char Col[4];
	// Line 1069, Address: 0x27a260, Func Offset: 0
	// Line 1070, Address: 0x27a264, Func Offset: 0x4
	// Line 1069, Address: 0x27a268, Func Offset: 0x8
	// Line 1070, Address: 0x27a26c, Func Offset: 0xc
	// Line 1069, Address: 0x27a270, Func Offset: 0x10
	// Line 1075, Address: 0x27a294, Func Offset: 0x34
	// Line 1076, Address: 0x27a29c, Func Offset: 0x3c
	// Line 1077, Address: 0x27a2a4, Func Offset: 0x44
	// Line 1078, Address: 0x27a2ac, Func Offset: 0x4c
	// Line 1084, Address: 0x27a2b4, Func Offset: 0x54
	// Line 1112, Address: 0x27a2e4, Func Offset: 0x84
	// Line 1117, Address: 0x27a2ec, Func Offset: 0x8c
	// Line 1125, Address: 0x27a320, Func Offset: 0xc0
	// Line 1127, Address: 0x27a328, Func Offset: 0xc8
	// Line 1128, Address: 0x27a330, Func Offset: 0xd0
	// Line 1129, Address: 0x27a33c, Func Offset: 0xdc
	// Line 1128, Address: 0x27a340, Func Offset: 0xe0
	// Line 1129, Address: 0x27a344, Func Offset: 0xe4
	// Line 1132, Address: 0x27a34c, Func Offset: 0xec
	// Line 1135, Address: 0x27a354, Func Offset: 0xf4
	// Line 1136, Address: 0x27a35c, Func Offset: 0xfc
	// Line 1184, Address: 0x27a360, Func Offset: 0x100
	// Line 1213, Address: 0x27a364, Func Offset: 0x104
	// Line 1184, Address: 0x27a368, Func Offset: 0x108
	// Line 1230, Address: 0x27a36c, Func Offset: 0x10c
	// Line 1184, Address: 0x27a370, Func Offset: 0x110
	// Line 1235, Address: 0x27a37c, Func Offset: 0x11c
	// Line 1148, Address: 0x27a380, Func Offset: 0x120
	// Line 1144, Address: 0x27a388, Func Offset: 0x128
	// Line 1153, Address: 0x27a390, Func Offset: 0x130
	// Line 1159, Address: 0x27a3a0, Func Offset: 0x140
	// Line 1141, Address: 0x27a3a8, Func Offset: 0x148
	// Line 1144, Address: 0x27a3b0, Func Offset: 0x150
	// Line 1146, Address: 0x27a3b4, Func Offset: 0x154
	// Line 1147, Address: 0x27a3bc, Func Offset: 0x15c
	// Line 1148, Address: 0x27a3c0, Func Offset: 0x160
	// Line 1153, Address: 0x27a3c8, Func Offset: 0x168
	// Line 1155, Address: 0x27a3cc, Func Offset: 0x16c
	// Line 1175, Address: 0x27a3d0, Func Offset: 0x170
	// Line 1155, Address: 0x27a3d4, Func Offset: 0x174
	// Line 1175, Address: 0x27a3d8, Func Offset: 0x178
	// Line 1159, Address: 0x27a3dc, Func Offset: 0x17c
	// Line 1160, Address: 0x27a3e0, Func Offset: 0x180
	// Line 1175, Address: 0x27a3e8, Func Offset: 0x188
	// Line 1161, Address: 0x27a3ec, Func Offset: 0x18c
	// Line 1165, Address: 0x27a3f0, Func Offset: 0x190
	// Line 1164, Address: 0x27a3f4, Func Offset: 0x194
	// Line 1165, Address: 0x27a3fc, Func Offset: 0x19c
	// Line 1166, Address: 0x27a400, Func Offset: 0x1a0
	// Line 1175, Address: 0x27a404, Func Offset: 0x1a4
	// Line 1178, Address: 0x27a408, Func Offset: 0x1a8
	// Line 1180, Address: 0x27a410, Func Offset: 0x1b0
	// Line 1178, Address: 0x27a414, Func Offset: 0x1b4
	// Line 1190, Address: 0x27a418, Func Offset: 0x1b8
	// Line 1180, Address: 0x27a424, Func Offset: 0x1c4
	// Line 1184, Address: 0x27a428, Func Offset: 0x1c8
	// Line 1188, Address: 0x27a42c, Func Offset: 0x1cc
	// Line 1179, Address: 0x27a430, Func Offset: 0x1d0
	// Line 1188, Address: 0x27a434, Func Offset: 0x1d4
	// Line 1189, Address: 0x27a438, Func Offset: 0x1d8
	// Line 1190, Address: 0x27a43c, Func Offset: 0x1dc
	// Line 1197, Address: 0x27a440, Func Offset: 0x1e0
	// Line 1199, Address: 0x27a448, Func Offset: 0x1e8
	// Line 1200, Address: 0x27a44c, Func Offset: 0x1ec
	// Line 1202, Address: 0x27a450, Func Offset: 0x1f0
	// Line 1204, Address: 0x27a454, Func Offset: 0x1f4
	// Line 1206, Address: 0x27a460, Func Offset: 0x200
	// Line 1207, Address: 0x27a464, Func Offset: 0x204
	// Line 1209, Address: 0x27a468, Func Offset: 0x208
	// Line 1210, Address: 0x27a46c, Func Offset: 0x20c
	// Line 1213, Address: 0x27a470, Func Offset: 0x210
	// Line 1216, Address: 0x27a478, Func Offset: 0x218
	// Line 1218, Address: 0x27a47c, Func Offset: 0x21c
	// Line 1219, Address: 0x27a484, Func Offset: 0x224
	// Line 1220, Address: 0x27a488, Func Offset: 0x228
	// Line 1221, Address: 0x27a48c, Func Offset: 0x22c
	// Line 1227, Address: 0x27a490, Func Offset: 0x230
	// Line 1252, Address: 0x27a494, Func Offset: 0x234
	// Line 1251, Address: 0x27a498, Func Offset: 0x238
	// Line 1252, Address: 0x27a49c, Func Offset: 0x23c
	// Line 1251, Address: 0x27a4a0, Func Offset: 0x240
	// Line 1227, Address: 0x27a4ac, Func Offset: 0x24c
	// Line 1228, Address: 0x27a4b0, Func Offset: 0x250
	// Line 1229, Address: 0x27a4b8, Func Offset: 0x258
	// Line 1230, Address: 0x27a4c0, Func Offset: 0x260
	// Line 1233, Address: 0x27a4c4, Func Offset: 0x264
	// Line 1234, Address: 0x27a4d0, Func Offset: 0x270
	// Line 1235, Address: 0x27a4dc, Func Offset: 0x27c
	// Line 1236, Address: 0x27a4e0, Func Offset: 0x280
	// Line 1241, Address: 0x27a4e4, Func Offset: 0x284
	// Line 1237, Address: 0x27a4e8, Func Offset: 0x288
	// Line 1241, Address: 0x27a4ec, Func Offset: 0x28c
	// Line 1242, Address: 0x27a4f0, Func Offset: 0x290
	// Line 1243, Address: 0x27a4f8, Func Offset: 0x298
	// Line 1244, Address: 0x27a500, Func Offset: 0x2a0
	// Line 1247, Address: 0x27a504, Func Offset: 0x2a4
	// Line 1248, Address: 0x27a510, Func Offset: 0x2b0
	// Line 1249, Address: 0x27a51c, Func Offset: 0x2bc
	// Line 1250, Address: 0x27a520, Func Offset: 0x2c0
	// Line 1252, Address: 0x27a524, Func Offset: 0x2c4
	// Line 1253, Address: 0x27a52c, Func Offset: 0x2cc
	// Line 1252, Address: 0x27a530, Func Offset: 0x2d0
	// Line 1253, Address: 0x27a534, Func Offset: 0x2d4
	// Line 1254, Address: 0x27a540, Func Offset: 0x2e0
	// Line 1256, Address: 0x27a550, Func Offset: 0x2f0
	// Line 1257, Address: 0x27a558, Func Offset: 0x2f8
	// Line 1258, Address: 0x27a560, Func Offset: 0x300
	// Line 1259, Address: 0x27a574, Func Offset: 0x314
	// Func End, Address: 0x27a5a4, Func Offset: 0x344
}

// 
// Start address: 0x27a5b0
void MakeTexture_ThatHas_FrameBufPixAndAlpha_MadeFromZBuf(unsigned int MkTexBufAdr, unsigned int FbufAdr, unsigned int ZbufAdr, unsigned int AlphaZeroZBitNo, unsigned int MkAlphaBitNum)
{
	unsigned int TmpNegZbufAdr;
	int MkAlphaBitNo;
	unsigned long GsReg_Alpha;
	_anon0* pPk;
	int DrawNo;
	int NegZBitNo;
	unsigned long GsReg_Frame;
	unsigned long GsReg_Tex0;
	unsigned long GsReg_TexA;
	unsigned char rr;
	unsigned char gg;
	unsigned char bb;
	unsigned char aa;
	unsigned long Tex0Adr;
	unsigned int TexA_TA0;
	unsigned int TexA_AEM;
	unsigned short zBufVal;
	// Line 1275, Address: 0x27a5b0, Func Offset: 0
	// Line 1278, Address: 0x27a5b4, Func Offset: 0x4
	// Line 1275, Address: 0x27a5b8, Func Offset: 0x8
	// Line 1278, Address: 0x27a5bc, Func Offset: 0xc
	// Line 1275, Address: 0x27a5c0, Func Offset: 0x10
	// Line 1286, Address: 0x27a5f0, Func Offset: 0x40
	// Line 1288, Address: 0x27a608, Func Offset: 0x58
	// Line 1291, Address: 0x27a610, Func Offset: 0x60
	// Line 1292, Address: 0x27a61c, Func Offset: 0x6c
	// Line 1291, Address: 0x27a620, Func Offset: 0x70
	// Line 1302, Address: 0x27a624, Func Offset: 0x74
	// Line 1291, Address: 0x27a628, Func Offset: 0x78
	// Line 1296, Address: 0x27a62c, Func Offset: 0x7c
	// Line 1292, Address: 0x27a634, Func Offset: 0x84
	// Line 1297, Address: 0x27a638, Func Offset: 0x88
	// Line 1296, Address: 0x27a63c, Func Offset: 0x8c
	// Line 1297, Address: 0x27a640, Func Offset: 0x90
	// Line 1302, Address: 0x27a644, Func Offset: 0x94
	// Line 1298, Address: 0x27a648, Func Offset: 0x98
	// Line 1302, Address: 0x27a64c, Func Offset: 0x9c
	// Line 1306, Address: 0x27a668, Func Offset: 0xb8
	// Line 1302, Address: 0x27a66c, Func Offset: 0xbc
	// Line 1306, Address: 0x27a670, Func Offset: 0xc0
	// Line 1307, Address: 0x27a67c, Func Offset: 0xcc
	// Line 1306, Address: 0x27a680, Func Offset: 0xd0
	// Line 1310, Address: 0x27a684, Func Offset: 0xd4
	// Line 1316, Address: 0x27a690, Func Offset: 0xe0
	// Line 1310, Address: 0x27a694, Func Offset: 0xe4
	// Line 1316, Address: 0x27a6a0, Func Offset: 0xf0
	// Line 1310, Address: 0x27a6a4, Func Offset: 0xf4
	// Line 1316, Address: 0x27a6a8, Func Offset: 0xf8
	// Line 1310, Address: 0x27a6ac, Func Offset: 0xfc
	// Line 1316, Address: 0x27a6b0, Func Offset: 0x100
	// Line 1310, Address: 0x27a6bc, Func Offset: 0x10c
	// Line 1311, Address: 0x27a6d0, Func Offset: 0x120
	// Line 1310, Address: 0x27a6d4, Func Offset: 0x124
	// Line 1311, Address: 0x27a6d8, Func Offset: 0x128
	// Line 1316, Address: 0x27a6dc, Func Offset: 0x12c
	// Line 1312, Address: 0x27a6e0, Func Offset: 0x130
	// Line 1316, Address: 0x27a6e4, Func Offset: 0x134
	// Line 1320, Address: 0x27a6f8, Func Offset: 0x148
	// Line 1316, Address: 0x27a6fc, Func Offset: 0x14c
	// Line 1320, Address: 0x27a700, Func Offset: 0x150
	// Line 1321, Address: 0x27a70c, Func Offset: 0x15c
	// Line 1320, Address: 0x27a710, Func Offset: 0x160
	// Line 1325, Address: 0x27a714, Func Offset: 0x164
	// Line 1331, Address: 0x27a720, Func Offset: 0x170
	// Line 1325, Address: 0x27a724, Func Offset: 0x174
	// Line 1336, Address: 0x27a750, Func Offset: 0x1a0
	// Line 1325, Address: 0x27a754, Func Offset: 0x1a4
	// Line 1332, Address: 0x27a758, Func Offset: 0x1a8
	// Line 1325, Address: 0x27a75c, Func Offset: 0x1ac
	// Line 1336, Address: 0x27a760, Func Offset: 0x1b0
	// Line 1327, Address: 0x27a764, Func Offset: 0x1b4
	// Line 1336, Address: 0x27a768, Func Offset: 0x1b8
	// Line 1328, Address: 0x27a76c, Func Offset: 0x1bc
	// Line 1336, Address: 0x27a770, Func Offset: 0x1c0
	// Line 1331, Address: 0x27a774, Func Offset: 0x1c4
	// Line 1336, Address: 0x27a778, Func Offset: 0x1c8
	// Line 1332, Address: 0x27a77c, Func Offset: 0x1cc
	// Line 1336, Address: 0x27a780, Func Offset: 0x1d0
	// Line 1341, Address: 0x27a794, Func Offset: 0x1e4
	// Line 1336, Address: 0x27a798, Func Offset: 0x1e8
	// Line 1341, Address: 0x27a79c, Func Offset: 0x1ec
	// Line 1342, Address: 0x27a7ac, Func Offset: 0x1fc
	// Line 1341, Address: 0x27a7b0, Func Offset: 0x200
	// Line 1342, Address: 0x27a7b4, Func Offset: 0x204
	// Line 1345, Address: 0x27a7c0, Func Offset: 0x210
	// Line 1346, Address: 0x27a7d4, Func Offset: 0x224
	// Line 1345, Address: 0x27a7d8, Func Offset: 0x228
	// Line 1350, Address: 0x27a7dc, Func Offset: 0x22c
	// Line 1345, Address: 0x27a7e0, Func Offset: 0x230
	// Line 1350, Address: 0x27a7e4, Func Offset: 0x234
	// Line 1345, Address: 0x27a7e8, Func Offset: 0x238
	// Line 1350, Address: 0x27a7ec, Func Offset: 0x23c
	// Line 1345, Address: 0x27a7f8, Func Offset: 0x248
	// Line 1350, Address: 0x27a800, Func Offset: 0x250
	// Line 1345, Address: 0x27a804, Func Offset: 0x254
	// Line 1346, Address: 0x27a808, Func Offset: 0x258
	// Line 1350, Address: 0x27a80c, Func Offset: 0x25c
	// Line 1347, Address: 0x27a814, Func Offset: 0x264
	// Line 1350, Address: 0x27a818, Func Offset: 0x268
	// Line 1353, Address: 0x27a82c, Func Offset: 0x27c
	// Line 1356, Address: 0x27a888, Func Offset: 0x2d8
	// Line 1358, Address: 0x27a894, Func Offset: 0x2e4
	// Line 1360, Address: 0x27a8a0, Func Offset: 0x2f0
	// Line 1369, Address: 0x27a8f8, Func Offset: 0x348
	// Line 1382, Address: 0x27a900, Func Offset: 0x350
	// Line 1379, Address: 0x27a904, Func Offset: 0x354
	// Line 1382, Address: 0x27a90c, Func Offset: 0x35c
	// Line 1383, Address: 0x27a914, Func Offset: 0x364
	// Line 1384, Address: 0x27a918, Func Offset: 0x368
	// Line 1385, Address: 0x27a92c, Func Offset: 0x37c
	// Line 1386, Address: 0x27a930, Func Offset: 0x380
	// Line 1387, Address: 0x27a944, Func Offset: 0x394
	// Line 1388, Address: 0x27a948, Func Offset: 0x398
	// Line 1393, Address: 0x27a95c, Func Offset: 0x3ac
	// Line 1394, Address: 0x27a960, Func Offset: 0x3b0
	// Line 1396, Address: 0x27a990, Func Offset: 0x3e0
	// Line 1398, Address: 0x27a9cc, Func Offset: 0x41c
	// Line 1400, Address: 0x27a9d0, Func Offset: 0x420
	// Line 1401, Address: 0x27a9dc, Func Offset: 0x42c
	// Line 1407, Address: 0x27a9e8, Func Offset: 0x438
	// Line 1408, Address: 0x27a9f8, Func Offset: 0x448
	// Line 1410, Address: 0x27aa04, Func Offset: 0x454
	// Line 1412, Address: 0x27aa08, Func Offset: 0x458
	// Line 1411, Address: 0x27aa0c, Func Offset: 0x45c
	// Line 1413, Address: 0x27aa10, Func Offset: 0x460
	// Line 1415, Address: 0x27aa18, Func Offset: 0x468
	// Line 1416, Address: 0x27aa1c, Func Offset: 0x46c
	// Line 1417, Address: 0x27aa20, Func Offset: 0x470
	// Line 1418, Address: 0x27aa24, Func Offset: 0x474
	// Line 1419, Address: 0x27aa28, Func Offset: 0x478
	// Line 1421, Address: 0x27aa58, Func Offset: 0x4a8
	// Line 1423, Address: 0x27aa64, Func Offset: 0x4b4
	// Line 1421, Address: 0x27aa68, Func Offset: 0x4b8
	// Line 1423, Address: 0x27aa6c, Func Offset: 0x4bc
	// Line 1421, Address: 0x27aa74, Func Offset: 0x4c4
	// Line 1423, Address: 0x27aa7c, Func Offset: 0x4cc
	// Line 1421, Address: 0x27aa8c, Func Offset: 0x4dc
	// Line 1425, Address: 0x27aa98, Func Offset: 0x4e8
	// Line 1421, Address: 0x27aa9c, Func Offset: 0x4ec
	// Line 1423, Address: 0x27aaa0, Func Offset: 0x4f0
	// Line 1425, Address: 0x27aaac, Func Offset: 0x4fc
	// Line 1429, Address: 0x27aab8, Func Offset: 0x508
	// Line 1446, Address: 0x27aac0, Func Offset: 0x510
	// Line 1429, Address: 0x27aac4, Func Offset: 0x514
	// Line 1454, Address: 0x27aac8, Func Offset: 0x518
	// Line 1429, Address: 0x27aacc, Func Offset: 0x51c
	// Line 1454, Address: 0x27aad0, Func Offset: 0x520
	// Line 1429, Address: 0x27aad4, Func Offset: 0x524
	// Line 1431, Address: 0x27aad8, Func Offset: 0x528
	// Line 1436, Address: 0x27aae0, Func Offset: 0x530
	// Line 1435, Address: 0x27aae4, Func Offset: 0x534
	// Line 1441, Address: 0x27aae8, Func Offset: 0x538
	// Line 1436, Address: 0x27aaec, Func Offset: 0x53c
	// Line 1454, Address: 0x27aaf0, Func Offset: 0x540
	// Line 1437, Address: 0x27aaf4, Func Offset: 0x544
	// Line 1450, Address: 0x27aaf8, Func Offset: 0x548
	// Line 1440, Address: 0x27aafc, Func Offset: 0x54c
	// Line 1450, Address: 0x27ab00, Func Offset: 0x550
	// Line 1441, Address: 0x27ab04, Func Offset: 0x554
	// Line 1451, Address: 0x27ab08, Func Offset: 0x558
	// Line 1445, Address: 0x27ab0c, Func Offset: 0x55c
	// Line 1454, Address: 0x27ab10, Func Offset: 0x560
	// Line 1446, Address: 0x27ab14, Func Offset: 0x564
	// Line 1454, Address: 0x27ab18, Func Offset: 0x568
	// Line 1447, Address: 0x27ab1c, Func Offset: 0x56c
	// Line 1454, Address: 0x27ab20, Func Offset: 0x570
	// Line 1450, Address: 0x27ab24, Func Offset: 0x574
	// Line 1454, Address: 0x27ab28, Func Offset: 0x578
	// Line 1455, Address: 0x27ab38, Func Offset: 0x588
	// Line 1456, Address: 0x27ab48, Func Offset: 0x598
	// Line 1457, Address: 0x27ab68, Func Offset: 0x5b8
	// Line 1458, Address: 0x27ab70, Func Offset: 0x5c0
	// Line 1460, Address: 0x27ab88, Func Offset: 0x5d8
	// Line 1464, Address: 0x27ab94, Func Offset: 0x5e4
	// Line 1465, Address: 0x27aba4, Func Offset: 0x5f4
	// Line 1464, Address: 0x27aba8, Func Offset: 0x5f8
	// Line 1469, Address: 0x27abac, Func Offset: 0x5fc
	// Line 1474, Address: 0x27abb4, Func Offset: 0x604
	// Line 1469, Address: 0x27abb8, Func Offset: 0x608
	// Line 1474, Address: 0x27abc0, Func Offset: 0x610
	// Line 1469, Address: 0x27abc4, Func Offset: 0x614
	// Line 1470, Address: 0x27abc8, Func Offset: 0x618
	// Line 1487, Address: 0x27abcc, Func Offset: 0x61c
	// Line 1474, Address: 0x27abdc, Func Offset: 0x62c
	// Line 1469, Address: 0x27abe4, Func Offset: 0x634
	// Line 1474, Address: 0x27abe8, Func Offset: 0x638
	// Line 1469, Address: 0x27abec, Func Offset: 0x63c
	// Line 1484, Address: 0x27ac04, Func Offset: 0x654
	// Line 1470, Address: 0x27ac0c, Func Offset: 0x65c
	// Line 1474, Address: 0x27ac10, Func Offset: 0x660
	// Line 1471, Address: 0x27ac1c, Func Offset: 0x66c
	// Line 1474, Address: 0x27ac20, Func Offset: 0x670
	// Line 1475, Address: 0x27ac24, Func Offset: 0x674
	// Line 1474, Address: 0x27ac28, Func Offset: 0x678
	// Line 1479, Address: 0x27ac2c, Func Offset: 0x67c
	// Line 1475, Address: 0x27ac30, Func Offset: 0x680
	// Line 1479, Address: 0x27ac34, Func Offset: 0x684
	// Line 1480, Address: 0x27ac3c, Func Offset: 0x68c
	// Line 1484, Address: 0x27ac40, Func Offset: 0x690
	// Line 1480, Address: 0x27ac44, Func Offset: 0x694
	// Line 1484, Address: 0x27ac48, Func Offset: 0x698
	// Line 1481, Address: 0x27ac4c, Func Offset: 0x69c
	// Line 1484, Address: 0x27ac50, Func Offset: 0x6a0
	// Line 1487, Address: 0x27ac54, Func Offset: 0x6a4
	// Line 1484, Address: 0x27ac58, Func Offset: 0x6a8
	// Line 1487, Address: 0x27ac5c, Func Offset: 0x6ac
	// Line 1489, Address: 0x27ac70, Func Offset: 0x6c0
	// Line 1490, Address: 0x27ac78, Func Offset: 0x6c8
	// Line 1493, Address: 0x27ac80, Func Offset: 0x6d0
	// Line 1490, Address: 0x27ac84, Func Offset: 0x6d4
	// Line 1493, Address: 0x27ac88, Func Offset: 0x6d8
	// Line 1494, Address: 0x27ac94, Func Offset: 0x6e4
	// Line 1493, Address: 0x27ac98, Func Offset: 0x6e8
	// Line 1498, Address: 0x27ac9c, Func Offset: 0x6ec
	// Line 1499, Address: 0x27aca8, Func Offset: 0x6f8
	// Line 1498, Address: 0x27acac, Func Offset: 0x6fc
	// Line 1499, Address: 0x27acc4, Func Offset: 0x714
	// Line 1503, Address: 0x27acc8, Func Offset: 0x718
	// Line 1509, Address: 0x27ad0c, Func Offset: 0x75c
	// Line 1510, Address: 0x27ad18, Func Offset: 0x768
	// Line 1509, Address: 0x27ad1c, Func Offset: 0x76c
	// Line 1519, Address: 0x27ad30, Func Offset: 0x780
	// Line 1509, Address: 0x27ad34, Func Offset: 0x784
	// Line 1519, Address: 0x27ad38, Func Offset: 0x788
	// Line 1509, Address: 0x27ad3c, Func Offset: 0x78c
	// Line 1514, Address: 0x27ad40, Func Offset: 0x790
	// Line 1509, Address: 0x27ad44, Func Offset: 0x794
	// Line 1514, Address: 0x27ad48, Func Offset: 0x798
	// Line 1510, Address: 0x27ad4c, Func Offset: 0x79c
	// Line 1519, Address: 0x27ad50, Func Offset: 0x7a0
	// Line 1511, Address: 0x27ad54, Func Offset: 0x7a4
	// Line 1515, Address: 0x27ad58, Func Offset: 0x7a8
	// Line 1514, Address: 0x27ad5c, Func Offset: 0x7ac
	// Line 1519, Address: 0x27ad60, Func Offset: 0x7b0
	// Line 1515, Address: 0x27ad64, Func Offset: 0x7b4
	// Line 1519, Address: 0x27ad68, Func Offset: 0x7b8
	// Line 1524, Address: 0x27ad84, Func Offset: 0x7d4
	// Line 1519, Address: 0x27ad88, Func Offset: 0x7d8
	// Line 1524, Address: 0x27ad8c, Func Offset: 0x7dc
	// Line 1525, Address: 0x27ad98, Func Offset: 0x7e8
	// Line 1524, Address: 0x27ad9c, Func Offset: 0x7ec
	// Line 1528, Address: 0x27ada0, Func Offset: 0x7f0
	// Line 1529, Address: 0x27adac, Func Offset: 0x7fc
	// Line 1532, Address: 0x27adb4, Func Offset: 0x804
	// Line 1536, Address: 0x27adc0, Func Offset: 0x810
	// Line 1533, Address: 0x27adc4, Func Offset: 0x814
	// Line 1536, Address: 0x27adc8, Func Offset: 0x818
	// Line 1538, Address: 0x27add0, Func Offset: 0x820
	// Func End, Address: 0x27ae00, Func Offset: 0x850
}

// 
// Start address: 0x27ae00
_anon0* make_framebuf_alpha_constant_back_of_a_pos(_anon0* pPk, float* LtViewPos)
{
	int Col[4];
	unsigned int ZBuf;
	unsigned int Alpha;
	unsigned int SuccessFlag;
	// Line 1550, Address: 0x27ae00, Func Offset: 0
	// Line 1551, Address: 0x27ae0c, Func Offset: 0xc
	// Line 1550, Address: 0x27ae10, Func Offset: 0x10
	// Line 1551, Address: 0x27ae14, Func Offset: 0x14
	// Line 1556, Address: 0x27ae3c, Func Offset: 0x3c
	// Line 1558, Address: 0x27ae48, Func Offset: 0x48
	// Line 1559, Address: 0x27ae50, Func Offset: 0x50
	// Line 1561, Address: 0x27ae58, Func Offset: 0x58
	// Line 1559, Address: 0x27ae5c, Func Offset: 0x5c
	// Line 1569, Address: 0x27ae60, Func Offset: 0x60
	// Line 1559, Address: 0x27ae64, Func Offset: 0x64
	// Line 1565, Address: 0x27ae68, Func Offset: 0x68
	// Line 1561, Address: 0x27ae70, Func Offset: 0x70
	// Line 1566, Address: 0x27ae74, Func Offset: 0x74
	// Line 1565, Address: 0x27ae78, Func Offset: 0x78
	// Line 1566, Address: 0x27ae7c, Func Offset: 0x7c
	// Line 1569, Address: 0x27ae80, Func Offset: 0x80
	// Line 1567, Address: 0x27ae88, Func Offset: 0x88
	// Line 1569, Address: 0x27ae8c, Func Offset: 0x8c
	// Line 1575, Address: 0x27aea8, Func Offset: 0xa8
	// Line 1576, Address: 0x27aeac, Func Offset: 0xac
	// Func End, Address: 0x27aebc, Func Offset: 0xbc
}

// 
// Start address: 0x27aec0
int LightFog_WorldPosToAlpha(unsigned int* pAlpha, unsigned int* piZBuf, float* ViewPos)
{
	float ViewScrMat[4][4];
	float DispPos[4];
	// Line 1589, Address: 0x27aec0, Func Offset: 0
	// Line 1594, Address: 0x27aee0, Func Offset: 0x20
	// Line 1595, Address: 0x27aee8, Func Offset: 0x28
	// Line 1596, Address: 0x27af18, Func Offset: 0x58
	// Line 1597, Address: 0x27af20, Func Offset: 0x60
	// Line 1596, Address: 0x27af24, Func Offset: 0x64
	// Line 1597, Address: 0x27af28, Func Offset: 0x68
	// Line 1596, Address: 0x27af30, Func Offset: 0x70
	// Line 1597, Address: 0x27af38, Func Offset: 0x78
	// Line 1598, Address: 0x27af48, Func Offset: 0x88
	// Line 1599, Address: 0x27af4c, Func Offset: 0x8c
	// Line 1601, Address: 0x27af50, Func Offset: 0x90
	// Line 1604, Address: 0x27afa8, Func Offset: 0xe8
	// Line 1605, Address: 0x27afb8, Func Offset: 0xf8
	// Line 1607, Address: 0x27afbc, Func Offset: 0xfc
	// Line 1605, Address: 0x27afc0, Func Offset: 0x100
	// Line 1607, Address: 0x27afc4, Func Offset: 0x104
	// Line 1608, Address: 0x27afcc, Func Offset: 0x10c
	// Line 1609, Address: 0x27afd0, Func Offset: 0x110
	// Line 1612, Address: 0x27afdc, Func Offset: 0x11c
	// Line 1609, Address: 0x27afe0, Func Offset: 0x120
	// Line 1610, Address: 0x27afe4, Func Offset: 0x124
	// Line 1613, Address: 0x27aff0, Func Offset: 0x130
	// Func End, Address: 0x27b008, Func Offset: 0x148
}

// 
// Start address: 0x27b010
_anon0* GiveFrameBufContrast(_anon0* pPk, unsigned char SleshR, unsigned char SleshG, unsigned char SleshB, unsigned char ContrastAlpha)
{
	// Line 1628, Address: 0x27b010, Func Offset: 0
	// Line 1638, Address: 0x27b014, Func Offset: 0x4
	// Line 1628, Address: 0x27b018, Func Offset: 0x8
	// Line 1638, Address: 0x27b01c, Func Offset: 0xc
	// Line 1628, Address: 0x27b020, Func Offset: 0x10
	// Line 1638, Address: 0x27b024, Func Offset: 0x14
	// Line 1628, Address: 0x27b028, Func Offset: 0x18
	// Line 1638, Address: 0x27b02c, Func Offset: 0x1c
	// Line 1628, Address: 0x27b030, Func Offset: 0x20
	// Line 1630, Address: 0x27b034, Func Offset: 0x24
	// Line 1634, Address: 0x27b038, Func Offset: 0x28
	// Line 1630, Address: 0x27b03c, Func Offset: 0x2c
	// Line 1634, Address: 0x27b040, Func Offset: 0x30
	// Line 1638, Address: 0x27b044, Func Offset: 0x34
	// Line 1634, Address: 0x27b048, Func Offset: 0x38
	// Line 1638, Address: 0x27b04c, Func Offset: 0x3c
	// Line 1635, Address: 0x27b050, Func Offset: 0x40
	// Line 1638, Address: 0x27b054, Func Offset: 0x44
	// Line 1635, Address: 0x27b058, Func Offset: 0x48
	// Line 1638, Address: 0x27b05c, Func Offset: 0x4c
	// Func End, Address: 0x27b064, Func Offset: 0x54
}

// 
// Start address: 0x27b070
_anon0* ClearAllFrameBuffer(_anon0* pPk, unsigned char r, unsigned char g, unsigned char b, unsigned char a, unsigned int ZbufVal, unsigned long alpha_reg, unsigned int GifTagEOP)
{
	int XNo;
	// Line 1664, Address: 0x27b070, Func Offset: 0
	// Line 1683, Address: 0x27b074, Func Offset: 0x4
	// Line 1664, Address: 0x27b078, Func Offset: 0x8
	// Line 1683, Address: 0x27b07c, Func Offset: 0xc
	// Line 1664, Address: 0x27b080, Func Offset: 0x10
	// Line 1683, Address: 0x27b094, Func Offset: 0x24
	// Line 1664, Address: 0x27b098, Func Offset: 0x28
	// Line 1667, Address: 0x27b09c, Func Offset: 0x2c
	// Line 1674, Address: 0x27b0a0, Func Offset: 0x30
	// Line 1667, Address: 0x27b0a4, Func Offset: 0x34
	// Line 1691, Address: 0x27b0a8, Func Offset: 0x38
	// Line 1667, Address: 0x27b0ac, Func Offset: 0x3c
	// Line 1669, Address: 0x27b0bc, Func Offset: 0x4c
	// Line 1673, Address: 0x27b0c4, Func Offset: 0x54
	// Line 1672, Address: 0x27b0c8, Func Offset: 0x58
	// Line 1673, Address: 0x27b0cc, Func Offset: 0x5c
	// Line 1678, Address: 0x27b0d0, Func Offset: 0x60
	// Line 1683, Address: 0x27b0d4, Func Offset: 0x64
	// Line 1676, Address: 0x27b0d8, Func Offset: 0x68
	// Line 1683, Address: 0x27b0dc, Func Offset: 0x6c
	// Line 1676, Address: 0x27b0e0, Func Offset: 0x70
	// Line 1683, Address: 0x27b0e4, Func Offset: 0x74
	// Line 1676, Address: 0x27b0e8, Func Offset: 0x78
	// Line 1683, Address: 0x27b0ec, Func Offset: 0x7c
	// Line 1676, Address: 0x27b0f0, Func Offset: 0x80
	// Line 1683, Address: 0x27b0f4, Func Offset: 0x84
	// Line 1677, Address: 0x27b0f8, Func Offset: 0x88
	// Line 1683, Address: 0x27b0fc, Func Offset: 0x8c
	// Line 1678, Address: 0x27b100, Func Offset: 0x90
	// Line 1687, Address: 0x27b104, Func Offset: 0x94
	// Line 1683, Address: 0x27b108, Func Offset: 0x98
	// Line 1687, Address: 0x27b10c, Func Offset: 0x9c
	// Line 1688, Address: 0x27b110, Func Offset: 0xa0
	// Line 1691, Address: 0x27b114, Func Offset: 0xa4
	// Line 1694, Address: 0x27b118, Func Offset: 0xa8
	// Line 1695, Address: 0x27b138, Func Offset: 0xc8
	// Line 1696, Address: 0x27b158, Func Offset: 0xe8
	// Line 1701, Address: 0x27b15c, Func Offset: 0xec
	// Line 1702, Address: 0x27b184, Func Offset: 0x114
	// Line 1706, Address: 0x27b190, Func Offset: 0x120
	// Line 1702, Address: 0x27b194, Func Offset: 0x124
	// Line 1705, Address: 0x27b198, Func Offset: 0x128
	// Line 1702, Address: 0x27b19c, Func Offset: 0x12c
	// Line 1706, Address: 0x27b1a4, Func Offset: 0x134
	// Line 1702, Address: 0x27b1a8, Func Offset: 0x138
	// Line 1703, Address: 0x27b1ac, Func Offset: 0x13c
	// Line 1704, Address: 0x27b1b0, Func Offset: 0x140
	// Line 1706, Address: 0x27b1b4, Func Offset: 0x144
	// Line 1708, Address: 0x27b1bc, Func Offset: 0x14c
	// Line 1709, Address: 0x27b1c0, Func Offset: 0x150
	// Func End, Address: 0x27b1dc, Func Offset: 0x16c
}

// 
// Start address: 0x27b1e0
_anon0* FillAllFrameBufferWithSameSizeSplite(_anon0* pPk, unsigned char r, unsigned char g, unsigned char b, unsigned char a, unsigned int ZbufVal, unsigned long alpha_reg, unsigned int GifTagEOP)
{
	int XNo;
	// Line 1728, Address: 0x27b1e0, Func Offset: 0
	// Line 1750, Address: 0x27b1e4, Func Offset: 0x4
	// Line 1728, Address: 0x27b1e8, Func Offset: 0x8
	// Line 1750, Address: 0x27b1ec, Func Offset: 0xc
	// Line 1728, Address: 0x27b1f0, Func Offset: 0x10
	// Line 1750, Address: 0x27b204, Func Offset: 0x24
	// Line 1728, Address: 0x27b208, Func Offset: 0x28
	// Line 1731, Address: 0x27b20c, Func Offset: 0x2c
	// Line 1728, Address: 0x27b210, Func Offset: 0x30
	// Line 1731, Address: 0x27b214, Func Offset: 0x34
	// Line 1738, Address: 0x27b218, Func Offset: 0x38
	// Line 1731, Address: 0x27b21c, Func Offset: 0x3c
	// Line 1758, Address: 0x27b220, Func Offset: 0x40
	// Line 1731, Address: 0x27b224, Func Offset: 0x44
	// Line 1733, Address: 0x27b230, Func Offset: 0x50
	// Line 1737, Address: 0x27b238, Func Offset: 0x58
	// Line 1736, Address: 0x27b23c, Func Offset: 0x5c
	// Line 1737, Address: 0x27b240, Func Offset: 0x60
	// Line 1744, Address: 0x27b244, Func Offset: 0x64
	// Line 1740, Address: 0x27b248, Func Offset: 0x68
	// Line 1750, Address: 0x27b24c, Func Offset: 0x6c
	// Line 1741, Address: 0x27b250, Func Offset: 0x70
	// Line 1750, Address: 0x27b254, Func Offset: 0x74
	// Line 1742, Address: 0x27b258, Func Offset: 0x78
	// Line 1750, Address: 0x27b25c, Func Offset: 0x7c
	// Line 1743, Address: 0x27b260, Func Offset: 0x80
	// Line 1750, Address: 0x27b264, Func Offset: 0x84
	// Line 1745, Address: 0x27b26c, Func Offset: 0x8c
	// Line 1744, Address: 0x27b270, Func Offset: 0x90
	// Line 1750, Address: 0x27b274, Func Offset: 0x94
	// Line 1745, Address: 0x27b278, Func Offset: 0x98
	// Line 1750, Address: 0x27b27c, Func Offset: 0x9c
	// Line 1754, Address: 0x27b280, Func Offset: 0xa0
	// Line 1755, Address: 0x27b288, Func Offset: 0xa8
	// Line 1758, Address: 0x27b28c, Func Offset: 0xac
	// Line 1761, Address: 0x27b290, Func Offset: 0xb0
	// Line 1765, Address: 0x27b298, Func Offset: 0xb8
	// Line 1766, Address: 0x27b2b8, Func Offset: 0xd8
	// Line 1769, Address: 0x27b2d0, Func Offset: 0xf0
	// Line 1766, Address: 0x27b2d4, Func Offset: 0xf4
	// Line 1772, Address: 0x27b2e0, Func Offset: 0x100
	// Line 1767, Address: 0x27b2e4, Func Offset: 0x104
	// Line 1768, Address: 0x27b2e8, Func Offset: 0x108
	// Line 1769, Address: 0x27b2ec, Func Offset: 0x10c
	// Line 1773, Address: 0x27b2f0, Func Offset: 0x110
	// Line 1776, Address: 0x27b2fc, Func Offset: 0x11c
	// Line 1777, Address: 0x27b31c, Func Offset: 0x13c
	// Line 1781, Address: 0x27b328, Func Offset: 0x148
	// Line 1777, Address: 0x27b32c, Func Offset: 0x14c
	// Line 1780, Address: 0x27b330, Func Offset: 0x150
	// Line 1777, Address: 0x27b334, Func Offset: 0x154
	// Line 1781, Address: 0x27b33c, Func Offset: 0x15c
	// Line 1777, Address: 0x27b340, Func Offset: 0x160
	// Line 1778, Address: 0x27b344, Func Offset: 0x164
	// Line 1779, Address: 0x27b348, Func Offset: 0x168
	// Line 1781, Address: 0x27b34c, Func Offset: 0x16c
	// Line 1783, Address: 0x27b354, Func Offset: 0x174
	// Line 1784, Address: 0x27b358, Func Offset: 0x178
	// Func End, Address: 0x27b378, Func Offset: 0x198
}

