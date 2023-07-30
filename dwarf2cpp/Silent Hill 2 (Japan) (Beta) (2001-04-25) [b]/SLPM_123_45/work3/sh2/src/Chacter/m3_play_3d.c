typedef struct SubCharacter;
typedef struct shPlayerWork;
typedef struct Playing_Info;
typedef struct PAD_INFO;
typedef struct _AnimeInfo;
typedef struct PAD_3D;
typedef struct SubObject;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct Pad_KeyConfig;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon0;
typedef struct shSkelton;
typedef struct _USXY;
typedef struct _SXY;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct shAnime3d;
typedef struct shClusterAnime;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shBattleInfo;
typedef struct SubCharacterDisp;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;
typedef struct PAD_2D;

typedef void(*type_5)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);
typedef void(*type_13)(SubCharacter*);
typedef void(*type_16)(SubCharacter*);
typedef void(*type_19)(SubCharacter*);
typedef void(*type_26)(SubCharacter*);
typedef void(*type_33)(SubCharacter*);
typedef void(*type_35)(SubCharacter*);

typedef unsigned char type_0[13];
typedef unsigned char type_1[2];
typedef unsigned char type_2[2];
typedef unsigned char type_3[34];
typedef float type_4[4][2];
typedef unsigned int type_7[32];
typedef float type_8[7];
typedef float type_9[4];
typedef float type_10[4][4];
typedef float type_11[7];
typedef unsigned char type_12[10];
typedef unsigned char type_14[2];
typedef float type_15[4];
typedef shAttackInfo type_17[46];
typedef unsigned char type_18[4];
typedef void(*type_20)(SubCharacter*)[32];
typedef void* type_21[3];
typedef unsigned int type_22[32];
typedef float type_23[7];
typedef float type_24[7];
typedef unsigned char type_25[10];
typedef void(*type_27)(SubCharacter*)[32];
typedef unsigned int type_28[9];
typedef float type_29[7];
typedef unsigned char type_30[4];
typedef unsigned char type_31[4];
typedef float type_32[4];
typedef PAD_INFO type_34[10];

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

	void PlayerUpdateStatus3D();
	void PlayerUpdateStatusLower3D();
	void PlayerUpdatePosition3D();
	void PlayerCheckAttack3D();
	void PlayerCheckControl3D();
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
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

