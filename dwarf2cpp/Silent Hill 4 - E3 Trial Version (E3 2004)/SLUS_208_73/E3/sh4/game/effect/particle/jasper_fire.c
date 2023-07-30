typedef struct FireSklPos;
typedef struct _anon0;
typedef struct sgAnime;
typedef struct sgBone;
typedef enum _cam3Step : unsigned char;
typedef struct sgIKHandle;
typedef struct _cam3Work;
typedef struct sfObj;
typedef union _anon1;
typedef struct sfCharacter;
typedef struct FireWork;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgSVModel;
typedef struct _anon2;

typedef void(*type_3)(_anon0*, int, int, float*);
typedef void(*type_4)();
typedef void(*type_7)(sgAnime*, int);
typedef void(*type_9)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef void(*type_14)(sfObj*);
typedef sgIKSolveResult(*type_24)();

typedef float type_0[4][4];
typedef float type_1[4];
typedef float type_2[4];
typedef void(*type_5)()[2];
typedef void* type_6[4];
typedef _anon1 type_8[256];
typedef unsigned char type_10[4];
typedef FireSklPos type_11[3];
typedef void(*type_13)(sfObj*)[3];
typedef short type_15[2];
typedef unsigned short type_16[2];
typedef char type_17[4];
typedef unsigned char type_18[4];
typedef FireSklPos type_19[5];
typedef float type_20[1];
typedef int type_21[1];
typedef float type_22[4][2];
typedef float type_23[4];
typedef FireSklPos type_25[13];

struct FireSklPos
{
	float LocalPos[4];
	short BoneNo;
	float FireHeight;
	float FireWidth;
	float ChgColTime;
	FireWork Work;
};

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
};

struct sgAnime
{
	void* play_data[4];
	sgBone* transforms;
	int n_transforms;
	sgIKHandle* ik_handles;
	sgBone* object_space;
	void(*post_func)(sgAnime*, int);
	float* reals;
	int n_reals;
	float vectors[4];
	int n_vectors;
	int current_time;
	int time_add;
	unsigned char play_status[4];
	unsigned short flag;
	unsigned short construct_check;
};

struct sgBone
{
	float rot[4];
	float trans[4];
	float scale[4];
	float abs_rot[4];
	float abs_trans[4];
	sgBone* parent;
	sgBone* child_list;
	sgBone* child_sibling;
	unsigned short last;
	unsigned short flag;
	float partly_blend_rate;
};

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
};

struct sgIKHandle
{
	float acceleration[4][2];
	float damping_ratio;
	sgBone* bone;
	sgBone* start;
	sgBone* end;
	sgIKSolveResult(*solver)();
	sgIKSolveResult solve_result;
	float reach_constrain;
	float close_constrain;
	sgIKHandle* next;
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon2 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon2
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon0*, int, int, float*);
	int equip_flag;
};

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
FireSklPos SklPosData1[13];
FireSklPos SklPosData2[3];
FireSklPos FloorPosData[5];
_cam3Work cam3_work;

void JasperFire_FromBody_Genarate(int DemoFlag);
void JasperFire_FromBody_PowerUp(int DemoFlag);
void JasperFire_FromFloor_Generate(int DemoFlag);
void JasperFire_FromBody_Renewal();
void TransLocal2WldPos_ByCharaBoneData(float* WldPos, float* LclPos, sfCharacter* pChr, int BoneNo, float FloorY);

