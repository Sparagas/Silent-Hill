typedef struct sgBone;
typedef struct _anon0;
typedef struct sgTexArc;


typedef float type_0[4];
typedef float type_1[4];

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

struct _anon0
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
};

struct sgTexArc
{
	<unknown fundamental type (0xa510)> dummy;
};


void sgEMModelConstruct(_anon0* em_model);
void sgEMModelSetModelData(_anon0* em_model, void* model_data);
void* sgEMModelModelData(_anon0* em_model);
void sgEMModelSetTexture(_anon0* em_model, sgTexArc* texture_data);
sgTexArc* sgEMModelTexture(_anon0* em_model);
void sgEMModelSetGlobalTexture(_anon0* em_model, sgTexArc* texture_data);
sgTexArc* sgEMModelGlobalTexture(_anon0* em_model);

// 
// Start address: 0x1d10c0
void sgEMModelConstruct(_anon0* em_model)
{
	// Line 8, Address: 0x1d10c0, Func Offset: 0
	// Func End, Address: 0x1d10c8, Func Offset: 0x8
}

// 
// Start address: 0x1d10d0
void sgEMModelSetModelData(_anon0* em_model, void* model_data)
{
	// Line 15, Address: 0x1d10d0, Func Offset: 0
	// Func End, Address: 0x1d10d8, Func Offset: 0x8
}

// 
// Start address: 0x1d10e0
void* sgEMModelModelData(_anon0* em_model)
{
	// Line 21, Address: 0x1d10e0, Func Offset: 0
	// Func End, Address: 0x1d10e8, Func Offset: 0x8
}

// 
// Start address: 0x1d10f0
void sgEMModelSetTexture(_anon0* em_model, sgTexArc* texture_data)
{
	// Line 27, Address: 0x1d10f0, Func Offset: 0
	// Func End, Address: 0x1d10f8, Func Offset: 0x8
}

// 
// Start address: 0x1d1100
sgTexArc* sgEMModelTexture(_anon0* em_model)
{
	// Line 33, Address: 0x1d1100, Func Offset: 0
	// Func End, Address: 0x1d1108, Func Offset: 0x8
}

// 
// Start address: 0x1d1110
void sgEMModelSetGlobalTexture(_anon0* em_model, sgTexArc* texture_data)
{
	// Line 39, Address: 0x1d1110, Func Offset: 0
	// Func End, Address: 0x1d1118, Func Offset: 0x8
}

// 
// Start address: 0x1d1120
sgTexArc* sgEMModelGlobalTexture(_anon0* em_model)
{
	// Line 45, Address: 0x1d1120, Func Offset: 0
	// Func End, Address: 0x1d1128, Func Offset: 0x8
}

