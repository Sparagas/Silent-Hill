typedef struct sfObj;
typedef enum GameItem : unsigned char;
typedef struct CamMvLimitAngleArg;
typedef struct _anon0;
typedef struct CamMvCircumArg;
typedef enum _cam3Step : unsigned char;
typedef struct CamMvCmprxCircumArg;
typedef union _anon1;
typedef struct CircumCamWork;
typedef struct _cam3Work;
typedef union CamMoveArgUnion;
typedef enum PlayerExtStatus : unsigned char;
typedef struct CamDriveArea;
typedef struct CamLineArea;
typedef struct CamMakeView;
typedef struct CamLimitView;
typedef struct CamMvUnknownArg;
typedef struct CamMvChaseArg;

typedef void(*type_5)();
typedef void(*type_8)(sfObj*);
typedef void(*type_10)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef int(*type_25)();

typedef float type_0[4];
typedef float type_1[3];
typedef float type_2[4];
typedef _anon0 type_3[2];
typedef float type_4[2];
typedef void(*type_6)()[2];
typedef _anon1 type_7[256];
typedef float type_9[20];
typedef void(*type_12)(sfObj*)[3];
typedef char type_13[16];
typedef float type_14[8];
typedef short type_15[2];
typedef unsigned short type_16[2];
typedef char type_17[4];
typedef unsigned char type_18[4];
typedef float type_19[1];
typedef float type_20[3];
typedef float type_21[4];
typedef int type_22[1];
typedef float type_23[4][4];
typedef float type_24[3];
typedef float type_26[2];
typedef float type_27[3];
typedef float type_28[2];
typedef float type_29[2];
typedef float type_30[4];

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

