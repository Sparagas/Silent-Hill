typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _sfAsNode;
typedef struct _anon3;
typedef union _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef enum _enum : unsigned char;

typedef int(*type_0)(_sfAsNode*, _sfAsNode*, void*, int);
typedef float(*type_5)(_sfAsNode*, _sfAsNode*, void*, int);
typedef int(*type_7)(_sfAsNode*, _sfAsNode*, void*, int);
typedef float(*type_8)(_sfAsNode*, _sfAsNode*, void*, int);
typedef int(*type_9)(_sfAsNode*, _sfAsNode*, void*, int);
typedef int(*type_10)(_sfAsNode*, _sfAsNode*, void*, int);
typedef int(*type_11)(_sfAsNode*, _sfAsNode*, void*, int);
typedef float(*type_12)(_sfAsNode*, _sfAsNode*, void*, int);
typedef int(*type_13)(_sfAsNode*, _sfAsNode*, void*, int);
typedef float(*type_14)(_sfAsNode*, _sfAsNode*, void*, int);

typedef float type_1[4];
typedef unsigned char type_2[64];
typedef unsigned char type_3[64];
typedef char type_4[2];
typedef _anon4 type_6[32];

struct _anon0
{
	_anon4 path[32];
	int path_num;
	_enum type;
};

struct _anon1
{
	int vertex_num;
	void* top;
	_anon4* vertex_data;
	int* link_ofs;
};

struct _anon2
{
	int count;
};

struct _sfAsNode
{
	unsigned char data[64];
	float CostFromStart;
	float CostToGoal;
	float TotalCost;
	unsigned char work[64];
	_sfAsNode* Parent;
	_sfAsNode* next;
	unsigned int id;
};

struct _anon3
{
	void* data;
	int data_size;
	_sfAsNode start_state;
	_sfAsNode goal_state;
	float(*GetEstimatedCost)(_sfAsNode*, _sfAsNode*, void*, int);
	float(*GetCost)(_sfAsNode*, _sfAsNode*, void*, int);
	int(*GetNext)(_sfAsNode*, _sfAsNode*, void*, int);
	int(*Compare)(_sfAsNode*, _sfAsNode*, void*, int);
	int(*IsGoal)(_sfAsNode*, _sfAsNode*, void*, int);
	_sfAsNode* found_path;
	_anon6 list_mng;
};

union _anon4
{
	float vec[4];
	_anon7 val;
};

struct _anon5
{
	int file_size;
	int vertex_num;
	int vertex_data_offset;
	int link_data_offset;
};

struct _anon6
{
	_sfAsNode* open_top;
	unsigned int open_num;
	_sfAsNode* closed_top;
	unsigned int closed_num;
	unsigned int push_cnt;
};

struct _anon7
{
	float x;
	float y;
	float z;
	char scene[2];
	char attr;
	char padding;
};

struct _anon8
{
	float abcd[4];
};

struct _anon9
{
	float start[4];
	float end[4];
};

enum _enum : unsigned char
{
	SF_STAGE_PATH,
	SF_DETAIL_PATH,
	SF_GHOST_POINT,
	SF_WARP_POINT,
	SF_PATH_TYPE_NUM,
	SF_BLUE_PATH = 0,
	SF_RED_PATH,
	SF_GREEN_POINT,
	SF_YELLOW_POINT
};

_anon1 yellow_point;
_anon1 green_point;
_anon1 red_path;
_anon1 blue_path;
float sg_vector_zero[4];
int(*IsGoal)(_sfAsNode*, _sfAsNode*, void*, int);
int(*Compare)(_sfAsNode*, _sfAsNode*, void*, int);
int(*GetNext)(_sfAsNode*, _sfAsNode*, void*, int);
float(*GetCost)(_sfAsNode*, _sfAsNode*, void*, int);
float(*GetEstimatedCost)(_sfAsNode*, _sfAsNode*, void*, int);

_anon1* get_data_ptr(int type);
void sfPathDataSet0(_anon1* pathdata, void* data);
void sfPathRedDataSet(void* addr);
void sfPathBlueDataSet(void* addr);
void sfPathGreenDataSet(void* addr);
void sfPathYellowDataSet(void* addr);
void sfPathClear();
void sfPathPointClear(_anon4* point);
int sfPathGetSceneNoFromV(_anon4* v, int no);
void sfPathCopyVec(float* dst, _anon4* point);
int sfPathGetNPath(_anon0* path);
void sfPathGetNthPoint(_anon4* dst, _anon0* path, int index);
int sfPathGetNearestPoint(_enum type, float* from);
int sfPathGetNearestStagePoint(float* dst, float* from, float* offset, int current_scene);
float GetEstimatedCost(_sfAsNode* cur, _sfAsNode* goal, void* data);
float GetCost(_sfAsNode* target, _sfAsNode* from, void* data);
int GetNext(_sfAsNode* dst, _sfAsNode* cur, void* data);
int Compare(_sfAsNode* data0, _sfAsNode* data1);
int IsGoal(_sfAsNode* cur, _sfAsNode* goal);
void FuncSet(_anon3* work);
void PathTrim(_anon0* dst, _anon3* src, _anon4* base_v, float* goal);
void PathTrim_hit(_anon0* dst, _anon3* src, _anon4* base_v, float* start, float* goal);
int sfPathSearchCore(_anon3* dst, float* start, float* goal, _enum type);
int sfPathSearchStagePath(_anon0* result, float* start, float* goal);
void sfPathGetNearestVector(float* dst, float* src, int scene_no, _enum type);
int sfPathGetNearestVectorCld(float* dst, float* src, float* offset, int scene_no, _enum type);
int sfPathSearchStagePathByScenePos(_anon0* result, float* start_pos, int start_scene, float* goal_pos, int goal_scene);
int sfPathSearchDetailPath(_anon0* result, float* start, float* goal);
int sfPathReSearchDetailPath(_anon0* path, int cur_index, float* goal);
int sfPathGetDetailPointNum();
void sfPathGetDetailPointPos(float* dst, int n);
int sfPathGetGhostPointNum();
void sfPathGetGhostPoint(_anon4* dst, int n);
int sfPathGetWarpPointNum();
void sfPathGetWarpPointPos(float* dst, int n);

