typedef struct _anon0;
typedef struct _anon1;
typedef struct sgQTNode;
typedef struct _anon2;
typedef struct sgQTObject;
typedef enum sgLightType : unsigned char;
typedef struct sfCldObject;
typedef struct sfCldPart;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef struct _anon3;
typedef struct sgBone;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;


typedef unsigned char type_0[3];
typedef int type_1[7];
typedef float type_2[4];
typedef _anon1 type_3[32];
typedef _anon1 type_4[32];
typedef float type_5[4];
typedef unsigned int type_6[32];
typedef unsigned int type_7[32];
typedef unsigned int type_8[32];
typedef int type_9[7];
typedef sfCldPart* type_10[6];
typedef unsigned char type_11[3];
typedef float type_12[4];
typedef float type_13[4][4];
typedef int type_14[7];

struct _anon0
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

struct _anon1
{
	_anon0 l;
	float distance;
	float shadow_length;
	sfCldObject cld;
	int te_id;
	unsigned int id;
	unsigned char is_active;
	unsigned char is_update;
	unsigned char check_distance;
	unsigned char is_system;
	unsigned char is_bg_light;
	unsigned char is_glow;
	unsigned char is_use_cld;
};

struct sgQTNode
{
	int dummy;
};

struct _anon2
{
	int num;
	_anon1 wk[32];
	_anon1 shadow_wk[32];
	_anon1 dummy;
	_anon0 camera_z;
	int camera_light_id;
	float target[4];
	unsigned int rank[32];
	unsigned int point_rank[32];
	unsigned int shadow_rank[32];
	unsigned char shadow_light_density;
};

