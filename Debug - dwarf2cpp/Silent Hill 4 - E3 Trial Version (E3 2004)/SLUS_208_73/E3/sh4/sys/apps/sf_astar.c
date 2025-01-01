typedef struct _anon0;
typedef struct _sfAsNode;
typedef enum _enum : unsigned char;
typedef struct _anon1;

typedef float(*type_1)(_sfAsNode*, _sfAsNode*, void*, int);
typedef int(*type_3)(_sfAsNode*, _sfAsNode*, void*, int);
typedef float(*type_4)(_sfAsNode*, _sfAsNode*, void*, int);
typedef int(*type_5)(_sfAsNode*, _sfAsNode*, void*, int);
typedef float(*type_6)(_sfAsNode*, _sfAsNode*, void*, int);
typedef int(*type_7)(_sfAsNode*, _sfAsNode*, void*, int);
typedef int(*type_8)(_sfAsNode*, _sfAsNode*, void*, int);
typedef int(*type_9)(_sfAsNode*, _sfAsNode*, void*, int);
typedef float(*type_10)(_sfAsNode*, _sfAsNode*, void*, int);
typedef int(*type_11)(_sfAsNode*, _sfAsNode*, void*, int);

typedef unsigned char type_0[64];
typedef unsigned char type_2[64];

struct _anon0
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
	_anon1 list_mng;
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

enum _enum : unsigned char
{
	OPEN_LIST,
	CLOSED_LIST
};

struct _anon1
{
	_sfAsNode* open_top;
	unsigned int open_num;
	_sfAsNode* closed_top;
	unsigned int closed_num;
	unsigned int push_cnt;
};


void sfAstarSearchInit(_anon0* work);
void sfAstarSearchDataSet(_anon0* work, void* data, int data_size);
void sfAsFuncSet_GetEstimatedCost(_anon0* work, float(*f)(_sfAsNode*, _sfAsNode*, void*, int));
void sfAsFuncSet_GetCost(_anon0* work, float(*f)(_sfAsNode*, _sfAsNode*, void*, int));
void sfAsFuncSet_GetNext(_anon0* work, int(*f)(_sfAsNode*, _sfAsNode*, void*, int));
void sfAsFuncSet_Compare(_anon0* work, int(*f)(_sfAsNode*, _sfAsNode*, void*, int));
void sfAsFuncSet_IsGoal(_anon0* work, int(*f)(_sfAsNode*, _sfAsNode*, void*, int));
void PushOpenList(_anon0* work, _sfAsNode* new_node);
void PushClosedList(_anon0* work, _sfAsNode* new_node);
void RemoveNode(_anon0* work, _sfAsNode* node, _enum type);
_sfAsNode* GetLowestCostNode(_anon0* work);
void ClearOpenClosedList(_anon0* work);
void AdjustNode(_anon0* work, _sfAsNode* old_node, _sfAsNode* new_node);
_sfAsNode* SearchSameNode(_anon0* work, _sfAsNode* list_top, unsigned long num, _sfAsNode* target);
int IsEmpty(_anon0* work);
void sfAsNodeClear(_sfAsNode* node);
void CopyFoundPath(_anon0* work, _sfAsNode* src);
void sfAstarSearchClear(_anon0* work);
int sfAstarSearch(_anon0* work);

