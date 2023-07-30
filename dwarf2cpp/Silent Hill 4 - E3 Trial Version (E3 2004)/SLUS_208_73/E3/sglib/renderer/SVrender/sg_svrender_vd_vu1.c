typedef struct _anon0;
typedef struct sgSVRenderWork;
typedef struct _anon1;
typedef struct _anon2;
typedef struct sgCamera;
typedef struct _anon3;
typedef struct sgSVModelDataTop;
typedef enum sgLightType : unsigned char;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef union _anon8;


typedef long type_0[1];
typedef _anon7 type_1[1];
typedef _anon7 type_2[1];
typedef float type_3[4][4][8];
typedef float type_4[4][4][95];
typedef float type_5[4];
typedef int type_6[3];
typedef float type_7[4][4];
typedef _anon0 type_8[2];
typedef int type_9[4];
typedef _anon2* type_10[4];
typedef unsigned long type_11[2];
typedef unsigned long type_12[2];
typedef unsigned long type_13[2];
typedef <unknown fundamental type (0xa510)> type_14[0];
typedef float type_15[4][8];
typedef float type_16[4][6];
typedef short type_17[2];
typedef unsigned short type_18[2];
typedef char type_19[4];
typedef unsigned char type_20[4];
typedef float type_21[1];
typedef int type_22[1];
typedef int type_23[2];
typedef unsigned int type_24[2];
typedef void* type_25[2];
typedef short type_26[4];
typedef unsigned short type_27[4];
typedef char type_28[8];
typedef unsigned char type_29[8];
typedef float type_30[2];
typedef float type_31[1];
typedef _anon7 type_32[1];
typedef int type_33[1];
typedef _anon7 type_34[1];
typedef long type_35[2];
typedef unsigned long type_36[2];
typedef int type_37[4];
typedef float type_38[4];
typedef unsigned int type_39[4];
typedef void* type_40[4];
typedef short type_41[8];
typedef unsigned short type_42[8];
typedef char type_43[16];
typedef unsigned char type_44[16];
typedef float type_45[4];
typedef float type_46[1];
typedef int type_47[1];

struct _anon0
{
	_anon7 dmatag[1];
	_anon7 viftag1[1];
	float matrices[4][4][8];
	int itop_addr;
	int pad[3];
};

struct sgSVRenderWork
{
	float wpm[4][4];
	float psm[4][4];
	float wsm[4][4];
	float pushed_matirices[4][4][95];
	float matrices[4][4];
	_anon2* current_light;
	sgCamera* current_camera;
	_anon3* current_screen;
	_anon2* lights[4];
	int itop_flip;
	int use_zfail;
	int auto_pushin;
	float volume_length;
	float pushin_length;
};

struct _anon1
{
	unsigned int size;
	unsigned int type;
	unsigned int bones_offset;
	unsigned int pad;
	unsigned int edges_offset;
	unsigned int n_edges;
	unsigned int polygons_offset;
	unsigned int n_polygons;
	unsigned int vertices_offset;
	unsigned int n_vertices;
	unsigned int normals_offset;
	unsigned int n_normals;
};

struct _anon2
{
	float color[4];
	float direction[4];
	float position[4];
	sgLightType type;
	float start;
	float end;
	float spot_cone_angle;
	float falloff_angle;
	int flag;
};

struct sgCamera
{
	float view_world[4][4];
	float view_angle;
	float zoom_factor;
	float aspect;
	float near_z;
	float far_z;
	float vpm[4][4];
	float wvm[4][4];
	_anon6 view_frustum;
	float wpm[4][4];
	unsigned int dirty;
};

struct _anon3
{
	float psm[4][4];
	int screen_zmax;
	int screen_zmin;
	float screen_cx;
	float screen_cy;
	int screen_width;
	int screen_height;
	float pixel_aspect;
	unsigned int dirty;
};

struct sgSVModelDataTop
{
	unsigned int type_id;
	int version;
	int type;
	unsigned int n_meshes;
	unsigned int mesh_table_offset;
	unsigned int n_bones;
	unsigned int matrices_offset;
};

