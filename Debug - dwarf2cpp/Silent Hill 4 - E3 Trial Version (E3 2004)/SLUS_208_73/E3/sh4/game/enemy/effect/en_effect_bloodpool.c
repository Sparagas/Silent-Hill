typedef struct EnemyEffectBloodPoolData;
typedef struct sfObj;
typedef struct EnemyMeasureResult;
typedef struct _anon0;
typedef struct sgTexArc;
typedef struct sgTexData;
typedef struct _anon1;
typedef union _anon2;
typedef struct sgClutData;
typedef struct _anon3;
typedef union _anon4;
typedef union _anon5;

typedef void(*type_14)(sfObj*);
typedef void(*type_18)(sfObj*);

typedef int type_0[4];
typedef unsigned int type_1[4];
typedef void* type_2[4];
typedef short type_3[8];
typedef unsigned short type_4[8];
typedef char type_5[16];
typedef unsigned char type_6[16];
typedef float type_7[4];
typedef float type_8[1];
typedef float type_9[4];
typedef int type_10[1];
typedef float type_11[4][4];
typedef long type_12[1];
typedef _anon2 type_13[256];
typedef float type_15[4];
typedef _anon3 type_16[4];
typedef _anon4 type_17[0];
typedef short type_19[2];
typedef unsigned short type_20[2];
typedef char type_21[4];
typedef unsigned char type_22[4];
typedef unsigned char type_23[4];
typedef unsigned char type_24[4][3];
typedef float type_25[1];
typedef int type_26[1];
typedef unsigned char type_27[4][3];
typedef long type_28[2];
typedef unsigned long type_29[2];

