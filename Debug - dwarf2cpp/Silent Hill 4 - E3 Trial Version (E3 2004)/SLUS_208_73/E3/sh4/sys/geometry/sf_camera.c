typedef struct sgCamera;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;


typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4][4];
typedef float type_3[4];
typedef float type_4[4][8];
typedef float type_5[4][6];

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

struct _anon1
{
	float psm[4][4];
	int screen_zmax;
	int screen_zmin;
	float screen_cx;
	float screen_cy;
	int screen_width;
	int screen_height;
	float pixel_aspect;
	unsigned int dirty;
};

struct _anon2
{
	sgCamera camera;
	_anon1 scr;
	sgCamera* current;
	int flag;
};

_anon2 camera_work;

void sfCameraInit();
void sfCameraUpdate();
void sfCameraSetViewAngle(float view_angle);
float sfCameraViewAngle();
void sfCameraSetViewWorldMatrix(float view_world[4]);
void sfCameraGetViewWorldMatrix(float view_world[4]);
void sfCameraGetWorldViewMatrix(float world_view[4]);
float[4] sfCameraWorldViewMatrix();
void sfCameraGetViewScreenMatrix(float view_screen[4]);
void sfCameraGetWorldScreenMatrix(float world_screen[4]);
void sfCameraGetPos(float* pos);
float* sfCameraPos();
void sfCameraGetDirZ(float* v);
float* sfCameraDirZ();
void sfCameraGetDirY(float* v);
void sfCameraSetNearZ(float z);
float sfCameraNearZ();
void sfCameraSetFarZ(float z);
float sfCameraFarZ();
int sfCameraScreenZMin();
int sfCameraScreenZMax();

// 
// Start address: 0x159e10
void sfCameraInit()
{
	// Line 102, Address: 0x159e10, Func Offset: 0
	// Line 103, Address: 0x159e14, Func Offset: 0x4
	// Line 102, Address: 0x159e18, Func Offset: 0x8
	// Line 103, Address: 0x159e1c, Func Offset: 0xc
	// Line 104, Address: 0x159e30, Func Offset: 0x20
	// Line 105, Address: 0x159e3c, Func Offset: 0x2c
	// Line 107, Address: 0x159ea0, Func Offset: 0x90
	// Line 108, Address: 0x159eac, Func Offset: 0x9c
	// Line 109, Address: 0x159f20, Func Offset: 0x110
	// Line 110, Address: 0x159f30, Func Offset: 0x120
	// Func End, Address: 0x159f40, Func Offset: 0x130
}

// 
// Start address: 0x159f40
void sfCameraUpdate()
{
	// Line 114, Address: 0x159f40, Func Offset: 0
	// Line 115, Address: 0x159f44, Func Offset: 0x4
	// Line 114, Address: 0x159f48, Func Offset: 0x8
	// Line 115, Address: 0x159f4c, Func Offset: 0xc
	// Line 116, Address: 0x159f54, Func Offset: 0x14
	// Line 118, Address: 0x159f60, Func Offset: 0x20
	// Line 119, Address: 0x159f6c, Func Offset: 0x2c
	// Line 121, Address: 0x159f78, Func Offset: 0x38
	// Line 122, Address: 0x159f84, Func Offset: 0x44
	// Line 124, Address: 0x159f90, Func Offset: 0x50
	// Line 125, Address: 0x159fa8, Func Offset: 0x68
	// Func End, Address: 0x159fb4, Func Offset: 0x74
}

// 
// Start address: 0x159fc0
void sfCameraSetViewAngle(float view_angle)
{
	// Line 129, Address: 0x159fc0, Func Offset: 0
	// Line 130, Address: 0x159fc4, Func Offset: 0x4
	// Line 129, Address: 0x159fc8, Func Offset: 0x8
	// Line 130, Address: 0x159fcc, Func Offset: 0xc
	// Line 131, Address: 0x159fd4, Func Offset: 0x14
	// Line 132, Address: 0x159fe8, Func Offset: 0x28
	// Func End, Address: 0x159ff4, Func Offset: 0x34
}

// 
// Start address: 0x15a000
float sfCameraViewAngle()
{
	// Line 137, Address: 0x15a000, Func Offset: 0
	// Func End, Address: 0x15a00c, Func Offset: 0xc
}

// 
// Start address: 0x15a010
void sfCameraSetViewWorldMatrix(float view_world[4])
{
	// Line 145, Address: 0x15a010, Func Offset: 0
	// Line 146, Address: 0x15a01c, Func Offset: 0xc
	// Line 147, Address: 0x15a028, Func Offset: 0x18
	// Line 148, Address: 0x15a03c, Func Offset: 0x2c
	// Func End, Address: 0x15a048, Func Offset: 0x38
}

