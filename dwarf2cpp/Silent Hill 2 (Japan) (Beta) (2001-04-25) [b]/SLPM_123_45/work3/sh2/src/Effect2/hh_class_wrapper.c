typedef struct shSkelton;
typedef struct _anon0;
typedef struct _VC_CAM_MV_PARAM;
typedef struct _VC_THROUGH_DOOR_CAM_PARAM;
typedef struct SubCharacter;
typedef struct _VC_LIMIT_AREA;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon1;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _VC_FIX_CAM_PARAM;
typedef struct _VC_WORK;
typedef struct _CL_VHIT_CHARA;
typedef struct _VC_ROAD_DATA;
typedef struct _VC_FIX_ANG_CAM_PARAM;
typedef struct _CL_VHIT_RESULT;
typedef union _anon2;
typedef struct _VC_LOCUS_CIRCLE_CAM_PARAM;
typedef struct _VC_ROAD_AREA;
typedef enum _VC_FLAGS : unsigned short;
typedef struct _anon3;
typedef union _anon4;
typedef struct HH_Class_Wrapper_Work;
typedef struct _VbWVSMATRIX;
typedef struct _anon5;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct _VC_NEAR_ROAD_DATA;
typedef struct shBattleArea;
typedef struct _VC_WATCH_MV_PARAM;
typedef struct shBattleInfo;

typedef void(*type_9)(SubCharacter*);
typedef void(*type_11)(SubCharacter*);

typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef float type_4[4];
typedef float type_5[4][4];
typedef float type_6[4];
typedef float type_7[4][4];
typedef _VC_NEAR_ROAD_DATA type_8[128];
typedef shAttackInfo type_10[46];
typedef unsigned char type_12[4];

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

struct _anon0
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

struct _VC_CAM_MV_PARAM
{
	float accel_xz;
	float accel_y;
	float max_spd_xz;
	float max_spd_y;
};

