typedef struct shSkelton;
typedef struct _VC_WATCH_MV_PARAM;
typedef struct _anon0;
typedef struct _VC_CAM_MV_PARAM;
typedef enum _VC_FLAGS : unsigned short;
typedef struct SubCharacter;
typedef struct _VC_NEAR_ROAD_DATA;
typedef struct _VC_LIMIT_AREA;
typedef struct _VC_ROAD_DATA;
typedef struct _VC_WORK;
typedef struct _VC_CHASE_CAM_PARAM;
typedef struct _VC_FIX_CAM_MANAGER;
typedef struct _VC_SETTLE_CAM_PARAM;
typedef struct shBattleFight;
typedef struct _VC_CIR_CAM_MANAGER;
typedef struct shBattleShot;
typedef struct _VC_FIX_ANG_CAM_PARAM;
typedef struct shBattleArea;
typedef struct _VC_THROUGH_DOOR_CAM_PARAM;
typedef struct shBattleInfo;
typedef struct _VC_LOCUS_CIRCLE_CAM_PARAM;
typedef struct _VC_ROAD_AREA;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon1;
typedef struct _CL_VHIT_RESULT;
typedef union _anon2;
typedef struct _anon3;
typedef union _anon4;

typedef void(*type_7)(SubCharacter*);
typedef void(*type_10)(SubCharacter*);

typedef float type_0[4];
typedef float type_1[4];
typedef shAttackInfo type_2[66];
typedef float type_3[4];
typedef float type_4[4][4];
typedef float type_5[4];
typedef float type_6[4];
typedef float type_8[4];
typedef float type_9[4][4];
typedef float type_11[4];
typedef unsigned char type_12[4];
typedef _VC_NEAR_ROAD_DATA type_13[128];
typedef float type_14[4];
typedef float type_15[4];
typedef float type_16[4];
typedef float type_17[4];
typedef int type_18[5];
typedef float type_19[4];
typedef int type_20[9];
typedef unsigned char type_21[16];

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon0 src_m;
	_anon3 src_t;
	_anon0 des_m;
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

struct _VC_WATCH_MV_PARAM
{
	float ang_accel_x;
	float ang_accel_y;
	float max_ang_spd_x;
	float max_ang_spd_y;
};

struct _anon0
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
	_anon0 mat;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _VC_FIX_ANG_CAM_PARAM
{
	float ang_x;
	float ang_y;
	float ofs_hy;
	float cam2wth_dist;
};

struct shBattleArea
{
	float center;
	float radius;
};

