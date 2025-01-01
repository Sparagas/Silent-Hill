typedef struct shBattleFight;
typedef struct EFCTVertexData;
typedef struct EFCTAnimationData;
typedef struct shBattleShot;
typedef struct EFCTSparksPlane;
typedef struct EFCTFlameObject;
typedef struct EFCTSparksObject;
typedef struct EFCTTexEnvInfo;
typedef struct EFCTFlamePlane;
typedef struct shAttackInfo;
typedef struct EFCTObject;
typedef union _anon0;
typedef struct EFCTTask;
typedef struct _anon1;
typedef struct _shTskEXECUTE;
typedef struct _VbWVSMATRIX;

typedef void(*type_1)(void*);
typedef void(*type_11)(void*);

typedef shAttackInfo type_0[46];
typedef EFCTSparksPlane type_2[10];
typedef int type_3[4];
typedef float type_4[4];
typedef unsigned char type_5[4];
typedef float type_6[4];
typedef float type_7[4][4];
typedef EFCTFlameObject type_8[24];
typedef EFCTFlamePlane type_9[16];
typedef char type_10[488];
typedef float type_12[4];
typedef float type_13[4];
typedef float type_14[4][4];
typedef float type_15[4][4];

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct EFCTSparksPlane
{
	float trans[4];
	float speed[4];
	float timer;
	float life_span;
	float pos[4];
};

struct EFCTFlameObject
{
	unsigned char use;
	unsigned char kind;
	EFCTObject* base_obj;
	EFCTFlamePlane plane[16];
	EFCTSparksObject sparks;
};

struct EFCTSparksObject
{
	EFCTObject base_obj;
	EFCTSparksPlane plane[10];
};