// 
// Start address: 0x1cd090
void sfAstarSearchInit(_anon0* work)
{
	// Line 178, Address: 0x1cd090, Func Offset: 0
	// Line 179, Address: 0x1cd09c, Func Offset: 0xc
	// Line 180, Address: 0x1cd0a4, Func Offset: 0x14
	// Line 182, Address: 0x1cd0a8, Func Offset: 0x18
	// Line 183, Address: 0x1cd0b0, Func Offset: 0x20
	// Line 185, Address: 0x1cd0b8, Func Offset: 0x28
	// Line 187, Address: 0x1cd0bc, Func Offset: 0x2c
	// Line 188, Address: 0x1cd0c0, Func Offset: 0x30
	// Line 189, Address: 0x1cd0c4, Func Offset: 0x34
	// Line 190, Address: 0x1cd0c8, Func Offset: 0x38
	// Line 191, Address: 0x1cd0cc, Func Offset: 0x3c
	// Line 194, Address: 0x1cd0d0, Func Offset: 0x40
	// Line 195, Address: 0x1cd0d4, Func Offset: 0x44
	// Line 196, Address: 0x1cd0d8, Func Offset: 0x48
	// Line 197, Address: 0x1cd0dc, Func Offset: 0x4c
	// Line 198, Address: 0x1cd0e0, Func Offset: 0x50
	// Line 203, Address: 0x1cd0e4, Func Offset: 0x54
	// Func End, Address: 0x1cd0f4, Func Offset: 0x64
}

// 
// Start address: 0x1cd100
void sfAstarSearchDataSet(_anon0* work, void* data, int data_size)
{
	// Line 210, Address: 0x1cd100, Func Offset: 0
	// Line 211, Address: 0x1cd108, Func Offset: 0x8
	// Line 212, Address: 0x1cd10c, Func Offset: 0xc
	// Line 214, Address: 0x1cd110, Func Offset: 0x10
	// Func End, Address: 0x1cd118, Func Offset: 0x18
}

// 
// Start address: 0x1cd120
void sfAsFuncSet_GetEstimatedCost(_anon0* work, float(*f)(_sfAsNode*, _sfAsNode*, void*, int))
{
	// Line 245, Address: 0x1cd120, Func Offset: 0
	// Line 246, Address: 0x1cd130, Func Offset: 0x10
	// Line 247, Address: 0x1cd134, Func Offset: 0x14
	// Line 248, Address: 0x1cd138, Func Offset: 0x18
	// Func End, Address: 0x1cd140, Func Offset: 0x20
}

// 
// Start address: 0x1cd140
void sfAsFuncSet_GetCost(_anon0* work, float(*f)(_sfAsNode*, _sfAsNode*, void*, int))
{
	// Line 257, Address: 0x1cd140, Func Offset: 0
	// Line 258, Address: 0x1cd150, Func Offset: 0x10
	// Line 259, Address: 0x1cd154, Func Offset: 0x14
	// Line 260, Address: 0x1cd158, Func Offset: 0x18
	// Func End, Address: 0x1cd160, Func Offset: 0x20
}

// 
// Start address: 0x1cd160
void sfAsFuncSet_GetNext(_anon0* work, int(*f)(_sfAsNode*, _sfAsNode*, void*, int))
{
	// Line 269, Address: 0x1cd160, Func Offset: 0
	// Line 270, Address: 0x1cd170, Func Offset: 0x10
	// Line 271, Address: 0x1cd174, Func Offset: 0x14
	// Line 272, Address: 0x1cd178, Func Offset: 0x18
	// Func End, Address: 0x1cd180, Func Offset: 0x20
}

// 
// Start address: 0x1cd180
void sfAsFuncSet_Compare(_anon0* work, int(*f)(_sfAsNode*, _sfAsNode*, void*, int))
{
	// Line 282, Address: 0x1cd180, Func Offset: 0
	// Line 283, Address: 0x1cd190, Func Offset: 0x10
	// Line 284, Address: 0x1cd194, Func Offset: 0x14
	// Line 285, Address: 0x1cd198, Func Offset: 0x18
	// Func End, Address: 0x1cd1a0, Func Offset: 0x20
}

// 
// Start address: 0x1cd1a0
void sfAsFuncSet_IsGoal(_anon0* work, int(*f)(_sfAsNode*, _sfAsNode*, void*, int))
{
	// Line 295, Address: 0x1cd1a0, Func Offset: 0
	// Line 296, Address: 0x1cd1b0, Func Offset: 0x10
	// Line 297, Address: 0x1cd1b4, Func Offset: 0x14
	// Line 298, Address: 0x1cd1b8, Func Offset: 0x18
	// Func End, Address: 0x1cd1c0, Func Offset: 0x20
}

