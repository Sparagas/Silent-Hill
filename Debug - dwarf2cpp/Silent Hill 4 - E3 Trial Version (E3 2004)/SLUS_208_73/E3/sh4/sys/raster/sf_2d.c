typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef enum _enum : unsigned char;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct sgTexArc;
typedef struct _anon8;
typedef struct sgClutData;
typedef struct _anon9;
typedef struct sgTexData;
typedef struct sgSot;
typedef struct sgSotTag;


typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4][4];
typedef unsigned char type_3[2];
typedef float type_4[4];
typedef _anon7 type_5[2];
typedef _anon7 type_6[3];
typedef unsigned int type_7[4];

struct _anon0
{
	_anon3* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
};

struct _anon1
{
	_anon9 base;
	float rot;
	float base_x;
	float base_y;
	float scale_x;
	float scale_y;
	int ofs_x;
	int ofs_y;
	unsigned int col;
	int parts_num;
	_anon5* parts;
};

struct _anon2
{
	_anon9 base;
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

struct _anon3
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

struct _anon4
{
	_anon9 base;
	_anon7 v[2];
};

enum _enum : unsigned char
{
	SF_2D_LINE,
	SF_2D_TRI,
	SF_2D_QUAD,
	SF_2D_QUADSET
};

struct _anon5
{
	float x;
	float y;
	float w;
	float h;
	int u0;
	int v0;
	int u1;
	int v1;
};

struct _anon6
{
	_anon9 base;
	_anon7 v[3];
	float rot;
	float scale;
	int ofs_x;
	int ofs_y;
};

struct _anon7
{
	float x;
	float y;
	int u;
	int v;
	unsigned int col;
};

struct sgTexArc
{
	<unknown fundamental type (0xa510)> dummy;
};

struct _anon8
{
	unsigned int cbp;
	unsigned int ofs;
};

struct sgClutData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct _anon9
{
	unsigned long reg_alpha;
	unsigned long reg_prim;
	unsigned long reg_test;
	_anon0 tex_data;
	_anon8 clut_data;
	unsigned short ot;
	unsigned short z;
};

struct sgTexData
{
	<unknown fundamental type (0xa510)> dummy;
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

unsigned long* sg_packet_cur;
float sg_vector_unit_z[4];
float sg_matrix_unit[4][4];

void sf2dConstruct(void* buf, _enum type);
void sf2dQuadUseSprite(void* buf);
_anon3* sf2dGetTex(int arc_id, int t_id);
unsigned int sf2dGetCBP(int arc_id, int c_id);
void sf2dSetTexData(void* buf, _enum type, _anon3* tex, unsigned char tcc, unsigned char tfx);
void sf2dSetClutData(void* buf, _enum type, unsigned short cbp, unsigned int ofs);
void sf2dSetOT(void* buf, _enum type, unsigned short ot);
void sf2dSetZ(void* buf, _enum type, unsigned short z);
void sf2dSetAlpha(void* buf, _enum type, unsigned long val);
void sf2dSetPrim(void* buf, _enum type, unsigned long val);
void sf2dPrimRegOff(void* buf, _enum type, unsigned long val);
void sf2dSetTest(void* buf, _enum type, unsigned long val);
void sf2dQuadSetUV(_anon2* buf, int u0, int v0, int u1, int v1);
void sf2dQuadSetScaleX(_anon2* buf, float scale);
void sf2dQuadSetScaleY(_anon2* buf, float scale);
void sf2dQuadSetRot(_anon2* buf, float rot);
void sf2dLineSetXY(_anon4* buf, float x0, float y0, float x1, float y1);
void sf2dTriSetXY(_anon6* buf, float x0, float y0, float x1, float y1, float x2, float y2);
void sf2dQuadSetXYWH(_anon2* buf, float x, float y, float w, float h);
void sf2dQuadSetXY(_anon2* buf, float x, float y);
void sf2dTriSetOffsetXY(_anon6* buf, int cx, int cy);
void sf2dQuadSetOffsetXY(_anon2* buf, int ofsx, int ofsy);
void sf2dLineSetColor(_anon4* buf, unsigned int col0, unsigned int col1);
void sf2dTriSetColor(_anon6* buf, unsigned int col0, unsigned int col1, unsigned int col2);
void sf2dQuadSetColor(_anon2* buf, unsigned int col0, unsigned int col1, unsigned int col2, unsigned int col3);
void sf2dLineMakePkt(void* tmp);
void sf2dTriMakePkt(void* tmp);
void sf2dQuadMakePkt(void* tmp);
void sf2dQSetMakePkt(void* tmp);
void sf2dDraw(void* buf, _enum type);
void sf2dAddOT(void* buf, _enum type);

// 
// Start address: 0x1688d0
void sf2dConstruct(void* buf, _enum type)
{
	_anon9* p_base;
	// Line 130, Address: 0x1688d0, Func Offset: 0
	// Line 132, Address: 0x1688e0, Func Offset: 0x10
	// Line 133, Address: 0x1688e8, Func Offset: 0x18
	// Line 134, Address: 0x16891c, Func Offset: 0x4c
	// Line 135, Address: 0x168920, Func Offset: 0x50
	// Line 137, Address: 0x16892c, Func Offset: 0x5c
	// Line 138, Address: 0x168930, Func Offset: 0x60
	// Line 137, Address: 0x168934, Func Offset: 0x64
	// Line 139, Address: 0x168938, Func Offset: 0x68
	// Line 141, Address: 0x168940, Func Offset: 0x70
	// Line 142, Address: 0x16894c, Func Offset: 0x7c
	// Line 144, Address: 0x168950, Func Offset: 0x80
	// Line 142, Address: 0x168954, Func Offset: 0x84
	// Line 145, Address: 0x168958, Func Offset: 0x88
	// Line 144, Address: 0x16895c, Func Offset: 0x8c
	// Line 146, Address: 0x168960, Func Offset: 0x90
	// Line 148, Address: 0x168968, Func Offset: 0x98
	// Line 149, Address: 0x168974, Func Offset: 0xa4
	// Line 152, Address: 0x168978, Func Offset: 0xa8
	// Line 149, Address: 0x16897c, Func Offset: 0xac
	// Line 153, Address: 0x168980, Func Offset: 0xb0
	// Line 150, Address: 0x168984, Func Offset: 0xb4
	// Line 152, Address: 0x168988, Func Offset: 0xb8
	// Line 154, Address: 0x16898c, Func Offset: 0xbc
	// Line 155, Address: 0x168994, Func Offset: 0xc4
	// Line 156, Address: 0x168998, Func Offset: 0xc8
	// Line 157, Address: 0x1689a4, Func Offset: 0xd4
	// Line 161, Address: 0x1689a8, Func Offset: 0xd8
	// Line 157, Address: 0x1689ac, Func Offset: 0xdc
	// Line 162, Address: 0x1689b0, Func Offset: 0xe0
	// Line 158, Address: 0x1689b4, Func Offset: 0xe4
	// Line 161, Address: 0x1689b8, Func Offset: 0xe8
	// Line 162, Address: 0x1689bc, Func Offset: 0xec
	// Line 166, Address: 0x1689c0, Func Offset: 0xf0
	// Func End, Address: 0x1689d0, Func Offset: 0x100
}

// 
// Start address: 0x1689d0
void sf2dQuadUseSprite(void* buf)
{
	// Line 171, Address: 0x1689d0, Func Offset: 0
	// Line 176, Address: 0x1689d8, Func Offset: 0x8
	// Line 175, Address: 0x1689dc, Func Offset: 0xc
	// Line 176, Address: 0x1689e0, Func Offset: 0x10
	// Line 177, Address: 0x1689e4, Func Offset: 0x14
	// Line 178, Address: 0x1689e8, Func Offset: 0x18
	// Func End, Address: 0x1689f0, Func Offset: 0x20
}

// 
// Start address: 0x1689f0
_anon3* sf2dGetTex(int arc_id, int t_id)
{
	sgTexArc* tex_arc;
	sgTexData* tex_data;
	unsigned int tex_id;
	// Line 200, Address: 0x1689f0, Func Offset: 0
	// Line 203, Address: 0x1689fc, Func Offset: 0xc
	// Line 204, Address: 0x168a04, Func Offset: 0x14
	// Line 205, Address: 0x168a0c, Func Offset: 0x1c
	// Line 206, Address: 0x168a14, Func Offset: 0x24
	// Line 207, Address: 0x168a1c, Func Offset: 0x2c
	// Line 208, Address: 0x168a24, Func Offset: 0x34
	// Line 210, Address: 0x168a34, Func Offset: 0x44
	// Line 211, Address: 0x168a38, Func Offset: 0x48
	// Line 212, Address: 0x168a40, Func Offset: 0x50
	// Func End, Address: 0x168a50, Func Offset: 0x60
}

// 
// Start address: 0x168a50
unsigned int sf2dGetCBP(int arc_id, int c_id)
{
	sgTexArc* tex_arc;
	sgClutData* clut_data;
	unsigned int clut_id;
	// Line 221, Address: 0x168a50, Func Offset: 0
	// Line 226, Address: 0x168a5c, Func Offset: 0xc
	// Line 227, Address: 0x168a64, Func Offset: 0x14
	// Line 228, Address: 0x168a6c, Func Offset: 0x1c
	// Line 229, Address: 0x168a74, Func Offset: 0x24
	// Line 230, Address: 0x168a7c, Func Offset: 0x2c
	// Line 231, Address: 0x168a84, Func Offset: 0x34
	// Line 234, Address: 0x168a98, Func Offset: 0x48
	// Line 235, Address: 0x168aa0, Func Offset: 0x50
	// Func End, Address: 0x168ab0, Func Offset: 0x60
}

// 
// Start address: 0x168ab0
void sf2dSetTexData(void* buf, _enum type, _anon3* tex, unsigned char tcc, unsigned char tfx)
{
	// Line 241, Address: 0x168ab0, Func Offset: 0
	// Line 242, Address: 0x168ab8, Func Offset: 0x8
	// Line 244, Address: 0x168b10, Func Offset: 0x60
	// Line 245, Address: 0x168b18, Func Offset: 0x68
	// Line 246, Address: 0x168b1c, Func Offset: 0x6c
	// Line 247, Address: 0x168b20, Func Offset: 0x70
	// Line 249, Address: 0x168b24, Func Offset: 0x74
	// Line 250, Address: 0x168b28, Func Offset: 0x78
	// Func End, Address: 0x168b30, Func Offset: 0x80
}

// 
// Start address: 0x168b30
void sf2dSetClutData(void* buf, _enum type, unsigned short cbp, unsigned int ofs)
{
	// Line 255, Address: 0x168b30, Func Offset: 0
	// Line 256, Address: 0x168b38, Func Offset: 0x8
	// Line 258, Address: 0x168b90, Func Offset: 0x60
	// Line 259, Address: 0x168b98, Func Offset: 0x68
	// Line 260, Address: 0x168b9c, Func Offset: 0x6c
	// Line 261, Address: 0x168ba0, Func Offset: 0x70
	// Func End, Address: 0x168ba8, Func Offset: 0x78
}

// 
// Start address: 0x168bb0
void sf2dSetOT(void* buf, _enum type, unsigned short ot)
{
	// Line 272, Address: 0x168bb0, Func Offset: 0
	// Line 273, Address: 0x168bb8, Func Offset: 0x8
	// Line 274, Address: 0x168c10, Func Offset: 0x60
	// Line 275, Address: 0x168c14, Func Offset: 0x64
	// Line 276, Address: 0x168c18, Func Offset: 0x68
	// Func End, Address: 0x168c20, Func Offset: 0x70
}

// 
// Start address: 0x168c20
void sf2dSetZ(void* buf, _enum type, unsigned short z)
{
	// Line 281, Address: 0x168c20, Func Offset: 0
	// Line 282, Address: 0x168c28, Func Offset: 0x8
	// Line 283, Address: 0x168c80, Func Offset: 0x60
	// Line 284, Address: 0x168c84, Func Offset: 0x64
	// Line 285, Address: 0x168c88, Func Offset: 0x68
	// Func End, Address: 0x168c90, Func Offset: 0x70
}

// 
// Start address: 0x168c90
void sf2dSetAlpha(void* buf, _enum type, unsigned long val)
{
	// Line 296, Address: 0x168c90, Func Offset: 0
	// Line 297, Address: 0x168c98, Func Offset: 0x8
	// Line 298, Address: 0x168cf0, Func Offset: 0x60
	// Line 299, Address: 0x168cf4, Func Offset: 0x64
	// Line 300, Address: 0x168cf8, Func Offset: 0x68
	// Func End, Address: 0x168d00, Func Offset: 0x70
}

// 
// Start address: 0x168d00
void sf2dSetPrim(void* buf, _enum type, unsigned long val)
{
	// Line 311, Address: 0x168d00, Func Offset: 0
	// Line 312, Address: 0x168d08, Func Offset: 0x8
	// Line 313, Address: 0x168d60, Func Offset: 0x60
	// Line 314, Address: 0x168d6c, Func Offset: 0x6c
	// Line 315, Address: 0x168d70, Func Offset: 0x70
	// Func End, Address: 0x168d78, Func Offset: 0x78
}

// 
// Start address: 0x168d80
void sf2dPrimRegOff(void* buf, _enum type, unsigned long val)
{
	// Line 320, Address: 0x168d80, Func Offset: 0
	// Line 321, Address: 0x168d88, Func Offset: 0x8
	// Line 322, Address: 0x168de0, Func Offset: 0x60
	// Line 324, Address: 0x168df0, Func Offset: 0x70
	// Func End, Address: 0x168df8, Func Offset: 0x78
}

// 
// Start address: 0x168e00
void sf2dSetTest(void* buf, _enum type, unsigned long val)
{
	// Line 340, Address: 0x168e00, Func Offset: 0
	// Line 341, Address: 0x168e08, Func Offset: 0x8
	// Line 342, Address: 0x168e60, Func Offset: 0x60
	// Line 343, Address: 0x168e64, Func Offset: 0x64
	// Line 344, Address: 0x168e68, Func Offset: 0x68
	// Func End, Address: 0x168e70, Func Offset: 0x70
}

// 
// Start address: 0x168e70
void sf2dQuadSetUV(_anon2* buf, int u0, int v0, int u1, int v1)
{
	// Line 396, Address: 0x168e70, Func Offset: 0
	// Line 397, Address: 0x168e78, Func Offset: 0x8
	// Line 398, Address: 0x168e7c, Func Offset: 0xc
	// Line 399, Address: 0x168e80, Func Offset: 0x10
	// Line 400, Address: 0x168e84, Func Offset: 0x14
	// Line 402, Address: 0x168e88, Func Offset: 0x18
	// Func End, Address: 0x168e90, Func Offset: 0x20
}

// 
// Start address: 0x168e90
void sf2dQuadSetScaleX(_anon2* buf, float scale)
{
	// Line 423, Address: 0x168e90, Func Offset: 0
	// Line 424, Address: 0x168e98, Func Offset: 0x8
	// Line 425, Address: 0x168e9c, Func Offset: 0xc
	// Line 426, Address: 0x168ea0, Func Offset: 0x10
	// Func End, Address: 0x168ea8, Func Offset: 0x18
}

// 
// Start address: 0x168eb0
void sf2dQuadSetScaleY(_anon2* buf, float scale)
{
	// Line 435, Address: 0x168eb0, Func Offset: 0
	// Line 436, Address: 0x168eb8, Func Offset: 0x8
	// Line 437, Address: 0x168ebc, Func Offset: 0xc
	// Line 438, Address: 0x168ec0, Func Offset: 0x10
	// Func End, Address: 0x168ec8, Func Offset: 0x18
}

// 
// Start address: 0x168ed0
void sf2dQuadSetRot(_anon2* buf, float rot)
{
	// Line 459, Address: 0x168ed0, Func Offset: 0
	// Line 460, Address: 0x168ed8, Func Offset: 0x8
	// Line 461, Address: 0x168edc, Func Offset: 0xc
	// Line 462, Address: 0x168ee0, Func Offset: 0x10
	// Func End, Address: 0x168ee8, Func Offset: 0x18
}

// 
// Start address: 0x168ef0
void sf2dLineSetXY(_anon4* buf, float x0, float y0, float x1, float y1)
{
	// Line 474, Address: 0x168ef0, Func Offset: 0
	// Line 475, Address: 0x168ef8, Func Offset: 0x8
	// Line 476, Address: 0x168efc, Func Offset: 0xc
	// Line 477, Address: 0x168f00, Func Offset: 0x10
	// Line 478, Address: 0x168f04, Func Offset: 0x14
	// Line 480, Address: 0x168f08, Func Offset: 0x18
	// Func End, Address: 0x168f10, Func Offset: 0x20
}

// 
// Start address: 0x168f10
void sf2dTriSetXY(_anon6* buf, float x0, float y0, float x1, float y1, float x2, float y2)
{
	// Line 494, Address: 0x168f10, Func Offset: 0
	// Line 495, Address: 0x168f18, Func Offset: 0x8
	// Line 496, Address: 0x168f1c, Func Offset: 0xc
	// Line 497, Address: 0x168f20, Func Offset: 0x10
	// Line 498, Address: 0x168f24, Func Offset: 0x14
	// Line 499, Address: 0x168f28, Func Offset: 0x18
	// Line 500, Address: 0x168f2c, Func Offset: 0x1c
	// Line 502, Address: 0x168f30, Func Offset: 0x20
	// Func End, Address: 0x168f38, Func Offset: 0x28
}

// 
// Start address: 0x168f40
void sf2dQuadSetXYWH(_anon2* buf, float x, float y, float w, float h)
{
	// Line 514, Address: 0x168f40, Func Offset: 0
	// Line 515, Address: 0x168f48, Func Offset: 0x8
	// Line 516, Address: 0x168f4c, Func Offset: 0xc
	// Line 517, Address: 0x168f50, Func Offset: 0x10
	// Line 518, Address: 0x168f54, Func Offset: 0x14
	// Line 520, Address: 0x168f58, Func Offset: 0x18
	// Func End, Address: 0x168f60, Func Offset: 0x20
}

// 
// Start address: 0x168f60
void sf2dQuadSetXY(_anon2* buf, float x, float y)
{
	// Line 530, Address: 0x168f60, Func Offset: 0
	// Line 531, Address: 0x168f68, Func Offset: 0x8
	// Line 532, Address: 0x168f6c, Func Offset: 0xc
	// Line 534, Address: 0x168f70, Func Offset: 0x10
	// Func End, Address: 0x168f78, Func Offset: 0x18
}

// 
// Start address: 0x168f80
void sf2dTriSetOffsetXY(_anon6* buf, int cx, int cy)
{
	// Line 559, Address: 0x168f80, Func Offset: 0
	// Line 560, Address: 0x168f88, Func Offset: 0x8
	// Line 561, Address: 0x168f8c, Func Offset: 0xc
	// Line 563, Address: 0x168f90, Func Offset: 0x10
	// Func End, Address: 0x168f98, Func Offset: 0x18
}

// 
// Start address: 0x168fa0
void sf2dQuadSetOffsetXY(_anon2* buf, int ofsx, int ofsy)
{
	// Line 573, Address: 0x168fa0, Func Offset: 0
	// Line 574, Address: 0x168fa8, Func Offset: 0x8
	// Line 575, Address: 0x168fac, Func Offset: 0xc
	// Line 577, Address: 0x168fb0, Func Offset: 0x10
	// Func End, Address: 0x168fb8, Func Offset: 0x18
}

// 
// Start address: 0x168fc0
void sf2dLineSetColor(_anon4* buf, unsigned int col0, unsigned int col1)
{
	// Line 587, Address: 0x168fc0, Func Offset: 0
	// Line 588, Address: 0x168fc8, Func Offset: 0x8
	// Line 589, Address: 0x168fcc, Func Offset: 0xc
	// Line 591, Address: 0x168fd0, Func Offset: 0x10
	// Func End, Address: 0x168fd8, Func Offset: 0x18
}

// 
// Start address: 0x168fe0
void sf2dTriSetColor(_anon6* buf, unsigned int col0, unsigned int col1, unsigned int col2)
{
	// Line 603, Address: 0x168fe0, Func Offset: 0
	// Line 604, Address: 0x168fe8, Func Offset: 0x8
	// Line 605, Address: 0x168fec, Func Offset: 0xc
	// Line 606, Address: 0x168ff0, Func Offset: 0x10
	// Line 607, Address: 0x168ff4, Func Offset: 0x14
	// Line 608, Address: 0x168ff8, Func Offset: 0x18
	// Func End, Address: 0x169000, Func Offset: 0x20
}

// 
// Start address: 0x169000
void sf2dQuadSetColor(_anon2* buf, unsigned int col0, unsigned int col1, unsigned int col2, unsigned int col3)
{
	// Line 620, Address: 0x169000, Func Offset: 0
	// Line 621, Address: 0x169008, Func Offset: 0x8
	// Line 622, Address: 0x16900c, Func Offset: 0xc
	// Line 623, Address: 0x169010, Func Offset: 0x10
	// Line 624, Address: 0x169014, Func Offset: 0x14
	// Line 626, Address: 0x169018, Func Offset: 0x18
	// Func End, Address: 0x169020, Func Offset: 0x20
}

// 
// Start address: 0x169020
void sf2dLineMakePkt(void* tmp)
{
	_anon4* buf;
	int i;
	_anon7* vertex;
	unsigned long* p;
	unsigned long* p;
	_anon0* p_data;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	int x;
	int y;
	int z;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 634, Address: 0x169020, Func Offset: 0
	// Line 635, Address: 0x169038, Func Offset: 0x18
	// Line 641, Address: 0x169040, Func Offset: 0x20
	// Line 636, Address: 0x169044, Func Offset: 0x24
	// Line 641, Address: 0x169048, Func Offset: 0x28
	// Line 643, Address: 0x169068, Func Offset: 0x48
	// Line 644, Address: 0x169080, Func Offset: 0x60
	// Line 645, Address: 0x1690a4, Func Offset: 0x84
	// Line 647, Address: 0x1690a8, Func Offset: 0x88
	// Line 656, Address: 0x1690b4, Func Offset: 0x94
	// Line 657, Address: 0x1690dc, Func Offset: 0xbc
	// Line 658, Address: 0x1690e0, Func Offset: 0xc0
	// Line 664, Address: 0x1690ec, Func Offset: 0xcc
	// Line 666, Address: 0x169120, Func Offset: 0x100
	// Line 667, Address: 0x16912c, Func Offset: 0x10c
	// Line 669, Address: 0x169150, Func Offset: 0x130
	// Line 670, Address: 0x16915c, Func Offset: 0x13c
	// Line 671, Address: 0x16917c, Func Offset: 0x15c
	// Line 673, Address: 0x169188, Func Offset: 0x168
	// Line 674, Address: 0x1691b4, Func Offset: 0x194
	// Line 676, Address: 0x1691b8, Func Offset: 0x198
	// Line 677, Address: 0x1691c0, Func Offset: 0x1a0
	// Line 678, Address: 0x1691e4, Func Offset: 0x1c4
	// Line 677, Address: 0x1691e8, Func Offset: 0x1c8
	// Line 678, Address: 0x1691f4, Func Offset: 0x1d4
	// Line 679, Address: 0x169218, Func Offset: 0x1f8
	// Line 678, Address: 0x16921c, Func Offset: 0x1fc
	// Line 681, Address: 0x169220, Func Offset: 0x200
	// Line 678, Address: 0x169224, Func Offset: 0x204
	// Line 681, Address: 0x169228, Func Offset: 0x208
	// Line 683, Address: 0x16922c, Func Offset: 0x20c
	// Line 678, Address: 0x169230, Func Offset: 0x210
	// Line 683, Address: 0x169234, Func Offset: 0x214
	// Line 682, Address: 0x169240, Func Offset: 0x220
	// Line 683, Address: 0x169244, Func Offset: 0x224
	// Line 682, Address: 0x169248, Func Offset: 0x228
	// Line 683, Address: 0x16924c, Func Offset: 0x22c
	// Line 681, Address: 0x169250, Func Offset: 0x230
	// Line 683, Address: 0x169254, Func Offset: 0x234
	// Line 681, Address: 0x169258, Func Offset: 0x238
	// Line 683, Address: 0x169260, Func Offset: 0x240
	// Line 681, Address: 0x169264, Func Offset: 0x244
	// Line 682, Address: 0x169268, Func Offset: 0x248
	// Line 681, Address: 0x16926c, Func Offset: 0x24c
	// Line 682, Address: 0x169270, Func Offset: 0x250
	// Line 681, Address: 0x169274, Func Offset: 0x254
	// Line 683, Address: 0x169278, Func Offset: 0x258
	// Line 685, Address: 0x16927c, Func Offset: 0x25c
	// Line 681, Address: 0x169280, Func Offset: 0x260
	// Line 682, Address: 0x169294, Func Offset: 0x274
	// Line 683, Address: 0x1692a8, Func Offset: 0x288
	// Line 682, Address: 0x1692ac, Func Offset: 0x28c
	// Line 684, Address: 0x1692b0, Func Offset: 0x290
	// Line 682, Address: 0x1692b4, Func Offset: 0x294
	// Line 683, Address: 0x1692c0, Func Offset: 0x2a0
	// Line 685, Address: 0x1692dc, Func Offset: 0x2bc
	// Line 686, Address: 0x1692ec, Func Offset: 0x2cc
	// Line 687, Address: 0x1692f0, Func Offset: 0x2d0
	// Func End, Address: 0x169310, Func Offset: 0x2f0
}

// 
// Start address: 0x169310
void sf2dTriMakePkt(void* tmp)
{
	_anon6* buf;
	_anon7* vertex;
	float src[4][4];
	float dst[4][4];
	float scale[4][4];
	float rot_q[4];
	float mat[4][4];
	int i;
	unsigned long* p;
	unsigned long* p;
	_anon0* p_data;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	int x;
	int y;
	int z;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 695, Address: 0x169310, Func Offset: 0
	// Line 696, Address: 0x169330, Func Offset: 0x20
	// Line 706, Address: 0x169338, Func Offset: 0x28
	// Line 697, Address: 0x16933c, Func Offset: 0x2c
	// Line 706, Address: 0x169340, Func Offset: 0x30
	// Line 698, Address: 0x169344, Func Offset: 0x34
	// Line 714, Address: 0x169348, Func Offset: 0x38
	// Line 706, Address: 0x169350, Func Offset: 0x40
	// Line 707, Address: 0x16935c, Func Offset: 0x4c
	// Line 708, Address: 0x169370, Func Offset: 0x60
	// Line 709, Address: 0x169384, Func Offset: 0x74
	// Line 710, Address: 0x169398, Func Offset: 0x88
	// Line 711, Address: 0x1693ac, Func Offset: 0x9c
	// Line 712, Address: 0x1693b8, Func Offset: 0xa8
	// Line 713, Address: 0x1693bc, Func Offset: 0xac
	// Line 711, Address: 0x1693c0, Func Offset: 0xb0
	// Line 714, Address: 0x1693c4, Func Offset: 0xb4
	// Line 715, Address: 0x1693d0, Func Offset: 0xc0
	// Line 717, Address: 0x1693d8, Func Offset: 0xc8
	// Line 715, Address: 0x1693dc, Func Offset: 0xcc
	// Line 716, Address: 0x1693e0, Func Offset: 0xd0
	// Line 717, Address: 0x1693e4, Func Offset: 0xd4
	// Line 720, Address: 0x1693f4, Func Offset: 0xe4
	// Line 724, Address: 0x16941c, Func Offset: 0x10c
	// Line 721, Address: 0x169420, Func Offset: 0x110
	// Line 724, Address: 0x169424, Func Offset: 0x114
	// Line 721, Address: 0x169428, Func Offset: 0x118
	// Line 722, Address: 0x16942c, Func Offset: 0x11c
	// Line 721, Address: 0x169430, Func Offset: 0x120
	// Line 722, Address: 0x169438, Func Offset: 0x128
	// Line 724, Address: 0x169444, Func Offset: 0x134
	// Line 726, Address: 0x169450, Func Offset: 0x140
	// Line 727, Address: 0x169460, Func Offset: 0x150
	// Line 730, Address: 0x169464, Func Offset: 0x154
	// Line 727, Address: 0x169470, Func Offset: 0x160
	// Line 728, Address: 0x169480, Func Offset: 0x170
	// Line 730, Address: 0x169494, Func Offset: 0x184
	// Line 733, Address: 0x169504, Func Offset: 0x1f4
	// Line 735, Address: 0x169530, Func Offset: 0x220
	// Line 736, Address: 0x169548, Func Offset: 0x238
	// Line 737, Address: 0x16956c, Func Offset: 0x25c
	// Line 739, Address: 0x169570, Func Offset: 0x260
	// Line 748, Address: 0x16957c, Func Offset: 0x26c
	// Line 749, Address: 0x1695a4, Func Offset: 0x294
	// Line 751, Address: 0x1695a8, Func Offset: 0x298
	// Line 757, Address: 0x1695b4, Func Offset: 0x2a4
	// Line 760, Address: 0x1695e8, Func Offset: 0x2d8
	// Line 761, Address: 0x1695f4, Func Offset: 0x2e4
	// Line 763, Address: 0x169618, Func Offset: 0x308
	// Line 764, Address: 0x169624, Func Offset: 0x314
	// Line 765, Address: 0x169644, Func Offset: 0x334
	// Line 767, Address: 0x169650, Func Offset: 0x340
	// Line 768, Address: 0x16967c, Func Offset: 0x36c
	// Line 770, Address: 0x169680, Func Offset: 0x370
	// Line 773, Address: 0x169688, Func Offset: 0x378
	// Line 777, Address: 0x169690, Func Offset: 0x380
	// Line 773, Address: 0x169698, Func Offset: 0x388
	// Line 774, Address: 0x16969c, Func Offset: 0x38c
	// Line 775, Address: 0x1696a0, Func Offset: 0x390
	// Line 777, Address: 0x1696a4, Func Offset: 0x394
	// Line 778, Address: 0x1696b4, Func Offset: 0x3a4
	// Line 777, Address: 0x1696b8, Func Offset: 0x3a8
	// Line 778, Address: 0x1696bc, Func Offset: 0x3ac
	// Line 777, Address: 0x1696c0, Func Offset: 0x3b0
	// Line 773, Address: 0x1696c4, Func Offset: 0x3b4
	// Line 778, Address: 0x1696c8, Func Offset: 0x3b8
	// Line 777, Address: 0x1696d0, Func Offset: 0x3c0
	// Line 774, Address: 0x1696dc, Func Offset: 0x3cc
	// Line 777, Address: 0x1696e0, Func Offset: 0x3d0
	// Line 778, Address: 0x1696e8, Func Offset: 0x3d8
	// Line 773, Address: 0x1696ec, Func Offset: 0x3dc
	// Line 774, Address: 0x1696f0, Func Offset: 0x3e0
	// Line 778, Address: 0x1696f4, Func Offset: 0x3e4
	// Line 779, Address: 0x169704, Func Offset: 0x3f4
	// Line 778, Address: 0x169708, Func Offset: 0x3f8
	// Line 779, Address: 0x169718, Func Offset: 0x408
	// Line 780, Address: 0x169784, Func Offset: 0x474
	// Line 779, Address: 0x169788, Func Offset: 0x478
	// Line 781, Address: 0x16978c, Func Offset: 0x47c
	// Line 779, Address: 0x169790, Func Offset: 0x480
	// Line 781, Address: 0x1697a0, Func Offset: 0x490
	// Line 782, Address: 0x1697ac, Func Offset: 0x49c
	// Line 783, Address: 0x1697b0, Func Offset: 0x4a0
	// Func End, Address: 0x1697d8, Func Offset: 0x4c8
}

// 
// Start address: 0x1697e0
void sf2dQuadMakePkt(void* tmp)
{
	_anon2* buf;
	float src[4][4];
	float dst[4][4];
	float scale[4][4];
	float rot_q[4];
	float mat[4][4];
	int i;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	_anon0* p_data;
	_anon8* c_data;
	unsigned long tex0;
	_anon8* cl;
	unsigned long* p;
	unsigned long* p;
	_anon8* cl;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	int x;
	int y;
	int z;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	int x;
	int y;
	int z;
	int u;
	int v;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 791, Address: 0x1697e0, Func Offset: 0
	// Line 792, Address: 0x1697fc, Func Offset: 0x1c
	// Line 801, Address: 0x169804, Func Offset: 0x24
	// Line 793, Address: 0x169808, Func Offset: 0x28
	// Line 809, Address: 0x16980c, Func Offset: 0x2c
	// Line 801, Address: 0x169814, Func Offset: 0x34
	// Line 802, Address: 0x169828, Func Offset: 0x48
	// Line 803, Address: 0x16982c, Func Offset: 0x4c
	// Line 805, Address: 0x169830, Func Offset: 0x50
	// Line 807, Address: 0x169834, Func Offset: 0x54
	// Line 802, Address: 0x169838, Func Offset: 0x58
	// Line 803, Address: 0x16984c, Func Offset: 0x6c
	// Line 804, Address: 0x169850, Func Offset: 0x70
	// Line 806, Address: 0x169854, Func Offset: 0x74
	// Line 808, Address: 0x169858, Func Offset: 0x78
	// Line 803, Address: 0x16985c, Func Offset: 0x7c
	// Line 805, Address: 0x169860, Func Offset: 0x80
	// Line 804, Address: 0x169864, Func Offset: 0x84
	// Line 803, Address: 0x169868, Func Offset: 0x88
	// Line 806, Address: 0x16986c, Func Offset: 0x8c
	// Line 807, Address: 0x169878, Func Offset: 0x98
	// Line 808, Address: 0x169884, Func Offset: 0xa4
	// Line 809, Address: 0x16988c, Func Offset: 0xac
	// Line 810, Address: 0x169898, Func Offset: 0xb8
	// Line 812, Address: 0x1698a0, Func Offset: 0xc0
	// Line 810, Address: 0x1698a4, Func Offset: 0xc4
	// Line 811, Address: 0x1698a8, Func Offset: 0xc8
	// Line 812, Address: 0x1698ac, Func Offset: 0xcc
	// Line 814, Address: 0x1698bc, Func Offset: 0xdc
	// Line 818, Address: 0x1698e8, Func Offset: 0x108
	// Line 815, Address: 0x1698ec, Func Offset: 0x10c
	// Line 818, Address: 0x1698f0, Func Offset: 0x110
	// Line 815, Address: 0x1698f4, Func Offset: 0x114
	// Line 816, Address: 0x1698f8, Func Offset: 0x118
	// Line 815, Address: 0x1698fc, Func Offset: 0x11c
	// Line 816, Address: 0x169904, Func Offset: 0x124
	// Line 818, Address: 0x169910, Func Offset: 0x130
	// Line 820, Address: 0x16991c, Func Offset: 0x13c
	// Line 821, Address: 0x16992c, Func Offset: 0x14c
	// Line 824, Address: 0x169930, Func Offset: 0x150
	// Line 821, Address: 0x16993c, Func Offset: 0x15c
	// Line 822, Address: 0x169940, Func Offset: 0x160
	// Line 824, Address: 0x169948, Func Offset: 0x168
	// Line 827, Address: 0x1699b8, Func Offset: 0x1d8
	// Line 828, Address: 0x1699bc, Func Offset: 0x1dc
	// Line 827, Address: 0x1699c4, Func Offset: 0x1e4
	// Line 828, Address: 0x1699e0, Func Offset: 0x200
	// Line 827, Address: 0x1699e4, Func Offset: 0x204
	// Line 828, Address: 0x1699f0, Func Offset: 0x210
	// Line 830, Address: 0x169a14, Func Offset: 0x234
	// Line 831, Address: 0x169a30, Func Offset: 0x250
	// Line 832, Address: 0x169a54, Func Offset: 0x274
	// Line 835, Address: 0x169a58, Func Offset: 0x278
	// Line 839, Address: 0x169a64, Func Offset: 0x284
	// Line 845, Address: 0x169a7c, Func Offset: 0x29c
	// Line 850, Address: 0x169a9c, Func Offset: 0x2bc
	// Line 852, Address: 0x169ac8, Func Offset: 0x2e8
	// Line 850, Address: 0x169acc, Func Offset: 0x2ec
	// Line 852, Address: 0x169ae0, Func Offset: 0x300
	// Line 853, Address: 0x169b04, Func Offset: 0x324
	// Line 859, Address: 0x169b10, Func Offset: 0x330
	// Line 860, Address: 0x169b3c, Func Offset: 0x35c
	// Line 859, Address: 0x169b40, Func Offset: 0x360
	// Line 860, Address: 0x169b54, Func Offset: 0x374
	// Line 863, Address: 0x169b70, Func Offset: 0x390
	// Line 864, Address: 0x169b94, Func Offset: 0x3b4
	// Line 866, Address: 0x169b98, Func Offset: 0x3b8
	// Line 867, Address: 0x169ba4, Func Offset: 0x3c4
	// Line 868, Address: 0x169bcc, Func Offset: 0x3ec
	// Line 869, Address: 0x169bd0, Func Offset: 0x3f0
	// Line 870, Address: 0x169bdc, Func Offset: 0x3fc
	// Line 871, Address: 0x169c00, Func Offset: 0x420
	// Line 873, Address: 0x169c08, Func Offset: 0x428
	// Line 874, Address: 0x169c34, Func Offset: 0x454
	// Line 876, Address: 0x169c38, Func Offset: 0x458
	// Line 884, Address: 0x169c44, Func Offset: 0x464
	// Line 886, Address: 0x169c48, Func Offset: 0x468
	// Line 884, Address: 0x169c4c, Func Offset: 0x46c
	// Line 880, Address: 0x169c50, Func Offset: 0x470
	// Line 882, Address: 0x169c54, Func Offset: 0x474
	// Line 881, Address: 0x169c58, Func Offset: 0x478
	// Line 886, Address: 0x169c5c, Func Offset: 0x47c
	// Line 884, Address: 0x169c60, Func Offset: 0x480
	// Line 886, Address: 0x169c64, Func Offset: 0x484
	// Line 884, Address: 0x169c68, Func Offset: 0x488
	// Line 880, Address: 0x169c74, Func Offset: 0x494
	// Line 884, Address: 0x169c78, Func Offset: 0x498
	// Line 886, Address: 0x169c7c, Func Offset: 0x49c
	// Line 884, Address: 0x169c80, Func Offset: 0x4a0
	// Line 881, Address: 0x169c84, Func Offset: 0x4a4
	// Line 884, Address: 0x169c88, Func Offset: 0x4a8
	// Line 880, Address: 0x169ca4, Func Offset: 0x4c4
	// Line 886, Address: 0x169ca8, Func Offset: 0x4c8
	// Line 881, Address: 0x169cac, Func Offset: 0x4cc
	// Line 886, Address: 0x169cb0, Func Offset: 0x4d0
	// Line 887, Address: 0x169cc0, Func Offset: 0x4e0
	// Line 886, Address: 0x169cc4, Func Offset: 0x4e4
	// Line 887, Address: 0x169cd4, Func Offset: 0x4f4
	// Line 893, Address: 0x169d38, Func Offset: 0x558
	// Line 887, Address: 0x169d3c, Func Offset: 0x55c
	// Line 893, Address: 0x169d40, Func Offset: 0x560
	// Line 887, Address: 0x169d44, Func Offset: 0x564
	// Line 895, Address: 0x169d4c, Func Offset: 0x56c
	// Line 887, Address: 0x169d50, Func Offset: 0x570
	// Line 895, Address: 0x169d54, Func Offset: 0x574
	// Line 887, Address: 0x169d58, Func Offset: 0x578
	// Line 895, Address: 0x169d5c, Func Offset: 0x57c
	// Line 887, Address: 0x169d60, Func Offset: 0x580
	// Line 893, Address: 0x169d68, Func Offset: 0x588
	// Line 890, Address: 0x169d6c, Func Offset: 0x58c
	// Line 891, Address: 0x169d70, Func Offset: 0x590
	// Line 893, Address: 0x169d74, Func Offset: 0x594
	// Line 890, Address: 0x169d80, Func Offset: 0x5a0
	// Line 893, Address: 0x169d84, Func Offset: 0x5a4
	// Line 895, Address: 0x169d88, Func Offset: 0x5a8
	// Line 893, Address: 0x169d8c, Func Offset: 0x5ac
	// Line 891, Address: 0x169d90, Func Offset: 0x5b0
	// Line 893, Address: 0x169d94, Func Offset: 0x5b4
	// Line 890, Address: 0x169db0, Func Offset: 0x5d0
	// Line 895, Address: 0x169db4, Func Offset: 0x5d4
	// Line 891, Address: 0x169db8, Func Offset: 0x5d8
	// Line 895, Address: 0x169dbc, Func Offset: 0x5dc
	// Line 896, Address: 0x169dcc, Func Offset: 0x5ec
	// Line 895, Address: 0x169dd0, Func Offset: 0x5f0
	// Line 896, Address: 0x169de0, Func Offset: 0x600
	// Line 897, Address: 0x169e5c, Func Offset: 0x67c
	// Line 899, Address: 0x169e68, Func Offset: 0x688
	// Line 903, Address: 0x169e70, Func Offset: 0x690
	// Line 905, Address: 0x169e78, Func Offset: 0x698
	// Line 903, Address: 0x169e7c, Func Offset: 0x69c
	// Line 904, Address: 0x169e80, Func Offset: 0x6a0
	// Line 903, Address: 0x169e84, Func Offset: 0x6a4
	// Line 904, Address: 0x169e88, Func Offset: 0x6a8
	// Line 903, Address: 0x169e8c, Func Offset: 0x6ac
	// Line 904, Address: 0x169e90, Func Offset: 0x6b0
	// Line 907, Address: 0x169e94, Func Offset: 0x6b4
	// Line 908, Address: 0x169ec0, Func Offset: 0x6e0
	// Line 910, Address: 0x169ee8, Func Offset: 0x708
	// Line 912, Address: 0x169f04, Func Offset: 0x724
	// Line 910, Address: 0x169f10, Func Offset: 0x730
	// Line 912, Address: 0x169f1c, Func Offset: 0x73c
	// Line 910, Address: 0x169f20, Func Offset: 0x740
	// Line 912, Address: 0x169f24, Func Offset: 0x744
	// Line 910, Address: 0x169f28, Func Offset: 0x748
	// Line 912, Address: 0x169f2c, Func Offset: 0x74c
	// Line 910, Address: 0x169f30, Func Offset: 0x750
	// Line 912, Address: 0x169f34, Func Offset: 0x754
	// Line 913, Address: 0x169f48, Func Offset: 0x768
	// Line 912, Address: 0x169f4c, Func Offset: 0x76c
	// Line 913, Address: 0x169f5c, Func Offset: 0x77c
	// Line 914, Address: 0x169fc8, Func Offset: 0x7e8
	// Line 913, Address: 0x169fcc, Func Offset: 0x7ec
	// Line 914, Address: 0x169fe0, Func Offset: 0x800
	// Line 916, Address: 0x169fec, Func Offset: 0x80c
	// Line 917, Address: 0x169ff0, Func Offset: 0x810
	// Func End, Address: 0x16a014, Func Offset: 0x834
}

// 
// Start address: 0x16a020
void sf2dQSetMakePkt(void* tmp)
{
	_anon1* buf;
	_anon5* parts;
	float src[4][4];
	float dst[4][4];
	float scale[4][4];
	float rot_q[4];
	float mat[4][4];
	int i;
	int num;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	_anon0* p_data;
	unsigned long tex0;
	_anon8* cl;
	unsigned long* p;
	unsigned long* p;
	_anon8* cl;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	int z;
	int x;
	int y;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 926, Address: 0x16a020, Func Offset: 0
	// Line 927, Address: 0x16a040, Func Offset: 0x20
	// Line 938, Address: 0x16a048, Func Offset: 0x28
	// Line 928, Address: 0x16a04c, Func Offset: 0x2c
	// Line 938, Address: 0x16a050, Func Offset: 0x30
	// Line 942, Address: 0x16a078, Func Offset: 0x58
	// Line 939, Address: 0x16a07c, Func Offset: 0x5c
	// Line 942, Address: 0x16a080, Func Offset: 0x60
	// Line 939, Address: 0x16a084, Func Offset: 0x64
	// Line 940, Address: 0x16a088, Func Offset: 0x68
	// Line 939, Address: 0x16a08c, Func Offset: 0x6c
	// Line 940, Address: 0x16a094, Func Offset: 0x74
	// Line 942, Address: 0x16a0a0, Func Offset: 0x80
	// Line 945, Address: 0x16a0ac, Func Offset: 0x8c
	// Line 946, Address: 0x16a0b0, Func Offset: 0x90
	// Line 945, Address: 0x16a0b4, Func Offset: 0x94
	// Line 946, Address: 0x16a0b8, Func Offset: 0x98
	// Line 945, Address: 0x16a0bc, Func Offset: 0x9c
	// Line 946, Address: 0x16a0cc, Func Offset: 0xac
	// Line 945, Address: 0x16a0d0, Func Offset: 0xb0
	// Line 946, Address: 0x16a0dc, Func Offset: 0xbc
	// Line 948, Address: 0x16a0f8, Func Offset: 0xd8
	// Line 949, Address: 0x16a110, Func Offset: 0xf0
	// Line 950, Address: 0x16a134, Func Offset: 0x114
	// Line 953, Address: 0x16a138, Func Offset: 0x118
	// Line 955, Address: 0x16a144, Func Offset: 0x124
	// Line 970, Address: 0x16a150, Func Offset: 0x130
	// Line 975, Address: 0x16a170, Func Offset: 0x150
	// Line 977, Address: 0x16a198, Func Offset: 0x178
	// Line 975, Address: 0x16a19c, Func Offset: 0x17c
	// Line 977, Address: 0x16a1b0, Func Offset: 0x190
	// Line 978, Address: 0x16a1d4, Func Offset: 0x1b4
	// Line 985, Address: 0x16a1e0, Func Offset: 0x1c0
	// Line 986, Address: 0x16a20c, Func Offset: 0x1ec
	// Line 985, Address: 0x16a210, Func Offset: 0x1f0
	// Line 986, Address: 0x16a224, Func Offset: 0x204
	// Line 989, Address: 0x16a240, Func Offset: 0x220
	// Line 990, Address: 0x16a264, Func Offset: 0x244
	// Line 992, Address: 0x16a268, Func Offset: 0x248
	// Line 993, Address: 0x16a274, Func Offset: 0x254
	// Line 995, Address: 0x16a298, Func Offset: 0x278
	// Line 996, Address: 0x16a2a4, Func Offset: 0x284
	// Line 997, Address: 0x16a2c4, Func Offset: 0x2a4
	// Line 999, Address: 0x16a2d0, Func Offset: 0x2b0
	// Line 1000, Address: 0x16a2fc, Func Offset: 0x2dc
	// Line 1002, Address: 0x16a300, Func Offset: 0x2e0
	// Line 1005, Address: 0x16a310, Func Offset: 0x2f0
	// Line 1015, Address: 0x16a318, Func Offset: 0x2f8
	// Line 1005, Address: 0x16a320, Func Offset: 0x300
	// Line 1006, Address: 0x16a338, Func Offset: 0x318
	// Line 1007, Address: 0x16a340, Func Offset: 0x320
	// Line 1009, Address: 0x16a344, Func Offset: 0x324
	// Line 1011, Address: 0x16a348, Func Offset: 0x328
	// Line 1006, Address: 0x16a34c, Func Offset: 0x32c
	// Line 1007, Address: 0x16a364, Func Offset: 0x344
	// Line 1008, Address: 0x16a368, Func Offset: 0x348
	// Line 1010, Address: 0x16a36c, Func Offset: 0x34c
	// Line 1012, Address: 0x16a370, Func Offset: 0x350
	// Line 1007, Address: 0x16a374, Func Offset: 0x354
	// Line 1009, Address: 0x16a378, Func Offset: 0x358
	// Line 1008, Address: 0x16a37c, Func Offset: 0x35c
	// Line 1007, Address: 0x16a380, Func Offset: 0x360
	// Line 1010, Address: 0x16a384, Func Offset: 0x364
	// Line 1011, Address: 0x16a390, Func Offset: 0x370
	// Line 1012, Address: 0x16a39c, Func Offset: 0x37c
	// Line 1015, Address: 0x16a3a4, Func Offset: 0x384
	// Line 1016, Address: 0x16a3b0, Func Offset: 0x390
	// Line 1018, Address: 0x16a3b8, Func Offset: 0x398
	// Line 1016, Address: 0x16a3bc, Func Offset: 0x39c
	// Line 1017, Address: 0x16a3c0, Func Offset: 0x3a0
	// Line 1018, Address: 0x16a3c4, Func Offset: 0x3a4
	// Line 1020, Address: 0x16a3d4, Func Offset: 0x3b4
	// Line 1021, Address: 0x16a3e4, Func Offset: 0x3c4
	// Line 1024, Address: 0x16a3e8, Func Offset: 0x3c8
	// Line 1021, Address: 0x16a3f4, Func Offset: 0x3d4
	// Line 1022, Address: 0x16a3f8, Func Offset: 0x3d8
	// Line 1024, Address: 0x16a400, Func Offset: 0x3e0
	// Line 1071, Address: 0x16a470, Func Offset: 0x450
	// Line 1072, Address: 0x16a474, Func Offset: 0x454
	// Line 1071, Address: 0x16a480, Func Offset: 0x460
	// Line 1027, Address: 0x16a488, Func Offset: 0x468
	// Line 1071, Address: 0x16a48c, Func Offset: 0x46c
	// Line 1027, Address: 0x16a494, Func Offset: 0x474
	// Line 1071, Address: 0x16a498, Func Offset: 0x478
	// Line 1072, Address: 0x16a4a8, Func Offset: 0x488
	// Line 1071, Address: 0x16a4ac, Func Offset: 0x48c
	// Line 1072, Address: 0x16a4dc, Func Offset: 0x4bc
	// Line 1075, Address: 0x16a4f8, Func Offset: 0x4d8
	// Line 1072, Address: 0x16a4fc, Func Offset: 0x4dc
	// Line 1075, Address: 0x16a514, Func Offset: 0x4f4
	// Line 1073, Address: 0x16a518, Func Offset: 0x4f8
	// Line 1074, Address: 0x16a51c, Func Offset: 0x4fc
	// Line 1075, Address: 0x16a520, Func Offset: 0x500
	// Line 1073, Address: 0x16a528, Func Offset: 0x508
	// Line 1074, Address: 0x16a52c, Func Offset: 0x50c
	// Line 1075, Address: 0x16a530, Func Offset: 0x510
	// Line 1073, Address: 0x16a538, Func Offset: 0x518
	// Line 1074, Address: 0x16a53c, Func Offset: 0x51c
	// Line 1075, Address: 0x16a540, Func Offset: 0x520
	// Line 1077, Address: 0x16a598, Func Offset: 0x578
	// Line 1075, Address: 0x16a59c, Func Offset: 0x57c
	// Line 1077, Address: 0x16a5a0, Func Offset: 0x580
	// Line 1075, Address: 0x16a5a4, Func Offset: 0x584
	// Line 1078, Address: 0x16a5ac, Func Offset: 0x58c
	// Line 1075, Address: 0x16a5b0, Func Offset: 0x590
	// Line 1078, Address: 0x16a5b8, Func Offset: 0x598
	// Line 1075, Address: 0x16a5bc, Func Offset: 0x59c
	// Line 1078, Address: 0x16a5c0, Func Offset: 0x5a0
	// Line 1075, Address: 0x16a5c4, Func Offset: 0x5a4
	// Line 1077, Address: 0x16a5d0, Func Offset: 0x5b0
	// Line 1078, Address: 0x16a5ec, Func Offset: 0x5cc
	// Line 1077, Address: 0x16a5f0, Func Offset: 0x5d0
	// Line 1078, Address: 0x16a620, Func Offset: 0x600
	// Line 1081, Address: 0x16a63c, Func Offset: 0x61c
	// Line 1078, Address: 0x16a640, Func Offset: 0x620
	// Line 1081, Address: 0x16a658, Func Offset: 0x638
	// Line 1079, Address: 0x16a65c, Func Offset: 0x63c
	// Line 1080, Address: 0x16a660, Func Offset: 0x640
	// Line 1081, Address: 0x16a664, Func Offset: 0x644
	// Line 1079, Address: 0x16a66c, Func Offset: 0x64c
	// Line 1080, Address: 0x16a670, Func Offset: 0x650
	// Line 1081, Address: 0x16a674, Func Offset: 0x654
	// Line 1079, Address: 0x16a67c, Func Offset: 0x65c
	// Line 1080, Address: 0x16a680, Func Offset: 0x660
	// Line 1081, Address: 0x16a684, Func Offset: 0x664
	// Line 1085, Address: 0x16a6e4, Func Offset: 0x6c4
	// Line 1081, Address: 0x16a6e8, Func Offset: 0x6c8
	// Line 1085, Address: 0x16a6ec, Func Offset: 0x6cc
	// Line 1081, Address: 0x16a6f0, Func Offset: 0x6d0
	// Line 1085, Address: 0x16a700, Func Offset: 0x6e0
	// Line 1087, Address: 0x16a710, Func Offset: 0x6f0
	// Func End, Address: 0x16a738, Func Offset: 0x718
}

// 
// Start address: 0x16a740
void sf2dDraw(void* buf, _enum type)
{
	void* pkt;
	// Line 1095, Address: 0x16a740, Func Offset: 0
	// Line 1098, Address: 0x16a758, Func Offset: 0x18
	// Line 1100, Address: 0x16a764, Func Offset: 0x24
	// Line 1101, Address: 0x16a76c, Func Offset: 0x2c
	// Line 1102, Address: 0x16a784, Func Offset: 0x44
	// Line 1103, Address: 0x16a798, Func Offset: 0x58
	// Line 1104, Address: 0x16a7a0, Func Offset: 0x60
	// Line 1105, Address: 0x16a7b0, Func Offset: 0x70
	// Line 1106, Address: 0x16a7b8, Func Offset: 0x78
	// Line 1108, Address: 0x16a7c4, Func Offset: 0x84
	// Line 1110, Address: 0x16a7f8, Func Offset: 0xb8
	// Line 1111, Address: 0x16a800, Func Offset: 0xc0
	// Line 1113, Address: 0x16a808, Func Offset: 0xc8
	// Line 1114, Address: 0x16a810, Func Offset: 0xd0
	// Line 1116, Address: 0x16a818, Func Offset: 0xd8
	// Line 1117, Address: 0x16a820, Func Offset: 0xe0
	// Line 1119, Address: 0x16a828, Func Offset: 0xe8
	// Line 1122, Address: 0x16a830, Func Offset: 0xf0
	// Line 1123, Address: 0x16a838, Func Offset: 0xf8
	// Line 1125, Address: 0x16a840, Func Offset: 0x100
	// Line 1126, Address: 0x16a858, Func Offset: 0x118
	// Line 1129, Address: 0x16a870, Func Offset: 0x130
	// Func End, Address: 0x16a888, Func Offset: 0x148
}

// 
// Start address: 0x16a890
void sf2dAddOT(void* buf, _enum type)
{
	void* pkt;
	sgSot* ot;
	_anon9* base;
	// Line 1133, Address: 0x16a890, Func Offset: 0
	// Line 1138, Address: 0x16a8b4, Func Offset: 0x24
	// Line 1140, Address: 0x16a8bc, Func Offset: 0x2c
	// Line 1141, Address: 0x16a8cc, Func Offset: 0x3c
	// Line 1142, Address: 0x16a8e4, Func Offset: 0x54
	// Line 1143, Address: 0x16a8f8, Func Offset: 0x68
	// Line 1145, Address: 0x16a900, Func Offset: 0x70
	// Line 1146, Address: 0x16a908, Func Offset: 0x78
	// Line 1148, Address: 0x16a914, Func Offset: 0x84
	// Line 1150, Address: 0x16a948, Func Offset: 0xb8
	// Line 1152, Address: 0x16a950, Func Offset: 0xc0
	// Line 1154, Address: 0x16a958, Func Offset: 0xc8
	// Line 1156, Address: 0x16a960, Func Offset: 0xd0
	// Line 1158, Address: 0x16a968, Func Offset: 0xd8
	// Line 1160, Address: 0x16a970, Func Offset: 0xe0
	// Line 1162, Address: 0x16a978, Func Offset: 0xe8
	// Line 1163, Address: 0x16a980, Func Offset: 0xf0
	// Line 1165, Address: 0x16a984, Func Offset: 0xf4
	// Line 1166, Address: 0x16a988, Func Offset: 0xf8
	// Line 1168, Address: 0x16a990, Func Offset: 0x100
	// Line 1169, Address: 0x16a9ac, Func Offset: 0x11c
	// Line 1171, Address: 0x16a9bc, Func Offset: 0x12c
	// Line 1172, Address: 0x16a9c0, Func Offset: 0x130
	// Func End, Address: 0x16a9e0, Func Offset: 0x150
}

