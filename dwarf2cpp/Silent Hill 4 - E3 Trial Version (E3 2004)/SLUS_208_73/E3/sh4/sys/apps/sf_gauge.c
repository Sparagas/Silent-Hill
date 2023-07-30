typedef struct _anon0;
typedef enum _enum : unsigned char;



struct _anon0
{
	float max_val;
	float cur_val;
	float prev_val;
	float d_val;
	_enum stat;
	int max_cnt;
	int cnt;
};

enum _enum : unsigned char
{
	SF_GAUGE_NORMAL,
	SF_GAUGE_MINUS,
	SF_GAUGE_PLUS
};


float get_rate(int cnt, int max_cnt);
void sfGaugeConstruct(_anon0* gauge, float max_val, float cur_val);
void sfGaugeSetMaxCnt(_anon0* gauge, int cnt);
void sfGaugeSetCurVal(_anon0* gauge, float val);
_enum sfGaugeGetStat(_anon0* gauge);
void sfGaugeUpdate(_anon0* gauge);
float sfGaugeGetPrevVal(_anon0* gauge);
float sfGaugeGetDiffRate(_anon0* gauge);
float sfGaugeGetCurRate(_anon0* gauge);
int sfGaugeIsFull(_anon0* gauge);

// 
// Start address: 0x1d7730
float get_rate(int cnt, int max_cnt)
{
	float t;
	// Line 60, Address: 0x1d7730, Func Offset: 0
	// Line 62, Address: 0x1d7734, Func Offset: 0x4
	// Line 63, Address: 0x1d7748, Func Offset: 0x18
	// Line 64, Address: 0x1d7760, Func Offset: 0x30
	// Line 65, Address: 0x1d7778, Func Offset: 0x48
	// Line 66, Address: 0x1d7780, Func Offset: 0x50
	// Func End, Address: 0x1d7788, Func Offset: 0x58
}

// 
// Start address: 0x1d7790
void sfGaugeConstruct(_anon0* gauge, float max_val, float cur_val)
{
	// Line 79, Address: 0x1d7790, Func Offset: 0
	// Line 80, Address: 0x1d7798, Func Offset: 0x8
	// Line 84, Address: 0x1d779c, Func Offset: 0xc
	// Line 81, Address: 0x1d77a0, Func Offset: 0x10
	// Line 82, Address: 0x1d77a4, Func Offset: 0x14
	// Line 83, Address: 0x1d77a8, Func Offset: 0x18
	// Line 84, Address: 0x1d77ac, Func Offset: 0x1c
	// Line 85, Address: 0x1d77b0, Func Offset: 0x20
	// Line 86, Address: 0x1d77b4, Func Offset: 0x24
	// Line 87, Address: 0x1d77b8, Func Offset: 0x28
	// Func End, Address: 0x1d77c0, Func Offset: 0x30
}

// 
// Start address: 0x1d77c0
void sfGaugeSetMaxCnt(_anon0* gauge, int cnt)
{
	// Line 92, Address: 0x1d77c0, Func Offset: 0
	// Line 93, Address: 0x1d77c8, Func Offset: 0x8
	// Line 94, Address: 0x1d77cc, Func Offset: 0xc
	// Line 95, Address: 0x1d77d0, Func Offset: 0x10
	// Func End, Address: 0x1d77d8, Func Offset: 0x18
}

// 
// Start address: 0x1d77e0
void sfGaugeSetCurVal(_anon0* gauge, float val)
{
	// Line 103, Address: 0x1d77e0, Func Offset: 0
	// Line 104, Address: 0x1d77e8, Func Offset: 0x8
	// Line 106, Address: 0x1d77f8, Func Offset: 0x18
	// Line 107, Address: 0x1d781c, Func Offset: 0x3c
	// Line 109, Address: 0x1d7820, Func Offset: 0x40
	// Line 111, Address: 0x1d7830, Func Offset: 0x50
	// Line 113, Address: 0x1d783c, Func Offset: 0x5c
	// Line 116, Address: 0x1d7840, Func Offset: 0x60
	// Line 117, Address: 0x1d7844, Func Offset: 0x64
	// Line 118, Address: 0x1d7850, Func Offset: 0x70
	// Line 120, Address: 0x1d785c, Func Offset: 0x7c
	// Line 122, Address: 0x1d7868, Func Offset: 0x88
	// Line 123, Address: 0x1d786c, Func Offset: 0x8c
	// Line 125, Address: 0x1d7870, Func Offset: 0x90
	// Line 127, Address: 0x1d7878, Func Offset: 0x98
	// Line 129, Address: 0x1d787c, Func Offset: 0x9c
	// Line 130, Address: 0x1d7880, Func Offset: 0xa0
	// Func End, Address: 0x1d7888, Func Offset: 0xa8
}

