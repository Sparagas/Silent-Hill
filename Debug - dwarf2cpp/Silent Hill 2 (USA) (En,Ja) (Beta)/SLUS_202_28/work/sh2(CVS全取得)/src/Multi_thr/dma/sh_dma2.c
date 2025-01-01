
typedef int(*type)(int);


int excl_sid;
int wait_sid;
int dmac_hid;
int(*shDmaGifHandler)(int);
int AA2_check;

int shDmaGifHandler();
void shDmaGifHalt();
int shDmaGifWait();
int shDmaGifInit();
int shDmaGifSend(void* packet);

// 
// Start address: 0x1890d0
int shDmaGifHandler()
{
	// Line 39, Address: 0x1890d0, Func Offset: 0
	// Line 50, Address: 0x1890d8, Func Offset: 0x8
	// Line 51, Address: 0x1890e8, Func Offset: 0x18
	// Line 52, Address: 0x1890f0, Func Offset: 0x20
	// Line 53, Address: 0x1890f4, Func Offset: 0x24
	// Func End, Address: 0x189104, Func Offset: 0x34
}

// 
// Start address: 0x189110
void shDmaGifHalt()
{
	unsigned int enable;
	unsigned int chcr;
	// Line 60, Address: 0x189110, Func Offset: 0
	// Line 61, Address: 0x189118, Func Offset: 0x8
	// Line 62, Address: 0x18912c, Func Offset: 0x1c
	// Line 64, Address: 0x189134, Func Offset: 0x24
	// Line 65, Address: 0x189144, Func Offset: 0x34
	// Line 66, Address: 0x18914c, Func Offset: 0x3c
	// Func End, Address: 0x189154, Func Offset: 0x44
}

// 
// Start address: 0x189160
int shDmaGifWait()
{
	unsigned short h1;
	unsigned short h0;
	int count;
	// Line 70, Address: 0x189160, Func Offset: 0
	// Line 74, Address: 0x189170, Func Offset: 0x10
	// Line 75, Address: 0x189174, Func Offset: 0x14
	// Line 76, Address: 0x189180, Func Offset: 0x20
	// Line 78, Address: 0x189188, Func Offset: 0x28
	// Line 79, Address: 0x18918c, Func Offset: 0x2c
	// Line 80, Address: 0x189194, Func Offset: 0x34
	// Line 81, Address: 0x1891a0, Func Offset: 0x40
	// Line 82, Address: 0x1891a4, Func Offset: 0x44
	// Line 83, Address: 0x1891c0, Func Offset: 0x60
	// Line 86, Address: 0x1891d4, Func Offset: 0x74
	// Line 87, Address: 0x1891ec, Func Offset: 0x8c
	// Line 88, Address: 0x1891f0, Func Offset: 0x90
	// Func End, Address: 0x189208, Func Offset: 0xa8
}

// 
// Start address: 0x189210
int shDmaGifInit()
{
	int ret;
	unsigned int chcr;
	// Line 99, Address: 0x189210, Func Offset: 0
	// Line 104, Address: 0x18921c, Func Offset: 0xc
	// Line 105, Address: 0x189254, Func Offset: 0x44
	// Line 107, Address: 0x18925c, Func Offset: 0x4c
	// Line 109, Address: 0x18928c, Func Offset: 0x7c
	// Line 110, Address: 0x189294, Func Offset: 0x84
	// Line 112, Address: 0x1892a0, Func Offset: 0x90
	// Line 115, Address: 0x1892ac, Func Offset: 0x9c
	// Line 117, Address: 0x1892e0, Func Offset: 0xd0
	// Line 118, Address: 0x1892fc, Func Offset: 0xec
	// Line 121, Address: 0x189308, Func Offset: 0xf8
	// Line 122, Address: 0x189318, Func Offset: 0x108
	// Line 123, Address: 0x189330, Func Offset: 0x120
	// Line 124, Address: 0x189334, Func Offset: 0x124
	// Func End, Address: 0x189348, Func Offset: 0x138
}

// 
// Start address: 0x189350
int shDmaGifSend(void* packet)
{
	unsigned int chcr;
	// Line 128, Address: 0x189350, Func Offset: 0
	// Line 130, Address: 0x189360, Func Offset: 0x10
	// Line 132, Address: 0x189374, Func Offset: 0x24
	// Line 134, Address: 0x189380, Func Offset: 0x30
	// Line 136, Address: 0x189390, Func Offset: 0x40
	// Line 138, Address: 0x18939c, Func Offset: 0x4c
	// Line 139, Address: 0x1893a8, Func Offset: 0x58
	// Line 140, Address: 0x1893b0, Func Offset: 0x60
	// Line 144, Address: 0x1893b8, Func Offset: 0x68
	// Line 146, Address: 0x1893c4, Func Offset: 0x74
	// Line 148, Address: 0x1893d4, Func Offset: 0x84
	// Line 150, Address: 0x1893e8, Func Offset: 0x98
	// Line 152, Address: 0x1893f4, Func Offset: 0xa4
	// Line 154, Address: 0x189404, Func Offset: 0xb4
	// Line 156, Address: 0x189410, Func Offset: 0xc0
	// Line 159, Address: 0x189420, Func Offset: 0xd0
	// Line 162, Address: 0x189434, Func Offset: 0xe4
	// Line 163, Address: 0x18943c, Func Offset: 0xec
	// Line 164, Address: 0x18944c, Func Offset: 0xfc
	// Line 174, Address: 0x18947c, Func Offset: 0x12c
	// Line 176, Address: 0x189488, Func Offset: 0x138
	// Line 178, Address: 0x189498, Func Offset: 0x148
	// Line 180, Address: 0x1894a4, Func Offset: 0x154
	// Line 181, Address: 0x1894a8, Func Offset: 0x158
	// Func End, Address: 0x1894bc, Func Offset: 0x16c
}

