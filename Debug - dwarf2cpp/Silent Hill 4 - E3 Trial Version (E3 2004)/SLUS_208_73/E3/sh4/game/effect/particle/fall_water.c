typedef struct PtclOrgData;
typedef union _anon0;
typedef struct FallWaterPtcl;
typedef struct _anon1;
typedef struct FallWaterCmnData;
typedef struct sfObj;
typedef enum GameItem : unsigned char;
typedef union _anon2;
typedef struct _anon3;
typedef enum _cam3Step : unsigned char;
typedef struct _cam3Work;
typedef enum PlayerExtStatus : unsigned char;

typedef void(*type_2)(void*, int, PtclOrgData*, void*);
typedef void(*type_19)(sfObj*);
typedef void(*type_21)();
typedef void(*type_23)(sfObj*);
typedef void(*type_32)(void*, PtclOrgData*, void*);
typedef int(*type_33)(void*, int, PtclOrgData*, void*);
typedef void(*type_34)(sfObj*);
typedef void(*type_37)(void*, int, PtclOrgData*, void*);

typedef int type_0[4];
typedef unsigned int type_1[4];
typedef void* type_3[4];
typedef short type_4[8];
typedef unsigned short type_5[8];
typedef char type_6[16];
typedef unsigned char type_7[16];
typedef float type_8[4];
typedef float type_9[1];
typedef int type_10[1];
typedef float type_11[4][4];
typedef long type_12[1];
typedef float type_13[4];
typedef float type_14[4][4];
typedef float type_15[4];
typedef _anon1 type_16[2];
typedef int type_17[4];
typedef _anon2 type_18[256];
typedef float type_20[4][4];
typedef void(*type_22)()[2];
typedef short type_24[2];
typedef unsigned short type_25[2];
typedef float type_26[4];
typedef char type_27[4];
typedef unsigned char type_28[4];
typedef float type_29[4][4];
typedef float type_30[1];
typedef int type_31[1];
typedef void(*type_35)(sfObj*)[3];
typedef long type_36[2];
typedef unsigned long type_38[2];

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

union _anon0
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

struct FallWaterPtcl
{
	float Pos[4];
	float Spd[4];
	float AfterPos[4];
	float AfterSpd[4];
	float Width;
	float WidthSpdVal;
	float Timer;
	int RandVal_1;
	int RandVal_2;
	float SplashTimer;
};

struct _anon1
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

struct FallWaterCmnData
{
	float FloorY;
};

