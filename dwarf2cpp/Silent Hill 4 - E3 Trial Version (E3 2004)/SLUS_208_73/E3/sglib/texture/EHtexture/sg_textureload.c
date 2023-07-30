typedef struct _anon0;



struct _anon0
{
	short base;
	short buffer_w;
	unsigned char psm;
	unsigned char data_psm;
	short w;
	short h;
	short buffer_size;
	short w2;
	short h2;
};

unsigned long* sg_packet_cur;

unsigned int getTextureDataSize(int psm, int w, int h);
void sgTextureLoadImageVif1(_anon0* tex, int x0, int y0, int w, int h, void* image_data);
void sgTextureLoadImageVif1Wait();

// 
// Start address: 0x157f70
unsigned int getTextureDataSize(int psm, int w, int h)
{
	int size;
	// Line 49, Address: 0x157f70, Func Offset: 0
	// Line 51, Address: 0x157f74, Func Offset: 0x4
	// Line 49, Address: 0x157f78, Func Offset: 0x8
	// Line 51, Address: 0x157f80, Func Offset: 0x10
	// Line 54, Address: 0x158008, Func Offset: 0x98
	// Line 55, Address: 0x15800c, Func Offset: 0x9c
	// Line 57, Address: 0x158014, Func Offset: 0xa4
	// Line 58, Address: 0x158018, Func Offset: 0xa8
	// Line 59, Address: 0x158024, Func Offset: 0xb4
	// Line 63, Address: 0x15802c, Func Offset: 0xbc
	// Line 64, Address: 0x158030, Func Offset: 0xc0
	// Line 65, Address: 0x158034, Func Offset: 0xc4
	// Line 67, Address: 0x15803c, Func Offset: 0xcc
	// Line 68, Address: 0x158040, Func Offset: 0xd0
	// Line 69, Address: 0x158044, Func Offset: 0xd4
	// Line 72, Address: 0x15804c, Func Offset: 0xdc
	// Line 73, Address: 0x158050, Func Offset: 0xe0
	// Line 74, Address: 0x158054, Func Offset: 0xe4
	// Line 75, Address: 0x15805c, Func Offset: 0xec
	// Line 76, Address: 0x158060, Func Offset: 0xf0
	// Line 79, Address: 0x158070, Func Offset: 0x100
	// Line 80, Address: 0x158074, Func Offset: 0x104
	// Func End, Address: 0x158084, Func Offset: 0x114
}