struct _VC_THROUGH_DOOR_CAM_PARAM
{
	int active_f;
	float timer;
	float rail_ang_y;
	float rail_sta_pos[4];
	float rail_sta_to_chara_dist;
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

struct _VC_LOCUS_CIRCLE_CAM_PARAM
{
	float origin_x;
	float origin_z;
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

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
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
	float x;
	float y;
	float z;
	float w;
};

union _anon4
{
	unsigned char data[16];
	_VC_CHASE_CAM_PARAM chs;
	_VC_SETTLE_CAM_PARAM stl;
	_VC_FIX_ANG_CAM_PARAM fix;
	_VC_LOCUS_CIRCLE_CAM_PARAM cir;
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
_VC_WORK vcWork;

void vcEndProcessingVC_WORK();
void vcEndProcessingOldNearRoad(_VC_WORK* w_p);
void vcCorrectCamMatAngForcibly(float* ofs_cam_ang);
void vcWarpForFixAngCam(_VC_WORK* w_p);
float vcRetCirRadiusReduction(_VC_WORK* w_p);
void vcChangeProjByDist(_VC_NEAR_ROAD_DATA* near_rd_p, float mv_vec_y);

// 
// Start address: 0x252770
void vcEndProcessingVC_WORK()
{
	// Line 26, Address: 0x252770, Func Offset: 0
	// Line 28, Address: 0x252784, Func Offset: 0x14
	// Line 30, Address: 0x252798, Func Offset: 0x28
	// Line 31, Address: 0x2527a0, Func Offset: 0x30
	// Func End, Address: 0x2527a8, Func Offset: 0x38
}

// 
// Start address: 0x2527b0
void vcEndProcessingOldNearRoad(_VC_WORK* w_p)
{
	// Line 41, Address: 0x2527b0, Func Offset: 0
	// Line 42, Address: 0x2527bc, Func Offset: 0xc
	// Line 44, Address: 0x2527c0, Func Offset: 0x10
	// Func End, Address: 0x2527c8, Func Offset: 0x18
}

// 
// Start address: 0x2527d0
void vcCorrectCamMatAngForcibly(float* ofs_cam_ang)
{
	float ofs_rr_lim_ang_y;
	float ofs_lr_lim_ang_y;
	float deflt_rr_lim_ang_y;
	float deflt_lr_lim_ang_y;
	_VC_ROAD_DATA rd_data;
	// Line 53, Address: 0x2527d0, Func Offset: 0
	// Line 44, Address: 0x2527f0, Func Offset: 0x20
	// Line 53, Address: 0x2527f4, Func Offset: 0x24
	// Line 44, Address: 0x2527fc, Func Offset: 0x2c
	// Line 53, Address: 0x252804, Func Offset: 0x34
	// Line 44, Address: 0x25280c, Func Offset: 0x3c
	// Line 53, Address: 0x252810, Func Offset: 0x40
	// Line 58, Address: 0x252818, Func Offset: 0x48
	// Line 60, Address: 0x252838, Func Offset: 0x68
	// Line 61, Address: 0x252848, Func Offset: 0x78
	// Line 62, Address: 0x25284c, Func Offset: 0x7c
	// Line 63, Address: 0x252850, Func Offset: 0x80
	// Line 64, Address: 0x252858, Func Offset: 0x88
	// Line 68, Address: 0x252860, Func Offset: 0x90
	// Line 69, Address: 0x252864, Func Offset: 0x94
	// Line 70, Address: 0x252868, Func Offset: 0x98
	// Line 71, Address: 0x252870, Func Offset: 0xa0
	// Line 74, Address: 0x252878, Func Offset: 0xa8
	// Line 81, Address: 0x2528b8, Func Offset: 0xe8
	// Line 83, Address: 0x2528cc, Func Offset: 0xfc
	// Line 86, Address: 0x2528dc, Func Offset: 0x10c
	// Line 88, Address: 0x252904, Func Offset: 0x134
	// Line 89, Address: 0x252914, Func Offset: 0x144
	// Line 90, Address: 0x25291c, Func Offset: 0x14c
	// Line 92, Address: 0x252934, Func Offset: 0x164
	// Line 95, Address: 0x25294c, Func Offset: 0x17c
	// Line 97, Address: 0x25295c, Func Offset: 0x18c
	// Func End, Address: 0x25297c, Func Offset: 0x1ac
}

// 
// Start address: 0x252980
void vcWarpForFixAngCam(_VC_WORK* w_p)
{
	float actual_ang_y;
	float ofs_ang_y;
	// Line 106, Address: 0x252980, Func Offset: 0
	// Line 125, Address: 0x252994, Func Offset: 0x14
	// Line 130, Address: 0x2529b8, Func Offset: 0x38
	// Line 133, Address: 0x2529cc, Func Offset: 0x4c
	// Line 136, Address: 0x252a08, Func Offset: 0x88
	// Line 175, Address: 0x252a1c, Func Offset: 0x9c
	// Line 178, Address: 0x252a30, Func Offset: 0xb0
	// Line 179, Address: 0x252a60, Func Offset: 0xe0
	// Line 181, Address: 0x252a7c, Func Offset: 0xfc
	// Line 183, Address: 0x252aa4, Func Offset: 0x124
	// Line 184, Address: 0x252ae4, Func Offset: 0x164
	// Line 185, Address: 0x252afc, Func Offset: 0x17c
	// Line 186, Address: 0x252b04, Func Offset: 0x184
	// Line 188, Address: 0x252b1c, Func Offset: 0x19c
	// Line 190, Address: 0x252b24, Func Offset: 0x1a4
	// Line 191, Address: 0x252b3c, Func Offset: 0x1bc
	// Line 192, Address: 0x252b54, Func Offset: 0x1d4
	// Line 193, Address: 0x252b5c, Func Offset: 0x1dc
	// Line 201, Address: 0x252b74, Func Offset: 0x1f4
	// Func End, Address: 0x252b8c, Func Offset: 0x20c
}

// 
// Start address: 0x252b90
float vcRetCirRadiusReduction(_VC_WORK* w_p)
{
	float rate;
	float z;
	float x;
	float ofs_ang_y;
	float cam2chr_xz_dist;
	float deflt_r;
	float real_r;
	// Line 210, Address: 0x252b90, Func Offset: 0
	// Line 218, Address: 0x252bb4, Func Offset: 0x24
	// Line 219, Address: 0x252bd8, Func Offset: 0x48
	// Line 220, Address: 0x252be8, Func Offset: 0x58
	// Line 225, Address: 0x252c0c, Func Offset: 0x7c
	// Line 229, Address: 0x252c30, Func Offset: 0xa0
	// Line 232, Address: 0x252c54, Func Offset: 0xc4
	// Line 236, Address: 0x252c78, Func Offset: 0xe8
	// Line 238, Address: 0x252c88, Func Offset: 0xf8
	// Line 243, Address: 0x252cb0, Func Offset: 0x120
	// Line 245, Address: 0x252cc0, Func Offset: 0x130
	// Line 246, Address: 0x252cc4, Func Offset: 0x134
	// Func End, Address: 0x252cec, Func Offset: 0x15c
}

// 
// Start address: 0x252cf0
void vcChangeProjByDist(_VC_NEAR_ROAD_DATA* near_rd_p, float mv_vec_y)
{
	// Line 255, Address: 0x252cf0, Func Offset: 0
	// Line 256, Address: 0x252cf8, Func Offset: 0x8
	// Line 261, Address: 0x252d28, Func Offset: 0x38
	// Line 265, Address: 0x252d68, Func Offset: 0x78
	// Line 267, Address: 0x252d7c, Func Offset: 0x8c
	// Func End, Address: 0x252d8c, Func Offset: 0x9c
}

