typedef struct EFCTObject;
typedef struct EFCTSparksObject;
typedef struct EFCTFlamePlane;
typedef struct shBattleFight;
typedef struct _anon0;
typedef struct shBattleShot;
typedef struct EFCTTask;
typedef struct EFCTFlameObject;
typedef struct EFCTVertexData;
typedef struct EFCTAnimationData;
typedef struct _VbWVSMATRIX;
typedef struct EFCTTexEnvInfo;
typedef struct shAttackInfo;
typedef union _anon1;
typedef struct _shTskEXECUTE;
typedef struct EFCTSparksPlane;

typedef void(*type_4)(void*);
typedef void(*type_17)(void*);

typedef EFCTFlamePlane type_0[16];
typedef EFCTSparksPlane type_1[2];
typedef EFCTFlameObject type_2[36];
typedef int type_3[4];
typedef float type_5[4];
typedef unsigned char type_6[4];
typedef float type_7[4];
typedef float type_8[4][4];
typedef float type_9[4][12];
typedef float type_10[4][4];
typedef float type_11[12];
typedef float type_12[4];
typedef float type_13[4];
typedef float type_14[4][4];
typedef shAttackInfo type_15[66];
typedef char type_16[488];

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

struct EFCTSparksObject
{
	EFCTObject base_obj;
	EFCTSparksPlane plane[2];
};

