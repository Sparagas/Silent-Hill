typedef struct Enemy_List;
typedef struct _VC_FIX_ANG_CAM_PARAM;
typedef struct shBattleShot;
typedef struct PAD_3D;
typedef struct _VC_THROUGH_DOOR_CAM_PARAM;
typedef struct shBattleArea;
typedef struct _AnimeInfo;
typedef struct _VC_LOCUS_CIRCLE_CAM_PARAM;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct shBattleInfo;
typedef struct PAD_2D;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct _VC_ROAD_AREA;
typedef struct SubCharacter;
typedef struct Stage_Data;
typedef struct PAD_INFO;
typedef struct Se_RadioInfo;
typedef struct _VC_WORK;
typedef struct _SH2_SYS;
typedef union fsFile;
typedef struct _VC_ROAD_DATA;
typedef struct _CL_VHIT_WALL;
typedef struct Se2D_ManageData;
typedef struct fsCdFile;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct Event_List;
typedef struct fsMgcFile;
typedef union _anon1;
typedef struct _anon2;
typedef struct Se3D_ChannelData;
typedef struct _CL_VHIT_RESULT;
typedef struct Playing_Info;
typedef union _anon3;
typedef struct Item_List;
typedef struct Se_TrackBuffer;
typedef union _anon4;
typedef struct fsMgfFile;
typedef struct Se_BgmBuffer;
typedef struct fsHdFile;
typedef struct shPlayerWork;
typedef struct Model_List;
typedef struct _VC_WATCH_MV_PARAM;
typedef struct shSkelton;
typedef struct _anon5;
typedef struct fsMgpFile;
typedef struct _SND_ROAD_AREA;
typedef struct _VC_CAM_MV_PARAM;
typedef struct _anon6;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _SOUND_DATA;
typedef struct _VC_NEAR_ROAD_DATA;
typedef struct _VC_LIMIT_AREA;
typedef enum _VC_FLAGS : unsigned short;
typedef struct _NEAR_SOUND_DATA;
typedef struct _anon7;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _VC_CHASE_CAM_PARAM;
typedef struct _SOUND_WORK;
typedef struct _VC_FIX_CAM_MANAGER;
typedef struct _VC_SETTLE_CAM_PARAM;
typedef struct _anon8;
typedef struct shBattleFight;
typedef struct _VC_CIR_CAM_MANAGER;
typedef struct _anon9;
typedef struct _VbWVSMATRIX;

typedef void(*type_0)();
typedef int(*type_8)();
typedef void(*type_38)(SubCharacter*);
typedef void(*type_41)(SubCharacter*);

typedef unsigned int type_1[32];
typedef unsigned char type_2[4];
typedef char type_3[4];
typedef int type_4[2];
typedef int type_5[2][43];
typedef char type_6[4];
typedef char type_7[4];
typedef unsigned char type_9[20];
typedef char type_10[4];
typedef fsFileIndex* type_11[53];
typedef char type_12[4];
typedef fsFileIndex* type_13[35];
typedef float type_14[4];
typedef float type_15[4];
typedef float type_16[4][4];
typedef PAD_INFO type_17[10];
typedef unsigned int type_18[8];
typedef unsigned char type_19[14];
typedef float type_20[2];
typedef unsigned char type_21[4];
typedef unsigned char type_22[4];
typedef unsigned char type_23[16];
typedef unsigned char type_24[69];
typedef float type_25[4];
typedef unsigned char type_26[2];
typedef Se_TrackBuffer type_27[7];
typedef unsigned char type_28[2];
typedef float type_29[4];
typedef float type_30[4][4];
typedef shAttackInfo type_31[66];
typedef _anon8 type_32[242];
typedef float type_33[7];
typedef unsigned int type_34[7];
typedef int type_35[7];
typedef unsigned char type_36[14];
typedef float type_37[4][2];
typedef char type_39[7];
typedef int type_40[5];
typedef char type_42[7];
typedef unsigned char type_43[4];
typedef unsigned char type_44[20480];
typedef unsigned char type_45[97];
typedef Se2D_ManageData type_46[4];
typedef float type_47[5];
typedef _VC_NEAR_ROAD_DATA type_48[128];
typedef Se3D_ChannelData type_49[8];
typedef _NEAR_SOUND_DATA type_50[8];
typedef int type_51[8];
typedef unsigned char type_52[2];
typedef char type_53[7];
typedef unsigned int type_54[255];

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

