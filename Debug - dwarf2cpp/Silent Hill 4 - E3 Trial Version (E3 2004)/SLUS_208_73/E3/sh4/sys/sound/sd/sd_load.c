typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;


typedef _anon0 type_0[8];
typedef _anon3 type_1[3];

struct _anon0
{
	int id;
	char* addr;
};

struct _anon1
{
	int type;
	unsigned int que;
	char* addr;
	int res;
};

struct _anon2
{
	unsigned int ver;
	unsigned int num;
	unsigned int ofs;
	unsigned int res;
};

struct _anon3
{
	unsigned int ofs;
	unsigned int size;
};

struct _anon4
{
	unsigned int data;
	unsigned int addr;
	unsigned int size;
	unsigned int mode;
};

struct _anon5
{
	int step;
	int cnt;
	int id;
	char* trans_addr;
};

_anon5 vsdLoadSystem;
_anon0 vsdLoadData[8];
_anon1 vsdLoadDma;
_anon3 vsdLoadBinData[3];
_anon2 vsdLoadBinHead;

int sdLoadInit();
int sdLoadEntry(int id, char* addr);
int sdLoadStart();
int sdLoadCheckStatus();
void sdLoadExec();
void sdLoadInitFig(int first);
void sdLoadInitData(int id);
unsigned int sdLoadSetDma(char* ee_addr, char* iop_addr, unsigned int size, int wait);
int sdLoadCheckDma(int id);

// 
// Start address: 0x2bca80
int sdLoadInit()
{
	// Line 112, Address: 0x2bca80, Func Offset: 0
	// Line 115, Address: 0x2bca88, Func Offset: 0x8
	// Line 118, Address: 0x2bca90, Func Offset: 0x10
	// Line 122, Address: 0x2bcaa0, Func Offset: 0x20
	// Line 127, Address: 0x2bcaa4, Func Offset: 0x24
	// Line 122, Address: 0x2bcaa8, Func Offset: 0x28
	// Line 127, Address: 0x2bcab8, Func Offset: 0x38
	// Func End, Address: 0x2bcac0, Func Offset: 0x40
}

// 
// Start address: 0x2bcac0
int sdLoadEntry(int id, char* addr)
{
	// Line 162, Address: 0x2bcac0, Func Offset: 0
	// Line 165, Address: 0x2bcac4, Func Offset: 0x4
	// Line 162, Address: 0x2bcac8, Func Offset: 0x8
	// Line 165, Address: 0x2bcad8, Func Offset: 0x18
	// Line 168, Address: 0x2bcaf8, Func Offset: 0x38
	// Line 172, Address: 0x2bcb00, Func Offset: 0x40
	// Line 175, Address: 0x2bcb0c, Func Offset: 0x4c
	// Line 172, Address: 0x2bcb10, Func Offset: 0x50
	// Line 176, Address: 0x2bcb14, Func Offset: 0x54
	// Line 175, Address: 0x2bcb18, Func Offset: 0x58
	// Line 176, Address: 0x2bcb1c, Func Offset: 0x5c
	// Line 182, Address: 0x2bcb20, Func Offset: 0x60
	// Line 179, Address: 0x2bcb28, Func Offset: 0x68
	// Line 175, Address: 0x2bcb2c, Func Offset: 0x6c
	// Line 176, Address: 0x2bcb30, Func Offset: 0x70
	// Line 175, Address: 0x2bcb34, Func Offset: 0x74
	// Line 176, Address: 0x2bcb38, Func Offset: 0x78
	// Line 179, Address: 0x2bcb3c, Func Offset: 0x7c
	// Line 182, Address: 0x2bcb4c, Func Offset: 0x8c
	// Line 183, Address: 0x2bcb50, Func Offset: 0x90
	// Func End, Address: 0x2bcb64, Func Offset: 0xa4
}

