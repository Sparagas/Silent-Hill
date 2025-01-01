typedef struct SubCharacter;
typedef union _anon0;
typedef struct _AnimeInfo;
typedef struct SubCharacterDisp;
typedef struct shPlayerWork;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct SubObject;
typedef struct PAD_INFO;
typedef struct Playing_Info;
typedef struct PAD_3D;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct PAD_2D;
typedef struct _USXY;
typedef struct _SXY;
typedef struct _anon2;
typedef struct shCharaInfo;
typedef struct shSkelton;
typedef struct shAnime3d;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon3;
typedef struct JamesSoundInfo;
typedef struct Pad_KeyConfig;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shBattleFight;
typedef union shGameKeyData;
typedef struct _anon4;
typedef struct shBattleShot;
typedef struct shClusterAnime;
typedef struct shBattleArea;
typedef struct Item;
typedef struct shBattleInfo;
typedef struct shAttackInfo;

typedef void(*type_2)(SubCharacter*);
typedef void(*type_5)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);
typedef void(*type_11)(SubCharacter*);
typedef void(*type_39)(SubCharacter*);
typedef void(*type_43)(SubCharacter*);

typedef _AnimeInfo type_0[25];
typedef unsigned char type_1[13];
typedef float type_3[4];
typedef _AnimeInfo type_4[22];
typedef unsigned char type_7[34];
typedef unsigned char type_8[4];
typedef unsigned char type_9[32];
typedef unsigned char type_10[4];
typedef PAD_INFO type_12[10];
typedef _AnimeInfo type_13[5];
typedef unsigned int type_14[32];
typedef unsigned char type_15[0];
typedef unsigned char type_16[0];
typedef unsigned char type_17[2];
typedef unsigned char type_18[0];
typedef unsigned char type_19[2];
typedef float type_20[7];
typedef _AnimeInfo type_21[33];
typedef unsigned char type_22[0];
typedef float type_23[4][2];
typedef float type_24[7];
typedef unsigned char type_25[10];
typedef unsigned char type_26[0];
typedef unsigned char type_27[0];
typedef float type_28[4][2];
typedef float type_29[4];
typedef float type_30[4][4];
typedef unsigned char type_31[0];
typedef _AnimeInfo type_32[11];
typedef float type_33[4];
typedef _AnimeInfo type_34[28];
typedef unsigned char type_35[0];
typedef float type_36[4][4];
typedef _AnimeInfo type_37[11];
typedef unsigned int type_38[32];
typedef JamesSoundInfo type_40[4];
typedef shAttackInfo type_41[46];
typedef JamesSoundInfo type_42[4];
typedef _AnimeInfo type_44[35];
typedef unsigned char type_45[2];
typedef char type_46[128];
typedef unsigned short type_47[2];
typedef unsigned short type_48[2][2];
typedef unsigned int type_49[2];
typedef unsigned char type_50[4];
typedef _AnimeInfo type_51[17];
typedef unsigned short type_52[2][2][13];
typedef unsigned short type_53[11];
typedef unsigned char type_54[10];
typedef float type_55[7];
typedef float type_56[3];
typedef float type_57[3][3];
typedef float type_58[3][3][4];
typedef float type_59[7];
typedef void* type_60[3];
typedef unsigned short type_61[3];
typedef float type_62[4];
typedef int type_63[8];
typedef _AnimeInfo type_64[5];
typedef _AnimeInfo type_65[9];
typedef unsigned int type_66[9];
typedef float type_67[7];

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon2 pos;
	_anon2 rot;
	_anon2 pos_spd;
	_anon2 rot_spd;
	_anon3 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon2 b_pos;
	_anon2 b_rot;
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
	int shJamesSoundOn(float vol, int se_name);
	void PlayerFunction();
	void PlayerCheckStraightLine(float spd_roty);
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	unsigned char pad;
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

