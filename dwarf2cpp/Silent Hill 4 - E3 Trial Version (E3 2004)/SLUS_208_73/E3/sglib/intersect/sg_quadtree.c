typedef struct sgQTNode;
typedef struct sgQTObject;
typedef struct _anon0;
typedef struct sgQTNodeIN;
typedef struct _anon1;
typedef struct _anon2;
typedef struct QuadTreeWork;

typedef int(*type_0)(_anon0*, sgQTObject*);
typedef void*(*type_2)(unsigned int);
typedef void(*type_3)(void*);
typedef void(*type_6)(void*);
typedef int(*type_7)(sgQTObject*, sgQTObject*);
typedef int(*type_8)(sgQTObject*, sgQTObject*);
typedef int(*type_9)(_anon0*, sgQTObject*);
typedef void*(*type_10)(unsigned int);
typedef void(*type_11)(void*);
typedef void*(*type_12)(unsigned int);

typedef float type_1[4];
typedef sgQTNodeIN* type_4[2];
typedef sgQTNodeIN* type_5[2][2];

struct sgQTNode
{
	int dummy;
};

struct sgQTObject
{
	_anon1 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _anon0
{
	float start[4];
	float end[4];
};

struct sgQTNodeIN
{
	sgQTNodeIN* child[2][2];
	float half_length;
	float cx;
	float cz;
	sgQTObject* objects;
	sgQTNodeIN* parent;
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

struct QuadTreeWork
{
	_anon2 world_box;
	float world_size;
	sgQTNodeIN* nodes;
	void* nodework_top;
	int nodework_size;
	int max_depth;
	int(*judge)(sgQTObject*, sgQTObject*);
	int(*line_judge)(_anon0*, sgQTObject*);
	void*(*malloc_func)(unsigned int);
	void(*free_func)(void*);
};

QuadTreeWork qt_work;
void(*free)(void*);
void*(*malloc)(unsigned int);

sgQTNodeIN* QT_NodeMake(sgQTNodeIN* parent, float x, float z, int depth);
sgQTNodeIN* QT_NodeObjectInsert(sgQTNodeIN* node, sgQTObject* object);
int QT_NodeObjectRemove(sgQTNodeIN* node, sgQTObject* object);
int QT_NodeObjectJudge(sgQTNodeIN* node, sgQTObject* object);
void sgQTInit();
void sgQTQuit();
void sgQTSetMallocFunc(void*(*malloc_func)(unsigned int), void(*free_func)(void*));
void sgQTMakeByDepth(float* min_, float* max_, int depth_);
sgQTNode* sgQTInsertObject(sgQTObject* object);
int sgQTRemoveObject(sgQTNode* node, sgQTObject* object);
void sgQTSetTestCallback(int(*func)(sgQTObject*, sgQTObject*));
void sgQTTestObject(sgQTObject* object);

// 
// Start address: 0x173bc0
sgQTNodeIN* QT_NodeMake(sgQTNodeIN* parent, float x, float z, int depth)
{
	sgQTNodeIN* node;
	int i;
	int j;
	float halfsize;
	float offset;
	float cx;
	// Line 154, Address: 0x173bc0, Func Offset: 0
	// Line 160, Address: 0x173bc4, Func Offset: 0x4
	// Line 154, Address: 0x173bc8, Func Offset: 0x8
	// Line 160, Address: 0x173bf8, Func Offset: 0x38
	// Line 161, Address: 0x173c0c, Func Offset: 0x4c
	// Line 165, Address: 0x173c20, Func Offset: 0x60
	// Line 166, Address: 0x173c28, Func Offset: 0x68
	// Line 167, Address: 0x173c30, Func Offset: 0x70
	// Line 168, Address: 0x173c3c, Func Offset: 0x7c
	// Line 172, Address: 0x173c40, Func Offset: 0x80
	// Line 169, Address: 0x173c44, Func Offset: 0x84
	// Line 172, Address: 0x173c48, Func Offset: 0x88
	// Line 170, Address: 0x173c4c, Func Offset: 0x8c
	// Line 171, Address: 0x173c50, Func Offset: 0x90
	// Line 172, Address: 0x173c54, Func Offset: 0x94
	// Line 174, Address: 0x173c64, Func Offset: 0xa4
	// Line 175, Address: 0x173c68, Func Offset: 0xa8
	// Line 172, Address: 0x173c70, Func Offset: 0xb0
	// Line 174, Address: 0x173c78, Func Offset: 0xb8
	// Line 173, Address: 0x173c80, Func Offset: 0xc0
	// Line 174, Address: 0x173c84, Func Offset: 0xc4
	// Line 175, Address: 0x173c8c, Func Offset: 0xcc
	// Line 176, Address: 0x173c90, Func Offset: 0xd0
	// Line 177, Address: 0x173c98, Func Offset: 0xd8
	// Line 179, Address: 0x173ca4, Func Offset: 0xe4
	// Line 180, Address: 0x173ccc, Func Offset: 0x10c
	// Line 181, Address: 0x173cdc, Func Offset: 0x11c
	// Line 183, Address: 0x173cec, Func Offset: 0x12c
	// Line 184, Address: 0x173cf0, Func Offset: 0x130
	// Func End, Address: 0x173d24, Func Offset: 0x164
}

// 
// Start address: 0x173d30
sgQTNodeIN* QT_NodeObjectInsert(sgQTNodeIN* node, sgQTObject* object)
{
	sgQTNodeIN* child;
	// Line 209, Address: 0x173d30, Func Offset: 0
	// Line 219, Address: 0x173d38, Func Offset: 0x8
	// Line 223, Address: 0x173d3c, Func Offset: 0xc
	// Line 220, Address: 0x173d40, Func Offset: 0x10
	// Line 221, Address: 0x173d44, Func Offset: 0x14
	// Line 223, Address: 0x173d48, Func Offset: 0x18
	// Line 226, Address: 0x173d58, Func Offset: 0x28
	// Line 223, Address: 0x173d5c, Func Offset: 0x2c
	// Line 226, Address: 0x173d60, Func Offset: 0x30
	// Line 227, Address: 0x173d88, Func Offset: 0x58
	// Line 228, Address: 0x173d90, Func Offset: 0x60
	// Line 230, Address: 0x173e08, Func Offset: 0xd8
	// Line 237, Address: 0x173e18, Func Offset: 0xe8
	// Line 239, Address: 0x173e1c, Func Offset: 0xec
	// Line 237, Address: 0x173e20, Func Offset: 0xf0
	// Line 240, Address: 0x173e28, Func Offset: 0xf8
	// Func End, Address: 0x173e34, Func Offset: 0x104
}

// 
// Start address: 0x173e40
int QT_NodeObjectRemove(sgQTNodeIN* node, sgQTObject* object)
{
	sgQTObject* o;
	sgQTObject** p;
	// Line 253, Address: 0x173e40, Func Offset: 0
	// Line 255, Address: 0x173e44, Func Offset: 0x4
	// Line 256, Address: 0x173e50, Func Offset: 0x10
	// Line 257, Address: 0x173e58, Func Offset: 0x18
	// Line 262, Address: 0x173e5c, Func Offset: 0x1c
	// Line 264, Address: 0x173e68, Func Offset: 0x28
	// Line 265, Address: 0x173e6c, Func Offset: 0x2c
	// Line 266, Address: 0x173e70, Func Offset: 0x30
	// Line 267, Address: 0x173e78, Func Offset: 0x38
	// Line 268, Address: 0x173e80, Func Offset: 0x40
	// Func End, Address: 0x173e88, Func Offset: 0x48
}

// 
// Start address: 0x173e90
int QT_NodeObjectJudge(sgQTNodeIN* node, sgQTObject* object)
{
	int i;
	int j;
	float dx;
	float dz;
	sgQTObject* o;
	// Line 278, Address: 0x173e90, Func Offset: 0
	// Line 294, Address: 0x173ebc, Func Offset: 0x2c
	// Line 295, Address: 0x173ed0, Func Offset: 0x40
	// Line 300, Address: 0x173ef8, Func Offset: 0x68
	// Line 301, Address: 0x173f10, Func Offset: 0x80
	// Line 304, Address: 0x173f18, Func Offset: 0x88
	// Line 305, Address: 0x173f20, Func Offset: 0x90
	// Line 306, Address: 0x173f2c, Func Offset: 0x9c
	// Line 307, Address: 0x173f34, Func Offset: 0xa4
	// Line 308, Address: 0x173f3c, Func Offset: 0xac
	// Line 309, Address: 0x173f50, Func Offset: 0xc0
	// Line 311, Address: 0x173f60, Func Offset: 0xd0
	// Line 312, Address: 0x173f64, Func Offset: 0xd4
	// Line 313, Address: 0x173f70, Func Offset: 0xe0
	// Line 317, Address: 0x173f78, Func Offset: 0xe8
	// Line 319, Address: 0x173f88, Func Offset: 0xf8
	// Line 320, Address: 0x173f8c, Func Offset: 0xfc
	// Line 322, Address: 0x173f98, Func Offset: 0x108
	// Line 323, Address: 0x173fa0, Func Offset: 0x110
	// Func End, Address: 0x173fc8, Func Offset: 0x138
}

// 
// Start address: 0x173fd0
void sgQTInit()
{
	// Line 403, Address: 0x173fd0, Func Offset: 0
	// Line 404, Address: 0x173fd4, Func Offset: 0x4
	// Line 403, Address: 0x173fd8, Func Offset: 0x8
	// Line 404, Address: 0x173fdc, Func Offset: 0xc
	// Line 405, Address: 0x173fec, Func Offset: 0x1c
	// Line 406, Address: 0x173ff0, Func Offset: 0x20
	// Line 405, Address: 0x173ff4, Func Offset: 0x24
	// Line 406, Address: 0x174000, Func Offset: 0x30
	// Line 407, Address: 0x17400c, Func Offset: 0x3c
	// Func End, Address: 0x174018, Func Offset: 0x48
}

// 
// Start address: 0x174020
void sgQTQuit()
{
	// Line 416, Address: 0x174020, Func Offset: 0
	// Line 417, Address: 0x174030, Func Offset: 0x10
	// Line 418, Address: 0x174044, Func Offset: 0x24
	// Line 419, Address: 0x174050, Func Offset: 0x30
	// Line 420, Address: 0x174058, Func Offset: 0x38
	// Func End, Address: 0x174064, Func Offset: 0x44
}

// 
// Start address: 0x174070
void sgQTSetMallocFunc(void*(*malloc_func)(unsigned int), void(*free_func)(void*))
{
	// Line 430, Address: 0x174070, Func Offset: 0
	// Line 431, Address: 0x174078, Func Offset: 0x8
	// Line 432, Address: 0x17407c, Func Offset: 0xc
	// Func End, Address: 0x174084, Func Offset: 0x14
}

// 
// Start address: 0x174090
void sgQTMakeByDepth(float* min_, float* max_, int depth_)
{
	float center[4];
	float size[4];
	float qt_size;
	int qt_depth;
	int n_nodes;
	int n;
	// Line 497, Address: 0x174090, Func Offset: 0
	// Line 505, Address: 0x174094, Func Offset: 0x4
	// Line 497, Address: 0x174098, Func Offset: 0x8
	// Line 505, Address: 0x17409c, Func Offset: 0xc
	// Line 497, Address: 0x1740a0, Func Offset: 0x10
	// Line 505, Address: 0x1740a4, Func Offset: 0x14
	// Line 506, Address: 0x1740ac, Func Offset: 0x1c
	// Line 508, Address: 0x1740bc, Func Offset: 0x2c
	// Line 509, Address: 0x1740d4, Func Offset: 0x44
	// Line 510, Address: 0x174100, Func Offset: 0x70
	// Line 512, Address: 0x17411c, Func Offset: 0x8c
	// Line 514, Address: 0x174140, Func Offset: 0xb0
	// Line 519, Address: 0x174148, Func Offset: 0xb8
	// Line 515, Address: 0x17414c, Func Offset: 0xbc
	// Line 520, Address: 0x174150, Func Offset: 0xc0
	// Line 515, Address: 0x174154, Func Offset: 0xc4
	// Line 520, Address: 0x174158, Func Offset: 0xc8
	// Line 521, Address: 0x174168, Func Offset: 0xd8
	// Line 522, Address: 0x17416c, Func Offset: 0xdc
	// Line 524, Address: 0x174170, Func Offset: 0xe0
	// Line 523, Address: 0x174174, Func Offset: 0xe4
	// Line 524, Address: 0x174178, Func Offset: 0xe8
	// Line 533, Address: 0x174184, Func Offset: 0xf4
	// Line 539, Address: 0x1741a0, Func Offset: 0x110
	// Line 533, Address: 0x1741a4, Func Offset: 0x114
	// Line 539, Address: 0x1741a8, Func Offset: 0x118
	// Line 534, Address: 0x1741ac, Func Offset: 0x11c
	// Line 539, Address: 0x1741b8, Func Offset: 0x128
	// Line 534, Address: 0x1741bc, Func Offset: 0x12c
	// Line 539, Address: 0x1741c0, Func Offset: 0x130
	// Line 540, Address: 0x1741d4, Func Offset: 0x144
	// Func End, Address: 0x1741e4, Func Offset: 0x154
}

// 
// Start address: 0x1741f0
sgQTNode* sgQTInsertObject(sgQTObject* object)
{
	// Line 568, Address: 0x1741f4, Func Offset: 0x4
	// Func End, Address: 0x174200, Func Offset: 0x10
}

// 
// Start address: 0x174200
int sgQTRemoveObject(sgQTNode* node, sgQTObject* object)
{
	// Line 580, Address: 0x174200, Func Offset: 0
	// Line 582, Address: 0x174204, Func Offset: 0x4
	// Line 585, Address: 0x174220, Func Offset: 0x20
	// Func End, Address: 0x17422c, Func Offset: 0x2c
}

// 
// Start address: 0x174230
void sgQTSetTestCallback(int(*func)(sgQTObject*, sgQTObject*))
{
	// Line 600, Address: 0x174230, Func Offset: 0
	// Line 601, Address: 0x174234, Func Offset: 0x4
	// Func End, Address: 0x17423c, Func Offset: 0xc
}

// 
// Start address: 0x174240
void sgQTTestObject(sgQTObject* object)
{
	// Line 618, Address: 0x174240, Func Offset: 0
	// Line 619, Address: 0x174244, Func Offset: 0x4
	// Line 618, Address: 0x174248, Func Offset: 0x8
	// Line 619, Address: 0x17424c, Func Offset: 0xc
	// Line 627, Address: 0x174258, Func Offset: 0x18
	// Line 628, Address: 0x174264, Func Offset: 0x24
	// Func End, Address: 0x174274, Func Offset: 0x34
}