// 
// Start address: 0x1cbc70
_anon1* get_data_ptr(int type)
{
	_anon1* rtv;
	// Line 112, Address: 0x1cbc70, Func Offset: 0
	// Line 113, Address: 0x1cbca0, Func Offset: 0x30
	// Line 114, Address: 0x1cbcac, Func Offset: 0x3c
	// Line 115, Address: 0x1cbcbc, Func Offset: 0x4c
	// Line 116, Address: 0x1cbccc, Func Offset: 0x5c
	// Line 120, Address: 0x1cbcd8, Func Offset: 0x68
	// Func End, Address: 0x1cbce0, Func Offset: 0x70
}

// 
// Start address: 0x1cbce0
void sfPathDataSet0(_anon1* pathdata, void* data)
{
	_anon5* head;
	// Line 132, Address: 0x1cbce0, Func Offset: 0
	// Line 133, Address: 0x1cbce8, Func Offset: 0x8
	// Line 135, Address: 0x1cbcf0, Func Offset: 0x10
	// Line 136, Address: 0x1cbcf4, Func Offset: 0x14
	// Line 137, Address: 0x1cbcfc, Func Offset: 0x1c
	// Line 154, Address: 0x1cbd0c, Func Offset: 0x2c
	// Line 155, Address: 0x1cbd14, Func Offset: 0x34
	// Line 157, Address: 0x1cbd18, Func Offset: 0x38
	// Line 163, Address: 0x1cbd20, Func Offset: 0x40
	// Line 165, Address: 0x1cbd28, Func Offset: 0x48
	// Line 166, Address: 0x1cbd2c, Func Offset: 0x4c
	// Line 167, Address: 0x1cbd30, Func Offset: 0x50
	// Line 168, Address: 0x1cbd34, Func Offset: 0x54
	// Line 171, Address: 0x1cbd38, Func Offset: 0x58
	// Func End, Address: 0x1cbd40, Func Offset: 0x60
}

// 
// Start address: 0x1cbd40
void sfPathRedDataSet(void* addr)
{
	// Line 175, Address: 0x1cbd40, Func Offset: 0
	// Line 176, Address: 0x1cbd44, Func Offset: 0x4
	// Line 175, Address: 0x1cbd48, Func Offset: 0x8
	// Line 176, Address: 0x1cbd4c, Func Offset: 0xc
	// Line 175, Address: 0x1cbd50, Func Offset: 0x10
	// Line 176, Address: 0x1cbd58, Func Offset: 0x18
	// Line 178, Address: 0x1cbd64, Func Offset: 0x24
	// Line 179, Address: 0x1cbd6c, Func Offset: 0x2c
	// Line 180, Address: 0x1cbd7c, Func Offset: 0x3c
	// Line 181, Address: 0x1cbd80, Func Offset: 0x40
	// Func End, Address: 0x1cbd90, Func Offset: 0x50
}

// 
// Start address: 0x1cbd90
void sfPathBlueDataSet(void* addr)
{
	// Line 185, Address: 0x1cbd90, Func Offset: 0
	// Line 186, Address: 0x1cbd94, Func Offset: 0x4
	// Line 185, Address: 0x1cbd98, Func Offset: 0x8
	// Line 186, Address: 0x1cbd9c, Func Offset: 0xc
	// Line 185, Address: 0x1cbda0, Func Offset: 0x10
	// Line 186, Address: 0x1cbda8, Func Offset: 0x18
	// Line 188, Address: 0x1cbdb4, Func Offset: 0x24
	// Line 189, Address: 0x1cbdbc, Func Offset: 0x2c
	// Line 190, Address: 0x1cbdcc, Func Offset: 0x3c
	// Line 191, Address: 0x1cbdd0, Func Offset: 0x40
	// Func End, Address: 0x1cbde0, Func Offset: 0x50
}

// 
// Start address: 0x1cbde0
void sfPathGreenDataSet(void* addr)
{
	// Line 195, Address: 0x1cbde0, Func Offset: 0
	// Line 196, Address: 0x1cbde4, Func Offset: 0x4
	// Line 195, Address: 0x1cbde8, Func Offset: 0x8
	// Line 196, Address: 0x1cbdec, Func Offset: 0xc
	// Line 195, Address: 0x1cbdf0, Func Offset: 0x10
	// Line 196, Address: 0x1cbdf8, Func Offset: 0x18
	// Line 198, Address: 0x1cbe04, Func Offset: 0x24
	// Line 199, Address: 0x1cbe0c, Func Offset: 0x2c
	// Line 200, Address: 0x1cbe1c, Func Offset: 0x3c
	// Line 201, Address: 0x1cbe20, Func Offset: 0x40
	// Func End, Address: 0x1cbe30, Func Offset: 0x50
}

