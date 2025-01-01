typedef struct _DmaTask;
typedef struct _anon0;

typedef int(*type_0)(int);

typedef _DmaTask type_1[1024];
typedef _DmaTask type_2[10];
typedef int type_3[10];
typedef int type_4[10];
typedef unsigned int* type_5[10];

struct _DmaTask
{
	_DmaTask* next;
	_DmaTask* prev;
	_DmaTask* wait;
	void* addr;
	unsigned int chcr;
	unsigned int qwc;
	int chan_no;
	int executed;
	int set_wait;
	int task_id;
};

struct _anon0
{
	_DmaTask task_queue[1024];
	_DmaTask* free_head;
	_DmaTask remain_heads[10];
	int stopped[10];
};

unsigned int* chcr_addrs[10];
_anon0 dma_queue_work;
int handler_func_id[10];
int(*sgDmaQueueHandler)(int);

void dump_error_channel(int chan_no);
_DmaTask* AddTask(int chan_no, int chcr_set, void* addr, int qwc);
_DmaTask* RemoveTask(_DmaTask* task);
void ExecTask(_DmaTask* task);
int sgDmaQueueHandler(int chan_no);
void sgDmaQueueInit();
void sgDmaQueueQuit();
void sgDmaQueueChannelStart(int chan_no);
int sgDmaQueueChannelStop(int chan_no);
int sgDmaQueueEntryTask(int channel_no, unsigned int chcr_set, void* addr, int qwc);
int sgDmaQueueSync(int chan_no, int mode);
void sgDmaQueueSend(int chan_no, void* addr, int tte);
void sgDmaQueueSendN(int chan_no, void* addr, int qwc);

// 
// Start address: 0x14a4c0
void dump_error_channel(int chan_no)
{
	_DmaTask* task;
	_DmaTask* rem;
	int n;
	// Line 273, Address: 0x14a4c0, Func Offset: 0
	// Line 279, Address: 0x14a4d4, Func Offset: 0x14
	// Line 280, Address: 0x14a4e4, Func Offset: 0x24
	// Line 282, Address: 0x14a4f0, Func Offset: 0x30
	// Line 280, Address: 0x14a4f4, Func Offset: 0x34
	// Line 281, Address: 0x14a508, Func Offset: 0x48
	// Line 282, Address: 0x14a50c, Func Offset: 0x4c
	// Line 283, Address: 0x14a51c, Func Offset: 0x5c
	// Line 284, Address: 0x14a528, Func Offset: 0x68
	// Line 286, Address: 0x14a52c, Func Offset: 0x6c
	// Line 287, Address: 0x14a548, Func Offset: 0x88
	// Line 288, Address: 0x14a554, Func Offset: 0x94
	// Func End, Address: 0x14a568, Func Offset: 0xa8
}

// 
// Start address: 0x14a570
_DmaTask* AddTask(int chan_no, int chcr_set, void* addr, int qwc)
{
	_DmaTask* new_task;
	_DmaTask* list_head;
	// Line 299, Address: 0x14a570, Func Offset: 0
	// Line 300, Address: 0x14a578, Func Offset: 0x8
	// Line 301, Address: 0x14a580, Func Offset: 0x10
	// Line 316, Address: 0x14a588, Func Offset: 0x18
	// Line 303, Address: 0x14a594, Func Offset: 0x24
	// Line 316, Address: 0x14a598, Func Offset: 0x28
	// Line 303, Address: 0x14a5ac, Func Offset: 0x3c
	// Line 305, Address: 0x14a5b4, Func Offset: 0x44
	// Line 306, Address: 0x14a5b8, Func Offset: 0x48
	// Line 307, Address: 0x14a5bc, Func Offset: 0x4c
	// Line 308, Address: 0x14a5c0, Func Offset: 0x50
	// Line 309, Address: 0x14a5c4, Func Offset: 0x54
	// Line 310, Address: 0x14a5c8, Func Offset: 0x58
	// Line 311, Address: 0x14a5cc, Func Offset: 0x5c
	// Line 317, Address: 0x14a5d0, Func Offset: 0x60
	// Line 318, Address: 0x14a5d4, Func Offset: 0x64
	// Line 319, Address: 0x14a5dc, Func Offset: 0x6c
	// Line 320, Address: 0x14a5e4, Func Offset: 0x74
	// Line 329, Address: 0x14a5e8, Func Offset: 0x78
	// Func End, Address: 0x14a5f0, Func Offset: 0x80
}

