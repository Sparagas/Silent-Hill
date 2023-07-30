typedef struct SubCharacter;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct shSkelton;
typedef struct _anon2;
typedef struct PAD_3D;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct PAD_2D;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct _anon3;
typedef struct PAD_INFO;
typedef struct shPlayerWork;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct Playing_Info;
typedef struct shBattleInfo;
typedef struct Pad_KeyConfig;
typedef struct _CL_VHIT_WALL;

typedef void(*type_11)(SubCharacter*);
typedef void(*type_14)(SubCharacter*);
typedef void(*type_15)(SubCharacter*);
typedef void(*type_16)(SubCharacter*);
typedef void(*type_21)(SubCharacter*);
typedef void(*type_26)(SubCharacter*);

typedef short type_0[24];
typedef unsigned char type_1[20];
typedef float type_2[7];
typedef unsigned int type_3[7];
typedef int type_4[6];
typedef float type_5[7];
typedef unsigned char type_6[2];
typedef shAttackInfo type_7[66];
typedef unsigned char type_8[14];
typedef unsigned int type_9[32];
typedef float type_10[7];
typedef void(*type_12)(SubCharacter*)[32];
typedef float type_13[7];
typedef float type_17[4][2];
typedef float type_18[4];
typedef float type_19[4][4];
typedef unsigned char type_20[69];
typedef unsigned char type_22[4];
typedef PAD_INFO type_23[10];
typedef unsigned int type_24[9];
typedef float type_25[2];
typedef void(*type_27)(SubCharacter*)[32];
typedef unsigned char type_28[4];
typedef unsigned char type_29[4];
typedef unsigned char type_30[14];
typedef float type_31[4];
typedef float type_32[4];
typedef float type_33[7];
typedef unsigned char type_34[2];
typedef float type_35[7];
typedef unsigned char type_36[97];
typedef unsigned char type_37[2];
typedef float type_38[24];
typedef unsigned int type_39[32];

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

	void PlayerUpdateStatus2D();
	void PlayerUpdateStatusLower2D();
	void PlayerUpdateStatusUpper2D();
	void PlayerUpdatePosition2D();
	void PlayerCheckAttack2D();
	void PlayerCheckControl2D();
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
	_anon0 hit_check;
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

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
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

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
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

