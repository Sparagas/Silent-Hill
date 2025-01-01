typedef struct EFCTSmokePlane;
typedef struct EFCTAnimationData;
typedef struct EFCTObject;
typedef struct EFCTSmokeObject;
typedef struct EFCTVertexData;
typedef struct EFCTTexEnvInfo;
typedef struct EFCTTask;
typedef struct _shTskEXECUTE;

typedef void(*type_0)(void*);
typedef void(*type_7)(void*);

typedef EFCTSmokePlane type_1[8];
typedef int type_2[4];
typedef float type_3[4];
typedef unsigned char type_4[4];
typedef EFCTSmokeObject type_5[256];
typedef char type_6[488];

struct EFCTSmokePlane
{
	float trans[4];
	float speed[4];
	float timer;
	float cycle;
	float width_cycle_param;
	float height_cycle_param;
	float pos[4];
};

struct EFCTAnimationData
{
	unsigned short TotalFrame;
	short CurrentFrameNo;
	float DrawFrameWait;
	float DrawingTime;
	short StartFrameNo;
	short FinishFrameNo;
	unsigned char DoLoop;
	unsigned char Status;
	void(*SetAnimParam)(void*);
};

struct EFCTObject
{
	unsigned short Index;
	short Using;
	short EffectKind;
	short AutoDisappear;
	float width;
	float height;
	unsigned short VertexNum;
	unsigned short LayerNum;
	float trans[4];
	float rot[4];
	float Pos[4];
	short chara_kind;
	short chara_id;
	EFCTVertexData* pVertex;
	EFCTAnimationData* pAnimData;
};

struct EFCTSmokeObject
{
	unsigned char use;
	unsigned char kind;
	EFCTObject* base_obj;
	EFCTSmokePlane plane[8];
};

struct EFCTVertexData
{
	float LocalPos[4];
	float WorldPos[4];
	int ScreenPos[4];
	unsigned char rgba[4];
	float stq[4];
	short is_valid;
};

struct EFCTTexEnvInfo
{
	unsigned short clut_id;
	unsigned short tfx;
	unsigned short transparency;
};

struct EFCTTask
{
	_shTskEXECUTE exe;
	EFCTObject* pObj;
	char freemem[488];
};

struct _shTskEXECUTE
{
	void(*adrs)(void*);
	void* next;
	void* prev;
	int mode;
	int atr;
};

EFCTSmokeObject smoke_obj[256];

void SetSmokeDiffusionParam(EFCTSmokePlane* plane);
void SetSmokeSpeed(EFCTSmokePlane* plane);
void InitSmokeTexEnv(EFCTTexEnvInfo* pTexInfo);
void DrawSmoke(void* task);
EFCTSmokeObject* GetSmokeObject(EFCTObject* pObj);
void CountSmokeDiffusionTimer(EFCTSmokeObject* smoke);
void RenewSmokeRGBA(EFCTObject* pObj, EFCTSmokeObject* smoke);
void DiffuseSmoke(EFCTObject* pObj, EFCTSmokeObject* smoke);
void SetSmokeVertex(float* pos, float width, float height, float* trans, EFCTVertexData* VertexData);
void RenewSmokePos(EFCTSmokePlane* smoke);

// 
// Start address: 0x23e400
void SetSmokeDiffusionParam(EFCTSmokePlane* plane)
{
	float rate;
	// Line 107, Address: 0x23e400, Func Offset: 0
	// Line 111, Address: 0x23e40c, Func Offset: 0xc
	// Line 112, Address: 0x23e420, Func Offset: 0x20
	// Line 114, Address: 0x23e44c, Func Offset: 0x4c
	// Line 115, Address: 0x23e460, Func Offset: 0x60
	// Line 116, Address: 0x23e498, Func Offset: 0x98
	// Line 117, Address: 0x23e4a8, Func Offset: 0xa8
	// Line 119, Address: 0x23e4e0, Func Offset: 0xe0
	// Func End, Address: 0x23e4f0, Func Offset: 0xf0
}

// 
// Start address: 0x23e4f0
void SetSmokeSpeed(EFCTSmokePlane* plane)
{
	float rate2;
	float rate1;
	// Line 123, Address: 0x23e4f0, Func Offset: 0
	// Line 126, Address: 0x23e4fc, Func Offset: 0xc
	// Line 127, Address: 0x23e50c, Func Offset: 0x1c
	// Line 128, Address: 0x23e520, Func Offset: 0x30
	// Line 130, Address: 0x23e538, Func Offset: 0x48
	// Line 131, Address: 0x23e554, Func Offset: 0x64
	// Line 133, Address: 0x23e57c, Func Offset: 0x8c
	// Line 134, Address: 0x23e58c, Func Offset: 0x9c
	// Line 135, Address: 0x23e5a0, Func Offset: 0xb0
	// Line 137, Address: 0x23e5b8, Func Offset: 0xc8
	// Func End, Address: 0x23e5c8, Func Offset: 0xd8
}

