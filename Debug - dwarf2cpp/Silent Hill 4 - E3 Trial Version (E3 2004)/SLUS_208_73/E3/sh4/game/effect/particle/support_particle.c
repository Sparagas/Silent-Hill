typedef struct PtclOrgData;
typedef struct sfObj;
typedef struct AirFlowArea;
typedef union _anon0;
typedef struct PtclInfo;
typedef struct AirData;
typedef struct AirAttractArea;
typedef union _anon1;

typedef int(*type_3)(void*, int, PtclOrgData*, void*);
typedef void(*type_4)(void*, int, PtclOrgData*, void*);
typedef void(*type_10)(sfObj*);
typedef void(*type_14)(void*, int, PtclOrgData*, void*);
typedef void(*type_19)(sfObj*);
typedef void(*type_20)(sfObj*);
typedef void(*type_22)(sfObj*);
typedef void(*type_23)(void*, PtclOrgData*, void*);
typedef int(*type_24)(void*, int, PtclOrgData*, void*);
typedef void(*type_25)(void*, int, PtclOrgData*, void*);
typedef void(*type_26)(void*, int, PtclOrgData*, void*);
typedef void(*type_33)(void*, PtclOrgData*, void*);

typedef int type_0[4];
typedef float type_1[2];
typedef unsigned int type_2[4];
typedef void* type_5[4];
typedef _anon0 type_6[256];
typedef short type_7[8];
typedef float type_8[3];
typedef unsigned short type_9[8];
typedef char type_11[16];
typedef float type_12[3];
typedef unsigned char type_13[16];
typedef float type_15[4];
typedef float type_16[1];
typedef int type_17[1];
typedef long type_18[1];
typedef float type_21[4];
typedef short type_27[2];
typedef unsigned short type_28[2];
typedef char type_29[4];
typedef unsigned char type_30[4];
typedef float type_31[1];
typedef int type_32[1];
typedef long type_34[2];
typedef float type_35[3];
typedef unsigned long type_36[2];

