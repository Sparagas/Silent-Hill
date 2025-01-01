typedef struct sfCharacter;
typedef struct sfObj;
typedef struct _EventObjWork;
typedef struct _EventHitWork;
typedef struct _GAME_WORK;
typedef struct _anon0;
typedef struct sgAnime;
typedef struct _EventCtrlLink;
typedef struct _anon1;
typedef struct _EventObjWorkAutoAction;
typedef struct _anon2;
typedef struct _EventInst;
typedef struct _EventController;
typedef struct _EventDriver;
typedef enum PlayerExtStatus : unsigned char;
typedef struct _ObjHitCylinder;
typedef struct _anon3;
typedef struct _ObjHitCube;
typedef enum GameItem : unsigned char;
typedef union _anon4;
typedef struct _ObjHitSphere;
typedef struct _ObjHitDoor;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _EnforceItemWork;
typedef struct _ObjHitData;
typedef struct sgIKHandle;
typedef struct sgBone;
typedef struct _anon5;
typedef enum _cam3Step : unsigned char;
typedef struct _cam3Work;
typedef struct sgSVModel;

typedef int(*type_0)(sfObj*);
typedef int(*type_1)(sfObj*);
typedef void(*type_9)(_anon1*, int, int, float*);
typedef void(*type_10)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef void(*type_13)(sfObj*);
typedef void(*type_14)(sfObj*);
typedef void(*type_15)(sfObj*);
typedef void(*type_18)(sfObj*);
typedef void(*type_20)();
typedef sgIKSolveResult(*type_22)();
typedef void(*type_27)(sfObj*);
typedef int(*type_29)(sfObj*);
typedef void(*type_31)(sfObj*);
typedef int(*type_34)(sfObj*);
typedef void(*type_35)(sfObj*);
typedef void(*type_39)(sfObj*);
typedef int(*type_41)(sfObj*);
typedef void(*type_42)(sgAnime*, int);
typedef int(*type_44)(sfObj*);
typedef int(*type_46)(sfObj*);