enum sgLightType : unsigned char
{
	SG_LIGHT_NONE,
	SG_LIGHT_AMBIENT,
	SG_LIGHT_DIRECTIONAL,
	SG_LIGHT_POINT,
	SG_LIGHT_SPOT,
	SG_LIGHT_REFRECT_DIRECTIONAL,
	SG_LIGHT_REFRECT_POINT
};

struct _anon4
{
	_anon7 dmatag[1];
	_anon7 viftag1[1];
	float wpm[4][4];
	float psm[4][4];
	float light_pos[4];
	float light_dir[4];
	int zfail_flag;
	int normal_type;
	float scr_zmax;
	float even_3;
	_anon8 front_rgba;
	_anon8 back_rgba;
	_anon8 rgba_giftag;
	_anon8 xyzf_giftag;
	_anon8 none_giftag;
	_anon8 vif_cmd;
};

union _anon5
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

struct _anon6
{
	float v[4][8];
	float plane[4][6];
};

union _anon7
{
	long sl;
	unsigned long ul;
	int si[2];
	unsigned int ui[2];
	void* pt[2];
	short ss[4];
	unsigned short us[4];
	char sc[8];
	unsigned char uc[8];
	float f[2];
	float fv[1];
	int iv[1];
};

union _anon8
{
	long sl[2];
	unsigned long ul[2];
	<unknown fundamental type (0xa510)> sl128;
	<unknown fundamental type (0xa510)> ul128;
	int si[4];
	unsigned int ui[4];
	void* pt[4];
	short ss[8];
	unsigned short us[8];
	char sc[16];
	unsigned char uc[16];
	float f[4];
	float fv[1];
	int iv[1];
	long lv[1];
};

float sg_matrix_unit[4][4];
_anon0 vu1_matrices[2];
_anon4 vu1_vu_env;
unsigned long* sg_packet_cur;
<unknown fundamental type (0xa510)> sg_svrender_vu1_load[0];
sgSVRenderWork sv_work;
unsigned int xitop;

void sgSVRenderInitVUEnv();
void sgSVRenderLoadVU1MicroProgram();
void UpdateVUEnv(sgSVModelDataTop* model);
void UpdateGSEnv();
void SendMeshVU1(_anon1* mesh);
void sgSVRenderDrawVolumeVU1(sgSVModelDataTop* model);

