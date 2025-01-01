typedef struct SubCharacter;
typedef struct _AnimeInfo;
typedef struct SubObject;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon0;
typedef struct shPlayerWork;
typedef struct shSkelton;
typedef struct PAD_INFO;
typedef struct Playing_Info;
typedef struct _anon1;
typedef struct PAD_3D;
typedef struct shBattleFight;
typedef struct Pad_KeyConfig;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shBattleInfo;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;
typedef struct PAD_2D;

typedef void(*type_0)(SubCharacter*);
typedef void(*type_8)(SubCharacter*);
typedef void(*type_14)(SubCharacter*);
typedef void(*type_17)(SubCharacter*);
typedef void(*type_21)(SubCharacter*);
typedef void(*type_31)(SubCharacter*);
typedef void(*type_33)(SubCharacter*);
typedef void(*type_34)(SubCharacter*);

typedef unsigned char type_1[13];
typedef unsigned char type_2[2];
typedef unsigned char type_3[2];
typedef unsigned char type_4[34];
typedef float type_5[4][2];
typedef unsigned int type_6[32];
typedef float type_7[7];
typedef float type_9[4];
typedef void(*type_10)(SubCharacter*)[32];
typedef float type_11[4][4];
typedef float type_12[7];
typedef unsigned char type_13[10];
typedef unsigned char type_15[2];
typedef float type_16[4];
typedef shAttackInfo type_18[46];
typedef unsigned char type_19[4];
typedef unsigned int type_20[32];
typedef void(*type_22)(SubCharacter*)[32];
typedef float type_23[7];
typedef float type_24[7];
typedef unsigned char type_25[10];
typedef unsigned int type_26[9];
typedef float type_27[7];
typedef unsigned char type_28[4];
typedef unsigned char type_29[4];
typedef float type_30[4];
typedef PAD_INFO type_32[10];

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

	void PlayerUpdateStatus2D();
	void PlayerUpdateStatusLower2D();
	void PlayerUpdatePosition2D();
	void PlayerCheckAttack2D();
	void PlayerCheckControl2D();
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
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
float dir_tmp;
float dtf;
shPlayerWork sh2jms;
int dt;
Playing_Info playing;
void(*func_list_lower)(SubCharacter*)[32];
void(*func_list_upper)(SubCharacter*)[32];
float angle;
float cam_rot_y;
Pad_KeyConfig key_config;

void PlayerChangeAngleToCameraY(SubCharacter* p);
void lower_stand_2d(SubCharacter* p);
void upper_stand_2d(SubCharacter* p);
void lower_relax_2d();
void upper_relax_2d();
void lower_alert_2d();
void upper_alert_2d();
void lower_tired_2d(SubCharacter* p);
void upper_tired_2d(SubCharacter* p);
void lower_ready_2d(SubCharacter* p);
void upper_ready_2d();
void lower_readyoff_2d();
void upper_readyoff_2d();
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
void lower_step_2d();
void upper_step_2d();
void lower_lstep_2d();
void upper_lstep_2d();
void lower_rstep_2d();
void upper_rstep_2d();
void lower_hold_2d(SubCharacter* p);
void upper_hold_2d(SubCharacter* p);
void lower_release_2d(SubCharacter* p);
void upper_release_2d();
void lower_attack_2d(SubCharacter* p);
void upper_attack_2d(SubCharacter* p);
void lower_kick_2d(SubCharacter* p);
void upper_kick_2d(SubCharacter* p);
void lower_fall_2d(SubCharacter* p);
void upper_fall_2d();
void lower_damage_2d(SubCharacter* p);
void upper_damage_2d();
void lower_to_stand_2d();
void upper_to_stand_2d();
void lower_wall_f_2d(SubCharacter* p);
void upper_wall_f_2d();
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
// Start address: 0x111fa0
void PlayerChangeAngleToCameraY(SubCharacter* p)
{
	float spd_close_to;
	float mov_angle;
	float roty_tmp;
	// Line 81, Address: 0x111fa0, Func Offset: 0
	// Line 86, Address: 0x111fbc, Func Offset: 0x1c
	// Line 91, Address: 0x111fd4, Func Offset: 0x34
	// Line 95, Address: 0x112054, Func Offset: 0xb4
	// Line 96, Address: 0x1120b8, Func Offset: 0x118
	// Line 97, Address: 0x1120d0, Func Offset: 0x130
	// Line 98, Address: 0x1120ec, Func Offset: 0x14c
	// Line 100, Address: 0x1120fc, Func Offset: 0x15c
	// Line 101, Address: 0x112108, Func Offset: 0x168
	// Line 102, Address: 0x112110, Func Offset: 0x170
	// Line 103, Address: 0x11212c, Func Offset: 0x18c
	// Line 105, Address: 0x11213c, Func Offset: 0x19c
	// Line 107, Address: 0x112148, Func Offset: 0x1a8
	// Line 108, Address: 0x112158, Func Offset: 0x1b8
	// Func End, Address: 0x112178, Func Offset: 0x1d8
}

// 
// Start address: 0x112180
void lower_stand_2d(SubCharacter* p)
{
	// Line 117, Address: 0x112180, Func Offset: 0
	// Line 119, Address: 0x11218c, Func Offset: 0xc
	// Line 122, Address: 0x1121a0, Func Offset: 0x20
	// Line 125, Address: 0x1121bc, Func Offset: 0x3c
	// Line 128, Address: 0x1121c8, Func Offset: 0x48
	// Line 129, Address: 0x1121f0, Func Offset: 0x70
	// Line 131, Address: 0x112204, Func Offset: 0x84
	// Line 132, Address: 0x112240, Func Offset: 0xc0
	// Line 135, Address: 0x112254, Func Offset: 0xd4
	// Func End, Address: 0x112264, Func Offset: 0xe4
}

// 
// Start address: 0x112270
void upper_stand_2d(SubCharacter* p)
{
	// Line 137, Address: 0x112270, Func Offset: 0
	// Line 139, Address: 0x11227c, Func Offset: 0xc
	// Line 140, Address: 0x1122a4, Func Offset: 0x34
	// Line 142, Address: 0x1122b8, Func Offset: 0x48
	// Line 143, Address: 0x1122f4, Func Offset: 0x84
	// Line 145, Address: 0x112308, Func Offset: 0x98
	// Func End, Address: 0x112318, Func Offset: 0xa8
}

// 
// Start address: 0x112320
void lower_relax_2d()
{
	// Line 148, Address: 0x112320, Func Offset: 0
	// Line 150, Address: 0x112328, Func Offset: 0x8
	// Line 151, Address: 0x11233c, Func Offset: 0x1c
	// Line 154, Address: 0x112350, Func Offset: 0x30
	// Func End, Address: 0x112360, Func Offset: 0x40
}

// 
// Start address: 0x112360
void upper_relax_2d()
{
	// Line 156, Address: 0x112360, Func Offset: 0
	// Line 158, Address: 0x112368, Func Offset: 0x8
	// Line 159, Address: 0x11237c, Func Offset: 0x1c
	// Line 162, Address: 0x112390, Func Offset: 0x30
	// Func End, Address: 0x1123a0, Func Offset: 0x40
}

// 
// Start address: 0x1123a0
void lower_alert_2d()
{
	// Line 165, Address: 0x1123a0, Func Offset: 0
	// Line 167, Address: 0x1123a8, Func Offset: 0x8
	// Line 168, Address: 0x1123bc, Func Offset: 0x1c
	// Line 171, Address: 0x1123d0, Func Offset: 0x30
	// Func End, Address: 0x1123e0, Func Offset: 0x40
}

// 
// Start address: 0x1123e0
void upper_alert_2d()
{
	// Line 173, Address: 0x1123e0, Func Offset: 0
	// Line 175, Address: 0x1123e8, Func Offset: 0x8
	// Line 176, Address: 0x1123fc, Func Offset: 0x1c
	// Line 179, Address: 0x112410, Func Offset: 0x30
	// Func End, Address: 0x112420, Func Offset: 0x40
}

// 
// Start address: 0x112420
void lower_tired_2d(SubCharacter* p)
{
	_AnimeInfo* a_info;
	// Line 182, Address: 0x112420, Func Offset: 0
	// Line 186, Address: 0x112430, Func Offset: 0x10
	// Line 189, Address: 0x11244c, Func Offset: 0x2c
	// Line 192, Address: 0x112458, Func Offset: 0x38
	// Line 193, Address: 0x11246c, Func Offset: 0x4c
	// Line 194, Address: 0x1124a8, Func Offset: 0x88
	// Line 195, Address: 0x1124bc, Func Offset: 0x9c
	// Line 198, Address: 0x1124d0, Func Offset: 0xb0
	// Line 199, Address: 0x112524, Func Offset: 0x104
	// Line 202, Address: 0x112538, Func Offset: 0x118
	// Func End, Address: 0x11254c, Func Offset: 0x12c
}

// 
// Start address: 0x112550
void upper_tired_2d(SubCharacter* p)
{
	_AnimeInfo* a_info;
	// Line 204, Address: 0x112550, Func Offset: 0
	// Line 208, Address: 0x112560, Func Offset: 0x10
	// Line 209, Address: 0x112574, Func Offset: 0x24
	// Line 210, Address: 0x1125b0, Func Offset: 0x60
	// Line 211, Address: 0x1125c4, Func Offset: 0x74
	// Line 214, Address: 0x1125d8, Func Offset: 0x88
	// Line 215, Address: 0x11262c, Func Offset: 0xdc
	// Line 218, Address: 0x112640, Func Offset: 0xf0
	// Func End, Address: 0x112654, Func Offset: 0x104
}

// 
// Start address: 0x112660
void lower_ready_2d(SubCharacter* p)
{
	// Line 221, Address: 0x112660, Func Offset: 0
	// Line 223, Address: 0x11266c, Func Offset: 0xc
	// Line 226, Address: 0x112678, Func Offset: 0x18
	// Line 227, Address: 0x11268c, Func Offset: 0x2c
	// Line 228, Address: 0x1126a0, Func Offset: 0x40
	// Line 230, Address: 0x1126dc, Func Offset: 0x7c
	// Line 231, Address: 0x1126f4, Func Offset: 0x94
	// Line 232, Address: 0x112708, Func Offset: 0xa8
	// Line 233, Address: 0x112710, Func Offset: 0xb0
	// Line 238, Address: 0x112724, Func Offset: 0xc4
	// Line 239, Address: 0x11272c, Func Offset: 0xcc
	// Line 242, Address: 0x112740, Func Offset: 0xe0
	// Func End, Address: 0x112750, Func Offset: 0xf0
}

// 
// Start address: 0x112750
void upper_ready_2d()
{
	// Line 244, Address: 0x112750, Func Offset: 0
	// Line 246, Address: 0x112758, Func Offset: 0x8
	// Line 247, Address: 0x11276c, Func Offset: 0x1c
	// Line 248, Address: 0x112780, Func Offset: 0x30
	// Line 250, Address: 0x1127bc, Func Offset: 0x6c
	// Line 251, Address: 0x1127d4, Func Offset: 0x84
	// Line 252, Address: 0x1127e8, Func Offset: 0x98
	// Line 253, Address: 0x1127f0, Func Offset: 0xa0
	// Line 258, Address: 0x112804, Func Offset: 0xb4
	// Line 259, Address: 0x11280c, Func Offset: 0xbc
	// Line 263, Address: 0x112820, Func Offset: 0xd0
	// Func End, Address: 0x112830, Func Offset: 0xe0
}

// 
// Start address: 0x112830
void lower_readyoff_2d()
{
	// Line 266, Address: 0x112830, Func Offset: 0
	// Line 268, Address: 0x112838, Func Offset: 0x8
	// Line 269, Address: 0x11284c, Func Offset: 0x1c
	// Line 271, Address: 0x112860, Func Offset: 0x30
	// Func End, Address: 0x112870, Func Offset: 0x40
}

// 
// Start address: 0x112870
void upper_readyoff_2d()
{
	// Line 273, Address: 0x112870, Func Offset: 0
	// Line 275, Address: 0x112878, Func Offset: 0x8
	// Line 276, Address: 0x11288c, Func Offset: 0x1c
	// Line 278, Address: 0x1128a0, Func Offset: 0x30
	// Func End, Address: 0x1128b0, Func Offset: 0x40
}

// 
// Start address: 0x1128b0
void lower_walk_2d(SubCharacter* p)
{
	// Line 281, Address: 0x1128b0, Func Offset: 0
	// Line 282, Address: 0x1128c4, Func Offset: 0x14
	// Line 284, Address: 0x1128ec, Func Offset: 0x3c
	// Line 286, Address: 0x112924, Func Offset: 0x74
	// Line 288, Address: 0x112948, Func Offset: 0x98
	// Line 289, Address: 0x112994, Func Offset: 0xe4
	// Line 291, Address: 0x1129c0, Func Offset: 0x110
	// Line 292, Address: 0x1129e4, Func Offset: 0x134
	// Line 293, Address: 0x112a38, Func Offset: 0x188
	// Line 295, Address: 0x112a40, Func Offset: 0x190
	// Line 296, Address: 0x112a64, Func Offset: 0x1b4
	// Line 298, Address: 0x112ab8, Func Offset: 0x208
	// Line 300, Address: 0x112ac0, Func Offset: 0x210
	// Line 301, Address: 0x112b24, Func Offset: 0x274
	// Line 305, Address: 0x112b78, Func Offset: 0x2c8
	// Line 310, Address: 0x112bb4, Func Offset: 0x304
	// Line 311, Address: 0x112bd4, Func Offset: 0x324
	// Line 312, Address: 0x112bf0, Func Offset: 0x340
	// Line 314, Address: 0x112c04, Func Offset: 0x354
	// Line 316, Address: 0x112c58, Func Offset: 0x3a8
	// Line 317, Address: 0x112c60, Func Offset: 0x3b0
	// Line 323, Address: 0x112c70, Func Offset: 0x3c0
	// Line 325, Address: 0x112c78, Func Offset: 0x3c8
	// Func End, Address: 0x112c90, Func Offset: 0x3e0
}

