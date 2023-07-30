typedef struct SubCharacter;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _AnimeInfo;
typedef struct shPlayerWork;
typedef struct PAD_INFO;
typedef struct shClusterAnime;
typedef struct PAD_3D;
typedef struct shSkelton;
typedef struct SubCharacterDisp;
typedef struct shBattleFight;
typedef struct Playing_Info;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct Pad_KeyConfig;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct _anon0;
typedef struct _USXY;
typedef union _anon1;
typedef struct _CL_VHIT_RESULT;
typedef union _anon2;
typedef struct _SXY;
typedef struct _IXY;
typedef struct shAnime3d;
typedef struct PAD_2D;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct _anon3;

typedef void(*type_1)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);
typedef void(*type_9)(SubCharacter*);
typedef void(*type_14)(SubCharacter*);
typedef void(*type_23)(SubCharacter*);
typedef void(*type_25)(SubCharacter*);

typedef unsigned char type_0[14];
typedef void(*type_2)(SubCharacter*)[32];
typedef PAD_INFO type_3[10];
typedef float type_4[2];
typedef float type_5[4][2];
typedef unsigned char type_7[69];
typedef unsigned int type_8[9];
typedef unsigned char type_10[4];
typedef float type_11[4];
typedef unsigned char type_12[4];
typedef unsigned char type_13[4];
typedef void(*type_15)(SubCharacter*)[32];
typedef float type_16[7];
typedef unsigned char type_17[2];
typedef void* type_18[3];
typedef unsigned char type_19[2];
typedef float type_20[24];
typedef unsigned char type_21[14];
typedef float type_22[4];
typedef short type_24[24];
typedef unsigned char type_26[97];
typedef float type_27[7];
typedef unsigned int type_28[32];
typedef float type_29[24];
typedef float type_30[7];
typedef unsigned int type_31[7];
typedef float type_32[24];
typedef float type_33[7];
typedef int type_34[6];
typedef unsigned char type_35[2];
typedef short type_36[24];
typedef unsigned char type_37[20];
typedef short type_38[24];
typedef float type_39[7];
typedef float type_40[24];
typedef unsigned int type_41[32];
typedef short type_42[24];
typedef float type_43[4];
typedef float type_44[4][4];
typedef float type_45[7];
typedef shAttackInfo type_46[66];

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

	void PlayerUpdateStatus3D();
	void PlayerUpdateStatusLower3D();
	void PlayerUpdateStatusUpper3D();
	void PlayerUpdatePosition3D();
	void PlayerCheckAttack3D();
	void PlayerCheckControl3D();
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

