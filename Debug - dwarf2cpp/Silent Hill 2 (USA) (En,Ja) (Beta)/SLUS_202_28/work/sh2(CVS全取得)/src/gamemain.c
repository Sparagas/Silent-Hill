typedef struct Item_List;
typedef struct SubCharacter;
typedef struct Model_List;
typedef struct Enemy_List;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _AnimeInfo;
typedef struct MariaAppearPoint;
typedef struct _anon0;
typedef struct Stage_Data;
typedef struct shSkelton;
typedef struct _SH2_SYS;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shBattleFight;
typedef struct _anon1;
typedef struct Event_List;
typedef struct shBattleShot;
typedef struct PAD_3D;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct PAD_2D;
typedef struct Pad_KeyConfig;
typedef struct _anon2;
typedef struct PAD_INFO;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon3;
typedef struct _CL_VHIT_RESULT;
typedef union _anon4;
typedef struct shPlayerWork;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _anon5;

typedef int(*type_1)();
typedef void(*type_6)();
typedef void(*type_9)(SubCharacter*);
typedef void(*type_10)(SubCharacter*);

typedef char type_0[4];
typedef char type_2[4];
typedef char type_3[4];
typedef float type_4[80];
typedef char type_5[4];
typedef char type_7[4];
typedef float type_8[4][2];
typedef float type_11[4];
typedef unsigned char type_12[4];
typedef unsigned int type_13[8];
typedef MariaAppearPoint type_14[91];
typedef unsigned char type_15[2];
typedef float type_16[4];
typedef unsigned int type_17[9];
typedef float type_18[4];
typedef float type_19[4][4];
typedef PAD_INFO type_20[10];
typedef float type_21[2];
typedef unsigned char type_22[4];
typedef int type_23[6];
typedef unsigned char type_24[4];
typedef char type_25[0];
typedef unsigned char type_26[2];
typedef unsigned int type_27[255];
typedef unsigned char type_28[2];
typedef unsigned int type_29[32];
typedef shAttackInfo type_30[66];
typedef unsigned char type_31[4];

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
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
	_anon1 pos;
	_anon1 rot;
	_anon1 pos_spd;
	_anon1 rot_spd;
	_anon2 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon1 b_pos;
	_anon1 b_rot;
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
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

struct MariaAppearPoint
{
	short room_name_prev;
	short room_name_now;
	int active_type;
	float pos[4];
};

struct _anon0
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon2 src_m;
	_anon1 src_t;
	_anon2 des_m;
	_anon1 des_t;
	_anon1 axis;
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

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
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

struct _anon1
{
	float x;
	float y;
	float z;
	float w;
};

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
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

struct _anon2
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
	_anon3 hit_check;
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

union _anon3
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon4 hobj;
};

union _anon4
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon1 dist_rot;
	_anon1 dist_pos;
	_anon1 pos;
	_anon1 rot;
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
	_anon1 tgt_body_angle;
	_anon1 tgt_neck_angle;
	_anon1 tgt_arms_angle;
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

struct _anon5
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

float item_size[80];
shAttackInfo sh2_attack_list[66];
MariaAppearPoint maria_apeear_point_list[91];
unsigned int pmaria_sub_status_flag[9];
char MemShare_gp_data_buf[0];
_SH2_SYS Sh2sys;
Stage_Data* stage;
shPlayerWork sh2jms;
int ev_p_step;
Pad_KeyConfig key_config;
_anon5 game_flag;

char* get_gp_data_buf_addr();
int GameMain();
int LoadBgSync(int mode, int nonblock);
int PlayableMain();

// 
// Start address: 0x20a850
char* get_gp_data_buf_addr()
{
	// Line 103, Address: 0x20a850, Func Offset: 0
	// Line 104, Address: 0x20a858, Func Offset: 0x8
	// Func End, Address: 0x20a860, Func Offset: 0x10
}

