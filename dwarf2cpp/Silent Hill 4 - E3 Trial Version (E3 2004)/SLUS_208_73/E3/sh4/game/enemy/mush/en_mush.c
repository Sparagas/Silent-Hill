typedef struct EnemyMushWork;
typedef struct sfCldPart;
typedef struct EnemyMeasureResult;
typedef struct sfObj;
typedef struct EnemyManageDataOne;
typedef struct EventFlag;
typedef struct _anon0;
typedef struct EnemySoundTypeControl;
typedef enum EnemySoundType : unsigned char;
typedef struct _anon1;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef struct _anon2;
typedef struct _anon3;
typedef struct sgBone;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef enum BattleAttackKind : unsigned char;
typedef union _anon7;
typedef struct EnemySoundTypeControlData;
typedef struct EnemyClHitResult;
typedef enum EnemyManageEntryType : unsigned char;

typedef void(*type_1)(sfObj*);
typedef void(*type_2)(sfObj*);
typedef void(*type_4)(sfObj*);
typedef void(*type_6)(sfObj*);
typedef void(*type_7)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef void(*type_18)(sfObj*);
typedef int(*type_26)(void*);

typedef unsigned char type_0[320];
typedef void(*type_3)(sfObj*)[7];
typedef _anon5 type_5[4];
typedef float type_8[4];
typedef int type_9[7];
typedef unsigned char type_10[3];
typedef _anon5 type_11[256];
typedef _anon6 type_13[4];
typedef float type_14[4];
typedef _anon7 type_15[0];
typedef float type_16[4];
typedef float type_17[4][4];
typedef short type_19[2];
typedef int type_20[0];
typedef unsigned short type_21[2];
typedef char type_22[4];
typedef unsigned char type_23[4];
typedef float type_24[1];
typedef int type_25[1];
typedef float type_27[4][6];

struct EnemyMushWork
{
	float pos[4][6];
	float growth;
	float growth_speed;
	float max_growth;
	float growth_scale;
	float wither;
	float transparency;
	float swing_h;
	float swing_h_add;
	float swing_v;
	float swing_v_add;
	float swing_r;
	float swing_r_add;
	float swing_rot;
	float timer;
	int reset_flag;
	int clip_part_num;
	EnemySoundTypeControl* sound_control;
};

struct sfCldPart
{
	sfCldBody world_hit;
	sfCldBody local_hit;
	unsigned char hit_type;
	unsigned char pad[3];
	int hit_kind;
	sgBone* parent;
	void* data;
	void* parent_cld;
};

struct EnemyMeasureResult
{
	float pos[4];
	float normal[4];
	float dist;
	int exist;
	_anon0* poly;
};

struct sfObj
{
	_anon5 fwork[256];
	_anon5* work;
	void(*func)(sfObj*);
	_anon5* work_pt0;
	_anon5* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon5* sys_work;
	_anon5* scene_work;
	_anon5* event_work;
	_anon5* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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
	_anon5 work[4];
	unsigned int padding;
};

struct EventFlag
{
	unsigned char flag[320];
};

struct _anon0
{
	_anon7 vertex[0];
};

