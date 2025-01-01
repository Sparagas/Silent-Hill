typedef struct _CL_HITPOLY_HEAD;
typedef union _anon0;
typedef struct _VR_DEBUG;
typedef struct SubCharacter;
typedef struct _VC_LOCUS_CIRCLE_CAM_PARAM;
typedef struct _VC_ROAD_DATA;
typedef struct _VbCOORDINATE;
typedef struct _VC_ROAD_AREA;
typedef enum _VC_FLAGS : unsigned short;
typedef struct _anon1;
typedef enum _VR_DEBUG_TYPE : unsigned char;
typedef union _anon2;
typedef struct _KANRI;
typedef struct _SH2_SYS;
typedef struct shSkelton;
typedef struct _SYS_W;
typedef struct _anon3;
typedef struct _anon4;
typedef struct shBattleFight;
typedef enum _VR_DBG_FLAGS : unsigned char;
typedef struct shBattleShot;
typedef struct _VC_NEAR_ROAD_DATA;
typedef struct shBattleArea;
typedef struct _VC_WATCH_MV_PARAM;
typedef struct shBattleInfo;
typedef struct _AnimeInfo;
typedef struct _VC_CAM_MV_PARAM;
typedef enum _VR_KEY_FLAGS : unsigned char;
typedef struct _VC_THROUGH_DOOR_CAM_PARAM;
typedef struct _VC_LIMIT_AREA;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon5;
typedef struct _VC_FIX_CAM_PARAM;
typedef struct _VC_WORK;
typedef struct _CL_VHIT_CHARA;
typedef struct _VC_FIX_ANG_CAM_PARAM;
typedef struct _CL_VHIT_RESULT;
typedef struct _anon6;

typedef void(*type_15)(SubCharacter*);
typedef void(*type_18)(SubCharacter*);

typedef unsigned char type_0[34];
typedef float type_1[4];
typedef _AnimeInfo type_2[22];
typedef float type_3[4];
typedef float type_4[4][4];
typedef _AnimeInfo type_5[5];
typedef unsigned char type_6[10];
typedef _AnimeInfo type_7[33];
typedef unsigned int type_8[8];
typedef float type_9[4];
typedef _AnimeInfo type_10[28];
typedef float type_11[4][4];
typedef _AnimeInfo type_12[11];
typedef _VC_NEAR_ROAD_DATA type_13[128];
typedef _VbCOORDINATE type_14[18];
typedef SubCharacter type_16[6];
typedef shAttackInfo type_17[46];
typedef _AnimeInfo type_19[11];
typedef float type_20[4];
typedef unsigned char type_21[4];
typedef _AnimeInfo type_22[35];
typedef unsigned char type_23[10];
typedef _AnimeInfo type_24[17];
typedef _AnimeInfo type_25[9];
typedef _AnimeInfo type_26[5];
typedef unsigned char type_27[13];
typedef _VC_ROAD_DATA type_28[0];
typedef _AnimeInfo type_29[25];

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