// 
// Start address: 0x20a860
int GameMain()
{
	int cnt;
	float pz;
	float px;
	int glb_crd;
	int fonton;
	int synctype;
	// Line 124, Address: 0x20a860, Func Offset: 0
	// Line 125, Address: 0x20a874, Func Offset: 0x14
	// Line 127, Address: 0x20a878, Func Offset: 0x18
	// Line 128, Address: 0x20a888, Func Offset: 0x28
	// Line 129, Address: 0x20a890, Func Offset: 0x30
	// Line 130, Address: 0x20a8a0, Func Offset: 0x40
	// Line 131, Address: 0x20a8a8, Func Offset: 0x48
	// Line 132, Address: 0x20a8b8, Func Offset: 0x58
	// Line 133, Address: 0x20a8d0, Func Offset: 0x70
	// Line 136, Address: 0x20a8d8, Func Offset: 0x78
	// Line 140, Address: 0x20a8e8, Func Offset: 0x88
	// Line 141, Address: 0x20a8ec, Func Offset: 0x8c
	// Line 142, Address: 0x20a8f4, Func Offset: 0x94
	// Line 143, Address: 0x20a8f8, Func Offset: 0x98
	// Line 147, Address: 0x20a908, Func Offset: 0xa8
	// Line 148, Address: 0x20a90c, Func Offset: 0xac
	// Line 150, Address: 0x20a910, Func Offset: 0xb0
	// Line 151, Address: 0x20a920, Func Offset: 0xc0
	// Line 154, Address: 0x20a928, Func Offset: 0xc8
	// Line 164, Address: 0x20a930, Func Offset: 0xd0
	// Line 165, Address: 0x20a958, Func Offset: 0xf8
	// Line 166, Address: 0x20a98c, Func Offset: 0x12c
	// Line 167, Address: 0x20a998, Func Offset: 0x138
	// Line 168, Address: 0x20a9a4, Func Offset: 0x144
	// Line 169, Address: 0x20a9ac, Func Offset: 0x14c
	// Line 170, Address: 0x20a9b8, Func Offset: 0x158
	// Line 172, Address: 0x20a9c0, Func Offset: 0x160
	// Line 175, Address: 0x20a9d4, Func Offset: 0x174
	// Line 178, Address: 0x20aa04, Func Offset: 0x1a4
	// Line 185, Address: 0x20aa14, Func Offset: 0x1b4
	// Line 189, Address: 0x20aa58, Func Offset: 0x1f8
	// Line 190, Address: 0x20aa68, Func Offset: 0x208
	// Line 194, Address: 0x20aaac, Func Offset: 0x24c
	// Line 195, Address: 0x20aabc, Func Offset: 0x25c
	// Line 197, Address: 0x20aac4, Func Offset: 0x264
	// Line 200, Address: 0x20aacc, Func Offset: 0x26c
	// Line 201, Address: 0x20aadc, Func Offset: 0x27c
	// Line 203, Address: 0x20aae4, Func Offset: 0x284
	// Line 206, Address: 0x20aaec, Func Offset: 0x28c
	// Line 207, Address: 0x20aafc, Func Offset: 0x29c
	// Line 209, Address: 0x20ab04, Func Offset: 0x2a4
	// Line 212, Address: 0x20ab0c, Func Offset: 0x2ac
	// Line 213, Address: 0x20ab1c, Func Offset: 0x2bc
	// Line 215, Address: 0x20ab24, Func Offset: 0x2c4
	// Line 228, Address: 0x20ab2c, Func Offset: 0x2cc
	// Line 233, Address: 0x20ab3c, Func Offset: 0x2dc
	// Line 234, Address: 0x20ab4c, Func Offset: 0x2ec
	// Line 235, Address: 0x20ab54, Func Offset: 0x2f4
	// Line 236, Address: 0x20ab60, Func Offset: 0x300
	// Line 238, Address: 0x20ab9c, Func Offset: 0x33c
	// Line 239, Address: 0x20aba0, Func Offset: 0x340
	// Line 242, Address: 0x20aba8, Func Offset: 0x348
	// Line 243, Address: 0x20abb8, Func Offset: 0x358
	// Line 250, Address: 0x20abfc, Func Offset: 0x39c
	// Line 252, Address: 0x20ac0c, Func Offset: 0x3ac
	// Line 258, Address: 0x20ac3c, Func Offset: 0x3dc
	// Line 259, Address: 0x20ac78, Func Offset: 0x418
	// Line 260, Address: 0x20ac80, Func Offset: 0x420
	// Line 262, Address: 0x20ac88, Func Offset: 0x428
	// Line 263, Address: 0x20ac90, Func Offset: 0x430
	// Line 264, Address: 0x20aca4, Func Offset: 0x444
	// Line 265, Address: 0x20ace0, Func Offset: 0x480
	// Line 266, Address: 0x20ad14, Func Offset: 0x4b4
	// Line 267, Address: 0x20ad1c, Func Offset: 0x4bc
	// Line 270, Address: 0x20ad24, Func Offset: 0x4c4
	// Line 271, Address: 0x20ad60, Func Offset: 0x500
	// Line 272, Address: 0x20ad68, Func Offset: 0x508
	// Line 274, Address: 0x20ad70, Func Offset: 0x510
	// Line 276, Address: 0x20ad9c, Func Offset: 0x53c
	// Line 277, Address: 0x20ade0, Func Offset: 0x580
	// Line 278, Address: 0x20ae24, Func Offset: 0x5c4
	// Line 280, Address: 0x20ae60, Func Offset: 0x600
	// Line 281, Address: 0x20ae94, Func Offset: 0x634
	// Line 282, Address: 0x20aebc, Func Offset: 0x65c
	// Line 290, Address: 0x20aec4, Func Offset: 0x664
	// Line 302, Address: 0x20af00, Func Offset: 0x6a0
	// Line 310, Address: 0x20af08, Func Offset: 0x6a8
	// Line 311, Address: 0x20af14, Func Offset: 0x6b4
	// Line 312, Address: 0x20af18, Func Offset: 0x6b8
	// Line 316, Address: 0x20af20, Func Offset: 0x6c0
	// Line 322, Address: 0x20af30, Func Offset: 0x6d0
	// Line 323, Address: 0x20af38, Func Offset: 0x6d8
	// Line 324, Address: 0x20af50, Func Offset: 0x6f0
	// Line 326, Address: 0x20af54, Func Offset: 0x6f4
	// Line 327, Address: 0x20af60, Func Offset: 0x700
	// Line 328, Address: 0x20af70, Func Offset: 0x710
	// Line 329, Address: 0x20af88, Func Offset: 0x728
	// Line 330, Address: 0x20afc4, Func Offset: 0x764
	// Line 331, Address: 0x20afcc, Func Offset: 0x76c
	// Line 334, Address: 0x20b010, Func Offset: 0x7b0
	// Line 339, Address: 0x20b018, Func Offset: 0x7b8
	// Line 342, Address: 0x20b028, Func Offset: 0x7c8
	// Line 343, Address: 0x20b034, Func Offset: 0x7d4
	// Line 345, Address: 0x20b038, Func Offset: 0x7d8
	// Line 346, Address: 0x20b048, Func Offset: 0x7e8
	// Line 348, Address: 0x20b074, Func Offset: 0x814
	// Line 349, Address: 0x20b0b8, Func Offset: 0x858
	// Line 350, Address: 0x20b0fc, Func Offset: 0x89c
	// Line 353, Address: 0x20b138, Func Offset: 0x8d8
	// Line 356, Address: 0x20b140, Func Offset: 0x8e0
	// Line 357, Address: 0x20b150, Func Offset: 0x8f0
	// Line 370, Address: 0x20b158, Func Offset: 0x8f8
	// Line 372, Address: 0x20b160, Func Offset: 0x900
	// Line 374, Address: 0x20b168, Func Offset: 0x908
	// Line 375, Address: 0x20b178, Func Offset: 0x918
	// Line 377, Address: 0x20b1a0, Func Offset: 0x940
	// Line 378, Address: 0x20b1b0, Func Offset: 0x950
	// Line 379, Address: 0x20b1b8, Func Offset: 0x958
	// Line 381, Address: 0x20b1c0, Func Offset: 0x960
	// Line 382, Address: 0x20b1d0, Func Offset: 0x970
	// Line 388, Address: 0x20b1d8, Func Offset: 0x978
	// Line 390, Address: 0x20b1e8, Func Offset: 0x988
	// Line 393, Address: 0x20b1f0, Func Offset: 0x990
	// Line 395, Address: 0x20b1f8, Func Offset: 0x998
	// Line 396, Address: 0x20b200, Func Offset: 0x9a0
	// Line 397, Address: 0x20b210, Func Offset: 0x9b0
	// Line 400, Address: 0x20b218, Func Offset: 0x9b8
	// Line 401, Address: 0x20b220, Func Offset: 0x9c0
	// Line 402, Address: 0x20b224, Func Offset: 0x9c4
	// Func End, Address: 0x20b240, Func Offset: 0x9e0
}

