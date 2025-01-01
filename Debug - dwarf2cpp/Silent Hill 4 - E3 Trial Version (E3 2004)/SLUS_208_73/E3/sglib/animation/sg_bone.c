typedef struct sgBone;
typedef struct _anon0;


typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[4];
typedef float type_3[4];

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
	float q[4];
	float t[4];
};

float dummy_vector[4];
float sg_vector_unit_w[4];
float sg_matrix_unit[4][4];

sgBone* sgBoneChildTop(sgBone* bone);
sgBone* sgBoneNextSibling(sgBone* bone);
int sgBoneNChild(sgBone* bone);
sgBone* sgBoneChild(sgBone* bone, int no);
void sgBoneAddChild(sgBone* bone, sgBone* child);
void sgBoneRemoveChild(sgBone* bone, sgBone* child);
void sgBoneCutParent(sgBone* bone);
void ClearChildAbsTransFlag_Rev(sgBone* bone);
void ClearChildAbsRotTransFlag_Rev(sgBone* bone);
void sgBoneConstruct(sgBone* bone);
void sgBoneDestruct(sgBone* bone);
void sgBoneSetParent(sgBone* bone, sgBone* parent);
void sgBoneReplaceParent(sgBone* bone, sgBone* parent);
sgBone* sgBoneParent(sgBone* bone);
void sgBoneGetLocalTrans(sgBone* bone, float* v);
float* sgBoneLocalTrans(sgBone* bone);
void sgBoneSetLocalTrans(sgBone* bone, float* v);
void sgBoneGetLocalRot(sgBone* bone, float* q);
float* sgBoneLocalRot(sgBone* bone);
void sgBoneSetLocalRot(sgBone* bone, float* q);
void sgBoneGetLocalScale(sgBone* bone, float* sv);
float* sgBoneLocalScale(sgBone* bone);
void sgBoneSetLocalScale(sgBone* bone, float* sv);
void sgBoneClearLocalScale(sgBone* bone);
void sgBoneGetAbsTrans(sgBone* bone, float* v);
float* sgBoneAbsTrans(sgBone* bone);
void sgBoneSetAbsTrans(sgBone* bone, float* v);
void sgBoneGetAbsRot(sgBone* bone, float* q);
float* sgBoneAbsRot(sgBone* bone);
void sgBoneSetAbsRot(sgBone* bone, float* q);
void sgBoneGetAbsMatrix(sgBone* bone, float m[4]);
void sgBoneRotTransVector3(float* abs_v, sgBone* bone, float* local_v);
void sgBoneInverseVector3(float* local_v, sgBone* bone, float* abs_v);
void sgBoneCalcAbsoluteCoordinate(sgBone* bone);
void sgBoneCalcLocalCoordinate(sgBone* bone);
float sgBoneAnimeMixerRatio(sgBone* bone);
int sgBoneAnimeMixerCheck(sgBone* bone);
int sgBoneAnimeMixerAbsLerp(sgBone* bone);
void sgBoneLocalLerp(sgBone* ab, sgBone* a, sgBone* b, float ratio);
void sgBoneAbsLerp(sgBone* ab, sgBone* a, sgBone* b, float ratio);
void sgBoneCopy(sgBone* dst, sgBone* src);

// 
// Start address: 0x145710
sgBone* sgBoneChildTop(sgBone* bone)
{
	// Line 83, Address: 0x145710, Func Offset: 0
	// Func End, Address: 0x145718, Func Offset: 0x8
}

// 
// Start address: 0x145720
sgBone* sgBoneNextSibling(sgBone* bone)
{
	// Line 93, Address: 0x145720, Func Offset: 0
	// Func End, Address: 0x145728, Func Offset: 0x8
}

// 
// Start address: 0x145730
int sgBoneNChild(sgBone* bone)
{
	int n;
	sgBone* bp;
	// Line 97, Address: 0x145730, Func Offset: 0
	// Line 99, Address: 0x145738, Func Offset: 0x8
	// Line 100, Address: 0x145740, Func Offset: 0x10
	// Line 103, Address: 0x145768, Func Offset: 0x38
	// Line 102, Address: 0x14576c, Func Offset: 0x3c
	// Line 103, Address: 0x145770, Func Offset: 0x40
	// Func End, Address: 0x145778, Func Offset: 0x48
}

// 
// Start address: 0x145780
sgBone* sgBoneChild(sgBone* bone, int no)
{
	int n;
	sgBone* bp;
	// Line 108, Address: 0x145780, Func Offset: 0
	// Line 110, Address: 0x145788, Func Offset: 0x8
	// Line 111, Address: 0x145790, Func Offset: 0x10
	// Line 112, Address: 0x14579c, Func Offset: 0x1c
	// Line 115, Address: 0x1457c0, Func Offset: 0x40
	// Func End, Address: 0x1457cc, Func Offset: 0x4c
}