struct PtclOrgData
{
	float GenPos[4];
	float GenPlaneVec1[4];
	float GenPlaneVec2[4];
	float GenDirVec[4];
	float GenPtclWidth;
	int GenPtclNum;
	float GenIntervalTime;
	float GenWaitSubTimer;
	float SpreadAng;
	float MaxGenSpd;
	float MinGenSpd;
	int TexFileNo;
	int TexNo;
	int ForDemoFlag;
	int DrawOffFlag;
	float IntervalSubTimer;
	int AlreadyGenPtclNum;
	int EndPtclNum;
	unsigned long AlivePtclFlags;
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

struct AirFlowArea
{
	float Pos[3];
	float EffRange;
	float AccelVec[3];
	float PalsAng;
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

struct PtclInfo
{
	PtclOrgData OrgDt;
	void* pCmnDt;
	void* PtclAry;
	int SizeOfPtcl;
	int AllocPtclNum;
	void(*OnePtclGenerateFunc)(void*, PtclOrgData*, void*);
	int(*KillAllPtclChkFunc)(void*, int, PtclOrgData*, void*);
	void(*CalcPtclFunc)(void*, int, PtclOrgData*, void*);
	void(*DrawPtclFunc)(void*, int, PtclOrgData*, void*);
};

struct AirData
{
	AirAttractArea* AttractAry;
	int AttractNum;
	AirFlowArea* FlowAry;
	int FlowNum;
};

struct AirAttractArea
{
	float Pos[3];
	float EffRange;
	float AttVal;
	float PalsAng;
	float pad[2];
};

union _anon1
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

void(*draw_regist_func)(sfObj*);
void(*calc_regist_func)(sfObj*);
float sg_vector_zero[4];

PtclOrgData* SupportParticle_OrgData(sfObj* pObj);
void* SupportParticle_CmnData(sfObj* pObj);
float DeflectRandom(float DeflectVal, float DeflectRate);
void SupportParticle_OneParticleEnd(PtclOrgData* pOrgDt, int PtclNo);
int SupportParticle_OneParticleAliveFlag(PtclOrgData* pOrgDt, int PtclNo);
sfObj* SupportParticle_sfObjMake(PtclOrgData* pInputOrgDt, int SizeOfCmnDt, void* pCmnDt, int SizeOfPtcl, void(*OnePtclGenerateFunc)(void*, PtclOrgData*, void*), int(*KillAllPtclChkFunc)(void*, int, PtclOrgData*, void*), void(*CalcPtclFunc)(void*, int, PtclOrgData*, void*), void(*DrawPtclFunc)(void*, int, PtclOrgData*, void*));
void calc_regist_func(sfObj* pObj);
void draw_regist_func(sfObj* pObj);
void SupportParticle_MkGeneratePos(float* Pos, PtclOrgData* pOrgDt, float Vec1Rate, float Vec2Rate);
void SupportParticle_MkGeneratePos_Circuler(float* Pos, PtclOrgData* pOrgDt, float Angle, float RadiusRate);
void SupportParticle_MkGenerateSpd(float* SpdVec, PtclOrgData* pOrgDt);
_anon1* SupportParticle_PreSetGsReg(_anon1* pPk, unsigned long Tex0, unsigned long Alpha);
void SupportParticle_MkAirAccelVector(float* AccVec, float* ChkPos, AirData* pData, float* DataOfsVec, float AffectRate);

// 
// Start address: 0x2e1310
PtclOrgData* SupportParticle_OrgData(sfObj* pObj)
{
	// Line 72, Address: 0x2e1310, Func Offset: 0
	// Func End, Address: 0x2e1318, Func Offset: 0x8
}

// 
// Start address: 0x2e1320
void* SupportParticle_CmnData(sfObj* pObj)
{
	// Line 79, Address: 0x2e1320, Func Offset: 0
	// Line 80, Address: 0x2e1324, Func Offset: 0x4
	// Func End, Address: 0x2e132c, Func Offset: 0xc
}

// 
// Start address: 0x2e1330
float DeflectRandom(float DeflectVal, float DeflectRate)
{
	float RandVal;
	float Val;
	// Line 95, Address: 0x2e1330, Func Offset: 0
	// Line 96, Address: 0x2e1344, Func Offset: 0x14
	// Line 99, Address: 0x2e134c, Func Offset: 0x1c
	// Line 101, Address: 0x2e1358, Func Offset: 0x28
	// Line 103, Address: 0x2e136c, Func Offset: 0x3c
	// Line 104, Address: 0x2e137c, Func Offset: 0x4c
	// Line 105, Address: 0x2e1384, Func Offset: 0x54
	// Line 107, Address: 0x2e1390, Func Offset: 0x60
	// Line 109, Address: 0x2e1398, Func Offset: 0x68
	// Line 111, Address: 0x2e13ac, Func Offset: 0x7c
	// Line 112, Address: 0x2e13b8, Func Offset: 0x88
	// Line 113, Address: 0x2e13c0, Func Offset: 0x90
	// Line 117, Address: 0x2e13d0, Func Offset: 0xa0
	// Line 118, Address: 0x2e13d8, Func Offset: 0xa8
	// Line 117, Address: 0x2e13dc, Func Offset: 0xac
	// Line 118, Address: 0x2e13e0, Func Offset: 0xb0
	// Line 117, Address: 0x2e13e4, Func Offset: 0xb4
	// Line 118, Address: 0x2e13ec, Func Offset: 0xbc
	// Line 117, Address: 0x2e13f0, Func Offset: 0xc0
	// Line 118, Address: 0x2e13f4, Func Offset: 0xc4
	// Func End, Address: 0x2e13fc, Func Offset: 0xcc
}

// 
// Start address: 0x2e1400
void SupportParticle_OneParticleEnd(PtclOrgData* pOrgDt, int PtclNo)
{
	// Line 134, Address: 0x2e1400, Func Offset: 0
	// Line 135, Address: 0x2e1418, Func Offset: 0x18
	// Line 136, Address: 0x2e1420, Func Offset: 0x20
	// Func End, Address: 0x2e1428, Func Offset: 0x28
}

// 
// Start address: 0x2e1430
int SupportParticle_OneParticleAliveFlag(PtclOrgData* pOrgDt, int PtclNo)
{
	// Line 148, Address: 0x2e1430, Func Offset: 0
	// Line 150, Address: 0x2e1440, Func Offset: 0x10
	// Func End, Address: 0x2e1448, Func Offset: 0x18
}

// 
// Start address: 0x2e1450
sfObj* SupportParticle_sfObjMake(PtclOrgData* pInputOrgDt, int SizeOfCmnDt, void* pCmnDt, int SizeOfPtcl, void(*OnePtclGenerateFunc)(void*, PtclOrgData*, void*), int(*KillAllPtclChkFunc)(void*, int, PtclOrgData*, void*), void(*CalcPtclFunc)(void*, int, PtclOrgData*, void*), void(*DrawPtclFunc)(void*, int, PtclOrgData*, void*))
{
	sfObj* pObj;
	PtclInfo* pInfo;
	// Line 171, Address: 0x2e1450, Func Offset: 0
	// Line 175, Address: 0x2e1498, Func Offset: 0x48
	// Line 176, Address: 0x2e14a4, Func Offset: 0x54
	// Line 178, Address: 0x2e14ac, Func Offset: 0x5c
	// Line 179, Address: 0x2e14b4, Func Offset: 0x64
	// Line 181, Address: 0x2e14b8, Func Offset: 0x68
	// Line 182, Address: 0x2e14c8, Func Offset: 0x78
	// Line 183, Address: 0x2e14d4, Func Offset: 0x84
	// Line 184, Address: 0x2e14e4, Func Offset: 0x94
	// Line 185, Address: 0x2e14f0, Func Offset: 0xa0
	// Line 189, Address: 0x2e14f8, Func Offset: 0xa8
	// Line 194, Address: 0x2e1508, Func Offset: 0xb8
	// Line 196, Address: 0x2e1510, Func Offset: 0xc0
	// Line 197, Address: 0x2e1518, Func Offset: 0xc8
	// Line 199, Address: 0x2e1528, Func Offset: 0xd8
	// Line 201, Address: 0x2e1538, Func Offset: 0xe8
	// Line 202, Address: 0x2e153c, Func Offset: 0xec
	// Line 208, Address: 0x2e1540, Func Offset: 0xf0
	// Line 203, Address: 0x2e1544, Func Offset: 0xf4
	// Line 204, Address: 0x2e1548, Func Offset: 0xf8
	// Line 205, Address: 0x2e154c, Func Offset: 0xfc
	// Line 208, Address: 0x2e1554, Func Offset: 0x104
	// Line 210, Address: 0x2e1568, Func Offset: 0x118
	// Line 211, Address: 0x2e1578, Func Offset: 0x128
	// Line 214, Address: 0x2e1584, Func Offset: 0x134
	// Line 215, Address: 0x2e15a0, Func Offset: 0x150
	// Line 216, Address: 0x2e15ac, Func Offset: 0x15c
	// Line 217, Address: 0x2e15b4, Func Offset: 0x164
	// Line 219, Address: 0x2e15b8, Func Offset: 0x168
	// Line 220, Address: 0x2e15c8, Func Offset: 0x178
	// Line 229, Address: 0x2e15cc, Func Offset: 0x17c
	// Line 220, Address: 0x2e15d0, Func Offset: 0x180
	// Line 223, Address: 0x2e15d4, Func Offset: 0x184
	// Line 224, Address: 0x2e15d8, Func Offset: 0x188
	// Line 225, Address: 0x2e15dc, Func Offset: 0x18c
	// Line 226, Address: 0x2e15e0, Func Offset: 0x190
	// Line 227, Address: 0x2e15e4, Func Offset: 0x194
	// Line 230, Address: 0x2e15e8, Func Offset: 0x198
	// Func End, Address: 0x2e1618, Func Offset: 0x1c8
}

// 
// Start address: 0x2e1620
void calc_regist_func(sfObj* pObj)
{
	PtclInfo* pInfo;
	PtclOrgData* pOrgDt;
	int PtclNo;
	unsigned long ChkBit;
	unsigned long AliveFlags;
	// Line 236, Address: 0x2e1620, Func Offset: 0
	// Line 243, Address: 0x2e1628, Func Offset: 0x8
	// Line 236, Address: 0x2e162c, Func Offset: 0xc
	// Line 237, Address: 0x2e1640, Func Offset: 0x20
	// Line 243, Address: 0x2e1644, Func Offset: 0x24
	// Line 245, Address: 0x2e1654, Func Offset: 0x34
	// Line 247, Address: 0x2e1660, Func Offset: 0x40
	// Line 245, Address: 0x2e1668, Func Offset: 0x48
	// Line 247, Address: 0x2e166c, Func Offset: 0x4c
	// Line 248, Address: 0x2e1678, Func Offset: 0x58
	// Line 249, Address: 0x2e167c, Func Offset: 0x5c
	// Line 250, Address: 0x2e1680, Func Offset: 0x60
	// Line 251, Address: 0x2e1684, Func Offset: 0x64
	// Line 253, Address: 0x2e168c, Func Offset: 0x6c
	// Line 254, Address: 0x2e1690, Func Offset: 0x70
	// Line 259, Address: 0x2e1694, Func Offset: 0x74
	// Line 260, Address: 0x2e16a4, Func Offset: 0x84
	// Line 263, Address: 0x2e16ac, Func Offset: 0x8c
	// Line 264, Address: 0x2e16b0, Func Offset: 0x90
	// Line 270, Address: 0x2e16e8, Func Offset: 0xc8
	// Line 269, Address: 0x2e16ec, Func Offset: 0xcc
	// Line 270, Address: 0x2e16f0, Func Offset: 0xd0
	// Line 274, Address: 0x2e1700, Func Offset: 0xe0
	// Line 278, Address: 0x2e170c, Func Offset: 0xec
	// Line 283, Address: 0x2e172c, Func Offset: 0x10c
	// Line 285, Address: 0x2e1730, Func Offset: 0x110
	// Line 283, Address: 0x2e1734, Func Offset: 0x114
	// Line 284, Address: 0x2e173c, Func Offset: 0x11c
	// Line 285, Address: 0x2e1748, Func Offset: 0x128
	// Line 290, Address: 0x2e1758, Func Offset: 0x138
	// Line 291, Address: 0x2e1770, Func Offset: 0x150
	// Line 296, Address: 0x2e1798, Func Offset: 0x178
	// Line 298, Address: 0x2e17b0, Func Offset: 0x190
	// Line 302, Address: 0x2e17c8, Func Offset: 0x1a8
	// Line 305, Address: 0x2e17f0, Func Offset: 0x1d0
	// Line 306, Address: 0x2e17f8, Func Offset: 0x1d8
	// Line 308, Address: 0x2e1804, Func Offset: 0x1e4
	// Line 311, Address: 0x2e1820, Func Offset: 0x200
	// Line 312, Address: 0x2e1828, Func Offset: 0x208
	// Line 314, Address: 0x2e1830, Func Offset: 0x210
	// Line 315, Address: 0x2e183c, Func Offset: 0x21c
	// Line 314, Address: 0x2e1844, Func Offset: 0x224
	// Line 315, Address: 0x2e1848, Func Offset: 0x228
	// Line 316, Address: 0x2e1854, Func Offset: 0x234
	// Line 318, Address: 0x2e1858, Func Offset: 0x238
	// Line 320, Address: 0x2e1870, Func Offset: 0x250
	// Func End, Address: 0x2e1890, Func Offset: 0x270
}

// 
// Start address: 0x2e1890
void draw_regist_func(sfObj* pObj)
{
	PtclInfo* pInfo;
	// Line 326, Address: 0x2e1890, Func Offset: 0
	// Line 327, Address: 0x2e1898, Func Offset: 0x8
	// Line 329, Address: 0x2e189c, Func Offset: 0xc
	// Line 332, Address: 0x2e18a8, Func Offset: 0x18
	// Line 333, Address: 0x2e18bc, Func Offset: 0x2c
	// Func End, Address: 0x2e18cc, Func Offset: 0x3c
}

// 
// Start address: 0x2e18d0
void SupportParticle_MkGeneratePos(float* Pos, PtclOrgData* pOrgDt, float Vec1Rate, float Vec2Rate)
{
	float Vec1[4];
	float Vec2[4];
	// Line 344, Address: 0x2e18d0, Func Offset: 0
	// Line 346, Address: 0x2e18d4, Func Offset: 0x4
	// Line 347, Address: 0x2e18f8, Func Offset: 0x28
	// Line 348, Address: 0x2e191c, Func Offset: 0x4c
	// Line 349, Address: 0x2e1934, Func Offset: 0x64
	// Line 350, Address: 0x2e194c, Func Offset: 0x7c
	// Func End, Address: 0x2e1954, Func Offset: 0x84
}

// 
// Start address: 0x2e1960
void SupportParticle_MkGeneratePos_Circuler(float* Pos, PtclOrgData* pOrgDt, float Angle, float RadiusRate)
{
	float Vec[4];
	// Line 360, Address: 0x2e1960, Func Offset: 0
	// Line 363, Address: 0x2e1988, Func Offset: 0x28
	// Line 364, Address: 0x2e1990, Func Offset: 0x30
	// Line 366, Address: 0x2e1994, Func Offset: 0x34
	// Line 367, Address: 0x2e19c4, Func Offset: 0x64
	// Line 369, Address: 0x2e19dc, Func Offset: 0x7c
	// Line 370, Address: 0x2e1a0c, Func Offset: 0xac
	// Line 372, Address: 0x2e1a24, Func Offset: 0xc4
	// Func End, Address: 0x2e1a40, Func Offset: 0xe0
}

// 
// Start address: 0x2e1a40
void SupportParticle_MkGenerateSpd(float* SpdVec, PtclOrgData* pOrgDt)
{
	float SpdVal;
	float DirVec[4];
	float RandVec[4];
	float SpreadVec[4];
	float OfsAng;
	// Line 381, Address: 0x2e1a40, Func Offset: 0
	// Line 382, Address: 0x2e1a60, Func Offset: 0x20
	// Line 386, Address: 0x2e1a74, Func Offset: 0x34
	// Line 382, Address: 0x2e1a7c, Func Offset: 0x3c
	// Line 386, Address: 0x2e1a84, Func Offset: 0x44
	// Line 388, Address: 0x2e1aa8, Func Offset: 0x68
	// Line 390, Address: 0x2e1abc, Func Offset: 0x7c
	// Line 392, Address: 0x2e1ac8, Func Offset: 0x88
	// Line 393, Address: 0x2e1aec, Func Offset: 0xac
	// Line 394, Address: 0x2e1b10, Func Offset: 0xd0
	// Line 395, Address: 0x2e1b24, Func Offset: 0xe4
	// Line 394, Address: 0x2e1b28, Func Offset: 0xe8
	// Line 395, Address: 0x2e1b34, Func Offset: 0xf4
	// Line 394, Address: 0x2e1b3c, Func Offset: 0xfc
	// Line 395, Address: 0x2e1b44, Func Offset: 0x104
	// Line 396, Address: 0x2e1b5c, Func Offset: 0x11c
	// Line 397, Address: 0x2e1b88, Func Offset: 0x148
	// Line 398, Address: 0x2e1bb4, Func Offset: 0x174
	// Line 399, Address: 0x2e1be0, Func Offset: 0x1a0
	// Line 401, Address: 0x2e1c00, Func Offset: 0x1c0
	// Line 402, Address: 0x2e1c20, Func Offset: 0x1e0
	// Func End, Address: 0x2e1c3c, Func Offset: 0x1fc
}

// 
// Start address: 0x2e1c40
_anon1* SupportParticle_PreSetGsReg(_anon1* pPk, unsigned long Tex0, unsigned long Alpha)
{
	// Line 414, Address: 0x2e1c40, Func Offset: 0
	// Line 430, Address: 0x2e1c44, Func Offset: 0x4
	// Line 414, Address: 0x2e1c48, Func Offset: 0x8
	// Line 415, Address: 0x2e1c58, Func Offset: 0x18
	// Line 420, Address: 0x2e1c60, Func Offset: 0x20
	// Line 424, Address: 0x2e1c64, Func Offset: 0x24
	// Line 419, Address: 0x2e1c68, Func Offset: 0x28
	// Line 424, Address: 0x2e1c6c, Func Offset: 0x2c
	// Line 420, Address: 0x2e1c70, Func Offset: 0x30
	// Line 424, Address: 0x2e1c74, Func Offset: 0x34
	// Line 421, Address: 0x2e1c78, Func Offset: 0x38
	// Line 424, Address: 0x2e1c7c, Func Offset: 0x3c
	// Line 425, Address: 0x2e1c88, Func Offset: 0x48
	// Line 424, Address: 0x2e1c8c, Func Offset: 0x4c
	// Line 435, Address: 0x2e1c90, Func Offset: 0x50
	// Line 425, Address: 0x2e1c94, Func Offset: 0x54
	// Line 429, Address: 0x2e1c98, Func Offset: 0x58
	// Line 439, Address: 0x2e1c9c, Func Offset: 0x5c
	// Line 430, Address: 0x2e1ca0, Func Offset: 0x60
	// Line 439, Address: 0x2e1ca4, Func Offset: 0x64
	// Line 431, Address: 0x2e1ca8, Func Offset: 0x68
	// Line 440, Address: 0x2e1cac, Func Offset: 0x6c
	// Line 434, Address: 0x2e1cb0, Func Offset: 0x70
	// Line 435, Address: 0x2e1cb4, Func Offset: 0x74
	// Line 439, Address: 0x2e1cb8, Func Offset: 0x78
	// Line 440, Address: 0x2e1cbc, Func Offset: 0x7c
	// Line 441, Address: 0x2e1cc0, Func Offset: 0x80
	// Line 444, Address: 0x2e1cc4, Func Offset: 0x84
	// Func End, Address: 0x2e1ccc, Func Offset: 0x8c
}

// 
// Start address: 0x2e1cd0
void SupportParticle_MkAirAccelVector(float* AccVec, float* ChkPos, AirData* pData, float* DataOfsVec, float AffectRate)
{
	int No;
	float Dist;
	float ChkDataLclPos[4];
	float Vec[4];
	AirAttractArea* pAtt;
	float AccVal;
	AirFlowArea* pFlow;
	// Line 457, Address: 0x2e1cd0, Func Offset: 0
	// Line 464, Address: 0x2e1cd4, Func Offset: 0x4
	// Line 466, Address: 0x2e1cec, Func Offset: 0x1c
	// Line 469, Address: 0x2e1cfc, Func Offset: 0x2c
	// Line 471, Address: 0x2e1d28, Func Offset: 0x58
	// Line 474, Address: 0x2e1d34, Func Offset: 0x64
	// Line 475, Address: 0x2e1d48, Func Offset: 0x78
	// Line 476, Address: 0x2e1d68, Func Offset: 0x98
	// Line 479, Address: 0x2e1d78, Func Offset: 0xa8
	// Line 480, Address: 0x2e1d84, Func Offset: 0xb4
	// Line 481, Address: 0x2e1da4, Func Offset: 0xd4
	// Line 482, Address: 0x2e1db0, Func Offset: 0xe0
	// Line 483, Address: 0x2e1dc4, Func Offset: 0xf4
	// Line 486, Address: 0x2e1de0, Func Offset: 0x110
	// Line 488, Address: 0x2e1df0, Func Offset: 0x120
	// Line 489, Address: 0x2e1dfc, Func Offset: 0x12c
	// Line 490, Address: 0x2e1e10, Func Offset: 0x140
	// Line 491, Address: 0x2e1e30, Func Offset: 0x160
	// Line 494, Address: 0x2e1e40, Func Offset: 0x170
	// Line 495, Address: 0x2e1e60, Func Offset: 0x190
	// Line 496, Address: 0x2e1e74, Func Offset: 0x1a4
	// Line 497, Address: 0x2e1e90, Func Offset: 0x1c0
	// Func End, Address: 0x2e1e98, Func Offset: 0x1c8
}