struct EFCTTexEnvInfo
{
	unsigned short clut_id;
	unsigned short tfx;
	unsigned short transparency;
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
	unsigned short s_index;
	float trapezoid_param1;
	float trapezoid_param2;
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

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct EFCTTask
{
	_shTskEXECUTE exe;
	EFCTObject* pObj;
	char freemem[488];
};

struct _anon1
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

struct _shTskEXECUTE
{
	void(*adrs)(void*);
	void* next;
	void* prev;
	int mode;
	int atr;
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

shAttackInfo sh2_attack_list[46];
EFCTFlameObject flame_obj[24];
_anon1 cam0;
_VbWVSMATRIX VbWvsMatrix;

void SetFlameCycleData(unsigned char kind, EFCTFlamePlane* plane);
void SetFlameVertex(unsigned char kind, float width, float height, float* trans, float param1, float param2, EFCTVertexData* VertexData);
void FlameLocalRot(EFCTVertexData* pVertex, float* rot);
void SetFlameTexKind(unsigned char kind, EFCTFlamePlane* plane);
void SetFlameRotParam(unsigned char kind, float* rot);
void DrawFlame(void* task);
EFCTFlameObject* GetFlameObject(EFCTObject* pObj);
void RenewFlameSize(EFCTObject* pObj, EFCTFlameObject* flame);
void RenewFlameRGBA(EFCTObject* pObj, EFCTFlameObject* flame);
void EFCTTinyThreeDWorkFlame(EFCTObject* pObj);
void SetFlameSTValue(EFCTObject* pObj);
void InitFlameTexEnv(EFCTTexEnvInfo* pTexInfo);
unsigned short GetFlameEffectLayerNum();
void NextFrame(EFCTObject* pObj, float* wait_time, short* current, float* drawing_time);
void CountFlameCycleTimer(EFCTFlameObject* flame);

// 
// Start address: 0x23ef70
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
	// Line 214, Address: 0x23ef70, Func Offset: 0
	// Line 222, Address: 0x23ef80, Func Offset: 0x10
	// Line 223, Address: 0x23efa4, Func Offset: 0x34
	// Line 224, Address: 0x23efb4, Func Offset: 0x44
	// Line 225, Address: 0x23efc4, Func Offset: 0x54
	// Line 226, Address: 0x23efd4, Func Offset: 0x64
	// Line 227, Address: 0x23efe8, Func Offset: 0x78
	// Line 228, Address: 0x23effc, Func Offset: 0x8c
	// Line 229, Address: 0x23f010, Func Offset: 0xa0
	// Line 230, Address: 0x23f024, Func Offset: 0xb4
	// Line 231, Address: 0x23f038, Func Offset: 0xc8
	// Line 232, Address: 0x23f040, Func Offset: 0xd0
	// Line 233, Address: 0x23f054, Func Offset: 0xe4
	// Line 234, Address: 0x23f064, Func Offset: 0xf4
	// Line 235, Address: 0x23f078, Func Offset: 0x108
	// Line 236, Address: 0x23f088, Func Offset: 0x118
	// Line 237, Address: 0x23f098, Func Offset: 0x128
	// Line 238, Address: 0x23f0ac, Func Offset: 0x13c
	// Line 239, Address: 0x23f0bc, Func Offset: 0x14c
	// Line 240, Address: 0x23f0d0, Func Offset: 0x160
	// Line 241, Address: 0x23f0e0, Func Offset: 0x170
	// Line 243, Address: 0x23f0e8, Func Offset: 0x178
	// Line 247, Address: 0x23f110, Func Offset: 0x1a0
	// Line 248, Address: 0x23f120, Func Offset: 0x1b0
	// Line 256, Address: 0x23f140, Func Offset: 0x1d0
	// Line 257, Address: 0x23f150, Func Offset: 0x1e0
	// Line 258, Address: 0x23f178, Func Offset: 0x208
	// Line 259, Address: 0x23f188, Func Offset: 0x218
	// Line 262, Address: 0x23f1b0, Func Offset: 0x240
	// Func End, Address: 0x23f1c0, Func Offset: 0x250
}

// 
// Start address: 0x23f1c0
void SetFlameVertex(unsigned char kind, float width, float height, float* trans, float param1, float param2, EFCTVertexData* VertexData)
{
	float adjustment[4][4];
	// Line 349, Address: 0x23f1c0, Func Offset: 0
	// Line 353, Address: 0x23f1ec, Func Offset: 0x2c
	// Line 354, Address: 0x23f1f4, Func Offset: 0x34
	// Line 355, Address: 0x23f1fc, Func Offset: 0x3c
	// Line 356, Address: 0x23f204, Func Offset: 0x44
	// Line 358, Address: 0x23f20c, Func Offset: 0x4c
	// Line 360, Address: 0x23f228, Func Offset: 0x68
	// Line 361, Address: 0x23f238, Func Offset: 0x78
	// Line 366, Address: 0x23f248, Func Offset: 0x88
	// Line 367, Address: 0x23f270, Func Offset: 0xb0
	// Line 368, Address: 0x23f28c, Func Offset: 0xcc
	// Line 369, Address: 0x23f29c, Func Offset: 0xdc
	// Line 372, Address: 0x23f2ac, Func Offset: 0xec
	// Line 373, Address: 0x23f2d4, Func Offset: 0x114
	// Line 374, Address: 0x23f2f0, Func Offset: 0x130
	// Line 375, Address: 0x23f300, Func Offset: 0x140
	// Line 377, Address: 0x23f310, Func Offset: 0x150
	// Line 378, Address: 0x23f334, Func Offset: 0x174
	// Line 379, Address: 0x23f3b8, Func Offset: 0x1f8
	// Line 380, Address: 0x23f3c8, Func Offset: 0x208
	// Line 382, Address: 0x23f3d8, Func Offset: 0x218
	// Line 383, Address: 0x23f3fc, Func Offset: 0x23c
	// Line 384, Address: 0x23f480, Func Offset: 0x2c0
	// Line 385, Address: 0x23f490, Func Offset: 0x2d0
	// Line 387, Address: 0x23f4a0, Func Offset: 0x2e0
	// Func End, Address: 0x23f4c4, Func Offset: 0x304
}

// 
// Start address: 0x23f4d0
void FlameLocalRot(EFCTVertexData* pVertex, float* rot)
{
	int i;
	float mtx[4][4];
	// Line 391, Address: 0x23f4d0, Func Offset: 0
	// Line 396, Address: 0x23f4e8, Func Offset: 0x18
	// Line 397, Address: 0x23f510, Func Offset: 0x40
	// Line 400, Address: 0x23f54c, Func Offset: 0x7c
	// Line 401, Address: 0x23f558, Func Offset: 0x88
	// Line 402, Address: 0x23f5a4, Func Offset: 0xd4
	// Line 403, Address: 0x23f5b4, Func Offset: 0xe4
	// Func End, Address: 0x23f5cc, Func Offset: 0xfc
}

// 
// Start address: 0x23f5d0
void SetFlameTexKind(unsigned char kind, EFCTFlamePlane* plane)
{
	int i;
	// Line 429, Address: 0x23f5d0, Func Offset: 0
	// Line 433, Address: 0x23f5e4, Func Offset: 0x14
	// Line 435, Address: 0x23f608, Func Offset: 0x38
	// Line 436, Address: 0x23f624, Func Offset: 0x54
	// Line 440, Address: 0x23f630, Func Offset: 0x60
	// Line 441, Address: 0x23f640, Func Offset: 0x70
	// Line 442, Address: 0x23f648, Func Offset: 0x78
	// Line 444, Address: 0x23f65c, Func Offset: 0x8c
	// Line 445, Address: 0x23f678, Func Offset: 0xa8
	// Line 449, Address: 0x23f690, Func Offset: 0xc0
	// Line 450, Address: 0x23f69c, Func Offset: 0xcc
	// Line 452, Address: 0x23f6a4, Func Offset: 0xd4
	// Line 456, Address: 0x23f6cc, Func Offset: 0xfc
	// Func End, Address: 0x23f6e0, Func Offset: 0x110
}

// 
// Start address: 0x23f6e0
void SetFlameRotParam(unsigned char kind, float* rot)
{
	float x_rot;
	// Line 460, Address: 0x23f6e0, Func Offset: 0
	// Line 463, Address: 0x23f6f8, Func Offset: 0x18
	// Line 466, Address: 0x23f6fc, Func Offset: 0x1c
	// Line 467, Address: 0x23f714, Func Offset: 0x34
	// Line 476, Address: 0x23f72c, Func Offset: 0x4c
	// Line 478, Address: 0x23f748, Func Offset: 0x68
	// Line 479, Address: 0x23f758, Func Offset: 0x78
	// Line 480, Address: 0x23f76c, Func Offset: 0x8c
	// Line 482, Address: 0x23f774, Func Offset: 0x94
	// Line 485, Address: 0x23f780, Func Offset: 0xa0
	// Line 488, Address: 0x23f7c0, Func Offset: 0xe0
	// Func End, Address: 0x23f7d8, Func Offset: 0xf8
}

// 
// Start address: 0x23f7e0
void DrawFlame(void* task)
{
	int i;
	EFCTFlameObject* flame;
	EFCTTask* pTask;
	// Line 491, Address: 0x23f7e0, Func Offset: 0
	// Line 496, Address: 0x23f7f8, Func Offset: 0x18
	// Line 497, Address: 0x23f7fc, Func Offset: 0x1c
	// Line 498, Address: 0x23f804, Func Offset: 0x24
	// Line 503, Address: 0x23f82c, Func Offset: 0x4c
	// Line 504, Address: 0x23f83c, Func Offset: 0x5c
	// Line 505, Address: 0x23f844, Func Offset: 0x64
	// Line 509, Address: 0x23f86c, Func Offset: 0x8c
	// Line 511, Address: 0x23f878, Func Offset: 0x98
	// Line 515, Address: 0x23f8c0, Func Offset: 0xe0
	// Line 519, Address: 0x23f8d4, Func Offset: 0xf4
	// Line 524, Address: 0x23f8e0, Func Offset: 0x100
	// Line 528, Address: 0x23f8f0, Func Offset: 0x110
	// Line 535, Address: 0x23f900, Func Offset: 0x120
	// Line 539, Address: 0x23f90c, Func Offset: 0x12c
	// Line 548, Address: 0x23f918, Func Offset: 0x138
	// Line 551, Address: 0x23f924, Func Offset: 0x144
	// Line 555, Address: 0x23f930, Func Offset: 0x150
	// Line 558, Address: 0x23f93c, Func Offset: 0x15c
	// Func End, Address: 0x23f958, Func Offset: 0x178
}

// 
// Start address: 0x23f960
EFCTFlameObject* GetFlameObject(EFCTObject* pObj)
{
	int i;
	// Line 562, Address: 0x23f960, Func Offset: 0
	// Line 565, Address: 0x23f96c, Func Offset: 0xc
	// Line 566, Address: 0x23f978, Func Offset: 0x18
	// Line 567, Address: 0x23f9cc, Func Offset: 0x6c
	// Line 569, Address: 0x23f9ec, Func Offset: 0x8c
	// Line 571, Address: 0x23f9fc, Func Offset: 0x9c
	// Line 572, Address: 0x23fa00, Func Offset: 0xa0
	// Func End, Address: 0x23fa10, Func Offset: 0xb0
}

// 
// Start address: 0x23fa10
void RenewFlameSize(EFCTObject* pObj, EFCTFlameObject* flame)
{
	float trans[4];
	float rot[4];
	float param2;
	float param1;
	float height;
	float width;
	float ratio;
	float delta_height;
	float delta_width;
	int i;
	// Line 576, Address: 0x23fa10, Func Offset: 0
	// Line 584, Address: 0x23fa24, Func Offset: 0x14
	// Line 585, Address: 0x23fa38, Func Offset: 0x28
	// Line 587, Address: 0x23fa4c, Func Offset: 0x3c
	// Line 594, Address: 0x23fa58, Func Offset: 0x48
	// Line 596, Address: 0x23fa88, Func Offset: 0x78
	// Line 599, Address: 0x23fab0, Func Offset: 0xa0
	// Line 600, Address: 0x23fae8, Func Offset: 0xd8
	// Line 608, Address: 0x23fb24, Func Offset: 0x114
	// Line 612, Address: 0x23fb50, Func Offset: 0x140
	// Line 613, Address: 0x23fb9c, Func Offset: 0x18c
	// Line 614, Address: 0x23fbec, Func Offset: 0x1dc
	// Line 615, Address: 0x23fc1c, Func Offset: 0x20c
	// Line 619, Address: 0x23fc20, Func Offset: 0x210
	// Line 622, Address: 0x23fc48, Func Offset: 0x238
	// Line 628, Address: 0x23fc70, Func Offset: 0x260
	// Line 630, Address: 0x23fca0, Func Offset: 0x290
	// Line 631, Address: 0x23fcf4, Func Offset: 0x2e4
	// Line 632, Address: 0x23fd18, Func Offset: 0x308
	// Line 633, Address: 0x23fd3c, Func Offset: 0x32c
	// Line 639, Address: 0x23fd60, Func Offset: 0x350
	// Line 640, Address: 0x23fd7c, Func Offset: 0x36c
	// Line 657, Address: 0x23fd98, Func Offset: 0x388
	// Line 658, Address: 0x23fdec, Func Offset: 0x3dc
	// Line 659, Address: 0x23fe10, Func Offset: 0x400
	// Line 665, Address: 0x23fe34, Func Offset: 0x424
	// Line 666, Address: 0x23fe48, Func Offset: 0x438
	// Line 670, Address: 0x23fe5c, Func Offset: 0x44c
	// Line 673, Address: 0x23fe9c, Func Offset: 0x48c
	// Line 674, Address: 0x23ff20, Func Offset: 0x510
	// Line 677, Address: 0x23ff3c, Func Offset: 0x52c
	// Line 679, Address: 0x23ff64, Func Offset: 0x554
	// Line 681, Address: 0x23ff74, Func Offset: 0x564
	// Func End, Address: 0x23ff88, Func Offset: 0x578
}

// 
// Start address: 0x23ff90
void RenewFlameRGBA(EFCTObject* pObj, EFCTFlameObject* flame)
{
	int rgba[4];
	int i;
	float ratio;
	// Line 685, Address: 0x23ff90, Func Offset: 0
	// Line 691, Address: 0x23ffa4, Func Offset: 0x14
	// Line 694, Address: 0x23ffb0, Func Offset: 0x20
	// Line 695, Address: 0x240024, Func Offset: 0x94
	// Line 696, Address: 0x240044, Func Offset: 0xb4
	// Line 697, Address: 0x240064, Func Offset: 0xd4
	// Line 698, Address: 0x240084, Func Offset: 0xf4
	// Line 699, Address: 0x2400e4, Func Offset: 0x154
	// Line 700, Address: 0x240104, Func Offset: 0x174
	// Line 702, Address: 0x24012c, Func Offset: 0x19c
	// Line 703, Address: 0x24013c, Func Offset: 0x1ac
	// Func End, Address: 0x240150, Func Offset: 0x1c0
}

// 
// Start address: 0x240150
void EFCTTinyThreeDWorkFlame(EFCTObject* pObj)
{
	float vec[4];
	int i;
	float ws_mtx[4][4];
	float wv_mtx[4][4];
	float ls_mtx[4][4];
	float lw_mtx[4][4];
	// Line 738, Address: 0x240150, Func Offset: 0
	// Line 747, Address: 0x240164, Func Offset: 0x14
	// Line 748, Address: 0x240178, Func Offset: 0x28
	// Line 749, Address: 0x24018c, Func Offset: 0x3c
	// Line 752, Address: 0x24019c, Func Offset: 0x4c
	// Line 753, Address: 0x2401ac, Func Offset: 0x5c
	// Line 754, Address: 0x2401bc, Func Offset: 0x6c
	// Line 756, Address: 0x2401cc, Func Offset: 0x7c
	// Line 759, Address: 0x2401dc, Func Offset: 0x8c
	// Line 760, Address: 0x240210, Func Offset: 0xc0
	// Line 762, Address: 0x240244, Func Offset: 0xf4
	// Line 763, Address: 0x240258, Func Offset: 0x108
	// Line 765, Address: 0x24026c, Func Offset: 0x11c
	// Line 769, Address: 0x240278, Func Offset: 0x128
	// Line 770, Address: 0x2402e8, Func Offset: 0x198
	// Line 771, Address: 0x240318, Func Offset: 0x1c8
	// Line 772, Address: 0x240348, Func Offset: 0x1f8
	// Line 773, Address: 0x24036c, Func Offset: 0x21c
	// Line 774, Address: 0x240390, Func Offset: 0x240
	// Line 776, Address: 0x2403ac, Func Offset: 0x25c
	// Func End, Address: 0x2403c4, Func Offset: 0x274
}

// 
// Start address: 0x2403d0
void SetFlameSTValue(EFCTObject* pObj)
{
	EFCTFlameObject* flame;
	int t_index;
	int s_index;
	int FrameNumber;
	int i;
	// Line 780, Address: 0x2403d0, Func Offset: 0
	// Line 785, Address: 0x2403f0, Func Offset: 0x20
	// Line 788, Address: 0x2403fc, Func Offset: 0x2c
	// Line 789, Address: 0x24040c, Func Offset: 0x3c
	// Line 790, Address: 0x240414, Func Offset: 0x44
	// Line 794, Address: 0x24043c, Func Offset: 0x6c
	// Line 795, Address: 0x240458, Func Offset: 0x88
	// Line 796, Address: 0x240464, Func Offset: 0x94
	// Line 797, Address: 0x240468, Func Offset: 0x98
	// Line 798, Address: 0x24046c, Func Offset: 0x9c
	// Line 800, Address: 0x240474, Func Offset: 0xa4
	// Line 801, Address: 0x24048c, Func Offset: 0xbc
	// Line 804, Address: 0x240490, Func Offset: 0xc0
	// Line 805, Address: 0x2404c8, Func Offset: 0xf8
	// Line 806, Address: 0x240500, Func Offset: 0x130
	// Line 807, Address: 0x240544, Func Offset: 0x174
	// Line 808, Address: 0x240580, Func Offset: 0x1b0
	// Line 809, Address: 0x2405bc, Func Offset: 0x1ec
	// Line 810, Address: 0x240600, Func Offset: 0x230
	// Line 811, Address: 0x240644, Func Offset: 0x274
	// Line 812, Address: 0x240688, Func Offset: 0x2b8
	// Line 813, Address: 0x24069c, Func Offset: 0x2cc
	// Func End, Address: 0x2406c0, Func Offset: 0x2f0
}

// 
// Start address: 0x2406c0
void InitFlameTexEnv(EFCTTexEnvInfo* pTexInfo)
{
	// Line 816, Address: 0x2406c0, Func Offset: 0
	// Line 817, Address: 0x2406c8, Func Offset: 0x8
	// Line 820, Address: 0x2406d0, Func Offset: 0x10
	// Line 821, Address: 0x2406dc, Func Offset: 0x1c
	// Line 822, Address: 0x2406e4, Func Offset: 0x24
	// Func End, Address: 0x2406f0, Func Offset: 0x30
}

// 
// Start address: 0x2406f0
unsigned short GetFlameEffectLayerNum()
{
	// Line 826, Address: 0x2406f0, Func Offset: 0
	// Line 827, Address: 0x2406f4, Func Offset: 0x4
	// Func End, Address: 0x2406fc, Func Offset: 0xc
}

// 
// Start address: 0x240700
void NextFrame(EFCTObject* pObj, float* wait_time, short* current, float* drawing_time)
{
	EFCTAnimationData* pAnim;
	// Line 835, Address: 0x240700, Func Offset: 0
	// Line 836, Address: 0x24071c, Func Offset: 0x1c
	// Line 860, Address: 0x240724, Func Offset: 0x24
	// Line 862, Address: 0x240744, Func Offset: 0x44
	// Line 863, Address: 0x240760, Func Offset: 0x60
	// Line 866, Address: 0x240768, Func Offset: 0x68
	// Line 869, Address: 0x240774, Func Offset: 0x74
	// Line 871, Address: 0x240798, Func Offset: 0x98
	// Line 872, Address: 0x2407a4, Func Offset: 0xa4
	// Line 875, Address: 0x2407ac, Func Offset: 0xac
	// Line 876, Address: 0x2407d4, Func Offset: 0xd4
	// Line 877, Address: 0x2407e8, Func Offset: 0xe8
	// Line 879, Address: 0x2407f0, Func Offset: 0xf0
	// Line 887, Address: 0x2407f8, Func Offset: 0xf8
	// Func End, Address: 0x24080c, Func Offset: 0x10c
}

// 
// Start address: 0x240810
void CountFlameCycleTimer(EFCTFlameObject* flame)
{
	int i;
	// Line 891, Address: 0x240810, Func Offset: 0
	// Line 895, Address: 0x240820, Func Offset: 0x10
	// Line 896, Address: 0x24082c, Func Offset: 0x1c
	// Line 897, Address: 0x240838, Func Offset: 0x28
	// Line 901, Address: 0x240860, Func Offset: 0x50
	// Line 906, Address: 0x2408b0, Func Offset: 0xa0
	// Line 907, Address: 0x2408cc, Func Offset: 0xbc
	// Line 908, Address: 0x2408d0, Func Offset: 0xc0
	// Line 909, Address: 0x2408e4, Func Offset: 0xd4
	// Line 911, Address: 0x2408e8, Func Offset: 0xd8
	// Func End, Address: 0x2408fc, Func Offset: 0xec
}

