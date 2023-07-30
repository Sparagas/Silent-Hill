typedef struct Light;
typedef struct shAttackInfo;
typedef struct LightWork;
typedef union _anon0;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_POINTL_MATRIX;
typedef union Q_WORDDATA;
typedef struct sh2gfw_Env_ctl;
typedef struct _VbWVSMATRIX;
typedef struct shBattleFight;
typedef struct shBattleShot;

typedef int(*type_4)(void*, void*);
typedef int(*type_28)(void*, void*);

typedef Light* type_0[8];
typedef float type_1[4];
typedef unsigned short type_2[4];
typedef Light* type_3[8];
typedef float type_5[4];
typedef Light type_6[8];
typedef float type_7[4];
typedef float type_8[4];
typedef float type_9[4][4];
typedef float type_10[4][4][2];
typedef float type_11[4][4];
typedef float type_12[4][4][2];
typedef float type_13[4][4][2];
typedef Light* type_14[4];
typedef unsigned int type_15[4];
typedef Light* type_16[8];
typedef unsigned short type_17[8];
typedef float type_18[4];
typedef unsigned char type_19[16];
typedef int type_20[4];
typedef short type_21[8];
typedef char type_22[16];
typedef unsigned long type_23[2];
typedef float type_24[4];
typedef float type_25[4];
typedef float type_26[4][4];
typedef Light* type_27[8];
typedef shAttackInfo type_29[46];

