typedef struct EFCTVertexData;
typedef struct EFCTObject;
typedef struct EFCTAnimationData;
typedef struct EFCTTask;
typedef struct EfctBrokenGlassParticle;
typedef struct EFCTTexEnvInfo;
typedef struct _shTskEXECUTE;
typedef struct _VbSCREENINFO;

typedef void(*type_5)(void*);
typedef void(*type_11)(void*);

typedef EfctBrokenGlassParticle type_0[300];
typedef float type_1[4][2];
typedef float type_2[4];
typedef float type_3[4][4];
typedef int type_4[4];
typedef unsigned char type_6[4];
typedef float type_7[4][4];
typedef float type_8[4];
typedef float type_9[4][4];
typedef char type_10[488];

struct EFCTVertexData
{
	float LocalPos[4];
	float WorldPos[4];
	int ScreenPos[4];
	unsigned char rgba[4];
	float stq[4];
	short is_valid;
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

struct EFCTTask
{
	_shTskEXECUTE exe;
	EFCTObject* pObj;
	char freemem[488];
};

struct EfctBrokenGlassParticle
{
	float pos[4];
	float vertex_start_pos[4][4];
	float src_pos[4];
	float dst_pos[4];
	float rot[4];
	float trans[4];
	float spd[4];
	float hit_time;
	float top;
	float falling_param;
	float top_time;
	short status;
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

struct _VbSCREENINFO
{
	float scr_z;
	float sx;
	float sy;
	float cx;
	float cy;
	float zmin;
	float zmax;
	float nearz;
	float farz;
};

float total_time;
float chara_pos[4][2];
float direction[4];
EfctBrokenGlassParticle particle[300];
_VbSCREENINFO VbScreenInfo;

int InitEffectObjectBrokenGlass(EFCTObject* pObj, int nIndex, float* parent_pos, float* parent_direction, float chara_info[4]);
unsigned int InitEffectVertexBrokenGlass(float* parent_pos, float* parent_rot, float base_width, float base_height, EFCTVertexData** pVertex, unsigned char* rgba);
void InitParticleParam(EfctBrokenGlassParticle* part);
void SetBrokenGlassSTValue(EFCTObject* pObj);
void ConvertLocalToWorld(EFCTVertexData* pVertex, int vertex_num, float* parent_pos, float* parent_rot, float* part_pos, float* part_rot, float* part_trans, float vertex_start_pos[4]);
void SetBrokenGlassParticalPos(float* pos, EFCTVertexData* pVertex);
void DrawBrokenGlass(void* task);
void ReplaceParticlePos(EFCTVertexData* pVertex, float* parent_pos, float* parent_rot, float* part_pos, float* part_rot, float* part_trans, float vertex_start_pos[4]);
void GetParticleTrans(EfctBrokenGlassParticle* part, float time);
short ClipParticle(EFCTVertexData* pVertex);
void CalcLightParam(EfctBrokenGlassParticle* pParticle, float* light_dir, EFCTVertexData* pVertex);
short IsBrokenGlassEffectFinished(EFCTVertexData* pVertex, unsigned short num);
void InitBrokenGlassTexEnv(EFCTTexEnvInfo* pTexInfo);
int GetBrokenGlassEffectLayerNum();
void GetAngleFromVec(float* rot, float* direction);
void SetGlassVertex(float width, float height, EFCTVertexData* VertexData);

// 
// Start address: 0x13a8f0
int InitEffectObjectBrokenGlass(EFCTObject* pObj, int nIndex, float* parent_pos, float* parent_direction, float chara_info[4])
{
	int i;
	unsigned char rgba[4];
	// Line 63, Address: 0x13a8f0, Func Offset: 0
	// Line 65, Address: 0x13a920, Func Offset: 0x30
	// Line 68, Address: 0x13a934, Func Offset: 0x44
	// Line 71, Address: 0x13a93c, Func Offset: 0x4c
	// Line 73, Address: 0x13a948, Func Offset: 0x58
	// Line 74, Address: 0x13a94c, Func Offset: 0x5c
	// Line 77, Address: 0x13a954, Func Offset: 0x64
	// Line 78, Address: 0x13a95c, Func Offset: 0x6c
	// Line 80, Address: 0x13a960, Func Offset: 0x70
	// Line 81, Address: 0x13a96c, Func Offset: 0x7c
	// Line 82, Address: 0x13a978, Func Offset: 0x88
	// Line 83, Address: 0x13a97c, Func Offset: 0x8c
	// Line 86, Address: 0x13a98c, Func Offset: 0x9c
	// Line 87, Address: 0x13a99c, Func Offset: 0xac
	// Line 90, Address: 0x13a9ac, Func Offset: 0xbc
	// Line 91, Address: 0x13a9d0, Func Offset: 0xe0
	// Line 93, Address: 0x13a9dc, Func Offset: 0xec
	// Line 98, Address: 0x13a9e8, Func Offset: 0xf8
	// Line 99, Address: 0x13a9f8, Func Offset: 0x108
	// Line 102, Address: 0x13aa08, Func Offset: 0x118
	// Line 104, Address: 0x13aa14, Func Offset: 0x124
	// Line 105, Address: 0x13aa18, Func Offset: 0x128
	// Func End, Address: 0x13aa3c, Func Offset: 0x14c
}

// 
// Start address: 0x13aa40
unsigned int InitEffectVertexBrokenGlass(float* parent_pos, float* parent_rot, float base_width, float base_height, EFCTVertexData** pVertex, unsigned char* rgba)
{
	float height;
	float width;
	int j;
	int i;
	// Line 109, Address: 0x13aa40, Func Offset: 0
	// Line 114, Address: 0x13aa80, Func Offset: 0x40
	// Line 115, Address: 0x13aa8c, Func Offset: 0x4c
	// Line 116, Address: 0x13aa94, Func Offset: 0x54
	// Line 118, Address: 0x13aa98, Func Offset: 0x58
	// Line 119, Address: 0x13aaac, Func Offset: 0x6c
	// Line 120, Address: 0x13aab8, Func Offset: 0x78
	// Line 124, Address: 0x13aac4, Func Offset: 0x84
	// Line 126, Address: 0x13aad0, Func Offset: 0x90
	// Line 127, Address: 0x13aafc, Func Offset: 0xbc
	// Line 131, Address: 0x13ab28, Func Offset: 0xe8
	// Line 134, Address: 0x13ab48, Func Offset: 0x108
	// Line 135, Address: 0x13ab54, Func Offset: 0x114
	// Line 136, Address: 0x13ab98, Func Offset: 0x158
	// Line 139, Address: 0x13abac, Func Offset: 0x16c
	// Line 146, Address: 0x13abcc, Func Offset: 0x18c
	// Line 149, Address: 0x13ac34, Func Offset: 0x1f4
	// Line 150, Address: 0x13ac64, Func Offset: 0x224
	// Line 152, Address: 0x13ac90, Func Offset: 0x250
	// Line 154, Address: 0x13ac9c, Func Offset: 0x25c
	// Line 155, Address: 0x13acc0, Func Offset: 0x280
	// Line 156, Address: 0x13acd0, Func Offset: 0x290
	// Line 157, Address: 0x13ace0, Func Offset: 0x2a0
	// Line 159, Address: 0x13acf0, Func Offset: 0x2b0
	// Line 160, Address: 0x13ad00, Func Offset: 0x2c0
	// Line 161, Address: 0x13ad14, Func Offset: 0x2d4
	// Line 163, Address: 0x13ad24, Func Offset: 0x2e4
	// Line 164, Address: 0x13ad28, Func Offset: 0x2e8
	// Func End, Address: 0x13ad58, Func Offset: 0x318
}

// 
// Start address: 0x13ad60
void InitParticleParam(EfctBrokenGlassParticle* part)
{
	// Line 168, Address: 0x13ad60, Func Offset: 0
	// Line 170, Address: 0x13ad70, Func Offset: 0x10
	// Line 171, Address: 0x13ada0, Func Offset: 0x40
	// Line 172, Address: 0x13add0, Func Offset: 0x70
	// Line 173, Address: 0x13ae00, Func Offset: 0xa0
	// Line 187, Address: 0x13ae04, Func Offset: 0xa4
	// Line 188, Address: 0x13ae20, Func Offset: 0xc0
	// Line 189, Address: 0x13ae3c, Func Offset: 0xdc
	// Line 191, Address: 0x13ae58, Func Offset: 0xf8
	// Line 197, Address: 0x13ae5c, Func Offset: 0xfc
	// Line 198, Address: 0x13ae78, Func Offset: 0x118
	// Line 199, Address: 0x13aeb4, Func Offset: 0x154
	// Line 203, Address: 0x13af08, Func Offset: 0x1a8
	// Line 204, Address: 0x13af0c, Func Offset: 0x1ac
	// Line 205, Address: 0x13af10, Func Offset: 0x1b0
	// Line 206, Address: 0x13af14, Func Offset: 0x1b4
	// Line 209, Address: 0x13af18, Func Offset: 0x1b8
	// Line 210, Address: 0x13af1c, Func Offset: 0x1bc
	// Line 211, Address: 0x13af20, Func Offset: 0x1c0
	// Line 212, Address: 0x13af24, Func Offset: 0x1c4
	// Line 214, Address: 0x13af28, Func Offset: 0x1c8
	// Func End, Address: 0x13af3c, Func Offset: 0x1dc
}

// 
// Start address: 0x13af40
void SetBrokenGlassSTValue(EFCTObject* pObj)
{
	int t_index;
	int s_index;
	int i;
	// Line 217, Address: 0x13af40, Func Offset: 0
	// Line 221, Address: 0x13af54, Func Offset: 0x14
	// Line 264, Address: 0x13af60, Func Offset: 0x20
	// Line 265, Address: 0x13afa4, Func Offset: 0x64
	// Line 266, Address: 0x13afa8, Func Offset: 0x68
	// Line 267, Address: 0x13afac, Func Offset: 0x6c
	// Line 268, Address: 0x13afb0, Func Offset: 0x70
	// Line 270, Address: 0x13afb8, Func Offset: 0x78
	// Line 271, Address: 0x13afbc, Func Offset: 0x7c
	// Line 272, Address: 0x13afc0, Func Offset: 0x80
	// Line 274, Address: 0x13afc8, Func Offset: 0x88
	// Line 275, Address: 0x13afcc, Func Offset: 0x8c
	// Line 276, Address: 0x13afd0, Func Offset: 0x90
	// Line 278, Address: 0x13afd8, Func Offset: 0x98
	// Line 279, Address: 0x13afdc, Func Offset: 0x9c
	// Line 280, Address: 0x13afe0, Func Offset: 0xa0
	// Line 282, Address: 0x13afe8, Func Offset: 0xa8
	// Line 283, Address: 0x13afec, Func Offset: 0xac
	// Line 284, Address: 0x13aff0, Func Offset: 0xb0
	// Line 286, Address: 0x13aff8, Func Offset: 0xb8
	// Line 287, Address: 0x13affc, Func Offset: 0xbc
	// Line 288, Address: 0x13b000, Func Offset: 0xc0
	// Line 290, Address: 0x13b008, Func Offset: 0xc8
	// Line 291, Address: 0x13b00c, Func Offset: 0xcc
	// Line 292, Address: 0x13b010, Func Offset: 0xd0
	// Line 295, Address: 0x13b018, Func Offset: 0xd8
	// Line 296, Address: 0x13b01c, Func Offset: 0xdc
	// Line 299, Address: 0x13b020, Func Offset: 0xe0
	// Line 301, Address: 0x13b028, Func Offset: 0xe8
	// Line 302, Address: 0x13b02c, Func Offset: 0xec
	// Line 303, Address: 0x13b030, Func Offset: 0xf0
	// Line 305, Address: 0x13b038, Func Offset: 0xf8
	// Line 306, Address: 0x13b03c, Func Offset: 0xfc
	// Line 311, Address: 0x13b040, Func Offset: 0x100
	// Line 312, Address: 0x13b070, Func Offset: 0x130
	// Line 313, Address: 0x13b08c, Func Offset: 0x14c
	// Line 314, Address: 0x13b0ac, Func Offset: 0x16c
	// Line 315, Address: 0x13b0b8, Func Offset: 0x178
	// Line 316, Address: 0x13b0c4, Func Offset: 0x184
	// Line 317, Address: 0x13b0e4, Func Offset: 0x1a4
	// Line 318, Address: 0x13b0f0, Func Offset: 0x1b0
	// Line 319, Address: 0x13b0fc, Func Offset: 0x1bc
	// Line 320, Address: 0x13b10c, Func Offset: 0x1cc
	// Func End, Address: 0x13b124, Func Offset: 0x1e4
}

// 
// Start address: 0x13b130
void ConvertLocalToWorld(EFCTVertexData* pVertex, int vertex_num, float* parent_pos, float* parent_rot, float* part_pos, float* part_rot, float* part_trans, float vertex_start_pos[4])
{
	int i;
	float trans_y[4];
	float trans_xz[4];
	float lw_mtx[4][4];
	float local_mtx[4][4];
	float parent_rot_mtx[4][4];
	float particle_rot_mtx[4][4];
	// Line 332, Address: 0x13b130, Func Offset: 0
	// Line 337, Address: 0x13b168, Func Offset: 0x38
	// Line 338, Address: 0x13b17c, Func Offset: 0x4c
	// Line 341, Address: 0x13b190, Func Offset: 0x60
	// Line 342, Address: 0x13b1a0, Func Offset: 0x70
	// Line 343, Address: 0x13b1a8, Func Offset: 0x78
	// Line 346, Address: 0x13b1b0, Func Offset: 0x80
	// Line 352, Address: 0x13b1d8, Func Offset: 0xa8
	// Line 359, Address: 0x13b210, Func Offset: 0xe0
	// Line 360, Address: 0x13b238, Func Offset: 0x108
	// Line 361, Address: 0x13b270, Func Offset: 0x140
	// Line 365, Address: 0x13b2a0, Func Offset: 0x170
	// Line 368, Address: 0x13b2b0, Func Offset: 0x180
	// Line 371, Address: 0x13b2e0, Func Offset: 0x1b0
	// Line 372, Address: 0x13b308, Func Offset: 0x1d8
	// Line 375, Address: 0x13b330, Func Offset: 0x200
	// Line 377, Address: 0x13b33c, Func Offset: 0x20c
	// Line 378, Address: 0x13b380, Func Offset: 0x250
	// Line 379, Address: 0x13b3b0, Func Offset: 0x280
	// Line 380, Address: 0x13b3c4, Func Offset: 0x294
	// Func End, Address: 0x13b3ec, Func Offset: 0x2bc
}

// 
// Start address: 0x13b3f0
void SetBrokenGlassParticalPos(float* pos, EFCTVertexData* pVertex)
{
	int i;
	// Line 388, Address: 0x13b3f0, Func Offset: 0
	// Line 391, Address: 0x13b3f4, Func Offset: 0x4
	// Line 392, Address: 0x13b400, Func Offset: 0x10
	// Line 393, Address: 0x13b424, Func Offset: 0x34
	// Line 394, Address: 0x13b434, Func Offset: 0x44
	// Line 395, Address: 0x13b464, Func Offset: 0x74
	// Func End, Address: 0x13b46c, Func Offset: 0x7c
}

// 
// Start address: 0x13b470
void DrawBrokenGlass(void* task)
{
	float l_pos_bakcup[4][4];
	int j;
	int i;
	EFCTTask* pTask;
	// Line 398, Address: 0x13b470, Func Offset: 0
	// Line 403, Address: 0x13b480, Func Offset: 0x10
	// Line 404, Address: 0x13b484, Func Offset: 0x14
	// Line 405, Address: 0x13b48c, Func Offset: 0x1c
	// Line 410, Address: 0x13b4b4, Func Offset: 0x44
	// Line 413, Address: 0x13b4d0, Func Offset: 0x60
	// Line 416, Address: 0x13b4dc, Func Offset: 0x6c
	// Line 420, Address: 0x13b504, Func Offset: 0x94
	// Line 430, Address: 0x13b520, Func Offset: 0xb0
	// Line 431, Address: 0x13b53c, Func Offset: 0xcc
	// Line 434, Address: 0x13b540, Func Offset: 0xd0
	// Line 435, Address: 0x13b54c, Func Offset: 0xdc
	// Line 436, Address: 0x13b580, Func Offset: 0x110
	// Line 439, Address: 0x13b594, Func Offset: 0x124
	// Line 461, Address: 0x13b5fc, Func Offset: 0x18c
	// Line 462, Address: 0x13b600, Func Offset: 0x190
	// Line 465, Address: 0x13b614, Func Offset: 0x1a4
	// Line 468, Address: 0x13b620, Func Offset: 0x1b0
	// Line 470, Address: 0x13b62c, Func Offset: 0x1bc
	// Line 471, Address: 0x13b654, Func Offset: 0x1e4
	// Line 478, Address: 0x13b66c, Func Offset: 0x1fc
	// Line 479, Address: 0x13b670, Func Offset: 0x200
	// Line 483, Address: 0x13b684, Func Offset: 0x214
	// Line 485, Address: 0x13b690, Func Offset: 0x220
	// Line 486, Address: 0x13b6b8, Func Offset: 0x248
	// Line 488, Address: 0x13b6e0, Func Offset: 0x270
	// Line 492, Address: 0x13b6f4, Func Offset: 0x284
	// Line 495, Address: 0x13b700, Func Offset: 0x290
	// Line 497, Address: 0x13b71c, Func Offset: 0x2ac
	// Line 503, Address: 0x13b72c, Func Offset: 0x2bc
	// Line 505, Address: 0x13b734, Func Offset: 0x2c4
	// Func End, Address: 0x13b74c, Func Offset: 0x2dc
}

// 
// Start address: 0x13b750
void ReplaceParticlePos(EFCTVertexData* pVertex, float* parent_pos, float* parent_rot, float* part_pos, float* part_rot, float* part_trans, float vertex_start_pos[4])
{
	// Line 509, Address: 0x13b750, Func Offset: 0
	// Line 510, Address: 0x13b790, Func Offset: 0x40
	// Line 511, Address: 0x13b7b8, Func Offset: 0x68
	// Line 513, Address: 0x13b7e0, Func Offset: 0x90
	// Line 514, Address: 0x13b804, Func Offset: 0xb4
	// Line 516, Address: 0x13b81c, Func Offset: 0xcc
	// Line 517, Address: 0x13b840, Func Offset: 0xf0
	// Line 520, Address: 0x13b858, Func Offset: 0x108
	// Line 522, Address: 0x13b880, Func Offset: 0x130
	// Func End, Address: 0x13b8ac, Func Offset: 0x15c
}

// 
// Start address: 0x13b8b0
void GetParticleTrans(EfctBrokenGlassParticle* part, float time)
{
	float v;
	// Line 576, Address: 0x13b8b0, Func Offset: 0
	// Line 584, Address: 0x13b8c8, Func Offset: 0x18
	// Line 585, Address: 0x13b8d4, Func Offset: 0x24
	// Line 592, Address: 0x13b8e0, Func Offset: 0x30
	// Line 593, Address: 0x13b8fc, Func Offset: 0x4c
	// Line 596, Address: 0x13b924, Func Offset: 0x74
	// Line 597, Address: 0x13b940, Func Offset: 0x90
	// Line 598, Address: 0x13b950, Func Offset: 0xa0
	// Line 599, Address: 0x13b958, Func Offset: 0xa8
	// Line 600, Address: 0x13b98c, Func Offset: 0xdc
	// Line 603, Address: 0x13b990, Func Offset: 0xe0
	// Line 606, Address: 0x13b998, Func Offset: 0xe8
	// Line 613, Address: 0x13b9d4, Func Offset: 0x124
	// Func End, Address: 0x13b9ec, Func Offset: 0x13c
}

// 
// Start address: 0x13b9f0
short ClipParticle(EFCTVertexData* pVertex)
{
	short valid;
	int i;
	// Line 618, Address: 0x13b9f0, Func Offset: 0
	// Line 620, Address: 0x13ba08, Func Offset: 0x18
	// Line 623, Address: 0x13ba0c, Func Offset: 0x1c
	// Line 626, Address: 0x13ba18, Func Offset: 0x28
	// Line 628, Address: 0x13ba3c, Func Offset: 0x4c
	// Line 629, Address: 0x13ba40, Func Offset: 0x50
	// Line 631, Address: 0x13ba48, Func Offset: 0x58
	// Line 634, Address: 0x13ba60, Func Offset: 0x70
	// Line 635, Address: 0x13ba6c, Func Offset: 0x7c
	// Line 636, Address: 0x13ba80, Func Offset: 0x90
	// Line 638, Address: 0x13ba94, Func Offset: 0xa4
	// Line 639, Address: 0x13ba98, Func Offset: 0xa8
	// Func End, Address: 0x13bab4, Func Offset: 0xc4
}

// 
// Start address: 0x13bac0
void CalcLightParam(EfctBrokenGlassParticle* pParticle, float* light_dir, EFCTVertexData* pVertex)
{
	int rgba[4];
	unsigned short rgb;
	unsigned short alpha;
	// Line 665, Address: 0x13bac0, Func Offset: 0
	// Line 666, Address: 0x13bac8, Func Offset: 0x8
	// Line 667, Address: 0x13bacc, Func Offset: 0xc
	// Line 670, Address: 0x13bad0, Func Offset: 0x10
	// Line 671, Address: 0x13bb10, Func Offset: 0x50
	// Line 672, Address: 0x13bb18, Func Offset: 0x58
	// Line 674, Address: 0x13bb20, Func Offset: 0x60
	// Line 675, Address: 0x13bb60, Func Offset: 0xa0
	// Line 676, Address: 0x13bb68, Func Offset: 0xa8
	// Line 679, Address: 0x13bb70, Func Offset: 0xb0
	// Line 680, Address: 0x13bb7c, Func Offset: 0xbc
	// Line 681, Address: 0x13bb84, Func Offset: 0xc4
	// Line 682, Address: 0x13bb8c, Func Offset: 0xcc
	// Line 683, Address: 0x13bb94, Func Offset: 0xd4
	// Line 684, Address: 0x13bba4, Func Offset: 0xe4
	// Func End, Address: 0x13bbb4, Func Offset: 0xf4
}

// 
// Start address: 0x13bbc0
short IsBrokenGlassEffectFinished(EFCTVertexData* pVertex, unsigned short num)
{
	short ret;
	int i;
	// Line 691, Address: 0x13bbc0, Func Offset: 0
	// Line 711, Address: 0x13bbc4, Func Offset: 0x4
	// Line 713, Address: 0x13bbd0, Func Offset: 0x10
	// Line 715, Address: 0x13bbfc, Func Offset: 0x3c
	// Line 716, Address: 0x13bc00, Func Offset: 0x40
	// Line 718, Address: 0x13bc08, Func Offset: 0x48
	// Line 723, Address: 0x13bc20, Func Offset: 0x60
	// Func End, Address: 0x13bc28, Func Offset: 0x68
}

// 
// Start address: 0x13bc30
void InitBrokenGlassTexEnv(EFCTTexEnvInfo* pTexInfo)
{
	// Line 729, Address: 0x13bc30, Func Offset: 0
	// Line 731, Address: 0x13bc34, Func Offset: 0x4
	// Line 732, Address: 0x13bc3c, Func Offset: 0xc
	// Line 733, Address: 0x13bc40, Func Offset: 0x10
	// Func End, Address: 0x13bc48, Func Offset: 0x18
}

// 
// Start address: 0x13bc50
int GetBrokenGlassEffectLayerNum()
{
	// Line 740, Address: 0x13bc50, Func Offset: 0
	// Line 741, Address: 0x13bc54, Func Offset: 0x4
	// Func End, Address: 0x13bc5c, Func Offset: 0xc
}

// 
// Start address: 0x13bc60
void GetAngleFromVec(float* rot, float* direction)
{
	// Line 745, Address: 0x13bc60, Func Offset: 0
	// Line 752, Address: 0x13bc68, Func Offset: 0x8
	// Line 755, Address: 0x13bc70, Func Offset: 0x10
	// Func End, Address: 0x13bc80, Func Offset: 0x20
}

// 
// Start address: 0x13bc80
void SetGlassVertex(float width, float height, EFCTVertexData* VertexData)
{
	// Line 771, Address: 0x13bc80, Func Offset: 0
	// Line 772, Address: 0x13bca8, Func Offset: 0x28
	// Line 773, Address: 0x13bcdc, Func Offset: 0x5c
	// Line 774, Address: 0x13bd10, Func Offset: 0x90
	// Line 775, Address: 0x13bd14, Func Offset: 0x94
	// Line 777, Address: 0x13bd1c, Func Offset: 0x9c
	// Line 778, Address: 0x13bd4c, Func Offset: 0xcc
	// Line 779, Address: 0x13bd7c, Func Offset: 0xfc
	// Line 780, Address: 0x13bd80, Func Offset: 0x100
	// Line 782, Address: 0x13bd88, Func Offset: 0x108
	// Line 783, Address: 0x13bdb8, Func Offset: 0x138
	// Line 784, Address: 0x13bde8, Func Offset: 0x168
	// Line 785, Address: 0x13bdec, Func Offset: 0x16c
	// Line 787, Address: 0x13bdf4, Func Offset: 0x174
	// Line 788, Address: 0x13be24, Func Offset: 0x1a4
	// Line 789, Address: 0x13be54, Func Offset: 0x1d4
	// Line 790, Address: 0x13be58, Func Offset: 0x1d8
	// Line 792, Address: 0x13be60, Func Offset: 0x1e0
	// Func End, Address: 0x13be84, Func Offset: 0x204
}