// 
// Start address: 0x2bcb70
int sdLoadStart()
{
	// Line 194, Address: 0x2bcb70, Func Offset: 0
	// Line 196, Address: 0x2bcb80, Func Offset: 0x10
	// Line 201, Address: 0x2bcb88, Func Offset: 0x18
	// Line 200, Address: 0x2bcb90, Func Offset: 0x20
	// Line 204, Address: 0x2bcb98, Func Offset: 0x28
	// Line 200, Address: 0x2bcb9c, Func Offset: 0x2c
	// Line 205, Address: 0x2bcba0, Func Offset: 0x30
	// Func End, Address: 0x2bcba8, Func Offset: 0x38
}

// 
// Start address: 0x2bcbb0
int sdLoadCheckStatus()
{
	// Line 216, Address: 0x2bcbb0, Func Offset: 0
	// Line 217, Address: 0x2bcbb4, Func Offset: 0x4
	// Func End, Address: 0x2bcbbc, Func Offset: 0xc
}

// 
// Start address: 0x2bcbc0
void sdLoadExec()
{
	int i;
	int tmp;
	// Line 225, Address: 0x2bcbc0, Func Offset: 0
	// Line 232, Address: 0x2bcbc4, Func Offset: 0x4
	// Line 225, Address: 0x2bcbc8, Func Offset: 0x8
	// Line 232, Address: 0x2bcbcc, Func Offset: 0xc
	// Line 237, Address: 0x2bcbf4, Func Offset: 0x34
	// Line 239, Address: 0x2bcbf8, Func Offset: 0x38
	// Line 241, Address: 0x2bcc14, Func Offset: 0x54
	// Line 242, Address: 0x2bcc1c, Func Offset: 0x5c
	// Line 243, Address: 0x2bcc24, Func Offset: 0x64
	// Line 245, Address: 0x2bcc28, Func Offset: 0x68
	// Line 248, Address: 0x2bcc34, Func Offset: 0x74
	// Line 250, Address: 0x2bcc38, Func Offset: 0x78
	// Line 252, Address: 0x2bcc58, Func Offset: 0x98
	// Line 253, Address: 0x2bcc60, Func Offset: 0xa0
	// Line 257, Address: 0x2bcc68, Func Offset: 0xa8
	// Line 259, Address: 0x2bcc90, Func Offset: 0xd0
	// Line 260, Address: 0x2bccac, Func Offset: 0xec
	// Line 262, Address: 0x2bccb4, Func Offset: 0xf4
	// Line 264, Address: 0x2bccb8, Func Offset: 0xf8
	// Line 266, Address: 0x2bccc0, Func Offset: 0x100
	// Line 268, Address: 0x2bccc8, Func Offset: 0x108
	// Line 271, Address: 0x2bccd0, Func Offset: 0x110
	// Line 275, Address: 0x2bccf8, Func Offset: 0x138
	// Line 277, Address: 0x2bcd04, Func Offset: 0x144
	// Line 279, Address: 0x2bcd08, Func Offset: 0x148
	// Line 281, Address: 0x2bcd34, Func Offset: 0x174
	// Line 284, Address: 0x2bcd6c, Func Offset: 0x1ac
	// Line 285, Address: 0x2bcdb0, Func Offset: 0x1f0
	// Line 286, Address: 0x2bcdb4, Func Offset: 0x1f4
	// Line 285, Address: 0x2bcdbc, Func Offset: 0x1fc
	// Line 286, Address: 0x2bcdc4, Func Offset: 0x204
	// Line 285, Address: 0x2bcdd4, Func Offset: 0x214
	// Line 286, Address: 0x2bcdd8, Func Offset: 0x218
	// Line 285, Address: 0x2bcdec, Func Offset: 0x22c
	// Line 286, Address: 0x2bcdf0, Func Offset: 0x230
	// Line 285, Address: 0x2bce04, Func Offset: 0x244
	// Line 286, Address: 0x2bce08, Func Offset: 0x248
	// Line 285, Address: 0x2bce1c, Func Offset: 0x25c
	// Line 286, Address: 0x2bce20, Func Offset: 0x260
	// Line 285, Address: 0x2bce34, Func Offset: 0x274
	// Line 286, Address: 0x2bce38, Func Offset: 0x278
	// Line 285, Address: 0x2bce4c, Func Offset: 0x28c
	// Line 286, Address: 0x2bce50, Func Offset: 0x290
	// Line 285, Address: 0x2bce64, Func Offset: 0x2a4
	// Line 286, Address: 0x2bce68, Func Offset: 0x2a8
	// Line 284, Address: 0x2bcebc, Func Offset: 0x2fc
	// Line 286, Address: 0x2bcec0, Func Offset: 0x300
	// Line 287, Address: 0x2bcec4, Func Offset: 0x304
	// Line 285, Address: 0x2bcecc, Func Offset: 0x30c
	// Line 286, Address: 0x2bced0, Func Offset: 0x310
	// Line 287, Address: 0x2bcee0, Func Offset: 0x320
	// Line 289, Address: 0x2bcee8, Func Offset: 0x328
	// Line 291, Address: 0x2bcef0, Func Offset: 0x330
	// Line 293, Address: 0x2bcf18, Func Offset: 0x358
	// Line 295, Address: 0x2bcf24, Func Offset: 0x364
	// Line 293, Address: 0x2bcf28, Func Offset: 0x368
	// Line 297, Address: 0x2bcf30, Func Offset: 0x370
	// Line 300, Address: 0x2bcf6c, Func Offset: 0x3ac
	// Line 302, Address: 0x2bcf7c, Func Offset: 0x3bc
	// Line 304, Address: 0x2bcf80, Func Offset: 0x3c0
	// Line 308, Address: 0x2bcf88, Func Offset: 0x3c8
	// Line 310, Address: 0x2bcf9c, Func Offset: 0x3dc
	// Line 308, Address: 0x2bcfa0, Func Offset: 0x3e0
	// Line 310, Address: 0x2bcfa4, Func Offset: 0x3e4
	// Line 312, Address: 0x2bcfdc, Func Offset: 0x41c
	// Line 316, Address: 0x2bcfe4, Func Offset: 0x424
	// Line 318, Address: 0x2bd00c, Func Offset: 0x44c
	// Line 319, Address: 0x2bd010, Func Offset: 0x450
	// Line 321, Address: 0x2bd018, Func Offset: 0x458
	// Line 323, Address: 0x2bd01c, Func Offset: 0x45c
	// Line 321, Address: 0x2bd020, Func Offset: 0x460
	// Line 323, Address: 0x2bd024, Func Offset: 0x464
	// Line 321, Address: 0x2bd02c, Func Offset: 0x46c
	// Line 324, Address: 0x2bd030, Func Offset: 0x470
	// Line 327, Address: 0x2bd038, Func Offset: 0x478
	// Line 329, Address: 0x2bd040, Func Offset: 0x480
	// Line 331, Address: 0x2bd064, Func Offset: 0x4a4
	// Line 329, Address: 0x2bd068, Func Offset: 0x4a8
	// Line 331, Address: 0x2bd06c, Func Offset: 0x4ac
	// Line 332, Address: 0x2bd070, Func Offset: 0x4b0
	// Line 336, Address: 0x2bd078, Func Offset: 0x4b8
	// Line 337, Address: 0x2bd080, Func Offset: 0x4c0
	// Line 347, Address: 0x2bd088, Func Offset: 0x4c8
	// Line 349, Address: 0x2bd0b0, Func Offset: 0x4f0
	// Line 351, Address: 0x2bd0b8, Func Offset: 0x4f8
	// Line 352, Address: 0x2bd0bc, Func Offset: 0x4fc
	// Line 351, Address: 0x2bd0c0, Func Offset: 0x500
	// Line 352, Address: 0x2bd0c4, Func Offset: 0x504
	// Line 351, Address: 0x2bd0cc, Func Offset: 0x50c
	// Line 359, Address: 0x2bd0d8, Func Offset: 0x518
	// Func End, Address: 0x2bd0e4, Func Offset: 0x524
}