// 
// Start address: 0x20b240
int LoadBgSync(int mode, int nonblock)
{
	int loading;
	int require;
	int rest;
	int halt;
	// Line 407, Address: 0x20b240, Func Offset: 0
	// Line 413, Address: 0x20b260, Func Offset: 0x20
	// Line 414, Address: 0x20b264, Func Offset: 0x24
	// Line 415, Address: 0x20b268, Func Offset: 0x28
	// Line 417, Address: 0x20b26c, Func Offset: 0x2c
	// Line 418, Address: 0x20b280, Func Offset: 0x40
	// Line 425, Address: 0x20b2a8, Func Offset: 0x68
	// Line 428, Address: 0x20b2b0, Func Offset: 0x70
	// Line 431, Address: 0x20b2b8, Func Offset: 0x78
	// Line 432, Address: 0x20b2c0, Func Offset: 0x80
	// Line 433, Address: 0x20b2d0, Func Offset: 0x90
	// Line 434, Address: 0x20b2e8, Func Offset: 0xa8
	// Line 435, Address: 0x20b2f8, Func Offset: 0xb8
	// Line 436, Address: 0x20b2fc, Func Offset: 0xbc
	// Line 437, Address: 0x20b300, Func Offset: 0xc0
	// Line 438, Address: 0x20b304, Func Offset: 0xc4
	// Line 439, Address: 0x20b308, Func Offset: 0xc8
	// Line 442, Address: 0x20b310, Func Offset: 0xd0
	// Line 443, Address: 0x20b318, Func Offset: 0xd8
	// Line 444, Address: 0x20b324, Func Offset: 0xe4
	// Line 515, Address: 0x20b340, Func Offset: 0x100
	// Line 517, Address: 0x20b358, Func Offset: 0x118
	// Line 518, Address: 0x20b360, Func Offset: 0x120
	// Line 523, Address: 0x20b368, Func Offset: 0x128
	// Line 525, Address: 0x20b370, Func Offset: 0x130
	// Line 526, Address: 0x20b380, Func Offset: 0x140
	// Line 529, Address: 0x20b398, Func Offset: 0x158
	// Line 530, Address: 0x20b39c, Func Offset: 0x15c
	// Func End, Address: 0x20b3bc, Func Offset: 0x17c
}

