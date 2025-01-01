typedef struct _anon0;


typedef _anon0 type_0[4];
typedef unsigned long type_1[2];
typedef unsigned long type_2[2];
typedef unsigned long type_3[2];

struct _anon0
{
	unsigned long* sg_packet_cur;
	<unknown fundamental type (0xa510)>* top_addr;
	unsigned long* gif_addr;
	unsigned long* dmatag_addr;
};

unsigned long reglist_giftag[2];
unsigned long* dmatag_addr;
unsigned long* gif_addr;
<unknown fundamental type (0xa510)>* top_addr;
unsigned long* sg_packet_cur;
unsigned int stack_no;
_anon0 st_work[4];
unsigned int* vif1_direct_addr;

void sgPacketStart(void* top);
void sgPacketSetCurrent(void* addr);
void* sgPacketGetCurrent();
unsigned int sgPacketSize();
void sgPacketVif1DirectHLOpen(unsigned int code0, unsigned int code1, unsigned int code2);
void sgPacketVif1DirectOpen(unsigned int code0, unsigned int code1, unsigned int code2);
void sgPacketVif1DirectClose();
void sgPacketGifTagOpen(<unknown fundamental type (0xa510)> giftag);
void sgPacketGifTagOpenPacked();
void sgPacketGifTagOpenPackedNoEOP();
void sgPacketGifTagSetRegs(unsigned long regs, int nb_regs);
void sgPacketGifTagSetPrim(unsigned long prim);
void sgPacketGifTagClose();
void sgPacketDmaTagOpen(unsigned long dma_tag);
void sgPacketDmaTagSetVifCode(unsigned int code0, unsigned int code1);
void sgPacketDmaTagClose();

// 
// Start address: 0x14c3d0
void sgPacketStart(void* top)
{
	// Line 112, Address: 0x14c3d0, Func Offset: 0
	// Line 113, Address: 0x14c3d4, Func Offset: 0x4
	// Line 112, Address: 0x14c3d8, Func Offset: 0x8
	// Line 113, Address: 0x14c3e0, Func Offset: 0x10
	// Line 114, Address: 0x14c3e8, Func Offset: 0x18
	// Line 115, Address: 0x14c3f4, Func Offset: 0x24
	// Line 116, Address: 0x14c3f8, Func Offset: 0x28
	// Line 117, Address: 0x14c400, Func Offset: 0x30
	// Line 118, Address: 0x14c410, Func Offset: 0x40
	// Func End, Address: 0x14c420, Func Offset: 0x50
}

// 
// Start address: 0x14c420
void sgPacketSetCurrent(void* addr)
{
	// Line 141, Address: 0x14c420, Func Offset: 0
	// Line 142, Address: 0x14c424, Func Offset: 0x4
	// Func End, Address: 0x14c42c, Func Offset: 0xc
}

// 
// Start address: 0x14c430
void* sgPacketGetCurrent()
{
	// Line 152, Address: 0x14c430, Func Offset: 0
	// Line 153, Address: 0x14c434, Func Offset: 0x4
	// Func End, Address: 0x14c43c, Func Offset: 0xc
}

// 
// Start address: 0x14c440
unsigned int sgPacketSize()
{
	// Line 162, Address: 0x14c440, Func Offset: 0
	// Line 163, Address: 0x14c464, Func Offset: 0x24
	// Func End, Address: 0x14c46c, Func Offset: 0x2c
}

// 
// Start address: 0x14c470
void sgPacketVif1DirectHLOpen(unsigned int code0, unsigned int code1, unsigned int code2)
{
	// Line 179, Address: 0x14c470, Func Offset: 0
	// Line 180, Address: 0x14c47c, Func Offset: 0xc
	// Line 179, Address: 0x14c480, Func Offset: 0x10
	// Line 180, Address: 0x14c484, Func Offset: 0x14
	// Line 183, Address: 0x14c48c, Func Offset: 0x1c
	// Line 184, Address: 0x14c498, Func Offset: 0x28
	// Line 185, Address: 0x14c4a0, Func Offset: 0x30
	// Line 186, Address: 0x14c4ac, Func Offset: 0x3c
	// Line 187, Address: 0x14c4b8, Func Offset: 0x48
	// Line 188, Address: 0x14c4cc, Func Offset: 0x5c
	// Line 189, Address: 0x14c4d0, Func Offset: 0x60
	// Line 190, Address: 0x14c4d8, Func Offset: 0x68
	// Line 189, Address: 0x14c4dc, Func Offset: 0x6c
	// Line 190, Address: 0x14c4e0, Func Offset: 0x70
	// Line 191, Address: 0x14c4e8, Func Offset: 0x78
	// Func End, Address: 0x14c4f0, Func Offset: 0x80
}

