typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef enum _enum : unsigned char;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;


typedef unsigned char type_0[327680];
typedef char type_1[4];
typedef char type_2[4];
typedef unsigned int* type_3[2];
typedef unsigned int* type_4[2][3];

struct _anon0
{
	_anon3 vibuf;
	unsigned int state;
	int sema;
	int hid_endimage;
	int hid_vblank;
	_anon8 csc;
};

struct _anon1
{
	long pts;
	long dts;
	int pos;
	int len;
};

struct _anon2
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

struct _anon3
{
	<unknown fundamental type (0xa510)>* data;
	<unknown fundamental type (0xa510)>* tag;
	int n;
	int dmaStart;
	int dmaN;
	int readBytes;
	int buffSize;
	_anon2 env;
	int sema;
	int isActive;
	long totalBytes;
	_anon1* ts;
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

struct _anon4
{
	unsigned char data[327680];
	int put;
	int count;
	int size;
};

struct _anon5
{
	char id[4];
	int size;
	int type;
	int rate;
	int ch;
	int interSize;
	int loopStart;
	int loopEnd;
};

struct _anon6
{
	char id[4];
	int size;
};

struct _anon7
{
	int state;
	_anon5 sshd;
	_anon6 ssbd;
	int hdrCount;
	unsigned char* data;
	int put;
	int count;
	int size;
	int totalBytes;
	int iopBuff;
	int iopBuffSize;
	int iopLastPos;
	int iopPausePos;
	int totalBytesSent;
	int iopZero;
};

struct _anon8
{
	unsigned int* micro[2][3];
};

struct _anon9
{
	_enum type;
	unsigned char* header;
	unsigned char* data;
	unsigned int len;
	long pts;
	long dts;
};

_anon0 videoDec;
_anon7 audioDec;

int videoCallback(_anon9* str, void* data);
int pcmCallback(_anon9* str, void* data);
int copy2area(unsigned char* pd0, int d0, unsigned char* pd1, int d1, unsigned char* ps0, int s0, unsigned char* ps1, int s1);

// 
// Start address: 0x28bcd0
int videoCallback(_anon9* str, void* data)
{
	int len;
	int d1;
	int d0;
	unsigned char* pd1Unc;
	unsigned char* pd0Unc;
	unsigned char* pd1;
	unsigned char* pd0;
	int s1;
	int s0;
	unsigned char* ps1;
	unsigned char* ps0;
	_anon4* rb;
	// Line 40, Address: 0x28bcd0, Func Offset: 0
	// Line 41, Address: 0x28bcf0, Func Offset: 0x20
	// Line 42, Address: 0x28bcf4, Func Offset: 0x24
	// Line 44, Address: 0x28bcf8, Func Offset: 0x28
	// Line 45, Address: 0x28bd20, Func Offset: 0x50
	// Line 53, Address: 0x28bd24, Func Offset: 0x54
	// Line 54, Address: 0x28bd44, Func Offset: 0x74
	// Line 55, Address: 0x28bd5c, Func Offset: 0x8c
	// Line 57, Address: 0x28bd6c, Func Offset: 0x9c
	// Line 60, Address: 0x28bd90, Func Offset: 0xc0
	// Line 61, Address: 0x28bd98, Func Offset: 0xc8
	// Line 62, Address: 0x28bdc0, Func Offset: 0xf0
	// Line 66, Address: 0x28bdd0, Func Offset: 0x100
	// Line 72, Address: 0x28bde4, Func Offset: 0x114
	// Line 73, Address: 0x28bdfc, Func Offset: 0x12c
	// Func End, Address: 0x28be20, Func Offset: 0x150
}

// 
// Start address: 0x28be20
int pcmCallback(_anon9* str, void* data)
{
	int ret;
	int len;
	int d1;
	int d0;
	unsigned char* pd1;
	unsigned char* pd0;
	int s1;
	int s0;
	unsigned char* ps1;
	unsigned char* ps0;
	_anon4* rb;
	// Line 80, Address: 0x28be20, Func Offset: 0
	// Line 81, Address: 0x28be38, Func Offset: 0x18
	// Line 82, Address: 0x28be3c, Func Offset: 0x1c
	// Line 94, Address: 0x28be40, Func Offset: 0x20
	// Line 95, Address: 0x28be44, Func Offset: 0x24
	// Line 96, Address: 0x28be60, Func Offset: 0x40
	// Line 98, Address: 0x28be64, Func Offset: 0x44
	// Line 101, Address: 0x28be6c, Func Offset: 0x4c
	// Line 102, Address: 0x28be80, Func Offset: 0x60
	// Line 104, Address: 0x28be84, Func Offset: 0x64
	// Line 105, Address: 0x28bea4, Func Offset: 0x84
	// Line 107, Address: 0x28bed0, Func Offset: 0xb0
	// Line 113, Address: 0x28bee4, Func Offset: 0xc4
	// Line 114, Address: 0x28befc, Func Offset: 0xdc
	// Func End, Address: 0x28bf1c, Func Offset: 0xfc
}

// 
// Start address: 0x28bf20
int copy2area(unsigned char* pd0, int d0, unsigned char* pd1, int d1, unsigned char* ps0, int s0, unsigned char* ps1, int s1)
{
	// Line 122, Address: 0x28bf20, Func Offset: 0
	// Line 123, Address: 0x28bf68, Func Offset: 0x48
	// Line 124, Address: 0x28bf7c, Func Offset: 0x5c
	// Line 127, Address: 0x28bf88, Func Offset: 0x68
	// Line 128, Address: 0x28bf94, Func Offset: 0x74
	// Line 129, Address: 0x28bfa4, Func Offset: 0x84
	// Line 130, Address: 0x28bfb8, Func Offset: 0x98
	// Line 131, Address: 0x28bfd0, Func Offset: 0xb0
	// Line 132, Address: 0x28bfd8, Func Offset: 0xb8
	// Line 133, Address: 0x28bfe8, Func Offset: 0xc8
	// Line 134, Address: 0x28bff8, Func Offset: 0xd8
	// Line 135, Address: 0x28c00c, Func Offset: 0xec
	// Line 136, Address: 0x28c024, Func Offset: 0x104
	// Line 137, Address: 0x28c02c, Func Offset: 0x10c
	// Line 138, Address: 0x28c03c, Func Offset: 0x11c
	// Line 141, Address: 0x28c050, Func Offset: 0x130
	// Line 142, Address: 0x28c054, Func Offset: 0x134
	// Func End, Address: 0x28c088, Func Offset: 0x168
}