// 
// Start address: 0x14a5f0
_DmaTask* RemoveTask(_DmaTask* task)
{
	_DmaTask* prev;
	_DmaTask* next;
	// Line 364, Address: 0x14a5f0, Func Offset: 0
	// Line 365, Address: 0x14a5f4, Func Offset: 0x4
	// Line 367, Address: 0x14a5f8, Func Offset: 0x8
	// Line 370, Address: 0x14a5fc, Func Offset: 0xc
	// Line 371, Address: 0x14a604, Func Offset: 0x14
	// Line 372, Address: 0x14a610, Func Offset: 0x20
	// Line 378, Address: 0x14a618, Func Offset: 0x28
	// Func End, Address: 0x14a620, Func Offset: 0x30
}

// 
// Start address: 0x14a620
void ExecTask(_DmaTask* task)
{
	unsigned int* chcr;
	unsigned int t;
	// Line 415, Address: 0x14a620, Func Offset: 0
	// Line 419, Address: 0x14a634, Func Offset: 0x14
	// Line 421, Address: 0x14a640, Func Offset: 0x20
	// Line 427, Address: 0x14a658, Func Offset: 0x38
	// Line 428, Address: 0x14a668, Func Offset: 0x48
	// Line 429, Address: 0x14a680, Func Offset: 0x60
	// Line 430, Address: 0x14a688, Func Offset: 0x68
	// Line 432, Address: 0x14a690, Func Offset: 0x70
	// Line 434, Address: 0x14a6a0, Func Offset: 0x80
	// Line 435, Address: 0x14a6a8, Func Offset: 0x88
	// Line 443, Address: 0x14a6b8, Func Offset: 0x98
	// Line 444, Address: 0x14a6c0, Func Offset: 0xa0
	// Line 445, Address: 0x14a724, Func Offset: 0x104
	// Func End, Address: 0x14a740, Func Offset: 0x120
}

// 
// Start address: 0x14a740
int sgDmaQueueHandler(int chan_no)
{
	_DmaTask* remain_head;
	_DmaTask* exec_task;
	_DmaTask* wait_task;
	_DmaTask* next_task;
	// Line 453, Address: 0x14a740, Func Offset: 0
	// Line 452, Address: 0x14a744, Func Offset: 0x4
	// Line 453, Address: 0x14a748, Func Offset: 0x8
	// Line 452, Address: 0x14a74c, Func Offset: 0xc
	// Line 453, Address: 0x14a750, Func Offset: 0x10
	// Line 452, Address: 0x14a754, Func Offset: 0x14
	// Line 453, Address: 0x14a758, Func Offset: 0x18
	// Line 452, Address: 0x14a760, Func Offset: 0x20
	// Line 453, Address: 0x14a764, Func Offset: 0x24
	// Line 452, Address: 0x14a76c, Func Offset: 0x2c
	// Line 453, Address: 0x14a770, Func Offset: 0x30
	// Line 454, Address: 0x14a774, Func Offset: 0x34
	// Line 457, Address: 0x14a778, Func Offset: 0x38
	// Line 459, Address: 0x14a784, Func Offset: 0x44
	// Line 460, Address: 0x14a78c, Func Offset: 0x4c
	// Line 461, Address: 0x14a794, Func Offset: 0x54
	// Line 465, Address: 0x14a798, Func Offset: 0x58
	// Line 467, Address: 0x14a7a0, Func Offset: 0x60
	// Line 468, Address: 0x14a7a8, Func Offset: 0x68
	// Line 469, Address: 0x14a7d4, Func Offset: 0x94
	// Line 472, Address: 0x14a7dc, Func Offset: 0x9c
	// Line 473, Address: 0x14a7e0, Func Offset: 0xa0
	// Line 474, Address: 0x14a7e4, Func Offset: 0xa4
	// Line 476, Address: 0x14a7f0, Func Offset: 0xb0
	// Line 477, Address: 0x14a7f8, Func Offset: 0xb8
	// Line 478, Address: 0x14a7fc, Func Offset: 0xbc
	// Line 480, Address: 0x14a804, Func Offset: 0xc4
	// Line 481, Address: 0x14a80c, Func Offset: 0xcc
	// Line 482, Address: 0x14a814, Func Offset: 0xd4
	// Line 483, Address: 0x14a818, Func Offset: 0xd8
	// Line 484, Address: 0x14a820, Func Offset: 0xe0
	// Line 485, Address: 0x14a828, Func Offset: 0xe8
	// Line 486, Address: 0x14a830, Func Offset: 0xf0
	// Func End, Address: 0x14a848, Func Offset: 0x108
}