// 
// Start address: 0x1cbe30
void sfPathYellowDataSet(void* addr)
{
	// Line 205, Address: 0x1cbe30, Func Offset: 0
	// Line 206, Address: 0x1cbe34, Func Offset: 0x4
	// Line 205, Address: 0x1cbe38, Func Offset: 0x8
	// Line 206, Address: 0x1cbe3c, Func Offset: 0xc
	// Line 205, Address: 0x1cbe40, Func Offset: 0x10
	// Line 206, Address: 0x1cbe48, Func Offset: 0x18
	// Line 208, Address: 0x1cbe54, Func Offset: 0x24
	// Line 209, Address: 0x1cbe5c, Func Offset: 0x2c
	// Line 210, Address: 0x1cbe6c, Func Offset: 0x3c
	// Line 211, Address: 0x1cbe70, Func Offset: 0x40
	// Func End, Address: 0x1cbe80, Func Offset: 0x50
}

// 
// Start address: 0x1cbe80
void sfPathClear()
{
	// Line 215, Address: 0x1cbe80, Func Offset: 0
	// Line 216, Address: 0x1cbe84, Func Offset: 0x4
	// Line 215, Address: 0x1cbe88, Func Offset: 0x8
	// Line 216, Address: 0x1cbe8c, Func Offset: 0xc
	// Line 217, Address: 0x1cbe9c, Func Offset: 0x1c
	// Line 218, Address: 0x1cbeac, Func Offset: 0x2c
	// Line 219, Address: 0x1cbebc, Func Offset: 0x3c
	// Line 220, Address: 0x1cbecc, Func Offset: 0x4c
	// Func End, Address: 0x1cbed8, Func Offset: 0x58
}

// 
// Start address: 0x1cbee0
void sfPathPointClear(_anon4* point)
{
	// Line 242, Address: 0x1cbee0, Func Offset: 0
	// Line 243, Address: 0x1cbef0, Func Offset: 0x10
	// Line 245, Address: 0x1cbefc, Func Offset: 0x1c
	// Func End, Address: 0x1cbf04, Func Offset: 0x24
}

// 
// Start address: 0x1cbf10
int sfPathGetSceneNoFromV(_anon4* v, int no)
{
	int rtv;
	// Line 267, Address: 0x1cbf10, Func Offset: 0
	// Line 268, Address: 0x1cbf28, Func Offset: 0x18
	// Line 271, Address: 0x1cbf30, Func Offset: 0x20
	// Func End, Address: 0x1cbf38, Func Offset: 0x28
}

// 
// Start address: 0x1cbf40
void sfPathCopyVec(float* dst, _anon4* point)
{
	// Line 326, Address: 0x1cbf40, Func Offset: 0
	// Line 327, Address: 0x1cbf48, Func Offset: 0x8
	// Line 329, Address: 0x1cbf50, Func Offset: 0x10
	// Line 331, Address: 0x1cbf58, Func Offset: 0x18
	// Func End, Address: 0x1cbf60, Func Offset: 0x20
}

// 
// Start address: 0x1cbf60
int sfPathGetNPath(_anon0* path)
{
	// Line 442, Address: 0x1cbf60, Func Offset: 0
	// Line 445, Address: 0x1cbf6c, Func Offset: 0xc
	// Func End, Address: 0x1cbf74, Func Offset: 0x14
}

// 
// Start address: 0x1cbf80
void sfPathGetNthPoint(_anon4* dst, _anon0* path, int index)
{
	// Line 470, Address: 0x1cbf80, Func Offset: 0
	// Line 471, Address: 0x1cbf84, Func Offset: 0x4
	// Line 472, Address: 0x1cbf9c, Func Offset: 0x1c
	// Line 473, Address: 0x1cbfac, Func Offset: 0x2c
	// Line 474, Address: 0x1cbfb0, Func Offset: 0x30
	// Func End, Address: 0x1cbfbc, Func Offset: 0x3c
}

// 
// Start address: 0x1cbfc0
int sfPathGetNearestPoint(_enum type, float* from)
{
	int rtv;
	int i;
	float min_len;
	float len;
	_anon9 line;
	_anon8 dummy;
	_anon1* pd;
	int vertex_num;
	_anon4* vertex;
	float l[4];
	// Line 490, Address: 0x1cbfc0, Func Offset: 0
	// Line 493, Address: 0x1cbfc4, Func Offset: 0x4
	// Line 490, Address: 0x1cbfc8, Func Offset: 0x8
	// Line 493, Address: 0x1cbfcc, Func Offset: 0xc
	// Line 490, Address: 0x1cbfd0, Func Offset: 0x10
	// Line 502, Address: 0x1cbfe0, Func Offset: 0x20
	// Line 490, Address: 0x1cbfe4, Func Offset: 0x24
	// Line 493, Address: 0x1cbff8, Func Offset: 0x38
	// Line 502, Address: 0x1cbffc, Func Offset: 0x3c
	// Line 503, Address: 0x1cc004, Func Offset: 0x44
	// Line 506, Address: 0x1cc008, Func Offset: 0x48
	// Line 504, Address: 0x1cc00c, Func Offset: 0x4c
	// Line 506, Address: 0x1cc010, Func Offset: 0x50
	// Line 507, Address: 0x1cc018, Func Offset: 0x58
	// Line 510, Address: 0x1cc020, Func Offset: 0x60
	// Line 512, Address: 0x1cc030, Func Offset: 0x70
	// Line 513, Address: 0x1cc038, Func Offset: 0x78
	// Line 516, Address: 0x1cc04c, Func Offset: 0x8c
	// Line 518, Address: 0x1cc050, Func Offset: 0x90
	// Line 519, Address: 0x1cc068, Func Offset: 0xa8
	// Line 520, Address: 0x1cc090, Func Offset: 0xd0
	// Line 521, Address: 0x1cc09c, Func Offset: 0xdc
	// Line 522, Address: 0x1cc0a0, Func Offset: 0xe0
	// Line 524, Address: 0x1cc0a4, Func Offset: 0xe4
	// Line 527, Address: 0x1cc0bc, Func Offset: 0xfc
	// Func End, Address: 0x1cc0e4, Func Offset: 0x124
}

