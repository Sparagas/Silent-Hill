typedef struct sfObj;
typedef struct EnemyBattleDamage;
typedef struct EnemyFlamesWork;
typedef struct EnemyManageDataOne;
typedef struct _anon0;
typedef struct EnemyGhostFloatParameter;
typedef enum EnemySoundType : unsigned char;
typedef struct EnemyParticle;
typedef struct EnemyParticleList;
typedef struct EnemyFlamesParticleWork;
typedef struct EnemyRwMotion;
typedef struct EnemyFlamesSkeleton;
typedef struct sgBone;
typedef struct EnemyGhostStainParameter;
typedef struct EnemyRwMotionParameter;
typedef struct sfAllocateList;
typedef struct EventFlag;
typedef struct EnemyRwWork;
typedef enum BattleAttackKind : unsigned char;
typedef union _anon1;
typedef struct EnemyGhostInWallParameter;
typedef struct EnemySoundTypeControl;
typedef struct EnemySoundTypeControlData;
typedef struct EnemyGhostAppearFromWallParameter;
typedef struct EnemyGhostFeetParameter;
typedef struct EnemyFmWork;
typedef struct EnemyFeetParameter;
typedef struct EnemyObjHook;
typedef enum EnemyManageEntryType : unsigned char;
typedef enum sgLightType : unsigned char;
typedef enum BattleDamageType : unsigned char;

typedef void(*type_0)(void*, int);
typedef void(*type_1)(void*, int);
typedef void(*type_3)(void*, int);
typedef void(*type_5)(void*, int);
typedef void(*type_6)(void*, int);
typedef void(*type_10)(void*, int);
typedef int(*type_12)(void*);
typedef void(*type_15)(sfObj*);
typedef void(*type_16)(sfObj*);
typedef void(*type_19)(sfObj*);
typedef void(*type_21)(sfObj*);
typedef void(*type_23)(sfObj*);
typedef int(*type_24)(void*);
typedef int(*type_32)(void*);
typedef int(*type_36)(void*);
typedef void(*type_37)(void*, int);
typedef void(*type_38)(void*, int);

typedef float type_2[4];
typedef _anon1 type_4[4];
typedef float type_7[4];
typedef float type_8[3];
typedef EnemyFlamesSkeleton type_9[17];
typedef EnemyRwMotionParameter type_11[0];
typedef unsigned char type_13[320];
typedef _anon1 type_14[256];
typedef int type_17[4];
typedef int type_18[4][2];
typedef int type_20[0];
typedef void(*type_22)(sfObj*)[18];
typedef short type_25[2];
typedef unsigned short type_26[2];
typedef EnemyParticleList type_27[17];
typedef char type_28[4];
typedef int type_29[2];
typedef unsigned char type_30[4];
typedef int type_31[2];
typedef float type_33[1];
typedef int type_34[2];
typedef int type_35[1];

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

