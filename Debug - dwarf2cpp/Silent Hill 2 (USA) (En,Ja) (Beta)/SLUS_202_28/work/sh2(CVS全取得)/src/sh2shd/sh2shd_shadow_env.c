typedef struct DROP_SHADOW_ENV;
typedef struct PAD_2D;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct PAD_INFO;
typedef struct SubCharacter;
typedef struct _AnimeInfo;
typedef struct SHADOW_ENV;
typedef struct SHADOW_OUTDOOR_HEAD;
typedef struct shSkelton;
typedef struct SHADOW_SHAPE_FRAME;
typedef struct JMS_SHADOW_ENV;
typedef struct SHADOW_CHAR_MAN;
typedef union Q_WORDDATA;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct shPlayerWork;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct SHADOW_OUTDOOR_MAN;
typedef struct SHADOW_MAN;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct SHADOW_PACKET_BUF;
typedef struct _anon0;
typedef union _anon1;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct _CL_VHIT_RESULT;
typedef union _anon2;
typedef struct _anon3;
typedef struct PAD_3D;

typedef void(*type_4)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);

typedef _AnimeInfo type_0[16];
typedef SHADOW_ENV type_1[6];
typedef float type_2[4][2];
typedef _AnimeInfo type_3[27];
typedef PAD_INFO type_5[10];
typedef unsigned char type_7[69];
typedef _AnimeInfo type_8[30];
typedef SHADOW_ENV type_9[3];
typedef unsigned char type_10[4];
typedef float type_11[2];
typedef _AnimeInfo type_12[7];
typedef _AnimeInfo type_13[6];
typedef unsigned char type_14[4];
typedef SHADOW_ENV type_15[3];
typedef unsigned char type_16[4];
typedef unsigned int type_17[4];
typedef unsigned short type_18[8];
typedef float type_19[4];
typedef _AnimeInfo type_20[8];
typedef float type_21[4];
typedef unsigned char type_22[16];
typedef int type_23[4];
typedef short type_24[8];
typedef char type_25[16];
typedef unsigned char type_26[14];
typedef _AnimeInfo type_27[2];
typedef _AnimeInfo type_28[10];
typedef SHADOW_ENV type_29[10];
typedef unsigned long type_30[2];
typedef unsigned char type_31[2];
typedef _AnimeInfo type_32[35];
typedef unsigned char type_33[2];
typedef _AnimeInfo type_34[1];
typedef _AnimeInfo type_35[36];
typedef unsigned char type_36[97];
typedef SHADOW_ENV type_37[1];
typedef _AnimeInfo type_38[6];
typedef float type_39[4];
typedef float type_40[4];
typedef float type_41[4][4];
typedef SHADOW_ENV type_42[23];
typedef SHADOW_CHAR_MAN* type_43[16];
typedef unsigned char type_44[20];
typedef SHADOW_ENV type_45[1];
typedef SHADOW_ENV type_46[2];
typedef SHADOW_OUTDOOR_MAN* type_47[4];
typedef _AnimeInfo type_48[8];
typedef unsigned char type_49[2];
typedef _AnimeInfo type_50[12];
typedef _AnimeInfo type_51[32];
typedef SHADOW_ENV type_52[3];
typedef int type_53[4];
typedef _AnimeInfo type_54[10];
typedef float type_55[4];
typedef float type_56[4][4];
typedef _AnimeInfo type_57[29];
typedef shAttackInfo type_58[66];
typedef unsigned char type_59[14];
typedef _AnimeInfo type_60[22];

