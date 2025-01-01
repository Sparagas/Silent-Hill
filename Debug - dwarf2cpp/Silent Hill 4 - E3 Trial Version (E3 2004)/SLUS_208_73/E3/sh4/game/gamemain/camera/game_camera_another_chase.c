typedef struct CamMakeView;
typedef struct CamLineArea;
typedef struct _anon0;
typedef struct CamDriveArea;
typedef struct CamLimitView;
typedef enum EnemyCondition : unsigned char;
typedef struct CamMvUnknownArg;
typedef struct CamMvChaseArg;
typedef struct sfObj;
typedef enum GameItem : unsigned char;
typedef struct CamMvLimitAngleArg;
typedef enum EnemyKind : unsigned char;
typedef struct ChaseCamWork;
typedef struct CamMvCircumArg;
typedef union _anon1;
typedef enum _cam3Step : unsigned char;
typedef struct CamMvCmprxCircumArg;
typedef struct _cam3Work;
typedef union CamMoveArgUnion;
typedef struct _anon2;
typedef struct _anon3;
typedef enum PlayerExtStatus : unsigned char;

typedef void(*type_2)(float*, float*, float);
typedef int(*type_5)();
typedef void(*type_14)();
typedef void(*type_21)(sfObj*);
typedef void(*type_28)(sfObj*);
typedef void(*type_29)(sfObj*);

typedef char type_0[16];
typedef float type_1[8];
typedef float type_3[3];
typedef float type_4[3];
typedef float type_6[2];
typedef float type_7[3];
typedef float type_8[2];
typedef float type_9[2];
typedef float type_10[3];
typedef float type_11[4];
typedef _anon0 type_12[2];
typedef float type_13[2];
typedef void(*type_15)()[2];
typedef short type_16[2];
typedef unsigned short type_17[2];
typedef char type_18[4];
typedef _anon1 type_19[256];
typedef unsigned char type_20[4];
typedef float type_22[1];
typedef float type_23[4];
typedef float type_24[4][4];
typedef int type_25[1];
typedef float type_26[4];
typedef float type_27[20];
typedef void(*type_30)(sfObj*)[3];
typedef float type_31[4];

struct CamMakeView
{
	float WatchPlayerY;
	float ViewOrgAngXY[2];
};

