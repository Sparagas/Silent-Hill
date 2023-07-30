typedef struct _anon0;
typedef struct _anon1;
typedef struct SmokeRisingCmnData;
typedef struct sfObj;
typedef union _anon2;
typedef struct SmokeRisingPtcl;
typedef struct PtclOrgData;
typedef enum GameItem : unsigned char;
typedef union _anon3;
typedef struct AirAttractArea;
typedef struct AirData;
typedef struct AirFlowArea;
typedef enum _cam3Step : unsigned char;
typedef struct BurntHouse_SmokePosData;
typedef struct _cam3Work;
typedef enum PlayerExtStatus : unsigned char;

typedef void(*type_16)(sfObj*);
typedef void(*type_23)();
typedef void(*type_27)(sfObj*);
typedef void(*type_32)(void*, PtclOrgData*, void*);
typedef void(*type_36)(sfObj*);
typedef void(*type_41)(void*, int, PtclOrgData*, void*);
typedef void(*type_42)(void*, int, PtclOrgData*, void*);

typedef int type_0[4];
typedef AirAttractArea type_1[2];
typedef unsigned int type_2[4];
typedef void* type_3[4];
typedef short type_4[8];
typedef unsigned short type_5[8];
typedef char type_6[16];
typedef unsigned char type_7[16];
typedef float type_8[4];
typedef float type_9[1];
typedef int type_10[1];
typedef long type_11[1];
typedef float type_12[4];
typedef _anon0 type_13[2];
typedef _anon3 type_14[256];
typedef float type_15[4][4];
typedef float type_17[4][4];
typedef AirFlowArea type_18[1];
typedef float type_19[3];
typedef float type_20[4];
typedef AirFlowArea type_21[1];
typedef float type_22[2];
typedef void(*type_24)()[2];
typedef float type_25[3];
typedef float type_26[3];
typedef unsigned char type_28[4];
typedef float type_29[4];
typedef float type_30[4][4];
typedef BurntHouse_SmokePosData type_31[24];
typedef short type_33[2];
typedef unsigned short type_34[2];
typedef char type_35[4];
typedef unsigned char type_37[4];
typedef void(*type_38)(sfObj*)[3];
typedef float type_39[1];
typedef int type_40[1];
typedef AirAttractArea type_43[1];
typedef long type_44[2];
typedef unsigned long type_45[2];

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

struct SmokeRisingCmnData
{
	float CeilingY;
	float CeilingAffectDist;
	unsigned char RGBA[4];
	float AccelY;
	float AverageXZDiameter;
	float AverageHeight;
	float PressRate;
	float DiffPressAdjRate;
	float MaxLifeTime;
	AirData* pAirData;
	float AirOfsVec[4];
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

struct SmokeRisingPtcl
{
	float Pos[4];
	float Spd[4];
	short Step;
	float Timer;
	float XZDiameter;
	float Height;
	float LifeTime;
	float RotAng;
	float PressRate;
	int RandVal;
};

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

struct AirAttractArea
{
	float Pos[3];
	float EffRange;
	float AttVal;
	float PalsAng;
	float pad[2];
};

struct AirData
{
	AirAttractArea* AttractAry;
	int AttractNum;
	AirFlowArea* FlowAry;
	int FlowNum;
};

struct AirFlowArea
{
	float Pos[3];
	float EffRange;
	float AccelVec[3];
	float PalsAng;
};

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
};

