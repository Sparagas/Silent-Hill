typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _Display;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;


typedef unsigned char type_0[518400];
typedef unsigned int* type_1[2];
typedef unsigned int* type_2[2][3];
typedef unsigned int type_3[80];
typedef unsigned int type_4[80];

struct _anon0
{
	long pts;
	long dts;
	int pos;
	int len;
};

struct _anon1
{
	<unknown fundamental type (0xa510)>* data;
	<unknown fundamental type (0xa510)>* tag;
	int n;
	int dmaStart;
	int dmaN;
	int readBytes;
	int buffSize;
	_anon10 env;
	int sema;
	int isActive;
	long totalBytes;
	_anon0* ts;
	int n_ts;
	int count_ts;
	int wt_ts;
};

struct _anon2
{
	int status;
	unsigned int* v;
};

struct _Display
{
	_anon7 dispenv;
	int fbp0;
	int fbp1;
	int fb_w;
	int fb_h;
};

struct _anon3
{
	int x;
	int y;
	int w;
	int h;
};

struct _anon4
{
	struct
	{
		unsigned int EN1 : 1;
		unsigned int EN2 : 1;
		unsigned int CRTMD : 3;
		unsigned int MMOD : 1;
		unsigned int AMOD : 1;
		unsigned int SLBG : 1;
		unsigned int ALP : 8;
		unsigned int p0 : 16;
	};
	unsigned int p1;
};

struct _anon5
{
	unsigned char v[518400];
};

struct _anon6
{
	_anon5* data;
	_anon2* tagProg;
	_anon2* tagInter;
	_anon2* tag;
	int write;
	int count;
	int size;
};

struct _anon7
{
	_anon4 pmode;
	_anon11 smode2;
	_anon8 dispfb;
	_anon12 display;
	_anon13 bgcolor;
};

struct _anon8
{
	struct
	{
		unsigned int FBP : 9;
		unsigned int FBW : 6;
		unsigned int PSM : 5;
		unsigned int p0 : 12;
	};
	struct
	{
		unsigned int DBX : 11;
		unsigned int DBY : 11;
		unsigned int p1 : 10;
	};
};

struct _anon9
{
	unsigned int* micro[2][3];
};

struct _anon10
{
	unsigned int d4madr;
	unsigned int d4tadr;
	unsigned int d4qwc;
	unsigned int d4chcr;
	unsigned int d3madr;
	unsigned int d3qwc;
	unsigned int d3chcr;
	unsigned int ipubp;
	unsigned int ipuctrl;
};

struct _anon11
{
	struct
	{
		unsigned int INT : 1;
		unsigned int FFMD : 1;
		unsigned int DPMS : 2;
		unsigned int p0 : 28;
	};
	unsigned int p1;
};

struct _anon12
{
	struct
	{
		unsigned int DX : 12;
		unsigned int DY : 11;
		unsigned int MAGH : 4;
		unsigned int MAGV : 2;
		unsigned int p0 : 3;
	};
	struct
	{
		unsigned int DW : 12;
		unsigned int DH : 11;
		unsigned int p1 : 9;
	};
};

struct _anon13
{
	struct
	{
		unsigned int R : 8;
		unsigned int G : 8;
		unsigned int B : 8;
		unsigned int p0 : 8;
	};
	unsigned int p1;
};

struct _anon14
{
	_anon1 vibuf;
	unsigned int state;
	int sema;
	int hid_endimage;
	int hid_vblank;
	_anon9 csc;
};

int isCountVblank;
int vblankCount;
int isFrameEnd;
int isUp;
int handler_error;
unsigned int localTags[80];
unsigned int clearTags[80];
_Display display;
int csct;
_anon14 videoDec;
int frd;
_anon6 voBuf;

