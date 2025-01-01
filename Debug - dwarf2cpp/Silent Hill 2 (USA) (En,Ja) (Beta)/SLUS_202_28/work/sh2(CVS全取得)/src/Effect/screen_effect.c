typedef struct ScreenEffect_Parameter;



struct ScreenEffect_Parameter
{
	int fade_status;
	int fade_type;
	float fade_timer_now;
	float fade_timer_max;
};

ScreenEffect_Parameter scr_efct;

void ScreenEffectInit();
void ScreenEffectManager();
void ScreenEffectFadeStart(int type, float time);
int ScreenEffectFadeCheck();
void ScreenEffectFadeStop();

// 
// Start address: 0x20df00
void ScreenEffectInit()
{
	// Line 31, Address: 0x20df00, Func Offset: 0
	// Line 32, Address: 0x20df08, Func Offset: 0x8
	// Line 33, Address: 0x20df10, Func Offset: 0x10
	// Line 35, Address: 0x20df20, Func Offset: 0x20
	// Func End, Address: 0x20df28, Func Offset: 0x28
}

// 
// Start address: 0x20df30
void ScreenEffectManager()
{
	// Line 42, Address: 0x20df30, Func Offset: 0
	// Line 43, Address: 0x20df38, Func Offset: 0x8
	// Line 44, Address: 0x20df54, Func Offset: 0x24
	// Line 45, Address: 0x20df6c, Func Offset: 0x3c
	// Line 46, Address: 0x20df74, Func Offset: 0x44
	// Line 47, Address: 0x20df88, Func Offset: 0x58
	// Line 48, Address: 0x20df94, Func Offset: 0x64
	// Line 49, Address: 0x20dfa8, Func Offset: 0x78
	// Line 51, Address: 0x20dfb0, Func Offset: 0x80
	// Func End, Address: 0x20dfc0, Func Offset: 0x90
}

// 
// Start address: 0x20dfc0
void ScreenEffectFadeStart(int type, float time)
{
	// Line 61, Address: 0x20dfc0, Func Offset: 0
	// Line 62, Address: 0x20dfc8, Func Offset: 0x8
	// Line 64, Address: 0x20dfec, Func Offset: 0x2c
	// Line 70, Address: 0x20e014, Func Offset: 0x54
	// Line 72, Address: 0x20e02c, Func Offset: 0x6c
	// Line 73, Address: 0x20e038, Func Offset: 0x78
	// Line 77, Address: 0x20e040, Func Offset: 0x80
	// Line 78, Address: 0x20e054, Func Offset: 0x94
	// Line 79, Address: 0x20e05c, Func Offset: 0x9c
	// Line 84, Address: 0x20e064, Func Offset: 0xa4
	// Line 85, Address: 0x20e080, Func Offset: 0xc0
	// Line 86, Address: 0x20e088, Func Offset: 0xc8
	// Line 87, Address: 0x20e090, Func Offset: 0xd0
	// Line 91, Address: 0x20e098, Func Offset: 0xd8
	// Line 92, Address: 0x20e0a8, Func Offset: 0xe8
	// Line 96, Address: 0x20e0b0, Func Offset: 0xf0
	// Line 97, Address: 0x20e0b8, Func Offset: 0xf8
	// Line 98, Address: 0x20e0c0, Func Offset: 0x100
	// Line 100, Address: 0x20e0c8, Func Offset: 0x108
	// Line 102, Address: 0x20e0f0, Func Offset: 0x130
	// Line 103, Address: 0x20e0f8, Func Offset: 0x138
	// Line 106, Address: 0x20e100, Func Offset: 0x140
	// Line 107, Address: 0x20e108, Func Offset: 0x148
	// Line 110, Address: 0x20e110, Func Offset: 0x150
	// Line 111, Address: 0x20e120, Func Offset: 0x160
	// Line 114, Address: 0x20e128, Func Offset: 0x168
	// Line 115, Address: 0x20e130, Func Offset: 0x170
	// Line 118, Address: 0x20e138, Func Offset: 0x178
	// Line 119, Address: 0x20e148, Func Offset: 0x188
	// Line 122, Address: 0x20e150, Func Offset: 0x190
	// Line 123, Address: 0x20e158, Func Offset: 0x198
	// Line 126, Address: 0x20e160, Func Offset: 0x1a0
	// Line 127, Address: 0x20e168, Func Offset: 0x1a8
	// Line 130, Address: 0x20e170, Func Offset: 0x1b0
	// Line 131, Address: 0x20e180, Func Offset: 0x1c0
	// Line 134, Address: 0x20e188, Func Offset: 0x1c8
	// Line 135, Address: 0x20e190, Func Offset: 0x1d0
	// Line 138, Address: 0x20e198, Func Offset: 0x1d8
	// Line 139, Address: 0x20e1a8, Func Offset: 0x1e8
	// Line 142, Address: 0x20e1b0, Func Offset: 0x1f0
	// Line 143, Address: 0x20e1c4, Func Offset: 0x204
	// Line 146, Address: 0x20e1cc, Func Offset: 0x20c
	// Line 149, Address: 0x20e1d4, Func Offset: 0x214
	// Func End, Address: 0x20e1e4, Func Offset: 0x224
}

// 
// Start address: 0x20e1f0
int ScreenEffectFadeCheck()
{
	// Line 159, Address: 0x20e1f0, Func Offset: 0
	// Line 161, Address: 0x20e210, Func Offset: 0x20
	// Func End, Address: 0x20e218, Func Offset: 0x28
}

// 
// Start address: 0x20e220
void ScreenEffectFadeStop()
{
	// Line 168, Address: 0x20e220, Func Offset: 0
	// Line 169, Address: 0x20e228, Func Offset: 0x8
	// Line 170, Address: 0x20e230, Func Offset: 0x10
	// Line 171, Address: 0x20e238, Func Offset: 0x18
	// Func End, Address: 0x20e248, Func Offset: 0x28
}

