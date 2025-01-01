typedef enum sgDmaChanNo : unsigned char;
typedef struct _anon0;


typedef _anon0 type_0[10];
typedef unsigned int* type_1[10];
typedef unsigned int* type_2[10];
typedef unsigned int* type_3[10];

enum sgDmaChanNo : unsigned char
{
	SG_DMA_VIF0,
	SG_DMA_VIF1,
	SG_DMA_GIF,
	SG_DMA_FROM_SPR = 0x8,
	SG_DMA_TO_SPR
};

struct _anon0
{
	unsigned int* chcr_addr;
	int queue_mode_status;
};

_anon0 dma_channels[10];

void sgDmaInit();
void sgDmaQuit();
void sgDmaStartQueueMode(sgDmaChanNo chan_no);
void sgDmaEndQueueMode(sgDmaChanNo chan_no);
void sgDmaWait(sgDmaChanNo chan_no);
void sgDmaDrawPathWait();
void sgDmaSendN(sgDmaChanNo chan_no, void* addr, int size);
void sgDmaSend(sgDmaChanNo chan_no, void* addr);
void sgDmaSendNToSPR(void* to_saddr, void* from_addr, int size);
void sgDmaSendNFromSPR(void* to_addr, void* from_saddr, int size);
void sgDmaSetChannel(sgDmaChanNo chan_no, int dir, int tte, int tie);

// 
// Start address: 0x149450
void sgDmaInit()
{
	// Line 145, Address: 0x149450, Func Offset: 0
	// Line 146, Address: 0x149458, Func Offset: 0x8
	// Line 147, Address: 0x149460, Func Offset: 0x10
	// Line 148, Address: 0x149494, Func Offset: 0x44
	// Func End, Address: 0x1494a0, Func Offset: 0x50
}

// 
// Start address: 0x1494a0
void sgDmaQuit()
{
	// Line 151, Address: 0x1494a0, Func Offset: 0
	// Line 152, Address: 0x1494a8, Func Offset: 0x8
	// Line 153, Address: 0x1494b0, Func Offset: 0x10
	// Line 154, Address: 0x1494e4, Func Offset: 0x44
	// Func End, Address: 0x1494f0, Func Offset: 0x50
}

// 
// Start address: 0x1494f0
void sgDmaStartQueueMode(sgDmaChanNo chan_no)
{
	// Line 162, Address: 0x1494f0, Func Offset: 0
	// Line 163, Address: 0x1494fc, Func Offset: 0xc
	// Line 164, Address: 0x149504, Func Offset: 0x14
	// Line 165, Address: 0x14951c, Func Offset: 0x2c
	// Line 166, Address: 0x149524, Func Offset: 0x34
	// Func End, Address: 0x149534, Func Offset: 0x44
}

// 
// Start address: 0x149540
void sgDmaEndQueueMode(sgDmaChanNo chan_no)
{
	// Line 174, Address: 0x149540, Func Offset: 0
	// Line 175, Address: 0x149544, Func Offset: 0x4
	// Line 174, Address: 0x149548, Func Offset: 0x8
	// Line 175, Address: 0x149558, Func Offset: 0x18
	// Line 176, Address: 0x149560, Func Offset: 0x20
	// Line 177, Address: 0x149568, Func Offset: 0x28
	// Line 178, Address: 0x149580, Func Offset: 0x40
	// Func End, Address: 0x149594, Func Offset: 0x54
}

// 
// Start address: 0x1495a0
void sgDmaWait(sgDmaChanNo chan_no)
{
	unsigned int* chcr;
	unsigned int t;
	// Line 205, Address: 0x1495a0, Func Offset: 0
	// Line 203, Address: 0x1495a4, Func Offset: 0x4
	// Line 205, Address: 0x1495a8, Func Offset: 0x8
	// Line 203, Address: 0x1495ac, Func Offset: 0xc
	// Line 205, Address: 0x1495b0, Func Offset: 0x10
	// Line 203, Address: 0x1495b4, Func Offset: 0x14
	// Line 205, Address: 0x1495b8, Func Offset: 0x18
	// Line 206, Address: 0x1495cc, Func Offset: 0x2c
	// Line 207, Address: 0x1495d8, Func Offset: 0x38
	// Line 209, Address: 0x1495e0, Func Offset: 0x40
	// Line 210, Address: 0x1495f0, Func Offset: 0x50
	// Line 211, Address: 0x149668, Func Offset: 0xc8
	// Func End, Address: 0x149678, Func Offset: 0xd8
}