// 
// Start address: 0x2eb2a0
void JasperFire_FromBody_Genarate(int DemoFlag)
{
	int No;
	FireWork* pFW;
	// Line 95, Address: 0x2eb2a0, Func Offset: 0
	// Line 98, Address: 0x2eb2b0, Func Offset: 0x10
	// Line 95, Address: 0x2eb2b4, Func Offset: 0x14
	// Line 98, Address: 0x2eb2bc, Func Offset: 0x1c
	// Line 101, Address: 0x2eb2c8, Func Offset: 0x28
	// Line 102, Address: 0x2eb2cc, Func Offset: 0x2c
	// Line 103, Address: 0x2eb2dc, Func Offset: 0x3c
	// Line 106, Address: 0x2eb2e0, Func Offset: 0x40
	// Line 103, Address: 0x2eb2e4, Func Offset: 0x44
	// Line 106, Address: 0x2eb2ec, Func Offset: 0x4c
	// Line 104, Address: 0x2eb2f0, Func Offset: 0x50
	// Line 105, Address: 0x2eb2f8, Func Offset: 0x58
	// Line 106, Address: 0x2eb300, Func Offset: 0x60
	// Line 107, Address: 0x2eb308, Func Offset: 0x68
	// Func End, Address: 0x2eb324, Func Offset: 0x84
}

// 
// Start address: 0x2eb330
void JasperFire_FromBody_PowerUp(int DemoFlag)
{
	sfCharacter* pChr;
	int No;
	FireWork* pFW;
	// Line 115, Address: 0x2eb330, Func Offset: 0
	// Line 119, Address: 0x2eb350, Func Offset: 0x20
	// Line 120, Address: 0x2eb35c, Func Offset: 0x2c
	// Line 125, Address: 0x2eb364, Func Offset: 0x34
	// Line 130, Address: 0x2eb370, Func Offset: 0x40
	// Line 132, Address: 0x2eb380, Func Offset: 0x50
	// Line 133, Address: 0x2eb390, Func Offset: 0x60
	// Line 136, Address: 0x2eb394, Func Offset: 0x64
	// Line 133, Address: 0x2eb398, Func Offset: 0x68
	// Line 137, Address: 0x2eb39c, Func Offset: 0x6c
	// Line 133, Address: 0x2eb3a0, Func Offset: 0x70
	// Line 136, Address: 0x2eb3a4, Func Offset: 0x74
	// Line 134, Address: 0x2eb3a8, Func Offset: 0x78
	// Line 137, Address: 0x2eb3ac, Func Offset: 0x7c
	// Line 134, Address: 0x2eb3b0, Func Offset: 0x80
	// Line 135, Address: 0x2eb3b4, Func Offset: 0x84
	// Line 136, Address: 0x2eb3bc, Func Offset: 0x8c
	// Line 137, Address: 0x2eb3c0, Func Offset: 0x90
	// Line 138, Address: 0x2eb3c8, Func Offset: 0x98
	// Func End, Address: 0x2eb3e8, Func Offset: 0xb8
}

// 
// Start address: 0x2eb3f0
void JasperFire_FromFloor_Generate(int DemoFlag)
{
	sfCharacter* pChr;
	int No;
	FireWork* pFW;
	// Line 146, Address: 0x2eb3f0, Func Offset: 0
	// Line 150, Address: 0x2eb410, Func Offset: 0x20
	// Line 151, Address: 0x2eb41c, Func Offset: 0x2c
	// Line 156, Address: 0x2eb424, Func Offset: 0x34
	// Line 161, Address: 0x2eb430, Func Offset: 0x40
	// Line 163, Address: 0x2eb440, Func Offset: 0x50
	// Line 164, Address: 0x2eb450, Func Offset: 0x60
	// Line 168, Address: 0x2eb454, Func Offset: 0x64
	// Line 164, Address: 0x2eb458, Func Offset: 0x68
	// Line 168, Address: 0x2eb460, Func Offset: 0x70
	// Line 165, Address: 0x2eb464, Func Offset: 0x74
	// Line 166, Address: 0x2eb46c, Func Offset: 0x7c
	// Line 167, Address: 0x2eb474, Func Offset: 0x84
	// Line 168, Address: 0x2eb478, Func Offset: 0x88
	// Line 169, Address: 0x2eb480, Func Offset: 0x90
	// Func End, Address: 0x2eb4a0, Func Offset: 0xb0
}