struct _USXY
{
	unsigned short x;
	unsigned short y;
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
	_anon0 rot_neck;
	_anon0 rot_arms;
	_anon0 rot_body_neck;
	_anon0 rot_body;
	float scale;
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
shPlayerWork sh2jms;
float dtf;
Playing_Info playing;
int dt;
void(*func_list_lower)(SubCharacter*)[32];
void(*func_list_upper)(SubCharacter*)[32];
Pad_KeyConfig key_config;

int PlayerCheckLturn180();
int PlayerCheckRturn180();
int PlayerCheckTurn180();
void lower_lround_3d_nata(SubCharacter* p, float* spd);
void lower_rround_3d_nata(SubCharacter* p, float* spd);
void lower_walk_3d_nata(SubCharacter* p);
void lower_back_3d_nata(SubCharacter* p);
void lower_lswalk_3d_nata(SubCharacter* p);
void lower_rswalk_3d_nata(SubCharacter* p);
void lower_stand_3d(SubCharacter* p);
void upper_stand_3d(SubCharacter* p);
void lower_relax_3d(SubCharacter* p);
void upper_relax_3d(SubCharacter* p);
void lower_alert_3d(SubCharacter* p);
void upper_alert_3d(SubCharacter* p);
void lower_tired_3d(SubCharacter* p);
void upper_tired_3d(SubCharacter* p);
void lower_ready_3d(SubCharacter* p);
void upper_ready_3d(SubCharacter* p);
void lower_readyoff_3d(SubCharacter* p);
void upper_readyoff_3d(SubCharacter* p);
void lower_lround_3d(SubCharacter* p);
void upper_lround_3d();
void lower_rround_3d(SubCharacter* p);
void upper_rround_3d();
void lower_walk_3d(SubCharacter* p);
void upper_walk_3d(SubCharacter* p);
void lower_back_3d(SubCharacter* p);
void upper_back_3d(SubCharacter* p);
void lower_lswalk_3d(SubCharacter* p);
void upper_lswalk_3d();
void lower_rswalk_3d(SubCharacter* p);
void upper_rswalk_3d();
void lower_run1_3d(SubCharacter* p);
void upper_run1_3d(SubCharacter* p);
void lower_run2_3d(SubCharacter* p);
void upper_run2_3d(SubCharacter* p);
void lower_run3_3d(SubCharacter* p);
void upper_run3_3d(SubCharacter* p);
void lower_lsrun_3d(SubCharacter* p);
void upper_lsrun_3d();
void lower_rsrun_3d(SubCharacter* p);
void upper_rsrun_3d();
void lower_lturn180_3d(SubCharacter* p);
void upper_lturn180_3d();
void lower_rturn180_3d(SubCharacter* p);
void upper_rturn180_3d();
void lower_jump_3d();
void upper_jump_3d();
void lower_guard_3d(SubCharacter* p);
void upper_guard_3d();
void lower_lstep_3d();
void upper_lstep_3d();
void lower_rstep_3d();
void upper_rstep_3d();
void lower_hold_3d(SubCharacter* p);
void upper_hold_3d(SubCharacter* p);
void lower_release_3d(SubCharacter* p);
void upper_release_3d(SubCharacter* p);
void lower_attack_3d(SubCharacter* p);
void upper_attack_3d(SubCharacter* p);
void lower_kick_3d(SubCharacter* p);
void upper_kick_3d(SubCharacter* p);
void lower_fall_3d(SubCharacter* p);
void upper_fall_3d(SubCharacter* p);
void lower_damage_3d(SubCharacter* p);
void upper_damage_3d(SubCharacter* p);
void lower_to_stand_3d(SubCharacter* p);
void upper_to_stand_3d(SubCharacter* p);
void lower_wall_f_3d(SubCharacter* p);
void upper_wall_f_3d(SubCharacter* p);
void lower_event_3d(SubCharacter* p);
void upper_event_3d(SubCharacter* p);
void PlayerUpdateStatus3D();
void PlayerUpdateStatusStand3D();
void PlayerUpdateStatusLower3D();
void PlayerUpdateStatusUpper3D();
void PlayerUpdatePosition3D();
void PlayerUpdateStatusLower2nd3D();
void PlayerCheckAttack3D();
void PlayerCheckControl3D();

// 
// Start address: 0x115a80
int PlayerCheckLturn180()
{
	PAD_3D* p3d;
	PAD_INFO* pad;
	// Line 88, Address: 0x115a80, Func Offset: 0
	// Line 90, Address: 0x115a88, Func Offset: 0x8
	// Line 91, Address: 0x115a94, Func Offset: 0x14
	// Line 92, Address: 0x115ab0, Func Offset: 0x30
	// Line 94, Address: 0x115abc, Func Offset: 0x3c
	// Line 95, Address: 0x115ad8, Func Offset: 0x58
	// Line 97, Address: 0x115ae0, Func Offset: 0x60
	// Line 98, Address: 0x115ae4, Func Offset: 0x64
	// Func End, Address: 0x115aec, Func Offset: 0x6c
}

// 
// Start address: 0x115af0
int PlayerCheckRturn180()
{
	PAD_3D* p3d;
	PAD_INFO* pad;
	// Line 108, Address: 0x115af0, Func Offset: 0
	// Line 110, Address: 0x115af8, Func Offset: 0x8
	// Line 111, Address: 0x115b04, Func Offset: 0x14
	// Line 112, Address: 0x115b20, Func Offset: 0x30
	// Line 114, Address: 0x115b2c, Func Offset: 0x3c
	// Line 115, Address: 0x115b48, Func Offset: 0x58
	// Line 117, Address: 0x115b50, Func Offset: 0x60
	// Line 118, Address: 0x115b54, Func Offset: 0x64
	// Func End, Address: 0x115b5c, Func Offset: 0x6c
}

// 
// Start address: 0x115b60
int PlayerCheckTurn180()
{
	int r;
	int l;
	PAD_3D* p3d;
	// Line 126, Address: 0x115b60, Func Offset: 0
	// Line 127, Address: 0x115b68, Func Offset: 0x8
	// Line 130, Address: 0x115b70, Func Offset: 0x10
	// Line 131, Address: 0x115b7c, Func Offset: 0x1c
	// Line 133, Address: 0x115b84, Func Offset: 0x24
	// Line 135, Address: 0x115ba0, Func Offset: 0x40
	// Line 136, Address: 0x115bc4, Func Offset: 0x64
	// Line 137, Address: 0x115bd0, Func Offset: 0x70
	// Line 139, Address: 0x115bdc, Func Offset: 0x7c
	// Line 143, Address: 0x115bf8, Func Offset: 0x98
	// Func End, Address: 0x115c08, Func Offset: 0xa8
}

// 
// Start address: 0x115c10
void lower_lround_3d_nata(SubCharacter* p, float* spd)
{
	// Line 149, Address: 0x115c10, Func Offset: 0
	// Line 151, Address: 0x115c20, Func Offset: 0x10
	// Line 154, Address: 0x115c44, Func Offset: 0x34
	// Line 158, Address: 0x115c50, Func Offset: 0x40
	// Line 160, Address: 0x115c58, Func Offset: 0x48
	// Line 163, Address: 0x115c60, Func Offset: 0x50
	// Line 164, Address: 0x115c74, Func Offset: 0x64
	// Line 165, Address: 0x115c88, Func Offset: 0x78
	// Func End, Address: 0x115c9c, Func Offset: 0x8c
}

// 
// Start address: 0x115ca0
void lower_rround_3d_nata(SubCharacter* p, float* spd)
{
	// Line 168, Address: 0x115ca0, Func Offset: 0
	// Line 170, Address: 0x115cb0, Func Offset: 0x10
	// Line 173, Address: 0x115cd4, Func Offset: 0x34
	// Line 177, Address: 0x115ce0, Func Offset: 0x40
	// Line 179, Address: 0x115ce8, Func Offset: 0x48
	// Line 182, Address: 0x115cf0, Func Offset: 0x50
	// Line 183, Address: 0x115d04, Func Offset: 0x64
	// Line 184, Address: 0x115d18, Func Offset: 0x78
	// Func End, Address: 0x115d2c, Func Offset: 0x8c
}

// 
// Start address: 0x115d30
void lower_walk_3d_nata(SubCharacter* p)
{
	short motion_spd_tbl[24];
	float move_spd_tbl[24];
	short frame;
	// Line 187, Address: 0x115d30, Func Offset: 0
	// Line 190, Address: 0x115d44, Func Offset: 0x14
	// Line 247, Address: 0x115d80, Func Offset: 0x50
	// Line 301, Address: 0x115da4, Func Offset: 0x74
	// Line 315, Address: 0x115db8, Func Offset: 0x88
	// Line 316, Address: 0x115dc8, Func Offset: 0x98
	// Line 319, Address: 0x115e04, Func Offset: 0xd4
	// Line 320, Address: 0x115e24, Func Offset: 0xf4
	// Line 322, Address: 0x115e38, Func Offset: 0x108
	// Func End, Address: 0x115e50, Func Offset: 0x120
}

// 
// Start address: 0x115e50
void lower_back_3d_nata(SubCharacter* p)
{
	short motion_spd_tbl[24];
	float move_spd_tbl[24];
	short frame;
	// Line 325, Address: 0x115e50, Func Offset: 0
	// Line 328, Address: 0x115e64, Func Offset: 0x14
	// Line 380, Address: 0x115ea0, Func Offset: 0x50
	// Line 408, Address: 0x115ec4, Func Offset: 0x74
	// Line 422, Address: 0x115ed8, Func Offset: 0x88
	// Line 423, Address: 0x115ee8, Func Offset: 0x98
	// Line 426, Address: 0x115f24, Func Offset: 0xd4
	// Line 427, Address: 0x115f44, Func Offset: 0xf4
	// Line 428, Address: 0x115f58, Func Offset: 0x108
	// Func End, Address: 0x115f70, Func Offset: 0x120
}

// 
// Start address: 0x115f70
void lower_lswalk_3d_nata(SubCharacter* p)
{
	short motion_spd_tbl[24];
	float move_spd_tbl[24];
	short frame;
	// Line 431, Address: 0x115f70, Func Offset: 0
	// Line 434, Address: 0x115f84, Func Offset: 0x14
	// Line 486, Address: 0x115fc0, Func Offset: 0x50
	// Line 514, Address: 0x115fe4, Func Offset: 0x74
	// Line 529, Address: 0x115ff8, Func Offset: 0x88
	// Line 530, Address: 0x116008, Func Offset: 0x98
	// Line 536, Address: 0x116044, Func Offset: 0xd4
	// Line 537, Address: 0x116064, Func Offset: 0xf4
	// Line 538, Address: 0x116078, Func Offset: 0x108
	// Func End, Address: 0x116090, Func Offset: 0x120
}

// 
// Start address: 0x116090
void lower_rswalk_3d_nata(SubCharacter* p)
{
	short motion_spd_tbl[24];
	float move_spd_tbl[24];
	short frame;
	// Line 541, Address: 0x116090, Func Offset: 0
	// Line 544, Address: 0x1160a4, Func Offset: 0x14
	// Line 596, Address: 0x1160e0, Func Offset: 0x50
	// Line 650, Address: 0x116104, Func Offset: 0x74
	// Line 664, Address: 0x116118, Func Offset: 0x88
	// Line 665, Address: 0x116128, Func Offset: 0x98
	// Line 668, Address: 0x116164, Func Offset: 0xd4
	// Line 669, Address: 0x116184, Func Offset: 0xf4
	// Line 673, Address: 0x116198, Func Offset: 0x108
	// Func End, Address: 0x1161b0, Func Offset: 0x120
}

// 
// Start address: 0x1161b0
void lower_stand_3d(SubCharacter* p)
{
	// Line 681, Address: 0x1161b0, Func Offset: 0
	// Line 682, Address: 0x1161b8, Func Offset: 0x8
	// Line 683, Address: 0x1161c0, Func Offset: 0x10
	// Func End, Address: 0x1161d0, Func Offset: 0x20
}

// 
// Start address: 0x1161d0
void upper_stand_3d(SubCharacter* p)
{
	// Line 685, Address: 0x1161d0, Func Offset: 0
	// Line 686, Address: 0x1161d8, Func Offset: 0x8
	// Line 687, Address: 0x1161e0, Func Offset: 0x10
	// Func End, Address: 0x1161f0, Func Offset: 0x20
}

// 
// Start address: 0x1161f0
void lower_relax_3d(SubCharacter* p)
{
	// Line 690, Address: 0x1161f0, Func Offset: 0
	// Line 691, Address: 0x1161f8, Func Offset: 0x8
	// Line 692, Address: 0x116200, Func Offset: 0x10
	// Func End, Address: 0x116210, Func Offset: 0x20
}

// 
// Start address: 0x116210
void upper_relax_3d(SubCharacter* p)
{
	// Line 694, Address: 0x116210, Func Offset: 0
	// Line 695, Address: 0x116218, Func Offset: 0x8
	// Line 696, Address: 0x116220, Func Offset: 0x10
	// Func End, Address: 0x116230, Func Offset: 0x20
}

// 
// Start address: 0x116230
void lower_alert_3d(SubCharacter* p)
{
	// Line 699, Address: 0x116230, Func Offset: 0
	// Line 700, Address: 0x116238, Func Offset: 0x8
	// Line 701, Address: 0x116240, Func Offset: 0x10
	// Func End, Address: 0x116250, Func Offset: 0x20
}

// 
// Start address: 0x116250
void upper_alert_3d(SubCharacter* p)
{
	// Line 703, Address: 0x116250, Func Offset: 0
	// Line 704, Address: 0x116258, Func Offset: 0x8
	// Line 705, Address: 0x116260, Func Offset: 0x10
	// Func End, Address: 0x116270, Func Offset: 0x20
}

// 
// Start address: 0x116270
void lower_tired_3d(SubCharacter* p)
{
	// Line 708, Address: 0x116270, Func Offset: 0
	// Line 709, Address: 0x116278, Func Offset: 0x8
	// Line 710, Address: 0x116280, Func Offset: 0x10
	// Func End, Address: 0x116290, Func Offset: 0x20
}

// 
// Start address: 0x116290
void upper_tired_3d(SubCharacter* p)
{
	// Line 712, Address: 0x116290, Func Offset: 0
	// Line 713, Address: 0x116298, Func Offset: 0x8
	// Line 714, Address: 0x1162a0, Func Offset: 0x10
	// Func End, Address: 0x1162b0, Func Offset: 0x20
}

// 
// Start address: 0x1162b0
void lower_ready_3d(SubCharacter* p)
{
	// Line 717, Address: 0x1162b0, Func Offset: 0
	// Line 718, Address: 0x1162b8, Func Offset: 0x8
	// Line 719, Address: 0x1162c0, Func Offset: 0x10
	// Func End, Address: 0x1162d0, Func Offset: 0x20
}

// 
// Start address: 0x1162d0
void upper_ready_3d(SubCharacter* p)
{
	// Line 721, Address: 0x1162d0, Func Offset: 0
	// Line 722, Address: 0x1162d8, Func Offset: 0x8
	// Line 723, Address: 0x1162e0, Func Offset: 0x10
	// Func End, Address: 0x1162f0, Func Offset: 0x20
}

// 
// Start address: 0x1162f0
void lower_readyoff_3d(SubCharacter* p)
{
	// Line 726, Address: 0x1162f0, Func Offset: 0
	// Line 727, Address: 0x1162f8, Func Offset: 0x8
	// Line 728, Address: 0x116300, Func Offset: 0x10
	// Func End, Address: 0x116310, Func Offset: 0x20
}

// 
// Start address: 0x116310
void upper_readyoff_3d(SubCharacter* p)
{
	// Line 730, Address: 0x116310, Func Offset: 0
	// Line 731, Address: 0x116318, Func Offset: 0x8
	// Line 732, Address: 0x116320, Func Offset: 0x10
	// Func End, Address: 0x116330, Func Offset: 0x20
}

// 
// Start address: 0x116330
void lower_lround_3d(SubCharacter* p)
{
	float spd;
	// Line 735, Address: 0x116330, Func Offset: 0
	// Line 738, Address: 0x116340, Func Offset: 0x10
	// Line 739, Address: 0x116354, Func Offset: 0x24
	// Line 740, Address: 0x116360, Func Offset: 0x30
	// Line 742, Address: 0x116368, Func Offset: 0x38
	// Line 745, Address: 0x11638c, Func Offset: 0x5c
	// Line 749, Address: 0x1163a8, Func Offset: 0x78
	// Line 751, Address: 0x1163b0, Func Offset: 0x80
	// Line 754, Address: 0x1163bc, Func Offset: 0x8c
	// Line 755, Address: 0x1163cc, Func Offset: 0x9c
	// Line 759, Address: 0x1163e0, Func Offset: 0xb0
	// Line 762, Address: 0x1163ec, Func Offset: 0xbc
	// Line 764, Address: 0x116480, Func Offset: 0x150
	// Func End, Address: 0x116494, Func Offset: 0x164
}

// 
// Start address: 0x1164a0
void upper_lround_3d()
{
	// Line 767, Address: 0x1164a0, Func Offset: 0
	// Func End, Address: 0x1164a8, Func Offset: 0x8
}

// 
// Start address: 0x1164b0
void lower_rround_3d(SubCharacter* p)
{
	float spd;
	// Line 770, Address: 0x1164b0, Func Offset: 0
	// Line 773, Address: 0x1164c0, Func Offset: 0x10
	// Line 774, Address: 0x1164d4, Func Offset: 0x24
	// Line 775, Address: 0x1164e0, Func Offset: 0x30
	// Line 777, Address: 0x1164e8, Func Offset: 0x38
	// Line 780, Address: 0x11650c, Func Offset: 0x5c
	// Line 784, Address: 0x116528, Func Offset: 0x78
	// Line 786, Address: 0x116530, Func Offset: 0x80
	// Line 789, Address: 0x11653c, Func Offset: 0x8c
	// Line 790, Address: 0x11654c, Func Offset: 0x9c
	// Line 794, Address: 0x116560, Func Offset: 0xb0
	// Line 797, Address: 0x11656c, Func Offset: 0xbc
	// Line 799, Address: 0x116600, Func Offset: 0x150
	// Func End, Address: 0x116614, Func Offset: 0x164
}

// 
// Start address: 0x116620
void upper_rround_3d()
{
	// Line 802, Address: 0x116620, Func Offset: 0
	// Func End, Address: 0x116628, Func Offset: 0x8
}

// 
// Start address: 0x116630
void lower_walk_3d(SubCharacter* p)
{
	float rot_tmp;
	short ana_spd;
	float lstickY_tmp;
	// Line 805, Address: 0x116630, Func Offset: 0
	// Line 811, Address: 0x116648, Func Offset: 0x18
	// Line 815, Address: 0x11664c, Func Offset: 0x1c
	// Line 817, Address: 0x116660, Func Offset: 0x30
	// Line 824, Address: 0x116670, Func Offset: 0x40
	// Line 825, Address: 0x116684, Func Offset: 0x54
	// Line 827, Address: 0x116690, Func Offset: 0x60
	// Line 828, Address: 0x116698, Func Offset: 0x68
	// Line 830, Address: 0x1166bc, Func Offset: 0x8c
	// Line 832, Address: 0x1166e8, Func Offset: 0xb8
	// Line 834, Address: 0x116704, Func Offset: 0xd4
	// Line 835, Address: 0x116720, Func Offset: 0xf0
	// Line 837, Address: 0x116748, Func Offset: 0x118
	// Line 838, Address: 0x116764, Func Offset: 0x134
	// Line 839, Address: 0x116780, Func Offset: 0x150
	// Line 841, Address: 0x116788, Func Offset: 0x158
	// Line 842, Address: 0x1167a4, Func Offset: 0x174
	// Line 844, Address: 0x1167c8, Func Offset: 0x198
	// Line 847, Address: 0x1167d0, Func Offset: 0x1a0
	// Line 851, Address: 0x1167f0, Func Offset: 0x1c0
	// Line 865, Address: 0x116844, Func Offset: 0x214
	// Line 866, Address: 0x116864, Func Offset: 0x234
	// Line 867, Address: 0x116878, Func Offset: 0x248
	// Line 869, Address: 0x11689c, Func Offset: 0x26c
	// Line 870, Address: 0x1168b0, Func Offset: 0x280
	// Line 873, Address: 0x1168b8, Func Offset: 0x288
	// Line 881, Address: 0x116904, Func Offset: 0x2d4
	// Line 882, Address: 0x116934, Func Offset: 0x304
	// Line 883, Address: 0x11693c, Func Offset: 0x30c
	// Line 887, Address: 0x116944, Func Offset: 0x314
	// Line 889, Address: 0x116960, Func Offset: 0x330
	// Line 897, Address: 0x116994, Func Offset: 0x364
	// Line 898, Address: 0x1169b8, Func Offset: 0x388
	// Line 900, Address: 0x1169c0, Func Offset: 0x390
	// Line 907, Address: 0x1169c4, Func Offset: 0x394
	// Line 908, Address: 0x1169d4, Func Offset: 0x3a4
	// Line 909, Address: 0x1169e8, Func Offset: 0x3b8
	// Line 910, Address: 0x116a08, Func Offset: 0x3d8
	// Line 911, Address: 0x116a34, Func Offset: 0x404
	// Line 912, Address: 0x116a3c, Func Offset: 0x40c
	// Line 914, Address: 0x116a40, Func Offset: 0x410
	// Line 915, Address: 0x116a48, Func Offset: 0x418
	// Line 917, Address: 0x116a6c, Func Offset: 0x43c
	// Line 918, Address: 0x116a9c, Func Offset: 0x46c
	// Line 921, Address: 0x116aa4, Func Offset: 0x474
	// Line 931, Address: 0x116ae8, Func Offset: 0x4b8
	// Line 932, Address: 0x116afc, Func Offset: 0x4cc
	// Line 935, Address: 0x116b10, Func Offset: 0x4e0
	// Line 940, Address: 0x116b94, Func Offset: 0x564
	// Line 941, Address: 0x116b9c, Func Offset: 0x56c
	// Func End, Address: 0x116bb8, Func Offset: 0x588
}

// 
// Start address: 0x116bc0
void upper_walk_3d(SubCharacter* p)
{
	short ana_spd;
	// Line 943, Address: 0x116bc0, Func Offset: 0
	// Line 947, Address: 0x116bd0, Func Offset: 0x10
	// Line 948, Address: 0x116be4, Func Offset: 0x24
	// Line 954, Address: 0x116c00, Func Offset: 0x40
	// Line 964, Address: 0x116c50, Func Offset: 0x90
	// Func End, Address: 0x116c64, Func Offset: 0xa4
}

// 
// Start address: 0x116c70
void lower_back_3d(SubCharacter* p)
{
	int turn_way;
	float rot_tmp;
	short ana_spd;
	float lstickY_tmp;
	// Line 967, Address: 0x116c70, Func Offset: 0
	// Line 977, Address: 0x116c88, Func Offset: 0x18
	// Line 980, Address: 0x116c94, Func Offset: 0x24
	// Line 982, Address: 0x116ca8, Func Offset: 0x38
	// Line 988, Address: 0x116cb8, Func Offset: 0x48
	// Line 989, Address: 0x116ccc, Func Offset: 0x5c
	// Line 990, Address: 0x116cd8, Func Offset: 0x68
	// Line 991, Address: 0x116ce0, Func Offset: 0x70
	// Line 995, Address: 0x116d04, Func Offset: 0x94
	// Line 996, Address: 0x116d30, Func Offset: 0xc0
	// Line 998, Address: 0x116d4c, Func Offset: 0xdc
	// Line 999, Address: 0x116d68, Func Offset: 0xf8
	// Line 1000, Address: 0x116d80, Func Offset: 0x110
	// Line 1002, Address: 0x116d8c, Func Offset: 0x11c
	// Line 1003, Address: 0x116d94, Func Offset: 0x124
	// Line 1005, Address: 0x116db8, Func Offset: 0x148
	// Line 1006, Address: 0x116dd4, Func Offset: 0x164
	// Line 1007, Address: 0x116df0, Func Offset: 0x180
	// Line 1009, Address: 0x116df8, Func Offset: 0x188
	// Line 1010, Address: 0x116e14, Func Offset: 0x1a4
	// Line 1015, Address: 0x116e38, Func Offset: 0x1c8
	// Line 1018, Address: 0x116e40, Func Offset: 0x1d0
	// Line 1021, Address: 0x116e64, Func Offset: 0x1f4
	// Line 1035, Address: 0x116eb8, Func Offset: 0x248
	// Line 1037, Address: 0x116ec0, Func Offset: 0x250
	// Line 1038, Address: 0x116ed0, Func Offset: 0x260
	// Line 1040, Address: 0x116ef4, Func Offset: 0x284
	// Line 1041, Address: 0x116f08, Func Offset: 0x298
	// Line 1044, Address: 0x116f10, Func Offset: 0x2a0
	// Line 1051, Address: 0x116f50, Func Offset: 0x2e0
	// Line 1053, Address: 0x116f64, Func Offset: 0x2f4
	// Line 1058, Address: 0x116f98, Func Offset: 0x328
	// Line 1061, Address: 0x116fa8, Func Offset: 0x338
	// Line 1062, Address: 0x116fb8, Func Offset: 0x348
	// Line 1063, Address: 0x116fc0, Func Offset: 0x350
	// Line 1064, Address: 0x116fc8, Func Offset: 0x358
	// Line 1067, Address: 0x116fd4, Func Offset: 0x364
	// Line 1068, Address: 0x116fe8, Func Offset: 0x378
	// Line 1069, Address: 0x117008, Func Offset: 0x398
	// Line 1070, Address: 0x117030, Func Offset: 0x3c0
	// Line 1071, Address: 0x117038, Func Offset: 0x3c8
	// Line 1073, Address: 0x11703c, Func Offset: 0x3cc
	// Line 1074, Address: 0x117044, Func Offset: 0x3d4
	// Line 1076, Address: 0x117068, Func Offset: 0x3f8
	// Line 1077, Address: 0x117090, Func Offset: 0x420
	// Line 1080, Address: 0x117098, Func Offset: 0x428
	// Line 1090, Address: 0x1170d4, Func Offset: 0x464
	// Line 1091, Address: 0x1170e8, Func Offset: 0x478
	// Line 1094, Address: 0x1170fc, Func Offset: 0x48c
	// Line 1099, Address: 0x117180, Func Offset: 0x510
	// Line 1102, Address: 0x117188, Func Offset: 0x518
	// Func End, Address: 0x1171a4, Func Offset: 0x534
}

// 
// Start address: 0x1171b0
void upper_back_3d(SubCharacter* p)
{
	short ana_spd;
	// Line 1104, Address: 0x1171b0, Func Offset: 0
	// Line 1106, Address: 0x1171c4, Func Offset: 0x14
	// Line 1108, Address: 0x1171d0, Func Offset: 0x20
	// Line 1109, Address: 0x1171e4, Func Offset: 0x34
	// Line 1113, Address: 0x117208, Func Offset: 0x58
	// Line 1114, Address: 0x117218, Func Offset: 0x68
	// Line 1116, Address: 0x117228, Func Offset: 0x78
	// Line 1127, Address: 0x117230, Func Offset: 0x80
	// Line 1129, Address: 0x117284, Func Offset: 0xd4
	// Line 1140, Address: 0x117308, Func Offset: 0x158
	// Func End, Address: 0x117320, Func Offset: 0x170
}

// 
// Start address: 0x117320
void lower_lswalk_3d(SubCharacter* p)
{
	// Line 1143, Address: 0x117320, Func Offset: 0
	// Line 1145, Address: 0x117330, Func Offset: 0x10
	// Line 1146, Address: 0x117344, Func Offset: 0x24
	// Line 1147, Address: 0x11734c, Func Offset: 0x2c
	// Line 1149, Address: 0x117354, Func Offset: 0x34
	// Line 1151, Address: 0x117380, Func Offset: 0x60
	// Line 1153, Address: 0x1173a0, Func Offset: 0x80
	// Line 1154, Address: 0x1173bc, Func Offset: 0x9c
	// Line 1156, Address: 0x1173e8, Func Offset: 0xc8
	// Line 1157, Address: 0x117408, Func Offset: 0xe8
	// Line 1158, Address: 0x117424, Func Offset: 0x104
	// Line 1160, Address: 0x11742c, Func Offset: 0x10c
	// Line 1161, Address: 0x11744c, Func Offset: 0x12c
	// Line 1165, Address: 0x117470, Func Offset: 0x150
	// Line 1166, Address: 0x11748c, Func Offset: 0x16c
	// Line 1167, Address: 0x1174a0, Func Offset: 0x180
	// Line 1169, Address: 0x1174b4, Func Offset: 0x194
	// Line 1170, Address: 0x1174e8, Func Offset: 0x1c8
	// Line 1171, Address: 0x1174f0, Func Offset: 0x1d0
	// Line 1175, Address: 0x1174f8, Func Offset: 0x1d8
	// Line 1177, Address: 0x11751c, Func Offset: 0x1fc
	// Line 1183, Address: 0x11755c, Func Offset: 0x23c
	// Line 1184, Address: 0x11757c, Func Offset: 0x25c
	// Line 1185, Address: 0x11759c, Func Offset: 0x27c
	// Line 1187, Address: 0x1175a0, Func Offset: 0x280
	// Line 1189, Address: 0x1175a8, Func Offset: 0x288
	// Line 1202, Address: 0x1175ac, Func Offset: 0x28c
	// Line 1204, Address: 0x1175bc, Func Offset: 0x29c
	// Line 1205, Address: 0x1175d0, Func Offset: 0x2b0
	// Line 1206, Address: 0x1175f0, Func Offset: 0x2d0
	// Line 1209, Address: 0x1176a0, Func Offset: 0x380
	// Line 1210, Address: 0x1176a8, Func Offset: 0x388
	// Line 1212, Address: 0x1176cc, Func Offset: 0x3ac
	// Line 1214, Address: 0x117780, Func Offset: 0x460
	// Line 1217, Address: 0x117788, Func Offset: 0x468
	// Line 1234, Address: 0x1178c0, Func Offset: 0x5a0
	// Line 1235, Address: 0x1178c8, Func Offset: 0x5a8
	// Func End, Address: 0x1178dc, Func Offset: 0x5bc
}

// 
// Start address: 0x1178e0
void upper_lswalk_3d()
{
	// Line 1238, Address: 0x1178e0, Func Offset: 0
	// Func End, Address: 0x1178e8, Func Offset: 0x8
}

// 
// Start address: 0x1178f0
void lower_rswalk_3d(SubCharacter* p)
{
	// Line 1241, Address: 0x1178f0, Func Offset: 0
	// Line 1242, Address: 0x117900, Func Offset: 0x10
	// Line 1243, Address: 0x117914, Func Offset: 0x24
	// Line 1244, Address: 0x11791c, Func Offset: 0x2c
	// Line 1246, Address: 0x117924, Func Offset: 0x34
	// Line 1248, Address: 0x117950, Func Offset: 0x60
	// Line 1250, Address: 0x117970, Func Offset: 0x80
	// Line 1251, Address: 0x11798c, Func Offset: 0x9c
	// Line 1253, Address: 0x1179b8, Func Offset: 0xc8
	// Line 1254, Address: 0x1179d8, Func Offset: 0xe8
	// Line 1255, Address: 0x1179f4, Func Offset: 0x104
	// Line 1257, Address: 0x1179fc, Func Offset: 0x10c
	// Line 1258, Address: 0x117a1c, Func Offset: 0x12c
	// Line 1262, Address: 0x117a40, Func Offset: 0x150
	// Line 1263, Address: 0x117a60, Func Offset: 0x170
	// Line 1264, Address: 0x117a74, Func Offset: 0x184
	// Line 1266, Address: 0x117a88, Func Offset: 0x198
	// Line 1267, Address: 0x117abc, Func Offset: 0x1cc
	// Line 1268, Address: 0x117ac4, Func Offset: 0x1d4
	// Line 1272, Address: 0x117acc, Func Offset: 0x1dc
	// Line 1274, Address: 0x117af0, Func Offset: 0x200
	// Line 1280, Address: 0x117b30, Func Offset: 0x240
	// Line 1281, Address: 0x117b50, Func Offset: 0x260
	// Line 1282, Address: 0x117b70, Func Offset: 0x280
	// Line 1284, Address: 0x117b74, Func Offset: 0x284
	// Line 1286, Address: 0x117b7c, Func Offset: 0x28c
	// Line 1299, Address: 0x117b80, Func Offset: 0x290
	// Line 1302, Address: 0x117b90, Func Offset: 0x2a0
	// Line 1303, Address: 0x117ba4, Func Offset: 0x2b4
	// Line 1304, Address: 0x117bc4, Func Offset: 0x2d4
	// Line 1307, Address: 0x117c74, Func Offset: 0x384
	// Line 1308, Address: 0x117c7c, Func Offset: 0x38c
	// Line 1310, Address: 0x117ca0, Func Offset: 0x3b0
	// Line 1312, Address: 0x117d54, Func Offset: 0x464
	// Line 1315, Address: 0x117d5c, Func Offset: 0x46c
	// Line 1336, Address: 0x117e94, Func Offset: 0x5a4
	// Line 1337, Address: 0x117e9c, Func Offset: 0x5ac
	// Func End, Address: 0x117eb0, Func Offset: 0x5c0
}

// 
// Start address: 0x117eb0
void upper_rswalk_3d()
{
	// Line 1340, Address: 0x117eb0, Func Offset: 0
	// Func End, Address: 0x117eb8, Func Offset: 0x8
}

// 
// Start address: 0x117ec0
void lower_run1_3d(SubCharacter* p)
{
	float target_speed;
	float lstickY_tmp;
	// Line 1343, Address: 0x117ec0, Func Offset: 0
	// Line 1352, Address: 0x117ed0, Func Offset: 0x10
	// Line 1360, Address: 0x117ee0, Func Offset: 0x20
	// Line 1362, Address: 0x117f04, Func Offset: 0x44
	// Line 1364, Address: 0x117f24, Func Offset: 0x64
	// Line 1365, Address: 0x117f40, Func Offset: 0x80
	// Line 1366, Address: 0x117f5c, Func Offset: 0x9c
	// Line 1368, Address: 0x117f64, Func Offset: 0xa4
	// Line 1369, Address: 0x117f80, Func Offset: 0xc0
	// Line 1373, Address: 0x117fa4, Func Offset: 0xe4
	// Line 1375, Address: 0x117fb4, Func Offset: 0xf4
	// Line 1378, Address: 0x118068, Func Offset: 0x1a8
	// Line 1385, Address: 0x118070, Func Offset: 0x1b0
	// Line 1393, Address: 0x11808c, Func Offset: 0x1cc
	// Line 1394, Address: 0x1180a0, Func Offset: 0x1e0
	// Line 1395, Address: 0x1180bc, Func Offset: 0x1fc
	// Line 1396, Address: 0x1180c4, Func Offset: 0x204
	// Line 1398, Address: 0x1180e0, Func Offset: 0x220
	// Line 1399, Address: 0x118110, Func Offset: 0x250
	// Line 1403, Address: 0x118134, Func Offset: 0x274
	// Line 1406, Address: 0x118144, Func Offset: 0x284
	// Line 1419, Address: 0x11827c, Func Offset: 0x3bc
	// Line 1422, Address: 0x118284, Func Offset: 0x3c4
	// Line 1424, Address: 0x1182a0, Func Offset: 0x3e0
	// Line 1432, Address: 0x1182d4, Func Offset: 0x414
	// Line 1433, Address: 0x1182f8, Func Offset: 0x438
	// Line 1435, Address: 0x118300, Func Offset: 0x440
	// Line 1443, Address: 0x118304, Func Offset: 0x444
	// Line 1444, Address: 0x118334, Func Offset: 0x474
	// Line 1445, Address: 0x118348, Func Offset: 0x488
	// Line 1451, Address: 0x11835c, Func Offset: 0x49c
	// Line 1452, Address: 0x118364, Func Offset: 0x4a4
	// Func End, Address: 0x118378, Func Offset: 0x4b8
}

// 
// Start address: 0x118380
void upper_run1_3d(SubCharacter* p)
{
	// Line 1454, Address: 0x118380, Func Offset: 0
	// Line 1455, Address: 0x118388, Func Offset: 0x8
	// Line 1456, Address: 0x118390, Func Offset: 0x10
	// Func End, Address: 0x1183a0, Func Offset: 0x20
}

// 
// Start address: 0x1183a0
void lower_run2_3d(SubCharacter* p)
{
	float target_speed;
	float lstickY_tmp;
	// Line 1459, Address: 0x1183a0, Func Offset: 0
	// Line 1468, Address: 0x1183b0, Func Offset: 0x10
	// Line 1475, Address: 0x1183c0, Func Offset: 0x20
	// Line 1476, Address: 0x1183e0, Func Offset: 0x40
	// Line 1478, Address: 0x1183fc, Func Offset: 0x5c
	// Line 1481, Address: 0x118420, Func Offset: 0x80
	// Line 1483, Address: 0x118440, Func Offset: 0xa0
	// Line 1484, Address: 0x11845c, Func Offset: 0xbc
	// Line 1485, Address: 0x118478, Func Offset: 0xd8
	// Line 1487, Address: 0x118480, Func Offset: 0xe0
	// Line 1488, Address: 0x11849c, Func Offset: 0xfc
	// Line 1492, Address: 0x1184c0, Func Offset: 0x120
	// Line 1494, Address: 0x1184d0, Func Offset: 0x130
	// Line 1498, Address: 0x118584, Func Offset: 0x1e4
	// Line 1501, Address: 0x1185d0, Func Offset: 0x230
	// Line 1502, Address: 0x1185e0, Func Offset: 0x240
	// Line 1503, Address: 0x1185f4, Func Offset: 0x254
	// Line 1510, Address: 0x118608, Func Offset: 0x268
	// Line 1517, Address: 0x118610, Func Offset: 0x270
	// Line 1525, Address: 0x11862c, Func Offset: 0x28c
	// Line 1526, Address: 0x118640, Func Offset: 0x2a0
	// Line 1527, Address: 0x11865c, Func Offset: 0x2bc
	// Line 1528, Address: 0x118680, Func Offset: 0x2e0
	// Line 1529, Address: 0x118688, Func Offset: 0x2e8
	// Line 1530, Address: 0x1186a4, Func Offset: 0x304
	// Line 1535, Address: 0x1186c0, Func Offset: 0x320
	// Line 1538, Address: 0x1186d0, Func Offset: 0x330
	// Line 1548, Address: 0x118808, Func Offset: 0x468
	// Line 1549, Address: 0x118838, Func Offset: 0x498
	// Line 1550, Address: 0x11884c, Func Offset: 0x4ac
	// Line 1552, Address: 0x118860, Func Offset: 0x4c0
	// Line 1555, Address: 0x1188ac, Func Offset: 0x50c
	// Line 1556, Address: 0x1188bc, Func Offset: 0x51c
	// Line 1557, Address: 0x1188d0, Func Offset: 0x530
	// Line 1568, Address: 0x1188e4, Func Offset: 0x544
	// Line 1571, Address: 0x1188ec, Func Offset: 0x54c
	// Line 1573, Address: 0x118908, Func Offset: 0x568
	// Line 1581, Address: 0x11893c, Func Offset: 0x59c
	// Line 1582, Address: 0x118960, Func Offset: 0x5c0
	// Line 1584, Address: 0x118968, Func Offset: 0x5c8
	// Line 1591, Address: 0x11896c, Func Offset: 0x5cc
	// Line 1593, Address: 0x118974, Func Offset: 0x5d4
	// Line 1594, Address: 0x118984, Func Offset: 0x5e4
	// Line 1596, Address: 0x118998, Func Offset: 0x5f8
	// Func End, Address: 0x1189ac, Func Offset: 0x60c
}

// 
// Start address: 0x1189b0
void upper_run2_3d(SubCharacter* p)
{
	// Line 1598, Address: 0x1189b0, Func Offset: 0
	// Line 1599, Address: 0x1189b8, Func Offset: 0x8
	// Line 1600, Address: 0x1189c0, Func Offset: 0x10
	// Func End, Address: 0x1189d0, Func Offset: 0x20
}

// 
// Start address: 0x1189d0
void lower_run3_3d(SubCharacter* p)
{
	float target_speed;
	float lstickY_tmp;
	// Line 1603, Address: 0x1189d0, Func Offset: 0
	// Line 1613, Address: 0x1189e0, Func Offset: 0x10
	// Line 1620, Address: 0x1189f0, Func Offset: 0x20
	// Line 1621, Address: 0x118a10, Func Offset: 0x40
	// Line 1623, Address: 0x118a2c, Func Offset: 0x5c
	// Line 1627, Address: 0x118a50, Func Offset: 0x80
	// Line 1628, Address: 0x118a70, Func Offset: 0xa0
	// Line 1632, Address: 0x118aa4, Func Offset: 0xd4
	// Line 1634, Address: 0x118ab4, Func Offset: 0xe4
	// Line 1638, Address: 0x118b68, Func Offset: 0x198
	// Line 1639, Address: 0x118b94, Func Offset: 0x1c4
	// Line 1640, Address: 0x118ba8, Func Offset: 0x1d8
	// Line 1642, Address: 0x118bbc, Func Offset: 0x1ec
	// Line 1649, Address: 0x118bc4, Func Offset: 0x1f4
	// Line 1656, Address: 0x118be4, Func Offset: 0x214
	// Line 1657, Address: 0x118bf8, Func Offset: 0x228
	// Line 1658, Address: 0x118c00, Func Offset: 0x230
	// Line 1663, Address: 0x118c04, Func Offset: 0x234
	// Line 1664, Address: 0x118c18, Func Offset: 0x248
	// Line 1665, Address: 0x118c34, Func Offset: 0x264
	// Line 1666, Address: 0x118c3c, Func Offset: 0x26c
	// Line 1668, Address: 0x118c58, Func Offset: 0x288
	// Line 1672, Address: 0x118c7c, Func Offset: 0x2ac
	// Line 1675, Address: 0x118c8c, Func Offset: 0x2bc
	// Line 1685, Address: 0x118dc4, Func Offset: 0x3f4
	// Line 1687, Address: 0x118e10, Func Offset: 0x440
	// Line 1688, Address: 0x118e24, Func Offset: 0x454
	// Line 1694, Address: 0x118e38, Func Offset: 0x468
	// Line 1697, Address: 0x118e40, Func Offset: 0x470
	// Line 1699, Address: 0x118e5c, Func Offset: 0x48c
	// Line 1707, Address: 0x118e90, Func Offset: 0x4c0
	// Line 1708, Address: 0x118eb4, Func Offset: 0x4e4
	// Line 1710, Address: 0x118ebc, Func Offset: 0x4ec
	// Line 1717, Address: 0x118ec0, Func Offset: 0x4f0
	// Line 1720, Address: 0x118ec8, Func Offset: 0x4f8
	// Line 1721, Address: 0x118ed8, Func Offset: 0x508
	// Line 1722, Address: 0x118eec, Func Offset: 0x51c
	// Func End, Address: 0x118f00, Func Offset: 0x530
}

// 
// Start address: 0x118f00
void upper_run3_3d(SubCharacter* p)
{
	// Line 1724, Address: 0x118f00, Func Offset: 0
	// Line 1725, Address: 0x118f08, Func Offset: 0x8
	// Line 1726, Address: 0x118f10, Func Offset: 0x10
	// Func End, Address: 0x118f20, Func Offset: 0x20
}

// 
// Start address: 0x118f20
void lower_lsrun_3d(SubCharacter* p)
{
	// Line 1729, Address: 0x118f20, Func Offset: 0
	// Line 1731, Address: 0x118f30, Func Offset: 0x10
	// Line 1732, Address: 0x118f50, Func Offset: 0x30
	// Line 1736, Address: 0x118f6c, Func Offset: 0x4c
	// Line 1737, Address: 0x118f8c, Func Offset: 0x6c
	// Line 1738, Address: 0x118fc0, Func Offset: 0xa0
	// Line 1741, Address: 0x118fc4, Func Offset: 0xa4
	// Line 1743, Address: 0x118fe8, Func Offset: 0xc8
	// Line 1749, Address: 0x119028, Func Offset: 0x108
	// Line 1750, Address: 0x119048, Func Offset: 0x128
	// Line 1751, Address: 0x119068, Func Offset: 0x148
	// Line 1753, Address: 0x11906c, Func Offset: 0x14c
	// Line 1755, Address: 0x119074, Func Offset: 0x154
	// Line 1768, Address: 0x119078, Func Offset: 0x158
	// Line 1770, Address: 0x119088, Func Offset: 0x168
	// Line 1772, Address: 0x1190ac, Func Offset: 0x18c
	// Line 1774, Address: 0x119160, Func Offset: 0x240
	// Line 1777, Address: 0x119168, Func Offset: 0x248
	// Line 1792, Address: 0x1192a0, Func Offset: 0x380
	// Line 1795, Address: 0x1192a8, Func Offset: 0x388
	// Line 1796, Address: 0x1192b8, Func Offset: 0x398
	// Line 1797, Address: 0x1192cc, Func Offset: 0x3ac
	// Func End, Address: 0x1192e0, Func Offset: 0x3c0
}

// 
// Start address: 0x1192e0
void upper_lsrun_3d()
{
	// Line 1800, Address: 0x1192e0, Func Offset: 0
	// Func End, Address: 0x1192e8, Func Offset: 0x8
}

// 
// Start address: 0x1192f0
void lower_rsrun_3d(SubCharacter* p)
{
	// Line 1803, Address: 0x1192f0, Func Offset: 0
	// Line 1805, Address: 0x119300, Func Offset: 0x10
	// Line 1806, Address: 0x119320, Func Offset: 0x30
	// Line 1810, Address: 0x11933c, Func Offset: 0x4c
	// Line 1811, Address: 0x11935c, Func Offset: 0x6c
	// Line 1812, Address: 0x119390, Func Offset: 0xa0
	// Line 1815, Address: 0x119394, Func Offset: 0xa4
	// Line 1817, Address: 0x1193b8, Func Offset: 0xc8
	// Line 1823, Address: 0x1193f8, Func Offset: 0x108
	// Line 1824, Address: 0x119418, Func Offset: 0x128
	// Line 1825, Address: 0x119438, Func Offset: 0x148
	// Line 1827, Address: 0x11943c, Func Offset: 0x14c
	// Line 1829, Address: 0x119444, Func Offset: 0x154
	// Line 1842, Address: 0x119448, Func Offset: 0x158
	// Line 1844, Address: 0x119458, Func Offset: 0x168
	// Line 1846, Address: 0x11947c, Func Offset: 0x18c
	// Line 1848, Address: 0x119530, Func Offset: 0x240
	// Line 1851, Address: 0x119538, Func Offset: 0x248
	// Line 1865, Address: 0x119670, Func Offset: 0x380
	// Line 1868, Address: 0x119678, Func Offset: 0x388
	// Line 1869, Address: 0x119688, Func Offset: 0x398
	// Line 1870, Address: 0x11969c, Func Offset: 0x3ac
	// Func End, Address: 0x1196b0, Func Offset: 0x3c0
}

// 
// Start address: 0x1196b0
void upper_rsrun_3d()
{
	// Line 1873, Address: 0x1196b0, Func Offset: 0
	// Func End, Address: 0x1196b8, Func Offset: 0x8
}

// 
// Start address: 0x1196c0
void lower_lturn180_3d(SubCharacter* p)
{
	float mov_angle;
	// Line 1876, Address: 0x1196c0, Func Offset: 0
	// Line 1879, Address: 0x1196d4, Func Offset: 0x14
	// Line 1880, Address: 0x1196e8, Func Offset: 0x28
	// Line 1881, Address: 0x119700, Func Offset: 0x40
	// Line 1882, Address: 0x119710, Func Offset: 0x50
	// Line 1883, Address: 0x119724, Func Offset: 0x64
	// Line 1884, Address: 0x11972c, Func Offset: 0x6c
	// Line 1888, Address: 0x119744, Func Offset: 0x84
	// Line 1890, Address: 0x11974c, Func Offset: 0x8c
	// Line 1892, Address: 0x119760, Func Offset: 0xa0
	// Line 1896, Address: 0x11976c, Func Offset: 0xac
	// Line 1897, Address: 0x119794, Func Offset: 0xd4
	// Line 1898, Address: 0x1197a0, Func Offset: 0xe0
	// Line 1901, Address: 0x1197ac, Func Offset: 0xec
	// Line 1903, Address: 0x11982c, Func Offset: 0x16c
	// Func End, Address: 0x119844, Func Offset: 0x184
}

// 
// Start address: 0x119850
void upper_lturn180_3d()
{
	// Line 1906, Address: 0x119850, Func Offset: 0
	// Func End, Address: 0x119858, Func Offset: 0x8
}

// 
// Start address: 0x119860
void lower_rturn180_3d(SubCharacter* p)
{
	float mov_angle;
	// Line 1909, Address: 0x119860, Func Offset: 0
	// Line 1912, Address: 0x119874, Func Offset: 0x14
	// Line 1913, Address: 0x119888, Func Offset: 0x28
	// Line 1914, Address: 0x1198a0, Func Offset: 0x40
	// Line 1915, Address: 0x1198b0, Func Offset: 0x50
	// Line 1916, Address: 0x1198c4, Func Offset: 0x64
	// Line 1917, Address: 0x1198cc, Func Offset: 0x6c
	// Line 1921, Address: 0x1198e4, Func Offset: 0x84
	// Line 1923, Address: 0x1198ec, Func Offset: 0x8c
	// Line 1925, Address: 0x119900, Func Offset: 0xa0
	// Line 1929, Address: 0x11990c, Func Offset: 0xac
	// Line 1930, Address: 0x119934, Func Offset: 0xd4
	// Line 1931, Address: 0x119940, Func Offset: 0xe0
	// Line 1933, Address: 0x11994c, Func Offset: 0xec
	// Line 1935, Address: 0x1199cc, Func Offset: 0x16c
	// Func End, Address: 0x1199e4, Func Offset: 0x184
}

// 
// Start address: 0x1199f0
void upper_rturn180_3d()
{
	// Line 1938, Address: 0x1199f0, Func Offset: 0
	// Func End, Address: 0x1199f8, Func Offset: 0x8
}

// 
// Start address: 0x119a00
void lower_jump_3d()
{
	// Line 1942, Address: 0x119a00, Func Offset: 0
	// Func End, Address: 0x119a08, Func Offset: 0x8
}

// 
// Start address: 0x119a10
void upper_jump_3d()
{
	// Line 1945, Address: 0x119a10, Func Offset: 0
	// Func End, Address: 0x119a18, Func Offset: 0x8
}

// 
// Start address: 0x119a20
void lower_guard_3d(SubCharacter* p)
{
	unsigned short frame;
	// Line 1949, Address: 0x119a20, Func Offset: 0
	// Line 1951, Address: 0x119a30, Func Offset: 0x10
	// Line 1953, Address: 0x119a40, Func Offset: 0x20
	// Line 1954, Address: 0x119a54, Func Offset: 0x34
	// Line 1955, Address: 0x119a5c, Func Offset: 0x3c
	// Line 1956, Address: 0x119a60, Func Offset: 0x40
	// Line 1957, Address: 0x119a64, Func Offset: 0x44
	// Line 1958, Address: 0x119a68, Func Offset: 0x48
	// Line 1959, Address: 0x119a74, Func Offset: 0x54
	// Line 1961, Address: 0x119a7c, Func Offset: 0x5c
	// Line 1962, Address: 0x119a8c, Func Offset: 0x6c
	// Line 1963, Address: 0x119aa8, Func Offset: 0x88
	// Line 1964, Address: 0x119ab0, Func Offset: 0x90
	// Line 1967, Address: 0x119ab8, Func Offset: 0x98
	// Line 1968, Address: 0x119acc, Func Offset: 0xac
	// Line 1969, Address: 0x119ad4, Func Offset: 0xb4
	// Line 1970, Address: 0x119ae8, Func Offset: 0xc8
	// Line 1971, Address: 0x119afc, Func Offset: 0xdc
	// Line 1974, Address: 0x119b10, Func Offset: 0xf0
	// Func End, Address: 0x119b24, Func Offset: 0x104
}

// 
// Start address: 0x119b30
void upper_guard_3d()
{
	// Line 1977, Address: 0x119b30, Func Offset: 0
	// Line 1978, Address: 0x119b38, Func Offset: 0x8
	// Line 1979, Address: 0x119b4c, Func Offset: 0x1c
	// Line 1980, Address: 0x119b60, Func Offset: 0x30
	// Line 1981, Address: 0x119b74, Func Offset: 0x44
	// Line 1983, Address: 0x119b88, Func Offset: 0x58
	// Func End, Address: 0x119b98, Func Offset: 0x68
}

// 
// Start address: 0x119ba0
void lower_lstep_3d()
{
	// Line 1987, Address: 0x119ba0, Func Offset: 0
	// Func End, Address: 0x119ba8, Func Offset: 0x8
}

// 
// Start address: 0x119bb0
void upper_lstep_3d()
{
	// Line 1990, Address: 0x119bb0, Func Offset: 0
	// Func End, Address: 0x119bb8, Func Offset: 0x8
}

// 
// Start address: 0x119bc0
void lower_rstep_3d()
{
	// Line 1994, Address: 0x119bc0, Func Offset: 0
	// Func End, Address: 0x119bc8, Func Offset: 0x8
}

// 
// Start address: 0x119bd0
void upper_rstep_3d()
{
	// Line 1997, Address: 0x119bd0, Func Offset: 0
	// Func End, Address: 0x119bd8, Func Offset: 0x8
}

// 
// Start address: 0x119be0
void lower_hold_3d(SubCharacter* p)
{
	float spd;
	// Line 2000, Address: 0x119be0, Func Offset: 0
	// Line 2003, Address: 0x119bf4, Func Offset: 0x14
	// Line 2007, Address: 0x119bfc, Func Offset: 0x1c
	// Line 2009, Address: 0x119c0c, Func Offset: 0x2c
	// Line 2011, Address: 0x119c30, Func Offset: 0x50
	// Line 2012, Address: 0x119c40, Func Offset: 0x60
	// Line 2014, Address: 0x119c7c, Func Offset: 0x9c
	// Line 2015, Address: 0x119ca0, Func Offset: 0xc0
	// Line 2018, Address: 0x119ca8, Func Offset: 0xc8
	// Line 2019, Address: 0x119cb8, Func Offset: 0xd8
	// Line 2022, Address: 0x119d04, Func Offset: 0x124
	// Line 2035, Address: 0x119d3c, Func Offset: 0x15c
	// Line 2037, Address: 0x119dcc, Func Offset: 0x1ec
	// Func End, Address: 0x119de4, Func Offset: 0x204
}

// 
// Start address: 0x119df0
void upper_hold_3d(SubCharacter* p)
{
	// Line 2040, Address: 0x119df0, Func Offset: 0
	// Line 2041, Address: 0x119df8, Func Offset: 0x8
	// Line 2042, Address: 0x119e00, Func Offset: 0x10
	// Func End, Address: 0x119e10, Func Offset: 0x20
}

// 
// Start address: 0x119e10
void lower_release_3d(SubCharacter* p)
{
	float spd;
	// Line 2045, Address: 0x119e10, Func Offset: 0
	// Line 2048, Address: 0x119e24, Func Offset: 0x14
	// Line 2051, Address: 0x119e2c, Func Offset: 0x1c
	// Line 2053, Address: 0x119e50, Func Offset: 0x40
	// Line 2054, Address: 0x119e60, Func Offset: 0x50
	// Line 2056, Address: 0x119e9c, Func Offset: 0x8c
	// Line 2057, Address: 0x119ec0, Func Offset: 0xb0
	// Line 2060, Address: 0x119ec8, Func Offset: 0xb8
	// Line 2061, Address: 0x119ed8, Func Offset: 0xc8
	// Line 2064, Address: 0x119f24, Func Offset: 0x114
	// Line 2077, Address: 0x119f5c, Func Offset: 0x14c
	// Line 2079, Address: 0x119fec, Func Offset: 0x1dc
	// Func End, Address: 0x11a004, Func Offset: 0x1f4
}

// 
// Start address: 0x11a010
void upper_release_3d(SubCharacter* p)
{
	// Line 2081, Address: 0x11a010, Func Offset: 0
	// Line 2082, Address: 0x11a018, Func Offset: 0x8
	// Line 2083, Address: 0x11a020, Func Offset: 0x10
	// Func End, Address: 0x11a030, Func Offset: 0x20
}

// 
// Start address: 0x11a030
void lower_attack_3d(SubCharacter* p)
{
	// Line 2089, Address: 0x11a030, Func Offset: 0
	// Line 2090, Address: 0x11a038, Func Offset: 0x8
	// Line 2091, Address: 0x11a040, Func Offset: 0x10
	// Func End, Address: 0x11a050, Func Offset: 0x20
}

// 
// Start address: 0x11a050
void upper_attack_3d(SubCharacter* p)
{
	// Line 2093, Address: 0x11a050, Func Offset: 0
	// Line 2094, Address: 0x11a058, Func Offset: 0x8
	// Line 2095, Address: 0x11a060, Func Offset: 0x10
	// Func End, Address: 0x11a070, Func Offset: 0x20
}

// 
// Start address: 0x11a070
void lower_kick_3d(SubCharacter* p)
{
	// Line 2097, Address: 0x11a070, Func Offset: 0
	// Line 2098, Address: 0x11a078, Func Offset: 0x8
	// Line 2099, Address: 0x11a080, Func Offset: 0x10
	// Func End, Address: 0x11a090, Func Offset: 0x20
}

// 
// Start address: 0x11a090
void upper_kick_3d(SubCharacter* p)
{
	// Line 2101, Address: 0x11a090, Func Offset: 0
	// Line 2102, Address: 0x11a098, Func Offset: 0x8
	// Line 2103, Address: 0x11a0a0, Func Offset: 0x10
	// Func End, Address: 0x11a0b0, Func Offset: 0x20
}

// 
// Start address: 0x11a0b0
void lower_fall_3d(SubCharacter* p)
{
	// Line 2105, Address: 0x11a0b0, Func Offset: 0
	// Line 2106, Address: 0x11a0b8, Func Offset: 0x8
	// Line 2107, Address: 0x11a0c0, Func Offset: 0x10
	// Func End, Address: 0x11a0d0, Func Offset: 0x20
}

// 
// Start address: 0x11a0d0
void upper_fall_3d(SubCharacter* p)
{
	// Line 2109, Address: 0x11a0d0, Func Offset: 0
	// Line 2110, Address: 0x11a0d8, Func Offset: 0x8
	// Line 2111, Address: 0x11a0e0, Func Offset: 0x10
	// Func End, Address: 0x11a0f0, Func Offset: 0x20
}

// 
// Start address: 0x11a0f0
void lower_damage_3d(SubCharacter* p)
{
	// Line 2114, Address: 0x11a0f0, Func Offset: 0
	// Line 2115, Address: 0x11a0f8, Func Offset: 0x8
	// Line 2116, Address: 0x11a100, Func Offset: 0x10
	// Func End, Address: 0x11a110, Func Offset: 0x20
}

// 
// Start address: 0x11a110
void upper_damage_3d(SubCharacter* p)
{
	// Line 2118, Address: 0x11a110, Func Offset: 0
	// Line 2119, Address: 0x11a118, Func Offset: 0x8
	// Line 2120, Address: 0x11a120, Func Offset: 0x10
	// Func End, Address: 0x11a130, Func Offset: 0x20
}

// 
// Start address: 0x11a130
void lower_to_stand_3d(SubCharacter* p)
{
	// Line 2123, Address: 0x11a130, Func Offset: 0
	// Line 2124, Address: 0x11a138, Func Offset: 0x8
	// Line 2125, Address: 0x11a140, Func Offset: 0x10
	// Func End, Address: 0x11a150, Func Offset: 0x20
}

// 
// Start address: 0x11a150
void upper_to_stand_3d(SubCharacter* p)
{
	// Line 2127, Address: 0x11a150, Func Offset: 0
	// Line 2128, Address: 0x11a158, Func Offset: 0x8
	// Line 2129, Address: 0x11a160, Func Offset: 0x10
	// Func End, Address: 0x11a170, Func Offset: 0x20
}

// 
// Start address: 0x11a170
void lower_wall_f_3d(SubCharacter* p)
{
	unsigned short frame;
	// Line 2131, Address: 0x11a170, Func Offset: 0
	// Line 2134, Address: 0x11a180, Func Offset: 0x10
	// Line 2136, Address: 0x11a190, Func Offset: 0x20
	// Line 2137, Address: 0x11a1a8, Func Offset: 0x38
	// Line 2138, Address: 0x11a1ac, Func Offset: 0x3c
	// Line 2140, Address: 0x11a1cc, Func Offset: 0x5c
	// Line 2144, Address: 0x11a218, Func Offset: 0xa8
	// Line 2145, Address: 0x11a224, Func Offset: 0xb4
	// Line 2147, Address: 0x11a22c, Func Offset: 0xbc
	// Line 2148, Address: 0x11a238, Func Offset: 0xc8
	// Line 2150, Address: 0x11a240, Func Offset: 0xd0
	// Line 2154, Address: 0x11a24c, Func Offset: 0xdc
	// Line 2155, Address: 0x11a26c, Func Offset: 0xfc
	// Line 2157, Address: 0x11a294, Func Offset: 0x124
	// Line 2159, Address: 0x11a29c, Func Offset: 0x12c
	// Line 2160, Address: 0x11a2b0, Func Offset: 0x140
	// Line 2162, Address: 0x11a2c4, Func Offset: 0x154
	// Func End, Address: 0x11a2d8, Func Offset: 0x168
}

// 
// Start address: 0x11a2e0
void upper_wall_f_3d(SubCharacter* p)
{
	// Line 2164, Address: 0x11a2e0, Func Offset: 0
	// Line 2165, Address: 0x11a2e8, Func Offset: 0x8
	// Line 2166, Address: 0x11a2f0, Func Offset: 0x10
	// Func End, Address: 0x11a300, Func Offset: 0x20
}

// 
// Start address: 0x11a300
void lower_event_3d(SubCharacter* p)
{
	// Line 2169, Address: 0x11a300, Func Offset: 0
	// Line 2170, Address: 0x11a308, Func Offset: 0x8
	// Line 2171, Address: 0x11a310, Func Offset: 0x10
	// Func End, Address: 0x11a320, Func Offset: 0x20
}

// 
// Start address: 0x11a320
void upper_event_3d(SubCharacter* p)
{
	// Line 2174, Address: 0x11a320, Func Offset: 0
	// Line 2175, Address: 0x11a328, Func Offset: 0x8
	// Line 2176, Address: 0x11a330, Func Offset: 0x10
	// Func End, Address: 0x11a340, Func Offset: 0x20
}

// 
// Start address: 0x11a340
void SubCharacter::PlayerUpdateStatus3D()
{
	// Line 2277, Address: 0x11a340, Func Offset: 0
	// Line 2278, Address: 0x11a350, Func Offset: 0x10
	// Line 2279, Address: 0x11a360, Func Offset: 0x20
	// Line 2281, Address: 0x11a370, Func Offset: 0x30
	// Line 2283, Address: 0x11a378, Func Offset: 0x38
	// Line 2284, Address: 0x11a384, Func Offset: 0x44
	// Func End, Address: 0x11a398, Func Offset: 0x58
}

// 
// Start address: 0x11a3a0
void PlayerUpdateStatusStand3D()
{
	shPlayerWork* w;
	// Line 2290, Address: 0x11a3a0, Func Offset: 0
	// Line 2293, Address: 0x11a3a8, Func Offset: 0x8
	// Line 2294, Address: 0x11a3bc, Func Offset: 0x1c
	// Line 2295, Address: 0x11a3d0, Func Offset: 0x30
	// Line 2296, Address: 0x11a3e4, Func Offset: 0x44
	// Line 2297, Address: 0x11a3f8, Func Offset: 0x58
	// Line 2298, Address: 0x11a40c, Func Offset: 0x6c
	// Line 2299, Address: 0x11a420, Func Offset: 0x80
	// Func End, Address: 0x11a430, Func Offset: 0x90
}

// 
// Start address: 0x11a430
void SubCharacter::PlayerUpdateStatusLower3D()
{
	float roty;
	float roty;
	SubCharacterDisp* scp_d;
	PAD_3D* p3d;
	PAD_INFO* p;
	shPlayerWork* w;
	// Line 2314, Address: 0x11a430, Func Offset: 0
	// Line 2316, Address: 0x11a44c, Func Offset: 0x1c
	// Line 2317, Address: 0x11a454, Func Offset: 0x24
	// Line 2318, Address: 0x11a45c, Func Offset: 0x2c
	// Line 2332, Address: 0x11a464, Func Offset: 0x34
	// Line 2333, Address: 0x11a478, Func Offset: 0x48
	// Line 2334, Address: 0x11a488, Func Offset: 0x58
	// Line 2335, Address: 0x11a494, Func Offset: 0x64
	// Line 2336, Address: 0x11a4a4, Func Offset: 0x74
	// Line 2338, Address: 0x11a4b4, Func Offset: 0x84
	// Line 2345, Address: 0x11a4bc, Func Offset: 0x8c
	// Line 2346, Address: 0x11a4d0, Func Offset: 0xa0
	// Line 2347, Address: 0x11a4e0, Func Offset: 0xb0
	// Line 2348, Address: 0x11a4ec, Func Offset: 0xbc
	// Line 2349, Address: 0x11a4fc, Func Offset: 0xcc
	// Line 2351, Address: 0x11a50c, Func Offset: 0xdc
	// Line 2357, Address: 0x11a514, Func Offset: 0xe4
	// Line 2358, Address: 0x11a528, Func Offset: 0xf8
	// Line 2359, Address: 0x11a538, Func Offset: 0x108
	// Line 2360, Address: 0x11a544, Func Offset: 0x114
	// Line 2361, Address: 0x11a554, Func Offset: 0x124
	// Line 2363, Address: 0x11a564, Func Offset: 0x134
	// Line 2371, Address: 0x11a56c, Func Offset: 0x13c
	// Line 2372, Address: 0x11a580, Func Offset: 0x150
	// Line 2373, Address: 0x11a590, Func Offset: 0x160
	// Line 2374, Address: 0x11a59c, Func Offset: 0x16c
	// Line 2375, Address: 0x11a5ac, Func Offset: 0x17c
	// Line 2377, Address: 0x11a5bc, Func Offset: 0x18c
	// Line 2385, Address: 0x11a5c4, Func Offset: 0x194
	// Line 2386, Address: 0x11a5d4, Func Offset: 0x1a4
	// Line 2397, Address: 0x11a660, Func Offset: 0x230
	// Line 2398, Address: 0x11a680, Func Offset: 0x250
	// Line 2400, Address: 0x11a6a8, Func Offset: 0x278
	// Line 2410, Address: 0x11a6b0, Func Offset: 0x280
	// Line 2412, Address: 0x11a6e8, Func Offset: 0x2b8
	// Line 2466, Address: 0x11a6f0, Func Offset: 0x2c0
	// Line 2467, Address: 0x11a710, Func Offset: 0x2e0
	// Line 2469, Address: 0x11a738, Func Offset: 0x308
	// Line 2472, Address: 0x11a740, Func Offset: 0x310
	// Line 2480, Address: 0x11a750, Func Offset: 0x320
	// Line 2482, Address: 0x11a788, Func Offset: 0x358
	// Line 2533, Address: 0x11a790, Func Offset: 0x360
	// Line 2534, Address: 0x11a7b0, Func Offset: 0x380
	// Line 2536, Address: 0x11a7c4, Func Offset: 0x394
	// Line 2544, Address: 0x11a7cc, Func Offset: 0x39c
	// Line 2546, Address: 0x11a7f0, Func Offset: 0x3c0
	// Line 2570, Address: 0x11a7f8, Func Offset: 0x3c8
	// Line 2572, Address: 0x11a854, Func Offset: 0x424
	// Line 2573, Address: 0x11a868, Func Offset: 0x438
	// Line 2574, Address: 0x11a878, Func Offset: 0x448
	// Line 2581, Address: 0x11a888, Func Offset: 0x458
	// Line 2583, Address: 0x11a8b0, Func Offset: 0x480
	// Line 2584, Address: 0x11a8d4, Func Offset: 0x4a4
	// Line 2585, Address: 0x11a8e4, Func Offset: 0x4b4
	// Line 2586, Address: 0x11a8f0, Func Offset: 0x4c0
	// Line 2587, Address: 0x11a900, Func Offset: 0x4d0
	// Line 2590, Address: 0x11a910, Func Offset: 0x4e0
	// Line 2592, Address: 0x11a99c, Func Offset: 0x56c
	// Line 2593, Address: 0x11a9a0, Func Offset: 0x570
	// Line 2597, Address: 0x11a9a8, Func Offset: 0x578
	// Line 2598, Address: 0x11a9cc, Func Offset: 0x59c
	// Line 2599, Address: 0x11a9dc, Func Offset: 0x5ac
	// Line 2600, Address: 0x11a9e8, Func Offset: 0x5b8
	// Line 2601, Address: 0x11a9f8, Func Offset: 0x5c8
	// Line 2604, Address: 0x11aa08, Func Offset: 0x5d8
	// Line 2606, Address: 0x11aa94, Func Offset: 0x664
	// Line 2607, Address: 0x11aa98, Func Offset: 0x668
	// Line 2630, Address: 0x11aaa0, Func Offset: 0x670
	// Line 2635, Address: 0x11aab8, Func Offset: 0x688
	// Line 2641, Address: 0x11aac8, Func Offset: 0x698
	// Line 2648, Address: 0x11aae4, Func Offset: 0x6b4
	// Line 2656, Address: 0x11ab60, Func Offset: 0x730
	// Line 2658, Address: 0x11ab84, Func Offset: 0x754
	// Line 2659, Address: 0x11ab94, Func Offset: 0x764
	// Line 2660, Address: 0x11aba0, Func Offset: 0x770
	// Line 2662, Address: 0x11abb0, Func Offset: 0x780
	// Line 2663, Address: 0x11abd0, Func Offset: 0x7a0
	// Line 2666, Address: 0x11abd4, Func Offset: 0x7a4
	// Line 2668, Address: 0x11abdc, Func Offset: 0x7ac
	// Line 2673, Address: 0x11ac48, Func Offset: 0x818
	// Line 2675, Address: 0x11ac6c, Func Offset: 0x83c
	// Line 2676, Address: 0x11ac7c, Func Offset: 0x84c
	// Line 2677, Address: 0x11ac88, Func Offset: 0x858
	// Line 2679, Address: 0x11ac98, Func Offset: 0x868
	// Line 2680, Address: 0x11acb8, Func Offset: 0x888
	// Line 2683, Address: 0x11acbc, Func Offset: 0x88c
	// Line 2685, Address: 0x11acc4, Func Offset: 0x894
	// Line 2690, Address: 0x11ad30, Func Offset: 0x900
	// Line 2692, Address: 0x11ad54, Func Offset: 0x924
	// Line 2693, Address: 0x11ad64, Func Offset: 0x934
	// Line 2694, Address: 0x11ad70, Func Offset: 0x940
	// Line 2696, Address: 0x11ad80, Func Offset: 0x950
	// Line 2697, Address: 0x11ada0, Func Offset: 0x970
	// Line 2700, Address: 0x11ada4, Func Offset: 0x974
	// Line 2707, Address: 0x11adac, Func Offset: 0x97c
	// Line 2713, Address: 0x11add8, Func Offset: 0x9a8
	// Line 2717, Address: 0x11ae34, Func Offset: 0xa04
	// Line 2719, Address: 0x11ae58, Func Offset: 0xa28
	// Line 2720, Address: 0x11ae68, Func Offset: 0xa38
	// Line 2721, Address: 0x11ae74, Func Offset: 0xa44
	// Line 2723, Address: 0x11ae84, Func Offset: 0xa54
	// Line 2724, Address: 0x11aea8, Func Offset: 0xa78
	// Line 2727, Address: 0x11aeac, Func Offset: 0xa7c
	// Line 2735, Address: 0x11aeb4, Func Offset: 0xa84
	// Line 2774, Address: 0x11aecc, Func Offset: 0xa9c
	// Line 2778, Address: 0x11af28, Func Offset: 0xaf8
	// Line 2780, Address: 0x11af4c, Func Offset: 0xb1c
	// Line 2781, Address: 0x11af5c, Func Offset: 0xb2c
	// Line 2782, Address: 0x11af68, Func Offset: 0xb38
	// Line 2784, Address: 0x11af78, Func Offset: 0xb48
	// Line 2787, Address: 0x11af84, Func Offset: 0xb54
	// Line 2795, Address: 0x11af8c, Func Offset: 0xb5c
	// Line 2803, Address: 0x11afb4, Func Offset: 0xb84
	// Line 2808, Address: 0x11aff0, Func Offset: 0xbc0
	// Line 2809, Address: 0x11aff4, Func Offset: 0xbc4
	// Line 2811, Address: 0x11affc, Func Offset: 0xbcc
	// Line 2814, Address: 0x11b008, Func Offset: 0xbd8
	// Line 2821, Address: 0x11b014, Func Offset: 0xbe4
	// Line 2838, Address: 0x11b030, Func Offset: 0xc00
	// Line 2843, Address: 0x11b09c, Func Offset: 0xc6c
	// Line 2845, Address: 0x11b0c0, Func Offset: 0xc90
	// Line 2846, Address: 0x11b0d0, Func Offset: 0xca0
	// Line 2847, Address: 0x11b0dc, Func Offset: 0xcac
	// Line 2849, Address: 0x11b0ec, Func Offset: 0xcbc
	// Line 2852, Address: 0x11b0f4, Func Offset: 0xcc4
	// Line 2860, Address: 0x11b0fc, Func Offset: 0xccc
	// Line 2866, Address: 0x11b128, Func Offset: 0xcf8
	// Line 2870, Address: 0x11b184, Func Offset: 0xd54
	// Line 2872, Address: 0x11b1a8, Func Offset: 0xd78
	// Line 2873, Address: 0x11b1b8, Func Offset: 0xd88
	// Line 2874, Address: 0x11b1c4, Func Offset: 0xd94
	// Line 2876, Address: 0x11b1d4, Func Offset: 0xda4
	// Line 2877, Address: 0x11b1f8, Func Offset: 0xdc8
	// Line 2880, Address: 0x11b1fc, Func Offset: 0xdcc
	// Line 2888, Address: 0x11b204, Func Offset: 0xdd4
	// Line 2896, Address: 0x11b22c, Func Offset: 0xdfc
	// Line 2901, Address: 0x11b268, Func Offset: 0xe38
	// Line 2902, Address: 0x11b26c, Func Offset: 0xe3c
	// Line 2904, Address: 0x11b274, Func Offset: 0xe44
	// Line 2907, Address: 0x11b280, Func Offset: 0xe50
	// Line 2915, Address: 0x11b28c, Func Offset: 0xe5c
	// Line 2931, Address: 0x11b2a8, Func Offset: 0xe78
	// Line 2939, Address: 0x11b314, Func Offset: 0xee4
	// Line 2941, Address: 0x11b338, Func Offset: 0xf08
	// Line 2942, Address: 0x11b348, Func Offset: 0xf18
	// Line 2943, Address: 0x11b354, Func Offset: 0xf24
	// Line 2945, Address: 0x11b364, Func Offset: 0xf34
	// Line 2948, Address: 0x11b36c, Func Offset: 0xf3c
	// Line 2956, Address: 0x11b374, Func Offset: 0xf44
	// Line 2962, Address: 0x11b3a0, Func Offset: 0xf70
	// Line 2969, Address: 0x11b3fc, Func Offset: 0xfcc
	// Line 2971, Address: 0x11b420, Func Offset: 0xff0
	// Line 2972, Address: 0x11b430, Func Offset: 0x1000
	// Line 2973, Address: 0x11b43c, Func Offset: 0x100c
	// Line 2975, Address: 0x11b44c, Func Offset: 0x101c
	// Line 2976, Address: 0x11b470, Func Offset: 0x1040
	// Line 2979, Address: 0x11b474, Func Offset: 0x1044
	// Line 2987, Address: 0x11b47c, Func Offset: 0x104c
	// Line 2988, Address: 0x11b494, Func Offset: 0x1064
	// Line 2989, Address: 0x11b4a8, Func Offset: 0x1078
	// Line 2990, Address: 0x11b4b8, Func Offset: 0x1088
	// Line 2991, Address: 0x11b4c4, Func Offset: 0x1094
	// Line 2993, Address: 0x11b4d4, Func Offset: 0x10a4
	// Line 2996, Address: 0x11b4dc, Func Offset: 0x10ac
	// Line 2997, Address: 0x11b4f4, Func Offset: 0x10c4
	// Line 2998, Address: 0x11b508, Func Offset: 0x10d8
	// Line 2999, Address: 0x11b518, Func Offset: 0x10e8
	// Line 3000, Address: 0x11b524, Func Offset: 0x10f4
	// Line 3002, Address: 0x11b534, Func Offset: 0x1104
	// Line 3011, Address: 0x11b53c, Func Offset: 0x110c
	// Line 3015, Address: 0x11b548, Func Offset: 0x1118
	// Line 3017, Address: 0x11b578, Func Offset: 0x1148
	// Line 3019, Address: 0x11b58c, Func Offset: 0x115c
	// Line 3020, Address: 0x11b59c, Func Offset: 0x116c
	// Line 3021, Address: 0x11b5a8, Func Offset: 0x1178
	// Line 3023, Address: 0x11b5b8, Func Offset: 0x1188
	// Line 3035, Address: 0x11b5c0, Func Offset: 0x1190
	// Line 3037, Address: 0x11b5d4, Func Offset: 0x11a4
	// Line 3038, Address: 0x11b5e4, Func Offset: 0x11b4
	// Line 3039, Address: 0x11b5f0, Func Offset: 0x11c0
	// Line 3041, Address: 0x11b600, Func Offset: 0x11d0
	// Line 3047, Address: 0x11b608, Func Offset: 0x11d8
	// Line 3048, Address: 0x11b62c, Func Offset: 0x11fc
	// Line 3049, Address: 0x11b63c, Func Offset: 0x120c
	// Line 3050, Address: 0x11b648, Func Offset: 0x1218
	// Line 3052, Address: 0x11b658, Func Offset: 0x1228
	// Line 3058, Address: 0x11b660, Func Offset: 0x1230
	// Line 3059, Address: 0x11b674, Func Offset: 0x1244
	// Line 3060, Address: 0x11b680, Func Offset: 0x1250
	// Line 3061, Address: 0x11b690, Func Offset: 0x1260
	// Line 3067, Address: 0x11b6a0, Func Offset: 0x1270
	// Line 3068, Address: 0x11b6a8, Func Offset: 0x1278
	// Line 3069, Address: 0x11b6b4, Func Offset: 0x1284
	// Line 3070, Address: 0x11b6c8, Func Offset: 0x1298
	// Line 3076, Address: 0x11b6d4, Func Offset: 0x12a4
	// Line 3085, Address: 0x11b6dc, Func Offset: 0x12ac
	// Line 3087, Address: 0x11b6f8, Func Offset: 0x12c8
	// Line 3091, Address: 0x11b70c, Func Offset: 0x12dc
	// Line 3092, Address: 0x11b73c, Func Offset: 0x130c
	// Line 3096, Address: 0x11b748, Func Offset: 0x1318
	// Line 3097, Address: 0x11b75c, Func Offset: 0x132c
	// Line 3098, Address: 0x11b76c, Func Offset: 0x133c
	// Line 3099, Address: 0x11b778, Func Offset: 0x1348
	// Line 3101, Address: 0x11b788, Func Offset: 0x1358
	// Line 3107, Address: 0x11b790, Func Offset: 0x1360
	// Line 3108, Address: 0x11b7a4, Func Offset: 0x1374
	// Line 3109, Address: 0x11b7b4, Func Offset: 0x1384
	// Line 3110, Address: 0x11b7c0, Func Offset: 0x1390
	// Line 3118, Address: 0x11b7d0, Func Offset: 0x13a0
	// Func End, Address: 0x11b7f0, Func Offset: 0x13c0
}

// 
// Start address: 0x11b7f0
void SubCharacter::PlayerUpdateStatusUpper3D()
{
	PAD_3D* p3d;
	PAD_INFO* p_pre;
	PAD_INFO* p;
	shPlayerWork* w;
	// Line 3129, Address: 0x11b7f0, Func Offset: 0
	// Line 3132, Address: 0x11b80c, Func Offset: 0x1c
	// Line 3133, Address: 0x11b814, Func Offset: 0x24
	// Line 3134, Address: 0x11b81c, Func Offset: 0x2c
	// Line 3142, Address: 0x11b824, Func Offset: 0x34
	// Line 3145, Address: 0x11b870, Func Offset: 0x80
	// Line 3146, Address: 0x11b87c, Func Offset: 0x8c
	// Line 3147, Address: 0x11b888, Func Offset: 0x98
	// Line 3148, Address: 0x11b898, Func Offset: 0xa8
	// Line 3150, Address: 0x11b8a8, Func Offset: 0xb8
	// Line 3171, Address: 0x11b8b0, Func Offset: 0xc0
	// Line 3172, Address: 0x11b8bc, Func Offset: 0xcc
	// Line 3173, Address: 0x11b8c8, Func Offset: 0xd8
	// Line 3174, Address: 0x11b8d8, Func Offset: 0xe8
	// Line 3176, Address: 0x11b8e8, Func Offset: 0xf8
	// Line 3179, Address: 0x11b8f0, Func Offset: 0x100
	// Line 3180, Address: 0x11b8fc, Func Offset: 0x10c
	// Line 3181, Address: 0x11b908, Func Offset: 0x118
	// Line 3182, Address: 0x11b918, Func Offset: 0x128
	// Line 3184, Address: 0x11b928, Func Offset: 0x138
	// Line 3187, Address: 0x11b930, Func Offset: 0x140
	// Line 3188, Address: 0x11b93c, Func Offset: 0x14c
	// Line 3189, Address: 0x11b948, Func Offset: 0x158
	// Line 3191, Address: 0x11b958, Func Offset: 0x168
	// Line 3194, Address: 0x11b960, Func Offset: 0x170
	// Line 3195, Address: 0x11b96c, Func Offset: 0x17c
	// Line 3196, Address: 0x11b978, Func Offset: 0x188
	// Line 3198, Address: 0x11b988, Func Offset: 0x198
	// Line 3210, Address: 0x11b990, Func Offset: 0x1a0
	// Line 3220, Address: 0x11b99c, Func Offset: 0x1ac
	// Line 3221, Address: 0x11b9b0, Func Offset: 0x1c0
	// Line 3225, Address: 0x11b9bc, Func Offset: 0x1cc
	// Line 3226, Address: 0x11b9d0, Func Offset: 0x1e0
	// Line 3227, Address: 0x11b9e0, Func Offset: 0x1f0
	// Line 3228, Address: 0x11b9ec, Func Offset: 0x1fc
	// Line 3229, Address: 0x11b9fc, Func Offset: 0x20c
	// Line 3232, Address: 0x11ba0c, Func Offset: 0x21c
	// Line 3233, Address: 0x11ba20, Func Offset: 0x230
	// Line 3236, Address: 0x11ba44, Func Offset: 0x254
	// Line 3242, Address: 0x11ba64, Func Offset: 0x274
	// Line 3244, Address: 0x11ba6c, Func Offset: 0x27c
	// Line 3245, Address: 0x11ba78, Func Offset: 0x288
	// Line 3251, Address: 0x11ba80, Func Offset: 0x290
	// Line 3252, Address: 0x11ba8c, Func Offset: 0x29c
	// Line 3253, Address: 0x11bac0, Func Offset: 0x2d0
	// Line 3255, Address: 0x11bacc, Func Offset: 0x2dc
	// Line 3256, Address: 0x11bb00, Func Offset: 0x310
	// Line 3259, Address: 0x11bb0c, Func Offset: 0x31c
	// Line 3265, Address: 0x11bb18, Func Offset: 0x328
	// Line 3266, Address: 0x11bb40, Func Offset: 0x350
	// Line 3267, Address: 0x11bb50, Func Offset: 0x360
	// Line 3268, Address: 0x11bb60, Func Offset: 0x370
	// Line 3272, Address: 0x11bb70, Func Offset: 0x380
	// Line 3273, Address: 0x11bb7c, Func Offset: 0x38c
	// Line 3274, Address: 0x11bb84, Func Offset: 0x394
	// Line 3275, Address: 0x11bb8c, Func Offset: 0x39c
	// Line 3277, Address: 0x11bb90, Func Offset: 0x3a0
	// Line 3284, Address: 0x11bb98, Func Offset: 0x3a8
	// Line 3285, Address: 0x11bbac, Func Offset: 0x3bc
	// Line 3286, Address: 0x11bbbc, Func Offset: 0x3cc
	// Line 3287, Address: 0x11bbc8, Func Offset: 0x3d8
	// Line 3288, Address: 0x11bbd8, Func Offset: 0x3e8
	// Line 3289, Address: 0x11bbe8, Func Offset: 0x3f8
	// Line 3291, Address: 0x11bbf8, Func Offset: 0x408
	// Line 3293, Address: 0x11bc00, Func Offset: 0x410
	// Line 3304, Address: 0x11bc08, Func Offset: 0x418
	// Line 3306, Address: 0x11bc34, Func Offset: 0x444
	// Line 3307, Address: 0x11bc48, Func Offset: 0x458
	// Line 3308, Address: 0x11bc54, Func Offset: 0x464
	// Line 3309, Address: 0x11bc64, Func Offset: 0x474
	// Line 3312, Address: 0x11bc74, Func Offset: 0x484
	// Line 3314, Address: 0x11bc7c, Func Offset: 0x48c
	// Line 3315, Address: 0x11bc90, Func Offset: 0x4a0
	// Line 3316, Address: 0x11bca0, Func Offset: 0x4b0
	// Line 3317, Address: 0x11bcac, Func Offset: 0x4bc
	// Line 3320, Address: 0x11bcbc, Func Offset: 0x4cc
	// Line 3322, Address: 0x11bcc4, Func Offset: 0x4d4
	// Line 3323, Address: 0x11bcd8, Func Offset: 0x4e8
	// Line 3324, Address: 0x11bce8, Func Offset: 0x4f8
	// Line 3325, Address: 0x11bcf4, Func Offset: 0x504
	// Line 3328, Address: 0x11bd04, Func Offset: 0x514
	// Line 3330, Address: 0x11bd0c, Func Offset: 0x51c
	// Line 3331, Address: 0x11bd20, Func Offset: 0x530
	// Line 3332, Address: 0x11bd30, Func Offset: 0x540
	// Line 3333, Address: 0x11bd3c, Func Offset: 0x54c
	// Line 3336, Address: 0x11bd4c, Func Offset: 0x55c
	// Line 3338, Address: 0x11bd54, Func Offset: 0x564
	// Line 3339, Address: 0x11bd60, Func Offset: 0x570
	// Line 3340, Address: 0x11bd74, Func Offset: 0x584
	// Line 3341, Address: 0x11bd84, Func Offset: 0x594
	// Line 3342, Address: 0x11bd90, Func Offset: 0x5a0
	// Line 3346, Address: 0x11bda0, Func Offset: 0x5b0
	// Line 3348, Address: 0x11bda8, Func Offset: 0x5b8
	// Line 3349, Address: 0x11bdbc, Func Offset: 0x5cc
	// Line 3350, Address: 0x11bdcc, Func Offset: 0x5dc
	// Line 3351, Address: 0x11bdd8, Func Offset: 0x5e8
	// Line 3352, Address: 0x11bde8, Func Offset: 0x5f8
	// Line 3353, Address: 0x11bdf8, Func Offset: 0x608
	// Line 3356, Address: 0x11be08, Func Offset: 0x618
	// Line 3358, Address: 0x11be10, Func Offset: 0x620
	// Line 3359, Address: 0x11be24, Func Offset: 0x634
	// Line 3360, Address: 0x11be34, Func Offset: 0x644
	// Line 3361, Address: 0x11be40, Func Offset: 0x650
	// Line 3364, Address: 0x11be50, Func Offset: 0x660
	// Line 3366, Address: 0x11be58, Func Offset: 0x668
	// Line 3367, Address: 0x11be6c, Func Offset: 0x67c
	// Line 3368, Address: 0x11be7c, Func Offset: 0x68c
	// Line 3369, Address: 0x11be88, Func Offset: 0x698
	// Line 3372, Address: 0x11be98, Func Offset: 0x6a8
	// Line 3374, Address: 0x11bea0, Func Offset: 0x6b0
	// Line 3375, Address: 0x11beb4, Func Offset: 0x6c4
	// Line 3376, Address: 0x11bec4, Func Offset: 0x6d4
	// Line 3377, Address: 0x11bed0, Func Offset: 0x6e0
	// Line 3379, Address: 0x11bee0, Func Offset: 0x6f0
	// Line 3380, Address: 0x11bef4, Func Offset: 0x704
	// Line 3384, Address: 0x11bf04, Func Offset: 0x714
	// Line 3386, Address: 0x11bf0c, Func Offset: 0x71c
	// Line 3387, Address: 0x11bf20, Func Offset: 0x730
	// Line 3388, Address: 0x11bf30, Func Offset: 0x740
	// Line 3389, Address: 0x11bf3c, Func Offset: 0x74c
	// Line 3391, Address: 0x11bf4c, Func Offset: 0x75c
	// Line 3392, Address: 0x11bf60, Func Offset: 0x770
	// Line 3397, Address: 0x11bf70, Func Offset: 0x780
	// Line 3399, Address: 0x11bf78, Func Offset: 0x788
	// Line 3400, Address: 0x11bf8c, Func Offset: 0x79c
	// Line 3401, Address: 0x11bf9c, Func Offset: 0x7ac
	// Line 3402, Address: 0x11bfa8, Func Offset: 0x7b8
	// Line 3404, Address: 0x11bfb8, Func Offset: 0x7c8
	// Line 3405, Address: 0x11bfcc, Func Offset: 0x7dc
	// Line 3409, Address: 0x11bfdc, Func Offset: 0x7ec
	// Line 3411, Address: 0x11bfe4, Func Offset: 0x7f4
	// Line 3412, Address: 0x11bff8, Func Offset: 0x808
	// Line 3413, Address: 0x11c008, Func Offset: 0x818
	// Line 3414, Address: 0x11c014, Func Offset: 0x824
	// Line 3416, Address: 0x11c024, Func Offset: 0x834
	// Line 3417, Address: 0x11c038, Func Offset: 0x848
	// Line 3421, Address: 0x11c048, Func Offset: 0x858
	// Line 3423, Address: 0x11c050, Func Offset: 0x860
	// Line 3424, Address: 0x11c064, Func Offset: 0x874
	// Line 3425, Address: 0x11c074, Func Offset: 0x884
	// Line 3426, Address: 0x11c080, Func Offset: 0x890
	// Line 3428, Address: 0x11c090, Func Offset: 0x8a0
	// Line 3429, Address: 0x11c0a4, Func Offset: 0x8b4
	// Line 3433, Address: 0x11c0b4, Func Offset: 0x8c4
	// Line 3435, Address: 0x11c0bc, Func Offset: 0x8cc
	// Line 3436, Address: 0x11c0d0, Func Offset: 0x8e0
	// Line 3437, Address: 0x11c0e0, Func Offset: 0x8f0
	// Line 3438, Address: 0x11c0ec, Func Offset: 0x8fc
	// Line 3440, Address: 0x11c0fc, Func Offset: 0x90c
	// Line 3441, Address: 0x11c110, Func Offset: 0x920
	// Line 3445, Address: 0x11c120, Func Offset: 0x930
	// Line 3447, Address: 0x11c128, Func Offset: 0x938
	// Line 3448, Address: 0x11c13c, Func Offset: 0x94c
	// Line 3449, Address: 0x11c14c, Func Offset: 0x95c
	// Line 3450, Address: 0x11c158, Func Offset: 0x968
	// Line 3452, Address: 0x11c168, Func Offset: 0x978
	// Line 3453, Address: 0x11c17c, Func Offset: 0x98c
	// Line 3457, Address: 0x11c18c, Func Offset: 0x99c
	// Line 3459, Address: 0x11c194, Func Offset: 0x9a4
	// Line 3460, Address: 0x11c1a8, Func Offset: 0x9b8
	// Line 3461, Address: 0x11c1b8, Func Offset: 0x9c8
	// Line 3462, Address: 0x11c1c4, Func Offset: 0x9d4
	// Line 3464, Address: 0x11c1d4, Func Offset: 0x9e4
	// Line 3465, Address: 0x11c1e8, Func Offset: 0x9f8
	// Line 3469, Address: 0x11c1f8, Func Offset: 0xa08
	// Line 3471, Address: 0x11c200, Func Offset: 0xa10
	// Line 3472, Address: 0x11c214, Func Offset: 0xa24
	// Line 3473, Address: 0x11c224, Func Offset: 0xa34
	// Line 3474, Address: 0x11c230, Func Offset: 0xa40
	// Line 3476, Address: 0x11c240, Func Offset: 0xa50
	// Line 3477, Address: 0x11c254, Func Offset: 0xa64
	// Line 3481, Address: 0x11c264, Func Offset: 0xa74
	// Line 3483, Address: 0x11c26c, Func Offset: 0xa7c
	// Line 3484, Address: 0x11c27c, Func Offset: 0xa8c
	// Line 3485, Address: 0x11c288, Func Offset: 0xa98
	// Line 3486, Address: 0x11c298, Func Offset: 0xaa8
	// Line 3488, Address: 0x11c2a8, Func Offset: 0xab8
	// Line 3490, Address: 0x11c2b0, Func Offset: 0xac0
	// Line 3491, Address: 0x11c2c0, Func Offset: 0xad0
	// Line 3492, Address: 0x11c2cc, Func Offset: 0xadc
	// Line 3493, Address: 0x11c2dc, Func Offset: 0xaec
	// Line 3495, Address: 0x11c2ec, Func Offset: 0xafc
	// Line 3497, Address: 0x11c2f4, Func Offset: 0xb04
	// Line 3498, Address: 0x11c304, Func Offset: 0xb14
	// Line 3499, Address: 0x11c310, Func Offset: 0xb20
	// Line 3513, Address: 0x11c320, Func Offset: 0xb30
	// Func End, Address: 0x11c340, Func Offset: 0xb50
}

// 
// Start address: 0x11c340
void SubCharacter::PlayerUpdatePosition3D()
{
	float cos_z;
	float cos_x;
	void(*upper_func)(SubCharacter*);
	void(*lower_func)(SubCharacter*);
	// Line 3527, Address: 0x11c340, Func Offset: 0
	// Line 3579, Address: 0x11c354, Func Offset: 0x14
	// Line 3580, Address: 0x11c394, Func Offset: 0x54
	// Line 3582, Address: 0x11c3d4, Func Offset: 0x94
	// Line 3584, Address: 0x11c3ec, Func Offset: 0xac
	// Line 3586, Address: 0x11c3f4, Func Offset: 0xb4
	// Line 3588, Address: 0x11c410, Func Offset: 0xd0
	// Line 3594, Address: 0x11c41c, Func Offset: 0xdc
	// Line 3595, Address: 0x11c42c, Func Offset: 0xec
	// Line 3604, Address: 0x11c444, Func Offset: 0x104
	// Line 3606, Address: 0x11c4f4, Func Offset: 0x1b4
	// Line 3608, Address: 0x11c5a4, Func Offset: 0x264
	// Line 3615, Address: 0x11c5ac, Func Offset: 0x26c
	// Line 3616, Address: 0x11c5c0, Func Offset: 0x280
	// Line 3618, Address: 0x11c5d0, Func Offset: 0x290
	// Line 3619, Address: 0x11c5e0, Func Offset: 0x2a0
	// Line 3623, Address: 0x11c5f0, Func Offset: 0x2b0
	// Line 3624, Address: 0x11c5fc, Func Offset: 0x2bc
	// Line 3625, Address: 0x11c608, Func Offset: 0x2c8
	// Line 3628, Address: 0x11c614, Func Offset: 0x2d4
	// Line 3629, Address: 0x11c630, Func Offset: 0x2f0
	// Line 3630, Address: 0x11c644, Func Offset: 0x304
	// Line 3665, Address: 0x11c658, Func Offset: 0x318
	// Func End, Address: 0x11c670, Func Offset: 0x330
}

// 
// Start address: 0x11c670
void PlayerUpdateStatusLower2nd3D()
{
	shPlayerWork* w;
	// Line 3677, Address: 0x11c670, Func Offset: 0
	// Line 3678, Address: 0x11c67c, Func Offset: 0xc
	// Line 3681, Address: 0x11c684, Func Offset: 0x14
	// Line 3683, Address: 0x11c6c4, Func Offset: 0x54
	// Line 3684, Address: 0x11c6d8, Func Offset: 0x68
	// Line 3685, Address: 0x11c6e8, Func Offset: 0x78
	// Line 3686, Address: 0x11c6f4, Func Offset: 0x84
	// Line 3689, Address: 0x11c704, Func Offset: 0x94
	// Line 3691, Address: 0x11c70c, Func Offset: 0x9c
	// Line 3692, Address: 0x11c720, Func Offset: 0xb0
	// Line 3693, Address: 0x11c730, Func Offset: 0xc0
	// Line 3694, Address: 0x11c73c, Func Offset: 0xcc
	// Line 3695, Address: 0x11c74c, Func Offset: 0xdc
	// Line 3698, Address: 0x11c75c, Func Offset: 0xec
	// Line 3700, Address: 0x11c764, Func Offset: 0xf4
	// Line 3701, Address: 0x11c778, Func Offset: 0x108
	// Line 3703, Address: 0x11c794, Func Offset: 0x124
	// Line 3704, Address: 0x11c7a4, Func Offset: 0x134
	// Line 3706, Address: 0x11c7b4, Func Offset: 0x144
	// Line 3710, Address: 0x11c7bc, Func Offset: 0x14c
	// Line 3711, Address: 0x11c7d0, Func Offset: 0x160
	// Line 3712, Address: 0x11c7e0, Func Offset: 0x170
	// Line 3713, Address: 0x11c7ec, Func Offset: 0x17c
	// Line 3716, Address: 0x11c7fc, Func Offset: 0x18c
	// Line 3717, Address: 0x11c80c, Func Offset: 0x19c
	// Line 3718, Address: 0x11c81c, Func Offset: 0x1ac
	// Line 3719, Address: 0x11c82c, Func Offset: 0x1bc
	// Line 3720, Address: 0x11c83c, Func Offset: 0x1cc
	// Line 3721, Address: 0x11c84c, Func Offset: 0x1dc
	// Line 3722, Address: 0x11c85c, Func Offset: 0x1ec
	// Line 3723, Address: 0x11c86c, Func Offset: 0x1fc
	// Line 3724, Address: 0x11c87c, Func Offset: 0x20c
	// Line 3739, Address: 0x11c88c, Func Offset: 0x21c
	// Line 3745, Address: 0x11c8d4, Func Offset: 0x264
	// Line 3746, Address: 0x11c8dc, Func Offset: 0x26c
	// Line 3748, Address: 0x11c8e4, Func Offset: 0x274
	// Line 3752, Address: 0x11c8e8, Func Offset: 0x278
	// Func End, Address: 0x11c8fc, Func Offset: 0x28c
}

// 
// Start address: 0x11c900
void SubCharacter::PlayerCheckAttack3D()
{
	// Line 3780, Address: 0x11c900, Func Offset: 0
	// Line 3781, Address: 0x11c908, Func Offset: 0x8
	// Line 3782, Address: 0x11c910, Func Offset: 0x10
	// Func End, Address: 0x11c920, Func Offset: 0x20
}

// 
// Start address: 0x11c920
void SubCharacter::PlayerCheckControl3D()
{
	// Line 3795, Address: 0x11c920, Func Offset: 0
	// Line 3796, Address: 0x11c930, Func Offset: 0x10
	// Line 3797, Address: 0x11c938, Func Offset: 0x18
	// Line 3798, Address: 0x11c944, Func Offset: 0x24
	// Line 3799, Address: 0x11c950, Func Offset: 0x30
	// Line 3800, Address: 0x11c95c, Func Offset: 0x3c
	// Line 3805, Address: 0x11c968, Func Offset: 0x48
	// Func End, Address: 0x11c97c, Func Offset: 0x5c
}

