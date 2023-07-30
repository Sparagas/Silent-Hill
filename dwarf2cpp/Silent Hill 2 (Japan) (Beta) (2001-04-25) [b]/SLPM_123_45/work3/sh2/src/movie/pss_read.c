typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef enum _enum : unsigned char;


typedef unsigned char type_0[327680];
typedef unsigned int* type_1[2];
typedef unsigned int* type_2[2][3];
typedef char type_3[4];
typedef char type_4[4];

struct _anon0
{
	unsigned char data[327680];
	int put;
	int count;
	int size;
};

struct _anon1
{
	_enum type;
	unsigned char* header;
	unsigned char* data;
	unsigned int len;
	long pts;
	long dts;
};

struct _anon2
{
	unsigned int* micro[2][3];
};

struct _anon3
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

struct _anon4
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

struct _anon5
{
	char id[4];
	int size;
};

struct _anon6
{
	int state;
	_anon3 sshd;
	_anon5 ssbd;
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

struct _anon7
{
	long pts;
	long dts;
	int pos;
	int len;
};

struct _anon8
{
	<unknown fundamental type (0xa510)>* data;
	<unknown fundamental type (0xa510)>* tag;
	int n;
	int dmaStart;
	int dmaN;
	int readBytes;
	int buffSize;
	_anon4 env;
	int sema;
	int isActive;
	long totalBytes;
	_anon7* ts;
	int n_ts;
	int count_ts;
	int wt_ts;
};

struct _anon9
{
	_anon8 vibuf;
	unsigned int state;
	int sema;
	int hid_endimage;
	int hid_vblank;
	_anon2 csc;
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

_anon9 videoDec;
_anon6 audioDec;

int videoCallback(_anon1* str, void* data);
int pcmCallback(_anon1* str, void* data);
int copy2area(unsigned char* pd0, int d0, unsigned char* pd1, int d1, unsigned char* ps0, int s0, unsigned char* ps1, int s1);

// 
// Start address: 0x239a20
int videoCallback(_anon1* str, void* data)
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
	_anon0* rb;
	// Line 40, Address: 0x239a20, Func Offset: 0
	// Line 41, Address: 0x239a54, Func Offset: 0x34
	// Line 42, Address: 0x239a58, Func Offset: 0x38
	// Line 43, Address: 0x239a60, Func Offset: 0x40
	// Line 44, Address: 0x239a64, Func Offset: 0x44
	// Line 45, Address: 0x239ac4, Func Offset: 0xa4
	// Line 53, Address: 0x239ad0, Func Offset: 0xb0
	// Line 54, Address: 0x239af0, Func Offset: 0xd0
	// Line 55, Address: 0x239b1c, Func Offset: 0xfc
	// Line 57, Address: 0x239b4c, Func Offset: 0x12c
	// Line 60, Address: 0x239b78, Func Offset: 0x158
	// Line 61, Address: 0x239b80, Func Offset: 0x160
	// Line 62, Address: 0x239bb0, Func Offset: 0x190
	// Line 66, Address: 0x239bc0, Func Offset: 0x1a0
	// Line 72, Address: 0x239bd4, Func Offset: 0x1b4
	// Line 73, Address: 0x239bf0, Func Offset: 0x1d0
	// Func End, Address: 0x239c24, Func Offset: 0x204
}

// 
// Start address: 0x239c30
int pcmCallback(_anon1* str, void* data)
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
	_anon0* rb;
	// Line 80, Address: 0x239c30, Func Offset: 0
	// Line 81, Address: 0x239c64, Func Offset: 0x34
	// Line 82, Address: 0x239c68, Func Offset: 0x38
	// Line 83, Address: 0x239c70, Func Offset: 0x40
	// Line 94, Address: 0x239c74, Func Offset: 0x44
	// Line 95, Address: 0x239c80, Func Offset: 0x50
	// Line 96, Address: 0x239c9c, Func Offset: 0x6c
	// Line 98, Address: 0x239cac, Func Offset: 0x7c
	// Line 100, Address: 0x239cb8, Func Offset: 0x88
	// Line 101, Address: 0x239cbc, Func Offset: 0x8c
	// Line 102, Address: 0x239d00, Func Offset: 0xd0
	// Line 104, Address: 0x239d04, Func Offset: 0xd4
	// Line 105, Address: 0x239d24, Func Offset: 0xf4
	// Line 107, Address: 0x239d50, Func Offset: 0x120
	// Line 113, Address: 0x239d64, Func Offset: 0x134
	// Line 114, Address: 0x239d80, Func Offset: 0x150
	// Func End, Address: 0x239db4, Func Offset: 0x184
}

// 
// Start address: 0x239dc0
int copy2area(unsigned char* pd0, int d0, unsigned char* pd1, int d1, unsigned char* ps0, int s0, unsigned char* ps1, int s1)
{
	// Line 122, Address: 0x239dc0, Func Offset: 0
	// Line 123, Address: 0x239de8, Func Offset: 0x28
	// Line 124, Address: 0x239e0c, Func Offset: 0x4c
	// Line 127, Address: 0x239e18, Func Offset: 0x58
	// Line 128, Address: 0x239e2c, Func Offset: 0x6c
	// Line 129, Address: 0x239e40, Func Offset: 0x80
	// Line 130, Address: 0x239e64, Func Offset: 0xa4
	// Line 131, Address: 0x239e88, Func Offset: 0xc8
	// Line 132, Address: 0x239e90, Func Offset: 0xd0
	// Line 133, Address: 0x239eac, Func Offset: 0xec
	// Line 134, Address: 0x239ec0, Func Offset: 0x100
	// Line 135, Address: 0x239ee4, Func Offset: 0x124
	// Line 136, Address: 0x239f18, Func Offset: 0x158
	// Line 137, Address: 0x239f20, Func Offset: 0x160
	// Line 138, Address: 0x239f34, Func Offset: 0x174
	// Line 141, Address: 0x239f50, Func Offset: 0x190
	// Line 142, Address: 0x239f5c, Func Offset: 0x19c
	// Func End, Address: 0x239f6c, Func Offset: 0x1ac
}

