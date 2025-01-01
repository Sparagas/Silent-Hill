typedef struct EFCTAnimationData;
typedef struct EFCTVertexData;
typedef struct EFCTSparksObject;
typedef struct EFCTObject;
typedef struct EFCTSparksPlane;

typedef void(*type_1)(void*);

typedef int type_0[4];
typedef float type_2[4];
typedef unsigned char type_3[4];
typedef EFCTSparksPlane type_4[2];

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

struct EFCTVertexData
{
	float LocalPos[4];
	float WorldPos[4];
	int ScreenPos[4];
	unsigned char rgba[4];
	float stq[4];
	short is_valid;
};

struct EFCTSparksObject
{
	EFCTObject base_obj;
	EFCTSparksPlane plane[2];
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

struct EFCTSparksPlane
{
	float width;
	float height;
	int kind;
	float trans[4];
	float speed[4];
	float timer;
	float life_span;
	float pos[4];
	int rgba[4];
};


void SetSparksSize(float* width, float* height);
void SetSparksKind(int* kind);
void SetSparksStartPos(int kind, float* trans);
void SetSparksSpeed(int kind, float* speed);
void SetSparksRGBA(int* rgba);
void RenewSparksPos(EFCTSparksPlane* sparks);
void DrawSparks(EFCTSparksObject* sparks);
void CountSparksLifeTimer(EFCTSparksObject* sparks);
void RenewSparksRGBA(EFCTSparksObject* sparks);
void MoveSparks(EFCTSparksObject* sparks);
void SetSparksVertex(float* pos, float width, float height, float* trans, EFCTVertexData* VertexData);

// 
// Start address: 0x232590
void SetSparksSize(float* width, float* height)
{
	// Line 85, Address: 0x232590, Func Offset: 0
	// Line 86, Address: 0x2325a8, Func Offset: 0x18
	// Line 87, Address: 0x2325d4, Func Offset: 0x44
	// Line 88, Address: 0x232600, Func Offset: 0x70
	// Func End, Address: 0x232618, Func Offset: 0x88
}

// 
// Start address: 0x232620
void SetSparksKind(int* kind)
{
	// Line 93, Address: 0x232620, Func Offset: 0
	// Line 94, Address: 0x232630, Func Offset: 0x10
	// Line 95, Address: 0x232654, Func Offset: 0x34
	// Line 96, Address: 0x232658, Func Offset: 0x38
	// Line 98, Address: 0x232660, Func Offset: 0x40
	// Line 100, Address: 0x232668, Func Offset: 0x48
	// Func End, Address: 0x23267c, Func Offset: 0x5c
}

// 
// Start address: 0x232680
void SetSparksStartPos(int kind, float* trans)
{
	float rate;
	// Line 104, Address: 0x232680, Func Offset: 0
	// Line 107, Address: 0x232698, Func Offset: 0x18
	// Line 108, Address: 0x2326b4, Func Offset: 0x34
	// Line 109, Address: 0x2326bc, Func Offset: 0x3c
	// Line 112, Address: 0x2326c8, Func Offset: 0x48
	// Line 114, Address: 0x2326f8, Func Offset: 0x78
	// Line 115, Address: 0x232714, Func Offset: 0x94
	// Func End, Address: 0x23272c, Func Offset: 0xac
}

// 
// Start address: 0x232730
void SetSparksSpeed(int kind, float* speed)
{
	float max;
	float min;
	// Line 119, Address: 0x232730, Func Offset: 0
	// Line 124, Address: 0x232748, Func Offset: 0x18
	// Line 125, Address: 0x232774, Func Offset: 0x44
	// Line 126, Address: 0x23277c, Func Offset: 0x4c
	// Line 131, Address: 0x232788, Func Offset: 0x58
	// Line 134, Address: 0x2327b8, Func Offset: 0x88
	// Line 135, Address: 0x2327d4, Func Offset: 0xa4
	// Func End, Address: 0x2327ec, Func Offset: 0xbc
}

// 
// Start address: 0x2327f0
void SetSparksRGBA(int* rgba)
{
	float rate;
	// Line 139, Address: 0x2327f0, Func Offset: 0
	// Line 140, Address: 0x232804, Func Offset: 0x14
	// Line 142, Address: 0x232834, Func Offset: 0x44
	// Line 143, Address: 0x232854, Func Offset: 0x64
	// Line 144, Address: 0x232874, Func Offset: 0x84
	// Line 145, Address: 0x232878, Func Offset: 0x88
	// Line 146, Address: 0x232880, Func Offset: 0x90
	// Func End, Address: 0x232898, Func Offset: 0xa8
}

// 
// Start address: 0x2328a0
void RenewSparksPos(EFCTSparksPlane* sparks)
{
	float ratio;
	// Line 150, Address: 0x2328a0, Func Offset: 0
	// Line 151, Address: 0x2328b0, Func Offset: 0x10
	// Line 152, Address: 0x2328d8, Func Offset: 0x38
	// Line 153, Address: 0x2328e4, Func Offset: 0x44
	// Line 156, Address: 0x2328f0, Func Offset: 0x50
	// Line 157, Address: 0x2328fc, Func Offset: 0x5c
	// Line 161, Address: 0x232908, Func Offset: 0x68
	// Func End, Address: 0x23291c, Func Offset: 0x7c
}

// 
// Start address: 0x232920
void DrawSparks(EFCTSparksObject* sparks)
{
	// Line 213, Address: 0x232920, Func Offset: 0
	// Line 215, Address: 0x232930, Func Offset: 0x10
	// Line 216, Address: 0x232938, Func Offset: 0x18
	// Line 221, Address: 0x23295c, Func Offset: 0x3c
	// Line 224, Address: 0x232964, Func Offset: 0x44
	// Line 227, Address: 0x232970, Func Offset: 0x50
	// Line 231, Address: 0x23297c, Func Offset: 0x5c
	// Line 239, Address: 0x232988, Func Offset: 0x68
	// Line 242, Address: 0x232994, Func Offset: 0x74
	// Line 244, Address: 0x2329a0, Func Offset: 0x80
	// Func End, Address: 0x2329b4, Func Offset: 0x94
}

// 
// Start address: 0x2329c0
void CountSparksLifeTimer(EFCTSparksObject* sparks)
{
	int i;
	// Line 248, Address: 0x2329c0, Func Offset: 0
	// Line 251, Address: 0x2329d4, Func Offset: 0x14
	// Line 252, Address: 0x2329dc, Func Offset: 0x1c
	// Line 254, Address: 0x2329e8, Func Offset: 0x28
	// Line 256, Address: 0x232a10, Func Offset: 0x50
	// Line 258, Address: 0x232a28, Func Offset: 0x68
	// Line 259, Address: 0x232a2c, Func Offset: 0x6c
	// Line 260, Address: 0x232a30, Func Offset: 0x70
	// Line 261, Address: 0x232a44, Func Offset: 0x84
	// Line 263, Address: 0x232a48, Func Offset: 0x88
	// Func End, Address: 0x232a60, Func Offset: 0xa0
}

// 
// Start address: 0x232a60
void RenewSparksRGBA(EFCTSparksObject* sparks)
{
	int i;
	int rgba[4];
	float ratio;
	// Line 268, Address: 0x232a60, Func Offset: 0
	// Line 273, Address: 0x232a84, Func Offset: 0x24
	// Line 275, Address: 0x232a90, Func Offset: 0x30
	// Line 276, Address: 0x232af4, Func Offset: 0x94
	// Line 277, Address: 0x232b14, Func Offset: 0xb4
	// Line 278, Address: 0x232b34, Func Offset: 0xd4
	// Line 282, Address: 0x232b54, Func Offset: 0xf4
	// Line 283, Address: 0x232b80, Func Offset: 0x120
	// Line 284, Address: 0x232ba0, Func Offset: 0x140
	// Line 285, Address: 0x232bc0, Func Offset: 0x160
	// Line 286, Address: 0x232bd4, Func Offset: 0x174
	// Func End, Address: 0x232bfc, Func Offset: 0x19c
}

// 
// Start address: 0x232c00
void MoveSparks(EFCTSparksObject* sparks)
{
	float height;
	float width;
	int i;
	// Line 290, Address: 0x232c00, Func Offset: 0
	// Line 297, Address: 0x232c28, Func Offset: 0x28
	// Line 300, Address: 0x232c34, Func Offset: 0x34
	// Line 302, Address: 0x232c60, Func Offset: 0x60
	// Line 304, Address: 0x232c70, Func Offset: 0x70
	// Line 306, Address: 0x232c7c, Func Offset: 0x7c
	// Line 308, Address: 0x232c94, Func Offset: 0x94
	// Line 310, Address: 0x232ca4, Func Offset: 0xa4
	// Line 313, Address: 0x232cb0, Func Offset: 0xb0
	// Line 314, Address: 0x232cb8, Func Offset: 0xb8
	// Line 317, Address: 0x232cbc, Func Offset: 0xbc
	// Line 320, Address: 0x232cc8, Func Offset: 0xc8
	// Line 322, Address: 0x232cf4, Func Offset: 0xf4
	// Line 324, Address: 0x232d04, Func Offset: 0x104
	// Func End, Address: 0x232d30, Func Offset: 0x130
}

// 
// Start address: 0x232d30
void SetSparksVertex(float* pos, float width, float height, float* trans, EFCTVertexData* VertexData)
{
	// Line 329, Address: 0x232d30, Func Offset: 0
	// Line 330, Address: 0x232d54, Func Offset: 0x24
	// Line 331, Address: 0x232d70, Func Offset: 0x40
	// Line 332, Address: 0x232d80, Func Offset: 0x50
	// Line 334, Address: 0x232d88, Func Offset: 0x58
	// Line 335, Address: 0x232da0, Func Offset: 0x70
	// Line 336, Address: 0x232db4, Func Offset: 0x84
	// Line 337, Address: 0x232dc4, Func Offset: 0x94
	// Line 339, Address: 0x232dc8, Func Offset: 0x98
	// Line 340, Address: 0x232ddc, Func Offset: 0xac
	// Line 341, Address: 0x232df4, Func Offset: 0xc4
	// Line 342, Address: 0x232e04, Func Offset: 0xd4
	// Line 344, Address: 0x232e08, Func Offset: 0xd8
	// Line 345, Address: 0x232e1c, Func Offset: 0xec
	// Line 346, Address: 0x232e30, Func Offset: 0x100
	// Line 347, Address: 0x232e40, Func Offset: 0x110
	// Line 348, Address: 0x232e44, Func Offset: 0x114
	// Func End, Address: 0x232e4c, Func Offset: 0x11c
}