// 
// Start address: 0x1cd1c0
void PushOpenList(_anon0* work, _sfAsNode* new_node)
{
	_sfAsNode* p;
	unsigned int i;
	unsigned int num;
	int found;
	_sfAsNode* old;
	// Line 308, Address: 0x1cd1c0, Func Offset: 0
	// Line 311, Address: 0x1cd1c4, Func Offset: 0x4
	// Line 313, Address: 0x1cd1c8, Func Offset: 0x8
	// Line 314, Address: 0x1cd1d0, Func Offset: 0x10
	// Line 316, Address: 0x1cd1d4, Func Offset: 0x14
	// Line 320, Address: 0x1cd1e0, Func Offset: 0x20
	// Line 318, Address: 0x1cd1e4, Func Offset: 0x24
	// Line 319, Address: 0x1cd1e8, Func Offset: 0x28
	// Line 320, Address: 0x1cd1ec, Func Offset: 0x2c
	// Line 321, Address: 0x1cd1f8, Func Offset: 0x38
	// Line 322, Address: 0x1cd218, Func Offset: 0x58
	// Line 323, Address: 0x1cd220, Func Offset: 0x60
	// Line 325, Address: 0x1cd224, Func Offset: 0x64
	// Line 327, Address: 0x1cd230, Func Offset: 0x70
	// Line 328, Address: 0x1cd234, Func Offset: 0x74
	// Line 331, Address: 0x1cd238, Func Offset: 0x78
	// Line 333, Address: 0x1cd240, Func Offset: 0x80
	// Line 335, Address: 0x1cd244, Func Offset: 0x84
	// Line 336, Address: 0x1cd258, Func Offset: 0x98
	// Line 338, Address: 0x1cd260, Func Offset: 0xa0
	// Line 339, Address: 0x1cd264, Func Offset: 0xa4
	// Line 343, Address: 0x1cd268, Func Offset: 0xa8
	// Line 344, Address: 0x1cd278, Func Offset: 0xb8
	// Line 345, Address: 0x1cd280, Func Offset: 0xc0
	// Func End, Address: 0x1cd288, Func Offset: 0xc8
}

// 
// Start address: 0x1cd290
void PushClosedList(_anon0* work, _sfAsNode* new_node)
{
	_sfAsNode* p;
	unsigned int i;
	unsigned int num;
	int found;
	_sfAsNode* old;
	// Line 354, Address: 0x1cd290, Func Offset: 0
	// Line 357, Address: 0x1cd294, Func Offset: 0x4
	// Line 359, Address: 0x1cd298, Func Offset: 0x8
	// Line 360, Address: 0x1cd2a0, Func Offset: 0x10
	// Line 362, Address: 0x1cd2a4, Func Offset: 0x14
	// Line 366, Address: 0x1cd2b0, Func Offset: 0x20
	// Line 364, Address: 0x1cd2b4, Func Offset: 0x24
	// Line 365, Address: 0x1cd2b8, Func Offset: 0x28
	// Line 366, Address: 0x1cd2bc, Func Offset: 0x2c
	// Line 367, Address: 0x1cd2c8, Func Offset: 0x38
	// Line 368, Address: 0x1cd2e8, Func Offset: 0x58
	// Line 369, Address: 0x1cd2f0, Func Offset: 0x60
	// Line 371, Address: 0x1cd2f4, Func Offset: 0x64
	// Line 373, Address: 0x1cd300, Func Offset: 0x70
	// Line 374, Address: 0x1cd304, Func Offset: 0x74
	// Line 377, Address: 0x1cd308, Func Offset: 0x78
	// Line 379, Address: 0x1cd310, Func Offset: 0x80
	// Line 381, Address: 0x1cd314, Func Offset: 0x84
	// Line 382, Address: 0x1cd328, Func Offset: 0x98
	// Line 384, Address: 0x1cd330, Func Offset: 0xa0
	// Line 385, Address: 0x1cd334, Func Offset: 0xa4
	// Line 389, Address: 0x1cd338, Func Offset: 0xa8
	// Line 390, Address: 0x1cd340, Func Offset: 0xb0
	// Func End, Address: 0x1cd348, Func Offset: 0xb8
}

