typedef struct _anon0;
typedef struct _VbCOORDINATE;
typedef struct _VbRVIEW;
typedef struct _VbWVSMATRIX;


typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4][4];

struct _anon0
{
	short vx;
	short vy;
	short vz;
	short pad;
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

struct _VbRVIEW
{
	float vp[4];
	float vr[4];
	float rz;
	_VbCOORDINATE* super;
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

float dtf;
float VwCrdWsRotMat[4][4];
_VbWVSMATRIX VbWvsMatrix;
float VwCrdVwMat[4][4];

void vwRenewalXZVelocityToTargetPos(float* velo_xz, float* now_pos, float* tgt_pos, float tgt_r, float accel, float total_max_spd, float dec_forwd_lim_spd, float dec_accel_side);
void vwLimitOverLimVector(float* vec_xz, float lim_vec_len, float lim_vec_ang_y);
void vwDecreaseSideOfVector(float* vec_xz, float dec_val, float max_side_vec_len, float dir_ang_y);
float vwRetNewVelocityToTargetVal(float now_spd, float mv_pos, float tgt_pos, float accel, float total_max_spd, float dec_val_lim_spd);
float vwRetNewAngSpdToTargetAng(float now_ang_spd, float now_ang, float tgt_ang, float accel_spd, float total_max_ang_spd, float dec_val_lim_spd);
void vwAngleToVector(float* vec, float* ang, float r);
float vwVectorToAngle(float* ang, float* vec);
int vwOresenHokan(int* y_ary, int y_suu, int input_x, int min_x, int max_x);
void vwRotMatrixYXZ(float* rot, float mat[4]);
void vwMatrixToAngleYXZ(float* ang, float mat[4]);
float vwRet3DLength(float x, float y, float z);

// 
// Start address: 0x1a2bc0
void vwRenewalXZVelocityToTargetPos(float* velo_xz, float* now_pos, float* tgt_pos, float tgt_r, float accel, float total_max_spd, float dec_forwd_lim_spd, float dec_accel_side)
{
	float vec_xz[4];
	float lim_spd;
	float to_tgt_dist;
	float to_tgt_ang_y;
	float ang_y;
	float spd;
	float add_spd;
	float cam2tgt_dir_vec[4];
	float cam_mv_ang_y;
	float cam2tgt_ang_y;
	// Line 235, Address: 0x1a2bc0, Func Offset: 0
	// Line 240, Address: 0x1a2c0c, Func Offset: 0x4c
	// Line 242, Address: 0x1a2c2c, Func Offset: 0x6c
	// Line 245, Address: 0x1a2c3c, Func Offset: 0x7c
	// Line 248, Address: 0x1a2c48, Func Offset: 0x88
	// Line 250, Address: 0x1a2c54, Func Offset: 0x94
	// Line 251, Address: 0x1a2c68, Func Offset: 0xa8
	// Line 257, Address: 0x1a2c7c, Func Offset: 0xbc
	// Line 259, Address: 0x1a2c98, Func Offset: 0xd8
	// Line 262, Address: 0x1a2ca8, Func Offset: 0xe8
	// Line 264, Address: 0x1a2cb8, Func Offset: 0xf8
	// Line 265, Address: 0x1a2cd8, Func Offset: 0x118
	// Line 278, Address: 0x1a2cf8, Func Offset: 0x138
	// Line 280, Address: 0x1a2d0c, Func Offset: 0x14c
	// Line 281, Address: 0x1a2d1c, Func Offset: 0x15c
	// Line 284, Address: 0x1a2d34, Func Offset: 0x174
	// Line 285, Address: 0x1a2d3c, Func Offset: 0x17c
	// Line 287, Address: 0x1a2d48, Func Offset: 0x188
	// Line 292, Address: 0x1a2d5c, Func Offset: 0x19c
	// Line 298, Address: 0x1a2d88, Func Offset: 0x1c8
	// Func End, Address: 0x1a2dbc, Func Offset: 0x1fc
}

// 
// Start address: 0x1a2dc0
void vwLimitOverLimVector(float* vec_xz, float lim_vec_len, float lim_vec_ang_y)
{
	float over_spd;
	float lim_spd_dir_vec_xz[4];
	// Line 320, Address: 0x1a2dc0, Func Offset: 0
	// Line 325, Address: 0x1a2dd4, Func Offset: 0x14
	// Line 328, Address: 0x1a2de4, Func Offset: 0x24
	// Line 332, Address: 0x1a2e14, Func Offset: 0x54
	// Line 334, Address: 0x1a2e30, Func Offset: 0x70
	// Line 335, Address: 0x1a2e50, Func Offset: 0x90
	// Line 337, Address: 0x1a2e6c, Func Offset: 0xac
	// Func End, Address: 0x1a2e7c, Func Offset: 0xbc
}

// 
// Start address: 0x1a2e80
void vwDecreaseSideOfVector(float* vec_xz, float dec_val, float max_side_vec_len, float dir_ang_y)
{
	float sv_val;
	float side_val;
	// Line 360, Address: 0x1a2e80, Func Offset: 0
	// Line 363, Address: 0x1a2e9c, Func Offset: 0x1c
	// Line 367, Address: 0x1a2ef8, Func Offset: 0x78
	// Line 369, Address: 0x1a2f68, Func Offset: 0xe8
	// Line 370, Address: 0x1a2f98, Func Offset: 0x118
	// Line 371, Address: 0x1a2fcc, Func Offset: 0x14c
	// Line 373, Address: 0x1a2fd8, Func Offset: 0x158
	// Line 374, Address: 0x1a3018, Func Offset: 0x198
	// Line 375, Address: 0x1a3054, Func Offset: 0x1d4
	// Func End, Address: 0x1a3068, Func Offset: 0x1e8
}

// 
// Start address: 0x1a3070
float vwRetNewVelocityToTargetVal(float now_spd, float mv_pos, float tgt_pos, float accel, float total_max_spd, float dec_val_lim_spd)
{
	float abs_lim_spd;
	float left;
	float new_velo;
	// Line 410, Address: 0x1a3070, Func Offset: 0
	// Line 412, Address: 0x1a3074, Func Offset: 0x4
	// Line 413, Address: 0x1a308c, Func Offset: 0x1c
	// Line 415, Address: 0x1a30a4, Func Offset: 0x34
	// Line 418, Address: 0x1a30b8, Func Offset: 0x48
	// Line 421, Address: 0x1a30f8, Func Offset: 0x88
	// Line 422, Address: 0x1a3104, Func Offset: 0x94
	// Line 423, Address: 0x1a311c, Func Offset: 0xac
	// Line 425, Address: 0x1a3128, Func Offset: 0xb8
	// Line 428, Address: 0x1a3134, Func Offset: 0xc4
	// Func End, Address: 0x1a313c, Func Offset: 0xcc
}

// 
// Start address: 0x1a3140
float vwRetNewAngSpdToTargetAng(float now_ang_spd, float now_ang, float tgt_ang, float accel_spd, float total_max_ang_spd, float dec_val_lim_spd)
{
	float ret_ang_spd;
	// Line 457, Address: 0x1a3140, Func Offset: 0
	// Line 460, Address: 0x1a3160, Func Offset: 0x20
	// Line 470, Address: 0x1a31a8, Func Offset: 0x68
	// Line 471, Address: 0x1a31ac, Func Offset: 0x6c
	// Func End, Address: 0x1a31bc, Func Offset: 0x7c
}

// 
// Start address: 0x1a31c0
void vwAngleToVector(float* vec, float* ang, float r)
{
	float entou_r;
	// Line 765, Address: 0x1a31c0, Func Offset: 0
	// Line 768, Address: 0x1a31d4, Func Offset: 0x14
	// Line 769, Address: 0x1a31f0, Func Offset: 0x30
	// Line 770, Address: 0x1a3214, Func Offset: 0x54
	// Line 771, Address: 0x1a3234, Func Offset: 0x74
	// Line 772, Address: 0x1a3254, Func Offset: 0x94
	// Func End, Address: 0x1a3264, Func Offset: 0xa4
}

// 
// Start address: 0x1a3270
float vwVectorToAngle(float* ang, float* vec)
{
	float ret_r;
	// Line 792, Address: 0x1a3270, Func Offset: 0
	// Line 795, Address: 0x1a328c, Func Offset: 0x1c
	// Line 797, Address: 0x1a32a8, Func Offset: 0x38
	// Line 798, Address: 0x1a32d4, Func Offset: 0x64
	// Line 799, Address: 0x1a32e4, Func Offset: 0x74
	// Line 801, Address: 0x1a32f0, Func Offset: 0x80
	// Line 802, Address: 0x1a32f4, Func Offset: 0x84
	// Func End, Address: 0x1a3310, Func Offset: 0xa0
}

// 
// Start address: 0x1a3310
int vwOresenHokan(int* y_ary, int y_suu, int input_x, int min_x, int max_x)
{
	int kukan_no;
	int kukan_w;
	int amari;
	int output_y;
	// Line 831, Address: 0x1a3310, Func Offset: 0
	// Line 834, Address: 0x1a3338, Func Offset: 0x28
	// Line 835, Address: 0x1a334c, Func Offset: 0x3c
	// Line 836, Address: 0x1a336c, Func Offset: 0x5c
	// Line 837, Address: 0x1a3380, Func Offset: 0x70
	// Line 843, Address: 0x1a3390, Func Offset: 0x80
	// Line 844, Address: 0x1a33b4, Func Offset: 0xa4
	// Line 845, Address: 0x1a33d0, Func Offset: 0xc0
	// Line 846, Address: 0x1a33e4, Func Offset: 0xd4
	// Line 847, Address: 0x1a3404, Func Offset: 0xf4
	// Line 848, Address: 0x1a340c, Func Offset: 0xfc
	// Line 852, Address: 0x1a341c, Func Offset: 0x10c
	// Line 853, Address: 0x1a3438, Func Offset: 0x128
	// Line 858, Address: 0x1a347c, Func Offset: 0x16c
	// Line 859, Address: 0x1a3480, Func Offset: 0x170
	// Func End, Address: 0x1a349c, Func Offset: 0x18c
}

// 
// Start address: 0x1a34a0
void vwRotMatrixYXZ(float* rot, float mat[4])
{
	// Line 877, Address: 0x1a34a0, Func Offset: 0
	// Line 879, Address: 0x1a34b0, Func Offset: 0x10
	// Line 880, Address: 0x1a34c8, Func Offset: 0x28
	// Line 881, Address: 0x1a34e0, Func Offset: 0x40
	// Line 882, Address: 0x1a34f8, Func Offset: 0x58
	// Func End, Address: 0x1a3508, Func Offset: 0x68
}

// 
// Start address: 0x1a3510
void vwMatrixToAngleYXZ(float* ang, float mat[4])
{
	float r_xz;
	// Line 958, Address: 0x1a3510, Func Offset: 0
	// Line 961, Address: 0x1a3528, Func Offset: 0x18
	// Line 963, Address: 0x1a3568, Func Offset: 0x58
	// Line 964, Address: 0x1a358c, Func Offset: 0x7c
	// Line 966, Address: 0x1a35a0, Func Offset: 0x90
	// Line 967, Address: 0x1a35c0, Func Offset: 0xb0
	// Line 968, Address: 0x1a35cc, Func Offset: 0xbc
	// Line 970, Address: 0x1a35e0, Func Offset: 0xd0
	// Line 971, Address: 0x1a3608, Func Offset: 0xf8
	// Line 972, Address: 0x1a3614, Func Offset: 0x104
	// Line 974, Address: 0x1a3630, Func Offset: 0x120
	// Line 975, Address: 0x1a3638, Func Offset: 0x128
	// Line 977, Address: 0x1a364c, Func Offset: 0x13c
	// Line 981, Address: 0x1a3660, Func Offset: 0x150
	// Line 982, Address: 0x1a36a0, Func Offset: 0x190
	// Func End, Address: 0x1a36b8, Func Offset: 0x1a8
}

// 
// Start address: 0x1a36c0
float vwRet3DLength(float x, float y, float z)
{
	// Line 1006, Address: 0x1a36c0, Func Offset: 0
	// Line 1007, Address: 0x1a36e4, Func Offset: 0x24
	// Func End, Address: 0x1a36ec, Func Offset: 0x2c
}

