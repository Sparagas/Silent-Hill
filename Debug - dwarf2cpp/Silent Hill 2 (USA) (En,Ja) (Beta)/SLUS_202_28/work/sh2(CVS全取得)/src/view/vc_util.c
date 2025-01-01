typedef struct _VC_WORK;
typedef struct _VC_ROAD_DATA;
typedef struct _CL_VHIT_WALL;
typedef struct _KANRI;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct SubCharacter;
typedef struct _anon0;
typedef struct _SYS_W;
typedef struct _VC_CAMERA_INTINFO;
typedef union _anon1;
typedef struct _CL_VHIT_RESULT;
typedef union _anon2;
typedef union _anon3;
typedef struct _SH2_SYS;
typedef struct _VC_WATCH_MV_PARAM;
typedef struct _anon4;
typedef struct shSkelton;
typedef struct _VC_CAM_MV_PARAM;
typedef struct _anon5;
typedef struct _VC_NEAR_ROAD_DATA;
typedef struct _VC_LIMIT_AREA;
typedef enum _VC_FLAGS : unsigned short;
typedef struct _VC_PRE_INFO;
typedef struct _VbCOORDINATE;
typedef struct _AnimeInfo;
typedef struct _VC_CHASE_CAM_PARAM;
typedef struct _VC_FIX_CAM_MANAGER;
typedef struct _VC_SETTLE_CAM_PARAM;
typedef struct shBattleFight;
typedef struct _VC_CIR_CAM_MANAGER;
typedef struct _VC_FIX_ANG_CAM_PARAM;
typedef struct shBattleShot;
typedef struct _VC_THROUGH_DOOR_CAM_PARAM;
typedef struct shBattleArea;
typedef struct _VC_LOCUS_CIRCLE_CAM_PARAM;
typedef struct shBattleInfo;
typedef struct _VC_ROAD_AREA;

typedef void(*type_18)(SubCharacter*);
typedef void(*type_19)(SubCharacter*);

typedef unsigned char type_0[97];
typedef _AnimeInfo type_1[11];
typedef _AnimeInfo type_2[30];
typedef float type_3[4];
typedef unsigned char type_4[16];
typedef float type_5[4];
typedef _AnimeInfo type_6[17];
typedef float type_7[4][4];
typedef unsigned int type_8[8];
typedef unsigned char type_9[14];
typedef float type_10[4];
typedef float type_11[4][4];
typedef _AnimeInfo type_12[34];
typedef unsigned char type_13[20];
typedef shAttackInfo type_14[66];
typedef _AnimeInfo type_15[17];
typedef _AnimeInfo type_16[17];
typedef float type_17[4];
typedef unsigned char type_20[4];
typedef _AnimeInfo type_21[33];
typedef _VC_NEAR_ROAD_DATA type_22[128];
typedef unsigned char type_23[14];
typedef unsigned char type_24[69];
typedef _AnimeInfo type_25[24];
typedef _AnimeInfo type_26[5];
typedef _AnimeInfo type_27[33];

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
	_anon4 mat;
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

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

struct _SYS_W
{
	float cam_ang_y;
	float cam_ang_z;
	float cam_r_xz;
	float cam_y;
	_KANRI hero;
};