// 
// Start address: 0x1457d0
void sgBoneAddChild(sgBone* bone, sgBone* child)
{
	// Line 127, Address: 0x1457d0, Func Offset: 0
	// Line 129, Address: 0x1457d8, Func Offset: 0x8
	// Func End, Address: 0x1457e0, Func Offset: 0x10
}

// 
// Start address: 0x1457e0
void sgBoneRemoveChild(sgBone* bone, sgBone* child)
{
	sgBone* bp;
	sgBone* next_child;
	// Line 148, Address: 0x1457e0, Func Offset: 0
	// Line 149, Address: 0x1457e4, Func Offset: 0x4
	// Line 150, Address: 0x1457ec, Func Offset: 0xc
	// Line 152, Address: 0x1457f4, Func Offset: 0x14
	// Line 154, Address: 0x1457fc, Func Offset: 0x1c
	// Line 155, Address: 0x145800, Func Offset: 0x20
	// Line 156, Address: 0x145804, Func Offset: 0x24
	// Line 157, Address: 0x14580c, Func Offset: 0x2c
	// Line 159, Address: 0x145814, Func Offset: 0x34
	// Line 161, Address: 0x14581c, Func Offset: 0x3c
	// Line 163, Address: 0x145830, Func Offset: 0x50
	// Func End, Address: 0x145838, Func Offset: 0x58
}

// 
// Start address: 0x145840
void sgBoneCutParent(sgBone* bone)
{
	sgBone* parent;
	// Line 171, Address: 0x145840, Func Offset: 0
	// Line 176, Address: 0x145850, Func Offset: 0x10
	// Line 180, Address: 0x145858, Func Offset: 0x18
	// Line 182, Address: 0x145860, Func Offset: 0x20
	// Line 183, Address: 0x14586c, Func Offset: 0x2c
	// Line 203, Address: 0x145874, Func Offset: 0x34
	// Line 205, Address: 0x14587c, Func Offset: 0x3c
	// Line 206, Address: 0x145880, Func Offset: 0x40
	// Line 208, Address: 0x14588c, Func Offset: 0x4c
	// Func End, Address: 0x1458a0, Func Offset: 0x60
}

// 
// Start address: 0x1458a0
void ClearChildAbsTransFlag_Rev(sgBone* bone)
{
	sgBone* child;
	// Line 212, Address: 0x1458a0, Func Offset: 0
	// Line 214, Address: 0x1458a8, Func Offset: 0x8
	// Line 215, Address: 0x1458b4, Func Offset: 0x14
	// Line 216, Address: 0x1458c4, Func Offset: 0x24
	// Line 217, Address: 0x1458d8, Func Offset: 0x38
	// Line 218, Address: 0x1458dc, Func Offset: 0x3c
	// Line 221, Address: 0x1458e8, Func Offset: 0x48
	// Line 222, Address: 0x145900, Func Offset: 0x60
	// Func End, Address: 0x145910, Func Offset: 0x70
}

// 
// Start address: 0x145910
void ClearChildAbsRotTransFlag_Rev(sgBone* bone)
{
	sgBone* child;
	int delete_flag;
	// Line 226, Address: 0x145910, Func Offset: 0
	// Line 228, Address: 0x145918, Func Offset: 0x8
	// Line 229, Address: 0x145924, Func Offset: 0x14
	// Line 230, Address: 0x145930, Func Offset: 0x20
	// Line 231, Address: 0x145934, Func Offset: 0x24
	// Line 232, Address: 0x145940, Func Offset: 0x30
	// Line 233, Address: 0x145948, Func Offset: 0x38
	// Line 234, Address: 0x145954, Func Offset: 0x44
	// Line 235, Address: 0x145958, Func Offset: 0x48
	// Line 236, Address: 0x145960, Func Offset: 0x50
	// Line 237, Address: 0x14596c, Func Offset: 0x5c
	// Line 236, Address: 0x145970, Func Offset: 0x60
	// Line 237, Address: 0x145974, Func Offset: 0x64
	// Line 239, Address: 0x14597c, Func Offset: 0x6c
	// Line 240, Address: 0x145998, Func Offset: 0x88
	// Func End, Address: 0x1459a8, Func Offset: 0x98
}

