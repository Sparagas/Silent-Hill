typedef enum sgIKSolveResult : unsigned char;
typedef struct sgVectorS12CardinalKey;
typedef struct sgVectorS4HermiteKey;
typedef struct sgAnime;
typedef struct sgVectorS12LinearKey;
typedef struct sgQuatLinearKey;
typedef struct _anon0;
typedef struct sgIKHandle;
typedef struct sgAnmKeyFrames;
typedef struct sgQuatSquadKey;
typedef struct sgAnmKeys;
typedef struct sgBone;
typedef struct sgVectorCardinalKey;
typedef struct sgQuatBoehmKey;
typedef struct _anon1;
typedef struct _anon2;
typedef struct sgQuatS15SquadKey;
typedef struct sgVectorLinearKey;
typedef struct sgVectorBezierKey;
typedef struct sgQuatS15BoehmKey;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sgQuatS15LinearKey;
typedef struct sgFloatCardinalKey;
typedef struct _anon5;
typedef struct sgFloatLinearKey;
typedef struct _anon6;
typedef struct sgVectorS4LinearKey;
typedef struct sgVectorS4BezierKey;
typedef struct sgVectorStepKey;
typedef struct sgVectorHermiteKey;
typedef struct sgVectorS4CardinalKey;

typedef void(*type_0)(void*, void*, int, int, float);
typedef void*(*type_3)(sgAnime*, int);
typedef sgIKSolveResult(*type_5)();
typedef void(*type_8)(sgAnime*, int);
typedef void(*type_13)(sgAnime*, int);

typedef float type_1[4];
typedef float type_2[4][2];
typedef _anon0 type_4[22];
typedef unsigned int type_6[0];
typedef float type_7[4][4];
typedef float type_9[4];
typedef void* type_10[4];
typedef sgAnmKeys* type_11[0];
typedef float type_12[4];
typedef short type_14[4];
typedef float type_15[4];
typedef float type_16[4];
typedef float type_17[4];
typedef unsigned char type_18[4];
typedef float type_19[4];
typedef float type_20[4];
typedef float type_21[4];
typedef float type_22[4];
typedef float type_23[4];
typedef float type_24[4];
typedef float type_25[4];

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgVectorS12CardinalKey
{
	short p[4];
	short Tsd[4];
};

