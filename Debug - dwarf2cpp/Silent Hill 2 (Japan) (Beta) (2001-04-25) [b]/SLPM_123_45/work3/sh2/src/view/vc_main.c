typedef struct _VC_WATCH_MV_PARAM;
typedef struct SubObject;
typedef struct _VC_NEAR_ROAD_DATA;
typedef struct _VC_WORK;
typedef struct _anon0;
typedef enum _VC_ROAD_TYPE : unsigned char;
typedef struct _VC_ROAD_DATA;
typedef struct PAD_3D;
typedef struct _anon1;
typedef struct _VbSCREENINFO;
typedef struct _VC_CAM_MV_PARAM;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct PAD_2D;
typedef union _anon2;
typedef struct _anon3;
typedef struct PAD_INFO;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct SubCharacter;
typedef struct _KANRI;
typedef struct shSkelton;
typedef enum _enum_0 : unsigned char;
typedef struct _SYS_W;
typedef struct _VC_THROUGH_DOOR_CAM_PARAM;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef enum _VC_CAM_MV_TYPE : unsigned char;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct shPlayerWork;
typedef struct _VC_LIMIT_AREA;
typedef enum _VC_ROAD_FLAGS : unsigned short;
typedef struct shAttackInfo;
typedef enum _THROUGH_DOOR_SET_CMD_TYPE : unsigned char;
typedef struct _CL_VHIT_WALL;
typedef union _anon4;
typedef struct _anon5;
typedef struct _VC_FIX_CAM_PARAM;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _VbCOORDINATE;
typedef struct _CL_VHIT_CHARA;
typedef struct _VC_FIX_ANG_CAM_PARAM;
typedef struct _CL_VHIT_RESULT;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef enum _enum_1 : unsigned char;
typedef union _anon6;
typedef enum _VC_AREA_SIZE_TYPE : unsigned char;
typedef struct _VC_LOCUS_CIRCLE_CAM_PARAM;
typedef struct _VC_ROAD_AREA;
typedef enum _VC_FLAGS : unsigned short;

typedef void(*type_0)(SubCharacter*);
typedef void(*type_23)(SubCharacter*);
typedef void(*type_27)(SubCharacter*);
typedef void(*type_39)(SubCharacter*);

typedef float type_1[4];
typedef int type_2[9];
typedef float type_3[4];
typedef unsigned char type_4[4];
typedef float type_5[4];
typedef float type_6[4][4];
typedef unsigned char type_7[4];
typedef PAD_INFO type_8[10];
typedef float type_9[4][2];
typedef float type_10[7];
typedef float type_11[4];
typedef _VC_ROAD_DATA type_12[2];
typedef float type_13[4][4];
typedef float type_14[4];
typedef float type_15[7];
typedef unsigned char type_16[2];
typedef unsigned char type_17[2];
typedef float type_18[4];
typedef unsigned int type_19[32];
typedef _VC_NEAR_ROAD_DATA type_20[128];
typedef _VbCOORDINATE type_21[18];
typedef float type_22[4];
typedef float type_24[4];
typedef SubCharacter type_25[6];
typedef shAttackInfo type_26[46];
typedef unsigned char type_28[4];
typedef float type_29[4];
typedef float type_30[4];
typedef unsigned char type_31[2];
typedef float type_32[7];
typedef float type_33[7];
typedef float type_34[4];
typedef unsigned int type_35[32];
typedef float type_36[7];
typedef int type_37[5];
typedef float type_38[4];
typedef unsigned int type_40[9];

struct _VC_WATCH_MV_PARAM
{
	float ang_accel_x;
	float ang_accel_y;
	float max_ang_spd_x;
	float max_ang_spd_y;
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
	_anon3 mat;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
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
	float rotmat[4][4];
	float rotinvmat[4][4];
};

struct _VC_WORK
{
	int view_cam_active_f;
	_VC_ROAD_DATA* vc_road_ary;
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
	_VC_NEAR_ROAD_DATA near_road_ary[128];
	int near_road_suu;
	_VC_NEAR_ROAD_DATA cur_near_road;
	SubCharacter* nearest_enemy_p;
	float nearest_enemy_xz_dist;
	float enemy_input_watch_y;
};

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

enum _VC_ROAD_TYPE : unsigned char
{
	VC_RD_TYPE_ROAD,
	VC_RD_TYPE_EFFECT,
	VC_RD_TYPE_EVENT,
	VC_RD_TYPE_SUU
};

