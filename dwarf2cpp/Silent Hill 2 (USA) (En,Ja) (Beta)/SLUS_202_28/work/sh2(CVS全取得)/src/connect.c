typedef struct _KANRI;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct SubCharacter;
typedef struct _SYS_W;
typedef struct Model_List;
typedef struct PAD_3D;
typedef struct _AnimeInfo;
typedef struct shSkelton;
typedef struct Enemy_List;
typedef struct PAD_2D;
typedef struct _anon0;
typedef struct _anon1;
typedef struct PAD_INFO;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct Stage_Data;
typedef struct shBattleInfo;
typedef struct Event_List;
typedef struct _SH2_SYS;
typedef struct Item_List;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shPlayerWork;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon2;
typedef struct _anon3;
typedef struct _CL_VHIT_RESULT;
typedef union _anon4;
typedef struct MariaAppearPoint;
typedef struct _anon5;
typedef enum _JAMES_UPPER_STATUS : unsigned char;

typedef int(*type_0)();
typedef int(*type_1)();
typedef int(*type_2)(int(*)());
typedef void(*type_5)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_12)();
typedef int(*type_17)();
typedef int(*type_22)();
typedef int(*type_28)();

typedef float type_3[4][2];
typedef unsigned char type_4[2];
typedef unsigned char type_6[97];
typedef unsigned int type_8[9];
typedef unsigned char type_9[4];
typedef unsigned int type_10[255];
typedef unsigned int type_11[32];
typedef unsigned char type_13[4];
typedef char type_14[4];
typedef float type_15[4];
typedef char type_16[4];
typedef char type_18[4];
typedef unsigned char type_19[20];
typedef PAD_INFO type_20[10];
typedef char type_21[4];
typedef char type_23[4];
typedef float type_24[2];
typedef unsigned int type_25[8];
typedef unsigned char type_26[4];
typedef unsigned char type_27[4];
typedef float type_29[4];
typedef unsigned char type_30[14];
typedef unsigned char type_31[2];
typedef unsigned char type_32[2];
typedef unsigned char type_33[69];
typedef float type_34[4];
typedef float type_35[4][4];
typedef shAttackInfo type_36[66];
typedef MariaAppearPoint type_37[91];
typedef unsigned char type_38[14];

struct _KANRI
{
	float pos[4];
	float ang[4];
	float rot_spd[4];
	float velo_y;
	float velo_xz;
	float velo_houi;
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
	_anon5 mat;
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
};

