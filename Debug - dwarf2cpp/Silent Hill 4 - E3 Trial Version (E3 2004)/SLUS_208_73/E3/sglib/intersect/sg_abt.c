typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct sgABTCell;
typedef struct _anon3;


typedef float type_0[4];
typedef float type_1[3];
typedef float type_2[3];
typedef int type_3[0];

struct _anon0
{
	float start[4];
	float end[4];
};

struct _anon1
{
	float center[4];
	float radius;
};

struct _anon2
{
	float bmin[4];
	float bmax[4];
};

struct sgABTCell
{
	float bmax[3];
	int n_children;
	float bmin[3];
	int parent_offset;
	_anon3 poly_pool;
	int child_offsets[0];
};

struct _anon3
{
	int n_polygons;
	int polygons_offset;
};


void sgABTTestSphere(sgABTCell* node, _anon1* ball);
void sgABTTestLine(sgABTCell* node, _anon0* line);
void sgABTTestLineFirstFrontHit(sgABTCell* node, _anon0* line);
void sgABTTestLineFirstBackHit(sgABTCell* node, _anon0* line);

// 
// Start address: 0x172f70
void sgABTTestSphere(sgABTCell* node, _anon1* ball)
{
	int i;
	float v[4];
	float r[4];
	// Line 25, Address: 0x172f70, Func Offset: 0
	// Line 35, Address: 0x172f78, Func Offset: 0x8
	// Line 25, Address: 0x172f7c, Func Offset: 0xc
	// Line 34, Address: 0x172f8c, Func Offset: 0x1c
	// Line 35, Address: 0x172f94, Func Offset: 0x24
	// Line 34, Address: 0x172f98, Func Offset: 0x28
	// Line 35, Address: 0x172fa4, Func Offset: 0x34
	// Line 36, Address: 0x172fb8, Func Offset: 0x48
	// Line 37, Address: 0x172fd4, Func Offset: 0x64
	// Line 38, Address: 0x173008, Func Offset: 0x98
	// Line 40, Address: 0x173010, Func Offset: 0xa0
	// Line 41, Address: 0x173030, Func Offset: 0xc0
	// Line 42, Address: 0x17304c, Func Offset: 0xdc
	// Line 43, Address: 0x173080, Func Offset: 0x110
	// Line 47, Address: 0x173088, Func Offset: 0x118
	// Line 49, Address: 0x173090, Func Offset: 0x120
	// Line 50, Address: 0x173098, Func Offset: 0x128
	// Line 51, Address: 0x1730b0, Func Offset: 0x140
	// Line 54, Address: 0x1730c8, Func Offset: 0x158
	// Func End, Address: 0x1730e0, Func Offset: 0x170
}

// 
// Start address: 0x1730e0
void sgABTTestLine(sgABTCell* node, _anon0* line)
{
	int i;
	_anon2 aabb;
	// Line 101, Address: 0x1730e0, Func Offset: 0
	// Line 111, Address: 0x1730e4, Func Offset: 0x4
	// Line 101, Address: 0x1730e8, Func Offset: 0x8
	// Line 109, Address: 0x1730ec, Func Offset: 0xc
	// Line 101, Address: 0x1730f0, Func Offset: 0x10
	// Line 109, Address: 0x173104, Func Offset: 0x24
	// Line 114, Address: 0x173110, Func Offset: 0x30
	// Line 109, Address: 0x173114, Func Offset: 0x34
	// Line 110, Address: 0x173124, Func Offset: 0x44
	// Line 114, Address: 0x173134, Func Offset: 0x54
	// Line 110, Address: 0x173138, Func Offset: 0x58
	// Line 111, Address: 0x17313c, Func Offset: 0x5c
	// Line 110, Address: 0x173140, Func Offset: 0x60
	// Line 114, Address: 0x173144, Func Offset: 0x64
	// Line 119, Address: 0x173154, Func Offset: 0x74
	// Line 121, Address: 0x17315c, Func Offset: 0x7c
	// Line 122, Address: 0x173170, Func Offset: 0x90
	// Line 123, Address: 0x173180, Func Offset: 0xa0
	// Line 126, Address: 0x173198, Func Offset: 0xb8
	// Func End, Address: 0x1731b4, Func Offset: 0xd4
}

// 
// Start address: 0x1731c0
void sgABTTestLineFirstFrontHit(sgABTCell* node, _anon0* line)
{
	int i;
	_anon2 aabb;
	// Line 136, Address: 0x1731c0, Func Offset: 0
	// Line 146, Address: 0x1731c4, Func Offset: 0x4
	// Line 136, Address: 0x1731c8, Func Offset: 0x8
	// Line 144, Address: 0x1731cc, Func Offset: 0xc
	// Line 136, Address: 0x1731d0, Func Offset: 0x10
	// Line 144, Address: 0x1731e4, Func Offset: 0x24
	// Line 148, Address: 0x1731f0, Func Offset: 0x30
	// Line 144, Address: 0x1731f4, Func Offset: 0x34
	// Line 145, Address: 0x173204, Func Offset: 0x44
	// Line 148, Address: 0x173214, Func Offset: 0x54
	// Line 145, Address: 0x173218, Func Offset: 0x58
	// Line 146, Address: 0x17321c, Func Offset: 0x5c
	// Line 145, Address: 0x173220, Func Offset: 0x60
	// Line 148, Address: 0x173224, Func Offset: 0x64
	// Line 152, Address: 0x173234, Func Offset: 0x74
	// Line 154, Address: 0x17323c, Func Offset: 0x7c
	// Line 155, Address: 0x173250, Func Offset: 0x90
	// Line 156, Address: 0x173260, Func Offset: 0xa0
	// Line 159, Address: 0x173278, Func Offset: 0xb8
	// Func End, Address: 0x173294, Func Offset: 0xd4
}

// 
// Start address: 0x1732a0
void sgABTTestLineFirstBackHit(sgABTCell* node, _anon0* line)
{
	int i;
	_anon2 aabb;
	// Line 169, Address: 0x1732a0, Func Offset: 0
	// Line 179, Address: 0x1732a4, Func Offset: 0x4
	// Line 169, Address: 0x1732a8, Func Offset: 0x8
	// Line 177, Address: 0x1732ac, Func Offset: 0xc
	// Line 169, Address: 0x1732b0, Func Offset: 0x10
	// Line 177, Address: 0x1732c4, Func Offset: 0x24
	// Line 181, Address: 0x1732d0, Func Offset: 0x30
	// Line 177, Address: 0x1732d4, Func Offset: 0x34
	// Line 178, Address: 0x1732e4, Func Offset: 0x44
	// Line 181, Address: 0x1732f4, Func Offset: 0x54
	// Line 178, Address: 0x1732f8, Func Offset: 0x58
	// Line 179, Address: 0x1732fc, Func Offset: 0x5c
	// Line 178, Address: 0x173300, Func Offset: 0x60
	// Line 181, Address: 0x173304, Func Offset: 0x64
	// Line 185, Address: 0x173314, Func Offset: 0x74
	// Line 187, Address: 0x17331c, Func Offset: 0x7c
	// Line 188, Address: 0x173330, Func Offset: 0x90
	// Line 189, Address: 0x173340, Func Offset: 0xa0
	// Line 192, Address: 0x173358, Func Offset: 0xb8
	// Func End, Address: 0x173374, Func Offset: 0xd4
}

