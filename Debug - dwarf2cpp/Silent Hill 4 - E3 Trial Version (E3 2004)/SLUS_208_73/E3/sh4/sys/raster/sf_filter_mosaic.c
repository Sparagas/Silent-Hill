

typedef unsigned long type[2];

unsigned long* sg_packet_cur;

void sfFilterMosaicPlus(int size, unsigned long rgbaq, int mode);

// 
// Start address: 0x140360
void sfFilterMosaicPlus(int size, unsigned long rgbaq, int mode)
{
	<unknown fundamental type (0xa510)>* prim;
	unsigned long tex1;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long giftag[2];
	// Line 38, Address: 0x140360, Func Offset: 0
	// Line 51, Address: 0x140388, Func Offset: 0x28
	// Line 52, Address: 0x140390, Func Offset: 0x30
	// Line 53, Address: 0x140398, Func Offset: 0x38
	// Line 54, Address: 0x1403a4, Func Offset: 0x44
	// Line 57, Address: 0x1403a8, Func Offset: 0x48
	// Line 63, Address: 0x1403b4, Func Offset: 0x54
	// Line 57, Address: 0x1403b8, Func Offset: 0x58
	// Line 63, Address: 0x1403c4, Func Offset: 0x64
	// Line 68, Address: 0x1403c8, Func Offset: 0x68
	// Line 69, Address: 0x1403d0, Func Offset: 0x70
	// Line 70, Address: 0x1403d8, Func Offset: 0x78
	// Line 75, Address: 0x1403e4, Func Offset: 0x84
	// Line 83, Address: 0x140420, Func Offset: 0xc0
	// Line 75, Address: 0x140424, Func Offset: 0xc4
	// Line 83, Address: 0x14043c, Func Offset: 0xdc
	// Line 84, Address: 0x140474, Func Offset: 0x114
	// Line 83, Address: 0x140478, Func Offset: 0x118
	// Line 85, Address: 0x140494, Func Offset: 0x134
	// Line 83, Address: 0x140498, Func Offset: 0x138
	// Line 84, Address: 0x1404a4, Func Offset: 0x144
	// Line 83, Address: 0x1404a8, Func Offset: 0x148
	// Line 86, Address: 0x1404ac, Func Offset: 0x14c
	// Line 84, Address: 0x1404b4, Func Offset: 0x154
	// Line 86, Address: 0x1404b8, Func Offset: 0x158
	// Line 87, Address: 0x1404bc, Func Offset: 0x15c
	// Line 86, Address: 0x1404c0, Func Offset: 0x160
	// Line 88, Address: 0x1404c4, Func Offset: 0x164
	// Line 86, Address: 0x1404c8, Func Offset: 0x168
	// Line 88, Address: 0x1404cc, Func Offset: 0x16c
	// Line 89, Address: 0x1404d0, Func Offset: 0x170
	// Line 90, Address: 0x1404dc, Func Offset: 0x17c
	// Line 87, Address: 0x1404e0, Func Offset: 0x180
	// Line 84, Address: 0x1404e4, Func Offset: 0x184
	// Line 87, Address: 0x1404e8, Func Offset: 0x188
	// Line 84, Address: 0x1404ec, Func Offset: 0x18c
	// Line 85, Address: 0x1404f8, Func Offset: 0x198
	// Line 84, Address: 0x1404fc, Func Offset: 0x19c
	// Line 93, Address: 0x140500, Func Offset: 0x1a0
	// Line 85, Address: 0x140504, Func Offset: 0x1a4
	// Line 93, Address: 0x140508, Func Offset: 0x1a8
	// Line 94, Address: 0x140510, Func Offset: 0x1b0
	// Line 85, Address: 0x140514, Func Offset: 0x1b4
	// Line 86, Address: 0x140524, Func Offset: 0x1c4
	// Line 85, Address: 0x140528, Func Offset: 0x1c8
	// Line 86, Address: 0x14052c, Func Offset: 0x1cc
	// Line 87, Address: 0x140540, Func Offset: 0x1e0
	// Line 86, Address: 0x140544, Func Offset: 0x1e4
	// Line 87, Address: 0x140548, Func Offset: 0x1e8
	// Line 88, Address: 0x14055c, Func Offset: 0x1fc
	// Line 87, Address: 0x140560, Func Offset: 0x200
	// Line 88, Address: 0x140564, Func Offset: 0x204
	// Line 89, Address: 0x140578, Func Offset: 0x218
	// Line 88, Address: 0x14057c, Func Offset: 0x21c
	// Line 89, Address: 0x140580, Func Offset: 0x220
	// Line 90, Address: 0x140594, Func Offset: 0x234
	// Line 89, Address: 0x140598, Func Offset: 0x238
	// Line 90, Address: 0x14059c, Func Offset: 0x23c
	// Line 93, Address: 0x1405b0, Func Offset: 0x250
	// Line 90, Address: 0x1405b4, Func Offset: 0x254
	// Line 93, Address: 0x1405b8, Func Offset: 0x258
	// Line 94, Address: 0x1405cc, Func Offset: 0x26c
	// Line 93, Address: 0x1405d0, Func Offset: 0x270
	// Line 94, Address: 0x1405d4, Func Offset: 0x274
	// Line 97, Address: 0x1405e8, Func Offset: 0x288
	// Line 94, Address: 0x1405ec, Func Offset: 0x28c
	// Line 97, Address: 0x1405f0, Func Offset: 0x290
	// Line 99, Address: 0x14064c, Func Offset: 0x2ec
	// Line 97, Address: 0x140650, Func Offset: 0x2f0
	// Line 99, Address: 0x140670, Func Offset: 0x310
	// Line 102, Address: 0x140690, Func Offset: 0x330
	// Line 99, Address: 0x140694, Func Offset: 0x334
	// Line 102, Address: 0x1406a8, Func Offset: 0x348
	// Line 107, Address: 0x140720, Func Offset: 0x3c0
	// Line 102, Address: 0x140728, Func Offset: 0x3c8
	// Line 107, Address: 0x140754, Func Offset: 0x3f4
	// Line 114, Address: 0x14078c, Func Offset: 0x42c
	// Line 107, Address: 0x140790, Func Offset: 0x430
	// Line 114, Address: 0x1407a8, Func Offset: 0x448
	// Line 115, Address: 0x1407e0, Func Offset: 0x480
	// Line 114, Address: 0x1407e4, Func Offset: 0x484
	// Line 115, Address: 0x14080c, Func Offset: 0x4ac
	// Line 114, Address: 0x140810, Func Offset: 0x4b0
	// Line 118, Address: 0x140814, Func Offset: 0x4b4
	// Line 115, Address: 0x140818, Func Offset: 0x4b8
	// Line 118, Address: 0x14081c, Func Offset: 0x4bc
	// Line 115, Address: 0x140820, Func Offset: 0x4c0
	// Line 118, Address: 0x140830, Func Offset: 0x4d0
	// Line 115, Address: 0x140834, Func Offset: 0x4d4
	// Line 118, Address: 0x140838, Func Offset: 0x4d8
	// Line 121, Address: 0x14084c, Func Offset: 0x4ec
	// Line 118, Address: 0x140850, Func Offset: 0x4f0
	// Line 121, Address: 0x140854, Func Offset: 0x4f4
	// Line 123, Address: 0x14087c, Func Offset: 0x51c
	// Line 121, Address: 0x140880, Func Offset: 0x520
	// Line 123, Address: 0x140888, Func Offset: 0x528
	// Line 121, Address: 0x14088c, Func Offset: 0x52c
	// Line 123, Address: 0x140894, Func Offset: 0x534
	// Line 126, Address: 0x1408a8, Func Offset: 0x548
	// Line 123, Address: 0x1408ac, Func Offset: 0x54c
	// Line 126, Address: 0x1408b0, Func Offset: 0x550
	// Line 129, Address: 0x14090c, Func Offset: 0x5ac
	// Line 126, Address: 0x140910, Func Offset: 0x5b0
	// Line 129, Address: 0x140930, Func Offset: 0x5d0
	// Line 132, Address: 0x140964, Func Offset: 0x604
	// Line 129, Address: 0x14096c, Func Offset: 0x60c
	// Line 132, Address: 0x14098c, Func Offset: 0x62c
	// Line 135, Address: 0x1409fc, Func Offset: 0x69c
	// Line 132, Address: 0x140a00, Func Offset: 0x6a0
	// Line 135, Address: 0x140a04, Func Offset: 0x6a4
	// Line 132, Address: 0x140a0c, Func Offset: 0x6ac
	// Line 135, Address: 0x140a10, Func Offset: 0x6b0
	// Line 132, Address: 0x140a14, Func Offset: 0x6b4
	// Line 135, Address: 0x140a18, Func Offset: 0x6b8
	// Line 132, Address: 0x140a1c, Func Offset: 0x6bc
	// Line 135, Address: 0x140a28, Func Offset: 0x6c8
	// Line 132, Address: 0x140a2c, Func Offset: 0x6cc
	// Line 135, Address: 0x140a30, Func Offset: 0x6d0
	// Line 137, Address: 0x140a44, Func Offset: 0x6e4
	// Line 138, Address: 0x140a4c, Func Offset: 0x6ec
	// Line 140, Address: 0x140a54, Func Offset: 0x6f4
	// Line 141, Address: 0x140a60, Func Offset: 0x700
	// Line 144, Address: 0x140a68, Func Offset: 0x708
	// Func End, Address: 0x140a8c, Func Offset: 0x72c
}

