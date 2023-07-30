typedef enum SPEC_LANG_O : unsigned char;
typedef struct _anon0;
typedef struct _anon1;


typedef _anon0 type_0[1];
typedef _anon0 type_1[1];

enum SPEC_LANG_O : unsigned char
{
	SPEC_LANG_JPN_O,
	SPEC_LANG_ENG_O,
	SPEC_LANG_FRN_O,
	SPEC_LANG_GER_O,
	SPEC_LANG_ITA_O,
	SPEC_LANG_SPN_O
};

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

_anon1 sh2ScfInfo;

void sh2ScfInit();
SPEC_LANG_O sh2ScfGetDefaultLanguage();
unsigned int UtilBCDToDecimal(unsigned int bcd);
int sh2ScfMakeDateStr(char* datestr, unsigned int year, unsigned int month, unsigned int day);
int sh2ScfMakeDateStrByLocalTimeFromJST(char* datestr, _anon0* jst);
int sh2ScfMakeTimeStr(char* timestr, unsigned int hour24, unsigned int minute, unsigned int second);
int sh2ScfMakeTimeStrFromRTC(char* timestr, _anon0* rtc);
int sh2ScfMakeTimeStrByLocalTimeFromJST(char* datestr, _anon0* jst);

// 
// Start address: 0x252d90
void sh2ScfInit()
{
	// Line 14, Address: 0x252d90, Func Offset: 0
	// Line 15, Address: 0x252d98, Func Offset: 0x8
	// Line 16, Address: 0x252da0, Func Offset: 0x10
	// Line 17, Address: 0x252db0, Func Offset: 0x20
	// Line 18, Address: 0x252dc0, Func Offset: 0x30
	// Line 19, Address: 0x252dd0, Func Offset: 0x40
	// Line 20, Address: 0x252de0, Func Offset: 0x50
	// Line 21, Address: 0x252df0, Func Offset: 0x60
	// Line 22, Address: 0x252e00, Func Offset: 0x70
	// Line 23, Address: 0x252e10, Func Offset: 0x80
	// Func End, Address: 0x252e20, Func Offset: 0x90
}

// 
// Start address: 0x252e20
SPEC_LANG_O sh2ScfGetDefaultLanguage()
{
	// Line 27, Address: 0x252e20, Func Offset: 0
	// Line 31, Address: 0x252e50, Func Offset: 0x30
	// Line 32, Address: 0x252e5c, Func Offset: 0x3c
	// Line 33, Address: 0x252e68, Func Offset: 0x48
	// Line 34, Address: 0x252e74, Func Offset: 0x54
	// Line 35, Address: 0x252e80, Func Offset: 0x60
	// Line 36, Address: 0x252e8c, Func Offset: 0x6c
	// Line 38, Address: 0x252e90, Func Offset: 0x70
	// Func End, Address: 0x252e98, Func Offset: 0x78
}

// 
// Start address: 0x252ea0
unsigned int UtilBCDToDecimal(unsigned int bcd)
{
	int keta;
	unsigned int dec;
	// Line 44, Address: 0x252ea0, Func Offset: 0
	// Line 45, Address: 0x252ea4, Func Offset: 0x4
	// Line 46, Address: 0x252ea8, Func Offset: 0x8
	// Line 47, Address: 0x252eb0, Func Offset: 0x10
	// Line 48, Address: 0x252ebc, Func Offset: 0x1c
	// Line 49, Address: 0x252ec0, Func Offset: 0x20
	// Line 50, Address: 0x252ecc, Func Offset: 0x2c
	// Line 52, Address: 0x252ed8, Func Offset: 0x38
	// Func End, Address: 0x252ee0, Func Offset: 0x40
}

// 
// Start address: 0x252ee0
int sh2ScfMakeDateStr(char* datestr, unsigned int year, unsigned int month, unsigned int day)
{
	// Line 72, Address: 0x252ee0, Func Offset: 0
	// Line 73, Address: 0x252ef4, Func Offset: 0x14
	// Line 75, Address: 0x252f24, Func Offset: 0x44
	// Line 76, Address: 0x252f3c, Func Offset: 0x5c
	// Line 78, Address: 0x252f44, Func Offset: 0x64
	// Line 79, Address: 0x252f58, Func Offset: 0x78
	// Line 81, Address: 0x252f60, Func Offset: 0x80
	// Line 86, Address: 0x252f7c, Func Offset: 0x9c
	// Line 87, Address: 0x252f80, Func Offset: 0xa0
	// Func End, Address: 0x252f90, Func Offset: 0xb0
}

// 
// Start address: 0x252f90
int sh2ScfMakeDateStrByLocalTimeFromJST(char* datestr, _anon0* jst)
{
	_anon0 rtc[1];
	unsigned int day;
	unsigned int month;
	unsigned int year;
	// Line 101, Address: 0x252f90, Func Offset: 0
	// Line 106, Address: 0x252fb4, Func Offset: 0x24
	// Line 107, Address: 0x252fe4, Func Offset: 0x54
	// Line 108, Address: 0x252ff0, Func Offset: 0x60
	// Line 109, Address: 0x253004, Func Offset: 0x74
	// Line 110, Address: 0x253014, Func Offset: 0x84
	// Line 113, Address: 0x253020, Func Offset: 0x90
	// Line 114, Address: 0x253040, Func Offset: 0xb0
	// Line 116, Address: 0x25305c, Func Offset: 0xcc
	// Line 117, Address: 0x253074, Func Offset: 0xe4
	// Func End, Address: 0x253098, Func Offset: 0x108
}

// 
// Start address: 0x2530a0
int sh2ScfMakeTimeStr(char* timestr, unsigned int hour24, unsigned int minute, unsigned int second)
{
	// Line 124, Address: 0x2530a0, Func Offset: 0
	// Line 125, Address: 0x2530b4, Func Offset: 0x14
	// Line 126, Address: 0x2530c4, Func Offset: 0x24
	// Line 127, Address: 0x2530dc, Func Offset: 0x3c
	// Line 129, Address: 0x2530e8, Func Offset: 0x48
	// Line 131, Address: 0x253134, Func Offset: 0x94
	// Line 133, Address: 0x253138, Func Offset: 0x98
	// Func End, Address: 0x253148, Func Offset: 0xa8
}

// 
// Start address: 0x253150
int sh2ScfMakeTimeStrFromRTC(char* timestr, _anon0* rtc)
{
	unsigned int second;
	unsigned int minute;
	unsigned int hour;
	// Line 136, Address: 0x253150, Func Offset: 0
	// Line 141, Address: 0x253170, Func Offset: 0x20
	// Line 142, Address: 0x253180, Func Offset: 0x30
	// Line 143, Address: 0x253190, Func Offset: 0x40
	// Line 145, Address: 0x25319c, Func Offset: 0x4c
	// Line 146, Address: 0x2531b4, Func Offset: 0x64
	// Func End, Address: 0x2531d4, Func Offset: 0x84
}

// 
// Start address: 0x2531e0
int sh2ScfMakeTimeStrByLocalTimeFromJST(char* datestr, _anon0* jst)
{
	_anon0 rtc[1];
	// Line 149, Address: 0x2531e0, Func Offset: 0
	// Line 151, Address: 0x2531f0, Func Offset: 0x10
	// Line 152, Address: 0x25321c, Func Offset: 0x3c
	// Line 153, Address: 0x253228, Func Offset: 0x48
	// Line 154, Address: 0x253238, Func Offset: 0x58
	// Func End, Address: 0x25324c, Func Offset: 0x6c
}

