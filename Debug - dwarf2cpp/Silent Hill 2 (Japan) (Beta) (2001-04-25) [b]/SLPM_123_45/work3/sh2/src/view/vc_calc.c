typedef union _anon0;
typedef struct _VC_FIX_CAM_PARAM;
typedef struct _VC_FIX_ANG_CAM_PARAM;
typedef struct _VC_LOCUS_CIRCLE_CAM_PARAM;
typedef struct _VC_ROAD_AREA;
typedef struct _VC_ROAD_DATA;
typedef union _anon1;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct _VC_NEAR_ROAD_DATA;
typedef struct _VC_LIMIT_AREA;
typedef struct shAttackInfo;


typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4][4];
typedef shAttackInfo type_3[46];

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

struct _VC_FIX_ANG_CAM_PARAM
{
	float ang_x;
	float ang_y;
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

union _anon1
{
	_VC_FIX_CAM_PARAM stl;
	_VC_FIX_ANG_CAM_PARAM fix;
	_VC_LOCUS_CIRCLE_CAM_PARAM cir;
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

float vcRetNearRatioSwitchAreaInXZPos(float* chr_pos, float* cam_pos);
void vcTransRotRoadArea(float* v0, float m[4], float* v1);
void vcRotTransRoadArea(float* v0, float m[4], float* v1);
void vcConvertCamFile(_VC_ROAD_DATA* road_ary);

// 
// Start address: 0x1ac350
float vcRetNearRatioSwitchAreaInXZPos(float* chr_pos, float* cam_pos)
{
	float ppos[4];
	float ofs_ang_y;
	float near_ratio;
	_VC_NEAR_ROAD_DATA cur_near_road;
	// Line 24, Address: 0x1ac350, Func Offset: 0
	// Line 662, Address: 0x1ac364, Func Offset: 0x14
	// Line 25, Address: 0x1ac390, Func Offset: 0x40
	// Line 662, Address: 0x1ac398, Func Offset: 0x48
	// Line 29, Address: 0x1ac3ac, Func Offset: 0x5c
	// Line 662, Address: 0x1ac3b0, Func Offset: 0x60
	// Line 29, Address: 0x1ac3c0, Func Offset: 0x70
	// Line 662, Address: 0x1ac3c4, Func Offset: 0x74
	// Line 29, Address: 0x1ac3cc, Func Offset: 0x7c
	// Line 662, Address: 0x1ac3d0, Func Offset: 0x80
	// Line 36, Address: 0x1ac3f4, Func Offset: 0xa4
	// Line 662, Address: 0x1ac3f8, Func Offset: 0xa8
	// Line 36, Address: 0x1ac408, Func Offset: 0xb8
	// Line 38, Address: 0x1ac410, Func Offset: 0xc0
	// Line 662, Address: 0x1ac414, Func Offset: 0xc4
	// Line 38, Address: 0x1ac418, Func Offset: 0xc8
	// Line 662, Address: 0x1ac420, Func Offset: 0xd0
	// Line 38, Address: 0x1ac42c, Func Offset: 0xdc
	// Line 662, Address: 0x1ac444, Func Offset: 0xf4
	// Line 39, Address: 0x1ac454, Func Offset: 0x104
	// Line 662, Address: 0x1ac458, Func Offset: 0x108
	// Line 39, Address: 0x1ac460, Func Offset: 0x110
	// Line 662, Address: 0x1ac470, Func Offset: 0x120
	// Line 42, Address: 0x1ac474, Func Offset: 0x124
	// Line 662, Address: 0x1ac47c, Func Offset: 0x12c
	// Line 43, Address: 0x1ac484, Func Offset: 0x134
	// Line 662, Address: 0x1ac488, Func Offset: 0x138
	// Line 43, Address: 0x1ac490, Func Offset: 0x140
	// Line 662, Address: 0x1ac4a0, Func Offset: 0x150
	// Line 47, Address: 0x1ac4a4, Func Offset: 0x154
	// Line 49, Address: 0x1ac4ac, Func Offset: 0x15c
	// Line 662, Address: 0x1ac4b8, Func Offset: 0x168
	// Line 49, Address: 0x1ac4bc, Func Offset: 0x16c
	// Line 662, Address: 0x1ac4c4, Func Offset: 0x174
	// Line 49, Address: 0x1ac4d0, Func Offset: 0x180
	// Line 662, Address: 0x1ac4e8, Func Offset: 0x198
	// Line 50, Address: 0x1ac4f8, Func Offset: 0x1a8
	// Line 662, Address: 0x1ac4fc, Func Offset: 0x1ac
	// Line 50, Address: 0x1ac504, Func Offset: 0x1b4
	// Line 662, Address: 0x1ac514, Func Offset: 0x1c4
	// Line 53, Address: 0x1ac518, Func Offset: 0x1c8
	// Line 662, Address: 0x1ac520, Func Offset: 0x1d0
	// Line 54, Address: 0x1ac528, Func Offset: 0x1d8
	// Line 662, Address: 0x1ac52c, Func Offset: 0x1dc
	// Line 54, Address: 0x1ac534, Func Offset: 0x1e4
	// Line 662, Address: 0x1ac53c, Func Offset: 0x1ec
	// Func End, Address: 0x1ac554, Func Offset: 0x204
}

// 
// Start address: 0x1ac560
void vcTransRotRoadArea(float* v0, float m[4], float* v1)
{
	// Line 81, Address: 0x1ac560, Func Offset: 0
	// Line 82, Address: 0x1ac568, Func Offset: 0x8
	// Line 83, Address: 0x1ac57c, Func Offset: 0x1c
	// Line 85, Address: 0x1ac588, Func Offset: 0x28
	// Func End, Address: 0x1ac598, Func Offset: 0x38
}

// 
// Start address: 0x1ac5a0
void vcRotTransRoadArea(float* v0, float m[4], float* v1)
{
	// Line 104, Address: 0x1ac5a0, Func Offset: 0
	// Line 106, Address: 0x1ac5b8, Func Offset: 0x18
	// Line 107, Address: 0x1ac5c8, Func Offset: 0x28
	// Line 108, Address: 0x1ac5dc, Func Offset: 0x3c
	// Func End, Address: 0x1ac5f4, Func Offset: 0x54
}

// 
// Start address: 0x1ac600
void vcConvertCamFile(_VC_ROAD_DATA* road_ary)
{
	_VC_ROAD_DATA* rd_p;
	// Line 119, Address: 0x1ac600, Func Offset: 0
	// Line 122, Address: 0x1ac60c, Func Offset: 0xc
	// Line 124, Address: 0x1ac618, Func Offset: 0x18
	// Line 125, Address: 0x1ac63c, Func Offset: 0x3c
	// Line 126, Address: 0x1ac650, Func Offset: 0x50
	// Line 127, Address: 0x1ac674, Func Offset: 0x74
	// Line 128, Address: 0x1ac690, Func Offset: 0x90
	// Line 129, Address: 0x1ac6b4, Func Offset: 0xb4
	// Line 132, Address: 0x1ac6c8, Func Offset: 0xc8
	// Line 133, Address: 0x1ac6e4, Func Offset: 0xe4
	// Line 134, Address: 0x1ac6f8, Func Offset: 0xf8
	// Line 135, Address: 0x1ac710, Func Offset: 0x110
	// Func End, Address: 0x1ac720, Func Offset: 0x120
}

