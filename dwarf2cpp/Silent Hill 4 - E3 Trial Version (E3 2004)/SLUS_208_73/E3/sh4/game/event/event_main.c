typedef struct _EventCtrlLink;
typedef struct sgBone;
typedef struct sfObj;
typedef struct _EventController;
typedef struct sgIKHandle;
typedef struct _EventInst;
typedef struct _EventDriver;
typedef enum GameItem : unsigned char;
typedef enum _enum : unsigned char;
typedef struct _EventHitWork;
typedef struct sgAnime;
typedef struct _GAME_WORK;
typedef union _anon0;
typedef struct _EventHandler;
typedef enum _cam3Step : unsigned char;
typedef struct sgSVModel;
typedef struct sfCharacter;
typedef struct _anon1;
typedef struct _cam3Work;
typedef struct _anon2;
typedef struct _EventHitHandler;
typedef enum sgIKSolveResult : unsigned char;

typedef sgIKSolveResult(*type_0)();
typedef int(*type_4)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef int(*type_10)(sfObj*);
typedef int(*type_11)(sfObj*);
typedef void(*type_12)(sgAnime*, int);
typedef int(*type_13)(sfObj*);
typedef int(*type_16)(sfObj*);
typedef void(*type_17)(sfObj*);
typedef void(*type_24)(sfObj*);
typedef void(*type_27)(_anon1*, int, int, float*);

typedef float type_1[4];
typedef int type_2[1];
typedef int type_3[1];
typedef int type_6[1];
typedef void* type_8[4];
typedef int type_9[1];
typedef _anon0 type_14[256];
typedef int type_15[1];
typedef int type_18[1];
typedef float type_19[4];
typedef _anon0 type_20[4];
typedef unsigned char type_21[4];
typedef float type_22[4][4];
typedef int type_23[1];
typedef short type_25[2];
typedef unsigned short type_26[2];
typedef char type_28[4];
typedef unsigned char type_29[4];
typedef float type_30[1];
typedef int type_31[1];
typedef float type_32[4];
typedef float type_33[4][2];

struct _EventCtrlLink
{
	_EventCtrlLink* prev;
	_EventCtrlLink* next;
	void* evctrl;
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

struct _EventController
{
	_EventDriver* evdriver;
	_EventInst evinst;
	sfObj* obj;
	_EventCtrlLink evlink;
	short step;
	short loadstep;
	unsigned int* loadfile;
	unsigned char active;
	unsigned char loadend;
	unsigned char exec_enable;
	short fd_obj_type;
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

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
};

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon0 val[4];
};