struct shPlayerWork
{
	SubCharacter* player;
	_anon2 dist_rot;
	_anon2 dist_pos;
	_anon2 pos;
	_anon2 rot;
	float rot_y;
	float inner_to_wall;
	float dist_to_wall;
	float dir_tgt_2d;
	float dir_now_2d;
	unsigned char map_mode;
	unsigned char step;
	unsigned char sub_step;
	unsigned short timer;
	unsigned short timer2;
	unsigned char allbody_now;
	_JAMES_UPPER_STATUS upper_now;
	_JAMES_LOWER_STATUS lower_now;
	unsigned char allbody_prev;
	_JAMES_UPPER_STATUS upper_prev;
	_JAMES_LOWER_STATUS lower_prev;
	unsigned char attack_now;
	unsigned char attack_prev;
	unsigned int upper_st_flg;
	unsigned int lower_st_flg;
	unsigned int u_anime_st_flg;
	unsigned int l_anime_st_flg;
	unsigned int anime_pause;
	unsigned int move_st_flg;
	unsigned int attack_st_flg;
	unsigned int damage_st_flg;
	float light_pos[4];
	float light_vec[4];
	float light_vec_neck[4];
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
	unsigned char se_upper[4];
	unsigned char se_foot[4];
	unsigned char d_shock;
	PAD_INFO pad[10];
	unsigned char ctrl_unit;
	unsigned char ctrl_inputing;
	unsigned char cfg_hold;
	unsigned char cfg_lock;
	unsigned char cfg_move;
	int event_anime;
	_anon2 tgt_body_angle;
	_anon2 tgt_neck_angle;
	_anon2 tgt_arms_angle;
	unsigned char motion_no;
	unsigned char hold_chg[2];
	unsigned char hold_loop[2];
	SubCharacter* target;
	SubCharacter* look_tgt;
	SubObject* look_obj;
	float non_input;
	float running_time;
	float muteki_time;
	float csaw_time;
	float hp_recover;
	int tired;
	int tired_max;
	int spirit;
	unsigned int game_st_flg;
	SubCharacter* enemy_liedown;
	unsigned char enemy_around;
	unsigned char enemy_atk_area;
	unsigned char enemy_near;
	unsigned char light_on;
	unsigned char radio_on;
	unsigned char lock_on;
	unsigned char running;
	unsigned char cannot_run;
	unsigned char fall_type;
	unsigned char reload;
	unsigned char weapon;
	unsigned char act_with_wep;
	unsigned char shoot_val;
	unsigned char reload_val;
	unsigned char atk_type;
	unsigned char atk_reserve[2];
	unsigned char attack_ok;
	char hold_type;
	unsigned char dead;
	unsigned char no_damage;
	unsigned char atk_count;
	unsigned short damage_no;
	unsigned short attack_no;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct SubObject
{
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon2 pos;
	_anon2 rot;
	_anon2 pos_spd;
	_anon2 rot_spd;
	_anon3 mat;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
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

struct Playing_Info
{
	unsigned char stage;
	unsigned char enemy_off;
	unsigned char memo_select;
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

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
};

union _anon1
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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
	JMS_ST_L_STEP,
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

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct _USXY
{
	unsigned short x;
	unsigned short y;
};

struct _SXY
{
	short x;
	short y;
};

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

struct shCharaInfo
{
	_anon2 pos;
	_anon2 rot;
	_anon2 pos_spd;
	_anon2 rot_spd;
	_anon3 mat;
	shSkelton* sk_top;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon3 src_m;
	_anon2 src_t;
	_anon3 des_m;
	_anon2 des_t;
	_anon2 axis;
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

struct shAnime3d
{
	shSkelton* top;
	void* anime;
	void* frame_top;
	void* p_anime;
	void* p_frame_top;
	unsigned int frame_size;
	int total_count;
	_SXY c_count;
	_SXY c_speed;
	_SXY total_speed;
	_USXY cur_frame;
	char first_bone_type;
	char comp_type;
	_AnimeInfo* anim_a;
	_AnimeInfo* anim_b;
	_anon2 rot_neck;
	_anon2 rot_arms;
	_anon2 rot_body_neck;
	_anon2 rot_body;
	float scale;
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

struct _anon3
{
	float d[4][4];
};

struct JamesSoundInfo
{
	float vol;
	char frame;
	char domain;
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
	JMS_ST_U_STEP,
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

union shGameKeyData
{
	unsigned long bit;
	_anon4 f;
};

struct _anon4
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

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

struct shBattleArea
{
	float center;
	float radius;
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

struct shBattleInfo
{
	float pos[4];
	float vec[4];
	unsigned short id;
	unsigned short kind;
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
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon0 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
_AnimeInfo pjames_anim[35];
_AnimeInfo pjames_hg_anim[11];
_AnimeInfo pjames_sg_anim[5];
_AnimeInfo pjames_rg_anim[5];
_AnimeInfo pjames_sp_anim[11];
_AnimeInfo pjames_ka_anim[25];
_AnimeInfo pjames_pi_anim[33];
_AnimeInfo pjames_na_anim[17];
_AnimeInfo pjames_cs_anim[22];
_AnimeInfo pjames_stage_anim[28];
_AnimeInfo pjames_demo_anim[9];
float jms_walk_spd_ana[7];
float jms_back_spd_ana[7];
float jms_swalk_spd_ana[7];
float jms_run_spd_ana[7];
float jms_srun_spd_ana[7];
unsigned int pjames_act_with_wep_flag[9];
unsigned int pjames_upper_flag[32];
unsigned int pjames_lower_flag[32];
shPlayerWork sh2jms;
Pad_KeyConfig key_config;
Playing_Info playing;
float dtf;
void(*PlayerSetHeightDummy)(SubCharacter*);
Item item;
unsigned char __show_kodou_h_00[0];
unsigned char __show_kodou_h_01[0];
unsigned char __show_kodou_h_02[0];
unsigned char __show_kodou_h_03[0];
unsigned char __show_weapon_l_03[0];
unsigned char __show_weapon_l_02[0];
unsigned char __show_weapon_l_01[0];
unsigned char __show_weapon_l_00[0];
void(*PlayerFunction)(SubCharacter*);
int pjames_anime_adr_list[8];

void PlayerCheckInit();
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
char PlayerCheckKeyInputRoundWay();
unsigned char PlayerCheckKeyInputL180();
unsigned char PlayerCheckKeyInputR180();
unsigned char PlayerCheckKeyInputPrsAttack();
unsigned char PlayerCheckKeyInputTrgAttack();
unsigned char PlayerCheckKeyInputTrgLight();
float PlayerCheckKeyInputStickDir();
unsigned char PlayerCheckKeyInputStickPow();
void PlayerCheckKeyInput();
unsigned short PlayerDamageMotionNo();
void PlayerCheckSideLine();
void PlayerCheckFootLine();
void PlayerSetHeightDummy();
void PlayerSetHeight();
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
void PlayerCheckAnimeUpper();
void PlayerCheckAnimeLower();
void PlayerCheckAnime();
void shJamesEffectFoot(int type);
int shJamesSoundOn(float vol, int se_name);
void PlayerCheckSoundLower();
void PlayerCheckSoundUpper();
void PlayerCheckSound();
void PlayerCheckDualShock();
void PlayerFunction();
void shGetJamesLightPos(float* pos, float* vec);
void shGetJamesLightPos_Calc_Chest();
void shGetJamesLightPos_Calc_Hand();
void shGetJamesLightPos_Calc();
void GetPlayerPartsMatrixForCameraCtrl(float mat[4], unsigned int parts_name);
void GetPlayerPartsWorldMatrix(float mat[4], unsigned int parts_name);
void GetPlayerPartsLocalMatrix(_anon3* dest, int parts_name);
shCharaInfo* GetPlayerInfoForCameraCtrl();
void shCharacterPlayerWorkInitAtPowerOn();
void shCharacterPlayerWorkInitAtGameStart();
void shCharacterSetPlayerLow(SubCharacter* scp);
void PlayerGetTargetInfo();
void PlayerGetTarget();
void PlayerChangeTarget(int key);
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
int PlayerNowDemoEventMode();
int PlayerEventButtonCheck(int button);
int PlayerEventDeadAnimeFinish();
int PlayerEventAnimeSuccessFrame();
void PlayerEventAnimeSet(int anime);
int shCharacterHumanPJAMESAnimeSet(SubCharacter* scp, int anime_id);
void JamesWeaponSet(int wep);
int PlayerGetJamesWeapon();
void PlayerInitOnConnect();
void close_to_angle_target(float* now, float tgt, float min, float max, float spd);
void close_to_value(float* now, float tgt, float mov);

// 
// Start address: 0x106ca0
void SubCharacter::PlayerCheckInit()
{
	// Line 149, Address: 0x106ca0, Func Offset: 0
	// Line 152, Address: 0x106cac, Func Offset: 0xc
	// Line 155, Address: 0x106cbc, Func Offset: 0x1c
	// Line 161, Address: 0x106ccc, Func Offset: 0x2c
	// Line 172, Address: 0x106cdc, Func Offset: 0x3c
	// Func End, Address: 0x106cec, Func Offset: 0x4c
}

// 
// Start address: 0x106cf0
void player_flg_on(unsigned int* type, unsigned int status)
{
	// Line 181, Address: 0x106cf0, Func Offset: 0
	// Line 182, Address: 0x106cfc, Func Offset: 0xc
	// Line 183, Address: 0x106d14, Func Offset: 0x24
	// Func End, Address: 0x106d20, Func Offset: 0x30
}

// 
// Start address: 0x106d20
void player_flg_off(unsigned int* type, unsigned int status)
{
	// Line 185, Address: 0x106d20, Func Offset: 0
	// Line 186, Address: 0x106d2c, Func Offset: 0xc
	// Line 187, Address: 0x106d48, Func Offset: 0x28
	// Func End, Address: 0x106d54, Func Offset: 0x34
}

// 
// Start address: 0x106d60
int upper_flg_on(unsigned int status)
{
	// Line 193, Address: 0x106d60, Func Offset: 0
	// Line 194, Address: 0x106d68, Func Offset: 0x8
	// Line 195, Address: 0x106d78, Func Offset: 0x18
	// Func End, Address: 0x106d84, Func Offset: 0x24
}

// 
// Start address: 0x106d90
int lower_flg_on(unsigned int status)
{
	// Line 197, Address: 0x106d90, Func Offset: 0
	// Line 198, Address: 0x106d98, Func Offset: 0x8
	// Line 199, Address: 0x106da8, Func Offset: 0x18
	// Func End, Address: 0x106db4, Func Offset: 0x24
}

// 
// Start address: 0x106dc0
int u_anime_flg_on(unsigned int status)
{
	// Line 201, Address: 0x106dc0, Func Offset: 0
	// Line 202, Address: 0x106dc8, Func Offset: 0x8
	// Line 203, Address: 0x106dd8, Func Offset: 0x18
	// Func End, Address: 0x106de4, Func Offset: 0x24
}

// 
// Start address: 0x106df0
int l_anime_flg_on(unsigned int status)
{
	// Line 205, Address: 0x106df0, Func Offset: 0
	// Line 206, Address: 0x106df8, Func Offset: 0x8
	// Line 207, Address: 0x106e08, Func Offset: 0x18
	// Func End, Address: 0x106e14, Func Offset: 0x24
}

// 
// Start address: 0x106e20
int actwithwep_flg_on(unsigned int status)
{
	// Line 221, Address: 0x106e20, Func Offset: 0
	// Line 222, Address: 0x106e28, Func Offset: 0x8
	// Line 223, Address: 0x106e3c, Func Offset: 0x1c
	// Func End, Address: 0x106e48, Func Offset: 0x28
}

// 
// Start address: 0x106e50
void lower_st_set(int status, shPlayerWork* w)
{
	// Line 234, Address: 0x106e50, Func Offset: 0
	// Line 235, Address: 0x106e5c, Func Offset: 0xc
	// Line 236, Address: 0x106e6c, Func Offset: 0x1c
	// Line 237, Address: 0x106e7c, Func Offset: 0x2c
	// Line 238, Address: 0x106e88, Func Offset: 0x38
	// Func End, Address: 0x106e94, Func Offset: 0x44
}

// 
// Start address: 0x106ea0
void upper_st_set(int status, shPlayerWork* w)
{
	// Line 244, Address: 0x106ea0, Func Offset: 0
	// Line 245, Address: 0x106eac, Func Offset: 0xc
	// Line 246, Address: 0x106ebc, Func Offset: 0x1c
	// Line 247, Address: 0x106ecc, Func Offset: 0x2c
	// Func End, Address: 0x106ed8, Func Offset: 0x38
}

// 
// Start address: 0x106ee0
void lower_flg_set(int status, shPlayerWork* w)
{
	// Line 253, Address: 0x106ee0, Func Offset: 0
	// Line 254, Address: 0x106eec, Func Offset: 0xc
	// Line 255, Address: 0x106f0c, Func Offset: 0x2c
	// Func End, Address: 0x106f18, Func Offset: 0x38
}

// 
// Start address: 0x106f20
void upper_flg_set(int status, shPlayerWork* w)
{
	// Line 261, Address: 0x106f20, Func Offset: 0
	// Line 262, Address: 0x106f2c, Func Offset: 0xc
	// Line 263, Address: 0x106f4c, Func Offset: 0x2c
	// Func End, Address: 0x106f58, Func Offset: 0x38
}

// 
// Start address: 0x106f60
void actwithwep_flg_set(unsigned char status, shPlayerWork* w)
{
	// Line 269, Address: 0x106f60, Func Offset: 0
	// Line 270, Address: 0x106f6c, Func Offset: 0xc
	// Line 271, Address: 0x106f90, Func Offset: 0x30
	// Func End, Address: 0x106f9c, Func Offset: 0x3c
}

// 
// Start address: 0x106fa0
char PlayerCheckKeyInputRoundWay()
{
	PAD_INFO* pad;
	// Line 286, Address: 0x106fa0, Func Offset: 0
	// Line 287, Address: 0x106fa8, Func Offset: 0x8
	// Line 289, Address: 0x106fb0, Func Offset: 0x10
	// Line 290, Address: 0x106fd0, Func Offset: 0x30
	// Line 291, Address: 0x106fdc, Func Offset: 0x3c
	// Line 292, Address: 0x106ffc, Func Offset: 0x5c
	// Line 293, Address: 0x107008, Func Offset: 0x68
	// Line 294, Address: 0x10700c, Func Offset: 0x6c
	// Func End, Address: 0x10701c, Func Offset: 0x7c
}

// 
// Start address: 0x107020
unsigned char PlayerCheckKeyInputL180()
{
	PAD_INFO* pad;
	int tmp;
	int i;
	// Line 317, Address: 0x107020, Func Offset: 0
	// Line 318, Address: 0x107030, Func Offset: 0x10
	// Line 319, Address: 0x107034, Func Offset: 0x14
	// Line 321, Address: 0x10703c, Func Offset: 0x1c
	// Line 322, Address: 0x107048, Func Offset: 0x28
	// Line 323, Address: 0x107054, Func Offset: 0x34
	// Line 325, Address: 0x107060, Func Offset: 0x40
	// Line 326, Address: 0x10706c, Func Offset: 0x4c
	// Line 327, Address: 0x107080, Func Offset: 0x60
	// Line 329, Address: 0x10708c, Func Offset: 0x6c
	// Line 330, Address: 0x10709c, Func Offset: 0x7c
	// Line 333, Address: 0x1070a8, Func Offset: 0x88
	// Line 334, Address: 0x1070ac, Func Offset: 0x8c
	// Func End, Address: 0x1070c4, Func Offset: 0xa4
}

// 
// Start address: 0x1070d0
unsigned char PlayerCheckKeyInputR180()
{
	PAD_INFO* pad;
	int tmp;
	int i;
	// Line 344, Address: 0x1070d0, Func Offset: 0
	// Line 345, Address: 0x1070e0, Func Offset: 0x10
	// Line 346, Address: 0x1070e4, Func Offset: 0x14
	// Line 348, Address: 0x1070ec, Func Offset: 0x1c
	// Line 349, Address: 0x1070f8, Func Offset: 0x28
	// Line 350, Address: 0x107104, Func Offset: 0x34
	// Line 352, Address: 0x107110, Func Offset: 0x40
	// Line 353, Address: 0x10711c, Func Offset: 0x4c
	// Line 354, Address: 0x107130, Func Offset: 0x60
	// Line 356, Address: 0x10713c, Func Offset: 0x6c
	// Line 357, Address: 0x10714c, Func Offset: 0x7c
	// Line 360, Address: 0x107158, Func Offset: 0x88
	// Line 361, Address: 0x10715c, Func Offset: 0x8c
	// Func End, Address: 0x107174, Func Offset: 0xa4
}

// 
// Start address: 0x107180
unsigned char PlayerCheckKeyInputPrsAttack()
{
	PAD_INFO* pad;
	unsigned char value;
	unsigned char result;
	int i;
	// Line 375, Address: 0x107180, Func Offset: 0
	// Line 377, Address: 0x107194, Func Offset: 0x14
	// Line 378, Address: 0x107198, Func Offset: 0x18
	// Line 386, Address: 0x1071a0, Func Offset: 0x20
	// Line 387, Address: 0x1071ac, Func Offset: 0x2c
	// Line 388, Address: 0x1071c0, Func Offset: 0x40
	// Line 390, Address: 0x1071cc, Func Offset: 0x4c
	// Line 392, Address: 0x1071e0, Func Offset: 0x60
	// Line 393, Address: 0x1071f4, Func Offset: 0x74
	// Line 397, Address: 0x10722c, Func Offset: 0xac
	// Line 398, Address: 0x107230, Func Offset: 0xb0
	// Func End, Address: 0x10724c, Func Offset: 0xcc
}

// 
// Start address: 0x107250
unsigned char PlayerCheckKeyInputTrgAttack()
{
	PAD_INFO* pad;
	// Line 407, Address: 0x107250, Func Offset: 0
	// Line 410, Address: 0x107258, Func Offset: 0x8
	// Line 412, Address: 0x107260, Func Offset: 0x10
	// Line 413, Address: 0x10726c, Func Offset: 0x1c
	// Line 415, Address: 0x107278, Func Offset: 0x28
	// Line 416, Address: 0x107284, Func Offset: 0x34
	// Line 417, Address: 0x107290, Func Offset: 0x40
	// Line 421, Address: 0x10729c, Func Offset: 0x4c
	// Line 422, Address: 0x1072a0, Func Offset: 0x50
	// Func End, Address: 0x1072b0, Func Offset: 0x60
}

// 
// Start address: 0x1072b0
unsigned char PlayerCheckKeyInputTrgLight()
{
	PAD_INFO* pad;
	// Line 429, Address: 0x1072b0, Func Offset: 0
	// Line 430, Address: 0x1072b8, Func Offset: 0x8
	// Line 432, Address: 0x1072c0, Func Offset: 0x10
	// Line 433, Address: 0x1072e0, Func Offset: 0x30
	// Line 435, Address: 0x1072f0, Func Offset: 0x40
	// Line 436, Address: 0x1072f4, Func Offset: 0x44
	// Func End, Address: 0x107304, Func Offset: 0x54
}

// 
// Start address: 0x107310
float PlayerCheckKeyInputStickDir()
{
	float y;
	float x;
	PAD_INFO* pad;
	// Line 447, Address: 0x107310, Func Offset: 0
	// Line 448, Address: 0x10731c, Func Offset: 0xc
	// Line 451, Address: 0x107324, Func Offset: 0x14
	// Line 453, Address: 0x10734c, Func Offset: 0x3c
	// Line 454, Address: 0x107360, Func Offset: 0x50
	// Line 455, Address: 0x107374, Func Offset: 0x64
	// Line 457, Address: 0x10737c, Func Offset: 0x6c
	// Line 458, Address: 0x107398, Func Offset: 0x88
	// Line 459, Address: 0x1073b4, Func Offset: 0xa4
	// Line 460, Address: 0x1073d0, Func Offset: 0xc0
	// Line 461, Address: 0x1073ec, Func Offset: 0xdc
	// Line 463, Address: 0x1073f4, Func Offset: 0xe4
	// Line 473, Address: 0x107404, Func Offset: 0xf4
	// Line 475, Address: 0x107418, Func Offset: 0x108
	// Func End, Address: 0x10742c, Func Offset: 0x11c
}

// 
// Start address: 0x107430
unsigned char PlayerCheckKeyInputStickPow()
{
	PAD_INFO* pad;
	float y;
	float x;
	// Line 485, Address: 0x107430, Func Offset: 0
	// Line 487, Address: 0x10743c, Func Offset: 0xc
	// Line 489, Address: 0x107444, Func Offset: 0x14
	// Line 491, Address: 0x10746c, Func Offset: 0x3c
	// Line 492, Address: 0x107490, Func Offset: 0x60
	// Line 493, Address: 0x1074b8, Func Offset: 0x88
	// Line 495, Address: 0x1074c0, Func Offset: 0x90
	// Line 496, Address: 0x1074d0, Func Offset: 0xa0
	// Line 497, Address: 0x1074ec, Func Offset: 0xbc
	// Line 498, Address: 0x107508, Func Offset: 0xd8
	// Line 499, Address: 0x107524, Func Offset: 0xf4
	// Line 500, Address: 0x107540, Func Offset: 0x110
	// Line 501, Address: 0x107558, Func Offset: 0x128
	// Line 502, Address: 0x107574, Func Offset: 0x144
	// Line 504, Address: 0x10757c, Func Offset: 0x14c
	// Line 507, Address: 0x10758c, Func Offset: 0x15c
	// Line 531, Address: 0x1075b0, Func Offset: 0x180
	// Func End, Address: 0x1075c4, Func Offset: 0x194
}

// 
// Start address: 0x1075d0
void PlayerCheckKeyInput()
{
	shGameKeyData key;
	PAD_INFO* pad;
	int i;
	unsigned char pad_local[32];
	// Line 547, Address: 0x1075d0, Func Offset: 0
	// Line 552, Address: 0x1075e4, Func Offset: 0x14
	// Line 557, Address: 0x1075ec, Func Offset: 0x1c
	// Line 558, Address: 0x1075f8, Func Offset: 0x28
	// Line 559, Address: 0x107664, Func Offset: 0x94
	// Line 562, Address: 0x107670, Func Offset: 0xa0
	// Line 563, Address: 0x107688, Func Offset: 0xb8
	// Line 564, Address: 0x107698, Func Offset: 0xc8
	// Line 565, Address: 0x1076a8, Func Offset: 0xd8
	// Line 571, Address: 0x1076bc, Func Offset: 0xec
	// Line 573, Address: 0x1076c8, Func Offset: 0xf8
	// Line 577, Address: 0x1076d4, Func Offset: 0x104
	// Line 580, Address: 0x1076f0, Func Offset: 0x120
	// Line 581, Address: 0x107700, Func Offset: 0x130
	// Line 583, Address: 0x10772c, Func Offset: 0x15c
	// Line 586, Address: 0x10773c, Func Offset: 0x16c
	// Line 590, Address: 0x107758, Func Offset: 0x188
	// Line 592, Address: 0x107768, Func Offset: 0x198
	// Line 596, Address: 0x107784, Func Offset: 0x1b4
	// Line 597, Address: 0x1077a8, Func Offset: 0x1d8
	// Line 603, Address: 0x1077cc, Func Offset: 0x1fc
	// Line 604, Address: 0x1077dc, Func Offset: 0x20c
	// Line 605, Address: 0x1077ec, Func Offset: 0x21c
	// Line 606, Address: 0x1077fc, Func Offset: 0x22c
	// Line 609, Address: 0x10780c, Func Offset: 0x23c
	// Line 610, Address: 0x10783c, Func Offset: 0x26c
	// Line 611, Address: 0x107840, Func Offset: 0x270
	// Line 612, Address: 0x107870, Func Offset: 0x2a0
	// Line 620, Address: 0x107874, Func Offset: 0x2a4
	// Line 621, Address: 0x107880, Func Offset: 0x2b0
	// Line 622, Address: 0x10788c, Func Offset: 0x2bc
	// Line 623, Address: 0x107898, Func Offset: 0x2c8
	// Line 628, Address: 0x1078a4, Func Offset: 0x2d4
	// Line 630, Address: 0x1078ec, Func Offset: 0x31c
	// Line 631, Address: 0x1078f8, Func Offset: 0x328
	// Line 632, Address: 0x107900, Func Offset: 0x330
	// Line 636, Address: 0x107908, Func Offset: 0x338
	// Line 637, Address: 0x107914, Func Offset: 0x344
	// Line 640, Address: 0x107920, Func Offset: 0x350
	// Line 645, Address: 0x107948, Func Offset: 0x378
	// Line 646, Address: 0x107958, Func Offset: 0x388
	// Line 648, Address: 0x107964, Func Offset: 0x394
	// Line 649, Address: 0x107970, Func Offset: 0x3a0
	// Line 650, Address: 0x10797c, Func Offset: 0x3ac
	// Line 651, Address: 0x107988, Func Offset: 0x3b8
	// Line 656, Address: 0x107990, Func Offset: 0x3c0
	// Line 657, Address: 0x1079a0, Func Offset: 0x3d0
	// Line 676, Address: 0x1079ac, Func Offset: 0x3dc
	// Line 678, Address: 0x1079c4, Func Offset: 0x3f4
	// Line 680, Address: 0x1079d4, Func Offset: 0x404
	// Line 692, Address: 0x107b1c, Func Offset: 0x54c
	// Line 707, Address: 0x107b24, Func Offset: 0x554
	// Func End, Address: 0x107b40, Func Offset: 0x570
}

// 
// Start address: 0x107b40
unsigned short SubCharacter::PlayerDamageMotionNo()
{
	int dir;
	int dead;
	int kind;
	float roty2;
	float roty;
	float direction[4];
	unsigned short damage_no[2][2][13];
	// Line 719, Address: 0x107b40, Func Offset: 0
	// Line 722, Address: 0x107b58, Func Offset: 0x18
	// Line 794, Address: 0x107b94, Func Offset: 0x54
	// Line 795, Address: 0x107ba0, Func Offset: 0x60
	// Line 796, Address: 0x107bac, Func Offset: 0x6c
	// Line 797, Address: 0x107bd4, Func Offset: 0x94
	// Line 800, Address: 0x107be4, Func Offset: 0xa4
	// Line 801, Address: 0x107bec, Func Offset: 0xac
	// Line 803, Address: 0x107c68, Func Offset: 0x128
	// Line 804, Address: 0x107ca8, Func Offset: 0x168
	// Line 806, Address: 0x107cb4, Func Offset: 0x174
	// Line 808, Address: 0x107cb8, Func Offset: 0x178
	// Line 810, Address: 0x107d00, Func Offset: 0x1c0
	// Line 811, Address: 0x107d2c, Func Offset: 0x1ec
	// Func End, Address: 0x107d48, Func Offset: 0x208
}

// 
// Start address: 0x107d50
void SubCharacter::PlayerCheckSideLine()
{
	float ep[4];
	float sp[4];
	// Line 825, Address: 0x107d50, Func Offset: 0
	// Line 829, Address: 0x107d5c, Func Offset: 0xc
	// Line 830, Address: 0x107d68, Func Offset: 0x18
	// Line 831, Address: 0x107d74, Func Offset: 0x24
	// Line 834, Address: 0x107db0, Func Offset: 0x60
	// Line 835, Address: 0x107df0, Func Offset: 0xa0
	// Line 836, Address: 0x107e30, Func Offset: 0xe0
	// Line 839, Address: 0x107e50, Func Offset: 0x100
	// Line 840, Address: 0x107e90, Func Offset: 0x140
	// Line 841, Address: 0x107ed0, Func Offset: 0x180
	// Line 843, Address: 0x107ef0, Func Offset: 0x1a0
	// Func End, Address: 0x107f00, Func Offset: 0x1b0
}

// 
// Start address: 0x107f00
void SubCharacter::PlayerCheckFootLine()
{
	float ep[4];
	float sp[4];
	float mat[4][4];
	// Line 848, Address: 0x107f00, Func Offset: 0
	// Line 854, Address: 0x107f10, Func Offset: 0x10
	// Line 855, Address: 0x107f20, Func Offset: 0x20
	// Line 856, Address: 0x107f30, Func Offset: 0x30
	// Line 857, Address: 0x107f40, Func Offset: 0x40
	// Line 858, Address: 0x107f58, Func Offset: 0x58
	// Line 859, Address: 0x107f74, Func Offset: 0x74
	// Line 860, Address: 0x107f90, Func Offset: 0x90
	// Line 862, Address: 0x107fa4, Func Offset: 0xa4
	// Line 867, Address: 0x107fd4, Func Offset: 0xd4
	// Line 868, Address: 0x107fe4, Func Offset: 0xe4
	// Line 869, Address: 0x107ff4, Func Offset: 0xf4
	// Line 870, Address: 0x108004, Func Offset: 0x104
	// Line 871, Address: 0x10801c, Func Offset: 0x11c
	// Line 872, Address: 0x108038, Func Offset: 0x138
	// Line 873, Address: 0x108054, Func Offset: 0x154
	// Line 875, Address: 0x108068, Func Offset: 0x168
	// Line 878, Address: 0x108098, Func Offset: 0x198
	// Func End, Address: 0x1080ac, Func Offset: 0x1ac
}

// 
// Start address: 0x1080b0
void PlayerSetHeightDummy()
{
	// Line 884, Address: 0x1080b0, Func Offset: 0
	// Line 885, Address: 0x1080b4, Func Offset: 0x4
	// Func End, Address: 0x1080c0, Func Offset: 0x10
}

// 
// Start address: 0x1080c0
void SubCharacter::PlayerSetHeight()
{
	float ep[4];
	float sp[4];
	float rot_tmp;
	float height;
	// Line 887, Address: 0x1080c0, Func Offset: 0
	// Line 896, Address: 0x1080d0, Func Offset: 0x10
	// Line 897, Address: 0x1080e0, Func Offset: 0x20
	// Line 898, Address: 0x1080f0, Func Offset: 0x30
	// Line 899, Address: 0x108108, Func Offset: 0x48
	// Line 900, Address: 0x108124, Func Offset: 0x64
	// Line 902, Address: 0x108140, Func Offset: 0x80
	// Line 903, Address: 0x108154, Func Offset: 0x94
	// Line 904, Address: 0x10815c, Func Offset: 0x9c
	// Line 905, Address: 0x108164, Func Offset: 0xa4
	// Line 908, Address: 0x108168, Func Offset: 0xa8
	// Line 910, Address: 0x108170, Func Offset: 0xb0
	// Line 911, Address: 0x108180, Func Offset: 0xc0
	// Line 912, Address: 0x10819c, Func Offset: 0xdc
	// Line 913, Address: 0x1081a8, Func Offset: 0xe8
	// Line 914, Address: 0x1081b4, Func Offset: 0xf4
	// Line 915, Address: 0x1081bc, Func Offset: 0xfc
	// Line 916, Address: 0x1081ec, Func Offset: 0x12c
	// Line 917, Address: 0x108218, Func Offset: 0x158
	// Line 918, Address: 0x108228, Func Offset: 0x168
	// Line 920, Address: 0x108254, Func Offset: 0x194
	// Line 921, Address: 0x10826c, Func Offset: 0x1ac
	// Line 923, Address: 0x108280, Func Offset: 0x1c0
	// Line 924, Address: 0x1082a0, Func Offset: 0x1e0
	// Line 925, Address: 0x1082b0, Func Offset: 0x1f0
	// Line 926, Address: 0x1082d4, Func Offset: 0x214
	// Line 927, Address: 0x1082dc, Func Offset: 0x21c
	// Line 928, Address: 0x1082e4, Func Offset: 0x224
	// Line 934, Address: 0x1082f0, Func Offset: 0x230
	// Line 936, Address: 0x1082f8, Func Offset: 0x238
	// Line 937, Address: 0x108304, Func Offset: 0x244
	// Line 943, Address: 0x108310, Func Offset: 0x250
	// Func End, Address: 0x108324, Func Offset: 0x264
}

// 
// Start address: 0x108330
void PlayerSetColumn_SetTarget(_CL_HITPOLY_COLUMN* mov, _CL_HITPOLY_COLUMN* atk, float* mov_z, float* atk_z)
{
	// Line 959, Address: 0x108330, Func Offset: 0
	// Line 961, Address: 0x108344, Func Offset: 0x14
	// Line 962, Address: 0x10835c, Func Offset: 0x2c
	// Line 963, Address: 0x108370, Func Offset: 0x40
	// Line 966, Address: 0x108384, Func Offset: 0x54
	// Line 967, Address: 0x1083a0, Func Offset: 0x70
	// Line 968, Address: 0x1083cc, Func Offset: 0x9c
	// Line 969, Address: 0x1083e8, Func Offset: 0xb8
	// Line 970, Address: 0x108418, Func Offset: 0xe8
	// Line 972, Address: 0x108430, Func Offset: 0x100
	// Line 973, Address: 0x10843c, Func Offset: 0x10c
	// Line 976, Address: 0x108448, Func Offset: 0x118
	// Line 978, Address: 0x108480, Func Offset: 0x150
	// Line 979, Address: 0x108490, Func Offset: 0x160
	// Line 981, Address: 0x1084a4, Func Offset: 0x174
	// Line 983, Address: 0x1084ac, Func Offset: 0x17c
	// Line 985, Address: 0x1084d8, Func Offset: 0x1a8
	// Line 986, Address: 0x1084f4, Func Offset: 0x1c4
	// Line 987, Address: 0x108504, Func Offset: 0x1d4
	// Line 990, Address: 0x108518, Func Offset: 0x1e8
	// Line 992, Address: 0x108520, Func Offset: 0x1f0
	// Line 993, Address: 0x10852c, Func Offset: 0x1fc
	// Line 994, Address: 0x10853c, Func Offset: 0x20c
	// Line 1000, Address: 0x108544, Func Offset: 0x214
	// Line 1002, Address: 0x108570, Func Offset: 0x240
	// Line 1003, Address: 0x108580, Func Offset: 0x250
	// Line 1004, Address: 0x108594, Func Offset: 0x264
	// Line 1006, Address: 0x10859c, Func Offset: 0x26c
	// Line 1007, Address: 0x1085b4, Func Offset: 0x284
	// Line 1008, Address: 0x1085c4, Func Offset: 0x294
	// Line 1009, Address: 0x1085d8, Func Offset: 0x2a8
	// Line 1010, Address: 0x1085e0, Func Offset: 0x2b0
	// Line 1011, Address: 0x1085ec, Func Offset: 0x2bc
	// Line 1025, Address: 0x1085fc, Func Offset: 0x2cc
	// Line 1026, Address: 0x108614, Func Offset: 0x2e4
	// Line 1028, Address: 0x10862c, Func Offset: 0x2fc
	// Func End, Address: 0x108638, Func Offset: 0x308
}

// 
// Start address: 0x108640
void PlayerSetColumn_CloseToTarget(_CL_HITPOLY_COLUMN* mov, _CL_HITPOLY_COLUMN* atk, float* mov_z, float* atk_z)
{
	// Line 1032, Address: 0x108640, Func Offset: 0
	// Line 1037, Address: 0x108658, Func Offset: 0x18
	// Line 1038, Address: 0x108674, Func Offset: 0x34
	// Line 1039, Address: 0x1086a0, Func Offset: 0x60
	// Line 1040, Address: 0x1086bc, Func Offset: 0x7c
	// Line 1041, Address: 0x1086d4, Func Offset: 0x94
	// Line 1042, Address: 0x1086e8, Func Offset: 0xa8
	// Line 1043, Address: 0x108718, Func Offset: 0xd8
	// Line 1046, Address: 0x10872c, Func Offset: 0xec
	// Line 1047, Address: 0x10874c, Func Offset: 0x10c
	// Line 1048, Address: 0x10876c, Func Offset: 0x12c
	// Line 1049, Address: 0x10878c, Func Offset: 0x14c
	// Line 1052, Address: 0x1087ac, Func Offset: 0x16c
	// Line 1053, Address: 0x1087e0, Func Offset: 0x1a0
	// Line 1054, Address: 0x108814, Func Offset: 0x1d4
	// Line 1055, Address: 0x108848, Func Offset: 0x208
	// Line 1057, Address: 0x10887c, Func Offset: 0x23c
	// Func End, Address: 0x10888c, Func Offset: 0x24c
}

// 
// Start address: 0x108890
void SubCharacter::PlayerSetHitColumn()
{
	_CL_HITPOLY_COLUMN col_atk;
	_CL_HITPOLY_COLUMN col_mov;
	float atk_z;
	float mov_z;
	float mat[4][4];
	// Line 1065, Address: 0x108890, Func Offset: 0
	// Line 1067, Address: 0x10889c, Func Offset: 0xc
	// Line 1071, Address: 0x1088b4, Func Offset: 0x24
	// Line 1073, Address: 0x1088c0, Func Offset: 0x30
	// Line 1074, Address: 0x1088d8, Func Offset: 0x48
	// Line 1077, Address: 0x1088f0, Func Offset: 0x60
	// Line 1078, Address: 0x108904, Func Offset: 0x74
	// Line 1079, Address: 0x108928, Func Offset: 0x98
	// Line 1080, Address: 0x108930, Func Offset: 0xa0
	// Line 1082, Address: 0x108950, Func Offset: 0xc0
	// Line 1085, Address: 0x10897c, Func Offset: 0xec
	// Line 1086, Address: 0x10898c, Func Offset: 0xfc
	// Line 1088, Address: 0x108998, Func Offset: 0x108
	// Func End, Address: 0x1089a8, Func Offset: 0x118
}

// 
// Start address: 0x1089b0
void SubCharacter::PlayerSetSearchArea()
{
	// Line 1100, Address: 0x1089b0, Func Offset: 0
	// Line 1115, Address: 0x1089bc, Func Offset: 0xc
	// Line 1116, Address: 0x1089cc, Func Offset: 0x1c
	// Line 1117, Address: 0x1089f0, Func Offset: 0x40
	// Line 1118, Address: 0x1089f8, Func Offset: 0x48
	// Line 1121, Address: 0x108a1c, Func Offset: 0x6c
	// Line 1122, Address: 0x108a3c, Func Offset: 0x8c
	// Func End, Address: 0x108a4c, Func Offset: 0x9c
}

// 
// Start address: 0x108a50
void SubCharacter::PlayerCheckDamage()
{
	_AnimeInfo* a_info;
	// Line 1139, Address: 0x108a50, Func Offset: 0
	// Line 1141, Address: 0x108a60, Func Offset: 0x10
	// Line 1142, Address: 0x108a84, Func Offset: 0x34
	// Line 1143, Address: 0x108aa8, Func Offset: 0x58
	// Line 1153, Address: 0x108ab8, Func Offset: 0x68
	// Line 1161, Address: 0x108ac4, Func Offset: 0x74
	// Line 1168, Address: 0x108ad0, Func Offset: 0x80
	// Line 1169, Address: 0x108ae0, Func Offset: 0x90
	// Line 1172, Address: 0x108b0c, Func Offset: 0xbc
	// Line 1173, Address: 0x108b38, Func Offset: 0xe8
	// Line 1174, Address: 0x108b4c, Func Offset: 0xfc
	// Line 1179, Address: 0x108b60, Func Offset: 0x110
	// Line 1180, Address: 0x108b70, Func Offset: 0x120
	// Line 1183, Address: 0x108ba8, Func Offset: 0x158
	// Line 1184, Address: 0x108bd4, Func Offset: 0x184
	// Line 1185, Address: 0x108be8, Func Offset: 0x198
	// Line 1187, Address: 0x108bfc, Func Offset: 0x1ac
	// Line 1188, Address: 0x108c0c, Func Offset: 0x1bc
	// Line 1193, Address: 0x108c50, Func Offset: 0x200
	// Line 1196, Address: 0x108c58, Func Offset: 0x208
	// Line 1197, Address: 0x108c68, Func Offset: 0x218
	// Line 1204, Address: 0x108c88, Func Offset: 0x238
	// Line 1206, Address: 0x108ca8, Func Offset: 0x258
	// Line 1207, Address: 0x108cbc, Func Offset: 0x26c
	// Line 1208, Address: 0x108cc8, Func Offset: 0x278
	// Line 1212, Address: 0x108d20, Func Offset: 0x2d0
	// Line 1214, Address: 0x108d4c, Func Offset: 0x2fc
	// Line 1217, Address: 0x108d54, Func Offset: 0x304
	// Line 1219, Address: 0x108d60, Func Offset: 0x310
	// Line 1220, Address: 0x108d6c, Func Offset: 0x31c
	// Line 1221, Address: 0x108d74, Func Offset: 0x324
	// Line 1222, Address: 0x108d7c, Func Offset: 0x32c
	// Line 1223, Address: 0x108d90, Func Offset: 0x340
	// Line 1224, Address: 0x108da4, Func Offset: 0x354
	// Line 1225, Address: 0x108dac, Func Offset: 0x35c
	// Line 1226, Address: 0x108db4, Func Offset: 0x364
	// Line 1227, Address: 0x108dbc, Func Offset: 0x36c
	// Line 1228, Address: 0x108dc4, Func Offset: 0x374
	// Line 1236, Address: 0x108dd8, Func Offset: 0x388
	// Line 1237, Address: 0x108df4, Func Offset: 0x3a4
	// Line 1246, Address: 0x108e00, Func Offset: 0x3b0
	// Line 1247, Address: 0x108e14, Func Offset: 0x3c4
	// Line 1251, Address: 0x108e24, Func Offset: 0x3d4
	// Line 1252, Address: 0x108e34, Func Offset: 0x3e4
	// Line 1253, Address: 0x108e40, Func Offset: 0x3f0
	// Line 1254, Address: 0x108e48, Func Offset: 0x3f8
	// Line 1272, Address: 0x108e54, Func Offset: 0x404
	// Line 1274, Address: 0x108eac, Func Offset: 0x45c
	// Line 1275, Address: 0x108eb8, Func Offset: 0x468
	// Line 1276, Address: 0x108ec4, Func Offset: 0x474
	// Line 1280, Address: 0x108ec8, Func Offset: 0x478
	// Line 1285, Address: 0x108ee4, Func Offset: 0x494
	// Line 1291, Address: 0x108ef0, Func Offset: 0x4a0
	// Line 1297, Address: 0x108f4c, Func Offset: 0x4fc
	// Func End, Address: 0x108f60, Func Offset: 0x510
}

// 
// Start address: 0x108f60
void SubCharacter::PlayerCheckNeckAngle()
{
	float tmp[4];
	float pos[4];
	SubCharacterDisp* this_d;
	// Line 1307, Address: 0x108f60, Func Offset: 0
	// Line 1318, Address: 0x108f70, Func Offset: 0x10
	// Line 1319, Address: 0x108f80, Func Offset: 0x20
	// Line 1326, Address: 0x108fd0, Func Offset: 0x70
	// Line 1327, Address: 0x108fdc, Func Offset: 0x7c
	// Line 1328, Address: 0x108fe8, Func Offset: 0x88
	// Line 1333, Address: 0x108ff0, Func Offset: 0x90
	// Line 1338, Address: 0x109000, Func Offset: 0xa0
	// Line 1339, Address: 0x109010, Func Offset: 0xb0
	// Line 1340, Address: 0x109028, Func Offset: 0xc8
	// Line 1341, Address: 0x109038, Func Offset: 0xd8
	// Line 1342, Address: 0x109040, Func Offset: 0xe0
	// Line 1351, Address: 0x10905c, Func Offset: 0xfc
	// Line 1352, Address: 0x109074, Func Offset: 0x114
	// Line 1354, Address: 0x109084, Func Offset: 0x124
	// Line 1355, Address: 0x10908c, Func Offset: 0x12c
	// Line 1356, Address: 0x109098, Func Offset: 0x138
	// Line 1357, Address: 0x1090a4, Func Offset: 0x144
	// Line 1361, Address: 0x1090ac, Func Offset: 0x14c
	// Line 1362, Address: 0x1090bc, Func Offset: 0x15c
	// Line 1363, Address: 0x1090cc, Func Offset: 0x16c
	// Line 1366, Address: 0x1090dc, Func Offset: 0x17c
	// Line 1367, Address: 0x1090fc, Func Offset: 0x19c
	// Line 1369, Address: 0x109134, Func Offset: 0x1d4
	// Line 1370, Address: 0x1091dc, Func Offset: 0x27c
	// Line 1371, Address: 0x109284, Func Offset: 0x324
	// Line 1372, Address: 0x10928c, Func Offset: 0x32c
	// Line 1373, Address: 0x109298, Func Offset: 0x338
	// Line 1377, Address: 0x1092a4, Func Offset: 0x344
	// Line 1379, Address: 0x1092ac, Func Offset: 0x34c
	// Line 1380, Address: 0x1092e8, Func Offset: 0x388
	// Line 1381, Address: 0x109324, Func Offset: 0x3c4
	// Line 1382, Address: 0x109360, Func Offset: 0x400
	// Line 1383, Address: 0x109368, Func Offset: 0x408
	// Line 1387, Address: 0x1093a4, Func Offset: 0x444
	// Line 1394, Address: 0x1093d4, Func Offset: 0x474
	// Line 1403, Address: 0x109408, Func Offset: 0x4a8
	// Line 1404, Address: 0x109420, Func Offset: 0x4c0
	// Line 1405, Address: 0x109438, Func Offset: 0x4d8
	// Func End, Address: 0x10944c, Func Offset: 0x4ec
}

// 
// Start address: 0x109450
void SubCharacter::PlayerCheckBothArmsAngle()
{
	float tmp[4];
	float pos[4];
	SubCharacterDisp* this_d;
	// Line 1418, Address: 0x109450, Func Offset: 0
	// Line 1431, Address: 0x109464, Func Offset: 0x14
	// Line 1439, Address: 0x109474, Func Offset: 0x24
	// Line 1440, Address: 0x109484, Func Offset: 0x34
	// Line 1441, Address: 0x109494, Func Offset: 0x44
	// Line 1444, Address: 0x1094a4, Func Offset: 0x54
	// Line 1445, Address: 0x1094b4, Func Offset: 0x64
	// Line 1446, Address: 0x109504, Func Offset: 0xb4
	// Line 1449, Address: 0x109514, Func Offset: 0xc4
	// Line 1450, Address: 0x10954c, Func Offset: 0xfc
	// Line 1454, Address: 0x1095f4, Func Offset: 0x1a4
	// Line 1457, Address: 0x109640, Func Offset: 0x1f0
	// Line 1459, Address: 0x10964c, Func Offset: 0x1fc
	// Line 1460, Address: 0x109654, Func Offset: 0x204
	// Line 1465, Address: 0x109660, Func Offset: 0x210
	// Line 1472, Address: 0x10968c, Func Offset: 0x23c
	// Func End, Address: 0x1096a4, Func Offset: 0x254
}

// 
// Start address: 0x1096b0
void SubCharacter::PlayerCheckBodyAngle()
{
	float angle_table[3][3][4];
	int move;
	int hold;
	int wep;
	SubCharacterDisp* this_d;
	// Line 1482, Address: 0x1096b0, Func Offset: 0
	// Line 1504, Address: 0x1096cc, Func Offset: 0x1c
	// Line 1505, Address: 0x1096d0, Func Offset: 0x20
	// Line 1506, Address: 0x1096d8, Func Offset: 0x28
	// Line 1538, Address: 0x109704, Func Offset: 0x54
	// Line 1540, Address: 0x10973c, Func Offset: 0x8c
	// Line 1541, Address: 0x109740, Func Offset: 0x90
	// Line 1543, Address: 0x109748, Func Offset: 0x98
	// Line 1544, Address: 0x10974c, Func Offset: 0x9c
	// Line 1546, Address: 0x109754, Func Offset: 0xa4
	// Line 1547, Address: 0x109758, Func Offset: 0xa8
	// Line 1549, Address: 0x109760, Func Offset: 0xb0
	// Line 1553, Address: 0x109764, Func Offset: 0xb4
	// Line 1555, Address: 0x109790, Func Offset: 0xe0
	// Line 1556, Address: 0x109794, Func Offset: 0xe4
	// Line 1558, Address: 0x10979c, Func Offset: 0xec
	// Line 1559, Address: 0x1097a0, Func Offset: 0xf0
	// Line 1561, Address: 0x1097a8, Func Offset: 0xf8
	// Line 1565, Address: 0x1097ac, Func Offset: 0xfc
	// Line 1568, Address: 0x1097f0, Func Offset: 0x140
	// Line 1569, Address: 0x1097f4, Func Offset: 0x144
	// Line 1572, Address: 0x1097fc, Func Offset: 0x14c
	// Line 1573, Address: 0x109800, Func Offset: 0x150
	// Line 1575, Address: 0x109808, Func Offset: 0x158
	// Line 1579, Address: 0x10980c, Func Offset: 0x15c
	// Line 1581, Address: 0x109840, Func Offset: 0x190
	// Line 1583, Address: 0x109860, Func Offset: 0x1b0
	// Line 1590, Address: 0x10988c, Func Offset: 0x1dc
	// Line 1592, Address: 0x109894, Func Offset: 0x1e4
	// Line 1600, Address: 0x1098c0, Func Offset: 0x210
	// Func End, Address: 0x1098e0, Func Offset: 0x230
}

// 
// Start address: 0x1098e0
void SubCharacter::PlayerCheckSetParameterPhase1()
{
	int wep;
	// Line 1609, Address: 0x1098e0, Func Offset: 0
	// Line 1614, Address: 0x1098f0, Func Offset: 0x10
	// Line 1616, Address: 0x1098fc, Func Offset: 0x1c
	// Line 1620, Address: 0x109908, Func Offset: 0x28
	// Line 1621, Address: 0x10991c, Func Offset: 0x3c
	// Line 1622, Address: 0x109928, Func Offset: 0x48
	// Line 1623, Address: 0x109944, Func Offset: 0x64
	// Line 1627, Address: 0x109960, Func Offset: 0x80
	// Func End, Address: 0x109974, Func Offset: 0x94
}

// 
// Start address: 0x109980
void SubCharacter::PlayerCheckSetParameterPhase2()
{
	// Line 1636, Address: 0x109980, Func Offset: 0
	// Line 1640, Address: 0x10998c, Func Offset: 0xc
	// Line 1642, Address: 0x109998, Func Offset: 0x18
	// Line 1651, Address: 0x1099a4, Func Offset: 0x24
	// Line 1652, Address: 0x1099b0, Func Offset: 0x30
	// Line 1653, Address: 0x1099bc, Func Offset: 0x3c
	// Line 1654, Address: 0x1099c8, Func Offset: 0x48
	// Func End, Address: 0x1099d8, Func Offset: 0x58
}

// 
// Start address: 0x1099e0
void PlayerCheckModelParts()
{
	int status;
	int rhand;
	int lhand;
	int light;
	short frame;
	_AnimeInfo* a_info;
	// Line 1706, Address: 0x1099e0, Func Offset: 0
	// Line 1712, Address: 0x109a00, Func Offset: 0x20
	// Line 1713, Address: 0x109a18, Func Offset: 0x38
	// Line 1718, Address: 0x109a34, Func Offset: 0x54
	// Line 1719, Address: 0x109a4c, Func Offset: 0x6c
	// Line 1720, Address: 0x109a50, Func Offset: 0x70
	// Line 1721, Address: 0x109a58, Func Offset: 0x78
	// Line 1725, Address: 0x109a5c, Func Offset: 0x7c
	// Line 1733, Address: 0x109b3c, Func Offset: 0x15c
	// Line 1734, Address: 0x109b40, Func Offset: 0x160
	// Line 1741, Address: 0x109b48, Func Offset: 0x168
	// Line 1742, Address: 0x109b4c, Func Offset: 0x16c
	// Line 1746, Address: 0x109b54, Func Offset: 0x174
	// Line 1747, Address: 0x109b58, Func Offset: 0x178
	// Line 1750, Address: 0x109b60, Func Offset: 0x180
	// Line 1760, Address: 0x109b64, Func Offset: 0x184
	// Line 1764, Address: 0x109b98, Func Offset: 0x1b8
	// Line 1768, Address: 0x109bcc, Func Offset: 0x1ec
	// Line 1769, Address: 0x109bd0, Func Offset: 0x1f0
	// Line 1770, Address: 0x109bd4, Func Offset: 0x1f4
	// Line 1772, Address: 0x109bdc, Func Offset: 0x1fc
	// Line 1773, Address: 0x109be0, Func Offset: 0x200
	// Line 1776, Address: 0x109be4, Func Offset: 0x204
	// Line 1778, Address: 0x109c10, Func Offset: 0x230
	// Line 1779, Address: 0x109c14, Func Offset: 0x234
	// Line 1781, Address: 0x109c1c, Func Offset: 0x23c
	// Line 1784, Address: 0x109c20, Func Offset: 0x240
	// Line 1787, Address: 0x109c28, Func Offset: 0x248
	// Line 1789, Address: 0x109c3c, Func Offset: 0x25c
	// Line 1790, Address: 0x109c40, Func Offset: 0x260
	// Line 1792, Address: 0x109c48, Func Offset: 0x268
	// Line 1795, Address: 0x109c4c, Func Offset: 0x26c
	// Line 1796, Address: 0x109c50, Func Offset: 0x270
	// Line 1798, Address: 0x109c58, Func Offset: 0x278
	// Line 1801, Address: 0x109c8c, Func Offset: 0x2ac
	// Line 1802, Address: 0x109c90, Func Offset: 0x2b0
	// Line 1805, Address: 0x109c98, Func Offset: 0x2b8
	// Line 1810, Address: 0x109c9c, Func Offset: 0x2bc
	// Line 1811, Address: 0x109ca8, Func Offset: 0x2c8
	// Line 1812, Address: 0x109cc0, Func Offset: 0x2e0
	// Line 1813, Address: 0x109ce8, Func Offset: 0x308
	// Line 1814, Address: 0x109cec, Func Offset: 0x30c
	// Line 1815, Address: 0x109cf4, Func Offset: 0x314
	// Line 1820, Address: 0x109cf8, Func Offset: 0x318
	// Line 1821, Address: 0x109cfc, Func Offset: 0x31c
	// Line 1824, Address: 0x109d04, Func Offset: 0x324
	// Line 1827, Address: 0x109d38, Func Offset: 0x358
	// Line 1828, Address: 0x109d3c, Func Offset: 0x35c
	// Line 1830, Address: 0x109d44, Func Offset: 0x364
	// Line 1831, Address: 0x109d48, Func Offset: 0x368
	// Line 1833, Address: 0x109d50, Func Offset: 0x370
	// Line 1836, Address: 0x109d54, Func Offset: 0x374
	// Line 1837, Address: 0x109d58, Func Offset: 0x378
	// Line 1839, Address: 0x109d60, Func Offset: 0x380
	// Line 1841, Address: 0x109d74, Func Offset: 0x394
	// Line 1842, Address: 0x109d78, Func Offset: 0x398
	// Line 1844, Address: 0x109d80, Func Offset: 0x3a0
	// Line 1847, Address: 0x109d84, Func Offset: 0x3a4
	// Line 1848, Address: 0x109d88, Func Offset: 0x3a8
	// Line 1850, Address: 0x109d90, Func Offset: 0x3b0
	// Line 1851, Address: 0x109d94, Func Offset: 0x3b4
	// Line 1855, Address: 0x109d98, Func Offset: 0x3b8
	// Line 1856, Address: 0x109db4, Func Offset: 0x3d4
	// Func End, Address: 0x109ddc, Func Offset: 0x3fc
}

// 
// Start address: 0x109de0
void james_anim_set_all(_AnimeInfo* aip, int comp_type)
{
	// Line 1886, Address: 0x109de0, Func Offset: 0
	// Line 1887, Address: 0x109df0, Func Offset: 0x10
	// Line 1889, Address: 0x109e20, Func Offset: 0x40
	// Line 1891, Address: 0x109e50, Func Offset: 0x70
	// Func End, Address: 0x109e60, Func Offset: 0x80
}

// 
// Start address: 0x109e60
void james_anim_set(_AnimeInfo* aip, int body_type, int comp_type)
{
	// Line 1917, Address: 0x109e60, Func Offset: 0
	// Line 1918, Address: 0x109e74, Func Offset: 0x14
	// Line 1920, Address: 0x109ea4, Func Offset: 0x44
	// Func End, Address: 0x109eb4, Func Offset: 0x54
}

// 
// Start address: 0x109ec0
void PlayerCheckAnimeUpper()
{
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
	// Line 1972, Address: 0x109ec0, Func Offset: 0
	// Line 1976, Address: 0x109eec, Func Offset: 0x2c
	// Line 1989, Address: 0x109ef8, Func Offset: 0x38
	// Line 1991, Address: 0x109f0c, Func Offset: 0x4c
	// Line 1994, Address: 0x109f3c, Func Offset: 0x7c
	// Line 1997, Address: 0x109f70, Func Offset: 0xb0
	// Line 1998, Address: 0x109f78, Func Offset: 0xb8
	// Line 1999, Address: 0x109f8c, Func Offset: 0xcc
	// Line 2016, Address: 0x109fa0, Func Offset: 0xe0
	// Line 2018, Address: 0x109fa8, Func Offset: 0xe8
	// Line 2019, Address: 0x109fb0, Func Offset: 0xf0
	// Line 2020, Address: 0x109fc4, Func Offset: 0x104
	// Line 2021, Address: 0x109fd8, Func Offset: 0x118
	// Line 2023, Address: 0x109fe0, Func Offset: 0x120
	// Line 2024, Address: 0x109fec, Func Offset: 0x12c
	// Line 2025, Address: 0x10a000, Func Offset: 0x140
	// Line 2026, Address: 0x10a01c, Func Offset: 0x15c
	// Line 2028, Address: 0x10a024, Func Offset: 0x164
	// Line 2029, Address: 0x10a02c, Func Offset: 0x16c
	// Line 2030, Address: 0x10a040, Func Offset: 0x180
	// Line 2031, Address: 0x10a05c, Func Offset: 0x19c
	// Line 2033, Address: 0x10a064, Func Offset: 0x1a4
	// Line 2034, Address: 0x10a070, Func Offset: 0x1b0
	// Line 2035, Address: 0x10a084, Func Offset: 0x1c4
	// Line 2036, Address: 0x10a098, Func Offset: 0x1d8
	// Line 2041, Address: 0x10a0a0, Func Offset: 0x1e0
	// Line 2043, Address: 0x10a0d0, Func Offset: 0x210
	// Line 2044, Address: 0x10a0d8, Func Offset: 0x218
	// Line 2045, Address: 0x10a0ec, Func Offset: 0x22c
	// Line 2047, Address: 0x10a0f4, Func Offset: 0x234
	// Line 2048, Address: 0x10a0fc, Func Offset: 0x23c
	// Line 2051, Address: 0x10a110, Func Offset: 0x250
	// Line 2052, Address: 0x10a118, Func Offset: 0x258
	// Line 2054, Address: 0x10a130, Func Offset: 0x270
	// Line 2059, Address: 0x10a138, Func Offset: 0x278
	// Line 2061, Address: 0x10a168, Func Offset: 0x2a8
	// Line 2062, Address: 0x10a170, Func Offset: 0x2b0
	// Line 2063, Address: 0x10a188, Func Offset: 0x2c8
	// Line 2065, Address: 0x10a190, Func Offset: 0x2d0
	// Line 2066, Address: 0x10a198, Func Offset: 0x2d8
	// Line 2068, Address: 0x10a1ac, Func Offset: 0x2ec
	// Line 2069, Address: 0x10a1b4, Func Offset: 0x2f4
	// Line 2071, Address: 0x10a1cc, Func Offset: 0x30c
	// Line 2076, Address: 0x10a1d4, Func Offset: 0x314
	// Line 2078, Address: 0x10a204, Func Offset: 0x344
	// Line 2079, Address: 0x10a20c, Func Offset: 0x34c
	// Line 2080, Address: 0x10a220, Func Offset: 0x360
	// Line 2082, Address: 0x10a228, Func Offset: 0x368
	// Line 2083, Address: 0x10a230, Func Offset: 0x370
	// Line 2085, Address: 0x10a244, Func Offset: 0x384
	// Line 2086, Address: 0x10a24c, Func Offset: 0x38c
	// Line 2088, Address: 0x10a260, Func Offset: 0x3a0
	// Line 2090, Address: 0x10a268, Func Offset: 0x3a8
	// Line 2092, Address: 0x10a270, Func Offset: 0x3b0
	// Line 2093, Address: 0x10a284, Func Offset: 0x3c4
	// Line 2094, Address: 0x10a298, Func Offset: 0x3d8
	// Line 2096, Address: 0x10a2a0, Func Offset: 0x3e0
	// Line 2097, Address: 0x10a2a8, Func Offset: 0x3e8
	// Line 2098, Address: 0x10a2c0, Func Offset: 0x400
	// Line 2099, Address: 0x10a2d4, Func Offset: 0x414
	// Line 2104, Address: 0x10a2dc, Func Offset: 0x41c
	// Line 2106, Address: 0x10a30c, Func Offset: 0x44c
	// Line 2107, Address: 0x10a314, Func Offset: 0x454
	// Line 2108, Address: 0x10a32c, Func Offset: 0x46c
	// Line 2110, Address: 0x10a334, Func Offset: 0x474
	// Line 2111, Address: 0x10a33c, Func Offset: 0x47c
	// Line 2113, Address: 0x10a354, Func Offset: 0x494
	// Line 2114, Address: 0x10a35c, Func Offset: 0x49c
	// Line 2116, Address: 0x10a370, Func Offset: 0x4b0
	// Line 2121, Address: 0x10a378, Func Offset: 0x4b8
	// Line 2123, Address: 0x10a3a8, Func Offset: 0x4e8
	// Line 2124, Address: 0x10a3b0, Func Offset: 0x4f0
	// Line 2125, Address: 0x10a3c4, Func Offset: 0x504
	// Line 2127, Address: 0x10a3cc, Func Offset: 0x50c
	// Line 2128, Address: 0x10a3d4, Func Offset: 0x514
	// Line 2130, Address: 0x10a3e8, Func Offset: 0x528
	// Line 2131, Address: 0x10a3f0, Func Offset: 0x530
	// Line 2133, Address: 0x10a404, Func Offset: 0x544
	// Line 2138, Address: 0x10a40c, Func Offset: 0x54c
	// Line 2140, Address: 0x10a43c, Func Offset: 0x57c
	// Line 2141, Address: 0x10a444, Func Offset: 0x584
	// Line 2142, Address: 0x10a458, Func Offset: 0x598
	// Line 2144, Address: 0x10a460, Func Offset: 0x5a0
	// Line 2145, Address: 0x10a468, Func Offset: 0x5a8
	// Line 2147, Address: 0x10a47c, Func Offset: 0x5bc
	// Line 2148, Address: 0x10a484, Func Offset: 0x5c4
	// Line 2150, Address: 0x10a498, Func Offset: 0x5d8
	// Line 2155, Address: 0x10a4a0, Func Offset: 0x5e0
	// Line 2157, Address: 0x10a4d0, Func Offset: 0x610
	// Line 2158, Address: 0x10a4d8, Func Offset: 0x618
	// Line 2159, Address: 0x10a4ec, Func Offset: 0x62c
	// Line 2161, Address: 0x10a4f4, Func Offset: 0x634
	// Line 2162, Address: 0x10a4fc, Func Offset: 0x63c
	// Line 2164, Address: 0x10a510, Func Offset: 0x650
	// Line 2165, Address: 0x10a518, Func Offset: 0x658
	// Line 2167, Address: 0x10a52c, Func Offset: 0x66c
	// Line 2172, Address: 0x10a534, Func Offset: 0x674
	// Line 2174, Address: 0x10a564, Func Offset: 0x6a4
	// Line 2175, Address: 0x10a56c, Func Offset: 0x6ac
	// Line 2176, Address: 0x10a580, Func Offset: 0x6c0
	// Line 2178, Address: 0x10a588, Func Offset: 0x6c8
	// Line 2179, Address: 0x10a590, Func Offset: 0x6d0
	// Line 2181, Address: 0x10a5a8, Func Offset: 0x6e8
	// Line 2182, Address: 0x10a5b4, Func Offset: 0x6f4
	// Line 2184, Address: 0x10a5cc, Func Offset: 0x70c
	// Line 2187, Address: 0x10a5d4, Func Offset: 0x714
	// Line 2188, Address: 0x10a5e0, Func Offset: 0x720
	// Line 2190, Address: 0x10a5f4, Func Offset: 0x734
	// Line 2192, Address: 0x10a5fc, Func Offset: 0x73c
	// Line 2193, Address: 0x10a604, Func Offset: 0x744
	// Line 2195, Address: 0x10a618, Func Offset: 0x758
	// Line 2197, Address: 0x10a620, Func Offset: 0x760
	// Line 2198, Address: 0x10a62c, Func Offset: 0x76c
	// Line 2200, Address: 0x10a644, Func Offset: 0x784
	// Line 2203, Address: 0x10a64c, Func Offset: 0x78c
	// Line 2204, Address: 0x10a658, Func Offset: 0x798
	// Line 2205, Address: 0x10a678, Func Offset: 0x7b8
	// Line 2206, Address: 0x10a694, Func Offset: 0x7d4
	// Line 2208, Address: 0x10a69c, Func Offset: 0x7dc
	// Line 2209, Address: 0x10a6a8, Func Offset: 0x7e8
	// Line 2210, Address: 0x10a6c8, Func Offset: 0x808
	// Line 2211, Address: 0x10a6e4, Func Offset: 0x824
	// Line 2213, Address: 0x10a6ec, Func Offset: 0x82c
	// Line 2214, Address: 0x10a704, Func Offset: 0x844
	// Line 2215, Address: 0x10a710, Func Offset: 0x850
	// Line 2216, Address: 0x10a718, Func Offset: 0x858
	// Line 2218, Address: 0x10a724, Func Offset: 0x864
	// Line 2219, Address: 0x10a73c, Func Offset: 0x87c
	// Line 2220, Address: 0x10a758, Func Offset: 0x898
	// Line 2225, Address: 0x10a760, Func Offset: 0x8a0
	// Line 2226, Address: 0x10a778, Func Offset: 0x8b8
	// Line 2227, Address: 0x10a784, Func Offset: 0x8c4
	// Line 2228, Address: 0x10a7a8, Func Offset: 0x8e8
	// Line 2229, Address: 0x10a7c0, Func Offset: 0x900
	// Line 2231, Address: 0x10a7dc, Func Offset: 0x91c
	// Line 2235, Address: 0x10a7e4, Func Offset: 0x924
	// Line 2240, Address: 0x10a7e8, Func Offset: 0x928
	// Line 2241, Address: 0x10a800, Func Offset: 0x940
	// Line 2245, Address: 0x10a834, Func Offset: 0x974
	// Line 2248, Address: 0x10a854, Func Offset: 0x994
	// Line 2249, Address: 0x10a858, Func Offset: 0x998
	// Line 2250, Address: 0x10a860, Func Offset: 0x9a0
	// Line 2251, Address: 0x10a868, Func Offset: 0x9a8
	// Line 2253, Address: 0x10a888, Func Offset: 0x9c8
	// Line 2256, Address: 0x10a890, Func Offset: 0x9d0
	// Line 2257, Address: 0x10a8a0, Func Offset: 0x9e0
	// Line 2258, Address: 0x10a8ac, Func Offset: 0x9ec
	// Line 2259, Address: 0x10a8b4, Func Offset: 0x9f4
	// Line 2260, Address: 0x10a8bc, Func Offset: 0x9fc
	// Line 2262, Address: 0x10a8c4, Func Offset: 0xa04
	// Line 2264, Address: 0x10a8c8, Func Offset: 0xa08
	// Line 2267, Address: 0x10a8d0, Func Offset: 0xa10
	// Line 2268, Address: 0x10a8d4, Func Offset: 0xa14
	// Line 2271, Address: 0x10a8dc, Func Offset: 0xa1c
	// Line 2272, Address: 0x10a8e4, Func Offset: 0xa24
	// Line 2273, Address: 0x10a8f4, Func Offset: 0xa34
	// Line 2276, Address: 0x10a8fc, Func Offset: 0xa3c
	// Line 2278, Address: 0x10a904, Func Offset: 0xa44
	// Line 2279, Address: 0x10a91c, Func Offset: 0xa5c
	// Line 2281, Address: 0x10a920, Func Offset: 0xa60
	// Line 2283, Address: 0x10a928, Func Offset: 0xa68
	// Line 2284, Address: 0x10a938, Func Offset: 0xa78
	// Line 2286, Address: 0x10a950, Func Offset: 0xa90
	// Line 2287, Address: 0x10a954, Func Offset: 0xa94
	// Line 2288, Address: 0x10a960, Func Offset: 0xaa0
	// Line 2290, Address: 0x10a968, Func Offset: 0xaa8
	// Line 2291, Address: 0x10a970, Func Offset: 0xab0
	// Line 2293, Address: 0x10a978, Func Offset: 0xab8
	// Line 2294, Address: 0x10a980, Func Offset: 0xac0
	// Line 2297, Address: 0x10a99c, Func Offset: 0xadc
	// Line 2298, Address: 0x10a9a4, Func Offset: 0xae4
	// Line 2299, Address: 0x10a9b4, Func Offset: 0xaf4
	// Line 2300, Address: 0x10a9cc, Func Offset: 0xb0c
	// Line 2301, Address: 0x10a9d0, Func Offset: 0xb10
	// Line 2303, Address: 0x10a9d8, Func Offset: 0xb18
	// Line 2305, Address: 0x10a9e0, Func Offset: 0xb20
	// Line 2306, Address: 0x10a9e8, Func Offset: 0xb28
	// Line 2309, Address: 0x10aa04, Func Offset: 0xb44
	// Line 2310, Address: 0x10aa0c, Func Offset: 0xb4c
	// Line 2312, Address: 0x10aa10, Func Offset: 0xb50
	// Line 2314, Address: 0x10aa18, Func Offset: 0xb58
	// Line 2315, Address: 0x10aa28, Func Offset: 0xb68
	// Line 2316, Address: 0x10aa40, Func Offset: 0xb80
	// Line 2317, Address: 0x10aa44, Func Offset: 0xb84
	// Line 2318, Address: 0x10aa50, Func Offset: 0xb90
	// Line 2319, Address: 0x10aa58, Func Offset: 0xb98
	// Line 2320, Address: 0x10aa5c, Func Offset: 0xb9c
	// Line 2322, Address: 0x10aa64, Func Offset: 0xba4
	// Line 2323, Address: 0x10aa68, Func Offset: 0xba8
	// Line 2326, Address: 0x10aa84, Func Offset: 0xbc4
	// Line 2327, Address: 0x10aa8c, Func Offset: 0xbcc
	// Line 2328, Address: 0x10aa9c, Func Offset: 0xbdc
	// Line 2329, Address: 0x10aab4, Func Offset: 0xbf4
	// Line 2330, Address: 0x10aab8, Func Offset: 0xbf8
	// Line 2332, Address: 0x10aac0, Func Offset: 0xc00
	// Line 2334, Address: 0x10aac8, Func Offset: 0xc08
	// Line 2335, Address: 0x10aad0, Func Offset: 0xc10
	// Line 2338, Address: 0x10aaec, Func Offset: 0xc2c
	// Line 2339, Address: 0x10aaf4, Func Offset: 0xc34
	// Line 2341, Address: 0x10aaf8, Func Offset: 0xc38
	// Line 2343, Address: 0x10ab00, Func Offset: 0xc40
	// Line 2344, Address: 0x10ab10, Func Offset: 0xc50
	// Line 2346, Address: 0x10ab28, Func Offset: 0xc68
	// Line 2347, Address: 0x10ab30, Func Offset: 0xc70
	// Line 2348, Address: 0x10ab3c, Func Offset: 0xc7c
	// Line 2350, Address: 0x10ab44, Func Offset: 0xc84
	// Line 2351, Address: 0x10ab4c, Func Offset: 0xc8c
	// Line 2353, Address: 0x10ab54, Func Offset: 0xc94
	// Line 2354, Address: 0x10ab58, Func Offset: 0xc98
	// Line 2357, Address: 0x10ab78, Func Offset: 0xcb8
	// Line 2358, Address: 0x10ab80, Func Offset: 0xcc0
	// Line 2359, Address: 0x10ab90, Func Offset: 0xcd0
	// Line 2360, Address: 0x10aba8, Func Offset: 0xce8
	// Line 2361, Address: 0x10abac, Func Offset: 0xcec
	// Line 2362, Address: 0x10abb4, Func Offset: 0xcf4
	// Line 2364, Address: 0x10abbc, Func Offset: 0xcfc
	// Line 2365, Address: 0x10abc0, Func Offset: 0xd00
	// Line 2368, Address: 0x10abdc, Func Offset: 0xd1c
	// Line 2369, Address: 0x10abe4, Func Offset: 0xd24
	// Line 2371, Address: 0x10abe8, Func Offset: 0xd28
	// Line 2373, Address: 0x10abf0, Func Offset: 0xd30
	// Line 2374, Address: 0x10ac00, Func Offset: 0xd40
	// Line 2376, Address: 0x10ac18, Func Offset: 0xd58
	// Line 2377, Address: 0x10ac20, Func Offset: 0xd60
	// Line 2378, Address: 0x10ac2c, Func Offset: 0xd6c
	// Line 2380, Address: 0x10ac34, Func Offset: 0xd74
	// Line 2381, Address: 0x10ac3c, Func Offset: 0xd7c
	// Line 2383, Address: 0x10ac44, Func Offset: 0xd84
	// Line 2384, Address: 0x10ac4c, Func Offset: 0xd8c
	// Line 2387, Address: 0x10ac68, Func Offset: 0xda8
	// Line 2388, Address: 0x10ac70, Func Offset: 0xdb0
	// Line 2389, Address: 0x10ac80, Func Offset: 0xdc0
	// Line 2390, Address: 0x10ac98, Func Offset: 0xdd8
	// Line 2391, Address: 0x10aca0, Func Offset: 0xde0
	// Line 2392, Address: 0x10aca8, Func Offset: 0xde8
	// Line 2394, Address: 0x10acb0, Func Offset: 0xdf0
	// Line 2395, Address: 0x10acb4, Func Offset: 0xdf4
	// Line 2398, Address: 0x10acd4, Func Offset: 0xe14
	// Line 2399, Address: 0x10acdc, Func Offset: 0xe1c
	// Line 2403, Address: 0x10ace0, Func Offset: 0xe20
	// Line 2404, Address: 0x10ace8, Func Offset: 0xe28
	// Line 2405, Address: 0x10ad00, Func Offset: 0xe40
	// Line 2407, Address: 0x10ad14, Func Offset: 0xe54
	// Line 2408, Address: 0x10ad1c, Func Offset: 0xe5c
	// Line 2409, Address: 0x10ad34, Func Offset: 0xe74
	// Line 2410, Address: 0x10ad3c, Func Offset: 0xe7c
	// Line 2411, Address: 0x10ad44, Func Offset: 0xe84
	// Line 2413, Address: 0x10ad4c, Func Offset: 0xe8c
	// Line 2418, Address: 0x10ad80, Func Offset: 0xec0
	// Line 2419, Address: 0x10ad9c, Func Offset: 0xedc
	// Line 2420, Address: 0x10ada0, Func Offset: 0xee0
	// Line 2421, Address: 0x10ada8, Func Offset: 0xee8
	// Line 2422, Address: 0x10adb0, Func Offset: 0xef0
	// Line 2423, Address: 0x10adc0, Func Offset: 0xf00
	// Line 2424, Address: 0x10adc8, Func Offset: 0xf08
	// Line 2425, Address: 0x10add4, Func Offset: 0xf14
	// Line 2426, Address: 0x10addc, Func Offset: 0xf1c
	// Line 2427, Address: 0x10ade0, Func Offset: 0xf20
	// Line 2431, Address: 0x10ade8, Func Offset: 0xf28
	// Line 2433, Address: 0x10ae08, Func Offset: 0xf48
	// Line 2435, Address: 0x10ae10, Func Offset: 0xf50
	// Line 2436, Address: 0x10ae18, Func Offset: 0xf58
	// Line 2437, Address: 0x10ae24, Func Offset: 0xf64
	// Line 2439, Address: 0x10ae44, Func Offset: 0xf84
	// Line 2441, Address: 0x10ae4c, Func Offset: 0xf8c
	// Line 2442, Address: 0x10ae54, Func Offset: 0xf94
	// Line 2443, Address: 0x10ae60, Func Offset: 0xfa0
	// Line 2445, Address: 0x10ae80, Func Offset: 0xfc0
	// Line 2448, Address: 0x10ae88, Func Offset: 0xfc8
	// Line 2449, Address: 0x10ae98, Func Offset: 0xfd8
	// Line 2450, Address: 0x10ae9c, Func Offset: 0xfdc
	// Line 2451, Address: 0x10aea4, Func Offset: 0xfe4
	// Line 2452, Address: 0x10aeac, Func Offset: 0xfec
	// Line 2454, Address: 0x10aeb8, Func Offset: 0xff8
	// Line 2456, Address: 0x10aed8, Func Offset: 0x1018
	// Line 2458, Address: 0x10aee0, Func Offset: 0x1020
	// Line 2459, Address: 0x10aef0, Func Offset: 0x1030
	// Line 2461, Address: 0x10af08, Func Offset: 0x1048
	// Line 2462, Address: 0x10af10, Func Offset: 0x1050
	// Line 2463, Address: 0x10af1c, Func Offset: 0x105c
	// Line 2465, Address: 0x10af24, Func Offset: 0x1064
	// Line 2466, Address: 0x10af2c, Func Offset: 0x106c
	// Line 2468, Address: 0x10af34, Func Offset: 0x1074
	// Line 2469, Address: 0x10af3c, Func Offset: 0x107c
	// Line 2470, Address: 0x10af4c, Func Offset: 0x108c
	// Line 2471, Address: 0x10af64, Func Offset: 0x10a4
	// Line 2472, Address: 0x10af68, Func Offset: 0x10a8
	// Line 2474, Address: 0x10af70, Func Offset: 0x10b0
	// Line 2476, Address: 0x10af74, Func Offset: 0x10b4
	// Line 2477, Address: 0x10af78, Func Offset: 0x10b8
	// Line 2478, Address: 0x10af80, Func Offset: 0x10c0
	// Line 2483, Address: 0x10afa8, Func Offset: 0x10e8
	// Line 2485, Address: 0x10afb0, Func Offset: 0x10f0
	// Line 2486, Address: 0x10afbc, Func Offset: 0x10fc
	// Line 2490, Address: 0x10afc4, Func Offset: 0x1104
	// Line 2492, Address: 0x10afcc, Func Offset: 0x110c
	// Line 2495, Address: 0x10afd4, Func Offset: 0x1114
	// Line 2497, Address: 0x10aff4, Func Offset: 0x1134
	// Line 2499, Address: 0x10affc, Func Offset: 0x113c
	// Line 2500, Address: 0x10b00c, Func Offset: 0x114c
	// Line 2502, Address: 0x10b024, Func Offset: 0x1164
	// Line 2503, Address: 0x10b028, Func Offset: 0x1168
	// Line 2504, Address: 0x10b034, Func Offset: 0x1174
	// Line 2506, Address: 0x10b03c, Func Offset: 0x117c
	// Line 2507, Address: 0x10b040, Func Offset: 0x1180
	// Line 2509, Address: 0x10b048, Func Offset: 0x1188
	// Line 2510, Address: 0x10b050, Func Offset: 0x1190
	// Line 2511, Address: 0x10b060, Func Offset: 0x11a0
	// Line 2512, Address: 0x10b078, Func Offset: 0x11b8
	// Line 2513, Address: 0x10b07c, Func Offset: 0x11bc
	// Line 2514, Address: 0x10b084, Func Offset: 0x11c4
	// Line 2516, Address: 0x10b08c, Func Offset: 0x11cc
	// Line 2517, Address: 0x10b094, Func Offset: 0x11d4
	// Line 2518, Address: 0x10b09c, Func Offset: 0x11dc
	// Line 2520, Address: 0x10b0c4, Func Offset: 0x1204
	// Line 2521, Address: 0x10b0cc, Func Offset: 0x120c
	// Line 2522, Address: 0x10b0d8, Func Offset: 0x1218
	// Line 2523, Address: 0x10b0e0, Func Offset: 0x1220
	// Line 2524, Address: 0x10b0e8, Func Offset: 0x1228
	// Line 2527, Address: 0x10b0f0, Func Offset: 0x1230
	// Line 2529, Address: 0x10b10c, Func Offset: 0x124c
	// Line 2531, Address: 0x10b114, Func Offset: 0x1254
	// Line 2532, Address: 0x10b124, Func Offset: 0x1264
	// Line 2534, Address: 0x10b13c, Func Offset: 0x127c
	// Line 2535, Address: 0x10b144, Func Offset: 0x1284
	// Line 2536, Address: 0x10b150, Func Offset: 0x1290
	// Line 2538, Address: 0x10b158, Func Offset: 0x1298
	// Line 2539, Address: 0x10b160, Func Offset: 0x12a0
	// Line 2541, Address: 0x10b168, Func Offset: 0x12a8
	// Line 2542, Address: 0x10b170, Func Offset: 0x12b0
	// Line 2543, Address: 0x10b180, Func Offset: 0x12c0
	// Line 2544, Address: 0x10b198, Func Offset: 0x12d8
	// Line 2545, Address: 0x10b1a0, Func Offset: 0x12e0
	// Line 2546, Address: 0x10b1a8, Func Offset: 0x12e8
	// Line 2548, Address: 0x10b1b0, Func Offset: 0x12f0
	// Line 2549, Address: 0x10b1b8, Func Offset: 0x12f8
	// Line 2550, Address: 0x10b1c0, Func Offset: 0x1300
	// Line 2552, Address: 0x10b1e8, Func Offset: 0x1328
	// Line 2553, Address: 0x10b1ec, Func Offset: 0x132c
	// Line 2554, Address: 0x10b1f8, Func Offset: 0x1338
	// Line 2555, Address: 0x10b200, Func Offset: 0x1340
	// Line 2556, Address: 0x10b208, Func Offset: 0x1348
	// Line 2559, Address: 0x10b210, Func Offset: 0x1350
	// Line 2561, Address: 0x10b22c, Func Offset: 0x136c
	// Line 2563, Address: 0x10b234, Func Offset: 0x1374
	// Line 2564, Address: 0x10b244, Func Offset: 0x1384
	// Line 2566, Address: 0x10b25c, Func Offset: 0x139c
	// Line 2567, Address: 0x10b260, Func Offset: 0x13a0
	// Line 2568, Address: 0x10b26c, Func Offset: 0x13ac
	// Line 2570, Address: 0x10b274, Func Offset: 0x13b4
	// Line 2571, Address: 0x10b27c, Func Offset: 0x13bc
	// Line 2573, Address: 0x10b284, Func Offset: 0x13c4
	// Line 2574, Address: 0x10b28c, Func Offset: 0x13cc
	// Line 2575, Address: 0x10b29c, Func Offset: 0x13dc
	// Line 2576, Address: 0x10b2b4, Func Offset: 0x13f4
	// Line 2577, Address: 0x10b2bc, Func Offset: 0x13fc
	// Line 2579, Address: 0x10b2c4, Func Offset: 0x1404
	// Line 2581, Address: 0x10b2c8, Func Offset: 0x1408
	// Line 2582, Address: 0x10b2cc, Func Offset: 0x140c
	// Line 2583, Address: 0x10b2d4, Func Offset: 0x1414
	// Line 2585, Address: 0x10b2fc, Func Offset: 0x143c
	// Line 2586, Address: 0x10b31c, Func Offset: 0x145c
	// Line 2588, Address: 0x10b32c, Func Offset: 0x146c
	// Line 2589, Address: 0x10b330, Func Offset: 0x1470
	// Line 2590, Address: 0x10b33c, Func Offset: 0x147c
	// Line 2591, Address: 0x10b344, Func Offset: 0x1484
	// Line 2592, Address: 0x10b364, Func Offset: 0x14a4
	// Line 2594, Address: 0x10b370, Func Offset: 0x14b0
	// Line 2595, Address: 0x10b378, Func Offset: 0x14b8
	// Line 2597, Address: 0x10b380, Func Offset: 0x14c0
	// Line 2598, Address: 0x10b3a0, Func Offset: 0x14e0
	// Line 2600, Address: 0x10b3b0, Func Offset: 0x14f0
	// Line 2606, Address: 0x10b3cc, Func Offset: 0x150c
	// Line 2607, Address: 0x10b3e0, Func Offset: 0x1520
	// Line 2610, Address: 0x10b3f4, Func Offset: 0x1534
	// Line 2615, Address: 0x10b3fc, Func Offset: 0x153c
	// Line 2617, Address: 0x10b430, Func Offset: 0x1570
	// Line 2619, Address: 0x10b468, Func Offset: 0x15a8
	// Line 2620, Address: 0x10b470, Func Offset: 0x15b0
	// Line 2621, Address: 0x10b478, Func Offset: 0x15b8
	// Line 2622, Address: 0x10b480, Func Offset: 0x15c0
	// Line 2624, Address: 0x10b484, Func Offset: 0x15c4
	// Line 2625, Address: 0x10b4a4, Func Offset: 0x15e4
	// Line 2627, Address: 0x10b4ac, Func Offset: 0x15ec
	// Line 2628, Address: 0x10b4b4, Func Offset: 0x15f4
	// Line 2629, Address: 0x10b4d0, Func Offset: 0x1610
	// Line 2631, Address: 0x10b4d8, Func Offset: 0x1618
	// Line 2632, Address: 0x10b4e0, Func Offset: 0x1620
	// Line 2633, Address: 0x10b4fc, Func Offset: 0x163c
	// Line 2636, Address: 0x10b504, Func Offset: 0x1644
	// Line 2637, Address: 0x10b50c, Func Offset: 0x164c
	// Line 2638, Address: 0x10b528, Func Offset: 0x1668
	// Line 2640, Address: 0x10b530, Func Offset: 0x1670
	// Line 2641, Address: 0x10b548, Func Offset: 0x1688
	// Line 2642, Address: 0x10b550, Func Offset: 0x1690
	// Line 2643, Address: 0x10b558, Func Offset: 0x1698
	// Line 2645, Address: 0x10b55c, Func Offset: 0x169c
	// Line 2646, Address: 0x10b57c, Func Offset: 0x16bc
	// Line 2648, Address: 0x10b584, Func Offset: 0x16c4
	// Line 2649, Address: 0x10b59c, Func Offset: 0x16dc
	// Line 2650, Address: 0x10b5a0, Func Offset: 0x16e0
	// Line 2651, Address: 0x10b5a8, Func Offset: 0x16e8
	// Line 2653, Address: 0x10b5b0, Func Offset: 0x16f0
	// Line 2654, Address: 0x10b5d0, Func Offset: 0x1710
	// Line 2656, Address: 0x10b5d8, Func Offset: 0x1718
	// Line 2657, Address: 0x10b5f0, Func Offset: 0x1730
	// Line 2658, Address: 0x10b5f8, Func Offset: 0x1738
	// Line 2659, Address: 0x10b600, Func Offset: 0x1740
	// Line 2661, Address: 0x10b608, Func Offset: 0x1748
	// Line 2662, Address: 0x10b628, Func Offset: 0x1768
	// Line 2664, Address: 0x10b630, Func Offset: 0x1770
	// Line 2665, Address: 0x10b648, Func Offset: 0x1788
	// Line 2666, Address: 0x10b64c, Func Offset: 0x178c
	// Line 2667, Address: 0x10b654, Func Offset: 0x1794
	// Line 2669, Address: 0x10b65c, Func Offset: 0x179c
	// Line 2674, Address: 0x10b67c, Func Offset: 0x17bc
	// Line 2675, Address: 0x10b688, Func Offset: 0x17c8
	// Line 2685, Address: 0x10b690, Func Offset: 0x17d0
	// Line 2686, Address: 0x10b6a8, Func Offset: 0x17e8
	// Line 2687, Address: 0x10b6c0, Func Offset: 0x1800
	// Line 2688, Address: 0x10b6c8, Func Offset: 0x1808
	// Line 2689, Address: 0x10b6d0, Func Offset: 0x1810
	// Line 2691, Address: 0x10b6d8, Func Offset: 0x1818
	// Line 2692, Address: 0x10b6e0, Func Offset: 0x1820
	// Line 2694, Address: 0x10b6e4, Func Offset: 0x1824
	// Line 2695, Address: 0x10b6fc, Func Offset: 0x183c
	// Line 2697, Address: 0x10b71c, Func Offset: 0x185c
	// Line 2701, Address: 0x10b724, Func Offset: 0x1864
	// Line 2706, Address: 0x10b72c, Func Offset: 0x186c
	// Line 2708, Address: 0x10b760, Func Offset: 0x18a0
	// Line 2709, Address: 0x10b780, Func Offset: 0x18c0
	// Line 2710, Address: 0x10b790, Func Offset: 0x18d0
	// Line 2711, Address: 0x10b798, Func Offset: 0x18d8
	// Line 2712, Address: 0x10b7a0, Func Offset: 0x18e0
	// Line 2715, Address: 0x10b7a8, Func Offset: 0x18e8
	// Line 2716, Address: 0x10b7b4, Func Offset: 0x18f4
	// Line 2717, Address: 0x10b7bc, Func Offset: 0x18fc
	// Line 2718, Address: 0x10b7c4, Func Offset: 0x1904
	// Line 2720, Address: 0x10b7fc, Func Offset: 0x193c
	// Line 2721, Address: 0x10b800, Func Offset: 0x1940
	// Line 2722, Address: 0x10b808, Func Offset: 0x1948
	// Line 2725, Address: 0x10b810, Func Offset: 0x1950
	// Line 2726, Address: 0x10b830, Func Offset: 0x1970
	// Line 2728, Address: 0x10b838, Func Offset: 0x1978
	// Line 2729, Address: 0x10b858, Func Offset: 0x1998
	// Line 2730, Address: 0x10b860, Func Offset: 0x19a0
	// Line 2731, Address: 0x10b868, Func Offset: 0x19a8
	// Line 2733, Address: 0x10b870, Func Offset: 0x19b0
	// Line 2734, Address: 0x10b890, Func Offset: 0x19d0
	// Line 2736, Address: 0x10b898, Func Offset: 0x19d8
	// Line 2737, Address: 0x10b8b8, Func Offset: 0x19f8
	// Line 2738, Address: 0x10b8bc, Func Offset: 0x19fc
	// Line 2739, Address: 0x10b8c4, Func Offset: 0x1a04
	// Line 2741, Address: 0x10b8cc, Func Offset: 0x1a0c
	// Line 2742, Address: 0x10b8ec, Func Offset: 0x1a2c
	// Line 2745, Address: 0x10b8f4, Func Offset: 0x1a34
	// Line 2746, Address: 0x10b914, Func Offset: 0x1a54
	// Line 2747, Address: 0x10b918, Func Offset: 0x1a58
	// Line 2748, Address: 0x10b920, Func Offset: 0x1a60
	// Line 2750, Address: 0x10b928, Func Offset: 0x1a68
	// Line 2751, Address: 0x10b948, Func Offset: 0x1a88
	// Line 2753, Address: 0x10b950, Func Offset: 0x1a90
	// Line 2755, Address: 0x10b960, Func Offset: 0x1aa0
	// Line 2762, Address: 0x10b98c, Func Offset: 0x1acc
	// Line 2764, Address: 0x10b994, Func Offset: 0x1ad4
	// Line 2766, Address: 0x10b99c, Func Offset: 0x1adc
	// Line 2770, Address: 0x10b9a4, Func Offset: 0x1ae4
	// Line 2772, Address: 0x10b9ac, Func Offset: 0x1aec
	// Line 2779, Address: 0x10b9d8, Func Offset: 0x1b18
	// Line 2781, Address: 0x10b9e0, Func Offset: 0x1b20
	// Line 2783, Address: 0x10b9e8, Func Offset: 0x1b28
	// Line 2788, Address: 0x10b9f0, Func Offset: 0x1b30
	// Line 2789, Address: 0x10ba04, Func Offset: 0x1b44
	// Line 2790, Address: 0x10ba0c, Func Offset: 0x1b4c
	// Line 2802, Address: 0x10ba14, Func Offset: 0x1b54
	// Line 2803, Address: 0x10ba30, Func Offset: 0x1b70
	// Line 2805, Address: 0x10ba38, Func Offset: 0x1b78
	// Line 2807, Address: 0x10ba48, Func Offset: 0x1b88
	// Line 2809, Address: 0x10ba80, Func Offset: 0x1bc0
	// Line 2810, Address: 0x10ba88, Func Offset: 0x1bc8
	// Line 2812, Address: 0x10ba90, Func Offset: 0x1bd0
	// Line 2813, Address: 0x10ba98, Func Offset: 0x1bd8
	// Line 2815, Address: 0x10baa0, Func Offset: 0x1be0
	// Line 2818, Address: 0x10baa8, Func Offset: 0x1be8
	// Line 2820, Address: 0x10bab0, Func Offset: 0x1bf0
	// Line 2822, Address: 0x10bae8, Func Offset: 0x1c28
	// Line 2823, Address: 0x10baec, Func Offset: 0x1c2c
	// Line 2825, Address: 0x10baf4, Func Offset: 0x1c34
	// Line 2826, Address: 0x10bafc, Func Offset: 0x1c3c
	// Line 2828, Address: 0x10bb04, Func Offset: 0x1c44
	// Line 2833, Address: 0x10bb0c, Func Offset: 0x1c4c
	// Line 2834, Address: 0x10bb20, Func Offset: 0x1c60
	// Line 2835, Address: 0x10bb28, Func Offset: 0x1c68
	// Line 2847, Address: 0x10bb30, Func Offset: 0x1c70
	// Line 2848, Address: 0x10bb50, Func Offset: 0x1c90
	// Line 2850, Address: 0x10bb58, Func Offset: 0x1c98
	// Line 2852, Address: 0x10bb68, Func Offset: 0x1ca8
	// Line 2854, Address: 0x10bb94, Func Offset: 0x1cd4
	// Line 2855, Address: 0x10bb9c, Func Offset: 0x1cdc
	// Line 2857, Address: 0x10bba4, Func Offset: 0x1ce4
	// Line 2860, Address: 0x10bbac, Func Offset: 0x1cec
	// Line 2862, Address: 0x10bbb4, Func Offset: 0x1cf4
	// Line 2864, Address: 0x10bbe0, Func Offset: 0x1d20
	// Line 2865, Address: 0x10bbe4, Func Offset: 0x1d24
	// Line 2867, Address: 0x10bbec, Func Offset: 0x1d2c
	// Line 2872, Address: 0x10bbf4, Func Offset: 0x1d34
	// Line 2873, Address: 0x10bc08, Func Offset: 0x1d48
	// Line 2874, Address: 0x10bc0c, Func Offset: 0x1d4c
	// Line 2886, Address: 0x10bc14, Func Offset: 0x1d54
	// Line 2887, Address: 0x10bc34, Func Offset: 0x1d74
	// Line 2892, Address: 0x10bc3c, Func Offset: 0x1d7c
	// Line 2894, Address: 0x10bc4c, Func Offset: 0x1d8c
	// Line 2896, Address: 0x10bc78, Func Offset: 0x1db8
	// Line 2897, Address: 0x10bc80, Func Offset: 0x1dc0
	// Line 2899, Address: 0x10bc88, Func Offset: 0x1dc8
	// Line 2902, Address: 0x10bc90, Func Offset: 0x1dd0
	// Line 2904, Address: 0x10bc98, Func Offset: 0x1dd8
	// Line 2906, Address: 0x10bcc4, Func Offset: 0x1e04
	// Line 2907, Address: 0x10bccc, Func Offset: 0x1e0c
	// Line 2909, Address: 0x10bcd4, Func Offset: 0x1e14
	// Line 2931, Address: 0x10bcdc, Func Offset: 0x1e1c
	// Line 2937, Address: 0x10bcf8, Func Offset: 0x1e38
	// Line 2940, Address: 0x10bd10, Func Offset: 0x1e50
	// Line 2945, Address: 0x10bd18, Func Offset: 0x1e58
	// Line 2947, Address: 0x10bd34, Func Offset: 0x1e74
	// Line 2948, Address: 0x10bd3c, Func Offset: 0x1e7c
	// Line 2949, Address: 0x10bd44, Func Offset: 0x1e84
	// Line 2950, Address: 0x10bd58, Func Offset: 0x1e98
	// Line 2951, Address: 0x10bd60, Func Offset: 0x1ea0
	// Line 2953, Address: 0x10bd68, Func Offset: 0x1ea8
	// Line 2954, Address: 0x10bda8, Func Offset: 0x1ee8
	// Line 2955, Address: 0x10bdb0, Func Offset: 0x1ef0
	// Line 2956, Address: 0x10bdb8, Func Offset: 0x1ef8
	// Line 2958, Address: 0x10bdc0, Func Offset: 0x1f00
	// Line 2960, Address: 0x10bdd8, Func Offset: 0x1f18
	// Line 2961, Address: 0x10bdfc, Func Offset: 0x1f3c
	// Line 2963, Address: 0x10be1c, Func Offset: 0x1f5c
	// Line 2968, Address: 0x10be24, Func Offset: 0x1f64
	// Line 2969, Address: 0x10be3c, Func Offset: 0x1f7c
	// Line 2970, Address: 0x10be44, Func Offset: 0x1f84
	// Line 2971, Address: 0x10be4c, Func Offset: 0x1f8c
	// Line 2973, Address: 0x10be54, Func Offset: 0x1f94
	// Line 2974, Address: 0x10be70, Func Offset: 0x1fb0
	// Line 2975, Address: 0x10be94, Func Offset: 0x1fd4
	// Line 2977, Address: 0x10beb0, Func Offset: 0x1ff0
	// Line 2983, Address: 0x10beb8, Func Offset: 0x1ff8
	// Line 2987, Address: 0x10bf08, Func Offset: 0x2048
	// Line 2988, Address: 0x10bf10, Func Offset: 0x2050
	// Line 2990, Address: 0x10bf18, Func Offset: 0x2058
	// Line 2991, Address: 0x10bf20, Func Offset: 0x2060
	// Line 2993, Address: 0x10bf28, Func Offset: 0x2068
	// Line 2994, Address: 0x10bf30, Func Offset: 0x2070
	// Line 2996, Address: 0x10bf38, Func Offset: 0x2078
	// Line 3000, Address: 0x10bf5c, Func Offset: 0x209c
	// Line 3001, Address: 0x10bf78, Func Offset: 0x20b8
	// Line 3002, Address: 0x10bf9c, Func Offset: 0x20dc
	// Line 3004, Address: 0x10bfb4, Func Offset: 0x20f4
	// Line 3007, Address: 0x10bfbc, Func Offset: 0x20fc
	// Line 3008, Address: 0x10bfe8, Func Offset: 0x2128
	// Line 3009, Address: 0x10c008, Func Offset: 0x2148
	// Line 3010, Address: 0x10c020, Func Offset: 0x2160
	// Line 3023, Address: 0x10c028, Func Offset: 0x2168
	// Line 3025, Address: 0x10c038, Func Offset: 0x2178
	// Line 3062, Address: 0x10c058, Func Offset: 0x2198
	// Line 3063, Address: 0x10c078, Func Offset: 0x21b8
	// Line 3065, Address: 0x10c098, Func Offset: 0x21d8
	// Line 3070, Address: 0x10c0a0, Func Offset: 0x21e0
	// Line 3075, Address: 0x10c0ac, Func Offset: 0x21ec
	// Line 3076, Address: 0x10c0c4, Func Offset: 0x2204
	// Line 3077, Address: 0x10c0d4, Func Offset: 0x2214
	// Line 3079, Address: 0x10c100, Func Offset: 0x2240
	// Line 3080, Address: 0x10c120, Func Offset: 0x2260
	// Line 3084, Address: 0x10c134, Func Offset: 0x2274
	// Line 3085, Address: 0x10c148, Func Offset: 0x2288
	// Line 3091, Address: 0x10c168, Func Offset: 0x22a8
	// Line 3092, Address: 0x10c198, Func Offset: 0x22d8
	// Line 3094, Address: 0x10c1b4, Func Offset: 0x22f4
	// Line 3095, Address: 0x10c1cc, Func Offset: 0x230c
	// Line 3098, Address: 0x10c1e8, Func Offset: 0x2328
	// Line 3099, Address: 0x10c200, Func Offset: 0x2340
	// Line 3100, Address: 0x10c214, Func Offset: 0x2354
	// Line 3101, Address: 0x10c21c, Func Offset: 0x235c
	// Line 3107, Address: 0x10c230, Func Offset: 0x2370
	// Line 3108, Address: 0x10c238, Func Offset: 0x2378
	// Line 3111, Address: 0x10c240, Func Offset: 0x2380
	// Func End, Address: 0x10c274, Func Offset: 0x23b4
}

// 
// Start address: 0x10c280
void PlayerCheckAnimeLower()
{
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
	// Line 3116, Address: 0x10c280, Func Offset: 0
	// Line 3120, Address: 0x10c2ac, Func Offset: 0x2c
	// Line 3134, Address: 0x10c2b8, Func Offset: 0x38
	// Line 3137, Address: 0x10c2cc, Func Offset: 0x4c
	// Line 3140, Address: 0x10c2fc, Func Offset: 0x7c
	// Line 3143, Address: 0x10c330, Func Offset: 0xb0
	// Line 3144, Address: 0x10c338, Func Offset: 0xb8
	// Line 3145, Address: 0x10c34c, Func Offset: 0xcc
	// Line 3162, Address: 0x10c360, Func Offset: 0xe0
	// Line 3164, Address: 0x10c368, Func Offset: 0xe8
	// Line 3165, Address: 0x10c370, Func Offset: 0xf0
	// Line 3166, Address: 0x10c384, Func Offset: 0x104
	// Line 3167, Address: 0x10c398, Func Offset: 0x118
	// Line 3169, Address: 0x10c3a0, Func Offset: 0x120
	// Line 3170, Address: 0x10c3a8, Func Offset: 0x128
	// Line 3171, Address: 0x10c3bc, Func Offset: 0x13c
	// Line 3172, Address: 0x10c3d0, Func Offset: 0x150
	// Line 3174, Address: 0x10c3d8, Func Offset: 0x158
	// Line 3175, Address: 0x10c3e0, Func Offset: 0x160
	// Line 3176, Address: 0x10c3f8, Func Offset: 0x178
	// Line 3177, Address: 0x10c40c, Func Offset: 0x18c
	// Line 3179, Address: 0x10c414, Func Offset: 0x194
	// Line 3180, Address: 0x10c41c, Func Offset: 0x19c
	// Line 3181, Address: 0x10c430, Func Offset: 0x1b0
	// Line 3182, Address: 0x10c444, Func Offset: 0x1c4
	// Line 3187, Address: 0x10c44c, Func Offset: 0x1cc
	// Line 3189, Address: 0x10c47c, Func Offset: 0x1fc
	// Line 3190, Address: 0x10c484, Func Offset: 0x204
	// Line 3191, Address: 0x10c498, Func Offset: 0x218
	// Line 3192, Address: 0x10c4a0, Func Offset: 0x220
	// Line 3193, Address: 0x10c4a8, Func Offset: 0x228
	// Line 3196, Address: 0x10c4bc, Func Offset: 0x23c
	// Line 3197, Address: 0x10c4c8, Func Offset: 0x248
	// Line 3199, Address: 0x10c4dc, Func Offset: 0x25c
	// Line 3204, Address: 0x10c4e4, Func Offset: 0x264
	// Line 3206, Address: 0x10c514, Func Offset: 0x294
	// Line 3207, Address: 0x10c51c, Func Offset: 0x29c
	// Line 3208, Address: 0x10c530, Func Offset: 0x2b0
	// Line 3209, Address: 0x10c538, Func Offset: 0x2b8
	// Line 3210, Address: 0x10c540, Func Offset: 0x2c0
	// Line 3212, Address: 0x10c558, Func Offset: 0x2d8
	// Line 3213, Address: 0x10c560, Func Offset: 0x2e0
	// Line 3215, Address: 0x10c574, Func Offset: 0x2f4
	// Line 3220, Address: 0x10c57c, Func Offset: 0x2fc
	// Line 3222, Address: 0x10c5ac, Func Offset: 0x32c
	// Line 3223, Address: 0x10c5b4, Func Offset: 0x334
	// Line 3224, Address: 0x10c5c8, Func Offset: 0x348
	// Line 3225, Address: 0x10c5d0, Func Offset: 0x350
	// Line 3226, Address: 0x10c5d8, Func Offset: 0x358
	// Line 3228, Address: 0x10c5ec, Func Offset: 0x36c
	// Line 3229, Address: 0x10c5f4, Func Offset: 0x374
	// Line 3231, Address: 0x10c608, Func Offset: 0x388
	// Line 3233, Address: 0x10c610, Func Offset: 0x390
	// Line 3234, Address: 0x10c618, Func Offset: 0x398
	// Line 3235, Address: 0x10c62c, Func Offset: 0x3ac
	// Line 3236, Address: 0x10c640, Func Offset: 0x3c0
	// Line 3238, Address: 0x10c648, Func Offset: 0x3c8
	// Line 3239, Address: 0x10c650, Func Offset: 0x3d0
	// Line 3240, Address: 0x10c664, Func Offset: 0x3e4
	// Line 3241, Address: 0x10c678, Func Offset: 0x3f8
	// Line 3246, Address: 0x10c680, Func Offset: 0x400
	// Line 3248, Address: 0x10c6b0, Func Offset: 0x430
	// Line 3249, Address: 0x10c6b8, Func Offset: 0x438
	// Line 3250, Address: 0x10c6cc, Func Offset: 0x44c
	// Line 3251, Address: 0x10c6d4, Func Offset: 0x454
	// Line 3252, Address: 0x10c6dc, Func Offset: 0x45c
	// Line 3254, Address: 0x10c6f0, Func Offset: 0x470
	// Line 3255, Address: 0x10c6f8, Func Offset: 0x478
	// Line 3257, Address: 0x10c70c, Func Offset: 0x48c
	// Line 3262, Address: 0x10c714, Func Offset: 0x494
	// Line 3264, Address: 0x10c744, Func Offset: 0x4c4
	// Line 3265, Address: 0x10c74c, Func Offset: 0x4cc
	// Line 3266, Address: 0x10c760, Func Offset: 0x4e0
	// Line 3267, Address: 0x10c768, Func Offset: 0x4e8
	// Line 3268, Address: 0x10c770, Func Offset: 0x4f0
	// Line 3270, Address: 0x10c784, Func Offset: 0x504
	// Line 3271, Address: 0x10c78c, Func Offset: 0x50c
	// Line 3273, Address: 0x10c7a0, Func Offset: 0x520
	// Line 3278, Address: 0x10c7a8, Func Offset: 0x528
	// Line 3280, Address: 0x10c7d8, Func Offset: 0x558
	// Line 3281, Address: 0x10c7e0, Func Offset: 0x560
	// Line 3282, Address: 0x10c7f4, Func Offset: 0x574
	// Line 3283, Address: 0x10c7fc, Func Offset: 0x57c
	// Line 3284, Address: 0x10c804, Func Offset: 0x584
	// Line 3286, Address: 0x10c81c, Func Offset: 0x59c
	// Line 3287, Address: 0x10c824, Func Offset: 0x5a4
	// Line 3289, Address: 0x10c83c, Func Offset: 0x5bc
	// Line 3294, Address: 0x10c844, Func Offset: 0x5c4
	// Line 3296, Address: 0x10c874, Func Offset: 0x5f4
	// Line 3297, Address: 0x10c87c, Func Offset: 0x5fc
	// Line 3298, Address: 0x10c890, Func Offset: 0x610
	// Line 3299, Address: 0x10c898, Func Offset: 0x618
	// Line 3300, Address: 0x10c8a0, Func Offset: 0x620
	// Line 3302, Address: 0x10c8b4, Func Offset: 0x634
	// Line 3303, Address: 0x10c8bc, Func Offset: 0x63c
	// Line 3305, Address: 0x10c8d0, Func Offset: 0x650
	// Line 3310, Address: 0x10c8d8, Func Offset: 0x658
	// Line 3312, Address: 0x10c908, Func Offset: 0x688
	// Line 3313, Address: 0x10c910, Func Offset: 0x690
	// Line 3314, Address: 0x10c924, Func Offset: 0x6a4
	// Line 3315, Address: 0x10c92c, Func Offset: 0x6ac
	// Line 3316, Address: 0x10c934, Func Offset: 0x6b4
	// Line 3318, Address: 0x10c94c, Func Offset: 0x6cc
	// Line 3319, Address: 0x10c958, Func Offset: 0x6d8
	// Line 3321, Address: 0x10c970, Func Offset: 0x6f0
	// Line 3324, Address: 0x10c978, Func Offset: 0x6f8
	// Line 3325, Address: 0x10c984, Func Offset: 0x704
	// Line 3327, Address: 0x10c998, Func Offset: 0x718
	// Line 3329, Address: 0x10c9a0, Func Offset: 0x720
	// Line 3330, Address: 0x10c9a8, Func Offset: 0x728
	// Line 3332, Address: 0x10c9bc, Func Offset: 0x73c
	// Line 3334, Address: 0x10c9c4, Func Offset: 0x744
	// Line 3335, Address: 0x10c9d0, Func Offset: 0x750
	// Line 3337, Address: 0x10c9ec, Func Offset: 0x76c
	// Line 3340, Address: 0x10c9f4, Func Offset: 0x774
	// Line 3341, Address: 0x10ca00, Func Offset: 0x780
	// Line 3342, Address: 0x10ca20, Func Offset: 0x7a0
	// Line 3343, Address: 0x10ca3c, Func Offset: 0x7bc
	// Line 3345, Address: 0x10ca44, Func Offset: 0x7c4
	// Line 3346, Address: 0x10ca50, Func Offset: 0x7d0
	// Line 3347, Address: 0x10ca6c, Func Offset: 0x7ec
	// Line 3348, Address: 0x10ca88, Func Offset: 0x808
	// Line 3350, Address: 0x10ca90, Func Offset: 0x810
	// Line 3351, Address: 0x10caa8, Func Offset: 0x828
	// Line 3352, Address: 0x10cab0, Func Offset: 0x830
	// Line 3353, Address: 0x10cab8, Func Offset: 0x838
	// Line 3355, Address: 0x10cac4, Func Offset: 0x844
	// Line 3356, Address: 0x10cae0, Func Offset: 0x860
	// Line 3357, Address: 0x10cafc, Func Offset: 0x87c
	// Line 3362, Address: 0x10cb04, Func Offset: 0x884
	// Line 3363, Address: 0x10cb2c, Func Offset: 0x8ac
	// Line 3364, Address: 0x10cb50, Func Offset: 0x8d0
	// Line 3365, Address: 0x10cb68, Func Offset: 0x8e8
	// Line 3367, Address: 0x10cb84, Func Offset: 0x904
	// Line 3371, Address: 0x10cb8c, Func Offset: 0x90c
	// Line 3374, Address: 0x10cb90, Func Offset: 0x910
	// Line 3376, Address: 0x10cba8, Func Offset: 0x928
	// Line 3382, Address: 0x10cbdc, Func Offset: 0x95c
	// Line 3383, Address: 0x10cbfc, Func Offset: 0x97c
	// Line 3384, Address: 0x10cc04, Func Offset: 0x984
	// Line 3386, Address: 0x10cc08, Func Offset: 0x988
	// Line 3389, Address: 0x10cc28, Func Offset: 0x9a8
	// Line 3391, Address: 0x10cc30, Func Offset: 0x9b0
	// Line 3393, Address: 0x10cc34, Func Offset: 0x9b4
	// Line 3396, Address: 0x10cc3c, Func Offset: 0x9bc
	// Line 3397, Address: 0x10cc40, Func Offset: 0x9c0
	// Line 3400, Address: 0x10cc48, Func Offset: 0x9c8
	// Line 3401, Address: 0x10cc50, Func Offset: 0x9d0
	// Line 3402, Address: 0x10cc60, Func Offset: 0x9e0
	// Line 3405, Address: 0x10cc6c, Func Offset: 0x9ec
	// Line 3407, Address: 0x10cc74, Func Offset: 0x9f4
	// Line 3408, Address: 0x10cc88, Func Offset: 0xa08
	// Line 3410, Address: 0x10cc8c, Func Offset: 0xa0c
	// Line 3412, Address: 0x10cc94, Func Offset: 0xa14
	// Line 3413, Address: 0x10cca4, Func Offset: 0xa24
	// Line 3415, Address: 0x10ccbc, Func Offset: 0xa3c
	// Line 3416, Address: 0x10ccc4, Func Offset: 0xa44
	// Line 3418, Address: 0x10cccc, Func Offset: 0xa4c
	// Line 3420, Address: 0x10ccd4, Func Offset: 0xa54
	// Line 3421, Address: 0x10ccdc, Func Offset: 0xa5c
	// Line 3424, Address: 0x10ccfc, Func Offset: 0xa7c
	// Line 3425, Address: 0x10cd04, Func Offset: 0xa84
	// Line 3426, Address: 0x10cd14, Func Offset: 0xa94
	// Line 3427, Address: 0x10cd2c, Func Offset: 0xaac
	// Line 3428, Address: 0x10cd34, Func Offset: 0xab4
	// Line 3430, Address: 0x10cd3c, Func Offset: 0xabc
	// Line 3432, Address: 0x10cd44, Func Offset: 0xac4
	// Line 3433, Address: 0x10cd4c, Func Offset: 0xacc
	// Line 3436, Address: 0x10cd68, Func Offset: 0xae8
	// Line 3437, Address: 0x10cd70, Func Offset: 0xaf0
	// Line 3439, Address: 0x10cd74, Func Offset: 0xaf4
	// Line 3441, Address: 0x10cd7c, Func Offset: 0xafc
	// Line 3442, Address: 0x10cd8c, Func Offset: 0xb0c
	// Line 3444, Address: 0x10cda4, Func Offset: 0xb24
	// Line 3445, Address: 0x10cdac, Func Offset: 0xb2c
	// Line 3447, Address: 0x10cdb4, Func Offset: 0xb34
	// Line 3449, Address: 0x10cdbc, Func Offset: 0xb3c
	// Line 3450, Address: 0x10cdc4, Func Offset: 0xb44
	// Line 3453, Address: 0x10cde4, Func Offset: 0xb64
	// Line 3454, Address: 0x10cdec, Func Offset: 0xb6c
	// Line 3455, Address: 0x10cdfc, Func Offset: 0xb7c
	// Line 3456, Address: 0x10ce14, Func Offset: 0xb94
	// Line 3457, Address: 0x10ce1c, Func Offset: 0xb9c
	// Line 3459, Address: 0x10ce24, Func Offset: 0xba4
	// Line 3461, Address: 0x10ce28, Func Offset: 0xba8
	// Line 3462, Address: 0x10ce30, Func Offset: 0xbb0
	// Line 3465, Address: 0x10ce50, Func Offset: 0xbd0
	// Line 3466, Address: 0x10ce58, Func Offset: 0xbd8
	// Line 3468, Address: 0x10ce5c, Func Offset: 0xbdc
	// Line 3470, Address: 0x10ce64, Func Offset: 0xbe4
	// Line 3471, Address: 0x10ce74, Func Offset: 0xbf4
	// Line 3473, Address: 0x10ce8c, Func Offset: 0xc0c
	// Line 3474, Address: 0x10ce90, Func Offset: 0xc10
	// Line 3476, Address: 0x10ce98, Func Offset: 0xc18
	// Line 3478, Address: 0x10ce9c, Func Offset: 0xc1c
	// Line 3479, Address: 0x10cea4, Func Offset: 0xc24
	// Line 3482, Address: 0x10cec0, Func Offset: 0xc40
	// Line 3483, Address: 0x10cec8, Func Offset: 0xc48
	// Line 3484, Address: 0x10ced8, Func Offset: 0xc58
	// Line 3485, Address: 0x10cef0, Func Offset: 0xc70
	// Line 3486, Address: 0x10cef4, Func Offset: 0xc74
	// Line 3488, Address: 0x10cefc, Func Offset: 0xc7c
	// Line 3490, Address: 0x10cf04, Func Offset: 0xc84
	// Line 3491, Address: 0x10cf0c, Func Offset: 0xc8c
	// Line 3494, Address: 0x10cf28, Func Offset: 0xca8
	// Line 3495, Address: 0x10cf30, Func Offset: 0xcb0
	// Line 3497, Address: 0x10cf34, Func Offset: 0xcb4
	// Line 3499, Address: 0x10cf3c, Func Offset: 0xcbc
	// Line 3500, Address: 0x10cf4c, Func Offset: 0xccc
	// Line 3502, Address: 0x10cf64, Func Offset: 0xce4
	// Line 3503, Address: 0x10cf6c, Func Offset: 0xcec
	// Line 3505, Address: 0x10cf74, Func Offset: 0xcf4
	// Line 3507, Address: 0x10cf7c, Func Offset: 0xcfc
	// Line 3508, Address: 0x10cf84, Func Offset: 0xd04
	// Line 3511, Address: 0x10cfa4, Func Offset: 0xd24
	// Line 3512, Address: 0x10cfac, Func Offset: 0xd2c
	// Line 3513, Address: 0x10cfbc, Func Offset: 0xd3c
	// Line 3514, Address: 0x10cfd4, Func Offset: 0xd54
	// Line 3515, Address: 0x10cfd8, Func Offset: 0xd58
	// Line 3516, Address: 0x10cfe0, Func Offset: 0xd60
	// Line 3518, Address: 0x10cfe8, Func Offset: 0xd68
	// Line 3519, Address: 0x10cff0, Func Offset: 0xd70
	// Line 3522, Address: 0x10d00c, Func Offset: 0xd8c
	// Line 3523, Address: 0x10d014, Func Offset: 0xd94
	// Line 3527, Address: 0x10d018, Func Offset: 0xd98
	// Line 3528, Address: 0x10d020, Func Offset: 0xda0
	// Line 3529, Address: 0x10d038, Func Offset: 0xdb8
	// Line 3531, Address: 0x10d058, Func Offset: 0xdd8
	// Line 3532, Address: 0x10d060, Func Offset: 0xde0
	// Line 3533, Address: 0x10d078, Func Offset: 0xdf8
	// Line 3534, Address: 0x10d080, Func Offset: 0xe00
	// Line 3535, Address: 0x10d088, Func Offset: 0xe08
	// Line 3537, Address: 0x10d08c, Func Offset: 0xe0c
	// Line 3542, Address: 0x10d0c0, Func Offset: 0xe40
	// Line 3543, Address: 0x10d0d8, Func Offset: 0xe58
	// Line 3544, Address: 0x10d0e0, Func Offset: 0xe60
	// Line 3545, Address: 0x10d0e8, Func Offset: 0xe68
	// Line 3546, Address: 0x10d114, Func Offset: 0xe94
	// Line 3547, Address: 0x10d11c, Func Offset: 0xe9c
	// Line 3548, Address: 0x10d124, Func Offset: 0xea4
	// Line 3551, Address: 0x10d12c, Func Offset: 0xeac
	// Line 3553, Address: 0x10d14c, Func Offset: 0xecc
	// Line 3555, Address: 0x10d154, Func Offset: 0xed4
	// Line 3556, Address: 0x10d15c, Func Offset: 0xedc
	// Line 3558, Address: 0x10d17c, Func Offset: 0xefc
	// Line 3560, Address: 0x10d184, Func Offset: 0xf04
	// Line 3561, Address: 0x10d188, Func Offset: 0xf08
	// Line 3563, Address: 0x10d1a8, Func Offset: 0xf28
	// Line 3566, Address: 0x10d1b0, Func Offset: 0xf30
	// Line 3567, Address: 0x10d1c0, Func Offset: 0xf40
	// Line 3568, Address: 0x10d1c8, Func Offset: 0xf48
	// Line 3569, Address: 0x10d1d0, Func Offset: 0xf50
	// Line 3571, Address: 0x10d1d8, Func Offset: 0xf58
	// Line 3573, Address: 0x10d1f8, Func Offset: 0xf78
	// Line 3575, Address: 0x10d200, Func Offset: 0xf80
	// Line 3576, Address: 0x10d210, Func Offset: 0xf90
	// Line 3578, Address: 0x10d228, Func Offset: 0xfa8
	// Line 3579, Address: 0x10d230, Func Offset: 0xfb0
	// Line 3581, Address: 0x10d238, Func Offset: 0xfb8
	// Line 3583, Address: 0x10d240, Func Offset: 0xfc0
	// Line 3584, Address: 0x10d248, Func Offset: 0xfc8
	// Line 3585, Address: 0x10d258, Func Offset: 0xfd8
	// Line 3586, Address: 0x10d270, Func Offset: 0xff0
	// Line 3587, Address: 0x10d278, Func Offset: 0xff8
	// Line 3588, Address: 0x10d280, Func Offset: 0x1000
	// Line 3590, Address: 0x10d288, Func Offset: 0x1008
	// Line 3591, Address: 0x10d290, Func Offset: 0x1010
	// Line 3594, Address: 0x10d298, Func Offset: 0x1018
	// Line 3595, Address: 0x10d2b8, Func Offset: 0x1038
	// Line 3596, Address: 0x10d2e0, Func Offset: 0x1060
	// Line 3597, Address: 0x10d2e4, Func Offset: 0x1064
	// Line 3598, Address: 0x10d2ec, Func Offset: 0x106c
	// Line 3599, Address: 0x10d314, Func Offset: 0x1094
	// Line 3600, Address: 0x10d31c, Func Offset: 0x109c
	// Line 3601, Address: 0x10d324, Func Offset: 0x10a4
	// Line 3603, Address: 0x10d34c, Func Offset: 0x10cc
	// Line 3604, Address: 0x10d354, Func Offset: 0x10d4
	// Line 3605, Address: 0x10d35c, Func Offset: 0x10dc
	// Line 3609, Address: 0x10d364, Func Offset: 0x10e4
	// Line 3611, Address: 0x10d384, Func Offset: 0x1104
	// Line 3613, Address: 0x10d38c, Func Offset: 0x110c
	// Line 3614, Address: 0x10d39c, Func Offset: 0x111c
	// Line 3616, Address: 0x10d3b4, Func Offset: 0x1134
	// Line 3617, Address: 0x10d3b8, Func Offset: 0x1138
	// Line 3619, Address: 0x10d3c0, Func Offset: 0x1140
	// Line 3621, Address: 0x10d3c8, Func Offset: 0x1148
	// Line 3622, Address: 0x10d3d0, Func Offset: 0x1150
	// Line 3623, Address: 0x10d3e0, Func Offset: 0x1160
	// Line 3624, Address: 0x10d3f8, Func Offset: 0x1178
	// Line 3625, Address: 0x10d3fc, Func Offset: 0x117c
	// Line 3626, Address: 0x10d404, Func Offset: 0x1184
	// Line 3628, Address: 0x10d40c, Func Offset: 0x118c
	// Line 3629, Address: 0x10d414, Func Offset: 0x1194
	// Line 3632, Address: 0x10d41c, Func Offset: 0x119c
	// Line 3633, Address: 0x10d438, Func Offset: 0x11b8
	// Line 3634, Address: 0x10d460, Func Offset: 0x11e0
	// Line 3635, Address: 0x10d468, Func Offset: 0x11e8
	// Line 3636, Address: 0x10d470, Func Offset: 0x11f0
	// Line 3637, Address: 0x10d498, Func Offset: 0x1218
	// Line 3638, Address: 0x10d4a0, Func Offset: 0x1220
	// Line 3639, Address: 0x10d4a8, Func Offset: 0x1228
	// Line 3641, Address: 0x10d4d0, Func Offset: 0x1250
	// Line 3642, Address: 0x10d4d4, Func Offset: 0x1254
	// Line 3643, Address: 0x10d4dc, Func Offset: 0x125c
	// Line 3647, Address: 0x10d4e4, Func Offset: 0x1264
	// Line 3649, Address: 0x10d504, Func Offset: 0x1284
	// Line 3651, Address: 0x10d50c, Func Offset: 0x128c
	// Line 3652, Address: 0x10d51c, Func Offset: 0x129c
	// Line 3654, Address: 0x10d534, Func Offset: 0x12b4
	// Line 3655, Address: 0x10d53c, Func Offset: 0x12bc
	// Line 3657, Address: 0x10d544, Func Offset: 0x12c4
	// Line 3659, Address: 0x10d54c, Func Offset: 0x12cc
	// Line 3660, Address: 0x10d554, Func Offset: 0x12d4
	// Line 3661, Address: 0x10d564, Func Offset: 0x12e4
	// Line 3662, Address: 0x10d57c, Func Offset: 0x12fc
	// Line 3663, Address: 0x10d584, Func Offset: 0x1304
	// Line 3664, Address: 0x10d58c, Func Offset: 0x130c
	// Line 3666, Address: 0x10d594, Func Offset: 0x1314
	// Line 3667, Address: 0x10d598, Func Offset: 0x1318
	// Line 3670, Address: 0x10d5a0, Func Offset: 0x1320
	// Line 3671, Address: 0x10d5b8, Func Offset: 0x1338
	// Line 3672, Address: 0x10d5e0, Func Offset: 0x1360
	// Line 3673, Address: 0x10d5e4, Func Offset: 0x1364
	// Line 3674, Address: 0x10d5ec, Func Offset: 0x136c
	// Line 3675, Address: 0x10d614, Func Offset: 0x1394
	// Line 3676, Address: 0x10d61c, Func Offset: 0x139c
	// Line 3677, Address: 0x10d624, Func Offset: 0x13a4
	// Line 3679, Address: 0x10d64c, Func Offset: 0x13cc
	// Line 3680, Address: 0x10d654, Func Offset: 0x13d4
	// Line 3681, Address: 0x10d65c, Func Offset: 0x13dc
	// Line 3685, Address: 0x10d664, Func Offset: 0x13e4
	// Line 3687, Address: 0x10d680, Func Offset: 0x1400
	// Line 3689, Address: 0x10d688, Func Offset: 0x1408
	// Line 3690, Address: 0x10d698, Func Offset: 0x1418
	// Line 3692, Address: 0x10d6b0, Func Offset: 0x1430
	// Line 3693, Address: 0x10d6b4, Func Offset: 0x1434
	// Line 3695, Address: 0x10d6bc, Func Offset: 0x143c
	// Line 3697, Address: 0x10d6c4, Func Offset: 0x1444
	// Line 3698, Address: 0x10d6cc, Func Offset: 0x144c
	// Line 3699, Address: 0x10d6dc, Func Offset: 0x145c
	// Line 3700, Address: 0x10d6f4, Func Offset: 0x1474
	// Line 3701, Address: 0x10d6f8, Func Offset: 0x1478
	// Line 3702, Address: 0x10d700, Func Offset: 0x1480
	// Line 3704, Address: 0x10d708, Func Offset: 0x1488
	// Line 3705, Address: 0x10d710, Func Offset: 0x1490
	// Line 3708, Address: 0x10d718, Func Offset: 0x1498
	// Line 3710, Address: 0x10d738, Func Offset: 0x14b8
	// Line 3712, Address: 0x10d778, Func Offset: 0x14f8
	// Line 3713, Address: 0x10d7b4, Func Offset: 0x1534
	// Line 3715, Address: 0x10d7c4, Func Offset: 0x1544
	// Line 3716, Address: 0x10d7c8, Func Offset: 0x1548
	// Line 3718, Address: 0x10d7d0, Func Offset: 0x1550
	// Line 3719, Address: 0x10d7d8, Func Offset: 0x1558
	// Line 3721, Address: 0x10d7e0, Func Offset: 0x1560
	// Line 3722, Address: 0x10d81c, Func Offset: 0x159c
	// Line 3724, Address: 0x10d82c, Func Offset: 0x15ac
	// Line 3725, Address: 0x10d834, Func Offset: 0x15b4
	// Line 3727, Address: 0x10d83c, Func Offset: 0x15bc
	// Line 3728, Address: 0x10d844, Func Offset: 0x15c4
	// Line 3730, Address: 0x10d84c, Func Offset: 0x15cc
	// Line 3732, Address: 0x10d874, Func Offset: 0x15f4
	// Line 3733, Address: 0x10d8b0, Func Offset: 0x1630
	// Line 3735, Address: 0x10d8bc, Func Offset: 0x163c
	// Line 3736, Address: 0x10d8c4, Func Offset: 0x1644
	// Line 3737, Address: 0x10d8cc, Func Offset: 0x164c
	// Line 3738, Address: 0x10d908, Func Offset: 0x1688
	// Line 3740, Address: 0x10d918, Func Offset: 0x1698
	// Line 3760, Address: 0x10d920, Func Offset: 0x16a0
	// Line 3766, Address: 0x10d940, Func Offset: 0x16c0
	// Line 3767, Address: 0x10d958, Func Offset: 0x16d8
	// Line 3770, Address: 0x10d96c, Func Offset: 0x16ec
	// Line 3775, Address: 0x10d974, Func Offset: 0x16f4
	// Line 3777, Address: 0x10d9a8, Func Offset: 0x1728
	// Line 3779, Address: 0x10d9e0, Func Offset: 0x1760
	// Line 3780, Address: 0x10d9e8, Func Offset: 0x1768
	// Line 3781, Address: 0x10d9f0, Func Offset: 0x1770
	// Line 3783, Address: 0x10d9f8, Func Offset: 0x1778
	// Line 3784, Address: 0x10da18, Func Offset: 0x1798
	// Line 3786, Address: 0x10da20, Func Offset: 0x17a0
	// Line 3787, Address: 0x10da28, Func Offset: 0x17a8
	// Line 3788, Address: 0x10da48, Func Offset: 0x17c8
	// Line 3790, Address: 0x10da50, Func Offset: 0x17d0
	// Line 3791, Address: 0x10da58, Func Offset: 0x17d8
	// Line 3792, Address: 0x10da74, Func Offset: 0x17f4
	// Line 3795, Address: 0x10da7c, Func Offset: 0x17fc
	// Line 3796, Address: 0x10da84, Func Offset: 0x1804
	// Line 3797, Address: 0x10daa4, Func Offset: 0x1824
	// Line 3799, Address: 0x10daac, Func Offset: 0x182c
	// Line 3800, Address: 0x10dac4, Func Offset: 0x1844
	// Line 3801, Address: 0x10dacc, Func Offset: 0x184c
	// Line 3802, Address: 0x10dad4, Func Offset: 0x1854
	// Line 3804, Address: 0x10dadc, Func Offset: 0x185c
	// Line 3805, Address: 0x10dafc, Func Offset: 0x187c
	// Line 3807, Address: 0x10db04, Func Offset: 0x1884
	// Line 3808, Address: 0x10db1c, Func Offset: 0x189c
	// Line 3809, Address: 0x10db24, Func Offset: 0x18a4
	// Line 3810, Address: 0x10db2c, Func Offset: 0x18ac
	// Line 3812, Address: 0x10db34, Func Offset: 0x18b4
	// Line 3813, Address: 0x10db54, Func Offset: 0x18d4
	// Line 3815, Address: 0x10db5c, Func Offset: 0x18dc
	// Line 3816, Address: 0x10db74, Func Offset: 0x18f4
	// Line 3817, Address: 0x10db7c, Func Offset: 0x18fc
	// Line 3818, Address: 0x10db84, Func Offset: 0x1904
	// Line 3820, Address: 0x10db88, Func Offset: 0x1908
	// Line 3821, Address: 0x10dba8, Func Offset: 0x1928
	// Line 3823, Address: 0x10dbb0, Func Offset: 0x1930
	// Line 3824, Address: 0x10dbc8, Func Offset: 0x1948
	// Line 3825, Address: 0x10dbd0, Func Offset: 0x1950
	// Line 3826, Address: 0x10dbd8, Func Offset: 0x1958
	// Line 3828, Address: 0x10dbe0, Func Offset: 0x1960
	// Line 3837, Address: 0x10dc00, Func Offset: 0x1980
	// Line 3838, Address: 0x10dc18, Func Offset: 0x1998
	// Line 3839, Address: 0x10dc30, Func Offset: 0x19b0
	// Line 3840, Address: 0x10dc38, Func Offset: 0x19b8
	// Line 3841, Address: 0x10dc40, Func Offset: 0x19c0
	// Line 3843, Address: 0x10dc48, Func Offset: 0x19c8
	// Line 3844, Address: 0x10dc50, Func Offset: 0x19d0
	// Line 3846, Address: 0x10dc58, Func Offset: 0x19d8
	// Line 3847, Address: 0x10dc74, Func Offset: 0x19f4
	// Line 3849, Address: 0x10dc90, Func Offset: 0x1a10
	// Line 3853, Address: 0x10dc98, Func Offset: 0x1a18
	// Line 3858, Address: 0x10dca0, Func Offset: 0x1a20
	// Line 3860, Address: 0x10dcd4, Func Offset: 0x1a54
	// Line 3861, Address: 0x10dcf4, Func Offset: 0x1a74
	// Line 3862, Address: 0x10dd04, Func Offset: 0x1a84
	// Line 3863, Address: 0x10dd0c, Func Offset: 0x1a8c
	// Line 3864, Address: 0x10dd14, Func Offset: 0x1a94
	// Line 3866, Address: 0x10dd1c, Func Offset: 0x1a9c
	// Line 3867, Address: 0x10dd24, Func Offset: 0x1aa4
	// Line 3869, Address: 0x10dd58, Func Offset: 0x1ad8
	// Line 3870, Address: 0x10dd60, Func Offset: 0x1ae0
	// Line 3871, Address: 0x10dd68, Func Offset: 0x1ae8
	// Line 3874, Address: 0x10dd70, Func Offset: 0x1af0
	// Line 3875, Address: 0x10dd90, Func Offset: 0x1b10
	// Line 3877, Address: 0x10dd98, Func Offset: 0x1b18
	// Line 3878, Address: 0x10ddb8, Func Offset: 0x1b38
	// Line 3879, Address: 0x10ddc0, Func Offset: 0x1b40
	// Line 3880, Address: 0x10ddc8, Func Offset: 0x1b48
	// Line 3882, Address: 0x10ddd0, Func Offset: 0x1b50
	// Line 3883, Address: 0x10ddf0, Func Offset: 0x1b70
	// Line 3885, Address: 0x10ddf8, Func Offset: 0x1b78
	// Line 3886, Address: 0x10de18, Func Offset: 0x1b98
	// Line 3887, Address: 0x10de20, Func Offset: 0x1ba0
	// Line 3888, Address: 0x10de28, Func Offset: 0x1ba8
	// Line 3890, Address: 0x10de2c, Func Offset: 0x1bac
	// Line 3891, Address: 0x10de4c, Func Offset: 0x1bcc
	// Line 3893, Address: 0x10de54, Func Offset: 0x1bd4
	// Line 3894, Address: 0x10de74, Func Offset: 0x1bf4
	// Line 3895, Address: 0x10de7c, Func Offset: 0x1bfc
	// Line 3896, Address: 0x10de84, Func Offset: 0x1c04
	// Line 3898, Address: 0x10de88, Func Offset: 0x1c08
	// Line 3899, Address: 0x10dea8, Func Offset: 0x1c28
	// Line 3905, Address: 0x10deb0, Func Offset: 0x1c30
	// Line 3907, Address: 0x10dec0, Func Offset: 0x1c40
	// Line 3914, Address: 0x10deec, Func Offset: 0x1c6c
	// Line 3916, Address: 0x10def0, Func Offset: 0x1c70
	// Line 3918, Address: 0x10def8, Func Offset: 0x1c78
	// Line 3921, Address: 0x10defc, Func Offset: 0x1c7c
	// Line 3923, Address: 0x10df04, Func Offset: 0x1c84
	// Line 3930, Address: 0x10df30, Func Offset: 0x1cb0
	// Line 3932, Address: 0x10df38, Func Offset: 0x1cb8
	// Line 3934, Address: 0x10df40, Func Offset: 0x1cc0
	// Line 3939, Address: 0x10df48, Func Offset: 0x1cc8
	// Line 3940, Address: 0x10df5c, Func Offset: 0x1cdc
	// Line 3941, Address: 0x10df64, Func Offset: 0x1ce4
	// Line 3943, Address: 0x10df6c, Func Offset: 0x1cec
	// Line 3944, Address: 0x10df8c, Func Offset: 0x1d0c
	// Line 3946, Address: 0x10df94, Func Offset: 0x1d14
	// Line 3948, Address: 0x10dfa4, Func Offset: 0x1d24
	// Line 3950, Address: 0x10dfdc, Func Offset: 0x1d5c
	// Line 3951, Address: 0x10dfe4, Func Offset: 0x1d64
	// Line 3953, Address: 0x10dfec, Func Offset: 0x1d6c
	// Line 3954, Address: 0x10dff0, Func Offset: 0x1d70
	// Line 3956, Address: 0x10dff8, Func Offset: 0x1d78
	// Line 3959, Address: 0x10e000, Func Offset: 0x1d80
	// Line 3961, Address: 0x10e008, Func Offset: 0x1d88
	// Line 3963, Address: 0x10e040, Func Offset: 0x1dc0
	// Line 3964, Address: 0x10e048, Func Offset: 0x1dc8
	// Line 3966, Address: 0x10e050, Func Offset: 0x1dd0
	// Line 3967, Address: 0x10e058, Func Offset: 0x1dd8
	// Line 3969, Address: 0x10e060, Func Offset: 0x1de0
	// Line 3974, Address: 0x10e064, Func Offset: 0x1de4
	// Line 3975, Address: 0x10e078, Func Offset: 0x1df8
	// Line 3976, Address: 0x10e07c, Func Offset: 0x1dfc
	// Line 3978, Address: 0x10e080, Func Offset: 0x1e00
	// Line 3979, Address: 0x10e09c, Func Offset: 0x1e1c
	// Line 3981, Address: 0x10e0a4, Func Offset: 0x1e24
	// Line 3983, Address: 0x10e0b4, Func Offset: 0x1e34
	// Line 3985, Address: 0x10e0e0, Func Offset: 0x1e60
	// Line 3986, Address: 0x10e0e8, Func Offset: 0x1e68
	// Line 3988, Address: 0x10e0f0, Func Offset: 0x1e70
	// Line 3991, Address: 0x10e0f8, Func Offset: 0x1e78
	// Line 3993, Address: 0x10e100, Func Offset: 0x1e80
	// Line 3995, Address: 0x10e12c, Func Offset: 0x1eac
	// Line 3996, Address: 0x10e130, Func Offset: 0x1eb0
	// Line 3998, Address: 0x10e138, Func Offset: 0x1eb8
	// Line 4003, Address: 0x10e140, Func Offset: 0x1ec0
	// Line 4004, Address: 0x10e154, Func Offset: 0x1ed4
	// Line 4005, Address: 0x10e158, Func Offset: 0x1ed8
	// Line 4007, Address: 0x10e160, Func Offset: 0x1ee0
	// Line 4008, Address: 0x10e180, Func Offset: 0x1f00
	// Line 4013, Address: 0x10e188, Func Offset: 0x1f08
	// Line 4015, Address: 0x10e198, Func Offset: 0x1f18
	// Line 4017, Address: 0x10e1c4, Func Offset: 0x1f44
	// Line 4018, Address: 0x10e1cc, Func Offset: 0x1f4c
	// Line 4020, Address: 0x10e1d4, Func Offset: 0x1f54
	// Line 4023, Address: 0x10e1dc, Func Offset: 0x1f5c
	// Line 4025, Address: 0x10e1e4, Func Offset: 0x1f64
	// Line 4027, Address: 0x10e210, Func Offset: 0x1f90
	// Line 4028, Address: 0x10e218, Func Offset: 0x1f98
	// Line 4030, Address: 0x10e220, Func Offset: 0x1fa0
	// Line 4042, Address: 0x10e224, Func Offset: 0x1fa4
	// Line 4048, Address: 0x10e244, Func Offset: 0x1fc4
	// Line 4051, Address: 0x10e260, Func Offset: 0x1fe0
	// Line 4056, Address: 0x10e268, Func Offset: 0x1fe8
	// Line 4058, Address: 0x10e284, Func Offset: 0x2004
	// Line 4059, Address: 0x10e28c, Func Offset: 0x200c
	// Line 4060, Address: 0x10e294, Func Offset: 0x2014
	// Line 4061, Address: 0x10e2b0, Func Offset: 0x2030
	// Line 4062, Address: 0x10e2b8, Func Offset: 0x2038
	// Line 4064, Address: 0x10e2c0, Func Offset: 0x2040
	// Line 4065, Address: 0x10e300, Func Offset: 0x2080
	// Line 4066, Address: 0x10e308, Func Offset: 0x2088
	// Line 4067, Address: 0x10e310, Func Offset: 0x2090
	// Line 4069, Address: 0x10e318, Func Offset: 0x2098
	// Line 4071, Address: 0x10e334, Func Offset: 0x20b4
	// Line 4072, Address: 0x10e358, Func Offset: 0x20d8
	// Line 4074, Address: 0x10e36c, Func Offset: 0x20ec
	// Line 4079, Address: 0x10e374, Func Offset: 0x20f4
	// Line 4080, Address: 0x10e38c, Func Offset: 0x210c
	// Line 4081, Address: 0x10e394, Func Offset: 0x2114
	// Line 4082, Address: 0x10e39c, Func Offset: 0x211c
	// Line 4084, Address: 0x10e3a4, Func Offset: 0x2124
	// Line 4085, Address: 0x10e3c0, Func Offset: 0x2140
	// Line 4086, Address: 0x10e3e4, Func Offset: 0x2164
	// Line 4088, Address: 0x10e3fc, Func Offset: 0x217c
	// Line 4094, Address: 0x10e404, Func Offset: 0x2184
	// Line 4098, Address: 0x10e454, Func Offset: 0x21d4
	// Line 4099, Address: 0x10e45c, Func Offset: 0x21dc
	// Line 4101, Address: 0x10e464, Func Offset: 0x21e4
	// Line 4102, Address: 0x10e46c, Func Offset: 0x21ec
	// Line 4104, Address: 0x10e474, Func Offset: 0x21f4
	// Line 4105, Address: 0x10e47c, Func Offset: 0x21fc
	// Line 4107, Address: 0x10e484, Func Offset: 0x2204
	// Line 4111, Address: 0x10e4ac, Func Offset: 0x222c
	// Line 4112, Address: 0x10e4c4, Func Offset: 0x2244
	// Line 4113, Address: 0x10e4e8, Func Offset: 0x2268
	// Line 4115, Address: 0x10e508, Func Offset: 0x2288
	// Line 4118, Address: 0x10e510, Func Offset: 0x2290
	// Line 4119, Address: 0x10e53c, Func Offset: 0x22bc
	// Line 4120, Address: 0x10e558, Func Offset: 0x22d8
	// Line 4121, Address: 0x10e574, Func Offset: 0x22f4
	// Line 4132, Address: 0x10e57c, Func Offset: 0x22fc
	// Line 4134, Address: 0x10e58c, Func Offset: 0x230c
	// Line 4172, Address: 0x10e5a8, Func Offset: 0x2328
	// Line 4173, Address: 0x10e5c8, Func Offset: 0x2348
	// Line 4175, Address: 0x10e5e8, Func Offset: 0x2368
	// Line 4181, Address: 0x10e5f0, Func Offset: 0x2370
	// Line 4186, Address: 0x10e5fc, Func Offset: 0x237c
	// Line 4187, Address: 0x10e61c, Func Offset: 0x239c
	// Line 4188, Address: 0x10e62c, Func Offset: 0x23ac
	// Line 4190, Address: 0x10e654, Func Offset: 0x23d4
	// Line 4191, Address: 0x10e678, Func Offset: 0x23f8
	// Line 4196, Address: 0x10e698, Func Offset: 0x2418
	// Line 4197, Address: 0x10e6ac, Func Offset: 0x242c
	// Line 4204, Address: 0x10e6c0, Func Offset: 0x2440
	// Line 4205, Address: 0x10e6f0, Func Offset: 0x2470
	// Line 4207, Address: 0x10e710, Func Offset: 0x2490
	// Line 4208, Address: 0x10e728, Func Offset: 0x24a8
	// Line 4211, Address: 0x10e744, Func Offset: 0x24c4
	// Line 4213, Address: 0x10e75c, Func Offset: 0x24dc
	// Line 4214, Address: 0x10e770, Func Offset: 0x24f0
	// Line 4217, Address: 0x10e778, Func Offset: 0x24f8
	// Line 4221, Address: 0x10e78c, Func Offset: 0x250c
	// Line 4222, Address: 0x10e794, Func Offset: 0x2514
	// Line 4224, Address: 0x10e79c, Func Offset: 0x251c
	// Func End, Address: 0x10e7d0, Func Offset: 0x2550
}

// 
// Start address: 0x10e7d0
void PlayerCheckAnime()
{
	// Line 4229, Address: 0x10e7d0, Func Offset: 0
	// Line 4231, Address: 0x10e7d8, Func Offset: 0x8
	// Line 4232, Address: 0x10e7e0, Func Offset: 0x10
	// Line 4233, Address: 0x10e7e8, Func Offset: 0x18
	// Func End, Address: 0x10e7f8, Func Offset: 0x28
}

// 
// Start address: 0x10e800
void shJamesEffectFoot(int type)
{
	int p_heel;
	int p_toe;
	float m_heel[4][4];
	float m_toe[4][4];
	// Line 4252, Address: 0x10e800, Func Offset: 0
	// Line 4256, Address: 0x10e814, Func Offset: 0x14
	// Line 4257, Address: 0x10e820, Func Offset: 0x20
	// Line 4258, Address: 0x10e824, Func Offset: 0x24
	// Line 4259, Address: 0x10e828, Func Offset: 0x28
	// Line 4260, Address: 0x10e830, Func Offset: 0x30
	// Line 4261, Address: 0x10e834, Func Offset: 0x34
	// Line 4264, Address: 0x10e838, Func Offset: 0x38
	// Line 4265, Address: 0x10e848, Func Offset: 0x48
	// Line 4267, Address: 0x10e858, Func Offset: 0x58
	// Line 4268, Address: 0x10e880, Func Offset: 0x80
	// Func End, Address: 0x10e898, Func Offset: 0x98
}

// 
// Start address: 0x10e8a0
int SubCharacter::shJamesSoundOn(float vol, int se_name)
{
	// Line 4285, Address: 0x10e8a0, Func Offset: 0
	// Line 4288, Address: 0x10e8b4, Func Offset: 0x14
	// Line 4290, Address: 0x10e8d0, Func Offset: 0x30
	// Line 4291, Address: 0x10e8d4, Func Offset: 0x34
	// Func End, Address: 0x10e8e4, Func Offset: 0x44
}

// 
// Start address: 0x10e8f0
void PlayerCheckSoundLower()
{
	_AnimeInfo* a_info;
	JamesSoundInfo se_info[4];
	int pitch;
	short frame;
	unsigned short se_l;
	unsigned short se_r;
	unsigned short se;
	unsigned int material;
	int i;
	// Line 4299, Address: 0x10e8f0, Func Offset: 0
	// Line 4305, Address: 0x10e918, Func Offset: 0x28
	// Line 4307, Address: 0x10e91c, Func Offset: 0x2c
	// Line 4313, Address: 0x10e938, Func Offset: 0x48
	// Line 4317, Address: 0x10e950, Func Offset: 0x60
	// Line 4324, Address: 0x10e96c, Func Offset: 0x7c
	// Line 4325, Address: 0x10e978, Func Offset: 0x88
	// Line 4326, Address: 0x10e980, Func Offset: 0x90
	// Line 4327, Address: 0x10e994, Func Offset: 0xa4
	// Line 4329, Address: 0x10e9a0, Func Offset: 0xb0
	// Line 4330, Address: 0x10e9a8, Func Offset: 0xb8
	// Line 4331, Address: 0x10e9bc, Func Offset: 0xcc
	// Line 4332, Address: 0x10e9cc, Func Offset: 0xdc
	// Line 4334, Address: 0x10e9d0, Func Offset: 0xe0
	// Line 4336, Address: 0x10e9f8, Func Offset: 0x108
	// Line 4337, Address: 0x10ea00, Func Offset: 0x110
	// Line 4339, Address: 0x10ea08, Func Offset: 0x118
	// Line 4340, Address: 0x10ea10, Func Offset: 0x120
	// Line 4342, Address: 0x10ea18, Func Offset: 0x128
	// Line 4343, Address: 0x10ea20, Func Offset: 0x130
	// Line 4345, Address: 0x10ea28, Func Offset: 0x138
	// Line 4346, Address: 0x10ea30, Func Offset: 0x140
	// Line 4348, Address: 0x10ea38, Func Offset: 0x148
	// Line 4349, Address: 0x10ea40, Func Offset: 0x150
	// Line 4351, Address: 0x10ea48, Func Offset: 0x158
	// Line 4352, Address: 0x10ea50, Func Offset: 0x160
	// Line 4354, Address: 0x10ea58, Func Offset: 0x168
	// Line 4355, Address: 0x10ea60, Func Offset: 0x170
	// Line 4357, Address: 0x10ea68, Func Offset: 0x178
	// Line 4358, Address: 0x10ea70, Func Offset: 0x180
	// Line 4360, Address: 0x10ea78, Func Offset: 0x188
	// Line 4361, Address: 0x10ea80, Func Offset: 0x190
	// Line 4363, Address: 0x10ea88, Func Offset: 0x198
	// Line 4364, Address: 0x10ea90, Func Offset: 0x1a0
	// Line 4366, Address: 0x10ea98, Func Offset: 0x1a8
	// Line 4367, Address: 0x10eaa0, Func Offset: 0x1b0
	// Line 4369, Address: 0x10eaa8, Func Offset: 0x1b8
	// Line 4370, Address: 0x10eab0, Func Offset: 0x1c0
	// Line 4372, Address: 0x10eab8, Func Offset: 0x1c8
	// Line 4378, Address: 0x10eac0, Func Offset: 0x1d0
	// Line 4379, Address: 0x10eac8, Func Offset: 0x1d8
	// Line 4380, Address: 0x10eacc, Func Offset: 0x1dc
	// Line 4381, Address: 0x10ead4, Func Offset: 0x1e4
	// Line 4383, Address: 0x10ead8, Func Offset: 0x1e8
	// Line 4386, Address: 0x10eaec, Func Offset: 0x1fc
	// Line 4396, Address: 0x10eb24, Func Offset: 0x234
	// Line 4397, Address: 0x10eb2c, Func Offset: 0x23c
	// Line 4398, Address: 0x10eb34, Func Offset: 0x244
	// Line 4399, Address: 0x10eb3c, Func Offset: 0x24c
	// Line 4400, Address: 0x10eb50, Func Offset: 0x260
	// Line 4401, Address: 0x10eb64, Func Offset: 0x274
	// Line 4402, Address: 0x10eb78, Func Offset: 0x288
	// Line 4405, Address: 0x10eb80, Func Offset: 0x290
	// Line 4406, Address: 0x10eb88, Func Offset: 0x298
	// Line 4407, Address: 0x10eb90, Func Offset: 0x2a0
	// Line 4408, Address: 0x10eba0, Func Offset: 0x2b0
	// Line 4409, Address: 0x10ebb0, Func Offset: 0x2c0
	// Line 4417, Address: 0x10ebb8, Func Offset: 0x2c8
	// Line 4418, Address: 0x10ebc0, Func Offset: 0x2d0
	// Line 4419, Address: 0x10ebc8, Func Offset: 0x2d8
	// Line 4420, Address: 0x10ebdc, Func Offset: 0x2ec
	// Line 4421, Address: 0x10ebf0, Func Offset: 0x300
	// Line 4425, Address: 0x10ebf8, Func Offset: 0x308
	// Line 4426, Address: 0x10ec00, Func Offset: 0x310
	// Line 4427, Address: 0x10ec08, Func Offset: 0x318
	// Line 4428, Address: 0x10ec10, Func Offset: 0x320
	// Line 4429, Address: 0x10ec18, Func Offset: 0x328
	// Line 4430, Address: 0x10ec2c, Func Offset: 0x33c
	// Line 4431, Address: 0x10ec40, Func Offset: 0x350
	// Line 4432, Address: 0x10ec54, Func Offset: 0x364
	// Line 4433, Address: 0x10ec68, Func Offset: 0x378
	// Line 4435, Address: 0x10ec70, Func Offset: 0x380
	// Line 4437, Address: 0x10ecc8, Func Offset: 0x3d8
	// Line 4438, Address: 0x10ecd0, Func Offset: 0x3e0
	// Line 4439, Address: 0x10ecd8, Func Offset: 0x3e8
	// Line 4440, Address: 0x10ece0, Func Offset: 0x3f0
	// Line 4441, Address: 0x10ece8, Func Offset: 0x3f8
	// Line 4442, Address: 0x10ecfc, Func Offset: 0x40c
	// Line 4443, Address: 0x10ed0c, Func Offset: 0x41c
	// Line 4444, Address: 0x10ed20, Func Offset: 0x430
	// Line 4445, Address: 0x10ed34, Func Offset: 0x444
	// Line 4447, Address: 0x10ed3c, Func Offset: 0x44c
	// Line 4448, Address: 0x10ed44, Func Offset: 0x454
	// Line 4449, Address: 0x10ed4c, Func Offset: 0x45c
	// Line 4450, Address: 0x10ed54, Func Offset: 0x464
	// Line 4451, Address: 0x10ed5c, Func Offset: 0x46c
	// Line 4452, Address: 0x10ed70, Func Offset: 0x480
	// Line 4453, Address: 0x10ed80, Func Offset: 0x490
	// Line 4454, Address: 0x10ed94, Func Offset: 0x4a4
	// Line 4455, Address: 0x10eda8, Func Offset: 0x4b8
	// Line 4457, Address: 0x10edb0, Func Offset: 0x4c0
	// Line 4458, Address: 0x10edb8, Func Offset: 0x4c8
	// Line 4459, Address: 0x10edc0, Func Offset: 0x4d0
	// Line 4460, Address: 0x10edc8, Func Offset: 0x4d8
	// Line 4461, Address: 0x10edd0, Func Offset: 0x4e0
	// Line 4462, Address: 0x10ede4, Func Offset: 0x4f4
	// Line 4463, Address: 0x10edf4, Func Offset: 0x504
	// Line 4464, Address: 0x10ee08, Func Offset: 0x518
	// Line 4465, Address: 0x10ee1c, Func Offset: 0x52c
	// Line 4467, Address: 0x10ee24, Func Offset: 0x534
	// Line 4468, Address: 0x10ee2c, Func Offset: 0x53c
	// Line 4469, Address: 0x10ee34, Func Offset: 0x544
	// Line 4470, Address: 0x10ee48, Func Offset: 0x558
	// Line 4471, Address: 0x10ee58, Func Offset: 0x568
	// Line 4473, Address: 0x10ee60, Func Offset: 0x570
	// Line 4474, Address: 0x10ee68, Func Offset: 0x578
	// Line 4475, Address: 0x10ee70, Func Offset: 0x580
	// Line 4476, Address: 0x10ee78, Func Offset: 0x588
	// Line 4477, Address: 0x10ee8c, Func Offset: 0x59c
	// Line 4478, Address: 0x10ee9c, Func Offset: 0x5ac
	// Line 4479, Address: 0x10eeb0, Func Offset: 0x5c0
	// Line 4481, Address: 0x10eeb8, Func Offset: 0x5c8
	// Line 4482, Address: 0x10eec0, Func Offset: 0x5d0
	// Line 4483, Address: 0x10eec8, Func Offset: 0x5d8
	// Line 4484, Address: 0x10eedc, Func Offset: 0x5ec
	// Line 4497, Address: 0x10eeec, Func Offset: 0x5fc
	// Line 4509, Address: 0x10ef24, Func Offset: 0x634
	// Line 4510, Address: 0x10ef2c, Func Offset: 0x63c
	// Line 4511, Address: 0x10ef34, Func Offset: 0x644
	// Line 4512, Address: 0x10ef38, Func Offset: 0x648
	// Line 4515, Address: 0x10ef40, Func Offset: 0x650
	// Line 4516, Address: 0x10ef48, Func Offset: 0x658
	// Line 4517, Address: 0x10ef50, Func Offset: 0x660
	// Line 4523, Address: 0x10ef58, Func Offset: 0x668
	// Line 4527, Address: 0x10efa8, Func Offset: 0x6b8
	// Line 4528, Address: 0x10efb0, Func Offset: 0x6c0
	// Line 4529, Address: 0x10efb8, Func Offset: 0x6c8
	// Line 4530, Address: 0x10efc0, Func Offset: 0x6d0
	// Line 4531, Address: 0x10efc8, Func Offset: 0x6d8
	// Line 4533, Address: 0x10efd0, Func Offset: 0x6e0
	// Line 4534, Address: 0x10efd8, Func Offset: 0x6e8
	// Line 4535, Address: 0x10efe0, Func Offset: 0x6f0
	// Line 4536, Address: 0x10efe8, Func Offset: 0x6f8
	// Line 4537, Address: 0x10eff0, Func Offset: 0x700
	// Line 4539, Address: 0x10eff8, Func Offset: 0x708
	// Line 4540, Address: 0x10f000, Func Offset: 0x710
	// Line 4541, Address: 0x10f008, Func Offset: 0x718
	// Line 4542, Address: 0x10f010, Func Offset: 0x720
	// Line 4543, Address: 0x10f018, Func Offset: 0x728
	// Line 4545, Address: 0x10f020, Func Offset: 0x730
	// Line 4548, Address: 0x10f03c, Func Offset: 0x74c
	// Line 4550, Address: 0x10f044, Func Offset: 0x754
	// Line 4551, Address: 0x10f04c, Func Offset: 0x75c
	// Line 4552, Address: 0x10f054, Func Offset: 0x764
	// Line 4553, Address: 0x10f05c, Func Offset: 0x76c
	// Line 4557, Address: 0x10f064, Func Offset: 0x774
	// Line 4558, Address: 0x10f070, Func Offset: 0x780
	// Line 4559, Address: 0x10f08c, Func Offset: 0x79c
	// Line 4560, Address: 0x10f09c, Func Offset: 0x7ac
	// Line 4561, Address: 0x10f0c4, Func Offset: 0x7d4
	// Line 4562, Address: 0x10f0dc, Func Offset: 0x7ec
	// Line 4565, Address: 0x10f110, Func Offset: 0x820
	// Line 4567, Address: 0x10f138, Func Offset: 0x848
	// Line 4568, Address: 0x10f144, Func Offset: 0x854
	// Line 4571, Address: 0x10f14c, Func Offset: 0x85c
	// Line 4573, Address: 0x10f174, Func Offset: 0x884
	// Line 4577, Address: 0x10f180, Func Offset: 0x890
	// Line 4578, Address: 0x10f194, Func Offset: 0x8a4
	// Line 4579, Address: 0x10f19c, Func Offset: 0x8ac
	// Line 4580, Address: 0x10f1ac, Func Offset: 0x8bc
	// Line 4583, Address: 0x10f1b0, Func Offset: 0x8c0
	// Line 4585, Address: 0x10f1c4, Func Offset: 0x8d4
	// Func End, Address: 0x10f1f4, Func Offset: 0x904
}

// 
// Start address: 0x10f200
void PlayerCheckSoundUpper()
{
	JamesSoundInfo se_info[4];
	short frame;
	unsigned int material;
	unsigned short se2;
	unsigned short se;
	int i;
	// Line 4596, Address: 0x10f200, Func Offset: 0
	// Line 4604, Address: 0x10f220, Func Offset: 0x20
	// Line 4612, Address: 0x10f23c, Func Offset: 0x3c
	// Line 4615, Address: 0x10f258, Func Offset: 0x58
	// Line 4621, Address: 0x10f2d4, Func Offset: 0xd4
	// Line 4623, Address: 0x10f2f4, Func Offset: 0xf4
	// Line 4624, Address: 0x10f2fc, Func Offset: 0xfc
	// Line 4627, Address: 0x10f304, Func Offset: 0x104
	// Line 4630, Address: 0x10f30c, Func Offset: 0x10c
	// Line 4631, Address: 0x10f324, Func Offset: 0x124
	// Line 4632, Address: 0x10f338, Func Offset: 0x138
	// Line 4634, Address: 0x10f344, Func Offset: 0x144
	// Line 4635, Address: 0x10f34c, Func Offset: 0x14c
	// Line 4636, Address: 0x10f360, Func Offset: 0x160
	// Line 4639, Address: 0x10f370, Func Offset: 0x170
	// Line 4641, Address: 0x10f398, Func Offset: 0x198
	// Line 4642, Address: 0x10f3a0, Func Offset: 0x1a0
	// Line 4644, Address: 0x10f3a8, Func Offset: 0x1a8
	// Line 4645, Address: 0x10f3b0, Func Offset: 0x1b0
	// Line 4647, Address: 0x10f3b8, Func Offset: 0x1b8
	// Line 4648, Address: 0x10f3c0, Func Offset: 0x1c0
	// Line 4650, Address: 0x10f3c8, Func Offset: 0x1c8
	// Line 4651, Address: 0x10f3d0, Func Offset: 0x1d0
	// Line 4653, Address: 0x10f3d8, Func Offset: 0x1d8
	// Line 4654, Address: 0x10f3e0, Func Offset: 0x1e0
	// Line 4656, Address: 0x10f3e8, Func Offset: 0x1e8
	// Line 4657, Address: 0x10f3f0, Func Offset: 0x1f0
	// Line 4659, Address: 0x10f3f8, Func Offset: 0x1f8
	// Line 4660, Address: 0x10f400, Func Offset: 0x200
	// Line 4662, Address: 0x10f408, Func Offset: 0x208
	// Line 4663, Address: 0x10f410, Func Offset: 0x210
	// Line 4665, Address: 0x10f418, Func Offset: 0x218
	// Line 4666, Address: 0x10f420, Func Offset: 0x220
	// Line 4668, Address: 0x10f428, Func Offset: 0x228
	// Line 4669, Address: 0x10f430, Func Offset: 0x230
	// Line 4671, Address: 0x10f438, Func Offset: 0x238
	// Line 4672, Address: 0x10f440, Func Offset: 0x240
	// Line 4674, Address: 0x10f448, Func Offset: 0x248
	// Line 4675, Address: 0x10f450, Func Offset: 0x250
	// Line 4677, Address: 0x10f458, Func Offset: 0x258
	// Line 4678, Address: 0x10f460, Func Offset: 0x260
	// Line 4686, Address: 0x10f468, Func Offset: 0x268
	// Line 4687, Address: 0x10f478, Func Offset: 0x278
	// Line 4689, Address: 0x10f480, Func Offset: 0x280
	// Line 4692, Address: 0x10f488, Func Offset: 0x288
	// Line 4693, Address: 0x10f498, Func Offset: 0x298
	// Line 4696, Address: 0x10f4c0, Func Offset: 0x2c0
	// Line 4697, Address: 0x10f4c8, Func Offset: 0x2c8
	// Line 4701, Address: 0x10f4d0, Func Offset: 0x2d0
	// Line 4702, Address: 0x10f4d8, Func Offset: 0x2d8
	// Line 4704, Address: 0x10f4e0, Func Offset: 0x2e0
	// Line 4705, Address: 0x10f4e8, Func Offset: 0x2e8
	// Line 4729, Address: 0x10f4f0, Func Offset: 0x2f0
	// Line 4730, Address: 0x10f4f8, Func Offset: 0x2f8
	// Line 4732, Address: 0x10f500, Func Offset: 0x300
	// Line 4733, Address: 0x10f510, Func Offset: 0x310
	// Line 4734, Address: 0x10f518, Func Offset: 0x318
	// Line 4735, Address: 0x10f520, Func Offset: 0x320
	// Line 4738, Address: 0x10f568, Func Offset: 0x368
	// Line 4739, Address: 0x10f570, Func Offset: 0x370
	// Line 4741, Address: 0x10f578, Func Offset: 0x378
	// Line 4742, Address: 0x10f580, Func Offset: 0x380
	// Line 4744, Address: 0x10f588, Func Offset: 0x388
	// Line 4752, Address: 0x10f590, Func Offset: 0x390
	// Line 4754, Address: 0x10f604, Func Offset: 0x404
	// Line 4756, Address: 0x10f624, Func Offset: 0x424
	// Line 4758, Address: 0x10f650, Func Offset: 0x450
	// Line 4759, Address: 0x10f658, Func Offset: 0x458
	// Line 4760, Address: 0x10f660, Func Offset: 0x460
	// Line 4761, Address: 0x10f674, Func Offset: 0x474
	// Line 4762, Address: 0x10f6ac, Func Offset: 0x4ac
	// Line 4763, Address: 0x10f6b4, Func Offset: 0x4b4
	// Line 4765, Address: 0x10f6bc, Func Offset: 0x4bc
	// Line 4766, Address: 0x10f6c4, Func Offset: 0x4c4
	// Line 4767, Address: 0x10f6cc, Func Offset: 0x4cc
	// Line 4768, Address: 0x10f6e0, Func Offset: 0x4e0
	// Line 4773, Address: 0x10f718, Func Offset: 0x518
	// Line 4776, Address: 0x10f720, Func Offset: 0x520
	// Line 4777, Address: 0x10f728, Func Offset: 0x528
	// Line 4778, Address: 0x10f73c, Func Offset: 0x53c
	// Line 4780, Address: 0x10f744, Func Offset: 0x544
	// Line 4782, Address: 0x10f770, Func Offset: 0x570
	// Line 4783, Address: 0x10f778, Func Offset: 0x578
	// Line 4784, Address: 0x10f78c, Func Offset: 0x58c
	// Line 4786, Address: 0x10f794, Func Offset: 0x594
	// Line 4787, Address: 0x10f79c, Func Offset: 0x59c
	// Line 4790, Address: 0x10f7b0, Func Offset: 0x5b0
	// Line 4792, Address: 0x10f7b8, Func Offset: 0x5b8
	// Line 4793, Address: 0x10f7c0, Func Offset: 0x5c0
	// Line 4794, Address: 0x10f7d4, Func Offset: 0x5d4
	// Line 4796, Address: 0x10f7dc, Func Offset: 0x5dc
	// Line 4797, Address: 0x10f7e4, Func Offset: 0x5e4
	// Line 4798, Address: 0x10f7f8, Func Offset: 0x5f8
	// Line 4800, Address: 0x10f800, Func Offset: 0x600
	// Line 4801, Address: 0x10f808, Func Offset: 0x608
	// Line 4802, Address: 0x10f81c, Func Offset: 0x61c
	// Line 4804, Address: 0x10f824, Func Offset: 0x624
	// Line 4805, Address: 0x10f82c, Func Offset: 0x62c
	// Line 4817, Address: 0x10f840, Func Offset: 0x640
	// Line 4818, Address: 0x10f84c, Func Offset: 0x64c
	// Line 4819, Address: 0x10f868, Func Offset: 0x668
	// Line 4820, Address: 0x10f878, Func Offset: 0x678
	// Line 4821, Address: 0x10f8a0, Func Offset: 0x6a0
	// Line 4824, Address: 0x10f8b8, Func Offset: 0x6b8
	// Line 4825, Address: 0x10f8fc, Func Offset: 0x6fc
	// Line 4826, Address: 0x10f900, Func Offset: 0x700
	// Line 4827, Address: 0x10f914, Func Offset: 0x714
	// Line 4828, Address: 0x10f91c, Func Offset: 0x71c
	// Line 4829, Address: 0x10f92c, Func Offset: 0x72c
	// Line 4832, Address: 0x10f930, Func Offset: 0x730
	// Line 4834, Address: 0x10f944, Func Offset: 0x744
	// Func End, Address: 0x10f96c, Func Offset: 0x76c
}

// 
// Start address: 0x10f970
void PlayerCheckSound()
{
	// Line 4839, Address: 0x10f970, Func Offset: 0
	// Line 4840, Address: 0x10f978, Func Offset: 0x8
	// Line 4841, Address: 0x10f980, Func Offset: 0x10
	// Line 4842, Address: 0x10f988, Func Offset: 0x18
	// Func End, Address: 0x10f998, Func Offset: 0x28
}

// 
// Start address: 0x10f9a0
void PlayerCheckDualShock()
{
	float rate;
	// Line 4854, Address: 0x10f9a0, Func Offset: 0
	// Line 4856, Address: 0x10f9a8, Func Offset: 0x8
	// Line 4860, Address: 0x10f9b8, Func Offset: 0x18
	// Line 4862, Address: 0x10f9fc, Func Offset: 0x5c
	// Line 4863, Address: 0x10fa18, Func Offset: 0x78
	// Line 4865, Address: 0x10fa20, Func Offset: 0x80
	// Line 4866, Address: 0x10fa3c, Func Offset: 0x9c
	// Line 4868, Address: 0x10fa44, Func Offset: 0xa4
	// Line 4869, Address: 0x10fa60, Func Offset: 0xc0
	// Line 4871, Address: 0x10fa68, Func Offset: 0xc8
	// Line 4874, Address: 0x10fa84, Func Offset: 0xe4
	// Line 4877, Address: 0x10fa8c, Func Offset: 0xec
	// Line 4881, Address: 0x10faac, Func Offset: 0x10c
	// Line 4883, Address: 0x10fafc, Func Offset: 0x15c
	// Line 4884, Address: 0x10fb18, Func Offset: 0x178
	// Line 4886, Address: 0x10fb20, Func Offset: 0x180
	// Line 4887, Address: 0x10fb3c, Func Offset: 0x19c
	// Line 4889, Address: 0x10fb44, Func Offset: 0x1a4
	// Line 4890, Address: 0x10fb60, Func Offset: 0x1c0
	// Line 4892, Address: 0x10fb68, Func Offset: 0x1c8
	// Line 4897, Address: 0x10fb84, Func Offset: 0x1e4
	// Func End, Address: 0x10fb94, Func Offset: 0x1f4
}

// 
// Start address: 0x10fba0
void SubCharacter::PlayerFunction()
{
	SubCharacter* scp;
	short id;
	_AnimeInfo* aip;
	// Line 5009, Address: 0x10fba0, Func Offset: 0
	// Line 5026, Address: 0x10fbb8, Func Offset: 0x18
	// Line 5032, Address: 0x10fbe8, Func Offset: 0x48
	// Line 5034, Address: 0x10fbfc, Func Offset: 0x5c
	// Line 5037, Address: 0x10fc04, Func Offset: 0x64
	// Line 5040, Address: 0x10fc14, Func Offset: 0x74
	// Line 5041, Address: 0x10fc28, Func Offset: 0x88
	// Line 5042, Address: 0x10fc30, Func Offset: 0x90
	// Line 5043, Address: 0x10fc38, Func Offset: 0x98
	// Line 5046, Address: 0x10fc40, Func Offset: 0xa0
	// Line 5048, Address: 0x10fc50, Func Offset: 0xb0
	// Line 5053, Address: 0x10fc5c, Func Offset: 0xbc
	// Line 5055, Address: 0x10fc68, Func Offset: 0xc8
	// Line 5057, Address: 0x10fc78, Func Offset: 0xd8
	// Line 5067, Address: 0x10fc80, Func Offset: 0xe0
	// Line 5072, Address: 0x10fc94, Func Offset: 0xf4
	// Line 5083, Address: 0x10fca8, Func Offset: 0x108
	// Line 5086, Address: 0x10fcb0, Func Offset: 0x110
	// Line 5089, Address: 0x10fcbc, Func Offset: 0x11c
	// Line 5094, Address: 0x10fcc8, Func Offset: 0x128
	// Line 5114, Address: 0x10fce4, Func Offset: 0x144
	// Line 5117, Address: 0x10fd0c, Func Offset: 0x16c
	// Line 5118, Address: 0x10fd18, Func Offset: 0x178
	// Line 5121, Address: 0x10fd20, Func Offset: 0x180
	// Line 5134, Address: 0x10fd2c, Func Offset: 0x18c
	// Line 5137, Address: 0x10fd34, Func Offset: 0x194
	// Line 5141, Address: 0x10fd3c, Func Offset: 0x19c
	// Line 5143, Address: 0x10fd64, Func Offset: 0x1c4
	// Line 5144, Address: 0x10fd70, Func Offset: 0x1d0
	// Line 5146, Address: 0x10fd78, Func Offset: 0x1d8
	// Line 5151, Address: 0x10fd84, Func Offset: 0x1e4
	// Line 5154, Address: 0x10fd98, Func Offset: 0x1f8
	// Line 5163, Address: 0x10fda4, Func Offset: 0x204
	// Line 5166, Address: 0x10fdac, Func Offset: 0x20c
	// Line 5189, Address: 0x10fdb4, Func Offset: 0x214
	// Func End, Address: 0x10fdd0, Func Offset: 0x230
}

// 
// Start address: 0x10fdd0
void shGetJamesLightPos(float* pos, float* vec)
{
	// Line 5200, Address: 0x10fdd0, Func Offset: 0
	// Line 5201, Address: 0x10fde0, Func Offset: 0x10
	// Line 5202, Address: 0x10fdf0, Func Offset: 0x20
	// Func End, Address: 0x10fdf8, Func Offset: 0x28
}

// 
// Start address: 0x10fe00
void shGetJamesLightPos_Calc_Chest()
{
	float mat[4][4];
	float m[4][4];
	float neck[4];
	int i1;
	_anon2 pos1;
	_anon2 pos0;
	_anon3 light_mat;
	_anon3 lw_mat;
	shSkelton* top;
	SubCharacter* p;
	// Line 5218, Address: 0x10fe00, Func Offset: 0
	// Line 5229, Address: 0x10fe0c, Func Offset: 0xc
	// Line 5230, Address: 0x10fe1c, Func Offset: 0x1c
	// Line 5234, Address: 0x10fe34, Func Offset: 0x34
	// Line 5235, Address: 0x10fe44, Func Offset: 0x44
	// Line 5236, Address: 0x10fe54, Func Offset: 0x54
	// Line 5239, Address: 0x10fe6c, Func Offset: 0x6c
	// Line 5240, Address: 0x10fe74, Func Offset: 0x74
	// Line 5241, Address: 0x10fe78, Func Offset: 0x78
	// Line 5244, Address: 0x10fea8, Func Offset: 0xa8
	// Line 5245, Address: 0x10feb4, Func Offset: 0xb4
	// Line 5246, Address: 0x10feb8, Func Offset: 0xb8
	// Line 5249, Address: 0x10fed4, Func Offset: 0xd4
	// Line 5250, Address: 0x10ff04, Func Offset: 0x104
	// Line 5251, Address: 0x10ff18, Func Offset: 0x118
	// Line 5258, Address: 0x10ff28, Func Offset: 0x128
	// Line 5259, Address: 0x10ff3c, Func Offset: 0x13c
	// Line 5260, Address: 0x10ff50, Func Offset: 0x150
	// Line 5261, Address: 0x10ff64, Func Offset: 0x164
	// Line 5264, Address: 0x10ff70, Func Offset: 0x170
	// Line 5267, Address: 0x10ff84, Func Offset: 0x184
	// Line 5268, Address: 0x10ff94, Func Offset: 0x194
	// Line 5269, Address: 0x10ffa4, Func Offset: 0x1a4
	// Line 5270, Address: 0x10ffb4, Func Offset: 0x1b4
	// Line 5273, Address: 0x10ffbc, Func Offset: 0x1bc
	// Line 5280, Address: 0x10ffd4, Func Offset: 0x1d4
	// Line 5281, Address: 0x10ffe4, Func Offset: 0x1e4
	// Line 5282, Address: 0x10fff4, Func Offset: 0x1f4
	// Line 5283, Address: 0x110008, Func Offset: 0x208
	// Line 5286, Address: 0x110014, Func Offset: 0x214
	// Line 5289, Address: 0x110028, Func Offset: 0x228
	// Line 5290, Address: 0x110038, Func Offset: 0x238
	// Line 5291, Address: 0x110048, Func Offset: 0x248
	// Line 5292, Address: 0x110058, Func Offset: 0x258
	// Line 5294, Address: 0x110068, Func Offset: 0x268
	// Line 5296, Address: 0x11007c, Func Offset: 0x27c
	// Line 5298, Address: 0x11008c, Func Offset: 0x28c
	// Line 5299, Address: 0x1100a0, Func Offset: 0x2a0
	// Line 5300, Address: 0x1100b0, Func Offset: 0x2b0
	// Line 5301, Address: 0x1100b8, Func Offset: 0x2b8
	// Line 5302, Address: 0x1100c4, Func Offset: 0x2c4
	// Line 5306, Address: 0x1100d0, Func Offset: 0x2d0
	// Line 5312, Address: 0x110108, Func Offset: 0x308
	// Line 5320, Address: 0x110140, Func Offset: 0x340
	// Line 5323, Address: 0x110154, Func Offset: 0x354
	// Line 5324, Address: 0x110164, Func Offset: 0x364
	// Line 5325, Address: 0x110170, Func Offset: 0x370
	// Line 5326, Address: 0x110198, Func Offset: 0x398
	// Line 5327, Address: 0x1101d4, Func Offset: 0x3d4
	// Line 5332, Address: 0x110210, Func Offset: 0x410
	// Line 5334, Address: 0x11022c, Func Offset: 0x42c
	// Line 5335, Address: 0x110248, Func Offset: 0x448
	// Line 5336, Address: 0x110264, Func Offset: 0x464
	// Line 5339, Address: 0x110280, Func Offset: 0x480
	// Line 5341, Address: 0x110298, Func Offset: 0x498
	// Func End, Address: 0x1102ac, Func Offset: 0x4ac
}

// 
// Start address: 0x1102b0
void shGetJamesLightPos_Calc_Hand()
{
	int pad;
	float j_light_vec[4];
	_anon2 pos1;
	_anon2 pos0;
	_anon3 light_mat;
	_anon3 lw_mat;
	shSkelton* top;
	SubCharacter* p;
	float zv;
	float yv;
	float xv;
	float zp;
	float yp;
	float xp;
	// Line 5344, Address: 0x1102b0, Func Offset: 0
	// Line 5352, Address: 0x1102bc, Func Offset: 0xc
	// Line 5353, Address: 0x1102d0, Func Offset: 0x20
	// Line 5384, Address: 0x1102d8, Func Offset: 0x28
	// Line 5386, Address: 0x1102e8, Func Offset: 0x38
	// Line 5388, Address: 0x1102f0, Func Offset: 0x40
	// Line 5389, Address: 0x1102f4, Func Offset: 0x44
	// Line 5393, Address: 0x110324, Func Offset: 0x74
	// Line 5394, Address: 0x110354, Func Offset: 0xa4
	// Line 5395, Address: 0x110368, Func Offset: 0xb8
	// Line 5402, Address: 0x110378, Func Offset: 0xc8
	// Line 5403, Address: 0x110384, Func Offset: 0xd4
	// Line 5404, Address: 0x110390, Func Offset: 0xe0
	// Line 5405, Address: 0x11039c, Func Offset: 0xec
	// Line 5408, Address: 0x1103a8, Func Offset: 0xf8
	// Line 5411, Address: 0x1103bc, Func Offset: 0x10c
	// Line 5412, Address: 0x1103cc, Func Offset: 0x11c
	// Line 5413, Address: 0x1103dc, Func Offset: 0x12c
	// Line 5414, Address: 0x1103ec, Func Offset: 0x13c
	// Line 5417, Address: 0x1103f4, Func Offset: 0x144
	// Line 5424, Address: 0x11040c, Func Offset: 0x15c
	// Line 5425, Address: 0x110418, Func Offset: 0x168
	// Line 5426, Address: 0x110424, Func Offset: 0x174
	// Line 5427, Address: 0x110430, Func Offset: 0x180
	// Line 5430, Address: 0x11043c, Func Offset: 0x18c
	// Line 5433, Address: 0x110450, Func Offset: 0x1a0
	// Line 5434, Address: 0x110460, Func Offset: 0x1b0
	// Line 5435, Address: 0x110470, Func Offset: 0x1c0
	// Line 5436, Address: 0x110480, Func Offset: 0x1d0
	// Line 5438, Address: 0x110490, Func Offset: 0x1e0
	// Line 5479, Address: 0x1104a4, Func Offset: 0x1f4
	// Line 5481, Address: 0x1104c0, Func Offset: 0x210
	// Line 5482, Address: 0x1104dc, Func Offset: 0x22c
	// Line 5483, Address: 0x1104f8, Func Offset: 0x248
	// Line 5486, Address: 0x110514, Func Offset: 0x264
	// Line 5488, Address: 0x11052c, Func Offset: 0x27c
	// Func End, Address: 0x110540, Func Offset: 0x290
}

// 
// Start address: 0x110540
void shGetJamesLightPos_Calc()
{
	// Line 5491, Address: 0x110540, Func Offset: 0
	// Line 5492, Address: 0x110548, Func Offset: 0x8
	// Line 5493, Address: 0x110560, Func Offset: 0x20
	// Line 5494, Address: 0x110568, Func Offset: 0x28
	// Line 5495, Address: 0x110570, Func Offset: 0x30
	// Line 5497, Address: 0x110578, Func Offset: 0x38
	// Func End, Address: 0x110588, Func Offset: 0x48
}

// 
// Start address: 0x110590
void GetPlayerPartsMatrixForCameraCtrl(float mat[4], unsigned int parts_name)
{
	shSkelton* sk;
	int i1;
	// Line 5507, Address: 0x110590, Func Offset: 0
	// Line 5511, Address: 0x1105a8, Func Offset: 0x18
	// Line 5512, Address: 0x1105b4, Func Offset: 0x24
	// Line 5513, Address: 0x1105c0, Func Offset: 0x30
	// Line 5515, Address: 0x1105dc, Func Offset: 0x4c
	// Line 5520, Address: 0x1105f8, Func Offset: 0x68
	// Func End, Address: 0x110610, Func Offset: 0x80
}

// 
// Start address: 0x110610
void GetPlayerPartsWorldMatrix(float mat[4], unsigned int parts_name)
{
	// Line 5526, Address: 0x110610, Func Offset: 0
	// Line 5527, Address: 0x110620, Func Offset: 0x10
	// Line 5528, Address: 0x110630, Func Offset: 0x20
	// Func End, Address: 0x110640, Func Offset: 0x30
}

// 
// Start address: 0x110640
void GetPlayerPartsLocalMatrix(_anon3* dest, int parts_name)
{
	shSkelton* sk;
	SubCharacter* p;
	int i1;
	// Line 5534, Address: 0x110640, Func Offset: 0
	// Line 5540, Address: 0x11065c, Func Offset: 0x1c
	// Line 5541, Address: 0x110670, Func Offset: 0x30
	// Line 5542, Address: 0x11068c, Func Offset: 0x4c
	// Line 5543, Address: 0x1106a8, Func Offset: 0x68
	// Line 5544, Address: 0x1106c4, Func Offset: 0x84
	// Line 5546, Address: 0x1106cc, Func Offset: 0x8c
	// Line 5547, Address: 0x1106d0, Func Offset: 0x90
	// Line 5548, Address: 0x1106dc, Func Offset: 0x9c
	// Line 5550, Address: 0x1106fc, Func Offset: 0xbc
	// Line 5551, Address: 0x11072c, Func Offset: 0xec
	// Func End, Address: 0x110748, Func Offset: 0x108
}

// 
// Start address: 0x110750
shCharaInfo* GetPlayerInfoForCameraCtrl()
{
	// Line 5581, Address: 0x110750, Func Offset: 0
	// Line 5582, Address: 0x11075c, Func Offset: 0xc
	// Func End, Address: 0x110764, Func Offset: 0x14
}

// 
// Start address: 0x110770
void shCharacterPlayerWorkInitAtPowerOn()
{
	// Line 5674, Address: 0x110770, Func Offset: 0
	// Line 5676, Address: 0x110778, Func Offset: 0x8
	// Line 5677, Address: 0x11078c, Func Offset: 0x1c
	// Func End, Address: 0x11079c, Func Offset: 0x2c
}

// 
// Start address: 0x1107a0
void shCharacterPlayerWorkInitAtGameStart()
{
	// Line 5690, Address: 0x1107a0, Func Offset: 0
	// Line 5693, Address: 0x1107a8, Func Offset: 0x8
	// Line 5695, Address: 0x1107c8, Func Offset: 0x28
	// Line 5701, Address: 0x1107d4, Func Offset: 0x34
	// Line 5702, Address: 0x1107e0, Func Offset: 0x40
	// Line 5705, Address: 0x1107f4, Func Offset: 0x54
	// Line 5706, Address: 0x110800, Func Offset: 0x60
	// Line 5707, Address: 0x11080c, Func Offset: 0x6c
	// Line 5708, Address: 0x110818, Func Offset: 0x78
	// Line 5709, Address: 0x110824, Func Offset: 0x84
	// Line 5710, Address: 0x110830, Func Offset: 0x90
	// Line 5711, Address: 0x11083c, Func Offset: 0x9c
	// Line 5712, Address: 0x110848, Func Offset: 0xa8
	// Line 5714, Address: 0x110854, Func Offset: 0xb4
	// Line 5715, Address: 0x110868, Func Offset: 0xc8
	// Line 5719, Address: 0x11087c, Func Offset: 0xdc
	// Line 5720, Address: 0x110894, Func Offset: 0xf4
	// Line 5722, Address: 0x1108a8, Func Offset: 0x108
	// Line 5723, Address: 0x1108bc, Func Offset: 0x11c
	// Line 5725, Address: 0x1108d4, Func Offset: 0x134
	// Func End, Address: 0x1108e4, Func Offset: 0x144
}

// 
// Start address: 0x1108f0
void shCharacterSetPlayerLow(SubCharacter* scp)
{
	// Line 5744, Address: 0x1108f0, Func Offset: 0
	// Line 5745, Address: 0x1108fc, Func Offset: 0xc
	// Line 5746, Address: 0x110910, Func Offset: 0x20
	// Line 5747, Address: 0x110918, Func Offset: 0x28
	// Line 5748, Address: 0x110924, Func Offset: 0x34
	// Line 5749, Address: 0x11092c, Func Offset: 0x3c
	// Func End, Address: 0x11093c, Func Offset: 0x4c
}

// 
// Start address: 0x110940
void PlayerGetTargetInfo()
{
	// Line 5779, Address: 0x110940, Func Offset: 0
	// Line 5784, Address: 0x110948, Func Offset: 0x8
	// Line 5787, Address: 0x110964, Func Offset: 0x24
	// Line 5795, Address: 0x110978, Func Offset: 0x38
	// Line 5799, Address: 0x110994, Func Offset: 0x54
	// Line 5800, Address: 0x1109a4, Func Offset: 0x64
	// Line 5801, Address: 0x1109cc, Func Offset: 0x8c
	// Line 5806, Address: 0x1109d4, Func Offset: 0x94
	// Line 5808, Address: 0x1109ec, Func Offset: 0xac
	// Func End, Address: 0x1109fc, Func Offset: 0xbc
}

// 
// Start address: 0x110a00
void PlayerGetTarget()
{
	// Line 5816, Address: 0x110a00, Func Offset: 0
	// Line 5817, Address: 0x110a08, Func Offset: 0x8
	// Line 5818, Address: 0x110a18, Func Offset: 0x18
	// Line 5819, Address: 0x110a28, Func Offset: 0x28
	// Line 5821, Address: 0x110a40, Func Offset: 0x40
	// Func End, Address: 0x110a50, Func Offset: 0x50
}

// 
// Start address: 0x110a50
void PlayerChangeTarget(int key)
{
	// Line 5830, Address: 0x110a50, Func Offset: 0
	// Line 5831, Address: 0x110a5c, Func Offset: 0xc
	// Line 5832, Address: 0x110a6c, Func Offset: 0x1c
	// Line 5835, Address: 0x110a88, Func Offset: 0x38
	// Line 5836, Address: 0x110a98, Func Offset: 0x48
	// Line 5838, Address: 0x110ab4, Func Offset: 0x64
	// Func End, Address: 0x110ac4, Func Offset: 0x74
}

// 
// Start address: 0x110ad0
void PlayerRequestAttack(shPlayerWork* w, int num)
{
	float gunvec[4];
	float gunpos[4];
	unsigned char atk1;
	unsigned char atk2;
	unsigned char attack;
	// Line 5852, Address: 0x110ad0, Func Offset: 0
	// Line 5862, Address: 0x110b04, Func Offset: 0x34
	// Line 5863, Address: 0x110b10, Func Offset: 0x40
	// Line 5864, Address: 0x110b1c, Func Offset: 0x4c
	// Line 5867, Address: 0x110b3c, Func Offset: 0x6c
	// Line 5868, Address: 0x110b54, Func Offset: 0x84
	// Line 5873, Address: 0x110b5c, Func Offset: 0x8c
	// Line 5875, Address: 0x110b90, Func Offset: 0xc0
	// Line 5876, Address: 0x110bac, Func Offset: 0xdc
	// Line 5880, Address: 0x110bb4, Func Offset: 0xe4
	// Line 5882, Address: 0x110bd4, Func Offset: 0x104
	// Line 5885, Address: 0x110bdc, Func Offset: 0x10c
	// Line 5887, Address: 0x110bec, Func Offset: 0x11c
	// Line 5890, Address: 0x110c08, Func Offset: 0x138
	// Line 5891, Address: 0x110c10, Func Offset: 0x140
	// Line 5893, Address: 0x110c44, Func Offset: 0x174
	// Line 5894, Address: 0x110c50, Func Offset: 0x180
	// Line 5902, Address: 0x110c5c, Func Offset: 0x18c
	// Line 5906, Address: 0x110c64, Func Offset: 0x194
	// Line 5907, Address: 0x110c78, Func Offset: 0x1a8
	// Line 5911, Address: 0x110c80, Func Offset: 0x1b0
	// Line 5912, Address: 0x110c90, Func Offset: 0x1c0
	// Line 5913, Address: 0x110ca4, Func Offset: 0x1d4
	// Line 5914, Address: 0x110cac, Func Offset: 0x1dc
	// Line 5917, Address: 0x110cfc, Func Offset: 0x22c
	// Line 5920, Address: 0x110d04, Func Offset: 0x234
	// Line 5921, Address: 0x110d14, Func Offset: 0x244
	// Line 5922, Address: 0x110d28, Func Offset: 0x258
	// Line 5924, Address: 0x110d30, Func Offset: 0x260
	// Line 5925, Address: 0x110d40, Func Offset: 0x270
	// Line 5926, Address: 0x110d54, Func Offset: 0x284
	// Line 5927, Address: 0x110d5c, Func Offset: 0x28c
	// Line 5935, Address: 0x110dac, Func Offset: 0x2dc
	// Line 5938, Address: 0x110db4, Func Offset: 0x2e4
	// Line 5939, Address: 0x110dc4, Func Offset: 0x2f4
	// Line 5940, Address: 0x110dd8, Func Offset: 0x308
	// Line 5941, Address: 0x110de0, Func Offset: 0x310
	// Line 5949, Address: 0x110e3c, Func Offset: 0x36c
	// Func End, Address: 0x110e70, Func Offset: 0x3a0
}

// 
// Start address: 0x110e70
void PlayerRequestAttackFinish(shPlayerWork* w)
{
	unsigned char atk1;
	unsigned char atk2;
	unsigned char attack;
	// Line 5956, Address: 0x110e70, Func Offset: 0
	// Line 5960, Address: 0x110e88, Func Offset: 0x18
	// Line 5961, Address: 0x110e94, Func Offset: 0x24
	// Line 5962, Address: 0x110ea0, Func Offset: 0x30
	// Line 5964, Address: 0x110ebc, Func Offset: 0x4c
	// Line 5965, Address: 0x110ec4, Func Offset: 0x54
	// Line 5966, Address: 0x110ed4, Func Offset: 0x64
	// Line 5967, Address: 0x110ee4, Func Offset: 0x74
	// Line 5968, Address: 0x110ef0, Func Offset: 0x80
	// Line 5969, Address: 0x110ef8, Func Offset: 0x88
	// Line 5973, Address: 0x110f04, Func Offset: 0x94
	// Func End, Address: 0x110f20, Func Offset: 0xb0
}

// 
// Start address: 0x110f20
void SubCharacter::PlayerCheckStraightLine(float spd_roty)
{
	float wall[4];
	float me[4];
	float roty;
	float ep[4];
	float sp[4];
	// Line 5982, Address: 0x110f20, Func Offset: 0
	// Line 5991, Address: 0x110f34, Func Offset: 0x14
	// Line 5992, Address: 0x110f3c, Func Offset: 0x1c
	// Line 5996, Address: 0x110f44, Func Offset: 0x24
	// Line 5997, Address: 0x110f58, Func Offset: 0x38
	// Line 5999, Address: 0x110f68, Func Offset: 0x48
	// Line 6001, Address: 0x110f6c, Func Offset: 0x4c
	// Line 6003, Address: 0x110f74, Func Offset: 0x54
	// Line 6004, Address: 0x110f9c, Func Offset: 0x7c
	// Line 6007, Address: 0x110fc4, Func Offset: 0xa4
	// Line 6008, Address: 0x110fd0, Func Offset: 0xb0
	// Line 6011, Address: 0x110fec, Func Offset: 0xcc
	// Line 6015, Address: 0x111004, Func Offset: 0xe4
	// Line 6018, Address: 0x111064, Func Offset: 0x144
	// Line 6021, Address: 0x111084, Func Offset: 0x164
	// Line 6026, Address: 0x1110a8, Func Offset: 0x188
	// Line 6027, Address: 0x1110b8, Func Offset: 0x198
	// Line 6028, Address: 0x1110c8, Func Offset: 0x1a8
	// Line 6029, Address: 0x1110d8, Func Offset: 0x1b8
	// Line 6031, Address: 0x1110e8, Func Offset: 0x1c8
	// Line 6032, Address: 0x1110fc, Func Offset: 0x1dc
	// Line 6033, Address: 0x111124, Func Offset: 0x204
	// Line 6035, Address: 0x11114c, Func Offset: 0x22c
	// Line 6052, Address: 0x111180, Func Offset: 0x260
	// Line 6053, Address: 0x1111c8, Func Offset: 0x2a8
	// Line 6054, Address: 0x1111f0, Func Offset: 0x2d0
	// Line 6056, Address: 0x1111fc, Func Offset: 0x2dc
	// Line 6064, Address: 0x111210, Func Offset: 0x2f0
	// Func End, Address: 0x111228, Func Offset: 0x308
}

// 
// Start address: 0x111230
void shGetJamesFootPos(float* pos, float* vec, int kind)
{
	float wep_range_test[4][2];
	int sk_num;
	int i;
	shSkelton* stp;
	_anon3 mat;
	_anon3 lw_mat;
	float vec0[4];
	float pos1[4];
	float pos0[4];
	// Line 6080, Address: 0x111230, Func Offset: 0
	// Line 6086, Address: 0x111254, Func Offset: 0x24
	// Line 6111, Address: 0x111270, Func Offset: 0x40
	// Line 6112, Address: 0x111278, Func Offset: 0x48
	// Line 6114, Address: 0x111284, Func Offset: 0x54
	// Line 6116, Address: 0x111288, Func Offset: 0x58
	// Line 6117, Address: 0x1112c0, Func Offset: 0x90
	// Line 6119, Address: 0x1112cc, Func Offset: 0x9c
	// Line 6120, Address: 0x1112d8, Func Offset: 0xa8
	// Line 6125, Address: 0x1112f4, Func Offset: 0xc4
	// Line 6126, Address: 0x111324, Func Offset: 0xf4
	// Line 6128, Address: 0x111334, Func Offset: 0x104
	// Line 6129, Address: 0x111348, Func Offset: 0x118
	// Line 6131, Address: 0x111358, Func Offset: 0x128
	// Line 6132, Address: 0x11136c, Func Offset: 0x13c
	// Line 6134, Address: 0x111378, Func Offset: 0x148
	// Line 6136, Address: 0x111390, Func Offset: 0x160
	// Line 6137, Address: 0x1113a4, Func Offset: 0x174
	// Line 6138, Address: 0x1113b4, Func Offset: 0x184
	// Line 6139, Address: 0x1113c4, Func Offset: 0x194
	// Line 6140, Address: 0x1113d4, Func Offset: 0x1a4
	// Line 6142, Address: 0x1113dc, Func Offset: 0x1ac
	// Line 6150, Address: 0x1113f0, Func Offset: 0x1c0
	// Line 6155, Address: 0x11140c, Func Offset: 0x1dc
	// Line 6157, Address: 0x111430, Func Offset: 0x200
	// Func End, Address: 0x111450, Func Offset: 0x220
}

// 
// Start address: 0x111450
void shGetJamesKickStartPos(float* pos, float* vec)
{
	// Line 6159, Address: 0x111450, Func Offset: 0
	// Line 6160, Address: 0x111460, Func Offset: 0x10
	// Line 6161, Address: 0x111474, Func Offset: 0x24
	// Func End, Address: 0x111484, Func Offset: 0x34
}

// 
// Start address: 0x111490
void shGetJamesTrampStartPos(float* pos, float* vec)
{
	// Line 6163, Address: 0x111490, Func Offset: 0
	// Line 6164, Address: 0x1114a0, Func Offset: 0x10
	// Line 6165, Address: 0x1114b4, Func Offset: 0x24
	// Func End, Address: 0x1114c4, Func Offset: 0x34
}

// 
// Start address: 0x1114d0
int PlayerNowItemName(unsigned char wep)
{
	int wep_name;
	// Line 6172, Address: 0x1114d0, Func Offset: 0
	// Line 6175, Address: 0x1114dc, Func Offset: 0xc
	// Line 6177, Address: 0x11150c, Func Offset: 0x3c
	// Line 6178, Address: 0x111510, Func Offset: 0x40
	// Line 6180, Address: 0x111518, Func Offset: 0x48
	// Line 6181, Address: 0x11151c, Func Offset: 0x4c
	// Line 6183, Address: 0x111524, Func Offset: 0x54
	// Line 6184, Address: 0x111528, Func Offset: 0x58
	// Line 6186, Address: 0x111530, Func Offset: 0x60
	// Line 6187, Address: 0x111534, Func Offset: 0x64
	// Line 6189, Address: 0x11153c, Func Offset: 0x6c
	// Line 6190, Address: 0x111540, Func Offset: 0x70
	// Line 6192, Address: 0x111548, Func Offset: 0x78
	// Line 6193, Address: 0x11154c, Func Offset: 0x7c
	// Line 6195, Address: 0x111554, Func Offset: 0x84
	// Line 6196, Address: 0x111558, Func Offset: 0x88
	// Line 6198, Address: 0x111560, Func Offset: 0x90
	// Line 6199, Address: 0x111564, Func Offset: 0x94
	// Line 6201, Address: 0x11156c, Func Offset: 0x9c
	// Line 6205, Address: 0x111570, Func Offset: 0xa0
	// Line 6207, Address: 0x111574, Func Offset: 0xa4
	// Func End, Address: 0x111584, Func Offset: 0xb4
}

// 
// Start address: 0x111590
int PlayerSearchVIewButtonCheck()
{
	// Line 6228, Address: 0x111590, Func Offset: 0
	// Line 6230, Address: 0x1115c0, Func Offset: 0x30
	// Line 6232, Address: 0x1115e8, Func Offset: 0x58
	// Line 6235, Address: 0x1115fc, Func Offset: 0x6c
	// Line 6239, Address: 0x111614, Func Offset: 0x84
	// Line 6240, Address: 0x111618, Func Offset: 0x88
	// Func End, Address: 0x111620, Func Offset: 0x90
}

// 
// Start address: 0x111620
float PlayerGetNeckAngleX()
{
	SubCharacterDisp* d;
	// Line 6250, Address: 0x111620, Func Offset: 0
	// Line 6251, Address: 0x111628, Func Offset: 0x8
	// Line 6253, Address: 0x111630, Func Offset: 0x10
	// Line 6254, Address: 0x111634, Func Offset: 0x14
	// Func End, Address: 0x111644, Func Offset: 0x24
}

// 
// Start address: 0x111650
float PlayerGetNeckAngleY()
{
	SubCharacterDisp* d;
	// Line 6256, Address: 0x111650, Func Offset: 0
	// Line 6257, Address: 0x111658, Func Offset: 0x8
	// Line 6259, Address: 0x111660, Func Offset: 0x10
	// Line 6260, Address: 0x111664, Func Offset: 0x14
	// Func End, Address: 0x111674, Func Offset: 0x24
}

// 
// Start address: 0x111680
int PlayerNowDemoEventMode()
{
	// Line 6282, Address: 0x111680, Func Offset: 0
	// Line 6283, Address: 0x111688, Func Offset: 0x8
	// Line 6284, Address: 0x1116b4, Func Offset: 0x34
	// Func End, Address: 0x1116c4, Func Offset: 0x44
}

// 
// Start address: 0x1116d0
int PlayerEventButtonCheck(int button)
{
	int pad;
	// Line 6320, Address: 0x1116d0, Func Offset: 0
	// Line 6323, Address: 0x1116dc, Func Offset: 0xc
	// Line 6325, Address: 0x111714, Func Offset: 0x44
	// Line 6326, Address: 0x111720, Func Offset: 0x50
	// Line 6328, Address: 0x111728, Func Offset: 0x58
	// Line 6329, Address: 0x111734, Func Offset: 0x64
	// Line 6331, Address: 0x11173c, Func Offset: 0x6c
	// Line 6332, Address: 0x11174c, Func Offset: 0x7c
	// Line 6334, Address: 0x111754, Func Offset: 0x84
	// Line 6335, Address: 0x111760, Func Offset: 0x90
	// Line 6337, Address: 0x111768, Func Offset: 0x98
	// Line 6341, Address: 0x111774, Func Offset: 0xa4
	// Line 6342, Address: 0x11177c, Func Offset: 0xac
	// Line 6343, Address: 0x111794, Func Offset: 0xc4
	// Line 6346, Address: 0x1117a0, Func Offset: 0xd0
	// Line 6347, Address: 0x1117a4, Func Offset: 0xd4
	// Func End, Address: 0x1117b4, Func Offset: 0xe4
}

// 
// Start address: 0x1117c0
int PlayerEventDeadAnimeFinish()
{
	// Line 6380, Address: 0x1117c0, Func Offset: 0
	// Line 6381, Address: 0x1117d8, Func Offset: 0x18
	// Line 6383, Address: 0x1117e4, Func Offset: 0x24
	// Line 6386, Address: 0x1117e8, Func Offset: 0x28
	// Func End, Address: 0x1117f0, Func Offset: 0x30
}

// 
// Start address: 0x1117f0
int PlayerEventAnimeSuccessFrame()
{
	short frame;
	_AnimeInfo* a_info;
	// Line 6400, Address: 0x1117f0, Func Offset: 0
	// Line 6401, Address: 0x111800, Func Offset: 0x10
	// Line 6402, Address: 0x111818, Func Offset: 0x28
	// Line 6404, Address: 0x111834, Func Offset: 0x44
	// Line 6405, Address: 0x11184c, Func Offset: 0x5c
	// Line 6406, Address: 0x111868, Func Offset: 0x78
	// Line 6408, Address: 0x111874, Func Offset: 0x84
	// Line 6409, Address: 0x111878, Func Offset: 0x88
	// Func End, Address: 0x111890, Func Offset: 0xa0
}

// 
// Start address: 0x111890
void PlayerEventAnimeSet(int anime)
{
	// Line 6417, Address: 0x111890, Func Offset: 0
	// Line 6418, Address: 0x11189c, Func Offset: 0xc
	// Line 6419, Address: 0x1118b0, Func Offset: 0x20
	// Line 6420, Address: 0x1118bc, Func Offset: 0x2c
	// Func End, Address: 0x1118cc, Func Offset: 0x3c
}

// 
// Start address: 0x1118d0
int shCharacterHumanPJAMESAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	short id;
	// Line 6445, Address: 0x1118d0, Func Offset: 0
	// Line 6449, Address: 0x1118e8, Func Offset: 0x18
	// Line 6456, Address: 0x1118fc, Func Offset: 0x2c
	// Line 6459, Address: 0x111924, Func Offset: 0x54
	// Line 6460, Address: 0x111944, Func Offset: 0x74
	// Line 6468, Address: 0x111990, Func Offset: 0xc0
	// Line 6470, Address: 0x11199c, Func Offset: 0xcc
	// Line 6472, Address: 0x1119a0, Func Offset: 0xd0
	// Func End, Address: 0x1119b8, Func Offset: 0xe8
}

// 
// Start address: 0x1119c0
void JamesWeaponSet(int wep)
{
	// Line 6483, Address: 0x1119c0, Func Offset: 0
	// Line 6485, Address: 0x1119cc, Func Offset: 0xc
	// Line 6487, Address: 0x1119dc, Func Offset: 0x1c
	// Line 6491, Address: 0x111a08, Func Offset: 0x48
	// Line 6492, Address: 0x111a10, Func Offset: 0x50
	// Line 6495, Address: 0x111a18, Func Offset: 0x58
	// Line 6496, Address: 0x111a24, Func Offset: 0x64
	// Line 6499, Address: 0x111a2c, Func Offset: 0x6c
	// Line 6500, Address: 0x111a38, Func Offset: 0x78
	// Line 6502, Address: 0x111a40, Func Offset: 0x80
	// Line 6503, Address: 0x111a4c, Func Offset: 0x8c
	// Line 6505, Address: 0x111a54, Func Offset: 0x94
	// Line 6509, Address: 0x111a60, Func Offset: 0xa0
	// Line 6510, Address: 0x111a6c, Func Offset: 0xac
	// Line 6511, Address: 0x111a78, Func Offset: 0xb8
	// Line 6514, Address: 0x111a8c, Func Offset: 0xcc
	// Line 6515, Address: 0x111a98, Func Offset: 0xd8
	// Line 6516, Address: 0x111aa4, Func Offset: 0xe4
	// Line 6517, Address: 0x111ab0, Func Offset: 0xf0
	// Line 6518, Address: 0x111abc, Func Offset: 0xfc
	// Line 6519, Address: 0x111ac8, Func Offset: 0x108
	// Line 6520, Address: 0x111ad4, Func Offset: 0x114
	// Line 6521, Address: 0x111ae0, Func Offset: 0x120
	// Line 6523, Address: 0x111aec, Func Offset: 0x12c
	// Line 6524, Address: 0x111b00, Func Offset: 0x140
	// Line 6526, Address: 0x111b14, Func Offset: 0x154
	// Func End, Address: 0x111b24, Func Offset: 0x164
}

// 
// Start address: 0x111b30
int PlayerGetJamesWeapon()
{
	// Line 6534, Address: 0x111b30, Func Offset: 0
	// Line 6535, Address: 0x111b3c, Func Offset: 0xc
	// Func End, Address: 0x111b44, Func Offset: 0x14
}

// 
// Start address: 0x111b50
void PlayerInitOnConnect()
{
	// Line 6544, Address: 0x111b50, Func Offset: 0
	// Line 6546, Address: 0x111b58, Func Offset: 0x8
	// Line 6547, Address: 0x111b70, Func Offset: 0x20
	// Line 6549, Address: 0x111b88, Func Offset: 0x38
	// Line 6550, Address: 0x111ba0, Func Offset: 0x50
	// Line 6552, Address: 0x111bb8, Func Offset: 0x68
	// Line 6553, Address: 0x111bd0, Func Offset: 0x80
	// Line 6554, Address: 0x111be4, Func Offset: 0x94
	// Line 6557, Address: 0x111bf8, Func Offset: 0xa8
	// Line 6558, Address: 0x111c14, Func Offset: 0xc4
	// Line 6559, Address: 0x111c40, Func Offset: 0xf0
	// Line 6560, Address: 0x111c5c, Func Offset: 0x10c
	// Line 6561, Address: 0x111c8c, Func Offset: 0x13c
	// Line 6564, Address: 0x111ca4, Func Offset: 0x154
	// Line 6565, Address: 0x111cb0, Func Offset: 0x160
	// Line 6567, Address: 0x111cbc, Func Offset: 0x16c
	// Line 6568, Address: 0x111ccc, Func Offset: 0x17c
	// Func End, Address: 0x111cdc, Func Offset: 0x18c
}

// 
// Start address: 0x111ce0
void close_to_angle_target(float* now, float tgt, float min, float max, float spd)
{
	float tgt_tmp;
	float mov_angle;
	float rot_tmp;
	// Line 6595, Address: 0x111ce0, Func Offset: 0
	// Line 6597, Address: 0x111d00, Func Offset: 0x20
	// Line 6599, Address: 0x111d08, Func Offset: 0x28
	// Line 6600, Address: 0x111d28, Func Offset: 0x48
	// Line 6602, Address: 0x111d48, Func Offset: 0x68
	// Line 6603, Address: 0x111d64, Func Offset: 0x84
	// Line 6605, Address: 0x111dd0, Func Offset: 0xf0
	// Line 6606, Address: 0x111dec, Func Offset: 0x10c
	// Line 6607, Address: 0x111e10, Func Offset: 0x130
	// Line 6609, Address: 0x111e24, Func Offset: 0x144
	// Line 6610, Address: 0x111e3c, Func Offset: 0x15c
	// Line 6611, Address: 0x111e44, Func Offset: 0x164
	// Line 6612, Address: 0x111e68, Func Offset: 0x188
	// Line 6614, Address: 0x111e7c, Func Offset: 0x19c
	// Line 6616, Address: 0x111e94, Func Offset: 0x1b4
	// Line 6618, Address: 0x111eac, Func Offset: 0x1cc
	// Func End, Address: 0x111ec0, Func Offset: 0x1e0
}

// 
// Start address: 0x111ec0
void close_to_value(float* now, float tgt, float mov)
{
	// Line 6630, Address: 0x111ec0, Func Offset: 0
	// Line 6631, Address: 0x111ed0, Func Offset: 0x10
	// Line 6632, Address: 0x111eec, Func Offset: 0x2c
	// Line 6633, Address: 0x111f08, Func Offset: 0x48
	// Line 6634, Address: 0x111f20, Func Offset: 0x60
	// Line 6635, Address: 0x111f3c, Func Offset: 0x7c
	// Line 6636, Address: 0x111f48, Func Offset: 0x88
	// Line 6637, Address: 0x111f50, Func Offset: 0x90
	// Line 6638, Address: 0x111f68, Func Offset: 0xa8
	// Line 6639, Address: 0x111f84, Func Offset: 0xc4
	// Line 6642, Address: 0x111f90, Func Offset: 0xd0
	// Func End, Address: 0x111f9c, Func Offset: 0xdc
}

