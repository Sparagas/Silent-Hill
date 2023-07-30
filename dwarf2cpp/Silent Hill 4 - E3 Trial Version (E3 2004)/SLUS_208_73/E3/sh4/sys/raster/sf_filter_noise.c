typedef struct _anon0;
typedef struct sgTexData;
typedef struct _anon1;

typedef int(*type_0)();

typedef _anon0 type_1[16];
typedef unsigned long type_2[2];

struct _anon0
{
	int pos;
	int h;
	int speed;
	int dig;
	int u;
	int count;
};

struct sgTexData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct _anon1
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

_anon0 vwork[16];
unsigned long* sg_packet_cur;
sgTexData* film_dat;
int(*count_virt)();
sgTexData* noise_dat;

void set_virt();
int count_virt();
void draw_virt();
void sfFilterNoiseInit();
void sfFilterNoiseSet(int mode, int depth);

// 
// Start address: 0x1a8840
void set_virt()
{
	int i;
	int t;
	// Line 54, Address: 0x1a8840, Func Offset: 0
	// Line 57, Address: 0x1a8844, Func Offset: 0x4
	// Line 54, Address: 0x1a8848, Func Offset: 0x8
	// Line 57, Address: 0x1a884c, Func Offset: 0xc
	// Line 54, Address: 0x1a8850, Func Offset: 0x10
	// Line 57, Address: 0x1a8854, Func Offset: 0x14
	// Line 58, Address: 0x1a8858, Func Offset: 0x18
	// Line 60, Address: 0x1a8864, Func Offset: 0x24
	// Line 61, Address: 0x1a88ac, Func Offset: 0x6c
	// Line 62, Address: 0x1a88ec, Func Offset: 0xac
	// Line 63, Address: 0x1a892c, Func Offset: 0xec
	// Line 64, Address: 0x1a8970, Func Offset: 0x130
	// Line 65, Address: 0x1a89b0, Func Offset: 0x170
	// Line 66, Address: 0x1a89f4, Func Offset: 0x1b4
	// Line 68, Address: 0x1a89fc, Func Offset: 0x1bc
	// Line 71, Address: 0x1a8a10, Func Offset: 0x1d0
	// Func End, Address: 0x1a8a20, Func Offset: 0x1e0
}

// 
// Start address: 0x1a8a20
int count_virt()
{
	int i;
	int c;
	// Line 79, Address: 0x1a8a20, Func Offset: 0
	// Line 78, Address: 0x1a8a24, Func Offset: 0x4
	// Line 79, Address: 0x1a8a28, Func Offset: 0x8
	// Line 80, Address: 0x1a8a30, Func Offset: 0x10
	// Line 81, Address: 0x1a8a3c, Func Offset: 0x1c
	// Line 82, Address: 0x1a8a40, Func Offset: 0x20
	// Line 85, Address: 0x1a8a50, Func Offset: 0x30
	// Func End, Address: 0x1a8a58, Func Offset: 0x38
}

// 
// Start address: 0x1a8a60
void draw_virt()
{
	int i;
	int t;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 88, Address: 0x1a8a60, Func Offset: 0
	// Line 92, Address: 0x1a8a74, Func Offset: 0x14
	// Line 88, Address: 0x1a8a78, Func Offset: 0x18
	// Line 92, Address: 0x1a8a7c, Func Offset: 0x1c
	// Line 88, Address: 0x1a8a80, Func Offset: 0x20
	// Line 92, Address: 0x1a8a84, Func Offset: 0x24
	// Line 93, Address: 0x1a8a88, Func Offset: 0x28
	// Line 94, Address: 0x1a8a94, Func Offset: 0x34
	// Line 95, Address: 0x1a8ab4, Func Offset: 0x54
	// Line 96, Address: 0x1a8ab8, Func Offset: 0x58
	// Line 94, Address: 0x1a8abc, Func Offset: 0x5c
	// Line 95, Address: 0x1a8acc, Func Offset: 0x6c
	// Line 96, Address: 0x1a8ad4, Func Offset: 0x74
	// Line 101, Address: 0x1a8ad8, Func Offset: 0x78
	// Line 106, Address: 0x1a8b08, Func Offset: 0xa8
	// Line 101, Address: 0x1a8b0c, Func Offset: 0xac
	// Line 106, Address: 0x1a8b10, Func Offset: 0xb0
	// Line 101, Address: 0x1a8b14, Func Offset: 0xb4
	// Line 106, Address: 0x1a8b18, Func Offset: 0xb8
	// Line 108, Address: 0x1a8c8c, Func Offset: 0x22c
	// Line 110, Address: 0x1a8c98, Func Offset: 0x238
	// Line 113, Address: 0x1a8ca8, Func Offset: 0x248
	// Func End, Address: 0x1a8cc8, Func Offset: 0x268
}