enum GameItem : unsigned char
{
	ITEM_EMPTY,
	ITEM_SMALL_BULLET,
	ITEM_LARGE_BULLET,
	ITEM_SILVER_BULLET,
	ITEM_HOLY_CANDLE,
	ITEM_FINISHER,
	ITEM_RED_CHRISM,
	ITEM_LOADS_PRAYER,
	ITEM_SAINT_MEDALLION,
	ITEM_HEALTH_DRINK,
	ITEM_AMPLE,
	ITEM_FIRST_AID_KIT,
	ITEM_HANDGUN = 0x10,
	ITEM_REVOLVER,
	ITEM_IRON_PIPE,
	ITEM_CUTTER_KNIFE,
	ITEM_METAL_BAT,
	ITEM_DRIVER,
	ITEM_DRIVER_BROKEN,
	ITEM_SPOON,
	ITEM_SPOON_BROKEN,
	ITEM_MID_MASHY,
	ITEM_MID_MASHY_BROKEN,
	ITEM_MASHY_IRON,
	ITEM_MASHY_IRON_BROKEN,
	ITEM_MASHY,
	ITEM_MASHY_BROKEN,
	ITEM_SPADE_MASHY,
	ITEM_SPADE_MASHY_BROKEN,
	ITEM_MASHY_NIBLICK,
	ITEM_MASHY_NIBLICK_BROKEN,
	ITEM_PITCHER,
	ITEM_PITCHER_BROKEN,
	ITEM_NIBLICK,
	ITEM_NIBLICK_BROKEN,
	ITEM_PITCHING_WEDGE,
	ITEM_PITCHING_WEDGE_BROKEN,
	ITEM_SAND_WEDGE,
	ITEM_SAND_WEDGE_BROKEN,
	ITEM_PUTTER,
	ITEM_PUTTER_BROKEN,
	ITEM_WINE_BOTTLE,
	ITEM_WINE_BOTTLE_BROKEN,
	ITEM_SCOOP,
	ITEM_RUSTY_HATCHET,
	ITEM_PICK_OF_DESPAIR,
	ITEM_STUN_GUN,
	ITEM_SPRAY,
	ITEM_CLUB,
	ITEM_CHAIN_SAW,
	ITEM_KEY_OF_LIBERATION = 0x3c,
	ITEM_COIN_OF_LYNCHSTREETLINE,
	ITEM_CHOCOLATE_MILK,
	ITEM_SHOVEL_WITH_BLOOD_CHARACTER,
	ITEM_RUSTY_BLOODY_KEY,
	ITEM_RED_PAPER_1,
	ITEM_RED_PAPER_2,
	ITEM_RED_PAPER_3,
	ITEM_RED_PAPER_4,
	ITEM_RED_PAPER_5,
	ITEM_RED_PAPER_6,
	ITEM_TORN_RED_PAPER_1,
	ITEM_TORN_RED_PAPER_2,
	ITEM_TORN_RED_PAPER_MISS,
	ITEM_KEY_OF_SUPERINTENDANT,
	ITEM_KEY_ROCKER106,
	ITEM_CASSETTE_TAPE,
	ITEM_KEY_WITH_DOLL,
	ITEM_CHARM_OF_SUCCUBUS,
	ITEM_KEY_OF_SICKROOM,
	ITEM_RED_ENVELOPE,
	ITEM_SMALL_KEY,
	ITEM_CYNTHIAS_PASS,
	ITEM_OLD_DOLL,
	ITEM_MASTER_KEY_TO_APART,
	ITEM_ARMORIAL_MEDAL,
	ITEM_PICK_OF_HOPE,
	ITEM_NAVEL_STRING,
	ITEM_ALESSAS_SPEAR,
	ITEM_DIRTY_ENVELOPE,
	ITEM_TOY_KEY,
	ITEM_1SS_COIN_DIRTY,
	ITEM_1SS_COIN,
	ITEM_SB24_KEY,
	ITEM_HANDLE,
	ITEM_DOLLS_HEAD,
	ITEM_DOLLS_RIGHT_ARM,
	ITEM_DOLLS_LEFT_ARM,
	ITEM_DOLLS_RIGHT_LEG,
	ITEM_DOLLS_LEFT_LEG,
	ITEM_UNDERGROUND_KEY,
	ITEM_PRISONERS_SHIRT,
	ITEM_BILLIARD_BALL,
	ITEM_STUFFED_CAT,
	ITEM_VOLLEYBALL,
	ITEM_SMALL_CANDLE_PACKED,
	ITEM_SMALL_CANDLE,
	ITEM_GHOSTS_KEY,
	ITEM_DIRTY_STONE1,
	ITEM_DIRTY_STONE2,
	ITEM_DIRTY_STONE3,
	ITEM_DIRTY_STONE4,
	ITEM_DIRTY_STONE5,
	ITEM_CHANNELING_STONE1,
	ITEM_CHANNELING_STONE2,
	ITEM_CHANNELING_STONE3,
	ITEM_CHANNELING_STONE4,
	ITEM_CHANNELING_STONE5,
	ITEM_PLATE_OF_TEMPTATION,
	ITEM_PLATE_OF_ORIGIN,
	ITEM_PLATE_OF_SURVEILLANCE,
	ITEM_PLATE_OF_CHAOS,
	ITEM_ALBERT_SPORTS_KEY,
	ITEM_UNIFORM,
	ITEM_MZ_UPPER_KEY,
	ITEM_TRAILER_KEY,
	ITEM_HANDBAG = 0x80,
	ITEM_SUBMACHINEGUN,
	ITEM_BLACKJACK,
	ITEM_HORSEWHIP,
	ITEM_CHAIN,
	ITEM_FIRST_LETTER = 0x88,
	ITEM_SCRAP_OF_BOOK,
	ITEM_RED_DIARY_0408,
	ITEM_RED_DIARY_0404,
	ITEM_SCRAP_OF_BIBLE,
	ITEM_DIARY_OF_NEIGHBOUR,
	ITEM_SUPERINTENDANTS_MEMO,
	ITEM_SUPERINTENDANTS_DIARY,
	ITEM_RED_DIARY_0502,
	ITEM_RED_DIARY_0514,
	ITEM_RED_DIARY_0520,
	ITEM_SCRAP_OF_RED_DIARY,
	ITEM_SCRAP_OF_RED_DIARY_2,
	ITEM_MIKES_LOVELETTER,
	ITEM_RED_DIARY_0713,
	ITEM_RED_DIARY_0720,
	ITEM_HOLY_MOTHER_21_SACRAMENTS,
	ITEM_RED_BOOK,
	ITEM_PICTURE_BOOK,
	ITEM_RED_DIARY_0611,
	ITEM_RED_DIARY_0614,
	ITEM_RED_DIARY_SOMETIMEAGO,
	ITEM_RED_DIARY_0717,
	ITEM_RED_DIARY_0718,
	ITEM_RED_DIARY_0723,
	ITEM_RED_DIARY_0725,
	ITEM_RED_DIARY_0728,
	ITEM_RED_DIARY_0729,
	ITEM_RED_DIARY_0802,
	ITEM_RED_DIARY_0803,
	ITEM_RED_DIARY_0804,
	ITEM_RED_DIARY_0805,
	ITEM_RED_DIARY_0807,
	ITEM_SUPERINTENDANTS_DIARY_COUT,
	ITEM_JOSEPHS_LETTER,
	ITEM_JOSEPHS_REPORT,
	ITEM_NURSE_MEMO,
	ITEM_CHILD_LETTER,
	ITEM_BLOODY_SHIRT,
	ITEM_BARTENDERS_MEMO,
	ITEM_BARTENDERS_MEMO2,
	ITEM_MEMOIRS,
	ITEM_JASPERS_MEMO,
	ITEM_BURNED_OUT_MEMO,
	ITEM_DOLLS_TEXT,
	ITEM_EXPLORERS_MEMO,
	ITEM_SENTINELS_DIARY,
	ITEM_PLATE_ABOUT_WATERWHEEL,
	ITEM_PRISONERS_DIARY,
	ITEM_REPORT_1F,
	ITEM_REPORT_2F,
	ITEM_PASSWORD_MEMO,
	ITEM_BRICK = 0xe4,
	ITEM_KILLER_PIPE,
	ITEM_KILLER_GUN1,
	ITEM_KILLER_GUN2,
	ITEM_KIND_MAX
};