// 
// Start address: 0x1d7890
_enum sfGaugeGetStat(_anon0* gauge)
{
	// Line 136, Address: 0x1d7890, Func Offset: 0
	// Line 139, Address: 0x1d789c, Func Offset: 0xc
	// Func End, Address: 0x1d78a4, Func Offset: 0x14
}

// 
// Start address: 0x1d78b0
void sfGaugeUpdate(_anon0* gauge)
{
	float rate;
	// Line 143, Address: 0x1d78b0, Func Offset: 0
	// Line 144, Address: 0x1d78b8, Func Offset: 0x8
	// Line 145, Address: 0x1d78c0, Func Offset: 0x10
	// Line 146, Address: 0x1d78cc, Func Offset: 0x1c
	// Line 148, Address: 0x1d78dc, Func Offset: 0x2c
	// Line 146, Address: 0x1d78e0, Func Offset: 0x30
	// Line 148, Address: 0x1d78e4, Func Offset: 0x34
	// Line 149, Address: 0x1d7904, Func Offset: 0x54
	// Line 150, Address: 0x1d7908, Func Offset: 0x58
	// Line 151, Address: 0x1d7914, Func Offset: 0x64
	// Line 152, Address: 0x1d791c, Func Offset: 0x6c
	// Line 153, Address: 0x1d7920, Func Offset: 0x70
	// Line 156, Address: 0x1d7930, Func Offset: 0x80
	// Line 158, Address: 0x1d793c, Func Offset: 0x8c
	// Line 159, Address: 0x1d7958, Func Offset: 0xa8
	// Line 160, Address: 0x1d795c, Func Offset: 0xac
	// Line 161, Address: 0x1d7964, Func Offset: 0xb4
	// Line 162, Address: 0x1d7968, Func Offset: 0xb8
	// Line 165, Address: 0x1d796c, Func Offset: 0xbc
	// Line 166, Address: 0x1d7970, Func Offset: 0xc0
	// Func End, Address: 0x1d797c, Func Offset: 0xcc
}

// 
// Start address: 0x1d7980
float sfGaugeGetPrevVal(_anon0* gauge)
{
	// Line 205, Address: 0x1d7980, Func Offset: 0
	// Line 208, Address: 0x1d7994, Func Offset: 0x14
	// Func End, Address: 0x1d799c, Func Offset: 0x1c
}

// 
// Start address: 0x1d79a0
float sfGaugeGetDiffRate(_anon0* gauge)
{
	// Line 222, Address: 0x1d79a0, Func Offset: 0
	// Line 223, Address: 0x1d79c0, Func Offset: 0x20
	// Line 224, Address: 0x1d79dc, Func Offset: 0x3c
	// Line 225, Address: 0x1d79e0, Func Offset: 0x40
	// Line 226, Address: 0x1d79e8, Func Offset: 0x48
	// Func End, Address: 0x1d79f0, Func Offset: 0x50
}

// 
// Start address: 0x1d79f0
float sfGaugeGetCurRate(_anon0* gauge)
{
	// Line 231, Address: 0x1d79f0, Func Offset: 0
	// Line 232, Address: 0x1d7a10, Func Offset: 0x20
	// Line 233, Address: 0x1d7a2c, Func Offset: 0x3c
	// Line 234, Address: 0x1d7a30, Func Offset: 0x40
	// Line 235, Address: 0x1d7a38, Func Offset: 0x48
	// Func End, Address: 0x1d7a40, Func Offset: 0x50
}

// 
// Start address: 0x1d7a40
int sfGaugeIsFull(_anon0* gauge)
{
	// Line 249, Address: 0x1d7a40, Func Offset: 0
	// Line 250, Address: 0x1d7a48, Func Offset: 0x8
	// Line 251, Address: 0x1d7a7c, Func Offset: 0x3c
	// Line 252, Address: 0x1d7a80, Func Offset: 0x40
	// Line 253, Address: 0x1d7a88, Func Offset: 0x48
	// Func End, Address: 0x1d7a90, Func Offset: 0x50
}