// 
// Start address: 0x1cd350
void RemoveNode(_anon0* work, _sfAsNode* node, _enum type)
{
	_sfAsNode** top;
	_sfAsNode* p;
	_sfAsNode* old;
	unsigned int num;
	unsigned int i;
	// Line 400, Address: 0x1cd350, Func Offset: 0
	// Line 403, Address: 0x1cd354, Func Offset: 0x4
	// Line 405, Address: 0x1cd364, Func Offset: 0x14
	// Line 404, Address: 0x1cd368, Func Offset: 0x18
	// Line 408, Address: 0x1cd36c, Func Offset: 0x1c
	// Line 409, Address: 0x1cd370, Func Offset: 0x20
	// Line 412, Address: 0x1cd378, Func Offset: 0x28
	// Line 417, Address: 0x1cd384, Func Offset: 0x34
	// Line 414, Address: 0x1cd38c, Func Offset: 0x3c
	// Line 417, Address: 0x1cd390, Func Offset: 0x40
	// Line 418, Address: 0x1cd3a0, Func Offset: 0x50
	// Line 419, Address: 0x1cd3ac, Func Offset: 0x5c
	// Line 420, Address: 0x1cd3b4, Func Offset: 0x64
	// Line 422, Address: 0x1cd3bc, Func Offset: 0x6c
	// Line 424, Address: 0x1cd3c8, Func Offset: 0x78
	// Line 425, Address: 0x1cd3d0, Func Offset: 0x80
	// Line 426, Address: 0x1cd3d4, Func Offset: 0x84
	// Line 427, Address: 0x1cd3d8, Func Offset: 0x88
	// Line 429, Address: 0x1cd3e0, Func Offset: 0x90
	// Line 431, Address: 0x1cd3e4, Func Offset: 0x94
	// Line 432, Address: 0x1cd3f8, Func Offset: 0xa8
	// Func End, Address: 0x1cd400, Func Offset: 0xb0
}

// 
// Start address: 0x1cd400
_sfAsNode* GetLowestCostNode(_anon0* work)
{
	_sfAsNode* rtv;
	_sfAsNode* p;
	float lowest;
	unsigned int i;
	// Line 441, Address: 0x1cd400, Func Offset: 0
	// Line 444, Address: 0x1cd404, Func Offset: 0x4
	// Line 441, Address: 0x1cd408, Func Offset: 0x8
	// Line 444, Address: 0x1cd40c, Func Offset: 0xc
	// Line 447, Address: 0x1cd410, Func Offset: 0x10
	// Line 442, Address: 0x1cd414, Func Offset: 0x14
	// Line 443, Address: 0x1cd418, Func Offset: 0x18
	// Line 447, Address: 0x1cd41c, Func Offset: 0x1c
	// Line 448, Address: 0x1cd42c, Func Offset: 0x2c
	// Line 449, Address: 0x1cd438, Func Offset: 0x38
	// Line 450, Address: 0x1cd43c, Func Offset: 0x3c
	// Line 453, Address: 0x1cd440, Func Offset: 0x40
	// Line 454, Address: 0x1cd450, Func Offset: 0x50
	// Line 456, Address: 0x1cd458, Func Offset: 0x58
	// Line 459, Address: 0x1cd460, Func Offset: 0x60
	// Func End, Address: 0x1cd46c, Func Offset: 0x6c
}