struct sgVectorS4HermiteKey
{
	short p[4];
	short Ts[4];
	short Td[4];
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

struct sgVectorS12LinearKey
{
	short p[4];
};

struct sgQuatLinearKey
{
	float q[4];
};

struct _anon0
{
	int type;
	void(*func)(void*, void*, int, int, float);
	void*(*mapper)(sgAnime*, int);
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

struct sgAnmKeyFrames
{
	unsigned int type_id;
	short n_data;
	short relative;
	sgAnmKeys* data[0];
};

struct sgQuatSquadKey
{
	float q[4];
	float Ts[4];
	float Td[4];
};

struct sgAnmKeys
{
	short key_type;
	short reserved;
	short nb_keys;
	short user_reserved;
	unsigned int time_table_offset;
	unsigned int keys_offset;
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

struct sgVectorCardinalKey
{
	float p[4];
	float Tsd[4];
};

struct sgQuatBoehmKey
{
	float q[4];
	float Tq[4];
};

struct _anon1
{
	unsigned int type_id;
	short n_connects;
	short n_ik_chains;
	int connects_offset;
	int ik_chains_offset;
	int pad;
};

struct _anon2
{
	unsigned int type_id;
	short total_time;
	short loop;
	int reserved_a;
	int reserved_b;
	unsigned int data[0];
};

struct sgQuatS15SquadKey
{
	short q[4];
	short Ts[4];
	short Td[4];
};

struct sgVectorLinearKey
{
	float p[4];
};

struct sgVectorBezierKey
{
	float p[4];
	float in_knot[4];
	float out_knot[4];
};

struct sgQuatS15BoehmKey
{
	short q[4];
	short Tq[4];
};

struct _anon3
{
	float frame_per_sec;
	float sec_per_frame;
	int time_per_process;
};

struct _anon4
{
	short key_type;
	short reserved;
	short nb_keys;
	char skeleton_no;
	unsigned char relative;
	unsigned int time_table_offset;
	unsigned int keys_offset;
};

struct sgQuatS15LinearKey
{
	short q[4];
};

struct sgFloatCardinalKey
{
	float value;
	float tan;
};

struct _anon5
{
	unsigned char bone_no;
	char parent_no;
};

struct sgFloatLinearKey
{
	float value;
};

struct _anon6
{
	unsigned char handle_no;
	char ikhandle_type;
	char start_no;
	char effector_no;
};

struct sgVectorS4LinearKey
{
	short p[4];
};

struct sgVectorS4BezierKey
{
	short p[4];
	short in_knot[4];
	short out_knot[4];
};

struct sgVectorStepKey
{
	float p[4];
};

struct sgVectorHermiteKey
{
	float p[4];
	float Ts[4];
	float Td[4];
};

struct sgVectorS4CardinalKey
{
	short p[4];
	short Tsd[4];
};

_anon3 anime_state;
_anon0 sg_anm_keys_type[22];

void sgAnimeInit();
void sgAnimeStateSetFramePerSec(float frame_per_sec);
int sgAnimeConstruct(sgAnime* anime, int n_bones);
void sgAnimeDestruct(sgAnime* anm);
void sgAnimeSetPostFunc(sgAnime* anm, void(*post_func)(sgAnime*, int));
void sgAnimeCopy(sgAnime* anime, sgAnime* src_anime);
void sgAnimeCopyAll(sgAnime* anime, sgAnime* src_anime);
void sgAnimeBuildBonesRelation(sgAnime* anm, void* build_data);
void sgAnimeSetPlayData(sgAnime* anime, void* play_data);
void* sgAnimePlayData(sgAnime* anime);
void sgAnimeSetSubPlayData(sgAnime* anime, void* play_data, int priority);
void* sgAnimeSubPlayData(sgAnime* anime, int priority);
void sgAnimeSetCurrentFrame(sgAnime* anime, int frame_no);
int sgAnimeCurrentFrame(sgAnime* anm);
float sgAnimeCurrentFloatFrame(sgAnime* anm);
int sgAnimeCurrentTime(sgAnime* anm);
void sgAnimeSetCurrentTime(sgAnime* anm, int set_time);
int sgAnimeEndFrame(sgAnime* anm);
int sgAnimeIsPlayEnd(sgAnime* anm);
void sgAnimeSetPlaySpeedRatio(sgAnime* anm, float ratio);
float sgAnimePlaySpeedRatio(sgAnime* anm);
void sgAnimeSetRoot(sgAnime* anm, sgBone* root_space);
sgBone* sgAnimeRoot(sgAnime* anm);
int sgAnimeNBones(sgAnime* anm);
sgBone* sgAnimeBone(sgAnime* anm, int n);
void sgAnimeSetBoneParentNo(sgAnime* anm, int bone_no, int parent_no);
void sgAnimeAddIKHandle(sgAnime* anm, sgIKHandle* handle);
void sgAnimeRemoveIKHandle(sgAnime* anm, sgIKHandle* handle);
int sgAnimeNIKHandle(sgAnime* anm);
sgIKHandle* sgAnimeIKHandle(sgAnime* anm, int no);
sgIKHandle* sgAnimeBoneIKHandle(sgAnime* anm, int bone_no);
void sgAnimeIKHandleSolveAll(sgAnime* anm);
void sgAnimeBuildSkeleton(sgAnime* anm, _anon1* connect_head);
void sgAnimeBonesUpdateAll(sgAnime* anm);
void sgAnimeOutputToMatrices(sgAnime* anm, float matrices[4][4]);
void sgAnimeProcess(sgAnime* anm);
void sgAnimeProceedDeltaTime(sgAnime* anm, int delta_time);
int sgAnimeDeltaTime(sgAnime* anm);
void sgAnimeProceedTime(sgAnime* anm);
void sgAnimeUpdateAnimation(sgAnime* anm);
void* sgAnimeNoneMapper();
void* sgAnimeBoneMapper(sgAnime* anm, int mapper_no);
void* sgAnimeClusterMapper(sgAnime* anm, int mapper_no);
void* sgAnimeTexAnimeMapper(sgAnime* anm, int mapper_no);
void sgAnimeKeyFrameExecute(sgAnime* anm, sgAnmKeyFrames* key_frames, int time_);
void sgAnimePositionHermiteInterp(void* sk, void* data, int n0, int n1, float u);
void sgAnimePositionBezierInterp(void* sk, void* data, int n0, int n1, float u);
void sgAnimePositionCardinalInterp(void* sk, void* data, int n0, int n1, float u);
void sgAnimePositionLinearInterp(void* sk, void* data, int n0, int n1, float u);
void sgAnimeRotQuatSquadInterp(void* sk, void* data, int n0, int n1, float u);
void sgAnimeRotQuatBoehmInterp(void* sk, void* data, int n0, int n1, float u);
void sgAnimeRotQuatLinearInterp(void* sk, void* data, int n0, int n1, float u);
void sgAnimeScaleCardinalInterp(void* sk, void* data, int n0, int n1, float u);
void sgAnimeScaleLinearInterp(void* sk, void* data, int n0, int n1, float u);
void sgAnimePositionS4HermiteInterp(void* sk, void* data, int n0, int n1, float u);
void sgAnimePositionS4BezierInterp(void* sk, void* data, int n0, int n1, float u);
void sgAnimePositionS4CardinalInterp(void* sk, void* data, int n0, int n1, float u);
void sgAnimePositionS4LinearInterp(void* sk, void* data, int n0, int n1, float u);
void sgAnimeRotQuatS15SquadInterp(void* sk, void* data, int n0, int n1, float u);
void sgAnimeRotQuatS15BoehmInterp(void* sk, void* data, int n0, int n1, float u);
void sgAnimeRotQuatS15LinearInterp(void* sk, void* data, int n0, int n1, float u);
void sgAnimeScaleS12CardinalInterp(void* sk, void* data, int n0, int n1, float u);
void sgAnimeScaleS12LinearInterp(void* sk, void* data, int n0, int n1, float u);
void sgAnimeFloatCardinalInterp(void* out, void* data, int n0, int n1, float u);
void sgAnimeFloatLinearInterp(void* out, void* data, int n0, int n1, float u);
void sgAnimeFloatVectorStepInterp(void* out, void* data, int n0, int n1, float u);

// 
// Start address: 0x142fb0
void sgAnimeInit()
{
	// Line 209, Address: 0x142fb0, Func Offset: 0
	// Line 210, Address: 0x142fb4, Func Offset: 0x4
	// Line 209, Address: 0x142fb8, Func Offset: 0x8
	// Line 210, Address: 0x142fbc, Func Offset: 0xc
	// Line 211, Address: 0x142fcc, Func Offset: 0x1c
	// Line 213, Address: 0x142fdc, Func Offset: 0x2c
	// Line 214, Address: 0x142fe4, Func Offset: 0x34
	// Line 215, Address: 0x142fec, Func Offset: 0x3c
	// Func End, Address: 0x142ff8, Func Offset: 0x48
}

// 
// Start address: 0x143000
void sgAnimeStateSetFramePerSec(float frame_per_sec)
{
	// Line 229, Address: 0x143000, Func Offset: 0
	// Line 228, Address: 0x143004, Func Offset: 0x4
	// Line 229, Address: 0x143008, Func Offset: 0x8
	// Line 230, Address: 0x143014, Func Offset: 0x14
	// Line 231, Address: 0x14301c, Func Offset: 0x1c
	// Line 232, Address: 0x143020, Func Offset: 0x20
	// Line 234, Address: 0x143028, Func Offset: 0x28
	// Line 235, Address: 0x143038, Func Offset: 0x38
	// Line 234, Address: 0x143040, Func Offset: 0x40
	// Line 235, Address: 0x143044, Func Offset: 0x44
	// Line 236, Address: 0x14306c, Func Offset: 0x6c
	// Func End, Address: 0x143078, Func Offset: 0x78
}

// 
// Start address: 0x143080
int sgAnimeConstruct(sgAnime* anime, int n_bones)
{
	// Line 249, Address: 0x143080, Func Offset: 0
	// Line 250, Address: 0x143094, Func Offset: 0x14
	// Line 251, Address: 0x14309c, Func Offset: 0x1c
	// Line 253, Address: 0x1430a8, Func Offset: 0x28
	// Line 254, Address: 0x1430b8, Func Offset: 0x38
	// Line 255, Address: 0x1430c0, Func Offset: 0x40
	// Line 256, Address: 0x1430c8, Func Offset: 0x48
	// Line 257, Address: 0x1430d4, Func Offset: 0x54
	// Line 258, Address: 0x1430e0, Func Offset: 0x60
	// Line 260, Address: 0x1430e8, Func Offset: 0x68
	// Line 262, Address: 0x1430f0, Func Offset: 0x70
	// Line 263, Address: 0x1430f8, Func Offset: 0x78
	// Line 264, Address: 0x143104, Func Offset: 0x84
	// Line 265, Address: 0x143110, Func Offset: 0x90
	// Line 266, Address: 0x143118, Func Offset: 0x98
	// Func End, Address: 0x14312c, Func Offset: 0xac
}

// 
// Start address: 0x143130
void sgAnimeDestruct(sgAnime* anm)
{
	sgIKHandle* handle;
	// Line 273, Address: 0x143130, Func Offset: 0
	// Line 274, Address: 0x143140, Func Offset: 0x10
	// Line 280, Address: 0x143148, Func Offset: 0x18
	// Line 285, Address: 0x143150, Func Offset: 0x20
	// Line 286, Address: 0x14315c, Func Offset: 0x2c
	// Line 287, Address: 0x143164, Func Offset: 0x34
	// Line 288, Address: 0x143178, Func Offset: 0x48
	// Line 289, Address: 0x143188, Func Offset: 0x58
	// Line 290, Address: 0x143194, Func Offset: 0x64
	// Line 291, Address: 0x14319c, Func Offset: 0x6c
	// Line 293, Address: 0x1431b0, Func Offset: 0x80
	// Line 294, Address: 0x1431b4, Func Offset: 0x84
	// Line 299, Address: 0x1431b8, Func Offset: 0x88
	// Line 295, Address: 0x1431bc, Func Offset: 0x8c
	// Line 296, Address: 0x1431c0, Func Offset: 0x90
	// Line 297, Address: 0x1431c4, Func Offset: 0x94
	// Line 298, Address: 0x1431c8, Func Offset: 0x98
	// Line 299, Address: 0x1431cc, Func Offset: 0x9c
	// Line 300, Address: 0x1431d0, Func Offset: 0xa0
	// Func End, Address: 0x1431e4, Func Offset: 0xb4
}

// 
// Start address: 0x1431f0
void sgAnimeSetPostFunc(sgAnime* anm, void(*post_func)(sgAnime*, int))
{
	// Line 315, Address: 0x1431f0, Func Offset: 0
	// Line 317, Address: 0x1431f8, Func Offset: 0x8
	// Line 318, Address: 0x1431fc, Func Offset: 0xc
	// Func End, Address: 0x143208, Func Offset: 0x18
}

// 
// Start address: 0x143210
void sgAnimeCopy(sgAnime* anime, sgAnime* src_anime)
{
	int i;
	// Line 333, Address: 0x143210, Func Offset: 0
	// Line 335, Address: 0x143228, Func Offset: 0x18
	// Line 337, Address: 0x143230, Func Offset: 0x20
	// Line 340, Address: 0x143238, Func Offset: 0x28
	// Line 342, Address: 0x143240, Func Offset: 0x30
	// Line 343, Address: 0x143250, Func Offset: 0x40
	// Line 345, Address: 0x143258, Func Offset: 0x48
	// Line 348, Address: 0x143260, Func Offset: 0x50
	// Line 349, Address: 0x143274, Func Offset: 0x64
	// Line 350, Address: 0x143278, Func Offset: 0x68
	// Line 351, Address: 0x143294, Func Offset: 0x84
	// Line 352, Address: 0x1432a4, Func Offset: 0x94
	// Line 353, Address: 0x1432b8, Func Offset: 0xa8
	// Line 355, Address: 0x1432cc, Func Offset: 0xbc
	// Line 356, Address: 0x1432d4, Func Offset: 0xc4
	// Func End, Address: 0x1432f0, Func Offset: 0xe0
}

// 
// Start address: 0x1432f0
void sgAnimeCopyAll(sgAnime* anime, sgAnime* src_anime)
{
	int i;
	// Line 368, Address: 0x1432f0, Func Offset: 0
	// Line 370, Address: 0x14330c, Func Offset: 0x1c
	// Line 372, Address: 0x143314, Func Offset: 0x24
	// Line 375, Address: 0x14331c, Func Offset: 0x2c
	// Line 377, Address: 0x143324, Func Offset: 0x34
	// Line 378, Address: 0x143334, Func Offset: 0x44
	// Line 381, Address: 0x14333c, Func Offset: 0x4c
	// Line 382, Address: 0x143344, Func Offset: 0x54
	// Line 384, Address: 0x143348, Func Offset: 0x58
	// Line 388, Address: 0x143358, Func Offset: 0x68
	// Line 392, Address: 0x143368, Func Offset: 0x78
	// Line 396, Address: 0x143370, Func Offset: 0x80
	// Line 398, Address: 0x14337c, Func Offset: 0x8c
	// Line 399, Address: 0x143390, Func Offset: 0xa0
	// Line 400, Address: 0x143398, Func Offset: 0xa8
	// Line 399, Address: 0x14339c, Func Offset: 0xac
	// Line 400, Address: 0x1433ac, Func Offset: 0xbc
	// Line 401, Address: 0x1433c0, Func Offset: 0xd0
	// Line 402, Address: 0x1433d0, Func Offset: 0xe0
	// Line 403, Address: 0x1433ec, Func Offset: 0xfc
	// Line 406, Address: 0x143400, Func Offset: 0x110
	// Line 407, Address: 0x143418, Func Offset: 0x128
	// Line 408, Address: 0x143440, Func Offset: 0x150
	// Line 410, Address: 0x143458, Func Offset: 0x168
	// Line 411, Address: 0x143470, Func Offset: 0x180
	// Line 412, Address: 0x143498, Func Offset: 0x1a8
	// Line 414, Address: 0x1434b0, Func Offset: 0x1c0
	// Line 415, Address: 0x1434b8, Func Offset: 0x1c8
	// Func End, Address: 0x1434d4, Func Offset: 0x1e4
}

// 
// Start address: 0x1434e0
void sgAnimeBuildBonesRelation(sgAnime* anm, void* build_data)
{
	_anon1* bc;
	_anon2* anm_data;
	// Line 432, Address: 0x1434e0, Func Offset: 0
	// Line 436, Address: 0x1434f4, Func Offset: 0x14
	// Line 438, Address: 0x1434fc, Func Offset: 0x1c
	// Line 441, Address: 0x143504, Func Offset: 0x24
	// Line 442, Address: 0x14351c, Func Offset: 0x3c
	// Line 444, Address: 0x143524, Func Offset: 0x44
	// Line 449, Address: 0x143528, Func Offset: 0x48
	// Line 450, Address: 0x143534, Func Offset: 0x54
	// Line 451, Address: 0x14353c, Func Offset: 0x5c
	// Line 452, Address: 0x143544, Func Offset: 0x64
	// Line 453, Address: 0x143548, Func Offset: 0x68
	// Func End, Address: 0x14355c, Func Offset: 0x7c
}

// 
// Start address: 0x143560
void sgAnimeSetPlayData(sgAnime* anime, void* play_data)
{
	int i;
	// Line 463, Address: 0x143560, Func Offset: 0
	// Line 465, Address: 0x143574, Func Offset: 0x14
	// Line 467, Address: 0x14357c, Func Offset: 0x1c
	// Line 468, Address: 0x14359c, Func Offset: 0x3c
	// Line 470, Address: 0x1435a4, Func Offset: 0x44
	// Line 472, Address: 0x1435a8, Func Offset: 0x48
	// Line 473, Address: 0x1435ac, Func Offset: 0x4c
	// Line 475, Address: 0x1435b0, Func Offset: 0x50
	// Line 486, Address: 0x1435b4, Func Offset: 0x54
	// Line 473, Address: 0x1435b8, Func Offset: 0x58
	// Line 474, Address: 0x1435c0, Func Offset: 0x60
	// Line 475, Address: 0x1435c4, Func Offset: 0x64
	// Line 476, Address: 0x1435cc, Func Offset: 0x6c
	// Line 487, Address: 0x1435d8, Func Offset: 0x78
	// Line 488, Address: 0x1435e8, Func Offset: 0x88
	// Line 489, Address: 0x1435f8, Func Offset: 0x98
	// Func End, Address: 0x14360c, Func Offset: 0xac
}

// 
// Start address: 0x143610
void* sgAnimePlayData(sgAnime* anime)
{
	// Line 495, Address: 0x143610, Func Offset: 0
	// Line 497, Address: 0x14361c, Func Offset: 0xc
	// Func End, Address: 0x143624, Func Offset: 0x14
}

// 
// Start address: 0x143630
void sgAnimeSetSubPlayData(sgAnime* anime, void* play_data, int priority)
{
	// Line 512, Address: 0x143630, Func Offset: 0
	// Line 513, Address: 0x14364c, Func Offset: 0x1c
	// Line 515, Address: 0x143654, Func Offset: 0x24
	// Line 516, Address: 0x143674, Func Offset: 0x44
	// Line 518, Address: 0x14367c, Func Offset: 0x4c
	// Line 519, Address: 0x143684, Func Offset: 0x54
	// Line 522, Address: 0x143688, Func Offset: 0x58
	// Line 524, Address: 0x1436a0, Func Offset: 0x70
	// Line 525, Address: 0x1436a4, Func Offset: 0x74
	// Line 524, Address: 0x1436a8, Func Offset: 0x78
	// Line 525, Address: 0x1436b0, Func Offset: 0x80
	// Line 533, Address: 0x1436bc, Func Offset: 0x8c
	// Func End, Address: 0x1436d8, Func Offset: 0xa8
}

// 
// Start address: 0x1436e0
void* sgAnimeSubPlayData(sgAnime* anime, int priority)
{
	// Line 544, Address: 0x1436e0, Func Offset: 0
	// Line 546, Address: 0x1436f4, Func Offset: 0x14
	// Func End, Address: 0x1436fc, Func Offset: 0x1c
}

// 
// Start address: 0x143700
void sgAnimeSetCurrentFrame(sgAnime* anime, int frame_no)
{
	// Line 556, Address: 0x143700, Func Offset: 0
	// Line 557, Address: 0x143704, Func Offset: 0x4
	// Func End, Address: 0x14370c, Func Offset: 0xc
}

// 
// Start address: 0x143710
int sgAnimeCurrentFrame(sgAnime* anm)
{
	_anon2* anm_data;
	int time;
	int total_time;
	// Line 568, Address: 0x143710, Func Offset: 0
	// Line 573, Address: 0x143720, Func Offset: 0x10
	// Line 574, Address: 0x143728, Func Offset: 0x18
	// Line 576, Address: 0x143730, Func Offset: 0x20
	// Line 577, Address: 0x143734, Func Offset: 0x24
	// Line 578, Address: 0x14373c, Func Offset: 0x2c
	// Line 580, Address: 0x143748, Func Offset: 0x38
	// Line 581, Address: 0x143750, Func Offset: 0x40
	// Line 582, Address: 0x143754, Func Offset: 0x44
	// Line 583, Address: 0x143768, Func Offset: 0x58
	// Line 584, Address: 0x143770, Func Offset: 0x60
	// Line 585, Address: 0x143778, Func Offset: 0x68
	// Line 587, Address: 0x143784, Func Offset: 0x74
	// Line 594, Address: 0x143790, Func Offset: 0x80
	// Line 596, Address: 0x1437a0, Func Offset: 0x90
	// Line 597, Address: 0x1437a8, Func Offset: 0x98
	// Line 599, Address: 0x1437ac, Func Offset: 0x9c
	// Line 600, Address: 0x1437b0, Func Offset: 0xa0
	// Line 601, Address: 0x1437c0, Func Offset: 0xb0
	// Func End, Address: 0x1437d4, Func Offset: 0xc4
}

// 
// Start address: 0x1437e0
float sgAnimeCurrentFloatFrame(sgAnime* anm)
{
	_anon2* anm_data;
	int time;
	int total_time;
	// Line 612, Address: 0x1437e0, Func Offset: 0
	// Line 617, Address: 0x1437f0, Func Offset: 0x10
	// Line 618, Address: 0x1437f8, Func Offset: 0x18
	// Line 620, Address: 0x143808, Func Offset: 0x28
	// Line 621, Address: 0x14380c, Func Offset: 0x2c
	// Line 622, Address: 0x143814, Func Offset: 0x34
	// Line 624, Address: 0x143820, Func Offset: 0x40
	// Line 625, Address: 0x143828, Func Offset: 0x48
	// Line 626, Address: 0x14382c, Func Offset: 0x4c
	// Line 627, Address: 0x143840, Func Offset: 0x60
	// Line 628, Address: 0x143848, Func Offset: 0x68
	// Line 629, Address: 0x143850, Func Offset: 0x70
	// Line 631, Address: 0x14385c, Func Offset: 0x7c
	// Line 638, Address: 0x143868, Func Offset: 0x88
	// Line 640, Address: 0x143878, Func Offset: 0x98
	// Line 641, Address: 0x143880, Func Offset: 0xa0
	// Line 643, Address: 0x143884, Func Offset: 0xa4
	// Line 644, Address: 0x143888, Func Offset: 0xa8
	// Line 645, Address: 0x1438a0, Func Offset: 0xc0
	// Func End, Address: 0x1438b4, Func Offset: 0xd4
}

// 
// Start address: 0x1438c0
int sgAnimeCurrentTime(sgAnime* anm)
{
	// Line 655, Address: 0x1438c0, Func Offset: 0
	// Line 657, Address: 0x1438cc, Func Offset: 0xc
	// Func End, Address: 0x1438d4, Func Offset: 0x14
}

// 
// Start address: 0x1438e0
void sgAnimeSetCurrentTime(sgAnime* anm, int set_time)
{
	// Line 666, Address: 0x1438e0, Func Offset: 0
	// Line 668, Address: 0x1438e8, Func Offset: 0x8
	// Line 669, Address: 0x1438ec, Func Offset: 0xc
	// Func End, Address: 0x1438f8, Func Offset: 0x18
}

// 
// Start address: 0x143900
int sgAnimeEndFrame(sgAnime* anm)
{
	_anon2* data;
	// Line 679, Address: 0x143900, Func Offset: 0
	// Line 681, Address: 0x143904, Func Offset: 0x4
	// Line 682, Address: 0x14390c, Func Offset: 0xc
	// Line 683, Address: 0x143918, Func Offset: 0x18
	// Line 684, Address: 0x14391c, Func Offset: 0x1c
	// Line 687, Address: 0x143938, Func Offset: 0x38
	// Func End, Address: 0x143944, Func Offset: 0x44
}

// 
// Start address: 0x143950
int sgAnimeIsPlayEnd(sgAnime* anm)
{
	int time;
	int total_time;
	_anon2* data;
	// Line 694, Address: 0x143950, Func Offset: 0
	// Line 699, Address: 0x143964, Func Offset: 0x14
	// Line 700, Address: 0x14396c, Func Offset: 0x1c
	// Line 701, Address: 0x143978, Func Offset: 0x28
	// Line 702, Address: 0x14397c, Func Offset: 0x2c
	// Line 704, Address: 0x143990, Func Offset: 0x40
	// Line 705, Address: 0x1439a0, Func Offset: 0x50
	// Line 708, Address: 0x1439a8, Func Offset: 0x58
	// Line 709, Address: 0x1439b0, Func Offset: 0x60
	// Line 711, Address: 0x1439bc, Func Offset: 0x6c
	// Line 712, Address: 0x1439d0, Func Offset: 0x80
	// Line 713, Address: 0x1439dc, Func Offset: 0x8c
	// Line 714, Address: 0x1439e4, Func Offset: 0x94
	// Line 715, Address: 0x1439e8, Func Offset: 0x98
	// Line 716, Address: 0x1439f0, Func Offset: 0xa0
	// Line 718, Address: 0x1439f8, Func Offset: 0xa8
	// Line 719, Address: 0x143a00, Func Offset: 0xb0
	// Func End, Address: 0x143a18, Func Offset: 0xc8
}

// 
// Start address: 0x143a20
void sgAnimeSetPlaySpeedRatio(sgAnime* anm, float ratio)
{
	// Line 727, Address: 0x143a20, Func Offset: 0
	// Line 729, Address: 0x143a28, Func Offset: 0x8
	// Line 730, Address: 0x143a44, Func Offset: 0x24
	// Func End, Address: 0x143a50, Func Offset: 0x30
}

// 
// Start address: 0x143a50
float sgAnimePlaySpeedRatio(sgAnime* anm)
{
	// Line 740, Address: 0x143a50, Func Offset: 0
	// Line 742, Address: 0x143a80, Func Offset: 0x30
	// Func End, Address: 0x143a88, Func Offset: 0x38
}

// 
// Start address: 0x143a90
void sgAnimeSetRoot(sgAnime* anm, sgBone* root_space)
{
	int n;
	int i;
	sgBone* last_root;
	sgBone* bone;
	// Line 763, Address: 0x143a90, Func Offset: 0
	// Line 767, Address: 0x143ab4, Func Offset: 0x24
	// Line 769, Address: 0x143abc, Func Offset: 0x2c
	// Line 772, Address: 0x143ac0, Func Offset: 0x30
	// Line 773, Address: 0x143acc, Func Offset: 0x3c
	// Line 774, Address: 0x143ad8, Func Offset: 0x48
	// Line 775, Address: 0x143ae8, Func Offset: 0x58
	// Line 777, Address: 0x143af8, Func Offset: 0x68
	// Line 779, Address: 0x143b00, Func Offset: 0x70
	// Line 780, Address: 0x143b10, Func Offset: 0x80
	// Func End, Address: 0x143b34, Func Offset: 0xa4
}

// 
// Start address: 0x143b40
sgBone* sgAnimeRoot(sgAnime* anm)
{
	// Line 790, Address: 0x143b40, Func Offset: 0
	// Line 792, Address: 0x143b4c, Func Offset: 0xc
	// Func End, Address: 0x143b54, Func Offset: 0x14
}

// 
// Start address: 0x143b60
int sgAnimeNBones(sgAnime* anm)
{
	// Line 799, Address: 0x143b60, Func Offset: 0
	// Line 801, Address: 0x143b6c, Func Offset: 0xc
	// Func End, Address: 0x143b74, Func Offset: 0x14
}

// 
// Start address: 0x143b80
sgBone* sgAnimeBone(sgAnime* anm, int n)
{
	// Line 808, Address: 0x143b80, Func Offset: 0
	// Line 809, Address: 0x143b88, Func Offset: 0x8
	// Line 810, Address: 0x143b90, Func Offset: 0x10
	// Line 811, Address: 0x143b98, Func Offset: 0x18
	// Line 813, Address: 0x143ba0, Func Offset: 0x20
	// Line 816, Address: 0x143bd0, Func Offset: 0x50
	// Func End, Address: 0x143bd8, Func Offset: 0x58
}

// 
// Start address: 0x143be0
void sgAnimeSetBoneParentNo(sgAnime* anm, int bone_no, int parent_no)
{
	sgBone* target;
	sgBone* parent;
	// Line 826, Address: 0x143be0, Func Offset: 0
	// Line 831, Address: 0x143c00, Func Offset: 0x20
	// Line 832, Address: 0x143c08, Func Offset: 0x28
	// Line 833, Address: 0x143c14, Func Offset: 0x34
	// Line 836, Address: 0x143c1c, Func Offset: 0x3c
	// Line 837, Address: 0x143c2c, Func Offset: 0x4c
	// Line 838, Address: 0x143c38, Func Offset: 0x58
	// Line 840, Address: 0x143c40, Func Offset: 0x60
	// Line 841, Address: 0x143c48, Func Offset: 0x68
	// Line 842, Address: 0x143c50, Func Offset: 0x70
	// Line 843, Address: 0x143c64, Func Offset: 0x84
	// Line 844, Address: 0x143c68, Func Offset: 0x88
	// Func End, Address: 0x143c84, Func Offset: 0xa4
}

// 
// Start address: 0x143c90
void sgAnimeAddIKHandle(sgAnime* anm, sgIKHandle* handle)
{
	// Line 860, Address: 0x143c90, Func Offset: 0
	// Line 862, Address: 0x143c98, Func Offset: 0x8
	// Line 865, Address: 0x143ca0, Func Offset: 0x10
	// Line 866, Address: 0x143ca8, Func Offset: 0x18
	// Line 867, Address: 0x143cac, Func Offset: 0x1c
	// Func End, Address: 0x143cb8, Func Offset: 0x28
}

// 
// Start address: 0x143cc0
void sgAnimeRemoveIKHandle(sgAnime* anm, sgIKHandle* handle)
{
	sgIKHandle* ih;
	// Line 878, Address: 0x143cc0, Func Offset: 0
	// Line 880, Address: 0x143cc8, Func Offset: 0x8
	// Line 882, Address: 0x143cd0, Func Offset: 0x10
	// Line 883, Address: 0x143cd4, Func Offset: 0x14
	// Line 884, Address: 0x143cdc, Func Offset: 0x1c
	// Line 885, Address: 0x143ce0, Func Offset: 0x20
	// Line 888, Address: 0x143cec, Func Offset: 0x2c
	// Line 889, Address: 0x143cf4, Func Offset: 0x34
	// Line 890, Address: 0x143cf8, Func Offset: 0x38
	// Line 892, Address: 0x143d00, Func Offset: 0x40
	// Line 895, Address: 0x143d10, Func Offset: 0x50
	// Func End, Address: 0x143d18, Func Offset: 0x58
}

// 
// Start address: 0x143d20
int sgAnimeNIKHandle(sgAnime* anm)
{
	sgIKHandle* handle;
	int n;
	// Line 902, Address: 0x143d20, Func Offset: 0
	// Line 903, Address: 0x143d28, Func Offset: 0x8
	// Line 904, Address: 0x143d30, Func Offset: 0x10
	// Line 905, Address: 0x143d34, Func Offset: 0x14
	// Line 906, Address: 0x143d40, Func Offset: 0x20
	// Line 907, Address: 0x143d44, Func Offset: 0x24
	// Line 909, Address: 0x143d60, Func Offset: 0x40
	// Func End, Address: 0x143d68, Func Offset: 0x48
}

// 
// Start address: 0x143d70
sgIKHandle* sgAnimeIKHandle(sgAnime* anm, int no)
{
	int n;
	sgIKHandle* handle;
	// Line 917, Address: 0x143d70, Func Offset: 0
	// Line 918, Address: 0x143d78, Func Offset: 0x8
	// Line 919, Address: 0x143d80, Func Offset: 0x10
	// Line 920, Address: 0x143d84, Func Offset: 0x14
	// Line 921, Address: 0x143d90, Func Offset: 0x20
	// Line 922, Address: 0x143d98, Func Offset: 0x28
	// Line 923, Address: 0x143da0, Func Offset: 0x30
	// Line 924, Address: 0x143da4, Func Offset: 0x34
	// Line 925, Address: 0x143db0, Func Offset: 0x40
	// Line 926, Address: 0x143db8, Func Offset: 0x48
	// Func End, Address: 0x143dc0, Func Offset: 0x50
}

// 
// Start address: 0x143dc0
sgIKHandle* sgAnimeBoneIKHandle(sgAnime* anm, int bone_no)
{
	sgBone* bone;
	int nik;
	int i;
	sgIKHandle* handle;
	// Line 937, Address: 0x143dc0, Func Offset: 0
	// Line 938, Address: 0x143ddc, Func Offset: 0x1c
	// Line 939, Address: 0x143de8, Func Offset: 0x28
	// Line 942, Address: 0x143df0, Func Offset: 0x30
	// Line 943, Address: 0x143df8, Func Offset: 0x38
	// Line 945, Address: 0x143e00, Func Offset: 0x40
	// Line 946, Address: 0x143e10, Func Offset: 0x50
	// Line 947, Address: 0x143e20, Func Offset: 0x60
	// Line 948, Address: 0x143e30, Func Offset: 0x70
	// Line 950, Address: 0x143e38, Func Offset: 0x78
	// Line 951, Address: 0x143e48, Func Offset: 0x88
	// Line 952, Address: 0x143e50, Func Offset: 0x90
	// Func End, Address: 0x143e70, Func Offset: 0xb0
}

// 
// Start address: 0x143e70
void sgAnimeIKHandleSolveAll(sgAnime* anm)
{
	sgIKHandle* handle;
	// Line 956, Address: 0x143e70, Func Offset: 0
	// Line 958, Address: 0x143e78, Func Offset: 0x8
	// Line 960, Address: 0x143e80, Func Offset: 0x10
	// Line 961, Address: 0x143e84, Func Offset: 0x14
	// Line 962, Address: 0x143e90, Func Offset: 0x20
	// Line 963, Address: 0x143e98, Func Offset: 0x28
	// Line 964, Address: 0x143eb0, Func Offset: 0x40
	// Func End, Address: 0x143ec0, Func Offset: 0x50
}

// 
// Start address: 0x143ec0
void sgAnimeBuildSkeleton(sgAnime* anm, _anon1* connect_head)
{
	int n_ik_chain;
	int i;
	int n_connect;
	_anon5* cn;
	sgIKHandle* handle;
	_anon6* cn;
	// Line 970, Address: 0x143ec0, Func Offset: 0
	// Line 975, Address: 0x143ee4, Func Offset: 0x24
	// Line 977, Address: 0x143eec, Func Offset: 0x2c
	// Line 980, Address: 0x143ef4, Func Offset: 0x34
	// Line 981, Address: 0x143f00, Func Offset: 0x40
	// Line 982, Address: 0x143f10, Func Offset: 0x50
	// Line 983, Address: 0x143f1c, Func Offset: 0x5c
	// Line 984, Address: 0x143f2c, Func Offset: 0x6c
	// Line 986, Address: 0x143f40, Func Offset: 0x80
	// Line 987, Address: 0x143f4c, Func Offset: 0x8c
	// Line 989, Address: 0x143f58, Func Offset: 0x98
	// Line 990, Address: 0x143f64, Func Offset: 0xa4
	// Line 989, Address: 0x143f68, Func Offset: 0xa8
	// Line 990, Address: 0x143f6c, Func Offset: 0xac
	// Line 993, Address: 0x143f7c, Func Offset: 0xbc
	// Line 994, Address: 0x143f8c, Func Offset: 0xcc
	// Line 995, Address: 0x143f94, Func Offset: 0xd4
	// Line 996, Address: 0x143fa0, Func Offset: 0xe0
	// Line 997, Address: 0x143fac, Func Offset: 0xec
	// Line 999, Address: 0x143fc0, Func Offset: 0x100
	// Line 1000, Address: 0x143fd8, Func Offset: 0x118
	// Line 1001, Address: 0x143ff0, Func Offset: 0x130
	// Line 1002, Address: 0x143ffc, Func Offset: 0x13c
	// Line 1003, Address: 0x144010, Func Offset: 0x150
	// Func End, Address: 0x144034, Func Offset: 0x174
}

// 
// Start address: 0x144040
void sgAnimeBonesUpdateAll(sgAnime* anm)
{
	int i;
	sgBone* skp;
	int n;
	// Line 1020, Address: 0x144040, Func Offset: 0
	// Line 1023, Address: 0x144054, Func Offset: 0x14
	// Line 1025, Address: 0x14405c, Func Offset: 0x1c
	// Line 1028, Address: 0x144064, Func Offset: 0x24
	// Line 1029, Address: 0x144068, Func Offset: 0x28
	// Line 1032, Address: 0x144070, Func Offset: 0x30
	// Line 1033, Address: 0x144080, Func Offset: 0x40
	// Line 1034, Address: 0x144088, Func Offset: 0x48
	// Line 1035, Address: 0x1440a0, Func Offset: 0x60
	// Func End, Address: 0x1440b8, Func Offset: 0x78
}

// 
// Start address: 0x1440c0
void sgAnimeOutputToMatrices(sgAnime* anm, float matrices[4][4])
{
	int i;
	sgBone* skp;
	int n;
	// Line 1048, Address: 0x1440c0, Func Offset: 0
	// Line 1051, Address: 0x1440dc, Func Offset: 0x1c
	// Line 1053, Address: 0x1440e4, Func Offset: 0x24
	// Line 1055, Address: 0x1440ec, Func Offset: 0x2c
	// Line 1058, Address: 0x1440f4, Func Offset: 0x34
	// Line 1059, Address: 0x1440f8, Func Offset: 0x38
	// Line 1061, Address: 0x144100, Func Offset: 0x40
	// Line 1062, Address: 0x144110, Func Offset: 0x50
	// Line 1063, Address: 0x14411c, Func Offset: 0x5c
	// Line 1062, Address: 0x144120, Func Offset: 0x60
	// Line 1063, Address: 0x144124, Func Offset: 0x64
	// Line 1064, Address: 0x144130, Func Offset: 0x70
	// Func End, Address: 0x14414c, Func Offset: 0x8c
}

// 
// Start address: 0x144150
void sgAnimeProcess(sgAnime* anm)
{
	// Line 1080, Address: 0x144150, Func Offset: 0
	// Line 1081, Address: 0x14415c, Func Offset: 0xc
	// Line 1082, Address: 0x144164, Func Offset: 0x14
	// Line 1084, Address: 0x14416c, Func Offset: 0x1c
	// Func End, Address: 0x14417c, Func Offset: 0x2c
}

// 
// Start address: 0x144180
void sgAnimeProceedDeltaTime(sgAnime* anm, int delta_time)
{
	_anon2* anm_data;
	// Line 1096, Address: 0x144180, Func Offset: 0
	// Line 1099, Address: 0x144190, Func Offset: 0x10
	// Line 1101, Address: 0x144198, Func Offset: 0x18
	// Line 1102, Address: 0x1441a0, Func Offset: 0x20
	// Line 1108, Address: 0x1441a4, Func Offset: 0x24
	// Line 1102, Address: 0x1441ac, Func Offset: 0x2c
	// Line 1108, Address: 0x1441b8, Func Offset: 0x38
	// Line 1109, Address: 0x1441d0, Func Offset: 0x50
	// Line 1118, Address: 0x1441e0, Func Offset: 0x60
	// Func End, Address: 0x1441f0, Func Offset: 0x70
}

// 
// Start address: 0x1441f0
int sgAnimeDeltaTime(sgAnime* anm)
{
	// Line 1127, Address: 0x1441f0, Func Offset: 0
	// Line 1129, Address: 0x1441fc, Func Offset: 0xc
	// Func End, Address: 0x144204, Func Offset: 0x14
}

// 
// Start address: 0x144210
void sgAnimeProceedTime(sgAnime* anm)
{
	// Line 1136, Address: 0x144210, Func Offset: 0
	// Line 1137, Address: 0x14421c, Func Offset: 0xc
	// Line 1138, Address: 0x144230, Func Offset: 0x20
	// Func End, Address: 0x144240, Func Offset: 0x30
}

// 
// Start address: 0x144240
void sgAnimeUpdateAnimation(sgAnime* anm)
{
	int no;
	_anon2* anm_data;
	int n;
	int n_anime;
	int time;
	int total_time;
	_anon1* bc;
	void* target_data;
	// Line 1153, Address: 0x144240, Func Offset: 0
	// Line 1156, Address: 0x144268, Func Offset: 0x28
	// Line 1159, Address: 0x144270, Func Offset: 0x30
	// Line 1168, Address: 0x144280, Func Offset: 0x40
	// Line 1170, Address: 0x144284, Func Offset: 0x44
	// Line 1171, Address: 0x14428c, Func Offset: 0x4c
	// Line 1172, Address: 0x1442a4, Func Offset: 0x64
	// Line 1174, Address: 0x1442ac, Func Offset: 0x6c
	// Line 1175, Address: 0x1442b4, Func Offset: 0x74
	// Line 1174, Address: 0x1442b8, Func Offset: 0x78
	// Line 1178, Address: 0x1442c0, Func Offset: 0x80
	// Line 1179, Address: 0x1442d0, Func Offset: 0x90
	// Line 1180, Address: 0x1442d8, Func Offset: 0x98
	// Line 1181, Address: 0x1442e0, Func Offset: 0xa0
	// Line 1183, Address: 0x1442e8, Func Offset: 0xa8
	// Line 1184, Address: 0x1442f4, Func Offset: 0xb4
	// Line 1187, Address: 0x1442f8, Func Offset: 0xb8
	// Line 1188, Address: 0x144304, Func Offset: 0xc4
	// Line 1190, Address: 0x144310, Func Offset: 0xd0
	// Line 1191, Address: 0x144320, Func Offset: 0xe0
	// Line 1192, Address: 0x144328, Func Offset: 0xe8
	// Line 1193, Address: 0x144330, Func Offset: 0xf0
	// Line 1195, Address: 0x14433c, Func Offset: 0xfc
	// Line 1202, Address: 0x144348, Func Offset: 0x108
	// Line 1204, Address: 0x144358, Func Offset: 0x118
	// Line 1205, Address: 0x144360, Func Offset: 0x120
	// Line 1207, Address: 0x144364, Func Offset: 0x124
	// Line 1210, Address: 0x144368, Func Offset: 0x128
	// Line 1211, Address: 0x144374, Func Offset: 0x134
	// Line 1212, Address: 0x144380, Func Offset: 0x140
	// Line 1213, Address: 0x144390, Func Offset: 0x150
	// Line 1214, Address: 0x1443bc, Func Offset: 0x17c
	// Line 1215, Address: 0x1443c0, Func Offset: 0x180
	// Line 1216, Address: 0x1443d0, Func Offset: 0x190
	// Line 1218, Address: 0x1443d8, Func Offset: 0x198
	// Line 1222, Address: 0x1443e4, Func Offset: 0x1a4
	// Line 1224, Address: 0x1443fc, Func Offset: 0x1bc
	// Line 1225, Address: 0x144404, Func Offset: 0x1c4
	// Line 1227, Address: 0x14440c, Func Offset: 0x1cc
	// Line 1228, Address: 0x144420, Func Offset: 0x1e0
	// Func End, Address: 0x14444c, Func Offset: 0x20c
}

// 
// Start address: 0x144450
void* sgAnimeNoneMapper()
{
	// Line 1260, Address: 0x144450, Func Offset: 0
	// Func End, Address: 0x144458, Func Offset: 0x8
}

// 
// Start address: 0x144460
void* sgAnimeBoneMapper(sgAnime* anm, int mapper_no)
{
	// Line 1265, Address: 0x144460, Func Offset: 0
	// Line 1266, Address: 0x144470, Func Offset: 0x10
	// Line 1268, Address: 0x14447c, Func Offset: 0x1c
	// Line 1270, Address: 0x144498, Func Offset: 0x38
	// Func End, Address: 0x1444a0, Func Offset: 0x40
}

// 
// Start address: 0x1444a0
void* sgAnimeClusterMapper(sgAnime* anm, int mapper_no)
{
	// Line 1274, Address: 0x1444a0, Func Offset: 0
	// Line 1276, Address: 0x1444a4, Func Offset: 0x4
	// Line 1278, Address: 0x1444b4, Func Offset: 0x14
	// Func End, Address: 0x1444bc, Func Offset: 0x1c
}

// 
// Start address: 0x1444c0
void* sgAnimeTexAnimeMapper(sgAnime* anm, int mapper_no)
{
	// Line 1282, Address: 0x1444c0, Func Offset: 0
	// Line 1284, Address: 0x1444c4, Func Offset: 0x4
	// Line 1286, Address: 0x1444d4, Func Offset: 0x14
	// Func End, Address: 0x1444dc, Func Offset: 0x1c
}

// 
// Start address: 0x1444e0
void sgAnimeKeyFrameExecute(sgAnime* anm, sgAnmKeyFrames* key_frames, int time_)
{
	int time;
	int base_frame;
	int n;
	int n_anime;
	sgAnmKeys* anime_keys;
	_anon4* bone_keys;
	void* keys;
	float u;
	int n0;
	int n1;
	int key_type;
	void* target;
	int d;
	int t0;
	// Line 1405, Address: 0x1444e0, Func Offset: 0
	// Line 1414, Address: 0x1444f8, Func Offset: 0x18
	// Line 1405, Address: 0x1444fc, Func Offset: 0x1c
	// Line 1414, Address: 0x14451c, Func Offset: 0x3c
	// Line 1415, Address: 0x14452c, Func Offset: 0x4c
	// Line 1416, Address: 0x144538, Func Offset: 0x58
	// Line 1417, Address: 0x144548, Func Offset: 0x68
	// Line 1431, Address: 0x144558, Func Offset: 0x78
	// Line 1432, Address: 0x144568, Func Offset: 0x88
	// Line 1434, Address: 0x14457c, Func Offset: 0x9c
	// Line 1435, Address: 0x144580, Func Offset: 0xa0
	// Line 1439, Address: 0x144588, Func Offset: 0xa8
	// Line 1440, Address: 0x14459c, Func Offset: 0xbc
	// Line 1439, Address: 0x1445a0, Func Offset: 0xc0
	// Line 1440, Address: 0x1445a4, Func Offset: 0xc4
	// Line 1441, Address: 0x1445b0, Func Offset: 0xd0
	// Line 1440, Address: 0x1445b4, Func Offset: 0xd4
	// Line 1441, Address: 0x1445bc, Func Offset: 0xdc
	// Line 1442, Address: 0x1445dc, Func Offset: 0xfc
	// Line 1444, Address: 0x1445e0, Func Offset: 0x100
	// Line 1445, Address: 0x1445ec, Func Offset: 0x10c
	// Line 1447, Address: 0x14460c, Func Offset: 0x12c
	// Line 1448, Address: 0x144618, Func Offset: 0x138
	// Line 1449, Address: 0x14462c, Func Offset: 0x14c
	// Line 1450, Address: 0x144634, Func Offset: 0x154
	// Line 1452, Address: 0x14464c, Func Offset: 0x16c
	// Line 1453, Address: 0x144660, Func Offset: 0x180
	// Func End, Address: 0x144694, Func Offset: 0x1b4
}

// 
// Start address: 0x1446a0
void sgAnimePositionHermiteInterp(void* sk, void* data, int n0, int n1, float u)
{
	float val[4];
	sgVectorHermiteKey* keys;
	// Line 1462, Address: 0x1446a0, Func Offset: 0
	// Line 1466, Address: 0x1446a4, Func Offset: 0x4
	// Line 1462, Address: 0x1446ac, Func Offset: 0xc
	// Line 1466, Address: 0x1446b0, Func Offset: 0x10
	// Line 1462, Address: 0x1446b8, Func Offset: 0x18
	// Line 1466, Address: 0x1446bc, Func Offset: 0x1c
	// Line 1467, Address: 0x1446dc, Func Offset: 0x3c
	// Line 1468, Address: 0x1446e8, Func Offset: 0x48
	// Func End, Address: 0x1446f8, Func Offset: 0x58
}

// 
// Start address: 0x144700
void sgAnimePositionBezierInterp(void* sk, void* data, int n0, int n1, float u)
{
	float val[4];
	sgVectorBezierKey* keys;
	// Line 1475, Address: 0x144700, Func Offset: 0
	// Line 1479, Address: 0x144704, Func Offset: 0x4
	// Line 1475, Address: 0x14470c, Func Offset: 0xc
	// Line 1479, Address: 0x144710, Func Offset: 0x10
	// Line 1475, Address: 0x144718, Func Offset: 0x18
	// Line 1479, Address: 0x14471c, Func Offset: 0x1c
	// Line 1480, Address: 0x14473c, Func Offset: 0x3c
	// Line 1481, Address: 0x144748, Func Offset: 0x48
	// Func End, Address: 0x144758, Func Offset: 0x58
}

// 
// Start address: 0x144760
void sgAnimePositionCardinalInterp(void* sk, void* data, int n0, int n1, float u)
{
	float val[4];
	sgVectorCardinalKey* keys;
	// Line 1488, Address: 0x144760, Func Offset: 0
	// Line 1492, Address: 0x144764, Func Offset: 0x4
	// Line 1488, Address: 0x144768, Func Offset: 0x8
	// Line 1492, Address: 0x14476c, Func Offset: 0xc
	// Line 1488, Address: 0x144770, Func Offset: 0x10
	// Line 1492, Address: 0x144774, Func Offset: 0x14
	// Line 1493, Address: 0x14478c, Func Offset: 0x2c
	// Line 1494, Address: 0x144798, Func Offset: 0x38
	// Func End, Address: 0x1447a8, Func Offset: 0x48
}

// 
// Start address: 0x1447b0
void sgAnimePositionLinearInterp(void* sk, void* data, int n0, int n1, float u)
{
	float val[4];
	sgVectorLinearKey* keys;
	// Line 1502, Address: 0x1447b0, Func Offset: 0
	// Line 1506, Address: 0x1447b4, Func Offset: 0x4
	// Line 1502, Address: 0x1447b8, Func Offset: 0x8
	// Line 1506, Address: 0x1447bc, Func Offset: 0xc
	// Line 1502, Address: 0x1447c0, Func Offset: 0x10
	// Line 1506, Address: 0x1447c4, Func Offset: 0x14
	// Line 1507, Address: 0x1447dc, Func Offset: 0x2c
	// Line 1508, Address: 0x1447e8, Func Offset: 0x38
	// Func End, Address: 0x1447f8, Func Offset: 0x48
}

// 
// Start address: 0x144800
void sgAnimeRotQuatSquadInterp(void* sk, void* data, int n0, int n1, float u)
{
	float val[4];
	sgQuatSquadKey* keys;
	// Line 1515, Address: 0x144800, Func Offset: 0
	// Line 1521, Address: 0x144804, Func Offset: 0x4
	// Line 1515, Address: 0x14480c, Func Offset: 0xc
	// Line 1521, Address: 0x144810, Func Offset: 0x10
	// Line 1515, Address: 0x144818, Func Offset: 0x18
	// Line 1521, Address: 0x14481c, Func Offset: 0x1c
	// Line 1522, Address: 0x14483c, Func Offset: 0x3c
	// Line 1523, Address: 0x144848, Func Offset: 0x48
	// Func End, Address: 0x144858, Func Offset: 0x58
}

// 
// Start address: 0x144860
void sgAnimeRotQuatBoehmInterp(void* sk, void* data, int n0, int n1, float u)
{
	float val[4];
	sgQuatBoehmKey* keys;
	// Line 1528, Address: 0x144860, Func Offset: 0
	// Line 1532, Address: 0x144864, Func Offset: 0x4
	// Line 1528, Address: 0x144868, Func Offset: 0x8
	// Line 1532, Address: 0x14486c, Func Offset: 0xc
	// Line 1528, Address: 0x144870, Func Offset: 0x10
	// Line 1532, Address: 0x144874, Func Offset: 0x14
	// Line 1533, Address: 0x14488c, Func Offset: 0x2c
	// Line 1534, Address: 0x144898, Func Offset: 0x38
	// Func End, Address: 0x1448a8, Func Offset: 0x48
}

// 
// Start address: 0x1448b0
void sgAnimeRotQuatLinearInterp(void* sk, void* data, int n0, int n1, float u)
{
	float val[4];
	sgQuatLinearKey* keys;
	// Line 1540, Address: 0x1448b0, Func Offset: 0
	// Line 1544, Address: 0x1448b4, Func Offset: 0x4
	// Line 1540, Address: 0x1448b8, Func Offset: 0x8
	// Line 1544, Address: 0x1448bc, Func Offset: 0xc
	// Line 1540, Address: 0x1448c0, Func Offset: 0x10
	// Line 1544, Address: 0x1448c4, Func Offset: 0x14
	// Line 1545, Address: 0x1448dc, Func Offset: 0x2c
	// Line 1546, Address: 0x1448e8, Func Offset: 0x38
	// Func End, Address: 0x1448f8, Func Offset: 0x48
}

// 
// Start address: 0x144900
void sgAnimeScaleCardinalInterp(void* sk, void* data, int n0, int n1, float u)
{
	float val[4];
	sgVectorCardinalKey* keys;
	// Line 1553, Address: 0x144900, Func Offset: 0
	// Line 1557, Address: 0x144904, Func Offset: 0x4
	// Line 1553, Address: 0x144908, Func Offset: 0x8
	// Line 1557, Address: 0x14490c, Func Offset: 0xc
	// Line 1553, Address: 0x144910, Func Offset: 0x10
	// Line 1557, Address: 0x144914, Func Offset: 0x14
	// Line 1558, Address: 0x14492c, Func Offset: 0x2c
	// Line 1559, Address: 0x144938, Func Offset: 0x38
	// Func End, Address: 0x144948, Func Offset: 0x48
}

// 
// Start address: 0x144950
void sgAnimeScaleLinearInterp(void* sk, void* data, int n0, int n1, float u)
{
	float val[4];
	sgVectorLinearKey* keys;
	// Line 1567, Address: 0x144950, Func Offset: 0
	// Line 1571, Address: 0x144954, Func Offset: 0x4
	// Line 1567, Address: 0x144958, Func Offset: 0x8
	// Line 1571, Address: 0x14495c, Func Offset: 0xc
	// Line 1567, Address: 0x144960, Func Offset: 0x10
	// Line 1571, Address: 0x144964, Func Offset: 0x14
	// Line 1572, Address: 0x14497c, Func Offset: 0x2c
	// Line 1573, Address: 0x144988, Func Offset: 0x38
	// Func End, Address: 0x144998, Func Offset: 0x48
}

// 
// Start address: 0x1449a0
void sgAnimePositionS4HermiteInterp(void* sk, void* data, int n0, int n1, float u)
{
	float val[4];
	sgVectorS4HermiteKey* keys;
	// Line 1580, Address: 0x1449a0, Func Offset: 0
	// Line 1584, Address: 0x1449a4, Func Offset: 0x4
	// Line 1580, Address: 0x1449ac, Func Offset: 0xc
	// Line 1584, Address: 0x1449b0, Func Offset: 0x10
	// Line 1580, Address: 0x1449b8, Func Offset: 0x18
	// Line 1584, Address: 0x1449bc, Func Offset: 0x1c
	// Line 1585, Address: 0x1449dc, Func Offset: 0x3c
	// Line 1586, Address: 0x1449e8, Func Offset: 0x48
	// Func End, Address: 0x1449f8, Func Offset: 0x58
}

// 
// Start address: 0x144a00
void sgAnimePositionS4BezierInterp(void* sk, void* data, int n0, int n1, float u)
{
	float val[4];
	sgVectorS4BezierKey* keys;
	// Line 1593, Address: 0x144a00, Func Offset: 0
	// Line 1597, Address: 0x144a04, Func Offset: 0x4
	// Line 1593, Address: 0x144a0c, Func Offset: 0xc
	// Line 1597, Address: 0x144a10, Func Offset: 0x10
	// Line 1593, Address: 0x144a18, Func Offset: 0x18
	// Line 1597, Address: 0x144a1c, Func Offset: 0x1c
	// Line 1598, Address: 0x144a3c, Func Offset: 0x3c
	// Line 1599, Address: 0x144a48, Func Offset: 0x48
	// Func End, Address: 0x144a58, Func Offset: 0x58
}

// 
// Start address: 0x144a60
void sgAnimePositionS4CardinalInterp(void* sk, void* data, int n0, int n1, float u)
{
	float val[4];
	sgVectorS4CardinalKey* keys;
	// Line 1606, Address: 0x144a60, Func Offset: 0
	// Line 1610, Address: 0x144a64, Func Offset: 0x4
	// Line 1606, Address: 0x144a68, Func Offset: 0x8
	// Line 1610, Address: 0x144a6c, Func Offset: 0xc
	// Line 1606, Address: 0x144a70, Func Offset: 0x10
	// Line 1610, Address: 0x144a74, Func Offset: 0x14
	// Line 1611, Address: 0x144a8c, Func Offset: 0x2c
	// Line 1612, Address: 0x144a98, Func Offset: 0x38
	// Func End, Address: 0x144aa8, Func Offset: 0x48
}

// 
// Start address: 0x144ab0
void sgAnimePositionS4LinearInterp(void* sk, void* data, int n0, int n1, float u)
{
	float val[4];
	sgVectorS4LinearKey* keys;
	// Line 1620, Address: 0x144ab0, Func Offset: 0
	// Line 1624, Address: 0x144ab4, Func Offset: 0x4
	// Line 1620, Address: 0x144ab8, Func Offset: 0x8
	// Line 1624, Address: 0x144abc, Func Offset: 0xc
	// Line 1620, Address: 0x144ac0, Func Offset: 0x10
	// Line 1624, Address: 0x144ac4, Func Offset: 0x14
	// Line 1625, Address: 0x144adc, Func Offset: 0x2c
	// Line 1626, Address: 0x144ae8, Func Offset: 0x38
	// Func End, Address: 0x144af8, Func Offset: 0x48
}

// 
// Start address: 0x144b00
void sgAnimeRotQuatS15SquadInterp(void* sk, void* data, int n0, int n1, float u)
{
	float val[4];
	sgQuatS15SquadKey* keys;
	// Line 1633, Address: 0x144b00, Func Offset: 0
	// Line 1637, Address: 0x144b04, Func Offset: 0x4
	// Line 1633, Address: 0x144b0c, Func Offset: 0xc
	// Line 1637, Address: 0x144b10, Func Offset: 0x10
	// Line 1633, Address: 0x144b18, Func Offset: 0x18
	// Line 1637, Address: 0x144b1c, Func Offset: 0x1c
	// Line 1638, Address: 0x144b3c, Func Offset: 0x3c
	// Line 1639, Address: 0x144b48, Func Offset: 0x48
	// Func End, Address: 0x144b58, Func Offset: 0x58
}

// 
// Start address: 0x144b60
void sgAnimeRotQuatS15BoehmInterp(void* sk, void* data, int n0, int n1, float u)
{
	float val[4];
	sgQuatS15BoehmKey* keys;
	// Line 1644, Address: 0x144b60, Func Offset: 0
	// Line 1648, Address: 0x144b64, Func Offset: 0x4
	// Line 1644, Address: 0x144b68, Func Offset: 0x8
	// Line 1648, Address: 0x144b6c, Func Offset: 0xc
	// Line 1644, Address: 0x144b70, Func Offset: 0x10
	// Line 1648, Address: 0x144b74, Func Offset: 0x14
	// Line 1649, Address: 0x144b8c, Func Offset: 0x2c
	// Line 1650, Address: 0x144b98, Func Offset: 0x38
	// Func End, Address: 0x144ba8, Func Offset: 0x48
}

// 
// Start address: 0x144bb0
void sgAnimeRotQuatS15LinearInterp(void* sk, void* data, int n0, int n1, float u)
{
	float val[4];
	sgQuatS15LinearKey* keys;
	// Line 1656, Address: 0x144bb0, Func Offset: 0
	// Line 1660, Address: 0x144bb4, Func Offset: 0x4
	// Line 1656, Address: 0x144bb8, Func Offset: 0x8
	// Line 1660, Address: 0x144bbc, Func Offset: 0xc
	// Line 1656, Address: 0x144bc0, Func Offset: 0x10
	// Line 1660, Address: 0x144bc4, Func Offset: 0x14
	// Line 1661, Address: 0x144bdc, Func Offset: 0x2c
	// Line 1662, Address: 0x144be8, Func Offset: 0x38
	// Func End, Address: 0x144bf8, Func Offset: 0x48
}

// 
// Start address: 0x144c00
void sgAnimeScaleS12CardinalInterp(void* sk, void* data, int n0, int n1, float u)
{
	float val[4];
	sgVectorS12CardinalKey* keys;
	// Line 1669, Address: 0x144c00, Func Offset: 0
	// Line 1673, Address: 0x144c04, Func Offset: 0x4
	// Line 1669, Address: 0x144c08, Func Offset: 0x8
	// Line 1673, Address: 0x144c0c, Func Offset: 0xc
	// Line 1669, Address: 0x144c10, Func Offset: 0x10
	// Line 1673, Address: 0x144c14, Func Offset: 0x14
	// Line 1674, Address: 0x144c2c, Func Offset: 0x2c
	// Line 1675, Address: 0x144c38, Func Offset: 0x38
	// Func End, Address: 0x144c48, Func Offset: 0x48
}

// 
// Start address: 0x144c50
void sgAnimeScaleS12LinearInterp(void* sk, void* data, int n0, int n1, float u)
{
	float val[4];
	sgVectorS12LinearKey* keys;
	// Line 1683, Address: 0x144c50, Func Offset: 0
	// Line 1687, Address: 0x144c54, Func Offset: 0x4
	// Line 1683, Address: 0x144c58, Func Offset: 0x8
	// Line 1687, Address: 0x144c5c, Func Offset: 0xc
	// Line 1683, Address: 0x144c60, Func Offset: 0x10
	// Line 1687, Address: 0x144c64, Func Offset: 0x14
	// Line 1688, Address: 0x144c7c, Func Offset: 0x2c
	// Line 1689, Address: 0x144c88, Func Offset: 0x38
	// Func End, Address: 0x144c98, Func Offset: 0x48
}

// 
// Start address: 0x144ca0
void sgAnimeFloatCardinalInterp(void* out, void* data, int n0, int n1, float u)
{
	sgFloatCardinalKey* keys;
	// Line 1699, Address: 0x144ca0, Func Offset: 0
	// Func End, Address: 0x144cb8, Func Offset: 0x18
}

// 
// Start address: 0x144cc0
void sgAnimeFloatLinearInterp(void* out, void* data, int n0, int n1, float u)
{
	sgFloatLinearKey* keys;
	// Line 1710, Address: 0x144cc0, Func Offset: 0
	// Func End, Address: 0x144cd8, Func Offset: 0x18
}

// 
// Start address: 0x144ce0
void sgAnimeFloatVectorStepInterp(void* out, void* data, int n0, int n1, float u)
{
	sgVectorStepKey* keys;
	// Line 1722, Address: 0x144ce0, Func Offset: 0
	// Func End, Address: 0x144cf8, Func Offset: 0x18
}

