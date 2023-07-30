typedef struct sgCamera;
typedef struct _anon0;
typedef enum sgFrustumPlaneNo : unsigned char;


typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[4];
typedef float type_3[4];
typedef float type_4[4];
typedef float type_5[4][8];
typedef float type_6[4][6];

struct sgCamera
{
	float view_world[4][4];
	float view_angle;
	float zoom_factor;
	float aspect;
	float near_z;
	float far_z;
	float vpm[4][4];
	float wvm[4][4];
	_anon0 view_frustum;
	float wpm[4][4];
	unsigned int dirty;
};

struct _anon0
{
	float v[4][8];
	float plane[4][6];
};

enum sgFrustumPlaneNo : unsigned char
{
	SG_VIEW_PLANE_NEAR_NO,
	SG_VIEW_PLANE_FAR_NO,
	SG_VIEW_PLANE_LEFT_NO,
	SG_VIEW_PLANE_RIGHT_NO,
	SG_VIEW_PLANE_UP_NO,
	SG_VIEW_PLANE_DOWN_NO
};

float sg_matrix_unit[4][4];

int GetPlaneFromVertices(float* plane, float* v0, float* v1, float* v2);
void sgCameraMakeZoomProjectionMatrix(sgCamera* cam, float cm[4], float zoom);
void sgCameraUpdateViewProjectionMatrix(sgCamera* cam);
void sgCameraUpdateViewFrustum(sgCamera* cam);
void UpdateViewForce(sgCamera* cam);
void UpdateCommonForce(sgCamera* cam);
void UpdateView(sgCamera* cam);
void sgCameraConstruct(sgCamera* cam);
float[4] sgCameraWorldViewMatrix(sgCamera* cam);
void sgCameraGetWorldViewMatrix(sgCamera* cam, float wvm[4]);
void sgCameraSetViewWorldMatrix(sgCamera* cam, float vwm[4]);
void sgCameraGetViewWorldMatrix(sgCamera* cam, float vwm[4]);
void sgCameraSetViewAngle(sgCamera* cam, float angle);
float sgCameraViewAngle(sgCamera* cam);
void sgCameraSetNearZ(sgCamera* cam, float near_z);
float sgCameraNearZ(sgCamera* cam);
void sgCameraSetFarZ(sgCamera* cam, float far_z);
float sgCameraFarZ(sgCamera* cam);
float[4] sgCameraViewProjectionMatrix(sgCamera* cam);
void sgCameraGetViewProjectionMatrix(sgCamera* cam, float vpm[4]);
void sgCameraGetViewProjectionMatrix_XYClipRatio(sgCamera* cam, float vpm[4], float xy_clip_ratio);
void sgCameraGetWorldProjectionMatrix(sgCamera* cam, float wpm[4]);
void sgCameraSetAspect(sgCamera* cam, float ratio);
float sgCameraAspect(sgCamera* cam);
void sgCameraSetZoomRatio(sgCamera* cam, float ratio);
float sgCameraZoomRatio(sgCamera* cam);
float* sgCameraPos(sgCamera* cam);
float* sgCameraDirZ(sgCamera* cam);
void sgCameraGetPos(sgCamera* cam, float* pos);
void sgCameraGetDirY(sgCamera* cam, float* v);
void sgCameraGetDirZ(sgCamera* cam, float* v);

