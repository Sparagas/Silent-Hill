typedef struct ImpactQueue_Element;
typedef struct _anon0;
typedef struct Vertex_Infomeation_List;
typedef struct HH_Object_GlassPiece_00;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;


typedef float type_0[2];
typedef int type_1[2];
typedef float type_2[4][3];
typedef float type_3[4];
typedef float type_4[4][3];
typedef float type_5[4][4];
typedef float type_6[4][3];
typedef float type_7[4][3];
typedef int type_8[4];
typedef float type_9[4];
typedef float type_10[4][4];
typedef float type_11[4][3];
typedef Vertex_Infomeation_List type_12[4];
typedef float type_13[4][4];
typedef float type_14[4][3];
typedef float type_15[4][2];

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	ImpactQueue_ElementOption Option;
};

struct _anon0
{
	unsigned int* pCurrent;
	<unknown fundamental type (0xa510)>* pBase;
	<unknown fundamental type (0xa510)>* pDmaTag;
	unsigned int* pVifCode;
	unsigned int numlen;
	unsigned long* pGifTag;
	unsigned int pad12;
	unsigned int pad13;
};

struct Vertex_Infomeation_List
{
	float pVertex_List[4];
	float pNormal_List[4];
	unsigned int Vertex_Max;
	unsigned int Primitive_Type;
};

struct HH_Object_GlassPiece_00
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	unsigned int Vertex_Kind;
	float Timer;
	float Verocity_0[4];
	float Rotate[4];
};

struct Object_DataBlock_Header
{
	unsigned int Enable;
};

struct ImpactQueue_ElementOption
{
	float Vector[4][2];
	float Float_Value[2];
	int Int_Value[2];
};

float _elastic_vec[4];
float _friction_vec[4];
float _square_00_vertex[4][3];
float _square_01_vertex[4][3];
float _square_02_vertex[4][3];
float _square_03_vertex[4][4];
float _square_00_normal[4][3];
float _square_01_normal[4][3];
float _square_02_normal[4][3];
float _square_03_normal[4][4];
Vertex_Infomeation_List _vertex_info_list[4];

unsigned int Object_Initialize(HH_Object_GlassPiece_00* pThis, ImpactQueue_Element* pElement);
void ParabolaMotion_Calculator(HH_Object_GlassPiece_00* pThis, float Time, float* Position);
unsigned int Object_Draw(HH_Object_GlassPiece_00* pThis, ImpactQueue_Element* pElement, float* Current_Position);
float Specular_Calculator(float* Normal_Vector);
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float* Normal_Vector);
unsigned int HH_Class_GlassPiece_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x2480a0
unsigned int Object_Initialize(HH_Object_GlassPiece_00* pThis, ImpactQueue_Element* pElement)
{
	float phai;
	float theta;
	float* src_direction;
	unsigned int result;
	// Line 201, Address: 0x2480a0, Func Offset: 0
	// Line 202, Address: 0x2480b8, Func Offset: 0x18
	// Line 205, Address: 0x2480bc, Func Offset: 0x1c
	// Line 210, Address: 0x2480c8, Func Offset: 0x28
	// Line 230, Address: 0x2480d0, Func Offset: 0x30
	// Line 231, Address: 0x2480dc, Func Offset: 0x3c
	// Line 232, Address: 0x2480e8, Func Offset: 0x48
	// Line 234, Address: 0x2480f4, Func Offset: 0x54
	// Line 238, Address: 0x248108, Func Offset: 0x68
	// Line 241, Address: 0x248118, Func Offset: 0x78
	// Line 242, Address: 0x24816c, Func Offset: 0xcc
	// Line 245, Address: 0x2481c0, Func Offset: 0x120
	// Line 246, Address: 0x2481d4, Func Offset: 0x134
	// Line 254, Address: 0x2481e8, Func Offset: 0x148
	// Line 255, Address: 0x2481f4, Func Offset: 0x154
	// Line 259, Address: 0x248200, Func Offset: 0x160
	// Line 262, Address: 0x248218, Func Offset: 0x178
	// Line 263, Address: 0x24821c, Func Offset: 0x17c
	// Func End, Address: 0x248234, Func Offset: 0x194
}