// 
// Start address: 0x2eb4a0
void JasperFire_FromBody_Renewal()
{
	sfCharacter* pChr;
	int No;
	FireSklPos* pSklPos;
	float WldPos[4];
	FireSklPos* pSklPos;
	float WldPos[4];
	FireSklPos* pSklPos;
	float WldPos[4];
	// Line 175, Address: 0x2eb4a0, Func Offset: 0
	// Line 180, Address: 0x2eb4a4, Func Offset: 0x4
	// Line 175, Address: 0x2eb4a8, Func Offset: 0x8
	// Line 180, Address: 0x2eb4b8, Func Offset: 0x18
	// Line 181, Address: 0x2eb4c4, Func Offset: 0x24
	// Line 189, Address: 0x2eb4d0, Func Offset: 0x30
	// Line 191, Address: 0x2eb4d8, Func Offset: 0x38
	// Line 193, Address: 0x2eb4e0, Func Offset: 0x40
	// Line 191, Address: 0x2eb4e4, Func Offset: 0x44
	// Line 193, Address: 0x2eb4f0, Func Offset: 0x50
	// Line 191, Address: 0x2eb4f4, Func Offset: 0x54
	// Line 193, Address: 0x2eb4f8, Func Offset: 0x58
	// Line 194, Address: 0x2eb508, Func Offset: 0x68
	// Line 195, Address: 0x2eb53c, Func Offset: 0x9c
	// Line 197, Address: 0x2eb550, Func Offset: 0xb0
	// Line 199, Address: 0x2eb558, Func Offset: 0xb8
	// Line 201, Address: 0x2eb560, Func Offset: 0xc0
	// Line 199, Address: 0x2eb564, Func Offset: 0xc4
	// Line 201, Address: 0x2eb570, Func Offset: 0xd0
	// Line 199, Address: 0x2eb574, Func Offset: 0xd4
	// Line 201, Address: 0x2eb578, Func Offset: 0xd8
	// Line 202, Address: 0x2eb588, Func Offset: 0xe8
	// Line 203, Address: 0x2eb5bc, Func Offset: 0x11c
	// Line 205, Address: 0x2eb5d0, Func Offset: 0x130
	// Line 207, Address: 0x2eb5d8, Func Offset: 0x138
	// Line 209, Address: 0x2eb5e0, Func Offset: 0x140
	// Line 207, Address: 0x2eb5e4, Func Offset: 0x144
	// Line 209, Address: 0x2eb5f0, Func Offset: 0x150
	// Line 207, Address: 0x2eb5f4, Func Offset: 0x154
	// Line 209, Address: 0x2eb5f8, Func Offset: 0x158
	// Line 210, Address: 0x2eb608, Func Offset: 0x168
	// Line 211, Address: 0x2eb63c, Func Offset: 0x19c
	// Line 212, Address: 0x2eb64c, Func Offset: 0x1ac
	// Func End, Address: 0x2eb66c, Func Offset: 0x1cc
}

// 
// Start address: 0x2eb670
void TransLocal2WldPos_ByCharaBoneData(float* WldPos, float* LclPos, sfCharacter* pChr, int BoneNo, float FloorY)
{
	sgBone* pBone;
	// Line 223, Address: 0x2eb670, Func Offset: 0
	// Line 225, Address: 0x2eb694, Func Offset: 0x24
	// Line 226, Address: 0x2eb69c, Func Offset: 0x2c
	// Line 227, Address: 0x2eb6a0, Func Offset: 0x30
	// Line 231, Address: 0x2eb6a8, Func Offset: 0x38
	// Line 233, Address: 0x2eb6d0, Func Offset: 0x60
	// Line 234, Address: 0x2eb6e0, Func Offset: 0x70
	// Line 235, Address: 0x2eb6ec, Func Offset: 0x7c
	// Line 238, Address: 0x2eb6f0, Func Offset: 0x80
	// Line 239, Address: 0x2eb6f8, Func Offset: 0x88
	// Func End, Address: 0x2eb714, Func Offset: 0xa4
}

