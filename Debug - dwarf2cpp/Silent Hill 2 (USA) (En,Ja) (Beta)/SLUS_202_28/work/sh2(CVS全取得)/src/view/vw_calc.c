typedef struct _VbCOORDINATE;
typedef struct _VbRVIEW;
typedef struct _anon0;
typedef struct _VbWVSMATRIX;


typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4][4];

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

struct _anon0
{
	short vx;
	short vy;
	short vz;
	short pad;
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

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
// Start address: 0x19e640
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
	// Line 235, Address: 0x19e640, Func Offset: 0
	// Line 240, Address: 0x19e68c, Func Offset: 0x4c
	// Line 242, Address: 0x19e6ac, Func Offset: 0x6c
	// Line 245, Address: 0x19e6bc, Func Offset: 0x7c
	// Line 248, Address: 0x19e6c8, Func Offset: 0x88
	// Line 250, Address: 0x19e6d4, Func Offset: 0x94
	// Line 251, Address: 0x19e6e8, Func Offset: 0xa8
	// Line 257, Address: 0x19e6fc, Func Offset: 0xbc
	// Line 259, Address: 0x19e718, Func Offset: 0xd8
	// Line 262, Address: 0x19e728, Func Offset: 0xe8
	// Line 264, Address: 0x19e738, Func Offset: 0xf8
	// Line 265, Address: 0x19e758, Func Offset: 0x118
	// Line 278, Address: 0x19e778, Func Offset: 0x138
	// Line 280, Address: 0x19e78c, Func Offset: 0x14c
	// Line 281, Address: 0x19e798, Func Offset: 0x158
	// Line 284, Address: 0x19e7b0, Func Offset: 0x170
	// Line 285, Address: 0x19e7b8, Func Offset: 0x178
	// Line 287, Address: 0x19e7c4, Func Offset: 0x184
	// Line 292, Address: 0x19e7d8, Func Offset: 0x198
	// Line 298, Address: 0x19e808, Func Offset: 0x1c8
	// Func End, Address: 0x19e83c, Func Offset: 0x1fc
}

// 
// Start address: 0x19e840
void vwLimitOverLimVector(float* vec_xz, float lim_vec_len, float lim_vec_ang_y)
{
	float over_spd;
	float lim_spd_dir_vec_xz[4];
	// Line 320, Address: 0x19e840, Func Offset: 0
	// Line 325, Address: 0x19e858, Func Offset: 0x18
	// Line 328, Address: 0x19e868, Func Offset: 0x28
	// Line 332, Address: 0x19e888, Func Offset: 0x48
	// Line 334, Address: 0x19e8a0, Func Offset: 0x60
	// Line 335, Address: 0x19e8ac, Func Offset: 0x6c
	// Line 337, Address: 0x19e8c0, Func Offset: 0x80
	// Func End, Address: 0x19e8d8, Func Offset: 0x98
}

// 
// Start address: 0x19e8e0
void vwDecreaseSideOfVector(float* vec_xz, float dec_val, float max_side_vec_len, float dir_ang_y)
{
	float sv_val;
	float side_val;
	// Line 360, Address: 0x19e8e0, Func Offset: 0
	// Line 363, Address: 0x19e90c, Func Offset: 0x2c
	// Line 367, Address: 0x19e950, Func Offset: 0x70
	// Line 369, Address: 0x19e98c, Func Offset: 0xac
	// Line 370, Address: 0x19e9a8, Func Offset: 0xc8
	// Line 371, Address: 0x19e9c8, Func Offset: 0xe8
	// Line 373, Address: 0x19e9cc, Func Offset: 0xec
	// Line 374, Address: 0x19e9ec, Func Offset: 0x10c
	// Line 375, Address: 0x19ea08, Func Offset: 0x128
	// Func End, Address: 0x19ea30, Func Offset: 0x150
}

// 
// Start address: 0x19ea30
float vwRetNewVelocityToTargetVal(float now_spd, float mv_pos, float tgt_pos, float accel, float total_max_spd, float dec_val_lim_spd)
{
	float abs_lim_spd;
	float left;
	float new_velo;
	// Line 405, Address: 0x19ea30, Func Offset: 0
	// Line 410, Address: 0x19ea5c, Func Offset: 0x2c
	// Line 412, Address: 0x19ea60, Func Offset: 0x30
	// Line 413, Address: 0x19ea78, Func Offset: 0x48
	// Line 415, Address: 0x19ea90, Func Offset: 0x60
	// Line 418, Address: 0x19eaa0, Func Offset: 0x70
	// Line 421, Address: 0x19eae0, Func Offset: 0xb0
	// Line 422, Address: 0x19eae8, Func Offset: 0xb8
	// Line 423, Address: 0x19eb00, Func Offset: 0xd0
	// Line 425, Address: 0x19eb0c, Func Offset: 0xdc
	// Line 428, Address: 0x19eb18, Func Offset: 0xe8
	// Func End, Address: 0x19eb3c, Func Offset: 0x10c
}