struct EFCTFlamePlane
{
	float timer;
	float cycle;
	float width_cycle_param;
	float height_cycle_param;
	short current_frame;
	float draw_wait;
	float drawing_time;
	float rot[4];
	float trans[4];
	float s_index;
	float start_pos[4];
	float w_right_ratio;
	float w_enlarge_speed;
	float h_enlarge_speed;
	float w_enlarge_time;
	float h_enlarge_time;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon0
{
	float pos[4];
	float zdir[4];
	float ydir[4];
	float rot[4];
	float clip_volume[4];
	float world_view[4][4];
	float view_screen[4][4];
	float view_clip[4][4];
	float world_screen[4][4];
	float world_clip[4][4];
	float clip_screen[4][4];
	float camera_pam[4];
	float screen_pam1[4];
	float screen_pam2[4];
	float rot_zdir[4];
	float rot_ydir[4];
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct EFCTTask
{
	_shTskEXECUTE exe;
	EFCTObject* pObj;
	char freemem[488];
};

struct EFCTFlameObject
{
	unsigned char use;
	unsigned char kind;
	unsigned int plane_num;
	unsigned int index;
	float life_timer;
	EFCTObject* base_obj;
	EFCTFlamePlane plane[16];
	EFCTSparksObject sparks;
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

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
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
	_anon1 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union _anon1
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

shAttackInfo sh2_attack_list[66];
unsigned short camera_cut;
unsigned short behind_angela_flame_num;
unsigned short behind_angela_flame_start_index;
float behind_angela_flame_pos_buf[4][12];
EFCTFlameObject flame_obj[36];
float behind_angela_flame_life_time_buf[12];
int demo_status;
_VbWVSMATRIX VbWvsMatrix;
_anon0 cam0;

void SetFlameCycleData(unsigned char kind, EFCTFlamePlane* plane);
void SetFlameStartPos(unsigned char kind, float width, float* start_pos);
void SetFlameVertex(unsigned char kind, float width, float height, float* trans, float* start_pos, float cycle, float w_right_ratio, EFCTVertexData* VertexData);
void FlameLocalRot(EFCTVertexData* pVertex, float* rot);
void SetFlameTexKind(unsigned char kind, EFCTFlamePlane* plane);
void SetFlameTransParam(unsigned char kind, float width, float height, float* trans);
void SetFlameRotParam(unsigned char kind, float* rot);
void DrawFlame(void* task);
EFCTFlameObject* GetFlameObject(EFCTObject* pObj);
void RenewFlameSize(EFCTObject* pObj, EFCTFlameObject* flame);
void EnlargeFlameSize(float time, float w_speed, float h_speed, float w_enlarge_time, float h_enlarge_time, float* width, float* height);
void RenewFlameRGBA(float cycle, int alpha, EFCTVertexData* pVertex);
void EFCTTinyThreeDWorkFlame(unsigned int plane_num, EFCTObject* pObj);
void SetFlameSTValue(EFCTObject* pObj, EFCTFlameObject* flame);
void InitFlameTexEnv(EFCTTexEnvInfo* pTexInfo);
unsigned short GetFlameEffectLayerNum();
void NextFrame(EFCTObject* pObj, float* wait_time, short* current, float* drawing_time);
void CountFlameCycleTimer(EFCTFlameObject* flame);
void ClipFlameEffectObject(EFCTVertexData* pVertex);
void CalibrationZVal(int num, EFCTVertexData* pVertex);
void TinyFlameZSort();
int GetBehindAngelaFlameIndex(unsigned int index);
int GetBehindAngelaFlameSortIndex(unsigned int index);
void TinyFlameZSort2(unsigned int index, float* new_pos);
float GetBehindAngelaFlameLifeTimer(unsigned int index);
void EFCTFlameChangeCamera();
int IsFlameValid(EFCTObject* pObj, EFCTFlameObject* flame);

// 
// Start address: 0x22e610
void SetFlameCycleData(unsigned char kind, EFCTFlamePlane* plane)
{
	float h_cycle_param_min;
	float h_cycle_param_max;
	float w_cycle_param_min;
	float w_cycle_param_max;
	float cycle_min;
	float cycle_max;
	float height;
	float width;
	float rate;
	// Line 273, Address: 0x22e610, Func Offset: 0
	// Line 280, Address: 0x22e640, Func Offset: 0x30
	// Line 282, Address: 0x22e658, Func Offset: 0x48
	// Line 283, Address: 0x22e660, Func Offset: 0x50
	// Line 284, Address: 0x22e668, Func Offset: 0x58
	// Line 285, Address: 0x22e670, Func Offset: 0x60
	// Line 287, Address: 0x22e67c, Func Offset: 0x6c
	// Line 288, Address: 0x22e684, Func Offset: 0x74
	// Line 289, Address: 0x22e690, Func Offset: 0x80
	// Line 290, Address: 0x22e69c, Func Offset: 0x8c
	// Line 295, Address: 0x22e6a8, Func Offset: 0x98
	// Line 300, Address: 0x22e6b0, Func Offset: 0xa0
	// Line 301, Address: 0x22e6b8, Func Offset: 0xa8
	// Line 303, Address: 0x22e6c4, Func Offset: 0xb4
	// Line 304, Address: 0x22e6cc, Func Offset: 0xbc
	// Line 305, Address: 0x22e6d4, Func Offset: 0xc4
	// Line 306, Address: 0x22e6e0, Func Offset: 0xd0
	// Line 307, Address: 0x22e6e8, Func Offset: 0xd8
	// Line 308, Address: 0x22e6f0, Func Offset: 0xe0
	// Line 309, Address: 0x22e6fc, Func Offset: 0xec
	// Line 310, Address: 0x22e708, Func Offset: 0xf8
	// Line 312, Address: 0x22e70c, Func Offset: 0xfc
	// Line 313, Address: 0x22e714, Func Offset: 0x104
	// Line 316, Address: 0x22e71c, Func Offset: 0x10c
	// Line 317, Address: 0x22e724, Func Offset: 0x114
	// Line 318, Address: 0x22e72c, Func Offset: 0x11c
	// Line 319, Address: 0x22e738, Func Offset: 0x128
	// Line 320, Address: 0x22e740, Func Offset: 0x130
	// Line 321, Address: 0x22e748, Func Offset: 0x138
	// Line 322, Address: 0x22e754, Func Offset: 0x144
	// Line 323, Address: 0x22e760, Func Offset: 0x150
	// Line 325, Address: 0x22e764, Func Offset: 0x154
	// Line 329, Address: 0x22e76c, Func Offset: 0x15c
	// Line 330, Address: 0x22e770, Func Offset: 0x160
	// Line 333, Address: 0x22e784, Func Offset: 0x174
	// Line 334, Address: 0x22e7a0, Func Offset: 0x190
	// Line 336, Address: 0x22e7bc, Func Offset: 0x1ac
	// Func End, Address: 0x22e7f0, Func Offset: 0x1e0
}

// 
// Start address: 0x22e7f0
void SetFlameStartPos(unsigned char kind, float width, float* start_pos)
{
	// Line 341, Address: 0x22e7f0, Func Offset: 0
	// Line 343, Address: 0x22e808, Func Offset: 0x18
	// Line 344, Address: 0x22e820, Func Offset: 0x30
	// Line 345, Address: 0x22e834, Func Offset: 0x44
	// Line 346, Address: 0x22e854, Func Offset: 0x64
	// Line 347, Address: 0x22e85c, Func Offset: 0x6c
	// Line 348, Address: 0x22e864, Func Offset: 0x74
	// Line 349, Address: 0x22e888, Func Offset: 0x98
	// Line 350, Address: 0x22e890, Func Offset: 0xa0
	// Line 351, Address: 0x22e89c, Func Offset: 0xac
	// Line 354, Address: 0x22e8bc, Func Offset: 0xcc
	// Line 357, Address: 0x22e8c4, Func Offset: 0xd4
	// Line 361, Address: 0x22e8e8, Func Offset: 0xf8
	// Func End, Address: 0x22e900, Func Offset: 0x110
}

// 
// Start address: 0x22e900
void SetFlameVertex(unsigned char kind, float width, float height, float* trans, float* start_pos, float cycle, float w_right_ratio, EFCTVertexData* VertexData)
{
	float ratio;
	float adjustment[4][4];
	// Line 458, Address: 0x22e900, Func Offset: 0
	// Line 463, Address: 0x22e944, Func Offset: 0x44
	// Line 464, Address: 0x22e94c, Func Offset: 0x4c
	// Line 465, Address: 0x22e954, Func Offset: 0x54
	// Line 466, Address: 0x22e95c, Func Offset: 0x5c
	// Line 469, Address: 0x22e964, Func Offset: 0x64
	// Line 470, Address: 0x22e97c, Func Offset: 0x7c
	// Line 471, Address: 0x22e990, Func Offset: 0x90
	// Line 472, Address: 0x22e9a8, Func Offset: 0xa8
	// Line 473, Address: 0x22e9b4, Func Offset: 0xb4
	// Line 474, Address: 0x22e9bc, Func Offset: 0xbc
	// Line 477, Address: 0x22e9e0, Func Offset: 0xe0
	// Line 478, Address: 0x22e9ec, Func Offset: 0xec
	// Line 480, Address: 0x22ea00, Func Offset: 0x100
	// Line 481, Address: 0x22ea1c, Func Offset: 0x11c
	// Line 482, Address: 0x22ea38, Func Offset: 0x138
	// Line 483, Address: 0x22ea50, Func Offset: 0x150
	// Line 484, Address: 0x22ea6c, Func Offset: 0x16c
	// Line 485, Address: 0x22ea84, Func Offset: 0x184
	// Line 486, Address: 0x22eaa0, Func Offset: 0x1a0
	// Line 487, Address: 0x22eaa8, Func Offset: 0x1a8
	// Line 488, Address: 0x22eab4, Func Offset: 0x1b4
	// Line 489, Address: 0x22eac4, Func Offset: 0x1c4
	// Line 492, Address: 0x22eac8, Func Offset: 0x1c8
	// Line 495, Address: 0x22ead0, Func Offset: 0x1d0
	// Line 496, Address: 0x22eae4, Func Offset: 0x1e4
	// Line 497, Address: 0x22eafc, Func Offset: 0x1fc
	// Line 499, Address: 0x22eb04, Func Offset: 0x204
	// Line 502, Address: 0x22eb0c, Func Offset: 0x20c
	// Line 503, Address: 0x22eb1c, Func Offset: 0x21c
	// Line 504, Address: 0x22eb2c, Func Offset: 0x22c
	// Line 505, Address: 0x22eb38, Func Offset: 0x238
	// Line 509, Address: 0x22eb44, Func Offset: 0x244
	// Line 510, Address: 0x22eb78, Func Offset: 0x278
	// Line 511, Address: 0x22eb98, Func Offset: 0x298
	// Line 512, Address: 0x22ebb0, Func Offset: 0x2b0
	// Line 514, Address: 0x22ebb4, Func Offset: 0x2b4
	// Line 515, Address: 0x22ebd4, Func Offset: 0x2d4
	// Line 516, Address: 0x22ebf0, Func Offset: 0x2f0
	// Line 517, Address: 0x22ec08, Func Offset: 0x308
	// Line 519, Address: 0x22ec0c, Func Offset: 0x30c
	// Line 520, Address: 0x22ec28, Func Offset: 0x328
	// Line 521, Address: 0x22eccc, Func Offset: 0x3cc
	// Line 522, Address: 0x22ece4, Func Offset: 0x3e4
	// Line 524, Address: 0x22ecec, Func Offset: 0x3ec
	// Line 525, Address: 0x22ed0c, Func Offset: 0x40c
	// Line 526, Address: 0x22edb0, Func Offset: 0x4b0
	// Line 527, Address: 0x22edc8, Func Offset: 0x4c8
	// Line 529, Address: 0x22edd0, Func Offset: 0x4d0
	// Func End, Address: 0x22ee00, Func Offset: 0x500
}

// 
// Start address: 0x22ee00
void FlameLocalRot(EFCTVertexData* pVertex, float* rot)
{
	int i;
	float mtx[4][4];
	// Line 533, Address: 0x22ee00, Func Offset: 0
	// Line 538, Address: 0x22ee18, Func Offset: 0x18
	// Line 539, Address: 0x22ee40, Func Offset: 0x40
	// Line 542, Address: 0x22ee78, Func Offset: 0x78
	// Line 543, Address: 0x22ee84, Func Offset: 0x84
	// Line 544, Address: 0x22eec0, Func Offset: 0xc0
	// Line 545, Address: 0x22eed4, Func Offset: 0xd4
	// Func End, Address: 0x22eeec, Func Offset: 0xec
}

// 
// Start address: 0x22eef0
void SetFlameTexKind(unsigned char kind, EFCTFlamePlane* plane)
{
	int i;
	// Line 571, Address: 0x22eef0, Func Offset: 0
	// Line 575, Address: 0x22ef00, Func Offset: 0x10
	// Line 577, Address: 0x22ef18, Func Offset: 0x28
	// Line 578, Address: 0x22ef34, Func Offset: 0x44
	// Line 582, Address: 0x22ef40, Func Offset: 0x50
	// Line 583, Address: 0x22ef54, Func Offset: 0x64
	// Line 587, Address: 0x22ef5c, Func Offset: 0x6c
	// Line 592, Address: 0x22ef90, Func Offset: 0xa0
	// Func End, Address: 0x22efa4, Func Offset: 0xb4
}

// 
// Start address: 0x22efb0
void SetFlameTransParam(unsigned char kind, float width, float height, float* trans)
{
	// Line 597, Address: 0x22efb0, Func Offset: 0
	// Line 599, Address: 0x22efd0, Func Offset: 0x20
	// Line 602, Address: 0x22efe8, Func Offset: 0x38
	// Line 603, Address: 0x22effc, Func Offset: 0x4c
	// Line 604, Address: 0x22f01c, Func Offset: 0x6c
	// Line 605, Address: 0x22f024, Func Offset: 0x74
	// Line 606, Address: 0x22f02c, Func Offset: 0x7c
	// Line 607, Address: 0x22f050, Func Offset: 0xa0
	// Line 608, Address: 0x22f058, Func Offset: 0xa8
	// Line 609, Address: 0x22f064, Func Offset: 0xb4
	// Line 611, Address: 0x22f088, Func Offset: 0xd8
	// Line 612, Address: 0x22f090, Func Offset: 0xe0
	// Line 613, Address: 0x22f09c, Func Offset: 0xec
	// Line 615, Address: 0x22f0bc, Func Offset: 0x10c
	// Line 616, Address: 0x22f0e0, Func Offset: 0x130
	// Line 617, Address: 0x22f0fc, Func Offset: 0x14c
	// Line 622, Address: 0x22f104, Func Offset: 0x154
	// Line 624, Address: 0x22f128, Func Offset: 0x178
	// Func End, Address: 0x22f144, Func Offset: 0x194
}

// 
// Start address: 0x22f150
void SetFlameRotParam(unsigned char kind, float* rot)
{
	// Line 629, Address: 0x22f150, Func Offset: 0
	// Line 631, Address: 0x22f154, Func Offset: 0x4
	// Line 632, Address: 0x22f168, Func Offset: 0x18
	// Line 633, Address: 0x22f174, Func Offset: 0x24
	// Line 635, Address: 0x22f180, Func Offset: 0x30
	// Line 636, Address: 0x22f18c, Func Offset: 0x3c
	// Line 637, Address: 0x22f194, Func Offset: 0x44
	// Line 638, Address: 0x22f1a0, Func Offset: 0x50
	// Line 639, Address: 0x22f1ac, Func Offset: 0x5c
	// Line 641, Address: 0x22f1b8, Func Offset: 0x68
	// Line 642, Address: 0x22f1c0, Func Offset: 0x70
	// Line 643, Address: 0x22f1d8, Func Offset: 0x88
	// Line 644, Address: 0x22f1e4, Func Offset: 0x94
	// Line 645, Address: 0x22f1ec, Func Offset: 0x9c
	// Line 646, Address: 0x22f204, Func Offset: 0xb4
	// Line 647, Address: 0x22f210, Func Offset: 0xc0
	// Line 651, Address: 0x22f21c, Func Offset: 0xcc
	// Line 652, Address: 0x22f22c, Func Offset: 0xdc
	// Line 654, Address: 0x22f248, Func Offset: 0xf8
	// Func End, Address: 0x22f250, Func Offset: 0x100
}

// 
// Start address: 0x22f250
void DrawFlame(void* task)
{
	int i;
	EFCTFlameObject* flame;
	EFCTTask* pTask;
	// Line 698, Address: 0x22f250, Func Offset: 0
	// Line 703, Address: 0x22f268, Func Offset: 0x18
	// Line 704, Address: 0x22f26c, Func Offset: 0x1c
	// Line 705, Address: 0x22f274, Func Offset: 0x24
	// Line 710, Address: 0x22f29c, Func Offset: 0x4c
	// Line 711, Address: 0x22f2ac, Func Offset: 0x5c
	// Line 712, Address: 0x22f2b4, Func Offset: 0x64
	// Line 717, Address: 0x22f2dc, Func Offset: 0x8c
	// Line 719, Address: 0x22f2e8, Func Offset: 0x98
	// Line 721, Address: 0x22f2fc, Func Offset: 0xac
	// Line 739, Address: 0x22f304, Func Offset: 0xb4
	// Line 741, Address: 0x22f31c, Func Offset: 0xcc
	// Line 742, Address: 0x22f32c, Func Offset: 0xdc
	// Line 746, Address: 0x22f334, Func Offset: 0xe4
	// Line 750, Address: 0x22f344, Func Offset: 0xf4
	// Line 752, Address: 0x22f358, Func Offset: 0x108
	// Line 756, Address: 0x22f370, Func Offset: 0x120
	// Line 760, Address: 0x22f388, Func Offset: 0x138
	// Line 763, Address: 0x22f394, Func Offset: 0x144
	// Line 764, Address: 0x22f3a4, Func Offset: 0x154
	// Line 766, Address: 0x22f3b8, Func Offset: 0x168
	// Line 770, Address: 0x22f3cc, Func Offset: 0x17c
	// Line 778, Address: 0x22f3ec, Func Offset: 0x19c
	// Line 781, Address: 0x22f3fc, Func Offset: 0x1ac
	// Line 783, Address: 0x22f40c, Func Offset: 0x1bc
	// Line 787, Address: 0x22f420, Func Offset: 0x1d0
	// Line 791, Address: 0x22f45c, Func Offset: 0x20c
	// Line 792, Address: 0x22f468, Func Offset: 0x218
	// Line 794, Address: 0x22f474, Func Offset: 0x224
	// Line 795, Address: 0x22f494, Func Offset: 0x244
	// Line 796, Address: 0x22f4a8, Func Offset: 0x258
	// Line 799, Address: 0x22f4b0, Func Offset: 0x260
	// Line 803, Address: 0x22f4c0, Func Offset: 0x270
	// Line 805, Address: 0x22f4dc, Func Offset: 0x28c
	// Line 810, Address: 0x22f4ec, Func Offset: 0x29c
	// Line 812, Address: 0x22f500, Func Offset: 0x2b0
	// Line 817, Address: 0x22f514, Func Offset: 0x2c4
	// Line 820, Address: 0x22f524, Func Offset: 0x2d4
	// Line 824, Address: 0x22f530, Func Offset: 0x2e0
	// Line 827, Address: 0x22f53c, Func Offset: 0x2ec
	// Func End, Address: 0x22f55c, Func Offset: 0x30c
}

// 
// Start address: 0x22f560
EFCTFlameObject* GetFlameObject(EFCTObject* pObj)
{
	int i;
	// Line 834, Address: 0x22f560, Func Offset: 0
	// Line 835, Address: 0x22f56c, Func Offset: 0xc
	// Line 836, Address: 0x22f5b4, Func Offset: 0x54
	// Line 838, Address: 0x22f5bc, Func Offset: 0x5c
	// Line 840, Address: 0x22f5cc, Func Offset: 0x6c
	// Line 841, Address: 0x22f5d0, Func Offset: 0x70
	// Func End, Address: 0x22f5d8, Func Offset: 0x78
}

// 
// Start address: 0x22f5e0
void RenewFlameSize(EFCTObject* pObj, EFCTFlameObject* flame)
{
	float trans[4];
	float height;
	float width;
	float ratio2;
	float ratio;
	float cycle;
	float delta_height;
	float delta_width;
	float life_timer;
	int i;
	// Line 845, Address: 0x22f5e0, Func Offset: 0
	// Line 853, Address: 0x22f604, Func Offset: 0x24
	// Line 855, Address: 0x22f618, Func Offset: 0x38
	// Line 858, Address: 0x22f624, Func Offset: 0x44
	// Line 859, Address: 0x22f638, Func Offset: 0x58
	// Line 862, Address: 0x22f658, Func Offset: 0x78
	// Line 863, Address: 0x22f660, Func Offset: 0x80
	// Line 867, Address: 0x22f668, Func Offset: 0x88
	// Line 869, Address: 0x22f678, Func Offset: 0x98
	// Line 870, Address: 0x22f684, Func Offset: 0xa4
	// Line 872, Address: 0x22f68c, Func Offset: 0xac
	// Line 873, Address: 0x22f694, Func Offset: 0xb4
	// Line 877, Address: 0x22f698, Func Offset: 0xb8
	// Line 884, Address: 0x22f6c4, Func Offset: 0xe4
	// Line 886, Address: 0x22f6e8, Func Offset: 0x108
	// Line 891, Address: 0x22f6f8, Func Offset: 0x118
	// Line 896, Address: 0x22f718, Func Offset: 0x138
	// Line 900, Address: 0x22f738, Func Offset: 0x158
	// Line 902, Address: 0x22f750, Func Offset: 0x170
	// Line 904, Address: 0x22f768, Func Offset: 0x188
	// Line 910, Address: 0x22f780, Func Offset: 0x1a0
	// Line 912, Address: 0x22f798, Func Offset: 0x1b8
	// Line 913, Address: 0x22f7ac, Func Offset: 0x1cc
	// Line 914, Address: 0x22f7b8, Func Offset: 0x1d8
	// Line 915, Address: 0x22f7c4, Func Offset: 0x1e4
	// Line 917, Address: 0x22f7cc, Func Offset: 0x1ec
	// Line 918, Address: 0x22f7e0, Func Offset: 0x200
	// Line 919, Address: 0x22f7ec, Func Offset: 0x20c
	// Line 920, Address: 0x22f820, Func Offset: 0x240
	// Line 925, Address: 0x22f838, Func Offset: 0x258
	// Line 926, Address: 0x22f848, Func Offset: 0x268
	// Line 931, Address: 0x22f850, Func Offset: 0x270
	// Line 932, Address: 0x22f85c, Func Offset: 0x27c
	// Line 935, Address: 0x22f868, Func Offset: 0x288
	// Line 937, Address: 0x22f8a0, Func Offset: 0x2c0
	// Line 942, Address: 0x22f8c8, Func Offset: 0x2e8
	// Line 943, Address: 0x22f8d8, Func Offset: 0x2f8
	// Line 944, Address: 0x22f8fc, Func Offset: 0x31c
	// Line 946, Address: 0x22f904, Func Offset: 0x324
	// Line 950, Address: 0x22f928, Func Offset: 0x348
	// Line 952, Address: 0x22f940, Func Offset: 0x360
	// Func End, Address: 0x22f964, Func Offset: 0x384
}

// 
// Start address: 0x22f970
void EnlargeFlameSize(float time, float w_speed, float h_speed, float w_enlarge_time, float h_enlarge_time, float* width, float* height)
{
	// Line 958, Address: 0x22f970, Func Offset: 0
	// Line 960, Address: 0x22f980, Func Offset: 0x10
	// Line 961, Address: 0x22f9a4, Func Offset: 0x34
	// Line 964, Address: 0x22f9ac, Func Offset: 0x3c
	// Line 968, Address: 0x22f9d0, Func Offset: 0x60
	// Line 970, Address: 0x22f9e0, Func Offset: 0x70
	// Line 971, Address: 0x22fa04, Func Offset: 0x94
	// Line 974, Address: 0x22fa0c, Func Offset: 0x9c
	// Line 977, Address: 0x22fa30, Func Offset: 0xc0
	// Func End, Address: 0x22fa38, Func Offset: 0xc8
}

// 
// Start address: 0x22fa40
void RenewFlameRGBA(float cycle, int alpha, EFCTVertexData* pVertex)
{
	int rgba[4];
	float ratio;
	// Line 981, Address: 0x22fa40, Func Offset: 0
	// Line 987, Address: 0x22fa64, Func Offset: 0x24
	// Line 988, Address: 0x22fa7c, Func Offset: 0x3c
	// Line 989, Address: 0x22fa9c, Func Offset: 0x5c
	// Line 990, Address: 0x22fabc, Func Offset: 0x7c
	// Line 991, Address: 0x22fac0, Func Offset: 0x80
	// Line 992, Address: 0x22faec, Func Offset: 0xac
	// Line 993, Address: 0x22fb0c, Func Offset: 0xcc
	// Line 994, Address: 0x22fb1c, Func Offset: 0xdc
	// Func End, Address: 0x22fb3c, Func Offset: 0xfc
}

// 
// Start address: 0x22fb40
void EFCTTinyThreeDWorkFlame(unsigned int plane_num, EFCTObject* pObj)
{
	int is_valid;
	int j;
	float work[4][4];
	float vcm[4][4];
	float lcm[4][4];
	float q;
	int i;
	float ws_mtx[4][4];
	float wv_mtx[4][4];
	float ls_mtx[4][4];
	float lw_mtx[4][4];
	// Line 1029, Address: 0x22fb40, Func Offset: 0
	// Line 1038, Address: 0x22fb64, Func Offset: 0x24
	// Line 1039, Address: 0x22fb78, Func Offset: 0x38
	// Line 1040, Address: 0x22fb84, Func Offset: 0x44
	// Line 1043, Address: 0x22fb8c, Func Offset: 0x4c
	// Line 1044, Address: 0x22fb94, Func Offset: 0x54
	// Line 1045, Address: 0x22fb98, Func Offset: 0x58
	// Line 1047, Address: 0x22fba0, Func Offset: 0x60
	// Line 1050, Address: 0x22fbb0, Func Offset: 0x70
	// Line 1051, Address: 0x22fbe0, Func Offset: 0xa0
	// Line 1053, Address: 0x22fc0c, Func Offset: 0xcc
	// Line 1054, Address: 0x22fc20, Func Offset: 0xe0
	// Line 1078, Address: 0x22fc34, Func Offset: 0xf4
	// Line 1079, Address: 0x22fc48, Func Offset: 0x108
	// Line 1080, Address: 0x22fc60, Func Offset: 0x120
	// Line 1082, Address: 0x22fc74, Func Offset: 0x134
	// Line 1083, Address: 0x22fc80, Func Offset: 0x140
	// Line 1084, Address: 0x22fc84, Func Offset: 0x144
	// Line 1085, Address: 0x22fc90, Func Offset: 0x150
	// Line 1091, Address: 0x22fccc, Func Offset: 0x18c
	// Line 1093, Address: 0x22fcd0, Func Offset: 0x190
	// Line 1094, Address: 0x22fcf4, Func Offset: 0x1b4
	// Line 1096, Address: 0x22fd04, Func Offset: 0x1c4
	// Line 1097, Address: 0x22fd10, Func Offset: 0x1d0
	// Line 1098, Address: 0x22fd30, Func Offset: 0x1f0
	// Line 1099, Address: 0x22fd44, Func Offset: 0x204
	// Line 1103, Address: 0x22fd54, Func Offset: 0x214
	// Func End, Address: 0x22fd78, Func Offset: 0x238
}

// 
// Start address: 0x22fd80
void SetFlameSTValue(EFCTObject* pObj, EFCTFlameObject* flame)
{
	float t_index;
	float s_index;
	int i;
	// Line 1111, Address: 0x22fd80, Func Offset: 0
	// Line 1113, Address: 0x22fd8c, Func Offset: 0xc
	// Line 1114, Address: 0x22fd98, Func Offset: 0x18
	// Line 1116, Address: 0x22fda8, Func Offset: 0x28
	// Line 1117, Address: 0x22fdd0, Func Offset: 0x50
	// Line 1118, Address: 0x22fde0, Func Offset: 0x60
	// Line 1119, Address: 0x22fe00, Func Offset: 0x80
	// Line 1120, Address: 0x22fe0c, Func Offset: 0x8c
	// Line 1121, Address: 0x22fe18, Func Offset: 0x98
	// Line 1122, Address: 0x22fe2c, Func Offset: 0xac
	// Line 1123, Address: 0x22fe38, Func Offset: 0xb8
	// Line 1124, Address: 0x22fe44, Func Offset: 0xc4
	// Line 1125, Address: 0x22fe58, Func Offset: 0xd8
	// Func End, Address: 0x22fe60, Func Offset: 0xe0
}

// 
// Start address: 0x22fe60
void InitFlameTexEnv(EFCTTexEnvInfo* pTexInfo)
{
	// Line 1129, Address: 0x22fe60, Func Offset: 0
	// Line 1132, Address: 0x22fe64, Func Offset: 0x4
	// Line 1133, Address: 0x22fe6c, Func Offset: 0xc
	// Line 1134, Address: 0x22fe70, Func Offset: 0x10
	// Func End, Address: 0x22fe78, Func Offset: 0x18
}

// 
// Start address: 0x22fe80
unsigned short GetFlameEffectLayerNum()
{
	// Line 1138, Address: 0x22fe80, Func Offset: 0
	// Line 1139, Address: 0x22fe84, Func Offset: 0x4
	// Func End, Address: 0x22fe8c, Func Offset: 0xc
}

// 
// Start address: 0x22fe90
void NextFrame(EFCTObject* pObj, float* wait_time, short* current, float* drawing_time)
{
	EFCTAnimationData* pAnim;
	// Line 1147, Address: 0x22fe90, Func Offset: 0
	// Line 1148, Address: 0x22fea8, Func Offset: 0x18
	// Line 1172, Address: 0x22feac, Func Offset: 0x1c
	// Line 1174, Address: 0x22fec4, Func Offset: 0x34
	// Line 1175, Address: 0x22fed8, Func Offset: 0x48
	// Line 1178, Address: 0x22fee0, Func Offset: 0x50
	// Line 1181, Address: 0x22fee4, Func Offset: 0x54
	// Line 1183, Address: 0x22fef4, Func Offset: 0x64
	// Line 1184, Address: 0x22fefc, Func Offset: 0x6c
	// Line 1187, Address: 0x22ff04, Func Offset: 0x74
	// Line 1188, Address: 0x22ff18, Func Offset: 0x88
	// Line 1189, Address: 0x22ff20, Func Offset: 0x90
	// Line 1191, Address: 0x22ff28, Func Offset: 0x98
	// Line 1197, Address: 0x22ff2c, Func Offset: 0x9c
	// Line 1198, Address: 0x22ff3c, Func Offset: 0xac
	// Line 1203, Address: 0x22ff64, Func Offset: 0xd4
	// Func End, Address: 0x22ff7c, Func Offset: 0xec
}

// 
// Start address: 0x22ff80
void CountFlameCycleTimer(EFCTFlameObject* flame)
{
	int i;
	// Line 1208, Address: 0x22ff80, Func Offset: 0
	// Line 1211, Address: 0x22ff94, Func Offset: 0x14
	// Line 1212, Address: 0x22ff9c, Func Offset: 0x1c
	// Line 1213, Address: 0x22ffa8, Func Offset: 0x28
	// Line 1216, Address: 0x22ffc8, Func Offset: 0x48
	// Line 1217, Address: 0x22fff0, Func Offset: 0x70
	// Line 1218, Address: 0x22fff4, Func Offset: 0x74
	// Line 1219, Address: 0x22fff8, Func Offset: 0x78
	// Line 1222, Address: 0x230010, Func Offset: 0x90
	// Func End, Address: 0x230028, Func Offset: 0xa8
}

// 
// Start address: 0x230030
void ClipFlameEffectObject(EFCTVertexData* pVertex)
{
	int valid;
	int i;
	// Line 1227, Address: 0x230030, Func Offset: 0
	// Line 1229, Address: 0x230048, Func Offset: 0x18
	// Line 1232, Address: 0x23004c, Func Offset: 0x1c
	// Line 1234, Address: 0x230058, Func Offset: 0x28
	// Line 1236, Address: 0x23007c, Func Offset: 0x4c
	// Line 1238, Address: 0x230080, Func Offset: 0x50
	// Line 1240, Address: 0x230088, Func Offset: 0x58
	// Line 1243, Address: 0x2300a0, Func Offset: 0x70
	// Line 1244, Address: 0x2300ac, Func Offset: 0x7c
	// Line 1245, Address: 0x2300c0, Func Offset: 0x90
	// Line 1247, Address: 0x2300d4, Func Offset: 0xa4
	// Func End, Address: 0x2300f0, Func Offset: 0xc0
}

// 
// Start address: 0x2300f0
void CalibrationZVal(int num, EFCTVertexData* pVertex)
{
	int z;
	// Line 1287, Address: 0x2300f0, Func Offset: 0
	// Line 1290, Address: 0x2300fc, Func Offset: 0xc
	// Line 1291, Address: 0x230110, Func Offset: 0x20
	// Line 1292, Address: 0x230114, Func Offset: 0x24
	// Line 1293, Address: 0x23011c, Func Offset: 0x2c
	// Line 1294, Address: 0x230128, Func Offset: 0x38
	// Line 1295, Address: 0x23012c, Func Offset: 0x3c
	// Line 1296, Address: 0x230134, Func Offset: 0x44
	// Line 1297, Address: 0x230140, Func Offset: 0x50
	// Line 1298, Address: 0x230144, Func Offset: 0x54
	// Line 1300, Address: 0x23014c, Func Offset: 0x5c
	// Line 1303, Address: 0x230150, Func Offset: 0x60
	// Line 1304, Address: 0x230158, Func Offset: 0x68
	// Func End, Address: 0x230168, Func Offset: 0x78
}

// 
// Start address: 0x230170
void TinyFlameZSort()
{
	// Line 1334, Address: 0x230170, Func Offset: 0
	// Func End, Address: 0x230178, Func Offset: 0x8
}

// 
// Start address: 0x230180
int GetBehindAngelaFlameIndex(unsigned int index)
{
	// Line 1339, Address: 0x230180, Func Offset: 0
	// Line 1340, Address: 0x230188, Func Offset: 0x8
	// Line 1342, Address: 0x2301c4, Func Offset: 0x44
	// Line 1343, Address: 0x2301c8, Func Offset: 0x48
	// Func End, Address: 0x2301d8, Func Offset: 0x58
}

// 
// Start address: 0x2301e0
int GetBehindAngelaFlameSortIndex(unsigned int index)
{
	// Line 1348, Address: 0x2301e0, Func Offset: 0
	// Line 1349, Address: 0x2301e8, Func Offset: 0x8
	// Line 1355, Address: 0x230224, Func Offset: 0x44
	// Line 1357, Address: 0x23023c, Func Offset: 0x5c
	// Func End, Address: 0x23024c, Func Offset: 0x6c
}

// 
// Start address: 0x230250
void TinyFlameZSort2(unsigned int index, float* new_pos)
{
	int new_index;
	// Line 1360, Address: 0x230250, Func Offset: 0
	// Line 1363, Address: 0x230260, Func Offset: 0x10
	// Line 1365, Address: 0x230268, Func Offset: 0x18
	// Line 1367, Address: 0x230294, Func Offset: 0x44
	// Line 1368, Address: 0x2302ac, Func Offset: 0x5c
	// Func End, Address: 0x2302c0, Func Offset: 0x70
}

// 
// Start address: 0x2302c0
float GetBehindAngelaFlameLifeTimer(unsigned int index)
{
	int new_index;
	// Line 1372, Address: 0x2302c0, Func Offset: 0
	// Line 1376, Address: 0x2302c8, Func Offset: 0x8
	// Line 1378, Address: 0x2302d0, Func Offset: 0x10
	// Line 1380, Address: 0x2302fc, Func Offset: 0x3c
	// Line 1381, Address: 0x230310, Func Offset: 0x50
	// Func End, Address: 0x230320, Func Offset: 0x60
}

// 
// Start address: 0x230320
void EFCTFlameChangeCamera()
{
	// Line 1386, Address: 0x230320, Func Offset: 0
	// Line 1387, Address: 0x230334, Func Offset: 0x14
	// Func End, Address: 0x23033c, Func Offset: 0x1c
}

// 
// Start address: 0x230340
int IsFlameValid(EFCTObject* pObj, EFCTFlameObject* flame)
{
	// Line 1396, Address: 0x230340, Func Offset: 0
	// Line 1397, Address: 0x230354, Func Offset: 0x14
	// Line 1398, Address: 0x230378, Func Offset: 0x38
	// Line 1401, Address: 0x230384, Func Offset: 0x44
	// Line 1402, Address: 0x230390, Func Offset: 0x50
	// Line 1403, Address: 0x2303b4, Func Offset: 0x74
	// Line 1406, Address: 0x2303c0, Func Offset: 0x80
	// Line 1407, Address: 0x2303cc, Func Offset: 0x8c
	// Line 1408, Address: 0x2303f0, Func Offset: 0xb0
	// Line 1413, Address: 0x2303fc, Func Offset: 0xbc
	// Line 1414, Address: 0x23040c, Func Offset: 0xcc
	// Line 1419, Address: 0x230434, Func Offset: 0xf4
	// Line 1422, Address: 0x230440, Func Offset: 0x100
	// Line 1423, Address: 0x230464, Func Offset: 0x124
	// Line 1427, Address: 0x230470, Func Offset: 0x130
	// Line 1428, Address: 0x230494, Func Offset: 0x154
	// Line 1431, Address: 0x2304a0, Func Offset: 0x160
	// Line 1432, Address: 0x2304c4, Func Offset: 0x184
	// Line 1440, Address: 0x2304d0, Func Offset: 0x190
	// Line 1441, Address: 0x2304d4, Func Offset: 0x194
	// Func End, Address: 0x2304dc, Func Offset: 0x19c
}

