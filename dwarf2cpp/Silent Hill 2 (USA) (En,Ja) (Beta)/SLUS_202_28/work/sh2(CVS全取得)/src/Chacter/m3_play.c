typedef struct shClusterAnime;
typedef struct SubCharacterDisp;
typedef struct SubCharacter;
typedef struct _anon0;
typedef struct shPlayerWork;
typedef struct shBattleFight;
typedef struct shSkelton;
typedef struct _AnimeInfo;
typedef struct PAD_INFO;
typedef struct Pad_KeyConfig;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct shBoatWork;
typedef union shGameKeyData;
typedef struct Playing_Info;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct _anon1;
typedef struct _CL_VHIT_WALL;
typedef struct PAD_3D;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct _USXY;
typedef union _anon2;
typedef struct shCharaInfo;
typedef struct _CL_VHIT_RESULT;
typedef struct PAD_2D;
typedef struct _CL_HITPOLY_COLUMN;
typedef union _anon3;
typedef struct _SXY;
typedef struct _IXY;
typedef struct shAnime3d;
typedef struct _anon4;
typedef enum _BOAT_STATUS : unsigned char;
typedef struct Item;
typedef enum _JAMES_LOWER_STATUS : unsigned char;

typedef void(*type_53)(SubCharacter*);
typedef void(*type_54)(SubCharacter*);
typedef void(*type_55)(SubCharacter*);
typedef void(*type_56)(SubCharacter*);

typedef unsigned short type_0[3];
typedef void* type_1[3];
typedef _AnimeInfo type_2[17];
typedef _AnimeInfo type_3[5];
typedef _AnimeInfo type_4[17];
typedef unsigned int type_5[9];
typedef unsigned char type_6[20];
typedef float type_7[7];
typedef int type_8[6];
typedef _AnimeInfo type_9[33];
typedef unsigned char type_10[2];
typedef char type_11[128];
typedef float type_12[4];
typedef float type_13[4];
typedef _AnimeInfo type_14[24];
typedef unsigned char type_15[14];
typedef float type_16[4][4];
typedef _AnimeInfo type_17[4];
typedef _AnimeInfo type_18[5];
typedef float type_19[5];
typedef float type_20[5][5];
typedef unsigned int type_21[32];
typedef float type_22[7];
typedef unsigned char type_23[69];
typedef unsigned short type_24[2];
typedef float type_25[7];
typedef unsigned short type_26[2][2];
typedef unsigned short type_27[2][2][30];
typedef unsigned int type_28[7];
typedef PAD_INFO type_29[10];
typedef _AnimeInfo type_30[5];
typedef float type_31[5];
typedef float type_32[5][3];
typedef _AnimeInfo type_33[33];
typedef float type_34[4];
typedef shAttackInfo type_35[66];
typedef float type_36[2];
typedef float type_37[7];
typedef unsigned char type_38[4];
typedef float type_39[3];
typedef float type_40[3][2];
typedef float type_41[3][2][4];
typedef float type_42[5];
typedef unsigned char type_43[4];
typedef float type_44[5][3];
typedef _AnimeInfo type_45[11];
typedef float type_46[4];
typedef float type_47[4][2];
typedef float type_48[4][2][8];
typedef _AnimeInfo type_49[30];
typedef float type_50[7];
typedef unsigned char type_51[14];
typedef float type_52[4][2];
typedef char type_57[4];
typedef float type_58[5];
typedef float type_59[5][3];
typedef float type_60[4];
typedef float type_61[4][4];
typedef unsigned char type_62[32];
typedef unsigned char type_63[2];
typedef float type_64[4][2];
typedef _AnimeInfo type_65[17];
typedef int type_66[9];
typedef unsigned char type_67[2];
typedef unsigned char type_68[4];
typedef unsigned int type_69[2];
typedef unsigned short type_70[11];
typedef unsigned int type_71[32];
typedef unsigned char type_72[97];
typedef _AnimeInfo type_73[20];
typedef float type_74[7];
typedef float type_75[5];
typedef float type_76[5][3];
typedef _AnimeInfo type_77[34];

struct shClusterAnime
{
	void* data;
	unsigned char used;
	unsigned char n_clusters;
	unsigned char is_repeat;
	unsigned char frame_updated;
	int frame_no;
	float* weights;
};

struct SubCharacterDisp
{
	SubCharacter sc;
	shAnime3d anime2;
	shAnime3d anime;
	shClusterAnime* cluster_anime;
	void* models[3];
	void* work;
	void* data;
	unsigned int model_adr;
	unsigned int anime_adr;
	unsigned int clani_adr;
	void* anime_list;
	void* clani_list;
};

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	unsigned int model_type;
	_anon4 pos;
	_anon4 rot;
	_anon4 pos_spd;
	_anon4 rot_spd;
	_anon0 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon4 b_pos;
	_anon4 b_rot;
	int en_first_status;
	int colis_fall_timer;
	shBattleInfo battle;
	_CL_VHIT_RESULT eye;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubCharacter* pre;
	SubCharacter* next;
	unsigned char work[4];
	void* enemy_p;

	void PlayerCheckInit();
	unsigned short PlayerDamageMotionNo();
	void PlayerCheckSideLine();
	void PlayerCheckFootLine();
	void PlayerSetHeight();
	void PlayerSetHitColumn();
	void PlayerSetSearchArea();
	void PlayerCheckDamage();
	void PlayerCheckNeckAngle();
	void PlayerCheckBothArmsAngle();
	void PlayerCheckBodyAngle();
	void PlayerCheckSetParameterPhase1();
	void PlayerCheckSetParameterPhase2();
	void PlayerFunction();
	void PlayerCheckStraightLine(float spd_roty);
};

struct _anon0
{
	float d[4][4];
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon4 dist_rot;
	_anon4 dist_pos;
	_anon4 pos;
	_anon4 rot;
	float rot_y;
	float inner_to_wall;
	float dist_to_wall;
	float dir_tgt_2d;
	float dir_now_2d;
	unsigned char map_mode;
	unsigned char reserve0;
	unsigned char step;
	unsigned char sub_step;
	unsigned short timer;
	unsigned short timer2;
	unsigned int allbody_now;
	_JAMES_UPPER_STATUS upper_now;
	_JAMES_LOWER_STATUS lower_now;
	unsigned int allbody_prev;
	_JAMES_UPPER_STATUS upper_prev;
	_JAMES_LOWER_STATUS lower_prev;
	unsigned char event_status_now;
	unsigned char event_status_prev;
	unsigned char event_move_mode;
	unsigned char reserve1;
	unsigned int upper_st_flg;
	unsigned int lower_st_flg;
	unsigned int u_anime_st_flg;
	unsigned int l_anime_st_flg;
	unsigned int anime_pause;
	unsigned int act_with_wep;
	float light_vec_inner_rate;
	float light_pos_revise[4];
	float light_vec_revise[4];
	float light_pos[4];
	float light_vec[4];
	float light_pos_revise_reverse[4];
	float light_vec_revise_reverse[4];
	float light_pos_reverse[4];
	float light_vec_reverse[4];
	float light_vec_neck[4];
	int room_name_prev;
	int room_name_now;
	_CL_VHIT_RESULT r_side;
	_CL_VHIT_RESULT l_side;
	_CL_VHIT_RESULT foot;
	_CL_VHIT_RESULT ft_floor;
	_CL_VHIT_RESULT r_foot;
	_CL_VHIT_RESULT l_foot;
	_CL_HITPOLY_COLUMN column_mov;
	_CL_HITPOLY_COLUMN column_atk;
	float col_mov_z_hosei;
	float col_atk_z_hosei;
	unsigned char wep_no_hit_floor;
	unsigned char efct_upper;
	unsigned char light_reverse;
	unsigned char water_road;
	PAD_INFO pad[10];
	float rstick_x;
	float rstick_y;
	float lstick_x;
	float lstick_y;
	float lstick_p;
	float cam_rot_y[2];
	unsigned char now_cam_no;
	unsigned char cam_chg_flg;
	unsigned char ctrl_unit;
	unsigned char ctrl_inputing;
	unsigned char se_upper[4];
	unsigned char se_foot[4];
	float csaw_se_vol;
	unsigned char csaw_se_flg;
	unsigned char d_shock;
	unsigned char reserve2;
	unsigned char strike_splash_flg;
	int event_anime;
	_anon4 tgt_body_angle;
	_anon4 tgt_neck_angle;
	_anon4 tgt_arms_angle;
	unsigned char hold_chg[2];
	unsigned char hold_loop[2];
	unsigned char motion_no;
	unsigned char shotgun_dir;
	unsigned char shotgun_prev;
	unsigned char guard_check;
	int parts_light;
	int parts_rhand;
	int parts_lhand;
	SubCharacter* target;
	SubCharacter* look_tgt;
	float non_input;
	float hugging_gauge;
	float running_time;
	float muteki_time;
	float hp;
	float hp_max;
	float hp_recover;
	float shock;
	float spray_time;
	int tired;
	int tired_max;
	int spirit;
	SubCharacter* enemy_liedown;
	unsigned char enemy_around;
	unsigned char enemy_atk_area;
	unsigned char enemy_near;
	unsigned char lock_on;
	unsigned char running;
	unsigned char cannot_run;
	unsigned char fall_type;
	unsigned char reload;
	unsigned char weapon;
	unsigned char shoot_val;
	unsigned char reload_val;
	unsigned char atk_type;
	unsigned char atk_reserve[2];
	unsigned char attack_ok;
	char hold_type;
	unsigned char dead;
	unsigned char no_damage;
	unsigned char atk_count;
	unsigned char hug_status;
	unsigned char hug_dir;
	unsigned char se_on;
	unsigned char spray_set;
	char spray_pow;
	unsigned short damage_no;
	unsigned short attack_no;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon0 src_m;
	_anon4 src_t;
	_anon0 des_m;
	_anon4 des_t;
	_anon4 axis;
	float theta;
	float xx;
	float yy;
	float zz;
	float xy;
	float yz;
	float zx;
	unsigned short c_count;
	unsigned short c_speed;
	char change;
	char reserved;
	char is_key;
	char pad;
	void* untouchable;
};

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	char pad;
};

struct PAD_INFO
{
	unsigned char action;
	unsigned char dash;
	unsigned char attack0;
	unsigned char attack1;
	unsigned char attack2;
	unsigned char menu;
	unsigned char hold;
	unsigned char search;
	unsigned char map;
	struct
	{
		unsigned char light_ : 4;
		unsigned char light : 4;
	};
	unsigned char l_button;
	unsigned char r_button;
	char lstickX;
	char lstickY;
	char rstickX;
	char rstickY;
	unsigned char forward;
	unsigned char backward;
	unsigned char lround;
	unsigned char rround;
	unsigned char skip;
	unsigned char pause;
	union
	{
		PAD_3D pad3d;
		PAD_2D pad2d;
	};
};

struct Pad_KeyConfig
{
	int enter;
	int cancel;
	int skip;
	int front_move;
	int back_move;
	int right_turn;
	int left_turn;
	int right_move;
	int left_move;
	int action;
	int attack;
	int dash;
	int light;
	int item;
	int search_view;
	int ready;
	int pause;
	int map;
	int padding[6];
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct shBattleArea
{
	float center;
	float radius;
};

struct shBattleInfo
{
	float pos[4];
	float vec[4];
	unsigned short id;
	unsigned short kind;
	float dead_timer;
	float damage;
	float shock;
	int atk_result;
	float prev_atk_pos[4];
	SubCharacter* target;
	float hp;
	float hp_max;
	float hp_rate;
	unsigned int status;
	shBattleArea look;
	shBattleArea feel;
	unsigned char se;
};

struct shBoatWork
{
	SubCharacter* boat_p;
	_BOAT_STATUS status_now;
	_BOAT_STATUS status_prev;
	unsigned int sub_st_flg;
	unsigned int anime_st_flg;
	unsigned int anime_pause;
	unsigned char anim_change;
	unsigned char anime_change_now;
	unsigned char anime_change_prev;
	float anime_change_timer;
	short anime_speed;
};

union shGameKeyData
{
	unsigned long bit;
	_anon1 f;
};

struct Playing_Info
{
	unsigned char stage;
	unsigned char enemy_off;
	unsigned char voice_off;
	unsigned char memo_select;
	unsigned char clear_end_kind;
	unsigned char clear_end_number;
	unsigned char rank;
	unsigned char game_stage;
	unsigned char hidden_item_get;
	char spray_pow;
	unsigned short savecount;
	unsigned short clearcount;
	unsigned short item_get;
	unsigned short kill_by_shot;
	unsigned short kill_by_fight;
	float time;
	float walk_distance;
	float run_distance;
	float boat_clear_time;
	float boat_max_speed;
	float jms_damage_total;
	float mar_damage_by_enemy;
	float mar_damage_by_jms;
	float stage_check_point[7];
	unsigned int stage_score[7];
	unsigned int total_score;
	float total_time;
	unsigned char battle_level;
	unsigned char riddle_level;
	unsigned char brightness_level;
	char screen_position_x;
	char screen_position_y;
	unsigned char vibration;
	unsigned char auto_load;
	unsigned char sound;
	unsigned char bgm_volume;
	unsigned char se_volume;
	unsigned char weapon_control;
	unsigned char blood_color;
	unsigned char view_control;
	unsigned char retreat_turn;
	unsigned char walk_run_control;
	unsigned char auto_aiming;
	unsigned char view_mode;
	unsigned char bullet_adjust;
	unsigned char language;
	unsigned char subtitles;
	unsigned char control_type;
	unsigned char radar;
};

enum _JAMES_UPPER_STATUS : unsigned char
{
	JMS_ST_U_STAND,
	JMS_ST_U_RELAX,
	JMS_ST_U_ALERT,
	JMS_ST_U_TIRED,
	JMS_ST_U_READY,
	JMS_ST_U_READYOFF,
	JMS_ST_U_LROUND,
	JMS_ST_U_RROUND,
	JMS_ST_U_BACK,
	JMS_ST_U_WALK,
	JMS_ST_U_LSWALK,
	JMS_ST_U_RSWALK,
	JMS_ST_U_RUN1,
	JMS_ST_U_RUN2,
	JMS_ST_U_RUN3,
	JMS_ST_U_LSRUN,
	JMS_ST_U_RSRUN,
	JMS_ST_U_WALL_F,
	JMS_ST_U_LTURN,
	JMS_ST_U_RTURN,
	JMS_ST_U_JUMP,
	JMS_ST_U_GUARD,
	JMS_ST_U_LSTEP,
	JMS_ST_U_RSTEP,
	JMS_ST_U_FALL,
	JMS_ST_U_DAMAGE,
	JMS_ST_U_HOLD,
	JMS_ST_U_RELEASE,
	JMS_ST_U_ATTACK,
	JMS_ST_U_KICK,
	JMS_ST_U_TO_STAND,
	JMS_ST_U_EVENT
};

struct _anon1
{
	struct
	{
		unsigned long type : 1;
		unsigned long DRINK : 1;
		unsigned long RADIO : 1;
		unsigned long LIGHT : 1;
		unsigned long ITEM : 1;
		unsigned long MAP : 1;
		unsigned long DECIDE : 1;
		unsigned long CANCEL : 1;
		unsigned long SKIP : 1;
		unsigned long PAUSE : 1;
		unsigned long ACTION : 2;
		unsigned long DASH : 2;
		unsigned long LSLIDE : 2;
		unsigned long RSLIDE : 2;
		unsigned long READY : 2;
		unsigned long VIEW : 2;
		unsigned long frame_m1 : 2;
		long AX : 4;
		long AY : 4;
		long BX : 2;
		long BY : 2;
		long CX : 4;
		long CY : 4;
		unsigned long reserve : 2;
		unsigned long trg : 1;
		unsigned long rpt : 1;
		unsigned long len : 16;
	};
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon2 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct _USXY
{
	unsigned short x;
	unsigned short y;
};

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
};

struct shCharaInfo
{
	_anon4 pos;
	_anon4 rot;
	_anon4 pos_spd;
	_anon4 rot_spd;
	_anon0 mat;
	shSkelton* sk_top;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon3 hobj;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct _CL_HITPOLY_COLUMN
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4][2];
};

union _anon3
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _SXY
{
	short x;
	short y;
};

struct _IXY
{
	int x;
	int y;
};

struct shAnime3d
{
	shSkelton* top;
	void* anime;
	void* frame_top;
	void* p_anime;
	void* p_frame_top;
	unsigned int frame_size;
	int total_count;
	_IXY c_count;
	_SXY c_speed;
	_SXY total_speed;
	_USXY cur_frame;
	char first_bone_type;
	char comp_type;
	_AnimeInfo* anim_a;
	_AnimeInfo* anim_b;
	_anon4 rot_neck;
	_anon4 rot_arms;
	_anon4 rot_body_neck;
	_anon4 rot_body;
	float scale;
};

struct _anon4
{
	float x;
	float y;
	float z;
	float w;
};

enum _BOAT_STATUS : unsigned char
{
	BOAT_ST_BOTH,
	BOAT_ST_RIGHT,
	BOAT_ST_LEFT
};

struct Item
{
	unsigned int flag[2];
	unsigned short number[11];
	unsigned char light_switch;
	unsigned char radio_switch;
	unsigned char radio_volume;
	unsigned char equip;
	float ampoule_efficacy;
	unsigned short event_use[3];
	unsigned short short_pad;
	unsigned char last_cursor;
};