// 
// Start address: 0x1cd470
void ClearOpenClosedList(_anon0* work)
{
	unsigned int i;
	_sfAsNode* p;
	_sfAsNode* tmp;
	_sfAsNode* tmp;
	// Line 468, Address: 0x1cd470, Func Offset: 0
	// Line 474, Address: 0x1cd480, Func Offset: 0x10
	// Line 468, Address: 0x1cd484, Func Offset: 0x14
	// Line 474, Address: 0x1cd488, Func Offset: 0x18
	// Line 470, Address: 0x1cd48c, Func Offset: 0x1c
	// Line 474, Address: 0x1cd490, Func Offset: 0x20
	// Line 475, Address: 0x1cd4a0, Func Offset: 0x30
	// Line 477, Address: 0x1cd4a4, Func Offset: 0x34
	// Line 478, Address: 0x1cd4ac, Func Offset: 0x3c
	// Line 479, Address: 0x1cd4c0, Func Offset: 0x50
	// Line 485, Address: 0x1cd4c4, Func Offset: 0x54
	// Line 482, Address: 0x1cd4c8, Func Offset: 0x58
	// Line 485, Address: 0x1cd4cc, Func Offset: 0x5c
	// Line 486, Address: 0x1cd4d8, Func Offset: 0x68
	// Line 488, Address: 0x1cd4dc, Func Offset: 0x6c
	// Line 489, Address: 0x1cd4e4, Func Offset: 0x74
	// Line 490, Address: 0x1cd4f8, Func Offset: 0x88
	// Line 491, Address: 0x1cd4fc, Func Offset: 0x8c
	// Func End, Address: 0x1cd514, Func Offset: 0xa4
}

// 
// Start address: 0x1cd520
void AdjustNode(_anon0* work, _sfAsNode* old_node, _sfAsNode* new_node)
{
	_sfAsNode* p;
	unsigned int num;
	unsigned int i;
	// Line 568, Address: 0x1cd520, Func Offset: 0
	// Line 570, Address: 0x1cd534, Func Offset: 0x14
	// Line 569, Address: 0x1cd53c, Func Offset: 0x1c
	// Line 573, Address: 0x1cd540, Func Offset: 0x20
	// Line 574, Address: 0x1cd550, Func Offset: 0x30
	// Line 577, Address: 0x1cd55c, Func Offset: 0x3c
	// Line 578, Address: 0x1cd56c, Func Offset: 0x4c
	// Line 579, Address: 0x1cd574, Func Offset: 0x54
	// Line 580, Address: 0x1cd580, Func Offset: 0x60
	// Line 583, Address: 0x1cd588, Func Offset: 0x68
	// Line 584, Address: 0x1cd598, Func Offset: 0x78
	// Func End, Address: 0x1cd5ac, Func Offset: 0x8c
}

// 
// Start address: 0x1cd5b0
_sfAsNode* SearchSameNode(_anon0* work, _sfAsNode* list_top, unsigned long num, _sfAsNode* target)
{
	unsigned int i;
	_sfAsNode* p;
	_sfAsNode* rtv;
	// Line 593, Address: 0x1cd5b0, Func Offset: 0
	// Line 598, Address: 0x1cd5d0, Func Offset: 0x20
	// Line 593, Address: 0x1cd5d4, Func Offset: 0x24
	// Line 595, Address: 0x1cd5e0, Func Offset: 0x30
	// Line 596, Address: 0x1cd5e4, Func Offset: 0x34
	// Line 598, Address: 0x1cd5e8, Func Offset: 0x38
	// Line 599, Address: 0x1cd5f0, Func Offset: 0x40
	// Line 601, Address: 0x1cd618, Func Offset: 0x68
	// Line 604, Address: 0x1cd620, Func Offset: 0x70
	// Line 605, Address: 0x1cd638, Func Offset: 0x88
	// Line 606, Address: 0x1cd63c, Func Offset: 0x8c
	// Func End, Address: 0x1cd660, Func Offset: 0xb0
}

// 
// Start address: 0x1cd660
int IsEmpty(_anon0* work)
{
	// Line 614, Address: 0x1cd660, Func Offset: 0
	// Line 615, Address: 0x1cd668, Func Offset: 0x8
	// Func End, Address: 0x1cd670, Func Offset: 0x10
}