// 
// Start address: 0x112c90
void upper_walk_2d(SubCharacter* p)
{
	// Line 327, Address: 0x112c90, Func Offset: 0
	// Line 329, Address: 0x112c9c, Func Offset: 0xc
	// Line 334, Address: 0x112cbc, Func Offset: 0x2c
	// Line 337, Address: 0x112cf8, Func Offset: 0x68
	// Func End, Address: 0x112d08, Func Offset: 0x78
}

// 
// Start address: 0x112d10
void lower_back_2d(SubCharacter* p)
{
	char lstickY_tmp;
	// Line 340, Address: 0x112d10, Func Offset: 0
	// Line 344, Address: 0x112d24, Func Offset: 0x14
	// Line 345, Address: 0x112d3c, Func Offset: 0x2c
	// Line 348, Address: 0x112d4c, Func Offset: 0x3c
	// Line 352, Address: 0x112d74, Func Offset: 0x64
	// Line 353, Address: 0x112dac, Func Offset: 0x9c
	// Line 355, Address: 0x112dd0, Func Offset: 0xc0
	// Line 356, Address: 0x112e1c, Func Offset: 0x10c
	// Line 357, Address: 0x112e3c, Func Offset: 0x12c
	// Line 359, Address: 0x112e48, Func Offset: 0x138
	// Line 360, Address: 0x112e50, Func Offset: 0x140
	// Line 362, Address: 0x112e78, Func Offset: 0x168
	// Line 363, Address: 0x112e9c, Func Offset: 0x18c
	// Line 364, Address: 0x112ef8, Func Offset: 0x1e8
	// Line 366, Address: 0x112f00, Func Offset: 0x1f0
	// Line 367, Address: 0x112f24, Func Offset: 0x214
	// Line 372, Address: 0x112f80, Func Offset: 0x270
	// Line 375, Address: 0x112f88, Func Offset: 0x278
	// Line 376, Address: 0x112fec, Func Offset: 0x2dc
	// Line 379, Address: 0x113040, Func Offset: 0x330
	// Line 380, Address: 0x113050, Func Offset: 0x340
	// Line 385, Address: 0x113068, Func Offset: 0x358
	// Line 392, Address: 0x1130a8, Func Offset: 0x398
	// Line 393, Address: 0x1130b8, Func Offset: 0x3a8
	// Line 394, Address: 0x1130cc, Func Offset: 0x3bc
	// Line 396, Address: 0x1130e8, Func Offset: 0x3d8
	// Line 397, Address: 0x113144, Func Offset: 0x434
	// Line 398, Address: 0x11314c, Func Offset: 0x43c
	// Line 405, Address: 0x11315c, Func Offset: 0x44c
	// Line 407, Address: 0x113164, Func Offset: 0x454
	// Func End, Address: 0x11317c, Func Offset: 0x46c
}

// 
// Start address: 0x113180
void lower_lswalk_2d(SubCharacter* p)
{
	// Line 414, Address: 0x113180, Func Offset: 0
	// Line 417, Address: 0x113194, Func Offset: 0x14
	// Line 420, Address: 0x1131bc, Func Offset: 0x3c
	// Line 422, Address: 0x1131f4, Func Offset: 0x74
	// Line 424, Address: 0x11321c, Func Offset: 0x9c
	// Line 430, Address: 0x113268, Func Offset: 0xe8
	// Line 432, Address: 0x113298, Func Offset: 0x118
	// Line 433, Address: 0x1132c0, Func Offset: 0x140
	// Line 434, Address: 0x11331c, Func Offset: 0x19c
	// Line 436, Address: 0x113324, Func Offset: 0x1a4
	// Line 437, Address: 0x11334c, Func Offset: 0x1cc
	// Line 439, Address: 0x1133a8, Func Offset: 0x228
	// Line 441, Address: 0x1133b0, Func Offset: 0x230
	// Line 442, Address: 0x113414, Func Offset: 0x294
	// Line 446, Address: 0x113468, Func Offset: 0x2e8
	// Line 451, Address: 0x1134a8, Func Offset: 0x328
	// Line 452, Address: 0x1134b8, Func Offset: 0x338
	// Line 453, Address: 0x1134d4, Func Offset: 0x354
	// Line 455, Address: 0x1134e8, Func Offset: 0x368
	// Line 456, Address: 0x113544, Func Offset: 0x3c4
	// Line 457, Address: 0x11354c, Func Offset: 0x3cc
	// Line 468, Address: 0x11355c, Func Offset: 0x3dc
	// Line 469, Address: 0x113564, Func Offset: 0x3e4
	// Func End, Address: 0x11357c, Func Offset: 0x3fc
}

// 
// Start address: 0x113580
void lower_rswalk_2d(SubCharacter* p)
{
	// Line 476, Address: 0x113580, Func Offset: 0
	// Line 479, Address: 0x113594, Func Offset: 0x14
	// Line 482, Address: 0x1135bc, Func Offset: 0x3c
	// Line 484, Address: 0x1135f4, Func Offset: 0x74
	// Line 486, Address: 0x11361c, Func Offset: 0x9c
	// Line 492, Address: 0x113668, Func Offset: 0xe8
	// Line 494, Address: 0x113698, Func Offset: 0x118
	// Line 495, Address: 0x1136bc, Func Offset: 0x13c
	// Line 496, Address: 0x113718, Func Offset: 0x198
	// Line 498, Address: 0x113720, Func Offset: 0x1a0
	// Line 499, Address: 0x113748, Func Offset: 0x1c8
	// Line 501, Address: 0x1137a4, Func Offset: 0x224
	// Line 503, Address: 0x1137ac, Func Offset: 0x22c
	// Line 504, Address: 0x113810, Func Offset: 0x290
	// Line 508, Address: 0x113864, Func Offset: 0x2e4
	// Line 513, Address: 0x1138a4, Func Offset: 0x324
	// Line 514, Address: 0x1138b4, Func Offset: 0x334
	// Line 515, Address: 0x1138d0, Func Offset: 0x350
	// Line 517, Address: 0x1138e4, Func Offset: 0x364
	// Line 523, Address: 0x113940, Func Offset: 0x3c0
	// Line 524, Address: 0x113948, Func Offset: 0x3c8
	// Func End, Address: 0x113960, Func Offset: 0x3e0
}

// 
// Start address: 0x113960
void lower_run1_2d(SubCharacter* p)
{
	float target_speed;
	char lstickY_tmp;
	// Line 531, Address: 0x113960, Func Offset: 0
	// Line 535, Address: 0x113974, Func Offset: 0x14
	// Line 536, Address: 0x11398c, Func Offset: 0x2c
	// Line 541, Address: 0x11399c, Func Offset: 0x3c
	// Line 543, Address: 0x1139c4, Func Offset: 0x64
	// Line 545, Address: 0x1139e8, Func Offset: 0x88
	// Line 546, Address: 0x113a0c, Func Offset: 0xac
	// Line 547, Address: 0x113a60, Func Offset: 0x100
	// Line 549, Address: 0x113a68, Func Offset: 0x108
	// Line 550, Address: 0x113a8c, Func Offset: 0x12c
	// Line 552, Address: 0x113ae0, Func Offset: 0x180
	// Line 558, Address: 0x113ae8, Func Offset: 0x188
	// Line 559, Address: 0x113b4c, Func Offset: 0x1ec
	// Line 564, Address: 0x113b9c, Func Offset: 0x23c
	// Line 565, Address: 0x113bb8, Func Offset: 0x258
	// Line 566, Address: 0x113bdc, Func Offset: 0x27c
	// Line 567, Address: 0x113be4, Func Offset: 0x284
	// Line 569, Address: 0x113c08, Func Offset: 0x2a8
	// Line 570, Address: 0x113c5c, Func Offset: 0x2fc
	// Line 575, Address: 0x113ca0, Func Offset: 0x340
	// Line 578, Address: 0x113cb0, Func Offset: 0x350
	// Line 579, Address: 0x113ce4, Func Offset: 0x384
	// Line 580, Address: 0x113cf8, Func Offset: 0x398
	// Line 585, Address: 0x113d0c, Func Offset: 0x3ac
	// Line 586, Address: 0x113d14, Func Offset: 0x3b4
	// Func End, Address: 0x113d2c, Func Offset: 0x3cc
}

// 
// Start address: 0x113d30
void upper_run1_2d(SubCharacter* p)
{
	// Line 588, Address: 0x113d30, Func Offset: 0
	// Line 590, Address: 0x113d3c, Func Offset: 0xc
	// Line 591, Address: 0x113d70, Func Offset: 0x40
	// Line 592, Address: 0x113d84, Func Offset: 0x54
	// Line 595, Address: 0x113d98, Func Offset: 0x68
	// Func End, Address: 0x113da8, Func Offset: 0x78
}

// 
// Start address: 0x113db0
void lower_run2_2d(SubCharacter* p)
{
	float target_speed;
	char lstickY_tmp;
	// Line 598, Address: 0x113db0, Func Offset: 0
	// Line 602, Address: 0x113dc4, Func Offset: 0x14
	// Line 603, Address: 0x113ddc, Func Offset: 0x2c
	// Line 607, Address: 0x113dec, Func Offset: 0x3c
	// Line 609, Address: 0x113e08, Func Offset: 0x58
	// Line 611, Address: 0x113e30, Func Offset: 0x80
	// Line 613, Address: 0x113e54, Func Offset: 0xa4
	// Line 614, Address: 0x113e78, Func Offset: 0xc8
	// Line 615, Address: 0x113ecc, Func Offset: 0x11c
	// Line 617, Address: 0x113ed4, Func Offset: 0x124
	// Line 618, Address: 0x113ef8, Func Offset: 0x148
	// Line 621, Address: 0x113f4c, Func Offset: 0x19c
	// Line 624, Address: 0x113f9c, Func Offset: 0x1ec
	// Line 625, Address: 0x113fb0, Func Offset: 0x200
	// Line 626, Address: 0x113fc4, Func Offset: 0x214
	// Line 633, Address: 0x113fd8, Func Offset: 0x228
	// Line 639, Address: 0x113fe0, Func Offset: 0x230
	// Line 640, Address: 0x114044, Func Offset: 0x294
	// Line 644, Address: 0x114094, Func Offset: 0x2e4
	// Line 651, Address: 0x1140c8, Func Offset: 0x318
	// Line 657, Address: 0x1140dc, Func Offset: 0x32c
	// Line 658, Address: 0x1140f8, Func Offset: 0x348
	// Line 659, Address: 0x11411c, Func Offset: 0x36c
	// Line 660, Address: 0x114160, Func Offset: 0x3b0
	// Line 661, Address: 0x114168, Func Offset: 0x3b8
	// Line 662, Address: 0x11418c, Func Offset: 0x3dc
	// Line 666, Address: 0x1141d0, Func Offset: 0x420
	// Line 667, Address: 0x114204, Func Offset: 0x454
	// Line 668, Address: 0x114218, Func Offset: 0x468
	// Line 670, Address: 0x11422c, Func Offset: 0x47c
	// Line 673, Address: 0x11427c, Func Offset: 0x4cc
	// Line 674, Address: 0x114290, Func Offset: 0x4e0
	// Line 675, Address: 0x1142a4, Func Offset: 0x4f4
	// Line 686, Address: 0x1142b8, Func Offset: 0x508
	// Line 695, Address: 0x1142c8, Func Offset: 0x518
	// Line 697, Address: 0x1142d0, Func Offset: 0x520
	// Line 698, Address: 0x1142e0, Func Offset: 0x530
	// Line 700, Address: 0x1142f4, Func Offset: 0x544
	// Func End, Address: 0x11430c, Func Offset: 0x55c
}

// 
// Start address: 0x114310
void upper_run2_2d(SubCharacter* p)
{
	// Line 702, Address: 0x114310, Func Offset: 0
	// Line 703, Address: 0x11431c, Func Offset: 0xc
	// Line 706, Address: 0x114344, Func Offset: 0x34
	// Line 709, Address: 0x114394, Func Offset: 0x84
	// Line 710, Address: 0x1143a8, Func Offset: 0x98
	// Line 711, Address: 0x1143bc, Func Offset: 0xac
	// Line 718, Address: 0x1143d0, Func Offset: 0xc0
	// Line 721, Address: 0x1143d8, Func Offset: 0xc8
	// Line 722, Address: 0x11440c, Func Offset: 0xfc
	// Line 723, Address: 0x114420, Func Offset: 0x110
	// Line 725, Address: 0x114434, Func Offset: 0x124
	// Line 728, Address: 0x114484, Func Offset: 0x174
	// Line 729, Address: 0x114498, Func Offset: 0x188
	// Line 730, Address: 0x1144ac, Func Offset: 0x19c
	// Line 740, Address: 0x1144c0, Func Offset: 0x1b0
	// Func End, Address: 0x1144d0, Func Offset: 0x1c0
}

