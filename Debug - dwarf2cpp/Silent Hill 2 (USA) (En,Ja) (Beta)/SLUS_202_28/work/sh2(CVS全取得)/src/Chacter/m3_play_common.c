typedef struct _anon0;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon1;
typedef struct SubCharacter;
typedef struct _CL_VHIT_RESULT;
typedef union _anon2;
typedef struct Stage_Data;
typedef struct Event_List;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct Item_List;
typedef struct shSkelton;
typedef struct Model_List;
typedef struct _anon3;
typedef struct _AnimeInfo;
typedef struct Enemy_List;
typedef struct shPlayerWork;
typedef struct PAD_INFO;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct PAD_3D;
typedef struct _anon4;
typedef struct PAD_2D;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct Pad_KeyConfig;
typedef struct Playing_Info;
typedef struct shBattleInfo;
typedef struct _CL_VHIT_WALL;

typedef void(*type_0)();
typedef int(*type_1)();
typedef void(*type_11)(SubCharacter*);
typedef void(*type_16)(SubCharacter*);

typedef unsigned char type_2[20];
typedef float type_3[7];
typedef unsigned int type_4[7];
typedef float type_5[7];
typedef float type_6[7];
typedef unsigned int type_7[32];
typedef shAttackInfo type_8[66];
typedef unsigned char type_9[14];
typedef unsigned char type_10[2];
typedef float type_12[4][2];
typedef float type_13[4];
typedef float type_14[4][4];
typedef unsigned char type_15[69];
typedef unsigned char type_17[4];
typedef unsigned int type_18[32];
typedef float type_19[7];
typedef float type_20[7];
typedef PAD_INFO type_21[10];
typedef unsigned char type_22[14];
typedef float type_23[4];
typedef float type_24[7];
typedef float type_25[2];
typedef float type_26[4];
typedef unsigned char type_27[4];
typedef unsigned char type_28[4];
typedef unsigned char type_29[97];
typedef unsigned int type_30[9];
typedef float type_31[4][5];
typedef unsigned char type_32[2];
typedef unsigned char type_33[2];
typedef int type_34[6];

struct _anon0
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
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

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
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
	_anon3 pos;
	_anon3 rot;
	_anon3 pos_spd;
	_anon3 rot_spd;
	_anon4 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon3 b_pos;
	_anon3 b_rot;
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

	void PlayerUpdateStatus();
	void PlayerCheckAttack();
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
	_anon0* gfw_func;
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

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon4 src_m;
	_anon3 src_t;
	_anon4 des_m;
	_anon3 des_t;
	_anon3 axis;
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
};