// 
// Start address: 0x208010
void sgSVRenderInitVUEnv()
{
	int i;
	_anon4* ptr;
	_anon0* mptr;
	int j;
	int itop_addr;
	unsigned long none_giftag[2];
	unsigned long rgba_giftag[2];
	unsigned long volume_giftag[2];
	// Line 98, Address: 0x208010, Func Offset: 0
	// Line 88, Address: 0x208014, Func Offset: 0x4
	// Line 98, Address: 0x208018, Func Offset: 0x8
	// Line 88, Address: 0x20801c, Func Offset: 0xc
	// Line 98, Address: 0x208020, Func Offset: 0x10
	// Line 88, Address: 0x208024, Func Offset: 0x14
	// Line 98, Address: 0x208028, Func Offset: 0x18
	// Line 101, Address: 0x208034, Func Offset: 0x24
	// Line 102, Address: 0x208040, Func Offset: 0x30
	// Line 103, Address: 0x208044, Func Offset: 0x34
	// Line 102, Address: 0x208048, Func Offset: 0x38
	// Line 120, Address: 0x20804c, Func Offset: 0x3c
	// Line 102, Address: 0x208050, Func Offset: 0x40
	// Line 103, Address: 0x208054, Func Offset: 0x44
	// Line 104, Address: 0x208058, Func Offset: 0x48
	// Line 103, Address: 0x20805c, Func Offset: 0x4c
	// Line 104, Address: 0x208060, Func Offset: 0x50
	// Line 105, Address: 0x208064, Func Offset: 0x54
	// Line 104, Address: 0x208068, Func Offset: 0x58
	// Line 115, Address: 0x20806c, Func Offset: 0x5c
	// Line 105, Address: 0x208070, Func Offset: 0x60
	// Line 112, Address: 0x208074, Func Offset: 0x64
	// Line 120, Address: 0x20807c, Func Offset: 0x6c
	// Line 113, Address: 0x208080, Func Offset: 0x70
	// Line 120, Address: 0x208084, Func Offset: 0x74
	// Line 113, Address: 0x208088, Func Offset: 0x78
	// Line 120, Address: 0x20808c, Func Offset: 0x7c
	// Line 116, Address: 0x208090, Func Offset: 0x80
	// Line 120, Address: 0x208094, Func Offset: 0x84
	// Line 116, Address: 0x208098, Func Offset: 0x88
	// Line 105, Address: 0x20809c, Func Offset: 0x8c
	// Line 106, Address: 0x2080a0, Func Offset: 0x90
	// Line 120, Address: 0x2080a8, Func Offset: 0x98
	// Line 106, Address: 0x2080b0, Func Offset: 0xa0
	// Line 107, Address: 0x2080b4, Func Offset: 0xa4
	// Line 108, Address: 0x2080c0, Func Offset: 0xb0
	// Line 109, Address: 0x2080cc, Func Offset: 0xbc
	// Line 110, Address: 0x2080d8, Func Offset: 0xc8
	// Line 111, Address: 0x2080e4, Func Offset: 0xd4
	// Line 112, Address: 0x2080f0, Func Offset: 0xe0
	// Line 113, Address: 0x2080f4, Func Offset: 0xe4
	// Line 115, Address: 0x2080f8, Func Offset: 0xe8
	// Line 116, Address: 0x2080fc, Func Offset: 0xec
	// Line 117, Address: 0x208100, Func Offset: 0xf0
	// Line 120, Address: 0x208104, Func Offset: 0xf4
	// Line 122, Address: 0x208110, Func Offset: 0x100
	// Line 131, Address: 0x208118, Func Offset: 0x108
	// Line 123, Address: 0x20811c, Func Offset: 0x10c
	// Line 129, Address: 0x208128, Func Offset: 0x118
	// Line 123, Address: 0x20812c, Func Offset: 0x11c
	// Line 125, Address: 0x20813c, Func Offset: 0x12c
	// Line 127, Address: 0x208140, Func Offset: 0x130
	// Line 128, Address: 0x208144, Func Offset: 0x134
	// Line 129, Address: 0x208148, Func Offset: 0x138
	// Line 131, Address: 0x20814c, Func Offset: 0x13c
	// Line 132, Address: 0x208158, Func Offset: 0x148
	// Line 133, Address: 0x208184, Func Offset: 0x174
	// Line 134, Address: 0x208194, Func Offset: 0x184
	// Line 135, Address: 0x2081a4, Func Offset: 0x194
	// Func End, Address: 0x2081b4, Func Offset: 0x1a4
}

// 
// Start address: 0x2081c0
void sgSVRenderLoadVU1MicroProgram()
{
	unsigned long* pk;
	unsigned int* p;
	// Line 142, Address: 0x2081c0, Func Offset: 0
	// Line 144, Address: 0x2081c4, Func Offset: 0x4
	// Line 142, Address: 0x2081c8, Func Offset: 0x8
	// Line 144, Address: 0x2081cc, Func Offset: 0xc
	// Line 146, Address: 0x2081e4, Func Offset: 0x24
	// Line 147, Address: 0x2081ec, Func Offset: 0x2c
	// Line 148, Address: 0x20821c, Func Offset: 0x5c
	// Line 150, Address: 0x208228, Func Offset: 0x68
	// Line 151, Address: 0x208230, Func Offset: 0x70
	// Line 157, Address: 0x20823c, Func Offset: 0x7c
	// Line 158, Address: 0x208270, Func Offset: 0xb0
	// Line 159, Address: 0x208278, Func Offset: 0xb8
	// Line 160, Address: 0x208284, Func Offset: 0xc4
	// Line 161, Address: 0x20829c, Func Offset: 0xdc
	// Func End, Address: 0x2082ac, Func Offset: 0xec
}