// 
// Start address: 0x1cd670
void sfAsNodeClear(_sfAsNode* node)
{
	// Line 622, Address: 0x1cd670, Func Offset: 0
	// Line 623, Address: 0x1cd680, Func Offset: 0x10
	// Line 624, Address: 0x1cd688, Func Offset: 0x18
	// Line 625, Address: 0x1cd690, Func Offset: 0x20
	// Line 627, Address: 0x1cd698, Func Offset: 0x28
	// Func End, Address: 0x1cd6a8, Func Offset: 0x38
}

// 
// Start address: 0x1cd6b0
void CopyFoundPath(_anon0* work, _sfAsNode* src)
{
	_sfAsNode* pre;
	unsigned int cnt;
	_sfAsNode* tmp;
	_sfAsNode* p;
	// Line 633, Address: 0x1cd6b0, Func Offset: 0
	// Line 636, Address: 0x1cd6b4, Func Offset: 0x4
	// Line 633, Address: 0x1cd6b8, Func Offset: 0x8
	// Line 640, Address: 0x1cd6d0, Func Offset: 0x20
	// Line 644, Address: 0x1cd6f8, Func Offset: 0x48
	// Line 645, Address: 0x1cd718, Func Offset: 0x68
	// Line 648, Address: 0x1cd720, Func Offset: 0x70
	// Line 651, Address: 0x1cd728, Func Offset: 0x78
	// Line 652, Address: 0x1cd73c, Func Offset: 0x8c
	// Line 655, Address: 0x1cd740, Func Offset: 0x90
	// Line 652, Address: 0x1cd744, Func Offset: 0x94
	// Line 653, Address: 0x1cd748, Func Offset: 0x98
	// Line 656, Address: 0x1cd750, Func Offset: 0xa0
	// Line 658, Address: 0x1cd754, Func Offset: 0xa4
	// Line 659, Address: 0x1cd760, Func Offset: 0xb0
	// Line 663, Address: 0x1cd768, Func Offset: 0xb8
	// Line 664, Address: 0x1cd77c, Func Offset: 0xcc
	// Line 667, Address: 0x1cd780, Func Offset: 0xd0
	// Line 664, Address: 0x1cd784, Func Offset: 0xd4
	// Line 665, Address: 0x1cd788, Func Offset: 0xd8
	// Line 668, Address: 0x1cd790, Func Offset: 0xe0
	// Line 669, Address: 0x1cd794, Func Offset: 0xe4
	// Line 670, Address: 0x1cd79c, Func Offset: 0xec
	// Line 671, Address: 0x1cd7a0, Func Offset: 0xf0
	// Func End, Address: 0x1cd7b8, Func Offset: 0x108
}

// 
// Start address: 0x1cd7c0
void sfAstarSearchClear(_anon0* work)
{
	// Line 682, Address: 0x1cd7c0, Func Offset: 0
	// Line 683, Address: 0x1cd7d0, Func Offset: 0x10
	// Line 684, Address: 0x1cd7e4, Func Offset: 0x24
	// Line 685, Address: 0x1cd7ec, Func Offset: 0x2c
	// Line 690, Address: 0x1cd7f0, Func Offset: 0x30
	// Func End, Address: 0x1cd800, Func Offset: 0x40
}

