typedef struct _CL_VHIT_RESULT;
typedef struct PicDraw_Data;
typedef struct _CL_HITPOLY_HEAD;
typedef union _anon0;
typedef struct sh2gfw_AREA_HEAD;
typedef struct DramaDemo_MessageTime;
typedef struct PAD_2D;
typedef struct SubCharacter;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct PAD_INFO;
typedef struct _VbSCREENINFO;
typedef struct shSkelton;
typedef struct DramaDemo_AnimInfo;
typedef struct DramaDemo_PlayInfo;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct shPlayerWork;
typedef struct _anon6;
typedef struct shBattleFight;
typedef struct Playing_Info;
typedef struct _SH2_SYS;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct Pad_KeyConfig;
typedef struct _CL_VHIT_WALL;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon7;
typedef struct PAD_3D;

typedef void(*type_9)(SubCharacter*);
typedef void(*type_14)(SubCharacter*);

typedef unsigned char type_0[69];
typedef shAttackInfo type_1[66];
typedef PAD_INFO type_2[10];
typedef char type_3[32];
typedef float type_4[2];
typedef unsigned short type_5[0];
typedef DramaDemo_AnimInfo type_6[79];
typedef unsigned char type_7[3];
typedef float type_8[4][2];
typedef unsigned char type_10[4];
typedef unsigned char type_11[4];
typedef unsigned char type_12[14];
typedef float type_13[4];
typedef float type_15[2];
typedef float type_16[4];
typedef float type_17[4][4];
typedef float type_18[2];
typedef unsigned char type_19[4];
typedef char type_20[4];
typedef float type_21[4];
typedef float type_22[4][4];
typedef unsigned char type_23[2];
typedef unsigned char type_24[97];
typedef unsigned char type_25[2];
typedef _anon3 type_26[6];
typedef _anon4 type_27[7];
typedef unsigned int type_28[8];
typedef float type_29[4];
typedef SubCharacter* type_30[7];
typedef float type_31[4][2];
typedef char type_32[32];
typedef unsigned char type_33[2];
typedef unsigned char type_34[20];
typedef unsigned char type_35[4];
typedef float type_36[7];
typedef unsigned int type_37[7];
typedef unsigned char type_38[2];
typedef unsigned char type_39[14];
typedef int type_40[6];

struct _CL_VHIT_RESULT
{
	int kind;
	_anon0 hobj;
};

struct PicDraw_Data
{
	sh2gfw_AREA_HEAD* ap;
	int tex;
	int clut;
	short x0;
	short y0;
	short x1;
	short y1;
	short x2;
	short y2;
	short x3;
	short y3;
	int us0;
	int vt0;
	int us1;
	int vt1;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
	unsigned char alpha_a;
	unsigned char alpha_b;
	unsigned char alpha_c;
	unsigned char alpha_d;
	unsigned char alpha_fix;
	unsigned char test_ate;
	unsigned char test_atst;
	unsigned char test_aref;
	unsigned char test_afail;
	unsigned char test_date;
	unsigned char test_datm;
	unsigned char test_zte;
	unsigned char test_ztst;
	unsigned char pad[3];
	short otp;
	short status;
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

union _anon0
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
};