// 
// Start address: 0x14c4f0
void sgPacketVif1DirectOpen(unsigned int code0, unsigned int code1, unsigned int code2)
{
	// Line 207, Address: 0x14c4f0, Func Offset: 0
	// Line 208, Address: 0x14c4fc, Func Offset: 0xc
	// Line 207, Address: 0x14c500, Func Offset: 0x10
	// Line 208, Address: 0x14c504, Func Offset: 0x14
	// Line 211, Address: 0x14c50c, Func Offset: 0x1c
	// Line 212, Address: 0x14c518, Func Offset: 0x28
	// Line 213, Address: 0x14c520, Func Offset: 0x30
	// Line 214, Address: 0x14c52c, Func Offset: 0x3c
	// Line 215, Address: 0x14c538, Func Offset: 0x48
	// Line 216, Address: 0x14c54c, Func Offset: 0x5c
	// Line 217, Address: 0x14c550, Func Offset: 0x60
	// Line 218, Address: 0x14c558, Func Offset: 0x68
	// Line 217, Address: 0x14c55c, Func Offset: 0x6c
	// Line 218, Address: 0x14c560, Func Offset: 0x70
	// Line 219, Address: 0x14c568, Func Offset: 0x78
	// Func End, Address: 0x14c570, Func Offset: 0x80
}

// 
// Start address: 0x14c570
void sgPacketVif1DirectClose()
{
	unsigned int no;
	// Line 229, Address: 0x14c570, Func Offset: 0
	// Line 230, Address: 0x14c580, Func Offset: 0x10
	// Line 232, Address: 0x14c5a0, Func Offset: 0x30
	// Line 233, Address: 0x14c5b0, Func Offset: 0x40
	// Line 234, Address: 0x14c5b8, Func Offset: 0x48
	// Line 236, Address: 0x14c5c0, Func Offset: 0x50
	// Line 237, Address: 0x14c5cc, Func Offset: 0x5c
	// Func End, Address: 0x14c5dc, Func Offset: 0x6c
}

// 
// Start address: 0x14c5e0
void sgPacketGifTagOpen(<unknown fundamental type (0xa510)> giftag)
{
	// Line 250, Address: 0x14c5e0, Func Offset: 0
	// Line 251, Address: 0x14c5f0, Func Offset: 0x10
	// Line 252, Address: 0x14c5fc, Func Offset: 0x1c
	// Line 253, Address: 0x14c60c, Func Offset: 0x2c
	// Func End, Address: 0x14c614, Func Offset: 0x34
}

// 
// Start address: 0x14c620
void sgPacketGifTagOpenPacked()
{
	unsigned long packed_giftag[2];
	// Line 281, Address: 0x14c620, Func Offset: 0
	// Line 282, Address: 0x14c628, Func Offset: 0x8
	// Line 281, Address: 0x14c630, Func Offset: 0x10
	// Line 282, Address: 0x14c640, Func Offset: 0x20
	// Line 284, Address: 0x14c644, Func Offset: 0x24
	// Line 283, Address: 0x14c648, Func Offset: 0x28
	// Line 284, Address: 0x14c64c, Func Offset: 0x2c
	// Line 285, Address: 0x14c658, Func Offset: 0x38
	// Func End, Address: 0x14c660, Func Offset: 0x40
}

// 
// Start address: 0x14c660
void sgPacketGifTagOpenPackedNoEOP()
{
	unsigned long packed_giftag_noeop[2];
	// Line 301, Address: 0x14c660, Func Offset: 0
	// Line 302, Address: 0x14c668, Func Offset: 0x8
	// Line 301, Address: 0x14c670, Func Offset: 0x10
	// Line 302, Address: 0x14c680, Func Offset: 0x20
	// Line 304, Address: 0x14c684, Func Offset: 0x24
	// Line 303, Address: 0x14c688, Func Offset: 0x28
	// Line 304, Address: 0x14c68c, Func Offset: 0x2c
	// Line 305, Address: 0x14c698, Func Offset: 0x38
	// Func End, Address: 0x14c6a0, Func Offset: 0x40
}

