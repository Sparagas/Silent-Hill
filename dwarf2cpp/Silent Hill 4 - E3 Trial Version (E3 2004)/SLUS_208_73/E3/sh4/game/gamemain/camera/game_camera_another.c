typedef struct CamDriveArea;
typedef struct CamMvFuncInfo;
typedef struct CamAreaRefInfo;
typedef struct CamMvChaseArg;
typedef struct _GAME_WORK;
typedef struct CameraAnotherWork;
typedef struct CamMvCircumArg;
typedef struct CamSceneData;
typedef struct CamMvLimitAngleArg;
typedef struct CamLineArea;
typedef struct CamMvCmprxCircumArg;
typedef struct sfObj;
typedef union _anon0;
typedef struct EileenChkCamData;
typedef union CamMoveArgUnion;
typedef struct _anon1;
typedef enum PlayerExtStatus : unsigned char;
typedef struct CamMakeView;
typedef struct CamLimitView;
typedef struct CamMvUnknownArg;
typedef enum CamSceneDataType : unsigned char;
typedef enum GameItem : unsigned char;

typedef void(*type_5)();
typedef void(*type_12)(CamDriveArea*, int);
typedef void(*type_23)(CamDriveArea*);
typedef void(*type_58)(sfObj*);
typedef void(*type_71)();
typedef void(*type_73)();
typedef void(*type_82)(CamDriveArea*, int);
typedef void(*type_86)(CamDriveArea*, int);
typedef void(*type_91)(CamDriveArea*);
typedef void(*type_93)(sfObj*);
typedef void(*type_95)(CamDriveArea*);
typedef void(*type_129)();
typedef void(*type_144)(CamDriveArea*, int);
typedef int(*type_150)();
typedef void(*type_151)(CamDriveArea*);
typedef void(*type_188)();
typedef void(*type_195)();
typedef void(*type_207)(CamDriveArea*, int);
typedef void(*type_213)(CamDriveArea*, int);
typedef void(*type_217)(CamDriveArea*);
typedef void(*type_223)(CamDriveArea*);

typedef CamDriveArea type_0[2];
typedef CamDriveArea type_1[4];
typedef CamDriveArea type_2[5];
typedef CamDriveArea type_3[1];
typedef CamAreaRefInfo type_4[3];
typedef CamAreaRefInfo type_6[4];
typedef _anon1 type_7[2];
typedef float type_8[4];
typedef CamDriveArea type_9[8];
typedef CamAreaRefInfo type_10[4];
typedef CamAreaRefInfo type_11[3];
typedef CamDriveArea type_13[1];
typedef CamDriveArea type_14[5];
typedef CamDriveArea type_15[1];
typedef CamDriveArea type_16[2];
typedef int type_17[1];
typedef CamDriveArea type_18[4];
typedef CamDriveArea type_19[1];
typedef CamDriveArea type_20[1];
typedef CamDriveArea type_21[5];
typedef CamDriveArea type_22[2];
typedef CamDriveArea type_24[2];
typedef float type_25[2];
typedef int type_26[1];
typedef CamDriveArea type_27[2];
typedef CamMvFuncInfo type_28[5];
typedef CamAreaRefInfo type_29[5];
typedef CamAreaRefInfo type_30[6];
typedef CamDriveArea type_31[1];
typedef CamDriveArea type_32[4];
typedef CamDriveArea type_33[1];
typedef CamDriveArea type_34[1];
typedef CamDriveArea type_35[2];
typedef CamDriveArea type_36[2];
typedef CamDriveArea type_37[1];
typedef CamDriveArea type_38[10];
typedef CamDriveArea type_39[1];
typedef CamDriveArea* type_40[16];
typedef CamDriveArea type_41[2];
typedef CamDriveArea type_42[1];
typedef EileenChkCamData type_43[21];
typedef CamDriveArea type_44[3];
typedef CamDriveArea type_45[4];
typedef CamDriveArea type_46[4];
typedef CamDriveArea type_47[2];
typedef int type_48[1];
typedef CamDriveArea type_49[1];
typedef CamDriveArea type_50[1];
typedef CamDriveArea type_51[2];
typedef CamAreaRefInfo type_52[2];
typedef CamDriveArea type_53[1];
typedef _anon0 type_54[256];
typedef float type_55[4];
typedef CamAreaRefInfo type_56[5];
typedef float type_57[3];
typedef CamDriveArea type_59[4];
typedef CamDriveArea type_60[1];
typedef CamDriveArea type_61[1];
typedef CamDriveArea type_62[2];
typedef CamDriveArea type_63[2];
typedef CamDriveArea type_64[6];
typedef CamDriveArea type_65[2];
typedef CamDriveArea type_66[2];
typedef float type_67[4];
typedef CamDriveArea type_68[1];
typedef float type_69[4][4];
typedef CamDriveArea type_70[1];
typedef CamDriveArea type_72[1];
typedef CamDriveArea type_74[2];
typedef CamDriveArea type_75[1];
typedef CamDriveArea type_76[2];
typedef float type_77[20];
typedef CamDriveArea type_78[1];
typedef CamDriveArea type_79[3];
typedef CamDriveArea type_80[1];
typedef CamAreaRefInfo type_81[5];
typedef CamDriveArea type_83[1];
typedef CamDriveArea type_84[2];
typedef CamDriveArea type_85[2];
typedef CamDriveArea type_87[6];
typedef CamDriveArea type_88[1];
typedef CamAreaRefInfo type_89[5];
typedef CamDriveArea type_90[1];
typedef CamDriveArea type_92[1];
typedef CamDriveArea type_94[3];
typedef CamDriveArea type_96[2];
typedef CamDriveArea type_97[3];
typedef CamDriveArea type_98[1];
typedef CamDriveArea type_99[3];
typedef CamAreaRefInfo type_100[4];
typedef CamDriveArea type_101[3];
typedef CamDriveArea type_102[3];
typedef CamDriveArea type_103[4];
typedef CamDriveArea type_104[2];
typedef CamDriveArea type_105[2];
typedef CamAreaRefInfo type_106[3];
typedef CamDriveArea type_107[1];
typedef CamDriveArea type_108[2];
typedef CamAreaRefInfo type_109[3];
typedef CamDriveArea type_110[1];
typedef CamDriveArea type_111[6];
typedef CamDriveArea type_112[2];
typedef char type_113[16];
typedef CamDriveArea type_114[1];
typedef CamDriveArea type_115[7];
typedef CamDriveArea type_116[1];
typedef CamDriveArea type_117[5];
typedef CamDriveArea type_118[1];
typedef CamDriveArea type_119[2];
typedef CamDriveArea type_120[1];
typedef CamDriveArea type_121[2];
typedef CamDriveArea type_122[5];
typedef float type_123[8];
typedef CamDriveArea type_124[9];
typedef CamDriveArea type_125[2];
typedef CamAreaRefInfo type_126[5];
typedef CamDriveArea type_127[2];
typedef CamAreaRefInfo type_128[4];
typedef CamAreaRefInfo type_130[5];
typedef CamDriveArea type_131[15];
typedef CamDriveArea type_132[1];
typedef CamDriveArea type_133[2];
typedef CamDriveArea type_134[5];
typedef CamDriveArea type_135[4];
typedef CamDriveArea type_136[2];
typedef CamDriveArea type_137[2];
typedef CamSceneData type_138[208];
typedef CamDriveArea type_139[1];
typedef CamDriveArea type_140[3];
typedef float type_141[3];
typedef CamAreaRefInfo type_142[6];
typedef CamDriveArea type_143[6];
typedef float type_145[3];
typedef CamDriveArea type_146[1];
typedef CamDriveArea type_147[1];
typedef CamDriveArea type_148[3];
typedef CamDriveArea type_149[2];
typedef CamDriveArea type_152[4];
typedef short type_153[2];
typedef CamDriveArea type_154[2];
typedef CamDriveArea type_155[1];
typedef CamAreaRefInfo type_156[1];
typedef CamAreaRefInfo type_157[4];
typedef unsigned short type_158[2];
typedef CamDriveArea type_159[1];
typedef float type_160[2];
typedef char type_161[4];
typedef CamDriveArea type_162[3];
typedef float type_163[3];
typedef CamDriveArea type_164[2];
typedef CamDriveArea type_165[1];
typedef CamDriveArea type_166[7];
typedef unsigned char type_167[4];
typedef int type_168[1];
typedef CamDriveArea type_169[2];
typedef CamDriveArea type_170[1];
typedef CamDriveArea type_171[2];
typedef CamDriveArea type_172[1];
typedef CamDriveArea type_173[2];
typedef float type_174[2];
typedef float type_175[1];
typedef int type_176[1];
typedef CamDriveArea type_177[4];
typedef CamDriveArea type_178[1];
typedef float type_179[2];
typedef float type_180[3];
typedef int type_181[1];
typedef CamDriveArea type_182[1];
typedef CamAreaRefInfo type_183[4];
typedef float type_184[3];
typedef CamDriveArea type_185[1];
typedef CamDriveArea type_186[1];
typedef CamAreaRefInfo type_187[4];
typedef CamDriveArea type_189[1];
typedef CamDriveArea type_190[3];
typedef CamDriveArea type_191[8];
typedef float type_192[4];
typedef CamDriveArea type_193[2];
typedef CamDriveArea type_194[3];
typedef CamDriveArea type_196[4];
typedef CamDriveArea type_197[3];
typedef CamDriveArea type_198[2];
typedef CamDriveArea type_199[3];
typedef CamDriveArea type_200[2];
typedef CamDriveArea type_201[2];
typedef CamDriveArea type_202[2];
typedef CamAreaRefInfo type_203[8];
typedef CamDriveArea type_204[1];
typedef CamDriveArea type_205[1];
typedef int type_206[1];
typedef CamAreaRefInfo type_208[4];
typedef CamDriveArea type_209[4];
typedef CamDriveArea type_210[1];
typedef CamDriveArea type_211[3];
typedef CamAreaRefInfo type_212[3];
typedef CamDriveArea type_214[4];
typedef CamDriveArea type_215[1];
typedef CamDriveArea type_216[1];
typedef CamDriveArea type_218[4];
typedef CamDriveArea type_219[1];
typedef float type_220[3];
typedef int type_221[1];
typedef CamDriveArea type_222[2];
typedef CamDriveArea type_224[1];
typedef CamDriveArea type_225[2];
typedef CamDriveArea type_226[4];

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

