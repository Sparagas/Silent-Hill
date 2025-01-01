typedef struct SubCharacter;
typedef struct _VC_WORK;
typedef struct _VC_ROAD_DATA;
typedef struct _CL_VHIT_WALL;
typedef struct shAttackInfo;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct _anon1;
typedef struct shPlayerWork;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _CL_VHIT_RESULT;
typedef union _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct shSkelton;
typedef struct HH_Class_Wrapper_Work;
typedef struct _VC_WATCH_MV_PARAM;
typedef struct _anon5;
typedef struct _VC_CAM_MV_PARAM;
typedef struct _CL_HITPOLY_COLUMN;
typedef enum _VC_FLAGS : unsigned short;
typedef struct _VC_NEAR_ROAD_DATA;
typedef struct _VC_LIMIT_AREA;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct Item;
typedef union Q_WORDDATA;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct _VC_CHASE_CAM_PARAM;
typedef struct _VC_FIX_CAM_MANAGER;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct PAD_3D;
typedef struct _VC_SETTLE_CAM_PARAM;
typedef struct shBattleFight;
typedef struct _VC_CIR_CAM_MANAGER;
typedef struct _VC_FIX_ANG_CAM_PARAM;
typedef struct shBattleShot;
typedef struct PAD_2D;
typedef struct _VC_THROUGH_DOOR_CAM_PARAM;
typedef struct shBattleArea;
typedef struct PAD_INFO;
typedef struct sh2gfw_Env_ctl;
typedef struct _VC_LOCUS_CIRCLE_CAM_PARAM;
typedef struct shBattleInfo;
typedef struct _VC_ROAD_AREA;
typedef struct _VbWVSMATRIX;

typedef void(*type_14)(SubCharacter*);
typedef void(*type_16)(SubCharacter*);