struct sgQTObject
{
	_anon3 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
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

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
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

struct sfOffsetAABB
{
	_anon5 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon6 obb;
	_anon5 aabb;
	sfOffsetAABB offset_aabb;
	_anon4 line;
	_anon3 sphere;
};

struct _anon3
{
	float center[4];
	float radius;
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

struct _anon4
{
	float start[4];
	float end[4];
};

struct _anon5
{
	float bmin[4];
	float bmax[4];
};

struct _anon6
{
	float mat[4][4];
	float half_w[4];
};

int chara_light_priority[7];
int shadow_light_priority[7];
int point_light_priority[7];
float cam_light_dir[4];
float cam_light_col[4];
_anon2 light_mng;

void LightWorkInit(_anon1* wk);
_anon1* get_work(_anon1* top);
_anon1* sfLightGetLightWork();
_anon1* sfLightGetLightWorkForShadow();
void sfLightConstructLightHit(_anon1* wk);
void sfLightDestructLightHit(_anon1* wk);
void sfLightCameraZLightAdd();
void CameraZLightUpdate();
void sfLightCameraZLightSetColor(int r, int g, int b);
void sfLightCameraZLightSetDirection(float* dir);
void sfLightCameraZLightOff();
void sfLightCameraZLightOn();
void sfLightInit();
unsigned int sfLightAdd(_anon0* l);
unsigned int sfLightAddForShadow(_anon0* l);
void sfLightActivateForBg(unsigned int work_id);
void sfLightInactivateForBg(unsigned int work_id);
void sfLightUpdateBgLight();
void sfLightSetShadowLength(unsigned int work_id, float len);
void sfLightRemove(unsigned int work_id);
void sfLightRemoveAll();
void sfLightSetTargetPos(float* pos);
void sfLightUpdate(unsigned int work_id, _anon0* l);
void sfLightDistanceCheckDisable(unsigned int work_id);
void sfLightSortByType(_anon2* mng, int pri_kind);
void sfLightSortPointLight(_anon2* mng, int pri_kind);
void sfLightSort(_anon2* mng, int pri_kind);
unsigned int sfLightGetShadowLightId();
int sfLightReflectShadow();
_anon0* sfLightCurrentShadowLight();
void sfLightSetCurrentShadowLength(float len);
void sfLightRemoveCharaLights();
void sfLightRemoveAllPointLights();
void sfLightParallelLightsBack();
int sfLightReflectPointLight();
void sfLightReflectSceneLight();
unsigned char sfLightGetShadowDensity();
int light_count(_anon1* top);
int sfLightGetLightNum();
_anon0* get_nth_light(_anon1* top, int n);
_anon0* sfLightGetNthLight(int n);
void sfLightSetGlowValue(int index, int val);
int sfLightGetGlowOriginNum();
_anon0* sfLightGetNthGlowOrigin(int n);
int sfLightGetNthGlowValue(int n);

// 
// Start address: 0x22a6b0
void LightWorkInit(_anon1* wk)
{
	// Line 260, Address: 0x22a6b0, Func Offset: 0
	// Line 261, Address: 0x22a6c0, Func Offset: 0x10
	// Line 262, Address: 0x22a6c8, Func Offset: 0x18
	// Line 263, Address: 0x22a6d0, Func Offset: 0x20
	// Line 265, Address: 0x22a6d4, Func Offset: 0x24
	// Line 263, Address: 0x22a6d8, Func Offset: 0x28
	// Line 268, Address: 0x22a6e0, Func Offset: 0x30
	// Line 264, Address: 0x22a6e4, Func Offset: 0x34
	// Line 265, Address: 0x22a6e8, Func Offset: 0x38
	// Line 266, Address: 0x22a6ec, Func Offset: 0x3c
	// Line 267, Address: 0x22a6f0, Func Offset: 0x40
	// Line 268, Address: 0x22a6f4, Func Offset: 0x44
	// Line 269, Address: 0x22a6f8, Func Offset: 0x48
	// Line 270, Address: 0x22a6fc, Func Offset: 0x4c
	// Line 275, Address: 0x22a700, Func Offset: 0x50
	// Func End, Address: 0x22a710, Func Offset: 0x60
}

// 
// Start address: 0x22a710
_anon1* get_work(_anon1* top)
{
	_anon1* wk;
	int i;
	// Line 363, Address: 0x22a710, Func Offset: 0
	// Line 368, Address: 0x22a718, Func Offset: 0x8
	// Line 373, Address: 0x22a748, Func Offset: 0x38
	// Line 374, Address: 0x22a758, Func Offset: 0x48
	// Line 375, Address: 0x22a760, Func Offset: 0x50
	// Line 378, Address: 0x22a768, Func Offset: 0x58
	// Line 381, Address: 0x22a778, Func Offset: 0x68
	// Line 382, Address: 0x22a780, Func Offset: 0x70
	// Func End, Address: 0x22a788, Func Offset: 0x78
}

// 
// Start address: 0x22a790
_anon1* sfLightGetLightWork()
{
	// Line 387, Address: 0x22a790, Func Offset: 0
	// Func End, Address: 0x22a79c, Func Offset: 0xc
}

// 
// Start address: 0x22a7a0
_anon1* sfLightGetLightWorkForShadow()
{
	// Line 393, Address: 0x22a7a0, Func Offset: 0
	// Func End, Address: 0x22a7ac, Func Offset: 0xc
}

// 
// Start address: 0x22a7b0
void sfLightConstructLightHit(_anon1* wk)
{
	sfCldObject* cld_obj;
	sfCldPart* cld_part;
	_anon3* sphere;
	// Line 405, Address: 0x22a7b0, Func Offset: 0
	// Line 406, Address: 0x22a7cc, Func Offset: 0x1c
	// Line 415, Address: 0x22a7d0, Func Offset: 0x20
	// Line 416, Address: 0x22a7d8, Func Offset: 0x28
	// Line 417, Address: 0x22a7e8, Func Offset: 0x38
	// Line 419, Address: 0x22a800, Func Offset: 0x50
	// Line 424, Address: 0x22a808, Func Offset: 0x58
	// Line 425, Address: 0x22a818, Func Offset: 0x68
	// Line 427, Address: 0x22a830, Func Offset: 0x80
	// Line 428, Address: 0x22a840, Func Offset: 0x90
	// Line 448, Address: 0x22a844, Func Offset: 0x94
	// Line 450, Address: 0x22a858, Func Offset: 0xa8
	// Line 452, Address: 0x22a860, Func Offset: 0xb0
	// Line 454, Address: 0x22a868, Func Offset: 0xb8
	// Func End, Address: 0x22a884, Func Offset: 0xd4
}

// 
// Start address: 0x22a890
void sfLightDestructLightHit(_anon1* wk)
{
	sfCldObject* cld_obj;
	// Line 458, Address: 0x22a890, Func Offset: 0
	// Line 459, Address: 0x22a8a4, Func Offset: 0x14
	// Line 467, Address: 0x22a8a8, Func Offset: 0x18
	// Line 468, Address: 0x22a8b0, Func Offset: 0x20
	// Line 469, Address: 0x22a8b8, Func Offset: 0x28
	// Line 471, Address: 0x22a8c0, Func Offset: 0x30
	// Line 472, Address: 0x22a8c4, Func Offset: 0x34
	// Func End, Address: 0x22a8d8, Func Offset: 0x48
}

// 
// Start address: 0x22a8e0
void sfLightCameraZLightAdd()
{
	float vwm[4][4];
	float light_dir[4];
	_anon1* wk;
	// Line 483, Address: 0x22a8e0, Func Offset: 0
	// Line 495, Address: 0x22a8e8, Func Offset: 0x8
	// Line 496, Address: 0x22a8f0, Func Offset: 0x10
	// Line 498, Address: 0x22a928, Func Offset: 0x48
	// Line 499, Address: 0x22a934, Func Offset: 0x54
	// Line 500, Address: 0x22a944, Func Offset: 0x64
	// Line 501, Address: 0x22a958, Func Offset: 0x78
	// Line 503, Address: 0x22a968, Func Offset: 0x88
	// Line 504, Address: 0x22a978, Func Offset: 0x98
	// Line 503, Address: 0x22a97c, Func Offset: 0x9c
	// Line 504, Address: 0x22a980, Func Offset: 0xa0
	// Line 506, Address: 0x22a9e0, Func Offset: 0x100
	// Line 507, Address: 0x22a9e8, Func Offset: 0x108
	// Func End, Address: 0x22a9f4, Func Offset: 0x114
}

// 
// Start address: 0x22aa00
void CameraZLightUpdate()
{
	_anon1* wk;
	float vwm[4][4];
	float light_dir[4];
	// Line 511, Address: 0x22aa00, Func Offset: 0
	// Line 516, Address: 0x22aa04, Func Offset: 0x4
	// Line 511, Address: 0x22aa08, Func Offset: 0x8
	// Line 516, Address: 0x22aa0c, Func Offset: 0xc
	// Line 511, Address: 0x22aa10, Func Offset: 0x10
	// Line 516, Address: 0x22aa14, Func Offset: 0x14
	// Line 521, Address: 0x22aa20, Func Offset: 0x20
	// Line 522, Address: 0x22aa28, Func Offset: 0x28
	// Line 523, Address: 0x22aa58, Func Offset: 0x58
	// Line 524, Address: 0x22aa8c, Func Offset: 0x8c
	// Line 525, Address: 0x22aab8, Func Offset: 0xb8
	// Line 531, Address: 0x22aac8, Func Offset: 0xc8
	// Line 533, Address: 0x22aadc, Func Offset: 0xdc
	// Line 534, Address: 0x22ab40, Func Offset: 0x140
	// Line 535, Address: 0x22ab58, Func Offset: 0x158
	// Line 536, Address: 0x22ab60, Func Offset: 0x160
	// Line 538, Address: 0x22ab68, Func Offset: 0x168
	// Func End, Address: 0x22ab78, Func Offset: 0x178
}

// 
// Start address: 0x22ab80
void sfLightCameraZLightSetColor(int r, int g, int b)
{
	float col[4];
	// Line 547, Address: 0x22ab80, Func Offset: 0
	// Line 548, Address: 0x22ab84, Func Offset: 0x4
	// Line 547, Address: 0x22ab88, Func Offset: 0x8
	// Line 548, Address: 0x22ab8c, Func Offset: 0xc
	// Line 550, Address: 0x22ab9c, Func Offset: 0x1c
	// Line 551, Address: 0x22aba4, Func Offset: 0x24
	// Line 552, Address: 0x22aba8, Func Offset: 0x28
	// Line 558, Address: 0x22abac, Func Offset: 0x2c
	// Line 550, Address: 0x22abb0, Func Offset: 0x30
	// Line 558, Address: 0x22abb4, Func Offset: 0x34
	// Line 550, Address: 0x22abb8, Func Offset: 0x38
	// Line 558, Address: 0x22abbc, Func Offset: 0x3c
	// Line 551, Address: 0x22abc0, Func Offset: 0x40
	// Line 552, Address: 0x22abcc, Func Offset: 0x4c
	// Line 550, Address: 0x22abd0, Func Offset: 0x50
	// Line 551, Address: 0x22abd4, Func Offset: 0x54
	// Line 552, Address: 0x22abd8, Func Offset: 0x58
	// Line 550, Address: 0x22abe0, Func Offset: 0x60
	// Line 552, Address: 0x22abe4, Func Offset: 0x64
	// Line 551, Address: 0x22abe8, Func Offset: 0x68
	// Line 558, Address: 0x22abec, Func Offset: 0x6c
	// Line 559, Address: 0x22abf4, Func Offset: 0x74
	// Func End, Address: 0x22ac00, Func Offset: 0x80
}

// 
// Start address: 0x22ac00
void sfLightCameraZLightSetDirection(float* dir)
{
	float l_dir[4];
	// Line 566, Address: 0x22ac00, Func Offset: 0
	// Line 567, Address: 0x22ac04, Func Offset: 0x4
	// Line 566, Address: 0x22ac08, Func Offset: 0x8
	// Line 567, Address: 0x22ac0c, Func Offset: 0xc
	// Line 569, Address: 0x22ac1c, Func Offset: 0x1c
	// Line 575, Address: 0x22ac28, Func Offset: 0x28
	// Line 569, Address: 0x22ac2c, Func Offset: 0x2c
	// Line 575, Address: 0x22ac30, Func Offset: 0x30
	// Line 569, Address: 0x22ac34, Func Offset: 0x34
	// Line 575, Address: 0x22ac38, Func Offset: 0x38
	// Line 576, Address: 0x22ac40, Func Offset: 0x40
	// Func End, Address: 0x22ac4c, Func Offset: 0x4c
}

// 
// Start address: 0x22ac50
void sfLightCameraZLightOff()
{
	// Line 580, Address: 0x22ac50, Func Offset: 0
	// Line 582, Address: 0x22ac54, Func Offset: 0x4
	// Line 580, Address: 0x22ac58, Func Offset: 0x8
	// Line 582, Address: 0x22ac5c, Func Offset: 0xc
	// Line 580, Address: 0x22ac60, Func Offset: 0x10
	// Line 582, Address: 0x22ac64, Func Offset: 0x14
	// Line 583, Address: 0x22acb4, Func Offset: 0x64
	// Line 584, Address: 0x22accc, Func Offset: 0x7c
	// Line 585, Address: 0x22acd4, Func Offset: 0x84
	// Line 586, Address: 0x22acdc, Func Offset: 0x8c
	// Line 587, Address: 0x22ace0, Func Offset: 0x90
	// Func End, Address: 0x22acf0, Func Offset: 0xa0
}

// 
// Start address: 0x22acf0
void sfLightCameraZLightOn()
{
	// Line 591, Address: 0x22acf0, Func Offset: 0
	// Line 593, Address: 0x22acf4, Func Offset: 0x4
	// Line 591, Address: 0x22acf8, Func Offset: 0x8
	// Line 593, Address: 0x22acfc, Func Offset: 0xc
	// Line 591, Address: 0x22ad00, Func Offset: 0x10
	// Line 593, Address: 0x22ad04, Func Offset: 0x14
	// Line 594, Address: 0x22ad54, Func Offset: 0x64
	// Line 595, Address: 0x22ad6c, Func Offset: 0x7c
	// Line 597, Address: 0x22ad78, Func Offset: 0x88
	// Func End, Address: 0x22ad88, Func Offset: 0x98
}

// 
// Start address: 0x22ad90
void sfLightInit()
{
	int i;
	_anon1* wk;
	_anon1* swk;
	// Line 604, Address: 0x22ad90, Func Offset: 0
	// Line 609, Address: 0x22ad94, Func Offset: 0x4
	// Line 604, Address: 0x22ad98, Func Offset: 0x8
	// Line 609, Address: 0x22ad9c, Func Offset: 0xc
	// Line 604, Address: 0x22ada0, Func Offset: 0x10
	// Line 609, Address: 0x22ada4, Func Offset: 0x14
	// Line 604, Address: 0x22ada8, Func Offset: 0x18
	// Line 609, Address: 0x22adac, Func Offset: 0x1c
	// Line 604, Address: 0x22adb0, Func Offset: 0x20
	// Line 606, Address: 0x22adb4, Func Offset: 0x24
	// Line 607, Address: 0x22adb8, Func Offset: 0x28
	// Line 606, Address: 0x22adbc, Func Offset: 0x2c
	// Line 609, Address: 0x22adc0, Func Offset: 0x30
	// Line 611, Address: 0x22adc8, Func Offset: 0x38
	// Line 613, Address: 0x22add0, Func Offset: 0x40
	// Line 614, Address: 0x22add8, Func Offset: 0x48
	// Line 618, Address: 0x22addc, Func Offset: 0x4c
	// Line 619, Address: 0x22ade8, Func Offset: 0x58
	// Line 621, Address: 0x22adf4, Func Offset: 0x64
	// Line 622, Address: 0x22ae04, Func Offset: 0x74
	// Line 623, Address: 0x22ae10, Func Offset: 0x80
	// Line 624, Address: 0x22ae14, Func Offset: 0x84
	// Line 625, Address: 0x22ae18, Func Offset: 0x88
	// Line 624, Address: 0x22ae1c, Func Offset: 0x8c
	// Line 625, Address: 0x22ae20, Func Offset: 0x90
	// Line 624, Address: 0x22ae28, Func Offset: 0x98
	// Line 625, Address: 0x22ae2c, Func Offset: 0x9c
	// Line 624, Address: 0x22ae30, Func Offset: 0xa0
	// Line 625, Address: 0x22ae34, Func Offset: 0xa4
	// Line 624, Address: 0x22ae40, Func Offset: 0xb0
	// Line 625, Address: 0x22ae44, Func Offset: 0xb4
	// Line 624, Address: 0x22ae58, Func Offset: 0xc8
	// Line 625, Address: 0x22ae5c, Func Offset: 0xcc
	// Line 624, Address: 0x22ae60, Func Offset: 0xd0
	// Line 625, Address: 0x22ae64, Func Offset: 0xd4
	// Line 624, Address: 0x22ae78, Func Offset: 0xe8
	// Line 625, Address: 0x22ae7c, Func Offset: 0xec
	// Line 624, Address: 0x22ae88, Func Offset: 0xf8
	// Line 625, Address: 0x22ae8c, Func Offset: 0xfc
	// Line 624, Address: 0x22aed4, Func Offset: 0x144
	// Line 625, Address: 0x22aed8, Func Offset: 0x148
	// Line 624, Address: 0x22aedc, Func Offset: 0x14c
	// Line 625, Address: 0x22aee0, Func Offset: 0x150
	// Line 626, Address: 0x22aee8, Func Offset: 0x158
	// Line 629, Address: 0x22aef8, Func Offset: 0x168
	// Line 630, Address: 0x22af04, Func Offset: 0x174
	// Func End, Address: 0x22af1c, Func Offset: 0x18c
}

// 
// Start address: 0x22af20
unsigned int sfLightAdd(_anon0* l)
{
	unsigned int work_id;
	_anon1* wk;
	// Line 650, Address: 0x22af20, Func Offset: 0
	// Line 651, Address: 0x22af2c, Func Offset: 0xc
	// Line 653, Address: 0x22af30, Func Offset: 0x10
	// Line 654, Address: 0x22af38, Func Offset: 0x18
	// Line 656, Address: 0x22af44, Func Offset: 0x24
	// Line 658, Address: 0x22af4c, Func Offset: 0x2c
	// Line 657, Address: 0x22af50, Func Offset: 0x30
	// Line 658, Address: 0x22af5c, Func Offset: 0x3c
	// Line 659, Address: 0x22af64, Func Offset: 0x44
	// Line 664, Address: 0x22af68, Func Offset: 0x48
	// Line 663, Address: 0x22af70, Func Offset: 0x50
	// Line 664, Address: 0x22af74, Func Offset: 0x54
	// Func End, Address: 0x22af7c, Func Offset: 0x5c
}

// 
// Start address: 0x22af80
unsigned int sfLightAddForShadow(_anon0* l)
{
	unsigned int work_id;
	_anon1* wk;
	// Line 674, Address: 0x22af80, Func Offset: 0
	// Line 677, Address: 0x22af98, Func Offset: 0x18
	// Line 678, Address: 0x22afa0, Func Offset: 0x20
	// Line 680, Address: 0x22afac, Func Offset: 0x2c
	// Line 684, Address: 0x22afb4, Func Offset: 0x34
	// Line 683, Address: 0x22afb8, Func Offset: 0x38
	// Line 684, Address: 0x22afbc, Func Offset: 0x3c
	// Line 683, Address: 0x22afc0, Func Offset: 0x40
	// Line 684, Address: 0x22afc8, Func Offset: 0x48
	// Line 686, Address: 0x22afd0, Func Offset: 0x50
	// Line 689, Address: 0x22afd4, Func Offset: 0x54
	// Line 690, Address: 0x22afec, Func Offset: 0x6c
	// Line 693, Address: 0x22aff4, Func Offset: 0x74
	// Line 695, Address: 0x22aff8, Func Offset: 0x78
	// Line 696, Address: 0x22affc, Func Offset: 0x7c
	// Func End, Address: 0x22b014, Func Offset: 0x94
}

// 
// Start address: 0x22b020
void sfLightActivateForBg(unsigned int work_id)
{
	// Line 705, Address: 0x22b020, Func Offset: 0
	// Line 704, Address: 0x22b024, Func Offset: 0x4
	// Line 705, Address: 0x22b028, Func Offset: 0x8
	// Line 707, Address: 0x22b078, Func Offset: 0x58
	// Line 708, Address: 0x22b080, Func Offset: 0x60
	// Line 709, Address: 0x22b084, Func Offset: 0x64
	// Line 710, Address: 0x22b08c, Func Offset: 0x6c
	// Line 711, Address: 0x22b090, Func Offset: 0x70
	// Func End, Address: 0x22b09c, Func Offset: 0x7c
}

// 
// Start address: 0x22b0a0
void sfLightInactivateForBg(unsigned int work_id)
{
	// Line 719, Address: 0x22b0a0, Func Offset: 0
	// Line 718, Address: 0x22b0a4, Func Offset: 0x4
	// Line 719, Address: 0x22b0a8, Func Offset: 0x8
	// Line 721, Address: 0x22b0f8, Func Offset: 0x58
	// Line 722, Address: 0x22b100, Func Offset: 0x60
	// Line 724, Address: 0x22b10c, Func Offset: 0x6c
	// Line 726, Address: 0x22b114, Func Offset: 0x74
	// Line 727, Address: 0x22b118, Func Offset: 0x78
	// Func End, Address: 0x22b124, Func Offset: 0x84
}

// 
// Start address: 0x22b130
void sfLightUpdateBgLight()
{
	// Line 733, Address: 0x22b130, Func Offset: 0
	// Func End, Address: 0x22b138, Func Offset: 0x8
}

// 
// Start address: 0x22b140
void sfLightSetShadowLength(unsigned int work_id, float len)
{
	// Line 742, Address: 0x22b140, Func Offset: 0
	// Line 744, Address: 0x22b18c, Func Offset: 0x4c
	// Line 745, Address: 0x22b194, Func Offset: 0x54
	// Line 747, Address: 0x22b198, Func Offset: 0x58
	// Func End, Address: 0x22b1a0, Func Offset: 0x60
}

// 
// Start address: 0x22b1a0
void sfLightRemove(unsigned int work_id)
{
	// Line 768, Address: 0x22b1a0, Func Offset: 0
	// Line 769, Address: 0x22b1a4, Func Offset: 0x4
	// Line 768, Address: 0x22b1a8, Func Offset: 0x8
	// Line 769, Address: 0x22b1ac, Func Offset: 0xc
	// Line 770, Address: 0x22b1b4, Func Offset: 0x14
	// Line 772, Address: 0x22b204, Func Offset: 0x64
	// Line 773, Address: 0x22b20c, Func Offset: 0x6c
	// Line 776, Address: 0x22b214, Func Offset: 0x74
	// Line 779, Address: 0x22b220, Func Offset: 0x80
	// Line 781, Address: 0x22b22c, Func Offset: 0x8c
	// Line 783, Address: 0x22b238, Func Offset: 0x98
	// Line 785, Address: 0x22b240, Func Offset: 0xa0
	// Line 788, Address: 0x22b248, Func Offset: 0xa8
	// Line 789, Address: 0x22b258, Func Offset: 0xb8
	// Line 791, Address: 0x22b26c, Func Offset: 0xcc
	// Line 792, Address: 0x22b270, Func Offset: 0xd0
	// Func End, Address: 0x22b280, Func Offset: 0xe0
}

// 
// Start address: 0x22b280
void sfLightRemoveAll()
{
	int i;
	_anon1* swk;
	// Line 798, Address: 0x22b280, Func Offset: 0
	// Line 800, Address: 0x22b290, Func Offset: 0x10
	// Line 802, Address: 0x22b294, Func Offset: 0x14
	// Line 803, Address: 0x22b29c, Func Offset: 0x1c
	// Line 804, Address: 0x22b2a4, Func Offset: 0x24
	// Line 805, Address: 0x22b2a8, Func Offset: 0x28
	// Line 806, Address: 0x22b2b4, Func Offset: 0x34
	// Line 807, Address: 0x22b2bc, Func Offset: 0x3c
	// Line 809, Address: 0x22b2c0, Func Offset: 0x40
	// Line 810, Address: 0x22b2d0, Func Offset: 0x50
	// Line 811, Address: 0x22b2d8, Func Offset: 0x58
	// Func End, Address: 0x22b2ec, Func Offset: 0x6c
}

// 
// Start address: 0x22b2f0
void sfLightSetTargetPos(float* pos)
{
	// Line 819, Address: 0x22b2f0, Func Offset: 0
	// Line 820, Address: 0x22b2fc, Func Offset: 0xc
	// Func End, Address: 0x22b304, Func Offset: 0x14
}

// 
// Start address: 0x22b310
void sfLightUpdate(unsigned int work_id, _anon0* l)
{
	// Line 827, Address: 0x22b310, Func Offset: 0
	// Line 828, Address: 0x22b318, Func Offset: 0x8
	// Line 829, Address: 0x22b32c, Func Offset: 0x1c
	// Line 831, Address: 0x22b374, Func Offset: 0x64
	// Line 832, Address: 0x22b37c, Func Offset: 0x6c
	// Line 833, Address: 0x22b384, Func Offset: 0x74
	// Line 835, Address: 0x22b390, Func Offset: 0x80
	// Line 836, Address: 0x22b39c, Func Offset: 0x8c
	// Line 839, Address: 0x22b3a4, Func Offset: 0x94
	// Line 840, Address: 0x22b3a8, Func Offset: 0x98
	// Func End, Address: 0x22b3b8, Func Offset: 0xa8
}

// 
// Start address: 0x22b3c0
void sfLightDistanceCheckDisable(unsigned int work_id)
{
	// Line 861, Address: 0x22b3c0, Func Offset: 0
	// Line 863, Address: 0x22b40c, Func Offset: 0x4c
	// Line 864, Address: 0x22b414, Func Offset: 0x54
	// Line 866, Address: 0x22b418, Func Offset: 0x58
	// Func End, Address: 0x22b420, Func Offset: 0x60
}

// 
// Start address: 0x22b420
void sfLightSortByType(_anon2* mng, int pri_kind)
{
	int i;
	int j;
	unsigned int* rank;
	_anon1* wk0;
	int tmp;
	// Line 906, Address: 0x22b420, Func Offset: 0
	// Line 910, Address: 0x22b424, Func Offset: 0x4
	// Line 906, Address: 0x22b428, Func Offset: 0x8
	// Line 910, Address: 0x22b44c, Func Offset: 0x2c
	// Line 911, Address: 0x22b470, Func Offset: 0x50
	// Line 912, Address: 0x22b47c, Func Offset: 0x5c
	// Line 913, Address: 0x22b48c, Func Offset: 0x6c
	// Line 917, Address: 0x22b4a0, Func Offset: 0x80
	// Line 918, Address: 0x22b4b0, Func Offset: 0x90
	// Line 920, Address: 0x22b504, Func Offset: 0xe4
	// Line 925, Address: 0x22b530, Func Offset: 0x110
	// Line 926, Address: 0x22b548, Func Offset: 0x128
	// Line 928, Address: 0x22b59c, Func Offset: 0x17c
	// Line 933, Address: 0x22b5c8, Func Offset: 0x1a8
	// Line 934, Address: 0x22b674, Func Offset: 0x254
	// Line 940, Address: 0x22b678, Func Offset: 0x258
	// Line 936, Address: 0x22b67c, Func Offset: 0x25c
	// Line 937, Address: 0x22b684, Func Offset: 0x264
	// Line 940, Address: 0x22b688, Func Offset: 0x268
	// Line 943, Address: 0x22b6d8, Func Offset: 0x2b8
	// Line 945, Address: 0x22b6e8, Func Offset: 0x2c8
	// Line 947, Address: 0x22b6f8, Func Offset: 0x2d8
	// Func End, Address: 0x22b728, Func Offset: 0x308
}

// 
// Start address: 0x22b730
void sfLightSortPointLight(_anon2* mng, int pri_kind)
{
	int i;
	int j;
	int s;
	int e;
	int flag;
	unsigned int* rank;
	_anon1* wk;
	sgLightType type;
	float lpos[4];
	_anon1* wk0;
	_anon1* wk1;
	int tmp;
	// Line 952, Address: 0x22b730, Func Offset: 0
	// Line 958, Address: 0x22b734, Func Offset: 0x4
	// Line 952, Address: 0x22b738, Func Offset: 0x8
	// Line 954, Address: 0x22b744, Func Offset: 0x14
	// Line 952, Address: 0x22b748, Func Offset: 0x18
	// Line 954, Address: 0x22b758, Func Offset: 0x28
	// Line 952, Address: 0x22b75c, Func Offset: 0x2c
	// Line 955, Address: 0x22b760, Func Offset: 0x30
	// Line 958, Address: 0x22b764, Func Offset: 0x34
	// Line 959, Address: 0x22b788, Func Offset: 0x58
	// Line 960, Address: 0x22b790, Func Offset: 0x60
	// Line 961, Address: 0x22b798, Func Offset: 0x68
	// Line 962, Address: 0x22b79c, Func Offset: 0x6c
	// Line 964, Address: 0x22b7a0, Func Offset: 0x70
	// Line 965, Address: 0x22b7a8, Func Offset: 0x78
	// Line 966, Address: 0x22b810, Func Offset: 0xe0
	// Line 969, Address: 0x22b818, Func Offset: 0xe8
	// Line 976, Address: 0x22b860, Func Offset: 0x130
	// Line 977, Address: 0x22b868, Func Offset: 0x138
	// Line 978, Address: 0x22b86c, Func Offset: 0x13c
	// Line 982, Address: 0x22b870, Func Offset: 0x140
	// Line 983, Address: 0x22b880, Func Offset: 0x150
	// Line 984, Address: 0x22b89c, Func Offset: 0x16c
	// Line 986, Address: 0x22b8c8, Func Offset: 0x198
	// Line 988, Address: 0x22b8dc, Func Offset: 0x1ac
	// Line 989, Address: 0x22b8e8, Func Offset: 0x1b8
	// Line 991, Address: 0x22b948, Func Offset: 0x218
	// Line 996, Address: 0x22b978, Func Offset: 0x248
	// Line 997, Address: 0x22b988, Func Offset: 0x258
	// Line 999, Address: 0x22b9e8, Func Offset: 0x2b8
	// Line 1004, Address: 0x22ba18, Func Offset: 0x2e8
	// Line 1005, Address: 0x22ba2c, Func Offset: 0x2fc
	// Line 1006, Address: 0x22ba30, Func Offset: 0x300
	// Line 1005, Address: 0x22ba34, Func Offset: 0x304
	// Line 1006, Address: 0x22ba3c, Func Offset: 0x30c
	// Line 1007, Address: 0x22ba40, Func Offset: 0x310
	// Line 1010, Address: 0x22ba44, Func Offset: 0x314
	// Line 1013, Address: 0x22baa0, Func Offset: 0x370
	// Line 1015, Address: 0x22bab4, Func Offset: 0x384
	// Line 1016, Address: 0x22bacc, Func Offset: 0x39c
	// Func End, Address: 0x22baf4, Func Offset: 0x3c4
}

// 
// Start address: 0x22bb00
void sfLightSort(_anon2* mng, int pri_kind)
{
	// Line 1021, Address: 0x22bb00, Func Offset: 0
	// Line 1023, Address: 0x22bb14, Func Offset: 0x14
	// Line 1026, Address: 0x22bb1c, Func Offset: 0x1c
	// Line 1027, Address: 0x22bb28, Func Offset: 0x28
	// Func End, Address: 0x22bb3c, Func Offset: 0x3c
}

// 
// Start address: 0x22bb40
unsigned int sfLightGetShadowLightId()
{
	unsigned int rtv;
	int i;
	unsigned int id;
	sgLightType type;
	// Line 1037, Address: 0x22bb40, Func Offset: 0
	// Line 1041, Address: 0x22bb44, Func Offset: 0x4
	// Line 1037, Address: 0x22bb48, Func Offset: 0x8
	// Line 1041, Address: 0x22bb4c, Func Offset: 0xc
	// Line 1037, Address: 0x22bb50, Func Offset: 0x10
	// Line 1041, Address: 0x22bb54, Func Offset: 0x14
	// Line 1037, Address: 0x22bb58, Func Offset: 0x18
	// Line 1038, Address: 0x22bb5c, Func Offset: 0x1c
	// Line 1037, Address: 0x22bb60, Func Offset: 0x20
	// Line 1041, Address: 0x22bb68, Func Offset: 0x28
	// Line 1043, Address: 0x22bb70, Func Offset: 0x30
	// Line 1044, Address: 0x22bb80, Func Offset: 0x40
	// Line 1045, Address: 0x22bb84, Func Offset: 0x44
	// Line 1047, Address: 0x22bbd4, Func Offset: 0x94
	// Line 1052, Address: 0x22bc00, Func Offset: 0xc0
	// Line 1055, Address: 0x22bc0c, Func Offset: 0xcc
	// Line 1057, Address: 0x22bc18, Func Offset: 0xd8
	// Line 1059, Address: 0x22bc20, Func Offset: 0xe0
	// Line 1060, Address: 0x22bc2c, Func Offset: 0xec
	// Line 1065, Address: 0x22bc38, Func Offset: 0xf8
	// Line 1067, Address: 0x22bc58, Func Offset: 0x118
	// Line 1072, Address: 0x22bc60, Func Offset: 0x120
	// Line 1076, Address: 0x22bc68, Func Offset: 0x128
	// Line 1078, Address: 0x22bc78, Func Offset: 0x138
	// Line 1079, Address: 0x22bc7c, Func Offset: 0x13c
	// Func End, Address: 0x22bc9c, Func Offset: 0x15c
}

// 
// Start address: 0x22bca0
int sfLightReflectShadow()
{
	int rtv;
	unsigned int id;
	_anon1* wk;
	_anon0* shadow_l;
	float length;
	// Line 1086, Address: 0x22bca0, Func Offset: 0
	// Line 1088, Address: 0x22bcb0, Func Offset: 0x10
	// Line 1090, Address: 0x22bcb8, Func Offset: 0x18
	// Line 1091, Address: 0x22bcc8, Func Offset: 0x28
	// Line 1094, Address: 0x22bd18, Func Offset: 0x78
	// Line 1096, Address: 0x22bd20, Func Offset: 0x80
	// Line 1099, Address: 0x22bd28, Func Offset: 0x88
	// Line 1100, Address: 0x22bd40, Func Offset: 0xa0
	// Line 1101, Address: 0x22bd44, Func Offset: 0xa4
	// Line 1102, Address: 0x22bd48, Func Offset: 0xa8
	// Line 1105, Address: 0x22bd50, Func Offset: 0xb0
	// Line 1110, Address: 0x22bd58, Func Offset: 0xb8
	// Line 1113, Address: 0x22bd60, Func Offset: 0xc0
	// Line 1114, Address: 0x22bd64, Func Offset: 0xc4
	// Func End, Address: 0x22bd78, Func Offset: 0xd8
}

// 
// Start address: 0x22bd80
_anon0* sfLightCurrentShadowLight()
{
	unsigned int id;
	// Line 1124, Address: 0x22bd80, Func Offset: 0
	// Line 1125, Address: 0x22bd88, Func Offset: 0x8
	// Line 1129, Address: 0x22bd98, Func Offset: 0x18
	// Line 1130, Address: 0x22bda0, Func Offset: 0x20
	// Line 1132, Address: 0x22bda8, Func Offset: 0x28
	// Line 1135, Address: 0x22bdc8, Func Offset: 0x48
	// Line 1136, Address: 0x22bdf0, Func Offset: 0x70
	// Func End, Address: 0x22bdfc, Func Offset: 0x7c
}

// 
// Start address: 0x22be00
void sfLightSetCurrentShadowLength(float len)
{
	unsigned int id;
	// Line 1142, Address: 0x22be00, Func Offset: 0
	// Line 1143, Address: 0x22be0c, Func Offset: 0xc
	// Line 1147, Address: 0x22be20, Func Offset: 0x20
	// Line 1150, Address: 0x22be28, Func Offset: 0x28
	// Line 1151, Address: 0x22be6c, Func Offset: 0x6c
	// Line 1152, Address: 0x22be74, Func Offset: 0x74
	// Line 1154, Address: 0x22be78, Func Offset: 0x78
	// Func End, Address: 0x22be88, Func Offset: 0x88
}

// 
// Start address: 0x22be90
void sfLightRemoveCharaLights()
{
	int i;
	_anon1* wk;
	sgLightType type;
	// Line 1162, Address: 0x22be90, Func Offset: 0
	// Line 1168, Address: 0x22bea0, Func Offset: 0x10
	// Line 1167, Address: 0x22bea4, Func Offset: 0x14
	// Line 1168, Address: 0x22beac, Func Offset: 0x1c
	// Line 1169, Address: 0x22beb0, Func Offset: 0x20
	// Line 1172, Address: 0x22beb8, Func Offset: 0x28
	// Line 1177, Address: 0x22bf04, Func Offset: 0x74
	// Line 1178, Address: 0x22bf10, Func Offset: 0x80
	// Line 1179, Address: 0x22bf18, Func Offset: 0x88
	// Line 1183, Address: 0x22bf20, Func Offset: 0x90
	// Line 1184, Address: 0x22bf30, Func Offset: 0xa0
	// Func End, Address: 0x22bf44, Func Offset: 0xb4
}

// 
// Start address: 0x22bf50
void sfLightRemoveAllPointLights()
{
	int i;
	sgLightType type;
	// Line 1188, Address: 0x22bf50, Func Offset: 0
	// Line 1191, Address: 0x22bf60, Func Offset: 0x10
	// Line 1192, Address: 0x22bf68, Func Offset: 0x18
	// Line 1194, Address: 0x22bfbc, Func Offset: 0x6c
	// Line 1195, Address: 0x22bfc4, Func Offset: 0x74
	// Line 1196, Address: 0x22bfd0, Func Offset: 0x80
	// Line 1197, Address: 0x22bfec, Func Offset: 0x9c
	// Line 1198, Address: 0x22bff8, Func Offset: 0xa8
	// Line 1199, Address: 0x22c000, Func Offset: 0xb0
	// Line 1203, Address: 0x22c008, Func Offset: 0xb8
	// Line 1204, Address: 0x22c018, Func Offset: 0xc8
	// Func End, Address: 0x22c02c, Func Offset: 0xdc
}

// 
// Start address: 0x22c030
void sfLightParallelLightsBack()
{
	int i;
	unsigned int* rank;
	sgLightType type;
	// Line 1211, Address: 0x22c030, Func Offset: 0
	// Line 1216, Address: 0x22c034, Func Offset: 0x4
	// Line 1211, Address: 0x22c038, Func Offset: 0x8
	// Line 1216, Address: 0x22c03c, Func Offset: 0xc
	// Line 1211, Address: 0x22c040, Func Offset: 0x10
	// Line 1216, Address: 0x22c044, Func Offset: 0x14
	// Line 1211, Address: 0x22c048, Func Offset: 0x18
	// Line 1213, Address: 0x22c04c, Func Offset: 0x1c
	// Line 1211, Address: 0x22c050, Func Offset: 0x20
	// Line 1216, Address: 0x22c054, Func Offset: 0x24
	// Line 1218, Address: 0x22c05c, Func Offset: 0x2c
	// Line 1219, Address: 0x22c060, Func Offset: 0x30
	// Line 1221, Address: 0x22c0b4, Func Offset: 0x84
	// Line 1226, Address: 0x22c0e0, Func Offset: 0xb0
	// Line 1229, Address: 0x22c0ec, Func Offset: 0xbc
	// Line 1231, Address: 0x22c100, Func Offset: 0xd0
	// Line 1232, Address: 0x22c110, Func Offset: 0xe0
	// Line 1235, Address: 0x22c11c, Func Offset: 0xec
	// Line 1237, Address: 0x22c120, Func Offset: 0xf0
	// Line 1238, Address: 0x22c130, Func Offset: 0x100
	// Func End, Address: 0x22c148, Func Offset: 0x118
}

// 
// Start address: 0x22c150
int sfLightReflectPointLight()
{
	int i;
	unsigned int* rank;
	sgLightType type;
	// Line 1245, Address: 0x22c150, Func Offset: 0
	// Line 1252, Address: 0x22c154, Func Offset: 0x4
	// Line 1245, Address: 0x22c158, Func Offset: 0x8
	// Line 1252, Address: 0x22c15c, Func Offset: 0xc
	// Line 1245, Address: 0x22c160, Func Offset: 0x10
	// Line 1252, Address: 0x22c164, Func Offset: 0x14
	// Line 1245, Address: 0x22c168, Func Offset: 0x18
	// Line 1248, Address: 0x22c16c, Func Offset: 0x1c
	// Line 1245, Address: 0x22c170, Func Offset: 0x20
	// Line 1252, Address: 0x22c174, Func Offset: 0x24
	// Line 1254, Address: 0x22c17c, Func Offset: 0x2c
	// Line 1255, Address: 0x22c184, Func Offset: 0x34
	// Line 1256, Address: 0x22c188, Func Offset: 0x38
	// Line 1267, Address: 0x22c1dc, Func Offset: 0x8c
	// Line 1272, Address: 0x22c208, Func Offset: 0xb8
	// Line 1273, Address: 0x22c214, Func Offset: 0xc4
	// Line 1274, Address: 0x22c230, Func Offset: 0xe0
	// Line 1278, Address: 0x22c23c, Func Offset: 0xec
	// Line 1279, Address: 0x22c25c, Func Offset: 0x10c
	// Line 1281, Address: 0x22c264, Func Offset: 0x114
	// Line 1283, Address: 0x22c270, Func Offset: 0x120
	// Line 1286, Address: 0x22c27c, Func Offset: 0x12c
	// Line 1291, Address: 0x22c280, Func Offset: 0x130
	// Line 1294, Address: 0x22c290, Func Offset: 0x140
	// Line 1293, Address: 0x22c294, Func Offset: 0x144
	// Line 1294, Address: 0x22c298, Func Offset: 0x148
	// Func End, Address: 0x22c2ac, Func Offset: 0x15c
}

// 
// Start address: 0x22c2b0
void sfLightReflectSceneLight()
{
	int i;
	unsigned int* rank;
	sgLightType type;
	// Line 1301, Address: 0x22c2b0, Func Offset: 0
	// Line 1303, Address: 0x22c2c0, Func Offset: 0x10
	// Line 1301, Address: 0x22c2c4, Func Offset: 0x14
	// Line 1307, Address: 0x22c2c8, Func Offset: 0x18
	// Line 1310, Address: 0x22c2d0, Func Offset: 0x20
	// Line 1311, Address: 0x22c2d8, Func Offset: 0x28
	// Line 1312, Address: 0x22c32c, Func Offset: 0x7c
	// Line 1317, Address: 0x22c358, Func Offset: 0xa8
	// Line 1318, Address: 0x22c38c, Func Offset: 0xdc
	// Line 1321, Address: 0x22c398, Func Offset: 0xe8
	// Line 1322, Address: 0x22c3a0, Func Offset: 0xf0
	// Line 1326, Address: 0x22c3a8, Func Offset: 0xf8
	// Line 1329, Address: 0x22c3b8, Func Offset: 0x108
	// Line 1335, Address: 0x22c3c4, Func Offset: 0x114
	// Line 1336, Address: 0x22c3c8, Func Offset: 0x118
	// Line 1338, Address: 0x22c41c, Func Offset: 0x16c
	// Line 1343, Address: 0x22c448, Func Offset: 0x198
	// Line 1346, Address: 0x22c454, Func Offset: 0x1a4
	// Line 1357, Address: 0x22c478, Func Offset: 0x1c8
	// Line 1358, Address: 0x22c488, Func Offset: 0x1d8
	// Line 1366, Address: 0x22c494, Func Offset: 0x1e4
	// Line 1368, Address: 0x22c498, Func Offset: 0x1e8
	// Line 1388, Address: 0x22c4a8, Func Offset: 0x1f8
	// Func End, Address: 0x22c4c0, Func Offset: 0x210
}

// 
// Start address: 0x22c4c0
unsigned char sfLightGetShadowDensity()
{
	unsigned char rtv;
	_anon1* wk;
	int i;
	int cnt;
	float average;
	float col[4];
	// Line 1392, Address: 0x22c4c0, Func Offset: 0
	// Line 1394, Address: 0x22c4d0, Func Offset: 0x10
	// Line 1392, Address: 0x22c4d4, Func Offset: 0x14
	// Line 1394, Address: 0x22c4d8, Func Offset: 0x18
	// Line 1392, Address: 0x22c4dc, Func Offset: 0x1c
	// Line 1395, Address: 0x22c4e0, Func Offset: 0x20
	// Line 1396, Address: 0x22c4e4, Func Offset: 0x24
	// Line 1398, Address: 0x22c4e8, Func Offset: 0x28
	// Line 1399, Address: 0x22c4f0, Func Offset: 0x30
	// Line 1405, Address: 0x22c520, Func Offset: 0x60
	// Line 1408, Address: 0x22c52c, Func Offset: 0x6c
	// Line 1409, Address: 0x22c530, Func Offset: 0x70
	// Line 1408, Address: 0x22c534, Func Offset: 0x74
	// Line 1411, Address: 0x22c538, Func Offset: 0x78
	// Line 1412, Address: 0x22c53c, Func Offset: 0x7c
	// Line 1414, Address: 0x22c54c, Func Offset: 0x8c
	// Line 1416, Address: 0x22c558, Func Offset: 0x98
	// Line 1414, Address: 0x22c55c, Func Offset: 0x9c
	// Line 1416, Address: 0x22c560, Func Offset: 0xa0
	// Line 1414, Address: 0x22c56c, Func Offset: 0xac
	// Line 1415, Address: 0x22c574, Func Offset: 0xb4
	// Line 1416, Address: 0x22c57c, Func Offset: 0xbc
	// Line 1415, Address: 0x22c580, Func Offset: 0xc0
	// Line 1416, Address: 0x22c584, Func Offset: 0xc4
	// Func End, Address: 0x22c58c, Func Offset: 0xcc
}

// 
// Start address: 0x22c590
int light_count(_anon1* top)
{
	int i;
	int cnt;
	_anon1* wk;
	// Line 1425, Address: 0x22c590, Func Offset: 0
	// Line 1428, Address: 0x22c594, Func Offset: 0x4
	// Line 1429, Address: 0x22c598, Func Offset: 0x8
	// Line 1434, Address: 0x22c5c8, Func Offset: 0x38
	// Line 1435, Address: 0x22c5cc, Func Offset: 0x3c
	// Line 1437, Address: 0x22c5d0, Func Offset: 0x40
	// Line 1439, Address: 0x22c5e0, Func Offset: 0x50
	// Func End, Address: 0x22c5e8, Func Offset: 0x58
}

// 
// Start address: 0x22c5f0
int sfLightGetLightNum()
{
	// Line 1447, Address: 0x22c5f0, Func Offset: 0
	// Func End, Address: 0x22c5fc, Func Offset: 0xc
}

// 
// Start address: 0x22c600
_anon0* get_nth_light(_anon1* top, int n)
{
	_anon0* rtv;
	int i;
	int cnt;
	_anon1* wk;
	// Line 1461, Address: 0x22c600, Func Offset: 0
	// Line 1465, Address: 0x22c604, Func Offset: 0x4
	// Line 1466, Address: 0x22c608, Func Offset: 0x8
	// Line 1467, Address: 0x22c610, Func Offset: 0x10
	// Line 1472, Address: 0x22c640, Func Offset: 0x40
	// Line 1474, Address: 0x22c648, Func Offset: 0x48
	// Line 1476, Address: 0x22c650, Func Offset: 0x50
	// Line 1477, Address: 0x22c654, Func Offset: 0x54
	// Line 1479, Address: 0x22c658, Func Offset: 0x58
	// Line 1481, Address: 0x22c668, Func Offset: 0x68
	// Func End, Address: 0x22c670, Func Offset: 0x70
}

// 
// Start address: 0x22c670
_anon0* sfLightGetNthLight(int n)
{
	// Line 1489, Address: 0x22c674, Func Offset: 0x4
	// Func End, Address: 0x22c680, Func Offset: 0x10
}

// 
// Start address: 0x22c680
void sfLightSetGlowValue(int index, int val)
{
	// Line 1509, Address: 0x22c680, Func Offset: 0
	// Line 1511, Address: 0x22c6cc, Func Offset: 0x4c
	// Line 1512, Address: 0x22c6d4, Func Offset: 0x54
	// Line 1514, Address: 0x22c6d8, Func Offset: 0x58
	// Func End, Address: 0x22c6e0, Func Offset: 0x60
}

// 
// Start address: 0x22c6e0
int sfLightGetGlowOriginNum()
{
	int i;
	int cnt;
	_anon1* wk;
	// Line 1523, Address: 0x22c6e0, Func Offset: 0
	// Line 1522, Address: 0x22c6e4, Func Offset: 0x4
	// Line 1523, Address: 0x22c6e8, Func Offset: 0x8
	// Line 1525, Address: 0x22c6ec, Func Offset: 0xc
	// Line 1526, Address: 0x22c6f0, Func Offset: 0x10
	// Line 1531, Address: 0x22c72c, Func Offset: 0x4c
	// Line 1534, Address: 0x22c730, Func Offset: 0x50
	// Line 1537, Address: 0x22c740, Func Offset: 0x60
	// Func End, Address: 0x22c748, Func Offset: 0x68
}

// 
// Start address: 0x22c750
_anon0* sfLightGetNthGlowOrigin(int n)
{
	_anon0* rtv;
	int i;
	int cnt;
	_anon1* wk;
	// Line 1552, Address: 0x22c750, Func Offset: 0
	// Line 1549, Address: 0x22c754, Func Offset: 0x4
	// Line 1551, Address: 0x22c758, Func Offset: 0x8
	// Line 1552, Address: 0x22c75c, Func Offset: 0xc
	// Line 1554, Address: 0x22c760, Func Offset: 0x10
	// Line 1555, Address: 0x22c768, Func Offset: 0x18
	// Line 1560, Address: 0x22c7a4, Func Offset: 0x54
	// Line 1562, Address: 0x22c7ac, Func Offset: 0x5c
	// Line 1563, Address: 0x22c7b4, Func Offset: 0x64
	// Line 1564, Address: 0x22c7b8, Func Offset: 0x68
	// Line 1565, Address: 0x22c7bc, Func Offset: 0x6c
	// Line 1567, Address: 0x22c7c0, Func Offset: 0x70
	// Line 1570, Address: 0x22c7d0, Func Offset: 0x80
	// Func End, Address: 0x22c7d8, Func Offset: 0x88
}

// 
// Start address: 0x22c7e0
int sfLightGetNthGlowValue(int n)
{
	int rtv;
	int i;
	int cnt;
	_anon1* wk;
	// Line 1586, Address: 0x22c7e0, Func Offset: 0
	// Line 1583, Address: 0x22c7e4, Func Offset: 0x4
	// Line 1585, Address: 0x22c7e8, Func Offset: 0x8
	// Line 1586, Address: 0x22c7ec, Func Offset: 0xc
	// Line 1588, Address: 0x22c7f0, Func Offset: 0x10
	// Line 1589, Address: 0x22c7f8, Func Offset: 0x18
	// Line 1594, Address: 0x22c834, Func Offset: 0x54
	// Line 1596, Address: 0x22c83c, Func Offset: 0x5c
	// Line 1597, Address: 0x22c844, Func Offset: 0x64
	// Line 1598, Address: 0x22c848, Func Offset: 0x68
	// Line 1599, Address: 0x22c84c, Func Offset: 0x6c
	// Line 1601, Address: 0x22c850, Func Offset: 0x70
	// Line 1604, Address: 0x22c860, Func Offset: 0x80
	// Func End, Address: 0x22c868, Func Offset: 0x88
}