// 
// Start address: 0x23e5d0
void InitSmokeTexEnv(EFCTTexEnvInfo* pTexInfo)
{
	// Line 190, Address: 0x23e5d0, Func Offset: 0
	// Line 191, Address: 0x23e5d8, Func Offset: 0x8
	// Line 192, Address: 0x23e5e0, Func Offset: 0x10
	// Line 193, Address: 0x23e5ec, Func Offset: 0x1c
	// Line 194, Address: 0x23e5f8, Func Offset: 0x28
	// Func End, Address: 0x23e604, Func Offset: 0x34
}

// 
// Start address: 0x23e610
void DrawSmoke(void* task)
{
	EFCTSmokeObject* smoke;
	EFCTTask* pTask;
	// Line 198, Address: 0x23e610, Func Offset: 0
	// Line 202, Address: 0x23e624, Func Offset: 0x14
	// Line 203, Address: 0x23e628, Func Offset: 0x18
	// Line 204, Address: 0x23e630, Func Offset: 0x20
	// Line 209, Address: 0x23e658, Func Offset: 0x48
	// Line 210, Address: 0x23e668, Func Offset: 0x58
	// Line 211, Address: 0x23e670, Func Offset: 0x60
	// Line 216, Address: 0x23e698, Func Offset: 0x88
	// Line 219, Address: 0x23e6a4, Func Offset: 0x94
	// Line 222, Address: 0x23e6b4, Func Offset: 0xa4
	// Line 226, Address: 0x23e6c4, Func Offset: 0xb4
	// Line 233, Address: 0x23e6d0, Func Offset: 0xc0
	// Line 236, Address: 0x23e6dc, Func Offset: 0xcc
	// Line 238, Address: 0x23e6e8, Func Offset: 0xd8
	// Func End, Address: 0x23e700, Func Offset: 0xf0
}

// 
// Start address: 0x23e700
EFCTSmokeObject* GetSmokeObject(EFCTObject* pObj)
{
	int i;
	// Line 243, Address: 0x23e700, Func Offset: 0
	// Line 246, Address: 0x23e70c, Func Offset: 0xc
	// Line 247, Address: 0x23e718, Func Offset: 0x18
	// Line 248, Address: 0x23e76c, Func Offset: 0x6c
	// Line 250, Address: 0x23e78c, Func Offset: 0x8c
	// Line 252, Address: 0x23e79c, Func Offset: 0x9c
	// Line 253, Address: 0x23e7a0, Func Offset: 0xa0
	// Func End, Address: 0x23e7b0, Func Offset: 0xb0
}

// 
// Start address: 0x23e7b0
void CountSmokeDiffusionTimer(EFCTSmokeObject* smoke)
{
	int i;
	// Line 257, Address: 0x23e7b0, Func Offset: 0
	// Line 260, Address: 0x23e7c0, Func Offset: 0x10
	// Line 261, Address: 0x23e7cc, Func Offset: 0x1c
	// Line 263, Address: 0x23e7d8, Func Offset: 0x28
	// Line 265, Address: 0x23e7f8, Func Offset: 0x48
	// Line 267, Address: 0x23e828, Func Offset: 0x78
	// Line 268, Address: 0x23e83c, Func Offset: 0x8c
	// Line 269, Address: 0x23e840, Func Offset: 0x90
	// Line 270, Address: 0x23e854, Func Offset: 0xa4
	// Line 272, Address: 0x23e858, Func Offset: 0xa8
	// Func End, Address: 0x23e86c, Func Offset: 0xbc
}

