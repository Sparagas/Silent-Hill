typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;

typedef float(*type_1)(int, int);
typedef float(*type_2)(int, int);
typedef float(*type_3)(int, int);

typedef float type_0[4];

struct _anon0
{
	_anon1 src;
	_anon1 dst;
	float rot;
	float scale;
	unsigned int* index;
	unsigned int index_num;
	unsigned int morphing_timer;
	unsigned int timer;
	float(*rate_func)(int, int);
	float rate;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char base_alpha;
};

struct _anon1
{
	_anon2* tex;
	float v[4];
	unsigned int vertex_num;
	float u0;
	float v0;
	float u1;
	float v1;
	float x;
	float y;
	float w;
	float h;
	float ofs_x;
	float ofs_y;
	unsigned int cbp;
	char c_ofs;
};

struct _anon2
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

float(*linear_rate)(int, int);
unsigned long* sg_packet_cur;

float linear_rate(int cur_time, int max_time);
void sfMorphConstruct(_anon0* m);
void sfMorphSetSrcVertices(_anon0* m, float src[4], unsigned int v_num);
void sfMorphSetDstVertices(_anon0* m, float dst[4], unsigned int v_num);
void sfMorphSetIndices(_anon0* m, unsigned int* index, unsigned int i_num);
void sfMorphSetXYWH(_anon0* m, int kind, float x, float y, float w, float h);
void sfMorphSetOffsetXY(_anon0* m, int kind, float x, float y);
void sfMorphSetUV(_anon0* m, int kind, float u0, float v0, float u1, float v1);
void sfMorphSetTex(_anon0* m, int kind, _anon2* tex);
void sfMorphSetClut(_anon0* m, int kind, unsigned int cbp, unsigned int c_ofs);
void sfMorphSetMorphTime(_anon0* m, unsigned int time);
void sfMorphSetRateFunc(_anon0* m, float(*func)(int, int));
void sfMorphSetColor(_anon0* m, unsigned char r, unsigned char g, unsigned char b);
void sfMorphSetAlpha(_anon0* m, unsigned char alpha);
int sfMorphUpdate(_anon0* m);
void sfMorphTimerClear(_anon0* m);
void MakePacket_tex(_anon0* m, int src_dst, float rate, float alpha);
void sfMorphDraw(_anon0* m);
unsigned long capture(unsigned int addr);
unsigned long sfMorphCapture(unsigned int addr);
void MakePacket_capture_tex(_anon0* m, int src_dst, float rate, float alpha);
int sfMorphFilter(_anon0* m);

// 
// Start address: 0x2b8f70
float linear_rate(int cur_time, int max_time)
{
	float t;
	// Line 74, Address: 0x2b8f70, Func Offset: 0
	// Line 76, Address: 0x2b8f78, Func Offset: 0x8
	// Line 77, Address: 0x2b8f90, Func Offset: 0x20
	// Line 78, Address: 0x2b8fa8, Func Offset: 0x38
	// Line 79, Address: 0x2b8fb0, Func Offset: 0x40
	// Line 82, Address: 0x2b8fc8, Func Offset: 0x58
	// Func End, Address: 0x2b8fd0, Func Offset: 0x60
}

// 
// Start address: 0x2b8fd0
void sfMorphConstruct(_anon0* m)
{
	// Line 89, Address: 0x2b8fd0, Func Offset: 0
	// Line 90, Address: 0x2b8fe0, Func Offset: 0x10
	// Line 91, Address: 0x2b8fe8, Func Offset: 0x18
	// Line 92, Address: 0x2b8ff0, Func Offset: 0x20
	// Line 94, Address: 0x2b8ff4, Func Offset: 0x24
	// Line 92, Address: 0x2b8ff8, Func Offset: 0x28
	// Line 94, Address: 0x2b8ffc, Func Offset: 0x2c
	// Line 93, Address: 0x2b9000, Func Offset: 0x30
	// Line 95, Address: 0x2b9004, Func Offset: 0x34
	// Line 94, Address: 0x2b9008, Func Offset: 0x38
	// Line 97, Address: 0x2b900c, Func Offset: 0x3c
	// Line 95, Address: 0x2b9010, Func Offset: 0x40
	// Line 96, Address: 0x2b9014, Func Offset: 0x44
	// Line 97, Address: 0x2b9018, Func Offset: 0x48
	// Line 98, Address: 0x2b9024, Func Offset: 0x54
	// Line 100, Address: 0x2b9028, Func Offset: 0x58
	// Func End, Address: 0x2b9038, Func Offset: 0x68
}

// 
// Start address: 0x2b9040
void sfMorphSetSrcVertices(_anon0* m, float src[4], unsigned int v_num)
{
	// Line 137, Address: 0x2b9040, Func Offset: 0
	// Line 138, Address: 0x2b9050, Func Offset: 0x10
	// Line 139, Address: 0x2b9054, Func Offset: 0x14
	// Line 141, Address: 0x2b9058, Func Offset: 0x18
	// Func End, Address: 0x2b9060, Func Offset: 0x20
}

// 
// Start address: 0x2b9060
void sfMorphSetDstVertices(_anon0* m, float dst[4], unsigned int v_num)
{
	// Line 158, Address: 0x2b9060, Func Offset: 0
	// Line 159, Address: 0x2b9070, Func Offset: 0x10
	// Line 160, Address: 0x2b9074, Func Offset: 0x14
	// Line 162, Address: 0x2b9078, Func Offset: 0x18
	// Func End, Address: 0x2b9080, Func Offset: 0x20
}

// 
// Start address: 0x2b9080
void sfMorphSetIndices(_anon0* m, unsigned int* index, unsigned int i_num)
{
	// Line 180, Address: 0x2b9080, Func Offset: 0
	// Line 181, Address: 0x2b9088, Func Offset: 0x8
	// Line 182, Address: 0x2b908c, Func Offset: 0xc
	// Line 184, Address: 0x2b9090, Func Offset: 0x10
	// Func End, Address: 0x2b9098, Func Offset: 0x18
}

// 
// Start address: 0x2b90a0
void sfMorphSetXYWH(_anon0* m, int kind, float x, float y, float w, float h)
{
	_anon1* mimg;
	// Line 191, Address: 0x2b90a0, Func Offset: 0
	// Line 193, Address: 0x2b90a8, Func Offset: 0x8
	// Line 194, Address: 0x2b90c0, Func Offset: 0x20
	// Line 195, Address: 0x2b90c8, Func Offset: 0x28
	// Line 196, Address: 0x2b90cc, Func Offset: 0x2c
	// Line 197, Address: 0x2b90d0, Func Offset: 0x30
	// Line 198, Address: 0x2b90d4, Func Offset: 0x34
	// Line 199, Address: 0x2b90d8, Func Offset: 0x38
	// Line 200, Address: 0x2b90dc, Func Offset: 0x3c
	// Line 202, Address: 0x2b90e0, Func Offset: 0x40
	// Func End, Address: 0x2b90e8, Func Offset: 0x48
}

// 
// Start address: 0x2b90f0
void sfMorphSetOffsetXY(_anon0* m, int kind, float x, float y)
{
	_anon1* mimg;
	// Line 209, Address: 0x2b90f0, Func Offset: 0
	// Line 211, Address: 0x2b90f8, Func Offset: 0x8
	// Line 212, Address: 0x2b9110, Func Offset: 0x20
	// Line 213, Address: 0x2b9118, Func Offset: 0x28
	// Line 214, Address: 0x2b911c, Func Offset: 0x2c
	// Line 215, Address: 0x2b9120, Func Offset: 0x30
	// Line 216, Address: 0x2b9124, Func Offset: 0x34
	// Line 218, Address: 0x2b9128, Func Offset: 0x38
	// Func End, Address: 0x2b9130, Func Offset: 0x40
}

// 
// Start address: 0x2b9130
void sfMorphSetUV(_anon0* m, int kind, float u0, float v0, float u1, float v1)
{
	_anon1* mimg;
	// Line 242, Address: 0x2b9130, Func Offset: 0
	// Line 244, Address: 0x2b9138, Func Offset: 0x8
	// Line 245, Address: 0x2b9150, Func Offset: 0x20
	// Line 246, Address: 0x2b9158, Func Offset: 0x28
	// Line 247, Address: 0x2b915c, Func Offset: 0x2c
	// Line 248, Address: 0x2b9160, Func Offset: 0x30
	// Line 249, Address: 0x2b9164, Func Offset: 0x34
	// Line 250, Address: 0x2b9168, Func Offset: 0x38
	// Line 251, Address: 0x2b916c, Func Offset: 0x3c
	// Line 253, Address: 0x2b9170, Func Offset: 0x40
	// Func End, Address: 0x2b9178, Func Offset: 0x48
}

// 
// Start address: 0x2b9180
void sfMorphSetTex(_anon0* m, int kind, _anon2* tex)
{
	_anon1* mimg;
	// Line 260, Address: 0x2b9180, Func Offset: 0
	// Line 263, Address: 0x2b9190, Func Offset: 0x10
	// Line 264, Address: 0x2b91a8, Func Offset: 0x28
	// Line 265, Address: 0x2b91b0, Func Offset: 0x30
	// Line 266, Address: 0x2b91b4, Func Offset: 0x34
	// Line 267, Address: 0x2b91b8, Func Offset: 0x38
	// Line 268, Address: 0x2b91bc, Func Offset: 0x3c
	// Line 269, Address: 0x2b91c0, Func Offset: 0x40
	// Func End, Address: 0x2b91c8, Func Offset: 0x48
}

