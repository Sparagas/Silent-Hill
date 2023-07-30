typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef union _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef enum _enum : unsigned char;

typedef int(*type_3)(_anon10*, _anon2*, void*);
typedef int(*type_4)(_anon10*, _anon9*, void*);
typedef int(*type_5)(_anon10*, _anon9*, void*);
typedef int(*type_6)(_anon10*, _anon9*, void*);
typedef int(*type_8)(_anon10*, _anon9*, void*);
typedef int(*type_9)(_anon10*, _anon6*, void*);

typedef unsigned char type_0[393216];
typedef unsigned int* type_1[2];
typedef unsigned int* type_2[2][3];
typedef unsigned char type_7[4];
typedef unsigned char type_10[256];
typedef unsigned char type_11[64];
typedef unsigned char type_12[64];

struct _anon0
{
	unsigned char v[393216];
};

struct _anon1
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

struct _anon2
{
	_enum type;
	char* errMessage;
};

struct _anon3
{
	int status;
	unsigned int* v;
};

struct _anon4
{
	_anon13 vibuf;
	unsigned int state;
	int sema;
	int hid_endimage;
	int hid_vblank;
	_anon7 csc;
};

struct _anon5
{
	_anon0* data;
	_anon3* tagInter;
	_anon3* tag;
	int write;
	int count;
	int size;
};

struct _anon6
{
	_enum type;
	long pts;
	long dts;
};

struct _anon7
{
	unsigned int* micro[2][3];
};

struct _anon8
{
	_enum type;
	unsigned char* header;
	unsigned char* data;
	unsigned int len;
	long pts;
	long dts;
};

union _anon9
{
	_enum type;
	_anon2 error;
	_anon6 ts;
	_anon8 str;
};

struct _anon10
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

struct _anon11
{
	unsigned char y[256];
	unsigned char cb[64];
	unsigned char cr[64];
};

struct _anon12
{
	long pts;
	long dts;
	int pos;
	int len;
};

