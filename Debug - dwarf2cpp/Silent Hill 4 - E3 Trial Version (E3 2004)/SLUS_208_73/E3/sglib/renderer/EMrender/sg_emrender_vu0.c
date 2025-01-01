typedef struct sgEMRenderWork;
typedef struct _anon0;
typedef struct sgEMDrawBlock;
typedef struct sgEMDrawBlockBBox;
typedef struct sgEMDrawBlockParams;
typedef struct sgTexArc;
typedef struct sgEMDrawPart;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef enum sgLightType : unsigned char;
typedef struct _anon5;
typedef struct sgSotTag;
typedef struct sgSot;
typedef struct TrianglePacket;
typedef union _anon6;
typedef struct _anon7;
typedef union _anon8;
typedef struct sgCamera;
typedef struct _anon9;
typedef struct sgBone;
typedef struct _anon10;
typedef union _anon11;
typedef enum _enum : unsigned char;


typedef long type_0[1];
typedef _anon5 type_1[8];
typedef sgTexArc* type_2[2];
typedef float type_3[4][4];
typedef float type_4[4];
typedef <unknown fundamental type (0xa510)> type_5[0];
typedef int type_6[2];
typedef int type_7[1];
typedef _anon8 type_8[1];
typedef int type_9[0];
typedef <unknown fundamental type (0xa510)> type_10[0];
typedef unsigned long type_11[2];
typedef _anon8 type_12[1];
typedef _anon8 type_13[2];
typedef _anon8 type_14[1];
typedef _anon8 type_15[1];
typedef _anon8 type_16[1];
typedef float type_17[4];
typedef float type_18[4];
typedef _anon6 type_19[1];
typedef float type_20[4];
typedef _anon6 type_21[4];
typedef int type_22[3];
typedef short type_23[2];
typedef unsigned short type_24[2];
typedef char type_25[4];
typedef unsigned char type_26[4];
typedef float type_27[1];
typedef _anon5* type_28[4];
typedef int type_29[1];
typedef int type_30[2];
typedef float type_31[4];
typedef unsigned int type_32[2];
typedef void* type_33[2];
typedef short type_34[4];
typedef unsigned short type_35[4];
typedef char type_36[8];
typedef unsigned char type_37[8];
typedef float type_38[2];
typedef float type_39[4][8];
typedef float type_40[1];
typedef float type_41[4][6];
typedef int type_42[1];
typedef long type_43[2];
typedef unsigned long type_44[2];
typedef _anon7* type_45[8];
typedef int type_46[4];
typedef unsigned int type_47[4];
typedef void* type_48[4];
typedef short type_49[8];
typedef unsigned short type_50[8];
typedef char type_51[16];
typedef unsigned char type_52[16];
typedef float type_53[4];
typedef float type_54[1];
typedef int type_55[1];

struct sgEMRenderWork
{
	sgCamera* camera;
	_anon9* screen;
	unsigned long gs_test;
	unsigned long gs_alpha;
	int gs_test_alter;
	int gs_alpha_alter;
	unsigned long fog_col;
	float fog_a;
	float fog_b;
	int fog_enable;
	sgBone* parent;
	_enum light_mode_set;
	_enum light_mode;
	int light_alpha_enable;
	_anon7* lights[8];
	float light_color_offset[4];
	float light_add_color[4];
	float aabb_clip_local_projection[4][4];
	float local_world[4][4];
	float local_projection[4][4];
	float local_screen[4][4];
	float projection_screen[4][4];
	float normal_light_matrix[4][4];
	float light_color_matrix[4][4];
	int light_matrix_enable;
	_anon5 point_lights[8];
	int n_point_lights;
	sgTexArc* texture_addr[2];
	float matrices[4][4];
	int data_version;
	int z_buffer_offset;
};

struct _anon0
{
	_anon8 dmatag[1];
	_anon8 viftag1[1];
	float local_projection[4][4];
	float local_screen[4][4];
	float normal_light_matrix[4][4];
	float light_color_matrix[4][4];
	float light_color_offset[4];
	float light_add_color[4];
	_anon8 viftag2[1];
	int pad_A;
	int pad_B;
	float fog_b;
	float fog_a;
	float xyzw1[4];
	_anon6 viftag3[1];
	_anon6 strow[4];
	int pad[3];
};

struct sgEMDrawBlock
{
	int next_block_offset;
	int params_offset;
	int parts_offset;
	short texture_id;
	short texture_bank;
	short clut_id;
	short palette_idx;
	int bounding_box_offset;
	short matrix_index;
	unsigned char backclip;
	unsigned char pad0;
	int pad1;
};

struct sgEMDrawBlockBBox
{
	float bmin[4];
	float bmax[4];
};

struct sgEMDrawBlockParams
{
	<unknown fundamental type (0xa510)> dma_tag;
	<unknown fundamental type (0xa510)> part_giftag;
	unsigned long tex0;
	unsigned long clamp;
	unsigned int tex1;
	unsigned int alpha;
	unsigned int prim;
	unsigned int nb_parts;
};

struct sgTexArc
{
	<unknown fundamental type (0xa510)> dummy;
};