// 
// Start address: 0x1cc0f0
int sfPathGetNearestStagePoint(float* dst, float* from, float* offset, int current_scene)
{
	int rtv;
	// Line 626, Address: 0x1cc0f0, Func Offset: 0
	// Func End, Address: 0x1cc0f8, Func Offset: 0x8
}

// 
// Start address: 0x1cc100
float GetEstimatedCost(_sfAsNode* cur, _sfAsNode* goal, void* data)
{
	float len[4];
	int cur_index;
	int goal_index;
	_anon1* pd;
	// Line 636, Address: 0x1cc100, Func Offset: 0
	// Line 638, Address: 0x1cc104, Func Offset: 0x4
	// Line 639, Address: 0x1cc114, Func Offset: 0x14
	// Line 642, Address: 0x1cc124, Func Offset: 0x24
	// Line 646, Address: 0x1cc150, Func Offset: 0x50
	// Line 647, Address: 0x1cc174, Func Offset: 0x74
	// Func End, Address: 0x1cc17c, Func Offset: 0x7c
}

// 
// Start address: 0x1cc180
float GetCost(_sfAsNode* target, _sfAsNode* from, void* data)
{
	int target_index;
	int from_index;
	_anon1* pd;
	float len[4];
	// Line 651, Address: 0x1cc180, Func Offset: 0
	// Line 652, Address: 0x1cc184, Func Offset: 0x4
	// Line 653, Address: 0x1cc194, Func Offset: 0x14
	// Line 657, Address: 0x1cc1a4, Func Offset: 0x24
	// Line 660, Address: 0x1cc1d0, Func Offset: 0x50
	// Line 661, Address: 0x1cc1f4, Func Offset: 0x74
	// Func End, Address: 0x1cc1fc, Func Offset: 0x7c
}

// 
// Start address: 0x1cc200
int GetNext(_sfAsNode* dst, _sfAsNode* cur, void* data)
{
	int rtv;
	int cur_index;
	_anon2* cw;
	_anon1* pd;
	int* link;
	// Line 665, Address: 0x1cc200, Func Offset: 0
	// Line 666, Address: 0x1cc204, Func Offset: 0x4
	// Line 665, Address: 0x1cc208, Func Offset: 0x8
	// Line 667, Address: 0x1cc20c, Func Offset: 0xc
	// Line 668, Address: 0x1cc224, Func Offset: 0x24
	// Line 669, Address: 0x1cc230, Func Offset: 0x30
	// Line 673, Address: 0x1cc234, Func Offset: 0x34
	// Line 674, Address: 0x1cc23c, Func Offset: 0x3c
	// Line 677, Address: 0x1cc258, Func Offset: 0x58
	// Line 674, Address: 0x1cc25c, Func Offset: 0x5c
	// Line 677, Address: 0x1cc260, Func Offset: 0x60
	// Line 678, Address: 0x1cc26c, Func Offset: 0x6c
	// Line 679, Address: 0x1cc288, Func Offset: 0x88
	// Line 680, Address: 0x1cc28c, Func Offset: 0x8c
	// Line 679, Address: 0x1cc290, Func Offset: 0x90
	// Line 685, Address: 0x1cc298, Func Offset: 0x98
	// Func End, Address: 0x1cc2a8, Func Offset: 0xa8
}

// 
// Start address: 0x1cc2b0
int Compare(_sfAsNode* data0, _sfAsNode* data1)
{
	int index0;
	// Line 690, Address: 0x1cc2b0, Func Offset: 0
	// Line 691, Address: 0x1cc2c4, Func Offset: 0x14
	// Line 693, Address: 0x1cc2d0, Func Offset: 0x20
	// Line 694, Address: 0x1cc2d8, Func Offset: 0x28
	// Func End, Address: 0x1cc2e0, Func Offset: 0x30
}

// 
// Start address: 0x1cc2e0
int IsGoal(_sfAsNode* cur, _sfAsNode* goal)
{
	int cur_index;
	// Line 700, Address: 0x1cc2e0, Func Offset: 0
	// Line 701, Address: 0x1cc2f4, Func Offset: 0x14
	// Line 703, Address: 0x1cc300, Func Offset: 0x20
	// Line 704, Address: 0x1cc308, Func Offset: 0x28
	// Func End, Address: 0x1cc310, Func Offset: 0x30
}

// 
// Start address: 0x1cc310
void FuncSet(_anon3* work)
{
	// Line 708, Address: 0x1cc310, Func Offset: 0
	// Line 709, Address: 0x1cc314, Func Offset: 0x4
	// Line 708, Address: 0x1cc318, Func Offset: 0x8
	// Line 709, Address: 0x1cc31c, Func Offset: 0xc
	// Line 708, Address: 0x1cc320, Func Offset: 0x10
	// Line 709, Address: 0x1cc324, Func Offset: 0x14
	// Line 710, Address: 0x1cc32c, Func Offset: 0x1c
	// Line 711, Address: 0x1cc33c, Func Offset: 0x2c
	// Line 712, Address: 0x1cc34c, Func Offset: 0x3c
	// Line 713, Address: 0x1cc35c, Func Offset: 0x4c
	// Line 714, Address: 0x1cc36c, Func Offset: 0x5c
	// Func End, Address: 0x1cc37c, Func Offset: 0x6c
}