// 
// Start address: 0x148320
int GetPlaneFromVertices(float* plane, float* v0, float* v1, float* v2)
{
	float dv[4];
	float dv0[4];
	float dv1[4];
	// Line 64, Address: 0x148320, Func Offset: 0
	// Line 69, Address: 0x148328, Func Offset: 0x8
	// Line 64, Address: 0x14832c, Func Offset: 0xc
	// Line 69, Address: 0x14833c, Func Offset: 0x1c
	// Line 70, Address: 0x14834c, Func Offset: 0x2c
	// Line 71, Address: 0x148360, Func Offset: 0x40
	// Line 73, Address: 0x148384, Func Offset: 0x64
	// Line 74, Address: 0x148440, Func Offset: 0x120
	// Line 77, Address: 0x148448, Func Offset: 0x128
	// Line 78, Address: 0x148470, Func Offset: 0x150
	// Line 80, Address: 0x14847c, Func Offset: 0x15c
	// Line 81, Address: 0x1484b4, Func Offset: 0x194
	// Line 82, Address: 0x1484bc, Func Offset: 0x19c
	// Line 84, Address: 0x1484c0, Func Offset: 0x1a0
	// Line 86, Address: 0x1484e4, Func Offset: 0x1c4
	// Line 84, Address: 0x1484e8, Func Offset: 0x1c8
	// Line 86, Address: 0x1484ec, Func Offset: 0x1cc
	// Line 87, Address: 0x1484f0, Func Offset: 0x1d0
	// Func End, Address: 0x148504, Func Offset: 0x1e4
}

// 
// Start address: 0x148510
void sgCameraMakeZoomProjectionMatrix(sgCamera* cam, float cm[4], float zoom)
{
	float r;
	float l;
	float t;
	float b;
	float n;
	float f;
	float as;
	float angle;
	// Line 110, Address: 0x148510, Func Offset: 0
	// Line 118, Address: 0x148544, Func Offset: 0x34
	// Line 119, Address: 0x148550, Func Offset: 0x40
	// Line 120, Address: 0x14855c, Func Offset: 0x4c
	// Line 119, Address: 0x148560, Func Offset: 0x50
	// Line 120, Address: 0x148574, Func Offset: 0x64
	// Line 121, Address: 0x148580, Func Offset: 0x70
	// Line 122, Address: 0x148588, Func Offset: 0x78
	// Line 127, Address: 0x148598, Func Offset: 0x88
	// Line 124, Address: 0x14859c, Func Offset: 0x8c
	// Line 123, Address: 0x1485a0, Func Offset: 0x90
	// Line 127, Address: 0x1485a4, Func Offset: 0x94
	// Line 128, Address: 0x1485b0, Func Offset: 0xa0
	// Line 130, Address: 0x1485c4, Func Offset: 0xb4
	// Line 132, Address: 0x1485c8, Func Offset: 0xb8
	// Line 134, Address: 0x1485f0, Func Offset: 0xe0
	// Line 135, Address: 0x1485f4, Func Offset: 0xe4
	// Line 145, Address: 0x1485f8, Func Offset: 0xe8
	// Line 134, Address: 0x1485fc, Func Offset: 0xec
	// Line 142, Address: 0x148600, Func Offset: 0xf0
	// Line 135, Address: 0x148604, Func Offset: 0xf4
	// Line 134, Address: 0x148608, Func Offset: 0xf8
	// Line 135, Address: 0x14861c, Func Offset: 0x10c
	// Line 145, Address: 0x148630, Func Offset: 0x120
	// Line 136, Address: 0x148634, Func Offset: 0x124
	// Line 145, Address: 0x148638, Func Offset: 0x128
	// Line 136, Address: 0x14863c, Func Offset: 0x12c
	// Line 142, Address: 0x148640, Func Offset: 0x130
	// Line 144, Address: 0x148644, Func Offset: 0x134
	// Line 142, Address: 0x148648, Func Offset: 0x138
	// Line 145, Address: 0x14864c, Func Offset: 0x13c
	// Line 144, Address: 0x148650, Func Offset: 0x140
	// Line 145, Address: 0x148658, Func Offset: 0x148
	// Line 144, Address: 0x148660, Func Offset: 0x150
	// Line 145, Address: 0x148664, Func Offset: 0x154
	// Line 146, Address: 0x148668, Func Offset: 0x158
	// Func End, Address: 0x148698, Func Offset: 0x188
}

// 
// Start address: 0x1486a0
void sgCameraUpdateViewProjectionMatrix(sgCamera* cam)
{
	// Line 152, Address: 0x1486a0, Func Offset: 0
	// Func End, Address: 0x1486b4, Func Offset: 0x14
}

