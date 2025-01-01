typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;


typedef char type_0[4096];
typedef char type_1[4];
typedef char type_2[4];

struct _anon0
{
	int state;
	_anon1 sshd;
	_anon2 ssbd;
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

struct _anon1
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

struct _anon2
{
	char id[4];
	int size;
};

struct _anon3
{
	unsigned int data;
	unsigned int addr;
	unsigned int size;
	unsigned int mode;
};

int pss_volume;
char _0_buf[4096];

void pssAudioColdInit(_anon0* ad, int iopBuffSize);
int audioDecCreate(_anon0* ad, unsigned char* buff, int buffSize, int iopBuffSize);
int audioDecDelete();
void audioDecPause(_anon0* ad);
void audioDecResume(_anon0* ad);
void audioDecStart(_anon0* ad);
void audioDecReset(_anon0* ad);
void audioDecBeginPut(_anon0* ad, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1);
void audioDecEndPut(_anon0* ad, int size);
int audioDecIsPreset(_anon0* ad);
int audioDecSendToIOP(_anon0* ad);
void iopGetArea(int* pd0, int* d0, int* pd1, int* d1, _anon0* ad, int pos);
int sendToIOP2area(int pd0, int d0, int pd1, int d1, unsigned char* ps0, int s0, unsigned char* ps1, int s1);
int sendToIOP(int dst, unsigned char* src, int size);
void changeInputVolume(unsigned int val);

// 
// Start address: 0x287c80
void pssAudioColdInit(_anon0* ad, int iopBuffSize)
{
	// Line 58, Address: 0x287c80, Func Offset: 0
	// Line 63, Address: 0x287c90, Func Offset: 0x10
	// Line 64, Address: 0x287ca0, Func Offset: 0x20
	// Line 65, Address: 0x287cac, Func Offset: 0x2c
	// Line 74, Address: 0x287cbc, Func Offset: 0x3c
	// Line 75, Address: 0x287ccc, Func Offset: 0x4c
	// Line 76, Address: 0x287cd8, Func Offset: 0x58
	// Line 82, Address: 0x287ce8, Func Offset: 0x68
	// Line 83, Address: 0x287d00, Func Offset: 0x80
	// Line 84, Address: 0x287d18, Func Offset: 0x98
	// Func End, Address: 0x287d2c, Func Offset: 0xac
}

// 
// Start address: 0x287d30
int audioDecCreate(_anon0* ad, unsigned char* buff, int buffSize, int iopBuffSize)
{
	// Line 92, Address: 0x287d30, Func Offset: 0
	// Line 93, Address: 0x287d34, Func Offset: 0x4
	// Line 94, Address: 0x287d38, Func Offset: 0x8
	// Line 95, Address: 0x287d3c, Func Offset: 0xc
	// Line 96, Address: 0x287d40, Func Offset: 0x10
	// Line 97, Address: 0x287d44, Func Offset: 0x14
	// Line 98, Address: 0x287d48, Func Offset: 0x18
	// Line 99, Address: 0x287d4c, Func Offset: 0x1c
	// Line 101, Address: 0x287d50, Func Offset: 0x20
	// Line 102, Address: 0x287d54, Func Offset: 0x24
	// Line 103, Address: 0x287d58, Func Offset: 0x28
	// Line 119, Address: 0x287d5c, Func Offset: 0x2c
	// Line 120, Address: 0x287d60, Func Offset: 0x30
	// Func End, Address: 0x287d68, Func Offset: 0x38
}

// 
// Start address: 0x287d70
int audioDecDelete()
{
	// Line 149, Address: 0x287d70, Func Offset: 0
	// Line 150, Address: 0x287d74, Func Offset: 0x4
	// Func End, Address: 0x287d7c, Func Offset: 0xc
}

// 
// Start address: 0x287d80
void audioDecPause(_anon0* ad)
{
	int retry;
	int ret;
	// Line 157, Address: 0x287d80, Func Offset: 0
	// Line 160, Address: 0x287d98, Func Offset: 0x18
	// Line 166, Address: 0x287da0, Func Offset: 0x20
	// Line 175, Address: 0x287dac, Func Offset: 0x2c
	// Line 176, Address: 0x287db0, Func Offset: 0x30
	// Line 177, Address: 0x287db8, Func Offset: 0x38
	// Line 178, Address: 0x287dbc, Func Offset: 0x3c
	// Line 180, Address: 0x287dc4, Func Offset: 0x44
	// Line 181, Address: 0x287dd4, Func Offset: 0x54
	// Line 183, Address: 0x287ddc, Func Offset: 0x5c
	// Line 186, Address: 0x287e08, Func Offset: 0x88
	// Line 188, Address: 0x287e1c, Func Offset: 0x9c
	// Line 200, Address: 0x287e38, Func Offset: 0xb8
	// Line 201, Address: 0x287e3c, Func Offset: 0xbc
	// Line 203, Address: 0x287e44, Func Offset: 0xc4
	// Line 204, Address: 0x287e48, Func Offset: 0xc8
	// Line 206, Address: 0x287e50, Func Offset: 0xd0
	// Line 207, Address: 0x287e60, Func Offset: 0xe0
	// Line 209, Address: 0x287e68, Func Offset: 0xe8
	// Line 211, Address: 0x287e98, Func Offset: 0x118
	// Func End, Address: 0x287eb4, Func Offset: 0x134
}

// 
// Start address: 0x287ec0
void audioDecResume(_anon0* ad)
{
	// Line 218, Address: 0x287ec0, Func Offset: 0
	// Line 223, Address: 0x287ed0, Func Offset: 0x10
	// Line 247, Address: 0x287edc, Func Offset: 0x1c
	// Line 250, Address: 0x287ee4, Func Offset: 0x24
	// Line 251, Address: 0x287ef4, Func Offset: 0x34
	// Line 254, Address: 0x287f40, Func Offset: 0x80
	// Line 255, Address: 0x287f48, Func Offset: 0x88
	// Func End, Address: 0x287f5c, Func Offset: 0x9c
}

// 
// Start address: 0x287f60
void audioDecStart(_anon0* ad)
{
	// Line 262, Address: 0x287f60, Func Offset: 0
	// Line 263, Address: 0x287f68, Func Offset: 0x8
	// Line 264, Address: 0x287f70, Func Offset: 0x10
	// Func End, Address: 0x287f80, Func Offset: 0x20
}

// 
// Start address: 0x287f80
void audioDecReset(_anon0* ad)
{
	// Line 271, Address: 0x287f80, Func Offset: 0
	// Line 276, Address: 0x287f90, Func Offset: 0x10
	// Line 278, Address: 0x287f98, Func Offset: 0x18
	// Line 279, Address: 0x287f9c, Func Offset: 0x1c
	// Line 280, Address: 0x287fa0, Func Offset: 0x20
	// Line 281, Address: 0x287fa4, Func Offset: 0x24
	// Line 282, Address: 0x287fa8, Func Offset: 0x28
	// Line 283, Address: 0x287fac, Func Offset: 0x2c
	// Line 284, Address: 0x287fb0, Func Offset: 0x30
	// Line 285, Address: 0x287fb4, Func Offset: 0x34
	// Line 286, Address: 0x287fb8, Func Offset: 0x38
	// Func End, Address: 0x287fcc, Func Offset: 0x4c
}

// 
// Start address: 0x287fd0
void audioDecBeginPut(_anon0* ad, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1)
{
	int len;
	// Line 300, Address: 0x287fd0, Func Offset: 0
	// Line 301, Address: 0x287fdc, Func Offset: 0xc
	// Line 302, Address: 0x287fec, Func Offset: 0x1c
	// Line 303, Address: 0x287ffc, Func Offset: 0x2c
	// Line 304, Address: 0x288004, Func Offset: 0x34
	// Line 306, Address: 0x28800c, Func Offset: 0x3c
	// Line 313, Address: 0x288014, Func Offset: 0x44
	// Line 315, Address: 0x288020, Func Offset: 0x50
	// Line 316, Address: 0x288034, Func Offset: 0x64
	// Line 317, Address: 0x288040, Func Offset: 0x70
	// Line 318, Address: 0x288044, Func Offset: 0x74
	// Line 319, Address: 0x288048, Func Offset: 0x78
	// Line 320, Address: 0x28804c, Func Offset: 0x7c
	// Line 321, Address: 0x288054, Func Offset: 0x84
	// Line 322, Address: 0x288060, Func Offset: 0x90
	// Line 323, Address: 0x288070, Func Offset: 0xa0
	// Line 324, Address: 0x288078, Func Offset: 0xa8
	// Line 326, Address: 0x28808c, Func Offset: 0xbc
	// Func End, Address: 0x288094, Func Offset: 0xc4
}

// 
// Start address: 0x2880a0
void audioDecEndPut(_anon0* ad, int size)
{
	int hdr_add;
	// Line 334, Address: 0x2880a0, Func Offset: 0
	// Line 335, Address: 0x2880ac, Func Offset: 0xc
	// Line 336, Address: 0x2880c0, Func Offset: 0x20
	// Line 338, Address: 0x2880cc, Func Offset: 0x2c
	// Line 339, Address: 0x2880dc, Func Offset: 0x3c
	// Line 374, Address: 0x2880e4, Func Offset: 0x44
	// Line 376, Address: 0x2880e8, Func Offset: 0x48
	// Line 377, Address: 0x288108, Func Offset: 0x68
	// Line 378, Address: 0x288114, Func Offset: 0x74
	// Line 379, Address: 0x288120, Func Offset: 0x80
	// Func End, Address: 0x288128, Func Offset: 0x88
}

// 
// Start address: 0x288130
int audioDecIsPreset(_anon0* ad)
{
	// Line 387, Address: 0x288130, Func Offset: 0
	// Line 388, Address: 0x288140, Func Offset: 0x10
	// Func End, Address: 0x288148, Func Offset: 0x18
}

// 
// Start address: 0x288150
int audioDecSendToIOP(_anon0* ad)
{
	int pos;
	int countAdj;
	int count_sent;
	int s1;
	int s0;
	unsigned char* ps1;
	unsigned char* ps0;
	int d1;
	int d0;
	int pd1;
	int pd0;
	// Line 395, Address: 0x288150, Func Offset: 0
	// Line 399, Address: 0x288168, Func Offset: 0x18
	// Line 403, Address: 0x28816c, Func Offset: 0x1c
	// Line 405, Address: 0x2881a4, Func Offset: 0x54
	// Line 409, Address: 0x2881b0, Func Offset: 0x60
	// Line 410, Address: 0x2881d4, Func Offset: 0x84
	// Line 411, Address: 0x2881e4, Func Offset: 0x94
	// Line 412, Address: 0x2881e8, Func Offset: 0x98
	// Line 413, Address: 0x2881ec, Func Offset: 0x9c
	// Line 416, Address: 0x2881f4, Func Offset: 0xa4
	// Line 418, Address: 0x288218, Func Offset: 0xc8
	// Line 419, Address: 0x288234, Func Offset: 0xe4
	// Line 421, Address: 0x288248, Func Offset: 0xf8
	// Line 422, Address: 0x288268, Func Offset: 0x118
	// Line 425, Address: 0x288270, Func Offset: 0x120
	// Line 429, Address: 0x28827c, Func Offset: 0x12c
	// Line 433, Address: 0x2882a8, Func Offset: 0x158
	// Line 435, Address: 0x2882c0, Func Offset: 0x170
	// Line 436, Address: 0x2882d8, Func Offset: 0x188
	// Line 438, Address: 0x2882dc, Func Offset: 0x18c
	// Line 439, Address: 0x288304, Func Offset: 0x1b4
	// Line 442, Address: 0x288318, Func Offset: 0x1c8
	// Line 444, Address: 0x288324, Func Offset: 0x1d4
	// Line 445, Address: 0x288330, Func Offset: 0x1e0
	// Line 447, Address: 0x288350, Func Offset: 0x200
	// Line 448, Address: 0x288354, Func Offset: 0x204
	// Func End, Address: 0x288370, Func Offset: 0x220
}

// 
// Start address: 0x288370
void iopGetArea(int* pd0, int* d0, int* pd1, int* d1, _anon0* ad, int pos)
{
	int len;
	// Line 456, Address: 0x288370, Func Offset: 0
	// Line 460, Address: 0x288394, Func Offset: 0x24
	// Line 462, Address: 0x2883ac, Func Offset: 0x3c
	// Line 463, Address: 0x2883bc, Func Offset: 0x4c
	// Line 464, Address: 0x2883c8, Func Offset: 0x58
	// Line 465, Address: 0x2883cc, Func Offset: 0x5c
	// Line 466, Address: 0x2883d0, Func Offset: 0x60
	// Line 467, Address: 0x2883d4, Func Offset: 0x64
	// Line 468, Address: 0x2883dc, Func Offset: 0x6c
	// Line 469, Address: 0x2883e8, Func Offset: 0x78
	// Line 470, Address: 0x2883f8, Func Offset: 0x88
	// Line 471, Address: 0x288400, Func Offset: 0x90
	// Line 473, Address: 0x288414, Func Offset: 0xa4
	// Func End, Address: 0x28841c, Func Offset: 0xac
}

// 
// Start address: 0x288420
int sendToIOP2area(int pd0, int d0, int pd1, int d1, unsigned char* ps0, int s0, unsigned char* ps1, int s1)
{
	int diff;
	// Line 481, Address: 0x288420, Func Offset: 0
	// Line 482, Address: 0x288464, Func Offset: 0x44
	// Line 483, Address: 0x288478, Func Offset: 0x58
	// Line 484, Address: 0x28847c, Func Offset: 0x5c
	// Line 485, Address: 0x288488, Func Offset: 0x68
	// Line 486, Address: 0x288490, Func Offset: 0x70
	// Line 487, Address: 0x288494, Func Offset: 0x74
	// Line 488, Address: 0x28849c, Func Offset: 0x7c
	// Line 495, Address: 0x2884a0, Func Offset: 0x80
	// Line 496, Address: 0x2884ac, Func Offset: 0x8c
	// Line 497, Address: 0x2884c0, Func Offset: 0xa0
	// Line 498, Address: 0x2884d4, Func Offset: 0xb4
	// Line 499, Address: 0x2884ec, Func Offset: 0xcc
	// Line 500, Address: 0x2884f4, Func Offset: 0xd4
	// Line 501, Address: 0x288504, Func Offset: 0xe4
	// Line 502, Address: 0x288518, Func Offset: 0xf8
	// Line 503, Address: 0x28852c, Func Offset: 0x10c
	// Line 504, Address: 0x288544, Func Offset: 0x124
	// Line 505, Address: 0x28854c, Func Offset: 0x12c
	// Line 506, Address: 0x288560, Func Offset: 0x140
	// Line 509, Address: 0x288574, Func Offset: 0x154
	// Line 510, Address: 0x288578, Func Offset: 0x158
	// Func End, Address: 0x2885a8, Func Offset: 0x188
}

// 
// Start address: 0x2885b0
int sendToIOP(int dst, unsigned char* src, int size)
{
	int did;
	_anon3 transData;
	// Line 517, Address: 0x2885b0, Func Offset: 0
	// Line 521, Address: 0x2885c4, Func Offset: 0x14
	// Line 522, Address: 0x2885cc, Func Offset: 0x1c
	// Line 525, Address: 0x2885d8, Func Offset: 0x28
	// Line 526, Address: 0x2885dc, Func Offset: 0x2c
	// Line 527, Address: 0x2885e0, Func Offset: 0x30
	// Line 528, Address: 0x2885e4, Func Offset: 0x34
	// Line 529, Address: 0x2885e8, Func Offset: 0x38
	// Line 531, Address: 0x2885f4, Func Offset: 0x44
	// Line 532, Address: 0x2885fc, Func Offset: 0x4c
	// Line 533, Address: 0x28860c, Func Offset: 0x5c
	// Line 535, Address: 0x28862c, Func Offset: 0x7c
	// Line 536, Address: 0x288630, Func Offset: 0x80
	// Line 538, Address: 0x288650, Func Offset: 0xa0
	// Line 539, Address: 0x288654, Func Offset: 0xa4
	// Func End, Address: 0x28866c, Func Offset: 0xbc
}

// 
// Start address: 0x288670
void changeInputVolume(unsigned int val)
{
	// Line 559, Address: 0x288670, Func Offset: 0
	// Line 560, Address: 0x288680, Func Offset: 0x10
	// Line 561, Address: 0x288698, Func Offset: 0x28
	// Line 562, Address: 0x2886b0, Func Offset: 0x40
	// Func End, Address: 0x2886c4, Func Offset: 0x54
}