typedef float type_2[4][4];
typedef unsigned char type_3[4];
typedef _anon4 type_4[4];
typedef int type_5[1];
typedef int type_6[1];
typedef float type_7[4];
typedef int type_8[1];
typedef _anon4 type_11[256];
typedef _anon4 type_16[24];
typedef float type_17[4][2];
typedef int type_19[1];
typedef _anon4 type_21[0];
typedef float type_23[4];
typedef short type_24[2];
typedef unsigned short type_25[2];
typedef char type_26[4];
typedef unsigned char type_28[4];
typedef float type_30[1];
typedef int type_32[1];
typedef int type_33[1];
typedef _anon5 type_36[2];
typedef int type_37[1];
typedef void* type_38[4];
typedef float type_40[4];
typedef _anon4 type_43[23];
typedef int type_45[1];
typedef int type_47[1];

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon2 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct sfObj
{
	_anon4 fwork[256];
	_anon4* work;
	void(*func)(sfObj*);
	_anon4* work_pt0;
	_anon4* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon4* sys_work;
	_anon4* scene_work;
	_anon4* event_work;
	_anon4* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _EventObjWork
{
	_EventController evctrl;
	_EventHitWork* evhit;
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

struct _anon0
{
	int id;
	float x;
	float y;
	float z;
	float rot;
	int id1;
	int id2;
	int id3;
	int id4;
	_anon4 dmy[23];
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

struct _EventCtrlLink
{
	_EventCtrlLink* prev;
	_EventCtrlLink* next;
	void* evctrl;
};

struct _anon1
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _EventObjWorkAutoAction
{
	float pos[4];
	short step;
	short cancel;
	float now_rot;
	float trg_rot;
	float rot_spd;
	short matchless;
	short sitdown;
	short timer;
	char end;
	char subject;
	char rot_msg;
	char sit_msg;
	char after_event_exec;
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

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
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

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon4 val[4];
};

enum PlayerExtStatus : unsigned char
{
	PLAYER_STAT_ABSENT,
	PLAYER_STAT_MOVE,
	PLAYER_STAT_SILENT,
	PLAYER_STAT_READY,
	PLAYER_STAT_LOCK,
	PLAYER_STAT_ATTACK,
	PLAYER_STAT_DAMAGE,
	PLAYER_STAT_EVENT,
	PLAYER_STAT_SWORD,
	PLAYER_STAT_GODMODE,
	PLAYER_STAT_DEAD
};

struct _ObjHitCylinder
{
	float r;
	float h;
};

struct _anon3
{
	int type;
	void(*func)(sfObj*);
	void(*cnst)(sfObj*);
	void(*dest)(sfObj*);
	void(*rend)(sfObj*);
	float x;
	float y;
	float z;
	float rot;
	int id1;
	int id2;
	int id3;
	int id4;
	_anon4 dmy[24];
};

struct _ObjHitCube
{
	float w;
	float h;
	float d;
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

union _anon4
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

struct _ObjHitSphere
{
	float r;
};

struct _ObjHitDoor
{
	int num;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _EnforceItemWork
{
	char use;
	char finisher;
	short live;
	short no;
	short stage;
	short scene;
	short type;
	float p[4];
	float quat[4];
	int model_id;
	int tex_id;
	int item_id;
	short level;
	_ObjHitData hitdt;
	int val[1];
};

struct _ObjHitData
{
	float pos[4];
	int type;
	unsigned int attr;
	float rot;
	void* check_func;
	union
	{
		_ObjHitCylinder cl;
		_ObjHitCube cb;
		_ObjHitSphere sp;
		_ObjHitDoor dr;
	};
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

struct _anon5
{
	float pos[4];
	float rot[4];
	float move_rot[4];
	float eye_pos[4];
	float target_pos[4];
	float weapon_pos[4];
	float eye_dir[4];
	float floor_normal[4];
	sfObj* target_obj;
	float dir;
	float move_dir;
	float move_speed;
	float moved_speed[4];
	float floor_height;
	float hp_rate;
	float weapon_move[4];
	float weapon_speed;
	PlayerExtStatus status;
	GameItem weapon_kind;
};

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

_EventDriver evdrv_def_getitem;
_GAME_WORK gamew;
void(*EventObjDraw)(sfObj*);
void(*EventObjDestruct)(sfObj*);
void(*EventObjConstruct)(sfObj*);
void(*EventObjExec)(sfObj*);
_anon5 player_ext_info[2];
_anon4 MsgCommon_QustionGetFinisherEnforce[0];
sfObj* wait_loadend_obj;
void(*evobj_fade_loadend_wait)();
_cam3Work cam3_work;

_EventInst* EventObjEventinst(sfObj* obj);
_EnforceItemWork* EventObjEnforceitem(sfObj* obj);
sfObj* EventObjCreate(_EventDriver* evdriver, _EventHitWork* evhit, int obj_type);
void EventObjConstruct(sfObj* obj);
void EventObjDestruct(sfObj* obj);
void evobj_fade_loadend_wait();
void EventObjExec(sfObj* obj);
void EventObjDraw(sfObj* obj);

// 
// Start address: 0x277eb0
_EventInst* EventObjEventinst(sfObj* obj)
{
	// Line 104, Address: 0x277eb0, Func Offset: 0
	// Line 105, Address: 0x277eb4, Func Offset: 0x4
	// Func End, Address: 0x277ebc, Func Offset: 0xc
}

// 
// Start address: 0x277ec0
_EnforceItemWork* EventObjEnforceitem(sfObj* obj)
{
	// Line 116, Address: 0x277ec0, Func Offset: 0
	// Line 119, Address: 0x277ec4, Func Offset: 0x4
	// Line 123, Address: 0x277ed8, Func Offset: 0x18
	// Func End, Address: 0x277ee0, Func Offset: 0x20
}

// 
// Start address: 0x277ee0
sfObj* EventObjCreate(_EventDriver* evdriver, _EventHitWork* evhit, int obj_type)
{
	_anon3 objdata;
	sfObj* obj;
	// Line 136, Address: 0x277ee0, Func Offset: 0
	// Line 140, Address: 0x277efc, Func Offset: 0x1c
	// Line 141, Address: 0x277f0c, Func Offset: 0x2c
	// Line 142, Address: 0x277f14, Func Offset: 0x34
	// Line 145, Address: 0x277f18, Func Offset: 0x38
	// Line 146, Address: 0x277f50, Func Offset: 0x70
	// Line 150, Address: 0x277f58, Func Offset: 0x78
	// Line 157, Address: 0x277f60, Func Offset: 0x80
	// Line 150, Address: 0x277f64, Func Offset: 0x84
	// Line 157, Address: 0x277f68, Func Offset: 0x88
	// Line 151, Address: 0x277f6c, Func Offset: 0x8c
	// Line 157, Address: 0x277f70, Func Offset: 0x90
	// Line 151, Address: 0x277f74, Func Offset: 0x94
	// Line 149, Address: 0x277f78, Func Offset: 0x98
	// Line 151, Address: 0x277f7c, Func Offset: 0x9c
	// Line 152, Address: 0x277f80, Func Offset: 0xa0
	// Line 154, Address: 0x277f84, Func Offset: 0xa4
	// Line 152, Address: 0x277f88, Func Offset: 0xa8
	// Line 155, Address: 0x277f8c, Func Offset: 0xac
	// Line 152, Address: 0x277f90, Func Offset: 0xb0
	// Line 153, Address: 0x277f94, Func Offset: 0xb4
	// Line 156, Address: 0x277f98, Func Offset: 0xb8
	// Line 153, Address: 0x277f9c, Func Offset: 0xbc
	// Line 157, Address: 0x277fa0, Func Offset: 0xc0
	// Line 159, Address: 0x277fa8, Func Offset: 0xc8
	// Func End, Address: 0x277fc0, Func Offset: 0xe0
}

// 
// Start address: 0x277fc0
void EventObjConstruct(sfObj* obj)
{
	_anon0* soeve;
	sfObj* fd_obj;
	_EventInst* inst;
	_EventObjWork* eveobj;
	// Line 174, Address: 0x277fc0, Func Offset: 0
	// Line 175, Address: 0x277fd4, Func Offset: 0x14
	// Line 185, Address: 0x277fdc, Func Offset: 0x1c
	// Line 175, Address: 0x277fe0, Func Offset: 0x20
	// Line 185, Address: 0x277fe4, Func Offset: 0x24
	// Line 188, Address: 0x278020, Func Offset: 0x60
	// Line 189, Address: 0x27802c, Func Offset: 0x6c
	// Line 190, Address: 0x278034, Func Offset: 0x74
	// Line 191, Address: 0x278038, Func Offset: 0x78
	// Line 192, Address: 0x278044, Func Offset: 0x84
	// Line 193, Address: 0x27804c, Func Offset: 0x8c
	// Line 194, Address: 0x278050, Func Offset: 0x90
	// Line 195, Address: 0x27805c, Func Offset: 0x9c
	// Line 196, Address: 0x278064, Func Offset: 0xa4
	// Line 197, Address: 0x278068, Func Offset: 0xa8
	// Line 203, Address: 0x278078, Func Offset: 0xb8
	// Line 214, Address: 0x278080, Func Offset: 0xc0
	// Line 206, Address: 0x278084, Func Offset: 0xc4
	// Line 214, Address: 0x278088, Func Offset: 0xc8
	// Line 203, Address: 0x27808c, Func Offset: 0xcc
	// Line 204, Address: 0x278090, Func Offset: 0xd0
	// Line 205, Address: 0x27809c, Func Offset: 0xdc
	// Line 206, Address: 0x2780a4, Func Offset: 0xe4
	// Line 209, Address: 0x2780ac, Func Offset: 0xec
	// Line 210, Address: 0x2780b0, Func Offset: 0xf0
	// Line 214, Address: 0x2780bc, Func Offset: 0xfc
	// Line 216, Address: 0x2780c8, Func Offset: 0x108
	// Line 218, Address: 0x2780cc, Func Offset: 0x10c
	// Line 220, Address: 0x2780d4, Func Offset: 0x114
	// Line 224, Address: 0x2780d8, Func Offset: 0x118
	// Line 231, Address: 0x2780f4, Func Offset: 0x134
	// Line 233, Address: 0x278104, Func Offset: 0x144
	// Line 236, Address: 0x278120, Func Offset: 0x160
	// Line 237, Address: 0x27813c, Func Offset: 0x17c
	// Line 238, Address: 0x278144, Func Offset: 0x184
	// Line 240, Address: 0x278150, Func Offset: 0x190
	// Line 242, Address: 0x278160, Func Offset: 0x1a0
	// Line 247, Address: 0x278174, Func Offset: 0x1b4
	// Line 248, Address: 0x278180, Func Offset: 0x1c0
	// Line 252, Address: 0x278190, Func Offset: 0x1d0
	// Line 256, Address: 0x278198, Func Offset: 0x1d8
	// Line 257, Address: 0x2781a0, Func Offset: 0x1e0
	// Line 261, Address: 0x2781a8, Func Offset: 0x1e8
	// Line 263, Address: 0x2781d8, Func Offset: 0x218
	// Line 264, Address: 0x2781e0, Func Offset: 0x220
	// Line 265, Address: 0x2781e8, Func Offset: 0x228
	// Line 268, Address: 0x2781f0, Func Offset: 0x230
	// Line 269, Address: 0x2781f8, Func Offset: 0x238
	// Line 270, Address: 0x278200, Func Offset: 0x240
	// Line 273, Address: 0x278208, Func Offset: 0x248
	// Line 274, Address: 0x278210, Func Offset: 0x250
	// Line 282, Address: 0x27821c, Func Offset: 0x25c
	// Line 284, Address: 0x27825c, Func Offset: 0x29c
	// Line 285, Address: 0x278260, Func Offset: 0x2a0
	// Line 286, Address: 0x278270, Func Offset: 0x2b0
	// Line 288, Address: 0x278278, Func Offset: 0x2b8
	// Line 292, Address: 0x278280, Func Offset: 0x2c0
	// Line 294, Address: 0x278288, Func Offset: 0x2c8
	// Line 296, Address: 0x278290, Func Offset: 0x2d0
	// Line 298, Address: 0x278298, Func Offset: 0x2d8
	// Line 300, Address: 0x2782a0, Func Offset: 0x2e0
	// Line 302, Address: 0x2782ac, Func Offset: 0x2ec
	// Line 307, Address: 0x2782b0, Func Offset: 0x2f0
	// Line 308, Address: 0x2782c4, Func Offset: 0x304
	// Line 312, Address: 0x2782cc, Func Offset: 0x30c
	// Line 315, Address: 0x2782d0, Func Offset: 0x310
	// Line 316, Address: 0x2782e4, Func Offset: 0x324
	// Line 317, Address: 0x2782ec, Func Offset: 0x32c
	// Line 320, Address: 0x2782f0, Func Offset: 0x330
	// Line 321, Address: 0x278304, Func Offset: 0x344
	// Line 322, Address: 0x27830c, Func Offset: 0x34c
	// Line 323, Address: 0x278314, Func Offset: 0x354
	// Line 333, Address: 0x278318, Func Offset: 0x358
	// Line 334, Address: 0x27832c, Func Offset: 0x36c
	// Line 335, Address: 0x278334, Func Offset: 0x374
	// Line 338, Address: 0x278338, Func Offset: 0x378
	// Line 339, Address: 0x27834c, Func Offset: 0x38c
	// Line 340, Address: 0x278354, Func Offset: 0x394
	// Line 344, Address: 0x278358, Func Offset: 0x398
	// Line 346, Address: 0x27836c, Func Offset: 0x3ac
	// Line 347, Address: 0x278374, Func Offset: 0x3b4
	// Line 348, Address: 0x278378, Func Offset: 0x3b8
	// Line 350, Address: 0x278380, Func Offset: 0x3c0
	// Line 351, Address: 0x27838c, Func Offset: 0x3cc
	// Line 352, Address: 0x278390, Func Offset: 0x3d0
	// Func End, Address: 0x2783a8, Func Offset: 0x3e8
}

// 
// Start address: 0x2783b0
void EventObjDestruct(sfObj* obj)
{
	_EventInst* inst;
	_EventObjWorkAutoAction* aact;
	// Line 359, Address: 0x2783b0, Func Offset: 0
	// Line 363, Address: 0x2783c4, Func Offset: 0x14
	// Line 366, Address: 0x2783d0, Func Offset: 0x20
	// Line 369, Address: 0x2783d8, Func Offset: 0x28
	// Line 372, Address: 0x2783e8, Func Offset: 0x38
	// Line 375, Address: 0x278428, Func Offset: 0x78
	// Line 376, Address: 0x278430, Func Offset: 0x80
	// Line 381, Address: 0x278438, Func Offset: 0x88
	// Line 385, Address: 0x278450, Func Offset: 0xa0
	// Line 386, Address: 0x278458, Func Offset: 0xa8
	// Line 391, Address: 0x278460, Func Offset: 0xb0
	// Line 395, Address: 0x278478, Func Offset: 0xc8
	// Line 396, Address: 0x278488, Func Offset: 0xd8
	// Line 398, Address: 0x278490, Func Offset: 0xe0
	// Line 403, Address: 0x278498, Func Offset: 0xe8
	// Line 407, Address: 0x2784b0, Func Offset: 0x100
	// Line 408, Address: 0x2784d0, Func Offset: 0x120
	// Line 414, Address: 0x2784d8, Func Offset: 0x128
	// Line 419, Address: 0x2784e0, Func Offset: 0x130
	// Line 420, Address: 0x2784f4, Func Offset: 0x144
	// Line 424, Address: 0x278550, Func Offset: 0x1a0
	// Line 425, Address: 0x278564, Func Offset: 0x1b4
	// Line 426, Address: 0x27856c, Func Offset: 0x1bc
	// Line 429, Address: 0x278570, Func Offset: 0x1c0
	// Line 430, Address: 0x278584, Func Offset: 0x1d4
	// Line 431, Address: 0x27858c, Func Offset: 0x1dc
	// Line 432, Address: 0x278594, Func Offset: 0x1e4
	// Line 442, Address: 0x278598, Func Offset: 0x1e8
	// Line 444, Address: 0x2785ac, Func Offset: 0x1fc
	// Line 445, Address: 0x2785b4, Func Offset: 0x204
	// Line 448, Address: 0x2785b8, Func Offset: 0x208
	// Line 452, Address: 0x2785c0, Func Offset: 0x210
	// Line 456, Address: 0x2785cc, Func Offset: 0x21c
	// Line 458, Address: 0x27860c, Func Offset: 0x25c
	// Line 459, Address: 0x278610, Func Offset: 0x260
	// Line 460, Address: 0x278620, Func Offset: 0x270
	// Line 462, Address: 0x278628, Func Offset: 0x278
	// Line 466, Address: 0x278630, Func Offset: 0x280
	// Line 468, Address: 0x27863c, Func Offset: 0x28c
	// Line 470, Address: 0x278644, Func Offset: 0x294
	// Line 474, Address: 0x278648, Func Offset: 0x298
	// Line 478, Address: 0x278654, Func Offset: 0x2a4
	// Line 481, Address: 0x27865c, Func Offset: 0x2ac
	// Line 483, Address: 0x27866c, Func Offset: 0x2bc
	// Line 485, Address: 0x278674, Func Offset: 0x2c4
	// Line 486, Address: 0x27867c, Func Offset: 0x2cc
	// Line 487, Address: 0x278680, Func Offset: 0x2d0
	// Func End, Address: 0x278698, Func Offset: 0x2e8
}

// 
// Start address: 0x2786a0
void evobj_fade_loadend_wait()
{
	// Line 494, Address: 0x2786a0, Func Offset: 0
	// Line 495, Address: 0x2786a4, Func Offset: 0x4
	// Line 494, Address: 0x2786a8, Func Offset: 0x8
	// Line 495, Address: 0x2786ac, Func Offset: 0xc
	// Line 496, Address: 0x2786bc, Func Offset: 0x1c
	// Line 498, Address: 0x2786c4, Func Offset: 0x24
	// Line 500, Address: 0x2786d8, Func Offset: 0x38
	// Func End, Address: 0x2786e4, Func Offset: 0x44
}

// 
// Start address: 0x2786f0
void EventObjExec(sfObj* obj)
{
	// Line 506, Address: 0x2786f0, Func Offset: 0
	// Line 508, Address: 0x278700, Func Offset: 0x10
	// Line 514, Address: 0x278708, Func Offset: 0x18
	// Line 520, Address: 0x278748, Func Offset: 0x58
	// Line 521, Address: 0x2787a4, Func Offset: 0xb4
	// Line 527, Address: 0x2787b0, Func Offset: 0xc0
	// Line 528, Address: 0x2787d0, Func Offset: 0xe0
	// Line 529, Address: 0x2787d8, Func Offset: 0xe8
	// Line 533, Address: 0x2787e0, Func Offset: 0xf0
	// Line 537, Address: 0x2787f0, Func Offset: 0x100
	// Line 538, Address: 0x2787f8, Func Offset: 0x108
	// Line 539, Address: 0x278804, Func Offset: 0x114
	// Line 544, Address: 0x27880c, Func Offset: 0x11c
	// Line 545, Address: 0x278810, Func Offset: 0x120
	// Line 548, Address: 0x278820, Func Offset: 0x130
	// Line 551, Address: 0x27882c, Func Offset: 0x13c
	// Line 552, Address: 0x278830, Func Offset: 0x140
	// Line 553, Address: 0x278838, Func Offset: 0x148
	// Line 552, Address: 0x27883c, Func Offset: 0x14c
	// Line 553, Address: 0x278840, Func Offset: 0x150
	// Line 557, Address: 0x278848, Func Offset: 0x158
	// Line 558, Address: 0x27885c, Func Offset: 0x16c
	// Line 560, Address: 0x27889c, Func Offset: 0x1ac
	// Line 561, Address: 0x2788a0, Func Offset: 0x1b0
	// Line 562, Address: 0x2788b0, Func Offset: 0x1c0
	// Line 564, Address: 0x2788b8, Func Offset: 0x1c8
	// Line 567, Address: 0x2788c0, Func Offset: 0x1d0
	// Line 568, Address: 0x2788d0, Func Offset: 0x1e0
	// Line 569, Address: 0x2788d8, Func Offset: 0x1e8
	// Line 571, Address: 0x2788e0, Func Offset: 0x1f0
	// Line 574, Address: 0x2788e8, Func Offset: 0x1f8
	// Line 575, Address: 0x2788f8, Func Offset: 0x208
	// Line 576, Address: 0x278900, Func Offset: 0x210
	// Line 578, Address: 0x278908, Func Offset: 0x218
	// Line 581, Address: 0x278910, Func Offset: 0x220
	// Line 582, Address: 0x278920, Func Offset: 0x230
	// Line 583, Address: 0x278928, Func Offset: 0x238
	// Line 589, Address: 0x278934, Func Offset: 0x244
	// Line 590, Address: 0x278938, Func Offset: 0x248
	// Func End, Address: 0x27894c, Func Offset: 0x25c
}

// 
// Start address: 0x278950
void EventObjDraw(sfObj* obj)
{
	// Line 596, Address: 0x278950, Func Offset: 0
	// Line 597, Address: 0x278960, Func Offset: 0x10
	// Line 598, Address: 0x278970, Func Offset: 0x20
	// Line 600, Address: 0x278978, Func Offset: 0x28
	// Func End, Address: 0x278988, Func Offset: 0x38
}

