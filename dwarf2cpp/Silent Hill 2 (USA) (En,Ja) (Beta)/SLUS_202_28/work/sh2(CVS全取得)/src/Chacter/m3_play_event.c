typedef struct _CL_HITPOLY_COLUMN;
typedef struct SubCharacter;
typedef struct MariaAppearPoint;
typedef struct _AnimeInfo;
typedef struct shSkelton;
typedef struct shPlayerWork;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct shBattleInfo;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct PAD_3D;
typedef enum _MARIA_MAIN_STATUS : unsigned char;
typedef struct _anon0;
typedef struct Playing_Info;
typedef union _anon1;
typedef struct _CL_VHIT_RESULT;
typedef union _anon2;
typedef struct PAD_2D;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct PAD_INFO;
typedef struct _anon3;
typedef enum _MARIA_SUB_STATUS : unsigned char;
typedef struct shMariaWork;

typedef void(*type_6)(SubCharacter*);
typedef void(*type_8)(SubCharacter*);
typedef void(*type_20)(float*);
typedef void(*type_32)(float*);

typedef _AnimeInfo type_0[24];
typedef float type_1[7];
typedef unsigned int type_2[7];
typedef unsigned char type_3[4];
typedef float type_4[4][2];
typedef unsigned char type_5[4];
typedef unsigned char type_7[69];
typedef _AnimeInfo type_9[5];
typedef unsigned char type_10[4];
typedef unsigned char type_11[4];
typedef unsigned char type_12[4];
typedef unsigned char type_13[2];
typedef float type_14[4];
typedef unsigned char type_15[2];
typedef _AnimeInfo type_16[33];
typedef MariaAppearPoint type_17[91];
typedef unsigned int type_18[32];
typedef float type_19[7];
typedef float type_21[7];
typedef unsigned char type_22[14];
typedef _AnimeInfo type_23[11];
typedef _AnimeInfo type_24[30];
typedef float type_25[7];
typedef int type_26[30];
typedef unsigned int type_27[9];
typedef unsigned char type_28[97];
typedef float type_29[4];
typedef _AnimeInfo type_30[17];
typedef unsigned int type_31[9];
typedef _AnimeInfo type_33[34];
typedef void(*type_34)(float*)[3];
typedef unsigned char type_35[2];
typedef _AnimeInfo type_36[17];
typedef unsigned char type_37[20];
typedef _AnimeInfo type_38[17];
typedef float type_39[7];
typedef _AnimeInfo type_40[33];
typedef float type_41[4];
typedef float type_42[4][4];
typedef float type_43[7];
typedef unsigned int type_44[32];
typedef PAD_INFO type_45[10];
typedef shAttackInfo type_46[66];
typedef unsigned char type_47[14];
typedef float type_48[4][5];
typedef float type_49[2];

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
	_anon0 pos;
	_anon0 rot;
	_anon0 pos_spd;
	_anon0 rot_spd;
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
	_anon0 b_pos;
	_anon0 b_rot;
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
};

