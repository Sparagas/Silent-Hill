typedef struct _shTskTASK;
typedef struct EFCTObject;
typedef struct EFCTTexEnvInfo;
typedef struct shBattleFight;
typedef struct EFCTVertexData;
typedef struct EFCTTask;
typedef struct shBattleShot;
typedef struct EFCTAnimationData;
typedef struct _anon0;
typedef struct _anon1;
typedef struct shAttackInfo;
typedef struct _shTskEXECUTE;
typedef union _anon2;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct _VbWVSMATRIX;
typedef union Q_WORDDATA;
typedef struct _VbSCREENINFO;
typedef struct sh2gfw_Env_ctl;

typedef void(*type_1)(void*);
typedef void(*type_12)(void*);
typedef void(*type_16)(void*);

typedef <unknown fundamental type (0xa510)> type_0[4096];
typedef <unknown fundamental type (0xa510)> type_2[32768];
typedef EFCTObject type_3[256];
typedef EFCTTexEnvInfo type_4[11];
typedef int type_5[4];
typedef float type_6[4];
typedef unsigned char type_7[4];
typedef float type_8[4];
typedef float type_9[4][4];
typedef shAttackInfo type_10[46];
typedef unsigned short type_11[4];
typedef void(*type_13)(void*)[9];
typedef unsigned long type_14[2];
typedef char type_15[488];
typedef unsigned long type_17[2];
typedef unsigned char type_18[492];
typedef unsigned int type_19[4];
typedef float type_20[4];
typedef unsigned short type_21[8];
typedef float type_22[4];
typedef float type_23[4];
typedef float type_24[4][4];
typedef unsigned long type_25[2];
typedef unsigned char type_26[16];
typedef int type_27[4];
typedef short type_28[8];
typedef char type_29[16];
typedef unsigned long type_30[2];
typedef unsigned long type_31[2];
typedef _shTskTASK* type_32[8];
typedef unsigned char type_33[65536];

