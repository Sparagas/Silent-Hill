typedef struct _VC_ROAD_DATA;
typedef struct shAttackInfo;
typedef union _anon0;
typedef union _anon1;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct _VbSCREENINFO;
typedef union Q_WORDDATA;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct _VC_FIX_CAM_PARAM;
typedef struct shBattleFight;
typedef struct _VC_FIX_ANG_CAM_PARAM;
typedef struct shBattleShot;
typedef struct _VC_LOCUS_CIRCLE_CAM_PARAM;
typedef struct sh2gfw_Env_ctl;
typedef struct _VC_ROAD_AREA;


typedef unsigned char type_0[10];
typedef unsigned short type_1[4];
typedef unsigned char type_2[10];
typedef unsigned int type_3[4];
typedef unsigned short type_4[8];
typedef unsigned char type_5[13];
typedef float type_6[4];
typedef unsigned char type_7[16];
typedef int type_8[4];
typedef short type_9[8];
typedef char type_10[16];
typedef unsigned long type_11[2];
typedef float type_12[4];
typedef float type_13[4];
typedef float type_14[4][4];
typedef unsigned char type_15[34];
typedef _VC_ROAD_DATA type_16[1];
typedef shAttackInfo type_17[46];

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
	_anon1 tmp;
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

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

union _anon1
{
	_VC_FIX_CAM_PARAM stl;
	_VC_FIX_ANG_CAM_PARAM fix;
	_VC_LOCUS_CIRCLE_CAM_PARAM cir;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct _VC_FIX_CAM_PARAM
{
	float sta_base_ang_y;
	float end_base_ang_y;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _VC_FIX_ANG_CAM_PARAM
{
	float ang_x;
	float ang_y;
};

struct shBattleShot
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
	float BaseAmbient[4];
	float VertexAmbient[4];
	float spot0_localpos[4];
	float spot0_localdir[4];
	sh2gfw_SPOTL_MATRIX SpotL0;
	float spot1_localpos[4];
	float spot1_localdir[4];
	sh2gfw_SPOTL_MATRIX SpotL1;
	float spot2_localpos[4];
	float spot2_localdir[4];
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
_VC_ROAD_DATA CCTestRoadArray[1];
_VbSCREENINFO VbScreenInfo;
sh2gfw_Env_ctl Env_ctl;

void sh2gfw_set_ViewScreenM();
void sh2gfw_init_shcamera();
void sh2gfw_test_shcamera_main();

// 
// Start address: 0x17e1e0
void sh2gfw_set_ViewScreenM()
{
	// Line 125, Address: 0x17e1e0, Func Offset: 0
	// Line 127, Address: 0x17e1e8, Func Offset: 0x8
	// Line 128, Address: 0x17e220, Func Offset: 0x40
	// Line 129, Address: 0x17e240, Func Offset: 0x60
	// Line 130, Address: 0x17e260, Func Offset: 0x80
	// Line 131, Address: 0x17e280, Func Offset: 0xa0
	// Line 133, Address: 0x17e290, Func Offset: 0xb0
	// Line 134, Address: 0x17e298, Func Offset: 0xb8
	// Func End, Address: 0x17e2a8, Func Offset: 0xc8
}

// 
// Start address: 0x17e2b0
void sh2gfw_init_shcamera()
{
	// Line 142, Address: 0x17e2b0, Func Offset: 0
	// Line 144, Address: 0x17e2b8, Func Offset: 0x8
	// Line 147, Address: 0x17e2c0, Func Offset: 0x10
	// Func End, Address: 0x17e2d0, Func Offset: 0x20
}

// 
// Start address: 0x17e2d0
void sh2gfw_test_shcamera_main()
{
	// Line 158, Address: 0x17e2d0, Func Offset: 0
	// Line 175, Address: 0x17e2d8, Func Offset: 0x8
	// Line 179, Address: 0x17e2ec, Func Offset: 0x1c
	// Line 180, Address: 0x17e30c, Func Offset: 0x3c
	// Line 181, Address: 0x17e32c, Func Offset: 0x5c
	// Line 184, Address: 0x17e334, Func Offset: 0x64
	// Line 185, Address: 0x17e354, Func Offset: 0x84
	// Line 187, Address: 0x17e374, Func Offset: 0xa4
	// Line 191, Address: 0x17e37c, Func Offset: 0xac
	// Line 194, Address: 0x17e3a4, Func Offset: 0xd4
	// Line 196, Address: 0x17e3c0, Func Offset: 0xf0
	// Line 198, Address: 0x17e3d0, Func Offset: 0x100
	// Line 199, Address: 0x17e3e0, Func Offset: 0x110
	// Line 200, Address: 0x17e3f8, Func Offset: 0x128
	// Func End, Address: 0x17e408, Func Offset: 0x138
}