void dispCreate(_Display* d, int fb_w, int fb_h);
void dispDelete();
void dispSwitch(_Display* d, int id);
void dispClear(_Display* d, unsigned int val);
unsigned int* setFlatRect(unsigned int* p, _anon3* rect, unsigned int val);
unsigned int* setGIFtag(unsigned int* p, unsigned long regs, unsigned int nreg, unsigned int flg, unsigned int prim, unsigned int pre, unsigned int eop, unsigned int nloop);
unsigned int* setGIFad(unsigned int* p, unsigned int reg, unsigned long value);
unsigned int* setPRIM(unsigned int* p, unsigned int prim, unsigned int iip, unsigned int tme, unsigned int fge, unsigned int abe, unsigned int aa1, unsigned int fst, unsigned int ctxt, unsigned int fix);
unsigned int* setRGBAQ(unsigned int* p, unsigned int r, unsigned int g, unsigned int b, unsigned int a, unsigned int q);
unsigned int* setXYZ2(unsigned int* p, unsigned int x, unsigned int y, unsigned int z);
unsigned int* setFRAME_1(unsigned int* p, unsigned int fbp, unsigned int fbw, unsigned int psm, unsigned int fbmask);
unsigned int* setTEST_1(unsigned int* p, unsigned int ate, unsigned int atst, unsigned int aref, unsigned int afail, unsigned int date, unsigned int datm, unsigned int zte, unsigned int ztst);
unsigned int* setSCISSOR_1(unsigned int* p, unsigned int scax0, unsigned int scax1, unsigned int scay0, unsigned int scay1);
unsigned int* setXYOFFSET_1(unsigned int* p, unsigned int ofx, unsigned int ofy);
unsigned int* setPRMODECONT(unsigned int* p, unsigned int ac);
unsigned int* setCLAMP_1(unsigned int* p, unsigned int wms, unsigned int wmt, unsigned int minu, unsigned int maxu, unsigned int minv, unsigned int maxv);
void clearFinish();
int vblankHandler();
int handler_endimage();
void startDisplay(int waitEven);
void endDisplay();

// 
// Start address: 0x237b40
void dispCreate(_Display* d, int fb_w, int fb_h)
{
	unsigned int* p;
	// Line 85, Address: 0x237b40, Func Offset: 0
	// Line 88, Address: 0x237b58, Func Offset: 0x18
	// Line 89, Address: 0x237b60, Func Offset: 0x20
	// Line 90, Address: 0x237b68, Func Offset: 0x28
	// Line 91, Address: 0x237b70, Func Offset: 0x30
	// Line 92, Address: 0x237b78, Func Offset: 0x38
	// Line 94, Address: 0x237b80, Func Offset: 0x40
	// Line 95, Address: 0x237b88, Func Offset: 0x48
	// Line 96, Address: 0x237be0, Func Offset: 0xa0
	// Line 97, Address: 0x237bec, Func Offset: 0xac
	// Line 106, Address: 0x237bf8, Func Offset: 0xb8
	// Line 108, Address: 0x237c18, Func Offset: 0xd8
	// Line 111, Address: 0x237c38, Func Offset: 0xf8
	// Line 113, Address: 0x237c60, Func Offset: 0x120
	// Line 114, Address: 0x237c84, Func Offset: 0x144
	// Line 119, Address: 0x237c90, Func Offset: 0x150
	// Line 122, Address: 0x237ca0, Func Offset: 0x160
	// Line 123, Address: 0x237cb8, Func Offset: 0x178
	// Line 124, Address: 0x237ce4, Func Offset: 0x1a4
	// Line 125, Address: 0x237cf8, Func Offset: 0x1b8
	// Line 131, Address: 0x237d54, Func Offset: 0x214
	// Line 141, Address: 0x237d84, Func Offset: 0x244
	// Line 147, Address: 0x237de8, Func Offset: 0x2a8
	// Line 148, Address: 0x237e00, Func Offset: 0x2c0
	// Line 156, Address: 0x237e28, Func Offset: 0x2e8
	// Line 157, Address: 0x237e44, Func Offset: 0x304
	// Line 158, Address: 0x237e54, Func Offset: 0x314
	// Line 160, Address: 0x237e64, Func Offset: 0x324
	// Line 162, Address: 0x237e74, Func Offset: 0x334
	// Func End, Address: 0x237e88, Func Offset: 0x348
}

// 
// Start address: 0x237e90
void dispDelete()
{
	// Line 169, Address: 0x237e90, Func Offset: 0
	// Line 170, Address: 0x237e94, Func Offset: 0x4
	// Func End, Address: 0x237ea0, Func Offset: 0x10
}

