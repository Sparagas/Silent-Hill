typedef struct _anon0;
typedef struct _anon1;
typedef struct Model3HitSphere;
typedef struct sgTexArc;
typedef struct _anon2;
typedef struct Model;
typedef struct BoxData;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct Model3HitAabb1;
typedef struct Model3HitObb;
typedef union Q;
typedef enum _enum : unsigned char;

typedef void(*type_3)(_anon2*, int, int, float*);
typedef void(*type_5)(_anon2*, int, int, float*);

typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[4];
typedef float type_4[4];
typedef int type_6[4];
typedef unsigned char type_7[4];
typedef unsigned long type_8[2];
typedef unsigned int type_9[4];
typedef unsigned short type_10[8];
typedef unsigned char type_11[16];
typedef long type_12[2];
typedef int type_13[4];
typedef short type_14[8];
typedef char type_15[16];
typedef int type_16[4];
typedef float type_17[4];
typedef Q type_18[8];

struct _anon0
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon2*, int, int, float*);
	int equip_flag;
};

struct _anon1
{
	int dummy;
};

struct Model3HitSphere
{
	float cx;
	float cy;
	float cz;
	float radius;
};

struct sgTexArc
{
	<unknown fundamental type (0xa510)> dummy;
};

struct _anon2
{
	unsigned long tex0;
	unsigned long clamp;
};

struct Model
{
	unsigned int id;
	unsigned int revision;
	unsigned int initial_matrices_offset;
	unsigned int n_skeletons;
	unsigned int skeleton_structure_offset;
	unsigned int n_skeleton_pairs;
	unsigned int skeleton_pairs_offset;
	unsigned int default_pcms_offset;
	unsigned int n_vu1_parts;
	unsigned int vu1_parts_offset;
	unsigned int n_vu0_parts;
	unsigned int vu0_parts_offset;
	unsigned int n_texture_blocks;
	unsigned int texture_blocks_offset;
	unsigned int n_text_poses;
	unsigned int text_poses_offset;
	unsigned int text_pos_params_offset;
	unsigned int n_cluster_nodes;
	unsigned int cluster_nodes_offset;
	unsigned int n_clusters;
	unsigned int clusters_offset;
	unsigned int n_func_data;
	unsigned int func_data_offset;
	unsigned int hit_offset;
	unsigned int box_offset;
	unsigned int flag;
	unsigned int relative_matrices_offset;
	unsigned int relative_transes_offset;
	unsigned int hits_offset;
	unsigned int reserved_1d;
	unsigned int tanmparams;
	unsigned int textureextras;
};

struct BoxData
{
	Q pos[8];
};

struct _anon3
{
	float center[4];
	float radius;
};

struct _anon4
{
	float bmin[4];
	float bmax[4];
};

struct _anon5
{
	float mat[4][4];
	float half_w[4];
};

struct Model3HitAabb1
{
	float min_x;
	float min_y;
	float min_z;
	float d0;
	float max_x;
	float max_y;
	float max_z;
	float d1;
	float cx;
	float cy;
	float cz;
	float d2;
};

struct Model3HitObb
{
	float m00;
	float m10;
	float m20;
	float sx;
	float m01;
	float m11;
	float m21;
	float sy;
	float m02;
	float m12;
	float m22;
	float sz;
	float m03;
	float m13;
	float m23;
	float d0;
};

union Q
{
	<unknown fundamental type (0xa510)> u128;
	unsigned long u64[2];
	unsigned int u32[4];
	unsigned short u16[8];
	unsigned char u8[16];
	long s64[2];
	int s32[4];
	short s16[8];
	char s8[16];
	int q[4];
	float fv[4];
	int iv[4];
};

enum _enum : unsigned char
{
	SG_TEHIT_NONE,
	SG_TEHIT_CYLINDER,
	SG_TEHIT_SPHERE,
	SG_TEHIT_AABB,
	SG_TEHIT_AABB_OFFSET,
	SG_TEHIT_OBB
};

float sg_matrix_unit[4][4];