// 
// Start address: 0x1486c0
void sgCameraUpdateViewFrustum(sgCamera* cam)
{
	float r;
	float l;
	float t;
	float b;
	float n;
	float f;
	float as;
	float angle;
	float pos[4];
	float x_dir[4];
	float y_dir[4];
	float z_dir[4];
	float vp[4];
	float m[4];
	float center[4];
	float v[4];
	float dx[4];
	float dy[4];
	float near_z;
	float center[4];
	float v[4];
	float dx[4];
	float dy[4];
	float far_z;
	float plane[4];
	// Line 231, Address: 0x1486c0, Func Offset: 0
	// Line 243, Address: 0x1486dc, Func Offset: 0x1c
	// Line 244, Address: 0x1486e8, Func Offset: 0x28
	// Line 246, Address: 0x1486f0, Func Offset: 0x30
	// Line 247, Address: 0x1486fc, Func Offset: 0x3c
	// Line 248, Address: 0x14871c, Func Offset: 0x5c
	// Line 256, Address: 0x148728, Func Offset: 0x68
	// Line 250, Address: 0x14872c, Func Offset: 0x6c
	// Line 256, Address: 0x148730, Func Offset: 0x70
	// Line 257, Address: 0x148738, Func Offset: 0x78
	// Line 258, Address: 0x148744, Func Offset: 0x84
	// Line 259, Address: 0x148750, Func Offset: 0x90
	// Line 269, Address: 0x14875c, Func Offset: 0x9c
	// Line 270, Address: 0x148768, Func Offset: 0xa8
	// Line 271, Address: 0x14878c, Func Offset: 0xcc
	// Line 272, Address: 0x1487ac, Func Offset: 0xec
	// Line 273, Address: 0x1487d0, Func Offset: 0x110
	// Line 274, Address: 0x1487f4, Func Offset: 0x134
	// Line 275, Address: 0x148814, Func Offset: 0x154
	// Line 276, Address: 0x148830, Func Offset: 0x170
	// Line 277, Address: 0x148850, Func Offset: 0x190
	// Line 278, Address: 0x148870, Func Offset: 0x1b0
	// Line 279, Address: 0x148890, Func Offset: 0x1d0
	// Line 280, Address: 0x1488b0, Func Offset: 0x1f0
	// Line 281, Address: 0x1488d0, Func Offset: 0x210
	// Line 290, Address: 0x1488f0, Func Offset: 0x230
	// Line 291, Address: 0x1488f8, Func Offset: 0x238
	// Line 292, Address: 0x14891c, Func Offset: 0x25c
	// Line 293, Address: 0x14893c, Func Offset: 0x27c
	// Line 294, Address: 0x148964, Func Offset: 0x2a4
	// Line 295, Address: 0x14897c, Func Offset: 0x2bc
	// Line 296, Address: 0x1489a0, Func Offset: 0x2e0
	// Line 297, Address: 0x1489c4, Func Offset: 0x304
	// Line 298, Address: 0x1489e4, Func Offset: 0x324
	// Line 299, Address: 0x148a04, Func Offset: 0x344
	// Line 300, Address: 0x148a24, Func Offset: 0x364
	// Line 301, Address: 0x148a44, Func Offset: 0x384
	// Line 302, Address: 0x148a64, Func Offset: 0x3a4
	// Line 303, Address: 0x148a84, Func Offset: 0x3c4
	// Line 304, Address: 0x148aa4, Func Offset: 0x3e4
	// Line 309, Address: 0x148ac4, Func Offset: 0x404
	// Line 310, Address: 0x148ac8, Func Offset: 0x408
	// Line 311, Address: 0x148adc, Func Offset: 0x41c
	// Line 312, Address: 0x148af0, Func Offset: 0x430
	// Line 313, Address: 0x148b04, Func Offset: 0x444
	// Line 314, Address: 0x148b18, Func Offset: 0x458
	// Line 315, Address: 0x148b2c, Func Offset: 0x46c
	// Line 318, Address: 0x148b40, Func Offset: 0x480
	// Func End, Address: 0x148b60, Func Offset: 0x4a0
}