typedef unsigned char type_0[4];
typedef unsigned char type_1[4];
typedef float type_2[4];
typedef unsigned char type_3[2];
typedef unsigned char type_4[2];
typedef unsigned char type_5[16];
typedef unsigned short type_6[4];
typedef float type_7[4];
typedef shAttackInfo type_8[66];
typedef float type_9[4];
typedef float type_10[4];
typedef float type_11[4][4];
typedef float type_12[4];
typedef float type_13[4][4];
typedef float type_15[4][2];
typedef float type_17[4][4];
typedef unsigned int type_18[2];
typedef unsigned short type_19[11];
typedef unsigned char type_20[4];
typedef unsigned int type_21[4];
typedef unsigned char type_22[2];
typedef unsigned short type_23[8];
typedef float type_24[4];
typedef unsigned char type_25[16];
typedef _VC_NEAR_ROAD_DATA type_26[128];
typedef unsigned short type_27[3];
typedef int type_28[4];
typedef short type_29[8];
typedef char type_30[16];
typedef unsigned long type_31[2];
typedef PAD_INFO type_32[10];
typedef float type_33[2];

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
	_anon4 pos;
	_anon4 rot;
	_anon4 pos_spd;
	_anon4 rot_spd;
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
	_anon4 b_pos;
	_anon4 b_rot;
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
	_anon3 tmp;
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
	_anon0 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
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

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon1
{
	float pos[4];
	float zdir[4];
	float ydir[4];
	float rot[4];
	float clip_volume[4];
	float world_view[4][4];
	float view_screen[4][4];
	float view_clip[4][4];
	float world_screen[4][4];
	float world_clip[4][4];
	float clip_screen[4][4];
	float camera_pam[4];
	float screen_pam1[4];
	float screen_pam2[4];
	float rot_zdir[4];
	float rot_ydir[4];
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon4 dist_rot;
	_anon4 dist_pos;
	_anon4 pos;
	_anon4 rot;
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
	_anon4 tgt_body_angle;
	_anon4 tgt_neck_angle;
	_anon4 tgt_arms_angle;
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

union _anon3
{
	unsigned char data[16];
	_VC_CHASE_CAM_PARAM chs;
	_VC_SETTLE_CAM_PARAM stl;
	_VC_FIX_ANG_CAM_PARAM fix;
	_VC_LOCUS_CIRCLE_CAM_PARAM cir;
};

struct _anon4
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
	_anon5 src_m;
	_anon4 src_t;
	_anon5 des_m;
	_anon4 des_t;
	_anon4 axis;
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

struct HH_Class_Wrapper_Work
{
	float ViewFrustum_Primitive_ClipMatrix[4][4];
	float ViewFrustum_BoundingBox_ClipMatrix[4][4];
	float AlwaysFront_WorldView_Matrix[4][4];
};

struct _VC_WATCH_MV_PARAM
{
	float ang_accel_x;
	float ang_accel_y;
	float max_ang_spd_x;
	float max_ang_spd_y;
};

struct _anon5
{
	float d[4][4];
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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct _VC_CHASE_CAM_PARAM
{
	float ofs_hy;
	float ratio_r_xz;
	float lr_lim_ang_y;
	float rr_lim_ang_y;
};

struct _VC_FIX_CAM_MANAGER
{
	int exception_f;
	float add_ang_y;
	float add_rd_x;
	float add_rd_z;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct _VC_SETTLE_CAM_PARAM
{
	float sta_base_ang_y;
	float end_base_ang_y;
	float lr_lim_ang_y;
	float rr_lim_ang_y;
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

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
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

struct sh2gfw_Env_ctl
{
	float camera_p[4];
	float camera_zd[4];
	float camera_yd[4];
	float camera_rot[4];
	float camera_ido[4];
	float camera_parms[4];
	float camera_parms2[4];
	float camera_mat[4][4];
	float objclip_mat[4][4];
	Q_WORDDATA block_index;
	float p_light0[4];
	float p_light1[4];
	float p_light2[4];
	float p_color0[4];
	float p_color1[4];
	float p_color2[4];
	float ambient[4];
	float VertexAmbient[4];
	float BaseAmbient[4];
	float BaseVertexColor[4];
	float spot0_Wpos[4];
	float spot0_Wdir[4];
	sh2gfw_SPOTL_MATRIX SpotL0;
	float spot1_Wpos[4];
	float spot1_Wdir[4];
	sh2gfw_SPOTL_MATRIX SpotL1;
	float CharacterLightFactor[4];
	float CharacterLightFactor_Other[4];
	sh2gfw_SPOTL_MATRIX SpotL2;
	float point0_localpos[4];
	sh2gfw_POINTL_MATRIX PointL0;
	unsigned short light_mode;
	unsigned short weather_mode;
	unsigned short time_mode;
	unsigned short now_block;
	unsigned short mode_buf[4];
	Q_WORDDATA stat_ctl_1;
	Q_WORDDATA stat_ctl_2;
	Q_WORDDATA fogcolor;
	Q_WORDDATA fogparm;
	Q_WORDDATA MoveFogColor;
	Q_WORDDATA clearcolor;
	Q_WORDDATA random_seeds;
	Q_WORDDATA compo_shadow_env;
	Q_WORDDATA compo_shadow_test;
	Q_WORDDATA compo_shadow_alp;
	Q_WORDDATA compo_shadow_col;
	Q_WORDDATA compo_Fill_col;
	Q_WORDDATA NoiseCondition;
	Q_WORDDATA CopyFilterColor;
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

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

shAttackInfo sh2_attack_list[66];
HH_Class_Wrapper_Work* _pWork;
_VbWVSMATRIX VbWvsMatrix;
_anon1 cam0;
_VC_WORK vcWork;
sh2gfw_Env_ctl Env_ctl;
Item item;
shPlayerWork sh2jms;
HH_Class_Wrapper_Work _work;

void ViewFrustum_Primitive_ClipMatrix_Create();
void ViewFrustum_BoundingBox_ClipMatrix_Create();
void AlwaysFront_WorldView_Matrix_Create();
unsigned int HH_ClassWrapper_RotTrans_PerspectiveProjection_Clip(int* Dst_iVector, float* pReverse_W, float LocalScreen_Matrix[4], float LocalScreen_ClipMatrix[4], float* Src_fVector);
void HH_ClassWrapper_Transform_PerspectiveProjection_Clip_forTriangleStrip(int* Dst_iVector, float* STQ_fVector, float LocalScreen_Matrix[4], float LocalScreen_ClipMatrix[4], float* Src_fVector);
void HH_ClassWrapper_Transform_PerspectiveProjection_Clip_N(int* Dst_iVector, float* STQ_fVector, float LocalScreen_Matrix[4], float LocalScreen_ClipMatrix[4], float* Src_fVector, unsigned int Clip_Mask);
unsigned int HH_ClassWrapper_Point_Clip_Judge(float LocalScreen_ClipMatrix[4], float pSrc_fVector_Array[4], unsigned int Array_Max);
void HH_ClassWrapper_Matrix_Group_Update();
void HH_ClassWrapper_ViewFrustum_Primitive_ClipMatrix_Get(float ViewFrustum_Primitive_ClipMatrix[4]);
void HH_ClassWrapper_ViewFrustum_ClipMatrix_Get(float ViewFrustum_Primitive_ClipMatrix[4]);
void HH_ClassWrapper_AlwaysFront_WorldView_Matrix_Get(float AlwaysFront_WorldView_Matrix[4]);
void HH_ClassWrapper_WorldViewMatrix_Get(float WorldView_Matrix[4]);
void HH_ClassWrapper_ViewScreenMatrix_Get(float ViewScreen_Matrix[4]);
void HH_ClassWrapper_WorldScreenMatrix_Get(float WorldScreen_Matrix[4]);
void HH_ClassWrapper_ViewDirection_Get(float* View_Direction);
void HH_ClassWrapper_LightDirection_Get(float* Light_Direction);
float HH_ClassWrapper_ViewingFrustumParamerter_NearZ_Get();
float HH_ClassWrapper_ViewingFrustumParamerter_FarZ_Get();
float HH_ClassWrapper_FogParameter_A_Get();
float HH_ClassWrapper_FogParameter_B_Get();
float HH_ClassWrapper_Float_Clamp(float Src_Value, float Min, float Max);
void HH_ClassWrapper_AmbientColor_Get(float* Ambient_Color);
unsigned int HH_ClassWrapper_SpotLight_Enable_Check();
void HH_ClassWrapper_SpotLight_EnvironmentParameter_Get(float* Light_Position, float* Light_Direction, float* Light_Color, float* Parameter);
float HH_ClassWrapper_SpotLight_ColorRatio_Calculator(float* Light_Position, float* Light_Direction, float* Vertex, float Cos_Value, float Far_Z);
float HH_ClassWrapper_SpecularRatio0_Calculator(float* View_Direction, float* Light_Direction, float* Normal_Vector, float Cos_Value);
void HH_ClassWrapper_SpecularRGBA_Add_BaseRGBA(int* iRGBA, float* RGBA_Base, float* Specular_RGBA_Base, float Specular_Ratio);
unsigned int HH_ClassWrapper_MemoryCopy128Align_DesignateCycle(void* pDestination_Address, void* pSource_Address, unsigned int Cycle_Max, unsigned int LoadStore_Size, unsigned int Next_Offset);
<unknown fundamental type (0xa510)>* HH_ClassWrapper_GS_EnvironmentRegister_Frame_AlphaMask_Get();
<unknown fundamental type (0xa510)>* HH_ClassWrapper_GS_EnvironmentRegister_Frame_NoMask_Get();
void HH_ClassWrapper_Packet_ADC_Flag_OnceMore_Set(unsigned int* pPacket_End, unsigned int Mesh_Width, unsigned int Mesh_Height);
unsigned int HH_ClassWrapper_JMS_WorldPosition_Get(float* Position);

// 
// Start address: 0x269090
void ViewFrustum_Primitive_ClipMatrix_Create()
{
	float z_far;
	float z_near;
	float y_range;
	float x_range;
	float vsm[4][4];
	float wvm[4][4];
	float clip_mat[4][4];
	// Line 112, Address: 0x269090, Func Offset: 0
	// Line 117, Address: 0x2690a0, Func Offset: 0x10
	// Line 118, Address: 0x2690ac, Func Offset: 0x1c
	// Line 122, Address: 0x2690b8, Func Offset: 0x28
	// Line 123, Address: 0x2690c4, Func Offset: 0x34
	// Line 126, Address: 0x2690d0, Func Offset: 0x40
	// Line 127, Address: 0x2690dc, Func Offset: 0x4c
	// Line 128, Address: 0x269100, Func Offset: 0x70
	// Line 131, Address: 0x269110, Func Offset: 0x80
	// Line 132, Address: 0x269120, Func Offset: 0x90
	// Line 133, Address: 0x269128, Func Offset: 0x98
	// Line 134, Address: 0x269144, Func Offset: 0xb4
	// Line 135, Address: 0x269148, Func Offset: 0xb8
	// Line 137, Address: 0x269160, Func Offset: 0xd0
	// Func End, Address: 0x269178, Func Offset: 0xe8
}

// 
// Start address: 0x269180
void ViewFrustum_BoundingBox_ClipMatrix_Create()
{
	float z_far;
	float z_near;
	float y_range;
	float x_range;
	float vsm[4][4];
	float wvm[4][4];
	float clip_mat[4][4];
	// Line 152, Address: 0x269180, Func Offset: 0
	// Line 157, Address: 0x269190, Func Offset: 0x10
	// Line 158, Address: 0x26919c, Func Offset: 0x1c
	// Line 160, Address: 0x2691b4, Func Offset: 0x34
	// Line 161, Address: 0x2691c0, Func Offset: 0x40
	// Line 164, Address: 0x2691cc, Func Offset: 0x4c
	// Line 165, Address: 0x2691d8, Func Offset: 0x58
	// Line 166, Address: 0x269200, Func Offset: 0x80
	// Line 169, Address: 0x269210, Func Offset: 0x90
	// Line 170, Address: 0x269220, Func Offset: 0xa0
	// Line 171, Address: 0x269228, Func Offset: 0xa8
	// Line 172, Address: 0x269244, Func Offset: 0xc4
	// Line 173, Address: 0x269248, Func Offset: 0xc8
	// Line 174, Address: 0x269264, Func Offset: 0xe4
	// Func End, Address: 0x26927c, Func Offset: 0xfc
}

// 
// Start address: 0x269280
void AlwaysFront_WorldView_Matrix_Create()
{
	float inv_wvm[4][4];
	float wvm[4][4];
	// Line 186, Address: 0x269280, Func Offset: 0
	// Line 189, Address: 0x269288, Func Offset: 0x8
	// Line 191, Address: 0x269294, Func Offset: 0x14
	// Line 192, Address: 0x269298, Func Offset: 0x18
	// Line 193, Address: 0x26929c, Func Offset: 0x1c
	// Line 194, Address: 0x2692a0, Func Offset: 0x20
	// Line 195, Address: 0x2692b0, Func Offset: 0x30
	// Line 196, Address: 0x2692c8, Func Offset: 0x48
	// Func End, Address: 0x2692d8, Func Offset: 0x58
}

// 
// Start address: 0x2692e0
unsigned int HH_ClassWrapper_RotTrans_PerspectiveProjection_Clip(int* Dst_iVector, float* pReverse_W, float LocalScreen_Matrix[4], float LocalScreen_ClipMatrix[4], float* Src_fVector)
{
	unsigned int clip;
	float reverse_w;
	unsigned int result;
	// Line 230, Address: 0x2692e0, Func Offset: 0
	// Line 231, Address: 0x2692e4, Func Offset: 0x4
	// Line 232, Address: 0x2692e8, Func Offset: 0x8
	// Line 233, Address: 0x2692ec, Func Offset: 0xc
	// Line 234, Address: 0x2692f0, Func Offset: 0x10
	// Line 235, Address: 0x2692f4, Func Offset: 0x14
	// Line 236, Address: 0x2692f8, Func Offset: 0x18
	// Line 237, Address: 0x2692fc, Func Offset: 0x1c
	// Line 244, Address: 0x269300, Func Offset: 0x20
	// Line 245, Address: 0x269304, Func Offset: 0x24
	// Line 246, Address: 0x269308, Func Offset: 0x28
	// Line 247, Address: 0x26930c, Func Offset: 0x2c
	// Line 248, Address: 0x269310, Func Offset: 0x30
	// Line 250, Address: 0x269314, Func Offset: 0x34
	// Line 252, Address: 0x269318, Func Offset: 0x38
	// Line 253, Address: 0x26931c, Func Offset: 0x3c
	// Line 254, Address: 0x269320, Func Offset: 0x40
	// Line 255, Address: 0x269324, Func Offset: 0x44
	// Line 256, Address: 0x269328, Func Offset: 0x48
	// Line 257, Address: 0x26932c, Func Offset: 0x4c
	// Line 258, Address: 0x269330, Func Offset: 0x50
	// Line 259, Address: 0x269334, Func Offset: 0x54
	// Line 260, Address: 0x269338, Func Offset: 0x58
	// Line 261, Address: 0x26933c, Func Offset: 0x5c
	// Line 262, Address: 0x269340, Func Offset: 0x60
	// Line 263, Address: 0x269344, Func Offset: 0x64
	// Line 265, Address: 0x26934c, Func Offset: 0x6c
	// Line 271, Address: 0x269350, Func Offset: 0x70
	// Line 272, Address: 0x269370, Func Offset: 0x90
	// Line 275, Address: 0x269374, Func Offset: 0x94
	// Func End, Address: 0x26937c, Func Offset: 0x9c
}

// 
// Start address: 0x269380
void HH_ClassWrapper_Transform_PerspectiveProjection_Clip_forTriangleStrip(int* Dst_iVector, float* STQ_fVector, float LocalScreen_Matrix[4], float LocalScreen_ClipMatrix[4], float* Src_fVector)
{
	// Line 314, Address: 0x269380, Func Offset: 0
	// Line 315, Address: 0x269384, Func Offset: 0x4
	// Line 316, Address: 0x269388, Func Offset: 0x8
	// Line 317, Address: 0x26938c, Func Offset: 0xc
	// Line 318, Address: 0x269390, Func Offset: 0x10
	// Line 319, Address: 0x269394, Func Offset: 0x14
	// Line 320, Address: 0x269398, Func Offset: 0x18
	// Line 321, Address: 0x26939c, Func Offset: 0x1c
	// Line 344, Address: 0x2693a0, Func Offset: 0x20
	// Line 345, Address: 0x2693ac, Func Offset: 0x2c
	// Line 346, Address: 0x2693b0, Func Offset: 0x30
	// Line 348, Address: 0x2693b4, Func Offset: 0x34
	// Line 349, Address: 0x2693b8, Func Offset: 0x38
	// Line 350, Address: 0x2693bc, Func Offset: 0x3c
	// Line 351, Address: 0x2693c0, Func Offset: 0x40
	// Line 353, Address: 0x2693c4, Func Offset: 0x44
	// Line 355, Address: 0x2693c8, Func Offset: 0x48
	// Line 356, Address: 0x2693cc, Func Offset: 0x4c
	// Line 357, Address: 0x2693d0, Func Offset: 0x50
	// Line 358, Address: 0x2693d4, Func Offset: 0x54
	// Line 359, Address: 0x2693d8, Func Offset: 0x58
	// Line 360, Address: 0x2693dc, Func Offset: 0x5c
	// Line 362, Address: 0x2693e0, Func Offset: 0x60
	// Line 363, Address: 0x2693e4, Func Offset: 0x64
	// Line 364, Address: 0x2693e8, Func Offset: 0x68
	// Line 366, Address: 0x2693ec, Func Offset: 0x6c
	// Line 367, Address: 0x2693f0, Func Offset: 0x70
	// Line 368, Address: 0x2693f4, Func Offset: 0x74
	// Line 370, Address: 0x2693f8, Func Offset: 0x78
	// Line 373, Address: 0x2693fc, Func Offset: 0x7c
	// Line 374, Address: 0x269400, Func Offset: 0x80
	// Line 380, Address: 0x269408, Func Offset: 0x88
	// Line 381, Address: 0x26940c, Func Offset: 0x8c
	// Line 383, Address: 0x269410, Func Offset: 0x90
	// Line 420, Address: 0x269414, Func Offset: 0x94
	// Func End, Address: 0x26941c, Func Offset: 0x9c
}

// 
// Start address: 0x269420
void HH_ClassWrapper_Transform_PerspectiveProjection_Clip_N(int* Dst_iVector, float* STQ_fVector, float LocalScreen_Matrix[4], float LocalScreen_ClipMatrix[4], float* Src_fVector, unsigned int Clip_Mask)
{
	// Line 462, Address: 0x269420, Func Offset: 0
	// Line 463, Address: 0x269424, Func Offset: 0x4
	// Line 464, Address: 0x269428, Func Offset: 0x8
	// Line 465, Address: 0x26942c, Func Offset: 0xc
	// Line 466, Address: 0x269430, Func Offset: 0x10
	// Line 467, Address: 0x269434, Func Offset: 0x14
	// Line 468, Address: 0x269438, Func Offset: 0x18
	// Line 469, Address: 0x26943c, Func Offset: 0x1c
	// Line 492, Address: 0x269440, Func Offset: 0x20
	// Line 493, Address: 0x269448, Func Offset: 0x28
	// Line 494, Address: 0x26944c, Func Offset: 0x2c
	// Line 496, Address: 0x269450, Func Offset: 0x30
	// Line 497, Address: 0x269454, Func Offset: 0x34
	// Line 498, Address: 0x269458, Func Offset: 0x38
	// Line 499, Address: 0x26945c, Func Offset: 0x3c
	// Line 501, Address: 0x269460, Func Offset: 0x40
	// Line 503, Address: 0x269464, Func Offset: 0x44
	// Line 504, Address: 0x269468, Func Offset: 0x48
	// Line 505, Address: 0x26946c, Func Offset: 0x4c
	// Line 506, Address: 0x269470, Func Offset: 0x50
	// Line 507, Address: 0x269474, Func Offset: 0x54
	// Line 508, Address: 0x269478, Func Offset: 0x58
	// Line 510, Address: 0x26947c, Func Offset: 0x5c
	// Line 511, Address: 0x269480, Func Offset: 0x60
	// Line 512, Address: 0x269484, Func Offset: 0x64
	// Line 514, Address: 0x269488, Func Offset: 0x68
	// Line 515, Address: 0x26948c, Func Offset: 0x6c
	// Line 516, Address: 0x269490, Func Offset: 0x70
	// Line 518, Address: 0x269494, Func Offset: 0x74
	// Line 521, Address: 0x269498, Func Offset: 0x78
	// Line 522, Address: 0x26949c, Func Offset: 0x7c
	// Line 528, Address: 0x2694a4, Func Offset: 0x84
	// Line 529, Address: 0x2694a8, Func Offset: 0x88
	// Line 531, Address: 0x2694ac, Func Offset: 0x8c
	// Line 566, Address: 0x2694b0, Func Offset: 0x90
	// Func End, Address: 0x2694b8, Func Offset: 0x98
}

// 
// Start address: 0x2694c0
unsigned int HH_ClassWrapper_Point_Clip_Judge(float LocalScreen_ClipMatrix[4], float pSrc_fVector_Array[4], unsigned int Array_Max)
{
	unsigned int clip_judge_acc;
	// Line 582, Address: 0x2694c0, Func Offset: 0
	// Line 591, Address: 0x2694c4, Func Offset: 0x4
	// Line 592, Address: 0x2694c8, Func Offset: 0x8
	// Line 593, Address: 0x2694cc, Func Offset: 0xc
	// Line 594, Address: 0x2694d0, Func Offset: 0x10
	// Line 611, Address: 0x2694d4, Func Offset: 0x14
	// Line 614, Address: 0x2694dc, Func Offset: 0x1c
	// Line 615, Address: 0x2694e0, Func Offset: 0x20
	// Line 616, Address: 0x2694e4, Func Offset: 0x24
	// Line 617, Address: 0x2694e8, Func Offset: 0x28
	// Line 619, Address: 0x2694ec, Func Offset: 0x2c
	// Line 620, Address: 0x2694f0, Func Offset: 0x30
	// Line 621, Address: 0x2694f4, Func Offset: 0x34
	// Line 623, Address: 0x2694f8, Func Offset: 0x38
	// Line 624, Address: 0x2694fc, Func Offset: 0x3c
	// Line 625, Address: 0x269500, Func Offset: 0x40
	// Line 627, Address: 0x269504, Func Offset: 0x44
	// Line 628, Address: 0x269508, Func Offset: 0x48
	// Line 630, Address: 0x26950c, Func Offset: 0x4c
	// Line 632, Address: 0x269514, Func Offset: 0x54
	// Line 635, Address: 0x269518, Func Offset: 0x58
	// Line 658, Address: 0x269520, Func Offset: 0x60
	// Func End, Address: 0x269528, Func Offset: 0x68
}

// 
// Start address: 0x269530
void HH_ClassWrapper_Matrix_Group_Update()
{
	// Line 669, Address: 0x269530, Func Offset: 0
	// Line 671, Address: 0x269538, Func Offset: 0x8
	// Line 674, Address: 0x269540, Func Offset: 0x10
	// Line 677, Address: 0x269548, Func Offset: 0x18
	// Line 678, Address: 0x269550, Func Offset: 0x20
	// Func End, Address: 0x269560, Func Offset: 0x30
}

// 
// Start address: 0x269560
void HH_ClassWrapper_ViewFrustum_Primitive_ClipMatrix_Get(float ViewFrustum_Primitive_ClipMatrix[4])
{
	// Line 691, Address: 0x269560, Func Offset: 0
	// Line 692, Address: 0x269568, Func Offset: 0x8
	// Line 693, Address: 0x269578, Func Offset: 0x18
	// Func End, Address: 0x269588, Func Offset: 0x28
}

// 
// Start address: 0x269590
void HH_ClassWrapper_ViewFrustum_ClipMatrix_Get(float ViewFrustum_Primitive_ClipMatrix[4])
{
	// Line 696, Address: 0x269590, Func Offset: 0
	// Line 697, Address: 0x269598, Func Offset: 0x8
	// Line 698, Address: 0x2695a8, Func Offset: 0x18
	// Func End, Address: 0x2695b8, Func Offset: 0x28
}

// 
// Start address: 0x2695c0
void HH_ClassWrapper_AlwaysFront_WorldView_Matrix_Get(float AlwaysFront_WorldView_Matrix[4])
{
	// Line 726, Address: 0x2695c0, Func Offset: 0
	// Line 727, Address: 0x2695c8, Func Offset: 0x8
	// Line 728, Address: 0x2695dc, Func Offset: 0x1c
	// Func End, Address: 0x2695ec, Func Offset: 0x2c
}

// 
// Start address: 0x2695f0
void HH_ClassWrapper_WorldViewMatrix_Get(float WorldView_Matrix[4])
{
	// Line 738, Address: 0x2695f0, Func Offset: 0
	// Line 739, Address: 0x2695f8, Func Offset: 0x8
	// Line 740, Address: 0x269608, Func Offset: 0x18
	// Func End, Address: 0x269618, Func Offset: 0x28
}

// 
// Start address: 0x269620
void HH_ClassWrapper_ViewScreenMatrix_Get(float ViewScreen_Matrix[4])
{
	// Line 750, Address: 0x269620, Func Offset: 0
	// Line 751, Address: 0x269628, Func Offset: 0x8
	// Line 752, Address: 0x269638, Func Offset: 0x18
	// Func End, Address: 0x269648, Func Offset: 0x28
}

// 
// Start address: 0x269650
void HH_ClassWrapper_WorldScreenMatrix_Get(float WorldScreen_Matrix[4])
{
	// Line 762, Address: 0x269650, Func Offset: 0
	// Line 763, Address: 0x269658, Func Offset: 0x8
	// Line 764, Address: 0x269668, Func Offset: 0x18
	// Func End, Address: 0x269678, Func Offset: 0x28
}

// 
// Start address: 0x269680
void HH_ClassWrapper_ViewDirection_Get(float* View_Direction)
{
	// Line 786, Address: 0x269680, Func Offset: 0
	// Line 787, Address: 0x269688, Func Offset: 0x8
	// Line 788, Address: 0x269690, Func Offset: 0x10
	// Func End, Address: 0x2696a0, Func Offset: 0x20
}

// 
// Start address: 0x2696a0
void HH_ClassWrapper_LightDirection_Get(float* Light_Direction)
{
	float tmp[4];
	// Line 810, Address: 0x2696a0, Func Offset: 0
	// Line 813, Address: 0x2696ac, Func Offset: 0xc
	// Line 814, Address: 0x2696b8, Func Offset: 0x18
	// Func End, Address: 0x2696c8, Func Offset: 0x28
}

// 
// Start address: 0x2696d0
float HH_ClassWrapper_ViewingFrustumParamerter_NearZ_Get()
{
	// Line 825, Address: 0x2696d0, Func Offset: 0
	// Line 826, Address: 0x2696d8, Func Offset: 0x8
	// Func End, Address: 0x2696e0, Func Offset: 0x10
}

// 
// Start address: 0x2696e0
float HH_ClassWrapper_ViewingFrustumParamerter_FarZ_Get()
{
	// Line 837, Address: 0x2696e0, Func Offset: 0
	// Line 838, Address: 0x2696e8, Func Offset: 0x8
	// Func End, Address: 0x2696f0, Func Offset: 0x10
}

// 
// Start address: 0x2696f0
float HH_ClassWrapper_FogParameter_A_Get()
{
	// Line 849, Address: 0x2696f0, Func Offset: 0
	// Line 850, Address: 0x26972c, Func Offset: 0x3c
	// Func End, Address: 0x269734, Func Offset: 0x44
}

// 
// Start address: 0x269740
float HH_ClassWrapper_FogParameter_B_Get()
{
	// Line 861, Address: 0x269740, Func Offset: 0
	// Line 862, Address: 0x269780, Func Offset: 0x40
	// Func End, Address: 0x269788, Func Offset: 0x48
}

// 
// Start address: 0x269790
float HH_ClassWrapper_Float_Clamp(float Src_Value, float Min, float Max)
{
	// Line 876, Address: 0x269790, Func Offset: 0
	// Line 877, Address: 0x2697a4, Func Offset: 0x14
	// Func End, Address: 0x2697ac, Func Offset: 0x1c
}

// 
// Start address: 0x2697b0
void HH_ClassWrapper_AmbientColor_Get(float* Ambient_Color)
{
	// Line 887, Address: 0x2697b0, Func Offset: 0
	// Line 888, Address: 0x2697b8, Func Offset: 0x8
	// Line 889, Address: 0x2697d0, Func Offset: 0x20
	// Func End, Address: 0x2697e0, Func Offset: 0x30
}

// 
// Start address: 0x2697e0
unsigned int HH_ClassWrapper_SpotLight_Enable_Check()
{
	// Line 902, Address: 0x2697e0, Func Offset: 0
	// Line 903, Address: 0x2697e8, Func Offset: 0x8
	// Func End, Address: 0x2697f0, Func Offset: 0x10
}

// 
// Start address: 0x2697f0
void HH_ClassWrapper_SpotLight_EnvironmentParameter_Get(float* Light_Position, float* Light_Direction, float* Light_Color, float* Parameter)
{
	float tmp[4];
	// Line 916, Address: 0x2697f0, Func Offset: 0
	// Line 919, Address: 0x269800, Func Offset: 0x10
	// Line 921, Address: 0x269810, Func Offset: 0x20
	// Line 922, Address: 0x269824, Func Offset: 0x34
	// Func End, Address: 0x269838, Func Offset: 0x48
}

// 
// Start address: 0x269840
float HH_ClassWrapper_SpotLight_ColorRatio_Calculator(float* Light_Position, float* Light_Direction, float* Vertex, float Cos_Value, float Far_Z)
{
	float ratio_1;
	float ratio_0;
	float vec_volume;
	float cos_phai;
	float vec[4];
	float result;
	// Line 937, Address: 0x269840, Func Offset: 0
	// Line 938, Address: 0x26986c, Func Offset: 0x2c
	// Line 943, Address: 0x269870, Func Offset: 0x30
	// Line 944, Address: 0x269884, Func Offset: 0x44
	// Line 947, Address: 0x2698a4, Func Offset: 0x64
	// Line 948, Address: 0x2698b4, Func Offset: 0x74
	// Line 949, Address: 0x2698c4, Func Offset: 0x84
	// Line 952, Address: 0x2698d4, Func Offset: 0x94
	// Line 953, Address: 0x2698e4, Func Offset: 0xa4
	// Line 954, Address: 0x269900, Func Offset: 0xc0
	// Line 955, Address: 0x26990c, Func Offset: 0xcc
	// Line 958, Address: 0x269910, Func Offset: 0xd0
	// Line 959, Address: 0x269914, Func Offset: 0xd4
	// Func End, Address: 0x269938, Func Offset: 0xf8
}

// 
// Start address: 0x269940
float HH_ClassWrapper_SpecularRatio0_Calculator(float* View_Direction, float* Light_Direction, float* Normal_Vector, float Cos_Value)
{
	float cos_beta;
	float cos_theta;
	float tmp_vec[4];
	float reverse_light_dir[4];
	float input_light_power;
	float specular_coefficient;
	float result;
	// Line 974, Address: 0x269940, Func Offset: 0
	// Line 987, Address: 0x269968, Func Offset: 0x28
	// Line 988, Address: 0x269978, Func Offset: 0x38
	// Line 989, Address: 0x269990, Func Offset: 0x50
	// Line 991, Address: 0x269994, Func Offset: 0x54
	// Line 992, Address: 0x2699b4, Func Offset: 0x74
	// Line 993, Address: 0x2699c8, Func Offset: 0x88
	// Line 995, Address: 0x2699d8, Func Offset: 0x98
	// Line 997, Address: 0x2699e8, Func Offset: 0xa8
	// Line 998, Address: 0x269a00, Func Offset: 0xc0
	// Line 1007, Address: 0x269a04, Func Offset: 0xc4
	// Line 1010, Address: 0x269a4c, Func Offset: 0x10c
	// Func End, Address: 0x269a6c, Func Offset: 0x12c
}

// 
// Start address: 0x269a70
void HH_ClassWrapper_SpecularRGBA_Add_BaseRGBA(int* iRGBA, float* RGBA_Base, float* Specular_RGBA_Base, float Specular_Ratio)
{
	// Line 1073, Address: 0x269a70, Func Offset: 0
	// Line 1076, Address: 0x269a78, Func Offset: 0x8
	// Line 1077, Address: 0x269a7c, Func Offset: 0xc
	// Line 1078, Address: 0x269a80, Func Offset: 0x10
	// Line 1079, Address: 0x269a84, Func Offset: 0x14
	// Line 1080, Address: 0x269a88, Func Offset: 0x18
	// Line 1081, Address: 0x269a8c, Func Offset: 0x1c
	// Line 1082, Address: 0x269a90, Func Offset: 0x20
	// Line 1083, Address: 0x269a94, Func Offset: 0x24
	// Line 1084, Address: 0x269a98, Func Offset: 0x28
	// Line 1085, Address: 0x269a9c, Func Offset: 0x2c
	// Line 1086, Address: 0x269aa0, Func Offset: 0x30
	// Line 1087, Address: 0x269aa4, Func Offset: 0x34
	// Line 1093, Address: 0x269aa8, Func Offset: 0x38
	// Func End, Address: 0x269ab0, Func Offset: 0x40
}

// 
// Start address: 0x269ab0
unsigned int HH_ClassWrapper_MemoryCopy128Align_DesignateCycle(void* pDestination_Address, void* pSource_Address, unsigned int Cycle_Max, unsigned int LoadStore_Size, unsigned int Next_Offset)
{
	unsigned int result;
	// Line 1179, Address: 0x269ab0, Func Offset: 0
	// Line 1210, Address: 0x269ab4, Func Offset: 0x4
	// Line 1211, Address: 0x269ab8, Func Offset: 0x8
	// Line 1212, Address: 0x269ac4, Func Offset: 0x14
	// Line 1214, Address: 0x269ac8, Func Offset: 0x18
	// Line 1216, Address: 0x269acc, Func Offset: 0x1c
	// Line 1217, Address: 0x269ad0, Func Offset: 0x20
	// Line 1218, Address: 0x269ad4, Func Offset: 0x24
	// Line 1219, Address: 0x269ad8, Func Offset: 0x28
	// Line 1220, Address: 0x269adc, Func Offset: 0x2c
	// Line 1221, Address: 0x269ae0, Func Offset: 0x30
	// Line 1224, Address: 0x269ae8, Func Offset: 0x38
	// Line 1225, Address: 0x269aec, Func Offset: 0x3c
	// Line 1226, Address: 0x269af0, Func Offset: 0x40
	// Line 1227, Address: 0x269af4, Func Offset: 0x44
	// Line 1293, Address: 0x269afc, Func Offset: 0x4c
	// Func End, Address: 0x269b04, Func Offset: 0x54
}

// 
// Start address: 0x269b10
<unknown fundamental type (0xa510)>* HH_ClassWrapper_GS_EnvironmentRegister_Frame_AlphaMask_Get()
{
	// Line 1304, Address: 0x269b10, Func Offset: 0
	// Line 1305, Address: 0x269b18, Func Offset: 0x8
	// Line 1306, Address: 0x269b20, Func Offset: 0x10
	// Func End, Address: 0x269b30, Func Offset: 0x20
}

// 
// Start address: 0x269b30
<unknown fundamental type (0xa510)>* HH_ClassWrapper_GS_EnvironmentRegister_Frame_NoMask_Get()
{
	// Line 1316, Address: 0x269b30, Func Offset: 0
	// Line 1317, Address: 0x269b38, Func Offset: 0x8
	// Line 1318, Address: 0x269b40, Func Offset: 0x10
	// Func End, Address: 0x269b50, Func Offset: 0x20
}

// 
// Start address: 0x269b50
void HH_ClassWrapper_Packet_ADC_Flag_OnceMore_Set(unsigned int* pPacket_End, unsigned int Mesh_Width, unsigned int Mesh_Height)
{
	unsigned int status_accumlate;
	unsigned int mesh_width;
	unsigned int h_index;
	unsigned int w_index;
	// Line 1341, Address: 0x269b50, Func Offset: 0
	// Line 1344, Address: 0x269b58, Func Offset: 0x8
	// Line 1345, Address: 0x269b5c, Func Offset: 0xc
	// Line 1346, Address: 0x269b68, Func Offset: 0x18
	// Line 1347, Address: 0x269b74, Func Offset: 0x24
	// Line 1349, Address: 0x269b80, Func Offset: 0x30
	// Line 1352, Address: 0x269b90, Func Offset: 0x40
	// Line 1353, Address: 0x269b94, Func Offset: 0x44
	// Line 1361, Address: 0x269ba4, Func Offset: 0x54
	// Line 1362, Address: 0x269ba8, Func Offset: 0x58
	// Line 1363, Address: 0x269bbc, Func Offset: 0x6c
	// Func End, Address: 0x269bc4, Func Offset: 0x74
}

// 
// Start address: 0x269bd0
unsigned int HH_ClassWrapper_JMS_WorldPosition_Get(float* Position)
{
	unsigned int result;
	// Line 1375, Address: 0x269bd0, Func Offset: 0
	// Line 1376, Address: 0x269bd8, Func Offset: 0x8
	// Line 1378, Address: 0x269bdc, Func Offset: 0xc
	// Line 1379, Address: 0x269bec, Func Offset: 0x1c
	// Line 1380, Address: 0x269bf8, Func Offset: 0x28
	// Line 1384, Address: 0x269bfc, Func Offset: 0x2c
	// Func End, Address: 0x269c0c, Func Offset: 0x3c
}

