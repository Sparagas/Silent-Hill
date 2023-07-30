typedef struct _anon0;
typedef struct PAD_INFO;
typedef struct SubCharacter;
typedef struct _AnimeInfo;
typedef struct _VC_WORK;
typedef struct _VC_THROUGH_DOOR_CAM_PARAM;
typedef struct _VC_CAM_MV_PARAM;
typedef struct shSkelton;
typedef struct _VC_CHASE_CAM_PARAM;
typedef enum _VC_AREA_SIZE_TYPE : unsigned char;
typedef struct _VC_FIX_CAM_MANAGER;
typedef struct _VC_ROAD_DATA;
typedef struct _VC_SETTLE_CAM_PARAM;
typedef struct Stage_Data;
typedef struct shBattleFight;
typedef struct Event_List;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _VC_CIR_CAM_MANAGER;
typedef struct _VC_LIMIT_AREA;
typedef struct _VC_FIX_ANG_CAM_PARAM;
typedef struct Item_List;
typedef enum _VC_ROAD_TYPE : unsigned char;
typedef struct shBattleShot;
typedef struct Model_List;
typedef struct Enemy_List;
typedef struct shBattleArea;
typedef struct _VC_WATCH_MV_PARAM;
typedef struct shPlayerWork;
typedef struct _VbSCREENINFO;
typedef struct _VC_NEAR_ROAD_DATA;
typedef struct _VC_LOCUS_CIRCLE_CAM_PARAM;
typedef struct shBattleInfo;
typedef enum _THROUGH_DOOR_SET_CMD_TYPE : unsigned char;
typedef struct _VC_ROAD_AREA;
typedef enum _VC_CAM_MV_TYPE : unsigned char;
typedef struct _anon1;
typedef struct _CL_VHIT_WALL;
typedef struct _KANRI;
typedef struct _CL_HITPOLY_HEAD;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct _SYS_W;
typedef struct _anon2;
typedef union _anon3;
typedef struct _CL_VHIT_RESULT;
typedef union _anon4;
typedef union _anon5;
typedef enum _VC_ROAD_FLAGS : unsigned short;
typedef struct _anon6;
typedef enum _enum_0 : unsigned char;
typedef struct PAD_3D;
typedef enum _enum_1 : unsigned char;
typedef struct Playing_Info;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct PAD_2D;
typedef enum _VC_FLAGS : unsigned short;
typedef struct _VC_PRE_INFO;

typedef void(*type_0)();
typedef void(*type_1)(SubCharacter*);
typedef int(*type_16)();
typedef void(*type_42)(SubCharacter*);

typedef float type_2[4];
typedef PAD_INFO type_3[10];
typedef float type_4[4];
typedef unsigned char type_5[4];
typedef float type_6[4];
typedef float type_7[7];
typedef _VC_NEAR_ROAD_DATA type_8[128];
typedef float type_9[2];
typedef _VC_ROAD_DATA type_10[2];
typedef unsigned char type_11[4];
typedef unsigned int type_12[9];
typedef unsigned char type_13[4];
typedef float type_14[4];
typedef float type_15[7];
typedef unsigned int type_17[7];
typedef float type_18[4];
typedef float type_19[4][4];
typedef float type_20[4];
typedef unsigned char type_21[2];
typedef unsigned char type_22[2];
typedef float type_23[4];
typedef float type_24[4];
typedef float type_25[4];
typedef float type_26[7];
typedef _VC_ROAD_DATA* type_27[2];
typedef unsigned int type_28[32];
typedef float type_29[7];
typedef float type_30[4];
typedef int type_31[5];
typedef unsigned char type_32[16];
typedef unsigned char type_33[2];
typedef float type_34[4];
typedef float type_35[4];
typedef float type_36[4][4];
typedef shAttackInfo type_37[66];
typedef int type_38[9];
typedef unsigned int type_39[32];
typedef float type_40[4][2];
typedef float type_41[7];
typedef float type_43[7];

struct _anon0
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
	_anon6 mat;
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

struct _VC_WORK
{
	int view_cam_active_f;
	_VC_ROAD_DATA** vc_road_ary_list;
	_VC_FLAGS flags;
	int through_door_activate_init_f;
	_VC_THROUGH_DOOR_CAM_PARAM through_door;
	float scr_half_ang_wy;
	float scr_half_ang_wx;
	_VC_CAM_MV_PARAM user_cam_mv_prm;
	float cam_tgt_pos[4];
	float cam_pos[4];
	float cam_mv_ang_y;
	float cam_velo[4];
	float old_cam_excl_area_r;
	float ideal_cam_pos_h;
	_VC_WATCH_MV_PARAM user_watch_mv_prm;
	float watch_tgt_pos[4];
	float watch_tgt_max_y;
	float watch_tgt_ang_z;
	float cam_mat_ang[4];
	float cam_mat[4][4];
	float ofs_cam_ang[4];
	float ofs_cam_ang_spd[4];
	float base_cam_ang[4];
	float old_base_cam_ang[4];
	float cam_chara2ideal_ang_y;
	float cam_tgt_velo[4];
	float cam_tgt_mv_ang_y;
	float cam_tgt_spd;
	float chara_pos[4];
	float chara_bottom_y;
	float chara_top_y;
	float chara_center_y;
	float chara_grnd_y;
	float chara_head_pos[4];
	float chara_mv_spd;
	float chara_mv_ang_y;
	float chara_ang_spd_y;
	float chara_eye_ang_y;
	float chara_eye_ang_wy;
	float chara_watch_xz_r;
	_VC_FIX_CAM_MANAGER fix_man;
	_VC_CIR_CAM_MANAGER cir_man;
	_VC_NEAR_ROAD_DATA near_road_ary[128];
	int near_road_suu;
	_VC_NEAR_ROAD_DATA cur_near_road;
	SubCharacter* nearest_enemy_p;
	float nearest_enemy_xz_dist;
	float enemy_input_watch_y;
	SubCharacter* nearest_item_p;
	float nearest_item_xz_dist;
};

struct _VC_THROUGH_DOOR_CAM_PARAM
{
	int active_f;
	float timer;
	float rail_ang_y;
	float rail_sta_pos[4];
	float rail_sta_to_chara_dist;
};