struct _SYS_W
{
	float cam_ang_y;
	float cam_ang_z;
	float cam_r_xz;
	float cam_y;
	_KANRI hero;
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon5 src_m;
	_anon3 src_t;
	_anon5 des_m;
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

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct _anon0
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

struct _anon1
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
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

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
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

struct _anon3
{
	float x;
	float y;
	float z;
	float w;
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

struct MariaAppearPoint
{
	short room_name_prev;
	short room_name_now;
	int active_type;
	float pos[4];
};

struct _anon5
{
	float d[4][4];
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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
MariaAppearPoint maria_apeear_point_list[91];
unsigned int pmaria_sub_status_flag[9];
Stage_Data* stage;
_SH2_SYS Sh2sys;
float connect_pos[4];
_SYS_W sys;
_anon0 game_flag;
int(*lisPutCmd0)(int(*)());
int(*connectPlayableInit)();
int(*connectRoomInit)();
shPlayerWork sh2jms;
int(*connectStageInit)();

int connectStageInit();
int connectRoomInit();
int connectPlayableInit();
int connectMain();

// 
// Start address: 0x20bd60
int connectStageInit()
{
	// Line 57, Address: 0x20bd60, Func Offset: 0
	// Line 58, Address: 0x20bd68, Func Offset: 0x8
	// Line 59, Address: 0x20bd70, Func Offset: 0x10
	// Line 60, Address: 0x20bd78, Func Offset: 0x18
	// Line 61, Address: 0x20bd90, Func Offset: 0x30
	// Line 62, Address: 0x20bd98, Func Offset: 0x38
	// Line 64, Address: 0x20bdb0, Func Offset: 0x50
	// Line 65, Address: 0x20bdb8, Func Offset: 0x58
	// Line 69, Address: 0x20bdc0, Func Offset: 0x60
	// Line 72, Address: 0x20bdc8, Func Offset: 0x68
	// Line 73, Address: 0x20bde4, Func Offset: 0x84
	// Line 74, Address: 0x20bdec, Func Offset: 0x8c
	// Line 76, Address: 0x20bdfc, Func Offset: 0x9c
	// Line 77, Address: 0x20be00, Func Offset: 0xa0
	// Func End, Address: 0x20be10, Func Offset: 0xb0
}

// 
// Start address: 0x20be10
int connectRoomInit()
{
	// Line 80, Address: 0x20be10, Func Offset: 0
	// Line 81, Address: 0x20be18, Func Offset: 0x8
	// Line 84, Address: 0x20be40, Func Offset: 0x30
	// Line 88, Address: 0x20be4c, Func Offset: 0x3c
	// Line 89, Address: 0x20be58, Func Offset: 0x48
	// Line 93, Address: 0x20be60, Func Offset: 0x50
	// Line 94, Address: 0x20be68, Func Offset: 0x58
	// Line 95, Address: 0x20be94, Func Offset: 0x84
	// Line 96, Address: 0x20bea0, Func Offset: 0x90
	// Line 97, Address: 0x20bea8, Func Offset: 0x98
	// Line 99, Address: 0x20bec8, Func Offset: 0xb8
	// Line 104, Address: 0x20bee0, Func Offset: 0xd0
	// Line 106, Address: 0x20bee8, Func Offset: 0xd8
	// Line 107, Address: 0x20bef4, Func Offset: 0xe4
	// Line 109, Address: 0x20befc, Func Offset: 0xec
	// Line 111, Address: 0x20bf18, Func Offset: 0x108
	// Line 112, Address: 0x20bf1c, Func Offset: 0x10c
	// Func End, Address: 0x20bf2c, Func Offset: 0x11c
}

// 
// Start address: 0x20bf30
int connectPlayableInit()
{
	// Line 115, Address: 0x20bf30, Func Offset: 0
	// Line 116, Address: 0x20bf38, Func Offset: 0x8
	// Line 117, Address: 0x20bf40, Func Offset: 0x10
	// Line 118, Address: 0x20bf48, Func Offset: 0x18
	// Line 119, Address: 0x20bf54, Func Offset: 0x24
	// Line 121, Address: 0x20bf60, Func Offset: 0x30
	// Line 122, Address: 0x20bf64, Func Offset: 0x34
	// Func End, Address: 0x20bf74, Func Offset: 0x44
}

// 
// Start address: 0x20bf80
int connectMain()
{
	// Line 141, Address: 0x20bf80, Func Offset: 0
	// Line 142, Address: 0x20bf88, Func Offset: 0x8
	// Line 144, Address: 0x20bfb8, Func Offset: 0x38
	// Line 145, Address: 0x20bfc0, Func Offset: 0x40
	// Line 146, Address: 0x20bff4, Func Offset: 0x74
	// Line 149, Address: 0x20bffc, Func Offset: 0x7c
	// Line 150, Address: 0x20c014, Func Offset: 0x94
	// Line 151, Address: 0x20c048, Func Offset: 0xc8
	// Line 154, Address: 0x20c050, Func Offset: 0xd0
	// Line 155, Address: 0x20c068, Func Offset: 0xe8
	// Line 157, Address: 0x20c09c, Func Offset: 0x11c
	// Line 160, Address: 0x20c0a4, Func Offset: 0x124
	// Line 162, Address: 0x20c0c4, Func Offset: 0x144
	// Line 163, Address: 0x20c0f8, Func Offset: 0x178
	// Line 166, Address: 0x20c100, Func Offset: 0x180
	// Line 167, Address: 0x20c118, Func Offset: 0x198
	// Line 168, Address: 0x20c14c, Func Offset: 0x1cc
	// Line 171, Address: 0x20c154, Func Offset: 0x1d4
	// Line 172, Address: 0x20c16c, Func Offset: 0x1ec
	// Line 174, Address: 0x20c1a0, Func Offset: 0x220
	// Line 177, Address: 0x20c1a8, Func Offset: 0x228
	// Line 178, Address: 0x20c1c0, Func Offset: 0x240
	// Line 179, Address: 0x20c1f4, Func Offset: 0x274
	// Line 185, Address: 0x20c1fc, Func Offset: 0x27c
	// Line 188, Address: 0x20c22c, Func Offset: 0x2ac
	// Line 194, Address: 0x20c238, Func Offset: 0x2b8
	// Line 195, Address: 0x20c23c, Func Offset: 0x2bc
	// Func End, Address: 0x20c24c, Func Offset: 0x2cc
}

