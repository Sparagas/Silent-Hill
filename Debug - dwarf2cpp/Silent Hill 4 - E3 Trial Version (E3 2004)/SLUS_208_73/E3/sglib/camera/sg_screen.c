typedef struct _anon0;


typedef float type_0[4][4];
typedef float type_1[4];
typedef float type_2[4];

struct _anon0
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

float sg_matrix_unit[4][4];

void sgScreenMakeZoomProjectionScreen(_anon0* scr, float psm[4], float zoom);
void sgScreenUpdateProjectionScreen(_anon0* scr);
void UpdateScreenForce(_anon0* scr);
void UpdateScreen(_anon0* scr);
void sgScreenConstruct(_anon0* scr);
void sgScreenSetSize(_anon0* scr, int w, int h);
void sgScreenSetCenter(_anon0* scr, int cx, int cy);
void sgScreenSetZRange(_anon0* scr, int zmin, int zmax);
float[4] sgScreenProjectionScreenMatrix(_anon0* scr);
void sgScreenGetProjectionScreenMatrixZoom(_anon0* scr, float psm[4], float zoom);
int sgScreenWidth(_anon0* scr);
int sgScreenHeight(_anon0* scr);
int sgScreenZMin(_anon0* scr);
int sgScreenZMax(_anon0* scr);
void sgScreenSetPixelAspect(_anon0* scr, float aspect);
float sgScreenWindowAspect(_anon0* scr);

// 
// Start address: 0x149140
void sgScreenMakeZoomProjectionScreen(_anon0* scr, float psm[4], float zoom)
{
	// Line 43, Address: 0x149140, Func Offset: 0
	// Line 44, Address: 0x149168, Func Offset: 0x28
	// Line 45, Address: 0x149194, Func Offset: 0x54
	// Line 47, Address: 0x14919c, Func Offset: 0x5c
	// Line 50, Address: 0x1491bc, Func Offset: 0x7c
	// Line 47, Address: 0x1491c0, Func Offset: 0x80
	// Line 48, Address: 0x1491c8, Func Offset: 0x88
	// Line 50, Address: 0x1491cc, Func Offset: 0x8c
	// Line 48, Address: 0x1491d4, Func Offset: 0x94
	// Line 50, Address: 0x1491d8, Func Offset: 0x98
	// Line 51, Address: 0x1491fc, Func Offset: 0xbc
	// Line 54, Address: 0x149220, Func Offset: 0xe0
	// Func End, Address: 0x149228, Func Offset: 0xe8
}

// 
// Start address: 0x149230
void sgScreenUpdateProjectionScreen(_anon0* scr)
{
	// Line 61, Address: 0x149230, Func Offset: 0
	// Func End, Address: 0x149244, Func Offset: 0x14
}

// 
// Start address: 0x149250
void UpdateScreenForce(_anon0* scr)
{
	// Line 69, Address: 0x149250, Func Offset: 0
	// Line 70, Address: 0x149258, Func Offset: 0x8
	// Line 71, Address: 0x149260, Func Offset: 0x10
	// Line 72, Address: 0x149270, Func Offset: 0x20
	// Func End, Address: 0x14927c, Func Offset: 0x2c
}

// 
// Start address: 0x149280
void UpdateScreen(_anon0* scr)
{
	// Line 79, Address: 0x149280, Func Offset: 0
	// Line 80, Address: 0x149288, Func Offset: 0x8
	// Line 81, Address: 0x149298, Func Offset: 0x18
	// Line 83, Address: 0x1492a0, Func Offset: 0x20
	// Func End, Address: 0x1492ac, Func Offset: 0x2c
}

// 
// Start address: 0x1492b0
void sgScreenConstruct(_anon0* scr)
{
	// Line 89, Address: 0x1492b0, Func Offset: 0
	// Line 90, Address: 0x1492b4, Func Offset: 0x4
	// Line 89, Address: 0x1492b8, Func Offset: 0x8
	// Line 90, Address: 0x1492bc, Func Offset: 0xc
	// Line 89, Address: 0x1492c0, Func Offset: 0x10
	// Line 90, Address: 0x1492c4, Func Offset: 0x14
	// Line 91, Address: 0x1492cc, Func Offset: 0x1c
	// Line 92, Address: 0x1492dc, Func Offset: 0x2c
	// Line 93, Address: 0x1492ec, Func Offset: 0x3c
	// Func End, Address: 0x1492fc, Func Offset: 0x4c
}