// 
// Start address: 0x1459b0
void sgBoneConstruct(sgBone* bone)
{
	// Line 253, Address: 0x1459b0, Func Offset: 0
	// Line 254, Address: 0x1459c0, Func Offset: 0x10
	// Line 255, Address: 0x1459c8, Func Offset: 0x18
	// Line 256, Address: 0x1459d0, Func Offset: 0x20
	// Line 260, Address: 0x1459d8, Func Offset: 0x28
	// Line 257, Address: 0x1459dc, Func Offset: 0x2c
	// Line 258, Address: 0x1459e0, Func Offset: 0x30
	// Line 259, Address: 0x1459e4, Func Offset: 0x34
	// Line 260, Address: 0x1459e8, Func Offset: 0x38
	// Line 261, Address: 0x1459ec, Func Offset: 0x3c
	// Line 262, Address: 0x1459f0, Func Offset: 0x40
	// Line 263, Address: 0x1459fc, Func Offset: 0x4c
	// Line 264, Address: 0x145a08, Func Offset: 0x58
	// Line 265, Address: 0x145a14, Func Offset: 0x64
	// Line 266, Address: 0x145a1c, Func Offset: 0x6c
	// Func End, Address: 0x145a24, Func Offset: 0x74
}

// 
// Start address: 0x145a30
void sgBoneDestruct(sgBone* bone)
{
	sgBone* child;
	sgBone* sibling;
	sgBone* parent;
	// Line 273, Address: 0x145a30, Func Offset: 0
	// Line 277, Address: 0x145a40, Func Offset: 0x10
	// Line 279, Address: 0x145a4c, Func Offset: 0x1c
	// Line 281, Address: 0x145a54, Func Offset: 0x24
	// Line 282, Address: 0x145a60, Func Offset: 0x30
	// Line 283, Address: 0x145a68, Func Offset: 0x38
	// Line 284, Address: 0x145a74, Func Offset: 0x44
	// Line 286, Address: 0x145a7c, Func Offset: 0x4c
	// Line 287, Address: 0x145a80, Func Offset: 0x50
	// Line 289, Address: 0x145a88, Func Offset: 0x58
	// Func End, Address: 0x145a9c, Func Offset: 0x6c
}

// 
// Start address: 0x145aa0
void sgBoneSetParent(sgBone* bone, sgBone* parent)
{
	// Line 304, Address: 0x145aa0, Func Offset: 0
	// Line 305, Address: 0x145ab4, Func Offset: 0x14
	// Line 309, Address: 0x145abc, Func Offset: 0x1c
	// Line 311, Address: 0x145ac4, Func Offset: 0x24
	// Line 318, Address: 0x145acc, Func Offset: 0x2c
	// Line 320, Address: 0x145ad4, Func Offset: 0x34
	// Line 324, Address: 0x145ae0, Func Offset: 0x40
	// Line 325, Address: 0x145ae8, Func Offset: 0x48
	// Func End, Address: 0x145afc, Func Offset: 0x5c
}

// 
// Start address: 0x145b00
void sgBoneReplaceParent(sgBone* bone, sgBone* parent)
{
	sgBone* old_parent;
	// Line 342, Address: 0x145b00, Func Offset: 0
	// Line 344, Address: 0x145b14, Func Offset: 0x14
	// Line 350, Address: 0x145b1c, Func Offset: 0x1c
	// Line 352, Address: 0x145b24, Func Offset: 0x24
	// Line 353, Address: 0x145b30, Func Offset: 0x30
	// Line 354, Address: 0x145b38, Func Offset: 0x38
	// Line 356, Address: 0x145b40, Func Offset: 0x40
	// Line 357, Address: 0x145b44, Func Offset: 0x44
	// Line 356, Address: 0x145b48, Func Offset: 0x48
	// Line 357, Address: 0x145b4c, Func Offset: 0x4c
	// Line 360, Address: 0x145b54, Func Offset: 0x54
	// Line 364, Address: 0x145b5c, Func Offset: 0x5c
	// Line 366, Address: 0x145b68, Func Offset: 0x68
	// Func End, Address: 0x145b7c, Func Offset: 0x7c
}

// 
// Start address: 0x145b80
sgBone* sgBoneParent(sgBone* bone)
{
	// Line 375, Address: 0x145b80, Func Offset: 0
	// Line 377, Address: 0x145b8c, Func Offset: 0xc
	// Func End, Address: 0x145b94, Func Offset: 0x14
}

// 
// Start address: 0x145ba0
void sgBoneGetLocalTrans(sgBone* bone, float* v)
{
	// Line 387, Address: 0x145ba0, Func Offset: 0
	// Line 390, Address: 0x145ba8, Func Offset: 0x8
	// Line 391, Address: 0x145bb0, Func Offset: 0x10
	// Func End, Address: 0x145bb8, Func Offset: 0x18
}