// 
// Start address: 0x1cd800
int sfAstarSearch(_anon0* work)
{
	_sfAsNode* start;
	_sfAsNode* goal;
	_sfAsNode* node;
	int rtv;
	_sfAsNode tmp;
	_sfAsNode* new_node;
	float NewCost;
	_sfAsNode* node_on_open;
	_sfAsNode* node_on_closed;
	// Line 705, Address: 0x1cd800, Func Offset: 0
	// Line 710, Address: 0x1cd810, Func Offset: 0x10
	// Line 705, Address: 0x1cd814, Func Offset: 0x14
	// Line 717, Address: 0x1cd82c, Func Offset: 0x2c
	// Line 713, Address: 0x1cd830, Func Offset: 0x30
	// Line 705, Address: 0x1cd834, Func Offset: 0x34
	// Line 717, Address: 0x1cd838, Func Offset: 0x38
	// Line 718, Address: 0x1cd844, Func Offset: 0x44
	// Line 721, Address: 0x1cd84c, Func Offset: 0x4c
	// Line 722, Address: 0x1cd854, Func Offset: 0x54
	// Line 723, Address: 0x1cd864, Func Offset: 0x64
	// Line 724, Address: 0x1cd868, Func Offset: 0x68
	// Line 728, Address: 0x1cd884, Func Offset: 0x84
	// Line 725, Address: 0x1cd888, Func Offset: 0x88
	// Line 728, Address: 0x1cd88c, Func Offset: 0x8c
	// Line 725, Address: 0x1cd890, Func Offset: 0x90
	// Line 728, Address: 0x1cd898, Func Offset: 0x98
	// Line 731, Address: 0x1cd8a0, Func Offset: 0xa0
	// Line 735, Address: 0x1cd8b8, Func Offset: 0xb8
	// Line 736, Address: 0x1cd8c0, Func Offset: 0xc0
	// Line 737, Address: 0x1cd8cc, Func Offset: 0xcc
	// Line 739, Address: 0x1cd8f4, Func Offset: 0xf4
	// Line 741, Address: 0x1cd8fc, Func Offset: 0xfc
	// Line 743, Address: 0x1cd904, Func Offset: 0x104
	// Line 746, Address: 0x1cd90c, Func Offset: 0x10c
	// Line 751, Address: 0x1cd910, Func Offset: 0x110
	// Line 755, Address: 0x1cd91c, Func Offset: 0x11c
	// Line 756, Address: 0x1cd928, Func Offset: 0x128
	// Line 759, Address: 0x1cd930, Func Offset: 0x130
	// Line 761, Address: 0x1cd938, Func Offset: 0x138
	// Line 762, Address: 0x1cd948, Func Offset: 0x148
	// Line 766, Address: 0x1cd964, Func Offset: 0x164
	// Line 762, Address: 0x1cd968, Func Offset: 0x168
	// Line 763, Address: 0x1cd96c, Func Offset: 0x16c
	// Line 766, Address: 0x1cd970, Func Offset: 0x170
	// Line 769, Address: 0x1cd980, Func Offset: 0x180
	// Line 766, Address: 0x1cd984, Func Offset: 0x184
	// Line 769, Address: 0x1cd988, Func Offset: 0x188
	// Line 774, Address: 0x1cd998, Func Offset: 0x198
	// Line 777, Address: 0x1cd9c8, Func Offset: 0x1c8
	// Line 778, Address: 0x1cd9d0, Func Offset: 0x1d0
	// Line 781, Address: 0x1cd9d8, Func Offset: 0x1d8
	// Line 782, Address: 0x1cd9dc, Func Offset: 0x1dc
	// Line 783, Address: 0x1cd9f8, Func Offset: 0x1f8
	// Line 785, Address: 0x1cda04, Func Offset: 0x204
	// Line 787, Address: 0x1cda0c, Func Offset: 0x20c
	// Line 788, Address: 0x1cda1c, Func Offset: 0x21c
	// Line 789, Address: 0x1cda24, Func Offset: 0x224
	// Line 791, Address: 0x1cda28, Func Offset: 0x228
	// Line 793, Address: 0x1cda30, Func Offset: 0x230
	// Line 794, Address: 0x1cda3c, Func Offset: 0x23c
	// Line 797, Address: 0x1cda48, Func Offset: 0x248
	// Line 800, Address: 0x1cda54, Func Offset: 0x254
	// Line 802, Address: 0x1cda78, Func Offset: 0x278
	// Line 803, Address: 0x1cda80, Func Offset: 0x280
	// Line 807, Address: 0x1cda98, Func Offset: 0x298
	// Line 808, Address: 0x1cdaa0, Func Offset: 0x2a0
	// Line 809, Address: 0x1cdaa4, Func Offset: 0x2a4
	// Func End, Address: 0x1cdad0, Func Offset: 0x2d0
}