struct _shTskTASK
{
	_shTskEXECUTE exe;
	unsigned char freemem[492];
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

struct EFCTTexEnvInfo
{
	unsigned short clut_id;
	unsigned short tfx;
	unsigned short transparency;
};

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

struct EFCTTask
{
	_shTskEXECUTE exe;
	EFCTObject* pObj;
	char freemem[488];
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct _anon1
{
	unsigned int* pCurrent;
	<unknown fundamental type (0xa510)>* pBase;
	<unknown fundamental type (0xa510)>* pDmaTag;
	unsigned int* pVifCode;
	unsigned int numlen;
	unsigned long* pGifTag;
	unsigned int pad12;
	unsigned int pad13;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon2 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _shTskEXECUTE
{
	void(*adrs)(void*);
	void* next;
	void* prev;
	int mode;
	int atr;
};

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

union Q_WORDDATA
{
	unsigned int ui32[4];
	unsigned short us16[8];
	float fl32[4];
	unsigned char uc8[16];
	int si32[4];
	short ss16[8];
	char sc8[16];
	unsigned long ul64[2];
	<unknown fundamental type (0xa510)> ul128;
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

struct sh2gfw_Env_ctl
{
	float camera_p[4];
	float camera_zd[4];
	float camera_yd[4];
	float camera_rot[4];
	float camera_ido[4];
	float camera_parms[4];
	float camera_parms2[4];
	float camera_mat[4][4];
	float objclip_mat[4][4];
	Q_WORDDATA block_index;
	float p_light0[4];
	float p_light1[4];
	float p_light2[4];
	float p_color0[4];
	float p_color1[4];
	float p_color2[4];
	float ambient[4];
	float BaseAmbient[4];
	float VertexAmbient[4];
	float spot0_localpos[4];
	float spot0_localdir[4];
	sh2gfw_SPOTL_MATRIX SpotL0;
	float spot1_localpos[4];
	float spot1_localdir[4];
	sh2gfw_SPOTL_MATRIX SpotL1;
	float spot2_localpos[4];
	float spot2_localdir[4];
	sh2gfw_SPOTL_MATRIX SpotL2;
	float point0_localpos[4];
	sh2gfw_POINTL_MATRIX PointL0;
	unsigned short light_mode;
	unsigned short weather_mode;
	unsigned short time_mode;
	unsigned short now_block;
	unsigned short mode_buf[4];
	Q_WORDDATA stat_ctl_1;
	Q_WORDDATA stat_ctl_2;
	Q_WORDDATA fogcolor;
	Q_WORDDATA fogparm;
	Q_WORDDATA clearcolor;
	Q_WORDDATA random_seeds;
	Q_WORDDATA compo_shadow_env;
	Q_WORDDATA compo_shadow_test;
	Q_WORDDATA compo_shadow_alp;
	Q_WORDDATA compo_shadow_col;
	Q_WORDDATA compo_Fill_col;
	Q_WORDDATA NoiseCondition;
	Q_WORDDATA CopyFilterColor;
};

shAttackInfo sh2_attack_list[46];
void(*EFCTControlFunc)(void*)[9];
<unknown fundamental type (0xa510)> efctPacket[4096];
<unknown fundamental type (0xa510)> efctheap[32768];
unsigned char EFCTTaskBuf[65536];
EFCTObject EFCTLocalDataBuffer[256];
EFCTTexEnvInfo TexImage[11];
_anon0 cam0;
_VbWVSMATRIX VbWvsMatrix;
sh2gfw_Env_ctl Env_ctl;
_shTskTASK* shTskTaskListTop[8];
_VbSCREENINFO VbScreenInfo;
float passing_time;

void EFCTInit();
void EFCTInitEffectTask();
void EFCTSetBloodDrop(float* Pos, short chara_kind, short chara_id);
void EFCTSetGunFire(float* Pos, float* vec);
void EFCTSetGunSmoke(float* Pos);
unsigned short GetEffectLayerNum(short EffectKind);
void InitEffectTexEnv(int EffectKind);
EFCTTask* EFCTEntryEffectTask(short Kind);
void EFCTCutEffectTask(EFCTTask* ptr);
int InitEffectAnimData(unsigned short TotalFrame, float DrawFrameWait, short StartFrame, EFCTAnimationData** pAnim);
unsigned int InitEffectVertexSprite(float width, float height, unsigned short PlaneKind, EFCTVertexData** pVertex, float* rot, unsigned char* rgba);
void SetEffectVertexSpriteXY(float width, float height, EFCTVertexData* VertexData);
void SetEffectVertexSpriteXZ(float width, float height, EFCTVertexData* VertexData);
void SpriteLocalRot(EFCTVertexData* pVertex, int num, float* rot);
int EFCTNextFrame(EFCTObject* pObj, int DoLoop);
int EFCTAutoNextFrame(EFCTObject* pObj);
void EFCTThreeDWork(EFCTObject* pObj);
void EFCTTinyThreeDWork(EFCTObject* pObj);
void DrawPrimitive(EFCTObject* pObj);
void EFCTMakePacket(EFCTObject* pObj, _anon1* pck);
void SetVertexPkData(_anon1* pck, EFCTVertexData* pVertex, unsigned int nVertexNum);
void EFCTGetGiftag(int Kind, unsigned long* giftag);
void EFCTSetAlphaEnvironment(_anon1* pck, short kind);
void EFCTDeleteAllTask();
void EFCTDeleteTask(short Kind);
int EFCTDeleteOldBloodDropTask();
int EFCTDeleteOldTask(short kind);
void EFCTDoCtrlDummy(void* ptr);
float GetSpriteRotAngle(float around_rot, unsigned int plane_num, unsigned int index, int rand_rot_range);
void ClipEffectObject(EFCTObject* pObj);
int EFCTClipVertex(int* vec);
void EFCTResetAlpha(int alpha, EFCTObject* pObj);
void EFCTResetRGBA(int* rgba, EFCTVertexData* pVertex);
void EFCTSetPassingTimePerFrame(float time);
float EFCTGetPassingTimePerFrame();

// 
// Start address: 0x147680
void EFCTInit()
{
	// Line 125, Address: 0x147680, Func Offset: 0
	// Line 127, Address: 0x147688, Func Offset: 0x8
	// Line 128, Address: 0x14769c, Func Offset: 0x1c
	// Line 132, Address: 0x1476b0, Func Offset: 0x30
	// Line 138, Address: 0x1476c0, Func Offset: 0x40
	// Line 139, Address: 0x1476c8, Func Offset: 0x48
	// Func End, Address: 0x1476d8, Func Offset: 0x58
}

// 
// Start address: 0x1476e0
void EFCTInitEffectTask()
{
	int i;
	// Line 155, Address: 0x1476e0, Func Offset: 0
	// Line 159, Address: 0x1476ec, Func Offset: 0xc
	// Line 161, Address: 0x1476f8, Func Offset: 0x18
	// Line 164, Address: 0x147714, Func Offset: 0x34
	// Line 165, Address: 0x147738, Func Offset: 0x58
	// Line 166, Address: 0x14775c, Func Offset: 0x7c
	// Line 168, Address: 0x147778, Func Offset: 0x98
	// Line 169, Address: 0x14779c, Func Offset: 0xbc
	// Line 170, Address: 0x1477c0, Func Offset: 0xe0
	// Line 171, Address: 0x1477dc, Func Offset: 0xfc
	// Line 172, Address: 0x1477e0, Func Offset: 0x100
	// Line 175, Address: 0x1477f4, Func Offset: 0x114
	// Line 177, Address: 0x147800, Func Offset: 0x120
	// Func End, Address: 0x147814, Func Offset: 0x134
}

// 
// Start address: 0x147820
void EFCTSetBloodDrop(float* Pos, short chara_kind, short chara_id)
{
	unsigned short LayerNum;
	int i;
	EFCTTask* pTask;
	// Line 229, Address: 0x147820, Func Offset: 0
	// Line 231, Address: 0x147840, Func Offset: 0x20
	// Line 234, Address: 0x147844, Func Offset: 0x24
	// Line 236, Address: 0x147854, Func Offset: 0x34
	// Line 237, Address: 0x147860, Func Offset: 0x40
	// Line 238, Address: 0x147870, Func Offset: 0x50
	// Line 248, Address: 0x147878, Func Offset: 0x58
	// Line 250, Address: 0x147888, Func Offset: 0x68
	// Line 260, Address: 0x147890, Func Offset: 0x70
	// Line 262, Address: 0x1478ac, Func Offset: 0x8c
	// Line 263, Address: 0x1478b8, Func Offset: 0x98
	// Line 266, Address: 0x1478c0, Func Offset: 0xa0
	// Line 267, Address: 0x1478c8, Func Offset: 0xa8
	// Line 268, Address: 0x1478d4, Func Offset: 0xb4
	// Line 269, Address: 0x1478e0, Func Offset: 0xc0
	// Line 272, Address: 0x1478f8, Func Offset: 0xd8
	// Line 274, Address: 0x147904, Func Offset: 0xe4
	// Func End, Address: 0x147920, Func Offset: 0x100
}

// 
// Start address: 0x147920
void EFCTSetGunFire(float* Pos, float* vec)
{
	int i;
	unsigned short LayerNum;
	EFCTTask* pTask;
	// Line 330, Address: 0x147920, Func Offset: 0
	// Line 335, Address: 0x14793c, Func Offset: 0x1c
	// Line 338, Address: 0x14794c, Func Offset: 0x2c
	// Line 339, Address: 0x147958, Func Offset: 0x38
	// Line 340, Address: 0x147968, Func Offset: 0x48
	// Line 350, Address: 0x147970, Func Offset: 0x50
	// Line 352, Address: 0x147980, Func Offset: 0x60
	// Line 363, Address: 0x147988, Func Offset: 0x68
	// Line 365, Address: 0x1479a8, Func Offset: 0x88
	// Line 366, Address: 0x1479b4, Func Offset: 0x94
	// Line 369, Address: 0x1479bc, Func Offset: 0x9c
	// Line 370, Address: 0x1479c4, Func Offset: 0xa4
	// Line 373, Address: 0x1479e0, Func Offset: 0xc0
	// Line 375, Address: 0x1479ec, Func Offset: 0xcc
	// Func End, Address: 0x147a08, Func Offset: 0xe8
}

// 
// Start address: 0x147a10
void EFCTSetGunSmoke(float* Pos)
{
	unsigned short LayerNum;
	int i;
	EFCTTask* pTask;
	// Line 379, Address: 0x147a10, Func Offset: 0
	// Line 381, Address: 0x147a28, Func Offset: 0x18
	// Line 384, Address: 0x147a2c, Func Offset: 0x1c
	// Line 386, Address: 0x147a3c, Func Offset: 0x2c
	// Line 387, Address: 0x147a48, Func Offset: 0x38
	// Line 388, Address: 0x147a58, Func Offset: 0x48
	// Line 398, Address: 0x147a60, Func Offset: 0x50
	// Line 400, Address: 0x147a70, Func Offset: 0x60
	// Line 410, Address: 0x147a78, Func Offset: 0x68
	// Line 412, Address: 0x147a94, Func Offset: 0x84
	// Line 413, Address: 0x147aa0, Func Offset: 0x90
	// Line 416, Address: 0x147aa8, Func Offset: 0x98
	// Line 417, Address: 0x147ab0, Func Offset: 0xa0
	// Line 420, Address: 0x147ac8, Func Offset: 0xb8
	// Line 422, Address: 0x147ad4, Func Offset: 0xc4
	// Func End, Address: 0x147af0, Func Offset: 0xe0
}

// 
// Start address: 0x147af0
unsigned short GetEffectLayerNum(short EffectKind)
{
	short Ret;
	// Line 530, Address: 0x147af0, Func Offset: 0
	// Line 531, Address: 0x147b00, Func Offset: 0x10
	// Line 533, Address: 0x147b0c, Func Offset: 0x1c
	// Line 539, Address: 0x147b40, Func Offset: 0x50
	// Line 540, Address: 0x147b5c, Func Offset: 0x6c
	// Line 542, Address: 0x147b64, Func Offset: 0x74
	// Line 543, Address: 0x147b7c, Func Offset: 0x8c
	// Line 545, Address: 0x147b84, Func Offset: 0x94
	// Line 549, Address: 0x147b9c, Func Offset: 0xac
	// Line 550, Address: 0x147ba0, Func Offset: 0xb0
	// Func End, Address: 0x147bb4, Func Offset: 0xc4
}

// 
// Start address: 0x147bc0
void InitEffectTexEnv(int EffectKind)
{
	// Line 554, Address: 0x147bc0, Func Offset: 0
	// Line 556, Address: 0x147bcc, Func Offset: 0xc
	// Line 560, Address: 0x147bf8, Func Offset: 0x38
	// Line 561, Address: 0x147c1c, Func Offset: 0x5c
	// Line 563, Address: 0x147c24, Func Offset: 0x64
	// Line 564, Address: 0x147c48, Func Offset: 0x88
	// Line 566, Address: 0x147c50, Func Offset: 0x90
	// Line 567, Address: 0x147c74, Func Offset: 0xb4
	// Line 569, Address: 0x147c7c, Func Offset: 0xbc
	// Line 570, Address: 0x147ca0, Func Offset: 0xe0
	// Line 572, Address: 0x147ca8, Func Offset: 0xe8
	// Line 573, Address: 0x147ccc, Func Offset: 0x10c
	// Line 575, Address: 0x147cd4, Func Offset: 0x114
	// Line 576, Address: 0x147cf8, Func Offset: 0x138
	// Line 578, Address: 0x147d00, Func Offset: 0x140
	// Line 582, Address: 0x147d28, Func Offset: 0x168
	// Func End, Address: 0x147d38, Func Offset: 0x178
}

// 
// Start address: 0x147d40
EFCTTask* EFCTEntryEffectTask(short Kind)
{
	int i;
	_shTskTASK* pTask;
	EFCTObject* pObject;
	// Line 586, Address: 0x147d40, Func Offset: 0
	// Line 589, Address: 0x147d58, Func Offset: 0x18
	// Line 592, Address: 0x147d5c, Func Offset: 0x1c
	// Line 593, Address: 0x147d64, Func Offset: 0x24
	// Line 594, Address: 0x147d6c, Func Offset: 0x2c
	// Line 595, Address: 0x147d78, Func Offset: 0x38
	// Line 597, Address: 0x147d84, Func Offset: 0x44
	// Line 598, Address: 0x147d88, Func Offset: 0x48
	// Line 599, Address: 0x147d8c, Func Offset: 0x4c
	// Line 602, Address: 0x147da8, Func Offset: 0x68
	// Line 603, Address: 0x147de0, Func Offset: 0xa0
	// Line 606, Address: 0x147dec, Func Offset: 0xac
	// Line 607, Address: 0x147df4, Func Offset: 0xb4
	// Line 609, Address: 0x147dfc, Func Offset: 0xbc
	// Line 611, Address: 0x147e00, Func Offset: 0xc0
	// Line 613, Address: 0x147e10, Func Offset: 0xd0
	// Line 614, Address: 0x147e14, Func Offset: 0xd4
	// Func End, Address: 0x147e30, Func Offset: 0xf0
}

// 
// Start address: 0x147e30
void EFCTCutEffectTask(EFCTTask* ptr)
{
	// Line 618, Address: 0x147e30, Func Offset: 0
	// Line 619, Address: 0x147e3c, Func Offset: 0xc
	// Line 620, Address: 0x147e5c, Func Offset: 0x2c
	// Line 622, Address: 0x147e68, Func Offset: 0x38
	// Line 623, Address: 0x147e7c, Func Offset: 0x4c
	// Line 624, Address: 0x147e90, Func Offset: 0x60
	// Line 626, Address: 0x147e9c, Func Offset: 0x6c
	// Line 627, Address: 0x147eb0, Func Offset: 0x80
	// Line 628, Address: 0x147ec4, Func Offset: 0x94
	// Line 631, Address: 0x147ed0, Func Offset: 0xa0
	// Line 634, Address: 0x147edc, Func Offset: 0xac
	// Func End, Address: 0x147eec, Func Offset: 0xbc
}

// 
// Start address: 0x147ef0
int InitEffectAnimData(unsigned short TotalFrame, float DrawFrameWait, short StartFrame, EFCTAnimationData** pAnim)
{
	EFCTAnimationData AnimData;
	// Line 638, Address: 0x147ef0, Func Offset: 0
	// Line 642, Address: 0x147f08, Func Offset: 0x18
	// Line 643, Address: 0x147f18, Func Offset: 0x28
	// Line 644, Address: 0x147f28, Func Offset: 0x38
	// Line 646, Address: 0x147f30, Func Offset: 0x40
	// Line 647, Address: 0x147f44, Func Offset: 0x54
	// Line 648, Address: 0x147f54, Func Offset: 0x64
	// Line 651, Address: 0x147f60, Func Offset: 0x70
	// Line 653, Address: 0x147fa8, Func Offset: 0xb8
	// Line 654, Address: 0x147fac, Func Offset: 0xbc
	// Line 656, Address: 0x147fb4, Func Offset: 0xc4
	// Line 657, Address: 0x147fc8, Func Offset: 0xd8
	// Line 658, Address: 0x147fdc, Func Offset: 0xec
	// Line 660, Address: 0x147fe4, Func Offset: 0xf4
	// Line 663, Address: 0x147ff0, Func Offset: 0x100
	// Line 664, Address: 0x147ff8, Func Offset: 0x108
	// Line 665, Address: 0x148000, Func Offset: 0x110
	// Line 666, Address: 0x148008, Func Offset: 0x118
	// Line 667, Address: 0x148014, Func Offset: 0x124
	// Line 668, Address: 0x148018, Func Offset: 0x128
	// Line 670, Address: 0x148054, Func Offset: 0x164
	// Line 671, Address: 0x148058, Func Offset: 0x168
	// Func End, Address: 0x148068, Func Offset: 0x178
}

// 
// Start address: 0x148070
unsigned int InitEffectVertexSprite(float width, float height, unsigned short PlaneKind, EFCTVertexData** pVertex, float* rot, unsigned char* rgba)
{
	int i;
	// Line 676, Address: 0x148070, Func Offset: 0
	// Line 680, Address: 0x148094, Func Offset: 0x24
	// Line 681, Address: 0x1480a4, Func Offset: 0x34
	// Line 682, Address: 0x1480b4, Func Offset: 0x44
	// Line 684, Address: 0x1480bc, Func Offset: 0x4c
	// Line 685, Address: 0x1480d0, Func Offset: 0x60
	// Line 686, Address: 0x1480e0, Func Offset: 0x70
	// Line 689, Address: 0x1480ec, Func Offset: 0x7c
	// Line 690, Address: 0x1480fc, Func Offset: 0x8c
	// Line 691, Address: 0x148114, Func Offset: 0xa4
	// Line 692, Address: 0x14811c, Func Offset: 0xac
	// Line 693, Address: 0x14812c, Func Offset: 0xbc
	// Line 694, Address: 0x148144, Func Offset: 0xd4
	// Line 696, Address: 0x14814c, Func Offset: 0xdc
	// Line 699, Address: 0x148174, Func Offset: 0x104
	// Line 701, Address: 0x14818c, Func Offset: 0x11c
	// Line 702, Address: 0x148198, Func Offset: 0x128
	// Line 703, Address: 0x1481bc, Func Offset: 0x14c
	// Line 704, Address: 0x1481e0, Func Offset: 0x170
	// Line 705, Address: 0x148204, Func Offset: 0x194
	// Line 706, Address: 0x148228, Func Offset: 0x1b8
	// Line 707, Address: 0x148248, Func Offset: 0x1d8
	// Line 709, Address: 0x14825c, Func Offset: 0x1ec
	// Line 710, Address: 0x148260, Func Offset: 0x1f0
	// Func End, Address: 0x148274, Func Offset: 0x204
}

// 
// Start address: 0x148280
void SetEffectVertexSpriteXY(float width, float height, EFCTVertexData* VertexData)
{
	// Line 714, Address: 0x148280, Func Offset: 0
	// Line 715, Address: 0x148290, Func Offset: 0x10
	// Line 716, Address: 0x1482b0, Func Offset: 0x30
	// Line 717, Address: 0x1482d0, Func Offset: 0x50
	// Line 718, Address: 0x1482dc, Func Offset: 0x5c
	// Line 720, Address: 0x1482ec, Func Offset: 0x6c
	// Line 721, Address: 0x148304, Func Offset: 0x84
	// Line 722, Address: 0x148324, Func Offset: 0xa4
	// Line 723, Address: 0x148330, Func Offset: 0xb0
	// Line 725, Address: 0x148340, Func Offset: 0xc0
	// Line 726, Address: 0x148360, Func Offset: 0xe0
	// Line 727, Address: 0x148378, Func Offset: 0xf8
	// Line 728, Address: 0x148384, Func Offset: 0x104
	// Line 730, Address: 0x148394, Func Offset: 0x114
	// Line 731, Address: 0x1483ac, Func Offset: 0x12c
	// Line 732, Address: 0x1483c4, Func Offset: 0x144
	// Line 733, Address: 0x1483d0, Func Offset: 0x150
	// Line 735, Address: 0x1483e0, Func Offset: 0x160
	// Func End, Address: 0x1483ec, Func Offset: 0x16c
}

// 
// Start address: 0x1483f0
void SetEffectVertexSpriteXZ(float width, float height, EFCTVertexData* VertexData)
{
	// Line 739, Address: 0x1483f0, Func Offset: 0
	// Line 740, Address: 0x148400, Func Offset: 0x10
	// Line 741, Address: 0x148420, Func Offset: 0x30
	// Line 742, Address: 0x14842c, Func Offset: 0x3c
	// Line 743, Address: 0x14844c, Func Offset: 0x5c
	// Line 745, Address: 0x14845c, Func Offset: 0x6c
	// Line 746, Address: 0x148474, Func Offset: 0x84
	// Line 747, Address: 0x148480, Func Offset: 0x90
	// Line 748, Address: 0x1484a0, Func Offset: 0xb0
	// Line 750, Address: 0x1484b0, Func Offset: 0xc0
	// Line 751, Address: 0x1484d0, Func Offset: 0xe0
	// Line 752, Address: 0x1484dc, Func Offset: 0xec
	// Line 753, Address: 0x1484f4, Func Offset: 0x104
	// Line 755, Address: 0x148504, Func Offset: 0x114
	// Line 756, Address: 0x14851c, Func Offset: 0x12c
	// Line 757, Address: 0x148528, Func Offset: 0x138
	// Line 758, Address: 0x148540, Func Offset: 0x150
	// Line 760, Address: 0x148550, Func Offset: 0x160
	// Func End, Address: 0x14855c, Func Offset: 0x16c
}

// 
// Start address: 0x148560
void SpriteLocalRot(EFCTVertexData* pVertex, int num, float* rot)
{
	int i;
	float mtx[4][4];
	// Line 765, Address: 0x148560, Func Offset: 0
	// Line 770, Address: 0x148580, Func Offset: 0x20
	// Line 771, Address: 0x1485a8, Func Offset: 0x48
	// Line 775, Address: 0x1485e4, Func Offset: 0x84
	// Line 777, Address: 0x1485f0, Func Offset: 0x90
	// Line 778, Address: 0x14863c, Func Offset: 0xdc
	// Line 779, Address: 0x14864c, Func Offset: 0xec
	// Func End, Address: 0x148668, Func Offset: 0x108
}

// 
// Start address: 0x148670
int EFCTNextFrame(EFCTObject* pObj, int DoLoop)
{
	int nRet;
	// Line 783, Address: 0x148670, Func Offset: 0
	// Line 803, Address: 0x148684, Func Offset: 0x14
	// Line 804, Address: 0x148698, Func Offset: 0x28
	// Line 807, Address: 0x1486a8, Func Offset: 0x38
	// Line 808, Address: 0x1486ac, Func Offset: 0x3c
	// Func End, Address: 0x1486c0, Func Offset: 0x50
}

// 
// Start address: 0x1486c0
int EFCTAutoNextFrame(EFCTObject* pObj)
{
	EFCTAnimationData* pAnim;
	int nRet;
	// Line 812, Address: 0x1486c0, Func Offset: 0
	// Line 813, Address: 0x1486d4, Func Offset: 0x14
	// Line 814, Address: 0x1486d8, Func Offset: 0x18
	// Line 848, Address: 0x1486e0, Func Offset: 0x20
	// Line 850, Address: 0x1486f0, Func Offset: 0x30
	// Line 851, Address: 0x1486f8, Func Offset: 0x38
	// Line 852, Address: 0x148704, Func Offset: 0x44
	// Line 854, Address: 0x14870c, Func Offset: 0x4c
	// Line 855, Address: 0x148718, Func Offset: 0x58
	// Line 858, Address: 0x148728, Func Offset: 0x68
	// Line 859, Address: 0x14872c, Func Offset: 0x6c
	// Line 863, Address: 0x148734, Func Offset: 0x74
	// Line 865, Address: 0x148748, Func Offset: 0x88
	// Line 868, Address: 0x14875c, Func Offset: 0x9c
	// Line 869, Address: 0x148774, Func Offset: 0xb4
	// Line 870, Address: 0x148778, Func Offset: 0xb8
	// Line 873, Address: 0x148780, Func Offset: 0xc0
	// Line 876, Address: 0x14878c, Func Offset: 0xcc
	// Line 878, Address: 0x1487ac, Func Offset: 0xec
	// Line 879, Address: 0x1487bc, Func Offset: 0xfc
	// Line 880, Address: 0x1487c4, Func Offset: 0x104
	// Line 883, Address: 0x1487cc, Func Offset: 0x10c
	// Line 885, Address: 0x1487d4, Func Offset: 0x114
	// Line 889, Address: 0x1487dc, Func Offset: 0x11c
	// Line 890, Address: 0x1487f0, Func Offset: 0x130
	// Line 891, Address: 0x148814, Func Offset: 0x154
	// Line 892, Address: 0x148820, Func Offset: 0x160
	// Line 894, Address: 0x148828, Func Offset: 0x168
	// Line 896, Address: 0x14882c, Func Offset: 0x16c
	// Line 898, Address: 0x148834, Func Offset: 0x174
	// Line 899, Address: 0x148848, Func Offset: 0x188
	// Line 900, Address: 0x148854, Func Offset: 0x194
	// Line 902, Address: 0x14885c, Func Offset: 0x19c
	// Line 908, Address: 0x148884, Func Offset: 0x1c4
	// Line 913, Address: 0x148888, Func Offset: 0x1c8
	// Line 914, Address: 0x14888c, Func Offset: 0x1cc
	// Func End, Address: 0x1488a4, Func Offset: 0x1e4
}

// 
// Start address: 0x1488b0
void EFCTThreeDWork(EFCTObject* pObj)
{
	float vec[4];
	int i;
	float ws_mtx[4][4];
	float ls_mtx[4][4];
	float lw_mtx[4][4];
	// Line 962, Address: 0x1488b0, Func Offset: 0
	// Line 969, Address: 0x1488c4, Func Offset: 0x14
	// Line 974, Address: 0x1488ec, Func Offset: 0x3c
	// Line 975, Address: 0x148920, Func Offset: 0x70
	// Line 978, Address: 0x148954, Func Offset: 0xa4
	// Line 979, Address: 0x148968, Func Offset: 0xb8
	// Line 981, Address: 0x14897c, Func Offset: 0xcc
	// Line 985, Address: 0x148988, Func Offset: 0xd8
	// Line 986, Address: 0x1489f8, Func Offset: 0x148
	// Line 987, Address: 0x148a28, Func Offset: 0x178
	// Line 988, Address: 0x148a58, Func Offset: 0x1a8
	// Line 989, Address: 0x148a7c, Func Offset: 0x1cc
	// Line 990, Address: 0x148aa0, Func Offset: 0x1f0
	// Line 992, Address: 0x148abc, Func Offset: 0x20c
	// Func End, Address: 0x148ad4, Func Offset: 0x224
}

// 
// Start address: 0x148ae0
void EFCTTinyThreeDWork(EFCTObject* pObj)
{
	float vec[4];
	int i;
	float ws_mtx[4][4];
	float wv_mtx[4][4];
	float ls_mtx[4][4];
	float lw_mtx[4][4];
	// Line 996, Address: 0x148ae0, Func Offset: 0
	// Line 1039, Address: 0x148af4, Func Offset: 0x14
	// Line 1040, Address: 0x148b08, Func Offset: 0x28
	// Line 1041, Address: 0x148b1c, Func Offset: 0x3c
	// Line 1042, Address: 0x148b2c, Func Offset: 0x4c
	// Line 1044, Address: 0x148b3c, Func Offset: 0x5c
	// Line 1045, Address: 0x148b70, Func Offset: 0x90
	// Line 1047, Address: 0x148ba4, Func Offset: 0xc4
	// Line 1048, Address: 0x148bb8, Func Offset: 0xd8
	// Line 1051, Address: 0x148bcc, Func Offset: 0xec
	// Line 1055, Address: 0x148bd8, Func Offset: 0xf8
	// Line 1056, Address: 0x148c48, Func Offset: 0x168
	// Line 1057, Address: 0x148c78, Func Offset: 0x198
	// Line 1058, Address: 0x148ca8, Func Offset: 0x1c8
	// Line 1059, Address: 0x148ccc, Func Offset: 0x1ec
	// Line 1060, Address: 0x148cf0, Func Offset: 0x210
	// Line 1062, Address: 0x148d0c, Func Offset: 0x22c
	// Func End, Address: 0x148d24, Func Offset: 0x244
}

// 
// Start address: 0x148d30
void DrawPrimitive(EFCTObject* pObj)
{
	_anon1* vif1packet;
	// Line 1066, Address: 0x148d30, Func Offset: 0
	// Line 1079, Address: 0x148d40, Func Offset: 0x10
	// Line 1083, Address: 0x148d4c, Func Offset: 0x1c
	// Line 1086, Address: 0x148d60, Func Offset: 0x30
	// Line 1088, Address: 0x148d70, Func Offset: 0x40
	// Line 1108, Address: 0x148d78, Func Offset: 0x48
	// Func End, Address: 0x148d8c, Func Offset: 0x5c
}

// 
// Start address: 0x148d90
void EFCTMakePacket(EFCTObject* pObj, _anon1* pck)
{
	unsigned long giftag0[2];
	unsigned long giftag1[2];
	unsigned long giftag0[2];
	// Line 1147, Address: 0x148d90, Func Offset: 0
	// Line 1149, Address: 0x148da0, Func Offset: 0x10
	// Line 1153, Address: 0x148db4, Func Offset: 0x24
	// Line 1163, Address: 0x148dd0, Func Offset: 0x40
	// Line 1165, Address: 0x148de4, Func Offset: 0x54
	// Line 1169, Address: 0x148df4, Func Offset: 0x64
	// Line 1172, Address: 0x148e00, Func Offset: 0x70
	// Line 1173, Address: 0x148e14, Func Offset: 0x84
	// Line 1174, Address: 0x148e34, Func Offset: 0xa4
	// Line 1179, Address: 0x148e40, Func Offset: 0xb0
	// Line 1181, Address: 0x148e54, Func Offset: 0xc4
	// Line 1182, Address: 0x148e68, Func Offset: 0xd8
	// Line 1183, Address: 0x148e80, Func Offset: 0xf0
	// Line 1195, Address: 0x148e8c, Func Offset: 0xfc
	// Func End, Address: 0x148e9c, Func Offset: 0x10c
}

// 
// Start address: 0x148ea0
void SetVertexPkData(_anon1* pck, EFCTVertexData* pVertex, unsigned int nVertexNum)
{
	float f;
	float t;
	float s;
	int i;
	// Line 1200, Address: 0x148ea0, Func Offset: 0
	// Line 1204, Address: 0x148ec4, Func Offset: 0x24
	// Line 1205, Address: 0x148ed0, Func Offset: 0x30
	// Line 1206, Address: 0x148ef8, Func Offset: 0x58
	// Line 1207, Address: 0x148f28, Func Offset: 0x88
	// Line 1208, Address: 0x148f58, Func Offset: 0xb8
	// Line 1209, Address: 0x148f8c, Func Offset: 0xec
	// Line 1213, Address: 0x149038, Func Offset: 0x198
	// Line 1214, Address: 0x1490dc, Func Offset: 0x23c
	// Line 1220, Address: 0x14917c, Func Offset: 0x2dc
	// Line 1224, Address: 0x149180, Func Offset: 0x2e0
	// Line 1225, Address: 0x149194, Func Offset: 0x2f4
	// Func End, Address: 0x1491b4, Func Offset: 0x314
}

// 
// Start address: 0x1491c0
void EFCTGetGiftag(int Kind, unsigned long* giftag)
{
	// Line 1230, Address: 0x1491c0, Func Offset: 0
	// Line 1231, Address: 0x1491d0, Func Offset: 0x10
	// Line 1240, Address: 0x1491fc, Func Offset: 0x3c
	// Line 1241, Address: 0x149210, Func Offset: 0x50
	// Line 1242, Address: 0x14922c, Func Offset: 0x6c
	// Line 1244, Address: 0x149234, Func Offset: 0x74
	// Line 1247, Address: 0x14925c, Func Offset: 0x9c
	// Func End, Address: 0x14926c, Func Offset: 0xac
}

// 
// Start address: 0x149270
void EFCTSetAlphaEnvironment(_anon1* pck, short kind)
{
	<unknown fundamental type (0xa510)>* tex0;
	unsigned long giftag0[2];
	// Line 1251, Address: 0x149270, Func Offset: 0
	// Line 1253, Address: 0x149284, Func Offset: 0x14
	// Line 1269, Address: 0x149298, Func Offset: 0x28
	// Line 1271, Address: 0x1492dc, Func Offset: 0x6c
	// Line 1277, Address: 0x1492f0, Func Offset: 0x80
	// Line 1278, Address: 0x149304, Func Offset: 0x94
	// Line 1284, Address: 0x14931c, Func Offset: 0xac
	// Line 1287, Address: 0x149370, Func Offset: 0x100
	// Line 1289, Address: 0x14938c, Func Offset: 0x11c
	// Line 1292, Address: 0x149394, Func Offset: 0x124
	// Line 1293, Address: 0x1493a8, Func Offset: 0x138
	// Line 1296, Address: 0x1493b0, Func Offset: 0x140
	// Line 1297, Address: 0x1493c4, Func Offset: 0x154
	// Line 1299, Address: 0x1493cc, Func Offset: 0x15c
	// Line 1305, Address: 0x1493f4, Func Offset: 0x184
	// Line 1308, Address: 0x149418, Func Offset: 0x1a8
	// Line 1317, Address: 0x149424, Func Offset: 0x1b4
	// Func End, Address: 0x149438, Func Offset: 0x1c8
}

// 
// Start address: 0x149440
void EFCTDeleteAllTask()
{
	// Line 1321, Address: 0x149440, Func Offset: 0
	// Line 1323, Address: 0x149448, Func Offset: 0x8
	// Line 1324, Address: 0x149454, Func Offset: 0x14
	// Line 1325, Address: 0x149460, Func Offset: 0x20
	// Line 1326, Address: 0x14946c, Func Offset: 0x2c
	// Line 1327, Address: 0x149478, Func Offset: 0x38
	// Line 1328, Address: 0x149484, Func Offset: 0x44
	// Func End, Address: 0x149494, Func Offset: 0x54
}

// 
// Start address: 0x1494a0
void EFCTDeleteTask(short Kind)
{
	_shTskTASK* pTask;
	// Line 1333, Address: 0x1494a0, Func Offset: 0
	// Line 1334, Address: 0x1494b0, Func Offset: 0x10
	// Line 1335, Address: 0x1494bc, Func Offset: 0x1c
	// Line 1337, Address: 0x1494dc, Func Offset: 0x3c
	// Line 1338, Address: 0x1494e4, Func Offset: 0x44
	// Line 1339, Address: 0x1494f0, Func Offset: 0x50
	// Line 1340, Address: 0x149510, Func Offset: 0x70
	// Line 1341, Address: 0x149518, Func Offset: 0x78
	// Func End, Address: 0x14952c, Func Offset: 0x8c
}

// 
// Start address: 0x149530
int EFCTDeleteOldBloodDropTask()
{
	unsigned short LayerNum;
	int ret;
	int i;
	// Line 1345, Address: 0x149530, Func Offset: 0
	// Line 1347, Address: 0x149544, Func Offset: 0x14
	// Line 1350, Address: 0x149548, Func Offset: 0x18
	// Line 1352, Address: 0x149558, Func Offset: 0x28
	// Line 1353, Address: 0x149564, Func Offset: 0x34
	// Line 1354, Address: 0x149574, Func Offset: 0x44
	// Line 1356, Address: 0x149588, Func Offset: 0x58
	// Line 1357, Address: 0x14958c, Func Offset: 0x5c
	// Func End, Address: 0x1495a8, Func Offset: 0x78
}

// 
// Start address: 0x1495b0
int EFCTDeleteOldTask(short kind)
{
	_shTskTASK* pTask;
	int ret;
	// Line 1361, Address: 0x1495b0, Func Offset: 0
	// Line 1365, Address: 0x1495c4, Func Offset: 0x14
	// Line 1366, Address: 0x1495d0, Func Offset: 0x20
	// Line 1368, Address: 0x1495f0, Func Offset: 0x40
	// Line 1370, Address: 0x1495f8, Func Offset: 0x48
	// Line 1371, Address: 0x149604, Func Offset: 0x54
	// Line 1372, Address: 0x149608, Func Offset: 0x58
	// Line 1375, Address: 0x149610, Func Offset: 0x60
	// Line 1378, Address: 0x149614, Func Offset: 0x64
	// Line 1379, Address: 0x149618, Func Offset: 0x68
	// Func End, Address: 0x149630, Func Offset: 0x80
}

// 
// Start address: 0x149630
void EFCTDoCtrlDummy(void* ptr)
{
	// Line 1398, Address: 0x149630, Func Offset: 0
	// Line 1400, Address: 0x14963c, Func Offset: 0xc
	// Line 1401, Address: 0x149648, Func Offset: 0x18
	// Func End, Address: 0x149658, Func Offset: 0x28
}

// 
// Start address: 0x149660
float GetSpriteRotAngle(float around_rot, unsigned int plane_num, unsigned int index, int rand_rot_range)
{
	float BaseAng;
	// Line 1415, Address: 0x149660, Func Offset: 0
	// Line 1417, Address: 0x149678, Func Offset: 0x18
	// Line 1420, Address: 0x14970c, Func Offset: 0xac
	// Line 1421, Address: 0x149774, Func Offset: 0x114
	// Func End, Address: 0x149784, Func Offset: 0x124
}

// 
// Start address: 0x149790
void ClipEffectObject(EFCTObject* pObj)
{
	int valid;
	int i;
	// Line 1426, Address: 0x149790, Func Offset: 0
	// Line 1428, Address: 0x1497a4, Func Offset: 0x14
	// Line 1431, Address: 0x1497a8, Func Offset: 0x18
	// Line 1433, Address: 0x1497b4, Func Offset: 0x24
	// Line 1435, Address: 0x1497e0, Func Offset: 0x50
	// Line 1437, Address: 0x1497e4, Func Offset: 0x54
	// Line 1439, Address: 0x1497ec, Func Offset: 0x5c
	// Line 1448, Address: 0x149808, Func Offset: 0x78
	// Line 1449, Address: 0x149814, Func Offset: 0x84
	// Line 1450, Address: 0x149830, Func Offset: 0xa0
	// Line 1452, Address: 0x149850, Func Offset: 0xc0
	// Func End, Address: 0x149868, Func Offset: 0xd8
}

// 
// Start address: 0x149870
int EFCTClipVertex(int* vec)
{
	int vw;
	int vy;
	int vx;
	int ret;
	// Line 1459, Address: 0x149870, Func Offset: 0
	// Line 1460, Address: 0x149888, Func Offset: 0x18
	// Line 1461, Address: 0x14988c, Func Offset: 0x1c
	// Line 1462, Address: 0x149898, Func Offset: 0x28
	// Line 1468, Address: 0x1498a4, Func Offset: 0x34
	// Line 1472, Address: 0x1498ac, Func Offset: 0x3c
	// Line 1474, Address: 0x149a04, Func Offset: 0x194
	// Line 1475, Address: 0x149a08, Func Offset: 0x198
	// Line 1477, Address: 0x149a0c, Func Offset: 0x19c
	// Func End, Address: 0x149a28, Func Offset: 0x1b8
}

// 
// Start address: 0x149a30
void EFCTResetAlpha(int alpha, EFCTObject* pObj)
{
	int i;
	// Line 1481, Address: 0x149a30, Func Offset: 0
	// Line 1484, Address: 0x149a40, Func Offset: 0x10
	// Line 1485, Address: 0x149a4c, Func Offset: 0x1c
	// Line 1486, Address: 0x149a70, Func Offset: 0x40
	// Line 1487, Address: 0x149a90, Func Offset: 0x60
	// Func End, Address: 0x149aa0, Func Offset: 0x70
}

// 
// Start address: 0x149aa0
void EFCTResetRGBA(int* rgba, EFCTVertexData* pVertex)
{
	int i;
	// Line 1491, Address: 0x149aa0, Func Offset: 0
	// Line 1494, Address: 0x149ab0, Func Offset: 0x10
	// Line 1495, Address: 0x149abc, Func Offset: 0x1c
	// Line 1496, Address: 0x149ae0, Func Offset: 0x40
	// Line 1497, Address: 0x149b04, Func Offset: 0x64
	// Line 1498, Address: 0x149b28, Func Offset: 0x88
	// Line 1499, Address: 0x149b4c, Func Offset: 0xac
	// Line 1500, Address: 0x149b5c, Func Offset: 0xbc
	// Func End, Address: 0x149b6c, Func Offset: 0xcc
}

// 
// Start address: 0x149b70
void EFCTSetPassingTimePerFrame(float time)
{
	// Line 1504, Address: 0x149b70, Func Offset: 0
	// Line 1505, Address: 0x149b78, Func Offset: 0x8
	// Line 1506, Address: 0x149b84, Func Offset: 0x14
	// Func End, Address: 0x149b90, Func Offset: 0x20
}

// 
// Start address: 0x149b90
float EFCTGetPassingTimePerFrame()
{
	// Line 1511, Address: 0x149b90, Func Offset: 0
	// Line 1512, Address: 0x149b98, Func Offset: 0x8
	// Func End, Address: 0x149ba0, Func Offset: 0x10
}