struct _anon3
{
	float x;
	float y;
	float z;
	float w;
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

struct shPlayerWork
{
	SubCharacter* player;
	_anon3 dist_rot;
	_anon3 dist_pos;
	_anon3 pos;
	_anon3 rot;
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
	_anon3 tgt_body_angle;
	_anon3 tgt_neck_angle;
	_anon3 tgt_arms_angle;
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

struct _anon4
{
	float d[4][4];
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
shPlayerWork sh2jms;
float dtf;
int dt;
Stage_Data* stage;
Pad_KeyConfig key_config;
Playing_Info playing;

void PlayerCheckHuggedPos(float* l_pos, int dir, float mov);
void PlayerSetDT();
void PlayerUpdateStatus();
int PlayerCheckKeyLStickTrg(int dir);
void PlayerCheckHuggingButton();
void PlayerSpeedDownToStand(SubCharacter* p);
void PlayerSetAttackWithWalkIsOk();
void PlayerSetAttackWithRunIsOk();
void PlayerCheckAimingToEnemy(SubCharacter* p, SubCharacter* target);
void PlayerCheckAttack();
void lower_stand(SubCharacter* p);
void upper_stand(SubCharacter* p);
void lower_relax(SubCharacter* p);
void upper_relax();
void lower_alert();
void upper_alert();
void lower_tired(SubCharacter* p);
void upper_tired(SubCharacter* p);
void lower_ready(SubCharacter* p);
void upper_ready();
void lower_readyoff();
void upper_readyoff();
void upper_run1(SubCharacter* p);
void upper_run2(SubCharacter* p);
void upper_run3(SubCharacter* p);
void lower_hold(SubCharacter* p);
void upper_hold(SubCharacter* p);
void lower_release(SubCharacter* p);
void upper_release();
void lower_attack(SubCharacter* p);
void upper_attack(SubCharacter* p);
void lower_kick(SubCharacter* p);
void upper_kick(SubCharacter* p);
void lower_fall(SubCharacter* p);
void upper_fall();
void lower_damage(SubCharacter* p);
void upper_damage();
void lower_to_stand();
void upper_to_stand();
void upper_wall_f();
void lower_event(SubCharacter* p);
void upper_event(SubCharacter* p);

// 
// Start address: 0x21bdc0
void PlayerCheckHuggedPos(float* l_pos, int dir, float mov)
{
	int anim_counter;
	float tgt_rot;
	// Line 51, Address: 0x21bdc0, Func Offset: 0
	// Line 59, Address: 0x21bdf0, Func Offset: 0x30
	// Line 60, Address: 0x21bdfc, Func Offset: 0x3c
	// Line 63, Address: 0x21be08, Func Offset: 0x48
	// Line 65, Address: 0x21be4c, Func Offset: 0x8c
	// Line 66, Address: 0x21be50, Func Offset: 0x90
	// Line 71, Address: 0x21be98, Func Offset: 0xd8
	// Line 72, Address: 0x21beac, Func Offset: 0xec
	// Line 73, Address: 0x21beb4, Func Offset: 0xf4
	// Line 79, Address: 0x21bebc, Func Offset: 0xfc
	// Line 83, Address: 0x21bef8, Func Offset: 0x138
	// Line 84, Address: 0x21bf14, Func Offset: 0x154
	// Line 85, Address: 0x21bf30, Func Offset: 0x170
	// Line 87, Address: 0x21bf4c, Func Offset: 0x18c
	// Line 97, Address: 0x21bf88, Func Offset: 0x1c8
	// Line 98, Address: 0x21bf9c, Func Offset: 0x1dc
	// Line 99, Address: 0x21bfb4, Func Offset: 0x1f4
	// Line 100, Address: 0x21bfcc, Func Offset: 0x20c
	// Line 102, Address: 0x21bfe4, Func Offset: 0x224
	// Func End, Address: 0x21c010, Func Offset: 0x250
}

// 
// Start address: 0x21c010
void PlayerSetDT()
{
	// Line 116, Address: 0x21c010, Func Offset: 0
	// Line 117, Address: 0x21c018, Func Offset: 0x8
	// Line 118, Address: 0x21c028, Func Offset: 0x18
	// Line 119, Address: 0x21c038, Func Offset: 0x28
	// Func End, Address: 0x21c048, Func Offset: 0x38
}

// 
// Start address: 0x21c050
void SubCharacter::PlayerUpdateStatus()
{
	// Line 128, Address: 0x21c050, Func Offset: 0
	// Line 131, Address: 0x21c060, Func Offset: 0x10
	// Line 132, Address: 0x21c070, Func Offset: 0x20
	// Line 134, Address: 0x21c07c, Func Offset: 0x2c
	// Line 142, Address: 0x21c084, Func Offset: 0x34
	// Line 147, Address: 0x21c0c8, Func Offset: 0x78
	// Line 148, Address: 0x21c0d0, Func Offset: 0x80
	// Line 150, Address: 0x21c0d8, Func Offset: 0x88
	// Line 158, Address: 0x21c0e0, Func Offset: 0x90
	// Line 161, Address: 0x21c0f0, Func Offset: 0xa0
	// Line 162, Address: 0x21c104, Func Offset: 0xb4
	// Line 163, Address: 0x21c118, Func Offset: 0xc8
	// Line 164, Address: 0x21c12c, Func Offset: 0xdc
	// Line 166, Address: 0x21c140, Func Offset: 0xf0
	// Line 169, Address: 0x21c174, Func Offset: 0x124
	// Line 170, Address: 0x21c188, Func Offset: 0x138
	// Line 187, Address: 0x21c19c, Func Offset: 0x14c
	// Line 188, Address: 0x21c1a4, Func Offset: 0x154
	// Line 191, Address: 0x21c1ac, Func Offset: 0x15c
	// Line 192, Address: 0x21c1cc, Func Offset: 0x17c
	// Line 193, Address: 0x21c1e8, Func Offset: 0x198
	// Line 194, Address: 0x21c1f0, Func Offset: 0x1a0
	// Line 198, Address: 0x21c1f8, Func Offset: 0x1a8
	// Line 199, Address: 0x21c218, Func Offset: 0x1c8
	// Line 200, Address: 0x21c23c, Func Offset: 0x1ec
	// Line 204, Address: 0x21c244, Func Offset: 0x1f4
	// Func End, Address: 0x21c258, Func Offset: 0x208
}

// 
// Start address: 0x21c260
int PlayerCheckKeyLStickTrg(int dir)
{
	// Line 213, Address: 0x21c260, Func Offset: 0
	// Line 215, Address: 0x21c298, Func Offset: 0x38
	// Line 218, Address: 0x21c2c4, Func Offset: 0x64
	// Line 221, Address: 0x21c2f0, Func Offset: 0x90
	// Line 224, Address: 0x21c31c, Func Offset: 0xbc
	// Line 227, Address: 0x21c348, Func Offset: 0xe8
	// Line 228, Address: 0x21c34c, Func Offset: 0xec
	// Func End, Address: 0x21c354, Func Offset: 0xf4
}

// 
// Start address: 0x21c360
void PlayerCheckHuggingButton()
{
	float gauge;
	float pow;
	// Line 237, Address: 0x21c360, Func Offset: 0
	// Line 238, Address: 0x21c370, Func Offset: 0x10
	// Line 239, Address: 0x21c374, Func Offset: 0x14
	// Line 248, Address: 0x21c380, Func Offset: 0x20
	// Line 249, Address: 0x21c3a0, Func Offset: 0x40
	// Line 250, Address: 0x21c3c0, Func Offset: 0x60
	// Line 251, Address: 0x21c3e0, Func Offset: 0x80
	// Line 252, Address: 0x21c400, Func Offset: 0xa0
	// Line 253, Address: 0x21c420, Func Offset: 0xc0
	// Line 254, Address: 0x21c440, Func Offset: 0xe0
	// Line 255, Address: 0x21c460, Func Offset: 0x100
	// Line 256, Address: 0x21c480, Func Offset: 0x120
	// Line 257, Address: 0x21c4a0, Func Offset: 0x140
	// Line 258, Address: 0x21c4b8, Func Offset: 0x158
	// Line 259, Address: 0x21c4d0, Func Offset: 0x170
	// Line 260, Address: 0x21c4e8, Func Offset: 0x188
	// Line 261, Address: 0x21c500, Func Offset: 0x1a0
	// Line 262, Address: 0x21c518, Func Offset: 0x1b8
	// Line 264, Address: 0x21c52c, Func Offset: 0x1cc
	// Line 265, Address: 0x21c53c, Func Offset: 0x1dc
	// Line 267, Address: 0x21c544, Func Offset: 0x1e4
	// Func End, Address: 0x21c55c, Func Offset: 0x1fc
}

// 
// Start address: 0x21c560
void PlayerSpeedDownToStand(SubCharacter* p)
{
	// Line 275, Address: 0x21c560, Func Offset: 0
	// Line 277, Address: 0x21c570, Func Offset: 0x10
	// Line 284, Address: 0x21c5bc, Func Offset: 0x5c
	// Line 286, Address: 0x21c5e0, Func Offset: 0x80
	// Line 289, Address: 0x21c5e8, Func Offset: 0x88
	// Line 293, Address: 0x21c60c, Func Offset: 0xac
	// Line 295, Address: 0x21c63c, Func Offset: 0xdc
	// Line 296, Address: 0x21c64c, Func Offset: 0xec
	// Line 297, Address: 0x21c668, Func Offset: 0x108
	// Line 300, Address: 0x21c66c, Func Offset: 0x10c
	// Func End, Address: 0x21c680, Func Offset: 0x120
}

// 
// Start address: 0x21c680
void PlayerSetAttackWithWalkIsOk()
{
	// Line 308, Address: 0x21c680, Func Offset: 0
	// Line 324, Address: 0x21c688, Func Offset: 0x8
	// Line 325, Address: 0x21c6a8, Func Offset: 0x28
	// Line 326, Address: 0x21c6bc, Func Offset: 0x3c
	// Line 331, Address: 0x21c6e4, Func Offset: 0x64
	// Line 332, Address: 0x21c6f0, Func Offset: 0x70
	// Line 336, Address: 0x21c6f8, Func Offset: 0x78
	// Line 337, Address: 0x21c700, Func Offset: 0x80
	// Func End, Address: 0x21c710, Func Offset: 0x90
}

// 
// Start address: 0x21c710
void PlayerSetAttackWithRunIsOk()
{
	// Line 344, Address: 0x21c710, Func Offset: 0
	// Line 345, Address: 0x21c718, Func Offset: 0x8
	// Line 346, Address: 0x21c738, Func Offset: 0x28
	// Line 347, Address: 0x21c74c, Func Offset: 0x3c
	// Line 352, Address: 0x21c774, Func Offset: 0x64
	// Line 353, Address: 0x21c780, Func Offset: 0x70
	// Line 357, Address: 0x21c788, Func Offset: 0x78
	// Line 358, Address: 0x21c790, Func Offset: 0x80
	// Func End, Address: 0x21c7a0, Func Offset: 0x90
}

// 
// Start address: 0x21c7a0
void PlayerCheckAimingToEnemy(SubCharacter* p, SubCharacter* target)
{
	float mov_angle;
	float roty_tmp;
	float to_target;
	// Line 367, Address: 0x21c7a0, Func Offset: 0
	// Line 373, Address: 0x21c7bc, Func Offset: 0x1c
	// Line 376, Address: 0x21c7c4, Func Offset: 0x24
	// Line 380, Address: 0x21c7e8, Func Offset: 0x48
	// Line 381, Address: 0x21c7fc, Func Offset: 0x5c
	// Line 382, Address: 0x21c86c, Func Offset: 0xcc
	// Line 383, Address: 0x21c884, Func Offset: 0xe4
	// Line 384, Address: 0x21c898, Func Offset: 0xf8
	// Line 386, Address: 0x21c8a4, Func Offset: 0x104
	// Line 387, Address: 0x21c8b0, Func Offset: 0x110
	// Line 388, Address: 0x21c8b8, Func Offset: 0x118
	// Line 389, Address: 0x21c8cc, Func Offset: 0x12c
	// Line 391, Address: 0x21c8d8, Func Offset: 0x138
	// Line 393, Address: 0x21c8e4, Func Offset: 0x144
	// Line 394, Address: 0x21c8f4, Func Offset: 0x154
	// Func End, Address: 0x21c914, Func Offset: 0x174
}

// 
// Start address: 0x21c920
void SubCharacter::PlayerCheckAttack()
{
	PAD_INFO* pad;
	shPlayerWork* w;
	_AnimeInfo* a_info;
	// Line 403, Address: 0x21c920, Func Offset: 0
	// Line 404, Address: 0x21c934, Func Offset: 0x14
	// Line 405, Address: 0x21c940, Func Offset: 0x20
	// Line 410, Address: 0x21c948, Func Offset: 0x28
	// Line 412, Address: 0x21c97c, Func Offset: 0x5c
	// Line 413, Address: 0x21c98c, Func Offset: 0x6c
	// Line 418, Address: 0x21c994, Func Offset: 0x74
	// Line 420, Address: 0x21c9bc, Func Offset: 0x9c
	// Line 421, Address: 0x21c9c8, Func Offset: 0xa8
	// Line 422, Address: 0x21c9d8, Func Offset: 0xb8
	// Line 423, Address: 0x21c9e0, Func Offset: 0xc0
	// Line 428, Address: 0x21c9f0, Func Offset: 0xd0
	// Line 429, Address: 0x21ca04, Func Offset: 0xe4
	// Line 430, Address: 0x21ca10, Func Offset: 0xf0
	// Line 431, Address: 0x21ca14, Func Offset: 0xf4
	// Line 435, Address: 0x21ca40, Func Offset: 0x120
	// Line 438, Address: 0x21ca4c, Func Offset: 0x12c
	// Line 439, Address: 0x21ca5c, Func Offset: 0x13c
	// Line 440, Address: 0x21ca68, Func Offset: 0x148
	// Line 441, Address: 0x21ca78, Func Offset: 0x158
	// Line 443, Address: 0x21ca88, Func Offset: 0x168
	// Line 444, Address: 0x21ca98, Func Offset: 0x178
	// Line 445, Address: 0x21caa8, Func Offset: 0x188
	// Line 448, Address: 0x21cab8, Func Offset: 0x198
	// Line 450, Address: 0x21cabc, Func Offset: 0x19c
	// Line 451, Address: 0x21cac4, Func Offset: 0x1a4
	// Line 453, Address: 0x21cac8, Func Offset: 0x1a8
	// Line 455, Address: 0x21cad0, Func Offset: 0x1b0
	// Line 457, Address: 0x21cae0, Func Offset: 0x1c0
	// Line 460, Address: 0x21caec, Func Offset: 0x1cc
	// Line 462, Address: 0x21caf8, Func Offset: 0x1d8
	// Line 465, Address: 0x21cb24, Func Offset: 0x204
	// Line 466, Address: 0x21cb3c, Func Offset: 0x21c
	// Line 467, Address: 0x21cb40, Func Offset: 0x220
	// Line 468, Address: 0x21cb48, Func Offset: 0x228
	// Line 471, Address: 0x21cb50, Func Offset: 0x230
	// Line 473, Address: 0x21cb74, Func Offset: 0x254
	// Line 475, Address: 0x21cb7c, Func Offset: 0x25c
	// Line 476, Address: 0x21cb84, Func Offset: 0x264
	// Line 477, Address: 0x21cb88, Func Offset: 0x268
	// Line 478, Address: 0x21cb90, Func Offset: 0x270
	// Line 479, Address: 0x21cb98, Func Offset: 0x278
	// Line 483, Address: 0x21cb9c, Func Offset: 0x27c
	// Line 484, Address: 0x21cba4, Func Offset: 0x284
	// Line 485, Address: 0x21cbb0, Func Offset: 0x290
	// Line 488, Address: 0x21cbb8, Func Offset: 0x298
	// Line 496, Address: 0x21cbf8, Func Offset: 0x2d8
	// Line 497, Address: 0x21cc08, Func Offset: 0x2e8
	// Line 499, Address: 0x21cc10, Func Offset: 0x2f0
	// Line 502, Address: 0x21cc20, Func Offset: 0x300
	// Line 505, Address: 0x21cc28, Func Offset: 0x308
	// Line 506, Address: 0x21cc40, Func Offset: 0x320
	// Line 507, Address: 0x21cc48, Func Offset: 0x328
	// Line 508, Address: 0x21cc50, Func Offset: 0x330
	// Line 509, Address: 0x21cc58, Func Offset: 0x338
	// Line 515, Address: 0x21cc60, Func Offset: 0x340
	// Line 521, Address: 0x21cc9c, Func Offset: 0x37c
	// Line 522, Address: 0x21ccac, Func Offset: 0x38c
	// Line 523, Address: 0x21ccbc, Func Offset: 0x39c
	// Line 524, Address: 0x21cccc, Func Offset: 0x3ac
	// Line 525, Address: 0x21ccdc, Func Offset: 0x3bc
	// Line 534, Address: 0x21ccec, Func Offset: 0x3cc
	// Line 536, Address: 0x21ccf4, Func Offset: 0x3d4
	// Line 537, Address: 0x21cd0c, Func Offset: 0x3ec
	// Line 538, Address: 0x21cd14, Func Offset: 0x3f4
	// Line 539, Address: 0x21cd1c, Func Offset: 0x3fc
	// Line 540, Address: 0x21cd24, Func Offset: 0x404
	// Line 543, Address: 0x21cd2c, Func Offset: 0x40c
	// Line 545, Address: 0x21cd3c, Func Offset: 0x41c
	// Line 547, Address: 0x21cd44, Func Offset: 0x424
	// Line 548, Address: 0x21cd4c, Func Offset: 0x42c
	// Line 549, Address: 0x21cd64, Func Offset: 0x444
	// Line 550, Address: 0x21cd78, Func Offset: 0x458
	// Line 551, Address: 0x21cd80, Func Offset: 0x460
	// Line 552, Address: 0x21cd88, Func Offset: 0x468
	// Line 554, Address: 0x21cd90, Func Offset: 0x470
	// Line 557, Address: 0x21cd98, Func Offset: 0x478
	// Line 558, Address: 0x21cda4, Func Offset: 0x484
	// Line 559, Address: 0x21cdac, Func Offset: 0x48c
	// Line 560, Address: 0x21cdb4, Func Offset: 0x494
	// Line 561, Address: 0x21cdbc, Func Offset: 0x49c
	// Line 564, Address: 0x21cdc4, Func Offset: 0x4a4
	// Line 567, Address: 0x21cdcc, Func Offset: 0x4ac
	// Line 568, Address: 0x21cdd8, Func Offset: 0x4b8
	// Line 569, Address: 0x21cde0, Func Offset: 0x4c0
	// Line 570, Address: 0x21cdec, Func Offset: 0x4cc
	// Line 571, Address: 0x21cdf4, Func Offset: 0x4d4
	// Line 572, Address: 0x21cdfc, Func Offset: 0x4dc
	// Line 573, Address: 0x21ce04, Func Offset: 0x4e4
	// Line 575, Address: 0x21ce0c, Func Offset: 0x4ec
	// Line 577, Address: 0x21ce14, Func Offset: 0x4f4
	// Line 578, Address: 0x21ce24, Func Offset: 0x504
	// Line 579, Address: 0x21ce28, Func Offset: 0x508
	// Line 580, Address: 0x21ce34, Func Offset: 0x514
	// Line 581, Address: 0x21ce3c, Func Offset: 0x51c
	// Line 582, Address: 0x21ce44, Func Offset: 0x524
	// Line 583, Address: 0x21ce4c, Func Offset: 0x52c
	// Line 586, Address: 0x21ce54, Func Offset: 0x534
	// Line 587, Address: 0x21ce64, Func Offset: 0x544
	// Line 588, Address: 0x21ce68, Func Offset: 0x548
	// Line 593, Address: 0x21ce70, Func Offset: 0x550
	// Line 606, Address: 0x21cea0, Func Offset: 0x580
	// Line 607, Address: 0x21ceb0, Func Offset: 0x590
	// Line 608, Address: 0x21cec0, Func Offset: 0x5a0
	// Line 609, Address: 0x21ced0, Func Offset: 0x5b0
	// Line 610, Address: 0x21cee0, Func Offset: 0x5c0
	// Line 611, Address: 0x21cef0, Func Offset: 0x5d0
	// Line 623, Address: 0x21cf00, Func Offset: 0x5e0
	// Line 625, Address: 0x21cf08, Func Offset: 0x5e8
	// Line 626, Address: 0x21cf18, Func Offset: 0x5f8
	// Line 627, Address: 0x21cf1c, Func Offset: 0x5fc
	// Line 629, Address: 0x21cf24, Func Offset: 0x604
	// Line 630, Address: 0x21cf34, Func Offset: 0x614
	// Line 631, Address: 0x21cf38, Func Offset: 0x618
	// Line 633, Address: 0x21cf40, Func Offset: 0x620
	// Line 634, Address: 0x21cf50, Func Offset: 0x630
	// Line 635, Address: 0x21cf54, Func Offset: 0x634
	// Line 636, Address: 0x21cf60, Func Offset: 0x640
	// Line 637, Address: 0x21cf68, Func Offset: 0x648
	// Line 638, Address: 0x21cf70, Func Offset: 0x650
	// Line 639, Address: 0x21cf78, Func Offset: 0x658
	// Line 644, Address: 0x21cf80, Func Offset: 0x660
	// Line 649, Address: 0x21cfbc, Func Offset: 0x69c
	// Line 650, Address: 0x21cfcc, Func Offset: 0x6ac
	// Line 651, Address: 0x21cfdc, Func Offset: 0x6bc
	// Line 652, Address: 0x21cfec, Func Offset: 0x6cc
	// Line 653, Address: 0x21cffc, Func Offset: 0x6dc
	// Line 654, Address: 0x21d00c, Func Offset: 0x6ec
	// Line 665, Address: 0x21d01c, Func Offset: 0x6fc
	// Line 667, Address: 0x21d024, Func Offset: 0x704
	// Line 668, Address: 0x21d034, Func Offset: 0x714
	// Line 669, Address: 0x21d038, Func Offset: 0x718
	// Line 671, Address: 0x21d040, Func Offset: 0x720
	// Line 672, Address: 0x21d050, Func Offset: 0x730
	// Line 673, Address: 0x21d054, Func Offset: 0x734
	// Line 677, Address: 0x21d05c, Func Offset: 0x73c
	// Line 683, Address: 0x21d098, Func Offset: 0x778
	// Line 684, Address: 0x21d0a8, Func Offset: 0x788
	// Line 685, Address: 0x21d0b8, Func Offset: 0x798
	// Line 686, Address: 0x21d0c8, Func Offset: 0x7a8
	// Line 687, Address: 0x21d0d8, Func Offset: 0x7b8
	// Line 688, Address: 0x21d0e8, Func Offset: 0x7c8
	// Line 690, Address: 0x21d0f8, Func Offset: 0x7d8
	// Line 693, Address: 0x21d100, Func Offset: 0x7e0
	// Line 696, Address: 0x21d110, Func Offset: 0x7f0
	// Line 698, Address: 0x21d118, Func Offset: 0x7f8
	// Line 699, Address: 0x21d128, Func Offset: 0x808
	// Line 700, Address: 0x21d12c, Func Offset: 0x80c
	// Line 701, Address: 0x21d138, Func Offset: 0x818
	// Line 702, Address: 0x21d140, Func Offset: 0x820
	// Line 703, Address: 0x21d148, Func Offset: 0x828
	// Line 706, Address: 0x21d150, Func Offset: 0x830
	// Line 707, Address: 0x21d160, Func Offset: 0x840
	// Line 708, Address: 0x21d164, Func Offset: 0x844
	// Line 709, Address: 0x21d170, Func Offset: 0x850
	// Line 710, Address: 0x21d178, Func Offset: 0x858
	// Line 711, Address: 0x21d180, Func Offset: 0x860
	// Line 715, Address: 0x21d188, Func Offset: 0x868
	// Line 720, Address: 0x21d198, Func Offset: 0x878
	// Line 722, Address: 0x21d1b4, Func Offset: 0x894
	// Line 723, Address: 0x21d1c4, Func Offset: 0x8a4
	// Line 727, Address: 0x21d1d4, Func Offset: 0x8b4
	// Line 729, Address: 0x21d204, Func Offset: 0x8e4
	// Line 733, Address: 0x21d208, Func Offset: 0x8e8
	// Func End, Address: 0x21d220, Func Offset: 0x900
}

// 
// Start address: 0x21d220
void lower_stand(SubCharacter* p)
{
	// Line 741, Address: 0x21d220, Func Offset: 0
	// Line 743, Address: 0x21d230, Func Offset: 0x10
	// Line 746, Address: 0x21d244, Func Offset: 0x24
	// Line 749, Address: 0x21d260, Func Offset: 0x40
	// Line 752, Address: 0x21d26c, Func Offset: 0x4c
	// Line 753, Address: 0x21d290, Func Offset: 0x70
	// Line 755, Address: 0x21d2a4, Func Offset: 0x84
	// Line 756, Address: 0x21d2dc, Func Offset: 0xbc
	// Line 758, Address: 0x21d2f0, Func Offset: 0xd0
	// Func End, Address: 0x21d304, Func Offset: 0xe4
}

// 
// Start address: 0x21d310
void upper_stand(SubCharacter* p)
{
	// Line 760, Address: 0x21d310, Func Offset: 0
	// Line 762, Address: 0x21d318, Func Offset: 0x8
	// Line 763, Address: 0x21d33c, Func Offset: 0x2c
	// Line 765, Address: 0x21d350, Func Offset: 0x40
	// Line 766, Address: 0x21d388, Func Offset: 0x78
	// Line 768, Address: 0x21d39c, Func Offset: 0x8c
	// Func End, Address: 0x21d3ac, Func Offset: 0x9c
}

// 
// Start address: 0x21d3b0
void lower_relax(SubCharacter* p)
{
	// Line 771, Address: 0x21d3b0, Func Offset: 0
	// Line 773, Address: 0x21d3c0, Func Offset: 0x10
	// Line 774, Address: 0x21d3d4, Func Offset: 0x24
	// Line 777, Address: 0x21d3e8, Func Offset: 0x38
	// Line 778, Address: 0x21d3fc, Func Offset: 0x4c
	// Line 779, Address: 0x21d410, Func Offset: 0x60
	// Line 781, Address: 0x21d424, Func Offset: 0x74
	// Func End, Address: 0x21d438, Func Offset: 0x88
}

// 
// Start address: 0x21d440
void upper_relax()
{
	// Line 783, Address: 0x21d440, Func Offset: 0
	// Line 785, Address: 0x21d448, Func Offset: 0x8
	// Line 786, Address: 0x21d45c, Func Offset: 0x1c
	// Line 789, Address: 0x21d470, Func Offset: 0x30
	// Func End, Address: 0x21d480, Func Offset: 0x40
}

// 
// Start address: 0x21d480
void lower_alert()
{
	// Line 792, Address: 0x21d480, Func Offset: 0
	// Line 794, Address: 0x21d488, Func Offset: 0x8
	// Line 795, Address: 0x21d49c, Func Offset: 0x1c
	// Line 798, Address: 0x21d4b0, Func Offset: 0x30
	// Func End, Address: 0x21d4c0, Func Offset: 0x40
}

// 
// Start address: 0x21d4c0
void upper_alert()
{
	// Line 800, Address: 0x21d4c0, Func Offset: 0
	// Line 802, Address: 0x21d4c8, Func Offset: 0x8
	// Line 803, Address: 0x21d4dc, Func Offset: 0x1c
	// Line 806, Address: 0x21d4f0, Func Offset: 0x30
	// Func End, Address: 0x21d500, Func Offset: 0x40
}

// 
// Start address: 0x21d500
void lower_tired(SubCharacter* p)
{
	_AnimeInfo* a_info;
	// Line 809, Address: 0x21d500, Func Offset: 0
	// Line 813, Address: 0x21d510, Func Offset: 0x10
	// Line 816, Address: 0x21d52c, Func Offset: 0x2c
	// Line 819, Address: 0x21d534, Func Offset: 0x34
	// Line 820, Address: 0x21d548, Func Offset: 0x48
	// Line 821, Address: 0x21d580, Func Offset: 0x80
	// Line 822, Address: 0x21d594, Func Offset: 0x94
	// Line 825, Address: 0x21d5a8, Func Offset: 0xa8
	// Line 826, Address: 0x21d5f4, Func Offset: 0xf4
	// Line 829, Address: 0x21d608, Func Offset: 0x108
	// Func End, Address: 0x21d61c, Func Offset: 0x11c
}

// 
// Start address: 0x21d620
void upper_tired(SubCharacter* p)
{
	_AnimeInfo* a_info;
	// Line 831, Address: 0x21d620, Func Offset: 0
	// Line 839, Address: 0x21d62c, Func Offset: 0xc
	// Line 840, Address: 0x21d63c, Func Offset: 0x1c
	// Line 841, Address: 0x21d674, Func Offset: 0x54
	// Line 842, Address: 0x21d688, Func Offset: 0x68
	// Line 846, Address: 0x21d69c, Func Offset: 0x7c
	// Line 847, Address: 0x21d6e8, Func Offset: 0xc8
	// Line 850, Address: 0x21d6fc, Func Offset: 0xdc
	// Func End, Address: 0x21d710, Func Offset: 0xf0
}

// 
// Start address: 0x21d710
void lower_ready(SubCharacter* p)
{
	// Line 853, Address: 0x21d710, Func Offset: 0
	// Line 855, Address: 0x21d718, Func Offset: 0x8
	// Line 858, Address: 0x21d720, Func Offset: 0x10
	// Line 859, Address: 0x21d734, Func Offset: 0x24
	// Line 860, Address: 0x21d748, Func Offset: 0x38
	// Line 868, Address: 0x21d780, Func Offset: 0x70
	// Line 870, Address: 0x21d794, Func Offset: 0x84
	// Line 871, Address: 0x21d79c, Func Offset: 0x8c
	// Line 874, Address: 0x21d7b0, Func Offset: 0xa0
	// Func End, Address: 0x21d7c0, Func Offset: 0xb0
}

// 
// Start address: 0x21d7c0
void upper_ready()
{
	// Line 876, Address: 0x21d7c0, Func Offset: 0
	// Line 878, Address: 0x21d7c8, Func Offset: 0x8
	// Line 879, Address: 0x21d7dc, Func Offset: 0x1c
	// Line 880, Address: 0x21d7f0, Func Offset: 0x30
	// Line 888, Address: 0x21d828, Func Offset: 0x68
	// Line 890, Address: 0x21d83c, Func Offset: 0x7c
	// Line 891, Address: 0x21d844, Func Offset: 0x84
	// Line 895, Address: 0x21d858, Func Offset: 0x98
	// Func End, Address: 0x21d868, Func Offset: 0xa8
}

// 
// Start address: 0x21d870
void lower_readyoff()
{
	// Line 898, Address: 0x21d870, Func Offset: 0
	// Line 900, Address: 0x21d878, Func Offset: 0x8
	// Line 901, Address: 0x21d88c, Func Offset: 0x1c
	// Line 903, Address: 0x21d8a0, Func Offset: 0x30
	// Func End, Address: 0x21d8b0, Func Offset: 0x40
}

// 
// Start address: 0x21d8b0
void upper_readyoff()
{
	// Line 905, Address: 0x21d8b0, Func Offset: 0
	// Line 907, Address: 0x21d8b8, Func Offset: 0x8
	// Line 908, Address: 0x21d8cc, Func Offset: 0x1c
	// Line 910, Address: 0x21d8e0, Func Offset: 0x30
	// Func End, Address: 0x21d8f0, Func Offset: 0x40
}

// 
// Start address: 0x21d8f0
void upper_run1(SubCharacter* p)
{
	// Line 958, Address: 0x21d8f0, Func Offset: 0
	// Line 960, Address: 0x21d8f8, Func Offset: 0x8
	// Line 961, Address: 0x21d928, Func Offset: 0x38
	// Line 962, Address: 0x21d93c, Func Offset: 0x4c
	// Line 964, Address: 0x21d950, Func Offset: 0x60
	// Func End, Address: 0x21d960, Func Offset: 0x70
}

// 
// Start address: 0x21d960
void upper_run2(SubCharacter* p)
{
	// Line 970, Address: 0x21d960, Func Offset: 0
	// Line 971, Address: 0x21d970, Func Offset: 0x10
	// Line 974, Address: 0x21d994, Func Offset: 0x34
	// Line 982, Address: 0x21d9e0, Func Offset: 0x80
	// Line 983, Address: 0x21d9f4, Func Offset: 0x94
	// Line 986, Address: 0x21da08, Func Offset: 0xa8
	// Line 989, Address: 0x21da10, Func Offset: 0xb0
	// Line 990, Address: 0x21da40, Func Offset: 0xe0
	// Line 991, Address: 0x21da54, Func Offset: 0xf4
	// Line 993, Address: 0x21da68, Func Offset: 0x108
	// Line 1001, Address: 0x21dab4, Func Offset: 0x154
	// Line 1002, Address: 0x21dac8, Func Offset: 0x168
	// Line 1008, Address: 0x21dadc, Func Offset: 0x17c
	// Func End, Address: 0x21daf0, Func Offset: 0x190
}

// 
// Start address: 0x21daf0
void upper_run3(SubCharacter* p)
{
	// Line 1011, Address: 0x21daf0, Func Offset: 0
	// Line 1012, Address: 0x21daf8, Func Offset: 0x8
	// Line 1015, Address: 0x21db1c, Func Offset: 0x2c
	// Line 1016, Address: 0x21db48, Func Offset: 0x58
	// Line 1017, Address: 0x21db5c, Func Offset: 0x6c
	// Line 1019, Address: 0x21db70, Func Offset: 0x80
	// Line 1022, Address: 0x21db78, Func Offset: 0x88
	// Line 1024, Address: 0x21dbc4, Func Offset: 0xd4
	// Line 1025, Address: 0x21dbd8, Func Offset: 0xe8
	// Line 1029, Address: 0x21dbec, Func Offset: 0xfc
	// Func End, Address: 0x21dbfc, Func Offset: 0x10c
}

// 
// Start address: 0x21dc00
void lower_hold(SubCharacter* p)
{
	int check;
	short frame;
	_AnimeInfo* a_info;
	// Line 1232, Address: 0x21dc00, Func Offset: 0
	// Line 1233, Address: 0x21dc18, Func Offset: 0x18
	// Line 1234, Address: 0x21dc28, Func Offset: 0x28
	// Line 1237, Address: 0x21dc40, Func Offset: 0x40
	// Line 1241, Address: 0x21dc4c, Func Offset: 0x4c
	// Line 1243, Address: 0x21dc74, Func Offset: 0x74
	// Line 1245, Address: 0x21dca8, Func Offset: 0xa8
	// Line 1246, Address: 0x21dcb8, Func Offset: 0xb8
	// Line 1248, Address: 0x21dcbc, Func Offset: 0xbc
	// Line 1251, Address: 0x21dcf8, Func Offset: 0xf8
	// Line 1254, Address: 0x21dd00, Func Offset: 0x100
	// Line 1255, Address: 0x21dd1c, Func Offset: 0x11c
	// Line 1257, Address: 0x21dd50, Func Offset: 0x150
	// Line 1258, Address: 0x21dd60, Func Offset: 0x160
	// Line 1260, Address: 0x21dd64, Func Offset: 0x164
	// Line 1271, Address: 0x21dda0, Func Offset: 0x1a0
	// Line 1273, Address: 0x21ddd0, Func Offset: 0x1d0
	// Line 1274, Address: 0x21dde4, Func Offset: 0x1e4
	// Line 1277, Address: 0x21ddf8, Func Offset: 0x1f8
	// Line 1279, Address: 0x21de04, Func Offset: 0x204
	// Line 1284, Address: 0x21de50, Func Offset: 0x250
	// Line 1285, Address: 0x21de5c, Func Offset: 0x25c
	// Line 1287, Address: 0x21de64, Func Offset: 0x264
	// Line 1292, Address: 0x21de70, Func Offset: 0x270
	// Line 1293, Address: 0x21de80, Func Offset: 0x280
	// Line 1298, Address: 0x21dec0, Func Offset: 0x2c0
	// Line 1301, Address: 0x21dee4, Func Offset: 0x2e4
	// Line 1303, Address: 0x21df04, Func Offset: 0x304
	// Line 1305, Address: 0x21df0c, Func Offset: 0x30c
	// Line 1308, Address: 0x21df14, Func Offset: 0x314
	// Line 1310, Address: 0x21df34, Func Offset: 0x334
	// Line 1321, Address: 0x21df3c, Func Offset: 0x33c
	// Line 1323, Address: 0x21df64, Func Offset: 0x364
	// Line 1324, Address: 0x21df74, Func Offset: 0x374
	// Line 1325, Address: 0x21df88, Func Offset: 0x388
	// Line 1326, Address: 0x21df9c, Func Offset: 0x39c
	// Line 1327, Address: 0x21dfb0, Func Offset: 0x3b0
	// Line 1328, Address: 0x21dfb8, Func Offset: 0x3b8
	// Line 1329, Address: 0x21dfd0, Func Offset: 0x3d0
	// Line 1331, Address: 0x21dfe4, Func Offset: 0x3e4
	// Line 1333, Address: 0x21dfec, Func Offset: 0x3ec
	// Line 1334, Address: 0x21dff4, Func Offset: 0x3f4
	// Line 1339, Address: 0x21dffc, Func Offset: 0x3fc
	// Line 1341, Address: 0x21e024, Func Offset: 0x424
	// Line 1348, Address: 0x21e028, Func Offset: 0x428
	// Line 1361, Address: 0x21e058, Func Offset: 0x458
	// Line 1362, Address: 0x21e06c, Func Offset: 0x46c
	// Line 1364, Address: 0x21e070, Func Offset: 0x470
	// Line 1370, Address: 0x21e078, Func Offset: 0x478
	// Line 1371, Address: 0x21e08c, Func Offset: 0x48c
	// Line 1373, Address: 0x21e090, Func Offset: 0x490
	// Line 1379, Address: 0x21e098, Func Offset: 0x498
	// Line 1380, Address: 0x21e0a8, Func Offset: 0x4a8
	// Line 1385, Address: 0x21e0ac, Func Offset: 0x4ac
	// Line 1386, Address: 0x21e0b4, Func Offset: 0x4b4
	// Line 1387, Address: 0x21e0c0, Func Offset: 0x4c0
	// Line 1388, Address: 0x21e0d4, Func Offset: 0x4d4
	// Line 1389, Address: 0x21e0e8, Func Offset: 0x4e8
	// Line 1393, Address: 0x21e0fc, Func Offset: 0x4fc
	// Line 1395, Address: 0x21e104, Func Offset: 0x504
	// Func End, Address: 0x21e120, Func Offset: 0x520
}

// 
// Start address: 0x21e120
void upper_hold(SubCharacter* p)
{
	int check;
	_AnimeInfo* a_info;
	// Line 1398, Address: 0x21e120, Func Offset: 0
	// Line 1399, Address: 0x21e134, Func Offset: 0x14
	// Line 1404, Address: 0x21e144, Func Offset: 0x24
	// Line 1405, Address: 0x21e154, Func Offset: 0x34
	// Line 1412, Address: 0x21e168, Func Offset: 0x48
	// Line 1414, Address: 0x21e198, Func Offset: 0x78
	// Line 1415, Address: 0x21e1ac, Func Offset: 0x8c
	// Line 1419, Address: 0x21e1c0, Func Offset: 0xa0
	// Line 1421, Address: 0x21e1cc, Func Offset: 0xac
	// Line 1427, Address: 0x21e218, Func Offset: 0xf8
	// Line 1432, Address: 0x21e224, Func Offset: 0x104
	// Line 1433, Address: 0x21e234, Func Offset: 0x114
	// Line 1438, Address: 0x21e274, Func Offset: 0x154
	// Line 1441, Address: 0x21e298, Func Offset: 0x178
	// Line 1443, Address: 0x21e2b8, Func Offset: 0x198
	// Line 1445, Address: 0x21e2c0, Func Offset: 0x1a0
	// Line 1448, Address: 0x21e2c8, Func Offset: 0x1a8
	// Line 1450, Address: 0x21e2e8, Func Offset: 0x1c8
	// Line 1457, Address: 0x21e2f0, Func Offset: 0x1d0
	// Line 1458, Address: 0x21e300, Func Offset: 0x1e0
	// Line 1459, Address: 0x21e314, Func Offset: 0x1f4
	// Line 1460, Address: 0x21e328, Func Offset: 0x208
	// Line 1461, Address: 0x21e33c, Func Offset: 0x21c
	// Line 1462, Address: 0x21e344, Func Offset: 0x224
	// Line 1463, Address: 0x21e35c, Func Offset: 0x23c
	// Line 1470, Address: 0x21e370, Func Offset: 0x250
	// Line 1472, Address: 0x21e398, Func Offset: 0x278
	// Line 1474, Address: 0x21e39c, Func Offset: 0x27c
	// Line 1483, Address: 0x21e3cc, Func Offset: 0x2ac
	// Line 1486, Address: 0x21e3e0, Func Offset: 0x2c0
	// Line 1488, Address: 0x21e3e4, Func Offset: 0x2c4
	// Line 1492, Address: 0x21e3ec, Func Offset: 0x2cc
	// Line 1495, Address: 0x21e400, Func Offset: 0x2e0
	// Line 1497, Address: 0x21e404, Func Offset: 0x2e4
	// Line 1501, Address: 0x21e40c, Func Offset: 0x2ec
	// Line 1504, Address: 0x21e41c, Func Offset: 0x2fc
	// Line 1510, Address: 0x21e420, Func Offset: 0x300
	// Line 1511, Address: 0x21e428, Func Offset: 0x308
	// Line 1512, Address: 0x21e434, Func Offset: 0x314
	// Line 1513, Address: 0x21e448, Func Offset: 0x328
	// Line 1514, Address: 0x21e45c, Func Offset: 0x33c
	// Line 1517, Address: 0x21e470, Func Offset: 0x350
	// Func End, Address: 0x21e488, Func Offset: 0x368
}

// 
// Start address: 0x21e490
void lower_release(SubCharacter* p)
{
	short frame;
	// Line 1520, Address: 0x21e490, Func Offset: 0
	// Line 1521, Address: 0x21e4a4, Func Offset: 0x14
	// Line 1524, Address: 0x21e4b8, Func Offset: 0x28
	// Line 1527, Address: 0x21e4c4, Func Offset: 0x34
	// Line 1529, Address: 0x21e4ec, Func Offset: 0x5c
	// Line 1531, Address: 0x21e520, Func Offset: 0x90
	// Line 1532, Address: 0x21e530, Func Offset: 0xa0
	// Line 1533, Address: 0x21e53c, Func Offset: 0xac
	// Line 1534, Address: 0x21e578, Func Offset: 0xe8
	// Line 1535, Address: 0x21e580, Func Offset: 0xf0
	// Line 1538, Address: 0x21e5bc, Func Offset: 0x12c
	// Line 1540, Address: 0x21e5c4, Func Offset: 0x134
	// Line 1542, Address: 0x21e5f8, Func Offset: 0x168
	// Line 1543, Address: 0x21e608, Func Offset: 0x178
	// Line 1544, Address: 0x21e614, Func Offset: 0x184
	// Line 1545, Address: 0x21e650, Func Offset: 0x1c0
	// Line 1546, Address: 0x21e658, Func Offset: 0x1c8
	// Line 1553, Address: 0x21e694, Func Offset: 0x204
	// Line 1554, Address: 0x21e6a8, Func Offset: 0x218
	// Line 1555, Address: 0x21e6bc, Func Offset: 0x22c
	// Line 1558, Address: 0x21e6d0, Func Offset: 0x240
	// Func End, Address: 0x21e6e8, Func Offset: 0x258
}

// 
// Start address: 0x21e6f0
void upper_release()
{
	// Line 1560, Address: 0x21e6f0, Func Offset: 0
	// Line 1564, Address: 0x21e6f8, Func Offset: 0x8
	// Line 1569, Address: 0x21e70c, Func Offset: 0x1c
	// Line 1570, Address: 0x21e720, Func Offset: 0x30
	// Line 1582, Address: 0x21e734, Func Offset: 0x44
	// Line 1583, Address: 0x21e748, Func Offset: 0x58
	// Line 1586, Address: 0x21e750, Func Offset: 0x60
	// Line 1589, Address: 0x21e758, Func Offset: 0x68
	// Line 1596, Address: 0x21e7a8, Func Offset: 0xb8
	// Line 1597, Address: 0x21e7bc, Func Offset: 0xcc
	// Line 1600, Address: 0x21e7c4, Func Offset: 0xd4
	// Func End, Address: 0x21e7d4, Func Offset: 0xe4
}

// 
// Start address: 0x21e7e0
void lower_attack(SubCharacter* p)
{
	short frame;
	_AnimeInfo* a_info;
	// Line 1606, Address: 0x21e7e0, Func Offset: 0
	// Line 1607, Address: 0x21e7f8, Func Offset: 0x18
	// Line 1608, Address: 0x21e808, Func Offset: 0x28
	// Line 1611, Address: 0x21e820, Func Offset: 0x40
	// Line 1615, Address: 0x21e82c, Func Offset: 0x4c
	// Line 1616, Address: 0x21e83c, Func Offset: 0x5c
	// Line 1618, Address: 0x21e840, Func Offset: 0x60
	// Line 1621, Address: 0x21e880, Func Offset: 0xa0
	// Line 1622, Address: 0x21e894, Func Offset: 0xb4
	// Line 1624, Address: 0x21e8a0, Func Offset: 0xc0
	// Line 1626, Address: 0x21e8c0, Func Offset: 0xe0
	// Line 1629, Address: 0x21e8fc, Func Offset: 0x11c
	// Line 1631, Address: 0x21e914, Func Offset: 0x134
	// Line 1637, Address: 0x21e950, Func Offset: 0x170
	// Line 1640, Address: 0x21e958, Func Offset: 0x178
	// Line 1641, Address: 0x21e96c, Func Offset: 0x18c
	// Line 1643, Address: 0x21e978, Func Offset: 0x198
	// Line 1645, Address: 0x21e998, Func Offset: 0x1b8
	// Line 1648, Address: 0x21e9d8, Func Offset: 0x1f8
	// Line 1650, Address: 0x21e9f0, Func Offset: 0x210
	// Line 1656, Address: 0x21ea2c, Func Offset: 0x24c
	// Line 1659, Address: 0x21ea34, Func Offset: 0x254
	// Line 1660, Address: 0x21ea48, Func Offset: 0x268
	// Line 1662, Address: 0x21ea58, Func Offset: 0x278
	// Line 1663, Address: 0x21ea64, Func Offset: 0x284
	// Line 1665, Address: 0x21ea84, Func Offset: 0x2a4
	// Line 1667, Address: 0x21eac0, Func Offset: 0x2e0
	// Line 1669, Address: 0x21ead8, Func Offset: 0x2f8
	// Line 1671, Address: 0x21eb14, Func Offset: 0x334
	// Line 1673, Address: 0x21eb2c, Func Offset: 0x34c
	// Line 1675, Address: 0x21eb68, Func Offset: 0x388
	// Line 1677, Address: 0x21eb80, Func Offset: 0x3a0
	// Line 1682, Address: 0x21ebbc, Func Offset: 0x3dc
	// Line 1684, Address: 0x21ebc4, Func Offset: 0x3e4
	// Line 1686, Address: 0x21ebd0, Func Offset: 0x3f0
	// Line 1688, Address: 0x21ebf0, Func Offset: 0x410
	// Line 1691, Address: 0x21ec30, Func Offset: 0x450
	// Line 1693, Address: 0x21ec44, Func Offset: 0x464
	// Line 1695, Address: 0x21ec80, Func Offset: 0x4a0
	// Line 1697, Address: 0x21ec98, Func Offset: 0x4b8
	// Line 1704, Address: 0x21ecd4, Func Offset: 0x4f4
	// Line 1707, Address: 0x21ecdc, Func Offset: 0x4fc
	// Line 1708, Address: 0x21ecfc, Func Offset: 0x51c
	// Line 1711, Address: 0x21ed0c, Func Offset: 0x52c
	// Line 1712, Address: 0x21ed28, Func Offset: 0x548
	// Line 1715, Address: 0x21ed64, Func Offset: 0x584
	// Line 1716, Address: 0x21ed7c, Func Offset: 0x59c
	// Line 1718, Address: 0x21edb8, Func Offset: 0x5d8
	// Line 1721, Address: 0x21edc0, Func Offset: 0x5e0
	// Line 1722, Address: 0x21ede0, Func Offset: 0x600
	// Line 1725, Address: 0x21ee1c, Func Offset: 0x63c
	// Line 1726, Address: 0x21ee34, Func Offset: 0x654
	// Line 1733, Address: 0x21ee70, Func Offset: 0x690
	// Line 1735, Address: 0x21ee7c, Func Offset: 0x69c
	// Line 1736, Address: 0x21ee90, Func Offset: 0x6b0
	// Line 1738, Address: 0x21eea0, Func Offset: 0x6c0
	// Line 1740, Address: 0x21eec0, Func Offset: 0x6e0
	// Line 1741, Address: 0x21eecc, Func Offset: 0x6ec
	// Line 1742, Address: 0x21eee0, Func Offset: 0x700
	// Line 1743, Address: 0x21eef4, Func Offset: 0x714
	// Line 1744, Address: 0x21eefc, Func Offset: 0x71c
	// Line 1748, Address: 0x21ef10, Func Offset: 0x730
	// Line 1749, Address: 0x21ef18, Func Offset: 0x738
	// Line 1765, Address: 0x21ef2c, Func Offset: 0x74c
	// Func End, Address: 0x21ef48, Func Offset: 0x768
}

// 
// Start address: 0x21ef50
void upper_attack(SubCharacter* p)
{
	unsigned short frame;
	unsigned short name2;
	unsigned short name1;
	_AnimeInfo* a_info;
	int wep;
	_AnimeInfo* a_info;
	// Line 1767, Address: 0x21ef50, Func Offset: 0
	// Line 1768, Address: 0x21ef68, Func Offset: 0x18
	// Line 1779, Address: 0x21ef78, Func Offset: 0x28
	// Line 1783, Address: 0x21ef8c, Func Offset: 0x3c
	// Line 1784, Address: 0x21ef9c, Func Offset: 0x4c
	// Line 1794, Address: 0x21efb0, Func Offset: 0x60
	// Line 1800, Address: 0x21efc0, Func Offset: 0x70
	// Line 1801, Address: 0x21efd4, Func Offset: 0x84
	// Line 1803, Address: 0x21efe0, Func Offset: 0x90
	// Line 1816, Address: 0x21eff0, Func Offset: 0xa0
	// Line 1817, Address: 0x21eff8, Func Offset: 0xa8
	// Line 1818, Address: 0x21f008, Func Offset: 0xb8
	// Line 1829, Address: 0x21f01c, Func Offset: 0xcc
	// Line 1830, Address: 0x21f02c, Func Offset: 0xdc
	// Line 1835, Address: 0x21f068, Func Offset: 0x118
	// Line 1842, Address: 0x21f07c, Func Offset: 0x12c
	// Line 1844, Address: 0x21f094, Func Offset: 0x144
	// Line 1845, Address: 0x21f0a4, Func Offset: 0x154
	// Line 1846, Address: 0x21f0b4, Func Offset: 0x164
	// Line 1848, Address: 0x21f0bc, Func Offset: 0x16c
	// Line 1849, Address: 0x21f0cc, Func Offset: 0x17c
	// Line 1851, Address: 0x21f0e0, Func Offset: 0x190
	// Line 1852, Address: 0x21f0ec, Func Offset: 0x19c
	// Line 1853, Address: 0x21f100, Func Offset: 0x1b0
	// Line 1854, Address: 0x21f114, Func Offset: 0x1c4
	// Line 1855, Address: 0x21f11c, Func Offset: 0x1cc
	// Line 1856, Address: 0x21f12c, Func Offset: 0x1dc
	// Line 1860, Address: 0x21f140, Func Offset: 0x1f0
	// Line 1865, Address: 0x21f154, Func Offset: 0x204
	// Line 1866, Address: 0x21f15c, Func Offset: 0x20c
	// Line 1867, Address: 0x21f16c, Func Offset: 0x21c
	// Line 1870, Address: 0x21f180, Func Offset: 0x230
	// Line 1871, Address: 0x21f1a0, Func Offset: 0x250
	// Line 1872, Address: 0x21f1b0, Func Offset: 0x260
	// Line 1873, Address: 0x21f1bc, Func Offset: 0x26c
	// Line 1874, Address: 0x21f1c4, Func Offset: 0x274
	// Line 1878, Address: 0x21f1cc, Func Offset: 0x27c
	// Line 1879, Address: 0x21f1d8, Func Offset: 0x288
	// Line 1899, Address: 0x21f1e0, Func Offset: 0x290
	// Line 1904, Address: 0x21f200, Func Offset: 0x2b0
	// Line 1905, Address: 0x21f210, Func Offset: 0x2c0
	// Line 1907, Address: 0x21f250, Func Offset: 0x300
	// Line 1908, Address: 0x21f254, Func Offset: 0x304
	// Line 1909, Address: 0x21f258, Func Offset: 0x308
	// Line 1911, Address: 0x21f25c, Func Offset: 0x30c
	// Line 1913, Address: 0x21f264, Func Offset: 0x314
	// Line 1914, Address: 0x21f268, Func Offset: 0x318
	// Line 1915, Address: 0x21f26c, Func Offset: 0x31c
	// Line 1917, Address: 0x21f270, Func Offset: 0x320
	// Line 1919, Address: 0x21f278, Func Offset: 0x328
	// Line 1920, Address: 0x21f27c, Func Offset: 0x32c
	// Line 1921, Address: 0x21f280, Func Offset: 0x330
	// Line 1923, Address: 0x21f284, Func Offset: 0x334
	// Line 1925, Address: 0x21f28c, Func Offset: 0x33c
	// Line 1926, Address: 0x21f290, Func Offset: 0x340
	// Line 1927, Address: 0x21f294, Func Offset: 0x344
	// Line 1930, Address: 0x21f298, Func Offset: 0x348
	// Line 1932, Address: 0x21f2a0, Func Offset: 0x350
	// Line 1936, Address: 0x21f2a8, Func Offset: 0x358
	// Line 1937, Address: 0x21f2c4, Func Offset: 0x374
	// Line 1938, Address: 0x21f2ec, Func Offset: 0x39c
	// Line 1944, Address: 0x21f2fc, Func Offset: 0x3ac
	// Line 1945, Address: 0x21f310, Func Offset: 0x3c0
	// Line 1946, Address: 0x21f320, Func Offset: 0x3d0
	// Line 1947, Address: 0x21f32c, Func Offset: 0x3dc
	// Line 1952, Address: 0x21f390, Func Offset: 0x440
	// Line 1953, Address: 0x21f398, Func Offset: 0x448
	// Line 1956, Address: 0x21f3a0, Func Offset: 0x450
	// Line 1960, Address: 0x21f3a8, Func Offset: 0x458
	// Line 1961, Address: 0x21f3b8, Func Offset: 0x468
	// Line 1963, Address: 0x21f3dc, Func Offset: 0x48c
	// Line 1967, Address: 0x21f410, Func Offset: 0x4c0
	// Line 1968, Address: 0x21f420, Func Offset: 0x4d0
	// Line 1970, Address: 0x21f42c, Func Offset: 0x4dc
	// Line 1972, Address: 0x21f434, Func Offset: 0x4e4
	// Line 1973, Address: 0x21f450, Func Offset: 0x500
	// Line 1978, Address: 0x21f45c, Func Offset: 0x50c
	// Func End, Address: 0x21f478, Func Offset: 0x528
}

// 
// Start address: 0x21f480
void lower_kick(SubCharacter* p)
{
	// Line 1980, Address: 0x21f480, Func Offset: 0
	// Line 1982, Address: 0x21f490, Func Offset: 0x10
	// Line 1985, Address: 0x21f498, Func Offset: 0x18
	// Line 1986, Address: 0x21f4a8, Func Offset: 0x28
	// Line 1988, Address: 0x21f4b4, Func Offset: 0x34
	// Line 1989, Address: 0x21f4c0, Func Offset: 0x40
	// Line 1990, Address: 0x21f4d4, Func Offset: 0x54
	// Line 1991, Address: 0x21f4e4, Func Offset: 0x64
	// Line 1994, Address: 0x21f4f8, Func Offset: 0x78
	// Func End, Address: 0x21f50c, Func Offset: 0x8c
}

// 
// Start address: 0x21f510
void upper_kick(SubCharacter* p)
{
	// Line 1996, Address: 0x21f510, Func Offset: 0
	// Line 1998, Address: 0x21f518, Func Offset: 0x8
	// Line 1999, Address: 0x21f528, Func Offset: 0x18
	// Line 2000, Address: 0x21f538, Func Offset: 0x28
	// Line 2002, Address: 0x21f55c, Func Offset: 0x4c
	// Line 2006, Address: 0x21f56c, Func Offset: 0x5c
	// Line 2007, Address: 0x21f580, Func Offset: 0x70
	// Line 2008, Address: 0x21f594, Func Offset: 0x84
	// Line 2011, Address: 0x21f5a8, Func Offset: 0x98
	// Func End, Address: 0x21f5b8, Func Offset: 0xa8
}

// 
// Start address: 0x21f5c0
void lower_fall(SubCharacter* p)
{
	unsigned short frame;
	// Line 2013, Address: 0x21f5c0, Func Offset: 0
	// Line 2015, Address: 0x21f5d0, Func Offset: 0x10
	// Line 2017, Address: 0x21f5e0, Func Offset: 0x20
	// Line 2018, Address: 0x21f5ec, Func Offset: 0x2c
	// Line 2020, Address: 0x21f610, Func Offset: 0x50
	// Line 2021, Address: 0x21f61c, Func Offset: 0x5c
	// Line 2023, Address: 0x21f624, Func Offset: 0x64
	// Line 2024, Address: 0x21f640, Func Offset: 0x80
	// Line 2026, Address: 0x21f65c, Func Offset: 0x9c
	// Line 2028, Address: 0x21f664, Func Offset: 0xa4
	// Line 2030, Address: 0x21f670, Func Offset: 0xb0
	// Line 2031, Address: 0x21f684, Func Offset: 0xc4
	// Line 2033, Address: 0x21f698, Func Offset: 0xd8
	// Func End, Address: 0x21f6ac, Func Offset: 0xec
}

// 
// Start address: 0x21f6b0
void upper_fall()
{
	// Line 2035, Address: 0x21f6b0, Func Offset: 0
	// Line 2036, Address: 0x21f6b8, Func Offset: 0x8
	// Line 2037, Address: 0x21f6cc, Func Offset: 0x1c
	// Line 2039, Address: 0x21f6e0, Func Offset: 0x30
	// Line 2041, Address: 0x21f6e8, Func Offset: 0x38
	// Func End, Address: 0x21f6f8, Func Offset: 0x48
}

// 
// Start address: 0x21f700
void lower_damage(SubCharacter* p)
{
	float hugging_pos[4][5];
	unsigned short cur_frame;
	float damage_angle;
	_AnimeInfo* a_info;
	// Line 2044, Address: 0x21f700, Func Offset: 0
	// Line 2045, Address: 0x21f714, Func Offset: 0x14
	// Line 2049, Address: 0x21f720, Func Offset: 0x20
	// Line 2093, Address: 0x21f754, Func Offset: 0x54
	// Line 2094, Address: 0x21f768, Func Offset: 0x68
	// Line 2095, Address: 0x21f778, Func Offset: 0x78
	// Line 2097, Address: 0x21f78c, Func Offset: 0x8c
	// Line 2099, Address: 0x21f7a0, Func Offset: 0xa0
	// Line 2102, Address: 0x21f918, Func Offset: 0x218
	// Line 2103, Address: 0x21f930, Func Offset: 0x230
	// Line 2104, Address: 0x21f93c, Func Offset: 0x23c
	// Line 2105, Address: 0x21f944, Func Offset: 0x244
	// Line 2107, Address: 0x21f948, Func Offset: 0x248
	// Line 2118, Address: 0x21f950, Func Offset: 0x250
	// Line 2119, Address: 0x21f968, Func Offset: 0x268
	// Line 2120, Address: 0x21f974, Func Offset: 0x274
	// Line 2121, Address: 0x21f97c, Func Offset: 0x27c
	// Line 2123, Address: 0x21f980, Func Offset: 0x280
	// Line 2133, Address: 0x21f988, Func Offset: 0x288
	// Line 2134, Address: 0x21f9a0, Func Offset: 0x2a0
	// Line 2135, Address: 0x21f9ac, Func Offset: 0x2ac
	// Line 2136, Address: 0x21f9b4, Func Offset: 0x2b4
	// Line 2138, Address: 0x21f9b8, Func Offset: 0x2b8
	// Line 2140, Address: 0x21f9c0, Func Offset: 0x2c0
	// Line 2141, Address: 0x21f9d8, Func Offset: 0x2d8
	// Line 2142, Address: 0x21f9e4, Func Offset: 0x2e4
	// Line 2143, Address: 0x21f9ec, Func Offset: 0x2ec
	// Line 2145, Address: 0x21f9f0, Func Offset: 0x2f0
	// Line 2163, Address: 0x21f9f8, Func Offset: 0x2f8
	// Line 2164, Address: 0x21f9fc, Func Offset: 0x2fc
	// Line 2167, Address: 0x21fa04, Func Offset: 0x304
	// Line 2168, Address: 0x21fa08, Func Offset: 0x308
	// Line 2171, Address: 0x21fa10, Func Offset: 0x310
	// Line 2173, Address: 0x21fa28, Func Offset: 0x328
	// Line 2174, Address: 0x21fa34, Func Offset: 0x334
	// Line 2175, Address: 0x21fa3c, Func Offset: 0x33c
	// Line 2177, Address: 0x21fa40, Func Offset: 0x340
	// Line 2190, Address: 0x21fa48, Func Offset: 0x348
	// Line 2191, Address: 0x21fa58, Func Offset: 0x358
	// Line 2192, Address: 0x21fa5c, Func Offset: 0x35c
	// Line 2193, Address: 0x21fa64, Func Offset: 0x364
	// Line 2195, Address: 0x21fa70, Func Offset: 0x370
	// Line 2205, Address: 0x21fa78, Func Offset: 0x378
	// Line 2206, Address: 0x21fa7c, Func Offset: 0x37c
	// Line 2212, Address: 0x21fa84, Func Offset: 0x384
	// Line 2213, Address: 0x21fad0, Func Offset: 0x3d0
	// Line 2218, Address: 0x21fad8, Func Offset: 0x3d8
	// Line 2219, Address: 0x21fb24, Func Offset: 0x424
	// Line 2224, Address: 0x21fb2c, Func Offset: 0x42c
	// Line 2225, Address: 0x21fb78, Func Offset: 0x478
	// Line 2230, Address: 0x21fb80, Func Offset: 0x480
	// Line 2231, Address: 0x21fbcc, Func Offset: 0x4cc
	// Line 2236, Address: 0x21fbd4, Func Offset: 0x4d4
	// Line 2237, Address: 0x21fc20, Func Offset: 0x520
	// Line 2239, Address: 0x21fc28, Func Offset: 0x528
	// Line 2245, Address: 0x21fc2c, Func Offset: 0x52c
	// Line 2249, Address: 0x21fc34, Func Offset: 0x534
	// Line 2251, Address: 0x21fc68, Func Offset: 0x568
	// Line 2254, Address: 0x21fca8, Func Offset: 0x5a8
	// Line 2255, Address: 0x21fcbc, Func Offset: 0x5bc
	// Line 2256, Address: 0x21fcd0, Func Offset: 0x5d0
	// Line 2257, Address: 0x21fce4, Func Offset: 0x5e4
	// Line 2259, Address: 0x21fcf0, Func Offset: 0x5f0
	// Line 2261, Address: 0x21fcf8, Func Offset: 0x5f8
	// Line 2262, Address: 0x21fd08, Func Offset: 0x608
	// Line 2263, Address: 0x21fd10, Func Offset: 0x610
	// Line 2264, Address: 0x21fd2c, Func Offset: 0x62c
	// Line 2265, Address: 0x21fd40, Func Offset: 0x640
	// Line 2266, Address: 0x21fd54, Func Offset: 0x654
	// Line 2267, Address: 0x21fd60, Func Offset: 0x660
	// Line 2269, Address: 0x21fd68, Func Offset: 0x668
	// Line 2270, Address: 0x21fd7c, Func Offset: 0x67c
	// Line 2273, Address: 0x21fd88, Func Offset: 0x688
	// Line 2274, Address: 0x21fd90, Func Offset: 0x690
	// Line 2275, Address: 0x21fda4, Func Offset: 0x6a4
	// Line 2276, Address: 0x21fdb8, Func Offset: 0x6b8
	// Line 2277, Address: 0x21fdd4, Func Offset: 0x6d4
	// Line 2278, Address: 0x21fde0, Func Offset: 0x6e0
	// Line 2279, Address: 0x21fde8, Func Offset: 0x6e8
	// Line 2282, Address: 0x21fdf4, Func Offset: 0x6f4
	// Line 2285, Address: 0x21fdfc, Func Offset: 0x6fc
	// Line 2286, Address: 0x21fe10, Func Offset: 0x710
	// Line 2288, Address: 0x21fe20, Func Offset: 0x720
	// Line 2289, Address: 0x21fe3c, Func Offset: 0x73c
	// Line 2290, Address: 0x21fe48, Func Offset: 0x748
	// Line 2291, Address: 0x21fe50, Func Offset: 0x750
	// Line 2294, Address: 0x21fe5c, Func Offset: 0x75c
	// Line 2295, Address: 0x21fe8c, Func Offset: 0x78c
	// Line 2301, Address: 0x21fe94, Func Offset: 0x794
	// Line 2303, Address: 0x21fe9c, Func Offset: 0x79c
	// Line 2305, Address: 0x21feb0, Func Offset: 0x7b0
	// Line 2306, Address: 0x21feb8, Func Offset: 0x7b8
	// Line 2307, Address: 0x21fec8, Func Offset: 0x7c8
	// Line 2309, Address: 0x21fed4, Func Offset: 0x7d4
	// Line 2310, Address: 0x21fee4, Func Offset: 0x7e4
	// Line 2311, Address: 0x21fef4, Func Offset: 0x7f4
	// Line 2312, Address: 0x21ff08, Func Offset: 0x808
	// Line 2313, Address: 0x21ff1c, Func Offset: 0x81c
	// Line 2316, Address: 0x21ff24, Func Offset: 0x824
	// Line 2317, Address: 0x21ff38, Func Offset: 0x838
	// Line 2319, Address: 0x21ff4c, Func Offset: 0x84c
	// Line 2320, Address: 0x21ff60, Func Offset: 0x860
	// Line 2324, Address: 0x21ff74, Func Offset: 0x874
	// Func End, Address: 0x21ff8c, Func Offset: 0x88c
}

// 
// Start address: 0x21ff90
void upper_damage()
{
	// Line 2327, Address: 0x21ff90, Func Offset: 0
	// Func End, Address: 0x21ff98, Func Offset: 0x8
}

// 
// Start address: 0x21ffa0
void lower_to_stand()
{
	// Line 2331, Address: 0x21ffa0, Func Offset: 0
	// Func End, Address: 0x21ffa8, Func Offset: 0x8
}

// 
// Start address: 0x21ffb0
void upper_to_stand()
{
	// Line 2334, Address: 0x21ffb0, Func Offset: 0
	// Func End, Address: 0x21ffb8, Func Offset: 0x8
}

// 
// Start address: 0x21ffc0
void upper_wall_f()
{
	// Line 2339, Address: 0x21ffc0, Func Offset: 0
	// Line 2340, Address: 0x21ffc8, Func Offset: 0x8
	// Line 2341, Address: 0x21ffdc, Func Offset: 0x1c
	// Line 2342, Address: 0x21fff0, Func Offset: 0x30
	// Line 2344, Address: 0x21fff8, Func Offset: 0x38
	// Func End, Address: 0x220008, Func Offset: 0x48
}

// 
// Start address: 0x220010
void lower_event(SubCharacter* p)
{
	float target;
	float tgt_pos[4];
	// Line 2347, Address: 0x220010, Func Offset: 0
	// Line 2348, Address: 0x220020, Func Offset: 0x10
	// Line 2356, Address: 0x220054, Func Offset: 0x44
	// Line 2360, Address: 0x220068, Func Offset: 0x58
	// Line 2362, Address: 0x220070, Func Offset: 0x60
	// Line 2364, Address: 0x220090, Func Offset: 0x80
	// Line 2372, Address: 0x2200c0, Func Offset: 0xb0
	// Line 2375, Address: 0x2200c8, Func Offset: 0xb8
	// Line 2378, Address: 0x2200d0, Func Offset: 0xc0
	// Func End, Address: 0x2200e4, Func Offset: 0xd4
}

// 
// Start address: 0x2200f0
void upper_event(SubCharacter* p)
{
	// Line 2381, Address: 0x2200f0, Func Offset: 0
	// Line 2384, Address: 0x2200f8, Func Offset: 0x8
	// Line 2385, Address: 0x220108, Func Offset: 0x18
	// Line 2386, Address: 0x22011c, Func Offset: 0x2c
	// Line 2387, Address: 0x220130, Func Offset: 0x40
	// Line 2388, Address: 0x220144, Func Offset: 0x54
	// Line 2389, Address: 0x22014c, Func Offset: 0x5c
	// Line 2393, Address: 0x220154, Func Offset: 0x64
	// Func End, Address: 0x220164, Func Offset: 0x74
}