struct Light
{
	int kind;
	float intensity;
	float influence;
	float intensity2;
	float influence2;
	int fake;
	float shadow_length;
	float shadow_density;
	float pos[4];
	float vpos[4];
	float dir[4];
	float vdir[4];
	float color[4];
	float f_start;
	float f_end;
	float s_start;
	float s_end;
	float f_a;
	float f_b;
	float s_a;
	float s_b;
	float f_ra;
	float f_rb;
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

struct LightWork
{
	Light lights[8];
	int n_valid_parallels;
	int n_valid_parallel_matrices;
	int n_valid_extras;
	int n_valid_shadows;
	float nlms[4][4][2];
	float vnlms[4][4][2];
	float lcms[4][4][2];
	Light* valid_extras[4];
	Light* valid_shadows[8];
	float reflection_brightness;
	float reflection_color[4];
	float nhm[4][4];
	float vnhm[4][4];
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
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

shAttackInfo sh2_attack_list[46];
float monochrome_vector[4];
LightWork light_work;
sh2gfw_Env_ctl Env_ctl;
float unit_fvector_z[4];
_VbWVSMATRIX VbWvsMatrix;
int(*CompareByIntensity)(void*, void*);
float zero_fmatrix[4][4];
float unit_fvector_w[4];
float unit_fvector_y[4];
float zero_fvector[4];
int(*CompareByInfluence)(void*, void*);

Light* LightPointer(int n);
void UpdateIntensity(Light* l);
void UpdateFParam(Light* l);
void UpdateSParam(Light* l);
void LightDelete(int n);
void LightSetParallel(int n, float* dir, float* color);
void LightSetSpot(int n, float* pos, float* dir, float* color, float f_start, float f_end, float s_start, float s_end);
void sh_Kari_LightSetSpot(int n, float* pos, float* dir, float* color, float* sv);
void LightSetReflection(int n, float* dir, float* color);
void LightSetPos(int n, float* pos);
void LightSetDir(int n, float* dir);
void LightSetColor(int n, float* color);
void LightSetFalloff(int n, float f_start, float f_end);
void LightSetSpread(int n, float s_start, float s_end);
void CalcInfluence(Light* l, float* center, float radius);
int CompareByIntensity(void* xx, void* yy);
int CompareByInfluence(void* xx, void* yy);
void UpdateViewParams();
void UpdateParallels();
void UpdateReflections();
void UpdateExtras(float* center, float radius);
void LightUpdateInfoByScene();
void LightUpdateInfoByPos(float* center, float radius);
int LightNValidParallelMatrices();
void LightGetNthViewNLM(float nlm[4], int n);
void LightGetNthLCM(float lcm[4], int n);
float LightReflectionBrightness();
void LightGetReflectionColor(float* color);
float* LightReflectionColor();
void LightGetNthViewNHM(float nhm[4]);
int LightNValidExtras();
Light* LightNthValidExtra(int n);

// 
// Start address: 0x12ef00
Light* LightPointer(int n)
{
	// Line 82, Address: 0x12ef00, Func Offset: 0
	// Line 83, Address: 0x12ef0c, Func Offset: 0xc
	// Line 84, Address: 0x12ef40, Func Offset: 0x40
	// Line 85, Address: 0x12ef5c, Func Offset: 0x5c
	// Func End, Address: 0x12ef6c, Func Offset: 0x6c
}

// 
// Start address: 0x12ef70
void UpdateIntensity(Light* l)
{
	float* c;
	// Line 222, Address: 0x12ef70, Func Offset: 0
	// Line 223, Address: 0x12ef80, Func Offset: 0x10
	// Line 224, Address: 0x12ef88, Func Offset: 0x18
	// Line 225, Address: 0x12efa4, Func Offset: 0x34
	// Line 226, Address: 0x12efbc, Func Offset: 0x4c
	// Func End, Address: 0x12efd0, Func Offset: 0x60
}

// 
// Start address: 0x12efd0
void UpdateFParam(Light* l)
{
	float b;
	float a;
	// Line 233, Address: 0x12efd0, Func Offset: 0
	// Line 241, Address: 0x12efd8, Func Offset: 0x8
	// Line 242, Address: 0x12f000, Func Offset: 0x30
	// Line 243, Address: 0x12f018, Func Offset: 0x48
	// Line 244, Address: 0x12f024, Func Offset: 0x54
	// Line 254, Address: 0x12f030, Func Offset: 0x60
	// Line 255, Address: 0x12f058, Func Offset: 0x88
	// Line 256, Address: 0x12f078, Func Offset: 0xa8
	// Func End, Address: 0x12f084, Func Offset: 0xb4
}

// 
// Start address: 0x12f090
void UpdateSParam(Light* l)
{
	float b;
	float a;
	// Line 263, Address: 0x12f090, Func Offset: 0
	// Line 271, Address: 0x12f098, Func Offset: 0x8
	// Line 272, Address: 0x12f0c0, Func Offset: 0x30
	// Line 273, Address: 0x12f0d8, Func Offset: 0x48
	// Line 274, Address: 0x12f0e4, Func Offset: 0x54
	// Line 275, Address: 0x12f0f0, Func Offset: 0x60
	// Func End, Address: 0x12f0fc, Func Offset: 0x6c
}

// 
// Start address: 0x12f100
void LightDelete(int n)
{
	Light* l;
	// Line 282, Address: 0x12f100, Func Offset: 0
	// Line 283, Address: 0x12f110, Func Offset: 0x10
	// Line 284, Address: 0x12f120, Func Offset: 0x20
	// Line 285, Address: 0x12f124, Func Offset: 0x24
	// Func End, Address: 0x12f138, Func Offset: 0x38
}

// 
// Start address: 0x12f140
void LightSetParallel(int n, float* dir, float* color)
{
	Light* l;
	// Line 313, Address: 0x12f140, Func Offset: 0
	// Line 314, Address: 0x12f158, Func Offset: 0x18
	// Line 315, Address: 0x12f168, Func Offset: 0x28
	// Line 316, Address: 0x12f17c, Func Offset: 0x3c
	// Line 317, Address: 0x12f184, Func Offset: 0x44
	// Line 318, Address: 0x12f194, Func Offset: 0x54
	// Line 319, Address: 0x12f1a4, Func Offset: 0x64
	// Func End, Address: 0x12f1b8, Func Offset: 0x78
}

// 
// Start address: 0x12f1c0
void LightSetSpot(int n, float* pos, float* dir, float* color, float f_start, float f_end, float s_start, float s_end)
{
	Light* l;
	// Line 342, Address: 0x12f1c0, Func Offset: 0
	// Line 343, Address: 0x12f1ec, Func Offset: 0x2c
	// Line 344, Address: 0x12f1fc, Func Offset: 0x3c
	// Line 345, Address: 0x12f210, Func Offset: 0x50
	// Line 346, Address: 0x12f218, Func Offset: 0x58
	// Line 347, Address: 0x12f228, Func Offset: 0x68
	// Line 348, Address: 0x12f238, Func Offset: 0x78
	// Line 349, Address: 0x12f248, Func Offset: 0x88
	// Line 350, Address: 0x12f25c, Func Offset: 0x9c
	// Line 351, Address: 0x12f270, Func Offset: 0xb0
	// Func End, Address: 0x12f284, Func Offset: 0xc4
}

// 
// Start address: 0x12f290
void sh_Kari_LightSetSpot(int n, float* pos, float* dir, float* color, float* sv)
{
	// Line 357, Address: 0x12f290, Func Offset: 0
	// Line 362, Address: 0x12f2ac, Func Offset: 0x1c
	// Line 363, Address: 0x12f2c8, Func Offset: 0x38
	// Line 364, Address: 0x12f2d8, Func Offset: 0x48
	// Line 422, Address: 0x12f310, Func Offset: 0x80
	// Func End, Address: 0x12f320, Func Offset: 0x90
}

// 
// Start address: 0x12f320
void LightSetReflection(int n, float* dir, float* color)
{
	Light* l;
	// Line 463, Address: 0x12f320, Func Offset: 0
	// Line 465, Address: 0x12f338, Func Offset: 0x18
	// Line 466, Address: 0x12f348, Func Offset: 0x28
	// Line 467, Address: 0x12f35c, Func Offset: 0x3c
	// Line 468, Address: 0x12f364, Func Offset: 0x44
	// Line 469, Address: 0x12f374, Func Offset: 0x54
	// Line 470, Address: 0x12f384, Func Offset: 0x64
	// Func End, Address: 0x12f398, Func Offset: 0x78
}

// 
// Start address: 0x12f3a0
void LightSetPos(int n, float* pos)
{
	Light* l;
	// Line 525, Address: 0x12f3a0, Func Offset: 0
	// Line 526, Address: 0x12f3b4, Func Offset: 0x14
	// Line 527, Address: 0x12f3c4, Func Offset: 0x24
	// Line 528, Address: 0x12f3d4, Func Offset: 0x34
	// Func End, Address: 0x12f3e8, Func Offset: 0x48
}

// 
// Start address: 0x12f3f0
void LightSetDir(int n, float* dir)
{
	Light* l;
	// Line 535, Address: 0x12f3f0, Func Offset: 0
	// Line 536, Address: 0x12f404, Func Offset: 0x14
	// Line 537, Address: 0x12f414, Func Offset: 0x24
	// Line 538, Address: 0x12f470, Func Offset: 0x80
	// Line 539, Address: 0x12f484, Func Offset: 0x94
	// Line 540, Address: 0x12f48c, Func Offset: 0x9c
	// Line 548, Address: 0x12f49c, Func Offset: 0xac
	// Func End, Address: 0x12f4b0, Func Offset: 0xc0
}

// 
// Start address: 0x12f4b0
void LightSetColor(int n, float* color)
{
	Light* l;
	// Line 555, Address: 0x12f4b0, Func Offset: 0
	// Line 556, Address: 0x12f4c4, Func Offset: 0x14
	// Line 557, Address: 0x12f4d4, Func Offset: 0x24
	// Line 558, Address: 0x12f4e4, Func Offset: 0x34
	// Line 559, Address: 0x12f4f0, Func Offset: 0x40
	// Line 561, Address: 0x12f524, Func Offset: 0x74
	// Line 562, Address: 0x12f530, Func Offset: 0x80
	// Line 565, Address: 0x12f538, Func Offset: 0x88
	// Line 572, Address: 0x12f540, Func Offset: 0x90
	// Func End, Address: 0x12f554, Func Offset: 0xa4
}

// 
// Start address: 0x12f560
void LightSetFalloff(int n, float f_start, float f_end)
{
	Light* l;
	// Line 579, Address: 0x12f560, Func Offset: 0
	// Line 580, Address: 0x12f578, Func Offset: 0x18
	// Line 581, Address: 0x12f588, Func Offset: 0x28
	// Line 582, Address: 0x12f590, Func Offset: 0x30
	// Line 583, Address: 0x12f598, Func Offset: 0x38
	// Line 584, Address: 0x12f5a4, Func Offset: 0x44
	// Func End, Address: 0x12f5b8, Func Offset: 0x58
}

// 
// Start address: 0x12f5c0
void LightSetSpread(int n, float s_start, float s_end)
{
	Light* l;
	// Line 591, Address: 0x12f5c0, Func Offset: 0
	// Line 592, Address: 0x12f5d8, Func Offset: 0x18
	// Line 593, Address: 0x12f5e8, Func Offset: 0x28
	// Line 594, Address: 0x12f5f0, Func Offset: 0x30
	// Line 595, Address: 0x12f5f8, Func Offset: 0x38
	// Line 596, Address: 0x12f604, Func Offset: 0x44
	// Func End, Address: 0x12f618, Func Offset: 0x58
}

// 
// Start address: 0x12f620
void CalcInfluence(Light* l, float* center, float radius)
{
	float f_inf;
	float dist;
	float diff[4];
	// Line 633, Address: 0x12f620, Func Offset: 0
	// Line 634, Address: 0x12f634, Func Offset: 0x14
	// Line 636, Address: 0x12f67c, Func Offset: 0x5c
	// Line 637, Address: 0x12f688, Func Offset: 0x68
	// Line 638, Address: 0x12f694, Func Offset: 0x74
	// Line 641, Address: 0x12f69c, Func Offset: 0x7c
	// Line 642, Address: 0x12f6ac, Func Offset: 0x8c
	// Line 643, Address: 0x12f6bc, Func Offset: 0x9c
	// Line 650, Address: 0x12f6c4, Func Offset: 0xa4
	// Line 655, Address: 0x12f6dc, Func Offset: 0xbc
	// Line 658, Address: 0x12f704, Func Offset: 0xe4
	// Line 659, Address: 0x12f714, Func Offset: 0xf4
	// Line 660, Address: 0x12f72c, Func Offset: 0x10c
	// Line 664, Address: 0x12f744, Func Offset: 0x124
	// Func End, Address: 0x12f754, Func Offset: 0x134
}

// 
// Start address: 0x12f760
int CompareByIntensity(void* xx, void* yy)
{
	Light* y;
	Light* x;
	Light** yp;
	Light** xp;
	// Line 671, Address: 0x12f760, Func Offset: 0
	// Line 672, Address: 0x12f784, Func Offset: 0x24
	// Line 673, Address: 0x12f788, Func Offset: 0x28
	// Line 674, Address: 0x12f78c, Func Offset: 0x2c
	// Line 675, Address: 0x12f790, Func Offset: 0x30
	// Line 676, Address: 0x12f794, Func Offset: 0x34
	// Line 677, Address: 0x12f7e8, Func Offset: 0x88
	// Func End, Address: 0x12f80c, Func Offset: 0xac
}

// 
// Start address: 0x12f810
int CompareByInfluence(void* xx, void* yy)
{
	Light* y;
	Light* x;
	Light** yp;
	Light** xp;
	// Line 684, Address: 0x12f810, Func Offset: 0
	// Line 685, Address: 0x12f834, Func Offset: 0x24
	// Line 686, Address: 0x12f838, Func Offset: 0x28
	// Line 687, Address: 0x12f83c, Func Offset: 0x2c
	// Line 688, Address: 0x12f840, Func Offset: 0x30
	// Line 689, Address: 0x12f844, Func Offset: 0x34
	// Line 690, Address: 0x12f898, Func Offset: 0x88
	// Func End, Address: 0x12f8bc, Func Offset: 0xac
}

// 
// Start address: 0x12f8c0
void UpdateViewParams()
{
	Light* l;
	int i;
	float wvm[4][4];
	// Line 710, Address: 0x12f8c0, Func Offset: 0
	// Line 713, Address: 0x12f8d0, Func Offset: 0x10
	// Line 714, Address: 0x12f8e4, Func Offset: 0x24
	// Line 715, Address: 0x12f8f0, Func Offset: 0x30
	// Line 717, Address: 0x12f900, Func Offset: 0x40
	// Line 718, Address: 0x12f92c, Func Offset: 0x6c
	// Line 724, Address: 0x12f930, Func Offset: 0x70
	// Line 725, Address: 0x12f944, Func Offset: 0x84
	// Line 728, Address: 0x12f958, Func Offset: 0x98
	// Line 729, Address: 0x12f96c, Func Offset: 0xac
	// Func End, Address: 0x12f984, Func Offset: 0xc4
}

// 
// Start address: 0x12f990
void UpdateParallels()
{
	float lcm[4];
	float vnlm[4];
	float nlm[4];
	Light* l;
	Light* plp;
	int i;
	int offset;
	int matrix_no;
	int n_parallels;
	Light* tmplight[8];
	// Line 738, Address: 0x12f990, Func Offset: 0
	// Line 740, Address: 0x12f9bc, Func Offset: 0x2c
	// Line 741, Address: 0x12f9c0, Func Offset: 0x30
	// Line 745, Address: 0x12f9c4, Func Offset: 0x34
	// Line 746, Address: 0x12f9cc, Func Offset: 0x3c
	// Line 747, Address: 0x12f9d4, Func Offset: 0x44
	// Line 748, Address: 0x12f9e0, Func Offset: 0x50
	// Line 749, Address: 0x12fa04, Func Offset: 0x74
	// Line 750, Address: 0x12fa28, Func Offset: 0x98
	// Line 751, Address: 0x12fa4c, Func Offset: 0xbc
	// Line 754, Address: 0x12fa5c, Func Offset: 0xcc
	// Line 755, Address: 0x12fa68, Func Offset: 0xd8
	// Line 756, Address: 0x12fa78, Func Offset: 0xe8
	// Line 758, Address: 0x12fa90, Func Offset: 0x100
	// Line 762, Address: 0x12faac, Func Offset: 0x11c
	// Line 764, Address: 0x12fac8, Func Offset: 0x138
	// Line 766, Address: 0x12fad0, Func Offset: 0x140
	// Line 768, Address: 0x12fae4, Func Offset: 0x154
	// Line 769, Address: 0x12fae8, Func Offset: 0x158
	// Line 772, Address: 0x12fafc, Func Offset: 0x16c
	// Line 775, Address: 0x12fb18, Func Offset: 0x188
	// Line 776, Address: 0x12fb1c, Func Offset: 0x18c
	// Line 777, Address: 0x12fb20, Func Offset: 0x190
	// Line 778, Address: 0x12fb2c, Func Offset: 0x19c
	// Line 779, Address: 0x12fb38, Func Offset: 0x1a8
	// Line 781, Address: 0x12fb50, Func Offset: 0x1c0
	// Line 782, Address: 0x12fb5c, Func Offset: 0x1cc
	// Line 783, Address: 0x12fb70, Func Offset: 0x1e0
	// Line 784, Address: 0x12fb84, Func Offset: 0x1f4
	// Line 785, Address: 0x12fb98, Func Offset: 0x208
	// Line 786, Address: 0x12fba8, Func Offset: 0x218
	// Line 787, Address: 0x12fbb8, Func Offset: 0x228
	// Line 788, Address: 0x12fbc8, Func Offset: 0x238
	// Line 789, Address: 0x12fbd8, Func Offset: 0x248
	// Line 790, Address: 0x12fbe8, Func Offset: 0x258
	// Line 795, Address: 0x12fbf8, Func Offset: 0x268
	// Line 796, Address: 0x12fc08, Func Offset: 0x278
	// Line 797, Address: 0x12fc18, Func Offset: 0x288
	// Line 802, Address: 0x12fc28, Func Offset: 0x298
	// Line 806, Address: 0x12fc38, Func Offset: 0x2a8
	// Line 807, Address: 0x12fc3c, Func Offset: 0x2ac
	// Line 808, Address: 0x12fc60, Func Offset: 0x2d0
	// Line 809, Address: 0x12fc64, Func Offset: 0x2d4
	// Line 811, Address: 0x12fc68, Func Offset: 0x2d8
	// Line 814, Address: 0x12fc7c, Func Offset: 0x2ec
	// Line 815, Address: 0x12fc80, Func Offset: 0x2f0
	// Line 818, Address: 0x12fc94, Func Offset: 0x304
	// Line 819, Address: 0x12fcc0, Func Offset: 0x330
	// Func End, Address: 0x12fcf4, Func Offset: 0x364
}

// 
// Start address: 0x12fd00
void UpdateReflections()
{
	float* dir_y;
	float vnhm[4];
	float nhm[4];
	float vnlm[4];
	float nlm[4];
	float vhv[4];
	float hv[4];
	float* dir_z;
	Light* l;
	Light* l;
	int i;
	float vwm[4][4];
	float wvm[4][4];
	int n_reflections;
	Light* a[8];
	float nhm3[4];
	// Line 828, Address: 0x12fd00, Func Offset: 0
	// Line 830, Address: 0x12fd2c, Func Offset: 0x2c
	// Line 836, Address: 0x12fd30, Func Offset: 0x30
	// Line 837, Address: 0x12fd3c, Func Offset: 0x3c
	// Line 838, Address: 0x12fd54, Func Offset: 0x54
	// Line 841, Address: 0x12fd6c, Func Offset: 0x6c
	// Line 842, Address: 0x12fd78, Func Offset: 0x78
	// Line 843, Address: 0x12fd88, Func Offset: 0x88
	// Line 845, Address: 0x12fda0, Func Offset: 0xa0
	// Line 847, Address: 0x12fdb4, Func Offset: 0xb4
	// Line 848, Address: 0x12fdb8, Func Offset: 0xb8
	// Line 849, Address: 0x12fdcc, Func Offset: 0xcc
	// Line 854, Address: 0x12fdd4, Func Offset: 0xd4
	// Line 856, Address: 0x12fde8, Func Offset: 0xe8
	// Line 857, Address: 0x12fdf8, Func Offset: 0xf8
	// Line 860, Address: 0x12fe08, Func Offset: 0x108
	// Line 864, Address: 0x12fe24, Func Offset: 0x124
	// Line 865, Address: 0x12fe28, Func Offset: 0x128
	// Line 869, Address: 0x12fe2c, Func Offset: 0x12c
	// Line 870, Address: 0x12fe40, Func Offset: 0x140
	// Line 871, Address: 0x12fe50, Func Offset: 0x150
	// Line 872, Address: 0x12fe68, Func Offset: 0x168
	// Line 876, Address: 0x12fe78, Func Offset: 0x178
	// Line 877, Address: 0x12fe80, Func Offset: 0x180
	// Line 878, Address: 0x12fe88, Func Offset: 0x188
	// Line 879, Address: 0x12fe90, Func Offset: 0x190
	// Line 880, Address: 0x12fe98, Func Offset: 0x198
	// Line 881, Address: 0x12fea0, Func Offset: 0x1a0
	// Line 882, Address: 0x12fea8, Func Offset: 0x1a8
	// Line 883, Address: 0x12feb0, Func Offset: 0x1b0
	// Line 884, Address: 0x12feb8, Func Offset: 0x1b8
	// Line 890, Address: 0x12fed4, Func Offset: 0x1d4
	// Line 891, Address: 0x12fedc, Func Offset: 0x1dc
	// Line 892, Address: 0x12fee4, Func Offset: 0x1e4
	// Line 894, Address: 0x12feec, Func Offset: 0x1ec
	// Line 895, Address: 0x12ff34, Func Offset: 0x234
	// Line 897, Address: 0x12ff44, Func Offset: 0x244
	// Line 898, Address: 0x12ff58, Func Offset: 0x258
	// Line 899, Address: 0x12ff6c, Func Offset: 0x26c
	// Line 900, Address: 0x12ff7c, Func Offset: 0x27c
	// Line 901, Address: 0x12ff8c, Func Offset: 0x28c
	// Line 902, Address: 0x12ff9c, Func Offset: 0x29c
	// Line 903, Address: 0x12ffb0, Func Offset: 0x2b0
	// Line 904, Address: 0x12ffc0, Func Offset: 0x2c0
	// Line 906, Address: 0x12ffd4, Func Offset: 0x2d4
	// Line 907, Address: 0x13001c, Func Offset: 0x31c
	// Line 909, Address: 0x13002c, Func Offset: 0x32c
	// Line 910, Address: 0x130044, Func Offset: 0x344
	// Line 911, Address: 0x130058, Func Offset: 0x358
	// Line 912, Address: 0x130068, Func Offset: 0x368
	// Line 913, Address: 0x130078, Func Offset: 0x378
	// Line 914, Address: 0x130088, Func Offset: 0x388
	// Line 915, Address: 0x13009c, Func Offset: 0x39c
	// Line 916, Address: 0x1300ac, Func Offset: 0x3ac
	// Line 918, Address: 0x1300c0, Func Offset: 0x3c0
	// Line 921, Address: 0x1300d4, Func Offset: 0x3d4
	// Func End, Address: 0x130108, Func Offset: 0x408
}

// 
// Start address: 0x130110
void UpdateExtras(float* center, float radius)
{
	Light* l;
	Light* l;
	int i;
	int n_extras;
	Light* a[8];
	// Line 932, Address: 0x130110, Func Offset: 0
	// Line 934, Address: 0x130134, Func Offset: 0x24
	// Line 938, Address: 0x130138, Func Offset: 0x28
	// Line 942, Address: 0x130140, Func Offset: 0x30
	// Line 943, Address: 0x13014c, Func Offset: 0x3c
	// Line 944, Address: 0x13015c, Func Offset: 0x4c
	// Line 947, Address: 0x130180, Func Offset: 0x70
	// Line 948, Address: 0x130194, Func Offset: 0x84
	// Line 952, Address: 0x1301b0, Func Offset: 0xa0
	// Line 954, Address: 0x1301c4, Func Offset: 0xb4
	// Line 955, Address: 0x1301c8, Func Offset: 0xb8
	// Line 956, Address: 0x1301dc, Func Offset: 0xcc
	// Line 961, Address: 0x1301e4, Func Offset: 0xd4
	// Line 962, Address: 0x130200, Func Offset: 0xf0
	// Line 964, Address: 0x130224, Func Offset: 0x114
	// Line 965, Address: 0x130230, Func Offset: 0x120
	// Line 966, Address: 0x13023c, Func Offset: 0x12c
	// Line 967, Address: 0x130250, Func Offset: 0x140
	// Line 968, Address: 0x13026c, Func Offset: 0x15c
	// Func End, Address: 0x130290, Func Offset: 0x180
}

// 
// Start address: 0x130290
void LightUpdateInfoByScene()
{
	// Line 978, Address: 0x130290, Func Offset: 0
	// Line 985, Address: 0x130298, Func Offset: 0x8
	// Line 988, Address: 0x1302a0, Func Offset: 0x10
	// Line 992, Address: 0x1302a8, Func Offset: 0x18
	// Line 996, Address: 0x1302b0, Func Offset: 0x20
	// Func End, Address: 0x1302c0, Func Offset: 0x30
}

// 
// Start address: 0x1302c0
void LightUpdateInfoByPos(float* center, float radius)
{
	// Line 1005, Address: 0x1302c0, Func Offset: 0
	// Line 1006, Address: 0x1302d0, Func Offset: 0x10
	// Line 1008, Address: 0x1302e0, Func Offset: 0x20
	// Func End, Address: 0x1302f0, Func Offset: 0x30
}

// 
// Start address: 0x1302f0
int LightNValidParallelMatrices()
{
	// Line 1038, Address: 0x1302f0, Func Offset: 0
	// Line 1039, Address: 0x130314, Func Offset: 0x24
	// Func End, Address: 0x13031c, Func Offset: 0x2c
}

// 
// Start address: 0x130320
void LightGetNthViewNLM(float nlm[4], int n)
{
	// Line 1052, Address: 0x130320, Func Offset: 0
	// Line 1053, Address: 0x130330, Func Offset: 0x10
	// Line 1054, Address: 0x130364, Func Offset: 0x44
	// Line 1055, Address: 0x130388, Func Offset: 0x68
	// Func End, Address: 0x130398, Func Offset: 0x78
}

// 
// Start address: 0x1303a0
void LightGetNthLCM(float lcm[4], int n)
{
	// Line 1062, Address: 0x1303a0, Func Offset: 0
	// Line 1063, Address: 0x1303b0, Func Offset: 0x10
	// Line 1064, Address: 0x1303e4, Func Offset: 0x44
	// Line 1065, Address: 0x130408, Func Offset: 0x68
	// Func End, Address: 0x130418, Func Offset: 0x78
}

// 
// Start address: 0x130420
float LightReflectionBrightness()
{
	// Line 1073, Address: 0x130420, Func Offset: 0
	// Line 1074, Address: 0x130428, Func Offset: 0x8
	// Func End, Address: 0x130430, Func Offset: 0x10
}

// 
// Start address: 0x130430
void LightGetReflectionColor(float* color)
{
	// Line 1081, Address: 0x130430, Func Offset: 0
	// Line 1082, Address: 0x13043c, Func Offset: 0xc
	// Line 1083, Address: 0x130450, Func Offset: 0x20
	// Func End, Address: 0x130460, Func Offset: 0x30
}

// 
// Start address: 0x130460
float* LightReflectionColor()
{
	// Line 1091, Address: 0x130460, Func Offset: 0
	// Line 1092, Address: 0x130468, Func Offset: 0x8
	// Func End, Address: 0x130470, Func Offset: 0x10
}

// 
// Start address: 0x130470
void LightGetNthViewNHM(float nhm[4])
{
	// Line 1104, Address: 0x130470, Func Offset: 0
	// Line 1105, Address: 0x13047c, Func Offset: 0xc
	// Line 1106, Address: 0x130490, Func Offset: 0x20
	// Func End, Address: 0x1304a0, Func Offset: 0x30
}

// 
// Start address: 0x1304a0
int LightNValidExtras()
{
	// Line 1114, Address: 0x1304a0, Func Offset: 0
	// Line 1115, Address: 0x1304a8, Func Offset: 0x8
	// Func End, Address: 0x1304b0, Func Offset: 0x10
}

// 
// Start address: 0x1304b0
Light* LightNthValidExtra(int n)
{
	// Line 1122, Address: 0x1304b0, Func Offset: 0
	// Line 1123, Address: 0x1304bc, Func Offset: 0xc
	// Line 1124, Address: 0x1304f0, Func Offset: 0x40
	// Line 1125, Address: 0x130508, Func Offset: 0x58
	// Line 1127, Address: 0x130528, Func Offset: 0x78
	// Line 1129, Address: 0x13052c, Func Offset: 0x7c
	// Func End, Address: 0x13053c, Func Offset: 0x8c
}

