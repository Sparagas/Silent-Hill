typedef struct FireCmnData;
typedef struct _anon0;
typedef struct PtclOrgData;
typedef struct sfObj;
typedef struct FirePtcl;
typedef union _anon1;
typedef struct _anon2;
typedef enum GameItem : unsigned char;
typedef struct FireWork;
typedef union _anon3;
typedef enum _cam3Step : unsigned char;
typedef struct _cam3Work;
typedef enum PlayerExtStatus : unsigned char;

typedef void(*type_9)(void*, int, PtclOrgData*, void*);
typedef void(*type_17)(sfObj*);
typedef void(*type_18)();
typedef void(*type_21)(sfObj*);
typedef void(*type_25)(sfObj*);
typedef void(*type_32)(void*, PtclOrgData*, void*);
typedef void(*type_35)(void*, int, PtclOrgData*, void*);

typedef int type_0[4];
typedef unsigned int type_1[4];
typedef void* type_2[4];
typedef short type_3[8];
typedef unsigned short type_4[8];
typedef char type_5[16];
typedef unsigned char type_6[16];
typedef float type_7[4];
typedef float type_8[1];
typedef int type_10[1];
typedef long type_11[1];
typedef float type_12[4];
typedef _anon2 type_13[2];
typedef _anon3 type_14[256];
typedef float type_15[4][4];
typedef float type_16[4][4];
typedef float type_19[4];
typedef void(*type_20)()[2];
typedef float type_22[4];
typedef float type_23[4][4];
typedef short type_24[2];
typedef unsigned short type_26[2];
typedef void(*type_27)(sfObj*)[3];
typedef char type_28[4];
typedef unsigned char type_29[4];
typedef float type_30[1];
typedef int type_31[1];
typedef long type_33[2];
typedef unsigned long type_34[2];

struct FireCmnData
{
	FireWork* pFireW;
	float AboutFireHeight;
	float LifeTime;
};

struct _anon0
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

struct FirePtcl
{
	float Pos[4];
	float Spd[4];
	float Timer;
	float LifeTime;
	float XZDiameter;
	float Height;
	float PolyWidthRate;
	float RotAng;
	int RandVal;
};

union _anon1
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

struct _anon2
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

