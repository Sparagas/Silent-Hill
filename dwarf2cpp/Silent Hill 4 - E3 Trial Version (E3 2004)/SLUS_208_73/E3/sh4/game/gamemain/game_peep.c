typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;


typedef unsigned char type_0[2];
typedef unsigned int type_1[4];

struct _anon0
{
	float x;
	float y;
	float scale;
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

struct _anon2
{
	_anon1* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
};

struct _anon3
{
	unsigned int cbp;
	unsigned int ofs;
};

struct _anon4
{
	unsigned long reg_alpha;
	unsigned long reg_prim;
	unsigned long reg_test;
	_anon2 tex_data;
	_anon3 clut_data;
	unsigned short ot;
	unsigned short z;
};

struct _anon5
{
	_anon4 base;
	float x;
	float y;
	float w;
	float h;
	int u0;
	int v0;
	int u1;
	int v1;
	unsigned int col[4];
	float rot;
	float scale_x;
	float scale_y;
	int ofs_x;
	int ofs_y;
	unsigned char sprite_flag;
};

_anon0 peeping_work;
unsigned long* sg_packet_cur;

void GamePeepInit();
_anon0* GamePeepGetWork();
void GamePeepShakeUp();
void GamePeepShakeDown();
void GamePeepShakeBig();
void GamePeepShakeSmall();
void GamePeep(int which_peep);
void CopyMainBuffer(_anon1* tex);
void DrawLens(_anon1* tex);
void HoleDraw(int which_peep);

// 
// Start address: 0x272410
void GamePeepInit()
{
	// Line 69, Address: 0x272410, Func Offset: 0
	// Func End, Address: 0x272418, Func Offset: 0x8
}

// 
// Start address: 0x272420
_anon0* GamePeepGetWork()
{
	// Line 75, Address: 0x272420, Func Offset: 0
	// Line 76, Address: 0x272424, Func Offset: 0x4
	// Func End, Address: 0x27242c, Func Offset: 0xc
}

// 
// Start address: 0x272430
void GamePeepShakeUp()
{
	_anon0* wk;
	// Line 81, Address: 0x272430, Func Offset: 0
	// Line 82, Address: 0x272438, Func Offset: 0x8
	// Line 83, Address: 0x272440, Func Offset: 0x10
	// Line 84, Address: 0x272458, Func Offset: 0x28
	// Func End, Address: 0x272464, Func Offset: 0x34
}

// 
// Start address: 0x272470
void GamePeepShakeDown()
{
	_anon0* wk;
	// Line 87, Address: 0x272470, Func Offset: 0
	// Line 88, Address: 0x272478, Func Offset: 0x8
	// Line 89, Address: 0x272480, Func Offset: 0x10
	// Line 90, Address: 0x272498, Func Offset: 0x28
	// Func End, Address: 0x2724a4, Func Offset: 0x34
}

// 
// Start address: 0x2724b0
void GamePeepShakeBig()
{
	_anon0* wk;
	// Line 93, Address: 0x2724b0, Func Offset: 0
	// Line 94, Address: 0x2724b8, Func Offset: 0x8
	// Line 95, Address: 0x2724c0, Func Offset: 0x10
	// Line 96, Address: 0x2724dc, Func Offset: 0x2c
	// Func End, Address: 0x2724e8, Func Offset: 0x38
}

// 
// Start address: 0x2724f0
void GamePeepShakeSmall()
{
	_anon0* wk;
	// Line 99, Address: 0x2724f0, Func Offset: 0
	// Line 100, Address: 0x2724f8, Func Offset: 0x8
	// Line 101, Address: 0x272500, Func Offset: 0x10
	// Line 102, Address: 0x27251c, Func Offset: 0x2c
	// Func End, Address: 0x272528, Func Offset: 0x38
}

// 
// Start address: 0x272530
void GamePeep(int which_peep)
{
	_anon1 hole_tex;
	_anon0* wk;
	// Line 107, Address: 0x272530, Func Offset: 0
	// Line 110, Address: 0x27253c, Func Offset: 0xc
	// Line 111, Address: 0x27254c, Func Offset: 0x1c
	// Line 112, Address: 0x272554, Func Offset: 0x24
	// Line 113, Address: 0x272560, Func Offset: 0x30
	// Line 114, Address: 0x272568, Func Offset: 0x38
	// Line 115, Address: 0x272580, Func Offset: 0x50
	// Line 116, Address: 0x27258c, Func Offset: 0x5c
	// Line 121, Address: 0x272590, Func Offset: 0x60
	// Line 122, Address: 0x272598, Func Offset: 0x68
	// Line 123, Address: 0x2725a0, Func Offset: 0x70
	// Line 129, Address: 0x2725a8, Func Offset: 0x78
	// Line 146, Address: 0x2725b0, Func Offset: 0x80
	// Func End, Address: 0x2725c0, Func Offset: 0x90
}

// 
// Start address: 0x2725c0
void CopyMainBuffer(_anon1* tex)
{
	unsigned long* pk;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 151, Address: 0x2725c0, Func Offset: 0
	// Line 155, Address: 0x2725d0, Func Offset: 0x10
	// Line 156, Address: 0x2725d8, Func Offset: 0x18
	// Line 159, Address: 0x272600, Func Offset: 0x40
	// Line 160, Address: 0x272618, Func Offset: 0x58
	// Line 161, Address: 0x272620, Func Offset: 0x60
	// Line 162, Address: 0x272628, Func Offset: 0x68
	// Line 165, Address: 0x272634, Func Offset: 0x74
	// Line 163, Address: 0x272638, Func Offset: 0x78
	// Line 165, Address: 0x27263c, Func Offset: 0x7c
	// Line 163, Address: 0x272640, Func Offset: 0x80
	// Line 165, Address: 0x272644, Func Offset: 0x84
	// Line 163, Address: 0x272648, Func Offset: 0x88
	// Line 165, Address: 0x27264c, Func Offset: 0x8c
	// Line 163, Address: 0x272650, Func Offset: 0x90
	// Line 167, Address: 0x272654, Func Offset: 0x94
	// Line 165, Address: 0x272658, Func Offset: 0x98
	// Line 167, Address: 0x27265c, Func Offset: 0x9c
	// Line 166, Address: 0x272660, Func Offset: 0xa0
	// Line 167, Address: 0x272664, Func Offset: 0xa4
	// Line 163, Address: 0x272670, Func Offset: 0xb0
	// Line 168, Address: 0x272678, Func Offset: 0xb8
	// Line 163, Address: 0x27267c, Func Offset: 0xbc
	// Line 165, Address: 0x272684, Func Offset: 0xc4
	// Line 163, Address: 0x272688, Func Offset: 0xc8
	// Line 168, Address: 0x27268c, Func Offset: 0xcc
	// Line 165, Address: 0x272690, Func Offset: 0xd0
	// Line 166, Address: 0x2726a4, Func Offset: 0xe4
	// Line 165, Address: 0x2726a8, Func Offset: 0xe8
	// Line 166, Address: 0x2726ac, Func Offset: 0xec
	// Line 167, Address: 0x2726c0, Func Offset: 0x100
	// Line 166, Address: 0x2726c4, Func Offset: 0x104
	// Line 167, Address: 0x2726c8, Func Offset: 0x108
	// Line 168, Address: 0x2726dc, Func Offset: 0x11c
	// Line 167, Address: 0x2726e0, Func Offset: 0x120
	// Line 168, Address: 0x2726e4, Func Offset: 0x124
	// Line 169, Address: 0x2726f8, Func Offset: 0x138
	// Line 170, Address: 0x272700, Func Offset: 0x140
	// Line 171, Address: 0x272718, Func Offset: 0x158
	// Line 174, Address: 0x272730, Func Offset: 0x170
	// Func End, Address: 0x272744, Func Offset: 0x184
}

// 
// Start address: 0x272750
void DrawLens(_anon1* tex)
{
	int x;
	int y;
	int i;
	int j;
	unsigned long tex0;
	unsigned long* pk;
	_anon0* wk;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	int length;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 179, Address: 0x272750, Func Offset: 0
	// Line 182, Address: 0x272754, Func Offset: 0x4
	// Line 179, Address: 0x272758, Func Offset: 0x8
	// Line 182, Address: 0x27275c, Func Offset: 0xc
	// Line 179, Address: 0x272760, Func Offset: 0x10
	// Line 182, Address: 0x27278c, Func Offset: 0x3c
	// Line 184, Address: 0x272794, Func Offset: 0x44
	// Line 186, Address: 0x27279c, Func Offset: 0x4c
	// Line 187, Address: 0x2727a4, Func Offset: 0x54
	// Line 189, Address: 0x2727a8, Func Offset: 0x58
	// Line 190, Address: 0x2727c0, Func Offset: 0x70
	// Line 191, Address: 0x2727c8, Func Offset: 0x78
	// Line 192, Address: 0x2727d8, Func Offset: 0x88
	// Line 193, Address: 0x2727e0, Func Offset: 0x90
	// Line 194, Address: 0x2727ec, Func Offset: 0x9c
	// Line 198, Address: 0x2727f0, Func Offset: 0xa0
	// Line 194, Address: 0x2727f4, Func Offset: 0xa4
	// Line 198, Address: 0x2727f8, Func Offset: 0xa8
	// Line 200, Address: 0x2727fc, Func Offset: 0xac
	// Line 194, Address: 0x272800, Func Offset: 0xb0
	// Line 200, Address: 0x272808, Func Offset: 0xb8
	// Line 195, Address: 0x27280c, Func Offset: 0xbc
	// Line 196, Address: 0x272814, Func Offset: 0xc4
	// Line 197, Address: 0x272818, Func Offset: 0xc8
	// Line 198, Address: 0x272820, Func Offset: 0xd0
	// Line 194, Address: 0x272824, Func Offset: 0xd4
	// Line 199, Address: 0x272830, Func Offset: 0xe0
	// Line 194, Address: 0x272834, Func Offset: 0xe4
	// Line 200, Address: 0x272838, Func Offset: 0xe8
	// Line 194, Address: 0x27283c, Func Offset: 0xec
	// Line 195, Address: 0x272840, Func Offset: 0xf0
	// Line 201, Address: 0x272844, Func Offset: 0xf4
	// Line 195, Address: 0x272848, Func Offset: 0xf8
	// Line 201, Address: 0x27284c, Func Offset: 0xfc
	// Line 195, Address: 0x272858, Func Offset: 0x108
	// Line 196, Address: 0x272868, Func Offset: 0x118
	// Line 195, Address: 0x27286c, Func Offset: 0x11c
	// Line 196, Address: 0x272870, Func Offset: 0x120
	// Line 197, Address: 0x272884, Func Offset: 0x134
	// Line 196, Address: 0x272888, Func Offset: 0x138
	// Line 197, Address: 0x27288c, Func Offset: 0x13c
	// Line 198, Address: 0x2728a0, Func Offset: 0x150
	// Line 197, Address: 0x2728a4, Func Offset: 0x154
	// Line 198, Address: 0x2728a8, Func Offset: 0x158
	// Line 199, Address: 0x2728bc, Func Offset: 0x16c
	// Line 198, Address: 0x2728c0, Func Offset: 0x170
	// Line 199, Address: 0x2728c4, Func Offset: 0x174
	// Line 200, Address: 0x2728d8, Func Offset: 0x188
	// Line 199, Address: 0x2728dc, Func Offset: 0x18c
	// Line 200, Address: 0x2728e0, Func Offset: 0x190
	// Line 201, Address: 0x2728f4, Func Offset: 0x1a4
	// Line 200, Address: 0x2728f8, Func Offset: 0x1a8
	// Line 201, Address: 0x2728fc, Func Offset: 0x1ac
	// Line 203, Address: 0x27292c, Func Offset: 0x1dc
	// Line 201, Address: 0x272930, Func Offset: 0x1e0
	// Line 202, Address: 0x272938, Func Offset: 0x1e8
	// Line 201, Address: 0x27293c, Func Offset: 0x1ec
	// Line 202, Address: 0x272944, Func Offset: 0x1f4
	// Line 203, Address: 0x272954, Func Offset: 0x204
	// Line 202, Address: 0x27296c, Func Offset: 0x21c
	// Line 203, Address: 0x272998, Func Offset: 0x248
	// Line 202, Address: 0x27299c, Func Offset: 0x24c
	// Line 204, Address: 0x2729c8, Func Offset: 0x278
	// Line 205, Address: 0x272a04, Func Offset: 0x2b4
	// Line 206, Address: 0x272a34, Func Offset: 0x2e4
	// Line 207, Address: 0x272a44, Func Offset: 0x2f4
	// Line 206, Address: 0x272a5c, Func Offset: 0x30c
	// Line 207, Address: 0x272a6c, Func Offset: 0x31c
	// Line 206, Address: 0x272a7c, Func Offset: 0x32c
	// Line 207, Address: 0x272a80, Func Offset: 0x330
	// Line 206, Address: 0x272a84, Func Offset: 0x334
	// Line 207, Address: 0x272a94, Func Offset: 0x344
	// Line 208, Address: 0x272ac4, Func Offset: 0x374
	// Line 210, Address: 0x272b00, Func Offset: 0x3b0
	// Line 212, Address: 0x272b20, Func Offset: 0x3d0
	// Line 210, Address: 0x272b38, Func Offset: 0x3e8
	// Line 212, Address: 0x272b3c, Func Offset: 0x3ec
	// Line 210, Address: 0x272b48, Func Offset: 0x3f8
	// Line 212, Address: 0x272b50, Func Offset: 0x400
	// Line 210, Address: 0x272b54, Func Offset: 0x404
	// Line 213, Address: 0x272b5c, Func Offset: 0x40c
	// Line 210, Address: 0x272b60, Func Offset: 0x410
	// Line 212, Address: 0x272b64, Func Offset: 0x414
	// Line 210, Address: 0x272b68, Func Offset: 0x418
	// Line 212, Address: 0x272b74, Func Offset: 0x424
	// Line 213, Address: 0x272b94, Func Offset: 0x444
	// Line 214, Address: 0x272bb8, Func Offset: 0x468
	// Line 215, Address: 0x272bc8, Func Offset: 0x478
	// Line 214, Address: 0x272bd8, Func Offset: 0x488
	// Line 215, Address: 0x272be4, Func Offset: 0x494
	// Line 216, Address: 0x272bec, Func Offset: 0x49c
	// Line 214, Address: 0x272bf0, Func Offset: 0x4a0
	// Line 215, Address: 0x272bf4, Func Offset: 0x4a4
	// Line 214, Address: 0x272bf8, Func Offset: 0x4a8
	// Line 215, Address: 0x272c04, Func Offset: 0x4b4
	// Line 216, Address: 0x272c14, Func Offset: 0x4c4
	// Line 218, Address: 0x272c50, Func Offset: 0x500
	// Line 220, Address: 0x272c70, Func Offset: 0x520
	// Line 221, Address: 0x272c80, Func Offset: 0x530
	// Line 220, Address: 0x272c84, Func Offset: 0x534
	// Line 218, Address: 0x272c90, Func Offset: 0x540
	// Line 221, Address: 0x272c94, Func Offset: 0x544
	// Line 220, Address: 0x272c98, Func Offset: 0x548
	// Line 218, Address: 0x272ca0, Func Offset: 0x550
	// Line 220, Address: 0x272ca8, Func Offset: 0x558
	// Line 218, Address: 0x272cac, Func Offset: 0x55c
	// Line 220, Address: 0x272cb8, Func Offset: 0x568
	// Line 218, Address: 0x272cbc, Func Offset: 0x56c
	// Line 221, Address: 0x272cc4, Func Offset: 0x574
	// Line 220, Address: 0x272cd4, Func Offset: 0x584
	// Line 221, Address: 0x272cf4, Func Offset: 0x5a4
	// Line 222, Address: 0x272d00, Func Offset: 0x5b0
	// Line 223, Address: 0x272d08, Func Offset: 0x5b8
	// Line 226, Address: 0x272d10, Func Offset: 0x5c0
	// Line 227, Address: 0x272d28, Func Offset: 0x5d8
	// Line 228, Address: 0x272d40, Func Offset: 0x5f0
	// Line 229, Address: 0x272d64, Func Offset: 0x614
	// Func End, Address: 0x272da0, Func Offset: 0x650
}

// 
// Start address: 0x272da0
void HoleDraw(int which_peep)
{
	int width;
	int height;
	int blank_width;
	int blank_height;
	_anon1* tex;
	unsigned int cbp;
	_anon0* wk;
	float x0;
	float y0;
	float y1;
	_anon5 img;
	_anon5 blank;
	// Line 235, Address: 0x272da0, Func Offset: 0
	// Line 243, Address: 0x272dcc, Func Offset: 0x2c
	// Line 244, Address: 0x272dd4, Func Offset: 0x34
	// Line 249, Address: 0x272de0, Func Offset: 0x40
	// Line 250, Address: 0x272df4, Func Offset: 0x54
	// Line 252, Address: 0x272e04, Func Offset: 0x64
	// Line 250, Address: 0x272e08, Func Offset: 0x68
	// Line 252, Address: 0x272e0c, Func Offset: 0x6c
	// Line 254, Address: 0x272e18, Func Offset: 0x78
	// Line 255, Address: 0x272e24, Func Offset: 0x84
	// Line 256, Address: 0x272e4c, Func Offset: 0xac
	// Line 257, Address: 0x272e54, Func Offset: 0xb4
	// Line 258, Address: 0x272e7c, Func Offset: 0xdc
	// Line 259, Address: 0x272eac, Func Offset: 0x10c
	// Line 268, Address: 0x272eb8, Func Offset: 0x118
	// Line 259, Address: 0x272ebc, Func Offset: 0x11c
	// Line 268, Address: 0x272ec0, Func Offset: 0x120
	// Line 260, Address: 0x272ec4, Func Offset: 0x124
	// Line 259, Address: 0x272ec8, Func Offset: 0x128
	// Line 262, Address: 0x272ee0, Func Offset: 0x140
	// Line 263, Address: 0x272ee8, Func Offset: 0x148
	// Line 260, Address: 0x272eec, Func Offset: 0x14c
	// Line 263, Address: 0x272ef4, Func Offset: 0x154
	// Line 268, Address: 0x272f00, Func Offset: 0x160
	// Line 260, Address: 0x272f08, Func Offset: 0x168
	// Line 268, Address: 0x272f0c, Func Offset: 0x16c
	// Line 273, Address: 0x272f1c, Func Offset: 0x17c
	// Line 274, Address: 0x272f3c, Func Offset: 0x19c
	// Line 275, Address: 0x272f50, Func Offset: 0x1b0
	// Line 277, Address: 0x272f6c, Func Offset: 0x1cc
	// Line 278, Address: 0x272f8c, Func Offset: 0x1ec
	// Line 280, Address: 0x272fa0, Func Offset: 0x200
	// Line 281, Address: 0x272fbc, Func Offset: 0x21c
	// Line 282, Address: 0x272fd4, Func Offset: 0x234
	// Line 285, Address: 0x272fe4, Func Offset: 0x244
	// Line 286, Address: 0x272ff4, Func Offset: 0x254
	// Line 291, Address: 0x273028, Func Offset: 0x288
	// Line 292, Address: 0x273044, Func Offset: 0x2a4
	// Line 293, Address: 0x273058, Func Offset: 0x2b8
	// Line 296, Address: 0x273068, Func Offset: 0x2c8
	// Line 297, Address: 0x273078, Func Offset: 0x2d8
	// Line 302, Address: 0x2730d0, Func Offset: 0x330
	// Line 303, Address: 0x2730ec, Func Offset: 0x34c
	// Line 304, Address: 0x273100, Func Offset: 0x360
	// Line 307, Address: 0x273110, Func Offset: 0x370
	// Line 308, Address: 0x273124, Func Offset: 0x384
	// Line 309, Address: 0x273130, Func Offset: 0x390
	// Line 314, Address: 0x273164, Func Offset: 0x3c4
	// Line 315, Address: 0x273180, Func Offset: 0x3e0
	// Line 316, Address: 0x273194, Func Offset: 0x3f4
	// Line 317, Address: 0x2731a4, Func Offset: 0x404
	// Line 320, Address: 0x2731a8, Func Offset: 0x408
	// Line 321, Address: 0x2731c8, Func Offset: 0x428
	// Line 322, Address: 0x2731d4, Func Offset: 0x434
	// Line 327, Address: 0x273224, Func Offset: 0x484
	// Line 328, Address: 0x273240, Func Offset: 0x4a0
	// Line 329, Address: 0x273254, Func Offset: 0x4b4
	// Line 331, Address: 0x273264, Func Offset: 0x4c4
	// Line 335, Address: 0x273270, Func Offset: 0x4d0
	// Line 336, Address: 0x273284, Func Offset: 0x4e4
	// Line 338, Address: 0x273294, Func Offset: 0x4f4
	// Line 336, Address: 0x273298, Func Offset: 0x4f8
	// Line 338, Address: 0x27329c, Func Offset: 0x4fc
	// Line 340, Address: 0x2732a8, Func Offset: 0x508
	// Line 341, Address: 0x2732b0, Func Offset: 0x510
	// Line 342, Address: 0x2732b8, Func Offset: 0x518
	// Line 346, Address: 0x2732dc, Func Offset: 0x53c
	// Line 347, Address: 0x2732fc, Func Offset: 0x55c
	// Line 348, Address: 0x273310, Func Offset: 0x570
	// Line 350, Address: 0x27332c, Func Offset: 0x58c
	// Line 351, Address: 0x27334c, Func Offset: 0x5ac
	// Line 353, Address: 0x273360, Func Offset: 0x5c0
	// Line 354, Address: 0x27337c, Func Offset: 0x5dc
	// Line 355, Address: 0x273394, Func Offset: 0x5f4
	// Line 356, Address: 0x2733a4, Func Offset: 0x604
	// Line 357, Address: 0x2733a8, Func Offset: 0x608
	// Func End, Address: 0x2733dc, Func Offset: 0x63c
}