// 
// Start address: 0x2bd0f0
void sdLoadInitFig(int first)
{
	int i;
	// Line 369, Address: 0x2bd0f0, Func Offset: 0
	// Line 374, Address: 0x2bd0f4, Func Offset: 0x4
	// Line 369, Address: 0x2bd0f8, Func Offset: 0x8
	// Line 376, Address: 0x2bd0fc, Func Offset: 0xc
	// Line 369, Address: 0x2bd100, Func Offset: 0x10
	// Line 374, Address: 0x2bd104, Func Offset: 0x14
	// Line 375, Address: 0x2bd108, Func Offset: 0x18
	// Line 376, Address: 0x2bd110, Func Offset: 0x20
	// Line 377, Address: 0x2bd114, Func Offset: 0x24
	// Line 378, Address: 0x2bd11c, Func Offset: 0x2c
	// Line 379, Address: 0x2bd124, Func Offset: 0x34
	// Line 381, Address: 0x2bd128, Func Offset: 0x38
	// Line 382, Address: 0x2bd130, Func Offset: 0x40
	// Line 383, Address: 0x2bd138, Func Offset: 0x48
	// Line 387, Address: 0x2bd14c, Func Offset: 0x5c
	// Line 385, Address: 0x2bd150, Func Offset: 0x60
	// Line 387, Address: 0x2bd154, Func Offset: 0x64
	// Line 385, Address: 0x2bd158, Func Offset: 0x68
	// Line 386, Address: 0x2bd160, Func Offset: 0x70
	// Line 388, Address: 0x2bd168, Func Offset: 0x78
	// Func End, Address: 0x2bd178, Func Offset: 0x88
}

