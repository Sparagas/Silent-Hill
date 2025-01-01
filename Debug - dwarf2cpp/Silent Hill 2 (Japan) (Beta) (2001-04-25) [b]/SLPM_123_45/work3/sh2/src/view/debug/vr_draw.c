typedef struct _CL_VHIT_WALL;
typedef union _anon0;
typedef struct _VC_FIX_CAM_PARAM;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _VC_WORK;
typedef struct _CL_VHIT_CHARA;
typedef struct SubCharacter;
typedef struct _VC_ROAD_DATA;
typedef struct _VC_FIX_ANG_CAM_PARAM;
typedef struct SPACK_OT_DATA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct _VC_LOCUS_CIRCLE_CAM_PARAM;
typedef struct _VC_ROAD_AREA;
typedef enum _VC_FLAGS : unsigned short;
typedef struct SPACK_ENV_DATA;
typedef struct _anon2;
typedef struct SPACK_STATIC_DATA;
typedef struct SPACK_DATA;
typedef union _anon3;
typedef struct _VbWVSMATRIX;
typedef struct _anon4;
typedef struct shSkelton;
typedef struct _VbSCREENINFO;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct _VC_NEAR_ROAD_DATA;
typedef struct shBattleArea;
typedef struct _VC_WATCH_MV_PARAM;
typedef struct shBattleInfo;
typedef struct _VC_CAM_MV_PARAM;
typedef struct _VC_THROUGH_DOOR_CAM_PARAM;
typedef struct _VC_LIMIT_AREA;
typedef struct shAttackInfo;

typedef void(*type_10)(SubCharacter*);
typedef void(*type_12)(SubCharacter*);

typedef int type_0[4];
typedef float type_1[4];
typedef unsigned long type_2[2];
typedef float type_3[4];
typedef float type_4[4][4];
typedef unsigned char type_5[2];
typedef float type_6[4];
typedef float type_7[4][4];
typedef float type_8[4];
typedef _VC_NEAR_ROAD_DATA type_9[128];
typedef shAttackInfo type_11[46];
typedef unsigned char type_13[4];

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
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
	_anon3 tmp;
};

struct _VC_FIX_ANG_CAM_PARAM
{
	float ang_x;
	float ang_y;
};

struct SPACK_OT_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
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

struct SPACK_ENV_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int pad1;
	unsigned short VifQwc;
	unsigned char pad2;
	unsigned char VifDirect;
};

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
};

struct SPACK_DATA
{
	SPACK_OT_DATA** ot_top;
	SPACK_OT_DATA** ot_last;
	unsigned int ot_size;
	unsigned int ot_width;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int envid;
	SPACK_OT_DATA* dma_top;
	SPACK_OT_DATA* dmabuf_pos;
	SPACK_ENV_DATA* env_top;
	unsigned long* pk_last;
	unsigned long* pos;
	short* ot_max;
	<unknown fundamental type (0xa510)>* packet;
	SPACK_STATIC_DATA* ps_top;
	unsigned long* pgiftag;
	unsigned long giftag_b;
	unsigned int flag;
	void* kick_top;
};

