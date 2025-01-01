typedef struct _anon0;


typedef _anon0 type[84];

struct _anon0
{
	short demo_id;
	unsigned char clip;
	unsigned char color_r;
	unsigned char color_g;
	unsigned char color_b;
	unsigned short near;
	unsigned short far;
	unsigned char near_value;
	unsigned char far_value;
};

_anon0 default_demo_param;
_anon0 demo_param[84];

_anon0 GetDemoParam(int demo_id);

// 
// Start address: 0x2a66e0
_anon0 GetDemoParam(int demo_id)
{
	_anon0 _demo_param;
	// Line 97, Address: 0x2a66e0, Func Offset: 0
	// Line 101, Address: 0x2a66e4, Func Offset: 0x4
	// Line 97, Address: 0x2a66e8, Func Offset: 0x8
	// Line 101, Address: 0x2a66fc, Func Offset: 0x1c
	// Line 103, Address: 0x2a6710, Func Offset: 0x30
	// Line 104, Address: 0x2a6728, Func Offset: 0x48
	// Line 105, Address: 0x2a6734, Func Offset: 0x54
	// Line 107, Address: 0x2a6744, Func Offset: 0x64
	// Line 108, Address: 0x2a6750, Func Offset: 0x70
	// Line 109, Address: 0x2a6778, Func Offset: 0x98
	// Func End, Address: 0x2a6790, Func Offset: 0xb0
}