// 
// Start address: 0x148b60
void UpdateViewForce(sgCamera* cam)
{
	// Line 325, Address: 0x148b60, Func Offset: 0
	// Line 327, Address: 0x148b70, Func Offset: 0x10
	// Line 329, Address: 0x148b7c, Func Offset: 0x1c
	// Line 330, Address: 0x148b84, Func Offset: 0x24
	// Line 332, Address: 0x148b8c, Func Offset: 0x2c
	// Line 333, Address: 0x148b9c, Func Offset: 0x3c
	// Func End, Address: 0x148bac, Func Offset: 0x4c
}

// 
// Start address: 0x148bb0
void UpdateCommonForce(sgCamera* cam)
{
	// Line 342, Address: 0x148bb0, Func Offset: 0
	// Line 343, Address: 0x148c28, Func Offset: 0x78
	// Func End, Address: 0x148c30, Func Offset: 0x80
}

// 
// Start address: 0x148c30
void UpdateView(sgCamera* cam)
{
	// Line 350, Address: 0x148c30, Func Offset: 0
	// Line 351, Address: 0x148c3c, Func Offset: 0xc
	// Line 352, Address: 0x148c4c, Func Offset: 0x1c
	// Line 353, Address: 0x148c54, Func Offset: 0x24
	// Line 354, Address: 0x148c5c, Func Offset: 0x2c
	// Line 355, Address: 0x148c60, Func Offset: 0x30
	// Func End, Address: 0x148c70, Func Offset: 0x40
}

// 
// Start address: 0x148c70
void sgCameraConstruct(sgCamera* cam)
{
	// Line 369, Address: 0x148c70, Func Offset: 0
	// Line 370, Address: 0x148c74, Func Offset: 0x4
	// Line 369, Address: 0x148c78, Func Offset: 0x8
	// Line 370, Address: 0x148c7c, Func Offset: 0xc
	// Line 369, Address: 0x148c80, Func Offset: 0x10
	// Line 370, Address: 0x148c84, Func Offset: 0x14
	// Line 371, Address: 0x148c8c, Func Offset: 0x1c
	// Line 373, Address: 0x148c9c, Func Offset: 0x2c
	// Line 374, Address: 0x148cb0, Func Offset: 0x40
	// Line 375, Address: 0x148cc4, Func Offset: 0x54
	// Line 376, Address: 0x148cd4, Func Offset: 0x64
	// Line 377, Address: 0x148ce4, Func Offset: 0x74
	// Line 378, Address: 0x148cf8, Func Offset: 0x88
	// Func End, Address: 0x148d08, Func Offset: 0x98
}

// 
// Start address: 0x148d10
float[4] sgCameraWorldViewMatrix(sgCamera* cam)
{
	// Line 386, Address: 0x148d10, Func Offset: 0
	// Line 387, Address: 0x148d1c, Func Offset: 0xc
	// Line 388, Address: 0x148d24, Func Offset: 0x14
	// Line 389, Address: 0x148d28, Func Offset: 0x18
	// Func End, Address: 0x148d38, Func Offset: 0x28
}

// 
// Start address: 0x148d40
void sgCameraGetWorldViewMatrix(sgCamera* cam, float wvm[4])
{
	// Line 393, Address: 0x148d40, Func Offset: 0
	// Line 394, Address: 0x148d54, Func Offset: 0x14
	// Line 395, Address: 0x148d5c, Func Offset: 0x1c
	// Line 396, Address: 0x148d80, Func Offset: 0x40
	// Func End, Address: 0x148d94, Func Offset: 0x54
}