// 
// Start address: 0x2bd180
void sdLoadInitData(int id)
{
	// Line 399, Address: 0x2bd180, Func Offset: 0
	// Line 400, Address: 0x2bd194, Func Offset: 0x14
	// Line 399, Address: 0x2bd198, Func Offset: 0x18
	// Line 400, Address: 0x2bd19c, Func Offset: 0x1c
	// Line 401, Address: 0x2bd1a4, Func Offset: 0x24
	// Func End, Address: 0x2bd1ac, Func Offset: 0x2c
}

// 
// Start address: 0x2bd1b0
unsigned int sdLoadSetDma(char* ee_addr, char* iop_addr, unsigned int size, int wait)
{
	_anon4 dma_data;
	unsigned int dma_que;
	// Line 415, Address: 0x2bd1b0, Func Offset: 0
	// Line 422, Address: 0x2bd1b4, Func Offset: 0x4
	// Line 415, Address: 0x2bd1b8, Func Offset: 0x8
	// Line 422, Address: 0x2bd1bc, Func Offset: 0xc
	// Line 415, Address: 0x2bd1c0, Func Offset: 0x10
	// Line 422, Address: 0x2bd1c4, Func Offset: 0x14
	// Line 415, Address: 0x2bd1c8, Func Offset: 0x18
	// Line 422, Address: 0x2bd1cc, Func Offset: 0x1c
	// Line 424, Address: 0x2bd1d4, Func Offset: 0x24
	// Line 425, Address: 0x2bd1dc, Func Offset: 0x2c
	// Line 428, Address: 0x2bd1e0, Func Offset: 0x30
	// Line 429, Address: 0x2bd1e4, Func Offset: 0x34
	// Line 432, Address: 0x2bd1e8, Func Offset: 0x38
	// Line 430, Address: 0x2bd1ec, Func Offset: 0x3c
	// Line 432, Address: 0x2bd1f0, Func Offset: 0x40
	// Line 434, Address: 0x2bd200, Func Offset: 0x50
	// Line 436, Address: 0x2bd208, Func Offset: 0x58
	// Line 440, Address: 0x2bd210, Func Offset: 0x60
	// Line 444, Address: 0x2bd218, Func Offset: 0x68
	// Line 448, Address: 0x2bd234, Func Offset: 0x84
	// Line 451, Address: 0x2bd238, Func Offset: 0x88
	// Line 452, Address: 0x2bd240, Func Offset: 0x90
	// Func End, Address: 0x2bd254, Func Offset: 0xa4
}

// 
// Start address: 0x2bd260
int sdLoadCheckDma(int id)
{
	// Line 464, Address: 0x2bd260, Func Offset: 0
	// Func End, Address: 0x2bd268, Func Offset: 0x8
}

