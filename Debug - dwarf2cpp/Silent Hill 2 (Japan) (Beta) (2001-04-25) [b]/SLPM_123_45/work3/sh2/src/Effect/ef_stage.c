typedef struct EFCTObject;
typedef struct EFCTAnimationData;
typedef struct EFCTVertexData;
typedef struct EFCTTexEnvInfo;
typedef struct shAttackInfo;
typedef struct EFCTTask;
typedef union _anon0;
typedef struct _shTskEXECUTE;
typedef struct shBattleFight;
typedef struct Item;
typedef struct shBattleShot;

typedef void(*type_0)(EFCTObject*);
typedef void(*type_1)(void*);
typedef void(*type_11)(void*);

typedef int type_2[4];
typedef unsigned char type_3[10];
typedef float type_4[4];
typedef unsigned char type_5[4];
typedef float type_6[4];
typedef float type_7[4][4];
typedef unsigned char type_8[13];
typedef char type_9[488];
typedef unsigned char type_10[34];
typedef unsigned char type_12[10];
typedef unsigned int type_13[2];
typedef unsigned short type_14[11];
typedef shAttackInfo type_15[46];
typedef unsigned short type_16[3];

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

struct EFCTTask
{
	_shTskEXECUTE exe;
	EFCTObject* pObj;
	char freemem[488];
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _shTskEXECUTE
{
	void(*adrs)(void*);
	void* next;
	void* prev;
	int mode;
	int atr;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct Item
{
	unsigned int flag[2];
	unsigned short number[11];
	unsigned char light_switch;
	unsigned char radio_switch;
	unsigned char radio_volume;
	unsigned char equip;
	float ampoule_efficacy;
	unsigned short event_use[3];
	unsigned short short_pad;
	unsigned char last_cursor;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
void(*SetBloodPoolAnimParam)(EFCTObject*);
Item item;

int InitEffectObjectBloodDrop(EFCTObject* pObj, int nIndex, float* Pos);
int InitEffectObjectGunFire(EFCTObject* pObj, int nIndex, float* Pos, float* vec);
int InitEffectObjectGunSmoke(EFCTObject* pObj, int nIndex, float* Pos);
void GetGunFireObjectSize(float* width, float* height, float* depth);
unsigned int InitEffectVertexGunFire(float* Pos, float width, float height, float depth, EFCTVertexData** pVertex);
void SetEffectVertexGunFire(float width, float height, float depth, EFCTVertexData* VertexData);
void GunFireLocalRotV(EFCTVertexData* pVertex, float* Direction, float Angle);
void GetGunSmokeObjectSize(float* width, float* height);
void GetGunSmokeColor(unsigned char* rgba);
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
void SetBloodDropSTValue(EFCTObject* pObj);
void SetGunFireSTValue(EFCTObject* pObj);
void SetGunSmokeSTValue(EFCTObject* pObj);
unsigned short GetStageEffectLayerNum(short EffectKind);
void InitBloodTexEnv(EFCTTexEnvInfo* pTexInfo);
void InitGunFireTexEnv(EFCTTexEnvInfo* pTexInfo);
void InitGunSmokeTexEnv(EFCTTexEnvInfo* pTexInfo);
void EFCTDecreaseAlpha(EFCTObject* pObj);

// 
// Start address: 0x149e00
int InitEffectObjectBloodDrop(EFCTObject* pObj, int nIndex, float* Pos)
{
	unsigned char rgba[4];
	// Line 94, Address: 0x149e00, Func Offset: 0
	// Line 95, Address: 0x149e10, Func Offset: 0x10
	// Line 100, Address: 0x149e24, Func Offset: 0x24
	// Line 101, Address: 0x149e2c, Func Offset: 0x2c
	// Line 104, Address: 0x149e38, Func Offset: 0x38
	// Line 105, Address: 0x149e60, Func Offset: 0x60
	// Line 109, Address: 0x149e6c, Func Offset: 0x6c
	// Line 110, Address: 0x149e7c, Func Offset: 0x7c
	// Line 112, Address: 0x149e8c, Func Offset: 0x8c
	// Line 113, Address: 0x149e94, Func Offset: 0x94
	// Line 116, Address: 0x149e9c, Func Offset: 0x9c
	// Line 117, Address: 0x149ee0, Func Offset: 0xe0
	// Line 118, Address: 0x149f0c, Func Offset: 0x10c
	// Line 119, Address: 0x149f1c, Func Offset: 0x11c
	// Line 123, Address: 0x149f28, Func Offset: 0x128
	// Line 125, Address: 0x149f34, Func Offset: 0x134
	// Line 127, Address: 0x149f38, Func Offset: 0x138
	// Func End, Address: 0x149f4c, Func Offset: 0x14c
}

// 
// Start address: 0x149f50
int InitEffectObjectGunFire(EFCTObject* pObj, int nIndex, float* Pos, float* vec)
{
	float depth;
	float height;
	float width;
	int i;
	float ZAng;
	// Line 172, Address: 0x149f50, Func Offset: 0
	// Line 177, Address: 0x149f6c, Func Offset: 0x1c
	// Line 178, Address: 0x149f74, Func Offset: 0x24
	// Line 181, Address: 0x149f80, Func Offset: 0x30
	// Line 182, Address: 0x149fa8, Func Offset: 0x58
	// Line 186, Address: 0x149fb4, Func Offset: 0x64
	// Line 189, Address: 0x149fc8, Func Offset: 0x78
	// Line 190, Address: 0x149fd0, Func Offset: 0x80
	// Line 193, Address: 0x149fd8, Func Offset: 0x88
	// Line 194, Address: 0x149ffc, Func Offset: 0xac
	// Line 195, Address: 0x14a00c, Func Offset: 0xbc
	// Line 199, Address: 0x14a018, Func Offset: 0xc8
	// Line 200, Address: 0x14a024, Func Offset: 0xd4
	// Line 201, Address: 0x14a044, Func Offset: 0xf4
	// Line 203, Address: 0x14a06c, Func Offset: 0x11c
	// Line 205, Address: 0x14a07c, Func Offset: 0x12c
	// Line 206, Address: 0x14a084, Func Offset: 0x134
	// Line 209, Address: 0x14a08c, Func Offset: 0x13c
	// Line 211, Address: 0x14a098, Func Offset: 0x148
	// Line 212, Address: 0x14a09c, Func Offset: 0x14c
	// Func End, Address: 0x14a0b8, Func Offset: 0x168
}

// 
// Start address: 0x14a0c0
int InitEffectObjectGunSmoke(EFCTObject* pObj, int nIndex, float* Pos)
{
	float height;
	float width;
	float ang;
	unsigned char rgba[4];
	// Line 216, Address: 0x14a0c0, Func Offset: 0
	// Line 221, Address: 0x14a0d0, Func Offset: 0x10
	// Line 222, Address: 0x14a0d8, Func Offset: 0x18
	// Line 225, Address: 0x14a0e4, Func Offset: 0x24
	// Line 226, Address: 0x14a10c, Func Offset: 0x4c
	// Line 230, Address: 0x14a118, Func Offset: 0x58
	// Line 233, Address: 0x14a128, Func Offset: 0x68
	// Line 234, Address: 0x14a130, Func Offset: 0x70
	// Line 236, Address: 0x14a138, Func Offset: 0x78
	// Line 237, Address: 0x14a140, Func Offset: 0x80
	// Line 240, Address: 0x14a148, Func Offset: 0x88
	// Line 243, Address: 0x14a154, Func Offset: 0x94
	// Line 244, Address: 0x14a180, Func Offset: 0xc0
	// Line 245, Address: 0x14a198, Func Offset: 0xd8
	// Line 246, Address: 0x14a1c4, Func Offset: 0x104
	// Line 247, Address: 0x14a1d4, Func Offset: 0x114
	// Line 251, Address: 0x14a1e0, Func Offset: 0x120
	// Line 253, Address: 0x14a1ec, Func Offset: 0x12c
	// Line 255, Address: 0x14a1f0, Func Offset: 0x130
	// Func End, Address: 0x14a204, Func Offset: 0x144
}

// 
// Start address: 0x14a210
void GetGunFireObjectSize(float* width, float* height, float* depth)
{
	int weapon_kind;
	// Line 259, Address: 0x14a210, Func Offset: 0
	// Line 262, Address: 0x14a228, Func Offset: 0x18
	// Line 264, Address: 0x14a234, Func Offset: 0x24
	// Line 267, Address: 0x14a260, Func Offset: 0x50
	// Line 268, Address: 0x14a270, Func Offset: 0x60
	// Line 269, Address: 0x14a280, Func Offset: 0x70
	// Line 270, Address: 0x14a290, Func Offset: 0x80
	// Line 273, Address: 0x14a298, Func Offset: 0x88
	// Line 274, Address: 0x14a2a8, Func Offset: 0x98
	// Line 275, Address: 0x14a2b8, Func Offset: 0xa8
	// Line 276, Address: 0x14a2c8, Func Offset: 0xb8
	// Line 279, Address: 0x14a2d0, Func Offset: 0xc0
	// Line 280, Address: 0x14a2e0, Func Offset: 0xd0
	// Line 281, Address: 0x14a2f0, Func Offset: 0xe0
	// Line 282, Address: 0x14a300, Func Offset: 0xf0
	// Line 286, Address: 0x14a308, Func Offset: 0xf8
	// Line 289, Address: 0x14a330, Func Offset: 0x120
	// Func End, Address: 0x14a344, Func Offset: 0x134
}

// 
// Start address: 0x14a350
unsigned int InitEffectVertexGunFire(float* Pos, float width, float height, float depth, EFCTVertexData** pVertex)
{
	int i;
	// Line 293, Address: 0x14a350, Func Offset: 0
	// Line 297, Address: 0x14a370, Func Offset: 0x20
	// Line 298, Address: 0x14a380, Func Offset: 0x30
	// Line 299, Address: 0x14a390, Func Offset: 0x40
	// Line 301, Address: 0x14a398, Func Offset: 0x48
	// Line 302, Address: 0x14a3ac, Func Offset: 0x5c
	// Line 304, Address: 0x14a3bc, Func Offset: 0x6c
	// Line 308, Address: 0x14a3c8, Func Offset: 0x78
	// Line 310, Address: 0x14a3e8, Func Offset: 0x98
	// Line 312, Address: 0x14a3f4, Func Offset: 0xa4
	// Line 313, Address: 0x14a414, Func Offset: 0xc4
	// Line 314, Address: 0x14a434, Func Offset: 0xe4
	// Line 315, Address: 0x14a454, Func Offset: 0x104
	// Line 317, Address: 0x14a474, Func Offset: 0x124
	// Line 318, Address: 0x14a494, Func Offset: 0x144
	// Line 320, Address: 0x14a4a4, Func Offset: 0x154
	// Line 321, Address: 0x14a4a8, Func Offset: 0x158
	// Func End, Address: 0x14a4bc, Func Offset: 0x16c
}

// 
// Start address: 0x14a4c0
void SetEffectVertexGunFire(float width, float height, float depth, EFCTVertexData* VertexData)
{
	int i;
	// Line 325, Address: 0x14a4c0, Func Offset: 0
	// Line 328, Address: 0x14a4d8, Func Offset: 0x18
	// Line 329, Address: 0x14a4e4, Func Offset: 0x24
	// Line 330, Address: 0x14a518, Func Offset: 0x58
	// Line 331, Address: 0x14a538, Func Offset: 0x78
	// Line 332, Address: 0x14a558, Func Offset: 0x98
	// Line 334, Address: 0x14a57c, Func Offset: 0xbc
	// Line 335, Address: 0x14a5ac, Func Offset: 0xec
	// Line 336, Address: 0x14a5d0, Func Offset: 0x110
	// Line 337, Address: 0x14a5f4, Func Offset: 0x134
	// Line 339, Address: 0x14a61c, Func Offset: 0x15c
	// Line 340, Address: 0x14a654, Func Offset: 0x194
	// Line 341, Address: 0x14a684, Func Offset: 0x1c4
	// Line 342, Address: 0x14a6a8, Func Offset: 0x1e8
	// Line 344, Address: 0x14a6d0, Func Offset: 0x210
	// Line 345, Address: 0x14a700, Func Offset: 0x240
	// Line 346, Address: 0x14a730, Func Offset: 0x270
	// Line 347, Address: 0x14a754, Func Offset: 0x294
	// Line 348, Address: 0x14a77c, Func Offset: 0x2bc
	// Line 349, Address: 0x14a78c, Func Offset: 0x2cc
	// Func End, Address: 0x14a79c, Func Offset: 0x2dc
}

// 
// Start address: 0x14a7a0
void GunFireLocalRotV(EFCTVertexData* pVertex, float* Direction, float Angle)
{
	int i;
	float rot[4];
	float mtx[4][4];
	// Line 354, Address: 0x14a7a0, Func Offset: 0
	// Line 370, Address: 0x14a7b8, Func Offset: 0x18
	// Line 371, Address: 0x14a7c4, Func Offset: 0x24
	// Line 373, Address: 0x14a7c8, Func Offset: 0x28
	// Line 374, Address: 0x14a7f0, Func Offset: 0x50
	// Line 378, Address: 0x14a82c, Func Offset: 0x8c
	// Line 379, Address: 0x14a838, Func Offset: 0x98
	// Line 382, Address: 0x14a884, Func Offset: 0xe4
	// Line 383, Address: 0x14a894, Func Offset: 0xf4
	// Func End, Address: 0x14a8ac, Func Offset: 0x10c
}

// 
// Start address: 0x14a8b0
void GetGunSmokeObjectSize(float* width, float* height)
{
	int weapon_kind;
	// Line 409, Address: 0x14a8b0, Func Offset: 0
	// Line 412, Address: 0x14a8c4, Func Offset: 0x14
	// Line 414, Address: 0x14a8d0, Func Offset: 0x20
	// Line 417, Address: 0x14a8fc, Func Offset: 0x4c
	// Line 418, Address: 0x14a90c, Func Offset: 0x5c
	// Line 419, Address: 0x14a91c, Func Offset: 0x6c
	// Line 422, Address: 0x14a924, Func Offset: 0x74
	// Line 423, Address: 0x14a934, Func Offset: 0x84
	// Line 424, Address: 0x14a944, Func Offset: 0x94
	// Line 427, Address: 0x14a94c, Func Offset: 0x9c
	// Line 428, Address: 0x14a95c, Func Offset: 0xac
	// Line 429, Address: 0x14a96c, Func Offset: 0xbc
	// Line 433, Address: 0x14a974, Func Offset: 0xc4
	// Line 436, Address: 0x14a99c, Func Offset: 0xec
	// Func End, Address: 0x14a9b0, Func Offset: 0x100
}

// 
// Start address: 0x14a9b0
void GetGunSmokeColor(unsigned char* rgba)
{
	unsigned char light_on;
	// Line 440, Address: 0x14a9b0, Func Offset: 0
	// Line 442, Address: 0x14a9bc, Func Offset: 0xc
	// Line 448, Address: 0x14a9c8, Func Offset: 0x18
	// Line 449, Address: 0x14a9d0, Func Offset: 0x20
	// Line 450, Address: 0x14a9dc, Func Offset: 0x2c
	// Line 451, Address: 0x14a9e8, Func Offset: 0x38
	// Line 452, Address: 0x14a9f4, Func Offset: 0x44
	// Line 455, Address: 0x14a9fc, Func Offset: 0x4c
	// Line 456, Address: 0x14aa08, Func Offset: 0x58
	// Line 457, Address: 0x14aa14, Func Offset: 0x64
	// Line 460, Address: 0x14aa20, Func Offset: 0x70
	// Line 461, Address: 0x14aa2c, Func Offset: 0x7c
	// Func End, Address: 0x14aa3c, Func Offset: 0x8c
}

// 
// Start address: 0x14aa40
void DrawBloodSpray(void* task)
{
	int IsNext;
	EFCTTask* pTask;
	// Line 466, Address: 0x14aa40, Func Offset: 0
	// Line 470, Address: 0x14aa54, Func Offset: 0x14
	// Line 471, Address: 0x14aa58, Func Offset: 0x18
	// Line 472, Address: 0x14aa60, Func Offset: 0x20
	// Line 479, Address: 0x14aa88, Func Offset: 0x48
	// Line 491, Address: 0x14aa9c, Func Offset: 0x5c
	// Line 493, Address: 0x14aaa8, Func Offset: 0x68
	// Line 497, Address: 0x14aab4, Func Offset: 0x74
	// Line 505, Address: 0x14aac0, Func Offset: 0x80
	// Line 509, Address: 0x14aacc, Func Offset: 0x8c
	// Line 512, Address: 0x14aad8, Func Offset: 0x98
	// Line 515, Address: 0x14aae4, Func Offset: 0xa4
	// Line 518, Address: 0x14aaf0, Func Offset: 0xb0
	// Line 527, Address: 0x14ab0c, Func Offset: 0xcc
	// Line 534, Address: 0x14ab18, Func Offset: 0xd8
	// Func End, Address: 0x14ab30, Func Offset: 0xf0
}

// 
// Start address: 0x14ab30
void DrawBloodDrop(void* task)
{
	int IsNext;
	EFCTTask* pTask;
	// Line 538, Address: 0x14ab30, Func Offset: 0
	// Line 542, Address: 0x14ab44, Func Offset: 0x14
	// Line 543, Address: 0x14ab48, Func Offset: 0x18
	// Line 544, Address: 0x14ab50, Func Offset: 0x20
	// Line 549, Address: 0x14ab78, Func Offset: 0x48
	// Line 561, Address: 0x14ab8c, Func Offset: 0x5c
	// Line 563, Address: 0x14ab98, Func Offset: 0x68
	// Line 567, Address: 0x14aba4, Func Offset: 0x74
	// Line 570, Address: 0x14abb0, Func Offset: 0x80
	// Line 573, Address: 0x14abbc, Func Offset: 0x8c
	// Line 576, Address: 0x14abc8, Func Offset: 0x98
	// Line 578, Address: 0x14abec, Func Offset: 0xbc
	// Line 581, Address: 0x14abf8, Func Offset: 0xc8
	// Func End, Address: 0x14ac10, Func Offset: 0xe0
}

// 
// Start address: 0x14ac10
void DrawBloodPool(void* task)
{
	int IsNext;
	EFCTTask* pTask;
	// Line 585, Address: 0x14ac10, Func Offset: 0
	// Line 589, Address: 0x14ac24, Func Offset: 0x14
	// Line 590, Address: 0x14ac28, Func Offset: 0x18
	// Line 591, Address: 0x14ac30, Func Offset: 0x20
	// Line 596, Address: 0x14ac58, Func Offset: 0x48
	// Line 608, Address: 0x14ac6c, Func Offset: 0x5c
	// Line 610, Address: 0x14ac78, Func Offset: 0x68
	// Line 614, Address: 0x14ac84, Func Offset: 0x74
	// Line 617, Address: 0x14ac90, Func Offset: 0x80
	// Line 620, Address: 0x14ac9c, Func Offset: 0x8c
	// Line 623, Address: 0x14aca8, Func Offset: 0x98
	// Line 625, Address: 0x14accc, Func Offset: 0xbc
	// Line 628, Address: 0x14acd8, Func Offset: 0xc8
	// Func End, Address: 0x14acf0, Func Offset: 0xe0
}

// 
// Start address: 0x14acf0
void DrawGunFire(void* task)
{
	int IsNext;
	EFCTTask* pTask;
	// Line 632, Address: 0x14acf0, Func Offset: 0
	// Line 636, Address: 0x14ad04, Func Offset: 0x14
	// Line 637, Address: 0x14ad08, Func Offset: 0x18
	// Line 638, Address: 0x14ad10, Func Offset: 0x20
	// Line 643, Address: 0x14ad38, Func Offset: 0x48
	// Line 655, Address: 0x14ad4c, Func Offset: 0x5c
	// Line 658, Address: 0x14ad58, Func Offset: 0x68
	// Line 661, Address: 0x14ad64, Func Offset: 0x74
	// Line 664, Address: 0x14ad70, Func Offset: 0x80
	// Line 673, Address: 0x14ad8c, Func Offset: 0x9c
	// Line 680, Address: 0x14ad98, Func Offset: 0xa8
	// Func End, Address: 0x14adb0, Func Offset: 0xc0
}

// 
// Start address: 0x14adb0
void DrawGunSmoke(void* task)
{
	int IsNext;
	EFCTTask* pTask;
	// Line 684, Address: 0x14adb0, Func Offset: 0
	// Line 688, Address: 0x14adc4, Func Offset: 0x14
	// Line 689, Address: 0x14adc8, Func Offset: 0x18
	// Line 690, Address: 0x14add0, Func Offset: 0x20
	// Line 695, Address: 0x14adf8, Func Offset: 0x48
	// Line 707, Address: 0x14ae0c, Func Offset: 0x5c
	// Line 715, Address: 0x14ae18, Func Offset: 0x68
	// Line 719, Address: 0x14ae24, Func Offset: 0x74
	// Line 722, Address: 0x14ae30, Func Offset: 0x80
	// Line 725, Address: 0x14ae3c, Func Offset: 0x8c
	// Line 728, Address: 0x14ae48, Func Offset: 0x98
	// Line 737, Address: 0x14ae64, Func Offset: 0xb4
	// Line 744, Address: 0x14ae70, Func Offset: 0xc0
	// Func End, Address: 0x14ae88, Func Offset: 0xd8
}

// 
// Start address: 0x14ae90
void SetBloodSprayGravityParam(EFCTObject* pObj)
{
	float t;
	// Line 748, Address: 0x14ae90, Func Offset: 0
	// Line 749, Address: 0x14aea0, Func Offset: 0x10
	// Line 751, Address: 0x14aed4, Func Offset: 0x44
	// Line 752, Address: 0x14aefc, Func Offset: 0x6c
	// Func End, Address: 0x14af10, Func Offset: 0x80
}

// 
// Start address: 0x14af10
void SetBloodSprayObjectPos(EFCTObject* pObj)
{
	// Line 756, Address: 0x14af10, Func Offset: 0
	// Line 758, Address: 0x14af1c, Func Offset: 0xc
	// Line 760, Address: 0x14af4c, Func Offset: 0x3c
	// Line 762, Address: 0x14af98, Func Offset: 0x88
	// Line 763, Address: 0x14afa4, Func Offset: 0x94
	// Line 764, Address: 0x14afb0, Func Offset: 0xa0
	// Line 766, Address: 0x14afb8, Func Offset: 0xa8
	// Line 767, Address: 0x14afd8, Func Offset: 0xc8
	// Line 768, Address: 0x14aff8, Func Offset: 0xe8
	// Line 770, Address: 0x14b000, Func Offset: 0xf0
	// Line 771, Address: 0x14b020, Func Offset: 0x110
	// Line 772, Address: 0x14b040, Func Offset: 0x130
	// Line 774, Address: 0x14b048, Func Offset: 0x138
	// Line 775, Address: 0x14b068, Func Offset: 0x158
	// Line 776, Address: 0x14b088, Func Offset: 0x178
	// Line 778, Address: 0x14b090, Func Offset: 0x180
	// Line 779, Address: 0x14b0b0, Func Offset: 0x1a0
	// Line 784, Address: 0x14b0d0, Func Offset: 0x1c0
	// Func End, Address: 0x14b0e0, Func Offset: 0x1d0
}

// 
// Start address: 0x14b0e0
void SetBloodDropObjectPos(EFCTObject* pObj)
{
	// Line 788, Address: 0x14b0e0, Func Offset: 0
	// Line 790, Address: 0x14b0ec, Func Offset: 0xc
	// Line 793, Address: 0x14b11c, Func Offset: 0x3c
	// Line 794, Address: 0x14b15c, Func Offset: 0x7c
	// Line 795, Address: 0x14b16c, Func Offset: 0x8c
	// Line 798, Address: 0x14b174, Func Offset: 0x94
	// Line 799, Address: 0x14b1a0, Func Offset: 0xc0
	// Line 803, Address: 0x14b1cc, Func Offset: 0xec
	// Line 805, Address: 0x14b1fc, Func Offset: 0x11c
	// Line 806, Address: 0x14b21c, Func Offset: 0x13c
	// Line 830, Address: 0x14b23c, Func Offset: 0x15c
	// Line 831, Address: 0x14b25c, Func Offset: 0x17c
	// Line 833, Address: 0x14b280, Func Offset: 0x1a0
	// Func End, Address: 0x14b290, Func Offset: 0x1b0
}

// 
// Start address: 0x14b290
void SetBloodPoolObjectPos(EFCTObject* pObj)
{
	// Line 837, Address: 0x14b290, Func Offset: 0
	// Line 838, Address: 0x14b29c, Func Offset: 0xc
	// Line 840, Address: 0x14b2cc, Func Offset: 0x3c
	// Line 841, Address: 0x14b2dc, Func Offset: 0x4c
	// Line 842, Address: 0x14b2ec, Func Offset: 0x5c
	// Line 845, Address: 0x14b2f4, Func Offset: 0x64
	// Line 846, Address: 0x14b320, Func Offset: 0x90
	// Line 850, Address: 0x14b34c, Func Offset: 0xbc
	// Line 851, Address: 0x14b37c, Func Offset: 0xec
	// Line 852, Address: 0x14b390, Func Offset: 0x100
	// Line 853, Address: 0x14b3c0, Func Offset: 0x130
	// Line 854, Address: 0x14b3f0, Func Offset: 0x160
	// Line 855, Address: 0x14b3f8, Func Offset: 0x168
	// Line 856, Address: 0x14b410, Func Offset: 0x180
	// Line 857, Address: 0x14b430, Func Offset: 0x1a0
	// Line 858, Address: 0x14b460, Func Offset: 0x1d0
	// Line 859, Address: 0x14b468, Func Offset: 0x1d8
	// Line 860, Address: 0x14b480, Func Offset: 0x1f0
	// Line 861, Address: 0x14b4b0, Func Offset: 0x220
	// Line 862, Address: 0x14b4d0, Func Offset: 0x240
	// Line 863, Address: 0x14b4d8, Func Offset: 0x248
	// Line 864, Address: 0x14b4f0, Func Offset: 0x260
	// Line 865, Address: 0x14b510, Func Offset: 0x280
	// Line 871, Address: 0x14b530, Func Offset: 0x2a0
	// Line 872, Address: 0x14b550, Func Offset: 0x2c0
	// Line 874, Address: 0x14b574, Func Offset: 0x2e4
	// Func End, Address: 0x14b584, Func Offset: 0x2f4
}

// 
// Start address: 0x14b590
void SetGunSmokeObjectPos(EFCTObject* pObj)
{
	float height;
	float width;
	int alpha;
	// Line 878, Address: 0x14b590, Func Offset: 0
	// Line 882, Address: 0x14b5a0, Func Offset: 0x10
	// Line 884, Address: 0x14b5f4, Func Offset: 0x64
	// Line 885, Address: 0x14b604, Func Offset: 0x74
	// Line 886, Address: 0x14b610, Func Offset: 0x80
	// Line 887, Address: 0x14b61c, Func Offset: 0x8c
	// Line 888, Address: 0x14b63c, Func Offset: 0xac
	// Line 890, Address: 0x14b64c, Func Offset: 0xbc
	// Line 891, Address: 0x14b698, Func Offset: 0x108
	// Line 892, Address: 0x14b6e4, Func Offset: 0x154
	// Line 895, Address: 0x14b6ec, Func Offset: 0x15c
	// Line 896, Address: 0x14b714, Func Offset: 0x184
	// Line 900, Address: 0x14b73c, Func Offset: 0x1ac
	// Line 901, Address: 0x14b75c, Func Offset: 0x1cc
	// Line 902, Address: 0x14b780, Func Offset: 0x1f0
	// Func End, Address: 0x14b794, Func Offset: 0x204
}

// 
// Start address: 0x14b7a0
void SetBloodSpraySTValue(EFCTObject* pObj)
{
	int i;
	int TopLeftS;
	unsigned int FrameNumber;
	// Line 906, Address: 0x14b7a0, Func Offset: 0
	// Line 912, Address: 0x14b7b4, Func Offset: 0x14
	// Line 915, Address: 0x14b7c8, Func Offset: 0x28
	// Line 916, Address: 0x14b7e4, Func Offset: 0x44
	// Line 918, Address: 0x14b7f0, Func Offset: 0x50
	// Line 919, Address: 0x14b810, Func Offset: 0x70
	// Line 920, Address: 0x14b830, Func Offset: 0x90
	// Line 921, Address: 0x14b850, Func Offset: 0xb0
	// Line 925, Address: 0x14b858, Func Offset: 0xb8
	// Line 927, Address: 0x14b8a4, Func Offset: 0x104
	// Line 928, Address: 0x14b8a8, Func Offset: 0x108
	// Line 930, Address: 0x14b8b0, Func Offset: 0x110
	// Line 931, Address: 0x14b8b4, Func Offset: 0x114
	// Line 933, Address: 0x14b8bc, Func Offset: 0x11c
	// Line 934, Address: 0x14b8c0, Func Offset: 0x120
	// Line 936, Address: 0x14b8c8, Func Offset: 0x128
	// Line 937, Address: 0x14b8cc, Func Offset: 0x12c
	// Line 939, Address: 0x14b8d4, Func Offset: 0x134
	// Line 944, Address: 0x14b8d8, Func Offset: 0x138
	// Line 945, Address: 0x14b8fc, Func Offset: 0x15c
	// Line 946, Address: 0x14b94c, Func Offset: 0x1ac
	// Line 947, Address: 0x14b978, Func Offset: 0x1d8
	// Line 948, Address: 0x14b9c8, Func Offset: 0x228
	// Line 949, Address: 0x14b9ec, Func Offset: 0x24c
	// Line 950, Address: 0x14ba44, Func Offset: 0x2a4
	// Line 951, Address: 0x14ba70, Func Offset: 0x2d0
	// Line 953, Address: 0x14bac8, Func Offset: 0x328
	// Func End, Address: 0x14bae0, Func Offset: 0x340
}

// 
// Start address: 0x14bae0
void SetBloodDropSTValue(EFCTObject* pObj)
{
	int T;
	// Line 957, Address: 0x14bae0, Func Offset: 0
	// Line 961, Address: 0x14baec, Func Offset: 0xc
	// Line 963, Address: 0x14bb20, Func Offset: 0x40
	// Line 964, Address: 0x14bb24, Func Offset: 0x44
	// Line 966, Address: 0x14bb2c, Func Offset: 0x4c
	// Line 967, Address: 0x14bb30, Func Offset: 0x50
	// Line 969, Address: 0x14bb38, Func Offset: 0x58
	// Line 974, Address: 0x14bb3c, Func Offset: 0x5c
	// Line 975, Address: 0x14bb4c, Func Offset: 0x6c
	// Line 976, Address: 0x14bb70, Func Offset: 0x90
	// Line 977, Address: 0x14bb84, Func Offset: 0xa4
	// Line 978, Address: 0x14bba8, Func Offset: 0xc8
	// Line 979, Address: 0x14bbb8, Func Offset: 0xd8
	// Line 980, Address: 0x14bbe4, Func Offset: 0x104
	// Line 981, Address: 0x14bbf8, Func Offset: 0x118
	// Line 983, Address: 0x14bc24, Func Offset: 0x144
	// Func End, Address: 0x14bc34, Func Offset: 0x154
}

// 
// Start address: 0x14bc40
void SetGunFireSTValue(EFCTObject* pObj)
{
	int i;
	// Line 1020, Address: 0x14bc40, Func Offset: 0
	// Line 1035, Address: 0x14bc4c, Func Offset: 0xc
	// Line 1036, Address: 0x14bc58, Func Offset: 0x18
	// Line 1037, Address: 0x14bc80, Func Offset: 0x40
	// Line 1038, Address: 0x14bca8, Func Offset: 0x68
	// Line 1039, Address: 0x14bcd4, Func Offset: 0x94
	// Line 1040, Address: 0x14bd00, Func Offset: 0xc0
	// Line 1041, Address: 0x14bd2c, Func Offset: 0xec
	// Line 1042, Address: 0x14bd58, Func Offset: 0x118
	// Line 1043, Address: 0x14bd84, Func Offset: 0x144
	// Line 1044, Address: 0x14bdb0, Func Offset: 0x170
	// Line 1045, Address: 0x14bdc4, Func Offset: 0x184
	// Func End, Address: 0x14bdd4, Func Offset: 0x194
}

// 
// Start address: 0x14bde0
void SetGunSmokeSTValue(EFCTObject* pObj)
{
	int T;
	// Line 1049, Address: 0x14bde0, Func Offset: 0
	// Line 1066, Address: 0x14bdec, Func Offset: 0xc
	// Line 1068, Address: 0x14be2c, Func Offset: 0x4c
	// Line 1069, Address: 0x14be30, Func Offset: 0x50
	// Line 1071, Address: 0x14be38, Func Offset: 0x58
	// Line 1072, Address: 0x14be3c, Func Offset: 0x5c
	// Line 1074, Address: 0x14be44, Func Offset: 0x64
	// Line 1075, Address: 0x14be48, Func Offset: 0x68
	// Line 1077, Address: 0x14be50, Func Offset: 0x70
	// Line 1082, Address: 0x14be54, Func Offset: 0x74
	// Line 1083, Address: 0x14be68, Func Offset: 0x88
	// Line 1084, Address: 0x14be8c, Func Offset: 0xac
	// Line 1085, Address: 0x14bea0, Func Offset: 0xc0
	// Line 1086, Address: 0x14bec4, Func Offset: 0xe4
	// Line 1087, Address: 0x14bed8, Func Offset: 0xf8
	// Line 1088, Address: 0x14bf04, Func Offset: 0x124
	// Line 1089, Address: 0x14bf18, Func Offset: 0x138
	// Line 1091, Address: 0x14bf44, Func Offset: 0x164
	// Func End, Address: 0x14bf54, Func Offset: 0x174
}

// 
// Start address: 0x14bf60
unsigned short GetStageEffectLayerNum(short EffectKind)
{
	unsigned short Ret;
	// Line 1095, Address: 0x14bf60, Func Offset: 0
	// Line 1098, Address: 0x14bf6c, Func Offset: 0xc
	// Line 1100, Address: 0x14bfbc, Func Offset: 0x5c
	// Line 1101, Address: 0x14bfc4, Func Offset: 0x64
	// Line 1103, Address: 0x14bfcc, Func Offset: 0x6c
	// Line 1104, Address: 0x14bfd4, Func Offset: 0x74
	// Line 1106, Address: 0x14bfdc, Func Offset: 0x7c
	// Line 1107, Address: 0x14bfe4, Func Offset: 0x84
	// Line 1109, Address: 0x14bfec, Func Offset: 0x8c
	// Line 1110, Address: 0x14bff4, Func Offset: 0x94
	// Line 1112, Address: 0x14bffc, Func Offset: 0x9c
	// Line 1116, Address: 0x14c004, Func Offset: 0xa4
	// Line 1117, Address: 0x14c008, Func Offset: 0xa8
	// Func End, Address: 0x14c018, Func Offset: 0xb8
}

// 
// Start address: 0x14c020
void InitBloodTexEnv(EFCTTexEnvInfo* pTexInfo)
{
	// Line 1121, Address: 0x14c020, Func Offset: 0
	// Line 1124, Address: 0x14c028, Func Offset: 0x8
	// Line 1129, Address: 0x14c030, Func Offset: 0x10
	// Line 1143, Address: 0x14c038, Func Offset: 0x18
	// Line 1147, Address: 0x14c044, Func Offset: 0x24
	// Func End, Address: 0x14c050, Func Offset: 0x30
}

// 
// Start address: 0x14c050
void InitGunFireTexEnv(EFCTTexEnvInfo* pTexInfo)
{
	// Line 1151, Address: 0x14c050, Func Offset: 0
	// Line 1152, Address: 0x14c058, Func Offset: 0x8
	// Line 1153, Address: 0x14c060, Func Offset: 0x10
	// Line 1154, Address: 0x14c06c, Func Offset: 0x1c
	// Line 1156, Address: 0x14c074, Func Offset: 0x24
	// Func End, Address: 0x14c080, Func Offset: 0x30
}

// 
// Start address: 0x14c080
void InitGunSmokeTexEnv(EFCTTexEnvInfo* pTexInfo)
{
	// Line 1160, Address: 0x14c080, Func Offset: 0
	// Line 1161, Address: 0x14c088, Func Offset: 0x8
	// Line 1162, Address: 0x14c090, Func Offset: 0x10
	// Line 1163, Address: 0x14c09c, Func Offset: 0x1c
	// Line 1165, Address: 0x14c0a8, Func Offset: 0x28
	// Func End, Address: 0x14c0b4, Func Offset: 0x34
}

// 
// Start address: 0x14c0c0
void EFCTDecreaseAlpha(EFCTObject* pObj)
{
	float val;
	int i;
	// Line 1182, Address: 0x14c0c0, Func Offset: 0
	// Line 1183, Address: 0x14c0d8, Func Offset: 0x18
	// Line 1187, Address: 0x14c0dc, Func Offset: 0x1c
	// Line 1188, Address: 0x14c104, Func Offset: 0x44
	// Line 1189, Address: 0x14c110, Func Offset: 0x50
	// Line 1190, Address: 0x14c118, Func Offset: 0x58
	// Line 1191, Address: 0x14c144, Func Offset: 0x84
	// Line 1192, Address: 0x14c160, Func Offset: 0xa0
	// Line 1193, Address: 0x14c168, Func Offset: 0xa8
	// Line 1194, Address: 0x14c194, Func Offset: 0xd4
	// Line 1195, Address: 0x14c1b0, Func Offset: 0xf0
	// Line 1196, Address: 0x14c1b8, Func Offset: 0xf8
	// Line 1197, Address: 0x14c1e4, Func Offset: 0x124
	// Line 1198, Address: 0x14c200, Func Offset: 0x140
	// Line 1200, Address: 0x14c208, Func Offset: 0x148
	// Line 1203, Address: 0x14c224, Func Offset: 0x164
	// Line 1204, Address: 0x14c230, Func Offset: 0x170
	// Line 1205, Address: 0x14c264, Func Offset: 0x1a4
	// Line 1206, Address: 0x14c280, Func Offset: 0x1c0
	// Func End, Address: 0x14c29c, Func Offset: 0x1dc
}