struct sgEMDrawPart
{
	unsigned long dma_tag;
	int vif_command[2];
	int nloop;
	int eop;
	int size;
	int pad[1];
	int data[0];
};

struct _anon1
{
	_anon8 dmatag[1];
	_anon8 viftag1[1];
	_anon8 giftag[2];
	unsigned long prim;
	unsigned long prim_addr;
	unsigned long tex0;
	unsigned long tex0_addr;
	unsigned long clamp;
	unsigned long clamp_addr;
	unsigned long alpha;
	unsigned long alpha_addr;
	unsigned long tex1;
	unsigned long tex1_addr;
};

struct _anon2
{
	_anon5* valid_points[4];
	int n_valid_points;
};

struct _anon3
{
	_anon11 stq0;
	_anon11 rgba0;
	_anon11 xyzf0;
	_anon11 stq1;
	_anon11 rgba1;
	_anon11 xyzf1;
	_anon11 stq2;
	_anon11 rgba2;
	_anon11 xyzf2;
};

struct _anon4
{
	float light_pos[4];
	float light_color[4];
	float params[4];
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

struct _anon5
{
	float light_pos[4];
	float light_color[4];
	float params[4];
	float linear_a;
	float linear_b;
	float radius;
	int valid;
};

struct sgSotTag
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
};

struct sgSot
{
	sgSotTag** ot_top;
	sgSotTag** ot_last;
	unsigned short ot_size;
	unsigned short ot_width;
	unsigned int flag;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int dma_max;
	sgSotTag* dma_top;
	sgSotTag* dmabuf_pos;
	sgSotTag* dmakick_buf;
	unsigned short* ot_max;
	unsigned int dmatag_num;
};

struct TrianglePacket
{
	_anon11 giftag;
	_anon11 tex0;
	_anon11 tex1;
	_anon11 alpha;
	_anon11 clamp;
	_anon11 stq0;
	_anon11 rgba0;
	_anon11 xyzf0;
	_anon11 stq1;
	_anon11 rgba1;
	_anon11 xyzf1;
	_anon11 stq2;
	_anon11 rgba2;
	_anon11 xyzf2;
};

union _anon6
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

struct _anon7
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

union _anon8
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
	_anon10 view_frustum;
	float wpm[4][4];
	unsigned int dirty;
};

struct _anon9
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

struct _anon10
{
	float v[4][8];
	float plane[4][6];
};

union _anon11
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

enum _enum : unsigned char
{
	SG_EM_LIGHTING_OFF,
	SG_EM_LIGHTING_MUL,
	SG_EM_LIGHTING_OFFSET_MUL,
	SG_EM_LIGHTING_ADD
};

_anon1 vu0_gs_env;
_anon0 vu0_vu_env;
<unknown fundamental type (0xa510)> sg_emrender_vu0_load[0];
sgEMRenderWork em_render_work;
unsigned long* sg_packet_cur;
int vu_current_block_matrix;
_anon2 block_lighting_status;
int vu0_current_backclip;
<unknown fundamental type (0xa510)> sg_emrender_vu0_light_load[0];

void TrianglePacketConstruct(TrianglePacket* pk);
void InitVUEnv();
void InitGSEnv();
void LoadMicroProgram();
void UpdateVUEnv();
void UpdateTexture(sgEMDrawBlock* block);
void UpdateGSEnv(sgEMDrawBlock* block);
void UpdateLightVU(sgEMDrawBlock* block);
void UpdateBlockVU(sgEMDrawBlock* block);
void SendPartVU0(sgEMDrawPart* part);
void ExecShaderRender();
void ExecRender();
void MakeSortPacket(sgEMDrawPart* part, unsigned long* result_pk);
void sgEMRenderInitVU0Part();
void sgEMRenderPreVU0Draw();
void sgEMRenderBlockVU0SortDraw(sgEMDrawBlock* block_);

// 
// Start address: 0x1cf220
void TrianglePacketConstruct(TrianglePacket* pk)
{
	// Line 140, Address: 0x1cf220, Func Offset: 0
	// Line 141, Address: 0x1cf230, Func Offset: 0x10
	// Line 140, Address: 0x1cf234, Func Offset: 0x14
	// Line 141, Address: 0x1cf23c, Func Offset: 0x1c
	// Line 140, Address: 0x1cf240, Func Offset: 0x20
	// Line 141, Address: 0x1cf244, Func Offset: 0x24
	// Line 140, Address: 0x1cf24c, Func Offset: 0x2c
	// Line 141, Address: 0x1cf254, Func Offset: 0x34
	// Line 140, Address: 0x1cf258, Func Offset: 0x38
	// Line 141, Address: 0x1cf25c, Func Offset: 0x3c
	// Line 140, Address: 0x1cf260, Func Offset: 0x40
	// Line 149, Address: 0x1cf264, Func Offset: 0x44
	// Line 141, Address: 0x1cf268, Func Offset: 0x48
	// Line 150, Address: 0x1cf26c, Func Offset: 0x4c
	// Line 148, Address: 0x1cf270, Func Offset: 0x50
	// Line 152, Address: 0x1cf274, Func Offset: 0x54
	// Line 148, Address: 0x1cf278, Func Offset: 0x58
	// Line 149, Address: 0x1cf27c, Func Offset: 0x5c
	// Line 154, Address: 0x1cf280, Func Offset: 0x60
	// Line 149, Address: 0x1cf284, Func Offset: 0x64
	// Line 151, Address: 0x1cf288, Func Offset: 0x68
	// Line 150, Address: 0x1cf28c, Func Offset: 0x6c
	// Line 151, Address: 0x1cf290, Func Offset: 0x70
	// Line 153, Address: 0x1cf298, Func Offset: 0x78
	// Line 152, Address: 0x1cf29c, Func Offset: 0x7c
	// Line 153, Address: 0x1cf2a0, Func Offset: 0x80
	// Line 155, Address: 0x1cf2a8, Func Offset: 0x88
	// Line 154, Address: 0x1cf2ac, Func Offset: 0x8c
	// Line 155, Address: 0x1cf2b0, Func Offset: 0x90
	// Line 156, Address: 0x1cf2b4, Func Offset: 0x94
	// Func End, Address: 0x1cf2bc, Func Offset: 0x9c
}