struct MariaAppearPoint
{
	short room_name_prev;
	short room_name_now;
	int active_type;
	float pos[4];
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon3 src_m;
	_anon0 src_t;
	_anon3 des_m;
	_anon0 des_t;
	_anon0 axis;
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

struct shPlayerWork
{
	SubCharacter* player;
	_anon0 dist_rot;
	_anon0 dist_pos;
	_anon0 pos;
	_anon0 rot;
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
	_anon0 tgt_body_angle;
	_anon0 tgt_neck_angle;
	_anon0 tgt_arms_angle;
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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon1 hit_check;
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

enum _MARIA_MAIN_STATUS : unsigned char
{
	MAR_MAIN_ST_STAND,
	MAR_MAIN_ST_CLOSE_TO,
	MAR_MAIN_ST_ALERT,
	MAR_MAIN_ST_DISCOVER,
	MAR_MAIN_ST_RECOVER,
	MAR_MAIN_ST_BOREDOM,
	MAR_MAIN_ST_DAMAGED
};

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
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

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon2 hobj;
};

union _anon2
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
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

struct _anon3
{
	float d[4][4];
};

enum _MARIA_SUB_STATUS : unsigned char
{
	MAR_SUB_ST_STAND,
	MAR_SUB_ST_RELAX,
	MAR_SUB_ST_RELAX_OFF,
	MAR_SUB_ST_AFRAID,
	MAR_SUB_ST_TIRED,
	MAR_SUB_ST_ONESTEP,
	MAR_SUB_ST_WALK,
	MAR_SUB_ST_RUN,
	MAR_SUB_ST_DAMAGE
};

struct shMariaWork
{
	SubCharacter* mar_p;
	_anon0 dist_rot;
	_anon0 dist_pos;
	_anon0 pos;
	_anon0 rot;
	float to_target;
	float tgt_pos[4][5];
	int tgt_pointer;
	int pushed_dir;
	_MARIA_MAIN_STATUS main_status_now;
	_MARIA_MAIN_STATUS main_status_prev;
	_MARIA_SUB_STATUS sub_status_now;
	_MARIA_SUB_STATUS sub_status_prev;
	unsigned int sub_st_flg;
	unsigned int anime_st_flg;
	unsigned int anime_pause;
	_CL_VHIT_RESULT r_forward;
	_CL_VHIT_RESULT l_forward;
	_CL_VHIT_RESULT forward;
	_CL_VHIT_RESULT ft_floor;
	_CL_VHIT_RESULT r_foot;
	_CL_VHIT_RESULT l_foot;
	_CL_HITPOLY_COLUMN column_mov;
	_CL_HITPOLY_COLUMN column_atk;
	float col_mov_z_hosei;
	float col_atk_z_hosei;
	unsigned char se_upper[4];
	unsigned char se_foot[4];
	_anon0 tgt_neck_angle;
	SubCharacter* look_tgt;
	SubCharacter* look_obj;
	float dist_to_jms;
	float hp_recover;
	float stand_time;
	float move_time;
	float muteki_time;
	float relax_time;
	float afraid_time;
	float hp;
	float hp_max;
	int tired;
	int tired_max;
	unsigned char relax_flag;
	unsigned char no_damage;
	unsigned char dead;
	unsigned short damage_no;
	unsigned char enemy_around;
	unsigned char enemy_atk_area;
	unsigned char look_jms;
	unsigned char random_status;
	unsigned char active_type;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
MariaAppearPoint maria_apeear_point_list[91];
unsigned int pmaria_sub_status_flag[9];
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
shPlayerWork sh2jms;
shMariaWork sh2mar;
Playing_Info playing;
void(*func_list_event)(float*)[3];
int pjames_anime_adr_list[30];

int PlayerNowDemoEventMode();
int PlayerEventButtonCheck(int button);
int PlayerEventDeadAnimeFinish();
int PlayerEventJamesDeadly();
int PlayerEventMariaDeadly();
int PlayerEventAnimeSuccessFrame();
void PlayerEventAnimeSet(int anime);
void PlayerEventAnimeSetDirect(int anime);
void event_jms_stand();
void event_jms_walk(float* target);
void event_jms_run(float* target);
float PlayerEventMove(float* target);
int PlayerEventMoveIsEnd();
int PlayerEventMoveCancel();
int shCharacterHumanPJAMESAnimeSet(SubCharacter* scp, int anime_id);
void JamesWeaponSet(int wep);
int PlayerGetJamesWeapon();

// 
// Start address: 0x283740
int PlayerNowDemoEventMode()
{
	// Line 41, Address: 0x283740, Func Offset: 0
	// Line 42, Address: 0x283758, Func Offset: 0x18
	// Func End, Address: 0x283760, Func Offset: 0x20
}

// 
// Start address: 0x283760
int PlayerEventButtonCheck(int button)
{
	int pad;
	// Line 81, Address: 0x283760, Func Offset: 0
	// Line 96, Address: 0x283794, Func Offset: 0x34
	// Line 98, Address: 0x28379c, Func Offset: 0x3c
	// Line 100, Address: 0x2837a4, Func Offset: 0x44
	// Line 101, Address: 0x2837ac, Func Offset: 0x4c
	// Line 103, Address: 0x2837b4, Func Offset: 0x54
	// Line 104, Address: 0x2837c4, Func Offset: 0x64
	// Line 106, Address: 0x2837cc, Func Offset: 0x6c
	// Line 107, Address: 0x2837d4, Func Offset: 0x74
	// Line 109, Address: 0x2837dc, Func Offset: 0x7c
	// Line 113, Address: 0x2837e8, Func Offset: 0x88
	// Line 114, Address: 0x2837f0, Func Offset: 0x90
	// Line 115, Address: 0x283804, Func Offset: 0xa4
	// Line 118, Address: 0x283810, Func Offset: 0xb0
	// Line 119, Address: 0x283814, Func Offset: 0xb4
	// Func End, Address: 0x28381c, Func Offset: 0xbc
}

// 
// Start address: 0x283820
int PlayerEventDeadAnimeFinish()
{
	// Line 134, Address: 0x283820, Func Offset: 0
	// Line 137, Address: 0x283830, Func Offset: 0x10
	// Func End, Address: 0x283838, Func Offset: 0x18
}

// 
// Start address: 0x283840
int PlayerEventJamesDeadly()
{
	// Line 148, Address: 0x283840, Func Offset: 0
	// Line 149, Address: 0x283850, Func Offset: 0x10
	// Line 150, Address: 0x283860, Func Offset: 0x20
	// Line 152, Address: 0x28386c, Func Offset: 0x2c
	// Line 153, Address: 0x283870, Func Offset: 0x30
	// Func End, Address: 0x283878, Func Offset: 0x38
}

// 
// Start address: 0x283880
int PlayerEventMariaDeadly()
{
	// Line 163, Address: 0x283880, Func Offset: 0
	// Line 164, Address: 0x283890, Func Offset: 0x10
	// Line 165, Address: 0x2838a0, Func Offset: 0x20
	// Line 167, Address: 0x2838ac, Func Offset: 0x2c
	// Line 168, Address: 0x2838b0, Func Offset: 0x30
	// Func End, Address: 0x2838b8, Func Offset: 0x38
}

// 
// Start address: 0x2838c0
int PlayerEventAnimeSuccessFrame()
{
	short frame;
	_AnimeInfo* a_info;
	// Line 181, Address: 0x2838c0, Func Offset: 0
	// Line 182, Address: 0x2838cc, Func Offset: 0xc
	// Line 183, Address: 0x2838e4, Func Offset: 0x24
	// Line 185, Address: 0x283900, Func Offset: 0x40
	// Line 186, Address: 0x28390c, Func Offset: 0x4c
	// Line 187, Address: 0x283920, Func Offset: 0x60
	// Line 189, Address: 0x28392c, Func Offset: 0x6c
	// Line 190, Address: 0x283930, Func Offset: 0x70
	// Func End, Address: 0x283944, Func Offset: 0x84
}

// 
// Start address: 0x283950
void PlayerEventAnimeSet(int anime)
{
	// Line 198, Address: 0x283950, Func Offset: 0
	// Line 199, Address: 0x283960, Func Offset: 0x10
	// Line 200, Address: 0x283974, Func Offset: 0x24
	// Line 201, Address: 0x283988, Func Offset: 0x38
	// Line 202, Address: 0x28399c, Func Offset: 0x4c
	// Line 203, Address: 0x2839a4, Func Offset: 0x54
	// Func End, Address: 0x2839b8, Func Offset: 0x68
}

// 
// Start address: 0x2839c0
void PlayerEventAnimeSetDirect(int anime)
{
	// Line 205, Address: 0x2839c0, Func Offset: 0
	// Line 206, Address: 0x2839d0, Func Offset: 0x10
	// Line 207, Address: 0x2839e4, Func Offset: 0x24
	// Line 208, Address: 0x2839f8, Func Offset: 0x38
	// Line 209, Address: 0x283a0c, Func Offset: 0x4c
	// Line 210, Address: 0x283a14, Func Offset: 0x54
	// Line 211, Address: 0x283a2c, Func Offset: 0x6c
	// Func End, Address: 0x283a40, Func Offset: 0x80
}

// 
// Start address: 0x283a40
void event_jms_stand()
{
	// Line 220, Address: 0x283a40, Func Offset: 0
	// Line 222, Address: 0x283a48, Func Offset: 0x8
	// Line 223, Address: 0x283a58, Func Offset: 0x18
	// Func End, Address: 0x283a68, Func Offset: 0x28
}

// 
// Start address: 0x283a70
void event_jms_walk(float* target)
{
	float to_target;
	SubCharacter* p;
	// Line 226, Address: 0x283a70, Func Offset: 0
	// Line 229, Address: 0x283a88, Func Offset: 0x18
	// Line 234, Address: 0x283a90, Func Offset: 0x20
	// Line 236, Address: 0x283ab0, Func Offset: 0x40
	// Line 237, Address: 0x283ad4, Func Offset: 0x64
	// Line 238, Address: 0x283b00, Func Offset: 0x90
	// Line 240, Address: 0x283b08, Func Offset: 0x98
	// Line 241, Address: 0x283b2c, Func Offset: 0xbc
	// Line 243, Address: 0x283b50, Func Offset: 0xe0
	// Line 246, Address: 0x283b58, Func Offset: 0xe8
	// Line 250, Address: 0x283b7c, Func Offset: 0x10c
	// Line 259, Address: 0x283bac, Func Offset: 0x13c
	// Line 261, Address: 0x283bd0, Func Offset: 0x160
	// Line 262, Address: 0x283bd4, Func Offset: 0x164
	// Line 264, Address: 0x283bdc, Func Offset: 0x16c
	// Line 268, Address: 0x283be0, Func Offset: 0x170
	// Func End, Address: 0x283bfc, Func Offset: 0x18c
}

// 
// Start address: 0x283c00
void event_jms_run(float* target)
{
	float to_target;
	SubCharacter* p;
	// Line 271, Address: 0x283c00, Func Offset: 0
	// Line 274, Address: 0x283c18, Func Offset: 0x18
	// Line 279, Address: 0x283c20, Func Offset: 0x20
	// Line 280, Address: 0x283c44, Func Offset: 0x44
	// Line 281, Address: 0x283c68, Func Offset: 0x68
	// Line 284, Address: 0x283c6c, Func Offset: 0x6c
	// Line 287, Address: 0x283c90, Func Offset: 0x90
	// Line 296, Address: 0x283cc0, Func Offset: 0xc0
	// Line 298, Address: 0x283ce4, Func Offset: 0xe4
	// Line 299, Address: 0x283ce8, Func Offset: 0xe8
	// Line 301, Address: 0x283cf0, Func Offset: 0xf0
	// Line 304, Address: 0x283cf4, Func Offset: 0xf4
	// Func End, Address: 0x283d10, Func Offset: 0x110
}

// 
// Start address: 0x283d10
float PlayerEventMove(float* target)
{
	void(*event_jms_func)(float*);
	float distance;
	// Line 325, Address: 0x283d10, Func Offset: 0
	// Line 336, Address: 0x283d20, Func Offset: 0x10
	// Line 337, Address: 0x283d2c, Func Offset: 0x1c
	// Line 342, Address: 0x283d60, Func Offset: 0x50
	// Line 343, Address: 0x283d70, Func Offset: 0x60
	// Line 344, Address: 0x283d98, Func Offset: 0x88
	// Line 345, Address: 0x283da4, Func Offset: 0x94
	// Line 346, Address: 0x283dac, Func Offset: 0x9c
	// Line 348, Address: 0x283db4, Func Offset: 0xa4
	// Line 349, Address: 0x283dbc, Func Offset: 0xac
	// Line 350, Address: 0x283dec, Func Offset: 0xdc
	// Line 351, Address: 0x283e00, Func Offset: 0xf0
	// Line 352, Address: 0x283e08, Func Offset: 0xf8
	// Line 354, Address: 0x283e10, Func Offset: 0x100
	// Line 356, Address: 0x283e18, Func Offset: 0x108
	// Line 357, Address: 0x283e28, Func Offset: 0x118
	// Line 358, Address: 0x283e30, Func Offset: 0x120
	// Line 362, Address: 0x283e38, Func Offset: 0x128
	// Line 363, Address: 0x283e50, Func Offset: 0x140
	// Line 364, Address: 0x283e64, Func Offset: 0x154
	// Line 365, Address: 0x283e78, Func Offset: 0x168
	// Line 371, Address: 0x283e88, Func Offset: 0x178
	// Line 372, Address: 0x283ea4, Func Offset: 0x194
	// Line 375, Address: 0x283eb0, Func Offset: 0x1a0
	// Line 376, Address: 0x283eb8, Func Offset: 0x1a8
	// Func End, Address: 0x283ecc, Func Offset: 0x1bc
}

// 
// Start address: 0x283ed0
int PlayerEventMoveIsEnd()
{
	// Line 390, Address: 0x283ed0, Func Offset: 0
	// Line 391, Address: 0x283ed8, Func Offset: 0x8
	// Line 394, Address: 0x283f20, Func Offset: 0x50
	// Line 395, Address: 0x283f28, Func Offset: 0x58
	// Line 398, Address: 0x283f34, Func Offset: 0x64
	// Line 399, Address: 0x283f38, Func Offset: 0x68
	// Func End, Address: 0x283f48, Func Offset: 0x78
}

// 
// Start address: 0x283f50
int PlayerEventMoveCancel()
{
	// Line 409, Address: 0x283f50, Func Offset: 0
	// Line 410, Address: 0x283f58, Func Offset: 0x8
	// Line 411, Address: 0x283f64, Func Offset: 0x14
	// Line 413, Address: 0x283f6c, Func Offset: 0x1c
	// Line 414, Address: 0x283f74, Func Offset: 0x24
	// Line 415, Address: 0x283f78, Func Offset: 0x28
	// Func End, Address: 0x283f80, Func Offset: 0x30
}

// 
// Start address: 0x283f80
int shCharacterHumanPJAMESAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	short id;
	// Line 464, Address: 0x283f80, Func Offset: 0
	// Line 468, Address: 0x283f9c, Func Offset: 0x1c
	// Line 470, Address: 0x283fac, Func Offset: 0x2c
	// Line 473, Address: 0x283fc4, Func Offset: 0x44
	// Line 474, Address: 0x283fe0, Func Offset: 0x60
	// Line 482, Address: 0x28401c, Func Offset: 0x9c
	// Line 484, Address: 0x284028, Func Offset: 0xa8
	// Line 486, Address: 0x28402c, Func Offset: 0xac
	// Func End, Address: 0x284048, Func Offset: 0xc8
}

// 
// Start address: 0x284050
void JamesWeaponSet(int wep)
{
	// Line 497, Address: 0x284050, Func Offset: 0
	// Line 499, Address: 0x284058, Func Offset: 0x8
	// Line 501, Address: 0x284060, Func Offset: 0x10
	// Line 505, Address: 0x284088, Func Offset: 0x38
	// Line 506, Address: 0x284090, Func Offset: 0x40
	// Line 509, Address: 0x284098, Func Offset: 0x48
	// Line 510, Address: 0x2840a4, Func Offset: 0x54
	// Line 513, Address: 0x2840ac, Func Offset: 0x5c
	// Line 514, Address: 0x2840b8, Func Offset: 0x68
	// Line 516, Address: 0x2840c0, Func Offset: 0x70
	// Line 517, Address: 0x2840cc, Func Offset: 0x7c
	// Line 519, Address: 0x2840d4, Func Offset: 0x84
	// Line 524, Address: 0x2840e0, Func Offset: 0x90
	// Line 525, Address: 0x2840ec, Func Offset: 0x9c
	// Line 528, Address: 0x284100, Func Offset: 0xb0
	// Line 530, Address: 0x284110, Func Offset: 0xc0
	// Func End, Address: 0x284120, Func Offset: 0xd0
}

// 
// Start address: 0x284120
int PlayerGetJamesWeapon()
{
	// Line 538, Address: 0x284120, Func Offset: 0
	// Line 539, Address: 0x284128, Func Offset: 0x8
	// Func End, Address: 0x284130, Func Offset: 0x10
}

