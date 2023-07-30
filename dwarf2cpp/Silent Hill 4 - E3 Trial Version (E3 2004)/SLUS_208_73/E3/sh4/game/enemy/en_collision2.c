typedef struct EnemyPrism;
typedef struct EnemyBlockHitWork;
typedef struct EnemyCapsuleSet;
typedef struct _anon0;
typedef struct EnemyExtendedPolygonVertex;
typedef struct EnemyCapsule;
typedef struct sfObj;
typedef struct sfAllocateList;
typedef struct EnemyLocalHitWork;
typedef struct sgBone;
typedef struct EnemyMaphitMoves;
typedef struct EnemyBlockHit;
typedef struct EnemyObjHook2;
typedef enum sfMaphitMaterialType : unsigned char;
typedef union _anon1;
typedef struct EnemyExtendedPolygon;
typedef struct _anon2;
typedef union _anon3;

typedef void(*type_5)(sfObj*);
typedef void(*type_6)(sfObj*);
typedef void(*type_13)(void*);

typedef float type_0[4][8];
typedef int type_1[2];
typedef float type_2[4];
typedef float type_3[4];
typedef _anon1 type_4[256];
typedef float type_7[4][24];
typedef short type_8[2];
typedef unsigned short type_9[2];
typedef char type_10[4];
typedef unsigned char type_11[4];
typedef float type_12[1];
typedef int type_14[1];
typedef _anon2 type_15[4];
typedef unsigned char type_16[4];
typedef unsigned char type_17[4][6];
typedef _anon3 type_18[0];

struct EnemyPrism
{
	float top[4];
	float end[4];
	float width;
};

struct EnemyBlockHitWork
{
	float polygon[4][24];
	int id;
};

struct EnemyCapsuleSet
{
	sgBone bone;
	float radius;
	float height;
	int id;
};

struct _anon0
{
	_anon3 vertex[0];
};

struct EnemyExtendedPolygonVertex
{
	float x;
	float z;
	float dx;
	float dz;
	EnemyExtendedPolygonVertex* next;
	EnemyExtendedPolygonVertex* prev;
};

struct EnemyCapsule
{
	float trans[4];
	float rot[4];
	float radius;
	float height;
	int padding[2];
};