// 
// Start address: 0x1cf2c0
void InitVUEnv()
{
	_anon0* ptr;
	// Line 166, Address: 0x1cf2c0, Func Offset: 0
	// Line 165, Address: 0x1cf2c4, Func Offset: 0x4
	// Line 166, Address: 0x1cf2c8, Func Offset: 0x8
	// Line 165, Address: 0x1cf2cc, Func Offset: 0xc
	// Line 166, Address: 0x1cf2d0, Func Offset: 0x10
	// Line 165, Address: 0x1cf2d4, Func Offset: 0x14
	// Line 166, Address: 0x1cf2d8, Func Offset: 0x18
	// Line 169, Address: 0x1cf2e4, Func Offset: 0x24
	// Line 171, Address: 0x1cf2f0, Func Offset: 0x30
	// Line 170, Address: 0x1cf2f4, Func Offset: 0x34
	// Line 171, Address: 0x1cf2f8, Func Offset: 0x38
	// Line 172, Address: 0x1cf2fc, Func Offset: 0x3c
	// Line 171, Address: 0x1cf300, Func Offset: 0x40
	// Line 172, Address: 0x1cf304, Func Offset: 0x44
	// Line 173, Address: 0x1cf308, Func Offset: 0x48
	// Line 172, Address: 0x1cf30c, Func Offset: 0x4c
	// Line 173, Address: 0x1cf310, Func Offset: 0x50
	// Line 176, Address: 0x1cf318, Func Offset: 0x58
	// Line 175, Address: 0x1cf31c, Func Offset: 0x5c
	// Line 176, Address: 0x1cf320, Func Offset: 0x60
	// Line 178, Address: 0x1cf328, Func Offset: 0x68
	// Line 183, Address: 0x1cf330, Func Offset: 0x70
	// Line 179, Address: 0x1cf334, Func Offset: 0x74
	// Line 184, Address: 0x1cf338, Func Offset: 0x78
	// Line 180, Address: 0x1cf33c, Func Offset: 0x7c
	// Line 181, Address: 0x1cf340, Func Offset: 0x80
	// Line 183, Address: 0x1cf344, Func Offset: 0x84
	// Line 184, Address: 0x1cf348, Func Offset: 0x88
	// Line 185, Address: 0x1cf34c, Func Offset: 0x8c
	// Line 186, Address: 0x1cf350, Func Offset: 0x90
	// Line 187, Address: 0x1cf354, Func Offset: 0x94
	// Line 188, Address: 0x1cf358, Func Offset: 0x98
	// Line 189, Address: 0x1cf35c, Func Offset: 0x9c
	// Func End, Address: 0x1cf36c, Func Offset: 0xac
}

// 
// Start address: 0x1cf370
void InitGSEnv()
{
	_anon1* ptr;
	unsigned long material_giftag[2];
	// Line 195, Address: 0x1cf370, Func Offset: 0
	// Line 200, Address: 0x1cf374, Func Offset: 0x4
	// Line 195, Address: 0x1cf378, Func Offset: 0x8
	// Line 200, Address: 0x1cf37c, Func Offset: 0xc
	// Line 195, Address: 0x1cf380, Func Offset: 0x10
	// Line 203, Address: 0x1cf384, Func Offset: 0x14
	// Line 200, Address: 0x1cf388, Func Offset: 0x18
	// Line 203, Address: 0x1cf390, Func Offset: 0x20
	// Line 205, Address: 0x1cf398, Func Offset: 0x28
	// Line 204, Address: 0x1cf39c, Func Offset: 0x2c
	// Line 205, Address: 0x1cf3a0, Func Offset: 0x30
	// Line 210, Address: 0x1cf3a4, Func Offset: 0x34
	// Line 206, Address: 0x1cf3a8, Func Offset: 0x38
	// Line 205, Address: 0x1cf3ac, Func Offset: 0x3c
	// Line 206, Address: 0x1cf3b0, Func Offset: 0x40
	// Line 213, Address: 0x1cf3b4, Func Offset: 0x44
	// Line 206, Address: 0x1cf3b8, Func Offset: 0x48
	// Line 214, Address: 0x1cf3bc, Func Offset: 0x4c
	// Line 208, Address: 0x1cf3c0, Func Offset: 0x50
	// Line 215, Address: 0x1cf3c4, Func Offset: 0x54
	// Line 208, Address: 0x1cf3c8, Func Offset: 0x58
	// Line 210, Address: 0x1cf3cc, Func Offset: 0x5c
	// Line 216, Address: 0x1cf3d0, Func Offset: 0x60
	// Line 210, Address: 0x1cf3d4, Func Offset: 0x64
	// Line 211, Address: 0x1cf3d8, Func Offset: 0x68
	// Line 212, Address: 0x1cf3e4, Func Offset: 0x74
	// Line 213, Address: 0x1cf3e8, Func Offset: 0x78
	// Line 214, Address: 0x1cf3ec, Func Offset: 0x7c
	// Line 215, Address: 0x1cf3f0, Func Offset: 0x80
	// Line 216, Address: 0x1cf3f4, Func Offset: 0x84
	// Line 218, Address: 0x1cf3f8, Func Offset: 0x88
	// Line 219, Address: 0x1cf3fc, Func Offset: 0x8c
	// Func End, Address: 0x1cf40c, Func Offset: 0x9c
}