enum _enum : unsigned char
{
	EVENT_TYPE_INVALID,
	EVENT_TYPE_ITEM,
	EVENT_TYPE_MEMO,
	EVENT_TYPE_TEXT,
	EVENT_TYPE_FILELOAD,
	EVENT_TYPE_ETC,
	EVENT_TYPE_MAX
};

struct _EventHitWork
{
	_EventDriver* evdriver;
	sfObj* obj;
	_EventHitWork* prev;
	_EventHitWork* next;
	float pos[4];
	short setlevel;
	short item_id;
	short item_serial_no;
	float item_quat[4];
	sfCharacter* item_character;
	short is_enforce_item;
	void* enforce_item_work;
};

struct sgAnime
{
	void* play_data[4];
	sgBone* transforms;
	int n_transforms;
	sgIKHandle* ik_handles;
	sgBone* object_space;
	void(*post_func)(sgAnime*, int);
	float* reals;
	int n_reals;
	float vectors[4];
	int n_vectors;
	int current_time;
	int time_add;
	unsigned char play_status[4];
	unsigned short flag;
	unsigned short construct_check;
};

struct _GAME_WORK
{
	int init_at_cold[1];
	int logo_displayed;
	int init_at_warm[1];
	int game_init_executed;
	void* warm_memory_top;
	int load_stage_start;
	int continue_play;
	int game_overed;
	int risky_continue_count;
	int level;
	int init_at_game[1];
	void* game_memory_top;
	int stage;
	int scene;
	int prev_scene;
	int prev_stage;
	int next_stage;
	int next_scene;
	int start_door;
	int world;
	int real_scene;
	float current_camera_mtx[4][4];
	float next_camera_mtx[4][4];
	float game_camera_back[4][4];
	float game_view_angle;
	float game_view_angle_back;
	float map_offset[4];
	void* player;
	int control;
	int player_pos;
	unsigned int next_flags;
	int gameover;
	int gameover_ok;
	int game_complete;
	int gauge;
	int event_disable;
	int eileen_status;
	int cynthia_status;
	int pause_disable_contine;
	unsigned int play_time;
	unsigned int continue_count;
	unsigned int killed_enemy;
	unsigned int held_ghost;
	int update_continue;
	int continue_item;
	int now_peeping;
	unsigned int pre_eil_timer;
	unsigned int eil_interval;
	int pre_demo_index;
	unsigned int pre_demo_type;
	unsigned int pre_door_timer;
	unsigned int door_interval;
	unsigned int pre_door_demo_no;
	int init_at_stage[1];
	void* stage_memory_top;
	int stage_data_save;
	int init_at_scene[1];
	void* scene_memory_top;
	void* snap_texture_load_buffer;
	int game_mode;
	int shadow_density;
	int door_move_disable;
	int fog_effect_off;
	int init_at_loop[1];
	int game_in_action;
	int player_touch_door_no;
	int* passing_door;
	int work_end[1];
	int open_door_sn;
	int open_door_dn;
	int close_door_se_disable;
	int close_door_se_reserve;
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

struct _EventHandler
{
	_EventCtrlLink header;
	float fade_out_time;
	float fade_in_time;
	char drive_text;
	char drive_demo;
};

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon2 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon1
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _cam3Work
{
	_cam3Step step;
	float mtx[4][4];
	float rot[4];
	float lookat[4];
	int run;
	int forceRotate;
};

struct _anon2
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon1*, int, int, float*);
	int equip_flag;
};