struct CamMvFuncInfo
{
	void(*SceneInitFunc)();
	void(*ChgTypeInitFunc)(CamDriveArea*, int);
	void(*main_func)(CamDriveArea*);
};

struct CamAreaRefInfo
{
	CamDriveArea* pSrcArea;
	float SrcRotCenterXYZ[3];
	float AfterRotAddXYZ[3];
	float RotAngY;
	short NegX_Flag;
	short NegZ_Flag;
};

struct CamMvChaseArg
{
	CamLineArea CamMoveArea;
	CamMakeView MakeView;
	float ControlCamCircleRadius;
	float ControlCamCircleFwdOffset;
	float Player2CamY;
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

struct CameraAnotherWork
{
	int DebugCamMode;
	int FirstCamJumpTimes;
	int SceneNo;
	CamSceneData* pCamScene;
	float SceneOrgWPos[4];
	int CamUseDataNo;
	float KeepCamMat[4][4];
	float KeepPadFwdVec[4];
	float KeepFwdVecDownTimer;
	float KeepAnalogPadLX;
	float KeepAnalogPadLY;
	float ControlPos[4];
	float PrevPlayerPos[4];
	CamDriveArea* pUseArea;
	CamMvFuncInfo CamMvFuncInfoAry[5];
	int UseCamMvAreaNum;
	CamDriveArea* pUseCamMvAreaAry[16];
	float PlayerMoveRate;
	float EileenLookSubTimer;
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

struct CamSceneData
{
	int StageNo;
	int SceneNo;
	union
	{
		void* DataAry;
		CamDriveArea* DriveAreaAry;
		CamAreaRefInfo* AreaRefInfoAry;
	};
	int DriveAreaNum;
	CamSceneDataType Type;
};

struct CamMvLimitAngleArg
{
	CamLineArea CamMoveArea;
	float Watch2CamVecXYZ[3];
	CamMakeView MakeView;
	CamLimitView LimView;
	float L2ChgType;
};

struct CamLineArea
{
	float Pos0XYZ[3];
	float Pos1XYZ[3];
	float Radius;
	float CylinderMode;
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

struct EileenChkCamData
{
	float EileenZ;
	int CamDataNo;
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

enum CamSceneDataType : unsigned char
{
	CSD_NULL,
	CSD_DIRECT,
	CSD_REFFER
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

CamDriveArea Dflt_OutDoorChase[1];
CamDriveArea Dflt_RoomChase[1];
CamDriveArea fr01_CamDriveAry[3];
CamDriveArea fr02_CamDriveAry[3];
CamDriveArea fr03_CamDriveAry[2];
CamDriveArea fr04_CamDriveAry[2];
CamDriveArea fr05_CamDriveAry[2];
CamDriveArea fr07_CamDriveAry[6];
CamDriveArea fr08_CamDriveAry[4];
CamDriveArea fr09_CamDriveAry[6];
CamDriveArea fr10_CamDriveAry[4];
CamDriveArea fr11_CamDriveAry[3];
CamDriveArea fr12_CamDriveAry[3];
CamDriveArea fr13_CamDriveAry[4];
CamAreaRefInfo fr13_CamRefInfoAry[4];
CamDriveArea fr14_CamDriveAry[4];
CamDriveArea fr15_CamDriveAry[4];
CamDriveArea fr17_CamDriveAry[5];
CamDriveArea fr20_CamDriveAry[3];
CamDriveArea fr22_CamDriveAry[1];
CamDriveArea fr23_CamDriveAry[2];
CamDriveArea br01_CamDriveAry[4];
CamDriveArea br02_CamDriveAry[3];
CamDriveArea br03_CamDriveAry[3];
CamDriveArea br04_CamDriveAry[6];
CamDriveArea br05_CamDriveAry[1];
CamDriveArea br06_CamDriveAry[1];
CamDriveArea br07_CamDriveAry[2];
CamDriveArea br08_CamDriveAry[1];
CamDriveArea br10_CamDriveAry[4];
CamDriveArea br11_CamDriveAry[4];
CamDriveArea br12_CamDriveAry[1];
CamDriveArea br13_CamDriveAry[1];
CamDriveArea br14_CamDriveAry[1];
CamDriveArea br16_CamDriveAry[1];
CamDriveArea br17_CamDriveAry[4];
CamDriveArea br18_CamDriveAry[3];
CamDriveArea br19_CamDriveAry[2];
CamDriveArea br20_CamDriveAry[2];
CamDriveArea br21_CamDriveAry[3];
CamDriveArea br22_CamDriveAry[10];
CamDriveArea br23_CamDriveAry[3];
CamDriveArea br24_CamDriveAry[1];
CamDriveArea br25_CamDriveAry[2];
CamDriveArea br26_CamDriveAry[1];
CamDriveArea br27_CamDriveAry[2];
CamDriveArea br28_CamDriveAry[4];
CamDriveArea mz01_CamDriveAry[1];
CamDriveArea mz02_CamDriveAry[2];
CamDriveArea mz03_CamDriveAry[1];
CamDriveArea mz04_CamDriveAry[2];
CamDriveArea mz05_CamDriveAry[2];
CamDriveArea mz06_CamDriveAry[2];
CamDriveArea mz07_CamDriveAry[2];
CamDriveArea mz08_CamDriveAry[2];
CamDriveArea mz09_CamDriveAry[2];
CamDriveArea mz10_CamDriveAry[2];
CamDriveArea mz11_CamDriveAry[1];
CamDriveArea mz12_CamDriveAry[2];
CamDriveArea mz13_CamDriveAry[1];
CamDriveArea mz14_CamDriveAry[2];
CamDriveArea mz15_CamDriveAry[2];
CamDriveArea mz16_CamDriveAry[2];
CamDriveArea mz17_CamDriveAry[2];
CamDriveArea mz18_CamDriveAry[2];
CamDriveArea mz19_CamDriveAry[2];
CamDriveArea mz20_CamDriveAry[2];
CamDriveArea mz21_CamDriveAry[1];
CamDriveArea mz22_CamDriveAry[1];
CamDriveArea mz23_CamDriveAry[1];
CamDriveArea mz24_CamDriveAry[1];
CamDriveArea mz25_CamDriveAry[1];
CamDriveArea mz26_CamDriveAry[1];
CamDriveArea mz27_CamDriveAry[1];
CamDriveArea mz28_CamDriveAry[1];
CamDriveArea mz29_CamDriveAry[1];
CamDriveArea mz30_CamDriveAry[1];
CamDriveArea mz31_CamDriveAry[2];
CamDriveArea mz32_CamDriveAry[5];
CamDriveArea mz33_CamDriveAry[3];
CamDriveArea mz34_CamDriveAry[2];
CamDriveArea mz35_CamDriveAry[1];
CamDriveArea mz39_CamDriveAry[1];
CamDriveArea mz40_CamDriveAry[1];
CamDriveArea mz42_CamDriveAry[3];
CamDriveArea mz43_CamDriveAry[1];
CamDriveArea sb01_CamDriveAry[2];
CamDriveArea sb02_CamDriveAry[1];
CamDriveArea sb03_CamDriveAry[4];
CamDriveArea sb04_CamDriveAry[6];
CamDriveArea sb05_CamDriveAry[4];
CamDriveArea sb07_CamDriveAry[9];
CamDriveArea sb08_CamDriveAry[5];
CamDriveArea sb09_CamDriveAry[5];
CamDriveArea sb10_CamDriveAry[1];
CamDriveArea sb11_CamDriveAry[1];
CamDriveArea sb12_CamDriveAry[3];
CamDriveArea sb13_CamDriveAry[2];
CamDriveArea sb14_CamDriveAry[7];
CamDriveArea sb15_CamDriveAry[1];
CamDriveArea sb16_CamDriveAry[5];
CamDriveArea sb17_CamDriveAry[4];
CamDriveArea sb18_CamDriveAry[5];
CamDriveArea sb19_CamDriveAry[2];
CamDriveArea sb22_CamDriveAry[7];
CamDriveArea sb23_CamDriveAry[1];
CamDriveArea ie05_TsuroFront;
CamDriveArea ie06_Monooki;
CamDriveArea ie06_TsuroAll;
CamDriveArea ie07_LivingKitchen;
CamDriveArea ie07_TsuroFront;
CamDriveArea ie07_TsuroBack;
CamDriveArea ie07_ToiletBL;
CamDriveArea ie07_RoomBackR;
CamDriveArea ie08_ToiletFL;
CamDriveArea ie09_LivingKitchen;
CamDriveArea ie09_TsuroFront;
CamDriveArea ie09_RoomFrontR;
CamDriveArea ie10_TsuroAll;
CamDriveArea ie10_OriFrontR;
CamDriveArea ie10_RoomIE10;
CamDriveArea ie13_RoomBackL;
CamDriveArea ie14_RoomFrontL;
CamDriveArea cm15_OriBackL;
CamDriveArea ie07_for_cm15_LivingKitchen;
CamDriveArea ie16_RoomFrontR;
CamDriveArea ie18_BigMonooki;
CamDriveArea ie18_RoomBackR;
CamDriveArea cm21_TsuroFront;
CamDriveArea cm21_TsuroFrontEnd;
CamDriveArea cm21_ToiletFrontR;
CamDriveArea ie22_RoomFrontR;
CamDriveArea ie01_CamDriveAry[8];
CamDriveArea ie02_CamDriveAry[1];
CamDriveArea ie04_CamDriveAry[4];
CamAreaRefInfo ie05_CamRefInfoAry[2];
CamAreaRefInfo ie06_CamRefInfoAry[6];
CamAreaRefInfo ie07_CamRefInfoAry[5];
CamAreaRefInfo ie08_CamRefInfoAry[5];
CamAreaRefInfo ie09_CamRefInfoAry[3];
CamAreaRefInfo ie10_CamRefInfoAry[4];
CamAreaRefInfo ie13_CamRefInfoAry[4];
CamAreaRefInfo ie14_CamRefInfoAry[3];
CamAreaRefInfo ie15_CamRefInfoAry[3];
CamAreaRefInfo ie16_CamRefInfoAry[5];
CamAreaRefInfo ie17_CamRefInfoAry[4];
CamAreaRefInfo ie18_CamRefInfoAry[5];
CamAreaRefInfo ie19_CamRefInfoAry[1];
CamAreaRefInfo ie22_CamRefInfoAry[6];
CamAreaRefInfo ie23_CamRefInfoAry[4];
CamDriveArea cm03_CamDriveAry[2];
CamAreaRefInfo cm08_CamRefInfoAry[5];
CamAreaRefInfo cm10_CamRefInfoAry[4];
CamDriveArea cm12_CamDriveAry[2];
CamAreaRefInfo cm15_CamRefInfoAry[8];
CamAreaRefInfo cm16_CamRefInfoAry[5];
CamAreaRefInfo cm17_CamRefInfoAry[4];
CamDriveArea cm19_WalterFireFromTsuro;
CamDriveArea cm19_DoorFront;
CamAreaRefInfo cm19_CamRefInfoAry[3];
CamAreaRefInfo cm20_CamRefInfoAry[3];
CamAreaRefInfo cm21_CamRefInfoAry[4];
CamDriveArea cm25_CamDriveAry[1];
CamDriveArea hs01_CamDriveAry[3];
CamDriveArea hs02_CamDriveAry[1];
CamDriveArea hs03_CamDriveAry[1];
CamDriveArea hs04_CamDriveAry[2];
CamDriveArea hs06_CamDriveAry[1];
CamDriveArea hs08_CamDriveAry[4];
CamDriveArea hs09_CamDriveAry[1];
CamDriveArea hs_Dflt_CamDriveAry[1];
CamDriveArea hs_Dflt_2_CamDriveAry[2];
CamDriveArea hs10_CamDriveAry[1];
CamDriveArea hs13_CamDriveAry[1];
CamDriveArea hs14_CamDriveAry[2];
CamDriveArea hs15_CamDriveAry[1];
CamDriveArea hs17_CamDriveAry[1];
CamDriveArea hs18_CamDriveAry[2];
CamDriveArea hs19_CamDriveAry[2];
CamDriveArea hs20_CamDriveAry[2];
CamDriveArea hs21_CamDriveAry[1];
CamDriveArea hs22_CamDriveAry[1];
CamDriveArea hs23_CamDriveAry[1];
CamDriveArea hs24_CamDriveAry[2];
CamDriveArea hs28_CamDriveAry[1];
CamDriveArea hs31_CamDriveAry[2];
CamDriveArea hs32_CamDriveAry[1];
CamDriveArea hs33_CamDriveAry[1];
CamDriveArea hs34_CamDriveAry[2];
CamDriveArea st01_CamDriveAry[2];
CamDriveArea st05_CamDriveAry[3];
CamDriveArea st06_CamDriveAry[1];
CamDriveArea st07_CamDriveAry[2];
CamDriveArea ls01_CamDriveAry[1];
CamDriveArea ls02_CamDriveAry[8];
CamSceneData AllCamSceneData[208];
CameraAnotherWork caW;
void(*GameCameraCmprxCircum_Main)(CamDriveArea*);
void(*GameCameraCmprxCircum_ChangeTypeInit)(CamDriveArea*, int);
void(*GameCameraCmprxCircum_SceneInit)();
void(*GameCameraCircum_Main)(CamDriveArea*);
void(*GameCameraCircum_ChangeTypeInit)(CamDriveArea*, int);
void(*GameCameraCircum_SceneInit)();
void(*GameCameraLimAngle_Main)(CamDriveArea*);
void(*GameCameraLimAngle_ChangeTypeInit)(CamDriveArea*, int);
void(*GameCameraLimAngle_SceneInit)();
void(*GameCameraChase_Main)(CamDriveArea*);
void(*GameCameraChase_ChangeTypeInit)(CamDriveArea*, int);
void(*GameCameraChase_SceneInit)();
void(*GameCameraUnknown_Main)(CamDriveArea*);
void(*GameCameraUnknown_ChangeTypeInit)(CamDriveArea*, int);
void(*GameCameraUnknown_SceneInit)();
_GAME_WORK gamew;
CamSceneData CamSceneRefDestData;
float sg_matrix_unit[4][4];
CamDriveArea DriveAreaDestWork[15];
_anon1 player_ext_info[2];
float sg_vector_unit_y[4];
float sg_vector_zero[4];

void CameraAnotherStageInit();
int CameraAnotherSceneInit();
void scene_init_CameraAnotherWork(CameraAnotherWork* pW);
CamSceneData* get_use_CamSceneData(int NowStageNo, int NowSceneNo);
void make_scene_data_reffer_other_data(CamSceneData* pDestScn, CamSceneData* pInputScn);
void matrix_mul_CamLineArea(CamLineArea* pDestLineArea, float Mat[4], CamLineArea* pSrcLineArea);
float angY_trans_by_CamAreaRefInfo(float SrcAngY, CamAreaRefInfo* pRefInfo);
void CameraAnotherControlPos_Set(float* ControlPos);
float CameraAnotherByPlayerMoveRate_AdjViewAngRate();
void LastStage_SetCameraDataNo();
void set_now_CamUseDataNo(int StageNo, int SceneNo);
void CameraAnotherMain();
void set_camera_another_engine_param(CamDriveArea* pUseArea);
int UseNewAreaFlag_by_DistanceFromControlPos_and_AreaPrioriry(float NewDist, int NewPriority, float DesidedDist, int DesidedPriority);
CamDriveArea* get_renewal_use_CamDriveArea(CamDriveArea* pUseArea, float* ControlPos, CamSceneData* pCamScene, int NowAbalableDataNo);
void make_DistFromControlPos_and_NearestLinePos_of_all_CamDriveArea(float* ControlPos, CamSceneData* pCamScene);
int set_to_UseCamMvAreaAry(CamDriveArea** pUseCamMvAreaAry, CamDriveArea* pUseArea, CamSceneData* pCamScene);
void SetAnalogPadForwordVector(float CamMatPtr[4], _anon1* pPlayerIF, unsigned int ResetKeepValFlag);
void AnarogPadForwardVector(float* FwdVec, float CamMatPtr[4]);
int CameraAnotherAdjustCameraInLineArea(float* AdjCamMvVec, float* CamPos);
void renewalPlayerMoveRate(float* pPlayerMoveRate, float PlayerMvSpdVal);

// 
// Start address: 0x1d3170
void CameraAnotherStageInit()
{
	// Line 220, Address: 0x1d3170, Func Offset: 0
	// Line 222, Address: 0x1d3178, Func Offset: 0x8
	// Line 224, Address: 0x1d3180, Func Offset: 0x10
	// Line 225, Address: 0x1d3188, Func Offset: 0x18
	// Func End, Address: 0x1d3194, Func Offset: 0x24
}

// 
// Start address: 0x1d31a0
int CameraAnotherSceneInit()
{
	int FuncNo;
	// Line 233, Address: 0x1d31a0, Func Offset: 0
	// Line 235, Address: 0x1d31a4, Func Offset: 0x4
	// Line 233, Address: 0x1d31a8, Func Offset: 0x8
	// Line 235, Address: 0x1d31ac, Func Offset: 0xc
	// Line 233, Address: 0x1d31b0, Func Offset: 0x10
	// Line 235, Address: 0x1d31b4, Func Offset: 0x14
	// Line 237, Address: 0x1d31bc, Func Offset: 0x1c
	// Line 238, Address: 0x1d31c8, Func Offset: 0x28
	// Line 239, Address: 0x1d31d4, Func Offset: 0x34
	// Line 238, Address: 0x1d31d8, Func Offset: 0x38
	// Line 239, Address: 0x1d31dc, Func Offset: 0x3c
	// Line 242, Address: 0x1d31e8, Func Offset: 0x48
	// Line 241, Address: 0x1d31ec, Func Offset: 0x4c
	// Line 242, Address: 0x1d31f0, Func Offset: 0x50
	// Func End, Address: 0x1d3200, Func Offset: 0x60
}

// 
// Start address: 0x1d3200
void scene_init_CameraAnotherWork(CameraAnotherWork* pW)
{
	int Times;
	// Line 249, Address: 0x1d3200, Func Offset: 0
	// Line 250, Address: 0x1d3204, Func Offset: 0x4
	// Line 249, Address: 0x1d3208, Func Offset: 0x8
	// Line 250, Address: 0x1d320c, Func Offset: 0xc
	// Line 249, Address: 0x1d3210, Func Offset: 0x10
	// Line 250, Address: 0x1d3214, Func Offset: 0x14
	// Line 252, Address: 0x1d321c, Func Offset: 0x1c
	// Line 255, Address: 0x1d3220, Func Offset: 0x20
	// Line 252, Address: 0x1d3224, Func Offset: 0x24
	// Line 255, Address: 0x1d3228, Func Offset: 0x28
	// Line 256, Address: 0x1d3230, Func Offset: 0x30
	// Line 258, Address: 0x1d3234, Func Offset: 0x34
	// Line 256, Address: 0x1d3238, Func Offset: 0x38
	// Line 258, Address: 0x1d323c, Func Offset: 0x3c
	// Line 260, Address: 0x1d3244, Func Offset: 0x44
	// Line 261, Address: 0x1d3258, Func Offset: 0x58
	// Line 260, Address: 0x1d325c, Func Offset: 0x5c
	// Line 261, Address: 0x1d3260, Func Offset: 0x60
	// Line 262, Address: 0x1d334c, Func Offset: 0x14c
	// Func End, Address: 0x1d335c, Func Offset: 0x15c
}

// 
// Start address: 0x1d3360
CamSceneData* get_use_CamSceneData(int NowStageNo, int NowSceneNo)
{
	int DataNo;
	// Line 271, Address: 0x1d3360, Func Offset: 0
	// Line 273, Address: 0x1d3364, Func Offset: 0x4
	// Line 271, Address: 0x1d3368, Func Offset: 0x8
	// Line 273, Address: 0x1d336c, Func Offset: 0xc
	// Line 279, Address: 0x1d3374, Func Offset: 0x14
	// Line 273, Address: 0x1d337c, Func Offset: 0x1c
	// Line 275, Address: 0x1d3380, Func Offset: 0x20
	// Line 279, Address: 0x1d3398, Func Offset: 0x38
	// Line 281, Address: 0x1d33bc, Func Offset: 0x5c
	// Line 282, Address: 0x1d33c0, Func Offset: 0x60
	// Line 284, Address: 0x1d33c8, Func Offset: 0x68
	// Line 285, Address: 0x1d33d8, Func Offset: 0x78
	// Line 289, Address: 0x1d33e4, Func Offset: 0x84
	// Line 290, Address: 0x1d33f8, Func Offset: 0x98
	// Line 291, Address: 0x1d3400, Func Offset: 0xa0
	// Func End, Address: 0x1d340c, Func Offset: 0xac
}

// 
// Start address: 0x1d3410
void make_scene_data_reffer_other_data(CamSceneData* pDestScn, CamSceneData* pInputScn)
{
	int DtNo;
	CamAreaRefInfo* pRefInfo;
	CamDriveArea* pSrc;
	CamDriveArea* pDest;
	float Mat[4][4];
	float Vec[4];
	CamMvChaseArg* pSrcChase;
	CamMvChaseArg* pDestChase;
	CamMvLimitAngleArg* pSrcLimAng;
	CamMvLimitAngleArg* pDestLimAng;
	CamMvCircumArg* pSrcCircum;
	CamMvCircumArg* pDestCircum;
	CamMvCmprxCircumArg* pSrcCmprx;
	CamMvCmprxCircumArg* pDestCmprx;
	// Line 300, Address: 0x1d3410, Func Offset: 0
	// Line 306, Address: 0x1d3414, Func Offset: 0x4
	// Line 300, Address: 0x1d3418, Func Offset: 0x8
	// Line 306, Address: 0x1d341c, Func Offset: 0xc
	// Line 300, Address: 0x1d3420, Func Offset: 0x10
	// Line 303, Address: 0x1d343c, Func Offset: 0x2c
	// Line 304, Address: 0x1d3444, Func Offset: 0x34
	// Line 306, Address: 0x1d344c, Func Offset: 0x3c
	// Line 307, Address: 0x1d3450, Func Offset: 0x40
	// Line 309, Address: 0x1d3460, Func Offset: 0x50
	// Line 311, Address: 0x1d3468, Func Offset: 0x58
	// Line 314, Address: 0x1d346c, Func Offset: 0x5c
	// Line 312, Address: 0x1d3470, Func Offset: 0x60
	// Line 314, Address: 0x1d3474, Func Offset: 0x64
	// Line 311, Address: 0x1d3480, Func Offset: 0x70
	// Line 314, Address: 0x1d3484, Func Offset: 0x74
	// Line 317, Address: 0x1d348c, Func Offset: 0x7c
	// Line 319, Address: 0x1d3498, Func Offset: 0x88
	// Line 326, Address: 0x1d34a0, Func Offset: 0x90
	// Line 319, Address: 0x1d34a4, Func Offset: 0x94
	// Line 321, Address: 0x1d34ac, Func Offset: 0x9c
	// Line 319, Address: 0x1d34b4, Func Offset: 0xa4
	// Line 321, Address: 0x1d34b8, Func Offset: 0xa8
	// Line 320, Address: 0x1d34bc, Func Offset: 0xac
	// Line 321, Address: 0x1d34c0, Func Offset: 0xb0
	// Line 326, Address: 0x1d34d0, Func Offset: 0xc0
	// Line 329, Address: 0x1d34dc, Func Offset: 0xcc
	// Line 333, Address: 0x1d34e0, Func Offset: 0xd0
	// Line 329, Address: 0x1d34e8, Func Offset: 0xd8
	// Line 330, Address: 0x1d34f0, Func Offset: 0xe0
	// Line 331, Address: 0x1d34fc, Func Offset: 0xec
	// Line 333, Address: 0x1d3508, Func Offset: 0xf8
	// Line 334, Address: 0x1d3514, Func Offset: 0x104
	// Line 335, Address: 0x1d3548, Func Offset: 0x138
	// Line 341, Address: 0x1d3580, Func Offset: 0x170
	// Line 338, Address: 0x1d3584, Func Offset: 0x174
	// Line 341, Address: 0x1d3588, Func Offset: 0x178
	// Line 338, Address: 0x1d3590, Func Offset: 0x180
	// Line 339, Address: 0x1d3594, Func Offset: 0x184
	// Line 340, Address: 0x1d359c, Func Offset: 0x18c
	// Line 341, Address: 0x1d35a4, Func Offset: 0x194
	// Line 342, Address: 0x1d35c8, Func Offset: 0x1b8
	// Line 346, Address: 0x1d35e8, Func Offset: 0x1d8
	// Line 348, Address: 0x1d35f8, Func Offset: 0x1e8
	// Line 352, Address: 0x1d362c, Func Offset: 0x21c
	// Line 353, Address: 0x1d3630, Func Offset: 0x220
	// Line 356, Address: 0x1d3638, Func Offset: 0x228
	// Line 357, Address: 0x1d363c, Func Offset: 0x22c
	// Line 359, Address: 0x1d3640, Func Offset: 0x230
	// Line 360, Address: 0x1d3650, Func Offset: 0x240
	// Line 363, Address: 0x1d365c, Func Offset: 0x24c
	// Line 364, Address: 0x1d3664, Func Offset: 0x254
	// Line 366, Address: 0x1d3668, Func Offset: 0x258
	// Line 367, Address: 0x1d366c, Func Offset: 0x25c
	// Line 369, Address: 0x1d3670, Func Offset: 0x260
	// Line 370, Address: 0x1d3680, Func Offset: 0x270
	// Line 374, Address: 0x1d3684, Func Offset: 0x274
	// Line 371, Address: 0x1d3688, Func Offset: 0x278
	// Line 374, Address: 0x1d368c, Func Offset: 0x27c
	// Line 373, Address: 0x1d3690, Func Offset: 0x280
	// Line 374, Address: 0x1d3694, Func Offset: 0x284
	// Line 370, Address: 0x1d3698, Func Offset: 0x288
	// Line 371, Address: 0x1d369c, Func Offset: 0x28c
	// Line 372, Address: 0x1d36a0, Func Offset: 0x290
	// Line 373, Address: 0x1d36a8, Func Offset: 0x298
	// Line 374, Address: 0x1d36ac, Func Offset: 0x29c
	// Line 375, Address: 0x1d36d4, Func Offset: 0x2c4
	// Line 376, Address: 0x1d36dc, Func Offset: 0x2cc
	// Line 377, Address: 0x1d36e4, Func Offset: 0x2d4
	// Line 380, Address: 0x1d36f0, Func Offset: 0x2e0
	// Line 383, Address: 0x1d36f8, Func Offset: 0x2e8
	// Line 385, Address: 0x1d36fc, Func Offset: 0x2ec
	// Line 389, Address: 0x1d3700, Func Offset: 0x2f0
	// Line 386, Address: 0x1d3704, Func Offset: 0x2f4
	// Line 389, Address: 0x1d3708, Func Offset: 0x2f8
	// Line 388, Address: 0x1d370c, Func Offset: 0x2fc
	// Line 384, Address: 0x1d3710, Func Offset: 0x300
	// Line 389, Address: 0x1d3714, Func Offset: 0x304
	// Line 385, Address: 0x1d3718, Func Offset: 0x308
	// Line 386, Address: 0x1d371c, Func Offset: 0x30c
	// Line 387, Address: 0x1d3720, Func Offset: 0x310
	// Line 388, Address: 0x1d3728, Func Offset: 0x318
	// Line 389, Address: 0x1d372c, Func Offset: 0x31c
	// Line 390, Address: 0x1d3754, Func Offset: 0x344
	// Line 391, Address: 0x1d375c, Func Offset: 0x34c
	// Line 393, Address: 0x1d3760, Func Offset: 0x350
	// Line 396, Address: 0x1d3768, Func Offset: 0x358
	// Line 397, Address: 0x1d376c, Func Offset: 0x35c
	// Line 398, Address: 0x1d3770, Func Offset: 0x360
	// Line 401, Address: 0x1d3778, Func Offset: 0x368
	// Line 402, Address: 0x1d3790, Func Offset: 0x380
	// Func End, Address: 0x1d37b4, Func Offset: 0x3a4
}

// 
// Start address: 0x1d37c0
void matrix_mul_CamLineArea(CamLineArea* pDestLineArea, float Mat[4], CamLineArea* pSrcLineArea)
{
	float Vec[4];
	// Line 414, Address: 0x1d37c0, Func Offset: 0
	// Line 412, Address: 0x1d37c4, Func Offset: 0x4
	// Line 417, Address: 0x1d37c8, Func Offset: 0x8
	// Line 418, Address: 0x1d37cc, Func Offset: 0xc
	// Line 414, Address: 0x1d37d0, Func Offset: 0x10
	// Line 415, Address: 0x1d37d4, Func Offset: 0x14
	// Line 416, Address: 0x1d37dc, Func Offset: 0x1c
	// Line 417, Address: 0x1d37e4, Func Offset: 0x24
	// Line 418, Address: 0x1d37e8, Func Offset: 0x28
	// Line 426, Address: 0x1d3810, Func Offset: 0x50
	// Line 427, Address: 0x1d3818, Func Offset: 0x58
	// Line 419, Address: 0x1d381c, Func Offset: 0x5c
	// Line 427, Address: 0x1d3820, Func Offset: 0x60
	// Line 419, Address: 0x1d3824, Func Offset: 0x64
	// Line 420, Address: 0x1d3828, Func Offset: 0x68
	// Line 421, Address: 0x1d3830, Func Offset: 0x70
	// Line 423, Address: 0x1d3838, Func Offset: 0x78
	// Line 424, Address: 0x1d3840, Func Offset: 0x80
	// Line 425, Address: 0x1d3848, Func Offset: 0x88
	// Line 426, Address: 0x1d3850, Func Offset: 0x90
	// Line 427, Address: 0x1d3854, Func Offset: 0x94
	// Line 428, Address: 0x1d387c, Func Offset: 0xbc
	// Line 429, Address: 0x1d3884, Func Offset: 0xc4
	// Line 430, Address: 0x1d388c, Func Offset: 0xcc
	// Line 431, Address: 0x1d3894, Func Offset: 0xd4
	// Func End, Address: 0x1d389c, Func Offset: 0xdc
}

// 
// Start address: 0x1d38a0
float angY_trans_by_CamAreaRefInfo(float SrcAngY, CamAreaRefInfo* pRefInfo)
{
	// Line 440, Address: 0x1d38a0, Func Offset: 0
	// Line 441, Address: 0x1d38ac, Func Offset: 0xc
	// Line 442, Address: 0x1d38b4, Func Offset: 0x14
	// Line 444, Address: 0x1d38c0, Func Offset: 0x20
	// Line 445, Address: 0x1d38c4, Func Offset: 0x24
	// Line 446, Address: 0x1d38c8, Func Offset: 0x28
	// Line 448, Address: 0x1d38d4, Func Offset: 0x34
	// Line 449, Address: 0x1d38e4, Func Offset: 0x44
	// Line 448, Address: 0x1d38e8, Func Offset: 0x48
	// Line 449, Address: 0x1d38ec, Func Offset: 0x4c
	// Line 450, Address: 0x1d38fc, Func Offset: 0x5c
	// Line 453, Address: 0x1d3900, Func Offset: 0x60
	// Line 456, Address: 0x1d390c, Func Offset: 0x6c
	// Func End, Address: 0x1d391c, Func Offset: 0x7c
}

// 
// Start address: 0x1d3920
void CameraAnotherControlPos_Set(float* ControlPos)
{
	// Line 465, Address: 0x1d3920, Func Offset: 0
	// Line 466, Address: 0x1d392c, Func Offset: 0xc
	// Func End, Address: 0x1d3934, Func Offset: 0x14
}

// 
// Start address: 0x1d3940
float CameraAnotherByPlayerMoveRate_AdjViewAngRate()
{
	// Line 490, Address: 0x1d3940, Func Offset: 0
	// Line 492, Address: 0x1d3964, Func Offset: 0x24
	// Func End, Address: 0x1d396c, Func Offset: 0x2c
}

// 
// Start address: 0x1d3970
void LastStage_SetCameraDataNo()
{
	int ChkNo;
	float ElnPos[4];
	EileenChkCamData* pChk;
	float ChkZ;
	float PrevElnZ;
	EileenChkCamData EileenChkAry[21];
	// Line 536, Address: 0x1d3970, Func Offset: 0
	// Line 566, Address: 0x1d3978, Func Offset: 0x8
	// Line 569, Address: 0x1d3984, Func Offset: 0x14
	// Line 566, Address: 0x1d3988, Func Offset: 0x18
	// Line 569, Address: 0x1d3994, Func Offset: 0x24
	// Line 570, Address: 0x1d399c, Func Offset: 0x2c
	// Line 574, Address: 0x1d39b8, Func Offset: 0x48
	// Line 572, Address: 0x1d39c0, Func Offset: 0x50
	// Line 573, Address: 0x1d39c4, Func Offset: 0x54
	// Line 574, Address: 0x1d39dc, Func Offset: 0x6c
	// Line 575, Address: 0x1d39e0, Func Offset: 0x70
	// Line 577, Address: 0x1d39ec, Func Offset: 0x7c
	// Line 581, Address: 0x1d3a00, Func Offset: 0x90
	// Line 579, Address: 0x1d3a0c, Func Offset: 0x9c
	// Line 581, Address: 0x1d3a10, Func Offset: 0xa0
	// Line 579, Address: 0x1d3a14, Func Offset: 0xa4
	// Line 581, Address: 0x1d3a18, Func Offset: 0xa8
	// Line 583, Address: 0x1d3a20, Func Offset: 0xb0
	// Line 585, Address: 0x1d3a24, Func Offset: 0xb4
	// Line 587, Address: 0x1d3a34, Func Offset: 0xc4
	// Line 588, Address: 0x1d3a38, Func Offset: 0xc8
	// Line 589, Address: 0x1d3a40, Func Offset: 0xd0
	// Line 592, Address: 0x1d3a48, Func Offset: 0xd8
	// Func End, Address: 0x1d3a54, Func Offset: 0xe4
}

// 
// Start address: 0x1d3a60
void set_now_CamUseDataNo(int StageNo, int SceneNo)
{
	// Line 602, Address: 0x1d3a60, Func Offset: 0
	// Line 604, Address: 0x1d3a64, Func Offset: 0x4
	// Line 607, Address: 0x1d3a70, Func Offset: 0x10
	// Line 608, Address: 0x1d3a74, Func Offset: 0x14
	// Line 609, Address: 0x1d3a7c, Func Offset: 0x1c
	// Line 610, Address: 0x1d3a80, Func Offset: 0x20
	// Line 612, Address: 0x1d3a8c, Func Offset: 0x2c
	// Line 613, Address: 0x1d3a94, Func Offset: 0x34
	// Line 614, Address: 0x1d3aa0, Func Offset: 0x40
	// Line 618, Address: 0x1d3aa8, Func Offset: 0x48
	// Func End, Address: 0x1d3ab4, Func Offset: 0x54
}

// 
// Start address: 0x1d3ac0
void CameraAnotherMain()
{
	_anon1* pPlayerIF;
	CamMvFuncInfo* pFuncInfo;
	CamDriveArea* pKeepOldArea;
	int chg_cam_mode;
	int one_frame_mode;
	float PlayerPosMvLen;
	float Vec[4];
	CamDriveArea* pArea;
	CamDriveArea* pArea;
	float CamMatPtr[4];
	// Line 626, Address: 0x1d3ac0, Func Offset: 0
	// Line 631, Address: 0x1d3acc, Func Offset: 0xc
	// Line 626, Address: 0x1d3ad0, Func Offset: 0x10
	// Line 631, Address: 0x1d3ad4, Func Offset: 0x14
	// Line 626, Address: 0x1d3ad8, Func Offset: 0x18
	// Line 641, Address: 0x1d3adc, Func Offset: 0x1c
	// Line 645, Address: 0x1d3ae8, Func Offset: 0x28
	// Line 647, Address: 0x1d3af8, Func Offset: 0x38
	// Line 656, Address: 0x1d3b08, Func Offset: 0x48
	// Line 650, Address: 0x1d3b0c, Func Offset: 0x4c
	// Line 651, Address: 0x1d3b10, Func Offset: 0x50
	// Line 652, Address: 0x1d3b14, Func Offset: 0x54
	// Line 656, Address: 0x1d3b18, Func Offset: 0x58
	// Line 657, Address: 0x1d3b34, Func Offset: 0x74
	// Line 658, Address: 0x1d3b58, Func Offset: 0x98
	// Line 660, Address: 0x1d3b70, Func Offset: 0xb0
	// Line 661, Address: 0x1d3b74, Func Offset: 0xb4
	// Line 664, Address: 0x1d3b78, Func Offset: 0xb8
	// Line 666, Address: 0x1d3b8c, Func Offset: 0xcc
	// Line 668, Address: 0x1d3b9c, Func Offset: 0xdc
	// Line 670, Address: 0x1d3bc0, Func Offset: 0x100
	// Line 672, Address: 0x1d3bc8, Func Offset: 0x108
	// Line 673, Address: 0x1d3bf4, Func Offset: 0x134
	// Line 674, Address: 0x1d3bf8, Func Offset: 0x138
	// Line 677, Address: 0x1d3c08, Func Offset: 0x148
	// Line 681, Address: 0x1d3c10, Func Offset: 0x150
	// Line 685, Address: 0x1d3c18, Func Offset: 0x158
	// Line 686, Address: 0x1d3c20, Func Offset: 0x160
	// Line 689, Address: 0x1d3c3c, Func Offset: 0x17c
	// Line 694, Address: 0x1d3c40, Func Offset: 0x180
	// Line 698, Address: 0x1d3c4c, Func Offset: 0x18c
	// Line 696, Address: 0x1d3c50, Func Offset: 0x190
	// Line 698, Address: 0x1d3c54, Func Offset: 0x194
	// Line 699, Address: 0x1d3c6c, Func Offset: 0x1ac
	// Line 701, Address: 0x1d3c78, Func Offset: 0x1b8
	// Line 703, Address: 0x1d3c80, Func Offset: 0x1c0
	// Line 706, Address: 0x1d3c90, Func Offset: 0x1d0
	// Line 717, Address: 0x1d3cb4, Func Offset: 0x1f4
	// Line 720, Address: 0x1d3cc4, Func Offset: 0x204
	// Line 722, Address: 0x1d3ccc, Func Offset: 0x20c
	// Line 725, Address: 0x1d3cd8, Func Offset: 0x218
	// Line 726, Address: 0x1d3cf4, Func Offset: 0x234
	// Line 732, Address: 0x1d3d00, Func Offset: 0x240
	// Line 731, Address: 0x1d3d08, Func Offset: 0x248
	// Line 732, Address: 0x1d3d10, Func Offset: 0x250
	// Line 739, Address: 0x1d3d18, Func Offset: 0x258
	// Line 740, Address: 0x1d3d28, Func Offset: 0x268
	// Line 741, Address: 0x1d3d38, Func Offset: 0x278
	// Line 742, Address: 0x1d3d44, Func Offset: 0x284
	// Line 800, Address: 0x1d3d48, Func Offset: 0x288
	// Func End, Address: 0x1d3d64, Func Offset: 0x2a4
}

// 
// Start address: 0x1d3d70
void set_camera_another_engine_param(CamDriveArea* pUseArea)
{
	// Line 808, Address: 0x1d3d70, Func Offset: 0
	// Line 809, Address: 0x1d3d74, Func Offset: 0x4
	// Line 812, Address: 0x1d3d7c, Func Offset: 0xc
	// Line 813, Address: 0x1d3d84, Func Offset: 0x14
	// Func End, Address: 0x1d3d94, Func Offset: 0x24
}

// 
// Start address: 0x1d3da0
int UseNewAreaFlag_by_DistanceFromControlPos_and_AreaPrioriry(float NewDist, int NewPriority, float DesidedDist, int DesidedPriority)
{
	// Line 830, Address: 0x1d3da0, Func Offset: 0
	// Line 832, Address: 0x1d3dac, Func Offset: 0xc
	// Line 835, Address: 0x1d3dc8, Func Offset: 0x28
	// Line 839, Address: 0x1d3dd0, Func Offset: 0x30
	// Line 842, Address: 0x1d3df0, Func Offset: 0x50
	// Line 845, Address: 0x1d3df8, Func Offset: 0x58
	// Line 846, Address: 0x1d3e00, Func Offset: 0x60
	// Func End, Address: 0x1d3e08, Func Offset: 0x68
}

// 
// Start address: 0x1d3e10
CamDriveArea* get_renewal_use_CamDriveArea(CamDriveArea* pUseArea, float* ControlPos, CamSceneData* pCamScene, int NowAbalableDataNo)
{
	int AreaNo;
	CamDriveArea* pOtherArea;
	int UseNewAreaFlag;
	CamDriveArea* pArea;
	float NowUseAreaDist;
	// Line 860, Address: 0x1d3e10, Func Offset: 0
	// Line 865, Address: 0x1d3e3c, Func Offset: 0x2c
	// Line 868, Address: 0x1d3e44, Func Offset: 0x34
	// Line 869, Address: 0x1d3e4c, Func Offset: 0x3c
	// Line 872, Address: 0x1d3e50, Func Offset: 0x40
	// Line 875, Address: 0x1d3e60, Func Offset: 0x50
	// Line 876, Address: 0x1d3e74, Func Offset: 0x64
	// Line 879, Address: 0x1d3e78, Func Offset: 0x68
	// Line 881, Address: 0x1d3e90, Func Offset: 0x80
	// Line 882, Address: 0x1d3e98, Func Offset: 0x88
	// Line 886, Address: 0x1d3ea0, Func Offset: 0x90
	// Line 892, Address: 0x1d3eb0, Func Offset: 0xa0
	// Line 893, Address: 0x1d3eb8, Func Offset: 0xa8
	// Line 901, Address: 0x1d3ec8, Func Offset: 0xb8
	// Line 904, Address: 0x1d3ed8, Func Offset: 0xc8
	// Line 907, Address: 0x1d3ee0, Func Offset: 0xd0
	// Line 910, Address: 0x1d3efc, Func Offset: 0xec
	// Line 912, Address: 0x1d3f00, Func Offset: 0xf0
	// Line 915, Address: 0x1d3f08, Func Offset: 0xf8
	// Line 918, Address: 0x1d3f10, Func Offset: 0x100
	// Line 923, Address: 0x1d3f24, Func Offset: 0x114
	// Line 924, Address: 0x1d3f2c, Func Offset: 0x11c
	// Line 927, Address: 0x1d3f30, Func Offset: 0x120
	// Line 929, Address: 0x1d3f48, Func Offset: 0x138
	// Line 932, Address: 0x1d3f50, Func Offset: 0x140
	// Line 936, Address: 0x1d3f58, Func Offset: 0x148
	// Line 937, Address: 0x1d3f60, Func Offset: 0x150
	// Line 943, Address: 0x1d3f68, Func Offset: 0x158
	// Line 945, Address: 0x1d3f7c, Func Offset: 0x16c
	// Line 946, Address: 0x1d3f8c, Func Offset: 0x17c
	// Line 947, Address: 0x1d3f90, Func Offset: 0x180
	// Line 952, Address: 0x1d3fa0, Func Offset: 0x190
	// Line 953, Address: 0x1d3fa8, Func Offset: 0x198
	// Line 955, Address: 0x1d3fb0, Func Offset: 0x1a0
	// Line 958, Address: 0x1d3fb8, Func Offset: 0x1a8
	// Func End, Address: 0x1d3fe0, Func Offset: 0x1d0
}

// 
// Start address: 0x1d3fe0
void make_DistFromControlPos_and_NearestLinePos_of_all_CamDriveArea(float* ControlPos, CamSceneData* pCamScene)
{
	int AreaNo;
	CamDriveArea* pArea;
	float NearestAreaPos[4];
	// Line 968, Address: 0x1d3fe0, Func Offset: 0
	// Line 971, Address: 0x1d4008, Func Offset: 0x28
	// Line 977, Address: 0x1d4010, Func Offset: 0x30
	// Line 979, Address: 0x1d4030, Func Offset: 0x50
	// Line 983, Address: 0x1d403c, Func Offset: 0x5c
	// Line 984, Address: 0x1d4044, Func Offset: 0x64
	// Line 987, Address: 0x1d4054, Func Offset: 0x74
	// Line 989, Address: 0x1d4058, Func Offset: 0x78
	// Line 999, Address: 0x1d4090, Func Offset: 0xb0
	// Line 1000, Address: 0x1d4098, Func Offset: 0xb8
	// Line 1001, Address: 0x1d40a0, Func Offset: 0xc0
	// Line 1002, Address: 0x1d40a8, Func Offset: 0xc8
	// Line 1003, Address: 0x1d40c0, Func Offset: 0xe0
	// Func End, Address: 0x1d40e8, Func Offset: 0x108
}

// 
// Start address: 0x1d40f0
int set_to_UseCamMvAreaAry(CamDriveArea** pUseCamMvAreaAry, CamDriveArea* pUseArea, CamSceneData* pCamScene)
{
	int AreaNo;
	int SetAreaNum;
	CamDriveArea* pArea;
	// Line 1019, Address: 0x1d40f0, Func Offset: 0
	// Line 1020, Address: 0x1d4100, Func Offset: 0x10
	// Line 1023, Address: 0x1d4108, Func Offset: 0x18
	// Line 1025, Address: 0x1d4120, Func Offset: 0x30
	// Line 1026, Address: 0x1d4128, Func Offset: 0x38
	// Line 1030, Address: 0x1d4148, Func Offset: 0x58
	// Line 1031, Address: 0x1d4150, Func Offset: 0x60
	// Line 1033, Address: 0x1d4154, Func Offset: 0x64
	// Line 1035, Address: 0x1d4170, Func Offset: 0x80
	// Func End, Address: 0x1d4178, Func Offset: 0x88
}

// 
// Start address: 0x1d4180
void SetAnalogPadForwordVector(float CamMatPtr[4], _anon1* pPlayerIF, unsigned int ResetKeepValFlag)
{
	float SetAnalogPadFwdVec[4];
	float AnlgX;
	float AnlgY;
	float AnlgLen;
	float AnlgRollAng;
	float AxisDotVal[3];
	float OmegaVec[4];
	float Omega;
	float Timer;
	float Vec[4];
	float NowPadVec[4];
	float OldPadVec[4];
	float DiffPadVec[4];
	float DiffPadLen;
	float CorrectFwdVec[4];
	float CorrectRate;
	float AdjLen;
	// Line 1047, Address: 0x1d4180, Func Offset: 0
	// Line 1051, Address: 0x1d41a0, Func Offset: 0x20
	// Line 1052, Address: 0x1d41b0, Func Offset: 0x30
	// Line 1051, Address: 0x1d41b8, Func Offset: 0x38
	// Line 1052, Address: 0x1d41c0, Func Offset: 0x40
	// Line 1053, Address: 0x1d41cc, Func Offset: 0x4c
	// Line 1054, Address: 0x1d41d4, Func Offset: 0x54
	// Line 1056, Address: 0x1d41d8, Func Offset: 0x58
	// Line 1061, Address: 0x1d41e0, Func Offset: 0x60
	// Line 1059, Address: 0x1d41e4, Func Offset: 0x64
	// Line 1061, Address: 0x1d41f0, Func Offset: 0x70
	// Line 1062, Address: 0x1d41fc, Func Offset: 0x7c
	// Line 1063, Address: 0x1d420c, Func Offset: 0x8c
	// Line 1065, Address: 0x1d421c, Func Offset: 0x9c
	// Line 1066, Address: 0x1d4228, Func Offset: 0xa8
	// Line 1067, Address: 0x1d4230, Func Offset: 0xb0
	// Line 1068, Address: 0x1d423c, Func Offset: 0xbc
	// Line 1069, Address: 0x1d424c, Func Offset: 0xcc
	// Line 1070, Address: 0x1d4258, Func Offset: 0xd8
	// Line 1071, Address: 0x1d426c, Func Offset: 0xec
	// Line 1072, Address: 0x1d4280, Func Offset: 0x100
	// Line 1073, Address: 0x1d4288, Func Offset: 0x108
	// Line 1075, Address: 0x1d4298, Func Offset: 0x118
	// Line 1082, Address: 0x1d42a0, Func Offset: 0x120
	// Line 1083, Address: 0x1d42c4, Func Offset: 0x144
	// Line 1082, Address: 0x1d42d0, Func Offset: 0x150
	// Line 1083, Address: 0x1d42d4, Func Offset: 0x154
	// Line 1084, Address: 0x1d42f0, Func Offset: 0x170
	// Line 1083, Address: 0x1d42fc, Func Offset: 0x17c
	// Line 1084, Address: 0x1d4300, Func Offset: 0x180
	// Line 1087, Address: 0x1d431c, Func Offset: 0x19c
	// Line 1084, Address: 0x1d4324, Func Offset: 0x1a4
	// Line 1087, Address: 0x1d4328, Func Offset: 0x1a8
	// Line 1092, Address: 0x1d4360, Func Offset: 0x1e0
	// Line 1093, Address: 0x1d436c, Func Offset: 0x1ec
	// Line 1100, Address: 0x1d4378, Func Offset: 0x1f8
	// Line 1102, Address: 0x1d4380, Func Offset: 0x200
	// Line 1104, Address: 0x1d43a4, Func Offset: 0x224
	// Line 1106, Address: 0x1d43c8, Func Offset: 0x248
	// Line 1107, Address: 0x1d43e0, Func Offset: 0x260
	// Line 1108, Address: 0x1d43fc, Func Offset: 0x27c
	// Line 1110, Address: 0x1d4400, Func Offset: 0x280
	// Line 1111, Address: 0x1d4414, Func Offset: 0x294
	// Line 1118, Address: 0x1d4418, Func Offset: 0x298
	// Line 1122, Address: 0x1d4434, Func Offset: 0x2b4
	// Line 1123, Address: 0x1d4474, Func Offset: 0x2f4
	// Line 1124, Address: 0x1d44a0, Func Offset: 0x320
	// Line 1126, Address: 0x1d44c8, Func Offset: 0x348
	// Line 1125, Address: 0x1d44d0, Func Offset: 0x350
	// Line 1126, Address: 0x1d44d8, Func Offset: 0x358
	// Line 1125, Address: 0x1d44e0, Func Offset: 0x360
	// Line 1126, Address: 0x1d44ec, Func Offset: 0x36c
	// Line 1127, Address: 0x1d4510, Func Offset: 0x390
	// Line 1128, Address: 0x1d451c, Func Offset: 0x39c
	// Line 1136, Address: 0x1d4528, Func Offset: 0x3a8
	// Line 1137, Address: 0x1d4534, Func Offset: 0x3b4
	// Line 1140, Address: 0x1d453c, Func Offset: 0x3bc
	// Line 1144, Address: 0x1d4540, Func Offset: 0x3c0
	// Line 1140, Address: 0x1d4544, Func Offset: 0x3c4
	// Line 1144, Address: 0x1d4548, Func Offset: 0x3c8
	// Line 1137, Address: 0x1d454c, Func Offset: 0x3cc
	// Line 1144, Address: 0x1d4550, Func Offset: 0x3d0
	// Line 1138, Address: 0x1d4554, Func Offset: 0x3d4
	// Line 1142, Address: 0x1d4558, Func Offset: 0x3d8
	// Line 1137, Address: 0x1d4560, Func Offset: 0x3e0
	// Line 1138, Address: 0x1d4564, Func Offset: 0x3e4
	// Line 1141, Address: 0x1d4568, Func Offset: 0x3e8
	// Line 1142, Address: 0x1d4570, Func Offset: 0x3f0
	// Line 1140, Address: 0x1d4574, Func Offset: 0x3f4
	// Line 1141, Address: 0x1d4578, Func Offset: 0x3f8
	// Line 1144, Address: 0x1d4580, Func Offset: 0x400
	// Line 1145, Address: 0x1d4590, Func Offset: 0x410
	// Line 1146, Address: 0x1d45b4, Func Offset: 0x434
	// Line 1147, Address: 0x1d45d0, Func Offset: 0x450
	// Line 1148, Address: 0x1d45d4, Func Offset: 0x454
	// Line 1152, Address: 0x1d45d8, Func Offset: 0x458
	// Line 1155, Address: 0x1d45f4, Func Offset: 0x474
	// Line 1154, Address: 0x1d45f8, Func Offset: 0x478
	// Line 1155, Address: 0x1d45fc, Func Offset: 0x47c
	// Line 1156, Address: 0x1d4604, Func Offset: 0x484
	// Line 1161, Address: 0x1d4628, Func Offset: 0x4a8
	// Line 1162, Address: 0x1d4634, Func Offset: 0x4b4
	// Line 1163, Address: 0x1d4658, Func Offset: 0x4d8
	// Line 1164, Address: 0x1d468c, Func Offset: 0x50c
	// Line 1165, Address: 0x1d46a8, Func Offset: 0x528
	// Line 1167, Address: 0x1d46b0, Func Offset: 0x530
	// Line 1168, Address: 0x1d46c4, Func Offset: 0x544
	// Line 1172, Address: 0x1d46c8, Func Offset: 0x548
	// Line 1173, Address: 0x1d46ec, Func Offset: 0x56c
	// Line 1172, Address: 0x1d46f4, Func Offset: 0x574
	// Line 1173, Address: 0x1d4700, Func Offset: 0x580
	// Line 1172, Address: 0x1d4704, Func Offset: 0x584
	// Line 1173, Address: 0x1d4708, Func Offset: 0x588
	// Line 1172, Address: 0x1d4710, Func Offset: 0x590
	// Line 1173, Address: 0x1d4714, Func Offset: 0x594
	// Line 1176, Address: 0x1d4734, Func Offset: 0x5b4
	// Line 1177, Address: 0x1d473c, Func Offset: 0x5bc
	// Line 1181, Address: 0x1d4740, Func Offset: 0x5c0
	// Line 1183, Address: 0x1d475c, Func Offset: 0x5dc
	// Line 1184, Address: 0x1d4768, Func Offset: 0x5e8
	// Line 1185, Address: 0x1d477c, Func Offset: 0x5fc
	// Line 1186, Address: 0x1d4780, Func Offset: 0x600
	// Line 1187, Address: 0x1d47a8, Func Offset: 0x628
	// Func End, Address: 0x1d47c4, Func Offset: 0x644
}

// 
// Start address: 0x1d47d0
void AnarogPadForwardVector(float* FwdVec, float CamMatPtr[4])
{
	// Line 1199, Address: 0x1d47d0, Func Offset: 0
	// Line 1202, Address: 0x1d47f0, Func Offset: 0x20
	// Line 1203, Address: 0x1d47f4, Func Offset: 0x24
	// Line 1202, Address: 0x1d47fc, Func Offset: 0x2c
	// Line 1203, Address: 0x1d4800, Func Offset: 0x30
	// Line 1204, Address: 0x1d4804, Func Offset: 0x34
	// Line 1205, Address: 0x1d4824, Func Offset: 0x54
	// Func End, Address: 0x1d482c, Func Offset: 0x5c
}

// 
// Start address: 0x1d4830
int CameraAnotherAdjustCameraInLineArea(float* AdjCamMvVec, float* CamPos)
{
	int AreaNo;
	float MinDist;
	float MinDistLinePos[4];
	CamLineArea* pMinDistLineArea;
	float Dist;
	float RetPos[4];
	CamLineArea* pCamMvLArea;
	float Pos2LineDir[4];
	// Line 1220, Address: 0x1d4830, Func Offset: 0
	// Line 1223, Address: 0x1d4834, Func Offset: 0x4
	// Line 1220, Address: 0x1d4838, Func Offset: 0x8
	// Line 1227, Address: 0x1d483c, Func Offset: 0xc
	// Line 1220, Address: 0x1d4840, Func Offset: 0x10
	// Line 1223, Address: 0x1d4844, Func Offset: 0x14
	// Line 1220, Address: 0x1d4848, Func Offset: 0x18
	// Line 1227, Address: 0x1d484c, Func Offset: 0x1c
	// Line 1220, Address: 0x1d4850, Func Offset: 0x20
	// Line 1223, Address: 0x1d4860, Func Offset: 0x30
	// Line 1227, Address: 0x1d4864, Func Offset: 0x34
	// Line 1228, Address: 0x1d486c, Func Offset: 0x3c
	// Line 1230, Address: 0x1d487c, Func Offset: 0x4c
	// Line 1231, Address: 0x1d4884, Func Offset: 0x54
	// Line 1236, Address: 0x1d4888, Func Offset: 0x58
	// Line 1242, Address: 0x1d4890, Func Offset: 0x60
	// Line 1249, Address: 0x1d48e0, Func Offset: 0xb0
	// Line 1251, Address: 0x1d48e8, Func Offset: 0xb8
	// Line 1256, Address: 0x1d48ec, Func Offset: 0xbc
	// Line 1258, Address: 0x1d48f0, Func Offset: 0xc0
	// Line 1268, Address: 0x1d4920, Func Offset: 0xf0
	// Line 1270, Address: 0x1d492c, Func Offset: 0xfc
	// Line 1269, Address: 0x1d4930, Func Offset: 0x100
	// Line 1270, Address: 0x1d4934, Func Offset: 0x104
	// Line 1272, Address: 0x1d493c, Func Offset: 0x10c
	// Line 1273, Address: 0x1d4940, Func Offset: 0x110
	// Line 1274, Address: 0x1d4954, Func Offset: 0x124
	// Line 1275, Address: 0x1d4960, Func Offset: 0x130
	// Line 1277, Address: 0x1d4968, Func Offset: 0x138
	// Line 1279, Address: 0x1d4984, Func Offset: 0x154
	// Line 1280, Address: 0x1d499c, Func Offset: 0x16c
	// Line 1282, Address: 0x1d49ac, Func Offset: 0x17c
	// Line 1283, Address: 0x1d49b0, Func Offset: 0x180
	// Line 1284, Address: 0x1d49c4, Func Offset: 0x194
	// Line 1285, Address: 0x1d49d0, Func Offset: 0x1a0
	// Line 1293, Address: 0x1d49d8, Func Offset: 0x1a8
	// Line 1294, Address: 0x1d49f4, Func Offset: 0x1c4
	// Line 1296, Address: 0x1d4a20, Func Offset: 0x1f0
	// Line 1297, Address: 0x1d4a54, Func Offset: 0x224
	// Line 1299, Address: 0x1d4a58, Func Offset: 0x228
	// Func End, Address: 0x1d4a74, Func Offset: 0x244
}

// 
// Start address: 0x1d4a80
void renewalPlayerMoveRate(float* pPlayerMoveRate, float PlayerMvSpdVal)
{
	float add_rate;
	// Line 1311, Address: 0x1d4a80, Func Offset: 0
	// Line 1309, Address: 0x1d4a84, Func Offset: 0x4
	// Line 1311, Address: 0x1d4a88, Func Offset: 0x8
	// Line 1309, Address: 0x1d4a8c, Func Offset: 0xc
	// Line 1311, Address: 0x1d4a94, Func Offset: 0x14
	// Line 1315, Address: 0x1d4ab4, Func Offset: 0x34
	// Line 1316, Address: 0x1d4abc, Func Offset: 0x3c
	// Line 1315, Address: 0x1d4ac4, Func Offset: 0x44
	// Line 1316, Address: 0x1d4ac8, Func Offset: 0x48
	// Line 1315, Address: 0x1d4acc, Func Offset: 0x4c
	// Line 1316, Address: 0x1d4ad4, Func Offset: 0x54
	// Line 1315, Address: 0x1d4ae8, Func Offset: 0x68
	// Line 1316, Address: 0x1d4aec, Func Offset: 0x6c
	// Line 1317, Address: 0x1d4b00, Func Offset: 0x80
	// Line 1319, Address: 0x1d4b08, Func Offset: 0x88
	// Line 1320, Address: 0x1d4b10, Func Offset: 0x90
	// Line 1319, Address: 0x1d4b14, Func Offset: 0x94
	// Line 1320, Address: 0x1d4b18, Func Offset: 0x98
	// Line 1319, Address: 0x1d4b1c, Func Offset: 0x9c
	// Line 1320, Address: 0x1d4b20, Func Offset: 0xa0
	// Line 1319, Address: 0x1d4b2c, Func Offset: 0xac
	// Line 1320, Address: 0x1d4b30, Func Offset: 0xb0
	// Line 1321, Address: 0x1d4b4c, Func Offset: 0xcc
	// Line 1324, Address: 0x1d4b50, Func Offset: 0xd0
	// Line 1322, Address: 0x1d4b54, Func Offset: 0xd4
	// Line 1324, Address: 0x1d4b58, Func Offset: 0xd8
	// Line 1322, Address: 0x1d4b60, Func Offset: 0xe0
	// Line 1324, Address: 0x1d4b64, Func Offset: 0xe4
	// Line 1325, Address: 0x1d4b70, Func Offset: 0xf0
	// Line 1326, Address: 0x1d4b74, Func Offset: 0xf4
	// Line 1327, Address: 0x1d4b78, Func Offset: 0xf8
	// Line 1328, Address: 0x1d4b90, Func Offset: 0x110
	// Line 1329, Address: 0x1d4b94, Func Offset: 0x114
	// Line 1330, Address: 0x1d4b98, Func Offset: 0x118
	// Func End, Address: 0x1d4ba8, Func Offset: 0x128
}

