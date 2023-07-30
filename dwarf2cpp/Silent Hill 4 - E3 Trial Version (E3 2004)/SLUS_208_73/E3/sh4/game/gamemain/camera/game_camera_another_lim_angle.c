typedef struct CamDriveArea;
typedef struct LimAngleCamWork;
typedef struct CamLineArea;
typedef struct CamMakeView;
typedef struct CamLimitView;
typedef struct _anon0;
typedef struct CamMvUnknownArg;
typedef struct CamMvChaseArg;
typedef struct sfObj;
typedef enum GameItem : unsigned char;
typedef struct CamMvLimitAngleArg;
typedef struct CamMvCircumArg;
typedef union _anon1;
typedef enum _cam3Step : unsigned char;
typedef struct CamMvCmprxCircumArg;
typedef struct _cam3Work;
typedef union CamMoveArgUnion;
typedef enum PlayerExtStatus : unsigned char;

typedef int(*type_4)();
typedef void(*type_9)(float*, float*, float);
typedef void(*type_14)();
typedef void(*type_22)(sfObj*);
typedef void(*type_29)(sfObj*);
typedef void(*type_30)(sfObj*);

typedef char type_0[16];
typedef float type_1[8];
typedef float type_2[3];
typedef float type_3[3];
typedef float type_5[2];
typedef float type_6[3];
typedef float type_7[2];
typedef float type_8[2];
typedef float type_10[3];
typedef float type_11[4];
typedef _anon0 type_12[2];
typedef float type_13[2];
typedef void(*type_15)()[2];
typedef short type_16[2];
typedef unsigned short type_17[2];
typedef char type_18[4];
typedef unsigned char type_19[4];
typedef _anon1 type_20[256];
typedef float type_21[1];
typedef int type_23[1];
typedef float type_24[4];
typedef float type_25[4][4];
typedef float type_26[3];
typedef float type_27[4];
typedef float type_28[20];
typedef void(*type_31)(sfObj*)[3];
typedef float type_32[4];

struct CamDriveArea
{
	char Name[16];
	unsigned short DataNo;
	union
	{
		float InputDriveArea[8];
		CamLineArea DriveArea;
	};
	int CamMvType;
	float CamViewAng;
	float ColideCamRadius;
	CamMoveArgUnion CamMvArg;
	unsigned char AreaPriority;
	unsigned short AreaBit;
	unsigned short ConvineCamMvAreaBit;
	unsigned short JumpCamMvAreaBit;
	unsigned short InhibitChgAreaBit;
	int(*UseThisCheckFunc)();
	float DistFromControlPos;
	float NearestLinePosXYZ[3];
};

struct LimAngleCamWork
{
	int PrevSearchButtomFlag;
	int SearchButtomReleaceFlag;
	int SearchRevCamFalg;
	float MaxSpdZeroSubTimer;
};

struct CamLineArea
{
	float Pos0XYZ[3];
	float Pos1XYZ[3];
	float Radius;
	float CylinderMode;
};

struct CamMakeView
{
	float WatchPlayerY;
	float ViewOrgAngXY[2];
};

