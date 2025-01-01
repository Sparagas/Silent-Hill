typedef struct EFCTAnimationData;
typedef struct EFCTSparksObject;
typedef struct EFCTVertexData;
typedef struct EFCTSparksPlane;
typedef struct EFCTObject;

typedef void(*type_0)(void*);

typedef int type_1[4];
typedef float type_2[4];
typedef unsigned char type_3[4];
typedef EFCTSparksPlane type_4[10];

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

struct EFCTSparksObject
{
	EFCTObject base_obj;
	EFCTSparksPlane plane[10];
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

struct EFCTSparksPlane
{
	float trans[4];
	float speed[4];
	float timer;
	float life_span;
	float pos[4];
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


void SetSparksStartPos(float* trans);
void SetSparksSpeed(float* speed);
void RenewSparksPos(EFCTSparksPlane* sparks);
void DrawSparks(EFCTSparksObject* sparks);
void CountSparksLifeTimer(EFCTSparksObject* sparks);
void RenewSparksRGBA(EFCTSparksObject* sparks);
void MoveSparks(EFCTSparksObject* sparks);
void SetSparksVertex(float* pos, float width, float height, float* trans, EFCTVertexData* VertexData);

// 
// Start address: 0x242030
void SetSparksStartPos(float* trans)
{
	float rate;
	// Line 78, Address: 0x242030, Func Offset: 0
	// Line 81, Address: 0x24203c, Func Offset: 0xc
	// Line 82, Address: 0x24204c, Func Offset: 0x1c
	// Line 85, Address: 0x242068, Func Offset: 0x38
	// Line 86, Address: 0x242098, Func Offset: 0x68
	// Line 87, Address: 0x2420a8, Func Offset: 0x78
	// Line 88, Address: 0x2420c4, Func Offset: 0x94
	// Line 89, Address: 0x2420d0, Func Offset: 0xa0
	// Func End, Address: 0x2420e0, Func Offset: 0xb0
}

// 
// Start address: 0x2420e0
void SetSparksSpeed(float* speed)
{
	float max;
	float min;
	// Line 93, Address: 0x2420e0, Func Offset: 0
	// Line 96, Address: 0x2420ec, Func Offset: 0xc
	// Line 97, Address: 0x2420fc, Func Offset: 0x1c
	// Line 98, Address: 0x24210c, Func Offset: 0x2c
	// Line 99, Address: 0x242124, Func Offset: 0x44
	// Line 100, Address: 0x242138, Func Offset: 0x58
	// Line 101, Address: 0x242148, Func Offset: 0x68
	// Line 102, Address: 0x242170, Func Offset: 0x90
	// Line 103, Address: 0x242180, Func Offset: 0xa0
	// Line 104, Address: 0x242190, Func Offset: 0xb0
	// Line 105, Address: 0x2421a8, Func Offset: 0xc8
	// Func End, Address: 0x2421b8, Func Offset: 0xd8
}

// 
// Start address: 0x2421c0
void RenewSparksPos(EFCTSparksPlane* sparks)
{
	float ratio;
	// Line 109, Address: 0x2421c0, Func Offset: 0
	// Line 110, Address: 0x2421cc, Func Offset: 0xc
	// Line 111, Address: 0x24220c, Func Offset: 0x4c
	// Line 112, Address: 0x242224, Func Offset: 0x64
	// Line 114, Address: 0x24223c, Func Offset: 0x7c
	// Line 115, Address: 0x242280, Func Offset: 0xc0
	// Line 119, Address: 0x242298, Func Offset: 0xd8
	// Func End, Address: 0x2422a8, Func Offset: 0xe8
}

// 
// Start address: 0x2422b0
void DrawSparks(EFCTSparksObject* sparks)
{
	// Line 171, Address: 0x2422b0, Func Offset: 0
	// Line 173, Address: 0x2422bc, Func Offset: 0xc
	// Line 174, Address: 0x2422c8, Func Offset: 0x18
	// Line 179, Address: 0x2422f0, Func Offset: 0x40
	// Line 182, Address: 0x2422fc, Func Offset: 0x4c
	// Line 185, Address: 0x242308, Func Offset: 0x58
	// Line 188, Address: 0x242314, Func Offset: 0x64
	// Line 191, Address: 0x242320, Func Offset: 0x70
	// Line 194, Address: 0x24232c, Func Offset: 0x7c
	// Line 196, Address: 0x242338, Func Offset: 0x88
	// Func End, Address: 0x242348, Func Offset: 0x98
}

// 
// Start address: 0x242350
void CountSparksLifeTimer(EFCTSparksObject* sparks)
{
	int i;
	// Line 200, Address: 0x242350, Func Offset: 0
	// Line 203, Address: 0x242360, Func Offset: 0x10
	// Line 204, Address: 0x24236c, Func Offset: 0x1c
	// Line 206, Address: 0x242378, Func Offset: 0x28
	// Line 208, Address: 0x242398, Func Offset: 0x48
	// Line 210, Address: 0x2423c8, Func Offset: 0x78
	// Line 211, Address: 0x2423dc, Func Offset: 0x8c
	// Line 212, Address: 0x2423e0, Func Offset: 0x90
	// Line 213, Address: 0x2423f4, Func Offset: 0xa4
	// Line 215, Address: 0x2423f8, Func Offset: 0xa8
	// Func End, Address: 0x24240c, Func Offset: 0xbc
}

// 
// Start address: 0x242410
void RenewSparksRGBA(EFCTSparksObject* sparks)
{
	int i;
	int rgba[4];
	float ratio;
	// Line 220, Address: 0x242410, Func Offset: 0
	// Line 225, Address: 0x242420, Func Offset: 0x10
	// Line 227, Address: 0x24242c, Func Offset: 0x1c
	// Line 228, Address: 0x24249c, Func Offset: 0x8c
	// Line 229, Address: 0x2424bc, Func Offset: 0xac
	// Line 230, Address: 0x2424dc, Func Offset: 0xcc
	// Line 234, Address: 0x2424fc, Func Offset: 0xec
	// Line 235, Address: 0x242540, Func Offset: 0x130
	// Line 236, Address: 0x242560, Func Offset: 0x150
	// Line 237, Address: 0x242588, Func Offset: 0x178
	// Line 238, Address: 0x24259c, Func Offset: 0x18c
	// Func End, Address: 0x2425b0, Func Offset: 0x1a0
}

// 
// Start address: 0x2425b0
void MoveSparks(EFCTSparksObject* sparks)
{
	float height;
	float width;
	int i;
	// Line 242, Address: 0x2425b0, Func Offset: 0
	// Line 249, Address: 0x2425c0, Func Offset: 0x10
	// Line 252, Address: 0x2425cc, Func Offset: 0x1c
	// Line 254, Address: 0x2425f4, Func Offset: 0x44
	// Line 256, Address: 0x24260c, Func Offset: 0x5c
	// Line 257, Address: 0x242624, Func Offset: 0x74
	// Line 272, Address: 0x242628, Func Offset: 0x78
	// Line 273, Address: 0x242634, Func Offset: 0x84
	// Line 276, Address: 0x242640, Func Offset: 0x90
	// Line 279, Address: 0x242658, Func Offset: 0xa8
	// Line 281, Address: 0x2426a4, Func Offset: 0xf4
	// Line 283, Address: 0x2426b4, Func Offset: 0x104
	// Func End, Address: 0x2426c8, Func Offset: 0x118
}

// 
// Start address: 0x2426d0
void SetSparksVertex(float* pos, float width, float height, float* trans, EFCTVertexData* VertexData)
{
	// Line 287, Address: 0x2426d0, Func Offset: 0
	// Line 288, Address: 0x2426e8, Func Offset: 0x18
	// Line 289, Address: 0x24271c, Func Offset: 0x4c
	// Line 290, Address: 0x242750, Func Offset: 0x80
	// Line 291, Address: 0x24276c, Func Offset: 0x9c
	// Line 293, Address: 0x24277c, Func Offset: 0xac
	// Line 294, Address: 0x2427ac, Func Offset: 0xdc
	// Line 295, Address: 0x2427e0, Func Offset: 0x110
	// Line 296, Address: 0x2427fc, Func Offset: 0x12c
	// Line 298, Address: 0x24280c, Func Offset: 0x13c
	// Line 299, Address: 0x242840, Func Offset: 0x170
	// Line 300, Address: 0x242870, Func Offset: 0x1a0
	// Line 301, Address: 0x24288c, Func Offset: 0x1bc
	// Line 303, Address: 0x24289c, Func Offset: 0x1cc
	// Line 304, Address: 0x2428cc, Func Offset: 0x1fc
	// Line 305, Address: 0x2428fc, Func Offset: 0x22c
	// Line 306, Address: 0x242918, Func Offset: 0x248
	// Line 307, Address: 0x242928, Func Offset: 0x258
	// Func End, Address: 0x242934, Func Offset: 0x264
}

