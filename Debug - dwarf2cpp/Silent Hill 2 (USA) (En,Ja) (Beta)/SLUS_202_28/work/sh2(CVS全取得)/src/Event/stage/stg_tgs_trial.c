typedef struct SubCharacter;
typedef union fsFile;
typedef struct fsMgcFile;
typedef struct _AnimeInfo;
typedef struct _VC_CIR_CAM_MANAGER;
typedef struct Event_List;
typedef struct _anon0;
typedef struct shSkelton;
typedef struct _VC_FIX_ANG_CAM_PARAM;
typedef struct _VC_THROUGH_DOOR_CAM_PARAM;
typedef struct Item_List;
typedef struct shPlayerWork;
typedef struct _VC_LOCUS_CIRCLE_CAM_PARAM;
typedef union fsFileIndex;
typedef struct PicDraw_Data;
typedef struct _SH2_SYS;
typedef struct _anon1;
typedef struct sh2gfw_AREA_HEAD;
typedef struct shBattleFight;
typedef struct Model_List;
typedef struct _VC_ROAD_AREA;
typedef struct shBattleShot;
typedef struct Item;
typedef struct _VC_WORK;
typedef struct shBattleArea;
typedef struct _VC_ROAD_DATA;
typedef struct Enemy_List;
typedef struct shBattleInfo;
typedef struct _anon2;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct Pad_KeyConfig;
typedef struct _anon3;
typedef union _anon4;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct Stage_Data;
typedef struct _CL_VHIT_CHARA;
typedef struct _anon5;
typedef struct PAD_3D;
typedef union _anon6;
typedef struct CharaData_DemoList;
typedef struct _CL_VHIT_RESULT;
typedef struct _VC_WATCH_MV_PARAM;
typedef union _anon7;
typedef struct fsCdFile;
typedef struct PAD_2D;
typedef struct _VC_CAM_MV_PARAM;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct _VC_NEAR_ROAD_DATA;
typedef struct DramaDemo_MessageTime;
typedef struct PAD_INFO;
typedef struct _anon8;
typedef enum _VC_FLAGS : unsigned short;
typedef struct _VC_LIMIT_AREA;
typedef struct fsMgfFile;
typedef struct DramaDemo_PlayInfo;
typedef struct _VC_CHASE_CAM_PARAM;
typedef struct fsHdFile;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _VC_FIX_CAM_MANAGER;
typedef struct fsMgpFile;
typedef struct _VC_SETTLE_CAM_PARAM;

typedef void(*type_18)();
typedef int(*type_20)();
typedef void(*type_87)(SubCharacter*);
typedef void(*type_91)(SubCharacter*);

typedef float type_0[4];
typedef float type_1[4][4];
typedef unsigned char type_2[4];
typedef fsFileIndex type_3[1];
typedef unsigned char type_4[4];
typedef Enemy_List type_5[1];
typedef _AnimeInfo type_6[24];
typedef int type_7[2];
typedef int type_8[2][4];
typedef unsigned char type_9[2];
typedef unsigned char type_10[2];
typedef _AnimeInfo type_11[5];
typedef unsigned char type_12[2];
typedef unsigned char type_13[2][2];
typedef unsigned char type_14[2][2][5];
typedef unsigned int type_15[8];
typedef unsigned char type_16[14];
typedef float type_17[4];
typedef fsFileIndex type_19[1];
typedef float type_21[2];
typedef float type_22[2][3];
typedef fsFileIndex type_23[1];
typedef unsigned char type_24[4];
typedef _AnimeInfo type_25[20];
typedef float type_26[2][3][5];
typedef unsigned char type_27[4][10];
typedef unsigned int type_28[2];
typedef char type_29[24091];
typedef unsigned short type_30[11];
typedef _AnimeInfo type_31[33];
typedef fsFileIndex type_32[1];
typedef fsFileIndex type_33[1];
typedef unsigned char type_34[97];
typedef int type_35[2];
typedef int type_36[2][4];
typedef int type_37[2][4][10];
typedef unsigned short type_38[3];
typedef unsigned char type_39[1240];
typedef fsFileIndex type_40[1];
typedef _AnimeInfo type_41[11];
typedef _AnimeInfo type_42[30];
typedef fsFileIndex type_43[1];
typedef unsigned char type_44[3];
typedef unsigned int type_45[255];
typedef unsigned char type_46[16];
typedef fsFileIndex type_47[1];
typedef unsigned int type_48[32];
typedef unsigned char type_49[4];
typedef short type_50[2];
typedef fsFileIndex type_51[1];
typedef short type_52[2][5];
typedef char type_53[4];
typedef _AnimeInfo type_54[17];
typedef unsigned char type_55[2];
typedef CharaData_DemoList type_56[4];
typedef char type_57[4];
typedef char type_58[4];
typedef unsigned char type_59[20];
typedef int type_60[6];
typedef char type_61[4];
typedef fsFileIndex type_62[1];
typedef _AnimeInfo type_63[34];
typedef char type_64[4];
typedef Model_List type_65[5];
typedef _AnimeInfo type_66[17];
typedef short type_67[4];
typedef short type_68[4][4];
typedef short type_69[4][4][9];
typedef fsFileIndex type_70[1];
typedef Event_List type_71[119];
typedef float type_72[4];
typedef _AnimeInfo type_73[17];
typedef float type_74[4][4];
typedef short type_75[2];
typedef short type_76[2][4];
typedef unsigned char type_77[14];
typedef short type_78[2][4][9];
typedef shAttackInfo type_79[66];
typedef fsFileIndex type_80[1];
typedef PAD_INFO type_81[10];
typedef int(*type_82)()[17];
typedef _VC_NEAR_ROAD_DATA type_83[128];
typedef float type_84[2];
typedef _AnimeInfo type_85[33];
typedef fsFileIndex type_86[1];
typedef float type_88[4];
typedef unsigned char type_89[69];
typedef float type_90[4][2];
typedef int type_92[4];
typedef int type_93[4][4];
typedef unsigned char type_94[4];

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
	_anon5 pos;
	_anon5 rot;
	_anon5 pos_spd;
	_anon5 rot_spd;
	_anon8 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon5 b_pos;
	_anon5 b_rot;
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

