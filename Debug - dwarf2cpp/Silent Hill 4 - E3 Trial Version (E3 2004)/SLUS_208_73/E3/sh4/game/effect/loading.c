typedef struct _anon0;
typedef struct _anon1;
typedef struct sfObj;
typedef struct sgTexArc;
typedef struct sgTexData;
typedef struct sgClutData;
typedef union _anon2;

typedef void(*type_2)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef void(*type_4)(sfObj*);

typedef int type_0[18];
typedef _anon2 type_1[256];
typedef short type_5[2];
typedef unsigned short type_6[2];
typedef char type_7[4];
typedef unsigned char type_8[4];
typedef float type_9[1];
typedef int type_10[1];

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

struct _anon1
{
	sfObj* obj;
	int kind;
	int x;
	int y;
	int rx;
	int ry;
	int timer;
};

struct sfObj
{
	_anon2 fwork[256];
	_anon2* work;
	void(*func)(sfObj*);
	_anon2* work_pt0;
	_anon2* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon2* sys_work;
	_anon2* scene_work;
	_anon2* event_work;
	_anon2* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct sgTexArc
{
	<unknown fundamental type (0xa510)> dummy;
};

struct sgTexData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct sgClutData
{
	<unknown fundamental type (0xa510)> dummy;
};

union _anon2
{
	int si;
	unsigned int ui;
	void* pt;
	short ss[2];
	unsigned short us[2];
	char sc[4];
	unsigned char uc[4];
	float f;
	float fv[1];
	int iv[1];
};

int NL_UV_data[18];
_anon1 nl_work;
unsigned long* sg_packet_cur;
void(*NowLoadingMain)(sfObj*);

void NowLoadingMain(sfObj* obj);
void NowLoadingDrawFunc(sfObj* obj);
void NowLoadingDrawControl();
void NowLoadingByObj();
void NowLoadingKill();

// 
// Start address: 0x2b5320
void NowLoadingMain(sfObj* obj)
{
	float lx;
	float ly;
	float rx;
	float ry;
	int cnt;
	// Line 87, Address: 0x2b5320, Func Offset: 0
	// Line 91, Address: 0x2b5340, Func Offset: 0x20
	// Line 92, Address: 0x2b536c, Func Offset: 0x4c
	// Line 93, Address: 0x2b5370, Func Offset: 0x50
	// Line 94, Address: 0x2b537c, Func Offset: 0x5c
	// Line 95, Address: 0x2b5384, Func Offset: 0x64
	// Line 96, Address: 0x2b538c, Func Offset: 0x6c
	// Line 98, Address: 0x2b5390, Func Offset: 0x70
	// Line 99, Address: 0x2b53a8, Func Offset: 0x88
	// Line 100, Address: 0x2b53b0, Func Offset: 0x90
	// Line 102, Address: 0x2b53b8, Func Offset: 0x98
	// Line 103, Address: 0x2b53c0, Func Offset: 0xa0
	// Line 105, Address: 0x2b53c8, Func Offset: 0xa8
	// Line 116, Address: 0x2b53d4, Func Offset: 0xb4
	// Line 105, Address: 0x2b53d8, Func Offset: 0xb8
	// Line 117, Address: 0x2b53e8, Func Offset: 0xc8
	// Line 118, Address: 0x2b53f8, Func Offset: 0xd8
	// Line 119, Address: 0x2b541c, Func Offset: 0xfc
	// Line 120, Address: 0x2b5428, Func Offset: 0x108
	// Line 119, Address: 0x2b542c, Func Offset: 0x10c
	// Line 120, Address: 0x2b5430, Func Offset: 0x110
	// Line 119, Address: 0x2b5434, Func Offset: 0x114
	// Line 120, Address: 0x2b544c, Func Offset: 0x12c
	// Line 121, Address: 0x2b5464, Func Offset: 0x144
	// Line 123, Address: 0x2b5470, Func Offset: 0x150
	// Line 124, Address: 0x2b5498, Func Offset: 0x178
	// Line 128, Address: 0x2b54c0, Func Offset: 0x1a0
	// Line 129, Address: 0x2b54cc, Func Offset: 0x1ac
	// Line 135, Address: 0x2b54d4, Func Offset: 0x1b4
	// Line 136, Address: 0x2b54dc, Func Offset: 0x1bc
	// Line 137, Address: 0x2b54e4, Func Offset: 0x1c4
	// Line 138, Address: 0x2b54e8, Func Offset: 0x1c8
	// Line 139, Address: 0x2b54f8, Func Offset: 0x1d8
	// Line 140, Address: 0x2b5500, Func Offset: 0x1e0
	// Line 141, Address: 0x2b5508, Func Offset: 0x1e8
	// Line 143, Address: 0x2b5510, Func Offset: 0x1f0
	// Line 144, Address: 0x2b5520, Func Offset: 0x200
	// Line 145, Address: 0x2b5528, Func Offset: 0x208
	// Line 154, Address: 0x2b5530, Func Offset: 0x210
	// Line 155, Address: 0x2b553c, Func Offset: 0x21c
	// Line 156, Address: 0x2b5548, Func Offset: 0x228
	// Line 157, Address: 0x2b5554, Func Offset: 0x234
	// Line 158, Address: 0x2b555c, Func Offset: 0x23c
	// Line 159, Address: 0x2b5590, Func Offset: 0x270
	// Line 161, Address: 0x2b55c4, Func Offset: 0x2a4
	// Line 162, Address: 0x2b55f8, Func Offset: 0x2d8
	// Line 163, Address: 0x2b5618, Func Offset: 0x2f8
	// Line 162, Address: 0x2b5620, Func Offset: 0x300
	// Line 163, Address: 0x2b563c, Func Offset: 0x31c
	// Line 164, Address: 0x2b5650, Func Offset: 0x330
	// Line 165, Address: 0x2b5670, Func Offset: 0x350
	// Line 166, Address: 0x2b5690, Func Offset: 0x370
	// Line 169, Address: 0x2b56b0, Func Offset: 0x390
	// Line 172, Address: 0x2b56c8, Func Offset: 0x3a8
	// Line 173, Address: 0x2b56d8, Func Offset: 0x3b8
	// Line 174, Address: 0x2b56e8, Func Offset: 0x3c8
	// Line 179, Address: 0x2b5700, Func Offset: 0x3e0
	// Line 180, Address: 0x2b570c, Func Offset: 0x3ec
	// Line 182, Address: 0x2b5710, Func Offset: 0x3f0
	// Line 183, Address: 0x2b5718, Func Offset: 0x3f8
	// Line 182, Address: 0x2b5720, Func Offset: 0x400
	// Line 183, Address: 0x2b5728, Func Offset: 0x408
	// Line 182, Address: 0x2b572c, Func Offset: 0x40c
	// Line 183, Address: 0x2b5730, Func Offset: 0x410
	// Line 182, Address: 0x2b5734, Func Offset: 0x414
	// Line 183, Address: 0x2b573c, Func Offset: 0x41c
	// Line 182, Address: 0x2b5740, Func Offset: 0x420
	// Line 183, Address: 0x2b5744, Func Offset: 0x424
	// Line 187, Address: 0x2b5754, Func Offset: 0x434
	// Line 188, Address: 0x2b5758, Func Offset: 0x438
	// Func End, Address: 0x2b577c, Func Offset: 0x45c
}

// 
// Start address: 0x2b5780
void NowLoadingDrawFunc(sfObj* obj)
{
	unsigned long tex0;
	sgTexArc* tdata_addr;
	sgTexData* tex_head;
	sgClutData* clut_head;
	_anon0* tex;
	unsigned long* pk;
	unsigned int id;
	int cbp;
	int x0;
	int y0;
	int x1;
	int y1;
	int u;
	int v;
	int w0;
	int w;
	int h;
	int nl_x0_limit;
	int nl_y0_limit;
	int nl_x1_limit;
	int nl_y1_limit;
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
	// Line 191, Address: 0x2b5780, Func Offset: 0
	// Line 209, Address: 0x2b5784, Func Offset: 0x4
	// Line 191, Address: 0x2b5788, Func Offset: 0x8
	// Line 209, Address: 0x2b57b0, Func Offset: 0x30
	// Line 218, Address: 0x2b57ec, Func Offset: 0x6c
	// Line 225, Address: 0x2b57f0, Func Offset: 0x70
	// Line 226, Address: 0x2b5800, Func Offset: 0x80
	// Line 227, Address: 0x2b580c, Func Offset: 0x8c
	// Line 228, Address: 0x2b5814, Func Offset: 0x94
	// Line 229, Address: 0x2b581c, Func Offset: 0x9c
	// Line 230, Address: 0x2b582c, Func Offset: 0xac
	// Line 231, Address: 0x2b5834, Func Offset: 0xb4
	// Line 232, Address: 0x2b5844, Func Offset: 0xc4
	// Line 231, Address: 0x2b584c, Func Offset: 0xcc
	// Line 232, Address: 0x2b5850, Func Offset: 0xd0
	// Line 236, Address: 0x2b5864, Func Offset: 0xe4
	// Line 237, Address: 0x2b587c, Func Offset: 0xfc
	// Line 238, Address: 0x2b5884, Func Offset: 0x104
	// Line 239, Address: 0x2b588c, Func Offset: 0x10c
	// Line 244, Address: 0x2b5898, Func Offset: 0x118
	// Line 247, Address: 0x2b589c, Func Offset: 0x11c
	// Line 244, Address: 0x2b58a0, Func Offset: 0x120
	// Line 247, Address: 0x2b58a4, Func Offset: 0x124
	// Line 250, Address: 0x2b58a8, Func Offset: 0x128
	// Line 244, Address: 0x2b58ac, Func Offset: 0x12c
	// Line 250, Address: 0x2b58b0, Func Offset: 0x130
	// Line 244, Address: 0x2b58b4, Func Offset: 0x134
	// Line 246, Address: 0x2b58b8, Func Offset: 0x138
	// Line 247, Address: 0x2b58bc, Func Offset: 0x13c
	// Line 248, Address: 0x2b58c0, Func Offset: 0x140
	// Line 253, Address: 0x2b58c8, Func Offset: 0x148
	// Line 244, Address: 0x2b58cc, Func Offset: 0x14c
	// Line 246, Address: 0x2b58dc, Func Offset: 0x15c
	// Line 244, Address: 0x2b58e0, Func Offset: 0x160
	// Line 246, Address: 0x2b58e4, Func Offset: 0x164
	// Line 247, Address: 0x2b58f8, Func Offset: 0x178
	// Line 246, Address: 0x2b58fc, Func Offset: 0x17c
	// Line 247, Address: 0x2b5900, Func Offset: 0x180
	// Line 248, Address: 0x2b5914, Func Offset: 0x194
	// Line 247, Address: 0x2b5918, Func Offset: 0x198
	// Line 248, Address: 0x2b591c, Func Offset: 0x19c
	// Line 250, Address: 0x2b5930, Func Offset: 0x1b0
	// Line 248, Address: 0x2b5934, Func Offset: 0x1b4
	// Line 250, Address: 0x2b5938, Func Offset: 0x1b8
	// Line 253, Address: 0x2b594c, Func Offset: 0x1cc
	// Line 250, Address: 0x2b5950, Func Offset: 0x1d0
	// Line 253, Address: 0x2b5954, Func Offset: 0x1d4
	// Line 257, Address: 0x2b5968, Func Offset: 0x1e8
	// Line 258, Address: 0x2b5984, Func Offset: 0x204
	// Line 261, Address: 0x2b59a0, Func Offset: 0x220
	// Line 263, Address: 0x2b59a4, Func Offset: 0x224
	// Line 261, Address: 0x2b59a8, Func Offset: 0x228
	// Line 263, Address: 0x2b59ac, Func Offset: 0x22c
	// Line 266, Address: 0x2b59b0, Func Offset: 0x230
	// Line 262, Address: 0x2b59b4, Func Offset: 0x234
	// Line 266, Address: 0x2b59b8, Func Offset: 0x238
	// Line 261, Address: 0x2b59bc, Func Offset: 0x23c
	// Line 264, Address: 0x2b59c0, Func Offset: 0x240
	// Line 262, Address: 0x2b59c4, Func Offset: 0x244
	// Line 264, Address: 0x2b59c8, Func Offset: 0x248
	// Line 272, Address: 0x2b59cc, Func Offset: 0x24c
	// Line 266, Address: 0x2b59d0, Func Offset: 0x250
	// Line 272, Address: 0x2b59dc, Func Offset: 0x25c
	// Line 267, Address: 0x2b59e0, Func Offset: 0x260
	// Line 266, Address: 0x2b59e4, Func Offset: 0x264
	// Line 267, Address: 0x2b5a00, Func Offset: 0x280
	// Line 266, Address: 0x2b5a04, Func Offset: 0x284
	// Line 267, Address: 0x2b5a08, Func Offset: 0x288
	// Line 273, Address: 0x2b5a14, Func Offset: 0x294
	// Line 277, Address: 0x2b5a18, Func Offset: 0x298
	// Line 271, Address: 0x2b5a1c, Func Offset: 0x29c
	// Line 273, Address: 0x2b5a20, Func Offset: 0x2a0
	// Line 277, Address: 0x2b5a24, Func Offset: 0x2a4
	// Line 271, Address: 0x2b5a28, Func Offset: 0x2a8
	// Line 267, Address: 0x2b5a2c, Func Offset: 0x2ac
	// Line 276, Address: 0x2b5a4c, Func Offset: 0x2cc
	// Line 267, Address: 0x2b5a50, Func Offset: 0x2d0
	// Line 276, Address: 0x2b5a54, Func Offset: 0x2d4
	// Line 273, Address: 0x2b5a5c, Func Offset: 0x2dc
	// Line 271, Address: 0x2b5a60, Func Offset: 0x2e0
	// Line 273, Address: 0x2b5a64, Func Offset: 0x2e4
	// Line 272, Address: 0x2b5a68, Func Offset: 0x2e8
	// Line 271, Address: 0x2b5a6c, Func Offset: 0x2ec
	// Line 272, Address: 0x2b5a70, Func Offset: 0x2f0
	// Line 276, Address: 0x2b5a74, Func Offset: 0x2f4
	// Line 277, Address: 0x2b5a78, Func Offset: 0x2f8
	// Line 278, Address: 0x2b5a8c, Func Offset: 0x30c
	// Line 279, Address: 0x2b5a94, Func Offset: 0x314
	// Line 289, Address: 0x2b5a98, Func Offset: 0x318
	// Line 279, Address: 0x2b5a9c, Func Offset: 0x31c
	// Line 278, Address: 0x2b5aa0, Func Offset: 0x320
	// Line 289, Address: 0x2b5aa4, Func Offset: 0x324
	// Line 304, Address: 0x2b5aa8, Func Offset: 0x328
	// Line 278, Address: 0x2b5aac, Func Offset: 0x32c
	// Line 306, Address: 0x2b5ab0, Func Offset: 0x330
	// Line 304, Address: 0x2b5ab8, Func Offset: 0x338
	// Line 288, Address: 0x2b5abc, Func Offset: 0x33c
	// Line 305, Address: 0x2b5ac0, Func Offset: 0x340
	// Line 306, Address: 0x2b5ac8, Func Offset: 0x348
	// Line 304, Address: 0x2b5acc, Func Offset: 0x34c
	// Line 279, Address: 0x2b5ad0, Func Offset: 0x350
	// Line 304, Address: 0x2b5ad4, Func Offset: 0x354
	// Line 289, Address: 0x2b5ad8, Func Offset: 0x358
	// Line 278, Address: 0x2b5adc, Func Offset: 0x35c
	// Line 289, Address: 0x2b5ae0, Func Offset: 0x360
	// Line 309, Address: 0x2b5ae4, Func Offset: 0x364
	// Line 289, Address: 0x2b5ae8, Func Offset: 0x368
	// Line 304, Address: 0x2b5aec, Func Offset: 0x36c
	// Line 291, Address: 0x2b5af8, Func Offset: 0x378
	// Line 304, Address: 0x2b5afc, Func Offset: 0x37c
	// Line 278, Address: 0x2b5b00, Func Offset: 0x380
	// Line 304, Address: 0x2b5b04, Func Offset: 0x384
	// Line 305, Address: 0x2b5b08, Func Offset: 0x388
	// Line 311, Address: 0x2b5b0c, Func Offset: 0x38c
	// Line 309, Address: 0x2b5b10, Func Offset: 0x390
	// Line 311, Address: 0x2b5b14, Func Offset: 0x394
	// Line 313, Address: 0x2b5b18, Func Offset: 0x398
	// Line 289, Address: 0x2b5b1c, Func Offset: 0x39c
	// Line 305, Address: 0x2b5b24, Func Offset: 0x3a4
	// Line 278, Address: 0x2b5b28, Func Offset: 0x3a8
	// Line 289, Address: 0x2b5b2c, Func Offset: 0x3ac
	// Line 288, Address: 0x2b5b30, Func Offset: 0x3b0
	// Line 289, Address: 0x2b5b34, Func Offset: 0x3b4
	// Line 291, Address: 0x2b5b38, Func Offset: 0x3b8
	// Line 290, Address: 0x2b5b3c, Func Offset: 0x3bc
	// Line 288, Address: 0x2b5b40, Func Offset: 0x3c0
	// Line 314, Address: 0x2b5b44, Func Offset: 0x3c4
	// Line 290, Address: 0x2b5b48, Func Offset: 0x3c8
	// Line 305, Address: 0x2b5b4c, Func Offset: 0x3cc
	// Line 291, Address: 0x2b5b58, Func Offset: 0x3d8
	// Line 305, Address: 0x2b5b5c, Func Offset: 0x3dc
	// Line 291, Address: 0x2b5b60, Func Offset: 0x3e0
	// Line 305, Address: 0x2b5b68, Func Offset: 0x3e8
	// Line 291, Address: 0x2b5b6c, Func Offset: 0x3ec
	// Line 306, Address: 0x2b5b70, Func Offset: 0x3f0
	// Line 309, Address: 0x2b5b88, Func Offset: 0x408
	// Line 306, Address: 0x2b5b8c, Func Offset: 0x40c
	// Line 309, Address: 0x2b5b90, Func Offset: 0x410
	// Line 311, Address: 0x2b5ba4, Func Offset: 0x424
	// Line 309, Address: 0x2b5ba8, Func Offset: 0x428
	// Line 311, Address: 0x2b5bac, Func Offset: 0x42c
	// Line 313, Address: 0x2b5bc0, Func Offset: 0x440
	// Line 311, Address: 0x2b5bc4, Func Offset: 0x444
	// Line 313, Address: 0x2b5bc8, Func Offset: 0x448
	// Line 314, Address: 0x2b5bdc, Func Offset: 0x45c
	// Line 313, Address: 0x2b5be0, Func Offset: 0x460
	// Line 314, Address: 0x2b5be4, Func Offset: 0x464
	// Line 320, Address: 0x2b5bf8, Func Offset: 0x478
	// Line 321, Address: 0x2b5c18, Func Offset: 0x498
	// Line 322, Address: 0x2b5c3c, Func Offset: 0x4bc
	// Line 323, Address: 0x2b5c5c, Func Offset: 0x4dc
	// Line 325, Address: 0x2b5c78, Func Offset: 0x4f8
	// Line 326, Address: 0x2b5ca0, Func Offset: 0x520
	// Line 327, Address: 0x2b5cc8, Func Offset: 0x548
	// Line 328, Address: 0x2b5cf0, Func Offset: 0x570
	// Line 343, Address: 0x2b5d18, Func Offset: 0x598
	// Line 339, Address: 0x2b5d20, Func Offset: 0x5a0
	// Line 343, Address: 0x2b5d24, Func Offset: 0x5a4
	// Line 339, Address: 0x2b5d28, Func Offset: 0x5a8
	// Line 343, Address: 0x2b5d2c, Func Offset: 0x5ac
	// Line 339, Address: 0x2b5d30, Func Offset: 0x5b0
	// Line 343, Address: 0x2b5d34, Func Offset: 0x5b4
	// Line 339, Address: 0x2b5d38, Func Offset: 0x5b8
	// Line 343, Address: 0x2b5d3c, Func Offset: 0x5bc
	// Line 339, Address: 0x2b5d40, Func Offset: 0x5c0
	// Line 343, Address: 0x2b5d44, Func Offset: 0x5c4
	// Line 339, Address: 0x2b5d50, Func Offset: 0x5d0
	// Line 340, Address: 0x2b5d54, Func Offset: 0x5d4
	// Line 339, Address: 0x2b5d58, Func Offset: 0x5d8
	// Line 340, Address: 0x2b5d5c, Func Offset: 0x5dc
	// Line 339, Address: 0x2b5d60, Func Offset: 0x5e0
	// Line 340, Address: 0x2b5d78, Func Offset: 0x5f8
	// Line 339, Address: 0x2b5d7c, Func Offset: 0x5fc
	// Line 340, Address: 0x2b5d80, Func Offset: 0x600
	// Line 343, Address: 0x2b5dbc, Func Offset: 0x63c
	// Line 340, Address: 0x2b5dc0, Func Offset: 0x640
	// Line 343, Address: 0x2b5dd4, Func Offset: 0x654
	// Line 344, Address: 0x2b5de8, Func Offset: 0x668
	// Line 343, Address: 0x2b5dec, Func Offset: 0x66c
	// Line 344, Address: 0x2b5df0, Func Offset: 0x670
	// Line 372, Address: 0x2b5e38, Func Offset: 0x6b8
	// Line 373, Address: 0x2b5e40, Func Offset: 0x6c0
	// Line 374, Address: 0x2b5e48, Func Offset: 0x6c8
	// Line 375, Address: 0x2b5e60, Func Offset: 0x6e0
	// Line 414, Address: 0x2b5e78, Func Offset: 0x6f8
	// Func End, Address: 0x2b5ea8, Func Offset: 0x728
}

// 
// Start address: 0x2b5eb0
void NowLoadingDrawControl()
{
	sfObj* optr;
	// Line 417, Address: 0x2b5eb0, Func Offset: 0
	// Line 420, Address: 0x2b5eb4, Func Offset: 0x4
	// Line 417, Address: 0x2b5eb8, Func Offset: 0x8
	// Line 420, Address: 0x2b5ebc, Func Offset: 0xc
	// Line 421, Address: 0x2b5ec8, Func Offset: 0x18
	// Line 423, Address: 0x2b5ed0, Func Offset: 0x20
	// Line 424, Address: 0x2b5ed8, Func Offset: 0x28
	// Line 425, Address: 0x2b5ee0, Func Offset: 0x30
	// Func End, Address: 0x2b5eec, Func Offset: 0x3c
}

// 
// Start address: 0x2b5ef0
void NowLoadingByObj()
{
	sfObj* optr;
	// Line 428, Address: 0x2b5ef0, Func Offset: 0
	// Line 431, Address: 0x2b5ef4, Func Offset: 0x4
	// Line 428, Address: 0x2b5ef8, Func Offset: 0x8
	// Line 431, Address: 0x2b5efc, Func Offset: 0xc
	// Line 433, Address: 0x2b5f0c, Func Offset: 0x1c
	// Line 434, Address: 0x2b5f14, Func Offset: 0x24
	// Line 435, Address: 0x2b5f18, Func Offset: 0x28
	// Line 434, Address: 0x2b5f1c, Func Offset: 0x2c
	// Line 435, Address: 0x2b5f20, Func Offset: 0x30
	// Line 440, Address: 0x2b5f2c, Func Offset: 0x3c
	// Func End, Address: 0x2b5f3c, Func Offset: 0x4c
}

// 
// Start address: 0x2b5f40
void NowLoadingKill()
{
	// Line 443, Address: 0x2b5f40, Func Offset: 0
	// Line 444, Address: 0x2b5f44, Func Offset: 0x4
	// Line 443, Address: 0x2b5f48, Func Offset: 0x8
	// Line 444, Address: 0x2b5f4c, Func Offset: 0xc
	// Line 446, Address: 0x2b5f60, Func Offset: 0x20
	// Line 447, Address: 0x2b5f70, Func Offset: 0x30
	// Line 448, Address: 0x2b5f74, Func Offset: 0x34
	// Line 450, Address: 0x2b5f80, Func Offset: 0x40
	// Line 454, Address: 0x2b5f88, Func Offset: 0x48
	// Line 456, Address: 0x2b5f94, Func Offset: 0x54
	// Func End, Address: 0x2b5fa4, Func Offset: 0x64
}