// 
// Start address: 0x2082b0
void UpdateVUEnv(sgSVModelDataTop* model)
{
	_anon4* ptr;
	sgSVRenderWork* work;
	_anon2* light;
	sgLightType ltype;
	_anon5* int_uni;
	int plus_color[4];
	int minus_color[4];
	// Line 168, Address: 0x2082b0, Func Offset: 0
	// Line 171, Address: 0x2082b4, Func Offset: 0x4
	// Line 168, Address: 0x2082b8, Func Offset: 0x8
	// Line 171, Address: 0x2082bc, Func Offset: 0xc
	// Line 168, Address: 0x2082c0, Func Offset: 0x10
	// Line 171, Address: 0x2082c4, Func Offset: 0x14
	// Line 168, Address: 0x2082c8, Func Offset: 0x18
	// Line 171, Address: 0x2082cc, Func Offset: 0x1c
	// Line 168, Address: 0x2082d0, Func Offset: 0x20
	// Line 171, Address: 0x2082d4, Func Offset: 0x24
	// Line 168, Address: 0x2082dc, Func Offset: 0x2c
	// Line 172, Address: 0x2082e0, Func Offset: 0x30
	// Line 177, Address: 0x2082e4, Func Offset: 0x34
	// Line 172, Address: 0x2082ec, Func Offset: 0x3c
	// Line 177, Address: 0x2082f0, Func Offset: 0x40
	// Line 178, Address: 0x208318, Func Offset: 0x68
	// Line 180, Address: 0x208344, Func Offset: 0x94
	// Line 181, Address: 0x20834c, Func Offset: 0x9c
	// Line 182, Address: 0x208360, Func Offset: 0xb0
	// Line 184, Address: 0x208374, Func Offset: 0xc4
	// Line 186, Address: 0x20837c, Func Offset: 0xcc
	// Line 187, Address: 0x20838c, Func Offset: 0xdc
	// Line 188, Address: 0x208390, Func Offset: 0xe0
	// Line 189, Address: 0x208398, Func Offset: 0xe8
	// Line 190, Address: 0x20839c, Func Offset: 0xec
	// Line 193, Address: 0x2083a0, Func Offset: 0xf0
	// Line 194, Address: 0x2083b0, Func Offset: 0x100
	// Line 196, Address: 0x2083b8, Func Offset: 0x108
	// Line 199, Address: 0x2083c0, Func Offset: 0x110
	// Line 202, Address: 0x2083c8, Func Offset: 0x118
	// Line 203, Address: 0x2083d4, Func Offset: 0x124
	// Line 204, Address: 0x2083d8, Func Offset: 0x128
	// Line 205, Address: 0x2083e8, Func Offset: 0x138
	// Line 206, Address: 0x2083f8, Func Offset: 0x148
	// Line 207, Address: 0x208400, Func Offset: 0x150
	// Line 208, Address: 0x208408, Func Offset: 0x158
	// Line 209, Address: 0x20841c, Func Offset: 0x16c
	// Line 212, Address: 0x208430, Func Offset: 0x180
	// Line 213, Address: 0x208440, Func Offset: 0x190
	// Func End, Address: 0x20845c, Func Offset: 0x1ac
}

// 
// Start address: 0x208460
void UpdateGSEnv()
{
	unsigned long* pk;
	int size;
	unsigned long* p;
	unsigned long* p;
	// Line 220, Address: 0x208460, Func Offset: 0
	// Line 224, Address: 0x208464, Func Offset: 0x4
	// Line 220, Address: 0x208468, Func Offset: 0x8
	// Line 224, Address: 0x208470, Func Offset: 0x10
	// Line 225, Address: 0x208488, Func Offset: 0x28
	// Line 226, Address: 0x208490, Func Offset: 0x30
	// Line 227, Address: 0x2084a0, Func Offset: 0x40
	// Line 228, Address: 0x2084a8, Func Offset: 0x48
	// Line 229, Address: 0x2084b4, Func Offset: 0x54
	// Line 230, Address: 0x2084c4, Func Offset: 0x64
	// Line 229, Address: 0x2084d0, Func Offset: 0x70
	// Line 230, Address: 0x2084d4, Func Offset: 0x74
	// Line 229, Address: 0x2084dc, Func Offset: 0x7c
	// Line 230, Address: 0x2084ec, Func Offset: 0x8c
	// Line 229, Address: 0x2084f0, Func Offset: 0x90
	// Line 230, Address: 0x2084f4, Func Offset: 0x94
	// Line 231, Address: 0x208508, Func Offset: 0xa8
	// Line 232, Address: 0x208510, Func Offset: 0xb0
	// Line 233, Address: 0x208518, Func Offset: 0xb8
	// Line 234, Address: 0x208520, Func Offset: 0xc0
	// Line 235, Address: 0x208528, Func Offset: 0xc8
	// Line 236, Address: 0x208538, Func Offset: 0xd8
	// Line 239, Address: 0x208548, Func Offset: 0xe8
	// Func End, Address: 0x20855c, Func Offset: 0xfc
}