// 
// Start address: 0x14c6a0
void sgPacketGifTagSetRegs(unsigned long regs, int nb_regs)
{
	// Line 331, Address: 0x14c6a0, Func Offset: 0
	// Line 333, Address: 0x14c6a4, Func Offset: 0x4
	// Line 331, Address: 0x14c6a8, Func Offset: 0x8
	// Line 333, Address: 0x14c6ac, Func Offset: 0xc
	// Line 332, Address: 0x14c6b4, Func Offset: 0x14
	// Line 333, Address: 0x14c6b8, Func Offset: 0x18
	// Line 334, Address: 0x14c6c0, Func Offset: 0x20
	// Func End, Address: 0x14c6c8, Func Offset: 0x28
}

// 
// Start address: 0x14c6d0
void sgPacketGifTagSetPrim(unsigned long prim)
{
	// Line 358, Address: 0x14c6d0, Func Offset: 0
	// Line 359, Address: 0x14c6f0, Func Offset: 0x20
	// Func End, Address: 0x14c6f8, Func Offset: 0x28
}

// 
// Start address: 0x14c700
void sgPacketGifTagClose()
{
	int no;
	int nb_regs;
	// Line 368, Address: 0x14c700, Func Offset: 0
	// Line 369, Address: 0x14c710, Func Offset: 0x10
	// Line 372, Address: 0x14c734, Func Offset: 0x34
	// Line 370, Address: 0x14c740, Func Offset: 0x40
	// Line 372, Address: 0x14c748, Func Offset: 0x48
	// Line 373, Address: 0x14c750, Func Offset: 0x50
	// Line 374, Address: 0x14c754, Func Offset: 0x54
	// Line 375, Address: 0x14c75c, Func Offset: 0x5c
	// Line 377, Address: 0x14c760, Func Offset: 0x60
	// Line 378, Address: 0x14c768, Func Offset: 0x68
	// Line 380, Address: 0x14c778, Func Offset: 0x78
	// Line 381, Address: 0x14c788, Func Offset: 0x88
	// Line 382, Address: 0x14c7a4, Func Offset: 0xa4
	// Line 383, Address: 0x14c7ac, Func Offset: 0xac
	// Line 384, Address: 0x14c7b0, Func Offset: 0xb0
	// Line 385, Address: 0x14c7c4, Func Offset: 0xc4
	// Func End, Address: 0x14c7d4, Func Offset: 0xd4
}

// 
// Start address: 0x14c7e0
void sgPacketDmaTagOpen(unsigned long dma_tag)
{
	// Line 397, Address: 0x14c7e0, Func Offset: 0
	// Line 398, Address: 0x14c7f4, Func Offset: 0x14
	// Line 399, Address: 0x14c800, Func Offset: 0x20
	// Line 400, Address: 0x14c80c, Func Offset: 0x2c
	// Line 401, Address: 0x14c810, Func Offset: 0x30
	// Line 402, Address: 0x14c828, Func Offset: 0x48
	// Line 405, Address: 0x14c82c, Func Offset: 0x4c
	// Line 403, Address: 0x14c830, Func Offset: 0x50
	// Line 405, Address: 0x14c834, Func Offset: 0x54
	// Line 406, Address: 0x14c844, Func Offset: 0x64
	// Func End, Address: 0x14c854, Func Offset: 0x74
}

// 
// Start address: 0x14c860
void sgPacketDmaTagSetVifCode(unsigned int code0, unsigned int code1)
{
	unsigned int* ip;
	// Line 418, Address: 0x14c860, Func Offset: 0
	// Line 419, Address: 0x14c868, Func Offset: 0x8
	// Line 421, Address: 0x14c86c, Func Offset: 0xc
	// Func End, Address: 0x14c874, Func Offset: 0x14
}

// 
// Start address: 0x14c880
void sgPacketDmaTagClose()
{
	// Line 435, Address: 0x14c880, Func Offset: 0
	// Line 440, Address: 0x14c888, Func Offset: 0x8
	// Line 441, Address: 0x14c8a8, Func Offset: 0x28
	// Line 440, Address: 0x14c8ac, Func Offset: 0x2c
	// Line 442, Address: 0x14c8c0, Func Offset: 0x40
	// Func End, Address: 0x14c8c8, Func Offset: 0x48
}