struct EnemySoundTypeControl
{
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

struct _anon1
{
	float start[4];
	float end[4];
};

struct sfOffsetAABB
{
	_anon3 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon4 obb;
	_anon3 aabb;
	sfOffsetAABB offset_aabb;
	_anon1 line;
	_anon2 sphere;
};

struct _anon2
{
	float center[4];
	float radius;
};

struct _anon3
{
	float bmin[4];
	float bmax[4];
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

struct _anon4
{
	float mat[4][4];
	float half_w[4];
};

union _anon5
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

struct _anon6
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
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

union _anon7
{
	float node[4];
	_anon6 data[4];
};

struct EnemySoundTypeControlData
{
	EnemySoundType sound_type;
	float fadein_speed;
	float fadeout_speed;
	int call_no[0];
};

struct EnemyClHitResult
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

int mush_skeleton[7];
float bone_control_pos[4];
EnemySoundTypeControlData mush_sound;
EventFlag event_flag;
void(*mush_jump_table)(sfObj*)[7];
int(*EnemyEDBattleDamageCheck)(void*);
float en_vector_unit_y_minus[4];
float sg_vector_unit_y[4];
void(*EnemyMushDraw)(sfObj*);
void(*EnemyMushDestruct)(sfObj*);
void(*EnemyMushConstruct)(sfObj*);
void(*EnemyMushHandle)(sfObj*);

int event_flag_check();
void EnemyMushConstruct(sfObj* obj);
void EnemyMushSkeletonInit(sfObj* obj);
void EnemyMushHandle(sfObj* obj);
void EnemyMushDraw();
void EnemyMushDestruct(sfObj* obj);
void EnemyMushDataPreserve(sfObj* obj);
void EnemyMushDataExtract(sfObj* obj);
void EnemyMushControl(sfObj* obj);
void EnemyMushControlInit(sfObj* obj);
void check_hit(sfObj* obj);
void EnemyMushControlGrow(sfObj* obj);
void EnemyMushControlStand(sfObj* obj);
void EnemyMushControlDead(sfObj* obj);
void EnemyMushControlWait(sfObj* obj);
void EnemyMushControlEvent(sfObj* obj);
void EnemyMushControlEventWait(sfObj* obj);
void EnemyMushSkeletonControl(sfObj* obj);
void EnemyMushSetHitPart(sfObj* obj);
void EnemyMushHitCheck(sfObj* obj);
sfObj* EnemyMushSprout(float* pos, float time);

// 
// Start address: 0x1afb90
int event_flag_check()
{
	// Line 123, Address: 0x1afb90, Func Offset: 0
	// Line 124, Address: 0x1afb9c, Func Offset: 0xc
	// Func End, Address: 0x1afba4, Func Offset: 0x14
}

// 
// Start address: 0x1afbb0
void EnemyMushConstruct(sfObj* obj)
{
	EnemyMushWork* ew;
	EnemyManageEntryType etype;
	// Line 128, Address: 0x1afbb0, Func Offset: 0
	// Line 132, Address: 0x1afbb4, Func Offset: 0x4
	// Line 128, Address: 0x1afbb8, Func Offset: 0x8
	// Line 132, Address: 0x1afbcc, Func Offset: 0x1c
	// Line 134, Address: 0x1afbd4, Func Offset: 0x24
	// Line 135, Address: 0x1afbe0, Func Offset: 0x30
	// Line 139, Address: 0x1afc10, Func Offset: 0x60
	// Line 140, Address: 0x1afc18, Func Offset: 0x68
	// Line 143, Address: 0x1afc20, Func Offset: 0x70
	// Line 145, Address: 0x1afc30, Func Offset: 0x80
	// Line 146, Address: 0x1afc40, Func Offset: 0x90
	// Line 147, Address: 0x1afc48, Func Offset: 0x98
	// Line 149, Address: 0x1afc74, Func Offset: 0xc4
	// Line 150, Address: 0x1afc88, Func Offset: 0xd8
	// Line 152, Address: 0x1afca8, Func Offset: 0xf8
	// Line 154, Address: 0x1afcbc, Func Offset: 0x10c
	// Line 155, Address: 0x1afcc4, Func Offset: 0x114
	// Line 156, Address: 0x1afccc, Func Offset: 0x11c
	// Line 157, Address: 0x1afcd4, Func Offset: 0x124
	// Line 158, Address: 0x1afcd8, Func Offset: 0x128
	// Line 159, Address: 0x1afce4, Func Offset: 0x134
	// Line 160, Address: 0x1afcf0, Func Offset: 0x140
	// Line 161, Address: 0x1afcf4, Func Offset: 0x144
	// Line 162, Address: 0x1afcf8, Func Offset: 0x148
	// Line 164, Address: 0x1afd0c, Func Offset: 0x15c
	// Line 166, Address: 0x1afd14, Func Offset: 0x164
	// Line 167, Address: 0x1afd20, Func Offset: 0x170
	// Line 169, Address: 0x1afd30, Func Offset: 0x180
	// Line 170, Address: 0x1afd38, Func Offset: 0x188
	// Line 172, Address: 0x1afd6c, Func Offset: 0x1bc
	// Line 173, Address: 0x1afd74, Func Offset: 0x1c4
	// Line 174, Address: 0x1afd78, Func Offset: 0x1c8
	// Func End, Address: 0x1afd94, Func Offset: 0x1e4
}

// 
// Start address: 0x1afda0
void EnemyMushSkeletonInit(sfObj* obj)
{
	EnemyMushWork* ew;
	float pos[4];
	int i;
	float d;
	// Line 178, Address: 0x1afda0, Func Offset: 0
	// Line 183, Address: 0x1afdb0, Func Offset: 0x10
	// Line 184, Address: 0x1afdbc, Func Offset: 0x1c
	// Line 185, Address: 0x1afdc8, Func Offset: 0x28
	// Line 186, Address: 0x1afddc, Func Offset: 0x3c
	// Line 185, Address: 0x1afde4, Func Offset: 0x44
	// Line 188, Address: 0x1afdec, Func Offset: 0x4c
	// Line 187, Address: 0x1afdf4, Func Offset: 0x54
	// Line 188, Address: 0x1afdf8, Func Offset: 0x58
	// Line 187, Address: 0x1afdfc, Func Offset: 0x5c
	// Line 188, Address: 0x1afe04, Func Offset: 0x64
	// Line 189, Address: 0x1afe0c, Func Offset: 0x6c
	// Line 190, Address: 0x1afe1c, Func Offset: 0x7c
	// Line 191, Address: 0x1afe20, Func Offset: 0x80
	// Line 192, Address: 0x1afe24, Func Offset: 0x84
	// Line 193, Address: 0x1afe28, Func Offset: 0x88
	// Line 194, Address: 0x1afe2c, Func Offset: 0x8c
	// Line 195, Address: 0x1afe30, Func Offset: 0x90
	// Line 196, Address: 0x1afe34, Func Offset: 0x94
	// Line 197, Address: 0x1afe38, Func Offset: 0x98
	// Func End, Address: 0x1afe4c, Func Offset: 0xac
}

// 
// Start address: 0x1afe50
void EnemyMushHandle(sfObj* obj)
{
	EnemyMushWork* ew;
	// Line 201, Address: 0x1afe50, Func Offset: 0
	// Line 203, Address: 0x1afe64, Func Offset: 0x14
	// Line 204, Address: 0x1afe6c, Func Offset: 0x1c
	// Line 205, Address: 0x1afe74, Func Offset: 0x24
	// Line 206, Address: 0x1afe88, Func Offset: 0x38
	// Line 208, Address: 0x1afe90, Func Offset: 0x40
	// Line 209, Address: 0x1afe98, Func Offset: 0x48
	// Line 210, Address: 0x1afea0, Func Offset: 0x50
	// Line 211, Address: 0x1afea8, Func Offset: 0x58
	// Line 213, Address: 0x1afeb0, Func Offset: 0x60
	// Line 214, Address: 0x1afebc, Func Offset: 0x6c
	// Line 215, Address: 0x1afecc, Func Offset: 0x7c
	// Line 217, Address: 0x1afef0, Func Offset: 0xa0
	// Line 218, Address: 0x1afefc, Func Offset: 0xac
	// Line 219, Address: 0x1aff08, Func Offset: 0xb8
	// Line 221, Address: 0x1aff10, Func Offset: 0xc0
	// Func End, Address: 0x1aff28, Func Offset: 0xd8
}

// 
// Start address: 0x1aff30
void EnemyMushDraw()
{
	// Line 242, Address: 0x1aff30, Func Offset: 0
	// Func End, Address: 0x1aff38, Func Offset: 0x8
}

// 
// Start address: 0x1aff40
void EnemyMushDestruct(sfObj* obj)
{
	EnemyMushWork* ew;
	// Line 246, Address: 0x1aff40, Func Offset: 0
	// Line 248, Address: 0x1aff50, Func Offset: 0x10
	// Line 249, Address: 0x1aff58, Func Offset: 0x18
	// Line 250, Address: 0x1aff64, Func Offset: 0x24
	// Line 253, Address: 0x1aff94, Func Offset: 0x54
	// Line 254, Address: 0x1aff9c, Func Offset: 0x5c
	// Line 255, Address: 0x1affa0, Func Offset: 0x60
	// Line 256, Address: 0x1affa8, Func Offset: 0x68
	// Line 257, Address: 0x1affb0, Func Offset: 0x70
	// Line 258, Address: 0x1affb8, Func Offset: 0x78
	// Line 259, Address: 0x1affc0, Func Offset: 0x80
	// Line 260, Address: 0x1affc8, Func Offset: 0x88
	// Func End, Address: 0x1affdc, Func Offset: 0x9c
}

// 
// Start address: 0x1affe0
void EnemyMushDataPreserve(sfObj* obj)
{
	EnemyMushWork* ew;
	EnemyManageDataOne* pe;
	_anon5 iu;
	// Line 264, Address: 0x1affe0, Func Offset: 0
	// Line 268, Address: 0x1afff4, Func Offset: 0x14
	// Line 269, Address: 0x1b000c, Func Offset: 0x2c
	// Line 270, Address: 0x1b0014, Func Offset: 0x34
	// Line 271, Address: 0x1b0020, Func Offset: 0x40
	// Line 272, Address: 0x1b002c, Func Offset: 0x4c
	// Line 274, Address: 0x1b0038, Func Offset: 0x58
	// Line 273, Address: 0x1b003c, Func Offset: 0x5c
	// Line 276, Address: 0x1b0040, Func Offset: 0x60
	// Line 278, Address: 0x1b0044, Func Offset: 0x64
	// Line 273, Address: 0x1b0048, Func Offset: 0x68
	// Line 274, Address: 0x1b004c, Func Offset: 0x6c
	// Line 275, Address: 0x1b0054, Func Offset: 0x74
	// Line 276, Address: 0x1b005c, Func Offset: 0x7c
	// Line 277, Address: 0x1b0064, Func Offset: 0x84
	// Line 278, Address: 0x1b006c, Func Offset: 0x8c
	// Line 279, Address: 0x1b0074, Func Offset: 0x94
	// Func End, Address: 0x1b0090, Func Offset: 0xb0
}

// 
// Start address: 0x1b0090
void EnemyMushDataExtract(sfObj* obj)
{
	EnemyMushWork* ew;
	EnemyManageDataOne* pe;
	// Line 283, Address: 0x1b0090, Func Offset: 0
	// Line 286, Address: 0x1b00a4, Func Offset: 0x14
	// Line 287, Address: 0x1b00b0, Func Offset: 0x20
	// Line 288, Address: 0x1b00c4, Func Offset: 0x34
	// Line 289, Address: 0x1b00d0, Func Offset: 0x40
	// Line 290, Address: 0x1b00dc, Func Offset: 0x4c
	// Line 293, Address: 0x1b00e0, Func Offset: 0x50
	// Line 294, Address: 0x1b00e4, Func Offset: 0x54
	// Line 290, Address: 0x1b00e8, Func Offset: 0x58
	// Line 291, Address: 0x1b00ec, Func Offset: 0x5c
	// Line 292, Address: 0x1b00f4, Func Offset: 0x64
	// Line 294, Address: 0x1b00fc, Func Offset: 0x6c
	// Line 297, Address: 0x1b0104, Func Offset: 0x74
	// Line 298, Address: 0x1b0110, Func Offset: 0x80
	// Func End, Address: 0x1b0128, Func Offset: 0x98
}

// 
// Start address: 0x1b0130
void EnemyMushControl(sfObj* obj)
{
	int step;
	// Line 334, Address: 0x1b0130, Func Offset: 0
	// Line 339, Address: 0x1b013c, Func Offset: 0xc
	// Line 341, Address: 0x1b0144, Func Offset: 0x14
	// Line 342, Address: 0x1b0160, Func Offset: 0x30
	// Func End, Address: 0x1b0170, Func Offset: 0x40
}

// 
// Start address: 0x1b0170
void EnemyMushControlInit(sfObj* obj)
{
	EnemyMushWork* ew;
	// Line 346, Address: 0x1b0170, Func Offset: 0
	// Line 348, Address: 0x1b0180, Func Offset: 0x10
	// Line 349, Address: 0x1b018c, Func Offset: 0x1c
	// Line 351, Address: 0x1b01a4, Func Offset: 0x34
	// Line 352, Address: 0x1b01ac, Func Offset: 0x3c
	// Line 353, Address: 0x1b01c8, Func Offset: 0x58
	// Line 354, Address: 0x1b01ec, Func Offset: 0x7c
	// Line 355, Address: 0x1b0204, Func Offset: 0x94
	// Line 354, Address: 0x1b0208, Func Offset: 0x98
	// Line 356, Address: 0x1b0214, Func Offset: 0xa4
	// Line 357, Address: 0x1b022c, Func Offset: 0xbc
	// Line 358, Address: 0x1b0248, Func Offset: 0xd8
	// Line 360, Address: 0x1b0268, Func Offset: 0xf8
	// Line 358, Address: 0x1b026c, Func Offset: 0xfc
	// Line 359, Address: 0x1b0274, Func Offset: 0x104
	// Line 360, Address: 0x1b0278, Func Offset: 0x108
	// Line 361, Address: 0x1b027c, Func Offset: 0x10c
	// Line 362, Address: 0x1b0280, Func Offset: 0x110
	// Line 363, Address: 0x1b0284, Func Offset: 0x114
	// Line 364, Address: 0x1b028c, Func Offset: 0x11c
	// Line 365, Address: 0x1b0290, Func Offset: 0x120
	// Line 366, Address: 0x1b02ac, Func Offset: 0x13c
	// Line 367, Address: 0x1b02d0, Func Offset: 0x160
	// Line 369, Address: 0x1b02ec, Func Offset: 0x17c
	// Line 367, Address: 0x1b02f0, Func Offset: 0x180
	// Line 369, Address: 0x1b02f4, Func Offset: 0x184
	// Line 367, Address: 0x1b02f8, Func Offset: 0x188
	// Line 368, Address: 0x1b02fc, Func Offset: 0x18c
	// Line 367, Address: 0x1b0300, Func Offset: 0x190
	// Line 369, Address: 0x1b0310, Func Offset: 0x1a0
	// Line 370, Address: 0x1b0318, Func Offset: 0x1a8
	// Line 372, Address: 0x1b034c, Func Offset: 0x1dc
	// Line 373, Address: 0x1b0350, Func Offset: 0x1e0
	// Line 375, Address: 0x1b0358, Func Offset: 0x1e8
	// Line 376, Address: 0x1b037c, Func Offset: 0x20c
	// Line 377, Address: 0x1b0380, Func Offset: 0x210
	// Line 378, Address: 0x1b038c, Func Offset: 0x21c
	// Line 379, Address: 0x1b0398, Func Offset: 0x228
	// Line 380, Address: 0x1b03a4, Func Offset: 0x234
	// Line 382, Address: 0x1b03ac, Func Offset: 0x23c
	// Line 383, Address: 0x1b03b0, Func Offset: 0x240
	// Line 384, Address: 0x1b03bc, Func Offset: 0x24c
	// Line 385, Address: 0x1b03c8, Func Offset: 0x258
	// Line 386, Address: 0x1b03d4, Func Offset: 0x264
	// Line 389, Address: 0x1b03e0, Func Offset: 0x270
	// Line 390, Address: 0x1b03e8, Func Offset: 0x278
	// Line 391, Address: 0x1b03f0, Func Offset: 0x280
	// Line 393, Address: 0x1b040c, Func Offset: 0x29c
	// Line 394, Address: 0x1b0410, Func Offset: 0x2a0
	// Line 395, Address: 0x1b0420, Func Offset: 0x2b0
	// Line 398, Address: 0x1b045c, Func Offset: 0x2ec
	// Line 399, Address: 0x1b046c, Func Offset: 0x2fc
	// Line 400, Address: 0x1b0478, Func Offset: 0x308
	// Line 401, Address: 0x1b0480, Func Offset: 0x310
	// Line 403, Address: 0x1b048c, Func Offset: 0x31c
	// Line 404, Address: 0x1b0498, Func Offset: 0x328
	// Line 406, Address: 0x1b049c, Func Offset: 0x32c
	// Line 407, Address: 0x1b04ac, Func Offset: 0x33c
	// Line 409, Address: 0x1b04b0, Func Offset: 0x340
	// Line 408, Address: 0x1b04b4, Func Offset: 0x344
	// Line 409, Address: 0x1b04c4, Func Offset: 0x354
	// Line 410, Address: 0x1b04cc, Func Offset: 0x35c
	// Func End, Address: 0x1b04e0, Func Offset: 0x370
}

// 
// Start address: 0x1b04e0
void check_hit(sfObj* obj)
{
	BattleAttackKind bak;
	// Line 429, Address: 0x1b04e0, Func Offset: 0
	// Line 431, Address: 0x1b04e4, Func Offset: 0x4
	// Line 429, Address: 0x1b04e8, Func Offset: 0x8
	// Line 431, Address: 0x1b04f8, Func Offset: 0x18
	// Line 432, Address: 0x1b0524, Func Offset: 0x44
	// Line 434, Address: 0x1b0528, Func Offset: 0x48
	// Line 436, Address: 0x1b0530, Func Offset: 0x50
	// Line 438, Address: 0x1b0534, Func Offset: 0x54
	// Line 439, Address: 0x1b0538, Func Offset: 0x58
	// Line 440, Address: 0x1b0544, Func Offset: 0x64
	// Line 441, Address: 0x1b054c, Func Offset: 0x6c
	// Line 442, Address: 0x1b0558, Func Offset: 0x78
	// Line 443, Address: 0x1b0564, Func Offset: 0x84
	// Line 444, Address: 0x1b0570, Func Offset: 0x90
	// Line 447, Address: 0x1b0588, Func Offset: 0xa8
	// Func End, Address: 0x1b059c, Func Offset: 0xbc
}

// 
// Start address: 0x1b05a0
void EnemyMushControlGrow(sfObj* obj)
{
	EnemyMushWork* ew;
	float growth;
	// Line 451, Address: 0x1b05a0, Func Offset: 0
	// Line 454, Address: 0x1b05b4, Func Offset: 0x14
	// Line 455, Address: 0x1b05c4, Func Offset: 0x24
	// Line 456, Address: 0x1b05cc, Func Offset: 0x2c
	// Line 458, Address: 0x1b05d8, Func Offset: 0x38
	// Line 459, Address: 0x1b05e0, Func Offset: 0x40
	// Line 460, Address: 0x1b05ec, Func Offset: 0x4c
	// Line 459, Address: 0x1b05f0, Func Offset: 0x50
	// Line 460, Address: 0x1b05f8, Func Offset: 0x58
	// Line 461, Address: 0x1b0608, Func Offset: 0x68
	// Line 462, Address: 0x1b0648, Func Offset: 0xa8
	// Line 463, Address: 0x1b0650, Func Offset: 0xb0
	// Line 465, Address: 0x1b065c, Func Offset: 0xbc
	// Line 466, Address: 0x1b0668, Func Offset: 0xc8
	// Line 467, Address: 0x1b0678, Func Offset: 0xd8
	// Line 470, Address: 0x1b0680, Func Offset: 0xe0
	// Line 472, Address: 0x1b0688, Func Offset: 0xe8
	// Line 473, Address: 0x1b0694, Func Offset: 0xf4
	// Func End, Address: 0x1b06ac, Func Offset: 0x10c
}

// 
// Start address: 0x1b06b0
void EnemyMushControlStand(sfObj* obj)
{
	// Line 477, Address: 0x1b06b0, Func Offset: 0
	// Line 478, Address: 0x1b06bc, Func Offset: 0xc
	// Line 479, Address: 0x1b06cc, Func Offset: 0x1c
	// Line 480, Address: 0x1b06d4, Func Offset: 0x24
	// Line 481, Address: 0x1b06e0, Func Offset: 0x30
	// Line 482, Address: 0x1b06ec, Func Offset: 0x3c
	// Line 483, Address: 0x1b06f0, Func Offset: 0x40
	// Line 484, Address: 0x1b06f8, Func Offset: 0x48
	// Func End, Address: 0x1b0708, Func Offset: 0x58
}

// 
// Start address: 0x1b0710
void EnemyMushControlDead(sfObj* obj)
{
	EnemyMushWork* ew;
	float dt;
	float vec[4];
	// Line 488, Address: 0x1b0710, Func Offset: 0
	// Line 491, Address: 0x1b0724, Func Offset: 0x14
	// Line 492, Address: 0x1b072c, Func Offset: 0x1c
	// Line 493, Address: 0x1b0738, Func Offset: 0x28
	// Line 495, Address: 0x1b0770, Func Offset: 0x60
	// Line 496, Address: 0x1b077c, Func Offset: 0x6c
	// Line 497, Address: 0x1b0788, Func Offset: 0x78
	// Line 498, Address: 0x1b0794, Func Offset: 0x84
	// Line 500, Address: 0x1b079c, Func Offset: 0x8c
	// Line 503, Address: 0x1b07a8, Func Offset: 0x98
	// Line 505, Address: 0x1b07c4, Func Offset: 0xb4
	// Line 507, Address: 0x1b0808, Func Offset: 0xf8
	// Line 510, Address: 0x1b082c, Func Offset: 0x11c
	// Line 512, Address: 0x1b0838, Func Offset: 0x128
	// Line 513, Address: 0x1b0860, Func Offset: 0x150
	// Line 514, Address: 0x1b0864, Func Offset: 0x154
	// Line 516, Address: 0x1b086c, Func Offset: 0x15c
	// Line 517, Address: 0x1b0874, Func Offset: 0x164
	// Line 518, Address: 0x1b0878, Func Offset: 0x168
	// Line 520, Address: 0x1b08a4, Func Offset: 0x194
	// Line 521, Address: 0x1b08b0, Func Offset: 0x1a0
	// Line 520, Address: 0x1b08b4, Func Offset: 0x1a4
	// Line 521, Address: 0x1b08d0, Func Offset: 0x1c0
	// Line 523, Address: 0x1b08d8, Func Offset: 0x1c8
	// Line 525, Address: 0x1b08e0, Func Offset: 0x1d0
	// Line 526, Address: 0x1b08fc, Func Offset: 0x1ec
	// Line 530, Address: 0x1b0908, Func Offset: 0x1f8
	// Func End, Address: 0x1b0920, Func Offset: 0x210
}

// 
// Start address: 0x1b0920
void EnemyMushControlWait(sfObj* obj)
{
	EnemyMushWork* ew;
	float dt;
	// Line 534, Address: 0x1b0920, Func Offset: 0
	// Line 537, Address: 0x1b0934, Func Offset: 0x14
	// Line 538, Address: 0x1b093c, Func Offset: 0x1c
	// Line 539, Address: 0x1b0948, Func Offset: 0x28
	// Line 540, Address: 0x1b096c, Func Offset: 0x4c
	// Line 541, Address: 0x1b0970, Func Offset: 0x50
	// Line 542, Address: 0x1b0978, Func Offset: 0x58
	// Line 543, Address: 0x1b0984, Func Offset: 0x64
	// Line 544, Address: 0x1b0990, Func Offset: 0x70
	// Line 545, Address: 0x1b099c, Func Offset: 0x7c
	// Line 546, Address: 0x1b09a8, Func Offset: 0x88
	// Line 547, Address: 0x1b09b4, Func Offset: 0x94
	// Line 546, Address: 0x1b09b8, Func Offset: 0x98
	// Line 547, Address: 0x1b09d4, Func Offset: 0xb4
	// Line 548, Address: 0x1b09dc, Func Offset: 0xbc
	// Line 549, Address: 0x1b09e4, Func Offset: 0xc4
	// Line 550, Address: 0x1b09e8, Func Offset: 0xc8
	// Line 551, Address: 0x1b0a04, Func Offset: 0xe4
	// Line 552, Address: 0x1b0a0c, Func Offset: 0xec
	// Line 553, Address: 0x1b0a20, Func Offset: 0x100
	// Line 554, Address: 0x1b0a24, Func Offset: 0x104
	// Line 553, Address: 0x1b0a28, Func Offset: 0x108
	// Line 554, Address: 0x1b0a2c, Func Offset: 0x10c
	// Line 557, Address: 0x1b0a34, Func Offset: 0x114
	// Line 558, Address: 0x1b0a38, Func Offset: 0x118
	// Func End, Address: 0x1b0a50, Func Offset: 0x130
}

// 
// Start address: 0x1b0a50
void EnemyMushControlEvent(sfObj* obj)
{
	// Line 562, Address: 0x1b0a50, Func Offset: 0
	// Line 563, Address: 0x1b0a5c, Func Offset: 0xc
	// Line 564, Address: 0x1b0a74, Func Offset: 0x24
	// Line 565, Address: 0x1b0a78, Func Offset: 0x28
	// Line 566, Address: 0x1b0a84, Func Offset: 0x34
	// Line 567, Address: 0x1b0a94, Func Offset: 0x44
	// Line 568, Address: 0x1b0aa0, Func Offset: 0x50
	// Line 569, Address: 0x1b0aac, Func Offset: 0x5c
	// Line 570, Address: 0x1b0ab8, Func Offset: 0x68
	// Line 573, Address: 0x1b0ac0, Func Offset: 0x70
	// Line 574, Address: 0x1b0ad0, Func Offset: 0x80
	// Line 576, Address: 0x1b0ad8, Func Offset: 0x88
	// Func End, Address: 0x1b0ae8, Func Offset: 0x98
}

// 
// Start address: 0x1b0af0
void EnemyMushControlEventWait(sfObj* obj)
{
	EnemyMushWork* ew;
	float dt;
	// Line 580, Address: 0x1b0af0, Func Offset: 0
	// Line 583, Address: 0x1b0b04, Func Offset: 0x14
	// Line 584, Address: 0x1b0b0c, Func Offset: 0x1c
	// Line 585, Address: 0x1b0b18, Func Offset: 0x28
	// Line 586, Address: 0x1b0b3c, Func Offset: 0x4c
	// Line 587, Address: 0x1b0b40, Func Offset: 0x50
	// Line 588, Address: 0x1b0b48, Func Offset: 0x58
	// Line 589, Address: 0x1b0b54, Func Offset: 0x64
	// Line 590, Address: 0x1b0b60, Func Offset: 0x70
	// Line 591, Address: 0x1b0b6c, Func Offset: 0x7c
	// Line 592, Address: 0x1b0b78, Func Offset: 0x88
	// Line 593, Address: 0x1b0b84, Func Offset: 0x94
	// Line 592, Address: 0x1b0b88, Func Offset: 0x98
	// Line 593, Address: 0x1b0b94, Func Offset: 0xa4
	// Line 594, Address: 0x1b0b9c, Func Offset: 0xac
	// Line 595, Address: 0x1b0ba4, Func Offset: 0xb4
	// Line 596, Address: 0x1b0ba8, Func Offset: 0xb8
	// Line 597, Address: 0x1b0bd4, Func Offset: 0xe4
	// Line 598, Address: 0x1b0be0, Func Offset: 0xf0
	// Line 599, Address: 0x1b0bf4, Func Offset: 0x104
	// Line 600, Address: 0x1b0bf8, Func Offset: 0x108
	// Line 599, Address: 0x1b0bfc, Func Offset: 0x10c
	// Line 600, Address: 0x1b0c00, Func Offset: 0x110
	// Line 604, Address: 0x1b0c08, Func Offset: 0x118
	// Func End, Address: 0x1b0c20, Func Offset: 0x130
}

// 
// Start address: 0x1b0c20
void EnemyMushSkeletonControl(sfObj* obj)
{
	EnemyMushWork* ew;
	float rpos[4];
	float pos[4];
	float vec[4];
	float vec2[4];
	float* crot;
	float rot[4];
	float rrot[4];
	sgBone* bone;
	int i;
	int nd;
	float tall;
	EnemyClHitResult* cres;
	// Line 608, Address: 0x1b0c20, Func Offset: 0
	// Line 616, Address: 0x1b0c44, Func Offset: 0x24
	// Line 617, Address: 0x1b0c50, Func Offset: 0x30
	// Line 618, Address: 0x1b0c5c, Func Offset: 0x3c
	// Line 619, Address: 0x1b0c68, Func Offset: 0x48
	// Line 620, Address: 0x1b0c74, Func Offset: 0x54
	// Line 621, Address: 0x1b0c78, Func Offset: 0x58
	// Line 620, Address: 0x1b0c7c, Func Offset: 0x5c
	// Line 621, Address: 0x1b0c80, Func Offset: 0x60
	// Line 620, Address: 0x1b0c8c, Func Offset: 0x6c
	// Line 621, Address: 0x1b0c90, Func Offset: 0x70
	// Line 622, Address: 0x1b0c98, Func Offset: 0x78
	// Line 623, Address: 0x1b0ca0, Func Offset: 0x80
	// Line 622, Address: 0x1b0ca4, Func Offset: 0x84
	// Line 623, Address: 0x1b0ca8, Func Offset: 0x88
	// Line 622, Address: 0x1b0cac, Func Offset: 0x8c
	// Line 623, Address: 0x1b0cb0, Func Offset: 0x90
	// Line 625, Address: 0x1b0cbc, Func Offset: 0x9c
	// Line 626, Address: 0x1b0cd0, Func Offset: 0xb0
	// Line 629, Address: 0x1b0d14, Func Offset: 0xf4
	// Line 632, Address: 0x1b0d54, Func Offset: 0x134
	// Line 633, Address: 0x1b0d58, Func Offset: 0x138
	// Line 636, Address: 0x1b0d94, Func Offset: 0x174
	// Line 638, Address: 0x1b0db0, Func Offset: 0x190
	// Line 641, Address: 0x1b0df8, Func Offset: 0x1d8
	// Line 642, Address: 0x1b0e08, Func Offset: 0x1e8
	// Line 643, Address: 0x1b0e18, Func Offset: 0x1f8
	// Line 644, Address: 0x1b0e24, Func Offset: 0x204
	// Line 647, Address: 0x1b0e2c, Func Offset: 0x20c
	// Line 648, Address: 0x1b0e34, Func Offset: 0x214
	// Line 647, Address: 0x1b0e38, Func Offset: 0x218
	// Line 648, Address: 0x1b0e3c, Func Offset: 0x21c
	// Line 649, Address: 0x1b0e6c, Func Offset: 0x24c
	// Line 651, Address: 0x1b0e7c, Func Offset: 0x25c
	// Line 650, Address: 0x1b0e80, Func Offset: 0x260
	// Line 651, Address: 0x1b0e84, Func Offset: 0x264
	// Line 650, Address: 0x1b0e8c, Func Offset: 0x26c
	// Line 651, Address: 0x1b0e94, Func Offset: 0x274
	// Line 652, Address: 0x1b0ea8, Func Offset: 0x288
	// Line 653, Address: 0x1b0ec0, Func Offset: 0x2a0
	// Line 655, Address: 0x1b0edc, Func Offset: 0x2bc
	// Line 657, Address: 0x1b0ee0, Func Offset: 0x2c0
	// Line 659, Address: 0x1b0ee8, Func Offset: 0x2c8
	// Line 661, Address: 0x1b0f18, Func Offset: 0x2f8
	// Line 660, Address: 0x1b0f24, Func Offset: 0x304
	// Line 661, Address: 0x1b0f28, Func Offset: 0x308
	// Line 662, Address: 0x1b0f3c, Func Offset: 0x31c
	// Line 663, Address: 0x1b0f48, Func Offset: 0x328
	// Line 665, Address: 0x1b0f9c, Func Offset: 0x37c
	// Line 666, Address: 0x1b0fe4, Func Offset: 0x3c4
	// Line 667, Address: 0x1b0ff0, Func Offset: 0x3d0
	// Line 668, Address: 0x1b1010, Func Offset: 0x3f0
	// Line 669, Address: 0x1b1020, Func Offset: 0x400
	// Line 670, Address: 0x1b1028, Func Offset: 0x408
	// Line 671, Address: 0x1b1054, Func Offset: 0x434
	// Line 672, Address: 0x1b1064, Func Offset: 0x444
	// Line 673, Address: 0x1b1080, Func Offset: 0x460
	// Line 674, Address: 0x1b1084, Func Offset: 0x464
	// Line 675, Address: 0x1b1088, Func Offset: 0x468
	// Line 676, Address: 0x1b1094, Func Offset: 0x474
	// Line 677, Address: 0x1b10a4, Func Offset: 0x484
	// Line 680, Address: 0x1b10b0, Func Offset: 0x490
	// Line 681, Address: 0x1b10c0, Func Offset: 0x4a0
	// Func End, Address: 0x1b10e8, Func Offset: 0x4c8
}

// 
// Start address: 0x1b10f0
void EnemyMushSetHitPart(sfObj* obj)
{
	EnemyMushWork* ew;
	_anon4 obb;
	_anon3 aabb;
	sfCldPart* pp;
	// Line 685, Address: 0x1b10f0, Func Offset: 0
	// Line 689, Address: 0x1b1100, Func Offset: 0x10
	// Line 691, Address: 0x1b1130, Func Offset: 0x40
	// Line 692, Address: 0x1b1140, Func Offset: 0x50
	// Line 693, Address: 0x1b114c, Func Offset: 0x5c
	// Line 694, Address: 0x1b1154, Func Offset: 0x64
	// Line 695, Address: 0x1b1158, Func Offset: 0x68
	// Line 696, Address: 0x1b1160, Func Offset: 0x70
	// Line 695, Address: 0x1b1164, Func Offset: 0x74
	// Line 696, Address: 0x1b1168, Func Offset: 0x78
	// Line 697, Address: 0x1b1170, Func Offset: 0x80
	// Line 699, Address: 0x1b1174, Func Offset: 0x84
	// Line 698, Address: 0x1b1178, Func Offset: 0x88
	// Line 700, Address: 0x1b117c, Func Offset: 0x8c
	// Line 698, Address: 0x1b1180, Func Offset: 0x90
	// Line 701, Address: 0x1b1184, Func Offset: 0x94
	// Line 698, Address: 0x1b1188, Func Offset: 0x98
	// Line 699, Address: 0x1b1190, Func Offset: 0xa0
	// Line 700, Address: 0x1b1198, Func Offset: 0xa8
	// Line 698, Address: 0x1b119c, Func Offset: 0xac
	// Line 701, Address: 0x1b11a0, Func Offset: 0xb0
	// Line 702, Address: 0x1b11a8, Func Offset: 0xb8
	// Line 704, Address: 0x1b11c0, Func Offset: 0xd0
	// Line 705, Address: 0x1b11cc, Func Offset: 0xdc
	// Line 706, Address: 0x1b11d4, Func Offset: 0xe4
	// Line 707, Address: 0x1b11d8, Func Offset: 0xe8
	// Line 705, Address: 0x1b11dc, Func Offset: 0xec
	// Line 707, Address: 0x1b11e0, Func Offset: 0xf0
	// Line 705, Address: 0x1b11e8, Func Offset: 0xf8
	// Line 706, Address: 0x1b11ec, Func Offset: 0xfc
	// Line 705, Address: 0x1b11f0, Func Offset: 0x100
	// Line 706, Address: 0x1b11f4, Func Offset: 0x104
	// Line 707, Address: 0x1b11f8, Func Offset: 0x108
	// Line 709, Address: 0x1b1204, Func Offset: 0x114
	// Line 710, Address: 0x1b1208, Func Offset: 0x118
	// Line 714, Address: 0x1b1244, Func Offset: 0x154
	// Line 715, Address: 0x1b1250, Func Offset: 0x160
	// Line 716, Address: 0x1b1258, Func Offset: 0x168
	// Line 717, Address: 0x1b1268, Func Offset: 0x178
	// Line 716, Address: 0x1b126c, Func Offset: 0x17c
	// Line 717, Address: 0x1b1290, Func Offset: 0x1a0
	// Line 718, Address: 0x1b12a4, Func Offset: 0x1b4
	// Line 719, Address: 0x1b12a8, Func Offset: 0x1b8
	// Line 720, Address: 0x1b12b4, Func Offset: 0x1c4
	// Line 721, Address: 0x1b12b8, Func Offset: 0x1c8
	// Func End, Address: 0x1b12cc, Func Offset: 0x1dc
}

// 
// Start address: 0x1b12d0
void EnemyMushHitCheck(sfObj* obj)
{
	// Line 726, Address: 0x1b12d0, Func Offset: 0
	// Func End, Address: 0x1b12d8, Func Offset: 0x8
}

// 
// Start address: 0x1b12e0
sfObj* EnemyMushSprout(float* pos, float time)
{
	sfObj* obj;
	float tpos[4];
	EnemyMeasureResult mres;
	unsigned int id;
	unsigned int s;
	int n;
	// Line 731, Address: 0x1b12e0, Func Offset: 0
	// Line 738, Address: 0x1b12f4, Func Offset: 0x14
	// Line 731, Address: 0x1b12f8, Func Offset: 0x18
	// Line 738, Address: 0x1b12fc, Func Offset: 0x1c
	// Line 731, Address: 0x1b1300, Func Offset: 0x20
	// Line 738, Address: 0x1b130c, Func Offset: 0x2c
	// Line 731, Address: 0x1b1310, Func Offset: 0x30
	// Line 738, Address: 0x1b1314, Func Offset: 0x34
	// Line 731, Address: 0x1b131c, Func Offset: 0x3c
	// Line 739, Address: 0x1b1330, Func Offset: 0x50
	// Line 740, Address: 0x1b133c, Func Offset: 0x5c
	// Line 741, Address: 0x1b1344, Func Offset: 0x64
	// Line 742, Address: 0x1b1358, Func Offset: 0x78
	// Line 743, Address: 0x1b1364, Func Offset: 0x84
	// Line 742, Address: 0x1b136c, Func Offset: 0x8c
	// Line 743, Address: 0x1b1374, Func Offset: 0x94
	// Line 745, Address: 0x1b1394, Func Offset: 0xb4
	// Line 746, Address: 0x1b13a0, Func Offset: 0xc0
	// Line 748, Address: 0x1b13a8, Func Offset: 0xc8
	// Line 749, Address: 0x1b13b8, Func Offset: 0xd8
	// Line 750, Address: 0x1b13c4, Func Offset: 0xe4
	// Line 751, Address: 0x1b13cc, Func Offset: 0xec
	// Line 752, Address: 0x1b13d0, Func Offset: 0xf0
	// Line 754, Address: 0x1b13dc, Func Offset: 0xfc
	// Line 755, Address: 0x1b1400, Func Offset: 0x120
	// Line 756, Address: 0x1b1404, Func Offset: 0x124
	// Line 757, Address: 0x1b1408, Func Offset: 0x128
	// Line 760, Address: 0x1b1458, Func Offset: 0x178
	// Line 761, Address: 0x1b1478, Func Offset: 0x198
	// Line 762, Address: 0x1b1480, Func Offset: 0x1a0
	// Func End, Address: 0x1b14ac, Func Offset: 0x1cc
}