// 
// Start address: 0x1a8cd0
void sfFilterNoiseInit()
{
	// Line 116, Address: 0x1a8cd0, Func Offset: 0
	// Line 120, Address: 0x1a8cd4, Func Offset: 0x4
	// Line 116, Address: 0x1a8cd8, Func Offset: 0x8
	// Line 120, Address: 0x1a8cdc, Func Offset: 0xc
	// Line 124, Address: 0x1a8cf4, Func Offset: 0x24
	// Line 120, Address: 0x1a8cf8, Func Offset: 0x28
	// Line 124, Address: 0x1a8cfc, Func Offset: 0x2c
	// Line 127, Address: 0x1a8d0c, Func Offset: 0x3c
	// Func End, Address: 0x1a8d18, Func Offset: 0x48
}

// 
// Start address: 0x1a8d20
void sfFilterNoiseSet(int mode, int depth)
{
	int tex_id;
	_anon1* tex;
	<unknown fundamental type (0xa510)>* prim;
	int set_f;
	int t;
	int t;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	int x;
	int y;
	int u;
	int v;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	int x;
	int y;
	int w;
	int h;
	int u;
	int v;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long giftag[2];
	// Line 130, Address: 0x1a8d20, Func Offset: 0
	// Line 142, Address: 0x1a8d50, Func Offset: 0x30
	// Line 151, Address: 0x1a8d5c, Func Offset: 0x3c
	// Line 153, Address: 0x1a8d64, Func Offset: 0x44
	// Line 154, Address: 0x1a8d94, Func Offset: 0x74
	// Line 155, Address: 0x1a8d9c, Func Offset: 0x7c
	// Line 157, Address: 0x1a8da8, Func Offset: 0x88
	// Line 158, Address: 0x1a8dac, Func Offset: 0x8c
	// Line 162, Address: 0x1a8db0, Func Offset: 0x90
	// Line 164, Address: 0x1a8db8, Func Offset: 0x98
	// Line 165, Address: 0x1a8de8, Func Offset: 0xc8
	// Line 166, Address: 0x1a8df0, Func Offset: 0xd0
	// Line 170, Address: 0x1a8df8, Func Offset: 0xd8
	// Line 171, Address: 0x1a8e00, Func Offset: 0xe0
	// Line 175, Address: 0x1a8e18, Func Offset: 0xf8
	// Line 176, Address: 0x1a8e24, Func Offset: 0x104
	// Line 178, Address: 0x1a8e28, Func Offset: 0x108
	// Line 179, Address: 0x1a8e30, Func Offset: 0x110
	// Line 180, Address: 0x1a8e38, Func Offset: 0x118
	// Line 183, Address: 0x1a8e44, Func Offset: 0x124
	// Line 185, Address: 0x1a8e50, Func Offset: 0x130
	// Line 186, Address: 0x1a8e58, Func Offset: 0x138
	// Line 189, Address: 0x1a8e60, Func Offset: 0x140
	// Line 191, Address: 0x1a8e7c, Func Offset: 0x15c
	// Line 192, Address: 0x1a8e84, Func Offset: 0x164
	// Line 193, Address: 0x1a8e8c, Func Offset: 0x16c
	// Line 198, Address: 0x1a8e98, Func Offset: 0x178
	// Line 199, Address: 0x1a8ed4, Func Offset: 0x1b4
	// Line 198, Address: 0x1a8ed8, Func Offset: 0x1b8
	// Line 199, Address: 0x1a8edc, Func Offset: 0x1bc
	// Line 198, Address: 0x1a8ee0, Func Offset: 0x1c0
	// Line 199, Address: 0x1a8eec, Func Offset: 0x1cc
	// Line 198, Address: 0x1a8ef0, Func Offset: 0x1d0
	// Line 199, Address: 0x1a8ef4, Func Offset: 0x1d4
	// Line 198, Address: 0x1a8ef8, Func Offset: 0x1d8
	// Line 199, Address: 0x1a8efc, Func Offset: 0x1dc
	// Line 200, Address: 0x1a8f14, Func Offset: 0x1f4
	// Line 199, Address: 0x1a8f18, Func Offset: 0x1f8
	// Line 200, Address: 0x1a8f1c, Func Offset: 0x1fc
	// Line 199, Address: 0x1a8f20, Func Offset: 0x200
	// Line 202, Address: 0x1a8f24, Func Offset: 0x204
	// Line 200, Address: 0x1a8f28, Func Offset: 0x208
	// Line 202, Address: 0x1a8f2c, Func Offset: 0x20c
	// Line 200, Address: 0x1a8f30, Func Offset: 0x210
	// Line 202, Address: 0x1a8f40, Func Offset: 0x220
	// Line 200, Address: 0x1a8f44, Func Offset: 0x224
	// Line 202, Address: 0x1a8f48, Func Offset: 0x228
	// Line 206, Address: 0x1a8f5c, Func Offset: 0x23c
	// Line 202, Address: 0x1a8f60, Func Offset: 0x240
	// Line 206, Address: 0x1a8f64, Func Offset: 0x244
	// Line 207, Address: 0x1a8f8c, Func Offset: 0x26c
	// Line 206, Address: 0x1a8f90, Func Offset: 0x270
	// Line 211, Address: 0x1a8f94, Func Offset: 0x274
	// Line 206, Address: 0x1a8f98, Func Offset: 0x278
	// Line 207, Address: 0x1a8f9c, Func Offset: 0x27c
	// Line 206, Address: 0x1a8fa0, Func Offset: 0x280
	// Line 207, Address: 0x1a8fa4, Func Offset: 0x284
	// Line 206, Address: 0x1a8fa8, Func Offset: 0x288
	// Line 207, Address: 0x1a8fac, Func Offset: 0x28c
	// Line 208, Address: 0x1a8fb4, Func Offset: 0x294
	// Line 209, Address: 0x1a8fbc, Func Offset: 0x29c
	// Line 207, Address: 0x1a8fc0, Func Offset: 0x2a0
	// Line 208, Address: 0x1a8fd0, Func Offset: 0x2b0
	// Line 207, Address: 0x1a8fd4, Func Offset: 0x2b4
	// Line 208, Address: 0x1a8fd8, Func Offset: 0x2b8
	// Line 209, Address: 0x1a8fec, Func Offset: 0x2cc
	// Line 208, Address: 0x1a8ff0, Func Offset: 0x2d0
	// Line 209, Address: 0x1a8ff4, Func Offset: 0x2d4
	// Line 211, Address: 0x1a9008, Func Offset: 0x2e8
	// Line 225, Address: 0x1a9010, Func Offset: 0x2f0
	// Line 227, Address: 0x1a901c, Func Offset: 0x2fc
	// Line 225, Address: 0x1a9020, Func Offset: 0x300
	// Line 227, Address: 0x1a9030, Func Offset: 0x310
	// Line 225, Address: 0x1a9034, Func Offset: 0x314
	// Line 227, Address: 0x1a9038, Func Offset: 0x318
	// Line 229, Address: 0x1a907c, Func Offset: 0x35c
	// Line 227, Address: 0x1a9080, Func Offset: 0x360
	// Line 229, Address: 0x1a9084, Func Offset: 0x364
	// Line 230, Address: 0x1a9088, Func Offset: 0x368
	// Line 232, Address: 0x1a9098, Func Offset: 0x378
	// Line 233, Address: 0x1a90cc, Func Offset: 0x3ac
	// Line 234, Address: 0x1a90fc, Func Offset: 0x3dc
	// Line 233, Address: 0x1a9100, Func Offset: 0x3e0
	// Line 234, Address: 0x1a9104, Func Offset: 0x3e4
	// Line 235, Address: 0x1a9254, Func Offset: 0x534
	// Line 234, Address: 0x1a9258, Func Offset: 0x538
	// Line 235, Address: 0x1a9278, Func Offset: 0x558
	// Line 234, Address: 0x1a927c, Func Offset: 0x55c
	// Line 235, Address: 0x1a928c, Func Offset: 0x56c
	// Line 236, Address: 0x1a9294, Func Offset: 0x574
	// Line 235, Address: 0x1a9298, Func Offset: 0x578
	// Line 236, Address: 0x1a929c, Func Offset: 0x57c
	// Line 238, Address: 0x1a92b4, Func Offset: 0x594
	// Line 253, Address: 0x1a92c0, Func Offset: 0x5a0
	// Line 254, Address: 0x1a92d0, Func Offset: 0x5b0
	// Line 253, Address: 0x1a92d4, Func Offset: 0x5b4
	// Line 254, Address: 0x1a92e4, Func Offset: 0x5c4
	// Line 253, Address: 0x1a92e8, Func Offset: 0x5c8
	// Line 254, Address: 0x1a92f8, Func Offset: 0x5d8
	// Line 253, Address: 0x1a92fc, Func Offset: 0x5dc
	// Line 254, Address: 0x1a9300, Func Offset: 0x5e0
	// Line 255, Address: 0x1a9314, Func Offset: 0x5f4
	// Line 256, Address: 0x1a931c, Func Offset: 0x5fc
	// Line 257, Address: 0x1a9350, Func Offset: 0x630
	// Line 258, Address: 0x1a9384, Func Offset: 0x664
	// Line 259, Address: 0x1a93b4, Func Offset: 0x694
	// Line 260, Address: 0x1a93e4, Func Offset: 0x6c4
	// Line 261, Address: 0x1a9418, Func Offset: 0x6f8
	// Line 262, Address: 0x1a9448, Func Offset: 0x728
	// Line 261, Address: 0x1a944c, Func Offset: 0x72c
	// Line 262, Address: 0x1a9450, Func Offset: 0x730
	// Line 264, Address: 0x1a95d8, Func Offset: 0x8b8
	// Line 265, Address: 0x1a95e8, Func Offset: 0x8c8
	// Line 271, Address: 0x1a95f0, Func Offset: 0x8d0
	// Line 273, Address: 0x1a961c, Func Offset: 0x8fc
	// Line 274, Address: 0x1a9624, Func Offset: 0x904
	// Line 276, Address: 0x1a962c, Func Offset: 0x90c
	// Line 277, Address: 0x1a9638, Func Offset: 0x918
	// Line 282, Address: 0x1a9640, Func Offset: 0x920
	// Func End, Address: 0x1a9670, Func Offset: 0x950
}