struct _VC_FIX_ANG_CAM_PARAM
{
	float ang_x;
	float ang_y;
	float ofs_hy;
	float cam2wth_dist;
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

struct _VC_THROUGH_DOOR_CAM_PARAM
{
	int active_f;
	float timer;
	float rail_ang_y;
	float rail_sta_pos[4];
	float rail_sta_to_chara_dist;
};

struct shBattleArea
{
	float center;
	float radius;
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

struct _VC_LOCUS_CIRCLE_CAM_PARAM
{
	float origin_x;
	float origin_z;
	float ang_y;
	float radius;
};

struct _anon0
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
};

union fsFileIndex
{
	_anon7 index;
	unsigned long pack;
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

struct Se_RadioInfo
{
	float volume;
	short pan;
	short pitch;
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

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

union fsFile
{
	_anon6 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
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
	_anon4 tmp;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct Se2D_ManageData
{
	int sd;
	float pos[4];
	float vol;
	short room;
	unsigned char pos_on;
	unsigned char pre_dist;
	short pre_pan;
	short status;
	float timer;
	float base;
};

struct fsCdFile
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	char* name;
	int lsn;
	int size;
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

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct fsMgcFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	char* start;
	char* end;
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

struct Se3D_ChannelData
{
	int sd;
	int room;
	int status;
	float pos[4];
	float vol;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon3 hobj;
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

union _anon3
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct Se_TrackBuffer
{
	unsigned char status;
	unsigned char fade_in_type;
	unsigned char fade_out_type;
	unsigned char pad;
	float volume;
};

union _anon4
{
	unsigned char data[16];
	_VC_CHASE_CAM_PARAM chs;
	_VC_SETTLE_CAM_PARAM stl;
	_VC_FIX_ANG_CAM_PARAM fix;
	_VC_LOCUS_CIRCLE_CAM_PARAM cir;
};

struct fsMgfFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	int offset;
	int size;
};

struct Se_BgmBuffer
{
	int current;
	int next;
	int read;
	int sdb_no;
	float volume;
	Se_TrackBuffer track[7];
};

struct fsHdFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	char* name;
	int offset;
	int size;
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
};

struct _VC_WATCH_MV_PARAM
{
	float ang_accel_x;
	float ang_accel_y;
	float max_ang_spd_x;
	float max_ang_spd_y;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon5 src_m;
	_anon2 src_t;
	_anon5 des_m;
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

struct _anon5
{
	float d[4][4];
};

struct fsMgpFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* file;
	fsMgcFile* start;
	fsMgcFile* end;
};

struct _SND_ROAD_AREA
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

struct _VC_CAM_MV_PARAM
{
	float accel_xz;
	float accel_y;
	float max_spd_xz;
	float max_spd_y;
};

struct _anon6
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	int pad0;
	int pad1;
	int pad2;
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

struct _SOUND_DATA
{
	_SND_ROAD_AREA lim_sw;
	int flags;
	int chanstat[7];
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

struct _VC_LIMIT_AREA
{
	float min_hx;
	float max_hx;
	float min_hz;
	float max_hz;
	float min_hy;
	float max_hy;
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

struct _NEAR_SOUND_DATA
{
	char inVol[7];
	char outVol[7];
	int errCode;
	int absIndex;
	float len;
};

struct _anon7
{
	fsFile* fp;
	char* name;
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

struct _VC_CHASE_CAM_PARAM
{
	float ofs_hy;
	float ratio_r_xz;
	float lr_lim_ang_y;
	float rr_lim_ang_y;
};

struct _SOUND_WORK
{
	_SOUND_DATA* sound_ary;
	float chara_pos[4];
	float half_w;
	int page;
	int near_sound_num;
	_NEAR_SOUND_DATA near_sound_ary[8];
	int on_num;
	char on_chan[7];
	int absNum;
	int nearindex;
};

struct _VC_FIX_CAM_MANAGER
{
	int exception_f;
	float add_ang_y;
	float add_rd_x;
	float add_rd_z;
};

struct _VC_SETTLE_CAM_PARAM
{
	float sta_base_ang_y;
	float end_base_ang_y;
	float lr_lim_ang_y;
	float rr_lim_ang_y;
};

struct _anon8
{
	int sd_se;
	int sd_3d;
	int file;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _VC_CIR_CAM_MANAGER
{
	float origin[4];
	float sw_l[4];
};

struct _anon9
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

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
int excl_sema;
_SOUND_WORK sound_work;
int se_3d_load_data;
int se_load_data;
Se_BgmBuffer bgm;
Se3D_ChannelData se_3d_channel_data[8];
int se_3d_channel_number;
int se_3d_channel_max;
Se2D_ManageData se_2d_manage_data[4];
_VbWVSMATRIX VbWvsMatrix;
shPlayerWork sh2jms;
_VC_WORK vcWork;
_anon9 game_flag;
Playing_Info playing;
_SH2_SYS Sh2sys;
fsFileIndex* sdb_list[53];
unsigned char snd_data_buffer[20480];
Stage_Data* stage;
_anon8 change_list[242];
int channel_3d[8];
float se_f_work;

void SeWait(int wait);
void SeForceWait();
void SeCallInit(int sect, int mmode, char* path);
void SeCallReset();
int SeCall(int sd_no, float volume, int stereo);
int SeCallPos(int sd_no, float volume, float* pos, int status);
int SeCallPosChange(int sd_no, float volume, float* pos, int status);
int SeCallPosDirection(float* pos);
int SeCallPosDistance(float volume, float* pos);
float SeCallPosDistanceF(float* pos);
int Se3dPlayCheck(int sd_no);
void SeSoundLoad();
void SeSoundEffectLoad(int data);
void SeSoundEffect3dLoad(int data);
void SeSoundManager();
void Se2dManager();
void Se2dManageDataVolumeChange(int sd, float vol);
float Se2dManageDataTimer(int sd, int clear);
void Se3dManager();
int Se3dControl(int sd_no, float volume, float* pos);
void SeStop(int sd_no);
void SeBgmChange();
void SeBgmCall(int bgm_no);
void SeBgmManager();
int BgmPageSet();
void SeMasterVolumeChange();
int SeChange2Dto3D(int se);
int SeChange3Dto2D(int se);

// 
// Start address: 0x191e60
void SeWait(int wait)
{
	int c;
	// Line 146, Address: 0x191e60, Func Offset: 0
	// Line 147, Address: 0x191e74, Func Offset: 0x14
	// Line 150, Address: 0x191e88, Func Offset: 0x28
	// Line 151, Address: 0x191e9c, Func Offset: 0x3c
	// Line 152, Address: 0x191ea8, Func Offset: 0x48
	// Line 153, Address: 0x191eb8, Func Offset: 0x58
	// Line 154, Address: 0x191ed0, Func Offset: 0x70
	// Line 155, Address: 0x191ed4, Func Offset: 0x74
	// Line 156, Address: 0x191ed8, Func Offset: 0x78
	// Line 157, Address: 0x191ee4, Func Offset: 0x84
	// Line 158, Address: 0x191eec, Func Offset: 0x8c
	// Line 159, Address: 0x191ef8, Func Offset: 0x98
	// Line 160, Address: 0x191f08, Func Offset: 0xa8
	// Line 164, Address: 0x191f20, Func Offset: 0xc0
	// Func End, Address: 0x191f38, Func Offset: 0xd8
}

// 
// Start address: 0x191f40
void SeForceWait()
{
	// Line 167, Address: 0x191f40, Func Offset: 0
	// Line 168, Address: 0x191f48, Func Offset: 0x8
	// Line 169, Address: 0x191f54, Func Offset: 0x14
	// Func End, Address: 0x191f64, Func Offset: 0x24
}

// 
// Start address: 0x191f70
void SeCallInit(int sect, int mmode, char* path)
{
	// Line 177, Address: 0x191f70, Func Offset: 0
	// Line 178, Address: 0x191f90, Func Offset: 0x20
	// Line 182, Address: 0x191fa4, Func Offset: 0x34
	// Line 184, Address: 0x191fb8, Func Offset: 0x48
	// Line 185, Address: 0x191fd0, Func Offset: 0x60
	// Line 186, Address: 0x191fe4, Func Offset: 0x74
	// Line 187, Address: 0x191fec, Func Offset: 0x7c
	// Line 188, Address: 0x192004, Func Offset: 0x94
	// Line 194, Address: 0x19201c, Func Offset: 0xac
	// Line 195, Address: 0x192030, Func Offset: 0xc0
	// Line 197, Address: 0x192038, Func Offset: 0xc8
	// Line 199, Address: 0x192040, Func Offset: 0xd0
	// Func End, Address: 0x19205c, Func Offset: 0xec
}

// 
// Start address: 0x192060
void SeCallReset()
{
	int i;
	// Line 203, Address: 0x192060, Func Offset: 0
	// Line 206, Address: 0x192068, Func Offset: 0x8
	// Line 208, Address: 0x19207c, Func Offset: 0x1c
	// Line 209, Address: 0x192088, Func Offset: 0x28
	// Line 210, Address: 0x1920a0, Func Offset: 0x40
	// Line 211, Address: 0x1920ac, Func Offset: 0x4c
	// Line 212, Address: 0x1920b4, Func Offset: 0x54
	// Line 216, Address: 0x1920c0, Func Offset: 0x60
	// Line 217, Address: 0x1920cc, Func Offset: 0x6c
	// Line 218, Address: 0x1920f4, Func Offset: 0x94
	// Line 219, Address: 0x192100, Func Offset: 0xa0
	// Line 220, Address: 0x192108, Func Offset: 0xa8
	// Line 221, Address: 0x192144, Func Offset: 0xe4
	// Line 222, Address: 0x192158, Func Offset: 0xf8
	// Line 224, Address: 0x19216c, Func Offset: 0x10c
	// Line 225, Address: 0x192174, Func Offset: 0x114
	// Line 227, Address: 0x192180, Func Offset: 0x120
	// Line 228, Address: 0x192188, Func Offset: 0x128
	// Line 229, Address: 0x192190, Func Offset: 0x130
	// Line 230, Address: 0x1921a4, Func Offset: 0x144
	// Func End, Address: 0x1921b4, Func Offset: 0x154
}

// 
// Start address: 0x1921c0
int SeCall(int sd_no, float volume, int stereo)
{
	int ret;
	// Line 240, Address: 0x1921c0, Func Offset: 0
	// Line 244, Address: 0x1921e0, Func Offset: 0x20
	// Line 245, Address: 0x1921f4, Func Offset: 0x34
	// Line 247, Address: 0x192200, Func Offset: 0x40
	// Line 249, Address: 0x192214, Func Offset: 0x54
	// Line 250, Address: 0x192244, Func Offset: 0x84
	// Line 253, Address: 0x192254, Func Offset: 0x94
	// Func End, Address: 0x192270, Func Offset: 0xb0
}

// 
// Start address: 0x192270
int SeCallPos(int sd_no, float volume, float* pos, int status)
{
	int i;
	int ret;
	int work;
	int distance;
	int direction;
	// Line 265, Address: 0x192270, Func Offset: 0
	// Line 272, Address: 0x1922a0, Func Offset: 0x30
	// Line 274, Address: 0x1922b4, Func Offset: 0x44
	// Line 276, Address: 0x1922d4, Func Offset: 0x64
	// Line 277, Address: 0x1922ec, Func Offset: 0x7c
	// Line 278, Address: 0x1922f8, Func Offset: 0x88
	// Line 279, Address: 0x192334, Func Offset: 0xc4
	// Line 280, Address: 0x192340, Func Offset: 0xd0
	// Line 281, Address: 0x192370, Func Offset: 0x100
	// Line 282, Address: 0x1923a4, Func Offset: 0x134
	// Line 283, Address: 0x1923b8, Func Offset: 0x148
	// Line 284, Address: 0x1923d4, Func Offset: 0x164
	// Line 285, Address: 0x1923dc, Func Offset: 0x16c
	// Line 286, Address: 0x1923f0, Func Offset: 0x180
	// Line 287, Address: 0x192404, Func Offset: 0x194
	// Line 288, Address: 0x19241c, Func Offset: 0x1ac
	// Line 289, Address: 0x192430, Func Offset: 0x1c0
	// Line 290, Address: 0x192440, Func Offset: 0x1d0
	// Line 291, Address: 0x192450, Func Offset: 0x1e0
	// Line 294, Address: 0x192460, Func Offset: 0x1f0
	// Line 295, Address: 0x192470, Func Offset: 0x200
	// Line 296, Address: 0x19248c, Func Offset: 0x21c
	// Line 297, Address: 0x192498, Func Offset: 0x228
	// Line 298, Address: 0x1924a4, Func Offset: 0x234
	// Line 299, Address: 0x1924ac, Func Offset: 0x23c
	// Line 300, Address: 0x1924bc, Func Offset: 0x24c
	// Line 304, Address: 0x1924d0, Func Offset: 0x260
	// Line 305, Address: 0x1924e4, Func Offset: 0x274
	// Line 306, Address: 0x19250c, Func Offset: 0x29c
	// Line 307, Address: 0x192520, Func Offset: 0x2b0
	// Line 308, Address: 0x19253c, Func Offset: 0x2cc
	// Line 310, Address: 0x192540, Func Offset: 0x2d0
	// Line 311, Address: 0x19254c, Func Offset: 0x2dc
	// Line 312, Address: 0x192560, Func Offset: 0x2f0
	// Line 315, Address: 0x192570, Func Offset: 0x300
	// Line 316, Address: 0x192580, Func Offset: 0x310
	// Line 317, Address: 0x1925a4, Func Offset: 0x334
	// Line 318, Address: 0x1925b0, Func Offset: 0x340
	// Line 319, Address: 0x1925cc, Func Offset: 0x35c
	// Line 320, Address: 0x1925dc, Func Offset: 0x36c
	// Line 321, Address: 0x1925f0, Func Offset: 0x380
	// Line 322, Address: 0x192600, Func Offset: 0x390
	// Line 323, Address: 0x192624, Func Offset: 0x3b4
	// Line 324, Address: 0x192648, Func Offset: 0x3d8
	// Line 325, Address: 0x192650, Func Offset: 0x3e0
	// Line 326, Address: 0x192660, Func Offset: 0x3f0
	// Line 331, Address: 0x192680, Func Offset: 0x410
	// Line 332, Address: 0x19269c, Func Offset: 0x42c
	// Line 334, Address: 0x1926ac, Func Offset: 0x43c
	// Line 335, Address: 0x1926b0, Func Offset: 0x440
	// Func End, Address: 0x1926d8, Func Offset: 0x468
}

// 
// Start address: 0x1926e0
int SeCallPosChange(int sd_no, float volume, float* pos, int status)
{
	int i;
	int work;
	int ret;
	int distance;
	int direction;
	// Line 348, Address: 0x1926e0, Func Offset: 0
	// Line 355, Address: 0x19270c, Func Offset: 0x2c
	// Line 357, Address: 0x192720, Func Offset: 0x40
	// Line 359, Address: 0x192740, Func Offset: 0x60
	// Line 360, Address: 0x192748, Func Offset: 0x68
	// Line 361, Address: 0x19274c, Func Offset: 0x6c
	// Line 362, Address: 0x192768, Func Offset: 0x88
	// Line 363, Address: 0x192770, Func Offset: 0x90
	// Line 364, Address: 0x192780, Func Offset: 0xa0
	// Line 365, Address: 0x19278c, Func Offset: 0xac
	// Line 366, Address: 0x1927b4, Func Offset: 0xd4
	// Line 369, Address: 0x1927c8, Func Offset: 0xe8
	// Line 370, Address: 0x1927d4, Func Offset: 0xf4
	// Line 371, Address: 0x1927e0, Func Offset: 0x100
	// Line 372, Address: 0x192810, Func Offset: 0x130
	// Line 373, Address: 0x192830, Func Offset: 0x150
	// Line 374, Address: 0x192854, Func Offset: 0x174
	// Line 375, Address: 0x192870, Func Offset: 0x190
	// Line 376, Address: 0x192890, Func Offset: 0x1b0
	// Line 377, Address: 0x1928a4, Func Offset: 0x1c4
	// Line 378, Address: 0x1928b8, Func Offset: 0x1d8
	// Line 379, Address: 0x1928d8, Func Offset: 0x1f8
	// Line 380, Address: 0x1928f4, Func Offset: 0x214
	// Line 381, Address: 0x192914, Func Offset: 0x234
	// Line 382, Address: 0x192928, Func Offset: 0x248
	// Line 384, Address: 0x19293c, Func Offset: 0x25c
	// Line 385, Address: 0x192954, Func Offset: 0x274
	// Line 388, Address: 0x192964, Func Offset: 0x284
	// Func End, Address: 0x192988, Func Offset: 0x2a8
}

// 
// Start address: 0x192990
int SeCallPosDirection(float* pos)
{
	float sign;
	float pos0[4];
	float fv[4];
	// Line 394, Address: 0x192990, Func Offset: 0
	// Line 399, Address: 0x192994, Func Offset: 0x4
	// Line 400, Address: 0x1929a4, Func Offset: 0x14
	// Line 401, Address: 0x1929d8, Func Offset: 0x48
	// Line 402, Address: 0x1929f4, Func Offset: 0x64
	// Line 403, Address: 0x1929f8, Func Offset: 0x68
	// Line 404, Address: 0x192a18, Func Offset: 0x88
	// Line 405, Address: 0x192a44, Func Offset: 0xb4
	// Line 406, Address: 0x192a64, Func Offset: 0xd4
	// Func End, Address: 0x192a70, Func Offset: 0xe0
}

// 
// Start address: 0x192a70
int SeCallPosDistance(float volume, float* pos)
{
	float work_1;
	float work_0;
	float len;
	float pos0[4];
	float fvec[4];
	// Line 412, Address: 0x192a70, Func Offset: 0
	// Line 418, Address: 0x192a74, Func Offset: 0x4
	// Line 419, Address: 0x192a84, Func Offset: 0x14
	// Line 420, Address: 0x192aac, Func Offset: 0x3c
	// Line 421, Address: 0x192ad4, Func Offset: 0x64
	// Line 422, Address: 0x192af8, Func Offset: 0x88
	// Line 423, Address: 0x192b1c, Func Offset: 0xac
	// Line 424, Address: 0x192b38, Func Offset: 0xc8
	// Line 425, Address: 0x192b60, Func Offset: 0xf0
	// Line 426, Address: 0x192b68, Func Offset: 0xf8
	// Line 428, Address: 0x192b84, Func Offset: 0x114
	// Line 429, Address: 0x192ba8, Func Offset: 0x138
	// Func End, Address: 0x192bb4, Func Offset: 0x144
}

// 
// Start address: 0x192bc0
float SeCallPosDistanceF(float* pos)
{
	float work_1;
	float work_0;
	float len;
	float pos0[4];
	float fvec[4];
	// Line 434, Address: 0x192bc0, Func Offset: 0
	// Line 440, Address: 0x192bc4, Func Offset: 0x4
	// Line 441, Address: 0x192bd4, Func Offset: 0x14
	// Line 442, Address: 0x192bfc, Func Offset: 0x3c
	// Line 443, Address: 0x192c24, Func Offset: 0x64
	// Line 444, Address: 0x192c48, Func Offset: 0x88
	// Line 445, Address: 0x192c6c, Func Offset: 0xac
	// Line 446, Address: 0x192c88, Func Offset: 0xc8
	// Line 447, Address: 0x192cb0, Func Offset: 0xf0
	// Line 448, Address: 0x192cb8, Func Offset: 0xf8
	// Line 450, Address: 0x192cd4, Func Offset: 0x114
	// Line 451, Address: 0x192cd8, Func Offset: 0x118
	// Func End, Address: 0x192ce4, Func Offset: 0x124
}

// 
// Start address: 0x192cf0
int Se3dPlayCheck(int sd_no)
{
	int i;
	// Line 461, Address: 0x192cf0, Func Offset: 0
	// Line 462, Address: 0x192cfc, Func Offset: 0xc
	// Line 463, Address: 0x192d3c, Func Offset: 0x4c
	// Line 464, Address: 0x192d40, Func Offset: 0x50
	// Func End, Address: 0x192d48, Func Offset: 0x58
}

// 
// Start address: 0x192d50
void SeSoundLoad()
{
	// Line 488, Address: 0x192d50, Func Offset: 0
	// Line 489, Address: 0x192d58, Func Offset: 0x8
	// Line 490, Address: 0x192d64, Func Offset: 0x14
	// Line 491, Address: 0x192d70, Func Offset: 0x20
	// Line 492, Address: 0x192d78, Func Offset: 0x28
	// Func End, Address: 0x192d88, Func Offset: 0x38
}

// 
// Start address: 0x192d90
void SeSoundEffectLoad(int data)
{
	int room;
	// Line 500, Address: 0x192d90, Func Offset: 0
	// Line 503, Address: 0x192da0, Func Offset: 0x10
	// Line 505, Address: 0x192db4, Func Offset: 0x24
	// Line 507, Address: 0x192dbc, Func Offset: 0x2c
	// Line 508, Address: 0x192dc4, Func Offset: 0x34
	// Line 509, Address: 0x192df4, Func Offset: 0x64
	// Line 511, Address: 0x192e00, Func Offset: 0x70
	// Line 512, Address: 0x192e18, Func Offset: 0x88
	// Line 513, Address: 0x192e24, Func Offset: 0x94
	// Line 514, Address: 0x192e28, Func Offset: 0x98
	// Line 517, Address: 0x192e30, Func Offset: 0xa0
	// Line 518, Address: 0x192e48, Func Offset: 0xb8
	// Line 519, Address: 0x192e54, Func Offset: 0xc4
	// Line 520, Address: 0x192e58, Func Offset: 0xc8
	// Line 522, Address: 0x192e60, Func Offset: 0xd0
	// Line 527, Address: 0x192e6c, Func Offset: 0xdc
	// Line 529, Address: 0x192e78, Func Offset: 0xe8
	// Line 530, Address: 0x192e84, Func Offset: 0xf4
	// Line 534, Address: 0x192e90, Func Offset: 0x100
	// Line 539, Address: 0x192e9c, Func Offset: 0x10c
	// Line 541, Address: 0x192ea8, Func Offset: 0x118
	// Line 542, Address: 0x192ec0, Func Offset: 0x130
	// Line 543, Address: 0x192ec4, Func Offset: 0x134
	// Line 545, Address: 0x192ecc, Func Offset: 0x13c
	// Line 546, Address: 0x192ed8, Func Offset: 0x148
	// Line 547, Address: 0x192ee4, Func Offset: 0x154
	// Line 548, Address: 0x192ef0, Func Offset: 0x160
	// Line 550, Address: 0x192efc, Func Offset: 0x16c
	// Line 551, Address: 0x192f08, Func Offset: 0x178
	// Line 552, Address: 0x192f14, Func Offset: 0x184
	// Line 555, Address: 0x192f20, Func Offset: 0x190
	// Line 556, Address: 0x192f2c, Func Offset: 0x19c
	// Line 557, Address: 0x192f38, Func Offset: 0x1a8
	// Line 559, Address: 0x192f44, Func Offset: 0x1b4
	// Line 561, Address: 0x192f50, Func Offset: 0x1c0
	// Line 565, Address: 0x192f5c, Func Offset: 0x1cc
	// Line 569, Address: 0x192f60, Func Offset: 0x1d0
	// Line 570, Address: 0x192f68, Func Offset: 0x1d8
	// Line 572, Address: 0x192f78, Func Offset: 0x1e8
	// Line 573, Address: 0x192f80, Func Offset: 0x1f0
	// Line 574, Address: 0x192f98, Func Offset: 0x208
	// Line 575, Address: 0x192fb0, Func Offset: 0x220
	// Func End, Address: 0x192fc4, Func Offset: 0x234
}

// 
// Start address: 0x192fd0
void SeSoundEffect3dLoad(int data)
{
	int i;
	int room;
	fsFileIndex* se_file_list[35];
	// Line 582, Address: 0x192fd0, Func Offset: 0
	// Line 623, Address: 0x192fe0, Func Offset: 0x10
	// Line 625, Address: 0x192ff4, Func Offset: 0x24
	// Line 627, Address: 0x192ffc, Func Offset: 0x2c
	// Line 628, Address: 0x193004, Func Offset: 0x34
	// Line 631, Address: 0x193038, Func Offset: 0x68
	// Line 632, Address: 0x193050, Func Offset: 0x80
	// Line 633, Address: 0x19305c, Func Offset: 0x8c
	// Line 634, Address: 0x193060, Func Offset: 0x90
	// Line 637, Address: 0x193068, Func Offset: 0x98
	// Line 638, Address: 0x193080, Func Offset: 0xb0
	// Line 639, Address: 0x19308c, Func Offset: 0xbc
	// Line 640, Address: 0x193090, Func Offset: 0xc0
	// Line 642, Address: 0x193098, Func Offset: 0xc8
	// Line 643, Address: 0x1930a4, Func Offset: 0xd4
	// Line 644, Address: 0x1930b0, Func Offset: 0xe0
	// Line 645, Address: 0x1930bc, Func Offset: 0xec
	// Line 646, Address: 0x1930c8, Func Offset: 0xf8
	// Line 647, Address: 0x1930d4, Func Offset: 0x104
	// Line 648, Address: 0x1930e0, Func Offset: 0x110
	// Line 649, Address: 0x1930ec, Func Offset: 0x11c
	// Line 650, Address: 0x1930f8, Func Offset: 0x128
	// Line 651, Address: 0x193104, Func Offset: 0x134
	// Line 652, Address: 0x193110, Func Offset: 0x140
	// Line 655, Address: 0x19311c, Func Offset: 0x14c
	// Line 656, Address: 0x193134, Func Offset: 0x164
	// Line 657, Address: 0x193138, Func Offset: 0x168
	// Line 659, Address: 0x193140, Func Offset: 0x170
	// Line 660, Address: 0x19314c, Func Offset: 0x17c
	// Line 661, Address: 0x193158, Func Offset: 0x188
	// Line 662, Address: 0x193164, Func Offset: 0x194
	// Line 663, Address: 0x193170, Func Offset: 0x1a0
	// Line 664, Address: 0x19317c, Func Offset: 0x1ac
	// Line 665, Address: 0x193188, Func Offset: 0x1b8
	// Line 667, Address: 0x193194, Func Offset: 0x1c4
	// Line 668, Address: 0x1931a0, Func Offset: 0x1d0
	// Line 669, Address: 0x1931ac, Func Offset: 0x1dc
	// Line 670, Address: 0x1931b8, Func Offset: 0x1e8
	// Line 671, Address: 0x1931c4, Func Offset: 0x1f4
	// Line 672, Address: 0x1931d0, Func Offset: 0x200
	// Line 673, Address: 0x1931dc, Func Offset: 0x20c
	// Line 674, Address: 0x1931e8, Func Offset: 0x218
	// Line 675, Address: 0x1931f4, Func Offset: 0x224
	// Line 676, Address: 0x193200, Func Offset: 0x230
	// Line 677, Address: 0x19320c, Func Offset: 0x23c
	// Line 681, Address: 0x193218, Func Offset: 0x248
	// Line 685, Address: 0x19321c, Func Offset: 0x24c
	// Line 686, Address: 0x193224, Func Offset: 0x254
	// Line 688, Address: 0x193234, Func Offset: 0x264
	// Line 689, Address: 0x19323c, Func Offset: 0x26c
	// Line 690, Address: 0x193244, Func Offset: 0x274
	// Line 691, Address: 0x19327c, Func Offset: 0x2ac
	// Line 692, Address: 0x1932a4, Func Offset: 0x2d4
	// Func End, Address: 0x1932b8, Func Offset: 0x2e8
}

// 
// Start address: 0x1932c0
void SeSoundManager()
{
	// Line 697, Address: 0x1932c0, Func Offset: 0
	// Line 698, Address: 0x1932c8, Func Offset: 0x8
	// Line 699, Address: 0x1932d0, Func Offset: 0x10
	// Line 700, Address: 0x1932d8, Func Offset: 0x18
	// Line 701, Address: 0x1932e0, Func Offset: 0x20
	// Func End, Address: 0x1932f0, Func Offset: 0x30
}

// 
// Start address: 0x1932f0
void Se2dManager()
{
	int i;
	int room;
	float volume;
	// Line 706, Address: 0x1932f0, Func Offset: 0
	// Line 711, Address: 0x193304, Func Offset: 0x14
	// Line 712, Address: 0x193328, Func Offset: 0x38
	// Line 714, Address: 0x19332c, Func Offset: 0x3c
	// Line 715, Address: 0x193338, Func Offset: 0x48
	// Line 716, Address: 0x193354, Func Offset: 0x64
	// Line 717, Address: 0x193374, Func Offset: 0x84
	// Line 718, Address: 0x19338c, Func Offset: 0x9c
	// Line 721, Address: 0x193394, Func Offset: 0xa4
	// Line 726, Address: 0x1933ec, Func Offset: 0xfc
	// Line 729, Address: 0x1933fc, Func Offset: 0x10c
	// Line 730, Address: 0x193430, Func Offset: 0x140
	// Line 734, Address: 0x193444, Func Offset: 0x154
	// Line 735, Address: 0x19344c, Func Offset: 0x15c
	// Line 738, Address: 0x193450, Func Offset: 0x160
	// Line 739, Address: 0x193474, Func Offset: 0x184
	// Line 741, Address: 0x1934a8, Func Offset: 0x1b8
	// Line 742, Address: 0x1934d0, Func Offset: 0x1e0
	// Line 744, Address: 0x193504, Func Offset: 0x214
	// Line 746, Address: 0x193508, Func Offset: 0x218
	// Line 750, Address: 0x193588, Func Offset: 0x298
	// Line 754, Address: 0x1935d8, Func Offset: 0x2e8
	// Line 755, Address: 0x1935fc, Func Offset: 0x30c
	// Line 756, Address: 0x193614, Func Offset: 0x324
	// Func End, Address: 0x193630, Func Offset: 0x340
}

// 
// Start address: 0x193630
void Se2dManageDataVolumeChange(int sd, float vol)
{
	int i;
	// Line 761, Address: 0x193630, Func Offset: 0
	// Line 764, Address: 0x193638, Func Offset: 0x8
	// Line 765, Address: 0x193644, Func Offset: 0x14
	// Line 766, Address: 0x193678, Func Offset: 0x48
	// Line 767, Address: 0x193684, Func Offset: 0x54
	// Line 769, Address: 0x1936ac, Func Offset: 0x7c
	// Line 770, Address: 0x1936cc, Func Offset: 0x9c
	// Line 772, Address: 0x1936e0, Func Offset: 0xb0
	// Func End, Address: 0x1936f0, Func Offset: 0xc0
}

// 
// Start address: 0x1936f0
float Se2dManageDataTimer(int sd, int clear)
{
	int i;
	// Line 780, Address: 0x1936f0, Func Offset: 0
	// Line 781, Address: 0x1936fc, Func Offset: 0xc
	// Line 782, Address: 0x193730, Func Offset: 0x40
	// Line 783, Address: 0x19374c, Func Offset: 0x5c
	// Line 784, Address: 0x193768, Func Offset: 0x78
	// Line 785, Address: 0x193780, Func Offset: 0x90
	// Func End, Address: 0x193788, Func Offset: 0x98
}

// 
// Start address: 0x193790
void Se3dManager()
{
	int i;
	int room;
	int ret;
	int distance;
	int direction;
	// Line 793, Address: 0x193790, Func Offset: 0
	// Line 800, Address: 0x1937a4, Func Offset: 0x14
	// Line 802, Address: 0x1937b8, Func Offset: 0x28
	// Line 804, Address: 0x1937c4, Func Offset: 0x34
	// Line 805, Address: 0x1937d0, Func Offset: 0x40
	// Line 806, Address: 0x1937f4, Func Offset: 0x64
	// Line 807, Address: 0x19380c, Func Offset: 0x7c
	// Line 808, Address: 0x193824, Func Offset: 0x94
	// Line 810, Address: 0x19382c, Func Offset: 0x9c
	// Line 811, Address: 0x193848, Func Offset: 0xb8
	// Line 812, Address: 0x193870, Func Offset: 0xe0
	// Line 813, Address: 0x1938a4, Func Offset: 0x114
	// Line 815, Address: 0x1938d0, Func Offset: 0x140
	// Line 816, Address: 0x1938f0, Func Offset: 0x160
	// Line 817, Address: 0x1938fc, Func Offset: 0x16c
	// Line 818, Address: 0x193918, Func Offset: 0x188
	// Line 819, Address: 0x193938, Func Offset: 0x1a8
	// Line 821, Address: 0x193950, Func Offset: 0x1c0
	// Line 822, Address: 0x193964, Func Offset: 0x1d4
	// Func End, Address: 0x193980, Func Offset: 0x1f0
}

// 
// Start address: 0x193980
int Se3dControl(int sd_no, float volume, float* pos)
{
	int i;
	// Line 834, Address: 0x193980, Func Offset: 0
	// Line 836, Address: 0x1939a0, Func Offset: 0x20
	// Line 838, Address: 0x1939c0, Func Offset: 0x40
	// Line 839, Address: 0x1939d4, Func Offset: 0x54
	// Line 840, Address: 0x1939e0, Func Offset: 0x60
	// Line 841, Address: 0x193a18, Func Offset: 0x98
	// Line 842, Address: 0x193a30, Func Offset: 0xb0
	// Line 843, Address: 0x193a50, Func Offset: 0xd0
	// Line 844, Address: 0x193a60, Func Offset: 0xe0
	// Line 845, Address: 0x193a64, Func Offset: 0xe4
	// Func End, Address: 0x193a80, Func Offset: 0x100
}

// 
// Start address: 0x193a80
void SeStop(int sd_no)
{
	int i;
	int work;
	// Line 853, Address: 0x193a80, Func Offset: 0
	// Line 857, Address: 0x193a9c, Func Offset: 0x1c
	// Line 859, Address: 0x193ab0, Func Offset: 0x30
	// Line 862, Address: 0x193ab8, Func Offset: 0x38
	// Line 863, Address: 0x193ac8, Func Offset: 0x48
	// Line 864, Address: 0x193ad4, Func Offset: 0x54
	// Line 865, Address: 0x193ae0, Func Offset: 0x60
	// Line 866, Address: 0x193b10, Func Offset: 0x90
	// Line 867, Address: 0x193b30, Func Offset: 0xb0
	// Line 868, Address: 0x193b40, Func Offset: 0xc0
	// Line 870, Address: 0x193b50, Func Offset: 0xd0
	// Line 871, Address: 0x193b60, Func Offset: 0xe0
	// Line 875, Address: 0x193b70, Func Offset: 0xf0
	// Line 876, Address: 0x193b7c, Func Offset: 0xfc
	// Line 877, Address: 0x193ba0, Func Offset: 0x120
	// Line 878, Address: 0x193bac, Func Offset: 0x12c
	// Line 879, Address: 0x193bb0, Func Offset: 0x130
	// Line 880, Address: 0x193bd0, Func Offset: 0x150
	// Line 881, Address: 0x193be4, Func Offset: 0x164
	// Line 882, Address: 0x193be8, Func Offset: 0x168
	// Line 883, Address: 0x193bfc, Func Offset: 0x17c
	// Func End, Address: 0x193c1c, Func Offset: 0x19c
}

// 
// Start address: 0x193c20
void SeBgmChange()
{
	int next;
	int room;
	// Line 946, Address: 0x193c20, Func Offset: 0
	// Line 950, Address: 0x193c2c, Func Offset: 0xc
	// Line 952, Address: 0x193c40, Func Offset: 0x20
	// Line 953, Address: 0x193c54, Func Offset: 0x34
	// Line 954, Address: 0x193c68, Func Offset: 0x48
	// Line 955, Address: 0x193c80, Func Offset: 0x60
	// Line 956, Address: 0x193c90, Func Offset: 0x70
	// Line 957, Address: 0x193c98, Func Offset: 0x78
	// Line 958, Address: 0x193ca0, Func Offset: 0x80
	// Line 959, Address: 0x193ca8, Func Offset: 0x88
	// Line 960, Address: 0x193cb8, Func Offset: 0x98
	// Line 961, Address: 0x193ccc, Func Offset: 0xac
	// Line 962, Address: 0x193cf0, Func Offset: 0xd0
	// Line 966, Address: 0x193cf8, Func Offset: 0xd8
	// Line 968, Address: 0x193d04, Func Offset: 0xe4
	// Line 972, Address: 0x193d34, Func Offset: 0x114
	// Line 973, Address: 0x193d60, Func Offset: 0x140
	// Line 974, Address: 0x193d70, Func Offset: 0x150
	// Line 975, Address: 0x193d84, Func Offset: 0x164
	// Line 976, Address: 0x193d90, Func Offset: 0x170
	// Line 978, Address: 0x193d98, Func Offset: 0x178
	// Line 981, Address: 0x193dac, Func Offset: 0x18c
	// Line 982, Address: 0x193dd0, Func Offset: 0x1b0
	// Line 983, Address: 0x193de4, Func Offset: 0x1c4
	// Line 984, Address: 0x193df4, Func Offset: 0x1d4
	// Line 985, Address: 0x193e08, Func Offset: 0x1e8
	// Line 986, Address: 0x193e14, Func Offset: 0x1f4
	// Line 989, Address: 0x193e1c, Func Offset: 0x1fc
	// Line 990, Address: 0x193e34, Func Offset: 0x214
	// Line 991, Address: 0x193e48, Func Offset: 0x228
	// Line 992, Address: 0x193e54, Func Offset: 0x234
	// Line 995, Address: 0x193e5c, Func Offset: 0x23c
	// Line 996, Address: 0x193e74, Func Offset: 0x254
	// Line 997, Address: 0x193e88, Func Offset: 0x268
	// Line 998, Address: 0x193e94, Func Offset: 0x274
	// Line 1001, Address: 0x193e9c, Func Offset: 0x27c
	// Line 1002, Address: 0x193ec0, Func Offset: 0x2a0
	// Line 1003, Address: 0x193ed4, Func Offset: 0x2b4
	// Line 1004, Address: 0x193ee0, Func Offset: 0x2c0
	// Line 1006, Address: 0x193ee8, Func Offset: 0x2c8
	// Line 1008, Address: 0x193efc, Func Offset: 0x2dc
	// Line 1011, Address: 0x193f10, Func Offset: 0x2f0
	// Line 1012, Address: 0x193f3c, Func Offset: 0x31c
	// Line 1013, Address: 0x193f48, Func Offset: 0x328
	// Line 1016, Address: 0x193f50, Func Offset: 0x330
	// Line 1017, Address: 0x193f64, Func Offset: 0x344
	// Line 1020, Address: 0x193f78, Func Offset: 0x358
	// Line 1021, Address: 0x193f84, Func Offset: 0x364
	// Line 1024, Address: 0x193f8c, Func Offset: 0x36c
	// Line 1025, Address: 0x193fa0, Func Offset: 0x380
	// Line 1028, Address: 0x193fb4, Func Offset: 0x394
	// Line 1029, Address: 0x193fd4, Func Offset: 0x3b4
	// Line 1030, Address: 0x193ff4, Func Offset: 0x3d4
	// Line 1031, Address: 0x194000, Func Offset: 0x3e0
	// Line 1033, Address: 0x194008, Func Offset: 0x3e8
	// Line 1035, Address: 0x19401c, Func Offset: 0x3fc
	// Line 1037, Address: 0x194030, Func Offset: 0x410
	// Line 1039, Address: 0x194044, Func Offset: 0x424
	// Line 1041, Address: 0x194058, Func Offset: 0x438
	// Line 1043, Address: 0x19406c, Func Offset: 0x44c
	// Line 1044, Address: 0x194080, Func Offset: 0x460
	// Line 1047, Address: 0x194094, Func Offset: 0x474
	// Line 1049, Address: 0x1940a8, Func Offset: 0x488
	// Line 1050, Address: 0x1940cc, Func Offset: 0x4ac
	// Line 1051, Address: 0x1940e0, Func Offset: 0x4c0
	// Line 1052, Address: 0x1940ec, Func Offset: 0x4cc
	// Line 1054, Address: 0x1940f4, Func Offset: 0x4d4
	// Line 1055, Address: 0x194108, Func Offset: 0x4e8
	// Line 1056, Address: 0x19411c, Func Offset: 0x4fc
	// Line 1058, Address: 0x194130, Func Offset: 0x510
	// Line 1059, Address: 0x19415c, Func Offset: 0x53c
	// Line 1060, Address: 0x194168, Func Offset: 0x548
	// Line 1062, Address: 0x194170, Func Offset: 0x550
	// Line 1063, Address: 0x194184, Func Offset: 0x564
	// Line 1065, Address: 0x194190, Func Offset: 0x570
	// Line 1066, Address: 0x1941b0, Func Offset: 0x590
	// Line 1067, Address: 0x1941bc, Func Offset: 0x59c
	// Line 1069, Address: 0x1941c4, Func Offset: 0x5a4
	// Line 1070, Address: 0x1941d8, Func Offset: 0x5b8
	// Line 1075, Address: 0x1941ec, Func Offset: 0x5cc
	// Line 1077, Address: 0x194200, Func Offset: 0x5e0
	// Line 1079, Address: 0x19420c, Func Offset: 0x5ec
	// Func End, Address: 0x194220, Func Offset: 0x600
}

// 
// Start address: 0x194220
void SeBgmCall(int bgm_no)
{
	int i;
	int bgm_list[2][43];
	// Line 1135, Address: 0x194220, Func Offset: 0
	// Line 1136, Address: 0x194244, Func Offset: 0x24
	// Line 1137, Address: 0x19424c, Func Offset: 0x2c
	// Line 1139, Address: 0x194264, Func Offset: 0x44
	// Line 1140, Address: 0x194270, Func Offset: 0x50
	// Line 1141, Address: 0x19428c, Func Offset: 0x6c
	// Line 1142, Address: 0x194298, Func Offset: 0x78
	// Line 1143, Address: 0x1942b0, Func Offset: 0x90
	// Line 1144, Address: 0x1942b8, Func Offset: 0x98
	// Line 1146, Address: 0x1942c0, Func Offset: 0xa0
	// Line 1147, Address: 0x1942c4, Func Offset: 0xa4
	// Line 1148, Address: 0x1942d8, Func Offset: 0xb8
	// Line 1149, Address: 0x1942ec, Func Offset: 0xcc
	// Func End, Address: 0x1942f4, Func Offset: 0xd4
}

// 
// Start address: 0x194300
void SeBgmManager()
{
	int j;
	int i;
	int work;
	int out;
	int in;
	float volume;
	float track_fade_time[5];
	int fade_prio[5];
	int bgm_read_check;
	// Line 1172, Address: 0x194300, Func Offset: 0
	// Line 1218, Address: 0x194310, Func Offset: 0x10
	// Line 1219, Address: 0x194330, Func Offset: 0x30
	// Line 1220, Address: 0x19433c, Func Offset: 0x3c
	// Line 1224, Address: 0x194370, Func Offset: 0x70
	// Line 1225, Address: 0x19437c, Func Offset: 0x7c
	// Line 1226, Address: 0x194394, Func Offset: 0x94
	// Line 1227, Address: 0x1943b0, Func Offset: 0xb0
	// Line 1228, Address: 0x1943c0, Func Offset: 0xc0
	// Line 1230, Address: 0x1943c8, Func Offset: 0xc8
	// Line 1231, Address: 0x1943e0, Func Offset: 0xe0
	// Line 1232, Address: 0x1943f4, Func Offset: 0xf4
	// Line 1233, Address: 0x194410, Func Offset: 0x110
	// Line 1234, Address: 0x194418, Func Offset: 0x118
	// Line 1235, Address: 0x194444, Func Offset: 0x144
	// Line 1239, Address: 0x194448, Func Offset: 0x148
	// Line 1243, Address: 0x194468, Func Offset: 0x168
	// Line 1245, Address: 0x194478, Func Offset: 0x178
	// Line 1247, Address: 0x19449c, Func Offset: 0x19c
	// Line 1248, Address: 0x1944a8, Func Offset: 0x1a8
	// Line 1249, Address: 0x1944b4, Func Offset: 0x1b4
	// Line 1250, Address: 0x1944c0, Func Offset: 0x1c0
	// Line 1252, Address: 0x1944cc, Func Offset: 0x1cc
	// Line 1253, Address: 0x1944d8, Func Offset: 0x1d8
	// Line 1254, Address: 0x1944e8, Func Offset: 0x1e8
	// Line 1255, Address: 0x1944fc, Func Offset: 0x1fc
	// Line 1256, Address: 0x19450c, Func Offset: 0x20c
	// Line 1257, Address: 0x194544, Func Offset: 0x244
	// Line 1258, Address: 0x194550, Func Offset: 0x250
	// Line 1260, Address: 0x194558, Func Offset: 0x258
	// Line 1261, Address: 0x194564, Func Offset: 0x264
	// Line 1262, Address: 0x194584, Func Offset: 0x284
	// Line 1263, Address: 0x1945c0, Func Offset: 0x2c0
	// Line 1264, Address: 0x1945e0, Func Offset: 0x2e0
	// Line 1265, Address: 0x194618, Func Offset: 0x318
	// Line 1266, Address: 0x194634, Func Offset: 0x334
	// Line 1267, Address: 0x194674, Func Offset: 0x374
	// Line 1268, Address: 0x19467c, Func Offset: 0x37c
	// Line 1269, Address: 0x194698, Func Offset: 0x398
	// Line 1270, Address: 0x1946ac, Func Offset: 0x3ac
	// Line 1271, Address: 0x1946b4, Func Offset: 0x3b4
	// Line 1273, Address: 0x1946f0, Func Offset: 0x3f0
	// Line 1274, Address: 0x194708, Func Offset: 0x408
	// Line 1275, Address: 0x194718, Func Offset: 0x418
	// Line 1278, Address: 0x194728, Func Offset: 0x428
	// Line 1279, Address: 0x19473c, Func Offset: 0x43c
	// Line 1282, Address: 0x194740, Func Offset: 0x440
	// Line 1283, Address: 0x19474c, Func Offset: 0x44c
	// Line 1284, Address: 0x19476c, Func Offset: 0x46c
	// Line 1285, Address: 0x194788, Func Offset: 0x488
	// Line 1286, Address: 0x1947a4, Func Offset: 0x4a4
	// Line 1288, Address: 0x1947f0, Func Offset: 0x4f0
	// Line 1289, Address: 0x194820, Func Offset: 0x520
	// Line 1290, Address: 0x194834, Func Offset: 0x534
	// Line 1291, Address: 0x194844, Func Offset: 0x544
	// Line 1292, Address: 0x194848, Func Offset: 0x548
	// Line 1293, Address: 0x19487c, Func Offset: 0x57c
	// Line 1294, Address: 0x1948a0, Func Offset: 0x5a0
	// Line 1295, Address: 0x1948bc, Func Offset: 0x5bc
	// Line 1296, Address: 0x1948d4, Func Offset: 0x5d4
	// Line 1298, Address: 0x194920, Func Offset: 0x620
	// Line 1299, Address: 0x19494c, Func Offset: 0x64c
	// Line 1300, Address: 0x19495c, Func Offset: 0x65c
	// Line 1301, Address: 0x19496c, Func Offset: 0x66c
	// Line 1302, Address: 0x194970, Func Offset: 0x670
	// Line 1303, Address: 0x1949a4, Func Offset: 0x6a4
	// Line 1313, Address: 0x1949a8, Func Offset: 0x6a8
	// Line 1315, Address: 0x1949bc, Func Offset: 0x6bc
	// Line 1320, Address: 0x194a14, Func Offset: 0x714
	// Line 1323, Address: 0x194a24, Func Offset: 0x724
	// Line 1324, Address: 0x194a58, Func Offset: 0x758
	// Line 1328, Address: 0x194a6c, Func Offset: 0x76c
	// Line 1332, Address: 0x194a74, Func Offset: 0x774
	// Line 1333, Address: 0x194a8c, Func Offset: 0x78c
	// Line 1334, Address: 0x194abc, Func Offset: 0x7bc
	// Line 1335, Address: 0x194aec, Func Offset: 0x7ec
	// Line 1336, Address: 0x194b04, Func Offset: 0x804
	// Line 1337, Address: 0x194b34, Func Offset: 0x834
	// Line 1339, Address: 0x194b64, Func Offset: 0x864
	// Func End, Address: 0x194b7c, Func Offset: 0x87c
}

// 
// Start address: 0x194b80
int BgmPageSet()
{
	int ret;
	SubCharacter* scp;
	// Line 1346, Address: 0x194b80, Func Offset: 0
	// Line 1350, Address: 0x194b8c, Func Offset: 0xc
	// Line 1351, Address: 0x194bbc, Func Offset: 0x3c
	// Line 1352, Address: 0x194bd0, Func Offset: 0x50
	// Line 1353, Address: 0x194bd4, Func Offset: 0x54
	// Line 1355, Address: 0x194bec, Func Offset: 0x6c
	// Line 1357, Address: 0x194c04, Func Offset: 0x84
	// Line 1358, Address: 0x194c0c, Func Offset: 0x8c
	// Line 1359, Address: 0x194c14, Func Offset: 0x94
	// Line 1365, Address: 0x194c98, Func Offset: 0x118
	// Line 1366, Address: 0x194ca0, Func Offset: 0x120
	// Line 1367, Address: 0x194ca8, Func Offset: 0x128
	// Line 1369, Address: 0x194cbc, Func Offset: 0x13c
	// Line 1370, Address: 0x194cf4, Func Offset: 0x174
	// Line 1372, Address: 0x194d00, Func Offset: 0x180
	// Line 1373, Address: 0x194d04, Func Offset: 0x184
	// Func End, Address: 0x194d18, Func Offset: 0x198
}

// 
// Start address: 0x194d20
void SeMasterVolumeChange()
{
	// Line 1380, Address: 0x194d20, Func Offset: 0
	// Line 1381, Address: 0x194d28, Func Offset: 0x8
	// Line 1382, Address: 0x194d3c, Func Offset: 0x1c
	// Line 1383, Address: 0x194d5c, Func Offset: 0x3c
	// Line 1384, Address: 0x194d7c, Func Offset: 0x5c
	// Func End, Address: 0x194d8c, Func Offset: 0x6c
}

// 
// Start address: 0x194d90
int SeChange2Dto3D(int se)
{
	int i;
	// Line 1540, Address: 0x194d90, Func Offset: 0
	// Line 1542, Address: 0x194dac, Func Offset: 0x1c
	// Line 1543, Address: 0x194db8, Func Offset: 0x28
	// Line 1544, Address: 0x194de0, Func Offset: 0x50
	// Line 1546, Address: 0x194e24, Func Offset: 0x94
	// Line 1547, Address: 0x194e28, Func Offset: 0x98
	// Func End, Address: 0x194e30, Func Offset: 0xa0
}

// 
// Start address: 0x194e30
int SeChange3Dto2D(int se)
{
	int i;
	// Line 1555, Address: 0x194e30, Func Offset: 0
	// Line 1557, Address: 0x194e4c, Func Offset: 0x1c
	// Line 1558, Address: 0x194e58, Func Offset: 0x28
	// Line 1560, Address: 0x194ea4, Func Offset: 0x74
	// Line 1561, Address: 0x194ea8, Func Offset: 0x78
	// Func End, Address: 0x194eb0, Func Offset: 0x80
}

