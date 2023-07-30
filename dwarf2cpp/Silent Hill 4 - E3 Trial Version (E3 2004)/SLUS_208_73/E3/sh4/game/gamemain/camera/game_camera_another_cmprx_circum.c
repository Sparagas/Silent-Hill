typedef struct CmprxCircumCamWork;
typedef struct sfObj;
typedef enum GameItem : unsigned char;
typedef struct CamMvLimitAngleArg;
typedef struct CamMvCircumArg;
typedef struct CamDriveArea;
typedef enum _cam3Step : unsigned char;
typedef struct CamMvCmprxCircumArg;
typedef union _anon0;
typedef struct _cam3Work;
typedef union CamMoveArgUnion;
typedef struct _anon1;
typedef enum PlayerExtStatus : unsigned char;
typedef struct CamLineArea;
typedef struct CamMakeView;
typedef struct CamLimitView;
typedef struct CamMvUnknownArg;
typedef struct CamMvChaseArg;

typedef void(*type_4)();
typedef void(*type_7)(sfObj*);
typedef void(*type_10)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef int(*type_25)();

typedef float type_0[3];
typedef float type_1[4];
typedef _anon1 type_2[2];
typedef float type_3[2];
typedef void(*type_5)()[2];
typedef _anon0 type_6[256];
typedef float type_8[4];
typedef float type_9[20];
typedef void(*type_12)(sfObj*)[3];
typedef char type_13[16];
typedef short type_14[2];
typedef float type_15[8];
typedef unsigned short type_16[2];
typedef char type_17[4];
typedef unsigned char type_18[4];
typedef float type_19[1];
typedef int type_20[1];
typedef float type_21[4];
typedef float type_22[3];
typedef float type_23[4][4];
typedef float type_24[3];
typedef float type_26[2];
typedef float type_27[3];
typedef float type_28[2];
typedef float type_29[2];
typedef float type_30[4];