struct _anon1
{
	float d[4][4];
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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
	_anon0 rot_neck;
	_anon0 rot_arms;
	_anon0 rot_body_neck;
	_anon0 rot_body;
	float scale;
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
shPlayerWork sh2jms;
int dt;
float dtf;
Playing_Info playing;
void(*func_list_lower)(SubCharacter*)[32];
void(*func_list_upper)(SubCharacter*)[32];
Pad_KeyConfig key_config;

int PlayerCheckLturn180();
int PlayerCheckRturn180();
int PlayerCheckTurn180();
void lower_stand_3d(SubCharacter* p);
void upper_stand_3d(SubCharacter* p);
void lower_relax_3d();
void upper_relax_3d();
void lower_alert_3d();
void upper_alert_3d();
void lower_tired_3d(SubCharacter* p);
void upper_tired_3d(SubCharacter* p);
void lower_ready_3d(SubCharacter* p);
void upper_ready_3d();
void lower_readyoff_3d();
void upper_readyoff_3d();
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
void lower_jump_3d(SubCharacter* p);
void upper_jump_3d();
void lower_step_3d();
void upper_step_3d();
void lower_lstep_3d();
void upper_lstep_3d();
void lower_rstep_3d();
void upper_rstep_3d();
void lower_hold_3d(SubCharacter* p);
void upper_hold_3d(SubCharacter* p);
void lower_release_3d(SubCharacter* p);
void upper_release_3d();
void lower_attack_3d(SubCharacter* p);
void upper_attack_3d(SubCharacter* p);
void lower_kick_3d(SubCharacter* p);
void upper_kick_3d(SubCharacter* p);
void lower_fall_3d(SubCharacter* p);
void upper_fall_3d();
void lower_damage_3d(SubCharacter* p);
void upper_damage_3d();
void lower_to_stand_3d();
void upper_to_stand_3d();
void lower_wall_f_3d(SubCharacter* p);
void upper_wall_f_3d();
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
// Start address: 0x11a2e0
int PlayerCheckLturn180()
{
	PAD_3D* p3d;
	PAD_INFO* pad;
	// Line 77, Address: 0x11a2e0, Func Offset: 0
	// Line 78, Address: 0x11a2ec, Func Offset: 0xc
	// Line 79, Address: 0x11a2f4, Func Offset: 0x14
	// Line 81, Address: 0x11a2fc, Func Offset: 0x1c
	// Line 82, Address: 0x11a308, Func Offset: 0x28
	// Line 83, Address: 0x11a32c, Func Offset: 0x4c
	// Line 85, Address: 0x11a338, Func Offset: 0x58
	// Line 86, Address: 0x11a360, Func Offset: 0x80
	// Line 88, Address: 0x11a36c, Func Offset: 0x8c
	// Line 89, Address: 0x11a370, Func Offset: 0x90
	// Func End, Address: 0x11a384, Func Offset: 0xa4
}

// 
// Start address: 0x11a390
int PlayerCheckRturn180()
{
	PAD_3D* p3d;
	PAD_INFO* pad;
	// Line 97, Address: 0x11a390, Func Offset: 0
	// Line 98, Address: 0x11a39c, Func Offset: 0xc
	// Line 99, Address: 0x11a3a4, Func Offset: 0x14
	// Line 101, Address: 0x11a3ac, Func Offset: 0x1c
	// Line 102, Address: 0x11a3b8, Func Offset: 0x28
	// Line 103, Address: 0x11a3dc, Func Offset: 0x4c
	// Line 105, Address: 0x11a3e8, Func Offset: 0x58
	// Line 106, Address: 0x11a410, Func Offset: 0x80
	// Line 108, Address: 0x11a41c, Func Offset: 0x8c
	// Line 109, Address: 0x11a420, Func Offset: 0x90
	// Func End, Address: 0x11a434, Func Offset: 0xa4
}

// 
// Start address: 0x11a440
int PlayerCheckTurn180()
{
	int r;
	int l;
	PAD_3D* p3d;
	// Line 117, Address: 0x11a440, Func Offset: 0
	// Line 118, Address: 0x11a454, Func Offset: 0x14
	// Line 121, Address: 0x11a45c, Func Offset: 0x1c
	// Line 122, Address: 0x11a468, Func Offset: 0x28
	// Line 124, Address: 0x11a474, Func Offset: 0x34
	// Line 126, Address: 0x11a490, Func Offset: 0x50
	// Line 127, Address: 0x11a4bc, Func Offset: 0x7c
	// Line 128, Address: 0x11a4c8, Func Offset: 0x88
	// Line 130, Address: 0x11a4d4, Func Offset: 0x94
	// Line 131, Address: 0x11a4ec, Func Offset: 0xac
	// Line 134, Address: 0x11a4f0, Func Offset: 0xb0
	// Func End, Address: 0x11a50c, Func Offset: 0xcc
}

// 
// Start address: 0x11a510
void lower_stand_3d(SubCharacter* p)
{
	// Line 141, Address: 0x11a510, Func Offset: 0
	// Line 143, Address: 0x11a51c, Func Offset: 0xc
	// Line 146, Address: 0x11a530, Func Offset: 0x20
	// Line 149, Address: 0x11a54c, Func Offset: 0x3c
	// Line 152, Address: 0x11a558, Func Offset: 0x48
	// Line 153, Address: 0x11a580, Func Offset: 0x70
	// Line 155, Address: 0x11a594, Func Offset: 0x84
	// Line 156, Address: 0x11a5d0, Func Offset: 0xc0
	// Line 159, Address: 0x11a5e4, Func Offset: 0xd4
	// Func End, Address: 0x11a5f4, Func Offset: 0xe4
}

// 
// Start address: 0x11a600
void upper_stand_3d(SubCharacter* p)
{
	// Line 161, Address: 0x11a600, Func Offset: 0
	// Line 163, Address: 0x11a60c, Func Offset: 0xc
	// Line 164, Address: 0x11a634, Func Offset: 0x34
	// Line 166, Address: 0x11a648, Func Offset: 0x48
	// Line 167, Address: 0x11a684, Func Offset: 0x84
	// Line 169, Address: 0x11a698, Func Offset: 0x98
	// Func End, Address: 0x11a6a8, Func Offset: 0xa8
}

// 
// Start address: 0x11a6b0
void lower_relax_3d()
{
	// Line 172, Address: 0x11a6b0, Func Offset: 0
	// Line 174, Address: 0x11a6b8, Func Offset: 0x8
	// Line 175, Address: 0x11a6cc, Func Offset: 0x1c
	// Line 178, Address: 0x11a6e0, Func Offset: 0x30
	// Func End, Address: 0x11a6f0, Func Offset: 0x40
}

// 
// Start address: 0x11a6f0
void upper_relax_3d()
{
	// Line 180, Address: 0x11a6f0, Func Offset: 0
	// Line 182, Address: 0x11a6f8, Func Offset: 0x8
	// Line 183, Address: 0x11a70c, Func Offset: 0x1c
	// Line 186, Address: 0x11a720, Func Offset: 0x30
	// Func End, Address: 0x11a730, Func Offset: 0x40
}

// 
// Start address: 0x11a730
void lower_alert_3d()
{
	// Line 189, Address: 0x11a730, Func Offset: 0
	// Line 191, Address: 0x11a738, Func Offset: 0x8
	// Line 192, Address: 0x11a74c, Func Offset: 0x1c
	// Line 195, Address: 0x11a760, Func Offset: 0x30
	// Func End, Address: 0x11a770, Func Offset: 0x40
}

// 
// Start address: 0x11a770
void upper_alert_3d()
{
	// Line 197, Address: 0x11a770, Func Offset: 0
	// Line 199, Address: 0x11a778, Func Offset: 0x8
	// Line 200, Address: 0x11a78c, Func Offset: 0x1c
	// Line 203, Address: 0x11a7a0, Func Offset: 0x30
	// Func End, Address: 0x11a7b0, Func Offset: 0x40
}

// 
// Start address: 0x11a7b0
void lower_tired_3d(SubCharacter* p)
{
	SubCharacterDisp* p_d;
	_AnimeInfo* a_info;
	// Line 206, Address: 0x11a7b0, Func Offset: 0
	// Line 208, Address: 0x11a7c4, Func Offset: 0x14
	// Line 211, Address: 0x11a7c8, Func Offset: 0x18
	// Line 214, Address: 0x11a7e4, Func Offset: 0x34
	// Line 220, Address: 0x11a7f0, Func Offset: 0x40
	// Line 221, Address: 0x11a804, Func Offset: 0x54
	// Line 222, Address: 0x11a840, Func Offset: 0x90
	// Line 223, Address: 0x11a854, Func Offset: 0xa4
	// Line 227, Address: 0x11a868, Func Offset: 0xb8
	// Line 228, Address: 0x11a8bc, Func Offset: 0x10c
	// Line 231, Address: 0x11a8d0, Func Offset: 0x120
	// Func End, Address: 0x11a8e8, Func Offset: 0x138
}

// 
// Start address: 0x11a8f0
void upper_tired_3d(SubCharacter* p)
{
	_AnimeInfo* a_info;
	// Line 233, Address: 0x11a8f0, Func Offset: 0
	// Line 241, Address: 0x11a900, Func Offset: 0x10
	// Line 242, Address: 0x11a914, Func Offset: 0x24
	// Line 243, Address: 0x11a950, Func Offset: 0x60
	// Line 244, Address: 0x11a964, Func Offset: 0x74
	// Line 248, Address: 0x11a978, Func Offset: 0x88
	// Line 249, Address: 0x11a9cc, Func Offset: 0xdc
	// Line 252, Address: 0x11a9e0, Func Offset: 0xf0
	// Func End, Address: 0x11a9f4, Func Offset: 0x104
}

// 
// Start address: 0x11aa00
void lower_ready_3d(SubCharacter* p)
{
	// Line 255, Address: 0x11aa00, Func Offset: 0
	// Line 257, Address: 0x11aa0c, Func Offset: 0xc
	// Line 260, Address: 0x11aa18, Func Offset: 0x18
	// Line 261, Address: 0x11aa2c, Func Offset: 0x2c
	// Line 262, Address: 0x11aa40, Func Offset: 0x40
	// Line 264, Address: 0x11aa7c, Func Offset: 0x7c
	// Line 265, Address: 0x11aa94, Func Offset: 0x94
	// Line 266, Address: 0x11aaa8, Func Offset: 0xa8
	// Line 267, Address: 0x11aab0, Func Offset: 0xb0
	// Line 272, Address: 0x11aac4, Func Offset: 0xc4
	// Line 273, Address: 0x11aacc, Func Offset: 0xcc
	// Line 276, Address: 0x11aae0, Func Offset: 0xe0
	// Func End, Address: 0x11aaf0, Func Offset: 0xf0
}

// 
// Start address: 0x11aaf0
void upper_ready_3d()
{
	// Line 278, Address: 0x11aaf0, Func Offset: 0
	// Line 280, Address: 0x11aaf8, Func Offset: 0x8
	// Line 281, Address: 0x11ab0c, Func Offset: 0x1c
	// Line 282, Address: 0x11ab20, Func Offset: 0x30
	// Line 284, Address: 0x11ab5c, Func Offset: 0x6c
	// Line 285, Address: 0x11ab74, Func Offset: 0x84
	// Line 286, Address: 0x11ab88, Func Offset: 0x98
	// Line 287, Address: 0x11ab90, Func Offset: 0xa0
	// Line 292, Address: 0x11aba4, Func Offset: 0xb4
	// Line 293, Address: 0x11abac, Func Offset: 0xbc
	// Line 297, Address: 0x11abc0, Func Offset: 0xd0
	// Func End, Address: 0x11abd0, Func Offset: 0xe0
}

// 
// Start address: 0x11abd0
void lower_readyoff_3d()
{
	// Line 300, Address: 0x11abd0, Func Offset: 0
	// Line 302, Address: 0x11abd8, Func Offset: 0x8
	// Line 303, Address: 0x11abec, Func Offset: 0x1c
	// Line 305, Address: 0x11ac00, Func Offset: 0x30
	// Func End, Address: 0x11ac10, Func Offset: 0x40
}

// 
// Start address: 0x11ac10
void upper_readyoff_3d()
{
	// Line 307, Address: 0x11ac10, Func Offset: 0
	// Line 309, Address: 0x11ac18, Func Offset: 0x8
	// Line 310, Address: 0x11ac2c, Func Offset: 0x1c
	// Line 312, Address: 0x11ac40, Func Offset: 0x30
	// Func End, Address: 0x11ac50, Func Offset: 0x40
}

// 
// Start address: 0x11ac50
void lower_lround_3d(SubCharacter* p)
{
	float spd;
	// Line 315, Address: 0x11ac50, Func Offset: 0
	// Line 319, Address: 0x11ac5c, Func Offset: 0xc
	// Line 321, Address: 0x11ac84, Func Offset: 0x34
	// Line 322, Address: 0x11acac, Func Offset: 0x5c
	// Line 324, Address: 0x11acb4, Func Offset: 0x64
	// Line 327, Address: 0x11acc8, Func Offset: 0x78
	// Line 328, Address: 0x11acd8, Func Offset: 0x88
	// Line 331, Address: 0x11acec, Func Offset: 0x9c
	// Line 334, Address: 0x11acf8, Func Offset: 0xa8
	// Line 336, Address: 0x11ae1c, Func Offset: 0x1cc
	// Func End, Address: 0x11ae2c, Func Offset: 0x1dc
}

// 
// Start address: 0x11ae30
void upper_lround_3d()
{
	// Line 338, Address: 0x11ae30, Func Offset: 0
	// Line 339, Address: 0x11ae34, Func Offset: 0x4
	// Func End, Address: 0x11ae40, Func Offset: 0x10
}

// 
// Start address: 0x11ae40
void lower_rround_3d(SubCharacter* p)
{
	float spd;
	// Line 342, Address: 0x11ae40, Func Offset: 0
	// Line 346, Address: 0x11ae4c, Func Offset: 0xc
	// Line 348, Address: 0x11ae74, Func Offset: 0x34
	// Line 349, Address: 0x11ae9c, Func Offset: 0x5c
	// Line 351, Address: 0x11aea4, Func Offset: 0x64
	// Line 354, Address: 0x11aeb8, Func Offset: 0x78
	// Line 355, Address: 0x11aec8, Func Offset: 0x88
	// Line 358, Address: 0x11aedc, Func Offset: 0x9c
	// Line 361, Address: 0x11aee8, Func Offset: 0xa8
	// Line 363, Address: 0x11b00c, Func Offset: 0x1cc
	// Func End, Address: 0x11b01c, Func Offset: 0x1dc
}

// 
// Start address: 0x11b020
void upper_rround_3d()
{
	// Line 365, Address: 0x11b020, Func Offset: 0
	// Line 366, Address: 0x11b024, Func Offset: 0x4
	// Func End, Address: 0x11b030, Func Offset: 0x10
}

// 
// Start address: 0x11b030
void lower_walk_3d(SubCharacter* p)
{
	float rot_tmp;
	char lstickY_tmp;
	// Line 369, Address: 0x11b030, Func Offset: 0
	// Line 374, Address: 0x11b044, Func Offset: 0x14
	// Line 375, Address: 0x11b05c, Func Offset: 0x2c
	// Line 378, Address: 0x11b06c, Func Offset: 0x3c
	// Line 380, Address: 0x11b094, Func Offset: 0x64
	// Line 382, Address: 0x11b0c8, Func Offset: 0x98
	// Line 384, Address: 0x11b0e8, Func Offset: 0xb8
	// Line 385, Address: 0x11b118, Func Offset: 0xe8
	// Line 387, Address: 0x11b140, Func Offset: 0x110
	// Line 388, Address: 0x11b160, Func Offset: 0x130
	// Line 389, Address: 0x11b198, Func Offset: 0x168
	// Line 391, Address: 0x11b1a0, Func Offset: 0x170
	// Line 392, Address: 0x11b1c0, Func Offset: 0x190
	// Line 394, Address: 0x11b1fc, Func Offset: 0x1cc
	// Line 396, Address: 0x11b204, Func Offset: 0x1d4
	// Line 397, Address: 0x11b26c, Func Offset: 0x23c
	// Line 401, Address: 0x11b29c, Func Offset: 0x26c
	// Line 406, Address: 0x11b2d0, Func Offset: 0x2a0
	// Line 407, Address: 0x11b2f0, Func Offset: 0x2c0
	// Line 408, Address: 0x11b304, Func Offset: 0x2d4
	// Line 410, Address: 0x11b318, Func Offset: 0x2e8
	// Line 411, Address: 0x11b354, Func Offset: 0x324
	// Line 412, Address: 0x11b35c, Func Offset: 0x32c
	// Line 417, Address: 0x11b364, Func Offset: 0x334
	// Line 420, Address: 0x11b380, Func Offset: 0x350
	// Line 428, Address: 0x11b3b8, Func Offset: 0x388
	// Line 429, Address: 0x11b3d4, Func Offset: 0x3a4
	// Line 430, Address: 0x11b3f4, Func Offset: 0x3c4
	// Line 431, Address: 0x11b418, Func Offset: 0x3e8
	// Line 433, Address: 0x11b438, Func Offset: 0x408
	// Line 434, Address: 0x11b4a8, Func Offset: 0x478
	// Line 436, Address: 0x11b4b4, Func Offset: 0x484
	// Line 438, Address: 0x11b4bc, Func Offset: 0x48c
	// Line 455, Address: 0x11b4c8, Func Offset: 0x498
	// Line 457, Address: 0x11b4d8, Func Offset: 0x4a8
	// Line 459, Address: 0x11b500, Func Offset: 0x4d0
	// Line 460, Address: 0x11b52c, Func Offset: 0x4fc
	// Line 462, Address: 0x11b534, Func Offset: 0x504
	// Line 467, Address: 0x11b58c, Func Offset: 0x55c
	// Line 468, Address: 0x11b5a4, Func Offset: 0x574
	// Line 471, Address: 0x11b5b8, Func Offset: 0x588
	// Line 476, Address: 0x11b65c, Func Offset: 0x62c
	// Line 477, Address: 0x11b664, Func Offset: 0x634
	// Func End, Address: 0x11b67c, Func Offset: 0x64c
}

// 
// Start address: 0x11b680
void upper_walk_3d(SubCharacter* p)
{
	// Line 479, Address: 0x11b680, Func Offset: 0
	// Line 481, Address: 0x11b68c, Func Offset: 0xc
	// Line 486, Address: 0x11b6ac, Func Offset: 0x2c
	// Line 489, Address: 0x11b6f0, Func Offset: 0x70
	// Func End, Address: 0x11b700, Func Offset: 0x80
}

// 
// Start address: 0x11b700
void lower_back_3d(SubCharacter* p)
{
	int turn_way;
	float rot_tmp;
	char lstickY_tmp;
	// Line 492, Address: 0x11b700, Func Offset: 0
	// Line 497, Address: 0x11b714, Func Offset: 0x14
	// Line 500, Address: 0x11b728, Func Offset: 0x28
	// Line 501, Address: 0x11b740, Func Offset: 0x40
	// Line 504, Address: 0x11b750, Func Offset: 0x50
	// Line 508, Address: 0x11b778, Func Offset: 0x78
	// Line 509, Address: 0x11b7ac, Func Offset: 0xac
	// Line 511, Address: 0x11b7cc, Func Offset: 0xcc
	// Line 512, Address: 0x11b7fc, Func Offset: 0xfc
	// Line 513, Address: 0x11b818, Func Offset: 0x118
	// Line 515, Address: 0x11b824, Func Offset: 0x124
	// Line 516, Address: 0x11b82c, Func Offset: 0x12c
	// Line 518, Address: 0x11b850, Func Offset: 0x150
	// Line 519, Address: 0x11b870, Func Offset: 0x170
	// Line 520, Address: 0x11b8b0, Func Offset: 0x1b0
	// Line 522, Address: 0x11b8b8, Func Offset: 0x1b8
	// Line 523, Address: 0x11b8d8, Func Offset: 0x1d8
	// Line 528, Address: 0x11b91c, Func Offset: 0x21c
	// Line 530, Address: 0x11b924, Func Offset: 0x224
	// Line 531, Address: 0x11b988, Func Offset: 0x288
	// Line 534, Address: 0x11b9b4, Func Offset: 0x2b4
	// Line 541, Address: 0x11b9fc, Func Offset: 0x2fc
	// Line 542, Address: 0x11ba0c, Func Offset: 0x30c
	// Line 543, Address: 0x11ba20, Func Offset: 0x320
	// Line 545, Address: 0x11ba34, Func Offset: 0x334
	// Line 546, Address: 0x11ba78, Func Offset: 0x378
	// Line 547, Address: 0x11ba80, Func Offset: 0x380
	// Line 553, Address: 0x11ba88, Func Offset: 0x388
	// Line 557, Address: 0x11ba98, Func Offset: 0x398
	// Line 558, Address: 0x11baac, Func Offset: 0x3ac
	// Line 559, Address: 0x11babc, Func Offset: 0x3bc
	// Line 560, Address: 0x11bac4, Func Offset: 0x3c4
	// Line 563, Address: 0x11bad8, Func Offset: 0x3d8
	// Line 565, Address: 0x11bb00, Func Offset: 0x400
	// Line 566, Address: 0x11bb28, Func Offset: 0x428
	// Line 568, Address: 0x11bb30, Func Offset: 0x430
	// Line 573, Address: 0x11bb84, Func Offset: 0x484
	// Line 574, Address: 0x11bb9c, Func Offset: 0x49c
	// Line 577, Address: 0x11bbb0, Func Offset: 0x4b0
	// Line 582, Address: 0x11bc54, Func Offset: 0x554
	// Line 585, Address: 0x11bc5c, Func Offset: 0x55c
	// Func End, Address: 0x11bc74, Func Offset: 0x574
}

// 
// Start address: 0x11bc80
void upper_back_3d(SubCharacter* p)
{
	// Line 587, Address: 0x11bc80, Func Offset: 0
	// Line 588, Address: 0x11bc8c, Func Offset: 0xc
	// Line 590, Address: 0x11bca0, Func Offset: 0x20
	// Line 594, Address: 0x11bcc8, Func Offset: 0x48
	// Line 595, Address: 0x11bcd8, Func Offset: 0x58
	// Line 597, Address: 0x11bcec, Func Offset: 0x6c
	// Line 604, Address: 0x11bcf4, Func Offset: 0x74
	// Line 608, Address: 0x11bd50, Func Offset: 0xd0
	// Func End, Address: 0x11bd60, Func Offset: 0xe0
}

// 
// Start address: 0x11bd60
void lower_lswalk_3d(SubCharacter* p)
{
	// Line 611, Address: 0x11bd60, Func Offset: 0
	// Line 613, Address: 0x11bd70, Func Offset: 0x10
	// Line 615, Address: 0x11bda4, Func Offset: 0x44
	// Line 617, Address: 0x11bdc8, Func Offset: 0x68
	// Line 623, Address: 0x11bdf8, Func Offset: 0x98
	// Line 625, Address: 0x11be24, Func Offset: 0xc4
	// Line 626, Address: 0x11be48, Func Offset: 0xe8
	// Line 627, Address: 0x11be88, Func Offset: 0x128
	// Line 629, Address: 0x11be90, Func Offset: 0x130
	// Line 630, Address: 0x11beb4, Func Offset: 0x154
	// Line 634, Address: 0x11bef8, Func Offset: 0x198
	// Line 635, Address: 0x11bf1c, Func Offset: 0x1bc
	// Line 636, Address: 0x11bf30, Func Offset: 0x1d0
	// Line 638, Address: 0x11bf44, Func Offset: 0x1e4
	// Line 639, Address: 0x11bf88, Func Offset: 0x228
	// Line 640, Address: 0x11bf90, Func Offset: 0x230
	// Line 645, Address: 0x11bf98, Func Offset: 0x238
	// Line 647, Address: 0x11bfbc, Func Offset: 0x25c
	// Line 653, Address: 0x11c000, Func Offset: 0x2a0
	// Line 654, Address: 0x11c020, Func Offset: 0x2c0
	// Line 655, Address: 0x11c044, Func Offset: 0x2e4
	// Line 657, Address: 0x11c058, Func Offset: 0x2f8
	// Line 659, Address: 0x11c060, Func Offset: 0x300
	// Line 672, Address: 0x11c074, Func Offset: 0x314
	// Line 675, Address: 0x11c084, Func Offset: 0x324
	// Line 677, Address: 0x11c0ac, Func Offset: 0x34c
	// Line 679, Address: 0x11c22c, Func Offset: 0x4cc
	// Line 681, Address: 0x11c234, Func Offset: 0x4d4
	// Line 696, Address: 0x11c490, Func Offset: 0x730
	// Line 697, Address: 0x11c498, Func Offset: 0x738
	// Func End, Address: 0x11c4ac, Func Offset: 0x74c
}

// 
// Start address: 0x11c4b0
void upper_lswalk_3d()
{
	// Line 699, Address: 0x11c4b0, Func Offset: 0
	// Line 700, Address: 0x11c4b4, Func Offset: 0x4
	// Func End, Address: 0x11c4c0, Func Offset: 0x10
}

// 
// Start address: 0x11c4c0
void lower_rswalk_3d(SubCharacter* p)
{
	// Line 703, Address: 0x11c4c0, Func Offset: 0
	// Line 705, Address: 0x11c4d0, Func Offset: 0x10
	// Line 707, Address: 0x11c504, Func Offset: 0x44
	// Line 709, Address: 0x11c528, Func Offset: 0x68
	// Line 715, Address: 0x11c558, Func Offset: 0x98
	// Line 717, Address: 0x11c584, Func Offset: 0xc4
	// Line 718, Address: 0x11c5a8, Func Offset: 0xe8
	// Line 719, Address: 0x11c5e8, Func Offset: 0x128
	// Line 721, Address: 0x11c5f0, Func Offset: 0x130
	// Line 722, Address: 0x11c614, Func Offset: 0x154
	// Line 726, Address: 0x11c658, Func Offset: 0x198
	// Line 727, Address: 0x11c678, Func Offset: 0x1b8
	// Line 728, Address: 0x11c68c, Func Offset: 0x1cc
	// Line 730, Address: 0x11c6a0, Func Offset: 0x1e0
	// Line 731, Address: 0x11c6e4, Func Offset: 0x224
	// Line 732, Address: 0x11c6ec, Func Offset: 0x22c
	// Line 737, Address: 0x11c6f4, Func Offset: 0x234
	// Line 739, Address: 0x11c718, Func Offset: 0x258
	// Line 745, Address: 0x11c75c, Func Offset: 0x29c
	// Line 746, Address: 0x11c77c, Func Offset: 0x2bc
	// Line 747, Address: 0x11c7a0, Func Offset: 0x2e0
	// Line 749, Address: 0x11c7b4, Func Offset: 0x2f4
	// Line 751, Address: 0x11c7bc, Func Offset: 0x2fc
	// Line 764, Address: 0x11c7d0, Func Offset: 0x310
	// Line 767, Address: 0x11c7e0, Func Offset: 0x320
	// Line 769, Address: 0x11c808, Func Offset: 0x348
	// Line 771, Address: 0x11c988, Func Offset: 0x4c8
	// Line 773, Address: 0x11c990, Func Offset: 0x4d0
	// Line 788, Address: 0x11cbec, Func Offset: 0x72c
	// Line 789, Address: 0x11cbf4, Func Offset: 0x734
	// Func End, Address: 0x11cc08, Func Offset: 0x748
}

// 
// Start address: 0x11cc10
void upper_rswalk_3d()
{
	// Line 791, Address: 0x11cc10, Func Offset: 0
	// Line 792, Address: 0x11cc14, Func Offset: 0x4
	// Func End, Address: 0x11cc20, Func Offset: 0x10
}

// 
// Start address: 0x11cc20
void lower_run1_3d(SubCharacter* p)
{
	float target_speed;
	char lstickY_tmp;
	// Line 795, Address: 0x11cc20, Func Offset: 0
	// Line 799, Address: 0x11cc28, Func Offset: 0x8
	// Line 800, Address: 0x11cc40, Func Offset: 0x20
	// Line 805, Address: 0x11cc50, Func Offset: 0x30
	// Line 807, Address: 0x11cc78, Func Offset: 0x58
	// Line 809, Address: 0x11cc98, Func Offset: 0x78
	// Line 810, Address: 0x11ccb8, Func Offset: 0x98
	// Line 811, Address: 0x11ccf0, Func Offset: 0xd0
	// Line 813, Address: 0x11ccf8, Func Offset: 0xd8
	// Line 814, Address: 0x11cd18, Func Offset: 0xf8
	// Line 818, Address: 0x11cd54, Func Offset: 0x134
	// Line 820, Address: 0x11cd64, Func Offset: 0x144
	// Line 823, Address: 0x11cee4, Func Offset: 0x2c4
	// Line 829, Address: 0x11ceec, Func Offset: 0x2cc
	// Line 830, Address: 0x11cf54, Func Offset: 0x334
	// Line 834, Address: 0x11cf80, Func Offset: 0x360
	// Line 840, Address: 0x11cfb4, Func Offset: 0x394
	// Line 846, Address: 0x11cfc4, Func Offset: 0x3a4
	// Line 847, Address: 0x11cfd8, Func Offset: 0x3b8
	// Line 848, Address: 0x11cff8, Func Offset: 0x3d8
	// Line 849, Address: 0x11d000, Func Offset: 0x3e0
	// Line 851, Address: 0x11d020, Func Offset: 0x400
	// Line 852, Address: 0x11d058, Func Offset: 0x438
	// Line 856, Address: 0x11d080, Func Offset: 0x460
	// Line 858, Address: 0x11d090, Func Offset: 0x470
	// Line 866, Address: 0x11d300, Func Offset: 0x6e0
	// Line 869, Address: 0x11d308, Func Offset: 0x6e8
	// Line 872, Address: 0x11d324, Func Offset: 0x704
	// Line 880, Address: 0x11d35c, Func Offset: 0x73c
	// Line 881, Address: 0x11d378, Func Offset: 0x758
	// Line 882, Address: 0x11d398, Func Offset: 0x778
	// Line 883, Address: 0x11d3bc, Func Offset: 0x79c
	// Line 885, Address: 0x11d3dc, Func Offset: 0x7bc
	// Line 886, Address: 0x11d44c, Func Offset: 0x82c
	// Line 888, Address: 0x11d458, Func Offset: 0x838
	// Line 890, Address: 0x11d460, Func Offset: 0x840
	// Line 908, Address: 0x11d46c, Func Offset: 0x84c
	// Line 909, Address: 0x11d49c, Func Offset: 0x87c
	// Line 910, Address: 0x11d4b0, Func Offset: 0x890
	// Line 916, Address: 0x11d4c4, Func Offset: 0x8a4
	// Line 917, Address: 0x11d4cc, Func Offset: 0x8ac
	// Func End, Address: 0x11d4dc, Func Offset: 0x8bc
}

// 
// Start address: 0x11d4e0
void upper_run1_3d(SubCharacter* p)
{
	// Line 919, Address: 0x11d4e0, Func Offset: 0
	// Line 921, Address: 0x11d4ec, Func Offset: 0xc
	// Line 922, Address: 0x11d520, Func Offset: 0x40
	// Line 923, Address: 0x11d534, Func Offset: 0x54
	// Line 925, Address: 0x11d548, Func Offset: 0x68
	// Func End, Address: 0x11d558, Func Offset: 0x78
}

// 
// Start address: 0x11d560
void lower_run2_3d(SubCharacter* p)
{
	float target_speed;
	char lstickY_tmp;
	// Line 928, Address: 0x11d560, Func Offset: 0
	// Line 932, Address: 0x11d570, Func Offset: 0x10
	// Line 933, Address: 0x11d588, Func Offset: 0x28
	// Line 937, Address: 0x11d598, Func Offset: 0x38
	// Line 939, Address: 0x11d5b4, Func Offset: 0x54
	// Line 942, Address: 0x11d5dc, Func Offset: 0x7c
	// Line 944, Address: 0x11d5fc, Func Offset: 0x9c
	// Line 945, Address: 0x11d61c, Func Offset: 0xbc
	// Line 946, Address: 0x11d654, Func Offset: 0xf4
	// Line 948, Address: 0x11d65c, Func Offset: 0xfc
	// Line 949, Address: 0x11d67c, Func Offset: 0x11c
	// Line 953, Address: 0x11d6b8, Func Offset: 0x158
	// Line 955, Address: 0x11d6c8, Func Offset: 0x168
	// Line 959, Address: 0x11d848, Func Offset: 0x2e8
	// Line 962, Address: 0x11d894, Func Offset: 0x334
	// Line 963, Address: 0x11d8a8, Func Offset: 0x348
	// Line 964, Address: 0x11d8bc, Func Offset: 0x35c
	// Line 971, Address: 0x11d8d0, Func Offset: 0x370
	// Line 977, Address: 0x11d8d8, Func Offset: 0x378
	// Line 978, Address: 0x11d940, Func Offset: 0x3e0
	// Line 982, Address: 0x11d96c, Func Offset: 0x40c
	// Line 989, Address: 0x11d9a0, Func Offset: 0x440
	// Line 995, Address: 0x11d9b0, Func Offset: 0x450
	// Line 996, Address: 0x11d9c4, Func Offset: 0x464
	// Line 997, Address: 0x11d9e4, Func Offset: 0x484
	// Line 998, Address: 0x11da0c, Func Offset: 0x4ac
	// Line 999, Address: 0x11da14, Func Offset: 0x4b4
	// Line 1000, Address: 0x11da34, Func Offset: 0x4d4
	// Line 1005, Address: 0x11da54, Func Offset: 0x4f4
	// Line 1007, Address: 0x11da64, Func Offset: 0x504
	// Line 1012, Address: 0x11dcd4, Func Offset: 0x774
	// Line 1013, Address: 0x11dd04, Func Offset: 0x7a4
	// Line 1014, Address: 0x11dd18, Func Offset: 0x7b8
	// Line 1016, Address: 0x11dd2c, Func Offset: 0x7cc
	// Line 1019, Address: 0x11dd78, Func Offset: 0x818
	// Line 1020, Address: 0x11dd8c, Func Offset: 0x82c
	// Line 1021, Address: 0x11dda0, Func Offset: 0x840
	// Line 1032, Address: 0x11ddb4, Func Offset: 0x854
	// Line 1035, Address: 0x11ddbc, Func Offset: 0x85c
	// Line 1038, Address: 0x11ddd8, Func Offset: 0x878
	// Line 1046, Address: 0x11de10, Func Offset: 0x8b0
	// Line 1047, Address: 0x11de2c, Func Offset: 0x8cc
	// Line 1048, Address: 0x11de4c, Func Offset: 0x8ec
	// Line 1049, Address: 0x11de70, Func Offset: 0x910
	// Line 1051, Address: 0x11de90, Func Offset: 0x930
	// Line 1052, Address: 0x11df00, Func Offset: 0x9a0
	// Line 1054, Address: 0x11df0c, Func Offset: 0x9ac
	// Line 1056, Address: 0x11df14, Func Offset: 0x9b4
	// Line 1073, Address: 0x11df20, Func Offset: 0x9c0
	// Line 1075, Address: 0x11df28, Func Offset: 0x9c8
	// Line 1076, Address: 0x11df38, Func Offset: 0x9d8
	// Line 1078, Address: 0x11df4c, Func Offset: 0x9ec
	// Func End, Address: 0x11df60, Func Offset: 0xa00
}

// 
// Start address: 0x11df60
void upper_run2_3d(SubCharacter* p)
{
	// Line 1080, Address: 0x11df60, Func Offset: 0
	// Line 1081, Address: 0x11df6c, Func Offset: 0xc
	// Line 1084, Address: 0x11df94, Func Offset: 0x34
	// Line 1087, Address: 0x11dfe4, Func Offset: 0x84
	// Line 1088, Address: 0x11dff8, Func Offset: 0x98
	// Line 1089, Address: 0x11e00c, Func Offset: 0xac
	// Line 1096, Address: 0x11e020, Func Offset: 0xc0
	// Line 1099, Address: 0x11e028, Func Offset: 0xc8
	// Line 1100, Address: 0x11e05c, Func Offset: 0xfc
	// Line 1101, Address: 0x11e070, Func Offset: 0x110
	// Line 1103, Address: 0x11e084, Func Offset: 0x124
	// Line 1106, Address: 0x11e0d4, Func Offset: 0x174
	// Line 1107, Address: 0x11e0e8, Func Offset: 0x188
	// Line 1108, Address: 0x11e0fc, Func Offset: 0x19c
	// Line 1118, Address: 0x11e110, Func Offset: 0x1b0
	// Func End, Address: 0x11e120, Func Offset: 0x1c0
}

// 
// Start address: 0x11e120
void lower_run3_3d(SubCharacter* p)
{
	float target_speed;
	char lstickY_tmp;
	// Line 1121, Address: 0x11e120, Func Offset: 0
	// Line 1125, Address: 0x11e130, Func Offset: 0x10
	// Line 1126, Address: 0x11e148, Func Offset: 0x28
	// Line 1130, Address: 0x11e158, Func Offset: 0x38
	// Line 1132, Address: 0x11e174, Func Offset: 0x54
	// Line 1136, Address: 0x11e19c, Func Offset: 0x7c
	// Line 1137, Address: 0x11e1bc, Func Offset: 0x9c
	// Line 1141, Address: 0x11e200, Func Offset: 0xe0
	// Line 1143, Address: 0x11e210, Func Offset: 0xf0
	// Line 1147, Address: 0x11e390, Func Offset: 0x270
	// Line 1148, Address: 0x11e3bc, Func Offset: 0x29c
	// Line 1149, Address: 0x11e3d0, Func Offset: 0x2b0
	// Line 1151, Address: 0x11e3e4, Func Offset: 0x2c4
	// Line 1157, Address: 0x11e3ec, Func Offset: 0x2cc
	// Line 1158, Address: 0x11e454, Func Offset: 0x334
	// Line 1162, Address: 0x11e480, Func Offset: 0x360
	// Line 1174, Address: 0x11e4a0, Func Offset: 0x380
	// Line 1175, Address: 0x11e4b8, Func Offset: 0x398
	// Line 1176, Address: 0x11e4c8, Func Offset: 0x3a8
	// Line 1181, Address: 0x11e4d4, Func Offset: 0x3b4
	// Line 1182, Address: 0x11e4e8, Func Offset: 0x3c8
	// Line 1183, Address: 0x11e508, Func Offset: 0x3e8
	// Line 1184, Address: 0x11e510, Func Offset: 0x3f0
	// Line 1186, Address: 0x11e530, Func Offset: 0x410
	// Line 1190, Address: 0x11e558, Func Offset: 0x438
	// Line 1192, Address: 0x11e568, Func Offset: 0x448
	// Line 1197, Address: 0x11e7d8, Func Offset: 0x6b8
	// Line 1199, Address: 0x11e824, Func Offset: 0x704
	// Line 1200, Address: 0x11e838, Func Offset: 0x718
	// Line 1206, Address: 0x11e84c, Func Offset: 0x72c
	// Line 1209, Address: 0x11e854, Func Offset: 0x734
	// Line 1212, Address: 0x11e870, Func Offset: 0x750
	// Line 1220, Address: 0x11e8a8, Func Offset: 0x788
	// Line 1221, Address: 0x11e8c4, Func Offset: 0x7a4
	// Line 1222, Address: 0x11e8e4, Func Offset: 0x7c4
	// Line 1223, Address: 0x11e908, Func Offset: 0x7e8
	// Line 1225, Address: 0x11e928, Func Offset: 0x808
	// Line 1226, Address: 0x11e998, Func Offset: 0x878
	// Line 1228, Address: 0x11e9a4, Func Offset: 0x884
	// Line 1230, Address: 0x11e9ac, Func Offset: 0x88c
	// Line 1247, Address: 0x11e9b8, Func Offset: 0x898
	// Line 1250, Address: 0x11e9c0, Func Offset: 0x8a0
	// Line 1251, Address: 0x11e9d0, Func Offset: 0x8b0
	// Line 1252, Address: 0x11e9e4, Func Offset: 0x8c4
	// Func End, Address: 0x11e9f8, Func Offset: 0x8d8
}

// 
// Start address: 0x11ea00
void upper_run3_3d(SubCharacter* p)
{
	// Line 1254, Address: 0x11ea00, Func Offset: 0
	// Line 1255, Address: 0x11ea0c, Func Offset: 0xc
	// Line 1258, Address: 0x11ea34, Func Offset: 0x34
	// Line 1259, Address: 0x11ea60, Func Offset: 0x60
	// Line 1260, Address: 0x11ea74, Func Offset: 0x74
	// Line 1262, Address: 0x11ea88, Func Offset: 0x88
	// Line 1265, Address: 0x11ea90, Func Offset: 0x90
	// Line 1267, Address: 0x11eae0, Func Offset: 0xe0
	// Line 1268, Address: 0x11eaf4, Func Offset: 0xf4
	// Line 1272, Address: 0x11eb08, Func Offset: 0x108
	// Func End, Address: 0x11eb18, Func Offset: 0x118
}

// 
// Start address: 0x11eb20
void lower_lsrun_3d(SubCharacter* p)
{
	// Line 1275, Address: 0x11eb20, Func Offset: 0
	// Line 1277, Address: 0x11eb28, Func Offset: 0x8
	// Line 1281, Address: 0x11eb44, Func Offset: 0x24
	// Line 1282, Address: 0x11eb64, Func Offset: 0x44
	// Line 1283, Address: 0x11eba8, Func Offset: 0x88
	// Line 1286, Address: 0x11ebb0, Func Offset: 0x90
	// Line 1288, Address: 0x11ebd4, Func Offset: 0xb4
	// Line 1294, Address: 0x11ec18, Func Offset: 0xf8
	// Line 1295, Address: 0x11ec38, Func Offset: 0x118
	// Line 1296, Address: 0x11ec5c, Func Offset: 0x13c
	// Line 1298, Address: 0x11ec70, Func Offset: 0x150
	// Line 1300, Address: 0x11ec78, Func Offset: 0x158
	// Line 1313, Address: 0x11ec8c, Func Offset: 0x16c
	// Line 1315, Address: 0x11ec9c, Func Offset: 0x17c
	// Line 1317, Address: 0x11ecc4, Func Offset: 0x1a4
	// Line 1319, Address: 0x11ee44, Func Offset: 0x324
	// Line 1321, Address: 0x11ee4c, Func Offset: 0x32c
	// Line 1331, Address: 0x11f0bc, Func Offset: 0x59c
	// Line 1334, Address: 0x11f0c4, Func Offset: 0x5a4
	// Line 1335, Address: 0x11f0d4, Func Offset: 0x5b4
	// Line 1336, Address: 0x11f0e8, Func Offset: 0x5c8
	// Func End, Address: 0x11f0f8, Func Offset: 0x5d8
}

// 
// Start address: 0x11f100
void upper_lsrun_3d()
{
	// Line 1338, Address: 0x11f100, Func Offset: 0
	// Line 1339, Address: 0x11f104, Func Offset: 0x4
	// Func End, Address: 0x11f110, Func Offset: 0x10
}

// 
// Start address: 0x11f110
void lower_rsrun_3d(SubCharacter* p)
{
	// Line 1342, Address: 0x11f110, Func Offset: 0
	// Line 1344, Address: 0x11f118, Func Offset: 0x8
	// Line 1348, Address: 0x11f134, Func Offset: 0x24
	// Line 1349, Address: 0x11f154, Func Offset: 0x44
	// Line 1350, Address: 0x11f198, Func Offset: 0x88
	// Line 1353, Address: 0x11f1a0, Func Offset: 0x90
	// Line 1355, Address: 0x11f1c4, Func Offset: 0xb4
	// Line 1361, Address: 0x11f208, Func Offset: 0xf8
	// Line 1362, Address: 0x11f228, Func Offset: 0x118
	// Line 1363, Address: 0x11f24c, Func Offset: 0x13c
	// Line 1365, Address: 0x11f260, Func Offset: 0x150
	// Line 1367, Address: 0x11f268, Func Offset: 0x158
	// Line 1380, Address: 0x11f27c, Func Offset: 0x16c
	// Line 1382, Address: 0x11f28c, Func Offset: 0x17c
	// Line 1384, Address: 0x11f2b4, Func Offset: 0x1a4
	// Line 1386, Address: 0x11f434, Func Offset: 0x324
	// Line 1388, Address: 0x11f43c, Func Offset: 0x32c
	// Line 1397, Address: 0x11f6ac, Func Offset: 0x59c
	// Line 1400, Address: 0x11f6b4, Func Offset: 0x5a4
	// Line 1401, Address: 0x11f6c4, Func Offset: 0x5b4
	// Line 1402, Address: 0x11f6d8, Func Offset: 0x5c8
	// Func End, Address: 0x11f6e8, Func Offset: 0x5d8
}

// 
// Start address: 0x11f6f0
void upper_rsrun_3d()
{
	// Line 1404, Address: 0x11f6f0, Func Offset: 0
	// Line 1405, Address: 0x11f6f4, Func Offset: 0x4
	// Func End, Address: 0x11f700, Func Offset: 0x10
}

// 
// Start address: 0x11f700
void lower_lturn180_3d(SubCharacter* p)
{
	float mov_angle;
	// Line 1408, Address: 0x11f700, Func Offset: 0
	// Line 1409, Address: 0x11f70c, Func Offset: 0xc
	// Line 1411, Address: 0x11f728, Func Offset: 0x28
	// Line 1413, Address: 0x11f73c, Func Offset: 0x3c
	// Line 1415, Address: 0x11f754, Func Offset: 0x54
	// Line 1417, Address: 0x11f768, Func Offset: 0x68
	// Line 1418, Address: 0x11f790, Func Offset: 0x90
	// Line 1419, Address: 0x11f79c, Func Offset: 0x9c
	// Line 1421, Address: 0x11f7ac, Func Offset: 0xac
	// Line 1423, Address: 0x11f86c, Func Offset: 0x16c
	// Func End, Address: 0x11f87c, Func Offset: 0x17c
}

// 
// Start address: 0x11f880
void upper_lturn180_3d()
{
	// Line 1425, Address: 0x11f880, Func Offset: 0
	// Line 1426, Address: 0x11f884, Func Offset: 0x4
	// Func End, Address: 0x11f890, Func Offset: 0x10
}

// 
// Start address: 0x11f890
void lower_rturn180_3d(SubCharacter* p)
{
	float mov_angle;
	// Line 1429, Address: 0x11f890, Func Offset: 0
	// Line 1430, Address: 0x11f89c, Func Offset: 0xc
	// Line 1433, Address: 0x11f8b8, Func Offset: 0x28
	// Line 1435, Address: 0x11f8cc, Func Offset: 0x3c
	// Line 1437, Address: 0x11f8e4, Func Offset: 0x54
	// Line 1439, Address: 0x11f8f8, Func Offset: 0x68
	// Line 1440, Address: 0x11f920, Func Offset: 0x90
	// Line 1441, Address: 0x11f92c, Func Offset: 0x9c
	// Line 1443, Address: 0x11f93c, Func Offset: 0xac
	// Line 1445, Address: 0x11f9fc, Func Offset: 0x16c
	// Func End, Address: 0x11fa0c, Func Offset: 0x17c
}

// 
// Start address: 0x11fa10
void upper_rturn180_3d()
{
	// Line 1447, Address: 0x11fa10, Func Offset: 0
	// Line 1448, Address: 0x11fa14, Func Offset: 0x4
	// Func End, Address: 0x11fa20, Func Offset: 0x10
}

// 
// Start address: 0x11fa20
void lower_jump_3d(SubCharacter* p)
{
	// Line 1451, Address: 0x11fa20, Func Offset: 0
	// Line 1454, Address: 0x11fa2c, Func Offset: 0xc
	// Line 1472, Address: 0x11fa48, Func Offset: 0x28
	// Line 1473, Address: 0x11fa5c, Func Offset: 0x3c
	// Line 1474, Address: 0x11fa70, Func Offset: 0x50
	// Line 1475, Address: 0x11fa7c, Func Offset: 0x5c
	// Line 1476, Address: 0x11fa90, Func Offset: 0x70
	// Line 1477, Address: 0x11faa4, Func Offset: 0x84
	// Line 1479, Address: 0x11faac, Func Offset: 0x8c
	// Line 1480, Address: 0x11fac0, Func Offset: 0xa0
	// Line 1481, Address: 0x11fad4, Func Offset: 0xb4
	// Line 1508, Address: 0x11fae8, Func Offset: 0xc8
	// Func End, Address: 0x11faf8, Func Offset: 0xd8
}

// 
// Start address: 0x11fb00
void upper_jump_3d()
{
	// Line 1510, Address: 0x11fb00, Func Offset: 0
	// Line 1511, Address: 0x11fb08, Func Offset: 0x8
	// Line 1512, Address: 0x11fb1c, Func Offset: 0x1c
	// Line 1513, Address: 0x11fb30, Func Offset: 0x30
	// Line 1514, Address: 0x11fb38, Func Offset: 0x38
	// Line 1515, Address: 0x11fb4c, Func Offset: 0x4c
	// Line 1516, Address: 0x11fb60, Func Offset: 0x60
	// Line 1520, Address: 0x11fb74, Func Offset: 0x74
	// Func End, Address: 0x11fb84, Func Offset: 0x84
}

// 
// Start address: 0x11fb90
void lower_step_3d()
{
	// Line 1523, Address: 0x11fb90, Func Offset: 0
	// Line 1560, Address: 0x11fb94, Func Offset: 0x4
	// Func End, Address: 0x11fba0, Func Offset: 0x10
}

// 
// Start address: 0x11fba0
void upper_step_3d()
{
	// Line 1562, Address: 0x11fba0, Func Offset: 0
	// Line 1563, Address: 0x11fba8, Func Offset: 0x8
	// Line 1564, Address: 0x11fbbc, Func Offset: 0x1c
	// Line 1566, Address: 0x11fbd0, Func Offset: 0x30
	// Line 1568, Address: 0x11fbe4, Func Offset: 0x44
	// Func End, Address: 0x11fbf4, Func Offset: 0x54
}

// 
// Start address: 0x11fc00
void lower_lstep_3d()
{
	// Line 1571, Address: 0x11fc00, Func Offset: 0
	// Line 1606, Address: 0x11fc04, Func Offset: 0x4
	// Func End, Address: 0x11fc10, Func Offset: 0x10
}

// 
// Start address: 0x11fc10
void upper_lstep_3d()
{
	// Line 1608, Address: 0x11fc10, Func Offset: 0
	// Line 1609, Address: 0x11fc18, Func Offset: 0x8
	// Line 1610, Address: 0x11fc2c, Func Offset: 0x1c
	// Line 1611, Address: 0x11fc40, Func Offset: 0x30
	// Line 1613, Address: 0x11fc54, Func Offset: 0x44
	// Func End, Address: 0x11fc64, Func Offset: 0x54
}

// 
// Start address: 0x11fc70
void lower_rstep_3d()
{
	// Line 1616, Address: 0x11fc70, Func Offset: 0
	// Line 1652, Address: 0x11fc74, Func Offset: 0x4
	// Func End, Address: 0x11fc80, Func Offset: 0x10
}

// 
// Start address: 0x11fc80
void upper_rstep_3d()
{
	// Line 1654, Address: 0x11fc80, Func Offset: 0
	// Line 1655, Address: 0x11fc88, Func Offset: 0x8
	// Line 1656, Address: 0x11fc9c, Func Offset: 0x1c
	// Line 1657, Address: 0x11fcb0, Func Offset: 0x30
	// Line 1659, Address: 0x11fcc4, Func Offset: 0x44
	// Func End, Address: 0x11fcd4, Func Offset: 0x54
}

// 
// Start address: 0x11fce0
void lower_hold_3d(SubCharacter* p)
{
	float spd;
	short frame;
	_AnimeInfo* a_info;
	// Line 1662, Address: 0x11fce0, Func Offset: 0
	// Line 1663, Address: 0x11fcfc, Func Offset: 0x1c
	// Line 1664, Address: 0x11fd10, Func Offset: 0x30
	// Line 1668, Address: 0x11fd28, Func Offset: 0x48
	// Line 1672, Address: 0x11fd34, Func Offset: 0x54
	// Line 1673, Address: 0x11fd4c, Func Offset: 0x6c
	// Line 1675, Address: 0x11fd88, Func Offset: 0xa8
	// Line 1677, Address: 0x11fd94, Func Offset: 0xb4
	// Line 1684, Address: 0x11fdd0, Func Offset: 0xf0
	// Line 1686, Address: 0x11fde0, Func Offset: 0x100
	// Line 1688, Address: 0x11fe08, Func Offset: 0x128
	// Line 1689, Address: 0x11fe18, Func Offset: 0x138
	// Line 1691, Address: 0x11fe54, Func Offset: 0x174
	// Line 1692, Address: 0x11fe78, Func Offset: 0x198
	// Line 1694, Address: 0x11fe80, Func Offset: 0x1a0
	// Line 1695, Address: 0x11fe90, Func Offset: 0x1b0
	// Line 1698, Address: 0x11fef4, Func Offset: 0x214
	// Line 1703, Address: 0x11ff44, Func Offset: 0x264
	// Line 1710, Address: 0x120024, Func Offset: 0x344
	// Line 1712, Address: 0x120058, Func Offset: 0x378
	// Line 1713, Address: 0x12006c, Func Offset: 0x38c
	// Line 1716, Address: 0x120080, Func Offset: 0x3a0
	// Line 1718, Address: 0x12008c, Func Offset: 0x3ac
	// Line 1724, Address: 0x1200dc, Func Offset: 0x3fc
	// Line 1729, Address: 0x1200e8, Func Offset: 0x408
	// Line 1730, Address: 0x1200f8, Func Offset: 0x418
	// Line 1740, Address: 0x12012c, Func Offset: 0x44c
	// Line 1743, Address: 0x120158, Func Offset: 0x478
	// Line 1745, Address: 0x120180, Func Offset: 0x4a0
	// Line 1747, Address: 0x12018c, Func Offset: 0x4ac
	// Line 1750, Address: 0x120194, Func Offset: 0x4b4
	// Line 1752, Address: 0x1201bc, Func Offset: 0x4dc
	// Line 1761, Address: 0x1201c8, Func Offset: 0x4e8
	// Line 1762, Address: 0x1201d8, Func Offset: 0x4f8
	// Line 1763, Address: 0x1201ec, Func Offset: 0x50c
	// Line 1764, Address: 0x120200, Func Offset: 0x520
	// Line 1765, Address: 0x120214, Func Offset: 0x534
	// Line 1766, Address: 0x12021c, Func Offset: 0x53c
	// Line 1767, Address: 0x120234, Func Offset: 0x554
	// Line 1770, Address: 0x120248, Func Offset: 0x568
	// Line 1771, Address: 0x120250, Func Offset: 0x570
	// Func End, Address: 0x120270, Func Offset: 0x590
}

// 
// Start address: 0x120270
void upper_hold_3d(SubCharacter* p)
{
	_AnimeInfo* a_info;
	// Line 1774, Address: 0x120270, Func Offset: 0
	// Line 1775, Address: 0x120280, Func Offset: 0x10
	// Line 1779, Address: 0x120294, Func Offset: 0x24
	// Line 1780, Address: 0x1202bc, Func Offset: 0x4c
	// Line 1785, Address: 0x1202d0, Func Offset: 0x60
	// Line 1787, Address: 0x120304, Func Offset: 0x94
	// Line 1788, Address: 0x120318, Func Offset: 0xa8
	// Line 1791, Address: 0x12032c, Func Offset: 0xbc
	// Line 1793, Address: 0x120338, Func Offset: 0xc8
	// Line 1799, Address: 0x120388, Func Offset: 0x118
	// Line 1804, Address: 0x120394, Func Offset: 0x124
	// Line 1805, Address: 0x1203a4, Func Offset: 0x134
	// Line 1816, Address: 0x1203d8, Func Offset: 0x168
	// Line 1819, Address: 0x120404, Func Offset: 0x194
	// Line 1821, Address: 0x12042c, Func Offset: 0x1bc
	// Line 1823, Address: 0x120438, Func Offset: 0x1c8
	// Line 1826, Address: 0x120440, Func Offset: 0x1d0
	// Line 1828, Address: 0x120468, Func Offset: 0x1f8
	// Line 1835, Address: 0x120474, Func Offset: 0x204
	// Line 1836, Address: 0x120484, Func Offset: 0x214
	// Line 1837, Address: 0x120498, Func Offset: 0x228
	// Line 1838, Address: 0x1204ac, Func Offset: 0x23c
	// Line 1839, Address: 0x1204c0, Func Offset: 0x250
	// Line 1840, Address: 0x1204c8, Func Offset: 0x258
	// Line 1841, Address: 0x1204e0, Func Offset: 0x270
	// Line 1846, Address: 0x1204f4, Func Offset: 0x284
	// Func End, Address: 0x120508, Func Offset: 0x298
}

// 
// Start address: 0x120510
void lower_release_3d(SubCharacter* p)
{
	short frame;
	float spd;
	// Line 1849, Address: 0x120510, Func Offset: 0
	// Line 1851, Address: 0x120528, Func Offset: 0x18
	// Line 1854, Address: 0x120540, Func Offset: 0x30
	// Line 1857, Address: 0x12054c, Func Offset: 0x3c
	// Line 1858, Address: 0x120564, Func Offset: 0x54
	// Line 1860, Address: 0x1205a0, Func Offset: 0x90
	// Line 1862, Address: 0x1205b4, Func Offset: 0xa4
	// Line 1868, Address: 0x1205f0, Func Offset: 0xe0
	// Line 1870, Address: 0x120618, Func Offset: 0x108
	// Line 1871, Address: 0x120628, Func Offset: 0x118
	// Line 1873, Address: 0x120664, Func Offset: 0x154
	// Line 1874, Address: 0x120688, Func Offset: 0x178
	// Line 1876, Address: 0x120690, Func Offset: 0x180
	// Line 1877, Address: 0x1206a0, Func Offset: 0x190
	// Line 1880, Address: 0x120704, Func Offset: 0x1f4
	// Line 1885, Address: 0x120754, Func Offset: 0x244
	// Line 1888, Address: 0x120834, Func Offset: 0x324
	// Line 1889, Address: 0x120848, Func Offset: 0x338
	// Line 1890, Address: 0x12085c, Func Offset: 0x34c
	// Line 1893, Address: 0x120870, Func Offset: 0x360
	// Func End, Address: 0x12088c, Func Offset: 0x37c
}

// 
// Start address: 0x120890
void upper_release_3d()
{
	// Line 1895, Address: 0x120890, Func Offset: 0
	// Line 1899, Address: 0x120898, Func Offset: 0x8
	// Line 1904, Address: 0x1208ac, Func Offset: 0x1c
	// Line 1905, Address: 0x1208c0, Func Offset: 0x30
	// Line 1917, Address: 0x1208d4, Func Offset: 0x44
	// Line 1918, Address: 0x1208e8, Func Offset: 0x58
	// Line 1921, Address: 0x1208f0, Func Offset: 0x60
	// Line 1924, Address: 0x1208f8, Func Offset: 0x68
	// Line 1930, Address: 0x120988, Func Offset: 0xf8
	// Line 1931, Address: 0x12099c, Func Offset: 0x10c
	// Line 1934, Address: 0x1209a4, Func Offset: 0x114
	// Func End, Address: 0x1209b4, Func Offset: 0x124
}

// 
// Start address: 0x1209c0
void lower_attack_3d(SubCharacter* p)
{
	short frame;
	_AnimeInfo* a_info;
	// Line 1940, Address: 0x1209c0, Func Offset: 0
	// Line 1941, Address: 0x1209d8, Func Offset: 0x18
	// Line 1942, Address: 0x1209ec, Func Offset: 0x2c
	// Line 1945, Address: 0x120a04, Func Offset: 0x44
	// Line 1948, Address: 0x120a10, Func Offset: 0x50
	// Line 1951, Address: 0x120a30, Func Offset: 0x70
	// Line 1952, Address: 0x120a48, Func Offset: 0x88
	// Line 1954, Address: 0x120a5c, Func Offset: 0x9c
	// Line 1956, Address: 0x120a84, Func Offset: 0xc4
	// Line 1958, Address: 0x120a90, Func Offset: 0xd0
	// Line 1961, Address: 0x120ad4, Func Offset: 0x114
	// Line 1963, Address: 0x120afc, Func Offset: 0x13c
	// Line 1965, Address: 0x120b08, Func Offset: 0x148
	// Line 1996, Address: 0x120b4c, Func Offset: 0x18c
	// Line 1998, Address: 0x120b58, Func Offset: 0x198
	// Line 1999, Address: 0x120b7c, Func Offset: 0x1bc
	// Line 2001, Address: 0x120b8c, Func Offset: 0x1cc
	// Line 2015, Address: 0x120b9c, Func Offset: 0x1dc
	// Line 2016, Address: 0x120bc4, Func Offset: 0x204
	// Line 2018, Address: 0x120bd8, Func Offset: 0x218
	// Line 2019, Address: 0x120be0, Func Offset: 0x220
	// Line 2021, Address: 0x120bf4, Func Offset: 0x234
	// Line 2022, Address: 0x120bfc, Func Offset: 0x23c
	// Line 2023, Address: 0x120c10, Func Offset: 0x250
	// Line 2025, Address: 0x120c20, Func Offset: 0x260
	// Line 2027, Address: 0x120c40, Func Offset: 0x280
	// Line 2028, Address: 0x120c4c, Func Offset: 0x28c
	// Line 2029, Address: 0x120c60, Func Offset: 0x2a0
	// Line 2030, Address: 0x120c74, Func Offset: 0x2b4
	// Line 2031, Address: 0x120c7c, Func Offset: 0x2bc
	// Line 2033, Address: 0x120c90, Func Offset: 0x2d0
	// Line 2034, Address: 0x120c98, Func Offset: 0x2d8
	// Line 2039, Address: 0x120cac, Func Offset: 0x2ec
	// Line 2042, Address: 0x120cd8, Func Offset: 0x318
	// Line 2043, Address: 0x120cfc, Func Offset: 0x33c
	// Line 2044, Address: 0x120d10, Func Offset: 0x350
	// Line 2048, Address: 0x120d24, Func Offset: 0x364
	// Func End, Address: 0x120d40, Func Offset: 0x380
}

// 
// Start address: 0x120d40
void upper_attack_3d(SubCharacter* p)
{
	unsigned short frame;
	unsigned short name2;
	unsigned short name1;
	_AnimeInfo* a_info;
	int bul;
	int wep;
	short frame;
	_AnimeInfo* a_info;
	// Line 2050, Address: 0x120d40, Func Offset: 0
	// Line 2051, Address: 0x120d6c, Func Offset: 0x2c
	// Line 2065, Address: 0x120d80, Func Offset: 0x40
	// Line 2066, Address: 0x120d94, Func Offset: 0x54
	// Line 2068, Address: 0x120dcc, Func Offset: 0x8c
	// Line 2069, Address: 0x120dd0, Func Offset: 0x90
	// Line 2071, Address: 0x120dd8, Func Offset: 0x98
	// Line 2072, Address: 0x120ddc, Func Offset: 0x9c
	// Line 2074, Address: 0x120de4, Func Offset: 0xa4
	// Line 2082, Address: 0x120de8, Func Offset: 0xa8
	// Line 2083, Address: 0x120e10, Func Offset: 0xd0
	// Line 2091, Address: 0x120e24, Func Offset: 0xe4
	// Line 2092, Address: 0x120e34, Func Offset: 0xf4
	// Line 2093, Address: 0x120e44, Func Offset: 0x104
	// Line 2096, Address: 0x120e58, Func Offset: 0x118
	// Line 2097, Address: 0x120e60, Func Offset: 0x120
	// Line 2098, Address: 0x120e70, Func Offset: 0x130
	// Line 2108, Address: 0x120e84, Func Offset: 0x144
	// Line 2109, Address: 0x120e94, Func Offset: 0x154
	// Line 2114, Address: 0x120ed0, Func Offset: 0x190
	// Line 2124, Address: 0x120ee4, Func Offset: 0x1a4
	// Line 2125, Address: 0x120f08, Func Offset: 0x1c8
	// Line 2126, Address: 0x120f18, Func Offset: 0x1d8
	// Line 2127, Address: 0x120f30, Func Offset: 0x1f0
	// Line 2129, Address: 0x120f40, Func Offset: 0x200
	// Line 2144, Address: 0x120f68, Func Offset: 0x228
	// Line 2145, Address: 0x120f70, Func Offset: 0x230
	// Line 2146, Address: 0x120f98, Func Offset: 0x258
	// Line 2147, Address: 0x120fac, Func Offset: 0x26c
	// Line 2151, Address: 0x120fb4, Func Offset: 0x274
	// Line 2152, Address: 0x120fc8, Func Offset: 0x288
	// Line 2156, Address: 0x120fd0, Func Offset: 0x290
	// Line 2158, Address: 0x120fe8, Func Offset: 0x2a8
	// Line 2159, Address: 0x120ff8, Func Offset: 0x2b8
	// Line 2160, Address: 0x121008, Func Offset: 0x2c8
	// Line 2162, Address: 0x121010, Func Offset: 0x2d0
	// Line 2163, Address: 0x121020, Func Offset: 0x2e0
	// Line 2165, Address: 0x121034, Func Offset: 0x2f4
	// Line 2166, Address: 0x121040, Func Offset: 0x300
	// Line 2167, Address: 0x121054, Func Offset: 0x314
	// Line 2168, Address: 0x121068, Func Offset: 0x328
	// Line 2169, Address: 0x121070, Func Offset: 0x330
	// Line 2172, Address: 0x121084, Func Offset: 0x344
	// Line 2173, Address: 0x12108c, Func Offset: 0x34c
	// Line 2176, Address: 0x1210a0, Func Offset: 0x360
	// Line 2177, Address: 0x1210cc, Func Offset: 0x38c
	// Line 2178, Address: 0x1210e4, Func Offset: 0x3a4
	// Line 2179, Address: 0x1210f0, Func Offset: 0x3b0
	// Line 2180, Address: 0x1210f8, Func Offset: 0x3b8
	// Line 2183, Address: 0x121100, Func Offset: 0x3c0
	// Line 2205, Address: 0x121108, Func Offset: 0x3c8
	// Line 2212, Address: 0x121128, Func Offset: 0x3e8
	// Line 2213, Address: 0x12113c, Func Offset: 0x3fc
	// Line 2215, Address: 0x121180, Func Offset: 0x440
	// Line 2216, Address: 0x121188, Func Offset: 0x448
	// Line 2217, Address: 0x121190, Func Offset: 0x450
	// Line 2218, Address: 0x121198, Func Offset: 0x458
	// Line 2220, Address: 0x1211a0, Func Offset: 0x460
	// Line 2221, Address: 0x1211a8, Func Offset: 0x468
	// Line 2222, Address: 0x1211b0, Func Offset: 0x470
	// Line 2223, Address: 0x1211b4, Func Offset: 0x474
	// Line 2225, Address: 0x1211bc, Func Offset: 0x47c
	// Line 2226, Address: 0x1211c4, Func Offset: 0x484
	// Line 2227, Address: 0x1211cc, Func Offset: 0x48c
	// Line 2228, Address: 0x1211d4, Func Offset: 0x494
	// Line 2230, Address: 0x1211dc, Func Offset: 0x49c
	// Line 2231, Address: 0x1211e4, Func Offset: 0x4a4
	// Line 2232, Address: 0x1211ec, Func Offset: 0x4ac
	// Line 2236, Address: 0x1211f4, Func Offset: 0x4b4
	// Line 2237, Address: 0x12121c, Func Offset: 0x4dc
	// Line 2239, Address: 0x121244, Func Offset: 0x504
	// Line 2245, Address: 0x121254, Func Offset: 0x514
	// Line 2248, Address: 0x121274, Func Offset: 0x534
	// Line 2249, Address: 0x12127c, Func Offset: 0x53c
	// Line 2252, Address: 0x121284, Func Offset: 0x544
	// Line 2256, Address: 0x12128c, Func Offset: 0x54c
	// Line 2257, Address: 0x12129c, Func Offset: 0x55c
	// Line 2259, Address: 0x1212c4, Func Offset: 0x584
	// Line 2263, Address: 0x1212fc, Func Offset: 0x5bc
	// Line 2264, Address: 0x12130c, Func Offset: 0x5cc
	// Line 2266, Address: 0x121328, Func Offset: 0x5e8
	// Line 2268, Address: 0x121330, Func Offset: 0x5f0
	// Line 2269, Address: 0x121350, Func Offset: 0x610
	// Line 2275, Address: 0x12136c, Func Offset: 0x62c
	// Func End, Address: 0x12139c, Func Offset: 0x65c
}

// 
// Start address: 0x1213a0
void lower_kick_3d(SubCharacter* p)
{
	// Line 2277, Address: 0x1213a0, Func Offset: 0
	// Line 2279, Address: 0x1213ac, Func Offset: 0xc
	// Line 2281, Address: 0x1213b8, Func Offset: 0x18
	// Line 2282, Address: 0x1213e0, Func Offset: 0x40
	// Line 2284, Address: 0x1213f4, Func Offset: 0x54
	// Line 2285, Address: 0x121400, Func Offset: 0x60
	// Line 2286, Address: 0x121414, Func Offset: 0x74
	// Line 2287, Address: 0x121428, Func Offset: 0x88
	// Line 2290, Address: 0x12143c, Func Offset: 0x9c
	// Func End, Address: 0x12144c, Func Offset: 0xac
}

// 
// Start address: 0x121450
void upper_kick_3d(SubCharacter* p)
{
	// Line 2292, Address: 0x121450, Func Offset: 0
	// Line 2295, Address: 0x12145c, Func Offset: 0xc
	// Line 2296, Address: 0x121470, Func Offset: 0x20
	// Line 2297, Address: 0x121480, Func Offset: 0x30
	// Line 2299, Address: 0x1214a8, Func Offset: 0x58
	// Line 2304, Address: 0x1214c4, Func Offset: 0x74
	// Line 2305, Address: 0x1214d8, Func Offset: 0x88
	// Line 2306, Address: 0x1214ec, Func Offset: 0x9c
	// Line 2309, Address: 0x121500, Func Offset: 0xb0
	// Func End, Address: 0x121510, Func Offset: 0xc0
}

// 
// Start address: 0x121510
void lower_fall_3d(SubCharacter* p)
{
	unsigned short frame;
	// Line 2311, Address: 0x121510, Func Offset: 0
	// Line 2313, Address: 0x121520, Func Offset: 0x10
	// Line 2315, Address: 0x121538, Func Offset: 0x28
	// Line 2316, Address: 0x121548, Func Offset: 0x38
	// Line 2318, Address: 0x121570, Func Offset: 0x60
	// Line 2319, Address: 0x12157c, Func Offset: 0x6c
	// Line 2321, Address: 0x121584, Func Offset: 0x74
	// Line 2322, Address: 0x1215a8, Func Offset: 0x98
	// Line 2324, Address: 0x12160c, Func Offset: 0xfc
	// Line 2326, Address: 0x121614, Func Offset: 0x104
	// Line 2328, Address: 0x121620, Func Offset: 0x110
	// Line 2329, Address: 0x121634, Func Offset: 0x124
	// Line 2331, Address: 0x121648, Func Offset: 0x138
	// Func End, Address: 0x12165c, Func Offset: 0x14c
}

// 
// Start address: 0x121660
void upper_fall_3d()
{
	// Line 2333, Address: 0x121660, Func Offset: 0
	// Line 2334, Address: 0x121668, Func Offset: 0x8
	// Line 2335, Address: 0x12167c, Func Offset: 0x1c
	// Line 2337, Address: 0x121690, Func Offset: 0x30
	// Func End, Address: 0x1216a0, Func Offset: 0x40
}

// 
// Start address: 0x1216a0
void lower_damage_3d(SubCharacter* p)
{
	unsigned short cur_frame;
	float damage_angle;
	_AnimeInfo* a_info;
	// Line 2340, Address: 0x1216a0, Func Offset: 0
	// Line 2341, Address: 0x1216b4, Func Offset: 0x14
	// Line 2350, Address: 0x1216c8, Func Offset: 0x28
	// Line 2351, Address: 0x1216e0, Func Offset: 0x40
	// Line 2352, Address: 0x1216fc, Func Offset: 0x5c
	// Line 2354, Address: 0x12171c, Func Offset: 0x7c
	// Line 2355, Address: 0x121730, Func Offset: 0x90
	// Line 2363, Address: 0x121860, Func Offset: 0x1c0
	// Line 2365, Address: 0x12187c, Func Offset: 0x1dc
	// Line 2366, Address: 0x121890, Func Offset: 0x1f0
	// Line 2367, Address: 0x121898, Func Offset: 0x1f8
	// Line 2369, Address: 0x1218a4, Func Offset: 0x204
	// Line 2377, Address: 0x1218ac, Func Offset: 0x20c
	// Line 2379, Address: 0x1218c8, Func Offset: 0x228
	// Line 2380, Address: 0x1218dc, Func Offset: 0x23c
	// Line 2381, Address: 0x1218e4, Func Offset: 0x244
	// Line 2383, Address: 0x1218f0, Func Offset: 0x250
	// Line 2391, Address: 0x1218f8, Func Offset: 0x258
	// Line 2392, Address: 0x121914, Func Offset: 0x274
	// Line 2393, Address: 0x121928, Func Offset: 0x288
	// Line 2394, Address: 0x121930, Func Offset: 0x290
	// Line 2396, Address: 0x12193c, Func Offset: 0x29c
	// Line 2404, Address: 0x121944, Func Offset: 0x2a4
	// Line 2405, Address: 0x121960, Func Offset: 0x2c0
	// Line 2406, Address: 0x121974, Func Offset: 0x2d4
	// Line 2407, Address: 0x12197c, Func Offset: 0x2dc
	// Line 2409, Address: 0x121988, Func Offset: 0x2e8
	// Line 2417, Address: 0x121990, Func Offset: 0x2f0
	// Line 2418, Address: 0x1219ac, Func Offset: 0x30c
	// Line 2420, Address: 0x1219c0, Func Offset: 0x320
	// Line 2421, Address: 0x1219c8, Func Offset: 0x328
	// Line 2423, Address: 0x1219d4, Func Offset: 0x334
	// Line 2431, Address: 0x1219dc, Func Offset: 0x33c
	// Line 2432, Address: 0x1219f8, Func Offset: 0x358
	// Line 2434, Address: 0x121a0c, Func Offset: 0x36c
	// Line 2435, Address: 0x121a14, Func Offset: 0x374
	// Line 2437, Address: 0x121a20, Func Offset: 0x380
	// Line 2445, Address: 0x121a28, Func Offset: 0x388
	// Line 2446, Address: 0x121a44, Func Offset: 0x3a4
	// Line 2447, Address: 0x121a58, Func Offset: 0x3b8
	// Line 2448, Address: 0x121a60, Func Offset: 0x3c0
	// Line 2450, Address: 0x121a6c, Func Offset: 0x3cc
	// Line 2458, Address: 0x121a74, Func Offset: 0x3d4
	// Line 2459, Address: 0x121a90, Func Offset: 0x3f0
	// Line 2460, Address: 0x121aa4, Func Offset: 0x404
	// Line 2461, Address: 0x121aac, Func Offset: 0x40c
	// Line 2463, Address: 0x121ab8, Func Offset: 0x418
	// Line 2465, Address: 0x121ac0, Func Offset: 0x420
	// Line 2470, Address: 0x121acc, Func Offset: 0x42c
	// Line 2474, Address: 0x121adc, Func Offset: 0x43c
	// Line 2475, Address: 0x121af0, Func Offset: 0x450
	// Line 2476, Address: 0x121b00, Func Offset: 0x460
	// Line 2477, Address: 0x121b14, Func Offset: 0x474
	// Line 2478, Address: 0x121b28, Func Offset: 0x488
	// Line 2480, Address: 0x121b30, Func Offset: 0x490
	// Line 2482, Address: 0x121b44, Func Offset: 0x4a4
	// Line 2485, Address: 0x121b58, Func Offset: 0x4b8
	// Func End, Address: 0x121b70, Func Offset: 0x4d0
}

// 
// Start address: 0x121b70
void upper_damage_3d()
{
	// Line 2487, Address: 0x121b70, Func Offset: 0
	// Line 2488, Address: 0x121b78, Func Offset: 0x8
	// Line 2490, Address: 0x121b8c, Func Offset: 0x1c
	// Line 2491, Address: 0x121b9c, Func Offset: 0x2c
	// Line 2493, Address: 0x121ba8, Func Offset: 0x38
	// Line 2494, Address: 0x121bb8, Func Offset: 0x48
	// Line 2495, Address: 0x121bcc, Func Offset: 0x5c
	// Line 2496, Address: 0x121be0, Func Offset: 0x70
	// Line 2498, Address: 0x121be8, Func Offset: 0x78
	// Line 2500, Address: 0x121bfc, Func Offset: 0x8c
	// Line 2503, Address: 0x121c10, Func Offset: 0xa0
	// Func End, Address: 0x121c20, Func Offset: 0xb0
}

// 
// Start address: 0x121c20
void lower_to_stand_3d()
{
	// Line 2506, Address: 0x121c20, Func Offset: 0
	// Line 2507, Address: 0x121c24, Func Offset: 0x4
	// Func End, Address: 0x121c30, Func Offset: 0x10
}

// 
// Start address: 0x121c30
void upper_to_stand_3d()
{
	// Line 2509, Address: 0x121c30, Func Offset: 0
	// Line 2510, Address: 0x121c34, Func Offset: 0x4
	// Func End, Address: 0x121c40, Func Offset: 0x10
}

// 
// Start address: 0x121c40
void lower_wall_f_3d(SubCharacter* p)
{
	unsigned short frame;
	// Line 2512, Address: 0x121c40, Func Offset: 0
	// Line 2515, Address: 0x121c50, Func Offset: 0x10
	// Line 2524, Address: 0x121c68, Func Offset: 0x28
	// Line 2525, Address: 0x121c88, Func Offset: 0x48
	// Line 2526, Address: 0x121c94, Func Offset: 0x54
	// Line 2528, Address: 0x121cbc, Func Offset: 0x7c
	// Line 2532, Address: 0x121d0c, Func Offset: 0xcc
	// Line 2533, Address: 0x121d20, Func Offset: 0xe0
	// Line 2535, Address: 0x121d28, Func Offset: 0xe8
	// Line 2536, Address: 0x121d3c, Func Offset: 0xfc
	// Line 2538, Address: 0x121d44, Func Offset: 0x104
	// Line 2542, Address: 0x121d58, Func Offset: 0x118
	// Line 2543, Address: 0x121d7c, Func Offset: 0x13c
	// Line 2546, Address: 0x121dd8, Func Offset: 0x198
	// Line 2548, Address: 0x121de8, Func Offset: 0x1a8
	// Line 2549, Address: 0x121dfc, Func Offset: 0x1bc
	// Line 2551, Address: 0x121e10, Func Offset: 0x1d0
	// Func End, Address: 0x121e24, Func Offset: 0x1e4
}

// 
// Start address: 0x121e30
void upper_wall_f_3d()
{
	// Line 2553, Address: 0x121e30, Func Offset: 0
	// Line 2554, Address: 0x121e38, Func Offset: 0x8
	// Line 2555, Address: 0x121e4c, Func Offset: 0x1c
	// Line 2557, Address: 0x121e60, Func Offset: 0x30
	// Func End, Address: 0x121e70, Func Offset: 0x40
}

// 
// Start address: 0x121e70
void lower_event_3d(SubCharacter* p)
{
	// Line 2560, Address: 0x121e70, Func Offset: 0
	// Line 2562, Address: 0x121e78, Func Offset: 0x8
	// Line 2563, Address: 0x121e8c, Func Offset: 0x1c
	// Func End, Address: 0x121e98, Func Offset: 0x28
}

// 
// Start address: 0x121ea0
void upper_event_3d(SubCharacter* p)
{
	// Line 2566, Address: 0x121ea0, Func Offset: 0
	// Line 2567, Address: 0x121eac, Func Offset: 0xc
	// Line 2574, Address: 0x121f04, Func Offset: 0x64
	// Line 2575, Address: 0x121f18, Func Offset: 0x78
	// Line 2576, Address: 0x121f2c, Func Offset: 0x8c
	// Line 2577, Address: 0x121f40, Func Offset: 0xa0
	// Line 2581, Address: 0x121f54, Func Offset: 0xb4
	// Func End, Address: 0x121f64, Func Offset: 0xc4
}

// 
// Start address: 0x121f70
void SubCharacter::PlayerUpdateStatus3D()
{
	// Line 2674, Address: 0x121f70, Func Offset: 0
	// Line 2677, Address: 0x121f7c, Func Offset: 0xc
	// Line 2678, Address: 0x121f8c, Func Offset: 0x1c
	// Line 2680, Address: 0x121f98, Func Offset: 0x28
	// Line 2681, Address: 0x121fa0, Func Offset: 0x30
	// Line 2682, Address: 0x121fb4, Func Offset: 0x44
	// Line 2683, Address: 0x121fbc, Func Offset: 0x4c
	// Line 2684, Address: 0x121fc4, Func Offset: 0x54
	// Line 2691, Address: 0x121fd0, Func Offset: 0x60
	// Line 2694, Address: 0x121fd8, Func Offset: 0x68
	// Line 2706, Address: 0x121fe8, Func Offset: 0x78
	// Line 2709, Address: 0x121ff0, Func Offset: 0x80
	// Line 2710, Address: 0x122020, Func Offset: 0xb0
	// Line 2711, Address: 0x12203c, Func Offset: 0xcc
	// Line 2712, Address: 0x122044, Func Offset: 0xd4
	// Line 2716, Address: 0x122050, Func Offset: 0xe0
	// Line 2717, Address: 0x122070, Func Offset: 0x100
	// Line 2718, Address: 0x1220a4, Func Offset: 0x134
	// Line 2723, Address: 0x1220b0, Func Offset: 0x140
	// Line 2724, Address: 0x1220d0, Func Offset: 0x160
	// Line 2725, Address: 0x122104, Func Offset: 0x194
	// Line 2728, Address: 0x122110, Func Offset: 0x1a0
	// Func End, Address: 0x122120, Func Offset: 0x1b0
}

// 
// Start address: 0x122120
void PlayerUpdateStatusStand3D()
{
	shPlayerWork* w;
	// Line 2734, Address: 0x122120, Func Offset: 0
	// Line 2735, Address: 0x12212c, Func Offset: 0xc
	// Line 2737, Address: 0x122134, Func Offset: 0x14
	// Line 2738, Address: 0x122144, Func Offset: 0x24
	// Line 2739, Address: 0x122154, Func Offset: 0x34
	// Line 2740, Address: 0x122164, Func Offset: 0x44
	// Line 2741, Address: 0x122174, Func Offset: 0x54
	// Func End, Address: 0x122188, Func Offset: 0x68
}

// 
// Start address: 0x122190
void SubCharacter::PlayerUpdateStatusLower3D()
{
	float roty;
	float roty;
	PAD_3D* p3d;
	PAD_INFO* p;
	shPlayerWork* w;
	// Line 2756, Address: 0x122190, Func Offset: 0
	// Line 2758, Address: 0x1221a8, Func Offset: 0x18
	// Line 2759, Address: 0x1221b4, Func Offset: 0x24
	// Line 2760, Address: 0x1221bc, Func Offset: 0x2c
	// Line 2774, Address: 0x1221c4, Func Offset: 0x34
	// Line 2775, Address: 0x1221d8, Func Offset: 0x48
	// Line 2776, Address: 0x1221ec, Func Offset: 0x5c
	// Line 2777, Address: 0x122200, Func Offset: 0x70
	// Line 2778, Address: 0x122210, Func Offset: 0x80
	// Line 2780, Address: 0x122224, Func Offset: 0x94
	// Line 2787, Address: 0x12222c, Func Offset: 0x9c
	// Line 2788, Address: 0x122240, Func Offset: 0xb0
	// Line 2789, Address: 0x122254, Func Offset: 0xc4
	// Line 2790, Address: 0x122264, Func Offset: 0xd4
	// Line 2791, Address: 0x122278, Func Offset: 0xe8
	// Line 2793, Address: 0x122288, Func Offset: 0xf8
	// Line 2801, Address: 0x122290, Func Offset: 0x100
	// Line 2802, Address: 0x1222a4, Func Offset: 0x114
	// Line 2811, Address: 0x122338, Func Offset: 0x1a8
	// Line 2812, Address: 0x122350, Func Offset: 0x1c0
	// Line 2816, Address: 0x122378, Func Offset: 0x1e8
	// Line 2817, Address: 0x122380, Func Offset: 0x1f0
	// Line 2835, Address: 0x122394, Func Offset: 0x204
	// Line 2845, Address: 0x12239c, Func Offset: 0x20c
	// Line 2846, Address: 0x1223b4, Func Offset: 0x224
	// Line 2850, Address: 0x1223e0, Func Offset: 0x250
	// Line 2851, Address: 0x1223e8, Func Offset: 0x258
	// Line 2870, Address: 0x122400, Func Offset: 0x270
	// Line 2877, Address: 0x122408, Func Offset: 0x278
	// Line 2878, Address: 0x122420, Func Offset: 0x290
	// Line 2879, Address: 0x122450, Func Offset: 0x2c0
	// Line 2882, Address: 0x122458, Func Offset: 0x2c8
	// Line 2903, Address: 0x122460, Func Offset: 0x2d0
	// Line 2905, Address: 0x1224c0, Func Offset: 0x330
	// Line 2906, Address: 0x1224d4, Func Offset: 0x344
	// Line 2907, Address: 0x1224e4, Func Offset: 0x354
	// Line 2914, Address: 0x1224f4, Func Offset: 0x364
	// Line 2916, Address: 0x12251c, Func Offset: 0x38c
	// Line 2917, Address: 0x12254c, Func Offset: 0x3bc
	// Line 2918, Address: 0x122560, Func Offset: 0x3d0
	// Line 2919, Address: 0x122574, Func Offset: 0x3e4
	// Line 2922, Address: 0x122584, Func Offset: 0x3f4
	// Line 2924, Address: 0x1226a4, Func Offset: 0x514
	// Line 2925, Address: 0x1226b0, Func Offset: 0x520
	// Line 2929, Address: 0x1226b8, Func Offset: 0x528
	// Line 2930, Address: 0x1226e4, Func Offset: 0x554
	// Line 2931, Address: 0x1226f8, Func Offset: 0x568
	// Line 2932, Address: 0x12270c, Func Offset: 0x57c
	// Line 2935, Address: 0x12271c, Func Offset: 0x58c
	// Line 2937, Address: 0x12283c, Func Offset: 0x6ac
	// Line 2938, Address: 0x122848, Func Offset: 0x6b8
	// Line 2947, Address: 0x122850, Func Offset: 0x6c0
	// Line 2948, Address: 0x122864, Func Offset: 0x6d4
	// Line 2949, Address: 0x122878, Func Offset: 0x6e8
	// Line 2950, Address: 0x122888, Func Offset: 0x6f8
	// Line 2951, Address: 0x122898, Func Offset: 0x708
	// Line 2953, Address: 0x1228a8, Func Offset: 0x718
	// Line 2959, Address: 0x1228b0, Func Offset: 0x720
	// Line 2964, Address: 0x1228d0, Func Offset: 0x740
	// Line 2970, Address: 0x1228e8, Func Offset: 0x758
	// Line 2971, Address: 0x122904, Func Offset: 0x774
	// Line 2981, Address: 0x122998, Func Offset: 0x808
	// Line 2983, Address: 0x1229c0, Func Offset: 0x830
	// Line 2984, Address: 0x1229d4, Func Offset: 0x844
	// Line 2985, Address: 0x1229e4, Func Offset: 0x854
	// Line 2987, Address: 0x1229f4, Func Offset: 0x864
	// Line 2988, Address: 0x122a18, Func Offset: 0x888
	// Line 2991, Address: 0x122a28, Func Offset: 0x898
	// Line 2993, Address: 0x122a30, Func Offset: 0x8a0
	// Line 3000, Address: 0x122ab0, Func Offset: 0x920
	// Line 3002, Address: 0x122ad4, Func Offset: 0x944
	// Line 3003, Address: 0x122ae8, Func Offset: 0x958
	// Line 3004, Address: 0x122b00, Func Offset: 0x970
	// Line 3006, Address: 0x122b18, Func Offset: 0x988
	// Line 3007, Address: 0x122b3c, Func Offset: 0x9ac
	// Line 3010, Address: 0x122b4c, Func Offset: 0x9bc
	// Line 3012, Address: 0x122b54, Func Offset: 0x9c4
	// Line 3019, Address: 0x122bd8, Func Offset: 0xa48
	// Line 3021, Address: 0x122c04, Func Offset: 0xa74
	// Line 3022, Address: 0x122c18, Func Offset: 0xa88
	// Line 3023, Address: 0x122c2c, Func Offset: 0xa9c
	// Line 3025, Address: 0x122c44, Func Offset: 0xab4
	// Line 3026, Address: 0x122c68, Func Offset: 0xad8
	// Line 3029, Address: 0x122c78, Func Offset: 0xae8
	// Line 3036, Address: 0x122c80, Func Offset: 0xaf0
	// Line 3037, Address: 0x122cb4, Func Offset: 0xb24
	// Line 3043, Address: 0x122d28, Func Offset: 0xb98
	// Line 3045, Address: 0x122d4c, Func Offset: 0xbbc
	// Line 3046, Address: 0x122d60, Func Offset: 0xbd0
	// Line 3047, Address: 0x122d74, Func Offset: 0xbe4
	// Line 3049, Address: 0x122d88, Func Offset: 0xbf8
	// Line 3050, Address: 0x122db0, Func Offset: 0xc20
	// Line 3053, Address: 0x122dc4, Func Offset: 0xc34
	// Line 3061, Address: 0x122dcc, Func Offset: 0xc3c
	// Line 3068, Address: 0x122dec, Func Offset: 0xc5c
	// Line 3069, Address: 0x122df8, Func Offset: 0xc68
	// Line 3101, Address: 0x122e18, Func Offset: 0xc88
	// Line 3108, Address: 0x122e8c, Func Offset: 0xcfc
	// Line 3110, Address: 0x122eb0, Func Offset: 0xd20
	// Line 3111, Address: 0x122ec4, Func Offset: 0xd34
	// Line 3112, Address: 0x122ed8, Func Offset: 0xd48
	// Line 3114, Address: 0x122eec, Func Offset: 0xd5c
	// Line 3117, Address: 0x122f00, Func Offset: 0xd70
	// Line 3125, Address: 0x122f08, Func Offset: 0xd78
	// Line 3133, Address: 0x122f34, Func Offset: 0xda4
	// Line 3138, Address: 0x122f74, Func Offset: 0xde4
	// Line 3139, Address: 0x122f80, Func Offset: 0xdf0
	// Line 3141, Address: 0x122f88, Func Offset: 0xdf8
	// Line 3144, Address: 0x122f9c, Func Offset: 0xe0c
	// Line 3150, Address: 0x122fb4, Func Offset: 0xe24
	// Line 3161, Address: 0x122fd0, Func Offset: 0xe40
	// Line 3169, Address: 0x123058, Func Offset: 0xec8
	// Line 3171, Address: 0x123080, Func Offset: 0xef0
	// Line 3172, Address: 0x123094, Func Offset: 0xf04
	// Line 3173, Address: 0x1230a8, Func Offset: 0xf18
	// Line 3175, Address: 0x1230bc, Func Offset: 0xf2c
	// Line 3178, Address: 0x1230cc, Func Offset: 0xf3c
	// Line 3185, Address: 0x1230d4, Func Offset: 0xf44
	// Line 3186, Address: 0x123108, Func Offset: 0xf78
	// Line 3193, Address: 0x123170, Func Offset: 0xfe0
	// Line 3195, Address: 0x12319c, Func Offset: 0x100c
	// Line 3196, Address: 0x1231b0, Func Offset: 0x1020
	// Line 3197, Address: 0x1231c0, Func Offset: 0x1030
	// Line 3199, Address: 0x1231d4, Func Offset: 0x1044
	// Line 3200, Address: 0x1231fc, Func Offset: 0x106c
	// Line 3203, Address: 0x123210, Func Offset: 0x1080
	// Line 3211, Address: 0x123218, Func Offset: 0x1088
	// Line 3219, Address: 0x123244, Func Offset: 0x10b4
	// Line 3224, Address: 0x123284, Func Offset: 0x10f4
	// Line 3225, Address: 0x123290, Func Offset: 0x1100
	// Line 3227, Address: 0x123298, Func Offset: 0x1108
	// Line 3230, Address: 0x1232ac, Func Offset: 0x111c
	// Line 3237, Address: 0x1232bc, Func Offset: 0x112c
	// Line 3248, Address: 0x1232d8, Func Offset: 0x1148
	// Line 3256, Address: 0x12335c, Func Offset: 0x11cc
	// Line 3258, Address: 0x123384, Func Offset: 0x11f4
	// Line 3259, Address: 0x123398, Func Offset: 0x1208
	// Line 3260, Address: 0x1233a8, Func Offset: 0x1218
	// Line 3262, Address: 0x1233bc, Func Offset: 0x122c
	// Line 3265, Address: 0x1233cc, Func Offset: 0x123c
	// Line 3272, Address: 0x1233d4, Func Offset: 0x1244
	// Line 3273, Address: 0x123408, Func Offset: 0x1278
	// Line 3280, Address: 0x12347c, Func Offset: 0x12ec
	// Line 3282, Address: 0x1234a8, Func Offset: 0x1318
	// Line 3283, Address: 0x1234bc, Func Offset: 0x132c
	// Line 3284, Address: 0x1234d4, Func Offset: 0x1344
	// Line 3286, Address: 0x1234e8, Func Offset: 0x1358
	// Line 3287, Address: 0x123510, Func Offset: 0x1380
	// Line 3290, Address: 0x123524, Func Offset: 0x1394
	// Line 3298, Address: 0x12352c, Func Offset: 0x139c
	// Line 3299, Address: 0x12354c, Func Offset: 0x13bc
	// Line 3300, Address: 0x123564, Func Offset: 0x13d4
	// Line 3301, Address: 0x123578, Func Offset: 0x13e8
	// Line 3302, Address: 0x123588, Func Offset: 0x13f8
	// Line 3304, Address: 0x123598, Func Offset: 0x1408
	// Line 3307, Address: 0x1235a0, Func Offset: 0x1410
	// Line 3308, Address: 0x1235c0, Func Offset: 0x1430
	// Line 3309, Address: 0x1235d8, Func Offset: 0x1448
	// Line 3310, Address: 0x1235ec, Func Offset: 0x145c
	// Line 3311, Address: 0x123600, Func Offset: 0x1470
	// Line 3313, Address: 0x123618, Func Offset: 0x1488
	// Line 3322, Address: 0x123620, Func Offset: 0x1490
	// Line 3323, Address: 0x12362c, Func Offset: 0x149c
	// Line 3324, Address: 0x123638, Func Offset: 0x14a8
	// Line 3326, Address: 0x123650, Func Offset: 0x14c0
	// Line 3327, Address: 0x123664, Func Offset: 0x14d4
	// Line 3328, Address: 0x123678, Func Offset: 0x14e8
	// Line 3330, Address: 0x12368c, Func Offset: 0x14fc
	// Line 3342, Address: 0x123694, Func Offset: 0x1504
	// Line 3344, Address: 0x1236a8, Func Offset: 0x1518
	// Line 3345, Address: 0x1236bc, Func Offset: 0x152c
	// Line 3346, Address: 0x1236d4, Func Offset: 0x1544
	// Line 3348, Address: 0x1236ec, Func Offset: 0x155c
	// Line 3354, Address: 0x1236f4, Func Offset: 0x1564
	// Line 3355, Address: 0x123720, Func Offset: 0x1590
	// Line 3356, Address: 0x123734, Func Offset: 0x15a4
	// Line 3357, Address: 0x123748, Func Offset: 0x15b8
	// Line 3359, Address: 0x12375c, Func Offset: 0x15cc
	// Line 3365, Address: 0x123764, Func Offset: 0x15d4
	// Line 3366, Address: 0x123780, Func Offset: 0x15f0
	// Line 3367, Address: 0x123790, Func Offset: 0x1600
	// Line 3368, Address: 0x1237a4, Func Offset: 0x1614
	// Line 3374, Address: 0x1237b4, Func Offset: 0x1624
	// Line 3375, Address: 0x1237bc, Func Offset: 0x162c
	// Line 3376, Address: 0x1237d4, Func Offset: 0x1644
	// Line 3382, Address: 0x1237e4, Func Offset: 0x1654
	// Line 3388, Address: 0x1237ec, Func Offset: 0x165c
	// Line 3389, Address: 0x1237f8, Func Offset: 0x1668
	// Line 3393, Address: 0x12380c, Func Offset: 0x167c
	// Line 3394, Address: 0x123840, Func Offset: 0x16b0
	// Line 3398, Address: 0x12384c, Func Offset: 0x16bc
	// Line 3399, Address: 0x123864, Func Offset: 0x16d4
	// Line 3400, Address: 0x123878, Func Offset: 0x16e8
	// Line 3401, Address: 0x12388c, Func Offset: 0x16fc
	// Line 3403, Address: 0x1238a0, Func Offset: 0x1710
	// Line 3409, Address: 0x1238a8, Func Offset: 0x1718
	// Line 3410, Address: 0x1238c0, Func Offset: 0x1730
	// Line 3411, Address: 0x1238d4, Func Offset: 0x1744
	// Line 3412, Address: 0x1238e8, Func Offset: 0x1758
	// Line 3420, Address: 0x123900, Func Offset: 0x1770
	// Func End, Address: 0x12391c, Func Offset: 0x178c
}

// 
// Start address: 0x123920
void PlayerUpdateStatusUpper3D()
{
	PAD_3D* p3d;
	PAD_INFO* p_pre;
	PAD_INFO* p;
	shPlayerWork* w;
	// Line 3431, Address: 0x123920, Func Offset: 0
	// Line 3434, Address: 0x123938, Func Offset: 0x18
	// Line 3435, Address: 0x123940, Func Offset: 0x20
	// Line 3436, Address: 0x123948, Func Offset: 0x28
	// Line 3437, Address: 0x123950, Func Offset: 0x30
	// Line 3444, Address: 0x123958, Func Offset: 0x38
	// Line 3446, Address: 0x1239bc, Func Offset: 0x9c
	// Line 3447, Address: 0x1239d0, Func Offset: 0xb0
	// Line 3448, Address: 0x1239e4, Func Offset: 0xc4
	// Line 3449, Address: 0x1239f4, Func Offset: 0xd4
	// Line 3451, Address: 0x123a08, Func Offset: 0xe8
	// Line 3454, Address: 0x123a10, Func Offset: 0xf0
	// Line 3455, Address: 0x123a24, Func Offset: 0x104
	// Line 3456, Address: 0x123a38, Func Offset: 0x118
	// Line 3457, Address: 0x123a48, Func Offset: 0x128
	// Line 3459, Address: 0x123a5c, Func Offset: 0x13c
	// Line 3462, Address: 0x123a64, Func Offset: 0x144
	// Line 3463, Address: 0x123a78, Func Offset: 0x158
	// Line 3464, Address: 0x123a8c, Func Offset: 0x16c
	// Line 3465, Address: 0x123aa0, Func Offset: 0x180
	// Line 3467, Address: 0x123ab0, Func Offset: 0x190
	// Line 3470, Address: 0x123ab8, Func Offset: 0x198
	// Line 3471, Address: 0x123acc, Func Offset: 0x1ac
	// Line 3472, Address: 0x123ae0, Func Offset: 0x1c0
	// Line 3473, Address: 0x123af0, Func Offset: 0x1d0
	// Line 3475, Address: 0x123b04, Func Offset: 0x1e4
	// Line 3478, Address: 0x123b0c, Func Offset: 0x1ec
	// Line 3479, Address: 0x123b20, Func Offset: 0x200
	// Line 3480, Address: 0x123b34, Func Offset: 0x214
	// Line 3481, Address: 0x123b44, Func Offset: 0x224
	// Line 3483, Address: 0x123b58, Func Offset: 0x238
	// Line 3486, Address: 0x123b60, Func Offset: 0x240
	// Line 3487, Address: 0x123b74, Func Offset: 0x254
	// Line 3488, Address: 0x123b88, Func Offset: 0x268
	// Line 3490, Address: 0x123b9c, Func Offset: 0x27c
	// Line 3493, Address: 0x123ba4, Func Offset: 0x284
	// Line 3494, Address: 0x123bb8, Func Offset: 0x298
	// Line 3495, Address: 0x123bc8, Func Offset: 0x2a8
	// Line 3497, Address: 0x123bdc, Func Offset: 0x2bc
	// Line 3509, Address: 0x123be4, Func Offset: 0x2c4
	// Line 3519, Address: 0x123bf4, Func Offset: 0x2d4
	// Line 3520, Address: 0x123c08, Func Offset: 0x2e8
	// Line 3524, Address: 0x123c14, Func Offset: 0x2f4
	// Line 3525, Address: 0x123c2c, Func Offset: 0x30c
	// Line 3526, Address: 0x123c40, Func Offset: 0x320
	// Line 3527, Address: 0x123c50, Func Offset: 0x330
	// Line 3528, Address: 0x123c64, Func Offset: 0x344
	// Line 3531, Address: 0x123c78, Func Offset: 0x358
	// Line 3532, Address: 0x123c80, Func Offset: 0x360
	// Line 3534, Address: 0x123c88, Func Offset: 0x368
	// Line 3535, Address: 0x123c94, Func Offset: 0x374
	// Line 3536, Address: 0x123cd8, Func Offset: 0x3b8
	// Line 3538, Address: 0x123ce8, Func Offset: 0x3c8
	// Line 3539, Address: 0x123d2c, Func Offset: 0x40c
	// Line 3545, Address: 0x123d38, Func Offset: 0x418
	// Line 3546, Address: 0x123d64, Func Offset: 0x444
	// Line 3547, Address: 0x123d78, Func Offset: 0x458
	// Line 3548, Address: 0x123d8c, Func Offset: 0x46c
	// Line 3551, Address: 0x123d9c, Func Offset: 0x47c
	// Line 3552, Address: 0x123da8, Func Offset: 0x488
	// Line 3553, Address: 0x123db0, Func Offset: 0x490
	// Line 3554, Address: 0x123db8, Func Offset: 0x498
	// Line 3556, Address: 0x123dbc, Func Offset: 0x49c
	// Line 3563, Address: 0x123dc4, Func Offset: 0x4a4
	// Line 3564, Address: 0x123ddc, Func Offset: 0x4bc
	// Line 3565, Address: 0x123df0, Func Offset: 0x4d0
	// Line 3566, Address: 0x123e04, Func Offset: 0x4e4
	// Line 3567, Address: 0x123e18, Func Offset: 0x4f8
	// Line 3568, Address: 0x123e28, Func Offset: 0x508
	// Line 3570, Address: 0x123e38, Func Offset: 0x518
	// Line 3572, Address: 0x123e40, Func Offset: 0x520
	// Line 3625, Address: 0x123e48, Func Offset: 0x528
	// Line 3627, Address: 0x123e78, Func Offset: 0x558
	// Line 3628, Address: 0x123e90, Func Offset: 0x570
	// Line 3629, Address: 0x123ea0, Func Offset: 0x580
	// Line 3630, Address: 0x123eb0, Func Offset: 0x590
	// Line 3633, Address: 0x123ec0, Func Offset: 0x5a0
	// Line 3635, Address: 0x123ec8, Func Offset: 0x5a8
	// Line 3636, Address: 0x123edc, Func Offset: 0x5bc
	// Line 3637, Address: 0x123ef0, Func Offset: 0x5d0
	// Line 3638, Address: 0x123f00, Func Offset: 0x5e0
	// Line 3641, Address: 0x123f10, Func Offset: 0x5f0
	// Line 3643, Address: 0x123f18, Func Offset: 0x5f8
	// Line 3644, Address: 0x123f2c, Func Offset: 0x60c
	// Line 3645, Address: 0x123f40, Func Offset: 0x620
	// Line 3646, Address: 0x123f50, Func Offset: 0x630
	// Line 3649, Address: 0x123f60, Func Offset: 0x640
	// Line 3651, Address: 0x123f68, Func Offset: 0x648
	// Line 3652, Address: 0x123f7c, Func Offset: 0x65c
	// Line 3653, Address: 0x123f90, Func Offset: 0x670
	// Line 3654, Address: 0x123fa0, Func Offset: 0x680
	// Line 3657, Address: 0x123fb0, Func Offset: 0x690
	// Line 3659, Address: 0x123fb8, Func Offset: 0x698
	// Line 3660, Address: 0x123fc4, Func Offset: 0x6a4
	// Line 3661, Address: 0x123fd8, Func Offset: 0x6b8
	// Line 3662, Address: 0x123fec, Func Offset: 0x6cc
	// Line 3663, Address: 0x123ffc, Func Offset: 0x6dc
	// Line 3667, Address: 0x12400c, Func Offset: 0x6ec
	// Line 3669, Address: 0x124014, Func Offset: 0x6f4
	// Line 3670, Address: 0x124028, Func Offset: 0x708
	// Line 3671, Address: 0x12403c, Func Offset: 0x71c
	// Line 3672, Address: 0x12404c, Func Offset: 0x72c
	// Line 3673, Address: 0x12405c, Func Offset: 0x73c
	// Line 3674, Address: 0x12406c, Func Offset: 0x74c
	// Line 3677, Address: 0x12407c, Func Offset: 0x75c
	// Line 3679, Address: 0x124084, Func Offset: 0x764
	// Line 3680, Address: 0x124098, Func Offset: 0x778
	// Line 3681, Address: 0x1240ac, Func Offset: 0x78c
	// Line 3682, Address: 0x1240bc, Func Offset: 0x79c
	// Line 3685, Address: 0x1240cc, Func Offset: 0x7ac
	// Line 3687, Address: 0x1240d4, Func Offset: 0x7b4
	// Line 3688, Address: 0x1240e8, Func Offset: 0x7c8
	// Line 3689, Address: 0x1240fc, Func Offset: 0x7dc
	// Line 3690, Address: 0x12410c, Func Offset: 0x7ec
	// Line 3693, Address: 0x124120, Func Offset: 0x800
	// Line 3695, Address: 0x124128, Func Offset: 0x808
	// Line 3696, Address: 0x124140, Func Offset: 0x820
	// Line 3697, Address: 0x124154, Func Offset: 0x834
	// Line 3698, Address: 0x12416c, Func Offset: 0x84c
	// Line 3700, Address: 0x124180, Func Offset: 0x860
	// Line 3701, Address: 0x124198, Func Offset: 0x878
	// Line 3705, Address: 0x1241b0, Func Offset: 0x890
	// Line 3707, Address: 0x1241b8, Func Offset: 0x898
	// Line 3708, Address: 0x1241d0, Func Offset: 0x8b0
	// Line 3709, Address: 0x1241e4, Func Offset: 0x8c4
	// Line 3710, Address: 0x1241f4, Func Offset: 0x8d4
	// Line 3712, Address: 0x124208, Func Offset: 0x8e8
	// Line 3713, Address: 0x124220, Func Offset: 0x900
	// Line 3718, Address: 0x124230, Func Offset: 0x910
	// Line 3720, Address: 0x124238, Func Offset: 0x918
	// Line 3721, Address: 0x12424c, Func Offset: 0x92c
	// Line 3722, Address: 0x124260, Func Offset: 0x940
	// Line 3723, Address: 0x124274, Func Offset: 0x954
	// Line 3725, Address: 0x124288, Func Offset: 0x968
	// Line 3726, Address: 0x1242a0, Func Offset: 0x980
	// Line 3730, Address: 0x1242b0, Func Offset: 0x990
	// Line 3732, Address: 0x1242b8, Func Offset: 0x998
	// Line 3733, Address: 0x1242d0, Func Offset: 0x9b0
	// Line 3734, Address: 0x1242e4, Func Offset: 0x9c4
	// Line 3735, Address: 0x1242f4, Func Offset: 0x9d4
	// Line 3737, Address: 0x124308, Func Offset: 0x9e8
	// Line 3738, Address: 0x124320, Func Offset: 0xa00
	// Line 3742, Address: 0x124330, Func Offset: 0xa10
	// Line 3744, Address: 0x124338, Func Offset: 0xa18
	// Line 3745, Address: 0x12434c, Func Offset: 0xa2c
	// Line 3746, Address: 0x124360, Func Offset: 0xa40
	// Line 3747, Address: 0x124374, Func Offset: 0xa54
	// Line 3749, Address: 0x124388, Func Offset: 0xa68
	// Line 3750, Address: 0x1243a0, Func Offset: 0xa80
	// Line 3754, Address: 0x1243b4, Func Offset: 0xa94
	// Line 3756, Address: 0x1243bc, Func Offset: 0xa9c
	// Line 3757, Address: 0x1243d0, Func Offset: 0xab0
	// Line 3758, Address: 0x1243e4, Func Offset: 0xac4
	// Line 3759, Address: 0x1243f8, Func Offset: 0xad8
	// Line 3761, Address: 0x12440c, Func Offset: 0xaec
	// Line 3762, Address: 0x124424, Func Offset: 0xb04
	// Line 3766, Address: 0x124438, Func Offset: 0xb18
	// Line 3768, Address: 0x124440, Func Offset: 0xb20
	// Line 3769, Address: 0x12445c, Func Offset: 0xb3c
	// Line 3770, Address: 0x124470, Func Offset: 0xb50
	// Line 3771, Address: 0x124488, Func Offset: 0xb68
	// Line 3773, Address: 0x124498, Func Offset: 0xb78
	// Line 3774, Address: 0x1244b0, Func Offset: 0xb90
	// Line 3778, Address: 0x1244c4, Func Offset: 0xba4
	// Line 3780, Address: 0x1244cc, Func Offset: 0xbac
	// Line 3781, Address: 0x1244e0, Func Offset: 0xbc0
	// Line 3782, Address: 0x1244f4, Func Offset: 0xbd4
	// Line 3783, Address: 0x12450c, Func Offset: 0xbec
	// Line 3785, Address: 0x124524, Func Offset: 0xc04
	// Line 3786, Address: 0x12453c, Func Offset: 0xc1c
	// Line 3790, Address: 0x124550, Func Offset: 0xc30
	// Line 3792, Address: 0x124558, Func Offset: 0xc38
	// Line 3793, Address: 0x124574, Func Offset: 0xc54
	// Line 3794, Address: 0x124588, Func Offset: 0xc68
	// Line 3795, Address: 0x12459c, Func Offset: 0xc7c
	// Line 3797, Address: 0x1245b0, Func Offset: 0xc90
	// Line 3798, Address: 0x1245c8, Func Offset: 0xca8
	// Line 3802, Address: 0x1245dc, Func Offset: 0xcbc
	// Line 3804, Address: 0x1245e4, Func Offset: 0xcc4
	// Line 3805, Address: 0x1245f8, Func Offset: 0xcd8
	// Line 3806, Address: 0x12460c, Func Offset: 0xcec
	// Line 3808, Address: 0x124620, Func Offset: 0xd00
	// Line 3810, Address: 0x124628, Func Offset: 0xd08
	// Line 3811, Address: 0x12463c, Func Offset: 0xd1c
	// Line 3812, Address: 0x124650, Func Offset: 0xd30
	// Line 3814, Address: 0x124664, Func Offset: 0xd44
	// Line 3816, Address: 0x12466c, Func Offset: 0xd4c
	// Line 3817, Address: 0x124680, Func Offset: 0xd60
	// Line 3818, Address: 0x124690, Func Offset: 0xd70
	// Line 3832, Address: 0x1246a8, Func Offset: 0xd88
	// Func End, Address: 0x1246c8, Func Offset: 0xda8
}

// 
// Start address: 0x1246d0
void SubCharacter::PlayerUpdatePosition3D()
{
	float cos_z;
	float cos_x;
	void(*upper_func)(SubCharacter*);
	void(*lower_func)(SubCharacter*);
	// Line 3846, Address: 0x1246d0, Func Offset: 0
	// Line 3895, Address: 0x1246e4, Func Offset: 0x14
	// Line 3896, Address: 0x1246e8, Func Offset: 0x18
	// Line 3899, Address: 0x1246ec, Func Offset: 0x1c
	// Line 3901, Address: 0x12470c, Func Offset: 0x3c
	// Line 3903, Address: 0x124718, Func Offset: 0x48
	// Line 3905, Address: 0x124738, Func Offset: 0x68
	// Line 3916, Address: 0x124744, Func Offset: 0x74
	// Line 3918, Address: 0x124860, Func Offset: 0x190
	// Line 3920, Address: 0x12497c, Func Offset: 0x2ac
	// Line 3927, Address: 0x12498c, Func Offset: 0x2bc
	// Line 3928, Address: 0x1249a0, Func Offset: 0x2d0
	// Line 3930, Address: 0x1249b4, Func Offset: 0x2e4
	// Line 3931, Address: 0x1249d4, Func Offset: 0x304
	// Line 3935, Address: 0x1249f4, Func Offset: 0x324
	// Line 3936, Address: 0x124a04, Func Offset: 0x334
	// Line 3937, Address: 0x124a14, Func Offset: 0x344
	// Line 3940, Address: 0x124a24, Func Offset: 0x354
	// Line 3941, Address: 0x124a40, Func Offset: 0x370
	// Line 3942, Address: 0x124a5c, Func Offset: 0x38c
	// Line 3971, Address: 0x124a78, Func Offset: 0x3a8
	// Func End, Address: 0x124a90, Func Offset: 0x3c0
}

// 
// Start address: 0x124a90
void PlayerUpdateStatusLower2nd3D()
{
	shPlayerWork* w;
	// Line 3983, Address: 0x124a90, Func Offset: 0
	// Line 3984, Address: 0x124a9c, Func Offset: 0xc
	// Line 3987, Address: 0x124aa4, Func Offset: 0x14
	// Line 3989, Address: 0x124ae4, Func Offset: 0x54
	// Line 3990, Address: 0x124af8, Func Offset: 0x68
	// Line 3991, Address: 0x124b0c, Func Offset: 0x7c
	// Line 3992, Address: 0x124b1c, Func Offset: 0x8c
	// Line 3995, Address: 0x124b2c, Func Offset: 0x9c
	// Line 3997, Address: 0x124b34, Func Offset: 0xa4
	// Line 3998, Address: 0x124b48, Func Offset: 0xb8
	// Line 3999, Address: 0x124b5c, Func Offset: 0xcc
	// Line 4000, Address: 0x124b6c, Func Offset: 0xdc
	// Line 4001, Address: 0x124b7c, Func Offset: 0xec
	// Line 4004, Address: 0x124b8c, Func Offset: 0xfc
	// Line 4006, Address: 0x124b94, Func Offset: 0x104
	// Line 4007, Address: 0x124ba8, Func Offset: 0x118
	// Line 4009, Address: 0x124bd0, Func Offset: 0x140
	// Line 4010, Address: 0x124be0, Func Offset: 0x150
	// Line 4012, Address: 0x124bf0, Func Offset: 0x160
	// Line 4016, Address: 0x124bf8, Func Offset: 0x168
	// Line 4017, Address: 0x124c0c, Func Offset: 0x17c
	// Line 4018, Address: 0x124c20, Func Offset: 0x190
	// Line 4019, Address: 0x124c30, Func Offset: 0x1a0
	// Line 4022, Address: 0x124c40, Func Offset: 0x1b0
	// Line 4023, Address: 0x124c50, Func Offset: 0x1c0
	// Line 4024, Address: 0x124c60, Func Offset: 0x1d0
	// Line 4025, Address: 0x124c70, Func Offset: 0x1e0
	// Line 4026, Address: 0x124c80, Func Offset: 0x1f0
	// Line 4027, Address: 0x124c90, Func Offset: 0x200
	// Line 4028, Address: 0x124ca0, Func Offset: 0x210
	// Line 4029, Address: 0x124cb0, Func Offset: 0x220
	// Line 4030, Address: 0x124cc0, Func Offset: 0x230
	// Line 4045, Address: 0x124cd0, Func Offset: 0x240
	// Line 4051, Address: 0x124d1c, Func Offset: 0x28c
	// Line 4052, Address: 0x124d24, Func Offset: 0x294
	// Line 4054, Address: 0x124d2c, Func Offset: 0x29c
	// Line 4058, Address: 0x124d30, Func Offset: 0x2a0
	// Func End, Address: 0x124d44, Func Offset: 0x2b4
}

// 
// Start address: 0x124d50
void SubCharacter::PlayerCheckAttack3D()
{
	PAD_INFO* pad;
	shPlayerWork* w;
	_AnimeInfo* a_info;
	// Line 4086, Address: 0x124d50, Func Offset: 0
	// Line 4087, Address: 0x124d6c, Func Offset: 0x1c
	// Line 4088, Address: 0x124d80, Func Offset: 0x30
	// Line 4089, Address: 0x124d8c, Func Offset: 0x3c
	// Line 4093, Address: 0x124d94, Func Offset: 0x44
	// Line 4095, Address: 0x124dc8, Func Offset: 0x78
	// Line 4096, Address: 0x124ddc, Func Offset: 0x8c
	// Line 4101, Address: 0x124de4, Func Offset: 0x94
	// Line 4105, Address: 0x124e18, Func Offset: 0xc8
	// Line 4106, Address: 0x124e28, Func Offset: 0xd8
	// Line 4107, Address: 0x124e3c, Func Offset: 0xec
	// Line 4108, Address: 0x124e44, Func Offset: 0xf4
	// Line 4113, Address: 0x124e58, Func Offset: 0x108
	// Line 4114, Address: 0x124e6c, Func Offset: 0x11c
	// Line 4115, Address: 0x124e78, Func Offset: 0x128
	// Line 4116, Address: 0x124e80, Func Offset: 0x130
	// Line 4119, Address: 0x124ebc, Func Offset: 0x16c
	// Line 4123, Address: 0x124ec8, Func Offset: 0x178
	// Line 4124, Address: 0x124edc, Func Offset: 0x18c
	// Line 4125, Address: 0x124eec, Func Offset: 0x19c
	// Line 4126, Address: 0x124efc, Func Offset: 0x1ac
	// Line 4128, Address: 0x124f0c, Func Offset: 0x1bc
	// Line 4129, Address: 0x124f1c, Func Offset: 0x1cc
	// Line 4130, Address: 0x124f2c, Func Offset: 0x1dc
	// Line 4133, Address: 0x124f40, Func Offset: 0x1f0
	// Line 4135, Address: 0x124f44, Func Offset: 0x1f4
	// Line 4136, Address: 0x124f4c, Func Offset: 0x1fc
	// Line 4138, Address: 0x124f50, Func Offset: 0x200
	// Line 4140, Address: 0x124f58, Func Offset: 0x208
	// Line 4142, Address: 0x124f6c, Func Offset: 0x21c
	// Line 4152, Address: 0x124f78, Func Offset: 0x228
	// Line 4154, Address: 0x124f84, Func Offset: 0x234
	// Line 4158, Address: 0x124fb4, Func Offset: 0x264
	// Line 4163, Address: 0x124fcc, Func Offset: 0x27c
	// Line 4164, Address: 0x124fd0, Func Offset: 0x280
	// Line 4165, Address: 0x124fd8, Func Offset: 0x288
	// Line 4168, Address: 0x124fe0, Func Offset: 0x290
	// Line 4170, Address: 0x12500c, Func Offset: 0x2bc
	// Line 4172, Address: 0x125014, Func Offset: 0x2c4
	// Line 4173, Address: 0x12501c, Func Offset: 0x2cc
	// Line 4174, Address: 0x125024, Func Offset: 0x2d4
	// Line 4175, Address: 0x12502c, Func Offset: 0x2dc
	// Line 4176, Address: 0x125034, Func Offset: 0x2e4
	// Line 4181, Address: 0x12503c, Func Offset: 0x2ec
	// Line 4182, Address: 0x125044, Func Offset: 0x2f4
	// Line 4183, Address: 0x125050, Func Offset: 0x300
	// Line 4187, Address: 0x125058, Func Offset: 0x308
	// Line 4195, Address: 0x12509c, Func Offset: 0x34c
	// Line 4196, Address: 0x1250ac, Func Offset: 0x35c
	// Line 4201, Address: 0x1250b4, Func Offset: 0x364
	// Line 4204, Address: 0x1250c4, Func Offset: 0x374
	// Line 4208, Address: 0x1250cc, Func Offset: 0x37c
	// Line 4213, Address: 0x1250e4, Func Offset: 0x394
	// Line 4214, Address: 0x1250ec, Func Offset: 0x39c
	// Line 4215, Address: 0x1250f4, Func Offset: 0x3a4
	// Line 4216, Address: 0x1250fc, Func Offset: 0x3ac
	// Line 4222, Address: 0x125104, Func Offset: 0x3b4
	// Line 4228, Address: 0x125144, Func Offset: 0x3f4
	// Line 4229, Address: 0x125154, Func Offset: 0x404
	// Line 4230, Address: 0x125164, Func Offset: 0x414
	// Line 4231, Address: 0x125174, Func Offset: 0x424
	// Line 4232, Address: 0x125184, Func Offset: 0x434
	// Line 4233, Address: 0x125194, Func Offset: 0x444
	// Line 4235, Address: 0x12519c, Func Offset: 0x44c
	// Line 4239, Address: 0x1251ac, Func Offset: 0x45c
	// Line 4242, Address: 0x1251b4, Func Offset: 0x464
	// Line 4247, Address: 0x1251cc, Func Offset: 0x47c
	// Line 4248, Address: 0x1251d4, Func Offset: 0x484
	// Line 4249, Address: 0x1251dc, Func Offset: 0x48c
	// Line 4250, Address: 0x1251e4, Func Offset: 0x494
	// Line 4253, Address: 0x1251ec, Func Offset: 0x49c
	// Line 4255, Address: 0x1251fc, Func Offset: 0x4ac
	// Line 4258, Address: 0x125204, Func Offset: 0x4b4
	// Line 4263, Address: 0x12521c, Func Offset: 0x4cc
	// Line 4264, Address: 0x125228, Func Offset: 0x4d8
	// Line 4265, Address: 0x125230, Func Offset: 0x4e0
	// Line 4266, Address: 0x125238, Func Offset: 0x4e8
	// Line 4268, Address: 0x125240, Func Offset: 0x4f0
	// Line 4269, Address: 0x125248, Func Offset: 0x4f8
	// Line 4270, Address: 0x125250, Func Offset: 0x500
	// Line 4271, Address: 0x12525c, Func Offset: 0x50c
	// Line 4272, Address: 0x125264, Func Offset: 0x514
	// Line 4273, Address: 0x12526c, Func Offset: 0x51c
	// Line 4280, Address: 0x125274, Func Offset: 0x524
	// Line 4283, Address: 0x12527c, Func Offset: 0x52c
	// Line 4284, Address: 0x125288, Func Offset: 0x538
	// Line 4285, Address: 0x125290, Func Offset: 0x540
	// Line 4286, Address: 0x125298, Func Offset: 0x548
	// Line 4300, Address: 0x1252a0, Func Offset: 0x550
	// Line 4301, Address: 0x1252b4, Func Offset: 0x564
	// Line 4302, Address: 0x1252bc, Func Offset: 0x56c
	// Line 4304, Address: 0x1252c4, Func Offset: 0x574
	// Line 4305, Address: 0x1252d8, Func Offset: 0x588
	// Line 4306, Address: 0x1252e0, Func Offset: 0x590
	// Line 4312, Address: 0x1252e8, Func Offset: 0x598
	// Line 4325, Address: 0x12531c, Func Offset: 0x5cc
	// Line 4331, Address: 0x125330, Func Offset: 0x5e0
	// Line 4332, Address: 0x125340, Func Offset: 0x5f0
	// Line 4333, Address: 0x125350, Func Offset: 0x600
	// Line 4334, Address: 0x125360, Func Offset: 0x610
	// Line 4335, Address: 0x125370, Func Offset: 0x620
	// Line 4337, Address: 0x125380, Func Offset: 0x630
	// Line 4340, Address: 0x125388, Func Offset: 0x638
	// Line 4345, Address: 0x125398, Func Offset: 0x648
	// Line 4347, Address: 0x1253a0, Func Offset: 0x650
	// Line 4348, Address: 0x1253b4, Func Offset: 0x664
	// Line 4349, Address: 0x1253bc, Func Offset: 0x66c
	// Line 4351, Address: 0x1253c4, Func Offset: 0x674
	// Line 4352, Address: 0x1253d8, Func Offset: 0x688
	// Line 4353, Address: 0x1253e0, Func Offset: 0x690
	// Line 4355, Address: 0x1253e8, Func Offset: 0x698
	// Line 4356, Address: 0x1253fc, Func Offset: 0x6ac
	// Line 4357, Address: 0x125404, Func Offset: 0x6b4
	// Line 4361, Address: 0x12540c, Func Offset: 0x6bc
	// Line 4366, Address: 0x12544c, Func Offset: 0x6fc
	// Line 4367, Address: 0x125460, Func Offset: 0x710
	// Line 4368, Address: 0x125470, Func Offset: 0x720
	// Line 4369, Address: 0x125480, Func Offset: 0x730
	// Line 4370, Address: 0x125490, Func Offset: 0x740
	// Line 4371, Address: 0x1254a0, Func Offset: 0x750
	// Line 4373, Address: 0x1254b0, Func Offset: 0x760
	// Line 4376, Address: 0x1254b8, Func Offset: 0x768
	// Line 4380, Address: 0x1254cc, Func Offset: 0x77c
	// Line 4382, Address: 0x1254d4, Func Offset: 0x784
	// Line 4383, Address: 0x1254e8, Func Offset: 0x798
	// Line 4384, Address: 0x1254f0, Func Offset: 0x7a0
	// Line 4386, Address: 0x1254f8, Func Offset: 0x7a8
	// Line 4387, Address: 0x12550c, Func Offset: 0x7bc
	// Line 4388, Address: 0x125514, Func Offset: 0x7c4
	// Line 4392, Address: 0x12551c, Func Offset: 0x7cc
	// Line 4398, Address: 0x12555c, Func Offset: 0x80c
	// Line 4399, Address: 0x125570, Func Offset: 0x820
	// Line 4400, Address: 0x125584, Func Offset: 0x834
	// Line 4401, Address: 0x125594, Func Offset: 0x844
	// Line 4402, Address: 0x1255a4, Func Offset: 0x854
	// Line 4403, Address: 0x1255b8, Func Offset: 0x868
	// Line 4405, Address: 0x1255d0, Func Offset: 0x880
	// Line 4408, Address: 0x1255d8, Func Offset: 0x888
	// Line 4411, Address: 0x1255f0, Func Offset: 0x8a0
	// Line 4413, Address: 0x1255f8, Func Offset: 0x8a8
	// Line 4414, Address: 0x12560c, Func Offset: 0x8bc
	// Line 4415, Address: 0x125614, Func Offset: 0x8c4
	// Line 4417, Address: 0x12561c, Func Offset: 0x8cc
	// Line 4418, Address: 0x125630, Func Offset: 0x8e0
	// Line 4419, Address: 0x125638, Func Offset: 0x8e8
	// Line 4422, Address: 0x125640, Func Offset: 0x8f0
	// Line 4427, Address: 0x125658, Func Offset: 0x908
	// Line 4429, Address: 0x125680, Func Offset: 0x930
	// Line 4430, Address: 0x125694, Func Offset: 0x944
	// Line 4434, Address: 0x1256ac, Func Offset: 0x95c
	// Line 4436, Address: 0x1256e8, Func Offset: 0x998
	// Line 4440, Address: 0x1256ec, Func Offset: 0x99c
	// Func End, Address: 0x12570c, Func Offset: 0x9bc
}

// 
// Start address: 0x125710
void SubCharacter::PlayerCheckControl3D()
{
	// Line 4453, Address: 0x125710, Func Offset: 0
	// Line 4454, Address: 0x12571c, Func Offset: 0xc
	// Line 4455, Address: 0x125728, Func Offset: 0x18
	// Line 4456, Address: 0x125734, Func Offset: 0x24
	// Line 4457, Address: 0x125740, Func Offset: 0x30
	// Line 4458, Address: 0x12574c, Func Offset: 0x3c
	// Line 4463, Address: 0x125758, Func Offset: 0x48
	// Func End, Address: 0x125768, Func Offset: 0x58
}