struct _VC_THROUGH_DOOR_CAM_PARAM
{
	int active_f;
	float timer;
	float rail_ang_y;
	float rail_sta_pos[4];
	float rail_sta_to_chara_dist;
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

struct _VC_LIMIT_AREA
{
	float min_hx;
	float max_hx;
	float min_hz;
	float max_hz;
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
	_anon1 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
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

struct _VC_FIX_CAM_PARAM
{
	float sta_base_ang_y;
	float end_base_ang_y;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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
	_anon4 tmp;
};

struct _VC_FIX_ANG_CAM_PARAM
{
	float ang_x;
	float ang_y;
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

struct _anon3
{
	float x;
	float y;
	float z;
	float w;
};

union _anon4
{
	_VC_FIX_CAM_PARAM stl;
	_VC_FIX_ANG_CAM_PARAM fix;
	_VC_LOCUS_CIRCLE_CAM_PARAM cir;
};

struct HH_Class_Wrapper_Work
{
	float ViewScreen_Volume_ClipMatrix[4][4];
	float AlwaysFront_WorldView_Matrix[4][4];
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

struct _anon5
{
	float d[4][4];
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

shAttackInfo sh2_attack_list[46];
HH_Class_Wrapper_Work* _pWork;
_VbWVSMATRIX VbWvsMatrix;
_anon0 cam0;
_VC_WORK vcWork;
HH_Class_Wrapper_Work _work;

unsigned int HH_ClassWrapper_RotTrans_PerspectiveProjection_Clip(int* Dst_iVector, float* pReverse_W, float LocalScreen_Matrix[4], float LocalScreen_ClipMatrix[4], float* Src_fVector);
void HH_ClassWrapper_Matrix_Group_Update();
void HH_ClassWrapper_ViewScreen_Volume_ClipMatrix_Create();
void HH_ClassWrapper_ViewScreen_Volume_ClipMatrix_Get(float ViewScreen_Volume_ClipMatrix[4]);
void HH_ClassWrapper_AlwaysFront_WorldView_Matrix_Create();
void HH_ClassWrapper_AlwaysFront_WorldView_Matrix_Get(float AlwaysFront_WorldView_Matrix[4]);
void HH_ClassWrapper_WorldViewMatrix_Get(float WorldView_Matrix[4]);
void HH_ClassWrapper_ViewScreenMatrix_Get(float ViewScreen_Matrix[4]);
void HH_ClassWrapper_WorldScreenMatrix_Get(float WorldScreen_Matrix[4]);
void HH_ClassWrapper_ViewDirection_Get(float* View_Direction);
void HH_ClassWrapper_LightDirection_Get(float* Light_Direction);

// 
// Start address: 0x24ab20
unsigned int HH_ClassWrapper_RotTrans_PerspectiveProjection_Clip(int* Dst_iVector, float* pReverse_W, float LocalScreen_Matrix[4], float LocalScreen_ClipMatrix[4], float* Src_fVector)
{
	unsigned int clip;
	float reverse_w;
	unsigned int result;
	// Line 109, Address: 0x24ab20, Func Offset: 0
	// Line 110, Address: 0x24ab24, Func Offset: 0x4
	// Line 114, Address: 0x24ab28, Func Offset: 0x8
	// Line 115, Address: 0x24ab2c, Func Offset: 0xc
	// Line 116, Address: 0x24ab30, Func Offset: 0x10
	// Line 117, Address: 0x24ab34, Func Offset: 0x14
	// Line 118, Address: 0x24ab38, Func Offset: 0x18
	// Line 119, Address: 0x24ab3c, Func Offset: 0x1c
	// Line 120, Address: 0x24ab40, Func Offset: 0x20
	// Line 121, Address: 0x24ab44, Func Offset: 0x24
	// Line 126, Address: 0x24ab48, Func Offset: 0x28
	// Line 127, Address: 0x24ab4c, Func Offset: 0x2c
	// Line 128, Address: 0x24ab50, Func Offset: 0x30
	// Line 129, Address: 0x24ab54, Func Offset: 0x34
	// Line 130, Address: 0x24ab58, Func Offset: 0x38
	// Line 131, Address: 0x24ab5c, Func Offset: 0x3c
	// Line 132, Address: 0x24ab60, Func Offset: 0x40
	// Line 133, Address: 0x24ab64, Func Offset: 0x44
	// Line 134, Address: 0x24ab68, Func Offset: 0x48
	// Line 135, Address: 0x24ab6c, Func Offset: 0x4c
	// Line 136, Address: 0x24ab70, Func Offset: 0x50
	// Line 137, Address: 0x24ab74, Func Offset: 0x54
	// Line 138, Address: 0x24ab78, Func Offset: 0x58
	// Line 139, Address: 0x24ab80, Func Offset: 0x60
	// Line 140, Address: 0x24ab84, Func Offset: 0x64
	// Line 141, Address: 0x24ab88, Func Offset: 0x68
	// Line 142, Address: 0x24ab8c, Func Offset: 0x6c
	// Line 143, Address: 0x24ab90, Func Offset: 0x70
	// Line 144, Address: 0x24ab94, Func Offset: 0x74
	// Line 145, Address: 0x24ab98, Func Offset: 0x78
	// Line 146, Address: 0x24ab9c, Func Offset: 0x7c
	// Line 147, Address: 0x24aba0, Func Offset: 0x80
	// Line 148, Address: 0x24aba4, Func Offset: 0x84
	// Line 149, Address: 0x24aba8, Func Offset: 0x88
	// Line 153, Address: 0x24abac, Func Offset: 0x8c
	// Line 154, Address: 0x24abcc, Func Offset: 0xac
	// Line 157, Address: 0x24abd0, Func Offset: 0xb0
	// Func End, Address: 0x24abd8, Func Offset: 0xb8
}

// 
// Start address: 0x24abe0
void HH_ClassWrapper_Matrix_Group_Update()
{
	// Line 169, Address: 0x24abe0, Func Offset: 0
	// Line 171, Address: 0x24abe8, Func Offset: 0x8
	// Line 174, Address: 0x24abf0, Func Offset: 0x10
	// Line 175, Address: 0x24abf8, Func Offset: 0x18
	// Func End, Address: 0x24ac08, Func Offset: 0x28
}

// 
// Start address: 0x24ac10
void HH_ClassWrapper_ViewScreen_Volume_ClipMatrix_Create()
{
	float z_far;
	float z_near;
	float y_range;
	float x_range;
	float vsm[4][4];
	float wvm[4][4];
	float clip_mat[4][4];
	// Line 190, Address: 0x24ac10, Func Offset: 0
	// Line 193, Address: 0x24ac1c, Func Offset: 0xc
	// Line 194, Address: 0x24ac2c, Func Offset: 0x1c
	// Line 195, Address: 0x24ac3c, Func Offset: 0x2c
	// Line 196, Address: 0x24ac50, Func Offset: 0x40
	// Line 198, Address: 0x24ac64, Func Offset: 0x54
	// Line 199, Address: 0x24ac70, Func Offset: 0x60
	// Line 202, Address: 0x24ac7c, Func Offset: 0x6c
	// Line 203, Address: 0x24ac88, Func Offset: 0x78
	// Line 204, Address: 0x24ac98, Func Offset: 0x88
	// Line 205, Address: 0x24aca8, Func Offset: 0x98
	// Line 206, Address: 0x24acc8, Func Offset: 0xb8
	// Line 207, Address: 0x24acd8, Func Offset: 0xc8
	// Line 208, Address: 0x24ad08, Func Offset: 0xf8
	// Line 209, Address: 0x24ad14, Func Offset: 0x104
	// Line 223, Address: 0x24ad30, Func Offset: 0x120
	// Func End, Address: 0x24ad44, Func Offset: 0x134
}

// 
// Start address: 0x24ad50
void HH_ClassWrapper_ViewScreen_Volume_ClipMatrix_Get(float ViewScreen_Volume_ClipMatrix[4])
{
	// Line 236, Address: 0x24ad50, Func Offset: 0
	// Line 237, Address: 0x24ad60, Func Offset: 0x10
	// Line 249, Address: 0x24ad78, Func Offset: 0x28
	// Func End, Address: 0x24ad8c, Func Offset: 0x3c
}

// 
// Start address: 0x24ad90
void HH_ClassWrapper_AlwaysFront_WorldView_Matrix_Create()
{
	float inv_wvm[4][4];
	float wvm[4][4];
	// Line 261, Address: 0x24ad90, Func Offset: 0
	// Line 264, Address: 0x24ad9c, Func Offset: 0xc
	// Line 266, Address: 0x24ada8, Func Offset: 0x18
	// Line 267, Address: 0x24adb4, Func Offset: 0x24
	// Line 268, Address: 0x24adc0, Func Offset: 0x30
	// Line 269, Address: 0x24adcc, Func Offset: 0x3c
	// Line 270, Address: 0x24addc, Func Offset: 0x4c
	// Line 271, Address: 0x24adf8, Func Offset: 0x68
	// Func End, Address: 0x24ae0c, Func Offset: 0x7c
}

// 
// Start address: 0x24ae10
void HH_ClassWrapper_AlwaysFront_WorldView_Matrix_Get(float AlwaysFront_WorldView_Matrix[4])
{
	// Line 282, Address: 0x24ae10, Func Offset: 0
	// Line 283, Address: 0x24ae20, Func Offset: 0x10
	// Line 284, Address: 0x24ae3c, Func Offset: 0x2c
	// Func End, Address: 0x24ae50, Func Offset: 0x40
}

// 
// Start address: 0x24ae50
void HH_ClassWrapper_WorldViewMatrix_Get(float WorldView_Matrix[4])
{
	// Line 294, Address: 0x24ae50, Func Offset: 0
	// Line 295, Address: 0x24ae5c, Func Offset: 0xc
	// Line 296, Address: 0x24ae70, Func Offset: 0x20
	// Func End, Address: 0x24ae80, Func Offset: 0x30
}

// 
// Start address: 0x24ae80
void HH_ClassWrapper_ViewScreenMatrix_Get(float ViewScreen_Matrix[4])
{
	// Line 306, Address: 0x24ae80, Func Offset: 0
	// Line 307, Address: 0x24ae8c, Func Offset: 0xc
	// Line 308, Address: 0x24aea0, Func Offset: 0x20
	// Func End, Address: 0x24aeb0, Func Offset: 0x30
}

// 
// Start address: 0x24aeb0
void HH_ClassWrapper_WorldScreenMatrix_Get(float WorldScreen_Matrix[4])
{
	// Line 318, Address: 0x24aeb0, Func Offset: 0
	// Line 319, Address: 0x24aebc, Func Offset: 0xc
	// Line 320, Address: 0x24aed0, Func Offset: 0x20
	// Func End, Address: 0x24aee0, Func Offset: 0x30
}

// 
// Start address: 0x24aee0
void HH_ClassWrapper_ViewDirection_Get(float* View_Direction)
{
	// Line 342, Address: 0x24aee0, Func Offset: 0
	// Line 343, Address: 0x24aeec, Func Offset: 0xc
	// Line 344, Address: 0x24aef8, Func Offset: 0x18
	// Func End, Address: 0x24af08, Func Offset: 0x28
}

// 
// Start address: 0x24af10
void HH_ClassWrapper_LightDirection_Get(float* Light_Direction)
{
	float tmp[4];
	// Line 366, Address: 0x24af10, Func Offset: 0
	// Line 369, Address: 0x24af1c, Func Offset: 0xc
	// Line 370, Address: 0x24af2c, Func Offset: 0x1c
	// Func End, Address: 0x24af3c, Func Offset: 0x2c
}