struct CamLineArea
{
	float Pos0XYZ[3];
	float Pos1XYZ[3];
	float Radius;
	float CylinderMode;
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

struct CamLimitView
{
	float LimOfsAngWidthXY[2];
	float LimAngMvRateXY[2];
};

enum EnemyCondition : unsigned char
{
	ENEMY_CONDITION_NOENTRY,
	ENEMY_CONDITION_NORMAL,
	ENEMY_CONDITION_CAUTION,
	ENEMY_CONDITION_CHASE,
	ENEMY_CONDITION_ESCAPE,
	ENEMY_CONDITION_BATTLE,
	ENEMY_CONDITION_SEIZE,
	ENEMY_CONDITION_INVINCIBLE,
	ENEMY_CONDITION_RISE,
	ENEMY_CONDITION_DAMAGE,
	ENEMY_CONDITION_DYING,
	ENEMY_CONDITION_DEAD,
	ENEMY_CONDITION_SPECIAL,
	ENEMY_CONDITION_HIDDEN,
	ENEMY_CONDITION_FULLHIDDEN,
	ENEMY_CONDITION_ANOTHERSCENE,
	ENEMY_CONDITION_ERASE,
	ENEMY_CONDITION_FLAGWAIT,
	ENEMY_CONDITION_EVENT
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

enum EnemyKind : unsigned char
{
	ENEMY_KIND_NOTHING,
	ENEMY_KIND_CELL,
	ENEMY_KIND_MUSH,
	ENEMY_KIND_BUZZ,
	ENEMY_KIND_MM,
	ENEMY_KIND_WALLMAN,
	ENEMY_KIND_WHEEL,
	ENEMY_KIND_JINMEN,
	ENEMY_KIND_TWINS,
	ENEMY_KIND_HIL,
	ENEMY_KIND_HYENA,
	ENEMY_KIND_MULTI,
	ENEMY_KIND_PICKGIRL,
	ENEMY_KIND_FLAMES,
	ENEMY_KIND_FAT,
	ENEMY_KIND_SCRATCH,
	ENEMY_KIND_KILLER,
	ENEMY_KIND_NURSE,
	ENEMY_KIND_SAMPLE,
	ENEMY_KIND_MAX,
	ENEMY_KIND_TEST00 = 0,
	ENEMY_KIND_ALL = 0x13
};

struct ChaseCamWork
{
	int CalcOnlySubCounter;
	float MaxSpdZeroSubTimer;
	float IdialPlayer2CamY;
	float MoveAddCamY;
	float Player2WatchTgtY;
	float AreaViewAng;
	float CamRollAng;
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

struct _anon2
{
	float abcd[4];
};

struct _anon3
{
	float start[4];
	float end[4];
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
ChaseCamWork CcW;
_anon0 player_ext_info[2];
void(*ChaseAdjustCamTgtMoveFunc)(float*, float*, float);
_cam3Work cam3_work;

void jump_camera_behind_player(_anon0* pPlayerIF, CamDriveArea* pArea, unsigned int JumpModeFlag);
void GameCameraChase_SceneInit();
void GameCameraChase_ChangeTypeInit(CamDriveArea* pArea, int Chg1FrameMode);
void Chase_SetPlayer2CamY(float IdialPlayer2CamY, unsigned int UseMoveChgFunc);
void ChaseAdjustCamTgtMoveFunc(float* CamTgtMvVec, float* PreMvCamTgtPos, float MaxMvLen);
void GameCameraChase_Main(CamDriveArea* pArea);
void Chase_makeCamTgtPosByControlCircle(float* RenewalCamTgtPos, float* NowCamTgtPos, CamDriveArea* pArea, float* PlayerPos, float PlayerAngY, float* PlayerMovedSpd, int FightingPoseFlag);
void Chase_makeWatchTgtPos(float* RenewalWatchTgtPos, float* NowCamPos, float* PlayerPos, float PlayerAngY, float* PlayerMovedSpdVec, sfObj* pAimTgtObj, float Player2WatchTgtY, int LookEnemyFlag);
int calc_chk_line_hit_len(float* pLen, _anon2* pPlane, _anon3* pChkLine);
void Chase_makeCamTgtPos_BehindPlayer_WhenJump(float* NewCamTgtPos, float AddPlayerY, _anon0* pPlayerIF);
float view_player2enemy_rate();

// 
// Start address: 0x28df60
void jump_camera_behind_player(_anon0* pPlayerIF, CamDriveArea* pArea, unsigned int JumpModeFlag)
{
	float CamPos_InMvArea[4];
	float CamPos[4];
	float WatchPos[4];
	CamLineArea* pLArea;
	// Line 171, Address: 0x28df60, Func Offset: 0
	// Line 178, Address: 0x28df64, Func Offset: 0x4
	// Line 171, Address: 0x28df68, Func Offset: 0x8
	// Line 178, Address: 0x28df80, Func Offset: 0x20
	// Line 186, Address: 0x28df94, Func Offset: 0x34
	// Line 187, Address: 0x28df9c, Func Offset: 0x3c
	// Line 188, Address: 0x28dfa4, Func Offset: 0x44
	// Line 189, Address: 0x28dfb0, Func Offset: 0x50
	// Line 190, Address: 0x28dfb4, Func Offset: 0x54
	// Line 194, Address: 0x28dfe4, Func Offset: 0x84
	// Line 196, Address: 0x28dfe8, Func Offset: 0x88
	// Line 207, Address: 0x28e01c, Func Offset: 0xbc
	// Line 196, Address: 0x28e020, Func Offset: 0xc0
	// Line 207, Address: 0x28e024, Func Offset: 0xc4
	// Line 211, Address: 0x28e02c, Func Offset: 0xcc
	// Line 215, Address: 0x28e038, Func Offset: 0xd8
	// Func End, Address: 0x28e050, Func Offset: 0xf0
}

// 
// Start address: 0x28e050
void GameCameraChase_SceneInit()
{
	// Line 222, Address: 0x28e050, Func Offset: 0
	// Line 223, Address: 0x28e054, Func Offset: 0x4
	// Line 222, Address: 0x28e058, Func Offset: 0x8
	// Line 223, Address: 0x28e05c, Func Offset: 0xc
	// Line 226, Address: 0x28e06c, Func Offset: 0x1c
	// Line 227, Address: 0x28e07c, Func Offset: 0x2c
	// Line 228, Address: 0x28e084, Func Offset: 0x34
	// Line 230, Address: 0x28e094, Func Offset: 0x44
	// Line 231, Address: 0x28e0a8, Func Offset: 0x58
	// Line 233, Address: 0x28e0b8, Func Offset: 0x68
	// Line 234, Address: 0x28e0c8, Func Offset: 0x78
	// Func End, Address: 0x28e0d4, Func Offset: 0x84
}

// 
// Start address: 0x28e0e0
void GameCameraChase_ChangeTypeInit(CamDriveArea* pArea, int Chg1FrameMode)
{
	// Line 241, Address: 0x28e0e0, Func Offset: 0
	// Line 242, Address: 0x28e0f4, Func Offset: 0x14
	// Line 243, Address: 0x28e0fc, Func Offset: 0x1c
	// Line 244, Address: 0x28e100, Func Offset: 0x20
	// Line 243, Address: 0x28e104, Func Offset: 0x24
	// Line 244, Address: 0x28e10c, Func Offset: 0x2c
	// Line 245, Address: 0x28e11c, Func Offset: 0x3c
	// Line 246, Address: 0x28e128, Func Offset: 0x48
	// Line 247, Address: 0x28e134, Func Offset: 0x54
	// Line 248, Address: 0x28e13c, Func Offset: 0x5c
	// Line 251, Address: 0x28e148, Func Offset: 0x68
	// Line 253, Address: 0x28e154, Func Offset: 0x74
	// Line 254, Address: 0x28e160, Func Offset: 0x80
	// Line 253, Address: 0x28e164, Func Offset: 0x84
	// Line 254, Address: 0x28e170, Func Offset: 0x90
	// Line 253, Address: 0x28e17c, Func Offset: 0x9c
	// Line 254, Address: 0x28e188, Func Offset: 0xa8
	// Line 260, Address: 0x28e190, Func Offset: 0xb0
	// Func End, Address: 0x28e1a4, Func Offset: 0xc4
}

// 
// Start address: 0x28e1b0
void Chase_SetPlayer2CamY(float IdialPlayer2CamY, unsigned int UseMoveChgFunc)
{
	// Line 274, Address: 0x28e1b0, Func Offset: 0
	// Line 275, Address: 0x28e1b4, Func Offset: 0x4
	// Line 276, Address: 0x28e1bc, Func Offset: 0xc
	// Line 277, Address: 0x28e1d4, Func Offset: 0x24
	// Line 278, Address: 0x28e1e0, Func Offset: 0x30
	// Line 280, Address: 0x28e1e8, Func Offset: 0x38
	// Func End, Address: 0x28e1f0, Func Offset: 0x40
}

// 
// Start address: 0x28e1f0
void ChaseAdjustCamTgtMoveFunc(float* CamTgtMvVec, float* PreMvCamTgtPos, float MaxMvLen)
{
	float MovedPos[4];
	float AdjMvVec[4];
	float len;
	// Line 290, Address: 0x28e1f0, Func Offset: 0
	// Line 294, Address: 0x28e1f8, Func Offset: 0x8
	// Line 290, Address: 0x28e1fc, Func Offset: 0xc
	// Line 294, Address: 0x28e20c, Func Offset: 0x1c
	// Line 296, Address: 0x28e220, Func Offset: 0x30
	// Line 299, Address: 0x28e234, Func Offset: 0x44
	// Line 300, Address: 0x28e24c, Func Offset: 0x5c
	// Line 301, Address: 0x28e274, Func Offset: 0x84
	// Line 302, Address: 0x28e280, Func Offset: 0x90
	// Line 305, Address: 0x28e2a0, Func Offset: 0xb0
	// Func End, Address: 0x28e2b4, Func Offset: 0xc4
}

// 
// Start address: 0x28e2c0
void GameCameraChase_Main(CamDriveArea* pArea)
{
	_anon0* pPlayerIF;
	float dt;
	float NowCamPos[4];
	float NowCamTgtPos[4];
	float SetCamTgtPos[4];
	float SetWatchTgtPos[4];
	float CamMatPtr[4];
	float Player2WatchTgtY;
	float Vec[4];
	int JumpCameraTrigger;
	int TrampleEnemyFlag;
	CamMakeView* pMkView;
	CamLineArea* pLArea;
	float FloorKeepDist;
	float ViewAngRate;
	int FightingPoseFlag;
	float side_ang;
	float up_ang;
	float CamSpdVal;
	float ToPlayerDist;
	float ToPlayerSpdDot;
	float CamSpd[4];
	float NearPlayerFwdMul;
	float Dist;
	float DotVal;
	// Line 314, Address: 0x28e2c0, Func Offset: 0
	// Line 315, Address: 0x28e2dc, Func Offset: 0x1c
	// Line 314, Address: 0x28e2e0, Func Offset: 0x20
	// Line 315, Address: 0x28e2e4, Func Offset: 0x24
	// Line 314, Address: 0x28e2e8, Func Offset: 0x28
	// Line 316, Address: 0x28e2f4, Func Offset: 0x34
	// Line 327, Address: 0x28e2fc, Func Offset: 0x3c
	// Line 324, Address: 0x28e304, Func Offset: 0x44
	// Line 327, Address: 0x28e308, Func Offset: 0x48
	// Line 335, Address: 0x28e338, Func Offset: 0x78
	// Line 337, Address: 0x28e340, Func Offset: 0x80
	// Line 336, Address: 0x28e344, Func Offset: 0x84
	// Line 337, Address: 0x28e348, Func Offset: 0x88
	// Line 338, Address: 0x28e350, Func Offset: 0x90
	// Line 339, Address: 0x28e364, Func Offset: 0xa4
	// Line 340, Address: 0x28e374, Func Offset: 0xb4
	// Line 341, Address: 0x28e37c, Func Offset: 0xbc
	// Line 344, Address: 0x28e388, Func Offset: 0xc8
	// Line 343, Address: 0x28e38c, Func Offset: 0xcc
	// Line 344, Address: 0x28e390, Func Offset: 0xd0
	// Line 345, Address: 0x28e398, Func Offset: 0xd8
	// Line 346, Address: 0x28e3ac, Func Offset: 0xec
	// Line 347, Address: 0x28e3bc, Func Offset: 0xfc
	// Line 351, Address: 0x28e3c8, Func Offset: 0x108
	// Line 356, Address: 0x28e3ec, Func Offset: 0x12c
	// Line 358, Address: 0x28e41c, Func Offset: 0x15c
	// Line 360, Address: 0x28e420, Func Offset: 0x160
	// Line 361, Address: 0x28e428, Func Offset: 0x168
	// Line 362, Address: 0x28e430, Func Offset: 0x170
	// Line 363, Address: 0x28e438, Func Offset: 0x178
	// Line 368, Address: 0x28e440, Func Offset: 0x180
	// Line 374, Address: 0x28e454, Func Offset: 0x194
	// Line 377, Address: 0x28e45c, Func Offset: 0x19c
	// Line 376, Address: 0x28e460, Func Offset: 0x1a0
	// Line 377, Address: 0x28e464, Func Offset: 0x1a4
	// Line 382, Address: 0x28e490, Func Offset: 0x1d0
	// Line 384, Address: 0x28e4a0, Func Offset: 0x1e0
	// Line 394, Address: 0x28e4a8, Func Offset: 0x1e8
	// Line 395, Address: 0x28e4b0, Func Offset: 0x1f0
	// Line 401, Address: 0x28e4b8, Func Offset: 0x1f8
	// Line 402, Address: 0x28e4c0, Func Offset: 0x200
	// Line 408, Address: 0x28e4d0, Func Offset: 0x210
	// Line 410, Address: 0x28e4dc, Func Offset: 0x21c
	// Line 412, Address: 0x28e4e4, Func Offset: 0x224
	// Line 421, Address: 0x28e504, Func Offset: 0x244
	// Line 422, Address: 0x28e510, Func Offset: 0x250
	// Line 427, Address: 0x28e520, Func Offset: 0x260
	// Line 440, Address: 0x28e564, Func Offset: 0x2a4
	// Line 441, Address: 0x28e570, Func Offset: 0x2b0
	// Line 440, Address: 0x28e574, Func Offset: 0x2b4
	// Line 441, Address: 0x28e57c, Func Offset: 0x2bc
	// Line 442, Address: 0x28e588, Func Offset: 0x2c8
	// Line 441, Address: 0x28e58c, Func Offset: 0x2cc
	// Line 442, Address: 0x28e598, Func Offset: 0x2d8
	// Line 452, Address: 0x28e5ac, Func Offset: 0x2ec
	// Line 453, Address: 0x28e5b4, Func Offset: 0x2f4
	// Line 459, Address: 0x28e5c0, Func Offset: 0x300
	// Line 461, Address: 0x28e5c8, Func Offset: 0x308
	// Line 465, Address: 0x28e5d4, Func Offset: 0x314
	// Line 477, Address: 0x28e5e4, Func Offset: 0x324
	// Line 478, Address: 0x28e5ec, Func Offset: 0x32c
	// Line 479, Address: 0x28e610, Func Offset: 0x350
	// Line 480, Address: 0x28e62c, Func Offset: 0x36c
	// Line 481, Address: 0x28e650, Func Offset: 0x390
	// Line 484, Address: 0x28e674, Func Offset: 0x3b4
	// Line 489, Address: 0x28e6f0, Func Offset: 0x430
	// Line 490, Address: 0x28e6fc, Func Offset: 0x43c
	// Line 491, Address: 0x28e708, Func Offset: 0x448
	// Line 492, Address: 0x28e718, Func Offset: 0x458
	// Line 491, Address: 0x28e720, Func Offset: 0x460
	// Line 492, Address: 0x28e728, Func Offset: 0x468
	// Line 493, Address: 0x28e734, Func Offset: 0x474
	// Line 495, Address: 0x28e73c, Func Offset: 0x47c
	// Line 497, Address: 0x28e740, Func Offset: 0x480
	// Line 498, Address: 0x28e75c, Func Offset: 0x49c
	// Line 499, Address: 0x28e764, Func Offset: 0x4a4
	// Line 500, Address: 0x28e770, Func Offset: 0x4b0
	// Line 506, Address: 0x28e780, Func Offset: 0x4c0
	// Line 512, Address: 0x28e788, Func Offset: 0x4c8
	// Line 513, Address: 0x28e7a4, Func Offset: 0x4e4
	// Line 514, Address: 0x28e7c8, Func Offset: 0x508
	// Line 515, Address: 0x28e7f8, Func Offset: 0x538
	// Line 516, Address: 0x28e814, Func Offset: 0x554
	// Line 517, Address: 0x28e81c, Func Offset: 0x55c
	// Line 515, Address: 0x28e824, Func Offset: 0x564
	// Line 517, Address: 0x28e828, Func Offset: 0x568
	// Line 515, Address: 0x28e82c, Func Offset: 0x56c
	// Line 516, Address: 0x28e830, Func Offset: 0x570
	// Line 517, Address: 0x28e838, Func Offset: 0x578
	// Line 518, Address: 0x28e860, Func Offset: 0x5a0
	// Line 520, Address: 0x28e870, Func Offset: 0x5b0
	// Line 524, Address: 0x28e880, Func Offset: 0x5c0
	// Line 527, Address: 0x28e888, Func Offset: 0x5c8
	// Line 529, Address: 0x28e898, Func Offset: 0x5d8
	// Line 528, Address: 0x28e8a0, Func Offset: 0x5e0
	// Line 530, Address: 0x28e8a4, Func Offset: 0x5e4
	// Line 531, Address: 0x28e8ac, Func Offset: 0x5ec
	// Line 534, Address: 0x28e8b0, Func Offset: 0x5f0
	// Line 536, Address: 0x28e8b8, Func Offset: 0x5f8
	// Func End, Address: 0x28e8e8, Func Offset: 0x628
}

// 
// Start address: 0x28e8f0
void Chase_makeCamTgtPosByControlCircle(float* RenewalCamTgtPos, float* NowCamTgtPos, CamDriveArea* pArea, float* PlayerPos, float PlayerAngY, float* PlayerMovedSpd, int FightingPoseFlag)
{
	float ControlSpd[4];
	float radius;
	float fwd_ofs;
	float CamMaxSpd;
	float NowCamSpd[4];
	float MvVec[4];
	float CntpetleCirclePos[4];
	float CntfugalCirclePos[4];
	float CTgt2PAng;
	float CntpetleOfsAng;
	float DistRate;
	// Line 580, Address: 0x28e8f0, Func Offset: 0
	// Line 587, Address: 0x28e930, Func Offset: 0x40
	// Line 589, Address: 0x28e938, Func Offset: 0x48
	// Line 590, Address: 0x28e93c, Func Offset: 0x4c
	// Line 591, Address: 0x28e948, Func Offset: 0x58
	// Line 592, Address: 0x28e950, Func Offset: 0x60
	// Line 595, Address: 0x28e958, Func Offset: 0x68
	// Line 596, Address: 0x28e96c, Func Offset: 0x7c
	// Line 597, Address: 0x28e970, Func Offset: 0x80
	// Line 601, Address: 0x28e978, Func Offset: 0x88
	// Line 607, Address: 0x28e980, Func Offset: 0x90
	// Line 610, Address: 0x28e988, Func Offset: 0x98
	// Line 615, Address: 0x28e994, Func Offset: 0xa4
	// Line 616, Address: 0x28e9b0, Func Offset: 0xc0
	// Line 617, Address: 0x28e9b8, Func Offset: 0xc8
	// Line 619, Address: 0x28e9dc, Func Offset: 0xec
	// Line 620, Address: 0x28e9e8, Func Offset: 0xf8
	// Line 619, Address: 0x28e9ec, Func Offset: 0xfc
	// Line 620, Address: 0x28e9f8, Func Offset: 0x108
	// Line 621, Address: 0x28ea00, Func Offset: 0x110
	// Line 619, Address: 0x28ea04, Func Offset: 0x114
	// Line 620, Address: 0x28ea08, Func Offset: 0x118
	// Line 621, Address: 0x28ea0c, Func Offset: 0x11c
	// Line 624, Address: 0x28ea18, Func Offset: 0x128
	// Line 621, Address: 0x28ea1c, Func Offset: 0x12c
	// Line 624, Address: 0x28ea2c, Func Offset: 0x13c
	// Line 625, Address: 0x28ea34, Func Offset: 0x144
	// Line 626, Address: 0x28ea40, Func Offset: 0x150
	// Line 625, Address: 0x28ea44, Func Offset: 0x154
	// Line 626, Address: 0x28ea48, Func Offset: 0x158
	// Line 627, Address: 0x28ea50, Func Offset: 0x160
	// Line 625, Address: 0x28ea54, Func Offset: 0x164
	// Line 626, Address: 0x28ea58, Func Offset: 0x168
	// Line 625, Address: 0x28ea5c, Func Offset: 0x16c
	// Line 627, Address: 0x28ea60, Func Offset: 0x170
	// Line 629, Address: 0x28ea6c, Func Offset: 0x17c
	// Line 627, Address: 0x28ea8c, Func Offset: 0x19c
	// Line 629, Address: 0x28ea90, Func Offset: 0x1a0
	// Line 627, Address: 0x28eaa0, Func Offset: 0x1b0
	// Line 629, Address: 0x28eaa4, Func Offset: 0x1b4
	// Line 643, Address: 0x28eaac, Func Offset: 0x1bc
	// Line 644, Address: 0x28ead8, Func Offset: 0x1e8
	// Line 646, Address: 0x28eaf0, Func Offset: 0x200
	// Func End, Address: 0x28eb20, Func Offset: 0x230
}

// 
// Start address: 0x28eb20
void Chase_makeWatchTgtPos(float* RenewalWatchTgtPos, float* NowCamPos, float* PlayerPos, float PlayerAngY, float* PlayerMovedSpdVec, sfObj* pAimTgtObj, float Player2WatchTgtY, int LookEnemyFlag)
{
	float LookFwdDist;
	float PlayerWatchPos[4];
	float TgtEnPos[4];
	float P2TgtEnVec[4];
	float TgtEnDist;
	float Vec[4];
	float P2ERate;
	float Cam2PlayerXZDist;
	float PlayerSpdVal;
	float Cam2PlayerVec[4];
	float TooNearRate;
	float LookFwdAngY;
	float LookFwdDist;
	float Cam2PlayerAngY;
	float DiffAngY;
	// Line 661, Address: 0x28eb20, Func Offset: 0
	// Line 664, Address: 0x28eb4c, Func Offset: 0x2c
	// Line 667, Address: 0x28eb54, Func Offset: 0x34
	// Line 668, Address: 0x28eb5c, Func Offset: 0x3c
	// Line 669, Address: 0x28eb64, Func Offset: 0x44
	// Line 670, Address: 0x28eb7c, Func Offset: 0x5c
	// Line 671, Address: 0x28eb80, Func Offset: 0x60
	// Line 670, Address: 0x28eb84, Func Offset: 0x64
	// Line 671, Address: 0x28eb88, Func Offset: 0x68
	// Line 672, Address: 0x28eb9c, Func Offset: 0x7c
	// Line 679, Address: 0x28eba8, Func Offset: 0x88
	// Line 683, Address: 0x28ebb4, Func Offset: 0x94
	// Line 680, Address: 0x28ebb8, Func Offset: 0x98
	// Line 683, Address: 0x28ebbc, Func Offset: 0x9c
	// Line 680, Address: 0x28ebc0, Func Offset: 0xa0
	// Line 683, Address: 0x28ebc4, Func Offset: 0xa4
	// Line 684, Address: 0x28ebcc, Func Offset: 0xac
	// Line 687, Address: 0x28ebd8, Func Offset: 0xb8
	// Line 684, Address: 0x28ebdc, Func Offset: 0xbc
	// Line 687, Address: 0x28ebe0, Func Offset: 0xc0
	// Line 684, Address: 0x28ebe8, Func Offset: 0xc8
	// Line 687, Address: 0x28ebf0, Func Offset: 0xd0
	// Line 688, Address: 0x28ec00, Func Offset: 0xe0
	// Line 693, Address: 0x28ec24, Func Offset: 0x104
	// Line 694, Address: 0x28ec2c, Func Offset: 0x10c
	// Line 695, Address: 0x28ec50, Func Offset: 0x130
	// Line 715, Address: 0x28ec68, Func Offset: 0x148
	// Line 721, Address: 0x28ec70, Func Offset: 0x150
	// Line 724, Address: 0x28ec90, Func Offset: 0x170
	// Line 725, Address: 0x28eca8, Func Offset: 0x188
	// Line 726, Address: 0x28ecac, Func Offset: 0x18c
	// Line 725, Address: 0x28ecb0, Func Offset: 0x190
	// Line 726, Address: 0x28ecb4, Func Offset: 0x194
	// Line 729, Address: 0x28ecd4, Func Offset: 0x1b4
	// Line 728, Address: 0x28ecd8, Func Offset: 0x1b8
	// Line 727, Address: 0x28ecdc, Func Offset: 0x1bc
	// Line 729, Address: 0x28ece0, Func Offset: 0x1c0
	// Line 728, Address: 0x28ece4, Func Offset: 0x1c4
	// Line 727, Address: 0x28ece8, Func Offset: 0x1c8
	// Line 729, Address: 0x28ecf0, Func Offset: 0x1d0
	// Line 731, Address: 0x28ecf8, Func Offset: 0x1d8
	// Line 732, Address: 0x28ed14, Func Offset: 0x1f4
	// Line 733, Address: 0x28ed34, Func Offset: 0x214
	// Line 737, Address: 0x28ed40, Func Offset: 0x220
	// Line 738, Address: 0x28ed4c, Func Offset: 0x22c
	// Line 740, Address: 0x28ed6c, Func Offset: 0x24c
	// Line 741, Address: 0x28ed74, Func Offset: 0x254
	// Line 740, Address: 0x28ed78, Func Offset: 0x258
	// Line 741, Address: 0x28ed88, Func Offset: 0x268
	// Line 743, Address: 0x28ed98, Func Offset: 0x278
	// Line 745, Address: 0x28edb0, Func Offset: 0x290
	// Line 746, Address: 0x28edb4, Func Offset: 0x294
	// Line 748, Address: 0x28edd8, Func Offset: 0x2b8
	// Line 752, Address: 0x28edf0, Func Offset: 0x2d0
	// Line 751, Address: 0x28edf4, Func Offset: 0x2d4
	// Line 752, Address: 0x28edf8, Func Offset: 0x2d8
	// Line 751, Address: 0x28ee00, Func Offset: 0x2e0
	// Line 752, Address: 0x28ee04, Func Offset: 0x2e4
	// Line 754, Address: 0x28ee08, Func Offset: 0x2e8
	// Line 755, Address: 0x28ee1c, Func Offset: 0x2fc
	// Line 757, Address: 0x28ee30, Func Offset: 0x310
	// Line 755, Address: 0x28ee34, Func Offset: 0x314
	// Line 757, Address: 0x28ee38, Func Offset: 0x318
	// Line 758, Address: 0x28ee54, Func Offset: 0x334
	// Line 761, Address: 0x28ee78, Func Offset: 0x358
	// Func End, Address: 0x28ee9c, Func Offset: 0x37c
}

// 
// Start address: 0x28eea0
int calc_chk_line_hit_len(float* pLen, _anon2* pPlane, _anon3* pChkLine)
{
	int HitFlag;
	int OkFlag;
	// Line 807, Address: 0x28eea0, Func Offset: 0
	// Line 809, Address: 0x28eec4, Func Offset: 0x24
	// Line 810, Address: 0x28eed0, Func Offset: 0x30
	// Line 811, Address: 0x28eed8, Func Offset: 0x38
	// Line 812, Address: 0x28eedc, Func Offset: 0x3c
	// Line 814, Address: 0x28eee8, Func Offset: 0x48
	// Line 816, Address: 0x28eef8, Func Offset: 0x58
	// Line 818, Address: 0x28ef08, Func Offset: 0x68
	// Line 819, Address: 0x28ef0c, Func Offset: 0x6c
	// Func End, Address: 0x28ef28, Func Offset: 0x88
}

// 
// Start address: 0x28ef30
void Chase_makeCamTgtPos_BehindPlayer_WhenJump(float* NewCamTgtPos, float AddPlayerY, _anon0* pPlayerIF)
{
	_anon3 ChkLine;
	float ForwdSinVal;
	float ForwdCosVal;
	int BackHitFlag;
	float BackHitLen;
	float RightHitLen;
	float LeftHitLen;
	_anon2 BackHitPlane;
	_anon2 DummyPlane;
	float BackDistFromPlayer;
	float RightDistFromPlayer;
	int AdjedFlag;
	float AdjBackVec[4];
	float AddDist;
	float MinSideLen;
	float AdjBackLen;
	int AdjBackHitFlag;
	float Rate;
	// Line 831, Address: 0x28ef30, Func Offset: 0
	// Line 833, Address: 0x28ef58, Func Offset: 0x28
	// Line 834, Address: 0x28ef64, Func Offset: 0x34
	// Line 844, Address: 0x28ef74, Func Offset: 0x44
	// Line 853, Address: 0x28ef80, Func Offset: 0x50
	// Line 850, Address: 0x28ef84, Func Offset: 0x54
	// Line 853, Address: 0x28ef88, Func Offset: 0x58
	// Line 850, Address: 0x28ef8c, Func Offset: 0x5c
	// Line 846, Address: 0x28ef90, Func Offset: 0x60
	// Line 850, Address: 0x28ef94, Func Offset: 0x64
	// Line 845, Address: 0x28efa0, Func Offset: 0x70
	// Line 850, Address: 0x28efa4, Func Offset: 0x74
	// Line 852, Address: 0x28efa8, Func Offset: 0x78
	// Line 845, Address: 0x28efb0, Func Offset: 0x80
	// Line 852, Address: 0x28efb4, Func Offset: 0x84
	// Line 851, Address: 0x28efb8, Func Offset: 0x88
	// Line 845, Address: 0x28efbc, Func Offset: 0x8c
	// Line 851, Address: 0x28efc0, Func Offset: 0x90
	// Line 853, Address: 0x28efc4, Func Offset: 0x94
	// Line 857, Address: 0x28efcc, Func Offset: 0x9c
	// Line 860, Address: 0x28efd0, Func Offset: 0xa0
	// Line 857, Address: 0x28efd4, Func Offset: 0xa4
	// Line 860, Address: 0x28efd8, Func Offset: 0xa8
	// Line 858, Address: 0x28efdc, Func Offset: 0xac
	// Line 860, Address: 0x28efe0, Func Offset: 0xb0
	// Line 857, Address: 0x28efe4, Func Offset: 0xb4
	// Line 858, Address: 0x28efec, Func Offset: 0xbc
	// Line 857, Address: 0x28eff0, Func Offset: 0xc0
	// Line 859, Address: 0x28eff8, Func Offset: 0xc8
	// Line 860, Address: 0x28f004, Func Offset: 0xd4
	// Line 863, Address: 0x28f00c, Func Offset: 0xdc
	// Line 866, Address: 0x28f010, Func Offset: 0xe0
	// Line 863, Address: 0x28f014, Func Offset: 0xe4
	// Line 866, Address: 0x28f018, Func Offset: 0xe8
	// Line 864, Address: 0x28f01c, Func Offset: 0xec
	// Line 866, Address: 0x28f020, Func Offset: 0xf0
	// Line 863, Address: 0x28f024, Func Offset: 0xf4
	// Line 864, Address: 0x28f02c, Func Offset: 0xfc
	// Line 863, Address: 0x28f030, Func Offset: 0x100
	// Line 865, Address: 0x28f038, Func Offset: 0x108
	// Line 866, Address: 0x28f044, Func Offset: 0x114
	// Line 876, Address: 0x28f04c, Func Offset: 0x11c
	// Line 882, Address: 0x28f078, Func Offset: 0x148
	// Line 884, Address: 0x28f08c, Func Offset: 0x15c
	// Line 885, Address: 0x28f098, Func Offset: 0x168
	// Line 886, Address: 0x28f09c, Func Offset: 0x16c
	// Line 887, Address: 0x28f0a0, Func Offset: 0x170
	// Line 888, Address: 0x28f0a8, Func Offset: 0x178
	// Line 887, Address: 0x28f0ac, Func Offset: 0x17c
	// Line 888, Address: 0x28f0cc, Func Offset: 0x19c
	// Line 889, Address: 0x28f0e0, Func Offset: 0x1b0
	// Line 890, Address: 0x28f0e4, Func Offset: 0x1b4
	// Line 889, Address: 0x28f0e8, Func Offset: 0x1b8
	// Line 890, Address: 0x28f0ec, Func Offset: 0x1bc
	// Line 889, Address: 0x28f0f0, Func Offset: 0x1c0
	// Line 890, Address: 0x28f0f4, Func Offset: 0x1c4
	// Line 891, Address: 0x28f104, Func Offset: 0x1d4
	// Line 892, Address: 0x28f110, Func Offset: 0x1e0
	// Line 893, Address: 0x28f118, Func Offset: 0x1e8
	// Line 894, Address: 0x28f11c, Func Offset: 0x1ec
	// Line 901, Address: 0x28f120, Func Offset: 0x1f0
	// Line 900, Address: 0x28f124, Func Offset: 0x1f4
	// Line 903, Address: 0x28f128, Func Offset: 0x1f8
	// Line 900, Address: 0x28f12c, Func Offset: 0x1fc
	// Line 903, Address: 0x28f130, Func Offset: 0x200
	// Line 900, Address: 0x28f134, Func Offset: 0x204
	// Line 903, Address: 0x28f138, Func Offset: 0x208
	// Line 900, Address: 0x28f13c, Func Offset: 0x20c
	// Line 902, Address: 0x28f140, Func Offset: 0x210
	// Line 903, Address: 0x28f150, Func Offset: 0x220
	// Line 905, Address: 0x28f164, Func Offset: 0x234
	// Line 907, Address: 0x28f174, Func Offset: 0x244
	// Line 910, Address: 0x28f17c, Func Offset: 0x24c
	// Line 911, Address: 0x28f1a8, Func Offset: 0x278
	// Line 913, Address: 0x28f1ac, Func Offset: 0x27c
	// Line 914, Address: 0x28f1b8, Func Offset: 0x288
	// Line 916, Address: 0x28f1c0, Func Offset: 0x290
	// Line 917, Address: 0x28f1c8, Func Offset: 0x298
	// Line 916, Address: 0x28f1cc, Func Offset: 0x29c
	// Line 917, Address: 0x28f1d0, Func Offset: 0x2a0
	// Line 916, Address: 0x28f1d4, Func Offset: 0x2a4
	// Line 917, Address: 0x28f1d8, Func Offset: 0x2a8
	// Line 920, Address: 0x28f1f4, Func Offset: 0x2c4
	// Line 921, Address: 0x28f200, Func Offset: 0x2d0
	// Line 923, Address: 0x28f218, Func Offset: 0x2e8
	// Func End, Address: 0x28f23c, Func Offset: 0x30c
}

// 
// Start address: 0x28f240
float view_player2enemy_rate()
{
	GameItem item_kind;
	// Line 1004, Address: 0x28f240, Func Offset: 0
	// Line 1006, Address: 0x28f248, Func Offset: 0x8
	// Line 1009, Address: 0x28f26c, Func Offset: 0x2c
	// Line 1010, Address: 0x28f270, Func Offset: 0x30
	// Line 1014, Address: 0x28f27c, Func Offset: 0x3c
	// Line 1015, Address: 0x28f280, Func Offset: 0x40
	// Line 1054, Address: 0x28f290, Func Offset: 0x50
	// Line 1056, Address: 0x28f2a0, Func Offset: 0x60
	// Func End, Address: 0x28f2a8, Func Offset: 0x68
}

