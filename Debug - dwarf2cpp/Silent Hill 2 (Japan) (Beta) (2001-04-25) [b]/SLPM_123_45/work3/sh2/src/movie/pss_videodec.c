typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
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
typedef enum _enum : unsigned char;
typedef struct _anon13;

typedef int(*type_2)(_anon3*, _anon1*, void*);
typedef int(*type_4)(_anon3*, _anon1*, void*);
typedef int(*type_5)(_anon3*, _anon6*, void*);
typedef int(*type_6)(_anon3*, _anon1*, void*);
typedef int(*type_11)(_anon3*, _anon13*, void*);
typedef int(*type_12)(_anon3*, _anon1*, void*);

typedef unsigned char type_0[256];
typedef unsigned char type_1[64];
typedef unsigned char type_3[64];
typedef unsigned char type_7[4];
typedef unsigned char type_8[518400];
typedef unsigned int* type_9[2];
typedef unsigned int* type_10[2][3];

struct _anon0
{
	unsigned char y[256];
	unsigned char cb[64];
	unsigned char cr[64];
};

union _anon1
{
	_enum type;
	_anon13 error;
	_anon6 ts;
	_anon2 str;
};

struct _anon2
{
	_enum type;
	unsigned char* header;
	unsigned char* data;
	unsigned int len;
	long pts;
	long dts;
};

struct _anon3
{
	int width;
	int height;
	int frameCount;
	long pts;
	long dts;
	unsigned long flags;
	long pts2nd;
	long dts2nd;
	unsigned long flags2nd;
	void* sys;
};

struct _anon4
{
	unsigned char v[518400];
};

struct _anon5
{
	_anon9 vibuf;
	unsigned int state;
	int sema;
	int hid_endimage;
	int hid_vblank;
	_anon12 csc;
};

struct _anon6
{
	_enum type;
	long pts;
	long dts;
};

struct _anon7
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

struct _anon8
{
	long pts;
	long dts;
	int pos;
	int len;
};

struct _anon9
{
	<unknown fundamental type (0xa510)>* data;
	<unknown fundamental type (0xa510)>* tag;
	int n;
	int dmaStart;
	int dmaN;
	int readBytes;
	int buffSize;
	_anon7 env;
	int sema;
	int isActive;
	long totalBytes;
	_anon8* ts;
	int n_ts;
	int count_ts;
	int wt_ts;
};

struct _anon10
{
	int status;
	unsigned int* v;
};

struct _anon11
{
	_anon4* data;
	_anon10* tagProg;
	_anon10* tagInter;
	_anon10* tag;
	int write;
	int count;
	int size;
};

struct _anon12
{
	unsigned int* micro[2][3];
};

enum _enum : unsigned char
{
	sceMpegCbError,
	sceMpegCbNodata,
	sceMpegCbStopDMA,
	sceMpegCbRestartDMA,
	sceMpegCbBackground,
	sceMpegCbTimeStamp,
	sceMpegCbStr
};

struct _anon13
{
	_enum type;
	char* errMessage;
};

int(*mpegTS)(_anon3*, _anon6*, void*);
_anon3 sys_mpeg;
int(*mpegRestartDMA)(_anon3*, _anon1*, void*);
int(*mpegStopDMA)(_anon3*, _anon1*, void*);
int(*mpegNodata)(_anon3*, _anon1*, void*);
int(*mpegError)(_anon3*, _anon13*, void*);
_anon5 videoDec;
_anon11 voBuf;
int csct;