struct CmprxCircumCamWork
{
	float PrevViewAng;
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
CmprxCircumCamWork cirW;
_anon1 player_ext_info[2];
_cam3Work cam3_work;

void GameCameraCmprxCircum_SceneInit();
void GameCameraCmprxCircum_ChangeTypeInit(CamDriveArea* pArea, int Chg1FrameMode);
void CmprxCircum_makeWatchTgtPos(float* WatchTgtPos, float WatchPlayerY, _anon1* pPlayerIF);
void CmprxCircum_makeCamTgtPos(float* CamTgtPos, float* RailCenterPos, float RailRadius, float* MkCharaAngPos, float OrgCharaAng, float OrgRailAng, float DiffChr2RailAngRate, _anon1* pPlayerIF);
void GameCameraCmprxCircum_Main(CamDriveArea* pArea);

// 
// Start address: 0x337b80
void GameCameraCmprxCircum_SceneInit()
{
	// Line 91, Address: 0x337b80, Func Offset: 0
	// Func End, Address: 0x337b94, Func Offset: 0x14
}

// 
// Start address: 0x337ba0
void GameCameraCmprxCircum_ChangeTypeInit(CamDriveArea* pArea, int Chg1FrameMode)
{
	_anon1* pPlayerIF;
	float CamTgtPos[4];
	float WatchTgtPos[4];
	float EngineCamTgtPos[4];
	float WalterPos[4];
	CamMvCmprxCircumArg* pCmprxCircumArg;
	sfObj* pWalterObj;
	int FightingPoseFlag;
	float SetViewAng;
	float ViewVec[4];
	float ViewAngMul;
	float Dist;
	float* CamPosPtr;
	float ViewAngY;
	float AbsWalterOfsAngY;
	float AbsPlayerOfsAngY;
	float CharaViewAng;
	float DiffAng;
	float MvAng;
	float side_ang;
	float up_ang;
	float LookFwdDist;
	// Line 97, Address: 0x337ba0, Func Offset: 0
	// Line 98, Address: 0x337bc0, Func Offset: 0x20
	// Line 97, Address: 0x337bc4, Func Offset: 0x24
	// Line 106, Address: 0x337bc8, Func Offset: 0x28
	// Line 97, Address: 0x337bcc, Func Offset: 0x2c
	// Line 98, Address: 0x337bd0, Func Offset: 0x30
	// Line 97, Address: 0x337bd4, Func Offset: 0x34
	// Line 103, Address: 0x337bd8, Func Offset: 0x38
	// Line 106, Address: 0x337bdc, Func Offset: 0x3c
	// Line 108, Address: 0x337be4, Func Offset: 0x44
	// Line 110, Address: 0x337bec, Func Offset: 0x4c
	// Line 111, Address: 0x337bfc, Func Offset: 0x5c
	// Line 113, Address: 0x337c0c, Func Offset: 0x6c
	// Line 114, Address: 0x337c20, Func Offset: 0x80
	// Line 117, Address: 0x337c34, Func Offset: 0x94
	// Line 119, Address: 0x337c40, Func Offset: 0xa0
	// Line 120, Address: 0x337c54, Func Offset: 0xb4
	// Line 125, Address: 0x337c64, Func Offset: 0xc4
	// Line 130, Address: 0x337c6c, Func Offset: 0xcc
	// Line 131, Address: 0x337c78, Func Offset: 0xd8
	// Line 132, Address: 0x337c80, Func Offset: 0xe0
	// Line 133, Address: 0x337c88, Func Offset: 0xe8
	// Line 134, Address: 0x337c90, Func Offset: 0xf0
	// Line 135, Address: 0x337c9c, Func Offset: 0xfc
	// Line 138, Address: 0x337ca0, Func Offset: 0x100
	// Line 150, Address: 0x337cc4, Func Offset: 0x124
	// Line 156, Address: 0x337cd4, Func Offset: 0x134
	// Line 158, Address: 0x337ce4, Func Offset: 0x144
	// Line 159, Address: 0x337d04, Func Offset: 0x164
	// Line 158, Address: 0x337d08, Func Offset: 0x168
	// Line 159, Address: 0x337d14, Func Offset: 0x174
	// Line 160, Address: 0x337d20, Func Offset: 0x180
	// Line 161, Address: 0x337d28, Func Offset: 0x188
	// Line 162, Address: 0x337d34, Func Offset: 0x194
	// Line 165, Address: 0x337d3c, Func Offset: 0x19c
	// Line 166, Address: 0x337d5c, Func Offset: 0x1bc
	// Line 168, Address: 0x337d7c, Func Offset: 0x1dc
	// Line 177, Address: 0x337d80, Func Offset: 0x1e0
	// Line 179, Address: 0x337d88, Func Offset: 0x1e8
	// Line 180, Address: 0x337d90, Func Offset: 0x1f0
	// Line 181, Address: 0x337d94, Func Offset: 0x1f4
	// Line 182, Address: 0x337d98, Func Offset: 0x1f8
	// Line 183, Address: 0x337db4, Func Offset: 0x214
	// Line 184, Address: 0x337dd8, Func Offset: 0x238
	// Line 185, Address: 0x337de8, Func Offset: 0x248
	// Line 186, Address: 0x337e1c, Func Offset: 0x27c
	// Line 187, Address: 0x337e28, Func Offset: 0x288
	// Line 189, Address: 0x337e30, Func Offset: 0x290
	// Line 190, Address: 0x337e34, Func Offset: 0x294
	// Line 198, Address: 0x337e44, Func Offset: 0x2a4
	// Line 199, Address: 0x337e54, Func Offset: 0x2b4
	// Line 201, Address: 0x337e74, Func Offset: 0x2d4
	// Line 203, Address: 0x337e94, Func Offset: 0x2f4
	// Line 204, Address: 0x337e9c, Func Offset: 0x2fc
	// Line 206, Address: 0x337eac, Func Offset: 0x30c
	// Line 207, Address: 0x337eb8, Func Offset: 0x318
	// Line 208, Address: 0x337ed0, Func Offset: 0x330
	// Line 209, Address: 0x337ed8, Func Offset: 0x338
	// Line 211, Address: 0x337ef8, Func Offset: 0x358
	// Line 213, Address: 0x337f04, Func Offset: 0x364
	// Line 217, Address: 0x337f08, Func Offset: 0x368
	// Line 218, Address: 0x337f24, Func Offset: 0x384
	// Line 221, Address: 0x337f28, Func Offset: 0x388
	// Line 224, Address: 0x337f30, Func Offset: 0x390
	// Line 226, Address: 0x337f38, Func Offset: 0x398
	// Line 227, Address: 0x337f40, Func Offset: 0x3a0
	// Line 229, Address: 0x337f5c, Func Offset: 0x3bc
	// Line 230, Address: 0x337f68, Func Offset: 0x3c8
	// Line 231, Address: 0x337f6c, Func Offset: 0x3cc
	// Line 232, Address: 0x337f88, Func Offset: 0x3e8
	// Line 234, Address: 0x337f90, Func Offset: 0x3f0
	// Line 236, Address: 0x337f98, Func Offset: 0x3f8
	// Line 240, Address: 0x337fa0, Func Offset: 0x400
	// Line 241, Address: 0x337fac, Func Offset: 0x40c
	// Line 240, Address: 0x337fb0, Func Offset: 0x410
	// Line 241, Address: 0x337fb8, Func Offset: 0x418
	// Line 242, Address: 0x337fc4, Func Offset: 0x424
	// Line 241, Address: 0x337fc8, Func Offset: 0x428
	// Line 242, Address: 0x337fd4, Func Offset: 0x434
	// Line 251, Address: 0x337fe8, Func Offset: 0x448
	// Line 255, Address: 0x337ff8, Func Offset: 0x458
	// Line 259, Address: 0x338008, Func Offset: 0x468
	// Func End, Address: 0x338034, Func Offset: 0x494
}

// 
// Start address: 0x338040
void CmprxCircum_makeWatchTgtPos(float* WatchTgtPos, float WatchPlayerY, _anon1* pPlayerIF)
{
	// Line 272, Address: 0x338040, Func Offset: 0
	// Line 275, Address: 0x338048, Func Offset: 0x8
	// Line 274, Address: 0x33804c, Func Offset: 0xc
	// Line 276, Address: 0x338058, Func Offset: 0x18
	// Func End, Address: 0x338060, Func Offset: 0x20
}

// 
// Start address: 0x338060
void CmprxCircum_makeCamTgtPos(float* CamTgtPos, float* RailCenterPos, float RailRadius, float* MkCharaAngPos, float OrgCharaAng, float OrgRailAng, float DiffChr2RailAngRate, _anon1* pPlayerIF)
{
	float CharaAng;
	float RailCamTgtAng;
	float DiffRailAng;
	// Line 292, Address: 0x338060, Func Offset: 0
	// Line 298, Address: 0x338088, Func Offset: 0x28
	// Line 299, Address: 0x3380b4, Func Offset: 0x54
	// Line 300, Address: 0x3380c0, Func Offset: 0x60
	// Line 302, Address: 0x3380c4, Func Offset: 0x64
	// Line 303, Address: 0x3380dc, Func Offset: 0x7c
	// Line 304, Address: 0x3380e0, Func Offset: 0x80
	// Line 305, Address: 0x3380f0, Func Offset: 0x90
	// Line 304, Address: 0x3380f4, Func Offset: 0x94
	// Line 305, Address: 0x338100, Func Offset: 0xa0
	// Line 306, Address: 0x338104, Func Offset: 0xa4
	// Func End, Address: 0x338128, Func Offset: 0xc8
}

// 
// Start address: 0x338130
void GameCameraCmprxCircum_Main(CamDriveArea* pArea)
{
	float CamMatPtr[4];
	// Line 312, Address: 0x338130, Func Offset: 0
	// Line 313, Address: 0x338138, Func Offset: 0x8
	// Line 316, Address: 0x338140, Func Offset: 0x10
	// Line 318, Address: 0x338148, Func Offset: 0x18
	// Line 320, Address: 0x338150, Func Offset: 0x20
	// Func End, Address: 0x33815c, Func Offset: 0x2c
}