// 
// Start address: 0x145bc0
float* sgBoneLocalTrans(sgBone* bone)
{
	// Line 400, Address: 0x145bc0, Func Offset: 0
	// Line 403, Address: 0x145bd4, Func Offset: 0x14
	// Func End, Address: 0x145bdc, Func Offset: 0x1c
}

// 
// Start address: 0x145be0
void sgBoneSetLocalTrans(sgBone* bone, float* v)
{
	// Line 412, Address: 0x145be0, Func Offset: 0
	// Line 413, Address: 0x145be4, Func Offset: 0x4
	// Line 415, Address: 0x145bec, Func Offset: 0xc
	// Line 417, Address: 0x145bf4, Func Offset: 0x14
	// Line 418, Address: 0x145c00, Func Offset: 0x20
	// Line 420, Address: 0x145c08, Func Offset: 0x28
	// Line 422, Address: 0x145c10, Func Offset: 0x30
	// Func End, Address: 0x145c1c, Func Offset: 0x3c
}

// 
// Start address: 0x145c20
void sgBoneGetLocalRot(sgBone* bone, float* q)
{
	// Line 430, Address: 0x145c20, Func Offset: 0
	// Line 431, Address: 0x145c28, Func Offset: 0x8
	// Line 434, Address: 0x145c30, Func Offset: 0x10
	// Line 435, Address: 0x145c3c, Func Offset: 0x1c
	// Func End, Address: 0x145c4c, Func Offset: 0x2c
}

// 
// Start address: 0x145c50
float* sgBoneLocalRot(sgBone* bone)
{
	// Line 444, Address: 0x145c50, Func Offset: 0
	// Line 447, Address: 0x145c6c, Func Offset: 0x1c
	// Func End, Address: 0x145c74, Func Offset: 0x24
}

// 
// Start address: 0x145c80
void sgBoneSetLocalRot(sgBone* bone, float* q)
{
	// Line 456, Address: 0x145c80, Func Offset: 0
	// Line 457, Address: 0x145c90, Func Offset: 0x10
	// Line 459, Address: 0x145c98, Func Offset: 0x18
	// Line 461, Address: 0x145ca0, Func Offset: 0x20
	// Line 464, Address: 0x145ca4, Func Offset: 0x24
	// Line 461, Address: 0x145ca8, Func Offset: 0x28
	// Line 462, Address: 0x145cb0, Func Offset: 0x30
	// Line 464, Address: 0x145cb8, Func Offset: 0x38
	// Line 466, Address: 0x145cc0, Func Offset: 0x40
	// Func End, Address: 0x145cd0, Func Offset: 0x50
}

// 
// Start address: 0x145cd0
void sgBoneGetLocalScale(sgBone* bone, float* sv)
{
	// Line 479, Address: 0x145cd0, Func Offset: 0
	// Line 482, Address: 0x145cd8, Func Offset: 0x8
	// Line 483, Address: 0x145ce0, Func Offset: 0x10
	// Func End, Address: 0x145ce8, Func Offset: 0x18
}

// 
// Start address: 0x145cf0
float* sgBoneLocalScale(sgBone* bone)
{
	// Line 495, Address: 0x145cf0, Func Offset: 0
	// Line 498, Address: 0x145d04, Func Offset: 0x14
	// Func End, Address: 0x145d0c, Func Offset: 0x1c
}

// 
// Start address: 0x145d10
void sgBoneSetLocalScale(sgBone* bone, float* sv)
{
	// Line 508, Address: 0x145d10, Func Offset: 0
	// Line 509, Address: 0x145d14, Func Offset: 0x4
	// Line 511, Address: 0x145d1c, Func Offset: 0xc
	// Line 512, Address: 0x145d24, Func Offset: 0x14
	// Line 513, Address: 0x145d30, Func Offset: 0x20
	// Line 518, Address: 0x145d38, Func Offset: 0x28
	// Line 520, Address: 0x145d40, Func Offset: 0x30
	// Func End, Address: 0x145d4c, Func Offset: 0x3c
}

// 
// Start address: 0x145d50
void sgBoneClearLocalScale(sgBone* bone)
{
	// Line 526, Address: 0x145d50, Func Offset: 0
	// Line 527, Address: 0x145d54, Func Offset: 0x4
	// Line 529, Address: 0x145d5c, Func Offset: 0xc
	// Line 530, Address: 0x145d68, Func Offset: 0x18
	// Line 532, Address: 0x145d70, Func Offset: 0x20
	// Line 534, Address: 0x145d78, Func Offset: 0x28
	// Func End, Address: 0x145d84, Func Offset: 0x34
}

