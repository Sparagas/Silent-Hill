typedef struct SubCharacter;
typedef struct shBattleFight;
typedef struct _VC_CIR_CAM_MANAGER;
typedef struct _VC_FIX_ANG_CAM_PARAM;
typedef struct shBattleShot;
typedef struct _VC_THROUGH_DOOR_CAM_PARAM;
typedef struct _VC_LOCUS_CIRCLE_CAM_PARAM;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _VC_ROAD_AREA;
typedef struct _anon0;
typedef struct _VC_WORK;
typedef struct _VC_ROAD_DATA;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct _anon1;
typedef union _anon2;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;
typedef union _anon4;
typedef struct shSkelton;
typedef struct _VC_WATCH_MV_PARAM;
typedef struct _VC_CAM_MV_PARAM;
typedef struct loadBgCAM_Ctrl;
typedef enum _VC_FLAGS : unsigned short;
typedef struct _VC_NEAR_ROAD_DATA;
typedef struct _VC_LIMIT_AREA;
typedef struct _VC_CHASE_CAM_PARAM;
typedef struct _VC_FIX_CAM_MANAGER;
typedef struct _VC_SETTLE_CAM_PARAM;

typedef void(*type_7)(SubCharacter*);
typedef void(*type_11)(SubCharacter*);

typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4][4];
typedef float type_3[4];
typedef float type_4[4][4];
typedef unsigned char type_5[16];
typedef shAttackInfo type_6[66];
typedef int type_8[17];
typedef void* type_9[17];
typedef int type_10[17];
typedef float type_12[4];
typedef void* type_13[18];
typedef unsigned char type_14[4];
typedef _VC_NEAR_ROAD_DATA type_15[128];

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
	_anon1 mat;
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

struct _VC_LOCUS_CIRCLE_CAM_PARAM
{
	float origin_x;
	float origin_z;
	float ang_y;
	float radius;
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

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
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
	_anon4 tmp;
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
	_anon2 hit_check;
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

struct _anon1
{
	float d[4][4];
};

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon3 hobj;
};

union _anon3
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

