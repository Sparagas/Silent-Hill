typedef union _anon0;
typedef union _anon1;
typedef struct _VC_WATCH_MV_PARAM;
typedef struct _VC_CAM_MV_PARAM;
typedef struct _VC_NEAR_ROAD_DATA;
typedef struct _VC_LIMIT_AREA;
typedef struct _VC_ROAD_DATA;
typedef struct _VC_CHASE_CAM_PARAM;
typedef struct _VC_SETTLE_CAM_PARAM;
typedef struct shBattleFight;
typedef struct _VC_CIR_CAM_MANAGER;
typedef struct shBattleShot;
typedef struct _VC_FIX_ANG_CAM_PARAM;
typedef struct _VC_LOCUS_CIRCLE_CAM_PARAM;
typedef struct _VC_ROAD_AREA;
typedef struct shAttackInfo;


typedef int type_0[9];
typedef unsigned char type_1[16];
typedef float type_2[4];
typedef float type_3[4];
typedef float type_4[4];
typedef shAttackInfo type_5[66];
typedef float type_6[4];
typedef float type_7[4][4];
typedef float type_8[4];
typedef float type_9[4];
typedef float type_10[4];
typedef float type_11[4];
typedef float type_12[4];
typedef int type_13[5];
typedef float type_14[4];

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

union _anon1
{
	unsigned char data[16];
	_VC_CHASE_CAM_PARAM chs;
	_VC_SETTLE_CAM_PARAM stl;
	_VC_FIX_ANG_CAM_PARAM fix;
	_VC_LOCUS_CIRCLE_CAM_PARAM cir;
};

struct _VC_WATCH_MV_PARAM
{
	float ang_accel_x;
	float ang_accel_y;
	float max_ang_spd_x;
	float max_ang_spd_y;
};

struct _VC_CAM_MV_PARAM
{
	float accel_xz;
	float accel_y;
	float max_spd_xz;
	float max_spd_y;
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
	_anon1 tmp;
};