// 
// Start address: 0x149300
void sgScreenSetSize(_anon0* scr, int w, int h)
{
	// Line 104, Address: 0x149300, Func Offset: 0
	// Line 105, Address: 0x149304, Func Offset: 0x4
	// Line 106, Address: 0x149308, Func Offset: 0x8
	// Line 107, Address: 0x149310, Func Offset: 0x10
	// Func End, Address: 0x149318, Func Offset: 0x18
}

// 
// Start address: 0x149320
void sgScreenSetCenter(_anon0* scr, int cx, int cy)
{
	// Line 117, Address: 0x149320, Func Offset: 0
	// Line 118, Address: 0x149324, Func Offset: 0x4
	// Line 117, Address: 0x14932c, Func Offset: 0xc
	// Line 118, Address: 0x149330, Func Offset: 0x10
	// Line 117, Address: 0x149334, Func Offset: 0x14
	// Line 118, Address: 0x149338, Func Offset: 0x18
	// Line 119, Address: 0x14933c, Func Offset: 0x1c
	// Line 120, Address: 0x149344, Func Offset: 0x24
	// Func End, Address: 0x14934c, Func Offset: 0x2c
}

// 
// Start address: 0x149350
void sgScreenSetZRange(_anon0* scr, int zmin, int zmax)
{
	// Line 130, Address: 0x149350, Func Offset: 0
	// Line 131, Address: 0x149354, Func Offset: 0x4
	// Line 132, Address: 0x149358, Func Offset: 0x8
	// Line 133, Address: 0x149360, Func Offset: 0x10
	// Func End, Address: 0x149368, Func Offset: 0x18
}

// 
// Start address: 0x149370
float[4] sgScreenProjectionScreenMatrix(_anon0* scr)
{
	// Line 142, Address: 0x149370, Func Offset: 0
	// Line 143, Address: 0x149378, Func Offset: 0x8
	// Line 145, Address: 0x149380, Func Offset: 0x10
	// Line 144, Address: 0x149384, Func Offset: 0x14
	// Line 145, Address: 0x149388, Func Offset: 0x18
	// Func End, Address: 0x149390, Func Offset: 0x20
}

// 
// Start address: 0x149390
void sgScreenGetProjectionScreenMatrixZoom(_anon0* scr, float psm[4], float zoom)
{
	// Line 161, Address: 0x149390, Func Offset: 0
	// Func End, Address: 0x149398, Func Offset: 0x8
}

// 
// Start address: 0x1493a0
int sgScreenWidth(_anon0* scr)
{
	// Line 168, Address: 0x1493a0, Func Offset: 0
	// Func End, Address: 0x1493a8, Func Offset: 0x8
}

// 
// Start address: 0x1493b0
int sgScreenHeight(_anon0* scr)
{
	// Line 174, Address: 0x1493b0, Func Offset: 0
	// Func End, Address: 0x1493b8, Func Offset: 0x8
}

// 
// Start address: 0x1493c0
int sgScreenZMin(_anon0* scr)
{
	// Line 192, Address: 0x1493c0, Func Offset: 0
	// Func End, Address: 0x1493c8, Func Offset: 0x8
}

// 
// Start address: 0x1493d0
int sgScreenZMax(_anon0* scr)
{
	// Line 198, Address: 0x1493d0, Func Offset: 0
	// Func End, Address: 0x1493d8, Func Offset: 0x8
}

// 
// Start address: 0x1493e0
void sgScreenSetPixelAspect(_anon0* scr, float aspect)
{
	// Line 207, Address: 0x1493e0, Func Offset: 0
	// Line 209, Address: 0x1493ec, Func Offset: 0xc
	// Func End, Address: 0x1493f4, Func Offset: 0x14
}

// 
// Start address: 0x149400
float sgScreenWindowAspect(_anon0* scr)
{
	float window_aspect;
	// Line 228, Address: 0x149400, Func Offset: 0
	// Line 230, Address: 0x149410, Func Offset: 0x10
	// Line 232, Address: 0x14942c, Func Offset: 0x2c
	// Line 231, Address: 0x149430, Func Offset: 0x30
	// Line 230, Address: 0x149434, Func Offset: 0x34
	// Line 232, Address: 0x149438, Func Offset: 0x38
	// Line 230, Address: 0x14943c, Func Offset: 0x3c
	// Line 232, Address: 0x149440, Func Offset: 0x40
	// Line 231, Address: 0x149444, Func Offset: 0x44
	// Line 232, Address: 0x149448, Func Offset: 0x48
	// Func End, Address: 0x149450, Func Offset: 0x50
}