// 
// Start address: 0x20b3c0
int PlayableMain()
{
	int cdstat;
	int ptype;
	int cdstat;
	int synctype;
	int halt;
	// Line 551, Address: 0x20b3c0, Func Offset: 0
	// Line 553, Address: 0x20b3d0, Func Offset: 0x10
	// Line 557, Address: 0x20b3d4, Func Offset: 0x14
	// Line 560, Address: 0x20b3dc, Func Offset: 0x1c
	// Line 562, Address: 0x20b3e4, Func Offset: 0x24
	// Line 566, Address: 0x20b414, Func Offset: 0x54
	// Line 567, Address: 0x20b41c, Func Offset: 0x5c
	// Line 568, Address: 0x20b42c, Func Offset: 0x6c
	// Line 569, Address: 0x20b444, Func Offset: 0x84
	// Line 570, Address: 0x20b44c, Func Offset: 0x8c
	// Line 571, Address: 0x20b454, Func Offset: 0x94
	// Line 573, Address: 0x20b490, Func Offset: 0xd0
	// Line 576, Address: 0x20b498, Func Offset: 0xd8
	// Line 577, Address: 0x20b4a0, Func Offset: 0xe0
	// Line 578, Address: 0x20b4b0, Func Offset: 0xf0
	// Line 582, Address: 0x20b4c8, Func Offset: 0x108
	// Line 583, Address: 0x20b4ec, Func Offset: 0x12c
	// Line 584, Address: 0x20b504, Func Offset: 0x144
	// Line 586, Address: 0x20b540, Func Offset: 0x180
	// Line 594, Address: 0x20b548, Func Offset: 0x188
	// Line 595, Address: 0x20b550, Func Offset: 0x190
	// Line 597, Address: 0x20b560, Func Offset: 0x1a0
	// Line 598, Address: 0x20b570, Func Offset: 0x1b0
	// Line 600, Address: 0x20b584, Func Offset: 0x1c4
	// Line 601, Address: 0x20b5b0, Func Offset: 0x1f0
	// Line 603, Address: 0x20b5b8, Func Offset: 0x1f8
	// Line 604, Address: 0x20b5c0, Func Offset: 0x200
	// Line 605, Address: 0x20b5c8, Func Offset: 0x208
	// Line 606, Address: 0x20b5d0, Func Offset: 0x210
	// Line 607, Address: 0x20b5e8, Func Offset: 0x228
	// Line 608, Address: 0x20b5f0, Func Offset: 0x230
	// Line 613, Address: 0x20b62c, Func Offset: 0x26c
	// Line 616, Address: 0x20b634, Func Offset: 0x274
	// Line 617, Address: 0x20b63c, Func Offset: 0x27c
	// Line 618, Address: 0x20b64c, Func Offset: 0x28c
	// Line 619, Address: 0x20b65c, Func Offset: 0x29c
	// Line 620, Address: 0x20b664, Func Offset: 0x2a4
	// Line 622, Address: 0x20b698, Func Offset: 0x2d8
	// Line 623, Address: 0x20b6c4, Func Offset: 0x304
	// Line 624, Address: 0x20b6d8, Func Offset: 0x318
	// Line 625, Address: 0x20b6e0, Func Offset: 0x320
	// Line 626, Address: 0x20b6f8, Func Offset: 0x338
	// Line 628, Address: 0x20b734, Func Offset: 0x374
	// Line 631, Address: 0x20b73c, Func Offset: 0x37c
	// Line 633, Address: 0x20b74c, Func Offset: 0x38c
	// Line 636, Address: 0x20b758, Func Offset: 0x398
	// Line 637, Address: 0x20b760, Func Offset: 0x3a0
	// Line 638, Address: 0x20b768, Func Offset: 0x3a8
	// Line 640, Address: 0x20b7a0, Func Offset: 0x3e0
	// Line 641, Address: 0x20b7ac, Func Offset: 0x3ec
	// Line 642, Address: 0x20b7b8, Func Offset: 0x3f8
	// Line 644, Address: 0x20b7c0, Func Offset: 0x400
	// Line 645, Address: 0x20b7cc, Func Offset: 0x40c
	// Line 647, Address: 0x20b7d4, Func Offset: 0x414
	// Line 648, Address: 0x20b7e0, Func Offset: 0x420
	// Line 649, Address: 0x20b7ec, Func Offset: 0x42c
	// Line 651, Address: 0x20b7f4, Func Offset: 0x434
	// Line 652, Address: 0x20b800, Func Offset: 0x440
	// Line 655, Address: 0x20b80c, Func Offset: 0x44c
	// Line 656, Address: 0x20b810, Func Offset: 0x450
	// Line 660, Address: 0x20b818, Func Offset: 0x458
	// Line 662, Address: 0x20b828, Func Offset: 0x468
	// Line 663, Address: 0x20b844, Func Offset: 0x484
	// Line 664, Address: 0x20b850, Func Offset: 0x490
	// Line 666, Address: 0x20b85c, Func Offset: 0x49c
	// Line 670, Address: 0x20b864, Func Offset: 0x4a4
	// Line 672, Address: 0x20b87c, Func Offset: 0x4bc
	// Line 674, Address: 0x20b888, Func Offset: 0x4c8
	// Line 675, Address: 0x20b88c, Func Offset: 0x4cc
	// Line 680, Address: 0x20b894, Func Offset: 0x4d4
	// Line 681, Address: 0x20b8a4, Func Offset: 0x4e4
	// Line 685, Address: 0x20b8ac, Func Offset: 0x4ec
	// Line 686, Address: 0x20b8c0, Func Offset: 0x500
	// Line 687, Address: 0x20b8d0, Func Offset: 0x510
	// Line 689, Address: 0x20b8d8, Func Offset: 0x518
	// Line 690, Address: 0x20b8dc, Func Offset: 0x51c
	// Line 692, Address: 0x20b8e4, Func Offset: 0x524
	// Line 693, Address: 0x20b8f4, Func Offset: 0x534
	// Line 697, Address: 0x20b8fc, Func Offset: 0x53c
	// Line 698, Address: 0x20b91c, Func Offset: 0x55c
	// Line 701, Address: 0x20b924, Func Offset: 0x564
	// Line 702, Address: 0x20b934, Func Offset: 0x574
	// Line 704, Address: 0x20b93c, Func Offset: 0x57c
	// Line 705, Address: 0x20b944, Func Offset: 0x584
	// Line 708, Address: 0x20b94c, Func Offset: 0x58c
	// Line 709, Address: 0x20b95c, Func Offset: 0x59c
	// Line 710, Address: 0x20b964, Func Offset: 0x5a4
	// Line 712, Address: 0x20b978, Func Offset: 0x5b8
	// Line 713, Address: 0x20b980, Func Offset: 0x5c0
	// Line 716, Address: 0x20b988, Func Offset: 0x5c8
	// Line 717, Address: 0x20b998, Func Offset: 0x5d8
	// Line 718, Address: 0x20b9a0, Func Offset: 0x5e0
	// Line 720, Address: 0x20b9b4, Func Offset: 0x5f4
	// Line 721, Address: 0x20b9bc, Func Offset: 0x5fc
	// Line 724, Address: 0x20b9c4, Func Offset: 0x604
	// Line 725, Address: 0x20b9d4, Func Offset: 0x614
	// Line 726, Address: 0x20b9dc, Func Offset: 0x61c
	// Line 728, Address: 0x20b9f0, Func Offset: 0x630
	// Line 729, Address: 0x20b9f8, Func Offset: 0x638
	// Line 732, Address: 0x20ba00, Func Offset: 0x640
	// Line 733, Address: 0x20ba10, Func Offset: 0x650
	// Line 735, Address: 0x20ba18, Func Offset: 0x658
	// Line 738, Address: 0x20ba20, Func Offset: 0x660
	// Line 739, Address: 0x20ba30, Func Offset: 0x670
	// Line 740, Address: 0x20ba38, Func Offset: 0x678
	// Line 743, Address: 0x20ba40, Func Offset: 0x680
	// Line 744, Address: 0x20ba50, Func Offset: 0x690
	// Line 745, Address: 0x20ba58, Func Offset: 0x698
	// Line 747, Address: 0x20baac, Func Offset: 0x6ec
	// Line 750, Address: 0x20bab4, Func Offset: 0x6f4
	// Line 751, Address: 0x20bac4, Func Offset: 0x704
	// Line 752, Address: 0x20bacc, Func Offset: 0x70c
	// Line 754, Address: 0x20bb20, Func Offset: 0x760
	// Line 756, Address: 0x20bb28, Func Offset: 0x768
	// Line 757, Address: 0x20bb38, Func Offset: 0x778
	// Line 758, Address: 0x20bb40, Func Offset: 0x780
	// Line 759, Address: 0x20bb50, Func Offset: 0x790
	// Line 760, Address: 0x20bb8c, Func Offset: 0x7cc
	// Line 762, Address: 0x20bb94, Func Offset: 0x7d4
	// Line 763, Address: 0x20bba4, Func Offset: 0x7e4
	// Line 765, Address: 0x20bbac, Func Offset: 0x7ec
	// Line 766, Address: 0x20bbb8, Func Offset: 0x7f8
	// Line 767, Address: 0x20bbc0, Func Offset: 0x800
	// Line 768, Address: 0x20bbc8, Func Offset: 0x808
	// Line 769, Address: 0x20bbd8, Func Offset: 0x818
	// Line 771, Address: 0x20bbe0, Func Offset: 0x820
	// Line 772, Address: 0x20bbe8, Func Offset: 0x828
	// Line 773, Address: 0x20bbf4, Func Offset: 0x834
	// Line 775, Address: 0x20bc28, Func Offset: 0x868
	// Line 781, Address: 0x20bc30, Func Offset: 0x870
	// Line 785, Address: 0x20bc48, Func Offset: 0x888
	// Line 788, Address: 0x20bc50, Func Offset: 0x890
	// Line 789, Address: 0x20bc60, Func Offset: 0x8a0
	// Line 790, Address: 0x20bc68, Func Offset: 0x8a8
	// Line 793, Address: 0x20bc6c, Func Offset: 0x8ac
	// Line 798, Address: 0x20bc74, Func Offset: 0x8b4
	// Line 799, Address: 0x20bc78, Func Offset: 0x8b8
	// Line 800, Address: 0x20bc80, Func Offset: 0x8c0
	// Line 801, Address: 0x20bc88, Func Offset: 0x8c8
	// Line 803, Address: 0x20bcc0, Func Offset: 0x900
	// Line 804, Address: 0x20bcc4, Func Offset: 0x904
	// Line 806, Address: 0x20bccc, Func Offset: 0x90c
	// Line 807, Address: 0x20bcd0, Func Offset: 0x910
	// Line 809, Address: 0x20bcd8, Func Offset: 0x918
	// Line 810, Address: 0x20bcdc, Func Offset: 0x91c
	// Line 812, Address: 0x20bce4, Func Offset: 0x924
	// Line 816, Address: 0x20bce8, Func Offset: 0x928
	// Line 817, Address: 0x20bcf4, Func Offset: 0x934
	// Line 818, Address: 0x20bd00, Func Offset: 0x940
	// Line 819, Address: 0x20bd20, Func Offset: 0x960
	// Line 823, Address: 0x20bd2c, Func Offset: 0x96c
	// Line 827, Address: 0x20bd30, Func Offset: 0x970
	// Line 829, Address: 0x20bd38, Func Offset: 0x978
	// Line 830, Address: 0x20bd3c, Func Offset: 0x97c
	// Func End, Address: 0x20bd54, Func Offset: 0x994
}

