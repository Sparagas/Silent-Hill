typedef struct _anon0;
typedef struct _anon1;
typedef struct ErodeCrack_Vertex;
typedef union _anon2;
typedef struct _cam3Work;
typedef struct ErodeCrack_MeatCore;
typedef struct sfObj;
typedef struct ErodeCrack3LDK_Info;
typedef struct ErodeCrack_CoreData;
typedef struct ErodeCrack_EffInstance;
typedef struct ErodeCrack_Line;
typedef struct ErodeCrackWork;
typedef struct ListNode;
typedef struct ListInfo;
typedef enum sgLightType : unsigned char;
typedef struct OneCrackData;
typedef struct GroupErodeCrack3LDKWork;
typedef union _anon3;
typedef struct EffID_Contents;
typedef union ErodeCrack_EffID;
typedef enum _cam3Step : unsigned char;

typedef void(*type_13)(sfObj*);
typedef void(*type_23)(sfObj*);
typedef void(*type_26)(sfObj*);
typedef void(*type_28)(sfObj*);
typedef void(*type_32)(sfObj*);
typedef void(*type_38)();

typedef int type_0[4];
typedef ErodeCrack_EffInstance type_1[30];
typedef unsigned int type_2[4];
typedef void* type_3[4];
typedef short type_4[8];
typedef unsigned short type_5[8];
typedef char type_6[16];
typedef unsigned char type_7[16];
typedef float type_8[4];
typedef float type_9[1];
typedef int type_10[1];
typedef float type_11[3];
typedef long type_12[1];
typedef void(*type_14)(sfObj*)[3];
typedef float type_15[4];
typedef float type_16[4][4];
typedef float type_17[4];
typedef ErodeCrack_Vertex type_18[6];
typedef float type_19[4][4];
typedef unsigned char type_20[4];
typedef float type_21[4];
typedef _anon3 type_22[256];
typedef unsigned int type_24[10];
typedef OneCrackData type_25[10];
typedef short type_27[2];
typedef unsigned short type_29[2];
typedef char type_30[4];
typedef unsigned char type_31[4];
typedef float type_33[1];
typedef int type_34[1];
typedef ErodeCrack_Line type_35[14];
typedef float type_36[4];
typedef ErodeCrack_MeatCore type_37[12];
typedef void(*type_39)()[2];
typedef long type_40[2];
typedef unsigned int type_41[8];
typedef unsigned long type_42[2];

struct _anon0
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

struct _anon1
{
	short base;
	short buffer_w;
	unsigned char psm;
	unsigned char data_psm;
	short w;
	short h;
	short buffer_size;
	short w2;
	short h2;
};

struct ErodeCrack_Vertex
{
	float Pos[4];
	float TexSTQ[3];
	float AlphaRate;
};

union _anon2
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

struct _cam3Work
{
	_cam3Step step;
	float mtx[4][4];
	float rot[4];
	float lookat[4];
	int run;
	int forceRotate;
};

struct ErodeCrack_MeatCore
{
	float PosAry[4][4];
	float VtTexQAry[4];
	int TexRotNo;
	float UseLineVtNoFloat;
};

