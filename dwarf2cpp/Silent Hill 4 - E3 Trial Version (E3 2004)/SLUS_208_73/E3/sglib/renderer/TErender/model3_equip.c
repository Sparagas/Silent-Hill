typedef struct ModelWork;
typedef struct _anon0;

typedef int(*type_2)(void*, void*, void*);
typedef void(*type_3)(_anon0*, int, int, float*);

typedef float type_0[4][4];
typedef float type_1[4];
typedef float type_4[4];

struct ModelWork
{
	unsigned int id;
	float matrices[4][4];
	float* cluster_weights;
	float crops[4];
	<unknown fundamental type (0xa510)> equipment_flag;
	int(*draw_hook)(void*, void*, void*);
	void* draw_hook_data;
	void(*texture_load_func)(_anon0*, int, int, float*);
};

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
};


int Model3WorkEquipmentFlag(void* work_, int id);
void Model3WorkSetEquipmentFlagMulti(void* work_, <unknown fundamental type (0xa510)> mask, <unknown fundamental type (0xa510)> flag);

// 
// Start address: 0x156470
int Model3WorkEquipmentFlag(void* work_, int id)
{
	// Line 32, Address: 0x156470, Func Offset: 0
	// Line 62, Address: 0x1564b0, Func Offset: 0x40
	// Func End, Address: 0x1564b8, Func Offset: 0x48
}

// 
// Start address: 0x1564c0
void Model3WorkSetEquipmentFlagMulti(void* work_, <unknown fundamental type (0xa510)> mask, <unknown fundamental type (0xa510)> flag)
{
	ModelWork* work;
	<unknown fundamental type (0xa510)> data;
	<unknown fundamental type (0xa510)> result;
	<unknown fundamental type (0xa510)> tmp0;
	<unknown fundamental type (0xa510)> tmp1;
	// Line 136, Address: 0x1564c0, Func Offset: 0
	// Line 143, Address: 0x1564c4, Func Offset: 0x4
	// Line 145, Address: 0x1564c8, Func Offset: 0x8
	// Line 144, Address: 0x1564cc, Func Offset: 0xc
	// Line 146, Address: 0x1564d0, Func Offset: 0x10
	// Line 151, Address: 0x1564d4, Func Offset: 0x14
	// Func End, Address: 0x1564dc, Func Offset: 0x1c
}

