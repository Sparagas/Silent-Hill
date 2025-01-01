typedef struct EnemyKillerSubWork;
typedef struct sgBone;
typedef struct sfObj;
typedef struct EnemyFootStepData;
typedef enum BattleDamageType : unsigned char;
typedef struct EnemyKillerHand;
typedef struct EnemyFootStepsData;
typedef enum EnemyKillerAnime : unsigned char;
typedef struct EnemyBattleDamage;
typedef struct EnemyRwWork;
typedef struct EnemyFmWork;
typedef struct EnemyObjHook;
typedef struct sgIKHandle;
typedef struct EnemyRwMotionParameter;
typedef struct EnemyRwMotion;
typedef enum sgIKSolveResult : unsigned char;
typedef union _anon0;
typedef enum BattleAttackKind : unsigned char;
typedef struct EnemyFmMotion;
typedef enum EnemyFmMotionParameterType : unsigned char;
typedef struct _anon1;
typedef struct _anon2;

typedef void(*type_1)(sfObj*);
typedef void(*type_2)(sfObj*);
typedef sgIKSolveResult(*type_10)();
typedef void(*type_16)(sfObj*);
typedef void(*type_20)(sfObj*);

typedef EnemyFootStepData type_0[0];
typedef EnemyKillerHand type_3[2];
typedef float type_4[4];
typedef float type_5[4][4];
typedef EnemyRwMotionParameter type_6[0];
typedef float type_7[4];
typedef float type_8[4][2];
typedef short type_9[2];
typedef unsigned short type_11[2];
typedef char type_12[4];
typedef float type_13[4];
typedef _anon0 type_14[256];
typedef unsigned char type_15[4];
typedef float type_17[1];
typedef int type_18[1];
typedef short type_19[0];

