typedef struct _anon0;
typedef enum sgLightType : unsigned char;


typedef float type[4];

struct _anon0
{
	float color[4];
	float direction[4];
	float position[4];
	sgLightType type;
	float start;
	float end;
	float spot_cone_angle;
	float falloff_angle;
	int flag;
};

enum sgLightType : unsigned char
{
	SG_LIGHT_NONE,
	SG_LIGHT_AMBIENT,
	SG_LIGHT_DIRECTIONAL,
	SG_LIGHT_POINT,
	SG_LIGHT_SPOT,
	SG_LIGHT_REFRECT_DIRECTIONAL,
	SG_LIGHT_REFRECT_POINT
};


void sgLightConstruct(_anon0* light);
void sgLightCopy(_anon0* light, _anon0* src);
void sgLightSetType(_anon0* light, sgLightType light_type);
sgLightType sgLightGetType(_anon0* light);
void sgLightSetColor(_anon0* light, float* color);
void sgLightGetColor(_anon0* light, float* color);
float* sgLightColor(_anon0* light);
void sgLightSetDirection(_anon0* light, float* direction);
void sgLightGetDirection(_anon0* light, float* direction);
float* sgLightDirection(_anon0* light);
void sgLightSetPosition(_anon0* light, float* position);
void sgLightGetPosition(_anon0* light, float* position);
float* sgLightPosition(_anon0* light);
void sgLightSetFalloff(_anon0* light, float start, float end);
void sgLightSetSpreadAngle(_anon0* light, float cone_angle);
void sgLightSetSpreadFalloffAngle(_anon0* light, float falloff_angle);
void sgLightSetSpecularOn(_anon0* light);
void sgLightSetSpecularOff(_anon0* light);
int sgLightSpecularStatus(_anon0* light);
float sgLightIntensityFromPosition(_anon0* light, float* pos);

// 
// Start address: 0x14ae80
void sgLightConstruct(_anon0* light)
{
	// Line 40, Address: 0x14ae80, Func Offset: 0
	// Line 41, Address: 0x14ae84, Func Offset: 0x4
	// Line 40, Address: 0x14ae88, Func Offset: 0x8
	// Line 41, Address: 0x14ae8c, Func Offset: 0xc
	// Line 40, Address: 0x14ae90, Func Offset: 0x10
	// Line 41, Address: 0x14ae94, Func Offset: 0x14
	// Line 42, Address: 0x14ae9c, Func Offset: 0x1c
	// Line 43, Address: 0x14aea8, Func Offset: 0x28
	// Line 44, Address: 0x14aeb4, Func Offset: 0x34
	// Func End, Address: 0x14aec4, Func Offset: 0x44
}

// 
// Start address: 0x14aed0
void sgLightCopy(_anon0* light, _anon0* src)
{
	// Line 53, Address: 0x14aed0, Func Offset: 0
	// Line 54, Address: 0x14aed8, Func Offset: 0x8
	// Line 55, Address: 0x14aee0, Func Offset: 0x10
	// Line 57, Address: 0x14aee8, Func Offset: 0x18
	// Line 58, Address: 0x14aef0, Func Offset: 0x20
	// Line 59, Address: 0x14aef8, Func Offset: 0x28
	// Line 60, Address: 0x14af00, Func Offset: 0x30
	// Line 61, Address: 0x14af08, Func Offset: 0x38
	// Line 62, Address: 0x14af10, Func Offset: 0x40
	// Line 63, Address: 0x14af14, Func Offset: 0x44
	// Func End, Address: 0x14af1c, Func Offset: 0x4c
}

// 
// Start address: 0x14af20
void sgLightSetType(_anon0* light, sgLightType light_type)
{
	// Line 69, Address: 0x14af20, Func Offset: 0
	// Func End, Address: 0x14af28, Func Offset: 0x8
}

// 
// Start address: 0x14af30
sgLightType sgLightGetType(_anon0* light)
{
	// Line 75, Address: 0x14af30, Func Offset: 0
	// Func End, Address: 0x14af38, Func Offset: 0x8
}

// 
// Start address: 0x14af40
void sgLightSetColor(_anon0* light, float* color)
{
	// Line 83, Address: 0x14af40, Func Offset: 0
	// Line 84, Address: 0x14af44, Func Offset: 0x4
	// Func End, Address: 0x14af4c, Func Offset: 0xc
}

// 
// Start address: 0x14af50
void sgLightGetColor(_anon0* light, float* color)
{
	// Line 92, Address: 0x14af50, Func Offset: 0
	// Line 93, Address: 0x14af54, Func Offset: 0x4
	// Func End, Address: 0x14af5c, Func Offset: 0xc
}

// 
// Start address: 0x14af60
float* sgLightColor(_anon0* light)
{
	// Line 102, Address: 0x14af60, Func Offset: 0
	// Func End, Address: 0x14af68, Func Offset: 0x8
}

// 
// Start address: 0x14af70
void sgLightSetDirection(_anon0* light, float* direction)
{
	// Line 109, Address: 0x14af70, Func Offset: 0
	// Line 110, Address: 0x14af74, Func Offset: 0x4
	// Func End, Address: 0x14af7c, Func Offset: 0xc
}

