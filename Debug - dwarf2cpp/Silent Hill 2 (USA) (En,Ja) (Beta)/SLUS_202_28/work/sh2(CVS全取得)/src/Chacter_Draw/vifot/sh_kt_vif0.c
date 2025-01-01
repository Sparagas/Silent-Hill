typedef struct Vif0Work;
typedef struct _anon0;
typedef struct _sceDmaTag;
typedef struct _anon1;


typedef unsigned int type_0[2];
typedef unsigned int type_1[3];
typedef unsigned int type_2[3];
typedef unsigned int type_3[3];
typedef unsigned int type_4[3];
typedef unsigned int type_5[3];
typedef unsigned int type_6[3];
typedef unsigned int type_7[4];
typedef unsigned int type_8[4];
typedef unsigned int type_9[3];

struct Vif0Work
{
	_anon0* dma;
};

struct _anon0
{
	_anon1 chcr;
	unsigned int p0[3];
	void* madr;
	unsigned int p1[3];
	unsigned int qwc;
	unsigned int p2[3];
	_sceDmaTag* tadr;
	unsigned int p3[3];
	void* as0;
	unsigned int p4[3];
	void* as1;
	unsigned int p5[3];
	unsigned int p6[4];
	unsigned int p7[4];
	void* sadr;
	unsigned int p8[3];
};

struct _sceDmaTag
{
	unsigned short qwc;
	unsigned char mark;
	unsigned char id;
	_sceDmaTag* next;
	unsigned int p[2];
};

struct _anon1
{
	struct
	{
		unsigned int DIR : 1;
		unsigned int p0 : 1;
		unsigned int MOD : 2;
		unsigned int ASP : 2;
		unsigned int TTE : 1;
		unsigned int TIE : 1;
		unsigned int STR : 1;
		unsigned int p1 : 7;
		unsigned int TAG : 16;
	};
};

Vif0Work vif0_work;

void ktVif0Init();
void ktVif0Wait();
void ktVif0Wait2();
void ktVif0Send(void* p, int tte);

// 
// Start address: 0x1251e0
void ktVif0Init()
{
	// Line 34, Address: 0x1251e0, Func Offset: 0
	// Line 35, Address: 0x1251e8, Func Offset: 0x8
	// Line 37, Address: 0x125200, Func Offset: 0x20
	// Line 38, Address: 0x125214, Func Offset: 0x34
	// Func End, Address: 0x125224, Func Offset: 0x44
}

// 
// Start address: 0x125230
void ktVif0Wait()
{
	// Line 56, Address: 0x125230, Func Offset: 0
	// Line 64, Address: 0x125238, Func Offset: 0x8
	// Line 70, Address: 0x125258, Func Offset: 0x28
	// Func End, Address: 0x125268, Func Offset: 0x38
}

// 
// Start address: 0x125270
void ktVif0Wait2()
{
	// Line 79, Address: 0x125270, Func Offset: 0
	// Line 80, Address: 0x125278, Func Offset: 0x8
	// Line 82, Address: 0x125280, Func Offset: 0x10
	// Line 83, Address: 0x12529c, Func Offset: 0x2c
	// Func End, Address: 0x1252ac, Func Offset: 0x3c
}

// 
// Start address: 0x1252b0
void ktVif0Send(void* p, int tte)
{
	// Line 91, Address: 0x1252b0, Func Offset: 0
	// Line 92, Address: 0x1252c8, Func Offset: 0x18
	// Line 93, Address: 0x1252d0, Func Offset: 0x20
	// Line 94, Address: 0x1252f4, Func Offset: 0x44
	// Line 95, Address: 0x125308, Func Offset: 0x58
	// Func End, Address: 0x125320, Func Offset: 0x70
}