struct _VC_CAM_MV_PARAM
{
	float accel_xz;
	float accel_y;
	float max_spd_xz;
	float max_spd_y;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon6 src_m;
	_anon2 src_t;
	_anon6 des_m;
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

struct _VC_CHASE_CAM_PARAM
{
	float ofs_hy;
	float ratio_r_xz;
	float lr_lim_ang_y;
	float rr_lim_ang_y;
};

enum _VC_AREA_SIZE_TYPE : unsigned char
{
	VC_AREA_TINY,
	VC_AREA_SMALL,
	VC_AREA_WIDE,
	VC_AREA_OUTDOOR,
	VC_AREA_SUU
};

struct _VC_FIX_CAM_MANAGER
{
	int exception_f;
	float add_ang_y;
	float add_rd_x;
	float add_rd_z;
};

struct _VC_ROAD_DATA
{
	_VC_ROAD_AREA lim_sw;
	_VC_ROAD_AREA lim_rd;
	int kind_id;
	int flags;
	int area_size_type;
	int rd_type;
	int mv_y_type;
	float ofs_watch_hy;
	float trace_btm_hy;
	int rd_dir_type;
	float projection;
	float proj_volume;
	float proj_sec;
	int cam_mv_type;
	_anon5 tmp;
};

struct _VC_SETTLE_CAM_PARAM
{
	float sta_base_ang_y;
	float end_base_ang_y;
	float lr_lim_ang_y;
	float rr_lim_ang_y;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct _VC_CIR_CAM_MANAGER
{
	float origin[4];
	float sw_l[4];
};

struct _VC_LIMIT_AREA
{
	float min_hx;
	float max_hx;
	float min_hz;
	float max_hz;
	float min_hy;
	float max_hy;
};

struct _VC_FIX_ANG_CAM_PARAM
{
	float ang_x;
	float ang_y;
	float ofs_hy;
	float cam2wth_dist;
};

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

enum _VC_ROAD_TYPE : unsigned char
{
	VC_RD_TYPE_ROAD,
	VC_RD_TYPE_EFFECT,
	VC_RD_TYPE_EVENT,
	VC_RD_TYPE_ROAD_PRIO_LOW,
	VC_RD_TYPE_ROAD_PRIO_HIGH,
	VC_RD_TYPE_SV_ONLY,
	VC_RD_TYPE_SUU
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct shBattleArea
{
	float center;
	float radius;
};

struct _VC_WATCH_MV_PARAM
{
	float ang_accel_x;
	float ang_accel_y;
	float max_ang_spd_x;
	float max_ang_spd_y;
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

struct _VC_NEAR_ROAD_DATA
{
	_VC_ROAD_DATA* road_p;
	int rd_dir_type;
	int use_priority;
	float chara2road_sum_dist;
	float chara2road_vec_x;
	float chara2road_vec_z;
	_VC_LIMIT_AREA rd;
	_VC_LIMIT_AREA sw;
	float rd_rzm[4][4];
	float rd_rim[4][4];
	float sw_rzm[4][4];
	float sw_rim[4][4];
};

struct _VC_LOCUS_CIRCLE_CAM_PARAM
{
	float origin_x;
	float origin_z;
	float ang_y;
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

enum _THROUGH_DOOR_SET_CMD_TYPE : unsigned char
{
	VC_TDSC_START,
	VC_TDSC_END,
	VC_TDSC_MAIN
};

struct _VC_ROAD_AREA
{
	float x0;
	float z0;
	float x1;
	float z1;
	float x2;
	float z2;
	float min_hy;
	float max_hy;
};

enum _VC_CAM_MV_TYPE : unsigned char
{
	VC_MV_CHASE,
	VC_MV_SETTLE,
	VC_MV_FIX_ANG,
	VC_MV_SELF_VIEW,
	VC_MV_LOCUS_CIRCLE,
	VC_MV_THROUGH_DOOR,
	VC_MV_SUU
};

struct _anon1
{
	float new;
	float old;
	float delta;
	int flg;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct _KANRI
{
	float pos[4];
	float ang[4];
	float rot_spd[4];
	float velo_y;
	float velo_xz;
	float velo_houi;
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

struct _SYS_W
{
	float cam_ang_y;
	float cam_ang_z;
	float cam_r_xz;
	float cam_y;
	_KANRI hero;
};

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
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

union _anon5
{
	unsigned char data[16];
	_VC_CHASE_CAM_PARAM chs;
	_VC_SETTLE_CAM_PARAM stl;
	_VC_FIX_ANG_CAM_PARAM fix;
	_VC_LOCUS_CIRCLE_CAM_PARAM cir;
};

enum _VC_ROAD_FLAGS : unsigned short
{
	VC_RD_NOFLAG,
	VC_RD_END_DATA_F,
	VC_RD_WARP_IN_F,
	VC_RD_WARP_OUT_F = 0x4,
	VC_RD_WARP_IN_OUT_FS = 0x6,
	VC_RD_NO_FRONT_FLIP_F = 0x8,
	VC_RD_LIM_UP_FAR_VIEW_F = 0x10,
	VC_RD_USE_NO_ENEMY_F = 0x20,
	VC_RD_USE_NEAR_ENEMY_F = 0x40,
	VC_RD_MARGE_ROAD_F = 0x80,
	VC_RD_NO_EXTRA_AREA_F = 0x100,
	VC_RD_CAM_LIKE_SETTLE_F = 0x200,
	VC_RD_NOT_WARP_F = 0x400,
	VC_RD_INVALID_SV_F = 0x800
};

struct _anon6
{
	float d[4][4];
};

enum _enum_0 : unsigned char
{
	VC_CHK_NEAREST_ROAD_TYPE,
	VC_CHK_NEAREST_SWITCH_TYPE
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

enum _enum_1 : unsigned char
{
	MAKE_CAM_TGT_BY_ROAD,
	MAKE_CAM_TGT_BY_CHARA_HEAD
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

enum _VC_FLAGS : unsigned short
{
	VC_USER_CAM_F = 0x1,
	VC_USER_WATCH_F,
	VC_WARP_CAM_F = 0x4,
	VC_WARP_WATCH_F = 0x8,
	VC_WARP_CAM_TGT_F = 0x10,
	VC_SWITCH_NEAR_RD_DATA_F = 0x20,
	VC_PROJ_MOMENT_CHANGE_F = 0x40,
	VC_VISIBLE_CHARA_F = 0x80,
	VC_INHIBIT_FAR_WATCH_F = 0x100,
	VC_PRS_F_VIEW_F = 0x200,
	VC_OLD_PRS_F_VIEW_F = 0x400,
	VC_INIT_FLAGS = 0x1c,
	VC_ALL_CAM_FLAGS = 0x5,
	VC_ALL_WATCH_FLAGS = 0x82,
	VC_USER_MODE_FLAGS = 0x3,
	VC_ALL_WARP_FLAGS = 0x1c
};

struct _VC_PRE_INFO
{
	float hero_neck_wm[4][4];
	float hero_neck_lm[4][4];
	float hero_neck_lwm[4][4];
	float hero_head_ang_x;
	float hero_head_ang_y;
	float hero_eye_y;
};

shAttackInfo sh2_attack_list[66];
_VC_WATCH_MV_PARAM watch_mv_prm_user;
_VC_WATCH_MV_PARAM watch_mv_prm_nrml;
_VC_WATCH_MV_PARAM watch_mv_prm_outdoor;
_VC_WATCH_MV_PARAM watch_mv_prm_on_boat;
_VC_WATCH_MV_PARAM self_view_watch_mv_prm;
_VC_CAM_MV_PARAM cam_mv_prm_user;
_VC_CAM_MV_PARAM cam_mv_prm_nrml;
_VC_CAM_MV_PARAM cam_mv_prm_outdoor;
_VC_CAM_MV_PARAM cam_mv_prm_on_boat;
float nml_tgt_watch_cir_r[4];
float nml_cam2wth_min_dist[4];
float far_tgt_watch_cir_r[4];
float mv_nml_chr2cam_r[4];
float mv_nml_no_adj_max_dist[4];
float mv_nml_full_adj_min_dist[4];
float extra_boundary_width[4];
int excl_r_ary[9];
float excl_max_rate[4];
int mv_stl_ang_ary[5];
float jms_walk_spd_ana[7];
float jms_back_spd_ana[7];
float jms_swalk_spd_ana[7];
float jms_run_spd_ana[7];
float jms_srun_spd_ana[7];
unsigned int pjames_act_with_wep_flag[9];
unsigned int pjames_upper_flag[32];
unsigned int pjames_lower_flag[32];
_VC_ROAD_DATA vcNullRoadArray[2];
_VC_ROAD_DATA* vcNullRoadArrayList[2];
_VC_NEAR_ROAD_DATA vcNullNearRoad;
_VC_CAM_MV_PARAM vcCamMvPrmSt;
_VC_WATCH_MV_PARAM vcWatchMvPrmSt;
float vcSelfViewTimer;
_VC_WORK vcWork;
Stage_Data* stage;
_VbSCREENINFO VbScreenInfo;
shPlayerWork sh2jms;
_VC_PRE_INFO vcPreInfo;
Playing_Info playing;
_SYS_W sys;
_anon1 vcProjectionParam;

void vcInitVCSystem(_VC_ROAD_DATA** vc_road_ary_list);
void vcStartCameraSystem();
void vcSetFirstCamWork(float* cam_pos, float chara_eye_ang_y, int use_through_door_cam_f);
void vcUserWatchTarget(float* watch_tgt_pos, _VC_WATCH_MV_PARAM* watch_prm_p, float rot_z, int warp_watch_f);
void vcUserCamTarget(float* cam_tgt_pos, _VC_CAM_MV_PARAM* cam_prm_p, int warp_cam_f);
void vcGetNowWatchPos(float* watch_pos);
void vcGetNowCamPos(float* cam_pos);
void vcReturnPreAutoCamWork(int warp_f);
void vcSetSubjChara(float* chara_pos, float chara_bottom_y, float chara_top_y, float chara_grnd_y, float* chara_head_pos, float chara_mv_spd, float chara_mv_ang_y, float chara_ang_spd_y, float chara_eye_ang_y, float chara_eye_ang_wy, float chara_watch_xz_r);
int vcExecCamera();
void vcSetAllNpcDeadTimer();
int vcRetSmoothCamMvF(float* old_pos, float* now_pos, float* old_ang, float* now_ang);
_VC_CAM_MV_TYPE vcRetCurCamMvType(_VC_WORK* w_p);
int vcRetThroughDoorCamEndF(_VC_WORK* w_p);
float vcRetFarWatchRate(int far_watch_button_prs_f, _VC_CAM_MV_TYPE cur_cam_mv_type, _VC_WORK* w_p);
float vcRetSelfViewEffectRate(_VC_CAM_MV_TYPE cur_cam_mv_type, _VC_WORK* w_p);
void vcSetFlagsByCamMvType(_VC_CAM_MV_TYPE cam_mv_type, float far_watch_rate, int all_warp_f);
void vcPreSetDataInVC_WORK(_VC_WORK* w_p, _VC_ROAD_DATA** vc_road_ary_list);
void vcSetTHROUGH_DOOR_CAM_PARAM_in_VC_WORK(_VC_WORK* w_p, _THROUGH_DOOR_SET_CMD_TYPE set_cmd_type);
void vcSetNearestEnemyDataInVC_WORK(_VC_WORK* w_p);
void vcSetNearestItemDataInVC_WORK(_VC_WORK* w_p);
void vcSetNearRoadAryByCharaPos(_VC_WORK* w_p, _VC_ROAD_DATA** road_ary_list, float half_w, int near_enemy_f);
int vcRetRoadUsePriority(_VC_ROAD_TYPE rd_type);
int vcSetCurNearRoadInVC_WORK(_VC_WORK* w_p);
float vcGetBestNewCurNearRoad(_VC_NEAR_ROAD_DATA** new_cur_pp, _enum_0 chk_type, float* pos, _VC_WORK* w_p);
float vcGetNearestNEAR_ROAD_DATA(_VC_NEAR_ROAD_DATA** out_nearest_p_addr, _enum_0 chk_type, _VC_ROAD_TYPE rd_type, float* pos, _VC_WORK* w_p, int chk_only_set_marge_f);
float vcAdvantageDistOfOldCurRoad(_VC_NEAR_ROAD_DATA* old_cur_p);
void vcAutoRenewalWatchTgtPosAndAngZ(_VC_WORK* w_p, _VC_CAM_MV_TYPE cam_mv_type, _VC_AREA_SIZE_TYPE cur_rd_area_size, float far_watch_rate, float self_view_eff_rate);
void vcMakeNormalWatchTgtPos(float* watch_tgt_pos, float* watch_tgt_ang_z_p, _VC_WORK* w_p, _VC_CAM_MV_TYPE cam_mv_type, _VC_AREA_SIZE_TYPE cur_rd_area_size);
void vcMixSelfViewEffectToWatchTgtPos(float* watch_tgt_pos, float* watch_tgt_ang_z_p, float effect_rate, _VC_WORK* w_p, float head_mat[4], int anim_status);
void vcMakeFarWatchTgtPos(float* watch_tgt_pos, _VC_WORK* w_p, _VC_AREA_SIZE_TYPE cur_rd_area_size);
void vcSetWatchTgtXzPos(float* watch_pos, float* center_pos, float* cam_pos, float tgt_chara2watch_cir_dist, float tgt_watch_cir_r, float watch_cir_ang_y);
void vcSetWatchTgtYParam(float* watch_pos, _VC_WORK* w_p, _VC_CAM_MV_TYPE cam_mv_type, float watch_y);
void vcAdjustWatchYLimitHighWhenFarView(float* watch_pos, float* cam_pos);
void vcAutoRenewalCamTgtPos(_VC_WORK* w_p, _VC_CAM_MV_TYPE cam_mv_type, _VC_CAM_MV_PARAM* cam_mv_prm_p, _VC_ROAD_FLAGS cur_rd_flags, _VC_AREA_SIZE_TYPE cur_rd_area_size);
float vcRetMaxTgtMvXzLen(_VC_WORK* w_p, _VC_CAM_MV_PARAM* cam_mv_prm_p);
void vcMakeIdealCamPosByHeadPos(float* ideal_pos, _VC_WORK* w_p);
void vcMakeIdealCamPosForFixAngCam(float* ideal_pos, _VC_WORK* w_p);
void vcMakeIdealCamPosForThroughDoorCam(float* ideal_pos, _VC_WORK* w_p);
void vcMakeIdealCamPosForLocusCircleCam(float* ideal_pos, _VC_WORK* w_p);
void vcMakeIdealCamPosUseVC_ROAD_DATA(float* ideal_pos, _VC_WORK* w_p, _VC_AREA_SIZE_TYPE cur_rd_area_size);
void vcAdjustXzInLimAreaUsingMIN_IN_ROAD_DIST(float* x_p, float* z_p, _VC_LIMIT_AREA* lim_p);
void vcMakeBasicCamTgtMvVec(float* tgt_mv_vec, float* ideal_pos, _VC_WORK* w_p, float max_tgt_mv_xz_len);
void vcAdjTgtMvVecYByCurNearRoad(float* tgt_mv_vec, _VC_WORK* w_p);
void vcCamTgtMvVecIsFlipedFromCharaFront(float* tgt_mv_vec, _VC_WORK* w_p, float max_tgt_mv_xz_len, _VC_AREA_SIZE_TYPE cur_rd_area_size);
float vcFlipFromCamExclusionArea(float* flip_ang_y_p, float* old_cam_excl_area_r_p, float* in_pos, float* chara_pos, float chara_eye_ang_y, _VC_AREA_SIZE_TYPE cur_rd_area_size);
void vcGetUseWatchAndCamMvParam(_VC_WATCH_MV_PARAM** watch_mv_prm_pp, _VC_CAM_MV_PARAM** cam_mv_prm_pp, float self_view_eff_rate, float far_watch_rate, _VC_WORK* w_p);
void vcRenewalCamData(_VC_WORK* w_p, _VC_CAM_MV_PARAM* cam_mv_prm_p);
void vcRenewalCamMatAng(_VC_WORK* w_p, _VC_WATCH_MV_PARAM* watch_mv_prm_p, _VC_CAM_MV_TYPE cam_mv_type, int visible_chara_f);
void vcMakeNewBaseCamAng(float* new_base_ang, _VC_CAM_MV_TYPE cam_mv_type, _VC_WORK* w_p);
void vcRenewalBaseCamAngAndAdjustOfsCamAng(_VC_WORK* w_p, float* new_base_cam_ang);
void vcMakeOfsCamTgtAng(float* ofs_tgt_ang, float base_matT[4], _VC_WORK* w_p);
void vcMakeOfsCam2CharaBottomAndTopAngByBaseMatT(float* ofs_cam2chara_btm_ang, float* ofs_cam2chara_top_ang, float base_matT[4], float* cam_pos, float* chara_pos, float chara_bottom_y, float chara_top_y);
void vcAdjCamOfsAngByCharaInScreen(float* cam_ang, float* ofs_cam2chara_btm_ang, float* ofs_cam2chara_top_ang, _VC_WORK* w_p);
void vcAdjCamOfsAngByOfsAngSpd(float* ofs_ang, float* ofs_ang_spd, float* ofs_tgt_ang, _VC_WATCH_MV_PARAM* prm_p);
void vcMakeCamMatAndCamAngByBaseAngAndOfsAng(float* cam_mat_ang, float cam_mat[4], float* base_cam_ang, float* ofs_cam_ang, float* cam_pos);
void vcSetDataToVwSystem(_VC_WORK* w_p, _VC_CAM_MV_TYPE cam_mv_type);
float vcCamMatNoise(float noise_w, float ang_spd1, float ang_spd2);
float vcGetXZSumDistFromLimArea(float* out_vec_x_p, float* out_vec_z_p, float chk_wld_x, float chk_wld_z, float lim_min_x, float lim_max_x, float lim_min_z, float lim_max_z, int can_ret_minus_dist_f);
void vcSetEventCamParamRefView(float* vp, _VC_CAM_MV_PARAM* cam_prm_p, float* vr, _VC_WATCH_MV_PARAM* watch_prm_p, float rot_z, int warp_flg);
void vcSetProjectionValue(float new, int framecnt);
void vcChangeProjectionValue(_VC_WORK* w_p);

// 
// Start address: 0x1959e0
void vcInitVCSystem(_VC_ROAD_DATA** vc_road_ary_list)
{
	// Line 365, Address: 0x1959e0, Func Offset: 0
	// Line 369, Address: 0x1959e8, Func Offset: 0x8
	// Line 370, Address: 0x1959f0, Func Offset: 0x10
	// Line 371, Address: 0x195a00, Func Offset: 0x20
	// Line 372, Address: 0x195a08, Func Offset: 0x28
	// Line 387, Address: 0x195a10, Func Offset: 0x30
	// Line 388, Address: 0x195a40, Func Offset: 0x60
	// Line 389, Address: 0x195a4c, Func Offset: 0x6c
	// Line 391, Address: 0x195a5c, Func Offset: 0x7c
	// Line 394, Address: 0x195a64, Func Offset: 0x84
	// Line 395, Address: 0x195a6c, Func Offset: 0x8c
	// Line 396, Address: 0x195a74, Func Offset: 0x94
	// Line 397, Address: 0x195a7c, Func Offset: 0x9c
	// Line 399, Address: 0x195a84, Func Offset: 0xa4
	// Line 400, Address: 0x195a8c, Func Offset: 0xac
	// Line 401, Address: 0x195a94, Func Offset: 0xb4
	// Line 402, Address: 0x195a9c, Func Offset: 0xbc
	// Line 403, Address: 0x195aa4, Func Offset: 0xc4
	// Func End, Address: 0x195aac, Func Offset: 0xcc
}

// 
// Start address: 0x195ab0
void vcStartCameraSystem()
{
	// Line 421, Address: 0x195ab0, Func Offset: 0
	// Line 422, Address: 0x195abc, Func Offset: 0xc
	// Func End, Address: 0x195ac4, Func Offset: 0x14
}

// 
// Start address: 0x195ad0
void vcSetFirstCamWork(float* cam_pos, float chara_eye_ang_y, int use_through_door_cam_f)
{
	// Line 506, Address: 0x195ad0, Func Offset: 0
	// Line 507, Address: 0x195ae0, Func Offset: 0x10
	// Line 509, Address: 0x195aec, Func Offset: 0x1c
	// Line 512, Address: 0x195af8, Func Offset: 0x28
	// Line 513, Address: 0x195b08, Func Offset: 0x38
	// Line 514, Address: 0x195b10, Func Offset: 0x40
	// Line 515, Address: 0x195b1c, Func Offset: 0x4c
	// Line 516, Address: 0x195b2c, Func Offset: 0x5c
	// Line 517, Address: 0x195b38, Func Offset: 0x68
	// Line 518, Address: 0x195b40, Func Offset: 0x70
	// Line 519, Address: 0x195b48, Func Offset: 0x78
	// Line 521, Address: 0x195b6c, Func Offset: 0x9c
	// Line 524, Address: 0x195b9c, Func Offset: 0xcc
	// Line 525, Address: 0x195ba4, Func Offset: 0xd4
	// Line 529, Address: 0x195bb8, Func Offset: 0xe8
	// Func End, Address: 0x195bcc, Func Offset: 0xfc
}

// 
// Start address: 0x195bd0
void vcUserWatchTarget(float* watch_tgt_pos, _VC_WATCH_MV_PARAM* watch_prm_p, float rot_z, int warp_watch_f)
{
	// Line 605, Address: 0x195bd0, Func Offset: 0
	// Line 607, Address: 0x195be4, Func Offset: 0x14
	// Line 610, Address: 0x195bf8, Func Offset: 0x28
	// Line 613, Address: 0x195c14, Func Offset: 0x44
	// Line 616, Address: 0x195c24, Func Offset: 0x54
	// Line 619, Address: 0x195c2c, Func Offset: 0x5c
	// Line 620, Address: 0x195c34, Func Offset: 0x64
	// Line 621, Address: 0x195c64, Func Offset: 0x94
	// Line 622, Address: 0x195c6c, Func Offset: 0x9c
	// Line 624, Address: 0x195c94, Func Offset: 0xc4
	// Func End, Address: 0x195c9c, Func Offset: 0xcc
}

// 
// Start address: 0x195ca0
void vcUserCamTarget(float* cam_tgt_pos, _VC_CAM_MV_PARAM* cam_prm_p, int warp_cam_f)
{
	// Line 651, Address: 0x195ca0, Func Offset: 0
	// Line 653, Address: 0x195cb4, Func Offset: 0x14
	// Line 654, Address: 0x195cc8, Func Offset: 0x28
	// Line 657, Address: 0x195ce4, Func Offset: 0x44
	// Line 660, Address: 0x195cf4, Func Offset: 0x54
	// Line 661, Address: 0x195cfc, Func Offset: 0x5c
	// Line 662, Address: 0x195d2c, Func Offset: 0x8c
	// Line 663, Address: 0x195d34, Func Offset: 0x94
	// Line 665, Address: 0x195d5c, Func Offset: 0xbc
	// Func End, Address: 0x195d64, Func Offset: 0xc4
}

// 
// Start address: 0x195d70
void vcGetNowWatchPos(float* watch_pos)
{
	float sin_y;
	float cos_y;
	float sin_x;
	float cos_x;
	float r;
	// Line 682, Address: 0x195d70, Func Offset: 0
	// Line 706, Address: 0x195d8c, Func Offset: 0x1c
	// Line 707, Address: 0x195da0, Func Offset: 0x30
	// Line 708, Address: 0x195db4, Func Offset: 0x44
	// Line 709, Address: 0x195dc8, Func Offset: 0x58
	// Line 711, Address: 0x195dd8, Func Offset: 0x68
	// Line 714, Address: 0x195e1c, Func Offset: 0xac
	// Line 715, Address: 0x195e34, Func Offset: 0xc4
	// Line 716, Address: 0x195e4c, Func Offset: 0xdc
	// Line 718, Address: 0x195e60, Func Offset: 0xf0
	// Func End, Address: 0x195e80, Func Offset: 0x110
}

// 
// Start address: 0x195e80
void vcGetNowCamPos(float* cam_pos)
{
	// Line 739, Address: 0x195e80, Func Offset: 0
	// Line 741, Address: 0x195e90, Func Offset: 0x10
	// Func End, Address: 0x195e98, Func Offset: 0x18
}

// 
// Start address: 0x195ea0
void vcReturnPreAutoCamWork(int warp_f)
{
	// Line 759, Address: 0x195ea0, Func Offset: 0
	// Line 760, Address: 0x195ea8, Func Offset: 0x8
	// Line 762, Address: 0x195ec4, Func Offset: 0x24
	// Line 764, Address: 0x195ed8, Func Offset: 0x38
	// Line 765, Address: 0x195ef0, Func Offset: 0x50
	// Func End, Address: 0x195f00, Func Offset: 0x60
}

// 
// Start address: 0x195f00
void vcSetSubjChara(float* chara_pos, float chara_bottom_y, float chara_top_y, float chara_grnd_y, float* chara_head_pos, float chara_mv_spd, float chara_mv_ang_y, float chara_ang_spd_y, float chara_eye_ang_y, float chara_eye_ang_wy, float chara_watch_xz_r)
{
	// Line 803, Address: 0x195f00, Func Offset: 0
	// Line 804, Address: 0x195f10, Func Offset: 0x10
	// Line 805, Address: 0x195f18, Func Offset: 0x18
	// Line 806, Address: 0x195f20, Func Offset: 0x20
	// Line 807, Address: 0x195f3c, Func Offset: 0x3c
	// Line 808, Address: 0x195f44, Func Offset: 0x44
	// Line 809, Address: 0x195f54, Func Offset: 0x54
	// Line 810, Address: 0x195f5c, Func Offset: 0x5c
	// Line 811, Address: 0x195f64, Func Offset: 0x64
	// Line 812, Address: 0x195f6c, Func Offset: 0x6c
	// Line 813, Address: 0x195f74, Func Offset: 0x74
	// Line 814, Address: 0x195f7c, Func Offset: 0x7c
	// Line 815, Address: 0x195f88, Func Offset: 0x88
	// Func End, Address: 0x195f90, Func Offset: 0x90
}

// 
// Start address: 0x195f90
int vcExecCamera()
{
	int smooth_f;
	_VC_CAM_MV_PARAM* cam_mv_prm_p;
	_VC_WATCH_MV_PARAM* watch_mv_prm_p;
	int warp_f;
	float sv_old_cam_mat_ang[4];
	float sv_old_cam_pos[4];
	float self_view_eff_rate;
	float far_watch_rate;
	_VC_AREA_SIZE_TYPE cur_rd_area_size;
	_VC_CAM_MV_TYPE cur_cam_mv_type;
	_VC_ROAD_FLAGS cur_rd_flags;
	// Line 833, Address: 0x195f90, Func Offset: 0
	// Line 842, Address: 0x195fb0, Func Offset: 0x20
	// Line 843, Address: 0x195fc4, Func Offset: 0x34
	// Line 845, Address: 0x195fd8, Func Offset: 0x48
	// Line 847, Address: 0x195ff4, Func Offset: 0x64
	// Line 851, Address: 0x195ffc, Func Offset: 0x6c
	// Line 860, Address: 0x196014, Func Offset: 0x84
	// Line 862, Address: 0x196028, Func Offset: 0x98
	// Line 865, Address: 0x19605c, Func Offset: 0xcc
	// Line 866, Address: 0x196060, Func Offset: 0xd0
	// Line 868, Address: 0x196064, Func Offset: 0xd4
	// Line 870, Address: 0x196078, Func Offset: 0xe8
	// Line 872, Address: 0x19609c, Func Offset: 0x10c
	// Line 875, Address: 0x1960b8, Func Offset: 0x128
	// Line 876, Address: 0x1960cc, Func Offset: 0x13c
	// Line 878, Address: 0x1960e0, Func Offset: 0x150
	// Line 879, Address: 0x1960f4, Func Offset: 0x164
	// Line 887, Address: 0x196100, Func Offset: 0x170
	// Line 892, Address: 0x196120, Func Offset: 0x190
	// Line 893, Address: 0x196134, Func Offset: 0x1a4
	// Line 899, Address: 0x196158, Func Offset: 0x1c8
	// Line 902, Address: 0x19616c, Func Offset: 0x1dc
	// Line 904, Address: 0x196180, Func Offset: 0x1f0
	// Line 906, Address: 0x196190, Func Offset: 0x200
	// Line 908, Address: 0x1961a4, Func Offset: 0x214
	// Line 913, Address: 0x1961c4, Func Offset: 0x234
	// Line 919, Address: 0x1961f8, Func Offset: 0x268
	// Line 924, Address: 0x196210, Func Offset: 0x280
	// Line 931, Address: 0x196234, Func Offset: 0x2a4
	// Line 934, Address: 0x196248, Func Offset: 0x2b8
	// Line 951, Address: 0x196250, Func Offset: 0x2c0
	// Line 964, Address: 0x196270, Func Offset: 0x2e0
	// Func End, Address: 0x196298, Func Offset: 0x308
}

// 
// Start address: 0x1962a0
void vcSetAllNpcDeadTimer()
{
	int i;
	SubCharacter* sc_p;
	// Line 981, Address: 0x1962a0, Func Offset: 0
	// Line 985, Address: 0x1962b0, Func Offset: 0x10
	// Line 986, Address: 0x1962bc, Func Offset: 0x1c
	// Line 987, Address: 0x1962d0, Func Offset: 0x30
	// Line 989, Address: 0x1962d8, Func Offset: 0x38
	// Line 990, Address: 0x1962e8, Func Offset: 0x48
	// Line 992, Address: 0x196304, Func Offset: 0x64
	// Line 994, Address: 0x196308, Func Offset: 0x68
	// Line 995, Address: 0x196328, Func Offset: 0x88
	// Line 996, Address: 0x19632c, Func Offset: 0x8c
	// Line 997, Address: 0x196344, Func Offset: 0xa4
	// Func End, Address: 0x19635c, Func Offset: 0xbc
}

// 
// Start address: 0x196360
int vcRetSmoothCamMvF(float* old_pos, float* now_pos, float* old_ang, float* now_ang)
{
	int intrpt;
	float rot_y;
	float rot_x;
	float mv_vec;
	// Line 1023, Address: 0x196360, Func Offset: 0
	// Line 1029, Address: 0x196390, Func Offset: 0x30
	// Line 1030, Address: 0x196398, Func Offset: 0x38
	// Line 1053, Address: 0x1963fc, Func Offset: 0x9c
	// Line 1056, Address: 0x196440, Func Offset: 0xe0
	// Line 1059, Address: 0x196468, Func Offset: 0x108
	// Line 1061, Address: 0x19647c, Func Offset: 0x11c
	// Line 1063, Address: 0x1964a8, Func Offset: 0x148
	// Line 1064, Address: 0x1964d8, Func Offset: 0x178
	// Line 1066, Address: 0x1964e8, Func Offset: 0x188
	// Line 1069, Address: 0x196514, Func Offset: 0x1b4
	// Line 1070, Address: 0x196518, Func Offset: 0x1b8
	// Func End, Address: 0x196540, Func Offset: 0x1e0
}

// 
// Start address: 0x196540
_VC_CAM_MV_TYPE vcRetCurCamMvType(_VC_WORK* w_p)
{
	// Line 1087, Address: 0x196540, Func Offset: 0
	// Line 1088, Address: 0x196550, Func Offset: 0x10
	// Line 1089, Address: 0x19655c, Func Offset: 0x1c
	// Line 1090, Address: 0x19656c, Func Offset: 0x2c
	// Line 1092, Address: 0x196578, Func Offset: 0x38
	// Line 1097, Address: 0x196588, Func Offset: 0x48
	// Line 1098, Address: 0x19659c, Func Offset: 0x5c
	// Func End, Address: 0x1965b0, Func Offset: 0x70
}

// 
// Start address: 0x1965b0
int vcRetThroughDoorCamEndF(_VC_WORK* w_p)
{
	float abs_ofs_ang_y;
	float rail2chara_dist;
	_VC_THROUGH_DOOR_CAM_PARAM* prm_p;
	// Line 1115, Address: 0x1965b0, Func Offset: 0
	// Line 1119, Address: 0x1965c0, Func Offset: 0x10
	// Line 1120, Address: 0x1965c4, Func Offset: 0x14
	// Line 1122, Address: 0x1965c8, Func Offset: 0x18
	// Line 1124, Address: 0x1965e0, Func Offset: 0x30
	// Line 1128, Address: 0x19662c, Func Offset: 0x7c
	// Line 1131, Address: 0x196638, Func Offset: 0x88
	// Line 1133, Address: 0x196654, Func Offset: 0xa4
	// Line 1134, Address: 0x196660, Func Offset: 0xb0
	// Line 1138, Address: 0x19667c, Func Offset: 0xcc
	// Line 1150, Address: 0x1966b0, Func Offset: 0x100
	// Line 1154, Address: 0x1966dc, Func Offset: 0x12c
	// Line 1155, Address: 0x1966e0, Func Offset: 0x130
	// Func End, Address: 0x1966f4, Func Offset: 0x144
}

// 
// Start address: 0x196700
float vcRetFarWatchRate(int far_watch_button_prs_f, _VC_CAM_MV_TYPE cur_cam_mv_type, _VC_WORK* w_p)
{
	float abs_ofs_ang_y;
	float dist;
	float far_watch_rate;
	// Line 1176, Address: 0x196700, Func Offset: 0
	// Line 1179, Address: 0x196714, Func Offset: 0x14
	// Line 1182, Address: 0x196740, Func Offset: 0x40
	// Line 1183, Address: 0x196744, Func Offset: 0x44
	// Line 1184, Address: 0x19674c, Func Offset: 0x4c
	// Line 1186, Address: 0x196778, Func Offset: 0x78
	// Line 1187, Address: 0x19677c, Func Offset: 0x7c
	// Line 1188, Address: 0x196798, Func Offset: 0x98
	// Line 1189, Address: 0x1967a4, Func Offset: 0xa4
	// Line 1191, Address: 0x1967ac, Func Offset: 0xac
	// Line 1192, Address: 0x1967b0, Func Offset: 0xb0
	// Line 1196, Address: 0x1967b8, Func Offset: 0xb8
	// Line 1197, Address: 0x1967d0, Func Offset: 0xd0
	// Line 1198, Address: 0x1967d4, Func Offset: 0xd4
	// Line 1200, Address: 0x1967dc, Func Offset: 0xdc
	// Line 1205, Address: 0x1967f4, Func Offset: 0xf4
	// Line 1207, Address: 0x1967f8, Func Offset: 0xf8
	// Line 1211, Address: 0x196820, Func Offset: 0x120
	// Line 1213, Address: 0x19682c, Func Offset: 0x12c
	// Line 1219, Address: 0x196848, Func Offset: 0x148
	// Line 1232, Address: 0x19687c, Func Offset: 0x17c
	// Line 1236, Address: 0x19689c, Func Offset: 0x19c
	// Line 1239, Address: 0x1968a8, Func Offset: 0x1a8
	// Line 1241, Address: 0x1968b0, Func Offset: 0x1b0
	// Line 1246, Address: 0x1968d4, Func Offset: 0x1d4
	// Line 1247, Address: 0x1968d8, Func Offset: 0x1d8
	// Func End, Address: 0x1968f0, Func Offset: 0x1f0
}

// 
// Start address: 0x1968f0
float vcRetSelfViewEffectRate(_VC_CAM_MV_TYPE cur_cam_mv_type, _VC_WORK* w_p)
{
	float mul_rate;
	float max_rate;
	float xyz_dist;
	float ret_eff_rate;
	// Line 1270, Address: 0x1968f0, Func Offset: 0
	// Line 1271, Address: 0x19690c, Func Offset: 0x1c
	// Line 1282, Address: 0x196918, Func Offset: 0x28
	// Line 1283, Address: 0x196938, Func Offset: 0x48
	// Line 1306, Address: 0x196944, Func Offset: 0x54
	// Line 1309, Address: 0x196978, Func Offset: 0x88
	// Line 1310, Address: 0x1969a0, Func Offset: 0xb0
	// Line 1312, Address: 0x1969c8, Func Offset: 0xd8
	// Line 1322, Address: 0x1969e0, Func Offset: 0xf0
	// Line 1323, Address: 0x196a08, Func Offset: 0x118
	// Line 1324, Address: 0x196a10, Func Offset: 0x120
	// Line 1325, Address: 0x196a34, Func Offset: 0x144
	// Line 1326, Address: 0x196a38, Func Offset: 0x148
	// Line 1327, Address: 0x196a40, Func Offset: 0x150
	// Line 1331, Address: 0x196a4c, Func Offset: 0x15c
	// Line 1336, Address: 0x196a50, Func Offset: 0x160
	// Line 1341, Address: 0x196a94, Func Offset: 0x1a4
	// Func End, Address: 0x196a9c, Func Offset: 0x1ac
}

// 
// Start address: 0x196aa0
void vcSetFlagsByCamMvType(_VC_CAM_MV_TYPE cam_mv_type, float far_watch_rate, int all_warp_f)
{
	// Line 1362, Address: 0x196aa0, Func Offset: 0
	// Line 1364, Address: 0x196aa8, Func Offset: 0x8
	// Line 1366, Address: 0x196ac0, Func Offset: 0x20
	// Line 1368, Address: 0x196adc, Func Offset: 0x3c
	// Line 1372, Address: 0x196b08, Func Offset: 0x68
	// Line 1373, Address: 0x196b1c, Func Offset: 0x7c
	// Line 1377, Address: 0x196b24, Func Offset: 0x84
	// Line 1378, Address: 0x196b38, Func Offset: 0x98
	// Line 1379, Address: 0x196b40, Func Offset: 0xa0
	// Line 1384, Address: 0x196b64, Func Offset: 0xc4
	// Line 1385, Address: 0x196b74, Func Offset: 0xd4
	// Line 1387, Address: 0x196b88, Func Offset: 0xe8
	// Line 1388, Address: 0x196b90, Func Offset: 0xf0
	// Line 1390, Address: 0x196ba4, Func Offset: 0x104
	// Line 1391, Address: 0x196bbc, Func Offset: 0x11c
	// Line 1392, Address: 0x196bd0, Func Offset: 0x130
	// Func End, Address: 0x196be0, Func Offset: 0x140
}

// 
// Start address: 0x196be0
void vcPreSetDataInVC_WORK(_VC_WORK* w_p, _VC_ROAD_DATA** vc_road_ary_list)
{
	// Line 1418, Address: 0x196be0, Func Offset: 0
	// Line 1419, Address: 0x196bf8, Func Offset: 0x18
	// Line 1420, Address: 0x196c18, Func Offset: 0x38
	// Line 1421, Address: 0x196c2c, Func Offset: 0x4c
	// Line 1423, Address: 0x196c40, Func Offset: 0x60
	// Line 1425, Address: 0x196c4c, Func Offset: 0x6c
	// Line 1426, Address: 0x196c5c, Func Offset: 0x7c
	// Line 1428, Address: 0x196c78, Func Offset: 0x98
	// Line 1432, Address: 0x196c8c, Func Offset: 0xac
	// Line 1433, Address: 0x196cbc, Func Offset: 0xdc
	// Line 1435, Address: 0x196cec, Func Offset: 0x10c
	// Line 1437, Address: 0x196cfc, Func Offset: 0x11c
	// Line 1441, Address: 0x196d10, Func Offset: 0x130
	// Line 1446, Address: 0x196d24, Func Offset: 0x144
	// Line 1448, Address: 0x196d30, Func Offset: 0x150
	// Line 1450, Address: 0x196d44, Func Offset: 0x164
	// Line 1455, Address: 0x196d50, Func Offset: 0x170
	// Line 1466, Address: 0x196d7c, Func Offset: 0x19c
	// Line 1467, Address: 0x196da8, Func Offset: 0x1c8
	// Line 1468, Address: 0x196dc0, Func Offset: 0x1e0
	// Line 1469, Address: 0x196dc8, Func Offset: 0x1e8
	// Line 1471, Address: 0x196de0, Func Offset: 0x200
	// Func End, Address: 0x196df8, Func Offset: 0x218
}

// 
// Start address: 0x196e00
void vcSetTHROUGH_DOOR_CAM_PARAM_in_VC_WORK(_VC_WORK* w_p, _THROUGH_DOOR_SET_CMD_TYPE set_cmd_type)
{
	_VC_THROUGH_DOOR_CAM_PARAM* prm_p;
	// Line 1492, Address: 0x196e00, Func Offset: 0
	// Line 1495, Address: 0x196e0c, Func Offset: 0xc
	// Line 1497, Address: 0x196e10, Func Offset: 0x10
	// Line 1499, Address: 0x196e3c, Func Offset: 0x3c
	// Line 1500, Address: 0x196e40, Func Offset: 0x40
	// Line 1501, Address: 0x196e44, Func Offset: 0x44
	// Line 1503, Address: 0x196e4c, Func Offset: 0x4c
	// Line 1508, Address: 0x196e5c, Func Offset: 0x5c
	// Line 1509, Address: 0x196e64, Func Offset: 0x64
	// Line 1511, Address: 0x196e6c, Func Offset: 0x6c
	// Line 1512, Address: 0x196e70, Func Offset: 0x70
	// Line 1513, Address: 0x196e74, Func Offset: 0x74
	// Line 1516, Address: 0x196e7c, Func Offset: 0x7c
	// Line 1517, Address: 0x196e88, Func Offset: 0x88
	// Line 1520, Address: 0x196eb8, Func Offset: 0xb8
	// Line 1522, Address: 0x196ecc, Func Offset: 0xcc
	// Line 1523, Address: 0x196ee8, Func Offset: 0xe8
	// Line 1529, Address: 0x196f0c, Func Offset: 0x10c
	// Func End, Address: 0x196f20, Func Offset: 0x120
}

// 
// Start address: 0x196f20
void vcSetNearestEnemyDataInVC_WORK(_VC_WORK* w_p)
{
	int set_active_data_f;
	int adv_sc_f;
	float xz_dist;
	float ofs_xz[4];
	int i;
	float active_min_dist;
	float all_min_dist;
	SubCharacter* active_min_sc_p;
	SubCharacter* all_min_sc_p;
	SubCharacter* sc_p;
	// Line 1546, Address: 0x196f20, Func Offset: 0
	// Line 1548, Address: 0x196f44, Func Offset: 0x24
	// Line 1549, Address: 0x196f48, Func Offset: 0x28
	// Line 1554, Address: 0x196f4c, Func Offset: 0x2c
	// Line 1556, Address: 0x196f60, Func Offset: 0x40
	// Line 1558, Address: 0x196f78, Func Offset: 0x58
	// Line 1559, Address: 0x196f84, Func Offset: 0x64
	// Line 1560, Address: 0x196f90, Func Offset: 0x70
	// Line 1563, Address: 0x196f98, Func Offset: 0x78
	// Line 1569, Address: 0x196fa4, Func Offset: 0x84
	// Line 1571, Address: 0x196fb4, Func Offset: 0x94
	// Line 1573, Address: 0x196fbc, Func Offset: 0x9c
	// Line 1577, Address: 0x197010, Func Offset: 0xf0
	// Line 1578, Address: 0x197020, Func Offset: 0x100
	// Line 1579, Address: 0x197030, Func Offset: 0x110
	// Line 1585, Address: 0x197070, Func Offset: 0x150
	// Line 1587, Address: 0x197090, Func Offset: 0x170
	// Line 1588, Address: 0x1970a0, Func Offset: 0x180
	// Line 1589, Address: 0x1970a4, Func Offset: 0x184
	// Line 1592, Address: 0x1970a8, Func Offset: 0x188
	// Line 1593, Address: 0x1970b8, Func Offset: 0x198
	// Line 1594, Address: 0x1970bc, Func Offset: 0x19c
	// Line 1595, Address: 0x1970c4, Func Offset: 0x1a4
	// Line 1599, Address: 0x1970e8, Func Offset: 0x1c8
	// Line 1600, Address: 0x1970ec, Func Offset: 0x1cc
	// Line 1601, Address: 0x1970f4, Func Offset: 0x1d4
	// Line 1605, Address: 0x1970f8, Func Offset: 0x1d8
	// Line 1606, Address: 0x197110, Func Offset: 0x1f0
	// Line 1607, Address: 0x197114, Func Offset: 0x1f4
	// Line 1609, Address: 0x197118, Func Offset: 0x1f8
	// Line 1611, Address: 0x197130, Func Offset: 0x210
	// Line 1612, Address: 0x197138, Func Offset: 0x218
	// Line 1613, Address: 0x197144, Func Offset: 0x224
	// Line 1614, Address: 0x197150, Func Offset: 0x230
	// Line 1615, Address: 0x197158, Func Offset: 0x238
	// Line 1616, Address: 0x197164, Func Offset: 0x244
	// Line 1618, Address: 0x197170, Func Offset: 0x250
	// Func End, Address: 0x197198, Func Offset: 0x278
}

// 
// Start address: 0x1971a0
void vcSetNearestItemDataInVC_WORK(_VC_WORK* w_p)
{
	float xz_dist;
	int adv_sc_f;
	float ofs_xz[4];
	int i;
	float all_min_dist;
	SubCharacter* all_min_sc_p;
	SubCharacter* sc_p;
	// Line 1626, Address: 0x1971a0, Func Offset: 0
	// Line 1628, Address: 0x1971bc, Func Offset: 0x1c
	// Line 1632, Address: 0x1971c0, Func Offset: 0x20
	// Line 1634, Address: 0x1971cc, Func Offset: 0x2c
	// Line 1635, Address: 0x1971e4, Func Offset: 0x44
	// Line 1636, Address: 0x1971f0, Func Offset: 0x50
	// Line 1637, Address: 0x1971fc, Func Offset: 0x5c
	// Line 1640, Address: 0x197204, Func Offset: 0x64
	// Line 1645, Address: 0x197210, Func Offset: 0x70
	// Line 1647, Address: 0x197220, Func Offset: 0x80
	// Line 1651, Address: 0x197228, Func Offset: 0x88
	// Line 1652, Address: 0x197238, Func Offset: 0x98
	// Line 1653, Address: 0x197248, Func Offset: 0xa8
	// Line 1659, Address: 0x197288, Func Offset: 0xe8
	// Line 1661, Address: 0x1972a8, Func Offset: 0x108
	// Line 1662, Address: 0x1972b8, Func Offset: 0x118
	// Line 1663, Address: 0x1972bc, Func Offset: 0x11c
	// Line 1665, Address: 0x1972c0, Func Offset: 0x120
	// Line 1667, Address: 0x1972d8, Func Offset: 0x138
	// Line 1668, Address: 0x1972e4, Func Offset: 0x144
	// Line 1669, Address: 0x1972f0, Func Offset: 0x150
	// Func End, Address: 0x197310, Func Offset: 0x170
}

// 
// Start address: 0x197310
void vcSetNearRoadAryByCharaPos(_VC_WORK* w_p, _VC_ROAD_DATA** road_ary_list, float half_w, int near_enemy_f)
{
	float add;
	_VC_NEAR_ROAD_DATA* near_rd_p;
	float tmpvec2[4];
	float tmpvec1[4];
	float zl;
	float xl;
	float rd_max_z;
	float rd_min_z;
	float rd_max_x;
	float rd_min_x;
	float sw_max_z;
	float sw_min_z;
	float sw_max_x;
	float sw_min_x;
	float sw_rm[4][4];
	float rd_rm[4][4];
	float swrot;
	float rdrot;
	_VC_LIMIT_AREA sw;
	_VC_LIMIT_AREA rd;
	float ppos[4];
	float tmpvec0[4];
	float get_max_z;
	float get_min_z;
	float get_max_x;
	float get_min_x;
	_VC_ROAD_DATA* rd_p;
	_VC_ROAD_DATA* road_ary;
	// Line 1705, Address: 0x197310, Func Offset: 0
	// Line 1717, Address: 0x197368, Func Offset: 0x58
	// Line 1720, Address: 0x197370, Func Offset: 0x60
	// Line 1721, Address: 0x19737c, Func Offset: 0x6c
	// Line 1722, Address: 0x197384, Func Offset: 0x74
	// Line 1736, Address: 0x19738c, Func Offset: 0x7c
	// Line 1737, Address: 0x197394, Func Offset: 0x84
	// Line 1739, Address: 0x1973a4, Func Offset: 0x94
	// Line 1740, Address: 0x1973ac, Func Offset: 0x9c
	// Line 1742, Address: 0x1973bc, Func Offset: 0xac
	// Line 1749, Address: 0x1973c0, Func Offset: 0xb0
	// Line 1750, Address: 0x1973cc, Func Offset: 0xbc
	// Line 1752, Address: 0x1973d8, Func Offset: 0xc8
	// Line 1754, Address: 0x1973e4, Func Offset: 0xd4
	// Line 1755, Address: 0x19740c, Func Offset: 0xfc
	// Line 1756, Address: 0x19742c, Func Offset: 0x11c
	// Line 1757, Address: 0x197434, Func Offset: 0x124
	// Line 1760, Address: 0x19743c, Func Offset: 0x12c
	// Line 1761, Address: 0x197444, Func Offset: 0x134
	// Line 1762, Address: 0x19744c, Func Offset: 0x13c
	// Line 1763, Address: 0x197460, Func Offset: 0x150
	// Line 1764, Address: 0x197468, Func Offset: 0x158
	// Line 1765, Address: 0x197470, Func Offset: 0x160
	// Line 1767, Address: 0x197484, Func Offset: 0x174
	// Line 1768, Address: 0x19749c, Func Offset: 0x18c
	// Line 1769, Address: 0x1974a0, Func Offset: 0x190
	// Line 1770, Address: 0x1974a4, Func Offset: 0x194
	// Line 1771, Address: 0x1974ac, Func Offset: 0x19c
	// Line 1772, Address: 0x1974b0, Func Offset: 0x1a0
	// Line 1773, Address: 0x1974b4, Func Offset: 0x1a4
	// Line 1775, Address: 0x1974b8, Func Offset: 0x1a8
	// Line 1776, Address: 0x1974d0, Func Offset: 0x1c0
	// Line 1777, Address: 0x1974d4, Func Offset: 0x1c4
	// Line 1778, Address: 0x1974d8, Func Offset: 0x1c8
	// Line 1779, Address: 0x1974e0, Func Offset: 0x1d0
	// Line 1780, Address: 0x1974e4, Func Offset: 0x1d4
	// Line 1783, Address: 0x1974e8, Func Offset: 0x1d8
	// Line 1784, Address: 0x1974f4, Func Offset: 0x1e4
	// Line 1786, Address: 0x197500, Func Offset: 0x1f0
	// Line 1788, Address: 0x19750c, Func Offset: 0x1fc
	// Line 1789, Address: 0x197534, Func Offset: 0x224
	// Line 1790, Address: 0x197554, Func Offset: 0x244
	// Line 1791, Address: 0x19755c, Func Offset: 0x24c
	// Line 1794, Address: 0x197564, Func Offset: 0x254
	// Line 1795, Address: 0x19756c, Func Offset: 0x25c
	// Line 1796, Address: 0x197574, Func Offset: 0x264
	// Line 1797, Address: 0x197588, Func Offset: 0x278
	// Line 1798, Address: 0x197590, Func Offset: 0x280
	// Line 1799, Address: 0x197598, Func Offset: 0x288
	// Line 1801, Address: 0x1975ac, Func Offset: 0x29c
	// Line 1802, Address: 0x1975c4, Func Offset: 0x2b4
	// Line 1803, Address: 0x1975c8, Func Offset: 0x2b8
	// Line 1804, Address: 0x1975cc, Func Offset: 0x2bc
	// Line 1805, Address: 0x1975d4, Func Offset: 0x2c4
	// Line 1806, Address: 0x1975d8, Func Offset: 0x2c8
	// Line 1807, Address: 0x1975dc, Func Offset: 0x2cc
	// Line 1809, Address: 0x1975e0, Func Offset: 0x2d0
	// Line 1810, Address: 0x1975f8, Func Offset: 0x2e8
	// Line 1811, Address: 0x1975fc, Func Offset: 0x2ec
	// Line 1812, Address: 0x197600, Func Offset: 0x2f0
	// Line 1813, Address: 0x197608, Func Offset: 0x2f8
	// Line 1814, Address: 0x19760c, Func Offset: 0x2fc
	// Line 1818, Address: 0x197610, Func Offset: 0x300
	// Line 1819, Address: 0x197618, Func Offset: 0x308
	// Line 1820, Address: 0x197620, Func Offset: 0x310
	// Line 1822, Address: 0x197634, Func Offset: 0x324
	// Line 1823, Address: 0x19763c, Func Offset: 0x32c
	// Line 1824, Address: 0x197640, Func Offset: 0x330
	// Line 1825, Address: 0x197648, Func Offset: 0x338
	// Line 1828, Address: 0x19764c, Func Offset: 0x33c
	// Line 1829, Address: 0x197650, Func Offset: 0x340
	// Line 1830, Address: 0x197654, Func Offset: 0x344
	// Line 1831, Address: 0x197658, Func Offset: 0x348
	// Line 1832, Address: 0x19765c, Func Offset: 0x34c
	// Line 1833, Address: 0x197660, Func Offset: 0x350
	// Line 1834, Address: 0x197664, Func Offset: 0x354
	// Line 1835, Address: 0x197668, Func Offset: 0x358
	// Line 1837, Address: 0x19766c, Func Offset: 0x35c
	// Line 1853, Address: 0x1976f0, Func Offset: 0x3e0
	// Line 1854, Address: 0x197718, Func Offset: 0x408
	// Line 1855, Address: 0x19771c, Func Offset: 0x40c
	// Line 1866, Address: 0x197754, Func Offset: 0x444
	// Line 1867, Address: 0x19776c, Func Offset: 0x45c
	// Line 1869, Address: 0x19777c, Func Offset: 0x46c
	// Line 1870, Address: 0x197790, Func Offset: 0x480
	// Line 1873, Address: 0x1977a0, Func Offset: 0x490
	// Line 1875, Address: 0x1977a8, Func Offset: 0x498
	// Line 1877, Address: 0x1977b4, Func Offset: 0x4a4
	// Line 1878, Address: 0x1977bc, Func Offset: 0x4ac
	// Line 1880, Address: 0x1977cc, Func Offset: 0x4bc
	// Line 1881, Address: 0x1977d0, Func Offset: 0x4c0
	// Line 1882, Address: 0x1977d4, Func Offset: 0x4c4
	// Line 1883, Address: 0x1977d8, Func Offset: 0x4c8
	// Line 1884, Address: 0x1977dc, Func Offset: 0x4cc
	// Line 1885, Address: 0x1977e0, Func Offset: 0x4d0
	// Line 1886, Address: 0x1977e4, Func Offset: 0x4d4
	// Line 1887, Address: 0x1977e8, Func Offset: 0x4d8
	// Line 1888, Address: 0x1977ec, Func Offset: 0x4dc
	// Line 1889, Address: 0x1977f4, Func Offset: 0x4e4
	// Line 1890, Address: 0x1977fc, Func Offset: 0x4ec
	// Line 1891, Address: 0x197804, Func Offset: 0x4f4
	// Line 1893, Address: 0x19780c, Func Offset: 0x4fc
	// Line 1895, Address: 0x197830, Func Offset: 0x520
	// Line 1896, Address: 0x197854, Func Offset: 0x544
	// Line 1897, Address: 0x197864, Func Offset: 0x554
	// Line 1898, Address: 0x197870, Func Offset: 0x560
	// Line 1899, Address: 0x19787c, Func Offset: 0x56c
	// Line 1901, Address: 0x1978a0, Func Offset: 0x590
	// Line 1903, Address: 0x1978c4, Func Offset: 0x5b4
	// Line 1904, Address: 0x1978e8, Func Offset: 0x5d8
	// Line 1905, Address: 0x1978f8, Func Offset: 0x5e8
	// Line 1906, Address: 0x197904, Func Offset: 0x5f4
	// Line 1907, Address: 0x197910, Func Offset: 0x600
	// Line 1909, Address: 0x197934, Func Offset: 0x624
	// Line 1910, Address: 0x197950, Func Offset: 0x640
	// Line 1912, Address: 0x19798c, Func Offset: 0x67c
	// Line 1913, Address: 0x1979b4, Func Offset: 0x6a4
	// Func End, Address: 0x197a04, Func Offset: 0x6f4
}

// 
// Start address: 0x197a10
int vcRetRoadUsePriority(_VC_ROAD_TYPE rd_type)
{
	// Line 1930, Address: 0x197a10, Func Offset: 0
	// Line 1932, Address: 0x197a18, Func Offset: 0x8
	// Line 1935, Address: 0x197a44, Func Offset: 0x34
	// Line 1938, Address: 0x197a70, Func Offset: 0x60
	// Line 1940, Address: 0x197a9c, Func Offset: 0x8c
	// Line 1941, Address: 0x197aa8, Func Offset: 0x98
	// Line 1942, Address: 0x197ab4, Func Offset: 0xa4
	// Line 1944, Address: 0x197ac0, Func Offset: 0xb0
	// Line 1954, Address: 0x197adc, Func Offset: 0xcc
	// Line 1955, Address: 0x197ae0, Func Offset: 0xd0
	// Func End, Address: 0x197af0, Func Offset: 0xe0
}

// 
// Start address: 0x197af0
int vcSetCurNearRoadInVC_WORK(_VC_WORK* w_p)
{
	float old_cur_sum_dist;
	float old_cur_rd_ang_y;
	float ofs_ang_y;
	int proj_frame;
	int ret_warp_f;
	float adv_old_cur_dist;
	float new_cur_sum_dist;
	_VC_NEAR_ROAD_DATA* old_cur_p;
	_VC_NEAR_ROAD_DATA* new_cur_p;
	_VC_NEAR_ROAD_DATA* n_rd_p;
	// Line 1973, Address: 0x197af0, Func Offset: 0
	// Line 1979, Address: 0x197b14, Func Offset: 0x24
	// Line 1982, Address: 0x197b18, Func Offset: 0x28
	// Line 1989, Address: 0x197b34, Func Offset: 0x44
	// Line 1993, Address: 0x197b44, Func Offset: 0x54
	// Line 1994, Address: 0x197b5c, Func Offset: 0x6c
	// Line 1995, Address: 0x197b60, Func Offset: 0x70
	// Line 2018, Address: 0x197b9c, Func Offset: 0xac
	// Line 2020, Address: 0x197ba4, Func Offset: 0xb4
	// Line 2022, Address: 0x197c84, Func Offset: 0x194
	// Line 2024, Address: 0x197c90, Func Offset: 0x1a0
	// Line 2029, Address: 0x197ca0, Func Offset: 0x1b0
	// Line 2032, Address: 0x197cdc, Func Offset: 0x1ec
	// Line 2033, Address: 0x197d08, Func Offset: 0x218
	// Line 2034, Address: 0x197d10, Func Offset: 0x220
	// Line 2037, Address: 0x197d38, Func Offset: 0x248
	// Line 2038, Address: 0x197e14, Func Offset: 0x324
	// Line 2055, Address: 0x197e6c, Func Offset: 0x37c
	// Line 2056, Address: 0x197f48, Func Offset: 0x458
	// Line 2061, Address: 0x197f50, Func Offset: 0x460
	// Line 2064, Address: 0x197f54, Func Offset: 0x464
	// Line 2065, Address: 0x197f80, Func Offset: 0x490
	// Line 2066, Address: 0x197f8c, Func Offset: 0x49c
	// Line 2067, Address: 0x197fa0, Func Offset: 0x4b0
	// Line 2068, Address: 0x197fac, Func Offset: 0x4bc
	// Line 2071, Address: 0x197fd4, Func Offset: 0x4e4
	// Line 2073, Address: 0x197fe4, Func Offset: 0x4f4
	// Line 2074, Address: 0x198010, Func Offset: 0x520
	// Line 2077, Address: 0x198044, Func Offset: 0x554
	// Line 2078, Address: 0x198058, Func Offset: 0x568
	// Line 2079, Address: 0x198084, Func Offset: 0x594
	// Line 2080, Address: 0x19808c, Func Offset: 0x59c
	// Line 2081, Address: 0x1980c4, Func Offset: 0x5d4
	// Line 2082, Address: 0x1980f0, Func Offset: 0x600
	// Line 2083, Address: 0x1980f8, Func Offset: 0x608
	// Line 2089, Address: 0x1981d8, Func Offset: 0x6e8
	// Line 2092, Address: 0x198204, Func Offset: 0x714
	// Line 2095, Address: 0x198208, Func Offset: 0x718
	// Line 2096, Address: 0x19821c, Func Offset: 0x72c
	// Line 2098, Address: 0x19822c, Func Offset: 0x73c
	// Line 2099, Address: 0x198230, Func Offset: 0x740
	// Func End, Address: 0x198258, Func Offset: 0x768
}

// 
// Start address: 0x198260
float vcGetBestNewCurNearRoad(_VC_NEAR_ROAD_DATA** new_cur_pp, _enum_0 chk_type, float* pos, _VC_WORK* w_p)
{
	float dummy;
	int renewal_f;
	int renewal_f;
	int renewal_f;
	int renewal_f;
	int renewal_f;
	int renewal_f;
	int new_cur_priority;
	float sv_only_min_dist;
	float rd_low_min_dist;
	float rd_high_min_dist;
	_VC_NEAR_ROAD_DATA* sv_only_nearest_p;
	_VC_NEAR_ROAD_DATA* rd_low_nearest_p;
	_VC_NEAR_ROAD_DATA* rd_high_nearest_p;
	float evnt_min_dist;
	float eff_min_dist;
	float road_min_dist;
	_VC_NEAR_ROAD_DATA* evnt_nearest_p;
	_VC_NEAR_ROAD_DATA* eff_nearest_p;
	_VC_NEAR_ROAD_DATA* road_nearest_p;
	float new_cur_dist;
	_VC_NEAR_ROAD_DATA* new_cur_p;
	// Line 2126, Address: 0x198260, Func Offset: 0
	// Line 2136, Address: 0x1982a4, Func Offset: 0x44
	// Line 2137, Address: 0x1982a8, Func Offset: 0x48
	// Line 2150, Address: 0x1982b4, Func Offset: 0x54
	// Line 2151, Address: 0x1982d4, Func Offset: 0x74
	// Line 2152, Address: 0x1982f8, Func Offset: 0x98
	// Line 2154, Address: 0x19831c, Func Offset: 0xbc
	// Line 2156, Address: 0x198340, Func Offset: 0xe0
	// Line 2158, Address: 0x198364, Func Offset: 0x104
	// Line 2164, Address: 0x198384, Func Offset: 0x124
	// Line 2188, Address: 0x198388, Func Offset: 0x128
	// Line 2189, Address: 0x198458, Func Offset: 0x1f8
	// Line 2190, Address: 0x198518, Func Offset: 0x2b8
	// Line 2192, Address: 0x1985d8, Func Offset: 0x378
	// Line 2193, Address: 0x198698, Func Offset: 0x438
	// Line 2194, Address: 0x198758, Func Offset: 0x4f8
	// Line 2198, Address: 0x198810, Func Offset: 0x5b0
	// Line 2201, Address: 0x198818, Func Offset: 0x5b8
	// Line 2202, Address: 0x198820, Func Offset: 0x5c0
	// Line 2214, Address: 0x19886c, Func Offset: 0x60c
	// Line 2216, Address: 0x198870, Func Offset: 0x610
	// Line 2217, Address: 0x198874, Func Offset: 0x614
	// Func End, Address: 0x1988b0, Func Offset: 0x650
}

// 
// Start address: 0x1988b0
float vcGetNearestNEAR_ROAD_DATA(_VC_NEAR_ROAD_DATA** out_nearest_p_addr, _enum_0 chk_type, _VC_ROAD_TYPE rd_type, float* pos, _VC_WORK* w_p, int chk_only_set_marge_f)
{
	float dist;
	float max_z;
	float min_z;
	float max_x;
	float min_x;
	float cppos[4];
	float dummy;
	float min_sum_dist;
	_VC_NEAR_ROAD_DATA* n_rd_p;
	_VC_NEAR_ROAD_DATA* nearest_p;
	// Line 2250, Address: 0x1988b0, Func Offset: 0
	// Line 2257, Address: 0x198904, Func Offset: 0x54
	// Line 2258, Address: 0x198908, Func Offset: 0x58
	// Line 2260, Address: 0x198914, Func Offset: 0x64
	// Line 2267, Address: 0x198920, Func Offset: 0x70
	// Line 2269, Address: 0x198934, Func Offset: 0x84
	// Line 2270, Address: 0x19893c, Func Offset: 0x8c
	// Line 2272, Address: 0x19894c, Func Offset: 0x9c
	// Line 2274, Address: 0x198950, Func Offset: 0xa0
	// Line 2276, Address: 0x198970, Func Offset: 0xc0
	// Line 2277, Address: 0x198974, Func Offset: 0xc4
	// Line 2278, Address: 0x198978, Func Offset: 0xc8
	// Line 2279, Address: 0x19897c, Func Offset: 0xcc
	// Line 2280, Address: 0x198980, Func Offset: 0xd0
	// Line 2282, Address: 0x198988, Func Offset: 0xd8
	// Line 2283, Address: 0x19898c, Func Offset: 0xdc
	// Line 2284, Address: 0x198990, Func Offset: 0xe0
	// Line 2285, Address: 0x198994, Func Offset: 0xe4
	// Line 2286, Address: 0x198998, Func Offset: 0xe8
	// Line 2288, Address: 0x1989a0, Func Offset: 0xf0
	// Line 2292, Address: 0x1989c4, Func Offset: 0x114
	// Line 2294, Address: 0x1989d8, Func Offset: 0x128
	// Line 2302, Address: 0x198a0c, Func Offset: 0x15c
	// Line 2305, Address: 0x198a1c, Func Offset: 0x16c
	// Line 2308, Address: 0x198a48, Func Offset: 0x198
	// Line 2309, Address: 0x198a4c, Func Offset: 0x19c
	// Line 2312, Address: 0x198a50, Func Offset: 0x1a0
	// Line 2314, Address: 0x198a8c, Func Offset: 0x1dc
	// Line 2316, Address: 0x198a90, Func Offset: 0x1e0
	// Line 2317, Address: 0x198a94, Func Offset: 0x1e4
	// Func End, Address: 0x198ad8, Func Offset: 0x228
}

// 
// Start address: 0x198ae0
float vcAdvantageDistOfOldCurRoad(_VC_NEAR_ROAD_DATA* old_cur_p)
{
	// Line 2340, Address: 0x198ae0, Func Offset: 0
	// Line 2341, Address: 0x198ae8, Func Offset: 0x8
	// Line 2342, Address: 0x198afc, Func Offset: 0x1c
	// Line 2345, Address: 0x198b08, Func Offset: 0x28
	// Line 2346, Address: 0x198b34, Func Offset: 0x54
	// Line 2354, Address: 0x198b5c, Func Offset: 0x7c
	// Line 2358, Address: 0x198b7c, Func Offset: 0x9c
	// Line 2360, Address: 0x198b84, Func Offset: 0xa4
	// Func End, Address: 0x198b94, Func Offset: 0xb4
}

// 
// Start address: 0x198ba0
void vcAutoRenewalWatchTgtPosAndAngZ(_VC_WORK* w_p, _VC_CAM_MV_TYPE cam_mv_type, _VC_AREA_SIZE_TYPE cur_rd_area_size, float far_watch_rate, float self_view_eff_rate)
{
	float vec[4];
	float far_watch_pos[4];
	// Line 2386, Address: 0x198ba0, Func Offset: 0
	// Line 2389, Address: 0x198bd0, Func Offset: 0x30
	// Line 2394, Address: 0x198be0, Func Offset: 0x40
	// Line 2395, Address: 0x198c0c, Func Offset: 0x6c
	// Line 2401, Address: 0x198c34, Func Offset: 0x94
	// Line 2406, Address: 0x198c50, Func Offset: 0xb0
	// Line 2433, Address: 0x198c68, Func Offset: 0xc8
	// Line 2434, Address: 0x198c9c, Func Offset: 0xfc
	// Line 2435, Address: 0x198ca4, Func Offset: 0x104
	// Line 2439, Address: 0x198cbc, Func Offset: 0x11c
	// Line 2440, Address: 0x198cd8, Func Offset: 0x138
	// Line 2441, Address: 0x198cec, Func Offset: 0x14c
	// Line 2444, Address: 0x198cfc, Func Offset: 0x15c
	// Line 2446, Address: 0x198d04, Func Offset: 0x164
	// Line 2450, Address: 0x198d10, Func Offset: 0x170
	// Line 2459, Address: 0x198d38, Func Offset: 0x198
	// Line 2460, Address: 0x198d50, Func Offset: 0x1b0
	// Line 2461, Address: 0x198d54, Func Offset: 0x1b4
	// Func End, Address: 0x198d78, Func Offset: 0x1d8
}

// 
// Start address: 0x198d80
void vcMakeNormalWatchTgtPos(float* watch_tgt_pos, float* watch_tgt_ang_z_p, _VC_WORK* w_p, _VC_CAM_MV_TYPE cam_mv_type, _VC_AREA_SIZE_TYPE cur_rd_area_size)
{
	float cam2chara_dist;
	float min_cam2watch_dist;
	float vec[4];
	float ang[4];
	float tgt_chara2watch_cir_dist;
	float tgt_watch_cir_r;
	float watch_y;
	// Line 2487, Address: 0x198d80, Func Offset: 0
	// Line 2497, Address: 0x198da4, Func Offset: 0x24
	// Line 2499, Address: 0x198da8, Func Offset: 0x28
	// Line 2503, Address: 0x198db8, Func Offset: 0x38
	// Line 2504, Address: 0x198dc0, Func Offset: 0x40
	// Line 2505, Address: 0x198dd4, Func Offset: 0x54
	// Line 2510, Address: 0x198df8, Func Offset: 0x78
	// Line 2517, Address: 0x198e18, Func Offset: 0x98
	// Line 2518, Address: 0x198e30, Func Offset: 0xb0
	// Line 2520, Address: 0x198e38, Func Offset: 0xb8
	// Line 2528, Address: 0x198e40, Func Offset: 0xc0
	// Line 2530, Address: 0x198e6c, Func Offset: 0xec
	// Line 2533, Address: 0x198ea4, Func Offset: 0x124
	// Line 2535, Address: 0x198ecc, Func Offset: 0x14c
	// Line 2537, Address: 0x198ef8, Func Offset: 0x178
	// Line 2538, Address: 0x198efc, Func Offset: 0x17c
	// Line 2542, Address: 0x198f04, Func Offset: 0x184
	// Line 2543, Address: 0x198f48, Func Offset: 0x1c8
	// Line 2545, Address: 0x198f6c, Func Offset: 0x1ec
	// Line 2547, Address: 0x198f80, Func Offset: 0x200
	// Line 2548, Address: 0x198fa4, Func Offset: 0x224
	// Line 2549, Address: 0x198fac, Func Offset: 0x22c
	// Line 2550, Address: 0x198fb8, Func Offset: 0x238
	// Line 2551, Address: 0x198fc0, Func Offset: 0x240
	// Line 2552, Address: 0x198fd8, Func Offset: 0x258
	// Line 2556, Address: 0x198fec, Func Offset: 0x26c
	// Line 2557, Address: 0x199000, Func Offset: 0x280
	// Line 2559, Address: 0x199004, Func Offset: 0x284
	// Line 2560, Address: 0x19900c, Func Offset: 0x28c
	// Line 2566, Address: 0x199010, Func Offset: 0x290
	// Line 2568, Address: 0x199024, Func Offset: 0x2a4
	// Line 2573, Address: 0x19903c, Func Offset: 0x2bc
	// Line 2577, Address: 0x199054, Func Offset: 0x2d4
	// Func End, Address: 0x199074, Func Offset: 0x2f4
}

// 
// Start address: 0x199080
void vcMixSelfViewEffectToWatchTgtPos(float* watch_tgt_pos, float* watch_tgt_ang_z_p, float effect_rate, _VC_WORK* w_p, float head_mat[4], int anim_status)
{
	float ofs_ang;
	float eff_pos[4];
	int jouge_val;
	float add_ang_y;
	float abs_ofs_ang_y;
	float xz_dist;
	float vec[4];
	float view_xyz_len;
	float chara2far_ofs_ang_y;
	float far_ang_x;
	float chara2head_ofs_ang_y;
	float cam_ang[4];
	// Line 2607, Address: 0x199080, Func Offset: 0
	// Line 2620, Address: 0x1990c0, Func Offset: 0x40
	// Line 2622, Address: 0x1990d8, Func Offset: 0x58
	// Line 2624, Address: 0x1990f4, Func Offset: 0x74
	// Line 2626, Address: 0x19910c, Func Offset: 0x8c
	// Line 2627, Address: 0x199120, Func Offset: 0xa0
	// Line 2629, Address: 0x199178, Func Offset: 0xf8
	// Line 2633, Address: 0x199198, Func Offset: 0x118
	// Line 2635, Address: 0x1991a8, Func Offset: 0x128
	// Line 2643, Address: 0x1991c0, Func Offset: 0x140
	// Line 2649, Address: 0x1991f8, Func Offset: 0x178
	// Line 2650, Address: 0x19920c, Func Offset: 0x18c
	// Line 2652, Address: 0x199210, Func Offset: 0x190
	// Line 2654, Address: 0x199218, Func Offset: 0x198
	// Line 2658, Address: 0x19922c, Func Offset: 0x1ac
	// Line 2662, Address: 0x1992b0, Func Offset: 0x230
	// Line 2663, Address: 0x1992bc, Func Offset: 0x23c
	// Line 2665, Address: 0x1992c4, Func Offset: 0x244
	// Line 2666, Address: 0x1992d8, Func Offset: 0x258
	// Line 2667, Address: 0x1992e4, Func Offset: 0x264
	// Line 2668, Address: 0x1992ec, Func Offset: 0x26c
	// Line 2670, Address: 0x199308, Func Offset: 0x288
	// Line 2679, Address: 0x199310, Func Offset: 0x290
	// Line 2680, Address: 0x199318, Func Offset: 0x298
	// Line 2681, Address: 0x199338, Func Offset: 0x2b8
	// Line 2682, Address: 0x199350, Func Offset: 0x2d0
	// Line 2683, Address: 0x199378, Func Offset: 0x2f8
	// Line 2684, Address: 0x199380, Func Offset: 0x300
	// Line 2687, Address: 0x199384, Func Offset: 0x304
	// Line 2690, Address: 0x199394, Func Offset: 0x314
	// Line 2697, Address: 0x19939c, Func Offset: 0x31c
	// Line 2698, Address: 0x1993ac, Func Offset: 0x32c
	// Line 2700, Address: 0x199404, Func Offset: 0x384
	// Line 2705, Address: 0x199414, Func Offset: 0x394
	// Line 2714, Address: 0x19947c, Func Offset: 0x3fc
	// Line 2715, Address: 0x199498, Func Offset: 0x418
	// Line 2717, Address: 0x1994a0, Func Offset: 0x420
	// Line 2718, Address: 0x1994b4, Func Offset: 0x434
	// Line 2719, Address: 0x1994c0, Func Offset: 0x440
	// Line 2720, Address: 0x1994c8, Func Offset: 0x448
	// Line 2722, Address: 0x1994e4, Func Offset: 0x464
	// Line 2731, Address: 0x1994ec, Func Offset: 0x46c
	// Line 2733, Address: 0x199504, Func Offset: 0x484
	// Line 2736, Address: 0x199520, Func Offset: 0x4a0
	// Line 2740, Address: 0x19953c, Func Offset: 0x4bc
	// Line 2745, Address: 0x199558, Func Offset: 0x4d8
	// Line 2747, Address: 0x1995b8, Func Offset: 0x538
	// Line 2748, Address: 0x1995d0, Func Offset: 0x550
	// Line 2757, Address: 0x1995d8, Func Offset: 0x558
	// Line 2760, Address: 0x1995f4, Func Offset: 0x574
	// Line 2768, Address: 0x199650, Func Offset: 0x5d0
	// Line 2769, Address: 0x199664, Func Offset: 0x5e4
	// Line 2771, Address: 0x199674, Func Offset: 0x5f4
	// Line 2774, Address: 0x1996a4, Func Offset: 0x624
	// Line 2777, Address: 0x1996d4, Func Offset: 0x654
	// Line 2780, Address: 0x1996f0, Func Offset: 0x670
	// Line 2781, Address: 0x199704, Func Offset: 0x684
	// Line 2782, Address: 0x199718, Func Offset: 0x698
	// Line 2784, Address: 0x199728, Func Offset: 0x6a8
	// Func End, Address: 0x199758, Func Offset: 0x6d8
}

// 
// Start address: 0x199760
void vcMakeFarWatchTgtPos(float* watch_tgt_pos, _VC_WORK* w_p, _VC_AREA_SIZE_TYPE cur_rd_area_size)
{
	float ofs_eye_ang_y;
	float cir_3d_r;
	float dist;
	float chr2cam_dist;
	float tmpvec[4];
	float real_ang_x;
	float real_ang_y;
	float lim_y;
	float adj_dist;
	SubCharacter* sc_p;
	float use_dist;
	float actual_dist;
	float ofs_ang_x;
	float search[4];
	float watch_y;
	float cir_r;
	// Line 2806, Address: 0x199760, Func Offset: 0
	// Line 2814, Address: 0x199788, Func Offset: 0x28
	// Line 2815, Address: 0x1997cc, Func Offset: 0x6c
	// Line 2816, Address: 0x1997f0, Func Offset: 0x90
	// Line 2821, Address: 0x199828, Func Offset: 0xc8
	// Line 2822, Address: 0x199838, Func Offset: 0xd8
	// Line 2823, Address: 0x19985c, Func Offset: 0xfc
	// Line 2824, Address: 0x199864, Func Offset: 0x104
	// Line 2825, Address: 0x19986c, Func Offset: 0x10c
	// Line 2828, Address: 0x199888, Func Offset: 0x128
	// Line 2839, Address: 0x1998b0, Func Offset: 0x150
	// Line 2841, Address: 0x1998c4, Func Offset: 0x164
	// Line 2842, Address: 0x1998d4, Func Offset: 0x174
	// Line 2843, Address: 0x1998dc, Func Offset: 0x17c
	// Line 2844, Address: 0x1998e8, Func Offset: 0x188
	// Line 2849, Address: 0x1998f8, Func Offset: 0x198
	// Line 2850, Address: 0x199918, Func Offset: 0x1b8
	// Line 2852, Address: 0x199940, Func Offset: 0x1e0
	// Line 2854, Address: 0x199948, Func Offset: 0x1e8
	// Line 2856, Address: 0x19994c, Func Offset: 0x1ec
	// Line 2857, Address: 0x199960, Func Offset: 0x200
	// Line 2859, Address: 0x199980, Func Offset: 0x220
	// Line 2861, Address: 0x199984, Func Offset: 0x224
	// Line 2863, Address: 0x1999b0, Func Offset: 0x250
	// Line 2865, Address: 0x1999c0, Func Offset: 0x260
	// Line 2866, Address: 0x1999c4, Func Offset: 0x264
	// Line 2867, Address: 0x1999cc, Func Offset: 0x26c
	// Line 2871, Address: 0x1999e0, Func Offset: 0x280
	// Line 2872, Address: 0x1999fc, Func Offset: 0x29c
	// Line 2873, Address: 0x199a00, Func Offset: 0x2a0
	// Line 2874, Address: 0x199a1c, Func Offset: 0x2bc
	// Line 2886, Address: 0x199a24, Func Offset: 0x2c4
	// Line 2891, Address: 0x199a40, Func Offset: 0x2e0
	// Line 2893, Address: 0x199a60, Func Offset: 0x300
	// Line 2895, Address: 0x199a7c, Func Offset: 0x31c
	// Line 2898, Address: 0x199a98, Func Offset: 0x338
	// Line 2900, Address: 0x199ab0, Func Offset: 0x350
	// Line 2903, Address: 0x199abc, Func Offset: 0x35c
	// Line 2909, Address: 0x199adc, Func Offset: 0x37c
	// Line 2912, Address: 0x199b08, Func Offset: 0x3a8
	// Line 2915, Address: 0x199b34, Func Offset: 0x3d4
	// Line 2916, Address: 0x199b38, Func Offset: 0x3d8
	// Line 2918, Address: 0x199b40, Func Offset: 0x3e0
	// Line 2919, Address: 0x199b50, Func Offset: 0x3f0
	// Line 2920, Address: 0x199b7c, Func Offset: 0x41c
	// Line 2922, Address: 0x199b8c, Func Offset: 0x42c
	// Line 2924, Address: 0x199ba8, Func Offset: 0x448
	// Line 2926, Address: 0x199bb8, Func Offset: 0x458
	// Line 2927, Address: 0x199bc8, Func Offset: 0x468
	// Line 2929, Address: 0x199bf4, Func Offset: 0x494
	// Line 2930, Address: 0x199c00, Func Offset: 0x4a0
	// Line 2931, Address: 0x199c04, Func Offset: 0x4a4
	// Line 2932, Address: 0x199c08, Func Offset: 0x4a8
	// Line 2933, Address: 0x199c44, Func Offset: 0x4e4
	// Line 2935, Address: 0x199c5c, Func Offset: 0x4fc
	// Line 2936, Address: 0x199c64, Func Offset: 0x504
	// Line 2938, Address: 0x199c6c, Func Offset: 0x50c
	// Func End, Address: 0x199c94, Func Offset: 0x534
}

// 
// Start address: 0x199ca0
void vcSetWatchTgtXzPos(float* watch_pos, float* center_pos, float* cam_pos, float tgt_chara2watch_cir_dist, float tgt_watch_cir_r, float watch_cir_ang_y)
{
	float chr2watch_z;
	float chr2watch_x;
	float cam2chr_ang;
	// Line 2966, Address: 0x199ca0, Func Offset: 0
	// Line 2974, Address: 0x199cdc, Func Offset: 0x3c
	// Line 2978, Address: 0x199d00, Func Offset: 0x60
	// Line 2981, Address: 0x199d24, Func Offset: 0x84
	// Line 2985, Address: 0x199d48, Func Offset: 0xa8
	// Line 2986, Address: 0x199d54, Func Offset: 0xb4
	// Line 2987, Address: 0x199d60, Func Offset: 0xc0
	// Func End, Address: 0x199d90, Func Offset: 0xf0
}

// 
// Start address: 0x199d90
void vcSetWatchTgtYParam(float* watch_pos, _VC_WORK* w_p, _VC_CAM_MV_TYPE cam_mv_type, float watch_y)
{
	// Line 3012, Address: 0x199d90, Func Offset: 0
	// Line 3014, Address: 0x199da8, Func Offset: 0x18
	// Line 3015, Address: 0x199db0, Func Offset: 0x20
	// Line 3017, Address: 0x199db8, Func Offset: 0x28
	// Line 3019, Address: 0x199dbc, Func Offset: 0x2c
	// Func End, Address: 0x199dc4, Func Offset: 0x34
}

// 
// Start address: 0x199dd0
void vcAdjustWatchYLimitHighWhenFarView(float* watch_pos, float* cam_pos)
{
	float ofs_y;
	float dist;
	float cam_ang_x;
	float max_cam_ang_x;
	// Line 3039, Address: 0x199dd0, Func Offset: 0
	// Line 3045, Address: 0x199df8, Func Offset: 0x28
	// Line 3050, Address: 0x199e58, Func Offset: 0x88
	// Line 3052, Address: 0x199e7c, Func Offset: 0xac
	// Line 3054, Address: 0x199e88, Func Offset: 0xb8
	// Line 3057, Address: 0x199e9c, Func Offset: 0xcc
	// Line 3058, Address: 0x199eac, Func Offset: 0xdc
	// Line 3062, Address: 0x199ee0, Func Offset: 0x110
	// Line 3067, Address: 0x199f00, Func Offset: 0x130
	// Line 3068, Address: 0x199f20, Func Offset: 0x150
	// Line 3074, Address: 0x199f58, Func Offset: 0x188
	// Func End, Address: 0x199f80, Func Offset: 0x1b0
}

// 
// Start address: 0x199f80
void vcAutoRenewalCamTgtPos(_VC_WORK* w_p, _VC_CAM_MV_TYPE cam_mv_type, _VC_CAM_MV_PARAM* cam_mv_prm_p, _VC_ROAD_FLAGS cur_rd_flags, _VC_AREA_SIZE_TYPE cur_rd_area_size)
{
	_enum_1 make_type;
	float max_tgt_mv_xz_len;
	float ideal_pos[4];
	float tgt_vec[4];
	// Line 3101, Address: 0x199f80, Func Offset: 0
	// Line 3107, Address: 0x199fb4, Func Offset: 0x34
	// Line 3109, Address: 0x199ff0, Func Offset: 0x70
	// Line 3110, Address: 0x19a004, Func Offset: 0x84
	// Line 3112, Address: 0x19a00c, Func Offset: 0x8c
	// Line 3113, Address: 0x19a01c, Func Offset: 0x9c
	// Line 3115, Address: 0x19a024, Func Offset: 0xa4
	// Line 3116, Address: 0x19a034, Func Offset: 0xb4
	// Line 3118, Address: 0x19a03c, Func Offset: 0xbc
	// Line 3119, Address: 0x19a04c, Func Offset: 0xcc
	// Line 3121, Address: 0x19a054, Func Offset: 0xd4
	// Line 3125, Address: 0x19a068, Func Offset: 0xe8
	// Line 3126, Address: 0x19a07c, Func Offset: 0xfc
	// Line 3135, Address: 0x19a088, Func Offset: 0x108
	// Line 3137, Address: 0x19a0b4, Func Offset: 0x134
	// Line 3143, Address: 0x19a0dc, Func Offset: 0x15c
	// Line 3144, Address: 0x19a0e0, Func Offset: 0x160
	// Line 3146, Address: 0x19a0e8, Func Offset: 0x168
	// Line 3150, Address: 0x19a0ec, Func Offset: 0x16c
	// Line 3152, Address: 0x19a10c, Func Offset: 0x18c
	// Line 3154, Address: 0x19a120, Func Offset: 0x1a0
	// Line 3159, Address: 0x19a138, Func Offset: 0x1b8
	// Line 3163, Address: 0x19a160, Func Offset: 0x1e0
	// Line 3169, Address: 0x19a178, Func Offset: 0x1f8
	// Line 3170, Address: 0x19a188, Func Offset: 0x208
	// Line 3175, Address: 0x19a198, Func Offset: 0x218
	// Line 3179, Address: 0x19a1a0, Func Offset: 0x220
	// Line 3180, Address: 0x19a1a8, Func Offset: 0x228
	// Line 3189, Address: 0x19a1c0, Func Offset: 0x240
	// Line 3191, Address: 0x19a1d0, Func Offset: 0x250
	// Line 3192, Address: 0x19a204, Func Offset: 0x284
	// Line 3196, Address: 0x19a21c, Func Offset: 0x29c
	// Line 3200, Address: 0x19a254, Func Offset: 0x2d4
	// Line 3201, Address: 0x19a274, Func Offset: 0x2f4
	// Line 3202, Address: 0x19a27c, Func Offset: 0x2fc
	// Line 3203, Address: 0x19a280, Func Offset: 0x300
	// Line 3204, Address: 0x19a284, Func Offset: 0x304
	// Line 3207, Address: 0x19a288, Func Offset: 0x308
	// Line 3210, Address: 0x19a2a4, Func Offset: 0x324
	// Func End, Address: 0x19a2cc, Func Offset: 0x34c
}

// 
// Start address: 0x19a2d0
float vcRetMaxTgtMvXzLen(_VC_WORK* w_p, _VC_CAM_MV_PARAM* cam_mv_prm_p)
{
	float max_spd_xz_stg;
	float max_spd_xz;
	// Line 3229, Address: 0x19a2d0, Func Offset: 0
	// Line 3233, Address: 0x19a2e4, Func Offset: 0x14
	// Line 3236, Address: 0x19a310, Func Offset: 0x40
	// Line 3237, Address: 0x19a33c, Func Offset: 0x6c
	// Line 3238, Address: 0x19a358, Func Offset: 0x88
	// Line 3239, Address: 0x19a364, Func Offset: 0x94
	// Line 3240, Address: 0x19a36c, Func Offset: 0x9c
	// Line 3242, Address: 0x19a378, Func Offset: 0xa8
	// Line 3243, Address: 0x19a380, Func Offset: 0xb0
	// Line 3247, Address: 0x19a388, Func Offset: 0xb8
	// Line 3249, Address: 0x19a398, Func Offset: 0xc8
	// Line 3250, Address: 0x19a3a4, Func Offset: 0xd4
	// Func End, Address: 0x19a3bc, Func Offset: 0xec
}

// 
// Start address: 0x19a3c0
void vcMakeIdealCamPosByHeadPos(float* ideal_pos, _VC_WORK* w_p)
{
	float chara2cam_ang_y;
	// Line 3273, Address: 0x19a3c0, Func Offset: 0
	// Line 3276, Address: 0x19a3dc, Func Offset: 0x1c
	// Line 3280, Address: 0x19a3ec, Func Offset: 0x2c
	// Line 3281, Address: 0x19a3fc, Func Offset: 0x3c
	// Line 3282, Address: 0x19a404, Func Offset: 0x44
	// Line 3286, Address: 0x19a40c, Func Offset: 0x4c
	// Line 3288, Address: 0x19a430, Func Offset: 0x70
	// Line 3289, Address: 0x19a448, Func Offset: 0x88
	// Line 3291, Address: 0x19a470, Func Offset: 0xb0
	// Line 3294, Address: 0x19a498, Func Offset: 0xd8
	// Func End, Address: 0x19a4b4, Func Offset: 0xf4
}

// 
// Start address: 0x19a4c0
void vcMakeIdealCamPosForFixAngCam(float* ideal_pos, _VC_WORK* w_p)
{
	float rate;
	float full_front_dist;
	float zero_front_dist;
	float base_front_r;
	float ratio;
	float chara2cam_dist;
	float cppos[4];
	float lim2chara_dist;
	float abs_ofs_z;
	float abs_ofs_x;
	float chara_front_r;
	float front2cam_dist;
	_VC_LIMIT_AREA lim_rd;
	float ang[4];
	// Line 3314, Address: 0x19a4c0, Func Offset: 0
	// Line 3322, Address: 0x19a4e4, Func Offset: 0x24
	// Line 3323, Address: 0x19a4f8, Func Offset: 0x38
	// Line 3324, Address: 0x19a4fc, Func Offset: 0x3c
	// Line 3325, Address: 0x19a500, Func Offset: 0x40
	// Line 3326, Address: 0x19a504, Func Offset: 0x44
	// Line 3329, Address: 0x19a508, Func Offset: 0x48
	// Line 3330, Address: 0x19a510, Func Offset: 0x50
	// Line 3331, Address: 0x19a524, Func Offset: 0x64
	// Line 3340, Address: 0x19a548, Func Offset: 0x88
	// Line 3341, Address: 0x19a560, Func Offset: 0xa0
	// Line 3342, Address: 0x19a578, Func Offset: 0xb8
	// Line 3343, Address: 0x19a590, Func Offset: 0xd0
	// Line 3351, Address: 0x19a5a8, Func Offset: 0xe8
	// Line 3353, Address: 0x19a5c0, Func Offset: 0x100
	// Line 3362, Address: 0x19a60c, Func Offset: 0x14c
	// Line 3363, Address: 0x19a618, Func Offset: 0x158
	// Line 3364, Address: 0x19a624, Func Offset: 0x164
	// Line 3366, Address: 0x19a62c, Func Offset: 0x16c
	// Line 3382, Address: 0x19a64c, Func Offset: 0x18c
	// Line 3383, Address: 0x19a668, Func Offset: 0x1a8
	// Line 3384, Address: 0x19a678, Func Offset: 0x1b8
	// Line 3385, Address: 0x19a68c, Func Offset: 0x1cc
	// Line 3387, Address: 0x19a6a0, Func Offset: 0x1e0
	// Line 3389, Address: 0x19a6cc, Func Offset: 0x20c
	// Line 3390, Address: 0x19a6dc, Func Offset: 0x21c
	// Line 3391, Address: 0x19a6e0, Func Offset: 0x220
	// Line 3393, Address: 0x19a6f8, Func Offset: 0x238
	// Line 3396, Address: 0x19a700, Func Offset: 0x240
	// Line 3399, Address: 0x19a70c, Func Offset: 0x24c
	// Line 3423, Address: 0x19a710, Func Offset: 0x250
	// Line 3431, Address: 0x19a750, Func Offset: 0x290
	// Line 3441, Address: 0x19a790, Func Offset: 0x2d0
	// Line 3442, Address: 0x19a798, Func Offset: 0x2d8
	// Line 3448, Address: 0x19a7b4, Func Offset: 0x2f4
	// Line 3449, Address: 0x19a7cc, Func Offset: 0x30c
	// Line 3454, Address: 0x19a7e0, Func Offset: 0x320
	// Line 3455, Address: 0x19a7f8, Func Offset: 0x338
	// Func End, Address: 0x19a81c, Func Offset: 0x35c
}

// 
// Start address: 0x19a820
void vcMakeIdealCamPosForThroughDoorCam(float* ideal_pos, _VC_WORK* w_p)
{
	float cos_ang_y;
	float abs_ofs_ang_y;
	float max_add_right_dist;
	float max_add_forwd_dist;
	float base_forwd_dist;
	float cut_ang_y;
	float mv_right_dist;
	float mv_forwd_dist;
	_VC_THROUGH_DOOR_CAM_PARAM* prm_p;
	// Line 3474, Address: 0x19a820, Func Offset: 0
	// Line 3478, Address: 0x19a84c, Func Offset: 0x2c
	// Line 3480, Address: 0x19a850, Func Offset: 0x30
	// Line 3483, Address: 0x19a85c, Func Offset: 0x3c
	// Line 3484, Address: 0x19a868, Func Offset: 0x48
	// Line 3485, Address: 0x19a874, Func Offset: 0x54
	// Line 3486, Address: 0x19a878, Func Offset: 0x58
	// Line 3512, Address: 0x19a880, Func Offset: 0x60
	// Line 3513, Address: 0x19a88c, Func Offset: 0x6c
	// Line 3514, Address: 0x19a898, Func Offset: 0x78
	// Line 3515, Address: 0x19a8a0, Func Offset: 0x80
	// Line 3521, Address: 0x19a8a8, Func Offset: 0x88
	// Line 3526, Address: 0x19a8c0, Func Offset: 0xa0
	// Line 3527, Address: 0x19a8cc, Func Offset: 0xac
	// Line 3528, Address: 0x19a8f4, Func Offset: 0xd4
	// Line 3530, Address: 0x19a908, Func Offset: 0xe8
	// Line 3537, Address: 0x19a924, Func Offset: 0x104
	// Line 3541, Address: 0x19a954, Func Offset: 0x134
	// Line 3545, Address: 0x19a988, Func Offset: 0x168
	// Line 3546, Address: 0x19a990, Func Offset: 0x170
	// Func End, Address: 0x19a9bc, Func Offset: 0x19c
}

// 
// Start address: 0x19a9c0
void vcMakeIdealCamPosForLocusCircleCam(float* ideal_pos, _VC_WORK* w_p)
{
	float cir_radius;
	float cir_ang_y;
	float ofs_ang_y;
	float sw_l[4];
	float origin[4];
	// Line 3556, Address: 0x19a9c0, Func Offset: 0
	// Line 3564, Address: 0x19a9e4, Func Offset: 0x24
	// Line 3565, Address: 0x19aa00, Func Offset: 0x40
	// Line 3568, Address: 0x19aa10, Func Offset: 0x50
	// Line 3569, Address: 0x19aa24, Func Offset: 0x64
	// Line 3570, Address: 0x19aa28, Func Offset: 0x68
	// Line 3572, Address: 0x19aa30, Func Offset: 0x70
	// Line 3576, Address: 0x19aa54, Func Offset: 0x94
	// Line 3581, Address: 0x19aa78, Func Offset: 0xb8
	// Line 3582, Address: 0x19aab8, Func Offset: 0xf8
	// Line 3587, Address: 0x19aad8, Func Offset: 0x118
	// Line 3592, Address: 0x19aaf8, Func Offset: 0x138
	// Line 3593, Address: 0x19ab38, Func Offset: 0x178
	// Line 3598, Address: 0x19ab58, Func Offset: 0x198
	// Line 3603, Address: 0x19ab78, Func Offset: 0x1b8
	// Line 3604, Address: 0x19abb8, Func Offset: 0x1f8
	// Line 3609, Address: 0x19abd8, Func Offset: 0x218
	// Line 3614, Address: 0x19abf8, Func Offset: 0x238
	// Line 3615, Address: 0x19ac00, Func Offset: 0x240
	// Line 3620, Address: 0x19ac20, Func Offset: 0x260
	// Line 3629, Address: 0x19ac40, Func Offset: 0x280
	// Line 3632, Address: 0x19ac7c, Func Offset: 0x2bc
	// Line 3633, Address: 0x19ac80, Func Offset: 0x2c0
	// Line 3634, Address: 0x19ac94, Func Offset: 0x2d4
	// Line 3635, Address: 0x19ac9c, Func Offset: 0x2dc
	// Line 3641, Address: 0x19aca8, Func Offset: 0x2e8
	// Line 3643, Address: 0x19acb4, Func Offset: 0x2f4
	// Line 3645, Address: 0x19acd4, Func Offset: 0x314
	// Line 3646, Address: 0x19acd8, Func Offset: 0x318
	// Line 3651, Address: 0x19ace8, Func Offset: 0x328
	// Line 3652, Address: 0x19ad28, Func Offset: 0x368
	// Line 3653, Address: 0x19ad40, Func Offset: 0x380
	// Line 3654, Address: 0x19ad64, Func Offset: 0x3a4
	// Line 3655, Address: 0x19ad84, Func Offset: 0x3c4
	// Line 3656, Address: 0x19ad9c, Func Offset: 0x3dc
	// Line 3657, Address: 0x19adbc, Func Offset: 0x3fc
	// Line 3658, Address: 0x19ade4, Func Offset: 0x424
	// Line 3659, Address: 0x19adec, Func Offset: 0x42c
	// Line 3660, Address: 0x19adfc, Func Offset: 0x43c
	// Line 3662, Address: 0x19ae0c, Func Offset: 0x44c
	// Line 3663, Address: 0x19ae4c, Func Offset: 0x48c
	// Line 3664, Address: 0x19ae5c, Func Offset: 0x49c
	// Line 3665, Address: 0x19ae7c, Func Offset: 0x4bc
	// Line 3666, Address: 0x19aea0, Func Offset: 0x4e0
	// Line 3667, Address: 0x19aeb8, Func Offset: 0x4f8
	// Line 3668, Address: 0x19aee0, Func Offset: 0x520
	// Line 3669, Address: 0x19af00, Func Offset: 0x540
	// Line 3670, Address: 0x19af08, Func Offset: 0x548
	// Line 3671, Address: 0x19af18, Func Offset: 0x558
	// Line 3673, Address: 0x19af28, Func Offset: 0x568
	// Line 3674, Address: 0x19af68, Func Offset: 0x5a8
	// Line 3675, Address: 0x19af78, Func Offset: 0x5b8
	// Line 3676, Address: 0x19af9c, Func Offset: 0x5dc
	// Line 3677, Address: 0x19afbc, Func Offset: 0x5fc
	// Line 3678, Address: 0x19afd4, Func Offset: 0x614
	// Line 3679, Address: 0x19aff4, Func Offset: 0x634
	// Line 3680, Address: 0x19b01c, Func Offset: 0x65c
	// Line 3681, Address: 0x19b024, Func Offset: 0x664
	// Line 3682, Address: 0x19b034, Func Offset: 0x674
	// Line 3684, Address: 0x19b044, Func Offset: 0x684
	// Line 3685, Address: 0x19b04c, Func Offset: 0x68c
	// Line 3686, Address: 0x19b064, Func Offset: 0x6a4
	// Line 3687, Address: 0x19b084, Func Offset: 0x6c4
	// Line 3688, Address: 0x19b0a8, Func Offset: 0x6e8
	// Line 3689, Address: 0x19b0c0, Func Offset: 0x700
	// Line 3690, Address: 0x19b0e8, Func Offset: 0x728
	// Line 3691, Address: 0x19b108, Func Offset: 0x748
	// Line 3692, Address: 0x19b110, Func Offset: 0x750
	// Line 3693, Address: 0x19b120, Func Offset: 0x760
	// Line 3699, Address: 0x19b130, Func Offset: 0x770
	// Line 3708, Address: 0x19b138, Func Offset: 0x778
	// Func End, Address: 0x19b15c, Func Offset: 0x79c
}

// 
// Start address: 0x19b160
void vcMakeIdealCamPosUseVC_ROAD_DATA(float* ideal_pos, _VC_WORK* w_p, _VC_AREA_SIZE_TYPE cur_rd_area_size)
{
	float full_adj_min_dist;
	float no_adj_max_dist;
	float out_rd_len;
	_VC_NEAR_ROAD_DATA* use_near_p;
	float real_chr2cam_r;
	float abs_chr2cam_y;
	float adj_z;
	float adj_x;
	float ofs_ang_y;
	float now_ang_y;
	float cppos[4];
	float chara2ideal_r;
	// Line 3731, Address: 0x19b160, Func Offset: 0
	// Line 3740, Address: 0x19b18c, Func Offset: 0x2c
	// Line 3741, Address: 0x19b1a4, Func Offset: 0x44
	// Line 3743, Address: 0x19b1b4, Func Offset: 0x54
	// Line 3744, Address: 0x19b1dc, Func Offset: 0x7c
	// Line 3745, Address: 0x19b234, Func Offset: 0xd4
	// Line 3746, Address: 0x19b23c, Func Offset: 0xdc
	// Line 3747, Address: 0x19b268, Func Offset: 0x108
	// Line 3751, Address: 0x19b274, Func Offset: 0x114
	// Line 3752, Address: 0x19b288, Func Offset: 0x128
	// Line 3754, Address: 0x19b2a0, Func Offset: 0x140
	// Line 3761, Address: 0x19b2b0, Func Offset: 0x150
	// Line 3762, Address: 0x19b2f4, Func Offset: 0x194
	// Line 3763, Address: 0x19b318, Func Offset: 0x1b8
	// Line 3764, Address: 0x19b33c, Func Offset: 0x1dc
	// Line 3765, Address: 0x19b344, Func Offset: 0x1e4
	// Line 3766, Address: 0x19b34c, Func Offset: 0x1ec
	// Line 3769, Address: 0x19b368, Func Offset: 0x208
	// Line 3771, Address: 0x19b384, Func Offset: 0x224
	// Line 3774, Address: 0x19b3a0, Func Offset: 0x240
	// Line 3776, Address: 0x19b3cc, Func Offset: 0x26c
	// Line 3778, Address: 0x19b3dc, Func Offset: 0x27c
	// Line 3780, Address: 0x19b3e4, Func Offset: 0x284
	// Line 3786, Address: 0x19b3ec, Func Offset: 0x28c
	// Line 3789, Address: 0x19b3f4, Func Offset: 0x294
	// Line 3790, Address: 0x19b3f8, Func Offset: 0x298
	// Line 3795, Address: 0x19b3fc, Func Offset: 0x29c
	// Line 3797, Address: 0x19b404, Func Offset: 0x2a4
	// Line 3798, Address: 0x19b414, Func Offset: 0x2b4
	// Line 3803, Address: 0x19b434, Func Offset: 0x2d4
	// Line 3806, Address: 0x19b47c, Func Offset: 0x31c
	// Line 3807, Address: 0x19b490, Func Offset: 0x330
	// Line 3808, Address: 0x19b498, Func Offset: 0x338
	// Line 3809, Address: 0x19b4a0, Func Offset: 0x340
	// Line 3814, Address: 0x19b4b4, Func Offset: 0x354
	// Line 3815, Address: 0x19b4bc, Func Offset: 0x35c
	// Line 3816, Address: 0x19b4c4, Func Offset: 0x364
	// Line 3817, Address: 0x19b4cc, Func Offset: 0x36c
	// Line 3818, Address: 0x19b4dc, Func Offset: 0x37c
	// Line 3819, Address: 0x19b4e4, Func Offset: 0x384
	// Line 3827, Address: 0x19b4ec, Func Offset: 0x38c
	// Line 3831, Address: 0x19b510, Func Offset: 0x3b0
	// Line 3832, Address: 0x19b554, Func Offset: 0x3f4
	// Line 3835, Address: 0x19b578, Func Offset: 0x418
	// Line 3838, Address: 0x19b58c, Func Offset: 0x42c
	// Line 3839, Address: 0x19b5b0, Func Offset: 0x450
	// Line 3840, Address: 0x19b5b8, Func Offset: 0x458
	// Line 3841, Address: 0x19b5c4, Func Offset: 0x464
	// Line 3842, Address: 0x19b5cc, Func Offset: 0x46c
	// Line 3843, Address: 0x19b5e4, Func Offset: 0x484
	// Line 3846, Address: 0x19b5f8, Func Offset: 0x498
	// Line 3847, Address: 0x19b608, Func Offset: 0x4a8
	// Line 3848, Address: 0x19b610, Func Offset: 0x4b0
	// Line 3849, Address: 0x19b628, Func Offset: 0x4c8
	// Line 3859, Address: 0x19b654, Func Offset: 0x4f4
	// Line 3861, Address: 0x19b670, Func Offset: 0x510
	// Line 3865, Address: 0x19b68c, Func Offset: 0x52c
	// Line 3866, Address: 0x19b6a0, Func Offset: 0x540
	// Line 3871, Address: 0x19b6b4, Func Offset: 0x554
	// Line 3872, Address: 0x19b6c8, Func Offset: 0x568
	// Line 3873, Address: 0x19b6d0, Func Offset: 0x570
	// Line 3875, Address: 0x19b6d8, Func Offset: 0x578
	// Func End, Address: 0x19b700, Func Offset: 0x5a0
}

// 
// Start address: 0x19b700
void vcAdjustXzInLimAreaUsingMIN_IN_ROAD_DIST(float* x_p, float* z_p, _VC_LIMIT_AREA* lim_p)
{
	float min_in_road_dist;
	float max_z;
	float min_z;
	float max_x;
	float min_x;
	float z;
	float x;
	// Line 3896, Address: 0x19b700, Func Offset: 0
	// Line 3897, Address: 0x19b728, Func Offset: 0x28
	// Line 3901, Address: 0x19b730, Func Offset: 0x30
	// Line 3903, Address: 0x19b738, Func Offset: 0x38
	// Line 3904, Address: 0x19b740, Func Offset: 0x40
	// Line 3905, Address: 0x19b748, Func Offset: 0x48
	// Line 3906, Address: 0x19b750, Func Offset: 0x50
	// Line 3909, Address: 0x19b758, Func Offset: 0x58
	// Line 3910, Address: 0x19b780, Func Offset: 0x80
	// Line 3913, Address: 0x19b7a8, Func Offset: 0xa8
	// Line 3914, Address: 0x19b7e0, Func Offset: 0xe0
	// Line 3916, Address: 0x19b818, Func Offset: 0x118
	// Line 3917, Address: 0x19b820, Func Offset: 0x120
	// Func End, Address: 0x19b844, Func Offset: 0x144
}

// 
// Start address: 0x19b850
void vcMakeBasicCamTgtMvVec(float* tgt_mv_vec, float* ideal_pos, _VC_WORK* w_p, float max_tgt_mv_xz_len)
{
	float sincos_y[4];
	float now2ideal_tgt_dist;
	float now2ideal_tgt_ang_y;
	float xz_vec[4];
	// Line 3941, Address: 0x19b850, Func Offset: 0
	// Line 3950, Address: 0x19b87c, Func Offset: 0x2c
	// Line 3952, Address: 0x19b894, Func Offset: 0x44
	// Line 3954, Address: 0x19b8b4, Func Offset: 0x64
	// Line 3956, Address: 0x19b8bc, Func Offset: 0x6c
	// Line 3957, Address: 0x19b8cc, Func Offset: 0x7c
	// Line 3958, Address: 0x19b8e0, Func Offset: 0x90
	// Line 3961, Address: 0x19b8e8, Func Offset: 0x98
	// Line 3962, Address: 0x19b8f8, Func Offset: 0xa8
	// Line 3967, Address: 0x19b910, Func Offset: 0xc0
	// Line 3968, Address: 0x19b950, Func Offset: 0x100
	// Line 3969, Address: 0x19b960, Func Offset: 0x110
	// Func End, Address: 0x19b984, Func Offset: 0x134
}

// 
// Start address: 0x19b990
void vcAdjTgtMvVecYByCurNearRoad(float* tgt_mv_vec, _VC_WORK* w_p)
{
	float tgt_y;
	float ofs_y;
	float ofs_y;
	float abs_ofs_y;
	float min_dist;
	float max_dist;
	float dist;
	_VC_ROAD_DATA* cur_rd_p;
	float near_ratio;
	float to_chara_dist;
	float min_tgt_y;
	float max_tgt_y;
	// Line 3990, Address: 0x19b990, Func Offset: 0
	// Line 3997, Address: 0x19b9b4, Func Offset: 0x24
	// Line 4000, Address: 0x19b9c0, Func Offset: 0x30
	// Line 4003, Address: 0x19b9e8, Func Offset: 0x58
	// Line 4006, Address: 0x19ba04, Func Offset: 0x74
	// Line 4007, Address: 0x19ba20, Func Offset: 0x90
	// Line 4011, Address: 0x19ba3c, Func Offset: 0xac
	// Line 4012, Address: 0x19ba44, Func Offset: 0xb4
	// Line 4017, Address: 0x19ba60, Func Offset: 0xd0
	// Line 4021, Address: 0x19baa4, Func Offset: 0x114
	// Line 4024, Address: 0x19bab4, Func Offset: 0x124
	// Line 4025, Address: 0x19babc, Func Offset: 0x12c
	// Line 4030, Address: 0x19bac0, Func Offset: 0x130
	// Line 4032, Address: 0x19bae0, Func Offset: 0x150
	// Line 4033, Address: 0x19baec, Func Offset: 0x15c
	// Line 4034, Address: 0x19baf4, Func Offset: 0x164
	// Line 4037, Address: 0x19bafc, Func Offset: 0x16c
	// Line 4038, Address: 0x19bb08, Func Offset: 0x178
	// Line 4043, Address: 0x19bb10, Func Offset: 0x180
	// Line 4046, Address: 0x19bb20, Func Offset: 0x190
	// Line 4048, Address: 0x19bb3c, Func Offset: 0x1ac
	// Line 4050, Address: 0x19bb88, Func Offset: 0x1f8
	// Line 4052, Address: 0x19bbc0, Func Offset: 0x230
	// Line 4057, Address: 0x19bbe4, Func Offset: 0x254
	// Line 4059, Address: 0x19bc0c, Func Offset: 0x27c
	// Line 4060, Address: 0x19bc50, Func Offset: 0x2c0
	// Line 4061, Address: 0x19bc6c, Func Offset: 0x2dc
	// Line 4062, Address: 0x19bc78, Func Offset: 0x2e8
	// Line 4063, Address: 0x19bc80, Func Offset: 0x2f0
	// Line 4064, Address: 0x19bc98, Func Offset: 0x308
	// Line 4067, Address: 0x19bca4, Func Offset: 0x314
	// Line 4069, Address: 0x19bcac, Func Offset: 0x31c
	// Line 4073, Address: 0x19bcd0, Func Offset: 0x340
	// Line 4075, Address: 0x19bcd8, Func Offset: 0x348
	// Line 4079, Address: 0x19bcfc, Func Offset: 0x36c
	// Line 4084, Address: 0x19bd04, Func Offset: 0x374
	// Line 4085, Address: 0x19bd08, Func Offset: 0x378
	// Line 4086, Address: 0x19bd0c, Func Offset: 0x37c
	// Line 4091, Address: 0x19bd14, Func Offset: 0x384
	// Line 4092, Address: 0x19bd50, Func Offset: 0x3c0
	// Line 4094, Address: 0x19bd54, Func Offset: 0x3c4
	// Line 4100, Address: 0x19bd84, Func Offset: 0x3f4
	// Line 4105, Address: 0x19bd8c, Func Offset: 0x3fc
	// Line 4106, Address: 0x19bdc8, Func Offset: 0x438
	// Line 4108, Address: 0x19bdcc, Func Offset: 0x43c
	// Line 4121, Address: 0x19bdfc, Func Offset: 0x46c
	// Line 4122, Address: 0x19be08, Func Offset: 0x478
	// Line 4123, Address: 0x19be40, Func Offset: 0x4b0
	// Line 4125, Address: 0x19be4c, Func Offset: 0x4bc
	// Func End, Address: 0x19be70, Func Offset: 0x4e0
}

// 
// Start address: 0x19be70
void vcCamTgtMvVecIsFlipedFromCharaFront(float* tgt_mv_vec, _VC_WORK* w_p, float max_tgt_mv_xz_len, _VC_AREA_SIZE_TYPE cur_rd_area_size)
{
	float ang_y;
	float mv_len;
	float pos[4];
	float min_in_road_dist;
	float max_z;
	float min_z;
	float max_x;
	float min_x;
	_VC_NEAR_ROAD_DATA* use_nearest_p;
	float sincos_y[4];
	float post_tgt_pos[4];
	float pre_nearest_dist;
	float chk_near_dist;
	float chk_pos[4];
	float pre_tgt_pos[4];
	float flip_ang_y;
	float flip_dist;
	// Line 4149, Address: 0x19be70, Func Offset: 0
	// Line 4154, Address: 0x19bea4, Func Offset: 0x34
	// Line 4155, Address: 0x19bebc, Func Offset: 0x4c
	// Line 4156, Address: 0x19bec0, Func Offset: 0x50
	// Line 4158, Address: 0x19bec8, Func Offset: 0x58
	// Line 4167, Address: 0x19bee4, Func Offset: 0x74
	// Line 4176, Address: 0x19befc, Func Offset: 0x8c
	// Line 4177, Address: 0x19bf20, Func Offset: 0xb0
	// Line 4183, Address: 0x19bf24, Func Offset: 0xb4
	// Line 4184, Address: 0x19bf2c, Func Offset: 0xbc
	// Line 4185, Address: 0x19bf38, Func Offset: 0xc8
	// Line 4186, Address: 0x19bf54, Func Offset: 0xe4
	// Line 4189, Address: 0x19bf68, Func Offset: 0xf8
	// Line 4191, Address: 0x19bf84, Func Offset: 0x114
	// Line 4192, Address: 0x19bf90, Func Offset: 0x120
	// Line 4194, Address: 0x19bf98, Func Offset: 0x128
	// Line 4203, Address: 0x19bfb4, Func Offset: 0x144
	// Line 4204, Address: 0x19bfc0, Func Offset: 0x150
	// Line 4205, Address: 0x19bfd4, Func Offset: 0x164
	// Line 4207, Address: 0x19bfec, Func Offset: 0x17c
	// Line 4214, Address: 0x19bff8, Func Offset: 0x188
	// Line 4215, Address: 0x19c014, Func Offset: 0x1a4
	// Line 4222, Address: 0x19c028, Func Offset: 0x1b8
	// Line 4224, Address: 0x19c05c, Func Offset: 0x1ec
	// Line 4226, Address: 0x19c064, Func Offset: 0x1f4
	// Line 4227, Address: 0x19c070, Func Offset: 0x200
	// Line 4228, Address: 0x19c078, Func Offset: 0x208
	// Line 4229, Address: 0x19c080, Func Offset: 0x210
	// Line 4230, Address: 0x19c088, Func Offset: 0x218
	// Line 4231, Address: 0x19c0b0, Func Offset: 0x240
	// Line 4236, Address: 0x19c0d8, Func Offset: 0x268
	// Line 4237, Address: 0x19c0f0, Func Offset: 0x280
	// Line 4238, Address: 0x19c130, Func Offset: 0x2c0
	// Line 4239, Address: 0x19c170, Func Offset: 0x300
	// Line 4243, Address: 0x19c188, Func Offset: 0x318
	// Line 4244, Address: 0x19c198, Func Offset: 0x328
	// Line 4249, Address: 0x19c1a8, Func Offset: 0x338
	// Line 4251, Address: 0x19c1c4, Func Offset: 0x354
	// Line 4254, Address: 0x19c1d4, Func Offset: 0x364
	// Line 4260, Address: 0x19c1e0, Func Offset: 0x370
	// Line 4261, Address: 0x19c1f0, Func Offset: 0x380
	// Line 4266, Address: 0x19c208, Func Offset: 0x398
	// Func End, Address: 0x19c234, Func Offset: 0x3c4
}

// 
// Start address: 0x19c240
float vcFlipFromCamExclusionArea(float* flip_ang_y_p, float* old_cam_excl_area_r_p, float* in_pos, float* chara_pos, float chara_eye_ang_y, _VC_AREA_SIZE_TYPE cur_rd_area_size)
{
	float dist;
	float add_dist;
	float min_add_dist;
	float rate;
	float ofs_ang_y;
	float ret_flip_dist;
	float cam_excl_area_r;
	float cntr2pos_ang_y;
	float cntr_z;
	float cntr_x;
	// Line 4294, Address: 0x19c240, Func Offset: 0
	// Line 4306, Address: 0x19c280, Func Offset: 0x40
	// Line 4313, Address: 0x19c2a4, Func Offset: 0x64
	// Line 4314, Address: 0x19c2b0, Func Offset: 0x70
	// Line 4316, Address: 0x19c2d8, Func Offset: 0x98
	// Line 4317, Address: 0x19c31c, Func Offset: 0xdc
	// Line 4318, Address: 0x19c340, Func Offset: 0x100
	// Line 4319, Address: 0x19c348, Func Offset: 0x108
	// Line 4322, Address: 0x19c364, Func Offset: 0x124
	// Line 4327, Address: 0x19c3a8, Func Offset: 0x168
	// Line 4328, Address: 0x19c3b8, Func Offset: 0x178
	// Line 4329, Address: 0x19c3c8, Func Offset: 0x188
	// Line 4332, Address: 0x19c3cc, Func Offset: 0x18c
	// Line 4335, Address: 0x19c3e8, Func Offset: 0x1a8
	// Line 4336, Address: 0x19c400, Func Offset: 0x1c0
	// Line 4338, Address: 0x19c408, Func Offset: 0x1c8
	// Line 4339, Address: 0x19c418, Func Offset: 0x1d8
	// Line 4341, Address: 0x19c41c, Func Offset: 0x1dc
	// Line 4343, Address: 0x19c424, Func Offset: 0x1e4
	// Line 4348, Address: 0x19c428, Func Offset: 0x1e8
	// Line 4350, Address: 0x19c454, Func Offset: 0x214
	// Line 4351, Address: 0x19c470, Func Offset: 0x230
	// Line 4354, Address: 0x19c474, Func Offset: 0x234
	// Line 4357, Address: 0x19c478, Func Offset: 0x238
	// Func End, Address: 0x19c4a8, Func Offset: 0x268
}

// 
// Start address: 0x19c4b0
void vcGetUseWatchAndCamMvParam(_VC_WATCH_MV_PARAM** watch_mv_prm_pp, _VC_CAM_MV_PARAM** cam_mv_prm_pp, float self_view_eff_rate, float far_watch_rate, _VC_WORK* w_p)
{
	float diameter;
	_VC_CAM_MV_PARAM* cam_mv_prm_stg_p;
	float add_ang_accel_y;
	_VC_WATCH_MV_PARAM* wth_mv_prm_stg_p;
	// Line 4382, Address: 0x19c4b0, Func Offset: 0
	// Line 4384, Address: 0x19c4e4, Func Offset: 0x34
	// Line 4385, Address: 0x19c4f4, Func Offset: 0x44
	// Line 4386, Address: 0x19c4fc, Func Offset: 0x4c
	// Line 4396, Address: 0x19c504, Func Offset: 0x54
	// Line 4397, Address: 0x19c530, Func Offset: 0x80
	// Line 4398, Address: 0x19c54c, Func Offset: 0x9c
	// Line 4399, Address: 0x19c554, Func Offset: 0xa4
	// Line 4400, Address: 0x19c55c, Func Offset: 0xac
	// Line 4402, Address: 0x19c564, Func Offset: 0xb4
	// Line 4403, Address: 0x19c56c, Func Offset: 0xbc
	// Line 4409, Address: 0x19c574, Func Offset: 0xc4
	// Line 4413, Address: 0x19c594, Func Offset: 0xe4
	// Line 4417, Address: 0x19c5b4, Func Offset: 0x104
	// Line 4421, Address: 0x19c5d4, Func Offset: 0x124
	// Line 4423, Address: 0x19c5f4, Func Offset: 0x144
	// Line 4425, Address: 0x19c600, Func Offset: 0x150
	// Line 4426, Address: 0x19c62c, Func Offset: 0x17c
	// Line 4428, Address: 0x19c658, Func Offset: 0x1a8
	// Line 4430, Address: 0x19c678, Func Offset: 0x1c8
	// Line 4432, Address: 0x19c698, Func Offset: 0x1e8
	// Line 4437, Address: 0x19c6b8, Func Offset: 0x208
	// Line 4438, Address: 0x19c6bc, Func Offset: 0x20c
	// Line 4439, Address: 0x19c708, Func Offset: 0x258
	// Line 4443, Address: 0x19c71c, Func Offset: 0x26c
	// Line 4444, Address: 0x19c72c, Func Offset: 0x27c
	// Line 4445, Address: 0x19c734, Func Offset: 0x284
	// Line 4449, Address: 0x19c73c, Func Offset: 0x28c
	// Line 4450, Address: 0x19c768, Func Offset: 0x2b8
	// Line 4451, Address: 0x19c784, Func Offset: 0x2d4
	// Line 4452, Address: 0x19c78c, Func Offset: 0x2dc
	// Line 4453, Address: 0x19c794, Func Offset: 0x2e4
	// Line 4454, Address: 0x19c79c, Func Offset: 0x2ec
	// Line 4455, Address: 0x19c7a4, Func Offset: 0x2f4
	// Line 4457, Address: 0x19c7ac, Func Offset: 0x2fc
	// Line 4458, Address: 0x19c7b4, Func Offset: 0x304
	// Line 4459, Address: 0x19c7bc, Func Offset: 0x30c
	// Line 4462, Address: 0x19c7cc, Func Offset: 0x31c
	// Line 4463, Address: 0x19c7dc, Func Offset: 0x32c
	// Line 4464, Address: 0x19c7ec, Func Offset: 0x33c
	// Line 4465, Address: 0x19c7fc, Func Offset: 0x34c
	// Line 4467, Address: 0x19c80c, Func Offset: 0x35c
	// Line 4471, Address: 0x19c818, Func Offset: 0x368
	// Func End, Address: 0x19c840, Func Offset: 0x390
}

// 
// Start address: 0x19c840
void vcRenewalCamData(_VC_WORK* w_p, _VC_CAM_MV_PARAM* cam_mv_prm_p)
{
	float dt;
	float tpos[4];
	float cpos[4];
	float dec_spd_per_dist_y;
	float dec_spd_per_dist_xz;
	// Line 4490, Address: 0x19c840, Func Offset: 0
	// Line 4491, Address: 0x19c85c, Func Offset: 0x1c
	// Line 4492, Address: 0x19c86c, Func Offset: 0x2c
	// Line 4497, Address: 0x19c890, Func Offset: 0x50
	// Line 4498, Address: 0x19c898, Func Offset: 0x58
	// Line 4499, Address: 0x19c89c, Func Offset: 0x5c
	// Line 4503, Address: 0x19c8a4, Func Offset: 0x64
	// Line 4504, Address: 0x19c8b8, Func Offset: 0x78
	// Line 4510, Address: 0x19c8bc, Func Offset: 0x7c
	// Line 4511, Address: 0x19c8c8, Func Offset: 0x88
	// Line 4512, Address: 0x19c8d4, Func Offset: 0x94
	// Line 4513, Address: 0x19c8e8, Func Offset: 0xa8
	// Line 4514, Address: 0x19c8f4, Func Offset: 0xb4
	// Line 4515, Address: 0x19c900, Func Offset: 0xc0
	// Line 4517, Address: 0x19c90c, Func Offset: 0xcc
	// Line 4529, Address: 0x19c938, Func Offset: 0xf8
	// Line 4540, Address: 0x19c96c, Func Offset: 0x12c
	// Line 4544, Address: 0x19c97c, Func Offset: 0x13c
	// Line 4546, Address: 0x19c984, Func Offset: 0x144
	// Line 4547, Address: 0x19c98c, Func Offset: 0x14c
	// Line 4548, Address: 0x19c990, Func Offset: 0x150
	// Line 4549, Address: 0x19c994, Func Offset: 0x154
	// Line 4550, Address: 0x19c99c, Func Offset: 0x15c
	// Line 4551, Address: 0x19c9a0, Func Offset: 0x160
	// Line 4552, Address: 0x19c9a4, Func Offset: 0x164
	// Line 4553, Address: 0x19c9a8, Func Offset: 0x168
	// Line 4569, Address: 0x19c9ac, Func Offset: 0x16c
	// Func End, Address: 0x19c9c8, Func Offset: 0x188
}

// 
// Start address: 0x19c9d0
void vcRenewalCamMatAng(_VC_WORK* w_p, _VC_WATCH_MV_PARAM* watch_mv_prm_p, _VC_CAM_MV_TYPE cam_mv_type, int visible_chara_f)
{
	float ofs_cam2chara_top_ang[4];
	float ofs_cam2chara_btm_ang[4];
	float new_base_matT[4][4];
	float new_base_cam_ang[4];
	float ofs_tgt_ang[4];
	// Line 4593, Address: 0x19c9d0, Func Offset: 0
	// Line 4600, Address: 0x19c9f0, Func Offset: 0x20
	// Line 4602, Address: 0x19ca04, Func Offset: 0x34
	// Line 4608, Address: 0x19ca4c, Func Offset: 0x7c
	// Line 4610, Address: 0x19ca5c, Func Offset: 0x8c
	// Line 4611, Address: 0x19ca84, Func Offset: 0xb4
	// Line 4612, Address: 0x19ca90, Func Offset: 0xc0
	// Line 4613, Address: 0x19caa0, Func Offset: 0xd0
	// Line 4615, Address: 0x19cab4, Func Offset: 0xe4
	// Line 4620, Address: 0x19cabc, Func Offset: 0xec
	// Line 4632, Address: 0x19caf4, Func Offset: 0x124
	// Line 4639, Address: 0x19cb0c, Func Offset: 0x13c
	// Line 4640, Address: 0x19cb1c, Func Offset: 0x14c
	// Line 4641, Address: 0x19cb28, Func Offset: 0x158
	// Line 4642, Address: 0x19cb2c, Func Offset: 0x15c
	// Line 4644, Address: 0x19cb34, Func Offset: 0x164
	// Line 4652, Address: 0x19cb4c, Func Offset: 0x17c
	// Line 4653, Address: 0x19cb60, Func Offset: 0x190
	// Line 4660, Address: 0x19cb78, Func Offset: 0x1a8
	// Line 4665, Address: 0x19cb94, Func Offset: 0x1c4
	// Line 4666, Address: 0x19cba4, Func Offset: 0x1d4
	// Line 4667, Address: 0x19cbb4, Func Offset: 0x1e4
	// Line 4668, Address: 0x19cbc4, Func Offset: 0x1f4
	// Func End, Address: 0x19cbe0, Func Offset: 0x210
}

// 
// Start address: 0x19cbe0
void vcMakeNewBaseCamAng(float* new_base_ang, _VC_CAM_MV_TYPE cam_mv_type, _VC_WORK* w_p)
{
	float max_ang_y_spd;
	float mv_ang_y;
	float ofs_end_ang_y;
	float ofs_sta_ang_y;
	float deflt_end_base_ang_y;
	float deflt_sta_base_ang_y;
	float cam2watch_ang_y;
	float cam2watch_ang_x;
	float new_base_ang_y;
	float new_base_ang_x;
	float xyz_vec[4];
	// Line 4689, Address: 0x19cbe0, Func Offset: 0
	// Line 4696, Address: 0x19cc0c, Func Offset: 0x2c
	// Line 4698, Address: 0x19cc28, Func Offset: 0x48
	// Line 4699, Address: 0x19cc38, Func Offset: 0x58
	// Line 4700, Address: 0x19cc3c, Func Offset: 0x5c
	// Line 4701, Address: 0x19cc44, Func Offset: 0x64
	// Line 4703, Address: 0x19cc70, Func Offset: 0x90
	// Line 4709, Address: 0x19cc94, Func Offset: 0xb4
	// Line 4710, Address: 0x19cc98, Func Offset: 0xb8
	// Line 4712, Address: 0x19cca0, Func Offset: 0xc0
	// Line 4713, Address: 0x19cccc, Func Offset: 0xec
	// Line 4722, Address: 0x19ccdc, Func Offset: 0xfc
	// Line 4724, Address: 0x19ccec, Func Offset: 0x10c
	// Line 4728, Address: 0x19ccf0, Func Offset: 0x110
	// Line 4730, Address: 0x19cd00, Func Offset: 0x120
	// Line 4733, Address: 0x19cd0c, Func Offset: 0x12c
	// Line 4736, Address: 0x19cd34, Func Offset: 0x154
	// Line 4737, Address: 0x19cd3c, Func Offset: 0x15c
	// Line 4739, Address: 0x19cd54, Func Offset: 0x174
	// Line 4741, Address: 0x19cd60, Func Offset: 0x180
	// Line 4745, Address: 0x19cd64, Func Offset: 0x184
	// Line 4747, Address: 0x19cd74, Func Offset: 0x194
	// Line 4748, Address: 0x19cd7c, Func Offset: 0x19c
	// Line 4754, Address: 0x19cddc, Func Offset: 0x1fc
	// Line 4757, Address: 0x19cdf0, Func Offset: 0x210
	// Line 4759, Address: 0x19ce0c, Func Offset: 0x22c
	// Line 4761, Address: 0x19ce48, Func Offset: 0x268
	// Line 4762, Address: 0x19ce50, Func Offset: 0x270
	// Line 4763, Address: 0x19ce58, Func Offset: 0x278
	// Line 4767, Address: 0x19ce60, Func Offset: 0x280
	// Line 4768, Address: 0x19ce64, Func Offset: 0x284
	// Line 4771, Address: 0x19ce8c, Func Offset: 0x2ac
	// Line 4776, Address: 0x19ced0, Func Offset: 0x2f0
	// Line 4778, Address: 0x19cee4, Func Offset: 0x304
	// Line 4780, Address: 0x19cf34, Func Offset: 0x354
	// Line 4782, Address: 0x19cf5c, Func Offset: 0x37c
	// Line 4783, Address: 0x19cf60, Func Offset: 0x380
	// Line 4784, Address: 0x19cf64, Func Offset: 0x384
	// Line 4788, Address: 0x19cf68, Func Offset: 0x388
	// Func End, Address: 0x19cf94, Func Offset: 0x3b4
}

// 
// Start address: 0x19cfa0
void vcRenewalBaseCamAngAndAdjustOfsCamAng(_VC_WORK* w_p, float* new_base_cam_ang)
{
	float ofs_mat[4][4];
	float adj_ofs_mat[4][4];
	float new_base_matT[4][4];
	float new_base_mat[4][4];
	float old_base_mat[4][4];
	// Line 4807, Address: 0x19cfa0, Func Offset: 0
	// Line 4811, Address: 0x19cfb8, Func Offset: 0x18
	// Line 4812, Address: 0x19cfe0, Func Offset: 0x40
	// Line 4813, Address: 0x19d008, Func Offset: 0x68
	// Line 4814, Address: 0x19d030, Func Offset: 0x90
	// Line 4816, Address: 0x19d058, Func Offset: 0xb8
	// Line 4817, Address: 0x19d064, Func Offset: 0xc4
	// Line 4818, Address: 0x19d074, Func Offset: 0xd4
	// Line 4820, Address: 0x19d084, Func Offset: 0xe4
	// Line 4821, Address: 0x19d094, Func Offset: 0xf4
	// Line 4822, Address: 0x19d0a8, Func Offset: 0x108
	// Line 4823, Address: 0x19d0bc, Func Offset: 0x11c
	// Line 4824, Address: 0x19d0cc, Func Offset: 0x12c
	// Line 4825, Address: 0x19d0d4, Func Offset: 0x134
	// Func End, Address: 0x19d0ec, Func Offset: 0x14c
}

// 
// Start address: 0x19d0f0
void vcMakeOfsCamTgtAng(float* ofs_tgt_ang, float base_matT[4], _VC_WORK* w_p)
{
	float vec[4];
	// Line 4846, Address: 0x19d0f0, Func Offset: 0
	// Line 4850, Address: 0x19d108, Func Offset: 0x18
	// Line 4852, Address: 0x19d124, Func Offset: 0x34
	// Line 4853, Address: 0x19d130, Func Offset: 0x40
	// Line 4854, Address: 0x19d140, Func Offset: 0x50
	// Line 4855, Address: 0x19d148, Func Offset: 0x58
	// Func End, Address: 0x19d160, Func Offset: 0x70
}

// 
// Start address: 0x19d160
void vcMakeOfsCam2CharaBottomAndTopAngByBaseMatT(float* ofs_cam2chara_btm_ang, float* ofs_cam2chara_top_ang, float base_matT[4], float* cam_pos, float* chara_pos, float chara_bottom_y, float chara_top_y)
{
	float vec[4];
	// Line 4884, Address: 0x19d160, Func Offset: 0
	// Line 4888, Address: 0x19d198, Func Offset: 0x38
	// Line 4889, Address: 0x19d1ac, Func Offset: 0x4c
	// Line 4892, Address: 0x19d1b8, Func Offset: 0x58
	// Line 4894, Address: 0x19d1c8, Func Offset: 0x68
	// Line 4896, Address: 0x19d1d8, Func Offset: 0x78
	// Line 4897, Address: 0x19d1ec, Func Offset: 0x8c
	// Line 4900, Address: 0x19d1f8, Func Offset: 0x98
	// Line 4902, Address: 0x19d208, Func Offset: 0xa8
	// Line 4903, Address: 0x19d218, Func Offset: 0xb8
	// Func End, Address: 0x19d240, Func Offset: 0xe0
}

// 
// Start address: 0x19d240
void vcAdjCamOfsAngByCharaInScreen(float* cam_ang, float* ofs_cam2chara_btm_ang, float* ofs_cam2chara_top_ang, _VC_WORK* w_p)
{
	float watch2chr_top_ofs_ang_x;
	float watch2chr_bottom_ofs_ang_x;
	float watch2chr_ofs_ang_y;
	float adj_cam_ang_x;
	float adj_cam_ang_y;
	// Line 4928, Address: 0x19d240, Func Offset: 0
	// Line 4936, Address: 0x19d274, Func Offset: 0x34
	// Line 4938, Address: 0x19d28c, Func Offset: 0x4c
	// Line 4941, Address: 0x19d2a4, Func Offset: 0x64
	// Line 4944, Address: 0x19d2bc, Func Offset: 0x7c
	// Line 4945, Address: 0x19d2d0, Func Offset: 0x90
	// Line 4947, Address: 0x19d2dc, Func Offset: 0x9c
	// Line 4948, Address: 0x19d2f8, Func Offset: 0xb8
	// Line 4950, Address: 0x19d304, Func Offset: 0xc4
	// Line 4951, Address: 0x19d30c, Func Offset: 0xcc
	// Line 4954, Address: 0x19d310, Func Offset: 0xd0
	// Line 4956, Address: 0x19d35c, Func Offset: 0x11c
	// Line 4958, Address: 0x19d370, Func Offset: 0x130
	// Line 4959, Address: 0x19d374, Func Offset: 0x134
	// Line 4960, Address: 0x19d37c, Func Offset: 0x13c
	// Line 4966, Address: 0x19d380, Func Offset: 0x140
	// Line 4967, Address: 0x19d394, Func Offset: 0x154
	// Line 4971, Address: 0x19d39c, Func Offset: 0x15c
	// Line 4974, Address: 0x19d3f4, Func Offset: 0x1b4
	// Line 4975, Address: 0x19d400, Func Offset: 0x1c0
	// Line 4976, Address: 0x19d40c, Func Offset: 0x1cc
	// Func End, Address: 0x19d438, Func Offset: 0x1f8
}

// 
// Start address: 0x19d440
void vcAdjCamOfsAngByOfsAngSpd(float* ofs_ang, float* ofs_ang_spd, float* ofs_tgt_ang, _VC_WATCH_MV_PARAM* prm_p)
{
	float dt;
	float max_spd_dec_per_dist[4];
	// Line 5000, Address: 0x19d440, Func Offset: 0
	// Line 5003, Address: 0x19d468, Func Offset: 0x28
	// Line 5004, Address: 0x19d47c, Func Offset: 0x3c
	// Line 5007, Address: 0x19d490, Func Offset: 0x50
	// Line 5016, Address: 0x19d4b4, Func Offset: 0x74
	// Line 5025, Address: 0x19d4d8, Func Offset: 0x98
	// Line 5037, Address: 0x19d510, Func Offset: 0xd0
	// Line 5040, Address: 0x19d518, Func Offset: 0xd8
	// Line 5041, Address: 0x19d51c, Func Offset: 0xdc
	// Line 5042, Address: 0x19d520, Func Offset: 0xe0
	// Line 5043, Address: 0x19d528, Func Offset: 0xe8
	// Line 5044, Address: 0x19d52c, Func Offset: 0xec
	// Line 5045, Address: 0x19d530, Func Offset: 0xf0
	// Line 5046, Address: 0x19d534, Func Offset: 0xf4
	// Line 5060, Address: 0x19d538, Func Offset: 0xf8
	// Func End, Address: 0x19d558, Func Offset: 0x118
}

// 
// Start address: 0x19d560
void vcMakeCamMatAndCamAngByBaseAngAndOfsAng(float* cam_mat_ang, float cam_mat[4], float* base_cam_ang, float* ofs_cam_ang, float* cam_pos)
{
	float ofs_mat[4][4];
	float base_mat[4][4];
	// Line 5085, Address: 0x19d560, Func Offset: 0
	// Line 5100, Address: 0x19d588, Func Offset: 0x28
	// Line 5101, Address: 0x19d5b0, Func Offset: 0x50
	// Line 5103, Address: 0x19d5d8, Func Offset: 0x78
	// Line 5104, Address: 0x19d5e4, Func Offset: 0x84
	// Line 5106, Address: 0x19d5f4, Func Offset: 0x94
	// Line 5108, Address: 0x19d608, Func Offset: 0xa8
	// Line 5109, Address: 0x19d610, Func Offset: 0xb0
	// Line 5111, Address: 0x19d620, Func Offset: 0xc0
	// Line 5112, Address: 0x19d630, Func Offset: 0xd0
	// Func End, Address: 0x19d650, Func Offset: 0xf0
}

// 
// Start address: 0x19d650
void vcSetDataToVwSystem(_VC_WORK* w_p, _VC_CAM_MV_TYPE cam_mv_type)
{
	float noise_ang[4];
	float noise_mat[4][4];
	float noise_cam_mat[4][4];
	// Line 5130, Address: 0x19d650, Func Offset: 0
	// Line 5131, Address: 0x19d660, Func Offset: 0x10
	// Line 5132, Address: 0x19d670, Func Offset: 0x20
	// Line 5133, Address: 0x19d680, Func Offset: 0x30
	// Line 5138, Address: 0x19d688, Func Offset: 0x38
	// Line 5141, Address: 0x19d6a4, Func Offset: 0x54
	// Line 5142, Address: 0x19d6d4, Func Offset: 0x84
	// Line 5143, Address: 0x19d704, Func Offset: 0xb4
	// Line 5144, Address: 0x19d708, Func Offset: 0xb8
	// Line 5145, Address: 0x19d710, Func Offset: 0xc0
	// Line 5146, Address: 0x19d738, Func Offset: 0xe8
	// Line 5148, Address: 0x19d744, Func Offset: 0xf4
	// Line 5149, Address: 0x19d77c, Func Offset: 0x12c
	// Line 5150, Address: 0x19d7b4, Func Offset: 0x164
	// Line 5151, Address: 0x19d7ec, Func Offset: 0x19c
	// Line 5152, Address: 0x19d820, Func Offset: 0x1d0
	// Line 5153, Address: 0x19d858, Func Offset: 0x208
	// Line 5155, Address: 0x19d890, Func Offset: 0x240
	// Line 5157, Address: 0x19d8a4, Func Offset: 0x254
	// Line 5158, Address: 0x19d8b8, Func Offset: 0x268
	// Line 5161, Address: 0x19d8c8, Func Offset: 0x278
	// Func End, Address: 0x19d8dc, Func Offset: 0x28c
}

// 
// Start address: 0x19d8e0
float vcCamMatNoise(float noise_w, float ang_spd1, float ang_spd2)
{
	float noise;
	// Line 5181, Address: 0x19d8e0, Func Offset: 0
	// Line 5184, Address: 0x19d900, Func Offset: 0x20
	// Line 5185, Address: 0x19d918, Func Offset: 0x38
	// Line 5187, Address: 0x19d930, Func Offset: 0x50
	// Line 5188, Address: 0x19d960, Func Offset: 0x80
	// Line 5191, Address: 0x19d964, Func Offset: 0x84
	// Func End, Address: 0x19d980, Func Offset: 0xa0
}

// 
// Start address: 0x19d980
float vcGetXZSumDistFromLimArea(float* out_vec_x_p, float* out_vec_z_p, float chk_wld_x, float chk_wld_z, float lim_min_x, float lim_max_x, float lim_min_z, float lim_max_z, int can_ret_minus_dist_f)
{
	float cntr_z;
	float cntr_x;
	float ret_dist;
	float z_dist;
	float x_dist;
	// Line 5232, Address: 0x19d980, Func Offset: 0
	// Line 5233, Address: 0x19d990, Func Offset: 0x10
	// Line 5234, Address: 0x19d998, Func Offset: 0x18
	// Line 5235, Address: 0x19d99c, Func Offset: 0x1c
	// Line 5236, Address: 0x19d9b4, Func Offset: 0x34
	// Line 5238, Address: 0x19d9bc, Func Offset: 0x3c
	// Line 5241, Address: 0x19d9c4, Func Offset: 0x44
	// Line 5243, Address: 0x19d9dc, Func Offset: 0x5c
	// Line 5246, Address: 0x19d9e0, Func Offset: 0x60
	// Line 5247, Address: 0x19d9fc, Func Offset: 0x7c
	// Line 5251, Address: 0x19da00, Func Offset: 0x80
	// Line 5252, Address: 0x19da10, Func Offset: 0x90
	// Line 5253, Address: 0x19da18, Func Offset: 0x98
	// Line 5254, Address: 0x19da1c, Func Offset: 0x9c
	// Line 5255, Address: 0x19da34, Func Offset: 0xb4
	// Line 5257, Address: 0x19da3c, Func Offset: 0xbc
	// Line 5260, Address: 0x19da44, Func Offset: 0xc4
	// Line 5262, Address: 0x19da5c, Func Offset: 0xdc
	// Line 5265, Address: 0x19da60, Func Offset: 0xe0
	// Line 5266, Address: 0x19da7c, Func Offset: 0xfc
	// Line 5269, Address: 0x19da80, Func Offset: 0x100
	// Line 5270, Address: 0x19da98, Func Offset: 0x118
	// Line 5271, Address: 0x19daa8, Func Offset: 0x128
	// Line 5274, Address: 0x19dab4, Func Offset: 0x134
	// Line 5275, Address: 0x19dabc, Func Offset: 0x13c
	// Line 5276, Address: 0x19dacc, Func Offset: 0x14c
	// Line 5278, Address: 0x19dad8, Func Offset: 0x158
	// Line 5281, Address: 0x19dae0, Func Offset: 0x160
	// Line 5282, Address: 0x19dae8, Func Offset: 0x168
	// Line 5286, Address: 0x19db04, Func Offset: 0x184
	// Func End, Address: 0x19db0c, Func Offset: 0x18c
}

// 
// Start address: 0x19db10
void vcSetEventCamParamRefView(float* vp, _VC_CAM_MV_PARAM* cam_prm_p, float* vr, _VC_WATCH_MV_PARAM* watch_prm_p, float rot_z, int warp_flg)
{
	// Line 5361, Address: 0x19db10, Func Offset: 0
	// Line 5363, Address: 0x19db38, Func Offset: 0x28
	// Line 5365, Address: 0x19db44, Func Offset: 0x34
	// Line 5366, Address: 0x19db5c, Func Offset: 0x4c
	// Func End, Address: 0x19db7c, Func Offset: 0x6c
}

// 
// Start address: 0x19db80
void vcSetProjectionValue(float new, int framecnt)
{
	// Line 5388, Address: 0x19db80, Func Offset: 0
	// Line 5391, Address: 0x19db98, Func Offset: 0x18
	// Line 5392, Address: 0x19dba4, Func Offset: 0x24
	// Line 5394, Address: 0x19dbac, Func Offset: 0x2c
	// Line 5396, Address: 0x19dbb4, Func Offset: 0x34
	// Line 5399, Address: 0x19dbc4, Func Offset: 0x44
	// Line 5401, Address: 0x19dbd8, Func Offset: 0x58
	// Line 5402, Address: 0x19dbdc, Func Offset: 0x5c
	// Line 5405, Address: 0x19dbe8, Func Offset: 0x68
	// Line 5406, Address: 0x19dbf4, Func Offset: 0x74
	// Line 5409, Address: 0x19dc08, Func Offset: 0x88
	// Line 5412, Address: 0x19dc34, Func Offset: 0xb4
	// Line 5414, Address: 0x19dc40, Func Offset: 0xc0
	// Func End, Address: 0x19dc48, Func Offset: 0xc8
}

// 
// Start address: 0x19dc50
void vcChangeProjectionValue(_VC_WORK* w_p)
{
	float now;
	// Line 5432, Address: 0x19dc50, Func Offset: 0
	// Line 5435, Address: 0x19dc60, Func Offset: 0x10
	// Line 5437, Address: 0x19dc70, Func Offset: 0x20
	// Line 5439, Address: 0x19dc7c, Func Offset: 0x2c
	// Line 5440, Address: 0x19dc84, Func Offset: 0x34
	// Line 5441, Address: 0x19dc8c, Func Offset: 0x3c
	// Line 5444, Address: 0x19dc94, Func Offset: 0x44
	// Line 5445, Address: 0x19dc9c, Func Offset: 0x4c
	// Line 5447, Address: 0x19dca8, Func Offset: 0x58
	// Line 5449, Address: 0x19dcc8, Func Offset: 0x78
	// Line 5451, Address: 0x19dcd8, Func Offset: 0x88
	// Line 5452, Address: 0x19dcdc, Func Offset: 0x8c
	// Line 5454, Address: 0x19dce4, Func Offset: 0x94
	// Line 5457, Address: 0x19dcec, Func Offset: 0x9c
	// Line 5459, Address: 0x19dcfc, Func Offset: 0xac
	// Line 5460, Address: 0x19dd00, Func Offset: 0xb0
	// Line 5466, Address: 0x19dd08, Func Offset: 0xb8
	// Line 5467, Address: 0x19dd10, Func Offset: 0xc0
	// Line 5470, Address: 0x19dd18, Func Offset: 0xc8
	// Line 5471, Address: 0x19dd44, Func Offset: 0xf4
	// Line 5472, Address: 0x19dd70, Func Offset: 0x120
	// Func End, Address: 0x19dd84, Func Offset: 0x134
}