// 
// Start address: 0x237ea0
void dispSwitch(_Display* d, int id)
{
	// Line 177, Address: 0x237ea0, Func Offset: 0
	// Line 178, Address: 0x237eb4, Func Offset: 0x14
	// Line 179, Address: 0x237efc, Func Offset: 0x5c
	// Line 180, Address: 0x237f08, Func Offset: 0x68
	// Func End, Address: 0x237f1c, Func Offset: 0x7c
}

// 
// Start address: 0x237f20
void dispClear(_Display* d, unsigned int val)
{
	_anon3 rect;
	unsigned int* p;
	// Line 187, Address: 0x237f20, Func Offset: 0
	// Line 191, Address: 0x237f34, Func Offset: 0x14
	// Line 192, Address: 0x237f38, Func Offset: 0x18
	// Line 193, Address: 0x237f3c, Func Offset: 0x1c
	// Line 194, Address: 0x237f4c, Func Offset: 0x2c
	// Line 196, Address: 0x237f80, Func Offset: 0x60
	// Line 197, Address: 0x237f98, Func Offset: 0x78
	// Line 198, Address: 0x237fc4, Func Offset: 0xa4
	// Line 200, Address: 0x237fdc, Func Offset: 0xbc
	// Line 201, Address: 0x237ff8, Func Offset: 0xd8
	// Line 202, Address: 0x238008, Func Offset: 0xe8
	// Line 204, Address: 0x238018, Func Offset: 0xf8
	// Line 205, Address: 0x238028, Func Offset: 0x108
	// Func End, Address: 0x23803c, Func Offset: 0x11c
}

// 
// Start address: 0x238040
unsigned int* setFlatRect(unsigned int* p, _anon3* rect, unsigned int val)
{
	// Line 228, Address: 0x238040, Func Offset: 0
	// Line 229, Address: 0x238054, Func Offset: 0x14
	// Line 240, Address: 0x238088, Func Offset: 0x48
	// Line 242, Address: 0x2380ac, Func Offset: 0x6c
	// Line 244, Address: 0x2380ec, Func Offset: 0xac
	// Line 246, Address: 0x238128, Func Offset: 0xe8
	// Line 247, Address: 0x23812c, Func Offset: 0xec
	// Func End, Address: 0x23813c, Func Offset: 0xfc
}

// 
// Start address: 0x238140
unsigned int* setGIFtag(unsigned int* p, unsigned long regs, unsigned int nreg, unsigned int flg, unsigned int prim, unsigned int pre, unsigned int eop, unsigned int nloop)
{
	// Line 283, Address: 0x238140, Func Offset: 0
	// Line 284, Address: 0x238164, Func Offset: 0x24
	// Line 285, Address: 0x23817c, Func Offset: 0x3c
	// Line 286, Address: 0x2381b0, Func Offset: 0x70
	// Line 287, Address: 0x2381c4, Func Offset: 0x84
	// Line 288, Address: 0x2381dc, Func Offset: 0x9c
	// Line 289, Address: 0x2381e4, Func Offset: 0xa4
	// Func End, Address: 0x2381f0, Func Offset: 0xb0
}

// 
// Start address: 0x2381f0
unsigned int* setGIFad(unsigned int* p, unsigned int reg, unsigned long value)
{
	// Line 292, Address: 0x2381f0, Func Offset: 0
	// Line 293, Address: 0x238200, Func Offset: 0x10
	// Line 294, Address: 0x238214, Func Offset: 0x24
	// Line 295, Address: 0x23822c, Func Offset: 0x3c
	// Line 296, Address: 0x238238, Func Offset: 0x48
	// Line 297, Address: 0x238240, Func Offset: 0x50
	// Line 298, Address: 0x238248, Func Offset: 0x58
	// Func End, Address: 0x238254, Func Offset: 0x64
}

// 
// Start address: 0x238260
unsigned int* setPRIM(unsigned int* p, unsigned int prim, unsigned int iip, unsigned int tme, unsigned int fge, unsigned int abe, unsigned int aa1, unsigned int fst, unsigned int ctxt, unsigned int fix)
{
	unsigned long val;
	// Line 323, Address: 0x238260, Func Offset: 0
	// Line 324, Address: 0x23828c, Func Offset: 0x2c
	// Line 326, Address: 0x238338, Func Offset: 0xd8
	// Line 327, Address: 0x23834c, Func Offset: 0xec
	// Func End, Address: 0x238360, Func Offset: 0x100
}