// 
// Start address: 0x248240
void ParabolaMotion_Calculator(HH_Object_GlassPiece_00* pThis, float Time, float* Position)
{
	float time_mat[4][4];
	// Line 278, Address: 0x248240, Func Offset: 0
	// Line 282, Address: 0x248254, Func Offset: 0x14
	// Line 283, Address: 0x248260, Func Offset: 0x20
	// Line 284, Address: 0x248268, Func Offset: 0x28
	// Line 285, Address: 0x248270, Func Offset: 0x30
	// Line 286, Address: 0x248278, Func Offset: 0x38
	// Line 287, Address: 0x248288, Func Offset: 0x48
	// Line 288, Address: 0x248294, Func Offset: 0x54
	// Line 289, Address: 0x2482ac, Func Offset: 0x6c
	// Func End, Address: 0x2482bc, Func Offset: 0x7c
}

// 
// Start address: 0x2482c0
unsigned int Object_Draw(HH_Object_GlassPiece_00* pThis, ImpactQueue_Element* pElement, float* Current_Position)
{
	unsigned int addr;
	float q;
	int xyzf[4];
	float rot_y;
	float rot_x;
	float time;
	float normal[4];
	int rgba[4];
	float clip_mat[4][4];
	float lsm[4][4];
	float lwm[4][4];
	unsigned int i;
	unsigned int prim_type;
	unsigned int vertex_num;
	float pNormal[4];
	float pVertex[4];
	Vertex_Infomeation_List* pInfo;
	_anon0* pPk;
	unsigned int result;
	float Specular_Rgba[4];
	float Base_Rgba[4];
	// Line 303, Address: 0x2482c0, Func Offset: 0
	// Line 304, Address: 0x2482f8, Func Offset: 0x38
	// Line 305, Address: 0x2482fc, Func Offset: 0x3c
	// Line 306, Address: 0x248308, Func Offset: 0x48
	// Line 307, Address: 0x248320, Func Offset: 0x60
	// Line 308, Address: 0x248324, Func Offset: 0x64
	// Line 309, Address: 0x24832c, Func Offset: 0x6c
	// Line 310, Address: 0x248330, Func Offset: 0x70
	// Line 322, Address: 0x248338, Func Offset: 0x78
	// Line 324, Address: 0x248344, Func Offset: 0x84
	// Line 327, Address: 0x248350, Func Offset: 0x90
	// Line 328, Address: 0x248368, Func Offset: 0xa8
	// Line 329, Address: 0x248474, Func Offset: 0x1b4
	// Line 330, Address: 0x248580, Func Offset: 0x2c0
	// Line 331, Address: 0x248594, Func Offset: 0x2d4
	// Line 333, Address: 0x2485a8, Func Offset: 0x2e8
	// Line 334, Address: 0x2485c0, Func Offset: 0x300
	// Line 335, Address: 0x2485d4, Func Offset: 0x314
	// Line 338, Address: 0x2485e8, Func Offset: 0x328
	// Line 339, Address: 0x2485f4, Func Offset: 0x334
	// Line 345, Address: 0x248608, Func Offset: 0x348
	// Line 365, Address: 0x248610, Func Offset: 0x350
	// Line 373, Address: 0x24862c, Func Offset: 0x36c
	// Line 387, Address: 0x248650, Func Offset: 0x390
	// Line 388, Address: 0x24865c, Func Offset: 0x39c
	// Line 389, Address: 0x248668, Func Offset: 0x3a8
	// Line 390, Address: 0x248674, Func Offset: 0x3b4
	// Line 391, Address: 0x248688, Func Offset: 0x3c8
	// Line 394, Address: 0x2486a8, Func Offset: 0x3e8
	// Line 398, Address: 0x2486b4, Func Offset: 0x3f4
	// Line 400, Address: 0x2486b8, Func Offset: 0x3f8
	// Line 401, Address: 0x2486e0, Func Offset: 0x420
	// Line 402, Address: 0x2486e4, Func Offset: 0x424
	// Line 412, Address: 0x2486e8, Func Offset: 0x428
	// Line 414, Address: 0x248764, Func Offset: 0x4a4
	// Line 415, Address: 0x2487c0, Func Offset: 0x500
	// Line 419, Address: 0x2487d4, Func Offset: 0x514
	// Line 421, Address: 0x2487dc, Func Offset: 0x51c
	// Line 422, Address: 0x2487e0, Func Offset: 0x520
	// Func End, Address: 0x248814, Func Offset: 0x554
}