struct _anon3
{
	float d[4][4];
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
	_anon2 tgt_body_angle;
	_anon2 tgt_neck_angle;
	_anon2 tgt_arms_angle;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
float jms_walk_spd_ana[7];
float jms_back_spd_ana[7];
float jms_swalk_spd_ana[7];
float jms_run_spd_ana[7];
float jms_srun_spd_ana[7];
unsigned int pjames_act_with_wep_flag[9];
unsigned int pjames_upper_flag[32];
unsigned int pjames_lower_flag[32];
float dir_tmp;
float dtf;
shPlayerWork sh2jms;
int dt;
void(*func_list_lower)(SubCharacter*)[32];
void(*func_list_upper)(SubCharacter*)[32];
Pad_KeyConfig key_config;
float angle;
Playing_Info playing;

void PlayerChangeAngleToCameraY(SubCharacter* p);
void lower_walk_2d_nata(SubCharacter* p);
void lower_stand_2d(SubCharacter* p);
void upper_stand_2d(SubCharacter* p);
void lower_relax_2d(SubCharacter* p);
void upper_relax_2d(SubCharacter* p);
void lower_alert_2d(SubCharacter* p);
void upper_alert_2d(SubCharacter* p);
void lower_tired_2d(SubCharacter* p);
void upper_tired_2d(SubCharacter* p);
void lower_ready_2d(SubCharacter* p);
void upper_ready_2d(SubCharacter* p);
void lower_readyoff_2d(SubCharacter* p);
void upper_readyoff_2d(SubCharacter* p);
void lower_walk_2d(SubCharacter* p);
void upper_walk_2d(SubCharacter* p);
void lower_back_2d(SubCharacter* p);
void lower_lswalk_2d(SubCharacter* p);
void lower_rswalk_2d(SubCharacter* p);
void lower_run1_2d(SubCharacter* p);
void upper_run1_2d(SubCharacter* p);
void lower_run2_2d(SubCharacter* p);
void upper_run2_2d(SubCharacter* p);
void lower_run3_2d(SubCharacter* p);
void upper_run3_2d(SubCharacter* p);
void lower_lsrun_2d(SubCharacter* p);
void lower_rsrun_2d(SubCharacter* p);
void lower_jump_2d();
void upper_jump_2d();
void lower_guard_2d(SubCharacter* p);
void upper_guard_2d();
void lower_lstep_2d();
void upper_lstep_2d();
void lower_rstep_2d();
void upper_rstep_2d();
void lower_hold_2d(SubCharacter* p);
void upper_hold_2d(SubCharacter* p);
void lower_release_2d(SubCharacter* p);
void upper_release_2d(SubCharacter* p);
void lower_attack_2d(SubCharacter* p);
void upper_attack_2d(SubCharacter* p);
void lower_kick_2d(SubCharacter* p);
void upper_kick_2d(SubCharacter* p);
void lower_fall_2d(SubCharacter* p);
void upper_fall_2d(SubCharacter* p);
void lower_damage_2d(SubCharacter* p);
void upper_damage_2d(SubCharacter* p);
void lower_to_stand_2d(SubCharacter* p);
void upper_to_stand_2d(SubCharacter* p);
void lower_wall_f_2d(SubCharacter* p);
void upper_wall_f_2d(SubCharacter* p);
void lower_event_2d(SubCharacter* p);
void upper_event_2d(SubCharacter* p);
void PlayerUpdateStatus2D();
void PlayerUpdateStatusLower2D();
void PlayerUpdateStatusUpper2D();
void PlayerUpdateStatusLower2nd2D();
void PlayerUpdatePosition2D();
void PlayerCheckAttack2D();
void PlayerCheckControl2D();

// 
// Start address: 0x111370
void PlayerChangeAngleToCameraY(SubCharacter* p)
{
	float spd_close_to;
	float mov_angle;
	float roty_tmp;
	// Line 83, Address: 0x111370, Func Offset: 0
	// Line 88, Address: 0x111388, Func Offset: 0x18
	// Line 103, Address: 0x1113a0, Func Offset: 0x30
	// Line 104, Address: 0x11140c, Func Offset: 0x9c
	// Line 105, Address: 0x111424, Func Offset: 0xb4
	// Line 106, Address: 0x111438, Func Offset: 0xc8
	// Line 108, Address: 0x111448, Func Offset: 0xd8
	// Line 109, Address: 0x111454, Func Offset: 0xe4
	// Line 110, Address: 0x11145c, Func Offset: 0xec
	// Line 111, Address: 0x111470, Func Offset: 0x100
	// Line 113, Address: 0x111480, Func Offset: 0x110
	// Line 115, Address: 0x11148c, Func Offset: 0x11c
	// Line 116, Address: 0x11149c, Func Offset: 0x12c
	// Func End, Address: 0x1114b8, Func Offset: 0x148
}

// 
// Start address: 0x1114c0
void lower_walk_2d_nata(SubCharacter* p)
{
	short motion_spd_tbl[24];
	float move_spd_tbl[24];
	short frame;
	// Line 122, Address: 0x1114c0, Func Offset: 0
	// Line 125, Address: 0x1114d4, Func Offset: 0x14
	// Line 177, Address: 0x111510, Func Offset: 0x50
	// Line 231, Address: 0x111534, Func Offset: 0x74
	// Line 246, Address: 0x111548, Func Offset: 0x88
	// Line 247, Address: 0x111558, Func Offset: 0x98
	// Line 250, Address: 0x111594, Func Offset: 0xd4
	// Line 251, Address: 0x1115b4, Func Offset: 0xf4
	// Line 252, Address: 0x1115c8, Func Offset: 0x108
	// Func End, Address: 0x1115e0, Func Offset: 0x120
}

// 
// Start address: 0x1115e0
void lower_stand_2d(SubCharacter* p)
{
	// Line 261, Address: 0x1115e0, Func Offset: 0
	// Line 262, Address: 0x1115e8, Func Offset: 0x8
	// Line 263, Address: 0x1115f0, Func Offset: 0x10
	// Func End, Address: 0x111600, Func Offset: 0x20
}

// 
// Start address: 0x111600
void upper_stand_2d(SubCharacter* p)
{
	// Line 265, Address: 0x111600, Func Offset: 0
	// Line 266, Address: 0x111608, Func Offset: 0x8
	// Line 267, Address: 0x111610, Func Offset: 0x10
	// Func End, Address: 0x111620, Func Offset: 0x20
}

// 
// Start address: 0x111620
void lower_relax_2d(SubCharacter* p)
{
	// Line 270, Address: 0x111620, Func Offset: 0
	// Line 271, Address: 0x111628, Func Offset: 0x8
	// Line 272, Address: 0x111630, Func Offset: 0x10
	// Func End, Address: 0x111640, Func Offset: 0x20
}

// 
// Start address: 0x111640
void upper_relax_2d(SubCharacter* p)
{
	// Line 274, Address: 0x111640, Func Offset: 0
	// Line 275, Address: 0x111648, Func Offset: 0x8
	// Line 276, Address: 0x111650, Func Offset: 0x10
	// Func End, Address: 0x111660, Func Offset: 0x20
}

// 
// Start address: 0x111660
void lower_alert_2d(SubCharacter* p)
{
	// Line 279, Address: 0x111660, Func Offset: 0
	// Line 280, Address: 0x111668, Func Offset: 0x8
	// Line 281, Address: 0x111670, Func Offset: 0x10
	// Func End, Address: 0x111680, Func Offset: 0x20
}

// 
// Start address: 0x111680
void upper_alert_2d(SubCharacter* p)
{
	// Line 283, Address: 0x111680, Func Offset: 0
	// Line 284, Address: 0x111688, Func Offset: 0x8
	// Line 285, Address: 0x111690, Func Offset: 0x10
	// Func End, Address: 0x1116a0, Func Offset: 0x20
}

// 
// Start address: 0x1116a0
void lower_tired_2d(SubCharacter* p)
{
	// Line 288, Address: 0x1116a0, Func Offset: 0
	// Line 289, Address: 0x1116a8, Func Offset: 0x8
	// Line 290, Address: 0x1116b0, Func Offset: 0x10
	// Func End, Address: 0x1116c0, Func Offset: 0x20
}

// 
// Start address: 0x1116c0
void upper_tired_2d(SubCharacter* p)
{
	// Line 292, Address: 0x1116c0, Func Offset: 0
	// Line 293, Address: 0x1116c8, Func Offset: 0x8
	// Line 294, Address: 0x1116d0, Func Offset: 0x10
	// Func End, Address: 0x1116e0, Func Offset: 0x20
}

// 
// Start address: 0x1116e0
void lower_ready_2d(SubCharacter* p)
{
	// Line 297, Address: 0x1116e0, Func Offset: 0
	// Line 298, Address: 0x1116e8, Func Offset: 0x8
	// Line 299, Address: 0x1116f0, Func Offset: 0x10
	// Func End, Address: 0x111700, Func Offset: 0x20
}

// 
// Start address: 0x111700
void upper_ready_2d(SubCharacter* p)
{
	// Line 301, Address: 0x111700, Func Offset: 0
	// Line 302, Address: 0x111708, Func Offset: 0x8
	// Line 303, Address: 0x111710, Func Offset: 0x10
	// Func End, Address: 0x111720, Func Offset: 0x20
}

// 
// Start address: 0x111720
void lower_readyoff_2d(SubCharacter* p)
{
	// Line 306, Address: 0x111720, Func Offset: 0
	// Line 307, Address: 0x111728, Func Offset: 0x8
	// Line 308, Address: 0x111730, Func Offset: 0x10
	// Func End, Address: 0x111740, Func Offset: 0x20
}

// 
// Start address: 0x111740
void upper_readyoff_2d(SubCharacter* p)
{
	// Line 310, Address: 0x111740, Func Offset: 0
	// Line 311, Address: 0x111748, Func Offset: 0x8
	// Line 312, Address: 0x111750, Func Offset: 0x10
	// Func End, Address: 0x111760, Func Offset: 0x20
}

// 
// Start address: 0x111760
void lower_walk_2d(SubCharacter* p)
{
	short ana_spd;
	// Line 315, Address: 0x111760, Func Offset: 0
	// Line 318, Address: 0x111774, Func Offset: 0x14
	// Line 319, Address: 0x111788, Func Offset: 0x28
	// Line 320, Address: 0x111790, Func Offset: 0x30
	// Line 321, Address: 0x111798, Func Offset: 0x38
	// Line 323, Address: 0x1117bc, Func Offset: 0x5c
	// Line 325, Address: 0x1117e8, Func Offset: 0x88
	// Line 327, Address: 0x111804, Func Offset: 0xa4
	// Line 328, Address: 0x111824, Func Offset: 0xc4
	// Line 330, Address: 0x111848, Func Offset: 0xe8
	// Line 331, Address: 0x111868, Func Offset: 0x108
	// Line 332, Address: 0x111888, Func Offset: 0x128
	// Line 334, Address: 0x111890, Func Offset: 0x130
	// Line 335, Address: 0x1118b0, Func Offset: 0x150
	// Line 337, Address: 0x1118c8, Func Offset: 0x168
	// Line 340, Address: 0x1118d0, Func Offset: 0x170
	// Line 344, Address: 0x1118e8, Func Offset: 0x188
	// Line 358, Address: 0x111934, Func Offset: 0x1d4
	// Line 359, Address: 0x111954, Func Offset: 0x1f4
	// Line 360, Address: 0x111968, Func Offset: 0x208
	// Line 362, Address: 0x11198c, Func Offset: 0x22c
	// Line 363, Address: 0x1119a0, Func Offset: 0x240
	// Line 366, Address: 0x1119a8, Func Offset: 0x248
	// Line 373, Address: 0x1119e8, Func Offset: 0x288
	// Line 375, Address: 0x111a10, Func Offset: 0x2b0
	// Line 376, Address: 0x111a18, Func Offset: 0x2b8
	// Line 381, Address: 0x111a20, Func Offset: 0x2c0
	// Line 383, Address: 0x111a28, Func Offset: 0x2c8
	// Func End, Address: 0x111a40, Func Offset: 0x2e0
}

// 
// Start address: 0x111a40
void upper_walk_2d(SubCharacter* p)
{
	// Line 385, Address: 0x111a40, Func Offset: 0
	// Line 387, Address: 0x111a50, Func Offset: 0x10
	// Line 388, Address: 0x111a64, Func Offset: 0x24
	// Line 394, Address: 0x111a80, Func Offset: 0x40
	// Line 401, Address: 0x111ac4, Func Offset: 0x84
	// Func End, Address: 0x111ad8, Func Offset: 0x98
}

// 
// Start address: 0x111ae0
void lower_back_2d(SubCharacter* p)
{
	short ana_spd;
	float lstickY_tmp;
	// Line 404, Address: 0x111ae0, Func Offset: 0
	// Line 412, Address: 0x111af0, Func Offset: 0x10
	// Line 414, Address: 0x111b04, Func Offset: 0x24
	// Line 421, Address: 0x111b14, Func Offset: 0x34
	// Line 425, Address: 0x111b38, Func Offset: 0x58
	// Line 426, Address: 0x111b68, Func Offset: 0x88
	// Line 428, Address: 0x111b84, Func Offset: 0xa4
	// Line 429, Address: 0x111ba4, Func Offset: 0xc4
	// Line 430, Address: 0x111bbc, Func Offset: 0xdc
	// Line 432, Address: 0x111bc8, Func Offset: 0xe8
	// Line 433, Address: 0x111bd0, Func Offset: 0xf0
	// Line 435, Address: 0x111bf0, Func Offset: 0x110
	// Line 436, Address: 0x111c10, Func Offset: 0x130
	// Line 437, Address: 0x111c30, Func Offset: 0x150
	// Line 439, Address: 0x111c38, Func Offset: 0x158
	// Line 440, Address: 0x111c58, Func Offset: 0x178
	// Line 445, Address: 0x111c70, Func Offset: 0x190
	// Line 448, Address: 0x111c78, Func Offset: 0x198
	// Line 456, Address: 0x111c94, Func Offset: 0x1b4
	// Line 457, Address: 0x111ca4, Func Offset: 0x1c4
	// Line 463, Address: 0x111cb8, Func Offset: 0x1d8
	// Line 473, Address: 0x111d00, Func Offset: 0x220
	// Line 474, Address: 0x111d10, Func Offset: 0x230
	// Line 475, Address: 0x111d24, Func Offset: 0x244
	// Line 477, Address: 0x111d48, Func Offset: 0x268
	// Line 478, Address: 0x111d5c, Func Offset: 0x27c
	// Line 480, Address: 0x111d64, Func Offset: 0x284
	// Line 484, Address: 0x111d90, Func Offset: 0x2b0
	// Line 485, Address: 0x111dbc, Func Offset: 0x2dc
	// Line 486, Address: 0x111dc4, Func Offset: 0x2e4
	// Line 493, Address: 0x111dcc, Func Offset: 0x2ec
	// Line 495, Address: 0x111dd4, Func Offset: 0x2f4
	// Func End, Address: 0x111de8, Func Offset: 0x308
}

// 
// Start address: 0x111df0
void lower_lswalk_2d(SubCharacter* p)
{
	short ana_spd;
	// Line 502, Address: 0x111df0, Func Offset: 0
	// Line 506, Address: 0x111e04, Func Offset: 0x14
	// Line 509, Address: 0x111e28, Func Offset: 0x38
	// Line 511, Address: 0x111e58, Func Offset: 0x68
	// Line 513, Address: 0x111e78, Func Offset: 0x88
	// Line 514, Address: 0x111e98, Func Offset: 0xa8
	// Line 516, Address: 0x111ec0, Func Offset: 0xd0
	// Line 517, Address: 0x111ee0, Func Offset: 0xf0
	// Line 518, Address: 0x111f00, Func Offset: 0x110
	// Line 520, Address: 0x111f08, Func Offset: 0x118
	// Line 521, Address: 0x111f2c, Func Offset: 0x13c
	// Line 523, Address: 0x111f44, Func Offset: 0x154
	// Line 526, Address: 0x111f4c, Func Offset: 0x15c
	// Line 530, Address: 0x111f68, Func Offset: 0x178
	// Line 542, Address: 0x111fb8, Func Offset: 0x1c8
	// Line 545, Address: 0x111fc0, Func Offset: 0x1d0
	// Line 546, Address: 0x111fd0, Func Offset: 0x1e0
	// Line 547, Address: 0x111fe4, Func Offset: 0x1f4
	// Line 549, Address: 0x112008, Func Offset: 0x218
	// Line 550, Address: 0x11201c, Func Offset: 0x22c
	// Line 553, Address: 0x112024, Func Offset: 0x234
	// Line 560, Address: 0x112064, Func Offset: 0x274
	// Line 571, Address: 0x112090, Func Offset: 0x2a0
	// Line 572, Address: 0x112098, Func Offset: 0x2a8
	// Func End, Address: 0x1120b0, Func Offset: 0x2c0
}

// 
// Start address: 0x1120b0
void lower_rswalk_2d(SubCharacter* p)
{
	short ana_spd;
	// Line 579, Address: 0x1120b0, Func Offset: 0
	// Line 583, Address: 0x1120c4, Func Offset: 0x14
	// Line 586, Address: 0x1120e8, Func Offset: 0x38
	// Line 588, Address: 0x112118, Func Offset: 0x68
	// Line 590, Address: 0x112138, Func Offset: 0x88
	// Line 591, Address: 0x112158, Func Offset: 0xa8
	// Line 593, Address: 0x112180, Func Offset: 0xd0
	// Line 594, Address: 0x11219c, Func Offset: 0xec
	// Line 595, Address: 0x1121bc, Func Offset: 0x10c
	// Line 597, Address: 0x1121c4, Func Offset: 0x114
	// Line 598, Address: 0x1121e8, Func Offset: 0x138
	// Line 600, Address: 0x112200, Func Offset: 0x150
	// Line 603, Address: 0x112208, Func Offset: 0x158
	// Line 607, Address: 0x112224, Func Offset: 0x174
	// Line 619, Address: 0x112270, Func Offset: 0x1c0
	// Line 622, Address: 0x112278, Func Offset: 0x1c8
	// Line 623, Address: 0x112288, Func Offset: 0x1d8
	// Line 624, Address: 0x11229c, Func Offset: 0x1ec
	// Line 626, Address: 0x1122c0, Func Offset: 0x210
	// Line 627, Address: 0x1122d4, Func Offset: 0x224
	// Line 630, Address: 0x1122dc, Func Offset: 0x22c
	// Line 637, Address: 0x11231c, Func Offset: 0x26c
	// Line 643, Address: 0x112348, Func Offset: 0x298
	// Line 644, Address: 0x112350, Func Offset: 0x2a0
	// Func End, Address: 0x112368, Func Offset: 0x2b8
}

// 
// Start address: 0x112370
void lower_run1_2d(SubCharacter* p)
{
	float target_speed;
	char lstickY_tmp;
	// Line 651, Address: 0x112370, Func Offset: 0
	// Line 656, Address: 0x112378, Func Offset: 0x8
	// Line 661, Address: 0x112388, Func Offset: 0x18
	// Line 663, Address: 0x1123ac, Func Offset: 0x3c
	// Line 665, Address: 0x1123cc, Func Offset: 0x5c
	// Line 666, Address: 0x1123e8, Func Offset: 0x78
	// Line 667, Address: 0x112408, Func Offset: 0x98
	// Line 669, Address: 0x112410, Func Offset: 0xa0
	// Line 670, Address: 0x11242c, Func Offset: 0xbc
	// Line 672, Address: 0x112444, Func Offset: 0xd4
	// Line 679, Address: 0x11244c, Func Offset: 0xdc
	// Line 689, Address: 0x112460, Func Offset: 0xf0
	// Line 690, Address: 0x112474, Func Offset: 0x104
	// Line 691, Address: 0x112490, Func Offset: 0x120
	// Line 692, Address: 0x112498, Func Offset: 0x128
	// Line 694, Address: 0x1124b4, Func Offset: 0x144
	// Line 695, Address: 0x1124e4, Func Offset: 0x174
	// Line 700, Address: 0x112504, Func Offset: 0x194
	// Line 703, Address: 0x11250c, Func Offset: 0x19c
	// Line 704, Address: 0x11253c, Func Offset: 0x1cc
	// Line 705, Address: 0x112550, Func Offset: 0x1e0
	// Line 710, Address: 0x112564, Func Offset: 0x1f4
	// Line 711, Address: 0x11256c, Func Offset: 0x1fc
	// Func End, Address: 0x11257c, Func Offset: 0x20c
}

// 
// Start address: 0x112580
void upper_run1_2d(SubCharacter* p)
{
	// Line 713, Address: 0x112580, Func Offset: 0
	// Line 714, Address: 0x112588, Func Offset: 0x8
	// Line 715, Address: 0x112590, Func Offset: 0x10
	// Func End, Address: 0x1125a0, Func Offset: 0x20
}

// 
// Start address: 0x1125a0
void lower_run2_2d(SubCharacter* p)
{
	float target_speed;
	char lstickY_tmp;
	// Line 718, Address: 0x1125a0, Func Offset: 0
	// Line 723, Address: 0x1125b0, Func Offset: 0x10
	// Line 727, Address: 0x1125c0, Func Offset: 0x20
	// Line 728, Address: 0x1125e0, Func Offset: 0x40
	// Line 730, Address: 0x1125fc, Func Offset: 0x5c
	// Line 732, Address: 0x112620, Func Offset: 0x80
	// Line 734, Address: 0x112640, Func Offset: 0xa0
	// Line 735, Address: 0x11265c, Func Offset: 0xbc
	// Line 736, Address: 0x11267c, Func Offset: 0xdc
	// Line 738, Address: 0x112684, Func Offset: 0xe4
	// Line 739, Address: 0x1126a0, Func Offset: 0x100
	// Line 742, Address: 0x1126b8, Func Offset: 0x118
	// Line 745, Address: 0x112704, Func Offset: 0x164
	// Line 746, Address: 0x112714, Func Offset: 0x174
	// Line 747, Address: 0x112728, Func Offset: 0x188
	// Line 754, Address: 0x11273c, Func Offset: 0x19c
	// Line 760, Address: 0x112744, Func Offset: 0x1a4
	// Line 768, Address: 0x112758, Func Offset: 0x1b8
	// Line 769, Address: 0x11276c, Func Offset: 0x1cc
	// Line 770, Address: 0x112788, Func Offset: 0x1e8
	// Line 771, Address: 0x1127a8, Func Offset: 0x208
	// Line 772, Address: 0x1127b0, Func Offset: 0x210
	// Line 773, Address: 0x1127cc, Func Offset: 0x22c
	// Line 777, Address: 0x1127ec, Func Offset: 0x24c
	// Line 778, Address: 0x11281c, Func Offset: 0x27c
	// Line 779, Address: 0x112830, Func Offset: 0x290
	// Line 781, Address: 0x112844, Func Offset: 0x2a4
	// Line 784, Address: 0x112890, Func Offset: 0x2f0
	// Line 785, Address: 0x1128a0, Func Offset: 0x300
	// Line 786, Address: 0x1128b4, Func Offset: 0x314
	// Line 797, Address: 0x1128c8, Func Offset: 0x328
	// Line 806, Address: 0x1128d0, Func Offset: 0x330
	// Line 808, Address: 0x1128d8, Func Offset: 0x338
	// Line 809, Address: 0x1128e8, Func Offset: 0x348
	// Line 811, Address: 0x1128fc, Func Offset: 0x35c
	// Func End, Address: 0x112910, Func Offset: 0x370
}

// 
// Start address: 0x112910
void upper_run2_2d(SubCharacter* p)
{
	// Line 813, Address: 0x112910, Func Offset: 0
	// Line 814, Address: 0x112918, Func Offset: 0x8
	// Line 815, Address: 0x112920, Func Offset: 0x10
	// Func End, Address: 0x112930, Func Offset: 0x20
}

// 
// Start address: 0x112930
void lower_run3_2d(SubCharacter* p)
{
	float target_speed;
	char lstickY_tmp;
	// Line 818, Address: 0x112930, Func Offset: 0
	// Line 824, Address: 0x112940, Func Offset: 0x10
	// Line 828, Address: 0x112950, Func Offset: 0x20
	// Line 829, Address: 0x112970, Func Offset: 0x40
	// Line 831, Address: 0x11298c, Func Offset: 0x5c
	// Line 834, Address: 0x1129b0, Func Offset: 0x80
	// Line 835, Address: 0x1129d0, Func Offset: 0xa0
	// Line 838, Address: 0x1129f8, Func Offset: 0xc8
	// Line 839, Address: 0x112a24, Func Offset: 0xf4
	// Line 840, Address: 0x112a38, Func Offset: 0x108
	// Line 842, Address: 0x112a4c, Func Offset: 0x11c
	// Line 848, Address: 0x112a54, Func Offset: 0x124
	// Line 855, Address: 0x112a6c, Func Offset: 0x13c
	// Line 856, Address: 0x112a80, Func Offset: 0x150
	// Line 857, Address: 0x112a88, Func Offset: 0x158
	// Line 862, Address: 0x112a8c, Func Offset: 0x15c
	// Line 863, Address: 0x112aa0, Func Offset: 0x170
	// Line 864, Address: 0x112abc, Func Offset: 0x18c
	// Line 865, Address: 0x112ac4, Func Offset: 0x194
	// Line 867, Address: 0x112ae0, Func Offset: 0x1b0
	// Line 870, Address: 0x112b04, Func Offset: 0x1d4
	// Line 872, Address: 0x112b4c, Func Offset: 0x21c
	// Line 873, Address: 0x112b60, Func Offset: 0x230
	// Line 879, Address: 0x112b74, Func Offset: 0x244
	// Line 888, Address: 0x112b7c, Func Offset: 0x24c
	// Line 891, Address: 0x112b84, Func Offset: 0x254
	// Line 892, Address: 0x112b94, Func Offset: 0x264
	// Line 893, Address: 0x112ba8, Func Offset: 0x278
	// Func End, Address: 0x112bbc, Func Offset: 0x28c
}

// 
// Start address: 0x112bc0
void upper_run3_2d(SubCharacter* p)
{
	// Line 895, Address: 0x112bc0, Func Offset: 0
	// Line 896, Address: 0x112bc8, Func Offset: 0x8
	// Line 897, Address: 0x112bd0, Func Offset: 0x10
	// Func End, Address: 0x112be0, Func Offset: 0x20
}

// 
// Start address: 0x112be0
void lower_lsrun_2d(SubCharacter* p)
{
	float target_speed;
	// Line 900, Address: 0x112be0, Func Offset: 0
	// Line 904, Address: 0x112bf0, Func Offset: 0x10
	// Line 905, Address: 0x112c10, Func Offset: 0x30
	// Line 907, Address: 0x112c2c, Func Offset: 0x4c
	// Line 911, Address: 0x112c50, Func Offset: 0x70
	// Line 912, Address: 0x112c70, Func Offset: 0x90
	// Line 913, Address: 0x112c98, Func Offset: 0xb8
	// Line 919, Address: 0x112ca0, Func Offset: 0xc0
	// Line 927, Address: 0x112cb8, Func Offset: 0xd8
	// Line 931, Address: 0x112cd8, Func Offset: 0xf8
	// Line 938, Address: 0x112cec, Func Offset: 0x10c
	// Line 944, Address: 0x112cf0, Func Offset: 0x110
	// Line 952, Address: 0x112d34, Func Offset: 0x154
	// Line 956, Address: 0x112d3c, Func Offset: 0x15c
	// Line 959, Address: 0x112d44, Func Offset: 0x164
	// Line 960, Address: 0x112d54, Func Offset: 0x174
	// Line 961, Address: 0x112d68, Func Offset: 0x188
	// Func End, Address: 0x112d7c, Func Offset: 0x19c
}

// 
// Start address: 0x112d80
void lower_rsrun_2d(SubCharacter* p)
{
	float target_speed;
	// Line 968, Address: 0x112d80, Func Offset: 0
	// Line 972, Address: 0x112d90, Func Offset: 0x10
	// Line 973, Address: 0x112db0, Func Offset: 0x30
	// Line 975, Address: 0x112dcc, Func Offset: 0x4c
	// Line 979, Address: 0x112df0, Func Offset: 0x70
	// Line 980, Address: 0x112e10, Func Offset: 0x90
	// Line 981, Address: 0x112e38, Func Offset: 0xb8
	// Line 988, Address: 0x112e40, Func Offset: 0xc0
	// Line 996, Address: 0x112e58, Func Offset: 0xd8
	// Line 1000, Address: 0x112e78, Func Offset: 0xf8
	// Line 1007, Address: 0x112e8c, Func Offset: 0x10c
	// Line 1012, Address: 0x112e90, Func Offset: 0x110
	// Line 1020, Address: 0x112ed4, Func Offset: 0x154
	// Line 1025, Address: 0x112edc, Func Offset: 0x15c
	// Line 1028, Address: 0x112ee4, Func Offset: 0x164
	// Line 1029, Address: 0x112ef4, Func Offset: 0x174
	// Line 1030, Address: 0x112f08, Func Offset: 0x188
	// Func End, Address: 0x112f1c, Func Offset: 0x19c
}

// 
// Start address: 0x112f20
void lower_jump_2d()
{
	// Line 1038, Address: 0x112f20, Func Offset: 0
	// Func End, Address: 0x112f28, Func Offset: 0x8
}

// 
// Start address: 0x112f30
void upper_jump_2d()
{
	// Line 1041, Address: 0x112f30, Func Offset: 0
	// Func End, Address: 0x112f38, Func Offset: 0x8
}

// 
// Start address: 0x112f40
void lower_guard_2d(SubCharacter* p)
{
	unsigned short frame;
	// Line 1043, Address: 0x112f40, Func Offset: 0
	// Line 1044, Address: 0x112f50, Func Offset: 0x10
	// Line 1047, Address: 0x112f60, Func Offset: 0x20
	// Line 1048, Address: 0x112f74, Func Offset: 0x34
	// Line 1049, Address: 0x112f7c, Func Offset: 0x3c
	// Line 1050, Address: 0x112f80, Func Offset: 0x40
	// Line 1051, Address: 0x112f84, Func Offset: 0x44
	// Line 1052, Address: 0x112f90, Func Offset: 0x50
	// Line 1053, Address: 0x112fa4, Func Offset: 0x64
	// Line 1054, Address: 0x112fb8, Func Offset: 0x78
	// Line 1055, Address: 0x112fc0, Func Offset: 0x80
	// Line 1057, Address: 0x112fd0, Func Offset: 0x90
	// Line 1058, Address: 0x112fd8, Func Offset: 0x98
	// Line 1060, Address: 0x112fe0, Func Offset: 0xa0
	// Line 1063, Address: 0x112fec, Func Offset: 0xac
	// Line 1064, Address: 0x113000, Func Offset: 0xc0
	// Line 1065, Address: 0x113008, Func Offset: 0xc8
	// Line 1066, Address: 0x11301c, Func Offset: 0xdc
	// Line 1067, Address: 0x113030, Func Offset: 0xf0
	// Line 1070, Address: 0x113044, Func Offset: 0x104
	// Func End, Address: 0x113058, Func Offset: 0x118
}

// 
// Start address: 0x113060
void upper_guard_2d()
{
	// Line 1072, Address: 0x113060, Func Offset: 0
	// Line 1073, Address: 0x113068, Func Offset: 0x8
	// Line 1074, Address: 0x11307c, Func Offset: 0x1c
	// Line 1076, Address: 0x113090, Func Offset: 0x30
	// Line 1078, Address: 0x1130a4, Func Offset: 0x44
	// Func End, Address: 0x1130b4, Func Offset: 0x54
}

// 
// Start address: 0x1130c0
void lower_lstep_2d()
{
	// Line 1082, Address: 0x1130c0, Func Offset: 0
	// Func End, Address: 0x1130c8, Func Offset: 0x8
}

// 
// Start address: 0x1130d0
void upper_lstep_2d()
{
	// Line 1085, Address: 0x1130d0, Func Offset: 0
	// Func End, Address: 0x1130d8, Func Offset: 0x8
}

// 
// Start address: 0x1130e0
void lower_rstep_2d()
{
	// Line 1089, Address: 0x1130e0, Func Offset: 0
	// Func End, Address: 0x1130e8, Func Offset: 0x8
}

// 
// Start address: 0x1130f0
void upper_rstep_2d()
{
	// Line 1092, Address: 0x1130f0, Func Offset: 0
	// Func End, Address: 0x1130f8, Func Offset: 0x8
}

// 
// Start address: 0x113100
void lower_hold_2d(SubCharacter* p)
{
	// Line 1095, Address: 0x113100, Func Offset: 0
	// Line 1096, Address: 0x113108, Func Offset: 0x8
	// Line 1097, Address: 0x113110, Func Offset: 0x10
	// Func End, Address: 0x113120, Func Offset: 0x20
}

// 
// Start address: 0x113120
void upper_hold_2d(SubCharacter* p)
{
	// Line 1099, Address: 0x113120, Func Offset: 0
	// Line 1100, Address: 0x113128, Func Offset: 0x8
	// Line 1101, Address: 0x113130, Func Offset: 0x10
	// Func End, Address: 0x113140, Func Offset: 0x20
}

// 
// Start address: 0x113140
void lower_release_2d(SubCharacter* p)
{
	// Line 1104, Address: 0x113140, Func Offset: 0
	// Line 1105, Address: 0x113148, Func Offset: 0x8
	// Line 1106, Address: 0x113150, Func Offset: 0x10
	// Func End, Address: 0x113160, Func Offset: 0x20
}

// 
// Start address: 0x113160
void upper_release_2d(SubCharacter* p)
{
	// Line 1108, Address: 0x113160, Func Offset: 0
	// Line 1109, Address: 0x113168, Func Offset: 0x8
	// Line 1110, Address: 0x113170, Func Offset: 0x10
	// Func End, Address: 0x113180, Func Offset: 0x20
}

// 
// Start address: 0x113180
void lower_attack_2d(SubCharacter* p)
{
	// Line 1113, Address: 0x113180, Func Offset: 0
	// Line 1114, Address: 0x113188, Func Offset: 0x8
	// Line 1115, Address: 0x113190, Func Offset: 0x10
	// Func End, Address: 0x1131a0, Func Offset: 0x20
}

// 
// Start address: 0x1131a0
void upper_attack_2d(SubCharacter* p)
{
	// Line 1117, Address: 0x1131a0, Func Offset: 0
	// Line 1118, Address: 0x1131a8, Func Offset: 0x8
	// Line 1119, Address: 0x1131b0, Func Offset: 0x10
	// Func End, Address: 0x1131c0, Func Offset: 0x20
}

// 
// Start address: 0x1131c0
void lower_kick_2d(SubCharacter* p)
{
	// Line 1121, Address: 0x1131c0, Func Offset: 0
	// Line 1122, Address: 0x1131c8, Func Offset: 0x8
	// Line 1123, Address: 0x1131d0, Func Offset: 0x10
	// Func End, Address: 0x1131e0, Func Offset: 0x20
}

// 
// Start address: 0x1131e0
void upper_kick_2d(SubCharacter* p)
{
	// Line 1125, Address: 0x1131e0, Func Offset: 0
	// Line 1126, Address: 0x1131e8, Func Offset: 0x8
	// Line 1127, Address: 0x1131f0, Func Offset: 0x10
	// Func End, Address: 0x113200, Func Offset: 0x20
}

// 
// Start address: 0x113200
void lower_fall_2d(SubCharacter* p)
{
	// Line 1129, Address: 0x113200, Func Offset: 0
	// Line 1130, Address: 0x113208, Func Offset: 0x8
	// Line 1131, Address: 0x113210, Func Offset: 0x10
	// Func End, Address: 0x113220, Func Offset: 0x20
}

// 
// Start address: 0x113220
void upper_fall_2d(SubCharacter* p)
{
	// Line 1133, Address: 0x113220, Func Offset: 0
	// Line 1134, Address: 0x113228, Func Offset: 0x8
	// Line 1135, Address: 0x113230, Func Offset: 0x10
	// Func End, Address: 0x113240, Func Offset: 0x20
}

// 
// Start address: 0x113240
void lower_damage_2d(SubCharacter* p)
{
	// Line 1138, Address: 0x113240, Func Offset: 0
	// Line 1139, Address: 0x113248, Func Offset: 0x8
	// Line 1140, Address: 0x113250, Func Offset: 0x10
	// Func End, Address: 0x113260, Func Offset: 0x20
}

// 
// Start address: 0x113260
void upper_damage_2d(SubCharacter* p)
{
	// Line 1142, Address: 0x113260, Func Offset: 0
	// Line 1144, Address: 0x113268, Func Offset: 0x8
	// Line 1145, Address: 0x113270, Func Offset: 0x10
	// Func End, Address: 0x113280, Func Offset: 0x20
}

// 
// Start address: 0x113280
void lower_to_stand_2d(SubCharacter* p)
{
	// Line 1148, Address: 0x113280, Func Offset: 0
	// Line 1149, Address: 0x113288, Func Offset: 0x8
	// Line 1150, Address: 0x113290, Func Offset: 0x10
	// Func End, Address: 0x1132a0, Func Offset: 0x20
}

// 
// Start address: 0x1132a0
void upper_to_stand_2d(SubCharacter* p)
{
	// Line 1152, Address: 0x1132a0, Func Offset: 0
	// Line 1153, Address: 0x1132a8, Func Offset: 0x8
	// Line 1154, Address: 0x1132b0, Func Offset: 0x10
	// Func End, Address: 0x1132c0, Func Offset: 0x20
}

// 
// Start address: 0x1132c0
void lower_wall_f_2d(SubCharacter* p)
{
	unsigned short frame;
	// Line 1157, Address: 0x1132c0, Func Offset: 0
	// Line 1160, Address: 0x1132d0, Func Offset: 0x10
	// Line 1162, Address: 0x1132e0, Func Offset: 0x20
	// Line 1163, Address: 0x1132f8, Func Offset: 0x38
	// Line 1164, Address: 0x1132fc, Func Offset: 0x3c
	// Line 1167, Address: 0x11331c, Func Offset: 0x5c
	// Line 1168, Address: 0x11333c, Func Offset: 0x7c
	// Line 1170, Address: 0x113364, Func Offset: 0xa4
	// Line 1172, Address: 0x11336c, Func Offset: 0xac
	// Line 1173, Address: 0x113380, Func Offset: 0xc0
	// Line 1175, Address: 0x113394, Func Offset: 0xd4
	// Func End, Address: 0x1133a8, Func Offset: 0xe8
}

// 
// Start address: 0x1133b0
void upper_wall_f_2d(SubCharacter* p)
{
	// Line 1177, Address: 0x1133b0, Func Offset: 0
	// Line 1178, Address: 0x1133b8, Func Offset: 0x8
	// Line 1179, Address: 0x1133c0, Func Offset: 0x10
	// Func End, Address: 0x1133d0, Func Offset: 0x20
}

// 
// Start address: 0x1133d0
void lower_event_2d(SubCharacter* p)
{
	// Line 1182, Address: 0x1133d0, Func Offset: 0
	// Line 1183, Address: 0x1133d8, Func Offset: 0x8
	// Line 1184, Address: 0x1133e0, Func Offset: 0x10
	// Func End, Address: 0x1133f0, Func Offset: 0x20
}

// 
// Start address: 0x1133f0
void upper_event_2d(SubCharacter* p)
{
	// Line 1186, Address: 0x1133f0, Func Offset: 0
	// Line 1187, Address: 0x1133f8, Func Offset: 0x8
	// Line 1188, Address: 0x113400, Func Offset: 0x10
	// Func End, Address: 0x113410, Func Offset: 0x20
}

// 
// Start address: 0x113410
void SubCharacter::PlayerUpdateStatus2D()
{
	// Line 1285, Address: 0x113410, Func Offset: 0
	// Line 1286, Address: 0x113420, Func Offset: 0x10
	// Line 1287, Address: 0x113430, Func Offset: 0x20
	// Line 1289, Address: 0x113440, Func Offset: 0x30
	// Line 1291, Address: 0x113448, Func Offset: 0x38
	// Line 1292, Address: 0x113454, Func Offset: 0x44
	// Func End, Address: 0x113468, Func Offset: 0x58
}

// 
// Start address: 0x113470
void SubCharacter::PlayerUpdateStatusLower2D()
{
	float roty;
	float roty;
	float lower_motion_angle;
	_anon2 watch_pos;
	_anon2 cam_pos;
	PAD_2D* p2d;
	PAD_INFO* p;
	shPlayerWork* w;
	// Line 1302, Address: 0x113470, Func Offset: 0
	// Line 1304, Address: 0x11348c, Func Offset: 0x1c
	// Line 1305, Address: 0x113494, Func Offset: 0x24
	// Line 1306, Address: 0x11349c, Func Offset: 0x2c
	// Line 1310, Address: 0x1134a4, Func Offset: 0x34
	// Line 1311, Address: 0x1134b0, Func Offset: 0x40
	// Line 1314, Address: 0x1134bc, Func Offset: 0x4c
	// Line 1315, Address: 0x1134dc, Func Offset: 0x6c
	// Line 1316, Address: 0x1134e8, Func Offset: 0x78
	// Line 1320, Address: 0x113500, Func Offset: 0x90
	// Line 1329, Address: 0x11353c, Func Offset: 0xcc
	// Line 1331, Address: 0x11357c, Func Offset: 0x10c
	// Line 1332, Address: 0x113588, Func Offset: 0x118
	// Line 1336, Address: 0x113590, Func Offset: 0x120
	// Line 1337, Address: 0x1135a0, Func Offset: 0x130
	// Line 1339, Address: 0x1135a8, Func Offset: 0x138
	// Line 1341, Address: 0x1135b8, Func Offset: 0x148
	// Line 1345, Address: 0x1135d8, Func Offset: 0x168
	// Line 1348, Address: 0x113634, Func Offset: 0x1c4
	// Line 1349, Address: 0x11363c, Func Offset: 0x1cc
	// Line 1350, Address: 0x113640, Func Offset: 0x1d0
	// Line 1352, Address: 0x113648, Func Offset: 0x1d8
	// Line 1356, Address: 0x113654, Func Offset: 0x1e4
	// Line 1365, Address: 0x113668, Func Offset: 0x1f8
	// Line 1366, Address: 0x1136a8, Func Offset: 0x238
	// Line 1367, Address: 0x1136b0, Func Offset: 0x240
	// Line 1368, Address: 0x1136d8, Func Offset: 0x268
	// Line 1369, Address: 0x1136e0, Func Offset: 0x270
	// Line 1370, Address: 0x113708, Func Offset: 0x298
	// Line 1371, Address: 0x113710, Func Offset: 0x2a0
	// Line 1372, Address: 0x113718, Func Offset: 0x2a8
	// Line 1376, Address: 0x113720, Func Offset: 0x2b0
	// Line 1378, Address: 0x113728, Func Offset: 0x2b8
	// Line 1382, Address: 0x113748, Func Offset: 0x2d8
	// Line 1385, Address: 0x1137a8, Func Offset: 0x338
	// Line 1386, Address: 0x1137b0, Func Offset: 0x340
	// Line 1387, Address: 0x1137bc, Func Offset: 0x34c
	// Line 1389, Address: 0x1137c4, Func Offset: 0x354
	// Line 1390, Address: 0x1137d0, Func Offset: 0x360
	// Line 1427, Address: 0x1137d4, Func Offset: 0x364
	// Line 1428, Address: 0x1137e8, Func Offset: 0x378
	// Line 1429, Address: 0x1137f8, Func Offset: 0x388
	// Line 1430, Address: 0x113804, Func Offset: 0x394
	// Line 1431, Address: 0x113814, Func Offset: 0x3a4
	// Line 1433, Address: 0x113824, Func Offset: 0x3b4
	// Line 1440, Address: 0x11382c, Func Offset: 0x3bc
	// Line 1441, Address: 0x113840, Func Offset: 0x3d0
	// Line 1442, Address: 0x113850, Func Offset: 0x3e0
	// Line 1443, Address: 0x11385c, Func Offset: 0x3ec
	// Line 1444, Address: 0x11386c, Func Offset: 0x3fc
	// Line 1446, Address: 0x11387c, Func Offset: 0x40c
	// Line 1453, Address: 0x113884, Func Offset: 0x414
	// Line 1454, Address: 0x113898, Func Offset: 0x428
	// Line 1455, Address: 0x1138a8, Func Offset: 0x438
	// Line 1456, Address: 0x1138b4, Func Offset: 0x444
	// Line 1457, Address: 0x1138c4, Func Offset: 0x454
	// Line 1459, Address: 0x1138d4, Func Offset: 0x464
	// Line 1467, Address: 0x1138dc, Func Offset: 0x46c
	// Line 1468, Address: 0x1138f0, Func Offset: 0x480
	// Line 1469, Address: 0x113900, Func Offset: 0x490
	// Line 1470, Address: 0x11390c, Func Offset: 0x49c
	// Line 1471, Address: 0x11391c, Func Offset: 0x4ac
	// Line 1473, Address: 0x11392c, Func Offset: 0x4bc
	// Line 1482, Address: 0x113934, Func Offset: 0x4c4
	// Line 1483, Address: 0x113944, Func Offset: 0x4d4
	// Line 1492, Address: 0x1139d0, Func Offset: 0x560
	// Line 1493, Address: 0x1139f0, Func Offset: 0x580
	// Line 1495, Address: 0x113a18, Func Offset: 0x5a8
	// Line 1503, Address: 0x113a20, Func Offset: 0x5b0
	// Line 1505, Address: 0x113a48, Func Offset: 0x5d8
	// Line 1520, Address: 0x113a50, Func Offset: 0x5e0
	// Line 1521, Address: 0x113a70, Func Offset: 0x600
	// Line 1523, Address: 0x113a98, Func Offset: 0x628
	// Line 1531, Address: 0x113aa0, Func Offset: 0x630
	// Line 1533, Address: 0x113ac8, Func Offset: 0x658
	// Line 1545, Address: 0x113ad0, Func Offset: 0x660
	// Line 1546, Address: 0x113af0, Func Offset: 0x680
	// Line 1547, Address: 0x113b04, Func Offset: 0x694
	// Line 1553, Address: 0x113b0c, Func Offset: 0x69c
	// Line 1567, Address: 0x113b20, Func Offset: 0x6b0
	// Line 1569, Address: 0x113b7c, Func Offset: 0x70c
	// Line 1570, Address: 0x113b90, Func Offset: 0x720
	// Line 1571, Address: 0x113ba0, Func Offset: 0x730
	// Line 1598, Address: 0x113bb0, Func Offset: 0x740
	// Line 1605, Address: 0x113be0, Func Offset: 0x770
	// Line 1611, Address: 0x113bf0, Func Offset: 0x780
	// Line 1613, Address: 0x113c0c, Func Offset: 0x79c
	// Line 1621, Address: 0x113c88, Func Offset: 0x818
	// Line 1623, Address: 0x113cac, Func Offset: 0x83c
	// Line 1624, Address: 0x113cbc, Func Offset: 0x84c
	// Line 1625, Address: 0x113cc8, Func Offset: 0x858
	// Line 1627, Address: 0x113cd8, Func Offset: 0x868
	// Line 1628, Address: 0x113cf8, Func Offset: 0x888
	// Line 1631, Address: 0x113cfc, Func Offset: 0x88c
	// Line 1634, Address: 0x113d04, Func Offset: 0x894
	// Line 1639, Address: 0x113d70, Func Offset: 0x900
	// Line 1641, Address: 0x113d94, Func Offset: 0x924
	// Line 1642, Address: 0x113da4, Func Offset: 0x934
	// Line 1643, Address: 0x113db0, Func Offset: 0x940
	// Line 1645, Address: 0x113dc0, Func Offset: 0x950
	// Line 1646, Address: 0x113de0, Func Offset: 0x970
	// Line 1649, Address: 0x113de4, Func Offset: 0x974
	// Line 1652, Address: 0x113dec, Func Offset: 0x97c
	// Line 1657, Address: 0x113e58, Func Offset: 0x9e8
	// Line 1659, Address: 0x113e7c, Func Offset: 0xa0c
	// Line 1660, Address: 0x113e8c, Func Offset: 0xa1c
	// Line 1661, Address: 0x113e98, Func Offset: 0xa28
	// Line 1663, Address: 0x113ea8, Func Offset: 0xa38
	// Line 1664, Address: 0x113ec8, Func Offset: 0xa58
	// Line 1667, Address: 0x113ecc, Func Offset: 0xa5c
	// Line 1677, Address: 0x113ed4, Func Offset: 0xa64
	// Line 1678, Address: 0x113f00, Func Offset: 0xa90
	// Line 1682, Address: 0x113f5c, Func Offset: 0xaec
	// Line 1684, Address: 0x113f80, Func Offset: 0xb10
	// Line 1685, Address: 0x113f90, Func Offset: 0xb20
	// Line 1686, Address: 0x113f9c, Func Offset: 0xb2c
	// Line 1688, Address: 0x113fac, Func Offset: 0xb3c
	// Line 1689, Address: 0x113fd0, Func Offset: 0xb60
	// Line 1692, Address: 0x113fd4, Func Offset: 0xb64
	// Line 1704, Address: 0x113fdc, Func Offset: 0xb6c
	// Line 1746, Address: 0x11400c, Func Offset: 0xb9c
	// Line 1750, Address: 0x114068, Func Offset: 0xbf8
	// Line 1752, Address: 0x11408c, Func Offset: 0xc1c
	// Line 1753, Address: 0x11409c, Func Offset: 0xc2c
	// Line 1754, Address: 0x1140a8, Func Offset: 0xc38
	// Line 1756, Address: 0x1140b8, Func Offset: 0xc48
	// Line 1759, Address: 0x1140c4, Func Offset: 0xc54
	// Line 1769, Address: 0x1140cc, Func Offset: 0xc5c
	// Line 1779, Address: 0x1140fc, Func Offset: 0xc8c
	// Line 1784, Address: 0x114138, Func Offset: 0xcc8
	// Line 1785, Address: 0x11413c, Func Offset: 0xccc
	// Line 1787, Address: 0x114144, Func Offset: 0xcd4
	// Line 1790, Address: 0x114150, Func Offset: 0xce0
	// Line 1796, Address: 0x11415c, Func Offset: 0xcec
	// Line 1807, Address: 0x114178, Func Offset: 0xd08
	// Line 1812, Address: 0x1141e4, Func Offset: 0xd74
	// Line 1814, Address: 0x114208, Func Offset: 0xd98
	// Line 1815, Address: 0x114218, Func Offset: 0xda8
	// Line 1816, Address: 0x114224, Func Offset: 0xdb4
	// Line 1818, Address: 0x114234, Func Offset: 0xdc4
	// Line 1821, Address: 0x11423c, Func Offset: 0xdcc
	// Line 1828, Address: 0x114244, Func Offset: 0xdd4
	// Line 1829, Address: 0x114270, Func Offset: 0xe00
	// Line 1833, Address: 0x1142cc, Func Offset: 0xe5c
	// Line 1835, Address: 0x1142f0, Func Offset: 0xe80
	// Line 1836, Address: 0x114300, Func Offset: 0xe90
	// Line 1837, Address: 0x11430c, Func Offset: 0xe9c
	// Line 1839, Address: 0x11431c, Func Offset: 0xeac
	// Line 1840, Address: 0x114340, Func Offset: 0xed0
	// Line 1843, Address: 0x114344, Func Offset: 0xed4
	// Line 1851, Address: 0x11434c, Func Offset: 0xedc
	// Line 1861, Address: 0x11437c, Func Offset: 0xf0c
	// Line 1866, Address: 0x1143b8, Func Offset: 0xf48
	// Line 1867, Address: 0x1143bc, Func Offset: 0xf4c
	// Line 1869, Address: 0x1143c4, Func Offset: 0xf54
	// Line 1872, Address: 0x1143d0, Func Offset: 0xf60
	// Line 1879, Address: 0x1143dc, Func Offset: 0xf6c
	// Line 1890, Address: 0x1143f8, Func Offset: 0xf88
	// Line 1895, Address: 0x114464, Func Offset: 0xff4
	// Line 1897, Address: 0x114488, Func Offset: 0x1018
	// Line 1898, Address: 0x114498, Func Offset: 0x1028
	// Line 1899, Address: 0x1144a4, Func Offset: 0x1034
	// Line 1901, Address: 0x1144b4, Func Offset: 0x1044
	// Line 1904, Address: 0x1144bc, Func Offset: 0x104c
	// Line 1911, Address: 0x1144c4, Func Offset: 0x1054
	// Line 1912, Address: 0x1144f0, Func Offset: 0x1080
	// Line 1919, Address: 0x11454c, Func Offset: 0x10dc
	// Line 1921, Address: 0x114570, Func Offset: 0x1100
	// Line 1922, Address: 0x114580, Func Offset: 0x1110
	// Line 1923, Address: 0x11458c, Func Offset: 0x111c
	// Line 1925, Address: 0x11459c, Func Offset: 0x112c
	// Line 1926, Address: 0x1145c0, Func Offset: 0x1150
	// Line 1929, Address: 0x1145c4, Func Offset: 0x1154
	// Line 1943, Address: 0x1145cc, Func Offset: 0x115c
	// Line 1947, Address: 0x1145d8, Func Offset: 0x1168
	// Line 1949, Address: 0x114608, Func Offset: 0x1198
	// Line 1950, Address: 0x11462c, Func Offset: 0x11bc
	// Line 1951, Address: 0x11463c, Func Offset: 0x11cc
	// Line 1952, Address: 0x114648, Func Offset: 0x11d8
	// Line 1954, Address: 0x114658, Func Offset: 0x11e8
	// Line 1966, Address: 0x114660, Func Offset: 0x11f0
	// Line 1967, Address: 0x114684, Func Offset: 0x1214
	// Line 1968, Address: 0x114694, Func Offset: 0x1224
	// Line 1969, Address: 0x1146a0, Func Offset: 0x1230
	// Line 1971, Address: 0x1146b0, Func Offset: 0x1240
	// Line 1976, Address: 0x1146b8, Func Offset: 0x1248
	// Line 1977, Address: 0x1146dc, Func Offset: 0x126c
	// Line 1978, Address: 0x1146ec, Func Offset: 0x127c
	// Line 1979, Address: 0x1146f8, Func Offset: 0x1288
	// Line 1981, Address: 0x114708, Func Offset: 0x1298
	// Line 1987, Address: 0x114710, Func Offset: 0x12a0
	// Line 1988, Address: 0x114724, Func Offset: 0x12b4
	// Line 1989, Address: 0x114730, Func Offset: 0x12c0
	// Line 1990, Address: 0x114740, Func Offset: 0x12d0
	// Line 1995, Address: 0x114750, Func Offset: 0x12e0
	// Line 1996, Address: 0x114758, Func Offset: 0x12e8
	// Line 1997, Address: 0x114764, Func Offset: 0x12f4
	// Line 1998, Address: 0x114778, Func Offset: 0x1308
	// Line 2003, Address: 0x114784, Func Offset: 0x1314
	// Line 2012, Address: 0x11478c, Func Offset: 0x131c
	// Line 2014, Address: 0x1147a8, Func Offset: 0x1338
	// Line 2018, Address: 0x1147bc, Func Offset: 0x134c
	// Line 2019, Address: 0x1147ec, Func Offset: 0x137c
	// Line 2023, Address: 0x1147f8, Func Offset: 0x1388
	// Line 2024, Address: 0x11480c, Func Offset: 0x139c
	// Line 2025, Address: 0x11481c, Func Offset: 0x13ac
	// Line 2026, Address: 0x114828, Func Offset: 0x13b8
	// Line 2028, Address: 0x114838, Func Offset: 0x13c8
	// Line 2034, Address: 0x114840, Func Offset: 0x13d0
	// Line 2035, Address: 0x114854, Func Offset: 0x13e4
	// Line 2036, Address: 0x114864, Func Offset: 0x13f4
	// Line 2037, Address: 0x114870, Func Offset: 0x1400
	// Line 2045, Address: 0x114880, Func Offset: 0x1410
	// Func End, Address: 0x1148a0, Func Offset: 0x1430
}

// 
// Start address: 0x1148a0
void SubCharacter::PlayerUpdateStatusUpper2D()
{
	PAD_3D* p3d;
	PAD_INFO* p_pre;
	PAD_INFO* p;
	shPlayerWork* w;
	// Line 2048, Address: 0x1148a0, Func Offset: 0
	// Line 2051, Address: 0x1148b8, Func Offset: 0x18
	// Line 2052, Address: 0x1148c0, Func Offset: 0x20
	// Line 2061, Address: 0x1148c8, Func Offset: 0x28
	// Line 2064, Address: 0x114914, Func Offset: 0x74
	// Line 2065, Address: 0x114920, Func Offset: 0x80
	// Line 2066, Address: 0x11492c, Func Offset: 0x8c
	// Line 2067, Address: 0x11493c, Func Offset: 0x9c
	// Line 2069, Address: 0x11494c, Func Offset: 0xac
	// Line 2090, Address: 0x114954, Func Offset: 0xb4
	// Line 2091, Address: 0x114960, Func Offset: 0xc0
	// Line 2092, Address: 0x11496c, Func Offset: 0xcc
	// Line 2093, Address: 0x11497c, Func Offset: 0xdc
	// Line 2095, Address: 0x11498c, Func Offset: 0xec
	// Line 2098, Address: 0x114994, Func Offset: 0xf4
	// Line 2099, Address: 0x1149a0, Func Offset: 0x100
	// Line 2100, Address: 0x1149ac, Func Offset: 0x10c
	// Line 2101, Address: 0x1149bc, Func Offset: 0x11c
	// Line 2103, Address: 0x1149cc, Func Offset: 0x12c
	// Line 2106, Address: 0x1149d4, Func Offset: 0x134
	// Line 2107, Address: 0x1149e0, Func Offset: 0x140
	// Line 2108, Address: 0x1149ec, Func Offset: 0x14c
	// Line 2110, Address: 0x1149fc, Func Offset: 0x15c
	// Line 2113, Address: 0x114a04, Func Offset: 0x164
	// Line 2114, Address: 0x114a10, Func Offset: 0x170
	// Line 2115, Address: 0x114a1c, Func Offset: 0x17c
	// Line 2117, Address: 0x114a2c, Func Offset: 0x18c
	// Line 2129, Address: 0x114a34, Func Offset: 0x194
	// Line 2138, Address: 0x114a40, Func Offset: 0x1a0
	// Line 2139, Address: 0x114a54, Func Offset: 0x1b4
	// Line 2143, Address: 0x114a60, Func Offset: 0x1c0
	// Line 2144, Address: 0x114a74, Func Offset: 0x1d4
	// Line 2145, Address: 0x114a84, Func Offset: 0x1e4
	// Line 2146, Address: 0x114a90, Func Offset: 0x1f0
	// Line 2147, Address: 0x114aa0, Func Offset: 0x200
	// Line 2150, Address: 0x114ab0, Func Offset: 0x210
	// Line 2151, Address: 0x114ac4, Func Offset: 0x224
	// Line 2154, Address: 0x114ae8, Func Offset: 0x248
	// Line 2160, Address: 0x114b08, Func Offset: 0x268
	// Line 2162, Address: 0x114b10, Func Offset: 0x270
	// Line 2163, Address: 0x114b1c, Func Offset: 0x27c
	// Line 2169, Address: 0x114b24, Func Offset: 0x284
	// Line 2170, Address: 0x114b30, Func Offset: 0x290
	// Line 2171, Address: 0x114b4c, Func Offset: 0x2ac
	// Line 2173, Address: 0x114b58, Func Offset: 0x2b8
	// Line 2174, Address: 0x114b74, Func Offset: 0x2d4
	// Line 2177, Address: 0x114b80, Func Offset: 0x2e0
	// Line 2183, Address: 0x114b8c, Func Offset: 0x2ec
	// Line 2184, Address: 0x114bb4, Func Offset: 0x314
	// Line 2185, Address: 0x114bc4, Func Offset: 0x324
	// Line 2186, Address: 0x114bd4, Func Offset: 0x334
	// Line 2191, Address: 0x114be4, Func Offset: 0x344
	// Line 2192, Address: 0x114bf0, Func Offset: 0x350
	// Line 2193, Address: 0x114bf8, Func Offset: 0x358
	// Line 2194, Address: 0x114c00, Func Offset: 0x360
	// Line 2198, Address: 0x114c04, Func Offset: 0x364
	// Line 2205, Address: 0x114c0c, Func Offset: 0x36c
	// Line 2206, Address: 0x114c20, Func Offset: 0x380
	// Line 2207, Address: 0x114c30, Func Offset: 0x390
	// Line 2208, Address: 0x114c3c, Func Offset: 0x39c
	// Line 2209, Address: 0x114c4c, Func Offset: 0x3ac
	// Line 2210, Address: 0x114c5c, Func Offset: 0x3bc
	// Line 2212, Address: 0x114c6c, Func Offset: 0x3cc
	// Line 2214, Address: 0x114c74, Func Offset: 0x3d4
	// Line 2267, Address: 0x114c7c, Func Offset: 0x3dc
	// Line 2269, Address: 0x114d38, Func Offset: 0x498
	// Line 2270, Address: 0x114d48, Func Offset: 0x4a8
	// Line 2271, Address: 0x114d54, Func Offset: 0x4b4
	// Line 2272, Address: 0x114d64, Func Offset: 0x4c4
	// Line 2275, Address: 0x114d74, Func Offset: 0x4d4
	// Line 2277, Address: 0x114d7c, Func Offset: 0x4dc
	// Line 2278, Address: 0x114d90, Func Offset: 0x4f0
	// Line 2279, Address: 0x114da0, Func Offset: 0x500
	// Line 2280, Address: 0x114dac, Func Offset: 0x50c
	// Line 2283, Address: 0x114dbc, Func Offset: 0x51c
	// Line 2285, Address: 0x114dc4, Func Offset: 0x524
	// Line 2286, Address: 0x114dd4, Func Offset: 0x534
	// Line 2287, Address: 0x114de4, Func Offset: 0x544
	// Line 2288, Address: 0x114df0, Func Offset: 0x550
	// Line 2291, Address: 0x114e00, Func Offset: 0x560
	// Line 2293, Address: 0x114e08, Func Offset: 0x568
	// Line 2294, Address: 0x114e1c, Func Offset: 0x57c
	// Line 2295, Address: 0x114e2c, Func Offset: 0x58c
	// Line 2296, Address: 0x114e38, Func Offset: 0x598
	// Line 2299, Address: 0x114e48, Func Offset: 0x5a8
	// Line 2301, Address: 0x114e50, Func Offset: 0x5b0
	// Line 2302, Address: 0x114e5c, Func Offset: 0x5bc
	// Line 2303, Address: 0x114e70, Func Offset: 0x5d0
	// Line 2304, Address: 0x114e80, Func Offset: 0x5e0
	// Line 2305, Address: 0x114e8c, Func Offset: 0x5ec
	// Line 2309, Address: 0x114e9c, Func Offset: 0x5fc
	// Line 2311, Address: 0x114ea4, Func Offset: 0x604
	// Line 2312, Address: 0x114eb8, Func Offset: 0x618
	// Line 2313, Address: 0x114ec8, Func Offset: 0x628
	// Line 2314, Address: 0x114ed4, Func Offset: 0x634
	// Line 2315, Address: 0x114ee4, Func Offset: 0x644
	// Line 2316, Address: 0x114ef4, Func Offset: 0x654
	// Line 2319, Address: 0x114f04, Func Offset: 0x664
	// Line 2339, Address: 0x114f0c, Func Offset: 0x66c
	// Line 2340, Address: 0x114f20, Func Offset: 0x680
	// Line 2341, Address: 0x114f30, Func Offset: 0x690
	// Line 2342, Address: 0x114f3c, Func Offset: 0x69c
	// Line 2344, Address: 0x114f4c, Func Offset: 0x6ac
	// Line 2345, Address: 0x114f60, Func Offset: 0x6c0
	// Line 2349, Address: 0x114f70, Func Offset: 0x6d0
	// Line 2351, Address: 0x114f78, Func Offset: 0x6d8
	// Line 2352, Address: 0x114f8c, Func Offset: 0x6ec
	// Line 2353, Address: 0x114f9c, Func Offset: 0x6fc
	// Line 2354, Address: 0x114fa8, Func Offset: 0x708
	// Line 2356, Address: 0x114fb8, Func Offset: 0x718
	// Line 2357, Address: 0x114fcc, Func Offset: 0x72c
	// Line 2362, Address: 0x114fdc, Func Offset: 0x73c
	// Line 2390, Address: 0x114fe4, Func Offset: 0x744
	// Line 2391, Address: 0x114ff8, Func Offset: 0x758
	// Line 2392, Address: 0x115008, Func Offset: 0x768
	// Line 2393, Address: 0x115014, Func Offset: 0x774
	// Line 2395, Address: 0x115024, Func Offset: 0x784
	// Line 2396, Address: 0x115038, Func Offset: 0x798
	// Line 2400, Address: 0x115048, Func Offset: 0x7a8
	// Line 2402, Address: 0x115050, Func Offset: 0x7b0
	// Line 2403, Address: 0x115064, Func Offset: 0x7c4
	// Line 2404, Address: 0x115074, Func Offset: 0x7d4
	// Line 2405, Address: 0x115080, Func Offset: 0x7e0
	// Line 2407, Address: 0x115090, Func Offset: 0x7f0
	// Line 2408, Address: 0x1150a4, Func Offset: 0x804
	// Line 2412, Address: 0x1150b4, Func Offset: 0x814
	// Line 2414, Address: 0x1150bc, Func Offset: 0x81c
	// Line 2415, Address: 0x1150d0, Func Offset: 0x830
	// Line 2416, Address: 0x1150e0, Func Offset: 0x840
	// Line 2417, Address: 0x1150ec, Func Offset: 0x84c
	// Line 2419, Address: 0x1150fc, Func Offset: 0x85c
	// Line 2420, Address: 0x115110, Func Offset: 0x870
	// Line 2483, Address: 0x115120, Func Offset: 0x880
	// Func End, Address: 0x11513c, Func Offset: 0x89c
}

// 
// Start address: 0x115140
void PlayerUpdateStatusLower2nd2D()
{
	shPlayerWork* w;
	// Line 2486, Address: 0x115140, Func Offset: 0
	// Line 2487, Address: 0x11514c, Func Offset: 0xc
	// Line 2490, Address: 0x115154, Func Offset: 0x14
	// Line 2492, Address: 0x115194, Func Offset: 0x54
	// Line 2493, Address: 0x1151a8, Func Offset: 0x68
	// Line 2494, Address: 0x1151b8, Func Offset: 0x78
	// Line 2495, Address: 0x1151c4, Func Offset: 0x84
	// Line 2498, Address: 0x1151d4, Func Offset: 0x94
	// Line 2500, Address: 0x1151dc, Func Offset: 0x9c
	// Line 2501, Address: 0x1151f0, Func Offset: 0xb0
	// Line 2502, Address: 0x115200, Func Offset: 0xc0
	// Line 2503, Address: 0x11520c, Func Offset: 0xcc
	// Line 2504, Address: 0x11521c, Func Offset: 0xdc
	// Line 2507, Address: 0x11522c, Func Offset: 0xec
	// Line 2509, Address: 0x115234, Func Offset: 0xf4
	// Line 2510, Address: 0x115248, Func Offset: 0x108
	// Line 2512, Address: 0x115264, Func Offset: 0x124
	// Line 2513, Address: 0x115274, Func Offset: 0x134
	// Line 2515, Address: 0x115284, Func Offset: 0x144
	// Line 2519, Address: 0x11528c, Func Offset: 0x14c
	// Line 2520, Address: 0x1152a0, Func Offset: 0x160
	// Line 2521, Address: 0x1152b0, Func Offset: 0x170
	// Line 2522, Address: 0x1152bc, Func Offset: 0x17c
	// Line 2525, Address: 0x1152cc, Func Offset: 0x18c
	// Line 2526, Address: 0x1152dc, Func Offset: 0x19c
	// Line 2527, Address: 0x1152ec, Func Offset: 0x1ac
	// Line 2528, Address: 0x1152fc, Func Offset: 0x1bc
	// Line 2529, Address: 0x11530c, Func Offset: 0x1cc
	// Line 2530, Address: 0x11531c, Func Offset: 0x1dc
	// Line 2531, Address: 0x11532c, Func Offset: 0x1ec
	// Line 2532, Address: 0x11533c, Func Offset: 0x1fc
	// Line 2533, Address: 0x11534c, Func Offset: 0x20c
	// Line 2548, Address: 0x11535c, Func Offset: 0x21c
	// Line 2554, Address: 0x1153a4, Func Offset: 0x264
	// Line 2555, Address: 0x1153ac, Func Offset: 0x26c
	// Line 2557, Address: 0x1153b4, Func Offset: 0x274
	// Line 2560, Address: 0x1153b8, Func Offset: 0x278
	// Func End, Address: 0x1153cc, Func Offset: 0x28c
}

// 
// Start address: 0x1153d0
void SubCharacter::PlayerUpdatePosition2D()
{
	float cos_z;
	float cos_x;
	void(*upper_func)(SubCharacter*);
	void(*lower_func)(SubCharacter*);
	// Line 2564, Address: 0x1153d0, Func Offset: 0
	// Line 2616, Address: 0x1153e4, Func Offset: 0x14
	// Line 2617, Address: 0x115424, Func Offset: 0x54
	// Line 2619, Address: 0x115464, Func Offset: 0x94
	// Line 2621, Address: 0x11547c, Func Offset: 0xac
	// Line 2624, Address: 0x115484, Func Offset: 0xb4
	// Line 2626, Address: 0x1154a0, Func Offset: 0xd0
	// Line 2632, Address: 0x1154ac, Func Offset: 0xdc
	// Line 2633, Address: 0x1154bc, Func Offset: 0xec
	// Line 2649, Address: 0x1154d4, Func Offset: 0x104
	// Line 2652, Address: 0x1154fc, Func Offset: 0x12c
	// Line 2654, Address: 0x1155ac, Func Offset: 0x1dc
	// Line 2656, Address: 0x11565c, Func Offset: 0x28c
	// Line 2658, Address: 0x115664, Func Offset: 0x294
	// Line 2660, Address: 0x115674, Func Offset: 0x2a4
	// Line 2662, Address: 0x11571c, Func Offset: 0x34c
	// Line 2664, Address: 0x1157c4, Func Offset: 0x3f4
	// Line 2667, Address: 0x1157cc, Func Offset: 0x3fc
	// Line 2670, Address: 0x1157d8, Func Offset: 0x408
	// Line 2672, Address: 0x115880, Func Offset: 0x4b0
	// Line 2685, Address: 0x115928, Func Offset: 0x558
	// Line 2692, Address: 0x115930, Func Offset: 0x560
	// Line 2693, Address: 0x115944, Func Offset: 0x574
	// Line 2695, Address: 0x115954, Func Offset: 0x584
	// Line 2696, Address: 0x115964, Func Offset: 0x594
	// Line 2700, Address: 0x115974, Func Offset: 0x5a4
	// Line 2701, Address: 0x115980, Func Offset: 0x5b0
	// Line 2702, Address: 0x11598c, Func Offset: 0x5bc
	// Line 2705, Address: 0x115998, Func Offset: 0x5c8
	// Line 2706, Address: 0x1159b4, Func Offset: 0x5e4
	// Line 2707, Address: 0x1159c8, Func Offset: 0x5f8
	// Line 2741, Address: 0x1159dc, Func Offset: 0x60c
	// Func End, Address: 0x1159f4, Func Offset: 0x624
}

// 
// Start address: 0x115a00
void SubCharacter::PlayerCheckAttack2D()
{
	// Line 2749, Address: 0x115a00, Func Offset: 0
	// Line 2750, Address: 0x115a08, Func Offset: 0x8
	// Line 2751, Address: 0x115a10, Func Offset: 0x10
	// Func End, Address: 0x115a20, Func Offset: 0x20
}

// 
// Start address: 0x115a20
void SubCharacter::PlayerCheckControl2D()
{
	// Line 2763, Address: 0x115a20, Func Offset: 0
	// Line 2764, Address: 0x115a30, Func Offset: 0x10
	// Line 2765, Address: 0x115a38, Func Offset: 0x18
	// Line 2766, Address: 0x115a44, Func Offset: 0x24
	// Line 2767, Address: 0x115a50, Func Offset: 0x30
	// Line 2768, Address: 0x115a5c, Func Offset: 0x3c
	// Line 2773, Address: 0x115a68, Func Offset: 0x48
	// Func End, Address: 0x115a7c, Func Offset: 0x5c
}