union _anon3
{
	_VC_FIX_CAM_PARAM stl;
	_VC_FIX_ANG_CAM_PARAM fix;
	_VC_LOCUS_CIRCLE_CAM_PARAM cir;
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
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
	_anon2 src_t;
	_anon4 des_m;
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
	_anon0 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

shAttackInfo sh2_attack_list[46];
_VC_WORK vcWork;
_VbWVSMATRIX VbWvsMatrix;
_VbSCREENINFO VbScreenInfo;
SPACK_DATA spack;

void DrawCollisionLine(_VC_ROAD_DATA* ra);
void DrawViewCollisionLineNearZClip(float* p0, float* p1, int col);
void DrawViewCollisionLine(int* p0, int* p1, int col);

// 
// Start address: 0x20c190
void DrawCollisionLine(_VC_ROAD_DATA* ra)
{
	float rm1[4][4];
	float rm0[4][4];
	float tmpvec2[4];
	float tmpvec1[4];
	float tmpvec0[4];
	float zl;
	float xl;
	int line_col_no;
	float roadrot[4];
	float s3[4];
	float s2[4];
	float s1[4];
	float s0[4];
	float v3[4];
	float v2[4];
	float v1[4];
	float v0[4];
	float p1[4];
	float p0[4];
	// Line 29, Address: 0x20c190, Func Offset: 0
	// Line 36, Address: 0x20c1a4, Func Offset: 0x14
	// Line 38, Address: 0x20c1ac, Func Offset: 0x1c
	// Line 39, Address: 0x20c1b4, Func Offset: 0x24
	// Line 40, Address: 0x20c1bc, Func Offset: 0x2c
	// Line 41, Address: 0x20c1c4, Func Offset: 0x34
	// Line 42, Address: 0x20c1cc, Func Offset: 0x3c
	// Line 43, Address: 0x20c1d4, Func Offset: 0x44
	// Line 44, Address: 0x20c1dc, Func Offset: 0x4c
	// Line 45, Address: 0x20c1e4, Func Offset: 0x54
	// Line 47, Address: 0x20c1ec, Func Offset: 0x5c
	// Line 48, Address: 0x20c1f4, Func Offset: 0x64
	// Line 50, Address: 0x20c1fc, Func Offset: 0x6c
	// Line 57, Address: 0x20c204, Func Offset: 0x74
	// Line 59, Address: 0x20c20c, Func Offset: 0x7c
	// Line 60, Address: 0x20c218, Func Offset: 0x88
	// Line 62, Address: 0x20c224, Func Offset: 0x94
	// Line 64, Address: 0x20c230, Func Offset: 0xa0
	// Line 65, Address: 0x20c258, Func Offset: 0xc8
	// Line 67, Address: 0x20c294, Func Offset: 0x104
	// Line 68, Address: 0x20c2a8, Func Offset: 0x118
	// Line 69, Address: 0x20c2d0, Func Offset: 0x140
	// Line 72, Address: 0x20c2e4, Func Offset: 0x154
	// Line 73, Address: 0x20c2f4, Func Offset: 0x164
	// Line 74, Address: 0x20c304, Func Offset: 0x174
	// Line 75, Address: 0x20c338, Func Offset: 0x1a8
	// Line 76, Address: 0x20c348, Func Offset: 0x1b8
	// Line 77, Address: 0x20c358, Func Offset: 0x1c8
	// Line 79, Address: 0x20c38c, Func Offset: 0x1fc
	// Line 80, Address: 0x20c398, Func Offset: 0x208
	// Line 81, Address: 0x20c3a4, Func Offset: 0x214
	// Line 82, Address: 0x20c3b0, Func Offset: 0x220
	// Line 84, Address: 0x20c3bc, Func Offset: 0x22c
	// Line 85, Address: 0x20c3f0, Func Offset: 0x260
	// Line 86, Address: 0x20c424, Func Offset: 0x294
	// Line 87, Address: 0x20c458, Func Offset: 0x2c8
	// Line 89, Address: 0x20c48c, Func Offset: 0x2fc
	// Line 90, Address: 0x20c49c, Func Offset: 0x30c
	// Line 91, Address: 0x20c4ac, Func Offset: 0x31c
	// Line 92, Address: 0x20c4bc, Func Offset: 0x32c
	// Line 93, Address: 0x20c4cc, Func Offset: 0x33c
	// Line 94, Address: 0x20c4dc, Func Offset: 0x34c
	// Line 95, Address: 0x20c4ec, Func Offset: 0x35c
	// Line 96, Address: 0x20c4fc, Func Offset: 0x36c
	// Line 99, Address: 0x20c50c, Func Offset: 0x37c
	// Line 100, Address: 0x20c51c, Func Offset: 0x38c
	// Line 101, Address: 0x20c52c, Func Offset: 0x39c
	// Line 102, Address: 0x20c560, Func Offset: 0x3d0
	// Line 103, Address: 0x20c570, Func Offset: 0x3e0
	// Line 104, Address: 0x20c580, Func Offset: 0x3f0
	// Line 106, Address: 0x20c5b4, Func Offset: 0x424
	// Line 107, Address: 0x20c5c0, Func Offset: 0x430
	// Line 108, Address: 0x20c5cc, Func Offset: 0x43c
	// Line 109, Address: 0x20c5d8, Func Offset: 0x448
	// Line 111, Address: 0x20c5e4, Func Offset: 0x454
	// Line 112, Address: 0x20c618, Func Offset: 0x488
	// Line 113, Address: 0x20c64c, Func Offset: 0x4bc
	// Line 114, Address: 0x20c680, Func Offset: 0x4f0
	// Line 116, Address: 0x20c6b4, Func Offset: 0x524
	// Line 117, Address: 0x20c6c4, Func Offset: 0x534
	// Line 118, Address: 0x20c6d4, Func Offset: 0x544
	// Line 119, Address: 0x20c6e4, Func Offset: 0x554
	// Line 120, Address: 0x20c6f4, Func Offset: 0x564
	// Line 121, Address: 0x20c704, Func Offset: 0x574
	// Line 122, Address: 0x20c714, Func Offset: 0x584
	// Line 123, Address: 0x20c724, Func Offset: 0x594
	// Line 127, Address: 0x20c734, Func Offset: 0x5a4
	// Line 128, Address: 0x20c750, Func Offset: 0x5c0
	// Line 130, Address: 0x20c758, Func Offset: 0x5c8
	// Line 131, Address: 0x20c760, Func Offset: 0x5d0
	// Line 133, Address: 0x20c768, Func Offset: 0x5d8
	// Line 134, Address: 0x20c770, Func Offset: 0x5e0
	// Line 135, Address: 0x20c778, Func Offset: 0x5e8
	// Line 136, Address: 0x20c780, Func Offset: 0x5f0
	// Line 137, Address: 0x20c788, Func Offset: 0x5f8
	// Line 138, Address: 0x20c79c, Func Offset: 0x60c
	// Line 139, Address: 0x20c7a4, Func Offset: 0x614
	// Line 140, Address: 0x20c7ac, Func Offset: 0x61c
	// Line 141, Address: 0x20c7c0, Func Offset: 0x630
	// Line 142, Address: 0x20c7c8, Func Offset: 0x638
	// Line 143, Address: 0x20c7d0, Func Offset: 0x640
	// Line 144, Address: 0x20c7e4, Func Offset: 0x654
	// Line 145, Address: 0x20c7ec, Func Offset: 0x65c
	// Line 146, Address: 0x20c7f4, Func Offset: 0x664
	// Line 148, Address: 0x20c808, Func Offset: 0x678
	// Line 149, Address: 0x20c810, Func Offset: 0x680
	// Line 151, Address: 0x20c818, Func Offset: 0x688
	// Line 152, Address: 0x20c820, Func Offset: 0x690
	// Line 153, Address: 0x20c828, Func Offset: 0x698
	// Line 154, Address: 0x20c830, Func Offset: 0x6a0
	// Line 155, Address: 0x20c838, Func Offset: 0x6a8
	// Line 156, Address: 0x20c84c, Func Offset: 0x6bc
	// Line 157, Address: 0x20c854, Func Offset: 0x6c4
	// Line 158, Address: 0x20c85c, Func Offset: 0x6cc
	// Line 159, Address: 0x20c864, Func Offset: 0x6d4
	// Line 160, Address: 0x20c86c, Func Offset: 0x6dc
	// Line 161, Address: 0x20c880, Func Offset: 0x6f0
	// Line 162, Address: 0x20c888, Func Offset: 0x6f8
	// Line 163, Address: 0x20c890, Func Offset: 0x700
	// Line 164, Address: 0x20c898, Func Offset: 0x708
	// Line 165, Address: 0x20c8a0, Func Offset: 0x710
	// Line 166, Address: 0x20c8b4, Func Offset: 0x724
	// Line 167, Address: 0x20c8bc, Func Offset: 0x72c
	// Line 168, Address: 0x20c8c4, Func Offset: 0x734
	// Line 169, Address: 0x20c8cc, Func Offset: 0x73c
	// Line 170, Address: 0x20c8d4, Func Offset: 0x744
	// Line 172, Address: 0x20c8e8, Func Offset: 0x758
	// Line 173, Address: 0x20c8f0, Func Offset: 0x760
	// Line 175, Address: 0x20c8f8, Func Offset: 0x768
	// Line 176, Address: 0x20c900, Func Offset: 0x770
	// Line 177, Address: 0x20c908, Func Offset: 0x778
	// Line 178, Address: 0x20c910, Func Offset: 0x780
	// Line 179, Address: 0x20c918, Func Offset: 0x788
	// Line 180, Address: 0x20c92c, Func Offset: 0x79c
	// Line 181, Address: 0x20c934, Func Offset: 0x7a4
	// Line 182, Address: 0x20c93c, Func Offset: 0x7ac
	// Line 183, Address: 0x20c950, Func Offset: 0x7c0
	// Line 184, Address: 0x20c958, Func Offset: 0x7c8
	// Line 185, Address: 0x20c960, Func Offset: 0x7d0
	// Line 186, Address: 0x20c974, Func Offset: 0x7e4
	// Line 187, Address: 0x20c97c, Func Offset: 0x7ec
	// Line 188, Address: 0x20c984, Func Offset: 0x7f4
	// Line 191, Address: 0x20c998, Func Offset: 0x808
	// Line 193, Address: 0x20c99c, Func Offset: 0x80c
	// Line 194, Address: 0x20c9a4, Func Offset: 0x814
	// Line 196, Address: 0x20c9ac, Func Offset: 0x81c
	// Line 197, Address: 0x20c9b4, Func Offset: 0x824
	// Line 198, Address: 0x20c9bc, Func Offset: 0x82c
	// Line 199, Address: 0x20c9c4, Func Offset: 0x834
	// Line 200, Address: 0x20c9cc, Func Offset: 0x83c
	// Line 201, Address: 0x20c9e0, Func Offset: 0x850
	// Line 202, Address: 0x20c9e8, Func Offset: 0x858
	// Line 203, Address: 0x20c9f0, Func Offset: 0x860
	// Line 204, Address: 0x20ca04, Func Offset: 0x874
	// Line 205, Address: 0x20ca0c, Func Offset: 0x87c
	// Line 206, Address: 0x20ca14, Func Offset: 0x884
	// Line 207, Address: 0x20ca28, Func Offset: 0x898
	// Line 208, Address: 0x20ca30, Func Offset: 0x8a0
	// Line 209, Address: 0x20ca38, Func Offset: 0x8a8
	// Line 211, Address: 0x20ca4c, Func Offset: 0x8bc
	// Line 212, Address: 0x20ca54, Func Offset: 0x8c4
	// Line 214, Address: 0x20ca5c, Func Offset: 0x8cc
	// Line 215, Address: 0x20ca64, Func Offset: 0x8d4
	// Line 216, Address: 0x20ca6c, Func Offset: 0x8dc
	// Line 217, Address: 0x20ca74, Func Offset: 0x8e4
	// Line 218, Address: 0x20ca7c, Func Offset: 0x8ec
	// Line 219, Address: 0x20ca90, Func Offset: 0x900
	// Line 220, Address: 0x20ca98, Func Offset: 0x908
	// Line 221, Address: 0x20caa0, Func Offset: 0x910
	// Line 222, Address: 0x20caa8, Func Offset: 0x918
	// Line 223, Address: 0x20cab0, Func Offset: 0x920
	// Line 224, Address: 0x20cac4, Func Offset: 0x934
	// Line 225, Address: 0x20cacc, Func Offset: 0x93c
	// Line 226, Address: 0x20cad4, Func Offset: 0x944
	// Line 227, Address: 0x20cadc, Func Offset: 0x94c
	// Line 228, Address: 0x20cae4, Func Offset: 0x954
	// Line 229, Address: 0x20caf8, Func Offset: 0x968
	// Line 230, Address: 0x20cb00, Func Offset: 0x970
	// Line 231, Address: 0x20cb08, Func Offset: 0x978
	// Line 232, Address: 0x20cb10, Func Offset: 0x980
	// Line 233, Address: 0x20cb18, Func Offset: 0x988
	// Line 235, Address: 0x20cb2c, Func Offset: 0x99c
	// Line 236, Address: 0x20cb34, Func Offset: 0x9a4
	// Line 238, Address: 0x20cb3c, Func Offset: 0x9ac
	// Line 239, Address: 0x20cb44, Func Offset: 0x9b4
	// Line 240, Address: 0x20cb4c, Func Offset: 0x9bc
	// Line 241, Address: 0x20cb54, Func Offset: 0x9c4
	// Line 242, Address: 0x20cb5c, Func Offset: 0x9cc
	// Line 243, Address: 0x20cb70, Func Offset: 0x9e0
	// Line 244, Address: 0x20cb78, Func Offset: 0x9e8
	// Line 245, Address: 0x20cb80, Func Offset: 0x9f0
	// Line 246, Address: 0x20cb94, Func Offset: 0xa04
	// Line 247, Address: 0x20cb9c, Func Offset: 0xa0c
	// Line 248, Address: 0x20cba4, Func Offset: 0xa14
	// Line 249, Address: 0x20cbb8, Func Offset: 0xa28
	// Line 250, Address: 0x20cbc0, Func Offset: 0xa30
	// Line 251, Address: 0x20cbc8, Func Offset: 0xa38
	// Line 252, Address: 0x20cbdc, Func Offset: 0xa4c
	// Line 253, Address: 0x20cbf0, Func Offset: 0xa60
	// Func End, Address: 0x20cc08, Func Offset: 0xa78
}

// 
// Start address: 0x20cc10
void DrawViewCollisionLineNearZClip(float* p0, float* p1, int col)
{
	int i;
	float tv[4];
	float t1;
	float t0;
	float rlclip;
	unsigned char cd[2];
	int pt;
	float tmp1;
	float tmp0;
	float scrz;
	int ivec1[4];
	int ivec0[4];
	float vp1[4];
	float vp0[4];
	// Line 256, Address: 0x20cc10, Func Offset: 0
	// Line 261, Address: 0x20cc28, Func Offset: 0x18
	// Line 264, Address: 0x20cc30, Func Offset: 0x20
	// Line 265, Address: 0x20cc64, Func Offset: 0x54
	// Line 268, Address: 0x20cc98, Func Offset: 0x88
	// Line 270, Address: 0x20ccc0, Func Offset: 0xb0
	// Line 274, Address: 0x20cce8, Func Offset: 0xd8
	// Line 276, Address: 0x20ccfc, Func Offset: 0xec
	// Line 277, Address: 0x20cd18, Func Offset: 0x108
	// Line 278, Address: 0x20cd28, Func Offset: 0x118
	// Line 280, Address: 0x20cd34, Func Offset: 0x124
	// Line 281, Address: 0x20cd50, Func Offset: 0x140
	// Line 282, Address: 0x20cd60, Func Offset: 0x150
	// Line 284, Address: 0x20cd6c, Func Offset: 0x15c
	// Line 285, Address: 0x20cd70, Func Offset: 0x160
	// Line 288, Address: 0x20cd78, Func Offset: 0x168
	// Line 289, Address: 0x20cd94, Func Offset: 0x184
	// Line 290, Address: 0x20cda4, Func Offset: 0x194
	// Line 292, Address: 0x20cdb0, Func Offset: 0x1a0
	// Line 293, Address: 0x20cdcc, Func Offset: 0x1bc
	// Line 294, Address: 0x20cddc, Func Offset: 0x1cc
	// Line 296, Address: 0x20cde8, Func Offset: 0x1d8
	// Line 309, Address: 0x20cdec, Func Offset: 0x1dc
	// Line 312, Address: 0x20cdfc, Func Offset: 0x1ec
	// Line 315, Address: 0x20ce14, Func Offset: 0x204
	// Line 317, Address: 0x20ce20, Func Offset: 0x210
	// Line 318, Address: 0x20ce24, Func Offset: 0x214
	// Line 319, Address: 0x20ce28, Func Offset: 0x218
	// Line 320, Address: 0x20ce2c, Func Offset: 0x21c
	// Line 321, Address: 0x20ce48, Func Offset: 0x238
	// Line 323, Address: 0x20ce64, Func Offset: 0x254
	// Line 324, Address: 0x20ce78, Func Offset: 0x268
	// Line 325, Address: 0x20ce88, Func Offset: 0x278
	// Line 326, Address: 0x20ce94, Func Offset: 0x284
	// Line 327, Address: 0x20cea0, Func Offset: 0x290
	// Line 328, Address: 0x20ceb4, Func Offset: 0x2a4
	// Line 329, Address: 0x20cec0, Func Offset: 0x2b0
	// Line 330, Address: 0x20cecc, Func Offset: 0x2bc
	// Line 332, Address: 0x20ced8, Func Offset: 0x2c8
	// Line 333, Address: 0x20ceec, Func Offset: 0x2dc
	// Line 334, Address: 0x20cef8, Func Offset: 0x2e8
	// Line 335, Address: 0x20cf04, Func Offset: 0x2f4
	// Line 336, Address: 0x20cf10, Func Offset: 0x300
	// Line 337, Address: 0x20cf24, Func Offset: 0x314
	// Line 338, Address: 0x20cf30, Func Offset: 0x320
	// Line 339, Address: 0x20cf3c, Func Offset: 0x32c
	// Line 341, Address: 0x20cf48, Func Offset: 0x338
	// Line 344, Address: 0x20cf68, Func Offset: 0x358
	// Line 345, Address: 0x20cf78, Func Offset: 0x368
	// Line 347, Address: 0x20cf84, Func Offset: 0x374
	// Line 349, Address: 0x20cf88, Func Offset: 0x378
	// Line 351, Address: 0x20cfa0, Func Offset: 0x390
	// Line 353, Address: 0x20cfb8, Func Offset: 0x3a8
	// Line 354, Address: 0x20cfd4, Func Offset: 0x3c4
	// Line 355, Address: 0x20cff4, Func Offset: 0x3e4
	// Line 357, Address: 0x20cffc, Func Offset: 0x3ec
	// Line 358, Address: 0x20d018, Func Offset: 0x408
	// Line 359, Address: 0x20d024, Func Offset: 0x414
	// Line 361, Address: 0x20d034, Func Offset: 0x424
	// Line 362, Address: 0x20d050, Func Offset: 0x440
	// Line 363, Address: 0x20d05c, Func Offset: 0x44c
	// Line 364, Address: 0x20d06c, Func Offset: 0x45c
	// Line 367, Address: 0x20d074, Func Offset: 0x464
	// Line 368, Address: 0x20d07c, Func Offset: 0x46c
	// Line 369, Address: 0x20d08c, Func Offset: 0x47c
	// Line 370, Address: 0x20d0a8, Func Offset: 0x498
	// Line 371, Address: 0x20d0b4, Func Offset: 0x4a4
	// Line 373, Address: 0x20d0c4, Func Offset: 0x4b4
	// Line 374, Address: 0x20d0cc, Func Offset: 0x4bc
	// Line 376, Address: 0x20d0e4, Func Offset: 0x4d4
	// Line 378, Address: 0x20d0fc, Func Offset: 0x4ec
	// Line 379, Address: 0x20d118, Func Offset: 0x508
	// Line 380, Address: 0x20d13c, Func Offset: 0x52c
	// Line 382, Address: 0x20d144, Func Offset: 0x534
	// Line 383, Address: 0x20d160, Func Offset: 0x550
	// Line 384, Address: 0x20d16c, Func Offset: 0x55c
	// Line 386, Address: 0x20d17c, Func Offset: 0x56c
	// Line 387, Address: 0x20d198, Func Offset: 0x588
	// Line 388, Address: 0x20d1a4, Func Offset: 0x594
	// Line 389, Address: 0x20d1b4, Func Offset: 0x5a4
	// Line 392, Address: 0x20d1bc, Func Offset: 0x5ac
	// Line 393, Address: 0x20d1c4, Func Offset: 0x5b4
	// Line 394, Address: 0x20d1d0, Func Offset: 0x5c0
	// Line 395, Address: 0x20d1ec, Func Offset: 0x5dc
	// Line 396, Address: 0x20d1f8, Func Offset: 0x5e8
	// Line 398, Address: 0x20d208, Func Offset: 0x5f8
	// Line 400, Address: 0x20d210, Func Offset: 0x600
	// Line 402, Address: 0x20d218, Func Offset: 0x608
	// Line 403, Address: 0x20d224, Func Offset: 0x614
	// Line 405, Address: 0x20d23c, Func Offset: 0x62c
	// Line 406, Address: 0x20d250, Func Offset: 0x640
	// Line 407, Address: 0x20d268, Func Offset: 0x658
	// Line 408, Address: 0x20d284, Func Offset: 0x674
	// Line 411, Address: 0x20d2a0, Func Offset: 0x690
	// Line 412, Address: 0x20d2b4, Func Offset: 0x6a4
	// Func End, Address: 0x20d2d0, Func Offset: 0x6c0
}

// 
// Start address: 0x20d2d0
void DrawViewCollisionLine(int* p0, int* p1, int col)
{
	float q;
	unsigned long giftag_line[2];
	// Line 415, Address: 0x20d2d0, Func Offset: 0
	// Line 416, Address: 0x20d2fc, Func Offset: 0x2c
	// Line 420, Address: 0x20d310, Func Offset: 0x40
	// Line 423, Address: 0x20d320, Func Offset: 0x50
	// Line 424, Address: 0x20d334, Func Offset: 0x64
	// Line 426, Address: 0x20d350, Func Offset: 0x80
	// Line 428, Address: 0x20d388, Func Offset: 0xb8
	// Line 429, Address: 0x20d3c4, Func Offset: 0xf4
	// Line 431, Address: 0x20d3cc, Func Offset: 0xfc
	// Line 432, Address: 0x20d408, Func Offset: 0x138
	// Line 434, Address: 0x20d410, Func Offset: 0x140
	// Line 435, Address: 0x20d44c, Func Offset: 0x17c
	// Line 437, Address: 0x20d454, Func Offset: 0x184
	// Line 440, Address: 0x20d490, Func Offset: 0x1c0
	// Line 441, Address: 0x20d4e8, Func Offset: 0x218
	// Line 442, Address: 0x20d540, Func Offset: 0x270
	// Line 443, Address: 0x20d548, Func Offset: 0x278
	// Func End, Address: 0x20d570, Func Offset: 0x2a0
}

