typedef struct _Character_Info;
typedef struct SubCharacter;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct _anon0;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shBattleArea;
typedef struct SAVE_DATA;
typedef struct shBattleInfo;
typedef enum _MARIA_MAIN_STATUS : unsigned char;
typedef struct SAVE_DATA_ALL;
typedef struct Pad_KeyConfig;
typedef struct _anon1;
typedef struct PAD_3D;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct PAD_2D;
typedef struct _CL_VHIT_CHARA;
typedef struct Item;
typedef enum _MARIA_SUB_STATUS : unsigned char;
typedef struct shMariaWork;
typedef union _anon2;
typedef struct PAD_INFO;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;
typedef struct Playing_Info;
typedef struct _anon4;
typedef struct shSkelton;
typedef struct MariaAppearPoint;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct shPlayerWork;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _CI_SubCharacter;

typedef void(*type_31)(SubCharacter*);
typedef void(*type_33)(SubCharacter*);

typedef unsigned int type_0[9];
typedef _CI_SubCharacter type_1[32];
typedef unsigned char type_2[2];
typedef float type_3[4];
typedef char type_4[1456];
typedef float type_5[4];
typedef float type_6[4][4];
typedef unsigned int type_7[2];
typedef unsigned short type_8[11];
typedef float type_9[4];
typedef PAD_INFO type_10[10];
typedef int type_11[6];
typedef float type_12[4][5];
typedef unsigned short type_13[3];
typedef float type_14[2];
typedef unsigned int type_15[255];
typedef unsigned char type_16[4];
typedef unsigned char type_17[4];
typedef shAttackInfo type_18[66];
typedef unsigned int type_19[32];
typedef unsigned char type_20[4];
typedef char type_21[4];
typedef unsigned char type_22[4];
typedef char type_23[4];
typedef unsigned char type_24[4];
typedef char type_25[4];
typedef char type_26[4];
typedef unsigned char type_27[2];
typedef char type_28[4];
typedef float type_29[4][2];
typedef unsigned char type_30[2];
typedef MariaAppearPoint type_32[91];
typedef float type_34[7];
typedef unsigned int type_35[7];
typedef unsigned char type_36[4];