// 
// Start address: 0x1cc380
void PathTrim(_anon0* dst, _anon3* src, _anon4* base_v, float* goal)
{
	int index;
	_sfAsNode* node;
	_anon4* goal_point;
	// Line 721, Address: 0x1cc380, Func Offset: 0
	// Line 723, Address: 0x1cc388, Func Offset: 0x8
	// Line 726, Address: 0x1cc390, Func Offset: 0x10
	// Line 734, Address: 0x1cc394, Func Offset: 0x14
	// Line 728, Address: 0x1cc398, Func Offset: 0x18
	// Line 729, Address: 0x1cc3ac, Func Offset: 0x2c
	// Line 731, Address: 0x1cc3d0, Func Offset: 0x50
	// Line 734, Address: 0x1cc3d4, Func Offset: 0x54
	// Line 737, Address: 0x1cc3dc, Func Offset: 0x5c
	// Line 741, Address: 0x1cc3ec, Func Offset: 0x6c
	// Line 743, Address: 0x1cc3f4, Func Offset: 0x74
	// Line 748, Address: 0x1cc400, Func Offset: 0x80
	// Line 749, Address: 0x1cc408, Func Offset: 0x88
	// Line 750, Address: 0x1cc40c, Func Offset: 0x8c
	// Line 749, Address: 0x1cc410, Func Offset: 0x90
	// Line 750, Address: 0x1cc424, Func Offset: 0xa4
	// Line 752, Address: 0x1cc428, Func Offset: 0xa8
	// Line 753, Address: 0x1cc434, Func Offset: 0xb4
	// Func End, Address: 0x1cc444, Func Offset: 0xc4
}

// 
// Start address: 0x1cc450
void PathTrim_hit(_anon0* dst, _anon3* src, _anon4* base_v, float* start, float* goal)
{
	int index;
	_anon9 line;
	_sfAsNode* node;
	_sfAsNode* pre_node;
	_anon8 plane;
	_anon4* goal_point;
	// Line 757, Address: 0x1cc450, Func Offset: 0
	// Line 766, Address: 0x1cc458, Func Offset: 0x8
	// Line 757, Address: 0x1cc45c, Func Offset: 0xc
	// Line 760, Address: 0x1cc480, Func Offset: 0x30
	// Line 761, Address: 0x1cc484, Func Offset: 0x34
	// Line 766, Address: 0x1cc488, Func Offset: 0x38
	// Line 768, Address: 0x1cc490, Func Offset: 0x40
	// Line 770, Address: 0x1cc498, Func Offset: 0x48
	// Line 771, Address: 0x1cc4ac, Func Offset: 0x5c
	// Line 772, Address: 0x1cc4bc, Func Offset: 0x6c
	// Line 774, Address: 0x1cc4d0, Func Offset: 0x80
	// Line 775, Address: 0x1cc4e4, Func Offset: 0x94
	// Line 776, Address: 0x1cc508, Func Offset: 0xb8
	// Line 779, Address: 0x1cc518, Func Offset: 0xc8
	// Line 781, Address: 0x1cc524, Func Offset: 0xd4
	// Line 783, Address: 0x1cc530, Func Offset: 0xe0
	// Line 787, Address: 0x1cc538, Func Offset: 0xe8
	// Line 788, Address: 0x1cc53c, Func Offset: 0xec
	// Line 790, Address: 0x1cc540, Func Offset: 0xf0
	// Line 792, Address: 0x1cc548, Func Offset: 0xf8
	// Line 794, Address: 0x1cc550, Func Offset: 0x100
	// Line 796, Address: 0x1cc564, Func Offset: 0x114
	// Line 797, Address: 0x1cc574, Func Offset: 0x124
	// Line 800, Address: 0x1cc59c, Func Offset: 0x14c
	// Line 802, Address: 0x1cc5a8, Func Offset: 0x158
	// Line 804, Address: 0x1cc5b4, Func Offset: 0x164
	// Line 806, Address: 0x1cc5bc, Func Offset: 0x16c
	// Line 809, Address: 0x1cc5c0, Func Offset: 0x170
	// Line 811, Address: 0x1cc5c8, Func Offset: 0x178
	// Line 812, Address: 0x1cc5d0, Func Offset: 0x180
	// Line 813, Address: 0x1cc5d4, Func Offset: 0x184
	// Line 812, Address: 0x1cc5d8, Func Offset: 0x188
	// Line 813, Address: 0x1cc5ec, Func Offset: 0x19c
	// Line 815, Address: 0x1cc5f0, Func Offset: 0x1a0
	// Line 816, Address: 0x1cc5fc, Func Offset: 0x1ac
	// Func End, Address: 0x1cc624, Func Offset: 0x1d4
}