int videoDecCreate(_anon5* vd, unsigned char* mpegWork, int mpegWorkSize, <unknown fundamental type (0xa510)>* data, <unknown fundamental type (0xa510)>* tag, int tagSize, _anon8* pts, int n_pts);
int videoDecSetStream(int strType, int ch, int(*cb)(_anon3*, _anon1*, void*), void* data);
void videoDecBeginPut(_anon5* vd, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1);
void videoDecEndPut(_anon5* vd, int size);
int videoDecDelete(_anon5* vd);
void videoDecAbort(_anon5* vd);
unsigned int videoDecGetState(_anon5* vd);
unsigned int videoDecSetState(_anon5* vd, unsigned int state);
int videoDecPutTs(_anon5* vd, long pts_val, long dts_val, unsigned char* start, int len);
int videoDecInputCount(_anon5* vd);
int videoDecFlush(_anon5* vd);
int videoDecIsFlushed(_anon5* vd);
void videoDecMain(_anon5* vd);
int decBs0(_anon5* vd);
int mpegError(_anon13* cberror);
int mpegNodata();
int mpegStopDMA();
int mpegRestartDMA();
int mpegTS(_anon6* cbts);
int cpy2area(unsigned char* pd0, int d0, unsigned char* pd1, int d1, unsigned char* ps0, int s0, unsigned char* ps1, int s1);

// 
// Start address: 0x23c1c0
int videoDecCreate(_anon5* vd, unsigned char* mpegWork, int mpegWorkSize, <unknown fundamental type (0xa510)>* data, <unknown fundamental type (0xa510)>* tag, int tagSize, _anon8* pts, int n_pts)
{
	// Line 58, Address: 0x23c1c0, Func Offset: 0
	// Line 60, Address: 0x23c1e8, Func Offset: 0x28
	// Line 63, Address: 0x23c200, Func Offset: 0x40
	// Line 64, Address: 0x23c220, Func Offset: 0x60
	// Line 65, Address: 0x23c240, Func Offset: 0x80
	// Line 66, Address: 0x23c260, Func Offset: 0xa0
	// Line 67, Address: 0x23c280, Func Offset: 0xc0
	// Line 69, Address: 0x23c2a0, Func Offset: 0xe0
	// Line 72, Address: 0x23c2a8, Func Offset: 0xe8
	// Line 74, Address: 0x23c2c8, Func Offset: 0x108
	// Line 76, Address: 0x23c2d8, Func Offset: 0x118
	// Line 77, Address: 0x23c2dc, Func Offset: 0x11c
	// Func End, Address: 0x23c2ec, Func Offset: 0x12c
}

// 
// Start address: 0x23c2f0
int videoDecSetStream(int strType, int ch, int(*cb)(_anon3*, _anon1*, void*), void* data)
{
	// Line 94, Address: 0x23c2f0, Func Offset: 0
	// Line 95, Address: 0x23c308, Func Offset: 0x18
	// Line 96, Address: 0x23c32c, Func Offset: 0x3c
	// Line 97, Address: 0x23c330, Func Offset: 0x40
	// Func End, Address: 0x23c340, Func Offset: 0x50
}

// 
// Start address: 0x23c340
void videoDecBeginPut(_anon5* vd, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1)
{
	// Line 105, Address: 0x23c340, Func Offset: 0
	// Line 106, Address: 0x23c35c, Func Offset: 0x1c
	// Line 107, Address: 0x23c378, Func Offset: 0x38
	// Func End, Address: 0x23c388, Func Offset: 0x48
}

// 
// Start address: 0x23c390
void videoDecEndPut(_anon5* vd, int size)
{
	// Line 114, Address: 0x23c390, Func Offset: 0
	// Line 115, Address: 0x23c3a0, Func Offset: 0x10
	// Line 116, Address: 0x23c3b0, Func Offset: 0x20
	// Func End, Address: 0x23c3c0, Func Offset: 0x30
}

// 
// Start address: 0x23c3c0
int videoDecDelete(_anon5* vd)
{
	// Line 123, Address: 0x23c3c0, Func Offset: 0
	// Line 124, Address: 0x23c3cc, Func Offset: 0xc
	// Line 125, Address: 0x23c3d8, Func Offset: 0x18
	// Line 127, Address: 0x23c3e8, Func Offset: 0x28
	// Line 128, Address: 0x23c3ec, Func Offset: 0x2c
	// Func End, Address: 0x23c3fc, Func Offset: 0x3c
}

// 
// Start address: 0x23c400
void videoDecAbort(_anon5* vd)
{
	// Line 135, Address: 0x23c400, Func Offset: 0
	// Line 136, Address: 0x23c408, Func Offset: 0x8
	// Line 137, Address: 0x23c414, Func Offset: 0x14
	// Func End, Address: 0x23c420, Func Offset: 0x20
}