union _anon4
{
	unsigned char data[16];
	_VC_CHASE_CAM_PARAM chs;
	_VC_SETTLE_CAM_PARAM stl;
	_VC_FIX_ANG_CAM_PARAM fix;
	_VC_LOCUS_CIRCLE_CAM_PARAM cir;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon1 src_m;
	_anon0 src_t;
	_anon1 des_m;
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

struct loadBgCAM_Ctrl
{
	int mapid[17];
	void* addr[17];
	int size[17];
	void* list[18];
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

shAttackInfo sh2_attack_list[66];
loadBgCAM_Ctrl lbCAM_Ctrl;
_VC_WORK vcWork;

int _loadBgCAM_Delete(int slot);
int _loadBgCAM_Regist(int slot, int mapid, void* addr, int size);
int _loadBgCAM_Replace(int slot, int mapid, void* addr, int size);
int loadBgCAM_ReplaceG(int mapid, void* addr, int size);
int loadBgCAM_Replace(int slot, int mapid, void* addr, int size);
void** loadBgCAM_GetLoadedDataAddrList();
void loadBgCAM_vcReset();

// 
// Start address: 0x271a80
int _loadBgCAM_Delete(int slot)
{
	void* addr;
	// Line 25, Address: 0x271a80, Func Offset: 0
	// Line 27, Address: 0x271a88, Func Offset: 0x8
	// Line 28, Address: 0x271ac4, Func Offset: 0x44
	// Line 29, Address: 0x271ad8, Func Offset: 0x58
	// Line 30, Address: 0x271ae8, Func Offset: 0x68
	// Line 31, Address: 0x271aec, Func Offset: 0x6c
	// Line 32, Address: 0x271afc, Func Offset: 0x7c
	// Line 33, Address: 0x271b04, Func Offset: 0x84
	// Line 35, Address: 0x271b10, Func Offset: 0x90
	// Line 36, Address: 0x271b18, Func Offset: 0x98
	// Line 38, Address: 0x271b1c, Func Offset: 0x9c
	// Func End, Address: 0x271b2c, Func Offset: 0xac
}

// 
// Start address: 0x271b30
int _loadBgCAM_Regist(int slot, int mapid, void* addr, int size)
{
	// Line 41, Address: 0x271b30, Func Offset: 0
	// Line 42, Address: 0x271b38, Func Offset: 0x8
	// Line 43, Address: 0x271b74, Func Offset: 0x44
	// Line 47, Address: 0x271bc0, Func Offset: 0x90
	// Line 49, Address: 0x271bcc, Func Offset: 0x9c
	// Line 50, Address: 0x271bd0, Func Offset: 0xa0
	// Line 51, Address: 0x271be0, Func Offset: 0xb0
	// Line 52, Address: 0x271bf0, Func Offset: 0xc0
	// Line 53, Address: 0x271bf8, Func Offset: 0xc8
	// Line 54, Address: 0x271c04, Func Offset: 0xd4
	// Line 56, Address: 0x271c0c, Func Offset: 0xdc
	// Line 58, Address: 0x271c10, Func Offset: 0xe0
	// Func End, Address: 0x271c20, Func Offset: 0xf0
}

// 
// Start address: 0x271c20
int _loadBgCAM_Replace(int slot, int mapid, void* addr, int size)
{
	int ret;
	// Line 95, Address: 0x271c20, Func Offset: 0
	// Line 96, Address: 0x271c4c, Func Offset: 0x2c
	// Line 97, Address: 0x271c50, Func Offset: 0x30
	// Line 101, Address: 0x271c9c, Func Offset: 0x7c
	// Line 103, Address: 0x271cb4, Func Offset: 0x94
	// Line 104, Address: 0x271ccc, Func Offset: 0xac
	// Line 106, Address: 0x271cf0, Func Offset: 0xd0
	// Line 107, Address: 0x271cf4, Func Offset: 0xd4
	// Func End, Address: 0x271d18, Func Offset: 0xf8
}

// 
// Start address: 0x271d20
int loadBgCAM_ReplaceG(int mapid, void* addr, int size)
{
	int ret;
	// Line 110, Address: 0x271d20, Func Offset: 0
	// Line 112, Address: 0x271d44, Func Offset: 0x24
	// Line 113, Address: 0x271d60, Func Offset: 0x40
	// Line 115, Address: 0x271d8c, Func Offset: 0x6c
	// Line 116, Address: 0x271d9c, Func Offset: 0x7c
	// Line 118, Address: 0x271da4, Func Offset: 0x84
	// Line 119, Address: 0x271dc4, Func Offset: 0xa4
	// Line 121, Address: 0x271dcc, Func Offset: 0xac
	// Line 124, Address: 0x271dec, Func Offset: 0xcc
	// Line 125, Address: 0x271df0, Func Offset: 0xd0
	// Func End, Address: 0x271e10, Func Offset: 0xf0
}

// 
// Start address: 0x271e10
int loadBgCAM_Replace(int slot, int mapid, void* addr, int size)
{
	int ret;
	// Line 128, Address: 0x271e10, Func Offset: 0
	// Line 130, Address: 0x271e3c, Func Offset: 0x2c
	// Line 131, Address: 0x271e4c, Func Offset: 0x3c
	// Line 133, Address: 0x271e78, Func Offset: 0x68
	// Line 134, Address: 0x271e8c, Func Offset: 0x7c
	// Line 136, Address: 0x271e94, Func Offset: 0x84
	// Line 137, Address: 0x271eb8, Func Offset: 0xa8
	// Line 139, Address: 0x271ec0, Func Offset: 0xb0
	// Line 142, Address: 0x271ee4, Func Offset: 0xd4
	// Line 143, Address: 0x271ee8, Func Offset: 0xd8
	// Func End, Address: 0x271f0c, Func Offset: 0xfc
}

// 
// Start address: 0x271f10
void** loadBgCAM_GetLoadedDataAddrList()
{
	void* addr;
	int j;
	int i;
	// Line 155, Address: 0x271f10, Func Offset: 0
	// Line 156, Address: 0x271f14, Func Offset: 0x4
	// Line 157, Address: 0x271f20, Func Offset: 0x10
	// Line 158, Address: 0x271f34, Func Offset: 0x24
	// Line 159, Address: 0x271f58, Func Offset: 0x48
	// Line 160, Address: 0x271f6c, Func Offset: 0x5c
	// Line 162, Address: 0x271f80, Func Offset: 0x70
	// Line 163, Address: 0x271f88, Func Offset: 0x78
	// Func End, Address: 0x271f90, Func Offset: 0x80
}

// 
// Start address: 0x271f90
void loadBgCAM_vcReset()
{
	void** list;
	// Line 166, Address: 0x271f90, Func Offset: 0
	// Line 168, Address: 0x271f98, Func Offset: 0x8
	// Line 169, Address: 0x271fa0, Func Offset: 0x10
	// Line 170, Address: 0x271fa8, Func Offset: 0x18
	// Func End, Address: 0x271fb8, Func Offset: 0x28
}

