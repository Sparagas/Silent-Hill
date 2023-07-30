typedef struct PtclOrgData;
typedef struct _anon0;
typedef struct _anon1;
typedef struct DropLiquidCmnData;
typedef struct DropLiquidPtcl;
typedef struct sfObj;
typedef union _anon2;
typedef enum GameItem : unsigned char;
typedef union _anon3;
typedef enum DropLiquid_TexType : unsigned char;
typedef enum DropLiquid_MoveType : unsigned char;
typedef enum _cam3Step : unsigned char;
typedef struct _cam3Work;
typedef enum PlayerExtStatus : unsigned char;
typedef struct _GAME_WORK;

typedef void(*type_2)(void*, PtclOrgData*, void*);
typedef void(*type_13)(void*, int, PtclOrgData*, void*);
typedef void(*type_15)(void*, int, PtclOrgData*, void*);
typedef void(*type_19)(sfObj*);
typedef void(*type_21)();
typedef void(*type_23)(sfObj*);
typedef void(*type_31)(sfObj*);

typedef int type_0[4];
typedef unsigned int type_1[4];
typedef void* type_3[4];
typedef short type_4[8];
typedef unsigned short type_5[8];
typedef char type_6[16];
typedef int type_7[1];
typedef unsigned char type_8[16];
typedef float type_9[4];
typedef float type_10[1];
typedef int type_11[1];
typedef long type_12[1];
typedef float type_14[4];
typedef _anon0 type_16[2];
typedef float type_17[4][4];
typedef _anon3 type_18[256];
typedef float type_20[4];
typedef void(*type_22)()[2];
typedef unsigned char type_24[4];
typedef float type_25[4];
typedef int type_26[1];
typedef int type_27[1];
typedef short type_28[2];
typedef unsigned short type_29[2];
typedef char type_30[4];
typedef unsigned char type_32[4];
typedef void(*type_33)(sfObj*)[3];
typedef float type_34[1];
typedef int type_35[1];
typedef int type_36[1];
typedef int type_37[1];
typedef int type_38[1];
typedef long type_39[2];
typedef int type_40[1];
typedef unsigned long type_41[2];

struct PtclOrgData
{
	float GenPos[4];
	float GenPlaneVec1[4];
	float GenPlaneVec2[4];
	float GenDirVec[4];
	float GenPtclWidth;
	int GenPtclNum;
	float GenIntervalTime;
	float GenWaitSubTimer;
	float SpreadAng;
	float MaxGenSpd;
	float MinGenSpd;
	int TexFileNo;
	int TexNo;
	int ForDemoFlag;
	int DrawOffFlag;
	float IntervalSubTimer;
	int AlreadyGenPtclNum;
	int EndPtclNum;
	unsigned long AlivePtclFlags;
};

struct _anon0
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

struct _anon1
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

struct DropLiquidCmnData
{
	DropLiquid_MoveType MoveType;
	DropLiquid_TexType TexType;
	unsigned char RGBA[4];
	float FloorY;
	float DropIntervalTime;
	float RippleMaxSize;
	float RippleLifeTime;
};

struct DropLiquidPtcl
{
	float Pos[4];
	float Spd[4];
	short Step;
	float Timer;
	float RippleTimer;
	int RandVal;
	float EndPosX;
	float EndPosZ;
	int GenNo;
};