struct _EventHitHandler
{
	_EventHitWork* first_evhit;
	_EventHitWork* last_evhit;
	short enforce_itemset;
	_EventHitWork* lastconst_item;
	void* lastconst_enforce_item;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

_GAME_WORK gamew;
_EventHandler evhandler;
_EventHitHandler evhit_handler;
_EventCtrlLink* evctrl_link_search;
_cam3Work cam3_work;

int EventSetDisable();
int EventSetEnable();
int EventCheckEnable();
void EventHandlerInit();
_EventHandler* EventHandlerGet();
void EventStageInit();
void EventSceneInit();
int EventTriggerCheckFlag(_EventDriver* evdrv);
int EventTriggerCheckFunc(_EventDriver* evdriver);
int EventTriggerCheckCommon(_EventHitWork* evhit);
int EventTriggerCheck();
int EventTriggerCheckItemUse(GameItem item_kind);
void EventFileLoadInit(sfObj* obj);
int EventFileLoad(sfObj* obj);
int EventFileFree(sfObj* obj);
int EventFuncInit(_EventController* evctrl);
int EventFuncExecute(_EventController* evctrl);
int EventFuncDraw(_EventController* evctrl);
int EventFuncDrawAfterfilter(_EventController* evctrl);
int EventFuncEnd(_EventController* evctrl);
int EventFuncEndExit(_EventController* evctrl);
void EventEndFlagSetFinish(_EventController* evctrl);
int EventCheckEnableEventFunc(_EventController* evctrl);
void EventCtrlLinkResetPtr();
_EventCtrlLink* EventCtrlLinkGetPtr();
void EventCtrlLinkAdd(_EventCtrlLink* evlink, _EventController* evctrl);
void EventCtrlLinkDelete(_EventCtrlLink* evlink);
int EventCheckAlreadyActive(_EventDriver* evdrv);
void EventPreObjExec();
void EventPostObjExec();
void EventPreObjRender();
void EventPostObjRender();
void EventDrawAfterfilter();

// 
// Start address: 0x277210
int EventSetDisable()
{
	// Line 84, Address: 0x277210, Func Offset: 0
	// Line 86, Address: 0x277218, Func Offset: 0x8
	// Func End, Address: 0x277220, Func Offset: 0x10
}

// 
// Start address: 0x277220
int EventSetEnable()
{
	// Line 96, Address: 0x277220, Func Offset: 0
	// Line 97, Address: 0x277224, Func Offset: 0x4
	// Line 98, Address: 0x277228, Func Offset: 0x8
	// Func End, Address: 0x277230, Func Offset: 0x10
}

// 
// Start address: 0x277230
int EventCheckEnable()
{
	// Line 110, Address: 0x277230, Func Offset: 0
	// Line 113, Address: 0x27723c, Func Offset: 0xc
	// Func End, Address: 0x277244, Func Offset: 0x14
}

// 
// Start address: 0x277250
void EventHandlerInit()
{
	// Line 122, Address: 0x277250, Func Offset: 0
	// Func End, Address: 0x277260, Func Offset: 0x10
}

// 
// Start address: 0x277260
_EventHandler* EventHandlerGet()
{
	// Line 133, Address: 0x277260, Func Offset: 0
	// Line 134, Address: 0x277264, Func Offset: 0x4
	// Func End, Address: 0x27726c, Func Offset: 0xc
}

// 
// Start address: 0x277270
void EventStageInit()
{
	// Line 142, Address: 0x277270, Func Offset: 0
	// Line 143, Address: 0x277278, Func Offset: 0x8
	// Line 145, Address: 0x277280, Func Offset: 0x10
	// Line 188, Address: 0x277288, Func Offset: 0x18
	// Func End, Address: 0x277294, Func Offset: 0x24
}

// 
// Start address: 0x2772a0
void EventSceneInit()
{
	float fade_out_time;
	float fade_in_time;
	// Line 196, Address: 0x2772a0, Func Offset: 0
	// Line 201, Address: 0x2772ac, Func Offset: 0xc
	// Line 202, Address: 0x2772b4, Func Offset: 0x14
	// Line 203, Address: 0x2772bc, Func Offset: 0x1c
	// Line 204, Address: 0x2772c4, Func Offset: 0x24
	// Line 205, Address: 0x2772cc, Func Offset: 0x2c
	// Line 208, Address: 0x2772d4, Func Offset: 0x34
	// Line 211, Address: 0x2772dc, Func Offset: 0x3c
	// Line 216, Address: 0x2772e4, Func Offset: 0x44
	// Func End, Address: 0x2772f8, Func Offset: 0x58
}

// 
// Start address: 0x277300
int EventTriggerCheckFlag(_EventDriver* evdrv)
{
	// Line 229, Address: 0x277300, Func Offset: 0
	// Line 227, Address: 0x277304, Func Offset: 0x4
	// Line 229, Address: 0x277308, Func Offset: 0x8
	// Line 234, Address: 0x27732c, Func Offset: 0x2c
	// Func End, Address: 0x277338, Func Offset: 0x38
}

// 
// Start address: 0x277340
int EventTriggerCheckFunc(_EventDriver* evdriver)
{
	int* func;
	// Line 245, Address: 0x277340, Func Offset: 0
	// Line 250, Address: 0x277344, Func Offset: 0x4
	// Line 245, Address: 0x277348, Func Offset: 0x8
	// Line 250, Address: 0x27734c, Func Offset: 0xc
	// Line 245, Address: 0x277350, Func Offset: 0x10
	// Line 250, Address: 0x27735c, Func Offset: 0x1c
	// Line 251, Address: 0x277368, Func Offset: 0x28
	// Line 254, Address: 0x277370, Func Offset: 0x30
	// Line 256, Address: 0x27737c, Func Offset: 0x3c
	// Line 257, Address: 0x277390, Func Offset: 0x50
	// Line 261, Address: 0x277398, Func Offset: 0x58
	// Line 264, Address: 0x2773a0, Func Offset: 0x60
	// Line 265, Address: 0x2773a8, Func Offset: 0x68
	// Func End, Address: 0x2773bc, Func Offset: 0x7c
}

// 
// Start address: 0x2773c0
int EventTriggerCheckCommon(_EventHitWork* evhit)
{
	sfObj* obj;
	// Line 276, Address: 0x2773c0, Func Offset: 0
	// Line 277, Address: 0x2773cc, Func Offset: 0xc
	// Line 281, Address: 0x2773d0, Func Offset: 0x10
	// Line 282, Address: 0x2773e0, Func Offset: 0x20
	// Line 288, Address: 0x2773e8, Func Offset: 0x28
	// Line 291, Address: 0x2773f0, Func Offset: 0x30
	// Line 292, Address: 0x277400, Func Offset: 0x40
	// Line 297, Address: 0x277408, Func Offset: 0x48
	// Line 298, Address: 0x277418, Func Offset: 0x58
	// Line 303, Address: 0x277420, Func Offset: 0x60
	// Line 307, Address: 0x277430, Func Offset: 0x70
	// Func End, Address: 0x277440, Func Offset: 0x80
}

// 
// Start address: 0x277440
int EventTriggerCheck()
{
	_EventHitWork* evhit;
	sfObj* obj;
	int ret;
	_enum type;
	// Line 318, Address: 0x277440, Func Offset: 0
	// Line 328, Address: 0x277444, Func Offset: 0x4
	// Line 318, Address: 0x277448, Func Offset: 0x8
	// Line 328, Address: 0x277458, Func Offset: 0x18
	// Line 329, Address: 0x277468, Func Offset: 0x28
	// Line 333, Address: 0x27746c, Func Offset: 0x2c
	// Line 339, Address: 0x27747c, Func Offset: 0x3c
	// Line 348, Address: 0x27748c, Func Offset: 0x4c
	// Line 349, Address: 0x27749c, Func Offset: 0x5c
	// Line 350, Address: 0x2774b0, Func Offset: 0x70
	// Line 353, Address: 0x2774c0, Func Offset: 0x80
	// Line 354, Address: 0x2774c8, Func Offset: 0x88
	// Line 357, Address: 0x2774d0, Func Offset: 0x90
	// Line 358, Address: 0x2774d4, Func Offset: 0x94
	// Func End, Address: 0x2774ec, Func Offset: 0xac
}

// 
// Start address: 0x2774f0
int EventTriggerCheckItemUse(GameItem item_kind)
{
	_EventHitWork* evhit;
	sfObj* obj;
	int ret;
	_enum type;
	// Line 369, Address: 0x2774f0, Func Offset: 0
	// Line 380, Address: 0x277510, Func Offset: 0x20
	// Line 381, Address: 0x277520, Func Offset: 0x30
	// Line 385, Address: 0x277528, Func Offset: 0x38
	// Line 386, Address: 0x277538, Func Offset: 0x48
	// Line 387, Address: 0x277548, Func Offset: 0x58
	// Line 392, Address: 0x277550, Func Offset: 0x60
	// Line 393, Address: 0x277570, Func Offset: 0x80
	// Line 396, Address: 0x277578, Func Offset: 0x88
	// Line 397, Address: 0x277588, Func Offset: 0x98
	// Line 401, Address: 0x27758c, Func Offset: 0x9c
	// Line 407, Address: 0x27759c, Func Offset: 0xac
	// Line 413, Address: 0x2775ac, Func Offset: 0xbc
	// Line 422, Address: 0x2775bc, Func Offset: 0xcc
	// Line 423, Address: 0x2775cc, Func Offset: 0xdc
	// Line 425, Address: 0x2775e0, Func Offset: 0xf0
	// Line 427, Address: 0x2775e8, Func Offset: 0xf8
	// Line 428, Address: 0x2775f0, Func Offset: 0x100
	// Line 430, Address: 0x2775f8, Func Offset: 0x108
	// Line 433, Address: 0x277608, Func Offset: 0x118
	// Line 434, Address: 0x277610, Func Offset: 0x120
	// Line 437, Address: 0x277618, Func Offset: 0x128
	// Line 438, Address: 0x277620, Func Offset: 0x130
	// Func End, Address: 0x277640, Func Offset: 0x150
}

// 
// Start address: 0x277640
void EventFileLoadInit(sfObj* obj)
{
	// Line 499, Address: 0x277640, Func Offset: 0
	// Line 500, Address: 0x277648, Func Offset: 0x8
	// Line 501, Address: 0x27764c, Func Offset: 0xc
	// Func End, Address: 0x277654, Func Offset: 0x14
}

// 
// Start address: 0x277660
int EventFileLoad(sfObj* obj)
{
	// Line 523, Address: 0x277660, Func Offset: 0
	// Line 528, Address: 0x277674, Func Offset: 0x14
	// Line 529, Address: 0x277680, Func Offset: 0x20
	// Line 532, Address: 0x277688, Func Offset: 0x28
	// Line 536, Address: 0x2776b0, Func Offset: 0x50
	// Line 538, Address: 0x2776bc, Func Offset: 0x5c
	// Line 536, Address: 0x2776c4, Func Offset: 0x64
	// Line 538, Address: 0x2776cc, Func Offset: 0x6c
	// Line 539, Address: 0x2776f0, Func Offset: 0x90
	// Line 540, Address: 0x2776f4, Func Offset: 0x94
	// Line 541, Address: 0x2776fc, Func Offset: 0x9c
	// Line 544, Address: 0x277700, Func Offset: 0xa0
	// Line 546, Address: 0x277714, Func Offset: 0xb4
	// Line 547, Address: 0x27771c, Func Offset: 0xbc
	// Line 549, Address: 0x277720, Func Offset: 0xc0
	// Line 555, Address: 0x277728, Func Offset: 0xc8
	// Line 556, Address: 0x277730, Func Offset: 0xd0
	// Line 557, Address: 0x277738, Func Offset: 0xd8
	// Line 558, Address: 0x27774c, Func Offset: 0xec
	// Line 557, Address: 0x277754, Func Offset: 0xf4
	// Line 558, Address: 0x27775c, Func Offset: 0xfc
	// Line 559, Address: 0x277764, Func Offset: 0x104
	// Line 563, Address: 0x277770, Func Offset: 0x110
	// Line 567, Address: 0x277780, Func Offset: 0x120
	// Line 568, Address: 0x277794, Func Offset: 0x134
	// Line 569, Address: 0x277798, Func Offset: 0x138
	// Line 573, Address: 0x2777a0, Func Offset: 0x140
	// Line 574, Address: 0x2777a8, Func Offset: 0x148
	// Line 575, Address: 0x2777b4, Func Offset: 0x154
	// Line 577, Address: 0x2777bc, Func Offset: 0x15c
	// Line 578, Address: 0x2777c0, Func Offset: 0x160
	// Line 582, Address: 0x2777d4, Func Offset: 0x174
	// Line 583, Address: 0x2777dc, Func Offset: 0x17c
	// Line 584, Address: 0x2777e8, Func Offset: 0x188
	// Line 589, Address: 0x2777f0, Func Offset: 0x190
	// Line 590, Address: 0x277800, Func Offset: 0x1a0
	// Line 596, Address: 0x27780c, Func Offset: 0x1ac
	// Line 598, Address: 0x277814, Func Offset: 0x1b4
	// Line 599, Address: 0x277818, Func Offset: 0x1b8
	// Line 604, Address: 0x277820, Func Offset: 0x1c0
	// Line 605, Address: 0x277828, Func Offset: 0x1c8
	// Func End, Address: 0x277838, Func Offset: 0x1d8
}

// 
// Start address: 0x277840
int EventFileFree(sfObj* obj)
{
	// Line 616, Address: 0x277840, Func Offset: 0
	// Line 618, Address: 0x27784c, Func Offset: 0xc
	// Line 620, Address: 0x277860, Func Offset: 0x20
	// Line 618, Address: 0x277868, Func Offset: 0x28
	// Line 620, Address: 0x27786c, Func Offset: 0x2c
	// Line 621, Address: 0x277880, Func Offset: 0x40
	// Line 629, Address: 0x277888, Func Offset: 0x48
	// Line 630, Address: 0x277890, Func Offset: 0x50
	// Line 631, Address: 0x2778a4, Func Offset: 0x64
	// Line 630, Address: 0x2778ac, Func Offset: 0x6c
	// Line 631, Address: 0x2778b4, Func Offset: 0x74
	// Line 633, Address: 0x2778bc, Func Offset: 0x7c
	// Line 634, Address: 0x2778c0, Func Offset: 0x80
	// Func End, Address: 0x2778d0, Func Offset: 0x90
}

// 
// Start address: 0x2778d0
int EventFuncInit(_EventController* evctrl)
{
	int* func;
	// Line 645, Address: 0x2778d0, Func Offset: 0
	// Line 650, Address: 0x2778d4, Func Offset: 0x4
	// Line 645, Address: 0x2778d8, Func Offset: 0x8
	// Line 650, Address: 0x2778dc, Func Offset: 0xc
	// Line 645, Address: 0x2778e0, Func Offset: 0x10
	// Line 650, Address: 0x2778e8, Func Offset: 0x18
	// Line 651, Address: 0x2778f4, Func Offset: 0x24
	// Line 652, Address: 0x2778fc, Func Offset: 0x2c
	// Line 654, Address: 0x277900, Func Offset: 0x30
	// Line 657, Address: 0x277908, Func Offset: 0x38
	// Line 662, Address: 0x277930, Func Offset: 0x60
	// Func End, Address: 0x277940, Func Offset: 0x70
}

// 
// Start address: 0x277940
int EventFuncExecute(_EventController* evctrl)
{
	int* func;
	// Line 673, Address: 0x277940, Func Offset: 0
	// Line 678, Address: 0x277944, Func Offset: 0x4
	// Line 673, Address: 0x277948, Func Offset: 0x8
	// Line 678, Address: 0x27794c, Func Offset: 0xc
	// Line 673, Address: 0x277950, Func Offset: 0x10
	// Line 678, Address: 0x277958, Func Offset: 0x18
	// Line 679, Address: 0x277964, Func Offset: 0x24
	// Line 680, Address: 0x27796c, Func Offset: 0x2c
	// Line 682, Address: 0x277970, Func Offset: 0x30
	// Line 685, Address: 0x277978, Func Offset: 0x38
	// Line 690, Address: 0x2779a0, Func Offset: 0x60
	// Func End, Address: 0x2779b0, Func Offset: 0x70
}

// 
// Start address: 0x2779b0
int EventFuncDraw(_EventController* evctrl)
{
	int* func;
	// Line 701, Address: 0x2779b0, Func Offset: 0
	// Line 706, Address: 0x2779b4, Func Offset: 0x4
	// Line 701, Address: 0x2779b8, Func Offset: 0x8
	// Line 706, Address: 0x2779bc, Func Offset: 0xc
	// Line 701, Address: 0x2779c0, Func Offset: 0x10
	// Line 706, Address: 0x2779c8, Func Offset: 0x18
	// Line 707, Address: 0x2779d4, Func Offset: 0x24
	// Line 708, Address: 0x2779dc, Func Offset: 0x2c
	// Line 710, Address: 0x2779e0, Func Offset: 0x30
	// Line 713, Address: 0x2779e8, Func Offset: 0x38
	// Line 718, Address: 0x277a10, Func Offset: 0x60
	// Func End, Address: 0x277a20, Func Offset: 0x70
}

// 
// Start address: 0x277a20
int EventFuncDrawAfterfilter(_EventController* evctrl)
{
	int* func;
	// Line 729, Address: 0x277a20, Func Offset: 0
	// Line 734, Address: 0x277a24, Func Offset: 0x4
	// Line 729, Address: 0x277a28, Func Offset: 0x8
	// Line 734, Address: 0x277a2c, Func Offset: 0xc
	// Line 729, Address: 0x277a30, Func Offset: 0x10
	// Line 734, Address: 0x277a38, Func Offset: 0x18
	// Line 735, Address: 0x277a44, Func Offset: 0x24
	// Line 736, Address: 0x277a4c, Func Offset: 0x2c
	// Line 738, Address: 0x277a50, Func Offset: 0x30
	// Line 741, Address: 0x277a58, Func Offset: 0x38
	// Line 746, Address: 0x277a80, Func Offset: 0x60
	// Func End, Address: 0x277a90, Func Offset: 0x70
}

// 
// Start address: 0x277a90
int EventFuncEnd(_EventController* evctrl)
{
	int* func;
	int ret;
	// Line 757, Address: 0x277a90, Func Offset: 0
	// Line 764, Address: 0x277a94, Func Offset: 0x4
	// Line 757, Address: 0x277a98, Func Offset: 0x8
	// Line 764, Address: 0x277a9c, Func Offset: 0xc
	// Line 757, Address: 0x277aa0, Func Offset: 0x10
	// Line 764, Address: 0x277aa8, Func Offset: 0x18
	// Line 765, Address: 0x277ab4, Func Offset: 0x24
	// Line 769, Address: 0x277abc, Func Offset: 0x2c
	// Line 770, Address: 0x277ac0, Func Offset: 0x30
	// Line 778, Address: 0x277ac8, Func Offset: 0x38
	// Line 782, Address: 0x277af0, Func Offset: 0x60
	// Line 783, Address: 0x277af8, Func Offset: 0x68
	// Line 784, Address: 0x277afc, Func Offset: 0x6c
	// Line 787, Address: 0x277b00, Func Offset: 0x70
	// Func End, Address: 0x277b10, Func Offset: 0x80
}

// 
// Start address: 0x277b10
int EventFuncEndExit(_EventController* evctrl)
{
	int* func;
	// Line 798, Address: 0x277b10, Func Offset: 0
	// Line 803, Address: 0x277b14, Func Offset: 0x4
	// Line 798, Address: 0x277b18, Func Offset: 0x8
	// Line 803, Address: 0x277b1c, Func Offset: 0xc
	// Line 798, Address: 0x277b20, Func Offset: 0x10
	// Line 803, Address: 0x277b28, Func Offset: 0x18
	// Line 804, Address: 0x277b34, Func Offset: 0x24
	// Line 805, Address: 0x277b3c, Func Offset: 0x2c
	// Line 807, Address: 0x277b40, Func Offset: 0x30
	// Line 810, Address: 0x277b48, Func Offset: 0x38
	// Line 815, Address: 0x277b70, Func Offset: 0x60
	// Func End, Address: 0x277b80, Func Offset: 0x70
}

// 
// Start address: 0x277b80
void EventEndFlagSetFinish(_EventController* evctrl)
{
	// Line 824, Address: 0x277b80, Func Offset: 0
	// Line 826, Address: 0x277b84, Func Offset: 0x4
	// Line 824, Address: 0x277b88, Func Offset: 0x8
	// Line 826, Address: 0x277b8c, Func Offset: 0xc
	// Line 824, Address: 0x277b90, Func Offset: 0x10
	// Line 826, Address: 0x277b98, Func Offset: 0x18
	// Line 831, Address: 0x277ba4, Func Offset: 0x24
	// Line 835, Address: 0x277bb8, Func Offset: 0x38
	// Line 836, Address: 0x277bc8, Func Offset: 0x48
	// Func End, Address: 0x277bd8, Func Offset: 0x58
}

// 
// Start address: 0x277be0
int EventCheckEnableEventFunc(_EventController* evctrl)
{
	// Line 849, Address: 0x277be0, Func Offset: 0
	// Line 850, Address: 0x277c14, Func Offset: 0x34
	// Func End, Address: 0x277c1c, Func Offset: 0x3c
}

// 
// Start address: 0x277c20
void EventCtrlLinkResetPtr()
{
	// Line 864, Address: 0x277c20, Func Offset: 0
	// Line 865, Address: 0x277c2c, Func Offset: 0xc
	// Func End, Address: 0x277c34, Func Offset: 0x14
}

// 
// Start address: 0x277c40
_EventCtrlLink* EventCtrlLinkGetPtr()
{
	// Line 874, Address: 0x277c40, Func Offset: 0
	// Line 877, Address: 0x277c44, Func Offset: 0x4
	// Line 874, Address: 0x277c48, Func Offset: 0x8
	// Line 877, Address: 0x277c4c, Func Offset: 0xc
	// Line 874, Address: 0x277c50, Func Offset: 0x10
	// Line 877, Address: 0x277c54, Func Offset: 0x14
	// Line 879, Address: 0x277c60, Func Offset: 0x20
	// Line 880, Address: 0x277c64, Func Offset: 0x24
	// Line 883, Address: 0x277c68, Func Offset: 0x28
	// Func End, Address: 0x277c70, Func Offset: 0x30
}

// 
// Start address: 0x277c70
void EventCtrlLinkAdd(_EventCtrlLink* evlink, _EventController* evctrl)
{
	_EventCtrlLink* now;
	// Line 896, Address: 0x277c70, Func Offset: 0
	// Line 897, Address: 0x277c7c, Func Offset: 0xc
	// Line 898, Address: 0x277c88, Func Offset: 0x18
	// Line 899, Address: 0x277c90, Func Offset: 0x20
	// Line 900, Address: 0x277ca8, Func Offset: 0x38
	// Line 901, Address: 0x277cac, Func Offset: 0x3c
	// Line 902, Address: 0x277cb0, Func Offset: 0x40
	// Line 904, Address: 0x277cb4, Func Offset: 0x44
	// Func End, Address: 0x277cbc, Func Offset: 0x4c
}

// 
// Start address: 0x277cc0
void EventCtrlLinkDelete(_EventCtrlLink* evlink)
{
	_EventCtrlLink* prev;
	_EventCtrlLink* next;
	// Line 917, Address: 0x277cc0, Func Offset: 0
	// Line 919, Address: 0x277cc4, Func Offset: 0x4
	// Line 920, Address: 0x277ccc, Func Offset: 0xc
	// Line 922, Address: 0x277cd0, Func Offset: 0x10
	// Line 923, Address: 0x277cd8, Func Offset: 0x18
	// Line 924, Address: 0x277cdc, Func Offset: 0x1c
	// Line 925, Address: 0x277ce0, Func Offset: 0x20
	// Func End, Address: 0x277ce8, Func Offset: 0x28
}

// 
// Start address: 0x277cf0
int EventCheckAlreadyActive(_EventDriver* evdrv)
{
	_EventCtrlLink* now;
	_EventController* evctrl;
	// Line 950, Address: 0x277cf0, Func Offset: 0
	// Line 954, Address: 0x277cfc, Func Offset: 0xc
	// Line 957, Address: 0x277d04, Func Offset: 0x14
	// Line 958, Address: 0x277d20, Func Offset: 0x30
	// Line 967, Address: 0x277d24, Func Offset: 0x34
	// Line 968, Address: 0x277d30, Func Offset: 0x40
	// Line 970, Address: 0x277d44, Func Offset: 0x54
	// Line 974, Address: 0x277d4c, Func Offset: 0x5c
	// Line 976, Address: 0x277d70, Func Offset: 0x80
	// Line 977, Address: 0x277d78, Func Offset: 0x88
	// Func End, Address: 0x277d88, Func Offset: 0x98
}

// 
// Start address: 0x277d90
void EventPreObjExec()
{
	// Line 985, Address: 0x277d90, Func Offset: 0
	// Line 992, Address: 0x277d98, Func Offset: 0x8
	// Line 993, Address: 0x277da8, Func Offset: 0x18
	// Line 997, Address: 0x277db0, Func Offset: 0x20
	// Line 998, Address: 0x277db8, Func Offset: 0x28
	// Func End, Address: 0x277dc4, Func Offset: 0x34
}

// 
// Start address: 0x277dd0
void EventPostObjExec()
{
	// Line 1006, Address: 0x277dd0, Func Offset: 0
	// Line 1017, Address: 0x277dd8, Func Offset: 0x8
	// Line 1024, Address: 0x277de0, Func Offset: 0x10
	// Line 1025, Address: 0x277df0, Func Offset: 0x20
	// Line 1029, Address: 0x277df8, Func Offset: 0x28
	// Line 1039, Address: 0x277e00, Func Offset: 0x30
	// Func End, Address: 0x277e0c, Func Offset: 0x3c
}

// 
// Start address: 0x277e10
void EventPreObjRender()
{
	// Line 1048, Address: 0x277e10, Func Offset: 0
	// Func End, Address: 0x277e18, Func Offset: 0x8
}

// 
// Start address: 0x277e20
void EventPostObjRender()
{
	// Line 1060, Address: 0x277e20, Func Offset: 0
	// Func End, Address: 0x277e28, Func Offset: 0x8
}

// 
// Start address: 0x277e30
void EventDrawAfterfilter()
{
	_EventCtrlLink* now;
	// Line 1069, Address: 0x277e30, Func Offset: 0
	// Line 1073, Address: 0x277e38, Func Offset: 0x8
	// Line 1076, Address: 0x277e40, Func Offset: 0x10
	// Line 1078, Address: 0x277e60, Func Offset: 0x30
	// Line 1079, Address: 0x277e70, Func Offset: 0x40
	// Line 1081, Address: 0x277e78, Func Offset: 0x48
	// Line 1082, Address: 0x277e98, Func Offset: 0x68
	// Func End, Address: 0x277ea8, Func Offset: 0x78
}