// 
// Start address: 0x1cf410
void LoadMicroProgram()
{
	unsigned long* pk;
	// Line 228, Address: 0x1cf410, Func Offset: 0
	// Line 230, Address: 0x1cf414, Func Offset: 0x4
	// Line 228, Address: 0x1cf418, Func Offset: 0x8
	// Line 230, Address: 0x1cf41c, Func Offset: 0xc
	// Line 232, Address: 0x1cf430, Func Offset: 0x20
	// Line 233, Address: 0x1cf438, Func Offset: 0x28
	// Line 234, Address: 0x1cf440, Func Offset: 0x30
	// Line 235, Address: 0x1cf470, Func Offset: 0x60
	// Line 236, Address: 0x1cf478, Func Offset: 0x68
	// Line 238, Address: 0x1cf488, Func Offset: 0x78
	// Line 239, Address: 0x1cf490, Func Offset: 0x80
	// Line 240, Address: 0x1cf49c, Func Offset: 0x8c
	// Line 242, Address: 0x1cf4b4, Func Offset: 0xa4
	// Line 243, Address: 0x1cf4bc, Func Offset: 0xac
	// Func End, Address: 0x1cf4cc, Func Offset: 0xbc
}

// 
// Start address: 0x1cf4d0
void UpdateVUEnv()
{
	_anon0* ptr;
	// Line 251, Address: 0x1cf4d0, Func Offset: 0
	// Line 253, Address: 0x1cf4e8, Func Offset: 0x18
	// Line 254, Address: 0x1cf514, Func Offset: 0x44
	// Line 255, Address: 0x1cf540, Func Offset: 0x70
	// Line 256, Address: 0x1cf56c, Func Offset: 0x9c
	// Line 257, Address: 0x1cf598, Func Offset: 0xc8
	// Line 258, Address: 0x1cf5ac, Func Offset: 0xdc
	// Line 260, Address: 0x1cf5c0, Func Offset: 0xf0
	// Line 261, Address: 0x1cf5cc, Func Offset: 0xfc
	// Line 263, Address: 0x1cf5d8, Func Offset: 0x108
	// Line 264, Address: 0x1cf5ec, Func Offset: 0x11c
	// Line 265, Address: 0x1cf5f4, Func Offset: 0x124
	// Line 266, Address: 0x1cf5f8, Func Offset: 0x128
	// Line 268, Address: 0x1cf5fc, Func Offset: 0x12c
	// Line 269, Address: 0x1cf608, Func Offset: 0x138
	// Line 270, Address: 0x1cf610, Func Offset: 0x140
	// Line 271, Address: 0x1cf614, Func Offset: 0x144
	// Line 272, Address: 0x1cf618, Func Offset: 0x148
	// Line 273, Address: 0x1cf61c, Func Offset: 0x14c
	// Line 275, Address: 0x1cf620, Func Offset: 0x150
	// Func End, Address: 0x1cf630, Func Offset: 0x160
}

// 
// Start address: 0x1cf630
void UpdateTexture(sgEMDrawBlock* block)
{
	// Line 286, Address: 0x1cf630, Func Offset: 0
	// Line 289, Address: 0x1cf638, Func Offset: 0x8
	// Line 290, Address: 0x1cf654, Func Offset: 0x24
	// Func End, Address: 0x1cf660, Func Offset: 0x30
}

