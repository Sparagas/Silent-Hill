typedef struct EFCTObject;
typedef struct EFCTTask;
typedef struct EFCTTexEnvInfo;
typedef struct shAttackInfo;
typedef union _anon0;
typedef struct EFCTAnimationData;
typedef struct EFCTVertexData;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct _shTskEXECUTE;

typedef void(*type_2)(void*);
typedef void(*type_10)(EFCTObject*);
typedef void(*type_13)(void*);

typedef unsigned char type_0[20];
typedef int type_1[4];
typedef float type_3[4];
typedef unsigned char type_4[4];
typedef float type_5[4];
typedef float type_6[4][4];
typedef shAttackInfo type_7[66];
typedef unsigned char type_8[14];
typedef unsigned char type_9[69];
typedef char type_11[488];
typedef unsigned char type_12[14];
typedef unsigned char type_14[97];

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

struct EFCTTexEnvInfo
{
	unsigned short clut_id;
	unsigned short tfx;
	unsigned short transparency;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon0 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
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

struct EFCTVertexData
{
	float LocalPos[4];
	float WorldPos[4];
	int ScreenPos[4];
	unsigned char rgba[4];
	float stq[4];
	short is_valid;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _shTskEXECUTE
{
	void(*adrs)(void*);
	void* next;
	void* prev;
	int mode;
	int atr;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
void(*SetBloodPoolAnimParam)(EFCTObject*);

int InitEffectObjectGunFire(EFCTObject* pObj, int nIndex, float* Pos, float* vec, int wep_kind, unsigned char light_status);
int InitEffectObjectGunSmoke(EFCTObject* pObj, int nIndex, float* Pos, int wep_kind, unsigned char light_status);
void GetGunFireObjectSize(int weapon_kind, float* width, float* height, float* depth);
unsigned int InitEffectVertexGunFire(float* Pos, float width, float height, float depth, unsigned char* rgba, EFCTVertexData** pVertex);
void SetEffectVertexGunFire(float width, float height, float depth, EFCTVertexData* VertexData);
void GunFireLocalRotV(EFCTVertexData* pVertex, float* Direction, float Angle);
void GetGunSmokeObjectSize(int weapon_kind, float* width, float* height);
void GetGunFireColor(unsigned char light, unsigned char* rgba);
void GetGunSmokeColor(unsigned char light, unsigned char* rgba);
void DrawBloodSpray(void* task);
void DrawBloodDrop(void* task);
void DrawBloodPool(void* task);
void DrawGunFire(void* task);
void DrawGunSmoke(void* task);
void SetBloodSprayGravityParam(EFCTObject* pObj);
void SetBloodSprayObjectPos(EFCTObject* pObj);
void SetBloodDropObjectPos(EFCTObject* pObj);
void SetBloodPoolObjectPos(EFCTObject* pObj);
void SetGunSmokeObjectPos(EFCTObject* pObj);
void SetBloodSpraySTValue(EFCTObject* pObj);
void SetGunFireSTValue(EFCTObject* pObj);
void SetGunSmokeSTValue(EFCTObject* pObj);
unsigned short GetStageEffectLayerNum(short EffectKind);
void InitBloodTexEnv(EFCTTexEnvInfo* pTexInfo);
void InitGunFireTexEnv(EFCTTexEnvInfo* pTexInfo);
void InitGunSmokeTexEnv(EFCTTexEnvInfo* pTexInfo);
void EFCTDecreaseAlpha(EFCTObject* pObj);

// 
// Start address: 0x13e140
int InitEffectObjectGunFire(EFCTObject* pObj, int nIndex, float* Pos, float* vec, int wep_kind, unsigned char light_status)
{
	unsigned char rgba[4];
	float depth;
	float height;
	float width;
	int i;
	float ZAng;
	// Line 173, Address: 0x13e140, Func Offset: 0
	// Line 179, Address: 0x13e168, Func Offset: 0x28
	// Line 180, Address: 0x13e16c, Func Offset: 0x2c
	// Line 183, Address: 0x13e174, Func Offset: 0x34
	// Line 184, Address: 0x13e19c, Func Offset: 0x5c
	// Line 188, Address: 0x13e1a8, Func Offset: 0x68
	// Line 191, Address: 0x13e1c0, Func Offset: 0x80
	// Line 192, Address: 0x13e1c8, Func Offset: 0x88
	// Line 195, Address: 0x13e1d0, Func Offset: 0x90
	// Line 198, Address: 0x13e1e0, Func Offset: 0xa0
	// Line 199, Address: 0x13e204, Func Offset: 0xc4
	// Line 200, Address: 0x13e210, Func Offset: 0xd0
	// Line 204, Address: 0x13e21c, Func Offset: 0xdc
	// Line 205, Address: 0x13e228, Func Offset: 0xe8
	// Line 206, Address: 0x13e248, Func Offset: 0x108
	// Line 208, Address: 0x13e26c, Func Offset: 0x12c
	// Line 210, Address: 0x13e27c, Func Offset: 0x13c
	// Line 211, Address: 0x13e280, Func Offset: 0x140
	// Line 214, Address: 0x13e284, Func Offset: 0x144
	// Line 216, Address: 0x13e290, Func Offset: 0x150
	// Line 217, Address: 0x13e294, Func Offset: 0x154
	// Func End, Address: 0x13e2b4, Func Offset: 0x174
}

// 
// Start address: 0x13e2c0
int InitEffectObjectGunSmoke(EFCTObject* pObj, int nIndex, float* Pos, int wep_kind, unsigned char light_status)
{
	float height;
	float width;
	float ang;
	unsigned char rgba[4];
	// Line 221, Address: 0x13e2c0, Func Offset: 0
	// Line 226, Address: 0x13e2e0, Func Offset: 0x20
	// Line 227, Address: 0x13e2e4, Func Offset: 0x24
	// Line 230, Address: 0x13e2ec, Func Offset: 0x2c
	// Line 231, Address: 0x13e314, Func Offset: 0x54
	// Line 235, Address: 0x13e320, Func Offset: 0x60
	// Line 238, Address: 0x13e334, Func Offset: 0x74
	// Line 239, Address: 0x13e33c, Func Offset: 0x7c
	// Line 242, Address: 0x13e344, Func Offset: 0x84
	// Line 243, Address: 0x13e348, Func Offset: 0x88
	// Line 244, Address: 0x13e388, Func Offset: 0xc8
	// Line 247, Address: 0x13e3c4, Func Offset: 0x104
	// Line 250, Address: 0x13e3d4, Func Offset: 0x114
	// Line 251, Address: 0x13e3d8, Func Offset: 0x118
	// Line 252, Address: 0x13e404, Func Offset: 0x144
	// Line 253, Address: 0x13e41c, Func Offset: 0x15c
	// Line 254, Address: 0x13e444, Func Offset: 0x184
	// Line 255, Address: 0x13e450, Func Offset: 0x190
	// Line 259, Address: 0x13e45c, Func Offset: 0x19c
	// Line 261, Address: 0x13e468, Func Offset: 0x1a8
	// Line 263, Address: 0x13e46c, Func Offset: 0x1ac
	// Func End, Address: 0x13e488, Func Offset: 0x1c8
}

// 
// Start address: 0x13e490
void GetGunFireObjectSize(int weapon_kind, float* width, float* height, float* depth)
{
	// Line 267, Address: 0x13e490, Func Offset: 0
	// Line 268, Address: 0x13e498, Func Offset: 0x8
	// Line 271, Address: 0x13e4c4, Func Offset: 0x34
	// Line 272, Address: 0x13e4cc, Func Offset: 0x3c
	// Line 273, Address: 0x13e4d0, Func Offset: 0x40
	// Line 274, Address: 0x13e4d8, Func Offset: 0x48
	// Line 277, Address: 0x13e4e0, Func Offset: 0x50
	// Line 278, Address: 0x13e4e8, Func Offset: 0x58
	// Line 279, Address: 0x13e4ec, Func Offset: 0x5c
	// Line 280, Address: 0x13e4f4, Func Offset: 0x64
	// Line 283, Address: 0x13e4fc, Func Offset: 0x6c
	// Line 284, Address: 0x13e504, Func Offset: 0x74
	// Line 285, Address: 0x13e508, Func Offset: 0x78
	// Line 286, Address: 0x13e510, Func Offset: 0x80
	// Line 290, Address: 0x13e518, Func Offset: 0x88
	// Line 293, Address: 0x13e53c, Func Offset: 0xac
	// Func End, Address: 0x13e54c, Func Offset: 0xbc
}

// 
// Start address: 0x13e550
unsigned int InitEffectVertexGunFire(float* Pos, float width, float height, float depth, unsigned char* rgba, EFCTVertexData** pVertex)
{
	int i;
	// Line 297, Address: 0x13e550, Func Offset: 0
	// Line 301, Address: 0x13e588, Func Offset: 0x38
	// Line 302, Address: 0x13e594, Func Offset: 0x44
	// Line 303, Address: 0x13e59c, Func Offset: 0x4c
	// Line 305, Address: 0x13e5a0, Func Offset: 0x50
	// Line 306, Address: 0x13e5b0, Func Offset: 0x60
	// Line 308, Address: 0x13e5bc, Func Offset: 0x6c
	// Line 312, Address: 0x13e5c8, Func Offset: 0x78
	// Line 314, Address: 0x13e5e0, Func Offset: 0x90
	// Line 316, Address: 0x13e5ec, Func Offset: 0x9c
	// Line 317, Address: 0x13e608, Func Offset: 0xb8
	// Line 318, Address: 0x13e618, Func Offset: 0xc8
	// Line 319, Address: 0x13e628, Func Offset: 0xd8
	// Line 321, Address: 0x13e638, Func Offset: 0xe8
	// Line 322, Address: 0x13e648, Func Offset: 0xf8
	// Line 324, Address: 0x13e65c, Func Offset: 0x10c
	// Line 325, Address: 0x13e660, Func Offset: 0x110
	// Func End, Address: 0x13e688, Func Offset: 0x138
}

// 
// Start address: 0x13e690
void SetEffectVertexGunFire(float width, float height, float depth, EFCTVertexData* VertexData)
{
	int i;
	// Line 332, Address: 0x13e690, Func Offset: 0
	// Line 333, Address: 0x13e69c, Func Offset: 0xc
	// Line 334, Address: 0x13e6c4, Func Offset: 0x34
	// Line 335, Address: 0x13e6c8, Func Offset: 0x38
	// Line 336, Address: 0x13e6cc, Func Offset: 0x3c
	// Line 338, Address: 0x13e6d4, Func Offset: 0x44
	// Line 339, Address: 0x13e6dc, Func Offset: 0x4c
	// Line 340, Address: 0x13e6e0, Func Offset: 0x50
	// Line 341, Address: 0x13e6e4, Func Offset: 0x54
	// Line 343, Address: 0x13e6e8, Func Offset: 0x58
	// Line 344, Address: 0x13e6ec, Func Offset: 0x5c
	// Line 345, Address: 0x13e6f4, Func Offset: 0x64
	// Line 346, Address: 0x13e6f8, Func Offset: 0x68
	// Line 348, Address: 0x13e6fc, Func Offset: 0x6c
	// Line 349, Address: 0x13e700, Func Offset: 0x70
	// Line 350, Address: 0x13e704, Func Offset: 0x74
	// Line 351, Address: 0x13e708, Func Offset: 0x78
	// Line 352, Address: 0x13e70c, Func Offset: 0x7c
	// Line 353, Address: 0x13e71c, Func Offset: 0x8c
	// Func End, Address: 0x13e724, Func Offset: 0x94
}

// 
// Start address: 0x13e730
void GunFireLocalRotV(EFCTVertexData* pVertex, float* Direction, float Angle)
{
	int i;
	float rot[4];
	float mtx[4][4];
	// Line 358, Address: 0x13e730, Func Offset: 0
	// Line 374, Address: 0x13e748, Func Offset: 0x18
	// Line 375, Address: 0x13e754, Func Offset: 0x24
	// Line 377, Address: 0x13e758, Func Offset: 0x28
	// Line 378, Address: 0x13e780, Func Offset: 0x50
	// Line 382, Address: 0x13e7b8, Func Offset: 0x88
	// Line 383, Address: 0x13e7c4, Func Offset: 0x94
	// Line 386, Address: 0x13e800, Func Offset: 0xd0
	// Line 387, Address: 0x13e814, Func Offset: 0xe4
	// Func End, Address: 0x13e82c, Func Offset: 0xfc
}

// 
// Start address: 0x13e830
void GetGunSmokeObjectSize(int weapon_kind, float* width, float* height)
{
	// Line 413, Address: 0x13e830, Func Offset: 0
	// Line 414, Address: 0x13e838, Func Offset: 0x8
	// Line 417, Address: 0x13e864, Func Offset: 0x34
	// Line 418, Address: 0x13e86c, Func Offset: 0x3c
	// Line 419, Address: 0x13e870, Func Offset: 0x40
	// Line 422, Address: 0x13e878, Func Offset: 0x48
	// Line 423, Address: 0x13e880, Func Offset: 0x50
	// Line 424, Address: 0x13e884, Func Offset: 0x54
	// Line 427, Address: 0x13e88c, Func Offset: 0x5c
	// Line 428, Address: 0x13e894, Func Offset: 0x64
	// Line 429, Address: 0x13e898, Func Offset: 0x68
	// Line 433, Address: 0x13e8a0, Func Offset: 0x70
	// Line 436, Address: 0x13e8c4, Func Offset: 0x94
	// Func End, Address: 0x13e8d4, Func Offset: 0xa4
}

// 
// Start address: 0x13e8e0
void GetGunFireColor(unsigned char light, unsigned char* rgba)
{
	// Line 440, Address: 0x13e8e0, Func Offset: 0
	// Line 442, Address: 0x13e8f8, Func Offset: 0x18
	// Line 443, Address: 0x13e914, Func Offset: 0x34
	// Line 444, Address: 0x13e91c, Func Offset: 0x3c
	// Line 445, Address: 0x13e920, Func Offset: 0x40
	// Line 446, Address: 0x13e924, Func Offset: 0x44
	// Line 449, Address: 0x13e92c, Func Offset: 0x4c
	// Line 450, Address: 0x13e934, Func Offset: 0x54
	// Line 451, Address: 0x13e93c, Func Offset: 0x5c
	// Line 454, Address: 0x13e940, Func Offset: 0x60
	// Line 455, Address: 0x13e948, Func Offset: 0x68
	// Func End, Address: 0x13e960, Func Offset: 0x80
}

// 
// Start address: 0x13e960
void GetGunSmokeColor(unsigned char light, unsigned char* rgba)
{
	// Line 460, Address: 0x13e960, Func Offset: 0
	// Line 462, Address: 0x13e978, Func Offset: 0x18
	// Line 463, Address: 0x13e994, Func Offset: 0x34
	// Line 464, Address: 0x13e99c, Func Offset: 0x3c
	// Line 465, Address: 0x13e9a0, Func Offset: 0x40
	// Line 466, Address: 0x13e9a4, Func Offset: 0x44
	// Line 469, Address: 0x13e9ac, Func Offset: 0x4c
	// Line 470, Address: 0x13e9b4, Func Offset: 0x54
	// Line 471, Address: 0x13e9b8, Func Offset: 0x58
	// Line 474, Address: 0x13e9c0, Func Offset: 0x60
	// Line 475, Address: 0x13e9c8, Func Offset: 0x68
	// Func End, Address: 0x13e9e0, Func Offset: 0x80
}

// 
// Start address: 0x13e9e0
void DrawBloodSpray(void* task)
{
	int IsNext;
	EFCTTask* pTask;
	// Line 480, Address: 0x13e9e0, Func Offset: 0
	// Line 484, Address: 0x13e9ec, Func Offset: 0xc
	// Line 485, Address: 0x13e9f0, Func Offset: 0x10
	// Line 486, Address: 0x13e9f8, Func Offset: 0x18
	// Line 493, Address: 0x13ea1c, Func Offset: 0x3c
	// Line 505, Address: 0x13ea2c, Func Offset: 0x4c
	// Line 507, Address: 0x13ea38, Func Offset: 0x58
	// Line 511, Address: 0x13ea44, Func Offset: 0x64
	// Line 519, Address: 0x13ea50, Func Offset: 0x70
	// Line 523, Address: 0x13ea5c, Func Offset: 0x7c
	// Line 526, Address: 0x13ea68, Func Offset: 0x88
	// Line 529, Address: 0x13ea74, Func Offset: 0x94
	// Line 532, Address: 0x13ea80, Func Offset: 0xa0
	// Line 541, Address: 0x13ea98, Func Offset: 0xb8
	// Line 548, Address: 0x13eaa4, Func Offset: 0xc4
	// Func End, Address: 0x13eab8, Func Offset: 0xd8
}

// 
// Start address: 0x13eac0
void DrawBloodDrop(void* task)
{
	int IsNext;
	EFCTTask* pTask;
	// Line 552, Address: 0x13eac0, Func Offset: 0
	// Line 556, Address: 0x13eacc, Func Offset: 0xc
	// Line 557, Address: 0x13ead0, Func Offset: 0x10
	// Line 558, Address: 0x13ead8, Func Offset: 0x18
	// Line 563, Address: 0x13eafc, Func Offset: 0x3c
	// Line 575, Address: 0x13eb0c, Func Offset: 0x4c
	// Line 577, Address: 0x13eb18, Func Offset: 0x58
	// Line 581, Address: 0x13eb24, Func Offset: 0x64
	// Line 584, Address: 0x13eb30, Func Offset: 0x70
	// Line 587, Address: 0x13eb3c, Func Offset: 0x7c
	// Line 590, Address: 0x13eb48, Func Offset: 0x88
	// Line 592, Address: 0x13eb64, Func Offset: 0xa4
	// Line 595, Address: 0x13eb70, Func Offset: 0xb0
	// Func End, Address: 0x13eb84, Func Offset: 0xc4
}

// 
// Start address: 0x13eb90
void DrawBloodPool(void* task)
{
	int IsNext;
	EFCTTask* pTask;
	// Line 599, Address: 0x13eb90, Func Offset: 0
	// Line 603, Address: 0x13eb9c, Func Offset: 0xc
	// Line 604, Address: 0x13eba0, Func Offset: 0x10
	// Line 605, Address: 0x13eba8, Func Offset: 0x18
	// Line 610, Address: 0x13ebcc, Func Offset: 0x3c
	// Line 622, Address: 0x13ebdc, Func Offset: 0x4c
	// Line 624, Address: 0x13ebe8, Func Offset: 0x58
	// Line 628, Address: 0x13ebf4, Func Offset: 0x64
	// Line 631, Address: 0x13ec00, Func Offset: 0x70
	// Line 634, Address: 0x13ec0c, Func Offset: 0x7c
	// Line 637, Address: 0x13ec18, Func Offset: 0x88
	// Line 639, Address: 0x13ec34, Func Offset: 0xa4
	// Line 642, Address: 0x13ec40, Func Offset: 0xb0
	// Func End, Address: 0x13ec54, Func Offset: 0xc4
}

// 
// Start address: 0x13ec60
void DrawGunFire(void* task)
{
	int IsNext;
	EFCTTask* pTask;
	// Line 646, Address: 0x13ec60, Func Offset: 0
	// Line 650, Address: 0x13ec6c, Func Offset: 0xc
	// Line 651, Address: 0x13ec70, Func Offset: 0x10
	// Line 652, Address: 0x13ec78, Func Offset: 0x18
	// Line 657, Address: 0x13ec9c, Func Offset: 0x3c
	// Line 669, Address: 0x13ecac, Func Offset: 0x4c
	// Line 672, Address: 0x13ecb8, Func Offset: 0x58
	// Line 675, Address: 0x13ecc4, Func Offset: 0x64
	// Line 678, Address: 0x13ecd0, Func Offset: 0x70
	// Line 687, Address: 0x13ece8, Func Offset: 0x88
	// Line 694, Address: 0x13ecf4, Func Offset: 0x94
	// Func End, Address: 0x13ed08, Func Offset: 0xa8
}

// 
// Start address: 0x13ed10
void DrawGunSmoke(void* task)
{
	int IsNext;
	EFCTTask* pTask;
	// Line 698, Address: 0x13ed10, Func Offset: 0
	// Line 702, Address: 0x13ed1c, Func Offset: 0xc
	// Line 703, Address: 0x13ed20, Func Offset: 0x10
	// Line 704, Address: 0x13ed28, Func Offset: 0x18
	// Line 709, Address: 0x13ed4c, Func Offset: 0x3c
	// Line 721, Address: 0x13ed5c, Func Offset: 0x4c
	// Line 729, Address: 0x13ed68, Func Offset: 0x58
	// Line 733, Address: 0x13ed74, Func Offset: 0x64
	// Line 736, Address: 0x13ed80, Func Offset: 0x70
	// Line 739, Address: 0x13ed8c, Func Offset: 0x7c
	// Line 742, Address: 0x13ed98, Func Offset: 0x88
	// Line 751, Address: 0x13edb0, Func Offset: 0xa0
	// Line 758, Address: 0x13edbc, Func Offset: 0xac
	// Func End, Address: 0x13edd0, Func Offset: 0xc0
}

// 
// Start address: 0x13edd0
void SetBloodSprayGravityParam(EFCTObject* pObj)
{
	float t;
	// Line 762, Address: 0x13edd0, Func Offset: 0
	// Line 763, Address: 0x13ede4, Func Offset: 0x14
	// Line 765, Address: 0x13ee08, Func Offset: 0x38
	// Line 766, Address: 0x13ee28, Func Offset: 0x58
	// Func End, Address: 0x13ee40, Func Offset: 0x70
}

// 
// Start address: 0x13ee40
void SetBloodSprayObjectPos(EFCTObject* pObj)
{
	// Line 770, Address: 0x13ee40, Func Offset: 0
	// Line 772, Address: 0x13ee50, Func Offset: 0x10
	// Line 774, Address: 0x13ee6c, Func Offset: 0x2c
	// Line 776, Address: 0x13eeb0, Func Offset: 0x70
	// Line 777, Address: 0x13eeb4, Func Offset: 0x74
	// Line 778, Address: 0x13eeb8, Func Offset: 0x78
	// Line 780, Address: 0x13eec0, Func Offset: 0x80
	// Line 781, Address: 0x13eedc, Func Offset: 0x9c
	// Line 782, Address: 0x13eef8, Func Offset: 0xb8
	// Line 784, Address: 0x13ef00, Func Offset: 0xc0
	// Line 785, Address: 0x13ef1c, Func Offset: 0xdc
	// Line 786, Address: 0x13ef38, Func Offset: 0xf8
	// Line 788, Address: 0x13ef40, Func Offset: 0x100
	// Line 789, Address: 0x13ef5c, Func Offset: 0x11c
	// Line 790, Address: 0x13ef78, Func Offset: 0x138
	// Line 792, Address: 0x13ef80, Func Offset: 0x140
	// Line 793, Address: 0x13ef9c, Func Offset: 0x15c
	// Line 798, Address: 0x13efb8, Func Offset: 0x178
	// Func End, Address: 0x13efcc, Func Offset: 0x18c
}

// 
// Start address: 0x13efd0
void SetBloodDropObjectPos(EFCTObject* pObj)
{
	// Line 802, Address: 0x13efd0, Func Offset: 0
	// Line 804, Address: 0x13efe4, Func Offset: 0x14
	// Line 807, Address: 0x13f000, Func Offset: 0x30
	// Line 808, Address: 0x13f02c, Func Offset: 0x5c
	// Line 809, Address: 0x13f030, Func Offset: 0x60
	// Line 812, Address: 0x13f038, Func Offset: 0x68
	// Line 813, Address: 0x13f060, Func Offset: 0x90
	// Line 817, Address: 0x13f088, Func Offset: 0xb8
	// Line 819, Address: 0x13f0a4, Func Offset: 0xd4
	// Line 820, Address: 0x13f0c0, Func Offset: 0xf0
	// Line 844, Address: 0x13f0dc, Func Offset: 0x10c
	// Line 845, Address: 0x13f0f0, Func Offset: 0x120
	// Line 847, Address: 0x13f104, Func Offset: 0x134
	// Func End, Address: 0x13f11c, Func Offset: 0x14c
}

// 
// Start address: 0x13f120
void SetBloodPoolObjectPos(EFCTObject* pObj)
{
	// Line 851, Address: 0x13f120, Func Offset: 0
	// Line 852, Address: 0x13f130, Func Offset: 0x10
	// Line 854, Address: 0x13f14c, Func Offset: 0x2c
	// Line 855, Address: 0x13f154, Func Offset: 0x34
	// Line 856, Address: 0x13f158, Func Offset: 0x38
	// Line 859, Address: 0x13f160, Func Offset: 0x40
	// Line 860, Address: 0x13f188, Func Offset: 0x68
	// Line 864, Address: 0x13f1b0, Func Offset: 0x90
	// Line 865, Address: 0x13f1cc, Func Offset: 0xac
	// Line 866, Address: 0x13f1d8, Func Offset: 0xb8
	// Line 867, Address: 0x13f204, Func Offset: 0xe4
	// Line 868, Address: 0x13f230, Func Offset: 0x110
	// Line 869, Address: 0x13f238, Func Offset: 0x118
	// Line 870, Address: 0x13f244, Func Offset: 0x124
	// Line 871, Address: 0x13f260, Func Offset: 0x140
	// Line 872, Address: 0x13f28c, Func Offset: 0x16c
	// Line 873, Address: 0x13f294, Func Offset: 0x174
	// Line 874, Address: 0x13f2a0, Func Offset: 0x180
	// Line 875, Address: 0x13f2cc, Func Offset: 0x1ac
	// Line 876, Address: 0x13f2e8, Func Offset: 0x1c8
	// Line 877, Address: 0x13f2f0, Func Offset: 0x1d0
	// Line 878, Address: 0x13f2fc, Func Offset: 0x1dc
	// Line 879, Address: 0x13f318, Func Offset: 0x1f8
	// Line 885, Address: 0x13f334, Func Offset: 0x214
	// Line 886, Address: 0x13f348, Func Offset: 0x228
	// Line 888, Address: 0x13f35c, Func Offset: 0x23c
	// Func End, Address: 0x13f370, Func Offset: 0x250
}

// 
// Start address: 0x13f370
void SetGunSmokeObjectPos(EFCTObject* pObj)
{
	float ratio;
	// Line 892, Address: 0x13f370, Func Offset: 0
	// Line 899, Address: 0x13f380, Func Offset: 0x10
	// Line 900, Address: 0x13f39c, Func Offset: 0x2c
	// Line 901, Address: 0x13f3b8, Func Offset: 0x48
	// Line 904, Address: 0x13f3c4, Func Offset: 0x54
	// Line 905, Address: 0x13f3d8, Func Offset: 0x68
	// Line 906, Address: 0x13f3ec, Func Offset: 0x7c
	// Func End, Address: 0x13f400, Func Offset: 0x90
}

// 
// Start address: 0x13f400
void SetBloodSpraySTValue(EFCTObject* pObj)
{
	int i;
	int TopLeftS;
	unsigned int FrameNumber;
	// Line 916, Address: 0x13f400, Func Offset: 0
	// Line 919, Address: 0x13f408, Func Offset: 0x8
	// Line 920, Address: 0x13f418, Func Offset: 0x18
	// Line 922, Address: 0x13f424, Func Offset: 0x24
	// Line 923, Address: 0x13f43c, Func Offset: 0x3c
	// Line 924, Address: 0x13f448, Func Offset: 0x48
	// Line 925, Address: 0x13f460, Func Offset: 0x60
	// Line 929, Address: 0x13f468, Func Offset: 0x68
	// Line 931, Address: 0x13f4a8, Func Offset: 0xa8
	// Line 932, Address: 0x13f4ac, Func Offset: 0xac
	// Line 934, Address: 0x13f4b4, Func Offset: 0xb4
	// Line 935, Address: 0x13f4b8, Func Offset: 0xb8
	// Line 937, Address: 0x13f4c0, Func Offset: 0xc0
	// Line 938, Address: 0x13f4c4, Func Offset: 0xc4
	// Line 940, Address: 0x13f4cc, Func Offset: 0xcc
	// Line 941, Address: 0x13f4d0, Func Offset: 0xd0
	// Line 943, Address: 0x13f4d8, Func Offset: 0xd8
	// Line 948, Address: 0x13f4dc, Func Offset: 0xdc
	// Line 949, Address: 0x13f4fc, Func Offset: 0xfc
	// Line 950, Address: 0x13f540, Func Offset: 0x140
	// Line 951, Address: 0x13f568, Func Offset: 0x168
	// Line 952, Address: 0x13f570, Func Offset: 0x170
	// Line 953, Address: 0x13f578, Func Offset: 0x178
	// Line 954, Address: 0x13f5cc, Func Offset: 0x1cc
	// Line 955, Address: 0x13f5d4, Func Offset: 0x1d4
	// Line 957, Address: 0x13f5dc, Func Offset: 0x1dc
	// Func End, Address: 0x13f5e4, Func Offset: 0x1e4
}

// 
// Start address: 0x13f5f0
void SetGunFireSTValue(EFCTObject* pObj)
{
	int i;
	// Line 1039, Address: 0x13f5f0, Func Offset: 0
	// Line 1040, Address: 0x13f5fc, Func Offset: 0xc
	// Line 1041, Address: 0x13f618, Func Offset: 0x28
	// Line 1042, Address: 0x13f628, Func Offset: 0x38
	// Line 1043, Address: 0x13f638, Func Offset: 0x48
	// Line 1044, Address: 0x13f644, Func Offset: 0x54
	// Line 1045, Address: 0x13f650, Func Offset: 0x60
	// Line 1046, Address: 0x13f660, Func Offset: 0x70
	// Line 1047, Address: 0x13f66c, Func Offset: 0x7c
	// Line 1048, Address: 0x13f678, Func Offset: 0x88
	// Line 1049, Address: 0x13f68c, Func Offset: 0x9c
	// Func End, Address: 0x13f694, Func Offset: 0xa4
}

// 
// Start address: 0x13f6a0
void SetGunSmokeSTValue(EFCTObject* pObj)
{
	int T;
	int S;
	// Line 1053, Address: 0x13f6a0, Func Offset: 0
	// Line 1070, Address: 0x13f6b8, Func Offset: 0x18
	// Line 1072, Address: 0x13f6fc, Func Offset: 0x5c
	// Line 1073, Address: 0x13f700, Func Offset: 0x60
	// Line 1074, Address: 0x13f704, Func Offset: 0x64
	// Line 1076, Address: 0x13f70c, Func Offset: 0x6c
	// Line 1077, Address: 0x13f710, Func Offset: 0x70
	// Line 1078, Address: 0x13f714, Func Offset: 0x74
	// Line 1080, Address: 0x13f71c, Func Offset: 0x7c
	// Line 1081, Address: 0x13f720, Func Offset: 0x80
	// Line 1086, Address: 0x13f724, Func Offset: 0x84
	// Line 1087, Address: 0x13f744, Func Offset: 0xa4
	// Line 1088, Address: 0x13f75c, Func Offset: 0xbc
	// Line 1089, Address: 0x13f778, Func Offset: 0xd8
	// Line 1090, Address: 0x13f780, Func Offset: 0xe0
	// Line 1091, Address: 0x13f788, Func Offset: 0xe8
	// Line 1092, Address: 0x13f7a4, Func Offset: 0x104
	// Line 1093, Address: 0x13f7ac, Func Offset: 0x10c
	// Line 1095, Address: 0x13f7b4, Func Offset: 0x114
	// Func End, Address: 0x13f7d0, Func Offset: 0x130
}

// 
// Start address: 0x13f7d0
unsigned short GetStageEffectLayerNum(short EffectKind)
{
	unsigned short Ret;
	// Line 1102, Address: 0x13f7d0, Func Offset: 0
	// Line 1104, Address: 0x13f81c, Func Offset: 0x4c
	// Line 1105, Address: 0x13f820, Func Offset: 0x50
	// Line 1107, Address: 0x13f828, Func Offset: 0x58
	// Line 1108, Address: 0x13f82c, Func Offset: 0x5c
	// Line 1110, Address: 0x13f834, Func Offset: 0x64
	// Line 1111, Address: 0x13f838, Func Offset: 0x68
	// Line 1113, Address: 0x13f840, Func Offset: 0x70
	// Line 1114, Address: 0x13f844, Func Offset: 0x74
	// Line 1116, Address: 0x13f84c, Func Offset: 0x7c
	// Line 1121, Address: 0x13f850, Func Offset: 0x80
	// Func End, Address: 0x13f858, Func Offset: 0x88
}

// 
// Start address: 0x13f860
void InitBloodTexEnv(EFCTTexEnvInfo* pTexInfo)
{
	// Line 1128, Address: 0x13f860, Func Offset: 0
	// Line 1133, Address: 0x13f864, Func Offset: 0x4
	// Line 1147, Address: 0x13f868, Func Offset: 0x8
	// Line 1151, Address: 0x13f870, Func Offset: 0x10
	// Func End, Address: 0x13f878, Func Offset: 0x18
}

// 
// Start address: 0x13f880
void InitGunFireTexEnv(EFCTTexEnvInfo* pTexInfo)
{
	// Line 1156, Address: 0x13f880, Func Offset: 0
	// Line 1157, Address: 0x13f884, Func Offset: 0x4
	// Line 1158, Address: 0x13f88c, Func Offset: 0xc
	// Line 1160, Address: 0x13f890, Func Offset: 0x10
	// Func End, Address: 0x13f898, Func Offset: 0x18
}

// 
// Start address: 0x13f8a0
void InitGunSmokeTexEnv(EFCTTexEnvInfo* pTexInfo)
{
	// Line 1165, Address: 0x13f8a0, Func Offset: 0
	// Line 1166, Address: 0x13f8a4, Func Offset: 0x4
	// Line 1167, Address: 0x13f8ac, Func Offset: 0xc
	// Line 1169, Address: 0x13f8b0, Func Offset: 0x10
	// Func End, Address: 0x13f8b8, Func Offset: 0x18
}

// 
// Start address: 0x13f8c0
void EFCTDecreaseAlpha(EFCTObject* pObj)
{
	float val;
	int i;
	// Line 1186, Address: 0x13f8c0, Func Offset: 0
	// Line 1191, Address: 0x13f8e0, Func Offset: 0x20
	// Line 1192, Address: 0x13f8f0, Func Offset: 0x30
	// Line 1193, Address: 0x13f8f4, Func Offset: 0x34
	// Line 1194, Address: 0x13f8fc, Func Offset: 0x3c
	// Line 1195, Address: 0x13f908, Func Offset: 0x48
	// Line 1196, Address: 0x13f920, Func Offset: 0x60
	// Line 1197, Address: 0x13f928, Func Offset: 0x68
	// Line 1198, Address: 0x13f934, Func Offset: 0x74
	// Line 1199, Address: 0x13f94c, Func Offset: 0x8c
	// Line 1200, Address: 0x13f954, Func Offset: 0x94
	// Line 1201, Address: 0x13f960, Func Offset: 0xa0
	// Line 1202, Address: 0x13f978, Func Offset: 0xb8
	// Line 1204, Address: 0x13f980, Func Offset: 0xc0
	// Line 1207, Address: 0x13f998, Func Offset: 0xd8
	// Line 1208, Address: 0x13f9a4, Func Offset: 0xe4
	// Line 1209, Address: 0x13f9d4, Func Offset: 0x114
	// Line 1210, Address: 0x13f9e8, Func Offset: 0x128
	// Func End, Address: 0x13fa0c, Func Offset: 0x14c
}