int sgTEModelConstruct(_anon0* model, void* te_model_data, sgTexArc* te_texture_data);
int sgTEModelWorkAllocate(_anon0* model);
void sgTEModelDestruct(_anon0* model);
void sgTEModelSetTexture(_anon0* model, sgTexArc* te_texture_data);
void sgTEModelSetGlobalTexture(_anon0* model, sgTexArc* te_texture_data);
void sgTEModelSetTextureLoadFunction(_anon0* model, void(*texture_load_func)(_anon2*, int, int, float*));
void sgTEModelSetPartHide(_anon0* model, unsigned int equip_id);
void sgTEModelSetPartUnHide(_anon0* model, unsigned int equip_id);
unsigned char* sgTEModelDataSkeletonStructure(_anon0* model);
float[4] sgTEModelDataInitialMatrix(_anon0* model, int transform_no);
int sgTEModelNBones(_anon0* model);
int sgTEModelNClusters(_anon0* model);
int sgTEModelNAnimateTextures(_anon0* model);
void Model3OBBToOBB(Model3HitObb* mobb, _anon5* obb);
_anon1* sgTEModelGetHit(_anon0* model, int bone_idx);
int sgTEModelHitNParts(_anon1* hit);
_enum sgTEModelHitPartType(_anon1* hit, int hit_part_no);
int sgTEModelHitPartID(_anon1* hit, int hit_part_no);
void sgTEModelHitPartGetOBB(_anon1* hit, int hit_part_no, _anon5* obb);
void sgTEModelHitPartGetSpehere(_anon1* hit, int hit_part_no, _anon3* sphere);
void sgTEModelHitPartGetAABBWithOffset(_anon1* hit, int hit_part_no, _anon4* aabb, float* offset);

// 
// Start address: 0x1535b0
int sgTEModelConstruct(_anon0* model, void* te_model_data, sgTexArc* te_texture_data)
{
	Model* model_data;
	int n_tanms;
	float initial[4][4];
	int i;
	int i;
	int i;
	// Line 36, Address: 0x1535b0, Func Offset: 0
	// Line 41, Address: 0x1535cc, Func Offset: 0x1c
	// Line 42, Address: 0x1535d4, Func Offset: 0x24
	// Line 43, Address: 0x1535e0, Func Offset: 0x30
	// Line 46, Address: 0x1535ec, Func Offset: 0x3c
	// Line 48, Address: 0x1535fc, Func Offset: 0x4c
	// Line 49, Address: 0x153604, Func Offset: 0x54
	// Line 52, Address: 0x153610, Func Offset: 0x60
	// Line 53, Address: 0x153620, Func Offset: 0x70
	// Line 59, Address: 0x153628, Func Offset: 0x78
	// Line 63, Address: 0x153634, Func Offset: 0x84
	// Line 64, Address: 0x153640, Func Offset: 0x90
	// Line 65, Address: 0x153674, Func Offset: 0xc4
	// Line 71, Address: 0x153688, Func Offset: 0xd8
	// Line 72, Address: 0x153690, Func Offset: 0xe0
	// Line 73, Address: 0x153698, Func Offset: 0xe8
	// Line 72, Address: 0x15369c, Func Offset: 0xec
	// Line 73, Address: 0x1536a4, Func Offset: 0xf4
	// Line 76, Address: 0x1536b8, Func Offset: 0x108
	// Line 77, Address: 0x1536c0, Func Offset: 0x110
	// Line 79, Address: 0x1536c8, Func Offset: 0x118
	// Line 80, Address: 0x1536d0, Func Offset: 0x120
	// Line 87, Address: 0x1536d8, Func Offset: 0x128
	// Line 80, Address: 0x1536dc, Func Offset: 0x12c
	// Line 81, Address: 0x1536e4, Func Offset: 0x134
	// Line 82, Address: 0x1536f0, Func Offset: 0x140
	// Line 83, Address: 0x1536fc, Func Offset: 0x14c
	// Line 87, Address: 0x153708, Func Offset: 0x158
	// Line 88, Address: 0x153714, Func Offset: 0x164
	// Line 90, Address: 0x153718, Func Offset: 0x168
	// Line 91, Address: 0x153720, Func Offset: 0x170
	// Func End, Address: 0x153738, Func Offset: 0x188
}