struct FireWork
{
	float GenPos[4];
	float BrightRate;
	float AboutFireHeight;
	float MaxPolyWidth;
	float ChgColStartTime;
	float ChgColTime;
	float PrevGenPos[4];
	int PrevPosMkFlag;
	sfObj* pObj;
	float GenLifeRate;
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
void(*FirePtcl_Draw)(void*, int, PtclOrgData*, void*);
void(*FirePtcl_Calc)(void*, int, PtclOrgData*, void*);
void(*Generate_OnePtcl)(void*, PtclOrgData*, void*);
float sg_vector_zero[4];
_anon2 player_ext_info[2];
float sg_matrix_unit[4][4];
_cam3Work cam3_work;

void Fire_GenerateInit(FireWork* pW, float AboutFireHeight, unsigned int DemoFlag);
void FirePartircle_Make(FireWork* pFireW, float GenIntervalTime, float LifeTime, float AboutFireHeight, unsigned int DemoFlag);
void Generate_OnePtcl(void* PtclAdr, PtclOrgData* pOrgDt, void* pHeadCmn);
void FirePtcl_Calc(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn);
void renewal_GenerateData(PtclOrgData* pOrgDt, FireCmnData* pCmnDt);
void FirePtcl_Draw(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn);
_anon1* Make_Fire_Packet(_anon1* pPk, FirePtcl* pPtcl, FireCmnData* pCmnDt, float Lcl2ScrMat[4]);

// 
// Start address: 0x2ea3d0
void Fire_GenerateInit(FireWork* pW, float AboutFireHeight, unsigned int DemoFlag)
{
	int No;
	// Line 127, Address: 0x2ea3d0, Func Offset: 0
	// Line 130, Address: 0x2ea3d4, Func Offset: 0x4
	// Line 127, Address: 0x2ea3d8, Func Offset: 0x8
	// Line 130, Address: 0x2ea3f4, Func Offset: 0x24
	// Line 131, Address: 0x2ea400, Func Offset: 0x30
	// Line 132, Address: 0x2ea404, Func Offset: 0x34
	// Line 131, Address: 0x2ea408, Func Offset: 0x38
	// Line 132, Address: 0x2ea40c, Func Offset: 0x3c
	// Line 135, Address: 0x2ea414, Func Offset: 0x44
	// Line 134, Address: 0x2ea418, Func Offset: 0x48
	// Line 133, Address: 0x2ea41c, Func Offset: 0x4c
	// Line 134, Address: 0x2ea420, Func Offset: 0x50
	// Line 136, Address: 0x2ea428, Func Offset: 0x58
	// Line 143, Address: 0x2ea470, Func Offset: 0xa0
	// Line 144, Address: 0x2ea480, Func Offset: 0xb0
	// Func End, Address: 0x2ea49c, Func Offset: 0xcc
}

// 
// Start address: 0x2ea4a0
void FirePartircle_Make(FireWork* pFireW, float GenIntervalTime, float LifeTime, float AboutFireHeight, unsigned int DemoFlag)
{
	PtclOrgData OrgDt;
	FireCmnData CmnData;
	_anon2* pPlayerIF;
	// Line 161, Address: 0x2ea4a0, Func Offset: 0
	// Line 166, Address: 0x2ea4a8, Func Offset: 0x8
	// Line 161, Address: 0x2ea4ac, Func Offset: 0xc
	// Line 166, Address: 0x2ea4b4, Func Offset: 0x14
	// Line 167, Address: 0x2ea4bc, Func Offset: 0x1c
	// Line 168, Address: 0x2ea4d0, Func Offset: 0x30
	// Line 175, Address: 0x2ea4dc, Func Offset: 0x3c
	// Line 169, Address: 0x2ea4e0, Func Offset: 0x40
	// Line 190, Address: 0x2ea4e4, Func Offset: 0x44
	// Line 169, Address: 0x2ea4e8, Func Offset: 0x48
	// Line 190, Address: 0x2ea4ec, Func Offset: 0x4c
	// Line 170, Address: 0x2ea4f0, Func Offset: 0x50
	// Line 190, Address: 0x2ea4f4, Func Offset: 0x54
	// Line 170, Address: 0x2ea4f8, Func Offset: 0x58
	// Line 190, Address: 0x2ea4fc, Func Offset: 0x5c
	// Line 172, Address: 0x2ea500, Func Offset: 0x60
	// Line 169, Address: 0x2ea504, Func Offset: 0x64
	// Line 172, Address: 0x2ea508, Func Offset: 0x68
	// Line 174, Address: 0x2ea50c, Func Offset: 0x6c
	// Line 172, Address: 0x2ea510, Func Offset: 0x70
	// Line 190, Address: 0x2ea514, Func Offset: 0x74
	// Line 176, Address: 0x2ea518, Func Offset: 0x78
	// Line 169, Address: 0x2ea51c, Func Offset: 0x7c
	// Line 176, Address: 0x2ea520, Func Offset: 0x80
	// Line 174, Address: 0x2ea524, Func Offset: 0x84
	// Line 177, Address: 0x2ea528, Func Offset: 0x88
	// Line 190, Address: 0x2ea52c, Func Offset: 0x8c
	// Line 177, Address: 0x2ea530, Func Offset: 0x90
	// Line 190, Address: 0x2ea534, Func Offset: 0x94
	// Line 179, Address: 0x2ea538, Func Offset: 0x98
	// Line 190, Address: 0x2ea53c, Func Offset: 0x9c
	// Line 171, Address: 0x2ea54c, Func Offset: 0xac
	// Line 175, Address: 0x2ea550, Func Offset: 0xb0
	// Line 176, Address: 0x2ea554, Func Offset: 0xb4
	// Line 179, Address: 0x2ea564, Func Offset: 0xc4
	// Line 177, Address: 0x2ea568, Func Offset: 0xc8
	// Line 178, Address: 0x2ea56c, Func Offset: 0xcc
	// Line 181, Address: 0x2ea570, Func Offset: 0xd0
	// Line 182, Address: 0x2ea574, Func Offset: 0xd4
	// Line 183, Address: 0x2ea578, Func Offset: 0xd8
	// Line 190, Address: 0x2ea57c, Func Offset: 0xdc
	// Line 203, Address: 0x2ea588, Func Offset: 0xe8
	// Func End, Address: 0x2ea598, Func Offset: 0xf8
}

// 
// Start address: 0x2ea5a0
void Generate_OnePtcl(void* PtclAdr, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	FirePtcl* pPtcl;
	FireCmnData* pCmnDt;
	float Vec1Rate;
	float Vec2Rate;
	// Line 214, Address: 0x2ea5a0, Func Offset: 0
	// Line 216, Address: 0x2ea5b8, Func Offset: 0x18
	// Line 214, Address: 0x2ea5bc, Func Offset: 0x1c
	// Line 215, Address: 0x2ea5c0, Func Offset: 0x20
	// Line 218, Address: 0x2ea5c4, Func Offset: 0x24
	// Line 219, Address: 0x2ea5cc, Func Offset: 0x2c
	// Line 221, Address: 0x2ea5d8, Func Offset: 0x38
	// Line 224, Address: 0x2ea5e4, Func Offset: 0x44
	// Line 226, Address: 0x2ea5ec, Func Offset: 0x4c
	// Line 224, Address: 0x2ea5fc, Func Offset: 0x5c
	// Line 226, Address: 0x2ea604, Func Offset: 0x64
	// Line 227, Address: 0x2ea60c, Func Offset: 0x6c
	// Line 228, Address: 0x2ea618, Func Offset: 0x78
	// Line 229, Address: 0x2ea64c, Func Offset: 0xac
	// Line 230, Address: 0x2ea660, Func Offset: 0xc0
	// Line 229, Address: 0x2ea664, Func Offset: 0xc4
	// Line 230, Address: 0x2ea678, Func Offset: 0xd8
	// Line 232, Address: 0x2ea67c, Func Offset: 0xdc
	// Line 233, Address: 0x2ea698, Func Offset: 0xf8
	// Line 234, Address: 0x2ea6a4, Func Offset: 0x104
	// Func End, Address: 0x2ea6c4, Func Offset: 0x124
}

// 
// Start address: 0x2ea6d0
void FirePtcl_Calc(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	FirePtcl* PtclAry;
	int PtclNo;
	FireCmnData* pCmnDt;
	FirePtcl* pPtcl;
	float MvVec[4];
	// Line 247, Address: 0x2ea6d0, Func Offset: 0
	// Line 248, Address: 0x2ea6ec, Func Offset: 0x1c
	// Line 247, Address: 0x2ea6f0, Func Offset: 0x20
	// Line 252, Address: 0x2ea6f4, Func Offset: 0x24
	// Line 254, Address: 0x2ea704, Func Offset: 0x34
	// Line 256, Address: 0x2ea710, Func Offset: 0x40
	// Line 259, Address: 0x2ea718, Func Offset: 0x48
	// Line 263, Address: 0x2ea72c, Func Offset: 0x5c
	// Line 266, Address: 0x2ea748, Func Offset: 0x78
	// Line 268, Address: 0x2ea788, Func Offset: 0xb8
	// Line 269, Address: 0x2ea7b4, Func Offset: 0xe4
	// Line 270, Address: 0x2ea7c8, Func Offset: 0xf8
	// Line 271, Address: 0x2ea7d4, Func Offset: 0x104
	// Line 270, Address: 0x2ea7e4, Func Offset: 0x114
	// Line 271, Address: 0x2ea7ec, Func Offset: 0x11c
	// Line 272, Address: 0x2ea800, Func Offset: 0x130
	// Line 273, Address: 0x2ea81c, Func Offset: 0x14c
	// Line 274, Address: 0x2ea820, Func Offset: 0x150
	// Line 276, Address: 0x2ea834, Func Offset: 0x164
	// Line 278, Address: 0x2ea83c, Func Offset: 0x16c
	// Line 279, Address: 0x2ea854, Func Offset: 0x184
	// Func End, Address: 0x2ea874, Func Offset: 0x1a4
}

// 
// Start address: 0x2ea880
void renewal_GenerateData(PtclOrgData* pOrgDt, FireCmnData* pCmnDt)
{
	float Vec[4];
	float SpdVal;
	// Line 288, Address: 0x2ea880, Func Offset: 0
	// Line 292, Address: 0x2ea894, Func Offset: 0x14
	// Line 293, Address: 0x2ea8a0, Func Offset: 0x20
	// Line 294, Address: 0x2ea8a8, Func Offset: 0x28
	// Line 295, Address: 0x2ea8c8, Func Offset: 0x48
	// Line 296, Address: 0x2ea904, Func Offset: 0x84
	// Line 298, Address: 0x2ea93c, Func Offset: 0xbc
	// Line 299, Address: 0x2ea958, Func Offset: 0xd8
	// Func End, Address: 0x2ea96c, Func Offset: 0xec
}

// 
// Start address: 0x2ea970
void FirePtcl_Draw(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	FirePtcl* PtclAry;
	int PtclNo;
	FireCmnData* pCmnDt;
	float Wld2ScrMat[4][4];
	float View2ScrMat[4][4];
	float RotZ2CamZMat[4][4];
	_anon1* pPkTop;
	_anon1* pPk;
	_anon1* pGifTag;
	unsigned long Tex0;
	unsigned long AlphaReg;
	float View2WldMat[4][4];
	float CamAngY;
	float CamAngX;
	_anon0* pTex;
	unsigned int cbp;
	FirePtcl* pPtcl;
	float ScrPos[4];
	float Lcl2ScrMat[4][4];
	float inv_w;
	float Lcl2WldMat[4][4];
	int qwc;
	// Line 312, Address: 0x2ea970, Func Offset: 0
	// Line 322, Address: 0x2ea974, Func Offset: 0x4
	// Line 312, Address: 0x2ea978, Func Offset: 0x8
	// Line 322, Address: 0x2ea97c, Func Offset: 0xc
	// Line 312, Address: 0x2ea980, Func Offset: 0x10
	// Line 322, Address: 0x2ea984, Func Offset: 0x14
	// Line 312, Address: 0x2ea988, Func Offset: 0x18
	// Line 315, Address: 0x2ea98c, Func Offset: 0x1c
	// Line 312, Address: 0x2ea990, Func Offset: 0x20
	// Line 313, Address: 0x2ea994, Func Offset: 0x24
	// Line 312, Address: 0x2ea998, Func Offset: 0x28
	// Line 324, Address: 0x2ea9ac, Func Offset: 0x3c
	// Line 312, Address: 0x2ea9b0, Func Offset: 0x40
	// Line 322, Address: 0x2ea9bc, Func Offset: 0x4c
	// Line 324, Address: 0x2ea9c0, Func Offset: 0x50
	// Line 325, Address: 0x2ea9c8, Func Offset: 0x58
	// Line 329, Address: 0x2ea9d0, Func Offset: 0x60
	// Line 330, Address: 0x2ea9d8, Func Offset: 0x68
	// Line 331, Address: 0x2ea9e8, Func Offset: 0x78
	// Line 334, Address: 0x2eaa08, Func Offset: 0x98
	// Line 335, Address: 0x2eaa24, Func Offset: 0xb4
	// Line 343, Address: 0x2eaa34, Func Offset: 0xc4
	// Line 345, Address: 0x2eaa40, Func Offset: 0xd0
	// Line 343, Address: 0x2eaa44, Func Offset: 0xd4
	// Line 345, Address: 0x2eaa48, Func Offset: 0xd8
	// Line 346, Address: 0x2eaa50, Func Offset: 0xe0
	// Line 350, Address: 0x2eaa70, Func Offset: 0x100
	// Line 351, Address: 0x2eaa7c, Func Offset: 0x10c
	// Line 350, Address: 0x2eaa80, Func Offset: 0x110
	// Line 351, Address: 0x2eaa8c, Func Offset: 0x11c
	// Line 356, Address: 0x2eaa98, Func Offset: 0x128
	// Line 351, Address: 0x2eaa9c, Func Offset: 0x12c
	// Line 356, Address: 0x2eaaa0, Func Offset: 0x130
	// Line 355, Address: 0x2eaaa4, Func Offset: 0x134
	// Line 356, Address: 0x2eaaa8, Func Offset: 0x138
	// Line 362, Address: 0x2eaaac, Func Offset: 0x13c
	// Line 356, Address: 0x2eaab0, Func Offset: 0x140
	// Line 364, Address: 0x2eaab4, Func Offset: 0x144
	// Line 356, Address: 0x2eaab8, Func Offset: 0x148
	// Line 361, Address: 0x2eaabc, Func Offset: 0x14c
	// Line 356, Address: 0x2eaac0, Func Offset: 0x150
	// Line 364, Address: 0x2eaac4, Func Offset: 0x154
	// Line 366, Address: 0x2eaad0, Func Offset: 0x160
	// Line 371, Address: 0x2eaad8, Func Offset: 0x168
	// Line 374, Address: 0x2eaaec, Func Offset: 0x17c
	// Line 376, Address: 0x2eab04, Func Offset: 0x194
	// Line 377, Address: 0x2eab30, Func Offset: 0x1c0
	// Line 380, Address: 0x2eab4c, Func Offset: 0x1dc
	// Line 381, Address: 0x2eab58, Func Offset: 0x1e8
	// Line 380, Address: 0x2eab60, Func Offset: 0x1f0
	// Line 381, Address: 0x2eab64, Func Offset: 0x1f4
	// Line 383, Address: 0x2eab80, Func Offset: 0x210
	// Line 390, Address: 0x2eabc8, Func Offset: 0x258
	// Line 391, Address: 0x2eabdc, Func Offset: 0x26c
	// Line 396, Address: 0x2eabe0, Func Offset: 0x270
	// Line 391, Address: 0x2eabe4, Func Offset: 0x274
	// Line 396, Address: 0x2eabe8, Func Offset: 0x278
	// Line 392, Address: 0x2eabec, Func Offset: 0x27c
	// Line 396, Address: 0x2eabf0, Func Offset: 0x280
	// Line 393, Address: 0x2eabf4, Func Offset: 0x284
	// Line 394, Address: 0x2eabf8, Func Offset: 0x288
	// Line 391, Address: 0x2eabfc, Func Offset: 0x28c
	// Line 392, Address: 0x2eac04, Func Offset: 0x294
	// Line 393, Address: 0x2eac10, Func Offset: 0x2a0
	// Line 394, Address: 0x2eac1c, Func Offset: 0x2ac
	// Line 396, Address: 0x2eac28, Func Offset: 0x2b8
	// Line 397, Address: 0x2eac98, Func Offset: 0x328
	// Line 399, Address: 0x2eaca4, Func Offset: 0x334
	// Line 404, Address: 0x2ead20, Func Offset: 0x3b0
	// Line 405, Address: 0x2ead38, Func Offset: 0x3c8
	// Line 406, Address: 0x2ead4c, Func Offset: 0x3dc
	// Line 409, Address: 0x2ead68, Func Offset: 0x3f8
	// Line 406, Address: 0x2ead6c, Func Offset: 0x3fc
	// Line 409, Address: 0x2ead78, Func Offset: 0x408
	// Line 406, Address: 0x2ead7c, Func Offset: 0x40c
	// Line 409, Address: 0x2ead8c, Func Offset: 0x41c
	// Line 410, Address: 0x2ead9c, Func Offset: 0x42c
	// Line 411, Address: 0x2eada4, Func Offset: 0x434
	// Line 412, Address: 0x2eadac, Func Offset: 0x43c
	// Line 413, Address: 0x2eadbc, Func Offset: 0x44c
	// Line 414, Address: 0x2eadc0, Func Offset: 0x450
	// Line 416, Address: 0x2eadd0, Func Offset: 0x460
	// Func End, Address: 0x2eae04, Func Offset: 0x494
}

// 
// Start address: 0x2eae10
_anon1* Make_Fire_Packet(_anon1* pPk, FirePtcl* pPtcl, FireCmnData* pCmnDt, float Lcl2ScrMat[4])
{
	_anon1* pSavePk;
	float inv_w;
	int AnimTexNo;
	int VtNo;
	int STNo;
	float RedGreen;
	float Blue;
	float Alpha;
	float Center2LclPosVec[4][4];
	float TimeAlphaRate;
	float StartTime;
	float Time;
	float ScrPos[4];
	int fog_val;
	float STQVec[4][4];
	// Line 446, Address: 0x2eae10, Func Offset: 0
	// Line 430, Address: 0x2eae14, Func Offset: 0x4
	// Line 446, Address: 0x2eae18, Func Offset: 0x8
	// Line 453, Address: 0x2eae1c, Func Offset: 0xc
	// Line 446, Address: 0x2eae20, Func Offset: 0x10
	// Line 453, Address: 0x2eae24, Func Offset: 0x14
	// Line 446, Address: 0x2eae28, Func Offset: 0x18
	// Line 453, Address: 0x2eae34, Func Offset: 0x24
	// Line 446, Address: 0x2eae3c, Func Offset: 0x2c
	// Line 453, Address: 0x2eae50, Func Offset: 0x40
	// Line 454, Address: 0x2eae70, Func Offset: 0x60
	// Line 455, Address: 0x2eae80, Func Offset: 0x70
	// Line 459, Address: 0x2eae90, Func Offset: 0x80
	// Line 460, Address: 0x2eaeb0, Func Offset: 0xa0
	// Line 461, Address: 0x2eaeb8, Func Offset: 0xa8
	// Line 462, Address: 0x2eaee4, Func Offset: 0xd4
	// Line 463, Address: 0x2eaf04, Func Offset: 0xf4
	// Line 464, Address: 0x2eaf10, Func Offset: 0x100
	// Line 466, Address: 0x2eaf18, Func Offset: 0x108
	// Line 476, Address: 0x2eaf24, Func Offset: 0x114
	// Line 466, Address: 0x2eaf28, Func Offset: 0x118
	// Line 473, Address: 0x2eaf30, Func Offset: 0x120
	// Line 474, Address: 0x2eaf34, Func Offset: 0x124
	// Line 476, Address: 0x2eaf38, Func Offset: 0x128
	// Line 477, Address: 0x2eaf44, Func Offset: 0x134
	// Line 478, Address: 0x2eaf48, Func Offset: 0x138
	// Line 477, Address: 0x2eaf4c, Func Offset: 0x13c
	// Line 478, Address: 0x2eaf50, Func Offset: 0x140
	// Line 479, Address: 0x2eaf54, Func Offset: 0x144
	// Line 480, Address: 0x2eaf84, Func Offset: 0x174
	// Line 481, Address: 0x2eaf88, Func Offset: 0x178
	// Line 480, Address: 0x2eaf8c, Func Offset: 0x17c
	// Line 481, Address: 0x2eaf90, Func Offset: 0x180
	// Line 480, Address: 0x2eaf94, Func Offset: 0x184
	// Line 481, Address: 0x2eaf98, Func Offset: 0x188
	// Line 480, Address: 0x2eafa0, Func Offset: 0x190
	// Line 481, Address: 0x2eafa8, Func Offset: 0x198
	// Line 480, Address: 0x2eafac, Func Offset: 0x19c
	// Line 481, Address: 0x2eafb0, Func Offset: 0x1a0
	// Line 480, Address: 0x2eafb4, Func Offset: 0x1a4
	// Line 481, Address: 0x2eafb8, Func Offset: 0x1a8
	// Line 482, Address: 0x2eafc4, Func Offset: 0x1b4
	// Line 483, Address: 0x2eafd0, Func Offset: 0x1c0
	// Line 484, Address: 0x2eafd8, Func Offset: 0x1c8
	// Line 487, Address: 0x2eafe0, Func Offset: 0x1d0
	// Line 488, Address: 0x2eafe4, Func Offset: 0x1d4
	// Line 487, Address: 0x2eb010, Func Offset: 0x200
	// Line 488, Address: 0x2eb014, Func Offset: 0x204
	// Line 492, Address: 0x2eb088, Func Offset: 0x278
	// Line 494, Address: 0x2eb0bc, Func Offset: 0x2ac
	// Line 495, Address: 0x2eb0cc, Func Offset: 0x2bc
	// Line 496, Address: 0x2eb0d4, Func Offset: 0x2c4
	// Line 497, Address: 0x2eb0d8, Func Offset: 0x2c8
	// Line 498, Address: 0x2eb0e0, Func Offset: 0x2d0
	// Line 500, Address: 0x2eb0fc, Func Offset: 0x2ec
	// Line 503, Address: 0x2eb138, Func Offset: 0x328
	// Line 509, Address: 0x2eb140, Func Offset: 0x330
	// Line 508, Address: 0x2eb144, Func Offset: 0x334
	// Line 509, Address: 0x2eb14c, Func Offset: 0x33c
	// Line 511, Address: 0x2eb160, Func Offset: 0x350
	// Line 510, Address: 0x2eb164, Func Offset: 0x354
	// Line 511, Address: 0x2eb168, Func Offset: 0x358
	// Line 512, Address: 0x2eb180, Func Offset: 0x370
	// Line 515, Address: 0x2eb184, Func Offset: 0x374
	// Line 516, Address: 0x2eb1b4, Func Offset: 0x3a4
	// Line 517, Address: 0x2eb1e8, Func Offset: 0x3d8
	// Line 518, Address: 0x2eb218, Func Offset: 0x408
	// Line 519, Address: 0x2eb24c, Func Offset: 0x43c
	// Line 522, Address: 0x2eb250, Func Offset: 0x440
	// Line 523, Address: 0x2eb25c, Func Offset: 0x44c
	// Line 524, Address: 0x2eb270, Func Offset: 0x460
	// Line 525, Address: 0x2eb278, Func Offset: 0x468
	// Line 526, Address: 0x2eb27c, Func Offset: 0x46c
	// Line 528, Address: 0x2eb28c, Func Offset: 0x47c
	// Line 529, Address: 0x2eb290, Func Offset: 0x480
	// Func End, Address: 0x2eb298, Func Offset: 0x488
}