// 
// Start address: 0x158090
void sgTextureLoadImageVif1(_anon0* tex, int x0, int y0, int w, int h, void* image_data)
{
	unsigned long* pk;
	unsigned int size;
	int buffer_w;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned int image_addr;
	int send_size;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 182, Address: 0x158090, Func Offset: 0
	// Line 183, Address: 0x1580d0, Func Offset: 0x40
	// Line 185, Address: 0x1580ec, Func Offset: 0x5c
	// Line 186, Address: 0x158100, Func Offset: 0x70
	// Line 187, Address: 0x158118, Func Offset: 0x88
	// Line 188, Address: 0x158130, Func Offset: 0xa0
	// Line 189, Address: 0x158134, Func Offset: 0xa4
	// Line 190, Address: 0x158138, Func Offset: 0xa8
	// Line 191, Address: 0x15813c, Func Offset: 0xac
	// Line 192, Address: 0x158140, Func Offset: 0xb0
	// Line 193, Address: 0x158158, Func Offset: 0xc8
	// Line 194, Address: 0x15815c, Func Offset: 0xcc
	// Line 195, Address: 0x158160, Func Offset: 0xd0
	// Line 196, Address: 0x158164, Func Offset: 0xd4
	// Line 198, Address: 0x158168, Func Offset: 0xd8
	// Line 199, Address: 0x158170, Func Offset: 0xe0
	// Line 200, Address: 0x15817c, Func Offset: 0xec
	// Line 201, Address: 0x158184, Func Offset: 0xf4
	// Line 209, Address: 0x158188, Func Offset: 0xf8
	// Line 210, Address: 0x158190, Func Offset: 0x100
	// Line 212, Address: 0x158198, Func Offset: 0x108
	// Line 215, Address: 0x1581a8, Func Offset: 0x118
	// Line 216, Address: 0x1581b0, Func Offset: 0x120
	// Line 217, Address: 0x1581bc, Func Offset: 0x12c
	// Line 218, Address: 0x1581d0, Func Offset: 0x140
	// Line 219, Address: 0x1581d8, Func Offset: 0x148
	// Line 218, Address: 0x1581dc, Func Offset: 0x14c
	// Line 217, Address: 0x1581e0, Func Offset: 0x150
	// Line 218, Address: 0x1581e4, Func Offset: 0x154
	// Line 219, Address: 0x1581f0, Func Offset: 0x160
	// Line 217, Address: 0x1581f4, Func Offset: 0x164
	// Line 218, Address: 0x158200, Func Offset: 0x170
	// Line 217, Address: 0x158204, Func Offset: 0x174
	// Line 218, Address: 0x158208, Func Offset: 0x178
	// Line 217, Address: 0x15820c, Func Offset: 0x17c
	// Line 219, Address: 0x158210, Func Offset: 0x180
	// Line 218, Address: 0x158218, Func Offset: 0x188
	// Line 219, Address: 0x15821c, Func Offset: 0x18c
	// Line 220, Address: 0x158228, Func Offset: 0x198
	// Line 221, Address: 0x15822c, Func Offset: 0x19c
	// Line 217, Address: 0x158230, Func Offset: 0x1a0
	// Line 218, Address: 0x158248, Func Offset: 0x1b8
	// Line 219, Address: 0x15825c, Func Offset: 0x1cc
	// Line 218, Address: 0x158260, Func Offset: 0x1d0
	// Line 219, Address: 0x158264, Func Offset: 0x1d4
	// Line 220, Address: 0x158278, Func Offset: 0x1e8
	// Line 219, Address: 0x15827c, Func Offset: 0x1ec
	// Line 220, Address: 0x158280, Func Offset: 0x1f0
	// Line 221, Address: 0x158294, Func Offset: 0x204
	// Line 220, Address: 0x158298, Func Offset: 0x208
	// Line 221, Address: 0x15829c, Func Offset: 0x20c
	// Line 222, Address: 0x1582b0, Func Offset: 0x220
	// Line 223, Address: 0x1582b8, Func Offset: 0x228
	// Line 224, Address: 0x1582c0, Func Offset: 0x230
	// Line 227, Address: 0x1582c8, Func Offset: 0x238
	// Line 228, Address: 0x1582cc, Func Offset: 0x23c
	// Line 230, Address: 0x1582d8, Func Offset: 0x248
	// Line 231, Address: 0x1582f0, Func Offset: 0x260
	// Line 232, Address: 0x1582f8, Func Offset: 0x268
	// Line 233, Address: 0x158308, Func Offset: 0x278
	// Line 234, Address: 0x158314, Func Offset: 0x284
	// Line 235, Address: 0x158334, Func Offset: 0x2a4
	// Line 236, Address: 0x158340, Func Offset: 0x2b0
	// Line 237, Address: 0x158374, Func Offset: 0x2e4
	// Line 238, Address: 0x158378, Func Offset: 0x2e8
	// Line 239, Address: 0x15838c, Func Offset: 0x2fc
	// Line 240, Address: 0x158394, Func Offset: 0x304
	// Line 241, Address: 0x15839c, Func Offset: 0x30c
	// Line 242, Address: 0x1583c8, Func Offset: 0x338
	// Line 244, Address: 0x1583d8, Func Offset: 0x348
	// Line 243, Address: 0x1583dc, Func Offset: 0x34c
	// Line 245, Address: 0x1583e0, Func Offset: 0x350
	// Line 247, Address: 0x1583e8, Func Offset: 0x358
	// Line 248, Address: 0x1583f0, Func Offset: 0x360
	// Line 256, Address: 0x1583f8, Func Offset: 0x368
	// Line 257, Address: 0x158400, Func Offset: 0x370
	// Line 258, Address: 0x15840c, Func Offset: 0x37c
	// Line 267, Address: 0x158424, Func Offset: 0x394
	// Func End, Address: 0x158458, Func Offset: 0x3c8
}

// 
// Start address: 0x158460
void sgTextureLoadImageVif1Wait()
{
	// Line 272, Address: 0x158460, Func Offset: 0
	// Func End, Address: 0x158468, Func Offset: 0x8
}