// 
// Start address: 0x148da0
void sgCameraSetViewWorldMatrix(sgCamera* cam, float vwm[4])
{
	// Line 406, Address: 0x148da0, Func Offset: 0
	// Line 407, Address: 0x148dc0, Func Offset: 0x20
	// Line 408, Address: 0x148dc8, Func Offset: 0x28
	// Func End, Address: 0x148dd0, Func Offset: 0x30
}

// 
// Start address: 0x148dd0
void sgCameraGetViewWorldMatrix(sgCamera* cam, float vwm[4])
{
	// Line 414, Address: 0x148dd0, Func Offset: 0
	// Line 415, Address: 0x148dec, Func Offset: 0x1c
	// Func End, Address: 0x148df4, Func Offset: 0x24
}

// 
// Start address: 0x148e00
void sgCameraSetViewAngle(sgCamera* cam, float angle)
{
	// Line 434, Address: 0x148e00, Func Offset: 0
	// Line 435, Address: 0x148e24, Func Offset: 0x24
	// Line 436, Address: 0x148e28, Func Offset: 0x28
	// Line 437, Address: 0x148e30, Func Offset: 0x30
	// Func End, Address: 0x148e38, Func Offset: 0x38
}

// 
// Start address: 0x148e40
float sgCameraViewAngle(sgCamera* cam)
{
	// Line 447, Address: 0x148e40, Func Offset: 0
	// Func End, Address: 0x148e48, Func Offset: 0x8
}

// 
// Start address: 0x148e50
void sgCameraSetNearZ(sgCamera* cam, float near_z)
{
	// Line 458, Address: 0x148e50, Func Offset: 0
	// Line 459, Address: 0x148e54, Func Offset: 0x4
	// Line 460, Address: 0x148e5c, Func Offset: 0xc
	// Func End, Address: 0x148e64, Func Offset: 0x14
}

// 
// Start address: 0x148e70
float sgCameraNearZ(sgCamera* cam)
{
	// Line 471, Address: 0x148e70, Func Offset: 0
	// Func End, Address: 0x148e78, Func Offset: 0x8
}

// 
// Start address: 0x148e80
void sgCameraSetFarZ(sgCamera* cam, float far_z)
{
	// Line 481, Address: 0x148e80, Func Offset: 0
	// Line 482, Address: 0x148e84, Func Offset: 0x4
	// Line 483, Address: 0x148e8c, Func Offset: 0xc
	// Func End, Address: 0x148e94, Func Offset: 0x14
}

// 
// Start address: 0x148ea0
float sgCameraFarZ(sgCamera* cam)
{
	// Line 494, Address: 0x148ea0, Func Offset: 0
	// Func End, Address: 0x148ea8, Func Offset: 0x8
}

// 
// Start address: 0x148eb0
float[4] sgCameraViewProjectionMatrix(sgCamera* cam)
{
	// Line 501, Address: 0x148eb0, Func Offset: 0
	// Line 502, Address: 0x148ebc, Func Offset: 0xc
	// Line 503, Address: 0x148ec4, Func Offset: 0x14
	// Line 504, Address: 0x148ec8, Func Offset: 0x18
	// Func End, Address: 0x148ed8, Func Offset: 0x28
}

// 
// Start address: 0x148ee0
void sgCameraGetViewProjectionMatrix(sgCamera* cam, float vpm[4])
{
	// Line 509, Address: 0x148ee0, Func Offset: 0
	// Line 510, Address: 0x148ef4, Func Offset: 0x14
	// Line 511, Address: 0x148efc, Func Offset: 0x1c
	// Line 512, Address: 0x148f20, Func Offset: 0x40
	// Func End, Address: 0x148f34, Func Offset: 0x54
}

// 
// Start address: 0x148f40
void sgCameraGetViewProjectionMatrix_XYClipRatio(sgCamera* cam, float vpm[4], float xy_clip_ratio)
{
	// Line 524, Address: 0x148f40, Func Offset: 0
	// Func End, Address: 0x148f60, Func Offset: 0x20
}

