typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;


typedef char type_0[2048];
typedef char type_1[4];
typedef char type_2[4];

struct _anon0
{
	int state;
	_anon1 sshd;
	_anon3 ssbd;
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
	unsigned int data;
	unsigned int addr;
	unsigned int size;
	unsigned int mode;
};

struct _anon3
{
	char id[4];
	int size;
};

int pss_volume;
char _0_buf[2048];

int audioDecCreate(_anon0* ad, unsigned char* buff, int buffSize, int iopBuffSize);
int audioDecDelete(_anon0* ad);
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
void changeMasterVolume(unsigned int val);
void changeInputVolume(unsigned int val);

// 
// Start address: 0x235180
int audioDecCreate(_anon0* ad, unsigned char* buff, int buffSize, int iopBuffSize)
{
	// Line 61, Address: 0x235180, Func Offset: 0
	// Line 62, Address: 0x235198, Func Offset: 0x18
	// Line 63, Address: 0x2351a0, Func Offset: 0x20
	// Line 64, Address: 0x2351a8, Func Offset: 0x28
	// Line 65, Address: 0x2351b4, Func Offset: 0x34
	// Line 66, Address: 0x2351bc, Func Offset: 0x3c
	// Line 67, Address: 0x2351c4, Func Offset: 0x44
	// Line 68, Address: 0x2351d0, Func Offset: 0x50
	// Line 69, Address: 0x2351d8, Func Offset: 0x58
	// Line 71, Address: 0x2351e0, Func Offset: 0x60
	// Line 72, Address: 0x2351ec, Func Offset: 0x6c
	// Line 73, Address: 0x2351f4, Func Offset: 0x74
	// Line 79, Address: 0x2351fc, Func Offset: 0x7c
	// Line 80, Address: 0x235210, Func Offset: 0x90
	// Line 81, Address: 0x235220, Func Offset: 0xa0
	// Line 82, Address: 0x235230, Func Offset: 0xb0
	// Line 90, Address: 0x23523c, Func Offset: 0xbc
	// Line 91, Address: 0x235250, Func Offset: 0xd0
	// Line 92, Address: 0x235260, Func Offset: 0xe0
	// Line 93, Address: 0x235270, Func Offset: 0xf0
	// Line 98, Address: 0x23527c, Func Offset: 0xfc
	// Line 99, Address: 0x235294, Func Offset: 0x114
	// Line 105, Address: 0x2352b0, Func Offset: 0x130
	// Line 108, Address: 0x2352c0, Func Offset: 0x140
	// Line 109, Address: 0x2352d8, Func Offset: 0x158
	// Line 110, Address: 0x2352f0, Func Offset: 0x170
	// Line 111, Address: 0x235308, Func Offset: 0x188
	// Line 113, Address: 0x235320, Func Offset: 0x1a0
	// Line 114, Address: 0x235324, Func Offset: 0x1a4
	// Func End, Address: 0x235334, Func Offset: 0x1b4
}

// 
// Start address: 0x235340
int audioDecDelete(_anon0* ad)
{
	// Line 121, Address: 0x235340, Func Offset: 0
	// Line 122, Address: 0x23534c, Func Offset: 0xc
	// Line 124, Address: 0x23535c, Func Offset: 0x1c
	// Line 134, Address: 0x23536c, Func Offset: 0x2c
	// Line 137, Address: 0x235378, Func Offset: 0x38
	// Line 138, Address: 0x235390, Func Offset: 0x50
	// Line 139, Address: 0x2353a8, Func Offset: 0x68
	// Line 140, Address: 0x2353c0, Func Offset: 0x80
	// Line 142, Address: 0x2353d8, Func Offset: 0x98
	// Line 143, Address: 0x2353dc, Func Offset: 0x9c
	// Func End, Address: 0x2353ec, Func Offset: 0xac
}

// 
// Start address: 0x2353f0
void audioDecPause(_anon0* ad)
{
	int ret;
	// Line 150, Address: 0x2353f0, Func Offset: 0
	// Line 152, Address: 0x235400, Func Offset: 0x10
	// Line 158, Address: 0x23540c, Func Offset: 0x1c
	// Line 167, Address: 0x235418, Func Offset: 0x28
	// Line 168, Address: 0x235420, Func Offset: 0x30
	// Line 169, Address: 0x235430, Func Offset: 0x40
	// Line 170, Address: 0x23545c, Func Offset: 0x6c
	// Line 172, Address: 0x235464, Func Offset: 0x74
	// Line 183, Address: 0x235478, Func Offset: 0x88
	// Line 185, Address: 0x235480, Func Offset: 0x90
	// Line 186, Address: 0x235490, Func Offset: 0xa0
	// Line 188, Address: 0x2354c0, Func Offset: 0xd0
	// Func End, Address: 0x2354d4, Func Offset: 0xe4
}