// 
// Start address: 0x1144d0
void lower_run3_2d(SubCharacter* p)
{
	float target_speed;
	char lstickY_tmp;
	// Line 743, Address: 0x1144d0, Func Offset: 0
	// Line 748, Address: 0x1144e4, Func Offset: 0x14
	// Line 749, Address: 0x1144fc, Func Offset: 0x2c
	// Line 753, Address: 0x11450c, Func Offset: 0x3c
	// Line 755, Address: 0x114528, Func Offset: 0x58
	// Line 758, Address: 0x114550, Func Offset: 0x80
	// Line 759, Address: 0x114574, Func Offset: 0xa4
	// Line 762, Address: 0x1145d0, Func Offset: 0x100
	// Line 763, Address: 0x1145fc, Func Offset: 0x12c
	// Line 764, Address: 0x114610, Func Offset: 0x140
	// Line 766, Address: 0x114624, Func Offset: 0x154
	// Line 772, Address: 0x11462c, Func Offset: 0x15c
	// Line 773, Address: 0x114690, Func Offset: 0x1c0
	// Line 776, Address: 0x1146e0, Func Offset: 0x210
	// Line 780, Address: 0x114708, Func Offset: 0x238
	// Line 788, Address: 0x114720, Func Offset: 0x250
	// Line 789, Address: 0x114738, Func Offset: 0x268
	// Line 790, Address: 0x114748, Func Offset: 0x278
	// Line 795, Address: 0x11475c, Func Offset: 0x28c
	// Line 796, Address: 0x114778, Func Offset: 0x2a8
	// Line 797, Address: 0x11479c, Func Offset: 0x2cc
	// Line 798, Address: 0x1147a4, Func Offset: 0x2d4
	// Line 800, Address: 0x1147c8, Func Offset: 0x2f8
	// Line 803, Address: 0x11480c, Func Offset: 0x33c
	// Line 805, Address: 0x11485c, Func Offset: 0x38c
	// Line 806, Address: 0x114870, Func Offset: 0x3a0
	// Line 812, Address: 0x114884, Func Offset: 0x3b4
	// Line 821, Address: 0x114894, Func Offset: 0x3c4
	// Line 824, Address: 0x11489c, Func Offset: 0x3cc
	// Line 825, Address: 0x1148ac, Func Offset: 0x3dc
	// Line 826, Address: 0x1148c0, Func Offset: 0x3f0
	// Func End, Address: 0x1148d8, Func Offset: 0x408
}

// 
// Start address: 0x1148e0
void upper_run3_2d(SubCharacter* p)
{
	// Line 828, Address: 0x1148e0, Func Offset: 0
	// Line 829, Address: 0x1148ec, Func Offset: 0xc
	// Line 832, Address: 0x114914, Func Offset: 0x34
	// Line 833, Address: 0x114940, Func Offset: 0x60
	// Line 834, Address: 0x114954, Func Offset: 0x74
	// Line 836, Address: 0x114968, Func Offset: 0x88
	// Line 839, Address: 0x114970, Func Offset: 0x90
	// Line 841, Address: 0x1149c0, Func Offset: 0xe0
	// Line 842, Address: 0x1149d4, Func Offset: 0xf4
	// Line 846, Address: 0x1149e8, Func Offset: 0x108
	// Func End, Address: 0x1149f8, Func Offset: 0x118
}

// 
// Start address: 0x114a00
void lower_lsrun_2d(SubCharacter* p)
{
	float target_speed;
	// Line 849, Address: 0x114a00, Func Offset: 0
	// Line 853, Address: 0x114a14, Func Offset: 0x14
	// Line 855, Address: 0x114a30, Func Offset: 0x30
	// Line 859, Address: 0x114a58, Func Offset: 0x58
	// Line 860, Address: 0x114a7c, Func Offset: 0x7c
	// Line 861, Address: 0x114ad8, Func Offset: 0xd8
	// Line 867, Address: 0x114ae0, Func Offset: 0xe0
	// Line 868, Address: 0x114b44, Func Offset: 0x144
	// Line 871, Address: 0x114b94, Func Offset: 0x194
	// Line 875, Address: 0x114bbc, Func Offset: 0x1bc
	// Line 882, Address: 0x114bd4, Func Offset: 0x1d4
	// Line 886, Address: 0x114be0, Func Offset: 0x1e0
	// Line 891, Address: 0x114c18, Func Offset: 0x218
	// Line 895, Address: 0x114c28, Func Offset: 0x228
	// Line 898, Address: 0x114c30, Func Offset: 0x230
	// Line 899, Address: 0x114c40, Func Offset: 0x240
	// Line 900, Address: 0x114c54, Func Offset: 0x254
	// Func End, Address: 0x114c6c, Func Offset: 0x26c
}

// 
// Start address: 0x114c70
void lower_rsrun_2d(SubCharacter* p)
{
	float target_speed;
	// Line 907, Address: 0x114c70, Func Offset: 0
	// Line 911, Address: 0x114c84, Func Offset: 0x14
	// Line 913, Address: 0x114ca0, Func Offset: 0x30
	// Line 917, Address: 0x114cc8, Func Offset: 0x58
	// Line 918, Address: 0x114cec, Func Offset: 0x7c
	// Line 919, Address: 0x114d48, Func Offset: 0xd8
	// Line 925, Address: 0x114d50, Func Offset: 0xe0
	// Line 926, Address: 0x114db4, Func Offset: 0x144
	// Line 929, Address: 0x114e04, Func Offset: 0x194
	// Line 933, Address: 0x114e2c, Func Offset: 0x1bc
	// Line 940, Address: 0x114e44, Func Offset: 0x1d4
	// Line 944, Address: 0x114e50, Func Offset: 0x1e0
	// Line 949, Address: 0x114e88, Func Offset: 0x218
	// Line 954, Address: 0x114e98, Func Offset: 0x228
	// Line 957, Address: 0x114ea0, Func Offset: 0x230
	// Line 958, Address: 0x114eb0, Func Offset: 0x240
	// Line 959, Address: 0x114ec4, Func Offset: 0x254
	// Func End, Address: 0x114edc, Func Offset: 0x26c
}

// 
// Start address: 0x114ee0
void lower_jump_2d()
{
	// Line 966, Address: 0x114ee0, Func Offset: 0
	// Line 967, Address: 0x114ee4, Func Offset: 0x4
	// Func End, Address: 0x114ef0, Func Offset: 0x10
}

// 
// Start address: 0x114ef0
void upper_jump_2d()
{
	// Line 969, Address: 0x114ef0, Func Offset: 0
	// Line 970, Address: 0x114ef4, Func Offset: 0x4
	// Func End, Address: 0x114f00, Func Offset: 0x10
}

// 
// Start address: 0x114f00
void lower_step_2d()
{
	// Line 972, Address: 0x114f00, Func Offset: 0
	// Line 973, Address: 0x114f04, Func Offset: 0x4
	// Func End, Address: 0x114f10, Func Offset: 0x10
}

// 
// Start address: 0x114f10
void upper_step_2d()
{
	// Line 975, Address: 0x114f10, Func Offset: 0
	// Line 976, Address: 0x114f14, Func Offset: 0x4
	// Func End, Address: 0x114f20, Func Offset: 0x10
}

// 
// Start address: 0x114f20
void lower_lstep_2d()
{
	// Line 979, Address: 0x114f20, Func Offset: 0
	// Line 980, Address: 0x114f24, Func Offset: 0x4
	// Func End, Address: 0x114f30, Func Offset: 0x10
}

// 
// Start address: 0x114f30
void upper_lstep_2d()
{
	// Line 982, Address: 0x114f30, Func Offset: 0
	// Line 983, Address: 0x114f34, Func Offset: 0x4
	// Func End, Address: 0x114f40, Func Offset: 0x10
}

// 
// Start address: 0x114f40
void lower_rstep_2d()
{
	// Line 986, Address: 0x114f40, Func Offset: 0
	// Line 987, Address: 0x114f44, Func Offset: 0x4
	// Func End, Address: 0x114f50, Func Offset: 0x10
}

// 
// Start address: 0x114f50
void upper_rstep_2d()
{
	// Line 989, Address: 0x114f50, Func Offset: 0
	// Line 990, Address: 0x114f54, Func Offset: 0x4
	// Func End, Address: 0x114f60, Func Offset: 0x10
}

// 
// Start address: 0x114f60
void lower_hold_2d(SubCharacter* p)
{
	short frame;
	_AnimeInfo* a_info;
	// Line 993, Address: 0x114f60, Func Offset: 0
	// Line 994, Address: 0x114f78, Func Offset: 0x18
	// Line 995, Address: 0x114f8c, Func Offset: 0x2c
	// Line 999, Address: 0x114fa4, Func Offset: 0x44
	// Line 1003, Address: 0x114fb0, Func Offset: 0x50
	// Line 1004, Address: 0x114fc8, Func Offset: 0x68
	// Line 1006, Address: 0x115004, Func Offset: 0xa4
	// Line 1008, Address: 0x115014, Func Offset: 0xb4
	// Line 1021, Address: 0x115058, Func Offset: 0xf8
	// Line 1023, Address: 0x11508c, Func Offset: 0x12c
	// Line 1024, Address: 0x1150a0, Func Offset: 0x140
	// Line 1027, Address: 0x1150b4, Func Offset: 0x154
	// Line 1029, Address: 0x1150c0, Func Offset: 0x160
	// Line 1035, Address: 0x115110, Func Offset: 0x1b0
	// Line 1040, Address: 0x11511c, Func Offset: 0x1bc
	// Line 1041, Address: 0x11512c, Func Offset: 0x1cc
	// Line 1051, Address: 0x115160, Func Offset: 0x200
	// Line 1054, Address: 0x11518c, Func Offset: 0x22c
	// Line 1056, Address: 0x1151b4, Func Offset: 0x254
	// Line 1058, Address: 0x1151c0, Func Offset: 0x260
	// Line 1061, Address: 0x1151c8, Func Offset: 0x268
	// Line 1063, Address: 0x1151f0, Func Offset: 0x290
	// Line 1070, Address: 0x1151fc, Func Offset: 0x29c
	// Line 1071, Address: 0x11520c, Func Offset: 0x2ac
	// Line 1072, Address: 0x115220, Func Offset: 0x2c0
	// Line 1073, Address: 0x115234, Func Offset: 0x2d4
	// Line 1074, Address: 0x115248, Func Offset: 0x2e8
	// Line 1075, Address: 0x115250, Func Offset: 0x2f0
	// Line 1076, Address: 0x115268, Func Offset: 0x308
	// Line 1079, Address: 0x11527c, Func Offset: 0x31c
	// Line 1082, Address: 0x115284, Func Offset: 0x324
	// Func End, Address: 0x1152a0, Func Offset: 0x340
}

// 
// Start address: 0x1152a0
void upper_hold_2d(SubCharacter* p)
{
	_AnimeInfo* a_info;
	// Line 1084, Address: 0x1152a0, Func Offset: 0
	// Line 1085, Address: 0x1152b0, Func Offset: 0x10
	// Line 1092, Address: 0x1152c4, Func Offset: 0x24
	// Line 1093, Address: 0x1152ec, Func Offset: 0x4c
	// Line 1098, Address: 0x115300, Func Offset: 0x60
	// Line 1100, Address: 0x115334, Func Offset: 0x94
	// Line 1101, Address: 0x115348, Func Offset: 0xa8
	// Line 1104, Address: 0x11535c, Func Offset: 0xbc
	// Line 1106, Address: 0x115368, Func Offset: 0xc8
	// Line 1112, Address: 0x1153b8, Func Offset: 0x118
	// Line 1117, Address: 0x1153c4, Func Offset: 0x124
	// Line 1118, Address: 0x1153d4, Func Offset: 0x134
	// Line 1129, Address: 0x115408, Func Offset: 0x168
	// Line 1132, Address: 0x115434, Func Offset: 0x194
	// Line 1134, Address: 0x11545c, Func Offset: 0x1bc
	// Line 1136, Address: 0x115468, Func Offset: 0x1c8
	// Line 1139, Address: 0x115470, Func Offset: 0x1d0
	// Line 1141, Address: 0x115498, Func Offset: 0x1f8
	// Line 1148, Address: 0x1154a4, Func Offset: 0x204
	// Line 1149, Address: 0x1154b4, Func Offset: 0x214
	// Line 1150, Address: 0x1154c8, Func Offset: 0x228
	// Line 1151, Address: 0x1154dc, Func Offset: 0x23c
	// Line 1152, Address: 0x1154f0, Func Offset: 0x250
	// Line 1153, Address: 0x1154f8, Func Offset: 0x258
	// Line 1154, Address: 0x115510, Func Offset: 0x270
	// Line 1159, Address: 0x115524, Func Offset: 0x284
	// Func End, Address: 0x115538, Func Offset: 0x298
}

// 
// Start address: 0x115540
void lower_release_2d(SubCharacter* p)
{
	short frame;
	// Line 1162, Address: 0x115540, Func Offset: 0
	// Line 1163, Address: 0x115554, Func Offset: 0x14
	// Line 1167, Address: 0x11556c, Func Offset: 0x2c
	// Line 1171, Address: 0x115578, Func Offset: 0x38
	// Line 1172, Address: 0x115590, Func Offset: 0x50
	// Line 1176, Address: 0x1155cc, Func Offset: 0x8c
	// Line 1186, Address: 0x115610, Func Offset: 0xd0
	// Line 1187, Address: 0x115624, Func Offset: 0xe4
	// Line 1188, Address: 0x115638, Func Offset: 0xf8
	// Line 1191, Address: 0x11564c, Func Offset: 0x10c
	// Func End, Address: 0x115664, Func Offset: 0x124
}

