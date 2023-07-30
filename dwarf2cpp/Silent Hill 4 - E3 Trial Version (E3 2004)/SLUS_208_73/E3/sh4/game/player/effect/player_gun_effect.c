typedef struct _anon0;
typedef struct sgSot;
typedef struct _anon1;
typedef struct sgSotTag;


typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[4][2];
typedef _anon1 type_3[3];
typedef float type_4[4];

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

struct sgSot
{
	sgSotTag** ot_top;
	sgSotTag** ot_last;
	unsigned short ot_size;
	unsigned short ot_width;
	unsigned int flag;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int dma_max;
	sgSotTag* dma_top;
	sgSotTag* dmabuf_pos;
	sgSotTag* dmakick_buf;
	unsigned short* ot_max;
	unsigned int dmatag_num;
};

struct _anon1
{
	int u0;
	int v0;
	int u1;
	int v1;
};

struct sgSotTag
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
};

_anon1 fire_uv[3];
unsigned long* sg_packet_cur;

int PlayerGunEffectDraw(float* pos, int id, int alpha);

// 
// Start address: 0x2c8c30
int PlayerGunEffectDraw(float* pos, int id, int alpha)
{
	sgSot* ot;
	void* pkt;
	float m[4][4];
	_anon1* fuv;
	float camera_Z[4];
	float tmp[4];
	float f_vec[4][2];
	unsigned long tex0;
	int ret;
	_anon0* tex;
	unsigned long cbp;
	float angle_y;
	float snf;
	float csf;
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
	// Line 85, Address: 0x2c8c30, Func Offset: 0
	// Line 67, Address: 0x2c8c34, Func Offset: 0x4
	// Line 85, Address: 0x2c8c38, Func Offset: 0x8
	// Line 67, Address: 0x2c8c3c, Func Offset: 0xc
	// Line 85, Address: 0x2c8c44, Func Offset: 0x14
	// Line 67, Address: 0x2c8c48, Func Offset: 0x18
	// Line 85, Address: 0x2c8c4c, Func Offset: 0x1c
	// Line 67, Address: 0x2c8c50, Func Offset: 0x20
	// Line 77, Address: 0x2c8c5c, Func Offset: 0x2c
	// Line 67, Address: 0x2c8c60, Func Offset: 0x30
	// Line 88, Address: 0x2c8c6c, Func Offset: 0x3c
	// Line 67, Address: 0x2c8c70, Func Offset: 0x40
	// Line 85, Address: 0x2c8c74, Func Offset: 0x44
	// Line 88, Address: 0x2c8c7c, Func Offset: 0x4c
	// Line 89, Address: 0x2c8c84, Func Offset: 0x54
	// Line 94, Address: 0x2c8c8c, Func Offset: 0x5c
	// Line 96, Address: 0x2c8cb0, Func Offset: 0x80
	// Line 98, Address: 0x2c8cb8, Func Offset: 0x88
	// Line 99, Address: 0x2c8cc4, Func Offset: 0x94
	// Line 100, Address: 0x2c8ccc, Func Offset: 0x9c
	// Line 101, Address: 0x2c8cd8, Func Offset: 0xa8
	// Line 102, Address: 0x2c8ce4, Func Offset: 0xb4
	// Line 103, Address: 0x2c8cec, Func Offset: 0xbc
	// Line 110, Address: 0x2c8d0c, Func Offset: 0xdc
	// Line 111, Address: 0x2c8d1c, Func Offset: 0xec
	// Line 112, Address: 0x2c8d34, Func Offset: 0x104
	// Line 113, Address: 0x2c8d3c, Func Offset: 0x10c
	// Line 114, Address: 0x2c8d48, Func Offset: 0x118
	// Line 117, Address: 0x2c8d4c, Func Offset: 0x11c
	// Line 114, Address: 0x2c8d50, Func Offset: 0x120
	// Line 117, Address: 0x2c8d54, Func Offset: 0x124
	// Line 114, Address: 0x2c8d58, Func Offset: 0x128
	// Line 117, Address: 0x2c8d60, Func Offset: 0x130
	// Line 114, Address: 0x2c8d64, Func Offset: 0x134
	// Line 115, Address: 0x2c8d6c, Func Offset: 0x13c
	// Line 116, Address: 0x2c8d70, Func Offset: 0x140
	// Line 115, Address: 0x2c8d74, Func Offset: 0x144
	// Line 116, Address: 0x2c8d7c, Func Offset: 0x14c
	// Line 117, Address: 0x2c8d88, Func Offset: 0x158
	// Line 118, Address: 0x2c8dbc, Func Offset: 0x18c
	// Line 121, Address: 0x2c8dc4, Func Offset: 0x194
	// Line 119, Address: 0x2c8dcc, Func Offset: 0x19c
	// Line 121, Address: 0x2c8dd4, Func Offset: 0x1a4
	// Line 118, Address: 0x2c8dd8, Func Offset: 0x1a8
	// Line 120, Address: 0x2c8ddc, Func Offset: 0x1ac
	// Line 118, Address: 0x2c8de0, Func Offset: 0x1b0
	// Line 120, Address: 0x2c8de4, Func Offset: 0x1b4
	// Line 118, Address: 0x2c8df0, Func Offset: 0x1c0
	// Line 119, Address: 0x2c8df8, Func Offset: 0x1c8
	// Line 120, Address: 0x2c8e04, Func Offset: 0x1d4
	// Line 121, Address: 0x2c8e10, Func Offset: 0x1e0
	// Line 123, Address: 0x2c8e44, Func Offset: 0x214
	// Line 124, Address: 0x2c8e70, Func Offset: 0x240
	// Line 126, Address: 0x2c8e78, Func Offset: 0x248
	// Line 127, Address: 0x2c8ea0, Func Offset: 0x270
	// Line 129, Address: 0x2c8ea8, Func Offset: 0x278
	// Line 130, Address: 0x2c8ed8, Func Offset: 0x2a8
	// Line 132, Address: 0x2c8ee0, Func Offset: 0x2b0
	// Line 133, Address: 0x2c8f08, Func Offset: 0x2d8
	// Line 136, Address: 0x2c8f10, Func Offset: 0x2e0
	// Line 137, Address: 0x2c8f1c, Func Offset: 0x2ec
	// Line 138, Address: 0x2c8f24, Func Offset: 0x2f4
	// Line 140, Address: 0x2c8f3c, Func Offset: 0x30c
	// Line 141, Address: 0x2c8f50, Func Offset: 0x320
	// Line 142, Address: 0x2c8f58, Func Offset: 0x328
	// Line 143, Address: 0x2c8f60, Func Offset: 0x330
	// Line 146, Address: 0x2c8f6c, Func Offset: 0x33c
	// Line 149, Address: 0x2c8f70, Func Offset: 0x340
	// Line 146, Address: 0x2c8f74, Func Offset: 0x344
	// Line 149, Address: 0x2c8f78, Func Offset: 0x348
	// Line 158, Address: 0x2c8f7c, Func Offset: 0x34c
	// Line 153, Address: 0x2c8f80, Func Offset: 0x350
	// Line 158, Address: 0x2c8f84, Func Offset: 0x354
	// Line 153, Address: 0x2c8f88, Func Offset: 0x358
	// Line 146, Address: 0x2c8f8c, Func Offset: 0x35c
	// Line 147, Address: 0x2c8f90, Func Offset: 0x360
	// Line 148, Address: 0x2c8f94, Func Offset: 0x364
	// Line 149, Address: 0x2c8f98, Func Offset: 0x368
	// Line 150, Address: 0x2c8f9c, Func Offset: 0x36c
	// Line 146, Address: 0x2c8fa4, Func Offset: 0x374
	// Line 151, Address: 0x2c8fa8, Func Offset: 0x378
	// Line 146, Address: 0x2c8fac, Func Offset: 0x37c
	// Line 151, Address: 0x2c8fb0, Func Offset: 0x380
	// Line 158, Address: 0x2c8fb4, Func Offset: 0x384
	// Line 153, Address: 0x2c8fb8, Func Offset: 0x388
	// Line 146, Address: 0x2c8fc0, Func Offset: 0x390
	// Line 147, Address: 0x2c8fd0, Func Offset: 0x3a0
	// Line 146, Address: 0x2c8fd4, Func Offset: 0x3a4
	// Line 158, Address: 0x2c8fd8, Func Offset: 0x3a8
	// Line 146, Address: 0x2c8fdc, Func Offset: 0x3ac
	// Line 153, Address: 0x2c8fe0, Func Offset: 0x3b0
	// Line 147, Address: 0x2c8fe4, Func Offset: 0x3b4
	// Line 153, Address: 0x2c8fe8, Func Offset: 0x3b8
	// Line 154, Address: 0x2c8ff0, Func Offset: 0x3c0
	// Line 158, Address: 0x2c8ff4, Func Offset: 0x3c4
	// Line 160, Address: 0x2c8ff8, Func Offset: 0x3c8
	// Line 161, Address: 0x2c8ffc, Func Offset: 0x3cc
	// Line 147, Address: 0x2c9000, Func Offset: 0x3d0
	// Line 148, Address: 0x2c9018, Func Offset: 0x3e8
	// Line 147, Address: 0x2c901c, Func Offset: 0x3ec
	// Line 148, Address: 0x2c9024, Func Offset: 0x3f4
	// Line 149, Address: 0x2c9040, Func Offset: 0x410
	// Line 148, Address: 0x2c9044, Func Offset: 0x414
	// Line 149, Address: 0x2c904c, Func Offset: 0x41c
	// Line 150, Address: 0x2c9068, Func Offset: 0x438
	// Line 149, Address: 0x2c906c, Func Offset: 0x43c
	// Line 150, Address: 0x2c9074, Func Offset: 0x444
	// Line 151, Address: 0x2c9090, Func Offset: 0x460
	// Line 150, Address: 0x2c9094, Func Offset: 0x464
	// Line 151, Address: 0x2c909c, Func Offset: 0x46c
	// Line 153, Address: 0x2c90b8, Func Offset: 0x488
	// Line 151, Address: 0x2c90bc, Func Offset: 0x48c
	// Line 153, Address: 0x2c90c4, Func Offset: 0x494
	// Line 154, Address: 0x2c90e0, Func Offset: 0x4b0
	// Line 153, Address: 0x2c90e4, Func Offset: 0x4b4
	// Line 154, Address: 0x2c90ec, Func Offset: 0x4bc
	// Line 158, Address: 0x2c9108, Func Offset: 0x4d8
	// Line 154, Address: 0x2c910c, Func Offset: 0x4dc
	// Line 158, Address: 0x2c9114, Func Offset: 0x4e4
	// Line 160, Address: 0x2c9130, Func Offset: 0x500
	// Line 158, Address: 0x2c9134, Func Offset: 0x504
	// Line 160, Address: 0x2c913c, Func Offset: 0x50c
	// Line 161, Address: 0x2c9158, Func Offset: 0x528
	// Line 160, Address: 0x2c915c, Func Offset: 0x52c
	// Line 161, Address: 0x2c918c, Func Offset: 0x55c
	// Line 163, Address: 0x2c91cc, Func Offset: 0x59c
	// Line 161, Address: 0x2c91d0, Func Offset: 0x5a0
	// Line 163, Address: 0x2c91d4, Func Offset: 0x5a4
	// Line 164, Address: 0x2c91dc, Func Offset: 0x5ac
	// Line 163, Address: 0x2c91e0, Func Offset: 0x5b0
	// Line 164, Address: 0x2c91f8, Func Offset: 0x5c8
	// Line 163, Address: 0x2c91fc, Func Offset: 0x5cc
	// Line 164, Address: 0x2c922c, Func Offset: 0x5fc
	// Line 166, Address: 0x2c926c, Func Offset: 0x63c
	// Line 167, Address: 0x2c9274, Func Offset: 0x644
	// Line 168, Address: 0x2c92d4, Func Offset: 0x6a4
	// Line 169, Address: 0x2c92e4, Func Offset: 0x6b4
	// Line 173, Address: 0x2c92e8, Func Offset: 0x6b8
	// Line 174, Address: 0x2c92f0, Func Offset: 0x6c0
	// Func End, Address: 0x2c9318, Func Offset: 0x6e8
}