// 
// Start address: 0x23c420
unsigned int videoDecGetState(_anon5* vd)
{
	// Line 144, Address: 0x23c420, Func Offset: 0
	// Line 145, Address: 0x23c428, Func Offset: 0x8
	// Line 146, Address: 0x23c430, Func Offset: 0x10
	// Func End, Address: 0x23c43c, Func Offset: 0x1c
}

// 
// Start address: 0x23c440
unsigned int videoDecSetState(_anon5* vd, unsigned int state)
{
	unsigned int old;
	// Line 153, Address: 0x23c440, Func Offset: 0
	// Line 154, Address: 0x23c450, Func Offset: 0x10
	// Line 156, Address: 0x23c458, Func Offset: 0x18
	// Line 158, Address: 0x23c464, Func Offset: 0x24
	// Line 159, Address: 0x23c468, Func Offset: 0x28
	// Func End, Address: 0x23c478, Func Offset: 0x38
}

// 
// Start address: 0x23c480
int videoDecPutTs(_anon5* vd, long pts_val, long dts_val, unsigned char* start, int len)
{
	_anon8 ts;
	// Line 167, Address: 0x23c480, Func Offset: 0
	// Line 171, Address: 0x23c49c, Func Offset: 0x1c
	// Line 172, Address: 0x23c4a4, Func Offset: 0x24
	// Line 173, Address: 0x23c4ac, Func Offset: 0x2c
	// Line 174, Address: 0x23c4c0, Func Offset: 0x40
	// Line 175, Address: 0x23c4c8, Func Offset: 0x48
	// Line 176, Address: 0x23c4dc, Func Offset: 0x5c
	// Func End, Address: 0x23c4ec, Func Offset: 0x6c
}

// 
// Start address: 0x23c4f0
int videoDecInputCount(_anon5* vd)
{
	// Line 183, Address: 0x23c4f0, Func Offset: 0
	// Line 184, Address: 0x23c4fc, Func Offset: 0xc
	// Line 185, Address: 0x23c508, Func Offset: 0x18
	// Func End, Address: 0x23c518, Func Offset: 0x28
}

// 
// Start address: 0x23c520
int videoDecFlush(_anon5* vd)
{
	int len;
	int d1;
	int d0;
	unsigned char seq_end_code[4];
	unsigned char* pd1Unc;
	unsigned char* pd0Unc;
	unsigned char* pd1;
	unsigned char* pd0;
	// Line 207, Address: 0x23c520, Func Offset: 0
	// Line 212, Address: 0x23c550, Func Offset: 0x30
	// Line 216, Address: 0x23c564, Func Offset: 0x44
	// Line 218, Address: 0x23c580, Func Offset: 0x60
	// Line 219, Address: 0x23c598, Func Offset: 0x78
	// Line 222, Address: 0x23c5a4, Func Offset: 0x84
	// Line 223, Address: 0x23c5c0, Func Offset: 0xa0
	// Line 225, Address: 0x23c5dc, Func Offset: 0xbc
	// Line 227, Address: 0x23c608, Func Offset: 0xe8
	// Line 229, Address: 0x23c61c, Func Offset: 0xfc
	// Line 231, Address: 0x23c628, Func Offset: 0x108
	// Line 232, Address: 0x23c638, Func Offset: 0x118
	// Line 235, Address: 0x23c644, Func Offset: 0x124
	// Line 236, Address: 0x23c648, Func Offset: 0x128
	// Func End, Address: 0x23c67c, Func Offset: 0x15c
}

// 
// Start address: 0x23c680
int videoDecIsFlushed(_anon5* vd)
{
	// Line 244, Address: 0x23c680, Func Offset: 0
	// Line 245, Address: 0x23c690, Func Offset: 0x10
	// Line 247, Address: 0x23c6c8, Func Offset: 0x48
	// Func End, Address: 0x23c6dc, Func Offset: 0x5c
}