struct _VC_CAMERA_INTINFO
{
	int mode;
	int mv_smooth;
	float ev_cam_rate;
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

union _anon3
{
	unsigned char data[16];
	_VC_CHASE_CAM_PARAM chs;
	_VC_SETTLE_CAM_PARAM stl;
	_VC_FIX_ANG_CAM_PARAM fix;
	_VC_LOCUS_CIRCLE_CAM_PARAM cir;
};

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct _VC_WATCH_MV_PARAM
{
	float ang_accel_x;
	float ang_accel_y;
	float max_ang_spd_x;
	float max_ang_spd_y;
};

struct _anon4
{
	float d[4][4];
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon4 src_m;
	_anon0 src_t;
	_anon4 des_m;
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

struct _VC_CAM_MV_PARAM
{
	float accel_xz;
	float accel_y;
	float max_spd_xz;
	float max_spd_y;
};

struct _anon5
{
	short vx;
	short vy;
	short vz;
	short pad;
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

struct _VC_PRE_INFO
{
	float hero_neck_wm[4][4];
	float hero_neck_lm[4][4];
	float hero_neck_lwm[4][4];
	float hero_head_ang_x;
	float hero_head_ang_y;
	float hero_eye_y;
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
_SYS_W sys;
_VC_WORK vcWork;
_VC_CAMERA_INTINFO vcCameraInternalInfo;
_SH2_SYS Sh2sys;
_VC_PRE_INFO vcPreInfo;
float vcRefPosSt[4];

void vcInitCamera(_VC_ROAD_DATA** roadarray_list);
void vcSetCameraUseWarp(float* chr_pos, float chr_ang_y);
int vcRetCamMvSmoothF();
void vcMoveAndSetCamera(int in_connect_f, int for_f, int back_f, int right_f, int left_f, int up_f, int down_f);
void vcMakeHeroHeadPos(float* head_pos);
void vcAddOfsToPos(float* out_pos, float* in_pos, float ofs_xz_r, float ang_y, float ofs_y);
void vcSetRefPosAndSysRef2CamParam(float* ref_pos, _SYS_W* sys_p, int for_f, int back_f, int right_f, int left_f, int up_f, int down_f);
void vcSetRefPosAndCamPosAngByPad();

// 
// Start address: 0x19dd90
void vcInitCamera(_VC_ROAD_DATA** roadarray_list)
{
	// Line 63, Address: 0x19dd90, Func Offset: 0
	// Line 65, Address: 0x19dda0, Func Offset: 0x10
	// Line 66, Address: 0x19dda8, Func Offset: 0x18
	// Line 67, Address: 0x19ddb0, Func Offset: 0x20
	// Line 70, Address: 0x19ddb8, Func Offset: 0x28
	// Line 72, Address: 0x19ddc0, Func Offset: 0x30
	// Line 74, Address: 0x19ddd8, Func Offset: 0x48
	// Line 76, Address: 0x19dde0, Func Offset: 0x50
	// Line 80, Address: 0x19ddec, Func Offset: 0x5c
	// Line 81, Address: 0x19ddf4, Func Offset: 0x64
	// Line 83, Address: 0x19de04, Func Offset: 0x74
	// Line 87, Address: 0x19de18, Func Offset: 0x88
	// Line 88, Address: 0x19de20, Func Offset: 0x90
	// Line 89, Address: 0x19de30, Func Offset: 0xa0
	// Line 90, Address: 0x19de38, Func Offset: 0xa8
	// Func End, Address: 0x19de4c, Func Offset: 0xbc
}

// 
// Start address: 0x19de50
void vcSetCameraUseWarp(float* chr_pos, float chr_ang_y)
{
	float cam_ang[4];
	float cam_pos[4];
	// Line 108, Address: 0x19de50, Func Offset: 0
	// Line 113, Address: 0x19de68, Func Offset: 0x18
	// Line 114, Address: 0x19de70, Func Offset: 0x20
	// Line 117, Address: 0x19de74, Func Offset: 0x24
	// Line 118, Address: 0x19de9c, Func Offset: 0x4c
	// Line 119, Address: 0x19deb4, Func Offset: 0x64
	// Line 120, Address: 0x19dee0, Func Offset: 0x90
	// Line 123, Address: 0x19dee8, Func Offset: 0x98
	// Line 124, Address: 0x19df08, Func Offset: 0xb8
	// Line 125, Address: 0x19df20, Func Offset: 0xd0
	// Func End, Address: 0x19df38, Func Offset: 0xe8
}

// 
// Start address: 0x19df40
int vcRetCamMvSmoothF()
{
	// Line 143, Address: 0x19df40, Func Offset: 0
	// Line 144, Address: 0x19df48, Func Offset: 0x8
	// Func End, Address: 0x19df50, Func Offset: 0x10
}

// 
// Start address: 0x19df50
void vcMoveAndSetCamera(int in_connect_f, int for_f, int back_f, int right_f, int left_f, int up_f, int down_f)
{
	float rpos[4];
	_VbCOORDINATE vbcoord;
	float grnd_y;
	float hero_top_y;
	float hero_bottom_y;
	float hr_head_pos[4];
	_KANRI* hr_p;
	float first_cam_pos[4];
	// Line 211, Address: 0x19df50, Func Offset: 0
	// Line 244, Address: 0x19df94, Func Offset: 0x44
	// Line 257, Address: 0x19df9c, Func Offset: 0x4c
	// Line 262, Address: 0x19dfd0, Func Offset: 0x80
	// Line 264, Address: 0x19dfd8, Func Offset: 0x88
	// Line 265, Address: 0x19dff4, Func Offset: 0xa4
	// Line 266, Address: 0x19e000, Func Offset: 0xb0
	// Line 267, Address: 0x19e00c, Func Offset: 0xbc
	// Line 268, Address: 0x19e014, Func Offset: 0xc4
	// Line 279, Address: 0x19e02c, Func Offset: 0xdc
	// Line 281, Address: 0x19e034, Func Offset: 0xe4
	// Line 282, Address: 0x19e03c, Func Offset: 0xec
	// Line 283, Address: 0x19e044, Func Offset: 0xf4
	// Line 284, Address: 0x19e060, Func Offset: 0x110
	// Line 285, Address: 0x19e068, Func Offset: 0x118
	// Line 286, Address: 0x19e070, Func Offset: 0x120
	// Line 288, Address: 0x19e078, Func Offset: 0x128
	// Line 289, Address: 0x19e080, Func Offset: 0x130
	// Line 291, Address: 0x19e084, Func Offset: 0x134
	// Line 294, Address: 0x19e090, Func Offset: 0x140
	// Line 295, Address: 0x19e0a8, Func Offset: 0x158
	// Line 298, Address: 0x19e0c0, Func Offset: 0x170
	// Line 299, Address: 0x19e0d8, Func Offset: 0x188
	// Line 301, Address: 0x19e0f4, Func Offset: 0x1a4
	// Line 305, Address: 0x19e108, Func Offset: 0x1b8
	// Line 317, Address: 0x19e144, Func Offset: 0x1f4
	// Line 319, Address: 0x19e154, Func Offset: 0x204
	// Line 322, Address: 0x19e15c, Func Offset: 0x20c
	// Line 326, Address: 0x19e18c, Func Offset: 0x23c
	// Line 330, Address: 0x19e1c0, Func Offset: 0x270
	// Line 333, Address: 0x19e1c8, Func Offset: 0x278
	// Line 334, Address: 0x19e1e0, Func Offset: 0x290
	// Line 336, Address: 0x19e1e8, Func Offset: 0x298
	// Line 354, Address: 0x19e218, Func Offset: 0x2c8
	// Line 355, Address: 0x19e244, Func Offset: 0x2f4
	// Line 356, Address: 0x19e270, Func Offset: 0x320
	// Line 358, Address: 0x19e29c, Func Offset: 0x34c
	// Line 360, Address: 0x19e2a4, Func Offset: 0x354
	// Line 362, Address: 0x19e2ac, Func Offset: 0x35c
	// Line 365, Address: 0x19e2b4, Func Offset: 0x364
	// Line 373, Address: 0x19e2dc, Func Offset: 0x38c
	// Line 412, Address: 0x19e2e4, Func Offset: 0x394
	// Func End, Address: 0x19e314, Func Offset: 0x3c4
}

// 
// Start address: 0x19e320
void vcMakeHeroHeadPos(float* head_pos)
{
	float fpos[4];
	float neck_lwm[4][4];
	// Line 429, Address: 0x19e320, Func Offset: 0
	// Line 435, Address: 0x19e330, Func Offset: 0x10
	// Line 437, Address: 0x19e35c, Func Offset: 0x3c
	// Line 438, Address: 0x19e364, Func Offset: 0x44
	// Line 439, Address: 0x19e36c, Func Offset: 0x4c
	// Line 443, Address: 0x19e378, Func Offset: 0x58
	// Line 444, Address: 0x19e390, Func Offset: 0x70
	// Line 445, Address: 0x19e3a8, Func Offset: 0x88
	// Line 446, Address: 0x19e3b0, Func Offset: 0x90
	// Func End, Address: 0x19e3c4, Func Offset: 0xa4
}

// 
// Start address: 0x19e3d0
void vcAddOfsToPos(float* out_pos, float* in_pos, float ofs_xz_r, float ang_y, float ofs_y)
{
	// Line 468, Address: 0x19e3d0, Func Offset: 0
	// Line 469, Address: 0x19e400, Func Offset: 0x30
	// Line 470, Address: 0x19e41c, Func Offset: 0x4c
	// Line 471, Address: 0x19e438, Func Offset: 0x68
	// Line 472, Address: 0x19e444, Func Offset: 0x74
	// Func End, Address: 0x19e468, Func Offset: 0x98
}

// 
// Start address: 0x19e470
void vcSetRefPosAndSysRef2CamParam(float* ref_pos, _SYS_W* sys_p, int for_f, int back_f, int right_f, int left_f, int up_f, int down_f)
{
	// Line 497, Address: 0x19e470, Func Offset: 0
	// Line 504, Address: 0x19e488, Func Offset: 0x18
	// Line 505, Address: 0x19e4a8, Func Offset: 0x38
	// Line 506, Address: 0x19e4c8, Func Offset: 0x58
	// Line 507, Address: 0x19e4ec, Func Offset: 0x7c
	// Line 508, Address: 0x19e510, Func Offset: 0xa0
	// Line 509, Address: 0x19e530, Func Offset: 0xc0
	// Line 511, Address: 0x19e550, Func Offset: 0xe0
	// Line 513, Address: 0x19e560, Func Offset: 0xf0
	// Line 516, Address: 0x19e584, Func Offset: 0x114
	// Line 519, Address: 0x19e5b0, Func Offset: 0x140
	// Func End, Address: 0x19e5c8, Func Offset: 0x158
}

// 
// Start address: 0x19e5d0
void vcSetRefPosAndCamPosAngByPad()
{
	float cam_pos[4];
	float cam_ang[4];
	// Line 539, Address: 0x19e5d0, Func Offset: 0
	// Line 543, Address: 0x19e5d8, Func Offset: 0x8
	// Line 544, Address: 0x19e5e4, Func Offset: 0x14
	// Line 546, Address: 0x19e618, Func Offset: 0x48
	// Line 623, Address: 0x19e624, Func Offset: 0x54
	// Func End, Address: 0x19e634, Func Offset: 0x64
}