// 
// Start address: 0x145d90
void sgBoneGetAbsTrans(sgBone* bone, float* v)
{
	// Line 543, Address: 0x145d90, Func Offset: 0
	// Line 544, Address: 0x145da4, Func Offset: 0x14
	// Line 548, Address: 0x145dac, Func Offset: 0x1c
	// Line 549, Address: 0x145dc0, Func Offset: 0x30
	// Line 551, Address: 0x145dc8, Func Offset: 0x38
	// Line 552, Address: 0x145dd0, Func Offset: 0x40
	// Func End, Address: 0x145de4, Func Offset: 0x54
}

// 
// Start address: 0x145df0
float* sgBoneAbsTrans(sgBone* bone)
{
	// Line 559, Address: 0x145df0, Func Offset: 0
	// Line 560, Address: 0x145e00, Func Offset: 0x10
	// Line 561, Address: 0x145e08, Func Offset: 0x18
	// Line 564, Address: 0x145e10, Func Offset: 0x20
	// Line 565, Address: 0x145e24, Func Offset: 0x34
	// Line 567, Address: 0x145e30, Func Offset: 0x40
	// Line 568, Address: 0x145e38, Func Offset: 0x48
	// Func End, Address: 0x145e48, Func Offset: 0x58
}

// 
// Start address: 0x145e50
void sgBoneSetAbsTrans(sgBone* bone, float* v)
{
	// Line 582, Address: 0x145e50, Func Offset: 0
	// Line 583, Address: 0x145e54, Func Offset: 0x4
	// Line 586, Address: 0x145e5c, Func Offset: 0xc
	// Line 588, Address: 0x145e64, Func Offset: 0x14
	// Line 589, Address: 0x145e70, Func Offset: 0x20
	// Line 593, Address: 0x145e78, Func Offset: 0x28
	// Line 595, Address: 0x145e80, Func Offset: 0x30
	// Func End, Address: 0x145e8c, Func Offset: 0x3c
}

// 
// Start address: 0x145e90
void sgBoneGetAbsRot(sgBone* bone, float* q)
{
	// Line 604, Address: 0x145e90, Func Offset: 0
	// Line 605, Address: 0x145ea4, Func Offset: 0x14
	// Line 608, Address: 0x145eac, Func Offset: 0x1c
	// Line 609, Address: 0x145ebc, Func Offset: 0x2c
	// Line 611, Address: 0x145ec8, Func Offset: 0x38
	// Line 612, Address: 0x145ed4, Func Offset: 0x44
	// Func End, Address: 0x145eec, Func Offset: 0x5c
}

// 
// Start address: 0x145ef0
float* sgBoneAbsRot(sgBone* bone)
{
	// Line 619, Address: 0x145ef0, Func Offset: 0
	// Line 620, Address: 0x145f00, Func Offset: 0x10
	// Line 621, Address: 0x145f08, Func Offset: 0x18
	// Line 623, Address: 0x145f10, Func Offset: 0x20
	// Line 624, Address: 0x145f20, Func Offset: 0x30
	// Line 626, Address: 0x145f28, Func Offset: 0x38
	// Line 627, Address: 0x145f30, Func Offset: 0x40
	// Func End, Address: 0x145f40, Func Offset: 0x50
}

// 
// Start address: 0x145f40
void sgBoneSetAbsRot(sgBone* bone, float* q)
{
	// Line 641, Address: 0x145f40, Func Offset: 0
	// Line 642, Address: 0x145f50, Func Offset: 0x10
	// Line 645, Address: 0x145f58, Func Offset: 0x18
	// Line 647, Address: 0x145f60, Func Offset: 0x20
	// Line 651, Address: 0x145f64, Func Offset: 0x24
	// Line 647, Address: 0x145f68, Func Offset: 0x28
	// Line 648, Address: 0x145f70, Func Offset: 0x30
	// Line 651, Address: 0x145f78, Func Offset: 0x38
	// Line 653, Address: 0x145f80, Func Offset: 0x40
	// Func End, Address: 0x145f90, Func Offset: 0x50
}