struct BurntHouse_SmokePosData
{
	float Pos[4];
	float SmokeWidth;
	float GenDirAngY;
	int LifeTime;
	float IntervalTime;
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
AirAttractArea SmokeFromSpaceDoor_AttractAry[2];
AirFlowArea SmokeFromSpaceDoor_FlowAry[1];
AirData SmokeFromSpaceDoor_AirData;
_anon0 player_ext_info[2];
float sg_vector_zero[4];
BurntHouse_SmokePosData SmokePosData_fr23[24];
AirAttractArea AirAttractData_fr23[1];
AirFlowArea AirFlowData_fr23[1];
AirData AirData_fr23;
float sg_vector_unit_y[4];
float sg_vector_unit_z[4];
void(*SmokeRisingPtcl_Draw)(void*, int, PtclOrgData*, void*);
void(*SmokeRisingPtcl_Calc)(void*, int, PtclOrgData*, void*);
void(*Generate_OnePtcl)(void*, PtclOrgData*, void*);
float sg_matrix_unit[4][4];
_cam3Work cam3_work;

void SmokeRising_FromSpaceDoor(float* GenLinePos1, float* GenLinePos2, float CeilingY);
void SmokeRising_FromBurntHouse_fr23();
void SmokeRising_FromRichard_bd15(float* OrgPos, float OrgZWidth, float SmokeWidth, int AlphaVal, unsigned int DemoFlag);
void SmokeRisingParticle_Make(PtclOrgData* pOrgDt, SmokeRisingCmnData* pCmnDt);
void Generate_OnePtcl(void* PtclAdr, PtclOrgData* pOrgDt, void* pHeadCmn);
void SmokeRisingPtcl_Calc(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn);
void SmokeRisingPtcl_Draw(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn);
_anon2* Make_SmokeRising_Packet(_anon2* pPk, SmokeRisingPtcl* pPtcl, SmokeRisingCmnData* pCmnDt, float Lcl2ScrMat[4]);

// 
// Start address: 0x2e49d0
void SmokeRising_FromSpaceDoor(float* GenLinePos1, float* GenLinePos2, float CeilingY)
{
	PtclOrgData OrgDt;
	SmokeRisingCmnData CmnDt;
	int LoopNo;
	float Vec1[4];
	// Line 229, Address: 0x2e49d0, Func Offset: 0
	// Line 233, Address: 0x2e49d8, Func Offset: 0x8
	// Line 229, Address: 0x2e49dc, Func Offset: 0xc
	// Line 233, Address: 0x2e49e4, Func Offset: 0x14
	// Line 234, Address: 0x2e49ec, Func Offset: 0x1c
	// Line 236, Address: 0x2e49f0, Func Offset: 0x20
	// Line 234, Address: 0x2e49f4, Func Offset: 0x24
	// Line 236, Address: 0x2e49f8, Func Offset: 0x28
	// Line 237, Address: 0x2e4a08, Func Offset: 0x38
	// Line 241, Address: 0x2e4a1c, Func Offset: 0x4c
	// Line 238, Address: 0x2e4a20, Func Offset: 0x50
	// Line 242, Address: 0x2e4a24, Func Offset: 0x54
	// Line 238, Address: 0x2e4a28, Func Offset: 0x58
	// Line 242, Address: 0x2e4a2c, Func Offset: 0x5c
	// Line 244, Address: 0x2e4a30, Func Offset: 0x60
	// Line 241, Address: 0x2e4a34, Func Offset: 0x64
	// Line 244, Address: 0x2e4a38, Func Offset: 0x68
	// Line 243, Address: 0x2e4a3c, Func Offset: 0x6c
	// Line 247, Address: 0x2e4a40, Func Offset: 0x70
	// Line 245, Address: 0x2e4a44, Func Offset: 0x74
	// Line 247, Address: 0x2e4a48, Func Offset: 0x78
	// Line 248, Address: 0x2e4a4c, Func Offset: 0x7c
	// Line 249, Address: 0x2e4a54, Func Offset: 0x84
	// Line 238, Address: 0x2e4a58, Func Offset: 0x88
	// Line 241, Address: 0x2e4a5c, Func Offset: 0x8c
	// Line 255, Address: 0x2e4a60, Func Offset: 0x90
	// Line 240, Address: 0x2e4a64, Func Offset: 0x94
	// Line 255, Address: 0x2e4a68, Func Offset: 0x98
	// Line 256, Address: 0x2e4a70, Func Offset: 0xa0
	// Line 257, Address: 0x2e4a74, Func Offset: 0xa4
	// Line 238, Address: 0x2e4a78, Func Offset: 0xa8
	// Line 258, Address: 0x2e4a7c, Func Offset: 0xac
	// Line 242, Address: 0x2e4a80, Func Offset: 0xb0
	// Line 261, Address: 0x2e4a84, Func Offset: 0xb4
	// Line 243, Address: 0x2e4a88, Func Offset: 0xb8
	// Line 259, Address: 0x2e4a8c, Func Offset: 0xbc
	// Line 260, Address: 0x2e4a90, Func Offset: 0xc0
	// Line 244, Address: 0x2e4a94, Func Offset: 0xc4
	// Line 247, Address: 0x2e4a98, Func Offset: 0xc8
	// Line 260, Address: 0x2e4a9c, Func Offset: 0xcc
	// Line 261, Address: 0x2e4aa0, Func Offset: 0xd0
	// Line 256, Address: 0x2e4aa4, Func Offset: 0xd4
	// Line 259, Address: 0x2e4aa8, Func Offset: 0xd8
	// Line 254, Address: 0x2e4aac, Func Offset: 0xdc
	// Line 262, Address: 0x2e4ab0, Func Offset: 0xe0
	// Line 245, Address: 0x2e4ab4, Func Offset: 0xe4
	// Line 262, Address: 0x2e4ab8, Func Offset: 0xe8
	// Line 248, Address: 0x2e4abc, Func Offset: 0xec
	// Line 262, Address: 0x2e4ac0, Func Offset: 0xf0
	// Line 249, Address: 0x2e4ac4, Func Offset: 0xf4
	// Line 255, Address: 0x2e4ac8, Func Offset: 0xf8
	// Line 257, Address: 0x2e4ad0, Func Offset: 0x100
	// Line 264, Address: 0x2e4ad4, Func Offset: 0x104
	// Line 258, Address: 0x2e4ad8, Func Offset: 0x108
	// Line 264, Address: 0x2e4adc, Func Offset: 0x10c
	// Line 260, Address: 0x2e4ae0, Func Offset: 0x110
	// Line 267, Address: 0x2e4ae4, Func Offset: 0x114
	// Line 250, Address: 0x2e4ae8, Func Offset: 0x118
	// Line 251, Address: 0x2e4aec, Func Offset: 0x11c
	// Line 252, Address: 0x2e4af0, Func Offset: 0x120
	// Line 261, Address: 0x2e4af4, Func Offset: 0x124
	// Line 262, Address: 0x2e4af8, Func Offset: 0x128
	// Line 264, Address: 0x2e4b00, Func Offset: 0x130
	// Line 263, Address: 0x2e4b04, Func Offset: 0x134
	// Line 265, Address: 0x2e4b08, Func Offset: 0x138
	// Line 266, Address: 0x2e4b0c, Func Offset: 0x13c
	// Line 262, Address: 0x2e4b10, Func Offset: 0x140
	// Line 267, Address: 0x2e4b14, Func Offset: 0x144
	// Line 271, Address: 0x2e4b1c, Func Offset: 0x14c
	// Line 268, Address: 0x2e4b20, Func Offset: 0x150
	// Line 271, Address: 0x2e4b24, Func Offset: 0x154
	// Line 272, Address: 0x2e4b28, Func Offset: 0x158
	// Line 273, Address: 0x2e4b38, Func Offset: 0x168
	// Line 272, Address: 0x2e4b3c, Func Offset: 0x16c
	// Line 273, Address: 0x2e4b40, Func Offset: 0x170
	// Line 272, Address: 0x2e4b44, Func Offset: 0x174
	// Line 273, Address: 0x2e4b48, Func Offset: 0x178
	// Line 274, Address: 0x2e4b50, Func Offset: 0x180
	// Line 276, Address: 0x2e4b60, Func Offset: 0x190
	// Line 275, Address: 0x2e4b64, Func Offset: 0x194
	// Line 276, Address: 0x2e4b68, Func Offset: 0x198
	// Line 278, Address: 0x2e4b74, Func Offset: 0x1a4
	// Func End, Address: 0x2e4b88, Func Offset: 0x1b8
}

// 
// Start address: 0x2e4b90
void SmokeRising_FromBurntHouse_fr23()
{
	PtclOrgData OrgDt;
	SmokeRisingCmnData CmnDt;
	int DtNo;
	float GenVecLen;
	// Line 369, Address: 0x2e4b90, Func Offset: 0
	// Line 375, Address: 0x2e4b94, Func Offset: 0x4
	// Line 369, Address: 0x2e4b98, Func Offset: 0x8
	// Line 375, Address: 0x2e4b9c, Func Offset: 0xc
	// Line 369, Address: 0x2e4ba0, Func Offset: 0x10
	// Line 375, Address: 0x2e4ba4, Func Offset: 0x14
	// Line 369, Address: 0x2e4ba8, Func Offset: 0x18
	// Line 375, Address: 0x2e4bcc, Func Offset: 0x3c
	// Line 376, Address: 0x2e4bd8, Func Offset: 0x48
	// Line 377, Address: 0x2e4be0, Func Offset: 0x50
	// Line 378, Address: 0x2e4bf0, Func Offset: 0x60
	// Line 380, Address: 0x2e4bf8, Func Offset: 0x68
	// Line 379, Address: 0x2e4bfc, Func Offset: 0x6c
	// Line 382, Address: 0x2e4c00, Func Offset: 0x70
	// Line 379, Address: 0x2e4c04, Func Offset: 0x74
	// Line 397, Address: 0x2e4c08, Func Offset: 0x78
	// Line 380, Address: 0x2e4c0c, Func Offset: 0x7c
	// Line 398, Address: 0x2e4c10, Func Offset: 0x80
	// Line 380, Address: 0x2e4c14, Func Offset: 0x84
	// Line 400, Address: 0x2e4c18, Func Offset: 0x88
	// Line 381, Address: 0x2e4c1c, Func Offset: 0x8c
	// Line 401, Address: 0x2e4c20, Func Offset: 0x90
	// Line 381, Address: 0x2e4c24, Func Offset: 0x94
	// Line 404, Address: 0x2e4c28, Func Offset: 0x98
	// Line 384, Address: 0x2e4c2c, Func Offset: 0x9c
	// Line 382, Address: 0x2e4c30, Func Offset: 0xa0
	// Line 384, Address: 0x2e4c34, Func Offset: 0xa4
	// Line 389, Address: 0x2e4c38, Func Offset: 0xa8
	// Line 384, Address: 0x2e4c3c, Func Offset: 0xac
	// Line 385, Address: 0x2e4c40, Func Offset: 0xb0
	// Line 386, Address: 0x2e4c48, Func Offset: 0xb8
	// Line 391, Address: 0x2e4c58, Func Offset: 0xc8
	// Line 387, Address: 0x2e4c5c, Func Offset: 0xcc
	// Line 391, Address: 0x2e4c60, Func Offset: 0xd0
	// Line 388, Address: 0x2e4c64, Func Offset: 0xd4
	// Line 391, Address: 0x2e4c68, Func Offset: 0xd8
	// Line 398, Address: 0x2e4c6c, Func Offset: 0xdc
	// Line 392, Address: 0x2e4c70, Func Offset: 0xe0
	// Line 393, Address: 0x2e4c78, Func Offset: 0xe8
	// Line 394, Address: 0x2e4c80, Func Offset: 0xf0
	// Line 395, Address: 0x2e4c88, Func Offset: 0xf8
	// Line 396, Address: 0x2e4c90, Func Offset: 0x100
	// Line 397, Address: 0x2e4c98, Func Offset: 0x108
	// Line 398, Address: 0x2e4ca0, Func Offset: 0x110
	// Line 399, Address: 0x2e4ca8, Func Offset: 0x118
	// Line 402, Address: 0x2e4cb4, Func Offset: 0x124
	// Line 401, Address: 0x2e4cb8, Func Offset: 0x128
	// Line 403, Address: 0x2e4cc0, Func Offset: 0x130
	// Line 399, Address: 0x2e4cc4, Func Offset: 0x134
	// Line 403, Address: 0x2e4cc8, Func Offset: 0x138
	// Line 399, Address: 0x2e4ccc, Func Offset: 0x13c
	// Line 400, Address: 0x2e4cd0, Func Offset: 0x140
	// Line 401, Address: 0x2e4cd4, Func Offset: 0x144
	// Line 402, Address: 0x2e4cd8, Func Offset: 0x148
	// Line 403, Address: 0x2e4cdc, Func Offset: 0x14c
	// Line 404, Address: 0x2e4ce0, Func Offset: 0x150
	// Line 407, Address: 0x2e4ce8, Func Offset: 0x158
	// Line 409, Address: 0x2e4cf8, Func Offset: 0x168
	// Line 410, Address: 0x2e4d04, Func Offset: 0x174
	// Line 411, Address: 0x2e4d08, Func Offset: 0x178
	// Line 409, Address: 0x2e4d0c, Func Offset: 0x17c
	// Line 410, Address: 0x2e4d10, Func Offset: 0x180
	// Line 411, Address: 0x2e4d18, Func Offset: 0x188
	// Line 412, Address: 0x2e4d24, Func Offset: 0x194
	// Line 413, Address: 0x2e4d28, Func Offset: 0x198
	// Line 414, Address: 0x2e4d30, Func Offset: 0x1a0
	// Line 415, Address: 0x2e4d50, Func Offset: 0x1c0
	// Line 421, Address: 0x2e4d5c, Func Offset: 0x1cc
	// Line 415, Address: 0x2e4d60, Func Offset: 0x1d0
	// Line 421, Address: 0x2e4d64, Func Offset: 0x1d4
	// Line 415, Address: 0x2e4d68, Func Offset: 0x1d8
	// Line 416, Address: 0x2e4d78, Func Offset: 0x1e8
	// Line 417, Address: 0x2e4d80, Func Offset: 0x1f0
	// Line 418, Address: 0x2e4d88, Func Offset: 0x1f8
	// Line 419, Address: 0x2e4d94, Func Offset: 0x204
	// Line 421, Address: 0x2e4d98, Func Offset: 0x208
	// Line 422, Address: 0x2e4da0, Func Offset: 0x210
	// Line 423, Address: 0x2e4db0, Func Offset: 0x220
	// Func End, Address: 0x2e4de4, Func Offset: 0x254
}

// 
// Start address: 0x2e4df0
void SmokeRising_FromRichard_bd15(float* OrgPos, float OrgZWidth, float SmokeWidth, int AlphaVal, unsigned int DemoFlag)
{
	PtclOrgData OrgDt;
	SmokeRisingCmnData CmnDt;
	float Vec[4];
	// Line 435, Address: 0x2e4df0, Func Offset: 0
	// Line 442, Address: 0x2e4df4, Func Offset: 0x4
	// Line 435, Address: 0x2e4df8, Func Offset: 0x8
	// Line 442, Address: 0x2e4dfc, Func Offset: 0xc
	// Line 440, Address: 0x2e4e00, Func Offset: 0x10
	// Line 443, Address: 0x2e4e04, Func Offset: 0x14
	// Line 442, Address: 0x2e4e08, Func Offset: 0x18
	// Line 444, Address: 0x2e4e0c, Func Offset: 0x1c
	// Line 440, Address: 0x2e4e14, Func Offset: 0x24
	// Line 441, Address: 0x2e4e18, Func Offset: 0x28
	// Line 442, Address: 0x2e4e20, Func Offset: 0x30
	// Line 443, Address: 0x2e4e28, Func Offset: 0x38
	// Line 442, Address: 0x2e4e2c, Func Offset: 0x3c
	// Line 444, Address: 0x2e4e30, Func Offset: 0x40
	// Line 445, Address: 0x2e4e38, Func Offset: 0x48
	// Line 446, Address: 0x2e4e5c, Func Offset: 0x6c
	// Line 447, Address: 0x2e4e6c, Func Offset: 0x7c
	// Line 448, Address: 0x2e4e80, Func Offset: 0x90
	// Line 458, Address: 0x2e4eb0, Func Offset: 0xc0
	// Line 450, Address: 0x2e4eb4, Func Offset: 0xc4
	// Line 449, Address: 0x2e4eb8, Func Offset: 0xc8
	// Line 450, Address: 0x2e4ebc, Func Offset: 0xcc
	// Line 458, Address: 0x2e4ec0, Func Offset: 0xd0
	// Line 450, Address: 0x2e4ec4, Func Offset: 0xd4
	// Line 453, Address: 0x2e4ec8, Func Offset: 0xd8
	// Line 456, Address: 0x2e4ecc, Func Offset: 0xdc
	// Line 453, Address: 0x2e4ed0, Func Offset: 0xe0
	// Line 456, Address: 0x2e4ed8, Func Offset: 0xe8
	// Line 450, Address: 0x2e4edc, Func Offset: 0xec
	// Line 456, Address: 0x2e4ee0, Func Offset: 0xf0
	// Line 451, Address: 0x2e4ee4, Func Offset: 0xf4
	// Line 457, Address: 0x2e4ee8, Func Offset: 0xf8
	// Line 454, Address: 0x2e4ef0, Func Offset: 0x100
	// Line 451, Address: 0x2e4ef4, Func Offset: 0x104
	// Line 457, Address: 0x2e4ef8, Func Offset: 0x108
	// Line 454, Address: 0x2e4efc, Func Offset: 0x10c
	// Line 460, Address: 0x2e4f00, Func Offset: 0x110
	// Line 453, Address: 0x2e4f04, Func Offset: 0x114
	// Line 460, Address: 0x2e4f08, Func Offset: 0x118
	// Line 454, Address: 0x2e4f0c, Func Offset: 0x11c
	// Line 449, Address: 0x2e4f10, Func Offset: 0x120
	// Line 460, Address: 0x2e4f14, Func Offset: 0x124
	// Line 461, Address: 0x2e4f18, Func Offset: 0x128
	// Line 455, Address: 0x2e4f1c, Func Offset: 0x12c
	// Line 470, Address: 0x2e4f20, Func Offset: 0x130
	// Line 462, Address: 0x2e4f24, Func Offset: 0x134
	// Line 473, Address: 0x2e4f28, Func Offset: 0x138
	// Line 455, Address: 0x2e4f2c, Func Offset: 0x13c
	// Line 462, Address: 0x2e4f30, Func Offset: 0x140
	// Line 461, Address: 0x2e4f34, Func Offset: 0x144
	// Line 464, Address: 0x2e4f38, Func Offset: 0x148
	// Line 460, Address: 0x2e4f40, Func Offset: 0x150
	// Line 463, Address: 0x2e4f44, Func Offset: 0x154
	// Line 467, Address: 0x2e4f48, Func Offset: 0x158
	// Line 461, Address: 0x2e4f4c, Func Offset: 0x15c
	// Line 463, Address: 0x2e4f50, Func Offset: 0x160
	// Line 465, Address: 0x2e4f54, Func Offset: 0x164
	// Line 474, Address: 0x2e4f58, Func Offset: 0x168
	// Line 467, Address: 0x2e4f5c, Func Offset: 0x16c
	// Line 465, Address: 0x2e4f60, Func Offset: 0x170
	// Line 468, Address: 0x2e4f64, Func Offset: 0x174
	// Line 474, Address: 0x2e4f68, Func Offset: 0x178
	// Line 467, Address: 0x2e4f6c, Func Offset: 0x17c
	// Line 469, Address: 0x2e4f70, Func Offset: 0x180
	// Line 468, Address: 0x2e4f74, Func Offset: 0x184
	// Line 474, Address: 0x2e4f78, Func Offset: 0x188
	// Line 469, Address: 0x2e4f7c, Func Offset: 0x18c
	// Line 468, Address: 0x2e4f80, Func Offset: 0x190
	// Line 471, Address: 0x2e4f84, Func Offset: 0x194
	// Line 472, Address: 0x2e4f8c, Func Offset: 0x19c
	// Line 468, Address: 0x2e4f90, Func Offset: 0x1a0
	// Line 470, Address: 0x2e4f94, Func Offset: 0x1a4
	// Line 469, Address: 0x2e4f98, Func Offset: 0x1a8
	// Line 470, Address: 0x2e4f9c, Func Offset: 0x1ac
	// Line 472, Address: 0x2e4fa0, Func Offset: 0x1b0
	// Line 471, Address: 0x2e4fa4, Func Offset: 0x1b4
	// Line 472, Address: 0x2e4fac, Func Offset: 0x1bc
	// Line 471, Address: 0x2e4fb0, Func Offset: 0x1c0
	// Line 469, Address: 0x2e4fb4, Func Offset: 0x1c4
	// Line 474, Address: 0x2e4fbc, Func Offset: 0x1cc
	// Line 475, Address: 0x2e4fc4, Func Offset: 0x1d4
	// Line 476, Address: 0x2e4fd0, Func Offset: 0x1e0
	// Func End, Address: 0x2e4fdc, Func Offset: 0x1ec
}

// 
// Start address: 0x2e4fe0
void SmokeRisingParticle_Make(PtclOrgData* pOrgDt, SmokeRisingCmnData* pCmnDt)
{
	// Line 486, Address: 0x2e4fe4, Func Offset: 0x4
	// Func End, Address: 0x2e500c, Func Offset: 0x2c
}

// 
// Start address: 0x2e5010
void Generate_OnePtcl(void* PtclAdr, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	SmokeRisingPtcl* pPtcl;
	SmokeRisingCmnData* pCmnDt;
	float Vec1Rate;
	float Vec2Rate;
	// Line 508, Address: 0x2e5010, Func Offset: 0
	// Line 509, Address: 0x2e5028, Func Offset: 0x18
	// Line 510, Address: 0x2e502c, Func Offset: 0x1c
	// Line 512, Address: 0x2e5030, Func Offset: 0x20
	// Line 513, Address: 0x2e5038, Func Offset: 0x28
	// Line 515, Address: 0x2e5040, Func Offset: 0x30
	// Line 516, Address: 0x2e5054, Func Offset: 0x44
	// Line 518, Address: 0x2e5060, Func Offset: 0x50
	// Line 520, Address: 0x2e5064, Func Offset: 0x54
	// Line 522, Address: 0x2e5094, Func Offset: 0x84
	// Line 524, Address: 0x2e5098, Func Offset: 0x88
	// Line 525, Address: 0x2e50cc, Func Offset: 0xbc
	// Line 526, Address: 0x2e50e8, Func Offset: 0xd8
	// Line 527, Address: 0x2e5110, Func Offset: 0x100
	// Line 528, Address: 0x2e511c, Func Offset: 0x10c
	// Func End, Address: 0x2e5138, Func Offset: 0x128
}

// 
// Start address: 0x2e5140
void SmokeRisingPtcl_Calc(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	SmokeRisingPtcl* PtclAry;
	int PtclNo;
	SmokeRisingCmnData* pCmnDt;
	SmokeRisingPtcl* pPtcl;
	float RotSpd;
	float AccelVec[4];
	float AddSpdVec[4];
	float AirAccelVec[4];
	float OfsVec[4];
	float FreqAmp;
	float CosVal;
	float SinVal;
	float AddRotTime;
	float PulsAffRate;
	float MvVec[4];
	float AffectRate;
	float ExpandLenRate;
	float NextPressRate;
	// Line 555, Address: 0x2e5140, Func Offset: 0
	// Line 556, Address: 0x2e5160, Func Offset: 0x20
	// Line 555, Address: 0x2e5164, Func Offset: 0x24
	// Line 559, Address: 0x2e5168, Func Offset: 0x28
	// Line 555, Address: 0x2e516c, Func Offset: 0x2c
	// Line 558, Address: 0x2e5170, Func Offset: 0x30
	// Line 555, Address: 0x2e5174, Func Offset: 0x34
	// Line 559, Address: 0x2e5180, Func Offset: 0x40
	// Line 561, Address: 0x2e5188, Func Offset: 0x48
	// Line 563, Address: 0x2e5190, Func Offset: 0x50
	// Line 566, Address: 0x2e51a4, Func Offset: 0x64
	// Line 567, Address: 0x2e51b0, Func Offset: 0x70
	// Line 566, Address: 0x2e51b8, Func Offset: 0x78
	// Line 567, Address: 0x2e51bc, Func Offset: 0x7c
	// Line 571, Address: 0x2e51c8, Func Offset: 0x88
	// Line 573, Address: 0x2e51fc, Func Offset: 0xbc
	// Line 571, Address: 0x2e5204, Func Offset: 0xc4
	// Line 573, Address: 0x2e5210, Func Offset: 0xd0
	// Line 575, Address: 0x2e5224, Func Offset: 0xe4
	// Line 576, Address: 0x2e5238, Func Offset: 0xf8
	// Line 577, Address: 0x2e5240, Func Offset: 0x100
	// Line 579, Address: 0x2e525c, Func Offset: 0x11c
	// Line 580, Address: 0x2e5274, Func Offset: 0x134
	// Line 581, Address: 0x2e5278, Func Offset: 0x138
	// Line 582, Address: 0x2e528c, Func Offset: 0x14c
	// Line 589, Address: 0x2e5294, Func Offset: 0x154
	// Line 582, Address: 0x2e529c, Func Offset: 0x15c
	// Line 589, Address: 0x2e52a0, Func Offset: 0x160
	// Line 590, Address: 0x2e52ac, Func Offset: 0x16c
	// Line 591, Address: 0x2e52b4, Func Offset: 0x174
	// Line 596, Address: 0x2e52c0, Func Offset: 0x180
	// Line 597, Address: 0x2e52d0, Func Offset: 0x190
	// Line 596, Address: 0x2e52e0, Func Offset: 0x1a0
	// Line 597, Address: 0x2e52e8, Func Offset: 0x1a8
	// Line 596, Address: 0x2e52ec, Func Offset: 0x1ac
	// Line 597, Address: 0x2e5300, Func Offset: 0x1c0
	// Line 601, Address: 0x2e534c, Func Offset: 0x20c
	// Line 597, Address: 0x2e5354, Func Offset: 0x214
	// Line 601, Address: 0x2e5358, Func Offset: 0x218
	// Line 597, Address: 0x2e535c, Func Offset: 0x21c
	// Line 601, Address: 0x2e5360, Func Offset: 0x220
	// Line 602, Address: 0x2e5384, Func Offset: 0x244
	// Line 601, Address: 0x2e5388, Func Offset: 0x248
	// Line 602, Address: 0x2e5390, Func Offset: 0x250
	// Line 601, Address: 0x2e539c, Func Offset: 0x25c
	// Line 602, Address: 0x2e53a0, Func Offset: 0x260
	// Line 603, Address: 0x2e53ac, Func Offset: 0x26c
	// Line 602, Address: 0x2e53b4, Func Offset: 0x274
	// Line 603, Address: 0x2e53b8, Func Offset: 0x278
	// Line 605, Address: 0x2e53d0, Func Offset: 0x290
	// Line 609, Address: 0x2e53dc, Func Offset: 0x29c
	// Line 605, Address: 0x2e53e0, Func Offset: 0x2a0
	// Line 609, Address: 0x2e53e4, Func Offset: 0x2a4
	// Line 605, Address: 0x2e53e8, Func Offset: 0x2a8
	// Line 609, Address: 0x2e53ec, Func Offset: 0x2ac
	// Line 605, Address: 0x2e53f0, Func Offset: 0x2b0
	// Line 606, Address: 0x2e5404, Func Offset: 0x2c4
	// Line 607, Address: 0x2e5408, Func Offset: 0x2c8
	// Line 606, Address: 0x2e540c, Func Offset: 0x2cc
	// Line 607, Address: 0x2e5410, Func Offset: 0x2d0
	// Line 609, Address: 0x2e541c, Func Offset: 0x2dc
	// Line 616, Address: 0x2e5428, Func Offset: 0x2e8
	// Line 617, Address: 0x2e5444, Func Offset: 0x304
	// Line 620, Address: 0x2e5448, Func Offset: 0x308
	// Line 621, Address: 0x2e5474, Func Offset: 0x334
	// Line 624, Address: 0x2e5490, Func Offset: 0x350
	// Line 625, Address: 0x2e54bc, Func Offset: 0x37c
	// Line 626, Address: 0x2e54e8, Func Offset: 0x3a8
	// Line 630, Address: 0x2e5514, Func Offset: 0x3d4
	// Line 631, Address: 0x2e5540, Func Offset: 0x400
	// Line 634, Address: 0x2e555c, Func Offset: 0x41c
	// Line 635, Address: 0x2e5568, Func Offset: 0x428
	// Line 634, Address: 0x2e556c, Func Offset: 0x42c
	// Line 635, Address: 0x2e5570, Func Offset: 0x430
	// Line 636, Address: 0x2e5578, Func Offset: 0x438
	// Line 637, Address: 0x2e5580, Func Offset: 0x440
	// Line 636, Address: 0x2e5584, Func Offset: 0x444
	// Line 637, Address: 0x2e5588, Func Offset: 0x448
	// Line 635, Address: 0x2e558c, Func Offset: 0x44c
	// Line 636, Address: 0x2e5590, Func Offset: 0x450
	// Line 637, Address: 0x2e5594, Func Offset: 0x454
	// Line 640, Address: 0x2e5598, Func Offset: 0x458
	// Line 646, Address: 0x2e55b0, Func Offset: 0x470
	// Line 651, Address: 0x2e55d0, Func Offset: 0x490
	// Line 652, Address: 0x2e55e0, Func Offset: 0x4a0
	// Line 646, Address: 0x2e55ec, Func Offset: 0x4ac
	// Line 647, Address: 0x2e55f0, Func Offset: 0x4b0
	// Line 651, Address: 0x2e55f4, Func Offset: 0x4b4
	// Line 646, Address: 0x2e55fc, Func Offset: 0x4bc
	// Line 647, Address: 0x2e5600, Func Offset: 0x4c0
	// Line 649, Address: 0x2e5608, Func Offset: 0x4c8
	// Line 651, Address: 0x2e560c, Func Offset: 0x4cc
	// Line 652, Address: 0x2e5624, Func Offset: 0x4e4
	// Line 651, Address: 0x2e5634, Func Offset: 0x4f4
	// Line 652, Address: 0x2e563c, Func Offset: 0x4fc
	// Line 655, Address: 0x2e5654, Func Offset: 0x514
	// Line 657, Address: 0x2e5668, Func Offset: 0x528
	// Line 659, Address: 0x2e5670, Func Offset: 0x530
	// Line 660, Address: 0x2e5684, Func Offset: 0x544
	// Func End, Address: 0x2e56b8, Func Offset: 0x578
}

// 
// Start address: 0x2e56c0
void SmokeRisingPtcl_Draw(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	SmokeRisingPtcl* PtclAry;
	int PtclNo;
	SmokeRisingCmnData* pCmnDt;
	float Wld2ScrMat[4][4];
	float View2ScrMat[4][4];
	float RotZ2CamZMat[4][4];
	_anon2* pPkTop;
	_anon2* pPk;
	_anon2* pGifTag;
	unsigned long Tex0;
	unsigned long AlphaReg;
	float View2WldMat[4][4];
	float CamAngY;
	float CamAngX;
	_anon1* pTex;
	unsigned int cbp;
	SmokeRisingPtcl* pPtcl;
	float ScrPos[4];
	float Lcl2ScrMat[4][4];
	float inv_w;
	float Lcl2WldMat[4][4];
	float PolyXZRate;
	float PolyYRate;
	float AffectRate;
	int qwc;
	// Line 671, Address: 0x2e56c0, Func Offset: 0
	// Line 681, Address: 0x2e56c4, Func Offset: 0x4
	// Line 671, Address: 0x2e56c8, Func Offset: 0x8
	// Line 681, Address: 0x2e56cc, Func Offset: 0xc
	// Line 671, Address: 0x2e56d0, Func Offset: 0x10
	// Line 681, Address: 0x2e56d4, Func Offset: 0x14
	// Line 671, Address: 0x2e56d8, Func Offset: 0x18
	// Line 672, Address: 0x2e56dc, Func Offset: 0x1c
	// Line 671, Address: 0x2e56e0, Func Offset: 0x20
	// Line 683, Address: 0x2e56ec, Func Offset: 0x2c
	// Line 671, Address: 0x2e56f0, Func Offset: 0x30
	// Line 674, Address: 0x2e5700, Func Offset: 0x40
	// Line 671, Address: 0x2e5704, Func Offset: 0x44
	// Line 681, Address: 0x2e5710, Func Offset: 0x50
	// Line 683, Address: 0x2e5714, Func Offset: 0x54
	// Line 684, Address: 0x2e571c, Func Offset: 0x5c
	// Line 688, Address: 0x2e5724, Func Offset: 0x64
	// Line 689, Address: 0x2e572c, Func Offset: 0x6c
	// Line 690, Address: 0x2e573c, Func Offset: 0x7c
	// Line 693, Address: 0x2e575c, Func Offset: 0x9c
	// Line 694, Address: 0x2e5778, Func Offset: 0xb8
	// Line 702, Address: 0x2e5788, Func Offset: 0xc8
	// Line 704, Address: 0x2e5794, Func Offset: 0xd4
	// Line 702, Address: 0x2e5798, Func Offset: 0xd8
	// Line 704, Address: 0x2e579c, Func Offset: 0xdc
	// Line 705, Address: 0x2e57a4, Func Offset: 0xe4
	// Line 709, Address: 0x2e57c4, Func Offset: 0x104
	// Line 710, Address: 0x2e57d0, Func Offset: 0x110
	// Line 709, Address: 0x2e57d4, Func Offset: 0x114
	// Line 710, Address: 0x2e57e0, Func Offset: 0x120
	// Line 715, Address: 0x2e57ec, Func Offset: 0x12c
	// Line 710, Address: 0x2e57f0, Func Offset: 0x130
	// Line 715, Address: 0x2e57f4, Func Offset: 0x134
	// Line 714, Address: 0x2e57f8, Func Offset: 0x138
	// Line 715, Address: 0x2e57fc, Func Offset: 0x13c
	// Line 721, Address: 0x2e5800, Func Offset: 0x140
	// Line 715, Address: 0x2e5804, Func Offset: 0x144
	// Line 723, Address: 0x2e5808, Func Offset: 0x148
	// Line 715, Address: 0x2e580c, Func Offset: 0x14c
	// Line 720, Address: 0x2e5810, Func Offset: 0x150
	// Line 715, Address: 0x2e5814, Func Offset: 0x154
	// Line 723, Address: 0x2e5818, Func Offset: 0x158
	// Line 725, Address: 0x2e5820, Func Offset: 0x160
	// Line 730, Address: 0x2e5828, Func Offset: 0x168
	// Line 733, Address: 0x2e583c, Func Offset: 0x17c
	// Line 735, Address: 0x2e5854, Func Offset: 0x194
	// Line 736, Address: 0x2e5880, Func Offset: 0x1c0
	// Line 739, Address: 0x2e589c, Func Offset: 0x1dc
	// Line 740, Address: 0x2e58a8, Func Offset: 0x1e8
	// Line 739, Address: 0x2e58b0, Func Offset: 0x1f0
	// Line 740, Address: 0x2e58b4, Func Offset: 0x1f4
	// Line 742, Address: 0x2e58d0, Func Offset: 0x210
	// Line 749, Address: 0x2e5918, Func Offset: 0x258
	// Line 752, Address: 0x2e5934, Func Offset: 0x274
	// Line 753, Address: 0x2e5938, Func Offset: 0x278
	// Line 754, Address: 0x2e593c, Func Offset: 0x27c
	// Line 752, Address: 0x2e5944, Func Offset: 0x284
	// Line 753, Address: 0x2e594c, Func Offset: 0x28c
	// Line 754, Address: 0x2e5950, Func Offset: 0x290
	// Line 753, Address: 0x2e5958, Func Offset: 0x298
	// Line 754, Address: 0x2e595c, Func Offset: 0x29c
	// Line 753, Address: 0x2e5960, Func Offset: 0x2a0
	// Line 755, Address: 0x2e5964, Func Offset: 0x2a4
	// Line 756, Address: 0x2e5970, Func Offset: 0x2b0
	// Line 757, Address: 0x2e5974, Func Offset: 0x2b4
	// Line 758, Address: 0x2e5978, Func Offset: 0x2b8
	// Line 759, Address: 0x2e598c, Func Offset: 0x2cc
	// Line 764, Address: 0x2e5990, Func Offset: 0x2d0
	// Line 759, Address: 0x2e5994, Func Offset: 0x2d4
	// Line 764, Address: 0x2e5998, Func Offset: 0x2d8
	// Line 760, Address: 0x2e599c, Func Offset: 0x2dc
	// Line 764, Address: 0x2e59a0, Func Offset: 0x2e0
	// Line 761, Address: 0x2e59a4, Func Offset: 0x2e4
	// Line 762, Address: 0x2e59a8, Func Offset: 0x2e8
	// Line 759, Address: 0x2e59ac, Func Offset: 0x2ec
	// Line 760, Address: 0x2e59b8, Func Offset: 0x2f8
	// Line 761, Address: 0x2e59c8, Func Offset: 0x308
	// Line 762, Address: 0x2e59d8, Func Offset: 0x318
	// Line 764, Address: 0x2e59e8, Func Offset: 0x328
	// Line 765, Address: 0x2e5a58, Func Offset: 0x398
	// Line 767, Address: 0x2e5a64, Func Offset: 0x3a4
	// Line 772, Address: 0x2e5ae0, Func Offset: 0x420
	// Line 773, Address: 0x2e5af8, Func Offset: 0x438
	// Line 774, Address: 0x2e5b0c, Func Offset: 0x44c
	// Line 777, Address: 0x2e5b28, Func Offset: 0x468
	// Line 774, Address: 0x2e5b2c, Func Offset: 0x46c
	// Line 777, Address: 0x2e5b38, Func Offset: 0x478
	// Line 774, Address: 0x2e5b3c, Func Offset: 0x47c
	// Line 777, Address: 0x2e5b4c, Func Offset: 0x48c
	// Line 778, Address: 0x2e5b5c, Func Offset: 0x49c
	// Line 779, Address: 0x2e5b64, Func Offset: 0x4a4
	// Line 780, Address: 0x2e5b6c, Func Offset: 0x4ac
	// Line 781, Address: 0x2e5b7c, Func Offset: 0x4bc
	// Line 782, Address: 0x2e5b80, Func Offset: 0x4c0
	// Line 784, Address: 0x2e5b90, Func Offset: 0x4d0
	// Func End, Address: 0x2e5bc8, Func Offset: 0x508
}

// 
// Start address: 0x2e5bd0
_anon2* Make_SmokeRising_Packet(_anon2* pPk, SmokeRisingPtcl* pPtcl, SmokeRisingCmnData* pCmnDt, float Lcl2ScrMat[4])
{
	_anon2* pSavePk;
	float inv_w;
	int VtNo;
	int STNo;
	float TimeAlphaRate;
	float SmokeAlphaRate;
	float Center2LclPosVec[4][4];
	float ScrPos[4];
	int fog_val;
	float NearAlphaRate;
	float STQVec[4][4];
	// Line 821, Address: 0x2e5bd0, Func Offset: 0
	// Line 814, Address: 0x2e5bd4, Func Offset: 0x4
	// Line 821, Address: 0x2e5bd8, Func Offset: 0x8
	// Line 814, Address: 0x2e5bdc, Func Offset: 0xc
	// Line 821, Address: 0x2e5be0, Func Offset: 0x10
	// Line 798, Address: 0x2e5be4, Func Offset: 0x14
	// Line 814, Address: 0x2e5be8, Func Offset: 0x18
	// Line 821, Address: 0x2e5c0c, Func Offset: 0x3c
	// Line 822, Address: 0x2e5c1c, Func Offset: 0x4c
	// Line 823, Address: 0x2e5c28, Func Offset: 0x58
	// Line 824, Address: 0x2e5c54, Func Offset: 0x84
	// Line 825, Address: 0x2e5c74, Func Offset: 0xa4
	// Line 826, Address: 0x2e5c80, Func Offset: 0xb0
	// Line 830, Address: 0x2e5c88, Func Offset: 0xb8
	// Line 829, Address: 0x2e5c90, Func Offset: 0xc0
	// Line 830, Address: 0x2e5c94, Func Offset: 0xc4
	// Line 829, Address: 0x2e5cbc, Func Offset: 0xec
	// Line 830, Address: 0x2e5cc0, Func Offset: 0xf0
	// Line 834, Address: 0x2e5d10, Func Offset: 0x140
	// Line 836, Address: 0x2e5d44, Func Offset: 0x174
	// Line 837, Address: 0x2e5d54, Func Offset: 0x184
	// Line 838, Address: 0x2e5d5c, Func Offset: 0x18c
	// Line 839, Address: 0x2e5d60, Func Offset: 0x190
	// Line 840, Address: 0x2e5d68, Func Offset: 0x198
	// Line 842, Address: 0x2e5d84, Func Offset: 0x1b4
	// Line 845, Address: 0x2e5dc0, Func Offset: 0x1f0
	// Line 848, Address: 0x2e5dc8, Func Offset: 0x1f8
	// Line 851, Address: 0x2e5dd0, Func Offset: 0x200
	// Line 852, Address: 0x2e5ddc, Func Offset: 0x20c
	// Line 853, Address: 0x2e5df0, Func Offset: 0x220
	// Line 854, Address: 0x2e5e00, Func Offset: 0x230
	// Line 855, Address: 0x2e5e04, Func Offset: 0x234
	// Line 858, Address: 0x2e5e08, Func Offset: 0x238
	// Line 857, Address: 0x2e5e0c, Func Offset: 0x23c
	// Line 858, Address: 0x2e5e10, Func Offset: 0x240
	// Line 860, Address: 0x2e5e28, Func Offset: 0x258
	// Line 859, Address: 0x2e5e2c, Func Offset: 0x25c
	// Line 860, Address: 0x2e5e30, Func Offset: 0x260
	// Line 861, Address: 0x2e5e48, Func Offset: 0x278
	// Line 865, Address: 0x2e5e4c, Func Offset: 0x27c
	// Line 862, Address: 0x2e5e50, Func Offset: 0x280
	// Line 865, Address: 0x2e5e54, Func Offset: 0x284
	// Line 866, Address: 0x2e5e58, Func Offset: 0x288
	// Line 867, Address: 0x2e5e60, Func Offset: 0x290
	// Line 868, Address: 0x2e5e68, Func Offset: 0x298
	// Line 869, Address: 0x2e5ed0, Func Offset: 0x300
	// Line 872, Address: 0x2e5ed4, Func Offset: 0x304
	// Line 873, Address: 0x2e5ee0, Func Offset: 0x310
	// Line 874, Address: 0x2e5ef8, Func Offset: 0x328
	// Line 875, Address: 0x2e5f00, Func Offset: 0x330
	// Line 876, Address: 0x2e5f04, Func Offset: 0x334
	// Line 878, Address: 0x2e5f14, Func Offset: 0x344
	// Line 879, Address: 0x2e5f18, Func Offset: 0x348
	// Func End, Address: 0x2e5f20, Func Offset: 0x350
}