// 
// Start address: 0x19eb40
float vwRetNewAngSpdToTargetAng(float now_ang_spd, float now_ang, float tgt_ang, float accel_spd, float total_max_ang_spd, float dec_val_lim_spd)
{
	float ret_ang_spd;
	// Line 457, Address: 0x19eb40, Func Offset: 0
	// Line 460, Address: 0x19eb68, Func Offset: 0x28
	// Line 471, Address: 0x19eba4, Func Offset: 0x64
	// Func End, Address: 0x19ebc4, Func Offset: 0x84
}

// 
// Start address: 0x19ebd0
void vwAngleToVector(float* vec, float* ang, float r)
{
	float entou_r;
	// Line 765, Address: 0x19ebd0, Func Offset: 0
	// Line 768, Address: 0x19ebf4, Func Offset: 0x24
	// Line 769, Address: 0x19ec04, Func Offset: 0x34
	// Line 770, Address: 0x19ec1c, Func Offset: 0x4c
	// Line 771, Address: 0x19ec30, Func Offset: 0x60
	// Line 772, Address: 0x19ec44, Func Offset: 0x74
	// Func End, Address: 0x19ec64, Func Offset: 0x94
}

// 
// Start address: 0x19ec70
float vwVectorToAngle(float* ang, float* vec)
{
	float ret_r;
	// Line 792, Address: 0x19ec70, Func Offset: 0
	// Line 795, Address: 0x19ec8c, Func Offset: 0x1c
	// Line 797, Address: 0x19eca8, Func Offset: 0x38
	// Line 798, Address: 0x19ecd4, Func Offset: 0x64
	// Line 799, Address: 0x19ece4, Func Offset: 0x74
	// Line 801, Address: 0x19ece8, Func Offset: 0x78
	// Line 802, Address: 0x19ecec, Func Offset: 0x7c
	// Func End, Address: 0x19ed08, Func Offset: 0x98
}

// 
// Start address: 0x19ed10
int vwOresenHokan(int* y_ary, int y_suu, int input_x, int min_x, int max_x)
{
	int kukan_no;
	int kukan_w;
	int amari;
	int output_y;
	// Line 834, Address: 0x19ed10, Func Offset: 0
	// Line 835, Address: 0x19ed1c, Func Offset: 0xc
	// Line 836, Address: 0x19ed30, Func Offset: 0x20
	// Line 837, Address: 0x19ed3c, Func Offset: 0x2c
	// Line 843, Address: 0x19ed48, Func Offset: 0x38
	// Line 844, Address: 0x19ed60, Func Offset: 0x50
	// Line 845, Address: 0x19ed74, Func Offset: 0x64
	// Line 846, Address: 0x19ed80, Func Offset: 0x70
	// Line 847, Address: 0x19ed94, Func Offset: 0x84
	// Line 848, Address: 0x19ed9c, Func Offset: 0x8c
	// Line 852, Address: 0x19eda8, Func Offset: 0x98
	// Line 853, Address: 0x19edb8, Func Offset: 0xa8
	// Line 859, Address: 0x19ede8, Func Offset: 0xd8
	// Func End, Address: 0x19edf0, Func Offset: 0xe0
}

// 
// Start address: 0x19edf0
void vwRotMatrixYXZ(float* rot, float mat[4])
{
	// Line 877, Address: 0x19edf0, Func Offset: 0
	// Line 879, Address: 0x19ee08, Func Offset: 0x18
	// Line 880, Address: 0x19ee18, Func Offset: 0x28
	// Line 881, Address: 0x19ee2c, Func Offset: 0x3c
	// Line 882, Address: 0x19ee40, Func Offset: 0x50
	// Func End, Address: 0x19ee58, Func Offset: 0x68
}

// 
// Start address: 0x19ee60
void vwMatrixToAngleYXZ(float* ang, float mat[4])
{
	float r_xz;
	// Line 958, Address: 0x19ee60, Func Offset: 0
	// Line 961, Address: 0x19ee78, Func Offset: 0x18
	// Line 963, Address: 0x19eeb8, Func Offset: 0x58
	// Line 964, Address: 0x19eed0, Func Offset: 0x70
	// Line 966, Address: 0x19eee4, Func Offset: 0x84
	// Line 967, Address: 0x19ef04, Func Offset: 0xa4
	// Line 968, Address: 0x19ef08, Func Offset: 0xa8
	// Line 970, Address: 0x19ef1c, Func Offset: 0xbc
	// Line 971, Address: 0x19ef44, Func Offset: 0xe4
	// Line 972, Address: 0x19ef48, Func Offset: 0xe8
	// Line 974, Address: 0x19ef64, Func Offset: 0x104
	// Line 975, Address: 0x19ef6c, Func Offset: 0x10c
	// Line 977, Address: 0x19ef80, Func Offset: 0x120
	// Line 981, Address: 0x19ef94, Func Offset: 0x134
	// Line 982, Address: 0x19efd4, Func Offset: 0x174
	// Func End, Address: 0x19efec, Func Offset: 0x18c
}

// 
// Start address: 0x19eff0
float vwRet3DLength(float x, float y, float z)
{
	// Line 1006, Address: 0x19eff0, Func Offset: 0
	// Line 1007, Address: 0x19f010, Func Offset: 0x20
	// Func End, Address: 0x19f018, Func Offset: 0x28
}