// 
// Start address: 0x115670
void upper_release_2d()
{
	// Line 1193, Address: 0x115670, Func Offset: 0
	// Line 1197, Address: 0x115678, Func Offset: 0x8
	// Line 1202, Address: 0x11568c, Func Offset: 0x1c
	// Line 1203, Address: 0x1156a0, Func Offset: 0x30
	// Line 1215, Address: 0x1156b4, Func Offset: 0x44
	// Line 1216, Address: 0x1156c8, Func Offset: 0x58
	// Line 1219, Address: 0x1156d0, Func Offset: 0x60
	// Line 1222, Address: 0x1156d8, Func Offset: 0x68
	// Line 1228, Address: 0x115768, Func Offset: 0xf8
	// Line 1229, Address: 0x11577c, Func Offset: 0x10c
	// Line 1232, Address: 0x115784, Func Offset: 0x114
	// Func End, Address: 0x115794, Func Offset: 0x124
}

// 
// Start address: 0x1157a0
void lower_attack_2d(SubCharacter* p)
{
	short frame;
	_AnimeInfo* a_info;
	// Line 1235, Address: 0x1157a0, Func Offset: 0
	// Line 1236, Address: 0x1157b8, Func Offset: 0x18
	// Line 1240, Address: 0x1157cc, Func Offset: 0x2c
	// Line 1243, Address: 0x1157d8, Func Offset: 0x38
	// Line 1248, Address: 0x115804, Func Offset: 0x64
	// Line 1249, Address: 0x115830, Func Offset: 0x90
	// Line 1251, Address: 0x115858, Func Offset: 0xb8
	// Line 1253, Address: 0x115864, Func Offset: 0xc4
	// Line 1256, Address: 0x1158a0, Func Offset: 0x100
	// Line 1258, Address: 0x1158c8, Func Offset: 0x128
	// Line 1260, Address: 0x1158d4, Func Offset: 0x134
	// Line 1267, Address: 0x115910, Func Offset: 0x170
	// Line 1269, Address: 0x11591c, Func Offset: 0x17c
	// Line 1270, Address: 0x115940, Func Offset: 0x1a0
	// Line 1271, Address: 0x115950, Func Offset: 0x1b0
	// Line 1272, Address: 0x115968, Func Offset: 0x1c8
	// Line 1286, Address: 0x115978, Func Offset: 0x1d8
	// Line 1287, Address: 0x1159a0, Func Offset: 0x200
	// Line 1289, Address: 0x1159b4, Func Offset: 0x214
	// Line 1290, Address: 0x1159bc, Func Offset: 0x21c
	// Line 1292, Address: 0x1159d0, Func Offset: 0x230
	// Line 1293, Address: 0x1159d8, Func Offset: 0x238
	// Line 1294, Address: 0x1159ec, Func Offset: 0x24c
	// Line 1296, Address: 0x1159fc, Func Offset: 0x25c
	// Line 1298, Address: 0x115a1c, Func Offset: 0x27c
	// Line 1299, Address: 0x115a28, Func Offset: 0x288
	// Line 1300, Address: 0x115a3c, Func Offset: 0x29c
	// Line 1301, Address: 0x115a50, Func Offset: 0x2b0
	// Line 1302, Address: 0x115a58, Func Offset: 0x2b8
	// Line 1304, Address: 0x115a6c, Func Offset: 0x2cc
	// Line 1305, Address: 0x115a74, Func Offset: 0x2d4
	// Line 1310, Address: 0x115a88, Func Offset: 0x2e8
	// Line 1313, Address: 0x115ab4, Func Offset: 0x314
	// Line 1314, Address: 0x115ad8, Func Offset: 0x338
	// Line 1315, Address: 0x115aec, Func Offset: 0x34c
	// Line 1319, Address: 0x115b00, Func Offset: 0x360
	// Func End, Address: 0x115b1c, Func Offset: 0x37c
}

// 
// Start address: 0x115b20
void upper_attack_2d(SubCharacter* p)
{
	unsigned short frame;
	unsigned short name2;
	unsigned short name1;
	_AnimeInfo* a_info;
	int bul;
	int wep;
	short frame;
	_AnimeInfo* a_info;
	// Line 1321, Address: 0x115b20, Func Offset: 0
	// Line 1322, Address: 0x115b4c, Func Offset: 0x2c
	// Line 1336, Address: 0x115b60, Func Offset: 0x40
	// Line 1337, Address: 0x115b74, Func Offset: 0x54
	// Line 1339, Address: 0x115bac, Func Offset: 0x8c
	// Line 1340, Address: 0x115bb0, Func Offset: 0x90
	// Line 1342, Address: 0x115bb8, Func Offset: 0x98
	// Line 1343, Address: 0x115bbc, Func Offset: 0x9c
	// Line 1345, Address: 0x115bc4, Func Offset: 0xa4
	// Line 1353, Address: 0x115bc8, Func Offset: 0xa8
	// Line 1354, Address: 0x115bf0, Func Offset: 0xd0
	// Line 1362, Address: 0x115c04, Func Offset: 0xe4
	// Line 1363, Address: 0x115c14, Func Offset: 0xf4
	// Line 1364, Address: 0x115c24, Func Offset: 0x104
	// Line 1367, Address: 0x115c38, Func Offset: 0x118
	// Line 1368, Address: 0x115c40, Func Offset: 0x120
	// Line 1369, Address: 0x115c50, Func Offset: 0x130
	// Line 1379, Address: 0x115c64, Func Offset: 0x144
	// Line 1380, Address: 0x115c74, Func Offset: 0x154
	// Line 1385, Address: 0x115cb0, Func Offset: 0x190
	// Line 1395, Address: 0x115cc4, Func Offset: 0x1a4
	// Line 1396, Address: 0x115ce8, Func Offset: 0x1c8
	// Line 1397, Address: 0x115cf8, Func Offset: 0x1d8
	// Line 1398, Address: 0x115d10, Func Offset: 0x1f0
	// Line 1400, Address: 0x115d20, Func Offset: 0x200
	// Line 1415, Address: 0x115d48, Func Offset: 0x228
	// Line 1416, Address: 0x115d50, Func Offset: 0x230
	// Line 1417, Address: 0x115d78, Func Offset: 0x258
	// Line 1418, Address: 0x115d8c, Func Offset: 0x26c
	// Line 1422, Address: 0x115d94, Func Offset: 0x274
	// Line 1423, Address: 0x115da8, Func Offset: 0x288
	// Line 1427, Address: 0x115db0, Func Offset: 0x290
	// Line 1429, Address: 0x115dc8, Func Offset: 0x2a8
	// Line 1430, Address: 0x115dd8, Func Offset: 0x2b8
	// Line 1431, Address: 0x115de8, Func Offset: 0x2c8
	// Line 1433, Address: 0x115df0, Func Offset: 0x2d0
	// Line 1434, Address: 0x115e00, Func Offset: 0x2e0
	// Line 1436, Address: 0x115e14, Func Offset: 0x2f4
	// Line 1437, Address: 0x115e20, Func Offset: 0x300
	// Line 1438, Address: 0x115e34, Func Offset: 0x314
	// Line 1439, Address: 0x115e48, Func Offset: 0x328
	// Line 1440, Address: 0x115e50, Func Offset: 0x330
	// Line 1443, Address: 0x115e64, Func Offset: 0x344
	// Line 1444, Address: 0x115e6c, Func Offset: 0x34c
	// Line 1447, Address: 0x115e80, Func Offset: 0x360
	// Line 1448, Address: 0x115eac, Func Offset: 0x38c
	// Line 1449, Address: 0x115ec4, Func Offset: 0x3a4
	// Line 1450, Address: 0x115ed0, Func Offset: 0x3b0
	// Line 1451, Address: 0x115ed8, Func Offset: 0x3b8
	// Line 1454, Address: 0x115ee0, Func Offset: 0x3c0
	// Line 1476, Address: 0x115ee8, Func Offset: 0x3c8
	// Line 1483, Address: 0x115f08, Func Offset: 0x3e8
	// Line 1484, Address: 0x115f1c, Func Offset: 0x3fc
	// Line 1486, Address: 0x115f60, Func Offset: 0x440
	// Line 1487, Address: 0x115f68, Func Offset: 0x448
	// Line 1488, Address: 0x115f70, Func Offset: 0x450
	// Line 1489, Address: 0x115f78, Func Offset: 0x458
	// Line 1491, Address: 0x115f80, Func Offset: 0x460
	// Line 1492, Address: 0x115f88, Func Offset: 0x468
	// Line 1493, Address: 0x115f90, Func Offset: 0x470
	// Line 1494, Address: 0x115f94, Func Offset: 0x474
	// Line 1496, Address: 0x115f9c, Func Offset: 0x47c
	// Line 1497, Address: 0x115fa4, Func Offset: 0x484
	// Line 1498, Address: 0x115fac, Func Offset: 0x48c
	// Line 1499, Address: 0x115fb4, Func Offset: 0x494
	// Line 1501, Address: 0x115fbc, Func Offset: 0x49c
	// Line 1502, Address: 0x115fc4, Func Offset: 0x4a4
	// Line 1503, Address: 0x115fcc, Func Offset: 0x4ac
	// Line 1507, Address: 0x115fd4, Func Offset: 0x4b4
	// Line 1508, Address: 0x115ffc, Func Offset: 0x4dc
	// Line 1510, Address: 0x116024, Func Offset: 0x504
	// Line 1516, Address: 0x116034, Func Offset: 0x514
	// Line 1519, Address: 0x116054, Func Offset: 0x534
	// Line 1520, Address: 0x11605c, Func Offset: 0x53c
	// Line 1523, Address: 0x116064, Func Offset: 0x544
	// Line 1527, Address: 0x11606c, Func Offset: 0x54c
	// Line 1528, Address: 0x11607c, Func Offset: 0x55c
	// Line 1530, Address: 0x1160a4, Func Offset: 0x584
	// Line 1534, Address: 0x1160dc, Func Offset: 0x5bc
	// Line 1535, Address: 0x1160ec, Func Offset: 0x5cc
	// Line 1537, Address: 0x116108, Func Offset: 0x5e8
	// Line 1539, Address: 0x116110, Func Offset: 0x5f0
	// Line 1540, Address: 0x116130, Func Offset: 0x610
	// Line 1546, Address: 0x11614c, Func Offset: 0x62c
	// Func End, Address: 0x11617c, Func Offset: 0x65c
}

// 
// Start address: 0x116180
void lower_kick_2d(SubCharacter* p)
{
	// Line 1548, Address: 0x116180, Func Offset: 0
	// Line 1550, Address: 0x11618c, Func Offset: 0xc
	// Line 1552, Address: 0x116198, Func Offset: 0x18
	// Line 1553, Address: 0x1161c0, Func Offset: 0x40
	// Line 1555, Address: 0x1161d4, Func Offset: 0x54
	// Line 1556, Address: 0x1161e0, Func Offset: 0x60
	// Line 1557, Address: 0x1161f4, Func Offset: 0x74
	// Line 1558, Address: 0x116208, Func Offset: 0x88
	// Line 1561, Address: 0x11621c, Func Offset: 0x9c
	// Func End, Address: 0x11622c, Func Offset: 0xac
}

// 
// Start address: 0x116230
void upper_kick_2d(SubCharacter* p)
{
	// Line 1563, Address: 0x116230, Func Offset: 0
	// Line 1566, Address: 0x11623c, Func Offset: 0xc
	// Line 1567, Address: 0x116250, Func Offset: 0x20
	// Line 1568, Address: 0x116260, Func Offset: 0x30
	// Line 1570, Address: 0x116288, Func Offset: 0x58
	// Line 1575, Address: 0x1162a4, Func Offset: 0x74
	// Line 1576, Address: 0x1162b8, Func Offset: 0x88
	// Line 1577, Address: 0x1162cc, Func Offset: 0x9c
	// Line 1580, Address: 0x1162e0, Func Offset: 0xb0
	// Func End, Address: 0x1162f0, Func Offset: 0xc0
}

// 
// Start address: 0x1162f0
void lower_fall_2d(SubCharacter* p)
{
	unsigned short frame;
	// Line 1582, Address: 0x1162f0, Func Offset: 0
	// Line 1584, Address: 0x116300, Func Offset: 0x10
	// Line 1586, Address: 0x116318, Func Offset: 0x28
	// Line 1587, Address: 0x116328, Func Offset: 0x38
	// Line 1589, Address: 0x116350, Func Offset: 0x60
	// Line 1590, Address: 0x11635c, Func Offset: 0x6c
	// Line 1592, Address: 0x116364, Func Offset: 0x74
	// Line 1593, Address: 0x116388, Func Offset: 0x98
	// Line 1595, Address: 0x1163e4, Func Offset: 0xf4
	// Line 1597, Address: 0x1163ec, Func Offset: 0xfc
	// Line 1599, Address: 0x1163f8, Func Offset: 0x108
	// Line 1600, Address: 0x11640c, Func Offset: 0x11c
	// Line 1602, Address: 0x116420, Func Offset: 0x130
	// Func End, Address: 0x116434, Func Offset: 0x144
}

// 
// Start address: 0x116440
void upper_fall_2d()
{
	// Line 1604, Address: 0x116440, Func Offset: 0
	// Line 1605, Address: 0x116448, Func Offset: 0x8
	// Line 1606, Address: 0x11645c, Func Offset: 0x1c
	// Line 1608, Address: 0x116470, Func Offset: 0x30
	// Func End, Address: 0x116480, Func Offset: 0x40
}

