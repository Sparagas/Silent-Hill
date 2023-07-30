typedef struct ScreenEffect_Parameter;



struct ScreenEffect_Parameter
{
	int fade_status;
	int fade_type;
	float fade_timer_now;
	float fade_timer_max;
	float fade_rate;
};

ScreenEffect_Parameter scr_efct;
float dtf;

void ScreenEffectInit();
void ScreenEffectManager();
int ScreenEffectFadeOutStart(int type, float time);
int ScreenEffectFadeOutCheck();
void ScreenEffectFadeOutDirectSet();
int ScreenEffectFadeInStart(int type, float time);
int ScreenEffectFadeInCheck();
void ScreenEffectFadeInDirectSet();

// 
// Start address: 0x20bdd0
void ScreenEffectInit()
{
	// Line 31, Address: 0x20bdd0, Func Offset: 0
	// Line 32, Address: 0x20bdd8, Func Offset: 0x8
	// Line 33, Address: 0x20bde4, Func Offset: 0x14
	// Line 34, Address: 0x20bdf0, Func Offset: 0x20
	// Line 35, Address: 0x20be00, Func Offset: 0x30
	// Line 36, Address: 0x20be0c, Func Offset: 0x3c
	// Func End, Address: 0x20be14, Func Offset: 0x44
}

// 
// Start address: 0x20be20
void ScreenEffectManager()
{
	// Line 45, Address: 0x20be20, Func Offset: 0
	// Line 46, Address: 0x20be34, Func Offset: 0x14
	// Line 47, Address: 0x20be50, Func Offset: 0x30
	// Line 48, Address: 0x20be70, Func Offset: 0x50
	// Line 49, Address: 0x20be80, Func Offset: 0x60
	// Line 51, Address: 0x20be8c, Func Offset: 0x6c
	// Line 52, Address: 0x20bea8, Func Offset: 0x88
	// Line 53, Address: 0x20bec4, Func Offset: 0xa4
	// Line 54, Address: 0x20bee4, Func Offset: 0xc4
	// Line 55, Address: 0x20bef0, Func Offset: 0xd0
	// Line 58, Address: 0x20bef8, Func Offset: 0xd8
	// Line 59, Address: 0x20bf18, Func Offset: 0xf8
	// Func End, Address: 0x20bf20, Func Offset: 0x100
}

// 
// Start address: 0x20bf20
int ScreenEffectFadeOutStart(int type, float time)
{
	// Line 70, Address: 0x20bf20, Func Offset: 0
	// Line 71, Address: 0x20bf2c, Func Offset: 0xc
	// Line 74, Address: 0x20bf4c, Func Offset: 0x2c
	// Line 75, Address: 0x20bf60, Func Offset: 0x40
	// Line 77, Address: 0x20bf88, Func Offset: 0x68
	// Line 78, Address: 0x20bf98, Func Offset: 0x78
	// Line 79, Address: 0x20bfa4, Func Offset: 0x84
	// Line 80, Address: 0x20bfb0, Func Offset: 0x90
	// Line 81, Address: 0x20bfbc, Func Offset: 0x9c
	// Line 82, Address: 0x20bfc8, Func Offset: 0xa8
	// Line 84, Address: 0x20bfd0, Func Offset: 0xb0
	// Line 85, Address: 0x20bfe8, Func Offset: 0xc8
	// Line 88, Address: 0x20bff4, Func Offset: 0xd4
	// Line 89, Address: 0x20c000, Func Offset: 0xe0
	// Line 90, Address: 0x20c004, Func Offset: 0xe4
	// Func End, Address: 0x20c010, Func Offset: 0xf0
}

// 
// Start address: 0x20c010
int ScreenEffectFadeOutCheck()
{
	// Line 100, Address: 0x20c010, Func Offset: 0
	// Line 101, Address: 0x20c020, Func Offset: 0x10
	// Func End, Address: 0x20c028, Func Offset: 0x18
}

// 
// Start address: 0x20c030
void ScreenEffectFadeOutDirectSet()
{
	// Line 109, Address: 0x20c030, Func Offset: 0
	// Line 110, Address: 0x20c040, Func Offset: 0x10
	// Line 111, Address: 0x20c04c, Func Offset: 0x1c
	// Func End, Address: 0x20c054, Func Offset: 0x24
}

// 
// Start address: 0x20c060
int ScreenEffectFadeInStart(int type, float time)
{
	// Line 122, Address: 0x20c060, Func Offset: 0
	// Line 123, Address: 0x20c06c, Func Offset: 0xc
	// Line 126, Address: 0x20c088, Func Offset: 0x28
	// Line 127, Address: 0x20c09c, Func Offset: 0x3c
	// Line 129, Address: 0x20c0c4, Func Offset: 0x64
	// Line 130, Address: 0x20c0d8, Func Offset: 0x78
	// Line 131, Address: 0x20c0e4, Func Offset: 0x84
	// Line 133, Address: 0x20c0f8, Func Offset: 0x98
	// Line 134, Address: 0x20c108, Func Offset: 0xa8
	// Line 136, Address: 0x20c110, Func Offset: 0xb0
	// Line 137, Address: 0x20c128, Func Offset: 0xc8
	// Line 140, Address: 0x20c134, Func Offset: 0xd4
	// Line 141, Address: 0x20c140, Func Offset: 0xe0
	// Line 142, Address: 0x20c144, Func Offset: 0xe4
	// Func End, Address: 0x20c150, Func Offset: 0xf0
}

// 
// Start address: 0x20c150
int ScreenEffectFadeInCheck()
{
	// Line 152, Address: 0x20c150, Func Offset: 0
	// Line 153, Address: 0x20c160, Func Offset: 0x10
	// Func End, Address: 0x20c168, Func Offset: 0x18
}

// 
// Start address: 0x20c170
void ScreenEffectFadeInDirectSet()
{
	// Line 161, Address: 0x20c170, Func Offset: 0
	// Line 162, Address: 0x20c17c, Func Offset: 0xc
	// Line 163, Address: 0x20c184, Func Offset: 0x14
	// Func End, Address: 0x20c18c, Func Offset: 0x1c
}