// 
// Start address: 0x23c6e0
void videoDecMain(_anon5* vd)
{
	// Line 254, Address: 0x23c6e0, Func Offset: 0
	// Line 255, Address: 0x23c6ec, Func Offset: 0xc
	// Line 257, Address: 0x23c6f8, Func Offset: 0x18
	// Line 259, Address: 0x23c708, Func Offset: 0x28
	// Line 260, Address: 0x23c71c, Func Offset: 0x3c
	// Line 267, Address: 0x23c72c, Func Offset: 0x4c
	// Line 268, Address: 0x23c734, Func Offset: 0x54
	// Line 269, Address: 0x23c74c, Func Offset: 0x6c
	// Line 270, Address: 0x23c75c, Func Offset: 0x7c
	// Line 272, Address: 0x23c764, Func Offset: 0x84
	// Line 274, Address: 0x23c778, Func Offset: 0x98
	// Line 275, Address: 0x23c788, Func Offset: 0xa8
	// Func End, Address: 0x23c798, Func Offset: 0xb8
}

// 
// Start address: 0x23c7a0
int decBs0(_anon5* vd)
{
	int i;
	int picture_structure;
	_anon3* mp;
	int status;
	int ret;
	_anon0* raw8;
	_anon4* voData;
	// Line 285, Address: 0x23c7a0, Func Offset: 0
	// Line 289, Address: 0x23c7d0, Func Offset: 0x30
	// Line 290, Address: 0x23c7d4, Func Offset: 0x34
	// Line 298, Address: 0x23c7dc, Func Offset: 0x3c
	// Line 300, Address: 0x23c7e4, Func Offset: 0x44
	// Line 301, Address: 0x23c7fc, Func Offset: 0x5c
	// Line 302, Address: 0x23c800, Func Offset: 0x60
	// Line 303, Address: 0x23c810, Func Offset: 0x70
	// Line 312, Address: 0x23c818, Func Offset: 0x78
	// Line 313, Address: 0x23c820, Func Offset: 0x80
	// Line 314, Address: 0x23c83c, Func Offset: 0x9c
	// Line 316, Address: 0x23c840, Func Offset: 0xa0
	// Line 317, Address: 0x23c858, Func Offset: 0xb8
	// Line 318, Address: 0x23c868, Func Offset: 0xc8
	// Line 319, Address: 0x23c86c, Func Offset: 0xcc
	// Line 326, Address: 0x23c874, Func Offset: 0xd4
	// Line 327, Address: 0x23c978, Func Offset: 0x1d8
	// Line 328, Address: 0x23ca78, Func Offset: 0x2d8
	// Line 329, Address: 0x23ca90, Func Offset: 0x2f0
	// Line 330, Address: 0x23ca9c, Func Offset: 0x2fc
	// Line 331, Address: 0x23caac, Func Offset: 0x30c
	// Line 332, Address: 0x23cab0, Func Offset: 0x310
	// Line 334, Address: 0x23cab8, Func Offset: 0x318
	// Line 336, Address: 0x23cad0, Func Offset: 0x330
	// Line 337, Address: 0x23cae0, Func Offset: 0x340
	// Line 338, Address: 0x23cb14, Func Offset: 0x374
	// Line 339, Address: 0x23cb1c, Func Offset: 0x37c
	// Line 343, Address: 0x23cb38, Func Offset: 0x398
	// Line 344, Address: 0x23cb44, Func Offset: 0x3a4
	// Line 345, Address: 0x23cb54, Func Offset: 0x3b4
	// Line 347, Address: 0x23cb58, Func Offset: 0x3b8
	// Line 354, Address: 0x23cb64, Func Offset: 0x3c4
	// Line 356, Address: 0x23cb70, Func Offset: 0x3d0
	// Line 360, Address: 0x23cbc0, Func Offset: 0x420
	// Line 362, Address: 0x23cc10, Func Offset: 0x470
	// Line 363, Address: 0x23cc24, Func Offset: 0x484
	// Line 369, Address: 0x23cc28, Func Offset: 0x488
	// Line 371, Address: 0x23cc38, Func Offset: 0x498
	// Line 372, Address: 0x23cc40, Func Offset: 0x4a0
	// Line 374, Address: 0x23cc58, Func Offset: 0x4b8
	// Line 376, Address: 0x23cc64, Func Offset: 0x4c4
	// Line 377, Address: 0x23cc68, Func Offset: 0x4c8
	// Func End, Address: 0x23cc9c, Func Offset: 0x4fc
}