enum _JAMES_LOWER_STATUS : unsigned char
{
	JMS_ST_L_STAND,
	JMS_ST_L_RELAX,
	JMS_ST_L_ALERT,
	JMS_ST_L_TIRED,
	JMS_ST_L_READY,
	JMS_ST_L_READYOFF,
	JMS_ST_L_LROUND,
	JMS_ST_L_RROUND,
	JMS_ST_L_BACK,
	JMS_ST_L_WALK,
	JMS_ST_L_LSWALK,
	JMS_ST_L_RSWALK,
	JMS_ST_L_RUN1,
	JMS_ST_L_RUN2,
	JMS_ST_L_RUN3,
	JMS_ST_L_LSRUN,
	JMS_ST_L_RSRUN,
	JMS_ST_L_WALL_F,
	JMS_ST_L_LTURN,
	JMS_ST_L_RTURN,
	JMS_ST_L_JUMP,
	JMS_ST_L_GUARD,
	JMS_ST_L_LSTEP,
	JMS_ST_L_RSTEP,
	JMS_ST_L_FALL,
	JMS_ST_L_DAMAGE,
	JMS_ST_L_HOLD,
	JMS_ST_L_RELEASE,
	JMS_ST_L_ATTACK,
	JMS_ST_L_KICK,
	JMS_ST_L_TO_STAND,
	JMS_ST_L_EVENT
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo pjames_anim[34];
_AnimeInfo pjames_hg_anim[11];
_AnimeInfo pjames_sg_anim[17];
_AnimeInfo pjames_rg_anim[5];
_AnimeInfo pjames_sp_anim[17];
_AnimeInfo pjames_ka_anim[33];
_AnimeInfo pjames_pi_anim[33];
_AnimeInfo pjames_na_anim[17];
_AnimeInfo pjames_cs_anim[24];
_AnimeInfo pjames_demo_anim[30];
float jms_walk_spd_ana[7];
float jms_back_spd_ana[7];
float jms_swalk_spd_ana[7];
float jms_run_spd_ana[7];
float jms_srun_spd_ana[7];
unsigned int pjames_act_with_wep_flag[9];
unsigned int pjames_upper_flag[32];
unsigned int pjames_lower_flag[32];
_AnimeInfo pjames_stage_anim[20];
_AnimeInfo boat_anim[5];
_AnimeInfo d_boat_anim[4];
_AnimeInfo b_james_anim[5];
shPlayerWork sh2jms;
Pad_KeyConfig key_config;
Playing_Info playing;
void(*PlayerSetHeightDummy)(SubCharacter*);
Item item;
_AnimeInfo* jms_stage_anim;
shBoatWork sh2bot;
void(*PlayerFunction)(SubCharacter*);

void player_flg_on(unsigned int* type, unsigned int status);
void player_flg_off(unsigned int* type, unsigned int status);
int upper_flg_on(unsigned int status);
int lower_flg_on(unsigned int status);
int u_anime_flg_on(unsigned int status);
int l_anime_flg_on(unsigned int status);
int actwithwep_flg_on(unsigned int status);
void lower_st_set(int status, shPlayerWork* w);
void upper_st_set(int status, shPlayerWork* w);
void lower_flg_set(int status, shPlayerWork* w);
void upper_flg_set(int status, shPlayerWork* w);
void actwithwep_flg_set(unsigned char status, shPlayerWork* w);
void PlayerCheckInit();
char PlayerCheckKeyInputRoundWay();
unsigned char PlayerCheckKeyInputL180();
unsigned char PlayerCheckKeyInputR180();
unsigned char PlayerCheckKeyInputPrsAttack();
unsigned char PlayerCheckKeyInputTrgAttack();
unsigned char PlayerCheckKeyInputTrgLight();
float PlayerCheckKeyInputStickDir();
float PlayerCheckKeyStickClamp(float stick_val, float min, float max);
float PlayerCheckKeyInputStickPow();
unsigned char PlayerCheckKeyInputHold(unsigned char hold_prev, unsigned char hold);
unsigned char PlayerCheckKeyInputDash(unsigned char dash);
void PlayerCheckKeyInput();
unsigned short PlayerDamageMotionNo();
void PlayerCheckSideLine();
void PlayerCheckFootLine();
void PlayerSetHeightDummy();
void PlayerSetHeight();
void PlayerSetHeightConnectWait();
void PlayerSetColumn_SetTarget(_CL_HITPOLY_COLUMN* mov, _CL_HITPOLY_COLUMN* atk, float* mov_z, float* atk_z);
void PlayerSetColumn_CloseToTarget(_CL_HITPOLY_COLUMN* mov, _CL_HITPOLY_COLUMN* atk, float* mov_z, float* atk_z);
void PlayerSetHitColumn();
void PlayerSetSearchArea();
void PlayerCheckDamage();
void PlayerCheckNeckAngle();
void PlayerCheckBothArmsAngle();
void PlayerCheckBodyAngle();
void PlayerCheckSetParameterPhase1();
void PlayerCheckSetParameterPhase2();
void PlayerCheckModelParts();
void james_anim_set_all(_AnimeInfo* aip, int comp_type);
void james_anim_set(_AnimeInfo* aip, int body_type, int comp_type);
_AnimeInfo* PlayerGetStageAnime(int anime);
void PlayerCheckAnimeUpper();
void PlayerCheckAnimeLower();
void PlayerCheckAnime();
void BoatPlayerCheckAnime();
void PlayerFunction();
void shGetJamesLightPos(float* pos, float* vec);
void shGetJamesLightPosOriginal(float* pos, float* vec);
void shGetJamesLightPos_Calc_Chest();
void shGetJamesLightPos_Calc_Hand();
void shGetJamesLightPos_Calc();
void GetPlayerPartsMatrixForCameraCtrl(float mat[4], unsigned int parts_name);
void GetPlayerPartsWorldMatrix(float mat[4], unsigned int parts_name);
void GetPlayerPartsLocalMatrix(_anon0* dest, int parts_name);
shCharaInfo* GetPlayerInfoForCameraCtrl();
void shCharacterPlayerWorkInitAtPowerOn();
void shCharacterPlayerWorkInitAtGameStart();
void shCharacterSetPlayerLow(SubCharacter* scp);
void PlayerGetTargetInfo();
void PlayerGetTarget();
void PlayerChangeTarget(int key);
void PlayerCheckHuggingAttack();
int PlayerChectGuardSuccess();
void PlayerRequestAttack(shPlayerWork* w, int num);
void PlayerRequestAttackFinish(shPlayerWork* w);
void PlayerCheckStraightLine(float spd_roty);
void shGetJamesFootPos(float* pos, float* vec, int kind);
void shGetJamesKickStartPos(float* pos, float* vec);
void shGetJamesTrampStartPos(float* pos, float* vec);
int PlayerNowItemName(unsigned char wep);
int PlayerSearchVIewButtonCheck();
float PlayerGetNeckAngleX();
float PlayerGetNeckAngleY();
void PlayerInitOnConnect();
void PlayerStatusClear();
void close_to_angle_target(float* now, float tgt, float min, float max, float spd);
void close_to_value(float* now, float tgt, float mov);
int PlayerReverseLightCalcIsOn();
int PlayerWaterRoadIsOn();

// 
// Start address: 0x1063a0
void player_flg_on(unsigned int* type, unsigned int status)
{
	// Line 141, Address: 0x1063a0, Func Offset: 0
	// Line 142, Address: 0x1063ac, Func Offset: 0xc
	// Func End, Address: 0x1063b4, Func Offset: 0x14
}

// 
// Start address: 0x1063c0
void player_flg_off(unsigned int* type, unsigned int status)
{
	// Line 145, Address: 0x1063c0, Func Offset: 0
	// Line 146, Address: 0x1063d0, Func Offset: 0x10
	// Func End, Address: 0x1063d8, Func Offset: 0x18
}

// 
// Start address: 0x1063e0
int upper_flg_on(unsigned int status)
{
	// Line 153, Address: 0x1063e0, Func Offset: 0
	// Line 154, Address: 0x1063ec, Func Offset: 0xc
	// Func End, Address: 0x1063f4, Func Offset: 0x14
}

// 
// Start address: 0x106400
int lower_flg_on(unsigned int status)
{
	// Line 157, Address: 0x106400, Func Offset: 0
	// Line 158, Address: 0x10640c, Func Offset: 0xc
	// Func End, Address: 0x106414, Func Offset: 0x14
}

// 
// Start address: 0x106420
int u_anime_flg_on(unsigned int status)
{
	// Line 161, Address: 0x106420, Func Offset: 0
	// Line 162, Address: 0x10642c, Func Offset: 0xc
	// Func End, Address: 0x106434, Func Offset: 0x14
}

// 
// Start address: 0x106440
int l_anime_flg_on(unsigned int status)
{
	// Line 165, Address: 0x106440, Func Offset: 0
	// Line 166, Address: 0x10644c, Func Offset: 0xc
	// Func End, Address: 0x106454, Func Offset: 0x14
}

// 
// Start address: 0x106460
int actwithwep_flg_on(unsigned int status)
{
	// Line 183, Address: 0x106460, Func Offset: 0
	// Line 184, Address: 0x10646c, Func Offset: 0xc
	// Func End, Address: 0x106474, Func Offset: 0x14
}

// 
// Start address: 0x106480
void lower_st_set(int status, shPlayerWork* w)
{
	// Line 196, Address: 0x106480, Func Offset: 0
	// Line 197, Address: 0x106488, Func Offset: 0x8
	// Line 198, Address: 0x10648c, Func Offset: 0xc
	// Line 199, Address: 0x106494, Func Offset: 0x14
	// Func End, Address: 0x10649c, Func Offset: 0x1c
}

// 
// Start address: 0x1064a0
void upper_st_set(int status, shPlayerWork* w)
{
	// Line 206, Address: 0x1064a0, Func Offset: 0
	// Line 207, Address: 0x1064a8, Func Offset: 0x8
	// Line 208, Address: 0x1064ac, Func Offset: 0xc
	// Func End, Address: 0x1064b4, Func Offset: 0x14
}

// 
// Start address: 0x1064c0
void lower_flg_set(int status, shPlayerWork* w)
{
	// Line 215, Address: 0x1064c0, Func Offset: 0
	// Line 216, Address: 0x1064d8, Func Offset: 0x18
	// Func End, Address: 0x1064e0, Func Offset: 0x20
}

// 
// Start address: 0x1064e0
void upper_flg_set(int status, shPlayerWork* w)
{
	// Line 223, Address: 0x1064e0, Func Offset: 0
	// Line 224, Address: 0x1064f8, Func Offset: 0x18
	// Func End, Address: 0x106500, Func Offset: 0x20
}

// 
// Start address: 0x106500
void actwithwep_flg_set(unsigned char status, shPlayerWork* w)
{
	// Line 230, Address: 0x106500, Func Offset: 0
	// Line 231, Address: 0x106510, Func Offset: 0x10
	// Line 237, Address: 0x10652c, Func Offset: 0x2c
	// Line 238, Address: 0x106544, Func Offset: 0x44
	// Line 239, Address: 0x106554, Func Offset: 0x54
	// Line 240, Address: 0x106564, Func Offset: 0x64
	// Line 241, Address: 0x106574, Func Offset: 0x74
	// Line 242, Address: 0x106584, Func Offset: 0x84
	// Line 245, Address: 0x106594, Func Offset: 0x94
	// Func End, Address: 0x1065a8, Func Offset: 0xa8
}

// 
// Start address: 0x1065b0
void SubCharacter::PlayerCheckInit()
{
	// Line 251, Address: 0x1065b0, Func Offset: 0
	// Line 254, Address: 0x1065c0, Func Offset: 0x10
	// Line 257, Address: 0x1065cc, Func Offset: 0x1c
	// Line 259, Address: 0x1065d8, Func Offset: 0x28
	// Line 261, Address: 0x1065e4, Func Offset: 0x34
	// Line 262, Address: 0x1065f0, Func Offset: 0x40
	// Line 263, Address: 0x1065f8, Func Offset: 0x48
	// Line 265, Address: 0x10660c, Func Offset: 0x5c
	// Line 266, Address: 0x106614, Func Offset: 0x64
	// Line 269, Address: 0x10661c, Func Offset: 0x6c
	// Line 270, Address: 0x106624, Func Offset: 0x74
	// Line 271, Address: 0x106630, Func Offset: 0x80
	// Line 272, Address: 0x106638, Func Offset: 0x88
	// Line 273, Address: 0x106640, Func Offset: 0x90
	// Line 274, Address: 0x106648, Func Offset: 0x98
	// Line 275, Address: 0x106650, Func Offset: 0xa0
	// Line 276, Address: 0x106658, Func Offset: 0xa8
	// Line 278, Address: 0x106660, Func Offset: 0xb0
	// Line 279, Address: 0x106668, Func Offset: 0xb8
	// Line 281, Address: 0x106670, Func Offset: 0xc0
	// Line 282, Address: 0x106684, Func Offset: 0xd4
	// Line 285, Address: 0x106698, Func Offset: 0xe8
	// Line 286, Address: 0x1066ac, Func Offset: 0xfc
	// Func End, Address: 0x1066c0, Func Offset: 0x110
}

// 
// Start address: 0x1066c0
char PlayerCheckKeyInputRoundWay()
{
	PAD_INFO* pad;
	// Line 303, Address: 0x1066c0, Func Offset: 0
	// Line 305, Address: 0x1066c8, Func Offset: 0x8
	// Line 306, Address: 0x1066e0, Func Offset: 0x20
	// Line 307, Address: 0x1066ec, Func Offset: 0x2c
	// Line 308, Address: 0x106700, Func Offset: 0x40
	// Line 309, Address: 0x10670c, Func Offset: 0x4c
	// Line 310, Address: 0x106710, Func Offset: 0x50
	// Func End, Address: 0x106718, Func Offset: 0x58
}

// 
// Start address: 0x106720
unsigned char PlayerCheckKeyInputL180()
{
	PAD_INFO* pad;
	int tmp;
	int i;
	// Line 335, Address: 0x106720, Func Offset: 0
	// Line 337, Address: 0x106728, Func Offset: 0x8
	// Line 338, Address: 0x106734, Func Offset: 0x14
	// Line 339, Address: 0x106740, Func Offset: 0x20
	// Line 341, Address: 0x10674c, Func Offset: 0x2c
	// Line 342, Address: 0x106758, Func Offset: 0x38
	// Line 343, Address: 0x10676c, Func Offset: 0x4c
	// Line 345, Address: 0x106778, Func Offset: 0x58
	// Line 346, Address: 0x10678c, Func Offset: 0x6c
	// Line 349, Address: 0x106798, Func Offset: 0x78
	// Line 350, Address: 0x10679c, Func Offset: 0x7c
	// Func End, Address: 0x1067a4, Func Offset: 0x84
}

// 
// Start address: 0x1067b0
unsigned char PlayerCheckKeyInputR180()
{
	PAD_INFO* pad;
	int tmp;
	int i;
	// Line 362, Address: 0x1067b0, Func Offset: 0
	// Line 364, Address: 0x1067b8, Func Offset: 0x8
	// Line 365, Address: 0x1067c4, Func Offset: 0x14
	// Line 366, Address: 0x1067d0, Func Offset: 0x20
	// Line 368, Address: 0x1067dc, Func Offset: 0x2c
	// Line 369, Address: 0x1067e8, Func Offset: 0x38
	// Line 370, Address: 0x1067fc, Func Offset: 0x4c
	// Line 372, Address: 0x106808, Func Offset: 0x58
	// Line 373, Address: 0x10681c, Func Offset: 0x6c
	// Line 376, Address: 0x106828, Func Offset: 0x78
	// Line 377, Address: 0x10682c, Func Offset: 0x7c
	// Func End, Address: 0x106834, Func Offset: 0x84
}

// 
// Start address: 0x106840
unsigned char PlayerCheckKeyInputPrsAttack()
{
	PAD_INFO* pad;
	unsigned char value;
	unsigned char result;
	int i;
	// Line 393, Address: 0x106840, Func Offset: 0
	// Line 394, Address: 0x106844, Func Offset: 0x4
	// Line 402, Address: 0x10684c, Func Offset: 0xc
	// Line 403, Address: 0x106858, Func Offset: 0x18
	// Line 404, Address: 0x10686c, Func Offset: 0x2c
	// Line 406, Address: 0x106878, Func Offset: 0x38
	// Line 408, Address: 0x106880, Func Offset: 0x40
	// Line 409, Address: 0x106894, Func Offset: 0x54
	// Line 413, Address: 0x1068c0, Func Offset: 0x80
	// Line 414, Address: 0x1068c4, Func Offset: 0x84
	// Func End, Address: 0x1068cc, Func Offset: 0x8c
}

// 
// Start address: 0x1068d0
unsigned char PlayerCheckKeyInputTrgAttack()
{
	PAD_INFO* pad;
	// Line 426, Address: 0x1068d0, Func Offset: 0
	// Line 428, Address: 0x1068d8, Func Offset: 0x8
	// Line 429, Address: 0x1068e4, Func Offset: 0x14
	// Line 431, Address: 0x1068f0, Func Offset: 0x20
	// Line 432, Address: 0x1068fc, Func Offset: 0x2c
	// Line 433, Address: 0x106908, Func Offset: 0x38
	// Line 437, Address: 0x106910, Func Offset: 0x40
	// Line 438, Address: 0x106914, Func Offset: 0x44
	// Func End, Address: 0x10691c, Func Offset: 0x4c
}

// 
// Start address: 0x106920
unsigned char PlayerCheckKeyInputTrgLight()
{
	PAD_INFO* pad;
	// Line 446, Address: 0x106920, Func Offset: 0
	// Line 448, Address: 0x106928, Func Offset: 0x8
	// Line 449, Address: 0x106948, Func Offset: 0x28
	// Line 451, Address: 0x106950, Func Offset: 0x30
	// Line 452, Address: 0x106954, Func Offset: 0x34
	// Func End, Address: 0x10695c, Func Offset: 0x3c
}

// 
// Start address: 0x106960
float PlayerCheckKeyInputStickDir()
{
	float y;
	float x;
	PAD_INFO* pad;
	// Line 512, Address: 0x106960, Func Offset: 0
	// Line 513, Address: 0x106968, Func Offset: 0x8
	// Line 517, Address: 0x106970, Func Offset: 0x10
	// Line 518, Address: 0x106984, Func Offset: 0x24
	// Line 519, Address: 0x106994, Func Offset: 0x34
	// Line 520, Address: 0x1069a4, Func Offset: 0x44
	// Line 521, Address: 0x1069ac, Func Offset: 0x4c
	// Line 522, Address: 0x1069c0, Func Offset: 0x60
	// Line 523, Address: 0x1069d4, Func Offset: 0x74
	// Line 524, Address: 0x1069e8, Func Offset: 0x88
	// Line 538, Address: 0x1069fc, Func Offset: 0x9c
	// Line 539, Address: 0x106a08, Func Offset: 0xa8
	// Func End, Address: 0x106a18, Func Offset: 0xb8
}

// 
// Start address: 0x106a20
float PlayerCheckKeyStickClamp(float stick_val, float min, float max)
{
	// Line 549, Address: 0x106a20, Func Offset: 0
	// Line 550, Address: 0x106a58, Func Offset: 0x38
	// Line 552, Address: 0x106a70, Func Offset: 0x50
	// Func End, Address: 0x106a78, Func Offset: 0x58
}

// 
// Start address: 0x106a80
float PlayerCheckKeyInputStickPow()
{
	PAD_INFO* pad;
	float p;
	float y;
	float x;
	// Line 564, Address: 0x106a80, Func Offset: 0
	// Line 566, Address: 0x106a94, Func Offset: 0x14
	// Line 568, Address: 0x106a9c, Func Offset: 0x1c
	// Line 571, Address: 0x106ac0, Func Offset: 0x40
	// Line 572, Address: 0x106ac8, Func Offset: 0x48
	// Line 573, Address: 0x106ad0, Func Offset: 0x50
	// Line 575, Address: 0x106ad8, Func Offset: 0x58
	// Line 582, Address: 0x106ae4, Func Offset: 0x64
	// Line 583, Address: 0x106af8, Func Offset: 0x78
	// Line 584, Address: 0x106b0c, Func Offset: 0x8c
	// Line 585, Address: 0x106b20, Func Offset: 0xa0
	// Line 587, Address: 0x106b34, Func Offset: 0xb4
	// Line 588, Address: 0x106b44, Func Offset: 0xc4
	// Line 589, Address: 0x106b58, Func Offset: 0xd8
	// Line 591, Address: 0x106b60, Func Offset: 0xe0
	// Line 594, Address: 0x106b6c, Func Offset: 0xec
	// Line 595, Address: 0x106b7c, Func Offset: 0xfc
	// Line 598, Address: 0x106bc8, Func Offset: 0x148
	// Func End, Address: 0x106be4, Func Offset: 0x164
}

// 
// Start address: 0x106bf0
unsigned char PlayerCheckKeyInputHold(unsigned char hold_prev, unsigned char hold)
{
	// Line 637, Address: 0x106bf0, Func Offset: 0
	// Line 638, Address: 0x106c00, Func Offset: 0x10
	// Line 639, Address: 0x106c10, Func Offset: 0x20
	// Line 642, Address: 0x106c1c, Func Offset: 0x2c
	// Line 647, Address: 0x106c48, Func Offset: 0x58
	// Func End, Address: 0x106c5c, Func Offset: 0x6c
}

// 
// Start address: 0x106c60
unsigned char PlayerCheckKeyInputDash(unsigned char dash)
{
	// Line 654, Address: 0x106c60, Func Offset: 0
	// Line 658, Address: 0x106c88, Func Offset: 0x28
	// Func End, Address: 0x106c90, Func Offset: 0x30
}

// 
// Start address: 0x106c90
void PlayerCheckKeyInput()
{
	shGameKeyData key;
	PAD_INFO* pad;
	int i;
	char asobi_y;
	char asobi_x;
	unsigned char pad_local[32];
	char pad_local_org[4];
	// Line 670, Address: 0x106c90, Func Offset: 0
	// Line 685, Address: 0x106c9c, Func Offset: 0xc
	// Line 690, Address: 0x106ca4, Func Offset: 0x14
	// Line 691, Address: 0x106cb0, Func Offset: 0x20
	// Line 692, Address: 0x106d0c, Func Offset: 0x7c
	// Line 695, Address: 0x106d18, Func Offset: 0x88
	// Line 696, Address: 0x106d2c, Func Offset: 0x9c
	// Line 698, Address: 0x106d38, Func Offset: 0xa8
	// Line 699, Address: 0x106d44, Func Offset: 0xb4
	// Line 700, Address: 0x106d54, Func Offset: 0xc4
	// Line 701, Address: 0x106d64, Func Offset: 0xd4
	// Line 702, Address: 0x106d70, Func Offset: 0xe0
	// Line 707, Address: 0x106d80, Func Offset: 0xf0
	// Line 708, Address: 0x106d88, Func Offset: 0xf8
	// Line 709, Address: 0x106d90, Func Offset: 0x100
	// Line 710, Address: 0x106da8, Func Offset: 0x118
	// Line 712, Address: 0x106db8, Func Offset: 0x128
	// Line 713, Address: 0x106dcc, Func Offset: 0x13c
	// Line 714, Address: 0x106dd0, Func Offset: 0x140
	// Line 715, Address: 0x106dd8, Func Offset: 0x148
	// Line 718, Address: 0x106e0c, Func Offset: 0x17c
	// Line 719, Address: 0x106e2c, Func Offset: 0x19c
	// Line 720, Address: 0x106e44, Func Offset: 0x1b4
	// Line 721, Address: 0x106e54, Func Offset: 0x1c4
	// Line 722, Address: 0x106e6c, Func Offset: 0x1dc
	// Line 723, Address: 0x106e90, Func Offset: 0x200
	// Line 726, Address: 0x106eb4, Func Offset: 0x224
	// Line 727, Address: 0x106ebc, Func Offset: 0x22c
	// Line 728, Address: 0x106ec4, Func Offset: 0x234
	// Line 729, Address: 0x106ecc, Func Offset: 0x23c
	// Line 733, Address: 0x106ed4, Func Offset: 0x244
	// Line 734, Address: 0x106ef4, Func Offset: 0x264
	// Line 735, Address: 0x106f14, Func Offset: 0x284
	// Line 736, Address: 0x106f34, Func Offset: 0x2a4
	// Line 738, Address: 0x106f54, Func Offset: 0x2c4
	// Line 739, Address: 0x106f64, Func Offset: 0x2d4
	// Line 740, Address: 0x106f90, Func Offset: 0x300
	// Line 741, Address: 0x106fcc, Func Offset: 0x33c
	// Line 742, Address: 0x106ff8, Func Offset: 0x368
	// Line 744, Address: 0x107034, Func Offset: 0x3a4
	// Line 745, Address: 0x107054, Func Offset: 0x3c4
	// Line 746, Address: 0x10707c, Func Offset: 0x3ec
	// Line 747, Address: 0x107084, Func Offset: 0x3f4
	// Line 750, Address: 0x10708c, Func Offset: 0x3fc
	// Line 752, Address: 0x107098, Func Offset: 0x408
	// Line 758, Address: 0x1070ec, Func Offset: 0x45c
	// Line 760, Address: 0x1070f4, Func Offset: 0x464
	// Line 766, Address: 0x107150, Func Offset: 0x4c0
	// Line 767, Address: 0x10715c, Func Offset: 0x4cc
	// Line 770, Address: 0x107184, Func Offset: 0x4f4
	// Line 771, Address: 0x10718c, Func Offset: 0x4fc
	// Line 775, Address: 0x1071bc, Func Offset: 0x52c
	// Line 776, Address: 0x1071c8, Func Offset: 0x538
	// Line 777, Address: 0x1071f4, Func Offset: 0x564
	// Line 778, Address: 0x1071fc, Func Offset: 0x56c
	// Line 780, Address: 0x107230, Func Offset: 0x5a0
	// Line 781, Address: 0x10723c, Func Offset: 0x5ac
	// Line 782, Address: 0x107268, Func Offset: 0x5d8
	// Line 783, Address: 0x107270, Func Offset: 0x5e0
	// Line 802, Address: 0x1072a4, Func Offset: 0x614
	// Line 803, Address: 0x1072ac, Func Offset: 0x61c
	// Line 804, Address: 0x1072b4, Func Offset: 0x624
	// Line 805, Address: 0x1072bc, Func Offset: 0x62c
	// Line 810, Address: 0x1072c4, Func Offset: 0x634
	// Line 812, Address: 0x10730c, Func Offset: 0x67c
	// Line 813, Address: 0x107318, Func Offset: 0x688
	// Line 814, Address: 0x107320, Func Offset: 0x690
	// Line 818, Address: 0x107328, Func Offset: 0x698
	// Line 819, Address: 0x107334, Func Offset: 0x6a4
	// Line 822, Address: 0x107340, Func Offset: 0x6b0
	// Line 825, Address: 0x107364, Func Offset: 0x6d4
	// Line 826, Address: 0x107374, Func Offset: 0x6e4
	// Line 828, Address: 0x107380, Func Offset: 0x6f0
	// Line 829, Address: 0x10738c, Func Offset: 0x6fc
	// Line 830, Address: 0x107398, Func Offset: 0x708
	// Line 831, Address: 0x1073a4, Func Offset: 0x714
	// Line 834, Address: 0x1073ac, Func Offset: 0x71c
	// Line 836, Address: 0x1073b8, Func Offset: 0x728
	// Line 849, Address: 0x1073c8, Func Offset: 0x738
	// Line 851, Address: 0x1073e0, Func Offset: 0x750
	// Line 853, Address: 0x1073f0, Func Offset: 0x760
	// Line 854, Address: 0x107400, Func Offset: 0x770
	// Line 865, Address: 0x1074e8, Func Offset: 0x858
	// Line 866, Address: 0x1074f0, Func Offset: 0x860
	// Line 892, Address: 0x1074f8, Func Offset: 0x868
	// Func End, Address: 0x10750c, Func Offset: 0x87c
}

// 
// Start address: 0x107510
unsigned short SubCharacter::PlayerDamageMotionNo()
{
	int dead;
	int kind;
	float roty2;
	float roty;
	float direction[4];
	unsigned short damage_no[2][2][30];
	// Line 904, Address: 0x107510, Func Offset: 0
	// Line 907, Address: 0x107528, Func Offset: 0x18
	// Line 1064, Address: 0x107554, Func Offset: 0x44
	// Line 1065, Address: 0x10755c, Func Offset: 0x4c
	// Line 1067, Address: 0x107564, Func Offset: 0x54
	// Line 1068, Address: 0x107588, Func Offset: 0x78
	// Line 1069, Address: 0x10758c, Func Offset: 0x7c
	// Line 1070, Address: 0x107594, Func Offset: 0x84
	// Line 1071, Address: 0x1075bc, Func Offset: 0xac
	// Line 1074, Address: 0x1075cc, Func Offset: 0xbc
	// Line 1075, Address: 0x1075d4, Func Offset: 0xc4
	// Line 1077, Address: 0x10764c, Func Offset: 0x13c
	// Line 1078, Address: 0x10768c, Func Offset: 0x17c
	// Line 1080, Address: 0x1076a0, Func Offset: 0x190
	// Line 1082, Address: 0x1076a8, Func Offset: 0x198
	// Line 1085, Address: 0x1076e4, Func Offset: 0x1d4
	// Line 1086, Address: 0x107708, Func Offset: 0x1f8
	// Func End, Address: 0x107724, Func Offset: 0x214
}

// 
// Start address: 0x107730
void SubCharacter::PlayerCheckSideLine()
{
	float ep[4];
	float sp[4];
	// Line 1100, Address: 0x107730, Func Offset: 0
	// Line 1104, Address: 0x107748, Func Offset: 0x18
	// Line 1105, Address: 0x107750, Func Offset: 0x20
	// Line 1106, Address: 0x10775c, Func Offset: 0x2c
	// Line 1109, Address: 0x107794, Func Offset: 0x64
	// Line 1110, Address: 0x1077d0, Func Offset: 0xa0
	// Line 1111, Address: 0x107810, Func Offset: 0xe0
	// Line 1114, Address: 0x107830, Func Offset: 0x100
	// Line 1115, Address: 0x10786c, Func Offset: 0x13c
	// Line 1116, Address: 0x1078a8, Func Offset: 0x178
	// Line 1118, Address: 0x1078c8, Func Offset: 0x198
	// Func End, Address: 0x1078e4, Func Offset: 0x1b4
}

// 
// Start address: 0x1078f0
void SubCharacter::PlayerCheckFootLine()
{
	float ep[4];
	float sp[4];
	float mat[4][4];
	// Line 1123, Address: 0x1078f0, Func Offset: 0
	// Line 1129, Address: 0x107900, Func Offset: 0x10
	// Line 1130, Address: 0x107910, Func Offset: 0x20
	// Line 1131, Address: 0x107920, Func Offset: 0x30
	// Line 1132, Address: 0x10792c, Func Offset: 0x3c
	// Line 1133, Address: 0x107944, Func Offset: 0x54
	// Line 1134, Address: 0x107960, Func Offset: 0x70
	// Line 1135, Address: 0x107974, Func Offset: 0x84
	// Line 1137, Address: 0x107988, Func Offset: 0x98
	// Line 1142, Address: 0x1079b8, Func Offset: 0xc8
	// Line 1143, Address: 0x1079c8, Func Offset: 0xd8
	// Line 1144, Address: 0x1079d8, Func Offset: 0xe8
	// Line 1145, Address: 0x1079e4, Func Offset: 0xf4
	// Line 1146, Address: 0x1079fc, Func Offset: 0x10c
	// Line 1147, Address: 0x107a18, Func Offset: 0x128
	// Line 1148, Address: 0x107a2c, Func Offset: 0x13c
	// Line 1150, Address: 0x107a40, Func Offset: 0x150
	// Line 1153, Address: 0x107a70, Func Offset: 0x180
	// Func End, Address: 0x107a84, Func Offset: 0x194
}

// 
// Start address: 0x107a90
void PlayerSetHeightDummy()
{
	// Line 1160, Address: 0x107a90, Func Offset: 0
	// Func End, Address: 0x107a98, Func Offset: 0x8
}

// 
// Start address: 0x107aa0
void SubCharacter::PlayerSetHeight()
{
	float ep[4];
	float sp[4];
	float rot_tmp;
	// Line 1162, Address: 0x107aa0, Func Offset: 0
	// Line 1170, Address: 0x107ab4, Func Offset: 0x14
	// Line 1171, Address: 0x107ac0, Func Offset: 0x20
	// Line 1172, Address: 0x107acc, Func Offset: 0x2c
	// Line 1173, Address: 0x107ae4, Func Offset: 0x44
	// Line 1174, Address: 0x107b00, Func Offset: 0x60
	// Line 1176, Address: 0x107b14, Func Offset: 0x74
	// Line 1177, Address: 0x107b28, Func Offset: 0x88
	// Line 1178, Address: 0x107b34, Func Offset: 0x94
	// Line 1189, Address: 0x107b5c, Func Offset: 0xbc
	// Line 1191, Address: 0x107b68, Func Offset: 0xc8
	// Line 1192, Address: 0x107b78, Func Offset: 0xd8
	// Line 1193, Address: 0x107b94, Func Offset: 0xf4
	// Line 1194, Address: 0x107b98, Func Offset: 0xf8
	// Line 1195, Address: 0x107ba4, Func Offset: 0x104
	// Line 1196, Address: 0x107bac, Func Offset: 0x10c
	// Line 1197, Address: 0x107be0, Func Offset: 0x140
	// Line 1198, Address: 0x107c0c, Func Offset: 0x16c
	// Line 1199, Address: 0x107c1c, Func Offset: 0x17c
	// Line 1201, Address: 0x107c48, Func Offset: 0x1a8
	// Line 1202, Address: 0x107c5c, Func Offset: 0x1bc
	// Line 1204, Address: 0x107c70, Func Offset: 0x1d0
	// Line 1205, Address: 0x107c90, Func Offset: 0x1f0
	// Line 1206, Address: 0x107ca0, Func Offset: 0x200
	// Line 1207, Address: 0x107cc4, Func Offset: 0x224
	// Line 1208, Address: 0x107ccc, Func Offset: 0x22c
	// Line 1209, Address: 0x107cd4, Func Offset: 0x234
	// Line 1215, Address: 0x107ce0, Func Offset: 0x240
	// Line 1217, Address: 0x107ce8, Func Offset: 0x248
	// Line 1218, Address: 0x107cec, Func Offset: 0x24c
	// Line 1224, Address: 0x107cf8, Func Offset: 0x258
	// Func End, Address: 0x107d10, Func Offset: 0x270
}

// 
// Start address: 0x107d10
void PlayerSetHeightConnectWait()
{
	// Line 1229, Address: 0x107d10, Func Offset: 0
	// Line 1230, Address: 0x107d18, Func Offset: 0x8
	// Line 1231, Address: 0x107d28, Func Offset: 0x18
	// Func End, Address: 0x107d38, Func Offset: 0x28
}

// 
// Start address: 0x107d40
void PlayerSetColumn_SetTarget(_CL_HITPOLY_COLUMN* mov, _CL_HITPOLY_COLUMN* atk, float* mov_z, float* atk_z)
{
	float mov_column_tbl[4][2][8];
	int wep_local;
	// Line 1247, Address: 0x107d40, Func Offset: 0
	// Line 1249, Address: 0x107d44, Func Offset: 0x4
	// Line 1251, Address: 0x107d50, Func Offset: 0x10
	// Line 1299, Address: 0x107d84, Func Offset: 0x44
	// Line 1300, Address: 0x107d90, Func Offset: 0x50
	// Line 1301, Address: 0x107d98, Func Offset: 0x58
	// Line 1304, Address: 0x107da0, Func Offset: 0x60
	// Line 1305, Address: 0x107db4, Func Offset: 0x74
	// Line 1306, Address: 0x107dd4, Func Offset: 0x94
	// Line 1307, Address: 0x107de4, Func Offset: 0xa4
	// Line 1308, Address: 0x107df8, Func Offset: 0xb8
	// Line 1309, Address: 0x107e1c, Func Offset: 0xdc
	// Line 1310, Address: 0x107e3c, Func Offset: 0xfc
	// Line 1311, Address: 0x107e44, Func Offset: 0x104
	// Line 1313, Address: 0x107e50, Func Offset: 0x110
	// Line 1314, Address: 0x107e58, Func Offset: 0x118
	// Line 1317, Address: 0x107e5c, Func Offset: 0x11c
	// Line 1319, Address: 0x107e90, Func Offset: 0x150
	// Line 1320, Address: 0x107ea0, Func Offset: 0x160
	// Line 1322, Address: 0x107eac, Func Offset: 0x16c
	// Line 1325, Address: 0x107eb4, Func Offset: 0x174
	// Line 1326, Address: 0x107ed0, Func Offset: 0x190
	// Line 1327, Address: 0x107edc, Func Offset: 0x19c
	// Line 1328, Address: 0x107ee8, Func Offset: 0x1a8
	// Line 1331, Address: 0x107ef4, Func Offset: 0x1b4
	// Line 1332, Address: 0x107f08, Func Offset: 0x1c8
	// Line 1333, Address: 0x107f18, Func Offset: 0x1d8
	// Line 1334, Address: 0x107f20, Func Offset: 0x1e0
	// Line 1337, Address: 0x107f2c, Func Offset: 0x1ec
	// Line 1338, Address: 0x107f40, Func Offset: 0x200
	// Line 1339, Address: 0x107f50, Func Offset: 0x210
	// Line 1340, Address: 0x107f58, Func Offset: 0x218
	// Line 1341, Address: 0x107f5c, Func Offset: 0x21c
	// Line 1342, Address: 0x107f68, Func Offset: 0x228
	// Line 1343, Address: 0x107f70, Func Offset: 0x230
	// Line 1344, Address: 0x107f78, Func Offset: 0x238
	// Line 1345, Address: 0x107f80, Func Offset: 0x240
	// Line 1348, Address: 0x107f8c, Func Offset: 0x24c
	// Line 1351, Address: 0x107f94, Func Offset: 0x254
	// Line 1352, Address: 0x107fb0, Func Offset: 0x270
	// Line 1353, Address: 0x107fbc, Func Offset: 0x27c
	// Line 1354, Address: 0x107fc8, Func Offset: 0x288
	// Line 1364, Address: 0x107fd4, Func Offset: 0x294
	// Line 1365, Address: 0x107fe8, Func Offset: 0x2a8
	// Line 1366, Address: 0x107ff0, Func Offset: 0x2b0
	// Line 1369, Address: 0x107ffc, Func Offset: 0x2bc
	// Func End, Address: 0x108008, Func Offset: 0x2c8
}

// 
// Start address: 0x108010
void PlayerSetColumn_CloseToTarget(_CL_HITPOLY_COLUMN* mov, _CL_HITPOLY_COLUMN* atk, float* mov_z, float* atk_z)
{
	// Line 1373, Address: 0x108010, Func Offset: 0
	// Line 1377, Address: 0x108034, Func Offset: 0x24
	// Line 1378, Address: 0x108050, Func Offset: 0x40
	// Line 1379, Address: 0x10807c, Func Offset: 0x6c
	// Line 1380, Address: 0x108098, Func Offset: 0x88
	// Line 1381, Address: 0x1080ac, Func Offset: 0x9c
	// Line 1382, Address: 0x1080bc, Func Offset: 0xac
	// Line 1383, Address: 0x1080ec, Func Offset: 0xdc
	// Line 1385, Address: 0x1080fc, Func Offset: 0xec
	// Line 1386, Address: 0x108118, Func Offset: 0x108
	// Line 1387, Address: 0x108134, Func Offset: 0x124
	// Line 1388, Address: 0x108150, Func Offset: 0x140
	// Line 1391, Address: 0x10816c, Func Offset: 0x15c
	// Line 1392, Address: 0x1081a0, Func Offset: 0x190
	// Line 1393, Address: 0x1081d4, Func Offset: 0x1c4
	// Line 1394, Address: 0x108208, Func Offset: 0x1f8
	// Line 1396, Address: 0x10823c, Func Offset: 0x22c
	// Func End, Address: 0x108258, Func Offset: 0x248
}

// 
// Start address: 0x108260
void SubCharacter::PlayerSetHitColumn()
{
	_CL_HITPOLY_COLUMN col_atk;
	_CL_HITPOLY_COLUMN col_mov;
	float atk_z;
	float mov_z;
	float mat[4][4];
	// Line 1404, Address: 0x108260, Func Offset: 0
	// Line 1406, Address: 0x108270, Func Offset: 0x10
	// Line 1417, Address: 0x108278, Func Offset: 0x18
	// Line 1418, Address: 0x108298, Func Offset: 0x38
	// Line 1421, Address: 0x1082a4, Func Offset: 0x44
	// Line 1422, Address: 0x1082bc, Func Offset: 0x5c
	// Line 1427, Address: 0x1082c8, Func Offset: 0x68
	// Line 1428, Address: 0x1082dc, Func Offset: 0x7c
	// Line 1429, Address: 0x1082f0, Func Offset: 0x90
	// Line 1430, Address: 0x108314, Func Offset: 0xb4
	// Line 1431, Address: 0x10831c, Func Offset: 0xbc
	// Line 1434, Address: 0x10833c, Func Offset: 0xdc
	// Line 1437, Address: 0x108364, Func Offset: 0x104
	// Line 1438, Address: 0x108374, Func Offset: 0x114
	// Line 1440, Address: 0x10837c, Func Offset: 0x11c
	// Func End, Address: 0x108390, Func Offset: 0x130
}

// 
// Start address: 0x108390
void SubCharacter::PlayerSetSearchArea()
{
	float feel_radius[5][3];
	float feel_forward[5][3];
	float look_radius[5][3];
	float look_forward[5][3];
	int env;
	// Line 1452, Address: 0x108390, Func Offset: 0
	// Line 1455, Address: 0x1083a4, Func Offset: 0x14
	// Line 1482, Address: 0x1083d8, Func Offset: 0x48
	// Line 1509, Address: 0x10840c, Func Offset: 0x7c
	// Line 1536, Address: 0x108440, Func Offset: 0xb0
	// Line 1564, Address: 0x108474, Func Offset: 0xe4
	// Line 1565, Address: 0x108484, Func Offset: 0xf4
	// Line 1566, Address: 0x108488, Func Offset: 0xf8
	// Line 1567, Address: 0x108498, Func Offset: 0x108
	// Line 1571, Address: 0x1084a0, Func Offset: 0x110
	// Line 1573, Address: 0x1084b0, Func Offset: 0x120
	// Line 1574, Address: 0x1084b4, Func Offset: 0x124
	// Line 1575, Address: 0x1084c4, Func Offset: 0x134
	// Line 1576, Address: 0x1084cc, Func Offset: 0x13c
	// Line 1577, Address: 0x1084d0, Func Offset: 0x140
	// Line 1581, Address: 0x1084f8, Func Offset: 0x168
	// Line 1586, Address: 0x108520, Func Offset: 0x190
	// Line 1591, Address: 0x10853c, Func Offset: 0x1ac
	// Func End, Address: 0x108554, Func Offset: 0x1c4
}

// 
// Start address: 0x108560
void SubCharacter::PlayerCheckDamage()
{
	int hanekaeri;
	int hanekaeri;
	int se;
	_AnimeInfo* a_info;
	// Line 1608, Address: 0x108560, Func Offset: 0
	// Line 1612, Address: 0x108578, Func Offset: 0x18
	// Line 1613, Address: 0x108590, Func Offset: 0x30
	// Line 1618, Address: 0x1085a8, Func Offset: 0x48
	// Line 1623, Address: 0x1085b8, Func Offset: 0x58
	// Line 1625, Address: 0x1085e0, Func Offset: 0x80
	// Line 1626, Address: 0x1085e8, Func Offset: 0x88
	// Line 1632, Address: 0x1085f0, Func Offset: 0x90
	// Line 1642, Address: 0x1085fc, Func Offset: 0x9c
	// Line 1644, Address: 0x108608, Func Offset: 0xa8
	// Line 1654, Address: 0x108630, Func Offset: 0xd0
	// Line 1655, Address: 0x108640, Func Offset: 0xe0
	// Line 1659, Address: 0x108680, Func Offset: 0x120
	// Line 1662, Address: 0x108684, Func Offset: 0x124
	// Line 1664, Address: 0x10869c, Func Offset: 0x13c
	// Line 1666, Address: 0x1086d8, Func Offset: 0x178
	// Line 1668, Address: 0x1086dc, Func Offset: 0x17c
	// Line 1671, Address: 0x1086e4, Func Offset: 0x184
	// Line 1672, Address: 0x1086f8, Func Offset: 0x198
	// Line 1673, Address: 0x108718, Func Offset: 0x1b8
	// Line 1678, Address: 0x10871c, Func Offset: 0x1bc
	// Line 1679, Address: 0x108724, Func Offset: 0x1c4
	// Line 1680, Address: 0x108738, Func Offset: 0x1d8
	// Line 1683, Address: 0x10874c, Func Offset: 0x1ec
	// Line 1686, Address: 0x108754, Func Offset: 0x1f4
	// Line 1687, Address: 0x108764, Func Offset: 0x204
	// Line 1688, Address: 0x108778, Func Offset: 0x218
	// Line 1689, Address: 0x108798, Func Offset: 0x238
	// Line 1690, Address: 0x1087ac, Func Offset: 0x24c
	// Line 1697, Address: 0x1087c0, Func Offset: 0x260
	// Line 1698, Address: 0x1087d0, Func Offset: 0x270
	// Line 1702, Address: 0x108810, Func Offset: 0x2b0
	// Line 1705, Address: 0x108814, Func Offset: 0x2b4
	// Line 1707, Address: 0x10882c, Func Offset: 0x2cc
	// Line 1709, Address: 0x108868, Func Offset: 0x308
	// Line 1711, Address: 0x10886c, Func Offset: 0x30c
	// Line 1713, Address: 0x108874, Func Offset: 0x314
	// Line 1714, Address: 0x108888, Func Offset: 0x328
	// Line 1715, Address: 0x1088a8, Func Offset: 0x348
	// Line 1720, Address: 0x1088ac, Func Offset: 0x34c
	// Line 1721, Address: 0x1088b4, Func Offset: 0x354
	// Line 1722, Address: 0x1088c0, Func Offset: 0x360
	// Line 1723, Address: 0x1088cc, Func Offset: 0x36c
	// Line 1725, Address: 0x1088f4, Func Offset: 0x394
	// Line 1726, Address: 0x1088f8, Func Offset: 0x398
	// Line 1728, Address: 0x108900, Func Offset: 0x3a0
	// Line 1731, Address: 0x108904, Func Offset: 0x3a4
	// Line 1733, Address: 0x108924, Func Offset: 0x3c4
	// Line 1734, Address: 0x108938, Func Offset: 0x3d8
	// Line 1737, Address: 0x10894c, Func Offset: 0x3ec
	// Line 1740, Address: 0x108954, Func Offset: 0x3f4
	// Line 1742, Address: 0x108984, Func Offset: 0x424
	// Line 1743, Address: 0x1089a4, Func Offset: 0x444
	// Line 1745, Address: 0x1089cc, Func Offset: 0x46c
	// Line 1746, Address: 0x1089d0, Func Offset: 0x470
	// Line 1748, Address: 0x1089d8, Func Offset: 0x478
	// Line 1751, Address: 0x1089dc, Func Offset: 0x47c
	// Line 1753, Address: 0x1089fc, Func Offset: 0x49c
	// Line 1756, Address: 0x108a04, Func Offset: 0x4a4
	// Line 1757, Address: 0x108a24, Func Offset: 0x4c4
	// Line 1758, Address: 0x108a38, Func Offset: 0x4d8
	// Line 1759, Address: 0x108a44, Func Offset: 0x4e4
	// Line 1760, Address: 0x108a58, Func Offset: 0x4f8
	// Line 1761, Address: 0x108a6c, Func Offset: 0x50c
	// Line 1763, Address: 0x108a94, Func Offset: 0x534
	// Line 1764, Address: 0x108a98, Func Offset: 0x538
	// Line 1766, Address: 0x108aa0, Func Offset: 0x540
	// Line 1767, Address: 0x108aa4, Func Offset: 0x544
	// Line 1770, Address: 0x108ab0, Func Offset: 0x550
	// Line 1781, Address: 0x108ad0, Func Offset: 0x570
	// Line 1783, Address: 0x108af0, Func Offset: 0x590
	// Line 1784, Address: 0x108afc, Func Offset: 0x59c
	// Line 1785, Address: 0x108b04, Func Offset: 0x5a4
	// Line 1808, Address: 0x108b44, Func Offset: 0x5e4
	// Line 1809, Address: 0x108b54, Func Offset: 0x5f4
	// Line 1811, Address: 0x108b80, Func Offset: 0x620
	// Line 1812, Address: 0x108b8c, Func Offset: 0x62c
	// Line 1815, Address: 0x108ba0, Func Offset: 0x640
	// Line 1816, Address: 0x108bc0, Func Offset: 0x660
	// Line 1817, Address: 0x108bd0, Func Offset: 0x670
	// Line 1820, Address: 0x108bd4, Func Offset: 0x674
	// Line 1827, Address: 0x108be0, Func Offset: 0x680
	// Line 1829, Address: 0x108c0c, Func Offset: 0x6ac
	// Line 1832, Address: 0x108c14, Func Offset: 0x6b4
	// Line 1834, Address: 0x108c20, Func Offset: 0x6c0
	// Line 1842, Address: 0x108c34, Func Offset: 0x6d4
	// Line 1843, Address: 0x108c50, Func Offset: 0x6f0
	// Line 1847, Address: 0x108c5c, Func Offset: 0x6fc
	// Line 1848, Address: 0x108c70, Func Offset: 0x710
	// Line 1849, Address: 0x108c80, Func Offset: 0x720
	// Line 1852, Address: 0x108c8c, Func Offset: 0x72c
	// Line 1856, Address: 0x108c94, Func Offset: 0x734
	// Line 1857, Address: 0x108ca4, Func Offset: 0x744
	// Line 1858, Address: 0x108cb0, Func Offset: 0x750
	// Line 1859, Address: 0x108cb8, Func Offset: 0x758
	// Line 1862, Address: 0x108cc4, Func Offset: 0x764
	// Line 1865, Address: 0x108cc8, Func Offset: 0x768
	// Line 1866, Address: 0x108ce4, Func Offset: 0x784
	// Line 1867, Address: 0x108cf0, Func Offset: 0x790
	// Line 1883, Address: 0x108cfc, Func Offset: 0x79c
	// Line 1885, Address: 0x108d44, Func Offset: 0x7e4
	// Line 1886, Address: 0x108d48, Func Offset: 0x7e8
	// Line 1893, Address: 0x108d4c, Func Offset: 0x7ec
	// Line 1896, Address: 0x108d68, Func Offset: 0x808
	// Line 1897, Address: 0x108d74, Func Offset: 0x814
	// Line 1902, Address: 0x108d80, Func Offset: 0x820
	// Line 1910, Address: 0x108db0, Func Offset: 0x850
	// Line 1916, Address: 0x108dec, Func Offset: 0x88c
	// Func End, Address: 0x108e08, Func Offset: 0x8a8
}

// 
// Start address: 0x108e10
void SubCharacter::PlayerCheckNeckAngle()
{
	float tmp[4];
	float pos[4];
	SubCharacterDisp* this_d;
	// Line 1926, Address: 0x108e10, Func Offset: 0
	// Line 1939, Address: 0x108e20, Func Offset: 0x10
	// Line 1952, Address: 0x108e78, Func Offset: 0x68
	// Line 1953, Address: 0x108e80, Func Offset: 0x70
	// Line 1954, Address: 0x108e88, Func Offset: 0x78
	// Line 1956, Address: 0x108e90, Func Offset: 0x80
	// Line 1960, Address: 0x108ea0, Func Offset: 0x90
	// Line 1965, Address: 0x108eb0, Func Offset: 0xa0
	// Line 1966, Address: 0x108ec0, Func Offset: 0xb0
	// Line 1967, Address: 0x108ecc, Func Offset: 0xbc
	// Line 1968, Address: 0x108edc, Func Offset: 0xcc
	// Line 1969, Address: 0x108ee4, Func Offset: 0xd4
	// Line 1978, Address: 0x108ef8, Func Offset: 0xe8
	// Line 1979, Address: 0x108f04, Func Offset: 0xf4
	// Line 1981, Address: 0x108f14, Func Offset: 0x104
	// Line 1982, Address: 0x108f1c, Func Offset: 0x10c
	// Line 1983, Address: 0x108f24, Func Offset: 0x114
	// Line 1984, Address: 0x108f2c, Func Offset: 0x11c
	// Line 1988, Address: 0x108f34, Func Offset: 0x124
	// Line 1989, Address: 0x108f44, Func Offset: 0x134
	// Line 1990, Address: 0x108f54, Func Offset: 0x144
	// Line 1993, Address: 0x108f64, Func Offset: 0x154
	// Line 1994, Address: 0x108f80, Func Offset: 0x170
	// Line 1996, Address: 0x108fb8, Func Offset: 0x1a8
	// Line 1997, Address: 0x109048, Func Offset: 0x238
	// Line 1998, Address: 0x1090d0, Func Offset: 0x2c0
	// Line 1999, Address: 0x1090d8, Func Offset: 0x2c8
	// Line 2000, Address: 0x1090e0, Func Offset: 0x2d0
	// Line 2002, Address: 0x1090e8, Func Offset: 0x2d8
	// Line 2004, Address: 0x1090f0, Func Offset: 0x2e0
	// Line 2008, Address: 0x109118, Func Offset: 0x308
	// Line 2009, Address: 0x109120, Func Offset: 0x310
	// Line 2010, Address: 0x109128, Func Offset: 0x318
	// Line 2013, Address: 0x109130, Func Offset: 0x320
	// Line 2014, Address: 0x109150, Func Offset: 0x340
	// Line 2015, Address: 0x109174, Func Offset: 0x364
	// Line 2016, Address: 0x109190, Func Offset: 0x380
	// Line 2017, Address: 0x109198, Func Offset: 0x388
	// Line 2035, Address: 0x1091b8, Func Offset: 0x3a8
	// Line 2042, Address: 0x1091e8, Func Offset: 0x3d8
	// Line 2051, Address: 0x10921c, Func Offset: 0x40c
	// Line 2052, Address: 0x109234, Func Offset: 0x424
	// Line 2053, Address: 0x109240, Func Offset: 0x430
	// Func End, Address: 0x109254, Func Offset: 0x444
}

// 
// Start address: 0x109260
void SubCharacter::PlayerCheckBothArmsAngle()
{
	float tmp[4];
	float pos[4];
	SubCharacterDisp* this_d;
	// Line 2066, Address: 0x109260, Func Offset: 0
	// Line 2081, Address: 0x109274, Func Offset: 0x14
	// Line 2085, Address: 0x1092a4, Func Offset: 0x44
	// Line 2086, Address: 0x1092b8, Func Offset: 0x58
	// Line 2087, Address: 0x1092c0, Func Offset: 0x60
	// Line 2088, Address: 0x1092c8, Func Offset: 0x68
	// Line 2089, Address: 0x1092d0, Func Offset: 0x70
	// Line 2090, Address: 0x1092d8, Func Offset: 0x78
	// Line 2092, Address: 0x1092e0, Func Offset: 0x80
	// Line 2093, Address: 0x1092f0, Func Offset: 0x90
	// Line 2094, Address: 0x109340, Func Offset: 0xe0
	// Line 2097, Address: 0x109350, Func Offset: 0xf0
	// Line 2098, Address: 0x109388, Func Offset: 0x128
	// Line 2111, Address: 0x109418, Func Offset: 0x1b8
	// Line 2112, Address: 0x109420, Func Offset: 0x1c0
	// Line 2116, Address: 0x109428, Func Offset: 0x1c8
	// Line 2119, Address: 0x10943c, Func Offset: 0x1dc
	// Line 2120, Address: 0x109460, Func Offset: 0x200
	// Line 2121, Address: 0x109468, Func Offset: 0x208
	// Line 2122, Address: 0x109470, Func Offset: 0x210
	// Line 2130, Address: 0x1094a4, Func Offset: 0x244
	// Line 2131, Address: 0x1094ac, Func Offset: 0x24c
	// Line 2144, Address: 0x1094d8, Func Offset: 0x278
	// Line 2146, Address: 0x1094ec, Func Offset: 0x28c
	// Line 2147, Address: 0x109514, Func Offset: 0x2b4
	// Line 2148, Address: 0x109524, Func Offset: 0x2c4
	// Line 2149, Address: 0x109540, Func Offset: 0x2e0
	// Line 2151, Address: 0x109550, Func Offset: 0x2f0
	// Line 2154, Address: 0x10955c, Func Offset: 0x2fc
	// Func End, Address: 0x109574, Func Offset: 0x314
}

// 
// Start address: 0x109580
void SubCharacter::PlayerCheckBodyAngle()
{
	float angle_table[3][2][4];
	int move;
	int hold;
	int wep;
	SubCharacterDisp* this_d;
	// Line 2164, Address: 0x109580, Func Offset: 0
	// Line 2190, Address: 0x109588, Func Offset: 0x8
	// Line 2191, Address: 0x10958c, Func Offset: 0xc
	// Line 2219, Address: 0x1095c8, Func Offset: 0x48
	// Line 2221, Address: 0x109608, Func Offset: 0x88
	// Line 2222, Address: 0x10960c, Func Offset: 0x8c
	// Line 2224, Address: 0x109614, Func Offset: 0x94
	// Line 2225, Address: 0x109618, Func Offset: 0x98
	// Line 2227, Address: 0x109620, Func Offset: 0xa0
	// Line 2228, Address: 0x109624, Func Offset: 0xa4
	// Line 2230, Address: 0x10962c, Func Offset: 0xac
	// Line 2237, Address: 0x109630, Func Offset: 0xb0
	// Line 2240, Address: 0x109670, Func Offset: 0xf0
	// Line 2241, Address: 0x109674, Func Offset: 0xf4
	// Line 2244, Address: 0x10967c, Func Offset: 0xfc
	// Line 2245, Address: 0x109680, Func Offset: 0x100
	// Line 2247, Address: 0x109688, Func Offset: 0x108
	// Line 2251, Address: 0x10968c, Func Offset: 0x10c
	// Line 2254, Address: 0x1096b0, Func Offset: 0x130
	// Line 2255, Address: 0x1096b4, Func Offset: 0x134
	// Line 2257, Address: 0x1096bc, Func Offset: 0x13c
	// Line 2258, Address: 0x1096c0, Func Offset: 0x140
	// Line 2260, Address: 0x1096c8, Func Offset: 0x148
	// Line 2264, Address: 0x1096cc, Func Offset: 0x14c
	// Line 2269, Address: 0x1096f4, Func Offset: 0x174
	// Line 2270, Address: 0x109728, Func Offset: 0x1a8
	// Line 2273, Address: 0x109730, Func Offset: 0x1b0
	// Line 2274, Address: 0x109740, Func Offset: 0x1c0
	// Line 2276, Address: 0x109748, Func Offset: 0x1c8
	// Line 2280, Address: 0x109750, Func Offset: 0x1d0
	// Line 2282, Address: 0x109770, Func Offset: 0x1f0
	// Line 2289, Address: 0x109790, Func Offset: 0x210
	// Line 2291, Address: 0x109798, Func Offset: 0x218
	// Line 2299, Address: 0x1097b8, Func Offset: 0x238
	// Func End, Address: 0x1097c8, Func Offset: 0x248
}

// 
// Start address: 0x1097d0
void SubCharacter::PlayerCheckSetParameterPhase1()
{
	int wep;
	// Line 2308, Address: 0x1097d0, Func Offset: 0
	// Line 2312, Address: 0x1097e4, Func Offset: 0x14
	// Line 2314, Address: 0x1097ec, Func Offset: 0x1c
	// Line 2316, Address: 0x1097f8, Func Offset: 0x28
	// Line 2317, Address: 0x10980c, Func Offset: 0x3c
	// Line 2318, Address: 0x109818, Func Offset: 0x48
	// Line 2319, Address: 0x109830, Func Offset: 0x60
	// Line 2323, Address: 0x109848, Func Offset: 0x78
	// Line 2326, Address: 0x109850, Func Offset: 0x80
	// Line 2328, Address: 0x10985c, Func Offset: 0x8c
	// Func End, Address: 0x109874, Func Offset: 0xa4
}

// 
// Start address: 0x109880
void SubCharacter::PlayerCheckSetParameterPhase2()
{
	// Line 2337, Address: 0x109880, Func Offset: 0
	// Line 2339, Address: 0x109890, Func Offset: 0x10
	// Line 2341, Address: 0x109898, Func Offset: 0x18
	// Line 2343, Address: 0x1098a4, Func Offset: 0x24
	// Line 2347, Address: 0x1098b0, Func Offset: 0x30
	// Line 2348, Address: 0x1098bc, Func Offset: 0x3c
	// Func End, Address: 0x1098d0, Func Offset: 0x50
}

// 
// Start address: 0x1098d0
void PlayerCheckModelParts()
{
	int status;
	short frame;
	_AnimeInfo* a_info;
	// Line 2400, Address: 0x1098d0, Func Offset: 0
	// Line 2406, Address: 0x1098e4, Func Offset: 0x14
	// Line 2407, Address: 0x1098fc, Func Offset: 0x2c
	// Line 2413, Address: 0x109918, Func Offset: 0x48
	// Line 2414, Address: 0x109948, Func Offset: 0x78
	// Line 2415, Address: 0x109950, Func Offset: 0x80
	// Line 2416, Address: 0x109958, Func Offset: 0x88
	// Line 2420, Address: 0x109964, Func Offset: 0x94
	// Line 2428, Address: 0x109a40, Func Offset: 0x170
	// Line 2429, Address: 0x109a44, Func Offset: 0x174
	// Line 2434, Address: 0x109a4c, Func Offset: 0x17c
	// Line 2435, Address: 0x109a50, Func Offset: 0x180
	// Line 2437, Address: 0x109a58, Func Offset: 0x188
	// Line 2438, Address: 0x109a68, Func Offset: 0x198
	// Line 2440, Address: 0x109a74, Func Offset: 0x1a4
	// Line 2441, Address: 0x109a78, Func Offset: 0x1a8
	// Line 2443, Address: 0x109a80, Func Offset: 0x1b0
	// Line 2444, Address: 0x109a94, Func Offset: 0x1c4
	// Line 2446, Address: 0x109a9c, Func Offset: 0x1cc
	// Line 2447, Address: 0x109aa0, Func Offset: 0x1d0
	// Line 2451, Address: 0x109aa8, Func Offset: 0x1d8
	// Line 2452, Address: 0x109aac, Func Offset: 0x1dc
	// Line 2455, Address: 0x109ab4, Func Offset: 0x1e4
	// Line 2461, Address: 0x109ab8, Func Offset: 0x1e8
	// Line 2463, Address: 0x109aec, Func Offset: 0x21c
	// Line 2464, Address: 0x109af8, Func Offset: 0x228
	// Line 2465, Address: 0x109b04, Func Offset: 0x234
	// Line 2466, Address: 0x109b0c, Func Offset: 0x23c
	// Line 2470, Address: 0x109b3c, Func Offset: 0x26c
	// Line 2474, Address: 0x109b70, Func Offset: 0x2a0
	// Line 2475, Address: 0x109b7c, Func Offset: 0x2ac
	// Line 2476, Address: 0x109b88, Func Offset: 0x2b8
	// Line 2478, Address: 0x109b90, Func Offset: 0x2c0
	// Line 2479, Address: 0x109b9c, Func Offset: 0x2cc
	// Line 2482, Address: 0x109ba8, Func Offset: 0x2d8
	// Line 2484, Address: 0x109bd0, Func Offset: 0x300
	// Line 2485, Address: 0x109bdc, Func Offset: 0x30c
	// Line 2487, Address: 0x109be4, Func Offset: 0x314
	// Line 2490, Address: 0x109bf0, Func Offset: 0x320
	// Line 2493, Address: 0x109bf8, Func Offset: 0x328
	// Line 2495, Address: 0x109c0c, Func Offset: 0x33c
	// Line 2496, Address: 0x109c18, Func Offset: 0x348
	// Line 2498, Address: 0x109c20, Func Offset: 0x350
	// Line 2501, Address: 0x109c2c, Func Offset: 0x35c
	// Line 2502, Address: 0x109c38, Func Offset: 0x368
	// Line 2504, Address: 0x109c40, Func Offset: 0x370
	// Line 2507, Address: 0x109c74, Func Offset: 0x3a4
	// Line 2508, Address: 0x109c80, Func Offset: 0x3b0
	// Line 2511, Address: 0x109c88, Func Offset: 0x3b8
	// Line 2516, Address: 0x109c94, Func Offset: 0x3c4
	// Line 2517, Address: 0x109ca0, Func Offset: 0x3d0
	// Line 2518, Address: 0x109cb4, Func Offset: 0x3e4
	// Line 2519, Address: 0x109cd4, Func Offset: 0x404
	// Line 2520, Address: 0x109ce0, Func Offset: 0x410
	// Line 2521, Address: 0x109ce8, Func Offset: 0x418
	// Line 2526, Address: 0x109cf4, Func Offset: 0x424
	// Line 2527, Address: 0x109d00, Func Offset: 0x430
	// Line 2530, Address: 0x109d08, Func Offset: 0x438
	// Line 2533, Address: 0x109d3c, Func Offset: 0x46c
	// Line 2534, Address: 0x109d48, Func Offset: 0x478
	// Line 2536, Address: 0x109d50, Func Offset: 0x480
	// Line 2537, Address: 0x109d5c, Func Offset: 0x48c
	// Line 2539, Address: 0x109d64, Func Offset: 0x494
	// Line 2542, Address: 0x109d70, Func Offset: 0x4a0
	// Line 2543, Address: 0x109d7c, Func Offset: 0x4ac
	// Line 2545, Address: 0x109d84, Func Offset: 0x4b4
	// Line 2547, Address: 0x109d98, Func Offset: 0x4c8
	// Line 2548, Address: 0x109da4, Func Offset: 0x4d4
	// Line 2550, Address: 0x109dac, Func Offset: 0x4dc
	// Line 2553, Address: 0x109db8, Func Offset: 0x4e8
	// Line 2554, Address: 0x109dc4, Func Offset: 0x4f4
	// Line 2556, Address: 0x109dcc, Func Offset: 0x4fc
	// Line 2557, Address: 0x109dd8, Func Offset: 0x508
	// Line 2561, Address: 0x109de4, Func Offset: 0x514
	// Line 2562, Address: 0x109e0c, Func Offset: 0x53c
	// Func End, Address: 0x109e28, Func Offset: 0x558
}

// 
// Start address: 0x109e30
void james_anim_set_all(_AnimeInfo* aip, int comp_type)
{
	// Line 2592, Address: 0x109e30, Func Offset: 0
	// Line 2593, Address: 0x109e48, Func Offset: 0x18
	// Line 2595, Address: 0x109e78, Func Offset: 0x48
	// Line 2597, Address: 0x109ea8, Func Offset: 0x78
	// Func End, Address: 0x109ec0, Func Offset: 0x90
}

// 
// Start address: 0x109ec0
void james_anim_set(_AnimeInfo* aip, int body_type, int comp_type)
{
	// Line 2625, Address: 0x109ec0, Func Offset: 0
	// Line 2626, Address: 0x109ee0, Func Offset: 0x20
	// Line 2628, Address: 0x109f10, Func Offset: 0x50
	// Func End, Address: 0x109f2c, Func Offset: 0x6c
}

// 
// Start address: 0x109f30
_AnimeInfo* PlayerGetStageAnime(int anime)
{
	int i;
	// Line 2673, Address: 0x109f30, Func Offset: 0
	// Line 2675, Address: 0x109f34, Func Offset: 0x4
	// Line 2676, Address: 0x109f3c, Func Offset: 0xc
	// Line 2677, Address: 0x109f44, Func Offset: 0x14
	// Line 2679, Address: 0x109f4c, Func Offset: 0x1c
	// Line 2680, Address: 0x109f50, Func Offset: 0x20
	// Line 2681, Address: 0x109f7c, Func Offset: 0x4c
	// Line 2682, Address: 0x109f80, Func Offset: 0x50
	// Func End, Address: 0x109f88, Func Offset: 0x58
}

// 
// Start address: 0x109f90
void PlayerCheckAnimeUpper()
{
	int comp_type;
	int anime;
	int anime;
	int anime;
	int anime;
	int anime;
	int comp_type;
	int comp_type;
	int anime;
	int comp_type;
	int anime;
	int anime_on;
	int anime;
	int comp_type;
	int anime;
	int comp_type;
	int comp_type;
	int comp_type;
	int comp_type;
	int comp_type;
	int comp_type;
	int comp_type;
	int comp_type;
	_AnimeInfo* aip;
	SubCharacterDisp* scp_d;
	int anime_change_check_upper;
	// Line 2707, Address: 0x109f90, Func Offset: 0
	// Line 2710, Address: 0x109fa8, Func Offset: 0x18
	// Line 2723, Address: 0x109fb0, Func Offset: 0x20
	// Line 2725, Address: 0x109fc4, Func Offset: 0x34
	// Line 2728, Address: 0x109ff0, Func Offset: 0x60
	// Line 2731, Address: 0x10a020, Func Offset: 0x90
	// Line 2732, Address: 0x10a028, Func Offset: 0x98
	// Line 2733, Address: 0x10a03c, Func Offset: 0xac
	// Line 2750, Address: 0x10a050, Func Offset: 0xc0
	// Line 2752, Address: 0x10a058, Func Offset: 0xc8
	// Line 2754, Address: 0x10a060, Func Offset: 0xd0
	// Line 2755, Address: 0x10a074, Func Offset: 0xe4
	// Line 2756, Address: 0x10a088, Func Offset: 0xf8
	// Line 2758, Address: 0x10a090, Func Offset: 0x100
	// Line 2760, Address: 0x10a098, Func Offset: 0x108
	// Line 2761, Address: 0x10a0ac, Func Offset: 0x11c
	// Line 2762, Address: 0x10a0c0, Func Offset: 0x130
	// Line 2764, Address: 0x10a0c8, Func Offset: 0x138
	// Line 2765, Address: 0x10a0d0, Func Offset: 0x140
	// Line 2766, Address: 0x10a0e4, Func Offset: 0x154
	// Line 2767, Address: 0x10a0f8, Func Offset: 0x168
	// Line 2769, Address: 0x10a100, Func Offset: 0x170
	// Line 2770, Address: 0x10a108, Func Offset: 0x178
	// Line 2771, Address: 0x10a11c, Func Offset: 0x18c
	// Line 2772, Address: 0x10a130, Func Offset: 0x1a0
	// Line 2777, Address: 0x10a138, Func Offset: 0x1a8
	// Line 2779, Address: 0x10a158, Func Offset: 0x1c8
	// Line 2780, Address: 0x10a15c, Func Offset: 0x1cc
	// Line 2781, Address: 0x10a170, Func Offset: 0x1e0
	// Line 2783, Address: 0x10a178, Func Offset: 0x1e8
	// Line 2784, Address: 0x10a17c, Func Offset: 0x1ec
	// Line 2787, Address: 0x10a190, Func Offset: 0x200
	// Line 2788, Address: 0x10a198, Func Offset: 0x208
	// Line 2790, Address: 0x10a1ac, Func Offset: 0x21c
	// Line 2795, Address: 0x10a1b4, Func Offset: 0x224
	// Line 2797, Address: 0x10a1d4, Func Offset: 0x244
	// Line 2798, Address: 0x10a1d8, Func Offset: 0x248
	// Line 2799, Address: 0x10a1ec, Func Offset: 0x25c
	// Line 2801, Address: 0x10a1f4, Func Offset: 0x264
	// Line 2802, Address: 0x10a1f8, Func Offset: 0x268
	// Line 2804, Address: 0x10a20c, Func Offset: 0x27c
	// Line 2805, Address: 0x10a214, Func Offset: 0x284
	// Line 2807, Address: 0x10a228, Func Offset: 0x298
	// Line 2812, Address: 0x10a230, Func Offset: 0x2a0
	// Line 2814, Address: 0x10a250, Func Offset: 0x2c0
	// Line 2815, Address: 0x10a254, Func Offset: 0x2c4
	// Line 2816, Address: 0x10a268, Func Offset: 0x2d8
	// Line 2818, Address: 0x10a270, Func Offset: 0x2e0
	// Line 2819, Address: 0x10a274, Func Offset: 0x2e4
	// Line 2821, Address: 0x10a288, Func Offset: 0x2f8
	// Line 2822, Address: 0x10a290, Func Offset: 0x300
	// Line 2824, Address: 0x10a2a4, Func Offset: 0x314
	// Line 2826, Address: 0x10a2ac, Func Offset: 0x31c
	// Line 2828, Address: 0x10a2b4, Func Offset: 0x324
	// Line 2829, Address: 0x10a2c8, Func Offset: 0x338
	// Line 2830, Address: 0x10a2dc, Func Offset: 0x34c
	// Line 2832, Address: 0x10a2e4, Func Offset: 0x354
	// Line 2833, Address: 0x10a2ec, Func Offset: 0x35c
	// Line 2834, Address: 0x10a300, Func Offset: 0x370
	// Line 2835, Address: 0x10a314, Func Offset: 0x384
	// Line 2840, Address: 0x10a31c, Func Offset: 0x38c
	// Line 2842, Address: 0x10a33c, Func Offset: 0x3ac
	// Line 2843, Address: 0x10a340, Func Offset: 0x3b0
	// Line 2844, Address: 0x10a354, Func Offset: 0x3c4
	// Line 2846, Address: 0x10a35c, Func Offset: 0x3cc
	// Line 2847, Address: 0x10a360, Func Offset: 0x3d0
	// Line 2849, Address: 0x10a374, Func Offset: 0x3e4
	// Line 2850, Address: 0x10a37c, Func Offset: 0x3ec
	// Line 2852, Address: 0x10a390, Func Offset: 0x400
	// Line 2857, Address: 0x10a398, Func Offset: 0x408
	// Line 2859, Address: 0x10a3b8, Func Offset: 0x428
	// Line 2860, Address: 0x10a3bc, Func Offset: 0x42c
	// Line 2861, Address: 0x10a3d0, Func Offset: 0x440
	// Line 2863, Address: 0x10a3d8, Func Offset: 0x448
	// Line 2864, Address: 0x10a3dc, Func Offset: 0x44c
	// Line 2866, Address: 0x10a3f0, Func Offset: 0x460
	// Line 2867, Address: 0x10a3f8, Func Offset: 0x468
	// Line 2869, Address: 0x10a40c, Func Offset: 0x47c
	// Line 2874, Address: 0x10a414, Func Offset: 0x484
	// Line 2876, Address: 0x10a434, Func Offset: 0x4a4
	// Line 2877, Address: 0x10a438, Func Offset: 0x4a8
	// Line 2878, Address: 0x10a44c, Func Offset: 0x4bc
	// Line 2880, Address: 0x10a454, Func Offset: 0x4c4
	// Line 2881, Address: 0x10a458, Func Offset: 0x4c8
	// Line 2883, Address: 0x10a46c, Func Offset: 0x4dc
	// Line 2884, Address: 0x10a474, Func Offset: 0x4e4
	// Line 2886, Address: 0x10a488, Func Offset: 0x4f8
	// Line 2891, Address: 0x10a490, Func Offset: 0x500
	// Line 2893, Address: 0x10a4b0, Func Offset: 0x520
	// Line 2894, Address: 0x10a4b4, Func Offset: 0x524
	// Line 2895, Address: 0x10a4c8, Func Offset: 0x538
	// Line 2897, Address: 0x10a4d0, Func Offset: 0x540
	// Line 2898, Address: 0x10a4d4, Func Offset: 0x544
	// Line 2900, Address: 0x10a4e8, Func Offset: 0x558
	// Line 2901, Address: 0x10a4f0, Func Offset: 0x560
	// Line 2903, Address: 0x10a504, Func Offset: 0x574
	// Line 2908, Address: 0x10a50c, Func Offset: 0x57c
	// Line 2910, Address: 0x10a52c, Func Offset: 0x59c
	// Line 2911, Address: 0x10a530, Func Offset: 0x5a0
	// Line 2912, Address: 0x10a544, Func Offset: 0x5b4
	// Line 2914, Address: 0x10a54c, Func Offset: 0x5bc
	// Line 2915, Address: 0x10a550, Func Offset: 0x5c0
	// Line 2917, Address: 0x10a564, Func Offset: 0x5d4
	// Line 2918, Address: 0x10a56c, Func Offset: 0x5dc
	// Line 2920, Address: 0x10a580, Func Offset: 0x5f0
	// Line 2924, Address: 0x10a588, Func Offset: 0x5f8
	// Line 2925, Address: 0x10a590, Func Offset: 0x600
	// Line 2927, Address: 0x10a5a4, Func Offset: 0x614
	// Line 2944, Address: 0x10a5ac, Func Offset: 0x61c
	// Line 2945, Address: 0x10a5b4, Func Offset: 0x624
	// Line 2946, Address: 0x10a5c8, Func Offset: 0x638
	// Line 2947, Address: 0x10a5dc, Func Offset: 0x64c
	// Line 2949, Address: 0x10a5e4, Func Offset: 0x654
	// Line 2950, Address: 0x10a5ec, Func Offset: 0x65c
	// Line 2951, Address: 0x10a600, Func Offset: 0x670
	// Line 2952, Address: 0x10a614, Func Offset: 0x684
	// Line 2954, Address: 0x10a61c, Func Offset: 0x68c
	// Line 2955, Address: 0x10a630, Func Offset: 0x6a0
	// Line 2956, Address: 0x10a638, Func Offset: 0x6a8
	// Line 2957, Address: 0x10a640, Func Offset: 0x6b0
	// Line 2959, Address: 0x10a648, Func Offset: 0x6b8
	// Line 2960, Address: 0x10a65c, Func Offset: 0x6cc
	// Line 2961, Address: 0x10a670, Func Offset: 0x6e0
	// Line 2966, Address: 0x10a678, Func Offset: 0x6e8
	// Line 2967, Address: 0x10a68c, Func Offset: 0x6fc
	// Line 2968, Address: 0x10a690, Func Offset: 0x700
	// Line 2969, Address: 0x10a6ac, Func Offset: 0x71c
	// Line 2970, Address: 0x10a6c0, Func Offset: 0x730
	// Line 2972, Address: 0x10a6d4, Func Offset: 0x744
	// Line 2976, Address: 0x10a6dc, Func Offset: 0x74c
	// Line 2981, Address: 0x10a6e0, Func Offset: 0x750
	// Line 2982, Address: 0x10a6f4, Func Offset: 0x764
	// Line 2984, Address: 0x10a724, Func Offset: 0x794
	// Line 2988, Address: 0x10a744, Func Offset: 0x7b4
	// Line 2989, Address: 0x10a748, Func Offset: 0x7b8
	// Line 2990, Address: 0x10a750, Func Offset: 0x7c0
	// Line 2992, Address: 0x10a758, Func Offset: 0x7c8
	// Line 2995, Address: 0x10a760, Func Offset: 0x7d0
	// Line 2996, Address: 0x10a770, Func Offset: 0x7e0
	// Line 2997, Address: 0x10a77c, Func Offset: 0x7ec
	// Line 2998, Address: 0x10a784, Func Offset: 0x7f4
	// Line 2999, Address: 0x10a78c, Func Offset: 0x7fc
	// Line 3001, Address: 0x10a794, Func Offset: 0x804
	// Line 3003, Address: 0x10a798, Func Offset: 0x808
	// Line 3008, Address: 0x10a7a0, Func Offset: 0x810
	// Line 3012, Address: 0x10a7c8, Func Offset: 0x838
	// Line 3014, Address: 0x10a7ec, Func Offset: 0x85c
	// Line 3016, Address: 0x10a7f4, Func Offset: 0x864
	// Line 3017, Address: 0x10a7f8, Func Offset: 0x868
	// Line 3019, Address: 0x10a800, Func Offset: 0x870
	// Line 3021, Address: 0x10a804, Func Offset: 0x874
	// Line 3023, Address: 0x10a80c, Func Offset: 0x87c
	// Line 3025, Address: 0x10a814, Func Offset: 0x884
	// Line 3026, Address: 0x10a818, Func Offset: 0x888
	// Line 3028, Address: 0x10a820, Func Offset: 0x890
	// Line 3030, Address: 0x10a824, Func Offset: 0x894
	// Line 3032, Address: 0x10a82c, Func Offset: 0x89c
	// Line 3034, Address: 0x10a834, Func Offset: 0x8a4
	// Line 3035, Address: 0x10a838, Func Offset: 0x8a8
	// Line 3037, Address: 0x10a840, Func Offset: 0x8b0
	// Line 3041, Address: 0x10a844, Func Offset: 0x8b4
	// Line 3042, Address: 0x10a848, Func Offset: 0x8b8
	// Line 3043, Address: 0x10a850, Func Offset: 0x8c0
	// Line 3044, Address: 0x10a85c, Func Offset: 0x8cc
	// Line 3046, Address: 0x10a878, Func Offset: 0x8e8
	// Line 3047, Address: 0x10a880, Func Offset: 0x8f0
	// Line 3049, Address: 0x10a884, Func Offset: 0x8f4
	// Line 3051, Address: 0x10a88c, Func Offset: 0x8fc
	// Line 3052, Address: 0x10a890, Func Offset: 0x900
	// Line 3054, Address: 0x10a898, Func Offset: 0x908
	// Line 3055, Address: 0x10a8a4, Func Offset: 0x914
	// Line 3056, Address: 0x10a8ac, Func Offset: 0x91c
	// Line 3062, Address: 0x10a8b0, Func Offset: 0x920
	// Line 3065, Address: 0x10a8e0, Func Offset: 0x950
	// Line 3067, Address: 0x10a8e8, Func Offset: 0x958
	// Line 3068, Address: 0x10a8f8, Func Offset: 0x968
	// Line 3070, Address: 0x10a908, Func Offset: 0x978
	// Line 3071, Address: 0x10a90c, Func Offset: 0x97c
	// Line 3072, Address: 0x10a914, Func Offset: 0x984
	// Line 3074, Address: 0x10a91c, Func Offset: 0x98c
	// Line 3075, Address: 0x10a920, Func Offset: 0x990
	// Line 3077, Address: 0x10a928, Func Offset: 0x998
	// Line 3078, Address: 0x10a92c, Func Offset: 0x99c
	// Line 3079, Address: 0x10a934, Func Offset: 0x9a4
	// Line 3080, Address: 0x10a944, Func Offset: 0x9b4
	// Line 3081, Address: 0x10a954, Func Offset: 0x9c4
	// Line 3082, Address: 0x10a958, Func Offset: 0x9c8
	// Line 3083, Address: 0x10a960, Func Offset: 0x9d0
	// Line 3085, Address: 0x10a964, Func Offset: 0x9d4
	// Line 3086, Address: 0x10a968, Func Offset: 0x9d8
	// Line 3087, Address: 0x10a970, Func Offset: 0x9e0
	// Line 3088, Address: 0x10a984, Func Offset: 0x9f4
	// Line 3090, Address: 0x10a994, Func Offset: 0xa04
	// Line 3091, Address: 0x10a998, Func Offset: 0xa08
	// Line 3093, Address: 0x10a9a0, Func Offset: 0xa10
	// Line 3096, Address: 0x10a9a4, Func Offset: 0xa14
	// Line 3097, Address: 0x10a9a8, Func Offset: 0xa18
	// Line 3098, Address: 0x10a9b0, Func Offset: 0xa20
	// Line 3099, Address: 0x10a9b4, Func Offset: 0xa24
	// Line 3102, Address: 0x10a9b8, Func Offset: 0xa28
	// Line 3105, Address: 0x10a9d4, Func Offset: 0xa44
	// Line 3107, Address: 0x10a9dc, Func Offset: 0xa4c
	// Line 3108, Address: 0x10a9ec, Func Offset: 0xa5c
	// Line 3109, Address: 0x10a9fc, Func Offset: 0xa6c
	// Line 3110, Address: 0x10aa00, Func Offset: 0xa70
	// Line 3111, Address: 0x10aa08, Func Offset: 0xa78
	// Line 3112, Address: 0x10aa10, Func Offset: 0xa80
	// Line 3113, Address: 0x10aa14, Func Offset: 0xa84
	// Line 3115, Address: 0x10aa1c, Func Offset: 0xa8c
	// Line 3116, Address: 0x10aa20, Func Offset: 0xa90
	// Line 3117, Address: 0x10aa28, Func Offset: 0xa98
	// Line 3118, Address: 0x10aa38, Func Offset: 0xaa8
	// Line 3119, Address: 0x10aa48, Func Offset: 0xab8
	// Line 3120, Address: 0x10aa4c, Func Offset: 0xabc
	// Line 3121, Address: 0x10aa54, Func Offset: 0xac4
	// Line 3123, Address: 0x10aa58, Func Offset: 0xac8
	// Line 3124, Address: 0x10aa5c, Func Offset: 0xacc
	// Line 3125, Address: 0x10aa64, Func Offset: 0xad4
	// Line 3126, Address: 0x10aa78, Func Offset: 0xae8
	// Line 3128, Address: 0x10aa88, Func Offset: 0xaf8
	// Line 3129, Address: 0x10aa8c, Func Offset: 0xafc
	// Line 3131, Address: 0x10aa94, Func Offset: 0xb04
	// Line 3134, Address: 0x10aa98, Func Offset: 0xb08
	// Line 3135, Address: 0x10aa9c, Func Offset: 0xb0c
	// Line 3136, Address: 0x10aaa4, Func Offset: 0xb14
	// Line 3137, Address: 0x10aaa8, Func Offset: 0xb18
	// Line 3140, Address: 0x10aaac, Func Offset: 0xb1c
	// Line 3143, Address: 0x10aac8, Func Offset: 0xb38
	// Line 3145, Address: 0x10aad0, Func Offset: 0xb40
	// Line 3146, Address: 0x10aae0, Func Offset: 0xb50
	// Line 3148, Address: 0x10aaf0, Func Offset: 0xb60
	// Line 3149, Address: 0x10aaf4, Func Offset: 0xb64
	// Line 3150, Address: 0x10aafc, Func Offset: 0xb6c
	// Line 3152, Address: 0x10ab04, Func Offset: 0xb74
	// Line 3153, Address: 0x10ab08, Func Offset: 0xb78
	// Line 3155, Address: 0x10ab10, Func Offset: 0xb80
	// Line 3156, Address: 0x10ab14, Func Offset: 0xb84
	// Line 3157, Address: 0x10ab1c, Func Offset: 0xb8c
	// Line 3158, Address: 0x10ab2c, Func Offset: 0xb9c
	// Line 3159, Address: 0x10ab3c, Func Offset: 0xbac
	// Line 3160, Address: 0x10ab40, Func Offset: 0xbb0
	// Line 3161, Address: 0x10ab48, Func Offset: 0xbb8
	// Line 3164, Address: 0x10ab4c, Func Offset: 0xbbc
	// Line 3165, Address: 0x10ab50, Func Offset: 0xbc0
	// Line 3166, Address: 0x10ab58, Func Offset: 0xbc8
	// Line 3167, Address: 0x10ab5c, Func Offset: 0xbcc
	// Line 3169, Address: 0x10ab60, Func Offset: 0xbd0
	// Line 3172, Address: 0x10ab7c, Func Offset: 0xbec
	// Line 3174, Address: 0x10ab84, Func Offset: 0xbf4
	// Line 3176, Address: 0x10ab90, Func Offset: 0xc00
	// Line 3177, Address: 0x10ab9c, Func Offset: 0xc0c
	// Line 3178, Address: 0x10abac, Func Offset: 0xc1c
	// Line 3180, Address: 0x10abbc, Func Offset: 0xc2c
	// Line 3181, Address: 0x10abc0, Func Offset: 0xc30
	// Line 3182, Address: 0x10abcc, Func Offset: 0xc3c
	// Line 3184, Address: 0x10abd4, Func Offset: 0xc44
	// Line 3185, Address: 0x10abd8, Func Offset: 0xc48
	// Line 3187, Address: 0x10abe0, Func Offset: 0xc50
	// Line 3188, Address: 0x10abe4, Func Offset: 0xc54
	// Line 3189, Address: 0x10abec, Func Offset: 0xc5c
	// Line 3190, Address: 0x10abfc, Func Offset: 0xc6c
	// Line 3191, Address: 0x10ac0c, Func Offset: 0xc7c
	// Line 3192, Address: 0x10ac10, Func Offset: 0xc80
	// Line 3193, Address: 0x10ac18, Func Offset: 0xc88
	// Line 3195, Address: 0x10ac1c, Func Offset: 0xc8c
	// Line 3196, Address: 0x10ac20, Func Offset: 0xc90
	// Line 3197, Address: 0x10ac28, Func Offset: 0xc98
	// Line 3198, Address: 0x10ac2c, Func Offset: 0xc9c
	// Line 3200, Address: 0x10ac30, Func Offset: 0xca0
	// Line 3205, Address: 0x10ac4c, Func Offset: 0xcbc
	// Line 3206, Address: 0x10ac54, Func Offset: 0xcc4
	// Line 3207, Address: 0x10ac68, Func Offset: 0xcd8
	// Line 3209, Address: 0x10ac7c, Func Offset: 0xcec
	// Line 3213, Address: 0x10ac84, Func Offset: 0xcf4
	// Line 3215, Address: 0x10aca0, Func Offset: 0xd10
	// Line 3220, Address: 0x10acd0, Func Offset: 0xd40
	// Line 3221, Address: 0x10ace4, Func Offset: 0xd54
	// Line 3222, Address: 0x10ace8, Func Offset: 0xd58
	// Line 3223, Address: 0x10acf0, Func Offset: 0xd60
	// Line 3224, Address: 0x10acf8, Func Offset: 0xd68
	// Line 3225, Address: 0x10ad08, Func Offset: 0xd78
	// Line 3226, Address: 0x10ad0c, Func Offset: 0xd7c
	// Line 3227, Address: 0x10ad18, Func Offset: 0xd88
	// Line 3228, Address: 0x10ad20, Func Offset: 0xd90
	// Line 3229, Address: 0x10ad24, Func Offset: 0xd94
	// Line 3233, Address: 0x10ad2c, Func Offset: 0xd9c
	// Line 3235, Address: 0x10ad48, Func Offset: 0xdb8
	// Line 3242, Address: 0x10ad50, Func Offset: 0xdc0
	// Line 3246, Address: 0x10ad78, Func Offset: 0xde8
	// Line 3248, Address: 0x10ada0, Func Offset: 0xe10
	// Line 3250, Address: 0x10ada8, Func Offset: 0xe18
	// Line 3251, Address: 0x10adac, Func Offset: 0xe1c
	// Line 3253, Address: 0x10adb4, Func Offset: 0xe24
	// Line 3255, Address: 0x10adb8, Func Offset: 0xe28
	// Line 3257, Address: 0x10adc0, Func Offset: 0xe30
	// Line 3259, Address: 0x10adc8, Func Offset: 0xe38
	// Line 3260, Address: 0x10adcc, Func Offset: 0xe3c
	// Line 3262, Address: 0x10add4, Func Offset: 0xe44
	// Line 3264, Address: 0x10add8, Func Offset: 0xe48
	// Line 3266, Address: 0x10ade0, Func Offset: 0xe50
	// Line 3268, Address: 0x10adec, Func Offset: 0xe5c
	// Line 3269, Address: 0x10adf0, Func Offset: 0xe60
	// Line 3271, Address: 0x10adf8, Func Offset: 0xe68
	// Line 3275, Address: 0x10adfc, Func Offset: 0xe6c
	// Line 3277, Address: 0x10ae04, Func Offset: 0xe74
	// Line 3279, Address: 0x10ae34, Func Offset: 0xea4
	// Line 3280, Address: 0x10ae38, Func Offset: 0xea8
	// Line 3282, Address: 0x10ae40, Func Offset: 0xeb0
	// Line 3283, Address: 0x10ae44, Func Offset: 0xeb4
	// Line 3285, Address: 0x10ae4c, Func Offset: 0xebc
	// Line 3289, Address: 0x10ae50, Func Offset: 0xec0
	// Line 3290, Address: 0x10ae60, Func Offset: 0xed0
	// Line 3291, Address: 0x10ae6c, Func Offset: 0xedc
	// Line 3293, Address: 0x10ae88, Func Offset: 0xef8
	// Line 3296, Address: 0x10ae90, Func Offset: 0xf00
	// Line 3297, Address: 0x10ae9c, Func Offset: 0xf0c
	// Line 3299, Address: 0x10aea4, Func Offset: 0xf14
	// Line 3302, Address: 0x10aeac, Func Offset: 0xf1c
	// Line 3303, Address: 0x10aebc, Func Offset: 0xf2c
	// Line 3304, Address: 0x10aec0, Func Offset: 0xf30
	// Line 3305, Address: 0x10aec8, Func Offset: 0xf38
	// Line 3306, Address: 0x10aecc, Func Offset: 0xf3c
	// Line 3308, Address: 0x10aed8, Func Offset: 0xf48
	// Line 3310, Address: 0x10aef4, Func Offset: 0xf64
	// Line 3312, Address: 0x10aefc, Func Offset: 0xf6c
	// Line 3313, Address: 0x10af0c, Func Offset: 0xf7c
	// Line 3315, Address: 0x10af1c, Func Offset: 0xf8c
	// Line 3316, Address: 0x10af20, Func Offset: 0xf90
	// Line 3317, Address: 0x10af2c, Func Offset: 0xf9c
	// Line 3319, Address: 0x10af34, Func Offset: 0xfa4
	// Line 3320, Address: 0x10af38, Func Offset: 0xfa8
	// Line 3322, Address: 0x10af40, Func Offset: 0xfb0
	// Line 3323, Address: 0x10af48, Func Offset: 0xfb8
	// Line 3324, Address: 0x10af58, Func Offset: 0xfc8
	// Line 3326, Address: 0x10af68, Func Offset: 0xfd8
	// Line 3327, Address: 0x10af6c, Func Offset: 0xfdc
	// Line 3329, Address: 0x10af74, Func Offset: 0xfe4
	// Line 3331, Address: 0x10af78, Func Offset: 0xfe8
	// Line 3332, Address: 0x10af7c, Func Offset: 0xfec
	// Line 3333, Address: 0x10af84, Func Offset: 0xff4
	// Line 3335, Address: 0x10afa8, Func Offset: 0x1018
	// Line 3336, Address: 0x10afac, Func Offset: 0x101c
	// Line 3337, Address: 0x10afb4, Func Offset: 0x1024
	// Line 3338, Address: 0x10afbc, Func Offset: 0x102c
	// Line 3339, Address: 0x10afc0, Func Offset: 0x1030
	// Line 3342, Address: 0x10afc8, Func Offset: 0x1038
	// Line 3344, Address: 0x10afe4, Func Offset: 0x1054
	// Line 3346, Address: 0x10afec, Func Offset: 0x105c
	// Line 3347, Address: 0x10affc, Func Offset: 0x106c
	// Line 3349, Address: 0x10b00c, Func Offset: 0x107c
	// Line 3350, Address: 0x10b010, Func Offset: 0x1080
	// Line 3351, Address: 0x10b01c, Func Offset: 0x108c
	// Line 3353, Address: 0x10b024, Func Offset: 0x1094
	// Line 3354, Address: 0x10b028, Func Offset: 0x1098
	// Line 3356, Address: 0x10b030, Func Offset: 0x10a0
	// Line 3357, Address: 0x10b038, Func Offset: 0x10a8
	// Line 3358, Address: 0x10b048, Func Offset: 0x10b8
	// Line 3360, Address: 0x10b058, Func Offset: 0x10c8
	// Line 3361, Address: 0x10b05c, Func Offset: 0x10cc
	// Line 3363, Address: 0x10b064, Func Offset: 0x10d4
	// Line 3365, Address: 0x10b068, Func Offset: 0x10d8
	// Line 3366, Address: 0x10b06c, Func Offset: 0x10dc
	// Line 3367, Address: 0x10b074, Func Offset: 0x10e4
	// Line 3370, Address: 0x10b098, Func Offset: 0x1108
	// Line 3371, Address: 0x10b09c, Func Offset: 0x110c
	// Line 3372, Address: 0x10b0a4, Func Offset: 0x1114
	// Line 3374, Address: 0x10b0ac, Func Offset: 0x111c
	// Line 3375, Address: 0x10b0b0, Func Offset: 0x1120
	// Line 3378, Address: 0x10b0b8, Func Offset: 0x1128
	// Line 3380, Address: 0x10b0d4, Func Offset: 0x1144
	// Line 3382, Address: 0x10b0dc, Func Offset: 0x114c
	// Line 3383, Address: 0x10b0ec, Func Offset: 0x115c
	// Line 3385, Address: 0x10b0fc, Func Offset: 0x116c
	// Line 3386, Address: 0x10b100, Func Offset: 0x1170
	// Line 3387, Address: 0x10b10c, Func Offset: 0x117c
	// Line 3389, Address: 0x10b114, Func Offset: 0x1184
	// Line 3390, Address: 0x10b118, Func Offset: 0x1188
	// Line 3392, Address: 0x10b120, Func Offset: 0x1190
	// Line 3393, Address: 0x10b128, Func Offset: 0x1198
	// Line 3394, Address: 0x10b138, Func Offset: 0x11a8
	// Line 3395, Address: 0x10b148, Func Offset: 0x11b8
	// Line 3396, Address: 0x10b14c, Func Offset: 0x11bc
	// Line 3397, Address: 0x10b154, Func Offset: 0x11c4
	// Line 3400, Address: 0x10b158, Func Offset: 0x11c8
	// Line 3401, Address: 0x10b15c, Func Offset: 0x11cc
	// Line 3402, Address: 0x10b164, Func Offset: 0x11d4
	// Line 3404, Address: 0x10b188, Func Offset: 0x11f8
	// Line 3405, Address: 0x10b18c, Func Offset: 0x11fc
	// Line 3406, Address: 0x10b194, Func Offset: 0x1204
	// Line 3407, Address: 0x10b19c, Func Offset: 0x120c
	// Line 3408, Address: 0x10b1a0, Func Offset: 0x1210
	// Line 3411, Address: 0x10b1a8, Func Offset: 0x1218
	// Line 3413, Address: 0x10b1c4, Func Offset: 0x1234
	// Line 3415, Address: 0x10b1cc, Func Offset: 0x123c
	// Line 3416, Address: 0x10b1dc, Func Offset: 0x124c
	// Line 3418, Address: 0x10b1ec, Func Offset: 0x125c
	// Line 3419, Address: 0x10b1f0, Func Offset: 0x1260
	// Line 3420, Address: 0x10b1fc, Func Offset: 0x126c
	// Line 3422, Address: 0x10b204, Func Offset: 0x1274
	// Line 3423, Address: 0x10b208, Func Offset: 0x1278
	// Line 3425, Address: 0x10b210, Func Offset: 0x1280
	// Line 3426, Address: 0x10b218, Func Offset: 0x1288
	// Line 3427, Address: 0x10b228, Func Offset: 0x1298
	// Line 3428, Address: 0x10b238, Func Offset: 0x12a8
	// Line 3429, Address: 0x10b23c, Func Offset: 0x12ac
	// Line 3430, Address: 0x10b244, Func Offset: 0x12b4
	// Line 3432, Address: 0x10b248, Func Offset: 0x12b8
	// Line 3433, Address: 0x10b24c, Func Offset: 0x12bc
	// Line 3435, Address: 0x10b254, Func Offset: 0x12c4
	// Line 3436, Address: 0x10b264, Func Offset: 0x12d4
	// Line 3438, Address: 0x10b288, Func Offset: 0x12f8
	// Line 3440, Address: 0x10b2ac, Func Offset: 0x131c
	// Line 3441, Address: 0x10b2b0, Func Offset: 0x1320
	// Line 3442, Address: 0x10b2b8, Func Offset: 0x1328
	// Line 3443, Address: 0x10b2c0, Func Offset: 0x1330
	// Line 3444, Address: 0x10b2c4, Func Offset: 0x1334
	// Line 3447, Address: 0x10b2cc, Func Offset: 0x133c
	// Line 3453, Address: 0x10b2e8, Func Offset: 0x1358
	// Line 3454, Address: 0x10b2fc, Func Offset: 0x136c
	// Line 3456, Address: 0x10b310, Func Offset: 0x1380
	// Line 3458, Address: 0x10b318, Func Offset: 0x1388
	// Line 3463, Address: 0x10b320, Func Offset: 0x1390
	// Line 3465, Address: 0x10b350, Func Offset: 0x13c0
	// Line 3467, Address: 0x10b384, Func Offset: 0x13f4
	// Line 3468, Address: 0x10b388, Func Offset: 0x13f8
	// Line 3469, Address: 0x10b390, Func Offset: 0x1400
	// Line 3470, Address: 0x10b398, Func Offset: 0x1408
	// Line 3472, Address: 0x10b39c, Func Offset: 0x140c
	// Line 3473, Address: 0x10b3b8, Func Offset: 0x1428
	// Line 3477, Address: 0x10b3c0, Func Offset: 0x1430
	// Line 3479, Address: 0x10b3f0, Func Offset: 0x1460
	// Line 3480, Address: 0x10b3f4, Func Offset: 0x1464
	// Line 3482, Address: 0x10b3fc, Func Offset: 0x146c
	// Line 3483, Address: 0x10b400, Func Offset: 0x1470
	// Line 3485, Address: 0x10b408, Func Offset: 0x1478
	// Line 3489, Address: 0x10b40c, Func Offset: 0x147c
	// Line 3490, Address: 0x10b428, Func Offset: 0x1498
	// Line 3492, Address: 0x10b430, Func Offset: 0x14a0
	// Line 3493, Address: 0x10b434, Func Offset: 0x14a4
	// Line 3494, Address: 0x10b43c, Func Offset: 0x14ac
	// Line 3496, Address: 0x10b444, Func Offset: 0x14b4
	// Line 3497, Address: 0x10b450, Func Offset: 0x14c0
	// Line 3498, Address: 0x10b458, Func Offset: 0x14c8
	// Line 3499, Address: 0x10b45c, Func Offset: 0x14cc
	// Line 3500, Address: 0x10b464, Func Offset: 0x14d4
	// Line 3502, Address: 0x10b46c, Func Offset: 0x14dc
	// Line 3503, Address: 0x10b47c, Func Offset: 0x14ec
	// Line 3504, Address: 0x10b480, Func Offset: 0x14f0
	// Line 3505, Address: 0x10b488, Func Offset: 0x14f8
	// Line 3507, Address: 0x10b48c, Func Offset: 0x14fc
	// Line 3508, Address: 0x10b4a8, Func Offset: 0x1518
	// Line 3510, Address: 0x10b4b0, Func Offset: 0x1520
	// Line 3511, Address: 0x10b4c0, Func Offset: 0x1530
	// Line 3512, Address: 0x10b4c4, Func Offset: 0x1534
	// Line 3513, Address: 0x10b4cc, Func Offset: 0x153c
	// Line 3515, Address: 0x10b4d0, Func Offset: 0x1540
	// Line 3516, Address: 0x10b4ec, Func Offset: 0x155c
	// Line 3518, Address: 0x10b4f4, Func Offset: 0x1564
	// Line 3519, Address: 0x10b504, Func Offset: 0x1574
	// Line 3520, Address: 0x10b508, Func Offset: 0x1578
	// Line 3521, Address: 0x10b510, Func Offset: 0x1580
	// Line 3523, Address: 0x10b514, Func Offset: 0x1584
	// Line 3524, Address: 0x10b530, Func Offset: 0x15a0
	// Line 3526, Address: 0x10b538, Func Offset: 0x15a8
	// Line 3528, Address: 0x10b544, Func Offset: 0x15b4
	// Line 3529, Address: 0x10b550, Func Offset: 0x15c0
	// Line 3530, Address: 0x10b560, Func Offset: 0x15d0
	// Line 3531, Address: 0x10b564, Func Offset: 0x15d4
	// Line 3532, Address: 0x10b56c, Func Offset: 0x15dc
	// Line 3534, Address: 0x10b570, Func Offset: 0x15e0
	// Line 3541, Address: 0x10b58c, Func Offset: 0x15fc
	// Line 3542, Address: 0x10b598, Func Offset: 0x1608
	// Line 3544, Address: 0x10b5a0, Func Offset: 0x1610
	// Line 3553, Address: 0x10b5a8, Func Offset: 0x1618
	// Line 3554, Address: 0x10b5bc, Func Offset: 0x162c
	// Line 3555, Address: 0x10b5d0, Func Offset: 0x1640
	// Line 3556, Address: 0x10b5d4, Func Offset: 0x1644
	// Line 3557, Address: 0x10b5dc, Func Offset: 0x164c
	// Line 3559, Address: 0x10b5e0, Func Offset: 0x1650
	// Line 3560, Address: 0x10b5e8, Func Offset: 0x1658
	// Line 3562, Address: 0x10b5ec, Func Offset: 0x165c
	// Line 3563, Address: 0x10b5fc, Func Offset: 0x166c
	// Line 3565, Address: 0x10b610, Func Offset: 0x1680
	// Line 3569, Address: 0x10b618, Func Offset: 0x1688
	// Line 3574, Address: 0x10b61c, Func Offset: 0x168c
	// Line 3576, Address: 0x10b64c, Func Offset: 0x16bc
	// Line 3577, Address: 0x10b66c, Func Offset: 0x16dc
	// Line 3578, Address: 0x10b67c, Func Offset: 0x16ec
	// Line 3579, Address: 0x10b680, Func Offset: 0x16f0
	// Line 3580, Address: 0x10b688, Func Offset: 0x16f8
	// Line 3582, Address: 0x10b68c, Func Offset: 0x16fc
	// Line 3583, Address: 0x10b698, Func Offset: 0x1708
	// Line 3584, Address: 0x10b6a0, Func Offset: 0x1710
	// Line 3585, Address: 0x10b6a8, Func Offset: 0x1718
	// Line 3587, Address: 0x10b6d0, Func Offset: 0x1740
	// Line 3588, Address: 0x10b6d4, Func Offset: 0x1744
	// Line 3589, Address: 0x10b6dc, Func Offset: 0x174c
	// Line 3592, Address: 0x10b6e0, Func Offset: 0x1750
	// Line 3593, Address: 0x10b6fc, Func Offset: 0x176c
	// Line 3595, Address: 0x10b704, Func Offset: 0x1774
	// Line 3596, Address: 0x10b724, Func Offset: 0x1794
	// Line 3597, Address: 0x10b728, Func Offset: 0x1798
	// Line 3599, Address: 0x10b730, Func Offset: 0x17a0
	// Line 3601, Address: 0x10b760, Func Offset: 0x17d0
	// Line 3602, Address: 0x10b764, Func Offset: 0x17d4
	// Line 3604, Address: 0x10b76c, Func Offset: 0x17dc
	// Line 3605, Address: 0x10b770, Func Offset: 0x17e0
	// Line 3607, Address: 0x10b778, Func Offset: 0x17e8
	// Line 3611, Address: 0x10b77c, Func Offset: 0x17ec
	// Line 3612, Address: 0x10b798, Func Offset: 0x1808
	// Line 3614, Address: 0x10b7a0, Func Offset: 0x1810
	// Line 3615, Address: 0x10b7c0, Func Offset: 0x1830
	// Line 3616, Address: 0x10b7c4, Func Offset: 0x1834
	// Line 3617, Address: 0x10b7cc, Func Offset: 0x183c
	// Line 3619, Address: 0x10b7d0, Func Offset: 0x1840
	// Line 3620, Address: 0x10b7ec, Func Offset: 0x185c
	// Line 3622, Address: 0x10b7f4, Func Offset: 0x1864
	// Line 3623, Address: 0x10b814, Func Offset: 0x1884
	// Line 3624, Address: 0x10b828, Func Offset: 0x1898
	// Line 3625, Address: 0x10b82c, Func Offset: 0x189c
	// Line 3626, Address: 0x10b834, Func Offset: 0x18a4
	// Line 3628, Address: 0x10b838, Func Offset: 0x18a8
	// Line 3629, Address: 0x10b840, Func Offset: 0x18b0
	// Line 3630, Address: 0x10b850, Func Offset: 0x18c0
	// Line 3631, Address: 0x10b854, Func Offset: 0x18c4
	// Line 3632, Address: 0x10b85c, Func Offset: 0x18cc
	// Line 3635, Address: 0x10b860, Func Offset: 0x18d0
	// Line 3636, Address: 0x10b87c, Func Offset: 0x18ec
	// Line 3638, Address: 0x10b884, Func Offset: 0x18f4
	// Line 3640, Address: 0x10b894, Func Offset: 0x1904
	// Line 3643, Address: 0x10b8bc, Func Offset: 0x192c
	// Line 3644, Address: 0x10b8cc, Func Offset: 0x193c
	// Line 3645, Address: 0x10b8d0, Func Offset: 0x1940
	// Line 3646, Address: 0x10b8d8, Func Offset: 0x1948
	// Line 3648, Address: 0x10b8dc, Func Offset: 0x194c
	// Line 3650, Address: 0x10b8e4, Func Offset: 0x1954
	// Line 3654, Address: 0x10b8e8, Func Offset: 0x1958
	// Line 3656, Address: 0x10b8f0, Func Offset: 0x1960
	// Line 3658, Address: 0x10b918, Func Offset: 0x1988
	// Line 3659, Address: 0x10b928, Func Offset: 0x1998
	// Line 3660, Address: 0x10b92c, Func Offset: 0x199c
	// Line 3661, Address: 0x10b934, Func Offset: 0x19a4
	// Line 3663, Address: 0x10b938, Func Offset: 0x19a8
	// Line 3665, Address: 0x10b940, Func Offset: 0x19b0
	// Line 3670, Address: 0x10b944, Func Offset: 0x19b4
	// Line 3671, Address: 0x10b958, Func Offset: 0x19c8
	// Line 3672, Address: 0x10b95c, Func Offset: 0x19cc
	// Line 3674, Address: 0x10b984, Func Offset: 0x19f4
	// Line 3677, Address: 0x10b9ac, Func Offset: 0x1a1c
	// Line 3680, Address: 0x10b9b8, Func Offset: 0x1a28
	// Line 3681, Address: 0x10b9c8, Func Offset: 0x1a38
	// Line 3682, Address: 0x10b9cc, Func Offset: 0x1a3c
	// Line 3683, Address: 0x10b9d4, Func Offset: 0x1a44
	// Line 3685, Address: 0x10b9d8, Func Offset: 0x1a48
	// Line 3687, Address: 0x10b9e0, Func Offset: 0x1a50
	// Line 3691, Address: 0x10b9e4, Func Offset: 0x1a54
	// Line 3692, Address: 0x10ba00, Func Offset: 0x1a70
	// Line 3694, Address: 0x10ba08, Func Offset: 0x1a78
	// Line 3696, Address: 0x10ba18, Func Offset: 0x1a88
	// Line 3699, Address: 0x10ba4c, Func Offset: 0x1abc
	// Line 3700, Address: 0x10ba5c, Func Offset: 0x1acc
	// Line 3701, Address: 0x10ba60, Func Offset: 0x1ad0
	// Line 3702, Address: 0x10ba68, Func Offset: 0x1ad8
	// Line 3704, Address: 0x10ba6c, Func Offset: 0x1adc
	// Line 3706, Address: 0x10ba74, Func Offset: 0x1ae4
	// Line 3707, Address: 0x10ba78, Func Offset: 0x1ae8
	// Line 3709, Address: 0x10ba80, Func Offset: 0x1af0
	// Line 3712, Address: 0x10ba84, Func Offset: 0x1af4
	// Line 3714, Address: 0x10ba8c, Func Offset: 0x1afc
	// Line 3717, Address: 0x10bac0, Func Offset: 0x1b30
	// Line 3718, Address: 0x10bad0, Func Offset: 0x1b40
	// Line 3719, Address: 0x10bad4, Func Offset: 0x1b44
	// Line 3720, Address: 0x10badc, Func Offset: 0x1b4c
	// Line 3722, Address: 0x10bae0, Func Offset: 0x1b50
	// Line 3724, Address: 0x10bae8, Func Offset: 0x1b58
	// Line 3725, Address: 0x10baec, Func Offset: 0x1b5c
	// Line 3727, Address: 0x10baf4, Func Offset: 0x1b64
	// Line 3732, Address: 0x10baf8, Func Offset: 0x1b68
	// Line 3733, Address: 0x10bb0c, Func Offset: 0x1b7c
	// Line 3734, Address: 0x10bb10, Func Offset: 0x1b80
	// Line 3736, Address: 0x10bb44, Func Offset: 0x1bb4
	// Line 3739, Address: 0x10bb6c, Func Offset: 0x1bdc
	// Line 3742, Address: 0x10bb78, Func Offset: 0x1be8
	// Line 3743, Address: 0x10bb88, Func Offset: 0x1bf8
	// Line 3744, Address: 0x10bb8c, Func Offset: 0x1bfc
	// Line 3745, Address: 0x10bb94, Func Offset: 0x1c04
	// Line 3747, Address: 0x10bb98, Func Offset: 0x1c08
	// Line 3750, Address: 0x10bba0, Func Offset: 0x1c10
	// Line 3760, Address: 0x10bba4, Func Offset: 0x1c14
	// Line 3761, Address: 0x10bbc0, Func Offset: 0x1c30
	// Line 3763, Address: 0x10bbc8, Func Offset: 0x1c38
	// Line 3765, Address: 0x10bbd8, Func Offset: 0x1c48
	// Line 3767, Address: 0x10bc00, Func Offset: 0x1c70
	// Line 3768, Address: 0x10bc04, Func Offset: 0x1c74
	// Line 3770, Address: 0x10bc0c, Func Offset: 0x1c7c
	// Line 3773, Address: 0x10bc10, Func Offset: 0x1c80
	// Line 3775, Address: 0x10bc18, Func Offset: 0x1c88
	// Line 3777, Address: 0x10bc40, Func Offset: 0x1cb0
	// Line 3778, Address: 0x10bc44, Func Offset: 0x1cb4
	// Line 3780, Address: 0x10bc4c, Func Offset: 0x1cbc
	// Line 3785, Address: 0x10bc50, Func Offset: 0x1cc0
	// Line 3786, Address: 0x10bc64, Func Offset: 0x1cd4
	// Line 3787, Address: 0x10bc68, Func Offset: 0x1cd8
	// Line 3789, Address: 0x10bc6c, Func Offset: 0x1cdc
	// Line 3790, Address: 0x10bc88, Func Offset: 0x1cf8
	// Line 3793, Address: 0x10bc90, Func Offset: 0x1d00
	// Line 3795, Address: 0x10bca0, Func Offset: 0x1d10
	// Line 3797, Address: 0x10bcc8, Func Offset: 0x1d38
	// Line 3798, Address: 0x10bccc, Func Offset: 0x1d3c
	// Line 3800, Address: 0x10bcd4, Func Offset: 0x1d44
	// Line 3803, Address: 0x10bcd8, Func Offset: 0x1d48
	// Line 3805, Address: 0x10bce0, Func Offset: 0x1d50
	// Line 3807, Address: 0x10bd08, Func Offset: 0x1d78
	// Line 3808, Address: 0x10bd0c, Func Offset: 0x1d7c
	// Line 3810, Address: 0x10bd14, Func Offset: 0x1d84
	// Line 3815, Address: 0x10bd18, Func Offset: 0x1d88
	// Line 3816, Address: 0x10bd2c, Func Offset: 0x1d9c
	// Line 3817, Address: 0x10bd30, Func Offset: 0x1da0
	// Line 3818, Address: 0x10bd34, Func Offset: 0x1da4
	// Line 3819, Address: 0x10bd3c, Func Offset: 0x1dac
	// Line 3822, Address: 0x10bd58, Func Offset: 0x1dc8
	// Line 3828, Address: 0x10bd74, Func Offset: 0x1de4
	// Line 3829, Address: 0x10bd7c, Func Offset: 0x1dec
	// Line 3832, Address: 0x10bd90, Func Offset: 0x1e00
	// Line 3837, Address: 0x10bd98, Func Offset: 0x1e08
	// Line 3838, Address: 0x10bdb0, Func Offset: 0x1e20
	// Line 3840, Address: 0x10bdb4, Func Offset: 0x1e24
	// Line 3841, Address: 0x10bdb8, Func Offset: 0x1e28
	// Line 3842, Address: 0x10bdcc, Func Offset: 0x1e3c
	// Line 3843, Address: 0x10bdd4, Func Offset: 0x1e44
	// Line 3845, Address: 0x10bdd8, Func Offset: 0x1e48
	// Line 3846, Address: 0x10be14, Func Offset: 0x1e84
	// Line 3847, Address: 0x10be18, Func Offset: 0x1e88
	// Line 3848, Address: 0x10be20, Func Offset: 0x1e90
	// Line 3850, Address: 0x10be24, Func Offset: 0x1e94
	// Line 3852, Address: 0x10be38, Func Offset: 0x1ea8
	// Line 3853, Address: 0x10be54, Func Offset: 0x1ec4
	// Line 3855, Address: 0x10be68, Func Offset: 0x1ed8
	// Line 3863, Address: 0x10be70, Func Offset: 0x1ee0
	// Line 3865, Address: 0x10be94, Func Offset: 0x1f04
	// Line 3866, Address: 0x10bea8, Func Offset: 0x1f18
	// Line 3867, Address: 0x10bec4, Func Offset: 0x1f34
	// Line 3869, Address: 0x10bed8, Func Offset: 0x1f48
	// Line 3875, Address: 0x10bee0, Func Offset: 0x1f50
	// Line 3879, Address: 0x10bf2c, Func Offset: 0x1f9c
	// Line 3880, Address: 0x10bf30, Func Offset: 0x1fa0
	// Line 3882, Address: 0x10bf38, Func Offset: 0x1fa8
	// Line 3883, Address: 0x10bf3c, Func Offset: 0x1fac
	// Line 3885, Address: 0x10bf44, Func Offset: 0x1fb4
	// Line 3886, Address: 0x10bf48, Func Offset: 0x1fb8
	// Line 3888, Address: 0x10bf50, Func Offset: 0x1fc0
	// Line 3892, Address: 0x10bf74, Func Offset: 0x1fe4
	// Line 3893, Address: 0x10bf88, Func Offset: 0x1ff8
	// Line 3894, Address: 0x10bfa4, Func Offset: 0x2014
	// Line 3896, Address: 0x10bfb8, Func Offset: 0x2028
	// Line 3899, Address: 0x10bfc0, Func Offset: 0x2030
	// Line 3900, Address: 0x10bfe4, Func Offset: 0x2054
	// Line 3901, Address: 0x10bff8, Func Offset: 0x2068
	// Line 3902, Address: 0x10c00c, Func Offset: 0x207c
	// Line 3908, Address: 0x10c014, Func Offset: 0x2084
	// Line 3911, Address: 0x10c05c, Func Offset: 0x20cc
	// Line 3912, Address: 0x10c064, Func Offset: 0x20d4
	// Line 3915, Address: 0x10c06c, Func Offset: 0x20dc
	// Line 3918, Address: 0x10c0f8, Func Offset: 0x2168
	// Line 3919, Address: 0x10c0fc, Func Offset: 0x216c
	// Line 3922, Address: 0x10c104, Func Offset: 0x2174
	// Line 3923, Address: 0x10c108, Func Offset: 0x2178
	// Line 3927, Address: 0x10c110, Func Offset: 0x2180
	// Line 3928, Address: 0x10c120, Func Offset: 0x2190
	// Line 3929, Address: 0x10c124, Func Offset: 0x2194
	// Line 3930, Address: 0x10c12c, Func Offset: 0x219c
	// Line 3932, Address: 0x10c130, Func Offset: 0x21a0
	// Line 3935, Address: 0x10c138, Func Offset: 0x21a8
	// Line 3936, Address: 0x10c13c, Func Offset: 0x21ac
	// Line 3940, Address: 0x10c144, Func Offset: 0x21b4
	// Line 3941, Address: 0x10c150, Func Offset: 0x21c0
	// Line 3944, Address: 0x10c154, Func Offset: 0x21c4
	// Line 3948, Address: 0x10c15c, Func Offset: 0x21cc
	// Line 3951, Address: 0x10c1e8, Func Offset: 0x2258
	// Line 3952, Address: 0x10c204, Func Offset: 0x2274
	// Line 3955, Address: 0x10c20c, Func Offset: 0x227c
	// Line 3956, Address: 0x10c228, Func Offset: 0x2298
	// Line 3960, Address: 0x10c230, Func Offset: 0x22a0
	// Line 3961, Address: 0x10c240, Func Offset: 0x22b0
	// Line 3962, Address: 0x10c250, Func Offset: 0x22c0
	// Line 3963, Address: 0x10c254, Func Offset: 0x22c4
	// Line 3964, Address: 0x10c25c, Func Offset: 0x22cc
	// Line 3966, Address: 0x10c260, Func Offset: 0x22d0
	// Line 3967, Address: 0x10c268, Func Offset: 0x22d8
	// Line 3968, Address: 0x10c278, Func Offset: 0x22e8
	// Line 3969, Address: 0x10c27c, Func Offset: 0x22ec
	// Line 3970, Address: 0x10c284, Func Offset: 0x22f4
	// Line 3973, Address: 0x10c288, Func Offset: 0x22f8
	// Line 3976, Address: 0x10c290, Func Offset: 0x2300
	// Line 3977, Address: 0x10c2ac, Func Offset: 0x231c
	// Line 3980, Address: 0x10c2b4, Func Offset: 0x2324
	// Line 3985, Address: 0x10c2d0, Func Offset: 0x2340
	// Line 3987, Address: 0x10c2d8, Func Offset: 0x2348
	// Line 3989, Address: 0x10c2e8, Func Offset: 0x2358
	// Line 3992, Address: 0x10c314, Func Offset: 0x2384
	// Line 3994, Address: 0x10c328, Func Offset: 0x2398
	// Line 3999, Address: 0x10c330, Func Offset: 0x23a0
	// Line 4000, Address: 0x10c340, Func Offset: 0x23b0
	// Line 4002, Address: 0x10c370, Func Offset: 0x23e0
	// Line 4003, Address: 0x10c374, Func Offset: 0x23e4
	// Line 4004, Address: 0x10c378, Func Offset: 0x23e8
	// Line 4006, Address: 0x10c380, Func Offset: 0x23f0
	// Line 4007, Address: 0x10c384, Func Offset: 0x23f4
	// Line 4009, Address: 0x10c3ac, Func Offset: 0x241c
	// Line 4011, Address: 0x10c3b4, Func Offset: 0x2424
	// Line 4012, Address: 0x10c3b8, Func Offset: 0x2428
	// Line 4016, Address: 0x10c3e4, Func Offset: 0x2454
	// Line 4017, Address: 0x10c3f0, Func Offset: 0x2460
	// Line 4018, Address: 0x10c404, Func Offset: 0x2474
	// Line 4019, Address: 0x10c40c, Func Offset: 0x247c
	// Line 4021, Address: 0x10c41c, Func Offset: 0x248c
	// Line 4022, Address: 0x10c438, Func Offset: 0x24a8
	// Line 4023, Address: 0x10c440, Func Offset: 0x24b0
	// Line 4025, Address: 0x10c450, Func Offset: 0x24c0
	// Line 4026, Address: 0x10c460, Func Offset: 0x24d0
	// Line 4027, Address: 0x10c464, Func Offset: 0x24d4
	// Line 4028, Address: 0x10c46c, Func Offset: 0x24dc
	// Line 4029, Address: 0x10c480, Func Offset: 0x24f0
	// Line 4034, Address: 0x10c484, Func Offset: 0x24f4
	// Line 4035, Address: 0x10c490, Func Offset: 0x2500
	// Line 4036, Address: 0x10c4ac, Func Offset: 0x251c
	// Line 4037, Address: 0x10c4b4, Func Offset: 0x2524
	// Line 4038, Address: 0x10c4c4, Func Offset: 0x2534
	// Line 4041, Address: 0x10c4f4, Func Offset: 0x2564
	// Line 4045, Address: 0x10c508, Func Offset: 0x2578
	// Line 4046, Address: 0x10c518, Func Offset: 0x2588
	// Line 4052, Address: 0x10c52c, Func Offset: 0x259c
	// Line 4053, Address: 0x10c548, Func Offset: 0x25b8
	// Line 4055, Address: 0x10c55c, Func Offset: 0x25cc
	// Line 4056, Address: 0x10c56c, Func Offset: 0x25dc
	// Line 4059, Address: 0x10c580, Func Offset: 0x25f0
	// Line 4061, Address: 0x10c590, Func Offset: 0x2600
	// Line 4062, Address: 0x10c5a4, Func Offset: 0x2614
	// Line 4063, Address: 0x10c5b0, Func Offset: 0x2620
	// Line 4064, Address: 0x10c5b8, Func Offset: 0x2628
	// Line 4070, Address: 0x10c5cc, Func Offset: 0x263c
	// Line 4071, Address: 0x10c5d4, Func Offset: 0x2644
	// Line 4074, Address: 0x10c5dc, Func Offset: 0x264c
	// Func End, Address: 0x10c5fc, Func Offset: 0x266c
}

// 
// Start address: 0x10c600
void PlayerCheckAnimeLower()
{
	int comp_type;
	int anime;
	int anime;
	int anime;
	int anime;
	int anime;
	int comp_type;
	int comp_type;
	int anime;
	int comp_type;
	int anime;
	int anime_on;
	int anime;
	int comp_type;
	int anime;
	int comp_type;
	int comp_type;
	int comp_type;
	int comp_type;
	int comp_type;
	int comp_type;
	int comp_type;
	int comp_type;
	_AnimeInfo* aip;
	SubCharacterDisp* scp_d;
	int anime_change_check_lower;
	// Line 4079, Address: 0x10c600, Func Offset: 0
	// Line 4083, Address: 0x10c618, Func Offset: 0x18
	// Line 4097, Address: 0x10c620, Func Offset: 0x20
	// Line 4100, Address: 0x10c634, Func Offset: 0x34
	// Line 4103, Address: 0x10c660, Func Offset: 0x60
	// Line 4106, Address: 0x10c690, Func Offset: 0x90
	// Line 4107, Address: 0x10c698, Func Offset: 0x98
	// Line 4108, Address: 0x10c6ac, Func Offset: 0xac
	// Line 4125, Address: 0x10c6c0, Func Offset: 0xc0
	// Line 4127, Address: 0x10c6c8, Func Offset: 0xc8
	// Line 4129, Address: 0x10c6d0, Func Offset: 0xd0
	// Line 4131, Address: 0x10c6e4, Func Offset: 0xe4
	// Line 4133, Address: 0x10c6ec, Func Offset: 0xec
	// Line 4135, Address: 0x10c6f4, Func Offset: 0xf4
	// Line 4137, Address: 0x10c708, Func Offset: 0x108
	// Line 4139, Address: 0x10c710, Func Offset: 0x110
	// Line 4140, Address: 0x10c718, Func Offset: 0x118
	// Line 4141, Address: 0x10c72c, Func Offset: 0x12c
	// Line 4142, Address: 0x10c740, Func Offset: 0x140
	// Line 4144, Address: 0x10c748, Func Offset: 0x148
	// Line 4145, Address: 0x10c750, Func Offset: 0x150
	// Line 4146, Address: 0x10c764, Func Offset: 0x164
	// Line 4147, Address: 0x10c778, Func Offset: 0x178
	// Line 4152, Address: 0x10c780, Func Offset: 0x180
	// Line 4154, Address: 0x10c7a0, Func Offset: 0x1a0
	// Line 4155, Address: 0x10c7a4, Func Offset: 0x1a4
	// Line 4156, Address: 0x10c7b8, Func Offset: 0x1b8
	// Line 4157, Address: 0x10c7c0, Func Offset: 0x1c0
	// Line 4158, Address: 0x10c7c4, Func Offset: 0x1c4
	// Line 4161, Address: 0x10c7d8, Func Offset: 0x1d8
	// Line 4162, Address: 0x10c7e0, Func Offset: 0x1e0
	// Line 4164, Address: 0x10c7f4, Func Offset: 0x1f4
	// Line 4169, Address: 0x10c7fc, Func Offset: 0x1fc
	// Line 4171, Address: 0x10c81c, Func Offset: 0x21c
	// Line 4172, Address: 0x10c820, Func Offset: 0x220
	// Line 4173, Address: 0x10c834, Func Offset: 0x234
	// Line 4174, Address: 0x10c83c, Func Offset: 0x23c
	// Line 4175, Address: 0x10c840, Func Offset: 0x240
	// Line 4177, Address: 0x10c854, Func Offset: 0x254
	// Line 4178, Address: 0x10c85c, Func Offset: 0x25c
	// Line 4180, Address: 0x10c870, Func Offset: 0x270
	// Line 4185, Address: 0x10c878, Func Offset: 0x278
	// Line 4187, Address: 0x10c898, Func Offset: 0x298
	// Line 4188, Address: 0x10c89c, Func Offset: 0x29c
	// Line 4189, Address: 0x10c8b0, Func Offset: 0x2b0
	// Line 4190, Address: 0x10c8b8, Func Offset: 0x2b8
	// Line 4191, Address: 0x10c8bc, Func Offset: 0x2bc
	// Line 4193, Address: 0x10c8d0, Func Offset: 0x2d0
	// Line 4194, Address: 0x10c8d8, Func Offset: 0x2d8
	// Line 4196, Address: 0x10c8ec, Func Offset: 0x2ec
	// Line 4198, Address: 0x10c8f4, Func Offset: 0x2f4
	// Line 4199, Address: 0x10c8fc, Func Offset: 0x2fc
	// Line 4200, Address: 0x10c910, Func Offset: 0x310
	// Line 4201, Address: 0x10c924, Func Offset: 0x324
	// Line 4203, Address: 0x10c92c, Func Offset: 0x32c
	// Line 4204, Address: 0x10c934, Func Offset: 0x334
	// Line 4205, Address: 0x10c948, Func Offset: 0x348
	// Line 4206, Address: 0x10c95c, Func Offset: 0x35c
	// Line 4211, Address: 0x10c964, Func Offset: 0x364
	// Line 4213, Address: 0x10c984, Func Offset: 0x384
	// Line 4214, Address: 0x10c988, Func Offset: 0x388
	// Line 4215, Address: 0x10c99c, Func Offset: 0x39c
	// Line 4216, Address: 0x10c9a4, Func Offset: 0x3a4
	// Line 4217, Address: 0x10c9a8, Func Offset: 0x3a8
	// Line 4219, Address: 0x10c9bc, Func Offset: 0x3bc
	// Line 4220, Address: 0x10c9c4, Func Offset: 0x3c4
	// Line 4222, Address: 0x10c9d8, Func Offset: 0x3d8
	// Line 4227, Address: 0x10c9e0, Func Offset: 0x3e0
	// Line 4229, Address: 0x10ca00, Func Offset: 0x400
	// Line 4230, Address: 0x10ca04, Func Offset: 0x404
	// Line 4231, Address: 0x10ca18, Func Offset: 0x418
	// Line 4232, Address: 0x10ca20, Func Offset: 0x420
	// Line 4233, Address: 0x10ca24, Func Offset: 0x424
	// Line 4235, Address: 0x10ca38, Func Offset: 0x438
	// Line 4236, Address: 0x10ca40, Func Offset: 0x440
	// Line 4238, Address: 0x10ca54, Func Offset: 0x454
	// Line 4243, Address: 0x10ca5c, Func Offset: 0x45c
	// Line 4245, Address: 0x10ca7c, Func Offset: 0x47c
	// Line 4246, Address: 0x10ca80, Func Offset: 0x480
	// Line 4247, Address: 0x10ca94, Func Offset: 0x494
	// Line 4248, Address: 0x10ca9c, Func Offset: 0x49c
	// Line 4249, Address: 0x10caa0, Func Offset: 0x4a0
	// Line 4251, Address: 0x10cab4, Func Offset: 0x4b4
	// Line 4252, Address: 0x10cabc, Func Offset: 0x4bc
	// Line 4254, Address: 0x10cad0, Func Offset: 0x4d0
	// Line 4259, Address: 0x10cad8, Func Offset: 0x4d8
	// Line 4261, Address: 0x10caf8, Func Offset: 0x4f8
	// Line 4262, Address: 0x10cafc, Func Offset: 0x4fc
	// Line 4263, Address: 0x10cb10, Func Offset: 0x510
	// Line 4264, Address: 0x10cb18, Func Offset: 0x518
	// Line 4265, Address: 0x10cb1c, Func Offset: 0x51c
	// Line 4267, Address: 0x10cb30, Func Offset: 0x530
	// Line 4268, Address: 0x10cb38, Func Offset: 0x538
	// Line 4270, Address: 0x10cb4c, Func Offset: 0x54c
	// Line 4275, Address: 0x10cb54, Func Offset: 0x554
	// Line 4277, Address: 0x10cb74, Func Offset: 0x574
	// Line 4278, Address: 0x10cb78, Func Offset: 0x578
	// Line 4279, Address: 0x10cb8c, Func Offset: 0x58c
	// Line 4280, Address: 0x10cb94, Func Offset: 0x594
	// Line 4281, Address: 0x10cb98, Func Offset: 0x598
	// Line 4283, Address: 0x10cbac, Func Offset: 0x5ac
	// Line 4284, Address: 0x10cbb4, Func Offset: 0x5b4
	// Line 4286, Address: 0x10cbc8, Func Offset: 0x5c8
	// Line 4290, Address: 0x10cbd0, Func Offset: 0x5d0
	// Line 4291, Address: 0x10cbd8, Func Offset: 0x5d8
	// Line 4293, Address: 0x10cbec, Func Offset: 0x5ec
	// Line 4310, Address: 0x10cbf4, Func Offset: 0x5f4
	// Line 4311, Address: 0x10cbfc, Func Offset: 0x5fc
	// Line 4312, Address: 0x10cc10, Func Offset: 0x610
	// Line 4313, Address: 0x10cc24, Func Offset: 0x624
	// Line 4315, Address: 0x10cc2c, Func Offset: 0x62c
	// Line 4316, Address: 0x10cc34, Func Offset: 0x634
	// Line 4317, Address: 0x10cc48, Func Offset: 0x648
	// Line 4318, Address: 0x10cc5c, Func Offset: 0x65c
	// Line 4320, Address: 0x10cc64, Func Offset: 0x664
	// Line 4321, Address: 0x10cc78, Func Offset: 0x678
	// Line 4322, Address: 0x10cc80, Func Offset: 0x680
	// Line 4323, Address: 0x10cc88, Func Offset: 0x688
	// Line 4325, Address: 0x10cc90, Func Offset: 0x690
	// Line 4326, Address: 0x10cca4, Func Offset: 0x6a4
	// Line 4327, Address: 0x10ccb8, Func Offset: 0x6b8
	// Line 4332, Address: 0x10ccc0, Func Offset: 0x6c0
	// Line 4333, Address: 0x10cce0, Func Offset: 0x6e0
	// Line 4334, Address: 0x10ccfc, Func Offset: 0x6fc
	// Line 4335, Address: 0x10cd10, Func Offset: 0x710
	// Line 4337, Address: 0x10cd24, Func Offset: 0x724
	// Line 4341, Address: 0x10cd2c, Func Offset: 0x72c
	// Line 4344, Address: 0x10cd30, Func Offset: 0x730
	// Line 4346, Address: 0x10cd44, Func Offset: 0x744
	// Line 4350, Address: 0x10cd74, Func Offset: 0x774
	// Line 4352, Address: 0x10cd94, Func Offset: 0x794
	// Line 4353, Address: 0x10cd98, Func Offset: 0x798
	// Line 4356, Address: 0x10cda0, Func Offset: 0x7a0
	// Line 4358, Address: 0x10cda8, Func Offset: 0x7a8
	// Line 4360, Address: 0x10cdac, Func Offset: 0x7ac
	// Line 4362, Address: 0x10cdb4, Func Offset: 0x7b4
	// Line 4364, Address: 0x10cddc, Func Offset: 0x7dc
	// Line 4366, Address: 0x10ce00, Func Offset: 0x800
	// Line 4368, Address: 0x10ce08, Func Offset: 0x808
	// Line 4369, Address: 0x10ce0c, Func Offset: 0x80c
	// Line 4371, Address: 0x10ce14, Func Offset: 0x814
	// Line 4373, Address: 0x10ce18, Func Offset: 0x818
	// Line 4375, Address: 0x10ce20, Func Offset: 0x820
	// Line 4377, Address: 0x10ce28, Func Offset: 0x828
	// Line 4378, Address: 0x10ce2c, Func Offset: 0x82c
	// Line 4380, Address: 0x10ce34, Func Offset: 0x834
	// Line 4382, Address: 0x10ce38, Func Offset: 0x838
	// Line 4384, Address: 0x10ce40, Func Offset: 0x840
	// Line 4386, Address: 0x10ce48, Func Offset: 0x848
	// Line 4387, Address: 0x10ce4c, Func Offset: 0x84c
	// Line 4389, Address: 0x10ce54, Func Offset: 0x854
	// Line 4393, Address: 0x10ce58, Func Offset: 0x858
	// Line 4394, Address: 0x10ce5c, Func Offset: 0x85c
	// Line 4395, Address: 0x10ce68, Func Offset: 0x868
	// Line 4397, Address: 0x10ce84, Func Offset: 0x884
	// Line 4398, Address: 0x10ce8c, Func Offset: 0x88c
	// Line 4400, Address: 0x10ce90, Func Offset: 0x890
	// Line 4402, Address: 0x10ce98, Func Offset: 0x898
	// Line 4403, Address: 0x10ce9c, Func Offset: 0x89c
	// Line 4405, Address: 0x10cea4, Func Offset: 0x8a4
	// Line 4411, Address: 0x10cea8, Func Offset: 0x8a8
	// Line 4414, Address: 0x10ced8, Func Offset: 0x8d8
	// Line 4416, Address: 0x10cee0, Func Offset: 0x8e0
	// Line 4417, Address: 0x10cef0, Func Offset: 0x8f0
	// Line 4419, Address: 0x10cf00, Func Offset: 0x900
	// Line 4420, Address: 0x10cf04, Func Offset: 0x904
	// Line 4422, Address: 0x10cf0c, Func Offset: 0x90c
	// Line 4424, Address: 0x10cf10, Func Offset: 0x910
	// Line 4425, Address: 0x10cf14, Func Offset: 0x914
	// Line 4426, Address: 0x10cf1c, Func Offset: 0x91c
	// Line 4427, Address: 0x10cf2c, Func Offset: 0x92c
	// Line 4428, Address: 0x10cf3c, Func Offset: 0x93c
	// Line 4429, Address: 0x10cf40, Func Offset: 0x940
	// Line 4431, Address: 0x10cf48, Func Offset: 0x948
	// Line 4433, Address: 0x10cf4c, Func Offset: 0x94c
	// Line 4434, Address: 0x10cf50, Func Offset: 0x950
	// Line 4435, Address: 0x10cf58, Func Offset: 0x958
	// Line 4436, Address: 0x10cf6c, Func Offset: 0x96c
	// Line 4438, Address: 0x10cf7c, Func Offset: 0x97c
	// Line 4439, Address: 0x10cf80, Func Offset: 0x980
	// Line 4441, Address: 0x10cf88, Func Offset: 0x988
	// Line 4443, Address: 0x10cf8c, Func Offset: 0x98c
	// Line 4444, Address: 0x10cf90, Func Offset: 0x990
	// Line 4445, Address: 0x10cf98, Func Offset: 0x998
	// Line 4446, Address: 0x10cf9c, Func Offset: 0x99c
	// Line 4449, Address: 0x10cfa0, Func Offset: 0x9a0
	// Line 4452, Address: 0x10cfbc, Func Offset: 0x9bc
	// Line 4454, Address: 0x10cfc4, Func Offset: 0x9c4
	// Line 4455, Address: 0x10cfd4, Func Offset: 0x9d4
	// Line 4457, Address: 0x10cfe4, Func Offset: 0x9e4
	// Line 4458, Address: 0x10cfe8, Func Offset: 0x9e8
	// Line 4460, Address: 0x10cff0, Func Offset: 0x9f0
	// Line 4462, Address: 0x10cff4, Func Offset: 0x9f4
	// Line 4463, Address: 0x10cff8, Func Offset: 0x9f8
	// Line 4464, Address: 0x10d000, Func Offset: 0xa00
	// Line 4465, Address: 0x10d010, Func Offset: 0xa10
	// Line 4466, Address: 0x10d020, Func Offset: 0xa20
	// Line 4467, Address: 0x10d024, Func Offset: 0xa24
	// Line 4469, Address: 0x10d02c, Func Offset: 0xa2c
	// Line 4472, Address: 0x10d030, Func Offset: 0xa30
	// Line 4473, Address: 0x10d034, Func Offset: 0xa34
	// Line 4474, Address: 0x10d03c, Func Offset: 0xa3c
	// Line 4475, Address: 0x10d050, Func Offset: 0xa50
	// Line 4477, Address: 0x10d060, Func Offset: 0xa60
	// Line 4478, Address: 0x10d064, Func Offset: 0xa64
	// Line 4480, Address: 0x10d06c, Func Offset: 0xa6c
	// Line 4482, Address: 0x10d070, Func Offset: 0xa70
	// Line 4484, Address: 0x10d074, Func Offset: 0xa74
	// Line 4485, Address: 0x10d07c, Func Offset: 0xa7c
	// Line 4486, Address: 0x10d080, Func Offset: 0xa80
	// Line 4489, Address: 0x10d084, Func Offset: 0xa84
	// Line 4492, Address: 0x10d0a0, Func Offset: 0xaa0
	// Line 4494, Address: 0x10d0a8, Func Offset: 0xaa8
	// Line 4495, Address: 0x10d0b8, Func Offset: 0xab8
	// Line 4497, Address: 0x10d0c8, Func Offset: 0xac8
	// Line 4498, Address: 0x10d0cc, Func Offset: 0xacc
	// Line 4500, Address: 0x10d0d4, Func Offset: 0xad4
	// Line 4502, Address: 0x10d0d8, Func Offset: 0xad8
	// Line 4503, Address: 0x10d0dc, Func Offset: 0xadc
	// Line 4504, Address: 0x10d0e4, Func Offset: 0xae4
	// Line 4505, Address: 0x10d0f4, Func Offset: 0xaf4
	// Line 4506, Address: 0x10d104, Func Offset: 0xb04
	// Line 4507, Address: 0x10d108, Func Offset: 0xb08
	// Line 4509, Address: 0x10d110, Func Offset: 0xb10
	// Line 4512, Address: 0x10d114, Func Offset: 0xb14
	// Line 4513, Address: 0x10d118, Func Offset: 0xb18
	// Line 4514, Address: 0x10d120, Func Offset: 0xb20
	// Line 4515, Address: 0x10d124, Func Offset: 0xb24
	// Line 4517, Address: 0x10d128, Func Offset: 0xb28
	// Line 4520, Address: 0x10d144, Func Offset: 0xb44
	// Line 4522, Address: 0x10d14c, Func Offset: 0xb4c
	// Line 4523, Address: 0x10d15c, Func Offset: 0xb5c
	// Line 4525, Address: 0x10d16c, Func Offset: 0xb6c
	// Line 4526, Address: 0x10d170, Func Offset: 0xb70
	// Line 4528, Address: 0x10d178, Func Offset: 0xb78
	// Line 4530, Address: 0x10d17c, Func Offset: 0xb7c
	// Line 4531, Address: 0x10d180, Func Offset: 0xb80
	// Line 4532, Address: 0x10d188, Func Offset: 0xb88
	// Line 4534, Address: 0x10d198, Func Offset: 0xb98
	// Line 4535, Address: 0x10d1a8, Func Offset: 0xba8
	// Line 4536, Address: 0x10d1ac, Func Offset: 0xbac
	// Line 4537, Address: 0x10d1b4, Func Offset: 0xbb4
	// Line 4546, Address: 0x10d1b8, Func Offset: 0xbb8
	// Line 4547, Address: 0x10d1bc, Func Offset: 0xbbc
	// Line 4548, Address: 0x10d1c4, Func Offset: 0xbc4
	// Line 4549, Address: 0x10d1c8, Func Offset: 0xbc8
	// Line 4551, Address: 0x10d1cc, Func Offset: 0xbcc
	// Line 4556, Address: 0x10d1e8, Func Offset: 0xbe8
	// Line 4557, Address: 0x10d1f0, Func Offset: 0xbf0
	// Line 4558, Address: 0x10d204, Func Offset: 0xc04
	// Line 4560, Address: 0x10d218, Func Offset: 0xc18
	// Line 4564, Address: 0x10d220, Func Offset: 0xc20
	// Line 4566, Address: 0x10d23c, Func Offset: 0xc3c
	// Line 4571, Address: 0x10d26c, Func Offset: 0xc6c
	// Line 4572, Address: 0x10d280, Func Offset: 0xc80
	// Line 4573, Address: 0x10d284, Func Offset: 0xc84
	// Line 4574, Address: 0x10d28c, Func Offset: 0xc8c
	// Line 4575, Address: 0x10d2b0, Func Offset: 0xcb0
	// Line 4576, Address: 0x10d2b4, Func Offset: 0xcb4
	// Line 4577, Address: 0x10d2bc, Func Offset: 0xcbc
	// Line 4580, Address: 0x10d2c0, Func Offset: 0xcc0
	// Line 4582, Address: 0x10d2dc, Func Offset: 0xcdc
	// Line 4589, Address: 0x10d2e4, Func Offset: 0xce4
	// Line 4593, Address: 0x10d30c, Func Offset: 0xd0c
	// Line 4595, Address: 0x10d334, Func Offset: 0xd34
	// Line 4597, Address: 0x10d33c, Func Offset: 0xd3c
	// Line 4598, Address: 0x10d340, Func Offset: 0xd40
	// Line 4600, Address: 0x10d348, Func Offset: 0xd48
	// Line 4602, Address: 0x10d34c, Func Offset: 0xd4c
	// Line 4604, Address: 0x10d354, Func Offset: 0xd54
	// Line 4606, Address: 0x10d35c, Func Offset: 0xd5c
	// Line 4607, Address: 0x10d360, Func Offset: 0xd60
	// Line 4609, Address: 0x10d368, Func Offset: 0xd68
	// Line 4611, Address: 0x10d36c, Func Offset: 0xd6c
	// Line 4613, Address: 0x10d374, Func Offset: 0xd74
	// Line 4615, Address: 0x10d380, Func Offset: 0xd80
	// Line 4616, Address: 0x10d384, Func Offset: 0xd84
	// Line 4618, Address: 0x10d38c, Func Offset: 0xd8c
	// Line 4622, Address: 0x10d390, Func Offset: 0xd90
	// Line 4623, Address: 0x10d398, Func Offset: 0xd98
	// Line 4625, Address: 0x10d3c8, Func Offset: 0xdc8
	// Line 4626, Address: 0x10d3cc, Func Offset: 0xdcc
	// Line 4628, Address: 0x10d3d4, Func Offset: 0xdd4
	// Line 4629, Address: 0x10d3d8, Func Offset: 0xdd8
	// Line 4631, Address: 0x10d3e0, Func Offset: 0xde0
	// Line 4635, Address: 0x10d3e4, Func Offset: 0xde4
	// Line 4637, Address: 0x10d400, Func Offset: 0xe00
	// Line 4640, Address: 0x10d408, Func Offset: 0xe08
	// Line 4642, Address: 0x10d410, Func Offset: 0xe10
	// Line 4650, Address: 0x10d418, Func Offset: 0xe18
	// Line 4652, Address: 0x10d448, Func Offset: 0xe48
	// Line 4654, Address: 0x10d450, Func Offset: 0xe50
	// Line 4655, Address: 0x10d460, Func Offset: 0xe60
	// Line 4657, Address: 0x10d470, Func Offset: 0xe70
	// Line 4658, Address: 0x10d474, Func Offset: 0xe74
	// Line 4660, Address: 0x10d47c, Func Offset: 0xe7c
	// Line 4662, Address: 0x10d480, Func Offset: 0xe80
	// Line 4663, Address: 0x10d488, Func Offset: 0xe88
	// Line 4664, Address: 0x10d498, Func Offset: 0xe98
	// Line 4665, Address: 0x10d4a8, Func Offset: 0xea8
	// Line 4666, Address: 0x10d4ac, Func Offset: 0xeac
	// Line 4667, Address: 0x10d4b4, Func Offset: 0xeb4
	// Line 4670, Address: 0x10d4b8, Func Offset: 0xeb8
	// Line 4671, Address: 0x10d4bc, Func Offset: 0xebc
	// Line 4674, Address: 0x10d4c4, Func Offset: 0xec4
	// Line 4675, Address: 0x10d4d8, Func Offset: 0xed8
	// Line 4676, Address: 0x10d4f4, Func Offset: 0xef4
	// Line 4677, Address: 0x10d4f8, Func Offset: 0xef8
	// Line 4678, Address: 0x10d500, Func Offset: 0xf00
	// Line 4679, Address: 0x10d518, Func Offset: 0xf18
	// Line 4680, Address: 0x10d51c, Func Offset: 0xf1c
	// Line 4681, Address: 0x10d524, Func Offset: 0xf24
	// Line 4684, Address: 0x10d548, Func Offset: 0xf48
	// Line 4685, Address: 0x10d550, Func Offset: 0xf50
	// Line 4689, Address: 0x10d554, Func Offset: 0xf54
	// Line 4691, Address: 0x10d570, Func Offset: 0xf70
	// Line 4693, Address: 0x10d578, Func Offset: 0xf78
	// Line 4694, Address: 0x10d588, Func Offset: 0xf88
	// Line 4696, Address: 0x10d598, Func Offset: 0xf98
	// Line 4697, Address: 0x10d59c, Func Offset: 0xf9c
	// Line 4699, Address: 0x10d5a4, Func Offset: 0xfa4
	// Line 4701, Address: 0x10d5a8, Func Offset: 0xfa8
	// Line 4702, Address: 0x10d5b0, Func Offset: 0xfb0
	// Line 4703, Address: 0x10d5c0, Func Offset: 0xfc0
	// Line 4704, Address: 0x10d5d0, Func Offset: 0xfd0
	// Line 4705, Address: 0x10d5d4, Func Offset: 0xfd4
	// Line 4706, Address: 0x10d5dc, Func Offset: 0xfdc
	// Line 4708, Address: 0x10d5e0, Func Offset: 0xfe0
	// Line 4709, Address: 0x10d5e4, Func Offset: 0xfe4
	// Line 4712, Address: 0x10d5ec, Func Offset: 0xfec
	// Line 4713, Address: 0x10d600, Func Offset: 0x1000
	// Line 4714, Address: 0x10d61c, Func Offset: 0x101c
	// Line 4715, Address: 0x10d620, Func Offset: 0x1020
	// Line 4716, Address: 0x10d628, Func Offset: 0x1028
	// Line 4717, Address: 0x10d640, Func Offset: 0x1040
	// Line 4718, Address: 0x10d644, Func Offset: 0x1044
	// Line 4719, Address: 0x10d64c, Func Offset: 0x104c
	// Line 4722, Address: 0x10d670, Func Offset: 0x1070
	// Line 4723, Address: 0x10d678, Func Offset: 0x1078
	// Line 4727, Address: 0x10d67c, Func Offset: 0x107c
	// Line 4729, Address: 0x10d698, Func Offset: 0x1098
	// Line 4731, Address: 0x10d6a0, Func Offset: 0x10a0
	// Line 4732, Address: 0x10d6b0, Func Offset: 0x10b0
	// Line 4734, Address: 0x10d6c0, Func Offset: 0x10c0
	// Line 4735, Address: 0x10d6c4, Func Offset: 0x10c4
	// Line 4737, Address: 0x10d6cc, Func Offset: 0x10cc
	// Line 4739, Address: 0x10d6d0, Func Offset: 0x10d0
	// Line 4740, Address: 0x10d6d8, Func Offset: 0x10d8
	// Line 4741, Address: 0x10d6e8, Func Offset: 0x10e8
	// Line 4742, Address: 0x10d6f8, Func Offset: 0x10f8
	// Line 4743, Address: 0x10d6fc, Func Offset: 0x10fc
	// Line 4744, Address: 0x10d704, Func Offset: 0x1104
	// Line 4747, Address: 0x10d708, Func Offset: 0x1108
	// Line 4748, Address: 0x10d70c, Func Offset: 0x110c
	// Line 4751, Address: 0x10d714, Func Offset: 0x1114
	// Line 4752, Address: 0x10d728, Func Offset: 0x1128
	// Line 4753, Address: 0x10d744, Func Offset: 0x1144
	// Line 4754, Address: 0x10d748, Func Offset: 0x1148
	// Line 4755, Address: 0x10d750, Func Offset: 0x1150
	// Line 4756, Address: 0x10d768, Func Offset: 0x1168
	// Line 4757, Address: 0x10d76c, Func Offset: 0x116c
	// Line 4758, Address: 0x10d774, Func Offset: 0x1174
	// Line 4761, Address: 0x10d798, Func Offset: 0x1198
	// Line 4762, Address: 0x10d7a0, Func Offset: 0x11a0
	// Line 4766, Address: 0x10d7a4, Func Offset: 0x11a4
	// Line 4768, Address: 0x10d7c0, Func Offset: 0x11c0
	// Line 4770, Address: 0x10d7c8, Func Offset: 0x11c8
	// Line 4771, Address: 0x10d7d8, Func Offset: 0x11d8
	// Line 4773, Address: 0x10d7e8, Func Offset: 0x11e8
	// Line 4774, Address: 0x10d7ec, Func Offset: 0x11ec
	// Line 4776, Address: 0x10d7f4, Func Offset: 0x11f4
	// Line 4778, Address: 0x10d7f8, Func Offset: 0x11f8
	// Line 4779, Address: 0x10d800, Func Offset: 0x1200
	// Line 4780, Address: 0x10d810, Func Offset: 0x1210
	// Line 4781, Address: 0x10d820, Func Offset: 0x1220
	// Line 4782, Address: 0x10d824, Func Offset: 0x1224
	// Line 4783, Address: 0x10d82c, Func Offset: 0x122c
	// Line 4785, Address: 0x10d830, Func Offset: 0x1230
	// Line 4786, Address: 0x10d834, Func Offset: 0x1234
	// Line 4789, Address: 0x10d83c, Func Offset: 0x123c
	// Line 4791, Address: 0x10d850, Func Offset: 0x1250
	// Line 4793, Address: 0x10d88c, Func Offset: 0x128c
	// Line 4794, Address: 0x10d8a0, Func Offset: 0x12a0
	// Line 4796, Address: 0x10d8a8, Func Offset: 0x12a8
	// Line 4797, Address: 0x10d8ac, Func Offset: 0x12ac
	// Line 4799, Address: 0x10d8b4, Func Offset: 0x12b4
	// Line 4800, Address: 0x10d8b8, Func Offset: 0x12b8
	// Line 4802, Address: 0x10d8c0, Func Offset: 0x12c0
	// Line 4803, Address: 0x10d8d4, Func Offset: 0x12d4
	// Line 4805, Address: 0x10d8e0, Func Offset: 0x12e0
	// Line 4806, Address: 0x10d8e4, Func Offset: 0x12e4
	// Line 4808, Address: 0x10d8ec, Func Offset: 0x12ec
	// Line 4809, Address: 0x10d8f0, Func Offset: 0x12f0
	// Line 4811, Address: 0x10d8f8, Func Offset: 0x12f8
	// Line 4813, Address: 0x10d91c, Func Offset: 0x131c
	// Line 4814, Address: 0x10d930, Func Offset: 0x1330
	// Line 4816, Address: 0x10d93c, Func Offset: 0x133c
	// Line 4817, Address: 0x10d940, Func Offset: 0x1340
	// Line 4818, Address: 0x10d948, Func Offset: 0x1348
	// Line 4819, Address: 0x10d95c, Func Offset: 0x135c
	// Line 4821, Address: 0x10d968, Func Offset: 0x1368
	// Line 4826, Address: 0x10d96c, Func Offset: 0x136c
	// Line 4832, Address: 0x10d988, Func Offset: 0x1388
	// Line 4833, Address: 0x10d99c, Func Offset: 0x139c
	// Line 4836, Address: 0x10d9b0, Func Offset: 0x13b0
	// Line 4841, Address: 0x10d9b8, Func Offset: 0x13b8
	// Line 4843, Address: 0x10d9e8, Func Offset: 0x13e8
	// Line 4845, Address: 0x10da1c, Func Offset: 0x141c
	// Line 4846, Address: 0x10da20, Func Offset: 0x1420
	// Line 4847, Address: 0x10da28, Func Offset: 0x1428
	// Line 4849, Address: 0x10da2c, Func Offset: 0x142c
	// Line 4850, Address: 0x10da48, Func Offset: 0x1448
	// Line 4853, Address: 0x10da50, Func Offset: 0x1450
	// Line 4855, Address: 0x10da80, Func Offset: 0x1480
	// Line 4856, Address: 0x10da84, Func Offset: 0x1484
	// Line 4858, Address: 0x10da8c, Func Offset: 0x148c
	// Line 4859, Address: 0x10da90, Func Offset: 0x1490
	// Line 4861, Address: 0x10da98, Func Offset: 0x1498
	// Line 4864, Address: 0x10da9c, Func Offset: 0x149c
	// Line 4865, Address: 0x10dab8, Func Offset: 0x14b8
	// Line 4867, Address: 0x10dac0, Func Offset: 0x14c0
	// Line 4868, Address: 0x10dac4, Func Offset: 0x14c4
	// Line 4869, Address: 0x10dacc, Func Offset: 0x14cc
	// Line 4872, Address: 0x10dad4, Func Offset: 0x14d4
	// Line 4873, Address: 0x10dad8, Func Offset: 0x14d8
	// Line 4874, Address: 0x10dae0, Func Offset: 0x14e0
	// Line 4876, Address: 0x10dae8, Func Offset: 0x14e8
	// Line 4877, Address: 0x10daf8, Func Offset: 0x14f8
	// Line 4878, Address: 0x10dafc, Func Offset: 0x14fc
	// Line 4879, Address: 0x10db04, Func Offset: 0x1504
	// Line 4881, Address: 0x10db08, Func Offset: 0x1508
	// Line 4882, Address: 0x10db24, Func Offset: 0x1524
	// Line 4884, Address: 0x10db2c, Func Offset: 0x152c
	// Line 4885, Address: 0x10db3c, Func Offset: 0x153c
	// Line 4886, Address: 0x10db40, Func Offset: 0x1540
	// Line 4887, Address: 0x10db48, Func Offset: 0x1548
	// Line 4889, Address: 0x10db4c, Func Offset: 0x154c
	// Line 4890, Address: 0x10db68, Func Offset: 0x1568
	// Line 4892, Address: 0x10db70, Func Offset: 0x1570
	// Line 4893, Address: 0x10db80, Func Offset: 0x1580
	// Line 4894, Address: 0x10db84, Func Offset: 0x1584
	// Line 4895, Address: 0x10db8c, Func Offset: 0x158c
	// Line 4897, Address: 0x10db90, Func Offset: 0x1590
	// Line 4898, Address: 0x10dbac, Func Offset: 0x15ac
	// Line 4900, Address: 0x10dbb4, Func Offset: 0x15b4
	// Line 4901, Address: 0x10dbc4, Func Offset: 0x15c4
	// Line 4902, Address: 0x10dbc8, Func Offset: 0x15c8
	// Line 4903, Address: 0x10dbd0, Func Offset: 0x15d0
	// Line 4905, Address: 0x10dbd4, Func Offset: 0x15d4
	// Line 4914, Address: 0x10dbf0, Func Offset: 0x15f0
	// Line 4915, Address: 0x10dbfc, Func Offset: 0x15fc
	// Line 4916, Address: 0x10dc10, Func Offset: 0x1610
	// Line 4917, Address: 0x10dc14, Func Offset: 0x1614
	// Line 4918, Address: 0x10dc1c, Func Offset: 0x161c
	// Line 4920, Address: 0x10dc20, Func Offset: 0x1620
	// Line 4921, Address: 0x10dc28, Func Offset: 0x1628
	// Line 4923, Address: 0x10dc2c, Func Offset: 0x162c
	// Line 4924, Address: 0x10dc3c, Func Offset: 0x163c
	// Line 4926, Address: 0x10dc50, Func Offset: 0x1650
	// Line 4930, Address: 0x10dc58, Func Offset: 0x1658
	// Line 4935, Address: 0x10dc5c, Func Offset: 0x165c
	// Line 4937, Address: 0x10dc8c, Func Offset: 0x168c
	// Line 4938, Address: 0x10dcac, Func Offset: 0x16ac
	// Line 4939, Address: 0x10dcbc, Func Offset: 0x16bc
	// Line 4940, Address: 0x10dcc0, Func Offset: 0x16c0
	// Line 4941, Address: 0x10dcc8, Func Offset: 0x16c8
	// Line 4943, Address: 0x10dccc, Func Offset: 0x16cc
	// Line 4944, Address: 0x10dcd4, Func Offset: 0x16d4
	// Line 4946, Address: 0x10dcfc, Func Offset: 0x16fc
	// Line 4947, Address: 0x10dd00, Func Offset: 0x1700
	// Line 4948, Address: 0x10dd08, Func Offset: 0x1708
	// Line 4951, Address: 0x10dd0c, Func Offset: 0x170c
	// Line 4952, Address: 0x10dd28, Func Offset: 0x1728
	// Line 4954, Address: 0x10dd30, Func Offset: 0x1730
	// Line 4955, Address: 0x10dd50, Func Offset: 0x1750
	// Line 4956, Address: 0x10dd54, Func Offset: 0x1754
	// Line 4957, Address: 0x10dd5c, Func Offset: 0x175c
	// Line 4959, Address: 0x10dd8c, Func Offset: 0x178c
	// Line 4960, Address: 0x10dd90, Func Offset: 0x1790
	// Line 4962, Address: 0x10dd98, Func Offset: 0x1798
	// Line 4963, Address: 0x10dd9c, Func Offset: 0x179c
	// Line 4965, Address: 0x10dda4, Func Offset: 0x17a4
	// Line 4970, Address: 0x10dda8, Func Offset: 0x17a8
	// Line 4971, Address: 0x10ddc4, Func Offset: 0x17c4
	// Line 4973, Address: 0x10ddcc, Func Offset: 0x17cc
	// Line 4974, Address: 0x10ddec, Func Offset: 0x17ec
	// Line 4975, Address: 0x10ddf0, Func Offset: 0x17f0
	// Line 4976, Address: 0x10ddf8, Func Offset: 0x17f8
	// Line 4978, Address: 0x10ddfc, Func Offset: 0x17fc
	// Line 4979, Address: 0x10de18, Func Offset: 0x1818
	// Line 4981, Address: 0x10de20, Func Offset: 0x1820
	// Line 4983, Address: 0x10de40, Func Offset: 0x1840
	// Line 4984, Address: 0x10de54, Func Offset: 0x1854
	// Line 4985, Address: 0x10de58, Func Offset: 0x1858
	// Line 4986, Address: 0x10de60, Func Offset: 0x1860
	// Line 4988, Address: 0x10de64, Func Offset: 0x1864
	// Line 4989, Address: 0x10de6c, Func Offset: 0x186c
	// Line 4990, Address: 0x10de7c, Func Offset: 0x187c
	// Line 4991, Address: 0x10de80, Func Offset: 0x1880
	// Line 4992, Address: 0x10de88, Func Offset: 0x1888
	// Line 4995, Address: 0x10de8c, Func Offset: 0x188c
	// Line 4996, Address: 0x10dea8, Func Offset: 0x18a8
	// Line 5002, Address: 0x10deb0, Func Offset: 0x18b0
	// Line 5004, Address: 0x10dec0, Func Offset: 0x18c0
	// Line 5006, Address: 0x10dee8, Func Offset: 0x18e8
	// Line 5007, Address: 0x10def8, Func Offset: 0x18f8
	// Line 5008, Address: 0x10defc, Func Offset: 0x18fc
	// Line 5009, Address: 0x10df04, Func Offset: 0x1904
	// Line 5011, Address: 0x10df08, Func Offset: 0x1908
	// Line 5013, Address: 0x10df10, Func Offset: 0x1910
	// Line 5016, Address: 0x10df14, Func Offset: 0x1914
	// Line 5018, Address: 0x10df1c, Func Offset: 0x191c
	// Line 5020, Address: 0x10df44, Func Offset: 0x1944
	// Line 5021, Address: 0x10df54, Func Offset: 0x1954
	// Line 5022, Address: 0x10df58, Func Offset: 0x1958
	// Line 5023, Address: 0x10df60, Func Offset: 0x1960
	// Line 5025, Address: 0x10df64, Func Offset: 0x1964
	// Line 5027, Address: 0x10df6c, Func Offset: 0x196c
	// Line 5032, Address: 0x10df70, Func Offset: 0x1970
	// Line 5033, Address: 0x10df84, Func Offset: 0x1984
	// Line 5034, Address: 0x10df88, Func Offset: 0x1988
	// Line 5036, Address: 0x10dfb0, Func Offset: 0x19b0
	// Line 5039, Address: 0x10dfd8, Func Offset: 0x19d8
	// Line 5042, Address: 0x10dfe4, Func Offset: 0x19e4
	// Line 5043, Address: 0x10dff4, Func Offset: 0x19f4
	// Line 5044, Address: 0x10dff8, Func Offset: 0x19f8
	// Line 5045, Address: 0x10e000, Func Offset: 0x1a00
	// Line 5047, Address: 0x10e004, Func Offset: 0x1a04
	// Line 5049, Address: 0x10e00c, Func Offset: 0x1a0c
	// Line 5053, Address: 0x10e010, Func Offset: 0x1a10
	// Line 5054, Address: 0x10e02c, Func Offset: 0x1a2c
	// Line 5056, Address: 0x10e034, Func Offset: 0x1a34
	// Line 5058, Address: 0x10e044, Func Offset: 0x1a44
	// Line 5060, Address: 0x10e078, Func Offset: 0x1a78
	// Line 5061, Address: 0x10e088, Func Offset: 0x1a88
	// Line 5062, Address: 0x10e08c, Func Offset: 0x1a8c
	// Line 5063, Address: 0x10e094, Func Offset: 0x1a94
	// Line 5065, Address: 0x10e098, Func Offset: 0x1a98
	// Line 5067, Address: 0x10e0a0, Func Offset: 0x1aa0
	// Line 5068, Address: 0x10e0a4, Func Offset: 0x1aa4
	// Line 5070, Address: 0x10e0ac, Func Offset: 0x1aac
	// Line 5073, Address: 0x10e0b0, Func Offset: 0x1ab0
	// Line 5075, Address: 0x10e0b8, Func Offset: 0x1ab8
	// Line 5077, Address: 0x10e0ec, Func Offset: 0x1aec
	// Line 5078, Address: 0x10e0fc, Func Offset: 0x1afc
	// Line 5079, Address: 0x10e100, Func Offset: 0x1b00
	// Line 5080, Address: 0x10e108, Func Offset: 0x1b08
	// Line 5082, Address: 0x10e10c, Func Offset: 0x1b0c
	// Line 5084, Address: 0x10e114, Func Offset: 0x1b14
	// Line 5085, Address: 0x10e118, Func Offset: 0x1b18
	// Line 5087, Address: 0x10e120, Func Offset: 0x1b20
	// Line 5092, Address: 0x10e124, Func Offset: 0x1b24
	// Line 5093, Address: 0x10e138, Func Offset: 0x1b38
	// Line 5094, Address: 0x10e13c, Func Offset: 0x1b3c
	// Line 5096, Address: 0x10e170, Func Offset: 0x1b70
	// Line 5099, Address: 0x10e198, Func Offset: 0x1b98
	// Line 5102, Address: 0x10e1a4, Func Offset: 0x1ba4
	// Line 5103, Address: 0x10e1b4, Func Offset: 0x1bb4
	// Line 5104, Address: 0x10e1b8, Func Offset: 0x1bb8
	// Line 5105, Address: 0x10e1c0, Func Offset: 0x1bc0
	// Line 5107, Address: 0x10e1c4, Func Offset: 0x1bc4
	// Line 5110, Address: 0x10e1cc, Func Offset: 0x1bcc
	// Line 5114, Address: 0x10e1d0, Func Offset: 0x1bd0
	// Line 5115, Address: 0x10e1ec, Func Offset: 0x1bec
	// Line 5117, Address: 0x10e1f4, Func Offset: 0x1bf4
	// Line 5119, Address: 0x10e204, Func Offset: 0x1c04
	// Line 5121, Address: 0x10e22c, Func Offset: 0x1c2c
	// Line 5122, Address: 0x10e230, Func Offset: 0x1c30
	// Line 5124, Address: 0x10e238, Func Offset: 0x1c38
	// Line 5127, Address: 0x10e23c, Func Offset: 0x1c3c
	// Line 5129, Address: 0x10e244, Func Offset: 0x1c44
	// Line 5131, Address: 0x10e26c, Func Offset: 0x1c6c
	// Line 5132, Address: 0x10e270, Func Offset: 0x1c70
	// Line 5134, Address: 0x10e278, Func Offset: 0x1c78
	// Line 5139, Address: 0x10e27c, Func Offset: 0x1c7c
	// Line 5140, Address: 0x10e290, Func Offset: 0x1c90
	// Line 5141, Address: 0x10e294, Func Offset: 0x1c94
	// Line 5143, Address: 0x10e298, Func Offset: 0x1c98
	// Line 5144, Address: 0x10e2b4, Func Offset: 0x1cb4
	// Line 5149, Address: 0x10e2bc, Func Offset: 0x1cbc
	// Line 5151, Address: 0x10e2cc, Func Offset: 0x1ccc
	// Line 5153, Address: 0x10e2f4, Func Offset: 0x1cf4
	// Line 5154, Address: 0x10e2f8, Func Offset: 0x1cf8
	// Line 5156, Address: 0x10e300, Func Offset: 0x1d00
	// Line 5159, Address: 0x10e304, Func Offset: 0x1d04
	// Line 5161, Address: 0x10e30c, Func Offset: 0x1d0c
	// Line 5163, Address: 0x10e334, Func Offset: 0x1d34
	// Line 5164, Address: 0x10e338, Func Offset: 0x1d38
	// Line 5166, Address: 0x10e340, Func Offset: 0x1d40
	// Line 5172, Address: 0x10e344, Func Offset: 0x1d44
	// Line 5173, Address: 0x10e358, Func Offset: 0x1d58
	// Line 5174, Address: 0x10e35c, Func Offset: 0x1d5c
	// Line 5176, Address: 0x10e360, Func Offset: 0x1d60
	// Line 5182, Address: 0x10e37c, Func Offset: 0x1d7c
	// Line 5185, Address: 0x10e390, Func Offset: 0x1d90
	// Line 5190, Address: 0x10e398, Func Offset: 0x1d98
	// Line 5191, Address: 0x10e3a8, Func Offset: 0x1da8
	// Line 5193, Address: 0x10e3ac, Func Offset: 0x1dac
	// Line 5194, Address: 0x10e3b0, Func Offset: 0x1db0
	// Line 5195, Address: 0x10e3c4, Func Offset: 0x1dc4
	// Line 5196, Address: 0x10e3cc, Func Offset: 0x1dcc
	// Line 5198, Address: 0x10e3d0, Func Offset: 0x1dd0
	// Line 5199, Address: 0x10e40c, Func Offset: 0x1e0c
	// Line 5200, Address: 0x10e410, Func Offset: 0x1e10
	// Line 5201, Address: 0x10e418, Func Offset: 0x1e18
	// Line 5203, Address: 0x10e41c, Func Offset: 0x1e1c
	// Line 5205, Address: 0x10e430, Func Offset: 0x1e30
	// Line 5206, Address: 0x10e44c, Func Offset: 0x1e4c
	// Line 5208, Address: 0x10e460, Func Offset: 0x1e60
	// Line 5216, Address: 0x10e468, Func Offset: 0x1e68
	// Line 5218, Address: 0x10e48c, Func Offset: 0x1e8c
	// Line 5219, Address: 0x10e4a0, Func Offset: 0x1ea0
	// Line 5220, Address: 0x10e4bc, Func Offset: 0x1ebc
	// Line 5222, Address: 0x10e4d0, Func Offset: 0x1ed0
	// Line 5228, Address: 0x10e4d8, Func Offset: 0x1ed8
	// Line 5232, Address: 0x10e524, Func Offset: 0x1f24
	// Line 5233, Address: 0x10e528, Func Offset: 0x1f28
	// Line 5235, Address: 0x10e530, Func Offset: 0x1f30
	// Line 5236, Address: 0x10e534, Func Offset: 0x1f34
	// Line 5238, Address: 0x10e53c, Func Offset: 0x1f3c
	// Line 5239, Address: 0x10e540, Func Offset: 0x1f40
	// Line 5241, Address: 0x10e548, Func Offset: 0x1f48
	// Line 5245, Address: 0x10e56c, Func Offset: 0x1f6c
	// Line 5246, Address: 0x10e580, Func Offset: 0x1f80
	// Line 5247, Address: 0x10e59c, Func Offset: 0x1f9c
	// Line 5249, Address: 0x10e5b0, Func Offset: 0x1fb0
	// Line 5252, Address: 0x10e5b8, Func Offset: 0x1fb8
	// Line 5253, Address: 0x10e5dc, Func Offset: 0x1fdc
	// Line 5254, Address: 0x10e5f0, Func Offset: 0x1ff0
	// Line 5255, Address: 0x10e604, Func Offset: 0x2004
	// Line 5261, Address: 0x10e60c, Func Offset: 0x200c
	// Line 5264, Address: 0x10e654, Func Offset: 0x2054
	// Line 5265, Address: 0x10e65c, Func Offset: 0x205c
	// Line 5268, Address: 0x10e664, Func Offset: 0x2064
	// Line 5271, Address: 0x10e6f0, Func Offset: 0x20f0
	// Line 5272, Address: 0x10e6f4, Func Offset: 0x20f4
	// Line 5275, Address: 0x10e6fc, Func Offset: 0x20fc
	// Line 5276, Address: 0x10e700, Func Offset: 0x2100
	// Line 5280, Address: 0x10e708, Func Offset: 0x2108
	// Line 5281, Address: 0x10e718, Func Offset: 0x2118
	// Line 5282, Address: 0x10e71c, Func Offset: 0x211c
	// Line 5283, Address: 0x10e724, Func Offset: 0x2124
	// Line 5285, Address: 0x10e728, Func Offset: 0x2128
	// Line 5288, Address: 0x10e730, Func Offset: 0x2130
	// Line 5289, Address: 0x10e734, Func Offset: 0x2134
	// Line 5293, Address: 0x10e73c, Func Offset: 0x213c
	// Line 5296, Address: 0x10e75c, Func Offset: 0x215c
	// Line 5300, Address: 0x10e764, Func Offset: 0x2164
	// Line 5303, Address: 0x10e7f0, Func Offset: 0x21f0
	// Line 5304, Address: 0x10e80c, Func Offset: 0x220c
	// Line 5307, Address: 0x10e814, Func Offset: 0x2214
	// Line 5308, Address: 0x10e830, Func Offset: 0x2230
	// Line 5312, Address: 0x10e838, Func Offset: 0x2238
	// Line 5313, Address: 0x10e848, Func Offset: 0x2248
	// Line 5314, Address: 0x10e858, Func Offset: 0x2258
	// Line 5315, Address: 0x10e85c, Func Offset: 0x225c
	// Line 5316, Address: 0x10e864, Func Offset: 0x2264
	// Line 5318, Address: 0x10e868, Func Offset: 0x2268
	// Line 5319, Address: 0x10e870, Func Offset: 0x2270
	// Line 5320, Address: 0x10e880, Func Offset: 0x2280
	// Line 5321, Address: 0x10e884, Func Offset: 0x2284
	// Line 5322, Address: 0x10e88c, Func Offset: 0x228c
	// Line 5325, Address: 0x10e890, Func Offset: 0x2290
	// Line 5328, Address: 0x10e898, Func Offset: 0x2298
	// Line 5329, Address: 0x10e8b4, Func Offset: 0x22b4
	// Line 5332, Address: 0x10e8bc, Func Offset: 0x22bc
	// Line 5340, Address: 0x10e8d8, Func Offset: 0x22d8
	// Line 5341, Address: 0x10e8e8, Func Offset: 0x22e8
	// Line 5343, Address: 0x10e914, Func Offset: 0x2314
	// Line 5345, Address: 0x10e928, Func Offset: 0x2328
	// Line 5351, Address: 0x10e930, Func Offset: 0x2330
	// Line 5352, Address: 0x10e940, Func Offset: 0x2340
	// Line 5354, Address: 0x10e970, Func Offset: 0x2370
	// Line 5355, Address: 0x10e974, Func Offset: 0x2374
	// Line 5356, Address: 0x10e978, Func Offset: 0x2378
	// Line 5358, Address: 0x10e980, Func Offset: 0x2380
	// Line 5359, Address: 0x10e984, Func Offset: 0x2384
	// Line 5361, Address: 0x10e9ac, Func Offset: 0x23ac
	// Line 5363, Address: 0x10e9b4, Func Offset: 0x23b4
	// Line 5364, Address: 0x10e9b8, Func Offset: 0x23b8
	// Line 5368, Address: 0x10e9e4, Func Offset: 0x23e4
	// Line 5369, Address: 0x10e9f0, Func Offset: 0x23f0
	// Line 5370, Address: 0x10ea04, Func Offset: 0x2404
	// Line 5371, Address: 0x10ea0c, Func Offset: 0x240c
	// Line 5373, Address: 0x10ea1c, Func Offset: 0x241c
	// Line 5374, Address: 0x10ea38, Func Offset: 0x2438
	// Line 5375, Address: 0x10ea40, Func Offset: 0x2440
	// Line 5376, Address: 0x10ea48, Func Offset: 0x2448
	// Line 5377, Address: 0x10ea58, Func Offset: 0x2458
	// Line 5378, Address: 0x10ea68, Func Offset: 0x2468
	// Line 5379, Address: 0x10ea6c, Func Offset: 0x246c
	// Line 5380, Address: 0x10ea74, Func Offset: 0x2474
	// Line 5381, Address: 0x10ea78, Func Offset: 0x2478
	// Line 5386, Address: 0x10ea8c, Func Offset: 0x248c
	// Line 5387, Address: 0x10ea98, Func Offset: 0x2498
	// Line 5388, Address: 0x10eab4, Func Offset: 0x24b4
	// Line 5389, Address: 0x10eabc, Func Offset: 0x24bc
	// Line 5390, Address: 0x10eacc, Func Offset: 0x24cc
	// Line 5393, Address: 0x10eafc, Func Offset: 0x24fc
	// Line 5398, Address: 0x10eb10, Func Offset: 0x2510
	// Line 5399, Address: 0x10eb20, Func Offset: 0x2520
	// Line 5406, Address: 0x10eb34, Func Offset: 0x2534
	// Line 5407, Address: 0x10eb50, Func Offset: 0x2550
	// Line 5409, Address: 0x10eb64, Func Offset: 0x2564
	// Line 5410, Address: 0x10eb74, Func Offset: 0x2574
	// Line 5413, Address: 0x10eb88, Func Offset: 0x2588
	// Line 5415, Address: 0x10eb98, Func Offset: 0x2598
	// Line 5416, Address: 0x10ebac, Func Offset: 0x25ac
	// Line 5417, Address: 0x10ebb8, Func Offset: 0x25b8
	// Line 5418, Address: 0x10ebc0, Func Offset: 0x25c0
	// Line 5422, Address: 0x10ebd4, Func Offset: 0x25d4
	// Line 5423, Address: 0x10ebdc, Func Offset: 0x25dc
	// Line 5424, Address: 0x10ebe4, Func Offset: 0x25e4
	// Func End, Address: 0x10ec04, Func Offset: 0x2604
}

// 
// Start address: 0x10ec10
void PlayerCheckAnime()
{
	// Line 5430, Address: 0x10ec10, Func Offset: 0
	// Line 5432, Address: 0x10ec18, Func Offset: 0x8
	// Line 5433, Address: 0x10ec20, Func Offset: 0x10
	// Line 5434, Address: 0x10ec28, Func Offset: 0x18
	// Func End, Address: 0x10ec38, Func Offset: 0x28
}

// 
// Start address: 0x10ec40
void BoatPlayerCheckAnime()
{
	_AnimeInfo* aip;
	SubCharacterDisp* scp_d;
	// Line 5460, Address: 0x10ec40, Func Offset: 0
	// Line 5461, Address: 0x10ec50, Func Offset: 0x10
	// Line 5465, Address: 0x10ec58, Func Offset: 0x18
	// Line 5466, Address: 0x10ec68, Func Offset: 0x28
	// Line 5468, Address: 0x10ec98, Func Offset: 0x58
	// Line 5469, Address: 0x10eca8, Func Offset: 0x68
	// Line 5471, Address: 0x10ecb0, Func Offset: 0x70
	// Line 5472, Address: 0x10ecc0, Func Offset: 0x80
	// Line 5474, Address: 0x10ecc8, Func Offset: 0x88
	// Line 5477, Address: 0x10ecd8, Func Offset: 0x98
	// Line 5478, Address: 0x10ecec, Func Offset: 0xac
	// Line 5479, Address: 0x10ed00, Func Offset: 0xc0
	// Line 5480, Address: 0x10ed14, Func Offset: 0xd4
	// Line 5481, Address: 0x10ed28, Func Offset: 0xe8
	// Line 5482, Address: 0x10ed3c, Func Offset: 0xfc
	// Line 5484, Address: 0x10ed50, Func Offset: 0x110
	// Line 5485, Address: 0x10ed60, Func Offset: 0x120
	// Line 5486, Address: 0x10ed74, Func Offset: 0x134
	// Line 5487, Address: 0x10ed88, Func Offset: 0x148
	// Line 5489, Address: 0x10ed90, Func Offset: 0x150
	// Line 5490, Address: 0x10eda8, Func Offset: 0x168
	// Line 5492, Address: 0x10edc0, Func Offset: 0x180
	// Func End, Address: 0x10edd8, Func Offset: 0x198
}

// 
// Start address: 0x10ede0
void SubCharacter::PlayerFunction()
{
	float rot[4];
	float pos[4];
	_AnimeInfo* aip;
	// Line 6476, Address: 0x10ede0, Func Offset: 0
	// Line 6493, Address: 0x10edf0, Func Offset: 0x10
	// Line 6500, Address: 0x10ee1c, Func Offset: 0x3c
	// Line 6501, Address: 0x10ee28, Func Offset: 0x48
	// Line 6503, Address: 0x10ee34, Func Offset: 0x54
	// Line 6506, Address: 0x10ee3c, Func Offset: 0x5c
	// Line 6507, Address: 0x10ee50, Func Offset: 0x70
	// Line 6508, Address: 0x10ee5c, Func Offset: 0x7c
	// Line 6509, Address: 0x10ee68, Func Offset: 0x88
	// Line 6510, Address: 0x10ee70, Func Offset: 0x90
	// Line 6512, Address: 0x10ee78, Func Offset: 0x98
	// Line 6513, Address: 0x10ee80, Func Offset: 0xa0
	// Line 6514, Address: 0x10ee8c, Func Offset: 0xac
	// Line 6515, Address: 0x10ee94, Func Offset: 0xb4
	// Line 6516, Address: 0x10ee9c, Func Offset: 0xbc
	// Line 6519, Address: 0x10eea4, Func Offset: 0xc4
	// Line 6521, Address: 0x10eeb4, Func Offset: 0xd4
	// Line 6522, Address: 0x10eec0, Func Offset: 0xe0
	// Line 6523, Address: 0x10eecc, Func Offset: 0xec
	// Line 6525, Address: 0x10eee0, Func Offset: 0x100
	// Line 6528, Address: 0x10eef0, Func Offset: 0x110
	// Line 6530, Address: 0x10eefc, Func Offset: 0x11c
	// Line 6532, Address: 0x10ef08, Func Offset: 0x128
	// Line 6538, Address: 0x10ef10, Func Offset: 0x130
	// Line 6543, Address: 0x10ef20, Func Offset: 0x140
	// Line 6545, Address: 0x10ef2c, Func Offset: 0x14c
	// Line 6546, Address: 0x10ef34, Func Offset: 0x154
	// Line 6547, Address: 0x10ef3c, Func Offset: 0x15c
	// Line 6556, Address: 0x10ef44, Func Offset: 0x164
	// Line 6559, Address: 0x10ef4c, Func Offset: 0x16c
	// Line 6562, Address: 0x10ef58, Func Offset: 0x178
	// Line 6570, Address: 0x10ef64, Func Offset: 0x184
	// Line 6583, Address: 0x10ef90, Func Offset: 0x1b0
	// Line 6597, Address: 0x10ef98, Func Offset: 0x1b8
	// Line 6603, Address: 0x10efa0, Func Offset: 0x1c0
	// Line 6606, Address: 0x10efc4, Func Offset: 0x1e4
	// Line 6607, Address: 0x10efd0, Func Offset: 0x1f0
	// Line 6610, Address: 0x10efd8, Func Offset: 0x1f8
	// Line 6617, Address: 0x10efe4, Func Offset: 0x204
	// Line 6620, Address: 0x10efec, Func Offset: 0x20c
	// Line 6624, Address: 0x10eff4, Func Offset: 0x214
	// Line 6626, Address: 0x10f018, Func Offset: 0x238
	// Line 6627, Address: 0x10f024, Func Offset: 0x244
	// Line 6629, Address: 0x10f02c, Func Offset: 0x24c
	// Line 6639, Address: 0x10f038, Func Offset: 0x258
	// Line 6642, Address: 0x10f04c, Func Offset: 0x26c
	// Line 6645, Address: 0x10f058, Func Offset: 0x278
	// Line 6648, Address: 0x10f060, Func Offset: 0x280
	// Line 6651, Address: 0x10f068, Func Offset: 0x288
	// Line 6674, Address: 0x10f070, Func Offset: 0x290
	// Func End, Address: 0x10f084, Func Offset: 0x2a4
}

// 
// Start address: 0x10f090
void shGetJamesLightPos(float* pos, float* vec)
{
	// Line 6685, Address: 0x10f090, Func Offset: 0
	// Line 6686, Address: 0x10f0a0, Func Offset: 0x10
	// Line 6687, Address: 0x10f0b0, Func Offset: 0x20
	// Func End, Address: 0x10f0b8, Func Offset: 0x28
}

// 
// Start address: 0x10f0c0
void shGetJamesLightPosOriginal(float* pos, float* vec)
{
	// Line 6690, Address: 0x10f0c0, Func Offset: 0
	// Line 6691, Address: 0x10f0d0, Func Offset: 0x10
	// Line 6692, Address: 0x10f0e0, Func Offset: 0x20
	// Func End, Address: 0x10f0e8, Func Offset: 0x28
}

// 
// Start address: 0x10f0f0
void shGetJamesLightPos_Calc_Chest()
{
	float pos_z;
	float pos_x;
	float vec[4];
	float mat[4][4];
	float mat[4][4];
	float m[4][4];
	float neck[4];
	int i1;
	_anon4 pos1;
	_anon4 pos0;
	_anon0 light_mat;
	_anon0 lw_mat;
	shSkelton* top;
	SubCharacter* p;
	// Line 6710, Address: 0x10f0f0, Func Offset: 0
	// Line 6721, Address: 0x10f108, Func Offset: 0x18
	// Line 6722, Address: 0x10f120, Func Offset: 0x30
	// Line 6723, Address: 0x10f134, Func Offset: 0x44
	// Line 6724, Address: 0x10f150, Func Offset: 0x60
	// Line 6729, Address: 0x10f164, Func Offset: 0x74
	// Line 6730, Address: 0x10f16c, Func Offset: 0x7c
	// Line 6731, Address: 0x10f170, Func Offset: 0x80
	// Line 6734, Address: 0x10f1a0, Func Offset: 0xb0
	// Line 6735, Address: 0x10f1ac, Func Offset: 0xbc
	// Line 6736, Address: 0x10f1b0, Func Offset: 0xc0
	// Line 6739, Address: 0x10f1cc, Func Offset: 0xdc
	// Line 6740, Address: 0x10f1fc, Func Offset: 0x10c
	// Line 6741, Address: 0x10f208, Func Offset: 0x118
	// Line 6748, Address: 0x10f210, Func Offset: 0x120
	// Line 6749, Address: 0x10f21c, Func Offset: 0x12c
	// Line 6750, Address: 0x10f228, Func Offset: 0x138
	// Line 6751, Address: 0x10f234, Func Offset: 0x144
	// Line 6754, Address: 0x10f238, Func Offset: 0x148
	// Line 6757, Address: 0x10f24c, Func Offset: 0x15c
	// Line 6758, Address: 0x10f25c, Func Offset: 0x16c
	// Line 6759, Address: 0x10f26c, Func Offset: 0x17c
	// Line 6760, Address: 0x10f27c, Func Offset: 0x18c
	// Line 6763, Address: 0x10f284, Func Offset: 0x194
	// Line 6770, Address: 0x10f29c, Func Offset: 0x1ac
	// Line 6771, Address: 0x10f2a4, Func Offset: 0x1b4
	// Line 6772, Address: 0x10f2ac, Func Offset: 0x1bc
	// Line 6773, Address: 0x10f2b8, Func Offset: 0x1c8
	// Line 6776, Address: 0x10f2bc, Func Offset: 0x1cc
	// Line 6779, Address: 0x10f2d0, Func Offset: 0x1e0
	// Line 6780, Address: 0x10f2e0, Func Offset: 0x1f0
	// Line 6781, Address: 0x10f2f0, Func Offset: 0x200
	// Line 6782, Address: 0x10f300, Func Offset: 0x210
	// Line 6784, Address: 0x10f308, Func Offset: 0x218
	// Line 6786, Address: 0x10f31c, Func Offset: 0x22c
	// Line 6788, Address: 0x10f32c, Func Offset: 0x23c
	// Line 6789, Address: 0x10f340, Func Offset: 0x250
	// Line 6790, Address: 0x10f350, Func Offset: 0x260
	// Line 6791, Address: 0x10f358, Func Offset: 0x268
	// Line 6792, Address: 0x10f360, Func Offset: 0x270
	// Line 6796, Address: 0x10f368, Func Offset: 0x278
	// Line 6802, Address: 0x10f3a0, Func Offset: 0x2b0
	// Line 6810, Address: 0x10f3d8, Func Offset: 0x2e8
	// Line 6813, Address: 0x10f3ec, Func Offset: 0x2fc
	// Line 6814, Address: 0x10f3fc, Func Offset: 0x30c
	// Line 6815, Address: 0x10f408, Func Offset: 0x318
	// Line 6816, Address: 0x10f430, Func Offset: 0x340
	// Line 6817, Address: 0x10f468, Func Offset: 0x378
	// Line 6821, Address: 0x10f4a4, Func Offset: 0x3b4
	// Line 6823, Address: 0x10f4c0, Func Offset: 0x3d0
	// Line 6824, Address: 0x10f4dc, Func Offset: 0x3ec
	// Line 6825, Address: 0x10f4f8, Func Offset: 0x408
	// Line 6828, Address: 0x10f514, Func Offset: 0x424
	// Line 6843, Address: 0x10f52c, Func Offset: 0x43c
	// Line 6844, Address: 0x10f53c, Func Offset: 0x44c
	// Line 6845, Address: 0x10f554, Func Offset: 0x464
	// Line 6846, Address: 0x10f55c, Func Offset: 0x46c
	// Line 6847, Address: 0x10f570, Func Offset: 0x480
	// Line 6848, Address: 0x10f578, Func Offset: 0x488
	// Line 6849, Address: 0x10f588, Func Offset: 0x498
	// Line 6850, Address: 0x10f598, Func Offset: 0x4a8
	// Line 6852, Address: 0x10f5a8, Func Offset: 0x4b8
	// Line 6854, Address: 0x10f5b4, Func Offset: 0x4c4
	// Line 6855, Address: 0x10f5b8, Func Offset: 0x4c8
	// Line 6857, Address: 0x10f5dc, Func Offset: 0x4ec
	// Line 6859, Address: 0x10f61c, Func Offset: 0x52c
	// Line 6861, Address: 0x10f65c, Func Offset: 0x56c
	// Line 6862, Address: 0x10f694, Func Offset: 0x5a4
	// Line 6865, Address: 0x10f6a0, Func Offset: 0x5b0
	// Line 6866, Address: 0x10f6b4, Func Offset: 0x5c4
	// Line 6867, Address: 0x10f6d8, Func Offset: 0x5e8
	// Line 6868, Address: 0x10f6f4, Func Offset: 0x604
	// Line 6869, Address: 0x10f6fc, Func Offset: 0x60c
	// Line 6870, Address: 0x10f720, Func Offset: 0x630
	// Line 6872, Address: 0x10f73c, Func Offset: 0x64c
	// Line 6874, Address: 0x10f798, Func Offset: 0x6a8
	// Line 6876, Address: 0x10f7c8, Func Offset: 0x6d8
	// Line 6879, Address: 0x10f7f0, Func Offset: 0x700
	// Line 6881, Address: 0x10f818, Func Offset: 0x728
	// Line 6885, Address: 0x10f820, Func Offset: 0x730
	// Func End, Address: 0x10f840, Func Offset: 0x750
}

// 
// Start address: 0x10f840
void shGetJamesLightPos_Calc_Hand()
{
	float zp;
	float yp;
	float xp;
	int pad;
	float j_light_vec[4];
	_anon4 pos1;
	_anon4 pos0;
	_anon0 light_mat;
	_anon0 lw_mat;
	shSkelton* top;
	SubCharacter* p;
	float zv;
	float yv;
	float xv;
	// Line 6888, Address: 0x10f840, Func Offset: 0
	// Line 6896, Address: 0x10f858, Func Offset: 0x18
	// Line 6897, Address: 0x10f86c, Func Offset: 0x2c
	// Line 6904, Address: 0x10f874, Func Offset: 0x34
	// Line 6905, Address: 0x10f87c, Func Offset: 0x3c
	// Line 6906, Address: 0x10f880, Func Offset: 0x40
	// Line 6933, Address: 0x10f888, Func Offset: 0x48
	// Line 6934, Address: 0x10f898, Func Offset: 0x58
	// Line 6936, Address: 0x10f8b0, Func Offset: 0x70
	// Line 6940, Address: 0x10f8b8, Func Offset: 0x78
	// Line 6941, Address: 0x10f8bc, Func Offset: 0x7c
	// Line 6945, Address: 0x10f8ec, Func Offset: 0xac
	// Line 6946, Address: 0x10f91c, Func Offset: 0xdc
	// Line 6947, Address: 0x10f928, Func Offset: 0xe8
	// Line 6954, Address: 0x10f930, Func Offset: 0xf0
	// Line 6955, Address: 0x10f934, Func Offset: 0xf4
	// Line 6956, Address: 0x10f938, Func Offset: 0xf8
	// Line 6957, Address: 0x10f93c, Func Offset: 0xfc
	// Line 6960, Address: 0x10f940, Func Offset: 0x100
	// Line 6963, Address: 0x10f954, Func Offset: 0x114
	// Line 6964, Address: 0x10f964, Func Offset: 0x124
	// Line 6965, Address: 0x10f974, Func Offset: 0x134
	// Line 6966, Address: 0x10f984, Func Offset: 0x144
	// Line 6969, Address: 0x10f98c, Func Offset: 0x14c
	// Line 6976, Address: 0x10f9a4, Func Offset: 0x164
	// Line 6977, Address: 0x10f9b0, Func Offset: 0x170
	// Line 6978, Address: 0x10f9bc, Func Offset: 0x17c
	// Line 6979, Address: 0x10f9c8, Func Offset: 0x188
	// Line 6982, Address: 0x10f9cc, Func Offset: 0x18c
	// Line 6985, Address: 0x10f9e0, Func Offset: 0x1a0
	// Line 6986, Address: 0x10f9f0, Func Offset: 0x1b0
	// Line 6987, Address: 0x10fa00, Func Offset: 0x1c0
	// Line 6988, Address: 0x10fa10, Func Offset: 0x1d0
	// Line 6990, Address: 0x10fa18, Func Offset: 0x1d8
	// Line 6995, Address: 0x10fa2c, Func Offset: 0x1ec
	// Line 6997, Address: 0x10fa48, Func Offset: 0x208
	// Line 6998, Address: 0x10fa64, Func Offset: 0x224
	// Line 6999, Address: 0x10fa80, Func Offset: 0x240
	// Line 7002, Address: 0x10fa9c, Func Offset: 0x25c
	// Line 7004, Address: 0x10fab4, Func Offset: 0x274
	// Func End, Address: 0x10fad4, Func Offset: 0x294
}

// 
// Start address: 0x10fae0
void shGetJamesLightPos_Calc()
{
	// Line 7007, Address: 0x10fae0, Func Offset: 0
	// Line 7008, Address: 0x10fae8, Func Offset: 0x8
	// Line 7009, Address: 0x10fb00, Func Offset: 0x20
	// Line 7010, Address: 0x10fb08, Func Offset: 0x28
	// Line 7011, Address: 0x10fb10, Func Offset: 0x30
	// Line 7013, Address: 0x10fb18, Func Offset: 0x38
	// Func End, Address: 0x10fb28, Func Offset: 0x48
}

// 
// Start address: 0x10fb30
void GetPlayerPartsMatrixForCameraCtrl(float mat[4], unsigned int parts_name)
{
	shSkelton* sk;
	int i1;
	// Line 7023, Address: 0x10fb30, Func Offset: 0
	// Line 7027, Address: 0x10fb38, Func Offset: 0x8
	// Line 7028, Address: 0x10fb44, Func Offset: 0x14
	// Line 7029, Address: 0x10fb50, Func Offset: 0x20
	// Line 7031, Address: 0x10fb6c, Func Offset: 0x3c
	// Line 7036, Address: 0x10fb7c, Func Offset: 0x4c
	// Func End, Address: 0x10fb8c, Func Offset: 0x5c
}

// 
// Start address: 0x10fb90
void GetPlayerPartsWorldMatrix(float mat[4], unsigned int parts_name)
{
	// Line 7042, Address: 0x10fb90, Func Offset: 0
	// Line 7043, Address: 0x10fb98, Func Offset: 0x8
	// Line 7044, Address: 0x10fba0, Func Offset: 0x10
	// Func End, Address: 0x10fbb0, Func Offset: 0x20
}

// 
// Start address: 0x10fbb0
void GetPlayerPartsLocalMatrix(_anon0* dest, int parts_name)
{
	shSkelton* sk;
	SubCharacter* p;
	int i1;
	// Line 7050, Address: 0x10fbb0, Func Offset: 0
	// Line 7056, Address: 0x10fbc8, Func Offset: 0x18
	// Line 7057, Address: 0x10fbe0, Func Offset: 0x30
	// Line 7058, Address: 0x10fbf4, Func Offset: 0x44
	// Line 7059, Address: 0x10fc10, Func Offset: 0x60
	// Line 7069, Address: 0x10fc24, Func Offset: 0x74
	// Line 7071, Address: 0x10fc2c, Func Offset: 0x7c
	// Line 7072, Address: 0x10fc30, Func Offset: 0x80
	// Line 7073, Address: 0x10fc3c, Func Offset: 0x8c
	// Line 7075, Address: 0x10fc5c, Func Offset: 0xac
	// Line 7076, Address: 0x10fc88, Func Offset: 0xd8
	// Func End, Address: 0x10fca0, Func Offset: 0xf0
}

// 
// Start address: 0x10fca0
shCharaInfo* GetPlayerInfoForCameraCtrl()
{
	// Line 7106, Address: 0x10fca0, Func Offset: 0
	// Line 7107, Address: 0x10fcac, Func Offset: 0xc
	// Func End, Address: 0x10fcb4, Func Offset: 0x14
}

// 
// Start address: 0x10fcc0
void shCharacterPlayerWorkInitAtPowerOn()
{
	// Line 7119, Address: 0x10fcc0, Func Offset: 0
	// Line 7120, Address: 0x10fcc8, Func Offset: 0x8
	// Line 7121, Address: 0x10fcdc, Func Offset: 0x1c
	// Func End, Address: 0x10fcec, Func Offset: 0x2c
}

// 
// Start address: 0x10fcf0
void shCharacterPlayerWorkInitAtGameStart()
{
	// Line 7134, Address: 0x10fcf0, Func Offset: 0
	// Line 7153, Address: 0x10fcf8, Func Offset: 0x8
	// Line 7156, Address: 0x10fd34, Func Offset: 0x44
	// Line 7158, Address: 0x10fd48, Func Offset: 0x58
	// Line 7161, Address: 0x10fd50, Func Offset: 0x60
	// Line 7168, Address: 0x10fd64, Func Offset: 0x74
	// Line 7169, Address: 0x10fd70, Func Offset: 0x80
	// Line 7170, Address: 0x10fd7c, Func Offset: 0x8c
	// Line 7171, Address: 0x10fd88, Func Offset: 0x98
	// Line 7176, Address: 0x10fd94, Func Offset: 0xa4
	// Line 7177, Address: 0x10fda0, Func Offset: 0xb0
	// Line 7180, Address: 0x10fdb4, Func Offset: 0xc4
	// Line 7181, Address: 0x10fdbc, Func Offset: 0xcc
	// Line 7182, Address: 0x10fdc4, Func Offset: 0xd4
	// Line 7183, Address: 0x10fdcc, Func Offset: 0xdc
	// Line 7184, Address: 0x10fdd8, Func Offset: 0xe8
	// Line 7185, Address: 0x10fde0, Func Offset: 0xf0
	// Line 7186, Address: 0x10fde8, Func Offset: 0xf8
	// Line 7187, Address: 0x10fdf0, Func Offset: 0x100
	// Line 7189, Address: 0x10fdf8, Func Offset: 0x108
	// Line 7190, Address: 0x10fe0c, Func Offset: 0x11c
	// Line 7194, Address: 0x10fe20, Func Offset: 0x130
	// Line 7195, Address: 0x10fe34, Func Offset: 0x144
	// Line 7197, Address: 0x10fe48, Func Offset: 0x158
	// Line 7198, Address: 0x10fe5c, Func Offset: 0x16c
	// Line 7200, Address: 0x10fe70, Func Offset: 0x180
	// Func End, Address: 0x10fe80, Func Offset: 0x190
}

// 
// Start address: 0x10fe80
void shCharacterSetPlayerLow(SubCharacter* scp)
{
	// Line 7219, Address: 0x10fe80, Func Offset: 0
	// Line 7220, Address: 0x10fe90, Func Offset: 0x10
	// Line 7221, Address: 0x10fea0, Func Offset: 0x20
	// Line 7224, Address: 0x10fea8, Func Offset: 0x28
	// Line 7225, Address: 0x10febc, Func Offset: 0x3c
	// Line 7230, Address: 0x10fed0, Func Offset: 0x50
	// Func End, Address: 0x10fee4, Func Offset: 0x64
}

// 
// Start address: 0x10fef0
void PlayerGetTargetInfo()
{
	// Line 7252, Address: 0x10fef0, Func Offset: 0
	// Line 7256, Address: 0x10fef8, Func Offset: 0x8
	// Line 7259, Address: 0x10ff10, Func Offset: 0x20
	// Line 7274, Address: 0x10ff20, Func Offset: 0x30
	// Line 7279, Address: 0x10ff3c, Func Offset: 0x4c
	// Line 7280, Address: 0x10ff4c, Func Offset: 0x5c
	// Line 7281, Address: 0x10ff6c, Func Offset: 0x7c
	// Line 7286, Address: 0x10ff74, Func Offset: 0x84
	// Line 7287, Address: 0x10ff8c, Func Offset: 0x9c
	// Func End, Address: 0x10ff9c, Func Offset: 0xac
}

// 
// Start address: 0x10ffa0
void PlayerGetTarget()
{
	// Line 7295, Address: 0x10ffa0, Func Offset: 0
	// Line 7296, Address: 0x10ffa8, Func Offset: 0x8
	// Line 7297, Address: 0x10ffb8, Func Offset: 0x18
	// Line 7298, Address: 0x10ffc8, Func Offset: 0x28
	// Line 7300, Address: 0x10ffe0, Func Offset: 0x40
	// Func End, Address: 0x10fff0, Func Offset: 0x50
}

// 
// Start address: 0x10fff0
void PlayerChangeTarget(int key)
{
	// Line 7309, Address: 0x10fff0, Func Offset: 0
	// Line 7310, Address: 0x10fffc, Func Offset: 0xc
	// Line 7311, Address: 0x11000c, Func Offset: 0x1c
	// Line 7314, Address: 0x110034, Func Offset: 0x44
	// Line 7315, Address: 0x110044, Func Offset: 0x54
	// Line 7317, Address: 0x11005c, Func Offset: 0x6c
	// Func End, Address: 0x11006c, Func Offset: 0x7c
}

// 
// Start address: 0x110070
void PlayerCheckHuggingAttack()
{
	float hurihodoki_timer[5][5];
	int status;
	// Line 7329, Address: 0x110070, Func Offset: 0
	// Line 7333, Address: 0x110078, Func Offset: 0x8
	// Line 7343, Address: 0x1100b4, Func Offset: 0x44
	// Line 7345, Address: 0x110104, Func Offset: 0x94
	// Line 7346, Address: 0x110108, Func Offset: 0x98
	// Line 7348, Address: 0x110110, Func Offset: 0xa0
	// Line 7349, Address: 0x110114, Func Offset: 0xa4
	// Line 7351, Address: 0x11011c, Func Offset: 0xac
	// Line 7352, Address: 0x110120, Func Offset: 0xb0
	// Line 7354, Address: 0x110128, Func Offset: 0xb8
	// Line 7355, Address: 0x11012c, Func Offset: 0xbc
	// Line 7357, Address: 0x110134, Func Offset: 0xc4
	// Line 7358, Address: 0x110138, Func Offset: 0xc8
	// Line 7360, Address: 0x110140, Func Offset: 0xd0
	// Line 7363, Address: 0x110148, Func Offset: 0xd8
	// Line 7365, Address: 0x110154, Func Offset: 0xe4
	// Line 7367, Address: 0x11018c, Func Offset: 0x11c
	// Line 7369, Address: 0x1101b4, Func Offset: 0x144
	// Func End, Address: 0x1101c4, Func Offset: 0x154
}

// 
// Start address: 0x1101d0
int PlayerChectGuardSuccess()
{
	int guard_success;
	int ac_level;
	float roty;
	// Line 7381, Address: 0x1101d0, Func Offset: 0
	// Line 7384, Address: 0x1101e0, Func Offset: 0x10
	// Line 7388, Address: 0x1101e4, Func Offset: 0x14
	// Line 7389, Address: 0x1101f4, Func Offset: 0x24
	// Line 7390, Address: 0x1101fc, Func Offset: 0x2c
	// Line 7393, Address: 0x110208, Func Offset: 0x38
	// Line 7396, Address: 0x110244, Func Offset: 0x74
	// Line 7397, Address: 0x110248, Func Offset: 0x78
	// Line 7400, Address: 0x110250, Func Offset: 0x80
	// Line 7408, Address: 0x110254, Func Offset: 0x84
	// Line 7410, Address: 0x110274, Func Offset: 0xa4
	// Line 7411, Address: 0x1102a0, Func Offset: 0xd0
	// Line 7413, Address: 0x1102b4, Func Offset: 0xe4
	// Line 7414, Address: 0x1102bc, Func Offset: 0xec
	// Line 7416, Address: 0x1102c4, Func Offset: 0xf4
	// Line 7417, Address: 0x1102d4, Func Offset: 0x104
	// Line 7418, Address: 0x1102f0, Func Offset: 0x120
	// Line 7419, Address: 0x1102f8, Func Offset: 0x128
	// Line 7420, Address: 0x110300, Func Offset: 0x130
	// Line 7421, Address: 0x11031c, Func Offset: 0x14c
	// Line 7429, Address: 0x110328, Func Offset: 0x158
	// Line 7431, Address: 0x11033c, Func Offset: 0x16c
	// Line 7433, Address: 0x11034c, Func Offset: 0x17c
	// Line 7435, Address: 0x11036c, Func Offset: 0x19c
	// Line 7437, Address: 0x110408, Func Offset: 0x238
	// Line 7439, Address: 0x110428, Func Offset: 0x258
	// Line 7440, Address: 0x11042c, Func Offset: 0x25c
	// Line 7442, Address: 0x110434, Func Offset: 0x264
	// Line 7445, Address: 0x110438, Func Offset: 0x268
	// Line 7453, Address: 0x110440, Func Offset: 0x270
	// Line 7461, Address: 0x110444, Func Offset: 0x274
	// Line 7462, Address: 0x11044c, Func Offset: 0x27c
	// Line 7463, Address: 0x110464, Func Offset: 0x294
	// Line 7464, Address: 0x1104dc, Func Offset: 0x30c
	// Line 7466, Address: 0x110500, Func Offset: 0x330
	// Line 7469, Address: 0x11050c, Func Offset: 0x33c
	// Line 7470, Address: 0x110510, Func Offset: 0x340
	// Func End, Address: 0x110528, Func Offset: 0x358
}

// 
// Start address: 0x110530
void PlayerRequestAttack(shPlayerWork* w, int num)
{
	unsigned char atk1;
	unsigned char atk2;
	unsigned char attack;
	// Line 7483, Address: 0x110530, Func Offset: 0
	// Line 7487, Address: 0x110538, Func Offset: 0x8
	// Line 7488, Address: 0x11053c, Func Offset: 0xc
	// Line 7489, Address: 0x110540, Func Offset: 0x10
	// Line 7491, Address: 0x110550, Func Offset: 0x20
	// Line 7492, Address: 0x110564, Func Offset: 0x34
	// Line 7493, Address: 0x11056c, Func Offset: 0x3c
	// Line 7495, Address: 0x110598, Func Offset: 0x68
	// Line 7499, Address: 0x1105bc, Func Offset: 0x8c
	// Line 7500, Address: 0x1105dc, Func Offset: 0xac
	// Line 7505, Address: 0x1105e4, Func Offset: 0xb4
	// Line 7507, Address: 0x110604, Func Offset: 0xd4
	// Line 7508, Address: 0x11060c, Func Offset: 0xdc
	// Line 7510, Address: 0x110620, Func Offset: 0xf0
	// Line 7511, Address: 0x110628, Func Offset: 0xf8
	// Line 7513, Address: 0x110630, Func Offset: 0x100
	// Line 7517, Address: 0x110638, Func Offset: 0x108
	// Line 7518, Address: 0x110658, Func Offset: 0x128
	// Line 7523, Address: 0x110660, Func Offset: 0x130
	// Line 7526, Address: 0x11069c, Func Offset: 0x16c
	// Line 7527, Address: 0x1106a4, Func Offset: 0x174
	// Line 7529, Address: 0x1106ac, Func Offset: 0x17c
	// Line 7531, Address: 0x1106b4, Func Offset: 0x184
	// Line 7532, Address: 0x1106bc, Func Offset: 0x18c
	// Line 7535, Address: 0x1106c4, Func Offset: 0x194
	// Line 7536, Address: 0x1106d0, Func Offset: 0x1a0
	// Line 7537, Address: 0x1106d8, Func Offset: 0x1a8
	// Line 7538, Address: 0x1106e0, Func Offset: 0x1b0
	// Line 7541, Address: 0x110714, Func Offset: 0x1e4
	// Line 7543, Address: 0x11071c, Func Offset: 0x1ec
	// Line 7545, Address: 0x110740, Func Offset: 0x210
	// Line 7548, Address: 0x110748, Func Offset: 0x218
	// Line 7550, Address: 0x11077c, Func Offset: 0x24c
	// Line 7551, Address: 0x110784, Func Offset: 0x254
	// Line 7552, Address: 0x11078c, Func Offset: 0x25c
	// Line 7559, Address: 0x1107b0, Func Offset: 0x280
	// Line 7561, Address: 0x1107b8, Func Offset: 0x288
	// Line 7562, Address: 0x1107c8, Func Offset: 0x298
	// Line 7563, Address: 0x1107d0, Func Offset: 0x2a0
	// Line 7564, Address: 0x1107d8, Func Offset: 0x2a8
	// Line 7571, Address: 0x11080c, Func Offset: 0x2dc
	// Func End, Address: 0x11081c, Func Offset: 0x2ec
}

// 
// Start address: 0x110820
void PlayerRequestAttackFinish(shPlayerWork* w)
{
	unsigned char atk1;
	unsigned char atk2;
	unsigned char attack;
	// Line 7582, Address: 0x110820, Func Offset: 0
	// Line 7583, Address: 0x110824, Func Offset: 0x4
	// Line 7584, Address: 0x110828, Func Offset: 0x8
	// Line 7586, Address: 0x110840, Func Offset: 0x20
	// Line 7587, Address: 0x110848, Func Offset: 0x28
	// Line 7588, Address: 0x110854, Func Offset: 0x34
	// Line 7589, Address: 0x110864, Func Offset: 0x44
	// Line 7590, Address: 0x11086c, Func Offset: 0x4c
	// Line 7591, Address: 0x110874, Func Offset: 0x54
	// Line 7595, Address: 0x11087c, Func Offset: 0x5c
	// Func End, Address: 0x110884, Func Offset: 0x64
}

// 
// Start address: 0x110890
void SubCharacter::PlayerCheckStraightLine(float spd_roty)
{
	float wall[4];
	float me[4];
	float roty;
	float ep[4];
	float sp[4];
	// Line 7604, Address: 0x110890, Func Offset: 0
	// Line 7612, Address: 0x1108a4, Func Offset: 0x14
	// Line 7613, Address: 0x1108ac, Func Offset: 0x1c
	// Line 7617, Address: 0x1108b4, Func Offset: 0x24
	// Line 7618, Address: 0x1108c4, Func Offset: 0x34
	// Line 7620, Address: 0x1108d4, Func Offset: 0x44
	// Line 7622, Address: 0x1108d8, Func Offset: 0x48
	// Line 7624, Address: 0x1108e0, Func Offset: 0x50
	// Line 7625, Address: 0x110908, Func Offset: 0x78
	// Line 7628, Address: 0x110930, Func Offset: 0xa0
	// Line 7629, Address: 0x11093c, Func Offset: 0xac
	// Line 7632, Address: 0x110958, Func Offset: 0xc8
	// Line 7636, Address: 0x110970, Func Offset: 0xe0
	// Line 7640, Address: 0x1109d0, Func Offset: 0x140
	// Line 7642, Address: 0x1109f0, Func Offset: 0x160
	// Line 7646, Address: 0x110a10, Func Offset: 0x180
	// Line 7647, Address: 0x110a20, Func Offset: 0x190
	// Line 7648, Address: 0x110a30, Func Offset: 0x1a0
	// Line 7649, Address: 0x110a40, Func Offset: 0x1b0
	// Line 7650, Address: 0x110a48, Func Offset: 0x1b8
	// Line 7651, Address: 0x110a5c, Func Offset: 0x1cc
	// Line 7652, Address: 0x110a80, Func Offset: 0x1f0
	// Line 7654, Address: 0x110aa0, Func Offset: 0x210
	// Line 7674, Address: 0x110acc, Func Offset: 0x23c
	// Line 7676, Address: 0x110b04, Func Offset: 0x274
	// Line 7677, Address: 0x110b20, Func Offset: 0x290
	// Line 7679, Address: 0x110b2c, Func Offset: 0x29c
	// Line 7684, Address: 0x110b40, Func Offset: 0x2b0
	// Func End, Address: 0x110b58, Func Offset: 0x2c8
}

// 
// Start address: 0x110b60
void shGetJamesFootPos(float* pos, float* vec, int kind)
{
	float wep_range_test[4][2];
	int sk_num;
	int i;
	shSkelton* stp;
	_anon0 mat;
	_anon0 lw_mat;
	float vec0[4];
	float pos1[4];
	float pos0[4];
	// Line 7700, Address: 0x110b60, Func Offset: 0
	// Line 7706, Address: 0x110b84, Func Offset: 0x24
	// Line 7731, Address: 0x110ba0, Func Offset: 0x40
	// Line 7732, Address: 0x110ba8, Func Offset: 0x48
	// Line 7734, Address: 0x110bb4, Func Offset: 0x54
	// Line 7736, Address: 0x110bb8, Func Offset: 0x58
	// Line 7737, Address: 0x110bf0, Func Offset: 0x90
	// Line 7739, Address: 0x110bfc, Func Offset: 0x9c
	// Line 7740, Address: 0x110c08, Func Offset: 0xa8
	// Line 7742, Address: 0x110c24, Func Offset: 0xc4
	// Line 7743, Address: 0x110c54, Func Offset: 0xf4
	// Line 7745, Address: 0x110c60, Func Offset: 0x100
	// Line 7746, Address: 0x110c6c, Func Offset: 0x10c
	// Line 7748, Address: 0x110c74, Func Offset: 0x114
	// Line 7749, Address: 0x110c84, Func Offset: 0x124
	// Line 7751, Address: 0x110c90, Func Offset: 0x130
	// Line 7752, Address: 0x110ca8, Func Offset: 0x148
	// Line 7753, Address: 0x110cb8, Func Offset: 0x158
	// Line 7754, Address: 0x110cc8, Func Offset: 0x168
	// Line 7755, Address: 0x110cd8, Func Offset: 0x178
	// Line 7756, Address: 0x110ce8, Func Offset: 0x188
	// Line 7758, Address: 0x110cf0, Func Offset: 0x190
	// Line 7760, Address: 0x110d04, Func Offset: 0x1a4
	// Line 7761, Address: 0x110d20, Func Offset: 0x1c0
	// Line 7763, Address: 0x110d40, Func Offset: 0x1e0
	// Func End, Address: 0x110d60, Func Offset: 0x200
}

// 
// Start address: 0x110d60
void shGetJamesKickStartPos(float* pos, float* vec)
{
	// Line 7765, Address: 0x110d60, Func Offset: 0
	// Line 7766, Address: 0x110d68, Func Offset: 0x8
	// Line 7767, Address: 0x110d74, Func Offset: 0x14
	// Func End, Address: 0x110d84, Func Offset: 0x24
}

// 
// Start address: 0x110d90
void shGetJamesTrampStartPos(float* pos, float* vec)
{
	// Line 7769, Address: 0x110d90, Func Offset: 0
	// Line 7770, Address: 0x110d98, Func Offset: 0x8
	// Line 7771, Address: 0x110da4, Func Offset: 0x14
	// Func End, Address: 0x110db4, Func Offset: 0x24
}

// 
// Start address: 0x110dc0
int PlayerNowItemName(unsigned char wep)
{
	int wep_name[9];
	// Line 7778, Address: 0x110dc0, Func Offset: 0
	// Line 7779, Address: 0x110dc4, Func Offset: 0x4
	// Line 7791, Address: 0x110de8, Func Offset: 0x28
	// Line 7825, Address: 0x110df8, Func Offset: 0x38
	// Func End, Address: 0x110e04, Func Offset: 0x44
}

// 
// Start address: 0x110e10
int PlayerSearchVIewButtonCheck()
{
	// Line 7854, Address: 0x110e10, Func Offset: 0
	// Line 7856, Address: 0x110e34, Func Offset: 0x24
	// Line 7858, Address: 0x110e58, Func Offset: 0x48
	// Line 7861, Address: 0x110e68, Func Offset: 0x58
	// Line 7865, Address: 0x110e80, Func Offset: 0x70
	// Line 7866, Address: 0x110e84, Func Offset: 0x74
	// Func End, Address: 0x110e8c, Func Offset: 0x7c
}

// 
// Start address: 0x110e90
float PlayerGetNeckAngleX()
{
	SubCharacterDisp* d;
	// Line 7878, Address: 0x110e90, Func Offset: 0
	// Line 7880, Address: 0x110e98, Func Offset: 0x8
	// Line 7881, Address: 0x110e9c, Func Offset: 0xc
	// Func End, Address: 0x110ea4, Func Offset: 0x14
}

// 
// Start address: 0x110eb0
float PlayerGetNeckAngleY()
{
	SubCharacterDisp* d;
	// Line 7884, Address: 0x110eb0, Func Offset: 0
	// Line 7886, Address: 0x110eb8, Func Offset: 0x8
	// Line 7887, Address: 0x110ebc, Func Offset: 0xc
	// Func End, Address: 0x110ec4, Func Offset: 0x14
}

// 
// Start address: 0x110ed0
void PlayerInitOnConnect()
{
	// Line 7904, Address: 0x110ed0, Func Offset: 0
	// Line 7907, Address: 0x110ed8, Func Offset: 0x8
	// Line 7908, Address: 0x110eec, Func Offset: 0x1c
	// Line 7910, Address: 0x110f00, Func Offset: 0x30
	// Line 7911, Address: 0x110f0c, Func Offset: 0x3c
	// Line 7912, Address: 0x110f14, Func Offset: 0x44
	// Line 7914, Address: 0x110f28, Func Offset: 0x58
	// Line 7915, Address: 0x110f3c, Func Offset: 0x6c
	// Line 7916, Address: 0x110f4c, Func Offset: 0x7c
	// Line 7919, Address: 0x110f5c, Func Offset: 0x8c
	// Line 7920, Address: 0x110f78, Func Offset: 0xa8
	// Line 7921, Address: 0x110fa4, Func Offset: 0xd4
	// Line 7922, Address: 0x110fc0, Func Offset: 0xf0
	// Line 7923, Address: 0x110ff0, Func Offset: 0x120
	// Line 7926, Address: 0x111004, Func Offset: 0x134
	// Line 7927, Address: 0x11100c, Func Offset: 0x13c
	// Line 7930, Address: 0x111014, Func Offset: 0x144
	// Line 7933, Address: 0x11102c, Func Offset: 0x15c
	// Line 7936, Address: 0x111034, Func Offset: 0x164
	// Line 7937, Address: 0x111044, Func Offset: 0x174
	// Line 7939, Address: 0x111054, Func Offset: 0x184
	// Line 7941, Address: 0x11107c, Func Offset: 0x1ac
	// Line 7942, Address: 0x111088, Func Offset: 0x1b8
	// Line 7953, Address: 0x111090, Func Offset: 0x1c0
	// Func End, Address: 0x1110a0, Func Offset: 0x1d0
}

// 
// Start address: 0x1110a0
void PlayerStatusClear()
{
	// Line 7960, Address: 0x1110a0, Func Offset: 0
	// Line 7963, Address: 0x1110a8, Func Offset: 0x8
	// Line 7964, Address: 0x1110b4, Func Offset: 0x14
	// Line 7965, Address: 0x1110bc, Func Offset: 0x1c
	// Line 7966, Address: 0x1110c4, Func Offset: 0x24
	// Line 7967, Address: 0x1110d4, Func Offset: 0x34
	// Line 7968, Address: 0x1110e4, Func Offset: 0x44
	// Line 7969, Address: 0x1110ec, Func Offset: 0x4c
	// Line 7970, Address: 0x1110f4, Func Offset: 0x54
	// Line 7971, Address: 0x1110fc, Func Offset: 0x5c
	// Line 7972, Address: 0x111104, Func Offset: 0x64
	// Line 7973, Address: 0x11110c, Func Offset: 0x6c
	// Line 7974, Address: 0x111118, Func Offset: 0x78
	// Line 7975, Address: 0x111120, Func Offset: 0x80
	// Line 7976, Address: 0x111130, Func Offset: 0x90
	// Line 7980, Address: 0x111138, Func Offset: 0x98
	// Line 7982, Address: 0x11114c, Func Offset: 0xac
	// Func End, Address: 0x11115c, Func Offset: 0xbc
}

// 
// Start address: 0x111160
void close_to_angle_target(float* now, float tgt, float min, float max, float spd)
{
	float tgt_tmp;
	float mov_angle;
	float rot_tmp;
	// Line 8009, Address: 0x111160, Func Offset: 0
	// Line 8011, Address: 0x111184, Func Offset: 0x24
	// Line 8013, Address: 0x111188, Func Offset: 0x28
	// Line 8014, Address: 0x11119c, Func Offset: 0x3c
	// Line 8016, Address: 0x1111b0, Func Offset: 0x50
	// Line 8017, Address: 0x1111c4, Func Offset: 0x64
	// Line 8019, Address: 0x111228, Func Offset: 0xc8
	// Line 8020, Address: 0x111240, Func Offset: 0xe0
	// Line 8021, Address: 0x111254, Func Offset: 0xf4
	// Line 8023, Address: 0x111260, Func Offset: 0x100
	// Line 8024, Address: 0x11126c, Func Offset: 0x10c
	// Line 8025, Address: 0x111274, Func Offset: 0x114
	// Line 8026, Address: 0x111288, Func Offset: 0x128
	// Line 8028, Address: 0x111294, Func Offset: 0x134
	// Line 8030, Address: 0x1112a0, Func Offset: 0x140
	// Line 8032, Address: 0x1112b0, Func Offset: 0x150
	// Func End, Address: 0x1112d4, Func Offset: 0x174
}

// 
// Start address: 0x1112e0
void close_to_value(float* now, float tgt, float mov)
{
	// Line 8046, Address: 0x1112e0, Func Offset: 0
	// Line 8047, Address: 0x1112f4, Func Offset: 0x14
	// Line 8048, Address: 0x111304, Func Offset: 0x24
	// Line 8049, Address: 0x11130c, Func Offset: 0x2c
	// Line 8050, Address: 0x11131c, Func Offset: 0x3c
	// Line 8051, Address: 0x111320, Func Offset: 0x40
	// Line 8052, Address: 0x111328, Func Offset: 0x48
	// Line 8053, Address: 0x111330, Func Offset: 0x50
	// Line 8054, Address: 0x111340, Func Offset: 0x60
	// Line 8057, Address: 0x111344, Func Offset: 0x64
	// Func End, Address: 0x11134c, Func Offset: 0x6c
}

// 
// Start address: 0x111350
int PlayerReverseLightCalcIsOn()
{
	// Line 8070, Address: 0x111350, Func Offset: 0
	// Line 8071, Address: 0x111358, Func Offset: 0x8
	// Func End, Address: 0x111360, Func Offset: 0x10
}

// 
// Start address: 0x111360
int PlayerWaterRoadIsOn()
{
	// Line 8077, Address: 0x111360, Func Offset: 0
	// Line 8078, Address: 0x111368, Func Offset: 0x8
	// Func End, Address: 0x111370, Func Offset: 0x10
}