struct EnemyKillerSubWork
{
	float head_rot[4];
	float neck_rot[4];
	EnemyKillerHand hand[2];
	int head_mode;
	EnemyRwWork* rw_work;
	EnemyFmWork* fm_work;
	sfObj* target_obj;
	EnemyObjHook* animechange_hook;
	EnemyObjHook* animeupdate_hook;
	int falling_direction;
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

struct sfObj
{
	_anon0 fwork[256];
	_anon0* work;
	void(*func)(sfObj*);
	_anon0* work_pt0;
	_anon0* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon0* sys_work;
	_anon0* scene_work;
	_anon0* event_work;
	_anon0* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct EnemyFootStepData
{
	unsigned short frame;
	char dir;
	unsigned char bone_num;
};

enum BattleDamageType : unsigned char
{
	BDT_GUN,
	BDT_REVOLVER,
	BDT_PIPE,
	BDT_PIPE_ST,
	BDT_BAT,
	BDT_BAT_ST,
	BDT_CLUB,
	BDT_CLUB_ST,
	BDT_CUTTER,
	BDT_CUTTER_ST,
	BDT_BOTTLE,
	BDT_BOTTLE_ST,
	BDT_SCOOP,
	BDT_SCOOP_ST,
	BDT_HATCHET,
	BDT_HATCHET_ST,
	BDT_PICK,
	BDT_PICK_ST,
	BDT_STUNGUN,
	BDT_CHAINSAW,
	BDT_CHAINSAW_ST,
	BDT_SMALL,
	BDT_OTHER,
	BDT_EIL_HANDBAG = 0xa,
	BDT_EIL_CLUB = 0x4,
	BDT_EIL_ROD = 0x4,
	BDT_EIL_CHAIN = 0x6,
	BDT_EIL_GUN = 0
};

struct EnemyKillerHand
{
	float arm_rot;
	float arm_rot_v;
	int rot_mode;
	sfObj* weapon_obj;
	int bullet;
	int fire_count;
};

struct EnemyFootStepsData
{
	int sound;
	int data_number;
	EnemyFootStepData data[0];
};

enum EnemyKillerAnime : unsigned char
{
	EN_KIL_ANM_NT,
	EN_KIL_ANM_WALK,
	EN_KIL_ANM_BACK,
	EN_KIL_ANM_RUN,
	EN_KIL_ANM_BAS0,
	EN_KIL_ANM_BAS1,
	EN_KIL_ANM_DMH1,
	EN_KIL_ANM_DMH2,
	EN_KIL_ANM_DMH1S,
	EN_KIL_ANM_DMH2S,
	EN_KIL_ANM_DMP1,
	EN_KIL_ANM_DMP2,
	EN_KIL_ANM_DMP1S,
	EN_KIL_ANM_DMP2S,
	EN_KIL_ANM_DMS1,
	EN_KIL_ANM_DMS2,
	EN_KIL_ANM_DMS1S,
	EN_KIL_ANM_DMS2S,
	EN_KIL_ANM_XXU,
	EN_KIL_ANM_XXD,
	EN_KIL_ANM_DNTU,
	EN_KIL_ANM_DNTD,
	EN_KIL_ANM_UPU,
	EN_KIL_ANM_UPD,
	EN_KIL_ANM_ROTU,
	EN_KIL_ANM_ROTD,
	EN_KIL_ANM_XXG,
	EN_KIL_ANM_DEADU,
	EN_KIL_ANM_DEADD,
	EN_KIL_ANM_GUNR1,
	EN_KIL_ANM_GUNR2,
	EN_KIL_ANM_GUNR3,
	EN_KIL_ANM_GUNR4,
	EN_KIL_ANM_GUNL1,
	EN_KIL_ANM_GUNL2,
	EN_KIL_ANM_GUNL3,
	EN_KIL_ANM_GUNL4,
	EN_KIL_ANM_GUNB1,
	EN_KIL_ANM_GUNB2,
	EN_KIL_ANM_GUNB3,
	EN_KIL_ANM_GUNB4,
	EN_KIL_ANM_PIPEA,
	EN_KIL_ANM_PIPEB,
	EN_KIL_ANM_CHA1,
	EN_KIL_ANM_CHA2,
	EN_KIL_ANM_CHA3,
	EN_KIL_ANM_CHB1,
	EN_KIL_ANM_CHB2,
	EN_KIL_ANM_CHB3,
	EN_KIL_ANM_TURN
};

struct EnemyBattleDamage
{
	float pos[4];
	float dir[4];
	BattleAttackKind kind;
	BattleDamageType type;
	int id;
	float damage;
	float shock;
};

struct EnemyRwWork
{
};

struct EnemyFmWork
{
};

struct EnemyObjHook
{
};

struct sgIKHandle
{
	float acceleration[4][2];
	float damping_ratio;
	sgBone* bone;
	sgBone* start;
	sgBone* end;
	sgIKSolveResult(*solver)();
	sgIKSolveResult solve_result;
	float reach_constrain;
	float close_constrain;
	sgIKHandle* next;
};

struct EnemyRwMotionParameter
{
	short frame;
	short cond;
};

struct EnemyRwMotion
{
	short right_foot;
	short left_foot;
	float rate;
	EnemyRwMotionParameter param[0];
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

union _anon0
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

enum BattleAttackKind : unsigned char
{
	BAK_NOTHING,
	BAK_UNDEFINED,
	BAK_PLAYER_TABLE_START,
	BAK_PLAYER_HAND_GUN = 0x2,
	BAK_PLAYER_REVOLVER,
	BAK_PLAYER_PIPE,
	BAK_PLAYER_PIPE_ST,
	BAK_PLAYER_CUTTER,
	BAK_PLAYER_CUTTER_ST,
	BAK_PLAYER_BAT,
	BAK_PLAYER_BAT_ST,
	BAK_PLAYER_DRIVER,
	BAK_PLAYER_DRIVER_ST,
	BAK_PLAYER_SPOON,
	BAK_PLAYER_SPOON_ST,
	BAK_PLAYER_MID_MASHY,
	BAK_PLAYER_MID_MASHY_ST,
	BAK_PLAYER_MASHY_IRON,
	BAK_PLAYER_MASHY_IRON_ST,
	BAK_PLAYER_MASHY,
	BAK_PLAYER_MASHY_ST,
	BAK_PLAYER_SPADE_MASHY,
	BAK_PLAYER_SPADE_MASHY_ST,
	BAK_PLAYER_MASHY_NIBLICK,
	BAK_PLAYER_MASHY_NIBLICK_ST,
	BAK_PLAYER_PITCHER,
	BAK_PLAYER_PITCHER_ST,
	BAK_PLAYER_NIBLICK,
	BAK_PLAYER_NIBLICK_ST,
	BAK_PLAYER_PITCHING_WEDGE,
	BAK_PLAYER_PITCHING_WEDGE_ST,
	BAK_PLAYER_SAND_WEDGE,
	BAK_PLAYER_SAND_WEDGE_ST,
	BAK_PLAYER_PUTTER,
	BAK_PLAYER_PUTTER_ST,
	BAK_PLAYER_BOTTLE,
	BAK_PLAYER_BROKEN_BOTTLE,
	BAK_PLAYER_SCOOP,
	BAK_PLAYER_SCOOP_ST,
	BAK_PLAYER_HATCHET,
	BAK_PLAYER_HATCHET_ST,
	BAK_PLAYER_PICK,
	BAK_PLAYER_PICK_ST,
	BAK_PLAYER_STUNGUN,
	BAK_PLAYER_SPRAY,
	BAK_PLAYER_CHAINSAW,
	BAK_PLAYER_CHAINSAW_ST,
	BAK_PLAYER_WOOD_STICK,
	BAK_PLAYER_SILVER_BULLET,
	BAK_PLAYER_FINISH,
	BAK_PLAYER_SCOOP_FINISH,
	BAK_PLAYER_PICK_FINISH,
	BAK_PLAYER_CHAINSAW_FINISH,
	BAK_PLAYER_EIL_HANDBAG_N,
	BAK_PLAYER_EIL_HANDBAG_3_1,
	BAK_PLAYER_EIL_HANDBAG_3_2,
	BAK_PLAYER_EIL_HANDBAG_3_3,
	BAK_PLAYER_EIL_HANDBAG_FINISH,
	BAK_PLAYER_EIL_CLUB_N,
	BAK_PLAYER_EIL_CLUB_3_1,
	BAK_PLAYER_EIL_CLUB_3_2,
	BAK_PLAYER_EIL_CLUB_3_3,
	BAK_PLAYER_EIL_CLUB_FINISH,
	BAK_PLAYER_EIL_ROD_N,
	BAK_PLAYER_EIL_ROD_3_1,
	BAK_PLAYER_EIL_ROD_3_2,
	BAK_PLAYER_EIL_ROD_3_3,
	BAK_PLAYER_EIL_ROD_FINISH,
	BAK_PLAYER_EIL_CHAIN_N,
	BAK_PLAYER_EIL_CHAIN_3_1,
	BAK_PLAYER_EIL_CHAIN_3_2,
	BAK_PLAYER_EIL_CHAIN_3_3,
	BAK_PLAYER_EIL_CHAIN_FINISH,
	BAK_PLAYER_EIL_GUN_N,
	BAK_PLAYER_TABLE_END = 0x48,
	BAK_ENEMY_TABLE_START,
	BAK_MUSH_DEATH = 0x49,
	BAK_BUZZ_BLOODSUCK,
	BAK_BUZZ_PECK,
	BAK_BUZZ_DIVE,
	BAK_KABE_STRIKE,
	BAK_KABE_BRINGDOWN,
	BAK_KABE_SIDEBLOW,
	BAK_KABE_HEADBUTT,
	BAK_WHEEL_DASH,
	BAK_JIN_SCRATCH,
	BAK_JIN_STRIKE,
	BAK_JIN_STAB,
	BAK_JIN_BRINGDOWN,
	BAK_TWN_STRIKE,
	BAK_TWN_JUMP,
	BAK_TWN_TURN,
	BAK_HIL_WALL,
	BAK_HIL_FLOOR,
	BAK_HYENA_DASH,
	BAK_MULTI_HEADBUTT,
	BAK_FLAMES_ATT1,
	BAK_FLAMES_ATT2,
	BAK_FAT_SING,
	BAK_FAT_DASH,
	BAK_FAT_DASH2,
	BAK_FAT_BOMB,
	BAK_SCR_ATT1,
	BAK_SCR_ATT2,
	BAK_SCR_ATT4,
	BAK_KILLER_SHOOT,
	BAK_KILLER_RAPIDFIRE,
	BAK_KILLER_PIPE,
	BAK_KILLER_PIPE_ST,
	BAK_KILLER_CHAINSAW_STAB,
	BAK_KILLER_CHAINSAW_SHAKE,
	BAK_KILLER_BLOWOFF,
	BAK_ENEMY_TABLE_END = 0x6c,
	BAK_OTHER_TABLE_START,
	BAK_GHOSTSTAIN_FLICK = 0x6d,
	BAK_OTHER_TABLE_END = 0x6d,
	BAK_MAX_NUMBER
};

struct EnemyFmMotion
{
	int max_frame;
	EnemyFmMotionParameterType param_type;
	short param[0];
};

enum EnemyFmMotionParameterType : unsigned char
{
	ENEMY_FM_PARAM_Z_ONLY,
	ENEMY_FM_PARAM_X_ONLY,
	ENEMY_FM_PARAM_XZ,
	ENEMY_FM_PARAM_XYZ
};

struct _anon1
{
	float bmin[4];
	float bmax[4];
};

struct _anon2
{
	float mat[4][4];
	float half_w[4];
};

float right_gun_rot[4];
float chain_saw_rot[4];
float left_gun_rot[4];
EnemyFootStepsData fs_walk;
EnemyFmMotion fm_back;
EnemyFootStepsData fs_back;
EnemyFootStepsData fs_run;
EnemyFootStepsData fs_dmh1s;
EnemyFootStepsData fs_dmh2s;
EnemyFootStepsData fs_dms1s;
EnemyFootStepsData fs_dms2s;
EnemyFootStepsData fs_xxu;
EnemyFootStepsData fs_xxd;
EnemyRwMotion rw_left;
EnemyRwMotion rw_upu;
EnemyRwMotion rw_upd;
EnemyRwMotion rw_xxg;
EnemyFootStepsData fs_xxg;
float sg_vector_unit_x[4];
float sg_vector_unit_y[4];
void(*anime_update_hook)(sfObj*);
void(*anime_change_hook)(sfObj*);
float effect_pos[4];

int EnemyKillerCheckGun(sfObj* obj);
void anime_change_hook(sfObj* obj);
void head_rot(sgBone* bone, float* neck_rot, float* head_rot);
void arm_rot(sfObj* obj, int shoulder_bone, int ik_bone, float rot, float rot_v);
void anime_update_hook(sfObj* obj);
void EnemyKillerSubConstruct(sfObj* obj);
void EnemyKillerSubDestruct(sfObj* obj);
void EnemyKillerWeaponDraw(sfObj* obj);
void EnemyKillerWeaponHidden(sfObj* obj);
void EnemyKillerSetHit(sfObj* obj);
void EnemyKillerSetLieHit(sfObj* obj);
void EnemyKillerEraseHit(sfObj* obj);
void EnemyKillerSetLighting(sfObj* obj);
void EnemyKillerSetTargetObj(sfObj* obj, sfObj* target);
sfObj* EnemyKillerTargetObj(sfObj* obj);
void EnemyKillerHeadControlStart(sfObj* obj);
void EnemyKillerHeadControlEnd(sfObj* obj);
void EnemyKillerHeadControlEndForce(sfObj* obj);
void EnemyKillerHeadControl(sfObj* obj);
void EnemyKillerRightHandControlStart(sfObj* obj);
void EnemyKillerLeftHandControlStart(sfObj* obj);
void EnemyKillerHandControlWait(sfObj* obj);
void EnemyKillerHandControlRestart(sfObj* obj);
void EnemyKillerHandControlEnd(sfObj* obj);
void EnemyKillerHandControlEndForce(sfObj* obj);
void hand_control(sfObj* obj, EnemyKillerHand* pkh);
void EnemyKillerHandControl(sfObj* obj);
int EnemyKillerCanAttack();
int EnemyKillerCanFinish();
int EnemyKillerCheckShootRange(sfObj* obj);
void EnemyKillerReload(sfObj* obj);
int EnemyKillerBulletRest(sfObj* obj, int lr);
int EnemyKillerCanUseWeapon(sfObj* obj);
int EnemyKillerCanUseGun(sfObj* obj);
void EnemyKillerShoot(sfObj* obj, int hand, BattleAttackKind kind);
void EnemyKillerSubMove(sfObj* obj);
void EnemyKillerAnimeSet(sfObj* obj, EnemyKillerAnime anime);
void EnemyKillerSetDamageMotion(sfObj* obj, EnemyBattleDamage* bd);
void set_gun_effect(sgBone* bone, int count);
void EnemyKillerSubDraw(sfObj* obj);
void EnemyKillerDamageSoundCall(sfObj* obj, EnemyBattleDamage* bd);
void EnemyKillerReflectSoundCall(sfObj* obj, EnemyBattleDamage* bd);

// 
// Start address: 0x32fbe0
int EnemyKillerCheckGun(sfObj* obj)
{
	// Line 435, Address: 0x32fbe0, Func Offset: 0
	// Line 436, Address: 0x32fbe8, Func Offset: 0x8
	// Line 440, Address: 0x32fc18, Func Offset: 0x38
	// Line 442, Address: 0x32fc20, Func Offset: 0x40
	// Line 443, Address: 0x32fc28, Func Offset: 0x48
	// Func End, Address: 0x32fc34, Func Offset: 0x54
}

// 
// Start address: 0x32fc40
void anime_change_hook(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	sgIKHandle* ikh;
	// Line 447, Address: 0x32fc40, Func Offset: 0
	// Line 450, Address: 0x32fc50, Func Offset: 0x10
	// Line 451, Address: 0x32fc5c, Func Offset: 0x1c
	// Line 453, Address: 0x32fc74, Func Offset: 0x34
	// Line 455, Address: 0x32fc8c, Func Offset: 0x4c
	// Line 456, Address: 0x32fca4, Func Offset: 0x64
	// Line 457, Address: 0x32fcb8, Func Offset: 0x78
	// Line 458, Address: 0x32fccc, Func Offset: 0x8c
	// Line 459, Address: 0x32fce4, Func Offset: 0xa4
	// Line 460, Address: 0x32fcf8, Func Offset: 0xb8
	// Line 461, Address: 0x32fd0c, Func Offset: 0xcc
	// Func End, Address: 0x32fd20, Func Offset: 0xe0
}

// 
// Start address: 0x32fd20
void head_rot(sgBone* bone, float* neck_rot, float* head_rot)
{
	float trot[4];
	float rrot[4];
	sgBone* pbone;
	sgBone* gbone;
	// Line 466, Address: 0x32fd20, Func Offset: 0
	// Line 469, Address: 0x32fd40, Func Offset: 0x20
	// Line 470, Address: 0x32fd4c, Func Offset: 0x2c
	// Line 471, Address: 0x32fd54, Func Offset: 0x34
	// Line 472, Address: 0x32fd60, Func Offset: 0x40
	// Line 473, Address: 0x32fd6c, Func Offset: 0x4c
	// Line 474, Address: 0x32fd7c, Func Offset: 0x5c
	// Line 475, Address: 0x32fd88, Func Offset: 0x68
	// Line 476, Address: 0x32fd94, Func Offset: 0x74
	// Line 477, Address: 0x32fda4, Func Offset: 0x84
	// Line 478, Address: 0x32fdb0, Func Offset: 0x90
	// Func End, Address: 0x32fdcc, Func Offset: 0xac
}

// 
// Start address: 0x32fdd0
void arm_rot(sfObj* obj, int shoulder_bone, int ik_bone, float rot, float rot_v)
{
	sgBone* bone;
	sgIKHandle* ikh;
	float* rpos;
	float vec[4];
	float trot[4];
	float trot1[4];
	float trot2[4];
	float brot[4];
	float rrot[4];
	// Line 483, Address: 0x32fdd0, Func Offset: 0
	// Line 489, Address: 0x32fdfc, Func Offset: 0x2c
	// Line 490, Address: 0x32fe08, Func Offset: 0x38
	// Line 491, Address: 0x32fe14, Func Offset: 0x44
	// Line 492, Address: 0x32fe20, Func Offset: 0x50
	// Line 493, Address: 0x32fe2c, Func Offset: 0x5c
	// Line 494, Address: 0x32fe40, Func Offset: 0x70
	// Line 495, Address: 0x32fe54, Func Offset: 0x84
	// Line 496, Address: 0x32fe64, Func Offset: 0x94
	// Line 497, Address: 0x32fe74, Func Offset: 0xa4
	// Line 498, Address: 0x32fe84, Func Offset: 0xb4
	// Line 499, Address: 0x32fe9c, Func Offset: 0xcc
	// Line 500, Address: 0x32fea8, Func Offset: 0xd8
	// Line 501, Address: 0x32fec0, Func Offset: 0xf0
	// Line 502, Address: 0x32fed0, Func Offset: 0x100
	// Line 503, Address: 0x32feec, Func Offset: 0x11c
	// Line 504, Address: 0x32fef8, Func Offset: 0x128
	// Line 505, Address: 0x32ff10, Func Offset: 0x140
	// Line 506, Address: 0x32ff2c, Func Offset: 0x15c
	// Line 507, Address: 0x32ff3c, Func Offset: 0x16c
	// Line 508, Address: 0x32ff48, Func Offset: 0x178
	// Func End, Address: 0x32ff6c, Func Offset: 0x19c
}

// 
// Start address: 0x32ff70
void anime_update_hook(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	sgBone* bone;
	// Line 512, Address: 0x32ff70, Func Offset: 0
	// Line 515, Address: 0x32ff84, Func Offset: 0x14
	// Line 517, Address: 0x32ff90, Func Offset: 0x20
	// Line 518, Address: 0x32ff9c, Func Offset: 0x2c
	// Line 519, Address: 0x32ffa4, Func Offset: 0x34
	// Line 520, Address: 0x32ffb4, Func Offset: 0x44
	// Line 522, Address: 0x32ffb8, Func Offset: 0x48
	// Line 523, Address: 0x32ffc4, Func Offset: 0x54
	// Line 525, Address: 0x32ffdc, Func Offset: 0x6c
	// Line 526, Address: 0x32ffe0, Func Offset: 0x70
	// Line 527, Address: 0x32fff0, Func Offset: 0x80
	// Line 531, Address: 0x330028, Func Offset: 0xb8
	// Line 532, Address: 0x330038, Func Offset: 0xc8
	// Line 534, Address: 0x330040, Func Offset: 0xd0
	// Line 538, Address: 0x330050, Func Offset: 0xe0
	// Line 539, Address: 0x33005c, Func Offset: 0xec
	// Line 541, Address: 0x330074, Func Offset: 0x104
	// Line 542, Address: 0x330078, Func Offset: 0x108
	// Line 543, Address: 0x330084, Func Offset: 0x114
	// Line 544, Address: 0x330094, Func Offset: 0x124
	// Func End, Address: 0x3300ac, Func Offset: 0x13c
}

// 
// Start address: 0x3300b0
void EnemyKillerSubConstruct(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	sgBone* bone;
	// Line 548, Address: 0x3300b0, Func Offset: 0
	// Line 551, Address: 0x3300c4, Func Offset: 0x14
	// Line 552, Address: 0x3300d0, Func Offset: 0x20
	// Line 553, Address: 0x3300dc, Func Offset: 0x2c
	// Line 555, Address: 0x3300f0, Func Offset: 0x40
	// Line 556, Address: 0x3300fc, Func Offset: 0x4c
	// Line 559, Address: 0x330110, Func Offset: 0x60
	// Line 561, Address: 0x33013c, Func Offset: 0x8c
	// Line 562, Address: 0x330140, Func Offset: 0x90
	// Line 563, Address: 0x330154, Func Offset: 0xa4
	// Line 564, Address: 0x330160, Func Offset: 0xb0
	// Line 565, Address: 0x330168, Func Offset: 0xb8
	// Line 567, Address: 0x330170, Func Offset: 0xc0
	// Line 568, Address: 0x33017c, Func Offset: 0xcc
	// Line 569, Address: 0x330184, Func Offset: 0xd4
	// Line 572, Address: 0x33018c, Func Offset: 0xdc
	// Line 573, Address: 0x330190, Func Offset: 0xe0
	// Line 574, Address: 0x33019c, Func Offset: 0xec
	// Line 575, Address: 0x3301a4, Func Offset: 0xf4
	// Line 576, Address: 0x3301ac, Func Offset: 0xfc
	// Line 577, Address: 0x3301b0, Func Offset: 0x100
	// Line 578, Address: 0x3301bc, Func Offset: 0x10c
	// Line 581, Address: 0x3301c8, Func Offset: 0x118
	// Line 583, Address: 0x3301e0, Func Offset: 0x130
	// Line 586, Address: 0x3301f8, Func Offset: 0x148
	// Line 590, Address: 0x330228, Func Offset: 0x178
	// Line 591, Address: 0x33022c, Func Offset: 0x17c
	// Line 592, Address: 0x330234, Func Offset: 0x184
	// Line 593, Address: 0x330238, Func Offset: 0x188
	// Line 594, Address: 0x33023c, Func Offset: 0x18c
	// Line 595, Address: 0x330240, Func Offset: 0x190
	// Line 599, Address: 0x330248, Func Offset: 0x198
	// Line 596, Address: 0x33024c, Func Offset: 0x19c
	// Line 599, Address: 0x330250, Func Offset: 0x1a0
	// Line 596, Address: 0x330254, Func Offset: 0x1a4
	// Line 599, Address: 0x330258, Func Offset: 0x1a8
	// Line 600, Address: 0x330264, Func Offset: 0x1b4
	// Line 601, Address: 0x330270, Func Offset: 0x1c0
	// Line 602, Address: 0x330278, Func Offset: 0x1c8
	// Line 604, Address: 0x330284, Func Offset: 0x1d4
	// Line 605, Address: 0x33028c, Func Offset: 0x1dc
	// Line 606, Address: 0x33029c, Func Offset: 0x1ec
	// Func End, Address: 0x3302b4, Func Offset: 0x204
}

// 
// Start address: 0x3302c0
void EnemyKillerSubDestruct(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	// Line 610, Address: 0x3302c0, Func Offset: 0
	// Line 612, Address: 0x3302c8, Func Offset: 0x8
	// Line 613, Address: 0x3302d4, Func Offset: 0x14
	// Line 614, Address: 0x3302dc, Func Offset: 0x1c
	// Line 615, Address: 0x3302e4, Func Offset: 0x24
	// Line 614, Address: 0x3302e8, Func Offset: 0x28
	// Line 616, Address: 0x3302ec, Func Offset: 0x2c
	// Line 617, Address: 0x3302f4, Func Offset: 0x34
	// Line 618, Address: 0x3302fc, Func Offset: 0x3c
	// Line 619, Address: 0x330300, Func Offset: 0x40
	// Func End, Address: 0x330310, Func Offset: 0x50
}

// 
// Start address: 0x330310
void EnemyKillerWeaponDraw(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	// Line 623, Address: 0x330310, Func Offset: 0
	// Line 625, Address: 0x330318, Func Offset: 0x8
	// Line 626, Address: 0x330324, Func Offset: 0x14
	// Line 627, Address: 0x33032c, Func Offset: 0x1c
	// Line 628, Address: 0x330334, Func Offset: 0x24
	// Line 627, Address: 0x330338, Func Offset: 0x28
	// Line 629, Address: 0x33033c, Func Offset: 0x2c
	// Line 630, Address: 0x330344, Func Offset: 0x34
	// Line 631, Address: 0x33034c, Func Offset: 0x3c
	// Line 632, Address: 0x330350, Func Offset: 0x40
	// Func End, Address: 0x330360, Func Offset: 0x50
}

// 
// Start address: 0x330360
void EnemyKillerWeaponHidden(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	// Line 636, Address: 0x330360, Func Offset: 0
	// Line 638, Address: 0x330368, Func Offset: 0x8
	// Line 639, Address: 0x330374, Func Offset: 0x14
	// Line 640, Address: 0x33037c, Func Offset: 0x1c
	// Line 641, Address: 0x330384, Func Offset: 0x24
	// Line 640, Address: 0x330388, Func Offset: 0x28
	// Line 642, Address: 0x33038c, Func Offset: 0x2c
	// Line 643, Address: 0x330394, Func Offset: 0x34
	// Line 644, Address: 0x33039c, Func Offset: 0x3c
	// Line 645, Address: 0x3303a0, Func Offset: 0x40
	// Func End, Address: 0x3303b0, Func Offset: 0x50
}

// 
// Start address: 0x3303b0
void EnemyKillerSetHit(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	_anon2 obb;
	_anon1 aabb;
	// Line 649, Address: 0x3303b0, Func Offset: 0
	// Line 653, Address: 0x3303bc, Func Offset: 0xc
	// Line 654, Address: 0x3303c4, Func Offset: 0x14
	// Line 655, Address: 0x3303d0, Func Offset: 0x20
	// Line 656, Address: 0x3303d4, Func Offset: 0x24
	// Line 657, Address: 0x3303dc, Func Offset: 0x2c
	// Line 656, Address: 0x3303e0, Func Offset: 0x30
	// Line 657, Address: 0x3303e4, Func Offset: 0x34
	// Line 656, Address: 0x3303e8, Func Offset: 0x38
	// Line 657, Address: 0x3303ec, Func Offset: 0x3c
	// Line 658, Address: 0x3303f0, Func Offset: 0x40
	// Line 657, Address: 0x3303f4, Func Offset: 0x44
	// Line 659, Address: 0x3303f8, Func Offset: 0x48
	// Line 660, Address: 0x330404, Func Offset: 0x54
	// Line 661, Address: 0x33041c, Func Offset: 0x6c
	// Func End, Address: 0x33042c, Func Offset: 0x7c
}

// 
// Start address: 0x330430
void EnemyKillerSetLieHit(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	_anon2 obb;
	_anon1 aabb;
	// Line 665, Address: 0x330430, Func Offset: 0
	// Line 669, Address: 0x33043c, Func Offset: 0xc
	// Line 670, Address: 0x330444, Func Offset: 0x14
	// Line 671, Address: 0x330450, Func Offset: 0x20
	// Line 672, Address: 0x330454, Func Offset: 0x24
	// Line 673, Address: 0x33045c, Func Offset: 0x2c
	// Line 672, Address: 0x330460, Func Offset: 0x30
	// Line 673, Address: 0x330464, Func Offset: 0x34
	// Line 672, Address: 0x330468, Func Offset: 0x38
	// Line 674, Address: 0x33046c, Func Offset: 0x3c
	// Line 673, Address: 0x330470, Func Offset: 0x40
	// Line 674, Address: 0x330474, Func Offset: 0x44
	// Line 673, Address: 0x330478, Func Offset: 0x48
	// Line 675, Address: 0x33047c, Func Offset: 0x4c
	// Line 676, Address: 0x330488, Func Offset: 0x58
	// Line 677, Address: 0x3304a0, Func Offset: 0x70
	// Func End, Address: 0x3304b0, Func Offset: 0x80
}

// 
// Start address: 0x3304b0
void EnemyKillerEraseHit(sfObj* obj)
{
	// Line 682, Address: 0x3304b0, Func Offset: 0
	// Func End, Address: 0x3304bc, Func Offset: 0xc
}

// 
// Start address: 0x3304c0
void EnemyKillerSetLighting(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	// Line 687, Address: 0x3304c0, Func Offset: 0
	// Line 689, Address: 0x3304d0, Func Offset: 0x10
	// Line 690, Address: 0x3304dc, Func Offset: 0x1c
	// Line 691, Address: 0x3304ec, Func Offset: 0x2c
	// Line 692, Address: 0x3304fc, Func Offset: 0x3c
	// Line 693, Address: 0x330500, Func Offset: 0x40
	// Line 694, Address: 0x33050c, Func Offset: 0x4c
	// Line 695, Address: 0x330518, Func Offset: 0x58
	// Func End, Address: 0x33052c, Func Offset: 0x6c
}

// 
// Start address: 0x330530
void EnemyKillerSetTargetObj(sfObj* obj, sfObj* target)
{
	EnemyKillerSubWork* ew;
	// Line 699, Address: 0x330530, Func Offset: 0
	// Line 701, Address: 0x33053c, Func Offset: 0xc
	// Line 702, Address: 0x330544, Func Offset: 0x14
	// Line 703, Address: 0x330548, Func Offset: 0x18
	// Func End, Address: 0x330558, Func Offset: 0x28
}

// 
// Start address: 0x330560
sfObj* EnemyKillerTargetObj(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	// Line 707, Address: 0x330560, Func Offset: 0
	// Line 709, Address: 0x330568, Func Offset: 0x8
	// Line 711, Address: 0x330570, Func Offset: 0x10
	// Line 710, Address: 0x330574, Func Offset: 0x14
	// Line 711, Address: 0x330578, Func Offset: 0x18
	// Func End, Address: 0x330580, Func Offset: 0x20
}

// 
// Start address: 0x330580
void EnemyKillerHeadControlStart(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	sgBone* bone;
	// Line 715, Address: 0x330580, Func Offset: 0
	// Line 718, Address: 0x330590, Func Offset: 0x10
	// Line 719, Address: 0x330598, Func Offset: 0x18
	// Line 720, Address: 0x3305a4, Func Offset: 0x24
	// Line 721, Address: 0x3305b4, Func Offset: 0x34
	// Line 722, Address: 0x3305c0, Func Offset: 0x40
	// Line 723, Address: 0x3305c8, Func Offset: 0x48
	// Line 724, Address: 0x3305d4, Func Offset: 0x54
	// Line 725, Address: 0x3305d8, Func Offset: 0x58
	// Line 726, Address: 0x3305e0, Func Offset: 0x60
	// Func End, Address: 0x3305f4, Func Offset: 0x74
}

// 
// Start address: 0x330600
void EnemyKillerHeadControlEnd(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	// Line 730, Address: 0x330600, Func Offset: 0
	// Line 732, Address: 0x330608, Func Offset: 0x8
	// Line 733, Address: 0x330610, Func Offset: 0x10
	// Line 734, Address: 0x330620, Func Offset: 0x20
	// Line 735, Address: 0x330624, Func Offset: 0x24
	// Line 736, Address: 0x330628, Func Offset: 0x28
	// Func End, Address: 0x330634, Func Offset: 0x34
}

// 
// Start address: 0x330640
void EnemyKillerHeadControlEndForce(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	// Line 740, Address: 0x330640, Func Offset: 0
	// Line 742, Address: 0x330648, Func Offset: 0x8
	// Line 743, Address: 0x330650, Func Offset: 0x10
	// Line 744, Address: 0x330654, Func Offset: 0x14
	// Func End, Address: 0x330660, Func Offset: 0x20
}

// 
// Start address: 0x330660
void EnemyKillerHeadControl(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	float pos[4];
	float ppos[4];
	float vec[4];
	float rot[4];
	float trot[4];
	float rrot[4];
	float dt;
	// Line 748, Address: 0x330660, Func Offset: 0
	// Line 753, Address: 0x330674, Func Offset: 0x14
	// Line 754, Address: 0x330680, Func Offset: 0x20
	// Line 755, Address: 0x33068c, Func Offset: 0x2c
	// Line 756, Address: 0x330698, Func Offset: 0x38
	// Line 755, Address: 0x3306a4, Func Offset: 0x44
	// Line 756, Address: 0x3306a8, Func Offset: 0x48
	// Line 757, Address: 0x3306b0, Func Offset: 0x50
	// Line 758, Address: 0x3306bc, Func Offset: 0x5c
	// Line 757, Address: 0x3306c0, Func Offset: 0x60
	// Line 758, Address: 0x3306c8, Func Offset: 0x68
	// Line 760, Address: 0x3306f0, Func Offset: 0x90
	// Line 762, Address: 0x3306f8, Func Offset: 0x98
	// Line 763, Address: 0x330704, Func Offset: 0xa4
	// Line 764, Address: 0x330714, Func Offset: 0xb4
	// Line 765, Address: 0x330720, Func Offset: 0xc0
	// Line 766, Address: 0x330728, Func Offset: 0xc8
	// Line 767, Address: 0x33072c, Func Offset: 0xcc
	// Line 768, Address: 0x330730, Func Offset: 0xd0
	// Line 771, Address: 0x330738, Func Offset: 0xd8
	// Line 773, Address: 0x33074c, Func Offset: 0xec
	// Line 774, Address: 0x330750, Func Offset: 0xf0
	// Line 775, Address: 0x330770, Func Offset: 0x110
	// Line 776, Address: 0x33077c, Func Offset: 0x11c
	// Line 777, Address: 0x33078c, Func Offset: 0x12c
	// Line 778, Address: 0x3307a8, Func Offset: 0x148
	// Line 779, Address: 0x3307b4, Func Offset: 0x154
	// Line 780, Address: 0x3307cc, Func Offset: 0x16c
	// Line 781, Address: 0x3307dc, Func Offset: 0x17c
	// Line 782, Address: 0x3307f0, Func Offset: 0x190
	// Line 783, Address: 0x33080c, Func Offset: 0x1ac
	// Line 784, Address: 0x330814, Func Offset: 0x1b4
	// Line 785, Address: 0x330818, Func Offset: 0x1b8
	// Line 786, Address: 0x330834, Func Offset: 0x1d4
	// Line 790, Address: 0x330838, Func Offset: 0x1d8
	// Line 791, Address: 0x330854, Func Offset: 0x1f4
	// Func End, Address: 0x330870, Func Offset: 0x210
}

// 
// Start address: 0x330870
void EnemyKillerRightHandControlStart(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	// Line 795, Address: 0x330870, Func Offset: 0
	// Line 797, Address: 0x330878, Func Offset: 0x8
	// Line 798, Address: 0x330880, Func Offset: 0x10
	// Line 799, Address: 0x33088c, Func Offset: 0x1c
	// Line 800, Address: 0x330890, Func Offset: 0x20
	// Line 801, Address: 0x330894, Func Offset: 0x24
	// Line 802, Address: 0x330898, Func Offset: 0x28
	// Line 803, Address: 0x3308a0, Func Offset: 0x30
	// Func End, Address: 0x3308ac, Func Offset: 0x3c
}

// 
// Start address: 0x3308b0
void EnemyKillerLeftHandControlStart(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	// Line 807, Address: 0x3308b0, Func Offset: 0
	// Line 809, Address: 0x3308b8, Func Offset: 0x8
	// Line 810, Address: 0x3308c0, Func Offset: 0x10
	// Line 811, Address: 0x3308cc, Func Offset: 0x1c
	// Line 812, Address: 0x3308d0, Func Offset: 0x20
	// Line 813, Address: 0x3308d4, Func Offset: 0x24
	// Line 814, Address: 0x3308d8, Func Offset: 0x28
	// Line 815, Address: 0x3308e0, Func Offset: 0x30
	// Func End, Address: 0x3308ec, Func Offset: 0x3c
}

// 
// Start address: 0x3308f0
void EnemyKillerHandControlWait(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	// Line 819, Address: 0x3308f0, Func Offset: 0
	// Line 821, Address: 0x3308f8, Func Offset: 0x8
	// Line 822, Address: 0x330900, Func Offset: 0x10
	// Line 823, Address: 0x330910, Func Offset: 0x20
	// Line 824, Address: 0x330914, Func Offset: 0x24
	// Line 825, Address: 0x330918, Func Offset: 0x28
	// Line 826, Address: 0x330928, Func Offset: 0x38
	// Line 827, Address: 0x33092c, Func Offset: 0x3c
	// Line 828, Address: 0x330930, Func Offset: 0x40
	// Func End, Address: 0x33093c, Func Offset: 0x4c
}

// 
// Start address: 0x330940
void EnemyKillerHandControlRestart(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	// Line 832, Address: 0x330940, Func Offset: 0
	// Line 834, Address: 0x330948, Func Offset: 0x8
	// Line 835, Address: 0x330950, Func Offset: 0x10
	// Line 836, Address: 0x330960, Func Offset: 0x20
	// Line 837, Address: 0x330964, Func Offset: 0x24
	// Line 838, Address: 0x330968, Func Offset: 0x28
	// Line 839, Address: 0x330978, Func Offset: 0x38
	// Line 840, Address: 0x33097c, Func Offset: 0x3c
	// Line 841, Address: 0x330980, Func Offset: 0x40
	// Func End, Address: 0x33098c, Func Offset: 0x4c
}

// 
// Start address: 0x330990
void EnemyKillerHandControlEnd(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	// Line 845, Address: 0x330990, Func Offset: 0
	// Line 847, Address: 0x330998, Func Offset: 0x8
	// Line 848, Address: 0x3309a4, Func Offset: 0x14
	// Line 849, Address: 0x3309b8, Func Offset: 0x28
	// Line 851, Address: 0x3309c4, Func Offset: 0x34
	// Line 852, Address: 0x3309d8, Func Offset: 0x48
	// Line 854, Address: 0x3309e0, Func Offset: 0x50
	// Func End, Address: 0x3309ec, Func Offset: 0x5c
}

// 
// Start address: 0x3309f0
void EnemyKillerHandControlEndForce(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	// Line 858, Address: 0x3309f0, Func Offset: 0
	// Line 860, Address: 0x3309f8, Func Offset: 0x8
	// Line 861, Address: 0x330a00, Func Offset: 0x10
	// Line 862, Address: 0x330a04, Func Offset: 0x14
	// Line 863, Address: 0x330a08, Func Offset: 0x18
	// Func End, Address: 0x330a14, Func Offset: 0x24
}

// 
// Start address: 0x330a20
void hand_control(sfObj* obj, EnemyKillerHand* pkh)
{
	EnemyKillerSubWork* ew;
	float* pos;
	float tpos[4];
	float vec[4];
	float rrot[4];
	float quat[4];
	float r;
	float tr;
	float dt;
	int f;
	// Line 867, Address: 0x330a20, Func Offset: 0
	// Line 873, Address: 0x330a48, Func Offset: 0x28
	// Line 874, Address: 0x330a54, Func Offset: 0x34
	// Line 875, Address: 0x330a64, Func Offset: 0x44
	// Line 877, Address: 0x330a6c, Func Offset: 0x4c
	// Line 878, Address: 0x330a70, Func Offset: 0x50
	// Line 879, Address: 0x330a90, Func Offset: 0x70
	// Line 880, Address: 0x330a98, Func Offset: 0x78
	// Line 882, Address: 0x330aa4, Func Offset: 0x84
	// Line 880, Address: 0x330aa8, Func Offset: 0x88
	// Line 881, Address: 0x330ab0, Func Offset: 0x90
	// Line 882, Address: 0x330ab4, Func Offset: 0x94
	// Line 883, Address: 0x330ac0, Func Offset: 0xa0
	// Line 884, Address: 0x330ac8, Func Offset: 0xa8
	// Line 885, Address: 0x330ad4, Func Offset: 0xb4
	// Line 886, Address: 0x330ae4, Func Offset: 0xc4
	// Line 887, Address: 0x330b00, Func Offset: 0xe0
	// Line 889, Address: 0x330b14, Func Offset: 0xf4
	// Line 890, Address: 0x330b28, Func Offset: 0x108
	// Line 891, Address: 0x330b30, Func Offset: 0x110
	// Line 892, Address: 0x330b44, Func Offset: 0x124
	// Line 893, Address: 0x330b5c, Func Offset: 0x13c
	// Line 894, Address: 0x330b60, Func Offset: 0x140
	// Line 895, Address: 0x330b7c, Func Offset: 0x15c
	// Line 897, Address: 0x330b9c, Func Offset: 0x17c
	// Line 898, Address: 0x330bac, Func Offset: 0x18c
	// Line 899, Address: 0x330bb4, Func Offset: 0x194
	// Line 898, Address: 0x330bc0, Func Offset: 0x1a0
	// Line 899, Address: 0x330bc4, Func Offset: 0x1a4
	// Line 900, Address: 0x330bdc, Func Offset: 0x1bc
	// Line 901, Address: 0x330bf4, Func Offset: 0x1d4
	// Line 902, Address: 0x330c08, Func Offset: 0x1e8
	// Line 901, Address: 0x330c0c, Func Offset: 0x1ec
	// Line 902, Address: 0x330c14, Func Offset: 0x1f4
	// Line 903, Address: 0x330c20, Func Offset: 0x200
	// Line 902, Address: 0x330c28, Func Offset: 0x208
	// Line 903, Address: 0x330c2c, Func Offset: 0x20c
	// Line 904, Address: 0x330c38, Func Offset: 0x218
	// Line 905, Address: 0x330c48, Func Offset: 0x228
	// Line 906, Address: 0x330c58, Func Offset: 0x238
	// Line 905, Address: 0x330c64, Func Offset: 0x244
	// Line 906, Address: 0x330c68, Func Offset: 0x248
	// Line 907, Address: 0x330c80, Func Offset: 0x260
	// Line 908, Address: 0x330c90, Func Offset: 0x270
	// Line 910, Address: 0x330c98, Func Offset: 0x278
	// Line 912, Address: 0x330ca4, Func Offset: 0x284
	// Line 914, Address: 0x330cc0, Func Offset: 0x2a0
	// Line 916, Address: 0x330cc8, Func Offset: 0x2a8
	// Line 915, Address: 0x330ccc, Func Offset: 0x2ac
	// Line 918, Address: 0x330cd0, Func Offset: 0x2b0
	// Line 919, Address: 0x330cd4, Func Offset: 0x2b4
	// Line 920, Address: 0x330cd8, Func Offset: 0x2b8
	// Line 922, Address: 0x330ce4, Func Offset: 0x2c4
	// Line 924, Address: 0x330d00, Func Offset: 0x2e0
	// Line 925, Address: 0x330d08, Func Offset: 0x2e8
	// Line 926, Address: 0x330d0c, Func Offset: 0x2ec
	// Line 927, Address: 0x330d14, Func Offset: 0x2f4
	// Line 930, Address: 0x330d18, Func Offset: 0x2f8
	// Line 931, Address: 0x330d1c, Func Offset: 0x2fc
	// Line 932, Address: 0x330d20, Func Offset: 0x300
	// Func End, Address: 0x330d48, Func Offset: 0x328
}

// 
// Start address: 0x330d50
void EnemyKillerHandControl(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	// Line 936, Address: 0x330d50, Func Offset: 0
	// Line 938, Address: 0x330d60, Func Offset: 0x10
	// Line 939, Address: 0x330d6c, Func Offset: 0x1c
	// Line 940, Address: 0x330d78, Func Offset: 0x28
	// Line 941, Address: 0x330d84, Func Offset: 0x34
	// Func End, Address: 0x330d98, Func Offset: 0x48
}

// 
// Start address: 0x330da0
int EnemyKillerCanAttack()
{
	// Line 945, Address: 0x330da0, Func Offset: 0
	// Line 946, Address: 0x330da8, Func Offset: 0x8
	// Line 948, Address: 0x330db0, Func Offset: 0x10
	// Line 946, Address: 0x330db4, Func Offset: 0x14
	// Line 948, Address: 0x330db8, Func Offset: 0x18
	// Func End, Address: 0x330dc0, Func Offset: 0x20
}

// 
// Start address: 0x330dc0
int EnemyKillerCanFinish()
{
	// Line 952, Address: 0x330dc0, Func Offset: 0
	// Line 954, Address: 0x330dc8, Func Offset: 0x8
	// Line 957, Address: 0x330dd0, Func Offset: 0x10
	// Line 954, Address: 0x330dd4, Func Offset: 0x14
	// Line 957, Address: 0x330dd8, Func Offset: 0x18
	// Func End, Address: 0x330de0, Func Offset: 0x20
}

// 
// Start address: 0x330de0
int EnemyKillerCheckShootRange(sfObj* obj)
{
	float* pos;
	float* ppos;
	float vec[4];
	float d;
	// Line 961, Address: 0x330de0, Func Offset: 0
	// Line 965, Address: 0x330df4, Func Offset: 0x14
	// Line 966, Address: 0x330e00, Func Offset: 0x20
	// Line 967, Address: 0x330e0c, Func Offset: 0x2c
	// Line 968, Address: 0x330e24, Func Offset: 0x44
	// Line 969, Address: 0x330e64, Func Offset: 0x84
	// Line 971, Address: 0x330e80, Func Offset: 0xa0
	// Line 974, Address: 0x330e88, Func Offset: 0xa8
	// Line 976, Address: 0x330ebc, Func Offset: 0xdc
	// Line 977, Address: 0x330ec4, Func Offset: 0xe4
	// Line 978, Address: 0x330ec8, Func Offset: 0xe8
	// Line 980, Address: 0x330ef0, Func Offset: 0x110
	// Line 982, Address: 0x330ef8, Func Offset: 0x118
	// Line 983, Address: 0x330f10, Func Offset: 0x130
	// Func End, Address: 0x330f28, Func Offset: 0x148
}

// 
// Start address: 0x330f30
void EnemyKillerReload(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	// Line 987, Address: 0x330f30, Func Offset: 0
	// Line 989, Address: 0x330f3c, Func Offset: 0xc
	// Line 990, Address: 0x330f44, Func Offset: 0x14
	// Line 991, Address: 0x330f58, Func Offset: 0x28
	// Line 992, Address: 0x330f5c, Func Offset: 0x2c
	// Line 993, Address: 0x330f60, Func Offset: 0x30
	// Line 994, Address: 0x330f68, Func Offset: 0x38
	// Func End, Address: 0x330f78, Func Offset: 0x48
}

// 
// Start address: 0x330f80
int EnemyKillerBulletRest(sfObj* obj, int lr)
{
	EnemyKillerSubWork* ew;
	// Line 998, Address: 0x330f80, Func Offset: 0
	// Line 1000, Address: 0x330f8c, Func Offset: 0xc
	// Line 1001, Address: 0x330f94, Func Offset: 0x14
	// Line 1002, Address: 0x330f98, Func Offset: 0x18
	// Line 1001, Address: 0x330f9c, Func Offset: 0x1c
	// Line 1002, Address: 0x330fa4, Func Offset: 0x24
	// Line 1001, Address: 0x330fa8, Func Offset: 0x28
	// Line 1002, Address: 0x330fb0, Func Offset: 0x30
	// Func End, Address: 0x330fb8, Func Offset: 0x38
}

// 
// Start address: 0x330fc0
int EnemyKillerCanUseWeapon(sfObj* obj)
{
	// Line 1006, Address: 0x330fc0, Func Offset: 0
	// Line 1007, Address: 0x330fcc, Func Offset: 0xc
	// Line 1010, Address: 0x331000, Func Offset: 0x40
	// Line 1012, Address: 0x331008, Func Offset: 0x48
	// Line 1013, Address: 0x331010, Func Offset: 0x50
	// Func End, Address: 0x331020, Func Offset: 0x60
}

// 
// Start address: 0x331020
int EnemyKillerCanUseGun(sfObj* obj)
{
	// Line 1017, Address: 0x331020, Func Offset: 0
	// Line 1018, Address: 0x331024, Func Offset: 0x4
	// Line 1017, Address: 0x331028, Func Offset: 0x8
	// Line 1018, Address: 0x331030, Func Offset: 0x10
	// Line 1020, Address: 0x331050, Func Offset: 0x30
	// Line 1022, Address: 0x331058, Func Offset: 0x38
	// Line 1023, Address: 0x331060, Func Offset: 0x40
	// Func End, Address: 0x331070, Func Offset: 0x50
}

// 
// Start address: 0x331070
void EnemyKillerShoot(sfObj* obj, int hand, BattleAttackKind kind)
{
	EnemyKillerSubWork* ew;
	sgBone* bone;
	float* wpos;
	float* ppos;
	float vec[4];
	float d;
	// Line 1027, Address: 0x331070, Func Offset: 0
	// Line 1033, Address: 0x331090, Func Offset: 0x20
	// Line 1034, Address: 0x331098, Func Offset: 0x28
	// Line 1036, Address: 0x33109c, Func Offset: 0x2c
	// Line 1034, Address: 0x3310a0, Func Offset: 0x30
	// Line 1036, Address: 0x3310a4, Func Offset: 0x34
	// Line 1034, Address: 0x3310a8, Func Offset: 0x38
	// Line 1036, Address: 0x3310ac, Func Offset: 0x3c
	// Line 1034, Address: 0x3310b0, Func Offset: 0x40
	// Line 1036, Address: 0x3310b4, Func Offset: 0x44
	// Line 1034, Address: 0x3310b8, Func Offset: 0x48
	// Line 1036, Address: 0x3310bc, Func Offset: 0x4c
	// Line 1034, Address: 0x3310cc, Func Offset: 0x5c
	// Line 1036, Address: 0x3310d4, Func Offset: 0x64
	// Line 1038, Address: 0x3310dc, Func Offset: 0x6c
	// Line 1039, Address: 0x331104, Func Offset: 0x94
	// Line 1040, Address: 0x331110, Func Offset: 0xa0
	// Line 1041, Address: 0x33111c, Func Offset: 0xac
	// Line 1042, Address: 0x331134, Func Offset: 0xc4
	// Line 1043, Address: 0x331174, Func Offset: 0x104
	// Line 1045, Address: 0x33118c, Func Offset: 0x11c
	// Line 1046, Address: 0x3311a0, Func Offset: 0x130
	// Line 1047, Address: 0x3311b8, Func Offset: 0x148
	// Line 1048, Address: 0x3311c8, Func Offset: 0x158
	// Line 1051, Address: 0x3311d0, Func Offset: 0x160
	// Line 1052, Address: 0x3311e4, Func Offset: 0x174
	// Line 1053, Address: 0x3311e8, Func Offset: 0x178
	// Line 1054, Address: 0x331218, Func Offset: 0x1a8
	// Line 1055, Address: 0x331220, Func Offset: 0x1b0
	// Line 1054, Address: 0x331228, Func Offset: 0x1b8
	// Line 1055, Address: 0x331234, Func Offset: 0x1c4
	// Line 1056, Address: 0x331248, Func Offset: 0x1d8
	// Line 1057, Address: 0x33125c, Func Offset: 0x1ec
	// Line 1058, Address: 0x331268, Func Offset: 0x1f8
	// Func End, Address: 0x331284, Func Offset: 0x214
}

// 
// Start address: 0x331290
void EnemyKillerSubMove(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	float d;
	float vec[4];
	// Line 1062, Address: 0x331290, Func Offset: 0
	// Line 1065, Address: 0x3312a4, Func Offset: 0x14
	// Line 1066, Address: 0x3312ac, Func Offset: 0x1c
	// Line 1065, Address: 0x3312b0, Func Offset: 0x20
	// Line 1066, Address: 0x3312b4, Func Offset: 0x24
	// Line 1067, Address: 0x3312bc, Func Offset: 0x2c
	// Line 1068, Address: 0x3312c8, Func Offset: 0x38
	// Line 1069, Address: 0x3312cc, Func Offset: 0x3c
	// Line 1071, Address: 0x3312f0, Func Offset: 0x60
	// Line 1072, Address: 0x331300, Func Offset: 0x70
	// Line 1074, Address: 0x331308, Func Offset: 0x78
	// Line 1076, Address: 0x331324, Func Offset: 0x94
	// Line 1077, Address: 0x331328, Func Offset: 0x98
	// Line 1079, Address: 0x33133c, Func Offset: 0xac
	// Line 1080, Address: 0x331350, Func Offset: 0xc0
	// Line 1081, Address: 0x33137c, Func Offset: 0xec
	// Line 1083, Address: 0x331388, Func Offset: 0xf8
	// Func End, Address: 0x3313a0, Func Offset: 0x110
}

// 
// Start address: 0x3313a0
void EnemyKillerAnimeSet(sfObj* obj, EnemyKillerAnime anime)
{
	EnemyKillerSubWork* ew;
	EnemyKillerAnime old_anime;
	int f;
	int eh;
	EnemyRwMotion* prw;
	EnemyFmMotion* pfm;
	EnemyFootStepsData* pfs;
	// Line 1087, Address: 0x3313a0, Func Offset: 0
	// Line 1094, Address: 0x3313c0, Func Offset: 0x20
	// Line 1095, Address: 0x3313cc, Func Offset: 0x2c
	// Line 1098, Address: 0x3313dc, Func Offset: 0x3c
	// Line 1096, Address: 0x3313e0, Func Offset: 0x40
	// Line 1098, Address: 0x3313e4, Func Offset: 0x44
	// Line 1100, Address: 0x33152c, Func Offset: 0x18c
	// Line 1101, Address: 0x331534, Func Offset: 0x194
	// Line 1104, Address: 0x331550, Func Offset: 0x1b0
	// Line 1110, Address: 0x331558, Func Offset: 0x1b8
	// Line 1114, Address: 0x33155c, Func Offset: 0x1bc
	// Line 1116, Address: 0x331560, Func Offset: 0x1c0
	// Line 1119, Address: 0x33156c, Func Offset: 0x1cc
	// Line 1122, Address: 0x331580, Func Offset: 0x1e0
	// Line 1123, Address: 0x331588, Func Offset: 0x1e8
	// Line 1124, Address: 0x33158c, Func Offset: 0x1ec
	// Line 1126, Address: 0x331590, Func Offset: 0x1f0
	// Line 1134, Address: 0x331598, Func Offset: 0x1f8
	// Line 1139, Address: 0x3315a0, Func Offset: 0x200
	// Line 1144, Address: 0x3315a4, Func Offset: 0x204
	// Line 1146, Address: 0x3315a8, Func Offset: 0x208
	// Line 1149, Address: 0x3315b0, Func Offset: 0x210
	// Line 1153, Address: 0x3315b4, Func Offset: 0x214
	// Line 1155, Address: 0x3315b8, Func Offset: 0x218
	// Line 1158, Address: 0x3315c0, Func Offset: 0x220
	// Line 1159, Address: 0x3315c8, Func Offset: 0x228
	// Line 1160, Address: 0x3315cc, Func Offset: 0x22c
	// Line 1163, Address: 0x3315d0, Func Offset: 0x230
	// Line 1164, Address: 0x3315d8, Func Offset: 0x238
	// Line 1166, Address: 0x3315e0, Func Offset: 0x240
	// Line 1168, Address: 0x331610, Func Offset: 0x270
	// Line 1169, Address: 0x33161c, Func Offset: 0x27c
	// Line 1170, Address: 0x331630, Func Offset: 0x290
	// Line 1172, Address: 0x331638, Func Offset: 0x298
	// Line 1173, Address: 0x33164c, Func Offset: 0x2ac
	// Line 1174, Address: 0x331654, Func Offset: 0x2b4
	// Line 1175, Address: 0x331658, Func Offset: 0x2b8
	// Line 1176, Address: 0x331664, Func Offset: 0x2c4
	// Line 1177, Address: 0x33166c, Func Offset: 0x2cc
	// Line 1178, Address: 0x331670, Func Offset: 0x2d0
	// Line 1179, Address: 0x33167c, Func Offset: 0x2dc
	// Line 1180, Address: 0x331694, Func Offset: 0x2f4
	// Line 1181, Address: 0x33169c, Func Offset: 0x2fc
	// Line 1182, Address: 0x3316a0, Func Offset: 0x300
	// Line 1183, Address: 0x3316ac, Func Offset: 0x30c
	// Line 1184, Address: 0x3316b0, Func Offset: 0x310
	// Line 1188, Address: 0x33170c, Func Offset: 0x36c
	// Line 1189, Address: 0x331710, Func Offset: 0x370
	// Line 1190, Address: 0x33172c, Func Offset: 0x38c
	// Line 1192, Address: 0x331734, Func Offset: 0x394
	// Line 1193, Address: 0x331738, Func Offset: 0x398
	// Line 1194, Address: 0x331764, Func Offset: 0x3c4
	// Line 1195, Address: 0x33176c, Func Offset: 0x3cc
	// Line 1196, Address: 0x331770, Func Offset: 0x3d0
	// Line 1198, Address: 0x3317a4, Func Offset: 0x404
	// Line 1202, Address: 0x3317a8, Func Offset: 0x408
	// Line 1199, Address: 0x3317ac, Func Offset: 0x40c
	// Line 1200, Address: 0x3317b0, Func Offset: 0x410
	// Line 1202, Address: 0x3317b4, Func Offset: 0x414
	// Line 1203, Address: 0x331834, Func Offset: 0x494
	// Line 1204, Address: 0x331838, Func Offset: 0x498
	// Line 1205, Address: 0x33183c, Func Offset: 0x49c
	// Line 1206, Address: 0x331844, Func Offset: 0x4a4
	// Line 1207, Address: 0x331848, Func Offset: 0x4a8
	// Line 1208, Address: 0x33184c, Func Offset: 0x4ac
	// Line 1207, Address: 0x331850, Func Offset: 0x4b0
	// Line 1209, Address: 0x331854, Func Offset: 0x4b4
	// Line 1210, Address: 0x33185c, Func Offset: 0x4bc
	// Line 1211, Address: 0x331860, Func Offset: 0x4c0
	// Line 1212, Address: 0x331864, Func Offset: 0x4c4
	// Line 1213, Address: 0x33186c, Func Offset: 0x4cc
	// Line 1214, Address: 0x331870, Func Offset: 0x4d0
	// Line 1215, Address: 0x331874, Func Offset: 0x4d4
	// Line 1216, Address: 0x33187c, Func Offset: 0x4dc
	// Line 1217, Address: 0x331880, Func Offset: 0x4e0
	// Line 1218, Address: 0x331884, Func Offset: 0x4e4
	// Line 1219, Address: 0x33188c, Func Offset: 0x4ec
	// Line 1220, Address: 0x331890, Func Offset: 0x4f0
	// Line 1221, Address: 0x331894, Func Offset: 0x4f4
	// Line 1222, Address: 0x33189c, Func Offset: 0x4fc
	// Line 1223, Address: 0x3318a0, Func Offset: 0x500
	// Line 1224, Address: 0x3318a4, Func Offset: 0x504
	// Line 1225, Address: 0x3318ac, Func Offset: 0x50c
	// Line 1226, Address: 0x3318b0, Func Offset: 0x510
	// Line 1227, Address: 0x3318b4, Func Offset: 0x514
	// Line 1226, Address: 0x3318b8, Func Offset: 0x518
	// Line 1228, Address: 0x3318bc, Func Offset: 0x51c
	// Line 1229, Address: 0x3318c4, Func Offset: 0x524
	// Line 1230, Address: 0x3318c8, Func Offset: 0x528
	// Line 1231, Address: 0x3318cc, Func Offset: 0x52c
	// Line 1230, Address: 0x3318d0, Func Offset: 0x530
	// Line 1232, Address: 0x3318d4, Func Offset: 0x534
	// Line 1233, Address: 0x3318dc, Func Offset: 0x53c
	// Line 1234, Address: 0x3318e0, Func Offset: 0x540
	// Line 1235, Address: 0x3318e4, Func Offset: 0x544
	// Line 1236, Address: 0x3318ec, Func Offset: 0x54c
	// Line 1237, Address: 0x3318f0, Func Offset: 0x550
	// Line 1238, Address: 0x3318f4, Func Offset: 0x554
	// Line 1239, Address: 0x3318fc, Func Offset: 0x55c
	// Line 1240, Address: 0x331900, Func Offset: 0x560
	// Line 1241, Address: 0x331904, Func Offset: 0x564
	// Line 1240, Address: 0x331908, Func Offset: 0x568
	// Line 1241, Address: 0x33190c, Func Offset: 0x56c
	// Line 1244, Address: 0x331910, Func Offset: 0x570
	// Line 1245, Address: 0x331918, Func Offset: 0x578
	// Line 1246, Address: 0x331924, Func Offset: 0x584
	// Line 1247, Address: 0x331930, Func Offset: 0x590
	// Func End, Address: 0x331950, Func Offset: 0x5b0
}

// 
// Start address: 0x331950
void EnemyKillerSetDamageMotion(sfObj* obj, EnemyBattleDamage* bd)
{
	EnemyKillerSubWork* ew;
	float dir[4];
	float rrot[4];
	int motion;
	// Line 1251, Address: 0x331950, Func Offset: 0
	// Line 1256, Address: 0x33196c, Func Offset: 0x1c
	// Line 1257, Address: 0x331978, Func Offset: 0x28
	// Line 1258, Address: 0x33198c, Func Offset: 0x3c
	// Line 1259, Address: 0x33199c, Func Offset: 0x4c
	// Line 1260, Address: 0x3319bc, Func Offset: 0x6c
	// Line 1263, Address: 0x3319e4, Func Offset: 0x94
	// Line 1265, Address: 0x3319e8, Func Offset: 0x98
	// Line 1268, Address: 0x3319f0, Func Offset: 0xa0
	// Line 1274, Address: 0x3319f8, Func Offset: 0xa8
	// Line 1284, Address: 0x331a00, Func Offset: 0xb0
	// Line 1290, Address: 0x331a08, Func Offset: 0xb8
	// Line 1294, Address: 0x331a10, Func Offset: 0xc0
	// Line 1296, Address: 0x331a14, Func Offset: 0xc4
	// Line 1297, Address: 0x331a18, Func Offset: 0xc8
	// Line 1299, Address: 0x331a2c, Func Offset: 0xdc
	// Line 1302, Address: 0x331a70, Func Offset: 0x120
	// Line 1305, Address: 0x331a78, Func Offset: 0x128
	// Line 1308, Address: 0x331a80, Func Offset: 0x130
	// Line 1311, Address: 0x331a88, Func Offset: 0x138
	// Line 1314, Address: 0x331a90, Func Offset: 0x140
	// Line 1316, Address: 0x331a98, Func Offset: 0x148
	// Line 1319, Address: 0x331a9c, Func Offset: 0x14c
	// Line 1320, Address: 0x331aa0, Func Offset: 0x150
	// Line 1321, Address: 0x331aac, Func Offset: 0x15c
	// Line 1322, Address: 0x331ab0, Func Offset: 0x160
	// Func End, Address: 0x331acc, Func Offset: 0x17c
}

// 
// Start address: 0x331ad0
void set_gun_effect(sgBone* bone, int count)
{
	float tpos[4];
	// Line 1329, Address: 0x331ad0, Func Offset: 0
	// Line 1331, Address: 0x331ae4, Func Offset: 0x14
	// Line 1332, Address: 0x331aec, Func Offset: 0x1c
	// Line 1333, Address: 0x331b08, Func Offset: 0x38
	// Line 1334, Address: 0x331b28, Func Offset: 0x58
	// Line 1335, Address: 0x331b38, Func Offset: 0x68
	// Func End, Address: 0x331b4c, Func Offset: 0x7c
}

// 
// Start address: 0x331b50
void EnemyKillerSubDraw(sfObj* obj)
{
	EnemyKillerSubWork* ew;
	// Line 1339, Address: 0x331b50, Func Offset: 0
	// Line 1341, Address: 0x331b64, Func Offset: 0x14
	// Line 1342, Address: 0x331b70, Func Offset: 0x20
	// Line 1343, Address: 0x331b78, Func Offset: 0x28
	// Line 1346, Address: 0x331b94, Func Offset: 0x44
	// Line 1347, Address: 0x331b9c, Func Offset: 0x4c
	// Line 1350, Address: 0x331bb0, Func Offset: 0x60
	// Func End, Address: 0x331bc8, Func Offset: 0x78
}

// 
// Start address: 0x331bd0
void EnemyKillerDamageSoundCall(sfObj* obj, EnemyBattleDamage* bd)
{
	// Line 1354, Address: 0x331bd0, Func Offset: 0
	// Line 1355, Address: 0x331be4, Func Offset: 0x14
	// Line 1358, Address: 0x331c0c, Func Offset: 0x3c
	// Line 1359, Address: 0x331c10, Func Offset: 0x40
	// Line 1360, Address: 0x331c1c, Func Offset: 0x4c
	// Line 1361, Address: 0x331c24, Func Offset: 0x54
	// Line 1362, Address: 0x331c28, Func Offset: 0x58
	// Line 1366, Address: 0x331c94, Func Offset: 0xc4
	// Line 1367, Address: 0x331c98, Func Offset: 0xc8
	// Line 1368, Address: 0x331ca4, Func Offset: 0xd4
	// Line 1369, Address: 0x331cac, Func Offset: 0xdc
	// Line 1370, Address: 0x331cb0, Func Offset: 0xe0
	// Line 1372, Address: 0x331cbc, Func Offset: 0xec
	// Line 1373, Address: 0x331cc0, Func Offset: 0xf0
	// Func End, Address: 0x331cd4, Func Offset: 0x104
}

// 
// Start address: 0x331ce0
void EnemyKillerReflectSoundCall(sfObj* obj, EnemyBattleDamage* bd)
{
	// Line 1377, Address: 0x331ce0, Func Offset: 0
	// Line 1378, Address: 0x331cf0, Func Offset: 0x10
	// Line 1380, Address: 0x331d20, Func Offset: 0x40
	// Line 1381, Address: 0x331d2c, Func Offset: 0x4c
	// Line 1382, Address: 0x331d34, Func Offset: 0x54
	// Line 1383, Address: 0x331d38, Func Offset: 0x58
	// Line 1384, Address: 0x331d44, Func Offset: 0x64
	// Line 1385, Address: 0x331d4c, Func Offset: 0x6c
	// Line 1386, Address: 0x331d50, Func Offset: 0x70
	// Line 1388, Address: 0x331d5c, Func Offset: 0x7c
	// Line 1389, Address: 0x331d60, Func Offset: 0x80
	// Func End, Address: 0x331d70, Func Offset: 0x90
}