struct sfObj
{
	_anon1 fwork[256];
	_anon1* work;
	void(*func)(sfObj*);
	_anon1* work_pt0;
	_anon1* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon1* sys_work;
	_anon1* scene_work;
	_anon1* event_work;
	_anon1* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct sfAllocateList
{
	char* work_top;
	unsigned int size;
	int number;
};

struct EnemyLocalHitWork
{
	sfAllocateList capsules;
	int id;
};

struct sgBone
{
	float rot[4];
	float trans[4];
	float scale[4];
	float abs_rot[4];
	float abs_trans[4];
	sgBone* parent;
	sgBone* child_list;
	sgBone* child_sibling;
	unsigned short last;
	unsigned short flag;
	float partly_blend_rate;
};

struct EnemyMaphitMoves
{
	_anon0* listbuffer;
	int n_polygons;
	int id;
};

struct EnemyBlockHit
{
	float center[4];
	float front;
	float rear;
	float upper;
	float lower;
	float width;
	float rotate;
};

struct EnemyObjHook2
{
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

union _anon1
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

struct EnemyExtendedPolygon
{
	EnemyExtendedPolygonVertex* work;
	EnemyExtendedPolygonVertex* top;
	int vertex_max;
	int vertex_number;
	float higher;
	float lower;
};

struct _anon2
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

union _anon3
{
	float node[4];
	_anon2 data[4];
};

float sg_vector_unit_x[4];
unsigned char box_vertices[4][6];
void(*EnemyLocalHitCheckParents)(void*);
int tmp_hit_count;
EnemyCapsule* tmp_spr_work;
int tmp_capsule_number;

void EnemyExtendedPolygonConstruct(EnemyExtendedPolygon* pep, int max);
void EnemyExtendedPolygonDestruct(EnemyExtendedPolygon* pep);
EnemyExtendedPolygonVertex* allocate_vertex(EnemyExtendedPolygon* pep);
void free_vertex(EnemyExtendedPolygonVertex* pv);
void add_vertex_in_polygon(EnemyExtendedPolygon* pep, float* pos);
void EnemyExtendedPolygonAddPrism(EnemyExtendedPolygon* pep, EnemyPrism* pp);
void EnemyMaphitMovesConstruct(EnemyMaphitMoves* pmm);
void EnemyMaphitMovesDestruct(EnemyMaphitMoves* pmm);
void EnemyMaphitMovesSetExtendedPolygon(EnemyMaphitMoves* pmm, EnemyExtendedPolygon* pep, sfMaphitMaterialType mtype);
void make_box(_anon0* poly, float vertices[4]);
EnemyBlockHitWork* EnemyBlockHitMake(EnemyBlockHit* pbh, sfMaphitMaterialType mtype);
void EnemyBlockHitDelete(EnemyBlockHitWork* pbhw);
EnemyLocalHitWork* EnemyLocalHitWorkNew(sfObj* obj);
void EnemyLocalHitWorkDelete(EnemyLocalHitWork* elh);
int EnemyLocalHitCapsuleNew(EnemyLocalHitWork* elh);
EnemyCapsuleSet* get_capsule(EnemyLocalHitWork* elh, int id);
void EnemyLocalHitCapsuleSet(EnemyLocalHitWork* elh, int id, sgBone* parent, float* pos1, float* pos2, float radius);
void EnemyLocalHitCheckParents(void* elh);
int hittest_capsule(EnemyCapsule* ptc, float* pos, float radius, float* ppos);
void EnemyLocalHitTestPre(EnemyLocalHitWork* elh);
int EnemyLocalHitTestSphere(float* center, float radius, float* ppos, float* after_pos);
void EnemyLocalHitTestPost();

// 
// Start address: 0x282c00
void EnemyExtendedPolygonConstruct(EnemyExtendedPolygon* pep, int max)
{
	EnemyExtendedPolygonVertex* pv;
	int i;
	// Line 60, Address: 0x282c00, Func Offset: 0
	// Line 63, Address: 0x282c04, Func Offset: 0x4
	// Line 60, Address: 0x282c08, Func Offset: 0x8
	// Line 63, Address: 0x282c0c, Func Offset: 0xc
	// Line 60, Address: 0x282c10, Func Offset: 0x10
	// Line 63, Address: 0x282c20, Func Offset: 0x20
	// Line 66, Address: 0x282c30, Func Offset: 0x30
	// Line 67, Address: 0x282c3c, Func Offset: 0x3c
	// Line 73, Address: 0x282c40, Func Offset: 0x40
	// Line 68, Address: 0x282c44, Func Offset: 0x44
	// Line 69, Address: 0x282c48, Func Offset: 0x48
	// Line 70, Address: 0x282c4c, Func Offset: 0x4c
	// Line 71, Address: 0x282c50, Func Offset: 0x50
	// Line 72, Address: 0x282c54, Func Offset: 0x54
	// Line 73, Address: 0x282c58, Func Offset: 0x58
	// Line 74, Address: 0x282c70, Func Offset: 0x70
	// Line 75, Address: 0x282c78, Func Offset: 0x78
	// Line 73, Address: 0x282cbc, Func Offset: 0xbc
	// Line 75, Address: 0x282cc0, Func Offset: 0xc0
	// Line 76, Address: 0x282ce0, Func Offset: 0xe0
	// Func End, Address: 0x282cf4, Func Offset: 0xf4
}

// 
// Start address: 0x282d00
void EnemyExtendedPolygonDestruct(EnemyExtendedPolygon* pep)
{
	// Line 82, Address: 0x282d00, Func Offset: 0
	// Line 83, Address: 0x282d10, Func Offset: 0x10
	// Line 84, Address: 0x282d18, Func Offset: 0x18
	// Line 85, Address: 0x282d20, Func Offset: 0x20
	// Line 86, Address: 0x282d24, Func Offset: 0x24
	// Line 87, Address: 0x282d28, Func Offset: 0x28
	// Line 88, Address: 0x282d2c, Func Offset: 0x2c
	// Line 89, Address: 0x282d30, Func Offset: 0x30
	// Func End, Address: 0x282d40, Func Offset: 0x40
}

// 
// Start address: 0x282d40
EnemyExtendedPolygonVertex* allocate_vertex(EnemyExtendedPolygon* pep)
{
	EnemyExtendedPolygonVertex* pv;
	// Line 98, Address: 0x282d40, Func Offset: 0
	// Line 99, Address: 0x282d44, Func Offset: 0x4
	// Line 100, Address: 0x282d50, Func Offset: 0x10
	// Line 101, Address: 0x282d54, Func Offset: 0x14
	// Line 103, Address: 0x282d70, Func Offset: 0x30
	// Func End, Address: 0x282d78, Func Offset: 0x38
}

// 
// Start address: 0x282d80
void free_vertex(EnemyExtendedPolygonVertex* pv)
{
	// Line 113, Address: 0x282d80, Func Offset: 0
	// Func End, Address: 0x282d88, Func Offset: 0x8
}

// 
// Start address: 0x282d90
void add_vertex_in_polygon(EnemyExtendedPolygon* pep, float* pos)
{
	EnemyExtendedPolygonVertex* npv;
	EnemyExtendedPolygonVertex* pv;
	EnemyExtendedPolygonVertex* pv2;
	EnemyExtendedPolygonVertex* tpv;
	int n;
	float px;
	float pz;
	float dx;
	float dz;
	// Line 121, Address: 0x282d90, Func Offset: 0
	// Line 128, Address: 0x282d98, Func Offset: 0x8
	// Line 126, Address: 0x282d9c, Func Offset: 0xc
	// Line 127, Address: 0x282da0, Func Offset: 0x10
	// Line 128, Address: 0x282da4, Func Offset: 0x14
	// Line 129, Address: 0x282dac, Func Offset: 0x1c
	// Line 130, Address: 0x282db8, Func Offset: 0x28
	// Line 131, Address: 0x282dc0, Func Offset: 0x30
	// Line 138, Address: 0x282dc4, Func Offset: 0x34
	// Line 132, Address: 0x282dc8, Func Offset: 0x38
	// Line 133, Address: 0x282dcc, Func Offset: 0x3c
	// Line 134, Address: 0x282dd0, Func Offset: 0x40
	// Line 135, Address: 0x282dd4, Func Offset: 0x44
	// Line 136, Address: 0x282dd8, Func Offset: 0x48
	// Line 137, Address: 0x282ddc, Func Offset: 0x4c
	// Line 138, Address: 0x282de0, Func Offset: 0x50
	// Line 139, Address: 0x282de4, Func Offset: 0x54
	// Line 140, Address: 0x282de8, Func Offset: 0x58
	// Line 143, Address: 0x282df0, Func Offset: 0x60
	// Line 145, Address: 0x282df4, Func Offset: 0x64
	// Line 144, Address: 0x282dfc, Func Offset: 0x6c
	// Line 145, Address: 0x282e00, Func Offset: 0x70
	// Line 148, Address: 0x282e30, Func Offset: 0xa0
	// Line 149, Address: 0x282e3c, Func Offset: 0xac
	// Line 150, Address: 0x282e44, Func Offset: 0xb4
	// Line 151, Address: 0x282e4c, Func Offset: 0xbc
	// Line 153, Address: 0x282e5c, Func Offset: 0xcc
	// Line 156, Address: 0x282e68, Func Offset: 0xd8
	// Line 159, Address: 0x282e6c, Func Offset: 0xdc
	// Line 157, Address: 0x282e74, Func Offset: 0xe4
	// Line 158, Address: 0x282e78, Func Offset: 0xe8
	// Line 157, Address: 0x282e7c, Func Offset: 0xec
	// Line 158, Address: 0x282e80, Func Offset: 0xf0
	// Line 159, Address: 0x282e84, Func Offset: 0xf4
	// Line 160, Address: 0x282e98, Func Offset: 0x108
	// Line 161, Address: 0x282e9c, Func Offset: 0x10c
	// Line 162, Address: 0x282ea0, Func Offset: 0x110
	// Line 164, Address: 0x282ea4, Func Offset: 0x114
	// Line 163, Address: 0x282ea8, Func Offset: 0x118
	// Line 165, Address: 0x282eac, Func Offset: 0x11c
	// Line 164, Address: 0x282eb0, Func Offset: 0x120
	// Line 166, Address: 0x282eb4, Func Offset: 0x124
	// Line 165, Address: 0x282ebc, Func Offset: 0x12c
	// Line 166, Address: 0x282ec0, Func Offset: 0x130
	// Line 167, Address: 0x282ed4, Func Offset: 0x144
	// Line 168, Address: 0x282ee0, Func Offset: 0x150
	// Line 169, Address: 0x282ee4, Func Offset: 0x154
	// Line 170, Address: 0x282ee8, Func Offset: 0x158
	// Line 172, Address: 0x282ef8, Func Offset: 0x168
	// Line 175, Address: 0x282efc, Func Offset: 0x16c
	// Line 173, Address: 0x282f04, Func Offset: 0x174
	// Line 174, Address: 0x282f08, Func Offset: 0x178
	// Line 173, Address: 0x282f0c, Func Offset: 0x17c
	// Line 174, Address: 0x282f10, Func Offset: 0x180
	// Line 175, Address: 0x282f14, Func Offset: 0x184
	// Line 178, Address: 0x282f28, Func Offset: 0x198
	// Line 180, Address: 0x282f2c, Func Offset: 0x19c
	// Line 177, Address: 0x282f30, Func Offset: 0x1a0
	// Line 181, Address: 0x282f34, Func Offset: 0x1a4
	// Line 182, Address: 0x282f38, Func Offset: 0x1a8
	// Line 181, Address: 0x282f3c, Func Offset: 0x1ac
	// Line 183, Address: 0x282f40, Func Offset: 0x1b0
	// Line 185, Address: 0x282f48, Func Offset: 0x1b8
	// Line 186, Address: 0x282f50, Func Offset: 0x1c0
	// Line 189, Address: 0x282f54, Func Offset: 0x1c4
	// Line 186, Address: 0x282f58, Func Offset: 0x1c8
	// Line 187, Address: 0x282f60, Func Offset: 0x1d0
	// Line 188, Address: 0x282f64, Func Offset: 0x1d4
	// Line 187, Address: 0x282f68, Func Offset: 0x1d8
	// Line 188, Address: 0x282f6c, Func Offset: 0x1dc
	// Line 190, Address: 0x282f70, Func Offset: 0x1e0
	// Line 191, Address: 0x282f8c, Func Offset: 0x1fc
	// Line 192, Address: 0x282f90, Func Offset: 0x200
	// Line 193, Address: 0x282f94, Func Offset: 0x204
	// Line 194, Address: 0x282f98, Func Offset: 0x208
	// Line 195, Address: 0x282fa4, Func Offset: 0x214
	// Line 196, Address: 0x282fb0, Func Offset: 0x220
	// Line 197, Address: 0x282fb4, Func Offset: 0x224
	// Line 198, Address: 0x282fb8, Func Offset: 0x228
	// Line 199, Address: 0x282fc4, Func Offset: 0x234
	// Line 200, Address: 0x282fd0, Func Offset: 0x240
	// Line 201, Address: 0x282fd4, Func Offset: 0x244
	// Line 202, Address: 0x282fd8, Func Offset: 0x248
	// Line 203, Address: 0x282fe4, Func Offset: 0x254
	// Func End, Address: 0x282ff4, Func Offset: 0x264
}

// 
// Start address: 0x283000
void EnemyExtendedPolygonAddPrism(EnemyExtendedPolygon* pep, EnemyPrism* pp)
{
	float* pos;
	float* tpos;
	float* dir;
	float* dir2;
	float* dir3;
	float d;
	// Line 211, Address: 0x283000, Func Offset: 0
	// Line 214, Address: 0x28300c, Func Offset: 0xc
	// Line 219, Address: 0x283014, Func Offset: 0x14
	// Line 214, Address: 0x283018, Func Offset: 0x18
	// Line 215, Address: 0x28302c, Func Offset: 0x2c
	// Line 214, Address: 0x283030, Func Offset: 0x30
	// Line 217, Address: 0x283034, Func Offset: 0x34
	// Line 216, Address: 0x283038, Func Offset: 0x38
	// Line 218, Address: 0x28303c, Func Offset: 0x3c
	// Line 219, Address: 0x283040, Func Offset: 0x40
	// Line 220, Address: 0x283054, Func Offset: 0x54
	// Line 221, Address: 0x283078, Func Offset: 0x78
	// Line 222, Address: 0x283088, Func Offset: 0x88
	// Line 223, Address: 0x2830a0, Func Offset: 0xa0
	// Line 224, Address: 0x2830a8, Func Offset: 0xa8
	// Line 225, Address: 0x2830b0, Func Offset: 0xb0
	// Line 226, Address: 0x2830dc, Func Offset: 0xdc
	// Line 227, Address: 0x2830e0, Func Offset: 0xe0
	// Line 230, Address: 0x2830e4, Func Offset: 0xe4
	// Line 227, Address: 0x2830ec, Func Offset: 0xec
	// Line 228, Address: 0x2830f0, Func Offset: 0xf0
	// Line 231, Address: 0x2830f4, Func Offset: 0xf4
	// Line 228, Address: 0x2830f8, Func Offset: 0xf8
	// Line 229, Address: 0x2830fc, Func Offset: 0xfc
	// Line 230, Address: 0x283108, Func Offset: 0x108
	// Line 231, Address: 0x28310c, Func Offset: 0x10c
	// Line 232, Address: 0x283110, Func Offset: 0x110
	// Line 233, Address: 0x28313c, Func Offset: 0x13c
	// Line 235, Address: 0x28315c, Func Offset: 0x15c
	// Line 236, Address: 0x283168, Func Offset: 0x168
	// Line 237, Address: 0x283174, Func Offset: 0x174
	// Line 238, Address: 0x283178, Func Offset: 0x178
	// Line 239, Address: 0x28317c, Func Offset: 0x17c
	// Line 238, Address: 0x283184, Func Offset: 0x184
	// Line 239, Address: 0x283188, Func Offset: 0x188
	// Line 241, Address: 0x2831a0, Func Offset: 0x1a0
	// Line 243, Address: 0x2831c0, Func Offset: 0x1c0
	// Line 244, Address: 0x2831d4, Func Offset: 0x1d4
	// Line 245, Address: 0x2831e8, Func Offset: 0x1e8
	// Line 246, Address: 0x2831f0, Func Offset: 0x1f0
	// Line 247, Address: 0x283204, Func Offset: 0x204
	// Line 248, Address: 0x28320c, Func Offset: 0x20c
	// Line 249, Address: 0x283224, Func Offset: 0x224
	// Line 250, Address: 0x283238, Func Offset: 0x238
	// Line 251, Address: 0x283240, Func Offset: 0x240
	// Line 252, Address: 0x283254, Func Offset: 0x254
	// Line 253, Address: 0x28325c, Func Offset: 0x25c
	// Line 254, Address: 0x283274, Func Offset: 0x274
	// Line 255, Address: 0x283298, Func Offset: 0x298
	// Line 256, Address: 0x2832c0, Func Offset: 0x2c0
	// Line 257, Address: 0x2832d4, Func Offset: 0x2d4
	// Line 258, Address: 0x2832dc, Func Offset: 0x2dc
	// Line 259, Address: 0x2832f0, Func Offset: 0x2f0
	// Line 260, Address: 0x2832f8, Func Offset: 0x2f8
	// Line 261, Address: 0x28330c, Func Offset: 0x30c
	// Func End, Address: 0x283318, Func Offset: 0x318
}

// 
// Start address: 0x283320
void EnemyMaphitMovesConstruct(EnemyMaphitMoves* pmm)
{
	// Line 302, Address: 0x283320, Func Offset: 0
	// Line 304, Address: 0x283324, Func Offset: 0x4
	// Func End, Address: 0x28332c, Func Offset: 0xc
}

// 
// Start address: 0x283330
void EnemyMaphitMovesDestruct(EnemyMaphitMoves* pmm)
{
	// Line 310, Address: 0x283330, Func Offset: 0
	// Line 311, Address: 0x28333c, Func Offset: 0xc
	// Line 312, Address: 0x283348, Func Offset: 0x18
	// Line 313, Address: 0x283350, Func Offset: 0x20
	// Line 314, Address: 0x283358, Func Offset: 0x28
	// Line 315, Address: 0x28335c, Func Offset: 0x2c
	// Line 316, Address: 0x283360, Func Offset: 0x30
	// Line 317, Address: 0x283364, Func Offset: 0x34
	// Func End, Address: 0x283374, Func Offset: 0x44
}

// 
// Start address: 0x283380
void EnemyMaphitMovesSetExtendedPolygon(EnemyMaphitMoves* pmm, EnemyExtendedPolygon* pep, sfMaphitMaterialType mtype)
{
	int i;
	int vn;
	int renew;
	_anon0* pp;
	EnemyExtendedPolygonVertex* pv;
	// Line 327, Address: 0x283380, Func Offset: 0
	// Line 333, Address: 0x2833ac, Func Offset: 0x2c
	// Line 332, Address: 0x2833b0, Func Offset: 0x30
	// Line 333, Address: 0x2833b4, Func Offset: 0x34
	// Line 335, Address: 0x2833bc, Func Offset: 0x3c
	// Line 336, Address: 0x2833c8, Func Offset: 0x48
	// Line 337, Address: 0x2833d0, Func Offset: 0x50
	// Line 339, Address: 0x2833dc, Func Offset: 0x5c
	// Line 340, Address: 0x2833e4, Func Offset: 0x64
	// Line 339, Address: 0x2833e8, Func Offset: 0x68
	// Line 340, Address: 0x2833f0, Func Offset: 0x70
	// Line 342, Address: 0x2833f8, Func Offset: 0x78
	// Line 341, Address: 0x2833fc, Func Offset: 0x7c
	// Line 342, Address: 0x283400, Func Offset: 0x80
	// Line 343, Address: 0x283408, Func Offset: 0x88
	// Line 344, Address: 0x283410, Func Offset: 0x90
	// Line 345, Address: 0x283420, Func Offset: 0xa0
	// Line 346, Address: 0x283424, Func Offset: 0xa4
	// Line 345, Address: 0x28342c, Func Offset: 0xac
	// Line 346, Address: 0x283430, Func Offset: 0xb0
	// Line 347, Address: 0x283438, Func Offset: 0xb8
	// Line 348, Address: 0x283440, Func Offset: 0xc0
	// Line 349, Address: 0x283444, Func Offset: 0xc4
	// Line 350, Address: 0x283448, Func Offset: 0xc8
	// Line 351, Address: 0x28344c, Func Offset: 0xcc
	// Line 352, Address: 0x283450, Func Offset: 0xd0
	// Line 365, Address: 0x283460, Func Offset: 0xe0
	// Line 357, Address: 0x283464, Func Offset: 0xe4
	// Line 365, Address: 0x283468, Func Offset: 0xe8
	// Line 357, Address: 0x28346c, Func Offset: 0xec
	// Line 358, Address: 0x283474, Func Offset: 0xf4
	// Line 359, Address: 0x283480, Func Offset: 0x100
	// Line 360, Address: 0x28348c, Func Offset: 0x10c
	// Line 361, Address: 0x283498, Func Offset: 0x118
	// Line 362, Address: 0x28349c, Func Offset: 0x11c
	// Line 363, Address: 0x2834a8, Func Offset: 0x128
	// Line 364, Address: 0x2834b4, Func Offset: 0x134
	// Line 365, Address: 0x2834bc, Func Offset: 0x13c
	// Line 366, Address: 0x2834c8, Func Offset: 0x148
	// Line 367, Address: 0x2834d0, Func Offset: 0x150
	// Line 369, Address: 0x2834e0, Func Offset: 0x160
	// Func End, Address: 0x283508, Func Offset: 0x188
}

// 
// Start address: 0x283510
void make_box(_anon0* poly, float vertices[4])
{
	_anon0* pp;
	float* src;
	int i;
	// Line 391, Address: 0x283510, Func Offset: 0
	// Line 396, Address: 0x283528, Func Offset: 0x18
	// Line 398, Address: 0x283530, Func Offset: 0x20
	// Line 399, Address: 0x28353c, Func Offset: 0x2c
	// Line 408, Address: 0x283548, Func Offset: 0x38
	// Line 402, Address: 0x28354c, Func Offset: 0x3c
	// Line 408, Address: 0x283550, Func Offset: 0x40
	// Line 402, Address: 0x283554, Func Offset: 0x44
	// Line 403, Address: 0x28355c, Func Offset: 0x4c
	// Line 404, Address: 0x283564, Func Offset: 0x54
	// Line 405, Address: 0x28356c, Func Offset: 0x5c
	// Line 402, Address: 0x283578, Func Offset: 0x68
	// Line 405, Address: 0x28357c, Func Offset: 0x6c
	// Line 402, Address: 0x28359c, Func Offset: 0x8c
	// Line 405, Address: 0x2835a0, Func Offset: 0x90
	// Line 402, Address: 0x2835c0, Func Offset: 0xb0
	// Line 407, Address: 0x2835c4, Func Offset: 0xb4
	// Line 405, Address: 0x2835c8, Func Offset: 0xb8
	// Line 407, Address: 0x2835e4, Func Offset: 0xd4
	// Line 408, Address: 0x2835ec, Func Offset: 0xdc
	// Line 409, Address: 0x2835f4, Func Offset: 0xe4
	// Func End, Address: 0x283608, Func Offset: 0xf8
}

// 
// Start address: 0x283610
EnemyBlockHitWork* EnemyBlockHitMake(EnemyBlockHit* pbh, sfMaphitMaterialType mtype)
{
	EnemyBlockHitWork* pbhw;
	_anon0* pp;
	float vertex[4][8];
	float dirf[4];
	float dirv[4];
	float tpos[4];
	float vec[4];
	int i;
	// Line 418, Address: 0x283610, Func Offset: 0
	// Line 423, Address: 0x283630, Func Offset: 0x20
	// Line 424, Address: 0x28363c, Func Offset: 0x2c
	// Line 425, Address: 0x283650, Func Offset: 0x40
	// Line 426, Address: 0x28365c, Func Offset: 0x4c
	// Line 427, Address: 0x283668, Func Offset: 0x58
	// Line 430, Address: 0x283670, Func Offset: 0x60
	// Line 428, Address: 0x283674, Func Offset: 0x64
	// Line 430, Address: 0x283678, Func Offset: 0x68
	// Line 428, Address: 0x28367c, Func Offset: 0x6c
	// Line 429, Address: 0x283680, Func Offset: 0x70
	// Line 428, Address: 0x283684, Func Offset: 0x74
	// Line 429, Address: 0x28368c, Func Offset: 0x7c
	// Line 430, Address: 0x28369c, Func Offset: 0x8c
	// Line 431, Address: 0x2836bc, Func Offset: 0xac
	// Line 432, Address: 0x2836d8, Func Offset: 0xc8
	// Line 433, Address: 0x2836f8, Func Offset: 0xe8
	// Line 434, Address: 0x283718, Func Offset: 0x108
	// Line 435, Address: 0x283740, Func Offset: 0x130
	// Line 436, Address: 0x28375c, Func Offset: 0x14c
	// Line 437, Address: 0x28377c, Func Offset: 0x16c
	// Line 438, Address: 0x28379c, Func Offset: 0x18c
	// Line 439, Address: 0x2837a8, Func Offset: 0x198
	// Line 440, Address: 0x2837cc, Func Offset: 0x1bc
	// Line 441, Address: 0x2837d8, Func Offset: 0x1c8
	// Line 440, Address: 0x2837dc, Func Offset: 0x1cc
	// Line 441, Address: 0x2837e0, Func Offset: 0x1d0
	// Line 442, Address: 0x2837e4, Func Offset: 0x1d4
	// Line 440, Address: 0x2837e8, Func Offset: 0x1d8
	// Line 441, Address: 0x2837f0, Func Offset: 0x1e0
	// Line 442, Address: 0x283800, Func Offset: 0x1f0
	// Line 444, Address: 0x28380c, Func Offset: 0x1fc
	// Line 445, Address: 0x28381c, Func Offset: 0x20c
	// Line 446, Address: 0x283828, Func Offset: 0x218
	// Line 447, Address: 0x283834, Func Offset: 0x224
	// Line 448, Address: 0x283838, Func Offset: 0x228
	// Line 447, Address: 0x28383c, Func Offset: 0x22c
	// Line 448, Address: 0x283844, Func Offset: 0x234
	// Line 449, Address: 0x283854, Func Offset: 0x244
	// Line 450, Address: 0x283864, Func Offset: 0x254
	// Line 451, Address: 0x283868, Func Offset: 0x258
	// Func End, Address: 0x283884, Func Offset: 0x274
}

// 
// Start address: 0x283890
void EnemyBlockHitDelete(EnemyBlockHitWork* pbhw)
{
	// Line 457, Address: 0x283890, Func Offset: 0
	// Line 458, Address: 0x2838a0, Func Offset: 0x10
	// Line 459, Address: 0x2838a8, Func Offset: 0x18
	// Line 460, Address: 0x2838b0, Func Offset: 0x20
	// Line 461, Address: 0x2838b4, Func Offset: 0x24
	// Line 463, Address: 0x2838c0, Func Offset: 0x30
	// Func End, Address: 0x2838d0, Func Offset: 0x40
}

// 
// Start address: 0x2838d0
EnemyLocalHitWork* EnemyLocalHitWorkNew(sfObj* obj)
{
	EnemyLocalHitWork* elh;
	EnemyObjHook2* phook;
	// Line 470, Address: 0x2838d0, Func Offset: 0
	// Line 473, Address: 0x2838e4, Func Offset: 0x14
	// Line 474, Address: 0x2838f0, Func Offset: 0x20
	// Line 475, Address: 0x283900, Func Offset: 0x30
	// Line 476, Address: 0x28390c, Func Offset: 0x3c
	// Line 477, Address: 0x283920, Func Offset: 0x50
	// Line 479, Address: 0x28392c, Func Offset: 0x5c
	// Line 480, Address: 0x283948, Func Offset: 0x78
	// Line 481, Address: 0x283950, Func Offset: 0x80
	// Func End, Address: 0x283968, Func Offset: 0x98
}

// 
// Start address: 0x283970
void EnemyLocalHitWorkDelete(EnemyLocalHitWork* elh)
{
	EnemyCapsuleSet* pc;
	// Line 487, Address: 0x283970, Func Offset: 0
	// Line 489, Address: 0x283980, Func Offset: 0x10
	// Line 490, Address: 0x283988, Func Offset: 0x18
	// Line 491, Address: 0x283994, Func Offset: 0x24
	// Line 492, Address: 0x2839a0, Func Offset: 0x30
	// Line 493, Address: 0x2839a8, Func Offset: 0x38
	// Line 494, Address: 0x2839b8, Func Offset: 0x48
	// Line 495, Address: 0x2839c0, Func Offset: 0x50
	// Line 496, Address: 0x2839c8, Func Offset: 0x58
	// Line 497, Address: 0x2839d0, Func Offset: 0x60
	// Func End, Address: 0x2839e4, Func Offset: 0x74
}

// 
// Start address: 0x2839f0
int EnemyLocalHitCapsuleNew(EnemyLocalHitWork* elh)
{
	EnemyCapsuleSet* pc;
	int id;
	// Line 504, Address: 0x2839f0, Func Offset: 0
	// Line 507, Address: 0x283a04, Func Offset: 0x14
	// Line 508, Address: 0x283a18, Func Offset: 0x28
	// Line 509, Address: 0x283a24, Func Offset: 0x34
	// Line 510, Address: 0x283a38, Func Offset: 0x48
	// Line 511, Address: 0x283a3c, Func Offset: 0x4c
	// Line 510, Address: 0x283a40, Func Offset: 0x50
	// Line 511, Address: 0x283a44, Func Offset: 0x54
	// Line 512, Address: 0x283a4c, Func Offset: 0x5c
	// Line 515, Address: 0x283a50, Func Offset: 0x60
	// Line 513, Address: 0x283a54, Func Offset: 0x64
	// Line 514, Address: 0x283a58, Func Offset: 0x68
	// Line 515, Address: 0x283a5c, Func Offset: 0x6c
	// Line 516, Address: 0x283a60, Func Offset: 0x70
	// Func End, Address: 0x283a78, Func Offset: 0x88
}

// 
// Start address: 0x283a80
EnemyCapsuleSet* get_capsule(EnemyLocalHitWork* elh, int id)
{
	EnemyCapsuleSet* pc;
	// Line 524, Address: 0x283a80, Func Offset: 0
	// Line 526, Address: 0x283a94, Func Offset: 0x14
	// Line 527, Address: 0x283ab0, Func Offset: 0x30
	// Line 528, Address: 0x283ab8, Func Offset: 0x38
	// Line 529, Address: 0x283ac0, Func Offset: 0x40
	// Line 532, Address: 0x283acc, Func Offset: 0x4c
	// Line 533, Address: 0x283ad4, Func Offset: 0x54
	// Line 535, Address: 0x283ae0, Func Offset: 0x60
	// Func End, Address: 0x283af4, Func Offset: 0x74
}

// 
// Start address: 0x283b00
void EnemyLocalHitCapsuleSet(EnemyLocalHitWork* elh, int id, sgBone* parent, float* pos1, float* pos2, float radius)
{
	EnemyCapsuleSet* pc;
	sgBone* bone;
	float tpos[4];
	float vec[4];
	float rot[4];
	// Line 562, Address: 0x283b00, Func Offset: 0
	// Line 567, Address: 0x283b28, Func Offset: 0x28
	// Line 568, Address: 0x283b34, Func Offset: 0x34
	// Line 570, Address: 0x283b3c, Func Offset: 0x3c
	// Line 571, Address: 0x283b44, Func Offset: 0x44
	// Line 572, Address: 0x283b5c, Func Offset: 0x5c
	// Line 573, Address: 0x283b88, Func Offset: 0x88
	// Line 574, Address: 0x283ba4, Func Offset: 0xa4
	// Line 575, Address: 0x283bb0, Func Offset: 0xb0
	// Line 576, Address: 0x283bb8, Func Offset: 0xb8
	// Line 577, Address: 0x283bc0, Func Offset: 0xc0
	// Line 578, Address: 0x283bcc, Func Offset: 0xcc
	// Line 579, Address: 0x283bd8, Func Offset: 0xd8
	// Line 580, Address: 0x283be4, Func Offset: 0xe4
	// Line 583, Address: 0x283bf0, Func Offset: 0xf0
	// Line 582, Address: 0x283bf4, Func Offset: 0xf4
	// Line 583, Address: 0x283bf8, Func Offset: 0xf8
	// Line 585, Address: 0x283c20, Func Offset: 0x120
	// Func End, Address: 0x283c40, Func Offset: 0x140
}

// 
// Start address: 0x283c40
void EnemyLocalHitCheckParents(void* elh)
{
	EnemyCapsuleSet* pc;
	sfAllocateList* plist;
	sgBone* parent;
	sgBone* nparent;
	// Line 593, Address: 0x283c40, Func Offset: 0
	// Line 597, Address: 0x283c50, Func Offset: 0x10
	// Line 598, Address: 0x283c54, Func Offset: 0x14
	// Line 599, Address: 0x283c60, Func Offset: 0x20
	// Line 600, Address: 0x283c68, Func Offset: 0x28
	// Line 601, Address: 0x283c74, Func Offset: 0x34
	// Line 602, Address: 0x283c7c, Func Offset: 0x3c
	// Line 603, Address: 0x283c8c, Func Offset: 0x4c
	// Line 604, Address: 0x283c94, Func Offset: 0x54
	// Line 605, Address: 0x283c98, Func Offset: 0x58
	// Line 606, Address: 0x283ca8, Func Offset: 0x68
	// Line 607, Address: 0x283cb0, Func Offset: 0x70
	// Func End, Address: 0x283cc8, Func Offset: 0x88
}

// 
// Start address: 0x283cd0
int hittest_capsule(EnemyCapsule* ptc, float* pos, float radius, float* ppos)
{
	int rv;
	// Line 690, Address: 0x283cd0, Func Offset: 0
	// Line 691, Address: 0x283cd4, Func Offset: 0x4
	// Line 692, Address: 0x283cd8, Func Offset: 0x8
	// Line 693, Address: 0x283cdc, Func Offset: 0xc
	// Line 694, Address: 0x283ce0, Func Offset: 0x10
	// Line 695, Address: 0x283ce4, Func Offset: 0x14
	// Line 696, Address: 0x283ce8, Func Offset: 0x18
	// Line 697, Address: 0x283cec, Func Offset: 0x1c
	// Line 698, Address: 0x283cf0, Func Offset: 0x20
	// Line 699, Address: 0x283cf4, Func Offset: 0x24
	// Line 700, Address: 0x283cf8, Func Offset: 0x28
	// Line 701, Address: 0x283cfc, Func Offset: 0x2c
	// Line 702, Address: 0x283d00, Func Offset: 0x30
	// Line 703, Address: 0x283d04, Func Offset: 0x34
	// Line 704, Address: 0x283d08, Func Offset: 0x38
	// Line 705, Address: 0x283d0c, Func Offset: 0x3c
	// Line 706, Address: 0x283d10, Func Offset: 0x40
	// Line 707, Address: 0x283d14, Func Offset: 0x44
	// Line 708, Address: 0x283d18, Func Offset: 0x48
	// Line 709, Address: 0x283d1c, Func Offset: 0x4c
	// Line 710, Address: 0x283d20, Func Offset: 0x50
	// Line 711, Address: 0x283d24, Func Offset: 0x54
	// Line 713, Address: 0x283d2c, Func Offset: 0x5c
	// Line 715, Address: 0x283d34, Func Offset: 0x64
	// Line 716, Address: 0x283d38, Func Offset: 0x68
	// Line 717, Address: 0x283d3c, Func Offset: 0x6c
	// Line 718, Address: 0x283d40, Func Offset: 0x70
	// Line 719, Address: 0x283d44, Func Offset: 0x74
	// Line 720, Address: 0x283d48, Func Offset: 0x78
	// Line 721, Address: 0x283d4c, Func Offset: 0x7c
	// Line 722, Address: 0x283d50, Func Offset: 0x80
	// Line 723, Address: 0x283d54, Func Offset: 0x84
	// Line 724, Address: 0x283d58, Func Offset: 0x88
	// Line 725, Address: 0x283d5c, Func Offset: 0x8c
	// Line 726, Address: 0x283d60, Func Offset: 0x90
	// Line 727, Address: 0x283d64, Func Offset: 0x94
	// Line 728, Address: 0x283d68, Func Offset: 0x98
	// Line 729, Address: 0x283d6c, Func Offset: 0x9c
	// Line 730, Address: 0x283d70, Func Offset: 0xa0
	// Line 731, Address: 0x283d74, Func Offset: 0xa4
	// Line 732, Address: 0x283d78, Func Offset: 0xa8
	// Line 734, Address: 0x283d80, Func Offset: 0xb0
	// Line 735, Address: 0x283d84, Func Offset: 0xb4
	// Line 736, Address: 0x283d88, Func Offset: 0xb8
	// Line 737, Address: 0x283d8c, Func Offset: 0xbc
	// Line 738, Address: 0x283d90, Func Offset: 0xc0
	// Line 739, Address: 0x283d94, Func Offset: 0xc4
	// Line 740, Address: 0x283d98, Func Offset: 0xc8
	// Line 741, Address: 0x283d9c, Func Offset: 0xcc
	// Line 742, Address: 0x283da0, Func Offset: 0xd0
	// Line 743, Address: 0x283da4, Func Offset: 0xd4
	// Line 744, Address: 0x283da8, Func Offset: 0xd8
	// Line 745, Address: 0x283dac, Func Offset: 0xdc
	// Line 746, Address: 0x283db0, Func Offset: 0xe0
	// Line 749, Address: 0x283db8, Func Offset: 0xe8
	// Line 750, Address: 0x283dbc, Func Offset: 0xec
	// Line 751, Address: 0x283dc0, Func Offset: 0xf0
	// Line 752, Address: 0x283dc4, Func Offset: 0xf4
	// Line 753, Address: 0x283dc8, Func Offset: 0xf8
	// Line 754, Address: 0x283dcc, Func Offset: 0xfc
	// Line 755, Address: 0x283dd0, Func Offset: 0x100
	// Line 756, Address: 0x283dd4, Func Offset: 0x104
	// Line 757, Address: 0x283dd8, Func Offset: 0x108
	// Line 758, Address: 0x283ddc, Func Offset: 0x10c
	// Line 760, Address: 0x283de4, Func Offset: 0x114
	// Line 761, Address: 0x283de8, Func Offset: 0x118
	// Line 762, Address: 0x283dec, Func Offset: 0x11c
	// Line 763, Address: 0x283df0, Func Offset: 0x120
	// Line 764, Address: 0x283df4, Func Offset: 0x124
	// Line 765, Address: 0x283df8, Func Offset: 0x128
	// Line 766, Address: 0x283dfc, Func Offset: 0x12c
	// Line 767, Address: 0x283e00, Func Offset: 0x130
	// Line 768, Address: 0x283e04, Func Offset: 0x134
	// Line 769, Address: 0x283e08, Func Offset: 0x138
	// Line 770, Address: 0x283e0c, Func Offset: 0x13c
	// Line 771, Address: 0x283e10, Func Offset: 0x140
	// Line 774, Address: 0x283e18, Func Offset: 0x148
	// Line 775, Address: 0x283e1c, Func Offset: 0x14c
	// Line 776, Address: 0x283e20, Func Offset: 0x150
	// Line 777, Address: 0x283e24, Func Offset: 0x154
	// Line 778, Address: 0x283e28, Func Offset: 0x158
	// Line 782, Address: 0x283e30, Func Offset: 0x160
	// Line 784, Address: 0x283e38, Func Offset: 0x168
	// Line 785, Address: 0x283e3c, Func Offset: 0x16c
	// Line 786, Address: 0x283e40, Func Offset: 0x170
	// Line 787, Address: 0x283e44, Func Offset: 0x174
	// Line 788, Address: 0x283e48, Func Offset: 0x178
	// Line 789, Address: 0x283e4c, Func Offset: 0x17c
	// Line 790, Address: 0x283e50, Func Offset: 0x180
	// Line 791, Address: 0x283e54, Func Offset: 0x184
	// Line 792, Address: 0x283e58, Func Offset: 0x188
	// Line 793, Address: 0x283e5c, Func Offset: 0x18c
	// Line 794, Address: 0x283e60, Func Offset: 0x190
	// Line 795, Address: 0x283e64, Func Offset: 0x194
	// Line 796, Address: 0x283e68, Func Offset: 0x198
	// Line 798, Address: 0x283e70, Func Offset: 0x1a0
	// Line 799, Address: 0x283e74, Func Offset: 0x1a4
	// Line 800, Address: 0x283e78, Func Offset: 0x1a8
	// Line 801, Address: 0x283e7c, Func Offset: 0x1ac
	// Line 802, Address: 0x283e80, Func Offset: 0x1b0
	// Line 803, Address: 0x283e84, Func Offset: 0x1b4
	// Line 804, Address: 0x283e88, Func Offset: 0x1b8
	// Line 805, Address: 0x283e8c, Func Offset: 0x1bc
	// Line 806, Address: 0x283e90, Func Offset: 0x1c0
	// Line 807, Address: 0x283e94, Func Offset: 0x1c4
	// Line 808, Address: 0x283e98, Func Offset: 0x1c8
	// Line 812, Address: 0x283ea0, Func Offset: 0x1d0
	// Line 813, Address: 0x283ea4, Func Offset: 0x1d4
	// Line 814, Address: 0x283ea8, Func Offset: 0x1d8
	// Line 815, Address: 0x283eac, Func Offset: 0x1dc
	// Line 816, Address: 0x283eb0, Func Offset: 0x1e0
	// Line 817, Address: 0x283eb4, Func Offset: 0x1e4
	// Line 820, Address: 0x283eb8, Func Offset: 0x1e8
	// Line 822, Address: 0x283ec0, Func Offset: 0x1f0
	// Line 823, Address: 0x283ec4, Func Offset: 0x1f4
	// Line 824, Address: 0x283ec8, Func Offset: 0x1f8
	// Line 826, Address: 0x283ecc, Func Offset: 0x1fc
	// Line 832, Address: 0x283ed0, Func Offset: 0x200
	// Func End, Address: 0x283ed8, Func Offset: 0x208
}

// 
// Start address: 0x283ee0
void EnemyLocalHitTestPre(EnemyLocalHitWork* elh)
{
	EnemyCapsuleSet* pc;
	EnemyCapsule* pct;
	int cn;
	// Line 838, Address: 0x283ee0, Func Offset: 0
	// Line 842, Address: 0x283ef4, Func Offset: 0x14
	// Line 844, Address: 0x283efc, Func Offset: 0x1c
	// Line 845, Address: 0x283f08, Func Offset: 0x28
	// Line 846, Address: 0x283f10, Func Offset: 0x30
	// Line 848, Address: 0x283f24, Func Offset: 0x44
	// Line 849, Address: 0x283f28, Func Offset: 0x48
	// Line 848, Address: 0x283f2c, Func Offset: 0x4c
	// Line 846, Address: 0x283f30, Func Offset: 0x50
	// Line 849, Address: 0x283f34, Func Offset: 0x54
	// Line 850, Address: 0x283f3c, Func Offset: 0x5c
	// Line 849, Address: 0x283f40, Func Offset: 0x60
	// Line 851, Address: 0x283f44, Func Offset: 0x64
	// Line 852, Address: 0x283f50, Func Offset: 0x70
	// Line 853, Address: 0x283f5c, Func Offset: 0x7c
	// Line 854, Address: 0x283f68, Func Offset: 0x88
	// Line 856, Address: 0x283f6c, Func Offset: 0x8c
	// Line 854, Address: 0x283f74, Func Offset: 0x94
	// Line 855, Address: 0x283f78, Func Offset: 0x98
	// Line 856, Address: 0x283f7c, Func Offset: 0x9c
	// Line 858, Address: 0x283f88, Func Offset: 0xa8
	// Line 859, Address: 0x283f90, Func Offset: 0xb0
	// Line 860, Address: 0x283f98, Func Offset: 0xb8
	// Func End, Address: 0x283fb0, Func Offset: 0xd0
}

// 
// Start address: 0x283fb0
int EnemyLocalHitTestSphere(float* center, float radius, float* ppos, float* after_pos)
{
	EnemyCapsule* pct;
	float* tpos;
	int cn;
	int i;
	int count;
	// Line 871, Address: 0x283fb0, Func Offset: 0
	// Line 875, Address: 0x283fbc, Func Offset: 0xc
	// Line 876, Address: 0x283fc4, Func Offset: 0x14
	// Line 877, Address: 0x283fcc, Func Offset: 0x1c
	// Line 878, Address: 0x283fd0, Func Offset: 0x20
	// Line 879, Address: 0x283fe8, Func Offset: 0x38
	// Line 880, Address: 0x284008, Func Offset: 0x58
	// Line 883, Address: 0x284010, Func Offset: 0x60
	// Line 882, Address: 0x284018, Func Offset: 0x68
	// Line 884, Address: 0x28401c, Func Offset: 0x6c
	// Line 886, Address: 0x284024, Func Offset: 0x74
	// Line 887, Address: 0x284030, Func Offset: 0x80
	// Line 888, Address: 0x284040, Func Offset: 0x90
	// Line 893, Address: 0x284050, Func Offset: 0xa0
	// Line 895, Address: 0x284054, Func Offset: 0xa4
	// Line 896, Address: 0x284060, Func Offset: 0xb0
	// Line 897, Address: 0x284064, Func Offset: 0xb4
	// Line 899, Address: 0x284068, Func Offset: 0xb8
	// Line 900, Address: 0x284078, Func Offset: 0xc8
	// Line 901, Address: 0x284080, Func Offset: 0xd0
	// Line 903, Address: 0x284088, Func Offset: 0xd8
	// Line 905, Address: 0x284090, Func Offset: 0xe0
	// Line 903, Address: 0x284094, Func Offset: 0xe4
	// Line 904, Address: 0x2840a0, Func Offset: 0xf0
	// Line 905, Address: 0x2840b4, Func Offset: 0x104
	// Line 906, Address: 0x2840b8, Func Offset: 0x108
	// Func End, Address: 0x2840c4, Func Offset: 0x114
}

// 
// Start address: 0x2840d0
void EnemyLocalHitTestPost()
{
	// Line 911, Address: 0x2840d0, Func Offset: 0
	// Line 912, Address: 0x2840e0, Func Offset: 0x10
	// Line 913, Address: 0x2840e8, Func Offset: 0x18
	// Line 914, Address: 0x2840f0, Func Offset: 0x20
	// Line 915, Address: 0x2840f8, Func Offset: 0x28
	// Line 920, Address: 0x284100, Func Offset: 0x30
	// Func End, Address: 0x28410c, Func Offset: 0x3c
}