// 
// Start address: 0x2354e0
void audioDecResume(_anon0* ad)
{
	// Line 195, Address: 0x2354e0, Func Offset: 0
	// Line 200, Address: 0x2354ec, Func Offset: 0xc
	// Line 203, Address: 0x2354f8, Func Offset: 0x18
	// Line 204, Address: 0x235510, Func Offset: 0x30
	// Line 212, Address: 0x235528, Func Offset: 0x48
	// Line 215, Address: 0x235530, Func Offset: 0x50
	// Line 216, Address: 0x235540, Func Offset: 0x60
	// Line 219, Address: 0x2355a0, Func Offset: 0xc0
	// Line 220, Address: 0x2355ac, Func Offset: 0xcc
	// Func End, Address: 0x2355bc, Func Offset: 0xdc
}

// 
// Start address: 0x2355c0
void audioDecStart(_anon0* ad)
{
	// Line 227, Address: 0x2355c0, Func Offset: 0
	// Line 228, Address: 0x2355cc, Func Offset: 0xc
	// Line 229, Address: 0x2355d8, Func Offset: 0x18
	// Func End, Address: 0x2355e8, Func Offset: 0x28
}

// 
// Start address: 0x2355f0
void audioDecReset(_anon0* ad)
{
	// Line 236, Address: 0x2355f0, Func Offset: 0
	// Line 241, Address: 0x2355fc, Func Offset: 0xc
	// Line 243, Address: 0x235608, Func Offset: 0x18
	// Line 244, Address: 0x235610, Func Offset: 0x20
	// Line 245, Address: 0x235618, Func Offset: 0x28
	// Line 246, Address: 0x235620, Func Offset: 0x30
	// Line 247, Address: 0x235628, Func Offset: 0x38
	// Line 248, Address: 0x235630, Func Offset: 0x40
	// Line 249, Address: 0x235638, Func Offset: 0x48
	// Line 250, Address: 0x235640, Func Offset: 0x50
	// Line 251, Address: 0x235648, Func Offset: 0x58
	// Func End, Address: 0x235658, Func Offset: 0x68
}

// 
// Start address: 0x235660
void audioDecBeginPut(_anon0* ad, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1)
{
	int len;
	// Line 258, Address: 0x235660, Func Offset: 0
	// Line 265, Address: 0x23567c, Func Offset: 0x1c
	// Line 266, Address: 0x23568c, Func Offset: 0x2c
	// Line 267, Address: 0x2356a8, Func Offset: 0x48
	// Line 268, Address: 0x2356c0, Func Offset: 0x60
	// Line 269, Address: 0x2356d0, Func Offset: 0x70
	// Line 271, Address: 0x2356e0, Func Offset: 0x80
	// Line 278, Address: 0x2356e8, Func Offset: 0x88
	// Line 280, Address: 0x2356fc, Func Offset: 0x9c
	// Line 281, Address: 0x23571c, Func Offset: 0xbc
	// Line 282, Address: 0x235738, Func Offset: 0xd8
	// Line 283, Address: 0x235740, Func Offset: 0xe0
	// Line 284, Address: 0x235748, Func Offset: 0xe8
	// Line 285, Address: 0x235750, Func Offset: 0xf0
	// Line 286, Address: 0x235758, Func Offset: 0xf8
	// Line 287, Address: 0x235774, Func Offset: 0x114
	// Line 288, Address: 0x235790, Func Offset: 0x130
	// Line 289, Address: 0x2357a0, Func Offset: 0x140
	// Line 291, Address: 0x2357c0, Func Offset: 0x160
	// Func End, Address: 0x2357d0, Func Offset: 0x170
}