// 
// Start address: 0x1cf660
void UpdateGSEnv(sgEMDrawBlock* block)
{
	_anon1* ptr;
	sgEMDrawBlockParams* params;
	unsigned int prim;
	// Line 298, Address: 0x1cf660, Func Offset: 0
	// Line 300, Address: 0x1cf664, Func Offset: 0x4
	// Line 298, Address: 0x1cf668, Func Offset: 0x8
	// Line 304, Address: 0x1cf66c, Func Offset: 0xc
	// Line 298, Address: 0x1cf670, Func Offset: 0x10
	// Line 306, Address: 0x1cf674, Func Offset: 0x14
	// Line 298, Address: 0x1cf67c, Func Offset: 0x1c
	// Line 305, Address: 0x1cf680, Func Offset: 0x20
	// Line 306, Address: 0x1cf684, Func Offset: 0x24
	// Line 307, Address: 0x1cf68c, Func Offset: 0x2c
	// Line 309, Address: 0x1cf690, Func Offset: 0x30
	// Line 312, Address: 0x1cf694, Func Offset: 0x34
	// Line 309, Address: 0x1cf698, Func Offset: 0x38
	// Line 311, Address: 0x1cf6a8, Func Offset: 0x48
	// Line 312, Address: 0x1cf6b0, Func Offset: 0x50
	// Line 313, Address: 0x1cf6bc, Func Offset: 0x5c
	// Line 315, Address: 0x1cf6c8, Func Offset: 0x68
	// Line 316, Address: 0x1cf6d8, Func Offset: 0x78
	// Line 317, Address: 0x1cf6dc, Func Offset: 0x7c
	// Func End, Address: 0x1cf6e4, Func Offset: 0x84
}

// 
// Start address: 0x1cf6f0
void UpdateLightVU(sgEMDrawBlock* block)
{
	sgEMRenderWork* work;
	_anon2* block_stat;
	int matrix_index;
	float block_mat[4][4];
	float block_local[4][4];
	float mat[4];
	_anon4* vu_pdata;
	_anon5* pdata;
	int qwc;
	int i;
	unsigned int* p;
	// Line 322, Address: 0x1cf6f0, Func Offset: 0
	// Line 334, Address: 0x1cf6f4, Func Offset: 0x4
	// Line 322, Address: 0x1cf6f8, Func Offset: 0x8
	// Line 323, Address: 0x1cf704, Func Offset: 0x14
	// Line 322, Address: 0x1cf708, Func Offset: 0x18
	// Line 324, Address: 0x1cf70c, Func Offset: 0x1c
	// Line 322, Address: 0x1cf710, Func Offset: 0x20
	// Line 323, Address: 0x1cf714, Func Offset: 0x24
	// Line 325, Address: 0x1cf718, Func Offset: 0x28
	// Line 324, Address: 0x1cf71c, Func Offset: 0x2c
	// Line 334, Address: 0x1cf720, Func Offset: 0x30
	// Line 336, Address: 0x1cf728, Func Offset: 0x38
	// Line 339, Address: 0x1cf734, Func Offset: 0x44
	// Line 341, Address: 0x1cf744, Func Offset: 0x54
	// Line 343, Address: 0x1cf75c, Func Offset: 0x6c
	// Line 345, Address: 0x1cf768, Func Offset: 0x78
	// Line 348, Address: 0x1cf7dc, Func Offset: 0xec
	// Line 346, Address: 0x1cf7e0, Func Offset: 0xf0
	// Line 348, Address: 0x1cf7e4, Func Offset: 0xf4
	// Line 351, Address: 0x1cf804, Func Offset: 0x114
	// Line 349, Address: 0x1cf808, Func Offset: 0x118
	// Line 351, Address: 0x1cf80c, Func Offset: 0x11c
	// Line 354, Address: 0x1cf814, Func Offset: 0x124
	// Line 352, Address: 0x1cf818, Func Offset: 0x128
	// Line 354, Address: 0x1cf81c, Func Offset: 0x12c
	// Line 356, Address: 0x1cf824, Func Offset: 0x134
	// Line 357, Address: 0x1cf82c, Func Offset: 0x13c
	// Line 360, Address: 0x1cf830, Func Offset: 0x140
	// Line 361, Address: 0x1cf83c, Func Offset: 0x14c
	// Line 362, Address: 0x1cf844, Func Offset: 0x154
	// Line 365, Address: 0x1cf848, Func Offset: 0x158
	// Line 362, Address: 0x1cf860, Func Offset: 0x170
	// Line 365, Address: 0x1cf868, Func Offset: 0x178
	// Line 367, Address: 0x1cf894, Func Offset: 0x1a4
	// Line 368, Address: 0x1cf8a0, Func Offset: 0x1b0
	// Line 369, Address: 0x1cf8b0, Func Offset: 0x1c0
	// Line 371, Address: 0x1cf8b8, Func Offset: 0x1c8
	// Line 369, Address: 0x1cf8bc, Func Offset: 0x1cc
	// Line 371, Address: 0x1cf8c0, Func Offset: 0x1d0
	// Line 372, Address: 0x1cf8cc, Func Offset: 0x1dc
	// Line 373, Address: 0x1cf8dc, Func Offset: 0x1ec
	// Line 375, Address: 0x1cf908, Func Offset: 0x218
	// Line 374, Address: 0x1cf90c, Func Offset: 0x21c
	// Line 375, Address: 0x1cf910, Func Offset: 0x220
	// Line 376, Address: 0x1cf920, Func Offset: 0x230
	// Line 379, Address: 0x1cf928, Func Offset: 0x238
	// Line 380, Address: 0x1cf930, Func Offset: 0x240
	// Func End, Address: 0x1cf94c, Func Offset: 0x25c
}

