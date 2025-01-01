typedef struct sgSVModel;


typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[4];

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};


void sgSVModelConstruct(sgSVModel* sv_model);
void sgSVModelSetModelData(sgSVModel* sv_model, void* model_data);
void sgSVModelSetMatrices(sgSVModel* sv_model, float mats[4][4]);
void sgSVModelSetRootMatrix(sgSVModel* sv_model, float mat[4]);
float[4][4] sgSVModelMatrices(sgSVModel* sv_model);
float[4] sgSVModelRootMatrix(sgSVModel* sv_model);

// 
// Start address: 0x208830
void sgSVModelConstruct(sgSVModel* sv_model)
{
	// Line 7, Address: 0x208830, Func Offset: 0
	// Line 8, Address: 0x208834, Func Offset: 0x4
	// Line 10, Address: 0x208838, Func Offset: 0x8
	// Func End, Address: 0x208840, Func Offset: 0x10
}

// 
// Start address: 0x208840
void sgSVModelSetModelData(sgSVModel* sv_model, void* model_data)
{
	// Line 16, Address: 0x208840, Func Offset: 0
	// Func End, Address: 0x208848, Func Offset: 0x8
}

// 
// Start address: 0x208850
void sgSVModelSetMatrices(sgSVModel* sv_model, float mats[4][4])
{
	// Line 25, Address: 0x208850, Func Offset: 0
	// Line 27, Address: 0x208854, Func Offset: 0x4
	// Func End, Address: 0x20885c, Func Offset: 0xc
}

// 
// Start address: 0x208860
void sgSVModelSetRootMatrix(sgSVModel* sv_model, float mat[4])
{
	// Line 36, Address: 0x208860, Func Offset: 0
	// Line 37, Address: 0x208864, Func Offset: 0x4
	// Line 38, Address: 0x208868, Func Offset: 0x8
	// Func End, Address: 0x208870, Func Offset: 0x10
}

// 
// Start address: 0x208870
float[4][4] sgSVModelMatrices(sgSVModel* sv_model)
{
	// Line 42, Address: 0x208870, Func Offset: 0
	// Line 43, Address: 0x208878, Func Offset: 0x8
	// Line 45, Address: 0x208880, Func Offset: 0x10
	// Line 47, Address: 0x208898, Func Offset: 0x28
	// Func End, Address: 0x2088a0, Func Offset: 0x30
}

// 
// Start address: 0x2088a0
float[4] sgSVModelRootMatrix(sgSVModel* sv_model)
{
	// Line 51, Address: 0x2088a0, Func Offset: 0
	// Line 52, Address: 0x2088a8, Func Offset: 0x8
	// Line 54, Address: 0x2088b0, Func Offset: 0x10
	// Line 56, Address: 0x2088c8, Func Offset: 0x28
	// Func End, Address: 0x2088d0, Func Offset: 0x30
}