// 
// Start address: 0x116480
void lower_damage_2d(SubCharacter* p)
{
	int end;
	unsigned short cur_frame;
	float damage_angle;
	_AnimeInfo* a_info;
	// Line 1611, Address: 0x116480, Func Offset: 0
	// Line 1612, Address: 0x116498, Func Offset: 0x18
	// Line 1621, Address: 0x1164ac, Func Offset: 0x2c
	// Line 1622, Address: 0x1164c4, Func Offset: 0x44
	// Line 1623, Address: 0x1164e0, Func Offset: 0x60
	// Line 1626, Address: 0x116500, Func Offset: 0x80
	// Line 1627, Address: 0x116514, Func Offset: 0x94
	// Line 1635, Address: 0x116644, Func Offset: 0x1c4
	// Line 1637, Address: 0x116660, Func Offset: 0x1e0
	// Line 1638, Address: 0x116674, Func Offset: 0x1f4
	// Line 1639, Address: 0x11667c, Func Offset: 0x1fc
	// Line 1641, Address: 0x116688, Func Offset: 0x208
	// Line 1649, Address: 0x116690, Func Offset: 0x210
	// Line 1651, Address: 0x1166ac, Func Offset: 0x22c
	// Line 1652, Address: 0x1166c0, Func Offset: 0x240
	// Line 1653, Address: 0x1166c8, Func Offset: 0x248
	// Line 1655, Address: 0x1166d4, Func Offset: 0x254
	// Line 1663, Address: 0x1166dc, Func Offset: 0x25c
	// Line 1664, Address: 0x1166f8, Func Offset: 0x278
	// Line 1665, Address: 0x11670c, Func Offset: 0x28c
	// Line 1666, Address: 0x116714, Func Offset: 0x294
	// Line 1668, Address: 0x116720, Func Offset: 0x2a0
	// Line 1676, Address: 0x116728, Func Offset: 0x2a8
	// Line 1677, Address: 0x116744, Func Offset: 0x2c4
	// Line 1678, Address: 0x116758, Func Offset: 0x2d8
	// Line 1679, Address: 0x116760, Func Offset: 0x2e0
	// Line 1681, Address: 0x11676c, Func Offset: 0x2ec
	// Line 1689, Address: 0x116774, Func Offset: 0x2f4
	// Line 1690, Address: 0x116790, Func Offset: 0x310
	// Line 1692, Address: 0x1167a4, Func Offset: 0x324
	// Line 1693, Address: 0x1167ac, Func Offset: 0x32c
	// Line 1695, Address: 0x1167b8, Func Offset: 0x338
	// Line 1703, Address: 0x1167c0, Func Offset: 0x340
	// Line 1704, Address: 0x1167dc, Func Offset: 0x35c
	// Line 1706, Address: 0x1167f0, Func Offset: 0x370
	// Line 1707, Address: 0x1167f8, Func Offset: 0x378
	// Line 1709, Address: 0x116804, Func Offset: 0x384
	// Line 1717, Address: 0x11680c, Func Offset: 0x38c
	// Line 1718, Address: 0x116828, Func Offset: 0x3a8
	// Line 1719, Address: 0x11683c, Func Offset: 0x3bc
	// Line 1720, Address: 0x116844, Func Offset: 0x3c4
	// Line 1722, Address: 0x116850, Func Offset: 0x3d0
	// Line 1730, Address: 0x116858, Func Offset: 0x3d8
	// Line 1731, Address: 0x116874, Func Offset: 0x3f4
	// Line 1732, Address: 0x116888, Func Offset: 0x408
	// Line 1733, Address: 0x116890, Func Offset: 0x410
	// Line 1735, Address: 0x11689c, Func Offset: 0x41c
	// Line 1737, Address: 0x1168a4, Func Offset: 0x424
	// Line 1746, Address: 0x1168b0, Func Offset: 0x430
	// Line 1752, Address: 0x1168c4, Func Offset: 0x444
	// Line 1753, Address: 0x1168d8, Func Offset: 0x458
	// Line 1754, Address: 0x1168e8, Func Offset: 0x468
	// Line 1755, Address: 0x1168fc, Func Offset: 0x47c
	// Line 1756, Address: 0x116910, Func Offset: 0x490
	// Line 1758, Address: 0x116918, Func Offset: 0x498
	// Line 1760, Address: 0x11692c, Func Offset: 0x4ac
	// Line 1763, Address: 0x116940, Func Offset: 0x4c0
	// Func End, Address: 0x11695c, Func Offset: 0x4dc
}

// 
// Start address: 0x116960
void upper_damage_2d()
{
	// Line 1765, Address: 0x116960, Func Offset: 0
	// Line 1766, Address: 0x116968, Func Offset: 0x8
	// Line 1768, Address: 0x11697c, Func Offset: 0x1c
	// Line 1769, Address: 0x11698c, Func Offset: 0x2c
	// Line 1771, Address: 0x116998, Func Offset: 0x38
	// Line 1772, Address: 0x1169a8, Func Offset: 0x48
	// Line 1773, Address: 0x1169bc, Func Offset: 0x5c
	// Line 1774, Address: 0x1169d0, Func Offset: 0x70
	// Line 1776, Address: 0x1169d8, Func Offset: 0x78
	// Line 1778, Address: 0x1169ec, Func Offset: 0x8c
	// Line 1781, Address: 0x116a00, Func Offset: 0xa0
	// Func End, Address: 0x116a10, Func Offset: 0xb0
}

// 
// Start address: 0x116a10
void lower_to_stand_2d()
{
	// Line 1784, Address: 0x116a10, Func Offset: 0
	// Line 1785, Address: 0x116a14, Func Offset: 0x4
	// Func End, Address: 0x116a20, Func Offset: 0x10
}

// 
// Start address: 0x116a20
void upper_to_stand_2d()
{
	// Line 1787, Address: 0x116a20, Func Offset: 0
	// Line 1788, Address: 0x116a24, Func Offset: 0x4
	// Func End, Address: 0x116a30, Func Offset: 0x10
}

// 
// Start address: 0x116a30
void lower_wall_f_2d(SubCharacter* p)
{
	unsigned short frame;
	// Line 1791, Address: 0x116a30, Func Offset: 0
	// Line 1794, Address: 0x116a40, Func Offset: 0x10
	// Line 1796, Address: 0x116a58, Func Offset: 0x28
	// Line 1797, Address: 0x116a78, Func Offset: 0x48
	// Line 1798, Address: 0x116a84, Func Offset: 0x54
	// Line 1817, Address: 0x116aac, Func Offset: 0x7c
	// Line 1818, Address: 0x116ad0, Func Offset: 0xa0
	// Line 1821, Address: 0x116b2c, Func Offset: 0xfc
	// Line 1822, Address: 0x116b40, Func Offset: 0x110
	// Line 1824, Address: 0x116b54, Func Offset: 0x124
	// Func End, Address: 0x116b68, Func Offset: 0x138
}

// 
// Start address: 0x116b70
void upper_wall_f_2d()
{
	// Line 1826, Address: 0x116b70, Func Offset: 0
	// Line 1827, Address: 0x116b78, Func Offset: 0x8
	// Line 1828, Address: 0x116b8c, Func Offset: 0x1c
	// Line 1830, Address: 0x116ba0, Func Offset: 0x30
	// Func End, Address: 0x116bb0, Func Offset: 0x40
}

// 
// Start address: 0x116bb0
void lower_event_2d(SubCharacter* p)
{
	// Line 1833, Address: 0x116bb0, Func Offset: 0
	// Line 1835, Address: 0x116bb8, Func Offset: 0x8
	// Line 1836, Address: 0x116bc4, Func Offset: 0x14
	// Func End, Address: 0x116bd0, Func Offset: 0x20
}

// 
// Start address: 0x116bd0
void upper_event_2d(SubCharacter* p)
{
	// Line 1838, Address: 0x116bd0, Func Offset: 0
	// Line 1839, Address: 0x116bdc, Func Offset: 0xc
	// Line 1846, Address: 0x116c34, Func Offset: 0x64
	// Line 1847, Address: 0x116c48, Func Offset: 0x78
	// Line 1848, Address: 0x116c5c, Func Offset: 0x8c
	// Line 1849, Address: 0x116c70, Func Offset: 0xa0
	// Line 1853, Address: 0x116c84, Func Offset: 0xb4
	// Func End, Address: 0x116c94, Func Offset: 0xc4
}

// 
// Start address: 0x116ca0
void SubCharacter::PlayerUpdateStatus2D()
{
	// Line 1950, Address: 0x116ca0, Func Offset: 0
	// Line 1953, Address: 0x116cac, Func Offset: 0xc
	// Line 1954, Address: 0x116cbc, Func Offset: 0x1c
	// Line 1956, Address: 0x116cc8, Func Offset: 0x28
	// Line 1957, Address: 0x116cd0, Func Offset: 0x30
	// Line 1958, Address: 0x116ce4, Func Offset: 0x44
	// Line 1959, Address: 0x116cec, Func Offset: 0x4c
	// Line 1960, Address: 0x116cf4, Func Offset: 0x54
	// Line 1970, Address: 0x116d00, Func Offset: 0x60
	// Line 1973, Address: 0x116d08, Func Offset: 0x68
	// Line 1985, Address: 0x116d18, Func Offset: 0x78
	// Line 1988, Address: 0x116d20, Func Offset: 0x80
	// Line 1989, Address: 0x116d50, Func Offset: 0xb0
	// Line 1990, Address: 0x116d6c, Func Offset: 0xcc
	// Line 1991, Address: 0x116d74, Func Offset: 0xd4
	// Line 1995, Address: 0x116d80, Func Offset: 0xe0
	// Line 1996, Address: 0x116da0, Func Offset: 0x100
	// Line 1997, Address: 0x116dd4, Func Offset: 0x134
	// Line 2000, Address: 0x116de0, Func Offset: 0x140
	// Func End, Address: 0x116df0, Func Offset: 0x150
}