// 
// Start address: 0x14a850
void sgDmaQueueInit()
{
	int i;
	_DmaTask* task;
	// Line 524, Address: 0x14a850, Func Offset: 0
	// Line 528, Address: 0x14a854, Func Offset: 0x4
	// Line 524, Address: 0x14a858, Func Offset: 0x8
	// Line 528, Address: 0x14a85c, Func Offset: 0xc
	// Line 532, Address: 0x14a86c, Func Offset: 0x1c
	// Line 533, Address: 0x14a870, Func Offset: 0x20
	// Line 532, Address: 0x14a874, Func Offset: 0x24
	// Line 534, Address: 0x14a878, Func Offset: 0x28
	// Line 533, Address: 0x14a87c, Func Offset: 0x2c
	// Line 535, Address: 0x14a880, Func Offset: 0x30
	// Line 536, Address: 0x14a888, Func Offset: 0x38
	// Line 535, Address: 0x14a88c, Func Offset: 0x3c
	// Line 536, Address: 0x14a894, Func Offset: 0x44
	// Line 535, Address: 0x14a89c, Func Offset: 0x4c
	// Line 536, Address: 0x14a8a4, Func Offset: 0x54
	// Line 535, Address: 0x14a8b0, Func Offset: 0x60
	// Line 536, Address: 0x14a8b8, Func Offset: 0x68
	// Line 535, Address: 0x14a8c4, Func Offset: 0x74
	// Line 536, Address: 0x14a8cc, Func Offset: 0x7c
	// Line 535, Address: 0x14a8dc, Func Offset: 0x8c
	// Line 540, Address: 0x14a8e0, Func Offset: 0x90
	// Line 535, Address: 0x14a8e4, Func Offset: 0x94
	// Line 536, Address: 0x14a8e8, Func Offset: 0x98
	// Line 540, Address: 0x14a8f0, Func Offset: 0xa0
	// Line 536, Address: 0x14a8f4, Func Offset: 0xa4
	// Line 541, Address: 0x14a8f8, Func Offset: 0xa8
	// Line 535, Address: 0x14a8fc, Func Offset: 0xac
	// Line 536, Address: 0x14a904, Func Offset: 0xb4
	// Line 535, Address: 0x14a910, Func Offset: 0xc0
	// Line 536, Address: 0x14a918, Func Offset: 0xc8
	// Line 535, Address: 0x14a924, Func Offset: 0xd4
	// Line 536, Address: 0x14a928, Func Offset: 0xd8
	// Line 537, Address: 0x14a92c, Func Offset: 0xdc
	// Line 542, Address: 0x14a930, Func Offset: 0xe0
	// Line 543, Address: 0x14a934, Func Offset: 0xe4
	// Line 542, Address: 0x14a938, Func Offset: 0xe8
	// Line 543, Address: 0x14a93c, Func Offset: 0xec
	// Line 544, Address: 0x14a940, Func Offset: 0xf0
	// Line 543, Address: 0x14a944, Func Offset: 0xf4
	// Line 544, Address: 0x14a948, Func Offset: 0xf8
	// Line 542, Address: 0x14a954, Func Offset: 0x104
	// Line 544, Address: 0x14a958, Func Offset: 0x108
	// Line 547, Address: 0x14a978, Func Offset: 0x128
	// Line 548, Address: 0x14a988, Func Offset: 0x138
	// Line 550, Address: 0x14a9ac, Func Offset: 0x15c
	// Func End, Address: 0x14a9b8, Func Offset: 0x168
}

// 
// Start address: 0x14a9c0
void sgDmaQueueQuit()
{
	int i;
	// Line 585, Address: 0x14a9c0, Func Offset: 0
	// Line 587, Address: 0x14a9cc, Func Offset: 0xc
	// Line 588, Address: 0x14a9d4, Func Offset: 0x14
	// Line 589, Address: 0x14a9e0, Func Offset: 0x20
	// Line 590, Address: 0x14a9ec, Func Offset: 0x2c
	// Line 592, Address: 0x14a9f4, Func Offset: 0x34
	// Line 593, Address: 0x14aa08, Func Offset: 0x48
	// Line 596, Address: 0x14aa10, Func Offset: 0x50
	// Line 597, Address: 0x14aa24, Func Offset: 0x64
	// Line 598, Address: 0x14aa2c, Func Offset: 0x6c
	// Line 599, Address: 0x14aa34, Func Offset: 0x74
	// Line 601, Address: 0x14aa38, Func Offset: 0x78
	// Line 602, Address: 0x14aa48, Func Offset: 0x88
	// Line 603, Address: 0x14aa50, Func Offset: 0x90
	// Func End, Address: 0x14aa64, Func Offset: 0xa4
}