// 
// Start address: 0x1cf950
void UpdateBlockVU(sgEMDrawBlock* block)
{
	unsigned long* pk;
	sgEMDrawBlockParams* params;
	sgEMRenderWork* work;
	int itop;
	int matrix_index;
	float block_mat[4][4];
	float mat[4];
	int qwc;
	// Line 387, Address: 0x1cf950, Func Offset: 0
	// Line 390, Address: 0x1cf970, Func Offset: 0x20
	// Line 387, Address: 0x1cf974, Func Offset: 0x24
	// Line 390, Address: 0x1cf978, Func Offset: 0x28
	// Line 389, Address: 0x1cf97c, Func Offset: 0x2c
	// Line 391, Address: 0x1cf980, Func Offset: 0x30
	// Line 392, Address: 0x1cf984, Func Offset: 0x34
	// Line 389, Address: 0x1cf988, Func Offset: 0x38
	// Line 397, Address: 0x1cf98c, Func Offset: 0x3c
	// Line 398, Address: 0x1cf9a4, Func Offset: 0x54
	// Line 399, Address: 0x1cf9ac, Func Offset: 0x5c
	// Line 400, Address: 0x1cf9dc, Func Offset: 0x8c
	// Line 404, Address: 0x1cf9f0, Func Offset: 0xa0
	// Line 405, Address: 0x1cfa00, Func Offset: 0xb0
	// Line 407, Address: 0x1cfa08, Func Offset: 0xb8
	// Line 409, Address: 0x1cfa24, Func Offset: 0xd4
	// Line 410, Address: 0x1cfa2c, Func Offset: 0xdc
	// Line 412, Address: 0x1cfa38, Func Offset: 0xe8
	// Line 410, Address: 0x1cfa3c, Func Offset: 0xec
	// Line 412, Address: 0x1cfa40, Func Offset: 0xf0
	// Line 415, Address: 0x1cfab0, Func Offset: 0x160
	// Line 413, Address: 0x1cfab4, Func Offset: 0x164
	// Line 415, Address: 0x1cfab8, Func Offset: 0x168
	// Line 416, Address: 0x1cfb28, Func Offset: 0x1d8
	// Line 417, Address: 0x1cfb2c, Func Offset: 0x1dc
	// Line 418, Address: 0x1cfb34, Func Offset: 0x1e4
	// Line 419, Address: 0x1cfb3c, Func Offset: 0x1ec
	// Line 421, Address: 0x1cfb40, Func Offset: 0x1f0
	// Line 422, Address: 0x1cfb50, Func Offset: 0x200
	// Line 424, Address: 0x1cfb58, Func Offset: 0x208
	// Line 425, Address: 0x1cfb60, Func Offset: 0x210
	// Line 428, Address: 0x1cfb74, Func Offset: 0x224
	// Line 429, Address: 0x1cfb80, Func Offset: 0x230
	// Line 431, Address: 0x1cfb98, Func Offset: 0x248
	// Line 432, Address: 0x1cfba4, Func Offset: 0x254
	// Line 433, Address: 0x1cfbac, Func Offset: 0x25c
	// Func End, Address: 0x1cfbd0, Func Offset: 0x280
}

// 
// Start address: 0x1cfbd0
void SendPartVU0(sgEMDrawPart* part)
{
	// Line 439, Address: 0x1cfbd0, Func Offset: 0
	// Line 449, Address: 0x1cfbd4, Func Offset: 0x4
	// Line 439, Address: 0x1cfbdc, Func Offset: 0xc
	// Line 449, Address: 0x1cfbe0, Func Offset: 0x10
	// Line 451, Address: 0x1cfc28, Func Offset: 0x58
	// Line 456, Address: 0x1cfc38, Func Offset: 0x68
	// Func End, Address: 0x1cfc44, Func Offset: 0x74
}

// 
// Start address: 0x1cfc50
void ExecShaderRender()
{
	unsigned int* exec_table;
	int light_finish_mpg;
	int i;
	unsigned int* p;
	unsigned int* p;
	unsigned int* p;
	// Line 459, Address: 0x1cfc50, Func Offset: 0
	// Line 468, Address: 0x1cfc58, Func Offset: 0x8
	// Line 469, Address: 0x1cfc60, Func Offset: 0x10
	// Line 472, Address: 0x1cfc90, Func Offset: 0x40
	// Line 473, Address: 0x1cfc98, Func Offset: 0x48
	// Line 475, Address: 0x1cfcac, Func Offset: 0x5c
	// Line 477, Address: 0x1cfcb4, Func Offset: 0x64
	// Line 478, Address: 0x1cfccc, Func Offset: 0x7c
	// Line 477, Address: 0x1cfcd0, Func Offset: 0x80
	// Line 478, Address: 0x1cfce0, Func Offset: 0x90
	// Line 481, Address: 0x1cfcf4, Func Offset: 0xa4
	// Line 478, Address: 0x1cfcf8, Func Offset: 0xa8
	// Line 481, Address: 0x1cfd08, Func Offset: 0xb8
	// Line 482, Address: 0x1cfd14, Func Offset: 0xc4
	// Line 484, Address: 0x1cfd20, Func Offset: 0xd0
	// Line 487, Address: 0x1cfd30, Func Offset: 0xe0
	// Line 488, Address: 0x1cfd48, Func Offset: 0xf8
	// Line 489, Address: 0x1cfd4c, Func Offset: 0xfc
	// Line 488, Address: 0x1cfd58, Func Offset: 0x108
	// Line 489, Address: 0x1cfd5c, Func Offset: 0x10c
	// Line 493, Address: 0x1cfd68, Func Offset: 0x118
	// Line 492, Address: 0x1cfd70, Func Offset: 0x120
	// Line 494, Address: 0x1cfd74, Func Offset: 0x124
	// Line 493, Address: 0x1cfd78, Func Offset: 0x128
	// Line 494, Address: 0x1cfd7c, Func Offset: 0x12c
	// Line 493, Address: 0x1cfd80, Func Offset: 0x130
	// Line 494, Address: 0x1cfd84, Func Offset: 0x134
	// Line 495, Address: 0x1cfd8c, Func Offset: 0x13c
	// Line 496, Address: 0x1cfd90, Func Offset: 0x140
	// Line 503, Address: 0x1cfd94, Func Offset: 0x144
	// Line 505, Address: 0x1cfdc4, Func Offset: 0x174
	// Line 507, Address: 0x1cfdcc, Func Offset: 0x17c
	// Line 509, Address: 0x1cfdfc, Func Offset: 0x1ac
	// Line 514, Address: 0x1cfe04, Func Offset: 0x1b4
	// Line 517, Address: 0x1cfe28, Func Offset: 0x1d8
	// Line 518, Address: 0x1cfe30, Func Offset: 0x1e0
	// Func End, Address: 0x1cfe3c, Func Offset: 0x1ec
}