// 
// Start address: 0x116df0
void SubCharacter::PlayerUpdateStatusLower2D()
{
	float roty;
	float roty;
	float lower_motion_angle;
	_anon0 watch_pos;
	_anon0 cam_pos;
	PAD_2D* p2d;
	PAD_INFO* p;
	shPlayerWork* w;
	// Line 2010, Address: 0x116df0, Func Offset: 0
	// Line 2012, Address: 0x116e08, Func Offset: 0x18
	// Line 2013, Address: 0x116e14, Func Offset: 0x24
	// Line 2014, Address: 0x116e20, Func Offset: 0x30
	// Line 2018, Address: 0x116e2c, Func Offset: 0x3c
	// Line 2019, Address: 0x116e38, Func Offset: 0x48
	// Line 2021, Address: 0x116e44, Func Offset: 0x54
	// Line 2032, Address: 0x116e6c, Func Offset: 0x7c
	// Line 2036, Address: 0x116ea4, Func Offset: 0xb4
	// Line 2037, Address: 0x116ebc, Func Offset: 0xcc
	// Line 2039, Address: 0x116ec4, Func Offset: 0xd4
	// Line 2040, Address: 0x116ed4, Func Offset: 0xe4
	// Line 2041, Address: 0x116ee0, Func Offset: 0xf0
	// Line 2043, Address: 0x116f00, Func Offset: 0x110
	// Line 2047, Address: 0x116f10, Func Offset: 0x120
	// Line 2056, Address: 0x116f30, Func Offset: 0x140
	// Line 2057, Address: 0x116f78, Func Offset: 0x188
	// Line 2058, Address: 0x116f80, Func Offset: 0x190
	// Line 2059, Address: 0x116fac, Func Offset: 0x1bc
	// Line 2060, Address: 0x116fb4, Func Offset: 0x1c4
	// Line 2061, Address: 0x116fe0, Func Offset: 0x1f0
	// Line 2062, Address: 0x116fe8, Func Offset: 0x1f8
	// Line 2063, Address: 0x116ff0, Func Offset: 0x200
	// Line 2067, Address: 0x116ff8, Func Offset: 0x208
	// Line 2068, Address: 0x117000, Func Offset: 0x210
	// Line 2069, Address: 0x11700c, Func Offset: 0x21c
	// Line 2071, Address: 0x11702c, Func Offset: 0x23c
	// Line 2072, Address: 0x11703c, Func Offset: 0x24c
	// Line 2181, Address: 0x117040, Func Offset: 0x250
	// Line 2182, Address: 0x117058, Func Offset: 0x268
	// Line 2183, Address: 0x11706c, Func Offset: 0x27c
	// Line 2184, Address: 0x11707c, Func Offset: 0x28c
	// Line 2185, Address: 0x117090, Func Offset: 0x2a0
	// Line 2187, Address: 0x1170a0, Func Offset: 0x2b0
	// Line 2194, Address: 0x1170a8, Func Offset: 0x2b8
	// Line 2195, Address: 0x1170bc, Func Offset: 0x2cc
	// Line 2196, Address: 0x1170d0, Func Offset: 0x2e0
	// Line 2197, Address: 0x1170e4, Func Offset: 0x2f4
	// Line 2198, Address: 0x1170f4, Func Offset: 0x304
	// Line 2200, Address: 0x117108, Func Offset: 0x318
	// Line 2209, Address: 0x117110, Func Offset: 0x320
	// Line 2210, Address: 0x117124, Func Offset: 0x334
	// Line 2219, Address: 0x1171b8, Func Offset: 0x3c8
	// Line 2220, Address: 0x1171d0, Func Offset: 0x3e0
	// Line 2224, Address: 0x1171f8, Func Offset: 0x408
	// Line 2225, Address: 0x117200, Func Offset: 0x410
	// Line 2243, Address: 0x117214, Func Offset: 0x424
	// Line 2253, Address: 0x11721c, Func Offset: 0x42c
	// Line 2254, Address: 0x117234, Func Offset: 0x444
	// Line 2258, Address: 0x11725c, Func Offset: 0x46c
	// Line 2259, Address: 0x117264, Func Offset: 0x474
	// Line 2278, Address: 0x117278, Func Offset: 0x488
	// Line 2285, Address: 0x117280, Func Offset: 0x490
	// Line 2286, Address: 0x117298, Func Offset: 0x4a8
	// Line 2287, Address: 0x1172c4, Func Offset: 0x4d4
	// Line 2290, Address: 0x1172cc, Func Offset: 0x4dc
	// Line 2311, Address: 0x1172d4, Func Offset: 0x4e4
	// Line 2313, Address: 0x117334, Func Offset: 0x544
	// Line 2314, Address: 0x11734c, Func Offset: 0x55c
	// Line 2315, Address: 0x11735c, Func Offset: 0x56c
	// Line 2328, Address: 0x11736c, Func Offset: 0x57c
	// Line 2329, Address: 0x117380, Func Offset: 0x590
	// Line 2330, Address: 0x117394, Func Offset: 0x5a4
	// Line 2331, Address: 0x1173a4, Func Offset: 0x5b4
	// Line 2332, Address: 0x1173b4, Func Offset: 0x5c4
	// Line 2334, Address: 0x1173c4, Func Offset: 0x5d4
	// Line 2341, Address: 0x1173cc, Func Offset: 0x5dc
	// Line 2346, Address: 0x1173ec, Func Offset: 0x5fc
	// Line 2352, Address: 0x117404, Func Offset: 0x614
	// Line 2354, Address: 0x117420, Func Offset: 0x630
	// Line 2364, Address: 0x1174b4, Func Offset: 0x6c4
	// Line 2366, Address: 0x1174d8, Func Offset: 0x6e8
	// Line 2367, Address: 0x1174ec, Func Offset: 0x6fc
	// Line 2368, Address: 0x1174fc, Func Offset: 0x70c
	// Line 2370, Address: 0x11750c, Func Offset: 0x71c
	// Line 2371, Address: 0x117530, Func Offset: 0x740
	// Line 2374, Address: 0x117540, Func Offset: 0x750
	// Line 2377, Address: 0x117548, Func Offset: 0x758
	// Line 2384, Address: 0x1175c8, Func Offset: 0x7d8
	// Line 2386, Address: 0x1175ec, Func Offset: 0x7fc
	// Line 2387, Address: 0x117600, Func Offset: 0x810
	// Line 2388, Address: 0x117610, Func Offset: 0x820
	// Line 2390, Address: 0x117620, Func Offset: 0x830
	// Line 2391, Address: 0x117644, Func Offset: 0x854
	// Line 2394, Address: 0x117654, Func Offset: 0x864
	// Line 2397, Address: 0x11765c, Func Offset: 0x86c
	// Line 2404, Address: 0x1176dc, Func Offset: 0x8ec
	// Line 2406, Address: 0x117700, Func Offset: 0x910
	// Line 2407, Address: 0x117714, Func Offset: 0x924
	// Line 2408, Address: 0x117728, Func Offset: 0x938
	// Line 2410, Address: 0x11773c, Func Offset: 0x94c
	// Line 2411, Address: 0x117760, Func Offset: 0x970
	// Line 2414, Address: 0x117770, Func Offset: 0x980
	// Line 2424, Address: 0x117778, Func Offset: 0x988
	// Line 2425, Address: 0x1177ac, Func Offset: 0x9bc
	// Line 2431, Address: 0x117818, Func Offset: 0xa28
	// Line 2433, Address: 0x11783c, Func Offset: 0xa4c
	// Line 2434, Address: 0x117850, Func Offset: 0xa60
	// Line 2435, Address: 0x117860, Func Offset: 0xa70
	// Line 2437, Address: 0x117870, Func Offset: 0xa80
	// Line 2438, Address: 0x117898, Func Offset: 0xaa8
	// Line 2441, Address: 0x1178ac, Func Offset: 0xabc
	// Line 2452, Address: 0x1178b4, Func Offset: 0xac4
	// Line 2459, Address: 0x1178d4, Func Offset: 0xae4
	// Line 2460, Address: 0x1178e0, Func Offset: 0xaf0
	// Line 2492, Address: 0x117900, Func Offset: 0xb10
	// Line 2499, Address: 0x117978, Func Offset: 0xb88
	// Line 2501, Address: 0x11799c, Func Offset: 0xbac
	// Line 2502, Address: 0x1179b0, Func Offset: 0xbc0
	// Line 2503, Address: 0x1179c4, Func Offset: 0xbd4
	// Line 2505, Address: 0x1179d8, Func Offset: 0xbe8
	// Line 2508, Address: 0x1179ec, Func Offset: 0xbfc
	// Line 2517, Address: 0x1179f4, Func Offset: 0xc04
	// Line 2525, Address: 0x117a14, Func Offset: 0xc24
	// Line 2530, Address: 0x117a54, Func Offset: 0xc64
	// Line 2531, Address: 0x117a60, Func Offset: 0xc70
	// Line 2533, Address: 0x117a68, Func Offset: 0xc78
	// Line 2536, Address: 0x117a7c, Func Offset: 0xc8c
	// Line 2542, Address: 0x117a94, Func Offset: 0xca4
	// Line 2553, Address: 0x117ab0, Func Offset: 0xcc0
	// Line 2561, Address: 0x117b30, Func Offset: 0xd40
	// Line 2563, Address: 0x117b58, Func Offset: 0xd68
	// Line 2564, Address: 0x117b6c, Func Offset: 0xd7c
	// Line 2565, Address: 0x117b7c, Func Offset: 0xd8c
	// Line 2567, Address: 0x117b90, Func Offset: 0xda0
	// Line 2570, Address: 0x117ba0, Func Offset: 0xdb0
	// Line 2577, Address: 0x117ba8, Func Offset: 0xdb8
	// Line 2578, Address: 0x117bdc, Func Offset: 0xdec
	// Line 2585, Address: 0x117c44, Func Offset: 0xe54
	// Line 2587, Address: 0x117c70, Func Offset: 0xe80
	// Line 2588, Address: 0x117c84, Func Offset: 0xe94
	// Line 2589, Address: 0x117c94, Func Offset: 0xea4
	// Line 2591, Address: 0x117ca8, Func Offset: 0xeb8
	// Line 2592, Address: 0x117cd0, Func Offset: 0xee0
	// Line 2595, Address: 0x117ce4, Func Offset: 0xef4
	// Line 2603, Address: 0x117cec, Func Offset: 0xefc
	// Line 2611, Address: 0x117d0c, Func Offset: 0xf1c
	// Line 2616, Address: 0x117d4c, Func Offset: 0xf5c
	// Line 2617, Address: 0x117d58, Func Offset: 0xf68
	// Line 2619, Address: 0x117d60, Func Offset: 0xf70
	// Line 2622, Address: 0x117d74, Func Offset: 0xf84
	// Line 2629, Address: 0x117d88, Func Offset: 0xf98
	// Line 2640, Address: 0x117da4, Func Offset: 0xfb4
	// Line 2648, Address: 0x117e2c, Func Offset: 0x103c
	// Line 2650, Address: 0x117e50, Func Offset: 0x1060
	// Line 2651, Address: 0x117e64, Func Offset: 0x1074
	// Line 2652, Address: 0x117e74, Func Offset: 0x1084
	// Line 2654, Address: 0x117e88, Func Offset: 0x1098
	// Line 2657, Address: 0x117e98, Func Offset: 0x10a8
	// Line 2664, Address: 0x117ea0, Func Offset: 0x10b0
	// Line 2665, Address: 0x117ed4, Func Offset: 0x10e4
	// Line 2672, Address: 0x117f40, Func Offset: 0x1150
	// Line 2674, Address: 0x117f64, Func Offset: 0x1174
	// Line 2675, Address: 0x117f78, Func Offset: 0x1188
	// Line 2676, Address: 0x117f88, Func Offset: 0x1198
	// Line 2678, Address: 0x117f9c, Func Offset: 0x11ac
	// Line 2679, Address: 0x117fc4, Func Offset: 0x11d4
	// Line 2682, Address: 0x117fd8, Func Offset: 0x11e8
	// Line 2696, Address: 0x117fe0, Func Offset: 0x11f0
	// Line 2697, Address: 0x117fec, Func Offset: 0x11fc
	// Line 2698, Address: 0x117ff8, Func Offset: 0x1208
	// Line 2699, Address: 0x11801c, Func Offset: 0x122c
	// Line 2700, Address: 0x118030, Func Offset: 0x1240
	// Line 2701, Address: 0x118044, Func Offset: 0x1254
	// Line 2703, Address: 0x118054, Func Offset: 0x1264
	// Line 2715, Address: 0x11805c, Func Offset: 0x126c
	// Line 2716, Address: 0x118084, Func Offset: 0x1294
	// Line 2717, Address: 0x118098, Func Offset: 0x12a8
	// Line 2718, Address: 0x1180ac, Func Offset: 0x12bc
	// Line 2720, Address: 0x1180c4, Func Offset: 0x12d4
	// Line 2725, Address: 0x1180cc, Func Offset: 0x12dc
	// Line 2726, Address: 0x1180f4, Func Offset: 0x1304
	// Line 2727, Address: 0x118108, Func Offset: 0x1318
	// Line 2728, Address: 0x118120, Func Offset: 0x1330
	// Line 2730, Address: 0x118138, Func Offset: 0x1348
	// Line 2736, Address: 0x118140, Func Offset: 0x1350
	// Line 2737, Address: 0x118158, Func Offset: 0x1368
	// Line 2738, Address: 0x118168, Func Offset: 0x1378
	// Line 2739, Address: 0x11817c, Func Offset: 0x138c
	// Line 2744, Address: 0x11818c, Func Offset: 0x139c
	// Line 2745, Address: 0x118194, Func Offset: 0x13a4
	// Line 2746, Address: 0x1181ac, Func Offset: 0x13bc
	// Line 2751, Address: 0x1181bc, Func Offset: 0x13cc
	// Line 2757, Address: 0x1181c4, Func Offset: 0x13d4
	// Line 2758, Address: 0x1181d0, Func Offset: 0x13e0
	// Line 2762, Address: 0x1181e4, Func Offset: 0x13f4
	// Line 2763, Address: 0x118218, Func Offset: 0x1428
	// Line 2767, Address: 0x118224, Func Offset: 0x1434
	// Line 2768, Address: 0x118238, Func Offset: 0x1448
	// Line 2769, Address: 0x11824c, Func Offset: 0x145c
	// Line 2770, Address: 0x118260, Func Offset: 0x1470
	// Line 2772, Address: 0x118270, Func Offset: 0x1480
	// Line 2778, Address: 0x118278, Func Offset: 0x1488
	// Line 2779, Address: 0x118290, Func Offset: 0x14a0
	// Line 2780, Address: 0x1182a4, Func Offset: 0x14b4
	// Line 2781, Address: 0x1182b4, Func Offset: 0x14c4
	// Line 2789, Address: 0x1182c8, Func Offset: 0x14d8
	// Func End, Address: 0x1182e4, Func Offset: 0x14f4
}