// 
// Start address: 0x2b91d0
void sfMorphSetClut(_anon0* m, int kind, unsigned int cbp, unsigned int c_ofs)
{
	_anon1* mimg;
	// Line 276, Address: 0x2b91d0, Func Offset: 0
	// Line 278, Address: 0x2b91d8, Func Offset: 0x8
	// Line 279, Address: 0x2b91f0, Func Offset: 0x20
	// Line 280, Address: 0x2b91f8, Func Offset: 0x28
	// Line 281, Address: 0x2b91fc, Func Offset: 0x2c
	// Line 282, Address: 0x2b9200, Func Offset: 0x30
	// Line 283, Address: 0x2b9204, Func Offset: 0x34
	// Line 285, Address: 0x2b9208, Func Offset: 0x38
	// Func End, Address: 0x2b9210, Func Offset: 0x40
}

// 
// Start address: 0x2b9210
void sfMorphSetMorphTime(_anon0* m, unsigned int time)
{
	// Line 292, Address: 0x2b9210, Func Offset: 0
	// Line 293, Address: 0x2b9218, Func Offset: 0x8
	// Line 294, Address: 0x2b921c, Func Offset: 0xc
	// Line 295, Address: 0x2b9220, Func Offset: 0x10
	// Func End, Address: 0x2b9228, Func Offset: 0x18
}

// 
// Start address: 0x2b9230
void sfMorphSetRateFunc(_anon0* m, float(*func)(int, int))
{
	// Line 302, Address: 0x2b9230, Func Offset: 0
	// Line 303, Address: 0x2b9238, Func Offset: 0x8
	// Line 304, Address: 0x2b923c, Func Offset: 0xc
	// Line 305, Address: 0x2b9240, Func Offset: 0x10
	// Func End, Address: 0x2b9248, Func Offset: 0x18
}

// 
// Start address: 0x2b9250
void sfMorphSetColor(_anon0* m, unsigned char r, unsigned char g, unsigned char b)
{
	// Line 312, Address: 0x2b9250, Func Offset: 0
	// Line 313, Address: 0x2b9258, Func Offset: 0x8
	// Line 314, Address: 0x2b925c, Func Offset: 0xc
	// Line 315, Address: 0x2b9260, Func Offset: 0x10
	// Line 316, Address: 0x2b9264, Func Offset: 0x14
	// Line 317, Address: 0x2b9268, Func Offset: 0x18
	// Func End, Address: 0x2b9270, Func Offset: 0x20
}

// 
// Start address: 0x2b9270
void sfMorphSetAlpha(_anon0* m, unsigned char alpha)
{
	// Line 324, Address: 0x2b9270, Func Offset: 0
	// Line 325, Address: 0x2b9278, Func Offset: 0x8
	// Line 326, Address: 0x2b927c, Func Offset: 0xc
	// Line 327, Address: 0x2b9280, Func Offset: 0x10
	// Func End, Address: 0x2b9288, Func Offset: 0x18
}

// 
// Start address: 0x2b9290
int sfMorphUpdate(_anon0* m)
{
	int rtv;
	// Line 337, Address: 0x2b9290, Func Offset: 0
	// Line 338, Address: 0x2b92bc, Func Offset: 0x2c
	// Line 339, Address: 0x2b92d0, Func Offset: 0x40
	// Line 340, Address: 0x2b92d4, Func Offset: 0x44
	// Line 341, Address: 0x2b92d8, Func Offset: 0x48
	// Line 343, Address: 0x2b92e8, Func Offset: 0x58
	// Line 345, Address: 0x2b92ec, Func Offset: 0x5c
	// Line 348, Address: 0x2b92f0, Func Offset: 0x60
	// Func End, Address: 0x2b92f8, Func Offset: 0x68
}

// 
// Start address: 0x2b9300
void sfMorphTimerClear(_anon0* m)
{
	// Line 415, Address: 0x2b9300, Func Offset: 0
	// Line 416, Address: 0x2b9308, Func Offset: 0x8
	// Line 417, Address: 0x2b930c, Func Offset: 0xc
	// Line 418, Address: 0x2b9310, Func Offset: 0x10
	// Func End, Address: 0x2b9318, Func Offset: 0x18
}

