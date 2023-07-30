typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon0;
typedef struct PAD_3D;
typedef struct Playing_Info;
typedef struct shSkelton;
typedef struct PAD_2D;
typedef struct _anon1;
typedef struct PAD_INFO;
typedef struct SubCharacter;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct SubObject;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct shBattleInfo;
typedef struct shPlayerWork;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;

typedef void(*type_12)(SubCharacter*);
typedef void(*type_16)(SubCharacter*);
typedef void(*type_25)(SubCharacter*);
typedef void(*type_27)(SubCharacter*);

typedef unsigned char type_0[13];
typedef unsigned int type_1[9];
typedef float type_2[7];
typedef unsigned char type_3[34];
typedef float type_4[4][2];
typedef unsigned char type_5[4];
typedef unsigned char type_6[4];
typedef PAD_INFO type_7[10];
typedef float type_8[4];
typedef float type_9[4][4];
typedef unsigned char type_10[2];
typedef unsigned char type_11[10];
typedef unsigned int type_13[32];
typedef unsigned char type_14[2];
typedef float type_15[4];
typedef shAttackInfo type_17[46];
typedef float type_18[7];
typedef unsigned char type_19[4];
typedef float type_20[7];
typedef unsigned char type_21[2];
typedef unsigned char type_22[10];
typedef unsigned int type_23[32];
typedef float type_24[4];
typedef float type_26[7];
typedef float type_28[7];

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

struct _anon0
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

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct _anon1
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

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
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

struct shBattleArea
{
	float center;
	float radius;
};

struct SubObject
{
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon0 pos;
	_anon0 rot;
	_anon0 pos_spd;
	_anon0 rot_spd;
	_anon1 mat;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
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
	_anon0 tgt_body_angle;
	_anon0 tgt_neck_angle;
	_anon0 tgt_arms_angle;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
float jms_walk_spd_ana[7];
float jms_back_spd_ana[7];
float jms_swalk_spd_ana[7];
float jms_run_spd_ana[7];
float jms_srun_spd_ana[7];
unsigned int pjames_act_with_wep_flag[9];
unsigned int pjames_upper_flag[32];
unsigned int pjames_lower_flag[32];
Playing_Info playing;
float dtf;
shPlayerWork sh2jms;

void PlayerSpeedDownToStand(SubCharacter* p);
void PlayerSetAttackWithWalkIsOk();
void PlayerSetAttackWithRunIsOk();
void PlayerCheckAimingToEnemy(SubCharacter* p, SubCharacter* target);

// 
// Start address: 0x21e210
void PlayerSpeedDownToStand(SubCharacter* p)
{
	// Line 30, Address: 0x21e210, Func Offset: 0
	// Line 32, Address: 0x21e218, Func Offset: 0x8
	// Line 39, Address: 0x21e268, Func Offset: 0x58
	// Line 41, Address: 0x21e28c, Func Offset: 0x7c
	// Line 44, Address: 0x21e294, Func Offset: 0x84
	// Line 48, Address: 0x21e2b8, Func Offset: 0xa8
	// Line 56, Address: 0x21e30c, Func Offset: 0xfc
	// Line 57, Address: 0x21e320, Func Offset: 0x110
	// Line 58, Address: 0x21e340, Func Offset: 0x130
	// Line 61, Address: 0x21e34c, Func Offset: 0x13c
	// Func End, Address: 0x21e358, Func Offset: 0x148
}

// 
// Start address: 0x21e360
void PlayerSetAttackWithWalkIsOk()
{
	// Line 69, Address: 0x21e360, Func Offset: 0
	// Line 85, Address: 0x21e368, Func Offset: 0x8
	// Line 86, Address: 0x21e398, Func Offset: 0x38
	// Line 87, Address: 0x21e3ac, Func Offset: 0x4c
	// Line 92, Address: 0x21e3dc, Func Offset: 0x7c
	// Line 93, Address: 0x21e3e8, Func Offset: 0x88
	// Line 97, Address: 0x21e3f0, Func Offset: 0x90
	// Line 98, Address: 0x21e3f8, Func Offset: 0x98
	// Func End, Address: 0x21e408, Func Offset: 0xa8
}

// 
// Start address: 0x21e410
void PlayerSetAttackWithRunIsOk()
{
	// Line 105, Address: 0x21e410, Func Offset: 0
	// Line 106, Address: 0x21e418, Func Offset: 0x8
	// Line 107, Address: 0x21e448, Func Offset: 0x38
	// Line 108, Address: 0x21e45c, Func Offset: 0x4c
	// Line 113, Address: 0x21e48c, Func Offset: 0x7c
	// Line 114, Address: 0x21e498, Func Offset: 0x88
	// Line 118, Address: 0x21e4a0, Func Offset: 0x90
	// Line 119, Address: 0x21e4a8, Func Offset: 0x98
	// Func End, Address: 0x21e4b8, Func Offset: 0xa8
}

// 
// Start address: 0x21e4c0
void PlayerCheckAimingToEnemy(SubCharacter* p, SubCharacter* target)
{
	float mov_angle;
	float roty_tmp;
	float to_target;
	// Line 128, Address: 0x21e4c0, Func Offset: 0
	// Line 134, Address: 0x21e4d4, Func Offset: 0x14
	// Line 137, Address: 0x21e4e0, Func Offset: 0x20
	// Line 141, Address: 0x21e514, Func Offset: 0x54
	// Line 142, Address: 0x21e530, Func Offset: 0x70
	// Line 143, Address: 0x21e5a0, Func Offset: 0xe0
	// Line 144, Address: 0x21e5bc, Func Offset: 0xfc
	// Line 145, Address: 0x21e5e0, Func Offset: 0x120
	// Line 147, Address: 0x21e5f4, Func Offset: 0x134
	// Line 148, Address: 0x21e608, Func Offset: 0x148
	// Line 149, Address: 0x21e610, Func Offset: 0x150
	// Line 150, Address: 0x21e634, Func Offset: 0x174
	// Line 152, Address: 0x21e648, Func Offset: 0x188
	// Line 154, Address: 0x21e65c, Func Offset: 0x19c
	// Line 155, Address: 0x21e674, Func Offset: 0x1b4
	// Func End, Address: 0x21e688, Func Offset: 0x1c8
}