union fsFile
{
	_anon0 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
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

struct _VC_CIR_CAM_MANAGER
{
	float origin[4];
	float sw_l[4];
};

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct _anon0
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon8 src_m;
	_anon5 src_t;
	_anon8 des_m;
	_anon5 des_t;
	_anon5 axis;
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

struct _VC_FIX_ANG_CAM_PARAM
{
	float ang_x;
	float ang_y;
	float ofs_hy;
	float cam2wth_dist;
};

struct _VC_THROUGH_DOOR_CAM_PARAM
{
	int active_f;
	float timer;
	float rail_ang_y;
	float rail_sta_pos[4];
	float rail_sta_to_chara_dist;
};

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon5 dist_rot;
	_anon5 dist_pos;
	_anon5 pos;
	_anon5 rot;
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
	_anon5 tgt_body_angle;
	_anon5 tgt_neck_angle;
	_anon5 tgt_arms_angle;
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

struct _VC_LOCUS_CIRCLE_CAM_PARAM
{
	float origin_x;
	float origin_z;
	float ang_y;
	float radius;
};

union fsFileIndex
{
	_anon1 index;
	unsigned long pack;
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

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct _anon1
{
	fsFile* fp;
	char* name;
};

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
};

struct shBattleFight
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct Item
{
	unsigned int flag[2];
	unsigned short number[11];
	unsigned char light_switch;
	unsigned char radio_switch;
	unsigned char radio_volume;
	unsigned char equip;
	float ampoule_efficacy;
	unsigned short event_use[3];
	unsigned short short_pad;
	unsigned char last_cursor;
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

struct shBattleArea
{
	float center;
	float radius;
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

struct _anon2
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
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

struct _anon3
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

union _anon4
{
	unsigned char data[16];
	_VC_CHASE_CAM_PARAM chs;
	_VC_SETTLE_CAM_PARAM stl;
	_VC_FIX_ANG_CAM_PARAM fix;
	_VC_LOCUS_CIRCLE_CAM_PARAM cir;
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
	_anon6 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
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
	_anon2* gfw_func;
	int(*chara_data_clear)();
	void(*sound_call_after_load)();
	int reserve_11;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct _anon5
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

union _anon6
{
	shBattleFight fight;
	shBattleShot shot;
};

struct CharaData_DemoList
{
	int kind;
	fsFileIndex* model;
	fsFileIndex* animation;
	fsFileIndex* shadow;
	fsFileIndex* cluster;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon7 hobj;
};

struct _VC_WATCH_MV_PARAM
{
	float ang_accel_x;
	float ang_accel_y;
	float max_ang_spd_x;
	float max_ang_spd_y;
};

union _anon7
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct _VC_CAM_MV_PARAM
{
	float accel_xz;
	float accel_y;
	float max_spd_xz;
	float max_spd_y;
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

struct DramaDemo_MessageTime
{
	unsigned short start;
	unsigned short end;
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

struct _anon8
{
	float d[4][4];
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

struct _VC_LIMIT_AREA
{
	float min_hx;
	float max_hx;
	float min_hz;
	float max_hz;
	float min_hy;
	float max_hy;
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

struct _VC_CHASE_CAM_PARAM
{
	float ofs_hy;
	float ratio_r_xz;
	float lr_lim_ang_y;
	float rr_lim_ang_y;
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

struct _VC_FIX_CAM_MANAGER
{
	int exception_f;
	float add_ang_y;
	float add_rd_x;
	float add_rd_z;
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

struct _VC_SETTLE_CAM_PARAM
{
	float sta_base_ang_y;
	float end_base_ang_y;
	float lr_lim_ang_y;
	float rr_lim_ang_y;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo pjames_anim[34];
_AnimeInfo pjames_hg_anim[11];
_AnimeInfo pjames_sg_anim[17];
_AnimeInfo pjames_rg_anim[5];
_AnimeInfo pjames_sp_anim[17];
_AnimeInfo pjames_ka_anim[33];
_AnimeInfo pjames_pi_anim[33];
_AnimeInfo pjames_na_anim[17];
_AnimeInfo pjames_cs_anim[24];
_AnimeInfo pjames_demo_anim[30];
_AnimeInfo pjames_stage_anim[20];
unsigned char ev_pos[1240];
Event_List ev_list[119];
char dds_tsuri[24091];
int(*ev_prog)()[17];
Model_List mdl_list[5];
Enemy_List en_list[1];
Stage_Data stage_tgs_trial;
float fly_pos[4];
float wheel_pos_e[4];
float wheel_pos_w[4];
float ev_timer;
Pad_KeyConfig key_config;
int ev_s_step;
int ev_p_step;
fsFileIndex data_pic_etc_cesa_tex[1];
int s11_ton;
_anon3 game_flag;
Item item;
_SH2_SYS Sh2sys;
shPlayerWork sh2jms;
char* layer_adr;
fsFileIndex data_pic_hsp_p_boxnumber_2_tex[1];
fsFileIndex data_pic_hsp_p_boxnumber_tex[1];
int ev_prog_flag_set;
int ev_cancel;
float cyl_alp;
unsigned char number_tex;
unsigned char lapis_tex;
fsFileIndex data_pic_hsp_p_hair_hair_tex[1];
fsFileIndex data_pic_hsp_p_hair_tex[1];
float ev_cursor_y;
float ev_cursor_x;
fsFileIndex data_pic_hsp_pboxkey01_tex[1];
fsFileIndex data_pic_hsp_p_box_tex[1];
fsFileIndex data_pic_hsp_p_drainage_key_tex[1];
fsFileIndex data_pic_hsp_p_drainage_tex[1];
fsFileIndex data_pic_hsp_p_doctormemo_key_tex[1];
fsFileIndex data_pic_hsp_p_doctormemo_tex[1];
fsFileIndex data_pic_hsp_p_h_elevator_botan_tex[1];
fsFileIndex data_pic_hsp_p_h_elevator_tex[1];
float s11_timer;
float office_3d_rot;
float office_3d_timer;
_VC_WORK vcWork;
short c_y;
short c_x;

int EvProgTrialStartSet();
int EvProgGetHospitalMap();
int EvProgGetNeedle();
int EvProgGuruguruNumber();
int EvProgLouiseTakecare();
int EvProgBoxWithKey();
int EvProgBoxWithKeyLayer();
int EvProgBoxWithKeyCursor();
int EvProgBoxWithKeyOpen(int alp);
int EvProgEmptyBox();
int EvProgOnlyNeedle();
int EvProgOnlyHair();
int EvProgInShowerDrain();
int EvProgFishKey();
int EvProgDoctorMemo1st();
int EvProgDoctorMemo2nd();
int EvProgUseElevatorKey();
int EvProgElevatorButton();
int EvProgElevatorButtonCheck();
int EvProgElevatorButtonLight();
int EvProgTrialEnd();
void EvRoomInit();
void EvAllTimeFunc();

// 
// Start address: 0x248090
int EvProgTrialStartSet()
{
	float dummy[4];
	// Line 185, Address: 0x248090, Func Offset: 0
	// Line 186, Address: 0x248098, Func Offset: 0x8
	// Line 188, Address: 0x2480ac, Func Offset: 0x1c
	// Line 190, Address: 0x2480c0, Func Offset: 0x30
	// Line 195, Address: 0x2480fc, Func Offset: 0x6c
	// Line 196, Address: 0x248108, Func Offset: 0x78
	// Line 197, Address: 0x248114, Func Offset: 0x84
	// Line 198, Address: 0x248120, Func Offset: 0x90
	// Line 199, Address: 0x24812c, Func Offset: 0x9c
	// Line 200, Address: 0x248138, Func Offset: 0xa8
	// Line 213, Address: 0x248144, Func Offset: 0xb4
	// Line 214, Address: 0x248150, Func Offset: 0xc0
	// Line 215, Address: 0x24815c, Func Offset: 0xcc
	// Line 216, Address: 0x248168, Func Offset: 0xd8
	// Line 217, Address: 0x248174, Func Offset: 0xe4
	// Line 218, Address: 0x248180, Func Offset: 0xf0
	// Line 219, Address: 0x24818c, Func Offset: 0xfc
	// Line 221, Address: 0x248198, Func Offset: 0x108
	// Line 222, Address: 0x2481b0, Func Offset: 0x120
	// Line 223, Address: 0x2481bc, Func Offset: 0x12c
	// Line 224, Address: 0x2481c4, Func Offset: 0x134
	// Line 225, Address: 0x2481d0, Func Offset: 0x140
	// Line 227, Address: 0x2481d8, Func Offset: 0x148
	// Line 228, Address: 0x2481ec, Func Offset: 0x15c
	// Line 229, Address: 0x248200, Func Offset: 0x170
	// Line 230, Address: 0x248214, Func Offset: 0x184
	// Line 231, Address: 0x248228, Func Offset: 0x198
	// Line 232, Address: 0x24823c, Func Offset: 0x1ac
	// Line 233, Address: 0x248250, Func Offset: 0x1c0
	// Line 234, Address: 0x248264, Func Offset: 0x1d4
	// Line 235, Address: 0x248278, Func Offset: 0x1e8
	// Line 236, Address: 0x248290, Func Offset: 0x200
	// Line 237, Address: 0x2482a8, Func Offset: 0x218
	// Line 238, Address: 0x2482c0, Func Offset: 0x230
	// Line 239, Address: 0x2482d8, Func Offset: 0x248
	// Line 240, Address: 0x2482f0, Func Offset: 0x260
	// Line 241, Address: 0x248308, Func Offset: 0x278
	// Line 242, Address: 0x24831c, Func Offset: 0x28c
	// Line 243, Address: 0x248334, Func Offset: 0x2a4
	// Line 244, Address: 0x24834c, Func Offset: 0x2bc
	// Line 245, Address: 0x248364, Func Offset: 0x2d4
	// Line 246, Address: 0x248378, Func Offset: 0x2e8
	// Line 247, Address: 0x248390, Func Offset: 0x300
	// Line 248, Address: 0x2483a4, Func Offset: 0x314
	// Line 249, Address: 0x2483b8, Func Offset: 0x328
	// Line 250, Address: 0x2483cc, Func Offset: 0x33c
	// Line 251, Address: 0x2483e0, Func Offset: 0x350
	// Line 252, Address: 0x2483f4, Func Offset: 0x364
	// Line 253, Address: 0x248408, Func Offset: 0x378
	// Line 254, Address: 0x24841c, Func Offset: 0x38c
	// Line 255, Address: 0x248430, Func Offset: 0x3a0
	// Line 256, Address: 0x248444, Func Offset: 0x3b4
	// Line 257, Address: 0x248458, Func Offset: 0x3c8
	// Line 258, Address: 0x24846c, Func Offset: 0x3dc
	// Line 259, Address: 0x248480, Func Offset: 0x3f0
	// Line 260, Address: 0x248494, Func Offset: 0x404
	// Line 261, Address: 0x2484a8, Func Offset: 0x418
	// Line 262, Address: 0x2484bc, Func Offset: 0x42c
	// Line 263, Address: 0x2484d4, Func Offset: 0x444
	// Line 264, Address: 0x2484e8, Func Offset: 0x458
	// Line 265, Address: 0x2484fc, Func Offset: 0x46c
	// Line 266, Address: 0x248510, Func Offset: 0x480
	// Line 267, Address: 0x248524, Func Offset: 0x494
	// Line 268, Address: 0x248538, Func Offset: 0x4a8
	// Line 269, Address: 0x24854c, Func Offset: 0x4bc
	// Line 270, Address: 0x248560, Func Offset: 0x4d0
	// Line 271, Address: 0x248574, Func Offset: 0x4e4
	// Line 272, Address: 0x248588, Func Offset: 0x4f8
	// Line 273, Address: 0x24859c, Func Offset: 0x50c
	// Line 275, Address: 0x2485b4, Func Offset: 0x524
	// Line 277, Address: 0x2485cc, Func Offset: 0x53c
	// Line 281, Address: 0x2485e0, Func Offset: 0x550
	// Line 284, Address: 0x2485e8, Func Offset: 0x558
	// Line 287, Address: 0x248608, Func Offset: 0x578
	// Line 288, Address: 0x24861c, Func Offset: 0x58c
	// Line 291, Address: 0x248624, Func Offset: 0x594
	// Line 292, Address: 0x248640, Func Offset: 0x5b0
	// Line 293, Address: 0x248648, Func Offset: 0x5b8
	// Line 294, Address: 0x248650, Func Offset: 0x5c0
	// Line 295, Address: 0x248658, Func Offset: 0x5c8
	// Line 301, Address: 0x2486b0, Func Offset: 0x620
	// Line 304, Address: 0x2486bc, Func Offset: 0x62c
	// Line 305, Address: 0x2486c0, Func Offset: 0x630
	// Func End, Address: 0x2486d0, Func Offset: 0x640
}

// 
// Start address: 0x2486d0
int EvProgGetHospitalMap()
{
	// Line 314, Address: 0x2486d0, Func Offset: 0
	// Line 315, Address: 0x2486d4, Func Offset: 0x4
	// Func End, Address: 0x2486dc, Func Offset: 0xc
}

// 
// Start address: 0x2486e0
int EvProgGetNeedle()
{
	// Line 321, Address: 0x2486e0, Func Offset: 0
	// Line 322, Address: 0x2486e8, Func Offset: 0x8
	// Line 323, Address: 0x2486f8, Func Offset: 0x18
	// Func End, Address: 0x248708, Func Offset: 0x28
}

// 
// Start address: 0x248710
int EvProgGuruguruNumber()
{
	int i;
	int no;
	PicDraw_Data pic;
	short tex[4][4][9];
	short pos[2][4][9];
	// Line 329, Address: 0x248710, Func Offset: 0
	// Line 363, Address: 0x248720, Func Offset: 0x10
	// Line 365, Address: 0x248780, Func Offset: 0x70
	// Line 366, Address: 0x248794, Func Offset: 0x84
	// Line 367, Address: 0x2487c4, Func Offset: 0xb4
	// Line 368, Address: 0x2487d8, Func Offset: 0xc8
	// Line 371, Address: 0x2487e0, Func Offset: 0xd0
	// Line 372, Address: 0x2487f4, Func Offset: 0xe4
	// Line 373, Address: 0x248804, Func Offset: 0xf4
	// Line 374, Address: 0x24880c, Func Offset: 0xfc
	// Line 375, Address: 0x248820, Func Offset: 0x110
	// Line 376, Address: 0x24883c, Func Offset: 0x12c
	// Line 379, Address: 0x248844, Func Offset: 0x134
	// Line 383, Address: 0x248868, Func Offset: 0x158
	// Line 384, Address: 0x24887c, Func Offset: 0x16c
	// Line 389, Address: 0x248884, Func Offset: 0x174
	// Line 390, Address: 0x24888c, Func Offset: 0x17c
	// Line 391, Address: 0x248894, Func Offset: 0x184
	// Line 393, Address: 0x2488b0, Func Offset: 0x1a0
	// Line 395, Address: 0x2488c0, Func Offset: 0x1b0
	// Line 396, Address: 0x2488e8, Func Offset: 0x1d8
	// Line 397, Address: 0x2488f0, Func Offset: 0x1e0
	// Line 398, Address: 0x24891c, Func Offset: 0x20c
	// Line 399, Address: 0x248928, Func Offset: 0x218
	// Line 403, Address: 0x248938, Func Offset: 0x228
	// Line 406, Address: 0x2489f4, Func Offset: 0x2e4
	// Line 407, Address: 0x248a28, Func Offset: 0x318
	// Line 408, Address: 0x248a34, Func Offset: 0x324
	// Line 409, Address: 0x248a44, Func Offset: 0x334
	// Line 410, Address: 0x248a60, Func Offset: 0x350
	// Line 411, Address: 0x248a68, Func Offset: 0x358
	// Line 412, Address: 0x248a7c, Func Offset: 0x36c
	// Line 413, Address: 0x248a98, Func Offset: 0x388
	// Line 414, Address: 0x248aac, Func Offset: 0x39c
	// Line 415, Address: 0x248ab4, Func Offset: 0x3a4
	// Line 416, Address: 0x248ac0, Func Offset: 0x3b0
	// Line 418, Address: 0x248ad4, Func Offset: 0x3c4
	// Line 419, Address: 0x248ae8, Func Offset: 0x3d8
	// Line 420, Address: 0x248af0, Func Offset: 0x3e0
	// Line 422, Address: 0x248b00, Func Offset: 0x3f0
	// Line 424, Address: 0x248b14, Func Offset: 0x404
	// Line 427, Address: 0x248b1c, Func Offset: 0x40c
	// Line 428, Address: 0x248b30, Func Offset: 0x420
	// Line 430, Address: 0x248b3c, Func Offset: 0x42c
	// Line 431, Address: 0x248b40, Func Offset: 0x430
	// Func End, Address: 0x248b58, Func Offset: 0x448
}

// 
// Start address: 0x248b60
int EvProgLouiseTakecare()
{
	// Line 437, Address: 0x248b60, Func Offset: 0
	// Line 438, Address: 0x248b68, Func Offset: 0x8
	// Line 440, Address: 0x248ba4, Func Offset: 0x44
	// Line 441, Address: 0x248bd4, Func Offset: 0x74
	// Line 442, Address: 0x248be8, Func Offset: 0x88
	// Line 443, Address: 0x248bfc, Func Offset: 0x9c
	// Line 446, Address: 0x248c04, Func Offset: 0xa4
	// Line 447, Address: 0x248c18, Func Offset: 0xb8
	// Line 448, Address: 0x248c28, Func Offset: 0xc8
	// Line 449, Address: 0x248c30, Func Offset: 0xd0
	// Line 450, Address: 0x248c44, Func Offset: 0xe4
	// Line 452, Address: 0x248c60, Func Offset: 0x100
	// Line 455, Address: 0x248c68, Func Offset: 0x108
	// Line 456, Address: 0x248c7c, Func Offset: 0x11c
	// Line 457, Address: 0x248c90, Func Offset: 0x130
	// Line 460, Address: 0x248c98, Func Offset: 0x138
	// Line 461, Address: 0x248cac, Func Offset: 0x14c
	// Line 463, Address: 0x248cb8, Func Offset: 0x158
	// Line 464, Address: 0x248cbc, Func Offset: 0x15c
	// Func End, Address: 0x248ccc, Func Offset: 0x16c
}

// 
// Start address: 0x248cd0
int EvProgBoxWithKey()
{
	// Line 474, Address: 0x248cd0, Func Offset: 0
	// Line 475, Address: 0x248cd8, Func Offset: 0x8
	// Line 477, Address: 0x248d08, Func Offset: 0x38
	// Line 478, Address: 0x248d30, Func Offset: 0x60
	// Line 479, Address: 0x248d3c, Func Offset: 0x6c
	// Line 480, Address: 0x248d50, Func Offset: 0x80
	// Line 481, Address: 0x248d60, Func Offset: 0x90
	// Line 482, Address: 0x248d74, Func Offset: 0xa4
	// Line 485, Address: 0x248d7c, Func Offset: 0xac
	// Line 489, Address: 0x248da0, Func Offset: 0xd0
	// Line 490, Address: 0x248db8, Func Offset: 0xe8
	// Line 491, Address: 0x248dcc, Func Offset: 0xfc
	// Line 492, Address: 0x248de4, Func Offset: 0x114
	// Line 494, Address: 0x248e00, Func Offset: 0x130
	// Line 497, Address: 0x248e08, Func Offset: 0x138
	// Line 498, Address: 0x248e10, Func Offset: 0x140
	// Line 499, Address: 0x248e18, Func Offset: 0x148
	// Line 500, Address: 0x248e20, Func Offset: 0x150
	// Line 501, Address: 0x248e28, Func Offset: 0x158
	// Line 502, Address: 0x248e30, Func Offset: 0x160
	// Line 504, Address: 0x248e58, Func Offset: 0x188
	// Line 505, Address: 0x248e6c, Func Offset: 0x19c
	// Line 506, Address: 0x248ea0, Func Offset: 0x1d0
	// Line 508, Address: 0x248eb4, Func Offset: 0x1e4
	// Line 511, Address: 0x248ebc, Func Offset: 0x1ec
	// Line 512, Address: 0x248ec4, Func Offset: 0x1f4
	// Line 513, Address: 0x248ecc, Func Offset: 0x1fc
	// Line 514, Address: 0x248ed4, Func Offset: 0x204
	// Line 515, Address: 0x248edc, Func Offset: 0x20c
	// Line 516, Address: 0x248ee4, Func Offset: 0x214
	// Line 517, Address: 0x248ef8, Func Offset: 0x228
	// Line 518, Address: 0x248f00, Func Offset: 0x230
	// Line 519, Address: 0x248f08, Func Offset: 0x238
	// Line 521, Address: 0x248f1c, Func Offset: 0x24c
	// Line 524, Address: 0x248f24, Func Offset: 0x254
	// Line 525, Address: 0x248f2c, Func Offset: 0x25c
	// Line 526, Address: 0x248f34, Func Offset: 0x264
	// Line 527, Address: 0x248f3c, Func Offset: 0x26c
	// Line 528, Address: 0x248f44, Func Offset: 0x274
	// Line 529, Address: 0x248f50, Func Offset: 0x280
	// Line 530, Address: 0x248f58, Func Offset: 0x288
	// Line 534, Address: 0x248fb8, Func Offset: 0x2e8
	// Line 535, Address: 0x248fcc, Func Offset: 0x2fc
	// Line 536, Address: 0x248fe4, Func Offset: 0x314
	// Line 537, Address: 0x248ff8, Func Offset: 0x328
	// Line 539, Address: 0x24901c, Func Offset: 0x34c
	// Line 541, Address: 0x249030, Func Offset: 0x360
	// Line 544, Address: 0x249038, Func Offset: 0x368
	// Line 545, Address: 0x249040, Func Offset: 0x370
	// Line 546, Address: 0x249048, Func Offset: 0x378
	// Line 547, Address: 0x249050, Func Offset: 0x380
	// Line 548, Address: 0x24905c, Func Offset: 0x38c
	// Line 549, Address: 0x249064, Func Offset: 0x394
	// Line 550, Address: 0x249090, Func Offset: 0x3c0
	// Line 551, Address: 0x2490a8, Func Offset: 0x3d8
	// Line 552, Address: 0x2490c0, Func Offset: 0x3f0
	// Line 553, Address: 0x2490dc, Func Offset: 0x40c
	// Line 555, Address: 0x2490f0, Func Offset: 0x420
	// Line 558, Address: 0x2490f8, Func Offset: 0x428
	// Line 559, Address: 0x249100, Func Offset: 0x430
	// Line 560, Address: 0x249108, Func Offset: 0x438
	// Line 561, Address: 0x249110, Func Offset: 0x440
	// Line 564, Address: 0x249148, Func Offset: 0x478
	// Line 566, Address: 0x24915c, Func Offset: 0x48c
	// Line 569, Address: 0x249164, Func Offset: 0x494
	// Line 572, Address: 0x249188, Func Offset: 0x4b8
	// Line 574, Address: 0x249190, Func Offset: 0x4c0
	// Line 576, Address: 0x2491a4, Func Offset: 0x4d4
	// Line 579, Address: 0x2491ac, Func Offset: 0x4dc
	// Line 580, Address: 0x2491b4, Func Offset: 0x4e4
	// Line 581, Address: 0x2491bc, Func Offset: 0x4ec
	// Line 582, Address: 0x2491c8, Func Offset: 0x4f8
	// Line 583, Address: 0x2491d0, Func Offset: 0x500
	// Line 584, Address: 0x249208, Func Offset: 0x538
	// Line 585, Address: 0x24921c, Func Offset: 0x54c
	// Line 588, Address: 0x249224, Func Offset: 0x554
	// Line 589, Address: 0x24922c, Func Offset: 0x55c
	// Line 590, Address: 0x249234, Func Offset: 0x564
	// Line 591, Address: 0x249240, Func Offset: 0x570
	// Line 592, Address: 0x249248, Func Offset: 0x578
	// Line 593, Address: 0x249250, Func Offset: 0x580
	// Line 594, Address: 0x249278, Func Offset: 0x5a8
	// Line 597, Address: 0x249280, Func Offset: 0x5b0
	// Line 598, Address: 0x24929c, Func Offset: 0x5cc
	// Line 599, Address: 0x2492b8, Func Offset: 0x5e8
	// Line 600, Address: 0x2492c0, Func Offset: 0x5f0
	// Line 602, Address: 0x2492d4, Func Offset: 0x604
	// Line 603, Address: 0x2492dc, Func Offset: 0x60c
	// Line 604, Address: 0x2492e4, Func Offset: 0x614
	// Line 606, Address: 0x249320, Func Offset: 0x650
	// Line 607, Address: 0x249328, Func Offset: 0x658
	// Line 610, Address: 0x249330, Func Offset: 0x660
	// Line 611, Address: 0x249338, Func Offset: 0x668
	// Line 612, Address: 0x249340, Func Offset: 0x670
	// Line 613, Address: 0x249348, Func Offset: 0x678
	// Line 614, Address: 0x249350, Func Offset: 0x680
	// Line 616, Address: 0x249368, Func Offset: 0x698
	// Line 617, Address: 0x24937c, Func Offset: 0x6ac
	// Line 619, Address: 0x249390, Func Offset: 0x6c0
	// Line 622, Address: 0x249398, Func Offset: 0x6c8
	// Line 623, Address: 0x2493a0, Func Offset: 0x6d0
	// Line 624, Address: 0x2493a8, Func Offset: 0x6d8
	// Line 625, Address: 0x2493d8, Func Offset: 0x708
	// Line 626, Address: 0x2493e0, Func Offset: 0x710
	// Line 627, Address: 0x2493e8, Func Offset: 0x718
	// Line 629, Address: 0x2493f8, Func Offset: 0x728
	// Line 630, Address: 0x24940c, Func Offset: 0x73c
	// Line 633, Address: 0x249414, Func Offset: 0x744
	// Line 634, Address: 0x249428, Func Offset: 0x758
	// Line 635, Address: 0x249440, Func Offset: 0x770
	// Line 637, Address: 0x24944c, Func Offset: 0x77c
	// Line 638, Address: 0x249450, Func Offset: 0x780
	// Func End, Address: 0x249460, Func Offset: 0x790
}

// 
// Start address: 0x249460
int EvProgBoxWithKeyLayer()
{
	int i;
	int otp;
	int ring;
	int no;
	PicDraw_Data pic;
	unsigned char cyl_tex[4][10];
	int cyl_pos[2][4][10];
	// Line 643, Address: 0x249460, Func Offset: 0
	// Line 668, Address: 0x24946c, Func Offset: 0xc
	// Line 670, Address: 0x249488, Func Offset: 0x28
	// Line 672, Address: 0x249498, Func Offset: 0x38
	// Line 673, Address: 0x2494bc, Func Offset: 0x5c
	// Line 674, Address: 0x2494cc, Func Offset: 0x6c
	// Line 675, Address: 0x2494d4, Func Offset: 0x74
	// Line 676, Address: 0x2494e0, Func Offset: 0x80
	// Line 677, Address: 0x2494e4, Func Offset: 0x84
	// Line 678, Address: 0x2494e8, Func Offset: 0x88
	// Line 679, Address: 0x2494ec, Func Offset: 0x8c
	// Line 680, Address: 0x2494f4, Func Offset: 0x94
	// Line 681, Address: 0x249508, Func Offset: 0xa8
	// Line 682, Address: 0x24950c, Func Offset: 0xac
	// Line 689, Address: 0x249510, Func Offset: 0xb0
	// Line 692, Address: 0x2495e0, Func Offset: 0x180
	// Line 693, Address: 0x249654, Func Offset: 0x1f4
	// Line 695, Address: 0x249658, Func Offset: 0x1f8
	// Line 696, Address: 0x2496a4, Func Offset: 0x244
	// Line 697, Address: 0x2496b0, Func Offset: 0x250
	// Line 698, Address: 0x2496c4, Func Offset: 0x264
	// Line 699, Address: 0x2496c8, Func Offset: 0x268
	// Line 700, Address: 0x2496cc, Func Offset: 0x26c
	// Func End, Address: 0x2496e0, Func Offset: 0x280
}

// 
// Start address: 0x2496e0
int EvProgBoxWithKeyCursor()
{
	int i;
	float cyl_touch[2][3][5];
	unsigned char cyl_touch_c[2][2][5];
	// Line 709, Address: 0x2496e0, Func Offset: 0
	// Line 720, Address: 0x2496ec, Func Offset: 0xc
	// Line 721, Address: 0x2496f8, Func Offset: 0x18
	// Line 722, Address: 0x249730, Func Offset: 0x50
	// Line 724, Address: 0x24976c, Func Offset: 0x8c
	// Line 725, Address: 0x249790, Func Offset: 0xb0
	// Line 726, Address: 0x2497b0, Func Offset: 0xd0
	// Line 728, Address: 0x2497e8, Func Offset: 0x108
	// Line 729, Address: 0x249808, Func Offset: 0x128
	// Line 731, Address: 0x24981c, Func Offset: 0x13c
	// Line 733, Address: 0x249844, Func Offset: 0x164
	// Line 734, Address: 0x24985c, Func Offset: 0x17c
	// Line 735, Address: 0x249868, Func Offset: 0x188
	// Line 739, Address: 0x249950, Func Offset: 0x270
	// Line 740, Address: 0x249968, Func Offset: 0x288
	// Line 741, Address: 0x249998, Func Offset: 0x2b8
	// Line 743, Address: 0x2499b0, Func Offset: 0x2d0
	// Line 747, Address: 0x249a98, Func Offset: 0x3b8
	// Line 748, Address: 0x249ab0, Func Offset: 0x3d0
	// Line 749, Address: 0x249ae0, Func Offset: 0x400
	// Line 751, Address: 0x249af8, Func Offset: 0x418
	// Line 752, Address: 0x249b0c, Func Offset: 0x42c
	// Line 753, Address: 0x249b10, Func Offset: 0x430
	// Line 754, Address: 0x249b14, Func Offset: 0x434
	// Func End, Address: 0x249b28, Func Offset: 0x448
}

// 
// Start address: 0x249b30
int EvProgBoxWithKeyOpen(int alp)
{
	PicDraw_Data pic;
	// Line 759, Address: 0x249b30, Func Offset: 0
	// Line 762, Address: 0x249b40, Func Offset: 0x10
	// Line 764, Address: 0x249b5c, Func Offset: 0x2c
	// Line 766, Address: 0x249b6c, Func Offset: 0x3c
	// Line 767, Address: 0x249b94, Func Offset: 0x64
	// Line 768, Address: 0x249b9c, Func Offset: 0x6c
	// Line 769, Address: 0x249bc8, Func Offset: 0x98
	// Line 770, Address: 0x249bf4, Func Offset: 0xc4
	// Line 772, Address: 0x249c00, Func Offset: 0xd0
	// Line 773, Address: 0x249c04, Func Offset: 0xd4
	// Func End, Address: 0x249c18, Func Offset: 0xe8
}

// 
// Start address: 0x249c20
int EvProgEmptyBox()
{
	// Line 841, Address: 0x249c20, Func Offset: 0
	// Line 842, Address: 0x249c28, Func Offset: 0x8
	// Line 844, Address: 0x249c70, Func Offset: 0x50
	// Line 845, Address: 0x249c84, Func Offset: 0x64
	// Line 846, Address: 0x249c98, Func Offset: 0x78
	// Line 849, Address: 0x249ca0, Func Offset: 0x80
	// Line 852, Address: 0x249cc0, Func Offset: 0xa0
	// Line 854, Address: 0x249cd4, Func Offset: 0xb4
	// Line 857, Address: 0x249cdc, Func Offset: 0xbc
	// Line 858, Address: 0x249ce4, Func Offset: 0xc4
	// Line 859, Address: 0x249cec, Func Offset: 0xcc
	// Line 860, Address: 0x249cf4, Func Offset: 0xd4
	// Line 862, Address: 0x249d08, Func Offset: 0xe8
	// Line 864, Address: 0x249d1c, Func Offset: 0xfc
	// Line 867, Address: 0x249d24, Func Offset: 0x104
	// Line 868, Address: 0x249d2c, Func Offset: 0x10c
	// Line 869, Address: 0x249d34, Func Offset: 0x114
	// Line 870, Address: 0x249d3c, Func Offset: 0x11c
	// Line 871, Address: 0x249d60, Func Offset: 0x140
	// Line 874, Address: 0x249d68, Func Offset: 0x148
	// Line 875, Address: 0x249d7c, Func Offset: 0x15c
	// Line 878, Address: 0x249d88, Func Offset: 0x168
	// Line 879, Address: 0x249d8c, Func Offset: 0x16c
	// Func End, Address: 0x249d9c, Func Offset: 0x17c
}

// 
// Start address: 0x249da0
int EvProgOnlyNeedle()
{
	// Line 884, Address: 0x249da0, Func Offset: 0
	// Line 885, Address: 0x249da8, Func Offset: 0x8
	// Line 887, Address: 0x249df0, Func Offset: 0x50
	// Line 888, Address: 0x249e00, Func Offset: 0x60
	// Line 889, Address: 0x249e0c, Func Offset: 0x6c
	// Line 890, Address: 0x249e20, Func Offset: 0x80
	// Line 893, Address: 0x249e28, Func Offset: 0x88
	// Line 894, Address: 0x249e38, Func Offset: 0x98
	// Line 895, Address: 0x249e48, Func Offset: 0xa8
	// Line 897, Address: 0x249e5c, Func Offset: 0xbc
	// Line 900, Address: 0x249e64, Func Offset: 0xc4
	// Line 901, Address: 0x249e74, Func Offset: 0xd4
	// Line 902, Address: 0x249e84, Func Offset: 0xe4
	// Line 904, Address: 0x249e98, Func Offset: 0xf8
	// Line 907, Address: 0x249ea0, Func Offset: 0x100
	// Line 908, Address: 0x249eb8, Func Offset: 0x118
	// Line 909, Address: 0x249ecc, Func Offset: 0x12c
	// Line 912, Address: 0x249ed4, Func Offset: 0x134
	// Line 913, Address: 0x249ee8, Func Offset: 0x148
	// Line 915, Address: 0x249ef4, Func Offset: 0x154
	// Line 916, Address: 0x249ef8, Func Offset: 0x158
	// Func End, Address: 0x249f08, Func Offset: 0x168
}

// 
// Start address: 0x249f10
int EvProgOnlyHair()
{
	// Line 921, Address: 0x249f10, Func Offset: 0
	// Line 922, Address: 0x249f18, Func Offset: 0x8
	// Line 924, Address: 0x249f60, Func Offset: 0x50
	// Line 925, Address: 0x249f70, Func Offset: 0x60
	// Line 926, Address: 0x249f7c, Func Offset: 0x6c
	// Line 927, Address: 0x249f90, Func Offset: 0x80
	// Line 930, Address: 0x249f98, Func Offset: 0x88
	// Line 931, Address: 0x249fa8, Func Offset: 0x98
	// Line 932, Address: 0x249fb8, Func Offset: 0xa8
	// Line 934, Address: 0x249fcc, Func Offset: 0xbc
	// Line 937, Address: 0x249fd4, Func Offset: 0xc4
	// Line 938, Address: 0x249fe8, Func Offset: 0xd8
	// Line 939, Address: 0x249ff8, Func Offset: 0xe8
	// Line 941, Address: 0x24a00c, Func Offset: 0xfc
	// Line 944, Address: 0x24a014, Func Offset: 0x104
	// Line 945, Address: 0x24a02c, Func Offset: 0x11c
	// Line 946, Address: 0x24a040, Func Offset: 0x130
	// Line 949, Address: 0x24a048, Func Offset: 0x138
	// Line 950, Address: 0x24a05c, Func Offset: 0x14c
	// Line 952, Address: 0x24a068, Func Offset: 0x158
	// Line 953, Address: 0x24a06c, Func Offset: 0x15c
	// Func End, Address: 0x24a07c, Func Offset: 0x16c
}

// 
// Start address: 0x24a080
int EvProgInShowerDrain()
{
	int msg;
	PicDraw_Data pic;
	// Line 959, Address: 0x24a080, Func Offset: 0
	// Line 963, Address: 0x24a08c, Func Offset: 0xc
	// Line 965, Address: 0x24a0e0, Func Offset: 0x60
	// Line 966, Address: 0x24a0f0, Func Offset: 0x70
	// Line 967, Address: 0x24a0fc, Func Offset: 0x7c
	// Line 968, Address: 0x24a110, Func Offset: 0x90
	// Line 971, Address: 0x24a118, Func Offset: 0x98
	// Line 972, Address: 0x24a128, Func Offset: 0xa8
	// Line 973, Address: 0x24a138, Func Offset: 0xb8
	// Line 975, Address: 0x24a14c, Func Offset: 0xcc
	// Line 978, Address: 0x24a154, Func Offset: 0xd4
	// Line 982, Address: 0x24a178, Func Offset: 0xf8
	// Line 984, Address: 0x24a18c, Func Offset: 0x10c
	// Line 987, Address: 0x24a194, Func Offset: 0x114
	// Line 988, Address: 0x24a19c, Func Offset: 0x11c
	// Line 989, Address: 0x24a1a4, Func Offset: 0x124
	// Line 990, Address: 0x24a1bc, Func Offset: 0x13c
	// Line 992, Address: 0x24a1d8, Func Offset: 0x158
	// Line 994, Address: 0x24a1e8, Func Offset: 0x168
	// Line 995, Address: 0x24a210, Func Offset: 0x190
	// Line 996, Address: 0x24a218, Func Offset: 0x198
	// Line 998, Address: 0x24a244, Func Offset: 0x1c4
	// Line 999, Address: 0x24a270, Func Offset: 0x1f0
	// Line 1000, Address: 0x24a27c, Func Offset: 0x1fc
	// Line 1001, Address: 0x24a280, Func Offset: 0x200
	// Line 1002, Address: 0x24a28c, Func Offset: 0x20c
	// Line 1003, Address: 0x24a294, Func Offset: 0x214
	// Line 1004, Address: 0x24a2a8, Func Offset: 0x228
	// Line 1005, Address: 0x24a2b8, Func Offset: 0x238
	// Line 1007, Address: 0x24a2cc, Func Offset: 0x24c
	// Line 1010, Address: 0x24a2d4, Func Offset: 0x254
	// Line 1011, Address: 0x24a2ec, Func Offset: 0x26c
	// Line 1012, Address: 0x24a300, Func Offset: 0x280
	// Line 1015, Address: 0x24a308, Func Offset: 0x288
	// Line 1016, Address: 0x24a31c, Func Offset: 0x29c
	// Line 1018, Address: 0x24a328, Func Offset: 0x2a8
	// Line 1019, Address: 0x24a32c, Func Offset: 0x2ac
	// Func End, Address: 0x24a340, Func Offset: 0x2c0
}

// 
// Start address: 0x24a340
int EvProgFishKey()
{
	DramaDemo_PlayInfo tsuri;
	CharaData_DemoList chara_data[4];
	// Line 1025, Address: 0x24a340, Func Offset: 0
	// Line 1045, Address: 0x24a348, Func Offset: 0x8
	// Line 1047, Address: 0x24a384, Func Offset: 0x44
	// Line 1048, Address: 0x24a39c, Func Offset: 0x5c
	// Line 1049, Address: 0x24a3b0, Func Offset: 0x70
	// Line 1050, Address: 0x24a3bc, Func Offset: 0x7c
	// Line 1051, Address: 0x24a3d0, Func Offset: 0x90
	// Line 1055, Address: 0x24a3e4, Func Offset: 0xa4
	// Line 1056, Address: 0x24a410, Func Offset: 0xd0
	// Line 1059, Address: 0x24a418, Func Offset: 0xd8
	// Line 1060, Address: 0x24a428, Func Offset: 0xe8
	// Line 1061, Address: 0x24a440, Func Offset: 0x100
	// Line 1062, Address: 0x24a454, Func Offset: 0x114
	// Line 1065, Address: 0x24a45c, Func Offset: 0x11c
	// Line 1066, Address: 0x24a468, Func Offset: 0x128
	// Line 1067, Address: 0x24a474, Func Offset: 0x134
	// Line 1068, Address: 0x24a480, Func Offset: 0x140
	// Line 1069, Address: 0x24a494, Func Offset: 0x154
	// Line 1070, Address: 0x24a4a0, Func Offset: 0x160
	// Line 1071, Address: 0x24a4b4, Func Offset: 0x174
	// Line 1072, Address: 0x24a4c0, Func Offset: 0x180
	// Line 1074, Address: 0x24a4cc, Func Offset: 0x18c
	// Line 1075, Address: 0x24a4d0, Func Offset: 0x190
	// Func End, Address: 0x24a4e0, Func Offset: 0x1a0
}

// 
// Start address: 0x24a4e0
int EvProgDoctorMemo1st()
{
	int alp;
	PicDraw_Data pic;
	// Line 1081, Address: 0x24a4e0, Func Offset: 0
	// Line 1085, Address: 0x24a4e8, Func Offset: 0x8
	// Line 1087, Address: 0x24a554, Func Offset: 0x74
	// Line 1088, Address: 0x24a568, Func Offset: 0x88
	// Line 1089, Address: 0x24a574, Func Offset: 0x94
	// Line 1090, Address: 0x24a588, Func Offset: 0xa8
	// Line 1091, Address: 0x24a598, Func Offset: 0xb8
	// Line 1092, Address: 0x24a5a0, Func Offset: 0xc0
	// Line 1093, Address: 0x24a5b4, Func Offset: 0xd4
	// Line 1095, Address: 0x24a5d0, Func Offset: 0xf0
	// Line 1098, Address: 0x24a5d8, Func Offset: 0xf8
	// Line 1102, Address: 0x24a5fc, Func Offset: 0x11c
	// Line 1104, Address: 0x24a610, Func Offset: 0x130
	// Line 1109, Address: 0x24a618, Func Offset: 0x138
	// Line 1110, Address: 0x24a620, Func Offset: 0x140
	// Line 1111, Address: 0x24a628, Func Offset: 0x148
	// Line 1113, Address: 0x24a644, Func Offset: 0x164
	// Line 1115, Address: 0x24a654, Func Offset: 0x174
	// Line 1116, Address: 0x24a678, Func Offset: 0x198
	// Line 1117, Address: 0x24a680, Func Offset: 0x1a0
	// Line 1118, Address: 0x24a694, Func Offset: 0x1b4
	// Line 1119, Address: 0x24a6c8, Func Offset: 0x1e8
	// Line 1120, Address: 0x24a6f0, Func Offset: 0x210
	// Line 1121, Address: 0x24a728, Func Offset: 0x248
	// Line 1122, Address: 0x24a754, Func Offset: 0x274
	// Line 1123, Address: 0x24a760, Func Offset: 0x280
	// Line 1124, Address: 0x24a77c, Func Offset: 0x29c
	// Line 1125, Address: 0x24a784, Func Offset: 0x2a4
	// Line 1126, Address: 0x24a798, Func Offset: 0x2b8
	// Line 1127, Address: 0x24a7b4, Func Offset: 0x2d4
	// Line 1128, Address: 0x24a7c8, Func Offset: 0x2e8
	// Line 1129, Address: 0x24a7d0, Func Offset: 0x2f0
	// Line 1130, Address: 0x24a7dc, Func Offset: 0x2fc
	// Line 1131, Address: 0x24a7f0, Func Offset: 0x310
	// Line 1132, Address: 0x24a804, Func Offset: 0x324
	// Line 1133, Address: 0x24a80c, Func Offset: 0x32c
	// Line 1134, Address: 0x24a814, Func Offset: 0x334
	// Line 1135, Address: 0x24a830, Func Offset: 0x350
	// Line 1137, Address: 0x24a860, Func Offset: 0x380
	// Line 1140, Address: 0x24a868, Func Offset: 0x388
	// Line 1141, Address: 0x24a870, Func Offset: 0x390
	// Line 1142, Address: 0x24a878, Func Offset: 0x398
	// Line 1143, Address: 0x24a880, Func Offset: 0x3a0
	// Line 1146, Address: 0x24a898, Func Offset: 0x3b8
	// Line 1147, Address: 0x24a8ac, Func Offset: 0x3cc
	// Line 1150, Address: 0x24a8b4, Func Offset: 0x3d4
	// Line 1151, Address: 0x24a8bc, Func Offset: 0x3dc
	// Line 1152, Address: 0x24a8c4, Func Offset: 0x3e4
	// Line 1153, Address: 0x24a8cc, Func Offset: 0x3ec
	// Line 1155, Address: 0x24a8dc, Func Offset: 0x3fc
	// Line 1156, Address: 0x24a8f0, Func Offset: 0x410
	// Line 1159, Address: 0x24a8f8, Func Offset: 0x418
	// Line 1160, Address: 0x24a90c, Func Offset: 0x42c
	// Line 1162, Address: 0x24a918, Func Offset: 0x438
	// Line 1163, Address: 0x24a91c, Func Offset: 0x43c
	// Func End, Address: 0x24a92c, Func Offset: 0x44c
}

// 
// Start address: 0x24a930
int EvProgDoctorMemo2nd()
{
	// Line 1168, Address: 0x24a930, Func Offset: 0
	// Line 1169, Address: 0x24a938, Func Offset: 0x8
	// Line 1171, Address: 0x24a98c, Func Offset: 0x5c
	// Line 1172, Address: 0x24a9a0, Func Offset: 0x70
	// Line 1173, Address: 0x24a9ac, Func Offset: 0x7c
	// Line 1174, Address: 0x24a9c0, Func Offset: 0x90
	// Line 1177, Address: 0x24a9c8, Func Offset: 0x98
	// Line 1180, Address: 0x24a9e8, Func Offset: 0xb8
	// Line 1182, Address: 0x24a9fc, Func Offset: 0xcc
	// Line 1186, Address: 0x24aa04, Func Offset: 0xd4
	// Line 1187, Address: 0x24aa0c, Func Offset: 0xdc
	// Line 1188, Address: 0x24aa14, Func Offset: 0xe4
	// Line 1189, Address: 0x24aa30, Func Offset: 0x100
	// Line 1190, Address: 0x24aa38, Func Offset: 0x108
	// Line 1191, Address: 0x24aa4c, Func Offset: 0x11c
	// Line 1192, Address: 0x24aa68, Func Offset: 0x138
	// Line 1193, Address: 0x24aa7c, Func Offset: 0x14c
	// Line 1194, Address: 0x24aa84, Func Offset: 0x154
	// Line 1195, Address: 0x24aa90, Func Offset: 0x160
	// Line 1196, Address: 0x24aaa4, Func Offset: 0x174
	// Line 1198, Address: 0x24aab8, Func Offset: 0x188
	// Line 1201, Address: 0x24aac0, Func Offset: 0x190
	// Line 1202, Address: 0x24aac8, Func Offset: 0x198
	// Line 1203, Address: 0x24aad0, Func Offset: 0x1a0
	// Line 1204, Address: 0x24aad8, Func Offset: 0x1a8
	// Line 1206, Address: 0x24aae8, Func Offset: 0x1b8
	// Line 1207, Address: 0x24aafc, Func Offset: 0x1cc
	// Line 1210, Address: 0x24ab04, Func Offset: 0x1d4
	// Line 1211, Address: 0x24ab18, Func Offset: 0x1e8
	// Line 1213, Address: 0x24ab24, Func Offset: 0x1f4
	// Line 1214, Address: 0x24ab28, Func Offset: 0x1f8
	// Func End, Address: 0x24ab38, Func Offset: 0x208
}

// 
// Start address: 0x24ab40
int EvProgUseElevatorKey()
{
	// Line 1220, Address: 0x24ab40, Func Offset: 0
	// Line 1221, Address: 0x24ab48, Func Offset: 0x8
	// Line 1223, Address: 0x24ab68, Func Offset: 0x28
	// Func End, Address: 0x24ab78, Func Offset: 0x38
}

// 
// Start address: 0x24ab80
int EvProgElevatorButton()
{
	// Line 1229, Address: 0x24ab80, Func Offset: 0
	// Line 1230, Address: 0x24ab88, Func Offset: 0x8
	// Line 1232, Address: 0x24abdc, Func Offset: 0x5c
	// Line 1233, Address: 0x24abf0, Func Offset: 0x70
	// Line 1234, Address: 0x24abfc, Func Offset: 0x7c
	// Line 1235, Address: 0x24ac04, Func Offset: 0x84
	// Line 1236, Address: 0x24ac14, Func Offset: 0x94
	// Line 1237, Address: 0x24ac28, Func Offset: 0xa8
	// Line 1240, Address: 0x24ac30, Func Offset: 0xb0
	// Line 1244, Address: 0x24ac54, Func Offset: 0xd4
	// Line 1246, Address: 0x24ac68, Func Offset: 0xe8
	// Line 1249, Address: 0x24ac70, Func Offset: 0xf0
	// Line 1250, Address: 0x24ac78, Func Offset: 0xf8
	// Line 1251, Address: 0x24ac80, Func Offset: 0x100
	// Line 1252, Address: 0x24ac8c, Func Offset: 0x10c
	// Line 1253, Address: 0x24ac94, Func Offset: 0x114
	// Line 1254, Address: 0x24ac9c, Func Offset: 0x11c
	// Line 1256, Address: 0x24acd4, Func Offset: 0x154
	// Line 1257, Address: 0x24acf0, Func Offset: 0x170
	// Line 1258, Address: 0x24ad20, Func Offset: 0x1a0
	// Line 1261, Address: 0x24ad28, Func Offset: 0x1a8
	// Line 1262, Address: 0x24ad54, Func Offset: 0x1d4
	// Line 1263, Address: 0x24ad78, Func Offset: 0x1f8
	// Line 1264, Address: 0x24ad80, Func Offset: 0x200
	// Line 1265, Address: 0x24ad88, Func Offset: 0x208
	// Line 1266, Address: 0x24ad90, Func Offset: 0x210
	// Line 1267, Address: 0x24ad98, Func Offset: 0x218
	// Line 1268, Address: 0x24adb8, Func Offset: 0x238
	// Line 1269, Address: 0x24adc0, Func Offset: 0x240
	// Line 1273, Address: 0x24ae08, Func Offset: 0x288
	// Line 1274, Address: 0x24ae1c, Func Offset: 0x29c
	// Line 1275, Address: 0x24ae24, Func Offset: 0x2a4
	// Line 1276, Address: 0x24ae38, Func Offset: 0x2b8
	// Line 1277, Address: 0x24ae40, Func Offset: 0x2c0
	// Line 1278, Address: 0x24ae58, Func Offset: 0x2d8
	// Line 1281, Address: 0x24ae64, Func Offset: 0x2e4
	// Line 1284, Address: 0x24ae6c, Func Offset: 0x2ec
	// Line 1285, Address: 0x24ae88, Func Offset: 0x308
	// Line 1286, Address: 0x24aea4, Func Offset: 0x324
	// Line 1287, Address: 0x24aeb0, Func Offset: 0x330
	// Line 1288, Address: 0x24aec8, Func Offset: 0x348
	// Line 1290, Address: 0x24aedc, Func Offset: 0x35c
	// Line 1293, Address: 0x24aee4, Func Offset: 0x364
	// Line 1294, Address: 0x24aef8, Func Offset: 0x378
	// Line 1295, Address: 0x24af14, Func Offset: 0x394
	// Line 1296, Address: 0x24af30, Func Offset: 0x3b0
	// Line 1299, Address: 0x24af3c, Func Offset: 0x3bc
	// Line 1300, Address: 0x24af40, Func Offset: 0x3c0
	// Func End, Address: 0x24af50, Func Offset: 0x3d0
}

// 
// Start address: 0x24af50
int EvProgElevatorButtonCheck()
{
	int i;
	float py;
	float px;
	short btn_ctr[2][5];
	// Line 1305, Address: 0x24af50, Func Offset: 0
	// Line 1312, Address: 0x24af5c, Func Offset: 0xc
	// Line 1314, Address: 0x24af84, Func Offset: 0x34
	// Line 1315, Address: 0x24af90, Func Offset: 0x40
	// Line 1316, Address: 0x24afcc, Func Offset: 0x7c
	// Line 1317, Address: 0x24aff4, Func Offset: 0xa4
	// Line 1318, Address: 0x24b01c, Func Offset: 0xcc
	// Line 1319, Address: 0x24b030, Func Offset: 0xe0
	// Line 1320, Address: 0x24b048, Func Offset: 0xf8
	// Line 1321, Address: 0x24b060, Func Offset: 0x110
	// Line 1323, Address: 0x24b094, Func Offset: 0x144
	// Line 1324, Address: 0x24b0ac, Func Offset: 0x15c
	// Line 1325, Address: 0x24b0bc, Func Offset: 0x16c
	// Line 1327, Address: 0x24b0c4, Func Offset: 0x174
	// Line 1328, Address: 0x24b0dc, Func Offset: 0x18c
	// Line 1329, Address: 0x24b0ec, Func Offset: 0x19c
	// Line 1330, Address: 0x24b0f4, Func Offset: 0x1a4
	// Line 1332, Address: 0x24b114, Func Offset: 0x1c4
	// Line 1333, Address: 0x24b12c, Func Offset: 0x1dc
	// Line 1334, Address: 0x24b13c, Func Offset: 0x1ec
	// Line 1335, Address: 0x24b154, Func Offset: 0x204
	// Line 1338, Address: 0x24b164, Func Offset: 0x214
	// Line 1339, Address: 0x24b168, Func Offset: 0x218
	// Func End, Address: 0x24b17c, Func Offset: 0x22c
}

// 
// Start address: 0x24b180
int EvProgElevatorButtonLight()
{
	int alp;
	int no;
	PicDraw_Data pic;
	int btn_tex[4][4];
	int btn_pos[2][4];
	// Line 1344, Address: 0x24b180, Func Offset: 0
	// Line 1354, Address: 0x24b190, Func Offset: 0x10
	// Line 1355, Address: 0x24b1a8, Func Offset: 0x28
	// Line 1357, Address: 0x24b1c0, Func Offset: 0x40
	// Line 1358, Address: 0x24b1d0, Func Offset: 0x50
	// Line 1359, Address: 0x24b1ec, Func Offset: 0x6c
	// Line 1360, Address: 0x24b1f0, Func Offset: 0x70
	// Line 1362, Address: 0x24b1fc, Func Offset: 0x7c
	// Line 1363, Address: 0x24b240, Func Offset: 0xc0
	// Line 1365, Address: 0x24b25c, Func Offset: 0xdc
	// Line 1367, Address: 0x24b278, Func Offset: 0xf8
	// Line 1369, Address: 0x24b288, Func Offset: 0x108
	// Line 1373, Address: 0x24b2ac, Func Offset: 0x12c
	// Line 1376, Address: 0x24b368, Func Offset: 0x1e8
	// Line 1377, Address: 0x24b3dc, Func Offset: 0x25c
	// Line 1378, Address: 0x24b3e4, Func Offset: 0x264
	// Line 1379, Address: 0x24b410, Func Offset: 0x290
	// Line 1381, Address: 0x24b41c, Func Offset: 0x29c
	// Line 1382, Address: 0x24b420, Func Offset: 0x2a0
	// Func End, Address: 0x24b438, Func Offset: 0x2b8
}

// 
// Start address: 0x24b440
int EvProgTrialEnd()
{
	PicDraw_Data pic;
	// Line 1388, Address: 0x24b440, Func Offset: 0
	// Line 1391, Address: 0x24b448, Func Offset: 0x8
	// Line 1393, Address: 0x24b478, Func Offset: 0x38
	// Line 1394, Address: 0x24b48c, Func Offset: 0x4c
	// Line 1395, Address: 0x24b498, Func Offset: 0x58
	// Line 1396, Address: 0x24b4a0, Func Offset: 0x60
	// Line 1397, Address: 0x24b4b4, Func Offset: 0x74
	// Line 1400, Address: 0x24b4bc, Func Offset: 0x7c
	// Line 1401, Address: 0x24b4d8, Func Offset: 0x98
	// Line 1402, Address: 0x24b4f4, Func Offset: 0xb4
	// Line 1403, Address: 0x24b4fc, Func Offset: 0xbc
	// Line 1405, Address: 0x24b510, Func Offset: 0xd0
	// Line 1406, Address: 0x24b520, Func Offset: 0xe0
	// Line 1408, Address: 0x24b538, Func Offset: 0xf8
	// Line 1409, Address: 0x24b584, Func Offset: 0x144
	// Line 1410, Address: 0x24b590, Func Offset: 0x150
	// Line 1411, Address: 0x24b598, Func Offset: 0x158
	// Line 1414, Address: 0x24b5a0, Func Offset: 0x160
	// Line 1415, Address: 0x24b5b0, Func Offset: 0x170
	// Line 1416, Address: 0x24b5c8, Func Offset: 0x188
	// Line 1417, Address: 0x24b5f4, Func Offset: 0x1b4
	// Line 1418, Address: 0x24b600, Func Offset: 0x1c0
	// Line 1419, Address: 0x24b634, Func Offset: 0x1f4
	// Line 1420, Address: 0x24b63c, Func Offset: 0x1fc
	// Line 1422, Address: 0x24b648, Func Offset: 0x208
	// Line 1423, Address: 0x24b64c, Func Offset: 0x20c
	// Func End, Address: 0x24b65c, Func Offset: 0x21c
}

// 
// Start address: 0x24b660
void EvRoomInit()
{
	int room;
	float pos[4];
	// Line 1434, Address: 0x24b660, Func Offset: 0
	// Line 1438, Address: 0x24b66c, Func Offset: 0xc
	// Line 1441, Address: 0x24b678, Func Offset: 0x18
	// Line 1442, Address: 0x24b684, Func Offset: 0x24
	// Line 1443, Address: 0x24b694, Func Offset: 0x34
	// Line 1444, Address: 0x24b6b8, Func Offset: 0x58
	// Line 1454, Address: 0x24b6cc, Func Offset: 0x6c
	// Line 1455, Address: 0x24b6d8, Func Offset: 0x78
	// Line 1456, Address: 0x24b6e0, Func Offset: 0x80
	// Line 1457, Address: 0x24b6e8, Func Offset: 0x88
	// Line 1458, Address: 0x24b6fc, Func Offset: 0x9c
	// Line 1459, Address: 0x24b704, Func Offset: 0xa4
	// Line 1461, Address: 0x24b71c, Func Offset: 0xbc
	// Line 1462, Address: 0x24b730, Func Offset: 0xd0
	// Line 1464, Address: 0x24b73c, Func Offset: 0xdc
	// Line 1465, Address: 0x24b748, Func Offset: 0xe8
	// Line 1467, Address: 0x24b778, Func Offset: 0x118
	// Func End, Address: 0x24b78c, Func Offset: 0x12c
}

// 
// Start address: 0x24b790
void EvAllTimeFunc()
{
	float spd;
	float pos[4];
	// Line 1472, Address: 0x24b790, Func Offset: 0
	// Line 1476, Address: 0x24b7a0, Func Offset: 0x10
	// Line 1478, Address: 0x24b810, Func Offset: 0x80
	// Line 1479, Address: 0x24b818, Func Offset: 0x88
	// Line 1480, Address: 0x24b824, Func Offset: 0x94
	// Line 1481, Address: 0x24b840, Func Offset: 0xb0
	// Line 1489, Address: 0x24b848, Func Offset: 0xb8
	// Line 1492, Address: 0x24b8b4, Func Offset: 0x124
	// Line 1493, Address: 0x24b8c0, Func Offset: 0x130
	// Line 1494, Address: 0x24b8d8, Func Offset: 0x148
	// Line 1495, Address: 0x24b8dc, Func Offset: 0x14c
	// Line 1496, Address: 0x24b8e4, Func Offset: 0x154
	// Line 1498, Address: 0x24b900, Func Offset: 0x170
	// Line 1501, Address: 0x24b908, Func Offset: 0x178
	// Line 1503, Address: 0x24b91c, Func Offset: 0x18c
	// Line 1506, Address: 0x24b9c0, Func Offset: 0x230
	// Line 1507, Address: 0x24b9e0, Func Offset: 0x250
	// Line 1508, Address: 0x24ba08, Func Offset: 0x278
	// Line 1509, Address: 0x24ba14, Func Offset: 0x284
	// Line 1510, Address: 0x24ba48, Func Offset: 0x2b8
	// Line 1511, Address: 0x24ba60, Func Offset: 0x2d0
	// Line 1512, Address: 0x24ba7c, Func Offset: 0x2ec
	// Line 1514, Address: 0x24ba84, Func Offset: 0x2f4
	// Line 1515, Address: 0x24ba94, Func Offset: 0x304
	// Line 1516, Address: 0x24bab0, Func Offset: 0x320
	// Line 1517, Address: 0x24bac8, Func Offset: 0x338
	// Line 1518, Address: 0x24baf8, Func Offset: 0x368
	// Line 1519, Address: 0x24bb00, Func Offset: 0x370
	// Line 1520, Address: 0x24bb34, Func Offset: 0x3a4
	// Line 1521, Address: 0x24bb50, Func Offset: 0x3c0
	// Line 1522, Address: 0x24bb80, Func Offset: 0x3f0
	// Line 1526, Address: 0x24bb94, Func Offset: 0x404
	// Func End, Address: 0x24bbac, Func Offset: 0x41c
}

