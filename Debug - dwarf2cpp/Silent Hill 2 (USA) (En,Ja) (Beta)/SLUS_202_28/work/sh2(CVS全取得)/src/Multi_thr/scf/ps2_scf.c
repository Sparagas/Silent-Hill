typedef struct _anon0;
typedef struct _anon1;


typedef _anon1 type[1];

struct _anon0
{
	unsigned char stat;
	unsigned char second;
	unsigned char minute;
	unsigned char hour;
	unsigned char pad;
	unsigned char day;
	unsigned char month;
	unsigned char year;
};

struct _anon1
{
	short TimeZone;
	unsigned char Aspect;
	unsigned char DateNotation;
	unsigned char Language;
	unsigned char Spdif;
	unsigned char SummerTime;
	unsigned char TimeNotation;
};

_anon1 ps2ScfDefault[1];
int excl_sid;

void ps2ScfInit();
int ps2ScfGetLanguage();
int ps2ScfGetAspect();
int ps2ScfGetSpdif();
int ps2ScfGetTimeZone();
int ps2ScfGetDateNotation();
int ps2ScfGetSummerTime();
int ps2ScfGetTimeNotation();
void ps2ScfGetLocalTimefromRTC(_anon0* rtc);

// 
// Start address: 0x22c030
void ps2ScfInit()
{
	// Line 32, Address: 0x22c030, Func Offset: 0
	// Line 33, Address: 0x22c038, Func Offset: 0x8
	// Line 34, Address: 0x22c04c, Func Offset: 0x1c
	// Line 35, Address: 0x22c068, Func Offset: 0x38
	// Line 36, Address: 0x22c078, Func Offset: 0x48
	// Line 38, Address: 0x22c088, Func Offset: 0x58
	// Func End, Address: 0x22c098, Func Offset: 0x68
}

// 
// Start address: 0x22c0a0
int ps2ScfGetLanguage()
{
	int ret;
	// Line 41, Address: 0x22c0a0, Func Offset: 0
	// Line 43, Address: 0x22c0ac, Func Offset: 0xc
	// Line 44, Address: 0x22c0bc, Func Offset: 0x1c
	// Line 45, Address: 0x22c0c8, Func Offset: 0x28
	// Line 46, Address: 0x22c0d8, Func Offset: 0x38
	// Line 47, Address: 0x22c0dc, Func Offset: 0x3c
	// Func End, Address: 0x22c0f0, Func Offset: 0x50
}

// 
// Start address: 0x22c0f0
int ps2ScfGetAspect()
{
	int ret;
	// Line 50, Address: 0x22c0f0, Func Offset: 0
	// Line 52, Address: 0x22c0fc, Func Offset: 0xc
	// Line 53, Address: 0x22c10c, Func Offset: 0x1c
	// Line 54, Address: 0x22c118, Func Offset: 0x28
	// Line 55, Address: 0x22c128, Func Offset: 0x38
	// Line 56, Address: 0x22c12c, Func Offset: 0x3c
	// Func End, Address: 0x22c140, Func Offset: 0x50
}

// 
// Start address: 0x22c140
int ps2ScfGetSpdif()
{
	int ret;
	// Line 59, Address: 0x22c140, Func Offset: 0
	// Line 61, Address: 0x22c14c, Func Offset: 0xc
	// Line 62, Address: 0x22c15c, Func Offset: 0x1c
	// Line 63, Address: 0x22c168, Func Offset: 0x28
	// Line 64, Address: 0x22c178, Func Offset: 0x38
	// Line 65, Address: 0x22c17c, Func Offset: 0x3c
	// Func End, Address: 0x22c190, Func Offset: 0x50
}

// 
// Start address: 0x22c190
int ps2ScfGetTimeZone()
{
	int ret;
	// Line 68, Address: 0x22c190, Func Offset: 0
	// Line 70, Address: 0x22c19c, Func Offset: 0xc
	// Line 71, Address: 0x22c1ac, Func Offset: 0x1c
	// Line 72, Address: 0x22c1b8, Func Offset: 0x28
	// Line 73, Address: 0x22c1c8, Func Offset: 0x38
	// Line 74, Address: 0x22c1cc, Func Offset: 0x3c
	// Func End, Address: 0x22c1e0, Func Offset: 0x50
}

// 
// Start address: 0x22c1e0
int ps2ScfGetDateNotation()
{
	int ret;
	// Line 77, Address: 0x22c1e0, Func Offset: 0
	// Line 79, Address: 0x22c1ec, Func Offset: 0xc
	// Line 80, Address: 0x22c1fc, Func Offset: 0x1c
	// Line 81, Address: 0x22c208, Func Offset: 0x28
	// Line 82, Address: 0x22c218, Func Offset: 0x38
	// Line 83, Address: 0x22c21c, Func Offset: 0x3c
	// Func End, Address: 0x22c230, Func Offset: 0x50
}

// 
// Start address: 0x22c230
int ps2ScfGetSummerTime()
{
	int ret;
	// Line 86, Address: 0x22c230, Func Offset: 0
	// Line 88, Address: 0x22c23c, Func Offset: 0xc
	// Line 89, Address: 0x22c24c, Func Offset: 0x1c
	// Line 90, Address: 0x22c258, Func Offset: 0x28
	// Line 91, Address: 0x22c268, Func Offset: 0x38
	// Line 92, Address: 0x22c26c, Func Offset: 0x3c
	// Func End, Address: 0x22c280, Func Offset: 0x50
}

// 
// Start address: 0x22c280
int ps2ScfGetTimeNotation()
{
	int ret;
	// Line 95, Address: 0x22c280, Func Offset: 0
	// Line 97, Address: 0x22c28c, Func Offset: 0xc
	// Line 98, Address: 0x22c29c, Func Offset: 0x1c
	// Line 99, Address: 0x22c2a8, Func Offset: 0x28
	// Line 100, Address: 0x22c2b8, Func Offset: 0x38
	// Line 101, Address: 0x22c2bc, Func Offset: 0x3c
	// Func End, Address: 0x22c2d0, Func Offset: 0x50
}

// 
// Start address: 0x22c2d0
void ps2ScfGetLocalTimefromRTC(_anon0* rtc)
{
	// Line 104, Address: 0x22c2d0, Func Offset: 0
	// Line 105, Address: 0x22c2e0, Func Offset: 0x10
	// Line 106, Address: 0x22c2f0, Func Offset: 0x20
	// Line 107, Address: 0x22c2fc, Func Offset: 0x2c
	// Line 108, Address: 0x22c30c, Func Offset: 0x3c
	// Func End, Address: 0x22c320, Func Offset: 0x50
}