// 
// Start address: 0x153740
int sgTEModelWorkAllocate(_anon0* model)
{
	Model* model_data;
	int size;
	int n_tanms;
	// Line 100, Address: 0x153740, Func Offset: 0
	// Line 101, Address: 0x153750, Func Offset: 0x10
	// Line 105, Address: 0x153754, Func Offset: 0x14
	// Line 108, Address: 0x153768, Func Offset: 0x28
	// Line 109, Address: 0x15376c, Func Offset: 0x2c
	// Line 108, Address: 0x153770, Func Offset: 0x30
	// Line 109, Address: 0x153774, Func Offset: 0x34
	// Line 110, Address: 0x153778, Func Offset: 0x38
	// Line 113, Address: 0x153784, Func Offset: 0x44
	// Line 114, Address: 0x153788, Func Offset: 0x48
	// Line 113, Address: 0x15378c, Func Offset: 0x4c
	// Line 114, Address: 0x153790, Func Offset: 0x50
	// Line 115, Address: 0x153794, Func Offset: 0x54
	// Line 118, Address: 0x15379c, Func Offset: 0x5c
	// Line 119, Address: 0x1537a8, Func Offset: 0x68
	// Line 121, Address: 0x1537b0, Func Offset: 0x70
	// Line 122, Address: 0x1537bc, Func Offset: 0x7c
	// Line 126, Address: 0x1537c0, Func Offset: 0x80
	// Line 127, Address: 0x1537cc, Func Offset: 0x8c
	// Line 128, Address: 0x1537d8, Func Offset: 0x98
	// Line 129, Address: 0x1537e0, Func Offset: 0xa0
	// Func End, Address: 0x1537f4, Func Offset: 0xb4
}

// 
// Start address: 0x153800
void sgTEModelDestruct(_anon0* model)
{
	// Line 136, Address: 0x153800, Func Offset: 0
	// Line 137, Address: 0x153814, Func Offset: 0x14
	// Line 138, Address: 0x15381c, Func Offset: 0x1c
	// Line 139, Address: 0x153828, Func Offset: 0x28
	// Line 141, Address: 0x153830, Func Offset: 0x30
	// Line 142, Address: 0x153838, Func Offset: 0x38
	// Line 143, Address: 0x153840, Func Offset: 0x40
	// Line 145, Address: 0x153848, Func Offset: 0x48
	// Line 146, Address: 0x153850, Func Offset: 0x50
	// Line 147, Address: 0x153858, Func Offset: 0x58
	// Line 149, Address: 0x15385c, Func Offset: 0x5c
	// Line 150, Address: 0x153860, Func Offset: 0x60
	// Line 151, Address: 0x153864, Func Offset: 0x64
	// Func End, Address: 0x153874, Func Offset: 0x74
}

// 
// Start address: 0x153880
void sgTEModelSetTexture(_anon0* model, sgTexArc* te_texture_data)
{
	// Line 163, Address: 0x153880, Func Offset: 0
	// Func End, Address: 0x153888, Func Offset: 0x8
}

// 
// Start address: 0x153890
void sgTEModelSetGlobalTexture(_anon0* model, sgTexArc* te_texture_data)
{
	// Line 179, Address: 0x153890, Func Offset: 0
	// Func End, Address: 0x153898, Func Offset: 0x8
}

// 
// Start address: 0x1538a0
void sgTEModelSetTextureLoadFunction(_anon0* model, void(*texture_load_func)(_anon2*, int, int, float*))
{
	// Line 218, Address: 0x1538a0, Func Offset: 0
	// Func End, Address: 0x1538a8, Func Offset: 0x8
}

// 
// Start address: 0x1538b0
void sgTEModelSetPartHide(_anon0* model, unsigned int equip_id)
{
	// Line 284, Address: 0x1538b0, Func Offset: 0
	// Line 286, Address: 0x1538bc, Func Offset: 0xc
	// Line 287, Address: 0x1538d0, Func Offset: 0x20
	// Func End, Address: 0x1538d8, Func Offset: 0x28
}

// 
// Start address: 0x1538e0
void sgTEModelSetPartUnHide(_anon0* model, unsigned int equip_id)
{
	// Line 295, Address: 0x1538e0, Func Offset: 0
	// Line 297, Address: 0x1538ec, Func Offset: 0xc
	// Line 298, Address: 0x153904, Func Offset: 0x24
	// Func End, Address: 0x153910, Func Offset: 0x30
}

// 
// Start address: 0x153910
unsigned char* sgTEModelDataSkeletonStructure(_anon0* model)
{
	// Line 306, Address: 0x153910, Func Offset: 0
	// Line 307, Address: 0x153914, Func Offset: 0x4
	// Line 308, Address: 0x15391c, Func Offset: 0xc
	// Line 310, Address: 0x15392c, Func Offset: 0x1c
	// Line 312, Address: 0x153948, Func Offset: 0x38
	// Func End, Address: 0x153954, Func Offset: 0x44
}

