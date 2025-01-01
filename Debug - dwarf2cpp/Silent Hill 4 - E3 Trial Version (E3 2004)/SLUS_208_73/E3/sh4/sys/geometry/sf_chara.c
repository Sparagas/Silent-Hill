typedef struct sfCldObject;
typedef struct sgAnime;
typedef union _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct sfCharacter;
typedef struct _anon4;
typedef struct sgQTNode;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sfCldPart;
typedef struct ktScene;
typedef struct ktLight;
typedef struct sgIKHandle;
typedef struct sgBone;
typedef struct _anon5;
typedef struct sgQTObject;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef struct _anon6;
typedef enum sgLightType : unsigned char;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef union _anon11;
typedef struct sgSVModel;
typedef struct _anon12;

typedef sgIKSolveResult(*type_11)();
typedef void(*type_16)(sgAnime*, int);
typedef void(*type_17)(_anon6*, int, int, float*);

typedef float type_0[4][4];
typedef float type_1[4];
typedef float type_2[4][2];
typedef float type_3[4];
typedef float type_4[4][2];
typedef _anon9 type_5[2];
typedef <unknown fundamental type (0xa510)> type_6[2];
typedef sfCldPart* type_7[6];
typedef unsigned char type_8[3];
typedef float type_9[4][2];
typedef float type_10[4];
typedef unsigned char type_12[3];
typedef void* type_13[4];
typedef float type_14[4];
typedef float type_15[4];
typedef unsigned char type_18[4];
typedef float type_19[4];
typedef float type_20[4][4];
typedef float type_21[4];
typedef float type_22[4][4];
typedef _anon9 type_23[4];
typedef <unknown fundamental type (0xa510)> type_24[4];

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
};

struct sgAnime
{
	void* play_data[4];
	sgBone* transforms;
	int n_transforms;
	sgIKHandle* ik_handles;
	sgBone* object_space;
	void(*post_func)(sgAnime*, int);
	float* reals;
	int n_reals;
	float vectors[4];
	int n_vectors;
	int current_time;
	int time_add;
	unsigned char play_status[4];
	unsigned short flag;
	unsigned short construct_check;
};

union _anon0
{
	float d[4][2];
	float i[4][2];
	_anon9 v[2];
	<unknown fundamental type (0xa510)> u128[2];
};

struct _anon1
{
	float center[4];
	float radius;
};

struct _anon2
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon6*, int, int, float*);
	int equip_flag;
};

