typedef struct Model_List;
typedef struct shSkelton;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct SubCharacter;
typedef struct _anon0;
typedef struct Enemy_List;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon1;
typedef struct Playing_Info;
typedef struct PAD_3D;
typedef struct _AnimeInfo;
typedef struct Stage_Data;
typedef struct Event_List;
typedef struct PAD_2D;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct Item_List;
typedef struct PAD_INFO;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct Item;
typedef struct _CL_VHIT_WALL;
typedef struct shPlayerWork;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon2;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;
typedef struct _anon4;

typedef void(*type_4)();
typedef void(*type_7)(SubCharacter*);
typedef void(*type_9)(SubCharacter*);
typedef int(*type_15)();

typedef unsigned char type_0[20];
typedef shAttackInfo type_1[66];
typedef float type_2[4];
typedef float type_3[4][4];
typedef float type_5[4][2];
typedef unsigned char type_6[2];
typedef unsigned char type_8[14];
typedef unsigned char type_10[4];
typedef int type_11[4];
typedef int type_12[4][11];
typedef float type_13[4];
typedef unsigned char type_14[69];
typedef float type_16[7];
typedef unsigned int type_17[7];
typedef PAD_INFO type_18[10];
typedef float type_19[2];
typedef float type_20[4];
typedef unsigned char type_21[14];
typedef unsigned char type_22[4];
typedef unsigned char type_23[4];
typedef unsigned int type_24[2];
typedef unsigned short type_25[11];
typedef unsigned char type_26[97];
typedef unsigned char type_27[2];
typedef unsigned char type_28[2];
typedef unsigned short type_29[3];

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
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
};

struct _anon0
{
	float d[4][4];
};