union _anon0
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _VR_DEBUG
{
	_VR_DEBUG_TYPE mode;
	_VR_DBG_FLAGS flags;
	int cursor;
	float h_count;
	_VR_KEY_FLAGS key_f;
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
	_anon1 pos;
	_anon1 rot;
	_anon1 pos_spd;
	_anon1 rot_spd;
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
	_anon1 b_pos;
	_anon1 b_rot;
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

struct _VC_LOCUS_CIRCLE_CAM_PARAM
{
	float ang_y;
	float radius;
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

struct _VbCOORDINATE
{
	unsigned int flg;
	float coord[4][4];
	float workm[4][4];
	unsigned int* param;
	_VbCOORDINATE* super;
	_VbCOORDINATE* sub;
	_anon6 r;
	float lw[4][4];
	float ls[4][4];
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

struct _anon1
{
	float x;
	float y;
	float z;
	float w;
};

enum _VR_DEBUG_TYPE : unsigned char
{
	VR_DEBUG_SYSTEM,
	VR_DEBUG_VC_ROAD_DATA,
	VR_DEBUG_VC_ROAD_AREA,
	VR_DEBUG_CHR_POS,
	VR_DEBUG_TYPE_SUU
};

union _anon2
{
	_VC_FIX_CAM_PARAM stl;
	_VC_FIX_ANG_CAM_PARAM fix;
	_VC_LOCUS_CIRCLE_CAM_PARAM cir;
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

struct _SH2_SYS
{
	unsigned int step[8];
	int main_status;
	unsigned int boot_first;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon4 src_m;
	_anon1 src_t;
	_anon4 des_m;
	_anon1 des_t;
	_anon1 axis;
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

struct _anon3
{
	int mode;
	int mv_smooth;
	float ev_cam_rate;
};

struct _anon4
{
	float d[4][4];
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

enum _VR_DBG_FLAGS : unsigned char
{
	VR_DBG_MSG_F = 0x1,
	VR_DBG_CAM_CHANGE_F,
	VR_DBG_AREA_DRAW_F = 0x4
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

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	unsigned char pad;
};

struct _VC_CAM_MV_PARAM
{
	float accel_xz;
	float accel_y;
	float max_spd_xz;
	float max_spd_y;
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

struct _VC_THROUGH_DOOR_CAM_PARAM
{
	int active_f;
	float timer;
	float rail_ang_y;
	float rail_sta_pos[4];
	float rail_sta_to_chara_dist;
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
	_anon5 hit_check;
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

union _anon5
{
	shBattleFight fight;
	shBattleShot shot;
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

struct _VC_FIX_ANG_CAM_PARAM
{
	float ang_x;
	float ang_y;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon0 hobj;
};

struct _anon6
{
	short vx;
	short vy;
	short vz;
	short pad;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
_AnimeInfo pjames_anim[35];
_AnimeInfo pjames_hg_anim[11];
_AnimeInfo pjames_sg_anim[5];
_AnimeInfo pjames_rg_anim[5];
_AnimeInfo pjames_sp_anim[11];
_AnimeInfo pjames_ka_anim[25];
_AnimeInfo pjames_pi_anim[33];
_AnimeInfo pjames_na_anim[17];
_AnimeInfo pjames_cs_anim[22];
_AnimeInfo pjames_stage_anim[28];
_AnimeInfo pjames_demo_anim[9];
_SYS_W sys;
_VC_WORK vcWork;
_anon3 vcCameraInternalInfo;
_SH2_SYS Sh2sys;
_VR_DEBUG vrDbg;
_VC_ROAD_DATA mainCameraData[0];
float vcRefPosSt[4];

void vcInitCamera(_VC_ROAD_DATA* roadarray);
void vcSetCharactorData();
void vcSetCameraUseWarp(float* chr_pos, float chr_ang_y);
void vcMoveAndSetCamera(int in_connect_f, int free_cam_switch_trg_f, int for_f, int back_f, int right_f, int left_f, int up_f, int down_f);
void vcMakeHeroHeadPos(float* head_pos);
void vcAddOfsToPos(float* out_pos, float* in_pos, float ofs_xz_r, float ang_y, float ofs_y);
void vcSetRefPosAndSysRef2CamParam(float* ref_pos, _SYS_W* sys_p, int for_f, int back_f, int right_f, int left_f, int up_f, int down_f);
void vcSetRefPosAndCamPosAngByPad();

// 
// Start address: 0x1a1f80
void vcInitCamera(_VC_ROAD_DATA* roadarray)
{
	// Line 53, Address: 0x1a1f80, Func Offset: 0
	// Line 55, Address: 0x1a1f8c, Func Offset: 0xc
	// Line 56, Address: 0x1a1f94, Func Offset: 0x14
	// Line 57, Address: 0x1a1f9c, Func Offset: 0x1c
	// Line 64, Address: 0x1a1fa8, Func Offset: 0x28
	// Line 68, Address: 0x1a1fb4, Func Offset: 0x34
	// Line 72, Address: 0x1a1fcc, Func Offset: 0x4c
	// Line 73, Address: 0x1a1fd4, Func Offset: 0x54
	// Line 74, Address: 0x1a1fe0, Func Offset: 0x60
	// Line 75, Address: 0x1a1fe8, Func Offset: 0x68
	// Line 77, Address: 0x1a1ff8, Func Offset: 0x78
	// Line 81, Address: 0x1a200c, Func Offset: 0x8c
	// Line 82, Address: 0x1a2018, Func Offset: 0x98
	// Line 83, Address: 0x1a202c, Func Offset: 0xac
	// Line 84, Address: 0x1a2038, Func Offset: 0xb8
	// Func End, Address: 0x1a2048, Func Offset: 0xc8
}

// 
// Start address: 0x1a2050
void vcSetCharactorData()
{
	SubCharacter* sc;
	// Line 87, Address: 0x1a2050, Func Offset: 0
	// Line 90, Address: 0x1a205c, Func Offset: 0xc
	// Line 91, Address: 0x1a2070, Func Offset: 0x20
	// Line 94, Address: 0x1a2078, Func Offset: 0x28
	// Line 95, Address: 0x1a2084, Func Offset: 0x34
	// Line 96, Address: 0x1a2090, Func Offset: 0x40
	// Line 98, Address: 0x1a209c, Func Offset: 0x4c
	// Line 99, Address: 0x1a20a8, Func Offset: 0x58
	// Line 100, Address: 0x1a20b4, Func Offset: 0x64
	// Line 102, Address: 0x1a20c0, Func Offset: 0x70
	// Line 103, Address: 0x1a20cc, Func Offset: 0x7c
	// Line 104, Address: 0x1a20d8, Func Offset: 0x88
	// Line 106, Address: 0x1a20e4, Func Offset: 0x94
	// Line 109, Address: 0x1a20fc, Func Offset: 0xac
	// Line 112, Address: 0x1a2114, Func Offset: 0xc4
	// Line 118, Address: 0x1a2150, Func Offset: 0x100
	// Line 119, Address: 0x1a2160, Func Offset: 0x110
	// Line 121, Address: 0x1a2170, Func Offset: 0x120
	// Line 122, Address: 0x1a217c, Func Offset: 0x12c
	// Func End, Address: 0x1a2190, Func Offset: 0x140
}

// 
// Start address: 0x1a2190
void vcSetCameraUseWarp(float* chr_pos, float chr_ang_y)
{
	float cam_ang[4];
	float cam_pos[4];
	// Line 140, Address: 0x1a2190, Func Offset: 0
	// Line 145, Address: 0x1a21a8, Func Offset: 0x18
	// Line 146, Address: 0x1a21b0, Func Offset: 0x20
	// Line 149, Address: 0x1a21b4, Func Offset: 0x24
	// Line 150, Address: 0x1a21e0, Func Offset: 0x50
	// Line 151, Address: 0x1a21f8, Func Offset: 0x68
	// Line 152, Address: 0x1a2224, Func Offset: 0x94
	// Line 155, Address: 0x1a2234, Func Offset: 0xa4
	// Line 156, Address: 0x1a2254, Func Offset: 0xc4
	// Line 157, Address: 0x1a226c, Func Offset: 0xdc
	// Func End, Address: 0x1a2284, Func Offset: 0xf4
}

// 
// Start address: 0x1a2290
void vcMoveAndSetCamera(int in_connect_f, int free_cam_switch_trg_f, int for_f, int back_f, int right_f, int left_f, int up_f, int down_f)
{
	int ofs_h;
	float rpos[4];
	float grnd_y;
	float hero_top_y;
	float hero_bottom_y;
	float hr_head_pos[4];
	_KANRI* hr_p;
	float first_cam_pos[4];
	// Line 243, Address: 0x1a2290, Func Offset: 0
	// Line 253, Address: 0x1a22d4, Func Offset: 0x44
	// Line 254, Address: 0x1a22e8, Func Offset: 0x58
	// Line 256, Address: 0x1a22f4, Func Offset: 0x64
	// Line 259, Address: 0x1a233c, Func Offset: 0xac
	// Line 261, Address: 0x1a234c, Func Offset: 0xbc
	// Line 262, Address: 0x1a2354, Func Offset: 0xc4
	// Line 263, Address: 0x1a2368, Func Offset: 0xd8
	// Line 266, Address: 0x1a237c, Func Offset: 0xec
	// Line 267, Address: 0x1a238c, Func Offset: 0xfc
	// Line 268, Address: 0x1a239c, Func Offset: 0x10c
	// Line 269, Address: 0x1a23ac, Func Offset: 0x11c
	// Line 270, Address: 0x1a23bc, Func Offset: 0x12c
	// Line 271, Address: 0x1a23cc, Func Offset: 0x13c
	// Line 275, Address: 0x1a23dc, Func Offset: 0x14c
	// Line 280, Address: 0x1a23e8, Func Offset: 0x158
	// Line 281, Address: 0x1a23fc, Func Offset: 0x16c
	// Line 282, Address: 0x1a2410, Func Offset: 0x180
	// Line 288, Address: 0x1a2430, Func Offset: 0x1a0
	// Line 293, Address: 0x1a2464, Func Offset: 0x1d4
	// Line 295, Address: 0x1a246c, Func Offset: 0x1dc
	// Line 296, Address: 0x1a2488, Func Offset: 0x1f8
	// Line 297, Address: 0x1a249c, Func Offset: 0x20c
	// Line 298, Address: 0x1a24a8, Func Offset: 0x218
	// Line 299, Address: 0x1a24b8, Func Offset: 0x228
	// Line 310, Address: 0x1a24d0, Func Offset: 0x240
	// Line 312, Address: 0x1a24d8, Func Offset: 0x248
	// Line 313, Address: 0x1a24e0, Func Offset: 0x250
	// Line 314, Address: 0x1a24e8, Func Offset: 0x258
	// Line 315, Address: 0x1a2504, Func Offset: 0x274
	// Line 316, Address: 0x1a250c, Func Offset: 0x27c
	// Line 317, Address: 0x1a251c, Func Offset: 0x28c
	// Line 319, Address: 0x1a2524, Func Offset: 0x294
	// Line 326, Address: 0x1a252c, Func Offset: 0x29c
	// Line 329, Address: 0x1a2530, Func Offset: 0x2a0
	// Line 332, Address: 0x1a253c, Func Offset: 0x2ac
	// Line 333, Address: 0x1a2554, Func Offset: 0x2c4
	// Line 336, Address: 0x1a2570, Func Offset: 0x2e0
	// Line 337, Address: 0x1a2590, Func Offset: 0x300
	// Line 339, Address: 0x1a25ac, Func Offset: 0x31c
	// Line 343, Address: 0x1a25c0, Func Offset: 0x330
	// Line 355, Address: 0x1a2604, Func Offset: 0x374
	// Line 357, Address: 0x1a2614, Func Offset: 0x384
	// Line 360, Address: 0x1a261c, Func Offset: 0x38c
	// Line 364, Address: 0x1a264c, Func Offset: 0x3bc
	// Line 368, Address: 0x1a2680, Func Offset: 0x3f0
	// Line 371, Address: 0x1a2688, Func Offset: 0x3f8
	// Line 372, Address: 0x1a26a0, Func Offset: 0x410
	// Line 374, Address: 0x1a26a8, Func Offset: 0x418
	// Line 391, Address: 0x1a26d8, Func Offset: 0x448
	// Line 393, Address: 0x1a26e0, Func Offset: 0x450
	// Line 395, Address: 0x1a26f0, Func Offset: 0x460
	// Line 398, Address: 0x1a2700, Func Offset: 0x470
	// Line 406, Address: 0x1a2734, Func Offset: 0x4a4
	// Line 409, Address: 0x1a273c, Func Offset: 0x4ac
	// Line 410, Address: 0x1a2750, Func Offset: 0x4c0
	// Line 412, Address: 0x1a27a4, Func Offset: 0x514
	// Line 413, Address: 0x1a27bc, Func Offset: 0x52c
	// Line 419, Address: 0x1a27cc, Func Offset: 0x53c
	// Line 420, Address: 0x1a27e4, Func Offset: 0x554
	// Line 421, Address: 0x1a27f4, Func Offset: 0x564
	// Line 426, Address: 0x1a2804, Func Offset: 0x574
	// Func End, Address: 0x1a2834, Func Offset: 0x5a4
}

// 
// Start address: 0x1a2840
void vcMakeHeroHeadPos(float* head_pos)
{
	float fpos[4];
	float mat[4][4];
	// Line 443, Address: 0x1a2840, Func Offset: 0
	// Line 450, Address: 0x1a2850, Func Offset: 0x10
	// Line 452, Address: 0x1a287c, Func Offset: 0x3c
	// Line 453, Address: 0x1a2884, Func Offset: 0x44
	// Line 454, Address: 0x1a2894, Func Offset: 0x54
	// Line 458, Address: 0x1a28a8, Func Offset: 0x68
	// Line 459, Address: 0x1a28c0, Func Offset: 0x80
	// Line 460, Address: 0x1a28d8, Func Offset: 0x98
	// Line 461, Address: 0x1a28e8, Func Offset: 0xa8
	// Func End, Address: 0x1a28fc, Func Offset: 0xbc
}

// 
// Start address: 0x1a2900
void vcAddOfsToPos(float* out_pos, float* in_pos, float ofs_xz_r, float ang_y, float ofs_y)
{
	// Line 483, Address: 0x1a2900, Func Offset: 0
	// Line 484, Address: 0x1a291c, Func Offset: 0x1c
	// Line 485, Address: 0x1a2944, Func Offset: 0x44
	// Line 486, Address: 0x1a296c, Func Offset: 0x6c
	// Line 487, Address: 0x1a2984, Func Offset: 0x84
	// Func End, Address: 0x1a2994, Func Offset: 0x94
}

// 
// Start address: 0x1a29a0
void vcSetRefPosAndSysRef2CamParam(float* ref_pos, _SYS_W* sys_p, int for_f, int back_f, int right_f, int left_f, int up_f, int down_f)
{
	// Line 512, Address: 0x1a29a0, Func Offset: 0
	// Line 519, Address: 0x1a29c8, Func Offset: 0x28
	// Line 520, Address: 0x1a29f0, Func Offset: 0x50
	// Line 521, Address: 0x1a2a18, Func Offset: 0x78
	// Line 522, Address: 0x1a2a48, Func Offset: 0xa8
	// Line 523, Address: 0x1a2a78, Func Offset: 0xd8
	// Line 524, Address: 0x1a2aa0, Func Offset: 0x100
	// Line 526, Address: 0x1a2ac8, Func Offset: 0x128
	// Line 528, Address: 0x1a2ae0, Func Offset: 0x140
	// Line 531, Address: 0x1a2b14, Func Offset: 0x174
	// Line 534, Address: 0x1a2b40, Func Offset: 0x1a0
	// Func End, Address: 0x1a2b50, Func Offset: 0x1b0
}

// 
// Start address: 0x1a2b50
void vcSetRefPosAndCamPosAngByPad()
{
	float cam_pos[4];
	float cam_ang[4];
	// Line 554, Address: 0x1a2b50, Func Offset: 0
	// Line 558, Address: 0x1a2b58, Func Offset: 0x8
	// Line 559, Address: 0x1a2b64, Func Offset: 0x14
	// Line 561, Address: 0x1a2b9c, Func Offset: 0x4c
	// Line 638, Address: 0x1a2ba8, Func Offset: 0x58
	// Func End, Address: 0x1a2bb8, Func Offset: 0x68
}

