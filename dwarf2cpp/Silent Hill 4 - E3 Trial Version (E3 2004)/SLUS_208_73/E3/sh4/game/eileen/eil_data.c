

typedef int type_0[2];
typedef int type_1[7];
typedef int type_2[7];
typedef int type_3[79];
typedef int type_4[7];

int eil_anime_tbl[79];
int eil_misc_data_tbl[2];
int eil_model_data_tbl[7];
int eil_texture_data_tbl[7];
int eil_shadow_data_tbl[7];

void EilDataInit();
void* EilDataModel(int model_type);
void* EilDataTexture(int model_type);
void* EilDataShadowModel(int model_type);
void* EilDataAnime(int anime_no);
void* EilDataMisc(int data_no);

// 
// Start address: 0x295cd0
void EilDataInit()
{
	// Line 141, Address: 0x295cd0, Func Offset: 0
	// Func End, Address: 0x295cd8, Func Offset: 0x8
}

// 
// Start address: 0x295ce0
void* EilDataModel(int model_type)
{
	// Line 147, Address: 0x295ce0, Func Offset: 0
	// Func End, Address: 0x295cf8, Func Offset: 0x18
}

// 
// Start address: 0x295d00
void* EilDataTexture(int model_type)
{
	// Line 154, Address: 0x295d00, Func Offset: 0
	// Func End, Address: 0x295d18, Func Offset: 0x18
}

// 
// Start address: 0x295d20
void* EilDataShadowModel(int model_type)
{
	int mno;
	// Line 162, Address: 0x295d20, Func Offset: 0
	// Line 160, Address: 0x295d24, Func Offset: 0x4
	// Line 162, Address: 0x295d28, Func Offset: 0x8
	// Line 160, Address: 0x295d30, Func Offset: 0x10
	// Line 162, Address: 0x295d34, Func Offset: 0x14
	// Line 164, Address: 0x295d3c, Func Offset: 0x1c
	// Line 166, Address: 0x295d4c, Func Offset: 0x2c
	// Func End, Address: 0x295d58, Func Offset: 0x38
}

// 
// Start address: 0x295d60
void* EilDataAnime(int anime_no)
{
	int no;
	// Line 172, Address: 0x295d60, Func Offset: 0
	// Line 171, Address: 0x295d64, Func Offset: 0x4
	// Line 172, Address: 0x295d68, Func Offset: 0x8
	// Line 171, Address: 0x295d70, Func Offset: 0x10
	// Line 172, Address: 0x295d74, Func Offset: 0x14
	// Line 174, Address: 0x295d7c, Func Offset: 0x1c
	// Line 176, Address: 0x295d8c, Func Offset: 0x2c
	// Func End, Address: 0x295d98, Func Offset: 0x38
}

// 
// Start address: 0x295da0
void* EilDataMisc(int data_no)
{
	// Line 182, Address: 0x295da0, Func Offset: 0
	// Func End, Address: 0x295db8, Func Offset: 0x18
}

