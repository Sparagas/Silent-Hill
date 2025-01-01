typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef enum sfMaphitMaterialType : unsigned char;
typedef struct _anon5;
typedef struct _anon6;
typedef union _anon7;


typedef _anon1 type_0[8];
typedef float type_1[4];
typedef _anon6 type_2[4];
typedef _anon7 type_3[0];

struct _anon0
{
	float center[4];
	float radius;
};

struct _anon1
{
	int n_polygons;
	int polygons_offset;
};

struct _anon2
{
	float bmin[4];
	float bmax[4];
};

struct _anon3
{
	_anon1 move_polygons[8];
};

struct _anon4
{
	float start[4];
	float end[4];
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

struct _anon5
{
	_anon7 vertex[0];
};

struct _anon6
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

union _anon7
{
	float node[4];
	_anon6 data[4];
};

_anon3 maphit_moves_work;

_anon1* Pool(int n);
int GetPool();
void sfMaphitMovesInit();
int sfMaphitMovesEntry(_anon5* polygons, int n_polygons);
void sfMaphitMovesRemove(int id);
void sfMaphitMovesRemoveAll();
void sfMaphitMovesTestSphere(_anon0* ball);
void sfMaphitMovesTestLine(_anon4* line);
void sfMaphitMovesTestFirstFrontHit(_anon4* line);
void sfMaphitMovesTestFirstBackHit(_anon4* line);
int sfMaphitMovesCreateCylinder(_anon5* pol, float* pos, float r, float h, float rot, int vertex, sfMaphitMaterialType material_type);

// 
// Start address: 0x22de70
_anon1* Pool(int n)
{
	// Line 40, Address: 0x22de70, Func Offset: 0
	// Line 43, Address: 0x22de8c, Func Offset: 0x1c
	// Func End, Address: 0x22de94, Func Offset: 0x24
}

// 
// Start address: 0x22dea0
int GetPool()
{
	int i;
	_anon1* pool;
	// Line 47, Address: 0x22dea0, Func Offset: 0
	// Line 50, Address: 0x22dea4, Func Offset: 0x4
	// Line 47, Address: 0x22dea8, Func Offset: 0x8
	// Line 50, Address: 0x22deac, Func Offset: 0xc
	// Line 51, Address: 0x22deb0, Func Offset: 0x10
	// Line 52, Address: 0x22deb8, Func Offset: 0x18
	// Line 53, Address: 0x22dec4, Func Offset: 0x24
	// Line 54, Address: 0x22decc, Func Offset: 0x2c
	// Line 56, Address: 0x22dee0, Func Offset: 0x40
	// Func End, Address: 0x22deec, Func Offset: 0x4c
}

// 
// Start address: 0x22def0
void sfMaphitMovesInit()
{
	// Line 61, Address: 0x22def0, Func Offset: 0
	// Func End, Address: 0x22df00, Func Offset: 0x10
}

// 
// Start address: 0x22df00
int sfMaphitMovesEntry(_anon5* polygons, int n_polygons)
{
	_anon1* pool;
	int idx;
	// Line 82, Address: 0x22df00, Func Offset: 0
	// Line 85, Address: 0x22df08, Func Offset: 0x8
	// Line 86, Address: 0x22df10, Func Offset: 0x10
	// Line 87, Address: 0x22df18, Func Offset: 0x18
	// Line 89, Address: 0x22df20, Func Offset: 0x20
	// Line 91, Address: 0x22df28, Func Offset: 0x28
	// Line 92, Address: 0x22df34, Func Offset: 0x34
	// Line 93, Address: 0x22df38, Func Offset: 0x38
	// Func End, Address: 0x22df44, Func Offset: 0x44
}

// 
// Start address: 0x22df50
void sfMaphitMovesRemove(int id)
{
	_anon1* pool;
	// Line 100, Address: 0x22df50, Func Offset: 0
	// Line 102, Address: 0x22df58, Func Offset: 0x8
	// Line 103, Address: 0x22df60, Func Offset: 0x10
	// Line 105, Address: 0x22df68, Func Offset: 0x18
	// Line 106, Address: 0x22df6c, Func Offset: 0x1c
	// Line 107, Address: 0x22df70, Func Offset: 0x20
	// Func End, Address: 0x22df7c, Func Offset: 0x2c
}

// 
// Start address: 0x22df80
void sfMaphitMovesRemoveAll()
{
	int i;
	// Line 113, Address: 0x22df80, Func Offset: 0
	// Line 115, Address: 0x22df8c, Func Offset: 0xc
	// Line 120, Address: 0x22df90, Func Offset: 0x10
	// Line 121, Address: 0x22df98, Func Offset: 0x18
	// Line 122, Address: 0x22dfac, Func Offset: 0x2c
	// Func End, Address: 0x22dfbc, Func Offset: 0x3c
}

// 
// Start address: 0x22dfc0
void sfMaphitMovesTestSphere(_anon0* ball)
{
	int i;
	_anon1* pool;
	// Line 128, Address: 0x22dfc0, Func Offset: 0
	// Line 130, Address: 0x22dfd4, Func Offset: 0x14
	// Line 131, Address: 0x22dfd8, Func Offset: 0x18
	// Line 132, Address: 0x22dfe0, Func Offset: 0x20
	// Line 134, Address: 0x22dfec, Func Offset: 0x2c
	// Line 135, Address: 0x22dff4, Func Offset: 0x34
	// Line 136, Address: 0x22e008, Func Offset: 0x48
	// Func End, Address: 0x22e01c, Func Offset: 0x5c
}

// 
// Start address: 0x22e020
void sfMaphitMovesTestLine(_anon4* line)
{
	int i;
	_anon1* pool;
	// Line 156, Address: 0x22e020, Func Offset: 0
	// Line 158, Address: 0x22e034, Func Offset: 0x14
	// Line 159, Address: 0x22e038, Func Offset: 0x18
	// Line 160, Address: 0x22e040, Func Offset: 0x20
	// Line 162, Address: 0x22e04c, Func Offset: 0x2c
	// Line 163, Address: 0x22e054, Func Offset: 0x34
	// Line 164, Address: 0x22e068, Func Offset: 0x48
	// Func End, Address: 0x22e07c, Func Offset: 0x5c
}

// 
// Start address: 0x22e080
void sfMaphitMovesTestFirstFrontHit(_anon4* line)
{
	int i;
	_anon1* pool;
	// Line 170, Address: 0x22e080, Func Offset: 0
	// Line 172, Address: 0x22e094, Func Offset: 0x14
	// Line 173, Address: 0x22e098, Func Offset: 0x18
	// Line 174, Address: 0x22e0a0, Func Offset: 0x20
	// Line 176, Address: 0x22e0ac, Func Offset: 0x2c
	// Line 177, Address: 0x22e0b4, Func Offset: 0x34
	// Line 178, Address: 0x22e0c8, Func Offset: 0x48
	// Func End, Address: 0x22e0dc, Func Offset: 0x5c
}

// 
// Start address: 0x22e0e0
void sfMaphitMovesTestFirstBackHit(_anon4* line)
{
	int i;
	_anon1* pool;
	// Line 184, Address: 0x22e0e0, Func Offset: 0
	// Line 186, Address: 0x22e0f4, Func Offset: 0x14
	// Line 187, Address: 0x22e0f8, Func Offset: 0x18
	// Line 188, Address: 0x22e100, Func Offset: 0x20
	// Line 190, Address: 0x22e10c, Func Offset: 0x2c
	// Line 191, Address: 0x22e114, Func Offset: 0x34
	// Line 192, Address: 0x22e128, Func Offset: 0x48
	// Func End, Address: 0x22e13c, Func Offset: 0x5c
}

// 
// Start address: 0x22e140
int sfMaphitMovesCreateCylinder(_anon5* pol, float* pos, float r, float h, float rot, int vertex, sfMaphitMaterialType material_type)
{
	int i;
	float v0;
	float v1;
	float v0;
	float v1;
	// Line 209, Address: 0x22e140, Func Offset: 0
	// Line 212, Address: 0x22e18c, Func Offset: 0x4c
	// Line 216, Address: 0x22e1a0, Func Offset: 0x60
	// Line 218, Address: 0x22e1c0, Func Offset: 0x80
	// Line 219, Address: 0x22e20c, Func Offset: 0xcc
	// Line 218, Address: 0x22e224, Func Offset: 0xe4
	// Line 219, Address: 0x22e228, Func Offset: 0xe8
	// Line 221, Address: 0x22e25c, Func Offset: 0x11c
	// Line 219, Address: 0x22e264, Func Offset: 0x124
	// Line 223, Address: 0x22e268, Func Offset: 0x128
	// Line 225, Address: 0x22e284, Func Offset: 0x144
	// Line 228, Address: 0x22e298, Func Offset: 0x158
	// Line 225, Address: 0x22e29c, Func Offset: 0x15c
	// Line 228, Address: 0x22e2a4, Func Offset: 0x164
	// Line 230, Address: 0x22e2bc, Func Offset: 0x17c
	// Line 238, Address: 0x22e2cc, Func Offset: 0x18c
	// Line 230, Address: 0x22e2d4, Func Offset: 0x194
	// Line 233, Address: 0x22e2e4, Func Offset: 0x1a4
	// Line 236, Address: 0x22e2f0, Func Offset: 0x1b0
	// Line 238, Address: 0x22e2fc, Func Offset: 0x1bc
	// Line 239, Address: 0x22e304, Func Offset: 0x1c4
	// Line 241, Address: 0x22e308, Func Offset: 0x1c8
	// Line 239, Address: 0x22e310, Func Offset: 0x1d0
	// Line 241, Address: 0x22e314, Func Offset: 0x1d4
	// Line 242, Address: 0x22e320, Func Offset: 0x1e0
	// Line 244, Address: 0x22e328, Func Offset: 0x1e8
	// Line 246, Address: 0x22e350, Func Offset: 0x210
	// Line 247, Address: 0x22e39c, Func Offset: 0x25c
	// Line 246, Address: 0x22e3cc, Func Offset: 0x28c
	// Line 247, Address: 0x22e3d0, Func Offset: 0x290
	// Line 249, Address: 0x22e3ec, Func Offset: 0x2ac
	// Line 247, Address: 0x22e3f4, Func Offset: 0x2b4
	// Line 251, Address: 0x22e3f8, Func Offset: 0x2b8
	// Line 253, Address: 0x22e414, Func Offset: 0x2d4
	// Line 256, Address: 0x22e428, Func Offset: 0x2e8
	// Line 253, Address: 0x22e42c, Func Offset: 0x2ec
	// Line 256, Address: 0x22e434, Func Offset: 0x2f4
	// Line 258, Address: 0x22e44c, Func Offset: 0x30c
	// Line 266, Address: 0x22e45c, Func Offset: 0x31c
	// Line 258, Address: 0x22e464, Func Offset: 0x324
	// Line 261, Address: 0x22e474, Func Offset: 0x334
	// Line 264, Address: 0x22e480, Func Offset: 0x340
	// Line 266, Address: 0x22e48c, Func Offset: 0x34c
	// Line 267, Address: 0x22e494, Func Offset: 0x354
	// Line 269, Address: 0x22e498, Func Offset: 0x358
	// Line 267, Address: 0x22e4a0, Func Offset: 0x360
	// Line 269, Address: 0x22e4a4, Func Offset: 0x364
	// Line 271, Address: 0x22e4b0, Func Offset: 0x370
	// Line 272, Address: 0x22e4b8, Func Offset: 0x378
	// Func End, Address: 0x22e4f0, Func Offset: 0x3b0
}