struct sfObj
{
	_anon3 fwork[256];
	_anon3* work;
	void(*func)(sfObj*);
	_anon3* work_pt0;
	_anon3* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon3* sys_work;
	_anon3* scene_work;
	_anon3* event_work;
	_anon3* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

union _anon2
{
	long sl[2];
	unsigned long ul[2];
	<unknown fundamental type (0xa510)> sl128;
	<unknown fundamental type (0xa510)> ul128;
	int si[4];
	unsigned int ui[4];
	void* pt[4];
	short ss[8];
	unsigned short us[8];
	char sc[16];
	unsigned char uc[16];
	float f[4];
	float fv[1];
	int iv[1];
	long lv[1];
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

union _anon3
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

enum DropLiquid_TexType : unsigned char
{
	DRLQ_TEX_CREAR_LQ,
	DRLQ_TEX_BLACK_LQ
};

enum DropLiquid_MoveType : unsigned char
{
	DRLQ_MOVE_DROP_WATER,
	DRLQ_MOVE_RAIN
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

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
float sg_vector_unit_w[4];
_GAME_WORK gamew;
_anon0 player_ext_info[2];
float sg_vector_unit_z[4];
float sg_vector_unit_x[4];
void(*DropLiquidPtcl_Draw)(void*, int, PtclOrgData*, void*);
void(*DropLiquidPtcl_Calc)(void*, int, PtclOrgData*, void*);
void(*Generate_OnePtcl)(void*, PtclOrgData*, void*);
_cam3Work cam3_work;

void make_GenPos_of_PtclOrgData(float* VecOrgPos, float* GenCenterPos, float* GenPlaneVec1, float* GenPlaneVec2);
void DropLiquid_BlackBloodFromGhost(float* GenCenterPos, float* GenMvSpd, float IntervalTime, float FloorY, int DropOneTimeFlag, int DemoFlag);
void DropLiquid_RainWater(float* GenCenterPos);
void DropLiquid_MzDropWater(int MkRippleFlag);
void DropLiquidParticle_MakeEasy(float* GenCenterPos, float GenXZLen, float* GenMvSpd, DropLiquid_TexType TexType, unsigned char* ColRGBA, int DropTimes, float IntervalTime, float FloorY, float RippleSize, int DemoFlag);
void DropLiquidParticle_Make(PtclOrgData* pOrgDt, DropLiquid_MoveType MoveType, DropLiquid_TexType TexType, unsigned char* RGBA, float FloorY, float RippleMaxSize, float RippleLifeTime);
void Generate_OnePtcl(void* PtclAdr, PtclOrgData* pOrgDt);
void DropLiquidPtcl_Calc(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn);
void DropLiquidPtcl_Draw(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn);
float make_alpha_rate(float ScrPosW);
_anon2* Make_DropLiquid_Packet(_anon2* pPk, DropLiquidPtcl* pPtcl, DropLiquidCmnData* pCmnDt, float Wld2ScrMat[4]);
_anon2* Make_RippleLiquidOnFloor_Packet(_anon2* pPk, DropLiquidPtcl* pPtcl, DropLiquidCmnData* pCmnDt, float Wld2ScrMat[4]);

// 
// Start address: 0x2e2fd0
void make_GenPos_of_PtclOrgData(float* VecOrgPos, float* GenCenterPos, float* GenPlaneVec1, float* GenPlaneVec2)
{
	float Vec[4];
	// Line 205, Address: 0x2e2fd0, Func Offset: 0
	// Line 208, Address: 0x2e2fd4, Func Offset: 0x4
	// Line 212, Address: 0x2e2fdc, Func Offset: 0xc
	// Line 210, Address: 0x2e2fe0, Func Offset: 0x10
	// Line 212, Address: 0x2e2fe8, Func Offset: 0x18
	// Line 213, Address: 0x2e300c, Func Offset: 0x3c
	// Line 215, Address: 0x2e3024, Func Offset: 0x54
	// Line 216, Address: 0x2e304c, Func Offset: 0x7c
	// Line 217, Address: 0x2e3064, Func Offset: 0x94
	// Func End, Address: 0x2e306c, Func Offset: 0x9c
}

// 
// Start address: 0x2e3070
void DropLiquid_BlackBloodFromGhost(float* GenCenterPos, float* GenMvSpd, float IntervalTime, float FloorY, int DropOneTimeFlag, int DemoFlag)
{
	unsigned char Col[4];
	int DropNum;
	int Br;
	// Line 230, Address: 0x2e3070, Func Offset: 0
	// Line 235, Address: 0x2e3074, Func Offset: 0x4
	// Line 230, Address: 0x2e3078, Func Offset: 0x8
	// Line 235, Address: 0x2e307c, Func Offset: 0xc
	// Line 237, Address: 0x2e3098, Func Offset: 0x28
	// Line 239, Address: 0x2e30a0, Func Offset: 0x30
	// Line 240, Address: 0x2e30a8, Func Offset: 0x38
	// Line 241, Address: 0x2e30b0, Func Offset: 0x40
	// Line 242, Address: 0x2e30b4, Func Offset: 0x44
	// Line 243, Address: 0x2e30b8, Func Offset: 0x48
	// Line 255, Address: 0x2e30e0, Func Offset: 0x70
	// Func End, Address: 0x2e30ec, Func Offset: 0x7c
}

// 
// Start address: 0x2e30f0
void DropLiquid_RainWater(float* GenCenterPos)
{
	PtclOrgData OrgDt;
	unsigned char RGBA[4];
	int Times;
	float GenPlaneVec2[4];
	float GenPlaneVec1[4];
	// Line 263, Address: 0x2e30f0, Func Offset: 0
	// Line 265, Address: 0x2e30f4, Func Offset: 0x4
	// Line 263, Address: 0x2e30f8, Func Offset: 0x8
	// Line 271, Address: 0x2e30fc, Func Offset: 0xc
	// Line 263, Address: 0x2e3100, Func Offset: 0x10
	// Line 265, Address: 0x2e3104, Func Offset: 0x14
	// Line 271, Address: 0x2e3110, Func Offset: 0x20
	// Line 265, Address: 0x2e3118, Func Offset: 0x28
	// Line 271, Address: 0x2e311c, Func Offset: 0x2c
	// Line 272, Address: 0x2e3128, Func Offset: 0x38
	// Line 274, Address: 0x2e313c, Func Offset: 0x4c
	// Line 281, Address: 0x2e3144, Func Offset: 0x54
	// Line 285, Address: 0x2e3158, Func Offset: 0x68
	// Line 281, Address: 0x2e315c, Func Offset: 0x6c
	// Line 285, Address: 0x2e3160, Func Offset: 0x70
	// Line 281, Address: 0x2e3164, Func Offset: 0x74
	// Line 293, Address: 0x2e3168, Func Offset: 0x78
	// Line 281, Address: 0x2e316c, Func Offset: 0x7c
	// Line 296, Address: 0x2e3170, Func Offset: 0x80
	// Line 283, Address: 0x2e3174, Func Offset: 0x84
	// Line 284, Address: 0x2e317c, Func Offset: 0x8c
	// Line 287, Address: 0x2e3188, Func Offset: 0x98
	// Line 288, Address: 0x2e3194, Func Offset: 0xa4
	// Line 289, Address: 0x2e319c, Func Offset: 0xac
	// Line 291, Address: 0x2e31a4, Func Offset: 0xb4
	// Line 289, Address: 0x2e31a8, Func Offset: 0xb8
	// Line 291, Address: 0x2e31ac, Func Offset: 0xbc
	// Line 292, Address: 0x2e31b4, Func Offset: 0xc4
	// Line 297, Address: 0x2e31b8, Func Offset: 0xc8
	// Line 298, Address: 0x2e31e8, Func Offset: 0xf8
	// Line 299, Address: 0x2e31f8, Func Offset: 0x108
	// Func End, Address: 0x2e3208, Func Offset: 0x118
}

// 
// Start address: 0x2e3210
void DropLiquid_MzDropWater(int MkRippleFlag)
{
	PtclOrgData OrgDt;
	_anon0* pPlayerIF;
	float GenCenterPos[4];
	unsigned char RGBA[4];
	float RippleMaxSize;
	int Times;
	int StgNo;
	int ScnNo;
	float GenPlaneVec2[4];
	float GenPlaneVec1[4];
	// Line 308, Address: 0x2e3210, Func Offset: 0
	// Line 312, Address: 0x2e3214, Func Offset: 0x4
	// Line 308, Address: 0x2e3218, Func Offset: 0x8
	// Line 312, Address: 0x2e321c, Func Offset: 0xc
	// Line 308, Address: 0x2e3220, Func Offset: 0x10
	// Line 312, Address: 0x2e3224, Func Offset: 0x14
	// Line 308, Address: 0x2e3228, Func Offset: 0x18
	// Line 312, Address: 0x2e322c, Func Offset: 0x1c
	// Line 321, Address: 0x2e323c, Func Offset: 0x2c
	// Line 312, Address: 0x2e3240, Func Offset: 0x30
	// Line 316, Address: 0x2e3244, Func Offset: 0x34
	// Line 321, Address: 0x2e3248, Func Offset: 0x38
	// Line 316, Address: 0x2e324c, Func Offset: 0x3c
	// Line 321, Address: 0x2e3250, Func Offset: 0x40
	// Line 323, Address: 0x2e3264, Func Offset: 0x54
	// Line 326, Address: 0x2e3270, Func Offset: 0x60
	// Line 327, Address: 0x2e3284, Func Offset: 0x74
	// Line 328, Address: 0x2e3298, Func Offset: 0x88
	// Line 331, Address: 0x2e32ac, Func Offset: 0x9c
	// Line 329, Address: 0x2e32b0, Func Offset: 0xa0
	// Line 331, Address: 0x2e32b4, Func Offset: 0xa4
	// Line 338, Address: 0x2e32bc, Func Offset: 0xac
	// Line 339, Address: 0x2e32c8, Func Offset: 0xb8
	// Line 340, Address: 0x2e32cc, Func Offset: 0xbc
	// Line 339, Address: 0x2e32d0, Func Offset: 0xc0
	// Line 340, Address: 0x2e32d4, Func Offset: 0xc4
	// Line 344, Address: 0x2e32d8, Func Offset: 0xc8
	// Line 340, Address: 0x2e32dc, Func Offset: 0xcc
	// Line 343, Address: 0x2e32e0, Func Offset: 0xd0
	// Line 341, Address: 0x2e32e4, Func Offset: 0xd4
	// Line 343, Address: 0x2e32e8, Func Offset: 0xd8
	// Line 341, Address: 0x2e32ec, Func Offset: 0xdc
	// Line 347, Address: 0x2e32f0, Func Offset: 0xe0
	// Line 338, Address: 0x2e32f4, Func Offset: 0xe4
	// Line 347, Address: 0x2e32f8, Func Offset: 0xe8
	// Line 338, Address: 0x2e32fc, Func Offset: 0xec
	// Line 349, Address: 0x2e3300, Func Offset: 0xf0
	// Line 344, Address: 0x2e3304, Func Offset: 0xf4
	// Line 345, Address: 0x2e3308, Func Offset: 0xf8
	// Line 347, Address: 0x2e330c, Func Offset: 0xfc
	// Line 354, Address: 0x2e3310, Func Offset: 0x100
	// Line 358, Address: 0x2e3324, Func Offset: 0x114
	// Line 359, Address: 0x2e3328, Func Offset: 0x118
	// Line 360, Address: 0x2e3354, Func Offset: 0x144
	// Line 361, Address: 0x2e3364, Func Offset: 0x154
	// Func End, Address: 0x2e3378, Func Offset: 0x168
}

// 
// Start address: 0x2e3380
void DropLiquidParticle_MakeEasy(float* GenCenterPos, float GenXZLen, float* GenMvSpd, DropLiquid_TexType TexType, unsigned char* ColRGBA, int DropTimes, float IntervalTime, float FloorY, float RippleSize, int DemoFlag)
{
	PtclOrgData OrgDt;
	float GenSpdVal;
	// Line 379, Address: 0x2e3380, Func Offset: 0
	// Line 381, Address: 0x2e3388, Func Offset: 0x8
	// Line 385, Address: 0x2e33a8, Func Offset: 0x28
	// Line 383, Address: 0x2e33ac, Func Offset: 0x2c
	// Line 388, Address: 0x2e33b0, Func Offset: 0x30
	// Line 383, Address: 0x2e33b4, Func Offset: 0x34
	// Line 385, Address: 0x2e33bc, Func Offset: 0x3c
	// Line 383, Address: 0x2e33c4, Func Offset: 0x44
	// Line 386, Address: 0x2e33c8, Func Offset: 0x48
	// Line 388, Address: 0x2e33cc, Func Offset: 0x4c
	// Line 383, Address: 0x2e33d4, Func Offset: 0x54
	// Line 384, Address: 0x2e33dc, Func Offset: 0x5c
	// Line 385, Address: 0x2e33e0, Func Offset: 0x60
	// Line 384, Address: 0x2e33e4, Func Offset: 0x64
	// Line 385, Address: 0x2e33e8, Func Offset: 0x68
	// Line 386, Address: 0x2e33ec, Func Offset: 0x6c
	// Line 385, Address: 0x2e33f4, Func Offset: 0x74
	// Line 386, Address: 0x2e33f8, Func Offset: 0x78
	// Line 385, Address: 0x2e33fc, Func Offset: 0x7c
	// Line 388, Address: 0x2e3400, Func Offset: 0x80
	// Line 389, Address: 0x2e3418, Func Offset: 0x98
	// Line 391, Address: 0x2e343c, Func Offset: 0xbc
	// Line 394, Address: 0x2e3448, Func Offset: 0xc8
	// Line 402, Address: 0x2e344c, Func Offset: 0xcc
	// Line 392, Address: 0x2e3450, Func Offset: 0xd0
	// Line 402, Address: 0x2e3454, Func Offset: 0xd4
	// Line 394, Address: 0x2e3458, Func Offset: 0xd8
	// Line 396, Address: 0x2e345c, Func Offset: 0xdc
	// Line 404, Address: 0x2e3460, Func Offset: 0xe0
	// Line 396, Address: 0x2e3464, Func Offset: 0xe4
	// Line 404, Address: 0x2e3468, Func Offset: 0xe8
	// Line 396, Address: 0x2e346c, Func Offset: 0xec
	// Line 393, Address: 0x2e3470, Func Offset: 0xf0
	// Line 398, Address: 0x2e3474, Func Offset: 0xf4
	// Line 400, Address: 0x2e347c, Func Offset: 0xfc
	// Line 396, Address: 0x2e3480, Func Offset: 0x100
	// Line 400, Address: 0x2e3484, Func Offset: 0x104
	// Line 398, Address: 0x2e3488, Func Offset: 0x108
	// Line 400, Address: 0x2e348c, Func Offset: 0x10c
	// Line 401, Address: 0x2e3490, Func Offset: 0x110
	// Line 398, Address: 0x2e3494, Func Offset: 0x114
	// Line 401, Address: 0x2e3498, Func Offset: 0x118
	// Line 404, Address: 0x2e34a0, Func Offset: 0x120
	// Line 397, Address: 0x2e34b8, Func Offset: 0x138
	// Line 404, Address: 0x2e34bc, Func Offset: 0x13c
	// Line 414, Address: 0x2e34c4, Func Offset: 0x144
	// Func End, Address: 0x2e34d0, Func Offset: 0x150
}

// 
// Start address: 0x2e34d0
void DropLiquidParticle_Make(PtclOrgData* pOrgDt, DropLiquid_MoveType MoveType, DropLiquid_TexType TexType, unsigned char* RGBA, float FloorY, float RippleMaxSize, float RippleLifeTime)
{
	DropLiquidCmnData CmnDt;
	// Line 428, Address: 0x2e34d0, Func Offset: 0
	// Line 431, Address: 0x2e34f8, Func Offset: 0x28
	// Line 428, Address: 0x2e34fc, Func Offset: 0x2c
	// Line 431, Address: 0x2e3500, Func Offset: 0x30
	// Line 438, Address: 0x2e3518, Func Offset: 0x48
	// Line 432, Address: 0x2e3544, Func Offset: 0x74
	// Line 433, Address: 0x2e3548, Func Offset: 0x78
	// Line 434, Address: 0x2e354c, Func Offset: 0x7c
	// Line 435, Address: 0x2e3550, Func Offset: 0x80
	// Line 438, Address: 0x2e3554, Func Offset: 0x84
	// Line 449, Address: 0x2e355c, Func Offset: 0x8c
	// Func End, Address: 0x2e3580, Func Offset: 0xb0
}

// 
// Start address: 0x2e3580
void Generate_OnePtcl(void* PtclAdr, PtclOrgData* pOrgDt)
{
	DropLiquidPtcl* pPtcl;
	float Vec1Rate;
	float Vec2Rate;
	// Line 461, Address: 0x2e3580, Func Offset: 0
	// Line 462, Address: 0x2e3594, Func Offset: 0x14
	// Line 465, Address: 0x2e3598, Func Offset: 0x18
	// Line 466, Address: 0x2e35a0, Func Offset: 0x20
	// Line 468, Address: 0x2e35a8, Func Offset: 0x28
	// Line 469, Address: 0x2e35bc, Func Offset: 0x3c
	// Line 470, Address: 0x2e35c8, Func Offset: 0x48
	// Line 471, Address: 0x2e35cc, Func Offset: 0x4c
	// Line 473, Address: 0x2e35d0, Func Offset: 0x50
	// Line 474, Address: 0x2e35dc, Func Offset: 0x5c
	// Func End, Address: 0x2e35f4, Func Offset: 0x74
}

// 
// Start address: 0x2e3600
void DropLiquidPtcl_Calc(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	DropLiquidPtcl* PtclAry;
	int PtclNo;
	DropLiquidCmnData* pCmnDt;
	float DragCoff;
	float RevDropSpdY;
	float MaxRevivalTime;
	DropLiquidPtcl* pPtcl;
	float MvVec[4];
	// Line 500, Address: 0x2e3600, Func Offset: 0
	// Line 508, Address: 0x2e3604, Func Offset: 0x4
	// Line 500, Address: 0x2e3608, Func Offset: 0x8
	// Line 501, Address: 0x2e3624, Func Offset: 0x24
	// Line 500, Address: 0x2e3628, Func Offset: 0x28
	// Line 508, Address: 0x2e3638, Func Offset: 0x38
	// Line 509, Address: 0x2e3654, Func Offset: 0x54
	// Line 510, Address: 0x2e3658, Func Offset: 0x58
	// Line 512, Address: 0x2e3660, Func Offset: 0x60
	// Line 510, Address: 0x2e3664, Func Offset: 0x64
	// Line 512, Address: 0x2e3668, Func Offset: 0x68
	// Line 513, Address: 0x2e366c, Func Offset: 0x6c
	// Line 514, Address: 0x2e3674, Func Offset: 0x74
	// Line 515, Address: 0x2e3678, Func Offset: 0x78
	// Line 517, Address: 0x2e3680, Func Offset: 0x80
	// Line 515, Address: 0x2e3684, Func Offset: 0x84
	// Line 517, Address: 0x2e3688, Func Offset: 0x88
	// Line 519, Address: 0x2e368c, Func Offset: 0x8c
	// Line 521, Address: 0x2e3690, Func Offset: 0x90
	// Line 523, Address: 0x2e3698, Func Offset: 0x98
	// Line 526, Address: 0x2e36a0, Func Offset: 0xa0
	// Line 529, Address: 0x2e36b4, Func Offset: 0xb4
	// Line 530, Address: 0x2e36c0, Func Offset: 0xc0
	// Line 529, Address: 0x2e36c8, Func Offset: 0xc8
	// Line 530, Address: 0x2e36cc, Func Offset: 0xcc
	// Line 532, Address: 0x2e36d8, Func Offset: 0xd8
	// Line 533, Address: 0x2e36f4, Func Offset: 0xf4
	// Line 534, Address: 0x2e372c, Func Offset: 0x12c
	// Line 535, Address: 0x2e3758, Func Offset: 0x158
	// Line 537, Address: 0x2e3770, Func Offset: 0x170
	// Line 539, Address: 0x2e37a0, Func Offset: 0x1a0
	// Line 543, Address: 0x2e37b4, Func Offset: 0x1b4
	// Line 544, Address: 0x2e37bc, Func Offset: 0x1bc
	// Line 549, Address: 0x2e37c0, Func Offset: 0x1c0
	// Line 545, Address: 0x2e37c4, Func Offset: 0x1c4
	// Line 549, Address: 0x2e37c8, Func Offset: 0x1c8
	// Line 545, Address: 0x2e37d4, Func Offset: 0x1d4
	// Line 546, Address: 0x2e37d8, Func Offset: 0x1d8
	// Line 547, Address: 0x2e37e0, Func Offset: 0x1e0
	// Line 549, Address: 0x2e37e8, Func Offset: 0x1e8
	// Line 550, Address: 0x2e37f4, Func Offset: 0x1f4
	// Line 551, Address: 0x2e37f8, Func Offset: 0x1f8
	// Line 553, Address: 0x2e3800, Func Offset: 0x200
	// Line 554, Address: 0x2e382c, Func Offset: 0x22c
	// Line 556, Address: 0x2e3844, Func Offset: 0x244
	// Line 558, Address: 0x2e384c, Func Offset: 0x24c
	// Line 559, Address: 0x2e3850, Func Offset: 0x250
	// Line 560, Address: 0x2e3864, Func Offset: 0x264
	// Line 561, Address: 0x2e3878, Func Offset: 0x278
	// Line 562, Address: 0x2e387c, Func Offset: 0x27c
	// Line 561, Address: 0x2e3890, Func Offset: 0x290
	// Line 562, Address: 0x2e3894, Func Offset: 0x294
	// Line 564, Address: 0x2e38b0, Func Offset: 0x2b0
	// Line 566, Address: 0x2e38c4, Func Offset: 0x2c4
	// Line 570, Address: 0x2e38cc, Func Offset: 0x2cc
	// Line 571, Address: 0x2e38e4, Func Offset: 0x2e4
	// Func End, Address: 0x2e3910, Func Offset: 0x310
}

// 
// Start address: 0x2e3910
void DropLiquidPtcl_Draw(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	DropLiquidPtcl* PtclAry;
	int PtclNo;
	DropLiquidCmnData* pCmnDt;
	float Wld2ScrMat[4][4];
	_anon2* pPkTop;
	_anon2* pPk;
	_anon2* pGifTag;
	unsigned long Tex0;
	unsigned long AlphaReg;
	_anon1* pTex;
	unsigned int cbp;
	DropLiquidPtcl* pPtcl;
	float ScrPos[4];
	float inv_w;
	int qwc;
	// Line 582, Address: 0x2e3910, Func Offset: 0
	// Line 583, Address: 0x2e3920, Func Offset: 0x10
	// Line 582, Address: 0x2e3924, Func Offset: 0x14
	// Line 593, Address: 0x2e3930, Func Offset: 0x20
	// Line 582, Address: 0x2e3934, Func Offset: 0x24
	// Line 585, Address: 0x2e3944, Func Offset: 0x34
	// Line 582, Address: 0x2e3948, Func Offset: 0x38
	// Line 593, Address: 0x2e394c, Func Offset: 0x3c
	// Line 600, Address: 0x2e3954, Func Offset: 0x44
	// Line 602, Address: 0x2e3960, Func Offset: 0x50
	// Line 600, Address: 0x2e3964, Func Offset: 0x54
	// Line 602, Address: 0x2e3968, Func Offset: 0x58
	// Line 603, Address: 0x2e3970, Func Offset: 0x60
	// Line 609, Address: 0x2e3990, Func Offset: 0x80
	// Line 607, Address: 0x2e3994, Func Offset: 0x84
	// Line 609, Address: 0x2e39a0, Func Offset: 0x90
	// Line 610, Address: 0x2e39ac, Func Offset: 0x9c
	// Line 609, Address: 0x2e39b0, Func Offset: 0xa0
	// Line 610, Address: 0x2e39bc, Func Offset: 0xac
	// Line 615, Address: 0x2e39c8, Func Offset: 0xb8
	// Line 610, Address: 0x2e39cc, Func Offset: 0xbc
	// Line 615, Address: 0x2e39d0, Func Offset: 0xc0
	// Line 614, Address: 0x2e39d4, Func Offset: 0xc4
	// Line 615, Address: 0x2e39d8, Func Offset: 0xc8
	// Line 621, Address: 0x2e39dc, Func Offset: 0xcc
	// Line 615, Address: 0x2e39e0, Func Offset: 0xd0
	// Line 623, Address: 0x2e39e4, Func Offset: 0xd4
	// Line 615, Address: 0x2e39e8, Func Offset: 0xd8
	// Line 620, Address: 0x2e39ec, Func Offset: 0xdc
	// Line 615, Address: 0x2e39f0, Func Offset: 0xe0
	// Line 623, Address: 0x2e39f4, Func Offset: 0xe4
	// Line 625, Address: 0x2e3a00, Func Offset: 0xf0
	// Line 629, Address: 0x2e3a08, Func Offset: 0xf8
	// Line 632, Address: 0x2e3a1c, Func Offset: 0x10c
	// Line 634, Address: 0x2e3a34, Func Offset: 0x124
	// Line 635, Address: 0x2e3a60, Func Offset: 0x150
	// Line 638, Address: 0x2e3a80, Func Offset: 0x170
	// Line 639, Address: 0x2e3a8c, Func Offset: 0x17c
	// Line 638, Address: 0x2e3a94, Func Offset: 0x184
	// Line 639, Address: 0x2e3a98, Func Offset: 0x188
	// Line 641, Address: 0x2e3ab4, Func Offset: 0x1a4
	// Line 648, Address: 0x2e3afc, Func Offset: 0x1ec
	// Line 650, Address: 0x2e3b08, Func Offset: 0x1f8
	// Line 652, Address: 0x2e3b30, Func Offset: 0x220
	// Line 654, Address: 0x2e3b44, Func Offset: 0x234
	// Line 655, Address: 0x2e3b5c, Func Offset: 0x24c
	// Line 658, Address: 0x2e3b78, Func Offset: 0x268
	// Line 655, Address: 0x2e3b7c, Func Offset: 0x26c
	// Line 658, Address: 0x2e3b88, Func Offset: 0x278
	// Line 655, Address: 0x2e3b8c, Func Offset: 0x27c
	// Line 658, Address: 0x2e3b9c, Func Offset: 0x28c
	// Line 659, Address: 0x2e3bac, Func Offset: 0x29c
	// Line 660, Address: 0x2e3bb4, Func Offset: 0x2a4
	// Line 661, Address: 0x2e3bbc, Func Offset: 0x2ac
	// Line 662, Address: 0x2e3bcc, Func Offset: 0x2bc
	// Line 663, Address: 0x2e3bd0, Func Offset: 0x2c0
	// Line 665, Address: 0x2e3be0, Func Offset: 0x2d0
	// Func End, Address: 0x2e3c10, Func Offset: 0x300
}

// 
// Start address: 0x2e3c10
float make_alpha_rate(float ScrPosW)
{
	float AlphaRate;
	// Line 675, Address: 0x2e3c10, Func Offset: 0
	// Line 676, Address: 0x2e3c34, Func Offset: 0x24
	// Line 678, Address: 0x2e3c50, Func Offset: 0x40
	// Func End, Address: 0x2e3c58, Func Offset: 0x48
}

// 
// Start address: 0x2e3c60
_anon2* Make_DropLiquid_Packet(_anon2* pPk, DropLiquidPtcl* pPtcl, DropLiquidCmnData* pCmnDt, float Wld2ScrMat[4])
{
	_anon2* pSavePk;
	int PosNo;
	float LineLenRate;
	float FrontLineWidth;
	int AfterLineWidth;
	float TexS0;
	int VtNo;
	float Pos[4];
	float ScrPos[4];
	float inv_w;
	float AlphaRate;
	float Vec[4];
	int fog_val;
	// Line 690, Address: 0x2e3c60, Func Offset: 0
	// Line 699, Address: 0x2e3c64, Func Offset: 0x4
	// Line 690, Address: 0x2e3c68, Func Offset: 0x8
	// Line 699, Address: 0x2e3ca4, Func Offset: 0x44
	// Line 702, Address: 0x2e3cc0, Func Offset: 0x60
	// Line 703, Address: 0x2e3cc4, Func Offset: 0x64
	// Line 702, Address: 0x2e3ccc, Func Offset: 0x6c
	// Line 704, Address: 0x2e3cd0, Func Offset: 0x70
	// Line 706, Address: 0x2e3cd8, Func Offset: 0x78
	// Line 707, Address: 0x2e3cdc, Func Offset: 0x7c
	// Line 706, Address: 0x2e3ce0, Func Offset: 0x80
	// Line 707, Address: 0x2e3ce8, Func Offset: 0x88
	// Line 710, Address: 0x2e3cf0, Func Offset: 0x90
	// Line 711, Address: 0x2e3d08, Func Offset: 0xa8
	// Line 712, Address: 0x2e3d0c, Func Offset: 0xac
	// Line 711, Address: 0x2e3d10, Func Offset: 0xb0
	// Line 712, Address: 0x2e3d18, Func Offset: 0xb8
	// Line 711, Address: 0x2e3d20, Func Offset: 0xc0
	// Line 712, Address: 0x2e3d24, Func Offset: 0xc4
	// Line 718, Address: 0x2e3d30, Func Offset: 0xd0
	// Line 721, Address: 0x2e3d40, Func Offset: 0xe0
	// Line 722, Address: 0x2e3d4c, Func Offset: 0xec
	// Line 723, Address: 0x2e3d54, Func Offset: 0xf4
	// Line 724, Address: 0x2e3d58, Func Offset: 0xf8
	// Line 726, Address: 0x2e3d64, Func Offset: 0x104
	// Line 731, Address: 0x2e3d68, Func Offset: 0x108
	// Line 739, Address: 0x2e3d70, Func Offset: 0x110
	// Line 741, Address: 0x2e3d78, Func Offset: 0x118
	// Line 743, Address: 0x2e3d80, Func Offset: 0x120
	// Line 746, Address: 0x2e3d98, Func Offset: 0x138
	// Line 747, Address: 0x2e3dcc, Func Offset: 0x16c
	// Line 748, Address: 0x2e3de4, Func Offset: 0x184
	// Line 750, Address: 0x2e3df0, Func Offset: 0x190
	// Line 751, Address: 0x2e3e20, Func Offset: 0x1c0
	// Line 752, Address: 0x2e3e34, Func Offset: 0x1d4
	// Line 754, Address: 0x2e3e3c, Func Offset: 0x1dc
	// Line 756, Address: 0x2e3e40, Func Offset: 0x1e0
	// Line 757, Address: 0x2e3e70, Func Offset: 0x210
	// Line 758, Address: 0x2e3e8c, Func Offset: 0x22c
	// Line 759, Address: 0x2e3e94, Func Offset: 0x234
	// Line 760, Address: 0x2e3e98, Func Offset: 0x238
	// Line 761, Address: 0x2e3ea0, Func Offset: 0x240
	// Line 762, Address: 0x2e3eac, Func Offset: 0x24c
	// Line 761, Address: 0x2e3eb4, Func Offset: 0x254
	// Line 762, Address: 0x2e3eb8, Func Offset: 0x258
	// Line 764, Address: 0x2e3ed4, Func Offset: 0x274
	// Line 767, Address: 0x2e3f20, Func Offset: 0x2c0
	// Line 770, Address: 0x2e3f28, Func Offset: 0x2c8
	// Line 775, Address: 0x2e3f60, Func Offset: 0x300
	// Line 777, Address: 0x2e3f68, Func Offset: 0x308
	// Line 778, Address: 0x2e3f70, Func Offset: 0x310
	// Line 779, Address: 0x2e3f74, Func Offset: 0x314
	// Line 780, Address: 0x2e3f78, Func Offset: 0x318
	// Line 784, Address: 0x2e3f7c, Func Offset: 0x31c
	// Line 781, Address: 0x2e3f80, Func Offset: 0x320
	// Line 784, Address: 0x2e3f84, Func Offset: 0x324
	// Line 785, Address: 0x2e3f88, Func Offset: 0x328
	// Line 786, Address: 0x2e3f90, Func Offset: 0x330
	// Line 787, Address: 0x2e3f98, Func Offset: 0x338
	// Line 791, Address: 0x2e4004, Func Offset: 0x3a4
	// Line 792, Address: 0x2e400c, Func Offset: 0x3ac
	// Line 793, Address: 0x2e4014, Func Offset: 0x3b4
	// Line 794, Address: 0x2e401c, Func Offset: 0x3bc
	// Line 795, Address: 0x2e4028, Func Offset: 0x3c8
	// Line 797, Address: 0x2e4034, Func Offset: 0x3d4
	// Line 798, Address: 0x2e4038, Func Offset: 0x3d8
	// Line 799, Address: 0x2e4040, Func Offset: 0x3e0
	// Line 801, Address: 0x2e4048, Func Offset: 0x3e8
	// Line 802, Address: 0x2e4050, Func Offset: 0x3f0
	// Line 803, Address: 0x2e4054, Func Offset: 0x3f4
	// Line 804, Address: 0x2e4058, Func Offset: 0x3f8
	// Line 805, Address: 0x2e405c, Func Offset: 0x3fc
	// Line 806, Address: 0x2e406c, Func Offset: 0x40c
	// Line 807, Address: 0x2e407c, Func Offset: 0x41c
	// Line 808, Address: 0x2e4080, Func Offset: 0x420
	// Func End, Address: 0x2e40b4, Func Offset: 0x454
}

// 
// Start address: 0x2e40c0
_anon2* Make_RippleLiquidOnFloor_Packet(_anon2* pPk, DropLiquidPtcl* pPtcl, DropLiquidCmnData* pCmnDt, float Wld2ScrMat[4])
{
	_anon2* pSavePk;
	float CenterPos[4];
	float RippleSize;
	float TimeAlphaRate;
	int VtNo;
	float RRate;
	float inv_w;
	float AddX;
	float AddZ;
	float AddS;
	float AddT;
	int fog_val;
	float Pos[4];
	float ScrPos[4];
	// Line 820, Address: 0x2e40c0, Func Offset: 0
	// Line 828, Address: 0x2e40c4, Func Offset: 0x4
	// Line 820, Address: 0x2e40c8, Func Offset: 0x8
	// Line 828, Address: 0x2e40cc, Func Offset: 0xc
	// Line 820, Address: 0x2e40d0, Func Offset: 0x10
	// Line 832, Address: 0x2e40d8, Func Offset: 0x18
	// Line 820, Address: 0x2e40dc, Func Offset: 0x1c
	// Line 832, Address: 0x2e40e0, Func Offset: 0x20
	// Line 820, Address: 0x2e40e4, Func Offset: 0x24
	// Line 832, Address: 0x2e40e8, Func Offset: 0x28
	// Line 820, Address: 0x2e40ec, Func Offset: 0x2c
	// Line 828, Address: 0x2e40f4, Func Offset: 0x34
	// Line 829, Address: 0x2e40fc, Func Offset: 0x3c
	// Line 832, Address: 0x2e4100, Func Offset: 0x40
	// Line 828, Address: 0x2e4108, Func Offset: 0x48
	// Line 829, Address: 0x2e4110, Func Offset: 0x50
	// Line 832, Address: 0x2e4114, Func Offset: 0x54
	// Line 833, Address: 0x2e411c, Func Offset: 0x5c
	// Line 834, Address: 0x2e4130, Func Offset: 0x70
	// Line 836, Address: 0x2e4150, Func Offset: 0x90
	// Line 841, Address: 0x2e4158, Func Offset: 0x98
	// Line 836, Address: 0x2e415c, Func Offset: 0x9c
	// Line 841, Address: 0x2e4160, Func Offset: 0xa0
	// Line 836, Address: 0x2e4164, Func Offset: 0xa4
	// Line 841, Address: 0x2e4168, Func Offset: 0xa8
	// Line 836, Address: 0x2e416c, Func Offset: 0xac
	// Line 841, Address: 0x2e4170, Func Offset: 0xb0
	// Line 836, Address: 0x2e4174, Func Offset: 0xb4
	// Line 841, Address: 0x2e4178, Func Offset: 0xb8
	// Line 836, Address: 0x2e417c, Func Offset: 0xbc
	// Line 841, Address: 0x2e4180, Func Offset: 0xc0
	// Line 836, Address: 0x2e4184, Func Offset: 0xc4
	// Line 841, Address: 0x2e4188, Func Offset: 0xc8
	// Line 836, Address: 0x2e418c, Func Offset: 0xcc
	// Line 841, Address: 0x2e4190, Func Offset: 0xd0
	// Line 836, Address: 0x2e4194, Func Offset: 0xd4
	// Line 841, Address: 0x2e4198, Func Offset: 0xd8
	// Line 836, Address: 0x2e419c, Func Offset: 0xdc
	// Line 841, Address: 0x2e41a0, Func Offset: 0xe0
	// Line 836, Address: 0x2e41c4, Func Offset: 0x104
	// Line 841, Address: 0x2e41c8, Func Offset: 0x108
	// Line 836, Address: 0x2e41d0, Func Offset: 0x110
	// Line 837, Address: 0x2e41e0, Func Offset: 0x120
	// Line 841, Address: 0x2e41e8, Func Offset: 0x128
	// Line 837, Address: 0x2e41f8, Func Offset: 0x138
	// Line 838, Address: 0x2e4208, Func Offset: 0x148
	// Line 841, Address: 0x2e420c, Func Offset: 0x14c
	// Line 851, Address: 0x2e4220, Func Offset: 0x160
	// Line 852, Address: 0x2e4224, Func Offset: 0x164
	// Line 855, Address: 0x2e423c, Func Offset: 0x17c
	// Line 856, Address: 0x2e4240, Func Offset: 0x180
	// Line 857, Address: 0x2e424c, Func Offset: 0x18c
	// Line 858, Address: 0x2e4250, Func Offset: 0x190
	// Line 860, Address: 0x2e4258, Func Offset: 0x198
	// Line 861, Address: 0x2e4260, Func Offset: 0x1a0
	// Line 862, Address: 0x2e4264, Func Offset: 0x1a4
	// Line 863, Address: 0x2e426c, Func Offset: 0x1ac
	// Line 864, Address: 0x2e4270, Func Offset: 0x1b0
	// Line 865, Address: 0x2e4278, Func Offset: 0x1b8
	// Line 866, Address: 0x2e427c, Func Offset: 0x1bc
	// Line 867, Address: 0x2e4284, Func Offset: 0x1c4
	// Line 868, Address: 0x2e4288, Func Offset: 0x1c8
	// Line 869, Address: 0x2e428c, Func Offset: 0x1cc
	// Line 868, Address: 0x2e4294, Func Offset: 0x1d4
	// Line 872, Address: 0x2e4298, Func Offset: 0x1d8
	// Line 873, Address: 0x2e42b0, Func Offset: 0x1f0
	// Line 875, Address: 0x2e42d8, Func Offset: 0x218
	// Line 876, Address: 0x2e42e8, Func Offset: 0x228
	// Line 882, Address: 0x2e42f0, Func Offset: 0x230
	// Line 883, Address: 0x2e42f8, Func Offset: 0x238
	// Line 884, Address: 0x2e4314, Func Offset: 0x254
	// Line 887, Address: 0x2e4350, Func Offset: 0x290
	// Line 892, Address: 0x2e4358, Func Offset: 0x298
	// Line 893, Address: 0x2e4360, Func Offset: 0x2a0
	// Line 894, Address: 0x2e4368, Func Offset: 0x2a8
	// Line 898, Address: 0x2e436c, Func Offset: 0x2ac
	// Line 895, Address: 0x2e4370, Func Offset: 0x2b0
	// Line 898, Address: 0x2e4374, Func Offset: 0x2b4
	// Line 899, Address: 0x2e4378, Func Offset: 0x2b8
	// Line 900, Address: 0x2e4380, Func Offset: 0x2c0
	// Line 901, Address: 0x2e4388, Func Offset: 0x2c8
	// Line 902, Address: 0x2e43f4, Func Offset: 0x334
	// Line 904, Address: 0x2e43f8, Func Offset: 0x338
	// Line 905, Address: 0x2e4404, Func Offset: 0x344
	// Line 906, Address: 0x2e4418, Func Offset: 0x358
	// Line 907, Address: 0x2e4420, Func Offset: 0x360
	// Line 908, Address: 0x2e4424, Func Offset: 0x364
	// Line 910, Address: 0x2e4434, Func Offset: 0x374
	// Line 911, Address: 0x2e4438, Func Offset: 0x378
	// Func End, Address: 0x2e445c, Func Offset: 0x39c
}