// 
// Start address: 0x1cc630
int sfPathSearchCore(_anon3* dst, float* start, float* goal, _enum type)
{
	int rtv;
	int index;
	_anon1* pd;
	// Line 825, Address: 0x1cc630, Func Offset: 0
	// Line 826, Address: 0x1cc658, Func Offset: 0x28
	// Line 831, Address: 0x1cc65c, Func Offset: 0x2c
	// Line 833, Address: 0x1cc664, Func Offset: 0x34
	// Line 836, Address: 0x1cc66c, Func Offset: 0x3c
	// Line 837, Address: 0x1cc674, Func Offset: 0x44
	// Line 840, Address: 0x1cc684, Func Offset: 0x54
	// Line 841, Address: 0x1cc68c, Func Offset: 0x5c
	// Line 842, Address: 0x1cc69c, Func Offset: 0x6c
	// Line 843, Address: 0x1cc6ac, Func Offset: 0x7c
	// Line 844, Address: 0x1cc6b4, Func Offset: 0x84
	// Line 845, Address: 0x1cc6b8, Func Offset: 0x88
	// Line 848, Address: 0x1cc6d8, Func Offset: 0xa8
	// Line 849, Address: 0x1cc6e0, Func Offset: 0xb0
	// Line 850, Address: 0x1cc6f0, Func Offset: 0xc0
	// Line 851, Address: 0x1cc700, Func Offset: 0xd0
	// Line 853, Address: 0x1cc708, Func Offset: 0xd8
	// Line 855, Address: 0x1cc728, Func Offset: 0xf8
	// Line 856, Address: 0x1cc738, Func Offset: 0x108
	// Line 857, Address: 0x1cc73c, Func Offset: 0x10c
	// Line 859, Address: 0x1cc740, Func Offset: 0x110
	// Line 860, Address: 0x1cc748, Func Offset: 0x118
	// Func End, Address: 0x1cc768, Func Offset: 0x138
}

// 
// Start address: 0x1cc770
int sfPathSearchStagePath(_anon0* result, float* start, float* goal)
{
	int rtv;
	_anon3 AsWork;
	// Line 879, Address: 0x1cc770, Func Offset: 0
	// Line 888, Address: 0x1cc774, Func Offset: 0x4
	// Line 879, Address: 0x1cc778, Func Offset: 0x8
	// Line 880, Address: 0x1cc78c, Func Offset: 0x1c
	// Line 879, Address: 0x1cc790, Func Offset: 0x20
	// Line 887, Address: 0x1cc798, Func Offset: 0x28
	// Line 888, Address: 0x1cc7a0, Func Offset: 0x30
	// Line 889, Address: 0x1cc7b0, Func Offset: 0x40
	// Line 890, Address: 0x1cc7c8, Func Offset: 0x58
	// Line 892, Address: 0x1cc7d0, Func Offset: 0x60
	// Line 895, Address: 0x1cc7d8, Func Offset: 0x68
	// Line 896, Address: 0x1cc7dc, Func Offset: 0x6c
	// Line 898, Address: 0x1cc7f8, Func Offset: 0x88
	// Line 899, Address: 0x1cc7fc, Func Offset: 0x8c
	// Func End, Address: 0x1cc818, Func Offset: 0xa8
}

// 
// Start address: 0x1cc820
void sfPathGetNearestVector(float* dst, float* src, int scene_no, _enum type)
{
	_anon1* pd;
	_anon4* v;
	float length;
	int i;
	int s0;
	int s1;
	float d[4];
	// Line 934, Address: 0x1cc820, Func Offset: 0
	// Line 938, Address: 0x1cc824, Func Offset: 0x4
	// Line 934, Address: 0x1cc828, Func Offset: 0x8
	// Line 941, Address: 0x1cc840, Func Offset: 0x20
	// Line 934, Address: 0x1cc844, Func Offset: 0x24
	// Line 938, Address: 0x1cc858, Func Offset: 0x38
	// Line 941, Address: 0x1cc85c, Func Offset: 0x3c
	// Line 942, Address: 0x1cc884, Func Offset: 0x64
	// Line 943, Address: 0x1cc894, Func Offset: 0x74
	// Line 944, Address: 0x1cc8a0, Func Offset: 0x80
	// Line 948, Address: 0x1cc8a8, Func Offset: 0x88
	// Line 950, Address: 0x1cc8b8, Func Offset: 0x98
	// Line 951, Address: 0x1cc8bc, Func Offset: 0x9c
	// Line 952, Address: 0x1cc8c8, Func Offset: 0xa8
	// Line 953, Address: 0x1cc8d8, Func Offset: 0xb8
	// Line 957, Address: 0x1cc8e4, Func Offset: 0xc4
	// Line 960, Address: 0x1cc8f8, Func Offset: 0xd8
	// Line 961, Address: 0x1cc910, Func Offset: 0xf0
	// Line 962, Address: 0x1cc944, Func Offset: 0x124
	// Line 963, Address: 0x1cc94c, Func Offset: 0x12c
	// Line 966, Address: 0x1cc970, Func Offset: 0x150
	// Line 967, Address: 0x1cc974, Func Offset: 0x154
	// Line 968, Address: 0x1cc988, Func Offset: 0x168
	// Func End, Address: 0x1cc9b4, Func Offset: 0x194
}