// 
// Start address: 0x149680
void sgDmaDrawPathWait()
{
	unsigned int* chcr;
	unsigned int reg;
	unsigned int vcnt;
	unsigned int t;
	unsigned int t;
	unsigned int t;
	// Line 222, Address: 0x149680, Func Offset: 0
	// Line 227, Address: 0x149684, Func Offset: 0x4
	// Line 222, Address: 0x149688, Func Offset: 0x8
	// Line 227, Address: 0x149694, Func Offset: 0x14
	// Line 231, Address: 0x1496a0, Func Offset: 0x20
	// Line 232, Address: 0x1496a8, Func Offset: 0x28
	// Line 237, Address: 0x149718, Func Offset: 0x98
	// Line 241, Address: 0x149838, Func Offset: 0x1b8
	// Line 242, Address: 0x14983c, Func Offset: 0x1bc
	// Line 244, Address: 0x149854, Func Offset: 0x1d4
	// Line 247, Address: 0x149860, Func Offset: 0x1e0
	// Line 249, Address: 0x149868, Func Offset: 0x1e8
	// Line 254, Address: 0x149874, Func Offset: 0x1f4
	// Line 255, Address: 0x149998, Func Offset: 0x318
	// Func End, Address: 0x1499ac, Func Offset: 0x32c
}

// 
// Start address: 0x1499b0
void sgDmaSendN(sgDmaChanNo chan_no, void* addr, int size)
{
	unsigned int daddr;
	unsigned int* chcr;
	unsigned int t;
	unsigned int tmp;
	// Line 276, Address: 0x1499b0, Func Offset: 0
	// Line 280, Address: 0x1499c4, Func Offset: 0x14
	// Line 284, Address: 0x1499cc, Func Offset: 0x1c
	// Line 286, Address: 0x1499d0, Func Offset: 0x20
	// Line 287, Address: 0x1499d8, Func Offset: 0x28
	// Line 286, Address: 0x1499dc, Func Offset: 0x2c
	// Line 287, Address: 0x1499e0, Func Offset: 0x30
	// Line 288, Address: 0x1499f0, Func Offset: 0x40
	// Line 290, Address: 0x1499f8, Func Offset: 0x48
	// Line 291, Address: 0x149a18, Func Offset: 0x68
	// Line 292, Address: 0x149a28, Func Offset: 0x78
	// Line 295, Address: 0x149a30, Func Offset: 0x80
	// Line 297, Address: 0x149a40, Func Offset: 0x90
	// Line 302, Address: 0x149ab8, Func Offset: 0x108
	// Line 303, Address: 0x149ad0, Func Offset: 0x120
	// Line 306, Address: 0x149ad4, Func Offset: 0x124
	// Line 307, Address: 0x149ad8, Func Offset: 0x128
	// Line 306, Address: 0x149aec, Func Offset: 0x13c
	// Line 307, Address: 0x149af0, Func Offset: 0x140
	// Line 308, Address: 0x149b20, Func Offset: 0x170
	// Line 311, Address: 0x149b28, Func Offset: 0x178
	// Func End, Address: 0x149b40, Func Offset: 0x190
}

// 
// Start address: 0x149b40
void sgDmaSend(sgDmaChanNo chan_no, void* addr)
{
	unsigned int daddr;
	unsigned int* chcr;
	unsigned int t;
	unsigned int tmp;
	// Line 326, Address: 0x149b40, Func Offset: 0
	// Line 330, Address: 0x149b4c, Func Offset: 0xc
	// Line 334, Address: 0x149b54, Func Offset: 0x14
	// Line 336, Address: 0x149b58, Func Offset: 0x18
	// Line 337, Address: 0x149b60, Func Offset: 0x20
	// Line 336, Address: 0x149b64, Func Offset: 0x24
	// Line 337, Address: 0x149b68, Func Offset: 0x28
	// Line 338, Address: 0x149b78, Func Offset: 0x38
	// Line 340, Address: 0x149b80, Func Offset: 0x40
	// Line 341, Address: 0x149ba0, Func Offset: 0x60
	// Line 342, Address: 0x149bb0, Func Offset: 0x70
	// Line 345, Address: 0x149bb8, Func Offset: 0x78
	// Line 347, Address: 0x149bc8, Func Offset: 0x88
	// Line 352, Address: 0x149c40, Func Offset: 0x100
	// Line 353, Address: 0x149c58, Func Offset: 0x118
	// Line 356, Address: 0x149c5c, Func Offset: 0x11c
	// Line 357, Address: 0x149c60, Func Offset: 0x120
	// Line 356, Address: 0x149c70, Func Offset: 0x130
	// Line 357, Address: 0x149c74, Func Offset: 0x134
	// Line 358, Address: 0x149ca4, Func Offset: 0x164
	// Line 361, Address: 0x149cac, Func Offset: 0x16c
	// Func End, Address: 0x149cc4, Func Offset: 0x184
}