struct CamLimitView
{
	float LimOfsAngWidthXY[2];
	float LimAngMvRateXY[2];
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

struct CamMvUnknownArg
{
	int UseViewLimitFlag;
};

struct CamMvChaseArg
{
	CamLineArea CamMoveArea;
	CamMakeView MakeView;
	float ControlCamCircleRadius;
	float ControlCamCircleFwdOffset;
	float Player2CamY;
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

struct CamMvLimitAngleArg
{
	CamLineArea CamMoveArea;
	float Watch2CamVecXYZ[3];
	CamMakeView MakeView;
	CamLimitView LimView;
	float L2ChgType;
};

struct CamMvCircumArg
{
	float CenterPosXZ[2];
	float Radius;
	float Cam2PlayerArcDist;
	float CamYMode;
	float CamY;
	float WatchPlayerY;
	float ViewOrgAngX;
	float WatchOfs2CenterDist;
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

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
};

struct CamMvCmprxCircumArg
{
	float RailCenterPos[4];
	float MkCharaAngPos[4];
	float OrgCharaAng;
	float OrgRailAng;
	float DiffChara2RailAngRate;
	float RailRadius;
	float ZoomUpDist;
	float WatchPlayerY;
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

union CamMoveArgUnion
{
	float Data[20];
	CamMvUnknownArg Unknown;
	CamMvChaseArg Chase;
	CamMvLimitAngleArg LimAngle;
	CamMvCircumArg Circum;
	CamMvCmprxCircumArg CmprxCircum;
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
LimAngleCamWork lacW;
void(*ChaseAdjustCamTgtMoveFunc)(float*, float*, float);
_anon0 player_ext_info[2];
_cam3Work cam3_work;

void GameCameraLimAngle_SceneInit();
void GameCameraLimAngle_ChangeTypeInit(CamDriveArea* pArea, int Chg1FrameMode);
void GameCameraLimAngle_Main(CamDriveArea* pArea);
void LimAngle_makeWatchTgtPos(float* WatchTgtPos, float WatchPlayerY, _anon0* pPlayerIF);
void LimAngle_makeCamTgtPos(float* CamTgtPos, float* WatchTgtPos, float* Watch2CamVecXYZ);

// 
// Start address: 0x2b77b0
void GameCameraLimAngle_SceneInit()
{
	unsigned int SvSearchRevCamFalg;
	// Line 81, Address: 0x2b77b0, Func Offset: 0
	// Line 83, Address: 0x2b77b4, Func Offset: 0x4
	// Line 81, Address: 0x2b77b8, Func Offset: 0x8
	// Line 82, Address: 0x2b77bc, Func Offset: 0xc
	// Line 81, Address: 0x2b77c0, Func Offset: 0x10
	// Line 83, Address: 0x2b77c4, Func Offset: 0x14
	// Line 82, Address: 0x2b77c8, Func Offset: 0x18
	// Line 83, Address: 0x2b77cc, Func Offset: 0x1c
	// Line 84, Address: 0x2b77d8, Func Offset: 0x28
	// Line 85, Address: 0x2b77e0, Func Offset: 0x30
	// Func End, Address: 0x2b77f0, Func Offset: 0x40
}

// 
// Start address: 0x2b77f0
void GameCameraLimAngle_ChangeTypeInit(CamDriveArea* pArea, int Chg1FrameMode)
{
	_anon0* pPlayerIF;
	float CamTgtPos_InMvArea[4];
	float CamTgtPos[4];
	float WatchTgtPos[4];
	float Vec[4];
	unsigned int Chg1FrameBySearchViewFlag;
	CamMvLimitAngleArg* pLimArg;
	float CamViewAng;
	float ViewOrgAngY;
	float Watch2CamVecXYZ[3];
	float ViewRate;
	float CamSpdVal;
	float ToPlayerDist;
	float ToPlayerSpdDot;
	float CamSpd[4];
	// Line 93, Address: 0x2b77f0, Func Offset: 0
	// Line 94, Address: 0x2b7810, Func Offset: 0x20
	// Line 93, Address: 0x2b7814, Func Offset: 0x24
	// Line 104, Address: 0x2b7818, Func Offset: 0x28
	// Line 93, Address: 0x2b781c, Func Offset: 0x2c
	// Line 104, Address: 0x2b7820, Func Offset: 0x30
	// Line 93, Address: 0x2b7824, Func Offset: 0x34
	// Line 94, Address: 0x2b7828, Func Offset: 0x38
	// Line 104, Address: 0x2b782c, Func Offset: 0x3c
	// Line 106, Address: 0x2b783c, Func Offset: 0x4c
	// Line 107, Address: 0x2b7844, Func Offset: 0x54
	// Line 109, Address: 0x2b7850, Func Offset: 0x60
	// Line 111, Address: 0x2b7860, Func Offset: 0x70
	// Line 112, Address: 0x2b7864, Func Offset: 0x74
	// Line 114, Address: 0x2b7870, Func Offset: 0x80
	// Line 116, Address: 0x2b7878, Func Offset: 0x88
	// Line 121, Address: 0x2b7880, Func Offset: 0x90
	// Line 123, Address: 0x2b788c, Func Offset: 0x9c
	// Line 125, Address: 0x2b789c, Func Offset: 0xac
	// Line 126, Address: 0x2b78b0, Func Offset: 0xc0
	// Line 129, Address: 0x2b78c4, Func Offset: 0xd4
	// Line 135, Address: 0x2b78cc, Func Offset: 0xdc
	// Line 145, Address: 0x2b78dc, Func Offset: 0xec
	// Line 146, Address: 0x2b78e0, Func Offset: 0xf0
	// Line 153, Address: 0x2b78e4, Func Offset: 0xf4
	// Line 146, Address: 0x2b78ec, Func Offset: 0xfc
	// Line 147, Address: 0x2b78f0, Func Offset: 0x100
	// Line 148, Address: 0x2b78f8, Func Offset: 0x108
	// Line 153, Address: 0x2b7900, Func Offset: 0x110
	// Line 149, Address: 0x2b7904, Func Offset: 0x114
	// Line 153, Address: 0x2b7908, Func Offset: 0x118
	// Line 155, Address: 0x2b7914, Func Offset: 0x124
	// Line 159, Address: 0x2b7928, Func Offset: 0x138
	// Line 161, Address: 0x2b7948, Func Offset: 0x158
	// Line 163, Address: 0x2b7958, Func Offset: 0x168
	// Line 164, Address: 0x2b7964, Func Offset: 0x174
	// Line 165, Address: 0x2b7968, Func Offset: 0x178
	// Line 166, Address: 0x2b7970, Func Offset: 0x180
	// Line 169, Address: 0x2b7978, Func Offset: 0x188
	// Line 170, Address: 0x2b7988, Func Offset: 0x198
	// Line 171, Address: 0x2b79a4, Func Offset: 0x1b4
	// Line 172, Address: 0x2b79b0, Func Offset: 0x1c0
	// Line 173, Address: 0x2b79bc, Func Offset: 0x1cc
	// Line 174, Address: 0x2b79c0, Func Offset: 0x1d0
	// Line 178, Address: 0x2b79d4, Func Offset: 0x1e4
	// Line 180, Address: 0x2b79f8, Func Offset: 0x208
	// Line 181, Address: 0x2b7a08, Func Offset: 0x218
	// Line 182, Address: 0x2b7a1c, Func Offset: 0x22c
	// Line 183, Address: 0x2b7a20, Func Offset: 0x230
	// Line 187, Address: 0x2b7a40, Func Offset: 0x250
	// Line 189, Address: 0x2b7a60, Func Offset: 0x270
	// Line 191, Address: 0x2b7a70, Func Offset: 0x280
	// Line 190, Address: 0x2b7a74, Func Offset: 0x284
	// Line 191, Address: 0x2b7a7c, Func Offset: 0x28c
	// Line 190, Address: 0x2b7a84, Func Offset: 0x294
	// Line 191, Address: 0x2b7a8c, Func Offset: 0x29c
	// Line 192, Address: 0x2b7a94, Func Offset: 0x2a4
	// Line 190, Address: 0x2b7a98, Func Offset: 0x2a8
	// Line 192, Address: 0x2b7a9c, Func Offset: 0x2ac
	// Line 193, Address: 0x2b7aa4, Func Offset: 0x2b4
	// Line 194, Address: 0x2b7aa8, Func Offset: 0x2b8
	// Line 196, Address: 0x2b7ac8, Func Offset: 0x2d8
	// Line 201, Address: 0x2b7acc, Func Offset: 0x2dc
	// Line 204, Address: 0x2b7ad0, Func Offset: 0x2e0
	// Line 207, Address: 0x2b7adc, Func Offset: 0x2ec
	// Line 209, Address: 0x2b7af0, Func Offset: 0x300
	// Line 210, Address: 0x2b7af8, Func Offset: 0x308
	// Line 216, Address: 0x2b7b00, Func Offset: 0x310
	// Line 220, Address: 0x2b7b0c, Func Offset: 0x31c
	// Line 225, Address: 0x2b7b18, Func Offset: 0x328
	// Line 241, Address: 0x2b7b4c, Func Offset: 0x35c
	// Line 242, Address: 0x2b7b54, Func Offset: 0x364
	// Line 243, Address: 0x2b7b78, Func Offset: 0x388
	// Line 244, Address: 0x2b7b94, Func Offset: 0x3a4
	// Line 245, Address: 0x2b7bb8, Func Offset: 0x3c8
	// Line 248, Address: 0x2b7bdc, Func Offset: 0x3ec
	// Line 253, Address: 0x2b7c48, Func Offset: 0x458
	// Line 254, Address: 0x2b7c54, Func Offset: 0x464
	// Line 255, Address: 0x2b7c60, Func Offset: 0x470
	// Line 256, Address: 0x2b7c70, Func Offset: 0x480
	// Line 255, Address: 0x2b7c78, Func Offset: 0x488
	// Line 256, Address: 0x2b7c80, Func Offset: 0x490
	// Line 257, Address: 0x2b7c8c, Func Offset: 0x49c
	// Line 259, Address: 0x2b7c94, Func Offset: 0x4a4
	// Line 261, Address: 0x2b7c98, Func Offset: 0x4a8
	// Line 262, Address: 0x2b7cb4, Func Offset: 0x4c4
	// Line 263, Address: 0x2b7cbc, Func Offset: 0x4cc
	// Line 264, Address: 0x2b7cc8, Func Offset: 0x4d8
	// Line 269, Address: 0x2b7cd8, Func Offset: 0x4e8
	// Line 273, Address: 0x2b7cec, Func Offset: 0x4fc
	// Line 277, Address: 0x2b7d00, Func Offset: 0x510
	// Func End, Address: 0x2b7d28, Func Offset: 0x538
}

// 
// Start address: 0x2b7d30
void GameCameraLimAngle_Main(CamDriveArea* pArea)
{
	float CamMatPtr[4];
	// Line 282, Address: 0x2b7d30, Func Offset: 0
	// Line 291, Address: 0x2b7d38, Func Offset: 0x8
	// Line 294, Address: 0x2b7d40, Func Offset: 0x10
	// Line 302, Address: 0x2b7d48, Func Offset: 0x18
	// Line 304, Address: 0x2b7d50, Func Offset: 0x20
	// Func End, Address: 0x2b7d5c, Func Offset: 0x2c
}

// 
// Start address: 0x2b7d60
void LimAngle_makeWatchTgtPos(float* WatchTgtPos, float WatchPlayerY, _anon0* pPlayerIF)
{
	// Line 316, Address: 0x2b7d60, Func Offset: 0
	// Line 318, Address: 0x2b7d68, Func Offset: 0x8
	// Line 317, Address: 0x2b7d6c, Func Offset: 0xc
	// Line 319, Address: 0x2b7d78, Func Offset: 0x18
	// Func End, Address: 0x2b7d80, Func Offset: 0x20
}

// 
// Start address: 0x2b7d80
void LimAngle_makeCamTgtPos(float* CamTgtPos, float* WatchTgtPos, float* Watch2CamVecXYZ)
{
	float W2CVec[4];
	// Line 335, Address: 0x2b7d80, Func Offset: 0
	// Line 332, Address: 0x2b7d84, Func Offset: 0x4
	// Line 339, Address: 0x2b7d88, Func Offset: 0x8
	// Line 335, Address: 0x2b7d8c, Func Offset: 0xc
	// Line 336, Address: 0x2b7d90, Func Offset: 0x10
	// Line 337, Address: 0x2b7d98, Func Offset: 0x18
	// Line 339, Address: 0x2b7da0, Func Offset: 0x20
	// Line 340, Address: 0x2b7db4, Func Offset: 0x34
	// Line 341, Address: 0x2b7dc4, Func Offset: 0x44
	// Func End, Address: 0x2b7dcc, Func Offset: 0x4c
}

