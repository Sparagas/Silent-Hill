typedef struct _SH2_SYS;


typedef unsigned int type[8];

struct _SH2_SYS
{
	unsigned int step[8];
	int main_status;
	unsigned int boot_first;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

_SH2_SYS Sh2sys;
int logoDispTimer;

void logoDrawWarning();
void logoDrawKonamiLogo();
void logoDrawKcetLogo();

// 
// Start address: 0x20b2a0
void logoDrawWarning()
{
	// Line 56, Address: 0x20b2a0, Func Offset: 0
	// Line 57, Address: 0x20b2a8, Func Offset: 0x8
	// Line 60, Address: 0x20b2e4, Func Offset: 0x44
	// Line 62, Address: 0x20b2f4, Func Offset: 0x54
	// Line 63, Address: 0x20b338, Func Offset: 0x98
	// Line 65, Address: 0x20b340, Func Offset: 0xa0
	// Line 66, Address: 0x20b348, Func Offset: 0xa8
	// Line 67, Address: 0x20b35c, Func Offset: 0xbc
	// Line 68, Address: 0x20b398, Func Offset: 0xf8
	// Line 71, Address: 0x20b3a0, Func Offset: 0x100
	// Line 73, Address: 0x20b3b0, Func Offset: 0x110
	// Line 74, Address: 0x20b3bc, Func Offset: 0x11c
	// Line 76, Address: 0x20b3f8, Func Offset: 0x158
	// Line 79, Address: 0x20b400, Func Offset: 0x160
	// Line 80, Address: 0x20b414, Func Offset: 0x174
	// Line 82, Address: 0x20b424, Func Offset: 0x184
	// Line 83, Address: 0x20b438, Func Offset: 0x198
	// Line 85, Address: 0x20b474, Func Offset: 0x1d4
	// Line 88, Address: 0x20b47c, Func Offset: 0x1dc
	// Line 89, Address: 0x20b48c, Func Offset: 0x1ec
	// Line 92, Address: 0x20b4d0, Func Offset: 0x230
	// Func End, Address: 0x20b4e0, Func Offset: 0x240
}

// 
// Start address: 0x20b4e0
void logoDrawKonamiLogo()
{
	// Line 109, Address: 0x20b4e0, Func Offset: 0
	// Line 110, Address: 0x20b4e8, Func Offset: 0x8
	// Line 113, Address: 0x20b524, Func Offset: 0x44
	// Line 115, Address: 0x20b534, Func Offset: 0x54
	// Line 116, Address: 0x20b578, Func Offset: 0x98
	// Line 118, Address: 0x20b580, Func Offset: 0xa0
	// Line 119, Address: 0x20b588, Func Offset: 0xa8
	// Line 120, Address: 0x20b59c, Func Offset: 0xbc
	// Line 121, Address: 0x20b5d8, Func Offset: 0xf8
	// Line 124, Address: 0x20b5e0, Func Offset: 0x100
	// Line 126, Address: 0x20b5f0, Func Offset: 0x110
	// Line 127, Address: 0x20b5fc, Func Offset: 0x11c
	// Line 129, Address: 0x20b638, Func Offset: 0x158
	// Line 132, Address: 0x20b640, Func Offset: 0x160
	// Line 133, Address: 0x20b654, Func Offset: 0x174
	// Line 135, Address: 0x20b664, Func Offset: 0x184
	// Line 136, Address: 0x20b678, Func Offset: 0x198
	// Line 138, Address: 0x20b6b4, Func Offset: 0x1d4
	// Line 141, Address: 0x20b6bc, Func Offset: 0x1dc
	// Line 142, Address: 0x20b6cc, Func Offset: 0x1ec
	// Line 145, Address: 0x20b710, Func Offset: 0x230
	// Func End, Address: 0x20b720, Func Offset: 0x240
}

// 
// Start address: 0x20b720
void logoDrawKcetLogo()
{
	// Line 162, Address: 0x20b720, Func Offset: 0
	// Line 163, Address: 0x20b728, Func Offset: 0x8
	// Line 166, Address: 0x20b764, Func Offset: 0x44
	// Line 168, Address: 0x20b774, Func Offset: 0x54
	// Line 169, Address: 0x20b7b8, Func Offset: 0x98
	// Line 171, Address: 0x20b7c0, Func Offset: 0xa0
	// Line 172, Address: 0x20b7c8, Func Offset: 0xa8
	// Line 173, Address: 0x20b7dc, Func Offset: 0xbc
	// Line 174, Address: 0x20b818, Func Offset: 0xf8
	// Line 177, Address: 0x20b820, Func Offset: 0x100
	// Line 179, Address: 0x20b830, Func Offset: 0x110
	// Line 180, Address: 0x20b83c, Func Offset: 0x11c
	// Line 182, Address: 0x20b878, Func Offset: 0x158
	// Line 185, Address: 0x20b880, Func Offset: 0x160
	// Line 186, Address: 0x20b894, Func Offset: 0x174
	// Line 188, Address: 0x20b8a4, Func Offset: 0x184
	// Line 189, Address: 0x20b8b8, Func Offset: 0x198
	// Line 191, Address: 0x20b8f4, Func Offset: 0x1d4
	// Line 194, Address: 0x20b8fc, Func Offset: 0x1dc
	// Line 196, Address: 0x20b90c, Func Offset: 0x1ec
	// Line 197, Address: 0x20b914, Func Offset: 0x1f4
	// Line 201, Address: 0x20b958, Func Offset: 0x238
	// Func End, Address: 0x20b968, Func Offset: 0x248
}

