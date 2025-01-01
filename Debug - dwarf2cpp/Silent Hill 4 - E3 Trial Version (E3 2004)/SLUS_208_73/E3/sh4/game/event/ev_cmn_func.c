typedef enum sgIKSolveResult : unsigned char;
typedef struct sgQTObject;
typedef struct _evCmnBgObjData;
typedef struct _anon0;
typedef struct _MessageList;
typedef struct sfObj;
typedef struct sgIKHandle;
typedef struct _evCmnBgChar;
typedef union _anon1;
typedef struct _EventInst;
typedef struct sgBone;
typedef struct sfOffsetAABB;
typedef enum GameItem : unsigned char;
typedef struct _anon2;
typedef union sfCldBody;
typedef struct sfCharacter;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct sfCldPart;
typedef struct _anon6;
typedef struct _EventDriver;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct sgAnime;
typedef enum _cam3Step : unsigned char;
typedef struct _GAME_WORK;
typedef struct _cam3Work;
typedef struct _anon10;
typedef struct _evBgCharData;
typedef struct _anon11;
typedef struct sgSVModel;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _anon15;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct _anon16;
typedef struct _evCmnBgObj;
typedef struct EventFlag;

typedef sgIKSolveResult(*type_3)();
typedef void(*type_10)(sfObj*);
typedef void(*type_16)(sgAnime*, int);
typedef void(*type_18)(sfObj*);
typedef int(*type_22)(sfObj*);
typedef int(*type_24)(sfObj*);
typedef int(*type_31)(sfObj*);
typedef int(*type_34)(sfObj*);
typedef int(*type_37)(sfObj*);
typedef int(*type_38)(sfObj*);
typedef int(*type_39)(sfObj*);
typedef void(*type_40)(_anon14*, int, int, float*);

