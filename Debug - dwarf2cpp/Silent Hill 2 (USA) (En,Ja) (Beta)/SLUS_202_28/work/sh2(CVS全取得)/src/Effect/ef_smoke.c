typedef struct EFCTObject;
typedef struct EFCTTask;
typedef struct EFCTSmokeObject;
typedef struct EFCTSmokePlane;
typedef struct EFCTVertexData;
typedef struct EFCTAnimationData;
typedef struct EFCTTexEnvInfo;
typedef struct _shTskEXECUTE;

typedef void(*type_2)(void*);
typedef void(*type_7)(void*);

typedef EFCTSmokeObject type_0[32];
typedef int type_1[4];
typedef float type_3[4];
typedef unsigned char type_4[4];
typedef char type_5[488];
typedef EFCTSmokePlane type_6[16];

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

struct EFCTTask
{
	_shTskEXECUTE exe;
	EFCTObject* pObj;
	char freemem[488];
};

struct EFCTSmokeObject
{
	unsigned int index;
	unsigned char use;
	unsigned char kind;
	EFCTObject* base_obj;
	EFCTSmokePlane plane[16];
};

struct EFCTSmokePlane
{
	float trans[4];
	float speed[4];
	float timer;
	float cycle;
	float width_cycle_param;
	float height_cycle_param;
	float pos[4];
	int valid;
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

struct EFCTTexEnvInfo
{
	unsigned short clut_id;
	unsigned short tfx;
	unsigned short transparency;
};

struct _shTskEXECUTE
{
	void(*adrs)(void*);
	void* next;
	void* prev;
	int mode;
	int atr;
};

EFCTSmokeObject smoke_obj[32];

int InitEffectObjectSmoke(EFCTObject* pObj, int nIndex, float* pos, unsigned char kind);
EFCTSmokeObject* CreateSmokeObject(EFCTObject* pObj, unsigned char kind);
void SetSmokeDiffusionParam(EFCTSmokePlane* plane);
void SetSmokeSpeed(EFCTSmokePlane* plane);
unsigned int InitEffectVertexSmoke(EFCTVertexData** pVertex);
void SetSmokeSTValue(EFCTObject* pObj);
void InitSmokeTexEnv(EFCTTexEnvInfo* pTexInfo);
void DrawSmoke(void* task);
EFCTSmokeObject* GetSmokeObject(EFCTObject* pObj);
void CountSmokeDiffusionTimer(EFCTSmokeObject* smoke);
void RenewSmokeRGBA(EFCTObject* pObj, EFCTSmokeObject* smoke);
void DiffuseSmoke(EFCTObject* pObj, EFCTSmokeObject* smoke);
void SetSmokeVertex(float* pos, float width, float height, float* trans, EFCTVertexData* VertexData);
void RenewSmokePos(EFCTSmokePlane* smoke);
void SetFlameSmokeValid();
int IsFinishSmoke(EFCTSmokeObject* smoke);

// 
// Start address: 0x22d700
int InitEffectObjectSmoke(EFCTObject* pObj, int nIndex, float* pos, unsigned char kind)
{
	// Line 25, Address: 0x22d700, Func Offset: 0
	// Line 26, Address: 0x22d710, Func Offset: 0x10
	// Line 27, Address: 0x22d714, Func Offset: 0x14
	// Line 30, Address: 0x22d71c, Func Offset: 0x1c
	// Line 31, Address: 0x22d728, Func Offset: 0x28
	// Line 32, Address: 0x22d740, Func Offset: 0x40
	// Line 33, Address: 0x22d748, Func Offset: 0x48
	// Line 34, Address: 0x22d754, Func Offset: 0x54
	// Line 38, Address: 0x22d76c, Func Offset: 0x6c
	// Line 40, Address: 0x22d784, Func Offset: 0x84
	// Line 43, Address: 0x22d790, Func Offset: 0x90
	// Line 44, Address: 0x22d794, Func Offset: 0x94
	// Line 47, Address: 0x22d798, Func Offset: 0x98
	// Line 48, Address: 0x22d7a0, Func Offset: 0xa0
	// Line 51, Address: 0x22d7a4, Func Offset: 0xa4
	// Line 52, Address: 0x22d7b4, Func Offset: 0xb4
	// Line 53, Address: 0x22d7c0, Func Offset: 0xc0
	// Line 57, Address: 0x22d7cc, Func Offset: 0xcc
	// Line 59, Address: 0x22d7d8, Func Offset: 0xd8
	// Line 60, Address: 0x22d7dc, Func Offset: 0xdc
	// Func End, Address: 0x22d7f0, Func Offset: 0xf0
}

// 
// Start address: 0x22d7f0
EFCTSmokeObject* CreateSmokeObject(EFCTObject* pObj, unsigned char kind)
{
	int i;
	EFCTSmokeObject* smoke;
	// Line 64, Address: 0x22d7f0, Func Offset: 0
	// Line 65, Address: 0x22d800, Func Offset: 0x10
	// Line 69, Address: 0x22d804, Func Offset: 0x14
	// Line 70, Address: 0x22d810, Func Offset: 0x20
	// Line 72, Address: 0x22d83c, Func Offset: 0x4c
	// Line 73, Address: 0x22d850, Func Offset: 0x60
	// Line 74, Address: 0x22d860, Func Offset: 0x70
	// Line 75, Address: 0x22d86c, Func Offset: 0x7c
	// Line 77, Address: 0x22d874, Func Offset: 0x84
	// Line 80, Address: 0x22d888, Func Offset: 0x98
	// Line 83, Address: 0x22d890, Func Offset: 0xa0
	// Line 86, Address: 0x22d894, Func Offset: 0xa4
	// Line 88, Address: 0x22d898, Func Offset: 0xa8
	// Line 91, Address: 0x22d8a4, Func Offset: 0xb4
	// Line 94, Address: 0x22d8bc, Func Offset: 0xcc
	// Line 97, Address: 0x22d8c8, Func Offset: 0xd8
	// Line 101, Address: 0x22d8dc, Func Offset: 0xec
	// Line 102, Address: 0x22d8e0, Func Offset: 0xf0
	// Line 103, Address: 0x22d90c, Func Offset: 0x11c
	// Line 104, Address: 0x22d938, Func Offset: 0x148
	// Line 107, Address: 0x22d964, Func Offset: 0x174
	// Line 108, Address: 0x22d970, Func Offset: 0x180
	// Line 109, Address: 0x22d984, Func Offset: 0x194
	// Line 111, Address: 0x22d98c, Func Offset: 0x19c
	// Line 114, Address: 0x22d9b4, Func Offset: 0x1c4
	// Line 115, Address: 0x22d9b8, Func Offset: 0x1c8
	// Func End, Address: 0x22d9d0, Func Offset: 0x1e0
}

// 
// Start address: 0x22d9d0
void SetSmokeDiffusionParam(EFCTSmokePlane* plane)
{
	float rate;
	// Line 119, Address: 0x22d9d0, Func Offset: 0
	// Line 124, Address: 0x22d9e0, Func Offset: 0x10
	// Line 127, Address: 0x22da10, Func Offset: 0x40
	// Line 129, Address: 0x22da50, Func Offset: 0x80
	// Line 131, Address: 0x22da90, Func Offset: 0xc0
	// Func End, Address: 0x22daa4, Func Offset: 0xd4
}

// 
// Start address: 0x22dab0
void SetSmokeSpeed(EFCTSmokePlane* plane)
{
	float rate2;
	float rate1;
	// Line 135, Address: 0x22dab0, Func Offset: 0
	// Line 140, Address: 0x22dac0, Func Offset: 0x10
	// Line 143, Address: 0x22dadc, Func Offset: 0x2c
	// Line 147, Address: 0x22db08, Func Offset: 0x58
	// Line 149, Address: 0x22db24, Func Offset: 0x74
	// Func End, Address: 0x22db38, Func Offset: 0x88
}

// 
// Start address: 0x22db40
unsigned int InitEffectVertexSmoke(EFCTVertexData** pVertex)
{
	int i;
	// Line 153, Address: 0x22db40, Func Offset: 0
	// Line 157, Address: 0x22db50, Func Offset: 0x10
	// Line 158, Address: 0x22db5c, Func Offset: 0x1c
	// Line 159, Address: 0x22db64, Func Offset: 0x24
	// Line 161, Address: 0x22db68, Func Offset: 0x28
	// Line 162, Address: 0x22db78, Func Offset: 0x38
	// Line 163, Address: 0x22db84, Func Offset: 0x44
	// Line 166, Address: 0x22db90, Func Offset: 0x50
	// Line 167, Address: 0x22db9c, Func Offset: 0x5c
	// Line 168, Address: 0x22dbb8, Func Offset: 0x78
	// Line 169, Address: 0x22dbc8, Func Offset: 0x88
	// Line 170, Address: 0x22dbd4, Func Offset: 0x94
	// Line 172, Address: 0x22dbe4, Func Offset: 0xa4
	// Line 173, Address: 0x22dbf4, Func Offset: 0xb4
	// Line 175, Address: 0x22dc04, Func Offset: 0xc4
	// Line 176, Address: 0x22dc08, Func Offset: 0xc8
	// Func End, Address: 0x22dc1c, Func Offset: 0xdc
}

// 
// Start address: 0x22dc20
void SetSmokeSTValue(EFCTObject* pObj)
{
	int t_index;
	int s_index;
	int i;
	// Line 180, Address: 0x22dc20, Func Offset: 0
	// Line 184, Address: 0x22dc3c, Func Offset: 0x1c
	// Line 186, Address: 0x22dc48, Func Offset: 0x28
	// Line 188, Address: 0x22dc8c, Func Offset: 0x6c
	// Line 189, Address: 0x22dc90, Func Offset: 0x70
	// Line 190, Address: 0x22dc94, Func Offset: 0x74
	// Line 192, Address: 0x22dc9c, Func Offset: 0x7c
	// Line 193, Address: 0x22dca0, Func Offset: 0x80
	// Line 194, Address: 0x22dca4, Func Offset: 0x84
	// Line 196, Address: 0x22dcac, Func Offset: 0x8c
	// Line 197, Address: 0x22dcb0, Func Offset: 0x90
	// Line 199, Address: 0x22dcb4, Func Offset: 0x94
	// Line 201, Address: 0x22dcb8, Func Offset: 0x98
	// Line 202, Address: 0x22dce8, Func Offset: 0xc8
	// Line 203, Address: 0x22dd04, Func Offset: 0xe4
	// Line 204, Address: 0x22dd24, Func Offset: 0x104
	// Line 205, Address: 0x22dd30, Func Offset: 0x110
	// Line 206, Address: 0x22dd3c, Func Offset: 0x11c
	// Line 207, Address: 0x22dd5c, Func Offset: 0x13c
	// Line 208, Address: 0x22dd68, Func Offset: 0x148
	// Line 209, Address: 0x22dd74, Func Offset: 0x154
	// Line 210, Address: 0x22dd84, Func Offset: 0x164
	// Func End, Address: 0x22dda4, Func Offset: 0x184
}

// 
// Start address: 0x22ddb0
void InitSmokeTexEnv(EFCTTexEnvInfo* pTexInfo)
{
	// Line 215, Address: 0x22ddb0, Func Offset: 0
	// Line 216, Address: 0x22ddb4, Func Offset: 0x4
	// Line 217, Address: 0x22ddbc, Func Offset: 0xc
	// Line 218, Address: 0x22ddc4, Func Offset: 0x14
	// Func End, Address: 0x22ddcc, Func Offset: 0x1c
}

// 
// Start address: 0x22ddd0
void DrawSmoke(void* task)
{
	EFCTSmokeObject* smoke;
	EFCTTask* pTask;
	// Line 222, Address: 0x22ddd0, Func Offset: 0
	// Line 226, Address: 0x22dde0, Func Offset: 0x10
	// Line 227, Address: 0x22dde4, Func Offset: 0x14
	// Line 228, Address: 0x22ddec, Func Offset: 0x1c
	// Line 233, Address: 0x22de14, Func Offset: 0x44
	// Line 234, Address: 0x22de24, Func Offset: 0x54
	// Line 235, Address: 0x22de2c, Func Offset: 0x5c
	// Line 246, Address: 0x22de54, Func Offset: 0x84
	// Line 249, Address: 0x22de64, Func Offset: 0x94
	// Line 256, Address: 0x22de74, Func Offset: 0xa4
	// Line 260, Address: 0x22de80, Func Offset: 0xb0
	// Line 264, Address: 0x22de8c, Func Offset: 0xbc
	// Line 267, Address: 0x22de98, Func Offset: 0xc8
	// Line 270, Address: 0x22dea4, Func Offset: 0xd4
	// Line 272, Address: 0x22debc, Func Offset: 0xec
	// Line 275, Address: 0x22dec0, Func Offset: 0xf0
	// Line 278, Address: 0x22decc, Func Offset: 0xfc
	// Func End, Address: 0x22dee4, Func Offset: 0x114
}

// 
// Start address: 0x22def0
EFCTSmokeObject* GetSmokeObject(EFCTObject* pObj)
{
	int i;
	// Line 286, Address: 0x22def0, Func Offset: 0
	// Line 287, Address: 0x22defc, Func Offset: 0xc
	// Line 288, Address: 0x22df44, Func Offset: 0x54
	// Line 290, Address: 0x22df58, Func Offset: 0x68
	// Line 292, Address: 0x22df6c, Func Offset: 0x7c
	// Line 293, Address: 0x22df70, Func Offset: 0x80
	// Func End, Address: 0x22df78, Func Offset: 0x88
}

// 
// Start address: 0x22df80
void CountSmokeDiffusionTimer(EFCTSmokeObject* smoke)
{
	int i;
	// Line 297, Address: 0x22df80, Func Offset: 0
	// Line 300, Address: 0x22df9c, Func Offset: 0x1c
	// Line 301, Address: 0x22dfa4, Func Offset: 0x24
	// Line 302, Address: 0x22dfb0, Func Offset: 0x30
	// Line 304, Address: 0x22dfd4, Func Offset: 0x54
	// Line 306, Address: 0x22dff0, Func Offset: 0x70
	// Line 308, Address: 0x22e008, Func Offset: 0x88
	// Line 310, Address: 0x22e00c, Func Offset: 0x8c
	// Line 313, Address: 0x22e010, Func Offset: 0x90
	// Line 314, Address: 0x22e024, Func Offset: 0xa4
	// Line 316, Address: 0x22e028, Func Offset: 0xa8
	// Func End, Address: 0x22e048, Func Offset: 0xc8
}

// 
// Start address: 0x22e050
void RenewSmokeRGBA(EFCTObject* pObj, EFCTSmokeObject* smoke)
{
	int i;
	int rgba[4];
	float ratio;
	// Line 320, Address: 0x22e050, Func Offset: 0
	// Line 325, Address: 0x22e078, Func Offset: 0x28
	// Line 327, Address: 0x22e084, Func Offset: 0x34
	// Line 328, Address: 0x22e0e8, Func Offset: 0x98
	// Line 329, Address: 0x22e108, Func Offset: 0xb8
	// Line 330, Address: 0x22e128, Func Offset: 0xd8
	// Line 332, Address: 0x22e12c, Func Offset: 0xdc
	// Line 333, Address: 0x22e158, Func Offset: 0x108
	// Line 334, Address: 0x22e178, Func Offset: 0x128
	// Line 335, Address: 0x22e198, Func Offset: 0x148
	// Line 336, Address: 0x22e1ac, Func Offset: 0x15c
	// Func End, Address: 0x22e1d4, Func Offset: 0x184
}

// 
// Start address: 0x22e1e0
void DiffuseSmoke(EFCTObject* pObj, EFCTSmokeObject* smoke)
{
	float height;
	float width;
	float ratio;
	float delta_height;
	float delta_width;
	int i;
	// Line 340, Address: 0x22e1e0, Func Offset: 0
	// Line 347, Address: 0x22e204, Func Offset: 0x24
	// Line 350, Address: 0x22e210, Func Offset: 0x30
	// Line 352, Address: 0x22e23c, Func Offset: 0x5c
	// Line 354, Address: 0x22e248, Func Offset: 0x68
	// Line 355, Address: 0x22e274, Func Offset: 0x94
	// Line 356, Address: 0x22e2a0, Func Offset: 0xc0
	// Line 357, Address: 0x22e2cc, Func Offset: 0xec
	// Line 359, Address: 0x22e2d0, Func Offset: 0xf0
	// Line 360, Address: 0x22e2dc, Func Offset: 0xfc
	// Line 363, Address: 0x22e2e0, Func Offset: 0x100
	// Line 364, Address: 0x22e328, Func Offset: 0x148
	// Line 365, Address: 0x22e340, Func Offset: 0x160
	// Line 367, Address: 0x22e348, Func Offset: 0x168
	// Line 368, Address: 0x22e370, Func Offset: 0x190
	// Line 372, Address: 0x22e394, Func Offset: 0x1b4
	// Line 373, Address: 0x22e39c, Func Offset: 0x1bc
	// Line 376, Address: 0x22e3a4, Func Offset: 0x1c4
	// Line 379, Address: 0x22e3b0, Func Offset: 0x1d0
	// Line 381, Address: 0x22e3ec, Func Offset: 0x20c
	// Line 383, Address: 0x22e3fc, Func Offset: 0x21c
	// Func End, Address: 0x22e420, Func Offset: 0x240
}

// 
// Start address: 0x22e420
void SetSmokeVertex(float* pos, float width, float height, float* trans, EFCTVertexData* VertexData)
{
	// Line 388, Address: 0x22e420, Func Offset: 0
	// Line 389, Address: 0x22e444, Func Offset: 0x24
	// Line 390, Address: 0x22e468, Func Offset: 0x48
	// Line 391, Address: 0x22e478, Func Offset: 0x58
	// Line 393, Address: 0x22e480, Func Offset: 0x60
	// Line 394, Address: 0x22e498, Func Offset: 0x78
	// Line 395, Address: 0x22e4ac, Func Offset: 0x8c
	// Line 396, Address: 0x22e4bc, Func Offset: 0x9c
	// Line 398, Address: 0x22e4c0, Func Offset: 0xa0
	// Line 399, Address: 0x22e4d4, Func Offset: 0xb4
	// Line 400, Address: 0x22e4f8, Func Offset: 0xd8
	// Line 401, Address: 0x22e508, Func Offset: 0xe8
	// Line 403, Address: 0x22e50c, Func Offset: 0xec
	// Line 404, Address: 0x22e520, Func Offset: 0x100
	// Line 405, Address: 0x22e534, Func Offset: 0x114
	// Line 406, Address: 0x22e544, Func Offset: 0x124
	// Line 407, Address: 0x22e548, Func Offset: 0x128
	// Func End, Address: 0x22e550, Func Offset: 0x130
}

// 
// Start address: 0x22e550
void RenewSmokePos(EFCTSmokePlane* smoke)
{
	// Line 412, Address: 0x22e550, Func Offset: 0
	// Line 413, Address: 0x22e560, Func Offset: 0x10
	// Line 414, Address: 0x22e580, Func Offset: 0x30
	// Line 416, Address: 0x22e590, Func Offset: 0x40
	// Func End, Address: 0x22e598, Func Offset: 0x48
}

// 
// Start address: 0x22e5a0
void SetFlameSmokeValid()
{
	// Line 425, Address: 0x22e5a0, Func Offset: 0
	// Func End, Address: 0x22e5a8, Func Offset: 0x8
}

// 
// Start address: 0x22e5b0
int IsFinishSmoke(EFCTSmokeObject* smoke)
{
	int ret;
	int i;
	// Line 431, Address: 0x22e5b0, Func Offset: 0
	// Line 433, Address: 0x22e5b4, Func Offset: 0x4
	// Line 435, Address: 0x22e5c0, Func Offset: 0x10
	// Line 437, Address: 0x22e5e0, Func Offset: 0x30
	// Line 438, Address: 0x22e5e4, Func Offset: 0x34
	// Line 439, Address: 0x22e5e8, Func Offset: 0x38
	// Line 442, Address: 0x22e5fc, Func Offset: 0x4c
	// Func End, Address: 0x22e604, Func Offset: 0x54
}