struct sfObj
{
	_anon3 fwork[256];
	_anon3* work;
	void(*func)(sfObj*);
	_anon3* work_pt0;
	_anon3* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon3* sys_work;
	_anon3* scene_work;
	_anon3* event_work;
	_anon3* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct ErodeCrack3LDK_Info
{
	float CenterPos[4];
	float WallNormVec[4];
	float Timer;
	float AtkMotionRate;
	float CoreRadius;
	int BranchNum;
	float PolyRadiusTgt;
};

struct ErodeCrack_CoreData
{
	float Pos[4];
	float WallNormVec[4];
	float Timer;
	unsigned int GrowRandVal;
	float AtkMotionRate;
	float AtkMotionRateTgt;
	float AtkMotionRateSpd;
	float PolyRadiusTgt;
	float CoreRadius;
	float CoreRadiusTgt;
	float CoreRadiusSpd;
	float MkTestArefRate;
	float MkTestArefRateSpd;
	float MkTestArefRateTgt;
	float EmbossOfsVec[4];
};

struct ErodeCrack_EffInstance
{
	ErodeCrack_EffID id;
	ErodeCrack_CoreData Core;
	int RadialLineNum;
	ErodeCrack_Line LineAry[14];
	ErodeCrack_MeatCore MeatCoreAry[12];
	ListNode InstNode;
};

struct ErodeCrack_Line
{
	float WallNormVec[4];
	float GrowDirVec[4];
	short TexNo;
	float GrowRadius;
	float GrowRadiusSpd;
	float GrowRadiusTgt;
	ErodeCrack_Vertex VertAry[6];
};

struct ErodeCrackWork
{
	sfObj* pDemoObj;
	float Wld2ScrMat[4][4];
	float Wld2ViewMat[4][4];
	float View2ScrMat[4][4];
	float View2WldMat[4][4];
	float FoodPos[4];
	float Timer;
	float MinitTimer;
	ErodeCrack_EffInstance EffInstAry[30];
	ListInfo FreeInstList;
	ListInfo UseInstList;
	ErodeCrack_EffID NextEffID;
};

struct ListNode
{
	ListNode* Next;
	ListNode* Prev;
	void* DataAdr;
};

struct ListInfo
{
	ListNode* Top;
	ListNode* Last;
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

struct OneCrackData
{
	float PolyRRate;
	float CoreRRate;
	float GrouTimeRate;
};

struct GroupErodeCrack3LDKWork
{
	unsigned int IDAry[10];
};

union _anon3
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

struct EffID_Contents
{
	unsigned short AppearNo;
	unsigned short InstElementNo;
};

union ErodeCrack_EffID
{
	EffID_Contents Contents;
	unsigned int Val;
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
OneCrackData CrackDataAry[10];
GroupErodeCrack3LDKWork GroupW;
ErodeCrackWork ecW;
void(*ErodeCrack3LDK_DrawData)(sfObj*);
void(*ErodeCrack3LDK_CalcData)(sfObj*);
float sg_vector_unit_z[4];
float sg_vector_zero[4];
_cam3Work cam3_work;

unsigned int rand_srand(int UseSeedFlag, unsigned int Seed);
void GroupErodeCrack3LDK_SceneInit();
int GroupErodeCrack3LDK_AttackMotionRate(float TgtRate, float ChgTime);
int GroupErodeCrack3LDK_EffectInstanceCreate(float* Pos, float* WallNormVec, float PolyRadiusTgt, float CoreRadiusTgt, float GrowTime);
int GroupErodeCrack3LDK_EffectInstanceRenewal(float PolyRadiusTgt, float CoreRadiusTgt, float TestArefRateTgt, float GrowTime);
void GroupErodeCrack3LDK_EffectInstanceVanish(float VanishTime);
void ErodeCrack3LDK_ConstructObjForDemo();
void ErodeCrack3LDK_DestructObjForDemo();
unsigned int ErodeCrack3LDK_AttackMotionRate(unsigned int IDVal, float TgtRate, float ChgTime);
unsigned int ErodeCrack3LDK_EffectInstanceCreate(float* Pos, float* WallNormVec, float PolyRadiusTgt, float CoreRadiusTgt, float GrowTime);
unsigned int ErodeCrack3LDK_EffectInstanceRenewal(unsigned int IDVal, float PolyRadiusTgt, float CoreRadiusTgt, float TestArefRateTgt, float GrowTime);
void ErodeCrack3LDK_EffectInstanceVanish(unsigned int IDVal, float VanishTime);
ErodeCrack_EffInstance* get_eff_inst_by_id(unsigned int IDVal);
void make_data_ErodeCrack_CoreData(ErodeCrack_CoreData* pCore, float* Pos, float* WallNormVec, float MkTestArefRateTgt, float PolyRadiusTgt, float CoreRadiusTgt, float GrowTime);
void make_data_ErodeCrack_MeatCore(ErodeCrack_MeatCore* MeatCoreAry, ErodeCrack_EffInstance* pInst);
void make_data_ErodeCrack_Line(ErodeCrack_Line* pLine, int LineNo, ErodeCrack_EffInstance* pInst, int RandVal, float GrowTime, int RenewalModeFlag);
void make_graw_direction_vector(float* GrowDirVec, int GrowRandVal, float* WallNormVec, int LineNo, int RadialLineNum);
void make_emboss_offset_vector_from_all_light(float* EmbossOfsVec, float* VtPos, float* WallNormVec, float EmbossOfsDist);
float calc_light_vector_for_emboss(float* LtVec, float* VtPos, _anon0* pLight);
void ErodeCrack3LDK_CalcData(sfObj* pObj);
void init_ErodeCrackWork();
void init_InstList(ErodeCrackWork* pW);
void delete_effect_instance(ErodeCrack_EffInstance* pInst);
void renewal_line_data(ErodeCrack_Line* pLine, int LineNo, ErodeCrack_CoreData* pCore);
void renewal_calc_ErodeCrack_MeatCore(ErodeCrack_MeatCore* MeatCoreAry, ErodeCrack_CoreData* pCore, ErodeCrack_Line* LineAry, int LineNum);
void ErodeCrack3LDK_DrawData(sfObj* pObj);
_anon2* draw_erode_bg(_anon2* pPk, ErodeCrack_EffInstance* pInst, unsigned long AlphaReg, unsigned char VtAlpha);
_anon2* draw_data_ErodeCrack_MeatCore(_anon2* pPk, ErodeCrack_EffInstance* pInst, unsigned long AlphaReg, unsigned char* VtCol, float* EmbossOfsVec);
_anon2* mk_packet_of_one_meat_core(_anon2* pPk, ErodeCrack_MeatCore* pMeatCore, unsigned char* VtCol, float* EmbossOfsVec);
_anon2* draw_one_crack_line(_anon2* pPk, ErodeCrack_Line* pLine0, ErodeCrack_Line* pLine1, unsigned long AlphaReg, float MkTestArefRate, float* EmbossOfsVec);

// 
// Start address: 0x1edcbd0
unsigned int rand_srand(int UseSeedFlag, unsigned int Seed)
{
	unsigned int Val;
	unsigned int SubSeedData[8];
	// Line 66, Address: 0x1edcbd0, Func Offset: 0
	// Line 67, Address: 0x1edcbdc, Func Offset: 0xc
	// Line 70, Address: 0x1edcbe0, Func Offset: 0x10
	// Line 71, Address: 0x1edcbe8, Func Offset: 0x18
	// Line 70, Address: 0x1edcbf0, Func Offset: 0x20
	// Line 71, Address: 0x1edcc0c, Func Offset: 0x3c
	// Line 74, Address: 0x1edcc34, Func Offset: 0x64
	// Line 76, Address: 0x1edcc48, Func Offset: 0x78
	// Line 77, Address: 0x1edcc4c, Func Offset: 0x7c
	// Func End, Address: 0x1edcc54, Func Offset: 0x84
}

// 
// Start address: 0x1edcc60
void GroupErodeCrack3LDK_SceneInit()
{
	int Times;
	// Line 128, Address: 0x1edcc60, Func Offset: 0
	// Line 130, Address: 0x1edcc64, Func Offset: 0x4
	// Line 128, Address: 0x1edcc68, Func Offset: 0x8
	// Line 130, Address: 0x1edcc6c, Func Offset: 0xc
	// Line 131, Address: 0x1edcc7c, Func Offset: 0x1c
	// Line 132, Address: 0x1edcc88, Func Offset: 0x28
	// Line 134, Address: 0x1edccb4, Func Offset: 0x54
	// Func End, Address: 0x1edccc0, Func Offset: 0x60
}

// 
// Start address: 0x1edccc0
int GroupErodeCrack3LDK_AttackMotionRate(float TgtRate, float ChgTime)
{
	int Times;
	int ok_f;
	int ret_val;
	// Line 166, Address: 0x1edccc0, Func Offset: 0
	// Line 169, Address: 0x1edccd0, Func Offset: 0x10
	// Line 166, Address: 0x1edccd4, Func Offset: 0x14
	// Line 169, Address: 0x1edccdc, Func Offset: 0x1c
	// Line 166, Address: 0x1edcce0, Func Offset: 0x20
	// Line 169, Address: 0x1edcce4, Func Offset: 0x24
	// Line 170, Address: 0x1edccf0, Func Offset: 0x30
	// Line 171, Address: 0x1edcd00, Func Offset: 0x40
	// Line 172, Address: 0x1edcd08, Func Offset: 0x48
	// Line 174, Address: 0x1edcd0c, Func Offset: 0x4c
	// Line 175, Address: 0x1edcd20, Func Offset: 0x60
	// Line 176, Address: 0x1edcd24, Func Offset: 0x64
	// Func End, Address: 0x1edcd44, Func Offset: 0x84
}

// 
// Start address: 0x1edcd50
int GroupErodeCrack3LDK_EffectInstanceCreate(float* Pos, float* WallNormVec, float PolyRadiusTgt, float CoreRadiusTgt, float GrowTime)
{
	int Times;
	float MkPos[4];
	unsigned int seed_y;
	unsigned int seed_z;
	_anon2 qw;
	unsigned int id;
	float PolyRTgt;
	float CoreRTgt;
	float GrowT;
	// Line 192, Address: 0x1edcd50, Func Offset: 0
	// Line 198, Address: 0x1edcd58, Func Offset: 0x8
	// Line 192, Address: 0x1edcd5c, Func Offset: 0xc
	// Line 198, Address: 0x1edcda4, Func Offset: 0x54
	// Line 201, Address: 0x1edcdb0, Func Offset: 0x60
	// Line 206, Address: 0x1edcdc0, Func Offset: 0x70
	// Line 201, Address: 0x1edcdd8, Func Offset: 0x88
	// Line 202, Address: 0x1edcddc, Func Offset: 0x8c
	// Line 203, Address: 0x1edcde4, Func Offset: 0x94
	// Line 204, Address: 0x1edcde8, Func Offset: 0x98
	// Line 206, Address: 0x1edcdec, Func Offset: 0x9c
	// Line 210, Address: 0x1edce08, Func Offset: 0xb8
	// Line 211, Address: 0x1edce0c, Func Offset: 0xbc
	// Line 212, Address: 0x1edce10, Func Offset: 0xc0
	// Line 210, Address: 0x1edce14, Func Offset: 0xc4
	// Line 211, Address: 0x1edce18, Func Offset: 0xc8
	// Line 214, Address: 0x1edce1c, Func Offset: 0xcc
	// Line 215, Address: 0x1edce24, Func Offset: 0xd4
	// Line 216, Address: 0x1edce2c, Func Offset: 0xdc
	// Line 219, Address: 0x1edce38, Func Offset: 0xe8
	// Line 218, Address: 0x1edce3c, Func Offset: 0xec
	// Line 219, Address: 0x1edce40, Func Offset: 0xf0
	// Line 220, Address: 0x1edce4c, Func Offset: 0xfc
	// Line 219, Address: 0x1edce50, Func Offset: 0x100
	// Line 220, Address: 0x1edce54, Func Offset: 0x104
	// Line 221, Address: 0x1edce60, Func Offset: 0x110
	// Line 222, Address: 0x1edce98, Func Offset: 0x148
	// Line 221, Address: 0x1edce9c, Func Offset: 0x14c
	// Line 222, Address: 0x1edcea4, Func Offset: 0x154
	// Line 225, Address: 0x1edcee0, Func Offset: 0x190
	// Line 233, Address: 0x1edcef0, Func Offset: 0x1a0
	// Line 234, Address: 0x1edcefc, Func Offset: 0x1ac
	// Line 233, Address: 0x1edcf00, Func Offset: 0x1b0
	// Line 234, Address: 0x1edcf08, Func Offset: 0x1b8
	// Line 236, Address: 0x1edcf14, Func Offset: 0x1c4
	// Line 235, Address: 0x1edcf18, Func Offset: 0x1c8
	// Line 236, Address: 0x1edcf1c, Func Offset: 0x1cc
	// Line 235, Address: 0x1edcf44, Func Offset: 0x1f4
	// Line 236, Address: 0x1edcf48, Func Offset: 0x1f8
	// Line 235, Address: 0x1edcf50, Func Offset: 0x200
	// Line 236, Address: 0x1edcf54, Func Offset: 0x204
	// Func End, Address: 0x1edcf60, Func Offset: 0x210
}

// 
// Start address: 0x1edcf60
int GroupErodeCrack3LDK_EffectInstanceRenewal(float PolyRadiusTgt, float CoreRadiusTgt, float TestArefRateTgt, float GrowTime)
{
	int Times;
	int ok_f;
	int ret_val;
	// Line 251, Address: 0x1edcf60, Func Offset: 0
	// Line 255, Address: 0x1edcf70, Func Offset: 0x10
	// Line 251, Address: 0x1edcf74, Func Offset: 0x14
	// Line 255, Address: 0x1edcf7c, Func Offset: 0x1c
	// Line 251, Address: 0x1edcf80, Func Offset: 0x20
	// Line 255, Address: 0x1edcf84, Func Offset: 0x24
	// Line 251, Address: 0x1edcf88, Func Offset: 0x28
	// Line 255, Address: 0x1edcf8c, Func Offset: 0x2c
	// Line 251, Address: 0x1edcf90, Func Offset: 0x30
	// Line 255, Address: 0x1edcf94, Func Offset: 0x34
	// Line 251, Address: 0x1edcf98, Func Offset: 0x38
	// Line 255, Address: 0x1edcfac, Func Offset: 0x4c
	// Line 263, Address: 0x1edcfb0, Func Offset: 0x50
	// Line 264, Address: 0x1edcfd4, Func Offset: 0x74
	// Line 265, Address: 0x1edcfdc, Func Offset: 0x7c
	// Line 267, Address: 0x1edcfe0, Func Offset: 0x80
	// Line 265, Address: 0x1edcfe8, Func Offset: 0x88
	// Line 267, Address: 0x1edcfec, Func Offset: 0x8c
	// Line 268, Address: 0x1edcff4, Func Offset: 0x94
	// Line 269, Address: 0x1edcff8, Func Offset: 0x98
	// Func End, Address: 0x1edd024, Func Offset: 0xc4
}

// 
// Start address: 0x1edd030
void GroupErodeCrack3LDK_EffectInstanceVanish(float VanishTime)
{
	int Times;
	// Line 281, Address: 0x1edd030, Func Offset: 0
	// Line 283, Address: 0x1edd040, Func Offset: 0x10
	// Line 281, Address: 0x1edd044, Func Offset: 0x14
	// Line 283, Address: 0x1edd048, Func Offset: 0x18
	// Line 284, Address: 0x1edd058, Func Offset: 0x28
	// Line 285, Address: 0x1edd064, Func Offset: 0x34
	// Line 286, Address: 0x1edd074, Func Offset: 0x44
	// Func End, Address: 0x1edd08c, Func Offset: 0x5c
}

// 
// Start address: 0x1edd090
void ErodeCrack3LDK_ConstructObjForDemo()
{
	// Line 661, Address: 0x1edd090, Func Offset: 0
	// Line 662, Address: 0x1edd098, Func Offset: 0x8
	// Line 663, Address: 0x1edd0a4, Func Offset: 0x14
	// Line 662, Address: 0x1edd0a8, Func Offset: 0x18
	// Line 663, Address: 0x1edd0ac, Func Offset: 0x1c
	// Line 664, Address: 0x1edd0bc, Func Offset: 0x2c
	// Line 665, Address: 0x1edd0cc, Func Offset: 0x3c
	// Line 666, Address: 0x1edd0e0, Func Offset: 0x50
	// Line 667, Address: 0x1edd0f0, Func Offset: 0x60
	// Func End, Address: 0x1edd0fc, Func Offset: 0x6c
}

// 
// Start address: 0x1edd100
void ErodeCrack3LDK_DestructObjForDemo()
{
	// Line 676, Address: 0x1edd100, Func Offset: 0
	// Func End, Address: 0x1edd10c, Func Offset: 0xc
}

// 
// Start address: 0x1edd110
unsigned int ErodeCrack3LDK_AttackMotionRate(unsigned int IDVal, float TgtRate, float ChgTime)
{
	ErodeCrack_EffInstance* pInst;
	ErodeCrack_CoreData* pCore;
	float diff;
	// Line 726, Address: 0x1edd110, Func Offset: 0
	// Line 729, Address: 0x1edd124, Func Offset: 0x14
	// Line 731, Address: 0x1edd12c, Func Offset: 0x1c
	// Line 733, Address: 0x1edd134, Func Offset: 0x24
	// Line 734, Address: 0x1edd13c, Func Offset: 0x2c
	// Line 735, Address: 0x1edd140, Func Offset: 0x30
	// Line 736, Address: 0x1edd144, Func Offset: 0x34
	// Line 738, Address: 0x1edd148, Func Offset: 0x38
	// Line 736, Address: 0x1edd154, Func Offset: 0x44
	// Line 738, Address: 0x1edd158, Func Offset: 0x48
	// Line 739, Address: 0x1edd160, Func Offset: 0x50
	// Line 740, Address: 0x1edd174, Func Offset: 0x64
	// Line 741, Address: 0x1edd180, Func Offset: 0x70
	// Line 742, Address: 0x1edd188, Func Offset: 0x78
	// Line 744, Address: 0x1edd190, Func Offset: 0x80
	// Line 746, Address: 0x1edd198, Func Offset: 0x88
	// Func End, Address: 0x1edd1ac, Func Offset: 0x9c
}

// 
// Start address: 0x1edd1b0
unsigned int ErodeCrack3LDK_EffectInstanceCreate(float* Pos, float* WallNormVec, float PolyRadiusTgt, float CoreRadiusTgt, float GrowTime)
{
	ErodeCrack_EffInstance* pInst;
	int LineNo;
	ErodeCrack_Line* pLine;
	unsigned int RandVal;
	unsigned int ret_id;
	// Line 764, Address: 0x1edd1b0, Func Offset: 0
	// Line 770, Address: 0x1edd1bc, Func Offset: 0xc
	// Line 764, Address: 0x1edd1c0, Func Offset: 0x10
	// Line 770, Address: 0x1edd1d4, Func Offset: 0x24
	// Line 771, Address: 0x1edd1d8, Func Offset: 0x28
	// Line 772, Address: 0x1edd1e0, Func Offset: 0x30
	// Line 777, Address: 0x1edd1ec, Func Offset: 0x3c
	// Line 778, Address: 0x1edd238, Func Offset: 0x88
	// Line 780, Address: 0x1edd290, Func Offset: 0xe0
	// Line 783, Address: 0x1edd294, Func Offset: 0xe4
	// Line 784, Address: 0x1edd2b4, Func Offset: 0x104
	// Line 790, Address: 0x1edd2b8, Func Offset: 0x108
	// Line 789, Address: 0x1edd2bc, Func Offset: 0x10c
	// Line 790, Address: 0x1edd2d0, Func Offset: 0x120
	// Line 795, Address: 0x1edd2e0, Func Offset: 0x130
	// Line 799, Address: 0x1edd2f0, Func Offset: 0x140
	// Line 800, Address: 0x1edd30c, Func Offset: 0x15c
	// Line 802, Address: 0x1edd320, Func Offset: 0x170
	// Line 806, Address: 0x1edd32c, Func Offset: 0x17c
	// Line 807, Address: 0x1edd364, Func Offset: 0x1b4
	// Line 808, Address: 0x1edd36c, Func Offset: 0x1bc
	// Line 809, Address: 0x1edd370, Func Offset: 0x1c0
	// Line 810, Address: 0x1edd384, Func Offset: 0x1d4
	// Line 812, Address: 0x1edd388, Func Offset: 0x1d8
	// Func End, Address: 0x1edd3a4, Func Offset: 0x1f4
}

// 
// Start address: 0x1edd3b0
unsigned int ErodeCrack3LDK_EffectInstanceRenewal(unsigned int IDVal, float PolyRadiusTgt, float CoreRadiusTgt, float TestArefRateTgt, float GrowTime)
{
	ErodeCrack_EffInstance* pInst;
	int LineNo;
	ErodeCrack_Line* pLine;
	// Line 829, Address: 0x1edd3b0, Func Offset: 0
	// Line 834, Address: 0x1edd3e0, Func Offset: 0x30
	// Line 836, Address: 0x1edd3ec, Func Offset: 0x3c
	// Line 837, Address: 0x1edd3f4, Func Offset: 0x44
	// Line 838, Address: 0x1edd3fc, Func Offset: 0x4c
	// Line 840, Address: 0x1edd400, Func Offset: 0x50
	// Line 841, Address: 0x1edd420, Func Offset: 0x70
	// Line 844, Address: 0x1edd438, Func Offset: 0x88
	// Line 843, Address: 0x1edd43c, Func Offset: 0x8c
	// Line 844, Address: 0x1edd440, Func Offset: 0x90
	// Line 845, Address: 0x1edd454, Func Offset: 0xa4
	// Line 846, Address: 0x1edd468, Func Offset: 0xb8
	// Line 847, Address: 0x1edd470, Func Offset: 0xc0
	// Func End, Address: 0x1edd498, Func Offset: 0xe8
}

// 
// Start address: 0x1edd4a0
void ErodeCrack3LDK_EffectInstanceVanish(unsigned int IDVal, float VanishTime)
{
	ErodeCrack_EffInstance* pInst;
	// Line 859, Address: 0x1edd4a0, Func Offset: 0
	// Line 860, Address: 0x1edd4b4, Func Offset: 0x14
	// Line 862, Address: 0x1edd4c0, Func Offset: 0x20
	// Line 864, Address: 0x1edd4c8, Func Offset: 0x28
	// Line 865, Address: 0x1edd4dc, Func Offset: 0x3c
	// Line 867, Address: 0x1edd4e4, Func Offset: 0x44
	// Line 869, Address: 0x1edd4e8, Func Offset: 0x48
	// Line 876, Address: 0x1edd504, Func Offset: 0x64
	// Func End, Address: 0x1edd51c, Func Offset: 0x7c
}

// 
// Start address: 0x1edd520
ErodeCrack_EffInstance* get_eff_inst_by_id(unsigned int IDVal)
{
	ErodeCrack_EffID InputID;
	ErodeCrack_EffInstance* pInst;
	// Line 887, Address: 0x1edd520, Func Offset: 0
	// Line 895, Address: 0x1edd524, Func Offset: 0x4
	// Line 891, Address: 0x1edd528, Func Offset: 0x8
	// Line 895, Address: 0x1edd52c, Func Offset: 0xc
	// Line 898, Address: 0x1edd538, Func Offset: 0x18
	// Line 895, Address: 0x1edd53c, Func Offset: 0x1c
	// Line 898, Address: 0x1edd548, Func Offset: 0x28
	// Line 901, Address: 0x1edd558, Func Offset: 0x38
	// Func End, Address: 0x1edd560, Func Offset: 0x40
}

// 
// Start address: 0x1edd560
void make_data_ErodeCrack_CoreData(ErodeCrack_CoreData* pCore, float* Pos, float* WallNormVec, float MkTestArefRateTgt, float PolyRadiusTgt, float CoreRadiusTgt, float GrowTime)
{
	// Line 916, Address: 0x1edd560, Func Offset: 0
	// Line 917, Address: 0x1edd58c, Func Offset: 0x2c
	// Line 919, Address: 0x1edd594, Func Offset: 0x34
	// Line 920, Address: 0x1edd5b4, Func Offset: 0x54
	// Line 921, Address: 0x1edd5d0, Func Offset: 0x70
	// Line 922, Address: 0x1edd5d4, Func Offset: 0x74
	// Line 923, Address: 0x1edd5d8, Func Offset: 0x78
	// Line 924, Address: 0x1edd5dc, Func Offset: 0x7c
	// Line 927, Address: 0x1edd5e0, Func Offset: 0x80
	// Line 928, Address: 0x1edd5e4, Func Offset: 0x84
	// Line 931, Address: 0x1edd5e8, Func Offset: 0x88
	// Line 933, Address: 0x1edd5f0, Func Offset: 0x90
	// Line 934, Address: 0x1edd5f4, Func Offset: 0x94
	// Line 938, Address: 0x1edd610, Func Offset: 0xb0
	// Line 940, Address: 0x1edd624, Func Offset: 0xc4
	// Line 941, Address: 0x1edd634, Func Offset: 0xd4
	// Line 942, Address: 0x1edd648, Func Offset: 0xe8
	// Line 944, Address: 0x1edd650, Func Offset: 0xf0
	// Line 945, Address: 0x1edd654, Func Offset: 0xf4
	// Line 947, Address: 0x1edd658, Func Offset: 0xf8
	// Line 948, Address: 0x1edd65c, Func Offset: 0xfc
	// Line 951, Address: 0x1edd660, Func Offset: 0x100
	// Line 953, Address: 0x1edd668, Func Offset: 0x108
	// Line 954, Address: 0x1edd674, Func Offset: 0x114
	// Line 956, Address: 0x1edd678, Func Offset: 0x118
	// Line 958, Address: 0x1edd680, Func Offset: 0x120
	// Line 964, Address: 0x1edd69c, Func Offset: 0x13c
	// Line 965, Address: 0x1edd6a0, Func Offset: 0x140
	// Func End, Address: 0x1edd6c0, Func Offset: 0x160
}

// 
// Start address: 0x1edd6c0
void make_data_ErodeCrack_MeatCore(ErodeCrack_MeatCore* MeatCoreAry, ErodeCrack_EffInstance* pInst)
{
	int MeatNo;
	int VtNo;
	// Line 973, Address: 0x1edd6c0, Func Offset: 0
	// Line 975, Address: 0x1edd6d8, Func Offset: 0x18
	// Line 979, Address: 0x1edd6f0, Func Offset: 0x30
	// Line 980, Address: 0x1edd70c, Func Offset: 0x4c
	// Line 982, Address: 0x1edd728, Func Offset: 0x68
	// Line 980, Address: 0x1edd72c, Func Offset: 0x6c
	// Line 983, Address: 0x1edd740, Func Offset: 0x80
	// Line 990, Address: 0x1edd748, Func Offset: 0x88
	// Line 983, Address: 0x1edd74c, Func Offset: 0x8c
	// Line 987, Address: 0x1edd778, Func Offset: 0xb8
	// Line 990, Address: 0x1edd780, Func Offset: 0xc0
	// Line 993, Address: 0x1edd784, Func Offset: 0xc4
	// Line 994, Address: 0x1edd798, Func Offset: 0xd8
	// Line 995, Address: 0x1edd7b0, Func Offset: 0xf0
	// Func End, Address: 0x1edd7c8, Func Offset: 0x108
}

// 
// Start address: 0x1edd7d0
void make_data_ErodeCrack_Line(ErodeCrack_Line* pLine, int LineNo, ErodeCrack_EffInstance* pInst, int RandVal, float GrowTime, int RenewalModeFlag)
{
	ErodeCrack_CoreData* pCore;
	// Line 1008, Address: 0x1edd7d0, Func Offset: 0
	// Line 1016, Address: 0x1edd7f0, Func Offset: 0x20
	// Line 1019, Address: 0x1edd7f4, Func Offset: 0x24
	// Line 1021, Address: 0x1edd7fc, Func Offset: 0x2c
	// Line 1022, Address: 0x1edd814, Func Offset: 0x44
	// Line 1023, Address: 0x1edd81c, Func Offset: 0x4c
	// Line 1024, Address: 0x1edd828, Func Offset: 0x58
	// Line 1025, Address: 0x1edd844, Func Offset: 0x74
	// Line 1027, Address: 0x1edd848, Func Offset: 0x78
	// Line 1029, Address: 0x1edd88c, Func Offset: 0xbc
	// Line 1031, Address: 0x1edd8a0, Func Offset: 0xd0
	// Line 1033, Address: 0x1edd8a8, Func Offset: 0xd8
	// Line 1034, Address: 0x1edd8b0, Func Offset: 0xe0
	// Line 1036, Address: 0x1edd8c4, Func Offset: 0xf4
	// Line 1037, Address: 0x1edd934, Func Offset: 0x164
	// Line 1038, Address: 0x1edd938, Func Offset: 0x168
	// Func End, Address: 0x1edd954, Func Offset: 0x184
}

// 
// Start address: 0x1edd960
void make_graw_direction_vector(float* GrowDirVec, int GrowRandVal, float* WallNormVec, int LineNo, int RadialLineNum)
{
	float GrowAngle;
	float Qt[4];
	float Normal[4];
	float DownVec[4];
	float CosTH;
	float SinTH;
	float CosPHI;
	float SinPHI;
	// Line 1051, Address: 0x1edd960, Func Offset: 0
	// Line 1058, Address: 0x1edd968, Func Offset: 0x8
	// Line 1051, Address: 0x1edd96c, Func Offset: 0xc
	// Line 1058, Address: 0x1edd970, Func Offset: 0x10
	// Line 1060, Address: 0x1edd990, Func Offset: 0x30
	// Line 1061, Address: 0x1edd998, Func Offset: 0x38
	// Line 1062, Address: 0x1edd9a8, Func Offset: 0x48
	// Line 1063, Address: 0x1edd9ac, Func Offset: 0x4c
	// Line 1064, Address: 0x1edd9b8, Func Offset: 0x58
	// Line 1066, Address: 0x1edd9c0, Func Offset: 0x60
	// Line 1067, Address: 0x1edd9e8, Func Offset: 0x88
	// Line 1071, Address: 0x1edd9f0, Func Offset: 0x90
	// Line 1072, Address: 0x1edda18, Func Offset: 0xb8
	// Line 1073, Address: 0x1edda28, Func Offset: 0xc8
	// Line 1074, Address: 0x1edda2c, Func Offset: 0xcc
	// Line 1075, Address: 0x1edda30, Func Offset: 0xd0
	// Line 1072, Address: 0x1edda34, Func Offset: 0xd4
	// Line 1074, Address: 0x1edda44, Func Offset: 0xe4
	// Line 1075, Address: 0x1edda48, Func Offset: 0xe8
	// Line 1073, Address: 0x1edda4c, Func Offset: 0xec
	// Line 1077, Address: 0x1edda50, Func Offset: 0xf0
	// Line 1078, Address: 0x1edda54, Func Offset: 0xf4
	// Line 1076, Address: 0x1edda58, Func Offset: 0xf8
	// Line 1077, Address: 0x1edda5c, Func Offset: 0xfc
	// Line 1078, Address: 0x1edda60, Func Offset: 0x100
	// Line 1079, Address: 0x1edda64, Func Offset: 0x104
	// Line 1081, Address: 0x1edda68, Func Offset: 0x108
	// Line 1083, Address: 0x1eddac4, Func Offset: 0x164
	// Line 1084, Address: 0x1eddad0, Func Offset: 0x170
	// Line 1085, Address: 0x1eddadc, Func Offset: 0x17c
	// Line 1086, Address: 0x1eddaec, Func Offset: 0x18c
	// Func End, Address: 0x1eddafc, Func Offset: 0x19c
}

// 
// Start address: 0x1eddb00
void make_emboss_offset_vector_from_all_light(float* EmbossOfsVec, float* VtPos, float* WallNormVec, float EmbossOfsDist)
{
	int LtNum;
	int LtNo;
	float MaxLtPow;
	float MaxLtVec[4];
	_anon0* pLight;
	float LtVec[4];
	float LtPow;
	float Vec[4];
	// Line 1098, Address: 0x1eddb00, Func Offset: 0
	// Line 1099, Address: 0x1eddb30, Func Offset: 0x30
	// Line 1104, Address: 0x1eddb3c, Func Offset: 0x3c
	// Line 1105, Address: 0x1eddb50, Func Offset: 0x50
	// Line 1107, Address: 0x1eddb54, Func Offset: 0x54
	// Line 1113, Address: 0x1eddb60, Func Offset: 0x60
	// Line 1115, Address: 0x1eddb68, Func Offset: 0x68
	// Line 1116, Address: 0x1eddb78, Func Offset: 0x78
	// Line 1118, Address: 0x1eddb84, Func Offset: 0x84
	// Line 1117, Address: 0x1eddb8c, Func Offset: 0x8c
	// Line 1118, Address: 0x1eddb90, Func Offset: 0x90
	// Line 1120, Address: 0x1eddb98, Func Offset: 0x98
	// Line 1124, Address: 0x1eddbac, Func Offset: 0xac
	// Line 1125, Address: 0x1eddbcc, Func Offset: 0xcc
	// Line 1126, Address: 0x1eddbec, Func Offset: 0xec
	// Line 1127, Address: 0x1eddc18, Func Offset: 0x118
	// Line 1129, Address: 0x1eddc38, Func Offset: 0x138
	// Func End, Address: 0x1eddc60, Func Offset: 0x160
}

// 
// Start address: 0x1eddc60
float calc_light_vector_for_emboss(float* LtVec, float* VtPos, _anon0* pLight)
{
	float LtPow;
	float L2PVec[4];
	float L2PDir[4];
	float L2PDist;
	float LPos[4];
	float StartFallOffDist;
	float EndFallOffDist;
	float DirRate;
	float PosCosVal;
	float NoLightCosVal;
	float LDir[4];
	// Line 1139, Address: 0x1eddc60, Func Offset: 0
	// Line 1144, Address: 0x1eddc84, Func Offset: 0x24
	// Line 1152, Address: 0x1eddcb8, Func Offset: 0x58
	// Line 1153, Address: 0x1eddcc8, Func Offset: 0x68
	// Line 1155, Address: 0x1eddcd4, Func Offset: 0x74
	// Line 1157, Address: 0x1eddcd8, Func Offset: 0x78
	// Line 1158, Address: 0x1eddce4, Func Offset: 0x84
	// Line 1160, Address: 0x1eddcfc, Func Offset: 0x9c
	// Line 1161, Address: 0x1eddd20, Func Offset: 0xc0
	// Line 1165, Address: 0x1eddd4c, Func Offset: 0xec
	// Line 1164, Address: 0x1eddd58, Func Offset: 0xf8
	// Line 1166, Address: 0x1eddd5c, Func Offset: 0xfc
	// Line 1167, Address: 0x1eddd68, Func Offset: 0x108
	// Line 1168, Address: 0x1eddd70, Func Offset: 0x110
	// Line 1170, Address: 0x1eddd84, Func Offset: 0x124
	// Line 1171, Address: 0x1eddd90, Func Offset: 0x130
	// Line 1172, Address: 0x1eddd9c, Func Offset: 0x13c
	// Line 1173, Address: 0x1eddda0, Func Offset: 0x140
	// Line 1174, Address: 0x1edddac, Func Offset: 0x14c
	// Line 1176, Address: 0x1edddb0, Func Offset: 0x150
	// Line 1182, Address: 0x1edddc8, Func Offset: 0x168
	// Line 1183, Address: 0x1edddd0, Func Offset: 0x170
	// Line 1185, Address: 0x1edddf4, Func Offset: 0x194
	// Line 1187, Address: 0x1edde08, Func Offset: 0x1a8
	// Line 1189, Address: 0x1edde24, Func Offset: 0x1c4
	// Line 1190, Address: 0x1edde30, Func Offset: 0x1d0
	// Line 1191, Address: 0x1edde3c, Func Offset: 0x1dc
	// Line 1192, Address: 0x1edde40, Func Offset: 0x1e0
	// Line 1194, Address: 0x1edde68, Func Offset: 0x208
	// Line 1195, Address: 0x1edde78, Func Offset: 0x218
	// Line 1197, Address: 0x1edde90, Func Offset: 0x230
	// Line 1198, Address: 0x1edde94, Func Offset: 0x234
	// Line 1199, Address: 0x1edde98, Func Offset: 0x238
	// Line 1200, Address: 0x1eddea4, Func Offset: 0x244
	// Line 1203, Address: 0x1eddea8, Func Offset: 0x248
	// Func End, Address: 0x1eddec8, Func Offset: 0x268
}

// 
// Start address: 0x1edded0
void ErodeCrack3LDK_CalcData(sfObj* pObj)
{
	ListNode* pInstNode;
	ListNode* pNextInstNode;
	ErodeCrack_EffInstance* pInst;
	ErodeCrack_CoreData* pCore;
	int LineNo;
	float MkTestArefRateDiff;
	float EffRateMvVal;
	float CoreDiffTgtVal;
	float CoreMvVal;
	float MotionDiff;
	float MotionMv;
	// Line 1212, Address: 0x1edded0, Func Offset: 0
	// Line 1217, Address: 0x1eddeec, Func Offset: 0x1c
	// Line 1218, Address: 0x1eddef8, Func Offset: 0x28
	// Line 1219, Address: 0x1eddf00, Func Offset: 0x30
	// Line 1220, Address: 0x1eddf08, Func Offset: 0x38
	// Line 1221, Address: 0x1eddf10, Func Offset: 0x40
	// Line 1222, Address: 0x1eddf28, Func Offset: 0x58
	// Line 1221, Address: 0x1eddf2c, Func Offset: 0x5c
	// Line 1222, Address: 0x1eddf3c, Func Offset: 0x6c
	// Line 1223, Address: 0x1eddf60, Func Offset: 0x90
	// Line 1226, Address: 0x1eddf90, Func Offset: 0xc0
	// Line 1227, Address: 0x1eddf9c, Func Offset: 0xcc
	// Line 1228, Address: 0x1eddfa8, Func Offset: 0xd8
	// Line 1229, Address: 0x1eddfb4, Func Offset: 0xe4
	// Line 1231, Address: 0x1eddfc0, Func Offset: 0xf0
	// Line 1233, Address: 0x1eddfd8, Func Offset: 0x108
	// Line 1239, Address: 0x1eddfe8, Func Offset: 0x118
	// Line 1240, Address: 0x1eddfec, Func Offset: 0x11c
	// Line 1243, Address: 0x1eddff0, Func Offset: 0x120
	// Line 1246, Address: 0x1ede004, Func Offset: 0x134
	// Line 1247, Address: 0x1ede00c, Func Offset: 0x13c
	// Line 1249, Address: 0x1ede01c, Func Offset: 0x14c
	// Line 1251, Address: 0x1ede030, Func Offset: 0x160
	// Line 1253, Address: 0x1ede038, Func Offset: 0x168
	// Line 1254, Address: 0x1ede040, Func Offset: 0x170
	// Line 1255, Address: 0x1ede04c, Func Offset: 0x17c
	// Line 1258, Address: 0x1ede050, Func Offset: 0x180
	// Line 1259, Address: 0x1ede058, Func Offset: 0x188
	// Line 1261, Address: 0x1ede064, Func Offset: 0x194
	// Line 1259, Address: 0x1ede068, Func Offset: 0x198
	// Line 1261, Address: 0x1ede06c, Func Offset: 0x19c
	// Line 1263, Address: 0x1ede07c, Func Offset: 0x1ac
	// Line 1265, Address: 0x1ede084, Func Offset: 0x1b4
	// Line 1266, Address: 0x1ede090, Func Offset: 0x1c0
	// Line 1267, Address: 0x1ede09c, Func Offset: 0x1cc
	// Line 1268, Address: 0x1ede0a0, Func Offset: 0x1d0
	// Line 1274, Address: 0x1ede0f4, Func Offset: 0x224
	// Line 1275, Address: 0x1ede0fc, Func Offset: 0x22c
	// Line 1276, Address: 0x1ede104, Func Offset: 0x234
	// Line 1280, Address: 0x1ede108, Func Offset: 0x238
	// Line 1281, Address: 0x1ede110, Func Offset: 0x240
	// Line 1282, Address: 0x1ede11c, Func Offset: 0x24c
	// Line 1281, Address: 0x1ede120, Func Offset: 0x250
	// Line 1282, Address: 0x1ede124, Func Offset: 0x254
	// Line 1283, Address: 0x1ede134, Func Offset: 0x264
	// Line 1285, Address: 0x1ede13c, Func Offset: 0x26c
	// Line 1286, Address: 0x1ede148, Func Offset: 0x278
	// Line 1287, Address: 0x1ede154, Func Offset: 0x284
	// Line 1288, Address: 0x1ede158, Func Offset: 0x288
	// Line 1292, Address: 0x1ede178, Func Offset: 0x2a8
	// Line 1294, Address: 0x1ede180, Func Offset: 0x2b0
	// Line 1295, Address: 0x1ede1a0, Func Offset: 0x2d0
	// Line 1297, Address: 0x1ede1b8, Func Offset: 0x2e8
	// Line 1307, Address: 0x1ede1c4, Func Offset: 0x2f4
	// Line 1308, Address: 0x1ede1d0, Func Offset: 0x300
	// Func End, Address: 0x1ede1f0, Func Offset: 0x320
}

// 
// Start address: 0x1ede1f0
void init_ErodeCrackWork()
{
	// Line 1315, Address: 0x1ede1f0, Func Offset: 0
	// Line 1319, Address: 0x1ede1f4, Func Offset: 0x4
	// Line 1315, Address: 0x1ede1fc, Func Offset: 0xc
	// Line 1319, Address: 0x1ede200, Func Offset: 0x10
	// Line 1322, Address: 0x1ede210, Func Offset: 0x20
	// Line 1321, Address: 0x1ede214, Func Offset: 0x24
	// Line 1322, Address: 0x1ede21c, Func Offset: 0x2c
	// Line 1323, Address: 0x1ede228, Func Offset: 0x38
	// Func End, Address: 0x1ede234, Func Offset: 0x44
}

// 
// Start address: 0x1ede240
void init_InstList(ErodeCrackWork* pW)
{
	int InstNo;
	ErodeCrack_EffInstance* pInst;
	// Line 1335, Address: 0x1ede240, Func Offset: 0
	// Line 1338, Address: 0x1ede244, Func Offset: 0x4
	// Line 1335, Address: 0x1ede248, Func Offset: 0x8
	// Line 1338, Address: 0x1ede24c, Func Offset: 0xc
	// Line 1335, Address: 0x1ede250, Func Offset: 0x10
	// Line 1338, Address: 0x1ede254, Func Offset: 0x14
	// Line 1335, Address: 0x1ede258, Func Offset: 0x18
	// Line 1336, Address: 0x1ede264, Func Offset: 0x24
	// Line 1338, Address: 0x1ede27c, Func Offset: 0x3c
	// Line 1343, Address: 0x1ede280, Func Offset: 0x40
	// Line 1344, Address: 0x1ede284, Func Offset: 0x44
	// Line 1343, Address: 0x1ede288, Func Offset: 0x48
	// Line 1340, Address: 0x1ede28c, Func Offset: 0x4c
	// Line 1344, Address: 0x1ede290, Func Offset: 0x50
	// Line 1343, Address: 0x1ede294, Func Offset: 0x54
	// Line 1344, Address: 0x1ede298, Func Offset: 0x58
	// Line 1345, Address: 0x1ede304, Func Offset: 0xc4
	// Line 1346, Address: 0x1ede318, Func Offset: 0xd8
	// Func End, Address: 0x1ede320, Func Offset: 0xe0
}

// 
// Start address: 0x1ede320
void delete_effect_instance(ErodeCrack_EffInstance* pInst)
{
	// Line 1358, Address: 0x1ede320, Func Offset: 0
	// Line 1359, Address: 0x1ede328, Func Offset: 0x8
	// Line 1360, Address: 0x1ede370, Func Offset: 0x50
	// Line 1361, Address: 0x1ede3c8, Func Offset: 0xa8
	// Func End, Address: 0x1ede3d0, Func Offset: 0xb0
}

// 
// Start address: 0x1ede3d0
void renewal_line_data(ErodeCrack_Line* pLine, int LineNo, ErodeCrack_CoreData* pCore)
{
	int VtNo;
	ErodeCrack_Vertex* pVt;
	float CoreEdgeRadius;
	float VtRadius;
	float DiffTgtVal;
	float MvVal;
	float Core2LineEndRate;
	float wave_seed_len;
	float wave_add_len;
	float wave_add_q;
	float len_atk;
	float len_graw;
	float graw_end_rate;
	// Line 1372, Address: 0x1ede3d0, Func Offset: 0
	// Line 1380, Address: 0x1ede3fc, Func Offset: 0x2c
	// Line 1392, Address: 0x1ede408, Func Offset: 0x38
	// Line 1380, Address: 0x1ede410, Func Offset: 0x40
	// Line 1392, Address: 0x1ede414, Func Offset: 0x44
	// Line 1393, Address: 0x1ede420, Func Offset: 0x50
	// Line 1394, Address: 0x1ede424, Func Offset: 0x54
	// Line 1395, Address: 0x1ede430, Func Offset: 0x60
	// Line 1396, Address: 0x1ede43c, Func Offset: 0x6c
	// Line 1401, Address: 0x1ede440, Func Offset: 0x70
	// Line 1405, Address: 0x1ede450, Func Offset: 0x80
	// Line 1409, Address: 0x1ede458, Func Offset: 0x88
	// Line 1413, Address: 0x1ede484, Func Offset: 0xb4
	// Line 1415, Address: 0x1ede48c, Func Offset: 0xbc
	// Line 1416, Address: 0x1ede490, Func Offset: 0xc0
	// Line 1418, Address: 0x1ede4a4, Func Offset: 0xd4
	// Line 1420, Address: 0x1ede4d8, Func Offset: 0x108
	// Line 1421, Address: 0x1ede4e0, Func Offset: 0x110
	// Line 1423, Address: 0x1ede524, Func Offset: 0x154
	// Line 1426, Address: 0x1ede528, Func Offset: 0x158
	// Line 1428, Address: 0x1ede534, Func Offset: 0x164
	// Line 1430, Address: 0x1ede54c, Func Offset: 0x17c
	// Line 1433, Address: 0x1ede558, Func Offset: 0x188
	// Line 1435, Address: 0x1ede560, Func Offset: 0x190
	// Line 1433, Address: 0x1ede564, Func Offset: 0x194
	// Line 1435, Address: 0x1ede570, Func Offset: 0x1a0
	// Line 1433, Address: 0x1ede574, Func Offset: 0x1a4
	// Line 1435, Address: 0x1ede578, Func Offset: 0x1a8
	// Line 1433, Address: 0x1ede57c, Func Offset: 0x1ac
	// Line 1435, Address: 0x1ede580, Func Offset: 0x1b0
	// Line 1439, Address: 0x1ede590, Func Offset: 0x1c0
	// Line 1440, Address: 0x1ede59c, Func Offset: 0x1cc
	// Line 1441, Address: 0x1ede5b8, Func Offset: 0x1e8
	// Line 1442, Address: 0x1ede5c0, Func Offset: 0x1f0
	// Line 1447, Address: 0x1ede5e0, Func Offset: 0x210
	// Line 1455, Address: 0x1ede5e8, Func Offset: 0x218
	// Line 1453, Address: 0x1ede5fc, Func Offset: 0x22c
	// Line 1455, Address: 0x1ede600, Func Offset: 0x230
	// Line 1453, Address: 0x1ede630, Func Offset: 0x260
	// Line 1455, Address: 0x1ede634, Func Offset: 0x264
	// Line 1456, Address: 0x1ede638, Func Offset: 0x268
	// Line 1455, Address: 0x1ede63c, Func Offset: 0x26c
	// Line 1456, Address: 0x1ede640, Func Offset: 0x270
	// Line 1455, Address: 0x1ede644, Func Offset: 0x274
	// Line 1456, Address: 0x1ede650, Func Offset: 0x280
	// Line 1464, Address: 0x1ede658, Func Offset: 0x288
	// Line 1465, Address: 0x1ede66c, Func Offset: 0x29c
	// Line 1466, Address: 0x1ede670, Func Offset: 0x2a0
	// Line 1467, Address: 0x1ede690, Func Offset: 0x2c0
	// Line 1470, Address: 0x1ede6b0, Func Offset: 0x2e0
	// Line 1472, Address: 0x1ede6cc, Func Offset: 0x2fc
	// Line 1473, Address: 0x1ede6d8, Func Offset: 0x308
	// Line 1474, Address: 0x1ede72c, Func Offset: 0x35c
	// Line 1473, Address: 0x1ede730, Func Offset: 0x360
	// Line 1474, Address: 0x1ede73c, Func Offset: 0x36c
	// Line 1473, Address: 0x1ede740, Func Offset: 0x370
	// Line 1474, Address: 0x1ede744, Func Offset: 0x374
	// Line 1473, Address: 0x1ede74c, Func Offset: 0x37c
	// Line 1474, Address: 0x1ede754, Func Offset: 0x384
	// Line 1475, Address: 0x1ede78c, Func Offset: 0x3bc
	// Line 1474, Address: 0x1ede790, Func Offset: 0x3c0
	// Line 1475, Address: 0x1ede794, Func Offset: 0x3c4
	// Line 1476, Address: 0x1ede798, Func Offset: 0x3c8
	// Line 1475, Address: 0x1ede79c, Func Offset: 0x3cc
	// Line 1481, Address: 0x1ede7a0, Func Offset: 0x3d0
	// Line 1482, Address: 0x1ede7bc, Func Offset: 0x3ec
	// Line 1483, Address: 0x1ede7d0, Func Offset: 0x400
	// Line 1484, Address: 0x1ede7d8, Func Offset: 0x408
	// Line 1483, Address: 0x1ede7dc, Func Offset: 0x40c
	// Line 1484, Address: 0x1ede7e0, Func Offset: 0x410
	// Line 1485, Address: 0x1ede7f4, Func Offset: 0x424
	// Func End, Address: 0x1ede81c, Func Offset: 0x44c
}

// 
// Start address: 0x1ede820
void renewal_calc_ErodeCrack_MeatCore(ErodeCrack_MeatCore* MeatCoreAry, ErodeCrack_CoreData* pCore, ErodeCrack_Line* LineAry, int LineNum)
{
	int MeatCoreNo;
	float SideDir[4];
	ErodeCrack_MeatCore* pMeat;
	float TmpVec[4];
	float Rate;
	float TmpVec[4];
	float Rate;
	float TmpVec[4];
	float Rate;
	float TmpVec[4];
	float Rate;
	float Vec1[4];
	float Vec2[4];
	float Core2LineVec[4];
	float Core2LineDir[4];
	float Vec[4];
	int Line0No;
	int Line1No;
	float TmpVec[4];
	float Rate;
	float TmpVec[4];
	float Rate;
	float TmpVec[4];
	float Rate;
	float TmpVec[4];
	float Rate;
	// Line 1496, Address: 0x1ede820, Func Offset: 0
	// Line 1505, Address: 0x1ede828, Func Offset: 0x8
	// Line 1496, Address: 0x1ede82c, Func Offset: 0xc
	// Line 1502, Address: 0x1ede850, Func Offset: 0x30
	// Line 1503, Address: 0x1ede858, Func Offset: 0x38
	// Line 1504, Address: 0x1ede860, Func Offset: 0x40
	// Line 1505, Address: 0x1ede86c, Func Offset: 0x4c
	// Line 1507, Address: 0x1ede890, Func Offset: 0x70
	// Line 1509, Address: 0x1ede9e0, Func Offset: 0x1c0
	// Line 1521, Address: 0x1ede9ec, Func Offset: 0x1cc
	// Line 1523, Address: 0x1ede9f4, Func Offset: 0x1d4
	// Line 1524, Address: 0x1edea98, Func Offset: 0x278
	// Line 1525, Address: 0x1edeb48, Func Offset: 0x328
	// Line 1526, Address: 0x1edebf8, Func Offset: 0x3d8
	// Line 1528, Address: 0x1edeca8, Func Offset: 0x488
	// Line 1535, Address: 0x1edecb0, Func Offset: 0x490
	// Line 1537, Address: 0x1edecc8, Func Offset: 0x4a8
	// Line 1538, Address: 0x1ededa0, Func Offset: 0x580
	// Line 1539, Address: 0x1ededbc, Func Offset: 0x59c
	// Line 1540, Address: 0x1edee94, Func Offset: 0x674
	// Line 1542, Address: 0x1edeeb0, Func Offset: 0x690
	// Line 1543, Address: 0x1edeed0, Func Offset: 0x6b0
	// Line 1545, Address: 0x1edeefc, Func Offset: 0x6dc
	// Line 1546, Address: 0x1edef20, Func Offset: 0x700
	// Line 1549, Address: 0x1edef38, Func Offset: 0x718
	// Line 1550, Address: 0x1edef5c, Func Offset: 0x73c
	// Line 1552, Address: 0x1edef78, Func Offset: 0x758
	// Line 1553, Address: 0x1edef98, Func Offset: 0x778
	// Line 1556, Address: 0x1edefb8, Func Offset: 0x798
	// Line 1558, Address: 0x1edf0a0, Func Offset: 0x880
	// Line 1561, Address: 0x1edf188, Func Offset: 0x968
	// Line 1562, Address: 0x1edf19c, Func Offset: 0x97c
	// Func End, Address: 0x1edf1cc, Func Offset: 0x9ac
}

// 
// Start address: 0x1edf1d0
void ErodeCrack3LDK_DrawData(sfObj* pObj)
{
	ListNode* pInstNode;
	ErodeCrack_EffInstance* pInst;
	int LineNo;
	_anon2* pPk;
	_anon2* pPkTop;
	int qwc;
	unsigned char AMinusCol[4];
	unsigned char ABrendVtCol[4];
	// Line 1571, Address: 0x1edf1d0, Func Offset: 0
	// Line 1575, Address: 0x1edf1ec, Func Offset: 0x1c
	// Line 1579, Address: 0x1edf1f8, Func Offset: 0x28
	// Line 1588, Address: 0x1edf208, Func Offset: 0x38
	// Line 1589, Address: 0x1edf20c, Func Offset: 0x3c
	// Line 1597, Address: 0x1edf218, Func Offset: 0x48
	// Line 1589, Address: 0x1edf21c, Func Offset: 0x4c
	// Line 1597, Address: 0x1edf228, Func Offset: 0x58
	// Line 1589, Address: 0x1edf22c, Func Offset: 0x5c
	// Line 1597, Address: 0x1edf230, Func Offset: 0x60
	// Line 1603, Address: 0x1edf238, Func Offset: 0x68
	// Line 1606, Address: 0x1edf250, Func Offset: 0x80
	// Line 1611, Address: 0x1edf298, Func Offset: 0xc8
	// Line 1614, Address: 0x1edf2b0, Func Offset: 0xe0
	// Line 1617, Address: 0x1edf2c0, Func Offset: 0xf0
	// Line 1622, Address: 0x1edf308, Func Offset: 0x138
	// Line 1628, Address: 0x1edf320, Func Offset: 0x150
	// Line 1632, Address: 0x1edf33c, Func Offset: 0x16c
	// Line 1636, Address: 0x1edf358, Func Offset: 0x188
	// Line 1632, Address: 0x1edf35c, Func Offset: 0x18c
	// Line 1636, Address: 0x1edf360, Func Offset: 0x190
	// Line 1637, Address: 0x1edf36c, Func Offset: 0x19c
	// Line 1636, Address: 0x1edf370, Func Offset: 0x1a0
	// Line 1641, Address: 0x1edf374, Func Offset: 0x1a4
	// Line 1642, Address: 0x1edf38c, Func Offset: 0x1bc
	// Line 1641, Address: 0x1edf390, Func Offset: 0x1c0
	// Line 1642, Address: 0x1edf398, Func Offset: 0x1c8
	// Line 1643, Address: 0x1edf39c, Func Offset: 0x1cc
	// Line 1647, Address: 0x1edf3a0, Func Offset: 0x1d0
	// Line 1648, Address: 0x1edf3b4, Func Offset: 0x1e4
	// Line 1649, Address: 0x1edf3bc, Func Offset: 0x1ec
	// Line 1650, Address: 0x1edf3c4, Func Offset: 0x1f4
	// Line 1651, Address: 0x1edf3d4, Func Offset: 0x204
	// Line 1652, Address: 0x1edf3d8, Func Offset: 0x208
	// Line 1654, Address: 0x1edf3e8, Func Offset: 0x218
	// Line 1655, Address: 0x1edf3f8, Func Offset: 0x228
	// Func End, Address: 0x1edf418, Func Offset: 0x248
}

// 
// Start address: 0x1edf420
_anon2* draw_erode_bg(_anon2* pPk, ErodeCrack_EffInstance* pInst, unsigned long AlphaReg, unsigned char VtAlpha)
{
	_anon2* pSavePk;
	_anon2* pGifTag;
	unsigned long Tex0Reg;
	int VtNo;
	float KeepVt0_Pos[4];
	_anon1* pTex;
	unsigned int cbp;
	float Pos[4];
	float ScrPos[4];
	float fs;
	float ft;
	float inv_w;
	unsigned int fog_val;
	float radius;
	float ang;
	float Vec[4];
	// Line 1666, Address: 0x1edf420, Func Offset: 0
	// Line 1675, Address: 0x1edf424, Func Offset: 0x4
	// Line 1666, Address: 0x1edf428, Func Offset: 0x8
	// Line 1675, Address: 0x1edf450, Func Offset: 0x30
	// Line 1666, Address: 0x1edf454, Func Offset: 0x34
	// Line 1675, Address: 0x1edf458, Func Offset: 0x38
	// Line 1680, Address: 0x1edf498, Func Offset: 0x78
	// Line 1678, Address: 0x1edf49c, Func Offset: 0x7c
	// Line 1680, Address: 0x1edf4a0, Func Offset: 0x80
	// Line 1686, Address: 0x1edf4a4, Func Offset: 0x84
	// Line 1680, Address: 0x1edf4a8, Func Offset: 0x88
	// Line 1681, Address: 0x1edf4b0, Func Offset: 0x90
	// Line 1680, Address: 0x1edf4b4, Func Offset: 0x94
	// Line 1681, Address: 0x1edf4b8, Func Offset: 0x98
	// Line 1690, Address: 0x1edf4bc, Func Offset: 0x9c
	// Line 1682, Address: 0x1edf4c0, Func Offset: 0xa0
	// Line 1690, Address: 0x1edf4c4, Func Offset: 0xa4
	// Line 1685, Address: 0x1edf4c8, Func Offset: 0xa8
	// Line 1690, Address: 0x1edf4cc, Func Offset: 0xac
	// Line 1686, Address: 0x1edf4d0, Func Offset: 0xb0
	// Line 1690, Address: 0x1edf4d4, Func Offset: 0xb4
	// Line 1687, Address: 0x1edf4d8, Func Offset: 0xb8
	// Line 1690, Address: 0x1edf4dc, Func Offset: 0xbc
	// Line 1706, Address: 0x1edf4e0, Func Offset: 0xc0
	// Line 1690, Address: 0x1edf4e4, Func Offset: 0xc4
	// Line 1691, Address: 0x1edf4ec, Func Offset: 0xcc
	// Line 1695, Address: 0x1edf4f4, Func Offset: 0xd4
	// Line 1692, Address: 0x1edf4f8, Func Offset: 0xd8
	// Line 1696, Address: 0x1edf4fc, Func Offset: 0xdc
	// Line 1695, Address: 0x1edf500, Func Offset: 0xe0
	// Line 1696, Address: 0x1edf504, Func Offset: 0xe4
	// Line 1710, Address: 0x1edf508, Func Offset: 0xe8
	// Line 1697, Address: 0x1edf50c, Func Offset: 0xec
	// Line 1710, Address: 0x1edf510, Func Offset: 0xf0
	// Line 1700, Address: 0x1edf514, Func Offset: 0xf4
	// Line 1711, Address: 0x1edf518, Func Offset: 0xf8
	// Line 1701, Address: 0x1edf51c, Func Offset: 0xfc
	// Line 1717, Address: 0x1edf520, Func Offset: 0x100
	// Line 1702, Address: 0x1edf524, Func Offset: 0x104
	// Line 1717, Address: 0x1edf528, Func Offset: 0x108
	// Line 1705, Address: 0x1edf52c, Func Offset: 0x10c
	// Line 1717, Address: 0x1edf530, Func Offset: 0x110
	// Line 1706, Address: 0x1edf534, Func Offset: 0x114
	// Line 1721, Address: 0x1edf538, Func Offset: 0x118
	// Line 1707, Address: 0x1edf53c, Func Offset: 0x11c
	// Line 1724, Address: 0x1edf540, Func Offset: 0x120
	// Line 1710, Address: 0x1edf544, Func Offset: 0x124
	// Line 1711, Address: 0x1edf548, Func Offset: 0x128
	// Line 1712, Address: 0x1edf54c, Func Offset: 0x12c
	// Line 1717, Address: 0x1edf550, Func Offset: 0x130
	// Line 1716, Address: 0x1edf554, Func Offset: 0x134
	// Line 1721, Address: 0x1edf558, Func Offset: 0x138
	// Line 1724, Address: 0x1edf55c, Func Offset: 0x13c
	// Line 1736, Address: 0x1edf568, Func Offset: 0x148
	// Line 1738, Address: 0x1edf574, Func Offset: 0x154
	// Line 1739, Address: 0x1edf578, Func Offset: 0x158
	// Line 1738, Address: 0x1edf57c, Func Offset: 0x15c
	// Line 1739, Address: 0x1edf580, Func Offset: 0x160
	// Line 1738, Address: 0x1edf584, Func Offset: 0x164
	// Line 1739, Address: 0x1edf588, Func Offset: 0x168
	// Line 1740, Address: 0x1edf58c, Func Offset: 0x16c
	// Line 1741, Address: 0x1edf594, Func Offset: 0x174
	// Line 1747, Address: 0x1edf5a0, Func Offset: 0x180
	// Line 1749, Address: 0x1edf5cc, Func Offset: 0x1ac
	// Line 1750, Address: 0x1edf5f0, Func Offset: 0x1d0
	// Line 1752, Address: 0x1edf610, Func Offset: 0x1f0
	// Line 1750, Address: 0x1edf614, Func Offset: 0x1f4
	// Line 1752, Address: 0x1edf620, Func Offset: 0x200
	// Line 1753, Address: 0x1edf628, Func Offset: 0x208
	// Line 1754, Address: 0x1edf634, Func Offset: 0x214
	// Line 1755, Address: 0x1edf640, Func Offset: 0x220
	// Line 1756, Address: 0x1edf648, Func Offset: 0x228
	// Line 1755, Address: 0x1edf64c, Func Offset: 0x22c
	// Line 1756, Address: 0x1edf664, Func Offset: 0x244
	// Line 1755, Address: 0x1edf668, Func Offset: 0x248
	// Line 1756, Address: 0x1edf66c, Func Offset: 0x24c
	// Line 1757, Address: 0x1edf684, Func Offset: 0x264
	// Line 1758, Address: 0x1edf6a0, Func Offset: 0x280
	// Line 1759, Address: 0x1edf6a8, Func Offset: 0x288
	// Line 1763, Address: 0x1edf6c0, Func Offset: 0x2a0
	// Line 1765, Address: 0x1edf6f8, Func Offset: 0x2d8
	// Line 1766, Address: 0x1edf714, Func Offset: 0x2f4
	// Line 1767, Address: 0x1edf71c, Func Offset: 0x2fc
	// Line 1768, Address: 0x1edf720, Func Offset: 0x300
	// Line 1769, Address: 0x1edf728, Func Offset: 0x308
	// Line 1768, Address: 0x1edf72c, Func Offset: 0x30c
	// Line 1769, Address: 0x1edf730, Func Offset: 0x310
	// Line 1768, Address: 0x1edf734, Func Offset: 0x314
	// Line 1769, Address: 0x1edf738, Func Offset: 0x318
	// Line 1770, Address: 0x1edf750, Func Offset: 0x330
	// Line 1773, Address: 0x1edf798, Func Offset: 0x378
	// Line 1779, Address: 0x1edf7a0, Func Offset: 0x380
	// Line 1777, Address: 0x1edf7a4, Func Offset: 0x384
	// Line 1783, Address: 0x1edf7a8, Func Offset: 0x388
	// Line 1779, Address: 0x1edf7ac, Func Offset: 0x38c
	// Line 1784, Address: 0x1edf7b0, Func Offset: 0x390
	// Line 1778, Address: 0x1edf7b4, Func Offset: 0x394
	// Line 1785, Address: 0x1edf7b8, Func Offset: 0x398
	// Line 1779, Address: 0x1edf7bc, Func Offset: 0x39c
	// Line 1786, Address: 0x1edf7c0, Func Offset: 0x3a0
	// Line 1780, Address: 0x1edf7c4, Func Offset: 0x3a4
	// Line 1790, Address: 0x1edf7c8, Func Offset: 0x3a8
	// Line 1783, Address: 0x1edf7cc, Func Offset: 0x3ac
	// Line 1784, Address: 0x1edf7d0, Func Offset: 0x3b0
	// Line 1785, Address: 0x1edf7d4, Func Offset: 0x3b4
	// Line 1786, Address: 0x1edf7d8, Func Offset: 0x3b8
	// Line 1787, Address: 0x1edf7dc, Func Offset: 0x3bc
	// Line 1790, Address: 0x1edf7e0, Func Offset: 0x3c0
	// Line 1791, Address: 0x1edf7ec, Func Offset: 0x3cc
	// Line 1793, Address: 0x1edf7f0, Func Offset: 0x3d0
	// Line 1791, Address: 0x1edf7f4, Func Offset: 0x3d4
	// Line 1792, Address: 0x1edf7f8, Func Offset: 0x3d8
	// Line 1793, Address: 0x1edf7fc, Func Offset: 0x3dc
	// Line 1794, Address: 0x1edf810, Func Offset: 0x3f0
	// Line 1796, Address: 0x1edf838, Func Offset: 0x418
	// Line 1794, Address: 0x1edf83c, Func Offset: 0x41c
	// Line 1798, Address: 0x1edf850, Func Offset: 0x430
	// Func End, Address: 0x1edf87c, Func Offset: 0x45c
}

// 
// Start address: 0x1edf880
_anon2* draw_data_ErodeCrack_MeatCore(_anon2* pPk, ErodeCrack_EffInstance* pInst, unsigned long AlphaReg, unsigned char* VtCol, float* EmbossOfsVec)
{
	_anon2* pGifTag;
	unsigned long Tex0Reg;
	int MeatCoreNo;
	_anon1* pTex;
	unsigned int cbp;
	// Line 1815, Address: 0x1edf880, Func Offset: 0
	// Line 1825, Address: 0x1edf884, Func Offset: 0x4
	// Line 1815, Address: 0x1edf888, Func Offset: 0x8
	// Line 1825, Address: 0x1edf8bc, Func Offset: 0x3c
	// Line 1830, Address: 0x1edf8fc, Func Offset: 0x7c
	// Line 1831, Address: 0x1edf910, Func Offset: 0x90
	// Line 1835, Address: 0x1edf918, Func Offset: 0x98
	// Line 1836, Address: 0x1edf928, Func Offset: 0xa8
	// Line 1835, Address: 0x1edf92c, Func Offset: 0xac
	// Line 1836, Address: 0x1edf938, Func Offset: 0xb8
	// Line 1840, Address: 0x1edf93c, Func Offset: 0xbc
	// Line 1841, Address: 0x1edf948, Func Offset: 0xc8
	// Line 1840, Address: 0x1edf94c, Func Offset: 0xcc
	// Line 1856, Address: 0x1edf960, Func Offset: 0xe0
	// Line 1840, Address: 0x1edf964, Func Offset: 0xe4
	// Line 1845, Address: 0x1edf96c, Func Offset: 0xec
	// Line 1840, Address: 0x1edf970, Func Offset: 0xf0
	// Line 1846, Address: 0x1edf974, Func Offset: 0xf4
	// Line 1841, Address: 0x1edf978, Func Offset: 0xf8
	// Line 1851, Address: 0x1edf97c, Func Offset: 0xfc
	// Line 1845, Address: 0x1edf980, Func Offset: 0x100
	// Line 1846, Address: 0x1edf984, Func Offset: 0x104
	// Line 1860, Address: 0x1edf988, Func Offset: 0x108
	// Line 1847, Address: 0x1edf98c, Func Offset: 0x10c
	// Line 1860, Address: 0x1edf990, Func Offset: 0x110
	// Line 1850, Address: 0x1edf994, Func Offset: 0x114
	// Line 1868, Address: 0x1edf998, Func Offset: 0x118
	// Line 1851, Address: 0x1edf99c, Func Offset: 0x11c
	// Line 1868, Address: 0x1edf9a0, Func Offset: 0x120
	// Line 1855, Address: 0x1edf9a4, Func Offset: 0x124
	// Line 1868, Address: 0x1edf9a8, Func Offset: 0x128
	// Line 1856, Address: 0x1edf9ac, Func Offset: 0x12c
	// Line 1862, Address: 0x1edf9b0, Func Offset: 0x130
	// Line 1857, Address: 0x1edf9b4, Func Offset: 0x134
	// Line 1872, Address: 0x1edf9b8, Func Offset: 0x138
	// Line 1860, Address: 0x1edf9bc, Func Offset: 0x13c
	// Line 1867, Address: 0x1edf9c0, Func Offset: 0x140
	// Line 1862, Address: 0x1edf9c4, Func Offset: 0x144
	// Line 1875, Address: 0x1edf9c8, Func Offset: 0x148
	// Line 1868, Address: 0x1edf9cc, Func Offset: 0x14c
	// Line 1872, Address: 0x1edf9d0, Func Offset: 0x150
	// Line 1875, Address: 0x1edf9d4, Func Offset: 0x154
	// Line 1879, Address: 0x1edf9f0, Func Offset: 0x170
	// Line 1880, Address: 0x1edfa08, Func Offset: 0x188
	// Line 1882, Address: 0x1edfa20, Func Offset: 0x1a0
	// Line 1883, Address: 0x1edfa4c, Func Offset: 0x1cc
	// Line 1882, Address: 0x1edfa50, Func Offset: 0x1d0
	// Line 1885, Address: 0x1edfa64, Func Offset: 0x1e4
	// Func End, Address: 0x1edfa8c, Func Offset: 0x20c
}

// 
// Start address: 0x1edfa90
_anon2* mk_packet_of_one_meat_core(_anon2* pPk, ErodeCrack_MeatCore* pMeatCore, unsigned char* VtCol, float* EmbossOfsVec)
{
	int VtNo;
	_anon2* pSavePk;
	float Pos[4];
	float ScrPos[4];
	float fs;
	float ft;
	float inv_w;
	unsigned int fog_val;
	float q_val;
	// Line 1907, Address: 0x1edfa90, Func Offset: 0
	// Line 1896, Address: 0x1edfa94, Func Offset: 0x4
	// Line 1907, Address: 0x1edfa98, Func Offset: 0x8
	// Line 1896, Address: 0x1edfaa4, Func Offset: 0x14
	// Line 1907, Address: 0x1edfaa8, Func Offset: 0x18
	// Line 1898, Address: 0x1edfaac, Func Offset: 0x1c
	// Line 1907, Address: 0x1edfab0, Func Offset: 0x20
	// Line 1916, Address: 0x1edfb00, Func Offset: 0x70
	// Line 1917, Address: 0x1edfb0c, Func Offset: 0x7c
	// Line 1920, Address: 0x1edfb24, Func Offset: 0x94
	// Line 1921, Address: 0x1edfb28, Func Offset: 0x98
	// Line 1923, Address: 0x1edfb2c, Func Offset: 0x9c
	// Line 1924, Address: 0x1edfb34, Func Offset: 0xa4
	// Line 1925, Address: 0x1edfb38, Func Offset: 0xa8
	// Line 1926, Address: 0x1edfb3c, Func Offset: 0xac
	// Line 1927, Address: 0x1edfb40, Func Offset: 0xb0
	// Line 1929, Address: 0x1edfb48, Func Offset: 0xb8
	// Line 1930, Address: 0x1edfb4c, Func Offset: 0xbc
	// Line 1931, Address: 0x1edfb50, Func Offset: 0xc0
	// Line 1933, Address: 0x1edfb58, Func Offset: 0xc8
	// Line 1934, Address: 0x1edfb60, Func Offset: 0xd0
	// Line 1936, Address: 0x1edfb64, Func Offset: 0xd4
	// Line 1937, Address: 0x1edfb68, Func Offset: 0xd8
	// Line 1938, Address: 0x1edfb70, Func Offset: 0xe0
	// Line 1939, Address: 0x1edfb84, Func Offset: 0xf4
	// Line 1940, Address: 0x1edfb88, Func Offset: 0xf8
	// Line 1942, Address: 0x1edfbb0, Func Offset: 0x120
	// Line 1943, Address: 0x1edfbc0, Func Offset: 0x130
	// Line 1945, Address: 0x1edfbc8, Func Offset: 0x138
	// Line 1946, Address: 0x1edfbd0, Func Offset: 0x140
	// Line 1947, Address: 0x1edfbe8, Func Offset: 0x158
	// Line 1950, Address: 0x1edfc20, Func Offset: 0x190
	// Line 1953, Address: 0x1edfc28, Func Offset: 0x198
	// Line 1954, Address: 0x1edfc38, Func Offset: 0x1a8
	// Line 1955, Address: 0x1edfc40, Func Offset: 0x1b0
	// Line 1956, Address: 0x1edfc48, Func Offset: 0x1b8
	// Line 1961, Address: 0x1edfc4c, Func Offset: 0x1bc
	// Line 1957, Address: 0x1edfc50, Func Offset: 0x1c0
	// Line 1961, Address: 0x1edfc54, Func Offset: 0x1c4
	// Line 1962, Address: 0x1edfc5c, Func Offset: 0x1cc
	// Line 1963, Address: 0x1edfc68, Func Offset: 0x1d8
	// Line 1964, Address: 0x1edfc74, Func Offset: 0x1e4
	// Line 1965, Address: 0x1edfc80, Func Offset: 0x1f0
	// Line 1968, Address: 0x1edfc84, Func Offset: 0x1f4
	// Line 1969, Address: 0x1edfc90, Func Offset: 0x200
	// Line 1970, Address: 0x1edfca8, Func Offset: 0x218
	// Line 1971, Address: 0x1edfcb0, Func Offset: 0x220
	// Line 1972, Address: 0x1edfcb4, Func Offset: 0x224
	// Line 1973, Address: 0x1edfcc4, Func Offset: 0x234
	// Line 1974, Address: 0x1edfcc8, Func Offset: 0x238
	// Func End, Address: 0x1edfcd4, Func Offset: 0x244
}

// 
// Start address: 0x1edfce0
_anon2* draw_one_crack_line(_anon2* pPk, ErodeCrack_Line* pLine0, ErodeCrack_Line* pLine1, unsigned long AlphaReg, float MkTestArefRate, float* EmbossOfsVec)
{
	int VtNo;
	ErodeCrack_Vertex* pVt0;
	ErodeCrack_Vertex* pVt1;
	_anon2* pSavePk;
	_anon2* pGifTag;
	unsigned int flags;
	unsigned long Tex0Reg;
	_anon1* pTex;
	unsigned int cbp;
	float rate;
	int aref;
	int AryNo;
	ErodeCrack_Vertex* pVt;
	float Pos[4];
	float ScrPos[4];
	float inv_w;
	unsigned int fog_val;
	float MulST;
	// Line 1995, Address: 0x1edfce0, Func Offset: 0
	// Line 2004, Address: 0x1edfce4, Func Offset: 0x4
	// Line 1995, Address: 0x1edfce8, Func Offset: 0x8
	// Line 2004, Address: 0x1edfd20, Func Offset: 0x40
	// Line 2007, Address: 0x1edfd64, Func Offset: 0x84
	// Line 2008, Address: 0x1edfd74, Func Offset: 0x94
	// Line 2007, Address: 0x1edfd78, Func Offset: 0x98
	// Line 2008, Address: 0x1edfd7c, Func Offset: 0x9c
	// Line 2012, Address: 0x1edfd80, Func Offset: 0xa0
	// Line 2013, Address: 0x1edfd8c, Func Offset: 0xac
	// Line 2012, Address: 0x1edfd90, Func Offset: 0xb0
	// Line 2017, Address: 0x1edfda8, Func Offset: 0xc8
	// Line 2012, Address: 0x1edfdac, Func Offset: 0xcc
	// Line 2017, Address: 0x1edfdb0, Func Offset: 0xd0
	// Line 2012, Address: 0x1edfdb4, Func Offset: 0xd4
	// Line 2013, Address: 0x1edfdb8, Func Offset: 0xd8
	// Line 2017, Address: 0x1edfdbc, Func Offset: 0xdc
	// Line 2014, Address: 0x1edfdc4, Func Offset: 0xe4
	// Line 2017, Address: 0x1edfdc8, Func Offset: 0xe8
	// Line 2018, Address: 0x1edfdcc, Func Offset: 0xec
	// Line 2022, Address: 0x1edfdd4, Func Offset: 0xf4
	// Line 2019, Address: 0x1edfdd8, Func Offset: 0xf8
	// Line 2023, Address: 0x1edfddc, Func Offset: 0xfc
	// Line 2022, Address: 0x1edfde0, Func Offset: 0x100
	// Line 2028, Address: 0x1edfde4, Func Offset: 0x104
	// Line 2023, Address: 0x1edfde8, Func Offset: 0x108
	// Line 2033, Address: 0x1edfdec, Func Offset: 0x10c
	// Line 2039, Address: 0x1edfdf0, Func Offset: 0x110
	// Line 2024, Address: 0x1edfdf4, Func Offset: 0x114
	// Line 2039, Address: 0x1edfdf8, Func Offset: 0x118
	// Line 2027, Address: 0x1edfdfc, Func Offset: 0x11c
	// Line 2028, Address: 0x1edfe00, Func Offset: 0x120
	// Line 2039, Address: 0x1edfe04, Func Offset: 0x124
	// Line 2040, Address: 0x1edfe08, Func Offset: 0x128
	// Line 2029, Address: 0x1edfe0c, Func Offset: 0x12c
	// Line 2040, Address: 0x1edfe10, Func Offset: 0x130
	// Line 2032, Address: 0x1edfe14, Func Offset: 0x134
	// Line 2033, Address: 0x1edfe18, Func Offset: 0x138
	// Line 2034, Address: 0x1edfe1c, Func Offset: 0x13c
	// Line 2039, Address: 0x1edfe20, Func Offset: 0x140
	// Line 2040, Address: 0x1edfe28, Func Offset: 0x148
	// Line 2044, Address: 0x1edfe78, Func Offset: 0x198
	// Line 2040, Address: 0x1edfe7c, Func Offset: 0x19c
	// Line 2044, Address: 0x1edfe84, Func Offset: 0x1a4
	// Line 2040, Address: 0x1edfe88, Func Offset: 0x1a8
	// Line 2044, Address: 0x1edfe94, Func Offset: 0x1b4
	// Line 2040, Address: 0x1edfe9c, Func Offset: 0x1bc
	// Line 2044, Address: 0x1edfea0, Func Offset: 0x1c0
	// Line 2045, Address: 0x1edfebc, Func Offset: 0x1dc
	// Line 2046, Address: 0x1edfed0, Func Offset: 0x1f0
	// Line 2047, Address: 0x1edfee0, Func Offset: 0x200
	// Line 2063, Address: 0x1edfee8, Func Offset: 0x208
	// Line 2047, Address: 0x1edfeec, Func Offset: 0x20c
	// Line 2049, Address: 0x1edfef0, Func Offset: 0x210
	// Line 2047, Address: 0x1edfef4, Func Offset: 0x214
	// Line 2063, Address: 0x1edfef8, Func Offset: 0x218
	// Line 2047, Address: 0x1edfefc, Func Offset: 0x21c
	// Line 2063, Address: 0x1edff00, Func Offset: 0x220
	// Line 2047, Address: 0x1edff04, Func Offset: 0x224
	// Line 2063, Address: 0x1edff08, Func Offset: 0x228
	// Line 2047, Address: 0x1edff0c, Func Offset: 0x22c
	// Line 2056, Address: 0x1edff10, Func Offset: 0x230
	// Line 2049, Address: 0x1edff14, Func Offset: 0x234
	// Line 2056, Address: 0x1edff18, Func Offset: 0x238
	// Line 2050, Address: 0x1edff20, Func Offset: 0x240
	// Line 2056, Address: 0x1edff24, Func Offset: 0x244
	// Line 2060, Address: 0x1edff28, Func Offset: 0x248
	// Line 2055, Address: 0x1edff30, Func Offset: 0x250
	// Line 2063, Address: 0x1edff34, Func Offset: 0x254
	// Line 2061, Address: 0x1edff40, Func Offset: 0x260
	// Line 2063, Address: 0x1edff44, Func Offset: 0x264
	// Line 2068, Address: 0x1edffa0, Func Offset: 0x2c0
	// Line 2077, Address: 0x1edffa8, Func Offset: 0x2c8
	// Line 2078, Address: 0x1edffc0, Func Offset: 0x2e0
	// Line 2079, Address: 0x1edffc8, Func Offset: 0x2e8
	// Line 2080, Address: 0x1edffd8, Func Offset: 0x2f8
	// Line 2081, Address: 0x1edffe0, Func Offset: 0x300
	// Line 2083, Address: 0x1edffe8, Func Offset: 0x308
	// Line 2085, Address: 0x1ee0010, Func Offset: 0x330
	// Line 2086, Address: 0x1ee0020, Func Offset: 0x340
	// Line 2087, Address: 0x1ee0024, Func Offset: 0x344
	// Line 2088, Address: 0x1ee0028, Func Offset: 0x348
	// Line 2089, Address: 0x1ee0030, Func Offset: 0x350
	// Line 2090, Address: 0x1ee0048, Func Offset: 0x368
	// Line 2093, Address: 0x1ee0080, Func Offset: 0x3a0
	// Line 2094, Address: 0x1ee0084, Func Offset: 0x3a4
	// Line 2095, Address: 0x1ee0088, Func Offset: 0x3a8
	// Line 2096, Address: 0x1ee008c, Func Offset: 0x3ac
	// Line 2097, Address: 0x1ee0094, Func Offset: 0x3b4
	// Line 2098, Address: 0x1ee00a0, Func Offset: 0x3c0
	// Line 2099, Address: 0x1ee00a8, Func Offset: 0x3c8
	// Line 2100, Address: 0x1ee00c4, Func Offset: 0x3e4
	// Line 2101, Address: 0x1ee00c8, Func Offset: 0x3e8
	// Line 2102, Address: 0x1ee00d4, Func Offset: 0x3f4
	// Line 2103, Address: 0x1ee00d8, Func Offset: 0x3f8
	// Line 2106, Address: 0x1ee00dc, Func Offset: 0x3fc
	// Line 2107, Address: 0x1ee00e0, Func Offset: 0x400
	// Line 2108, Address: 0x1ee00e4, Func Offset: 0x404
	// Line 2109, Address: 0x1ee00e8, Func Offset: 0x408
	// Line 2110, Address: 0x1ee00ec, Func Offset: 0x40c
	// Line 2113, Address: 0x1ee00f0, Func Offset: 0x410
	// Line 2114, Address: 0x1ee00fc, Func Offset: 0x41c
	// Line 2115, Address: 0x1ee0110, Func Offset: 0x430
	// Line 2116, Address: 0x1ee0118, Func Offset: 0x438
	// Line 2117, Address: 0x1ee011c, Func Offset: 0x43c
	// Line 2118, Address: 0x1ee0134, Func Offset: 0x454
	// Line 2120, Address: 0x1ee014c, Func Offset: 0x46c
	// Line 2122, Address: 0x1ee0178, Func Offset: 0x498
	// Line 2120, Address: 0x1ee017c, Func Offset: 0x49c
	// Line 2123, Address: 0x1ee0190, Func Offset: 0x4b0
	// Func End, Address: 0x1ee01bc, Func Offset: 0x4dc
}