struct DROP_SHADOW_ENV
{
	short block;
	float alpha_min;
	float alpha_max;
	float height_revision;
	unsigned int color;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
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

struct SHADOW_ENV
{
	short block;
	short clip_kind;
	float leng;
};

struct SHADOW_OUTDOOR_HEAD
{
	unsigned short kind;
	short map_id;
	short obj_num;
	short reserve1;
	short reserve2;
	short reserve3;
	short reserve4;
	short reserve5;
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

struct SHADOW_SHAPE_FRAME
{
	float local_world[4][4];
	float local_light_position[4];
	Q_WORDDATA length;
	unsigned int* pRefPacket;
	unsigned int* pRawData;
	unsigned int* pKickAddr;
	short obj_id;
};

struct JMS_SHADOW_ENV
{
	short light_kind;
	float bias;
	float height_revision;
	float scale;
};

struct SHADOW_CHAR_MAN
{
	SubCharacter* scp;
	unsigned short kind;
	short id;
	unsigned char obj_num;
	float spot_cam_angle;
	short light_kind;
	float light_pos[4];
	float light_dir[4];
	float light_param[4];
	float drop_shadow_matrix[4][4];
	Q_WORDDATA* raw_data;
	SHADOW_SHAPE_FRAME* shape;
};

union Q_WORDDATA
{
	unsigned int ui32[4];
	unsigned short us16[8];
	float fl32[4];
	unsigned char uc8[16];
	int si32[4];
	short ss16[8];
	char sc8[16];
	unsigned long ul64[2];
	<unknown fundamental type (0xa510)> ul128;
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

struct SHADOW_OUTDOOR_MAN
{
	unsigned short kind;
	short map_id;
	unsigned char lighting_mode;
	unsigned char obj_num;
	short light_kind;
	float light_pos[4];
	float light_dir[4];
	float light_param[4];
	Q_WORDDATA* raw_data;
	SHADOW_SHAPE_FRAME* shape;
};

struct SHADOW_MAN
{
	char change_flag;
	short spot_char_num;
	short spot_bg_num;
	short self_num;
	short parallel_char_num;
	short parallel_bg_num;
	short point_char_num;
	short char_man_num;
	short outdoor_man_num;
	short enemy_num;
	short chr_shadow_switch;
	short bg_shadow_switch;
	SHADOW_CHAR_MAN* char_man[16];
	SHADOW_OUTDOOR_MAN* outdoor_man[4];
	SHADOW_PACKET_BUF reftag_pool;
	SHADOW_PACKET_BUF kick_packet;
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

struct SHADOW_PACKET_BUF
{
	Q_WORDDATA* head;
	Q_WORDDATA* curr;
};

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
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

struct _anon3
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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo dmaria_anim[30];
_AnimeInfo p_hhh_mar_anim[6];
_AnimeInfo dangela_anim[32];
_AnimeInfo pangela_anim[6];
_AnimeInfo scu_anim[36];
_AnimeInfo d_scu_anim[10];
_AnimeInfo mkn_anim[35];
_AnimeInfo d_mkn_anim[8];
_AnimeInfo nse_anim[27];
_AnimeInfo d_nse_anim[1];
_AnimeInfo red_anim[12];
_AnimeInfo d_red_anim[7];
_AnimeInfo oni_anim[16];
_AnimeInfo d_oni_anim[10];
_AnimeInfo edb_anim[22];
_AnimeInfo d_edb_anim[2];
_AnimeInfo pap_anim[29];
_AnimeInfo d_pap_anim[8];
DROP_SHADOW_ENV default_drop_env;
SHADOW_ENV default_env_bg;
SHADOW_ENV default_env_chr;
SHADOW_ENV cb_env[2];
SHADOW_ENV cc_env[3];
SHADOW_ENV er_env[1];
SHADOW_ENV bw_env[3];
SHADOW_ENV ap_env[3];
SHADOW_ENV hp_env[23];
SHADOW_ENV ps_env[6];
SHADOW_ENV rr_env[10];
SHADOW_ENV ru_env[1];
shPlayerWork sh2jms;
float demo_frame;
SHADOW_MAN shadow_man;

void sh2shd_get_shadow_env_bg(SHADOW_ENV* env, SHADOW_OUTDOOR_HEAD* head);
void sh2shd_get_shadow_env_chr(SHADOW_ENV* env, SHADOW_CHAR_MAN* chr_man, int glb_coord, int map_id);
void sh2shd_get_demo_shadow_env_for_bg(SHADOW_ENV* env, int demo_no);
void sh2shd_get_demo_shadow_env_for_char(SHADOW_ENV* env, SHADOW_CHAR_MAN* man, int demo_no);
void sh2shd_get_jms_shadow_env(JMS_SHADOW_ENV* env, int light_kind, float* light_dir);
void sh2shd_get_demo_jms_shadow_env(JMS_SHADOW_ENV* env, int demo_no);
void sh2shd_get_drop_shadow_env(DROP_SHADOW_ENV* env, int glb_coord, int map_id, float x, float z);
void sh2shd_get_demo_drop_shadow_env(DROP_SHADOW_ENV* env, int demo_no);
void sh2shd_demo_shadow_off(int demo_no);
void sh2shd_shadow_off(int glb_coord, int map_id);
float get_demo_frame();
void get_map_id(int* glb_coord, int* map_id);
int check_bg_light_exist();

// 
// Start address: 0x27e310
void sh2shd_get_shadow_env_bg(SHADOW_ENV* env, SHADOW_OUTDOOR_HEAD* head)
{
	float cam_pos[4];
	int flag;
	int i;
	// Line 412, Address: 0x27e310, Func Offset: 0
	// Line 415, Address: 0x27e320, Func Offset: 0x10
	// Line 417, Address: 0x27e338, Func Offset: 0x28
	// Line 420, Address: 0x27e364, Func Offset: 0x54
	// Line 422, Address: 0x27e370, Func Offset: 0x60
	// Line 424, Address: 0x27e390, Func Offset: 0x80
	// Line 425, Address: 0x27e3a0, Func Offset: 0x90
	// Line 427, Address: 0x27e3a8, Func Offset: 0x98
	// Line 428, Address: 0x27e3bc, Func Offset: 0xac
	// Line 431, Address: 0x27e3c4, Func Offset: 0xb4
	// Line 433, Address: 0x27e3d0, Func Offset: 0xc0
	// Line 435, Address: 0x27e3f0, Func Offset: 0xe0
	// Line 436, Address: 0x27e400, Func Offset: 0xf0
	// Line 438, Address: 0x27e408, Func Offset: 0xf8
	// Line 439, Address: 0x27e41c, Func Offset: 0x10c
	// Line 448, Address: 0x27e424, Func Offset: 0x114
	// Line 450, Address: 0x27e430, Func Offset: 0x120
	// Line 452, Address: 0x27e450, Func Offset: 0x140
	// Line 453, Address: 0x27e460, Func Offset: 0x150
	// Line 455, Address: 0x27e468, Func Offset: 0x158
	// Line 456, Address: 0x27e47c, Func Offset: 0x16c
	// Line 459, Address: 0x27e484, Func Offset: 0x174
	// Line 461, Address: 0x27e494, Func Offset: 0x184
	// Line 462, Address: 0x27e498, Func Offset: 0x188
	// Line 463, Address: 0x27e4a0, Func Offset: 0x190
	// Line 464, Address: 0x27e4ac, Func Offset: 0x19c
	// Line 465, Address: 0x27e4b4, Func Offset: 0x1a4
	// Line 467, Address: 0x27e4c0, Func Offset: 0x1b0
	// Line 468, Address: 0x27e4c4, Func Offset: 0x1b4
	// Line 469, Address: 0x27e4c8, Func Offset: 0x1b8
	// Line 471, Address: 0x27e4d4, Func Offset: 0x1c4
	// Line 474, Address: 0x27e4dc, Func Offset: 0x1cc
	// Line 476, Address: 0x27e4e8, Func Offset: 0x1d8
	// Line 478, Address: 0x27e508, Func Offset: 0x1f8
	// Line 479, Address: 0x27e518, Func Offset: 0x208
	// Line 481, Address: 0x27e520, Func Offset: 0x210
	// Line 483, Address: 0x27e538, Func Offset: 0x228
	// Line 486, Address: 0x27e55c, Func Offset: 0x24c
	// Line 487, Address: 0x27e564, Func Offset: 0x254
	// Line 492, Address: 0x27e56c, Func Offset: 0x25c
	// Line 493, Address: 0x27e574, Func Offset: 0x264
	// Line 495, Address: 0x27e580, Func Offset: 0x270
	// Line 496, Address: 0x27e590, Func Offset: 0x280
	// Line 501, Address: 0x27e598, Func Offset: 0x288
	// Line 505, Address: 0x27e5a0, Func Offset: 0x290
	// Line 507, Address: 0x27e5ac, Func Offset: 0x29c
	// Line 509, Address: 0x27e5cc, Func Offset: 0x2bc
	// Line 510, Address: 0x27e5dc, Func Offset: 0x2cc
	// Line 512, Address: 0x27e5e4, Func Offset: 0x2d4
	// Line 514, Address: 0x27e5f8, Func Offset: 0x2e8
	// Line 518, Address: 0x27e608, Func Offset: 0x2f8
	// Line 519, Address: 0x27e634, Func Offset: 0x324
	// Line 521, Address: 0x27e63c, Func Offset: 0x32c
	// Line 524, Address: 0x27e644, Func Offset: 0x334
	// Line 526, Address: 0x27e650, Func Offset: 0x340
	// Line 528, Address: 0x27e670, Func Offset: 0x360
	// Line 529, Address: 0x27e680, Func Offset: 0x370
	// Line 531, Address: 0x27e688, Func Offset: 0x378
	// Line 533, Address: 0x27e6a0, Func Offset: 0x390
	// Line 537, Address: 0x27e6b0, Func Offset: 0x3a0
	// Line 538, Address: 0x27e6bc, Func Offset: 0x3ac
	// Line 539, Address: 0x27e6dc, Func Offset: 0x3cc
	// Line 541, Address: 0x27e6e4, Func Offset: 0x3d4
	// Line 544, Address: 0x27e6ec, Func Offset: 0x3dc
	// Line 546, Address: 0x27e6f8, Func Offset: 0x3e8
	// Line 548, Address: 0x27e718, Func Offset: 0x408
	// Line 549, Address: 0x27e728, Func Offset: 0x418
	// Line 551, Address: 0x27e730, Func Offset: 0x420
	// Line 552, Address: 0x27e744, Func Offset: 0x434
	// Line 555, Address: 0x27e74c, Func Offset: 0x43c
	// Line 557, Address: 0x27e758, Func Offset: 0x448
	// Line 559, Address: 0x27e778, Func Offset: 0x468
	// Line 560, Address: 0x27e788, Func Offset: 0x478
	// Line 562, Address: 0x27e790, Func Offset: 0x480
	// Line 567, Address: 0x27e7a0, Func Offset: 0x490
	// Func End, Address: 0x27e7b4, Func Offset: 0x4a4
}

// 
// Start address: 0x27e7c0
void sh2shd_get_shadow_env_chr(SHADOW_ENV* env, SHADOW_CHAR_MAN* chr_man, int glb_coord, int map_id)
{
	// Line 573, Address: 0x27e7c0, Func Offset: 0
	// Line 575, Address: 0x27e7d8, Func Offset: 0x18
	// Line 577, Address: 0x27e7e0, Func Offset: 0x20
	// Line 598, Address: 0x27e808, Func Offset: 0x48
	// Line 601, Address: 0x27e84c, Func Offset: 0x8c
	// Line 602, Address: 0x27e854, Func Offset: 0x94
	// Line 603, Address: 0x27e85c, Func Offset: 0x9c
	// Line 606, Address: 0x27e864, Func Offset: 0xa4
	// Line 607, Address: 0x27e86c, Func Offset: 0xac
	// Line 610, Address: 0x27e874, Func Offset: 0xb4
	// Line 611, Address: 0x27e894, Func Offset: 0xd4
	// Line 612, Address: 0x27e89c, Func Offset: 0xdc
	// Line 618, Address: 0x27e8a4, Func Offset: 0xe4
	// Line 620, Address: 0x27e8b4, Func Offset: 0xf4
	// Line 621, Address: 0x27e8dc, Func Offset: 0x11c
	// Line 623, Address: 0x27e960, Func Offset: 0x1a0
	// Line 626, Address: 0x27e968, Func Offset: 0x1a8
	// Line 629, Address: 0x27e970, Func Offset: 0x1b0
	// Line 630, Address: 0x27e97c, Func Offset: 0x1bc
	// Line 633, Address: 0x27e984, Func Offset: 0x1c4
	// Line 640, Address: 0x27e98c, Func Offset: 0x1cc
	// Line 643, Address: 0x27e9b8, Func Offset: 0x1f8
	// Line 644, Address: 0x27e9c0, Func Offset: 0x200
	// Line 647, Address: 0x27e9c8, Func Offset: 0x208
	// Line 648, Address: 0x27e9d4, Func Offset: 0x214
	// Line 651, Address: 0x27e9dc, Func Offset: 0x21c
	// Line 652, Address: 0x27e9f8, Func Offset: 0x238
	// Line 667, Address: 0x27ea00, Func Offset: 0x240
	// Func End, Address: 0x27ea18, Func Offset: 0x258
}

// 
// Start address: 0x27ea20
void sh2shd_get_demo_shadow_env_for_bg(SHADOW_ENV* env, int demo_no)
{
	float env_demo_frame;
	float env_demo_frame;
	// Line 672, Address: 0x27ea20, Func Offset: 0
	// Line 675, Address: 0x27ea30, Func Offset: 0x10
	// Line 677, Address: 0x27ea48, Func Offset: 0x28
	// Line 689, Address: 0x27eb54, Func Offset: 0x134
	// Line 690, Address: 0x27eb5c, Func Offset: 0x13c
	// Line 691, Address: 0x27eb64, Func Offset: 0x144
	// Line 696, Address: 0x27eb6c, Func Offset: 0x14c
	// Line 697, Address: 0x27eb74, Func Offset: 0x154
	// Line 705, Address: 0x27eb7c, Func Offset: 0x15c
	// Line 706, Address: 0x27eb84, Func Offset: 0x164
	// Line 724, Address: 0x27eb8c, Func Offset: 0x16c
	// Line 725, Address: 0x27eb94, Func Offset: 0x174
	// Line 753, Address: 0x27eb9c, Func Offset: 0x17c
	// Line 754, Address: 0x27eba8, Func Offset: 0x188
	// Line 755, Address: 0x27ebb0, Func Offset: 0x190
	// Line 760, Address: 0x27ebb8, Func Offset: 0x198
	// Line 761, Address: 0x27ebc0, Func Offset: 0x1a0
	// Line 778, Address: 0x27ebc8, Func Offset: 0x1a8
	// Line 779, Address: 0x27ebd0, Func Offset: 0x1b0
	// Line 780, Address: 0x27ec0c, Func Offset: 0x1ec
	// Line 782, Address: 0x27ec18, Func Offset: 0x1f8
	// Line 784, Address: 0x27ec20, Func Offset: 0x200
	// Line 811, Address: 0x27ec28, Func Offset: 0x208
	// Line 813, Address: 0x27ec30, Func Offset: 0x210
	// Line 815, Address: 0x27ec68, Func Offset: 0x248
	// Line 818, Address: 0x27ec70, Func Offset: 0x250
	// Line 825, Address: 0x27ec78, Func Offset: 0x258
	// Line 850, Address: 0x27ec80, Func Offset: 0x260
	// Func End, Address: 0x27ec94, Func Offset: 0x274
}

// 
// Start address: 0x27eca0
void sh2shd_get_demo_shadow_env_for_char(SHADOW_ENV* env, SHADOW_CHAR_MAN* man, int demo_no)
{
	float env_demo_frame;
	float env_demo_frame;
	float env_demo_frame;
	float cam_pos[4];
	float env_demo_frame;
	// Line 863, Address: 0x27eca0, Func Offset: 0
	// Line 864, Address: 0x27ecb8, Func Offset: 0x18
	// Line 866, Address: 0x27ecd0, Func Offset: 0x30
	// Line 879, Address: 0x27ee0c, Func Offset: 0x16c
	// Line 880, Address: 0x27ee14, Func Offset: 0x174
	// Line 897, Address: 0x27ee1c, Func Offset: 0x17c
	// Line 899, Address: 0x27ee24, Func Offset: 0x184
	// Line 905, Address: 0x27ee2c, Func Offset: 0x18c
	// Line 908, Address: 0x27ee34, Func Offset: 0x194
	// Line 909, Address: 0x27ee50, Func Offset: 0x1b0
	// Line 910, Address: 0x27ee60, Func Offset: 0x1c0
	// Line 912, Address: 0x27ee68, Func Offset: 0x1c8
	// Line 913, Address: 0x27ee70, Func Offset: 0x1d0
	// Line 914, Address: 0x27ee7c, Func Offset: 0x1dc
	// Line 930, Address: 0x27ee84, Func Offset: 0x1e4
	// Line 932, Address: 0x27ee8c, Func Offset: 0x1ec
	// Line 940, Address: 0x27ee94, Func Offset: 0x1f4
	// Line 941, Address: 0x27ee9c, Func Offset: 0x1fc
	// Line 952, Address: 0x27eea4, Func Offset: 0x204
	// Line 953, Address: 0x27eeac, Func Offset: 0x20c
	// Line 956, Address: 0x27eeb4, Func Offset: 0x214
	// Line 957, Address: 0x27eebc, Func Offset: 0x21c
	// Line 972, Address: 0x27eec4, Func Offset: 0x224
	// Line 973, Address: 0x27eed0, Func Offset: 0x230
	// Line 975, Address: 0x27eed8, Func Offset: 0x238
	// Line 976, Address: 0x27ef20, Func Offset: 0x280
	// Line 978, Address: 0x27ef30, Func Offset: 0x290
	// Line 979, Address: 0x27ef38, Func Offset: 0x298
	// Line 981, Address: 0x27ef40, Func Offset: 0x2a0
	// Line 982, Address: 0x27ef60, Func Offset: 0x2c0
	// Line 984, Address: 0x27ef68, Func Offset: 0x2c8
	// Line 993, Address: 0x27ef70, Func Offset: 0x2d0
	// Line 995, Address: 0x27ef78, Func Offset: 0x2d8
	// Line 996, Address: 0x27efb4, Func Offset: 0x314
	// Line 998, Address: 0x27efc4, Func Offset: 0x324
	// Line 1000, Address: 0x27efcc, Func Offset: 0x32c
	// Line 1014, Address: 0x27efd4, Func Offset: 0x334
	// Line 1018, Address: 0x27efdc, Func Offset: 0x33c
	// Line 1022, Address: 0x27efe4, Func Offset: 0x344
	// Line 1041, Address: 0x27efec, Func Offset: 0x34c
	// Line 1042, Address: 0x27eff4, Func Offset: 0x354
	// Line 1054, Address: 0x27effc, Func Offset: 0x35c
	// Line 1081, Address: 0x27f004, Func Offset: 0x364
	// Line 1083, Address: 0x27f014, Func Offset: 0x374
	// Line 1084, Address: 0x27f04c, Func Offset: 0x3ac
	// Line 1085, Address: 0x27f05c, Func Offset: 0x3bc
	// Line 1086, Address: 0x27f098, Func Offset: 0x3f8
	// Line 1088, Address: 0x27f0a8, Func Offset: 0x408
	// Line 1090, Address: 0x27f0c8, Func Offset: 0x428
	// Line 1094, Address: 0x27f0d0, Func Offset: 0x430
	// Line 1096, Address: 0x27f0e0, Func Offset: 0x440
	// Line 1097, Address: 0x27f118, Func Offset: 0x478
	// Line 1098, Address: 0x27f120, Func Offset: 0x480
	// Line 1099, Address: 0x27f158, Func Offset: 0x4b8
	// Line 1102, Address: 0x27f160, Func Offset: 0x4c0
	// Line 1110, Address: 0x27f168, Func Offset: 0x4c8
	// Line 1111, Address: 0x27f170, Func Offset: 0x4d0
	// Line 1131, Address: 0x27f178, Func Offset: 0x4d8
	// Line 1132, Address: 0x27f180, Func Offset: 0x4e0
	// Line 1135, Address: 0x27f188, Func Offset: 0x4e8
	// Line 1146, Address: 0x27f190, Func Offset: 0x4f0
	// Func End, Address: 0x27f1a8, Func Offset: 0x508
}

// 
// Start address: 0x27f1b0
void sh2shd_get_jms_shadow_env(JMS_SHADOW_ENV* env, int light_kind, float* light_dir)
{
	int flag;
	JMS_SHADOW_ENV default_env_self_para;
	JMS_SHADOW_ENV default_env_self_spot;
	float cam_pos[4];
	int map_id;
	int glb_coord;
	// Line 1151, Address: 0x27f1b0, Func Offset: 0
	// Line 1168, Address: 0x27f1d0, Func Offset: 0x20
	// Line 1170, Address: 0x27f1e4, Func Offset: 0x34
	// Line 1173, Address: 0x27f1f8, Func Offset: 0x48
	// Line 1175, Address: 0x27f208, Func Offset: 0x58
	// Line 1177, Address: 0x27f22c, Func Offset: 0x7c
	// Line 1192, Address: 0x27f268, Func Offset: 0xb8
	// Line 1195, Address: 0x27f298, Func Offset: 0xe8
	// Line 1196, Address: 0x27f2a4, Func Offset: 0xf4
	// Line 1197, Address: 0x27f2b4, Func Offset: 0x104
	// Line 1202, Address: 0x27f2bc, Func Offset: 0x10c
	// Line 1203, Address: 0x27f2c4, Func Offset: 0x114
	// Line 1205, Address: 0x27f2d0, Func Offset: 0x120
	// Line 1206, Address: 0x27f2e0, Func Offset: 0x130
	// Line 1209, Address: 0x27f2e8, Func Offset: 0x138
	// Line 1212, Address: 0x27f2f0, Func Offset: 0x140
	// Line 1213, Address: 0x27f2fc, Func Offset: 0x14c
	// Line 1215, Address: 0x27f304, Func Offset: 0x154
	// Line 1217, Address: 0x27f328, Func Offset: 0x178
	// Line 1218, Address: 0x27f338, Func Offset: 0x188
	// Line 1219, Address: 0x27f34c, Func Offset: 0x19c
	// Line 1221, Address: 0x27f360, Func Offset: 0x1b0
	// Line 1222, Address: 0x27f364, Func Offset: 0x1b4
	// Line 1223, Address: 0x27f370, Func Offset: 0x1c0
	// Line 1224, Address: 0x27f374, Func Offset: 0x1c4
	// Line 1225, Address: 0x27f378, Func Offset: 0x1c8
	// Line 1228, Address: 0x27f380, Func Offset: 0x1d0
	// Line 1229, Address: 0x27f38c, Func Offset: 0x1dc
	// Line 1230, Address: 0x27f398, Func Offset: 0x1e8
	// Line 1231, Address: 0x27f3a4, Func Offset: 0x1f4
	// Line 1233, Address: 0x27f3a8, Func Offset: 0x1f8
	// Line 1237, Address: 0x27f3b0, Func Offset: 0x200
	// Line 1240, Address: 0x27f3b8, Func Offset: 0x208
	// Line 1243, Address: 0x27f3d0, Func Offset: 0x220
	// Line 1246, Address: 0x27f3d8, Func Offset: 0x228
	// Line 1249, Address: 0x27f3e0, Func Offset: 0x230
	// Line 1252, Address: 0x27f410, Func Offset: 0x260
	// Line 1253, Address: 0x27f41c, Func Offset: 0x26c
	// Line 1254, Address: 0x27f440, Func Offset: 0x290
	// Line 1255, Address: 0x27f448, Func Offset: 0x298
	// Line 1259, Address: 0x27f450, Func Offset: 0x2a0
	// Line 1260, Address: 0x27f460, Func Offset: 0x2b0
	// Line 1261, Address: 0x27f468, Func Offset: 0x2b8
	// Line 1264, Address: 0x27f470, Func Offset: 0x2c0
	// Line 1265, Address: 0x27f480, Func Offset: 0x2d0
	// Line 1268, Address: 0x27f488, Func Offset: 0x2d8
	// Line 1271, Address: 0x27f490, Func Offset: 0x2e0
	// Line 1274, Address: 0x27f4e4, Func Offset: 0x334
	// Line 1275, Address: 0x27f4ec, Func Offset: 0x33c
	// Line 1278, Address: 0x27f4f4, Func Offset: 0x344
	// Line 1279, Address: 0x27f504, Func Offset: 0x354
	// Line 1280, Address: 0x27f50c, Func Offset: 0x35c
	// Line 1283, Address: 0x27f514, Func Offset: 0x364
	// Line 1284, Address: 0x27f518, Func Offset: 0x368
	// Line 1290, Address: 0x27f520, Func Offset: 0x370
	// Line 1291, Address: 0x27f56c, Func Offset: 0x3bc
	// Line 1292, Address: 0x27f5b0, Func Offset: 0x400
	// Line 1294, Address: 0x27f5b8, Func Offset: 0x408
	// Line 1297, Address: 0x27f5c0, Func Offset: 0x410
	// Line 1298, Address: 0x27f5cc, Func Offset: 0x41c
	// Line 1299, Address: 0x27f5d4, Func Offset: 0x424
	// Line 1302, Address: 0x27f5dc, Func Offset: 0x42c
	// Line 1319, Address: 0x27f5e4, Func Offset: 0x434
	// Func End, Address: 0x27f600, Func Offset: 0x450
}

// 
// Start address: 0x27f600
void sh2shd_get_demo_jms_shadow_env(JMS_SHADOW_ENV* env, int demo_no)
{
	float mat[4][4];
	float env_demo_frame;
	float env_demo_frame;
	float env_demo_frame;
	float env_demo_frame;
	float scale_test2;
	float height_test2;
	float bias_test2;
	// Line 1325, Address: 0x27f600, Func Offset: 0
	// Line 1346, Address: 0x27f610, Func Offset: 0x10
	// Line 1347, Address: 0x27f618, Func Offset: 0x18
	// Line 1348, Address: 0x27f620, Func Offset: 0x20
	// Line 1349, Address: 0x27f628, Func Offset: 0x28
	// Line 1351, Address: 0x27f630, Func Offset: 0x30
	// Line 1371, Address: 0x27f710, Func Offset: 0x110
	// Line 1375, Address: 0x27f718, Func Offset: 0x118
	// Line 1380, Address: 0x27f720, Func Offset: 0x120
	// Line 1381, Address: 0x27f728, Func Offset: 0x128
	// Line 1389, Address: 0x27f730, Func Offset: 0x130
	// Line 1391, Address: 0x27f738, Func Offset: 0x138
	// Line 1392, Address: 0x27f740, Func Offset: 0x140
	// Line 1393, Address: 0x27f748, Func Offset: 0x148
	// Line 1398, Address: 0x27f750, Func Offset: 0x150
	// Line 1399, Address: 0x27f758, Func Offset: 0x158
	// Line 1405, Address: 0x27f760, Func Offset: 0x160
	// Line 1406, Address: 0x27f768, Func Offset: 0x168
	// Line 1421, Address: 0x27f770, Func Offset: 0x170
	// Line 1422, Address: 0x27f778, Func Offset: 0x178
	// Line 1447, Address: 0x27f780, Func Offset: 0x180
	// Line 1449, Address: 0x27f788, Func Offset: 0x188
	// Line 1450, Address: 0x27f7c0, Func Offset: 0x1c0
	// Line 1451, Address: 0x27f7d0, Func Offset: 0x1d0
	// Line 1453, Address: 0x27f80c, Func Offset: 0x20c
	// Line 1454, Address: 0x27f81c, Func Offset: 0x21c
	// Line 1455, Address: 0x27f83c, Func Offset: 0x23c
	// Line 1457, Address: 0x27f84c, Func Offset: 0x24c
	// Line 1459, Address: 0x27f854, Func Offset: 0x254
	// Line 1481, Address: 0x27f85c, Func Offset: 0x25c
	// Line 1483, Address: 0x27f864, Func Offset: 0x264
	// Line 1484, Address: 0x27f898, Func Offset: 0x298
	// Line 1485, Address: 0x27f8a8, Func Offset: 0x2a8
	// Line 1486, Address: 0x27f8e4, Func Offset: 0x2e4
	// Line 1487, Address: 0x27f8f4, Func Offset: 0x2f4
	// Line 1488, Address: 0x27f914, Func Offset: 0x314
	// Line 1490, Address: 0x27f91c, Func Offset: 0x31c
	// Line 1500, Address: 0x27f924, Func Offset: 0x324
	// Line 1514, Address: 0x27f92c, Func Offset: 0x32c
	// Line 1522, Address: 0x27f934, Func Offset: 0x334
	// Line 1523, Address: 0x27f93c, Func Offset: 0x33c
	// Line 1524, Address: 0x27f948, Func Offset: 0x348
	// Line 1527, Address: 0x27f950, Func Offset: 0x350
	// Line 1528, Address: 0x27f958, Func Offset: 0x358
	// Line 1554, Address: 0x27f960, Func Offset: 0x360
	// Line 1556, Address: 0x27f968, Func Offset: 0x368
	// Line 1558, Address: 0x27f970, Func Offset: 0x370
	// Line 1559, Address: 0x27f9a8, Func Offset: 0x3a8
	// Line 1560, Address: 0x27f9b8, Func Offset: 0x3b8
	// Line 1561, Address: 0x27f9f8, Func Offset: 0x3f8
	// Line 1562, Address: 0x27fa08, Func Offset: 0x408
	// Line 1563, Address: 0x27fa44, Func Offset: 0x444
	// Line 1564, Address: 0x27fa54, Func Offset: 0x454
	// Line 1566, Address: 0x27fa94, Func Offset: 0x494
	// Line 1567, Address: 0x27fa9c, Func Offset: 0x49c
	// Line 1568, Address: 0x27faa8, Func Offset: 0x4a8
	// Line 1569, Address: 0x27fab4, Func Offset: 0x4b4
	// Line 1572, Address: 0x27fac0, Func Offset: 0x4c0
	// Line 1585, Address: 0x27fac8, Func Offset: 0x4c8
	// Line 1604, Address: 0x27fad0, Func Offset: 0x4d0
	// Line 1614, Address: 0x27fad8, Func Offset: 0x4d8
	// Line 1615, Address: 0x27fae8, Func Offset: 0x4e8
	// Line 1616, Address: 0x27fb00, Func Offset: 0x500
	// Line 1617, Address: 0x27fb24, Func Offset: 0x524
	// Line 1619, Address: 0x27fb2c, Func Offset: 0x52c
	// Line 1624, Address: 0x27fb34, Func Offset: 0x534
	// Line 1625, Address: 0x27fb3c, Func Offset: 0x53c
	// Line 1628, Address: 0x27fb44, Func Offset: 0x544
	// Line 1629, Address: 0x27fb4c, Func Offset: 0x54c
	// Line 1644, Address: 0x27fb54, Func Offset: 0x554
	// Line 1653, Address: 0x27fb58, Func Offset: 0x558
	// Func End, Address: 0x27fb6c, Func Offset: 0x56c
}

// 
// Start address: 0x27fb70
void sh2shd_get_drop_shadow_env(DROP_SHADOW_ENV* env, int glb_coord, int map_id, float x, float z)
{
	// Line 1664, Address: 0x27fb70, Func Offset: 0
	// Line 1666, Address: 0x27fba0, Func Offset: 0x30
	// Line 1671, Address: 0x27fbcc, Func Offset: 0x5c
	// Line 1674, Address: 0x27fbec, Func Offset: 0x7c
	// Line 1675, Address: 0x27fbf4, Func Offset: 0x84
	// Line 1677, Address: 0x27fbf8, Func Offset: 0x88
	// Line 1684, Address: 0x27fc00, Func Offset: 0x90
	// Line 1687, Address: 0x27fc14, Func Offset: 0xa4
	// Line 1688, Address: 0x27fc34, Func Offset: 0xc4
	// Line 1689, Address: 0x27fc44, Func Offset: 0xd4
	// Line 1690, Address: 0x27fc84, Func Offset: 0x114
	// Line 1693, Address: 0x27fc8c, Func Offset: 0x11c
	// Line 1699, Address: 0x27fc94, Func Offset: 0x124
	// Line 1746, Address: 0x27fc9c, Func Offset: 0x12c
	// Func End, Address: 0x27fca4, Func Offset: 0x134
}

// 
// Start address: 0x27fcb0
void sh2shd_get_demo_drop_shadow_env(DROP_SHADOW_ENV* env, int demo_no)
{
	// Line 1750, Address: 0x27fcb0, Func Offset: 0
	// Line 1752, Address: 0x27fce0, Func Offset: 0x30
	// Line 1755, Address: 0x27fd2c, Func Offset: 0x7c
	// Line 1759, Address: 0x27fd34, Func Offset: 0x84
	// Line 1760, Address: 0x27fd3c, Func Offset: 0x8c
	// Line 1761, Address: 0x27fd40, Func Offset: 0x90
	// Line 1766, Address: 0x27fd48, Func Offset: 0x98
	// Line 1767, Address: 0x27fd50, Func Offset: 0xa0
	// Line 1768, Address: 0x27fd54, Func Offset: 0xa4
	// Line 1771, Address: 0x27fd58, Func Offset: 0xa8
	// Func End, Address: 0x27fd60, Func Offset: 0xb0
}

// 
// Start address: 0x27fd60
void sh2shd_demo_shadow_off(int demo_no)
{
	float mat[4][4];
	float cam_pos[4];
	float env_demo_frame;
	float env_demo_frame;
	float test_time;
	float demo_frame;
	float tmp_time;
	// Line 1815, Address: 0x27fd60, Func Offset: 0
	// Line 1818, Address: 0x27fd6c, Func Offset: 0xc
	// Line 1858, Address: 0x27fdec, Func Offset: 0x8c
	// Line 1859, Address: 0x27fdfc, Func Offset: 0x9c
	// Line 1860, Address: 0x27fe0c, Func Offset: 0xac
	// Line 1863, Address: 0x27fe14, Func Offset: 0xb4
	// Line 1866, Address: 0x27fe20, Func Offset: 0xc0
	// Line 1867, Address: 0x27fe30, Func Offset: 0xd0
	// Line 1868, Address: 0x27fe50, Func Offset: 0xf0
	// Line 1871, Address: 0x27fe68, Func Offset: 0x108
	// Line 1872, Address: 0x27fe7c, Func Offset: 0x11c
	// Line 1874, Address: 0x27fe90, Func Offset: 0x130
	// Line 1875, Address: 0x27fea4, Func Offset: 0x144
	// Line 1877, Address: 0x27feb8, Func Offset: 0x158
	// Line 1878, Address: 0x27fecc, Func Offset: 0x16c
	// Line 1879, Address: 0x27fee0, Func Offset: 0x180
	// Line 1880, Address: 0x27fef4, Func Offset: 0x194
	// Line 1881, Address: 0x27ff08, Func Offset: 0x1a8
	// Line 1882, Address: 0x27ff1c, Func Offset: 0x1bc
	// Line 1887, Address: 0x27ff30, Func Offset: 0x1d0
	// Line 1888, Address: 0x27ff40, Func Offset: 0x1e0
	// Line 1890, Address: 0x27ff64, Func Offset: 0x204
	// Line 1891, Address: 0x27ff78, Func Offset: 0x218
	// Line 1892, Address: 0x27ff8c, Func Offset: 0x22c
	// Line 1893, Address: 0x27ff94, Func Offset: 0x234
	// Line 1895, Address: 0x27ffd0, Func Offset: 0x270
	// Line 1896, Address: 0x27ffe0, Func Offset: 0x280
	// Line 1911, Address: 0x27fff0, Func Offset: 0x290
	// Line 1935, Address: 0x27fff8, Func Offset: 0x298
	// Line 1937, Address: 0x280020, Func Offset: 0x2c0
	// Line 1938, Address: 0x280030, Func Offset: 0x2d0
	// Line 1941, Address: 0x280040, Func Offset: 0x2e0
	// Line 1949, Address: 0x280048, Func Offset: 0x2e8
	// Line 1950, Address: 0x280058, Func Offset: 0x2f8
	// Line 1951, Address: 0x28006c, Func Offset: 0x30c
	// Line 1967, Address: 0x280074, Func Offset: 0x314
	// Line 1968, Address: 0x280080, Func Offset: 0x320
	// Line 1970, Address: 0x28009c, Func Offset: 0x33c
	// Line 1971, Address: 0x2800ac, Func Offset: 0x34c
	// Line 1972, Address: 0x2800c0, Func Offset: 0x360
	// Line 1973, Address: 0x2800d4, Func Offset: 0x374
	// Line 1974, Address: 0x2800e8, Func Offset: 0x388
	// Line 1975, Address: 0x2800fc, Func Offset: 0x39c
	// Line 1976, Address: 0x280110, Func Offset: 0x3b0
	// Line 1977, Address: 0x280124, Func Offset: 0x3c4
	// Line 1978, Address: 0x280138, Func Offset: 0x3d8
	// Line 1981, Address: 0x28014c, Func Offset: 0x3ec
	// Line 1983, Address: 0x280168, Func Offset: 0x408
	// Line 1984, Address: 0x28017c, Func Offset: 0x41c
	// Line 2020, Address: 0x280190, Func Offset: 0x430
	// Line 2048, Address: 0x280198, Func Offset: 0x438
	// Line 2049, Address: 0x2801a4, Func Offset: 0x444
	// Line 2051, Address: 0x2801ac, Func Offset: 0x44c
	// Line 2053, Address: 0x2801e4, Func Offset: 0x484
	// Line 2054, Address: 0x2801f4, Func Offset: 0x494
	// Line 2055, Address: 0x280208, Func Offset: 0x4a8
	// Line 2056, Address: 0x28021c, Func Offset: 0x4bc
	// Line 2057, Address: 0x280230, Func Offset: 0x4d0
	// Line 2058, Address: 0x280244, Func Offset: 0x4e4
	// Line 2059, Address: 0x280258, Func Offset: 0x4f8
	// Line 2060, Address: 0x28026c, Func Offset: 0x50c
	// Line 2061, Address: 0x280280, Func Offset: 0x520
	// Line 2062, Address: 0x280294, Func Offset: 0x534
	// Line 2063, Address: 0x2802a8, Func Offset: 0x548
	// Line 2064, Address: 0x2802bc, Func Offset: 0x55c
	// Line 2065, Address: 0x2802d0, Func Offset: 0x570
	// Line 2066, Address: 0x2802e4, Func Offset: 0x584
	// Line 2067, Address: 0x2802f8, Func Offset: 0x598
	// Line 2068, Address: 0x280300, Func Offset: 0x5a0
	// Line 2070, Address: 0x28033c, Func Offset: 0x5dc
	// Line 2071, Address: 0x28034c, Func Offset: 0x5ec
	// Line 2072, Address: 0x280360, Func Offset: 0x600
	// Line 2074, Address: 0x280374, Func Offset: 0x614
	// Line 2075, Address: 0x280388, Func Offset: 0x628
	// Line 2076, Address: 0x28039c, Func Offset: 0x63c
	// Line 2077, Address: 0x2803b0, Func Offset: 0x650
	// Line 2078, Address: 0x2803c4, Func Offset: 0x664
	// Line 2079, Address: 0x2803d8, Func Offset: 0x678
	// Line 2080, Address: 0x2803ec, Func Offset: 0x68c
	// Line 2081, Address: 0x280400, Func Offset: 0x6a0
	// Line 2082, Address: 0x280414, Func Offset: 0x6b4
	// Line 2083, Address: 0x280428, Func Offset: 0x6c8
	// Line 2085, Address: 0x28043c, Func Offset: 0x6dc
	// Line 2086, Address: 0x28044c, Func Offset: 0x6ec
	// Line 2087, Address: 0x280460, Func Offset: 0x700
	// Line 2088, Address: 0x280474, Func Offset: 0x714
	// Line 2089, Address: 0x280488, Func Offset: 0x728
	// Line 2136, Address: 0x28049c, Func Offset: 0x73c
	// Line 2158, Address: 0x2804a4, Func Offset: 0x744
	// Line 2159, Address: 0x2804b0, Func Offset: 0x750
	// Line 2160, Address: 0x2804c8, Func Offset: 0x768
	// Line 2162, Address: 0x2804ec, Func Offset: 0x78c
	// Line 2164, Address: 0x280528, Func Offset: 0x7c8
	// Line 2165, Address: 0x280538, Func Offset: 0x7d8
	// Line 2167, Address: 0x280548, Func Offset: 0x7e8
	// Line 2173, Address: 0x280550, Func Offset: 0x7f0
	// Line 2175, Address: 0x280590, Func Offset: 0x830
	// Line 2176, Address: 0x2805a0, Func Offset: 0x840
	// Line 2177, Address: 0x2805b4, Func Offset: 0x854
	// Line 2178, Address: 0x2805c8, Func Offset: 0x868
	// Line 2179, Address: 0x2805dc, Func Offset: 0x87c
	// Line 2180, Address: 0x2805f0, Func Offset: 0x890
	// Line 2181, Address: 0x280604, Func Offset: 0x8a4
	// Line 2182, Address: 0x280618, Func Offset: 0x8b8
	// Line 2183, Address: 0x28062c, Func Offset: 0x8cc
	// Line 2184, Address: 0x280640, Func Offset: 0x8e0
	// Line 2185, Address: 0x280654, Func Offset: 0x8f4
	// Line 2186, Address: 0x280668, Func Offset: 0x908
	// Line 2187, Address: 0x28067c, Func Offset: 0x91c
	// Line 2191, Address: 0x280690, Func Offset: 0x930
	// Line 2199, Address: 0x280698, Func Offset: 0x938
	// Line 2200, Address: 0x2806a4, Func Offset: 0x944
	// Line 2204, Address: 0x2806c4, Func Offset: 0x964
	// Line 2206, Address: 0x2806d4, Func Offset: 0x974
	// Line 2207, Address: 0x2806ec, Func Offset: 0x98c
	// Line 2208, Address: 0x280704, Func Offset: 0x9a4
	// Line 2210, Address: 0x280724, Func Offset: 0x9c4
	// Line 2211, Address: 0x280738, Func Offset: 0x9d8
	// Line 2212, Address: 0x28074c, Func Offset: 0x9ec
	// Line 2213, Address: 0x280760, Func Offset: 0xa00
	// Line 2214, Address: 0x280774, Func Offset: 0xa14
	// Line 2215, Address: 0x280788, Func Offset: 0xa28
	// Line 2216, Address: 0x28079c, Func Offset: 0xa3c
	// Line 2217, Address: 0x2807b0, Func Offset: 0xa50
	// Line 2218, Address: 0x2807c4, Func Offset: 0xa64
	// Line 2231, Address: 0x2807d8, Func Offset: 0xa78
	// Line 2232, Address: 0x2807e8, Func Offset: 0xa88
	// Line 2233, Address: 0x2807fc, Func Offset: 0xa9c
	// Line 2234, Address: 0x280810, Func Offset: 0xab0
	// Line 2235, Address: 0x280824, Func Offset: 0xac4
	// Line 2236, Address: 0x280838, Func Offset: 0xad8
	// Line 2237, Address: 0x28084c, Func Offset: 0xaec
	// Line 2238, Address: 0x280860, Func Offset: 0xb00
	// Line 2239, Address: 0x280874, Func Offset: 0xb14
	// Line 2240, Address: 0x280888, Func Offset: 0xb28
	// Line 2241, Address: 0x28089c, Func Offset: 0xb3c
	// Line 2242, Address: 0x2808b0, Func Offset: 0xb50
	// Line 2243, Address: 0x2808c4, Func Offset: 0xb64
	// Line 2283, Address: 0x2808d8, Func Offset: 0xb78
	// Func End, Address: 0x2808ec, Func Offset: 0xb8c
}

// 
// Start address: 0x2808f0
void sh2shd_shadow_off(int glb_coord, int map_id)
{
	float cam_pos[4];
	float cam_pos[4];
	// Line 2286, Address: 0x2808f0, Func Offset: 0
	// Line 2289, Address: 0x2808f8, Func Offset: 0x8
	// Line 2310, Address: 0x280930, Func Offset: 0x40
	// Line 2312, Address: 0x28093c, Func Offset: 0x4c
	// Line 2313, Address: 0x28094c, Func Offset: 0x5c
	// Line 2333, Address: 0x28095c, Func Offset: 0x6c
	// Line 2337, Address: 0x280964, Func Offset: 0x74
	// Line 2339, Address: 0x280970, Func Offset: 0x80
	// Line 2340, Address: 0x280980, Func Offset: 0x90
	// Line 2341, Address: 0x280990, Func Offset: 0xa0
	// Line 2342, Address: 0x280998, Func Offset: 0xa8
	// Line 2346, Address: 0x2809a4, Func Offset: 0xb4
	// Line 2348, Address: 0x2809d0, Func Offset: 0xe0
	// Line 2349, Address: 0x2809d8, Func Offset: 0xe8
	// Line 2405, Address: 0x2809e8, Func Offset: 0xf8
	// Line 2408, Address: 0x2809f0, Func Offset: 0x100
	// Line 2410, Address: 0x2809fc, Func Offset: 0x10c
	// Line 2412, Address: 0x280a08, Func Offset: 0x118
	// Line 2414, Address: 0x280a28, Func Offset: 0x138
	// Line 2415, Address: 0x280a34, Func Offset: 0x144
	// Line 2416, Address: 0x280a44, Func Offset: 0x154
	// Line 2417, Address: 0x280a54, Func Offset: 0x164
	// Line 2418, Address: 0x280a64, Func Offset: 0x174
	// Line 2419, Address: 0x280a74, Func Offset: 0x184
	// Line 2422, Address: 0x280a84, Func Offset: 0x194
	// Line 2425, Address: 0x280a8c, Func Offset: 0x19c
	// Line 2429, Address: 0x280a98, Func Offset: 0x1a8
	// Line 2430, Address: 0x280aa4, Func Offset: 0x1b4
	// Line 2432, Address: 0x280ac4, Func Offset: 0x1d4
	// Line 2433, Address: 0x280ad0, Func Offset: 0x1e0
	// Line 2473, Address: 0x280ae0, Func Offset: 0x1f0
	// Func End, Address: 0x280af0, Func Offset: 0x200
}

// 
// Start address: 0x280af0
float get_demo_frame()
{
	// Line 2479, Address: 0x280af0, Func Offset: 0
	// Line 2480, Address: 0x280af8, Func Offset: 0x8
	// Func End, Address: 0x280b00, Func Offset: 0x10
}

// 
// Start address: 0x280b00
void get_map_id(int* glb_coord, int* map_id)
{
	int block[4];
	// Line 2492, Address: 0x280b00, Func Offset: 0
	// Line 2496, Address: 0x280b20, Func Offset: 0x20
	// Line 2497, Address: 0x280b38, Func Offset: 0x38
	// Line 2498, Address: 0x280b4c, Func Offset: 0x4c
	// Line 2499, Address: 0x280b54, Func Offset: 0x54
	// Func End, Address: 0x280b6c, Func Offset: 0x6c
}

// 
// Start address: 0x280b70
int check_bg_light_exist()
{
	int map_id;
	int glb_coord;
	// Line 2505, Address: 0x280b70, Func Offset: 0
	// Line 2509, Address: 0x280b78, Func Offset: 0x8
	// Line 2511, Address: 0x280b88, Func Offset: 0x18
	// Line 2535, Address: 0x280bac, Func Offset: 0x3c
	// Line 2538, Address: 0x280bc4, Func Offset: 0x54
	// Line 2549, Address: 0x280bd0, Func Offset: 0x60
	// Line 2550, Address: 0x280be0, Func Offset: 0x70
	// Line 2559, Address: 0x280bec, Func Offset: 0x7c
	// Line 2560, Address: 0x280bf0, Func Offset: 0x80
	// Func End, Address: 0x280c00, Func Offset: 0x90
}