// 
// Start address: 0x2357d0
void audioDecEndPut(_anon0* ad, int size)
{
	int hdr_add;
	// Line 298, Address: 0x2357d0, Func Offset: 0
	// Line 299, Address: 0x2357e4, Func Offset: 0x14
	// Line 300, Address: 0x2357f4, Func Offset: 0x24
	// Line 301, Address: 0x235838, Func Offset: 0x68
	// Line 303, Address: 0x235848, Func Offset: 0x78
	// Line 304, Address: 0x23585c, Func Offset: 0x8c
	// Line 339, Address: 0x235868, Func Offset: 0x98
	// Line 341, Address: 0x235874, Func Offset: 0xa4
	// Line 342, Address: 0x2358a4, Func Offset: 0xd4
	// Line 343, Address: 0x2358b8, Func Offset: 0xe8
	// Line 344, Address: 0x2358cc, Func Offset: 0xfc
	// Func End, Address: 0x2358e0, Func Offset: 0x110
}

// 
// Start address: 0x2358e0
int audioDecIsPreset(_anon0* ad)
{
	// Line 351, Address: 0x2358e0, Func Offset: 0
	// Line 352, Address: 0x2358e8, Func Offset: 0x8
	// Line 353, Address: 0x235900, Func Offset: 0x20
	// Func End, Address: 0x23590c, Func Offset: 0x2c
}

// 
// Start address: 0x235910
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
	// Line 360, Address: 0x235910, Func Offset: 0
	// Line 364, Address: 0x23593c, Func Offset: 0x2c
	// Line 366, Address: 0x235940, Func Offset: 0x30
	// Line 368, Address: 0x235944, Func Offset: 0x34
	// Line 370, Address: 0x235980, Func Offset: 0x70
	// Line 374, Address: 0x23598c, Func Offset: 0x7c
	// Line 375, Address: 0x2359bc, Func Offset: 0xac
	// Line 376, Address: 0x2359d4, Func Offset: 0xc4
	// Line 377, Address: 0x2359d8, Func Offset: 0xc8
	// Line 378, Address: 0x2359dc, Func Offset: 0xcc
	// Line 381, Address: 0x2359e4, Func Offset: 0xd4
	// Line 383, Address: 0x235a0c, Func Offset: 0xfc
	// Line 384, Address: 0x235a2c, Func Offset: 0x11c
	// Line 386, Address: 0x235a40, Func Offset: 0x130
	// Line 387, Address: 0x235a60, Func Offset: 0x150
	// Line 390, Address: 0x235a68, Func Offset: 0x158
	// Line 394, Address: 0x235a74, Func Offset: 0x164
	// Line 395, Address: 0x235ab8, Func Offset: 0x1a8
	// Line 398, Address: 0x235ac0, Func Offset: 0x1b0
	// Line 400, Address: 0x235ae4, Func Offset: 0x1d4
	// Line 401, Address: 0x235b30, Func Offset: 0x220
	// Line 403, Address: 0x235b34, Func Offset: 0x224
	// Line 404, Address: 0x235b5c, Func Offset: 0x24c
	// Line 407, Address: 0x235b88, Func Offset: 0x278
	// Line 409, Address: 0x235b98, Func Offset: 0x288
	// Line 410, Address: 0x235ba8, Func Offset: 0x298
	// Line 412, Address: 0x235bd4, Func Offset: 0x2c4
	// Line 413, Address: 0x235bd8, Func Offset: 0x2c8
	// Func End, Address: 0x235c08, Func Offset: 0x2f8
}

// 
// Start address: 0x235c10
void iopGetArea(int* pd0, int* d0, int* pd1, int* d1, _anon0* ad, int pos)
{
	int len;
	// Line 420, Address: 0x235c10, Func Offset: 0
	// Line 421, Address: 0x235c30, Func Offset: 0x20
	// Line 425, Address: 0x235c68, Func Offset: 0x58
	// Line 427, Address: 0x235c84, Func Offset: 0x74
	// Line 428, Address: 0x235ca4, Func Offset: 0x94
	// Line 429, Address: 0x235cc0, Func Offset: 0xb0
	// Line 430, Address: 0x235cc8, Func Offset: 0xb8
	// Line 431, Address: 0x235cd0, Func Offset: 0xc0
	// Line 432, Address: 0x235cd8, Func Offset: 0xc8
	// Line 433, Address: 0x235ce0, Func Offset: 0xd0
	// Line 434, Address: 0x235cfc, Func Offset: 0xec
	// Line 435, Address: 0x235d18, Func Offset: 0x108
	// Line 436, Address: 0x235d28, Func Offset: 0x118
	// Line 438, Address: 0x235d48, Func Offset: 0x138
	// Func End, Address: 0x235d58, Func Offset: 0x148
}

