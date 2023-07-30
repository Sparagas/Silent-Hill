typedef struct EFCTVertexData;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct EFCTObject;
typedef struct EFCTTask;
typedef struct shAttackInfo;
typedef struct EFCTAnimationData;
typedef union _anon0;
typedef struct _shTskTASK;
typedef struct sh2gfw_Env_ctl;
typedef struct _anon1;
typedef struct EFCTTexEnvInfo;
typedef struct _anon2;
typedef struct _VbWVSMATRIX;
typedef struct _VbSCREENINFO;
typedef struct Item;
typedef struct shBattleFight;
typedef struct _shTskEXECUTE;
typedef struct shBattleShot;
typedef union Q_WORDDATA;
typedef struct sh2gfw_SPOTL_MATRIX;

typedef void(*type_10)(void*);
typedef void(*type_31)(void*);
typedef void(*type_32)(void*);

typedef unsigned short type_0[8];
typedef float type_1[4];
typedef float type_2[4][2];
typedef unsigned char type_3[16];
typedef int type_4[4];
typedef short type_5[8];
typedef char type_6[16];
typedef unsigned long type_7[2];
typedef _shTskTASK* type_8[8];
typedef int type_9[4];
typedef float type_11[4];
typedef unsigned char type_12[4];
typedef float type_13[4];
typedef float type_14[4][4];
typedef shAttackInfo type_15[66];
typedef unsigned char type_16[131072];
typedef unsigned long type_17[2];
typedef <unknown fundamental type (0xa510)> type_18[4096];
typedef <unknown fundamental type (0xa510)> type_19[32768];
typedef float type_20[4];
typedef EFCTObject type_21[32];
typedef unsigned long type_22[2];
typedef float type_23[4];
typedef float type_24[4][4];
typedef EFCTTexEnvInfo type_25[11];
typedef unsigned short type_26[4];
typedef char type_27[488];
typedef unsigned long type_28[2];
typedef unsigned int type_29[2];
typedef unsigned short type_30[11];
typedef unsigned short type_33[3];
typedef void(*type_34)(void*)[9];
typedef unsigned long type_35[2];
typedef unsigned char type_36[492];
typedef unsigned int type_37[4];