// 
// Start address: 0x153960
float[4] sgTEModelDataInitialMatrix(_anon0* model, int transform_no)
{
	Model* model_data;
	float initial[4][4];
	float matrix_dummy[4][4];
	// Line 324, Address: 0x153960, Func Offset: 0
	// Line 329, Address: 0x153970, Func Offset: 0x10
	// Line 330, Address: 0x153978, Func Offset: 0x18
	// Line 331, Address: 0x1539a8, Func Offset: 0x48
	// Line 332, Address: 0x1539b4, Func Offset: 0x54
	// Line 334, Address: 0x1539b8, Func Offset: 0x58
	// Line 335, Address: 0x1539bc, Func Offset: 0x5c
	// Line 336, Address: 0x1539c4, Func Offset: 0x64
	// Line 337, Address: 0x1539f0, Func Offset: 0x90
	// Line 338, Address: 0x1539fc, Func Offset: 0x9c
	// Line 341, Address: 0x153a00, Func Offset: 0xa0
	// Line 342, Address: 0x153a14, Func Offset: 0xb4
	// Line 343, Address: 0x153a44, Func Offset: 0xe4
	// Line 346, Address: 0x153a50, Func Offset: 0xf0
	// Line 348, Address: 0x153a5c, Func Offset: 0xfc
	// Line 350, Address: 0x153a68, Func Offset: 0x108
	// Line 351, Address: 0x153a70, Func Offset: 0x110
	// Func End, Address: 0x153a84, Func Offset: 0x124
}

// 
// Start address: 0x153a90
int sgTEModelNBones(_anon0* model)
{
	// Line 358, Address: 0x153a90, Func Offset: 0
	// Line 360, Address: 0x153a9c, Func Offset: 0xc
	// Line 362, Address: 0x153aac, Func Offset: 0x1c
	// Func End, Address: 0x153ab8, Func Offset: 0x28
}

// 
// Start address: 0x153ac0
int sgTEModelNClusters(_anon0* model)
{
	Model* model_data;
	// Line 367, Address: 0x153ac0, Func Offset: 0
	// Line 369, Address: 0x153ac4, Func Offset: 0x4
	// Line 371, Address: 0x153ad8, Func Offset: 0x18
	// Func End, Address: 0x153ae0, Func Offset: 0x20
}

// 
// Start address: 0x153ae0
int sgTEModelNAnimateTextures(_anon0* model)
{
	// Line 375, Address: 0x153ae0, Func Offset: 0
	// Line 377, Address: 0x153aec, Func Offset: 0xc
	// Line 379, Address: 0x153afc, Func Offset: 0x1c
	// Func End, Address: 0x153b08, Func Offset: 0x28
}

// 
// Start address: 0x153b10
void Model3OBBToOBB(Model3HitObb* mobb, _anon5* obb)
{
	// Line 416, Address: 0x153b10, Func Offset: 0
	// Line 424, Address: 0x153b38, Func Offset: 0x28
	// Line 417, Address: 0x153b3c, Func Offset: 0x2c
	// Line 418, Address: 0x153b40, Func Offset: 0x30
	// Line 417, Address: 0x153b44, Func Offset: 0x34
	// Line 418, Address: 0x153b48, Func Offset: 0x38
	// Line 417, Address: 0x153b4c, Func Offset: 0x3c
	// Line 419, Address: 0x153b50, Func Offset: 0x40
	// Line 420, Address: 0x153b58, Func Offset: 0x48
	// Line 424, Address: 0x153b60, Func Offset: 0x50
	// Line 417, Address: 0x153b64, Func Offset: 0x54
	// Line 418, Address: 0x153b70, Func Offset: 0x60
	// Line 419, Address: 0x153b88, Func Offset: 0x78
	// Line 420, Address: 0x153ba0, Func Offset: 0x90
	// Line 421, Address: 0x153bb8, Func Offset: 0xa8
	// Line 422, Address: 0x153bc0, Func Offset: 0xb0
	// Line 423, Address: 0x153bc8, Func Offset: 0xb8
	// Line 425, Address: 0x153bd0, Func Offset: 0xc0
	// Func End, Address: 0x153bd8, Func Offset: 0xc8
}

// 
// Start address: 0x153be0
_anon1* sgTEModelGetHit(_anon0* model, int bone_idx)
{
	Model* model_data;
	void* entry;
	// Line 429, Address: 0x153be0, Func Offset: 0
	// Line 436, Address: 0x153be8, Func Offset: 0x8
	// Line 437, Address: 0x153bec, Func Offset: 0xc
	// Line 438, Address: 0x153bf4, Func Offset: 0x14
	// Line 439, Address: 0x153c00, Func Offset: 0x20
	// Line 441, Address: 0x153c08, Func Offset: 0x28
	// Line 443, Address: 0x153c20, Func Offset: 0x40
	// Func End, Address: 0x153c2c, Func Offset: 0x4c
}