// 
// Start address: 0x145f90
void sgBoneGetAbsMatrix(sgBone* bone, float m[4])
{
	float q[4];
	float t[4];
	float m_scale[4][4];
	float s[4];
	// Line 663, Address: 0x145f90, Func Offset: 0
	// Line 666, Address: 0x145fa8, Func Offset: 0x18
	// Line 667, Address: 0x145fb0, Func Offset: 0x20
	// Line 668, Address: 0x145fbc, Func Offset: 0x2c
	// Line 669, Address: 0x145fc8, Func Offset: 0x38
	// Line 670, Address: 0x145fd4, Func Offset: 0x44
	// Line 671, Address: 0x145fdc, Func Offset: 0x4c
	// Line 674, Address: 0x145fec, Func Offset: 0x5c
	// Line 675, Address: 0x145ff4, Func Offset: 0x64
	// Line 676, Address: 0x146008, Func Offset: 0x78
	// Line 677, Address: 0x14607c, Func Offset: 0xec
	// Line 678, Address: 0x146080, Func Offset: 0xf0
	// Func End, Address: 0x146094, Func Offset: 0x104
}

// 
// Start address: 0x1460a0
void sgBoneRotTransVector3(float* abs_v, sgBone* bone, float* local_v)
{
	float v[4];
	float m[4][4];
	// Line 689, Address: 0x1460a0, Func Offset: 0
	// Line 691, Address: 0x1460bc, Func Offset: 0x1c
	// Line 692, Address: 0x1460c4, Func Offset: 0x24
	// Line 693, Address: 0x1460c8, Func Offset: 0x28
	// Line 696, Address: 0x1460d0, Func Offset: 0x30
	// Line 697, Address: 0x1460e4, Func Offset: 0x44
	// Line 698, Address: 0x1460f0, Func Offset: 0x50
	// Line 699, Address: 0x1460fc, Func Offset: 0x5c
	// Line 701, Address: 0x14610c, Func Offset: 0x6c
	// Line 702, Address: 0x146118, Func Offset: 0x78
	// Line 703, Address: 0x146148, Func Offset: 0xa8
	// Line 704, Address: 0x146150, Func Offset: 0xb0
	// Line 705, Address: 0x14615c, Func Offset: 0xbc
	// Line 706, Address: 0x146160, Func Offset: 0xc0
	// Func End, Address: 0x146178, Func Offset: 0xd8
}

// 
// Start address: 0x146180
void sgBoneInverseVector3(float* local_v, sgBone* bone, float* abs_v)
{
	float v[4];
	float q[4];
	float m[4][4];
	// Line 718, Address: 0x146180, Func Offset: 0
	// Line 722, Address: 0x14619c, Func Offset: 0x1c
	// Line 723, Address: 0x1461a4, Func Offset: 0x24
	// Line 724, Address: 0x1461a8, Func Offset: 0x28
	// Line 727, Address: 0x1461b0, Func Offset: 0x30
	// Line 728, Address: 0x1461c4, Func Offset: 0x44
	// Line 730, Address: 0x1461d0, Func Offset: 0x50
	// Line 732, Address: 0x1461e0, Func Offset: 0x60
	// Line 733, Address: 0x1461ec, Func Offset: 0x6c
	// Line 734, Address: 0x1461f8, Func Offset: 0x78
	// Line 735, Address: 0x146204, Func Offset: 0x84
	// Line 736, Address: 0x146230, Func Offset: 0xb0
	// Line 737, Address: 0x146238, Func Offset: 0xb8
	// Line 738, Address: 0x146254, Func Offset: 0xd4
	// Line 739, Address: 0x146258, Func Offset: 0xd8
	// Line 740, Address: 0x146268, Func Offset: 0xe8
	// Line 742, Address: 0x146278, Func Offset: 0xf8
	// Func End, Address: 0x146290, Func Offset: 0x110
}