// 
// Start address: 0x1cfe40
void ExecRender()
{
	int draw_mpg;
	// Line 521, Address: 0x1cfe40, Func Offset: 0
	// Line 526, Address: 0x1cfe44, Func Offset: 0x4
	// Line 521, Address: 0x1cfe48, Func Offset: 0x8
	// Line 526, Address: 0x1cfe50, Func Offset: 0x10
	// Line 527, Address: 0x1cfe5c, Func Offset: 0x1c
	// Line 529, Address: 0x1cfe68, Func Offset: 0x28
	// Line 530, Address: 0x1cfe70, Func Offset: 0x30
	// Line 531, Address: 0x1cfe84, Func Offset: 0x44
	// Line 537, Address: 0x1cfe88, Func Offset: 0x48
	// Line 538, Address: 0x1cfe90, Func Offset: 0x50
	// Line 540, Address: 0x1cfea0, Func Offset: 0x60
	// Line 541, Address: 0x1cfea8, Func Offset: 0x68
	// Func End, Address: 0x1cfeb8, Func Offset: 0x78
}

// 
// Start address: 0x1cfec0
void MakeSortPacket(sgEMDrawPart* part, unsigned long* result_pk)
{
	int i;
	int nloop;
	_anon3* result;
	sgSot* sot;
	TrianglePacket* pk;
	float w;
	float q;
	unsigned long* ot_pk;
	// Line 559, Address: 0x1cfec0, Func Offset: 0
	// Line 575, Address: 0x1cfee4, Func Offset: 0x24
	// Line 578, Address: 0x1cfeec, Func Offset: 0x2c
	// Line 575, Address: 0x1cfef0, Func Offset: 0x30
	// Line 578, Address: 0x1cfef4, Func Offset: 0x34
	// Line 579, Address: 0x1cfef8, Func Offset: 0x38
	// Line 583, Address: 0x1cff00, Func Offset: 0x40
	// Line 581, Address: 0x1cff04, Func Offset: 0x44
	// Line 584, Address: 0x1cff08, Func Offset: 0x48
	// Line 589, Address: 0x1cff10, Func Offset: 0x50
	// Line 592, Address: 0x1cff20, Func Offset: 0x60
	// Line 593, Address: 0x1cff2c, Func Offset: 0x6c
	// Line 594, Address: 0x1cff34, Func Offset: 0x74
	// Line 595, Address: 0x1cff3c, Func Offset: 0x7c
	// Line 596, Address: 0x1cff48, Func Offset: 0x88
	// Line 599, Address: 0x1cff50, Func Offset: 0x90
	// Line 609, Address: 0x1cff54, Func Offset: 0x94
	// Line 599, Address: 0x1cff60, Func Offset: 0xa0
	// Line 600, Address: 0x1cff64, Func Offset: 0xa4
	// Line 601, Address: 0x1cff6c, Func Offset: 0xac
	// Line 602, Address: 0x1cff74, Func Offset: 0xb4
	// Line 603, Address: 0x1cff7c, Func Offset: 0xbc
	// Line 604, Address: 0x1cff84, Func Offset: 0xc4
	// Line 605, Address: 0x1cff8c, Func Offset: 0xcc
	// Line 606, Address: 0x1cff94, Func Offset: 0xd4
	// Line 607, Address: 0x1cff9c, Func Offset: 0xdc
	// Line 609, Address: 0x1cffa0, Func Offset: 0xe0
	// Line 610, Address: 0x1cffa8, Func Offset: 0xe8
	// Line 617, Address: 0x1cffb0, Func Offset: 0xf0
	// Line 618, Address: 0x1cffb4, Func Offset: 0xf4
	// Line 619, Address: 0x1cffc4, Func Offset: 0x104
	// Line 621, Address: 0x1cfff0, Func Offset: 0x130
	// Line 622, Address: 0x1d0008, Func Offset: 0x148
	// Func End, Address: 0x1d002c, Func Offset: 0x16c
}