// 
// Start address: 0x238360
unsigned int* setRGBAQ(unsigned int* p, unsigned int r, unsigned int g, unsigned int b, unsigned int a, unsigned int q)
{
	unsigned long val;
	// Line 337, Address: 0x238360, Func Offset: 0
	// Line 338, Address: 0x238384, Func Offset: 0x24
	// Line 339, Address: 0x2383e0, Func Offset: 0x80
	// Line 340, Address: 0x2383f4, Func Offset: 0x94
	// Func End, Address: 0x238408, Func Offset: 0xa8
}

// 
// Start address: 0x238410
unsigned int* setXYZ2(unsigned int* p, unsigned int x, unsigned int y, unsigned int z)
{
	unsigned long val;
	// Line 343, Address: 0x238410, Func Offset: 0
	// Line 344, Address: 0x23842c, Func Offset: 0x1c
	// Line 345, Address: 0x238460, Func Offset: 0x50
	// Line 346, Address: 0x238474, Func Offset: 0x64
	// Func End, Address: 0x238488, Func Offset: 0x78
}

// 
// Start address: 0x238490
unsigned int* setFRAME_1(unsigned int* p, unsigned int fbp, unsigned int fbw, unsigned int psm, unsigned int fbmask)
{
	unsigned long val;
	// Line 350, Address: 0x238490, Func Offset: 0
	// Line 351, Address: 0x2384b0, Func Offset: 0x20
	// Line 352, Address: 0x2384f8, Func Offset: 0x68
	// Line 353, Address: 0x23850c, Func Offset: 0x7c
	// Func End, Address: 0x238520, Func Offset: 0x90
}

// 
// Start address: 0x238520
unsigned int* setTEST_1(unsigned int* p, unsigned int ate, unsigned int atst, unsigned int aref, unsigned int afail, unsigned int date, unsigned int datm, unsigned int zte, unsigned int ztst)
{
	unsigned long val;
	// Line 357, Address: 0x238520, Func Offset: 0
	// Line 358, Address: 0x23854c, Func Offset: 0x2c
	// Line 360, Address: 0x2385e4, Func Offset: 0xc4
	// Line 361, Address: 0x2385f8, Func Offset: 0xd8
	// Func End, Address: 0x23860c, Func Offset: 0xec
}

// 
// Start address: 0x238610
unsigned int* setSCISSOR_1(unsigned int* p, unsigned int scax0, unsigned int scax1, unsigned int scay0, unsigned int scay1)
{
	unsigned long val;
	// Line 365, Address: 0x238610, Func Offset: 0
	// Line 366, Address: 0x238630, Func Offset: 0x20
	// Line 367, Address: 0x238678, Func Offset: 0x68
	// Line 368, Address: 0x23868c, Func Offset: 0x7c
	// Func End, Address: 0x2386a0, Func Offset: 0x90
}

// 
// Start address: 0x2386a0
unsigned int* setXYOFFSET_1(unsigned int* p, unsigned int ofx, unsigned int ofy)
{
	unsigned long val;
	// Line 371, Address: 0x2386a0, Func Offset: 0
	// Line 372, Address: 0x2386b8, Func Offset: 0x18
	// Line 373, Address: 0x2386d8, Func Offset: 0x38
	// Line 374, Address: 0x2386ec, Func Offset: 0x4c
	// Func End, Address: 0x238700, Func Offset: 0x60
}

// 
// Start address: 0x238700
unsigned int* setPRMODECONT(unsigned int* p, unsigned int ac)
{
	unsigned long val;
	// Line 377, Address: 0x238700, Func Offset: 0
	// Line 378, Address: 0x238714, Func Offset: 0x14
	// Line 379, Address: 0x238720, Func Offset: 0x20
	// Line 380, Address: 0x238734, Func Offset: 0x34
	// Func End, Address: 0x238748, Func Offset: 0x48
}

// 
// Start address: 0x238750
unsigned int* setCLAMP_1(unsigned int* p, unsigned int wms, unsigned int wmt, unsigned int minu, unsigned int maxu, unsigned int minv, unsigned int maxv)
{
	unsigned long val;
	// Line 392, Address: 0x238750, Func Offset: 0
	// Line 393, Address: 0x238778, Func Offset: 0x28
	// Line 394, Address: 0x2387e8, Func Offset: 0x98
	// Line 395, Address: 0x2387fc, Func Offset: 0xac
	// Func End, Address: 0x238810, Func Offset: 0xc0
}