// 
// Start address: 0x146290
void sgBoneCalcAbsoluteCoordinate(sgBone* bone)
{
	sgBone* parent;
	int rot_renew;
	int pos_renew;
	float m[4][4];
	sgBone* child;
	int n;
	// Line 757, Address: 0x146290, Func Offset: 0
	// Line 759, Address: 0x1462ac, Func Offset: 0x1c
	// Line 762, Address: 0x1462b0, Func Offset: 0x20
	// Line 765, Address: 0x1462b8, Func Offset: 0x28
	// Line 768, Address: 0x1462bc, Func Offset: 0x2c
	// Line 769, Address: 0x1462d8, Func Offset: 0x48
	// Line 785, Address: 0x1462e0, Func Offset: 0x50
	// Line 786, Address: 0x1462e8, Func Offset: 0x58
	// Line 787, Address: 0x146304, Func Offset: 0x74
	// Line 788, Address: 0x146314, Func Offset: 0x84
	// Line 791, Address: 0x146318, Func Offset: 0x88
	// Line 792, Address: 0x146334, Func Offset: 0xa4
	// Line 795, Address: 0x146344, Func Offset: 0xb4
	// Line 796, Address: 0x146350, Func Offset: 0xc0
	// Line 797, Address: 0x146384, Func Offset: 0xf4
	// Line 798, Address: 0x146390, Func Offset: 0x100
	// Line 804, Address: 0x1463a0, Func Offset: 0x110
	// Line 805, Address: 0x1463a8, Func Offset: 0x118
	// Line 806, Address: 0x1463b8, Func Offset: 0x128
	// Line 807, Address: 0x1463c4, Func Offset: 0x134
	// Line 810, Address: 0x1463c8, Func Offset: 0x138
	// Line 811, Address: 0x1463d8, Func Offset: 0x148
	// Line 812, Address: 0x1463e8, Func Offset: 0x158
	// Line 814, Address: 0x1463ec, Func Offset: 0x15c
	// Line 815, Address: 0x1463f0, Func Offset: 0x160
	// Line 821, Address: 0x1463f4, Func Offset: 0x164
	// Line 815, Address: 0x1463f8, Func Offset: 0x168
	// Line 821, Address: 0x1463fc, Func Offset: 0x16c
	// Line 822, Address: 0x146408, Func Offset: 0x178
	// Line 823, Address: 0x146410, Func Offset: 0x180
	// Line 824, Address: 0x146418, Func Offset: 0x188
	// Line 825, Address: 0x146428, Func Offset: 0x198
	// Line 826, Address: 0x146430, Func Offset: 0x1a0
	// Line 827, Address: 0x146440, Func Offset: 0x1b0
	// Line 828, Address: 0x146444, Func Offset: 0x1b4
	// Line 829, Address: 0x146458, Func Offset: 0x1c8
	// Line 830, Address: 0x146468, Func Offset: 0x1d8
	// Line 832, Address: 0x146470, Func Offset: 0x1e0
	// Line 835, Address: 0x14648c, Func Offset: 0x1fc
	// Func End, Address: 0x1464ac, Func Offset: 0x21c
}

// 
// Start address: 0x1464b0
void sgBoneCalcLocalCoordinate(sgBone* bone)
{
	sgBone* parent;
	_anon0 qt;
	float m_scale[4][4];
	float s[4];
	// Line 852, Address: 0x1464b0, Func Offset: 0
	// Line 854, Address: 0x1464c0, Func Offset: 0x10
	// Line 857, Address: 0x1464c8, Func Offset: 0x18
	// Line 861, Address: 0x1464dc, Func Offset: 0x2c
	// Line 863, Address: 0x1464e0, Func Offset: 0x30
	// Line 864, Address: 0x1464fc, Func Offset: 0x4c
	// Line 866, Address: 0x146508, Func Offset: 0x58
	// Line 867, Address: 0x146510, Func Offset: 0x60
	// Line 868, Address: 0x146528, Func Offset: 0x78
	// Line 869, Address: 0x146530, Func Offset: 0x80
	// Line 870, Address: 0x14653c, Func Offset: 0x8c
	// Line 871, Address: 0x146540, Func Offset: 0x90
	// Line 872, Address: 0x146558, Func Offset: 0xa8
	// Line 873, Address: 0x146560, Func Offset: 0xb0
	// Line 875, Address: 0x146568, Func Offset: 0xb8
	// Line 879, Address: 0x146570, Func Offset: 0xc0
	// Line 880, Address: 0x14657c, Func Offset: 0xcc
	// Line 882, Address: 0x14658c, Func Offset: 0xdc
	// Line 883, Address: 0x1465a4, Func Offset: 0xf4
	// Line 884, Address: 0x1465ac, Func Offset: 0xfc
	// Line 886, Address: 0x1465b8, Func Offset: 0x108
	// Line 887, Address: 0x1465d0, Func Offset: 0x120
	// Line 888, Address: 0x1465dc, Func Offset: 0x12c
	// Line 891, Address: 0x1465ec, Func Offset: 0x13c
	// Line 892, Address: 0x1465f4, Func Offset: 0x144
	// Line 893, Address: 0x1465fc, Func Offset: 0x14c
	// Line 895, Address: 0x146600, Func Offset: 0x150
	// Line 894, Address: 0x146604, Func Offset: 0x154
	// Line 895, Address: 0x146608, Func Offset: 0x158
	// Line 892, Address: 0x14660c, Func Offset: 0x15c
	// Line 895, Address: 0x146610, Func Offset: 0x160
	// Line 892, Address: 0x146618, Func Offset: 0x168
	// Line 893, Address: 0x14661c, Func Offset: 0x16c
	// Line 894, Address: 0x146620, Func Offset: 0x170
	// Line 892, Address: 0x146624, Func Offset: 0x174
	// Line 894, Address: 0x146628, Func Offset: 0x178
	// Line 893, Address: 0x14662c, Func Offset: 0x17c
	// Line 895, Address: 0x146630, Func Offset: 0x180
	// Line 896, Address: 0x146638, Func Offset: 0x188
	// Line 898, Address: 0x146668, Func Offset: 0x1b8
	// Line 900, Address: 0x146674, Func Offset: 0x1c4
	// Line 901, Address: 0x146678, Func Offset: 0x1c8
	// Func End, Address: 0x14668c, Func Offset: 0x1dc
}