struct CircumCamWork
{
	float WatchTgtPos[4];
	float CamTgtPos[4];
	int FirstSceneFlag;
	int RevCamFlag;
	int CalcOnlySubCounter;
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

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
CircumCamWork cirW;
_anon0 player_ext_info[2];
_cam3Work cam3_work;

void GameCameraCircum_SceneInit();
void GameCameraCircum_ChangeTypeInit(CamDriveArea* pArea, int Chg1FrameMode);
void Circum_makeWatchTgtPos(float* WatchTgtPos, float* CenterPosXZ, float WatchPlayerY, float WatchOfs2CenterDist, _anon0* pPlayerIF);
void Circum_makeCamTgtPos(float* CamTgtPos, int Chg1FrameMode, float* CenterPosXZ, float Radius, float Cam2PlayerArcDist, float CamYMode, float CamY, _anon0* pPlayerIF);
void GameCameraCircum_Main(CamDriveArea* pArea);

// 
// Start address: 0x2c9f50
void GameCameraCircum_SceneInit()
{
	// Line 92, Address: 0x2c9f50, Func Offset: 0
	// Line 93, Address: 0x2c9f54, Func Offset: 0x4
	// Line 92, Address: 0x2c9f58, Func Offset: 0x8
	// Line 93, Address: 0x2c9f5c, Func Offset: 0xc
	// Line 94, Address: 0x2c9f6c, Func Offset: 0x1c
	// Line 95, Address: 0x2c9f78, Func Offset: 0x28
	// Func End, Address: 0x2c9f84, Func Offset: 0x34
}

// 
// Start address: 0x2c9f90
void GameCameraCircum_ChangeTypeInit(CamDriveArea* pArea, int Chg1FrameMode)
{
	_anon0* pPlayerIF;
	CamMvCircumArg* pCirArg;
	float Vec[4];
	// Line 100, Address: 0x2c9f90, Func Offset: 0
	// Line 101, Address: 0x2c9fb0, Func Offset: 0x20
	// Line 107, Address: 0x2c9fb8, Func Offset: 0x28
	// Line 110, Address: 0x2c9fc0, Func Offset: 0x30
	// Line 112, Address: 0x2c9fd0, Func Offset: 0x40
	// Line 113, Address: 0x2ca000, Func Offset: 0x70
	// Line 115, Address: 0x2ca008, Func Offset: 0x78
	// Line 117, Address: 0x2ca034, Func Offset: 0xa4
	// Line 120, Address: 0x2ca038, Func Offset: 0xa8
	// Line 122, Address: 0x2ca040, Func Offset: 0xb0
	// Line 123, Address: 0x2ca050, Func Offset: 0xc0
	// Line 125, Address: 0x2ca060, Func Offset: 0xd0
	// Line 126, Address: 0x2ca074, Func Offset: 0xe4
	// Line 129, Address: 0x2ca088, Func Offset: 0xf8
	// Line 130, Address: 0x2ca09c, Func Offset: 0x10c
	// Line 132, Address: 0x2ca0ac, Func Offset: 0x11c
	// Line 133, Address: 0x2ca0b4, Func Offset: 0x124
	// Line 136, Address: 0x2ca0bc, Func Offset: 0x12c
	// Line 144, Address: 0x2ca0d8, Func Offset: 0x148
	// Line 157, Address: 0x2ca100, Func Offset: 0x170
	// Line 158, Address: 0x2ca128, Func Offset: 0x198
	// Line 161, Address: 0x2ca140, Func Offset: 0x1b0
	// Line 165, Address: 0x2ca154, Func Offset: 0x1c4
	// Line 170, Address: 0x2ca168, Func Offset: 0x1d8
	// Func End, Address: 0x2ca184, Func Offset: 0x1f4
}

// 
// Start address: 0x2ca190
void Circum_makeWatchTgtPos(float* WatchTgtPos, float* CenterPosXZ, float WatchPlayerY, float WatchOfs2CenterDist, _anon0* pPlayerIF)
{
	float Vec[4];
	// Line 183, Address: 0x2ca190, Func Offset: 0
	// Line 185, Address: 0x2ca194, Func Offset: 0x4
	// Line 187, Address: 0x2ca19c, Func Offset: 0xc
	// Line 190, Address: 0x2ca1a0, Func Offset: 0x10
	// Line 187, Address: 0x2ca1a4, Func Offset: 0x14
	// Line 188, Address: 0x2ca1ac, Func Offset: 0x1c
	// Line 187, Address: 0x2ca1b0, Func Offset: 0x20
	// Line 189, Address: 0x2ca1b4, Func Offset: 0x24
	// Line 190, Address: 0x2ca1c4, Func Offset: 0x34
	// Line 191, Address: 0x2ca1e8, Func Offset: 0x58
	// Line 193, Address: 0x2ca20c, Func Offset: 0x7c
	// Line 195, Address: 0x2ca224, Func Offset: 0x94
	// Line 196, Address: 0x2ca230, Func Offset: 0xa0
	// Func End, Address: 0x2ca238, Func Offset: 0xa8
}

// 
// Start address: 0x2ca240
void Circum_makeCamTgtPos(float* CamTgtPos, int Chg1FrameMode, float* CenterPosXZ, float Radius, float Cam2PlayerArcDist, float CamYMode, float CamY, _anon0* pPlayerIF)
{
	float Cntr2PlayerDir;
	float P2CDiffAng;
	float Cntr2CamDir;
	float StartDist;
	// Line 212, Address: 0x2ca240, Func Offset: 0
	// Line 219, Address: 0x2ca278, Func Offset: 0x38
	// Line 220, Address: 0x2ca2a4, Func Offset: 0x64
	// Line 221, Address: 0x2ca2c0, Func Offset: 0x80
	// Line 223, Address: 0x2ca2c8, Func Offset: 0x88
	// Line 224, Address: 0x2ca2dc, Func Offset: 0x9c
	// Line 227, Address: 0x2ca2e8, Func Offset: 0xa8
	// Line 228, Address: 0x2ca2fc, Func Offset: 0xbc
	// Line 229, Address: 0x2ca310, Func Offset: 0xd0
	// Line 230, Address: 0x2ca318, Func Offset: 0xd8
	// Line 231, Address: 0x2ca334, Func Offset: 0xf4
	// Line 232, Address: 0x2ca338, Func Offset: 0xf8
	// Line 242, Address: 0x2ca340, Func Offset: 0x100
	// Line 245, Address: 0x2ca354, Func Offset: 0x114
	// Line 246, Address: 0x2ca368, Func Offset: 0x128
	// Line 249, Address: 0x2ca38c, Func Offset: 0x14c
	// Line 251, Address: 0x2ca394, Func Offset: 0x154
	// Line 252, Address: 0x2ca39c, Func Offset: 0x15c
	// Line 254, Address: 0x2ca3b4, Func Offset: 0x174
	// Line 258, Address: 0x2ca3b8, Func Offset: 0x178
	// Func End, Address: 0x2ca3e4, Func Offset: 0x1a4
}

// 
// Start address: 0x2ca3f0
void GameCameraCircum_Main(CamDriveArea* pArea)
{
	float CamMatPtr[4];
	int Chg1FrameMode;
	// Line 264, Address: 0x2ca3f0, Func Offset: 0
	// Line 268, Address: 0x2ca3f4, Func Offset: 0x4
	// Line 264, Address: 0x2ca3f8, Func Offset: 0x8
	// Line 268, Address: 0x2ca408, Func Offset: 0x18
	// Line 271, Address: 0x2ca42c, Func Offset: 0x3c
	// Line 272, Address: 0x2ca430, Func Offset: 0x40
	// Line 275, Address: 0x2ca440, Func Offset: 0x50
	// Line 278, Address: 0x2ca44c, Func Offset: 0x5c
	// Line 281, Address: 0x2ca454, Func Offset: 0x64
	// Line 283, Address: 0x2ca45c, Func Offset: 0x6c
	// Line 285, Address: 0x2ca46c, Func Offset: 0x7c
	// Line 284, Address: 0x2ca474, Func Offset: 0x84
	// Line 286, Address: 0x2ca478, Func Offset: 0x88
	// Line 288, Address: 0x2ca480, Func Offset: 0x90
	// Line 289, Address: 0x2ca488, Func Offset: 0x98
	// Func End, Address: 0x2ca49c, Func Offset: 0xac
}

