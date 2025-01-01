typedef struct _PLAYER_WORK;
typedef struct sgBone;
typedef struct _SD_TRACK_DATA;
typedef struct sgAnime;
typedef struct sgIKHandle;
typedef struct _SD_ADX_TRACK;
typedef enum _SD_PAGE_KIND : unsigned char;
typedef struct _SD_TRACK_AREA;
typedef struct sfObj;
typedef struct sgSVModel;
typedef struct sfCharacter;
typedef union _anon0;
typedef struct _SD_SEQ_ADX_MANAGER;
typedef struct _SD_TRACK_WORK;
typedef struct _SD_SPECIAL_AREA;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _SD_SPU_SE_MANAGER;
typedef struct sfCldObject;
typedef union _anon3;
typedef struct sgQTNode;
typedef struct sfCldPart;
typedef struct _GAME_WORK;
typedef struct _NEAR_TRACK_DATA;
typedef struct _anon4;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgQTObject;
typedef struct _SD_TRACK_DEBUG;
typedef struct _anon5;
typedef struct sfOffsetAABB;
typedef struct _anon6;
typedef union sfCldBody;
typedef struct _SD_TRACK_MANAGER;
typedef struct _anon7;
typedef enum GameItem : unsigned char;
typedef struct _anon8;
typedef struct _SOUND_SYSTEM_DATA;

typedef void(*type_1)(sgAnime*, int);
typedef void(*type_8)(sfObj*);
typedef void(*type_13)(sfObj*);
typedef void(*type_16)(_anon1*, int, int, float*);
typedef sgIKSolveResult(*type_34)();

typedef void* type_0[4];
typedef float type_2[4];
typedef int type_3[1];
typedef _anon0 type_4[256];
typedef float type_5[4][4];
typedef unsigned char type_6[4];
typedef _SD_ADX_TRACK type_7[2];
typedef int type_9[1];
typedef int type_10[7];
typedef int type_11[1];
typedef float type_12[4];
typedef int type_14[1];
typedef unsigned long type_15[8];
typedef sfCldPart* type_17[6];
typedef unsigned char type_18[3];
typedef int type_19[1];
typedef char type_20[8];
typedef int type_21[1];
typedef char type_22[8];
typedef short type_23[2];
typedef _NEAR_TRACK_DATA type_24[32];
typedef int type_25[1];
typedef unsigned short type_26[2];
typedef char type_27[4];
typedef unsigned char type_28[4];
typedef _SD_TRACK_MANAGER type_29[8];
typedef float type_30[1];
typedef _SD_SPU_SE_MANAGER type_31[4];
typedef float type_32[4][2];
typedef int type_33[1];
typedef float type_35[4];
typedef unsigned char type_36[3];