// 
// Start address: 0x14aa70
void sgDmaQueueChannelStart(int chan_no)
{
	int id;
	// Line 634, Address: 0x14aa70, Func Offset: 0
	// Line 637, Address: 0x14aa90, Func Offset: 0x20
	// Line 638, Address: 0x14aa9c, Func Offset: 0x2c
	// Line 640, Address: 0x14aaac, Func Offset: 0x3c
	// Line 642, Address: 0x14aab0, Func Offset: 0x40
	// Line 643, Address: 0x14aab8, Func Offset: 0x48
	// Func End, Address: 0x14aacc, Func Offset: 0x5c
}

// 
// Start address: 0x14aad0
int sgDmaQueueChannelStop(int chan_no)
{
	_DmaTask* task;
	// Line 684, Address: 0x14aad0, Func Offset: 0
	// Line 681, Address: 0x14aad4, Func Offset: 0x4
	// Line 684, Address: 0x14aad8, Func Offset: 0x8
	// Line 681, Address: 0x14aae0, Func Offset: 0x10
	// Line 684, Address: 0x14aae4, Func Offset: 0x14
	// Line 681, Address: 0x14aaec, Func Offset: 0x1c
	// Line 684, Address: 0x14aaf0, Func Offset: 0x20
	// Line 685, Address: 0x14aaf8, Func Offset: 0x28
	// Line 686, Address: 0x14ab04, Func Offset: 0x34
	// Line 688, Address: 0x14ab1c, Func Offset: 0x4c
	// Line 689, Address: 0x14ab28, Func Offset: 0x58
	// Line 690, Address: 0x14ab38, Func Offset: 0x68
	// Line 689, Address: 0x14ab3c, Func Offset: 0x6c
	// Line 690, Address: 0x14ab44, Func Offset: 0x74
	// Line 691, Address: 0x14ab4c, Func Offset: 0x7c
	// Line 694, Address: 0x14ab50, Func Offset: 0x80
	// Line 695, Address: 0x14ab58, Func Offset: 0x88
	// Func End, Address: 0x14ab68, Func Offset: 0x98
}

// 
// Start address: 0x14ab70
int sgDmaQueueEntryTask(int channel_no, unsigned int chcr_set, void* addr, int qwc)
{
	_DmaTask* task;
	_DmaTask* head;
	// Line 895, Address: 0x14ab70, Func Offset: 0
	// Line 901, Address: 0x14ab94, Func Offset: 0x24
	// Line 904, Address: 0x14ab9c, Func Offset: 0x2c
	// Line 905, Address: 0x14aba8, Func Offset: 0x38
	// Line 904, Address: 0x14abac, Func Offset: 0x3c
	// Line 905, Address: 0x14abb0, Func Offset: 0x40
	// Line 904, Address: 0x14abb4, Func Offset: 0x44
	// Line 905, Address: 0x14abb8, Func Offset: 0x48
	// Line 904, Address: 0x14abbc, Func Offset: 0x4c
	// Line 905, Address: 0x14abc0, Func Offset: 0x50
	// Line 904, Address: 0x14abc4, Func Offset: 0x54
	// Line 905, Address: 0x14abc8, Func Offset: 0x58
	// Line 906, Address: 0x14abd0, Func Offset: 0x60
	// Line 908, Address: 0x14abd8, Func Offset: 0x68
	// Line 909, Address: 0x14abe0, Func Offset: 0x70
	// Line 913, Address: 0x14abe8, Func Offset: 0x78
	// Line 917, Address: 0x14abf4, Func Offset: 0x84
	// Line 918, Address: 0x14abfc, Func Offset: 0x8c
	// Line 920, Address: 0x14ac00, Func Offset: 0x90
	// Line 921, Address: 0x14ac08, Func Offset: 0x98
	// Line 922, Address: 0x14ac10, Func Offset: 0xa0
	// Func End, Address: 0x14ac2c, Func Offset: 0xbc
}

