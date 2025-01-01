typedef struct EFCTAnimationData;
typedef struct EFCTVertexData;
typedef struct EFCTTask;
typedef struct EfctBrokenGlassParticle;
typedef struct EFCTTexEnvInfo;
typedef struct EFCTObject;
typedef struct _shTskEXECUTE;
typedef struct _VbSCREENINFO;

typedef void(*type_0)(void*);
typedef void(*type_10)(void*);

typedef float type_1[4];
typedef float type_2[4][4];
typedef int type_3[4];
typedef EfctBrokenGlassParticle type_4[300];
typedef float type_5[4][2];
typedef unsigned char type_6[4];
typedef float type_7[4];
typedef float type_8[4][4];
typedef char type_9[488];
typedef float type_11[4][4];

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
	float vec[4];
	float hit_time;
	short status;
};

struct EFCTTexEnvInfo
{
	unsigned short clut_id;
	unsigned short tfx;
	unsigned short transparency;
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

void ConvertLocalToWorld(EFCTVertexData* pVertex, int vertex_num, float* parent_pos, float* parent_rot, float* part_pos, float* part_rot, float* part_trans, float vertex_start_pos[4]);
void DrawBrokenGlass(void* task);
void ReplaceParticlePos(EFCTVertexData* pVertex, float* parent_pos, float* parent_rot, float* part_pos, float* part_rot, float* part_trans, float vertex_start_pos[4]);
void GetParticleTrans(float* trans, float* vec, float time);
short ClipParticle(EFCTVertexData* pVertex);
short ClipVertex(int* vec);
void CalcLightParam(EfctBrokenGlassParticle* pParticle, float* light_dir, EFCTVertexData* pVertex);
short IsBrokenGlassEffectFinished();
void InitBrokenGlassTexEnv(EFCTTexEnvInfo* pTexInfo);
int GetBrokenGlassEffectLayerNum();

// 
// Start address: 0x146780
void ConvertLocalToWorld(EFCTVertexData* pVertex, int vertex_num, float* parent_pos, float* parent_rot, float* part_pos, float* part_rot, float* part_trans, float vertex_start_pos[4])
{
	int i;
	float trans_y[4];
	float trans_xz[4];
	float lw_mtx[4][4];
	float local_mtx[4][4];
	float parent_rot_mtx[4][4];
	float particle_rot_mtx[4][4];
	// Line 325, Address: 0x146780, Func Offset: 0
	// Line 330, Address: 0x1467b8, Func Offset: 0x38
	// Line 331, Address: 0x1467cc, Func Offset: 0x4c
	// Line 334, Address: 0x1467e0, Func Offset: 0x60
	// Line 335, Address: 0x1467f4, Func Offset: 0x74
	// Line 336, Address: 0x1467fc, Func Offset: 0x7c
	// Line 339, Address: 0x146804, Func Offset: 0x84
	// Line 345, Address: 0x14682c, Func Offset: 0xac
	// Line 352, Address: 0x146868, Func Offset: 0xe8
	// Line 353, Address: 0x146890, Func Offset: 0x110
	// Line 354, Address: 0x1468cc, Func Offset: 0x14c
	// Line 358, Address: 0x146900, Func Offset: 0x180
	// Line 361, Address: 0x146914, Func Offset: 0x194
	// Line 364, Address: 0x146948, Func Offset: 0x1c8
	// Line 365, Address: 0x146970, Func Offset: 0x1f0
	// Line 368, Address: 0x1469a0, Func Offset: 0x220
	// Line 370, Address: 0x1469ac, Func Offset: 0x22c
	// Line 371, Address: 0x1469f0, Func Offset: 0x270
	// Line 372, Address: 0x146a40, Func Offset: 0x2c0
	// Line 373, Address: 0x146a54, Func Offset: 0x2d4
	// Func End, Address: 0x146a7c, Func Offset: 0x2fc
}

// 
// Start address: 0x146a80
void DrawBrokenGlass(void* task)
{
	float l_pos_bakcup[4][4];
	int j;
	int i;
	EFCTTask* pTask;
	int start;
	// Line 391, Address: 0x146a80, Func Offset: 0
	// Line 397, Address: 0x146a90, Func Offset: 0x10
	// Line 398, Address: 0x146a94, Func Offset: 0x14
	// Line 399, Address: 0x146a9c, Func Offset: 0x1c
	// Line 413, Address: 0x146ac4, Func Offset: 0x44
	// Line 453, Address: 0x146ad0, Func Offset: 0x50
	// Line 455, Address: 0x146ae0, Func Offset: 0x60
	// Line 458, Address: 0x146afc, Func Offset: 0x7c
	// Line 461, Address: 0x146b08, Func Offset: 0x88
	// Line 465, Address: 0x146b40, Func Offset: 0xc0
	// Line 467, Address: 0x146b78, Func Offset: 0xf8
	// Line 468, Address: 0x146bec, Func Offset: 0x16c
	// Line 469, Address: 0x146c64, Func Offset: 0x1e4
	// Line 470, Address: 0x146cac, Func Offset: 0x22c
	// Line 471, Address: 0x146d24, Func Offset: 0x2a4
	// Line 475, Address: 0x146d2c, Func Offset: 0x2ac
	// Line 476, Address: 0x146d84, Func Offset: 0x304
	// Line 479, Address: 0x146d88, Func Offset: 0x308
	// Line 480, Address: 0x146d94, Func Offset: 0x314
	// Line 481, Address: 0x146dc8, Func Offset: 0x348
	// Line 484, Address: 0x146ddc, Func Offset: 0x35c
	// Line 506, Address: 0x146e9c, Func Offset: 0x41c
	// Line 507, Address: 0x146ea0, Func Offset: 0x420
	// Line 513, Address: 0x146eb4, Func Offset: 0x434
	// Line 516, Address: 0x146eb8, Func Offset: 0x438
	// Line 519, Address: 0x146ec4, Func Offset: 0x444
	// Line 521, Address: 0x146ed0, Func Offset: 0x450
	// Line 523, Address: 0x146f08, Func Offset: 0x488
	// Line 525, Address: 0x146f40, Func Offset: 0x4c0
	// Line 528, Address: 0x146f68, Func Offset: 0x4e8
	// Line 532, Address: 0x146f7c, Func Offset: 0x4fc
	// Line 534, Address: 0x146f88, Func Offset: 0x508
	// Line 535, Address: 0x146fc0, Func Offset: 0x540
	// Line 536, Address: 0x14700c, Func Offset: 0x58c
	// Line 537, Address: 0x147010, Func Offset: 0x590
	// Line 541, Address: 0x147024, Func Offset: 0x5a4
	// Line 544, Address: 0x147030, Func Offset: 0x5b0
	// Line 546, Address: 0x147050, Func Offset: 0x5d0
	// Line 547, Address: 0x147060, Func Offset: 0x5e0
	// Line 549, Address: 0x147084, Func Offset: 0x604
	// Line 550, Address: 0x147090, Func Offset: 0x610
	// Line 552, Address: 0x147098, Func Offset: 0x618
	// Func End, Address: 0x1470b0, Func Offset: 0x630
}

// 
// Start address: 0x1470b0
void ReplaceParticlePos(EFCTVertexData* pVertex, float* parent_pos, float* parent_rot, float* part_pos, float* part_rot, float* part_trans, float vertex_start_pos[4])
{
	// Line 556, Address: 0x1470b0, Func Offset: 0
	// Line 557, Address: 0x1470d4, Func Offset: 0x24
	// Line 558, Address: 0x1470f8, Func Offset: 0x48
	// Line 560, Address: 0x147118, Func Offset: 0x68
	// Line 561, Address: 0x147140, Func Offset: 0x90
	// Line 563, Address: 0x147164, Func Offset: 0xb4
	// Line 564, Address: 0x14718c, Func Offset: 0xdc
	// Line 567, Address: 0x1471ac, Func Offset: 0xfc
	// Line 569, Address: 0x1471d4, Func Offset: 0x124
	// Func End, Address: 0x1471e4, Func Offset: 0x134
}

// 
// Start address: 0x1471f0
void GetParticleTrans(float* trans, float* vec, float time)
{
	// Line 627, Address: 0x1471f0, Func Offset: 0
	// Line 628, Address: 0x147208, Func Offset: 0x18
	// Line 629, Address: 0x147254, Func Offset: 0x64
	// Line 630, Address: 0x14726c, Func Offset: 0x7c
	// Line 631, Address: 0x147278, Func Offset: 0x88
	// Func End, Address: 0x147280, Func Offset: 0x90
}

// 
// Start address: 0x147280
short ClipParticle(EFCTVertexData* pVertex)
{
	short valid;
	int i;
	// Line 636, Address: 0x147280, Func Offset: 0
	// Line 638, Address: 0x147294, Func Offset: 0x14
	// Line 641, Address: 0x1472a0, Func Offset: 0x20
	// Line 643, Address: 0x1472ac, Func Offset: 0x2c
	// Line 645, Address: 0x1472e0, Func Offset: 0x60
	// Line 646, Address: 0x1472e4, Func Offset: 0x64
	// Line 648, Address: 0x1472ec, Func Offset: 0x6c
	// Line 651, Address: 0x147300, Func Offset: 0x80
	// Line 652, Address: 0x14730c, Func Offset: 0x8c
	// Line 653, Address: 0x147324, Func Offset: 0xa4
	// Line 655, Address: 0x147334, Func Offset: 0xb4
	// Line 656, Address: 0x147344, Func Offset: 0xc4
	// Func End, Address: 0x14735c, Func Offset: 0xdc
}

// 
// Start address: 0x147360
short ClipVertex(int* vec)
{
	int vw;
	int vy;
	int vx;
	int ret;
	// Line 661, Address: 0x147360, Func Offset: 0
	// Line 662, Address: 0x147378, Func Offset: 0x18
	// Line 663, Address: 0x14737c, Func Offset: 0x1c
	// Line 664, Address: 0x147388, Func Offset: 0x28
	// Line 665, Address: 0x147394, Func Offset: 0x34
	// Line 668, Address: 0x14739c, Func Offset: 0x3c
	// Line 671, Address: 0x147424, Func Offset: 0xc4
	// Line 673, Address: 0x147428, Func Offset: 0xc8
	// Line 674, Address: 0x14742c, Func Offset: 0xcc
	// Func End, Address: 0x147448, Func Offset: 0xe8
}

// 
// Start address: 0x147450
void CalcLightParam(EfctBrokenGlassParticle* pParticle, float* light_dir, EFCTVertexData* pVertex)
{
	int alpha;
	int i;
	// Line 681, Address: 0x147450, Func Offset: 0
	// Line 683, Address: 0x147468, Func Offset: 0x18
	// Line 685, Address: 0x14746c, Func Offset: 0x1c
	// Line 686, Address: 0x1474d0, Func Offset: 0x80
	// Line 688, Address: 0x1474d4, Func Offset: 0x84
	// Line 689, Address: 0x14753c, Func Offset: 0xec
	// Line 692, Address: 0x147540, Func Offset: 0xf0
	// Line 693, Address: 0x14754c, Func Offset: 0xfc
	// Line 694, Address: 0x147568, Func Offset: 0x118
	// Line 695, Address: 0x14757c, Func Offset: 0x12c
	// Func End, Address: 0x147590, Func Offset: 0x140
}

// 
// Start address: 0x147590
short IsBrokenGlassEffectFinished()
{
	short ret;
	int i;
	// Line 700, Address: 0x147590, Func Offset: 0
	// Line 702, Address: 0x14759c, Func Offset: 0xc
	// Line 714, Address: 0x1475a8, Func Offset: 0x18
	// Line 715, Address: 0x1475b4, Func Offset: 0x24
	// Line 716, Address: 0x1475ec, Func Offset: 0x5c
	// Line 717, Address: 0x1475f0, Func Offset: 0x60
	// Line 719, Address: 0x1475f8, Func Offset: 0x68
	// Line 722, Address: 0x147610, Func Offset: 0x80
	// Line 723, Address: 0x147614, Func Offset: 0x84
	// Func End, Address: 0x147628, Func Offset: 0x98
}

// 
// Start address: 0x147630
void InitBrokenGlassTexEnv(EFCTTexEnvInfo* pTexInfo)
{
	// Line 727, Address: 0x147630, Func Offset: 0
	// Line 731, Address: 0x147638, Func Offset: 0x8
	// Line 736, Address: 0x147644, Func Offset: 0x14
	// Line 737, Address: 0x147650, Func Offset: 0x20
	// Line 738, Address: 0x147658, Func Offset: 0x28
	// Func End, Address: 0x147664, Func Offset: 0x34
}

// 
// Start address: 0x147670
int GetBrokenGlassEffectLayerNum()
{
	// Line 745, Address: 0x147670, Func Offset: 0
	// Line 746, Address: 0x147674, Func Offset: 0x4
	// Func End, Address: 0x14767c, Func Offset: 0xc
}