struct DramaDemo_MessageTime
{
	unsigned short start;
	unsigned short end;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
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

struct _VbSCREENINFO
{
	float scr_z;
	float sx;
	float sy;
	float cx;
	float cy;
	float zmin;
	float zmax;
	float nearz;
	float farz;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon5 src_m;
	_anon1 src_t;
	_anon5 des_m;
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

struct DramaDemo_AnimInfo
{
	char name[32];
	short kind;
	short id;
	short start;
	short end;
};

struct DramaDemo_PlayInfo
{
	int demo_no;
	char* adr_dds_top;
	short* adr_anim;
	DramaDemo_MessageTime* adr_msg_time;
	short msg_start;
	short voice_sd_no;
	int* adr_voice;
	int stream_no;
	float stream_start;
	float add_pos_x;
	float add_pos_z;
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
	float x;
	float y;
	float z;
	float w;
};

struct _anon2
{
	float position[4];
	float interest[4];
	float roll;
	float plane;
};

struct _anon3
{
	float position[4];
	float interest[4];
	float roll;
	float color[4];
	float falloff[2];
	float cone[2];
	int visible;
};

struct _anon4
{
	float position[4];
	int visible;
};

struct _anon5
{
	float d[4][4];
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

struct _anon6
{
	float frame;
	_anon2 camera;
	_anon3 light[6];
	_anon4 character[7];
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

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon7 hit_check;
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

union _anon7
{
	shBattleFight fight;
	shBattleShot shot;
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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
DramaDemo_AnimInfo anim_info[79];
float sbt_timer;
void* adr_dds;
Pad_KeyConfig key_config;
int demo_status;
float demo_frame;
int demo_number;
_SH2_SYS Sh2sys;
int ev_s_step;
_anon6 next;
_anon6 last;
short total_light;
unsigned short demo_voice_no;
unsigned short demo_msg_no;
unsigned short demo_anim_no;
short infinite_light;
short spot_light;
short point_light;
int demo_counter;
float msg_frame;
_anon6 base;
int character_number;
SubCharacter* chara_p[7];
float total_demo_frame;
shPlayerWork sh2jms;
_VbSCREENINFO VbScreenInfo;
unsigned short msg_buffer[0];
Playing_Info playing;
int sbt_str_no;
int sbt_msg_no;
DramaDemo_MessageTime* sbt_msg_time;

short DdsReadShort();
float DdsReadFloat2();
float DdsReadFloat4();
int DramaDemoMain(DramaDemo_PlayInfo* info);
int DramaDemoInit(DramaDemo_PlayInfo* info);
void DramaDemoAnimationStart(short* adr_anim);
int DdsPlay(DramaDemo_PlayInfo* info);
void DdsPlayKey();
void DdsPlayCamera();
void DdsPlayLight(int no);
void DdsPlayCharacter(int no);
void DramaDemoSkipLast(DramaDemo_PlayInfo* info);
void RotationToInterest(float* position, float* rotation, float* interest, float* roll);
void DramaDemoFade();
int DramaDemoNumber();
void SubtitlesExec(DramaDemo_MessageTime* msg_time, int msg_no, int str_no, float timer);
void SubtitlesManager();

// 
// Start address: 0x1b0d80
short DdsReadShort()
{
	unsigned char c_work[2];
	// Line 161, Address: 0x1b0d80, Func Offset: 0
	// Line 164, Address: 0x1b0d84, Func Offset: 0x4
	// Line 165, Address: 0x1b0da0, Func Offset: 0x20
	// Line 167, Address: 0x1b0dbc, Func Offset: 0x3c
	// Line 168, Address: 0x1b0dc4, Func Offset: 0x44
	// Func End, Address: 0x1b0dd0, Func Offset: 0x50
}

// 
// Start address: 0x1b0dd0
float DdsReadFloat2()
{
	int work;
	int coe;
	int exp;
	int sig;
	// Line 187, Address: 0x1b0dd0, Func Offset: 0
	// Line 193, Address: 0x1b0dd4, Func Offset: 0x4
	// Line 194, Address: 0x1b0dd8, Func Offset: 0x8
	// Line 195, Address: 0x1b0e00, Func Offset: 0x30
	// Line 197, Address: 0x1b0e24, Func Offset: 0x54
	// Line 198, Address: 0x1b0e30, Func Offset: 0x60
	// Line 199, Address: 0x1b0e38, Func Offset: 0x68
	// Line 204, Address: 0x1b0e3c, Func Offset: 0x6c
	// Line 206, Address: 0x1b0e58, Func Offset: 0x88
	// Line 207, Address: 0x1b0e5c, Func Offset: 0x8c
	// Func End, Address: 0x1b0e68, Func Offset: 0x98
}

// 
// Start address: 0x1b0e70
float DdsReadFloat4()
{
	char c_work[4];
	// Line 212, Address: 0x1b0e70, Func Offset: 0
	// Line 215, Address: 0x1b0e74, Func Offset: 0x4
	// Line 216, Address: 0x1b0e90, Func Offset: 0x20
	// Line 217, Address: 0x1b0eac, Func Offset: 0x3c
	// Line 218, Address: 0x1b0ec8, Func Offset: 0x58
	// Line 220, Address: 0x1b0ee4, Func Offset: 0x74
	// Line 221, Address: 0x1b0eec, Func Offset: 0x7c
	// Func End, Address: 0x1b0ef8, Func Offset: 0x88
}

// 
// Start address: 0x1b0f00
int DramaDemoMain(DramaDemo_PlayInfo* info)
{
	int ret;
	float stop_counter;
	// Line 230, Address: 0x1b0f00, Func Offset: 0
	// Line 263, Address: 0x1b0f10, Func Offset: 0x10
	// Line 264, Address: 0x1b0f20, Func Offset: 0x20
	// Line 268, Address: 0x1b0f28, Func Offset: 0x28
	// Line 270, Address: 0x1b0f34, Func Offset: 0x34
	// Line 271, Address: 0x1b0f48, Func Offset: 0x48
	// Line 273, Address: 0x1b0f54, Func Offset: 0x54
	// Line 274, Address: 0x1b0f60, Func Offset: 0x60
	// Line 275, Address: 0x1b0f78, Func Offset: 0x78
	// Line 276, Address: 0x1b0fa4, Func Offset: 0xa4
	// Line 277, Address: 0x1b0fac, Func Offset: 0xac
	// Line 278, Address: 0x1b0fc0, Func Offset: 0xc0
	// Line 280, Address: 0x1b0ff4, Func Offset: 0xf4
	// Line 281, Address: 0x1b100c, Func Offset: 0x10c
	// Line 282, Address: 0x1b1028, Func Offset: 0x128
	// Line 283, Address: 0x1b1044, Func Offset: 0x144
	// Line 284, Address: 0x1b105c, Func Offset: 0x15c
	// Line 285, Address: 0x1b1064, Func Offset: 0x164
	// Line 286, Address: 0x1b1078, Func Offset: 0x178
	// Line 287, Address: 0x1b1080, Func Offset: 0x180
	// Line 288, Address: 0x1b109c, Func Offset: 0x19c
	// Line 294, Address: 0x1b10a4, Func Offset: 0x1a4
	// Line 295, Address: 0x1b10b4, Func Offset: 0x1b4
	// Line 296, Address: 0x1b10e8, Func Offset: 0x1e8
	// Line 297, Address: 0x1b10ec, Func Offset: 0x1ec
	// Line 298, Address: 0x1b10f4, Func Offset: 0x1f4
	// Line 300, Address: 0x1b110c, Func Offset: 0x20c
	// Line 301, Address: 0x1b1110, Func Offset: 0x210
	// Func End, Address: 0x1b1124, Func Offset: 0x224
}

// 
// Start address: 0x1b1130
int DramaDemoInit(DramaDemo_PlayInfo* info)
{
	int j;
	int i;
	unsigned char c_work;
	unsigned short s_work;
	char buf[32];
	float dummy[4][2];
	// Line 308, Address: 0x1b1130, Func Offset: 0
	// Line 315, Address: 0x1b1148, Func Offset: 0x18
	// Line 316, Address: 0x1b1158, Func Offset: 0x28
	// Line 317, Address: 0x1b1160, Func Offset: 0x30
	// Line 318, Address: 0x1b1168, Func Offset: 0x38
	// Line 319, Address: 0x1b1170, Func Offset: 0x40
	// Line 320, Address: 0x1b1178, Func Offset: 0x48
	// Line 323, Address: 0x1b1184, Func Offset: 0x54
	// Line 327, Address: 0x1b11cc, Func Offset: 0x9c
	// Line 328, Address: 0x1b11e0, Func Offset: 0xb0
	// Line 329, Address: 0x1b11fc, Func Offset: 0xcc
	// Line 330, Address: 0x1b1210, Func Offset: 0xe0
	// Line 331, Address: 0x1b1230, Func Offset: 0x100
	// Line 332, Address: 0x1b1250, Func Offset: 0x120
	// Line 333, Address: 0x1b1270, Func Offset: 0x140
	// Line 334, Address: 0x1b1284, Func Offset: 0x154
	// Line 335, Address: 0x1b12a4, Func Offset: 0x174
	// Line 336, Address: 0x1b12b0, Func Offset: 0x180
	// Line 337, Address: 0x1b12dc, Func Offset: 0x1ac
	// Line 338, Address: 0x1b12e0, Func Offset: 0x1b0
	// Line 339, Address: 0x1b130c, Func Offset: 0x1dc
	// Line 341, Address: 0x1b1354, Func Offset: 0x224
	// Line 342, Address: 0x1b136c, Func Offset: 0x23c
	// Line 345, Address: 0x1b13c0, Func Offset: 0x290
	// Line 348, Address: 0x1b1404, Func Offset: 0x2d4
	// Line 349, Address: 0x1b1410, Func Offset: 0x2e0
	// Line 352, Address: 0x1b142c, Func Offset: 0x2fc
	// Line 353, Address: 0x1b1440, Func Offset: 0x310
	// Line 354, Address: 0x1b1454, Func Offset: 0x324
	// Line 355, Address: 0x1b1464, Func Offset: 0x334
	// Line 357, Address: 0x1b146c, Func Offset: 0x33c
	// Line 358, Address: 0x1b1494, Func Offset: 0x364
	// Line 360, Address: 0x1b14cc, Func Offset: 0x39c
	// Line 361, Address: 0x1b14d4, Func Offset: 0x3a4
	// Line 362, Address: 0x1b14dc, Func Offset: 0x3ac
	// Line 363, Address: 0x1b14e4, Func Offset: 0x3b4
	// Line 365, Address: 0x1b14ec, Func Offset: 0x3bc
	// Line 367, Address: 0x1b14f4, Func Offset: 0x3c4
	// Line 368, Address: 0x1b150c, Func Offset: 0x3dc
	// Line 369, Address: 0x1b1518, Func Offset: 0x3e8
	// Line 370, Address: 0x1b1534, Func Offset: 0x404
	// Line 371, Address: 0x1b1550, Func Offset: 0x420
	// Line 372, Address: 0x1b1568, Func Offset: 0x438
	// Line 373, Address: 0x1b1578, Func Offset: 0x448
	// Line 374, Address: 0x1b1588, Func Offset: 0x458
	// Line 375, Address: 0x1b1590, Func Offset: 0x460
	// Line 376, Address: 0x1b15a8, Func Offset: 0x478
	// Line 377, Address: 0x1b15b4, Func Offset: 0x484
	// Line 379, Address: 0x1b15cc, Func Offset: 0x49c
	// Line 387, Address: 0x1b15e8, Func Offset: 0x4b8
	// Line 388, Address: 0x1b15ec, Func Offset: 0x4bc
	// Func End, Address: 0x1b1608, Func Offset: 0x4d8
}

// 
// Start address: 0x1b1610
void DramaDemoAnimationStart(short* adr_anim)
{
	int k;
	int j;
	int i;
	short anim;
	// Line 395, Address: 0x1b1610, Func Offset: 0
	// Line 399, Address: 0x1b1624, Func Offset: 0x14
	// Line 401, Address: 0x1b162c, Func Offset: 0x1c
	// Line 402, Address: 0x1b1638, Func Offset: 0x28
	// Line 403, Address: 0x1b164c, Func Offset: 0x3c
	// Line 404, Address: 0x1b1650, Func Offset: 0x40
	// Line 405, Address: 0x1b169c, Func Offset: 0x8c
	// Line 406, Address: 0x1b16a0, Func Offset: 0x90
	// Line 407, Address: 0x1b16ac, Func Offset: 0x9c
	// Line 408, Address: 0x1b16b0, Func Offset: 0xa0
	// Line 409, Address: 0x1b16fc, Func Offset: 0xec
	// Line 410, Address: 0x1b1700, Func Offset: 0xf0
	// Line 411, Address: 0x1b170c, Func Offset: 0xfc
	// Line 414, Address: 0x1b1804, Func Offset: 0x1f4
	// Line 415, Address: 0x1b180c, Func Offset: 0x1fc
	// Line 418, Address: 0x1b1814, Func Offset: 0x204
	// Line 419, Address: 0x1b181c, Func Offset: 0x20c
	// Line 421, Address: 0x1b1824, Func Offset: 0x214
	// Line 422, Address: 0x1b182c, Func Offset: 0x21c
	// Line 424, Address: 0x1b1834, Func Offset: 0x224
	// Line 425, Address: 0x1b183c, Func Offset: 0x22c
	// Line 427, Address: 0x1b1844, Func Offset: 0x234
	// Line 428, Address: 0x1b184c, Func Offset: 0x23c
	// Line 430, Address: 0x1b1854, Func Offset: 0x244
	// Line 431, Address: 0x1b185c, Func Offset: 0x24c
	// Line 433, Address: 0x1b1864, Func Offset: 0x254
	// Line 434, Address: 0x1b186c, Func Offset: 0x25c
	// Line 436, Address: 0x1b1874, Func Offset: 0x264
	// Line 437, Address: 0x1b187c, Func Offset: 0x26c
	// Line 439, Address: 0x1b1884, Func Offset: 0x274
	// Line 440, Address: 0x1b188c, Func Offset: 0x27c
	// Line 442, Address: 0x1b1894, Func Offset: 0x284
	// Line 443, Address: 0x1b189c, Func Offset: 0x28c
	// Line 445, Address: 0x1b18a4, Func Offset: 0x294
	// Line 446, Address: 0x1b18ac, Func Offset: 0x29c
	// Line 448, Address: 0x1b18b4, Func Offset: 0x2a4
	// Line 449, Address: 0x1b18bc, Func Offset: 0x2ac
	// Line 451, Address: 0x1b18c4, Func Offset: 0x2b4
	// Line 452, Address: 0x1b18cc, Func Offset: 0x2bc
	// Line 454, Address: 0x1b18d4, Func Offset: 0x2c4
	// Line 455, Address: 0x1b18dc, Func Offset: 0x2cc
	// Line 457, Address: 0x1b18e4, Func Offset: 0x2d4
	// Line 458, Address: 0x1b18ec, Func Offset: 0x2dc
	// Line 460, Address: 0x1b18f4, Func Offset: 0x2e4
	// Line 461, Address: 0x1b18fc, Func Offset: 0x2ec
	// Line 463, Address: 0x1b1904, Func Offset: 0x2f4
	// Line 464, Address: 0x1b190c, Func Offset: 0x2fc
	// Line 466, Address: 0x1b1914, Func Offset: 0x304
	// Line 467, Address: 0x1b191c, Func Offset: 0x30c
	// Line 469, Address: 0x1b1924, Func Offset: 0x314
	// Line 471, Address: 0x1b192c, Func Offset: 0x31c
	// Line 472, Address: 0x1b1930, Func Offset: 0x320
	// Line 473, Address: 0x1b1944, Func Offset: 0x334
	// Line 474, Address: 0x1b195c, Func Offset: 0x34c
	// Func End, Address: 0x1b1974, Func Offset: 0x364
}

// 
// Start address: 0x1b1980
int DdsPlay(DramaDemo_PlayInfo* info)
{
	int k;
	int j;
	int i;
	unsigned char node_no;
	unsigned short s_work;
	float next_data_frame;
	float frm_dcm;
	float plane;
	float roll;
	float cone;
	float falloff_e;
	float falloff_s;
	float normal[4];
	float color[4];
	float interest[4];
	float position[4];
	// Line 482, Address: 0x1b1980, Func Offset: 0
	// Line 508, Address: 0x1b19a0, Func Offset: 0x20
	// Line 510, Address: 0x1b19a8, Func Offset: 0x28
	// Line 511, Address: 0x1b19d8, Func Offset: 0x58
	// Line 512, Address: 0x1b19f0, Func Offset: 0x70
	// Line 513, Address: 0x1b19fc, Func Offset: 0x7c
	// Line 533, Address: 0x1b1a14, Func Offset: 0x94
	// Line 535, Address: 0x1b1a2c, Func Offset: 0xac
	// Line 537, Address: 0x1b1a44, Func Offset: 0xc4
	// Line 538, Address: 0x1b1a50, Func Offset: 0xd0
	// Line 539, Address: 0x1b1a64, Func Offset: 0xe4
	// Line 541, Address: 0x1b1a9c, Func Offset: 0x11c
	// Line 542, Address: 0x1b1aac, Func Offset: 0x12c
	// Line 544, Address: 0x1b1ad0, Func Offset: 0x150
	// Line 545, Address: 0x1b1aec, Func Offset: 0x16c
	// Line 547, Address: 0x1b1b00, Func Offset: 0x180
	// Line 548, Address: 0x1b1b18, Func Offset: 0x198
	// Line 549, Address: 0x1b1b24, Func Offset: 0x1a4
	// Line 550, Address: 0x1b1b40, Func Offset: 0x1c0
	// Line 551, Address: 0x1b1b5c, Func Offset: 0x1dc
	// Line 552, Address: 0x1b1b74, Func Offset: 0x1f4
	// Line 553, Address: 0x1b1b84, Func Offset: 0x204
	// Line 554, Address: 0x1b1b94, Func Offset: 0x214
	// Line 558, Address: 0x1b1b9c, Func Offset: 0x21c
	// Line 559, Address: 0x1b1bb0, Func Offset: 0x230
	// Line 560, Address: 0x1b1bbc, Func Offset: 0x23c
	// Line 562, Address: 0x1b1bec, Func Offset: 0x26c
	// Line 563, Address: 0x1b1bf4, Func Offset: 0x274
	// Line 564, Address: 0x1b1c08, Func Offset: 0x288
	// Line 566, Address: 0x1b1c20, Func Offset: 0x2a0
	// Line 568, Address: 0x1b1c6c, Func Offset: 0x2ec
	// Line 569, Address: 0x1b1c88, Func Offset: 0x308
	// Line 574, Address: 0x1b1c9c, Func Offset: 0x31c
	// Line 575, Address: 0x1b1cbc, Func Offset: 0x33c
	// Line 578, Address: 0x1b1ce0, Func Offset: 0x360
	// Line 579, Address: 0x1b1cec, Func Offset: 0x36c
	// Line 580, Address: 0x1b1d30, Func Offset: 0x3b0
	// Line 581, Address: 0x1b1d5c, Func Offset: 0x3dc
	// Line 582, Address: 0x1b1d6c, Func Offset: 0x3ec
	// Line 583, Address: 0x1b1d7c, Func Offset: 0x3fc
	// Line 584, Address: 0x1b1d8c, Func Offset: 0x40c
	// Line 585, Address: 0x1b1d9c, Func Offset: 0x41c
	// Line 586, Address: 0x1b1dac, Func Offset: 0x42c
	// Line 587, Address: 0x1b1db8, Func Offset: 0x438
	// Line 588, Address: 0x1b1ddc, Func Offset: 0x45c
	// Line 589, Address: 0x1b1df4, Func Offset: 0x474
	// Line 592, Address: 0x1b1e10, Func Offset: 0x490
	// Line 593, Address: 0x1b1e2c, Func Offset: 0x4ac
	// Line 594, Address: 0x1b1e34, Func Offset: 0x4b4
	// Line 597, Address: 0x1b1e5c, Func Offset: 0x4dc
	// Line 598, Address: 0x1b1e6c, Func Offset: 0x4ec
	// Line 599, Address: 0x1b1e90, Func Offset: 0x510
	// Line 600, Address: 0x1b1e9c, Func Offset: 0x51c
	// Line 601, Address: 0x1b1ef4, Func Offset: 0x574
	// Line 602, Address: 0x1b1f28, Func Offset: 0x5a8
	// Line 603, Address: 0x1b1f3c, Func Offset: 0x5bc
	// Line 604, Address: 0x1b1f80, Func Offset: 0x600
	// Line 605, Address: 0x1b1fa8, Func Offset: 0x628
	// Line 607, Address: 0x1b1fbc, Func Offset: 0x63c
	// Line 608, Address: 0x1b1fdc, Func Offset: 0x65c
	// Line 609, Address: 0x1b1fe8, Func Offset: 0x668
	// Line 610, Address: 0x1b200c, Func Offset: 0x68c
	// Line 611, Address: 0x1b2018, Func Offset: 0x698
	// Line 612, Address: 0x1b2070, Func Offset: 0x6f0
	// Line 613, Address: 0x1b20a4, Func Offset: 0x724
	// Line 614, Address: 0x1b20d8, Func Offset: 0x758
	// Line 615, Address: 0x1b20ec, Func Offset: 0x76c
	// Line 616, Address: 0x1b2108, Func Offset: 0x788
	// Line 617, Address: 0x1b2128, Func Offset: 0x7a8
	// Line 618, Address: 0x1b216c, Func Offset: 0x7ec
	// Line 619, Address: 0x1b2194, Func Offset: 0x814
	// Line 620, Address: 0x1b21bc, Func Offset: 0x83c
	// Line 621, Address: 0x1b21c0, Func Offset: 0x840
	// Line 622, Address: 0x1b21c4, Func Offset: 0x844
	// Line 624, Address: 0x1b21d4, Func Offset: 0x854
	// Line 625, Address: 0x1b21f4, Func Offset: 0x874
	// Line 626, Address: 0x1b2200, Func Offset: 0x880
	// Line 627, Address: 0x1b2224, Func Offset: 0x8a4
	// Line 628, Address: 0x1b2230, Func Offset: 0x8b0
	// Line 629, Address: 0x1b2288, Func Offset: 0x908
	// Line 630, Address: 0x1b22bc, Func Offset: 0x93c
	// Line 631, Address: 0x1b22cc, Func Offset: 0x94c
	// Line 632, Address: 0x1b22d4, Func Offset: 0x954
	// Line 633, Address: 0x1b22e8, Func Offset: 0x968
	// Line 634, Address: 0x1b2308, Func Offset: 0x988
	// Line 635, Address: 0x1b230c, Func Offset: 0x98c
	// Line 636, Address: 0x1b231c, Func Offset: 0x99c
	// Line 639, Address: 0x1b233c, Func Offset: 0x9bc
	// Line 640, Address: 0x1b2348, Func Offset: 0x9c8
	// Line 643, Address: 0x1b23a4, Func Offset: 0xa24
	// Line 646, Address: 0x1b23e0, Func Offset: 0xa60
	// Line 649, Address: 0x1b2424, Func Offset: 0xaa4
	// Line 650, Address: 0x1b2440, Func Offset: 0xac0
	// Line 653, Address: 0x1b245c, Func Offset: 0xadc
	// Line 654, Address: 0x1b246c, Func Offset: 0xaec
	// Line 656, Address: 0x1b24b4, Func Offset: 0xb34
	// Line 657, Address: 0x1b24bc, Func Offset: 0xb3c
	// Line 659, Address: 0x1b24d4, Func Offset: 0xb54
	// Line 660, Address: 0x1b24f4, Func Offset: 0xb74
	// Line 661, Address: 0x1b2520, Func Offset: 0xba0
	// Line 663, Address: 0x1b2534, Func Offset: 0xbb4
	// Line 665, Address: 0x1b2560, Func Offset: 0xbe0
	// Line 666, Address: 0x1b258c, Func Offset: 0xc0c
	// Line 667, Address: 0x1b25c0, Func Offset: 0xc40
	// Line 668, Address: 0x1b25e4, Func Offset: 0xc64
	// Line 669, Address: 0x1b2628, Func Offset: 0xca8
	// Line 670, Address: 0x1b2650, Func Offset: 0xcd0
	// Line 671, Address: 0x1b2654, Func Offset: 0xcd4
	// Func End, Address: 0x1b2678, Func Offset: 0xcf8
}

// 
// Start address: 0x1b2680
void DdsPlayKey()
{
	unsigned char c_work;
	// Line 680, Address: 0x1b2680, Func Offset: 0
	// Line 681, Address: 0x1b2698, Func Offset: 0x18
	// Line 683, Address: 0x1b26e8, Func Offset: 0x68
	// Line 684, Address: 0x1b26fc, Func Offset: 0x7c
	// Line 685, Address: 0x1b2710, Func Offset: 0x90
	// Line 687, Address: 0x1b2718, Func Offset: 0x98
	// Line 688, Address: 0x1b272c, Func Offset: 0xac
	// Line 691, Address: 0x1b2734, Func Offset: 0xb4
	// Line 692, Address: 0x1b2748, Func Offset: 0xc8
	// Line 703, Address: 0x1b2750, Func Offset: 0xd0
	// Func End, Address: 0x1b2758, Func Offset: 0xd8
}

// 
// Start address: 0x1b2760
void DdsPlayCamera()
{
	int i;
	unsigned char c_work;
	float camera_rotation[4];
	// Line 708, Address: 0x1b2760, Func Offset: 0
	// Line 714, Address: 0x1b2768, Func Offset: 0x8
	// Line 715, Address: 0x1b2780, Func Offset: 0x20
	// Line 716, Address: 0x1b27ac, Func Offset: 0x4c
	// Line 717, Address: 0x1b27b0, Func Offset: 0x50
	// Line 718, Address: 0x1b27c8, Func Offset: 0x68
	// Line 719, Address: 0x1b27d8, Func Offset: 0x78
	// Line 721, Address: 0x1b2800, Func Offset: 0xa0
	// Line 722, Address: 0x1b2814, Func Offset: 0xb4
	// Line 723, Address: 0x1b281c, Func Offset: 0xbc
	// Line 724, Address: 0x1b282c, Func Offset: 0xcc
	// Line 726, Address: 0x1b2858, Func Offset: 0xf8
	// Line 728, Address: 0x1b286c, Func Offset: 0x10c
	// Line 731, Address: 0x1b2874, Func Offset: 0x114
	// Line 732, Address: 0x1b288c, Func Offset: 0x12c
	// Line 733, Address: 0x1b289c, Func Offset: 0x13c
	// Line 735, Address: 0x1b28c4, Func Offset: 0x164
	// Line 736, Address: 0x1b28d4, Func Offset: 0x174
	// Line 737, Address: 0x1b28dc, Func Offset: 0x17c
	// Line 738, Address: 0x1b28ec, Func Offset: 0x18c
	// Line 740, Address: 0x1b2918, Func Offset: 0x1b8
	// Line 742, Address: 0x1b292c, Func Offset: 0x1cc
	// Line 745, Address: 0x1b2934, Func Offset: 0x1d4
	// Line 746, Address: 0x1b2940, Func Offset: 0x1e0
	// Line 747, Address: 0x1b294c, Func Offset: 0x1ec
	// Line 748, Address: 0x1b2958, Func Offset: 0x1f8
	// Line 749, Address: 0x1b295c, Func Offset: 0x1fc
	// Line 752, Address: 0x1b2980, Func Offset: 0x220
	// Line 755, Address: 0x1b2988, Func Offset: 0x228
	// Line 756, Address: 0x1b2998, Func Offset: 0x238
	// Line 759, Address: 0x1b29a0, Func Offset: 0x240
	// Line 760, Address: 0x1b29b0, Func Offset: 0x250
	// Line 767, Address: 0x1b29b8, Func Offset: 0x258
	// Func End, Address: 0x1b29c8, Func Offset: 0x268
}

// 
// Start address: 0x1b29d0
void DdsPlayLight(int no)
{
	int i;
	unsigned char c_work;
	float light_rotation[4];
	// Line 772, Address: 0x1b29d0, Func Offset: 0
	// Line 778, Address: 0x1b29e0, Func Offset: 0x10
	// Line 779, Address: 0x1b29f8, Func Offset: 0x28
	// Line 781, Address: 0x1b2a20, Func Offset: 0x50
	// Line 782, Address: 0x1b2a38, Func Offset: 0x68
	// Line 783, Address: 0x1b2a54, Func Offset: 0x84
	// Line 785, Address: 0x1b2a84, Func Offset: 0xb4
	// Line 786, Address: 0x1b2a94, Func Offset: 0xc4
	// Line 787, Address: 0x1b2a9c, Func Offset: 0xcc
	// Line 788, Address: 0x1b2ab8, Func Offset: 0xe8
	// Line 790, Address: 0x1b2aec, Func Offset: 0x11c
	// Line 792, Address: 0x1b2afc, Func Offset: 0x12c
	// Line 795, Address: 0x1b2b04, Func Offset: 0x134
	// Line 796, Address: 0x1b2b1c, Func Offset: 0x14c
	// Line 797, Address: 0x1b2b38, Func Offset: 0x168
	// Line 799, Address: 0x1b2b68, Func Offset: 0x198
	// Line 800, Address: 0x1b2b7c, Func Offset: 0x1ac
	// Line 801, Address: 0x1b2b84, Func Offset: 0x1b4
	// Line 802, Address: 0x1b2ba0, Func Offset: 0x1d0
	// Line 804, Address: 0x1b2bd4, Func Offset: 0x204
	// Line 806, Address: 0x1b2be4, Func Offset: 0x214
	// Line 809, Address: 0x1b2bec, Func Offset: 0x21c
	// Line 810, Address: 0x1b2bf8, Func Offset: 0x228
	// Line 811, Address: 0x1b2c04, Func Offset: 0x234
	// Line 812, Address: 0x1b2c10, Func Offset: 0x240
	// Line 813, Address: 0x1b2c2c, Func Offset: 0x25c
	// Line 815, Address: 0x1b2c44, Func Offset: 0x274
	// Line 818, Address: 0x1b2c4c, Func Offset: 0x27c
	// Line 819, Address: 0x1b2c70, Func Offset: 0x2a0
	// Line 820, Address: 0x1b2c88, Func Offset: 0x2b8
	// Line 821, Address: 0x1b2ca0, Func Offset: 0x2d0
	// Line 824, Address: 0x1b2ca8, Func Offset: 0x2d8
	// Line 825, Address: 0x1b2ccc, Func Offset: 0x2fc
	// Line 826, Address: 0x1b2ce4, Func Offset: 0x314
	// Line 829, Address: 0x1b2cec, Func Offset: 0x31c
	// Line 830, Address: 0x1b2d10, Func Offset: 0x340
	// Line 831, Address: 0x1b2d28, Func Offset: 0x358
	// Line 834, Address: 0x1b2d30, Func Offset: 0x360
	// Line 835, Address: 0x1b2d50, Func Offset: 0x380
	// Line 838, Address: 0x1b2d58, Func Offset: 0x388
	// Line 839, Address: 0x1b2d74, Func Offset: 0x3a4
	// Line 846, Address: 0x1b2d7c, Func Offset: 0x3ac
	// Func End, Address: 0x1b2d90, Func Offset: 0x3c0
}

// 
// Start address: 0x1b2d90
void DdsPlayCharacter(int no)
{
	int i;
	unsigned char c_work;
	// Line 851, Address: 0x1b2d90, Func Offset: 0
	// Line 856, Address: 0x1b2d9c, Func Offset: 0xc
	// Line 857, Address: 0x1b2db4, Func Offset: 0x24
	// Line 859, Address: 0x1b2dec, Func Offset: 0x5c
	// Line 860, Address: 0x1b2e00, Func Offset: 0x70
	// Line 863, Address: 0x1b2e08, Func Offset: 0x78
	// Line 864, Address: 0x1b2e1c, Func Offset: 0x8c
	// Line 867, Address: 0x1b2e24, Func Offset: 0x94
	// Line 868, Address: 0x1b2e3c, Func Offset: 0xac
	// Line 869, Address: 0x1b2e50, Func Offset: 0xc0
	// Line 871, Address: 0x1b2e80, Func Offset: 0xf0
	// Line 872, Address: 0x1b2e94, Func Offset: 0x104
	// Line 873, Address: 0x1b2e9c, Func Offset: 0x10c
	// Line 874, Address: 0x1b2eb0, Func Offset: 0x120
	// Line 876, Address: 0x1b2ee4, Func Offset: 0x154
	// Line 878, Address: 0x1b2ef4, Func Offset: 0x164
	// Line 885, Address: 0x1b2efc, Func Offset: 0x16c
	// Func End, Address: 0x1b2f0c, Func Offset: 0x17c
}

// 
// Start address: 0x1b2f10
void DramaDemoSkipLast(DramaDemo_PlayInfo* info)
{
	int i;
	unsigned char node_no;
	unsigned short s_work;
	float plane;
	float roll;
	float interest[4];
	float position[4];
	// Line 892, Address: 0x1b2f10, Func Offset: 0
	// Line 901, Address: 0x1b2f28, Func Offset: 0x18
	// Line 903, Address: 0x1b2f30, Func Offset: 0x20
	// Line 905, Address: 0x1b2f40, Func Offset: 0x30
	// Line 908, Address: 0x1b2f70, Func Offset: 0x60
	// Line 909, Address: 0x1b2f88, Func Offset: 0x78
	// Line 910, Address: 0x1b2f94, Func Offset: 0x84
	// Line 911, Address: 0x1b2fac, Func Offset: 0x9c
	// Line 912, Address: 0x1b2fb0, Func Offset: 0xa0
	// Line 913, Address: 0x1b2fc8, Func Offset: 0xb8
	// Line 914, Address: 0x1b2fd4, Func Offset: 0xc4
	// Line 916, Address: 0x1b2fe8, Func Offset: 0xd8
	// Line 918, Address: 0x1b2ff4, Func Offset: 0xe4
	// Line 919, Address: 0x1b3010, Func Offset: 0x100
	// Line 920, Address: 0x1b3024, Func Offset: 0x114
	// Line 921, Address: 0x1b3028, Func Offset: 0x118
	// Line 922, Address: 0x1b3040, Func Offset: 0x130
	// Line 923, Address: 0x1b3058, Func Offset: 0x148
	// Line 924, Address: 0x1b3064, Func Offset: 0x154
	// Line 925, Address: 0x1b307c, Func Offset: 0x16c
	// Line 926, Address: 0x1b3098, Func Offset: 0x188
	// Line 927, Address: 0x1b30b0, Func Offset: 0x1a0
	// Line 928, Address: 0x1b30c0, Func Offset: 0x1b0
	// Line 929, Address: 0x1b30d0, Func Offset: 0x1c0
	// Line 933, Address: 0x1b30d8, Func Offset: 0x1c8
	// Line 936, Address: 0x1b30ec, Func Offset: 0x1dc
	// Line 937, Address: 0x1b30fc, Func Offset: 0x1ec
	// Line 938, Address: 0x1b3114, Func Offset: 0x204
	// Line 939, Address: 0x1b3128, Func Offset: 0x218
	// Line 940, Address: 0x1b3138, Func Offset: 0x228
	// Line 941, Address: 0x1b3140, Func Offset: 0x230
	// Line 942, Address: 0x1b3148, Func Offset: 0x238
	// Line 943, Address: 0x1b3150, Func Offset: 0x240
	// Line 946, Address: 0x1b316c, Func Offset: 0x25c
	// Line 947, Address: 0x1b3188, Func Offset: 0x278
	// Line 948, Address: 0x1b3190, Func Offset: 0x280
	// Line 953, Address: 0x1b31b8, Func Offset: 0x2a8
	// Line 954, Address: 0x1b31c4, Func Offset: 0x2b4
	// Line 955, Address: 0x1b31f0, Func Offset: 0x2e0
	// Line 956, Address: 0x1b3208, Func Offset: 0x2f8
	// Line 957, Address: 0x1b3220, Func Offset: 0x310
	// Line 958, Address: 0x1b3230, Func Offset: 0x320
	// Line 961, Address: 0x1b324c, Func Offset: 0x33c
	// Line 962, Address: 0x1b325c, Func Offset: 0x34c
	// Func End, Address: 0x1b3278, Func Offset: 0x368
}

// 
// Start address: 0x1b3280
void RotationToInterest(float* position, float* rotation, float* interest, float* roll)
{
	float vector[4];
	float matrix[4][4];
	// Line 977, Address: 0x1b3280, Func Offset: 0
	// Line 981, Address: 0x1b32a8, Func Offset: 0x28
	// Line 982, Address: 0x1b32d0, Func Offset: 0x50
	// Line 983, Address: 0x1b32e0, Func Offset: 0x60
	// Line 984, Address: 0x1b32f4, Func Offset: 0x74
	// Line 985, Address: 0x1b3308, Func Offset: 0x88
	// Line 986, Address: 0x1b3310, Func Offset: 0x90
	// Line 987, Address: 0x1b3318, Func Offset: 0x98
	// Line 988, Address: 0x1b3320, Func Offset: 0xa0
	// Line 989, Address: 0x1b334c, Func Offset: 0xcc
	// Line 990, Address: 0x1b335c, Func Offset: 0xdc
	// Line 991, Address: 0x1b336c, Func Offset: 0xec
	// Func End, Address: 0x1b338c, Func Offset: 0x10c
}

// 
// Start address: 0x1b3390
void DramaDemoFade()
{
	PicDraw_Data pic;
	// Line 998, Address: 0x1b3390, Func Offset: 0
	// Line 1001, Address: 0x1b33ac, Func Offset: 0x1c
	// Line 1004, Address: 0x1b33bc, Func Offset: 0x2c
	// Line 1005, Address: 0x1b33cc, Func Offset: 0x3c
	// Line 1006, Address: 0x1b33e8, Func Offset: 0x58
	// Line 1008, Address: 0x1b3418, Func Offset: 0x88
	// Line 1009, Address: 0x1b3450, Func Offset: 0xc0
	// Line 1011, Address: 0x1b345c, Func Offset: 0xcc
	// Line 1012, Address: 0x1b3484, Func Offset: 0xf4
	// Line 1013, Address: 0x1b3490, Func Offset: 0x100
	// Func End, Address: 0x1b34b4, Func Offset: 0x124
}

// 
// Start address: 0x1b34c0
int DramaDemoNumber()
{
	// Line 1019, Address: 0x1b34c0, Func Offset: 0
	// Line 1020, Address: 0x1b34c8, Func Offset: 0x8
	// Func End, Address: 0x1b34d0, Func Offset: 0x10
}

// 
// Start address: 0x1b34d0
void SubtitlesExec(DramaDemo_MessageTime* msg_time, int msg_no, int str_no, float timer)
{
	// Line 1027, Address: 0x1b34d0, Func Offset: 0
	// Line 1028, Address: 0x1b34d8, Func Offset: 0x8
	// Line 1029, Address: 0x1b34e0, Func Offset: 0x10
	// Line 1030, Address: 0x1b34e8, Func Offset: 0x18
	// Line 1031, Address: 0x1b34f0, Func Offset: 0x20
	// Func End, Address: 0x1b34f8, Func Offset: 0x28
}

// 
// Start address: 0x1b3500
void SubtitlesManager()
{
	// Line 1036, Address: 0x1b3500, Func Offset: 0
	// Line 1037, Address: 0x1b3508, Func Offset: 0x8
	// Line 1038, Address: 0x1b3518, Func Offset: 0x18
	// Line 1039, Address: 0x1b353c, Func Offset: 0x3c
	// Line 1040, Address: 0x1b3544, Func Offset: 0x44
	// Line 1043, Address: 0x1b354c, Func Offset: 0x4c
	// Line 1044, Address: 0x1b3570, Func Offset: 0x70
	// Line 1045, Address: 0x1b3580, Func Offset: 0x80
	// Line 1046, Address: 0x1b3594, Func Offset: 0x94
	// Line 1048, Address: 0x1b359c, Func Offset: 0x9c
	// Line 1049, Address: 0x1b35b8, Func Offset: 0xb8
	// Line 1050, Address: 0x1b35d0, Func Offset: 0xd0
	// Line 1051, Address: 0x1b35e8, Func Offset: 0xe8
	// Line 1053, Address: 0x1b3600, Func Offset: 0x100
	// Line 1054, Address: 0x1b362c, Func Offset: 0x12c
	// Line 1056, Address: 0x1b363c, Func Offset: 0x13c
	// Line 1057, Address: 0x1b3664, Func Offset: 0x164
	// Line 1058, Address: 0x1b366c, Func Offset: 0x16c
	// Line 1059, Address: 0x1b3680, Func Offset: 0x180
	// Line 1061, Address: 0x1b3698, Func Offset: 0x198
	// Line 1063, Address: 0x1b36d8, Func Offset: 0x1d8
	// Line 1064, Address: 0x1b36f0, Func Offset: 0x1f0
	// Line 1065, Address: 0x1b3704, Func Offset: 0x204
	// Line 1067, Address: 0x1b3718, Func Offset: 0x218
	// Func End, Address: 0x1b3728, Func Offset: 0x228
}

