
typedef int(*type)(int);


int excl_sid;
int wait_sid;
int dmac_hid;
int(*shDmaVif1Handler)(int);
int AA1_check;

int shDmaVif1Handler();
void shDmaVif1Halt();
int shDmaVif1Wait();
int shDmaVif1Init();
int shDmaVif1Send(void* packet);

// 
// Start address: 0x18f250
int shDmaVif1Handler()
{
	// Line 41, Address: 0x18f250, Func Offset: 0
	// Line 52, Address: 0x18f258, Func Offset: 0x8
	// Line 53, Address: 0x18f268, Func Offset: 0x18
	// Line 54, Address: 0x18f270, Func Offset: 0x20
	// Line 55, Address: 0x18f274, Func Offset: 0x24
	// Func End, Address: 0x18f284, Func Offset: 0x34
}

// 
// Start address: 0x18f290
void shDmaVif1Halt()
{
	unsigned int enable;
	unsigned int chcr;
	// Line 59, Address: 0x18f290, Func Offset: 0
	// Line 62, Address: 0x18f29c, Func Offset: 0xc
	// Line 63, Address: 0x18f2a8, Func Offset: 0x18
	// Line 64, Address: 0x18f2bc, Func Offset: 0x2c
	// Line 65, Address: 0x18f2c8, Func Offset: 0x38
	// Line 66, Address: 0x18f2d0, Func Offset: 0x40
	// Line 67, Address: 0x18f2dc, Func Offset: 0x4c
	// Line 68, Address: 0x18f2e8, Func Offset: 0x58
	// Func End, Address: 0x18f2fc, Func Offset: 0x6c
}

// 
// Start address: 0x18f300
int shDmaVif1Wait()
{
	unsigned short h1;
	unsigned short h0;
	int count;
	// Line 72, Address: 0x18f300, Func Offset: 0
	// Line 76, Address: 0x18f314, Func Offset: 0x14
	// Line 77, Address: 0x18f318, Func Offset: 0x18
	// Line 78, Address: 0x18f328, Func Offset: 0x28
	// Line 80, Address: 0x18f330, Func Offset: 0x30
	// Line 81, Address: 0x18f334, Func Offset: 0x34
	// Line 82, Address: 0x18f344, Func Offset: 0x44
	// Line 83, Address: 0x18f354, Func Offset: 0x54
	// Line 84, Address: 0x18f358, Func Offset: 0x58
	// Line 85, Address: 0x18f374, Func Offset: 0x74
	// Line 86, Address: 0x18f384, Func Offset: 0x84
	// Line 88, Address: 0x18f388, Func Offset: 0x88
	// Line 89, Address: 0x18f3a0, Func Offset: 0xa0
	// Line 90, Address: 0x18f3a4, Func Offset: 0xa4
	// Func End, Address: 0x18f3c0, Func Offset: 0xc0
}

// 
// Start address: 0x18f3c0
int shDmaVif1Init()
{
	int ret;
	unsigned int chcr;
	// Line 101, Address: 0x18f3c0, Func Offset: 0
	// Line 106, Address: 0x18f3d0, Func Offset: 0x10
	// Line 107, Address: 0x18f40c, Func Offset: 0x4c
	// Line 109, Address: 0x18f41c, Func Offset: 0x5c
	// Line 111, Address: 0x18f450, Func Offset: 0x90
	// Line 112, Address: 0x18f458, Func Offset: 0x98
	// Line 113, Address: 0x18f468, Func Offset: 0xa8
	// Line 114, Address: 0x18f46c, Func Offset: 0xac
	// Line 117, Address: 0x18f478, Func Offset: 0xb8
	// Line 119, Address: 0x18f4b4, Func Offset: 0xf4
	// Line 120, Address: 0x18f4d4, Func Offset: 0x114
	// Line 123, Address: 0x18f4e0, Func Offset: 0x120
	// Line 124, Address: 0x18f4f0, Func Offset: 0x130
	// Line 125, Address: 0x18f508, Func Offset: 0x148
	// Line 126, Address: 0x18f50c, Func Offset: 0x14c
	// Func End, Address: 0x18f524, Func Offset: 0x164
}

// 
// Start address: 0x18f530
int shDmaVif1Send(void* packet)
{
	unsigned int chcr;
	// Line 130, Address: 0x18f530, Func Offset: 0
	// Line 132, Address: 0x18f540, Func Offset: 0x10
	// Line 134, Address: 0x18f554, Func Offset: 0x24
	// Line 136, Address: 0x18f560, Func Offset: 0x30
	// Line 138, Address: 0x18f570, Func Offset: 0x40
	// Line 140, Address: 0x18f57c, Func Offset: 0x4c
	// Line 141, Address: 0x18f58c, Func Offset: 0x5c
	// Line 142, Address: 0x18f598, Func Offset: 0x68
	// Line 144, Address: 0x18f5a4, Func Offset: 0x74
	// Line 145, Address: 0x18f5ac, Func Offset: 0x7c
	// Line 147, Address: 0x18f5b0, Func Offset: 0x80
	// Line 149, Address: 0x18f5bc, Func Offset: 0x8c
	// Line 151, Address: 0x18f5c8, Func Offset: 0x98
	// Line 153, Address: 0x18f5d8, Func Offset: 0xa8
	// Line 155, Address: 0x18f5e4, Func Offset: 0xb4
	// Line 157, Address: 0x18f5f4, Func Offset: 0xc4
	// Line 158, Address: 0x18f604, Func Offset: 0xd4
	// Line 160, Address: 0x18f608, Func Offset: 0xd8
	// Line 161, Address: 0x18f614, Func Offset: 0xe4
	// Line 169, Address: 0x18f628, Func Offset: 0xf8
	// Line 172, Address: 0x18f660, Func Offset: 0x130
	// Line 174, Address: 0x18f66c, Func Offset: 0x13c
	// Line 176, Address: 0x18f67c, Func Offset: 0x14c
	// Line 178, Address: 0x18f688, Func Offset: 0x158
	// Line 179, Address: 0x18f68c, Func Offset: 0x15c
	// Func End, Address: 0x18f6a0, Func Offset: 0x170
}