struct sfObj
{
	_anon2 fwork[256];
	_anon2* work;
	void(*func)(sfObj*);
	_anon2* work_pt0;
	_anon2* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon2* sys_work;
	_anon2* scene_work;
	_anon2* event_work;
	_anon2* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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

union _anon2
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

struct _anon3
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

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
_anon1 player_ext_info[2];
float sg_vector_zero[4];
float OrgPosAry[4][4];
float WaterSpdAry[4][4];
float sg_vector_unit_y[4];
float sg_vector_unit_z[4];
float sg_vector_unit_x[4];
void(*FallWaterPtcl_Draw)(void*, int, PtclOrgData*, void*);
void(*FallWaterPtcl_Calc)(void*, int, PtclOrgData*, void*);
int(*FallWaterPtcl_KillCheck)(void*, int, PtclOrgData*, void*);
void(*Generate_OneFallWaterPtcl)(void*, PtclOrgData*, void*);
_cam3Work cam3_work;

void FallWaterParticle_WalkSplash(float* OrgPos, float WalkSpd, float ManAngY, float FootLen);
void FallWaterParticle_SuimonOpen4_Demo();
void FallWaterParticle_SuimonOpen4();
void FallWaterParticle_SuimonOpen(float* OrgPos, float* WaterSpd, float WaterWidth, float WaterHeight, float FloorY, int ForDemoFlag);
void FallWaterParticle_PipeOpen(float* OrgPos, float Diameter, float FloorY);
void FallWaterParticle_Make(PtclOrgData* pOrgDt, float FloorY);
void Generate_OneFallWaterPtcl(void* PtclAdr, PtclOrgData* pOrgDt);
int FallWaterPtcl_KillCheck();
void FallWaterPtcl_Calc(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn);
void FallWaterPtcl_Draw(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn);
_anon0* Make_FallWater_Packet(_anon0* pPk, FallWaterPtcl* pPtcl, float Wld2ViewMat[4], float View2ScrMat[4]);
_anon0* Make_SplashWaterOnFloor_Packet(_anon0* pPk, FallWaterPtcl* pPtcl, float Wld2ScrMat[4], float FloorY);

// 
// Start address: 0x2dfc60
void FallWaterParticle_WalkSplash(float* OrgPos, float WalkSpd, float ManAngY, float FootLen)
{
	PtclOrgData OrgDt;
	// Line 186, Address: 0x2dfc60, Func Offset: 0
	// Line 189, Address: 0x2dfc68, Func Offset: 0x8
	// Line 186, Address: 0x2dfc6c, Func Offset: 0xc
	// Line 189, Address: 0x2dfc90, Func Offset: 0x30
	// Line 190, Address: 0x2dfc98, Func Offset: 0x38
	// Line 191, Address: 0x2dfcb8, Func Offset: 0x58
	// Line 190, Address: 0x2dfcbc, Func Offset: 0x5c
	// Line 191, Address: 0x2dfcc0, Func Offset: 0x60
	// Line 193, Address: 0x2dfcdc, Func Offset: 0x7c
	// Line 191, Address: 0x2dfce4, Func Offset: 0x84
	// Line 193, Address: 0x2dfce8, Func Offset: 0x88
	// Line 194, Address: 0x2dfcf4, Func Offset: 0x94
	// Line 195, Address: 0x2dfcf8, Func Offset: 0x98
	// Line 196, Address: 0x2dfd08, Func Offset: 0xa8
	// Line 198, Address: 0x2dfd10, Func Offset: 0xb0
	// Line 195, Address: 0x2dfd1c, Func Offset: 0xbc
	// Line 198, Address: 0x2dfd20, Func Offset: 0xc0
	// Line 201, Address: 0x2dfd28, Func Offset: 0xc8
	// Line 200, Address: 0x2dfd2c, Func Offset: 0xcc
	// Line 201, Address: 0x2dfd40, Func Offset: 0xe0
	// Line 202, Address: 0x2dfd48, Func Offset: 0xe8
	// Line 203, Address: 0x2dfd4c, Func Offset: 0xec
	// Line 202, Address: 0x2dfd50, Func Offset: 0xf0
	// Line 203, Address: 0x2dfd54, Func Offset: 0xf4
	// Line 205, Address: 0x2dfd5c, Func Offset: 0xfc
	// Line 210, Address: 0x2dfd60, Func Offset: 0x100
	// Line 205, Address: 0x2dfd64, Func Offset: 0x104
	// Line 203, Address: 0x2dfd68, Func Offset: 0x108
	// Line 206, Address: 0x2dfd6c, Func Offset: 0x10c
	// Line 210, Address: 0x2dfd70, Func Offset: 0x110
	// Line 206, Address: 0x2dfd78, Func Offset: 0x118
	// Line 209, Address: 0x2dfd80, Func Offset: 0x120
	// Line 204, Address: 0x2dfd88, Func Offset: 0x128
	// Line 209, Address: 0x2dfd8c, Func Offset: 0x12c
	// Line 207, Address: 0x2dfd90, Func Offset: 0x130
	// Line 209, Address: 0x2dfd94, Func Offset: 0x134
	// Line 210, Address: 0x2dfd98, Func Offset: 0x138
	// Line 211, Address: 0x2dfd9c, Func Offset: 0x13c
	// Line 214, Address: 0x2dfda4, Func Offset: 0x144
	// Line 210, Address: 0x2dfdac, Func Offset: 0x14c
	// Line 211, Address: 0x2dfdb0, Func Offset: 0x150
	// Line 214, Address: 0x2dfdb4, Func Offset: 0x154
	// Line 211, Address: 0x2dfdb8, Func Offset: 0x158
	// Line 215, Address: 0x2dfdbc, Func Offset: 0x15c
	// Line 211, Address: 0x2dfdc0, Func Offset: 0x160
	// Line 216, Address: 0x2dfdc4, Func Offset: 0x164
	// Line 211, Address: 0x2dfdc8, Func Offset: 0x168
	// Line 217, Address: 0x2dfdcc, Func Offset: 0x16c
	// Line 218, Address: 0x2dfdd8, Func Offset: 0x178
	// Func End, Address: 0x2dfdf8, Func Offset: 0x198
}

// 
// Start address: 0x2dfe00
void FallWaterParticle_SuimonOpen4_Demo()
{
	int No;
	// Line 239, Address: 0x2dfe00, Func Offset: 0
	// Line 241, Address: 0x2dfe10, Func Offset: 0x10
	// Line 239, Address: 0x2dfe14, Func Offset: 0x14
	// Line 241, Address: 0x2dfe18, Func Offset: 0x18
	// Line 242, Address: 0x2dfe28, Func Offset: 0x28
	// Line 250, Address: 0x2dfe58, Func Offset: 0x58
	// Line 242, Address: 0x2dfe5c, Func Offset: 0x5c
	// Line 250, Address: 0x2dfe60, Func Offset: 0x60
	// Line 251, Address: 0x2dfe6c, Func Offset: 0x6c
	// Func End, Address: 0x2dfe84, Func Offset: 0x84
}

// 
// Start address: 0x2dfe90
void FallWaterParticle_SuimonOpen4()
{
	int No;
	// Line 256, Address: 0x2dfe90, Func Offset: 0
	// Line 259, Address: 0x2dfea0, Func Offset: 0x10
	// Line 256, Address: 0x2dfea4, Func Offset: 0x14
	// Line 259, Address: 0x2dfea8, Func Offset: 0x18
	// Line 260, Address: 0x2dfeb8, Func Offset: 0x28
	// Line 268, Address: 0x2dfee8, Func Offset: 0x58
	// Line 260, Address: 0x2dfeec, Func Offset: 0x5c
	// Line 268, Address: 0x2dfef0, Func Offset: 0x60
	// Line 269, Address: 0x2dfefc, Func Offset: 0x6c
	// Func End, Address: 0x2dff14, Func Offset: 0x84
}

// 
// Start address: 0x2dff20
void FallWaterParticle_SuimonOpen(float* OrgPos, float* WaterSpd, float WaterWidth, float WaterHeight, float FloorY, int ForDemoFlag)
{
	PtclOrgData OrgDt;
	float RandomWidth;
	float WidthVec[4];
	// Line 283, Address: 0x2dff20, Func Offset: 0
	// Line 294, Address: 0x2dff28, Func Offset: 0x8
	// Line 291, Address: 0x2dff2c, Func Offset: 0xc
	// Line 292, Address: 0x2dff34, Func Offset: 0x14
	// Line 293, Address: 0x2dff38, Func Offset: 0x18
	// Line 294, Address: 0x2dff44, Func Offset: 0x24
	// Line 295, Address: 0x2dff68, Func Offset: 0x48
	// Line 296, Address: 0x2dff8c, Func Offset: 0x6c
	// Line 297, Address: 0x2dffb4, Func Offset: 0x94
	// Line 304, Address: 0x2dffbc, Func Offset: 0x9c
	// Line 298, Address: 0x2dffc0, Func Offset: 0xa0
	// Line 297, Address: 0x2dffc4, Func Offset: 0xa4
	// Line 300, Address: 0x2dffc8, Func Offset: 0xa8
	// Line 298, Address: 0x2dffcc, Func Offset: 0xac
	// Line 297, Address: 0x2dffd0, Func Offset: 0xb0
	// Line 299, Address: 0x2dffd4, Func Offset: 0xb4
	// Line 298, Address: 0x2dffe0, Func Offset: 0xc0
	// Line 303, Address: 0x2dffe4, Func Offset: 0xc4
	// Line 297, Address: 0x2dffec, Func Offset: 0xcc
	// Line 299, Address: 0x2dfff4, Func Offset: 0xd4
	// Line 297, Address: 0x2dfff8, Func Offset: 0xd8
	// Line 298, Address: 0x2dfffc, Func Offset: 0xdc
	// Line 303, Address: 0x2e0000, Func Offset: 0xe0
	// Line 300, Address: 0x2e0004, Func Offset: 0xe4
	// Line 303, Address: 0x2e000c, Func Offset: 0xec
	// Line 298, Address: 0x2e0010, Func Offset: 0xf0
	// Line 299, Address: 0x2e0018, Func Offset: 0xf8
	// Line 300, Address: 0x2e0020, Func Offset: 0x100
	// Line 303, Address: 0x2e0024, Func Offset: 0x104
	// Line 299, Address: 0x2e0028, Func Offset: 0x108
	// Line 304, Address: 0x2e002c, Func Offset: 0x10c
	// Line 305, Address: 0x2e0034, Func Offset: 0x114
	// Line 306, Address: 0x2e003c, Func Offset: 0x11c
	// Line 309, Address: 0x2e0048, Func Offset: 0x128
	// Line 306, Address: 0x2e0050, Func Offset: 0x130
	// Line 309, Address: 0x2e0054, Func Offset: 0x134
	// Line 307, Address: 0x2e0058, Func Offset: 0x138
	// Line 309, Address: 0x2e0060, Func Offset: 0x140
	// Line 307, Address: 0x2e0064, Func Offset: 0x144
	// Line 310, Address: 0x2e0068, Func Offset: 0x148
	// Line 313, Address: 0x2e0088, Func Offset: 0x168
	// Line 315, Address: 0x2e0090, Func Offset: 0x170
	// Line 310, Address: 0x2e0094, Func Offset: 0x174
	// Line 311, Address: 0x2e0098, Func Offset: 0x178
	// Line 313, Address: 0x2e00a0, Func Offset: 0x180
	// Line 311, Address: 0x2e00a4, Func Offset: 0x184
	// Line 316, Address: 0x2e00a8, Func Offset: 0x188
	// Line 311, Address: 0x2e00ac, Func Offset: 0x18c
	// Line 314, Address: 0x2e00b0, Func Offset: 0x190
	// Line 316, Address: 0x2e00b8, Func Offset: 0x198
	// Line 314, Address: 0x2e00bc, Func Offset: 0x19c
	// Line 311, Address: 0x2e00c0, Func Offset: 0x1a0
	// Line 316, Address: 0x2e00c4, Func Offset: 0x1a4
	// Line 317, Address: 0x2e00cc, Func Offset: 0x1ac
	// Func End, Address: 0x2e00d8, Func Offset: 0x1b8
}

// 
// Start address: 0x2e00e0
void FallWaterParticle_PipeOpen(float* OrgPos, float Diameter, float FloorY)
{
	PtclOrgData OrgDt;
	float RandomWidth;
	// Line 331, Address: 0x2e00e0, Func Offset: 0
	// Line 329, Address: 0x2e00e4, Func Offset: 0x4
	// Line 331, Address: 0x2e00e8, Func Offset: 0x8
	// Line 329, Address: 0x2e00ec, Func Offset: 0xc
	// Line 331, Address: 0x2e00f0, Func Offset: 0x10
	// Line 333, Address: 0x2e00f4, Func Offset: 0x14
	// Line 329, Address: 0x2e00f8, Func Offset: 0x18
	// Line 337, Address: 0x2e00fc, Func Offset: 0x1c
	// Line 331, Address: 0x2e0100, Func Offset: 0x20
	// Line 336, Address: 0x2e0104, Func Offset: 0x24
	// Line 333, Address: 0x2e0108, Func Offset: 0x28
	// Line 337, Address: 0x2e0114, Func Offset: 0x34
	// Line 333, Address: 0x2e011c, Func Offset: 0x3c
	// Line 334, Address: 0x2e0124, Func Offset: 0x44
	// Line 335, Address: 0x2e0130, Func Offset: 0x50
	// Line 336, Address: 0x2e0138, Func Offset: 0x58
	// Line 335, Address: 0x2e013c, Func Offset: 0x5c
	// Line 337, Address: 0x2e0140, Func Offset: 0x60
	// Line 338, Address: 0x2e0158, Func Offset: 0x78
	// Line 340, Address: 0x2e017c, Func Offset: 0x9c
	// Line 341, Address: 0x2e0180, Func Offset: 0xa0
	// Line 344, Address: 0x2e0184, Func Offset: 0xa4
	// Line 341, Address: 0x2e0188, Func Offset: 0xa8
	// Line 345, Address: 0x2e018c, Func Offset: 0xac
	// Line 340, Address: 0x2e0190, Func Offset: 0xb0
	// Line 353, Address: 0x2e0194, Func Offset: 0xb4
	// Line 340, Address: 0x2e0198, Func Offset: 0xb8
	// Line 341, Address: 0x2e019c, Func Offset: 0xbc
	// Line 340, Address: 0x2e01a8, Func Offset: 0xc8
	// Line 348, Address: 0x2e01ac, Func Offset: 0xcc
	// Line 343, Address: 0x2e01b0, Func Offset: 0xd0
	// Line 347, Address: 0x2e01b8, Func Offset: 0xd8
	// Line 341, Address: 0x2e01c0, Func Offset: 0xe0
	// Line 349, Address: 0x2e01c4, Func Offset: 0xe4
	// Line 341, Address: 0x2e01c8, Func Offset: 0xe8
	// Line 340, Address: 0x2e01d0, Func Offset: 0xf0
	// Line 341, Address: 0x2e01d4, Func Offset: 0xf4
	// Line 344, Address: 0x2e01d8, Func Offset: 0xf8
	// Line 341, Address: 0x2e01dc, Func Offset: 0xfc
	// Line 344, Address: 0x2e01e4, Func Offset: 0x104
	// Line 347, Address: 0x2e01e8, Func Offset: 0x108
	// Line 341, Address: 0x2e01f0, Func Offset: 0x110
	// Line 345, Address: 0x2e01f4, Func Offset: 0x114
	// Line 355, Address: 0x2e01f8, Func Offset: 0x118
	// Line 347, Address: 0x2e01fc, Func Offset: 0x11c
	// Line 349, Address: 0x2e0200, Func Offset: 0x120
	// Line 345, Address: 0x2e0208, Func Offset: 0x128
	// Line 348, Address: 0x2e020c, Func Offset: 0x12c
	// Line 351, Address: 0x2e0210, Func Offset: 0x130
	// Line 348, Address: 0x2e0218, Func Offset: 0x138
	// Line 351, Address: 0x2e021c, Func Offset: 0x13c
	// Line 342, Address: 0x2e0220, Func Offset: 0x140
	// Line 352, Address: 0x2e0224, Func Offset: 0x144
	// Line 349, Address: 0x2e022c, Func Offset: 0x14c
	// Line 352, Address: 0x2e0230, Func Offset: 0x150
	// Line 342, Address: 0x2e0234, Func Offset: 0x154
	// Line 355, Address: 0x2e0238, Func Offset: 0x158
	// Line 356, Address: 0x2e0240, Func Offset: 0x160
	// Line 357, Address: 0x2e024c, Func Offset: 0x16c
	// Line 358, Address: 0x2e0258, Func Offset: 0x178
	// Line 359, Address: 0x2e0264, Func Offset: 0x184
	// Func End, Address: 0x2e0274, Func Offset: 0x194
}

// 
// Start address: 0x2e0280
void FallWaterParticle_Make(PtclOrgData* pOrgDt, float FloorY)
{
	FallWaterCmnData CmnData;
	// Line 369, Address: 0x2e0280, Func Offset: 0
	// Line 372, Address: 0x2e0284, Func Offset: 0x4
	// Line 369, Address: 0x2e0288, Func Offset: 0x8
	// Line 372, Address: 0x2e028c, Func Offset: 0xc
	// Line 371, Address: 0x2e0298, Func Offset: 0x18
	// Line 372, Address: 0x2e029c, Func Offset: 0x1c
	// Line 383, Address: 0x2e02bc, Func Offset: 0x3c
	// Func End, Address: 0x2e02c8, Func Offset: 0x48
}

// 
// Start address: 0x2e02d0
void Generate_OneFallWaterPtcl(void* PtclAdr, PtclOrgData* pOrgDt)
{
	FallWaterPtcl* pPtcl;
	float Vec1Rate;
	float Vec2Rate;
	float Vec[4];
	float SpreadTan;
	// Line 396, Address: 0x2e02d0, Func Offset: 0
	// Line 394, Address: 0x2e02d4, Func Offset: 0x4
	// Line 396, Address: 0x2e02d8, Func Offset: 0x8
	// Line 394, Address: 0x2e02dc, Func Offset: 0xc
	// Line 396, Address: 0x2e02e4, Func Offset: 0x14
	// Line 394, Address: 0x2e02e8, Func Offset: 0x18
	// Line 396, Address: 0x2e02ec, Func Offset: 0x1c
	// Line 395, Address: 0x2e02f8, Func Offset: 0x28
	// Line 394, Address: 0x2e02fc, Func Offset: 0x2c
	// Line 396, Address: 0x2e0300, Func Offset: 0x30
	// Line 397, Address: 0x2e0308, Func Offset: 0x38
	// Line 401, Address: 0x2e0328, Func Offset: 0x58
	// Line 403, Address: 0x2e0338, Func Offset: 0x68
	// Line 404, Address: 0x2e0344, Func Offset: 0x74
	// Line 406, Address: 0x2e034c, Func Offset: 0x7c
	// Line 407, Address: 0x2e0360, Func Offset: 0x90
	// Line 408, Address: 0x2e038c, Func Offset: 0xbc
	// Line 410, Address: 0x2e03a8, Func Offset: 0xd8
	// Line 411, Address: 0x2e03b0, Func Offset: 0xe0
	// Line 412, Address: 0x2e03c8, Func Offset: 0xf8
	// Line 414, Address: 0x2e03f0, Func Offset: 0x120
	// Line 412, Address: 0x2e03f8, Func Offset: 0x128
	// Line 415, Address: 0x2e0400, Func Offset: 0x130
	// Line 416, Address: 0x2e0408, Func Offset: 0x138
	// Line 417, Address: 0x2e0414, Func Offset: 0x144
	// Line 418, Address: 0x2e0418, Func Offset: 0x148
	// Func End, Address: 0x2e0434, Func Offset: 0x164
}

// 
// Start address: 0x2e0440
int FallWaterPtcl_KillCheck()
{
	// Line 436, Address: 0x2e0440, Func Offset: 0
	// Func End, Address: 0x2e0448, Func Offset: 0x8
}

// 
// Start address: 0x2e0450
void FallWaterPtcl_Calc(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	FallWaterPtcl* PtclAry;
	int PtclNo;
	FallWaterCmnData* pCmnData;
	FallWaterPtcl* pPtcl;
	float MvVec[4];
	// Line 449, Address: 0x2e0450, Func Offset: 0
	// Line 450, Address: 0x2e0470, Func Offset: 0x20
	// Line 449, Address: 0x2e0474, Func Offset: 0x24
	// Line 453, Address: 0x2e0478, Func Offset: 0x28
	// Line 449, Address: 0x2e047c, Func Offset: 0x2c
	// Line 453, Address: 0x2e0480, Func Offset: 0x30
	// Line 455, Address: 0x2e0488, Func Offset: 0x38
	// Line 459, Address: 0x2e0490, Func Offset: 0x40
	// Line 455, Address: 0x2e0494, Func Offset: 0x44
	// Line 459, Address: 0x2e0498, Func Offset: 0x48
	// Line 463, Address: 0x2e04ac, Func Offset: 0x5c
	// Line 465, Address: 0x2e04b8, Func Offset: 0x68
	// Line 463, Address: 0x2e04c0, Func Offset: 0x70
	// Line 465, Address: 0x2e04c4, Func Offset: 0x74
	// Line 467, Address: 0x2e04d0, Func Offset: 0x80
	// Line 468, Address: 0x2e0500, Func Offset: 0xb0
	// Line 470, Address: 0x2e0518, Func Offset: 0xc8
	// Line 471, Address: 0x2e0534, Func Offset: 0xe4
	// Line 472, Address: 0x2e0578, Func Offset: 0x128
	// Line 473, Address: 0x2e05a4, Func Offset: 0x154
	// Line 476, Address: 0x2e05bc, Func Offset: 0x16c
	// Line 477, Address: 0x2e05d4, Func Offset: 0x184
	// Line 478, Address: 0x2e05f0, Func Offset: 0x1a0
	// Line 479, Address: 0x2e063c, Func Offset: 0x1ec
	// Line 480, Address: 0x2e0640, Func Offset: 0x1f0
	// Line 481, Address: 0x2e066c, Func Offset: 0x21c
	// Line 483, Address: 0x2e068c, Func Offset: 0x23c
	// Line 485, Address: 0x2e06a0, Func Offset: 0x250
	// Line 486, Address: 0x2e06b4, Func Offset: 0x264
	// Line 488, Address: 0x2e06b8, Func Offset: 0x268
	// Line 490, Address: 0x2e06d8, Func Offset: 0x288
	// Line 493, Address: 0x2e06e0, Func Offset: 0x290
	// Line 494, Address: 0x2e06f4, Func Offset: 0x2a4
	// Func End, Address: 0x2e0718, Func Offset: 0x2c8
}

// 
// Start address: 0x2e0720
void FallWaterPtcl_Draw(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	FallWaterPtcl* PtclAry;
	FallWaterCmnData* pCmnData;
	int PtclNo;
	float Wld2ScrMat[4][4];
	float Wld2ViewMat[4][4];
	float View2ScrMat[4][4];
	_anon0* pPkTop;
	_anon0* pPk;
	_anon0* pGifTag;
	unsigned long Tex0;
	_anon3* pTex;
	unsigned int cbp;
	FallWaterPtcl* pPtcl;
	float ScrPos[4];
	float AfterScrPos[4];
	float inv_w;
	int qwc;
	// Line 506, Address: 0x2e0720, Func Offset: 0
	// Line 508, Address: 0x2e0730, Func Offset: 0x10
	// Line 506, Address: 0x2e0734, Func Offset: 0x14
	// Line 507, Address: 0x2e0738, Func Offset: 0x18
	// Line 506, Address: 0x2e073c, Func Offset: 0x1c
	// Line 518, Address: 0x2e0750, Func Offset: 0x30
	// Line 506, Address: 0x2e0754, Func Offset: 0x34
	// Line 518, Address: 0x2e075c, Func Offset: 0x3c
	// Line 519, Address: 0x2e0764, Func Offset: 0x44
	// Line 520, Address: 0x2e076c, Func Offset: 0x4c
	// Line 521, Address: 0x2e0774, Func Offset: 0x54
	// Line 529, Address: 0x2e077c, Func Offset: 0x5c
	// Line 521, Address: 0x2e0780, Func Offset: 0x60
	// Line 529, Address: 0x2e0790, Func Offset: 0x70
	// Line 531, Address: 0x2e079c, Func Offset: 0x7c
	// Line 529, Address: 0x2e07a0, Func Offset: 0x80
	// Line 531, Address: 0x2e07a4, Func Offset: 0x84
	// Line 532, Address: 0x2e07ac, Func Offset: 0x8c
	// Line 536, Address: 0x2e07c8, Func Offset: 0xa8
	// Line 541, Address: 0x2e07e4, Func Offset: 0xc4
	// Line 536, Address: 0x2e07e8, Func Offset: 0xc8
	// Line 541, Address: 0x2e07ec, Func Offset: 0xcc
	// Line 540, Address: 0x2e07f0, Func Offset: 0xd0
	// Line 541, Address: 0x2e07f4, Func Offset: 0xd4
	// Line 547, Address: 0x2e07f8, Func Offset: 0xd8
	// Line 541, Address: 0x2e07fc, Func Offset: 0xdc
	// Line 549, Address: 0x2e0800, Func Offset: 0xe0
	// Line 541, Address: 0x2e0804, Func Offset: 0xe4
	// Line 546, Address: 0x2e0808, Func Offset: 0xe8
	// Line 541, Address: 0x2e080c, Func Offset: 0xec
	// Line 549, Address: 0x2e0810, Func Offset: 0xf0
	// Line 551, Address: 0x2e0818, Func Offset: 0xf8
	// Line 555, Address: 0x2e0820, Func Offset: 0x100
	// Line 551, Address: 0x2e0824, Func Offset: 0x104
	// Line 555, Address: 0x2e0828, Func Offset: 0x108
	// Line 559, Address: 0x2e083c, Func Offset: 0x11c
	// Line 561, Address: 0x2e0854, Func Offset: 0x134
	// Line 562, Address: 0x2e0880, Func Offset: 0x160
	// Line 563, Address: 0x2e08b4, Func Offset: 0x194
	// Line 566, Address: 0x2e08e0, Func Offset: 0x1c0
	// Line 567, Address: 0x2e08ec, Func Offset: 0x1cc
	// Line 566, Address: 0x2e08f4, Func Offset: 0x1d4
	// Line 567, Address: 0x2e08f8, Func Offset: 0x1d8
	// Line 568, Address: 0x2e0914, Func Offset: 0x1f4
	// Line 569, Address: 0x2e091c, Func Offset: 0x1fc
	// Line 568, Address: 0x2e0920, Func Offset: 0x200
	// Line 569, Address: 0x2e0924, Func Offset: 0x204
	// Line 568, Address: 0x2e0928, Func Offset: 0x208
	// Line 569, Address: 0x2e092c, Func Offset: 0x20c
	// Line 571, Address: 0x2e0948, Func Offset: 0x228
	// Line 580, Address: 0x2e09c8, Func Offset: 0x2a8
	// Line 582, Address: 0x2e09d8, Func Offset: 0x2b8
	// Line 584, Address: 0x2e09f0, Func Offset: 0x2d0
	// Line 587, Address: 0x2e0a08, Func Offset: 0x2e8
	// Line 588, Address: 0x2e0a1c, Func Offset: 0x2fc
	// Line 591, Address: 0x2e0a38, Func Offset: 0x318
	// Line 588, Address: 0x2e0a3c, Func Offset: 0x31c
	// Line 591, Address: 0x2e0a48, Func Offset: 0x328
	// Line 588, Address: 0x2e0a4c, Func Offset: 0x32c
	// Line 591, Address: 0x2e0a5c, Func Offset: 0x33c
	// Line 592, Address: 0x2e0a6c, Func Offset: 0x34c
	// Line 593, Address: 0x2e0a74, Func Offset: 0x354
	// Line 594, Address: 0x2e0a7c, Func Offset: 0x35c
	// Line 595, Address: 0x2e0a8c, Func Offset: 0x36c
	// Line 596, Address: 0x2e0a90, Func Offset: 0x370
	// Line 598, Address: 0x2e0aa0, Func Offset: 0x380
	// Func End, Address: 0x2e0ad0, Func Offset: 0x3b0
}

// 
// Start address: 0x2e0ad0
_anon0* Make_FallWater_Packet(_anon0* pPk, FallWaterPtcl* pPtcl, float Wld2ViewMat[4], float View2ScrMat[4])
{
	_anon0* pSavePk;
	float ViewPos[4];
	float AfterViewPos[4];
	float SideViewVec[4];
	float inv_w;
	int VtNo;
	int STNo;
	int Alpha;
	float Vec[4];
	float ScrPos[4];
	int fog_val;
	float SideVecMul;
	float* ViewPosPtr;
	int rgba[4];
	float STQVec[4][4];
	// Line 612, Address: 0x2e0ad0, Func Offset: 0
	// Line 628, Address: 0x2e0ad8, Func Offset: 0x8
	// Line 612, Address: 0x2e0adc, Func Offset: 0xc
	// Line 619, Address: 0x2e0af4, Func Offset: 0x24
	// Line 612, Address: 0x2e0af8, Func Offset: 0x28
	// Line 628, Address: 0x2e0b00, Func Offset: 0x30
	// Line 629, Address: 0x2e0b28, Func Offset: 0x58
	// Line 633, Address: 0x2e0b58, Func Offset: 0x88
	// Line 634, Address: 0x2e0b5c, Func Offset: 0x8c
	// Line 633, Address: 0x2e0b60, Func Offset: 0x90
	// Line 634, Address: 0x2e0b64, Func Offset: 0x94
	// Line 632, Address: 0x2e0b68, Func Offset: 0x98
	// Line 631, Address: 0x2e0b70, Func Offset: 0xa0
	// Line 632, Address: 0x2e0b78, Func Offset: 0xa8
	// Line 631, Address: 0x2e0b7c, Func Offset: 0xac
	// Line 632, Address: 0x2e0b80, Func Offset: 0xb0
	// Line 631, Address: 0x2e0b84, Func Offset: 0xb4
	// Line 632, Address: 0x2e0b88, Func Offset: 0xb8
	// Line 634, Address: 0x2e0b8c, Func Offset: 0xbc
	// Line 635, Address: 0x2e0bb0, Func Offset: 0xe0
	// Line 638, Address: 0x2e0bd8, Func Offset: 0x108
	// Line 640, Address: 0x2e0be0, Func Offset: 0x110
	// Line 638, Address: 0x2e0bec, Func Offset: 0x11c
	// Line 640, Address: 0x2e0bf0, Func Offset: 0x120
	// Line 638, Address: 0x2e0bf4, Func Offset: 0x124
	// Line 637, Address: 0x2e0bf8, Func Offset: 0x128
	// Line 638, Address: 0x2e0bfc, Func Offset: 0x12c
	// Line 640, Address: 0x2e0c00, Func Offset: 0x130
	// Line 638, Address: 0x2e0c0c, Func Offset: 0x13c
	// Line 640, Address: 0x2e0c10, Func Offset: 0x140
	// Line 638, Address: 0x2e0c14, Func Offset: 0x144
	// Line 640, Address: 0x2e0c18, Func Offset: 0x148
	// Line 638, Address: 0x2e0c24, Func Offset: 0x154
	// Line 640, Address: 0x2e0c28, Func Offset: 0x158
	// Line 637, Address: 0x2e0c2c, Func Offset: 0x15c
	// Line 640, Address: 0x2e0c30, Func Offset: 0x160
	// Line 638, Address: 0x2e0c44, Func Offset: 0x174
	// Line 640, Address: 0x2e0c48, Func Offset: 0x178
	// Line 638, Address: 0x2e0c60, Func Offset: 0x190
	// Line 640, Address: 0x2e0c64, Func Offset: 0x194
	// Line 638, Address: 0x2e0c68, Func Offset: 0x198
	// Line 640, Address: 0x2e0c6c, Func Offset: 0x19c
	// Line 638, Address: 0x2e0c74, Func Offset: 0x1a4
	// Line 640, Address: 0x2e0c78, Func Offset: 0x1a8
	// Line 647, Address: 0x2e0cb0, Func Offset: 0x1e0
	// Line 646, Address: 0x2e0cb4, Func Offset: 0x1e4
	// Line 647, Address: 0x2e0cb8, Func Offset: 0x1e8
	// Line 649, Address: 0x2e0cd0, Func Offset: 0x200
	// Line 648, Address: 0x2e0cd4, Func Offset: 0x204
	// Line 649, Address: 0x2e0cd8, Func Offset: 0x208
	// Line 650, Address: 0x2e0cf0, Func Offset: 0x220
	// Line 654, Address: 0x2e0cf4, Func Offset: 0x224
	// Line 651, Address: 0x2e0cf8, Func Offset: 0x228
	// Line 654, Address: 0x2e0cfc, Func Offset: 0x22c
	// Line 663, Address: 0x2e0d00, Func Offset: 0x230
	// Line 654, Address: 0x2e0d04, Func Offset: 0x234
	// Line 655, Address: 0x2e0d08, Func Offset: 0x238
	// Line 656, Address: 0x2e0d14, Func Offset: 0x244
	// Line 657, Address: 0x2e0d20, Func Offset: 0x250
	// Line 663, Address: 0x2e0d24, Func Offset: 0x254
	// Line 666, Address: 0x2e0d2c, Func Offset: 0x25c
	// Line 665, Address: 0x2e0d30, Func Offset: 0x260
	// Line 666, Address: 0x2e0d34, Func Offset: 0x264
	// Line 669, Address: 0x2e0d3c, Func Offset: 0x26c
	// Line 672, Address: 0x2e0d48, Func Offset: 0x278
	// Line 671, Address: 0x2e0d4c, Func Offset: 0x27c
	// Line 672, Address: 0x2e0d50, Func Offset: 0x280
	// Line 673, Address: 0x2e0d58, Func Offset: 0x288
	// Line 675, Address: 0x2e0d5c, Func Offset: 0x28c
	// Line 676, Address: 0x2e0d60, Func Offset: 0x290
	// Line 677, Address: 0x2e0d7c, Func Offset: 0x2ac
	// Line 678, Address: 0x2e0d90, Func Offset: 0x2c0
	// Line 679, Address: 0x2e0db8, Func Offset: 0x2e8
	// Line 680, Address: 0x2e0dc8, Func Offset: 0x2f8
	// Line 682, Address: 0x2e0dd0, Func Offset: 0x300
	// Line 683, Address: 0x2e0dd8, Func Offset: 0x308
	// Line 685, Address: 0x2e0df4, Func Offset: 0x324
	// Line 688, Address: 0x2e0e30, Func Offset: 0x360
	// Line 691, Address: 0x2e0e38, Func Offset: 0x368
	// Line 692, Address: 0x2e0e44, Func Offset: 0x374
	// Line 693, Address: 0x2e0e58, Func Offset: 0x388
	// Line 694, Address: 0x2e0e60, Func Offset: 0x390
	// Line 695, Address: 0x2e0e64, Func Offset: 0x394
	// Line 696, Address: 0x2e0e74, Func Offset: 0x3a4
	// Line 697, Address: 0x2e0e78, Func Offset: 0x3a8
	// Func End, Address: 0x2e0ea4, Func Offset: 0x3d4
}

// 
// Start address: 0x2e0eb0
_anon0* Make_SplashWaterOnFloor_Packet(_anon0* pPk, FallWaterPtcl* pPtcl, float Wld2ScrMat[4], float FloorY)
{
	_anon0* pSavePk;
	float RRate;
	float CenterPos[4];
	float SplashRadius;
	int AngNo;
	float SplashBtmY;
	float SplashTopY;
	float AlphaRate;
	float TopYRate;
	float Ang;
	float SinVal;
	float CosVal;
	int RNo;
	float inv_w;
	float PosRadius;
	float PosY;
	float STRadius;
	int fog_val;
	int Alpha;
	float Pos[4];
	float ScrPos[4];
	// Line 708, Address: 0x2e0eb0, Func Offset: 0
	// Line 725, Address: 0x2e0eb4, Func Offset: 0x4
	// Line 708, Address: 0x2e0eb8, Func Offset: 0x8
	// Line 725, Address: 0x2e0ebc, Func Offset: 0xc
	// Line 708, Address: 0x2e0ec0, Func Offset: 0x10
	// Line 726, Address: 0x2e0ec8, Func Offset: 0x18
	// Line 708, Address: 0x2e0ecc, Func Offset: 0x1c
	// Line 726, Address: 0x2e0ed8, Func Offset: 0x28
	// Line 708, Address: 0x2e0edc, Func Offset: 0x2c
	// Line 709, Address: 0x2e0ef0, Func Offset: 0x40
	// Line 708, Address: 0x2e0ef4, Func Offset: 0x44
	// Line 725, Address: 0x2e0efc, Func Offset: 0x4c
	// Line 726, Address: 0x2e0f04, Func Offset: 0x54
	// Line 727, Address: 0x2e0f18, Func Offset: 0x68
	// Line 728, Address: 0x2e0f6c, Func Offset: 0xbc
	// Line 727, Address: 0x2e0f70, Func Offset: 0xc0
	// Line 728, Address: 0x2e0f74, Func Offset: 0xc4
	// Line 730, Address: 0x2e0f78, Func Offset: 0xc8
	// Line 728, Address: 0x2e0f7c, Func Offset: 0xcc
	// Line 730, Address: 0x2e0f80, Func Offset: 0xd0
	// Line 728, Address: 0x2e0f84, Func Offset: 0xd4
	// Line 730, Address: 0x2e0f98, Func Offset: 0xe8
	// Line 728, Address: 0x2e0f9c, Func Offset: 0xec
	// Line 730, Address: 0x2e0fb8, Func Offset: 0x108
	// Line 732, Address: 0x2e0fc0, Func Offset: 0x110
	// Line 728, Address: 0x2e0fc4, Func Offset: 0x114
	// Line 730, Address: 0x2e0fd4, Func Offset: 0x124
	// Line 732, Address: 0x2e0fe8, Func Offset: 0x138
	// Line 733, Address: 0x2e1000, Func Offset: 0x150
	// Line 737, Address: 0x2e1008, Func Offset: 0x158
	// Line 733, Address: 0x2e100c, Func Offset: 0x15c
	// Line 737, Address: 0x2e1010, Func Offset: 0x160
	// Line 733, Address: 0x2e1014, Func Offset: 0x164
	// Line 738, Address: 0x2e102c, Func Offset: 0x17c
	// Line 733, Address: 0x2e1030, Func Offset: 0x180
	// Line 737, Address: 0x2e1060, Func Offset: 0x1b0
	// Line 733, Address: 0x2e1064, Func Offset: 0x1b4
	// Line 737, Address: 0x2e1068, Func Offset: 0x1b8
	// Line 738, Address: 0x2e1078, Func Offset: 0x1c8
	// Line 740, Address: 0x2e1090, Func Offset: 0x1e0
	// Line 743, Address: 0x2e109c, Func Offset: 0x1ec
	// Line 745, Address: 0x2e10a8, Func Offset: 0x1f8
	// Line 746, Address: 0x2e10c4, Func Offset: 0x214
	// Line 747, Address: 0x2e10cc, Func Offset: 0x21c
	// Line 751, Address: 0x2e10d8, Func Offset: 0x228
	// Line 760, Address: 0x2e1160, Func Offset: 0x2b0
	// Line 763, Address: 0x2e1168, Func Offset: 0x2b8
	// Line 764, Address: 0x2e1170, Func Offset: 0x2c0
	// Line 762, Address: 0x2e1174, Func Offset: 0x2c4
	// Line 766, Address: 0x2e1178, Func Offset: 0x2c8
	// Line 768, Address: 0x2e1180, Func Offset: 0x2d0
	// Line 769, Address: 0x2e1184, Func Offset: 0x2d4
	// Line 770, Address: 0x2e1188, Func Offset: 0x2d8
	// Line 771, Address: 0x2e118c, Func Offset: 0x2dc
	// Line 775, Address: 0x2e1190, Func Offset: 0x2e0
	// Line 774, Address: 0x2e1194, Func Offset: 0x2e4
	// Line 776, Address: 0x2e11a0, Func Offset: 0x2f0
	// Line 777, Address: 0x2e11ac, Func Offset: 0x2fc
	// Line 774, Address: 0x2e11b0, Func Offset: 0x300
	// Line 776, Address: 0x2e11b4, Func Offset: 0x304
	// Line 778, Address: 0x2e11b8, Func Offset: 0x308
	// Line 780, Address: 0x2e11e0, Func Offset: 0x330
	// Line 781, Address: 0x2e11f0, Func Offset: 0x340
	// Line 783, Address: 0x2e11f8, Func Offset: 0x348
	// Line 784, Address: 0x2e1200, Func Offset: 0x350
	// Line 785, Address: 0x2e121c, Func Offset: 0x36c
	// Line 788, Address: 0x2e1258, Func Offset: 0x3a8
	// Line 793, Address: 0x2e1260, Func Offset: 0x3b0
	// Line 794, Address: 0x2e126c, Func Offset: 0x3bc
	// Line 795, Address: 0x2e1278, Func Offset: 0x3c8
	// Line 796, Address: 0x2e127c, Func Offset: 0x3cc
	// Line 798, Address: 0x2e1280, Func Offset: 0x3d0
	// Line 799, Address: 0x2e1284, Func Offset: 0x3d4
	// Line 800, Address: 0x2e1288, Func Offset: 0x3d8
	// Line 801, Address: 0x2e128c, Func Offset: 0x3dc
	// Line 802, Address: 0x2e1290, Func Offset: 0x3e0
	// Line 804, Address: 0x2e1294, Func Offset: 0x3e4
	// Line 805, Address: 0x2e129c, Func Offset: 0x3ec
	// Line 806, Address: 0x2e12b0, Func Offset: 0x400
	// Line 807, Address: 0x2e12b8, Func Offset: 0x408
	// Line 808, Address: 0x2e12bc, Func Offset: 0x40c
	// Line 809, Address: 0x2e12cc, Func Offset: 0x41c
	// Line 810, Address: 0x2e12dc, Func Offset: 0x42c
	// Line 811, Address: 0x2e12e0, Func Offset: 0x430
	// Func End, Address: 0x2e1310, Func Offset: 0x460
}