typedef float type_0[4][2];
typedef _anon1 type_1[10];
typedef unsigned int type_2[1];
typedef float type_4[4];
typedef int type_5[1];
typedef _anon1 type_6[0];
typedef int type_7[1];
typedef unsigned char type_8[3];
typedef _anon1 type_9[256];
typedef int type_11[1];
typedef void* type_12[4];
typedef float type_13[4];
typedef int type_14[1];
typedef float type_15[4][4];
typedef int type_17[1];
typedef int type_19[1];
typedef float type_20[4];
typedef unsigned char type_21[2];
typedef _anon1 type_23[0];
typedef unsigned char type_25[4];
typedef _anon1 type_26[10];
typedef int type_27[1];
typedef short type_28[2];
typedef _anon9 type_29[6];
typedef unsigned short type_30[2];
typedef char type_32[4];
typedef unsigned char type_33[4];
typedef float type_35[1];
typedef int type_36[1];
typedef sfCldPart* type_41[6];
typedef unsigned char type_42[3];
typedef _anon1 type_43[4];
typedef unsigned int type_44[4];
typedef unsigned char type_45[320];

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgQTObject
{
	_anon3 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _evCmnBgObjData
{
	int model_id;
	int emt_id;
	int GB_emt_id;
};

struct _anon0
{
	_anon4 img;
	unsigned char draw_flag;
	unsigned char have_message;
};

struct _MessageList
{
	_anon1* msg;
	short flag;
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

struct _evCmnBgChar
{
	sfCharacter chara;
	_anon16* anime;
	sfCldObject cld_obj;
	int now_slot;
	int old_slot;
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

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
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

struct sfOffsetAABB
{
	_anon5 aabb;
	float offset[4];
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

struct _anon2
{
	float start[4];
	float end[4];
};

union sfCldBody
{
	_anon8 obb;
	_anon5 aabb;
	sfOffsetAABB offset_aabb;
	_anon2 line;
	_anon3 sphere;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon15 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon3
{
	float center[4];
	float radius;
};

struct _anon4
{
	_anon13 base;
	float x;
	float y;
	float w;
	float h;
	int u0;
	int v0;
	int u1;
	int v1;
	unsigned int col[4];
	float rot;
	float scale_x;
	float scale_y;
	int ofs_x;
	int ofs_y;
	unsigned char sprite_flag;
};

struct _anon5
{
	float bmin[4];
	float bmax[4];
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

struct _anon6
{
	short base;
	short buffer_w;
	unsigned char psm;
	unsigned char data_psm;
	short w;
	short h;
	short buffer_size;
	short w2;
	short h2;
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
	_anon1 val[4];
};

struct _anon7
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
};

struct _anon8
{
	float mat[4][4];
	float half_w[4];
};

struct _anon9
{
	unsigned short flag;
	GameItem kind;
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

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
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

struct _cam3Work
{
	_cam3Step step;
	float mtx[4][4];
	float rot[4];
	float lookat[4];
	int run;
	int forceRotate;
};

struct _anon10
{
	_anon6* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
};

struct _evBgCharData
{
	int model_id;
	int emt_id;
	int kage_id;
	int anim_id;
};

struct _anon11
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
	_anon1 dmy[10];
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon12
{
	unsigned int cbp;
	unsigned int ofs;
};

struct _anon13
{
	unsigned long reg_alpha;
	unsigned long reg_prim;
	unsigned long reg_test;
	_anon10 tex_data;
	_anon12 clut_data;
	unsigned short ot;
	unsigned short z;
};

struct _anon14
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon15
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon14*, int, int, float*);
	int equip_flag;
};

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
};

struct sgQTNode
{
	int dummy;
};

struct _anon16
{
	int dummy;
};

struct _evCmnBgObj
{
	_anon7 emmodel;
	sgBone bone;
};

struct EventFlag
{
	unsigned char flag[320];
};

unsigned int blank_loadfiles[1];
EventFlag event_flag;
sfObj* mcd_obj;
int ev_unlock_door_no;
_GAME_WORK gamew;
float wake_link_rot_y;
float sg_vector_unit_y[4];
_anon1 MsgCommon_EileenCantPlaced[0];
_EventDriver ev_goto_spiral_with_eileen;
_EventDriver ev_goto_spiral_non_eileen;
_anon1 MsgCommon_QustionEnterHole[0];
_EventDriver ev_goto_spiral_elevator_with_eileen;
_anon1 MsgWater0_487[10];
_EventDriver ev_water0_get_underground_key;
_cam3Work cam3_work;

int ev_cmn_exec_dummy();
int ev_cmn_flagset_val0(sfObj* obj);
int ev_cmn_trgchk_not_fadeblack();
int ev_cmn_trgchk_mcd(sfObj* obj);
int ev_cmn_init_mcd_val0(sfObj* obj);
int ev_cmn_init_mcd_val0_sitrot(sfObj* obj);
int ev_cmn_init_mcd_val0_sit(sfObj* obj);
int ev_cmn_exec_mcd();
int ev_cmn_objhit_checkfunc_item(sfObj* obj);
int ev_cmn_trgchk_unlock_val2(sfObj* obj);
int ev_cmn_init_unlock_val0(sfObj* obj);
int ev_cmn_exec_unlock_val1_val2(sfObj* obj);
int ev_cmn_exec_unlock_not_erase_val1_val2(sfObj* obj);
void WakedemoSetNextPlayerPositionRot();
void St03GotoMz43SetPlayerPos();
int ev_cmn_redpaper_is_disp_ok(int kind);
int ev_cmn_bg_char_init(sfObj* obj, _evBgCharData* dt);
int ev_cmn_bg_char_exec(sfObj* obj);
int ev_cmn_bg_char_draw();
int ev_cmn_bg_char_end(sfObj* obj);
int ev_cmn_bg_char_SetPos(sfObj* obj, float* pos);
int ev_cmn_bg_char_SetRot(sfObj* obj, float* rot);
sfCharacter* ev_cmn_bg_char_GetInst(sfObj* obj);
int ev_cmn_bg_char_DispSwitch(sfObj* obj, int sw);
int ev_cmn_bg_char_SetAnim(sfObj* obj, int anim_id);
int ev_cmn_bg_char_SetAnimDelay(sfObj* obj, int anim_id, float timer);
float ev_cmn_bg_char_GetAnimFrame(sfObj* obj);
int ev_cmn_bg_obj_init(sfObj* obj, _evCmnBgObjData* dt);
int ev_cmn_bg_obj_exec();
int ev_cmn_bg_obj_draw(sfObj* obj);
int ev_cmn_bg_obj_end(sfObj* obj);
int ev_cmn_bg_obj_SetRot(sfObj* obj, float* rot);
int ev_goto_spiral_with_eileen_init(sfObj* obj);
int ev_goto_spiral_with_eileen_exec(sfObj* obj);
int ev_cmn_exec_item_consume(sfObj* obj);
void WakuupDemoSetEnable();
void WakuupDemoSetDisable();
int WakuupDemoCheckEnable();
int Room302EntranceOpen();
int ev_water0_get_underground_key_init(sfObj* obj);
int ev_water0_get_underground_key_end();
void EvGetUndergroundKey();
int ev_cmn_trgchk_mcd_msg_list(sfObj* obj);
int ev_cmn_init_mcd_msg_list(sfObj* obj);

// 
// Start address: 0x286790
int ev_cmn_exec_dummy()
{
	// Line 124, Address: 0x286790, Func Offset: 0
	// Line 128, Address: 0x286794, Func Offset: 0x4
	// Line 124, Address: 0x286798, Func Offset: 0x8
	// Line 128, Address: 0x28679c, Func Offset: 0xc
	// Line 129, Address: 0x2867ac, Func Offset: 0x1c
	// Line 130, Address: 0x2867c0, Func Offset: 0x30
	// Line 131, Address: 0x2867c8, Func Offset: 0x38
	// Line 133, Address: 0x2867d0, Func Offset: 0x40
	// Line 134, Address: 0x2867d8, Func Offset: 0x48
	// Func End, Address: 0x2867e4, Func Offset: 0x54
}

// 
// Start address: 0x2867f0
int ev_cmn_flagset_val0(sfObj* obj)
{
	_EventInst* evinst;
	_anon1 val;
	// Line 186, Address: 0x2867f0, Func Offset: 0
	// Line 187, Address: 0x2867f8, Func Offset: 0x8
	// Line 188, Address: 0x286800, Func Offset: 0x10
	// Line 189, Address: 0x286820, Func Offset: 0x30
	// Line 190, Address: 0x286848, Func Offset: 0x58
	// Line 189, Address: 0x28684c, Func Offset: 0x5c
	// Line 191, Address: 0x286860, Func Offset: 0x70
	// Func End, Address: 0x28686c, Func Offset: 0x7c
}

// 
// Start address: 0x286870
int ev_cmn_trgchk_not_fadeblack()
{
	// Line 200, Address: 0x286870, Func Offset: 0
	// Line 203, Address: 0x286878, Func Offset: 0x8
	// Line 204, Address: 0x286898, Func Offset: 0x28
	// Func End, Address: 0x2868a4, Func Offset: 0x34
}

// 
// Start address: 0x2868b0
int ev_cmn_trgchk_mcd(sfObj* obj)
{
	// Line 213, Address: 0x2868b0, Func Offset: 0
	// Line 216, Address: 0x2868bc, Func Offset: 0xc
	// Line 219, Address: 0x2868e0, Func Offset: 0x30
	// Func End, Address: 0x2868f0, Func Offset: 0x40
}

// 
// Start address: 0x2868f0
int ev_cmn_init_mcd_val0(sfObj* obj)
{
	_EventInst* evinst;
	_anon1 val;
	// Line 229, Address: 0x2868f0, Func Offset: 0
	// Line 230, Address: 0x2868fc, Func Offset: 0xc
	// Line 231, Address: 0x286904, Func Offset: 0x14
	// Line 232, Address: 0x286924, Func Offset: 0x34
	// Line 233, Address: 0x28692c, Func Offset: 0x3c
	// Line 234, Address: 0x286930, Func Offset: 0x40
	// Line 233, Address: 0x286934, Func Offset: 0x44
	// Line 235, Address: 0x286938, Func Offset: 0x48
	// Func End, Address: 0x286948, Func Offset: 0x58
}

// 
// Start address: 0x286950
int ev_cmn_init_mcd_val0_sitrot(sfObj* obj)
{
	_EventInst* evinst;
	// Line 246, Address: 0x286950, Func Offset: 0
	// Line 247, Address: 0x28695c, Func Offset: 0xc
	// Line 248, Address: 0x286964, Func Offset: 0x14
	// Line 249, Address: 0x286970, Func Offset: 0x20
	// Line 251, Address: 0x286978, Func Offset: 0x28
	// Line 250, Address: 0x28697c, Func Offset: 0x2c
	// Line 251, Address: 0x286980, Func Offset: 0x30
	// Func End, Address: 0x28698c, Func Offset: 0x3c
}

// 
// Start address: 0x286990
int ev_cmn_init_mcd_val0_sit(sfObj* obj)
{
	_EventInst* evinst;
	// Line 262, Address: 0x286990, Func Offset: 0
	// Line 263, Address: 0x28699c, Func Offset: 0xc
	// Line 264, Address: 0x2869a4, Func Offset: 0x14
	// Line 265, Address: 0x2869b0, Func Offset: 0x20
	// Line 267, Address: 0x2869b8, Func Offset: 0x28
	// Line 266, Address: 0x2869bc, Func Offset: 0x2c
	// Line 267, Address: 0x2869c0, Func Offset: 0x30
	// Func End, Address: 0x2869cc, Func Offset: 0x3c
}

// 
// Start address: 0x2869d0
int ev_cmn_exec_mcd()
{
	// Line 276, Address: 0x2869d0, Func Offset: 0
	// Func End, Address: 0x2869d8, Func Offset: 0x8
}

// 
// Start address: 0x2869e0
int ev_cmn_objhit_checkfunc_item(sfObj* obj)
{
	// Line 287, Address: 0x2869e0, Func Offset: 0
	// Func End, Address: 0x2869e8, Func Offset: 0x8
}

// 
// Start address: 0x2869f0
int ev_cmn_trgchk_unlock_val2(sfObj* obj)
{
	_EventDriver* ev;
	_anon1 val;
	// Line 297, Address: 0x2869f0, Func Offset: 0
	// Line 298, Address: 0x2869fc, Func Offset: 0xc
	// Line 299, Address: 0x286a04, Func Offset: 0x14
	// Line 302, Address: 0x286a24, Func Offset: 0x34
	// Line 304, Address: 0x286a78, Func Offset: 0x88
	// Line 305, Address: 0x286a80, Func Offset: 0x90
	// Func End, Address: 0x286a90, Func Offset: 0xa0
}

// 
// Start address: 0x286a90
int ev_cmn_init_unlock_val0(sfObj* obj)
{
	// Line 307, Address: 0x286a90, Func Offset: 0
	// Line 309, Address: 0x286a94, Func Offset: 0x4
	// Line 307, Address: 0x286a98, Func Offset: 0x8
	// Line 309, Address: 0x286aa4, Func Offset: 0x14
	// Line 310, Address: 0x286ab4, Func Offset: 0x24
	// Line 311, Address: 0x286ab8, Func Offset: 0x28
	// Line 310, Address: 0x286abc, Func Offset: 0x2c
	// Line 311, Address: 0x286ac4, Func Offset: 0x34
	// Line 312, Address: 0x286acc, Func Offset: 0x3c
	// Func End, Address: 0x286adc, Func Offset: 0x4c
}

// 
// Start address: 0x286ae0
int ev_cmn_exec_unlock_val1_val2(sfObj* obj)
{
	_EventInst* evinst;
	_anon1 val;
	// Line 346, Address: 0x286ae0, Func Offset: 0
	// Line 347, Address: 0x286aec, Func Offset: 0xc
	// Line 348, Address: 0x286afc, Func Offset: 0x1c
	// Line 349, Address: 0x286b08, Func Offset: 0x28
	// Line 351, Address: 0x286b28, Func Offset: 0x48
	// Line 353, Address: 0x286b30, Func Offset: 0x50
	// Line 354, Address: 0x286b44, Func Offset: 0x64
	// Line 355, Address: 0x286b4c, Func Offset: 0x6c
	// Line 358, Address: 0x286b80, Func Offset: 0xa0
	// Line 359, Address: 0x286b98, Func Offset: 0xb8
	// Line 361, Address: 0x286ba0, Func Offset: 0xc0
	// Line 362, Address: 0x286ba8, Func Offset: 0xc8
	// Func End, Address: 0x286bb8, Func Offset: 0xd8
}

// 
// Start address: 0x286bc0
int ev_cmn_exec_unlock_not_erase_val1_val2(sfObj* obj)
{
	_EventInst* evinst;
	_anon1 val;
	// Line 365, Address: 0x286bc0, Func Offset: 0
	// Line 366, Address: 0x286bcc, Func Offset: 0xc
	// Line 367, Address: 0x286bdc, Func Offset: 0x1c
	// Line 368, Address: 0x286be8, Func Offset: 0x28
	// Line 370, Address: 0x286c04, Func Offset: 0x44
	// Line 371, Address: 0x286c18, Func Offset: 0x58
	// Line 372, Address: 0x286c20, Func Offset: 0x60
	// Line 373, Address: 0x286c54, Func Offset: 0x94
	// Line 375, Address: 0x286c58, Func Offset: 0x98
	// Line 376, Address: 0x286c70, Func Offset: 0xb0
	// Line 378, Address: 0x286c78, Func Offset: 0xb8
	// Line 379, Address: 0x286c80, Func Offset: 0xc0
	// Func End, Address: 0x286c90, Func Offset: 0xd0
}

// 
// Start address: 0x286c90
void WakedemoSetNextPlayerPositionRot()
{
	float pos[4];
	// Line 390, Address: 0x286c90, Func Offset: 0
	// Line 392, Address: 0x286c94, Func Offset: 0x4
	// Line 390, Address: 0x286c98, Func Offset: 0x8
	// Line 392, Address: 0x286c9c, Func Offset: 0xc
	// Line 394, Address: 0x286ca8, Func Offset: 0x18
	// Line 392, Address: 0x286cac, Func Offset: 0x1c
	// Line 393, Address: 0x286cb0, Func Offset: 0x20
	// Line 394, Address: 0x286cb4, Func Offset: 0x24
	// Line 393, Address: 0x286cb8, Func Offset: 0x28
	// Line 394, Address: 0x286cbc, Func Offset: 0x2c
	// Line 395, Address: 0x286cc4, Func Offset: 0x34
	// Func End, Address: 0x286cd0, Func Offset: 0x40
}

// 
// Start address: 0x286cd0
void St03GotoMz43SetPlayerPos()
{
	float pos[4];
	// Line 403, Address: 0x286cd0, Func Offset: 0
	// Line 404, Address: 0x286cd4, Func Offset: 0x4
	// Line 403, Address: 0x286cd8, Func Offset: 0x8
	// Line 404, Address: 0x286cdc, Func Offset: 0xc
	// Line 406, Address: 0x286ce8, Func Offset: 0x18
	// Line 404, Address: 0x286cf0, Func Offset: 0x20
	// Line 406, Address: 0x286cf4, Func Offset: 0x24
	// Line 407, Address: 0x286d00, Func Offset: 0x30
	// Line 408, Address: 0x286d08, Func Offset: 0x38
	// Line 410, Address: 0x286d10, Func Offset: 0x40
	// Line 412, Address: 0x286d18, Func Offset: 0x48
	// Line 413, Address: 0x286d2c, Func Offset: 0x5c
	// Func End, Address: 0x286d38, Func Offset: 0x68
}

// 
// Start address: 0x286d40
int ev_cmn_redpaper_is_disp_ok(int kind)
{
	_anon9* rpc;
	int b0;
	int b1;
	_anon9 red_check[6];
	// Line 564, Address: 0x286d40, Func Offset: 0
	// Line 573, Address: 0x286d44, Func Offset: 0x4
	// Line 564, Address: 0x286d48, Func Offset: 0x8
	// Line 573, Address: 0x286d4c, Func Offset: 0xc
	// Line 564, Address: 0x286d54, Func Offset: 0x14
	// Line 573, Address: 0x286d58, Func Offset: 0x18
	// Line 576, Address: 0x286d5c, Func Offset: 0x1c
	// Line 573, Address: 0x286d60, Func Offset: 0x20
	// Line 576, Address: 0x286d64, Func Offset: 0x24
	// Line 577, Address: 0x286d70, Func Offset: 0x30
	// Line 576, Address: 0x286d74, Func Offset: 0x34
	// Line 577, Address: 0x286d88, Func Offset: 0x48
	// Line 579, Address: 0x286d94, Func Offset: 0x54
	// Line 580, Address: 0x286da4, Func Offset: 0x64
	// Func End, Address: 0x286db4, Func Offset: 0x74
}

// 
// Start address: 0x286dc0
int ev_cmn_bg_char_init(sfObj* obj, _evBgCharData* dt)
{
	_evCmnBgChar* wk;
	_anon11* fig;
	float pos[4];
	float rot[4];
	// Line 591, Address: 0x286dc0, Func Offset: 0
	// Line 592, Address: 0x286de0, Func Offset: 0x20
	// Line 595, Address: 0x286e00, Func Offset: 0x40
	// Line 596, Address: 0x286e10, Func Offset: 0x50
	// Line 598, Address: 0x286e18, Func Offset: 0x58
	// Line 602, Address: 0x286e20, Func Offset: 0x60
	// Line 605, Address: 0x286e4c, Func Offset: 0x8c
	// Line 606, Address: 0x286e54, Func Offset: 0x94
	// Line 615, Address: 0x286e6c, Func Offset: 0xac
	// Line 616, Address: 0x286e74, Func Offset: 0xb4
	// Line 617, Address: 0x286e8c, Func Offset: 0xcc
	// Line 618, Address: 0x286ea0, Func Offset: 0xe0
	// Line 619, Address: 0x286ea8, Func Offset: 0xe8
	// Line 625, Address: 0x286eb0, Func Offset: 0xf0
	// Line 621, Address: 0x286eb4, Func Offset: 0xf4
	// Line 625, Address: 0x286eb8, Func Offset: 0xf8
	// Line 621, Address: 0x286ebc, Func Offset: 0xfc
	// Line 622, Address: 0x286ec0, Func Offset: 0x100
	// Line 623, Address: 0x286ec8, Func Offset: 0x108
	// Line 625, Address: 0x286ed0, Func Offset: 0x110
	// Line 626, Address: 0x286ed8, Func Offset: 0x118
	// Line 627, Address: 0x286eec, Func Offset: 0x12c
	// Line 630, Address: 0x286ef8, Func Offset: 0x138
	// Line 631, Address: 0x286f04, Func Offset: 0x144
	// Line 632, Address: 0x286f08, Func Offset: 0x148
	// Line 633, Address: 0x286f10, Func Offset: 0x150
	// Func End, Address: 0x286f30, Func Offset: 0x170
}

// 
// Start address: 0x286f30
int ev_cmn_bg_char_exec(sfObj* obj)
{
	_evCmnBgChar* wk;
	// Line 642, Address: 0x286f30, Func Offset: 0
	// Line 643, Address: 0x286f38, Func Offset: 0x8
	// Line 644, Address: 0x286f40, Func Offset: 0x10
	// Line 645, Address: 0x286f48, Func Offset: 0x18
	// Line 647, Address: 0x286f50, Func Offset: 0x20
	// Line 646, Address: 0x286f54, Func Offset: 0x24
	// Line 647, Address: 0x286f58, Func Offset: 0x28
	// Func End, Address: 0x286f60, Func Offset: 0x30
}

// 
// Start address: 0x286f60
int ev_cmn_bg_char_draw()
{
	// Line 659, Address: 0x286f60, Func Offset: 0
	// Func End, Address: 0x286f68, Func Offset: 0x8
}

// 
// Start address: 0x286f70
int ev_cmn_bg_char_end(sfObj* obj)
{
	_evCmnBgChar* wk;
	// Line 668, Address: 0x286f70, Func Offset: 0
	// Line 669, Address: 0x286f7c, Func Offset: 0xc
	// Line 670, Address: 0x286f84, Func Offset: 0x14
	// Line 671, Address: 0x286f8c, Func Offset: 0x1c
	// Line 677, Address: 0x286f98, Func Offset: 0x28
	// Line 680, Address: 0x286fa0, Func Offset: 0x30
	// Line 678, Address: 0x286fa4, Func Offset: 0x34
	// Line 680, Address: 0x286fa8, Func Offset: 0x38
	// Func End, Address: 0x286fb4, Func Offset: 0x44
}

// 
// Start address: 0x286fc0
int ev_cmn_bg_char_SetPos(sfObj* obj, float* pos)
{
	// Line 690, Address: 0x286fc0, Func Offset: 0
	// Line 692, Address: 0x286fc8, Func Offset: 0x8
	// Line 694, Address: 0x286fd0, Func Offset: 0x10
	// Line 693, Address: 0x286fd4, Func Offset: 0x14
	// Line 694, Address: 0x286fd8, Func Offset: 0x18
	// Func End, Address: 0x286fe0, Func Offset: 0x20
}

// 
// Start address: 0x286fe0
int ev_cmn_bg_char_SetRot(sfObj* obj, float* rot)
{
	// Line 704, Address: 0x286fe0, Func Offset: 0
	// Line 706, Address: 0x286fe8, Func Offset: 0x8
	// Line 708, Address: 0x286ff0, Func Offset: 0x10
	// Line 707, Address: 0x286ff4, Func Offset: 0x14
	// Line 708, Address: 0x286ff8, Func Offset: 0x18
	// Func End, Address: 0x287000, Func Offset: 0x20
}

// 
// Start address: 0x287000
sfCharacter* ev_cmn_bg_char_GetInst(sfObj* obj)
{
	// Line 721, Address: 0x287000, Func Offset: 0
	// Func End, Address: 0x287008, Func Offset: 0x8
}

// 
// Start address: 0x287010
int ev_cmn_bg_char_DispSwitch(sfObj* obj, int sw)
{
	_evCmnBgChar* wk;
	// Line 732, Address: 0x287010, Func Offset: 0
	// Line 734, Address: 0x287020, Func Offset: 0x10
	// Line 736, Address: 0x287028, Func Offset: 0x18
	// Line 739, Address: 0x287038, Func Offset: 0x28
	// Line 740, Address: 0x287040, Func Offset: 0x30
	// Line 741, Address: 0x287044, Func Offset: 0x34
	// Func End, Address: 0x287054, Func Offset: 0x44
}

// 
// Start address: 0x287060
int ev_cmn_bg_char_SetAnim(sfObj* obj, int anim_id)
{
	_evCmnBgChar* wk;
	// Line 753, Address: 0x287060, Func Offset: 0
	// Line 755, Address: 0x287074, Func Offset: 0x14
	// Line 756, Address: 0x28707c, Func Offset: 0x1c
	// Line 757, Address: 0x287088, Func Offset: 0x28
	// Line 758, Address: 0x2870a0, Func Offset: 0x40
	// Line 759, Address: 0x2870a4, Func Offset: 0x44
	// Line 761, Address: 0x2870bc, Func Offset: 0x5c
	// Line 762, Address: 0x2870cc, Func Offset: 0x6c
	// Line 763, Address: 0x2870d4, Func Offset: 0x74
	// Line 764, Address: 0x2870dc, Func Offset: 0x7c
	// Line 765, Address: 0x2870e4, Func Offset: 0x84
	// Line 766, Address: 0x2870e8, Func Offset: 0x88
	// Line 767, Address: 0x2870ec, Func Offset: 0x8c
	// Line 768, Address: 0x2870f4, Func Offset: 0x94
	// Line 770, Address: 0x2870f8, Func Offset: 0x98
	// Line 769, Address: 0x287100, Func Offset: 0xa0
	// Line 770, Address: 0x287104, Func Offset: 0xa4
	// Func End, Address: 0x287110, Func Offset: 0xb0
}

// 
// Start address: 0x287110
int ev_cmn_bg_char_SetAnimDelay(sfObj* obj, int anim_id, float timer)
{
	_evCmnBgChar* wk;
	// Line 773, Address: 0x287110, Func Offset: 0
	// Line 774, Address: 0x287120, Func Offset: 0x10
	// Line 775, Address: 0x287124, Func Offset: 0x14
	// Line 776, Address: 0x28712c, Func Offset: 0x1c
	// Line 777, Address: 0x287138, Func Offset: 0x28
	// Line 778, Address: 0x287148, Func Offset: 0x38
	// Line 779, Address: 0x28714c, Func Offset: 0x3c
	// Line 780, Address: 0x287168, Func Offset: 0x58
	// Line 781, Address: 0x287174, Func Offset: 0x64
	// Line 782, Address: 0x28717c, Func Offset: 0x6c
	// Line 783, Address: 0x287184, Func Offset: 0x74
	// Line 784, Address: 0x28718c, Func Offset: 0x7c
	// Line 785, Address: 0x287190, Func Offset: 0x80
	// Line 786, Address: 0x287194, Func Offset: 0x84
	// Line 787, Address: 0x28719c, Func Offset: 0x8c
	// Line 788, Address: 0x2871a0, Func Offset: 0x90
	// Line 789, Address: 0x2871a8, Func Offset: 0x98
	// Func End, Address: 0x2871bc, Func Offset: 0xac
}

// 
// Start address: 0x2871c0
float ev_cmn_bg_char_GetAnimFrame(sfObj* obj)
{
	_evCmnBgChar* wk;
	sgAnime* sganim;
	// Line 791, Address: 0x2871c0, Func Offset: 0
	// Line 792, Address: 0x2871c8, Func Offset: 0x8
	// Line 794, Address: 0x2871cc, Func Offset: 0xc
	// Line 795, Address: 0x2871d8, Func Offset: 0x18
	// Line 796, Address: 0x2871e0, Func Offset: 0x20
	// Func End, Address: 0x2871ec, Func Offset: 0x2c
}

// 
// Start address: 0x2871f0
int ev_cmn_bg_obj_init(sfObj* obj, _evCmnBgObjData* dt)
{
	_evCmnBgObj* wk;
	_anon11* fig;
	float pos[4];
	float rot[4];
	// Line 807, Address: 0x2871f0, Func Offset: 0
	// Line 808, Address: 0x287208, Func Offset: 0x18
	// Line 811, Address: 0x287228, Func Offset: 0x38
	// Line 812, Address: 0x287238, Func Offset: 0x48
	// Line 814, Address: 0x287240, Func Offset: 0x50
	// Line 820, Address: 0x28724c, Func Offset: 0x5c
	// Line 821, Address: 0x287254, Func Offset: 0x64
	// Line 822, Address: 0x287268, Func Offset: 0x78
	// Line 823, Address: 0x287280, Func Offset: 0x90
	// Line 824, Address: 0x287288, Func Offset: 0x98
	// Line 826, Address: 0x2872a0, Func Offset: 0xb0
	// Line 827, Address: 0x2872a8, Func Offset: 0xb8
	// Line 832, Address: 0x2872ac, Func Offset: 0xbc
	// Line 827, Address: 0x2872b0, Func Offset: 0xc0
	// Line 828, Address: 0x2872b4, Func Offset: 0xc4
	// Line 829, Address: 0x2872bc, Func Offset: 0xcc
	// Line 830, Address: 0x2872c4, Func Offset: 0xd4
	// Line 832, Address: 0x2872cc, Func Offset: 0xdc
	// Line 833, Address: 0x2872d4, Func Offset: 0xe4
	// Line 834, Address: 0x2872e8, Func Offset: 0xf8
	// Line 836, Address: 0x2872f4, Func Offset: 0x104
	// Line 837, Address: 0x2872f8, Func Offset: 0x108
	// Line 838, Address: 0x287300, Func Offset: 0x110
	// Func End, Address: 0x287318, Func Offset: 0x128
}

// 
// Start address: 0x287320
int ev_cmn_bg_obj_exec()
{
	// Line 849, Address: 0x287320, Func Offset: 0
	// Func End, Address: 0x287328, Func Offset: 0x8
}

// 
// Start address: 0x287330
int ev_cmn_bg_obj_draw(sfObj* obj)
{
	// Line 858, Address: 0x287330, Func Offset: 0
	// Line 859, Address: 0x28733c, Func Offset: 0xc
	// Line 861, Address: 0x287344, Func Offset: 0x14
	// Line 862, Address: 0x28734c, Func Offset: 0x1c
	// Line 864, Address: 0x287350, Func Offset: 0x20
	// Line 863, Address: 0x287354, Func Offset: 0x24
	// Line 864, Address: 0x287358, Func Offset: 0x28
	// Func End, Address: 0x287360, Func Offset: 0x30
}

// 
// Start address: 0x287360
int ev_cmn_bg_obj_end(sfObj* obj)
{
	// Line 873, Address: 0x287360, Func Offset: 0
	// Line 874, Address: 0x28736c, Func Offset: 0xc
	// Line 876, Address: 0x287374, Func Offset: 0x14
	// Line 877, Address: 0x28737c, Func Offset: 0x1c
	// Line 880, Address: 0x287380, Func Offset: 0x20
	// Line 878, Address: 0x287384, Func Offset: 0x24
	// Line 880, Address: 0x287388, Func Offset: 0x28
	// Func End, Address: 0x287390, Func Offset: 0x30
}

// 
// Start address: 0x287390
int ev_cmn_bg_obj_SetRot(sfObj* obj, float* rot)
{
	// Line 904, Address: 0x287390, Func Offset: 0
	// Line 906, Address: 0x287398, Func Offset: 0x8
	// Line 908, Address: 0x2873a4, Func Offset: 0x14
	// Line 907, Address: 0x2873a8, Func Offset: 0x18
	// Line 908, Address: 0x2873ac, Func Offset: 0x1c
	// Func End, Address: 0x2873b4, Func Offset: 0x24
}

// 
// Start address: 0x2873c0
int ev_goto_spiral_with_eileen_init(sfObj* obj)
{
	_EventInst* evinst;
	// Line 916, Address: 0x2873c0, Func Offset: 0
	// Line 917, Address: 0x2873cc, Func Offset: 0xc
	// Line 918, Address: 0x2873dc, Func Offset: 0x1c
	// Line 919, Address: 0x2873e4, Func Offset: 0x24
	// Line 920, Address: 0x2873f0, Func Offset: 0x30
	// Line 922, Address: 0x2873f8, Func Offset: 0x38
	// Line 925, Address: 0x287400, Func Offset: 0x40
	// Line 926, Address: 0x28740c, Func Offset: 0x4c
	// Line 927, Address: 0x287414, Func Offset: 0x54
	// Line 929, Address: 0x287418, Func Offset: 0x58
	// Line 928, Address: 0x287420, Func Offset: 0x60
	// Line 929, Address: 0x287424, Func Offset: 0x64
	// Func End, Address: 0x28742c, Func Offset: 0x6c
}

// 
// Start address: 0x287430
int ev_goto_spiral_with_eileen_exec(sfObj* obj)
{
	int rtv;
	// Line 931, Address: 0x287430, Func Offset: 0
	// Line 933, Address: 0x287434, Func Offset: 0x4
	// Line 931, Address: 0x287438, Func Offset: 0x8
	// Line 933, Address: 0x28743c, Func Offset: 0xc
	// Line 936, Address: 0x287458, Func Offset: 0x28
	// Line 938, Address: 0x287460, Func Offset: 0x30
	// Line 941, Address: 0x287468, Func Offset: 0x38
	// Line 945, Address: 0x287470, Func Offset: 0x40
	// Func End, Address: 0x28747c, Func Offset: 0x4c
}

// 
// Start address: 0x287480
int ev_cmn_exec_item_consume(sfObj* obj)
{
	_EventInst* evinst;
	_anon1 val;
	// Line 1061, Address: 0x287480, Func Offset: 0
	// Line 1062, Address: 0x28748c, Func Offset: 0xc
	// Line 1063, Address: 0x28749c, Func Offset: 0x1c
	// Line 1064, Address: 0x2874a4, Func Offset: 0x24
	// Line 1065, Address: 0x2874c4, Func Offset: 0x44
	// Line 1066, Address: 0x2874cc, Func Offset: 0x4c
	// Line 1067, Address: 0x2874d4, Func Offset: 0x54
	// Line 1068, Address: 0x2874d8, Func Offset: 0x58
	// Line 1069, Address: 0x2874e0, Func Offset: 0x60
	// Func End, Address: 0x2874f0, Func Offset: 0x70
}

// 
// Start address: 0x2874f0
void WakuupDemoSetEnable()
{
	// Line 1079, Address: 0x2874f0, Func Offset: 0
	// Line 1080, Address: 0x287500, Func Offset: 0x10
	// Func End, Address: 0x287508, Func Offset: 0x18
}

// 
// Start address: 0x287510
void WakuupDemoSetDisable()
{
	// Line 1090, Address: 0x287510, Func Offset: 0
	// Line 1091, Address: 0x287520, Func Offset: 0x10
	// Func End, Address: 0x287528, Func Offset: 0x18
}

// 
// Start address: 0x287530
int WakuupDemoCheckEnable()
{
	// Line 1103, Address: 0x287530, Func Offset: 0
	// Line 1108, Address: 0x287540, Func Offset: 0x10
	// Func End, Address: 0x287548, Func Offset: 0x18
}

// 
// Start address: 0x287550
int Room302EntranceOpen()
{
	// Line 1120, Address: 0x287550, Func Offset: 0
	// Line 1125, Address: 0x28755c, Func Offset: 0xc
	// Func End, Address: 0x287564, Func Offset: 0x14
}

// 
// Start address: 0x287570
int ev_water0_get_underground_key_init(sfObj* obj)
{
	_EventInst* evinst;
	// Line 1144, Address: 0x287570, Func Offset: 0
	// Line 1145, Address: 0x28757c, Func Offset: 0xc
	// Line 1147, Address: 0x287584, Func Offset: 0x14
	// Line 1149, Address: 0x28758c, Func Offset: 0x1c
	// Line 1150, Address: 0x287594, Func Offset: 0x24
	// Line 1152, Address: 0x287598, Func Offset: 0x28
	// Line 1153, Address: 0x2875a0, Func Offset: 0x30
	// Func End, Address: 0x2875b0, Func Offset: 0x40
}

// 
// Start address: 0x2875b0
int ev_water0_get_underground_key_end()
{
	// Line 1156, Address: 0x2875b0, Func Offset: 0
	// Line 1158, Address: 0x2875b8, Func Offset: 0x8
	// Line 1161, Address: 0x2875c0, Func Offset: 0x10
	// Line 1160, Address: 0x2875c4, Func Offset: 0x14
	// Line 1161, Address: 0x2875c8, Func Offset: 0x18
	// Func End, Address: 0x2875d0, Func Offset: 0x20
}

// 
// Start address: 0x2875d0
void EvGetUndergroundKey()
{
	// Line 1176, Address: 0x2875d0, Func Offset: 0
	// Line 1177, Address: 0x2875d4, Func Offset: 0x4
	// Line 1176, Address: 0x2875d8, Func Offset: 0x8
	// Line 1177, Address: 0x2875dc, Func Offset: 0xc
	// Line 1178, Address: 0x2875ec, Func Offset: 0x1c
	// Line 1180, Address: 0x2875fc, Func Offset: 0x2c
	// Line 1182, Address: 0x287604, Func Offset: 0x34
	// Line 1184, Address: 0x287614, Func Offset: 0x44
	// Line 1185, Address: 0x287618, Func Offset: 0x48
	// Func End, Address: 0x287624, Func Offset: 0x54
}

// 
// Start address: 0x287630
int ev_cmn_trgchk_mcd_msg_list(sfObj* obj)
{
	_anon1 val;
	_MessageList* list;
	// Line 1227, Address: 0x287630, Func Offset: 0
	// Line 1231, Address: 0x287638, Func Offset: 0x8
	// Line 1232, Address: 0x287648, Func Offset: 0x18
	// Line 1235, Address: 0x287650, Func Offset: 0x20
	// Line 1236, Address: 0x287668, Func Offset: 0x38
	// Line 1238, Address: 0x28766c, Func Offset: 0x3c
	// Line 1242, Address: 0x287678, Func Offset: 0x48
	// Line 1238, Address: 0x287680, Func Offset: 0x50
	// Line 1239, Address: 0x287684, Func Offset: 0x54
	// Line 1240, Address: 0x28768c, Func Offset: 0x5c
	// Line 1241, Address: 0x287694, Func Offset: 0x64
	// Line 1242, Address: 0x287698, Func Offset: 0x68
	// Line 1243, Address: 0x2876c4, Func Offset: 0x94
	// Line 1244, Address: 0x2876cc, Func Offset: 0x9c
	// Line 1245, Address: 0x2876d0, Func Offset: 0xa0
	// Line 1246, Address: 0x2876d4, Func Offset: 0xa4
	// Line 1248, Address: 0x2876e0, Func Offset: 0xb0
	// Line 1249, Address: 0x2876e8, Func Offset: 0xb8
	// Func End, Address: 0x2876f4, Func Offset: 0xc4
}

// 
// Start address: 0x287700
int ev_cmn_init_mcd_msg_list(sfObj* obj)
{
	_EventInst* evinst;
	_anon1 val;
	_MessageList* list;
	_anon1* msg;
	// Line 1255, Address: 0x287700, Func Offset: 0
	// Line 1256, Address: 0x287708, Func Offset: 0x8
	// Line 1261, Address: 0x287710, Func Offset: 0x10
	// Line 1262, Address: 0x287724, Func Offset: 0x24
	// Line 1264, Address: 0x28772c, Func Offset: 0x2c
	// Line 1269, Address: 0x287734, Func Offset: 0x34
	// Line 1264, Address: 0x28773c, Func Offset: 0x3c
	// Line 1265, Address: 0x287744, Func Offset: 0x44
	// Line 1267, Address: 0x28774c, Func Offset: 0x4c
	// Line 1268, Address: 0x287754, Func Offset: 0x54
	// Line 1269, Address: 0x287758, Func Offset: 0x58
	// Line 1271, Address: 0x287784, Func Offset: 0x84
	// Line 1272, Address: 0x28778c, Func Offset: 0x8c
	// Line 1273, Address: 0x287790, Func Offset: 0x90
	// Line 1274, Address: 0x287798, Func Offset: 0x98
	// Line 1276, Address: 0x2877a0, Func Offset: 0xa0
	// Line 1277, Address: 0x2877a8, Func Offset: 0xa8
	// Line 1280, Address: 0x2877b0, Func Offset: 0xb0
	// Line 1281, Address: 0x2877b8, Func Offset: 0xb8
	// Line 1282, Address: 0x2877c0, Func Offset: 0xc0
	// Func End, Address: 0x2877d0, Func Offset: 0xd0
}

