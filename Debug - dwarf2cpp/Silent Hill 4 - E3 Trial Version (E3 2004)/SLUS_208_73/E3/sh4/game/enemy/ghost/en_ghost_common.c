typedef struct EnemyGhostCommonWork;
typedef struct sfObj;
typedef struct EnemyEffectStickyBone;
typedef struct EnemySearchPoint;
typedef union sgQsortEasyData;
typedef struct EnemyFeetParameter;
typedef struct EnemyGhostFloatParameter;
typedef struct EnemyPlayerDirectionDifferentData;
typedef struct EnemyMeasureResult;
typedef struct EnemyObjHook;
typedef struct EnemyGhostStainParameter;
typedef struct _anon0;
typedef struct EnemySearchData;
typedef struct EnemyIKHandle;
typedef struct EnemyMeasureTargetData;
typedef enum EnemyFeetMode : unsigned char;
typedef struct EnemyGhostFeetParameter;
typedef struct sgBone;
typedef struct EnemyFeet;
typedef union _anon1;
typedef struct EnemyEffectStickyWork;
typedef struct _anon2;
typedef struct EnemyGhostStainWork;
typedef union _anon3;
typedef struct EnemyBlockHit;
typedef struct EnemyBlockHitWork;
typedef enum EnemyGhostFloatMode : unsigned char;
typedef struct EnemyManageDataOne;
typedef enum EnemyPlayerType : unsigned char;

typedef int(*type_0)(void*);
typedef void(*type_2)(void*, int);
typedef int(*type_3)(void*);
typedef int(*type_4)(void*);
typedef int(*type_5)(void*);
typedef void(*type_8)(sfObj*);
typedef void(*type_9)(sfObj*);
typedef void(*type_12)(void*, int);
typedef void(*type_16)(void*, int);
typedef void(*type_19)(sfObj*);
typedef int(*type_20)(void*);
typedef int(*type_22)(void*);
typedef void(*type_24)(sfObj*);
typedef int(*type_38)(void*);

typedef _anon1 type_1[4];
typedef float type_6[4];
typedef float type_7[4];
typedef float type_10[4][2];
typedef float type_11[4][2];
typedef float type_13[4][2];
typedef float type_14[4][2];
typedef float type_15[3];
typedef _anon1 type_17[256];
typedef float type_18[4][2];
typedef float type_21[4][2];
typedef float type_23[4][2];
typedef _anon2 type_25[4];
typedef float type_26[4][2];
typedef _anon3 type_27[0];
typedef short type_28[2];
typedef unsigned short type_29[2];
typedef char type_30[4];
typedef unsigned char type_31[4];
typedef int type_32[2];
typedef float type_33[1];
typedef int type_34[2];
typedef int type_35[1];
typedef int type_36[2];
typedef EnemyIKHandle* type_37[2];

struct EnemyGhostCommonWork
{
	float target_pos[4];
	float enter_pos[4];
	float wall_normal[4];
	EnemyMeasureTargetData measure_target;
	sfObj* parent;
	sfObj* myobj;
	int center_bone;
	EnemySearchData* search_d;
	EnemyEffectStickyWork* sticky_work;
	EnemyGhostStainWork* stain_work;
	EnemyIKHandle* feet_IKHandle[2];
	EnemyFeet* feet;
	EnemyGhostFeetParameter* feet_parameter;
	EnemyGhostFloatParameter* float_parameter;
	EnemyBlockHitWork* block_hit_work;
	float standard_height;
	float height;
	float height_accel;
	EnemyGhostFloatMode float_mode;
	char search_mode;
	char sticky_mode;
	char move_mode;
	char landing;
	char sound_type;
	int sound_no;
	int sound_slot;
	float transparency;
	float wall_thickness;
	float hide_time;
	float down_timer;
	float block_hit_ratio;
	float block_hit_front;
	float block_hit_rear;
	EnemyObjHook* animechange_hook;
	EnemyObjHook* animeupdate_hook;
	EnemyGhostStainParameter* gs_parameter;
	EnemyPlayerDirectionDifferentData player_dirdiff;
};