// 
// Start address: 0x2b9320
void MakePacket_tex(_anon0* m, int src_dst, float rate, float alpha)
{
	unsigned int prim_num;
	int i;
	float src_v[4];
	float dst_v[4];
	_anon1* img;
	unsigned char a;
	unsigned long tex0;
	float src_base_x;
	float dst_base_x;
	float src_base_y;
	float dst_base_y;
	float base_x;
	float base_y;
	float base_w;
	float base_h;
	float base_alpha_ratio;
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
	float q;
	int u;
	int v;
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
	int j;
	int x;
	int y;
	int index;
	float q;
	int u;
	int v;
	float vec[4];
	float ratio;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 479, Address: 0x2b9320, Func Offset: 0
	// Line 480, Address: 0x2b9324, Func Offset: 0x4
	// Line 479, Address: 0x2b9328, Func Offset: 0x8
	// Line 480, Address: 0x2b932c, Func Offset: 0xc
	// Line 479, Address: 0x2b9330, Func Offset: 0x10
	// Line 487, Address: 0x2b936c, Func Offset: 0x4c
	// Line 480, Address: 0x2b9370, Func Offset: 0x50
	// Line 487, Address: 0x2b9374, Func Offset: 0x54
	// Line 482, Address: 0x2b9378, Func Offset: 0x58
	// Line 488, Address: 0x2b937c, Func Offset: 0x5c
	// Line 483, Address: 0x2b9380, Func Offset: 0x60
	// Line 488, Address: 0x2b9384, Func Offset: 0x64
	// Line 490, Address: 0x2b9388, Func Offset: 0x68
	// Line 480, Address: 0x2b9390, Func Offset: 0x70
	// Line 487, Address: 0x2b9394, Func Offset: 0x74
	// Line 480, Address: 0x2b939c, Func Offset: 0x7c
	// Line 488, Address: 0x2b93a0, Func Offset: 0x80
	// Line 480, Address: 0x2b93a4, Func Offset: 0x84
	// Line 495, Address: 0x2b93a8, Func Offset: 0x88
	// Line 490, Address: 0x2b93ac, Func Offset: 0x8c
	// Line 491, Address: 0x2b93b0, Func Offset: 0x90
	// Line 489, Address: 0x2b93bc, Func Offset: 0x9c
	// Line 493, Address: 0x2b93c4, Func Offset: 0xa4
	// Line 494, Address: 0x2b93cc, Func Offset: 0xac
	// Line 491, Address: 0x2b93d4, Func Offset: 0xb4
	// Line 489, Address: 0x2b93d8, Func Offset: 0xb8
	// Line 492, Address: 0x2b93dc, Func Offset: 0xbc
	// Line 493, Address: 0x2b93e0, Func Offset: 0xc0
	// Line 494, Address: 0x2b93e4, Func Offset: 0xc4
	// Line 492, Address: 0x2b93e8, Func Offset: 0xc8
	// Line 493, Address: 0x2b93ec, Func Offset: 0xcc
	// Line 494, Address: 0x2b93f0, Func Offset: 0xd0
	// Line 492, Address: 0x2b93f4, Func Offset: 0xd4
	// Line 493, Address: 0x2b93f8, Func Offset: 0xd8
	// Line 495, Address: 0x2b93fc, Func Offset: 0xdc
	// Line 497, Address: 0x2b9430, Func Offset: 0x110
	// Line 495, Address: 0x2b9434, Func Offset: 0x114
	// Line 497, Address: 0x2b9448, Func Offset: 0x128
	// Line 500, Address: 0x2b9460, Func Offset: 0x140
	// Line 502, Address: 0x2b9468, Func Offset: 0x148
	// Line 504, Address: 0x2b946c, Func Offset: 0x14c
	// Line 505, Address: 0x2b9470, Func Offset: 0x150
	// Line 506, Address: 0x2b9474, Func Offset: 0x154
	// Line 508, Address: 0x2b9478, Func Offset: 0x158
	// Line 506, Address: 0x2b947c, Func Offset: 0x15c
	// Line 508, Address: 0x2b948c, Func Offset: 0x16c
	// Line 510, Address: 0x2b9494, Func Offset: 0x174
	// Line 511, Address: 0x2b94a4, Func Offset: 0x184
	// Line 513, Address: 0x2b94a8, Func Offset: 0x188
	// Line 510, Address: 0x2b94b4, Func Offset: 0x194
	// Line 511, Address: 0x2b94c4, Func Offset: 0x1a4
	// Line 510, Address: 0x2b94c8, Func Offset: 0x1a8
	// Line 511, Address: 0x2b94d0, Func Offset: 0x1b0
	// Line 513, Address: 0x2b94ec, Func Offset: 0x1cc
	// Line 515, Address: 0x2b94fc, Func Offset: 0x1dc
	// Line 516, Address: 0x2b951c, Func Offset: 0x1fc
	// Line 517, Address: 0x2b9544, Func Offset: 0x224
	// Line 516, Address: 0x2b9548, Func Offset: 0x228
	// Line 517, Address: 0x2b955c, Func Offset: 0x23c
	// Line 518, Address: 0x2b9580, Func Offset: 0x260
	// Line 520, Address: 0x2b9588, Func Offset: 0x268
	// Line 521, Address: 0x2b95b4, Func Offset: 0x294
	// Line 520, Address: 0x2b95b8, Func Offset: 0x298
	// Line 521, Address: 0x2b95cc, Func Offset: 0x2ac
	// Line 523, Address: 0x2b95e8, Func Offset: 0x2c8
	// Line 524, Address: 0x2b95f0, Func Offset: 0x2d0
	// Line 523, Address: 0x2b95f8, Func Offset: 0x2d8
	// Line 526, Address: 0x2b95fc, Func Offset: 0x2dc
	// Line 523, Address: 0x2b9600, Func Offset: 0x2e0
	// Line 526, Address: 0x2b9604, Func Offset: 0x2e4
	// Line 524, Address: 0x2b9608, Func Offset: 0x2e8
	// Line 526, Address: 0x2b960c, Func Offset: 0x2ec
	// Line 523, Address: 0x2b9614, Func Offset: 0x2f4
	// Line 524, Address: 0x2b962c, Func Offset: 0x30c
	// Line 523, Address: 0x2b9630, Func Offset: 0x310
	// Line 524, Address: 0x2b9638, Func Offset: 0x318
	// Line 526, Address: 0x2b9658, Func Offset: 0x338
	// Line 528, Address: 0x2b9660, Func Offset: 0x340
	// Line 533, Address: 0x2b9664, Func Offset: 0x344
	// Line 534, Address: 0x2b96a8, Func Offset: 0x388
	// Line 535, Address: 0x2b96ec, Func Offset: 0x3cc
	// Line 534, Address: 0x2b96f0, Func Offset: 0x3d0
	// Line 535, Address: 0x2b96f4, Func Offset: 0x3d4
	// Line 536, Address: 0x2b9708, Func Offset: 0x3e8
	// Line 535, Address: 0x2b970c, Func Offset: 0x3ec
	// Line 536, Address: 0x2b9710, Func Offset: 0x3f0
	// Line 537, Address: 0x2b9724, Func Offset: 0x404
	// Line 539, Address: 0x2b972c, Func Offset: 0x40c
	// Line 537, Address: 0x2b9740, Func Offset: 0x420
	// Line 539, Address: 0x2b9744, Func Offset: 0x424
	// Line 538, Address: 0x2b9748, Func Offset: 0x428
	// Line 536, Address: 0x2b974c, Func Offset: 0x42c
	// Line 538, Address: 0x2b9750, Func Offset: 0x430
	// Line 537, Address: 0x2b9754, Func Offset: 0x434
	// Line 539, Address: 0x2b9764, Func Offset: 0x444
	// Line 537, Address: 0x2b9768, Func Offset: 0x448
	// Line 539, Address: 0x2b9778, Func Offset: 0x458
	// Line 538, Address: 0x2b9780, Func Offset: 0x460
	// Line 539, Address: 0x2b9784, Func Offset: 0x464
	// Line 537, Address: 0x2b9788, Func Offset: 0x468
	// Line 538, Address: 0x2b9798, Func Offset: 0x478
	// Line 537, Address: 0x2b979c, Func Offset: 0x47c
	// Line 538, Address: 0x2b97a4, Func Offset: 0x484
	// Line 539, Address: 0x2b97d0, Func Offset: 0x4b0
	// Line 538, Address: 0x2b97d4, Func Offset: 0x4b4
	// Line 539, Address: 0x2b980c, Func Offset: 0x4ec
	// Line 542, Address: 0x2b982c, Func Offset: 0x50c
	// Line 543, Address: 0x2b9870, Func Offset: 0x550
	// Line 544, Address: 0x2b98b4, Func Offset: 0x594
	// Line 543, Address: 0x2b98b8, Func Offset: 0x598
	// Line 544, Address: 0x2b98bc, Func Offset: 0x59c
	// Line 545, Address: 0x2b98d0, Func Offset: 0x5b0
	// Line 544, Address: 0x2b98d4, Func Offset: 0x5b4
	// Line 545, Address: 0x2b98d8, Func Offset: 0x5b8
	// Line 546, Address: 0x2b98ec, Func Offset: 0x5cc
	// Line 548, Address: 0x2b98f4, Func Offset: 0x5d4
	// Line 546, Address: 0x2b9908, Func Offset: 0x5e8
	// Line 548, Address: 0x2b990c, Func Offset: 0x5ec
	// Line 547, Address: 0x2b9910, Func Offset: 0x5f0
	// Line 545, Address: 0x2b9914, Func Offset: 0x5f4
	// Line 547, Address: 0x2b9918, Func Offset: 0x5f8
	// Line 546, Address: 0x2b991c, Func Offset: 0x5fc
	// Line 548, Address: 0x2b992c, Func Offset: 0x60c
	// Line 546, Address: 0x2b9930, Func Offset: 0x610
	// Line 548, Address: 0x2b9940, Func Offset: 0x620
	// Line 547, Address: 0x2b9948, Func Offset: 0x628
	// Line 548, Address: 0x2b994c, Func Offset: 0x62c
	// Line 546, Address: 0x2b9950, Func Offset: 0x630
	// Line 547, Address: 0x2b9960, Func Offset: 0x640
	// Line 546, Address: 0x2b9964, Func Offset: 0x644
	// Line 547, Address: 0x2b996c, Func Offset: 0x64c
	// Line 548, Address: 0x2b9998, Func Offset: 0x678
	// Line 547, Address: 0x2b999c, Func Offset: 0x67c
	// Line 548, Address: 0x2b99d4, Func Offset: 0x6b4
	// Line 551, Address: 0x2b99f4, Func Offset: 0x6d4
	// Line 552, Address: 0x2b9a38, Func Offset: 0x718
	// Line 553, Address: 0x2b9a7c, Func Offset: 0x75c
	// Line 552, Address: 0x2b9a80, Func Offset: 0x760
	// Line 553, Address: 0x2b9a84, Func Offset: 0x764
	// Line 554, Address: 0x2b9a98, Func Offset: 0x778
	// Line 553, Address: 0x2b9a9c, Func Offset: 0x77c
	// Line 554, Address: 0x2b9aa0, Func Offset: 0x780
	// Line 555, Address: 0x2b9ab4, Func Offset: 0x794
	// Line 557, Address: 0x2b9abc, Func Offset: 0x79c
	// Line 555, Address: 0x2b9ad0, Func Offset: 0x7b0
	// Line 557, Address: 0x2b9ad4, Func Offset: 0x7b4
	// Line 556, Address: 0x2b9ad8, Func Offset: 0x7b8
	// Line 554, Address: 0x2b9adc, Func Offset: 0x7bc
	// Line 556, Address: 0x2b9ae0, Func Offset: 0x7c0
	// Line 555, Address: 0x2b9ae4, Func Offset: 0x7c4
	// Line 557, Address: 0x2b9af4, Func Offset: 0x7d4
	// Line 555, Address: 0x2b9af8, Func Offset: 0x7d8
	// Line 557, Address: 0x2b9b08, Func Offset: 0x7e8
	// Line 556, Address: 0x2b9b10, Func Offset: 0x7f0
	// Line 557, Address: 0x2b9b14, Func Offset: 0x7f4
	// Line 555, Address: 0x2b9b18, Func Offset: 0x7f8
	// Line 556, Address: 0x2b9b28, Func Offset: 0x808
	// Line 555, Address: 0x2b9b2c, Func Offset: 0x80c
	// Line 556, Address: 0x2b9b34, Func Offset: 0x814
	// Line 557, Address: 0x2b9b60, Func Offset: 0x840
	// Line 556, Address: 0x2b9b64, Func Offset: 0x844
	// Line 557, Address: 0x2b9b9c, Func Offset: 0x87c
	// Line 560, Address: 0x2b9bbc, Func Offset: 0x89c
	// Line 561, Address: 0x2b9c00, Func Offset: 0x8e0
	// Line 562, Address: 0x2b9c44, Func Offset: 0x924
	// Line 561, Address: 0x2b9c48, Func Offset: 0x928
	// Line 562, Address: 0x2b9c4c, Func Offset: 0x92c
	// Line 563, Address: 0x2b9c60, Func Offset: 0x940
	// Line 562, Address: 0x2b9c64, Func Offset: 0x944
	// Line 563, Address: 0x2b9c68, Func Offset: 0x948
	// Line 564, Address: 0x2b9c7c, Func Offset: 0x95c
	// Line 566, Address: 0x2b9c84, Func Offset: 0x964
	// Line 564, Address: 0x2b9c98, Func Offset: 0x978
	// Line 566, Address: 0x2b9c9c, Func Offset: 0x97c
	// Line 565, Address: 0x2b9ca0, Func Offset: 0x980
	// Line 563, Address: 0x2b9ca4, Func Offset: 0x984
	// Line 565, Address: 0x2b9ca8, Func Offset: 0x988
	// Line 564, Address: 0x2b9cac, Func Offset: 0x98c
	// Line 566, Address: 0x2b9cbc, Func Offset: 0x99c
	// Line 564, Address: 0x2b9cc0, Func Offset: 0x9a0
	// Line 566, Address: 0x2b9cd0, Func Offset: 0x9b0
	// Line 565, Address: 0x2b9cd8, Func Offset: 0x9b8
	// Line 566, Address: 0x2b9cdc, Func Offset: 0x9bc
	// Line 564, Address: 0x2b9ce0, Func Offset: 0x9c0
	// Line 565, Address: 0x2b9cf0, Func Offset: 0x9d0
	// Line 564, Address: 0x2b9cf4, Func Offset: 0x9d4
	// Line 565, Address: 0x2b9cfc, Func Offset: 0x9dc
	// Line 566, Address: 0x2b9d28, Func Offset: 0xa08
	// Line 565, Address: 0x2b9d2c, Func Offset: 0xa0c
	// Line 566, Address: 0x2b9d64, Func Offset: 0xa44
	// Line 569, Address: 0x2b9d84, Func Offset: 0xa64
	// Line 570, Address: 0x2b9dc8, Func Offset: 0xaa8
	// Line 571, Address: 0x2b9e0c, Func Offset: 0xaec
	// Line 570, Address: 0x2b9e10, Func Offset: 0xaf0
	// Line 571, Address: 0x2b9e14, Func Offset: 0xaf4
	// Line 572, Address: 0x2b9e28, Func Offset: 0xb08
	// Line 571, Address: 0x2b9e2c, Func Offset: 0xb0c
	// Line 572, Address: 0x2b9e30, Func Offset: 0xb10
	// Line 573, Address: 0x2b9e44, Func Offset: 0xb24
	// Line 575, Address: 0x2b9e4c, Func Offset: 0xb2c
	// Line 573, Address: 0x2b9e60, Func Offset: 0xb40
	// Line 575, Address: 0x2b9e64, Func Offset: 0xb44
	// Line 574, Address: 0x2b9e68, Func Offset: 0xb48
	// Line 572, Address: 0x2b9e6c, Func Offset: 0xb4c
	// Line 574, Address: 0x2b9e70, Func Offset: 0xb50
	// Line 573, Address: 0x2b9e74, Func Offset: 0xb54
	// Line 575, Address: 0x2b9e84, Func Offset: 0xb64
	// Line 573, Address: 0x2b9e88, Func Offset: 0xb68
	// Line 575, Address: 0x2b9e98, Func Offset: 0xb78
	// Line 574, Address: 0x2b9ea0, Func Offset: 0xb80
	// Line 575, Address: 0x2b9ea4, Func Offset: 0xb84
	// Line 573, Address: 0x2b9ea8, Func Offset: 0xb88
	// Line 574, Address: 0x2b9eb8, Func Offset: 0xb98
	// Line 573, Address: 0x2b9ebc, Func Offset: 0xb9c
	// Line 574, Address: 0x2b9ec4, Func Offset: 0xba4
	// Line 575, Address: 0x2b9ef0, Func Offset: 0xbd0
	// Line 574, Address: 0x2b9ef4, Func Offset: 0xbd4
	// Line 575, Address: 0x2b9f2c, Func Offset: 0xc0c
	// Line 578, Address: 0x2b9f4c, Func Offset: 0xc2c
	// Line 579, Address: 0x2b9f90, Func Offset: 0xc70
	// Line 580, Address: 0x2b9fd4, Func Offset: 0xcb4
	// Line 579, Address: 0x2b9fd8, Func Offset: 0xcb8
	// Line 580, Address: 0x2b9fdc, Func Offset: 0xcbc
	// Line 581, Address: 0x2b9ff0, Func Offset: 0xcd0
	// Line 580, Address: 0x2b9ff4, Func Offset: 0xcd4
	// Line 581, Address: 0x2b9ff8, Func Offset: 0xcd8
	// Line 582, Address: 0x2ba00c, Func Offset: 0xcec
	// Line 584, Address: 0x2ba014, Func Offset: 0xcf4
	// Line 583, Address: 0x2ba018, Func Offset: 0xcf8
	// Line 582, Address: 0x2ba01c, Func Offset: 0xcfc
	// Line 583, Address: 0x2ba020, Func Offset: 0xd00
	// Line 584, Address: 0x2ba024, Func Offset: 0xd04
	// Line 582, Address: 0x2ba028, Func Offset: 0xd08
	// Line 581, Address: 0x2ba02c, Func Offset: 0xd0c
	// Line 582, Address: 0x2ba030, Func Offset: 0xd10
	// Line 584, Address: 0x2ba034, Func Offset: 0xd14
	// Line 582, Address: 0x2ba038, Func Offset: 0xd18
	// Line 584, Address: 0x2ba03c, Func Offset: 0xd1c
	// Line 582, Address: 0x2ba040, Func Offset: 0xd20
	// Line 584, Address: 0x2ba044, Func Offset: 0xd24
	// Line 582, Address: 0x2ba048, Func Offset: 0xd28
	// Line 584, Address: 0x2ba04c, Func Offset: 0xd2c
	// Line 582, Address: 0x2ba054, Func Offset: 0xd34
	// Line 584, Address: 0x2ba05c, Func Offset: 0xd3c
	// Line 582, Address: 0x2ba060, Func Offset: 0xd40
	// Line 584, Address: 0x2ba064, Func Offset: 0xd44
	// Line 583, Address: 0x2ba068, Func Offset: 0xd48
	// Line 584, Address: 0x2ba06c, Func Offset: 0xd4c
	// Line 582, Address: 0x2ba070, Func Offset: 0xd50
	// Line 583, Address: 0x2ba080, Func Offset: 0xd60
	// Line 582, Address: 0x2ba084, Func Offset: 0xd64
	// Line 583, Address: 0x2ba08c, Func Offset: 0xd6c
	// Line 584, Address: 0x2ba0b8, Func Offset: 0xd98
	// Line 583, Address: 0x2ba0bc, Func Offset: 0xd9c
	// Line 584, Address: 0x2ba0f4, Func Offset: 0xdd4
	// Line 585, Address: 0x2ba114, Func Offset: 0xdf4
	// Line 587, Address: 0x2ba120, Func Offset: 0xe00
	// Line 591, Address: 0x2ba128, Func Offset: 0xe08
	// Line 594, Address: 0x2ba130, Func Offset: 0xe10
	// Line 597, Address: 0x2ba138, Func Offset: 0xe18
	// Line 598, Address: 0x2ba140, Func Offset: 0xe20
	// Line 597, Address: 0x2ba144, Func Offset: 0xe24
	// Line 598, Address: 0x2ba158, Func Offset: 0xe38
	// Line 603, Address: 0x2ba190, Func Offset: 0xe70
	// Line 605, Address: 0x2ba198, Func Offset: 0xe78
	// Line 603, Address: 0x2ba1a4, Func Offset: 0xe84
	// Line 605, Address: 0x2ba1ac, Func Offset: 0xe8c
	// Line 608, Address: 0x2ba1cc, Func Offset: 0xeac
	// Line 607, Address: 0x2ba1d4, Func Offset: 0xeb4
	// Line 608, Address: 0x2ba1d8, Func Offset: 0xeb8
	// Line 607, Address: 0x2ba1dc, Func Offset: 0xebc
	// Line 605, Address: 0x2ba1e0, Func Offset: 0xec0
	// Line 608, Address: 0x2ba1e4, Func Offset: 0xec4
	// Line 607, Address: 0x2ba1e8, Func Offset: 0xec8
	// Line 608, Address: 0x2ba1f0, Func Offset: 0xed0
	// Line 610, Address: 0x2ba20c, Func Offset: 0xeec
	// Line 611, Address: 0x2ba214, Func Offset: 0xef4
	// Line 610, Address: 0x2ba21c, Func Offset: 0xefc
	// Line 611, Address: 0x2ba224, Func Offset: 0xf04
	// Line 610, Address: 0x2ba228, Func Offset: 0xf08
	// Line 608, Address: 0x2ba22c, Func Offset: 0xf0c
	// Line 610, Address: 0x2ba230, Func Offset: 0xf10
	// Line 611, Address: 0x2ba258, Func Offset: 0xf38
	// Line 610, Address: 0x2ba25c, Func Offset: 0xf3c
	// Line 611, Address: 0x2ba264, Func Offset: 0xf44
	// Line 613, Address: 0x2ba2c4, Func Offset: 0xfa4
	// Line 614, Address: 0x2ba318, Func Offset: 0xff8
	// Line 616, Address: 0x2ba36c, Func Offset: 0x104c
	// Line 617, Address: 0x2ba384, Func Offset: 0x1064
	// Line 616, Address: 0x2ba388, Func Offset: 0x1068
	// Line 614, Address: 0x2ba38c, Func Offset: 0x106c
	// Line 616, Address: 0x2ba390, Func Offset: 0x1070
	// Line 617, Address: 0x2ba3c4, Func Offset: 0x10a4
	// Line 618, Address: 0x2ba3d4, Func Offset: 0x10b4
	// Line 619, Address: 0x2ba3e4, Func Offset: 0x10c4
	// Line 620, Address: 0x2ba3e8, Func Offset: 0x10c8
	// Func End, Address: 0x2ba42c, Func Offset: 0x110c
}

