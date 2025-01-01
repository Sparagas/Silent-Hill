typedef struct Vif1Work;
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

struct Vif1Work
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

Vif1Work vif1_work;

void ktVif1Init();

// 
// Start address: 0x125400
void ktVif1Init()
{
	// Line 34, Address: 0x125400, Func Offset: 0
	// Line 35, Address: 0x125408, Func Offset: 0x8
	// Line 37, Address: 0x125420, Func Offset: 0x20
	// Line 38, Address: 0x125434, Func Offset: 0x34
	// Func End, Address: 0x125444, Func Offset: 0x44
}