struct EFCTVertexData
{
	float LocalPos[4];
	float WorldPos[4];
	int ScreenPos[4];
	unsigned char rgba[4];
	float stq[4];
	short is_valid;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct EFCTTask
{
	_shTskEXECUTE exe;
	EFCTObject* pObj;
	char freemem[488];
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

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _shTskTASK
{
	_shTskEXECUTE exe;
	unsigned char freemem[492];
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
	float VertexAmbient[4];
	float BaseAmbient[4];
	float BaseVertexColor[4];
	float spot0_Wpos[4];
	float spot0_Wdir[4];
	sh2gfw_SPOTL_MATRIX SpotL0;
	float spot1_Wpos[4];
	float spot1_Wdir[4];
	sh2gfw_SPOTL_MATRIX SpotL1;
	float CharacterLightFactor[4];
	float CharacterLightFactor_Other[4];
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
	Q_WORDDATA MoveFogColor;
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

struct EFCTTexEnvInfo
{
	unsigned short clut_id;
	unsigned short tfx;
	unsigned short transparency;
};

struct _anon2
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

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
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

struct shBattleFight
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

shAttackInfo sh2_attack_list[66];
void(*EFCTControlFunc)(void*)[9];
<unknown fundamental type (0xa510)> efctPacket[4096];
<unknown fundamental type (0xa510)> efctheap[32768];
unsigned char EFCTTaskBuf[131072];
EFCTObject EFCTLocalDataBuffer[32];
Item item;
EFCTTexEnvInfo TexImage[11];
_anon2 cam0;
_VbWVSMATRIX VbWvsMatrix;
sh2gfw_Env_ctl Env_ctl;
_shTskTASK* shTskTaskListTop[8];
_VbSCREENINFO VbScreenInfo;
float passing_time;

void EFCTInit();
void EFCTInitEffectTask();
void EFCTDoTask();
void EFCTKickPacket();
void EFCTSetGunFire(float* Pos, float* vec);
void EFCTSetGunFireEddie(float* Pos, float* vec);
void SetGunFire(float* Pos, float* vec, int wep_kind, unsigned char light);
void EFCTSetGunSmoke();
void SetGunSmoke(float* Pos, int wep_kind, unsigned char light);
void EFCTSetDramaDemoAngelaPapa();
void EFCTSetBrokenGlass(float* parent_pos, float* parent_direction, float chara_pos[4]);
void EFCTSetSmoke(float* pos, unsigned char kind);
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
void EFCTDeleteTask(short Kind);
int EFCTDeleteOldBloodDropTask();
int EFCTDeleteOldTask(short kind);
void EFCTDoCtrlDummy(void* ptr);
float GetSpriteRotAngle(float around_rot, unsigned int plane_num, unsigned int index, int rand_rot_range);
void ClipEffectObject(EFCTObject* pObj);
void ClipEffectObject2(EFCTObject* pObj);
int EFCTClipVertex(int* vec);
void EFCTResetRGBA(int* rgba, EFCTVertexData* pVertex);
void EFCTSetPassingTimePerFrame(float time);
float EFCTGetPassingTimePerFrame();
void CalibrationZValue(unsigned int vertex_num, int z, EFCTVertexData* pVertex);

// 
// Start address: 0x13be90
void EFCTInit()
{
	// Line 142, Address: 0x13be90, Func Offset: 0
	// Line 144, Address: 0x13be98, Func Offset: 0x8
	// Line 151, Address: 0x13beac, Func Offset: 0x1c
	// Line 152, Address: 0x13bebc, Func Offset: 0x2c
	// Line 156, Address: 0x13bed0, Func Offset: 0x40
	// Line 157, Address: 0x13bee0, Func Offset: 0x50
	// Line 163, Address: 0x13bef0, Func Offset: 0x60
	// Line 164, Address: 0x13bef8, Func Offset: 0x68
	// Func End, Address: 0x13bf08, Func Offset: 0x78
}

// 
// Start address: 0x13bf10
void EFCTInitEffectTask()
{
	int i;
	// Line 216, Address: 0x13bf10, Func Offset: 0
	// Line 220, Address: 0x13bf24, Func Offset: 0x14
	// Line 222, Address: 0x13bf30, Func Offset: 0x20
	// Line 225, Address: 0x13bf4c, Func Offset: 0x3c
	// Line 226, Address: 0x13bf64, Func Offset: 0x54
	// Line 227, Address: 0x13bf6c, Func Offset: 0x5c
	// Line 229, Address: 0x13bf70, Func Offset: 0x60
	// Line 230, Address: 0x13bf88, Func Offset: 0x78
	// Line 231, Address: 0x13bf90, Func Offset: 0x80
	// Line 232, Address: 0x13bf94, Func Offset: 0x84
	// Line 233, Address: 0x13bf98, Func Offset: 0x88
	// Line 236, Address: 0x13bfac, Func Offset: 0x9c
	// Line 238, Address: 0x13bfb8, Func Offset: 0xa8
	// Func End, Address: 0x13bfd4, Func Offset: 0xc4
}

// 
// Start address: 0x13bfe0
void EFCTDoTask()
{
	// Line 243, Address: 0x13bfe0, Func Offset: 0
	// Line 255, Address: 0x13bfe8, Func Offset: 0x8
	// Line 261, Address: 0x13bff0, Func Offset: 0x10
	// Line 264, Address: 0x13c004, Func Offset: 0x24
	// Line 265, Address: 0x13c010, Func Offset: 0x30
	// Func End, Address: 0x13c020, Func Offset: 0x40
}

// 
// Start address: 0x13c020
void EFCTKickPacket()
{
	void* addr;
	// Line 270, Address: 0x13c020, Func Offset: 0
	// Line 283, Address: 0x13c028, Func Offset: 0x8
	// Line 284, Address: 0x13c030, Func Offset: 0x10
	// Line 285, Address: 0x13c03c, Func Offset: 0x1c
	// Func End, Address: 0x13c04c, Func Offset: 0x2c
}

// 
// Start address: 0x13c050
void EFCTSetGunFire(float* Pos, float* vec)
{
	unsigned char light;
	int weapon_kind;
	// Line 436, Address: 0x13c050, Func Offset: 0
	// Line 449, Address: 0x13c070, Func Offset: 0x20
	// Line 452, Address: 0x13c07c, Func Offset: 0x2c
	// Line 455, Address: 0x13c084, Func Offset: 0x34
	// Line 456, Address: 0x13c09c, Func Offset: 0x4c
	// Line 457, Address: 0x13c0b0, Func Offset: 0x60
	// Func End, Address: 0x13c0d0, Func Offset: 0x80
}

// 
// Start address: 0x13c0d0
void EFCTSetGunFireEddie(float* Pos, float* vec)
{
	// Line 461, Address: 0x13c0d0, Func Offset: 0
	// Line 473, Address: 0x13c0e0, Func Offset: 0x10
	// Line 474, Address: 0x13c0f0, Func Offset: 0x20
	// Line 475, Address: 0x13c104, Func Offset: 0x34
	// Func End, Address: 0x13c118, Func Offset: 0x48
}

// 
// Start address: 0x13c120
void SetGunFire(float* Pos, float* vec, int wep_kind, unsigned char light)
{
	int i;
	unsigned short LayerNum;
	EFCTTask* pTask;
	// Line 480, Address: 0x13c120, Func Offset: 0
	// Line 486, Address: 0x13c154, Func Offset: 0x34
	// Line 489, Address: 0x13c164, Func Offset: 0x44
	// Line 490, Address: 0x13c170, Func Offset: 0x50
	// Line 491, Address: 0x13c180, Func Offset: 0x60
	// Line 501, Address: 0x13c188, Func Offset: 0x68
	// Line 503, Address: 0x13c198, Func Offset: 0x78
	// Line 514, Address: 0x13c1a0, Func Offset: 0x80
	// Line 516, Address: 0x13c1c8, Func Offset: 0xa8
	// Line 517, Address: 0x13c1d4, Func Offset: 0xb4
	// Line 520, Address: 0x13c1dc, Func Offset: 0xbc
	// Line 521, Address: 0x13c1e4, Func Offset: 0xc4
	// Line 524, Address: 0x13c200, Func Offset: 0xe0
	// Line 526, Address: 0x13c20c, Func Offset: 0xec
	// Func End, Address: 0x13c238, Func Offset: 0x118
}

// 
// Start address: 0x13c240
void EFCTSetGunSmoke()
{
	// Line 532, Address: 0x13c240, Func Offset: 0
	// Func End, Address: 0x13c248, Func Offset: 0x8
}

// 
// Start address: 0x13c250
void SetGunSmoke(float* Pos, int wep_kind, unsigned char light)
{
	unsigned short LayerNum;
	int i;
	EFCTTask* pTask;
	// Line 536, Address: 0x13c250, Func Offset: 0
	// Line 541, Address: 0x13c27c, Func Offset: 0x2c
	// Line 543, Address: 0x13c28c, Func Offset: 0x3c
	// Line 544, Address: 0x13c298, Func Offset: 0x48
	// Line 545, Address: 0x13c2a8, Func Offset: 0x58
	// Line 555, Address: 0x13c2b0, Func Offset: 0x60
	// Line 557, Address: 0x13c2c0, Func Offset: 0x70
	// Line 567, Address: 0x13c2c8, Func Offset: 0x78
	// Line 569, Address: 0x13c2ec, Func Offset: 0x9c
	// Line 570, Address: 0x13c2f8, Func Offset: 0xa8
	// Line 573, Address: 0x13c300, Func Offset: 0xb0
	// Line 574, Address: 0x13c308, Func Offset: 0xb8
	// Line 577, Address: 0x13c320, Func Offset: 0xd0
	// Line 579, Address: 0x13c32c, Func Offset: 0xdc
	// Func End, Address: 0x13c354, Func Offset: 0x104
}

// 
// Start address: 0x13c360
void EFCTSetDramaDemoAngelaPapa()
{
	float chara_pos[4][2];
	float tv_dir[4];
	float tv_pos[4];
	// Line 583, Address: 0x13c360, Func Offset: 0
	// Line 584, Address: 0x13c368, Func Offset: 0x8
	// Line 585, Address: 0x13c37c, Func Offset: 0x1c
	// Line 586, Address: 0x13c390, Func Offset: 0x30
	// Line 597, Address: 0x13c3ac, Func Offset: 0x4c
	// Line 598, Address: 0x13c3b4, Func Offset: 0x54
	// Line 599, Address: 0x13c3cc, Func Offset: 0x6c
	// Line 600, Address: 0x13c3dc, Func Offset: 0x7c
	// Func End, Address: 0x13c3ec, Func Offset: 0x8c
}

// 
// Start address: 0x13c3f0
void EFCTSetBrokenGlass(float* parent_pos, float* parent_direction, float chara_pos[4])
{
	unsigned short LayerNum;
	int i;
	EFCTTask* pTask;
	// Line 604, Address: 0x13c3f0, Func Offset: 0
	// Line 609, Address: 0x13c41c, Func Offset: 0x2c
	// Line 611, Address: 0x13c42c, Func Offset: 0x3c
	// Line 612, Address: 0x13c438, Func Offset: 0x48
	// Line 613, Address: 0x13c448, Func Offset: 0x58
	// Line 617, Address: 0x13c450, Func Offset: 0x60
	// Line 619, Address: 0x13c474, Func Offset: 0x84
	// Line 620, Address: 0x13c480, Func Offset: 0x90
	// Line 623, Address: 0x13c488, Func Offset: 0x98
	// Line 624, Address: 0x13c490, Func Offset: 0xa0
	// Line 627, Address: 0x13c4a8, Func Offset: 0xb8
	// Line 629, Address: 0x13c4b4, Func Offset: 0xc4
	// Func End, Address: 0x13c4dc, Func Offset: 0xec
}

// 
// Start address: 0x13c4e0
void EFCTSetSmoke(float* pos, unsigned char kind)
{
	unsigned short LayerNum;
	int i;
	EFCTTask* pTask;
	// Line 917, Address: 0x13c4e0, Func Offset: 0
	// Line 922, Address: 0x13c500, Func Offset: 0x20
	// Line 923, Address: 0x13c50c, Func Offset: 0x2c
	// Line 924, Address: 0x13c51c, Func Offset: 0x3c
	// Line 929, Address: 0x13c524, Func Offset: 0x44
	// Line 931, Address: 0x13c544, Func Offset: 0x64
	// Line 932, Address: 0x13c550, Func Offset: 0x70
	// Line 935, Address: 0x13c558, Func Offset: 0x78
	// Line 936, Address: 0x13c564, Func Offset: 0x84
	// Line 939, Address: 0x13c570, Func Offset: 0x90
	// Line 941, Address: 0x13c57c, Func Offset: 0x9c
	// Func End, Address: 0x13c59c, Func Offset: 0xbc
}

// 
// Start address: 0x13c5a0
unsigned short GetEffectLayerNum(short EffectKind)
{
	short Ret;
	// Line 952, Address: 0x13c5a0, Func Offset: 0
	// Line 953, Address: 0x13c5a8, Func Offset: 0x8
	// Line 955, Address: 0x13c5ac, Func Offset: 0xc
	// Line 961, Address: 0x13c5dc, Func Offset: 0x3c
	// Line 962, Address: 0x13c5ec, Func Offset: 0x4c
	// Line 964, Address: 0x13c5f4, Func Offset: 0x54
	// Line 965, Address: 0x13c604, Func Offset: 0x64
	// Line 967, Address: 0x13c60c, Func Offset: 0x6c
	// Line 971, Address: 0x13c61c, Func Offset: 0x7c
	// Line 972, Address: 0x13c620, Func Offset: 0x80
	// Func End, Address: 0x13c630, Func Offset: 0x90
}

// 
// Start address: 0x13c630
void InitEffectTexEnv(int EffectKind)
{
	// Line 976, Address: 0x13c630, Func Offset: 0
	// Line 978, Address: 0x13c638, Func Offset: 0x8
	// Line 982, Address: 0x13c660, Func Offset: 0x30
	// Line 983, Address: 0x13c680, Func Offset: 0x50
	// Line 985, Address: 0x13c688, Func Offset: 0x58
	// Line 986, Address: 0x13c6a8, Func Offset: 0x78
	// Line 988, Address: 0x13c6b0, Func Offset: 0x80
	// Line 989, Address: 0x13c6d0, Func Offset: 0xa0
	// Line 991, Address: 0x13c6d8, Func Offset: 0xa8
	// Line 992, Address: 0x13c6f8, Func Offset: 0xc8
	// Line 994, Address: 0x13c700, Func Offset: 0xd0
	// Line 995, Address: 0x13c720, Func Offset: 0xf0
	// Line 997, Address: 0x13c728, Func Offset: 0xf8
	// Line 998, Address: 0x13c748, Func Offset: 0x118
	// Line 1000, Address: 0x13c750, Func Offset: 0x120
	// Line 1004, Address: 0x13c774, Func Offset: 0x144
	// Func End, Address: 0x13c784, Func Offset: 0x154
}

// 
// Start address: 0x13c790
EFCTTask* EFCTEntryEffectTask(short Kind)
{
	int i;
	_shTskTASK* pTask;
	EFCTObject* pObject;
	// Line 1008, Address: 0x13c790, Func Offset: 0
	// Line 1011, Address: 0x13c7a8, Func Offset: 0x18
	// Line 1014, Address: 0x13c7ac, Func Offset: 0x1c
	// Line 1015, Address: 0x13c7b4, Func Offset: 0x24
	// Line 1016, Address: 0x13c7bc, Func Offset: 0x2c
	// Line 1017, Address: 0x13c7c8, Func Offset: 0x38
	// Line 1019, Address: 0x13c7d4, Func Offset: 0x44
	// Line 1020, Address: 0x13c7d8, Func Offset: 0x48
	// Line 1021, Address: 0x13c7dc, Func Offset: 0x4c
	// Line 1024, Address: 0x13c7f0, Func Offset: 0x60
	// Line 1025, Address: 0x13c820, Func Offset: 0x90
	// Line 1028, Address: 0x13c82c, Func Offset: 0x9c
	// Line 1029, Address: 0x13c830, Func Offset: 0xa0
	// Line 1031, Address: 0x13c838, Func Offset: 0xa8
	// Line 1033, Address: 0x13c83c, Func Offset: 0xac
	// Line 1036, Address: 0x13c840, Func Offset: 0xb0
	// Func End, Address: 0x13c85c, Func Offset: 0xcc
}

// 
// Start address: 0x13c860
void EFCTCutEffectTask(EFCTTask* ptr)
{
	// Line 1040, Address: 0x13c860, Func Offset: 0
	// Line 1041, Address: 0x13c870, Func Offset: 0x10
	// Line 1042, Address: 0x13c888, Func Offset: 0x28
	// Line 1044, Address: 0x13c88c, Func Offset: 0x2c
	// Line 1045, Address: 0x13c89c, Func Offset: 0x3c
	// Line 1046, Address: 0x13c8a4, Func Offset: 0x44
	// Line 1048, Address: 0x13c8ac, Func Offset: 0x4c
	// Line 1049, Address: 0x13c8bc, Func Offset: 0x5c
	// Line 1050, Address: 0x13c8c4, Func Offset: 0x64
	// Line 1053, Address: 0x13c8cc, Func Offset: 0x6c
	// Line 1056, Address: 0x13c8d8, Func Offset: 0x78
	// Func End, Address: 0x13c8ec, Func Offset: 0x8c
}

// 
// Start address: 0x13c8f0
int InitEffectAnimData(unsigned short TotalFrame, float DrawFrameWait, short StartFrame, EFCTAnimationData** pAnim)
{
	EFCTAnimationData AnimData;
	// Line 1060, Address: 0x13c8f0, Func Offset: 0
	// Line 1064, Address: 0x13c918, Func Offset: 0x28
	// Line 1065, Address: 0x13c924, Func Offset: 0x34
	// Line 1066, Address: 0x13c92c, Func Offset: 0x3c
	// Line 1068, Address: 0x13c930, Func Offset: 0x40
	// Line 1069, Address: 0x13c940, Func Offset: 0x50
	// Line 1070, Address: 0x13c94c, Func Offset: 0x5c
	// Line 1073, Address: 0x13c958, Func Offset: 0x68
	// Line 1075, Address: 0x13c994, Func Offset: 0xa4
	// Line 1076, Address: 0x13c998, Func Offset: 0xa8
	// Line 1078, Address: 0x13c9a0, Func Offset: 0xb0
	// Line 1079, Address: 0x13c9a8, Func Offset: 0xb8
	// Line 1080, Address: 0x13c9b0, Func Offset: 0xc0
	// Line 1082, Address: 0x13c9b8, Func Offset: 0xc8
	// Line 1085, Address: 0x13c9c0, Func Offset: 0xd0
	// Line 1086, Address: 0x13c9c4, Func Offset: 0xd4
	// Line 1087, Address: 0x13c9c8, Func Offset: 0xd8
	// Line 1088, Address: 0x13c9d0, Func Offset: 0xe0
	// Line 1089, Address: 0x13c9d4, Func Offset: 0xe4
	// Line 1090, Address: 0x13c9d8, Func Offset: 0xe8
	// Line 1092, Address: 0x13ca0c, Func Offset: 0x11c
	// Line 1093, Address: 0x13ca10, Func Offset: 0x120
	// Func End, Address: 0x13ca30, Func Offset: 0x140
}

// 
// Start address: 0x13ca30
unsigned int InitEffectVertexSprite(float width, float height, unsigned short PlaneKind, EFCTVertexData** pVertex, float* rot, unsigned char* rgba)
{
	int i;
	// Line 1098, Address: 0x13ca30, Func Offset: 0
	// Line 1102, Address: 0x13ca68, Func Offset: 0x38
	// Line 1103, Address: 0x13ca74, Func Offset: 0x44
	// Line 1104, Address: 0x13ca7c, Func Offset: 0x4c
	// Line 1106, Address: 0x13ca80, Func Offset: 0x50
	// Line 1107, Address: 0x13ca90, Func Offset: 0x60
	// Line 1108, Address: 0x13ca9c, Func Offset: 0x6c
	// Line 1111, Address: 0x13caa8, Func Offset: 0x78
	// Line 1112, Address: 0x13cab4, Func Offset: 0x84
	// Line 1113, Address: 0x13cac4, Func Offset: 0x94
	// Line 1114, Address: 0x13cacc, Func Offset: 0x9c
	// Line 1115, Address: 0x13cad4, Func Offset: 0xa4
	// Line 1116, Address: 0x13cae4, Func Offset: 0xb4
	// Line 1118, Address: 0x13caec, Func Offset: 0xbc
	// Line 1121, Address: 0x13cb14, Func Offset: 0xe4
	// Line 1123, Address: 0x13cb28, Func Offset: 0xf8
	// Line 1124, Address: 0x13cb34, Func Offset: 0x104
	// Line 1125, Address: 0x13cb50, Func Offset: 0x120
	// Line 1126, Address: 0x13cb60, Func Offset: 0x130
	// Line 1127, Address: 0x13cb70, Func Offset: 0x140
	// Line 1128, Address: 0x13cb80, Func Offset: 0x150
	// Line 1129, Address: 0x13cb90, Func Offset: 0x160
	// Line 1131, Address: 0x13cba4, Func Offset: 0x174
	// Line 1132, Address: 0x13cba8, Func Offset: 0x178
	// Func End, Address: 0x13cbd0, Func Offset: 0x1a0
}

// 
// Start address: 0x13cbd0
void SetEffectVertexSpriteXY(float width, float height, EFCTVertexData* VertexData)
{
	// Line 1137, Address: 0x13cbd0, Func Offset: 0
	// Line 1138, Address: 0x13cbe8, Func Offset: 0x18
	// Line 1139, Address: 0x13cbf4, Func Offset: 0x24
	// Line 1140, Address: 0x13cbf8, Func Offset: 0x28
	// Line 1142, Address: 0x13cc00, Func Offset: 0x30
	// Line 1143, Address: 0x13cc08, Func Offset: 0x38
	// Line 1144, Address: 0x13cc0c, Func Offset: 0x3c
	// Line 1145, Address: 0x13cc10, Func Offset: 0x40
	// Line 1147, Address: 0x13cc14, Func Offset: 0x44
	// Line 1148, Address: 0x13cc18, Func Offset: 0x48
	// Line 1149, Address: 0x13cc20, Func Offset: 0x50
	// Line 1150, Address: 0x13cc24, Func Offset: 0x54
	// Line 1152, Address: 0x13cc28, Func Offset: 0x58
	// Line 1153, Address: 0x13cc2c, Func Offset: 0x5c
	// Line 1154, Address: 0x13cc30, Func Offset: 0x60
	// Line 1155, Address: 0x13cc34, Func Offset: 0x64
	// Line 1157, Address: 0x13cc38, Func Offset: 0x68
	// Func End, Address: 0x13cc40, Func Offset: 0x70
}

// 
// Start address: 0x13cc40
void SetEffectVertexSpriteXZ(float width, float height, EFCTVertexData* VertexData)
{
	// Line 1162, Address: 0x13cc40, Func Offset: 0
	// Line 1163, Address: 0x13cc58, Func Offset: 0x18
	// Line 1164, Address: 0x13cc5c, Func Offset: 0x1c
	// Line 1165, Address: 0x13cc68, Func Offset: 0x28
	// Line 1167, Address: 0x13cc70, Func Offset: 0x30
	// Line 1168, Address: 0x13cc78, Func Offset: 0x38
	// Line 1169, Address: 0x13cc7c, Func Offset: 0x3c
	// Line 1170, Address: 0x13cc80, Func Offset: 0x40
	// Line 1172, Address: 0x13cc84, Func Offset: 0x44
	// Line 1173, Address: 0x13cc88, Func Offset: 0x48
	// Line 1174, Address: 0x13cc8c, Func Offset: 0x4c
	// Line 1175, Address: 0x13cc94, Func Offset: 0x54
	// Line 1177, Address: 0x13cc98, Func Offset: 0x58
	// Line 1178, Address: 0x13cc9c, Func Offset: 0x5c
	// Line 1179, Address: 0x13cca0, Func Offset: 0x60
	// Line 1180, Address: 0x13cca4, Func Offset: 0x64
	// Line 1182, Address: 0x13cca8, Func Offset: 0x68
	// Func End, Address: 0x13ccb0, Func Offset: 0x70
}

// 
// Start address: 0x13ccb0
void SpriteLocalRot(EFCTVertexData* pVertex, int num, float* rot)
{
	int i;
	float mtx[4][4];
	// Line 1187, Address: 0x13ccb0, Func Offset: 0
	// Line 1192, Address: 0x13ccd0, Func Offset: 0x20
	// Line 1193, Address: 0x13ccf8, Func Offset: 0x48
	// Line 1197, Address: 0x13cd30, Func Offset: 0x80
	// Line 1199, Address: 0x13cd3c, Func Offset: 0x8c
	// Line 1200, Address: 0x13cd78, Func Offset: 0xc8
	// Line 1201, Address: 0x13cd8c, Func Offset: 0xdc
	// Func End, Address: 0x13cda8, Func Offset: 0xf8
}

// 
// Start address: 0x13cdb0
int EFCTNextFrame(EFCTObject* pObj, int DoLoop)
{
	int nRet;
	// Line 1205, Address: 0x13cdb0, Func Offset: 0
	// Line 1225, Address: 0x13cdb8, Func Offset: 0x8
	// Line 1226, Address: 0x13cdc0, Func Offset: 0x10
	// Line 1230, Address: 0x13cdc8, Func Offset: 0x18
	// Func End, Address: 0x13cdd8, Func Offset: 0x28
}

// 
// Start address: 0x13cde0
int EFCTAutoNextFrame(EFCTObject* pObj)
{
	EFCTAnimationData* pAnim;
	int nRet;
	// Line 1234, Address: 0x13cde0, Func Offset: 0
	// Line 1235, Address: 0x13cdec, Func Offset: 0xc
	// Line 1236, Address: 0x13cdf0, Func Offset: 0x10
	// Line 1270, Address: 0x13cdf4, Func Offset: 0x14
	// Line 1272, Address: 0x13ce00, Func Offset: 0x20
	// Line 1273, Address: 0x13ce08, Func Offset: 0x28
	// Line 1274, Address: 0x13ce0c, Func Offset: 0x2c
	// Line 1276, Address: 0x13ce14, Func Offset: 0x34
	// Line 1277, Address: 0x13ce20, Func Offset: 0x40
	// Line 1280, Address: 0x13ce28, Func Offset: 0x48
	// Line 1281, Address: 0x13ce2c, Func Offset: 0x4c
	// Line 1285, Address: 0x13ce34, Func Offset: 0x54
	// Line 1287, Address: 0x13ce40, Func Offset: 0x60
	// Line 1290, Address: 0x13ce54, Func Offset: 0x74
	// Line 1291, Address: 0x13ce68, Func Offset: 0x88
	// Line 1292, Address: 0x13ce6c, Func Offset: 0x8c
	// Line 1295, Address: 0x13ce74, Func Offset: 0x94
	// Line 1298, Address: 0x13ce78, Func Offset: 0x98
	// Line 1300, Address: 0x13ce88, Func Offset: 0xa8
	// Line 1301, Address: 0x13ce94, Func Offset: 0xb4
	// Line 1302, Address: 0x13ce9c, Func Offset: 0xbc
	// Line 1305, Address: 0x13cea4, Func Offset: 0xc4
	// Line 1307, Address: 0x13ceac, Func Offset: 0xcc
	// Line 1311, Address: 0x13ceb4, Func Offset: 0xd4
	// Line 1312, Address: 0x13cec0, Func Offset: 0xe0
	// Line 1313, Address: 0x13ced4, Func Offset: 0xf4
	// Line 1314, Address: 0x13cedc, Func Offset: 0xfc
	// Line 1316, Address: 0x13cee4, Func Offset: 0x104
	// Line 1318, Address: 0x13cee8, Func Offset: 0x108
	// Line 1320, Address: 0x13cef0, Func Offset: 0x110
	// Line 1321, Address: 0x13cef8, Func Offset: 0x118
	// Line 1322, Address: 0x13cf00, Func Offset: 0x120
	// Line 1324, Address: 0x13cf08, Func Offset: 0x128
	// Line 1330, Address: 0x13cf2c, Func Offset: 0x14c
	// Line 1336, Address: 0x13cf30, Func Offset: 0x150
	// Func End, Address: 0x13cf44, Func Offset: 0x164
}

// 
// Start address: 0x13cf50
void EFCTThreeDWork(EFCTObject* pObj)
{
	float vec[4];
	int i;
	float ws_mtx[4][4];
	float ls_mtx[4][4];
	float lw_mtx[4][4];
	// Line 1384, Address: 0x13cf50, Func Offset: 0
	// Line 1391, Address: 0x13cf64, Func Offset: 0x14
	// Line 1396, Address: 0x13cf8c, Func Offset: 0x3c
	// Line 1397, Address: 0x13cfb8, Func Offset: 0x68
	// Line 1400, Address: 0x13cfe4, Func Offset: 0x94
	// Line 1401, Address: 0x13cff8, Func Offset: 0xa8
	// Line 1403, Address: 0x13d00c, Func Offset: 0xbc
	// Line 1407, Address: 0x13d018, Func Offset: 0xc8
	// Line 1408, Address: 0x13d07c, Func Offset: 0x12c
	// Line 1409, Address: 0x13d09c, Func Offset: 0x14c
	// Line 1410, Address: 0x13d0bc, Func Offset: 0x16c
	// Line 1411, Address: 0x13d0e0, Func Offset: 0x190
	// Line 1412, Address: 0x13d104, Func Offset: 0x1b4
	// Line 1414, Address: 0x13d118, Func Offset: 0x1c8
	// Func End, Address: 0x13d130, Func Offset: 0x1e0
}

// 
// Start address: 0x13d130
void EFCTTinyThreeDWork(EFCTObject* pObj)
{
	float vec[4];
	int i;
	float ws_mtx[4][4];
	float wv_mtx[4][4];
	float ls_mtx[4][4];
	float lw_mtx[4][4];
	// Line 1418, Address: 0x13d130, Func Offset: 0
	// Line 1461, Address: 0x13d144, Func Offset: 0x14
	// Line 1462, Address: 0x13d158, Func Offset: 0x28
	// Line 1463, Address: 0x13d164, Func Offset: 0x34
	// Line 1464, Address: 0x13d16c, Func Offset: 0x3c
	// Line 1466, Address: 0x13d17c, Func Offset: 0x4c
	// Line 1467, Address: 0x13d1ac, Func Offset: 0x7c
	// Line 1469, Address: 0x13d1d8, Func Offset: 0xa8
	// Line 1470, Address: 0x13d1ec, Func Offset: 0xbc
	// Line 1473, Address: 0x13d200, Func Offset: 0xd0
	// Line 1477, Address: 0x13d20c, Func Offset: 0xdc
	// Line 1478, Address: 0x13d270, Func Offset: 0x140
	// Line 1479, Address: 0x13d290, Func Offset: 0x160
	// Line 1480, Address: 0x13d2b0, Func Offset: 0x180
	// Line 1481, Address: 0x13d2d4, Func Offset: 0x1a4
	// Line 1482, Address: 0x13d2f8, Func Offset: 0x1c8
	// Line 1484, Address: 0x13d310, Func Offset: 0x1e0
	// Func End, Address: 0x13d328, Func Offset: 0x1f8
}

// 
// Start address: 0x13d330
void DrawPrimitive(EFCTObject* pObj)
{
	_anon1* vif1packet;
	// Line 1488, Address: 0x13d330, Func Offset: 0
	// Line 1500, Address: 0x13d344, Func Offset: 0x14
	// Line 1504, Address: 0x13d350, Func Offset: 0x20
	// Line 1507, Address: 0x13d360, Func Offset: 0x30
	// Line 1509, Address: 0x13d370, Func Offset: 0x40
	// Line 1510, Address: 0x13d378, Func Offset: 0x48
	// Func End, Address: 0x13d390, Func Offset: 0x60
}

// 
// Start address: 0x13d390
void EFCTMakePacket(EFCTObject* pObj, _anon1* pck)
{
	unsigned long giftag0[2];
	unsigned long giftag1[2];
	unsigned long giftag0[2];
	// Line 1549, Address: 0x13d390, Func Offset: 0
	// Line 1551, Address: 0x13d3a8, Func Offset: 0x18
	// Line 1555, Address: 0x13d3bc, Func Offset: 0x2c
	// Line 1558, Address: 0x13d3cc, Func Offset: 0x3c
	// Line 1560, Address: 0x13d3e0, Func Offset: 0x50
	// Line 1564, Address: 0x13d3f0, Func Offset: 0x60
	// Line 1567, Address: 0x13d3fc, Func Offset: 0x6c
	// Line 1568, Address: 0x13d410, Func Offset: 0x80
	// Line 1569, Address: 0x13d424, Func Offset: 0x94
	// Line 1574, Address: 0x13d430, Func Offset: 0xa0
	// Line 1576, Address: 0x13d444, Func Offset: 0xb4
	// Line 1577, Address: 0x13d454, Func Offset: 0xc4
	// Line 1578, Address: 0x13d46c, Func Offset: 0xdc
	// Line 1582, Address: 0x13d478, Func Offset: 0xe8
	// Func End, Address: 0x13d490, Func Offset: 0x100
}

// 
// Start address: 0x13d490
void SetVertexPkData(_anon1* pck, EFCTVertexData* pVertex, unsigned int nVertexNum)
{
	float f;
	float t;
	float s;
	int i;
	// Line 1587, Address: 0x13d490, Func Offset: 0
	// Line 1591, Address: 0x13d4b4, Func Offset: 0x24
	// Line 1592, Address: 0x13d4c0, Func Offset: 0x30
	// Line 1593, Address: 0x13d4e0, Func Offset: 0x50
	// Line 1594, Address: 0x13d4f0, Func Offset: 0x60
	// Line 1595, Address: 0x13d500, Func Offset: 0x70
	// Line 1596, Address: 0x13d524, Func Offset: 0x94
	// Line 1600, Address: 0x13d574, Func Offset: 0xe4
	// Line 1601, Address: 0x13d5d0, Func Offset: 0x140
	// Line 1611, Address: 0x13d638, Func Offset: 0x1a8
	// Line 1625, Address: 0x13d64c, Func Offset: 0x1bc
	// Func End, Address: 0x13d66c, Func Offset: 0x1dc
}

// 
// Start address: 0x13d670
void EFCTGetGiftag(int Kind, unsigned long* giftag)
{
	// Line 1630, Address: 0x13d670, Func Offset: 0
	// Line 1631, Address: 0x13d678, Func Offset: 0x8
	// Line 1640, Address: 0x13d6a0, Func Offset: 0x30
	// Line 1641, Address: 0x13d6b0, Func Offset: 0x40
	// Line 1642, Address: 0x13d6c8, Func Offset: 0x58
	// Line 1644, Address: 0x13d6d0, Func Offset: 0x60
	// Line 1647, Address: 0x13d6f4, Func Offset: 0x84
	// Func End, Address: 0x13d704, Func Offset: 0x94
}

// 
// Start address: 0x13d710
void EFCTSetAlphaEnvironment(_anon1* pck, short kind)
{
	unsigned int tex_id;
	unsigned long tex0;
	unsigned long giftag0[2];
	// Line 1651, Address: 0x13d710, Func Offset: 0
	// Line 1653, Address: 0x13d728, Func Offset: 0x18
	// Line 1658, Address: 0x13d73c, Func Offset: 0x2c
	// Line 1665, Address: 0x13d76c, Func Offset: 0x5c
	// Line 1666, Address: 0x13d770, Func Offset: 0x60
	// Line 1668, Address: 0x13d778, Func Offset: 0x68
	// Line 1671, Address: 0x13d77c, Func Offset: 0x6c
	// Line 1673, Address: 0x13d78c, Func Offset: 0x7c
	// Line 1676, Address: 0x13d7a0, Func Offset: 0x90
	// Line 1677, Address: 0x13d7b4, Func Offset: 0xa4
	// Line 1682, Address: 0x13d7cc, Func Offset: 0xbc
	// Line 1685, Address: 0x13d810, Func Offset: 0x100
	// Line 1687, Address: 0x13d82c, Func Offset: 0x11c
	// Line 1690, Address: 0x13d834, Func Offset: 0x124
	// Line 1691, Address: 0x13d848, Func Offset: 0x138
	// Line 1694, Address: 0x13d850, Func Offset: 0x140
	// Line 1695, Address: 0x13d864, Func Offset: 0x154
	// Line 1697, Address: 0x13d86c, Func Offset: 0x15c
	// Line 1703, Address: 0x13d894, Func Offset: 0x184
	// Line 1706, Address: 0x13d8b8, Func Offset: 0x1a8
	// Line 1708, Address: 0x13d8c4, Func Offset: 0x1b4
	// Func End, Address: 0x13d8e0, Func Offset: 0x1d0
}

// 
// Start address: 0x13d8e0
void EFCTDeleteTask(short Kind)
{
	_shTskTASK* pTask;
	// Line 1724, Address: 0x13d8e0, Func Offset: 0
	// Line 1725, Address: 0x13d8f0, Func Offset: 0x10
	// Line 1726, Address: 0x13d8fc, Func Offset: 0x1c
	// Line 1728, Address: 0x13d91c, Func Offset: 0x3c
	// Line 1729, Address: 0x13d924, Func Offset: 0x44
	// Line 1730, Address: 0x13d930, Func Offset: 0x50
	// Line 1731, Address: 0x13d948, Func Offset: 0x68
	// Line 1732, Address: 0x13d950, Func Offset: 0x70
	// Func End, Address: 0x13d968, Func Offset: 0x88
}

// 
// Start address: 0x13d970
int EFCTDeleteOldBloodDropTask()
{
	unsigned short LayerNum;
	int ret;
	int i;
	// Line 1736, Address: 0x13d970, Func Offset: 0
	// Line 1738, Address: 0x13d984, Func Offset: 0x14
	// Line 1741, Address: 0x13d988, Func Offset: 0x18
	// Line 1743, Address: 0x13d998, Func Offset: 0x28
	// Line 1744, Address: 0x13d9a4, Func Offset: 0x34
	// Line 1745, Address: 0x13d9b4, Func Offset: 0x44
	// Line 1747, Address: 0x13d9c8, Func Offset: 0x58
	// Line 1748, Address: 0x13d9cc, Func Offset: 0x5c
	// Func End, Address: 0x13d9e8, Func Offset: 0x78
}

// 
// Start address: 0x13d9f0
int EFCTDeleteOldTask(short kind)
{
	_shTskTASK* pTask;
	int ret;
	// Line 1752, Address: 0x13d9f0, Func Offset: 0
	// Line 1756, Address: 0x13d9f8, Func Offset: 0x8
	// Line 1757, Address: 0x13da04, Func Offset: 0x14
	// Line 1759, Address: 0x13da1c, Func Offset: 0x2c
	// Line 1761, Address: 0x13da24, Func Offset: 0x34
	// Line 1762, Address: 0x13da30, Func Offset: 0x40
	// Line 1763, Address: 0x13da34, Func Offset: 0x44
	// Line 1766, Address: 0x13da3c, Func Offset: 0x4c
	// Line 1770, Address: 0x13da40, Func Offset: 0x50
	// Func End, Address: 0x13da50, Func Offset: 0x60
}

// 
// Start address: 0x13da50
void EFCTDoCtrlDummy(void* ptr)
{
	// Line 1789, Address: 0x13da50, Func Offset: 0
	// Line 1791, Address: 0x13da58, Func Offset: 0x8
	// Line 1792, Address: 0x13da60, Func Offset: 0x10
	// Func End, Address: 0x13da70, Func Offset: 0x20
}

// 
// Start address: 0x13da70
float GetSpriteRotAngle(float around_rot, unsigned int plane_num, unsigned int index, int rand_rot_range)
{
	float BaseAng;
	// Line 1806, Address: 0x13da70, Func Offset: 0
	// Line 1808, Address: 0x13da84, Func Offset: 0x14
	// Line 1811, Address: 0x13db10, Func Offset: 0xa0
	// Line 1812, Address: 0x13db64, Func Offset: 0xf4
	// Func End, Address: 0x13db7c, Func Offset: 0x10c
}

// 
// Start address: 0x13db80
void ClipEffectObject(EFCTObject* pObj)
{
	int valid;
	int i;
	// Line 1818, Address: 0x13db80, Func Offset: 0
	// Line 1820, Address: 0x13db98, Func Offset: 0x18
	// Line 1823, Address: 0x13db9c, Func Offset: 0x1c
	// Line 1825, Address: 0x13dba8, Func Offset: 0x28
	// Line 1827, Address: 0x13dbd0, Func Offset: 0x50
	// Line 1829, Address: 0x13dbd4, Func Offset: 0x54
	// Line 1831, Address: 0x13dbdc, Func Offset: 0x5c
	// Line 1840, Address: 0x13dbf0, Func Offset: 0x70
	// Line 1841, Address: 0x13dbfc, Func Offset: 0x7c
	// Line 1842, Address: 0x13dc14, Func Offset: 0x94
	// Line 1844, Address: 0x13dc28, Func Offset: 0xa8
	// Func End, Address: 0x13dc44, Func Offset: 0xc4
}

// 
// Start address: 0x13dc50
void ClipEffectObject2(EFCTObject* pObj)
{
	int valid;
	int i;
	// Line 1850, Address: 0x13dc50, Func Offset: 0
	// Line 1852, Address: 0x13dc68, Func Offset: 0x18
	// Line 1855, Address: 0x13dc6c, Func Offset: 0x1c
	// Line 1857, Address: 0x13dc78, Func Offset: 0x28
	// Line 1859, Address: 0x13dca4, Func Offset: 0x54
	// Line 1861, Address: 0x13dca8, Func Offset: 0x58
	// Line 1863, Address: 0x13dcb0, Func Offset: 0x60
	// Line 1872, Address: 0x13dcc8, Func Offset: 0x78
	// Line 1873, Address: 0x13dcd4, Func Offset: 0x84
	// Line 1874, Address: 0x13dcec, Func Offset: 0x9c
	// Line 1876, Address: 0x13dd00, Func Offset: 0xb0
	// Func End, Address: 0x13dd1c, Func Offset: 0xcc
}

// 
// Start address: 0x13dd20
int EFCTClipVertex(int* vec)
{
	int vw;
	int vy;
	int vx;
	int ret;
	// Line 1884, Address: 0x13dd20, Func Offset: 0
	// Line 1885, Address: 0x13dd24, Func Offset: 0x4
	// Line 1886, Address: 0x13dd2c, Func Offset: 0xc
	// Line 1892, Address: 0x13dd34, Func Offset: 0x14
	// Line 1896, Address: 0x13dd38, Func Offset: 0x18
	// Line 1898, Address: 0x13de08, Func Offset: 0xe8
	// Line 1901, Address: 0x13de0c, Func Offset: 0xec
	// Func End, Address: 0x13de14, Func Offset: 0xf4
}

// 
// Start address: 0x13de20
void EFCTResetRGBA(int* rgba, EFCTVertexData* pVertex)
{
	int i;
	// Line 1918, Address: 0x13de20, Func Offset: 0
	// Line 1919, Address: 0x13de2c, Func Offset: 0xc
	// Line 1920, Address: 0x13de44, Func Offset: 0x24
	// Line 1921, Address: 0x13de4c, Func Offset: 0x2c
	// Line 1922, Address: 0x13de54, Func Offset: 0x34
	// Line 1923, Address: 0x13de5c, Func Offset: 0x3c
	// Line 1924, Address: 0x13de6c, Func Offset: 0x4c
	// Func End, Address: 0x13de74, Func Offset: 0x54
}

// 
// Start address: 0x13de80
void EFCTSetPassingTimePerFrame(float time)
{
	// Line 1929, Address: 0x13de80, Func Offset: 0
	// Line 1930, Address: 0x13de88, Func Offset: 0x8
	// Func End, Address: 0x13de90, Func Offset: 0x10
}

// 
// Start address: 0x13de90
float EFCTGetPassingTimePerFrame()
{
	// Line 1935, Address: 0x13de90, Func Offset: 0
	// Line 1936, Address: 0x13de98, Func Offset: 0x8
	// Func End, Address: 0x13dea0, Func Offset: 0x10
}

// 
// Start address: 0x13dea0
void CalibrationZValue(unsigned int vertex_num, int z, EFCTVertexData* pVertex)
{
	int i;
	// Line 1945, Address: 0x13dea0, Func Offset: 0
	// Line 1946, Address: 0x13deac, Func Offset: 0xc
	// Line 1947, Address: 0x13dec8, Func Offset: 0x28
	// Line 1948, Address: 0x13dedc, Func Offset: 0x3c
	// Func End, Address: 0x13dee4, Func Offset: 0x44
}