// 
// Start address: 0x1182f0
void PlayerUpdateStatusUpper2D()
{
	PAD_3D* p3d;
	PAD_INFO* p_pre;
	PAD_INFO* p;
	shPlayerWork* w;
	// Line 2792, Address: 0x1182f0, Func Offset: 0
	// Line 2795, Address: 0x118308, Func Offset: 0x18
	// Line 2796, Address: 0x118314, Func Offset: 0x24
	// Line 2797, Address: 0x11831c, Func Offset: 0x2c
	// Line 2798, Address: 0x118324, Func Offset: 0x34
	// Line 2805, Address: 0x11832c, Func Offset: 0x3c
	// Line 2833, Address: 0x11836c, Func Offset: 0x7c
	// Line 2834, Address: 0x118380, Func Offset: 0x90
	// Line 2835, Address: 0x118394, Func Offset: 0xa4
	// Line 2836, Address: 0x1183a4, Func Offset: 0xb4
	// Line 2838, Address: 0x1183b4, Func Offset: 0xc4
	// Line 2841, Address: 0x1183bc, Func Offset: 0xcc
	// Line 2842, Address: 0x1183d0, Func Offset: 0xe0
	// Line 2843, Address: 0x1183e0, Func Offset: 0xf0
	// Line 2844, Address: 0x1183f0, Func Offset: 0x100
	// Line 2846, Address: 0x118404, Func Offset: 0x114
	// Line 2849, Address: 0x11840c, Func Offset: 0x11c
	// Line 2850, Address: 0x118420, Func Offset: 0x130
	// Line 2851, Address: 0x118430, Func Offset: 0x140
	// Line 2853, Address: 0x118444, Func Offset: 0x154
	// Line 2856, Address: 0x11844c, Func Offset: 0x15c
	// Line 2857, Address: 0x118460, Func Offset: 0x170
	// Line 2858, Address: 0x118470, Func Offset: 0x180
	// Line 2860, Address: 0x118484, Func Offset: 0x194
	// Line 2872, Address: 0x11848c, Func Offset: 0x19c
	// Line 2881, Address: 0x11849c, Func Offset: 0x1ac
	// Line 2882, Address: 0x1184b0, Func Offset: 0x1c0
	// Line 2886, Address: 0x1184bc, Func Offset: 0x1cc
	// Line 2887, Address: 0x1184d4, Func Offset: 0x1e4
	// Line 2888, Address: 0x1184e8, Func Offset: 0x1f8
	// Line 2889, Address: 0x1184fc, Func Offset: 0x20c
	// Line 2890, Address: 0x11850c, Func Offset: 0x21c
	// Line 2893, Address: 0x118520, Func Offset: 0x230
	// Line 2894, Address: 0x11852c, Func Offset: 0x23c
	// Line 2896, Address: 0x118534, Func Offset: 0x244
	// Line 2897, Address: 0x118540, Func Offset: 0x250
	// Line 2898, Address: 0x11855c, Func Offset: 0x26c
	// Line 2900, Address: 0x11856c, Func Offset: 0x27c
	// Line 2901, Address: 0x11858c, Func Offset: 0x29c
	// Line 2907, Address: 0x118598, Func Offset: 0x2a8
	// Line 2908, Address: 0x1185c4, Func Offset: 0x2d4
	// Line 2909, Address: 0x1185d4, Func Offset: 0x2e4
	// Line 2910, Address: 0x1185e8, Func Offset: 0x2f8
	// Line 2913, Address: 0x1185f8, Func Offset: 0x308
	// Line 2914, Address: 0x118604, Func Offset: 0x314
	// Line 2915, Address: 0x11860c, Func Offset: 0x31c
	// Line 2916, Address: 0x118614, Func Offset: 0x324
	// Line 2918, Address: 0x118618, Func Offset: 0x328
	// Line 2925, Address: 0x118620, Func Offset: 0x330
	// Line 2926, Address: 0x118634, Func Offset: 0x344
	// Line 2927, Address: 0x118648, Func Offset: 0x358
	// Line 2928, Address: 0x118658, Func Offset: 0x368
	// Line 2929, Address: 0x118668, Func Offset: 0x378
	// Line 2930, Address: 0x118678, Func Offset: 0x388
	// Line 2932, Address: 0x118688, Func Offset: 0x398
	// Line 2934, Address: 0x118690, Func Offset: 0x3a0
	// Line 2987, Address: 0x118698, Func Offset: 0x3a8
	// Line 2989, Address: 0x118788, Func Offset: 0x498
	// Line 2990, Address: 0x11879c, Func Offset: 0x4ac
	// Line 2991, Address: 0x1187ac, Func Offset: 0x4bc
	// Line 2992, Address: 0x1187bc, Func Offset: 0x4cc
	// Line 2995, Address: 0x1187cc, Func Offset: 0x4dc
	// Line 2997, Address: 0x1187d4, Func Offset: 0x4e4
	// Line 2998, Address: 0x1187e8, Func Offset: 0x4f8
	// Line 2999, Address: 0x1187fc, Func Offset: 0x50c
	// Line 3000, Address: 0x11880c, Func Offset: 0x51c
	// Line 3003, Address: 0x11881c, Func Offset: 0x52c
	// Line 3005, Address: 0x118824, Func Offset: 0x534
	// Line 3006, Address: 0x118838, Func Offset: 0x548
	// Line 3007, Address: 0x11884c, Func Offset: 0x55c
	// Line 3008, Address: 0x11885c, Func Offset: 0x56c
	// Line 3011, Address: 0x11886c, Func Offset: 0x57c
	// Line 3013, Address: 0x118874, Func Offset: 0x584
	// Line 3014, Address: 0x118888, Func Offset: 0x598
	// Line 3015, Address: 0x11889c, Func Offset: 0x5ac
	// Line 3016, Address: 0x1188ac, Func Offset: 0x5bc
	// Line 3019, Address: 0x1188bc, Func Offset: 0x5cc
	// Line 3021, Address: 0x1188c4, Func Offset: 0x5d4
	// Line 3022, Address: 0x1188d0, Func Offset: 0x5e0
	// Line 3023, Address: 0x1188e4, Func Offset: 0x5f4
	// Line 3024, Address: 0x1188f8, Func Offset: 0x608
	// Line 3025, Address: 0x118908, Func Offset: 0x618
	// Line 3029, Address: 0x118918, Func Offset: 0x628
	// Line 3031, Address: 0x118920, Func Offset: 0x630
	// Line 3032, Address: 0x118934, Func Offset: 0x644
	// Line 3033, Address: 0x118948, Func Offset: 0x658
	// Line 3034, Address: 0x118958, Func Offset: 0x668
	// Line 3035, Address: 0x118968, Func Offset: 0x678
	// Line 3036, Address: 0x118978, Func Offset: 0x688
	// Line 3039, Address: 0x118988, Func Offset: 0x698
	// Line 3059, Address: 0x118990, Func Offset: 0x6a0
	// Line 3060, Address: 0x1189a4, Func Offset: 0x6b4
	// Line 3061, Address: 0x1189b8, Func Offset: 0x6c8
	// Line 3062, Address: 0x1189c8, Func Offset: 0x6d8
	// Line 3064, Address: 0x1189d8, Func Offset: 0x6e8
	// Line 3065, Address: 0x1189f0, Func Offset: 0x700
	// Line 3069, Address: 0x118a00, Func Offset: 0x710
	// Line 3071, Address: 0x118a08, Func Offset: 0x718
	// Line 3072, Address: 0x118a1c, Func Offset: 0x72c
	// Line 3073, Address: 0x118a30, Func Offset: 0x740
	// Line 3074, Address: 0x118a40, Func Offset: 0x750
	// Line 3076, Address: 0x118a50, Func Offset: 0x760
	// Line 3077, Address: 0x118a68, Func Offset: 0x778
	// Line 3082, Address: 0x118a78, Func Offset: 0x788
	// Line 3084, Address: 0x118a80, Func Offset: 0x790
	// Line 3085, Address: 0x118a94, Func Offset: 0x7a4
	// Line 3086, Address: 0x118aa8, Func Offset: 0x7b8
	// Line 3087, Address: 0x118ab8, Func Offset: 0x7c8
	// Line 3089, Address: 0x118ac8, Func Offset: 0x7d8
	// Line 3090, Address: 0x118ae0, Func Offset: 0x7f0
	// Line 3094, Address: 0x118af0, Func Offset: 0x800
	// Line 3096, Address: 0x118af8, Func Offset: 0x808
	// Line 3097, Address: 0x118b10, Func Offset: 0x820
	// Line 3098, Address: 0x118b24, Func Offset: 0x834
	// Line 3099, Address: 0x118b3c, Func Offset: 0x84c
	// Line 3101, Address: 0x118b54, Func Offset: 0x864
	// Line 3102, Address: 0x118b6c, Func Offset: 0x87c
	// Line 3106, Address: 0x118b80, Func Offset: 0x890
	// Line 3108, Address: 0x118b88, Func Offset: 0x898
	// Line 3109, Address: 0x118ba0, Func Offset: 0x8b0
	// Line 3110, Address: 0x118bb4, Func Offset: 0x8c4
	// Line 3111, Address: 0x118bcc, Func Offset: 0x8dc
	// Line 3113, Address: 0x118be0, Func Offset: 0x8f0
	// Line 3114, Address: 0x118bf8, Func Offset: 0x908
	// Line 3118, Address: 0x118c10, Func Offset: 0x920
	// Line 3120, Address: 0x118c18, Func Offset: 0x928
	// Line 3121, Address: 0x118c34, Func Offset: 0x944
	// Line 3122, Address: 0x118c48, Func Offset: 0x958
	// Line 3123, Address: 0x118c5c, Func Offset: 0x96c
	// Line 3125, Address: 0x118c6c, Func Offset: 0x97c
	// Line 3126, Address: 0x118c84, Func Offset: 0x994
	// Line 3130, Address: 0x118c98, Func Offset: 0x9a8
	// Line 3132, Address: 0x118ca0, Func Offset: 0x9b0
	// Line 3133, Address: 0x118cbc, Func Offset: 0x9cc
	// Line 3134, Address: 0x118cd0, Func Offset: 0x9e0
	// Line 3135, Address: 0x118ce0, Func Offset: 0x9f0
	// Line 3137, Address: 0x118cf4, Func Offset: 0xa04
	// Line 3138, Address: 0x118d0c, Func Offset: 0xa1c
	// Line 3142, Address: 0x118d1c, Func Offset: 0xa2c
	// Line 3144, Address: 0x118d24, Func Offset: 0xa34
	// Line 3145, Address: 0x118d38, Func Offset: 0xa48
	// Line 3146, Address: 0x118d4c, Func Offset: 0xa5c
	// Line 3147, Address: 0x118d60, Func Offset: 0xa70
	// Line 3149, Address: 0x118d78, Func Offset: 0xa88
	// Line 3150, Address: 0x118d90, Func Offset: 0xaa0
	// Line 3154, Address: 0x118da8, Func Offset: 0xab8
	// Line 3156, Address: 0x118db0, Func Offset: 0xac0
	// Line 3157, Address: 0x118dc8, Func Offset: 0xad8
	// Line 3158, Address: 0x118ddc, Func Offset: 0xaec
	// Line 3159, Address: 0x118df0, Func Offset: 0xb00
	// Line 3161, Address: 0x118e04, Func Offset: 0xb14
	// Line 3162, Address: 0x118e1c, Func Offset: 0xb2c
	// Line 3513, Address: 0x118e34, Func Offset: 0xb44
	// Func End, Address: 0x118e54, Func Offset: 0xb64
}

// 
// Start address: 0x118e60
void PlayerUpdateStatusLower2nd2D()
{
	shPlayerWork* w;
	// Line 3516, Address: 0x118e60, Func Offset: 0
	// Line 3517, Address: 0x118e6c, Func Offset: 0xc
	// Line 3520, Address: 0x118e74, Func Offset: 0x14
	// Line 3522, Address: 0x118eb4, Func Offset: 0x54
	// Line 3523, Address: 0x118ec8, Func Offset: 0x68
	// Line 3524, Address: 0x118edc, Func Offset: 0x7c
	// Line 3525, Address: 0x118eec, Func Offset: 0x8c
	// Line 3528, Address: 0x118efc, Func Offset: 0x9c
	// Line 3530, Address: 0x118f04, Func Offset: 0xa4
	// Line 3531, Address: 0x118f18, Func Offset: 0xb8
	// Line 3532, Address: 0x118f2c, Func Offset: 0xcc
	// Line 3533, Address: 0x118f3c, Func Offset: 0xdc
	// Line 3534, Address: 0x118f4c, Func Offset: 0xec
	// Line 3537, Address: 0x118f5c, Func Offset: 0xfc
	// Line 3539, Address: 0x118f64, Func Offset: 0x104
	// Line 3540, Address: 0x118f78, Func Offset: 0x118
	// Line 3542, Address: 0x118fa0, Func Offset: 0x140
	// Line 3543, Address: 0x118fb0, Func Offset: 0x150
	// Line 3545, Address: 0x118fc0, Func Offset: 0x160
	// Line 3549, Address: 0x118fc8, Func Offset: 0x168
	// Line 3550, Address: 0x118fdc, Func Offset: 0x17c
	// Line 3551, Address: 0x118ff0, Func Offset: 0x190
	// Line 3552, Address: 0x119000, Func Offset: 0x1a0
	// Line 3555, Address: 0x119010, Func Offset: 0x1b0
	// Line 3556, Address: 0x119020, Func Offset: 0x1c0
	// Line 3557, Address: 0x119030, Func Offset: 0x1d0
	// Line 3558, Address: 0x119040, Func Offset: 0x1e0
	// Line 3559, Address: 0x119050, Func Offset: 0x1f0
	// Line 3560, Address: 0x119060, Func Offset: 0x200
	// Line 3561, Address: 0x119070, Func Offset: 0x210
	// Line 3562, Address: 0x119080, Func Offset: 0x220
	// Line 3563, Address: 0x119090, Func Offset: 0x230
	// Line 3578, Address: 0x1190a0, Func Offset: 0x240
	// Line 3584, Address: 0x1190ec, Func Offset: 0x28c
	// Line 3585, Address: 0x1190f4, Func Offset: 0x294
	// Line 3587, Address: 0x1190fc, Func Offset: 0x29c
	// Line 3652, Address: 0x119100, Func Offset: 0x2a0
	// Func End, Address: 0x119114, Func Offset: 0x2b4
}

// 
// Start address: 0x119120
void SubCharacter::PlayerUpdatePosition2D()
{
	float cos_z;
	float cos_x;
	void(*upper_func)(SubCharacter*);
	void(*lower_func)(SubCharacter*);
	// Line 3656, Address: 0x119120, Func Offset: 0
	// Line 3705, Address: 0x119134, Func Offset: 0x14
	// Line 3706, Address: 0x119138, Func Offset: 0x18
	// Line 3709, Address: 0x11913c, Func Offset: 0x1c
	// Line 3711, Address: 0x11915c, Func Offset: 0x3c
	// Line 3714, Address: 0x119168, Func Offset: 0x48
	// Line 3716, Address: 0x119188, Func Offset: 0x68
	// Line 3731, Address: 0x119194, Func Offset: 0x74
	// Line 3739, Address: 0x1191c0, Func Offset: 0xa0
	// Line 3741, Address: 0x1192dc, Func Offset: 0x1bc
	// Line 3743, Address: 0x1193f8, Func Offset: 0x2d8
	// Line 3745, Address: 0x119400, Func Offset: 0x2e0
	// Line 3747, Address: 0x119410, Func Offset: 0x2f0
	// Line 3749, Address: 0x1194f0, Func Offset: 0x3d0
	// Line 3751, Address: 0x1195d0, Func Offset: 0x4b0
	// Line 3755, Address: 0x1195d8, Func Offset: 0x4b8
	// Line 3758, Address: 0x1195e4, Func Offset: 0x4c4
	// Line 3760, Address: 0x1196c4, Func Offset: 0x5a4
	// Line 3773, Address: 0x1197a4, Func Offset: 0x684
	// Line 3780, Address: 0x1197b4, Func Offset: 0x694
	// Line 3781, Address: 0x1197c8, Func Offset: 0x6a8
	// Line 3783, Address: 0x1197dc, Func Offset: 0x6bc
	// Line 3784, Address: 0x1197fc, Func Offset: 0x6dc
	// Line 3788, Address: 0x11981c, Func Offset: 0x6fc
	// Line 3789, Address: 0x11982c, Func Offset: 0x70c
	// Line 3790, Address: 0x11983c, Func Offset: 0x71c
	// Line 3793, Address: 0x11984c, Func Offset: 0x72c
	// Line 3794, Address: 0x119868, Func Offset: 0x748
	// Line 3795, Address: 0x119884, Func Offset: 0x764
	// Line 3828, Address: 0x1198a0, Func Offset: 0x780
	// Func End, Address: 0x1198b8, Func Offset: 0x798
}