struct sfObj
{
	_anon1 fwork[256];
	_anon1* work;
	void(*func)(sfObj*);
	_anon1* work_pt0;
	_anon1* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon1* sys_work;
	_anon1* scene_work;
	_anon1* event_work;
	_anon1* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct EnemyEffectStickyBone
{
	int bone;
	float pos[3];
	float y_deviation;
	int direction;
};

struct EnemySearchPoint
{
};

union sgQsortEasyData
{
	unsigned long ul;
	int value;
	void* data;
};

struct EnemyFeetParameter
{
	float leg_length;
	float foot_size;
	float foot_thickness;
	float angle_limit_h;
	float angle_limit_fh;
	float angle_limit_fvl;
	float angle_limit_fvh;
	float leg_minimum;
	float move_limit_minimum;
	float move_limit_maximum;
	float attenuation_air;
	float attenuation;
	float approach_speed;
};

struct EnemyGhostFloatParameter
{
	float lower_limit;
	float fall_limit;
	float rise_speed;
	float descent_speed;
	float fall_speed;
	float noise_limit;
	float noise_rate;
	float noise_t_rate;
	float noise_a_rate;
};

struct EnemyPlayerDirectionDifferentData
{
	float* pos;
	float angle;
	EnemyPlayerType type;
};

struct EnemyMeasureResult
{
	float pos[4];
	float normal[4];
	float dist;
	int exist;
	_anon0* poly;
};

struct EnemyObjHook
{
};

struct EnemyGhostStainParameter
{
	float size_w;
	float size_h;
	float appear_time;
	float spot_appear_wait_time;
	float spot_appear_time;
	float disappear_wait_time;
	float disappear_time;
};

struct _anon0
{
	_anon3 vertex[0];
};

struct EnemySearchData
{
};

struct EnemyIKHandle
{
};

struct EnemyMeasureTargetData
{
	float* pos;
	float* target;
	float dist;
};

enum EnemyFeetMode : unsigned char
{
	ENEMY_FEET_MODE_NORMAL,
	ENEMY_FEET_MODE_ONLY_FLOOR,
	ENEMY_FEET_MODE_CIRCLELIMIT,
	ENEMY_FEET_MODE_NOCHECK_ALL,
	ENEMY_FEET_MODE_CLOSE,
	ENEMY_FEET_MODE_CLOSE_PRE,
	ENEMY_FEET_MODE_FIX
};

struct EnemyGhostFeetParameter
{
	int bone_name[2];
	int heel_bone_name[2];
	int toe_bone_name[2];
	int waist_bone_name;
	EnemyFeetParameter fparam;
};

struct sgBone
{
	float rot[4];
	float trans[4];
	float scale[4];
	float abs_rot[4];
	float abs_trans[4];
	sgBone* parent;
	sgBone* child_list;
	sgBone* child_sibling;
	unsigned short last;
	unsigned short flag;
	float partly_blend_rate;
};

struct EnemyFeet
{
};

union _anon1
{
	int si;
	unsigned int ui;
	void* pt;
	short ss[2];
	unsigned short us[2];
	char sc[4];
	unsigned char uc[4];
	float f;
	float fv[1];
	int iv[1];
};

struct EnemyEffectStickyWork
{
};

struct _anon2
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct EnemyGhostStainWork
{
};

union _anon3
{
	float node[4];
	_anon2 data[4];
};

struct EnemyBlockHit
{
	float center[4];
	float front;
	float rear;
	float upper;
	float lower;
	float width;
	float rotate;
};

struct EnemyBlockHitWork
{
};

enum EnemyGhostFloatMode : unsigned char
{
	ENEMY_GHOST_FLOAT_NOMOVE,
	ENEMY_GHOST_FLOAT_NORMAL,
	ENEMY_GHOST_FLOAT_SLOW,
	ENEMY_GHOST_FLOAT_STAY,
	ENEMY_GHOST_FLOAT_NORMAL_IW,
	ENEMY_GHOST_FLOAT_SLOW_IW,
	ENEMY_GHOST_FLOAT_STAY_IW,
	ENEMY_GHOST_FLOAT_INTOFLOOR,
	ENEMY_GHOST_FLOAT_INTOCEILING,
	ENEMY_GHOST_FLOAT_THROUGH,
	ENEMY_GHOST_FLOAT_THROUGH_STAY,
	ENEMY_GHOST_FLOAT_FALL
};

struct EnemyManageDataOne
{
	float pos[4];
	float rot[4];
	unsigned int id;
	short kind;
	short condition;
	float hp;
	float leave_time;
	short serial;
	char step;
	char type;
	char mode;
	char anime;
	char stage;
	char scene;
	unsigned int lru_point;
	_anon1 work[4];
	unsigned int padding;
};

enum EnemyPlayerType : unsigned char
{
	ENEMY_PLAYER_TYPE_PLAYER,
	ENEMY_PLAYER_TYPE_HEROINE,
	ENEMY_PLAYER_TYPE_NPC,
	ENEMY_PLAYER_TYPE_MAX,
	ENEMY_PLAYER_TYPE_NOTHING = 0xff
};

void(*EnemyGhostCommonAnimeUpdateHook)(sfObj*);
void(*EnemyGhostCommonAnimeChangeHook)(sfObj*);
void(*EnemyEDGhostCommonSetLowSpeedMode)(void*, int);
int(*EnemyEDPlayerDirThisSide)(void*);
void(*EnemyEDGhostCommonSetHighSpeedMode)(void*, int);
int(*EnemyEDPlayerDirOtherSide)(void*);
int appear_point_is_nearest;
int(*EnemyEDMeasureTargetNear)(void*);
int(*EnemyEDMeasureTargetFar)(void*);
int(*EnemyEDMeasureTargetNearXZ)(void*);
int(*EnemyEDMeasureTargetFarXZ)(void*);

int EnemyGhostCommonWorkConstruct(sfObj* obj, int center_bone_name);
void EnemyGhostCommonWorkDestruct(sfObj* obj);
void EnemyGhostCommonStickyInit(sfObj* obj, EnemyEffectStickyBone* psb, int data_max);
void EnemyGhostCommonFeetInit(sfObj* obj, EnemyGhostFeetParameter* pfp);
void EnemyGhostCommonStainSetParameter(sfObj* obj, EnemyGhostStainParameter* psp);
void EnemyGhostCommonAnimeChangeHook(sfObj* obj);
void EnemyGhostCommonCheckEnterStage(sfObj* obj);
float* EnemyGhostCommonTargetPos(sfObj* obj);
void* EnemyGhostCommonSearchWork(sfObj* obj);
void EnemyGhostCommonAnimeUpdateHook(sfObj* obj);
void EnemyGhostCommonFeetSetMode(sfObj* obj, EnemyFeetMode mode);
void EnemyGhostCommonFeetSwingStart(sfObj* obj);
void EnemyGhostCommonFeetSwingStop(sfObj* obj);
void EnemyGhostCommonSoundCall(sfObj* obj, int sound);
void EnemyGhostCommonWallSoundCall(sfObj* obj, int sound);
void EnemyGhostCommonSoundStop(sfObj* obj);
void EnemyGhostCommonFeetControl(sfObj* obj);
void EnemyGhostCommonStainAppear(sfObj* obj, int splash);
void EnemyGhostCommonStainDisappear(sfObj* obj);
void EnemyGhostCommonStickyAppear(sfObj* obj);
void EnemyGhostCommonStickyCut(sfObj* obj);
void EnemyGhostCommonSetTransparency(sfObj* obj, float transparency);
float EnemyGhostCommonGetTransparency(sfObj* obj);
void EnemyGhostCommonHandle(sfObj* obj);
void EnemyGhostCommonDraw(sfObj* obj);
void EnemyGhostCommonDrawCharacter(sfObj* obj);
int EnemyGhostCommonCheckNearGhostPoint(float* pos, float range);
void EnemyGhostCommonResetPath(sfObj* obj);
int EnemyGhostCommonCheckPath(sfObj* obj, float* target, float* pos);
int EnemyGhostCommonSearchPath(sfObj* obj, float* dst, float* target, float* pos, float hit_range, float broad_range);
int EnemyGhostCommonSearchPathDirect(sfObj* obj, float* dst, float* target, float* pos, float hit_range, float broad_range);
int EnemyGhostCommonSearchAppearPoint(float* dst, float* pos, float warp_prob, float* ignore_pos);
int EnemyGhostCommonSearchEnterPoint(sfObj* obj, float* dst, float* pos);
int EnemyGhostCommonSetEnterPoint(sfObj* obj, float* pos);
int EnemyGhostCommonSetEnterPointByNum(sfObj* obj, int num);
void EnemyGhostCommonWarpPointLock(sfObj* obj, float* pos);
void EnemyGhostCommonEnterPointUnlock(sfObj* obj);
void EnemyGhostCommonReverseWallNormal(sfObj* obj);
void EnemyGhostCommonGetEnterPos(sfObj* obj, float* pos);
void EnemyGhostCommonGetWallNormal(sfObj* obj, float* normal);
float EnemyGhostCommonGetWallThickness(sfObj* obj);
void EnemyGhostCommonSetEventMeasure(sfObj* obj, float* target, float* pos, float dist, void(*exec_func)(void*, int), int(*test_func)(void*));
void EnemyGhostCommonSetEventMeasureTargetNearXZ(sfObj* obj, float* target, float* pos, float dist, void(*exec_func)(void*, int));
void EnemyGhostCommonSetFloatParameter(sfObj* obj, EnemyGhostFloatParameter* pfp);
void EnemyGhostCommonResetHeight(sfObj* obj, float standard_height);
void EnemyGhostCommonSetHeight(sfObj* obj, float standard_height);
void EnemyGhostCommonResetHeightTarget(sfObj* obj, float standard_height);
void EnemyGhostCommonSetHeightTarget(sfObj* obj, float standard_height);
void EnemyGhostCommonSetHeightAccel(sfObj* obj, float accel);
void EnemyGhostCommonSetFloatMode(sfObj* obj, EnemyGhostFloatMode mode);
void EnemyGhostCommonHeightControl(sfObj* obj);
int EnemyGhostCommonCheckLanding(sfObj* obj);
void EnemyGhostCommonResetHideTime(sfObj* obj);
float EnemyGhostCommonHideTime(sfObj* obj);
void EnemyGhostCommonSetDownTimer(sfObj* obj, float time);
void EnemyGhostCommonAddDownTimer(sfObj* obj, float time);
float EnemyGhostCommonDownTimer(sfObj* obj);
void set_block_hit(sfObj* obj);
void EnemyGhostCommonSetBlockHit(sfObj* obj, float front, float rear);
void EnemyGhostCommonBlockHitControl(sfObj* obj);
void EnemyGhostCommonDeleteBlockHit(sfObj* obj);
void EnemyGhostCommonResetMoveMode(sfObj* obj, int move_mode);
int EnemyGhostCommonMoveMode(sfObj* obj);
void EnemyEDGhostCommonSetHighSpeedMode(void* obj);
void EnemyEDGhostCommonSetLowSpeedMode(void* obj);
int EnemyGhostCommonCheckPlayerArrival(sfObj* obj, float check_height);
int EnemyGhostCommonPlayerBattleHitHoldSetHeart(float time, float damage);
int EnemyGhostCommonPlayerBattleHitSetHeartPos(float* pos);
void EnemyGhostCommonPlayerBattleHitGetHeartPos(float* pos);
void EnemyGhostCommonPlayerRelease();

// 
// Start address: 0x27c460
int EnemyGhostCommonWorkConstruct(sfObj* obj, int center_bone_name)
{
	sfObj* obj2;
	EnemyGhostCommonWork* gcw;
	EnemyPlayerDirectionDifferentData* pd;
	// Line 102, Address: 0x27c460, Func Offset: 0
	// Line 107, Address: 0x27c47c, Func Offset: 0x1c
	// Line 108, Address: 0x27c488, Func Offset: 0x28
	// Line 109, Address: 0x27c498, Func Offset: 0x38
	// Line 110, Address: 0x27c4a4, Func Offset: 0x44
	// Line 109, Address: 0x27c4a8, Func Offset: 0x48
	// Line 111, Address: 0x27c4ac, Func Offset: 0x4c
	// Line 114, Address: 0x27c4b0, Func Offset: 0x50
	// Line 112, Address: 0x27c4b4, Func Offset: 0x54
	// Line 114, Address: 0x27c4b8, Func Offset: 0x58
	// Line 115, Address: 0x27c4c4, Func Offset: 0x64
	// Line 116, Address: 0x27c4cc, Func Offset: 0x6c
	// Line 117, Address: 0x27c4dc, Func Offset: 0x7c
	// Line 119, Address: 0x27c4f0, Func Offset: 0x90
	// Line 121, Address: 0x27c504, Func Offset: 0xa4
	// Line 127, Address: 0x27c508, Func Offset: 0xa8
	// Line 122, Address: 0x27c50c, Func Offset: 0xac
	// Line 123, Address: 0x27c510, Func Offset: 0xb0
	// Line 124, Address: 0x27c514, Func Offset: 0xb4
	// Line 125, Address: 0x27c518, Func Offset: 0xb8
	// Line 127, Address: 0x27c51c, Func Offset: 0xbc
	// Line 128, Address: 0x27c524, Func Offset: 0xc4
	// Line 130, Address: 0x27c528, Func Offset: 0xc8
	// Line 129, Address: 0x27c52c, Func Offset: 0xcc
	// Line 134, Address: 0x27c530, Func Offset: 0xd0
	// Line 130, Address: 0x27c534, Func Offset: 0xd4
	// Line 134, Address: 0x27c538, Func Offset: 0xd8
	// Line 132, Address: 0x27c53c, Func Offset: 0xdc
	// Line 134, Address: 0x27c548, Func Offset: 0xe8
	// Line 135, Address: 0x27c550, Func Offset: 0xf0
	// Line 137, Address: 0x27c558, Func Offset: 0xf8
	// Func End, Address: 0x27c574, Func Offset: 0x114
}

// 
// Start address: 0x27c580
void EnemyGhostCommonWorkDestruct(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 143, Address: 0x27c580, Func Offset: 0
	// Line 145, Address: 0x27c590, Func Offset: 0x10
	// Line 146, Address: 0x27c59c, Func Offset: 0x1c
	// Line 147, Address: 0x27c5a8, Func Offset: 0x28
	// Line 148, Address: 0x27c5b0, Func Offset: 0x30
	// Line 150, Address: 0x27c5bc, Func Offset: 0x3c
	// Line 151, Address: 0x27c5c4, Func Offset: 0x44
	// Line 152, Address: 0x27c5cc, Func Offset: 0x4c
	// Line 151, Address: 0x27c5d0, Func Offset: 0x50
	// Line 153, Address: 0x27c5d4, Func Offset: 0x54
	// Line 154, Address: 0x27c5dc, Func Offset: 0x5c
	// Line 155, Address: 0x27c5e4, Func Offset: 0x64
	// Line 154, Address: 0x27c5e8, Func Offset: 0x68
	// Line 156, Address: 0x27c5ec, Func Offset: 0x6c
	// Line 157, Address: 0x27c5f4, Func Offset: 0x74
	// Line 158, Address: 0x27c5fc, Func Offset: 0x7c
	// Line 159, Address: 0x27c600, Func Offset: 0x80
	// Line 160, Address: 0x27c60c, Func Offset: 0x8c
	// Line 161, Address: 0x27c618, Func Offset: 0x98
	// Line 162, Address: 0x27c620, Func Offset: 0xa0
	// Line 163, Address: 0x27c62c, Func Offset: 0xac
	// Func End, Address: 0x27c644, Func Offset: 0xc4
}

// 
// Start address: 0x27c650
void EnemyGhostCommonStickyInit(sfObj* obj, EnemyEffectStickyBone* psb, int data_max)
{
	EnemyGhostCommonWork* gcw;
	// Line 173, Address: 0x27c650, Func Offset: 0
	// Line 175, Address: 0x27c664, Func Offset: 0x14
	// Line 176, Address: 0x27c66c, Func Offset: 0x1c
	// Line 177, Address: 0x27c684, Func Offset: 0x34
	// Func End, Address: 0x27c698, Func Offset: 0x48
}

// 
// Start address: 0x27c6a0
void EnemyGhostCommonFeetInit(sfObj* obj, EnemyGhostFeetParameter* pfp)
{
	EnemyGhostCommonWork* gcw;
	int i;
	// Line 184, Address: 0x27c6a0, Func Offset: 0
	// Line 187, Address: 0x27c6c4, Func Offset: 0x24
	// Line 190, Address: 0x27c6d0, Func Offset: 0x30
	// Line 191, Address: 0x27c6e0, Func Offset: 0x40
	// Line 192, Address: 0x27c6ec, Func Offset: 0x4c
	// Line 194, Address: 0x27c6fc, Func Offset: 0x5c
	// Line 192, Address: 0x27c700, Func Offset: 0x60
	// Line 194, Address: 0x27c704, Func Offset: 0x64
	// Line 197, Address: 0x27c710, Func Offset: 0x70
	// Line 198, Address: 0x27c71c, Func Offset: 0x7c
	// Line 199, Address: 0x27c728, Func Offset: 0x88
	// Line 200, Address: 0x27c72c, Func Offset: 0x8c
	// Func End, Address: 0x27c750, Func Offset: 0xb0
}

// 
// Start address: 0x27c750
void EnemyGhostCommonStainSetParameter(sfObj* obj, EnemyGhostStainParameter* psp)
{
	EnemyGhostCommonWork* gcw;
	// Line 208, Address: 0x27c750, Func Offset: 0
	// Line 210, Address: 0x27c75c, Func Offset: 0xc
	// Line 211, Address: 0x27c764, Func Offset: 0x14
	// Line 212, Address: 0x27c768, Func Offset: 0x18
	// Func End, Address: 0x27c778, Func Offset: 0x28
}

// 
// Start address: 0x27c780
void EnemyGhostCommonAnimeChangeHook(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	int i;
	// Line 216, Address: 0x27c780, Func Offset: 0
	// Line 219, Address: 0x27c794, Func Offset: 0x14
	// Line 220, Address: 0x27c79c, Func Offset: 0x1c
	// Line 221, Address: 0x27c7a8, Func Offset: 0x28
	// Line 223, Address: 0x27c7b8, Func Offset: 0x38
	// Line 224, Address: 0x27c7d0, Func Offset: 0x50
	// Line 223, Address: 0x27c7d4, Func Offset: 0x54
	// Line 224, Address: 0x27c7d8, Func Offset: 0x58
	// Line 225, Address: 0x27c7e4, Func Offset: 0x64
	// Func End, Address: 0x27c804, Func Offset: 0x84
}

// 
// Start address: 0x27c810
void EnemyGhostCommonCheckEnterStage(sfObj* obj)
{
	EnemyManageDataOne* pe;
	float dpos[4];
	// Line 233, Address: 0x27c810, Func Offset: 0
	// Line 236, Address: 0x27c828, Func Offset: 0x18
	// Line 237, Address: 0x27c83c, Func Offset: 0x2c
	// Line 238, Address: 0x27c844, Func Offset: 0x34
	// Line 242, Address: 0x27c854, Func Offset: 0x44
	// Line 243, Address: 0x27c868, Func Offset: 0x58
	// Line 245, Address: 0x27c8a0, Func Offset: 0x90
	// Line 247, Address: 0x27c8a8, Func Offset: 0x98
	// Line 252, Address: 0x27c8c0, Func Offset: 0xb0
	// Line 254, Address: 0x27c8d8, Func Offset: 0xc8
	// Line 255, Address: 0x27c8e0, Func Offset: 0xd0
	// Line 257, Address: 0x27c8e8, Func Offset: 0xd8
	// Line 258, Address: 0x27c8f4, Func Offset: 0xe4
	// Line 259, Address: 0x27c8fc, Func Offset: 0xec
	// Line 260, Address: 0x27c904, Func Offset: 0xf4
	// Line 259, Address: 0x27c908, Func Offset: 0xf8
	// Line 260, Address: 0x27c90c, Func Offset: 0xfc
	// Line 261, Address: 0x27c914, Func Offset: 0x104
	// Line 262, Address: 0x27c920, Func Offset: 0x110
	// Func End, Address: 0x27c93c, Func Offset: 0x12c
}

// 
// Start address: 0x27c940
float* EnemyGhostCommonTargetPos(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 268, Address: 0x27c940, Func Offset: 0
	// Func End, Address: 0x27c948, Func Offset: 0x8
}

// 
// Start address: 0x27c950
void* EnemyGhostCommonSearchWork(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 274, Address: 0x27c950, Func Offset: 0
	// Line 276, Address: 0x27c958, Func Offset: 0x8
	// Line 278, Address: 0x27c960, Func Offset: 0x10
	// Line 277, Address: 0x27c964, Func Offset: 0x14
	// Line 278, Address: 0x27c968, Func Offset: 0x18
	// Func End, Address: 0x27c970, Func Offset: 0x20
}

// 
// Start address: 0x27c970
void EnemyGhostCommonAnimeUpdateHook(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	EnemyGhostFeetParameter* pfp;
	EnemyIKHandle* ikh;
	sgBone* bone;
	float fpos[4][2];
	float gpos[4][2];
	float frot[4][2];
	int i;
	int n;
	int mode;
	// Line 282, Address: 0x27c970, Func Offset: 0
	// Line 290, Address: 0x27c99c, Func Offset: 0x2c
	// Line 291, Address: 0x27c9a8, Func Offset: 0x38
	// Line 292, Address: 0x27c9c8, Func Offset: 0x58
	// Line 293, Address: 0x27c9d4, Func Offset: 0x64
	// Line 294, Address: 0x27c9e0, Func Offset: 0x70
	// Line 295, Address: 0x27c9e8, Func Offset: 0x78
	// Line 296, Address: 0x27c9f0, Func Offset: 0x80
	// Line 297, Address: 0x27ca08, Func Offset: 0x98
	// Line 299, Address: 0x27ca18, Func Offset: 0xa8
	// Line 298, Address: 0x27ca1c, Func Offset: 0xac
	// Line 300, Address: 0x27ca20, Func Offset: 0xb0
	// Line 301, Address: 0x27ca2c, Func Offset: 0xbc
	// Line 302, Address: 0x27ca38, Func Offset: 0xc8
	// Line 304, Address: 0x27ca40, Func Offset: 0xd0
	// Line 305, Address: 0x27ca4c, Func Offset: 0xdc
	// Line 306, Address: 0x27ca60, Func Offset: 0xf0
	// Line 307, Address: 0x27ca64, Func Offset: 0xf4
	// Line 308, Address: 0x27ca6c, Func Offset: 0xfc
	// Line 309, Address: 0x27ca78, Func Offset: 0x108
	// Line 310, Address: 0x27ca7c, Func Offset: 0x10c
	// Line 311, Address: 0x27ca84, Func Offset: 0x114
	// Line 312, Address: 0x27ca90, Func Offset: 0x120
	// Line 311, Address: 0x27ca94, Func Offset: 0x124
	// Line 312, Address: 0x27ca98, Func Offset: 0x128
	// Line 311, Address: 0x27ca9c, Func Offset: 0x12c
	// Line 312, Address: 0x27caa4, Func Offset: 0x134
	// Line 313, Address: 0x27caac, Func Offset: 0x13c
	// Line 314, Address: 0x27cab8, Func Offset: 0x148
	// Line 315, Address: 0x27cac8, Func Offset: 0x158
	// Line 317, Address: 0x27cad8, Func Offset: 0x168
	// Func End, Address: 0x27cb08, Func Offset: 0x198
}

// 
// Start address: 0x27cb10
void EnemyGhostCommonFeetSetMode(sfObj* obj, EnemyFeetMode mode)
{
	EnemyGhostCommonWork* gcw;
	EnemyFeetMode omode;
	float pos[4][2];
	float rot[4][2];
	int i;
	// Line 324, Address: 0x27cb10, Func Offset: 0
	// Line 327, Address: 0x27cb38, Func Offset: 0x28
	// Line 328, Address: 0x27cb40, Func Offset: 0x30
	// Line 329, Address: 0x27cb54, Func Offset: 0x44
	// Line 330, Address: 0x27cb5c, Func Offset: 0x4c
	// Line 334, Address: 0x27cb70, Func Offset: 0x60
	// Line 335, Address: 0x27cb7c, Func Offset: 0x6c
	// Line 339, Address: 0x27cb88, Func Offset: 0x78
	// Line 340, Address: 0x27cb98, Func Offset: 0x88
	// Line 343, Address: 0x27cbb4, Func Offset: 0xa4
	// Line 344, Address: 0x27cbbc, Func Offset: 0xac
	// Line 343, Address: 0x27cbc0, Func Offset: 0xb0
	// Line 344, Address: 0x27cbc4, Func Offset: 0xb4
	// Line 343, Address: 0x27cbc8, Func Offset: 0xb8
	// Line 344, Address: 0x27cbd0, Func Offset: 0xc0
	// Line 345, Address: 0x27cbd8, Func Offset: 0xc8
	// Line 348, Address: 0x27cbe8, Func Offset: 0xd8
	// Func End, Address: 0x27cc10, Func Offset: 0x100
}

// 
// Start address: 0x27cc10
void EnemyGhostCommonFeetSwingStart(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 354, Address: 0x27cc10, Func Offset: 0
	// Line 356, Address: 0x27cc18, Func Offset: 0x8
	// Line 357, Address: 0x27cc20, Func Offset: 0x10
	// Line 358, Address: 0x27cc2c, Func Offset: 0x1c
	// Func End, Address: 0x27cc38, Func Offset: 0x28
}

// 
// Start address: 0x27cc40
void EnemyGhostCommonFeetSwingStop(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 364, Address: 0x27cc40, Func Offset: 0
	// Line 366, Address: 0x27cc48, Func Offset: 0x8
	// Line 367, Address: 0x27cc50, Func Offset: 0x10
	// Line 368, Address: 0x27cc5c, Func Offset: 0x1c
	// Func End, Address: 0x27cc68, Func Offset: 0x28
}

// 
// Start address: 0x27cc70
void EnemyGhostCommonSoundCall(sfObj* obj, int sound)
{
	EnemyGhostCommonWork* gcw;
	// Line 375, Address: 0x27cc70, Func Offset: 0
	// Line 377, Address: 0x27cc88, Func Offset: 0x18
	// Line 378, Address: 0x27cc94, Func Offset: 0x24
	// Line 379, Address: 0x27cca8, Func Offset: 0x38
	// Line 380, Address: 0x27ccb0, Func Offset: 0x40
	// Line 382, Address: 0x27ccb8, Func Offset: 0x48
	// Line 384, Address: 0x27ccc8, Func Offset: 0x58
	// Line 383, Address: 0x27cccc, Func Offset: 0x5c
	// Line 384, Address: 0x27ccd0, Func Offset: 0x60
	// Line 385, Address: 0x27ccd4, Func Offset: 0x64
	// Line 386, Address: 0x27ccd8, Func Offset: 0x68
	// Func End, Address: 0x27ccf0, Func Offset: 0x80
}

// 
// Start address: 0x27ccf0
void EnemyGhostCommonWallSoundCall(sfObj* obj, int sound)
{
	EnemyGhostCommonWork* gcw;
	// Line 393, Address: 0x27ccf0, Func Offset: 0
	// Line 395, Address: 0x27cd00, Func Offset: 0x10
	// Line 396, Address: 0x27cd0c, Func Offset: 0x1c
	// Line 397, Address: 0x27cd28, Func Offset: 0x38
	// Line 398, Address: 0x27cd30, Func Offset: 0x40
	// Line 400, Address: 0x27cd38, Func Offset: 0x48
	// Line 402, Address: 0x27cd50, Func Offset: 0x60
	// Line 401, Address: 0x27cd54, Func Offset: 0x64
	// Line 402, Address: 0x27cd58, Func Offset: 0x68
	// Line 403, Address: 0x27cd5c, Func Offset: 0x6c
	// Line 404, Address: 0x27cd60, Func Offset: 0x70
	// Func End, Address: 0x27cd74, Func Offset: 0x84
}

// 
// Start address: 0x27cd80
void EnemyGhostCommonSoundStop(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 410, Address: 0x27cd80, Func Offset: 0
	// Line 412, Address: 0x27cd88, Func Offset: 0x8
	// Line 413, Address: 0x27cd94, Func Offset: 0x14
	// Line 414, Address: 0x27cda8, Func Offset: 0x28
	// Line 415, Address: 0x27cdb0, Func Offset: 0x30
	// Line 416, Address: 0x27cdb8, Func Offset: 0x38
	// Line 417, Address: 0x27cdbc, Func Offset: 0x3c
	// Line 419, Address: 0x27cdc0, Func Offset: 0x40
	// Func End, Address: 0x27cdd0, Func Offset: 0x50
}

// 
// Start address: 0x27cdd0
void EnemyGhostCommonFeetControl(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	EnemyGhostFeetParameter* pfp;
	float cpos[4][2];
	float fpos[4][2];
	float frot[4][2];
	float* wrot;
	sgBone* bone;
	int i;
	// Line 425, Address: 0x27cdd0, Func Offset: 0
	// Line 433, Address: 0x27cdfc, Func Offset: 0x2c
	// Line 434, Address: 0x27ce08, Func Offset: 0x38
	// Line 436, Address: 0x27ce10, Func Offset: 0x40
	// Line 438, Address: 0x27ce28, Func Offset: 0x58
	// Line 439, Address: 0x27ce30, Func Offset: 0x60
	// Line 438, Address: 0x27ce34, Func Offset: 0x64
	// Line 439, Address: 0x27ce38, Func Offset: 0x68
	// Line 440, Address: 0x27ce44, Func Offset: 0x74
	// Line 441, Address: 0x27ce4c, Func Offset: 0x7c
	// Line 442, Address: 0x27ce50, Func Offset: 0x80
	// Line 443, Address: 0x27ce5c, Func Offset: 0x8c
	// Line 444, Address: 0x27ce68, Func Offset: 0x98
	// Line 445, Address: 0x27ce78, Func Offset: 0xa8
	// Line 446, Address: 0x27ce84, Func Offset: 0xb4
	// Line 447, Address: 0x27ce90, Func Offset: 0xc0
	// Line 448, Address: 0x27ce9c, Func Offset: 0xcc
	// Line 449, Address: 0x27cea4, Func Offset: 0xd4
	// Line 450, Address: 0x27ceb0, Func Offset: 0xe0
	// Line 449, Address: 0x27ceb4, Func Offset: 0xe4
	// Line 450, Address: 0x27ceb8, Func Offset: 0xe8
	// Line 449, Address: 0x27cebc, Func Offset: 0xec
	// Line 450, Address: 0x27cec0, Func Offset: 0xf0
	// Line 451, Address: 0x27cec8, Func Offset: 0xf8
	// Line 452, Address: 0x27cedc, Func Offset: 0x10c
	// Line 453, Address: 0x27cef0, Func Offset: 0x120
	// Line 454, Address: 0x27cf00, Func Offset: 0x130
	// Line 455, Address: 0x27cf10, Func Offset: 0x140
	// Line 456, Address: 0x27cf1c, Func Offset: 0x14c
	// Line 457, Address: 0x27cf28, Func Offset: 0x158
	// Line 458, Address: 0x27cf34, Func Offset: 0x164
	// Line 459, Address: 0x27cf40, Func Offset: 0x170
	// Line 460, Address: 0x27cf4c, Func Offset: 0x17c
	// Line 459, Address: 0x27cf50, Func Offset: 0x180
	// Line 460, Address: 0x27cf54, Func Offset: 0x184
	// Line 459, Address: 0x27cf58, Func Offset: 0x188
	// Line 460, Address: 0x27cf60, Func Offset: 0x190
	// Line 461, Address: 0x27cf68, Func Offset: 0x198
	// Func End, Address: 0x27cf98, Func Offset: 0x1c8
}

// 
// Start address: 0x27cfa0
void EnemyGhostCommonStainAppear(sfObj* obj, int splash)
{
	EnemyGhostCommonWork* gcw;
	float pos[4];
	// Line 468, Address: 0x27cfa0, Func Offset: 0
	// Line 471, Address: 0x27cfb0, Func Offset: 0x10
	// Line 472, Address: 0x27cfbc, Func Offset: 0x1c
	// Line 473, Address: 0x27cfc4, Func Offset: 0x24
	// Line 474, Address: 0x27cfcc, Func Offset: 0x2c
	// Line 475, Address: 0x27cfd0, Func Offset: 0x30
	// Line 476, Address: 0x27cfd8, Func Offset: 0x38
	// Line 479, Address: 0x27d03c, Func Offset: 0x9c
	// Line 481, Address: 0x27d048, Func Offset: 0xa8
	// Line 484, Address: 0x27d0a0, Func Offset: 0x100
	// Line 485, Address: 0x27d0a4, Func Offset: 0x104
	// Line 486, Address: 0x27d0a8, Func Offset: 0x108
	// Line 488, Address: 0x27d0ec, Func Offset: 0x14c
	// Line 490, Address: 0x27d0f0, Func Offset: 0x150
	// Line 494, Address: 0x27d10c, Func Offset: 0x16c
	// Func End, Address: 0x27d120, Func Offset: 0x180
}

// 
// Start address: 0x27d120
void EnemyGhostCommonStainDisappear(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 500, Address: 0x27d120, Func Offset: 0
	// Line 502, Address: 0x27d128, Func Offset: 0x8
	// Line 503, Address: 0x27d134, Func Offset: 0x14
	// Line 504, Address: 0x27d13c, Func Offset: 0x1c
	// Line 505, Address: 0x27d144, Func Offset: 0x24
	// Line 507, Address: 0x27d148, Func Offset: 0x28
	// Func End, Address: 0x27d158, Func Offset: 0x38
}

// 
// Start address: 0x27d160
void EnemyGhostCommonStickyAppear(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 513, Address: 0x27d160, Func Offset: 0
	// Line 515, Address: 0x27d168, Func Offset: 0x8
	// Line 516, Address: 0x27d170, Func Offset: 0x10
	// Line 515, Address: 0x27d174, Func Offset: 0x14
	// Line 516, Address: 0x27d178, Func Offset: 0x18
	// Line 518, Address: 0x27d184, Func Offset: 0x24
	// Line 519, Address: 0x27d18c, Func Offset: 0x2c
	// Func End, Address: 0x27d19c, Func Offset: 0x3c
}

// 
// Start address: 0x27d1a0
void EnemyGhostCommonStickyCut(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 522, Address: 0x27d1a0, Func Offset: 0
	// Line 524, Address: 0x27d1a8, Func Offset: 0x8
	// Line 525, Address: 0x27d1b0, Func Offset: 0x10
	// Line 526, Address: 0x27d1bc, Func Offset: 0x1c
	// Line 527, Address: 0x27d1c4, Func Offset: 0x24
	// Line 528, Address: 0x27d1cc, Func Offset: 0x2c
	// Line 529, Address: 0x27d1d0, Func Offset: 0x30
	// Func End, Address: 0x27d1e0, Func Offset: 0x40
}

// 
// Start address: 0x27d1e0
void EnemyGhostCommonSetTransparency(sfObj* obj, float transparency)
{
	EnemyGhostCommonWork* gcw;
	// Line 536, Address: 0x27d1e0, Func Offset: 0
	// Line 538, Address: 0x27d1ec, Func Offset: 0xc
	// Line 539, Address: 0x27d1f4, Func Offset: 0x14
	// Line 540, Address: 0x27d1f8, Func Offset: 0x18
	// Func End, Address: 0x27d208, Func Offset: 0x28
}

// 
// Start address: 0x27d210
float EnemyGhostCommonGetTransparency(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 547, Address: 0x27d210, Func Offset: 0
	// Line 549, Address: 0x27d218, Func Offset: 0x8
	// Line 551, Address: 0x27d220, Func Offset: 0x10
	// Line 550, Address: 0x27d224, Func Offset: 0x14
	// Line 551, Address: 0x27d228, Func Offset: 0x18
	// Func End, Address: 0x27d230, Func Offset: 0x20
}

// 
// Start address: 0x27d230
void EnemyGhostCommonHandle(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	EnemyPlayerDirectionDifferentData* pd;
	// Line 557, Address: 0x27d230, Func Offset: 0
	// Line 560, Address: 0x27d244, Func Offset: 0x14
	// Line 561, Address: 0x27d250, Func Offset: 0x20
	// Line 562, Address: 0x27d260, Func Offset: 0x30
	// Line 563, Address: 0x27d268, Func Offset: 0x38
	// Line 564, Address: 0x27d274, Func Offset: 0x44
	// Line 565, Address: 0x27d27c, Func Offset: 0x4c
	// Line 566, Address: 0x27d280, Func Offset: 0x50
	// Line 568, Address: 0x27d2a0, Func Offset: 0x70
	// Line 569, Address: 0x27d2a8, Func Offset: 0x78
	// Line 571, Address: 0x27d2b0, Func Offset: 0x80
	// Line 572, Address: 0x27d2b8, Func Offset: 0x88
	// Line 573, Address: 0x27d2c8, Func Offset: 0x98
	// Line 574, Address: 0x27d2d0, Func Offset: 0xa0
	// Line 577, Address: 0x27d2d4, Func Offset: 0xa4
	// Line 579, Address: 0x27d2d8, Func Offset: 0xa8
	// Line 580, Address: 0x27d2e8, Func Offset: 0xb8
	// Line 581, Address: 0x27d30c, Func Offset: 0xdc
	// Line 582, Address: 0x27d310, Func Offset: 0xe0
	// Line 584, Address: 0x27d32c, Func Offset: 0xfc
	// Line 585, Address: 0x27d334, Func Offset: 0x104
	// Line 586, Address: 0x27d338, Func Offset: 0x108
	// Line 589, Address: 0x27d354, Func Offset: 0x124
	// Line 590, Address: 0x27d358, Func Offset: 0x128
	// Line 591, Address: 0x27d368, Func Offset: 0x138
	// Line 592, Address: 0x27d378, Func Offset: 0x148
	// Line 593, Address: 0x27d380, Func Offset: 0x150
	// Line 594, Address: 0x27d384, Func Offset: 0x154
	// Line 595, Address: 0x27d388, Func Offset: 0x158
	// Line 599, Address: 0x27d3a0, Func Offset: 0x170
	// Line 600, Address: 0x27d3c4, Func Offset: 0x194
	// Line 603, Address: 0x27d3c8, Func Offset: 0x198
	// Line 605, Address: 0x27d3e8, Func Offset: 0x1b8
	// Line 606, Address: 0x27d3f8, Func Offset: 0x1c8
	// Line 608, Address: 0x27d400, Func Offset: 0x1d0
	// Line 612, Address: 0x27d418, Func Offset: 0x1e8
	// Line 613, Address: 0x27d434, Func Offset: 0x204
	// Func End, Address: 0x27d44c, Func Offset: 0x21c
}

// 
// Start address: 0x27d450
void EnemyGhostCommonDraw(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 619, Address: 0x27d450, Func Offset: 0
	// Line 621, Address: 0x27d460, Func Offset: 0x10
	// Line 622, Address: 0x27d46c, Func Offset: 0x1c
	// Line 623, Address: 0x27d474, Func Offset: 0x24
	// Line 624, Address: 0x27d480, Func Offset: 0x30
	// Line 626, Address: 0x27d488, Func Offset: 0x38
	// Line 627, Address: 0x27d490, Func Offset: 0x40
	// Func End, Address: 0x27d4a4, Func Offset: 0x54
}

// 
// Start address: 0x27d4b0
void EnemyGhostCommonDrawCharacter(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 633, Address: 0x27d4b0, Func Offset: 0
	// Line 635, Address: 0x27d4c4, Func Offset: 0x14
	// Line 636, Address: 0x27d4d0, Func Offset: 0x20
	// Line 638, Address: 0x27d4f4, Func Offset: 0x44
	// Line 639, Address: 0x27d500, Func Offset: 0x50
	// Func End, Address: 0x27d518, Func Offset: 0x68
}

// 
// Start address: 0x27d520
int EnemyGhostCommonCheckNearGhostPoint(float* pos, float range)
{
	EnemySearchPoint* esp;
	float tpos[4];
	// Line 647, Address: 0x27d520, Func Offset: 0
	// Line 650, Address: 0x27d538, Func Offset: 0x18
	// Line 651, Address: 0x27d544, Func Offset: 0x24
	// Line 652, Address: 0x27d55c, Func Offset: 0x3c
	// Line 653, Address: 0x27d564, Func Offset: 0x44
	// Line 654, Address: 0x27d580, Func Offset: 0x60
	// Line 657, Address: 0x27d588, Func Offset: 0x68
	// Line 658, Address: 0x27d590, Func Offset: 0x70
	// Func End, Address: 0x27d5a8, Func Offset: 0x88
}

// 
// Start address: 0x27d5b0
void EnemyGhostCommonResetPath(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 664, Address: 0x27d5b0, Func Offset: 0
	// Line 666, Address: 0x27d5b8, Func Offset: 0x8
	// Line 667, Address: 0x27d5c0, Func Offset: 0x10
	// Line 668, Address: 0x27d5cc, Func Offset: 0x1c
	// Line 669, Address: 0x27d5d0, Func Offset: 0x20
	// Func End, Address: 0x27d5e0, Func Offset: 0x30
}

// 
// Start address: 0x27d5e0
int EnemyGhostCommonCheckPath(sfObj* obj, float* target, float* pos)
{
	EnemyGhostCommonWork* gcw;
	// Line 679, Address: 0x27d5e0, Func Offset: 0
	// Line 681, Address: 0x27d5f8, Func Offset: 0x18
	// Line 682, Address: 0x27d600, Func Offset: 0x20
	// Line 683, Address: 0x27d60c, Func Offset: 0x2c
	// Line 684, Address: 0x27d620, Func Offset: 0x40
	// Func End, Address: 0x27d638, Func Offset: 0x58
}

// 
// Start address: 0x27d640
int EnemyGhostCommonSearchPath(sfObj* obj, float* dst, float* target, float* pos, float hit_range, float broad_range)
{
	EnemyGhostCommonWork* gcw;
	EnemySearchPoint* esp;
	float tpos[4];
	// Line 699, Address: 0x27d640, Func Offset: 0
	// Line 703, Address: 0x27d674, Func Offset: 0x34
	// Line 704, Address: 0x27d680, Func Offset: 0x40
	// Line 705, Address: 0x27d688, Func Offset: 0x48
	// Line 706, Address: 0x27d6a0, Func Offset: 0x60
	// Line 707, Address: 0x27d6ac, Func Offset: 0x6c
	// Line 708, Address: 0x27d6b8, Func Offset: 0x78
	// Line 709, Address: 0x27d6d4, Func Offset: 0x94
	// Line 710, Address: 0x27d6dc, Func Offset: 0x9c
	// Line 711, Address: 0x27d6e0, Func Offset: 0xa0
	// Line 714, Address: 0x27d6fc, Func Offset: 0xbc
	// Line 715, Address: 0x27d708, Func Offset: 0xc8
	// Line 717, Address: 0x27d724, Func Offset: 0xe4
	// Line 718, Address: 0x27d728, Func Offset: 0xe8
	// Line 717, Address: 0x27d72c, Func Offset: 0xec
	// Line 718, Address: 0x27d730, Func Offset: 0xf0
	// Line 719, Address: 0x27d738, Func Offset: 0xf8
	// Line 722, Address: 0x27d74c, Func Offset: 0x10c
	// Line 723, Address: 0x27d758, Func Offset: 0x118
	// Line 724, Address: 0x27d774, Func Offset: 0x134
	// Line 725, Address: 0x27d77c, Func Offset: 0x13c
	// Line 726, Address: 0x27d780, Func Offset: 0x140
	// Line 728, Address: 0x27d79c, Func Offset: 0x15c
	// Line 734, Address: 0x27d7a0, Func Offset: 0x160
	// Line 736, Address: 0x27d7c0, Func Offset: 0x180
	// Line 738, Address: 0x27d7c8, Func Offset: 0x188
	// Line 739, Address: 0x27d7d4, Func Offset: 0x194
	// Line 741, Address: 0x27d7f0, Func Offset: 0x1b0
	// Line 745, Address: 0x27d814, Func Offset: 0x1d4
	// Line 746, Address: 0x27d818, Func Offset: 0x1d8
	// Line 747, Address: 0x27d820, Func Offset: 0x1e0
	// Func End, Address: 0x27d848, Func Offset: 0x208
}

// 
// Start address: 0x27d850
int EnemyGhostCommonSearchPathDirect(sfObj* obj, float* dst, float* target, float* pos, float hit_range, float broad_range)
{
	EnemyGhostCommonWork* gcw;
	EnemySearchPoint* esp;
	// Line 761, Address: 0x27d850, Func Offset: 0
	// Line 764, Address: 0x27d880, Func Offset: 0x30
	// Line 765, Address: 0x27d88c, Func Offset: 0x3c
	// Line 766, Address: 0x27d894, Func Offset: 0x44
	// Line 767, Address: 0x27d8a8, Func Offset: 0x58
	// Line 768, Address: 0x27d8b0, Func Offset: 0x60
	// Line 767, Address: 0x27d8b8, Func Offset: 0x68
	// Line 768, Address: 0x27d8bc, Func Offset: 0x6c
	// Line 769, Address: 0x27d8d0, Func Offset: 0x80
	// Line 774, Address: 0x27d8d8, Func Offset: 0x88
	// Line 776, Address: 0x27d8f8, Func Offset: 0xa8
	// Line 778, Address: 0x27d900, Func Offset: 0xb0
	// Line 779, Address: 0x27d90c, Func Offset: 0xbc
	// Line 780, Address: 0x27d910, Func Offset: 0xc0
	// Func End, Address: 0x27d934, Func Offset: 0xe4
}

// 
// Start address: 0x27d940
int EnemyGhostCommonSearchAppearPoint(float* dst, float* pos, float warp_prob, float* ignore_pos)
{
	int i;
	int n;
	int an;
	int wn;
	int mn;
	float d;
	float md;
	sgQsortEasyData* qs_base;
	float ppos[4];
	float* tpos;
	float* ptpos;
	EnemySearchPoint* esp;
	// Line 790, Address: 0x27d940, Func Offset: 0
	// Line 798, Address: 0x27d984, Func Offset: 0x44
	// Line 799, Address: 0x27d98c, Func Offset: 0x4c
	// Line 800, Address: 0x27d998, Func Offset: 0x58
	// Line 801, Address: 0x27d9b0, Func Offset: 0x70
	// Line 802, Address: 0x27d9c0, Func Offset: 0x80
	// Line 804, Address: 0x27d9d0, Func Offset: 0x90
	// Line 806, Address: 0x27d9e4, Func Offset: 0xa4
	// Line 808, Address: 0x27d9f8, Func Offset: 0xb8
	// Line 806, Address: 0x27d9fc, Func Offset: 0xbc
	// Line 808, Address: 0x27da00, Func Offset: 0xc0
	// Line 809, Address: 0x27da08, Func Offset: 0xc8
	// Line 811, Address: 0x27da14, Func Offset: 0xd4
	// Line 812, Address: 0x27da20, Func Offset: 0xe0
	// Line 813, Address: 0x27da24, Func Offset: 0xe4
	// Line 814, Address: 0x27da28, Func Offset: 0xe8
	// Line 813, Address: 0x27da2c, Func Offset: 0xec
	// Line 815, Address: 0x27da30, Func Offset: 0xf0
	// Line 816, Address: 0x27da38, Func Offset: 0xf8
	// Line 817, Address: 0x27da48, Func Offset: 0x108
	// Line 818, Address: 0x27da58, Func Offset: 0x118
	// Line 820, Address: 0x27da5c, Func Offset: 0x11c
	// Line 821, Address: 0x27da64, Func Offset: 0x124
	// Line 822, Address: 0x27da68, Func Offset: 0x128
	// Line 823, Address: 0x27da74, Func Offset: 0x134
	// Line 824, Address: 0x27da80, Func Offset: 0x140
	// Line 825, Address: 0x27da8c, Func Offset: 0x14c
	// Line 827, Address: 0x27dab0, Func Offset: 0x170
	// Line 828, Address: 0x27dabc, Func Offset: 0x17c
	// Line 830, Address: 0x27dac0, Func Offset: 0x180
	// Line 833, Address: 0x27dac8, Func Offset: 0x188
	// Line 834, Address: 0x27dad8, Func Offset: 0x198
	// Line 835, Address: 0x27dafc, Func Offset: 0x1bc
	// Line 836, Address: 0x27db00, Func Offset: 0x1c0
	// Line 837, Address: 0x27db04, Func Offset: 0x1c4
	// Line 838, Address: 0x27db08, Func Offset: 0x1c8
	// Line 839, Address: 0x27db24, Func Offset: 0x1e4
	// Line 840, Address: 0x27db2c, Func Offset: 0x1ec
	// Line 838, Address: 0x27db30, Func Offset: 0x1f0
	// Line 840, Address: 0x27db34, Func Offset: 0x1f4
	// Line 838, Address: 0x27db38, Func Offset: 0x1f8
	// Line 839, Address: 0x27db3c, Func Offset: 0x1fc
	// Line 840, Address: 0x27db40, Func Offset: 0x200
	// Line 841, Address: 0x27db48, Func Offset: 0x208
	// Line 842, Address: 0x27db5c, Func Offset: 0x21c
	// Line 844, Address: 0x27db68, Func Offset: 0x228
	// Line 845, Address: 0x27db7c, Func Offset: 0x23c
	// Line 846, Address: 0x27db8c, Func Offset: 0x24c
	// Line 848, Address: 0x27db90, Func Offset: 0x250
	// Line 850, Address: 0x27db98, Func Offset: 0x258
	// Line 851, Address: 0x27dba4, Func Offset: 0x264
	// Line 852, Address: 0x27dbb0, Func Offset: 0x270
	// Line 853, Address: 0x27dbc0, Func Offset: 0x280
	// Line 854, Address: 0x27dbe0, Func Offset: 0x2a0
	// Line 855, Address: 0x27dbe4, Func Offset: 0x2a4
	// Line 857, Address: 0x27dbe8, Func Offset: 0x2a8
	// Line 858, Address: 0x27dc04, Func Offset: 0x2c4
	// Line 857, Address: 0x27dc0c, Func Offset: 0x2cc
	// Line 858, Address: 0x27dc14, Func Offset: 0x2d4
	// Line 859, Address: 0x27dc18, Func Offset: 0x2d8
	// Line 860, Address: 0x27dc1c, Func Offset: 0x2dc
	// Line 861, Address: 0x27dc20, Func Offset: 0x2e0
	// Line 862, Address: 0x27dc34, Func Offset: 0x2f4
	// Line 863, Address: 0x27dc3c, Func Offset: 0x2fc
	// Line 864, Address: 0x27dc44, Func Offset: 0x304
	// Line 865, Address: 0x27dc50, Func Offset: 0x310
	// Line 867, Address: 0x27dc58, Func Offset: 0x318
	// Line 869, Address: 0x27dc64, Func Offset: 0x324
	// Line 870, Address: 0x27dc70, Func Offset: 0x330
	// Line 871, Address: 0x27dc7c, Func Offset: 0x33c
	// Line 872, Address: 0x27dc84, Func Offset: 0x344
	// Line 875, Address: 0x27dca0, Func Offset: 0x360
	// Line 876, Address: 0x27dcb8, Func Offset: 0x378
	// Line 877, Address: 0x27dcc4, Func Offset: 0x384
	// Line 878, Address: 0x27dcd0, Func Offset: 0x390
	// Line 879, Address: 0x27dcdc, Func Offset: 0x39c
	// Line 880, Address: 0x27dce4, Func Offset: 0x3a4
	// Line 883, Address: 0x27dcf8, Func Offset: 0x3b8
	// Line 884, Address: 0x27dd10, Func Offset: 0x3d0
	// Line 885, Address: 0x27dd1c, Func Offset: 0x3dc
	// Line 888, Address: 0x27dd20, Func Offset: 0x3e0
	// Line 889, Address: 0x27dd30, Func Offset: 0x3f0
	// Line 891, Address: 0x27dd44, Func Offset: 0x404
	// Line 892, Address: 0x27dd50, Func Offset: 0x410
	// Line 893, Address: 0x27dd5c, Func Offset: 0x41c
	// Line 894, Address: 0x27dd78, Func Offset: 0x438
	// Func End, Address: 0x27ddb4, Func Offset: 0x474
}

// 
// Start address: 0x27ddc0
int EnemyGhostCommonSearchEnterPoint(sfObj* obj, float* dst, float* pos)
{
	EnemyGhostCommonWork* gcw;
	EnemySearchPoint* esp;
	float vec[4];
	int r;
	// Line 912, Address: 0x27ddc0, Func Offset: 0
	// Line 917, Address: 0x27dde4, Func Offset: 0x24
	// Line 918, Address: 0x27ddec, Func Offset: 0x2c
	// Line 919, Address: 0x27ddf8, Func Offset: 0x38
	// Line 921, Address: 0x27de10, Func Offset: 0x50
	// Line 923, Address: 0x27de18, Func Offset: 0x58
	// Line 924, Address: 0x27de24, Func Offset: 0x64
	// Line 926, Address: 0x27de50, Func Offset: 0x90
	// Line 927, Address: 0x27de6c, Func Offset: 0xac
	// Line 929, Address: 0x27dea4, Func Offset: 0xe4
	// Line 932, Address: 0x27ded4, Func Offset: 0x114
	// Line 933, Address: 0x27ded8, Func Offset: 0x118
	// Line 934, Address: 0x27dee4, Func Offset: 0x124
	// Line 935, Address: 0x27dee8, Func Offset: 0x128
	// Line 936, Address: 0x27def0, Func Offset: 0x130
	// Func End, Address: 0x27df10, Func Offset: 0x150
}

// 
// Start address: 0x27df10
int EnemyGhostCommonSetEnterPoint(sfObj* obj, float* pos)
{
	EnemyGhostCommonWork* gcw;
	EnemySearchPoint* esp;
	EnemyMeasureResult mres;
	float tpos[4];
	float wpos[4];
	float vec[4];
	int r;
	// Line 946, Address: 0x27df10, Func Offset: 0
	// Line 952, Address: 0x27df28, Func Offset: 0x18
	// Line 953, Address: 0x27df30, Func Offset: 0x20
	// Line 954, Address: 0x27df3c, Func Offset: 0x2c
	// Line 956, Address: 0x27df58, Func Offset: 0x48
	// Line 958, Address: 0x27df60, Func Offset: 0x50
	// Line 961, Address: 0x27df68, Func Offset: 0x58
	// Line 960, Address: 0x27df74, Func Offset: 0x64
	// Line 961, Address: 0x27df78, Func Offset: 0x68
	// Line 962, Address: 0x27df88, Func Offset: 0x78
	// Line 963, Address: 0x27df90, Func Offset: 0x80
	// Line 965, Address: 0x27dfb8, Func Offset: 0xa8
	// Line 966, Address: 0x27dfc8, Func Offset: 0xb8
	// Line 967, Address: 0x27dfd4, Func Offset: 0xc4
	// Line 970, Address: 0x27dfd8, Func Offset: 0xc8
	// Line 971, Address: 0x27e004, Func Offset: 0xf4
	// Line 972, Address: 0x27e024, Func Offset: 0x114
	// Line 973, Address: 0x27e038, Func Offset: 0x128
	// Line 976, Address: 0x27e070, Func Offset: 0x160
	// Line 978, Address: 0x27e09c, Func Offset: 0x18c
	// Line 980, Address: 0x27e0a8, Func Offset: 0x198
	// Line 982, Address: 0x27e0c8, Func Offset: 0x1b8
	// Line 984, Address: 0x27e0e8, Func Offset: 0x1d8
	// Line 985, Address: 0x27e0f0, Func Offset: 0x1e0
	// Line 986, Address: 0x27e0fc, Func Offset: 0x1ec
	// Line 987, Address: 0x27e100, Func Offset: 0x1f0
	// Line 989, Address: 0x27e138, Func Offset: 0x228
	// Line 990, Address: 0x27e158, Func Offset: 0x248
	// Line 994, Address: 0x27e190, Func Offset: 0x280
	// Line 995, Address: 0x27e1b0, Func Offset: 0x2a0
	// Line 1001, Address: 0x27e1c0, Func Offset: 0x2b0
	// Line 1002, Address: 0x27e1c8, Func Offset: 0x2b8
	// Line 1003, Address: 0x27e1d4, Func Offset: 0x2c4
	// Line 1004, Address: 0x27e1d8, Func Offset: 0x2c8
	// Func End, Address: 0x27e1f4, Func Offset: 0x2e4
}

// 
// Start address: 0x27e200
int EnemyGhostCommonSetEnterPointByNum(sfObj* obj, int num)
{
	EnemyGhostCommonWork* gcw;
	EnemySearchPoint* esp;
	float pos[4];
	float vec[4];
	EnemyMeasureResult mres;
	int r;
	// Line 1014, Address: 0x27e200, Func Offset: 0
	// Line 1020, Address: 0x27e214, Func Offset: 0x14
	// Line 1021, Address: 0x27e220, Func Offset: 0x20
	// Line 1022, Address: 0x27e238, Func Offset: 0x38
	// Line 1023, Address: 0x27e244, Func Offset: 0x44
	// Line 1024, Address: 0x27e260, Func Offset: 0x60
	// Line 1025, Address: 0x27e26c, Func Offset: 0x6c
	// Line 1027, Address: 0x27e288, Func Offset: 0x88
	// Line 1029, Address: 0x27e290, Func Offset: 0x90
	// Line 1032, Address: 0x27e29c, Func Offset: 0x9c
	// Line 1031, Address: 0x27e2a0, Func Offset: 0xa0
	// Line 1032, Address: 0x27e2a4, Func Offset: 0xa4
	// Line 1033, Address: 0x27e2b4, Func Offset: 0xb4
	// Line 1034, Address: 0x27e2c0, Func Offset: 0xc0
	// Line 1035, Address: 0x27e2c4, Func Offset: 0xc4
	// Line 1037, Address: 0x27e2c8, Func Offset: 0xc8
	// Line 1038, Address: 0x27e2f4, Func Offset: 0xf4
	// Line 1039, Address: 0x27e314, Func Offset: 0x114
	// Line 1040, Address: 0x27e328, Func Offset: 0x128
	// Line 1043, Address: 0x27e360, Func Offset: 0x160
	// Line 1047, Address: 0x27e390, Func Offset: 0x190
	// Line 1049, Address: 0x27e3a0, Func Offset: 0x1a0
	// Line 1050, Address: 0x27e3a8, Func Offset: 0x1a8
	// Line 1051, Address: 0x27e3b4, Func Offset: 0x1b4
	// Line 1052, Address: 0x27e3b8, Func Offset: 0x1b8
	// Func End, Address: 0x27e3d0, Func Offset: 0x1d0
}

// 
// Start address: 0x27e3d0
void EnemyGhostCommonWarpPointLock(sfObj* obj, float* pos)
{
	EnemyGhostCommonWork* gcw;
	EnemySearchPoint* esp;
	// Line 1059, Address: 0x27e3d0, Func Offset: 0
	// Line 1062, Address: 0x27e3e4, Func Offset: 0x14
	// Line 1063, Address: 0x27e3ec, Func Offset: 0x1c
	// Line 1062, Address: 0x27e3f0, Func Offset: 0x20
	// Line 1063, Address: 0x27e3f4, Func Offset: 0x24
	// Line 1064, Address: 0x27e404, Func Offset: 0x34
	// Line 1065, Address: 0x27e410, Func Offset: 0x40
	// Line 1066, Address: 0x27e418, Func Offset: 0x48
	// Line 1067, Address: 0x27e424, Func Offset: 0x54
	// Line 1068, Address: 0x27e428, Func Offset: 0x58
	// Func End, Address: 0x27e43c, Func Offset: 0x6c
}

// 
// Start address: 0x27e440
void EnemyGhostCommonEnterPointUnlock(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 1074, Address: 0x27e440, Func Offset: 0
	// Line 1076, Address: 0x27e448, Func Offset: 0x8
	// Line 1077, Address: 0x27e454, Func Offset: 0x14
	// Line 1078, Address: 0x27e45c, Func Offset: 0x1c
	// Line 1079, Address: 0x27e464, Func Offset: 0x24
	// Func End, Address: 0x27e474, Func Offset: 0x34
}

// 
// Start address: 0x27e480
void EnemyGhostCommonReverseWallNormal(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 1085, Address: 0x27e480, Func Offset: 0
	// Line 1087, Address: 0x27e488, Func Offset: 0x8
	// Line 1088, Address: 0x27e490, Func Offset: 0x10
	// Line 1089, Address: 0x27e4c0, Func Offset: 0x40
	// Func End, Address: 0x27e4cc, Func Offset: 0x4c
}

// 
// Start address: 0x27e4d0
void EnemyGhostCommonGetEnterPos(sfObj* obj, float* pos)
{
	EnemyGhostCommonWork* gcw;
	// Line 1098, Address: 0x27e4d0, Func Offset: 0
	// Line 1100, Address: 0x27e4dc, Func Offset: 0xc
	// Line 1101, Address: 0x27e4e4, Func Offset: 0x14
	// Line 1102, Address: 0x27e4ec, Func Offset: 0x1c
	// Func End, Address: 0x27e4fc, Func Offset: 0x2c
}

// 
// Start address: 0x27e500
void EnemyGhostCommonGetWallNormal(sfObj* obj, float* normal)
{
	EnemyGhostCommonWork* gcw;
	// Line 1111, Address: 0x27e500, Func Offset: 0
	// Line 1113, Address: 0x27e50c, Func Offset: 0xc
	// Line 1114, Address: 0x27e514, Func Offset: 0x14
	// Line 1115, Address: 0x27e51c, Func Offset: 0x1c
	// Func End, Address: 0x27e52c, Func Offset: 0x2c
}

// 
// Start address: 0x27e530
float EnemyGhostCommonGetWallThickness(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 1125, Address: 0x27e530, Func Offset: 0
	// Line 1127, Address: 0x27e538, Func Offset: 0x8
	// Line 1129, Address: 0x27e540, Func Offset: 0x10
	// Line 1128, Address: 0x27e544, Func Offset: 0x14
	// Line 1129, Address: 0x27e548, Func Offset: 0x18
	// Func End, Address: 0x27e550, Func Offset: 0x20
}

// 
// Start address: 0x27e550
void EnemyGhostCommonSetEventMeasure(sfObj* obj, float* target, float* pos, float dist, void(*exec_func)(void*, int), int(*test_func)(void*))
{
	EnemyGhostCommonWork* gcw;
	EnemyMeasureTargetData* pm;
	// Line 1143, Address: 0x27e550, Func Offset: 0
	// Line 1146, Address: 0x27e584, Func Offset: 0x34
	// Line 1148, Address: 0x27e58c, Func Offset: 0x3c
	// Line 1151, Address: 0x27e590, Func Offset: 0x40
	// Line 1149, Address: 0x27e594, Func Offset: 0x44
	// Line 1151, Address: 0x27e598, Func Offset: 0x48
	// Line 1147, Address: 0x27e59c, Func Offset: 0x4c
	// Line 1151, Address: 0x27e5a0, Func Offset: 0x50
	// Line 1152, Address: 0x27e5a8, Func Offset: 0x58
	// Line 1153, Address: 0x27e5b8, Func Offset: 0x68
	// Line 1154, Address: 0x27e5c0, Func Offset: 0x70
	// Line 1156, Address: 0x27e5d0, Func Offset: 0x80
	// Func End, Address: 0x27e5f4, Func Offset: 0xa4
}

// 
// Start address: 0x27e600
void EnemyGhostCommonSetEventMeasureTargetNearXZ(sfObj* obj, float* target, float* pos, float dist, void(*exec_func)(void*, int))
{
	// Line 1214, Address: 0x27e600, Func Offset: 0
	// Func End, Address: 0x27e60c, Func Offset: 0xc
}

// 
// Start address: 0x27e610
void EnemyGhostCommonSetFloatParameter(sfObj* obj, EnemyGhostFloatParameter* pfp)
{
	EnemyGhostCommonWork* gcw;
	// Line 1246, Address: 0x27e610, Func Offset: 0
	// Line 1248, Address: 0x27e61c, Func Offset: 0xc
	// Line 1249, Address: 0x27e624, Func Offset: 0x14
	// Line 1250, Address: 0x27e628, Func Offset: 0x18
	// Func End, Address: 0x27e638, Func Offset: 0x28
}

// 
// Start address: 0x27e640
void EnemyGhostCommonResetHeight(sfObj* obj, float standard_height)
{
	EnemyGhostCommonWork* gcw;
	EnemyMeasureResult mres;
	float* pos;
	// Line 1257, Address: 0x27e640, Func Offset: 0
	// Line 1261, Address: 0x27e658, Func Offset: 0x18
	// Line 1262, Address: 0x27e664, Func Offset: 0x24
	// Line 1263, Address: 0x27e66c, Func Offset: 0x2c
	// Line 1264, Address: 0x27e684, Func Offset: 0x44
	// Line 1265, Address: 0x27e68c, Func Offset: 0x4c
	// Line 1266, Address: 0x27e698, Func Offset: 0x58
	// Line 1268, Address: 0x27e6a0, Func Offset: 0x60
	// Line 1269, Address: 0x27e6a8, Func Offset: 0x68
	// Line 1270, Address: 0x27e6ac, Func Offset: 0x6c
	// Func End, Address: 0x27e6c4, Func Offset: 0x84
}

// 
// Start address: 0x27e6d0
void EnemyGhostCommonSetHeight(sfObj* obj, float standard_height)
{
	EnemyGhostCommonWork* gcw;
	EnemyMeasureResult mres;
	// Line 1277, Address: 0x27e6d0, Func Offset: 0
	// Line 1280, Address: 0x27e6e4, Func Offset: 0x14
	// Line 1281, Address: 0x27e6ec, Func Offset: 0x1c
	// Line 1282, Address: 0x27e704, Func Offset: 0x34
	// Line 1284, Address: 0x27e710, Func Offset: 0x40
	// Func End, Address: 0x27e724, Func Offset: 0x54
}

// 
// Start address: 0x27e730
void EnemyGhostCommonResetHeightTarget(sfObj* obj, float standard_height)
{
	EnemyGhostCommonWork* gcw;
	float* pos;
	// Line 1291, Address: 0x27e730, Func Offset: 0
	// Line 1294, Address: 0x27e744, Func Offset: 0x14
	// Line 1295, Address: 0x27e74c, Func Offset: 0x1c
	// Line 1296, Address: 0x27e758, Func Offset: 0x28
	// Line 1297, Address: 0x27e75c, Func Offset: 0x2c
	// Line 1298, Address: 0x27e764, Func Offset: 0x34
	// Line 1299, Address: 0x27e768, Func Offset: 0x38
	// Func End, Address: 0x27e77c, Func Offset: 0x4c
}

// 
// Start address: 0x27e780
void EnemyGhostCommonSetHeightTarget(sfObj* obj, float standard_height)
{
	EnemyGhostCommonWork* gcw;
	// Line 1306, Address: 0x27e780, Func Offset: 0
	// Line 1308, Address: 0x27e78c, Func Offset: 0xc
	// Line 1309, Address: 0x27e794, Func Offset: 0x14
	// Line 1310, Address: 0x27e798, Func Offset: 0x18
	// Func End, Address: 0x27e7a8, Func Offset: 0x28
}

// 
// Start address: 0x27e7b0
void EnemyGhostCommonSetHeightAccel(sfObj* obj, float accel)
{
	EnemyGhostCommonWork* gcw;
	// Line 1317, Address: 0x27e7b0, Func Offset: 0
	// Line 1319, Address: 0x27e7bc, Func Offset: 0xc
	// Line 1320, Address: 0x27e7c4, Func Offset: 0x14
	// Line 1321, Address: 0x27e7c8, Func Offset: 0x18
	// Func End, Address: 0x27e7d8, Func Offset: 0x28
}

// 
// Start address: 0x27e7e0
void EnemyGhostCommonSetFloatMode(sfObj* obj, EnemyGhostFloatMode mode)
{
	EnemyGhostCommonWork* gcw;
	// Line 1328, Address: 0x27e7e0, Func Offset: 0
	// Line 1330, Address: 0x27e7f8, Func Offset: 0x18
	// Line 1331, Address: 0x27e800, Func Offset: 0x20
	// Line 1333, Address: 0x27e810, Func Offset: 0x30
	// Line 1334, Address: 0x27e824, Func Offset: 0x44
	// Line 1335, Address: 0x27e828, Func Offset: 0x48
	// Func End, Address: 0x27e840, Func Offset: 0x60
}

// 
// Start address: 0x27e840
void EnemyGhostCommonHeightControl(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	EnemyGhostFloatParameter* pfp;
	EnemyMeasureResult mres;
	float* pos;
	float* rot;
	float tpos[4];
	float move[4];
	float d;
	float d2;
	float dt;
	float s;
	float floor_height;
	int f;
	// Line 1354, Address: 0x27e840, Func Offset: 0
	// Line 1363, Address: 0x27e868, Func Offset: 0x28
	// Line 1364, Address: 0x27e870, Func Offset: 0x30
	// Line 1365, Address: 0x27e874, Func Offset: 0x34
	// Line 1366, Address: 0x27e888, Func Offset: 0x48
	// Line 1368, Address: 0x27e890, Func Offset: 0x50
	// Line 1369, Address: 0x27e89c, Func Offset: 0x5c
	// Line 1370, Address: 0x27e8a8, Func Offset: 0x68
	// Line 1371, Address: 0x27e8b0, Func Offset: 0x70
	// Line 1372, Address: 0x27e8d8, Func Offset: 0x98
	// Line 1373, Address: 0x27e8dc, Func Offset: 0x9c
	// Line 1374, Address: 0x27e904, Func Offset: 0xc4
	// Line 1378, Address: 0x27e908, Func Offset: 0xc8
	// Line 1379, Address: 0x27e914, Func Offset: 0xd4
	// Line 1380, Address: 0x27e930, Func Offset: 0xf0
	// Line 1385, Address: 0x27e97c, Func Offset: 0x13c
	// Line 1386, Address: 0x27e980, Func Offset: 0x140
	// Line 1387, Address: 0x27e988, Func Offset: 0x148
	// Line 1389, Address: 0x27e990, Func Offset: 0x150
	// Line 1391, Address: 0x27e9a4, Func Offset: 0x164
	// Line 1392, Address: 0x27e9b0, Func Offset: 0x170
	// Line 1394, Address: 0x27e9bc, Func Offset: 0x17c
	// Line 1396, Address: 0x27e9c0, Func Offset: 0x180
	// Line 1397, Address: 0x27e9c8, Func Offset: 0x188
	// Line 1399, Address: 0x27e9f4, Func Offset: 0x1b4
	// Line 1400, Address: 0x27e9f8, Func Offset: 0x1b8
	// Line 1402, Address: 0x27ea0c, Func Offset: 0x1cc
	// Line 1404, Address: 0x27ea10, Func Offset: 0x1d0
	// Line 1407, Address: 0x27ea30, Func Offset: 0x1f0
	// Line 1412, Address: 0x27ea50, Func Offset: 0x210
	// Line 1415, Address: 0x27ea58, Func Offset: 0x218
	// Line 1417, Address: 0x27ea68, Func Offset: 0x228
	// Line 1420, Address: 0x27eab8, Func Offset: 0x278
	// Line 1425, Address: 0x27ead8, Func Offset: 0x298
	// Line 1428, Address: 0x27eae0, Func Offset: 0x2a0
	// Line 1430, Address: 0x27eaf4, Func Offset: 0x2b4
	// Line 1431, Address: 0x27eaf8, Func Offset: 0x2b8
	// Line 1433, Address: 0x27eb08, Func Offset: 0x2c8
	// Line 1434, Address: 0x27eb0c, Func Offset: 0x2cc
	// Line 1436, Address: 0x27eb18, Func Offset: 0x2d8
	// Line 1438, Address: 0x27eb20, Func Offset: 0x2e0
	// Line 1439, Address: 0x27eb30, Func Offset: 0x2f0
	// Line 1440, Address: 0x27eb3c, Func Offset: 0x2fc
	// Line 1441, Address: 0x27eb44, Func Offset: 0x304
	// Line 1442, Address: 0x27eb48, Func Offset: 0x308
	// Line 1443, Address: 0x27eb5c, Func Offset: 0x31c
	// Line 1444, Address: 0x27eb68, Func Offset: 0x328
	// Line 1446, Address: 0x27eb70, Func Offset: 0x330
	// Line 1447, Address: 0x27eb84, Func Offset: 0x344
	// Line 1448, Address: 0x27eb90, Func Offset: 0x350
	// Line 1450, Address: 0x27eb98, Func Offset: 0x358
	// Line 1451, Address: 0x27ebac, Func Offset: 0x36c
	// Line 1453, Address: 0x27ebbc, Func Offset: 0x37c
	// Line 1455, Address: 0x27ebc0, Func Offset: 0x380
	// Line 1461, Address: 0x27ebe8, Func Offset: 0x3a8
	// Line 1462, Address: 0x27ebf4, Func Offset: 0x3b4
	// Line 1463, Address: 0x27ebfc, Func Offset: 0x3bc
	// Line 1464, Address: 0x27ec08, Func Offset: 0x3c8
	// Line 1465, Address: 0x27ec14, Func Offset: 0x3d4
	// Line 1466, Address: 0x27ec18, Func Offset: 0x3d8
	// Line 1467, Address: 0x27ec28, Func Offset: 0x3e8
	// Line 1468, Address: 0x27ec3c, Func Offset: 0x3fc
	// Line 1467, Address: 0x27ec40, Func Offset: 0x400
	// Line 1468, Address: 0x27ec44, Func Offset: 0x404
	// Line 1469, Address: 0x27ec54, Func Offset: 0x414
	// Line 1473, Address: 0x27ec58, Func Offset: 0x418
	// Line 1475, Address: 0x27ec60, Func Offset: 0x420
	// Line 1474, Address: 0x27ec64, Func Offset: 0x424
	// Line 1475, Address: 0x27ec68, Func Offset: 0x428
	// Line 1474, Address: 0x27ec6c, Func Offset: 0x42c
	// Line 1476, Address: 0x27ec78, Func Offset: 0x438
	// Line 1477, Address: 0x27ec80, Func Offset: 0x440
	// Line 1478, Address: 0x27ec8c, Func Offset: 0x44c
	// Line 1479, Address: 0x27ec98, Func Offset: 0x458
	// Line 1482, Address: 0x27eca0, Func Offset: 0x460
	// Func End, Address: 0x27eccc, Func Offset: 0x48c
}

// 
// Start address: 0x27ecd0
int EnemyGhostCommonCheckLanding(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 1489, Address: 0x27ecd0, Func Offset: 0
	// Line 1491, Address: 0x27ecd8, Func Offset: 0x8
	// Line 1493, Address: 0x27ece0, Func Offset: 0x10
	// Line 1492, Address: 0x27ece4, Func Offset: 0x14
	// Line 1493, Address: 0x27ece8, Func Offset: 0x18
	// Func End, Address: 0x27ecf0, Func Offset: 0x20
}

// 
// Start address: 0x27ecf0
void EnemyGhostCommonResetHideTime(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 1499, Address: 0x27ecf0, Func Offset: 0
	// Line 1501, Address: 0x27ecf8, Func Offset: 0x8
	// Line 1502, Address: 0x27ed00, Func Offset: 0x10
	// Line 1503, Address: 0x27ed04, Func Offset: 0x14
	// Func End, Address: 0x27ed10, Func Offset: 0x20
}

// 
// Start address: 0x27ed10
float EnemyGhostCommonHideTime(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 1510, Address: 0x27ed10, Func Offset: 0
	// Line 1512, Address: 0x27ed18, Func Offset: 0x8
	// Line 1514, Address: 0x27ed20, Func Offset: 0x10
	// Line 1513, Address: 0x27ed24, Func Offset: 0x14
	// Line 1514, Address: 0x27ed28, Func Offset: 0x18
	// Func End, Address: 0x27ed30, Func Offset: 0x20
}

// 
// Start address: 0x27ed30
void EnemyGhostCommonSetDownTimer(sfObj* obj, float time)
{
	EnemyGhostCommonWork* gcw;
	// Line 1521, Address: 0x27ed30, Func Offset: 0
	// Line 1523, Address: 0x27ed3c, Func Offset: 0xc
	// Line 1524, Address: 0x27ed44, Func Offset: 0x14
	// Line 1525, Address: 0x27ed48, Func Offset: 0x18
	// Func End, Address: 0x27ed58, Func Offset: 0x28
}

// 
// Start address: 0x27ed60
void EnemyGhostCommonAddDownTimer(sfObj* obj, float time)
{
	EnemyGhostCommonWork* gcw;
	// Line 1532, Address: 0x27ed60, Func Offset: 0
	// Line 1534, Address: 0x27ed6c, Func Offset: 0xc
	// Line 1535, Address: 0x27ed74, Func Offset: 0x14
	// Line 1536, Address: 0x27ed80, Func Offset: 0x20
	// Func End, Address: 0x27ed90, Func Offset: 0x30
}

// 
// Start address: 0x27ed90
float EnemyGhostCommonDownTimer(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 1543, Address: 0x27ed90, Func Offset: 0
	// Line 1545, Address: 0x27ed98, Func Offset: 0x8
	// Line 1547, Address: 0x27eda0, Func Offset: 0x10
	// Line 1546, Address: 0x27eda4, Func Offset: 0x14
	// Line 1547, Address: 0x27eda8, Func Offset: 0x18
	// Func End, Address: 0x27edb0, Func Offset: 0x20
}

// 
// Start address: 0x27edb0
void set_block_hit(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	EnemyBlockHit block_hit;
	EnemyMeasureResult mres;
	float rate;
	float size;
	float fh;
	float ch;
	// Line 1553, Address: 0x27edb0, Func Offset: 0
	// Line 1558, Address: 0x27edc4, Func Offset: 0x14
	// Line 1559, Address: 0x27edcc, Func Offset: 0x1c
	// Line 1558, Address: 0x27edd0, Func Offset: 0x20
	// Line 1560, Address: 0x27edd4, Func Offset: 0x24
	// Line 1562, Address: 0x27edd8, Func Offset: 0x28
	// Line 1560, Address: 0x27ede0, Func Offset: 0x30
	// Line 1561, Address: 0x27ede8, Func Offset: 0x38
	// Line 1562, Address: 0x27edf0, Func Offset: 0x40
	// Line 1563, Address: 0x27edf8, Func Offset: 0x48
	// Line 1564, Address: 0x27ee04, Func Offset: 0x54
	// Line 1565, Address: 0x27ee1c, Func Offset: 0x6c
	// Line 1567, Address: 0x27ee20, Func Offset: 0x70
	// Line 1566, Address: 0x27ee24, Func Offset: 0x74
	// Line 1567, Address: 0x27ee28, Func Offset: 0x78
	// Line 1568, Address: 0x27ee38, Func Offset: 0x88
	// Line 1567, Address: 0x27ee3c, Func Offset: 0x8c
	// Line 1568, Address: 0x27ee40, Func Offset: 0x90
	// Line 1569, Address: 0x27ee54, Func Offset: 0xa4
	// Line 1570, Address: 0x27ee60, Func Offset: 0xb0
	// Line 1572, Address: 0x27ee68, Func Offset: 0xb8
	// Line 1575, Address: 0x27ee78, Func Offset: 0xc8
	// Line 1574, Address: 0x27ee7c, Func Offset: 0xcc
	// Line 1575, Address: 0x27ee80, Func Offset: 0xd0
	// Line 1574, Address: 0x27ee84, Func Offset: 0xd4
	// Line 1576, Address: 0x27ee8c, Func Offset: 0xdc
	// Line 1577, Address: 0x27ee94, Func Offset: 0xe4
	// Line 1579, Address: 0x27ee9c, Func Offset: 0xec
	// Line 1580, Address: 0x27eea8, Func Offset: 0xf8
	// Line 1583, Address: 0x27eeb0, Func Offset: 0x100
	// Func End, Address: 0x27eec8, Func Offset: 0x118
}

// 
// Start address: 0x27eed0
void EnemyGhostCommonSetBlockHit(sfObj* obj, float front, float rear)
{
	EnemyGhostCommonWork* gcw;
	// Line 1591, Address: 0x27eed0, Func Offset: 0
	// Line 1593, Address: 0x27eeec, Func Offset: 0x1c
	// Line 1594, Address: 0x27eef4, Func Offset: 0x24
	// Line 1595, Address: 0x27eef8, Func Offset: 0x28
	// Line 1596, Address: 0x27eefc, Func Offset: 0x2c
	// Line 1598, Address: 0x27ef08, Func Offset: 0x38
	// Line 1600, Address: 0x27ef10, Func Offset: 0x40
	// Func End, Address: 0x27ef28, Func Offset: 0x58
}

// 
// Start address: 0x27ef30
void EnemyGhostCommonBlockHitControl(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 1606, Address: 0x27ef30, Func Offset: 0
	// Line 1608, Address: 0x27ef40, Func Offset: 0x10
	// Line 1609, Address: 0x27ef48, Func Offset: 0x18
	// Line 1610, Address: 0x27ef64, Func Offset: 0x34
	// Line 1612, Address: 0x27ef80, Func Offset: 0x50
	// Line 1613, Address: 0x27ef8c, Func Offset: 0x5c
	// Func End, Address: 0x27efa4, Func Offset: 0x74
}

// 
// Start address: 0x27efb0
void EnemyGhostCommonDeleteBlockHit(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 1619, Address: 0x27efb0, Func Offset: 0
	// Line 1621, Address: 0x27efb8, Func Offset: 0x8
	// Line 1622, Address: 0x27efc4, Func Offset: 0x14
	// Line 1623, Address: 0x27efcc, Func Offset: 0x1c
	// Line 1624, Address: 0x27efd4, Func Offset: 0x24
	// Line 1626, Address: 0x27efd8, Func Offset: 0x28
	// Line 1627, Address: 0x27efdc, Func Offset: 0x2c
	// Func End, Address: 0x27efec, Func Offset: 0x3c
}

// 
// Start address: 0x27eff0
void EnemyGhostCommonResetMoveMode(sfObj* obj, int move_mode)
{
	EnemyGhostCommonWork* gcw;
	// Line 1636, Address: 0x27eff0, Func Offset: 0
	// Line 1638, Address: 0x27effc, Func Offset: 0xc
	// Line 1639, Address: 0x27f004, Func Offset: 0x14
	// Line 1640, Address: 0x27f008, Func Offset: 0x18
	// Func End, Address: 0x27f018, Func Offset: 0x28
}

// 
// Start address: 0x27f020
int EnemyGhostCommonMoveMode(sfObj* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 1647, Address: 0x27f020, Func Offset: 0
	// Line 1649, Address: 0x27f028, Func Offset: 0x8
	// Line 1651, Address: 0x27f030, Func Offset: 0x10
	// Line 1650, Address: 0x27f034, Func Offset: 0x14
	// Line 1651, Address: 0x27f038, Func Offset: 0x18
	// Func End, Address: 0x27f040, Func Offset: 0x20
}

// 
// Start address: 0x27f040
void EnemyEDGhostCommonSetHighSpeedMode(void* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 1655, Address: 0x27f040, Func Offset: 0
	// Line 1657, Address: 0x27f048, Func Offset: 0x8
	// Line 1658, Address: 0x27f050, Func Offset: 0x10
	// Line 1659, Address: 0x27f058, Func Offset: 0x18
	// Func End, Address: 0x27f064, Func Offset: 0x24
}

// 
// Start address: 0x27f070
void EnemyEDGhostCommonSetLowSpeedMode(void* obj)
{
	EnemyGhostCommonWork* gcw;
	// Line 1663, Address: 0x27f070, Func Offset: 0
	// Line 1665, Address: 0x27f078, Func Offset: 0x8
	// Line 1666, Address: 0x27f080, Func Offset: 0x10
	// Line 1667, Address: 0x27f088, Func Offset: 0x18
	// Func End, Address: 0x27f094, Func Offset: 0x24
}

// 
// Start address: 0x27f0a0
int EnemyGhostCommonCheckPlayerArrival(sfObj* obj, float check_height)
{
	// Line 1675, Address: 0x27f0a0, Func Offset: 0
	// Line 1676, Address: 0x27f0b8, Func Offset: 0x18
	// Line 1678, Address: 0x27f0d8, Func Offset: 0x38
	// Line 1680, Address: 0x27f0e0, Func Offset: 0x40
	// Line 1683, Address: 0x27f11c, Func Offset: 0x7c
	// Line 1684, Address: 0x27f124, Func Offset: 0x84
	// Line 1685, Address: 0x27f128, Func Offset: 0x88
	// Line 1686, Address: 0x27f130, Func Offset: 0x90
	// Func End, Address: 0x27f148, Func Offset: 0xa8
}

// 
// Start address: 0x27f150
int EnemyGhostCommonPlayerBattleHitHoldSetHeart(float time, float damage)
{
	// Line 1698, Address: 0x27f150, Func Offset: 0
	// Func End, Address: 0x27f15c, Func Offset: 0xc
}

// 
// Start address: 0x27f160
int EnemyGhostCommonPlayerBattleHitSetHeartPos(float* pos)
{
	float tpos[4];
	float hpos[4];
	float d;
	// Line 1707, Address: 0x27f160, Func Offset: 0
	// Line 1710, Address: 0x27f164, Func Offset: 0x4
	// Line 1707, Address: 0x27f168, Func Offset: 0x8
	// Line 1710, Address: 0x27f16c, Func Offset: 0xc
	// Line 1707, Address: 0x27f170, Func Offset: 0x10
	// Line 1710, Address: 0x27f178, Func Offset: 0x18
	// Line 1711, Address: 0x27f180, Func Offset: 0x20
	// Line 1712, Address: 0x27f194, Func Offset: 0x34
	// Line 1714, Address: 0x27f198, Func Offset: 0x38
	// Line 1712, Address: 0x27f1b4, Func Offset: 0x54
	// Line 1713, Address: 0x27f1b8, Func Offset: 0x58
	// Line 1714, Address: 0x27f1bc, Func Offset: 0x5c
	// Line 1713, Address: 0x27f1c0, Func Offset: 0x60
	// Line 1714, Address: 0x27f1c4, Func Offset: 0x64
	// Line 1716, Address: 0x27f1cc, Func Offset: 0x6c
	// Line 1715, Address: 0x27f1d0, Func Offset: 0x70
	// Line 1716, Address: 0x27f1d4, Func Offset: 0x74
	// Line 1715, Address: 0x27f1dc, Func Offset: 0x7c
	// Line 1716, Address: 0x27f1e0, Func Offset: 0x80
	// Line 1718, Address: 0x27f1e8, Func Offset: 0x88
	// Line 1716, Address: 0x27f1ec, Func Offset: 0x8c
	// Line 1718, Address: 0x27f1f0, Func Offset: 0x90
	// Func End, Address: 0x27f1fc, Func Offset: 0x9c
}

// 
// Start address: 0x27f200
void EnemyGhostCommonPlayerBattleHitGetHeartPos(float* pos)
{
	// Line 1725, Address: 0x27f200, Func Offset: 0
	// Func End, Address: 0x27f20c, Func Offset: 0xc
}

// 
// Start address: 0x27f210
void EnemyGhostCommonPlayerRelease()
{
	// Line 1732, Address: 0x27f210, Func Offset: 0
	// Func End, Address: 0x27f218, Func Offset: 0x8
}