// 
// Start address: 0x23cca0
int mpegError(_anon13* cberror)
{
	// Line 384, Address: 0x23cca0, Func Offset: 0
	// Line 385, Address: 0x23ccac, Func Offset: 0xc
	// Line 386, Address: 0x23ccc4, Func Offset: 0x24
	// Line 387, Address: 0x23ccc8, Func Offset: 0x28
	// Func End, Address: 0x23ccd8, Func Offset: 0x38
}

// 
// Start address: 0x23cce0
int mpegNodata()
{
	// Line 394, Address: 0x23cce0, Func Offset: 0
	// Line 395, Address: 0x23cce8, Func Offset: 0x8
	// Line 396, Address: 0x23ccf0, Func Offset: 0x10
	// Line 397, Address: 0x23cd00, Func Offset: 0x20
	// Line 398, Address: 0x23cd04, Func Offset: 0x24
	// Func End, Address: 0x23cd14, Func Offset: 0x34
}

// 
// Start address: 0x23cd20
int mpegStopDMA()
{
	// Line 405, Address: 0x23cd20, Func Offset: 0
	// Line 407, Address: 0x23cd28, Func Offset: 0x8
	// Line 408, Address: 0x23cd38, Func Offset: 0x18
	// Line 409, Address: 0x23cd3c, Func Offset: 0x1c
	// Func End, Address: 0x23cd4c, Func Offset: 0x2c
}

// 
// Start address: 0x23cd50
int mpegRestartDMA()
{
	// Line 416, Address: 0x23cd50, Func Offset: 0
	// Line 418, Address: 0x23cd58, Func Offset: 0x8
	// Line 419, Address: 0x23cd68, Func Offset: 0x18
	// Line 420, Address: 0x23cd6c, Func Offset: 0x1c
	// Func End, Address: 0x23cd7c, Func Offset: 0x2c
}

// 
// Start address: 0x23cd80
int mpegTS(_anon6* cbts)
{
	_anon8 ts;
	// Line 428, Address: 0x23cd80, Func Offset: 0
	// Line 431, Address: 0x23cd8c, Func Offset: 0xc
	// Line 432, Address: 0x23cda0, Func Offset: 0x20
	// Line 433, Address: 0x23cdac, Func Offset: 0x2c
	// Line 434, Address: 0x23cdb8, Func Offset: 0x38
	// Line 435, Address: 0x23cdbc, Func Offset: 0x3c
	// Func End, Address: 0x23cdcc, Func Offset: 0x4c
}

// 
// Start address: 0x23cdd0
int cpy2area(unsigned char* pd0, int d0, unsigned char* pd1, int d1, unsigned char* ps0, int s0, unsigned char* ps1, int s1)
{
	// Line 443, Address: 0x23cdd0, Func Offset: 0
	// Line 444, Address: 0x23cdf8, Func Offset: 0x28
	// Line 445, Address: 0x23ce1c, Func Offset: 0x4c
	// Line 448, Address: 0x23ce28, Func Offset: 0x58
	// Line 449, Address: 0x23ce3c, Func Offset: 0x6c
	// Line 450, Address: 0x23ce50, Func Offset: 0x80
	// Line 451, Address: 0x23ce74, Func Offset: 0xa4
	// Line 452, Address: 0x23ce98, Func Offset: 0xc8
	// Line 453, Address: 0x23cea0, Func Offset: 0xd0
	// Line 454, Address: 0x23cebc, Func Offset: 0xec
	// Line 455, Address: 0x23ced0, Func Offset: 0x100
	// Line 456, Address: 0x23cef4, Func Offset: 0x124
	// Line 457, Address: 0x23cf28, Func Offset: 0x158
	// Line 458, Address: 0x23cf30, Func Offset: 0x160
	// Line 459, Address: 0x23cf44, Func Offset: 0x174
	// Line 462, Address: 0x23cf60, Func Offset: 0x190
	// Line 463, Address: 0x23cf6c, Func Offset: 0x19c
	// Func End, Address: 0x23cf7c, Func Offset: 0x1ac
}