// 
// Start address: 0x1198c0
void SubCharacter::PlayerCheckAttack2D()
{
	PAD_INFO* pad;
	shPlayerWork* w;
	_AnimeInfo* a_info;
	// Line 3836, Address: 0x1198c0, Func Offset: 0
	// Line 3837, Address: 0x1198dc, Func Offset: 0x1c
	// Line 3838, Address: 0x1198f0, Func Offset: 0x30
	// Line 3839, Address: 0x1198fc, Func Offset: 0x3c
	// Line 3843, Address: 0x119904, Func Offset: 0x44
	// Line 3845, Address: 0x119938, Func Offset: 0x78
	// Line 3846, Address: 0x11994c, Func Offset: 0x8c
	// Line 3851, Address: 0x119954, Func Offset: 0x94
	// Line 3855, Address: 0x119988, Func Offset: 0xc8
	// Line 3856, Address: 0x119998, Func Offset: 0xd8
	// Line 3857, Address: 0x1199ac, Func Offset: 0xec
	// Line 3858, Address: 0x1199b4, Func Offset: 0xf4
	// Line 3863, Address: 0x1199c8, Func Offset: 0x108
	// Line 3864, Address: 0x1199dc, Func Offset: 0x11c
	// Line 3865, Address: 0x1199e8, Func Offset: 0x128
	// Line 3866, Address: 0x1199f0, Func Offset: 0x130
	// Line 3869, Address: 0x119a2c, Func Offset: 0x16c
	// Line 3873, Address: 0x119a38, Func Offset: 0x178
	// Line 3874, Address: 0x119a4c, Func Offset: 0x18c
	// Line 3875, Address: 0x119a5c, Func Offset: 0x19c
	// Line 3876, Address: 0x119a6c, Func Offset: 0x1ac
	// Line 3878, Address: 0x119a7c, Func Offset: 0x1bc
	// Line 3879, Address: 0x119a8c, Func Offset: 0x1cc
	// Line 3880, Address: 0x119a9c, Func Offset: 0x1dc
	// Line 3883, Address: 0x119ab0, Func Offset: 0x1f0
	// Line 3885, Address: 0x119ab4, Func Offset: 0x1f4
	// Line 3886, Address: 0x119abc, Func Offset: 0x1fc
	// Line 3888, Address: 0x119ac0, Func Offset: 0x200
	// Line 3890, Address: 0x119ac8, Func Offset: 0x208
	// Line 3892, Address: 0x119adc, Func Offset: 0x21c
	// Line 3902, Address: 0x119ae8, Func Offset: 0x228
	// Line 3904, Address: 0x119af4, Func Offset: 0x234
	// Line 3908, Address: 0x119b24, Func Offset: 0x264
	// Line 3913, Address: 0x119b3c, Func Offset: 0x27c
	// Line 3914, Address: 0x119b40, Func Offset: 0x280
	// Line 3915, Address: 0x119b48, Func Offset: 0x288
	// Line 3918, Address: 0x119b50, Func Offset: 0x290
	// Line 3920, Address: 0x119b7c, Func Offset: 0x2bc
	// Line 3922, Address: 0x119b84, Func Offset: 0x2c4
	// Line 3923, Address: 0x119b8c, Func Offset: 0x2cc
	// Line 3924, Address: 0x119b94, Func Offset: 0x2d4
	// Line 3925, Address: 0x119b9c, Func Offset: 0x2dc
	// Line 3926, Address: 0x119ba4, Func Offset: 0x2e4
	// Line 3931, Address: 0x119bac, Func Offset: 0x2ec
	// Line 3932, Address: 0x119bb4, Func Offset: 0x2f4
	// Line 3933, Address: 0x119bc0, Func Offset: 0x300
	// Line 3937, Address: 0x119bc8, Func Offset: 0x308
	// Line 3945, Address: 0x119c0c, Func Offset: 0x34c
	// Line 3946, Address: 0x119c1c, Func Offset: 0x35c
	// Line 3951, Address: 0x119c24, Func Offset: 0x364
	// Line 3954, Address: 0x119c34, Func Offset: 0x374
	// Line 3958, Address: 0x119c3c, Func Offset: 0x37c
	// Line 3963, Address: 0x119c54, Func Offset: 0x394
	// Line 3964, Address: 0x119c5c, Func Offset: 0x39c
	// Line 3965, Address: 0x119c64, Func Offset: 0x3a4
	// Line 3966, Address: 0x119c6c, Func Offset: 0x3ac
	// Line 3972, Address: 0x119c74, Func Offset: 0x3b4
	// Line 3978, Address: 0x119cb4, Func Offset: 0x3f4
	// Line 3979, Address: 0x119cc4, Func Offset: 0x404
	// Line 3980, Address: 0x119cd4, Func Offset: 0x414
	// Line 3981, Address: 0x119ce4, Func Offset: 0x424
	// Line 3982, Address: 0x119cf4, Func Offset: 0x434
	// Line 3983, Address: 0x119d04, Func Offset: 0x444
	// Line 3985, Address: 0x119d0c, Func Offset: 0x44c
	// Line 3989, Address: 0x119d1c, Func Offset: 0x45c
	// Line 3992, Address: 0x119d24, Func Offset: 0x464
	// Line 3997, Address: 0x119d3c, Func Offset: 0x47c
	// Line 3998, Address: 0x119d44, Func Offset: 0x484
	// Line 3999, Address: 0x119d4c, Func Offset: 0x48c
	// Line 4000, Address: 0x119d54, Func Offset: 0x494
	// Line 4003, Address: 0x119d5c, Func Offset: 0x49c
	// Line 4005, Address: 0x119d6c, Func Offset: 0x4ac
	// Line 4008, Address: 0x119d74, Func Offset: 0x4b4
	// Line 4013, Address: 0x119d8c, Func Offset: 0x4cc
	// Line 4014, Address: 0x119d98, Func Offset: 0x4d8
	// Line 4015, Address: 0x119da0, Func Offset: 0x4e0
	// Line 4016, Address: 0x119da8, Func Offset: 0x4e8
	// Line 4018, Address: 0x119db0, Func Offset: 0x4f0
	// Line 4019, Address: 0x119db8, Func Offset: 0x4f8
	// Line 4020, Address: 0x119dc0, Func Offset: 0x500
	// Line 4021, Address: 0x119dcc, Func Offset: 0x50c
	// Line 4022, Address: 0x119dd4, Func Offset: 0x514
	// Line 4023, Address: 0x119ddc, Func Offset: 0x51c
	// Line 4030, Address: 0x119de4, Func Offset: 0x524
	// Line 4033, Address: 0x119dec, Func Offset: 0x52c
	// Line 4034, Address: 0x119df8, Func Offset: 0x538
	// Line 4035, Address: 0x119e00, Func Offset: 0x540
	// Line 4036, Address: 0x119e08, Func Offset: 0x548
	// Line 4050, Address: 0x119e10, Func Offset: 0x550
	// Line 4051, Address: 0x119e24, Func Offset: 0x564
	// Line 4052, Address: 0x119e2c, Func Offset: 0x56c
	// Line 4054, Address: 0x119e34, Func Offset: 0x574
	// Line 4055, Address: 0x119e48, Func Offset: 0x588
	// Line 4056, Address: 0x119e50, Func Offset: 0x590
	// Line 4062, Address: 0x119e58, Func Offset: 0x598
	// Line 4075, Address: 0x119e8c, Func Offset: 0x5cc
	// Line 4081, Address: 0x119ea0, Func Offset: 0x5e0
	// Line 4082, Address: 0x119eb0, Func Offset: 0x5f0
	// Line 4083, Address: 0x119ec0, Func Offset: 0x600
	// Line 4084, Address: 0x119ed0, Func Offset: 0x610
	// Line 4085, Address: 0x119ee0, Func Offset: 0x620
	// Line 4087, Address: 0x119ef0, Func Offset: 0x630
	// Line 4090, Address: 0x119ef8, Func Offset: 0x638
	// Line 4095, Address: 0x119f08, Func Offset: 0x648
	// Line 4097, Address: 0x119f10, Func Offset: 0x650
	// Line 4098, Address: 0x119f24, Func Offset: 0x664
	// Line 4099, Address: 0x119f2c, Func Offset: 0x66c
	// Line 4101, Address: 0x119f34, Func Offset: 0x674
	// Line 4102, Address: 0x119f48, Func Offset: 0x688
	// Line 4103, Address: 0x119f50, Func Offset: 0x690
	// Line 4105, Address: 0x119f58, Func Offset: 0x698
	// Line 4106, Address: 0x119f6c, Func Offset: 0x6ac
	// Line 4107, Address: 0x119f74, Func Offset: 0x6b4
	// Line 4111, Address: 0x119f7c, Func Offset: 0x6bc
	// Line 4116, Address: 0x119fbc, Func Offset: 0x6fc
	// Line 4117, Address: 0x119fd0, Func Offset: 0x710
	// Line 4118, Address: 0x119fe0, Func Offset: 0x720
	// Line 4119, Address: 0x119ff0, Func Offset: 0x730
	// Line 4120, Address: 0x11a000, Func Offset: 0x740
	// Line 4121, Address: 0x11a010, Func Offset: 0x750
	// Line 4123, Address: 0x11a020, Func Offset: 0x760
	// Line 4126, Address: 0x11a028, Func Offset: 0x768
	// Line 4130, Address: 0x11a03c, Func Offset: 0x77c
	// Line 4132, Address: 0x11a044, Func Offset: 0x784
	// Line 4133, Address: 0x11a058, Func Offset: 0x798
	// Line 4134, Address: 0x11a060, Func Offset: 0x7a0
	// Line 4136, Address: 0x11a068, Func Offset: 0x7a8
	// Line 4137, Address: 0x11a07c, Func Offset: 0x7bc
	// Line 4138, Address: 0x11a084, Func Offset: 0x7c4
	// Line 4142, Address: 0x11a08c, Func Offset: 0x7cc
	// Line 4148, Address: 0x11a0cc, Func Offset: 0x80c
	// Line 4149, Address: 0x11a0e0, Func Offset: 0x820
	// Line 4150, Address: 0x11a0f4, Func Offset: 0x834
	// Line 4151, Address: 0x11a104, Func Offset: 0x844
	// Line 4152, Address: 0x11a114, Func Offset: 0x854
	// Line 4153, Address: 0x11a128, Func Offset: 0x868
	// Line 4155, Address: 0x11a140, Func Offset: 0x880
	// Line 4158, Address: 0x11a148, Func Offset: 0x888
	// Line 4161, Address: 0x11a160, Func Offset: 0x8a0
	// Line 4163, Address: 0x11a168, Func Offset: 0x8a8
	// Line 4164, Address: 0x11a17c, Func Offset: 0x8bc
	// Line 4165, Address: 0x11a184, Func Offset: 0x8c4
	// Line 4167, Address: 0x11a18c, Func Offset: 0x8cc
	// Line 4168, Address: 0x11a1a0, Func Offset: 0x8e0
	// Line 4169, Address: 0x11a1a8, Func Offset: 0x8e8
	// Line 4172, Address: 0x11a1b0, Func Offset: 0x8f0
	// Line 4177, Address: 0x11a1c8, Func Offset: 0x908
	// Line 4179, Address: 0x11a1f0, Func Offset: 0x930
	// Line 4180, Address: 0x11a204, Func Offset: 0x944
	// Line 4184, Address: 0x11a21c, Func Offset: 0x95c
	// Line 4186, Address: 0x11a258, Func Offset: 0x998
	// Line 4190, Address: 0x11a25c, Func Offset: 0x99c
	// Func End, Address: 0x11a27c, Func Offset: 0x9bc
}

// 
// Start address: 0x11a280
void SubCharacter::PlayerCheckControl2D()
{
	// Line 4202, Address: 0x11a280, Func Offset: 0
	// Line 4203, Address: 0x11a28c, Func Offset: 0xc
	// Line 4204, Address: 0x11a298, Func Offset: 0x18
	// Line 4205, Address: 0x11a2a4, Func Offset: 0x24
	// Line 4206, Address: 0x11a2b0, Func Offset: 0x30
	// Line 4207, Address: 0x11a2bc, Func Offset: 0x3c
	// Line 4212, Address: 0x11a2c8, Func Offset: 0x48
	// Func End, Address: 0x11a2d8, Func Offset: 0x58
}