struct EnemyEffectBloodPoolData
{
	float pos[4];
	float normal[4];
	float max_size;
	float size;
	float ang_y;
	float edge_col_rate;
	float center_tex_q;
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

struct EnemyMeasureResult
{
	float pos[4];
	float normal[4];
	float dist;
	int exist;
	_anon0* poly;
};

struct _anon0
{
	_anon4 vertex[0];
};

struct sgTexArc
{
	<unknown fundamental type (0xa510)> dummy;
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

struct sgClutData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct _anon3
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

union _anon4
{
	float node[4];
	_anon3 data[4];
};

union _anon5
{
	long sl[2];
	unsigned long ul[2];
	<unknown fundamental type (0xa510)> sl128;
	<unknown fundamental type (0xa510)> ul128;
	int si[4];
	unsigned int ui[4];
	void* pt[4];
	short ss[8];
	unsigned short us[8];
	char sc[16];
	unsigned char uc[16];
	float f[4];
	float fv[1];
	int iv[1];
	long lv[1];
};

float en_vector_unit_y_minus[4];

sfObj* EnemyEffectSetBloodPool_Demo(float* pos, float size);
sfObj* EnemyEffectSetBloodPool(float* pos, float size);
sfObj* EnemyEffectSetBloodPoolFast(float* pos, float size);
sfObj* EnemyEffectSetBloodPoolDummy(float* pos, float size);
void EnemyEffectBloodPoolConstruct(sfObj* obj);
void EnemyEffectBloodPoolDestruct(sfObj* obj);
void EnemyEffectBloodPoolHandle(sfObj* obj);
void EnemyEffectBloodPoolDraw(sfObj* obj);
unsigned long blood_pool_tex_confirm_and_get_tex0();
void make_packet_of_blood_pool(float* CenterPos, float* Normal, unsigned long Tex0, unsigned long AlphaReg, unsigned char* VtCol, float AngY, float Size, float CenterTexQ, float EdgeColRate, int FogUseFlag);
float EnemyEffectBloodPoolGetRange(sfObj* obj);

// 
// Start address: 0x220990
sfObj* EnemyEffectSetBloodPool_Demo(float* pos, float size)
{
	sfObj* obj;
	// Line 73, Address: 0x220994, Func Offset: 0x4
	// Line 75, Address: 0x220998, Func Offset: 0x8
	// Line 73, Address: 0x22099c, Func Offset: 0xc
	// Line 75, Address: 0x2209a0, Func Offset: 0x10
	// Line 76, Address: 0x2209b0, Func Offset: 0x20
	// Line 77, Address: 0x2209bc, Func Offset: 0x2c
	// Line 78, Address: 0x2209c0, Func Offset: 0x30
	// Func End, Address: 0x2209d0, Func Offset: 0x40
}

// 
// Start address: 0x2209d0
sfObj* EnemyEffectSetBloodPool(float* pos, float size)
{
	sfObj* obj;
	// Line 86, Address: 0x2209d0, Func Offset: 0
	// Line 88, Address: 0x2209e8, Func Offset: 0x18
	// Line 90, Address: 0x220a10, Func Offset: 0x40
	// Line 92, Address: 0x220a18, Func Offset: 0x48
	// Line 93, Address: 0x220a30, Func Offset: 0x60
	// Line 94, Address: 0x220a3c, Func Offset: 0x6c
	// Line 95, Address: 0x220a40, Func Offset: 0x70
	// Func End, Address: 0x220a58, Func Offset: 0x88
}

// 
// Start address: 0x220a60
sfObj* EnemyEffectSetBloodPoolFast(float* pos, float size)
{
	sfObj* obj;
	// Line 105, Address: 0x220a64, Func Offset: 0x4
	// Func End, Address: 0x220a70, Func Offset: 0x10
}

// 
// Start address: 0x220a70
sfObj* EnemyEffectSetBloodPoolDummy(float* pos, float size)
{
	sfObj* obj;
	// Line 117, Address: 0x220a74, Func Offset: 0x4
	// Func End, Address: 0x220a80, Func Offset: 0x10
}

// 
// Start address: 0x220a80
void EnemyEffectBloodPoolConstruct(sfObj* obj)
{
	EnemyEffectBloodPoolData* pd;
	EnemyMeasureResult mres;
	float pos[4];
	float vec[4];
	int type;
	int c;
	// Line 125, Address: 0x220a80, Func Offset: 0
	// Line 130, Address: 0x220a98, Func Offset: 0x18
	// Line 131, Address: 0x220aa0, Func Offset: 0x20
	// Line 133, Address: 0x220ab0, Func Offset: 0x30
	// Line 134, Address: 0x220ac0, Func Offset: 0x40
	// Line 135, Address: 0x220acc, Func Offset: 0x4c
	// Line 136, Address: 0x220ad8, Func Offset: 0x58
	// Line 139, Address: 0x220b0c, Func Offset: 0x8c
	// Line 140, Address: 0x220b38, Func Offset: 0xb8
	// Line 141, Address: 0x220b54, Func Offset: 0xd4
	// Line 142, Address: 0x220b60, Func Offset: 0xe0
	// Line 143, Address: 0x220b68, Func Offset: 0xe8
	// Line 144, Address: 0x220b74, Func Offset: 0xf4
	// Line 146, Address: 0x220b88, Func Offset: 0x108
	// Line 147, Address: 0x220b94, Func Offset: 0x114
	// Line 148, Address: 0x220ba0, Func Offset: 0x120
	// Line 150, Address: 0x220bc0, Func Offset: 0x140
	// Line 152, Address: 0x220bc8, Func Offset: 0x148
	// Line 153, Address: 0x220bd8, Func Offset: 0x158
	// Line 152, Address: 0x220be0, Func Offset: 0x160
	// Line 153, Address: 0x220be4, Func Offset: 0x164
	// Line 154, Address: 0x220bec, Func Offset: 0x16c
	// Line 155, Address: 0x220bf4, Func Offset: 0x174
	// Line 157, Address: 0x220bfc, Func Offset: 0x17c
	// Line 159, Address: 0x220c20, Func Offset: 0x1a0
	// Line 162, Address: 0x220c40, Func Offset: 0x1c0
	// Line 164, Address: 0x220c48, Func Offset: 0x1c8
	// Line 166, Address: 0x220c54, Func Offset: 0x1d4
	// Line 167, Address: 0x220c58, Func Offset: 0x1d8
	// Line 170, Address: 0x220c60, Func Offset: 0x1e0
	// Line 171, Address: 0x220c80, Func Offset: 0x200
	// Func End, Address: 0x220c9c, Func Offset: 0x21c
}

// 
// Start address: 0x220ca0
void EnemyEffectBloodPoolDestruct(sfObj* obj)
{
	// Line 178, Address: 0x220ca0, Func Offset: 0
	// Func End, Address: 0x220ca8, Func Offset: 0x8
}

// 
// Start address: 0x220cb0
void EnemyEffectBloodPoolHandle(sfObj* obj)
{
	EnemyEffectBloodPoolData* pd;
	float dt;
	float SizeRate;
	float q_rate;
	// Line 185, Address: 0x220cb0, Func Offset: 0
	// Line 187, Address: 0x220cbc, Func Offset: 0xc
	// Line 189, Address: 0x220cc4, Func Offset: 0x14
	// Line 190, Address: 0x220cc8, Func Offset: 0x18
	// Line 191, Address: 0x220cf8, Func Offset: 0x48
	// Line 192, Address: 0x220d0c, Func Offset: 0x5c
	// Line 198, Address: 0x220d10, Func Offset: 0x60
	// Line 201, Address: 0x220d20, Func Offset: 0x70
	// Line 198, Address: 0x220d2c, Func Offset: 0x7c
	// Line 201, Address: 0x220d3c, Func Offset: 0x8c
	// Line 202, Address: 0x220d48, Func Offset: 0x98
	// Line 203, Address: 0x220d4c, Func Offset: 0x9c
	// Line 204, Address: 0x220d58, Func Offset: 0xa8
	// Line 206, Address: 0x220d64, Func Offset: 0xb4
	// Line 204, Address: 0x220d74, Func Offset: 0xc4
	// Line 206, Address: 0x220d78, Func Offset: 0xc8
	// Line 204, Address: 0x220d80, Func Offset: 0xd0
	// Line 205, Address: 0x220d84, Func Offset: 0xd4
	// Line 206, Address: 0x220d90, Func Offset: 0xe0
	// Line 207, Address: 0x220da4, Func Offset: 0xf4
	// Line 208, Address: 0x220da8, Func Offset: 0xf8
	// Line 210, Address: 0x220dcc, Func Offset: 0x11c
	// Func End, Address: 0x220ddc, Func Offset: 0x12c
}

// 
// Start address: 0x220de0
void EnemyEffectBloodPoolDraw(sfObj* obj)
{
	unsigned long tex0;
	EnemyEffectBloodPoolData* pd;
	unsigned char FogCol[4];
	unsigned char BlendColAry[4][3];
	unsigned char MinusColAry[4][3];
	// Line 217, Address: 0x220de0, Func Offset: 0
	// Line 220, Address: 0x220df4, Func Offset: 0x14
	// Line 223, Address: 0x220dfc, Func Offset: 0x1c
	// Line 229, Address: 0x220e04, Func Offset: 0x24
	// Line 233, Address: 0x220e10, Func Offset: 0x30
	// Line 237, Address: 0x220e68, Func Offset: 0x88
	// Line 241, Address: 0x220ebc, Func Offset: 0xdc
	// Line 242, Address: 0x220ec4, Func Offset: 0xe4
	// Line 243, Address: 0x220f30, Func Offset: 0x150
	// Line 247, Address: 0x220f7c, Func Offset: 0x19c
	// Func End, Address: 0x220f94, Func Offset: 0x1b4
}

// 
// Start address: 0x220fa0
unsigned long blood_pool_tex_confirm_and_get_tex0()
{
	_anon1* pTex;
	unsigned int cbp;
	sgTexArc* tex_arc;
	sgTexData* tex_data;
	unsigned int tex_id;
	sgTexArc* tex_arc;
	sgClutData* clut_data;
	unsigned int clut_id;
	// Line 251, Address: 0x220fa0, Func Offset: 0
	// Line 257, Address: 0x220fa4, Func Offset: 0x4
	// Line 251, Address: 0x220fa8, Func Offset: 0x8
	// Line 257, Address: 0x220fac, Func Offset: 0xc
	// Line 251, Address: 0x220fb0, Func Offset: 0x10
	// Line 257, Address: 0x220fb8, Func Offset: 0x18
	// Line 258, Address: 0x220fc0, Func Offset: 0x20
	// Line 259, Address: 0x220fc8, Func Offset: 0x28
	// Line 260, Address: 0x220fd0, Func Offset: 0x30
	// Line 261, Address: 0x220fd8, Func Offset: 0x38
	// Line 262, Address: 0x220fe0, Func Offset: 0x40
	// Line 264, Address: 0x220fec, Func Offset: 0x4c
	// Line 273, Address: 0x220ff0, Func Offset: 0x50
	// Line 274, Address: 0x221000, Func Offset: 0x60
	// Line 275, Address: 0x221008, Func Offset: 0x68
	// Line 276, Address: 0x221010, Func Offset: 0x70
	// Line 277, Address: 0x221018, Func Offset: 0x78
	// Line 278, Address: 0x221020, Func Offset: 0x80
	// Line 283, Address: 0x221030, Func Offset: 0x90
	// Line 286, Address: 0x221038, Func Offset: 0x98
	// Line 287, Address: 0x221054, Func Offset: 0xb4
	// Func End, Address: 0x221068, Func Offset: 0xc8
}

// 
// Start address: 0x221070
void make_packet_of_blood_pool(float* CenterPos, float* Normal, unsigned long Tex0, unsigned long AlphaReg, unsigned char* VtCol, float AngY, float Size, float CenterTexQ, float EdgeColRate, int FogUseFlag)
{
	_anon5* pPkTop;
	_anon5* pPk;
	int VtNo;
	float C2Pos1x;
	float C2Pos1z;
	float C2Pos1y;
	float C2Pos2y;
	float wsMat[4][4];
	unsigned int flags;
	int fog_val;
	float inv_ny;
	float WPos[4];
	float ScrPos[4];
	float inv_w;
	float fS;
	float fT;
	float fq;
	float rgb_rate;
	int qwc;
	// Line 305, Address: 0x221070, Func Offset: 0
	// Line 319, Address: 0x221090, Func Offset: 0x20
	// Line 305, Address: 0x221094, Func Offset: 0x24
	// Line 323, Address: 0x2210ac, Func Offset: 0x3c
	// Line 305, Address: 0x2210b0, Func Offset: 0x40
	// Line 323, Address: 0x2210e0, Func Offset: 0x70
	// Line 324, Address: 0x2210ec, Func Offset: 0x7c
	// Line 323, Address: 0x2210f0, Func Offset: 0x80
	// Line 324, Address: 0x2210fc, Func Offset: 0x8c
	// Line 326, Address: 0x221104, Func Offset: 0x94
	// Line 327, Address: 0x221118, Func Offset: 0xa8
	// Line 326, Address: 0x22111c, Func Offset: 0xac
	// Line 327, Address: 0x221120, Func Offset: 0xb0
	// Line 371, Address: 0x22112c, Func Offset: 0xbc
	// Line 327, Address: 0x221130, Func Offset: 0xc0
	// Line 371, Address: 0x221134, Func Offset: 0xc4
	// Line 327, Address: 0x221138, Func Offset: 0xc8
	// Line 371, Address: 0x22113c, Func Offset: 0xcc
	// Line 344, Address: 0x221144, Func Offset: 0xd4
	// Line 327, Address: 0x221148, Func Offset: 0xd8
	// Line 371, Address: 0x22114c, Func Offset: 0xdc
	// Line 335, Address: 0x221150, Func Offset: 0xe0
	// Line 344, Address: 0x221154, Func Offset: 0xe4
	// Line 335, Address: 0x221158, Func Offset: 0xe8
	// Line 329, Address: 0x22115c, Func Offset: 0xec
	// Line 335, Address: 0x221160, Func Offset: 0xf0
	// Line 336, Address: 0x221164, Func Offset: 0xf4
	// Line 335, Address: 0x221168, Func Offset: 0xf8
	// Line 340, Address: 0x22116c, Func Offset: 0xfc
	// Line 327, Address: 0x221170, Func Offset: 0x100
	// Line 341, Address: 0x221174, Func Offset: 0x104
	// Line 345, Address: 0x221178, Func Offset: 0x108
	// Line 349, Address: 0x22117c, Func Offset: 0x10c
	// Line 357, Address: 0x221180, Func Offset: 0x110
	// Line 378, Address: 0x221184, Func Offset: 0x114
	// Line 329, Address: 0x221188, Func Offset: 0x118
	// Line 330, Address: 0x221190, Func Offset: 0x120
	// Line 371, Address: 0x221194, Func Offset: 0x124
	// Line 330, Address: 0x221198, Func Offset: 0x128
	// Line 371, Address: 0x22119c, Func Offset: 0x12c
	// Line 329, Address: 0x2211a0, Func Offset: 0x130
	// Line 335, Address: 0x2211a4, Func Offset: 0x134
	// Line 353, Address: 0x2211a8, Func Offset: 0x138
	// Line 336, Address: 0x2211ac, Func Offset: 0x13c
	// Line 337, Address: 0x2211b0, Func Offset: 0x140
	// Line 340, Address: 0x2211b4, Func Offset: 0x144
	// Line 341, Address: 0x2211b8, Func Offset: 0x148
	// Line 342, Address: 0x2211bc, Func Offset: 0x14c
	// Line 344, Address: 0x2211c0, Func Offset: 0x150
	// Line 345, Address: 0x2211c4, Func Offset: 0x154
	// Line 346, Address: 0x2211c8, Func Offset: 0x158
	// Line 371, Address: 0x2211cc, Func Offset: 0x15c
	// Line 348, Address: 0x2211d0, Func Offset: 0x160
	// Line 371, Address: 0x2211d4, Func Offset: 0x164
	// Line 349, Address: 0x2211d8, Func Offset: 0x168
	// Line 371, Address: 0x2211dc, Func Offset: 0x16c
	// Line 350, Address: 0x2211e0, Func Offset: 0x170
	// Line 371, Address: 0x2211e4, Func Offset: 0x174
	// Line 352, Address: 0x2211e8, Func Offset: 0x178
	// Line 375, Address: 0x2211ec, Func Offset: 0x17c
	// Line 353, Address: 0x2211f0, Func Offset: 0x180
	// Line 354, Address: 0x2211f4, Func Offset: 0x184
	// Line 356, Address: 0x2211f8, Func Offset: 0x188
	// Line 357, Address: 0x2211fc, Func Offset: 0x18c
	// Line 358, Address: 0x221200, Func Offset: 0x190
	// Line 371, Address: 0x221204, Func Offset: 0x194
	// Line 375, Address: 0x221208, Func Offset: 0x198
	// Line 376, Address: 0x22120c, Func Offset: 0x19c
	// Line 330, Address: 0x221210, Func Offset: 0x1a0
	// Line 331, Address: 0x221220, Func Offset: 0x1b0
	// Line 378, Address: 0x22122c, Func Offset: 0x1bc
	// Line 389, Address: 0x221238, Func Offset: 0x1c8
	// Line 386, Address: 0x22123c, Func Offset: 0x1cc
	// Line 390, Address: 0x221240, Func Offset: 0x1d0
	// Line 389, Address: 0x221244, Func Offset: 0x1d4
	// Line 386, Address: 0x22124c, Func Offset: 0x1dc
	// Line 387, Address: 0x221250, Func Offset: 0x1e0
	// Line 388, Address: 0x221258, Func Offset: 0x1e8
	// Line 390, Address: 0x221260, Func Offset: 0x1f0
	// Line 392, Address: 0x221284, Func Offset: 0x214
	// Line 393, Address: 0x221290, Func Offset: 0x220
	// Line 392, Address: 0x221294, Func Offset: 0x224
	// Line 393, Address: 0x2212a0, Func Offset: 0x230
	// Line 395, Address: 0x2212ac, Func Offset: 0x23c
	// Line 396, Address: 0x2212b0, Func Offset: 0x240
	// Line 395, Address: 0x2212b4, Func Offset: 0x244
	// Line 396, Address: 0x2212b8, Func Offset: 0x248
	// Line 394, Address: 0x2212bc, Func Offset: 0x24c
	// Line 397, Address: 0x2212c0, Func Offset: 0x250
	// Line 401, Address: 0x2212c8, Func Offset: 0x258
	// Line 399, Address: 0x2212cc, Func Offset: 0x25c
	// Line 401, Address: 0x2212d8, Func Offset: 0x268
	// Line 402, Address: 0x2212dc, Func Offset: 0x26c
	// Line 401, Address: 0x2212e0, Func Offset: 0x270
	// Line 399, Address: 0x2212e4, Func Offset: 0x274
	// Line 403, Address: 0x2212f8, Func Offset: 0x288
	// Line 406, Address: 0x221300, Func Offset: 0x290
	// Line 404, Address: 0x221304, Func Offset: 0x294
	// Line 406, Address: 0x221310, Func Offset: 0x2a0
	// Line 407, Address: 0x221314, Func Offset: 0x2a4
	// Line 406, Address: 0x221318, Func Offset: 0x2a8
	// Line 404, Address: 0x22131c, Func Offset: 0x2ac
	// Line 406, Address: 0x221328, Func Offset: 0x2b8
	// Line 404, Address: 0x22132c, Func Offset: 0x2bc
	// Line 408, Address: 0x221334, Func Offset: 0x2c4
	// Line 409, Address: 0x22133c, Func Offset: 0x2cc
	// Line 411, Address: 0x221340, Func Offset: 0x2d0
	// Line 409, Address: 0x221344, Func Offset: 0x2d4
	// Line 411, Address: 0x221350, Func Offset: 0x2e0
	// Line 412, Address: 0x221354, Func Offset: 0x2e4
	// Line 411, Address: 0x221358, Func Offset: 0x2e8
	// Line 409, Address: 0x22135c, Func Offset: 0x2ec
	// Line 413, Address: 0x221370, Func Offset: 0x300
	// Line 416, Address: 0x221378, Func Offset: 0x308
	// Line 414, Address: 0x22137c, Func Offset: 0x30c
	// Line 416, Address: 0x221388, Func Offset: 0x318
	// Line 417, Address: 0x22138c, Func Offset: 0x31c
	// Line 416, Address: 0x221390, Func Offset: 0x320
	// Line 414, Address: 0x221394, Func Offset: 0x324
	// Line 416, Address: 0x2213a0, Func Offset: 0x330
	// Line 414, Address: 0x2213a4, Func Offset: 0x334
	// Line 420, Address: 0x2213b0, Func Offset: 0x340
	// Line 421, Address: 0x2213e4, Func Offset: 0x374
	// Line 422, Address: 0x221400, Func Offset: 0x390
	// Line 423, Address: 0x221404, Func Offset: 0x394
	// Line 424, Address: 0x221408, Func Offset: 0x398
	// Line 426, Address: 0x221410, Func Offset: 0x3a0
	// Line 424, Address: 0x221414, Func Offset: 0x3a4
	// Line 426, Address: 0x221418, Func Offset: 0x3a8
	// Line 424, Address: 0x22141c, Func Offset: 0x3ac
	// Line 425, Address: 0x221420, Func Offset: 0x3b0
	// Line 426, Address: 0x221424, Func Offset: 0x3b4
	// Line 427, Address: 0x221440, Func Offset: 0x3d0
	// Line 428, Address: 0x221488, Func Offset: 0x418
	// Line 429, Address: 0x22148c, Func Offset: 0x41c
	// Line 430, Address: 0x221490, Func Offset: 0x420
	// Line 432, Address: 0x2214a4, Func Offset: 0x434
	// Line 433, Address: 0x221520, Func Offset: 0x4b0
	// Line 434, Address: 0x22159c, Func Offset: 0x52c
	// Line 435, Address: 0x221618, Func Offset: 0x5a8
	// Line 438, Address: 0x22161c, Func Offset: 0x5ac
	// Line 435, Address: 0x221620, Func Offset: 0x5b0
	// Line 436, Address: 0x221628, Func Offset: 0x5b8
	// Line 438, Address: 0x22162c, Func Offset: 0x5bc
	// Line 439, Address: 0x221638, Func Offset: 0x5c8
	// Line 440, Address: 0x221650, Func Offset: 0x5e0
	// Line 441, Address: 0x221658, Func Offset: 0x5e8
	// Line 442, Address: 0x22165c, Func Offset: 0x5ec
	// Line 445, Address: 0x221674, Func Offset: 0x604
	// Line 446, Address: 0x221684, Func Offset: 0x614
	// Line 447, Address: 0x22168c, Func Offset: 0x61c
	// Line 448, Address: 0x221694, Func Offset: 0x624
	// Line 449, Address: 0x2216a4, Func Offset: 0x634
	// Line 450, Address: 0x2216a8, Func Offset: 0x638
	// Line 452, Address: 0x2216b8, Func Offset: 0x648
	// Func End, Address: 0x221700, Func Offset: 0x690
}

// 
// Start address: 0x221700
float EnemyEffectBloodPoolGetRange(sfObj* obj)
{
	// Line 533, Address: 0x221700, Func Offset: 0
	// Line 534, Address: 0x221704, Func Offset: 0x4
	// Func End, Address: 0x22170c, Func Offset: 0xc
}