struct Enemy_List
{
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	unsigned short condition;
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

struct _anon1
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
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

struct Stage_Data
{
	Event_List* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	Item_List* gi_list;
	Model_List* mdl_list;
	Enemy_List* en_list;
	void(*stage_init)();
	void(*room_init)();
	void(*alltime_func)();
	int glb_crd;
	int pc_model;
	_AnimeInfo* stg_anim_info;
	int(*bgm_control)();
	_anon1* gfw_func;
	int(*chara_data_clear)();
	void(*sound_call_after_load)();
	int reserve_11;
};

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
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

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
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

struct _anon4
{
	float x;
	float y;
	float z;
	float w;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
Item item;
Playing_Info playing;
shPlayerWork sh2jms;
Stage_Data* stage;

void ItemDataInit();
void ItemGet(int kind);
int ItemUse(int kind);
int ItemWeaponShoot(int kind, int use);
int ItemWeaponReload(int kind, int use);
int ItemMedicineUse(int kind);
float ItemAmpolueEfficacy();
int ItemEventCheck(int kind_0, int kind_1, int kind_2);
int ItemCombinationUseCheck(int kind_0, int kind_1, int kind_2);
void ItemPutForShelf();

// 
// Start address: 0x1ad860
void ItemDataInit()
{
	// Line 42, Address: 0x1ad860, Func Offset: 0
	// Line 44, Address: 0x1ad868, Func Offset: 0x8
	// Line 47, Address: 0x1ad87c, Func Offset: 0x1c
	// Line 48, Address: 0x1ad888, Func Offset: 0x28
	// Line 50, Address: 0x1ad894, Func Offset: 0x34
	// Line 51, Address: 0x1ad8a0, Func Offset: 0x40
	// Line 52, Address: 0x1ad8a8, Func Offset: 0x48
	// Line 53, Address: 0x1ad8b4, Func Offset: 0x54
	// Func End, Address: 0x1ad8c4, Func Offset: 0x64
}

// 
// Start address: 0x1ad8d0
void ItemGet(int kind)
{
	int work;
	// Line 61, Address: 0x1ad8d0, Func Offset: 0
	// Line 65, Address: 0x1ad8e0, Func Offset: 0x10
	// Line 68, Address: 0x1ad90c, Func Offset: 0x3c
	// Line 69, Address: 0x1ad924, Func Offset: 0x54
	// Line 72, Address: 0x1ad92c, Func Offset: 0x5c
	// Line 74, Address: 0x1ad954, Func Offset: 0x84
	// Line 76, Address: 0x1ad960, Func Offset: 0x90
	// Line 78, Address: 0x1ad96c, Func Offset: 0x9c
	// Line 79, Address: 0x1ad978, Func Offset: 0xa8
	// Line 82, Address: 0x1ad984, Func Offset: 0xb4
	// Line 83, Address: 0x1ad990, Func Offset: 0xc0
	// Line 87, Address: 0x1ad998, Func Offset: 0xc8
	// Line 91, Address: 0x1ad9c4, Func Offset: 0xf4
	// Line 96, Address: 0x1ad9d0, Func Offset: 0x100
	// Line 98, Address: 0x1ada04, Func Offset: 0x134
	// Func End, Address: 0x1ada18, Func Offset: 0x148
}

// 
// Start address: 0x1ada20
int ItemUse(int kind)
{
	// Line 109, Address: 0x1ada20, Func Offset: 0
	// Line 110, Address: 0x1ada48, Func Offset: 0x28
	// Line 111, Address: 0x1ada50, Func Offset: 0x30
	// Line 114, Address: 0x1ada68, Func Offset: 0x48
	// Line 115, Address: 0x1ada74, Func Offset: 0x54
	// Line 116, Address: 0x1adaa4, Func Offset: 0x84
	// Line 117, Address: 0x1adad4, Func Offset: 0xb4
	// Line 118, Address: 0x1adadc, Func Offset: 0xbc
	// Line 120, Address: 0x1adb08, Func Offset: 0xe8
	// Line 121, Address: 0x1adb20, Func Offset: 0x100
	// Line 122, Address: 0x1adb38, Func Offset: 0x118
	// Line 124, Address: 0x1adb40, Func Offset: 0x120
	// Line 125, Address: 0x1adb5c, Func Offset: 0x13c
	// Line 126, Address: 0x1adb78, Func Offset: 0x158
	// Line 128, Address: 0x1adb80, Func Offset: 0x160
	// Line 129, Address: 0x1adb9c, Func Offset: 0x17c
	// Line 130, Address: 0x1adbb8, Func Offset: 0x198
	// Line 132, Address: 0x1adbc0, Func Offset: 0x1a0
	// Line 133, Address: 0x1adbdc, Func Offset: 0x1bc
	// Line 134, Address: 0x1adbf8, Func Offset: 0x1d8
	// Line 136, Address: 0x1adc00, Func Offset: 0x1e0
	// Line 137, Address: 0x1adc1c, Func Offset: 0x1fc
	// Line 138, Address: 0x1adc38, Func Offset: 0x218
	// Line 140, Address: 0x1adc40, Func Offset: 0x220
	// Line 141, Address: 0x1adc5c, Func Offset: 0x23c
	// Line 142, Address: 0x1adc78, Func Offset: 0x258
	// Line 144, Address: 0x1adc80, Func Offset: 0x260
	// Line 145, Address: 0x1adc9c, Func Offset: 0x27c
	// Line 146, Address: 0x1adcb8, Func Offset: 0x298
	// Line 147, Address: 0x1adcd4, Func Offset: 0x2b4
	// Line 149, Address: 0x1adcdc, Func Offset: 0x2bc
	// Line 150, Address: 0x1adcf8, Func Offset: 0x2d8
	// Line 151, Address: 0x1add14, Func Offset: 0x2f4
	// Line 155, Address: 0x1add30, Func Offset: 0x310
	// Line 156, Address: 0x1add34, Func Offset: 0x314
	// Func End, Address: 0x1add3c, Func Offset: 0x31c
}

// 
// Start address: 0x1add40
int ItemWeaponShoot(int kind, int use)
{
	// Line 168, Address: 0x1add40, Func Offset: 0
	// Line 169, Address: 0x1add50, Func Offset: 0x10
	// Line 171, Address: 0x1add64, Func Offset: 0x24
	// Line 178, Address: 0x1add94, Func Offset: 0x54
	// Line 182, Address: 0x1adda0, Func Offset: 0x60
	// Line 183, Address: 0x1addd8, Func Offset: 0x98
	// Line 184, Address: 0x1addec, Func Offset: 0xac
	// Line 185, Address: 0x1ade04, Func Offset: 0xc4
	// Func End, Address: 0x1ade18, Func Offset: 0xd8
}

// 
// Start address: 0x1ade20
int ItemWeaponReload(int kind, int use)
{
	int work;
	int bullet;
	int weapon;
	// Line 198, Address: 0x1ade20, Func Offset: 0
	// Line 203, Address: 0x1ade28, Func Offset: 0x8
	// Line 205, Address: 0x1ade3c, Func Offset: 0x1c
	// Line 209, Address: 0x1ade68, Func Offset: 0x48
	// Line 210, Address: 0x1ade6c, Func Offset: 0x4c
	// Line 211, Address: 0x1ade70, Func Offset: 0x50
	// Line 215, Address: 0x1ade78, Func Offset: 0x58
	// Line 217, Address: 0x1ade7c, Func Offset: 0x5c
	// Line 219, Address: 0x1ade84, Func Offset: 0x64
	// Line 220, Address: 0x1ade98, Func Offset: 0x78
	// Line 221, Address: 0x1adea4, Func Offset: 0x84
	// Line 223, Address: 0x1adeac, Func Offset: 0x8c
	// Line 227, Address: 0x1adeb8, Func Offset: 0x98
	// Line 230, Address: 0x1adedc, Func Offset: 0xbc
	// Line 233, Address: 0x1adf2c, Func Offset: 0x10c
	// Line 234, Address: 0x1adf5c, Func Offset: 0x13c
	// Line 236, Address: 0x1adf60, Func Offset: 0x140
	// Line 238, Address: 0x1adf84, Func Offset: 0x164
	// Line 239, Address: 0x1adf90, Func Offset: 0x170
	// Line 240, Address: 0x1adf98, Func Offset: 0x178
	// Line 244, Address: 0x1adf9c, Func Offset: 0x17c
	// Line 245, Address: 0x1adfac, Func Offset: 0x18c
	// Line 246, Address: 0x1adfb0, Func Offset: 0x190
	// Line 249, Address: 0x1adfe0, Func Offset: 0x1c0
	// Line 250, Address: 0x1adff0, Func Offset: 0x1d0
	// Line 252, Address: 0x1adffc, Func Offset: 0x1dc
	// Line 253, Address: 0x1ae004, Func Offset: 0x1e4
	// Func End, Address: 0x1ae014, Func Offset: 0x1f4
}

// 
// Start address: 0x1ae020
int ItemMedicineUse(int kind)
{
	// Line 262, Address: 0x1ae020, Func Offset: 0
	// Line 263, Address: 0x1ae030, Func Offset: 0x10
	// Line 265, Address: 0x1ae054, Func Offset: 0x34
	// Line 267, Address: 0x1ae060, Func Offset: 0x40
	// Line 268, Address: 0x1ae088, Func Offset: 0x68
	// Line 270, Address: 0x1ae094, Func Offset: 0x74
	// Line 271, Address: 0x1ae0a8, Func Offset: 0x88
	// Line 272, Address: 0x1ae0c4, Func Offset: 0xa4
	// Line 273, Address: 0x1ae0e0, Func Offset: 0xc0
	// Line 274, Address: 0x1ae0fc, Func Offset: 0xdc
	// Line 275, Address: 0x1ae10c, Func Offset: 0xec
	// Line 276, Address: 0x1ae11c, Func Offset: 0xfc
	// Line 278, Address: 0x1ae128, Func Offset: 0x108
	// Line 279, Address: 0x1ae158, Func Offset: 0x138
	// Line 280, Address: 0x1ae15c, Func Offset: 0x13c
	// Line 281, Address: 0x1ae160, Func Offset: 0x140
	// Func End, Address: 0x1ae174, Func Offset: 0x154
}

// 
// Start address: 0x1ae180
float ItemAmpolueEfficacy()
{
	float work;
	// Line 291, Address: 0x1ae180, Func Offset: 0
	// Line 293, Address: 0x1ae188, Func Offset: 0x8
	// Line 294, Address: 0x1ae1a8, Func Offset: 0x28
	// Line 296, Address: 0x1ae1e0, Func Offset: 0x60
	// Func End, Address: 0x1ae1e8, Func Offset: 0x68
}

// 
// Start address: 0x1ae1f0
int ItemEventCheck(int kind_0, int kind_1, int kind_2)
{
	int use_item;
	// Line 311, Address: 0x1ae1f0, Func Offset: 0
	// Line 314, Address: 0x1ae1f8, Func Offset: 0x8
	// Line 315, Address: 0x1ae200, Func Offset: 0x10
	// Line 317, Address: 0x1ae228, Func Offset: 0x38
	// Func End, Address: 0x1ae238, Func Offset: 0x48
}

// 
// Start address: 0x1ae240
int ItemCombinationUseCheck(int kind_0, int kind_1, int kind_2)
{
	int i;
	int kind_x;
	int cmb_check[4][11];
	// Line 361, Address: 0x1ae240, Func Offset: 0
	// Line 362, Address: 0x1ae258, Func Offset: 0x18
	// Line 363, Address: 0x1ae270, Func Offset: 0x30
	// Line 366, Address: 0x1ae288, Func Offset: 0x48
	// Line 367, Address: 0x1ae290, Func Offset: 0x50
	// Line 368, Address: 0x1ae294, Func Offset: 0x54
	// Line 369, Address: 0x1ae29c, Func Offset: 0x5c
	// Line 370, Address: 0x1ae2a0, Func Offset: 0x60
	// Line 371, Address: 0x1ae2ac, Func Offset: 0x6c
	// Line 374, Address: 0x1ae2f8, Func Offset: 0xb8
	// Line 375, Address: 0x1ae308, Func Offset: 0xc8
	// Line 377, Address: 0x1ae310, Func Offset: 0xd0
	// Line 378, Address: 0x1ae324, Func Offset: 0xe4
	// Line 380, Address: 0x1ae328, Func Offset: 0xe8
	// Func End, Address: 0x1ae330, Func Offset: 0xf0
}

// 
// Start address: 0x1ae330
void ItemPutForShelf()
{
	// Line 389, Address: 0x1ae330, Func Offset: 0
	// Line 390, Address: 0x1ae338, Func Offset: 0x8
	// Line 391, Address: 0x1ae350, Func Offset: 0x20
	// Func End, Address: 0x1ae360, Func Offset: 0x30
}