// 
// Start address: 0x148f60
void sgCameraGetWorldProjectionMatrix(sgCamera* cam, float wpm[4])
{
	// Line 539, Address: 0x148f60, Func Offset: 0
	// Line 540, Address: 0x148f74, Func Offset: 0x14
	// Line 541, Address: 0x148f7c, Func Offset: 0x1c
	// Line 542, Address: 0x148fa0, Func Offset: 0x40
	// Func End, Address: 0x148fb4, Func Offset: 0x54
}

// 
// Start address: 0x148fc0
void sgCameraSetAspect(sgCamera* cam, float ratio)
{
	// Line 553, Address: 0x148fc0, Func Offset: 0
	// Line 554, Address: 0x148fc4, Func Offset: 0x4
	// Line 555, Address: 0x148fcc, Func Offset: 0xc
	// Func End, Address: 0x148fd4, Func Offset: 0x14
}

// 
// Start address: 0x148fe0
float sgCameraAspect(sgCamera* cam)
{
	// Line 565, Address: 0x148fe0, Func Offset: 0
	// Func End, Address: 0x148fe8, Func Offset: 0x8
}

// 
// Start address: 0x148ff0
void sgCameraSetZoomRatio(sgCamera* cam, float ratio)
{
	// Line 578, Address: 0x148ff0, Func Offset: 0
	// Line 579, Address: 0x148ff4, Func Offset: 0x4
	// Line 580, Address: 0x148ffc, Func Offset: 0xc
	// Func End, Address: 0x149004, Func Offset: 0x14
}

// 
// Start address: 0x149010
float sgCameraZoomRatio(sgCamera* cam)
{
	// Line 593, Address: 0x149010, Func Offset: 0
	// Func End, Address: 0x149018, Func Offset: 0x8
}

// 
// Start address: 0x149020
float* sgCameraPos(sgCamera* cam)
{
	// Line 611, Address: 0x149020, Func Offset: 0
	// Line 612, Address: 0x14902c, Func Offset: 0xc
	// Line 613, Address: 0x149034, Func Offset: 0x14
	// Line 614, Address: 0x149038, Func Offset: 0x18
	// Func End, Address: 0x149048, Func Offset: 0x28
}

// 
// Start address: 0x149050
float* sgCameraDirZ(sgCamera* cam)
{
	// Line 625, Address: 0x149050, Func Offset: 0
	// Line 626, Address: 0x14905c, Func Offset: 0xc
	// Line 627, Address: 0x149064, Func Offset: 0x14
	// Line 628, Address: 0x149068, Func Offset: 0x18
	// Func End, Address: 0x149078, Func Offset: 0x28
}

// 
// Start address: 0x149080
void sgCameraGetPos(sgCamera* cam, float* pos)
{
	// Line 636, Address: 0x149080, Func Offset: 0
	// Line 637, Address: 0x149094, Func Offset: 0x14
	// Line 638, Address: 0x14909c, Func Offset: 0x1c
	// Line 639, Address: 0x1490a4, Func Offset: 0x24
	// Func End, Address: 0x1490b8, Func Offset: 0x38
}

// 
// Start address: 0x1490c0
void sgCameraGetDirY(sgCamera* cam, float* v)
{
	// Line 647, Address: 0x1490c0, Func Offset: 0
	// Line 648, Address: 0x1490d4, Func Offset: 0x14
	// Line 649, Address: 0x1490dc, Func Offset: 0x1c
	// Line 650, Address: 0x1490e4, Func Offset: 0x24
	// Func End, Address: 0x1490f8, Func Offset: 0x38
}

// 
// Start address: 0x149100
void sgCameraGetDirZ(sgCamera* cam, float* v)
{
	// Line 658, Address: 0x149100, Func Offset: 0
	// Line 659, Address: 0x149114, Func Offset: 0x14
	// Line 660, Address: 0x14911c, Func Offset: 0x1c
	// Line 661, Address: 0x149124, Func Offset: 0x24
	// Func End, Address: 0x149138, Func Offset: 0x38
}