// 
// Start address: 0x2ba430
void sfMorphDraw(_anon0* m)
{
	float rate;
	void* pk;
	float src_alpha;
	float dst_alpha;
	// Line 628, Address: 0x2ba430, Func Offset: 0
	// Line 635, Address: 0x2ba44c, Func Offset: 0x1c
	// Line 636, Address: 0x2ba460, Func Offset: 0x30
	// Line 638, Address: 0x2ba468, Func Offset: 0x38
	// Line 639, Address: 0x2ba480, Func Offset: 0x50
	// Line 641, Address: 0x2ba488, Func Offset: 0x58
	// Line 645, Address: 0x2ba4a0, Func Offset: 0x70
	// Line 647, Address: 0x2ba4b0, Func Offset: 0x80
	// Line 648, Address: 0x2ba4c8, Func Offset: 0x98
	// Line 650, Address: 0x2ba4d8, Func Offset: 0xa8
	// Line 652, Address: 0x2ba4e0, Func Offset: 0xb0
	// Line 653, Address: 0x2ba4f4, Func Offset: 0xc4
	// Line 652, Address: 0x2ba4f8, Func Offset: 0xc8
	// Line 656, Address: 0x2ba500, Func Offset: 0xd0
	// Line 657, Address: 0x2ba50c, Func Offset: 0xdc
	// Line 658, Address: 0x2ba524, Func Offset: 0xf4
	// Line 659, Address: 0x2ba538, Func Offset: 0x108
	// Line 661, Address: 0x2ba540, Func Offset: 0x110
	// Line 663, Address: 0x2ba550, Func Offset: 0x120
	// Line 664, Address: 0x2ba558, Func Offset: 0x128
	// Line 666, Address: 0x2ba564, Func Offset: 0x134
	// Line 669, Address: 0x2ba578, Func Offset: 0x148
	// Line 671, Address: 0x2ba580, Func Offset: 0x150
	// Line 674, Address: 0x2ba588, Func Offset: 0x158
	// Line 675, Address: 0x2ba5a0, Func Offset: 0x170
	// Line 676, Address: 0x2ba5b8, Func Offset: 0x188
	// Line 680, Address: 0x2ba5c0, Func Offset: 0x190
	// Line 681, Address: 0x2ba5cc, Func Offset: 0x19c
	// Line 682, Address: 0x2ba5e4, Func Offset: 0x1b4
	// Line 683, Address: 0x2ba5f8, Func Offset: 0x1c8
	// Line 685, Address: 0x2ba600, Func Offset: 0x1d0
	// Line 687, Address: 0x2ba610, Func Offset: 0x1e0
	// Line 688, Address: 0x2ba618, Func Offset: 0x1e8
	// Line 690, Address: 0x2ba624, Func Offset: 0x1f4
	// Line 693, Address: 0x2ba638, Func Offset: 0x208
	// Line 695, Address: 0x2ba640, Func Offset: 0x210
	// Line 698, Address: 0x2ba648, Func Offset: 0x218
	// Line 699, Address: 0x2ba660, Func Offset: 0x230
	// Line 702, Address: 0x2ba678, Func Offset: 0x248
	// Func End, Address: 0x2ba698, Func Offset: 0x268
}