// 
// Start address: 0x1cc9c0
int sfPathGetNearestVectorCld(float* dst, float* src, float* offset, int scene_no, _enum type)
{
	_anon1* pd;
	_anon4* v;
	float length;
	_anon9 line;
	int i;
	int rtv;
	int s0;
	int s1;
	float d[4];
	// Line 972, Address: 0x1cc9c0, Func Offset: 0
	// Line 976, Address: 0x1cc9c4, Func Offset: 0x4
	// Line 972, Address: 0x1cc9c8, Func Offset: 0x8
	// Line 981, Address: 0x1cc9cc, Func Offset: 0xc
	// Line 972, Address: 0x1cc9d0, Func Offset: 0x10
	// Line 979, Address: 0x1cc9dc, Func Offset: 0x1c
	// Line 972, Address: 0x1cc9e0, Func Offset: 0x20
	// Line 976, Address: 0x1cca08, Func Offset: 0x48
	// Line 981, Address: 0x1cca0c, Func Offset: 0x4c
	// Line 982, Address: 0x1cca34, Func Offset: 0x74
	// Line 983, Address: 0x1cca44, Func Offset: 0x84
	// Line 984, Address: 0x1cca54, Func Offset: 0x94
	// Line 988, Address: 0x1cca60, Func Offset: 0xa0
	// Line 992, Address: 0x1cca70, Func Offset: 0xb0
	// Line 994, Address: 0x1cca88, Func Offset: 0xc8
	// Line 995, Address: 0x1cca8c, Func Offset: 0xcc
	// Line 996, Address: 0x1cca98, Func Offset: 0xd8
	// Line 997, Address: 0x1ccaa8, Func Offset: 0xe8
	// Line 1001, Address: 0x1ccab4, Func Offset: 0xf4
	// Line 1004, Address: 0x1ccac8, Func Offset: 0x108
	// Line 1006, Address: 0x1ccae0, Func Offset: 0x120
	// Line 1007, Address: 0x1ccaf0, Func Offset: 0x130
	// Line 1008, Address: 0x1ccb08, Func Offset: 0x148
	// Line 1009, Address: 0x1ccb3c, Func Offset: 0x17c
	// Line 1010, Address: 0x1ccb44, Func Offset: 0x184
	// Line 1012, Address: 0x1ccb68, Func Offset: 0x1a8
	// Line 1015, Address: 0x1ccb6c, Func Offset: 0x1ac
	// Line 1016, Address: 0x1ccb70, Func Offset: 0x1b0
	// Line 1017, Address: 0x1ccb74, Func Offset: 0x1b4
	// Line 1018, Address: 0x1ccb88, Func Offset: 0x1c8
	// Line 1019, Address: 0x1ccb8c, Func Offset: 0x1cc
	// Func End, Address: 0x1ccbc0, Func Offset: 0x200
}

// 
// Start address: 0x1ccbc0
int sfPathSearchStagePathByScenePos(_anon0* result, float* start_pos, int start_scene, float* goal_pos, int goal_scene)
{
	int rtv;
	_anon3 AsWork;
	float start[4];
	float goal[4];
	// Line 1083, Address: 0x1ccbc0, Func Offset: 0
	// Line 1090, Address: 0x1ccbe0, Func Offset: 0x20
	// Line 1084, Address: 0x1ccbe8, Func Offset: 0x28
	// Line 1090, Address: 0x1ccbec, Func Offset: 0x2c
	// Line 1091, Address: 0x1ccbf4, Func Offset: 0x34
	// Line 1098, Address: 0x1ccc08, Func Offset: 0x48
	// Line 1099, Address: 0x1ccc28, Func Offset: 0x68
	// Line 1100, Address: 0x1ccc40, Func Offset: 0x80
	// Line 1102, Address: 0x1ccc48, Func Offset: 0x88
	// Line 1105, Address: 0x1ccc50, Func Offset: 0x90
	// Line 1106, Address: 0x1ccc54, Func Offset: 0x94
	// Line 1107, Address: 0x1ccc74, Func Offset: 0xb4
	// Line 1108, Address: 0x1ccc78, Func Offset: 0xb8
	// Line 1109, Address: 0x1ccc7c, Func Offset: 0xbc
	// Func End, Address: 0x1ccc98, Func Offset: 0xd8
}

// 
// Start address: 0x1ccca0
int sfPathSearchDetailPath(_anon0* result, float* start, float* goal)
{
	int rtv;
	_anon9 line;
	_anon3 AsWork;
	// Line 1123, Address: 0x1ccca0, Func Offset: 0
	// Line 1127, Address: 0x1cccc4, Func Offset: 0x24
	// Line 1128, Address: 0x1ccccc, Func Offset: 0x2c
	// Line 1129, Address: 0x1cccd4, Func Offset: 0x34
	// Line 1131, Address: 0x1cccd8, Func Offset: 0x38
	// Line 1132, Address: 0x1ccce4, Func Offset: 0x44
	// Line 1138, Address: 0x1cccf0, Func Offset: 0x50
	// Line 1139, Address: 0x1cccf4, Func Offset: 0x54
	// Line 1142, Address: 0x1ccd04, Func Offset: 0x64
	// Line 1144, Address: 0x1ccd1c, Func Offset: 0x7c
	// Line 1145, Address: 0x1ccd34, Func Offset: 0x94
	// Line 1148, Address: 0x1ccd3c, Func Offset: 0x9c
	// Line 1151, Address: 0x1ccd48, Func Offset: 0xa8
	// Line 1152, Address: 0x1ccd4c, Func Offset: 0xac
	// Line 1154, Address: 0x1ccd64, Func Offset: 0xc4
	// Line 1157, Address: 0x1ccd70, Func Offset: 0xd0
	// Line 1158, Address: 0x1ccd74, Func Offset: 0xd4
	// Line 1159, Address: 0x1ccd90, Func Offset: 0xf0
	// Line 1160, Address: 0x1ccd94, Func Offset: 0xf4
	// Line 1162, Address: 0x1ccd98, Func Offset: 0xf8
	// Line 1163, Address: 0x1ccda0, Func Offset: 0x100
	// Func End, Address: 0x1ccdbc, Func Offset: 0x11c
}