// 
// Start address: 0x208560
void SendMeshVU1(_anon1* mesh)
{
	unsigned long* pk;
	_anon0* mptr;
	sgSVRenderWork* work;
	int i;
	int bone_no;
	// Line 243, Address: 0x208560, Func Offset: 0
	// Line 249, Address: 0x208564, Func Offset: 0x4
	// Line 243, Address: 0x208568, Func Offset: 0x8
	// Line 251, Address: 0x20856c, Func Offset: 0xc
	// Line 243, Address: 0x208570, Func Offset: 0x10
	// Line 249, Address: 0x208580, Func Offset: 0x20
	// Line 243, Address: 0x208584, Func Offset: 0x24
	// Line 249, Address: 0x208588, Func Offset: 0x28
	// Line 246, Address: 0x20858c, Func Offset: 0x2c
	// Line 249, Address: 0x208594, Func Offset: 0x34
	// Line 251, Address: 0x2085b0, Func Offset: 0x50
	// Line 252, Address: 0x2085b8, Func Offset: 0x58
	// Line 253, Address: 0x2085cc, Func Offset: 0x6c
	// Line 254, Address: 0x2085d4, Func Offset: 0x74
	// Line 256, Address: 0x2085d8, Func Offset: 0x78
	// Line 257, Address: 0x208614, Func Offset: 0xb4
	// Line 259, Address: 0x208630, Func Offset: 0xd0
	// Line 260, Address: 0x208648, Func Offset: 0xe8
	// Line 261, Address: 0x208650, Func Offset: 0xf0
	// Line 262, Address: 0x208690, Func Offset: 0x130
	// Line 266, Address: 0x2086a4, Func Offset: 0x144
	// Line 267, Address: 0x2086d0, Func Offset: 0x170
	// Line 271, Address: 0x2086dc, Func Offset: 0x17c
	// Line 272, Address: 0x2086e4, Func Offset: 0x184
	// Line 273, Address: 0x208700, Func Offset: 0x1a0
	// Line 275, Address: 0x208718, Func Offset: 0x1b8
	// Line 276, Address: 0x208720, Func Offset: 0x1c0
	// Line 281, Address: 0x208738, Func Offset: 0x1d8
	// Line 282, Address: 0x208740, Func Offset: 0x1e0
	// Line 283, Address: 0x20874c, Func Offset: 0x1ec
	// Line 285, Address: 0x208764, Func Offset: 0x204
	// Line 286, Address: 0x208770, Func Offset: 0x210
	// Func End, Address: 0x20878c, Func Offset: 0x22c
}

// 
// Start address: 0x208790
void sgSVRenderDrawVolumeVU1(sgSVModelDataTop* model)
{
	int i;
	// Line 292, Address: 0x208790, Func Offset: 0
	// Line 298, Address: 0x2087a4, Func Offset: 0x14
	// Line 302, Address: 0x2087b0, Func Offset: 0x20
	// Line 304, Address: 0x2087b4, Func Offset: 0x24
	// Line 307, Address: 0x2087bc, Func Offset: 0x2c
	// Line 309, Address: 0x2087c4, Func Offset: 0x34
	// Line 311, Address: 0x2087cc, Func Offset: 0x3c
	// Line 312, Address: 0x2087e0, Func Offset: 0x50
	// Line 313, Address: 0x2087f0, Func Offset: 0x60
	// Line 314, Address: 0x2087f8, Func Offset: 0x68
	// Line 315, Address: 0x208810, Func Offset: 0x80
	// Func End, Address: 0x208828, Func Offset: 0x98
}

