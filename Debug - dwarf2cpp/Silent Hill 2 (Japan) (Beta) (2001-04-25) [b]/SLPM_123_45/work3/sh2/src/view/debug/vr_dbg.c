typedef struct _anon0;
typedef struct SubCharacter;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct _VbCOORDINATE;
typedef struct _VC_ROAD_DATA;
typedef struct _VC_NEAR_ROAD_DATA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct _VC_WATCH_MV_PARAM;
typedef struct _VR_DEBUG;
typedef struct _VC_CAM_MV_PARAM;
typedef struct _anon2;
typedef struct _VC_THROUGH_DOOR_CAM_PARAM;
typedef struct shCharaInfo;
typedef struct _VC_LIMIT_AREA;
typedef struct shSkelton;
typedef struct _VbSCREENINFO;
typedef struct _SH2_SYS;
typedef struct _anon3;
typedef struct _VC_FIX_CAM_PARAM;
typedef struct _VC_WORK;
typedef struct _VC_ROAD_AREA;
typedef struct _VC_FIX_ANG_CAM_PARAM;
typedef enum _VR_DEBUG_TYPE : unsigned char;
typedef struct shBattleFight;
typedef struct _VC_LOCUS_CIRCLE_CAM_PARAM;
typedef struct shBattleShot;
typedef enum _VC_FLAGS : unsigned short;
typedef struct shBattleArea;
typedef enum _VR_DBG_FLAGS : unsigned char;
typedef struct shBattleInfo;
typedef union _anon4;
typedef struct shAttackInfo;
typedef struct _KANRI;
typedef enum _VR_KEY_FLAGS : unsigned char;
typedef union _anon5;
typedef struct _CL_VHIT_WALL;
typedef struct _anon6;
typedef struct _SYS_W;

typedef void(*type_5)(_VC_ROAD_DATA*, int);
typedef void(*type_16)(_VC_ROAD_DATA, int, int);
typedef void(*type_28)(SubCharacter*);
typedef void(*type_31)(SubCharacter*);
typedef void(*type_32)(_VC_ROAD_AREA*, int);
typedef void(*type_38)(_VC_ROAD_AREA, int, int, int);

typedef unsigned char type_0[64];
typedef unsigned char type_1[32];
typedef _VC_NEAR_ROAD_DATA type_2[128];
typedef unsigned char type_3[32];
typedef _VbCOORDINATE type_4[18];
typedef void(*type_6)(_VC_ROAD_DATA*, int)[8];
typedef float type_7[4];
typedef float type_8[4];
typedef float type_9[4][4];
typedef SubCharacter type_10[6];
typedef unsigned char type_11[32];
typedef unsigned char type_12[64];
typedef unsigned char type_13[10];
typedef unsigned char type_14[64];
typedef unsigned char type_15[32];
typedef void(*type_17)(_VC_ROAD_DATA, int, int)[8];
typedef unsigned char type_18[32];
typedef unsigned char type_19[32];
typedef unsigned char type_20[32];
typedef unsigned char type_21[13];
typedef unsigned int type_22[8];
typedef unsigned char type_23[32];
typedef float type_24[4];
typedef float type_25[4][4];
typedef unsigned char type_26[34];
typedef unsigned char type_27[64];
typedef float type_29[4];
typedef shAttackInfo type_30[46];
typedef unsigned char type_33[4];
typedef void(*type_34)(_VC_ROAD_AREA*, int)[2];
typedef unsigned char type_35[32];
typedef unsigned char type_36[10];
typedef unsigned char type_37[32];
typedef unsigned char type_39[64];
typedef void(*type_40)(_VC_ROAD_AREA, int, int, int)[2];
typedef unsigned char type_41[64];
typedef unsigned char type_42[64];
typedef unsigned char type_43[16];
typedef unsigned char type_44[16];

