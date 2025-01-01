
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
// Start address: 0x188cf0
int shDmaVif1Handler()
{
	// Line 43, Address: 0x188cf0, Func Offset: 0
	// Line 54, Address: 0x188cf8, Func Offset: 0x8
	// Line 55, Address: 0x188d08, Func Offset: 0x18
	// Line 56, Address: 0x188d10, Func Offset: 0x20
	// Line 57, Address: 0x188d14, Func Offset: 0x24
	// Func End, Address: 0x188d24, Func Offset: 0x34
}

// 
// Start address: 0x188d30
void shDmaVif1Halt()
{
	unsigned int enable;
	unsigned int chcr;
	// Line 64, Address: 0x188d30, Func Offset: 0
	// Line 65, Address: 0x188d38, Func Offset: 0x8
	// Line 66, Address: 0x188d4c, Func Offset: 0x1c
	// Line 68, Address: 0x188d54, Func Offset: 0x24
	// Line 69, Address: 0x188d64, Func Offset: 0x34
	// Line 70, Address: 0x188d6c, Func Offset: 0x3c
	// Func End, Address: 0x188d74, Func Offset: 0x44
}

// 
// Start address: 0x188d80
int shDmaVif1Wait()
{
	unsigned short h1;
	unsigned short h0;
	int count;
	// Line 74, Address: 0x188d80, Func Offset: 0
	// Line 78, Address: 0x188d90, Func Offset: 0x10
	// Line 79, Address: 0x188d94, Func Offset: 0x14
	// Line 80, Address: 0x188da0, Func Offset: 0x20
	// Line 82, Address: 0x188da8, Func Offset: 0x28
	// Line 83, Address: 0x188dac, Func Offset: 0x2c
	// Line 84, Address: 0x188db4, Func Offset: 0x34
	// Line 85, Address: 0x188dc0, Func Offset: 0x40
	// Line 86, Address: 0x188dc4, Func Offset: 0x44
	// Line 87, Address: 0x188de0, Func Offset: 0x60
	// Line 90, Address: 0x188df4, Func Offset: 0x74
	// Line 91, Address: 0x188e0c, Func Offset: 0x8c
	// Line 92, Address: 0x188e10, Func Offset: 0x90
	// Func End, Address: 0x188e28, Func Offset: 0xa8
}

// 
// Start address: 0x188e30
int shDmaVif1Init()
{
	int ret;
	unsigned int chcr;
	// Line 103, Address: 0x188e30, Func Offset: 0
	// Line 108, Address: 0x188e3c, Func Offset: 0xc
	// Line 109, Address: 0x188e74, Func Offset: 0x44
	// Line 111, Address: 0x188e7c, Func Offset: 0x4c
	// Line 113, Address: 0x188eac, Func Offset: 0x7c
	// Line 114, Address: 0x188eb4, Func Offset: 0x84
	// Line 116, Address: 0x188ec0, Func Offset: 0x90
	// Line 119, Address: 0x188ecc, Func Offset: 0x9c
	// Line 121, Address: 0x188f00, Func Offset: 0xd0
	// Line 122, Address: 0x188f1c, Func Offset: 0xec
	// Line 125, Address: 0x188f28, Func Offset: 0xf8
	// Line 126, Address: 0x188f38, Func Offset: 0x108
	// Line 127, Address: 0x188f50, Func Offset: 0x120
	// Line 128, Address: 0x188f54, Func Offset: 0x124
	// Func End, Address: 0x188f68, Func Offset: 0x138
}

// 
// Start address: 0x188f70
int shDmaVif1Send(void* packet)
{
	unsigned int chcr;
	// Line 132, Address: 0x188f70, Func Offset: 0
	// Line 134, Address: 0x188f80, Func Offset: 0x10
	// Line 136, Address: 0x188f94, Func Offset: 0x24
	// Line 138, Address: 0x188fa0, Func Offset: 0x30
	// Line 140, Address: 0x188fb0, Func Offset: 0x40
	// Line 142, Address: 0x188fbc, Func Offset: 0x4c
	// Line 143, Address: 0x188fc8, Func Offset: 0x58
	// Line 144, Address: 0x188fd0, Func Offset: 0x60
	// Line 150, Address: 0x188fd8, Func Offset: 0x68
	// Line 152, Address: 0x188fe8, Func Offset: 0x78
	// Line 154, Address: 0x188ffc, Func Offset: 0x8c
	// Line 156, Address: 0x189008, Func Offset: 0x98
	// Line 158, Address: 0x189018, Func Offset: 0xa8
	// Line 160, Address: 0x189024, Func Offset: 0xb4
	// Line 163, Address: 0x189034, Func Offset: 0xc4
	// Line 166, Address: 0x189048, Func Offset: 0xd8
	// Line 167, Address: 0x189050, Func Offset: 0xe0
	// Line 168, Address: 0x189060, Func Offset: 0xf0
	// Line 178, Address: 0x189090, Func Offset: 0x120
	// Line 180, Address: 0x18909c, Func Offset: 0x12c
	// Line 182, Address: 0x1890ac, Func Offset: 0x13c
	// Line 184, Address: 0x1890b8, Func Offset: 0x148
	// Line 185, Address: 0x1890bc, Func Offset: 0x14c
	// Func End, Address: 0x1890d0, Func Offset: 0x160
}