// 
// Start address: 0x1ccdc0
int sfPathReSearchDetailPath(_anon0* path, int cur_index, float* goal)
{
	int rtv;
	_anon9 line;
	int i;
	int j;
	float tmp[4];
	// Line 1240, Address: 0x1ccdc0, Func Offset: 0
	// Line 1245, Address: 0x1ccde0, Func Offset: 0x20
	// Line 1246, Address: 0x1ccde8, Func Offset: 0x28
	// Line 1249, Address: 0x1ccdf0, Func Offset: 0x30
	// Line 1250, Address: 0x1ccdfc, Func Offset: 0x3c
	// Line 1251, Address: 0x1cce10, Func Offset: 0x50
	// Line 1252, Address: 0x1cce20, Func Offset: 0x60
	// Line 1261, Address: 0x1cce30, Func Offset: 0x70
	// Line 1263, Address: 0x1cce3c, Func Offset: 0x7c
	// Line 1264, Address: 0x1cce50, Func Offset: 0x90
	// Line 1265, Address: 0x1cce6c, Func Offset: 0xac
	// Line 1266, Address: 0x1cce80, Func Offset: 0xc0
	// Line 1267, Address: 0x1cce9c, Func Offset: 0xdc
	// Line 1269, Address: 0x1ccea4, Func Offset: 0xe4
	// Line 1272, Address: 0x1ccec0, Func Offset: 0x100
	// Line 1273, Address: 0x1cced8, Func Offset: 0x118
	// Func End, Address: 0x1ccef4, Func Offset: 0x134
}

// 
// Start address: 0x1ccf00
int sfPathGetDetailPointNum()
{
	_anon1* pd;
	// Line 1303, Address: 0x1ccf00, Func Offset: 0
	// Line 1305, Address: 0x1ccf08, Func Offset: 0x8
	// Line 1310, Address: 0x1ccf10, Func Offset: 0x10
	// Line 1309, Address: 0x1ccf14, Func Offset: 0x14
	// Line 1310, Address: 0x1ccf18, Func Offset: 0x18
	// Func End, Address: 0x1ccf20, Func Offset: 0x20
}

// 
// Start address: 0x1ccf20
void sfPathGetDetailPointPos(float* dst, int n)
{
	_anon1* pd;
	// Line 1314, Address: 0x1ccf20, Func Offset: 0
	// Line 1315, Address: 0x1ccf2c, Func Offset: 0xc
	// Line 1318, Address: 0x1ccf34, Func Offset: 0x14
	// Line 1320, Address: 0x1ccf44, Func Offset: 0x24
	// Line 1321, Address: 0x1ccf68, Func Offset: 0x48
	// Line 1322, Address: 0x1ccf6c, Func Offset: 0x4c
	// Line 1323, Address: 0x1ccf70, Func Offset: 0x50
	// Func End, Address: 0x1ccf7c, Func Offset: 0x5c
}

// 
// Start address: 0x1ccf80
int sfPathGetGhostPointNum()
{
	_anon1* pd;
	// Line 1327, Address: 0x1ccf80, Func Offset: 0
	// Line 1329, Address: 0x1ccf88, Func Offset: 0x8
	// Line 1334, Address: 0x1ccf90, Func Offset: 0x10
	// Line 1333, Address: 0x1ccf94, Func Offset: 0x14
	// Line 1334, Address: 0x1ccf98, Func Offset: 0x18
	// Func End, Address: 0x1ccfa0, Func Offset: 0x20
}

// 
// Start address: 0x1ccfa0
void sfPathGetGhostPoint(_anon4* dst, int n)
{
	_anon1* pd;
	// Line 1342, Address: 0x1ccfa0, Func Offset: 0
	// Line 1343, Address: 0x1ccfac, Func Offset: 0xc
	// Line 1346, Address: 0x1ccfb4, Func Offset: 0x14
	// Line 1347, Address: 0x1ccfc4, Func Offset: 0x24
	// Line 1348, Address: 0x1ccfdc, Func Offset: 0x3c
	// Line 1350, Address: 0x1ccfe8, Func Offset: 0x48
	// Line 1352, Address: 0x1ccff8, Func Offset: 0x58
	// Func End, Address: 0x1cd004, Func Offset: 0x64
}

// 
// Start address: 0x1cd010
int sfPathGetWarpPointNum()
{
	_anon1* pd;
	// Line 1357, Address: 0x1cd010, Func Offset: 0
	// Line 1359, Address: 0x1cd018, Func Offset: 0x8
	// Line 1364, Address: 0x1cd020, Func Offset: 0x10
	// Line 1363, Address: 0x1cd024, Func Offset: 0x14
	// Line 1364, Address: 0x1cd028, Func Offset: 0x18
	// Func End, Address: 0x1cd030, Func Offset: 0x20
}

// 
// Start address: 0x1cd030
void sfPathGetWarpPointPos(float* dst, int n)
{
	_anon1* pd;
	// Line 1369, Address: 0x1cd030, Func Offset: 0
	// Line 1370, Address: 0x1cd03c, Func Offset: 0xc
	// Line 1373, Address: 0x1cd044, Func Offset: 0x14
	// Line 1375, Address: 0x1cd054, Func Offset: 0x24
	// Line 1376, Address: 0x1cd078, Func Offset: 0x48
	// Line 1377, Address: 0x1cd07c, Func Offset: 0x4c
	// Line 1378, Address: 0x1cd080, Func Offset: 0x50
	// Func End, Address: 0x1cd08c, Func Offset: 0x5c
}