// 
// Start address: 0x235d60
int sendToIOP2area(int pd0, int d0, int pd1, int d1, unsigned char* ps0, int s0, unsigned char* ps1, int s1)
{
	int diff;
	// Line 446, Address: 0x235d60, Func Offset: 0
	// Line 447, Address: 0x235d8c, Func Offset: 0x2c
	// Line 448, Address: 0x235db0, Func Offset: 0x50
	// Line 449, Address: 0x235dcc, Func Offset: 0x6c
	// Line 450, Address: 0x235ddc, Func Offset: 0x7c
	// Line 451, Address: 0x235df0, Func Offset: 0x90
	// Line 452, Address: 0x235df4, Func Offset: 0x94
	// Line 453, Address: 0x235dfc, Func Offset: 0x9c
	// Line 460, Address: 0x235e08, Func Offset: 0xa8
	// Line 461, Address: 0x235e1c, Func Offset: 0xbc
	// Line 462, Address: 0x235e30, Func Offset: 0xd0
	// Line 463, Address: 0x235e54, Func Offset: 0xf4
	// Line 464, Address: 0x235e78, Func Offset: 0x118
	// Line 465, Address: 0x235e80, Func Offset: 0x120
	// Line 466, Address: 0x235e9c, Func Offset: 0x13c
	// Line 467, Address: 0x235eb0, Func Offset: 0x150
	// Line 468, Address: 0x235ed4, Func Offset: 0x174
	// Line 469, Address: 0x235f08, Func Offset: 0x1a8
	// Line 470, Address: 0x235f10, Func Offset: 0x1b0
	// Line 471, Address: 0x235f24, Func Offset: 0x1c4
	// Line 474, Address: 0x235f40, Func Offset: 0x1e0
	// Line 475, Address: 0x235f4c, Func Offset: 0x1ec
	// Func End, Address: 0x235f60, Func Offset: 0x200
}

// 
// Start address: 0x235f60
int sendToIOP(int dst, unsigned char* src, int size)
{
	int did;
	_anon2 transData;
	// Line 482, Address: 0x235f60, Func Offset: 0
	// Line 486, Address: 0x235f78, Func Offset: 0x18
	// Line 487, Address: 0x235f84, Func Offset: 0x24
	// Line 490, Address: 0x235f90, Func Offset: 0x30
	// Line 491, Address: 0x235f98, Func Offset: 0x38
	// Line 492, Address: 0x235fa0, Func Offset: 0x40
	// Line 493, Address: 0x235fa8, Func Offset: 0x48
	// Line 494, Address: 0x235fac, Func Offset: 0x4c
	// Line 496, Address: 0x235fb8, Func Offset: 0x58
	// Line 497, Address: 0x235fc0, Func Offset: 0x60
	// Line 498, Address: 0x235fd0, Func Offset: 0x70
	// Line 500, Address: 0x235fec, Func Offset: 0x8c
	// Line 501, Address: 0x235ff0, Func Offset: 0x90
	// Line 503, Address: 0x236010, Func Offset: 0xb0
	// Line 504, Address: 0x236018, Func Offset: 0xb8
	// Func End, Address: 0x23602c, Func Offset: 0xcc
}

// 
// Start address: 0x236030
void changeMasterVolume(unsigned int val)
{
	int i;
	// Line 511, Address: 0x236030, Func Offset: 0
	// Line 513, Address: 0x236040, Func Offset: 0x10
	// Line 514, Address: 0x23604c, Func Offset: 0x1c
	// Line 515, Address: 0x236064, Func Offset: 0x34
	// Line 516, Address: 0x23607c, Func Offset: 0x4c
	// Line 517, Address: 0x23608c, Func Offset: 0x5c
	// Func End, Address: 0x2360a0, Func Offset: 0x70
}

// 
// Start address: 0x2360a0
void changeInputVolume(unsigned int val)
{
	// Line 524, Address: 0x2360a0, Func Offset: 0
	// Line 525, Address: 0x2360ac, Func Offset: 0xc
	// Line 526, Address: 0x2360c4, Func Offset: 0x24
	// Line 527, Address: 0x2360dc, Func Offset: 0x3c
	// Func End, Address: 0x2360ec, Func Offset: 0x4c
}