// 
// Start address: 0x248820
float Specular_Calculator(float* Normal_Vector)
{
	float cos_beta_min;
	float cos_beta;
	float cos_theta;
	float tmp_vec[4];
	float view_dir[4];
	float light_dir[4];
	float revers_light_dir[4];
	float input_light_power;
	float specular_coefficient;
	float result;
	// Line 435, Address: 0x248820, Func Offset: 0
	// Line 437, Address: 0x24882c, Func Offset: 0xc
	// Line 438, Address: 0x24883c, Func Offset: 0x1c
	// Line 449, Address: 0x24884c, Func Offset: 0x2c
	// Line 454, Address: 0x248858, Func Offset: 0x38
	// Line 455, Address: 0x248868, Func Offset: 0x48
	// Line 456, Address: 0x248874, Func Offset: 0x54
	// Line 459, Address: 0x248884, Func Offset: 0x64
	// Line 460, Address: 0x248898, Func Offset: 0x78
	// Line 461, Address: 0x2488b4, Func Offset: 0x94
	// Line 463, Address: 0x2488c0, Func Offset: 0xa0
	// Line 464, Address: 0x2488e0, Func Offset: 0xc0
	// Line 465, Address: 0x2488f4, Func Offset: 0xd4
	// Line 467, Address: 0x248904, Func Offset: 0xe4
	// Line 468, Address: 0x248918, Func Offset: 0xf8
	// Line 469, Address: 0x248934, Func Offset: 0x114
	// Line 476, Address: 0x248940, Func Offset: 0x120
	// Line 480, Address: 0x248954, Func Offset: 0x134
	// Line 481, Address: 0x24896c, Func Offset: 0x14c
	// Line 482, Address: 0x248978, Func Offset: 0x158
	// Line 484, Address: 0x248980, Func Offset: 0x160
	// Line 487, Address: 0x2489b8, Func Offset: 0x198
	// Line 489, Address: 0x2489d0, Func Offset: 0x1b0
	// Line 490, Address: 0x2489d4, Func Offset: 0x1b4
	// Func End, Address: 0x2489e4, Func Offset: 0x1c4
}

// 
// Start address: 0x2489f0
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float* Normal_Vector)
{
	float specular;
	// Line 503, Address: 0x2489f0, Func Offset: 0
	// Line 504, Address: 0x248a10, Func Offset: 0x20
	// Line 512, Address: 0x248a1c, Func Offset: 0x2c
	// Line 513, Address: 0x248a20, Func Offset: 0x30
	// Line 514, Address: 0x248a24, Func Offset: 0x34
	// Line 515, Address: 0x248a2c, Func Offset: 0x3c
	// Line 516, Address: 0x248a30, Func Offset: 0x40
	// Line 517, Address: 0x248a34, Func Offset: 0x44
	// Line 518, Address: 0x248a38, Func Offset: 0x48
	// Line 519, Address: 0x248a3c, Func Offset: 0x4c
	// Line 540, Address: 0x248a40, Func Offset: 0x50
	// Func End, Address: 0x248a5c, Func Offset: 0x6c
}

