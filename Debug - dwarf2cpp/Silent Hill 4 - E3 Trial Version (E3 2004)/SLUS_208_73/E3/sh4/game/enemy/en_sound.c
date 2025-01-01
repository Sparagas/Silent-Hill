typedef struct sfObj;
typedef union sgQsortEasyData;
typedef struct EnemySoundQueue;
typedef struct EnemySoundLimitWork;
typedef struct sfAllocateList;
typedef struct EnemySoundTypeControl;
typedef union _anon0;
typedef struct EnemySoundTypeControlData;
typedef struct EnemySoundWork;
typedef enum EnemySoundType : unsigned char;

typedef void(*type_1)(sfObj*);
typedef void(*type_2)(sfObj*, float*);
typedef void(*type_4)(sfObj*);
typedef void(*type_16)(sfObj*, float*);
typedef void(*type_17)(sfObj*, float*);

typedef _anon0 type_0[256];
typedef int type_3[0];
typedef float type_5[4];
typedef sfAllocateList type_6[10];
typedef EnemySoundTypeControl* type_7[10];
typedef char type_8[10];
typedef int type_9[13];
typedef short type_10[2];
typedef unsigned short type_11[2];
typedef char type_12[4];
typedef unsigned char type_13[4];
typedef float type_14[1];
typedef int type_15[1];