struct _VC_ROAD_DATA
{
	_VC_ROAD_AREA lim_sw;
	_VC_ROAD_AREA lim_rd;
	int flags;
	int area_size_type;
	int rd_type;
	int mv_y_type;
	float ofs_watch_hy;
	int rd_dir_type;
	float projection;
	float proj_sec;
	int cam_mv_type;
	_anon2 tmp;
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

struct _anon1
{
	float new;
	float old;
	float delta;
	int flg;
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

struct _VC_CAM_MV_PARAM
{
	float accel_xz;
	float accel_y;
	float max_spd_xz;
	float max_spd_y;
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

union _anon2
{
	_VC_FIX_CAM_PARAM stl;
	_VC_FIX_ANG_CAM_PARAM fix;
	_VC_LOCUS_CIRCLE_CAM_PARAM cir;
};

struct _anon3
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

struct _KANRI
{
	float pos[4];
	float ang[4];
	float rot_spd[4];
	float velo_y;
	float velo_xz;
	float velo_houi;
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

enum _enum_0 : unsigned char
{
	MAKE_CAM_TGT_BY_ROAD,
	MAKE_CAM_TGT_BY_CHARA_HEAD
};

struct _SYS_W
{
	float cam_ang_y;
	float cam_ang_z;
	float cam_r_xz;
	float cam_y;
	_VbCOORDINATE hero_crd[18];
	float head_ang_y;
	float head_ang_x;
	_KANRI hero;
	float eye_y;
	SubCharacter npc[6];
};

struct _VC_THROUGH_DOOR_CAM_PARAM
{
	int active_f;
	float timer;
	float rail_ang_y;
	float rail_sta_pos[4];
	float rail_sta_to_chara_dist;
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

enum _VC_CAM_MV_TYPE : unsigned char
{
	VC_MV_CHASE,
	VC_MV_SETTLE,
	VC_MV_FIX_ANG,
	VC_MV_SELF_VIEW,
	VC_MV_LOCUS_CIRCLE,
	VC_MV_THROUGH_DOOR
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

struct _VC_LIMIT_AREA
{
	float min_hx;
	float max_hx;
	float min_hz;
	float max_hz;
	float min_hy;
	float max_hy;
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
	VC_RD_NO_EXTRA_AREA_F = 0x100
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon4 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

enum _THROUGH_DOOR_SET_CMD_TYPE : unsigned char
{
	VC_TDSC_START,
	VC_TDSC_END,
	VC_TDSC_MAIN
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

union _anon4
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon5
{
	short vx;
	short vy;
	short vz;
	short pad;
};

struct _VC_FIX_CAM_PARAM
{
	float sta_base_ang_y;
	float end_base_ang_y;
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

struct _VbCOORDINATE
{
	unsigned int flg;
	float coord[4][4];
	float workm[4][4];
	unsigned int* param;
	_VbCOORDINATE* super;
	_VbCOORDINATE* sub;
	_anon5 r;
	float lw[4][4];
	float ls[4][4];
	float rot[4];
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct _VC_FIX_ANG_CAM_PARAM
{
	float ang_x;
	float ang_y;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon6 hobj;
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

enum _enum_1 : unsigned char
{
	VC_CHK_NEAREST_ROAD_TYPE,
	VC_CHK_NEAREST_SWITCH_TYPE
};

union _anon6
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

enum _VC_AREA_SIZE_TYPE : unsigned char
{
	VC_AREA_TINY,
	VC_AREA_SMALL,
	VC_AREA_WIDE,
	VC_AREA_OUTDOOR,
	VC_AREA_SUU
};

struct _VC_LOCUS_CIRCLE_CAM_PARAM
{
	float ang_y;
	float radius;
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

enum _VC_FLAGS : unsigned short
{
	VC_USER_CAM_F = 0x1,
	VC_USER_WATCH_F,
	VC_WARP_CAM_F = 0x4,
	VC_WARP_WATCH_F = 0x8,
	VC_WARP_CAM_TGT_F = 0x10,
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

shAttackInfo sh2_attack_list[46];
_VC_WATCH_MV_PARAM deflt_watch_mv_prm;
_VC_WATCH_MV_PARAM self_view_watch_mv_prm;
_VC_CAM_MV_PARAM deflt_cam_mv_prm;
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
_VC_NEAR_ROAD_DATA vcNullNearRoad;
_VC_WATCH_MV_PARAM vcWatchMvPrmSt;
float vcSelfViewTimer;
_VC_WORK vcWork;
float dtf;
_VbSCREENINFO VbScreenInfo;
shPlayerWork sh2jms;
_SYS_W sys;
_anon1 vcProjectionParam;

void vcInitVCSystem(_VC_ROAD_DATA* vc_road_ary);
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
void vcPreSetDataInVC_WORK(_VC_WORK* w_p, _VC_ROAD_DATA* vc_road_ary);
void vcSetTHROUGH_DOOR_CAM_PARAM_in_VC_WORK(_VC_WORK* w_p, _THROUGH_DOOR_SET_CMD_TYPE set_cmd_type);
void vcSetNearestEnemyDataInVC_WORK(_VC_WORK* w_p);
void vcSetNearRoadAryByCharaPos(_VC_WORK* w_p, _VC_ROAD_DATA* road_ary, float half_w, int near_enemy_f);
int vcRetRoadUsePriority(_VC_ROAD_TYPE rd_type);
int vcSetCurNearRoadInVC_WORK(_VC_WORK* w_p);
float vcGetBestNewCurNearRoad(_VC_NEAR_ROAD_DATA** new_cur_pp, _enum_1 chk_type, float* pos, _VC_WORK* w_p);
float vcGetNearestNEAR_ROAD_DATA(_VC_NEAR_ROAD_DATA** out_nearest_p_addr, _enum_1 chk_type, _VC_ROAD_TYPE rd_type, float* pos, _VC_WORK* w_p, int chk_only_set_marge_f);
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
void vcGetUseWatchAndCamMvParam(_VC_WATCH_MV_PARAM** watch_mv_prm_pp, _VC_CAM_MV_PARAM** cam_mv_prm_pp, float self_view_eff_rate, _VC_WORK* w_p);
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
void vcChangeProjectionValue();

// 
// Start address: 0x19ad80
void vcInitVCSystem(_VC_ROAD_DATA* vc_road_ary)
{
	// Line 334, Address: 0x19ad80, Func Offset: 0
	// Line 335, Address: 0x19ad8c, Func Offset: 0xc
	// Line 338, Address: 0x19ad94, Func Offset: 0x14
	// Line 339, Address: 0x19ada0, Func Offset: 0x20
	// Line 340, Address: 0x19adb0, Func Offset: 0x30
	// Line 341, Address: 0x19adb8, Func Offset: 0x38
	// Line 342, Address: 0x19adc4, Func Offset: 0x44
	// Line 345, Address: 0x19add4, Func Offset: 0x54
	// Line 346, Address: 0x19ae04, Func Offset: 0x84
	// Line 347, Address: 0x19ae14, Func Offset: 0x94
	// Line 349, Address: 0x19ae28, Func Offset: 0xa8
	// Line 352, Address: 0x19ae34, Func Offset: 0xb4
	// Line 353, Address: 0x19ae40, Func Offset: 0xc0
	// Line 354, Address: 0x19ae4c, Func Offset: 0xcc
	// Line 355, Address: 0x19ae58, Func Offset: 0xd8
	// Line 359, Address: 0x19ae64, Func Offset: 0xe4
	// Func End, Address: 0x19ae74, Func Offset: 0xf4
}

// 
// Start address: 0x19ae80
void vcStartCameraSystem()
{
	// Line 377, Address: 0x19ae80, Func Offset: 0
	// Line 378, Address: 0x19ae8c, Func Offset: 0xc
	// Func End, Address: 0x19ae94, Func Offset: 0x14
}

// 
// Start address: 0x19aea0
void vcSetFirstCamWork(float* cam_pos, float chara_eye_ang_y, int use_through_door_cam_f)
{
	// Line 464, Address: 0x19aea0, Func Offset: 0
	// Line 465, Address: 0x19aeb0, Func Offset: 0x10
	// Line 467, Address: 0x19aebc, Func Offset: 0x1c
	// Line 470, Address: 0x19aec8, Func Offset: 0x28
	// Line 471, Address: 0x19aed8, Func Offset: 0x38
	// Line 472, Address: 0x19aee4, Func Offset: 0x44
	// Line 473, Address: 0x19aef0, Func Offset: 0x50
	// Line 474, Address: 0x19af00, Func Offset: 0x60
	// Line 475, Address: 0x19af0c, Func Offset: 0x6c
	// Line 476, Address: 0x19af18, Func Offset: 0x78
	// Line 477, Address: 0x19af24, Func Offset: 0x84
	// Line 479, Address: 0x19af48, Func Offset: 0xa8
	// Line 482, Address: 0x19af78, Func Offset: 0xd8
	// Line 483, Address: 0x19af80, Func Offset: 0xe0
	// Line 487, Address: 0x19af94, Func Offset: 0xf4
	// Func End, Address: 0x19afa8, Func Offset: 0x108
}

// 
// Start address: 0x19afb0
void vcUserWatchTarget(float* watch_tgt_pos, _VC_WATCH_MV_PARAM* watch_prm_p, float rot_z, int warp_watch_f)
{
	// Line 563, Address: 0x19afb0, Func Offset: 0
	// Line 565, Address: 0x19afc4, Func Offset: 0x14
	// Line 566, Address: 0x19afd8, Func Offset: 0x28
	// Line 569, Address: 0x19aff4, Func Offset: 0x44
	// Line 574, Address: 0x19b004, Func Offset: 0x54
	// Line 578, Address: 0x19b00c, Func Offset: 0x5c
	// Line 579, Address: 0x19b04c, Func Offset: 0x9c
	// Line 580, Address: 0x19b074, Func Offset: 0xc4
	// Func End, Address: 0x19b07c, Func Offset: 0xcc
}

// 
// Start address: 0x19b080
void vcUserCamTarget(float* cam_tgt_pos, _VC_CAM_MV_PARAM* cam_prm_p, int warp_cam_f)
{
	// Line 607, Address: 0x19b080, Func Offset: 0
	// Line 609, Address: 0x19b094, Func Offset: 0x14
	// Line 610, Address: 0x19b0a8, Func Offset: 0x28
	// Line 613, Address: 0x19b0c4, Func Offset: 0x44
	// Line 616, Address: 0x19b0d4, Func Offset: 0x54
	// Line 617, Address: 0x19b114, Func Offset: 0x94
	// Line 618, Address: 0x19b13c, Func Offset: 0xbc
	// Func End, Address: 0x19b144, Func Offset: 0xc4
}

// 
// Start address: 0x19b150
void vcGetNowWatchPos(float* watch_pos)
{
	float sin_y;
	float cos_y;
	float sin_x;
	float cos_x;
	float r;
	// Line 635, Address: 0x19b150, Func Offset: 0
	// Line 659, Address: 0x19b16c, Func Offset: 0x1c
	// Line 660, Address: 0x19b180, Func Offset: 0x30
	// Line 661, Address: 0x19b194, Func Offset: 0x44
	// Line 662, Address: 0x19b1a8, Func Offset: 0x58
	// Line 664, Address: 0x19b1b8, Func Offset: 0x68
	// Line 667, Address: 0x19b1fc, Func Offset: 0xac
	// Line 668, Address: 0x19b214, Func Offset: 0xc4
	// Line 669, Address: 0x19b22c, Func Offset: 0xdc
	// Line 671, Address: 0x19b244, Func Offset: 0xf4
	// Func End, Address: 0x19b264, Func Offset: 0x114
}

// 
// Start address: 0x19b270
void vcGetNowCamPos(float* cam_pos)
{
	// Line 692, Address: 0x19b270, Func Offset: 0
	// Line 694, Address: 0x19b280, Func Offset: 0x10
	// Func End, Address: 0x19b288, Func Offset: 0x18
}

// 
// Start address: 0x19b290
void vcReturnPreAutoCamWork(int warp_f)
{
	// Line 712, Address: 0x19b290, Func Offset: 0
	// Line 713, Address: 0x19b298, Func Offset: 0x8
	// Line 715, Address: 0x19b2b8, Func Offset: 0x28
	// Line 716, Address: 0x19b2cc, Func Offset: 0x3c
	// Func End, Address: 0x19b2d8, Func Offset: 0x48
}

// 
// Start address: 0x19b2e0
void vcSetSubjChara(float* chara_pos, float chara_bottom_y, float chara_top_y, float chara_grnd_y, float* chara_head_pos, float chara_mv_spd, float chara_mv_ang_y, float chara_ang_spd_y, float chara_eye_ang_y, float chara_eye_ang_wy, float chara_watch_xz_r)
{
	// Line 754, Address: 0x19b2e0, Func Offset: 0
	// Line 755, Address: 0x19b2f0, Func Offset: 0x10
	// Line 756, Address: 0x19b2f8, Func Offset: 0x18
	// Line 757, Address: 0x19b300, Func Offset: 0x20
	// Line 758, Address: 0x19b31c, Func Offset: 0x3c
	// Line 759, Address: 0x19b324, Func Offset: 0x44
	// Line 760, Address: 0x19b334, Func Offset: 0x54
	// Line 761, Address: 0x19b33c, Func Offset: 0x5c
	// Line 762, Address: 0x19b344, Func Offset: 0x64
	// Line 763, Address: 0x19b34c, Func Offset: 0x6c
	// Line 764, Address: 0x19b354, Func Offset: 0x74
	// Line 765, Address: 0x19b35c, Func Offset: 0x7c
	// Line 766, Address: 0x19b368, Func Offset: 0x88
	// Func End, Address: 0x19b370, Func Offset: 0x90
}

// 
// Start address: 0x19b370
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
	// Line 783, Address: 0x19b370, Func Offset: 0
	// Line 792, Address: 0x19b390, Func Offset: 0x20
	// Line 793, Address: 0x19b3a4, Func Offset: 0x34
	// Line 795, Address: 0x19b3b8, Func Offset: 0x48
	// Line 799, Address: 0x19b3d4, Func Offset: 0x64
	// Line 803, Address: 0x19b3dc, Func Offset: 0x6c
	// Line 809, Address: 0x19b3f4, Func Offset: 0x84
	// Line 811, Address: 0x19b408, Func Offset: 0x98
	// Line 815, Address: 0x19b440, Func Offset: 0xd0
	// Line 816, Address: 0x19b45c, Func Offset: 0xec
	// Line 818, Address: 0x19b470, Func Offset: 0x100
	// Line 819, Address: 0x19b480, Func Offset: 0x110
	// Line 821, Address: 0x19b490, Func Offset: 0x120
	// Line 824, Address: 0x19b4a4, Func Offset: 0x134
	// Line 825, Address: 0x19b4b0, Func Offset: 0x140
	// Line 827, Address: 0x19b4c4, Func Offset: 0x154
	// Line 829, Address: 0x19b4ec, Func Offset: 0x17c
	// Line 832, Address: 0x19b508, Func Offset: 0x198
	// Line 833, Address: 0x19b520, Func Offset: 0x1b0
	// Line 835, Address: 0x19b534, Func Offset: 0x1c4
	// Line 836, Address: 0x19b54c, Func Offset: 0x1dc
	// Line 844, Address: 0x19b55c, Func Offset: 0x1ec
	// Line 849, Address: 0x19b578, Func Offset: 0x208
	// Line 850, Address: 0x19b590, Func Offset: 0x220
	// Line 856, Address: 0x19b5b4, Func Offset: 0x244
	// Line 858, Address: 0x19b5c8, Func Offset: 0x258
	// Line 860, Address: 0x19b5e0, Func Offset: 0x270
	// Line 865, Address: 0x19b600, Func Offset: 0x290
	// Line 871, Address: 0x19b63c, Func Offset: 0x2cc
	// Line 876, Address: 0x19b654, Func Offset: 0x2e4
	// Line 883, Address: 0x19b67c, Func Offset: 0x30c
	// Line 886, Address: 0x19b684, Func Offset: 0x314
	// Line 889, Address: 0x19b698, Func Offset: 0x328
	// Line 890, Address: 0x19b6ac, Func Offset: 0x33c
	// Line 907, Address: 0x19b6b4, Func Offset: 0x344
	// Line 920, Address: 0x19b6d4, Func Offset: 0x364
	// Func End, Address: 0x19b6fc, Func Offset: 0x38c
}

// 
// Start address: 0x19b700
void vcSetAllNpcDeadTimer()
{
	// Line 952, Address: 0x19b700, Func Offset: 0
	// Func End, Address: 0x19b708, Func Offset: 0x8
}

// 
// Start address: 0x19b710
int vcRetSmoothCamMvF(float* old_pos, float* now_pos, float* old_ang, float* now_ang)
{
	float intrpt;
	float rot_y;
	float rot_x;
	float mv_vec;
	// Line 979, Address: 0x19b710, Func Offset: 0
	// Line 985, Address: 0x19b724, Func Offset: 0x14
	// Line 986, Address: 0x19b738, Func Offset: 0x28
	// Line 1009, Address: 0x19b790, Func Offset: 0x80
	// Line 1012, Address: 0x19b7c8, Func Offset: 0xb8
	// Line 1015, Address: 0x19b7f0, Func Offset: 0xe0
	// Line 1017, Address: 0x19b804, Func Offset: 0xf4
	// Line 1019, Address: 0x19b830, Func Offset: 0x120
	// Line 1020, Address: 0x19b858, Func Offset: 0x148
	// Line 1022, Address: 0x19b868, Func Offset: 0x158
	// Line 1025, Address: 0x19b894, Func Offset: 0x184
	// Line 1026, Address: 0x19b898, Func Offset: 0x188
	// Func End, Address: 0x19b8b0, Func Offset: 0x1a0
}

// 
// Start address: 0x19b8b0
_VC_CAM_MV_TYPE vcRetCurCamMvType(_VC_WORK* w_p)
{
	// Line 1043, Address: 0x19b8b0, Func Offset: 0
	// Line 1044, Address: 0x19b8bc, Func Offset: 0xc
	// Line 1045, Address: 0x19b8cc, Func Offset: 0x1c
	// Line 1046, Address: 0x19b8e0, Func Offset: 0x30
	// Line 1048, Address: 0x19b8ec, Func Offset: 0x3c
	// Line 1053, Address: 0x19b8fc, Func Offset: 0x4c
	// Line 1054, Address: 0x19b90c, Func Offset: 0x5c
	// Func End, Address: 0x19b91c, Func Offset: 0x6c
}

// 
// Start address: 0x19b920
int vcRetThroughDoorCamEndF(_VC_WORK* w_p)
{
	float abs_ofs_ang_y;
	float rail2chara_dist;
	_VC_THROUGH_DOOR_CAM_PARAM* prm_p;
	// Line 1071, Address: 0x19b920, Func Offset: 0
	// Line 1075, Address: 0x19b930, Func Offset: 0x10
	// Line 1076, Address: 0x19b934, Func Offset: 0x14
	// Line 1078, Address: 0x19b938, Func Offset: 0x18
	// Line 1081, Address: 0x19b950, Func Offset: 0x30
	// Line 1085, Address: 0x19b994, Func Offset: 0x74
	// Line 1089, Address: 0x19b9a0, Func Offset: 0x80
	// Line 1091, Address: 0x19b9c0, Func Offset: 0xa0
	// Line 1092, Address: 0x19b9cc, Func Offset: 0xac
	// Line 1096, Address: 0x19b9e8, Func Offset: 0xc8
	// Line 1108, Address: 0x19ba1c, Func Offset: 0xfc
	// Line 1112, Address: 0x19ba48, Func Offset: 0x128
	// Line 1113, Address: 0x19ba4c, Func Offset: 0x12c
	// Func End, Address: 0x19ba60, Func Offset: 0x140
}

// 
// Start address: 0x19ba60
float vcRetFarWatchRate(int far_watch_button_prs_f, _VC_CAM_MV_TYPE cur_cam_mv_type, _VC_WORK* w_p)
{
	float abs_ofs_ang_y;
	float dist;
	float far_watch_rate;
	// Line 1134, Address: 0x19ba60, Func Offset: 0
	// Line 1137, Address: 0x19ba74, Func Offset: 0x14
	// Line 1138, Address: 0x19ba8c, Func Offset: 0x2c
	// Line 1140, Address: 0x19ba98, Func Offset: 0x38
	// Line 1143, Address: 0x19bac4, Func Offset: 0x64
	// Line 1144, Address: 0x19bac8, Func Offset: 0x68
	// Line 1148, Address: 0x19bad0, Func Offset: 0x70
	// Line 1149, Address: 0x19bae8, Func Offset: 0x88
	// Line 1150, Address: 0x19baec, Func Offset: 0x8c
	// Line 1152, Address: 0x19baf4, Func Offset: 0x94
	// Line 1157, Address: 0x19bb0c, Func Offset: 0xac
	// Line 1159, Address: 0x19bb10, Func Offset: 0xb0
	// Line 1163, Address: 0x19bb4c, Func Offset: 0xec
	// Line 1165, Address: 0x19bb58, Func Offset: 0xf8
	// Line 1171, Address: 0x19bb74, Func Offset: 0x114
	// Line 1184, Address: 0x19bba8, Func Offset: 0x148
	// Line 1188, Address: 0x19bbd8, Func Offset: 0x178
	// Line 1191, Address: 0x19bbe4, Func Offset: 0x184
	// Line 1193, Address: 0x19bbec, Func Offset: 0x18c
	// Line 1198, Address: 0x19bc14, Func Offset: 0x1b4
	// Line 1199, Address: 0x19bc18, Func Offset: 0x1b8
	// Func End, Address: 0x19bc30, Func Offset: 0x1d0
}

// 
// Start address: 0x19bc30
float vcRetSelfViewEffectRate(_VC_CAM_MV_TYPE cur_cam_mv_type, _VC_WORK* w_p)
{
	float mul_rate;
	float max_rate;
	float xyz_dist;
	float ret_eff_rate;
	// Line 1222, Address: 0x19bc30, Func Offset: 0
	// Line 1223, Address: 0x19bc4c, Func Offset: 0x1c
	// Line 1234, Address: 0x19bc58, Func Offset: 0x28
	// Line 1235, Address: 0x19bc78, Func Offset: 0x48
	// Line 1258, Address: 0x19bc84, Func Offset: 0x54
	// Line 1261, Address: 0x19bcc0, Func Offset: 0x90
	// Line 1262, Address: 0x19bce8, Func Offset: 0xb8
	// Line 1264, Address: 0x19bd10, Func Offset: 0xe0
	// Line 1274, Address: 0x19bd34, Func Offset: 0x104
	// Line 1276, Address: 0x19bd54, Func Offset: 0x124
	// Line 1277, Address: 0x19bd5c, Func Offset: 0x12c
	// Line 1278, Address: 0x19bd64, Func Offset: 0x134
	// Line 1280, Address: 0x19bd84, Func Offset: 0x154
	// Line 1281, Address: 0x19bd88, Func Offset: 0x158
	// Line 1284, Address: 0x19bd90, Func Offset: 0x160
	// Line 1288, Address: 0x19bdb4, Func Offset: 0x184
	// Line 1294, Address: 0x19bdb8, Func Offset: 0x188
	// Line 1299, Address: 0x19bdfc, Func Offset: 0x1cc
	// Func End, Address: 0x19be04, Func Offset: 0x1d4
}

// 
// Start address: 0x19be10
void vcSetFlagsByCamMvType(_VC_CAM_MV_TYPE cam_mv_type, float far_watch_rate, int all_warp_f)
{
	// Line 1320, Address: 0x19be10, Func Offset: 0
	// Line 1322, Address: 0x19be24, Func Offset: 0x14
	// Line 1324, Address: 0x19be3c, Func Offset: 0x2c
	// Line 1326, Address: 0x19be58, Func Offset: 0x48
	// Line 1330, Address: 0x19be88, Func Offset: 0x78
	// Line 1331, Address: 0x19be9c, Func Offset: 0x8c
	// Line 1335, Address: 0x19bea4, Func Offset: 0x94
	// Line 1336, Address: 0x19beb8, Func Offset: 0xa8
	// Line 1337, Address: 0x19bec0, Func Offset: 0xb0
	// Line 1342, Address: 0x19bee8, Func Offset: 0xd8
	// Line 1343, Address: 0x19befc, Func Offset: 0xec
	// Line 1345, Address: 0x19bf10, Func Offset: 0x100
	// Line 1346, Address: 0x19bf1c, Func Offset: 0x10c
	// Line 1348, Address: 0x19bf30, Func Offset: 0x120
	// Line 1349, Address: 0x19bf48, Func Offset: 0x138
	// Line 1350, Address: 0x19bf5c, Func Offset: 0x14c
	// Func End, Address: 0x19bf6c, Func Offset: 0x15c
}

// 
// Start address: 0x19bf70
void vcPreSetDataInVC_WORK(_VC_WORK* w_p, _VC_ROAD_DATA* vc_road_ary)
{
	// Line 1369, Address: 0x19bf70, Func Offset: 0
	// Line 1370, Address: 0x19bf80, Func Offset: 0x10
	// Line 1371, Address: 0x19bf9c, Func Offset: 0x2c
	// Line 1372, Address: 0x19bfb4, Func Offset: 0x44
	// Line 1374, Address: 0x19bfd0, Func Offset: 0x60
	// Line 1376, Address: 0x19bfe4, Func Offset: 0x74
	// Line 1377, Address: 0x19bff4, Func Offset: 0x84
	// Line 1379, Address: 0x19c010, Func Offset: 0xa0
	// Line 1383, Address: 0x19c024, Func Offset: 0xb4
	// Line 1384, Address: 0x19c054, Func Offset: 0xe4
	// Line 1386, Address: 0x19c084, Func Offset: 0x114
	// Line 1388, Address: 0x19c094, Func Offset: 0x124
	// Line 1392, Address: 0x19c0a8, Func Offset: 0x138
	// Line 1398, Address: 0x19c0bc, Func Offset: 0x14c
	// Line 1402, Address: 0x19c0c8, Func Offset: 0x158
	// Line 1411, Address: 0x19c0f0, Func Offset: 0x180
	// Func End, Address: 0x19c100, Func Offset: 0x190
}

// 
// Start address: 0x19c100
void vcSetTHROUGH_DOOR_CAM_PARAM_in_VC_WORK(_VC_WORK* w_p, _THROUGH_DOOR_SET_CMD_TYPE set_cmd_type)
{
	_VC_THROUGH_DOOR_CAM_PARAM* prm_p;
	// Line 1435, Address: 0x19c100, Func Offset: 0
	// Line 1437, Address: 0x19c104, Func Offset: 0x4
	// Line 1439, Address: 0x19c130, Func Offset: 0x30
	// Line 1440, Address: 0x19c138, Func Offset: 0x38
	// Line 1441, Address: 0x19c144, Func Offset: 0x44
	// Line 1443, Address: 0x19c14c, Func Offset: 0x4c
	// Line 1445, Address: 0x19c164, Func Offset: 0x64
	// Line 1446, Address: 0x19c180, Func Offset: 0x80
	// Line 1448, Address: 0x19c188, Func Offset: 0x88
	// Line 1449, Address: 0x19c18c, Func Offset: 0x8c
	// Line 1450, Address: 0x19c198, Func Offset: 0x98
	// Line 1453, Address: 0x19c1a0, Func Offset: 0xa0
	// Line 1454, Address: 0x19c1ac, Func Offset: 0xac
	// Line 1457, Address: 0x19c1dc, Func Offset: 0xdc
	// Line 1463, Address: 0x19c1f0, Func Offset: 0xf0
	// Func End, Address: 0x19c1f8, Func Offset: 0xf8
}

// 
// Start address: 0x19c200
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
	// Line 1481, Address: 0x19c200, Func Offset: 0
	// Line 1483, Address: 0x19c224, Func Offset: 0x24
	// Line 1484, Address: 0x19c228, Func Offset: 0x28
	// Line 1489, Address: 0x19c22c, Func Offset: 0x2c
	// Line 1494, Address: 0x19c240, Func Offset: 0x40
	// Line 1496, Address: 0x19c258, Func Offset: 0x58
	// Line 1497, Address: 0x19c25c, Func Offset: 0x5c
	// Line 1498, Address: 0x19c270, Func Offset: 0x70
	// Line 1568, Address: 0x19c278, Func Offset: 0x78
	// Line 1575, Address: 0x19c27c, Func Offset: 0x7c
	// Line 1577, Address: 0x19c28c, Func Offset: 0x8c
	// Line 1579, Address: 0x19c294, Func Offset: 0x94
	// Line 1581, Address: 0x19c2f0, Func Offset: 0xf0
	// Line 1583, Address: 0x19c2fc, Func Offset: 0xfc
	// Line 1584, Address: 0x19c30c, Func Offset: 0x10c
	// Line 1585, Address: 0x19c31c, Func Offset: 0x11c
	// Line 1597, Address: 0x19c36c, Func Offset: 0x16c
	// Line 1599, Address: 0x19c38c, Func Offset: 0x18c
	// Line 1600, Address: 0x19c39c, Func Offset: 0x19c
	// Line 1601, Address: 0x19c3a0, Func Offset: 0x1a0
	// Line 1602, Address: 0x19c3a4, Func Offset: 0x1a4
	// Line 1604, Address: 0x19c3a8, Func Offset: 0x1a8
	// Line 1606, Address: 0x19c3b4, Func Offset: 0x1b4
	// Line 1607, Address: 0x19c3c4, Func Offset: 0x1c4
	// Line 1608, Address: 0x19c3c8, Func Offset: 0x1c8
	// Line 1609, Address: 0x19c3d0, Func Offset: 0x1d0
	// Line 1613, Address: 0x19c3fc, Func Offset: 0x1fc
	// Line 1614, Address: 0x19c400, Func Offset: 0x200
	// Line 1615, Address: 0x19c408, Func Offset: 0x208
	// Line 1619, Address: 0x19c40c, Func Offset: 0x20c
	// Line 1621, Address: 0x19c410, Func Offset: 0x210
	// Line 1622, Address: 0x19c428, Func Offset: 0x228
	// Line 1623, Address: 0x19c42c, Func Offset: 0x22c
	// Line 1629, Address: 0x19c430, Func Offset: 0x230
	// Line 1630, Address: 0x19c438, Func Offset: 0x238
	// Line 1631, Address: 0x19c43c, Func Offset: 0x23c
	// Line 1632, Address: 0x19c440, Func Offset: 0x240
	// Line 1633, Address: 0x19c448, Func Offset: 0x248
	// Line 1634, Address: 0x19c44c, Func Offset: 0x24c
	// Line 1636, Address: 0x19c450, Func Offset: 0x250
	// Func End, Address: 0x19c478, Func Offset: 0x278
}

// 
// Start address: 0x19c480
void vcSetNearRoadAryByCharaPos(_VC_WORK* w_p, _VC_ROAD_DATA* road_ary, float half_w, int near_enemy_f)
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
	float rm[4][4];
	float roadrot;
	_VC_LIMIT_AREA sw;
	_VC_LIMIT_AREA rd;
	float ppos[4];
	float tmpvec0[4];
	float get_max_z;
	float get_min_z;
	float get_max_x;
	float get_min_x;
	_VC_ROAD_DATA* rd_p;
	// Line 1663, Address: 0x19c480, Func Offset: 0
	// Line 1672, Address: 0x19c4cc, Func Offset: 0x4c
	// Line 1674, Address: 0x19c4d4, Func Offset: 0x54
	// Line 1681, Address: 0x19c4e4, Func Offset: 0x64
	// Line 1682, Address: 0x19c4ec, Func Offset: 0x6c
	// Line 1684, Address: 0x19c4fc, Func Offset: 0x7c
	// Line 1685, Address: 0x19c504, Func Offset: 0x84
	// Line 1687, Address: 0x19c514, Func Offset: 0x94
	// Line 1694, Address: 0x19c518, Func Offset: 0x98
	// Line 1695, Address: 0x19c524, Func Offset: 0xa4
	// Line 1697, Address: 0x19c530, Func Offset: 0xb0
	// Line 1699, Address: 0x19c53c, Func Offset: 0xbc
	// Line 1700, Address: 0x19c564, Func Offset: 0xe4
	// Line 1701, Address: 0x19c578, Func Offset: 0xf8
	// Line 1702, Address: 0x19c584, Func Offset: 0x104
	// Line 1705, Address: 0x19c590, Func Offset: 0x110
	// Line 1706, Address: 0x19c598, Func Offset: 0x118
	// Line 1707, Address: 0x19c5a0, Func Offset: 0x120
	// Line 1708, Address: 0x19c5b4, Func Offset: 0x134
	// Line 1709, Address: 0x19c5bc, Func Offset: 0x13c
	// Line 1710, Address: 0x19c5c4, Func Offset: 0x144
	// Line 1712, Address: 0x19c5d8, Func Offset: 0x158
	// Line 1714, Address: 0x19c5f0, Func Offset: 0x170
	// Line 1715, Address: 0x19c5f8, Func Offset: 0x178
	// Line 1716, Address: 0x19c600, Func Offset: 0x180
	// Line 1719, Address: 0x19c608, Func Offset: 0x188
	// Line 1720, Address: 0x19c610, Func Offset: 0x190
	// Line 1723, Address: 0x19c618, Func Offset: 0x198
	// Line 1725, Address: 0x19c630, Func Offset: 0x1b0
	// Line 1726, Address: 0x19c638, Func Offset: 0x1b8
	// Line 1727, Address: 0x19c640, Func Offset: 0x1c0
	// Line 1730, Address: 0x19c648, Func Offset: 0x1c8
	// Line 1731, Address: 0x19c650, Func Offset: 0x1d0
	// Line 1735, Address: 0x19c658, Func Offset: 0x1d8
	// Line 1736, Address: 0x19c660, Func Offset: 0x1e0
	// Line 1737, Address: 0x19c668, Func Offset: 0x1e8
	// Line 1738, Address: 0x19c67c, Func Offset: 0x1fc
	// Line 1739, Address: 0x19c684, Func Offset: 0x204
	// Line 1740, Address: 0x19c68c, Func Offset: 0x20c
	// Line 1742, Address: 0x19c6a0, Func Offset: 0x220
	// Line 1744, Address: 0x19c6b8, Func Offset: 0x238
	// Line 1745, Address: 0x19c6c0, Func Offset: 0x240
	// Line 1746, Address: 0x19c6c8, Func Offset: 0x248
	// Line 1749, Address: 0x19c6d0, Func Offset: 0x250
	// Line 1750, Address: 0x19c6d8, Func Offset: 0x258
	// Line 1753, Address: 0x19c6e0, Func Offset: 0x260
	// Line 1755, Address: 0x19c6f8, Func Offset: 0x278
	// Line 1756, Address: 0x19c700, Func Offset: 0x280
	// Line 1757, Address: 0x19c708, Func Offset: 0x288
	// Line 1760, Address: 0x19c710, Func Offset: 0x290
	// Line 1761, Address: 0x19c718, Func Offset: 0x298
	// Line 1765, Address: 0x19c720, Func Offset: 0x2a0
	// Line 1766, Address: 0x19c728, Func Offset: 0x2a8
	// Line 1767, Address: 0x19c730, Func Offset: 0x2b0
	// Line 1769, Address: 0x19c744, Func Offset: 0x2c4
	// Line 1770, Address: 0x19c74c, Func Offset: 0x2cc
	// Line 1771, Address: 0x19c754, Func Offset: 0x2d4
	// Line 1772, Address: 0x19c75c, Func Offset: 0x2dc
	// Line 1775, Address: 0x19c764, Func Offset: 0x2e4
	// Line 1776, Address: 0x19c768, Func Offset: 0x2e8
	// Line 1777, Address: 0x19c76c, Func Offset: 0x2ec
	// Line 1778, Address: 0x19c770, Func Offset: 0x2f0
	// Line 1779, Address: 0x19c774, Func Offset: 0x2f4
	// Line 1780, Address: 0x19c778, Func Offset: 0x2f8
	// Line 1781, Address: 0x19c77c, Func Offset: 0x2fc
	// Line 1782, Address: 0x19c780, Func Offset: 0x300
	// Line 1784, Address: 0x19c784, Func Offset: 0x304
	// Line 1800, Address: 0x19c808, Func Offset: 0x388
	// Line 1801, Address: 0x19c828, Func Offset: 0x3a8
	// Line 1802, Address: 0x19c82c, Func Offset: 0x3ac
	// Line 1813, Address: 0x19c864, Func Offset: 0x3e4
	// Line 1814, Address: 0x19c87c, Func Offset: 0x3fc
	// Line 1816, Address: 0x19c894, Func Offset: 0x414
	// Line 1817, Address: 0x19c8ac, Func Offset: 0x42c
	// Line 1820, Address: 0x19c8c4, Func Offset: 0x444
	// Line 1822, Address: 0x19c8c8, Func Offset: 0x448
	// Line 1824, Address: 0x19c8d4, Func Offset: 0x454
	// Line 1825, Address: 0x19c8dc, Func Offset: 0x45c
	// Line 1827, Address: 0x19c8f0, Func Offset: 0x470
	// Line 1828, Address: 0x19c8f4, Func Offset: 0x474
	// Line 1829, Address: 0x19c8f8, Func Offset: 0x478
	// Line 1830, Address: 0x19c8fc, Func Offset: 0x47c
	// Line 1831, Address: 0x19c900, Func Offset: 0x480
	// Line 1832, Address: 0x19c904, Func Offset: 0x484
	// Line 1833, Address: 0x19c908, Func Offset: 0x488
	// Line 1834, Address: 0x19c90c, Func Offset: 0x48c
	// Line 1835, Address: 0x19c910, Func Offset: 0x490
	// Line 1836, Address: 0x19c918, Func Offset: 0x498
	// Line 1837, Address: 0x19c920, Func Offset: 0x4a0
	// Line 1838, Address: 0x19c928, Func Offset: 0x4a8
	// Line 1839, Address: 0x19c930, Func Offset: 0x4b0
	// Line 1841, Address: 0x19c958, Func Offset: 0x4d8
	// Line 1842, Address: 0x19c980, Func Offset: 0x500
	// Line 1843, Address: 0x19c9a0, Func Offset: 0x520
	// Line 1844, Address: 0x19c9a8, Func Offset: 0x528
	// Line 1846, Address: 0x19c9b0, Func Offset: 0x530
	// Line 1850, Address: 0x19c9d8, Func Offset: 0x558
	// Line 1851, Address: 0x19c9e4, Func Offset: 0x564
	// Line 1853, Address: 0x19ca1c, Func Offset: 0x59c
	// Line 1854, Address: 0x19ca30, Func Offset: 0x5b0
	// Func End, Address: 0x19ca78, Func Offset: 0x5f8
}

// 
// Start address: 0x19ca80
int vcRetRoadUsePriority(_VC_ROAD_TYPE rd_type)
{
	// Line 1871, Address: 0x19ca80, Func Offset: 0
	// Line 1874, Address: 0x19ca8c, Func Offset: 0xc
	// Line 1875, Address: 0x19cabc, Func Offset: 0x3c
	// Line 1876, Address: 0x19cac8, Func Offset: 0x48
	// Line 1877, Address: 0x19cad4, Func Offset: 0x54
	// Line 1878, Address: 0x19cae0, Func Offset: 0x60
	// Line 1882, Address: 0x19cb08, Func Offset: 0x88
	// Func End, Address: 0x19cb18, Func Offset: 0x98
}

// 
// Start address: 0x19cb20
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
	// Line 1900, Address: 0x19cb20, Func Offset: 0
	// Line 1906, Address: 0x19cb3c, Func Offset: 0x1c
	// Line 1909, Address: 0x19cb40, Func Offset: 0x20
	// Line 1916, Address: 0x19cb60, Func Offset: 0x40
	// Line 1920, Address: 0x19cb74, Func Offset: 0x54
	// Line 1921, Address: 0x19cb88, Func Offset: 0x68
	// Line 1922, Address: 0x19cb90, Func Offset: 0x70
	// Line 1944, Address: 0x19cbcc, Func Offset: 0xac
	// Line 1946, Address: 0x19cbd4, Func Offset: 0xb4
	// Line 1948, Address: 0x19cca8, Func Offset: 0x188
	// Line 1950, Address: 0x19ccb4, Func Offset: 0x194
	// Line 1955, Address: 0x19ccc4, Func Offset: 0x1a4
	// Line 1958, Address: 0x19cd00, Func Offset: 0x1e0
	// Line 1959, Address: 0x19cd2c, Func Offset: 0x20c
	// Line 1960, Address: 0x19cd34, Func Offset: 0x214
	// Line 1963, Address: 0x19cd6c, Func Offset: 0x24c
	// Line 1964, Address: 0x19ce40, Func Offset: 0x320
	// Line 1969, Address: 0x19ce48, Func Offset: 0x328
	// Line 1972, Address: 0x19ce50, Func Offset: 0x330
	// Line 1973, Address: 0x19ce70, Func Offset: 0x350
	// Line 1974, Address: 0x19ce84, Func Offset: 0x364
	// Line 1975, Address: 0x19cea0, Func Offset: 0x380
	// Line 1978, Address: 0x19cec8, Func Offset: 0x3a8
	// Line 1980, Address: 0x19cee4, Func Offset: 0x3c4
	// Line 1981, Address: 0x19cf1c, Func Offset: 0x3fc
	// Line 1984, Address: 0x19cf58, Func Offset: 0x438
	// Line 1985, Address: 0x19cf78, Func Offset: 0x458
	// Line 1986, Address: 0x19cfa4, Func Offset: 0x484
	// Line 1987, Address: 0x19cfac, Func Offset: 0x48c
	// Line 1988, Address: 0x19cfec, Func Offset: 0x4cc
	// Line 1989, Address: 0x19d018, Func Offset: 0x4f8
	// Line 1990, Address: 0x19d020, Func Offset: 0x500
	// Line 1996, Address: 0x19d0f4, Func Offset: 0x5d4
	// Line 1997, Address: 0x19d0f8, Func Offset: 0x5d8
	// Func End, Address: 0x19d118, Func Offset: 0x5f8
}

// 
// Start address: 0x19d120
float vcGetBestNewCurNearRoad(_VC_NEAR_ROAD_DATA** new_cur_pp, _enum_1 chk_type, float* pos, _VC_WORK* w_p)
{
	float dummy;
	int renewal_f;
	int renewal_f;
	int renewal_f;
	int new_cur_priority;
	float evnt_min_dist;
	float eff_min_dist;
	float road_min_dist;
	_VC_NEAR_ROAD_DATA* evnt_nearest_p;
	_VC_NEAR_ROAD_DATA* eff_nearest_p;
	_VC_NEAR_ROAD_DATA* road_nearest_p;
	float new_cur_dist;
	_VC_NEAR_ROAD_DATA* new_cur_p;
	// Line 2024, Address: 0x19d120, Func Offset: 0
	// Line 2030, Address: 0x19d14c, Func Offset: 0x2c
	// Line 2031, Address: 0x19d150, Func Offset: 0x30
	// Line 2044, Address: 0x19d164, Func Offset: 0x44
	// Line 2045, Address: 0x19d188, Func Offset: 0x68
	// Line 2046, Address: 0x19d1ac, Func Offset: 0x8c
	// Line 2051, Address: 0x19d1d0, Func Offset: 0xb0
	// Line 2075, Address: 0x19d1d4, Func Offset: 0xb4
	// Line 2076, Address: 0x19d2c8, Func Offset: 0x1a8
	// Line 2077, Address: 0x19d3bc, Func Offset: 0x29c
	// Line 2080, Address: 0x19d4b0, Func Offset: 0x390
	// Line 2083, Address: 0x19d4b8, Func Offset: 0x398
	// Line 2084, Address: 0x19d4c0, Func Offset: 0x3a0
	// Line 2096, Address: 0x19d514, Func Offset: 0x3f4
	// Line 2098, Address: 0x19d51c, Func Offset: 0x3fc
	// Line 2099, Address: 0x19d520, Func Offset: 0x400
	// Func End, Address: 0x19d544, Func Offset: 0x424
}

// 
// Start address: 0x19d550
float vcGetNearestNEAR_ROAD_DATA(_VC_NEAR_ROAD_DATA** out_nearest_p_addr, _enum_1 chk_type, _VC_ROAD_TYPE rd_type, float* pos, _VC_WORK* w_p, int chk_only_set_marge_f)
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
	// Line 2132, Address: 0x19d550, Func Offset: 0
	// Line 2139, Address: 0x19d578, Func Offset: 0x28
	// Line 2140, Address: 0x19d57c, Func Offset: 0x2c
	// Line 2142, Address: 0x19d590, Func Offset: 0x40
	// Line 2149, Address: 0x19d5a0, Func Offset: 0x50
	// Line 2151, Address: 0x19d5b8, Func Offset: 0x68
	// Line 2152, Address: 0x19d5c4, Func Offset: 0x74
	// Line 2156, Address: 0x19d5d8, Func Offset: 0x88
	// Line 2158, Address: 0x19d5fc, Func Offset: 0xac
	// Line 2159, Address: 0x19d604, Func Offset: 0xb4
	// Line 2160, Address: 0x19d60c, Func Offset: 0xbc
	// Line 2161, Address: 0x19d614, Func Offset: 0xc4
	// Line 2162, Address: 0x19d61c, Func Offset: 0xcc
	// Line 2164, Address: 0x19d624, Func Offset: 0xd4
	// Line 2165, Address: 0x19d62c, Func Offset: 0xdc
	// Line 2166, Address: 0x19d634, Func Offset: 0xe4
	// Line 2167, Address: 0x19d63c, Func Offset: 0xec
	// Line 2168, Address: 0x19d644, Func Offset: 0xf4
	// Line 2170, Address: 0x19d64c, Func Offset: 0xfc
	// Line 2174, Address: 0x19d674, Func Offset: 0x124
	// Line 2176, Address: 0x19d688, Func Offset: 0x138
	// Line 2184, Address: 0x19d6c0, Func Offset: 0x170
	// Line 2187, Address: 0x19d6d8, Func Offset: 0x188
	// Line 2190, Address: 0x19d710, Func Offset: 0x1c0
	// Line 2191, Address: 0x19d718, Func Offset: 0x1c8
	// Line 2192, Address: 0x19d71c, Func Offset: 0x1cc
	// Line 2194, Address: 0x19d720, Func Offset: 0x1d0
	// Line 2196, Address: 0x19d75c, Func Offset: 0x20c
	// Line 2198, Address: 0x19d764, Func Offset: 0x214
	// Line 2199, Address: 0x19d768, Func Offset: 0x218
	// Func End, Address: 0x19d780, Func Offset: 0x230
}

// 
// Start address: 0x19d780
float vcAdvantageDistOfOldCurRoad(_VC_NEAR_ROAD_DATA* old_cur_p)
{
	// Line 2222, Address: 0x19d780, Func Offset: 0
	// Line 2223, Address: 0x19d78c, Func Offset: 0xc
	// Line 2224, Address: 0x19d7ac, Func Offset: 0x2c
	// Line 2227, Address: 0x19d7b8, Func Offset: 0x38
	// Line 2228, Address: 0x19d7e4, Func Offset: 0x64
	// Line 2231, Address: 0x19d80c, Func Offset: 0x8c
	// Line 2233, Address: 0x19d834, Func Offset: 0xb4
	// Line 2235, Address: 0x19d83c, Func Offset: 0xbc
	// Func End, Address: 0x19d84c, Func Offset: 0xcc
}

// 
// Start address: 0x19d850
void vcAutoRenewalWatchTgtPosAndAngZ(_VC_WORK* w_p, _VC_CAM_MV_TYPE cam_mv_type, _VC_AREA_SIZE_TYPE cur_rd_area_size, float far_watch_rate, float self_view_eff_rate)
{
	float far_watch_pos[4];
	// Line 2261, Address: 0x19d850, Func Offset: 0
	// Line 2264, Address: 0x19d880, Func Offset: 0x30
	// Line 2269, Address: 0x19d894, Func Offset: 0x44
	// Line 2270, Address: 0x19d8c0, Func Offset: 0x70
	// Line 2276, Address: 0x19d8e8, Func Offset: 0x98
	// Line 2281, Address: 0x19d904, Func Offset: 0xb4
	// Line 2284, Address: 0x19d91c, Func Offset: 0xcc
	// Line 2285, Address: 0x19d924, Func Offset: 0xd4
	// Line 2286, Address: 0x19d928, Func Offset: 0xd8
	// Line 2287, Address: 0x19d92c, Func Offset: 0xdc
	// Line 2288, Address: 0x19d930, Func Offset: 0xe0
	// Line 2289, Address: 0x19d938, Func Offset: 0xe8
	// Line 2290, Address: 0x19d93c, Func Offset: 0xec
	// Line 2291, Address: 0x19d940, Func Offset: 0xf0
	// Line 2292, Address: 0x19d944, Func Offset: 0xf4
	// Line 2311, Address: 0x19d948, Func Offset: 0xf8
	// Line 2313, Address: 0x19d950, Func Offset: 0x100
	// Line 2317, Address: 0x19d960, Func Offset: 0x110
	// Line 2326, Address: 0x19d98c, Func Offset: 0x13c
	// Line 2327, Address: 0x19d9a4, Func Offset: 0x154
	// Line 2328, Address: 0x19d9ac, Func Offset: 0x15c
	// Func End, Address: 0x19d9d0, Func Offset: 0x180
}

// 
// Start address: 0x19d9d0
void vcMakeNormalWatchTgtPos(float* watch_tgt_pos, float* watch_tgt_ang_z_p, _VC_WORK* w_p, _VC_CAM_MV_TYPE cam_mv_type, _VC_AREA_SIZE_TYPE cur_rd_area_size)
{
	float cam2chara_dist;
	float min_cam2watch_dist;
	float vec[4];
	float ang[4];
	float tgt_chara2watch_cir_dist;
	float tgt_watch_cir_r;
	float watch_y;
	// Line 2354, Address: 0x19d9d0, Func Offset: 0
	// Line 2364, Address: 0x19d9f4, Func Offset: 0x24
	// Line 2366, Address: 0x19da00, Func Offset: 0x30
	// Line 2370, Address: 0x19da10, Func Offset: 0x40
	// Line 2371, Address: 0x19da18, Func Offset: 0x48
	// Line 2372, Address: 0x19da24, Func Offset: 0x54
	// Line 2374, Address: 0x19da30, Func Offset: 0x60
	// Line 2376, Address: 0x19da48, Func Offset: 0x78
	// Line 2377, Address: 0x19da60, Func Offset: 0x90
	// Line 2379, Address: 0x19da70, Func Offset: 0xa0
	// Line 2387, Address: 0x19da78, Func Offset: 0xa8
	// Line 2389, Address: 0x19daa4, Func Offset: 0xd4
	// Line 2390, Address: 0x19dabc, Func Offset: 0xec
	// Line 2392, Address: 0x19dad4, Func Offset: 0x104
	// Line 2395, Address: 0x19db10, Func Offset: 0x140
	// Line 2397, Address: 0x19db38, Func Offset: 0x168
	// Line 2398, Address: 0x19db3c, Func Offset: 0x16c
	// Line 2404, Address: 0x19db44, Func Offset: 0x174
	// Line 2405, Address: 0x19db58, Func Offset: 0x188
	// Line 2407, Address: 0x19db60, Func Offset: 0x190
	// Line 2408, Address: 0x19db68, Func Offset: 0x198
	// Line 2414, Address: 0x19db6c, Func Offset: 0x19c
	// Line 2416, Address: 0x19db80, Func Offset: 0x1b0
	// Line 2421, Address: 0x19db98, Func Offset: 0x1c8
	// Line 2425, Address: 0x19dbb0, Func Offset: 0x1e0
	// Func End, Address: 0x19dbd0, Func Offset: 0x200
}

// 
// Start address: 0x19dbd0
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
	// Line 2455, Address: 0x19dbd0, Func Offset: 0
	// Line 2468, Address: 0x19dc10, Func Offset: 0x40
	// Line 2470, Address: 0x19dc28, Func Offset: 0x58
	// Line 2472, Address: 0x19dc48, Func Offset: 0x78
	// Line 2474, Address: 0x19dc64, Func Offset: 0x94
	// Line 2475, Address: 0x19dc78, Func Offset: 0xa8
	// Line 2477, Address: 0x19dce0, Func Offset: 0x110
	// Line 2481, Address: 0x19dd00, Func Offset: 0x130
	// Line 2483, Address: 0x19dd10, Func Offset: 0x140
	// Line 2491, Address: 0x19dd28, Func Offset: 0x158
	// Line 2498, Address: 0x19dd60, Func Offset: 0x190
	// Line 2499, Address: 0x19dd6c, Func Offset: 0x19c
	// Line 2502, Address: 0x19dd78, Func Offset: 0x1a8
	// Line 2504, Address: 0x19dd80, Func Offset: 0x1b0
	// Line 2508, Address: 0x19dd94, Func Offset: 0x1c4
	// Line 2512, Address: 0x19de18, Func Offset: 0x248
	// Line 2513, Address: 0x19de24, Func Offset: 0x254
	// Line 2516, Address: 0x19de2c, Func Offset: 0x25c
	// Line 2517, Address: 0x19de38, Func Offset: 0x268
	// Line 2518, Address: 0x19de44, Func Offset: 0x274
	// Line 2519, Address: 0x19de4c, Func Offset: 0x27c
	// Line 2522, Address: 0x19de68, Func Offset: 0x298
	// Line 2531, Address: 0x19de70, Func Offset: 0x2a0
	// Line 2532, Address: 0x19de78, Func Offset: 0x2a8
	// Line 2533, Address: 0x19de98, Func Offset: 0x2c8
	// Line 2534, Address: 0x19ded0, Func Offset: 0x300
	// Line 2535, Address: 0x19def8, Func Offset: 0x328
	// Line 2536, Address: 0x19df00, Func Offset: 0x330
	// Line 2539, Address: 0x19df04, Func Offset: 0x334
	// Line 2542, Address: 0x19df14, Func Offset: 0x344
	// Line 2549, Address: 0x19df1c, Func Offset: 0x34c
	// Line 2550, Address: 0x19df2c, Func Offset: 0x35c
	// Line 2552, Address: 0x19df94, Func Offset: 0x3c4
	// Line 2557, Address: 0x19dfa4, Func Offset: 0x3d4
	// Line 2566, Address: 0x19e00c, Func Offset: 0x43c
	// Line 2567, Address: 0x19e028, Func Offset: 0x458
	// Line 2570, Address: 0x19e030, Func Offset: 0x460
	// Line 2571, Address: 0x19e03c, Func Offset: 0x46c
	// Line 2572, Address: 0x19e050, Func Offset: 0x480
	// Line 2573, Address: 0x19e058, Func Offset: 0x488
	// Line 2576, Address: 0x19e074, Func Offset: 0x4a4
	// Line 2585, Address: 0x19e07c, Func Offset: 0x4ac
	// Line 2587, Address: 0x19e094, Func Offset: 0x4c4
	// Line 2590, Address: 0x19e0b0, Func Offset: 0x4e0
	// Line 2594, Address: 0x19e0cc, Func Offset: 0x4fc
	// Line 2599, Address: 0x19e0e8, Func Offset: 0x518
	// Line 2601, Address: 0x19e148, Func Offset: 0x578
	// Line 2602, Address: 0x19e160, Func Offset: 0x590
	// Line 2611, Address: 0x19e168, Func Offset: 0x598
	// Line 2614, Address: 0x19e184, Func Offset: 0x5b4
	// Line 2622, Address: 0x19e200, Func Offset: 0x630
	// Line 2623, Address: 0x19e214, Func Offset: 0x644
	// Line 2625, Address: 0x19e224, Func Offset: 0x654
	// Line 2628, Address: 0x19e254, Func Offset: 0x684
	// Line 2631, Address: 0x19e284, Func Offset: 0x6b4
	// Line 2634, Address: 0x19e2a0, Func Offset: 0x6d0
	// Line 2635, Address: 0x19e2b8, Func Offset: 0x6e8
	// Line 2636, Address: 0x19e2d4, Func Offset: 0x704
	// Line 2638, Address: 0x19e2e8, Func Offset: 0x718
	// Func End, Address: 0x19e318, Func Offset: 0x748
}

// 
// Start address: 0x19e320
void vcMakeFarWatchTgtPos(float* watch_tgt_pos, _VC_WORK* w_p, _VC_AREA_SIZE_TYPE cur_rd_area_size)
{
	float cir_3d_r;
	float dist;
	float chr2cam_dist;
	float tmpvec[4];
	float real_ang_x;
	float real_ang_y;
	int enemy_kind;
	float lim_y;
	float adj_dist;
	SubCharacter* sc_p;
	float ofs_y;
	float use_dist;
	float ofs_ang_x;
	float search[4];
	float watch_y;
	float cir_r;
	// Line 2660, Address: 0x19e320, Func Offset: 0
	// Line 2667, Address: 0x19e34c, Func Offset: 0x2c
	// Line 2670, Address: 0x19e364, Func Offset: 0x44
	// Line 2675, Address: 0x19e378, Func Offset: 0x58
	// Line 2684, Address: 0x19e384, Func Offset: 0x64
	// Line 2685, Address: 0x19e388, Func Offset: 0x68
	// Line 2686, Address: 0x19e38c, Func Offset: 0x6c
	// Line 2690, Address: 0x19e39c, Func Offset: 0x7c
	// Line 2691, Address: 0x19e3bc, Func Offset: 0x9c
	// Line 2693, Address: 0x19e3f4, Func Offset: 0xd4
	// Line 2695, Address: 0x19e3fc, Func Offset: 0xdc
	// Line 2697, Address: 0x19e400, Func Offset: 0xe0
	// Line 2698, Address: 0x19e414, Func Offset: 0xf4
	// Line 2701, Address: 0x19e438, Func Offset: 0x118
	// Line 2731, Address: 0x19e43c, Func Offset: 0x11c
	// Line 2733, Address: 0x19e444, Func Offset: 0x124
	// Line 2736, Address: 0x19e4ac, Func Offset: 0x18c
	// Line 2738, Address: 0x19e4bc, Func Offset: 0x19c
	// Line 2802, Address: 0x19e4c0, Func Offset: 0x1a0
	// Line 2804, Address: 0x19e4ec, Func Offset: 0x1cc
	// Line 2807, Address: 0x19e514, Func Offset: 0x1f4
	// Line 2811, Address: 0x19e53c, Func Offset: 0x21c
	// Line 2820, Address: 0x19e554, Func Offset: 0x234
	// Line 2831, Address: 0x19e564, Func Offset: 0x244
	// Line 2838, Address: 0x19e584, Func Offset: 0x264
	// Line 2842, Address: 0x19e5b0, Func Offset: 0x290
	// Line 2846, Address: 0x19e5dc, Func Offset: 0x2bc
	// Line 2847, Address: 0x19e5e0, Func Offset: 0x2c0
	// Line 2849, Address: 0x19e5f0, Func Offset: 0x2d0
	// Line 2850, Address: 0x19e600, Func Offset: 0x2e0
	// Line 2851, Address: 0x19e630, Func Offset: 0x310
	// Line 2853, Address: 0x19e640, Func Offset: 0x320
	// Line 2857, Address: 0x19e65c, Func Offset: 0x33c
	// Line 2859, Address: 0x19e66c, Func Offset: 0x34c
	// Line 2860, Address: 0x19e67c, Func Offset: 0x35c
	// Line 2866, Address: 0x19e6ac, Func Offset: 0x38c
	// Line 2867, Address: 0x19e6b8, Func Offset: 0x398
	// Line 2869, Address: 0x19e6bc, Func Offset: 0x39c
	// Line 2870, Address: 0x19e6c0, Func Offset: 0x3a0
	// Line 2871, Address: 0x19e700, Func Offset: 0x3e0
	// Line 2873, Address: 0x19e718, Func Offset: 0x3f8
	// Line 2874, Address: 0x19e724, Func Offset: 0x404
	// Line 2876, Address: 0x19e734, Func Offset: 0x414
	// Func End, Address: 0x19e760, Func Offset: 0x440
}

// 
// Start address: 0x19e760
void vcSetWatchTgtXzPos(float* watch_pos, float* center_pos, float* cam_pos, float tgt_chara2watch_cir_dist, float tgt_watch_cir_r, float watch_cir_ang_y)
{
	float chr2watch_z;
	float chr2watch_x;
	float cam2chr_ang;
	// Line 2904, Address: 0x19e760, Func Offset: 0
	// Line 2912, Address: 0x19e784, Func Offset: 0x24
	// Line 2916, Address: 0x19e7b8, Func Offset: 0x58
	// Line 2919, Address: 0x19e7e8, Func Offset: 0x88
	// Line 2923, Address: 0x19e818, Func Offset: 0xb8
	// Line 2924, Address: 0x19e830, Func Offset: 0xd0
	// Line 2925, Address: 0x19e848, Func Offset: 0xe8
	// Func End, Address: 0x19e85c, Func Offset: 0xfc
}

// 
// Start address: 0x19e860
void vcSetWatchTgtYParam(float* watch_pos, _VC_WORK* w_p, _VC_CAM_MV_TYPE cam_mv_type, float watch_y)
{
	// Line 2949, Address: 0x19e860, Func Offset: 0
	// Line 2950, Address: 0x19e874, Func Offset: 0x14
	// Line 2952, Address: 0x19e890, Func Offset: 0x30
	// Line 2953, Address: 0x19e8a0, Func Offset: 0x40
	// Line 2955, Address: 0x19e8a8, Func Offset: 0x48
	// Line 2957, Address: 0x19e8b4, Func Offset: 0x54
	// Func End, Address: 0x19e8c0, Func Offset: 0x60
}

// 
// Start address: 0x19e8c0
void vcAdjustWatchYLimitHighWhenFarView(float* watch_pos, float* cam_pos)
{
	float ofs_y;
	float dist;
	float cam_ang_x;
	float max_cam_ang_x;
	// Line 2977, Address: 0x19e8c0, Func Offset: 0
	// Line 2983, Address: 0x19e8e0, Func Offset: 0x20
	// Line 2988, Address: 0x19e940, Func Offset: 0x80
	// Line 2990, Address: 0x19e964, Func Offset: 0xa4
	// Line 2992, Address: 0x19e970, Func Offset: 0xb0
	// Line 2995, Address: 0x19e980, Func Offset: 0xc0
	// Line 2996, Address: 0x19e990, Func Offset: 0xd0
	// Line 2999, Address: 0x19e9c8, Func Offset: 0x108
	// Func End, Address: 0x19e9e8, Func Offset: 0x128
}

// 
// Start address: 0x19e9f0
void vcAutoRenewalCamTgtPos(_VC_WORK* w_p, _VC_CAM_MV_TYPE cam_mv_type, _VC_CAM_MV_PARAM* cam_mv_prm_p, _VC_ROAD_FLAGS cur_rd_flags, _VC_AREA_SIZE_TYPE cur_rd_area_size)
{
	_enum_0 make_type;
	float max_tgt_mv_xz_len;
	float ideal_pos[4];
	float tgt_vec[4];
	// Line 3026, Address: 0x19e9f0, Func Offset: 0
	// Line 3032, Address: 0x19ea24, Func Offset: 0x34
	// Line 3034, Address: 0x19ea60, Func Offset: 0x70
	// Line 3035, Address: 0x19ea74, Func Offset: 0x84
	// Line 3037, Address: 0x19ea7c, Func Offset: 0x8c
	// Line 3038, Address: 0x19ea8c, Func Offset: 0x9c
	// Line 3040, Address: 0x19ea94, Func Offset: 0xa4
	// Line 3041, Address: 0x19eaa4, Func Offset: 0xb4
	// Line 3043, Address: 0x19eaac, Func Offset: 0xbc
	// Line 3044, Address: 0x19eabc, Func Offset: 0xcc
	// Line 3046, Address: 0x19eac4, Func Offset: 0xd4
	// Line 3050, Address: 0x19ead8, Func Offset: 0xe8
	// Line 3051, Address: 0x19eaf0, Func Offset: 0x100
	// Line 3060, Address: 0x19eb00, Func Offset: 0x110
	// Line 3062, Address: 0x19eb2c, Func Offset: 0x13c
	// Line 3068, Address: 0x19eb54, Func Offset: 0x164
	// Line 3069, Address: 0x19eb58, Func Offset: 0x168
	// Line 3071, Address: 0x19eb60, Func Offset: 0x170
	// Line 3075, Address: 0x19eb64, Func Offset: 0x174
	// Line 3077, Address: 0x19eb84, Func Offset: 0x194
	// Line 3079, Address: 0x19eb98, Func Offset: 0x1a8
	// Line 3084, Address: 0x19ebb0, Func Offset: 0x1c0
	// Line 3087, Address: 0x19ebcc, Func Offset: 0x1dc
	// Line 3093, Address: 0x19ebe4, Func Offset: 0x1f4
	// Line 3094, Address: 0x19ebf4, Func Offset: 0x204
	// Line 3099, Address: 0x19ec04, Func Offset: 0x214
	// Line 3103, Address: 0x19ec0c, Func Offset: 0x21c
	// Line 3104, Address: 0x19ec14, Func Offset: 0x224
	// Line 3113, Address: 0x19ec2c, Func Offset: 0x23c
	// Line 3115, Address: 0x19ec3c, Func Offset: 0x24c
	// Line 3116, Address: 0x19ec70, Func Offset: 0x280
	// Line 3120, Address: 0x19ec8c, Func Offset: 0x29c
	// Line 3124, Address: 0x19ecc4, Func Offset: 0x2d4
	// Line 3125, Address: 0x19ece8, Func Offset: 0x2f8
	// Line 3126, Address: 0x19ecf0, Func Offset: 0x300
	// Line 3127, Address: 0x19ecfc, Func Offset: 0x30c
	// Line 3128, Address: 0x19ed08, Func Offset: 0x318
	// Line 3130, Address: 0x19ed14, Func Offset: 0x324
	// Func End, Address: 0x19ed3c, Func Offset: 0x34c
}

// 
// Start address: 0x19ed40
float vcRetMaxTgtMvXzLen(_VC_WORK* w_p, _VC_CAM_MV_PARAM* cam_mv_prm_p)
{
	float max_spd_xz;
	// Line 3156, Address: 0x19ed40, Func Offset: 0
	// Line 3189, Address: 0x19ed6c, Func Offset: 0x2c
	// Line 3193, Address: 0x19ed8c, Func Offset: 0x4c
	// Line 3194, Address: 0x19ed98, Func Offset: 0x58
	// Func End, Address: 0x19eda0, Func Offset: 0x60
}

// 
// Start address: 0x19eda0
void vcMakeIdealCamPosByHeadPos(float* ideal_pos, _VC_WORK* w_p)
{
	float chara2cam_ang_y;
	// Line 3217, Address: 0x19eda0, Func Offset: 0
	// Line 3220, Address: 0x19edbc, Func Offset: 0x1c
	// Line 3224, Address: 0x19edd0, Func Offset: 0x30
	// Line 3225, Address: 0x19ede4, Func Offset: 0x44
	// Line 3226, Address: 0x19edec, Func Offset: 0x4c
	// Line 3230, Address: 0x19edf4, Func Offset: 0x54
	// Line 3232, Address: 0x19ee18, Func Offset: 0x78
	// Line 3233, Address: 0x19ee30, Func Offset: 0x90
	// Line 3235, Address: 0x19ee58, Func Offset: 0xb8
	// Line 3238, Address: 0x19ee80, Func Offset: 0xe0
	// Func End, Address: 0x19ee9c, Func Offset: 0xfc
}

// 
// Start address: 0x19eea0
void vcMakeIdealCamPosForFixAngCam(float* ideal_pos, _VC_WORK* w_p)
{
	float rate;
	float chara2cam_dist;
	float cppos[4];
	float lim2chara_dist;
	float abs_ofs_z;
	float abs_ofs_x;
	float chara_front_r;
	float front2cam_dist;
	_VC_LIMIT_AREA* lim_p;
	float ang[4];
	// Line 3258, Address: 0x19eea0, Func Offset: 0
	// Line 3264, Address: 0x19eec8, Func Offset: 0x28
	// Line 3265, Address: 0x19eed0, Func Offset: 0x30
	// Line 3266, Address: 0x19eedc, Func Offset: 0x3c
	// Line 3268, Address: 0x19eee8, Func Offset: 0x48
	// Line 3276, Address: 0x19eeec, Func Offset: 0x4c
	// Line 3278, Address: 0x19ef00, Func Offset: 0x60
	// Line 3287, Address: 0x19ef2c, Func Offset: 0x8c
	// Line 3288, Address: 0x19ef38, Func Offset: 0x98
	// Line 3289, Address: 0x19ef44, Func Offset: 0xa4
	// Line 3290, Address: 0x19ef50, Func Offset: 0xb0
	// Line 3300, Address: 0x19ef74, Func Offset: 0xd4
	// Line 3302, Address: 0x19efa0, Func Offset: 0x100
	// Line 3303, Address: 0x19efc0, Func Offset: 0x120
	// Line 3304, Address: 0x19efc4, Func Offset: 0x124
	// Line 3305, Address: 0x19efec, Func Offset: 0x14c
	// Line 3306, Address: 0x19eff4, Func Offset: 0x154
	// Line 3309, Address: 0x19effc, Func Offset: 0x15c
	// Line 3313, Address: 0x19f024, Func Offset: 0x184
	// Line 3320, Address: 0x19f034, Func Offset: 0x194
	// Line 3328, Address: 0x19f074, Func Offset: 0x1d4
	// Line 3336, Address: 0x19f0b4, Func Offset: 0x214
	// Line 3339, Address: 0x19f0bc, Func Offset: 0x21c
	// Line 3340, Address: 0x19f0d0, Func Offset: 0x230
	// Line 3344, Address: 0x19f0e4, Func Offset: 0x244
	// Line 3345, Address: 0x19f0f8, Func Offset: 0x258
	// Func End, Address: 0x19f120, Func Offset: 0x280
}

// 
// Start address: 0x19f120
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
	// Line 3364, Address: 0x19f120, Func Offset: 0
	// Line 3368, Address: 0x19f14c, Func Offset: 0x2c
	// Line 3370, Address: 0x19f150, Func Offset: 0x30
	// Line 3373, Address: 0x19f15c, Func Offset: 0x3c
	// Line 3374, Address: 0x19f168, Func Offset: 0x48
	// Line 3375, Address: 0x19f174, Func Offset: 0x54
	// Line 3376, Address: 0x19f178, Func Offset: 0x58
	// Line 3402, Address: 0x19f180, Func Offset: 0x60
	// Line 3403, Address: 0x19f18c, Func Offset: 0x6c
	// Line 3404, Address: 0x19f198, Func Offset: 0x78
	// Line 3405, Address: 0x19f1a0, Func Offset: 0x80
	// Line 3411, Address: 0x19f1a8, Func Offset: 0x88
	// Line 3416, Address: 0x19f1c0, Func Offset: 0xa0
	// Line 3417, Address: 0x19f1cc, Func Offset: 0xac
	// Line 3418, Address: 0x19f204, Func Offset: 0xe4
	// Line 3420, Address: 0x19f218, Func Offset: 0xf8
	// Line 3427, Address: 0x19f234, Func Offset: 0x114
	// Line 3431, Address: 0x19f264, Func Offset: 0x144
	// Line 3435, Address: 0x19f298, Func Offset: 0x178
	// Line 3436, Address: 0x19f2a0, Func Offset: 0x180
	// Func End, Address: 0x19f2cc, Func Offset: 0x1ac
}

// 
// Start address: 0x19f2d0
void vcMakeIdealCamPosForLocusCircleCam(float* ideal_pos, _VC_WORK* w_p)
{
	float sincos_y[4];
	float ofs_ang_y;
	float real_r;
	float cir_r;
	float cir_ang_y;
	float sw_half_l[4];
	float pivot[4];
	// Line 3446, Address: 0x19f2d0, Func Offset: 0
	// Line 3456, Address: 0x19f2ec, Func Offset: 0x1c
	// Line 3459, Address: 0x19f2f4, Func Offset: 0x24
	// Line 3460, Address: 0x19f304, Func Offset: 0x34
	// Line 3462, Address: 0x19f30c, Func Offset: 0x3c
	// Line 3464, Address: 0x19f320, Func Offset: 0x50
	// Line 3466, Address: 0x19f334, Func Offset: 0x64
	// Line 3468, Address: 0x19f36c, Func Offset: 0x9c
	// Line 3474, Address: 0x19f388, Func Offset: 0xb8
	// Line 3475, Address: 0x19f3c8, Func Offset: 0xf8
	// Line 3476, Address: 0x19f3d8, Func Offset: 0x108
	// Line 3477, Address: 0x19f3e8, Func Offset: 0x118
	// Line 3478, Address: 0x19f428, Func Offset: 0x158
	// Line 3479, Address: 0x19f438, Func Offset: 0x168
	// Line 3480, Address: 0x19f448, Func Offset: 0x178
	// Line 3481, Address: 0x19f488, Func Offset: 0x1b8
	// Line 3482, Address: 0x19f498, Func Offset: 0x1c8
	// Line 3483, Address: 0x19f4a8, Func Offset: 0x1d8
	// Line 3484, Address: 0x19f4b0, Func Offset: 0x1e0
	// Line 3485, Address: 0x19f4c0, Func Offset: 0x1f0
	// Line 3488, Address: 0x19f4d0, Func Offset: 0x200
	// Line 3492, Address: 0x19f4f0, Func Offset: 0x220
	// Line 3493, Address: 0x19f500, Func Offset: 0x230
	// Line 3494, Address: 0x19f51c, Func Offset: 0x24c
	// Line 3495, Address: 0x19f528, Func Offset: 0x258
	// Line 3497, Address: 0x19f53c, Func Offset: 0x26c
	// Line 3507, Address: 0x19f554, Func Offset: 0x284
	// Func End, Address: 0x19f570, Func Offset: 0x2a0
}

// 
// Start address: 0x19f570
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
	// Line 3530, Address: 0x19f570, Func Offset: 0
	// Line 3540, Address: 0x19f59c, Func Offset: 0x2c
	// Line 3541, Address: 0x19f5b4, Func Offset: 0x44
	// Line 3543, Address: 0x19f5c4, Func Offset: 0x54
	// Line 3544, Address: 0x19f5ec, Func Offset: 0x7c
	// Line 3545, Address: 0x19f654, Func Offset: 0xe4
	// Line 3546, Address: 0x19f65c, Func Offset: 0xec
	// Line 3547, Address: 0x19f688, Func Offset: 0x118
	// Line 3550, Address: 0x19f694, Func Offset: 0x124
	// Line 3554, Address: 0x19f6a4, Func Offset: 0x134
	// Line 3556, Address: 0x19f6bc, Func Offset: 0x14c
	// Line 3558, Address: 0x19f6d8, Func Offset: 0x168
	// Line 3560, Address: 0x19f6f4, Func Offset: 0x184
	// Line 3561, Address: 0x19f70c, Func Offset: 0x19c
	// Line 3564, Address: 0x19f71c, Func Offset: 0x1ac
	// Line 3565, Address: 0x19f728, Func Offset: 0x1b8
	// Line 3570, Address: 0x19f734, Func Offset: 0x1c4
	// Line 3572, Address: 0x19f738, Func Offset: 0x1c8
	// Line 3573, Address: 0x19f748, Func Offset: 0x1d8
	// Line 3578, Address: 0x19f768, Func Offset: 0x1f8
	// Line 3581, Address: 0x19f7cc, Func Offset: 0x25c
	// Line 3582, Address: 0x19f7e0, Func Offset: 0x270
	// Line 3583, Address: 0x19f7e8, Func Offset: 0x278
	// Line 3584, Address: 0x19f7f0, Func Offset: 0x280
	// Line 3589, Address: 0x19f804, Func Offset: 0x294
	// Line 3590, Address: 0x19f80c, Func Offset: 0x29c
	// Line 3591, Address: 0x19f814, Func Offset: 0x2a4
	// Line 3592, Address: 0x19f81c, Func Offset: 0x2ac
	// Line 3593, Address: 0x19f830, Func Offset: 0x2c0
	// Line 3594, Address: 0x19f838, Func Offset: 0x2c8
	// Line 3602, Address: 0x19f840, Func Offset: 0x2d0
	// Line 3606, Address: 0x19f864, Func Offset: 0x2f4
	// Line 3607, Address: 0x19f87c, Func Offset: 0x30c
	// Line 3609, Address: 0x19f894, Func Offset: 0x324
	// Line 3610, Address: 0x19f8a4, Func Offset: 0x334
	// Line 3611, Address: 0x19f8ac, Func Offset: 0x33c
	// Line 3612, Address: 0x19f8c4, Func Offset: 0x354
	// Line 3622, Address: 0x19f8f0, Func Offset: 0x380
	// Line 3624, Address: 0x19f90c, Func Offset: 0x39c
	// Line 3628, Address: 0x19f928, Func Offset: 0x3b8
	// Line 3629, Address: 0x19f93c, Func Offset: 0x3cc
	// Line 3634, Address: 0x19f950, Func Offset: 0x3e0
	// Line 3635, Address: 0x19f964, Func Offset: 0x3f4
	// Line 3636, Address: 0x19f96c, Func Offset: 0x3fc
	// Line 3638, Address: 0x19f974, Func Offset: 0x404
	// Func End, Address: 0x19f99c, Func Offset: 0x42c
}

// 
// Start address: 0x19f9a0
void vcAdjustXzInLimAreaUsingMIN_IN_ROAD_DIST(float* x_p, float* z_p, _VC_LIMIT_AREA* lim_p)
{
	float max_z;
	float min_z;
	float max_x;
	float min_x;
	float z;
	float x;
	// Line 3659, Address: 0x19f9a0, Func Offset: 0
	// Line 3660, Address: 0x19f9b0, Func Offset: 0x10
	// Line 3663, Address: 0x19f9c8, Func Offset: 0x28
	// Line 3664, Address: 0x19f9e0, Func Offset: 0x40
	// Line 3665, Address: 0x19f9fc, Func Offset: 0x5c
	// Line 3666, Address: 0x19fa18, Func Offset: 0x78
	// Line 3669, Address: 0x19fa34, Func Offset: 0x94
	// Line 3670, Address: 0x19fa70, Func Offset: 0xd0
	// Line 3673, Address: 0x19faac, Func Offset: 0x10c
	// Line 3674, Address: 0x19fb14, Func Offset: 0x174
	// Line 3676, Address: 0x19fb7c, Func Offset: 0x1dc
	// Line 3677, Address: 0x19fb94, Func Offset: 0x1f4
	// Func End, Address: 0x19fba0, Func Offset: 0x200
}

// 
// Start address: 0x19fba0
void vcMakeBasicCamTgtMvVec(float* tgt_mv_vec, float* ideal_pos, _VC_WORK* w_p, float max_tgt_mv_xz_len)
{
	float sincos_y[4];
	float now2ideal_tgt_dist;
	float now2ideal_tgt_ang_y;
	float xz_vec[4];
	// Line 3701, Address: 0x19fba0, Func Offset: 0
	// Line 3710, Address: 0x19fbcc, Func Offset: 0x2c
	// Line 3712, Address: 0x19fbe4, Func Offset: 0x44
	// Line 3714, Address: 0x19fc04, Func Offset: 0x64
	// Line 3716, Address: 0x19fc10, Func Offset: 0x70
	// Line 3717, Address: 0x19fc20, Func Offset: 0x80
	// Line 3718, Address: 0x19fc34, Func Offset: 0x94
	// Line 3721, Address: 0x19fc3c, Func Offset: 0x9c
	// Line 3722, Address: 0x19fc4c, Func Offset: 0xac
	// Line 3727, Address: 0x19fc64, Func Offset: 0xc4
	// Line 3728, Address: 0x19fcac, Func Offset: 0x10c
	// Line 3729, Address: 0x19fcbc, Func Offset: 0x11c
	// Func End, Address: 0x19fce0, Func Offset: 0x140
}

// 
// Start address: 0x19fce0
void vcAdjTgtMvVecYByCurNearRoad(float* tgt_mv_vec, _VC_WORK* w_p)
{
	float tgt_y;
	float abs_ofs_y;
	float dist;
	_VC_ROAD_DATA* cur_rd_p;
	float near_ratio;
	float to_chara_dist;
	float min_tgt_y;
	float max_tgt_y;
	// Line 3750, Address: 0x19fce0, Func Offset: 0
	// Line 3757, Address: 0x19fd00, Func Offset: 0x20
	// Line 3760, Address: 0x19fd04, Func Offset: 0x24
	// Line 3763, Address: 0x19fd30, Func Offset: 0x50
	// Line 3766, Address: 0x19fd58, Func Offset: 0x78
	// Line 3770, Address: 0x19fd6c, Func Offset: 0x8c
	// Line 3771, Address: 0x19fd74, Func Offset: 0x94
	// Line 3775, Address: 0x19fd78, Func Offset: 0x98
	// Line 3777, Address: 0x19fdd8, Func Offset: 0xf8
	// Line 3779, Address: 0x19fdfc, Func Offset: 0x11c
	// Line 3781, Address: 0x19fe4c, Func Offset: 0x16c
	// Line 3783, Address: 0x19fe7c, Func Offset: 0x19c
	// Line 3788, Address: 0x19fea4, Func Offset: 0x1c4
	// Line 3790, Address: 0x19fecc, Func Offset: 0x1ec
	// Line 3791, Address: 0x19fee4, Func Offset: 0x204
	// Line 3793, Address: 0x19ff00, Func Offset: 0x220
	// Line 3795, Address: 0x19ff08, Func Offset: 0x228
	// Line 3799, Address: 0x19ff30, Func Offset: 0x250
	// Line 3801, Address: 0x19ff38, Func Offset: 0x258
	// Line 3805, Address: 0x19ff60, Func Offset: 0x280
	// Line 3810, Address: 0x19ff68, Func Offset: 0x288
	// Line 3811, Address: 0x19ff6c, Func Offset: 0x28c
	// Line 3812, Address: 0x19ff70, Func Offset: 0x290
	// Line 3814, Address: 0x19ff78, Func Offset: 0x298
	// Line 3818, Address: 0x19ffb0, Func Offset: 0x2d0
	// Line 3820, Address: 0x19ffb8, Func Offset: 0x2d8
	// Line 3830, Address: 0x19fff0, Func Offset: 0x310
	// Line 3831, Address: 0x19fffc, Func Offset: 0x31c
	// Line 3832, Address: 0x1a0038, Func Offset: 0x358
	// Line 3834, Address: 0x1a0044, Func Offset: 0x364
	// Func End, Address: 0x1a0064, Func Offset: 0x384
}

// 
// Start address: 0x1a0070
void vcCamTgtMvVecIsFlipedFromCharaFront(float* tgt_mv_vec, _VC_WORK* w_p, float max_tgt_mv_xz_len, _VC_AREA_SIZE_TYPE cur_rd_area_size)
{
	float ang_y;
	float mv_len;
	float pos[4];
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
	// Line 3858, Address: 0x1a0070, Func Offset: 0
	// Line 3863, Address: 0x1a00a4, Func Offset: 0x34
	// Line 3864, Address: 0x1a00bc, Func Offset: 0x4c
	// Line 3865, Address: 0x1a00c8, Func Offset: 0x58
	// Line 3867, Address: 0x1a00d8, Func Offset: 0x68
	// Line 3876, Address: 0x1a00f8, Func Offset: 0x88
	// Line 3885, Address: 0x1a0110, Func Offset: 0xa0
	// Line 3886, Address: 0x1a013c, Func Offset: 0xcc
	// Line 3892, Address: 0x1a0140, Func Offset: 0xd0
	// Line 3893, Address: 0x1a0148, Func Offset: 0xd8
	// Line 3894, Address: 0x1a0158, Func Offset: 0xe8
	// Line 3895, Address: 0x1a0174, Func Offset: 0x104
	// Line 3898, Address: 0x1a0190, Func Offset: 0x120
	// Line 3900, Address: 0x1a01a4, Func Offset: 0x134
	// Line 3901, Address: 0x1a01ac, Func Offset: 0x13c
	// Line 3903, Address: 0x1a01b4, Func Offset: 0x144
	// Line 3912, Address: 0x1a01dc, Func Offset: 0x16c
	// Line 3913, Address: 0x1a01e8, Func Offset: 0x178
	// Line 3914, Address: 0x1a01fc, Func Offset: 0x18c
	// Line 3916, Address: 0x1a0214, Func Offset: 0x1a4
	// Line 3923, Address: 0x1a021c, Func Offset: 0x1ac
	// Line 3924, Address: 0x1a0238, Func Offset: 0x1c8
	// Line 3930, Address: 0x1a0254, Func Offset: 0x1e4
	// Line 3932, Address: 0x1a0288, Func Offset: 0x218
	// Line 3933, Address: 0x1a02a0, Func Offset: 0x230
	// Line 3934, Address: 0x1a02b8, Func Offset: 0x248
	// Line 3935, Address: 0x1a02d0, Func Offset: 0x260
	// Line 3936, Address: 0x1a02e8, Func Offset: 0x278
	// Line 3937, Address: 0x1a0310, Func Offset: 0x2a0
	// Line 3942, Address: 0x1a0338, Func Offset: 0x2c8
	// Line 3943, Address: 0x1a0350, Func Offset: 0x2e0
	// Line 3944, Address: 0x1a0398, Func Offset: 0x328
	// Line 3945, Address: 0x1a03e0, Func Offset: 0x370
	// Line 3949, Address: 0x1a03f8, Func Offset: 0x388
	// Line 3950, Address: 0x1a0408, Func Offset: 0x398
	// Line 3955, Address: 0x1a0418, Func Offset: 0x3a8
	// Line 3957, Address: 0x1a0434, Func Offset: 0x3c4
	// Line 3960, Address: 0x1a0444, Func Offset: 0x3d4
	// Line 3966, Address: 0x1a0450, Func Offset: 0x3e0
	// Line 3967, Address: 0x1a0460, Func Offset: 0x3f0
	// Line 3972, Address: 0x1a0478, Func Offset: 0x408
	// Func End, Address: 0x1a04a4, Func Offset: 0x434
}

// 
// Start address: 0x1a04b0
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
	// Line 4000, Address: 0x1a04b0, Func Offset: 0
	// Line 4009, Address: 0x1a04ec, Func Offset: 0x3c
	// Line 4010, Address: 0x1a04f0, Func Offset: 0x40
	// Line 4012, Address: 0x1a04f4, Func Offset: 0x44
	// Line 4019, Address: 0x1a0518, Func Offset: 0x68
	// Line 4020, Address: 0x1a0524, Func Offset: 0x74
	// Line 4022, Address: 0x1a054c, Func Offset: 0x9c
	// Line 4024, Address: 0x1a0564, Func Offset: 0xb4
	// Line 4029, Address: 0x1a05a8, Func Offset: 0xf8
	// Line 4030, Address: 0x1a05b8, Func Offset: 0x108
	// Line 4031, Address: 0x1a05c8, Func Offset: 0x118
	// Line 4034, Address: 0x1a05cc, Func Offset: 0x11c
	// Line 4037, Address: 0x1a05e8, Func Offset: 0x138
	// Line 4038, Address: 0x1a05fc, Func Offset: 0x14c
	// Line 4040, Address: 0x1a0604, Func Offset: 0x154
	// Line 4041, Address: 0x1a0614, Func Offset: 0x164
	// Line 4043, Address: 0x1a0618, Func Offset: 0x168
	// Line 4045, Address: 0x1a0620, Func Offset: 0x170
	// Line 4050, Address: 0x1a0624, Func Offset: 0x174
	// Line 4052, Address: 0x1a0650, Func Offset: 0x1a0
	// Line 4053, Address: 0x1a066c, Func Offset: 0x1bc
	// Line 4056, Address: 0x1a0670, Func Offset: 0x1c0
	// Line 4059, Address: 0x1a0674, Func Offset: 0x1c4
	// Func End, Address: 0x1a06a0, Func Offset: 0x1f0
}

// 
// Start address: 0x1a06a0
void vcGetUseWatchAndCamMvParam(_VC_WATCH_MV_PARAM** watch_mv_prm_pp, _VC_CAM_MV_PARAM** cam_mv_prm_pp, float self_view_eff_rate, _VC_WORK* w_p)
{
	float add_ang_accel_y;
	// Line 4083, Address: 0x1a06a0, Func Offset: 0
	// Line 4085, Address: 0x1a06b4, Func Offset: 0x14
	// Line 4086, Address: 0x1a06cc, Func Offset: 0x2c
	// Line 4087, Address: 0x1a06dc, Func Offset: 0x3c
	// Line 4099, Address: 0x1a06e4, Func Offset: 0x44
	// Line 4103, Address: 0x1a0714, Func Offset: 0x74
	// Line 4107, Address: 0x1a0744, Func Offset: 0xa4
	// Line 4111, Address: 0x1a0774, Func Offset: 0xd4
	// Line 4112, Address: 0x1a07a4, Func Offset: 0x104
	// Line 4115, Address: 0x1a07b4, Func Offset: 0x114
	// Line 4116, Address: 0x1a07c0, Func Offset: 0x120
	// Line 4117, Address: 0x1a0840, Func Offset: 0x1a0
	// Line 4121, Address: 0x1a0858, Func Offset: 0x1b8
	// Line 4122, Address: 0x1a0888, Func Offset: 0x1e8
	// Line 4125, Address: 0x1a0898, Func Offset: 0x1f8
	// Func End, Address: 0x1a08a4, Func Offset: 0x204
}

// 
// Start address: 0x1a08b0
void vcRenewalCamData(_VC_WORK* w_p, _VC_CAM_MV_PARAM* cam_mv_prm_p)
{
	float dt;
	float tpos[4];
	float cpos[4];
	float dec_spd_per_dist_y;
	float dec_spd_per_dist_xz;
	// Line 4144, Address: 0x1a08b0, Func Offset: 0
	// Line 4145, Address: 0x1a08cc, Func Offset: 0x1c
	// Line 4146, Address: 0x1a08e0, Func Offset: 0x30
	// Line 4151, Address: 0x1a0904, Func Offset: 0x54
	// Line 4152, Address: 0x1a0914, Func Offset: 0x64
	// Line 4153, Address: 0x1a091c, Func Offset: 0x6c
	// Line 4157, Address: 0x1a0924, Func Offset: 0x74
	// Line 4158, Address: 0x1a0938, Func Offset: 0x88
	// Line 4164, Address: 0x1a093c, Func Offset: 0x8c
	// Line 4165, Address: 0x1a094c, Func Offset: 0x9c
	// Line 4166, Address: 0x1a095c, Func Offset: 0xac
	// Line 4167, Address: 0x1a0970, Func Offset: 0xc0
	// Line 4168, Address: 0x1a0984, Func Offset: 0xd4
	// Line 4169, Address: 0x1a0998, Func Offset: 0xe8
	// Line 4171, Address: 0x1a09ac, Func Offset: 0xfc
	// Line 4183, Address: 0x1a09e0, Func Offset: 0x130
	// Line 4194, Address: 0x1a0a1c, Func Offset: 0x16c
	// Line 4198, Address: 0x1a0a2c, Func Offset: 0x17c
	// Line 4200, Address: 0x1a0a34, Func Offset: 0x184
	// Line 4201, Address: 0x1a0a3c, Func Offset: 0x18c
	// Line 4202, Address: 0x1a0a40, Func Offset: 0x190
	// Line 4203, Address: 0x1a0a44, Func Offset: 0x194
	// Line 4204, Address: 0x1a0a4c, Func Offset: 0x19c
	// Line 4205, Address: 0x1a0a50, Func Offset: 0x1a0
	// Line 4206, Address: 0x1a0a54, Func Offset: 0x1a4
	// Line 4207, Address: 0x1a0a58, Func Offset: 0x1a8
	// Line 4223, Address: 0x1a0a5c, Func Offset: 0x1ac
	// Func End, Address: 0x1a0a78, Func Offset: 0x1c8
}

// 
// Start address: 0x1a0a80
void vcRenewalCamMatAng(_VC_WORK* w_p, _VC_WATCH_MV_PARAM* watch_mv_prm_p, _VC_CAM_MV_TYPE cam_mv_type, int visible_chara_f)
{
	float ofs_cam2chara_top_ang[4];
	float ofs_cam2chara_btm_ang[4];
	float new_base_matT[4][4];
	float new_base_cam_ang[4];
	float ofs_tgt_ang[4];
	// Line 4247, Address: 0x1a0a80, Func Offset: 0
	// Line 4254, Address: 0x1a0aa0, Func Offset: 0x20
	// Line 4256, Address: 0x1a0ab4, Func Offset: 0x34
	// Line 4262, Address: 0x1a0afc, Func Offset: 0x7c
	// Line 4264, Address: 0x1a0b0c, Func Offset: 0x8c
	// Line 4265, Address: 0x1a0b34, Func Offset: 0xb4
	// Line 4266, Address: 0x1a0b44, Func Offset: 0xc4
	// Line 4267, Address: 0x1a0b54, Func Offset: 0xd4
	// Line 4269, Address: 0x1a0b68, Func Offset: 0xe8
	// Line 4274, Address: 0x1a0b70, Func Offset: 0xf0
	// Line 4281, Address: 0x1a0b94, Func Offset: 0x114
	// Line 4288, Address: 0x1a0bac, Func Offset: 0x12c
	// Line 4289, Address: 0x1a0bc0, Func Offset: 0x140
	// Line 4290, Address: 0x1a0bd0, Func Offset: 0x150
	// Line 4291, Address: 0x1a0bd8, Func Offset: 0x158
	// Line 4293, Address: 0x1a0be0, Func Offset: 0x160
	// Line 4300, Address: 0x1a0bf8, Func Offset: 0x178
	// Line 4305, Address: 0x1a0c14, Func Offset: 0x194
	// Line 4306, Address: 0x1a0c24, Func Offset: 0x1a4
	// Line 4307, Address: 0x1a0c34, Func Offset: 0x1b4
	// Line 4308, Address: 0x1a0c44, Func Offset: 0x1c4
	// Func End, Address: 0x1a0c60, Func Offset: 0x1e0
}

// 
// Start address: 0x1a0c60
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
	// Line 4329, Address: 0x1a0c60, Func Offset: 0
	// Line 4336, Address: 0x1a0c8c, Func Offset: 0x2c
	// Line 4338, Address: 0x1a0ca8, Func Offset: 0x48
	// Line 4339, Address: 0x1a0cbc, Func Offset: 0x5c
	// Line 4340, Address: 0x1a0cc0, Func Offset: 0x60
	// Line 4341, Address: 0x1a0cc8, Func Offset: 0x68
	// Line 4343, Address: 0x1a0cf4, Func Offset: 0x94
	// Line 4349, Address: 0x1a0d1c, Func Offset: 0xbc
	// Line 4350, Address: 0x1a0d20, Func Offset: 0xc0
	// Line 4352, Address: 0x1a0d28, Func Offset: 0xc8
	// Line 4353, Address: 0x1a0d58, Func Offset: 0xf8
	// Line 4362, Address: 0x1a0d68, Func Offset: 0x108
	// Line 4364, Address: 0x1a0d70, Func Offset: 0x110
	// Line 4368, Address: 0x1a0d78, Func Offset: 0x118
	// Line 4370, Address: 0x1a0d88, Func Offset: 0x128
	// Line 4373, Address: 0x1a0d94, Func Offset: 0x134
	// Line 4376, Address: 0x1a0dc4, Func Offset: 0x164
	// Line 4377, Address: 0x1a0dcc, Func Offset: 0x16c
	// Line 4379, Address: 0x1a0de4, Func Offset: 0x184
	// Line 4381, Address: 0x1a0df0, Func Offset: 0x190
	// Line 4385, Address: 0x1a0df4, Func Offset: 0x194
	// Line 4387, Address: 0x1a0e08, Func Offset: 0x1a8
	// Line 4388, Address: 0x1a0e10, Func Offset: 0x1b0
	// Line 4394, Address: 0x1a0e74, Func Offset: 0x214
	// Line 4397, Address: 0x1a0e84, Func Offset: 0x224
	// Line 4399, Address: 0x1a0e9c, Func Offset: 0x23c
	// Line 4401, Address: 0x1a0edc, Func Offset: 0x27c
	// Line 4402, Address: 0x1a0ee4, Func Offset: 0x284
	// Line 4403, Address: 0x1a0eec, Func Offset: 0x28c
	// Line 4407, Address: 0x1a0ef4, Func Offset: 0x294
	// Line 4408, Address: 0x1a0ef8, Func Offset: 0x298
	// Line 4411, Address: 0x1a0f20, Func Offset: 0x2c0
	// Line 4416, Address: 0x1a0f64, Func Offset: 0x304
	// Line 4418, Address: 0x1a0f78, Func Offset: 0x318
	// Line 4420, Address: 0x1a0fd0, Func Offset: 0x370
	// Line 4422, Address: 0x1a0ff8, Func Offset: 0x398
	// Line 4423, Address: 0x1a0ffc, Func Offset: 0x39c
	// Line 4424, Address: 0x1a1000, Func Offset: 0x3a0
	// Line 4428, Address: 0x1a1004, Func Offset: 0x3a4
	// Func End, Address: 0x1a1030, Func Offset: 0x3d0
}

// 
// Start address: 0x1a1030
void vcRenewalBaseCamAngAndAdjustOfsCamAng(_VC_WORK* w_p, float* new_base_cam_ang)
{
	float ofs_mat[4][4];
	float adj_ofs_mat[4][4];
	float new_base_matT[4][4];
	float new_base_mat[4][4];
	float old_base_mat[4][4];
	// Line 4447, Address: 0x1a1030, Func Offset: 0
	// Line 4451, Address: 0x1a1048, Func Offset: 0x18
	// Line 4452, Address: 0x1a1070, Func Offset: 0x40
	// Line 4453, Address: 0x1a1098, Func Offset: 0x68
	// Line 4454, Address: 0x1a10c0, Func Offset: 0x90
	// Line 4456, Address: 0x1a10e8, Func Offset: 0xb8
	// Line 4457, Address: 0x1a10f8, Func Offset: 0xc8
	// Line 4458, Address: 0x1a1108, Func Offset: 0xd8
	// Line 4460, Address: 0x1a1118, Func Offset: 0xe8
	// Line 4461, Address: 0x1a1128, Func Offset: 0xf8
	// Line 4462, Address: 0x1a113c, Func Offset: 0x10c
	// Line 4463, Address: 0x1a1150, Func Offset: 0x120
	// Line 4464, Address: 0x1a1160, Func Offset: 0x130
	// Line 4465, Address: 0x1a116c, Func Offset: 0x13c
	// Func End, Address: 0x1a1184, Func Offset: 0x154
}

// 
// Start address: 0x1a1190
void vcMakeOfsCamTgtAng(float* ofs_tgt_ang, float base_matT[4], _VC_WORK* w_p)
{
	float vec[4];
	// Line 4486, Address: 0x1a1190, Func Offset: 0
	// Line 4490, Address: 0x1a11a8, Func Offset: 0x18
	// Line 4492, Address: 0x1a11c4, Func Offset: 0x34
	// Line 4493, Address: 0x1a11d4, Func Offset: 0x44
	// Line 4494, Address: 0x1a11e4, Func Offset: 0x54
	// Line 4495, Address: 0x1a11ec, Func Offset: 0x5c
	// Func End, Address: 0x1a1204, Func Offset: 0x74
}

// 
// Start address: 0x1a1210
void vcMakeOfsCam2CharaBottomAndTopAngByBaseMatT(float* ofs_cam2chara_btm_ang, float* ofs_cam2chara_top_ang, float base_matT[4], float* cam_pos, float* chara_pos, float chara_bottom_y, float chara_top_y)
{
	float vec[4];
	// Line 4524, Address: 0x1a1210, Func Offset: 0
	// Line 4528, Address: 0x1a1248, Func Offset: 0x38
	// Line 4529, Address: 0x1a125c, Func Offset: 0x4c
	// Line 4532, Address: 0x1a1268, Func Offset: 0x58
	// Line 4534, Address: 0x1a127c, Func Offset: 0x6c
	// Line 4536, Address: 0x1a128c, Func Offset: 0x7c
	// Line 4537, Address: 0x1a12a0, Func Offset: 0x90
	// Line 4540, Address: 0x1a12ac, Func Offset: 0x9c
	// Line 4542, Address: 0x1a12c0, Func Offset: 0xb0
	// Line 4543, Address: 0x1a12d0, Func Offset: 0xc0
	// Func End, Address: 0x1a12f8, Func Offset: 0xe8
}

// 
// Start address: 0x1a1300
void vcAdjCamOfsAngByCharaInScreen(float* cam_ang, float* ofs_cam2chara_btm_ang, float* ofs_cam2chara_top_ang, _VC_WORK* w_p)
{
	float watch2chr_top_ofs_ang_x;
	float watch2chr_bottom_ofs_ang_x;
	float watch2chr_ofs_ang_y;
	float adj_cam_ang_x;
	float adj_cam_ang_y;
	// Line 4568, Address: 0x1a1300, Func Offset: 0
	// Line 4576, Address: 0x1a1318, Func Offset: 0x18
	// Line 4578, Address: 0x1a1338, Func Offset: 0x38
	// Line 4581, Address: 0x1a1358, Func Offset: 0x58
	// Line 4584, Address: 0x1a1378, Func Offset: 0x78
	// Line 4585, Address: 0x1a1394, Func Offset: 0x94
	// Line 4587, Address: 0x1a13b0, Func Offset: 0xb0
	// Line 4588, Address: 0x1a13d8, Func Offset: 0xd8
	// Line 4590, Address: 0x1a13f4, Func Offset: 0xf4
	// Line 4591, Address: 0x1a13fc, Func Offset: 0xfc
	// Line 4594, Address: 0x1a1408, Func Offset: 0x108
	// Line 4596, Address: 0x1a1458, Func Offset: 0x158
	// Line 4598, Address: 0x1a1478, Func Offset: 0x178
	// Line 4599, Address: 0x1a148c, Func Offset: 0x18c
	// Line 4600, Address: 0x1a1494, Func Offset: 0x194
	// Line 4606, Address: 0x1a14a0, Func Offset: 0x1a0
	// Line 4607, Address: 0x1a14c4, Func Offset: 0x1c4
	// Line 4611, Address: 0x1a14e8, Func Offset: 0x1e8
	// Line 4614, Address: 0x1a1580, Func Offset: 0x280
	// Line 4615, Address: 0x1a1594, Func Offset: 0x294
	// Line 4616, Address: 0x1a15ac, Func Offset: 0x2ac
	// Func End, Address: 0x1a15bc, Func Offset: 0x2bc
}

// 
// Start address: 0x1a15c0
void vcAdjCamOfsAngByOfsAngSpd(float* ofs_ang, float* ofs_ang_spd, float* ofs_tgt_ang, _VC_WATCH_MV_PARAM* prm_p)
{
	float dt;
	float max_spd_dec_per_dist[4];
	// Line 4640, Address: 0x1a15c0, Func Offset: 0
	// Line 4643, Address: 0x1a15e8, Func Offset: 0x28
	// Line 4644, Address: 0x1a15fc, Func Offset: 0x3c
	// Line 4647, Address: 0x1a1610, Func Offset: 0x50
	// Line 4656, Address: 0x1a1634, Func Offset: 0x74
	// Line 4665, Address: 0x1a1658, Func Offset: 0x98
	// Line 4677, Address: 0x1a1694, Func Offset: 0xd4
	// Line 4680, Address: 0x1a169c, Func Offset: 0xdc
	// Line 4681, Address: 0x1a16a0, Func Offset: 0xe0
	// Line 4682, Address: 0x1a16a4, Func Offset: 0xe4
	// Line 4683, Address: 0x1a16ac, Func Offset: 0xec
	// Line 4684, Address: 0x1a16b0, Func Offset: 0xf0
	// Line 4685, Address: 0x1a16b4, Func Offset: 0xf4
	// Line 4686, Address: 0x1a16b8, Func Offset: 0xf8
	// Line 4700, Address: 0x1a16bc, Func Offset: 0xfc
	// Func End, Address: 0x1a16dc, Func Offset: 0x11c
}

// 
// Start address: 0x1a16e0
void vcMakeCamMatAndCamAngByBaseAngAndOfsAng(float* cam_mat_ang, float cam_mat[4], float* base_cam_ang, float* ofs_cam_ang, float* cam_pos)
{
	float ofs_mat[4][4];
	float base_mat[4][4];
	// Line 4725, Address: 0x1a16e0, Func Offset: 0
	// Line 4740, Address: 0x1a1708, Func Offset: 0x28
	// Line 4741, Address: 0x1a1730, Func Offset: 0x50
	// Line 4743, Address: 0x1a1758, Func Offset: 0x78
	// Line 4744, Address: 0x1a1768, Func Offset: 0x88
	// Line 4746, Address: 0x1a1778, Func Offset: 0x98
	// Line 4748, Address: 0x1a178c, Func Offset: 0xac
	// Line 4749, Address: 0x1a1794, Func Offset: 0xb4
	// Line 4751, Address: 0x1a17a8, Func Offset: 0xc8
	// Line 4752, Address: 0x1a17b8, Func Offset: 0xd8
	// Func End, Address: 0x1a17d8, Func Offset: 0xf8
}

// 
// Start address: 0x1a17e0
void vcSetDataToVwSystem(_VC_WORK* w_p, _VC_CAM_MV_TYPE cam_mv_type)
{
	float noise_ang[4];
	float noise_mat[4][4];
	float noise_cam_mat[4][4];
	// Line 4770, Address: 0x1a17e0, Func Offset: 0
	// Line 4771, Address: 0x1a17f0, Func Offset: 0x10
	// Line 4772, Address: 0x1a1800, Func Offset: 0x20
	// Line 4773, Address: 0x1a1810, Func Offset: 0x30
	// Line 4778, Address: 0x1a1818, Func Offset: 0x38
	// Line 4781, Address: 0x1a1834, Func Offset: 0x54
	// Line 4782, Address: 0x1a1864, Func Offset: 0x84
	// Line 4783, Address: 0x1a1894, Func Offset: 0xb4
	// Line 4784, Address: 0x1a18a0, Func Offset: 0xc0
	// Line 4785, Address: 0x1a18b0, Func Offset: 0xd0
	// Line 4786, Address: 0x1a18d8, Func Offset: 0xf8
	// Line 4788, Address: 0x1a18e8, Func Offset: 0x108
	// Line 4789, Address: 0x1a1920, Func Offset: 0x140
	// Line 4790, Address: 0x1a1958, Func Offset: 0x178
	// Line 4791, Address: 0x1a1990, Func Offset: 0x1b0
	// Line 4792, Address: 0x1a19c8, Func Offset: 0x1e8
	// Line 4793, Address: 0x1a1a00, Func Offset: 0x220
	// Line 4795, Address: 0x1a1a38, Func Offset: 0x258
	// Line 4797, Address: 0x1a1a4c, Func Offset: 0x26c
	// Line 4798, Address: 0x1a1a64, Func Offset: 0x284
	// Line 4801, Address: 0x1a1a74, Func Offset: 0x294
	// Func End, Address: 0x1a1a88, Func Offset: 0x2a8
}

// 
// Start address: 0x1a1a90
float vcCamMatNoise(float noise_w, float ang_spd1, float ang_spd2)
{
	float noise;
	// Line 4821, Address: 0x1a1a90, Func Offset: 0
	// Line 4824, Address: 0x1a1aa8, Func Offset: 0x18
	// Line 4825, Address: 0x1a1ac4, Func Offset: 0x34
	// Line 4827, Address: 0x1a1ae0, Func Offset: 0x50
	// Line 4828, Address: 0x1a1b14, Func Offset: 0x84
	// Line 4830, Address: 0x1a1b24, Func Offset: 0x94
	// Line 4831, Address: 0x1a1b28, Func Offset: 0x98
	// Func End, Address: 0x1a1b3c, Func Offset: 0xac
}

// 
// Start address: 0x1a1b40
float vcGetXZSumDistFromLimArea(float* out_vec_x_p, float* out_vec_z_p, float chk_wld_x, float chk_wld_z, float lim_min_x, float lim_max_x, float lim_min_z, float lim_max_z, int can_ret_minus_dist_f)
{
	float cntr_z;
	float cntr_x;
	float ret_dist;
	float z_dist;
	float x_dist;
	// Line 4872, Address: 0x1a1b40, Func Offset: 0
	// Line 4873, Address: 0x1a1b50, Func Offset: 0x10
	// Line 4874, Address: 0x1a1b58, Func Offset: 0x18
	// Line 4875, Address: 0x1a1b60, Func Offset: 0x20
	// Line 4876, Address: 0x1a1b78, Func Offset: 0x38
	// Line 4877, Address: 0x1a1b80, Func Offset: 0x40
	// Line 4878, Address: 0x1a1b84, Func Offset: 0x44
	// Line 4881, Address: 0x1a1b8c, Func Offset: 0x4c
	// Line 4883, Address: 0x1a1ba0, Func Offset: 0x60
	// Line 4886, Address: 0x1a1bac, Func Offset: 0x6c
	// Line 4887, Address: 0x1a1bc8, Func Offset: 0x88
	// Line 4891, Address: 0x1a1bcc, Func Offset: 0x8c
	// Line 4892, Address: 0x1a1bdc, Func Offset: 0x9c
	// Line 4893, Address: 0x1a1be4, Func Offset: 0xa4
	// Line 4894, Address: 0x1a1bec, Func Offset: 0xac
	// Line 4895, Address: 0x1a1c04, Func Offset: 0xc4
	// Line 4896, Address: 0x1a1c0c, Func Offset: 0xcc
	// Line 4897, Address: 0x1a1c10, Func Offset: 0xd0
	// Line 4900, Address: 0x1a1c18, Func Offset: 0xd8
	// Line 4902, Address: 0x1a1c2c, Func Offset: 0xec
	// Line 4905, Address: 0x1a1c38, Func Offset: 0xf8
	// Line 4906, Address: 0x1a1c54, Func Offset: 0x114
	// Line 4909, Address: 0x1a1c58, Func Offset: 0x118
	// Line 4910, Address: 0x1a1c70, Func Offset: 0x130
	// Line 4911, Address: 0x1a1c88, Func Offset: 0x148
	// Line 4914, Address: 0x1a1c94, Func Offset: 0x154
	// Line 4915, Address: 0x1a1c9c, Func Offset: 0x15c
	// Line 4916, Address: 0x1a1cb4, Func Offset: 0x174
	// Line 4918, Address: 0x1a1cc0, Func Offset: 0x180
	// Line 4921, Address: 0x1a1cc8, Func Offset: 0x188
	// Line 4922, Address: 0x1a1cd0, Func Offset: 0x190
	// Line 4926, Address: 0x1a1cec, Func Offset: 0x1ac
	// Func End, Address: 0x1a1cf4, Func Offset: 0x1b4
}

// 
// Start address: 0x1a1d00
void vcSetEventCamParamRefView(float* vp, _VC_CAM_MV_PARAM* cam_prm_p, float* vr, _VC_WATCH_MV_PARAM* watch_prm_p, float rot_z, int warp_flg)
{
	// Line 5001, Address: 0x1a1d00, Func Offset: 0
	// Line 5003, Address: 0x1a1d20, Func Offset: 0x20
	// Line 5005, Address: 0x1a1d34, Func Offset: 0x34
	// Line 5006, Address: 0x1a1d4c, Func Offset: 0x4c
	// Func End, Address: 0x1a1d5c, Func Offset: 0x5c
}

// 
// Start address: 0x1a1d60
void vcSetProjectionValue(float new, int framecnt)
{
	// Line 5027, Address: 0x1a1d60, Func Offset: 0
	// Line 5028, Address: 0x1a1d6c, Func Offset: 0xc
	// Line 5031, Address: 0x1a1d84, Func Offset: 0x24
	// Line 5032, Address: 0x1a1d94, Func Offset: 0x34
	// Line 5034, Address: 0x1a1d9c, Func Offset: 0x3c
	// Line 5036, Address: 0x1a1da8, Func Offset: 0x48
	// Line 5039, Address: 0x1a1db8, Func Offset: 0x58
	// Line 5041, Address: 0x1a1dd0, Func Offset: 0x70
	// Line 5042, Address: 0x1a1dd8, Func Offset: 0x78
	// Line 5045, Address: 0x1a1dec, Func Offset: 0x8c
	// Line 5046, Address: 0x1a1dfc, Func Offset: 0x9c
	// Line 5049, Address: 0x1a1e10, Func Offset: 0xb0
	// Line 5052, Address: 0x1a1e40, Func Offset: 0xe0
	// Line 5054, Address: 0x1a1e4c, Func Offset: 0xec
	// Func End, Address: 0x1a1e58, Func Offset: 0xf8
}

// 
// Start address: 0x1a1e60
void vcChangeProjectionValue()
{
	float now;
	// Line 5071, Address: 0x1a1e60, Func Offset: 0
	// Line 5074, Address: 0x1a1e68, Func Offset: 0x8
	// Line 5076, Address: 0x1a1e78, Func Offset: 0x18
	// Line 5078, Address: 0x1a1e8c, Func Offset: 0x2c
	// Line 5079, Address: 0x1a1e98, Func Offset: 0x38
	// Line 5080, Address: 0x1a1ea0, Func Offset: 0x40
	// Line 5083, Address: 0x1a1ea8, Func Offset: 0x48
	// Line 5084, Address: 0x1a1eb4, Func Offset: 0x54
	// Line 5086, Address: 0x1a1ec8, Func Offset: 0x68
	// Line 5088, Address: 0x1a1ee8, Func Offset: 0x88
	// Line 5090, Address: 0x1a1f04, Func Offset: 0xa4
	// Line 5091, Address: 0x1a1f10, Func Offset: 0xb0
	// Line 5093, Address: 0x1a1f18, Func Offset: 0xb8
	// Line 5096, Address: 0x1a1f20, Func Offset: 0xc0
	// Line 5098, Address: 0x1a1f3c, Func Offset: 0xdc
	// Line 5099, Address: 0x1a1f48, Func Offset: 0xe8
	// Line 5105, Address: 0x1a1f50, Func Offset: 0xf0
	// Line 5106, Address: 0x1a1f5c, Func Offset: 0xfc
	// Line 5107, Address: 0x1a1f64, Func Offset: 0x104
	// Func End, Address: 0x1a1f74, Func Offset: 0x114
}