struct _VC_CHASE_CAM_PARAM
{
	float ofs_hy;
	float ratio_r_xz;
	float lr_lim_ang_y;
	float rr_lim_ang_y;
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

float vcRetNearRatioSwitchAreaInXZPos(float* chr_pos, float* cam_tgt_pos);
float vcRetNearRatioSwitchAreaForCircleCam(float* chr_pos);
void vcTransRotRoadArea(float* v0, float m[4], float* v1);
void vcRotTransRoadArea(float* v0, float m[4], float* v1);
float vcGetMinInRoadDist();
void vcConvertCamFile(_VC_ROAD_DATA* road_ary);

// 
// Start address: 0x1a67f0
float vcRetNearRatioSwitchAreaInXZPos(float* chr_pos, float* cam_tgt_pos)
{
	float ppos[4];
	float ofs_ang_y;
	float near_ratio;
	_VC_NEAR_ROAD_DATA cur_near_road;
	// Line 30, Address: 0x1a67f0, Func Offset: 0
	// Line 662, Address: 0x1a6808, Func Offset: 0x18
	// Line 31, Address: 0x1a682c, Func Offset: 0x3c
	// Line 662, Address: 0x1a6830, Func Offset: 0x40
	// Line 35, Address: 0x1a6838, Func Offset: 0x48
	// Line 662, Address: 0x1a683c, Func Offset: 0x4c
	// Line 35, Address: 0x1a6844, Func Offset: 0x54
	// Line 662, Address: 0x1a6848, Func Offset: 0x58
	// Line 35, Address: 0x1a6850, Func Offset: 0x60
	// Line 662, Address: 0x1a6854, Func Offset: 0x64
	// Line 35, Address: 0x1a685c, Func Offset: 0x6c
	// Line 662, Address: 0x1a6860, Func Offset: 0x70
	// Line 40, Address: 0x1a6868, Func Offset: 0x78
	// Line 662, Address: 0x1a686c, Func Offset: 0x7c
	// Line 42, Address: 0x1a6878, Func Offset: 0x88
	// Line 662, Address: 0x1a687c, Func Offset: 0x8c
	// Line 42, Address: 0x1a688c, Func Offset: 0x9c
	// Line 44, Address: 0x1a6894, Func Offset: 0xa4
	// Line 662, Address: 0x1a68a0, Func Offset: 0xb0
	// Line 44, Address: 0x1a68a8, Func Offset: 0xb8
	// Line 662, Address: 0x1a68c0, Func Offset: 0xd0
	// Line 45, Address: 0x1a68d0, Func Offset: 0xe0
	// Line 662, Address: 0x1a68d4, Func Offset: 0xe4
	// Line 45, Address: 0x1a68d8, Func Offset: 0xe8
	// Line 48, Address: 0x1a68ec, Func Offset: 0xfc
	// Line 662, Address: 0x1a68f4, Func Offset: 0x104
	// Line 49, Address: 0x1a68fc, Func Offset: 0x10c
	// Line 662, Address: 0x1a6900, Func Offset: 0x110
	// Line 49, Address: 0x1a6904, Func Offset: 0x114
	// Line 53, Address: 0x1a6918, Func Offset: 0x128
	// Line 55, Address: 0x1a6920, Func Offset: 0x130
	// Line 662, Address: 0x1a6938, Func Offset: 0x148
	// Line 55, Address: 0x1a6940, Func Offset: 0x150
	// Line 662, Address: 0x1a6958, Func Offset: 0x168
	// Line 56, Address: 0x1a6968, Func Offset: 0x178
	// Line 662, Address: 0x1a696c, Func Offset: 0x17c
	// Line 56, Address: 0x1a6970, Func Offset: 0x180
	// Line 59, Address: 0x1a6984, Func Offset: 0x194
	// Line 662, Address: 0x1a698c, Func Offset: 0x19c
	// Line 60, Address: 0x1a6994, Func Offset: 0x1a4
	// Line 662, Address: 0x1a6998, Func Offset: 0x1a8
	// Line 60, Address: 0x1a699c, Func Offset: 0x1ac
	// Line 67, Address: 0x1a69a4, Func Offset: 0x1b4
	// Line 662, Address: 0x1a69a8, Func Offset: 0x1b8
	// Func End, Address: 0x1a69c4, Func Offset: 0x1d4
}

// 
// Start address: 0x1a69d0
float vcRetNearRatioSwitchAreaForCircleCam(float* chr_pos)
{
	float ppos[4];
	float ofs_ang_y;
	float near_ratio;
	_VC_CIR_CAM_MANAGER cir_man;
	_VC_NEAR_ROAD_DATA cur_near_road;
	// Line 80, Address: 0x1a69d0, Func Offset: 0
	// Line 67, Address: 0x1a69e8, Func Offset: 0x18
	// Line 80, Address: 0x1a69ec, Func Offset: 0x1c
	// Line 67, Address: 0x1a69f0, Func Offset: 0x20
	// Line 80, Address: 0x1a69f8, Func Offset: 0x28
	// Line 67, Address: 0x1a69fc, Func Offset: 0x2c
	// Line 80, Address: 0x1a6a00, Func Offset: 0x30
	// Line 85, Address: 0x1a6a1c, Func Offset: 0x4c
	// Line 93, Address: 0x1a6a4c, Func Offset: 0x7c
	// Line 95, Address: 0x1a6a60, Func Offset: 0x90
	// Line 99, Address: 0x1a6ae0, Func Offset: 0x110
	// Line 101, Address: 0x1a6b00, Func Offset: 0x130
	// Line 102, Address: 0x1a6b08, Func Offset: 0x138
	// Line 108, Address: 0x1a6b20, Func Offset: 0x150
	// Func End, Address: 0x1a6b38, Func Offset: 0x168
}

// 
// Start address: 0x1a6b40
void vcTransRotRoadArea(float* v0, float m[4], float* v1)
{
	// Line 127, Address: 0x1a6b40, Func Offset: 0
	// Line 128, Address: 0x1a6b48, Func Offset: 0x8
	// Line 129, Address: 0x1a6b5c, Func Offset: 0x1c
	// Line 131, Address: 0x1a6b68, Func Offset: 0x28
	// Func End, Address: 0x1a6b78, Func Offset: 0x38
}

// 
// Start address: 0x1a6b80
void vcRotTransRoadArea(float* v0, float m[4], float* v1)
{
	// Line 150, Address: 0x1a6b80, Func Offset: 0
	// Line 152, Address: 0x1a6b98, Func Offset: 0x18
	// Line 153, Address: 0x1a6ba0, Func Offset: 0x20
	// Line 154, Address: 0x1a6bb4, Func Offset: 0x34
	// Func End, Address: 0x1a6bcc, Func Offset: 0x4c
}

// 
// Start address: 0x1a6bd0
float vcGetMinInRoadDist()
{
	// Line 162, Address: 0x1a6bd0, Func Offset: 0
	// Line 163, Address: 0x1a6bd8, Func Offset: 0x8
	// Line 165, Address: 0x1a6c04, Func Offset: 0x34
	// Func End, Address: 0x1a6c14, Func Offset: 0x44
}

// 
// Start address: 0x1a6c20
void vcConvertCamFile(_VC_ROAD_DATA* road_ary)
{
	_VC_ROAD_DATA* rd_p;
	// Line 179, Address: 0x1a6c20, Func Offset: 0
	// Line 181, Address: 0x1a6c28, Func Offset: 0x8
	// Line 182, Address: 0x1a6c34, Func Offset: 0x14
	// Line 185, Address: 0x1a6c40, Func Offset: 0x20
	// Line 186, Address: 0x1a6c64, Func Offset: 0x44
	// Line 187, Address: 0x1a6c74, Func Offset: 0x54
	// Line 188, Address: 0x1a6c90, Func Offset: 0x70
	// Line 189, Address: 0x1a6ca4, Func Offset: 0x84
	// Line 190, Address: 0x1a6cc0, Func Offset: 0xa0
	// Line 193, Address: 0x1a6cc8, Func Offset: 0xa8
	// Line 194, Address: 0x1a6ce4, Func Offset: 0xc4
	// Line 195, Address: 0x1a6cf4, Func Offset: 0xd4
	// Line 196, Address: 0x1a6d14, Func Offset: 0xf4
	// Line 199, Address: 0x1a6d20, Func Offset: 0x100
	// Line 200, Address: 0x1a6d44, Func Offset: 0x124
	// Line 201, Address: 0x1a6d54, Func Offset: 0x134
	// Line 202, Address: 0x1a6d70, Func Offset: 0x150
	// Line 203, Address: 0x1a6d80, Func Offset: 0x160
	// Line 204, Address: 0x1a6d9c, Func Offset: 0x17c
	// Line 206, Address: 0x1a6da8, Func Offset: 0x188
	// Line 208, Address: 0x1a6dc8, Func Offset: 0x1a8
	// Line 209, Address: 0x1a6dec, Func Offset: 0x1cc
	// Line 210, Address: 0x1a6df8, Func Offset: 0x1d8
	// Line 211, Address: 0x1a6e1c, Func Offset: 0x1fc
	// Line 212, Address: 0x1a6e24, Func Offset: 0x204
	// Line 214, Address: 0x1a6e2c, Func Offset: 0x20c
	// Line 215, Address: 0x1a6e50, Func Offset: 0x230
	// Line 217, Address: 0x1a6e5c, Func Offset: 0x23c
	// Line 219, Address: 0x1a6e60, Func Offset: 0x240
	// Line 220, Address: 0x1a6e78, Func Offset: 0x258
	// Func End, Address: 0x1a6e80, Func Offset: 0x260
}