// 
// Start address: 0x2ba6a0
unsigned long capture(unsigned int addr)
{
	void* pk;
	unsigned long tex0;
	unsigned int size;
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
	// Line 707, Address: 0x2ba6a0, Func Offset: 0
	// Line 708, Address: 0x2ba6c4, Func Offset: 0x24
	// Line 709, Address: 0x2ba6d4, Func Offset: 0x34
	// Line 708, Address: 0x2ba6d8, Func Offset: 0x38
	// Line 710, Address: 0x2ba6e0, Func Offset: 0x40
	// Line 712, Address: 0x2ba6f8, Func Offset: 0x58
	// Line 713, Address: 0x2ba70c, Func Offset: 0x6c
	// Line 715, Address: 0x2ba714, Func Offset: 0x74
	// Line 717, Address: 0x2ba724, Func Offset: 0x84
	// Line 718, Address: 0x2ba72c, Func Offset: 0x8c
	// Line 720, Address: 0x2ba738, Func Offset: 0x98
	// Line 725, Address: 0x2ba748, Func Offset: 0xa8
	// Line 720, Address: 0x2ba75c, Func Offset: 0xbc
	// Line 725, Address: 0x2ba760, Func Offset: 0xc0
	// Line 720, Address: 0x2ba764, Func Offset: 0xc4
	// Line 725, Address: 0x2ba774, Func Offset: 0xd4
	// Line 720, Address: 0x2ba778, Func Offset: 0xd8
	// Line 725, Address: 0x2ba77c, Func Offset: 0xdc
	// Line 726, Address: 0x2ba790, Func Offset: 0xf0
	// Line 732, Address: 0x2ba798, Func Offset: 0xf8
	// Line 726, Address: 0x2ba79c, Func Offset: 0xfc
	// Line 732, Address: 0x2ba7a0, Func Offset: 0x100
	// Line 736, Address: 0x2ba7a4, Func Offset: 0x104
	// Line 726, Address: 0x2ba7ac, Func Offset: 0x10c
	// Line 736, Address: 0x2ba7b0, Func Offset: 0x110
	// Line 726, Address: 0x2ba7b4, Func Offset: 0x114
	// Line 736, Address: 0x2ba7b8, Func Offset: 0x118
	// Line 726, Address: 0x2ba7bc, Func Offset: 0x11c
	// Line 739, Address: 0x2ba7c0, Func Offset: 0x120
	// Line 726, Address: 0x2ba7c4, Func Offset: 0x124
	// Line 739, Address: 0x2ba7cc, Func Offset: 0x12c
	// Line 726, Address: 0x2ba7d0, Func Offset: 0x130
	// Line 732, Address: 0x2ba7dc, Func Offset: 0x13c
	// Line 734, Address: 0x2ba7ec, Func Offset: 0x14c
	// Line 732, Address: 0x2ba7f0, Func Offset: 0x150
	// Line 734, Address: 0x2ba7f4, Func Offset: 0x154
	// Line 732, Address: 0x2ba7f8, Func Offset: 0x158
	// Line 737, Address: 0x2ba7fc, Func Offset: 0x15c
	// Line 734, Address: 0x2ba800, Func Offset: 0x160
	// Line 737, Address: 0x2ba804, Func Offset: 0x164
	// Line 742, Address: 0x2ba808, Func Offset: 0x168
	// Line 734, Address: 0x2ba80c, Func Offset: 0x16c
	// Line 742, Address: 0x2ba810, Func Offset: 0x170
	// Line 735, Address: 0x2ba814, Func Offset: 0x174
	// Line 736, Address: 0x2ba818, Func Offset: 0x178
	// Line 737, Address: 0x2ba81c, Func Offset: 0x17c
	// Line 738, Address: 0x2ba820, Func Offset: 0x180
	// Line 739, Address: 0x2ba828, Func Offset: 0x188
	// Line 740, Address: 0x2ba82c, Func Offset: 0x18c
	// Line 734, Address: 0x2ba830, Func Offset: 0x190
	// Line 742, Address: 0x2ba83c, Func Offset: 0x19c
	// Line 734, Address: 0x2ba840, Func Offset: 0x1a0
	// Line 735, Address: 0x2ba844, Func Offset: 0x1a4
	// Line 734, Address: 0x2ba848, Func Offset: 0x1a8
	// Line 743, Address: 0x2ba84c, Func Offset: 0x1ac
	// Line 735, Address: 0x2ba850, Func Offset: 0x1b0
	// Line 736, Address: 0x2ba864, Func Offset: 0x1c4
	// Line 735, Address: 0x2ba868, Func Offset: 0x1c8
	// Line 736, Address: 0x2ba86c, Func Offset: 0x1cc
	// Line 737, Address: 0x2ba880, Func Offset: 0x1e0
	// Line 736, Address: 0x2ba884, Func Offset: 0x1e4
	// Line 737, Address: 0x2ba888, Func Offset: 0x1e8
	// Line 738, Address: 0x2ba89c, Func Offset: 0x1fc
	// Line 737, Address: 0x2ba8a0, Func Offset: 0x200
	// Line 738, Address: 0x2ba8a4, Func Offset: 0x204
	// Line 739, Address: 0x2ba8b8, Func Offset: 0x218
	// Line 738, Address: 0x2ba8bc, Func Offset: 0x21c
	// Line 739, Address: 0x2ba8c0, Func Offset: 0x220
	// Line 740, Address: 0x2ba8d4, Func Offset: 0x234
	// Line 739, Address: 0x2ba8d8, Func Offset: 0x238
	// Line 740, Address: 0x2ba8dc, Func Offset: 0x23c
	// Line 742, Address: 0x2ba8f0, Func Offset: 0x250
	// Line 740, Address: 0x2ba8f4, Func Offset: 0x254
	// Line 742, Address: 0x2ba8f8, Func Offset: 0x258
	// Line 743, Address: 0x2ba90c, Func Offset: 0x26c
	// Line 742, Address: 0x2ba910, Func Offset: 0x270
	// Line 743, Address: 0x2ba914, Func Offset: 0x274
	// Line 744, Address: 0x2ba928, Func Offset: 0x288
	// Line 743, Address: 0x2ba92c, Func Offset: 0x28c
	// Line 744, Address: 0x2ba930, Func Offset: 0x290
	// Line 746, Address: 0x2ba980, Func Offset: 0x2e0
	// Line 744, Address: 0x2ba984, Func Offset: 0x2e4
	// Line 746, Address: 0x2ba998, Func Offset: 0x2f8
	// Line 749, Address: 0x2ba9b8, Func Offset: 0x318
	// Line 746, Address: 0x2ba9bc, Func Offset: 0x31c
	// Line 749, Address: 0x2ba9d0, Func Offset: 0x330
	// Line 755, Address: 0x2baa2c, Func Offset: 0x38c
	// Line 749, Address: 0x2baa30, Func Offset: 0x390
	// Line 755, Address: 0x2baa48, Func Offset: 0x3a8
	// Line 757, Address: 0x2baa94, Func Offset: 0x3f4
	// Line 759, Address: 0x2baa9c, Func Offset: 0x3fc
	// Line 762, Address: 0x2baaa4, Func Offset: 0x404
	// Line 763, Address: 0x2baabc, Func Offset: 0x41c
	// Line 765, Address: 0x2baad4, Func Offset: 0x434
	// Line 767, Address: 0x2baadc, Func Offset: 0x43c
	// Line 776, Address: 0x2bab08, Func Offset: 0x468
	// Line 778, Address: 0x2bab14, Func Offset: 0x474
	// Line 779, Address: 0x2bab18, Func Offset: 0x478
	// Func End, Address: 0x2bab40, Func Offset: 0x4a0
}