// 
// Start address: 0x248a60
unsigned int HH_Class_GlassPiece_00(void* pBlock, ImpactQueue_Element* pElement)
{
	float* src_location;
	float position[4];
	float v_xz_volume;
	float verocity_xz[4];
	float y;
	float tan_value;
	float ref_xz_volume;
	float ref_normalize[4];
	float reflection_vec[4];
	float volume;
	float dir_vec[4];
	float* src_direction;
	float* src_location;
	float position[4];
	HH_Object_GlassPiece_00* pThis;
	unsigned int result;
	// Line 558, Address: 0x248a60, Func Offset: 0
	// Line 566, Address: 0x248a88, Func Offset: 0x28
	// Line 567, Address: 0x248a8c, Func Offset: 0x2c
	// Line 569, Address: 0x248a90, Func Offset: 0x30
	// Line 571, Address: 0x248ac8, Func Offset: 0x68
	// Line 572, Address: 0x248ad8, Func Offset: 0x78
	// Line 573, Address: 0x248ae4, Func Offset: 0x84
	// Line 577, Address: 0x248aec, Func Offset: 0x8c
	// Line 578, Address: 0x248af4, Func Offset: 0x94
	// Line 580, Address: 0x248afc, Func Offset: 0x9c
	// Line 585, Address: 0x248b14, Func Offset: 0xb4
	// Line 591, Address: 0x248b38, Func Offset: 0xd8
	// Line 593, Address: 0x248b64, Func Offset: 0x104
	// Line 595, Address: 0x248b78, Func Offset: 0x118
	// Line 601, Address: 0x248b8c, Func Offset: 0x12c
	// Line 608, Address: 0x248bb0, Func Offset: 0x150
	// Line 609, Address: 0x248bc4, Func Offset: 0x164
	// Line 612, Address: 0x248bd0, Func Offset: 0x170
	// Line 623, Address: 0x248be8, Func Offset: 0x188
	// Line 624, Address: 0x248bf8, Func Offset: 0x198
	// Line 625, Address: 0x248c00, Func Offset: 0x1a0
	// Line 626, Address: 0x248c0c, Func Offset: 0x1ac
	// Line 627, Address: 0x248c20, Func Offset: 0x1c0
	// Line 629, Address: 0x248c3c, Func Offset: 0x1dc
	// Line 630, Address: 0x248c4c, Func Offset: 0x1ec
	// Line 631, Address: 0x248c58, Func Offset: 0x1f8
	// Line 632, Address: 0x248c64, Func Offset: 0x204
	// Line 633, Address: 0x248c78, Func Offset: 0x218
	// Line 634, Address: 0x248c88, Func Offset: 0x228
	// Line 635, Address: 0x248c98, Func Offset: 0x238
	// Line 638, Address: 0x248cb0, Func Offset: 0x250
	// Line 642, Address: 0x248cd8, Func Offset: 0x278
	// Line 644, Address: 0x248ce4, Func Offset: 0x284
	// Line 645, Address: 0x248cf8, Func Offset: 0x298
	// Line 646, Address: 0x248cfc, Func Offset: 0x29c
	// Line 650, Address: 0x248d04, Func Offset: 0x2a4
	// Line 651, Address: 0x248d10, Func Offset: 0x2b0
	// Line 655, Address: 0x248d18, Func Offset: 0x2b8
	// Line 657, Address: 0x248d2c, Func Offset: 0x2cc
	// Line 658, Address: 0x248d48, Func Offset: 0x2e8
	// Line 663, Address: 0x248d50, Func Offset: 0x2f0
	// Line 665, Address: 0x248d58, Func Offset: 0x2f8
	// Line 666, Address: 0x248d70, Func Offset: 0x310
	// Line 667, Address: 0x248d7c, Func Offset: 0x31c
	// Line 669, Address: 0x248d90, Func Offset: 0x330
	// Line 672, Address: 0x248d98, Func Offset: 0x338
	// Line 673, Address: 0x248d9c, Func Offset: 0x33c
	// Line 676, Address: 0x248da0, Func Offset: 0x340
	// Line 677, Address: 0x248da4, Func Offset: 0x344
	// Func End, Address: 0x248dcc, Func Offset: 0x36c
}