struct _Character_Info
{
	float spray_time;
	float running_time;
	int tired;
	int tired_max;
	int spirit;
	int weapon;
	unsigned char spray_set;
	_CI_SubCharacter ci_sc[32];
	char total;
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
	_anon1 mat;
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

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
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

struct shBattleArea
{
	float center;
	float radius;
};

struct SAVE_DATA
{
	unsigned int version;
	unsigned short scene;
	float jms_pos[4];
	Playing_Info playing;
	_anon4 game_flag;
	Item item;
	_Character_Info chara;
	Pad_KeyConfig key_config;
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

struct SAVE_DATA_ALL
{
	SAVE_DATA d;
	char pad[1456];
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

struct _anon1
{
	float d[4][4];
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
	_anon2 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
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

struct _CL_VHIT_RESULT
{
	int kind;
	_anon3 hobj;
};

union _anon3
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct _anon4
{
	unsigned int flag[255];
	float time_deai;
	unsigned int enemy[32];
	unsigned char safe[4];
	char rotate[4];
	char guruguru[4];
	char cylinder[4];
	unsigned short clock;
	unsigned short carbon;
	char runaway[4];
	unsigned short hanging;
	short pad;
	char trunk[4];
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon1 src_m;
	_anon0 src_t;
	_anon1 des_m;
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

struct MariaAppearPoint
{
	short room_name_prev;
	short room_name_now;
	int active_type;
	float pos[4];
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

struct _CI_SubCharacter
{
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	_anon0 pos;
	_anon0 rot;
	_anon0 pos_spd;
	_anon0 rot_spd;
	_anon0 b_pos;
	_anon0 b_rot;
	int en_first_status;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float battle_hp;
	float battle_hp_max;
	float battle_hp_rate;
	unsigned int battle_status;
};

shAttackInfo sh2_attack_list[66];
MariaAppearPoint maria_apeear_point_list[91];
unsigned int pmaria_sub_status_flag[9];
SAVE_DATA_ALL SaveDataAll;
Pad_KeyConfig key_config;
Item item;
_anon4 game_flag;
Playing_Info playing;
shPlayerWork sh2jms;
float connect_pos[4];
shMariaWork sh2mar;

void SetSavePointName(unsigned short msg_no);
void SetSaveData();
void ExtGameData();
int CheckSaveData();
void SetGameEnvironment();

// 
// Start address: 0x2479d0
void SetSavePointName(unsigned short msg_no)
{
	// Line 25, Address: 0x2479d0, Func Offset: 0
	// Line 26, Address: 0x2479d8, Func Offset: 0x8
	// Func End, Address: 0x2479e0, Func Offset: 0x10
}

// 
// Start address: 0x2479e0
void SetSaveData()
{
	unsigned short scene;
	// Line 30, Address: 0x2479e0, Func Offset: 0
	// Line 31, Address: 0x2479ec, Func Offset: 0xc
	// Line 32, Address: 0x2479f4, Func Offset: 0x14
	// Line 33, Address: 0x247a08, Func Offset: 0x28
	// Line 34, Address: 0x247a14, Func Offset: 0x34
	// Line 35, Address: 0x247a1c, Func Offset: 0x3c
	// Line 36, Address: 0x247a34, Func Offset: 0x54
	// Line 37, Address: 0x247a48, Func Offset: 0x68
	// Line 38, Address: 0x247a64, Func Offset: 0x84
	// Line 39, Address: 0x247a80, Func Offset: 0xa0
	// Line 40, Address: 0x247a9c, Func Offset: 0xbc
	// Line 41, Address: 0x247ab8, Func Offset: 0xd8
	// Line 42, Address: 0x247ac8, Func Offset: 0xe8
	// Func End, Address: 0x247adc, Func Offset: 0xfc
}

// 
// Start address: 0x247ae0
void ExtGameData()
{
	// Line 46, Address: 0x247ae0, Func Offset: 0
	// Line 47, Address: 0x247ae8, Func Offset: 0x8
	// Line 48, Address: 0x247b00, Func Offset: 0x20
	// Line 49, Address: 0x247b1c, Func Offset: 0x3c
	// Line 50, Address: 0x247b38, Func Offset: 0x58
	// Line 52, Address: 0x247b54, Func Offset: 0x74
	// Line 54, Address: 0x247b68, Func Offset: 0x88
	// Line 55, Address: 0x247b84, Func Offset: 0xa4
	// Line 56, Address: 0x247b94, Func Offset: 0xb4
	// Line 57, Address: 0x247b9c, Func Offset: 0xbc
	// Func End, Address: 0x247bac, Func Offset: 0xcc
}

// 
// Start address: 0x247bb0
int CheckSaveData()
{
	unsigned short* in;
	Playing_Info* pi;
	// Line 62, Address: 0x247bb0, Func Offset: 0
	// Line 63, Address: 0x247bb8, Func Offset: 0x8
	// Line 64, Address: 0x247bc0, Func Offset: 0x10
	// Line 66, Address: 0x247bc8, Func Offset: 0x18
	// Line 68, Address: 0x247bdc, Func Offset: 0x2c
	// Line 72, Address: 0x247be8, Func Offset: 0x38
	// Line 75, Address: 0x247bf8, Func Offset: 0x48
	// Line 79, Address: 0x247c04, Func Offset: 0x54
	// Line 81, Address: 0x247c14, Func Offset: 0x64
	// Line 83, Address: 0x247c24, Func Offset: 0x74
	// Line 86, Address: 0x247c30, Func Offset: 0x80
	// Line 92, Address: 0x247d18, Func Offset: 0x168
	// Line 94, Address: 0x247d28, Func Offset: 0x178
	// Line 97, Address: 0x247d34, Func Offset: 0x184
	// Line 99, Address: 0x247d54, Func Offset: 0x1a4
	// Line 101, Address: 0x247d64, Func Offset: 0x1b4
	// Line 104, Address: 0x247d70, Func Offset: 0x1c0
	// Line 111, Address: 0x247e40, Func Offset: 0x290
	// Line 113, Address: 0x247e50, Func Offset: 0x2a0
	// Line 117, Address: 0x247e5c, Func Offset: 0x2ac
	// Line 129, Address: 0x247f08, Func Offset: 0x358
	// Line 131, Address: 0x247f18, Func Offset: 0x368
	// Line 134, Address: 0x247f24, Func Offset: 0x374
	// Line 135, Address: 0x247f28, Func Offset: 0x378
	// Func End, Address: 0x247f38, Func Offset: 0x388
}

// 
// Start address: 0x247f40
void SetGameEnvironment()
{
	// Line 152, Address: 0x247f40, Func Offset: 0
	// Line 154, Address: 0x247f48, Func Offset: 0x8
	// Line 156, Address: 0x247f6c, Func Offset: 0x2c
	// Line 157, Address: 0x247f84, Func Offset: 0x44
	// Line 158, Address: 0x247f9c, Func Offset: 0x5c
	// Line 160, Address: 0x247fa4, Func Offset: 0x64
	// Line 161, Address: 0x247fbc, Func Offset: 0x7c
	// Line 162, Address: 0x247fd4, Func Offset: 0x94
	// Line 164, Address: 0x247fdc, Func Offset: 0x9c
	// Line 165, Address: 0x247ff4, Func Offset: 0xb4
	// Line 169, Address: 0x24800c, Func Offset: 0xcc
	// Line 171, Address: 0x248014, Func Offset: 0xd4
	// Line 174, Address: 0x248024, Func Offset: 0xe4
	// Line 175, Address: 0x24802c, Func Offset: 0xec
	// Line 177, Address: 0x248074, Func Offset: 0x134
	// Func End, Address: 0x248084, Func Offset: 0x144
}