// 
// Start address: 0x2bab40
unsigned long sfMorphCapture(unsigned int addr)
{
	// Line 787, Address: 0x2bab40, Func Offset: 0
	// Func End, Address: 0x2bab48, Func Offset: 0x8
}

// 
// Start address: 0x2bab50
void MakePacket_capture_tex(_anon0* m, int src_dst, float rate, float alpha)
{
	unsigned int prim_num;
	int i;
	float src_v[4];
	float dst_v[4];
	_anon1* img;
	unsigned char a;
	float src_base_x;
	float dst_base_x;
	float src_base_y;
	float dst_base_y;
	float base_x;
	float base_y;
	float base_w;
	float base_h;
	float base_alpha_ratio;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	int x;
	int y;
	int u;
	int v;
	float q;
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
	int j;
	int x;
	int y;
	int index;
	float q;
	int u;
	int v;
	float vec[4];
	float ratio;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 794, Address: 0x2bab50, Func Offset: 0
	// Line 795, Address: 0x2bab54, Func Offset: 0x4
	// Line 794, Address: 0x2bab58, Func Offset: 0x8
	// Line 795, Address: 0x2bab5c, Func Offset: 0xc
	// Line 794, Address: 0x2bab60, Func Offset: 0x10
	// Line 801, Address: 0x2bab9c, Func Offset: 0x4c
	// Line 795, Address: 0x2baba0, Func Offset: 0x50
	// Line 801, Address: 0x2baba4, Func Offset: 0x54
	// Line 797, Address: 0x2baba8, Func Offset: 0x58
	// Line 802, Address: 0x2babac, Func Offset: 0x5c
	// Line 798, Address: 0x2babb0, Func Offset: 0x60
	// Line 802, Address: 0x2babb4, Func Offset: 0x64
	// Line 804, Address: 0x2babb8, Func Offset: 0x68
	// Line 795, Address: 0x2babc0, Func Offset: 0x70
	// Line 801, Address: 0x2babc4, Func Offset: 0x74
	// Line 795, Address: 0x2babcc, Func Offset: 0x7c
	// Line 802, Address: 0x2babd0, Func Offset: 0x80
	// Line 795, Address: 0x2babd4, Func Offset: 0x84
	// Line 809, Address: 0x2babd8, Func Offset: 0x88
	// Line 804, Address: 0x2babdc, Func Offset: 0x8c
	// Line 805, Address: 0x2babe0, Func Offset: 0x90
	// Line 803, Address: 0x2babec, Func Offset: 0x9c
	// Line 807, Address: 0x2babf4, Func Offset: 0xa4
	// Line 808, Address: 0x2babfc, Func Offset: 0xac
	// Line 805, Address: 0x2bac04, Func Offset: 0xb4
	// Line 803, Address: 0x2bac08, Func Offset: 0xb8
	// Line 806, Address: 0x2bac0c, Func Offset: 0xbc
	// Line 807, Address: 0x2bac10, Func Offset: 0xc0
	// Line 808, Address: 0x2bac14, Func Offset: 0xc4
	// Line 806, Address: 0x2bac18, Func Offset: 0xc8
	// Line 807, Address: 0x2bac1c, Func Offset: 0xcc
	// Line 808, Address: 0x2bac20, Func Offset: 0xd0
	// Line 806, Address: 0x2bac24, Func Offset: 0xd4
	// Line 807, Address: 0x2bac28, Func Offset: 0xd8
	// Line 809, Address: 0x2bac2c, Func Offset: 0xdc
	// Line 811, Address: 0x2bac60, Func Offset: 0x110
	// Line 809, Address: 0x2bac64, Func Offset: 0x114
	// Line 811, Address: 0x2bac78, Func Offset: 0x128
	// Line 814, Address: 0x2bac90, Func Offset: 0x140
	// Line 816, Address: 0x2bac98, Func Offset: 0x148
	// Line 818, Address: 0x2bac9c, Func Offset: 0x14c
	// Line 819, Address: 0x2baca0, Func Offset: 0x150
	// Line 820, Address: 0x2baca4, Func Offset: 0x154
	// Line 822, Address: 0x2baca8, Func Offset: 0x158
	// Line 820, Address: 0x2bacac, Func Offset: 0x15c
	// Line 822, Address: 0x2bacbc, Func Offset: 0x16c
	// Line 829, Address: 0x2bacc4, Func Offset: 0x174
	// Line 830, Address: 0x2bad08, Func Offset: 0x1b8
	// Line 829, Address: 0x2bad0c, Func Offset: 0x1bc
	// Line 830, Address: 0x2bad20, Func Offset: 0x1d0
	// Line 829, Address: 0x2bad24, Func Offset: 0x1d4
	// Line 830, Address: 0x2bad30, Func Offset: 0x1e0
	// Line 829, Address: 0x2bad34, Func Offset: 0x1e4
	// Line 831, Address: 0x2bad38, Func Offset: 0x1e8
	// Line 829, Address: 0x2bad3c, Func Offset: 0x1ec
	// Line 831, Address: 0x2bad40, Func Offset: 0x1f0
	// Line 830, Address: 0x2bad44, Func Offset: 0x1f4
	// Line 836, Address: 0x2bad48, Func Offset: 0x1f8
	// Line 831, Address: 0x2bad50, Func Offset: 0x200
	// Line 836, Address: 0x2bad54, Func Offset: 0x204
	// Line 833, Address: 0x2bad58, Func Offset: 0x208
	// Line 834, Address: 0x2bad60, Func Offset: 0x210
	// Line 836, Address: 0x2bad64, Func Offset: 0x214
	// Line 830, Address: 0x2bad68, Func Offset: 0x218
	// Line 831, Address: 0x2bad80, Func Offset: 0x230
	// Line 830, Address: 0x2bad84, Func Offset: 0x234
	// Line 831, Address: 0x2bad8c, Func Offset: 0x23c
	// Line 833, Address: 0x2bada8, Func Offset: 0x258
	// Line 831, Address: 0x2badac, Func Offset: 0x25c
	// Line 833, Address: 0x2badb4, Func Offset: 0x264
	// Line 834, Address: 0x2badd0, Func Offset: 0x280
	// Line 833, Address: 0x2badd4, Func Offset: 0x284
	// Line 834, Address: 0x2baddc, Func Offset: 0x28c
	// Line 836, Address: 0x2badfc, Func Offset: 0x2ac
	// Line 839, Address: 0x2bae04, Func Offset: 0x2b4
	// Line 843, Address: 0x2bae08, Func Offset: 0x2b8
	// Line 844, Address: 0x2bae4c, Func Offset: 0x2fc
	// Line 845, Address: 0x2bae90, Func Offset: 0x340
	// Line 844, Address: 0x2bae94, Func Offset: 0x344
	// Line 845, Address: 0x2bae98, Func Offset: 0x348
	// Line 846, Address: 0x2baeac, Func Offset: 0x35c
	// Line 845, Address: 0x2baeb0, Func Offset: 0x360
	// Line 846, Address: 0x2baeb4, Func Offset: 0x364
	// Line 847, Address: 0x2baec8, Func Offset: 0x378
	// Line 849, Address: 0x2baed0, Func Offset: 0x380
	// Line 847, Address: 0x2baee4, Func Offset: 0x394
	// Line 849, Address: 0x2baee8, Func Offset: 0x398
	// Line 848, Address: 0x2baeec, Func Offset: 0x39c
	// Line 846, Address: 0x2baef0, Func Offset: 0x3a0
	// Line 848, Address: 0x2baef4, Func Offset: 0x3a4
	// Line 847, Address: 0x2baef8, Func Offset: 0x3a8
	// Line 849, Address: 0x2baf08, Func Offset: 0x3b8
	// Line 847, Address: 0x2baf0c, Func Offset: 0x3bc
	// Line 849, Address: 0x2baf1c, Func Offset: 0x3cc
	// Line 848, Address: 0x2baf24, Func Offset: 0x3d4
	// Line 849, Address: 0x2baf28, Func Offset: 0x3d8
	// Line 847, Address: 0x2baf2c, Func Offset: 0x3dc
	// Line 848, Address: 0x2baf3c, Func Offset: 0x3ec
	// Line 847, Address: 0x2baf40, Func Offset: 0x3f0
	// Line 848, Address: 0x2baf48, Func Offset: 0x3f8
	// Line 849, Address: 0x2baf74, Func Offset: 0x424
	// Line 848, Address: 0x2baf78, Func Offset: 0x428
	// Line 849, Address: 0x2bafb0, Func Offset: 0x460
	// Line 852, Address: 0x2bafd0, Func Offset: 0x480
	// Line 853, Address: 0x2bb014, Func Offset: 0x4c4
	// Line 854, Address: 0x2bb058, Func Offset: 0x508
	// Line 853, Address: 0x2bb05c, Func Offset: 0x50c
	// Line 854, Address: 0x2bb060, Func Offset: 0x510
	// Line 855, Address: 0x2bb074, Func Offset: 0x524
	// Line 854, Address: 0x2bb078, Func Offset: 0x528
	// Line 855, Address: 0x2bb07c, Func Offset: 0x52c
	// Line 856, Address: 0x2bb090, Func Offset: 0x540
	// Line 858, Address: 0x2bb098, Func Offset: 0x548
	// Line 856, Address: 0x2bb0ac, Func Offset: 0x55c
	// Line 858, Address: 0x2bb0b0, Func Offset: 0x560
	// Line 857, Address: 0x2bb0b4, Func Offset: 0x564
	// Line 855, Address: 0x2bb0b8, Func Offset: 0x568
	// Line 857, Address: 0x2bb0bc, Func Offset: 0x56c
	// Line 856, Address: 0x2bb0c0, Func Offset: 0x570
	// Line 858, Address: 0x2bb0d0, Func Offset: 0x580
	// Line 856, Address: 0x2bb0d4, Func Offset: 0x584
	// Line 858, Address: 0x2bb0e4, Func Offset: 0x594
	// Line 857, Address: 0x2bb0ec, Func Offset: 0x59c
	// Line 858, Address: 0x2bb0f0, Func Offset: 0x5a0
	// Line 856, Address: 0x2bb0f4, Func Offset: 0x5a4
	// Line 857, Address: 0x2bb104, Func Offset: 0x5b4
	// Line 856, Address: 0x2bb108, Func Offset: 0x5b8
	// Line 857, Address: 0x2bb110, Func Offset: 0x5c0
	// Line 858, Address: 0x2bb13c, Func Offset: 0x5ec
	// Line 857, Address: 0x2bb140, Func Offset: 0x5f0
	// Line 858, Address: 0x2bb178, Func Offset: 0x628
	// Line 861, Address: 0x2bb198, Func Offset: 0x648
	// Line 862, Address: 0x2bb1dc, Func Offset: 0x68c
	// Line 863, Address: 0x2bb220, Func Offset: 0x6d0
	// Line 862, Address: 0x2bb224, Func Offset: 0x6d4
	// Line 863, Address: 0x2bb228, Func Offset: 0x6d8
	// Line 864, Address: 0x2bb23c, Func Offset: 0x6ec
	// Line 863, Address: 0x2bb240, Func Offset: 0x6f0
	// Line 864, Address: 0x2bb244, Func Offset: 0x6f4
	// Line 865, Address: 0x2bb258, Func Offset: 0x708
	// Line 867, Address: 0x2bb260, Func Offset: 0x710
	// Line 865, Address: 0x2bb274, Func Offset: 0x724
	// Line 867, Address: 0x2bb278, Func Offset: 0x728
	// Line 866, Address: 0x2bb27c, Func Offset: 0x72c
	// Line 864, Address: 0x2bb280, Func Offset: 0x730
	// Line 866, Address: 0x2bb284, Func Offset: 0x734
	// Line 865, Address: 0x2bb288, Func Offset: 0x738
	// Line 867, Address: 0x2bb298, Func Offset: 0x748
	// Line 865, Address: 0x2bb29c, Func Offset: 0x74c
	// Line 867, Address: 0x2bb2ac, Func Offset: 0x75c
	// Line 866, Address: 0x2bb2b4, Func Offset: 0x764
	// Line 867, Address: 0x2bb2b8, Func Offset: 0x768
	// Line 865, Address: 0x2bb2bc, Func Offset: 0x76c
	// Line 866, Address: 0x2bb2cc, Func Offset: 0x77c
	// Line 865, Address: 0x2bb2d0, Func Offset: 0x780
	// Line 866, Address: 0x2bb2d8, Func Offset: 0x788
	// Line 867, Address: 0x2bb304, Func Offset: 0x7b4
	// Line 866, Address: 0x2bb308, Func Offset: 0x7b8
	// Line 867, Address: 0x2bb340, Func Offset: 0x7f0
	// Line 870, Address: 0x2bb360, Func Offset: 0x810
	// Line 871, Address: 0x2bb3a4, Func Offset: 0x854
	// Line 872, Address: 0x2bb3e8, Func Offset: 0x898
	// Line 871, Address: 0x2bb3ec, Func Offset: 0x89c
	// Line 872, Address: 0x2bb3f0, Func Offset: 0x8a0
	// Line 873, Address: 0x2bb404, Func Offset: 0x8b4
	// Line 872, Address: 0x2bb408, Func Offset: 0x8b8
	// Line 873, Address: 0x2bb40c, Func Offset: 0x8bc
	// Line 874, Address: 0x2bb420, Func Offset: 0x8d0
	// Line 876, Address: 0x2bb428, Func Offset: 0x8d8
	// Line 874, Address: 0x2bb43c, Func Offset: 0x8ec
	// Line 876, Address: 0x2bb440, Func Offset: 0x8f0
	// Line 875, Address: 0x2bb444, Func Offset: 0x8f4
	// Line 873, Address: 0x2bb448, Func Offset: 0x8f8
	// Line 875, Address: 0x2bb44c, Func Offset: 0x8fc
	// Line 874, Address: 0x2bb450, Func Offset: 0x900
	// Line 876, Address: 0x2bb460, Func Offset: 0x910
	// Line 874, Address: 0x2bb464, Func Offset: 0x914
	// Line 876, Address: 0x2bb474, Func Offset: 0x924
	// Line 875, Address: 0x2bb47c, Func Offset: 0x92c
	// Line 876, Address: 0x2bb480, Func Offset: 0x930
	// Line 874, Address: 0x2bb484, Func Offset: 0x934
	// Line 875, Address: 0x2bb494, Func Offset: 0x944
	// Line 874, Address: 0x2bb498, Func Offset: 0x948
	// Line 875, Address: 0x2bb4a0, Func Offset: 0x950
	// Line 876, Address: 0x2bb4cc, Func Offset: 0x97c
	// Line 875, Address: 0x2bb4d0, Func Offset: 0x980
	// Line 876, Address: 0x2bb508, Func Offset: 0x9b8
	// Line 879, Address: 0x2bb528, Func Offset: 0x9d8
	// Line 880, Address: 0x2bb56c, Func Offset: 0xa1c
	// Line 881, Address: 0x2bb5b0, Func Offset: 0xa60
	// Line 880, Address: 0x2bb5b4, Func Offset: 0xa64
	// Line 881, Address: 0x2bb5b8, Func Offset: 0xa68
	// Line 882, Address: 0x2bb5cc, Func Offset: 0xa7c
	// Line 881, Address: 0x2bb5d0, Func Offset: 0xa80
	// Line 882, Address: 0x2bb5d4, Func Offset: 0xa84
	// Line 883, Address: 0x2bb5e8, Func Offset: 0xa98
	// Line 885, Address: 0x2bb5f0, Func Offset: 0xaa0
	// Line 883, Address: 0x2bb604, Func Offset: 0xab4
	// Line 885, Address: 0x2bb608, Func Offset: 0xab8
	// Line 884, Address: 0x2bb60c, Func Offset: 0xabc
	// Line 882, Address: 0x2bb610, Func Offset: 0xac0
	// Line 884, Address: 0x2bb614, Func Offset: 0xac4
	// Line 883, Address: 0x2bb618, Func Offset: 0xac8
	// Line 885, Address: 0x2bb628, Func Offset: 0xad8
	// Line 883, Address: 0x2bb62c, Func Offset: 0xadc
	// Line 885, Address: 0x2bb63c, Func Offset: 0xaec
	// Line 884, Address: 0x2bb644, Func Offset: 0xaf4
	// Line 885, Address: 0x2bb648, Func Offset: 0xaf8
	// Line 883, Address: 0x2bb64c, Func Offset: 0xafc
	// Line 884, Address: 0x2bb65c, Func Offset: 0xb0c
	// Line 883, Address: 0x2bb660, Func Offset: 0xb10
	// Line 884, Address: 0x2bb668, Func Offset: 0xb18
	// Line 885, Address: 0x2bb694, Func Offset: 0xb44
	// Line 884, Address: 0x2bb698, Func Offset: 0xb48
	// Line 885, Address: 0x2bb6d0, Func Offset: 0xb80
	// Line 888, Address: 0x2bb6f0, Func Offset: 0xba0
	// Line 889, Address: 0x2bb734, Func Offset: 0xbe4
	// Line 890, Address: 0x2bb778, Func Offset: 0xc28
	// Line 889, Address: 0x2bb77c, Func Offset: 0xc2c
	// Line 890, Address: 0x2bb780, Func Offset: 0xc30
	// Line 891, Address: 0x2bb794, Func Offset: 0xc44
	// Line 890, Address: 0x2bb798, Func Offset: 0xc48
	// Line 891, Address: 0x2bb79c, Func Offset: 0xc4c
	// Line 892, Address: 0x2bb7b0, Func Offset: 0xc60
	// Line 894, Address: 0x2bb7b8, Func Offset: 0xc68
	// Line 893, Address: 0x2bb7bc, Func Offset: 0xc6c
	// Line 892, Address: 0x2bb7c0, Func Offset: 0xc70
	// Line 893, Address: 0x2bb7c4, Func Offset: 0xc74
	// Line 894, Address: 0x2bb7c8, Func Offset: 0xc78
	// Line 892, Address: 0x2bb7cc, Func Offset: 0xc7c
	// Line 891, Address: 0x2bb7d0, Func Offset: 0xc80
	// Line 892, Address: 0x2bb7d4, Func Offset: 0xc84
	// Line 894, Address: 0x2bb7d8, Func Offset: 0xc88
	// Line 892, Address: 0x2bb7dc, Func Offset: 0xc8c
	// Line 894, Address: 0x2bb7e0, Func Offset: 0xc90
	// Line 892, Address: 0x2bb7e4, Func Offset: 0xc94
	// Line 894, Address: 0x2bb7e8, Func Offset: 0xc98
	// Line 892, Address: 0x2bb7ec, Func Offset: 0xc9c
	// Line 894, Address: 0x2bb7f0, Func Offset: 0xca0
	// Line 892, Address: 0x2bb7f8, Func Offset: 0xca8
	// Line 894, Address: 0x2bb800, Func Offset: 0xcb0
	// Line 892, Address: 0x2bb804, Func Offset: 0xcb4
	// Line 894, Address: 0x2bb808, Func Offset: 0xcb8
	// Line 893, Address: 0x2bb80c, Func Offset: 0xcbc
	// Line 894, Address: 0x2bb810, Func Offset: 0xcc0
	// Line 892, Address: 0x2bb814, Func Offset: 0xcc4
	// Line 893, Address: 0x2bb824, Func Offset: 0xcd4
	// Line 892, Address: 0x2bb828, Func Offset: 0xcd8
	// Line 893, Address: 0x2bb830, Func Offset: 0xce0
	// Line 894, Address: 0x2bb85c, Func Offset: 0xd0c
	// Line 893, Address: 0x2bb860, Func Offset: 0xd10
	// Line 894, Address: 0x2bb898, Func Offset: 0xd48
	// Line 895, Address: 0x2bb8b8, Func Offset: 0xd68
	// Line 897, Address: 0x2bb8c0, Func Offset: 0xd70
	// Line 901, Address: 0x2bb8c8, Func Offset: 0xd78
	// Line 904, Address: 0x2bb8d0, Func Offset: 0xd80
	// Line 907, Address: 0x2bb8d8, Func Offset: 0xd88
	// Line 908, Address: 0x2bb8e0, Func Offset: 0xd90
	// Line 907, Address: 0x2bb8e4, Func Offset: 0xd94
	// Line 908, Address: 0x2bb8f8, Func Offset: 0xda8
	// Line 913, Address: 0x2bb930, Func Offset: 0xde0
	// Line 916, Address: 0x2bb938, Func Offset: 0xde8
	// Line 913, Address: 0x2bb944, Func Offset: 0xdf4
	// Line 916, Address: 0x2bb94c, Func Offset: 0xdfc
	// Line 919, Address: 0x2bb96c, Func Offset: 0xe1c
	// Line 918, Address: 0x2bb974, Func Offset: 0xe24
	// Line 919, Address: 0x2bb978, Func Offset: 0xe28
	// Line 918, Address: 0x2bb97c, Func Offset: 0xe2c
	// Line 916, Address: 0x2bb980, Func Offset: 0xe30
	// Line 919, Address: 0x2bb984, Func Offset: 0xe34
	// Line 918, Address: 0x2bb988, Func Offset: 0xe38
	// Line 919, Address: 0x2bb990, Func Offset: 0xe40
	// Line 921, Address: 0x2bb9ac, Func Offset: 0xe5c
	// Line 922, Address: 0x2bb9b4, Func Offset: 0xe64
	// Line 921, Address: 0x2bb9bc, Func Offset: 0xe6c
	// Line 922, Address: 0x2bb9c4, Func Offset: 0xe74
	// Line 921, Address: 0x2bb9c8, Func Offset: 0xe78
	// Line 919, Address: 0x2bb9cc, Func Offset: 0xe7c
	// Line 921, Address: 0x2bb9d0, Func Offset: 0xe80
	// Line 922, Address: 0x2bb9f8, Func Offset: 0xea8
	// Line 921, Address: 0x2bb9fc, Func Offset: 0xeac
	// Line 922, Address: 0x2bba04, Func Offset: 0xeb4
	// Line 924, Address: 0x2bba64, Func Offset: 0xf14
	// Line 925, Address: 0x2bbab8, Func Offset: 0xf68
	// Line 927, Address: 0x2bbb0c, Func Offset: 0xfbc
	// Line 928, Address: 0x2bbb24, Func Offset: 0xfd4
	// Line 927, Address: 0x2bbb28, Func Offset: 0xfd8
	// Line 925, Address: 0x2bbb2c, Func Offset: 0xfdc
	// Line 927, Address: 0x2bbb30, Func Offset: 0xfe0
	// Line 928, Address: 0x2bbb64, Func Offset: 0x1014
	// Line 929, Address: 0x2bbb74, Func Offset: 0x1024
	// Line 930, Address: 0x2bbb84, Func Offset: 0x1034
	// Line 931, Address: 0x2bbb88, Func Offset: 0x1038
	// Func End, Address: 0x2bbbcc, Func Offset: 0x107c
}