// 
// Start address: 0x238810
void clearFinish()
{
	// Line 444, Address: 0x238810, Func Offset: 0
	// Line 445, Address: 0x238824, Func Offset: 0x14
	// Func End, Address: 0x23882c, Func Offset: 0x1c
}

// 
// Start address: 0x238830
int vblankHandler()
{
	_anon2* tag;
	// Line 452, Address: 0x238830, Func Offset: 0
	// Line 456, Address: 0x23883c, Func Offset: 0xc
	// Line 457, Address: 0x238860, Func Offset: 0x30
	// Line 460, Address: 0x238870, Func Offset: 0x40
	// Line 462, Address: 0x238884, Func Offset: 0x54
	// Line 463, Address: 0x23889c, Func Offset: 0x6c
	// Line 464, Address: 0x2388ac, Func Offset: 0x7c
	// Line 465, Address: 0x2388c0, Func Offset: 0x90
	// Line 466, Address: 0x2388c8, Func Offset: 0x98
	// Line 467, Address: 0x2388dc, Func Offset: 0xac
	// Line 468, Address: 0x2388e4, Func Offset: 0xb4
	// Line 471, Address: 0x2388f0, Func Offset: 0xc0
	// Line 472, Address: 0x238910, Func Offset: 0xe0
	// Line 473, Address: 0x238924, Func Offset: 0xf4
	// Line 480, Address: 0x238948, Func Offset: 0x118
	// Line 481, Address: 0x238954, Func Offset: 0x124
	// Line 482, Address: 0x23895c, Func Offset: 0x12c
	// Line 483, Address: 0x238984, Func Offset: 0x154
	// Line 484, Address: 0x238998, Func Offset: 0x168
	// Line 491, Address: 0x2389e4, Func Offset: 0x1b4
	// Line 492, Address: 0x2389f0, Func Offset: 0x1c0
	// Line 493, Address: 0x2389f4, Func Offset: 0x1c4
	// Line 498, Address: 0x238a00, Func Offset: 0x1d0
	// Line 499, Address: 0x238a08, Func Offset: 0x1d8
	// Line 500, Address: 0x238a0c, Func Offset: 0x1dc
	// Func End, Address: 0x238a20, Func Offset: 0x1f0
}

// 
// Start address: 0x238a20
int handler_endimage()
{
	// Line 507, Address: 0x238a20, Func Offset: 0
	// Line 508, Address: 0x238a28, Func Offset: 0x8
	// Line 510, Address: 0x238a30, Func Offset: 0x10
	// Line 511, Address: 0x238a40, Func Offset: 0x20
	// Line 512, Address: 0x238a50, Func Offset: 0x30
	// Line 514, Address: 0x238a58, Func Offset: 0x38
	// Line 515, Address: 0x238a60, Func Offset: 0x40
	// Line 516, Address: 0x238a64, Func Offset: 0x44
	// Func End, Address: 0x238a74, Func Offset: 0x54
}

// 
// Start address: 0x238a80
void startDisplay(int waitEven)
{
	// Line 524, Address: 0x238a80, Func Offset: 0
	// Line 527, Address: 0x238a90, Func Offset: 0x10
	// Line 529, Address: 0x238ab0, Func Offset: 0x30
	// Line 530, Address: 0x238ab8, Func Offset: 0x38
	// Line 531, Address: 0x238ac4, Func Offset: 0x44
	// Line 532, Address: 0x238acc, Func Offset: 0x4c
	// Func End, Address: 0x238ae0, Func Offset: 0x60
}

// 
// Start address: 0x238ae0
void endDisplay()
{
	// Line 539, Address: 0x238ae0, Func Offset: 0
	// Line 540, Address: 0x238ae8, Func Offset: 0x8
	// Line 541, Address: 0x238af8, Func Offset: 0x18
	// Line 542, Address: 0x238b00, Func Offset: 0x20
	// Line 543, Address: 0x238b08, Func Offset: 0x28
	// Func End, Address: 0x238b18, Func Offset: 0x38
}