struct sfObj
{
	_anon0 fwork[256];
	_anon0* work;
	void(*func)(sfObj*);
	_anon0* work_pt0;
	_anon0* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon0* sys_work;
	_anon0* scene_work;
	_anon0* event_work;
	_anon0* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

union sgQsortEasyData
{
	unsigned long ul;
	int value;
	void* data;
};

struct EnemySoundQueue
{
	int call_no;
	float vol;
	sfObj* obj;
	void(*getfunc)(sfObj*, float*);
	float delay;
};

struct EnemySoundLimitWork
{
	sfObj* obj;
	EnemySoundType type;
};

struct sfAllocateList
{
	char* work_top;
	unsigned int size;
	int number;
};

struct EnemySoundTypeControl
{
	sfObj* obj;
	EnemySoundTypeControlData* data;
	int rank;
	int sound_rank;
	int slot;
	float volume;
	float base_volume;
	EnemySoundTypeControl* next;
	EnemySoundTypeControl* prev;
};

union _anon0
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

struct EnemySoundTypeControlData
{
	EnemySoundType sound_type;
	float fadein_speed;
	float fadeout_speed;
	int call_no[0];
};

struct EnemySoundWork
{
	sfAllocateList queue;
	sfAllocateList limit[10];
	EnemySoundTypeControl* control[10];
	float finish_timer;
};

enum EnemySoundType : unsigned char
{
	EN_SOUND_TYPE_FOOTSTEPS,
	EN_SOUND_TYPE_BUZZ,
	EN_SOUND_TYPE_MUCUS,
	EN_SOUND_TYPE_JINMEN,
	EN_SOUND_TYPE_HYENA,
	EN_SOUND_TYPE_MMZ,
	EN_SOUND_TYPE_MUSH,
	EN_SOUND_TYPE_TWINS,
	EN_SOUND_TYPE_FLAMES,
	EN_SOUND_TYPE_WHEEL,
	EN_SOUND_TYPE_MAX
};

char sound_type_limit[10];
EnemySoundWork en_sound_work;
void(*EnemyObjGetTargetPos)(sfObj*, float*);
int footstep_sounds[13];

void EnemySoundWorkInit();
void EnemySoundWorkAllDestruct();
int EnemySoundCall(int call_no, float vol, float* pos);
int EnemySoundCallT(sfObj* obj, int call_no);
int EnemySoundCallTX(sfObj* obj, int call_no);
int EnemySoundCallTR(sfObj* obj, int call_no, float time);
int EnemySoundCallFixT(sfObj* obj, int call_no);
int EnemySoundCallFixTX(sfObj* obj, int call_no);
void EnemySoundCallChange(int call_no, int slot, float vol, float* pos);
void EnemySoundCallChangeT(sfObj* obj, int call_no, int slot);
void EnemySoundCallDelayT(sfObj* obj, int call_no, float delay);
void EnemySoundCallDelayFixT(sfObj* obj, int call_no, float delay);
void EnemySoundCallFinishT(sfObj* obj, int call_no);
void EnemySoundCallFinishFixT(sfObj* obj, int call_no);
void EnemySoundStop(int call_no, int slot);
void EnemySoundADXStart(int call_no, float volume);
void EnemySoundADXPause(int call_no);
void EnemySoundADXRestart();
void EnemySoundADXStop(int call_no);
void EnemySoundADXStopSudden(int call_no);
void EnemySoundADXChange(int call_no, float volume, float* pos);
int EnemySoundADXCheckPlayNow(int call_no);
int EnemySoundCheckFinish();
void EnemySoundCallFootStep(float* pos, float volume);
void EnemySoundTypeEntry(sfObj* obj, EnemySoundType type);
void EnemySoundTypeRemove(sfObj* obj, EnemySoundType type);
void EnemySoundTypeRemoveAll(sfObj* obj);
int EnemySoundTypeRank(sfObj* obj, EnemySoundType type);
EnemySoundTypeControl* EnemySoundTypeControlConstruct(sfObj* obj, EnemySoundTypeControlData* data);
void EnemySoundTypeControlDestruct(EnemySoundTypeControl* pstc);
void EnemySoundTypeChangeVolume(sfObj* obj, EnemySoundType type, float volume);
void queue_handle();
void sort_data(EnemySoundType type);
void sort_control();
void control_handle();
void EnemySoundHandle();

// 
// Start address: 0x1a4d60
void EnemySoundWorkInit()
{
	int i;
	// Line 84, Address: 0x1a4d60, Func Offset: 0
	// Line 86, Address: 0x1a4d64, Func Offset: 0x4
	// Line 84, Address: 0x1a4d68, Func Offset: 0x8
	// Line 86, Address: 0x1a4d6c, Func Offset: 0xc
	// Line 84, Address: 0x1a4d70, Func Offset: 0x10
	// Line 86, Address: 0x1a4d74, Func Offset: 0x14
	// Line 84, Address: 0x1a4d78, Func Offset: 0x18
	// Line 86, Address: 0x1a4d7c, Func Offset: 0x1c
	// Line 87, Address: 0x1a4d84, Func Offset: 0x24
	// Line 88, Address: 0x1a4d98, Func Offset: 0x38
	// Line 91, Address: 0x1a4da4, Func Offset: 0x44
	// Line 90, Address: 0x1a4da8, Func Offset: 0x48
	// Line 91, Address: 0x1a4dac, Func Offset: 0x4c
	// Line 90, Address: 0x1a4db0, Func Offset: 0x50
	// Line 91, Address: 0x1a4db4, Func Offset: 0x54
	// Line 92, Address: 0x1a4dbc, Func Offset: 0x5c
	// Func End, Address: 0x1a4dd4, Func Offset: 0x74
}

// 
// Start address: 0x1a4de0
void EnemySoundWorkAllDestruct()
{
	int type;
	// Line 97, Address: 0x1a4de0, Func Offset: 0
	// Line 99, Address: 0x1a4de4, Func Offset: 0x4
	// Line 97, Address: 0x1a4de8, Func Offset: 0x8
	// Line 99, Address: 0x1a4dec, Func Offset: 0xc
	// Line 97, Address: 0x1a4df0, Func Offset: 0x10
	// Line 99, Address: 0x1a4df8, Func Offset: 0x18
	// Line 100, Address: 0x1a4e00, Func Offset: 0x20
	// Line 105, Address: 0x1a4e10, Func Offset: 0x30
	// Line 107, Address: 0x1a4e18, Func Offset: 0x38
	// Line 106, Address: 0x1a4e1c, Func Offset: 0x3c
	// Line 107, Address: 0x1a4e20, Func Offset: 0x40
	// Line 106, Address: 0x1a4e24, Func Offset: 0x44
	// Line 107, Address: 0x1a4e28, Func Offset: 0x48
	// Line 108, Address: 0x1a4e30, Func Offset: 0x50
	// Func End, Address: 0x1a4e48, Func Offset: 0x68
}

// 
// Start address: 0x1a4e50
int EnemySoundCall(int call_no, float vol, float* pos)
{
	int slot;
	// Line 117, Address: 0x1a4e50, Func Offset: 0
	// Line 119, Address: 0x1a4e6c, Func Offset: 0x1c
	// Line 120, Address: 0x1a4e80, Func Offset: 0x30
	// Line 122, Address: 0x1a4e98, Func Offset: 0x48
	// Line 131, Address: 0x1a4ebc, Func Offset: 0x6c
	// Line 132, Address: 0x1a4ec0, Func Offset: 0x70
	// Func End, Address: 0x1a4ed8, Func Offset: 0x88
}

// 
// Start address: 0x1a4ee0
int EnemySoundCallT(sfObj* obj, int call_no)
{
	int slot;
	// Line 142, Address: 0x1a4ee0, Func Offset: 0
	// Line 144, Address: 0x1a4ef8, Func Offset: 0x18
	// Line 145, Address: 0x1a4f08, Func Offset: 0x28
	// Line 147, Address: 0x1a4f28, Func Offset: 0x48
	// Line 148, Address: 0x1a4f38, Func Offset: 0x58
	// Line 149, Address: 0x1a4f48, Func Offset: 0x68
	// Line 150, Address: 0x1a4f4c, Func Offset: 0x6c
	// Func End, Address: 0x1a4f64, Func Offset: 0x84
}

// 
// Start address: 0x1a4f70
int EnemySoundCallTX(sfObj* obj, int call_no)
{
	// Line 160, Address: 0x1a4f70, Func Offset: 0
	// Line 161, Address: 0x1a4f7c, Func Offset: 0xc
	// Line 162, Address: 0x1a4f98, Func Offset: 0x28
	// Func End, Address: 0x1a4fa8, Func Offset: 0x38
}

// 
// Start address: 0x1a4fb0
int EnemySoundCallTR(sfObj* obj, int call_no, float time)
{
	int slot;
	// Line 174, Address: 0x1a4fb0, Func Offset: 0
	// Line 176, Address: 0x1a4fd0, Func Offset: 0x20
	// Line 177, Address: 0x1a4fe0, Func Offset: 0x30
	// Line 179, Address: 0x1a5004, Func Offset: 0x54
	// Line 180, Address: 0x1a5014, Func Offset: 0x64
	// Line 181, Address: 0x1a5018, Func Offset: 0x68
	// Line 183, Address: 0x1a5038, Func Offset: 0x88
	// Line 184, Address: 0x1a5048, Func Offset: 0x98
	// Line 185, Address: 0x1a5058, Func Offset: 0xa8
	// Line 186, Address: 0x1a5060, Func Offset: 0xb0
	// Func End, Address: 0x1a507c, Func Offset: 0xcc
}

// 
// Start address: 0x1a5080
int EnemySoundCallFixT(sfObj* obj, int call_no)
{
	int slot;
	// Line 197, Address: 0x1a5080, Func Offset: 0
	// Line 199, Address: 0x1a5098, Func Offset: 0x18
	// Line 200, Address: 0x1a50a8, Func Offset: 0x28
	// Line 202, Address: 0x1a50c8, Func Offset: 0x48
	// Line 203, Address: 0x1a50d8, Func Offset: 0x58
	// Line 204, Address: 0x1a50e8, Func Offset: 0x68
	// Line 205, Address: 0x1a50ec, Func Offset: 0x6c
	// Func End, Address: 0x1a5104, Func Offset: 0x84
}

// 
// Start address: 0x1a5110
int EnemySoundCallFixTX(sfObj* obj, int call_no)
{
	// Line 216, Address: 0x1a5110, Func Offset: 0
	// Line 217, Address: 0x1a511c, Func Offset: 0xc
	// Line 218, Address: 0x1a5138, Func Offset: 0x28
	// Func End, Address: 0x1a5148, Func Offset: 0x38
}

// 
// Start address: 0x1a5150
void EnemySoundCallChange(int call_no, int slot, float vol, float* pos)
{
	// Line 228, Address: 0x1a5150, Func Offset: 0
	// Line 229, Address: 0x1a5174, Func Offset: 0x24
	// Line 230, Address: 0x1a517c, Func Offset: 0x2c
	// Line 231, Address: 0x1a518c, Func Offset: 0x3c
	// Line 232, Address: 0x1a51b0, Func Offset: 0x60
	// Func End, Address: 0x1a51cc, Func Offset: 0x7c
}

// 
// Start address: 0x1a51d0
void EnemySoundCallChangeT(sfObj* obj, int call_no, int slot)
{
	// Line 239, Address: 0x1a51d0, Func Offset: 0
	// Line 240, Address: 0x1a51e4, Func Offset: 0x14
	// Line 241, Address: 0x1a5204, Func Offset: 0x34
	// Func End, Address: 0x1a5218, Func Offset: 0x48
}

// 
// Start address: 0x1a5220
void EnemySoundCallDelayT(sfObj* obj, int call_no, float delay)
{
	EnemySoundQueue* que;
	// Line 276, Address: 0x1a5220, Func Offset: 0
	// Line 278, Address: 0x1a5238, Func Offset: 0x18
	// Line 279, Address: 0x1a524c, Func Offset: 0x2c
	// Line 280, Address: 0x1a5254, Func Offset: 0x34
	// Line 281, Address: 0x1a5258, Func Offset: 0x38
	// Line 283, Address: 0x1a5260, Func Offset: 0x40
	// Line 282, Address: 0x1a5264, Func Offset: 0x44
	// Line 283, Address: 0x1a5268, Func Offset: 0x48
	// Line 284, Address: 0x1a5270, Func Offset: 0x50
	// Line 285, Address: 0x1a5274, Func Offset: 0x54
	// Func End, Address: 0x1a5290, Func Offset: 0x70
}

// 
// Start address: 0x1a5290
void EnemySoundCallDelayFixT(sfObj* obj, int call_no, float delay)
{
	EnemySoundQueue* que;
	// Line 295, Address: 0x1a5290, Func Offset: 0
	// Line 297, Address: 0x1a52a8, Func Offset: 0x18
	// Line 298, Address: 0x1a52bc, Func Offset: 0x2c
	// Line 299, Address: 0x1a52c4, Func Offset: 0x34
	// Line 300, Address: 0x1a52c8, Func Offset: 0x38
	// Line 302, Address: 0x1a52d0, Func Offset: 0x40
	// Line 301, Address: 0x1a52d4, Func Offset: 0x44
	// Line 302, Address: 0x1a52d8, Func Offset: 0x48
	// Line 303, Address: 0x1a52e0, Func Offset: 0x50
	// Line 304, Address: 0x1a52e4, Func Offset: 0x54
	// Func End, Address: 0x1a5300, Func Offset: 0x70
}

// 
// Start address: 0x1a5300
void EnemySoundCallFinishT(sfObj* obj, int call_no)
{
	float delay;
	// Line 311, Address: 0x1a5300, Func Offset: 0
	// Line 313, Address: 0x1a5304, Func Offset: 0x4
	// Line 311, Address: 0x1a5308, Func Offset: 0x8
	// Line 313, Address: 0x1a530c, Func Offset: 0xc
	// Line 311, Address: 0x1a5310, Func Offset: 0x10
	// Line 313, Address: 0x1a5320, Func Offset: 0x20
	// Line 314, Address: 0x1a5330, Func Offset: 0x30
	// Line 315, Address: 0x1a533c, Func Offset: 0x3c
	// Line 316, Address: 0x1a5348, Func Offset: 0x48
	// Line 317, Address: 0x1a535c, Func Offset: 0x5c
	// Line 319, Address: 0x1a5368, Func Offset: 0x68
	// Line 320, Address: 0x1a5378, Func Offset: 0x78
	// Func End, Address: 0x1a5390, Func Offset: 0x90
}

// 
// Start address: 0x1a5390
void EnemySoundCallFinishFixT(sfObj* obj, int call_no)
{
	float delay;
	// Line 327, Address: 0x1a5390, Func Offset: 0
	// Line 329, Address: 0x1a5394, Func Offset: 0x4
	// Line 327, Address: 0x1a5398, Func Offset: 0x8
	// Line 329, Address: 0x1a539c, Func Offset: 0xc
	// Line 327, Address: 0x1a53a0, Func Offset: 0x10
	// Line 329, Address: 0x1a53b0, Func Offset: 0x20
	// Line 330, Address: 0x1a53c0, Func Offset: 0x30
	// Line 331, Address: 0x1a53cc, Func Offset: 0x3c
	// Line 332, Address: 0x1a53d8, Func Offset: 0x48
	// Line 333, Address: 0x1a53ec, Func Offset: 0x5c
	// Line 335, Address: 0x1a53f8, Func Offset: 0x68
	// Line 336, Address: 0x1a5408, Func Offset: 0x78
	// Func End, Address: 0x1a5420, Func Offset: 0x90
}

// 
// Start address: 0x1a5420
void EnemySoundStop(int call_no, int slot)
{
	// Line 343, Address: 0x1a5420, Func Offset: 0
	// Line 344, Address: 0x1a5424, Func Offset: 0x4
	// Line 345, Address: 0x1a542c, Func Offset: 0xc
	// Line 350, Address: 0x1a5434, Func Offset: 0x14
	// Func End, Address: 0x1a5444, Func Offset: 0x24
}

// 
// Start address: 0x1a5450
void EnemySoundADXStart(int call_no, float volume)
{
	// Line 358, Address: 0x1a5450, Func Offset: 0
	// Func End, Address: 0x1a5464, Func Offset: 0x14
}

// 
// Start address: 0x1a5470
void EnemySoundADXPause(int call_no)
{
	// Line 372, Address: 0x1a5470, Func Offset: 0
	// Func End, Address: 0x1a5480, Func Offset: 0x10
}

// 
// Start address: 0x1a5480
void EnemySoundADXRestart()
{
	// Line 387, Address: 0x1a5480, Func Offset: 0
	// Func End, Address: 0x1a5488, Func Offset: 0x8
}

// 
// Start address: 0x1a5490
void EnemySoundADXStop(int call_no)
{
	// Line 394, Address: 0x1a5490, Func Offset: 0
	// Func End, Address: 0x1a5498, Func Offset: 0x8
}

// 
// Start address: 0x1a54a0
void EnemySoundADXStopSudden(int call_no)
{
	// Line 405, Address: 0x1a54a0, Func Offset: 0
	// Func End, Address: 0x1a54a8, Func Offset: 0x8
}

// 
// Start address: 0x1a54b0
void EnemySoundADXChange(int call_no, float volume, float* pos)
{
	float vol;
	// Line 417, Address: 0x1a54b0, Func Offset: 0
	// Line 419, Address: 0x1a54cc, Func Offset: 0x1c
	// Line 420, Address: 0x1a54dc, Func Offset: 0x2c
	// Line 422, Address: 0x1a54f0, Func Offset: 0x40
	// Line 423, Address: 0x1a54fc, Func Offset: 0x4c
	// Func End, Address: 0x1a5518, Func Offset: 0x68
}

// 
// Start address: 0x1a5520
int EnemySoundADXCheckPlayNow(int call_no)
{
	// Line 440, Address: 0x1a5520, Func Offset: 0
	// Line 441, Address: 0x1a5528, Func Offset: 0x8
	// Line 442, Address: 0x1a5530, Func Offset: 0x10
	// Line 441, Address: 0x1a5534, Func Offset: 0x14
	// Line 442, Address: 0x1a553c, Func Offset: 0x1c
	// Func End, Address: 0x1a5544, Func Offset: 0x24
}

// 
// Start address: 0x1a5550
int EnemySoundCheckFinish()
{
	// Line 451, Address: 0x1a5550, Func Offset: 0
	// Line 452, Address: 0x1a556c, Func Offset: 0x1c
	// Line 453, Address: 0x1a5574, Func Offset: 0x24
	// Line 454, Address: 0x1a5578, Func Offset: 0x28
	// Line 455, Address: 0x1a5584, Func Offset: 0x34
	// Line 454, Address: 0x1a5588, Func Offset: 0x38
	// Line 455, Address: 0x1a558c, Func Offset: 0x3c
	// Line 456, Address: 0x1a5590, Func Offset: 0x40
	// Func End, Address: 0x1a5598, Func Offset: 0x48
}

// 
// Start address: 0x1a55a0
void EnemySoundCallFootStep(float* pos, float volume)
{
	int material;
	int sd;
	// Line 480, Address: 0x1a55a0, Func Offset: 0
	// Line 481, Address: 0x1a55b4, Func Offset: 0x14
	// Line 483, Address: 0x1a55cc, Func Offset: 0x2c
	// Line 485, Address: 0x1a55e0, Func Offset: 0x40
	// Line 486, Address: 0x1a55f4, Func Offset: 0x54
	// Line 488, Address: 0x1a5608, Func Offset: 0x68
	// Line 489, Address: 0x1a5610, Func Offset: 0x70
	// Line 492, Address: 0x1a5618, Func Offset: 0x78
	// Func End, Address: 0x1a562c, Func Offset: 0x8c
}

// 
// Start address: 0x1a5630
void EnemySoundTypeEntry(sfObj* obj, EnemySoundType type)
{
	EnemySoundLimitWork* pw;
	// Line 499, Address: 0x1a5630, Func Offset: 0
	// Line 502, Address: 0x1a5644, Func Offset: 0x14
	// Line 507, Address: 0x1a5658, Func Offset: 0x28
	// Line 508, Address: 0x1a5678, Func Offset: 0x48
	// Line 509, Address: 0x1a5680, Func Offset: 0x50
	// Line 510, Address: 0x1a5684, Func Offset: 0x54
	// Line 512, Address: 0x1a5688, Func Offset: 0x58
	// Func End, Address: 0x1a569c, Func Offset: 0x6c
}

// 
// Start address: 0x1a56a0
void EnemySoundTypeRemove(sfObj* obj, EnemySoundType type)
{
	EnemySoundLimitWork* pw;
	EnemySoundLimitWork* npw;
	sfAllocateList* plist;
	// Line 519, Address: 0x1a56a0, Func Offset: 0
	// Line 522, Address: 0x1a56a4, Func Offset: 0x4
	// Line 519, Address: 0x1a56a8, Func Offset: 0x8
	// Line 522, Address: 0x1a56ac, Func Offset: 0xc
	// Line 519, Address: 0x1a56b4, Func Offset: 0x14
	// Line 522, Address: 0x1a56bc, Func Offset: 0x1c
	// Line 519, Address: 0x1a56c0, Func Offset: 0x20
	// Line 522, Address: 0x1a56c4, Func Offset: 0x24
	// Line 519, Address: 0x1a56cc, Func Offset: 0x2c
	// Line 522, Address: 0x1a56d0, Func Offset: 0x30
	// Line 523, Address: 0x1a56dc, Func Offset: 0x3c
	// Line 524, Address: 0x1a56e8, Func Offset: 0x48
	// Line 525, Address: 0x1a56f0, Func Offset: 0x50
	// Line 526, Address: 0x1a56fc, Func Offset: 0x5c
	// Line 527, Address: 0x1a5708, Func Offset: 0x68
	// Line 528, Address: 0x1a5714, Func Offset: 0x74
	// Line 530, Address: 0x1a5718, Func Offset: 0x78
	// Line 531, Address: 0x1a5720, Func Offset: 0x80
	// Func End, Address: 0x1a573c, Func Offset: 0x9c
}

// 
// Start address: 0x1a5740
void EnemySoundTypeRemoveAll(sfObj* obj)
{
	int type;
	// Line 537, Address: 0x1a5740, Func Offset: 0
	// Line 539, Address: 0x1a5754, Func Offset: 0x14
	// Line 540, Address: 0x1a5758, Func Offset: 0x18
	// Line 541, Address: 0x1a5764, Func Offset: 0x24
	// Line 542, Address: 0x1a5774, Func Offset: 0x34
	// Func End, Address: 0x1a5788, Func Offset: 0x48
}

// 
// Start address: 0x1a5790
int EnemySoundTypeRank(sfObj* obj, EnemySoundType type)
{
	EnemySoundLimitWork* pw;
	sfAllocateList* plist;
	int r;
	// Line 554, Address: 0x1a5790, Func Offset: 0
	// Line 550, Address: 0x1a5794, Func Offset: 0x4
	// Line 554, Address: 0x1a5798, Func Offset: 0x8
	// Line 550, Address: 0x1a579c, Func Offset: 0xc
	// Line 554, Address: 0x1a57a0, Func Offset: 0x10
	// Line 550, Address: 0x1a57a8, Func Offset: 0x18
	// Line 554, Address: 0x1a57ac, Func Offset: 0x1c
	// Line 550, Address: 0x1a57b0, Func Offset: 0x20
	// Line 554, Address: 0x1a57b4, Func Offset: 0x24
	// Line 550, Address: 0x1a57c4, Func Offset: 0x34
	// Line 555, Address: 0x1a57c8, Func Offset: 0x38
	// Line 556, Address: 0x1a57d4, Func Offset: 0x44
	// Line 557, Address: 0x1a57e0, Func Offset: 0x50
	// Line 558, Address: 0x1a57ec, Func Offset: 0x5c
	// Line 559, Address: 0x1a57f4, Func Offset: 0x64
	// Line 561, Address: 0x1a57f8, Func Offset: 0x68
	// Line 562, Address: 0x1a5808, Func Offset: 0x78
	// Line 563, Address: 0x1a5810, Func Offset: 0x80
	// Line 564, Address: 0x1a5818, Func Offset: 0x88
	// Func End, Address: 0x1a5830, Func Offset: 0xa0
}

// 
// Start address: 0x1a5830
EnemySoundTypeControl* EnemySoundTypeControlConstruct(sfObj* obj, EnemySoundTypeControlData* data)
{
	EnemySoundTypeControl* pstc;
	EnemySoundType type;
	// Line 604, Address: 0x1a5830, Func Offset: 0
	// Line 607, Address: 0x1a5848, Func Offset: 0x18
	// Line 608, Address: 0x1a5860, Func Offset: 0x30
	// Line 609, Address: 0x1a5864, Func Offset: 0x34
	// Line 610, Address: 0x1a586c, Func Offset: 0x3c
	// Line 611, Address: 0x1a5878, Func Offset: 0x48
	// Line 612, Address: 0x1a587c, Func Offset: 0x4c
	// Line 613, Address: 0x1a5880, Func Offset: 0x50
	// Line 612, Address: 0x1a5884, Func Offset: 0x54
	// Line 613, Address: 0x1a5888, Func Offset: 0x58
	// Line 615, Address: 0x1a588c, Func Offset: 0x5c
	// Line 614, Address: 0x1a5894, Func Offset: 0x64
	// Line 615, Address: 0x1a5898, Func Offset: 0x68
	// Line 616, Address: 0x1a58a4, Func Offset: 0x74
	// Line 617, Address: 0x1a58b0, Func Offset: 0x80
	// Line 618, Address: 0x1a58b8, Func Offset: 0x88
	// Line 619, Address: 0x1a58bc, Func Offset: 0x8c
	// Line 620, Address: 0x1a58c0, Func Offset: 0x90
	// Line 621, Address: 0x1a58c4, Func Offset: 0x94
	// Line 623, Address: 0x1a58c8, Func Offset: 0x98
	// Func End, Address: 0x1a58e0, Func Offset: 0xb0
}

// 
// Start address: 0x1a58e0
void EnemySoundTypeControlDestruct(EnemySoundTypeControl* pstc)
{
	// Line 629, Address: 0x1a58e0, Func Offset: 0
	// Line 630, Address: 0x1a58f0, Func Offset: 0x10
	// Line 631, Address: 0x1a58fc, Func Offset: 0x1c
	// Line 632, Address: 0x1a5904, Func Offset: 0x24
	// Line 633, Address: 0x1a591c, Func Offset: 0x3c
	// Line 634, Address: 0x1a5924, Func Offset: 0x44
	// Line 633, Address: 0x1a5928, Func Offset: 0x48
	// Line 635, Address: 0x1a592c, Func Offset: 0x4c
	// Line 636, Address: 0x1a5934, Func Offset: 0x54
	// Line 637, Address: 0x1a5938, Func Offset: 0x58
	// Line 638, Address: 0x1a5940, Func Offset: 0x60
	// Line 640, Address: 0x1a5964, Func Offset: 0x84
	// Line 641, Address: 0x1a596c, Func Offset: 0x8c
	// Line 642, Address: 0x1a5974, Func Offset: 0x94
	// Line 643, Address: 0x1a5978, Func Offset: 0x98
	// Func End, Address: 0x1a5988, Func Offset: 0xa8
}

// 
// Start address: 0x1a5990
void EnemySoundTypeChangeVolume(sfObj* obj, EnemySoundType type, float volume)
{
	EnemySoundTypeControl* pstc;
	// Line 654, Address: 0x1a5990, Func Offset: 0
	// Line 655, Address: 0x1a59a8, Func Offset: 0x18
	// Line 656, Address: 0x1a59b0, Func Offset: 0x20
	// Line 657, Address: 0x1a59cc, Func Offset: 0x3c
	// Line 659, Address: 0x1a59d0, Func Offset: 0x40
	// Line 660, Address: 0x1a59d4, Func Offset: 0x44
	// Line 661, Address: 0x1a59e0, Func Offset: 0x50
	// Func End, Address: 0x1a59e8, Func Offset: 0x58
}

// 
// Start address: 0x1a59f0
void queue_handle()
{
	EnemySoundQueue* que;
	EnemySoundQueue* nque;
	sfAllocateList* plist;
	float pos[4];
	float dt;
	// Line 666, Address: 0x1a59f0, Func Offset: 0
	// Line 671, Address: 0x1a5a04, Func Offset: 0x14
	// Line 672, Address: 0x1a5a0c, Func Offset: 0x1c
	// Line 671, Address: 0x1a5a14, Func Offset: 0x24
	// Line 673, Address: 0x1a5a18, Func Offset: 0x28
	// Line 674, Address: 0x1a5a24, Func Offset: 0x34
	// Line 675, Address: 0x1a5a30, Func Offset: 0x40
	// Line 676, Address: 0x1a5a3c, Func Offset: 0x4c
	// Line 675, Address: 0x1a5a40, Func Offset: 0x50
	// Line 676, Address: 0x1a5a44, Func Offset: 0x54
	// Line 677, Address: 0x1a5a5c, Func Offset: 0x6c
	// Line 678, Address: 0x1a5a6c, Func Offset: 0x7c
	// Line 679, Address: 0x1a5a7c, Func Offset: 0x8c
	// Line 682, Address: 0x1a5a88, Func Offset: 0x98
	// Line 683, Address: 0x1a5a90, Func Offset: 0xa0
	// Func End, Address: 0x1a5aac, Func Offset: 0xbc
}

// 
// Start address: 0x1a5ab0
void sort_data(EnemySoundType type)
{
	EnemySoundLimitWork* pw;
	sfAllocateList* plist;
	sgQsortEasyData* pdata;
	sgQsortEasyData* pd;
	int n;
	// Line 695, Address: 0x1a5ab0, Func Offset: 0
	// Line 690, Address: 0x1a5ab4, Func Offset: 0x4
	// Line 695, Address: 0x1a5ab8, Func Offset: 0x8
	// Line 690, Address: 0x1a5abc, Func Offset: 0xc
	// Line 695, Address: 0x1a5ac0, Func Offset: 0x10
	// Line 690, Address: 0x1a5ac8, Func Offset: 0x18
	// Line 695, Address: 0x1a5acc, Func Offset: 0x1c
	// Line 690, Address: 0x1a5ad4, Func Offset: 0x24
	// Line 695, Address: 0x1a5ad8, Func Offset: 0x28
	// Line 690, Address: 0x1a5adc, Func Offset: 0x2c
	// Line 695, Address: 0x1a5ae0, Func Offset: 0x30
	// Line 690, Address: 0x1a5ae4, Func Offset: 0x34
	// Line 697, Address: 0x1a5ae8, Func Offset: 0x38
	// Line 698, Address: 0x1a5af8, Func Offset: 0x48
	// Line 701, Address: 0x1a5b04, Func Offset: 0x54
	// Line 703, Address: 0x1a5b10, Func Offset: 0x60
	// Line 704, Address: 0x1a5b1c, Func Offset: 0x6c
	// Line 705, Address: 0x1a5b28, Func Offset: 0x78
	// Line 706, Address: 0x1a5b2c, Func Offset: 0x7c
	// Line 708, Address: 0x1a5b38, Func Offset: 0x88
	// Line 706, Address: 0x1a5b40, Func Offset: 0x90
	// Line 708, Address: 0x1a5b44, Func Offset: 0x94
	// Line 709, Address: 0x1a5b50, Func Offset: 0xa0
	// Line 711, Address: 0x1a5b58, Func Offset: 0xa8
	// Line 714, Address: 0x1a5b60, Func Offset: 0xb0
	// Line 715, Address: 0x1a5b68, Func Offset: 0xb8
	// Line 716, Address: 0x1a5b6c, Func Offset: 0xbc
	// Line 717, Address: 0x1a5b7c, Func Offset: 0xcc
	// Line 718, Address: 0x1a5b8c, Func Offset: 0xdc
	// Line 719, Address: 0x1a5b94, Func Offset: 0xe4
	// Func End, Address: 0x1a5bb8, Func Offset: 0x108
}

// 
// Start address: 0x1a5bc0
void sort_control()
{
	EnemySoundTypeControl* pstc;
	EnemySoundTypeControl* ptop;
	sgQsortEasyData* pdata;
	sgQsortEasyData* pd;
	int type;
	int n;
	// Line 724, Address: 0x1a5bc0, Func Offset: 0
	// Line 728, Address: 0x1a5be0, Func Offset: 0x20
	// Line 724, Address: 0x1a5be4, Func Offset: 0x24
	// Line 728, Address: 0x1a5be8, Func Offset: 0x28
	// Line 729, Address: 0x1a5bf0, Func Offset: 0x30
	// Line 730, Address: 0x1a5bf4, Func Offset: 0x34
	// Line 731, Address: 0x1a5bfc, Func Offset: 0x3c
	// Line 732, Address: 0x1a5c08, Func Offset: 0x48
	// Line 733, Address: 0x1a5c14, Func Offset: 0x54
	// Line 734, Address: 0x1a5c1c, Func Offset: 0x5c
	// Line 735, Address: 0x1a5c20, Func Offset: 0x60
	// Line 736, Address: 0x1a5c24, Func Offset: 0x64
	// Line 739, Address: 0x1a5c28, Func Offset: 0x68
	// Line 738, Address: 0x1a5c2c, Func Offset: 0x6c
	// Line 739, Address: 0x1a5c30, Func Offset: 0x70
	// Line 740, Address: 0x1a5c44, Func Offset: 0x84
	// Line 742, Address: 0x1a5c54, Func Offset: 0x94
	// Line 743, Address: 0x1a5c58, Func Offset: 0x98
	// Line 744, Address: 0x1a5c5c, Func Offset: 0x9c
	// Line 745, Address: 0x1a5c60, Func Offset: 0xa0
	// Line 746, Address: 0x1a5c64, Func Offset: 0xa4
	// Line 748, Address: 0x1a5c78, Func Offset: 0xb8
	// Line 749, Address: 0x1a5c84, Func Offset: 0xc4
	// Line 752, Address: 0x1a5c90, Func Offset: 0xd0
	// Line 753, Address: 0x1a5ca0, Func Offset: 0xe0
	// Line 754, Address: 0x1a5ca4, Func Offset: 0xe4
	// Line 755, Address: 0x1a5cac, Func Offset: 0xec
	// Line 756, Address: 0x1a5cb4, Func Offset: 0xf4
	// Line 757, Address: 0x1a5cc0, Func Offset: 0x100
	// Line 758, Address: 0x1a5cc8, Func Offset: 0x108
	// Line 760, Address: 0x1a5cd0, Func Offset: 0x110
	// Line 761, Address: 0x1a5cd4, Func Offset: 0x114
	// Line 762, Address: 0x1a5cd8, Func Offset: 0x118
	// Line 763, Address: 0x1a5cdc, Func Offset: 0x11c
	// Line 765, Address: 0x1a5ce0, Func Offset: 0x120
	// Line 767, Address: 0x1a5cf0, Func Offset: 0x130
	// Line 769, Address: 0x1a5d00, Func Offset: 0x140
	// Line 770, Address: 0x1a5d10, Func Offset: 0x150
	// Func End, Address: 0x1a5d38, Func Offset: 0x178
}

// 
// Start address: 0x1a5d40
void control_handle()
{
	EnemySoundTypeControl* pstc;
	EnemySoundTypeControl* ptop;
	EnemySoundTypeControl* pstc2;
	EnemySoundTypeControlData* pdata;
	int type;
	int rank;
	int limit;
	int all_num;
	int use_num;
	unsigned int use_flag;
	float dt;
	// Line 775, Address: 0x1a5d40, Func Offset: 0
	// Line 781, Address: 0x1a5d68, Func Offset: 0x28
	// Line 782, Address: 0x1a5d74, Func Offset: 0x34
	// Line 783, Address: 0x1a5d80, Func Offset: 0x40
	// Line 784, Address: 0x1a5d94, Func Offset: 0x54
	// Line 787, Address: 0x1a5d9c, Func Offset: 0x5c
	// Line 785, Address: 0x1a5da0, Func Offset: 0x60
	// Line 788, Address: 0x1a5da4, Func Offset: 0x64
	// Line 785, Address: 0x1a5da8, Func Offset: 0x68
	// Line 789, Address: 0x1a5dac, Func Offset: 0x6c
	// Line 785, Address: 0x1a5db0, Func Offset: 0x70
	// Line 790, Address: 0x1a5db4, Func Offset: 0x74
	// Line 794, Address: 0x1a5db8, Func Offset: 0x78
	// Line 792, Address: 0x1a5dbc, Func Offset: 0x7c
	// Line 794, Address: 0x1a5dc0, Func Offset: 0x80
	// Line 795, Address: 0x1a5dc8, Func Offset: 0x88
	// Line 796, Address: 0x1a5dd8, Func Offset: 0x98
	// Line 797, Address: 0x1a5de0, Func Offset: 0xa0
	// Line 799, Address: 0x1a5df4, Func Offset: 0xb4
	// Line 800, Address: 0x1a5df8, Func Offset: 0xb8
	// Line 803, Address: 0x1a5e00, Func Offset: 0xc0
	// Line 804, Address: 0x1a5e08, Func Offset: 0xc8
	// Line 803, Address: 0x1a5e0c, Func Offset: 0xcc
	// Line 804, Address: 0x1a5e14, Func Offset: 0xd4
	// Line 806, Address: 0x1a5e20, Func Offset: 0xe0
	// Line 807, Address: 0x1a5e28, Func Offset: 0xe8
	// Line 808, Address: 0x1a5e2c, Func Offset: 0xec
	// Line 809, Address: 0x1a5e48, Func Offset: 0x108
	// Line 812, Address: 0x1a5e4c, Func Offset: 0x10c
	// Line 809, Address: 0x1a5e50, Func Offset: 0x110
	// Line 810, Address: 0x1a5e54, Func Offset: 0x114
	// Line 811, Address: 0x1a5e58, Func Offset: 0x118
	// Line 812, Address: 0x1a5e60, Func Offset: 0x120
	// Line 814, Address: 0x1a5e64, Func Offset: 0x124
	// Line 815, Address: 0x1a5e68, Func Offset: 0x128
	// Line 816, Address: 0x1a5e70, Func Offset: 0x130
	// Line 815, Address: 0x1a5e74, Func Offset: 0x134
	// Line 818, Address: 0x1a5e7c, Func Offset: 0x13c
	// Line 819, Address: 0x1a5e8c, Func Offset: 0x14c
	// Line 823, Address: 0x1a5ea0, Func Offset: 0x160
	// Line 826, Address: 0x1a5eb0, Func Offset: 0x170
	// Line 828, Address: 0x1a5ebc, Func Offset: 0x17c
	// Line 829, Address: 0x1a5ec8, Func Offset: 0x188
	// Line 830, Address: 0x1a5ecc, Func Offset: 0x18c
	// Line 831, Address: 0x1a5ee8, Func Offset: 0x1a8
	// Line 832, Address: 0x1a5eec, Func Offset: 0x1ac
	// Line 836, Address: 0x1a5f04, Func Offset: 0x1c4
	// Line 834, Address: 0x1a5f08, Func Offset: 0x1c8
	// Line 837, Address: 0x1a5f0c, Func Offset: 0x1cc
	// Line 835, Address: 0x1a5f10, Func Offset: 0x1d0
	// Line 836, Address: 0x1a5f14, Func Offset: 0x1d4
	// Line 838, Address: 0x1a5f18, Func Offset: 0x1d8
	// Line 836, Address: 0x1a5f1c, Func Offset: 0x1dc
	// Line 838, Address: 0x1a5f20, Func Offset: 0x1e0
	// Line 842, Address: 0x1a5f28, Func Offset: 0x1e8
	// Line 843, Address: 0x1a5f34, Func Offset: 0x1f4
	// Line 845, Address: 0x1a5f38, Func Offset: 0x1f8
	// Line 846, Address: 0x1a5f3c, Func Offset: 0x1fc
	// Line 847, Address: 0x1a5f40, Func Offset: 0x200
	// Line 848, Address: 0x1a5f4c, Func Offset: 0x20c
	// Line 849, Address: 0x1a5f50, Func Offset: 0x210
	// Line 852, Address: 0x1a5f6c, Func Offset: 0x22c
	// Line 856, Address: 0x1a5f94, Func Offset: 0x254
	// Line 858, Address: 0x1a5fa4, Func Offset: 0x264
	// Line 859, Address: 0x1a5fbc, Func Offset: 0x27c
	// Func End, Address: 0x1a5fec, Func Offset: 0x2ac
}

// 
// Start address: 0x1a5ff0
void EnemySoundHandle()
{
	int type;
	// Line 864, Address: 0x1a5ff0, Func Offset: 0
	// Line 867, Address: 0x1a5ff8, Func Offset: 0x8
	// Line 869, Address: 0x1a6000, Func Offset: 0x10
	// Line 870, Address: 0x1a6008, Func Offset: 0x18
	// Line 871, Address: 0x1a6020, Func Offset: 0x30
	// Line 873, Address: 0x1a6034, Func Offset: 0x44
	// Line 874, Address: 0x1a603c, Func Offset: 0x4c
	// Line 876, Address: 0x1a6044, Func Offset: 0x54
	// Line 878, Address: 0x1a6068, Func Offset: 0x78
	// Func End, Address: 0x1a6078, Func Offset: 0x88
}