// 
// Start address: 0x2bbbd0
int sfMorphFilter(_anon0* m)
{
	int rtv;
	float rate;
	void* pk;
	unsigned int addr;
	float src_alpha;
	float dst_alpha;
	// Line 937, Address: 0x2bbbd0, Func Offset: 0
	// Line 943, Address: 0x2bbbf0, Func Offset: 0x20
	// Line 946, Address: 0x2bbbf8, Func Offset: 0x28
	// Line 947, Address: 0x2bbc10, Func Offset: 0x40
	// Line 949, Address: 0x2bbc18, Func Offset: 0x48
	// Line 950, Address: 0x2bbc30, Func Offset: 0x60
	// Line 954, Address: 0x2bbc38, Func Offset: 0x68
	// Line 956, Address: 0x2bbc40, Func Offset: 0x70
	// Line 958, Address: 0x2bbc4c, Func Offset: 0x7c
	// Line 960, Address: 0x2bbc5c, Func Offset: 0x8c
	// Line 961, Address: 0x2bbc74, Func Offset: 0xa4
	// Line 963, Address: 0x2bbc84, Func Offset: 0xb4
	// Line 965, Address: 0x2bbc90, Func Offset: 0xc0
	// Line 966, Address: 0x2bbca4, Func Offset: 0xd4
	// Line 965, Address: 0x2bbca8, Func Offset: 0xd8
	// Line 969, Address: 0x2bbcb0, Func Offset: 0xe0
	// Line 970, Address: 0x2bbcc8, Func Offset: 0xf8
	// Line 971, Address: 0x2bbcdc, Func Offset: 0x10c
	// Line 973, Address: 0x2bbce4, Func Offset: 0x114
	// Line 975, Address: 0x2bbcf4, Func Offset: 0x124
	// Line 976, Address: 0x2bbcfc, Func Offset: 0x12c
	// Line 978, Address: 0x2bbd08, Func Offset: 0x138
	// Line 981, Address: 0x2bbd1c, Func Offset: 0x14c
	// Line 983, Address: 0x2bbd24, Func Offset: 0x154
	// Line 986, Address: 0x2bbd2c, Func Offset: 0x15c
	// Line 987, Address: 0x2bbd44, Func Offset: 0x174
	// Line 988, Address: 0x2bbd5c, Func Offset: 0x18c
	// Line 989, Address: 0x2bbd64, Func Offset: 0x194
	// Line 991, Address: 0x2bbd68, Func Offset: 0x198
	// Line 992, Address: 0x2bbd80, Func Offset: 0x1b0
	// Line 993, Address: 0x2bbd94, Func Offset: 0x1c4
	// Line 995, Address: 0x2bbd9c, Func Offset: 0x1cc
	// Line 997, Address: 0x2bbdac, Func Offset: 0x1dc
	// Line 998, Address: 0x2bbdb4, Func Offset: 0x1e4
	// Line 1000, Address: 0x2bbdc0, Func Offset: 0x1f0
	// Line 1003, Address: 0x2bbdd4, Func Offset: 0x204
	// Line 1005, Address: 0x2bbddc, Func Offset: 0x20c
	// Line 1008, Address: 0x2bbde4, Func Offset: 0x214
	// Line 1009, Address: 0x2bbdfc, Func Offset: 0x22c
	// Line 1010, Address: 0x2bbe14, Func Offset: 0x244
	// Line 1012, Address: 0x2bbe18, Func Offset: 0x248
	// Line 1013, Address: 0x2bbe20, Func Offset: 0x250
	// Func End, Address: 0x2bbe44, Func Offset: 0x274
}

