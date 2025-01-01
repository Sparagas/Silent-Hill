typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef enum sfMaphitSpecType : unsigned char;
typedef struct sgBSPNode;
typedef struct sgABTCell;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef union _anon8;
typedef struct _anon9;
typedef enum sfMaphitMaterialType : unsigned char;


typedef float type_0[3];
typedef float type_1[3];
typedef int type_2[0];
typedef float type_3[4];
typedef _anon7 type_4[4];
typedef _anon8 type_5[0];

struct _anon0
{
	float abcd[4];
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

struct _anon3
{
	_anon8 vertex[0];
};

struct _anon4
{
	float start[4];
	float end[4];
};

enum sfMaphitSpecType : unsigned char
{
	MH_SPEC_NORMAL,
	MH_SPEC_PERMEATE
};

struct sgBSPNode
{
	_anon0 plane;
	int positive_offset;
	int negative_offset;
};

struct sgABTCell
{
	float bmax[3];
	int n_children;
	float bmin[3];
	int parent_offset;
	_anon5 poly_pool;
	int child_offsets[0];
};

struct _anon5
{
	int n_polygons;
	int polygons_offset;
};

struct _anon6
{
	unsigned short id;
	unsigned short flag;
	int abt_offset;
	int bsp_offset;
};

struct _anon7
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

union _anon8
{
	float node[4];
	_anon7 data[4];
};

struct _anon9
{
	void* data_addr;
	sgABTCell* abt_root;
	sgBSPNode* bsp_root;
};

enum sfMaphitMaterialType : unsigned char
{
	MH_MATERIAL_MUON,
	MH_MATERIAL_CON,
	MH_MATERIAL_TUCHI,
	MH_MATERIAL_KUSA,
	MH_MATERIAL_TETU,
	MH_MATERIAL_MIZU,
	MH_MATERIAL_TREE,
	MH_MATERIAL_JUUTAN,
	MH_MATERIAL_AMI,
	MH_MATERIAL_GARAS,
	MH_MATERIAL_KAATEN,
	MH_MATERIAL_NIKU,
	MH_MATERIAL_GAREKI
};

_anon9 maphit_work;

void sfMaphitInit();
void sfMaphitSetTarget(void* data_addr);
sgABTCell* sfMaphitABTRoot();
void sfMaphitGetTargetAABB(_anon2* aabb);
void sfMaphitTestResultClear();
int sfMaphitTestResultNPolygons();
_anon3* sfMaphitTestResultPolygon(int idx);
sfMaphitMaterialType sfMaphitPolygonMaterial(_anon3* poly);
void sfMaphitPolygonSetMaterial(_anon3* poly, sfMaphitMaterialType mat_type);
int sfMaphitPolygonIsNoLight(_anon3* poly);
sfMaphitSpecType sfMaphitPolygonSpec(_anon3* poly);
int sfMaphitTestSphere(_anon1* ball);
int sfMaphitTestLine(_anon4* line);
int sfMaphitTestLineFirstFrontHit(_anon4* line);
int sfMaphitTestLineFirstBackHit(_anon4* line);
int sfMaphitHaveBSPTree();
int sfMaphitBSPTestPoint(float* point);
int sfMaphitBSPTestLineFrontHit(_anon4* line, _anon0* plane);
int sfMaphitBSPTestLineBackHit(_anon4* line, _anon0* plane);
int sfMaphitHybTestLineFrontHitPlane(_anon4* line, _anon0* plane);
_anon3* sfMaphitHybTestLineFrontHit(_anon4* line);
int sfMaphitHybTestLineBackHitPlane(_anon4* line, _anon0* plane);

// 
// Start address: 0x183810
void sfMaphitInit()
{
	// Line 60, Address: 0x183810, Func Offset: 0
	// Line 61, Address: 0x183818, Func Offset: 0x8
	// Line 62, Address: 0x183820, Func Offset: 0x10
	// Line 63, Address: 0x183830, Func Offset: 0x20
	// Func End, Address: 0x18383c, Func Offset: 0x2c
}

// 
// Start address: 0x183840
void sfMaphitSetTarget(void* data_addr)
{
	_anon6* data;
	// Line 71, Address: 0x183840, Func Offset: 0
	// Line 70, Address: 0x183844, Func Offset: 0x4
	// Line 71, Address: 0x183848, Func Offset: 0x8
	// Line 73, Address: 0x18384c, Func Offset: 0xc
	// Line 74, Address: 0x183854, Func Offset: 0x14
	// Line 75, Address: 0x18385c, Func Offset: 0x1c
	// Line 76, Address: 0x183860, Func Offset: 0x20
	// Line 79, Address: 0x183868, Func Offset: 0x28
	// Line 81, Address: 0x183878, Func Offset: 0x38
	// Line 82, Address: 0x18387c, Func Offset: 0x3c
	// Line 83, Address: 0x183880, Func Offset: 0x40
	// Line 86, Address: 0x183888, Func Offset: 0x48
	// Line 87, Address: 0x183890, Func Offset: 0x50
	// Line 88, Address: 0x1838a0, Func Offset: 0x60
	// Line 89, Address: 0x1838b0, Func Offset: 0x70
	// Line 91, Address: 0x1838c8, Func Offset: 0x88
	// Line 94, Address: 0x1838d0, Func Offset: 0x90
	// Line 95, Address: 0x1838d8, Func Offset: 0x98
	// Func End, Address: 0x1838e4, Func Offset: 0xa4
}

// 
// Start address: 0x1838f0
sgABTCell* sfMaphitABTRoot()
{
	// Line 100, Address: 0x1838f0, Func Offset: 0
	// Line 101, Address: 0x1838f4, Func Offset: 0x4
	// Func End, Address: 0x1838fc, Func Offset: 0xc
}

// 
// Start address: 0x183900
void sfMaphitGetTargetAABB(_anon2* aabb)
{
	sgABTCell* cell;
	// Line 108, Address: 0x183900, Func Offset: 0
	// Line 109, Address: 0x18390c, Func Offset: 0xc
	// Line 110, Address: 0x183918, Func Offset: 0x18
	// Line 112, Address: 0x183920, Func Offset: 0x20
	// Line 113, Address: 0x183928, Func Offset: 0x28
	// Line 114, Address: 0x183930, Func Offset: 0x30
	// Func End, Address: 0x183940, Func Offset: 0x40
}

// 
// Start address: 0x183940
void sfMaphitTestResultClear()
{
	// Line 123, Address: 0x183940, Func Offset: 0
	// Func End, Address: 0x183948, Func Offset: 0x8
}

// 
// Start address: 0x183950
int sfMaphitTestResultNPolygons()
{
	// Line 133, Address: 0x183950, Func Offset: 0
	// Func End, Address: 0x183958, Func Offset: 0x8
}

// 
// Start address: 0x183960
_anon3* sfMaphitTestResultPolygon(int idx)
{
	// Line 148, Address: 0x183960, Func Offset: 0
	// Func End, Address: 0x183968, Func Offset: 0x8
}

// 
// Start address: 0x183970
sfMaphitMaterialType sfMaphitPolygonMaterial(_anon3* poly)
{
	// Line 161, Address: 0x183970, Func Offset: 0
	// Line 162, Address: 0x183978, Func Offset: 0x8
	// Line 163, Address: 0x183980, Func Offset: 0x10
	// Line 165, Address: 0x183994, Func Offset: 0x24
	// Line 166, Address: 0x183998, Func Offset: 0x28
	// Func End, Address: 0x1839a0, Func Offset: 0x30
}

// 
// Start address: 0x1839a0
void sfMaphitPolygonSetMaterial(_anon3* poly, sfMaphitMaterialType mat_type)
{
	int id;
	// Line 178, Address: 0x1839a0, Func Offset: 0
	// Line 182, Address: 0x1839ac, Func Offset: 0xc
	// Line 181, Address: 0x1839b0, Func Offset: 0x10
	// Line 178, Address: 0x1839b4, Func Offset: 0x14
	// Line 180, Address: 0x1839c0, Func Offset: 0x20
	// Line 181, Address: 0x1839c4, Func Offset: 0x24
	// Line 182, Address: 0x1839c8, Func Offset: 0x28
	// Line 183, Address: 0x1839cc, Func Offset: 0x2c
	// Line 184, Address: 0x1839d0, Func Offset: 0x30
	// Func End, Address: 0x1839d8, Func Offset: 0x38
}

// 
// Start address: 0x1839e0
int sfMaphitPolygonIsNoLight(_anon3* poly)
{
	// Line 195, Address: 0x1839e0, Func Offset: 0
	// Line 196, Address: 0x1839e8, Func Offset: 0x8
	// Line 197, Address: 0x1839f0, Func Offset: 0x10
	// Line 198, Address: 0x183a04, Func Offset: 0x24
	// Line 199, Address: 0x183a08, Func Offset: 0x28
	// Func End, Address: 0x183a10, Func Offset: 0x30
}

// 
// Start address: 0x183a10
sfMaphitSpecType sfMaphitPolygonSpec(_anon3* poly)
{
	unsigned int id;
	// Line 210, Address: 0x183a10, Func Offset: 0
	// Line 211, Address: 0x183a18, Func Offset: 0x8
	// Line 212, Address: 0x183a20, Func Offset: 0x10
	// Line 215, Address: 0x183a34, Func Offset: 0x24
	// Line 216, Address: 0x183a40, Func Offset: 0x30
	// Func End, Address: 0x183a48, Func Offset: 0x38
}

// 
// Start address: 0x183a50
int sfMaphitTestSphere(_anon1* ball)
{
	// Line 227, Address: 0x183a50, Func Offset: 0
	// Line 228, Address: 0x183a54, Func Offset: 0x4
	// Line 227, Address: 0x183a58, Func Offset: 0x8
	// Line 228, Address: 0x183a60, Func Offset: 0x10
	// Line 230, Address: 0x183a78, Func Offset: 0x28
	// Line 231, Address: 0x183a80, Func Offset: 0x30
	// Line 233, Address: 0x183a90, Func Offset: 0x40
	// Line 235, Address: 0x183a98, Func Offset: 0x48
	// Line 236, Address: 0x183aa0, Func Offset: 0x50
	// Func End, Address: 0x183ab0, Func Offset: 0x60
}

// 
// Start address: 0x183ab0
int sfMaphitTestLine(_anon4* line)
{
	// Line 261, Address: 0x183ab0, Func Offset: 0
	// Line 262, Address: 0x183ab4, Func Offset: 0x4
	// Line 261, Address: 0x183ab8, Func Offset: 0x8
	// Line 262, Address: 0x183ac0, Func Offset: 0x10
	// Line 264, Address: 0x183ad8, Func Offset: 0x28
	// Line 265, Address: 0x183ae0, Func Offset: 0x30
	// Line 267, Address: 0x183af0, Func Offset: 0x40
	// Line 269, Address: 0x183af8, Func Offset: 0x48
	// Line 270, Address: 0x183b00, Func Offset: 0x50
	// Func End, Address: 0x183b10, Func Offset: 0x60
}

// 
// Start address: 0x183b10
int sfMaphitTestLineFirstFrontHit(_anon4* line)
{
	int i;
	float u;
	_anon4 line_div;
	// Line 285, Address: 0x183b10, Func Offset: 0
	// Line 293, Address: 0x183b24, Func Offset: 0x14
	// Line 296, Address: 0x183b2c, Func Offset: 0x1c
	// Line 297, Address: 0x183b30, Func Offset: 0x20
	// Line 298, Address: 0x183b38, Func Offset: 0x28
	// Line 299, Address: 0x183b68, Func Offset: 0x58
	// Line 300, Address: 0x183b70, Func Offset: 0x60
	// Line 299, Address: 0x183b78, Func Offset: 0x68
	// Line 300, Address: 0x183b7c, Func Offset: 0x6c
	// Line 301, Address: 0x183ba4, Func Offset: 0x94
	// Line 302, Address: 0x183bb4, Func Offset: 0xa4
	// Line 304, Address: 0x183bc4, Func Offset: 0xb4
	// Line 306, Address: 0x183bd0, Func Offset: 0xc0
	// Line 309, Address: 0x183bd8, Func Offset: 0xc8
	// Line 310, Address: 0x183be0, Func Offset: 0xd0
	// Func End, Address: 0x183bf8, Func Offset: 0xe8
}

// 
// Start address: 0x183c00
int sfMaphitTestLineFirstBackHit(_anon4* line)
{
	int i;
	float u;
	_anon4 line_div;
	// Line 324, Address: 0x183c00, Func Offset: 0
	// Line 332, Address: 0x183c14, Func Offset: 0x14
	// Line 334, Address: 0x183c1c, Func Offset: 0x1c
	// Line 335, Address: 0x183c20, Func Offset: 0x20
	// Line 336, Address: 0x183c28, Func Offset: 0x28
	// Line 337, Address: 0x183c58, Func Offset: 0x58
	// Line 338, Address: 0x183c60, Func Offset: 0x60
	// Line 337, Address: 0x183c68, Func Offset: 0x68
	// Line 338, Address: 0x183c6c, Func Offset: 0x6c
	// Line 339, Address: 0x183c94, Func Offset: 0x94
	// Line 340, Address: 0x183ca4, Func Offset: 0xa4
	// Line 342, Address: 0x183cb4, Func Offset: 0xb4
	// Line 344, Address: 0x183cc0, Func Offset: 0xc0
	// Line 347, Address: 0x183cc8, Func Offset: 0xc8
	// Line 348, Address: 0x183cd0, Func Offset: 0xd0
	// Func End, Address: 0x183ce8, Func Offset: 0xe8
}

// 
// Start address: 0x183cf0
int sfMaphitHaveBSPTree()
{
	// Line 358, Address: 0x183cf0, Func Offset: 0
	// Line 361, Address: 0x183cf8, Func Offset: 0x8
	// Func End, Address: 0x183d00, Func Offset: 0x10
}

// 
// Start address: 0x183d00
int sfMaphitBSPTestPoint(float* point)
{
	// Line 371, Address: 0x183d00, Func Offset: 0
	// Line 374, Address: 0x183d14, Func Offset: 0x14
	// Line 377, Address: 0x183d24, Func Offset: 0x24
	// Func End, Address: 0x183d30, Func Offset: 0x30
}

// 
// Start address: 0x183d30
int sfMaphitBSPTestLineFrontHit(_anon4* line, _anon0* plane)
{
	sgBSPNode* hit_node;
	// Line 406, Address: 0x183d30, Func Offset: 0
	// Line 408, Address: 0x183d4c, Func Offset: 0x1c
	// Line 410, Address: 0x183d54, Func Offset: 0x24
	// Line 411, Address: 0x183d5c, Func Offset: 0x2c
	// Line 412, Address: 0x183d60, Func Offset: 0x30
	// Line 413, Address: 0x183d68, Func Offset: 0x38
	// Line 414, Address: 0x183d70, Func Offset: 0x40
	// Line 415, Address: 0x183d78, Func Offset: 0x48
	// Line 417, Address: 0x183d80, Func Offset: 0x50
	// Line 418, Address: 0x183d88, Func Offset: 0x58
	// Func End, Address: 0x183d98, Func Offset: 0x68
}

// 
// Start address: 0x183da0
int sfMaphitBSPTestLineBackHit(_anon4* line, _anon0* plane)
{
	sgBSPNode* hit_node;
	// Line 431, Address: 0x183da0, Func Offset: 0
	// Line 433, Address: 0x183dbc, Func Offset: 0x1c
	// Line 435, Address: 0x183dc4, Func Offset: 0x24
	// Line 436, Address: 0x183dcc, Func Offset: 0x2c
	// Line 437, Address: 0x183dd0, Func Offset: 0x30
	// Line 438, Address: 0x183dd8, Func Offset: 0x38
	// Line 439, Address: 0x183de0, Func Offset: 0x40
	// Line 440, Address: 0x183de8, Func Offset: 0x48
	// Line 442, Address: 0x183df0, Func Offset: 0x50
	// Line 443, Address: 0x183df8, Func Offset: 0x58
	// Func End, Address: 0x183e08, Func Offset: 0x68
}

// 
// Start address: 0x183e10
int sfMaphitHybTestLineFrontHitPlane(_anon4* line, _anon0* plane)
{
	int hit;
	_anon3* poly;
	int move_hit;
	int stand_hit;
	_anon0 plane_tmp;
	float t_move;
	float t_stand;
	// Line 462, Address: 0x183e10, Func Offset: 0
	// Line 466, Address: 0x183e28, Func Offset: 0x18
	// Line 468, Address: 0x183e30, Func Offset: 0x20
	// Line 474, Address: 0x183e40, Func Offset: 0x30
	// Line 475, Address: 0x183e48, Func Offset: 0x38
	// Line 477, Address: 0x183e58, Func Offset: 0x48
	// Line 478, Address: 0x183e60, Func Offset: 0x50
	// Line 479, Address: 0x183e6c, Func Offset: 0x5c
	// Line 482, Address: 0x183e70, Func Offset: 0x60
	// Line 485, Address: 0x183e7c, Func Offset: 0x6c
	// Line 486, Address: 0x183e8c, Func Offset: 0x7c
	// Line 487, Address: 0x183e94, Func Offset: 0x84
	// Line 488, Address: 0x183e98, Func Offset: 0x88
	// Line 489, Address: 0x183ea8, Func Offset: 0x98
	// Line 490, Address: 0x183eb4, Func Offset: 0xa4
	// Line 491, Address: 0x183ebc, Func Offset: 0xac
	// Line 492, Address: 0x183ec0, Func Offset: 0xb0
	// Line 495, Address: 0x183ed0, Func Offset: 0xc0
	// Line 496, Address: 0x183edc, Func Offset: 0xcc
	// Line 497, Address: 0x183eec, Func Offset: 0xdc
	// Line 498, Address: 0x183f00, Func Offset: 0xf0
	// Line 500, Address: 0x183f08, Func Offset: 0xf8
	// Line 502, Address: 0x183f10, Func Offset: 0x100
	// Line 506, Address: 0x183f18, Func Offset: 0x108
	// Line 507, Address: 0x183f20, Func Offset: 0x110
	// Line 508, Address: 0x183f28, Func Offset: 0x118
	// Line 509, Address: 0x183f30, Func Offset: 0x120
	// Line 510, Address: 0x183f38, Func Offset: 0x128
	// Line 511, Address: 0x183f44, Func Offset: 0x134
	// Line 512, Address: 0x183f48, Func Offset: 0x138
	// Func End, Address: 0x183f60, Func Offset: 0x150
}

// 
// Start address: 0x183f60
_anon3* sfMaphitHybTestLineFrontHit(_anon4* line)
{
	int hit;
	int move_hit;
	_anon0 plane;
	float t_move;
	float t;
	_anon0 plane_tmp;
	_anon3* poly;
	_anon1 ball;
	// Line 527, Address: 0x183f60, Func Offset: 0
	// Line 532, Address: 0x183f64, Func Offset: 0x4
	// Line 527, Address: 0x183f68, Func Offset: 0x8
	// Line 532, Address: 0x183f7c, Func Offset: 0x1c
	// Line 540, Address: 0x183f80, Func Offset: 0x20
	// Line 543, Address: 0x183f88, Func Offset: 0x28
	// Line 544, Address: 0x183f98, Func Offset: 0x38
	// Line 545, Address: 0x183fa4, Func Offset: 0x44
	// Line 546, Address: 0x183fac, Func Offset: 0x4c
	// Line 548, Address: 0x183fc0, Func Offset: 0x60
	// Line 553, Address: 0x183fc8, Func Offset: 0x68
	// Line 556, Address: 0x183fd8, Func Offset: 0x78
	// Line 557, Address: 0x183fe0, Func Offset: 0x80
	// Line 558, Address: 0x183ff0, Func Offset: 0x90
	// Line 559, Address: 0x183ff4, Func Offset: 0x94
	// Line 562, Address: 0x183ff8, Func Offset: 0x98
	// Line 563, Address: 0x184008, Func Offset: 0xa8
	// Line 567, Address: 0x184010, Func Offset: 0xb0
	// Line 568, Address: 0x184020, Func Offset: 0xc0
	// Line 574, Address: 0x184030, Func Offset: 0xd0
	// Line 577, Address: 0x184040, Func Offset: 0xe0
	// Line 579, Address: 0x184048, Func Offset: 0xe8
	// Line 580, Address: 0x184050, Func Offset: 0xf0
	// Line 581, Address: 0x18405c, Func Offset: 0xfc
	// Line 583, Address: 0x18406c, Func Offset: 0x10c
	// Line 584, Address: 0x184080, Func Offset: 0x120
	// Line 588, Address: 0x184088, Func Offset: 0x128
	// Line 590, Address: 0x1840bc, Func Offset: 0x15c
	// Line 591, Address: 0x1840c4, Func Offset: 0x164
	// Line 592, Address: 0x1840d8, Func Offset: 0x178
	// Line 593, Address: 0x1840e4, Func Offset: 0x184
	// Line 595, Address: 0x1840ec, Func Offset: 0x18c
	// Line 600, Address: 0x1840f4, Func Offset: 0x194
	// Line 601, Address: 0x1840f8, Func Offset: 0x198
	// Line 602, Address: 0x184100, Func Offset: 0x1a0
	// Func End, Address: 0x184118, Func Offset: 0x1b8
}

// 
// Start address: 0x184120
int sfMaphitHybTestLineBackHitPlane(_anon4* line, _anon0* plane)
{
	int hit;
	_anon3* poly;
	int move_hit;
	int stand_hit;
	_anon0 plane_tmp;
	float t_move;
	float t_stand;
	// Line 617, Address: 0x184120, Func Offset: 0
	// Line 621, Address: 0x184138, Func Offset: 0x18
	// Line 623, Address: 0x184140, Func Offset: 0x20
	// Line 629, Address: 0x184150, Func Offset: 0x30
	// Line 630, Address: 0x184158, Func Offset: 0x38
	// Line 632, Address: 0x184168, Func Offset: 0x48
	// Line 633, Address: 0x184170, Func Offset: 0x50
	// Line 634, Address: 0x18417c, Func Offset: 0x5c
	// Line 637, Address: 0x184180, Func Offset: 0x60
	// Line 640, Address: 0x18418c, Func Offset: 0x6c
	// Line 641, Address: 0x18419c, Func Offset: 0x7c
	// Line 642, Address: 0x1841a4, Func Offset: 0x84
	// Line 643, Address: 0x1841a8, Func Offset: 0x88
	// Line 644, Address: 0x1841b8, Func Offset: 0x98
	// Line 645, Address: 0x1841c4, Func Offset: 0xa4
	// Line 646, Address: 0x1841cc, Func Offset: 0xac
	// Line 647, Address: 0x1841d0, Func Offset: 0xb0
	// Line 650, Address: 0x1841e0, Func Offset: 0xc0
	// Line 651, Address: 0x1841ec, Func Offset: 0xcc
	// Line 652, Address: 0x1841fc, Func Offset: 0xdc
	// Line 653, Address: 0x184210, Func Offset: 0xf0
	// Line 655, Address: 0x184218, Func Offset: 0xf8
	// Line 657, Address: 0x184220, Func Offset: 0x100
	// Line 660, Address: 0x184228, Func Offset: 0x108
	// Line 661, Address: 0x184230, Func Offset: 0x110
	// Line 662, Address: 0x184238, Func Offset: 0x118
	// Line 663, Address: 0x184240, Func Offset: 0x120
	// Line 664, Address: 0x184248, Func Offset: 0x128
	// Line 665, Address: 0x184250, Func Offset: 0x130
	// Line 666, Address: 0x18425c, Func Offset: 0x13c
	// Line 667, Address: 0x184260, Func Offset: 0x140
	// Func End, Address: 0x184278, Func Offset: 0x158
}