// 
// Start address: 0x146690
float sgBoneAnimeMixerRatio(sgBone* bone)
{
	// Line 976, Address: 0x146690, Func Offset: 0
	// Func End, Address: 0x146698, Func Offset: 0x8
}

// 
// Start address: 0x1466a0
int sgBoneAnimeMixerCheck(sgBone* bone)
{
	// Line 987, Address: 0x1466a0, Func Offset: 0
	// Line 988, Address: 0x1466a4, Func Offset: 0x4
	// Func End, Address: 0x1466ac, Func Offset: 0xc
}

// 
// Start address: 0x1466b0
int sgBoneAnimeMixerAbsLerp(sgBone* bone)
{
	// Line 1003, Address: 0x1466b0, Func Offset: 0
	// Line 1004, Address: 0x1466b4, Func Offset: 0x4
	// Func End, Address: 0x1466bc, Func Offset: 0xc
}

// 
// Start address: 0x1466c0
void sgBoneLocalLerp(sgBone* ab, sgBone* a, sgBone* b, float ratio)
{
	float q[4];
	float t[4];
	// Line 1016, Address: 0x1466c0, Func Offset: 0
	// Line 1022, Address: 0x1466e8, Func Offset: 0x28
	// Line 1023, Address: 0x1466f0, Func Offset: 0x30
	// Line 1024, Address: 0x146724, Func Offset: 0x64
	// Line 1025, Address: 0x146730, Func Offset: 0x70
	// Line 1027, Address: 0x14673c, Func Offset: 0x7c
	// Line 1028, Address: 0x14675c, Func Offset: 0x9c
	// Line 1029, Address: 0x14678c, Func Offset: 0xcc
	// Line 1031, Address: 0x146798, Func Offset: 0xd8
	// Func End, Address: 0x1467b4, Func Offset: 0xf4
}

// 
// Start address: 0x1467c0
void sgBoneAbsLerp(sgBone* ab, sgBone* a, sgBone* b, float ratio)
{
	float q[4];
	float t[4];
	// Line 1043, Address: 0x1467c0, Func Offset: 0
	// Line 1049, Address: 0x1467ec, Func Offset: 0x2c
	// Line 1050, Address: 0x146814, Func Offset: 0x54
	// Line 1051, Address: 0x146854, Func Offset: 0x94
	// Line 1052, Address: 0x146860, Func Offset: 0xa0
	// Line 1056, Address: 0x14686c, Func Offset: 0xac
	// Line 1057, Address: 0x14688c, Func Offset: 0xcc
	// Line 1058, Address: 0x1468bc, Func Offset: 0xfc
	// Line 1060, Address: 0x1468c8, Func Offset: 0x108
	// Func End, Address: 0x1468e8, Func Offset: 0x128
}

// 
// Start address: 0x1468f0
void sgBoneCopy(sgBone* dst, sgBone* src)
{
	// Line 1071, Address: 0x1468f0, Func Offset: 0
	// Line 1075, Address: 0x146904, Func Offset: 0x14
	// Line 1076, Address: 0x146918, Func Offset: 0x28
	// Line 1079, Address: 0x146924, Func Offset: 0x34
	// Line 1080, Address: 0x146930, Func Offset: 0x40
	// Line 1081, Address: 0x146940, Func Offset: 0x50
	// Line 1082, Address: 0x14694c, Func Offset: 0x5c
	// Line 1084, Address: 0x14695c, Func Offset: 0x6c
	// Line 1085, Address: 0x146968, Func Offset: 0x78
	// Line 1086, Address: 0x146980, Func Offset: 0x90
	// Line 1087, Address: 0x14698c, Func Offset: 0x9c
	// Line 1089, Address: 0x14699c, Func Offset: 0xac
	// Line 1090, Address: 0x1469b0, Func Offset: 0xc0
	// Line 1092, Address: 0x1469b8, Func Offset: 0xc8
	// Line 1093, Address: 0x1469c0, Func Offset: 0xd0
	// Func End, Address: 0x1469d4, Func Offset: 0xe4
}