struct _anon3
{
	float bmin[4];
	float bmax[4];
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon2 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon4
{
	float mat[4][4];
	float half_w[4];
};

struct sgQTNode
{
	int dummy;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sfCldPart
{
	sfCldBody world_hit;
	sfCldBody local_hit;
	unsigned char hit_type;
	unsigned char pad[3];
	int hit_kind;
	sgBone* parent;
	void* data;
	void* parent_cld;
};

struct ktScene
{
	_anon9 fog_col;
	int fog_near;
	int fog_far;
	float fog_a;
	float fog_b;
	unsigned char fog_pow;
	_anon9 ambi;
	int projection;
	int width;
	int height;
	int clip_width;
	int clip_height;
	int near_clip;
	int far_clip;
	int z_min;
	int z_max;
	int light_n;
	ktLight* light;
	_anon11 para_mat;
	_anon11 para_col;
	_anon11 vs;
	_anon11 vs0;
	_anon11 wv;
	_anon11 r_wv;
	_anon11 vw;
	_anon11 ws;
	_anon11 ws0;
	_anon11 vc;
	_anon11 cs;
	_anon11 vd;
	_anon11 vg;
	_anon0 vd24;
	_anon0 vg24;
	_anon0 vs24;
	_anon9 rev;
	char is_link_change;
	char is_para_change;
	char is_change;
	char is_rev;
};

struct ktLight
{
	ktLight* next;
	ktLight* link;
	float r;
	float g;
	float b;
	unsigned int type;
	_anon9 pos;
	_anon9 vec;
	float f_start;
	float f_end;
	float cone;
	float spread;
	float f_a;
	float f_b;
	float s_a;
	float s_b;
};

struct sgIKHandle
{
	float acceleration[4][2];
	float damping_ratio;
	sgBone* bone;
	sgBone* start;
	sgBone* end;
	sgIKSolveResult(*solver)();
	sgIKSolveResult solve_result;
	float reach_constrain;
	float close_constrain;
	sgIKHandle* next;
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

struct _anon5
{
	int dummy;
};

struct sgQTObject
{
	_anon1 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct sfOffsetAABB
{
	_anon3 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon4 obb;
	_anon3 aabb;
	sfOffsetAABB offset_aabb;
	_anon12 line;
	_anon1 sphere;
};

struct _anon6
{
	unsigned long tex0;
	unsigned long clamp;
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

struct _anon7
{
	float q[4];
	float t[4];
};

struct _anon8
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

struct _anon9
{
	float x;
	float y;
	float z;
	float w;
};

struct _anon10
{
	ktScene current;
};

union _anon11
{
	float d[4][4];
	float i[4][4];
	_anon9 v[4];
	<unknown fundamental type (0xa510)> u128[4];
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon12
{
	float start[4];
	float end[4];
};

float sg_vector_unit_w[4];
float litup_dirction0[4];
float litup_color0[4];
float litup_dirction1[4];
float litup_color1[4];
float litup_dirction_s[4];
float litup_color_s[4];
_anon8 litup_light_s;
_anon8 litup_light1;
_anon8 litup_light0;
void* tex_addr_cache;
_anon10 kt_scene_global_work;

void GetRootTrans(sgBone* bone, float* v);
void sfCharacterInit();
void sfCharacterConstruct(sfCharacter* chara, void* model, void* texture);
void sfCharacterAnimeConstruct(sfCharacter* chara, sgAnime* anime);
void sfCharacterDestruct(sfCharacter* chara);
void sfCharacterSetModel(sfCharacter* chara, void* model);
void sfCharacterSetTexture(sfCharacter* chara, void* texture);
void sfCharacterGetRot(sfCharacter* chara, float* q);
void sfCharacterGetAbsRot(sfCharacter* chara, float* q);
float* sfCharacterRot(sfCharacter* chara);
void sfCharacterSetRot(sfCharacter* chara, float* q);
void sfCharacterGetTrans(sfCharacter* chara, float* t);
float* sfCharacterTrans(sfCharacter* chara);
void sfCharacterSetTrans(sfCharacter* chara, float* t);
sgBone* sfCharacterBone(sfCharacter* chara, unsigned int bone_index);
sgAnime* sfCharacterAnime(sfCharacter* chara);
void sfCharacterSetAnime(sfCharacter* chara, sgAnime* anime);
void sfCharacterSetLightingOff(sfCharacter* chara, int val);
int sfCharacterIsLightingOff(sfCharacter* chara);
void sfCharacterSetLightingAllOff(sfCharacter* chara, int val);
void sfCharacterSetDrawOff(sfCharacter* chara, int val);
void sfCharacterSetShadowOff(sfCharacter* chara, int val);
void sfCharacterSetLightUpOn(sfCharacter* chara, int val);
void sfCharacterSetPointLightOff(sfCharacter* chara, int val);
void sfCharacterCldObjectCreate(sfCharacter* chara, sfCldObject* cld_obj);
void sfCharacterDraw(sfCharacter* chara);
void sfCharacterSetShadowModel(sfCharacter* chara, void* sv_model);
void sfCharacterShadowDraw(sfCharacter* chara);

// 
// Start address: 0x139040
void GetRootTrans(sgBone* bone, float* v)
{
	sgBone* parent;
	// Line 110, Address: 0x139040, Func Offset: 0
	// Line 112, Address: 0x139054, Func Offset: 0x14
	// Line 113, Address: 0x13905c, Func Offset: 0x1c
	// Line 114, Address: 0x13906c, Func Offset: 0x2c
	// Line 116, Address: 0x139070, Func Offset: 0x30
	// Line 117, Address: 0x139078, Func Offset: 0x38
	// Line 118, Address: 0x139080, Func Offset: 0x40
	// Line 119, Address: 0x139088, Func Offset: 0x48
	// Line 120, Address: 0x1390a0, Func Offset: 0x60
	// Line 121, Address: 0x1390ac, Func Offset: 0x6c
	// Func End, Address: 0x1390c0, Func Offset: 0x80
}

// 
// Start address: 0x1390c0
void sfCharacterInit()
{
	float v[4];
	_anon8* l;
	// Line 138, Address: 0x1390c0, Func Offset: 0
	// Line 142, Address: 0x1390cc, Func Offset: 0xc
	// Line 143, Address: 0x1390d4, Func Offset: 0x14
	// Line 144, Address: 0x1390dc, Func Offset: 0x1c
	// Line 145, Address: 0x1390e8, Func Offset: 0x28
	// Line 146, Address: 0x139118, Func Offset: 0x58
	// Line 147, Address: 0x139124, Func Offset: 0x64
	// Line 148, Address: 0x139134, Func Offset: 0x74
	// Line 150, Address: 0x13913c, Func Offset: 0x7c
	// Line 151, Address: 0x139144, Func Offset: 0x84
	// Line 152, Address: 0x13914c, Func Offset: 0x8c
	// Line 153, Address: 0x139158, Func Offset: 0x98
	// Line 154, Address: 0x139188, Func Offset: 0xc8
	// Line 155, Address: 0x139194, Func Offset: 0xd4
	// Line 156, Address: 0x1391a4, Func Offset: 0xe4
	// Line 159, Address: 0x1391ac, Func Offset: 0xec
	// Line 160, Address: 0x1391b4, Func Offset: 0xf4
	// Line 161, Address: 0x1391bc, Func Offset: 0xfc
	// Line 162, Address: 0x1391c8, Func Offset: 0x108
	// Line 163, Address: 0x1391f8, Func Offset: 0x138
	// Line 164, Address: 0x139204, Func Offset: 0x144
	// Line 165, Address: 0x139214, Func Offset: 0x154
	// Func End, Address: 0x139224, Func Offset: 0x164
}

// 
// Start address: 0x139230
void sfCharacterConstruct(sfCharacter* chara, void* model, void* texture)
{
	// Line 180, Address: 0x139230, Func Offset: 0
	// Line 182, Address: 0x13924c, Func Offset: 0x1c
	// Line 184, Address: 0x139254, Func Offset: 0x24
	// Line 186, Address: 0x139260, Func Offset: 0x30
	// Line 187, Address: 0x13926c, Func Offset: 0x3c
	// Line 189, Address: 0x139270, Func Offset: 0x40
	// Line 190, Address: 0x13927c, Func Offset: 0x4c
	// Line 191, Address: 0x139288, Func Offset: 0x58
	// Line 192, Address: 0x139294, Func Offset: 0x64
	// Func End, Address: 0x1392b0, Func Offset: 0x80
}

// 
// Start address: 0x1392b0
void sfCharacterAnimeConstruct(sfCharacter* chara, sgAnime* anime)
{
	_anon2* model_work;
	char* skel_struct;
	int n_bones;
	int i;
	sgBone* bone;
	_anon7 qt;
	int parent_no;
	// Line 209, Address: 0x1392b0, Func Offset: 0
	// Line 212, Address: 0x1392dc, Func Offset: 0x2c
	// Line 215, Address: 0x1392e4, Func Offset: 0x34
	// Line 216, Address: 0x1392ec, Func Offset: 0x3c
	// Line 217, Address: 0x1392f4, Func Offset: 0x44
	// Line 218, Address: 0x1392fc, Func Offset: 0x4c
	// Line 220, Address: 0x139300, Func Offset: 0x50
	// Line 221, Address: 0x139314, Func Offset: 0x64
	// Line 222, Address: 0x139318, Func Offset: 0x68
	// Line 224, Address: 0x139328, Func Offset: 0x78
	// Line 223, Address: 0x13932c, Func Offset: 0x7c
	// Line 224, Address: 0x139330, Func Offset: 0x80
	// Line 228, Address: 0x13933c, Func Offset: 0x8c
	// Line 230, Address: 0x139348, Func Offset: 0x98
	// Line 231, Address: 0x139354, Func Offset: 0xa4
	// Line 234, Address: 0x139360, Func Offset: 0xb0
	// Line 235, Address: 0x139370, Func Offset: 0xc0
	// Line 238, Address: 0x139380, Func Offset: 0xd0
	// Line 239, Address: 0x139398, Func Offset: 0xe8
	// Line 240, Address: 0x1393a4, Func Offset: 0xf4
	// Line 243, Address: 0x1393b0, Func Offset: 0x100
	// Line 245, Address: 0x1393c0, Func Offset: 0x110
	// Line 246, Address: 0x1393d0, Func Offset: 0x120
	// Line 247, Address: 0x1393d8, Func Offset: 0x128
	// Line 248, Address: 0x1393e4, Func Offset: 0x134
	// Line 249, Address: 0x1393f4, Func Offset: 0x144
	// Line 251, Address: 0x139408, Func Offset: 0x158
	// Func End, Address: 0x139430, Func Offset: 0x180
}

// 
// Start address: 0x139430
void sfCharacterDestruct(sfCharacter* chara)
{
	// Line 313, Address: 0x139430, Func Offset: 0
	// Line 315, Address: 0x139440, Func Offset: 0x10
	// Line 318, Address: 0x139448, Func Offset: 0x18
	// Line 319, Address: 0x139450, Func Offset: 0x20
	// Line 320, Address: 0x139458, Func Offset: 0x28
	// Line 321, Address: 0x139460, Func Offset: 0x30
	// Func End, Address: 0x139470, Func Offset: 0x40
}

// 
// Start address: 0x139470
void sfCharacterSetModel(sfCharacter* chara, void* model)
{
	// Line 340, Address: 0x139470, Func Offset: 0
	// Line 341, Address: 0x13948c, Func Offset: 0x1c
	// Line 343, Address: 0x139490, Func Offset: 0x20
	// Line 344, Address: 0x139498, Func Offset: 0x28
	// Line 346, Address: 0x1394a8, Func Offset: 0x38
	// Line 347, Address: 0x1394b0, Func Offset: 0x40
	// Line 348, Address: 0x1394bc, Func Offset: 0x4c
	// Line 349, Address: 0x1394c8, Func Offset: 0x58
	// Line 350, Address: 0x1394d0, Func Offset: 0x60
	// Func End, Address: 0x1394e8, Func Offset: 0x78
}

// 
// Start address: 0x1394f0
void sfCharacterSetTexture(sfCharacter* chara, void* texture)
{
	// Line 364, Address: 0x1394f0, Func Offset: 0
	// Func End, Address: 0x1394f8, Func Offset: 0x8
}

// 
// Start address: 0x139500
void sfCharacterGetRot(sfCharacter* chara, float* q)
{
	// Line 374, Address: 0x139500, Func Offset: 0
	// Func End, Address: 0x139508, Func Offset: 0x8
}

// 
// Start address: 0x139510
void sfCharacterGetAbsRot(sfCharacter* chara, float* q)
{
	// Line 381, Address: 0x139510, Func Offset: 0
	// Func End, Address: 0x139518, Func Offset: 0x8
}

// 
// Start address: 0x139520
float* sfCharacterRot(sfCharacter* chara)
{
	// Line 391, Address: 0x139520, Func Offset: 0
	// Func End, Address: 0x139528, Func Offset: 0x8
}

// 
// Start address: 0x139530
void sfCharacterSetRot(sfCharacter* chara, float* q)
{
	// Line 408, Address: 0x139530, Func Offset: 0
	// Func End, Address: 0x139538, Func Offset: 0x8
}

// 
// Start address: 0x139540
void sfCharacterGetTrans(sfCharacter* chara, float* t)
{
	// Line 418, Address: 0x139540, Func Offset: 0
	// Func End, Address: 0x139548, Func Offset: 0x8
}

// 
// Start address: 0x139550
float* sfCharacterTrans(sfCharacter* chara)
{
	// Line 435, Address: 0x139550, Func Offset: 0
	// Func End, Address: 0x139558, Func Offset: 0x8
}

// 
// Start address: 0x139560
void sfCharacterSetTrans(sfCharacter* chara, float* t)
{
	// Line 452, Address: 0x139560, Func Offset: 0
	// Func End, Address: 0x139568, Func Offset: 0x8
}

// 
// Start address: 0x139570
sgBone* sfCharacterBone(sfCharacter* chara, unsigned int bone_index)
{
	// Line 468, Address: 0x139570, Func Offset: 0
	// Line 469, Address: 0x139584, Func Offset: 0x14
	// Line 471, Address: 0x139588, Func Offset: 0x18
	// Line 473, Address: 0x1395ac, Func Offset: 0x3c
	// Func End, Address: 0x1395c0, Func Offset: 0x50
}

// 
// Start address: 0x1395c0
sgAnime* sfCharacterAnime(sfCharacter* chara)
{
	// Line 494, Address: 0x1395c0, Func Offset: 0
	// Func End, Address: 0x1395c8, Func Offset: 0x8
}

// 
// Start address: 0x1395d0
void sfCharacterSetAnime(sfCharacter* chara, sgAnime* anime)
{
	// Line 516, Address: 0x1395d0, Func Offset: 0
	// Func End, Address: 0x1395d8, Func Offset: 0x8
}

// 
// Start address: 0x1395e0
void sfCharacterSetLightingOff(sfCharacter* chara, int val)
{
	// Line 528, Address: 0x1395e0, Func Offset: 0
	// Line 529, Address: 0x1395e8, Func Offset: 0x8
	// Line 531, Address: 0x1395f8, Func Offset: 0x18
	// Line 532, Address: 0x139608, Func Offset: 0x28
	// Func End, Address: 0x139610, Func Offset: 0x30
}

// 
// Start address: 0x139610
int sfCharacterIsLightingOff(sfCharacter* chara)
{
	// Line 541, Address: 0x139610, Func Offset: 0
	// Line 543, Address: 0x139618, Func Offset: 0x8
	// Func End, Address: 0x139620, Func Offset: 0x10
}

// 
// Start address: 0x139620
void sfCharacterSetLightingAllOff(sfCharacter* chara, int val)
{
	// Line 552, Address: 0x139620, Func Offset: 0
	// Line 553, Address: 0x139628, Func Offset: 0x8
	// Line 554, Address: 0x139634, Func Offset: 0x14
	// Line 555, Address: 0x13963c, Func Offset: 0x1c
	// Line 556, Address: 0x139648, Func Offset: 0x28
	// Line 557, Address: 0x139654, Func Offset: 0x34
	// Line 559, Address: 0x139660, Func Offset: 0x40
	// Func End, Address: 0x139668, Func Offset: 0x48
}

// 
// Start address: 0x139670
void sfCharacterSetDrawOff(sfCharacter* chara, int val)
{
	// Line 569, Address: 0x139670, Func Offset: 0
	// Line 570, Address: 0x139678, Func Offset: 0x8
	// Line 572, Address: 0x139688, Func Offset: 0x18
	// Line 573, Address: 0x139698, Func Offset: 0x28
	// Func End, Address: 0x1396a0, Func Offset: 0x30
}

// 
// Start address: 0x1396a0
void sfCharacterSetShadowOff(sfCharacter* chara, int val)
{
	// Line 583, Address: 0x1396a0, Func Offset: 0
	// Line 584, Address: 0x1396a8, Func Offset: 0x8
	// Line 586, Address: 0x1396b8, Func Offset: 0x18
	// Line 587, Address: 0x1396c8, Func Offset: 0x28
	// Func End, Address: 0x1396d0, Func Offset: 0x30
}

// 
// Start address: 0x1396d0
void sfCharacterSetLightUpOn(sfCharacter* chara, int val)
{
	// Line 596, Address: 0x1396d0, Func Offset: 0
	// Line 597, Address: 0x1396d8, Func Offset: 0x8
	// Line 599, Address: 0x1396e8, Func Offset: 0x18
	// Line 600, Address: 0x1396f8, Func Offset: 0x28
	// Func End, Address: 0x139700, Func Offset: 0x30
}

// 
// Start address: 0x139700
void sfCharacterSetPointLightOff(sfCharacter* chara, int val)
{
	// Line 609, Address: 0x139700, Func Offset: 0
	// Line 610, Address: 0x139708, Func Offset: 0x8
	// Line 612, Address: 0x139718, Func Offset: 0x18
	// Line 613, Address: 0x139728, Func Offset: 0x28
	// Func End, Address: 0x139730, Func Offset: 0x30
}

// 
// Start address: 0x139730
void sfCharacterCldObjectCreate(sfCharacter* chara, sfCldObject* cld_obj)
{
	int n;
	int n_hitparts;
	int n_bones;
	_anon2* model_work;
	_anon5* hit;
	int n_parts;
	_anon5* hit;
	int n_parts;
	int idx;
	int type;
	// Line 649, Address: 0x139730, Func Offset: 0
	// Line 653, Address: 0x139764, Func Offset: 0x34
	// Line 655, Address: 0x139770, Func Offset: 0x40
	// Line 659, Address: 0x13977c, Func Offset: 0x4c
	// Line 660, Address: 0x139788, Func Offset: 0x58
	// Line 661, Address: 0x139798, Func Offset: 0x68
	// Line 662, Address: 0x1397a4, Func Offset: 0x74
	// Line 663, Address: 0x1397ac, Func Offset: 0x7c
	// Line 664, Address: 0x1397b4, Func Offset: 0x84
	// Line 666, Address: 0x1397b8, Func Offset: 0x88
	// Line 668, Address: 0x1397d0, Func Offset: 0xa0
	// Line 671, Address: 0x1397dc, Func Offset: 0xac
	// Line 670, Address: 0x1397e0, Func Offset: 0xb0
	// Line 671, Address: 0x1397e4, Func Offset: 0xb4
	// Line 672, Address: 0x1397f0, Func Offset: 0xc0
	// Line 673, Address: 0x139800, Func Offset: 0xd0
	// Line 674, Address: 0x139808, Func Offset: 0xd8
	// Line 676, Address: 0x139814, Func Offset: 0xe4
	// Line 677, Address: 0x139820, Func Offset: 0xf0
	// Line 680, Address: 0x139840, Func Offset: 0x110
	// Line 682, Address: 0x139848, Func Offset: 0x118
	// Line 683, Address: 0x139854, Func Offset: 0x124
	// Line 685, Address: 0x13985c, Func Offset: 0x12c
	// Line 686, Address: 0x139870, Func Offset: 0x140
	// Line 687, Address: 0x13989c, Func Offset: 0x16c
	// Line 689, Address: 0x1398a0, Func Offset: 0x170
	// Line 692, Address: 0x1398b4, Func Offset: 0x184
	// Line 693, Address: 0x1398bc, Func Offset: 0x18c
	// Line 695, Address: 0x1398c0, Func Offset: 0x190
	// Line 697, Address: 0x1398d0, Func Offset: 0x1a0
	// Line 700, Address: 0x1398d8, Func Offset: 0x1a8
	// Line 702, Address: 0x1398e8, Func Offset: 0x1b8
	// Line 704, Address: 0x1398f0, Func Offset: 0x1c0
	// Line 706, Address: 0x1398f4, Func Offset: 0x1c4
	// Line 707, Address: 0x1398f8, Func Offset: 0x1c8
	// Line 708, Address: 0x139908, Func Offset: 0x1d8
	// Line 711, Address: 0x139928, Func Offset: 0x1f8
	// Line 712, Address: 0x13992c, Func Offset: 0x1fc
	// Line 714, Address: 0x139940, Func Offset: 0x210
	// Line 715, Address: 0x139958, Func Offset: 0x228
	// Line 716, Address: 0x139960, Func Offset: 0x230
	// Line 717, Address: 0x139968, Func Offset: 0x238
	// Func End, Address: 0x139998, Func Offset: 0x268
}

// 
// Start address: 0x1399a0
void sfCharacterDraw(sfCharacter* chara)
{
	int litup_id0;
	int litup_id1;
	int litup_id_s;
	float ambi[4];
	float p[4];
	// Line 730, Address: 0x1399a0, Func Offset: 0
	// Line 737, Address: 0x1399b8, Func Offset: 0x18
	// Line 742, Address: 0x1399c0, Func Offset: 0x20
	// Line 748, Address: 0x1399cc, Func Offset: 0x2c
	// Line 751, Address: 0x1399dc, Func Offset: 0x3c
	// Line 754, Address: 0x1399e8, Func Offset: 0x48
	// Line 758, Address: 0x1399f4, Func Offset: 0x54
	// Line 759, Address: 0x1399fc, Func Offset: 0x5c
	// Line 761, Address: 0x139a08, Func Offset: 0x68
	// Line 763, Address: 0x139a14, Func Offset: 0x74
	// Line 764, Address: 0x139a1c, Func Offset: 0x7c
	// Line 765, Address: 0x139a28, Func Offset: 0x88
	// Line 767, Address: 0x139a34, Func Offset: 0x94
	// Line 768, Address: 0x139a3c, Func Offset: 0x9c
	// Line 771, Address: 0x139a48, Func Offset: 0xa8
	// Line 773, Address: 0x139a50, Func Offset: 0xb0
	// Line 774, Address: 0x139a60, Func Offset: 0xc0
	// Line 775, Address: 0x139a68, Func Offset: 0xc8
	// Line 776, Address: 0x139a7c, Func Offset: 0xdc
	// Line 780, Address: 0x139aa8, Func Offset: 0x108
	// Line 782, Address: 0x139ab8, Func Offset: 0x118
	// Line 783, Address: 0x139ac0, Func Offset: 0x120
	// Line 784, Address: 0x139ac8, Func Offset: 0x128
	// Line 785, Address: 0x139ad4, Func Offset: 0x134
	// Line 784, Address: 0x139ad8, Func Offset: 0x138
	// Line 785, Address: 0x139adc, Func Offset: 0x13c
	// Line 786, Address: 0x139ae4, Func Offset: 0x144
	// Line 785, Address: 0x139ae8, Func Offset: 0x148
	// Line 786, Address: 0x139aec, Func Offset: 0x14c
	// Line 790, Address: 0x139afc, Func Offset: 0x15c
	// Line 791, Address: 0x139b04, Func Offset: 0x164
	// Line 792, Address: 0x139b0c, Func Offset: 0x16c
	// Line 796, Address: 0x139b10, Func Offset: 0x170
	// Line 797, Address: 0x139b24, Func Offset: 0x184
	// Line 799, Address: 0x139b2c, Func Offset: 0x18c
	// Line 800, Address: 0x139b30, Func Offset: 0x190
	// Line 803, Address: 0x139b38, Func Offset: 0x198
	// Line 806, Address: 0x139b44, Func Offset: 0x1a4
	// Line 808, Address: 0x139b50, Func Offset: 0x1b0
	// Line 810, Address: 0x139b68, Func Offset: 0x1c8
	// Line 811, Address: 0x139b70, Func Offset: 0x1d0
	// Line 813, Address: 0x139b78, Func Offset: 0x1d8
	// Line 814, Address: 0x139b88, Func Offset: 0x1e8
	// Line 817, Address: 0x139b98, Func Offset: 0x1f8
	// Line 818, Address: 0x139ba8, Func Offset: 0x208
	// Line 819, Address: 0x139bb0, Func Offset: 0x210
	// Line 820, Address: 0x139bb8, Func Offset: 0x218
	// Line 821, Address: 0x139bc0, Func Offset: 0x220
	// Line 823, Address: 0x139bc8, Func Offset: 0x228
	// Func End, Address: 0x139be4, Func Offset: 0x244
}

// 
// Start address: 0x139bf0
void sfCharacterSetShadowModel(sfCharacter* chara, void* sv_model)
{
	// Line 826, Address: 0x139bf0, Func Offset: 0
	// Line 827, Address: 0x139c08, Func Offset: 0x18
	// Line 828, Address: 0x139c10, Func Offset: 0x20
	// Line 829, Address: 0x139c1c, Func Offset: 0x2c
	// Line 830, Address: 0x139c28, Func Offset: 0x38
	// Func End, Address: 0x139c3c, Func Offset: 0x4c
}

// 
// Start address: 0x139c40
void sfCharacterShadowDraw(sfCharacter* chara)
{
	float matrix_buffer[4][4];
	float p[4];
	// Line 833, Address: 0x139c40, Func Offset: 0
	// Line 838, Address: 0x139c50, Func Offset: 0x10
	// Line 843, Address: 0x139c58, Func Offset: 0x18
	// Line 849, Address: 0x139c60, Func Offset: 0x20
	// Line 852, Address: 0x139c6c, Func Offset: 0x2c
	// Line 856, Address: 0x139c7c, Func Offset: 0x3c
	// Line 857, Address: 0x139c94, Func Offset: 0x54
	// Line 858, Address: 0x139c9c, Func Offset: 0x5c
	// Line 860, Address: 0x139ca0, Func Offset: 0x60
	// Line 861, Address: 0x139cac, Func Offset: 0x6c
	// Line 862, Address: 0x139cb4, Func Offset: 0x74
	// Line 866, Address: 0x139cc0, Func Offset: 0x80
	// Line 867, Address: 0x139ccc, Func Offset: 0x8c
	// Line 870, Address: 0x139cd4, Func Offset: 0x94
	// Line 872, Address: 0x139cdc, Func Offset: 0x9c
	// Line 873, Address: 0x139ce4, Func Offset: 0xa4
	// Func End, Address: 0x139cf8, Func Offset: 0xb8
}