// 
// Start address: 0x149cd0
void sgDmaSendNToSPR(void* to_saddr, void* from_addr, int size)
{
	unsigned int daddr;
	unsigned int* chcr;
	unsigned int t;
	unsigned int tmp;
	// Line 377, Address: 0x149cd0, Func Offset: 0
	// Line 381, Address: 0x149cf0, Func Offset: 0x20
	// Line 383, Address: 0x149cf4, Func Offset: 0x24
	// Line 384, Address: 0x149cf8, Func Offset: 0x28
	// Line 385, Address: 0x149cfc, Func Offset: 0x2c
	// Line 386, Address: 0x149d0c, Func Offset: 0x3c
	// Line 388, Address: 0x149d18, Func Offset: 0x48
	// Line 390, Address: 0x149d88, Func Offset: 0xb8
	// Line 392, Address: 0x149da0, Func Offset: 0xd0
	// Line 396, Address: 0x149da4, Func Offset: 0xd4
	// Line 391, Address: 0x149da8, Func Offset: 0xd8
	// Line 392, Address: 0x149dac, Func Offset: 0xdc
	// Line 396, Address: 0x149db0, Func Offset: 0xe0
	// Line 392, Address: 0x149db4, Func Offset: 0xe4
	// Line 396, Address: 0x149db8, Func Offset: 0xe8
	// Line 395, Address: 0x149dbc, Func Offset: 0xec
	// Line 396, Address: 0x149dc0, Func Offset: 0xf0
	// Line 395, Address: 0x149dc8, Func Offset: 0xf8
	// Line 396, Address: 0x149dcc, Func Offset: 0xfc
	// Line 397, Address: 0x149dfc, Func Offset: 0x12c
	// Line 399, Address: 0x149e04, Func Offset: 0x134
	// Func End, Address: 0x149e20, Func Offset: 0x150
}

// 
// Start address: 0x149e20
void sgDmaSendNFromSPR(void* to_addr, void* from_saddr, int size)
{
	unsigned int daddr;
	unsigned int* chcr;
	unsigned int t;
	unsigned int tmp;
	// Line 453, Address: 0x149e20, Func Offset: 0
	// Line 457, Address: 0x149e40, Func Offset: 0x20
	// Line 459, Address: 0x149e44, Func Offset: 0x24
	// Line 460, Address: 0x149e48, Func Offset: 0x28
	// Line 461, Address: 0x149e4c, Func Offset: 0x2c
	// Line 462, Address: 0x149e5c, Func Offset: 0x3c
	// Line 464, Address: 0x149e68, Func Offset: 0x48
	// Line 466, Address: 0x149ed8, Func Offset: 0xb8
	// Line 468, Address: 0x149ef0, Func Offset: 0xd0
	// Line 472, Address: 0x149ef4, Func Offset: 0xd4
	// Line 467, Address: 0x149ef8, Func Offset: 0xd8
	// Line 468, Address: 0x149efc, Func Offset: 0xdc
	// Line 472, Address: 0x149f00, Func Offset: 0xe0
	// Line 468, Address: 0x149f04, Func Offset: 0xe4
	// Line 472, Address: 0x149f08, Func Offset: 0xe8
	// Line 471, Address: 0x149f0c, Func Offset: 0xec
	// Line 472, Address: 0x149f10, Func Offset: 0xf0
	// Line 471, Address: 0x149f18, Func Offset: 0xf8
	// Line 472, Address: 0x149f1c, Func Offset: 0xfc
	// Line 473, Address: 0x149f4c, Func Offset: 0x12c
	// Line 475, Address: 0x149f54, Func Offset: 0x134
	// Func End, Address: 0x149f70, Func Offset: 0x150
}

// 
// Start address: 0x149f70
void sgDmaSetChannel(sgDmaChanNo chan_no, int dir, int tte, int tie)
{
	unsigned int* chcr;
	unsigned int t;
	// Line 523, Address: 0x149f70, Func Offset: 0
	// Line 526, Address: 0x149f74, Func Offset: 0x4
	// Line 523, Address: 0x149f78, Func Offset: 0x8
	// Line 526, Address: 0x149f7c, Func Offset: 0xc
	// Line 523, Address: 0x149f80, Func Offset: 0x10
	// Line 526, Address: 0x149f8c, Func Offset: 0x1c
	// Line 523, Address: 0x149f90, Func Offset: 0x20
	// Line 526, Address: 0x149f94, Func Offset: 0x24
	// Line 523, Address: 0x149f9c, Func Offset: 0x2c
	// Line 526, Address: 0x149fa0, Func Offset: 0x30
	// Line 527, Address: 0x149fac, Func Offset: 0x3c
	// Line 529, Address: 0x14a028, Func Offset: 0xb8
	// Line 530, Address: 0x14a03c, Func Offset: 0xcc
	// Func End, Address: 0x14a058, Func Offset: 0xe8
}