// 
// Start address: 0x15a050
void sfCameraGetViewWorldMatrix(float view_world[4])
{
	// Line 156, Address: 0x15a054, Func Offset: 0x4
	// Func End, Address: 0x15a060, Func Offset: 0x10
}

// 
// Start address: 0x15a060
void sfCameraGetWorldViewMatrix(float world_view[4])
{
	// Line 172, Address: 0x15a064, Func Offset: 0x4
	// Func End, Address: 0x15a070, Func Offset: 0x10
}

// 
// Start address: 0x15a070
float[4] sfCameraWorldViewMatrix()
{
	// Line 180, Address: 0x15a070, Func Offset: 0
	// Func End, Address: 0x15a07c, Func Offset: 0xc
}

// 
// Start address: 0x15a080
void sfCameraGetViewScreenMatrix(float view_screen[4])
{
	float vpm[4][4];
	// Line 185, Address: 0x15a080, Func Offset: 0
	// Line 187, Address: 0x15a084, Func Offset: 0x4
	// Line 185, Address: 0x15a088, Func Offset: 0x8
	// Line 187, Address: 0x15a094, Func Offset: 0x14
	// Line 188, Address: 0x15a0a0, Func Offset: 0x20
	// Line 190, Address: 0x15a120, Func Offset: 0xa0
	// Func End, Address: 0x15a130, Func Offset: 0xb0
}

// 
// Start address: 0x15a130
void sfCameraGetWorldScreenMatrix(float world_screen[4])
{
	float wpm[4][4];
	// Line 194, Address: 0x15a130, Func Offset: 0
	// Line 196, Address: 0x15a134, Func Offset: 0x4
	// Line 194, Address: 0x15a138, Func Offset: 0x8
	// Line 196, Address: 0x15a144, Func Offset: 0x14
	// Line 197, Address: 0x15a150, Func Offset: 0x20
	// Line 199, Address: 0x15a1d0, Func Offset: 0xa0
	// Func End, Address: 0x15a1e0, Func Offset: 0xb0
}

// 
// Start address: 0x15a1e0
void sfCameraGetPos(float* pos)
{
	// Line 204, Address: 0x15a1e4, Func Offset: 0x4
	// Func End, Address: 0x15a1f0, Func Offset: 0x10
}

// 
// Start address: 0x15a1f0
float* sfCameraPos()
{
	// Line 213, Address: 0x15a1f0, Func Offset: 0
	// Func End, Address: 0x15a1fc, Func Offset: 0xc
}

// 
// Start address: 0x15a200
void sfCameraGetDirZ(float* v)
{
	// Line 219, Address: 0x15a204, Func Offset: 0x4
	// Func End, Address: 0x15a210, Func Offset: 0x10
}

// 
// Start address: 0x15a210
float* sfCameraDirZ()
{
	// Line 228, Address: 0x15a210, Func Offset: 0
	// Func End, Address: 0x15a21c, Func Offset: 0xc
}

// 
// Start address: 0x15a220
void sfCameraGetDirY(float* v)
{
	// Line 234, Address: 0x15a224, Func Offset: 0x4
	// Func End, Address: 0x15a230, Func Offset: 0x10
}

// 
// Start address: 0x15a230
void sfCameraSetNearZ(float z)
{
	// Line 250, Address: 0x15a230, Func Offset: 0
	// Func End, Address: 0x15a23c, Func Offset: 0xc
}

// 
// Start address: 0x15a240
float sfCameraNearZ()
{
	// Line 257, Address: 0x15a240, Func Offset: 0
	// Func End, Address: 0x15a24c, Func Offset: 0xc
}

// 
// Start address: 0x15a250
void sfCameraSetFarZ(float z)
{
	// Line 264, Address: 0x15a250, Func Offset: 0
	// Func End, Address: 0x15a25c, Func Offset: 0xc
}

// 
// Start address: 0x15a260
float sfCameraFarZ()
{
	// Line 271, Address: 0x15a260, Func Offset: 0
	// Func End, Address: 0x15a26c, Func Offset: 0xc
}

// 
// Start address: 0x15a270
int sfCameraScreenZMin()
{
	// Line 278, Address: 0x15a270, Func Offset: 0
	// Func End, Address: 0x15a27c, Func Offset: 0xc
}

// 
// Start address: 0x15a280
int sfCameraScreenZMax()
{
	// Line 284, Address: 0x15a280, Func Offset: 0
	// Func End, Address: 0x15a28c, Func Offset: 0xc
}