// 
// Start address: 0x14ac30
int sgDmaQueueSync(int chan_no, int mode)
{
	_DmaTask* task;
	unsigned int t;
	// Line 1064, Address: 0x14ac30, Func Offset: 0
	// Line 1065, Address: 0x14ac34, Func Offset: 0x4
	// Line 1064, Address: 0x14ac38, Func Offset: 0x8
	// Line 1065, Address: 0x14ac3c, Func Offset: 0xc
	// Line 1064, Address: 0x14ac40, Func Offset: 0x10
	// Line 1065, Address: 0x14ac44, Func Offset: 0x14
	// Line 1074, Address: 0x14ac58, Func Offset: 0x28
	// Line 1065, Address: 0x14ac5c, Func Offset: 0x2c
	// Line 1074, Address: 0x14ac60, Func Offset: 0x30
	// Line 1066, Address: 0x14ac64, Func Offset: 0x34
	// Line 1074, Address: 0x14ac68, Func Offset: 0x38
	// Line 1075, Address: 0x14ac78, Func Offset: 0x48
	// Line 1078, Address: 0x14ac80, Func Offset: 0x50
	// Line 1081, Address: 0x14ac90, Func Offset: 0x60
	// Line 1080, Address: 0x14ac94, Func Offset: 0x64
	// Line 1081, Address: 0x14ac98, Func Offset: 0x68
	// Line 1082, Address: 0x14aca8, Func Offset: 0x78
	// Line 1083, Address: 0x14acb0, Func Offset: 0x80
	// Line 1085, Address: 0x14acb8, Func Offset: 0x88
	// Line 1088, Address: 0x14acc0, Func Offset: 0x90
	// Line 1096, Address: 0x14acd0, Func Offset: 0xa0
	// Line 1097, Address: 0x14acd8, Func Offset: 0xa8
	// Func End, Address: 0x14ace8, Func Offset: 0xb8
}

// 
// Start address: 0x14acf0
void sgDmaQueueSend(int chan_no, void* addr, int tte)
{
	int chcr_set;
	unsigned int daddr;
	unsigned int t;
	// Line 1207, Address: 0x14acf0, Func Offset: 0
	// Line 1211, Address: 0x14ad0c, Func Offset: 0x1c
	// Line 1212, Address: 0x14ad14, Func Offset: 0x24
	// Line 1214, Address: 0x14ad18, Func Offset: 0x28
	// Line 1215, Address: 0x14ad20, Func Offset: 0x30
	// Line 1214, Address: 0x14ad24, Func Offset: 0x34
	// Line 1215, Address: 0x14ad28, Func Offset: 0x38
	// Line 1216, Address: 0x14ad34, Func Offset: 0x44
	// Line 1219, Address: 0x14ad38, Func Offset: 0x48
	// Line 1220, Address: 0x14ad98, Func Offset: 0xa8
	// Func End, Address: 0x14adb4, Func Offset: 0xc4
}

// 
// Start address: 0x14adc0
void sgDmaQueueSendN(int chan_no, void* addr, int qwc)
{
	unsigned int daddr;
	unsigned int t;
	// Line 1259, Address: 0x14adc0, Func Offset: 0
	// Line 1263, Address: 0x14adc4, Func Offset: 0x4
	// Line 1259, Address: 0x14adc8, Func Offset: 0x8
	// Line 1263, Address: 0x14adcc, Func Offset: 0xc
	// Line 1259, Address: 0x14add0, Func Offset: 0x10
	// Line 1264, Address: 0x14add4, Func Offset: 0x14
	// Line 1259, Address: 0x14add8, Func Offset: 0x18
	// Line 1263, Address: 0x14addc, Func Offset: 0x1c
	// Line 1259, Address: 0x14ade0, Func Offset: 0x20
	// Line 1264, Address: 0x14ade4, Func Offset: 0x24
	// Line 1259, Address: 0x14ade8, Func Offset: 0x28
	// Line 1264, Address: 0x14adf0, Func Offset: 0x30
	// Line 1265, Address: 0x14adf8, Func Offset: 0x38
	// Line 1268, Address: 0x14ae00, Func Offset: 0x40
	// Line 1269, Address: 0x14ae60, Func Offset: 0xa0
	// Func End, Address: 0x14ae7c, Func Offset: 0xbc
}