struct _anon13
{
	<unknown fundamental type (0xa510)>* data;
	<unknown fundamental type (0xa510)>* tag;
	int n;
	int dmaStart;
	int dmaN;
	int readBytes;
	int buffSize;
	_anon1 env;
	int sema;
	int isActive;
	long totalBytes;
	_anon12* ts;
	int n_ts;
	int count_ts;
	int wt_ts;
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

int(*mpegTS)(_anon10*, _anon6*, void*);
_anon10 sys_mpeg;
int(*mpegRestartDMA)(_anon10*, _anon9*, void*);
int(*mpegStopDMA)(_anon10*, _anon9*, void*);
int(*mpegNodata)(_anon10*, _anon9*, void*);
int(*mpegError)(_anon10*, _anon2*, void*);
_anon4 videoDec;
_anon5 voBuf;
int csct;

int videoDecCreate(_anon4* vd, unsigned char* mpegWork, int mpegWorkSize, <unknown fundamental type (0xa510)>* data, <unknown fundamental type (0xa510)>* tag, int tagSize, _anon12* pts, int n_pts);
int videoDecSetStream(int strType, int ch, int(*cb)(_anon10*, _anon9*, void*), void* data);
void videoDecBeginPut(_anon4* vd, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1);
void videoDecEndPut(_anon4* vd, int size);
int videoDecDelete(_anon4* vd);
void videoDecAbort(_anon4* vd);
unsigned int videoDecGetState(_anon4* vd);
unsigned int videoDecSetState(_anon4* vd, unsigned int state);
int videoDecPutTs(_anon4* vd, long pts_val, long dts_val, unsigned char* start, int len);
int videoDecFlush(_anon4* vd);
void videoDecMain(_anon4* vd);
int decBs0(_anon4* vd);
int mpegError(_anon2* cberror);
int mpegNodata();
int mpegStopDMA();
int mpegRestartDMA();
int mpegTS(_anon6* cbts);
int cpy2area(unsigned char* pd0, int d0, unsigned char* pd1, int d1, unsigned char* ps0, int s0, unsigned char* ps1, int s1);

// 
// Start address: 0x28d560
int videoDecCreate(_anon4* vd, unsigned char* mpegWork, int mpegWorkSize, <unknown fundamental type (0xa510)>* data, <unknown fundamental type (0xa510)>* tag, int tagSize, _anon12* pts, int n_pts)
{
	// Line 60, Address: 0x28d560, Func Offset: 0
	// Line 62, Address: 0x28d598, Func Offset: 0x38
	// Line 65, Address: 0x28d5a8, Func Offset: 0x48
	// Line 66, Address: 0x28d5c8, Func Offset: 0x68
	// Line 67, Address: 0x28d5e8, Func Offset: 0x88
	// Line 68, Address: 0x28d608, Func Offset: 0xa8
	// Line 69, Address: 0x28d628, Func Offset: 0xc8
	// Line 71, Address: 0x28d648, Func Offset: 0xe8
	// Line 74, Address: 0x28d64c, Func Offset: 0xec
	// Line 76, Address: 0x28d66c, Func Offset: 0x10c
	// Line 78, Address: 0x28d678, Func Offset: 0x118
	// Line 79, Address: 0x28d67c, Func Offset: 0x11c
	// Func End, Address: 0x28d6a4, Func Offset: 0x144
}

// 
// Start address: 0x28d6b0
int videoDecSetStream(int strType, int ch, int(*cb)(_anon10*, _anon9*, void*), void* data)
{
	// Line 96, Address: 0x28d6b0, Func Offset: 0
	// Line 97, Address: 0x28d6b8, Func Offset: 0x8
	// Line 98, Address: 0x28d6cc, Func Offset: 0x1c
	// Line 99, Address: 0x28d6d0, Func Offset: 0x20
	// Func End, Address: 0x28d6e0, Func Offset: 0x30
}

// 
// Start address: 0x28d6e0
void videoDecBeginPut(_anon4* vd, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1)
{
	// Line 107, Address: 0x28d6e0, Func Offset: 0
	// Line 108, Address: 0x28d6e8, Func Offset: 0x8
	// Line 109, Address: 0x28d6f0, Func Offset: 0x10
	// Func End, Address: 0x28d700, Func Offset: 0x20
}

// 
// Start address: 0x28d700
void videoDecEndPut(_anon4* vd, int size)
{
	// Line 116, Address: 0x28d700, Func Offset: 0
	// Line 117, Address: 0x28d708, Func Offset: 0x8
	// Line 118, Address: 0x28d710, Func Offset: 0x10
	// Func End, Address: 0x28d720, Func Offset: 0x20
}

// 
// Start address: 0x28d720
int videoDecDelete(_anon4* vd)
{
	// Line 125, Address: 0x28d720, Func Offset: 0
	// Line 126, Address: 0x28d728, Func Offset: 0x8
	// Line 127, Address: 0x28d730, Func Offset: 0x10
	// Line 129, Address: 0x28d740, Func Offset: 0x20
	// Line 130, Address: 0x28d744, Func Offset: 0x24
	// Func End, Address: 0x28d754, Func Offset: 0x34
}

// 
// Start address: 0x28d760
void videoDecAbort(_anon4* vd)
{
	// Line 138, Address: 0x28d760, Func Offset: 0
	// Line 139, Address: 0x28d768, Func Offset: 0x8
	// Func End, Address: 0x28d770, Func Offset: 0x10
}

// 
// Start address: 0x28d770
unsigned int videoDecGetState(_anon4* vd)
{
	// Line 147, Address: 0x28d770, Func Offset: 0
	// Line 148, Address: 0x28d774, Func Offset: 0x4
	// Func End, Address: 0x28d77c, Func Offset: 0xc
}

// 
// Start address: 0x28d780
unsigned int videoDecSetState(_anon4* vd, unsigned int state)
{
	unsigned int old;
	// Line 156, Address: 0x28d780, Func Offset: 0
	// Line 158, Address: 0x28d784, Func Offset: 0x4
	// Line 161, Address: 0x28d788, Func Offset: 0x8
	// Func End, Address: 0x28d790, Func Offset: 0x10
}

// 
// Start address: 0x28d790
int videoDecPutTs(_anon4* vd, long pts_val, long dts_val, unsigned char* start, int len)
{
	_anon12 ts;
	// Line 169, Address: 0x28d790, Func Offset: 0
	// Line 173, Address: 0x28d798, Func Offset: 0x8
	// Line 174, Address: 0x28d79c, Func Offset: 0xc
	// Line 175, Address: 0x28d7a0, Func Offset: 0x10
	// Line 176, Address: 0x28d7ac, Func Offset: 0x1c
	// Line 177, Address: 0x28d7b0, Func Offset: 0x20
	// Line 178, Address: 0x28d7c4, Func Offset: 0x34
	// Func End, Address: 0x28d7d4, Func Offset: 0x44
}

// 
// Start address: 0x28d7e0
int videoDecFlush(_anon4* vd)
{
	int len;
	int d1;
	int d0;
	unsigned char seq_end_code[4];
	unsigned char* pd1Unc;
	unsigned char* pd0Unc;
	unsigned char* pd1;
	unsigned char* pd0;
	// Line 209, Address: 0x28d7e0, Func Offset: 0
	// Line 214, Address: 0x28d7f0, Func Offset: 0x10
	// Line 218, Address: 0x28d804, Func Offset: 0x24
	// Line 220, Address: 0x28d81c, Func Offset: 0x3c
	// Line 221, Address: 0x28d834, Func Offset: 0x54
	// Line 224, Address: 0x28d840, Func Offset: 0x60
	// Line 225, Address: 0x28d858, Func Offset: 0x78
	// Line 227, Address: 0x28d868, Func Offset: 0x88
	// Line 229, Address: 0x28d880, Func Offset: 0xa0
	// Line 231, Address: 0x28d894, Func Offset: 0xb4
	// Line 233, Address: 0x28d8a0, Func Offset: 0xc0
	// Line 234, Address: 0x28d8ac, Func Offset: 0xcc
	// Line 237, Address: 0x28d8b4, Func Offset: 0xd4
	// Line 238, Address: 0x28d8b8, Func Offset: 0xd8
	// Func End, Address: 0x28d8cc, Func Offset: 0xec
}

// 
// Start address: 0x28d8d0
void videoDecMain(_anon4* vd)
{
	// Line 256, Address: 0x28d8d0, Func Offset: 0
	// Line 257, Address: 0x28d8e0, Func Offset: 0x10
	// Line 259, Address: 0x28d8e8, Func Offset: 0x18
	// Line 261, Address: 0x28d8f8, Func Offset: 0x28
	// Line 262, Address: 0x28d90c, Func Offset: 0x3c
	// Line 269, Address: 0x28d91c, Func Offset: 0x4c
	// Line 270, Address: 0x28d924, Func Offset: 0x54
	// Line 271, Address: 0x28d93c, Func Offset: 0x6c
	// Line 272, Address: 0x28d94c, Func Offset: 0x7c
	// Line 274, Address: 0x28d954, Func Offset: 0x84
	// Line 276, Address: 0x28d968, Func Offset: 0x98
	// Line 277, Address: 0x28d978, Func Offset: 0xa8
	// Func End, Address: 0x28d98c, Func Offset: 0xbc
}

// 
// Start address: 0x28d990
int decBs0(_anon4* vd)
{
	int i;
	int picture_structure;
	_anon10* mp;
	int status;
	int ret;
	_anon11* raw8;
	_anon0* voData;
	// Line 287, Address: 0x28d990, Func Offset: 0
	// Line 291, Address: 0x28d9ac, Func Offset: 0x1c
	// Line 292, Address: 0x28d9b0, Func Offset: 0x20
	// Line 300, Address: 0x28d9b8, Func Offset: 0x28
	// Line 302, Address: 0x28d9c0, Func Offset: 0x30
	// Line 303, Address: 0x28d9d8, Func Offset: 0x48
	// Line 304, Address: 0x28d9dc, Func Offset: 0x4c
	// Line 305, Address: 0x28d9ec, Func Offset: 0x5c
	// Line 314, Address: 0x28d9f4, Func Offset: 0x64
	// Line 315, Address: 0x28d9fc, Func Offset: 0x6c
	// Line 316, Address: 0x28da18, Func Offset: 0x88
	// Line 318, Address: 0x28da1c, Func Offset: 0x8c
	// Line 319, Address: 0x28da34, Func Offset: 0xa4
	// Line 320, Address: 0x28da44, Func Offset: 0xb4
	// Line 321, Address: 0x28da48, Func Offset: 0xb8
	// Line 328, Address: 0x28da50, Func Offset: 0xc0
	// Line 329, Address: 0x28da58, Func Offset: 0xc8
	// Line 330, Address: 0x28da70, Func Offset: 0xe0
	// Line 331, Address: 0x28da78, Func Offset: 0xe8
	// Line 332, Address: 0x28da80, Func Offset: 0xf0
	// Line 333, Address: 0x28da90, Func Offset: 0x100
	// Line 334, Address: 0x28da94, Func Offset: 0x104
	// Line 337, Address: 0x28da9c, Func Offset: 0x10c
	// Line 339, Address: 0x28daa8, Func Offset: 0x118
	// Line 340, Address: 0x28dabc, Func Offset: 0x12c
	// Line 341, Address: 0x28dad0, Func Offset: 0x140
	// Line 342, Address: 0x28dad8, Func Offset: 0x148
	// Line 346, Address: 0x28dafc, Func Offset: 0x16c
	// Line 347, Address: 0x28db04, Func Offset: 0x174
	// Line 348, Address: 0x28db14, Func Offset: 0x184
	// Line 350, Address: 0x28db18, Func Offset: 0x188
	// Line 357, Address: 0x28db24, Func Offset: 0x194
	// Line 363, Address: 0x28db30, Func Offset: 0x1a0
	// Line 365, Address: 0x28db70, Func Offset: 0x1e0
	// Line 366, Address: 0x28db84, Func Offset: 0x1f4
	// Line 372, Address: 0x28db88, Func Offset: 0x1f8
	// Line 374, Address: 0x28db98, Func Offset: 0x208
	// Line 375, Address: 0x28dba0, Func Offset: 0x210
	// Line 377, Address: 0x28dbb8, Func Offset: 0x228
	// Line 379, Address: 0x28dbc4, Func Offset: 0x234
	// Line 380, Address: 0x28dbc8, Func Offset: 0x238
	// Func End, Address: 0x28dbe8, Func Offset: 0x258
}

// 
// Start address: 0x28dbf0
int mpegError(_anon2* cberror)
{
	// Line 387, Address: 0x28dbf0, Func Offset: 0
	// Line 388, Address: 0x28dbf8, Func Offset: 0x8
	// Line 389, Address: 0x28dc0c, Func Offset: 0x1c
	// Line 390, Address: 0x28dc10, Func Offset: 0x20
	// Func End, Address: 0x28dc20, Func Offset: 0x30
}

// 
// Start address: 0x28dc20
int mpegNodata()
{
	// Line 398, Address: 0x28dc20, Func Offset: 0
	// Line 405, Address: 0x28dc28, Func Offset: 0x8
	// Line 407, Address: 0x28dc30, Func Offset: 0x10
	// Line 411, Address: 0x28dc38, Func Offset: 0x18
	// Line 412, Address: 0x28dc40, Func Offset: 0x20
	// Line 413, Address: 0x28dc50, Func Offset: 0x30
	// Line 414, Address: 0x28dc54, Func Offset: 0x34
	// Func End, Address: 0x28dc64, Func Offset: 0x44
}

// 
// Start address: 0x28dc70
int mpegStopDMA()
{
	// Line 421, Address: 0x28dc70, Func Offset: 0
	// Line 423, Address: 0x28dc78, Func Offset: 0x8
	// Line 424, Address: 0x28dc88, Func Offset: 0x18
	// Line 425, Address: 0x28dc8c, Func Offset: 0x1c
	// Func End, Address: 0x28dc9c, Func Offset: 0x2c
}

// 
// Start address: 0x28dca0
int mpegRestartDMA()
{
	// Line 432, Address: 0x28dca0, Func Offset: 0
	// Line 434, Address: 0x28dca8, Func Offset: 0x8
	// Line 435, Address: 0x28dcb8, Func Offset: 0x18
	// Line 436, Address: 0x28dcbc, Func Offset: 0x1c
	// Func End, Address: 0x28dccc, Func Offset: 0x2c
}

// 
// Start address: 0x28dcd0
int mpegTS(_anon6* cbts)
{
	_anon12 ts;
	// Line 444, Address: 0x28dcd0, Func Offset: 0
	// Line 447, Address: 0x28dce0, Func Offset: 0x10
	// Line 448, Address: 0x28dcf4, Func Offset: 0x24
	// Line 449, Address: 0x28dcfc, Func Offset: 0x2c
	// Line 450, Address: 0x28dd04, Func Offset: 0x34
	// Line 451, Address: 0x28dd08, Func Offset: 0x38
	// Func End, Address: 0x28dd1c, Func Offset: 0x4c
}

// 
// Start address: 0x28dd20
int cpy2area(unsigned char* pd0, int d0, unsigned char* pd1, int d1, unsigned char* ps0, int s0, unsigned char* ps1, int s1)
{
	// Line 459, Address: 0x28dd20, Func Offset: 0
	// Line 460, Address: 0x28dd68, Func Offset: 0x48
	// Line 461, Address: 0x28dd7c, Func Offset: 0x5c
	// Line 464, Address: 0x28dd88, Func Offset: 0x68
	// Line 465, Address: 0x28dd94, Func Offset: 0x74
	// Line 466, Address: 0x28dda4, Func Offset: 0x84
	// Line 467, Address: 0x28ddb8, Func Offset: 0x98
	// Line 468, Address: 0x28ddd0, Func Offset: 0xb0
	// Line 469, Address: 0x28ddd8, Func Offset: 0xb8
	// Line 470, Address: 0x28dde8, Func Offset: 0xc8
	// Line 471, Address: 0x28ddf8, Func Offset: 0xd8
	// Line 472, Address: 0x28de0c, Func Offset: 0xec
	// Line 473, Address: 0x28de24, Func Offset: 0x104
	// Line 474, Address: 0x28de2c, Func Offset: 0x10c
	// Line 475, Address: 0x28de3c, Func Offset: 0x11c
	// Line 478, Address: 0x28de50, Func Offset: 0x130
	// Line 479, Address: 0x28de54, Func Offset: 0x134
	// Func End, Address: 0x28de88, Func Offset: 0x168
}