struct _anon0
{
	short vx;
	short vy;
	short vz;
	short pad;
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
	_anon2 pos;
	_anon2 rot;
	_anon2 pos_spd;
	_anon2 rot_spd;
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

struct _VbCOORDINATE
{
	unsigned int flg;
	float coord[4][4];
	float workm[4][4];
	unsigned int* param;
	_VbCOORDINATE* super;
	_VbCOORDINATE* sub;
	_anon0 r;
	float lw[4][4];
	float ls[4][4];
	float rot[4];
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

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
};

union _anon1
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _VC_WATCH_MV_PARAM
{
	float ang_accel_x;
	float ang_accel_y;
	float max_ang_spd_x;
	float max_ang_spd_y;
};

struct _VR_DEBUG
{
	_VR_DEBUG_TYPE mode;
	_VR_DBG_FLAGS flags;
	int cursor;
	float h_count;
	_VR_KEY_FLAGS key_f;
};

struct _VC_CAM_MV_PARAM
{
	float accel_xz;
	float accel_y;
	float max_spd_xz;
	float max_spd_y;
};

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

struct _VC_THROUGH_DOOR_CAM_PARAM
{
	int active_f;
	float timer;
	float rail_ang_y;
	float rail_sta_pos[4];
	float rail_sta_to_chara_dist;
};

struct shCharaInfo
{
	_anon2 pos;
	_anon2 rot;
	_anon2 pos_spd;
	_anon2 rot_spd;
	_anon3 mat;
	shSkelton* sk_top;
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon3 src_m;
	_anon2 src_t;
	_anon3 des_m;
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

struct _SH2_SYS
{
	unsigned int step[8];
	int main_status;
	unsigned int boot_first;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct _anon3
{
	float d[4][4];
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

struct _VC_FIX_ANG_CAM_PARAM
{
	float ang_x;
	float ang_y;
};

enum _VR_DEBUG_TYPE : unsigned char
{
	VR_DEBUG_SYSTEM,
	VR_DEBUG_VC_ROAD_DATA,
	VR_DEBUG_VC_ROAD_AREA,
	VR_DEBUG_CHR_POS,
	VR_DEBUG_TYPE_SUU
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _VC_LOCUS_CIRCLE_CAM_PARAM
{
	float ang_y;
	float radius;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct shBattleArea
{
	float center;
	float radius;
};

enum _VR_DBG_FLAGS : unsigned char
{
	VR_DBG_MSG_F = 0x1,
	VR_DBG_CAM_CHANGE_F,
	VR_DBG_AREA_DRAW_F = 0x4
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

union _anon4
{
	_VC_FIX_CAM_PARAM stl;
	_VC_FIX_ANG_CAM_PARAM fix;
	_VC_LOCUS_CIRCLE_CAM_PARAM cir;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon5 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
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

enum _VR_KEY_FLAGS : unsigned char
{
	VR_KEY_SWITCH_F = 0x1,
	VR_KEY_FOR_F,
	VR_KEY_BACK_F = 0x4,
	VR_KEY_RIGHT_F = 0x8,
	VR_KEY_LEFT_F = 0x10,
	VR_KEY_UP_F = 0x20,
	VR_KEY_DOWN_F = 0x40
};

union _anon5
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct _anon6
{
	int mode;
	int mv_smooth;
	float ev_cam_rate;
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
void(*vr_data_interact_func_list)(_VC_ROAD_DATA*, int)[8];
void(*vr_area_interact_func_list)(_VC_ROAD_AREA*, int)[2];
void(*vr_data_disp_msg_func_list)(_VC_ROAD_DATA, int, int)[8];
void(*vr_area_disp_msg_func_list)(_VC_ROAD_AREA, int, int, int)[2];
_VC_WORK vcWork;
_SYS_W sys;
_VbSCREENINFO VbScreenInfo;
_anon6 vcCameraInternalInfo;
_VR_DEBUG vrDbg;
float vcRefPosSt[4];
_SH2_SYS Sh2sys;

int vrDispMsgStandardInfo(int pos_x, int pos_y);
void vrInteractCamera(int port);
int vrDispMsgCamera(int pos_x, int pos_y);
void vrInteractCursorSelect(unsigned int suu, int port);
void vrInteractDbgSystem(int port);
void vrDispMsgDbgSystem(int pos_x, int pos_y);
void vrInteractChrPos(shCharaInfo* sc_p, int port);
void vrDispMsgChrPos(int pos_x, int pos_y);
void vrInteractVC_ROAD_AREA(_VC_ROAD_AREA* vr_area_p, int port);
void vrDispMsgVC_ROAD_AREA(int cursor_f, int pos_x, int pos_y);
void vrInteractVC_ROAD_FLAGS();
void vrDispMsgVC_ROAD_FLAGS(int pos_x, int pos_y);
void vrInteractVC_AREA_SIZE_TYPE(_VC_ROAD_DATA* vr_data_p, int port);
void vrDispMsgVC_AREA_SIZE_TYPE(int pos_x, int pos_y);
void vrInteractVC_ROAD_TYPE(_VC_ROAD_DATA* vr_data_p, int port);
void vrDispMsgVC_ROAD_TYPE(int pos_x, int pos_y);
void vrInteractVC_Y_TYPE(_VC_ROAD_DATA* vr_data_p, int port);
void vrDispMsgVC_Y_TYPE(int pos_x, int pos_y);
void vrInteractOfsWatchY(_VC_ROAD_DATA* vr_data_p, int port);
void vrDispMsgOfsWatchY(int pos_x, int pos_y);
void vrInteractVC_ROAD_DIR_TYPE();
void vrDispMsgVC_ROAD_DIR_TYPE(int pos_x, int pos_y);
void vrInteractProjection(_VC_ROAD_DATA* vr_data_p, int port);
void vrDispMsgProjection(int pos_x, int pos_y);
void vrInteractVC_CAM_MV_TYPE();
void vrDispMsgVC_CAM_MV_TYPE(int pos_x, int pos_y);

// 
// Start address: 0x20d570
int vrDispMsgStandardInfo(int pos_x, int pos_y)
{
	int line_no;
	unsigned char str[64];
	float dist;
	float y;
	float xz;
	float watch_pos[4];
	float cam_pos[4];
	// Line 135, Address: 0x20d570, Func Offset: 0
	// Line 140, Address: 0x20d59c, Func Offset: 0x2c
	// Line 142, Address: 0x20d5a0, Func Offset: 0x30
	// Line 143, Address: 0x20d5ac, Func Offset: 0x3c
	// Line 146, Address: 0x20d5b8, Func Offset: 0x48
	// Line 147, Address: 0x20d5e0, Func Offset: 0x70
	// Line 150, Address: 0x20d5fc, Func Offset: 0x8c
	// Line 152, Address: 0x20d638, Func Offset: 0xc8
	// Line 153, Address: 0x20d64c, Func Offset: 0xdc
	// Line 155, Address: 0x20d654, Func Offset: 0xe4
	// Line 156, Address: 0x20d668, Func Offset: 0xf8
	// Line 158, Address: 0x20d670, Func Offset: 0x100
	// Line 159, Address: 0x20d684, Func Offset: 0x114
	// Line 161, Address: 0x20d68c, Func Offset: 0x11c
	// Line 162, Address: 0x20d6a0, Func Offset: 0x130
	// Line 164, Address: 0x20d6a8, Func Offset: 0x138
	// Line 166, Address: 0x20d6bc, Func Offset: 0x14c
	// Line 169, Address: 0x20d6d8, Func Offset: 0x168
	// Line 170, Address: 0x20d700, Func Offset: 0x190
	// Line 178, Address: 0x20d71c, Func Offset: 0x1ac
	// Line 179, Address: 0x20d720, Func Offset: 0x1b0
	// Line 180, Address: 0x20d740, Func Offset: 0x1d0
	// Line 184, Address: 0x20d7b0, Func Offset: 0x240
	// Line 185, Address: 0x20d7cc, Func Offset: 0x25c
	// Line 189, Address: 0x20d830, Func Offset: 0x2c0
	// Line 190, Address: 0x20d84c, Func Offset: 0x2dc
	// Line 194, Address: 0x20d8b0, Func Offset: 0x340
	// Line 197, Address: 0x20d8cc, Func Offset: 0x35c
	// Line 198, Address: 0x20d8d0, Func Offset: 0x360
	// Line 199, Address: 0x20d8f0, Func Offset: 0x380
	// Line 200, Address: 0x20d900, Func Offset: 0x390
	// Line 201, Address: 0x20d92c, Func Offset: 0x3bc
	// Line 202, Address: 0x20d968, Func Offset: 0x3f8
	// Line 206, Address: 0x20d9fc, Func Offset: 0x48c
	// Line 207, Address: 0x20da18, Func Offset: 0x4a8
	// Line 208, Address: 0x20da2c, Func Offset: 0x4bc
	// Line 209, Address: 0x20da5c, Func Offset: 0x4ec
	// Line 210, Address: 0x20da9c, Func Offset: 0x52c
	// Line 214, Address: 0x20db30, Func Offset: 0x5c0
	// Line 215, Address: 0x20db4c, Func Offset: 0x5dc
	// Line 216, Address: 0x20db60, Func Offset: 0x5f0
	// Line 217, Address: 0x20db90, Func Offset: 0x620
	// Line 218, Address: 0x20dbd0, Func Offset: 0x660
	// Line 222, Address: 0x20dc64, Func Offset: 0x6f4
	// Line 225, Address: 0x20dc80, Func Offset: 0x710
	// Line 226, Address: 0x20dc84, Func Offset: 0x714
	// Line 227, Address: 0x20dca4, Func Offset: 0x734
	// Line 228, Address: 0x20dcec, Func Offset: 0x77c
	// Line 229, Address: 0x20dd08, Func Offset: 0x798
	// Line 234, Address: 0x20ddc0, Func Offset: 0x850
	// Line 235, Address: 0x20dddc, Func Offset: 0x86c
	// Line 237, Address: 0x20dde0, Func Offset: 0x870
	// Line 238, Address: 0x20dde4, Func Offset: 0x874
	// Func End, Address: 0x20de10, Func Offset: 0x8a0
}

// 
// Start address: 0x20de10
void vrInteractCamera(int port)
{
	shCharaInfo* sc_p;
	// Line 246, Address: 0x20de10, Func Offset: 0
	// Line 248, Address: 0x20de24, Func Offset: 0x14
	// Line 249, Address: 0x20de38, Func Offset: 0x28
	// Line 250, Address: 0x20de64, Func Offset: 0x54
	// Line 253, Address: 0x20de84, Func Offset: 0x74
	// Line 256, Address: 0x20deb0, Func Offset: 0xa0
	// Line 258, Address: 0x20def0, Func Offset: 0xe0
	// Line 259, Address: 0x20defc, Func Offset: 0xec
	// Line 262, Address: 0x20df04, Func Offset: 0xf4
	// Line 264, Address: 0x20df14, Func Offset: 0x104
	// Line 267, Address: 0x20df44, Func Offset: 0x134
	// Line 270, Address: 0x20df4c, Func Offset: 0x13c
	// Line 273, Address: 0x20df5c, Func Offset: 0x14c
	// Line 279, Address: 0x20dfd8, Func Offset: 0x1c8
	// Line 284, Address: 0x20dfe0, Func Offset: 0x1d0
	// Line 286, Address: 0x20dfec, Func Offset: 0x1dc
	// Line 288, Address: 0x20dffc, Func Offset: 0x1ec
	// Line 290, Address: 0x20e004, Func Offset: 0x1f4
	// Line 292, Address: 0x20e02c, Func Offset: 0x21c
	// Func End, Address: 0x20e044, Func Offset: 0x234
}

// 
// Start address: 0x20e050
int vrDispMsgCamera(int pos_x, int pos_y)
{
	shCharaInfo sc;
	int i;
	int line_no;
	unsigned char str[64];
	// Line 301, Address: 0x20e050, Func Offset: 0
	// Line 303, Address: 0x20e07c, Func Offset: 0x2c
	// Line 306, Address: 0x20e080, Func Offset: 0x30
	// Line 308, Address: 0x20e0c0, Func Offset: 0x70
	// Line 310, Address: 0x20e0e4, Func Offset: 0x94
	// Line 311, Address: 0x20e0fc, Func Offset: 0xac
	// Line 313, Address: 0x20e104, Func Offset: 0xb4
	// Line 315, Address: 0x20e128, Func Offset: 0xd8
	// Line 316, Address: 0x20e134, Func Offset: 0xe4
	// Line 319, Address: 0x20e16c, Func Offset: 0x11c
	// Line 320, Address: 0x20e1b0, Func Offset: 0x160
	// Line 321, Address: 0x20e1d0, Func Offset: 0x180
	// Line 322, Address: 0x20e1e4, Func Offset: 0x194
	// Line 324, Address: 0x20e1ec, Func Offset: 0x19c
	// Line 325, Address: 0x20e1f8, Func Offset: 0x1a8
	// Line 327, Address: 0x20e214, Func Offset: 0x1c4
	// Line 328, Address: 0x20e238, Func Offset: 0x1e8
	// Line 330, Address: 0x20e240, Func Offset: 0x1f0
	// Line 332, Address: 0x20e264, Func Offset: 0x214
	// Line 333, Address: 0x20e268, Func Offset: 0x218
	// Line 341, Address: 0x20e354, Func Offset: 0x304
	// Line 342, Address: 0x20e358, Func Offset: 0x308
	// Line 343, Address: 0x20e36c, Func Offset: 0x31c
	// Line 348, Address: 0x20e374, Func Offset: 0x324
	// Line 350, Address: 0x20e3a0, Func Offset: 0x350
	// Line 352, Address: 0x20e3c4, Func Offset: 0x374
	// Line 357, Address: 0x20e3e0, Func Offset: 0x390
	// Line 358, Address: 0x20e3e4, Func Offset: 0x394
	// Func End, Address: 0x20e410, Func Offset: 0x3c0
}

// 
// Start address: 0x20e410
void vrInteractCursorSelect(unsigned int suu, int port)
{
	// Line 370, Address: 0x20e410, Func Offset: 0
	// Line 371, Address: 0x20e420, Func Offset: 0x10
	// Line 373, Address: 0x20e438, Func Offset: 0x28
	// Line 374, Address: 0x20e464, Func Offset: 0x54
	// Line 376, Address: 0x20e490, Func Offset: 0x80
	// Line 377, Address: 0x20e4b4, Func Offset: 0xa4
	// Func End, Address: 0x20e4c4, Func Offset: 0xb4
}

// 
// Start address: 0x20e4d0
void vrInteractDbgSystem(int port)
{
	float cam2ref_vec[4];
	float cam_mat[4][4];
	float add_r;
	float add_r;
	float cam_pos[4];
	float cam_ang[4];
	// Line 386, Address: 0x20e4d0, Func Offset: 0
	// Line 388, Address: 0x20e4e4, Func Offset: 0x14
	// Line 389, Address: 0x20e518, Func Offset: 0x48
	// Line 391, Address: 0x20e52c, Func Offset: 0x5c
	// Line 394, Address: 0x20e568, Func Offset: 0x98
	// Line 395, Address: 0x20e580, Func Offset: 0xb0
	// Line 398, Address: 0x20e594, Func Offset: 0xc4
	// Line 399, Address: 0x20e5c0, Func Offset: 0xf0
	// Line 402, Address: 0x20e5c8, Func Offset: 0xf8
	// Line 403, Address: 0x20e5fc, Func Offset: 0x12c
	// Line 404, Address: 0x20e610, Func Offset: 0x140
	// Line 405, Address: 0x20e644, Func Offset: 0x174
	// Line 406, Address: 0x20e658, Func Offset: 0x188
	// Line 407, Address: 0x20e68c, Func Offset: 0x1bc
	// Line 408, Address: 0x20e6a0, Func Offset: 0x1d0
	// Line 409, Address: 0x20e6d4, Func Offset: 0x204
	// Line 410, Address: 0x20e6e8, Func Offset: 0x218
	// Line 411, Address: 0x20e71c, Func Offset: 0x24c
	// Line 412, Address: 0x20e730, Func Offset: 0x260
	// Line 413, Address: 0x20e764, Func Offset: 0x294
	// Line 414, Address: 0x20e778, Func Offset: 0x2a8
	// Line 420, Address: 0x20e780, Func Offset: 0x2b0
	// Line 421, Address: 0x20e78c, Func Offset: 0x2bc
	// Line 423, Address: 0x20e7c4, Func Offset: 0x2f4
	// Line 425, Address: 0x20e7d0, Func Offset: 0x300
	// Line 426, Address: 0x20e7e8, Func Offset: 0x318
	// Line 427, Address: 0x20e81c, Func Offset: 0x34c
	// Line 428, Address: 0x20e850, Func Offset: 0x380
	// Line 429, Address: 0x20e884, Func Offset: 0x3b4
	// Line 431, Address: 0x20e8b8, Func Offset: 0x3e8
	// Line 432, Address: 0x20e8e8, Func Offset: 0x418
	// Line 434, Address: 0x20e8ec, Func Offset: 0x41c
	// Line 435, Address: 0x20e910, Func Offset: 0x440
	// Line 437, Address: 0x20e934, Func Offset: 0x464
	// Line 438, Address: 0x20e950, Func Offset: 0x480
	// Line 440, Address: 0x20e96c, Func Offset: 0x49c
	// Line 442, Address: 0x20e974, Func Offset: 0x4a4
	// Line 443, Address: 0x20e9a8, Func Offset: 0x4d8
	// Line 445, Address: 0x20e9dc, Func Offset: 0x50c
	// Line 446, Address: 0x20ea0c, Func Offset: 0x53c
	// Line 448, Address: 0x20ea10, Func Offset: 0x540
	// Line 449, Address: 0x20ea34, Func Offset: 0x564
	// Line 451, Address: 0x20ea58, Func Offset: 0x588
	// Line 452, Address: 0x20ea84, Func Offset: 0x5b4
	// Line 459, Address: 0x20eab0, Func Offset: 0x5e0
	// Line 460, Address: 0x20eac0, Func Offset: 0x5f0
	// Line 461, Address: 0x20ead0, Func Offset: 0x600
	// Line 463, Address: 0x20eae0, Func Offset: 0x610
	// Line 464, Address: 0x20eb08, Func Offset: 0x638
	// Line 465, Address: 0x20eb18, Func Offset: 0x648
	// Line 466, Address: 0x20eb40, Func Offset: 0x670
	// Line 469, Address: 0x20eb50, Func Offset: 0x680
	// Line 473, Address: 0x20eb68, Func Offset: 0x698
	// Line 475, Address: 0x20eb8c, Func Offset: 0x6bc
	// Line 477, Address: 0x20ebac, Func Offset: 0x6dc
	// Line 479, Address: 0x20ebdc, Func Offset: 0x70c
	// Line 480, Address: 0x20ec00, Func Offset: 0x730
	// Line 481, Address: 0x20ec1c, Func Offset: 0x74c
	// Line 486, Address: 0x20ec4c, Func Offset: 0x77c
	// Func End, Address: 0x20ec64, Func Offset: 0x794
}

// 
// Start address: 0x20ec70
void vrDispMsgDbgSystem(int pos_x, int pos_y)
{
	int line_no;
	unsigned char str[64];
	// Line 495, Address: 0x20ec70, Func Offset: 0
	// Line 497, Address: 0x20ec90, Func Offset: 0x20
	// Line 499, Address: 0x20ec94, Func Offset: 0x24
	// Line 503, Address: 0x20ecdc, Func Offset: 0x6c
	// Line 504, Address: 0x20ecfc, Func Offset: 0x8c
	// Line 508, Address: 0x20ed44, Func Offset: 0xd4
	// Line 509, Address: 0x20ed64, Func Offset: 0xf4
	// Line 513, Address: 0x20edac, Func Offset: 0x13c
	// Line 514, Address: 0x20edcc, Func Offset: 0x15c
	// Func End, Address: 0x20edec, Func Offset: 0x17c
}

// 
// Start address: 0x20edf0
void vrInteractChrPos(shCharaInfo* sc_p, int port)
{
	float vec_z;
	float vec_x;
	// Line 523, Address: 0x20edf0, Func Offset: 0
	// Line 528, Address: 0x20ee00, Func Offset: 0x10
	// Line 529, Address: 0x20ee0c, Func Offset: 0x1c
	// Line 532, Address: 0x20ee18, Func Offset: 0x28
	// Line 533, Address: 0x20ee50, Func Offset: 0x60
	// Line 536, Address: 0x20ee80, Func Offset: 0x90
	// Line 537, Address: 0x20eeb8, Func Offset: 0xc8
	// Line 539, Address: 0x20eee8, Func Offset: 0xf8
	// Line 540, Address: 0x20eef4, Func Offset: 0x104
	// Line 541, Address: 0x20ef00, Func Offset: 0x110
	// Line 542, Address: 0x20ef0c, Func Offset: 0x11c
	// Line 543, Address: 0x20ef18, Func Offset: 0x128
	// Func End, Address: 0x20ef28, Func Offset: 0x138
}

// 
// Start address: 0x20ef30
void vrDispMsgChrPos(int pos_x, int pos_y)
{
	int line_no;
	unsigned char str[32];
	shCharaInfo sc;
	// Line 553, Address: 0x20ef30, Func Offset: 0
	// Line 543, Address: 0x20ef50, Func Offset: 0x20
	// Line 553, Address: 0x20ef54, Func Offset: 0x24
	// Line 543, Address: 0x20ef58, Func Offset: 0x28
	// Line 553, Address: 0x20ef60, Func Offset: 0x30
	// Line 543, Address: 0x20ef64, Func Offset: 0x34
	// Line 553, Address: 0x20ef68, Func Offset: 0x38
	// Line 555, Address: 0x20ef74, Func Offset: 0x44
	// Line 557, Address: 0x20ef78, Func Offset: 0x48
	// Line 558, Address: 0x20ef9c, Func Offset: 0x6c
	// Line 559, Address: 0x20efbc, Func Offset: 0x8c
	// Line 560, Address: 0x20efe0, Func Offset: 0xb0
	// Line 561, Address: 0x20f000, Func Offset: 0xd0
	// Func End, Address: 0x20f014, Func Offset: 0xe4
}

// 
// Start address: 0x20f020
void vrInteractVC_ROAD_AREA(_VC_ROAD_AREA* vr_area_p, int port)
{
	// Line 570, Address: 0x20f020, Func Offset: 0
	// Line 572, Address: 0x20f030, Func Offset: 0x10
	// Line 573, Address: 0x20f048, Func Offset: 0x28
	// Line 575, Address: 0x20f08c, Func Offset: 0x6c
	// Line 576, Address: 0x20f0ac, Func Offset: 0x8c
	// Line 577, Address: 0x20f0bc, Func Offset: 0x9c
	// Line 579, Address: 0x20f0c4, Func Offset: 0xa4
	// Line 580, Address: 0x20f0e0, Func Offset: 0xc0
	// Line 582, Address: 0x20f0e8, Func Offset: 0xc8
	// Line 583, Address: 0x20f104, Func Offset: 0xe4
	// Line 585, Address: 0x20f10c, Func Offset: 0xec
	// Line 586, Address: 0x20f128, Func Offset: 0x108
	// Line 587, Address: 0x20f138, Func Offset: 0x118
	// Line 589, Address: 0x20f140, Func Offset: 0x120
	// Line 590, Address: 0x20f15c, Func Offset: 0x13c
	// Line 592, Address: 0x20f164, Func Offset: 0x144
	// Line 598, Address: 0x20f180, Func Offset: 0x160
	// Line 599, Address: 0x20f198, Func Offset: 0x178
	// Line 601, Address: 0x20f1dc, Func Offset: 0x1bc
	// Line 602, Address: 0x20f1fc, Func Offset: 0x1dc
	// Line 603, Address: 0x20f20c, Func Offset: 0x1ec
	// Line 605, Address: 0x20f214, Func Offset: 0x1f4
	// Line 606, Address: 0x20f230, Func Offset: 0x210
	// Line 608, Address: 0x20f238, Func Offset: 0x218
	// Line 609, Address: 0x20f254, Func Offset: 0x234
	// Line 611, Address: 0x20f25c, Func Offset: 0x23c
	// Line 612, Address: 0x20f278, Func Offset: 0x258
	// Line 613, Address: 0x20f288, Func Offset: 0x268
	// Line 615, Address: 0x20f290, Func Offset: 0x270
	// Line 616, Address: 0x20f2ac, Func Offset: 0x28c
	// Line 618, Address: 0x20f2b4, Func Offset: 0x294
	// Line 622, Address: 0x20f2d0, Func Offset: 0x2b0
	// Func End, Address: 0x20f2e0, Func Offset: 0x2c0
}

// 
// Start address: 0x20f2e0
void vrDispMsgVC_ROAD_AREA(int cursor_f, int pos_x, int pos_y)
{
	int line_no;
	unsigned char str[64];
	_VC_ROAD_AREA vr_area;
	// Line 634, Address: 0x20f2e0, Func Offset: 0
	// Line 636, Address: 0x20f35c, Func Offset: 0x7c
	// Line 638, Address: 0x20f360, Func Offset: 0x80
	// Line 645, Address: 0x20f49c, Func Offset: 0x1bc
	// Line 646, Address: 0x20f4b8, Func Offset: 0x1d8
	// Line 653, Address: 0x20f5f4, Func Offset: 0x314
	// Line 654, Address: 0x20f610, Func Offset: 0x330
	// Line 661, Address: 0x20f738, Func Offset: 0x458
	// Line 662, Address: 0x20f754, Func Offset: 0x474
	// Func End, Address: 0x20f788, Func Offset: 0x4a8
}

// 
// Start address: 0x20f790
void vrInteractVC_ROAD_FLAGS()
{
	// Line 671, Address: 0x20f790, Func Offset: 0
	// Line 672, Address: 0x20f794, Func Offset: 0x4
	// Func End, Address: 0x20f7a0, Func Offset: 0x10
}

// 
// Start address: 0x20f7a0
void vrDispMsgVC_ROAD_FLAGS(int pos_x, int pos_y)
{
	unsigned char str2[64];
	unsigned char str[64];
	_VC_ROAD_DATA vr_data;
	// Line 683, Address: 0x20f7a0, Func Offset: 0
	// Line 672, Address: 0x20f7bc, Func Offset: 0x1c
	// Line 683, Address: 0x20f7c0, Func Offset: 0x20
	// Line 672, Address: 0x20f7c4, Func Offset: 0x24
	// Line 683, Address: 0x20f7cc, Func Offset: 0x2c
	// Line 672, Address: 0x20f7d0, Func Offset: 0x30
	// Line 683, Address: 0x20f7d4, Func Offset: 0x34
	// Line 687, Address: 0x20f7dc, Func Offset: 0x3c
	// Line 688, Address: 0x20f7e8, Func Offset: 0x48
	// Line 691, Address: 0x20f7fc, Func Offset: 0x5c
	// Line 692, Address: 0x20f80c, Func Offset: 0x6c
	// Line 693, Address: 0x20f828, Func Offset: 0x88
	// Line 694, Address: 0x20f838, Func Offset: 0x98
	// Line 695, Address: 0x20f854, Func Offset: 0xb4
	// Line 696, Address: 0x20f864, Func Offset: 0xc4
	// Line 698, Address: 0x20f878, Func Offset: 0xd8
	// Line 699, Address: 0x20f888, Func Offset: 0xe8
	// Line 701, Address: 0x20f89c, Func Offset: 0xfc
	// Line 702, Address: 0x20f8ac, Func Offset: 0x10c
	// Line 704, Address: 0x20f8c0, Func Offset: 0x120
	// Line 705, Address: 0x20f8d0, Func Offset: 0x130
	// Line 707, Address: 0x20f8e4, Func Offset: 0x144
	// Line 708, Address: 0x20f8f4, Func Offset: 0x154
	// Line 709, Address: 0x20f908, Func Offset: 0x168
	// Line 710, Address: 0x20f910, Func Offset: 0x170
	// Line 712, Address: 0x20f924, Func Offset: 0x184
	// Line 713, Address: 0x20f93c, Func Offset: 0x19c
	// Line 714, Address: 0x20f950, Func Offset: 0x1b0
	// Func End, Address: 0x20f960, Func Offset: 0x1c0
}

// 
// Start address: 0x20f960
void vrInteractVC_AREA_SIZE_TYPE(_VC_ROAD_DATA* vr_data_p, int port)
{
	// Line 723, Address: 0x20f960, Func Offset: 0
	// Line 724, Address: 0x20f970, Func Offset: 0x10
	// Line 726, Address: 0x20f980, Func Offset: 0x20
	// Line 727, Address: 0x20f9a8, Func Offset: 0x48
	// Line 729, Address: 0x20f9d0, Func Offset: 0x70
	// Line 730, Address: 0x20f9f8, Func Offset: 0x98
	// Func End, Address: 0x20fa08, Func Offset: 0xa8
}

// 
// Start address: 0x20fa10
void vrDispMsgVC_AREA_SIZE_TYPE(int pos_x, int pos_y)
{
	unsigned char str2[16];
	unsigned char str[16];
	_VC_ROAD_DATA vr_data;
	// Line 741, Address: 0x20fa10, Func Offset: 0
	// Line 730, Address: 0x20fa2c, Func Offset: 0x1c
	// Line 741, Address: 0x20fa30, Func Offset: 0x20
	// Line 730, Address: 0x20fa34, Func Offset: 0x24
	// Line 741, Address: 0x20fa3c, Func Offset: 0x2c
	// Line 730, Address: 0x20fa40, Func Offset: 0x30
	// Line 741, Address: 0x20fa44, Func Offset: 0x34
	// Line 745, Address: 0x20fa4c, Func Offset: 0x3c
	// Line 746, Address: 0x20fa84, Func Offset: 0x74
	// Line 747, Address: 0x20faa0, Func Offset: 0x90
	// Line 748, Address: 0x20fabc, Func Offset: 0xac
	// Line 749, Address: 0x20fad8, Func Offset: 0xc8
	// Line 750, Address: 0x20faf4, Func Offset: 0xe4
	// Line 753, Address: 0x20fb08, Func Offset: 0xf8
	// Line 754, Address: 0x20fb20, Func Offset: 0x110
	// Line 755, Address: 0x20fb34, Func Offset: 0x124
	// Func End, Address: 0x20fb44, Func Offset: 0x134
}

// 
// Start address: 0x20fb50
void vrInteractVC_ROAD_TYPE(_VC_ROAD_DATA* vr_data_p, int port)
{
	// Line 764, Address: 0x20fb50, Func Offset: 0
	// Line 765, Address: 0x20fb60, Func Offset: 0x10
	// Line 767, Address: 0x20fb70, Func Offset: 0x20
	// Line 768, Address: 0x20fb98, Func Offset: 0x48
	// Line 770, Address: 0x20fbc0, Func Offset: 0x70
	// Line 771, Address: 0x20fbe0, Func Offset: 0x90
	// Func End, Address: 0x20fbf0, Func Offset: 0xa0
}

// 
// Start address: 0x20fbf0
void vrDispMsgVC_ROAD_TYPE(int pos_x, int pos_y)
{
	unsigned char str2[32];
	unsigned char str[32];
	_VC_ROAD_DATA vr_data;
	// Line 781, Address: 0x20fbf0, Func Offset: 0
	// Line 771, Address: 0x20fc0c, Func Offset: 0x1c
	// Line 781, Address: 0x20fc10, Func Offset: 0x20
	// Line 771, Address: 0x20fc14, Func Offset: 0x24
	// Line 781, Address: 0x20fc1c, Func Offset: 0x2c
	// Line 771, Address: 0x20fc20, Func Offset: 0x30
	// Line 781, Address: 0x20fc24, Func Offset: 0x34
	// Line 785, Address: 0x20fc2c, Func Offset: 0x3c
	// Line 787, Address: 0x20fc58, Func Offset: 0x68
	// Line 788, Address: 0x20fc6c, Func Offset: 0x7c
	// Line 790, Address: 0x20fc74, Func Offset: 0x84
	// Line 791, Address: 0x20fc88, Func Offset: 0x98
	// Line 793, Address: 0x20fc90, Func Offset: 0xa0
	// Line 794, Address: 0x20fca4, Func Offset: 0xb4
	// Line 796, Address: 0x20fcac, Func Offset: 0xbc
	// Line 799, Address: 0x20fcc0, Func Offset: 0xd0
	// Line 800, Address: 0x20fce0, Func Offset: 0xf0
	// Line 801, Address: 0x20fcf4, Func Offset: 0x104
	// Func End, Address: 0x20fd04, Func Offset: 0x114
}

// 
// Start address: 0x20fd10
void vrInteractVC_Y_TYPE(_VC_ROAD_DATA* vr_data_p, int port)
{
	// Line 810, Address: 0x20fd10, Func Offset: 0
	// Line 811, Address: 0x20fd20, Func Offset: 0x10
	// Line 813, Address: 0x20fd30, Func Offset: 0x20
	// Line 814, Address: 0x20fd58, Func Offset: 0x48
	// Line 816, Address: 0x20fd80, Func Offset: 0x70
	// Line 817, Address: 0x20fda0, Func Offset: 0x90
	// Func End, Address: 0x20fdb0, Func Offset: 0xa0
}

// 
// Start address: 0x20fdb0
void vrDispMsgVC_Y_TYPE(int pos_x, int pos_y)
{
	unsigned char str2[32];
	unsigned char str[32];
	_VC_ROAD_DATA vr_data;
	// Line 827, Address: 0x20fdb0, Func Offset: 0
	// Line 817, Address: 0x20fdcc, Func Offset: 0x1c
	// Line 827, Address: 0x20fdd0, Func Offset: 0x20
	// Line 817, Address: 0x20fdd4, Func Offset: 0x24
	// Line 827, Address: 0x20fddc, Func Offset: 0x2c
	// Line 817, Address: 0x20fde0, Func Offset: 0x30
	// Line 827, Address: 0x20fde4, Func Offset: 0x34
	// Line 831, Address: 0x20fdec, Func Offset: 0x3c
	// Line 832, Address: 0x20fe18, Func Offset: 0x68
	// Line 833, Address: 0x20fe34, Func Offset: 0x84
	// Line 834, Address: 0x20fe50, Func Offset: 0xa0
	// Line 835, Address: 0x20fe6c, Func Offset: 0xbc
	// Line 836, Address: 0x20fe88, Func Offset: 0xd8
	// Line 837, Address: 0x20fea4, Func Offset: 0xf4
	// Line 838, Address: 0x20fec0, Func Offset: 0x110
	// Line 841, Address: 0x20fed4, Func Offset: 0x124
	// Line 842, Address: 0x20feec, Func Offset: 0x13c
	// Line 843, Address: 0x20ff00, Func Offset: 0x150
	// Func End, Address: 0x20ff10, Func Offset: 0x160
}

// 
// Start address: 0x20ff10
void vrInteractOfsWatchY(_VC_ROAD_DATA* vr_data_p, int port)
{
	// Line 852, Address: 0x20ff10, Func Offset: 0
	// Line 853, Address: 0x20ff20, Func Offset: 0x10
	// Line 854, Address: 0x20ff38, Func Offset: 0x28
	// Line 855, Address: 0x20ff54, Func Offset: 0x44
	// Line 856, Address: 0x20ff6c, Func Offset: 0x5c
	// Line 857, Address: 0x20ff88, Func Offset: 0x78
	// Func End, Address: 0x20ff98, Func Offset: 0x88
}

// 
// Start address: 0x20ffa0
void vrDispMsgOfsWatchY(int pos_x, int pos_y)
{
	unsigned char str[64];
	float watch_pos[4];
	_VC_ROAD_DATA vr_data;
	// Line 867, Address: 0x20ffa0, Func Offset: 0
	// Line 857, Address: 0x20ffc0, Func Offset: 0x20
	// Line 867, Address: 0x20ffc4, Func Offset: 0x24
	// Line 857, Address: 0x20ffc8, Func Offset: 0x28
	// Line 867, Address: 0x20ffd0, Func Offset: 0x30
	// Line 857, Address: 0x20ffd4, Func Offset: 0x34
	// Line 867, Address: 0x20ffd8, Func Offset: 0x38
	// Line 871, Address: 0x20ffe0, Func Offset: 0x40
	// Line 873, Address: 0x20ffec, Func Offset: 0x4c
	// Line 878, Address: 0x21006c, Func Offset: 0xcc
	// Line 879, Address: 0x210080, Func Offset: 0xe0
	// Func End, Address: 0x210094, Func Offset: 0xf4
}

// 
// Start address: 0x2100a0
void vrInteractVC_ROAD_DIR_TYPE()
{
	// Line 888, Address: 0x2100a0, Func Offset: 0
	// Line 889, Address: 0x2100a4, Func Offset: 0x4
	// Func End, Address: 0x2100b0, Func Offset: 0x10
}

// 
// Start address: 0x2100b0
void vrDispMsgVC_ROAD_DIR_TYPE(int pos_x, int pos_y)
{
	unsigned char str2[32];
	unsigned char str[32];
	_VC_ROAD_DATA vr_data;
	// Line 900, Address: 0x2100b0, Func Offset: 0
	// Line 889, Address: 0x2100cc, Func Offset: 0x1c
	// Line 900, Address: 0x2100d0, Func Offset: 0x20
	// Line 889, Address: 0x2100d4, Func Offset: 0x24
	// Line 900, Address: 0x2100dc, Func Offset: 0x2c
	// Line 889, Address: 0x2100e0, Func Offset: 0x30
	// Line 900, Address: 0x2100e4, Func Offset: 0x34
	// Line 904, Address: 0x2100ec, Func Offset: 0x3c
	// Line 906, Address: 0x21010c, Func Offset: 0x5c
	// Line 907, Address: 0x210120, Func Offset: 0x70
	// Line 909, Address: 0x210128, Func Offset: 0x78
	// Line 910, Address: 0x21013c, Func Offset: 0x8c
	// Line 912, Address: 0x210144, Func Offset: 0x94
	// Line 915, Address: 0x210158, Func Offset: 0xa8
	// Line 916, Address: 0x210170, Func Offset: 0xc0
	// Line 917, Address: 0x210184, Func Offset: 0xd4
	// Func End, Address: 0x210194, Func Offset: 0xe4
}

// 
// Start address: 0x2101a0
void vrInteractProjection(_VC_ROAD_DATA* vr_data_p, int port)
{
	float old_scrz;
	// Line 926, Address: 0x2101a0, Func Offset: 0
	// Line 929, Address: 0x2101b0, Func Offset: 0x10
	// Line 932, Address: 0x2101c0, Func Offset: 0x20
	// Line 933, Address: 0x2101f4, Func Offset: 0x54
	// Line 936, Address: 0x210228, Func Offset: 0x88
	// Line 937, Address: 0x210248, Func Offset: 0xa8
	// Line 938, Address: 0x210258, Func Offset: 0xb8
	// Line 940, Address: 0x210260, Func Offset: 0xc0
	// Func End, Address: 0x210270, Func Offset: 0xd0
}

// 
// Start address: 0x210270
void vrDispMsgProjection(int pos_x, int pos_y)
{
	unsigned char str[32];
	_VC_ROAD_DATA vr_data;
	// Line 950, Address: 0x210270, Func Offset: 0
	// Line 940, Address: 0x21028c, Func Offset: 0x1c
	// Line 950, Address: 0x210290, Func Offset: 0x20
	// Line 940, Address: 0x210294, Func Offset: 0x24
	// Line 950, Address: 0x21029c, Func Offset: 0x2c
	// Line 940, Address: 0x2102a0, Func Offset: 0x30
	// Line 950, Address: 0x2102a4, Func Offset: 0x34
	// Line 953, Address: 0x2102ac, Func Offset: 0x3c
	// Line 954, Address: 0x2102d0, Func Offset: 0x60
	// Line 955, Address: 0x2102e4, Func Offset: 0x74
	// Func End, Address: 0x2102f4, Func Offset: 0x84
}

// 
// Start address: 0x210300
void vrInteractVC_CAM_MV_TYPE()
{
	// Line 964, Address: 0x210300, Func Offset: 0
	// Line 965, Address: 0x210304, Func Offset: 0x4
	// Func End, Address: 0x210310, Func Offset: 0x10
}

// 
// Start address: 0x210310
void vrDispMsgVC_CAM_MV_TYPE(int pos_x, int pos_y)
{
	unsigned char str2[32];
	unsigned char str[32];
	_VC_ROAD_DATA vr_data;
	// Line 976, Address: 0x210310, Func Offset: 0
	// Line 965, Address: 0x210330, Func Offset: 0x20
	// Line 976, Address: 0x210334, Func Offset: 0x24
	// Line 965, Address: 0x210338, Func Offset: 0x28
	// Line 976, Address: 0x210340, Func Offset: 0x30
	// Line 965, Address: 0x210344, Func Offset: 0x34
	// Line 976, Address: 0x210348, Func Offset: 0x38
	// Line 980, Address: 0x210350, Func Offset: 0x40
	// Line 982, Address: 0x21037c, Func Offset: 0x6c
	// Line 983, Address: 0x210390, Func Offset: 0x80
	// Line 985, Address: 0x210398, Func Offset: 0x88
	// Line 989, Address: 0x2103d0, Func Offset: 0xc0
	// Line 991, Address: 0x2103d8, Func Offset: 0xc8
	// Line 995, Address: 0x210410, Func Offset: 0x100
	// Line 997, Address: 0x210418, Func Offset: 0x108
	// Line 998, Address: 0x21042c, Func Offset: 0x11c
	// Line 1000, Address: 0x210434, Func Offset: 0x124
	// Line 1004, Address: 0x21046c, Func Offset: 0x15c
	// Line 1006, Address: 0x210474, Func Offset: 0x164
	// Line 1007, Address: 0x210488, Func Offset: 0x178
	// Line 1009, Address: 0x210490, Func Offset: 0x180
	// Line 1012, Address: 0x2104a4, Func Offset: 0x194
	// Line 1013, Address: 0x2104bc, Func Offset: 0x1ac
	// Line 1014, Address: 0x2104d0, Func Offset: 0x1c0
	// Func End, Address: 0x2104e4, Func Offset: 0x1d4
}