struct EnemyFlamesWork
{
	float target[4];
	float moves[4];
	float attack_pos[4];
	_anon0 light;
	float flame_force;
	float flame_force_rise;
	float timer;
	float slowly;
	int falling_direction;
	int down_count;
	int flame_rise_mode;
	int counter;
	int same_attack;
	EnemyObjHook* animechange_hook;
	EnemyObjHook* animeupdate_hook;
	EnemyRwWork* rw_work;
	EnemyFmWork* fm_work;
	sfObj* particle_obj;
	EnemySoundTypeControl* sound_control;
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

struct _anon0
{
	float color[4];
	float direction[4];
	float position[4];
	sgLightType type;
	float start;
	float end;
	float spot_cone_angle;
	float falloff_angle;
	int flag;
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

enum EnemySoundType : unsigned char
{
	EN_SOUND_TYPE_FOOTSTEPS,
	EN_SOUND_TYPE_BUZZ,
	EN_SOUND_TYPE_MUCUS,
	EN_SOUND_TYPE_JINMEN,
	EN_SOUND_TYPE_HYENA,
	EN_SOUND_TYPE_MMZ,
	EN_SOUND_TYPE_MUSH,
	EN_SOUND_TYPE_TWINS,
	EN_SOUND_TYPE_FLAMES,
	EN_SOUND_TYPE_WHEEL,
	EN_SOUND_TYPE_MAX
};

struct EnemyParticle
{
};

struct EnemyParticleList
{
	EnemyParticle* top;
	sgBone* parent;
};

struct EnemyFlamesParticleWork
{
	EnemyParticleList plist[17];
	sfAllocateList local_bones;
};

struct EnemyRwMotion
{
	short right_foot;
	short left_foot;
	float rate;
	EnemyRwMotionParameter param[0];
};

struct EnemyFlamesSkeleton
{
	char bone_name;
	char particle_num;
	char tex_rate;
	char local_flag;
	float width;
	float height;
	float pos[3];
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

struct EnemyRwMotionParameter
{
	short frame;
	short cond;
};

struct sfAllocateList
{
	char* work_top;
	unsigned int size;
	int number;
};

struct EventFlag
{
	unsigned char flag[320];
};

struct EnemyRwWork
{
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

struct EnemyGhostInWallParameter
{
	float warp_rate;
	float awake_rate;
	float trap_rate;
	float move_speed;
	float target_range;
	float stain_appear_range;
	float appear_range;
};

struct EnemySoundTypeControl
{
};

struct EnemySoundTypeControlData
{
	EnemySoundType sound_type;
	float fadein_speed;
	float fadeout_speed;
	int call_no[0];
};

struct EnemyGhostAppearFromWallParameter
{
	int appear_anime;
	int anime_type;
	int neutral_anime;
	int neutral_anime_valiation;
	float move_speed;
	float move_range;
	float appear_range;
	float stain_appear_range;
	float stain_disappear_range;
	float awake_rate;
	float normal_height;
	int float_start_frame;
	int appear_sound;
};

struct EnemyGhostFeetParameter
{
	int bone_name[2];
	int heel_bone_name[2];
	int toe_bone_name[2];
	int waist_bone_name;
	EnemyFeetParameter fparam;
};

struct EnemyFmWork
{
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

struct EnemyObjHook
{
};

enum EnemyManageEntryType : unsigned char
{
	ENEMY_MANAGE_ENTRY_TYPE_APPEAR,
	ENEMY_MANAGE_ENTRY_TYPE_FLAG_WAIT,
	ENEMY_MANAGE_ENTRY_TYPE_DIFFERENT_LEVEL,
	ENEMY_MANAGE_ENTRY_TYPE_ERASED,
	ENEMY_MANAGE_ENTRY_TYPE_ALREADY,
	ENEMY_MANAGE_ENTRY_TYPE_ANOTHER_SCENE
};

enum sgLightType : unsigned char
{
	SG_LIGHT_NONE,
	SG_LIGHT_AMBIENT,
	SG_LIGHT_DIRECTIONAL,
	SG_LIGHT_POINT,
	SG_LIGHT_SPOT,
	SG_LIGHT_REFRECT_DIRECTIONAL,
	SG_LIGHT_REFRECT_POINT
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

float bite_pos[4];
EnemyFlamesSkeleton flames_skeleton[17];
EnemyGhostFeetParameter flames_feet;
EnemyGhostStainParameter flames_stain_parameter;
EnemyGhostFloatParameter flames_float_parameter;
EnemyRwMotion rw_both;
EnemySoundTypeControlData flames_sound;
EnemyGhostInWallParameter flames_in_wall_parameter;
EnemyGhostAppearFromWallParameter flames_from_wall_parameter;
EnemyGhostAppearFromWallParameter oji_from_wall_parameter;
EventFlag event_flag;
void(*EnemyFlamesAnimeUpdateHook)(sfObj*);
void(*EnemyFlamesAnimeChangeHook)(sfObj*);
float sg_vector_zero[4];
float sg_vector_unit_w[4];
void(*flames_jump_table)(sfObj*)[18];
void(*EnemyEDFlamesBiteEnd)(void*, int);
int(*EnemyEDAnimeIsEndSoon)(void*);
void(*EnemyEDFlamesBiteStep1)(void*, int);
int(*EnemyEDAnimeIsEnd)(void*);
void(*EnemyEDFlamesRevivalDamage)(void*, int);
void(*EnemyEDFlamesRevivalDown)(void*, int);
void(*EnemyEDBattleDamageReduceHP)(void*, int);
int(*EnemyEDBattleDamageCheck)(void*);
void(*EnemyEDFlamesAdditionalDamageDown)(void*, int);
void(*EnemyEDFlamesFinish)(void*, int);
int(*EnemyEDGhostCheckFinish)(void*);
void(*EnemyEDFlamesAdditionalDamage)(void*, int);
int damage_sound[4][2];
float light_color[4];

void EnemyFlamesConstruct(sfObj* obj);
void EnemyFlamesParticleListConstruct(sfObj* obj);
void EnemyFlamesParticleListDestruct(sfObj* obj);
void EnemyFlamesParticleListMove(sfObj* obj);
void EnemyFlamesParticleListDraw(sfObj* obj);
void EnemyFlamesAnimeChangeHook(sfObj* obj);
void EnemyFlamesAnimeUpdateHook();
void EnemyFlamesHandle(sfObj* obj);
void EnemyFlamesDraw(sfObj* obj);
void EnemyFlamesDestruct(sfObj* obj);
void EnemyFlamesDataPreserve(sfObj* obj);
void EnemyFlamesDataExtract(sfObj* obj);
void EnemyFlamesAnimeSet(sfObj* obj, int anime);
void EnemyFlamesRecover(sfObj* obj);
void EnemyFlamesMoveControl(sfObj* obj);
void change_size(sfObj* obj);
void change_force(sfObj* obj);
void EnemyFlamesControl(sfObj* obj);
void EnemyFlamesControlInit(sfObj* obj);
void EnemyFlamesControlFloat(sfObj* obj);
void EnemyFlamesControlDescent(sfObj* obj);
void EnemyFlamesControlApproach(sfObj* obj);
void EnemyFlamesControlAttack(sfObj* obj);
void EnemyFlamesControlBite(sfObj* obj);
void EnemyFlamesControlConfront(sfObj* obj);
void EnemyFlamesControlInterval(sfObj* obj);
void EnemyFlamesControlInWall(sfObj* obj);
void EnemyFlamesControlFromWall(sfObj* obj);
int set_damage_anime(sfObj* obj, EnemyBattleDamage* bd, float* dir, int down);
void EnemyFlamesControlDamage(sfObj* obj);
void EnemyFlamesControlDown(sfObj* obj);
void EnemyFlamesControlExorcismDown(sfObj* obj);
void EnemyFlamesControlFinished(sfObj* obj);
void EnemyFlamesControlWait(sfObj* obj);
void EnemyFlamesControlEventWait(sfObj* obj);
void EnemyFlamesControlFlagWait(sfObj* obj);
void EnemyFlamesControlTest();
int EnemyFlamesCheckCanAttack(sfObj* obj);
void EnemyFlamesSetExtentDamage(sfObj* obj);
void EnemyFlamesCheckExorcismDamage(sfObj* obj);
void EnemyFlamesSetAttackCommand(sfObj* obj, float timer);
void EnemyFlamesSetEventDamageCheck(sfObj* obj);
void EnemyFlamesSoundStart(sfObj* obj);
void EnemyFlamesSoundStop(sfObj* obj);
void EnemyEDFlamesBiteStep1(void* obj);
void EnemyEDFlamesBiteEnd(void* obj);
void EnemyEDFlamesAdditionalDamage(void* obj);
void EnemyEDFlamesAdditionalDamageDown(void* obj);
void EnemyEDFlamesFinish(void* obj);
void EnemyEDFlamesRevivalDamage(void* obj);
void EnemyEDFlamesRevivalDown(void* obj);
int do_use_light(sfObj* obj);
void set_light(sfObj* obj);
void remove_light(sfObj* obj);
void move_light(sfObj* obj);

// 
// Start address: 0x243d40
void EnemyFlamesConstruct(sfObj* obj)
{
	EnemyFlamesWork* ew;
	EnemyManageEntryType etype;
	int type;
	sfObj* tobj;
	EnemyManageDataOne* pe;
	// Line 498, Address: 0x243d40, Func Offset: 0
	// Line 503, Address: 0x243d44, Func Offset: 0x4
	// Line 498, Address: 0x243d48, Func Offset: 0x8
	// Line 503, Address: 0x243d64, Func Offset: 0x24
	// Line 508, Address: 0x243d6c, Func Offset: 0x2c
	// Line 510, Address: 0x243d9c, Func Offset: 0x5c
	// Line 511, Address: 0x243da4, Func Offset: 0x64
	// Line 512, Address: 0x243dac, Func Offset: 0x6c
	// Line 515, Address: 0x243db0, Func Offset: 0x70
	// Line 517, Address: 0x243db8, Func Offset: 0x78
	// Line 518, Address: 0x243dc4, Func Offset: 0x84
	// Line 521, Address: 0x243de8, Func Offset: 0xa8
	// Line 522, Address: 0x243df0, Func Offset: 0xb0
	// Line 525, Address: 0x243df8, Func Offset: 0xb8
	// Line 527, Address: 0x243e04, Func Offset: 0xc4
	// Line 532, Address: 0x243e58, Func Offset: 0x118
	// Line 533, Address: 0x243e60, Func Offset: 0x120
	// Line 537, Address: 0x243e68, Func Offset: 0x128
	// Line 538, Address: 0x243e78, Func Offset: 0x138
	// Line 540, Address: 0x243e84, Func Offset: 0x144
	// Line 541, Address: 0x243e94, Func Offset: 0x154
	// Line 542, Address: 0x243e9c, Func Offset: 0x15c
	// Line 544, Address: 0x243ec8, Func Offset: 0x188
	// Line 545, Address: 0x243ed8, Func Offset: 0x198
	// Line 547, Address: 0x243efc, Func Offset: 0x1bc
	// Line 549, Address: 0x243f20, Func Offset: 0x1e0
	// Line 550, Address: 0x243f2c, Func Offset: 0x1ec
	// Line 551, Address: 0x243f38, Func Offset: 0x1f8
	// Line 552, Address: 0x243f44, Func Offset: 0x204
	// Line 554, Address: 0x243f58, Func Offset: 0x218
	// Line 556, Address: 0x243f6c, Func Offset: 0x22c
	// Line 557, Address: 0x243f78, Func Offset: 0x238
	// Line 558, Address: 0x243f80, Func Offset: 0x240
	// Line 559, Address: 0x243f88, Func Offset: 0x248
	// Line 561, Address: 0x243f90, Func Offset: 0x250
	// Line 563, Address: 0x243fa4, Func Offset: 0x264
	// Line 564, Address: 0x243fac, Func Offset: 0x26c
	// Line 565, Address: 0x243fb4, Func Offset: 0x274
	// Line 566, Address: 0x243fbc, Func Offset: 0x27c
	// Line 567, Address: 0x243fc0, Func Offset: 0x280
	// Line 568, Address: 0x243fd0, Func Offset: 0x290
	// Line 567, Address: 0x243fd4, Func Offset: 0x294
	// Line 568, Address: 0x243fd8, Func Offset: 0x298
	// Line 569, Address: 0x243fe4, Func Offset: 0x2a4
	// Line 570, Address: 0x243ff4, Func Offset: 0x2b4
	// Line 571, Address: 0x244004, Func Offset: 0x2c4
	// Line 572, Address: 0x244010, Func Offset: 0x2d0
	// Line 573, Address: 0x244018, Func Offset: 0x2d8
	// Line 575, Address: 0x244020, Func Offset: 0x2e0
	// Line 576, Address: 0x24402c, Func Offset: 0x2ec
	// Line 578, Address: 0x244038, Func Offset: 0x2f8
	// Line 579, Address: 0x244040, Func Offset: 0x300
	// Line 580, Address: 0x24406c, Func Offset: 0x32c
	// Line 581, Address: 0x244070, Func Offset: 0x330
	// Line 582, Address: 0x24407c, Func Offset: 0x33c
	// Line 583, Address: 0x244084, Func Offset: 0x344
	// Line 584, Address: 0x244088, Func Offset: 0x348
	// Line 585, Address: 0x244094, Func Offset: 0x354
	// Line 586, Address: 0x2440a0, Func Offset: 0x360
	// Line 588, Address: 0x2440a8, Func Offset: 0x368
	// Line 591, Address: 0x2440e4, Func Offset: 0x3a4
	// Line 592, Address: 0x2440ec, Func Offset: 0x3ac
	// Line 593, Address: 0x2440fc, Func Offset: 0x3bc
	// Line 596, Address: 0x244108, Func Offset: 0x3c8
	// Line 598, Address: 0x24412c, Func Offset: 0x3ec
	// Line 599, Address: 0x244134, Func Offset: 0x3f4
	// Line 600, Address: 0x244140, Func Offset: 0x400
	// Line 602, Address: 0x244164, Func Offset: 0x424
	// Line 603, Address: 0x24416c, Func Offset: 0x42c
	// Line 604, Address: 0x244170, Func Offset: 0x430
	// Line 607, Address: 0x2441a8, Func Offset: 0x468
	// Line 608, Address: 0x2441b4, Func Offset: 0x474
	// Line 609, Address: 0x2441c4, Func Offset: 0x484
	// Line 612, Address: 0x2441d0, Func Offset: 0x490
	// Line 613, Address: 0x2441d4, Func Offset: 0x494
	// Line 614, Address: 0x2441d8, Func Offset: 0x498
	// Line 616, Address: 0x2441dc, Func Offset: 0x49c
	// Line 618, Address: 0x2441e4, Func Offset: 0x4a4
	// Line 619, Address: 0x2441f4, Func Offset: 0x4b4
	// Line 620, Address: 0x2441fc, Func Offset: 0x4bc
	// Line 621, Address: 0x24420c, Func Offset: 0x4cc
	// Line 622, Address: 0x244214, Func Offset: 0x4d4
	// Line 623, Address: 0x24421c, Func Offset: 0x4dc
	// Line 624, Address: 0x244228, Func Offset: 0x4e8
	// Line 625, Address: 0x244230, Func Offset: 0x4f0
	// Line 627, Address: 0x24423c, Func Offset: 0x4fc
	// Line 628, Address: 0x244248, Func Offset: 0x508
	// Line 629, Address: 0x244254, Func Offset: 0x514
	// Line 630, Address: 0x244258, Func Offset: 0x518
	// Line 631, Address: 0x244264, Func Offset: 0x524
	// Line 632, Address: 0x244274, Func Offset: 0x534
	// Line 633, Address: 0x244280, Func Offset: 0x540
	// Line 634, Address: 0x244288, Func Offset: 0x548
	// Line 635, Address: 0x244290, Func Offset: 0x550
	// Line 638, Address: 0x2442a0, Func Offset: 0x560
	// Func End, Address: 0x2442c4, Func Offset: 0x584
}

// 
// Start address: 0x2442d0
void EnemyFlamesParticleListConstruct(sfObj* obj)
{
	EnemyFlamesWork* ew;
	EnemyFlamesParticleWork* ep;
	EnemyFlamesSkeleton* fs;
	EnemyParticleList* ppl;
	EnemyParticle* pp;
	sgBone* bone;
	sgBone* pbone;
	float trans[4];
	int i;
	int j;
	float d;
	float d2;
	// Line 642, Address: 0x2442d0, Func Offset: 0
	// Line 652, Address: 0x2442f8, Func Offset: 0x28
	// Line 653, Address: 0x244300, Func Offset: 0x30
	// Line 654, Address: 0x24430c, Func Offset: 0x3c
	// Line 655, Address: 0x244318, Func Offset: 0x48
	// Line 657, Address: 0x244324, Func Offset: 0x54
	// Line 658, Address: 0x244330, Func Offset: 0x60
	// Line 659, Address: 0x244334, Func Offset: 0x64
	// Line 658, Address: 0x244338, Func Offset: 0x68
	// Line 660, Address: 0x24433c, Func Offset: 0x6c
	// Line 661, Address: 0x244348, Func Offset: 0x78
	// Line 662, Address: 0x244358, Func Offset: 0x88
	// Line 663, Address: 0x244364, Func Offset: 0x94
	// Line 664, Address: 0x244370, Func Offset: 0xa0
	// Line 665, Address: 0x244378, Func Offset: 0xa8
	// Line 666, Address: 0x244384, Func Offset: 0xb4
	// Line 667, Address: 0x244388, Func Offset: 0xb8
	// Line 666, Address: 0x244390, Func Offset: 0xc0
	// Line 667, Address: 0x2443a4, Func Offset: 0xd4
	// Line 668, Address: 0x2443ac, Func Offset: 0xdc
	// Line 669, Address: 0x2443bc, Func Offset: 0xec
	// Line 670, Address: 0x2443c8, Func Offset: 0xf8
	// Line 671, Address: 0x2443cc, Func Offset: 0xfc
	// Line 672, Address: 0x2443d0, Func Offset: 0x100
	// Line 673, Address: 0x2443dc, Func Offset: 0x10c
	// Line 675, Address: 0x2443e0, Func Offset: 0x110
	// Line 673, Address: 0x2443e4, Func Offset: 0x114
	// Line 675, Address: 0x2443f8, Func Offset: 0x128
	// Line 676, Address: 0x244400, Func Offset: 0x130
	// Line 677, Address: 0x244408, Func Offset: 0x138
	// Line 678, Address: 0x244410, Func Offset: 0x140
	// Line 684, Address: 0x244478, Func Offset: 0x1a8
	// Line 685, Address: 0x244490, Func Offset: 0x1c0
	// Line 686, Address: 0x24449c, Func Offset: 0x1cc
	// Line 687, Address: 0x2444b4, Func Offset: 0x1e4
	// Func End, Address: 0x2444e4, Func Offset: 0x214
}

// 
// Start address: 0x2444f0
void EnemyFlamesParticleListDestruct(sfObj* obj)
{
	EnemyFlamesWork* ew;
	EnemyFlamesParticleWork* ep;
	sgBone* bone;
	sgBone* nbone;
	int i;
	// Line 691, Address: 0x2444f0, Func Offset: 0
	// Line 696, Address: 0x244504, Func Offset: 0x14
	// Line 697, Address: 0x244510, Func Offset: 0x20
	// Line 698, Address: 0x244518, Func Offset: 0x28
	// Line 699, Address: 0x24451c, Func Offset: 0x2c
	// Line 700, Address: 0x244528, Func Offset: 0x38
	// Line 701, Address: 0x244530, Func Offset: 0x40
	// Line 700, Address: 0x244534, Func Offset: 0x44
	// Line 701, Address: 0x244538, Func Offset: 0x48
	// Line 702, Address: 0x244544, Func Offset: 0x54
	// Line 703, Address: 0x244550, Func Offset: 0x60
	// Line 704, Address: 0x244558, Func Offset: 0x68
	// Line 705, Address: 0x244568, Func Offset: 0x78
	// Line 706, Address: 0x244570, Func Offset: 0x80
	// Line 708, Address: 0x24457c, Func Offset: 0x8c
	// Line 709, Address: 0x244588, Func Offset: 0x98
	// Line 710, Address: 0x244590, Func Offset: 0xa0
	// Line 711, Address: 0x244594, Func Offset: 0xa4
	// Func End, Address: 0x2445b4, Func Offset: 0xc4
}

// 
// Start address: 0x2445c0
void EnemyFlamesParticleListMove(sfObj* obj)
{
	EnemyFlamesWork* ew;
	EnemyFlamesParticleWork* ep;
	int i;
	// Line 715, Address: 0x2445c0, Func Offset: 0
	// Line 719, Address: 0x2445d0, Func Offset: 0x10
	// Line 720, Address: 0x2445dc, Func Offset: 0x1c
	// Line 721, Address: 0x2445e4, Func Offset: 0x24
	// Line 722, Address: 0x2445e8, Func Offset: 0x28
	// Line 723, Address: 0x2445f0, Func Offset: 0x30
	// Line 724, Address: 0x2445fc, Func Offset: 0x3c
	// Line 725, Address: 0x244604, Func Offset: 0x44
	// Line 726, Address: 0x244614, Func Offset: 0x54
	// Func End, Address: 0x244630, Func Offset: 0x70
}

// 
// Start address: 0x244630
void EnemyFlamesParticleListDraw(sfObj* obj)
{
	EnemyFlamesWork* ew;
	EnemyFlamesParticleWork* ep;
	int i;
	// Line 730, Address: 0x244630, Func Offset: 0
	// Line 734, Address: 0x24463c, Func Offset: 0xc
	// Line 735, Address: 0x244648, Func Offset: 0x18
	// Line 736, Address: 0x244650, Func Offset: 0x20
	// Line 737, Address: 0x244654, Func Offset: 0x24
	// Line 738, Address: 0x244658, Func Offset: 0x28
	// Line 739, Address: 0x244660, Func Offset: 0x30
	// Line 738, Address: 0x244664, Func Offset: 0x34
	// Line 739, Address: 0x244668, Func Offset: 0x38
	// Line 740, Address: 0x244674, Func Offset: 0x44
	// Func End, Address: 0x24468c, Func Offset: 0x5c
}

// 
// Start address: 0x244690
void EnemyFlamesAnimeChangeHook(sfObj* obj)
{
	EnemyFlamesWork* ew;
	EnemyFlamesParticleWork* ep;
	EnemyFlamesSkeleton* fs;
	sgBone* bone;
	sgBone* pbone;
	int i;
	// Line 744, Address: 0x244690, Func Offset: 0
	// Line 750, Address: 0x2446b4, Func Offset: 0x24
	// Line 751, Address: 0x2446c0, Func Offset: 0x30
	// Line 752, Address: 0x2446c8, Func Offset: 0x38
	// Line 753, Address: 0x2446cc, Func Offset: 0x3c
	// Line 754, Address: 0x2446d4, Func Offset: 0x44
	// Line 755, Address: 0x2446d8, Func Offset: 0x48
	// Line 756, Address: 0x2446e0, Func Offset: 0x50
	// Line 757, Address: 0x2446f0, Func Offset: 0x60
	// Line 758, Address: 0x2446fc, Func Offset: 0x6c
	// Line 759, Address: 0x244704, Func Offset: 0x74
	// Line 760, Address: 0x244710, Func Offset: 0x80
	// Line 761, Address: 0x244720, Func Offset: 0x90
	// Line 763, Address: 0x24472c, Func Offset: 0x9c
	// Line 761, Address: 0x244738, Func Offset: 0xa8
	// Line 763, Address: 0x24473c, Func Offset: 0xac
	// Line 764, Address: 0x244744, Func Offset: 0xb4
	// Func End, Address: 0x244770, Func Offset: 0xe0
}

// 
// Start address: 0x244770
void EnemyFlamesAnimeUpdateHook()
{
	// Line 769, Address: 0x244770, Func Offset: 0
	// Func End, Address: 0x244778, Func Offset: 0x8
}

// 
// Start address: 0x244780
void EnemyFlamesHandle(sfObj* obj)
{
	EnemyFlamesWork* ew;
	// Line 773, Address: 0x244780, Func Offset: 0
	// Line 775, Address: 0x244790, Func Offset: 0x10
	// Line 776, Address: 0x24479c, Func Offset: 0x1c
	// Line 777, Address: 0x2447a4, Func Offset: 0x24
	// Line 778, Address: 0x2447ac, Func Offset: 0x2c
	// Line 779, Address: 0x2447b4, Func Offset: 0x34
	// Line 780, Address: 0x2447c0, Func Offset: 0x40
	// Line 781, Address: 0x2447cc, Func Offset: 0x4c
	// Line 782, Address: 0x2447d4, Func Offset: 0x54
	// Line 783, Address: 0x2447dc, Func Offset: 0x5c
	// Line 784, Address: 0x2447e4, Func Offset: 0x64
	// Line 785, Address: 0x2447ec, Func Offset: 0x6c
	// Line 786, Address: 0x2447f4, Func Offset: 0x74
	// Line 788, Address: 0x2447fc, Func Offset: 0x7c
	// Line 789, Address: 0x24480c, Func Offset: 0x8c
	// Line 790, Address: 0x244814, Func Offset: 0x94
	// Line 791, Address: 0x244820, Func Offset: 0xa0
	// Line 793, Address: 0x244828, Func Offset: 0xa8
	// Func End, Address: 0x24483c, Func Offset: 0xbc
}

// 
// Start address: 0x244840
void EnemyFlamesDraw(sfObj* obj)
{
	// Line 797, Address: 0x244840, Func Offset: 0
	// Line 798, Address: 0x24484c, Func Offset: 0xc
	// Line 799, Address: 0x24485c, Func Offset: 0x1c
	// Line 800, Address: 0x244864, Func Offset: 0x24
	// Line 801, Address: 0x24486c, Func Offset: 0x2c
	// Line 802, Address: 0x244874, Func Offset: 0x34
	// Line 803, Address: 0x24487c, Func Offset: 0x3c
	// Line 804, Address: 0x244880, Func Offset: 0x40
	// Func End, Address: 0x244890, Func Offset: 0x50
}

// 
// Start address: 0x244890
void EnemyFlamesDestruct(sfObj* obj)
{
	EnemyFlamesWork* ew;
	// Line 808, Address: 0x244890, Func Offset: 0
	// Line 810, Address: 0x24489c, Func Offset: 0xc
	// Line 811, Address: 0x2448a4, Func Offset: 0x14
	// Line 814, Address: 0x2448e4, Func Offset: 0x54
	// Line 815, Address: 0x2448ec, Func Offset: 0x5c
	// Line 816, Address: 0x2448f0, Func Offset: 0x60
	// Line 817, Address: 0x2448f8, Func Offset: 0x68
	// Line 818, Address: 0x244900, Func Offset: 0x70
	// Line 819, Address: 0x244908, Func Offset: 0x78
	// Line 820, Address: 0x244910, Func Offset: 0x80
	// Line 821, Address: 0x244918, Func Offset: 0x88
	// Line 822, Address: 0x244920, Func Offset: 0x90
	// Line 823, Address: 0x244928, Func Offset: 0x98
	// Line 824, Address: 0x244930, Func Offset: 0xa0
	// Line 825, Address: 0x244938, Func Offset: 0xa8
	// Func End, Address: 0x244948, Func Offset: 0xb8
}

// 
// Start address: 0x244950
void EnemyFlamesDataPreserve(sfObj* obj)
{
	EnemyFlamesWork* ew;
	EnemyManageDataOne* pe;
	_anon1 td;
	// Line 829, Address: 0x244950, Func Offset: 0
	// Line 833, Address: 0x244964, Func Offset: 0x14
	// Line 835, Address: 0x244990, Func Offset: 0x40
	// Line 836, Address: 0x244998, Func Offset: 0x48
	// Line 840, Address: 0x2449a0, Func Offset: 0x50
	// Line 842, Address: 0x2449c8, Func Offset: 0x78
	// Line 844, Address: 0x2449d0, Func Offset: 0x80
	// Line 847, Address: 0x2449e8, Func Offset: 0x98
	// Line 848, Address: 0x2449f8, Func Offset: 0xa8
	// Line 849, Address: 0x244a08, Func Offset: 0xb8
	// Line 852, Address: 0x244a10, Func Offset: 0xc0
	// Line 855, Address: 0x244a24, Func Offset: 0xd4
	// Line 856, Address: 0x244a28, Func Offset: 0xd8
	// Line 857, Address: 0x244a30, Func Offset: 0xe0
	// Line 858, Address: 0x244a3c, Func Offset: 0xec
	// Line 859, Address: 0x244a48, Func Offset: 0xf8
	// Line 860, Address: 0x244a54, Func Offset: 0x104
	// Line 861, Address: 0x244a60, Func Offset: 0x110
	// Line 863, Address: 0x244a68, Func Offset: 0x118
	// Line 864, Address: 0x244a6c, Func Offset: 0x11c
	// Line 861, Address: 0x244a70, Func Offset: 0x120
	// Line 862, Address: 0x244a74, Func Offset: 0x124
	// Line 863, Address: 0x244a7c, Func Offset: 0x12c
	// Line 864, Address: 0x244a80, Func Offset: 0x130
	// Line 865, Address: 0x244a94, Func Offset: 0x144
	// Line 868, Address: 0x244a98, Func Offset: 0x148
	// Func End, Address: 0x244ab0, Func Offset: 0x160
}

// 
// Start address: 0x244ab0
void EnemyFlamesDataExtract(sfObj* obj)
{
	EnemyManageDataOne* pe;
	int anime;
	float t;
	EnemyFlamesWork* ew;
	// Line 872, Address: 0x244ab0, Func Offset: 0
	// Line 875, Address: 0x244acc, Func Offset: 0x1c
	// Line 876, Address: 0x244ae0, Func Offset: 0x30
	// Line 877, Address: 0x244aec, Func Offset: 0x3c
	// Line 878, Address: 0x244af8, Func Offset: 0x48
	// Line 879, Address: 0x244afc, Func Offset: 0x4c
	// Line 880, Address: 0x244b14, Func Offset: 0x64
	// Line 881, Address: 0x244b1c, Func Offset: 0x6c
	// Line 882, Address: 0x244b28, Func Offset: 0x78
	// Line 883, Address: 0x244b30, Func Offset: 0x80
	// Line 885, Address: 0x244b38, Func Offset: 0x88
	// Line 886, Address: 0x244b3c, Func Offset: 0x8c
	// Line 888, Address: 0x244b50, Func Offset: 0xa0
	// Line 889, Address: 0x244b5c, Func Offset: 0xac
	// Line 890, Address: 0x244b68, Func Offset: 0xb8
	// Line 891, Address: 0x244b74, Func Offset: 0xc4
	// Line 892, Address: 0x244b7c, Func Offset: 0xcc
	// Line 893, Address: 0x244b88, Func Offset: 0xd8
	// Line 894, Address: 0x244b8c, Func Offset: 0xdc
	// Line 896, Address: 0x244b9c, Func Offset: 0xec
	// Line 897, Address: 0x244ba0, Func Offset: 0xf0
	// Line 900, Address: 0x244ba8, Func Offset: 0xf8
	// Line 901, Address: 0x244bb4, Func Offset: 0x104
	// Func End, Address: 0x244bd4, Func Offset: 0x124
}

// 
// Start address: 0x244be0
void EnemyFlamesAnimeSet(sfObj* obj, int anime)
{
	EnemyFlamesWork* ew;
	EnemyRwMotion* prw;
	float s;
	int old_anime;
	// Line 905, Address: 0x244be0, Func Offset: 0
	// Line 911, Address: 0x244bfc, Func Offset: 0x1c
	// Line 912, Address: 0x244c08, Func Offset: 0x28
	// Line 913, Address: 0x244c10, Func Offset: 0x30
	// Line 914, Address: 0x244c14, Func Offset: 0x34
	// Line 913, Address: 0x244c18, Func Offset: 0x38
	// Line 914, Address: 0x244c20, Func Offset: 0x40
	// Line 915, Address: 0x244c30, Func Offset: 0x50
	// Line 916, Address: 0x244c38, Func Offset: 0x58
	// Line 918, Address: 0x244c58, Func Offset: 0x78
	// Line 920, Address: 0x244c60, Func Offset: 0x80
	// Line 921, Address: 0x244c68, Func Offset: 0x88
	// Line 924, Address: 0x244c8c, Func Offset: 0xac
	// Line 927, Address: 0x244cc4, Func Offset: 0xe4
	// Line 928, Address: 0x244cc8, Func Offset: 0xe8
	// Line 929, Address: 0x244cd4, Func Offset: 0xf4
	// Line 930, Address: 0x244cdc, Func Offset: 0xfc
	// Line 931, Address: 0x244ce0, Func Offset: 0x100
	// Line 934, Address: 0x244ce8, Func Offset: 0x108
	// Line 937, Address: 0x244cf8, Func Offset: 0x118
	// Line 939, Address: 0x244d18, Func Offset: 0x138
	// Line 942, Address: 0x244d20, Func Offset: 0x140
	// Line 943, Address: 0x244d28, Func Offset: 0x148
	// Line 944, Address: 0x244d34, Func Offset: 0x154
	// Line 945, Address: 0x244d50, Func Offset: 0x170
	// Line 950, Address: 0x244d94, Func Offset: 0x1b4
	// Line 951, Address: 0x244d98, Func Offset: 0x1b8
	// Line 953, Address: 0x244da0, Func Offset: 0x1c0
	// Func End, Address: 0x244dbc, Func Offset: 0x1dc
}

// 
// Start address: 0x244dc0
void EnemyFlamesRecover(sfObj* obj)
{
	EnemyFlamesWork* ew;
	float heal;
	float dt;
	// Line 957, Address: 0x244dc0, Func Offset: 0
	// Line 960, Address: 0x244dd4, Func Offset: 0x14
	// Line 961, Address: 0x244de0, Func Offset: 0x20
	// Line 965, Address: 0x244e1c, Func Offset: 0x5c
	// Line 966, Address: 0x244e20, Func Offset: 0x60
	// Line 968, Address: 0x244e28, Func Offset: 0x68
	// Line 969, Address: 0x244e34, Func Offset: 0x74
	// Line 971, Address: 0x244e4c, Func Offset: 0x8c
	// Line 972, Address: 0x244e68, Func Offset: 0xa8
	// Line 973, Address: 0x244e78, Func Offset: 0xb8
	// Line 974, Address: 0x244e80, Func Offset: 0xc0
	// Line 975, Address: 0x244e8c, Func Offset: 0xcc
	// Line 976, Address: 0x244e90, Func Offset: 0xd0
	// Func End, Address: 0x244ea8, Func Offset: 0xe8
}

// 
// Start address: 0x244eb0
void EnemyFlamesMoveControl(sfObj* obj)
{
	EnemyFlamesWork* ew;
	float* pos;
	float tpos[4];
	float vec[4];
	float d;
	float d2;
	float dt;
	float dr;
	int m;
	// Line 980, Address: 0x244eb0, Func Offset: 0
	// Line 986, Address: 0x244ed8, Func Offset: 0x28
	// Line 987, Address: 0x244ee4, Func Offset: 0x34
	// Line 988, Address: 0x244eec, Func Offset: 0x3c
	// Line 989, Address: 0x244ef4, Func Offset: 0x44
	// Line 990, Address: 0x244f00, Func Offset: 0x50
	// Line 991, Address: 0x244f0c, Func Offset: 0x5c
	// Line 993, Address: 0x244f38, Func Offset: 0x88
	// Line 994, Address: 0x244f40, Func Offset: 0x90
	// Line 996, Address: 0x244f48, Func Offset: 0x98
	// Line 997, Address: 0x244f50, Func Offset: 0xa0
	// Line 998, Address: 0x244f58, Func Offset: 0xa8
	// Line 1000, Address: 0x244f60, Func Offset: 0xb0
	// Line 1002, Address: 0x244f6c, Func Offset: 0xbc
	// Line 1004, Address: 0x244f70, Func Offset: 0xc0
	// Line 1009, Address: 0x244f78, Func Offset: 0xc8
	// Line 1011, Address: 0x244f80, Func Offset: 0xd0
	// Line 1015, Address: 0x244f88, Func Offset: 0xd8
	// Line 1017, Address: 0x244fac, Func Offset: 0xfc
	// Line 1018, Address: 0x244fc8, Func Offset: 0x118
	// Line 1019, Address: 0x244fd4, Func Offset: 0x124
	// Line 1020, Address: 0x244fe8, Func Offset: 0x138
	// Line 1021, Address: 0x244ff4, Func Offset: 0x144
	// Line 1023, Address: 0x245018, Func Offset: 0x168
	// Line 1024, Address: 0x245038, Func Offset: 0x188
	// Line 1025, Address: 0x245048, Func Offset: 0x198
	// Line 1026, Address: 0x245054, Func Offset: 0x1a4
	// Line 1028, Address: 0x245068, Func Offset: 0x1b8
	// Line 1029, Address: 0x245070, Func Offset: 0x1c0
	// Line 1032, Address: 0x245088, Func Offset: 0x1d8
	// Line 1033, Address: 0x2450b0, Func Offset: 0x200
	// Line 1034, Address: 0x2450c0, Func Offset: 0x210
	// Line 1035, Address: 0x2450c4, Func Offset: 0x214
	// Line 1036, Address: 0x2450d0, Func Offset: 0x220
	// Line 1038, Address: 0x2450dc, Func Offset: 0x22c
	// Line 1039, Address: 0x2450e0, Func Offset: 0x230
	// Line 1040, Address: 0x245104, Func Offset: 0x254
	// Line 1041, Address: 0x245110, Func Offset: 0x260
	// Line 1042, Address: 0x245134, Func Offset: 0x284
	// Func End, Address: 0x245164, Func Offset: 0x2b4
}

// 
// Start address: 0x245170
void change_size(sfObj* obj)
{
	float r;
	float t;
	// Line 1085, Address: 0x245170, Func Offset: 0
	// Line 1087, Address: 0x245184, Func Offset: 0x14
	// Line 1090, Address: 0x245198, Func Offset: 0x28
	// Line 1091, Address: 0x2451a0, Func Offset: 0x30
	// Line 1092, Address: 0x2451a4, Func Offset: 0x34
	// Line 1091, Address: 0x2451a8, Func Offset: 0x38
	// Line 1092, Address: 0x2451b0, Func Offset: 0x40
	// Line 1093, Address: 0x2451c4, Func Offset: 0x54
	// Line 1094, Address: 0x2451c8, Func Offset: 0x58
	// Line 1095, Address: 0x2451e8, Func Offset: 0x78
	// Line 1096, Address: 0x2451ec, Func Offset: 0x7c
	// Line 1097, Address: 0x2451f0, Func Offset: 0x80
	// Line 1098, Address: 0x2451fc, Func Offset: 0x8c
	// Line 1099, Address: 0x245220, Func Offset: 0xb0
	// Line 1100, Address: 0x24522c, Func Offset: 0xbc
	// Line 1101, Address: 0x245230, Func Offset: 0xc0
	// Func End, Address: 0x245248, Func Offset: 0xd8
}

// 
// Start address: 0x245250
void change_force(sfObj* obj)
{
	EnemyFlamesWork* ew;
	float dt;
	float d;
	// Line 1105, Address: 0x245250, Func Offset: 0
	// Line 1108, Address: 0x245260, Func Offset: 0x10
	// Line 1109, Address: 0x24526c, Func Offset: 0x1c
	// Line 1110, Address: 0x245280, Func Offset: 0x30
	// Line 1111, Address: 0x245284, Func Offset: 0x34
	// Line 1112, Address: 0x24528c, Func Offset: 0x3c
	// Line 1113, Address: 0x245290, Func Offset: 0x40
	// Line 1114, Address: 0x245298, Func Offset: 0x48
	// Line 1115, Address: 0x2452dc, Func Offset: 0x8c
	// Line 1117, Address: 0x2452e0, Func Offset: 0x90
	// Line 1116, Address: 0x2452e4, Func Offset: 0x94
	// Line 1117, Address: 0x2452e8, Func Offset: 0x98
	// Line 1116, Address: 0x2452f0, Func Offset: 0xa0
	// Line 1117, Address: 0x2452f4, Func Offset: 0xa4
	// Line 1118, Address: 0x245300, Func Offset: 0xb0
	// Line 1119, Address: 0x245304, Func Offset: 0xb4
	// Line 1121, Address: 0x245308, Func Offset: 0xb8
	// Line 1123, Address: 0x245310, Func Offset: 0xc0
	// Line 1124, Address: 0x245324, Func Offset: 0xd4
	// Line 1125, Address: 0x245328, Func Offset: 0xd8
	// Line 1127, Address: 0x245330, Func Offset: 0xe0
	// Line 1129, Address: 0x24536c, Func Offset: 0x11c
	// Line 1130, Address: 0x245388, Func Offset: 0x138
	// Line 1132, Address: 0x245390, Func Offset: 0x140
	// Line 1133, Address: 0x24539c, Func Offset: 0x14c
	// Line 1132, Address: 0x2453a0, Func Offset: 0x150
	// Line 1133, Address: 0x2453b0, Func Offset: 0x160
	// Line 1132, Address: 0x2453b8, Func Offset: 0x168
	// Line 1133, Address: 0x2453bc, Func Offset: 0x16c
	// Line 1132, Address: 0x2453cc, Func Offset: 0x17c
	// Line 1133, Address: 0x2453d0, Func Offset: 0x180
	// Line 1135, Address: 0x2453f0, Func Offset: 0x1a0
	// Line 1136, Address: 0x24540c, Func Offset: 0x1bc
	// Line 1137, Address: 0x245414, Func Offset: 0x1c4
	// Line 1138, Address: 0x245418, Func Offset: 0x1c8
	// Line 1139, Address: 0x245430, Func Offset: 0x1e0
	// Line 1141, Address: 0x24543c, Func Offset: 0x1ec
	// Line 1146, Address: 0x245440, Func Offset: 0x1f0
	// Func End, Address: 0x245454, Func Offset: 0x204
}

// 
// Start address: 0x245460
void EnemyFlamesControl(sfObj* obj)
{
	int step;
	// Line 1150, Address: 0x245460, Func Offset: 0
	// Line 1153, Address: 0x24546c, Func Offset: 0xc
	// Line 1162, Address: 0x245474, Func Offset: 0x14
	// Line 1163, Address: 0x24547c, Func Offset: 0x1c
	// Line 1164, Address: 0x245484, Func Offset: 0x24
	// Line 1166, Address: 0x24548c, Func Offset: 0x2c
	// Line 1167, Address: 0x245494, Func Offset: 0x34
	// Line 1169, Address: 0x24549c, Func Offset: 0x3c
	// Line 1171, Address: 0x2454a4, Func Offset: 0x44
	// Line 1173, Address: 0x2454c0, Func Offset: 0x60
	// Line 1174, Address: 0x2454c8, Func Offset: 0x68
	// Line 1178, Address: 0x2454d0, Func Offset: 0x70
	// Func End, Address: 0x2454e0, Func Offset: 0x80
}

// 
// Start address: 0x2454e0
void EnemyFlamesControlInit(sfObj* obj)
{
	// Line 1183, Address: 0x2454e0, Func Offset: 0
	// Func End, Address: 0x2454e8, Func Offset: 0x8
}

// 
// Start address: 0x2454f0
void EnemyFlamesControlFloat(sfObj* obj)
{
	EnemyFlamesWork* ew;
	float* pos;
	float dt;
	float dist;
	// Line 1189, Address: 0x2454f0, Func Offset: 0
	// Line 1193, Address: 0x24550c, Func Offset: 0x1c
	// Line 1194, Address: 0x245518, Func Offset: 0x28
	// Line 1195, Address: 0x245520, Func Offset: 0x30
	// Line 1196, Address: 0x24552c, Func Offset: 0x3c
	// Line 1199, Address: 0x245550, Func Offset: 0x60
	// Line 1200, Address: 0x24555c, Func Offset: 0x6c
	// Line 1201, Address: 0x245568, Func Offset: 0x78
	// Line 1202, Address: 0x245574, Func Offset: 0x84
	// Line 1203, Address: 0x245580, Func Offset: 0x90
	// Line 1204, Address: 0x245588, Func Offset: 0x98
	// Line 1205, Address: 0x245594, Func Offset: 0xa4
	// Line 1206, Address: 0x2455a4, Func Offset: 0xb4
	// Line 1207, Address: 0x2455b0, Func Offset: 0xc0
	// Line 1208, Address: 0x2455b8, Func Offset: 0xc8
	// Line 1209, Address: 0x2455bc, Func Offset: 0xcc
	// Line 1208, Address: 0x2455c0, Func Offset: 0xd0
	// Line 1210, Address: 0x2455c4, Func Offset: 0xd4
	// Line 1213, Address: 0x2455d0, Func Offset: 0xe0
	// Line 1215, Address: 0x24560c, Func Offset: 0x11c
	// Line 1216, Address: 0x245618, Func Offset: 0x128
	// Line 1218, Address: 0x245620, Func Offset: 0x130
	// Line 1219, Address: 0x245630, Func Offset: 0x140
	// Line 1221, Address: 0x245670, Func Offset: 0x180
	// Line 1224, Address: 0x24567c, Func Offset: 0x18c
	// Line 1225, Address: 0x245680, Func Offset: 0x190
	// Line 1227, Address: 0x2456a0, Func Offset: 0x1b0
	// Func End, Address: 0x2456c0, Func Offset: 0x1d0
}

// 
// Start address: 0x2456c0
void EnemyFlamesControlDescent(sfObj* obj)
{
	EnemyFlamesWork* ew;
	float* pos;
	float dt;
	float dist;
	// Line 1231, Address: 0x2456c0, Func Offset: 0
	// Line 1235, Address: 0x2456d8, Func Offset: 0x18
	// Line 1236, Address: 0x2456e4, Func Offset: 0x24
	// Line 1237, Address: 0x2456ec, Func Offset: 0x2c
	// Line 1238, Address: 0x2456f8, Func Offset: 0x38
	// Line 1239, Address: 0x24571c, Func Offset: 0x5c
	// Line 1241, Address: 0x245720, Func Offset: 0x60
	// Line 1242, Address: 0x24572c, Func Offset: 0x6c
	// Line 1243, Address: 0x245738, Func Offset: 0x78
	// Line 1244, Address: 0x245744, Func Offset: 0x84
	// Line 1245, Address: 0x245750, Func Offset: 0x90
	// Line 1246, Address: 0x245758, Func Offset: 0x98
	// Line 1247, Address: 0x245764, Func Offset: 0xa4
	// Line 1248, Address: 0x245778, Func Offset: 0xb8
	// Line 1249, Address: 0x245784, Func Offset: 0xc4
	// Line 1251, Address: 0x24578c, Func Offset: 0xcc
	// Line 1254, Address: 0x245798, Func Offset: 0xd8
	// Line 1255, Address: 0x2457a4, Func Offset: 0xe4
	// Line 1256, Address: 0x2457bc, Func Offset: 0xfc
	// Line 1259, Address: 0x2457c4, Func Offset: 0x104
	// Line 1260, Address: 0x2457c8, Func Offset: 0x108
	// Line 1261, Address: 0x2457d8, Func Offset: 0x118
	// Line 1263, Address: 0x2457f8, Func Offset: 0x138
	// Func End, Address: 0x245814, Func Offset: 0x154
}

// 
// Start address: 0x245820
void EnemyFlamesControlApproach(sfObj* obj)
{
	EnemyFlamesWork* ew;
	float pos[4];
	float ppos[4];
	float dir[4];
	float dt;
	float dist;
	float d;
	float p1[4];
	float p2[4];
	// Line 1267, Address: 0x245820, Func Offset: 0
	// Line 1271, Address: 0x245838, Func Offset: 0x18
	// Line 1272, Address: 0x245844, Func Offset: 0x24
	// Line 1273, Address: 0x245850, Func Offset: 0x30
	// Line 1274, Address: 0x245864, Func Offset: 0x44
	// Line 1275, Address: 0x24586c, Func Offset: 0x4c
	// Line 1276, Address: 0x245874, Func Offset: 0x54
	// Line 1275, Address: 0x245880, Func Offset: 0x60
	// Line 1276, Address: 0x245884, Func Offset: 0x64
	// Line 1275, Address: 0x245888, Func Offset: 0x68
	// Line 1277, Address: 0x24588c, Func Offset: 0x6c
	// Line 1278, Address: 0x245898, Func Offset: 0x78
	// Line 1279, Address: 0x2458c4, Func Offset: 0xa4
	// Line 1281, Address: 0x2458c8, Func Offset: 0xa8
	// Line 1282, Address: 0x2458d4, Func Offset: 0xb4
	// Line 1283, Address: 0x2458e0, Func Offset: 0xc0
	// Line 1284, Address: 0x2458ec, Func Offset: 0xcc
	// Line 1285, Address: 0x2458f8, Func Offset: 0xd8
	// Line 1286, Address: 0x245900, Func Offset: 0xe0
	// Line 1287, Address: 0x24590c, Func Offset: 0xec
	// Line 1288, Address: 0x24591c, Func Offset: 0xfc
	// Line 1289, Address: 0x245928, Func Offset: 0x108
	// Line 1291, Address: 0x245930, Func Offset: 0x110
	// Line 1293, Address: 0x24593c, Func Offset: 0x11c
	// Line 1294, Address: 0x245940, Func Offset: 0x120
	// Line 1295, Address: 0x245954, Func Offset: 0x134
	// Line 1296, Address: 0x245960, Func Offset: 0x140
	// Line 1297, Address: 0x24597c, Func Offset: 0x15c
	// Line 1298, Address: 0x245984, Func Offset: 0x164
	// Line 1299, Address: 0x24598c, Func Offset: 0x16c
	// Line 1300, Address: 0x245990, Func Offset: 0x170
	// Line 1301, Address: 0x2459a0, Func Offset: 0x180
	// Line 1302, Address: 0x2459b8, Func Offset: 0x198
	// Line 1303, Address: 0x2459d0, Func Offset: 0x1b0
	// Line 1304, Address: 0x2459d8, Func Offset: 0x1b8
	// Line 1307, Address: 0x2459e0, Func Offset: 0x1c0
	// Line 1308, Address: 0x2459f0, Func Offset: 0x1d0
	// Line 1311, Address: 0x2459fc, Func Offset: 0x1dc
	// Line 1309, Address: 0x245a00, Func Offset: 0x1e0
	// Line 1310, Address: 0x245a08, Func Offset: 0x1e8
	// Line 1309, Address: 0x245a0c, Func Offset: 0x1ec
	// Line 1310, Address: 0x245a18, Func Offset: 0x1f8
	// Line 1309, Address: 0x245a1c, Func Offset: 0x1fc
	// Line 1311, Address: 0x245a20, Func Offset: 0x200
	// Line 1312, Address: 0x245a30, Func Offset: 0x210
	// Line 1313, Address: 0x245a40, Func Offset: 0x220
	// Line 1314, Address: 0x245a48, Func Offset: 0x228
	// Line 1318, Address: 0x245a50, Func Offset: 0x230
	// Line 1319, Address: 0x245a7c, Func Offset: 0x25c
	// Line 1321, Address: 0x245a84, Func Offset: 0x264
	// Line 1322, Address: 0x245a8c, Func Offset: 0x26c
	// Line 1323, Address: 0x245a90, Func Offset: 0x270
	// Line 1324, Address: 0x245aa8, Func Offset: 0x288
	// Line 1325, Address: 0x245ab8, Func Offset: 0x298
	// Line 1326, Address: 0x245ac0, Func Offset: 0x2a0
	// Line 1328, Address: 0x245aec, Func Offset: 0x2cc
	// Line 1331, Address: 0x245af4, Func Offset: 0x2d4
	// Line 1332, Address: 0x245af8, Func Offset: 0x2d8
	// Line 1334, Address: 0x245b18, Func Offset: 0x2f8
	// Func End, Address: 0x245b34, Func Offset: 0x314
}

// 
// Start address: 0x245b40
void EnemyFlamesControlAttack(sfObj* obj)
{
	EnemyFlamesWork* ew;
	float* pos;
	float tpos[4];
	int sf;
	int sd;
	BattleAttackKind bk;
	float dt;
	float dir[4];
	// Line 1338, Address: 0x245b40, Func Offset: 0
	// Line 1345, Address: 0x245b5c, Func Offset: 0x1c
	// Line 1346, Address: 0x245b68, Func Offset: 0x28
	// Line 1347, Address: 0x245b70, Func Offset: 0x30
	// Line 1348, Address: 0x245b7c, Func Offset: 0x3c
	// Line 1350, Address: 0x245ba0, Func Offset: 0x60
	// Line 1353, Address: 0x245bd0, Func Offset: 0x90
	// Line 1354, Address: 0x245be4, Func Offset: 0xa4
	// Line 1356, Address: 0x245c0c, Func Offset: 0xcc
	// Line 1357, Address: 0x245c14, Func Offset: 0xd4
	// Line 1359, Address: 0x245c1c, Func Offset: 0xdc
	// Line 1360, Address: 0x245c20, Func Offset: 0xe0
	// Line 1361, Address: 0x245c2c, Func Offset: 0xec
	// Line 1362, Address: 0x245c50, Func Offset: 0x110
	// Line 1363, Address: 0x245c58, Func Offset: 0x118
	// Line 1364, Address: 0x245c60, Func Offset: 0x120
	// Line 1365, Address: 0x245c6c, Func Offset: 0x12c
	// Line 1366, Address: 0x245c70, Func Offset: 0x130
	// Line 1367, Address: 0x245c7c, Func Offset: 0x13c
	// Line 1368, Address: 0x245c88, Func Offset: 0x148
	// Line 1370, Address: 0x245c98, Func Offset: 0x158
	// Line 1372, Address: 0x245ca4, Func Offset: 0x164
	// Line 1373, Address: 0x245ca8, Func Offset: 0x168
	// Line 1374, Address: 0x245cc0, Func Offset: 0x180
	// Line 1375, Address: 0x245cc8, Func Offset: 0x188
	// Line 1376, Address: 0x245cd4, Func Offset: 0x194
	// Line 1379, Address: 0x245cdc, Func Offset: 0x19c
	// Line 1380, Address: 0x245ce0, Func Offset: 0x1a0
	// Line 1381, Address: 0x245cf0, Func Offset: 0x1b0
	// Line 1383, Address: 0x245d10, Func Offset: 0x1d0
	// Line 1388, Address: 0x245d24, Func Offset: 0x1e4
	// Line 1385, Address: 0x245d2c, Func Offset: 0x1ec
	// Line 1388, Address: 0x245d30, Func Offset: 0x1f0
	// Line 1389, Address: 0x245d40, Func Offset: 0x200
	// Line 1391, Address: 0x245d48, Func Offset: 0x208
	// Line 1394, Address: 0x245d50, Func Offset: 0x210
	// Line 1396, Address: 0x245d54, Func Offset: 0x214
	// Line 1393, Address: 0x245d5c, Func Offset: 0x21c
	// Line 1396, Address: 0x245d60, Func Offset: 0x220
	// Line 1397, Address: 0x245d70, Func Offset: 0x230
	// Line 1400, Address: 0x245d78, Func Offset: 0x238
	// Line 1401, Address: 0x245d8c, Func Offset: 0x24c
	// Line 1402, Address: 0x245d94, Func Offset: 0x254
	// Line 1403, Address: 0x245d98, Func Offset: 0x258
	// Line 1406, Address: 0x245dd8, Func Offset: 0x298
	// Line 1407, Address: 0x245de4, Func Offset: 0x2a4
	// Line 1408, Address: 0x245dfc, Func Offset: 0x2bc
	// Line 1409, Address: 0x245e00, Func Offset: 0x2c0
	// Func End, Address: 0x245e20, Func Offset: 0x2e0
}

// 
// Start address: 0x245e20
void EnemyFlamesControlBite(sfObj* obj)
{
	EnemyFlamesWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float vec[4];
	float vec2[4];
	float dt;
	float d;
	// Line 1413, Address: 0x245e20, Func Offset: 0
	// Line 1418, Address: 0x245e40, Func Offset: 0x20
	// Line 1419, Address: 0x245e4c, Func Offset: 0x2c
	// Line 1420, Address: 0x245e58, Func Offset: 0x38
	// Line 1421, Address: 0x245e60, Func Offset: 0x40
	// Line 1422, Address: 0x245e6c, Func Offset: 0x4c
	// Line 1423, Address: 0x245eac, Func Offset: 0x8c
	// Line 1424, Address: 0x245eb0, Func Offset: 0x90
	// Line 1425, Address: 0x245ebc, Func Offset: 0x9c
	// Line 1426, Address: 0x245ec8, Func Offset: 0xa8
	// Line 1427, Address: 0x245ee0, Func Offset: 0xc0
	// Line 1428, Address: 0x245eec, Func Offset: 0xcc
	// Line 1429, Address: 0x245ef8, Func Offset: 0xd8
	// Line 1430, Address: 0x245f04, Func Offset: 0xe4
	// Line 1431, Address: 0x245f0c, Func Offset: 0xec
	// Line 1432, Address: 0x245f18, Func Offset: 0xf8
	// Line 1433, Address: 0x245f24, Func Offset: 0x104
	// Line 1434, Address: 0x245f28, Func Offset: 0x108
	// Line 1435, Address: 0x245f34, Func Offset: 0x114
	// Line 1436, Address: 0x245f48, Func Offset: 0x128
	// Line 1438, Address: 0x245f58, Func Offset: 0x138
	// Line 1440, Address: 0x245f64, Func Offset: 0x144
	// Line 1441, Address: 0x245f68, Func Offset: 0x148
	// Line 1443, Address: 0x245f70, Func Offset: 0x150
	// Line 1444, Address: 0x245f7c, Func Offset: 0x15c
	// Line 1445, Address: 0x245f98, Func Offset: 0x178
	// Line 1447, Address: 0x245fac, Func Offset: 0x18c
	// Line 1449, Address: 0x245fc4, Func Offset: 0x1a4
	// Line 1450, Address: 0x245fd8, Func Offset: 0x1b8
	// Line 1451, Address: 0x245ff0, Func Offset: 0x1d0
	// Line 1452, Address: 0x245ff4, Func Offset: 0x1d4
	// Line 1451, Address: 0x245ffc, Func Offset: 0x1dc
	// Line 1452, Address: 0x246000, Func Offset: 0x1e0
	// Line 1453, Address: 0x246024, Func Offset: 0x204
	// Line 1454, Address: 0x246048, Func Offset: 0x228
	// Line 1453, Address: 0x246050, Func Offset: 0x230
	// Line 1454, Address: 0x246054, Func Offset: 0x234
	// Line 1455, Address: 0x246070, Func Offset: 0x250
	// Line 1456, Address: 0x24607c, Func Offset: 0x25c
	// Line 1458, Address: 0x246098, Func Offset: 0x278
	// Line 1461, Address: 0x2460a0, Func Offset: 0x280
	// Line 1460, Address: 0x2460a4, Func Offset: 0x284
	// Line 1461, Address: 0x2460ac, Func Offset: 0x28c
	// Line 1462, Address: 0x2460c4, Func Offset: 0x2a4
	// Line 1463, Address: 0x2460e8, Func Offset: 0x2c8
	// Line 1464, Address: 0x2460f8, Func Offset: 0x2d8
	// Line 1465, Address: 0x246100, Func Offset: 0x2e0
	// Line 1466, Address: 0x24610c, Func Offset: 0x2ec
	// Line 1468, Address: 0x246114, Func Offset: 0x2f4
	// Line 1470, Address: 0x24611c, Func Offset: 0x2fc
	// Line 1471, Address: 0x246120, Func Offset: 0x300
	// Line 1474, Address: 0x24613c, Func Offset: 0x31c
	// Line 1475, Address: 0x246140, Func Offset: 0x320
	// Func End, Address: 0x246164, Func Offset: 0x344
}

// 
// Start address: 0x246170
void EnemyFlamesControlConfront(sfObj* obj)
{
	EnemyFlamesWork* ew;
	float* pos;
	float* ppos;
	float dir[4];
	float vec[4];
	float trot[4];
	float dt;
	float dist;
	float d;
	// Line 1479, Address: 0x246170, Func Offset: 0
	// Line 1485, Address: 0x246194, Func Offset: 0x24
	// Line 1486, Address: 0x2461a0, Func Offset: 0x30
	// Line 1487, Address: 0x2461ac, Func Offset: 0x3c
	// Line 1488, Address: 0x2461b4, Func Offset: 0x44
	// Line 1489, Address: 0x2461c0, Func Offset: 0x50
	// Line 1490, Address: 0x2461e4, Func Offset: 0x74
	// Line 1492, Address: 0x2461e8, Func Offset: 0x78
	// Line 1493, Address: 0x2461f4, Func Offset: 0x84
	// Line 1494, Address: 0x246200, Func Offset: 0x90
	// Line 1495, Address: 0x24620c, Func Offset: 0x9c
	// Line 1496, Address: 0x246218, Func Offset: 0xa8
	// Line 1497, Address: 0x246224, Func Offset: 0xb4
	// Line 1498, Address: 0x24622c, Func Offset: 0xbc
	// Line 1499, Address: 0x246238, Func Offset: 0xc8
	// Line 1500, Address: 0x246248, Func Offset: 0xd8
	// Line 1501, Address: 0x246254, Func Offset: 0xe4
	// Line 1502, Address: 0x24625c, Func Offset: 0xec
	// Line 1504, Address: 0x246260, Func Offset: 0xf0
	// Line 1506, Address: 0x24626c, Func Offset: 0xfc
	// Line 1507, Address: 0x246270, Func Offset: 0x100
	// Line 1508, Address: 0x246288, Func Offset: 0x118
	// Line 1509, Address: 0x24628c, Func Offset: 0x11c
	// Line 1510, Address: 0x24629c, Func Offset: 0x12c
	// Line 1512, Address: 0x2462c0, Func Offset: 0x150
	// Line 1513, Address: 0x2462cc, Func Offset: 0x15c
	// Line 1514, Address: 0x2462f8, Func Offset: 0x188
	// Line 1515, Address: 0x246310, Func Offset: 0x1a0
	// Line 1516, Address: 0x246324, Func Offset: 0x1b4
	// Line 1517, Address: 0x246334, Func Offset: 0x1c4
	// Line 1518, Address: 0x246340, Func Offset: 0x1d0
	// Line 1517, Address: 0x246348, Func Offset: 0x1d8
	// Line 1518, Address: 0x24634c, Func Offset: 0x1dc
	// Line 1520, Address: 0x2463a4, Func Offset: 0x234
	// Line 1521, Address: 0x2463ac, Func Offset: 0x23c
	// Line 1522, Address: 0x2463d0, Func Offset: 0x260
	// Line 1523, Address: 0x2463e4, Func Offset: 0x274
	// Line 1525, Address: 0x2463ec, Func Offset: 0x27c
	// Line 1526, Address: 0x246414, Func Offset: 0x2a4
	// Line 1529, Address: 0x24641c, Func Offset: 0x2ac
	// Line 1530, Address: 0x246420, Func Offset: 0x2b0
	// Line 1532, Address: 0x246440, Func Offset: 0x2d0
	// Func End, Address: 0x246468, Func Offset: 0x2f8
}

// 
// Start address: 0x246470
void EnemyFlamesControlInterval(sfObj* obj)
{
	EnemyFlamesWork* ew;
	float* pos;
	float vec[4];
	float* rot;
	float trot[4];
	float dt;
	float dist;
	// Line 1536, Address: 0x246470, Func Offset: 0
	// Line 1543, Address: 0x24648c, Func Offset: 0x1c
	// Line 1544, Address: 0x246498, Func Offset: 0x28
	// Line 1545, Address: 0x2464a4, Func Offset: 0x34
	// Line 1546, Address: 0x2464ac, Func Offset: 0x3c
	// Line 1547, Address: 0x2464b8, Func Offset: 0x48
	// Line 1548, Address: 0x2464c8, Func Offset: 0x58
	// Line 1551, Address: 0x246500, Func Offset: 0x90
	// Line 1552, Address: 0x24650c, Func Offset: 0x9c
	// Line 1553, Address: 0x246518, Func Offset: 0xa8
	// Line 1554, Address: 0x246524, Func Offset: 0xb4
	// Line 1555, Address: 0x246530, Func Offset: 0xc0
	// Line 1556, Address: 0x24653c, Func Offset: 0xcc
	// Line 1557, Address: 0x246544, Func Offset: 0xd4
	// Line 1558, Address: 0x246550, Func Offset: 0xe0
	// Line 1559, Address: 0x246564, Func Offset: 0xf4
	// Line 1560, Address: 0x246570, Func Offset: 0x100
	// Line 1561, Address: 0x246578, Func Offset: 0x108
	// Line 1562, Address: 0x24657c, Func Offset: 0x10c
	// Line 1561, Address: 0x246580, Func Offset: 0x110
	// Line 1563, Address: 0x246584, Func Offset: 0x114
	// Line 1566, Address: 0x246590, Func Offset: 0x120
	// Line 1568, Address: 0x2465b0, Func Offset: 0x140
	// Line 1569, Address: 0x2465b4, Func Offset: 0x144
	// Line 1570, Address: 0x2465c4, Func Offset: 0x154
	// Line 1571, Address: 0x2465dc, Func Offset: 0x16c
	// Line 1572, Address: 0x246610, Func Offset: 0x1a0
	// Line 1573, Address: 0x24662c, Func Offset: 0x1bc
	// Line 1574, Address: 0x24663c, Func Offset: 0x1cc
	// Line 1575, Address: 0x246644, Func Offset: 0x1d4
	// Line 1576, Address: 0x246650, Func Offset: 0x1e0
	// Line 1577, Address: 0x24665c, Func Offset: 0x1ec
	// Line 1578, Address: 0x246670, Func Offset: 0x200
	// Line 1580, Address: 0x246678, Func Offset: 0x208
	// Line 1581, Address: 0x246684, Func Offset: 0x214
	// Line 1582, Address: 0x246698, Func Offset: 0x228
	// Line 1581, Address: 0x24669c, Func Offset: 0x22c
	// Line 1582, Address: 0x2466a0, Func Offset: 0x230
	// Line 1581, Address: 0x2466a4, Func Offset: 0x234
	// Line 1582, Address: 0x2466ac, Func Offset: 0x23c
	// Line 1584, Address: 0x2466b4, Func Offset: 0x244
	// Line 1585, Address: 0x2466c0, Func Offset: 0x250
	// Line 1586, Address: 0x2466cc, Func Offset: 0x25c
	// Line 1587, Address: 0x2466d8, Func Offset: 0x268
	// Line 1588, Address: 0x2466dc, Func Offset: 0x26c
	// Line 1587, Address: 0x2466e0, Func Offset: 0x270
	// Line 1588, Address: 0x2466e4, Func Offset: 0x274
	// Line 1591, Address: 0x2466ec, Func Offset: 0x27c
	// Line 1592, Address: 0x2466f4, Func Offset: 0x284
	// Line 1593, Address: 0x2466f8, Func Offset: 0x288
	// Line 1594, Address: 0x246700, Func Offset: 0x290
	// Line 1595, Address: 0x24673c, Func Offset: 0x2cc
	// Line 1596, Address: 0x246744, Func Offset: 0x2d4
	// Line 1597, Address: 0x246760, Func Offset: 0x2f0
	// Line 1598, Address: 0x246778, Func Offset: 0x308
	// Line 1599, Address: 0x246780, Func Offset: 0x310
	// Line 1600, Address: 0x2467a0, Func Offset: 0x330
	// Line 1601, Address: 0x2467a8, Func Offset: 0x338
	// Line 1602, Address: 0x2467b0, Func Offset: 0x340
	// Line 1603, Address: 0x2467d0, Func Offset: 0x360
	// Line 1604, Address: 0x2467d8, Func Offset: 0x368
	// Line 1605, Address: 0x2467e0, Func Offset: 0x370
	// Line 1609, Address: 0x2467ec, Func Offset: 0x37c
	// Line 1610, Address: 0x2467f4, Func Offset: 0x384
	// Line 1611, Address: 0x2467f8, Func Offset: 0x388
	// Line 1612, Address: 0x246800, Func Offset: 0x390
	// Line 1613, Address: 0x24683c, Func Offset: 0x3cc
	// Line 1614, Address: 0x246844, Func Offset: 0x3d4
	// Line 1615, Address: 0x24686c, Func Offset: 0x3fc
	// Line 1616, Address: 0x246884, Func Offset: 0x414
	// Line 1617, Address: 0x24688c, Func Offset: 0x41c
	// Line 1618, Address: 0x2468b0, Func Offset: 0x440
	// Line 1619, Address: 0x2468b8, Func Offset: 0x448
	// Line 1620, Address: 0x2468c0, Func Offset: 0x450
	// Line 1624, Address: 0x2468cc, Func Offset: 0x45c
	// Line 1625, Address: 0x2468d0, Func Offset: 0x460
	// Line 1627, Address: 0x2468f0, Func Offset: 0x480
	// Func End, Address: 0x246910, Func Offset: 0x4a0
}

// 
// Start address: 0x246910
void EnemyFlamesControlInWall(sfObj* obj)
{
	int r;
	EnemyFlamesWork* ew;
	// Line 1631, Address: 0x246910, Func Offset: 0
	// Line 1633, Address: 0x24691c, Func Offset: 0xc
	// Line 1635, Address: 0x24692c, Func Offset: 0x1c
	// Line 1636, Address: 0x246934, Func Offset: 0x24
	// Line 1637, Address: 0x246938, Func Offset: 0x28
	// Line 1636, Address: 0x24693c, Func Offset: 0x2c
	// Line 1637, Address: 0x246940, Func Offset: 0x30
	// Line 1638, Address: 0x246948, Func Offset: 0x38
	// Line 1640, Address: 0x246958, Func Offset: 0x48
	// Line 1643, Address: 0x246970, Func Offset: 0x60
	// Line 1644, Address: 0x246998, Func Offset: 0x88
	// Line 1646, Address: 0x2469b8, Func Offset: 0xa8
	// Line 1647, Address: 0x2469c8, Func Offset: 0xb8
	// Line 1650, Address: 0x2469f0, Func Offset: 0xe0
	// Line 1651, Address: 0x2469fc, Func Offset: 0xec
	// Line 1652, Address: 0x246a04, Func Offset: 0xf4
	// Line 1653, Address: 0x246a08, Func Offset: 0xf8
	// Line 1654, Address: 0x246a18, Func Offset: 0x108
	// Line 1656, Address: 0x246a24, Func Offset: 0x114
	// Line 1657, Address: 0x246a28, Func Offset: 0x118
	// Func End, Address: 0x246a38, Func Offset: 0x128
}

// 
// Start address: 0x246a40
void EnemyFlamesControlFromWall(sfObj* obj)
{
	EnemyFlamesWork* ew;
	int r;
	float s;
	// Line 1661, Address: 0x246a40, Func Offset: 0
	// Line 1665, Address: 0x246a58, Func Offset: 0x18
	// Line 1666, Address: 0x246a64, Func Offset: 0x24
	// Line 1668, Address: 0x246a74, Func Offset: 0x34
	// Line 1669, Address: 0x246a80, Func Offset: 0x40
	// Line 1675, Address: 0x246a8c, Func Offset: 0x4c
	// Line 1674, Address: 0x246a90, Func Offset: 0x50
	// Line 1676, Address: 0x246ab8, Func Offset: 0x78
	// Line 1677, Address: 0x246acc, Func Offset: 0x8c
	// Line 1679, Address: 0x246ad8, Func Offset: 0x98
	// Line 1677, Address: 0x246adc, Func Offset: 0x9c
	// Line 1679, Address: 0x246ae0, Func Offset: 0xa0
	// Line 1680, Address: 0x246af0, Func Offset: 0xb0
	// Line 1681, Address: 0x246af8, Func Offset: 0xb8
	// Line 1683, Address: 0x246b08, Func Offset: 0xc8
	// Line 1681, Address: 0x246b0c, Func Offset: 0xcc
	// Line 1683, Address: 0x246b10, Func Offset: 0xd0
	// Line 1684, Address: 0x246b24, Func Offset: 0xe4
	// Line 1685, Address: 0x246b28, Func Offset: 0xe8
	// Line 1686, Address: 0x246b34, Func Offset: 0xf4
	// Line 1688, Address: 0x246b58, Func Offset: 0x118
	// Line 1689, Address: 0x246b64, Func Offset: 0x124
	// Line 1690, Address: 0x246b6c, Func Offset: 0x12c
	// Line 1691, Address: 0x246b70, Func Offset: 0x130
	// Line 1692, Address: 0x246b7c, Func Offset: 0x13c
	// Line 1693, Address: 0x246b80, Func Offset: 0x140
	// Line 1695, Address: 0x246b88, Func Offset: 0x148
	// Line 1696, Address: 0x246b90, Func Offset: 0x150
	// Line 1698, Address: 0x246bb4, Func Offset: 0x174
	// Line 1699, Address: 0x246bbc, Func Offset: 0x17c
	// Line 1700, Address: 0x246bc8, Func Offset: 0x188
	// Line 1703, Address: 0x246bd4, Func Offset: 0x194
	// Line 1704, Address: 0x246bd8, Func Offset: 0x198
	// Func End, Address: 0x246bf4, Func Offset: 0x1b4
}

// 
// Start address: 0x246c00
int set_damage_anime(sfObj* obj, EnemyBattleDamage* bd, float* dir, int down)
{
	EnemyFlamesWork* ew;
	int nextstep;
	int motion;
	float s;
	// Line 1709, Address: 0x246c00, Func Offset: 0
	// Line 1713, Address: 0x246c34, Func Offset: 0x34
	// Line 1714, Address: 0x246c3c, Func Offset: 0x3c
	// Line 1713, Address: 0x246c40, Func Offset: 0x40
	// Line 1714, Address: 0x246c44, Func Offset: 0x44
	// Line 1715, Address: 0x246c50, Func Offset: 0x50
	// Line 1714, Address: 0x246c54, Func Offset: 0x54
	// Line 1715, Address: 0x246c58, Func Offset: 0x58
	// Line 1716, Address: 0x246c70, Func Offset: 0x70
	// Line 1717, Address: 0x246c84, Func Offset: 0x84
	// Line 1718, Address: 0x246ca4, Func Offset: 0xa4
	// Line 1719, Address: 0x246ca8, Func Offset: 0xa8
	// Line 1729, Address: 0x246d00, Func Offset: 0x100
	// Line 1731, Address: 0x246d08, Func Offset: 0x108
	// Line 1733, Address: 0x246d10, Func Offset: 0x110
	// Line 1735, Address: 0x246d18, Func Offset: 0x118
	// Line 1736, Address: 0x246d24, Func Offset: 0x124
	// Line 1739, Address: 0x246d30, Func Offset: 0x130
	// Line 1740, Address: 0x246d34, Func Offset: 0x134
	// Line 1742, Address: 0x246d54, Func Offset: 0x154
	// Line 1743, Address: 0x246d5c, Func Offset: 0x15c
	// Line 1744, Address: 0x246d70, Func Offset: 0x170
	// Line 1746, Address: 0x246d7c, Func Offset: 0x17c
	// Line 1747, Address: 0x246d98, Func Offset: 0x198
	// Line 1749, Address: 0x246da0, Func Offset: 0x1a0
	// Line 1750, Address: 0x246da8, Func Offset: 0x1a8
	// Line 1751, Address: 0x246db8, Func Offset: 0x1b8
	// Line 1753, Address: 0x246dc8, Func Offset: 0x1c8
	// Line 1754, Address: 0x246ddc, Func Offset: 0x1dc
	// Line 1760, Address: 0x246e24, Func Offset: 0x224
	// Line 1761, Address: 0x246e30, Func Offset: 0x230
	// Line 1763, Address: 0x246e34, Func Offset: 0x234
	// Line 1765, Address: 0x246e38, Func Offset: 0x238
	// Line 1766, Address: 0x246e40, Func Offset: 0x240
	// Line 1770, Address: 0x246e58, Func Offset: 0x258
	// Line 1769, Address: 0x246e5c, Func Offset: 0x25c
	// Line 1772, Address: 0x246e60, Func Offset: 0x260
	// Line 1775, Address: 0x246e68, Func Offset: 0x268
	// Line 1779, Address: 0x246e6c, Func Offset: 0x26c
	// Line 1780, Address: 0x246e70, Func Offset: 0x270
	// Line 1781, Address: 0x246e7c, Func Offset: 0x27c
	// Line 1782, Address: 0x246e88, Func Offset: 0x288
	// Line 1783, Address: 0x246e8c, Func Offset: 0x28c
	// Func End, Address: 0x246eb8, Func Offset: 0x2b8
}

// 
// Start address: 0x246ec0
void EnemyFlamesControlDamage(sfObj* obj)
{
	EnemyFlamesWork* ew;
	float tlimit;
	float dt;
	EnemyBattleDamage bd;
	float dir[4];
	float rrot[4];
	int d;
	int nextstep;
	// Line 1787, Address: 0x246ec0, Func Offset: 0
	// Line 1790, Address: 0x246ed4, Func Offset: 0x14
	// Line 1791, Address: 0x246edc, Func Offset: 0x1c
	// Line 1792, Address: 0x246ee8, Func Offset: 0x28
	// Line 1794, Address: 0x246f28, Func Offset: 0x68
	// Line 1795, Address: 0x246f34, Func Offset: 0x74
	// Line 1796, Address: 0x246f40, Func Offset: 0x80
	// Line 1797, Address: 0x246f48, Func Offset: 0x88
	// Line 1798, Address: 0x246f50, Func Offset: 0x90
	// Line 1799, Address: 0x246f5c, Func Offset: 0x9c
	// Line 1800, Address: 0x246f64, Func Offset: 0xa4
	// Line 1801, Address: 0x246f70, Func Offset: 0xb0
	// Line 1802, Address: 0x246f78, Func Offset: 0xb8
	// Line 1803, Address: 0x246f80, Func Offset: 0xc0
	// Line 1811, Address: 0x246f84, Func Offset: 0xc4
	// Line 1803, Address: 0x246f88, Func Offset: 0xc8
	// Line 1811, Address: 0x246f8c, Func Offset: 0xcc
	// Line 1804, Address: 0x246f90, Func Offset: 0xd0
	// Line 1811, Address: 0x246f94, Func Offset: 0xd4
	// Line 1812, Address: 0x246f9c, Func Offset: 0xdc
	// Line 1813, Address: 0x246fac, Func Offset: 0xec
	// Line 1814, Address: 0x246fbc, Func Offset: 0xfc
	// Line 1815, Address: 0x246fc4, Func Offset: 0x104
	// Line 1816, Address: 0x246fd0, Func Offset: 0x110
	// Line 1818, Address: 0x246fe4, Func Offset: 0x124
	// Line 1819, Address: 0x246ff0, Func Offset: 0x130
	// Line 1820, Address: 0x247000, Func Offset: 0x140
	// Line 1821, Address: 0x247008, Func Offset: 0x148
	// Line 1822, Address: 0x247010, Func Offset: 0x150
	// Line 1824, Address: 0x247024, Func Offset: 0x164
	// Line 1825, Address: 0x247028, Func Offset: 0x168
	// Line 1826, Address: 0x24705c, Func Offset: 0x19c
	// Line 1827, Address: 0x24707c, Func Offset: 0x1bc
	// Line 1828, Address: 0x247090, Func Offset: 0x1d0
	// Line 1829, Address: 0x2470a0, Func Offset: 0x1e0
	// Line 1830, Address: 0x2470b8, Func Offset: 0x1f8
	// Line 1831, Address: 0x2470c0, Func Offset: 0x200
	// Line 1832, Address: 0x2470d8, Func Offset: 0x218
	// Line 1834, Address: 0x2470f0, Func Offset: 0x230
	// Line 1835, Address: 0x247114, Func Offset: 0x254
	// Line 1836, Address: 0x247128, Func Offset: 0x268
	// Line 1837, Address: 0x247144, Func Offset: 0x284
	// Line 1838, Address: 0x24714c, Func Offset: 0x28c
	// Line 1839, Address: 0x247158, Func Offset: 0x298
	// Line 1840, Address: 0x247164, Func Offset: 0x2a4
	// Line 1841, Address: 0x247170, Func Offset: 0x2b0
	// Line 1844, Address: 0x24717c, Func Offset: 0x2bc
	// Line 1845, Address: 0x247184, Func Offset: 0x2c4
	// Line 1846, Address: 0x247188, Func Offset: 0x2c8
	// Line 1848, Address: 0x2471a4, Func Offset: 0x2e4
	// Line 1849, Address: 0x2471ac, Func Offset: 0x2ec
	// Line 1850, Address: 0x2471b0, Func Offset: 0x2f0
	// Line 1852, Address: 0x2471c8, Func Offset: 0x308
	// Line 1854, Address: 0x2471d0, Func Offset: 0x310
	// Line 1855, Address: 0x2471d4, Func Offset: 0x314
	// Line 1854, Address: 0x2471d8, Func Offset: 0x318
	// Line 1855, Address: 0x2471e0, Func Offset: 0x320
	// Line 1856, Address: 0x2471f0, Func Offset: 0x330
	// Line 1857, Address: 0x24720c, Func Offset: 0x34c
	// Line 1858, Address: 0x247214, Func Offset: 0x354
	// Line 1859, Address: 0x247228, Func Offset: 0x368
	// Line 1860, Address: 0x247234, Func Offset: 0x374
	// Line 1862, Address: 0x247244, Func Offset: 0x384
	// Line 1863, Address: 0x247250, Func Offset: 0x390
	// Line 1864, Address: 0x247258, Func Offset: 0x398
	// Line 1865, Address: 0x247264, Func Offset: 0x3a4
	// Line 1868, Address: 0x247270, Func Offset: 0x3b0
	// Line 1870, Address: 0x247278, Func Offset: 0x3b8
	// Line 1871, Address: 0x24729c, Func Offset: 0x3dc
	// Line 1870, Address: 0x2472a0, Func Offset: 0x3e0
	// Line 1871, Address: 0x2472a4, Func Offset: 0x3e4
	// Line 1870, Address: 0x2472a8, Func Offset: 0x3e8
	// Line 1871, Address: 0x2472ac, Func Offset: 0x3ec
	// Line 1872, Address: 0x2472b8, Func Offset: 0x3f8
	// Line 1875, Address: 0x2472c4, Func Offset: 0x404
	// Line 1876, Address: 0x2472c8, Func Offset: 0x408
	// Func End, Address: 0x2472e0, Func Offset: 0x420
}

// 
// Start address: 0x2472e0
void EnemyFlamesControlDown(sfObj* obj)
{
	EnemyFlamesWork* ew;
	// Line 1880, Address: 0x2472e0, Func Offset: 0
	// Line 1882, Address: 0x2472f0, Func Offset: 0x10
	// Line 1883, Address: 0x2472fc, Func Offset: 0x1c
	// Line 1887, Address: 0x247348, Func Offset: 0x68
	// Line 1888, Address: 0x24735c, Func Offset: 0x7c
	// Line 1889, Address: 0x247388, Func Offset: 0xa8
	// Line 1891, Address: 0x2473a4, Func Offset: 0xc4
	// Line 1892, Address: 0x2473c0, Func Offset: 0xe0
	// Line 1893, Address: 0x2473e4, Func Offset: 0x104
	// Line 1895, Address: 0x247420, Func Offset: 0x140
	// Line 1896, Address: 0x24742c, Func Offset: 0x14c
	// Line 1897, Address: 0x247438, Func Offset: 0x158
	// Line 1898, Address: 0x247464, Func Offset: 0x184
	// Line 1899, Address: 0x247468, Func Offset: 0x188
	// Line 1900, Address: 0x247474, Func Offset: 0x194
	// Line 1901, Address: 0x247488, Func Offset: 0x1a8
	// Line 1902, Address: 0x247498, Func Offset: 0x1b8
	// Line 1903, Address: 0x2474b4, Func Offset: 0x1d4
	// Line 1904, Address: 0x2474bc, Func Offset: 0x1dc
	// Line 1905, Address: 0x2474c8, Func Offset: 0x1e8
	// Line 1906, Address: 0x2474d4, Func Offset: 0x1f4
	// Line 1907, Address: 0x2474d8, Func Offset: 0x1f8
	// Line 1908, Address: 0x2474e4, Func Offset: 0x204
	// Line 1909, Address: 0x2474f0, Func Offset: 0x210
	// Line 1910, Address: 0x2474fc, Func Offset: 0x21c
	// Line 1911, Address: 0x247504, Func Offset: 0x224
	// Line 1912, Address: 0x247508, Func Offset: 0x228
	// Line 1913, Address: 0x247514, Func Offset: 0x234
	// Line 1914, Address: 0x24751c, Func Offset: 0x23c
	// Line 1915, Address: 0x247520, Func Offset: 0x240
	// Line 1916, Address: 0x24753c, Func Offset: 0x25c
	// Line 1917, Address: 0x247544, Func Offset: 0x264
	// Line 1918, Address: 0x247548, Func Offset: 0x268
	// Line 1917, Address: 0x24754c, Func Offset: 0x26c
	// Line 1918, Address: 0x247550, Func Offset: 0x270
	// Line 1919, Address: 0x247554, Func Offset: 0x274
	// Line 1920, Address: 0x247560, Func Offset: 0x280
	// Line 1921, Address: 0x24758c, Func Offset: 0x2ac
	// Line 1922, Address: 0x2475b8, Func Offset: 0x2d8
	// Line 1924, Address: 0x2475c8, Func Offset: 0x2e8
	// Line 1927, Address: 0x247608, Func Offset: 0x328
	// Line 1930, Address: 0x247618, Func Offset: 0x338
	// Line 1932, Address: 0x247620, Func Offset: 0x340
	// Line 1933, Address: 0x247644, Func Offset: 0x364
	// Line 1935, Address: 0x247654, Func Offset: 0x374
	// Line 1937, Address: 0x247660, Func Offset: 0x380
	// Line 1939, Address: 0x247668, Func Offset: 0x388
	// Line 1942, Address: 0x247684, Func Offset: 0x3a4
	// Line 1943, Address: 0x247688, Func Offset: 0x3a8
	// Func End, Address: 0x24769c, Func Offset: 0x3bc
}

// 
// Start address: 0x2476a0
void EnemyFlamesControlExorcismDown(sfObj* obj)
{
	EnemyFlamesWork* ew;
	// Line 1947, Address: 0x2476a0, Func Offset: 0
	// Line 1949, Address: 0x2476b0, Func Offset: 0x10
	// Line 1950, Address: 0x2476bc, Func Offset: 0x1c
	// Line 1951, Address: 0x2476fc, Func Offset: 0x5c
	// Line 1952, Address: 0x247700, Func Offset: 0x60
	// Line 1953, Address: 0x247708, Func Offset: 0x68
	// Line 1954, Address: 0x247718, Func Offset: 0x78
	// Line 1955, Address: 0x247724, Func Offset: 0x84
	// Line 1956, Address: 0x247730, Func Offset: 0x90
	// Line 1957, Address: 0x247738, Func Offset: 0x98
	// Line 1958, Address: 0x247744, Func Offset: 0xa4
	// Line 1959, Address: 0x247750, Func Offset: 0xb0
	// Line 1960, Address: 0x24775c, Func Offset: 0xbc
	// Line 1961, Address: 0x247764, Func Offset: 0xc4
	// Line 1962, Address: 0x24776c, Func Offset: 0xcc
	// Line 1963, Address: 0x247780, Func Offset: 0xe0
	// Line 1964, Address: 0x247790, Func Offset: 0xf0
	// Line 1965, Address: 0x247798, Func Offset: 0xf8
	// Line 1966, Address: 0x2477a8, Func Offset: 0x108
	// Line 1967, Address: 0x2477b0, Func Offset: 0x110
	// Line 1968, Address: 0x2477b8, Func Offset: 0x118
	// Line 1969, Address: 0x2477c4, Func Offset: 0x124
	// Line 1970, Address: 0x2477c8, Func Offset: 0x128
	// Line 1971, Address: 0x2477d0, Func Offset: 0x130
	// Line 1973, Address: 0x2477d4, Func Offset: 0x134
	// Line 1971, Address: 0x2477d8, Func Offset: 0x138
	// Line 1973, Address: 0x2477dc, Func Offset: 0x13c
	// Line 1974, Address: 0x2477f4, Func Offset: 0x154
	// Line 1976, Address: 0x247804, Func Offset: 0x164
	// Line 1977, Address: 0x247828, Func Offset: 0x188
	// Line 1978, Address: 0x247834, Func Offset: 0x194
	// Line 1979, Address: 0x24783c, Func Offset: 0x19c
	// Line 1980, Address: 0x247840, Func Offset: 0x1a0
	// Line 1981, Address: 0x24784c, Func Offset: 0x1ac
	// Line 1982, Address: 0x247874, Func Offset: 0x1d4
	// Line 1983, Address: 0x247884, Func Offset: 0x1e4
	// Line 1984, Address: 0x24788c, Func Offset: 0x1ec
	// Line 1985, Address: 0x247894, Func Offset: 0x1f4
	// Line 1986, Address: 0x247898, Func Offset: 0x1f8
	// Line 1987, Address: 0x2478b8, Func Offset: 0x218
	// Line 1988, Address: 0x2478c4, Func Offset: 0x224
	// Line 1990, Address: 0x2478d4, Func Offset: 0x234
	// Line 1991, Address: 0x2478f8, Func Offset: 0x258
	// Line 1993, Address: 0x247900, Func Offset: 0x260
	// Line 1995, Address: 0x247908, Func Offset: 0x268
	// Line 1996, Address: 0x247924, Func Offset: 0x284
	// Line 1997, Address: 0x24792c, Func Offset: 0x28c
	// Line 1999, Address: 0x247930, Func Offset: 0x290
	// Line 1997, Address: 0x247934, Func Offset: 0x294
	// Line 1999, Address: 0x247938, Func Offset: 0x298
	// Line 1998, Address: 0x24793c, Func Offset: 0x29c
	// Line 1999, Address: 0x247944, Func Offset: 0x2a4
	// Line 2001, Address: 0x24794c, Func Offset: 0x2ac
	// Line 2002, Address: 0x247954, Func Offset: 0x2b4
	// Line 2003, Address: 0x247958, Func Offset: 0x2b8
	// Line 2004, Address: 0x24797c, Func Offset: 0x2dc
	// Line 2006, Address: 0x24798c, Func Offset: 0x2ec
	// Line 2008, Address: 0x247998, Func Offset: 0x2f8
	// Line 2010, Address: 0x2479a0, Func Offset: 0x300
	// Line 2013, Address: 0x2479bc, Func Offset: 0x31c
	// Line 2014, Address: 0x2479c0, Func Offset: 0x320
	// Func End, Address: 0x2479d4, Func Offset: 0x334
}

// 
// Start address: 0x2479e0
void EnemyFlamesControlFinished(sfObj* obj)
{
	EnemyFlamesWork* ew;
	// Line 2018, Address: 0x2479e0, Func Offset: 0
	// Line 2020, Address: 0x2479f0, Func Offset: 0x10
	// Line 2021, Address: 0x2479fc, Func Offset: 0x1c
	// Line 2022, Address: 0x247a44, Func Offset: 0x64
	// Line 2023, Address: 0x247a48, Func Offset: 0x68
	// Line 2024, Address: 0x247a58, Func Offset: 0x78
	// Line 2025, Address: 0x247a64, Func Offset: 0x84
	// Line 2026, Address: 0x247a70, Func Offset: 0x90
	// Line 2029, Address: 0x247a7c, Func Offset: 0x9c
	// Line 2030, Address: 0x247a80, Func Offset: 0xa0
	// Line 2031, Address: 0x247a8c, Func Offset: 0xac
	// Line 2032, Address: 0x247a9c, Func Offset: 0xbc
	// Line 2033, Address: 0x247aa8, Func Offset: 0xc8
	// Line 2034, Address: 0x247ab0, Func Offset: 0xd0
	// Line 2035, Address: 0x247abc, Func Offset: 0xdc
	// Line 2036, Address: 0x247ac8, Func Offset: 0xe8
	// Line 2037, Address: 0x247ad4, Func Offset: 0xf4
	// Line 2038, Address: 0x247ae0, Func Offset: 0x100
	// Line 2039, Address: 0x247ae8, Func Offset: 0x108
	// Line 2040, Address: 0x247aec, Func Offset: 0x10c
	// Line 2041, Address: 0x247b04, Func Offset: 0x124
	// Line 2042, Address: 0x247b08, Func Offset: 0x128
	// Line 2041, Address: 0x247b0c, Func Offset: 0x12c
	// Line 2042, Address: 0x247b10, Func Offset: 0x130
	// Line 2043, Address: 0x247b18, Func Offset: 0x138
	// Line 2044, Address: 0x247b20, Func Offset: 0x140
	// Line 2045, Address: 0x247b4c, Func Offset: 0x16c
	// Line 2047, Address: 0x247b50, Func Offset: 0x170
	// Line 2051, Address: 0x247b58, Func Offset: 0x178
	// Line 2053, Address: 0x247b60, Func Offset: 0x180
	// Line 2055, Address: 0x247b68, Func Offset: 0x188
	// Line 2057, Address: 0x247b70, Func Offset: 0x190
	// Line 2058, Address: 0x247b80, Func Offset: 0x1a0
	// Line 2059, Address: 0x247b90, Func Offset: 0x1b0
	// Line 2060, Address: 0x247b9c, Func Offset: 0x1bc
	// Line 2061, Address: 0x247ba8, Func Offset: 0x1c8
	// Line 2062, Address: 0x247bb4, Func Offset: 0x1d4
	// Line 2063, Address: 0x247bb8, Func Offset: 0x1d8
	// Line 2065, Address: 0x247bc8, Func Offset: 0x1e8
	// Line 2069, Address: 0x247bd0, Func Offset: 0x1f0
	// Line 2070, Address: 0x247be0, Func Offset: 0x200
	// Line 2071, Address: 0x247bec, Func Offset: 0x20c
	// Line 2073, Address: 0x247bfc, Func Offset: 0x21c
	// Line 2075, Address: 0x247c08, Func Offset: 0x228
	// Line 2076, Address: 0x247c14, Func Offset: 0x234
	// Line 2077, Address: 0x247c20, Func Offset: 0x240
	// Line 2078, Address: 0x247c2c, Func Offset: 0x24c
	// Line 2080, Address: 0x247c70, Func Offset: 0x290
	// Line 2082, Address: 0x247c80, Func Offset: 0x2a0
	// Line 2084, Address: 0x247c8c, Func Offset: 0x2ac
	// Line 2085, Address: 0x247c94, Func Offset: 0x2b4
	// Line 2086, Address: 0x247c98, Func Offset: 0x2b8
	// Line 2087, Address: 0x247cbc, Func Offset: 0x2dc
	// Line 2089, Address: 0x247ccc, Func Offset: 0x2ec
	// Line 2090, Address: 0x247cdc, Func Offset: 0x2fc
	// Line 2091, Address: 0x247ce8, Func Offset: 0x308
	// Line 2092, Address: 0x247cf0, Func Offset: 0x310
	// Line 2093, Address: 0x247cfc, Func Offset: 0x31c
	// Line 2094, Address: 0x247d00, Func Offset: 0x320
	// Line 2097, Address: 0x247d0c, Func Offset: 0x32c
	// Line 2098, Address: 0x247d10, Func Offset: 0x330
	// Func End, Address: 0x247d24, Func Offset: 0x344
}

// 
// Start address: 0x247d30
void EnemyFlamesControlWait(sfObj* obj)
{
	EnemyFlamesWork* ew;
	// Line 2102, Address: 0x247d30, Func Offset: 0
	// Line 2104, Address: 0x247d40, Func Offset: 0x10
	// Line 2105, Address: 0x247d4c, Func Offset: 0x1c
	// Line 2107, Address: 0x247d70, Func Offset: 0x40
	// Line 2108, Address: 0x247d7c, Func Offset: 0x4c
	// Line 2109, Address: 0x247d88, Func Offset: 0x58
	// Line 2110, Address: 0x247d98, Func Offset: 0x68
	// Line 2111, Address: 0x247da4, Func Offset: 0x74
	// Line 2112, Address: 0x247db0, Func Offset: 0x80
	// Line 2113, Address: 0x247dbc, Func Offset: 0x8c
	// Line 2114, Address: 0x247dcc, Func Offset: 0x9c
	// Line 2115, Address: 0x247dd8, Func Offset: 0xa8
	// Line 2116, Address: 0x247de0, Func Offset: 0xb0
	// Line 2117, Address: 0x247dec, Func Offset: 0xbc
	// Line 2118, Address: 0x247df4, Func Offset: 0xc4
	// Line 2121, Address: 0x247df8, Func Offset: 0xc8
	// Line 2118, Address: 0x247dfc, Func Offset: 0xcc
	// Line 2120, Address: 0x247e00, Func Offset: 0xd0
	// Line 2119, Address: 0x247e04, Func Offset: 0xd4
	// Line 2121, Address: 0x247e08, Func Offset: 0xd8
	// Line 2122, Address: 0x247e10, Func Offset: 0xe0
	// Line 2124, Address: 0x247e18, Func Offset: 0xe8
	// Line 2126, Address: 0x247e3c, Func Offset: 0x10c
	// Line 2129, Address: 0x247e44, Func Offset: 0x114
	// Line 2130, Address: 0x247e48, Func Offset: 0x118
	// Func End, Address: 0x247e5c, Func Offset: 0x12c
}

// 
// Start address: 0x247e60
void EnemyFlamesControlEventWait(sfObj* obj)
{
	EnemyFlamesWork* ew;
	// Line 2134, Address: 0x247e60, Func Offset: 0
	// Line 2136, Address: 0x247e70, Func Offset: 0x10
	// Line 2137, Address: 0x247e7c, Func Offset: 0x1c
	// Line 2139, Address: 0x247ea0, Func Offset: 0x40
	// Line 2140, Address: 0x247eac, Func Offset: 0x4c
	// Line 2141, Address: 0x247eb8, Func Offset: 0x58
	// Line 2142, Address: 0x247ec8, Func Offset: 0x68
	// Line 2143, Address: 0x247ed4, Func Offset: 0x74
	// Line 2144, Address: 0x247ee0, Func Offset: 0x80
	// Line 2145, Address: 0x247ef0, Func Offset: 0x90
	// Line 2146, Address: 0x247efc, Func Offset: 0x9c
	// Line 2147, Address: 0x247f04, Func Offset: 0xa4
	// Line 2148, Address: 0x247f10, Func Offset: 0xb0
	// Line 2150, Address: 0x247f14, Func Offset: 0xb4
	// Line 2149, Address: 0x247f18, Func Offset: 0xb8
	// Line 2151, Address: 0x247f1c, Func Offset: 0xbc
	// Line 2152, Address: 0x247f28, Func Offset: 0xc8
	// Line 2154, Address: 0x247f30, Func Offset: 0xd0
	// Line 2155, Address: 0x247f44, Func Offset: 0xe4
	// Line 2156, Address: 0x247f4c, Func Offset: 0xec
	// Line 2157, Address: 0x247f5c, Func Offset: 0xfc
	// Line 2161, Address: 0x247f68, Func Offset: 0x108
	// Func End, Address: 0x247f7c, Func Offset: 0x11c
}

// 
// Start address: 0x247f80
void EnemyFlamesControlFlagWait(sfObj* obj)
{
	EnemyFlamesWork* ew;
	// Line 2165, Address: 0x247f80, Func Offset: 0
	// Line 2167, Address: 0x247f90, Func Offset: 0x10
	// Line 2168, Address: 0x247f9c, Func Offset: 0x1c
	// Line 2169, Address: 0x247fac, Func Offset: 0x2c
	// Line 2170, Address: 0x247fb4, Func Offset: 0x34
	// Line 2171, Address: 0x247fc4, Func Offset: 0x44
	// Line 2173, Address: 0x247fc8, Func Offset: 0x48
	// Line 2172, Address: 0x247fcc, Func Offset: 0x4c
	// Line 2174, Address: 0x247fd0, Func Offset: 0x50
	// Line 2175, Address: 0x247fdc, Func Offset: 0x5c
	// Line 2176, Address: 0x247fe0, Func Offset: 0x60
	// Func End, Address: 0x247ff4, Func Offset: 0x74
}

// 
// Start address: 0x248000
void EnemyFlamesControlTest()
{
	// Line 2219, Address: 0x248000, Func Offset: 0
	// Func End, Address: 0x248008, Func Offset: 0x8
}

// 
// Start address: 0x248010
int EnemyFlamesCheckCanAttack(sfObj* obj)
{
	int id;
	// Line 2228, Address: 0x248010, Func Offset: 0
	// Line 2230, Address: 0x24801c, Func Offset: 0xc
	// Line 2234, Address: 0x24804c, Func Offset: 0x3c
	// Line 2235, Address: 0x248054, Func Offset: 0x44
	// Line 2236, Address: 0x248058, Func Offset: 0x48
	// Line 2237, Address: 0x248060, Func Offset: 0x50
	// Func End, Address: 0x248070, Func Offset: 0x60
}

// 
// Start address: 0x248070
void EnemyFlamesSetExtentDamage(sfObj* obj)
{
	EnemyFlamesWork* ew;
	int ptype;
	float f1;
	float f2;
	// Line 2241, Address: 0x248070, Func Offset: 0
	// Line 2245, Address: 0x248088, Func Offset: 0x18
	// Line 2246, Address: 0x248094, Func Offset: 0x24
	// Line 2247, Address: 0x2480a0, Func Offset: 0x30
	// Line 2249, Address: 0x2480a8, Func Offset: 0x38
	// Line 2246, Address: 0x2480ac, Func Offset: 0x3c
	// Line 2248, Address: 0x2480b0, Func Offset: 0x40
	// Line 2247, Address: 0x2480bc, Func Offset: 0x4c
	// Line 2248, Address: 0x2480c0, Func Offset: 0x50
	// Line 2247, Address: 0x2480cc, Func Offset: 0x5c
	// Line 2248, Address: 0x2480d0, Func Offset: 0x60
	// Line 2249, Address: 0x2480d4, Func Offset: 0x64
	// Line 2251, Address: 0x248108, Func Offset: 0x98
	// Line 2262, Address: 0x24811c, Func Offset: 0xac
	// Line 2263, Address: 0x248120, Func Offset: 0xb0
	// Line 2264, Address: 0x248134, Func Offset: 0xc4
	// Line 2265, Address: 0x24813c, Func Offset: 0xcc
	// Line 2266, Address: 0x248140, Func Offset: 0xd0
	// Line 2271, Address: 0x248178, Func Offset: 0x108
	// Line 2274, Address: 0x24818c, Func Offset: 0x11c
	// Line 2275, Address: 0x248190, Func Offset: 0x120
	// Func End, Address: 0x2481ac, Func Offset: 0x13c
}

// 
// Start address: 0x2481b0
void EnemyFlamesCheckExorcismDamage(sfObj* obj)
{
	EnemyFlamesWork* ew;
	float d;
	// Line 2279, Address: 0x2481b0, Func Offset: 0
	// Line 2282, Address: 0x2481c4, Func Offset: 0x14
	// Line 2283, Address: 0x2481d0, Func Offset: 0x20
	// Line 2284, Address: 0x2481dc, Func Offset: 0x2c
	// Line 2285, Address: 0x2481f0, Func Offset: 0x40
	// Line 2286, Address: 0x248200, Func Offset: 0x50
	// Line 2287, Address: 0x248208, Func Offset: 0x58
	// Line 2288, Address: 0x248210, Func Offset: 0x60
	// Line 2290, Address: 0x248220, Func Offset: 0x70
	// Line 2291, Address: 0x248240, Func Offset: 0x90
	// Line 2294, Address: 0x248258, Func Offset: 0xa8
	// Line 2295, Address: 0x24828c, Func Offset: 0xdc
	// Line 2296, Address: 0x248290, Func Offset: 0xe0
	// Line 2297, Address: 0x248298, Func Offset: 0xe8
	// Line 2298, Address: 0x2482b8, Func Offset: 0x108
	// Line 2300, Address: 0x2482c0, Func Offset: 0x110
	// Line 2301, Address: 0x2482d4, Func Offset: 0x124
	// Line 2302, Address: 0x2482e0, Func Offset: 0x130
	// Line 2303, Address: 0x2482e4, Func Offset: 0x134
	// Line 2302, Address: 0x2482e8, Func Offset: 0x138
	// Line 2303, Address: 0x2482ec, Func Offset: 0x13c
	// Line 2305, Address: 0x2482f4, Func Offset: 0x144
	// Line 2308, Address: 0x2482fc, Func Offset: 0x14c
	// Line 2309, Address: 0x248300, Func Offset: 0x150
	// Line 2310, Address: 0x248314, Func Offset: 0x164
	// Line 2311, Address: 0x248320, Func Offset: 0x170
	// Line 2312, Address: 0x24832c, Func Offset: 0x17c
	// Line 2314, Address: 0x248330, Func Offset: 0x180
	// Line 2316, Address: 0x248338, Func Offset: 0x188
	// Line 2318, Address: 0x248340, Func Offset: 0x190
	// Line 2319, Address: 0x248348, Func Offset: 0x198
	// Line 2321, Address: 0x248350, Func Offset: 0x1a0
	// Line 2322, Address: 0x24836c, Func Offset: 0x1bc
	// Line 2323, Address: 0x248378, Func Offset: 0x1c8
	// Line 2324, Address: 0x248394, Func Offset: 0x1e4
	// Line 2325, Address: 0x248398, Func Offset: 0x1e8
	// Func End, Address: 0x2483b0, Func Offset: 0x200
}

// 
// Start address: 0x2483b0
void EnemyFlamesSetAttackCommand(sfObj* obj, float timer)
{
	// Line 2329, Address: 0x2483b0, Func Offset: 0
	// Line 2330, Address: 0x2483c4, Func Offset: 0x14
	// Line 2332, Address: 0x2483ec, Func Offset: 0x3c
	// Func End, Address: 0x248400, Func Offset: 0x50
}

// 
// Start address: 0x248400
void EnemyFlamesSetEventDamageCheck(sfObj* obj)
{
	EnemyFlamesWork* ew;
	// Line 2336, Address: 0x248400, Func Offset: 0
	// Line 2338, Address: 0x248410, Func Offset: 0x10
	// Line 2339, Address: 0x24841c, Func Offset: 0x1c
	// Line 2341, Address: 0x248448, Func Offset: 0x48
	// Line 2343, Address: 0x248474, Func Offset: 0x74
	// Line 2344, Address: 0x248478, Func Offset: 0x78
	// Line 2345, Address: 0x248490, Func Offset: 0x90
	// Line 2347, Address: 0x2484a8, Func Offset: 0xa8
	// Line 2356, Address: 0x2484b0, Func Offset: 0xb0
	// Line 2358, Address: 0x2484c8, Func Offset: 0xc8
	// Line 2360, Address: 0x2484d0, Func Offset: 0xd0
	// Line 2362, Address: 0x2484ec, Func Offset: 0xec
	// Line 2363, Address: 0x2484f4, Func Offset: 0xf4
	// Line 2364, Address: 0x2484f8, Func Offset: 0xf8
	// Line 2366, Address: 0x248514, Func Offset: 0x114
	// Line 2367, Address: 0x248528, Func Offset: 0x128
	// Line 2369, Address: 0x248540, Func Offset: 0x140
	// Line 2370, Address: 0x248548, Func Offset: 0x148
	// Line 2373, Address: 0x248564, Func Offset: 0x164
	// Line 2374, Address: 0x24856c, Func Offset: 0x16c
	// Line 2375, Address: 0x248570, Func Offset: 0x170
	// Line 2377, Address: 0x24858c, Func Offset: 0x18c
	// Line 2378, Address: 0x2485a0, Func Offset: 0x1a0
	// Line 2380, Address: 0x2485b8, Func Offset: 0x1b8
	// Line 2381, Address: 0x2485c0, Func Offset: 0x1c0
	// Line 2385, Address: 0x2485dc, Func Offset: 0x1dc
	// Line 2386, Address: 0x2485e0, Func Offset: 0x1e0
	// Func End, Address: 0x2485f4, Func Offset: 0x1f4
}

// 
// Start address: 0x248600
void EnemyFlamesSoundStart(sfObj* obj)
{
	// Line 2390, Address: 0x248600, Func Offset: 0
	// Line 2391, Address: 0x24860c, Func Offset: 0xc
	// Line 2392, Address: 0x24861c, Func Offset: 0x1c
	// Line 2393, Address: 0x248624, Func Offset: 0x24
	// Line 2394, Address: 0x248628, Func Offset: 0x28
	// Func End, Address: 0x248638, Func Offset: 0x38
}

// 
// Start address: 0x248640
void EnemyFlamesSoundStop(sfObj* obj)
{
	// Line 2399, Address: 0x248640, Func Offset: 0
	// Func End, Address: 0x248648, Func Offset: 0x8
}

// 
// Start address: 0x248650
void EnemyEDFlamesBiteStep1(void* obj)
{
	EnemyFlamesWork* ew;
	float tpos[4];
	float ppos[4];
	float dir[4];
	float rot[4];
	// Line 2406, Address: 0x248650, Func Offset: 0
	// Line 2410, Address: 0x248660, Func Offset: 0x10
	// Line 2411, Address: 0x248670, Func Offset: 0x20
	// Line 2412, Address: 0x248678, Func Offset: 0x28
	// Line 2411, Address: 0x24867c, Func Offset: 0x2c
	// Line 2413, Address: 0x248680, Func Offset: 0x30
	// Line 2414, Address: 0x248694, Func Offset: 0x44
	// Line 2415, Address: 0x2486a8, Func Offset: 0x58
	// Line 2416, Address: 0x2486c4, Func Offset: 0x74
	// Line 2417, Address: 0x2486d0, Func Offset: 0x80
	// Line 2418, Address: 0x2486d8, Func Offset: 0x88
	// Line 2426, Address: 0x248778, Func Offset: 0x128
	// Line 2427, Address: 0x248780, Func Offset: 0x130
	// Line 2430, Address: 0x2487ac, Func Offset: 0x15c
	// Line 2431, Address: 0x2487b4, Func Offset: 0x164
	// Line 2432, Address: 0x2487c4, Func Offset: 0x174
	// Line 2433, Address: 0x2487cc, Func Offset: 0x17c
	// Line 2434, Address: 0x2487d8, Func Offset: 0x188
	// Line 2435, Address: 0x2487e4, Func Offset: 0x194
	// Line 2436, Address: 0x2487e8, Func Offset: 0x198
	// Line 2437, Address: 0x2487f0, Func Offset: 0x1a0
	// Line 2438, Address: 0x2487fc, Func Offset: 0x1ac
	// Line 2439, Address: 0x248808, Func Offset: 0x1b8
	// Line 2440, Address: 0x248818, Func Offset: 0x1c8
	// Line 2441, Address: 0x24883c, Func Offset: 0x1ec
	// Line 2442, Address: 0x248850, Func Offset: 0x200
	// Line 2443, Address: 0x248860, Func Offset: 0x210
	// Line 2444, Address: 0x24886c, Func Offset: 0x21c
	// Line 2445, Address: 0x24887c, Func Offset: 0x22c
	// Line 2446, Address: 0x248880, Func Offset: 0x230
	// Line 2447, Address: 0x24888c, Func Offset: 0x23c
	// Line 2449, Address: 0x248898, Func Offset: 0x248
	// Line 2450, Address: 0x2488a4, Func Offset: 0x254
	// Line 2451, Address: 0x2488b0, Func Offset: 0x260
	// Line 2452, Address: 0x2488c0, Func Offset: 0x270
	// Line 2453, Address: 0x2488cc, Func Offset: 0x27c
	// Line 2455, Address: 0x2488d8, Func Offset: 0x288
	// Func End, Address: 0x2488ec, Func Offset: 0x29c
}

// 
// Start address: 0x2488f0
void EnemyEDFlamesBiteEnd(void* obj)
{
	// Line 2459, Address: 0x2488f0, Func Offset: 0
	// Line 2461, Address: 0x2488fc, Func Offset: 0xc
	// Line 2462, Address: 0x248904, Func Offset: 0x14
	// Line 2463, Address: 0x248928, Func Offset: 0x38
	// Line 2465, Address: 0x248938, Func Offset: 0x48
	// Line 2466, Address: 0x248944, Func Offset: 0x54
	// Line 2467, Address: 0x248950, Func Offset: 0x60
	// Line 2468, Address: 0x248958, Func Offset: 0x68
	// Line 2469, Address: 0x248964, Func Offset: 0x74
	// Line 2470, Address: 0x248974, Func Offset: 0x84
	// Line 2471, Address: 0x248988, Func Offset: 0x98
	// Line 2472, Address: 0x2489a8, Func Offset: 0xb8
	// Line 2473, Address: 0x2489b0, Func Offset: 0xc0
	// Line 2474, Address: 0x2489b8, Func Offset: 0xc8
	// Line 2476, Address: 0x2489c4, Func Offset: 0xd4
	// Line 2477, Address: 0x2489d0, Func Offset: 0xe0
	// Line 2479, Address: 0x2489d8, Func Offset: 0xe8
	// Func End, Address: 0x2489e8, Func Offset: 0xf8
}

// 
// Start address: 0x2489f0
void EnemyEDFlamesAdditionalDamage(void* obj)
{
	EnemyFlamesWork* ew;
	EnemyBattleDamage bd;
	float dir[4];
	int d;
	float rrot[4];
	int nextstep;
	// Line 2483, Address: 0x2489f0, Func Offset: 0
	// Line 2488, Address: 0x248a08, Func Offset: 0x18
	// Line 2489, Address: 0x248a14, Func Offset: 0x24
	// Line 2490, Address: 0x248a20, Func Offset: 0x30
	// Line 2491, Address: 0x248a38, Func Offset: 0x48
	// Line 2492, Address: 0x248a44, Func Offset: 0x54
	// Line 2493, Address: 0x248a48, Func Offset: 0x58
	// Line 2494, Address: 0x248a6c, Func Offset: 0x7c
	// Line 2495, Address: 0x248aa0, Func Offset: 0xb0
	// Line 2496, Address: 0x248ac0, Func Offset: 0xd0
	// Line 2497, Address: 0x248ad0, Func Offset: 0xe0
	// Line 2498, Address: 0x248ae0, Func Offset: 0xf0
	// Line 2499, Address: 0x248ae8, Func Offset: 0xf8
	// Line 2500, Address: 0x248af0, Func Offset: 0x100
	// Line 2502, Address: 0x248b04, Func Offset: 0x114
	// Line 2503, Address: 0x248b10, Func Offset: 0x120
	// Line 2504, Address: 0x248b20, Func Offset: 0x130
	// Line 2505, Address: 0x248b28, Func Offset: 0x138
	// Line 2506, Address: 0x248b30, Func Offset: 0x140
	// Line 2508, Address: 0x248b44, Func Offset: 0x154
	// Line 2509, Address: 0x248b48, Func Offset: 0x158
	// Line 2510, Address: 0x248b58, Func Offset: 0x168
	// Line 2516, Address: 0x248bb0, Func Offset: 0x1c0
	// Line 2519, Address: 0x248be0, Func Offset: 0x1f0
	// Line 2523, Address: 0x248c40, Func Offset: 0x250
	// Line 2525, Address: 0x248c48, Func Offset: 0x258
	// Line 2526, Address: 0x248c5c, Func Offset: 0x26c
	// Line 2527, Address: 0x248c6c, Func Offset: 0x27c
	// Line 2528, Address: 0x248c84, Func Offset: 0x294
	// Line 2529, Address: 0x248ca0, Func Offset: 0x2b0
	// Line 2530, Address: 0x248ca8, Func Offset: 0x2b8
	// Line 2531, Address: 0x248cb4, Func Offset: 0x2c4
	// Line 2532, Address: 0x248cc0, Func Offset: 0x2d0
	// Line 2533, Address: 0x248cc8, Func Offset: 0x2d8
	// Line 2535, Address: 0x248cd4, Func Offset: 0x2e4
	// Line 2536, Address: 0x248cd8, Func Offset: 0x2e8
	// Func End, Address: 0x248cf4, Func Offset: 0x304
}

// 
// Start address: 0x248d00
void EnemyEDFlamesAdditionalDamageDown(void* obj)
{
	EnemyFlamesWork* ew;
	EnemyBattleDamage bd;
	int stype;
	int sno;
	// Line 2546, Address: 0x248d00, Func Offset: 0
	// Line 2550, Address: 0x248d18, Func Offset: 0x18
	// Line 2551, Address: 0x248d24, Func Offset: 0x24
	// Line 2552, Address: 0x248d34, Func Offset: 0x34
	// Line 2554, Address: 0x248d60, Func Offset: 0x60
	// Line 2555, Address: 0x248d74, Func Offset: 0x74
	// Line 2556, Address: 0x248d78, Func Offset: 0x78
	// Line 2557, Address: 0x248d84, Func Offset: 0x84
	// Line 2558, Address: 0x248d90, Func Offset: 0x90
	// Line 2559, Address: 0x248db0, Func Offset: 0xb0
	// Line 2560, Address: 0x248dcc, Func Offset: 0xcc
	// Line 2561, Address: 0x248dd0, Func Offset: 0xd0
	// Line 2562, Address: 0x248de0, Func Offset: 0xe0
	// Line 2564, Address: 0x248de8, Func Offset: 0xe8
	// Line 2565, Address: 0x248df0, Func Offset: 0xf0
	// Line 2567, Address: 0x248df8, Func Offset: 0xf8
	// Line 2569, Address: 0x248e00, Func Offset: 0x100
	// Line 2570, Address: 0x248e10, Func Offset: 0x110
	// Line 2571, Address: 0x248e20, Func Offset: 0x120
	// Line 2572, Address: 0x248e34, Func Offset: 0x134
	// Line 2573, Address: 0x248e44, Func Offset: 0x144
	// Line 2575, Address: 0x248e60, Func Offset: 0x160
	// Line 2576, Address: 0x248e68, Func Offset: 0x168
	// Line 2577, Address: 0x248e8c, Func Offset: 0x18c
	// Line 2578, Address: 0x248e98, Func Offset: 0x198
	// Line 2580, Address: 0x248ea4, Func Offset: 0x1a4
	// Line 2581, Address: 0x248ea8, Func Offset: 0x1a8
	// Line 2582, Address: 0x248ec4, Func Offset: 0x1c4
	// Line 2583, Address: 0x248ee4, Func Offset: 0x1e4
	// Line 2584, Address: 0x248ef0, Func Offset: 0x1f0
	// Line 2585, Address: 0x248ef8, Func Offset: 0x1f8
	// Line 2588, Address: 0x248f08, Func Offset: 0x208
	// Line 2589, Address: 0x248f24, Func Offset: 0x224
	// Func End, Address: 0x248f44, Func Offset: 0x244
}

// 
// Start address: 0x248f50
void EnemyEDFlamesFinish(void* obj)
{
	// Line 2593, Address: 0x248f50, Func Offset: 0
	// Line 2595, Address: 0x248f5c, Func Offset: 0xc
	// Line 2596, Address: 0x248f64, Func Offset: 0x14
	// Line 2597, Address: 0x248f78, Func Offset: 0x28
	// Line 2598, Address: 0x248f98, Func Offset: 0x48
	// Line 2599, Address: 0x248fa0, Func Offset: 0x50
	// Line 2600, Address: 0x248fac, Func Offset: 0x5c
	// Line 2601, Address: 0x248fb8, Func Offset: 0x68
	// Func End, Address: 0x248fc8, Func Offset: 0x78
}

// 
// Start address: 0x248fd0
void EnemyEDFlamesRevivalDamage(void* obj)
{
	EnemyFlamesWork* ew;
	float dir[4];
	float d;
	// Line 2605, Address: 0x248fd0, Func Offset: 0
	// Line 2609, Address: 0x248fdc, Func Offset: 0xc
	// Line 2610, Address: 0x248fe4, Func Offset: 0x14
	// Line 2611, Address: 0x248fec, Func Offset: 0x1c
	// Line 2612, Address: 0x248ff8, Func Offset: 0x28
	// Line 2613, Address: 0x249000, Func Offset: 0x30
	// Line 2615, Address: 0x249008, Func Offset: 0x38
	// Line 2616, Address: 0x24901c, Func Offset: 0x4c
	// Line 2617, Address: 0x249028, Func Offset: 0x58
	// Line 2618, Address: 0x249044, Func Offset: 0x74
	// Line 2619, Address: 0x24904c, Func Offset: 0x7c
	// Line 2620, Address: 0x249074, Func Offset: 0xa4
	// Line 2621, Address: 0x24907c, Func Offset: 0xac
	// Line 2622, Address: 0x249088, Func Offset: 0xb8
	// Line 2623, Address: 0x249094, Func Offset: 0xc4
	// Line 2624, Address: 0x249098, Func Offset: 0xc8
	// Func End, Address: 0x2490a8, Func Offset: 0xd8
}

// 
// Start address: 0x2490b0
void EnemyEDFlamesRevivalDown(void* obj)
{
	EnemyFlamesWork* ew;
	// Line 2628, Address: 0x2490b0, Func Offset: 0
	// Line 2630, Address: 0x2490c0, Func Offset: 0x10
	// Line 2631, Address: 0x2490c8, Func Offset: 0x18
	// Line 2630, Address: 0x2490cc, Func Offset: 0x1c
	// Line 2632, Address: 0x2490d0, Func Offset: 0x20
	// Line 2631, Address: 0x2490d4, Func Offset: 0x24
	// Line 2632, Address: 0x2490d8, Func Offset: 0x28
	// Line 2633, Address: 0x2490f4, Func Offset: 0x44
	// Line 2634, Address: 0x249110, Func Offset: 0x60
	// Line 2635, Address: 0x249128, Func Offset: 0x78
	// Line 2636, Address: 0x249144, Func Offset: 0x94
	// Line 2637, Address: 0x249150, Func Offset: 0xa0
	// Line 2640, Address: 0x24918c, Func Offset: 0xdc
	// Line 2641, Address: 0x249190, Func Offset: 0xe0
	// Line 2642, Address: 0x2491a0, Func Offset: 0xf0
	// Line 2643, Address: 0x2491a8, Func Offset: 0xf8
	// Line 2644, Address: 0x2491b4, Func Offset: 0x104
	// Line 2645, Address: 0x2491bc, Func Offset: 0x10c
	// Line 2646, Address: 0x2491c4, Func Offset: 0x114
	// Line 2647, Address: 0x2491d0, Func Offset: 0x120
	// Func End, Address: 0x2491e4, Func Offset: 0x134
}

// 
// Start address: 0x2491f0
int do_use_light(sfObj* obj)
{
	// Line 2653, Address: 0x2491f0, Func Offset: 0
	// Line 2654, Address: 0x2491f8, Func Offset: 0x8
	// Line 2656, Address: 0x249200, Func Offset: 0x10
	// Line 2654, Address: 0x249204, Func Offset: 0x14
	// Line 2656, Address: 0x24920c, Func Offset: 0x1c
	// Func End, Address: 0x249214, Func Offset: 0x24
}

// 
// Start address: 0x249220
void set_light(sfObj* obj)
{
	EnemyFlamesWork* ew;
	_anon0* light;
	// Line 2663, Address: 0x249220, Func Offset: 0
	// Line 2666, Address: 0x249230, Func Offset: 0x10
	// Line 2667, Address: 0x249240, Func Offset: 0x20
	// Line 2668, Address: 0x249248, Func Offset: 0x28
	// Line 2669, Address: 0x24924c, Func Offset: 0x2c
	// Line 2670, Address: 0x249254, Func Offset: 0x34
	// Line 2671, Address: 0x249260, Func Offset: 0x40
	// Line 2672, Address: 0x249270, Func Offset: 0x50
	// Line 2673, Address: 0x249284, Func Offset: 0x64
	// Line 2674, Address: 0x24929c, Func Offset: 0x7c
	// Line 2675, Address: 0x2492a4, Func Offset: 0x84
	// Func End, Address: 0x2492bc, Func Offset: 0x9c
}

// 
// Start address: 0x2492c0
void remove_light(sfObj* obj)
{
	EnemyFlamesWork* ew;
	// Line 2679, Address: 0x2492c0, Func Offset: 0
	// Line 2681, Address: 0x2492cc, Func Offset: 0xc
	// Line 2682, Address: 0x2492dc, Func Offset: 0x1c
	// Line 2683, Address: 0x2492e4, Func Offset: 0x24
	// Line 2684, Address: 0x2492ec, Func Offset: 0x2c
	// Func End, Address: 0x249300, Func Offset: 0x40
}

// 
// Start address: 0x249300
void move_light(sfObj* obj)
{
	EnemyFlamesWork* ew;
	_anon0* light;
	float pos[4];
	float d;
	// Line 2688, Address: 0x249300, Func Offset: 0
	// Line 2693, Address: 0x249314, Func Offset: 0x14
	// Line 2695, Address: 0x249324, Func Offset: 0x24
	// Line 2697, Address: 0x249330, Func Offset: 0x30
	// Line 2698, Address: 0x249340, Func Offset: 0x40
	// Line 2699, Address: 0x249350, Func Offset: 0x50
	// Line 2700, Address: 0x24936c, Func Offset: 0x6c
	// Line 2701, Address: 0x249370, Func Offset: 0x70
	// Line 2702, Address: 0x24937c, Func Offset: 0x7c
	// Line 2703, Address: 0x249388, Func Offset: 0x88
	// Line 2704, Address: 0x249390, Func Offset: 0x90
	// Line 2703, Address: 0x249394, Func Offset: 0x94
	// Line 2704, Address: 0x249398, Func Offset: 0x98
	// Line 2702, Address: 0x24939c, Func Offset: 0x9c
	// Line 2703, Address: 0x2493a0, Func Offset: 0xa0
	// Line 2704, Address: 0x2493a8, Func Offset: 0xa8
	// Line 2703, Address: 0x2493ac, Func Offset: 0xac
	// Line 2704, Address: 0x2493b0, Func Offset: 0xb0
	// Line 2705, Address: 0x2493c8, Func Offset: 0xc8
	// Func End, Address: 0x2493e0, Func Offset: 0xe0
}