// 
// Start address: 0x23e870
void RenewSmokeRGBA(EFCTObject* pObj, EFCTSmokeObject* smoke)
{
	int i;
	int rgba[4];
	float ratio;
	// Line 276, Address: 0x23e870, Func Offset: 0
	// Line 281, Address: 0x23e884, Func Offset: 0x14
	// Line 283, Address: 0x23e890, Func Offset: 0x20
	// Line 284, Address: 0x23e8f4, Func Offset: 0x84
	// Line 285, Address: 0x23e914, Func Offset: 0xa4
	// Line 286, Address: 0x23e934, Func Offset: 0xc4
	// Line 287, Address: 0x23e954, Func Offset: 0xe4
	// Line 288, Address: 0x23e9b4, Func Offset: 0x144
	// Line 289, Address: 0x23e9d4, Func Offset: 0x164
	// Line 290, Address: 0x23e9fc, Func Offset: 0x18c
	// Line 291, Address: 0x23ea0c, Func Offset: 0x19c
	// Func End, Address: 0x23ea20, Func Offset: 0x1b0
}

// 
// Start address: 0x23ea20
void DiffuseSmoke(EFCTObject* pObj, EFCTSmokeObject* smoke)
{
	float height;
	float width;
	float ratio;
	float delta_height;
	float delta_width;
	int i;
	// Line 295, Address: 0x23ea20, Func Offset: 0
	// Line 302, Address: 0x23ea44, Func Offset: 0x24
	// Line 305, Address: 0x23ea50, Func Offset: 0x30
	// Line 307, Address: 0x23ea74, Func Offset: 0x54
	// Line 309, Address: 0x23ea88, Func Offset: 0x68
	// Line 310, Address: 0x23eaac, Func Offset: 0x8c
	// Line 311, Address: 0x23ead0, Func Offset: 0xb0
	// Line 312, Address: 0x23eaf4, Func Offset: 0xd4
	// Line 314, Address: 0x23eb04, Func Offset: 0xe4
	// Line 318, Address: 0x23eb18, Func Offset: 0xf8
	// Line 319, Address: 0x23eb60, Func Offset: 0x140
	// Line 320, Address: 0x23eb70, Func Offset: 0x150
	// Line 322, Address: 0x23eb80, Func Offset: 0x160
	// Line 323, Address: 0x23ebb0, Func Offset: 0x190
	// Line 327, Address: 0x23ebdc, Func Offset: 0x1bc
	// Line 328, Address: 0x23ebe4, Func Offset: 0x1c4
	// Line 331, Address: 0x23ebec, Func Offset: 0x1cc
	// Line 334, Address: 0x23ec00, Func Offset: 0x1e0
	// Line 336, Address: 0x23ec40, Func Offset: 0x220
	// Line 338, Address: 0x23ec54, Func Offset: 0x234
	// Func End, Address: 0x23ec78, Func Offset: 0x258
}

// 
// Start address: 0x23ec80
void SetSmokeVertex(float* pos, float width, float height, float* trans, EFCTVertexData* VertexData)
{
	// Line 342, Address: 0x23ec80, Func Offset: 0
	// Line 343, Address: 0x23ec98, Func Offset: 0x18
	// Line 344, Address: 0x23eccc, Func Offset: 0x4c
	// Line 345, Address: 0x23ed00, Func Offset: 0x80
	// Line 346, Address: 0x23ed1c, Func Offset: 0x9c
	// Line 348, Address: 0x23ed2c, Func Offset: 0xac
	// Line 349, Address: 0x23ed5c, Func Offset: 0xdc
	// Line 350, Address: 0x23ed90, Func Offset: 0x110
	// Line 351, Address: 0x23edac, Func Offset: 0x12c
	// Line 353, Address: 0x23edbc, Func Offset: 0x13c
	// Line 354, Address: 0x23edf0, Func Offset: 0x170
	// Line 355, Address: 0x23ee20, Func Offset: 0x1a0
	// Line 356, Address: 0x23ee3c, Func Offset: 0x1bc
	// Line 358, Address: 0x23ee4c, Func Offset: 0x1cc
	// Line 359, Address: 0x23ee7c, Func Offset: 0x1fc
	// Line 360, Address: 0x23eeac, Func Offset: 0x22c
	// Line 361, Address: 0x23eec8, Func Offset: 0x248
	// Line 362, Address: 0x23eed8, Func Offset: 0x258
	// Func End, Address: 0x23eee4, Func Offset: 0x264
}

// 
// Start address: 0x23eef0
void RenewSmokePos(EFCTSmokePlane* smoke)
{
	// Line 366, Address: 0x23eef0, Func Offset: 0
	// Line 367, Address: 0x23eef8, Func Offset: 0x8
	// Line 368, Address: 0x23ef14, Func Offset: 0x24
	// Line 369, Address: 0x23ef40, Func Offset: 0x50
	// Line 371, Address: 0x23ef5c, Func Offset: 0x6c
	// Func End, Address: 0x23ef68, Func Offset: 0x78
}