// 
// Start address: 0x1d0030
void sgEMRenderInitVU0Part()
{
	// Line 629, Address: 0x1d0030, Func Offset: 0
	// Line 630, Address: 0x1d0038, Func Offset: 0x8
	// Line 631, Address: 0x1d0040, Func Offset: 0x10
	// Line 632, Address: 0x1d0048, Func Offset: 0x18
	// Line 633, Address: 0x1d0050, Func Offset: 0x20
	// Func End, Address: 0x1d005c, Func Offset: 0x2c
}

// 
// Start address: 0x1d0060
void sgEMRenderPreVU0Draw()
{
	// Line 637, Address: 0x1d0060, Func Offset: 0
	// Line 640, Address: 0x1d0068, Func Offset: 0x8
	// Line 643, Address: 0x1d0070, Func Offset: 0x10
	// Line 644, Address: 0x1d0078, Func Offset: 0x18
	// Func End, Address: 0x1d0084, Func Offset: 0x24
}

// 
// Start address: 0x1d0090
void sgEMRenderBlockVU0SortDraw(sgEMDrawBlock* block_)
{
	sgEMDrawBlock* block;
	int i;
	sgEMDrawPart* part;
	sgEMDrawBlockParams* params;
	sgEMDrawBlockBBox* bbox;
	unsigned long* pk;
	void* adr;
	// Line 650, Address: 0x1d0090, Func Offset: 0
	// Line 654, Address: 0x1d00ac, Func Offset: 0x1c
	// Line 664, Address: 0x1d00b4, Func Offset: 0x24
	// Line 667, Address: 0x1d00b8, Func Offset: 0x28
	// Line 668, Address: 0x1d00c8, Func Offset: 0x38
	// Line 671, Address: 0x1d00d0, Func Offset: 0x40
	// Line 675, Address: 0x1d00d8, Func Offset: 0x48
	// Line 677, Address: 0x1d00e0, Func Offset: 0x50
	// Line 679, Address: 0x1d00e8, Func Offset: 0x58
	// Line 680, Address: 0x1d00ec, Func Offset: 0x5c
	// Line 682, Address: 0x1d0100, Func Offset: 0x70
	// Line 683, Address: 0x1d010c, Func Offset: 0x7c
	// Line 689, Address: 0x1d0110, Func Offset: 0x80
	// Line 692, Address: 0x1d0118, Func Offset: 0x88
	// Line 695, Address: 0x1d0120, Func Offset: 0x90
	// Line 698, Address: 0x1d0128, Func Offset: 0x98
	// Line 697, Address: 0x1d0130, Func Offset: 0xa0
	// Line 698, Address: 0x1d0134, Func Offset: 0xa4
	// Line 700, Address: 0x1d0140, Func Offset: 0xb0
	// Line 703, Address: 0x1d014c, Func Offset: 0xbc
	// Line 704, Address: 0x1d0164, Func Offset: 0xd4
	// Line 706, Address: 0x1d016c, Func Offset: 0xdc
	// Line 708, Address: 0x1d0174, Func Offset: 0xe4
	// Line 709, Address: 0x1d0184, Func Offset: 0xf4
	// Line 710, Address: 0x1d018c, Func Offset: 0xfc
	// Line 711, Address: 0x1d0198, Func Offset: 0x108
	// Line 714, Address: 0x1d01a0, Func Offset: 0x110
	// Line 715, Address: 0x1d01ac, Func Offset: 0x11c
	// Line 718, Address: 0x1d01c4, Func Offset: 0x134
	// Line 719, Address: 0x1d01cc, Func Offset: 0x13c
	// Line 721, Address: 0x1d01d4, Func Offset: 0x144
	// Line 722, Address: 0x1d01e8, Func Offset: 0x158
	// Line 726, Address: 0x1d01f0, Func Offset: 0x160
	// Line 729, Address: 0x1d01fc, Func Offset: 0x16c
	// Line 728, Address: 0x1d0204, Func Offset: 0x174
	// Line 729, Address: 0x1d0208, Func Offset: 0x178
	// Line 731, Address: 0x1d0214, Func Offset: 0x184
	// Line 729, Address: 0x1d0218, Func Offset: 0x188
	// Line 732, Address: 0x1d021c, Func Offset: 0x18c
	// Line 734, Address: 0x1d0224, Func Offset: 0x194
	// Line 735, Address: 0x1d0228, Func Offset: 0x198
	// Line 739, Address: 0x1d0230, Func Offset: 0x1a0
	// Line 740, Address: 0x1d0250, Func Offset: 0x1c0
	// Line 741, Address: 0x1d0258, Func Offset: 0x1c8
	// Line 742, Address: 0x1d0260, Func Offset: 0x1d0
	// Line 743, Address: 0x1d026c, Func Offset: 0x1dc
	// Line 745, Address: 0x1d0274, Func Offset: 0x1e4
	// Func End, Address: 0x1d0298, Func Offset: 0x208
}