// 
// Start address: 0x153c30
int sgTEModelHitNParts(_anon1* hit)
{
	// Line 446, Address: 0x153c30, Func Offset: 0
	// Line 448, Address: 0x153c34, Func Offset: 0x4
	// Line 450, Address: 0x153c50, Func Offset: 0x20
	// Func End, Address: 0x153c5c, Func Offset: 0x2c
}

// 
// Start address: 0x153c60
_enum sgTEModelHitPartType(_anon1* hit, int hit_part_no)
{
	int kind;
	// Line 465, Address: 0x153c60, Func Offset: 0
	// Line 466, Address: 0x153c64, Func Offset: 0x4
	// Line 467, Address: 0x153c68, Func Offset: 0x8
	// Line 468, Address: 0x153c70, Func Offset: 0x10
	// Line 470, Address: 0x153c78, Func Offset: 0x18
	// Line 469, Address: 0x153c7c, Func Offset: 0x1c
	// Line 470, Address: 0x153c80, Func Offset: 0x20
	// Func End, Address: 0x153c88, Func Offset: 0x28
}

// 
// Start address: 0x153c90
int sgTEModelHitPartID(_anon1* hit, int hit_part_no)
{
	int id;
	// Line 473, Address: 0x153c90, Func Offset: 0
	// Line 474, Address: 0x153c94, Func Offset: 0x4
	// Line 475, Address: 0x153c98, Func Offset: 0x8
	// Line 476, Address: 0x153ca0, Func Offset: 0x10
	// Line 478, Address: 0x153ca8, Func Offset: 0x18
	// Func End, Address: 0x153cb4, Func Offset: 0x24
}

// 
// Start address: 0x153cc0
void sgTEModelHitPartGetOBB(_anon1* hit, int hit_part_no, _anon5* obb)
{
	Model3HitObb* mobb;
	// Line 481, Address: 0x153cc0, Func Offset: 0
	// Line 483, Address: 0x153ccc, Func Offset: 0xc
	// Line 485, Address: 0x153cd4, Func Offset: 0x14
	// Line 486, Address: 0x153ce0, Func Offset: 0x20
	// Line 488, Address: 0x153ce8, Func Offset: 0x28
	// Line 489, Address: 0x153cf0, Func Offset: 0x30
	// Func End, Address: 0x153d00, Func Offset: 0x40
}

// 
// Start address: 0x153d00
void sgTEModelHitPartGetSpehere(_anon1* hit, int hit_part_no, _anon3* sphere)
{
	Model3HitSphere* mball;
	// Line 492, Address: 0x153d00, Func Offset: 0
	// Line 494, Address: 0x153d0c, Func Offset: 0xc
	// Line 496, Address: 0x153d14, Func Offset: 0x14
	// Line 497, Address: 0x153d1c, Func Offset: 0x1c
	// Line 499, Address: 0x153d24, Func Offset: 0x24
	// Line 500, Address: 0x153d28, Func Offset: 0x28
	// Line 499, Address: 0x153d2c, Func Offset: 0x2c
	// Line 500, Address: 0x153d40, Func Offset: 0x40
	// Line 501, Address: 0x153d44, Func Offset: 0x44
	// Line 502, Address: 0x153d4c, Func Offset: 0x4c
	// Func End, Address: 0x153d60, Func Offset: 0x60
}

// 
// Start address: 0x153d60
void sgTEModelHitPartGetAABBWithOffset(_anon1* hit, int hit_part_no, _anon4* aabb, float* offset)
{
	Model3HitAabb1* maabb;
	// Line 511, Address: 0x153d60, Func Offset: 0
	// Line 513, Address: 0x153d74, Func Offset: 0x14
	// Line 515, Address: 0x153d7c, Func Offset: 0x1c
	// Line 517, Address: 0x153d84, Func Offset: 0x24
	// Line 518, Address: 0x153d88, Func Offset: 0x28
	// Line 517, Address: 0x153d8c, Func Offset: 0x2c
	// Line 518, Address: 0x153da0, Func Offset: 0x40
	// Line 519, Address: 0x153da4, Func Offset: 0x44
	// Line 520, Address: 0x153dbc, Func Offset: 0x5c
	// Line 521, Address: 0x153dc0, Func Offset: 0x60
	// Line 522, Address: 0x153dd8, Func Offset: 0x78
	// Func End, Address: 0x153dec, Func Offset: 0x8c
}