// 
// Start address: 0x14af80
void sgLightGetDirection(_anon0* light, float* direction)
{
	// Line 117, Address: 0x14af80, Func Offset: 0
	// Line 118, Address: 0x14af84, Func Offset: 0x4
	// Func End, Address: 0x14af8c, Func Offset: 0xc
}

// 
// Start address: 0x14af90
float* sgLightDirection(_anon0* light)
{
	// Line 126, Address: 0x14af90, Func Offset: 0
	// Func End, Address: 0x14af98, Func Offset: 0x8
}

// 
// Start address: 0x14afa0
void sgLightSetPosition(_anon0* light, float* position)
{
	// Line 133, Address: 0x14afa0, Func Offset: 0
	// Line 134, Address: 0x14afa4, Func Offset: 0x4
	// Func End, Address: 0x14afac, Func Offset: 0xc
}

// 
// Start address: 0x14afb0
void sgLightGetPosition(_anon0* light, float* position)
{
	// Line 141, Address: 0x14afb0, Func Offset: 0
	// Line 142, Address: 0x14afb4, Func Offset: 0x4
	// Func End, Address: 0x14afbc, Func Offset: 0xc
}

// 
// Start address: 0x14afc0
float* sgLightPosition(_anon0* light)
{
	// Line 150, Address: 0x14afc0, Func Offset: 0
	// Func End, Address: 0x14afc8, Func Offset: 0x8
}

// 
// Start address: 0x14afd0
void sgLightSetFalloff(_anon0* light, float start, float end)
{
	// Line 159, Address: 0x14afd0, Func Offset: 0
	// Line 161, Address: 0x14afd4, Func Offset: 0x4
	// Func End, Address: 0x14afdc, Func Offset: 0xc
}

// 
// Start address: 0x14afe0
void sgLightSetSpreadAngle(_anon0* light, float cone_angle)
{
	// Line 171, Address: 0x14afe0, Func Offset: 0
	// Func End, Address: 0x14afe8, Func Offset: 0x8
}

// 
// Start address: 0x14aff0
void sgLightSetSpreadFalloffAngle(_anon0* light, float falloff_angle)
{
	// Line 182, Address: 0x14aff0, Func Offset: 0
	// Func End, Address: 0x14aff8, Func Offset: 0x8
}

// 
// Start address: 0x14b000
void sgLightSetSpecularOn(_anon0* light)
{
	// Line 191, Address: 0x14b000, Func Offset: 0
	// Line 192, Address: 0x14b008, Func Offset: 0x8
	// Func End, Address: 0x14b010, Func Offset: 0x10
}

// 
// Start address: 0x14b010
void sgLightSetSpecularOff(_anon0* light)
{
	// Line 199, Address: 0x14b010, Func Offset: 0
	// Line 200, Address: 0x14b01c, Func Offset: 0xc
	// Func End, Address: 0x14b024, Func Offset: 0x14
}

// 
// Start address: 0x14b030
int sgLightSpecularStatus(_anon0* light)
{
	// Line 207, Address: 0x14b030, Func Offset: 0
	// Line 208, Address: 0x14b034, Func Offset: 0x4
	// Func End, Address: 0x14b03c, Func Offset: 0xc
}

// 
// Start address: 0x14b040
float sgLightIntensityFromPosition(_anon0* light, float* pos)
{
	float a;
	float b;
	float f_start;
	float f_end;
	float r;
	float s;
	float v[4];
	// Line 215, Address: 0x14b040, Func Offset: 0
	// Line 224, Address: 0x14b05c, Func Offset: 0x1c
	// Line 227, Address: 0x14b080, Func Offset: 0x40
	// Line 229, Address: 0x14b08c, Func Offset: 0x4c
	// Line 230, Address: 0x14b090, Func Offset: 0x50
	// Line 237, Address: 0x14b0a0, Func Offset: 0x60
	// Line 233, Address: 0x14b0a4, Func Offset: 0x64
	// Line 234, Address: 0x14b0a8, Func Offset: 0x68
	// Line 235, Address: 0x14b0ac, Func Offset: 0x6c
	// Line 236, Address: 0x14b0b8, Func Offset: 0x78
	// Line 237, Address: 0x14b0bc, Func Offset: 0x7c
	// Line 238, Address: 0x14b0dc, Func Offset: 0x9c
	// Line 240, Address: 0x14b100, Func Offset: 0xc0
	// Line 239, Address: 0x14b104, Func Offset: 0xc4
	// Line 240, Address: 0x14b108, Func Offset: 0xc8
	// Line 239, Address: 0x14b10c, Func Offset: 0xcc
	// Line 240, Address: 0x14b110, Func Offset: 0xd0
	// Line 241, Address: 0x14b124, Func Offset: 0xe4
	// Line 245, Address: 0x14b128, Func Offset: 0xe8
	// Func End, Address: 0x14b144, Func Offset: 0x104
}