struct _PLAYER_WORK
{
	int num;
	int type;
	float life;
	float str;
	float def;
	float tire;
	int dull_count;
	int dulls;
	int dull_motion;
	int invincible;
	GameItem wp_last;
	float life_max;
	float str_max;
	float def_max;
	float ampule_time;
	int draw_flag;
	float pos[4];
	float v_pos[4];
	float eyerot[4];
	float prev_pos[4];
	float rot[4];
	float prev_rot[4];
	float v_rot[4];
	float speed;
	sfCharacter chara;
	sfCharacter* obj;
	sgAnime* anim;
	sgAnime* anim_frame;
	sfCldObject cld_obj;
	sfObj* ch_obj;
	int battle_stat;
	int holy_stat;
	float power_attack;
	int damage;
	int gotmode;
	int hold;
	int hold_kind;
	float hold_time;
	int gun_ikset;
	float gun_angle;
	sfObj* target;
	int target_mode;
	GameItem weapon_kind;
	sfCharacter weapon_chr;
	sfCharacter* wp_chr;
	sfObj* wp_obj;
	sfCldObject weapon_cld;
	sfCldObject* wp_cld;
	int cld_entry;
	GameItem holy_kind;
	int autolock;
	int sword_stat;
	int enemy_near;
	int anime_process;
	int anime_sub;
	_anon4* anim_ctrl;
	int slot_frame;
	int link_anim;
	int slot_link;
	float anim_speed;
	float hit_reduce;
	int auto_search;
	int pos_f;
	float pos_bak[4];
	float rot_bak[4];
	float last_neck[4];
	int advance_only;
	int who;
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

struct _SD_TRACK_DATA
{
	_SD_TRACK_AREA area;
	int block_id;
	short kind;
	short flags;
	_anon3 u;
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

struct _SD_ADX_TRACK
{
	int stat;
	int before_stat;
	int adx_no;
	int adx_next_no;
	int vol_stat;
	int vol_next_stat;
	int fade_out_type;
	int stop_type;
	int stop_next_type;
	float next_volume;
	float genPos[4];
	float radius;
};

enum _SD_PAGE_KIND : unsigned char
{
	SD_PAGE_FINISH,
	SD_PAGE_DEMO_START = 0xa,
	SD_PAGE_ENC_ENEMY
};

struct _SD_TRACK_AREA
{
	float x0;
	float z0;
	float x1;
	float z1;
	float min_y;
	float max_y;
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

struct _SD_SEQ_ADX_MANAGER
{
	_SD_ADX_TRACK track[2];
	int seq_stat;
	int seq_no;
	int seq_next_no;
	int seq_vol_stat;
	int seq_vol_next_stat;
	int seq_now_trg;
	int seq_fade_out_type;
	int seq_fLoadOnly;
	float seq_next_volume;
};

struct _SD_TRACK_WORK
{
	_SD_TRACK_DATA* td_ary;
	float chara_pos[4];
	float half_w;
	int page;
	int near_area_num;
	_NEAR_TRACK_DATA near_track_ary[32];
};

struct _SD_SPECIAL_AREA
{
	int track;
	int no;
	int percent;
	int spFlags;
	int fadeType;
	int volumeType;
	float volume;
	int stopType;
	int playPage;
	int dummy[7];
};

struct _anon1
{
	unsigned long tex0;
	unsigned long clamp;
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

struct _SD_SPU_SE_MANAGER
{
	int se_no;
	int vol_stat;
	int slot;
	float volume;
	float radius;
	float genPos[4];
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

union _anon3
{
	unsigned long stat[8];
	_SD_SPECIAL_AREA sa;
};

struct sgQTNode
{
	int dummy;
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

struct _NEAR_TRACK_DATA
{
	char inVol[8];
	char outVol[8];
};

struct _anon4
{
	int dummy;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgQTObject
{
	_anon6 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _SD_TRACK_DEBUG
{
	int mode;
	int absNum;
	int pageMode;
	int page;
	int row;
	int col;
	int rowForPlay;
	int rowForStop;
	int rowForPage;
	int selectKind;
	int copySrc;
	int fCanUndo;
	_SD_TRACK_DATA delBackUp;
};

struct _anon5
{
	float start[4];
	float end[4];
};

struct sfOffsetAABB
{
	_anon7 aabb;
	float offset[4];
};

struct _anon6
{
	float center[4];
	float radius;
};

union sfCldBody
{
	_anon8 obb;
	_anon7 aabb;
	sfOffsetAABB offset_aabb;
	_anon5 line;
	_anon6 sphere;
};

struct _SD_TRACK_MANAGER
{
	int status;
	int fade_in_type;
	int fade_out_type;
	float volume;
};

struct _anon7
{
	float bmin[4];
	float bmax[4];
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

struct _anon8
{
	float mat[4][4];
	float half_w[4];
};

struct _SOUND_SYSTEM_DATA
{
	int fPlaySystemActive;
	int seqTrgLoadStep;
	int nowStage;
	int newStage;
	int nowStageForSE;
	int nowStageForEnemySE;
	int nowStageForReverb;
	int fAfterSdbLoadInit;
	int fAfterSdbLoadEnd;
	int fNowSeLoading;
	int fNowEnemySeLoading;
	int fNowReverbSetting;
	int fNowPreProcessMcMv;
	int page;
	int monoType;
	unsigned char* sdb_buf;
	void* sd_load_buf;
	int tool_update;
	int pauseStatus;
	int menuVolumeStatus;
	int movieStart;
};

_SD_SEQ_ADX_MANAGER seqAdxMan;
_SOUND_SYSTEM_DATA ssd;
_SD_SPU_SE_MANAGER spuSeMan[4];
_GAME_WORK gamew;
_SD_TRACK_DEBUG trDebug;
_SD_TRACK_WORK trWork;
_SD_TRACK_MANAGER trackMan[8];

void sdPlayAreaADX(_SD_TRACK_DATA* td_p, int adjustedTrack);
void sdPlayAreaSpuSe(_SD_TRACK_DATA* td_p);
void sdStopAreaADX(_SD_TRACK_DATA* td_p);
void sdStopAreaSeq(_SD_TRACK_DATA* td_p);
void sdPageArea(int no, int flags);
void sdGetTrackDataByCharaPos(_SD_TRACK_WORK* w_p);
int sdTrackAutoSelect(int adx_no);
int sdGetBgmPage();
void sdManageSeChange();
void sdClearSpuSeMan();
void sdAutoPlayByProgram();

// 
// Start address: 0x271540
void sdPlayAreaADX(_SD_TRACK_DATA* td_p, int adjustedTrack)
{
	int i;
	int r;
	// Line 60, Address: 0x271540, Func Offset: 0
	// Line 64, Address: 0x27155c, Func Offset: 0x1c
	// Line 65, Address: 0x271568, Func Offset: 0x28
	// Line 67, Address: 0x271594, Func Offset: 0x54
	// Line 70, Address: 0x2715ac, Func Offset: 0x6c
	// Line 72, Address: 0x2715b0, Func Offset: 0x70
	// Line 73, Address: 0x2715bc, Func Offset: 0x7c
	// Line 77, Address: 0x2715cc, Func Offset: 0x8c
	// Line 78, Address: 0x2715d0, Func Offset: 0x90
	// Line 79, Address: 0x2715dc, Func Offset: 0x9c
	// Line 78, Address: 0x2715e0, Func Offset: 0xa0
	// Line 79, Address: 0x2715f0, Func Offset: 0xb0
	// Line 84, Address: 0x2715fc, Func Offset: 0xbc
	// Line 86, Address: 0x271600, Func Offset: 0xc0
	// Line 88, Address: 0x271610, Func Offset: 0xd0
	// Line 89, Address: 0x271630, Func Offset: 0xf0
	// Line 88, Address: 0x271634, Func Offset: 0xf4
	// Line 89, Address: 0x271638, Func Offset: 0xf8
	// Line 88, Address: 0x271640, Func Offset: 0x100
	// Line 89, Address: 0x271644, Func Offset: 0x104
	// Line 91, Address: 0x271654, Func Offset: 0x114
	// Line 93, Address: 0x271684, Func Offset: 0x144
	// Line 95, Address: 0x27168c, Func Offset: 0x14c
	// Line 93, Address: 0x271690, Func Offset: 0x150
	// Line 96, Address: 0x271694, Func Offset: 0x154
	// Line 93, Address: 0x271698, Func Offset: 0x158
	// Line 94, Address: 0x2716a4, Func Offset: 0x164
	// Line 93, Address: 0x2716a8, Func Offset: 0x168
	// Line 94, Address: 0x2716ac, Func Offset: 0x16c
	// Line 95, Address: 0x2716c0, Func Offset: 0x180
	// Line 96, Address: 0x2716d4, Func Offset: 0x194
	// Line 95, Address: 0x2716d8, Func Offset: 0x198
	// Line 96, Address: 0x2716dc, Func Offset: 0x19c
	// Line 91, Address: 0x2716f0, Func Offset: 0x1b0
	// Line 93, Address: 0x2716f4, Func Offset: 0x1b4
	// Line 91, Address: 0x2716f8, Func Offset: 0x1b8
	// Line 93, Address: 0x271700, Func Offset: 0x1c0
	// Line 95, Address: 0x271708, Func Offset: 0x1c8
	// Line 96, Address: 0x27170c, Func Offset: 0x1cc
	// Line 93, Address: 0x271710, Func Offset: 0x1d0
	// Line 94, Address: 0x27171c, Func Offset: 0x1dc
	// Line 95, Address: 0x271724, Func Offset: 0x1e4
	// Line 96, Address: 0x271738, Func Offset: 0x1f8
	// Line 97, Address: 0x27173c, Func Offset: 0x1fc
	// Line 99, Address: 0x271740, Func Offset: 0x200
	// Line 100, Address: 0x271764, Func Offset: 0x224
	// Line 102, Address: 0x27177c, Func Offset: 0x23c
	// Line 103, Address: 0x271788, Func Offset: 0x248
	// Line 105, Address: 0x271790, Func Offset: 0x250
	// Line 106, Address: 0x27179c, Func Offset: 0x25c
	// Line 105, Address: 0x2717a0, Func Offset: 0x260
	// Line 106, Address: 0x2717a4, Func Offset: 0x264
	// Line 107, Address: 0x2717ac, Func Offset: 0x26c
	// Line 108, Address: 0x2717b4, Func Offset: 0x274
	// Line 107, Address: 0x2717b8, Func Offset: 0x278
	// Line 108, Address: 0x2717bc, Func Offset: 0x27c
	// Line 105, Address: 0x2717c0, Func Offset: 0x280
	// Line 109, Address: 0x2717c4, Func Offset: 0x284
	// Line 106, Address: 0x2717c8, Func Offset: 0x288
	// Line 109, Address: 0x2717cc, Func Offset: 0x28c
	// Line 108, Address: 0x2717d0, Func Offset: 0x290
	// Line 109, Address: 0x2717d4, Func Offset: 0x294
	// Line 106, Address: 0x2717d8, Func Offset: 0x298
	// Line 107, Address: 0x2717dc, Func Offset: 0x29c
	// Line 108, Address: 0x2717e4, Func Offset: 0x2a4
	// Line 109, Address: 0x2717ec, Func Offset: 0x2ac
	// Line 112, Address: 0x2717f4, Func Offset: 0x2b4
	// Line 113, Address: 0x27180c, Func Offset: 0x2cc
	// Func End, Address: 0x271824, Func Offset: 0x2e4
}

// 
// Start address: 0x271830
void sdPlayAreaSpuSe(_SD_TRACK_DATA* td_p)
{
	int i;
	float radius;
	float pos[4];
	// Line 139, Address: 0x271830, Func Offset: 0
	// Line 144, Address: 0x271834, Func Offset: 0x4
	// Line 139, Address: 0x271838, Func Offset: 0x8
	// Line 144, Address: 0x27183c, Func Offset: 0xc
	// Line 139, Address: 0x271840, Func Offset: 0x10
	// Line 144, Address: 0x271844, Func Offset: 0x14
	// Line 139, Address: 0x271848, Func Offset: 0x18
	// Line 144, Address: 0x27185c, Func Offset: 0x2c
	// Line 145, Address: 0x271868, Func Offset: 0x38
	// Line 148, Address: 0x271888, Func Offset: 0x58
	// Line 151, Address: 0x271890, Func Offset: 0x60
	// Line 152, Address: 0x2718a8, Func Offset: 0x78
	// Line 153, Address: 0x2718b4, Func Offset: 0x84
	// Line 154, Address: 0x2718c0, Func Offset: 0x90
	// Line 158, Address: 0x2718c8, Func Offset: 0x98
	// Line 159, Address: 0x2718d8, Func Offset: 0xa8
	// Line 161, Address: 0x2718e0, Func Offset: 0xb0
	// Line 159, Address: 0x2718e4, Func Offset: 0xb4
	// Line 161, Address: 0x2718ec, Func Offset: 0xbc
	// Line 168, Address: 0x2718fc, Func Offset: 0xcc
	// Line 169, Address: 0x271910, Func Offset: 0xe0
	// Line 163, Address: 0x271914, Func Offset: 0xe4
	// Line 166, Address: 0x271918, Func Offset: 0xe8
	// Line 165, Address: 0x27191c, Func Offset: 0xec
	// Line 168, Address: 0x271920, Func Offset: 0xf0
	// Line 169, Address: 0x271924, Func Offset: 0xf4
	// Line 174, Address: 0x27192c, Func Offset: 0xfc
	// Line 169, Address: 0x271930, Func Offset: 0x100
	// Line 173, Address: 0x27193c, Func Offset: 0x10c
	// Line 169, Address: 0x271940, Func Offset: 0x110
	// Line 170, Address: 0x271944, Func Offset: 0x114
	// Line 171, Address: 0x271958, Func Offset: 0x128
	// Line 170, Address: 0x27195c, Func Offset: 0x12c
	// Line 171, Address: 0x271960, Func Offset: 0x130
	// Line 173, Address: 0x271974, Func Offset: 0x144
	// Line 174, Address: 0x271990, Func Offset: 0x160
	// Line 176, Address: 0x2719a4, Func Offset: 0x174
	// Line 174, Address: 0x2719a8, Func Offset: 0x178
	// Line 176, Address: 0x2719ac, Func Offset: 0x17c
	// Line 163, Address: 0x2719b4, Func Offset: 0x184
	// Line 176, Address: 0x2719b8, Func Offset: 0x188
	// Line 163, Address: 0x2719bc, Func Offset: 0x18c
	// Line 176, Address: 0x2719c0, Func Offset: 0x190
	// Line 161, Address: 0x2719c8, Func Offset: 0x198
	// Line 176, Address: 0x2719cc, Func Offset: 0x19c
	// Line 161, Address: 0x2719d8, Func Offset: 0x1a8
	// Line 176, Address: 0x2719dc, Func Offset: 0x1ac
	// Line 163, Address: 0x271a38, Func Offset: 0x208
	// Line 165, Address: 0x271a40, Func Offset: 0x210
	// Line 163, Address: 0x271a44, Func Offset: 0x214
	// Line 164, Address: 0x271a4c, Func Offset: 0x21c
	// Line 166, Address: 0x271a50, Func Offset: 0x220
	// Line 174, Address: 0x271a54, Func Offset: 0x224
	// Line 164, Address: 0x271a58, Func Offset: 0x228
	// Line 165, Address: 0x271a5c, Func Offset: 0x22c
	// Line 166, Address: 0x271a68, Func Offset: 0x238
	// Line 165, Address: 0x271a6c, Func Offset: 0x23c
	// Line 168, Address: 0x271a74, Func Offset: 0x244
	// Line 169, Address: 0x271a7c, Func Offset: 0x24c
	// Line 170, Address: 0x271a80, Func Offset: 0x250
	// Line 171, Address: 0x271a88, Func Offset: 0x258
	// Line 173, Address: 0x271a8c, Func Offset: 0x25c
	// Line 174, Address: 0x271aa4, Func Offset: 0x274
	// Line 176, Address: 0x271aa8, Func Offset: 0x278
	// Line 178, Address: 0x271adc, Func Offset: 0x2ac
	// Func End, Address: 0x271b04, Func Offset: 0x2d4
}

// 
// Start address: 0x271b10
void sdStopAreaADX(_SD_TRACK_DATA* td_p)
{
	int i;
	int no;
	int track;
	// Line 186, Address: 0x271b10, Func Offset: 0
	// Line 188, Address: 0x271b28, Func Offset: 0x18
	// Line 189, Address: 0x271b2c, Func Offset: 0x1c
	// Line 191, Address: 0x271b30, Func Offset: 0x20
	// Line 192, Address: 0x271b40, Func Offset: 0x30
	// Line 194, Address: 0x271b54, Func Offset: 0x44
	// Line 196, Address: 0x271b68, Func Offset: 0x58
	// Line 198, Address: 0x271b80, Func Offset: 0x70
	// Line 199, Address: 0x271b88, Func Offset: 0x78
	// Line 203, Address: 0x271b90, Func Offset: 0x80
	// Line 205, Address: 0x271ba0, Func Offset: 0x90
	// Line 208, Address: 0x271bb0, Func Offset: 0xa0
	// Line 209, Address: 0x271bc4, Func Offset: 0xb4
	// Line 210, Address: 0x271bd4, Func Offset: 0xc4
	// Line 213, Address: 0x271be4, Func Offset: 0xd4
	// Line 214, Address: 0x271bf8, Func Offset: 0xe8
	// Func End, Address: 0x271c14, Func Offset: 0x104
}

// 
// Start address: 0x271c20
void sdStopAreaSeq(_SD_TRACK_DATA* td_p)
{
	// Line 222, Address: 0x271c20, Func Offset: 0
	// Line 223, Address: 0x271c30, Func Offset: 0x10
	// Line 224, Address: 0x271c40, Func Offset: 0x20
	// Line 225, Address: 0x271c4c, Func Offset: 0x2c
	// Line 226, Address: 0x271c50, Func Offset: 0x30
	// Func End, Address: 0x271c5c, Func Offset: 0x3c
}

// 
// Start address: 0x271c60
void sdPageArea(int no, int flags)
{
	// Line 236, Address: 0x271c60, Func Offset: 0
	// Line 238, Address: 0x271c6c, Func Offset: 0xc
	// Line 239, Address: 0x271c78, Func Offset: 0x18
	// Line 240, Address: 0x271c8c, Func Offset: 0x2c
	// Line 243, Address: 0x271c90, Func Offset: 0x30
	// Func End, Address: 0x271c98, Func Offset: 0x38
}

// 
// Start address: 0x271ca0
void sdGetTrackDataByCharaPos(_SD_TRACK_WORK* w_p)
{
	int j;
	float min_x;
	float min_z;
	float max_z;
	_SD_TRACK_DATA* td;
	// Line 251, Address: 0x271ca0, Func Offset: 0
	// Line 260, Address: 0x271cb0, Func Offset: 0x10
	// Line 261, Address: 0x271cb4, Func Offset: 0x14
	// Line 267, Address: 0x271cb8, Func Offset: 0x18
	// Line 274, Address: 0x271cd8, Func Offset: 0x38
	// Line 278, Address: 0x271cf4, Func Offset: 0x54
	// Line 283, Address: 0x271cf8, Func Offset: 0x58
	// Line 278, Address: 0x271cfc, Func Offset: 0x5c
	// Line 283, Address: 0x271d00, Func Offset: 0x60
	// Line 280, Address: 0x271d08, Func Offset: 0x68
	// Line 283, Address: 0x271d0c, Func Offset: 0x6c
	// Line 287, Address: 0x271d48, Func Offset: 0xa8
	// Line 292, Address: 0x271d6c, Func Offset: 0xcc
	// Line 293, Address: 0x271d74, Func Offset: 0xd4
	// Line 296, Address: 0x271da0, Func Offset: 0x100
	// Line 297, Address: 0x271dac, Func Offset: 0x10c
	// Line 298, Address: 0x271db4, Func Offset: 0x114
	// Line 297, Address: 0x271db8, Func Offset: 0x118
	// Line 299, Address: 0x271dbc, Func Offset: 0x11c
	// Line 304, Address: 0x271dc8, Func Offset: 0x128
	// Line 305, Address: 0x271dd0, Func Offset: 0x130
	// Line 306, Address: 0x271dd8, Func Offset: 0x138
	// Line 307, Address: 0x271de0, Func Offset: 0x140
	// Line 309, Address: 0x271dec, Func Offset: 0x14c
	// Line 310, Address: 0x271df8, Func Offset: 0x158
	// Line 311, Address: 0x271e00, Func Offset: 0x160
	// Line 312, Address: 0x271e08, Func Offset: 0x168
	// Line 313, Address: 0x271e18, Func Offset: 0x178
	// Line 314, Address: 0x271e20, Func Offset: 0x180
	// Line 315, Address: 0x271e28, Func Offset: 0x188
	// Line 316, Address: 0x271e38, Func Offset: 0x198
	// Line 317, Address: 0x271e40, Func Offset: 0x1a0
	// Line 318, Address: 0x271e48, Func Offset: 0x1a8
	// Line 319, Address: 0x271e58, Func Offset: 0x1b8
	// Line 320, Address: 0x271e60, Func Offset: 0x1c0
	// Line 322, Address: 0x271e68, Func Offset: 0x1c8
	// Line 323, Address: 0x271e7c, Func Offset: 0x1dc
	// Line 324, Address: 0x271e88, Func Offset: 0x1e8
	// Line 327, Address: 0x271e90, Func Offset: 0x1f0
	// Line 329, Address: 0x271e98, Func Offset: 0x1f8
	// Line 330, Address: 0x271ea8, Func Offset: 0x208
	// Line 331, Address: 0x271eb0, Func Offset: 0x210
	// Line 332, Address: 0x271eb8, Func Offset: 0x218
	// Line 336, Address: 0x271ec0, Func Offset: 0x220
	// Line 337, Address: 0x271ec8, Func Offset: 0x228
	// Line 338, Address: 0x271ee0, Func Offset: 0x240
	// Line 339, Address: 0x271ef0, Func Offset: 0x250
	// Line 340, Address: 0x271f04, Func Offset: 0x264
	// Line 341, Address: 0x271f14, Func Offset: 0x274
	// Line 342, Address: 0x271f20, Func Offset: 0x280
	// Line 343, Address: 0x271f44, Func Offset: 0x2a4
	// Line 345, Address: 0x271f78, Func Offset: 0x2d8
	// Line 346, Address: 0x271f88, Func Offset: 0x2e8
	// Line 357, Address: 0x271f94, Func Offset: 0x2f4
	// Line 360, Address: 0x271fb8, Func Offset: 0x318
	// Line 361, Address: 0x271fc4, Func Offset: 0x324
	// Line 362, Address: 0x271fc8, Func Offset: 0x328
	// Line 363, Address: 0x271fe0, Func Offset: 0x340
	// Line 364, Address: 0x271ff0, Func Offset: 0x350
	// Line 365, Address: 0x272004, Func Offset: 0x364
	// Line 366, Address: 0x272014, Func Offset: 0x374
	// Line 367, Address: 0x272020, Func Offset: 0x380
	// Line 368, Address: 0x272044, Func Offset: 0x3a4
	// Line 370, Address: 0x272078, Func Offset: 0x3d8
	// Line 371, Address: 0x272088, Func Offset: 0x3e8
	// Line 373, Address: 0x272090, Func Offset: 0x3f0
	// Func End, Address: 0x2720a4, Func Offset: 0x404
}

// 
// Start address: 0x2720b0
int sdTrackAutoSelect(int adx_no)
{
	int track;
	// Line 384, Address: 0x2720b0, Func Offset: 0
	// Line 385, Address: 0x2720c4, Func Offset: 0x14
	// Line 387, Address: 0x2720d4, Func Offset: 0x24
	// Line 389, Address: 0x2720f0, Func Offset: 0x40
	// Line 391, Address: 0x27210c, Func Offset: 0x5c
	// Line 393, Address: 0x27212c, Func Offset: 0x7c
	// Line 395, Address: 0x272144, Func Offset: 0x94
	// Line 398, Address: 0x272150, Func Offset: 0xa0
	// Line 399, Address: 0x27216c, Func Offset: 0xbc
	// Line 401, Address: 0x27217c, Func Offset: 0xcc
	// Line 403, Address: 0x272198, Func Offset: 0xe8
	// Line 405, Address: 0x2721b4, Func Offset: 0x104
	// Line 407, Address: 0x2721d4, Func Offset: 0x124
	// Line 409, Address: 0x2721ec, Func Offset: 0x13c
	// Line 412, Address: 0x2721f8, Func Offset: 0x148
	// Line 413, Address: 0x272208, Func Offset: 0x158
	// Line 415, Address: 0x272214, Func Offset: 0x164
	// Line 417, Address: 0x272234, Func Offset: 0x184
	// Line 419, Address: 0x272250, Func Offset: 0x1a0
	// Line 421, Address: 0x272268, Func Offset: 0x1b8
	// Line 423, Address: 0x27227c, Func Offset: 0x1cc
	// Line 425, Address: 0x272294, Func Offset: 0x1e4
	// Line 427, Address: 0x2722ac, Func Offset: 0x1fc
	// Line 428, Address: 0x2722b8, Func Offset: 0x208
	// Line 430, Address: 0x2722bc, Func Offset: 0x20c
	// Line 433, Address: 0x2722c0, Func Offset: 0x210
	// Func End, Address: 0x2722c8, Func Offset: 0x218
}

// 
// Start address: 0x2722d0
int sdGetBgmPage()
{
	_PLAYER_WORK* player;
	_SD_PAGE_KIND page;
	// Line 442, Address: 0x2722d0, Func Offset: 0
	// Line 443, Address: 0x2722d4, Func Offset: 0x4
	// Line 442, Address: 0x2722d8, Func Offset: 0x8
	// Line 446, Address: 0x2722e0, Func Offset: 0x10
	// Line 448, Address: 0x2722f0, Func Offset: 0x20
	// Line 449, Address: 0x2722f8, Func Offset: 0x28
	// Line 451, Address: 0x272308, Func Offset: 0x38
	// Line 453, Address: 0x272310, Func Offset: 0x40
	// Line 456, Address: 0x272318, Func Offset: 0x48
	// Line 455, Address: 0x272320, Func Offset: 0x50
	// Line 456, Address: 0x272324, Func Offset: 0x54
	// Func End, Address: 0x27232c, Func Offset: 0x5c
}

// 
// Start address: 0x272330
void sdManageSeChange()
{
	int i;
	// Line 464, Address: 0x272330, Func Offset: 0
	// Line 467, Address: 0x272340, Func Offset: 0x10
	// Line 468, Address: 0x272354, Func Offset: 0x24
	// Line 469, Address: 0x272360, Func Offset: 0x30
	// Line 472, Address: 0x27237c, Func Offset: 0x4c
	// Line 473, Address: 0x272390, Func Offset: 0x60
	// Func End, Address: 0x2723a4, Func Offset: 0x74
}

// 
// Start address: 0x2723b0
void sdClearSpuSeMan()
{
	// Line 487, Address: 0x2723b0, Func Offset: 0
	// Line 489, Address: 0x2723d0, Func Offset: 0x20
	// Func End, Address: 0x2723d8, Func Offset: 0x28
}

// 
// Start address: 0x2723e0
void sdAutoPlayByProgram()
{
	// Line 516, Address: 0x2723e0, Func Offset: 0
	// Func End, Address: 0x2723e8, Func Offset: 0x8
}

