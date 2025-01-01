typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _sif_rpc_data;
typedef struct _sif_client_data;
typedef struct _sif_serve_data;
typedef struct _anon3;
typedef struct _sif_queue_data;
typedef struct _anon4;

typedef void(*type_6)(void*);
typedef void(*type_7)(void*);
typedef void(*type_8)(void*);
typedef void*(*type_9)(unsigned int, void*, int);

typedef _anon0 type_0[64];
typedef int type_1[3];
typedef char type_2[24];
typedef char type_3[24][2];
typedef char type_4[48];
typedef int type_5[6];
typedef unsigned int type_10[256];
typedef char type_11[128];
typedef int type_12[3];
typedef _anon0 type_13[64];
typedef _anon0 type_14[64];

struct _anon0
{
	int command;
	int data[3];
};

struct _anon1
{
	int result;
	char core_status[24][2];
	char ctl_status[48];
	short vab_status;
	short trg_status;
	int res;
};

struct _anon2
{
	_anon3 send;
	unsigned int rec_size;
	void* end_func;
	void* end_param;
	int res;
};

struct _sif_rpc_data
{
	void* paddr;
	unsigned int pid;
	int tid;
	unsigned int mode;
};

struct _sif_client_data
{
	_sif_rpc_data rpcd;
	unsigned int command;
	void* buff;
	void* gp;
	void(*func)(void*);
	void* para;
	_sif_serve_data* serve;
};

struct _sif_serve_data
{
	unsigned int command;
	void*(*func)(unsigned int, void*, int);
	void* buff;
	int size;
	void*(*cfunc)(unsigned int, void*, int);
	void* cbuff;
	int csize;
	_sif_client_data* client;
	void* paddr;
	unsigned int fno;
	void* receive;
	int rsize;
	int rmode;
	unsigned int rid;
	_sif_serve_data* link;
	_sif_serve_data* next;
	_sif_queue_data* base;
};

struct _anon3
{
	unsigned int command;
	void* data;
	unsigned int data_size;
	int data_struct;
	unsigned int mode;
	int res[3];
};

struct _sif_queue_data
{
	int key;
	int active;
	_sif_serve_data* link;
	_sif_serve_data* start;
	_sif_serve_data* end;
	_sif_queue_data* next;
};

struct _anon4
{
	int read_type;
	int media_type;
	int debug;
	int res;
};

char vsdDataPath[128];
_anon1 vsdOperateResult;
unsigned int vsdRpcBuf[256];
_sif_client_data vsdClientData;
int vsdEntryCnt;
_anon0 vsdEntryQue[64];
int vsdQueSend;
void(*sdEndSendOperate)(void*);
int vsdQueCnt;
_anon0 vsdOperateQue[64];
_anon0 vsdEntryOldQue[64];
int vsdEntryOldCnt;
void(*sdEndCallRpc)(void*);
int vsdCallResult;

int sdInit(char* data_path);
int sdVSync();
int sdSetMVol(int vol);
int sdSetOutput(int output);
int sdSetReverb(int core, int type, int depth);
int sdCallRpc(_anon2* data);
int sdEntryOperate(int command, int data1, int data2, int data3);
int sdSendOperate();
void sdInitFig();
int sdInitRpc();
void sdInitOperateQue(int no);
void sdInitEntryQue(int no);
int sdSendDataPath();
int sdSetWaveBlock();
void sdEndCallRpc(void* data);
void sdEndSendOperate(void* data);

// 
// Start address: 0x1ffc90
int sdInit(char* data_path)
{
	_anon4 env;
	int tmp;
	// Line 92, Address: 0x1ffc90, Func Offset: 0
	// Line 734, Address: 0x1ffc98, Func Offset: 0x8
	// Line 92, Address: 0x1ffc9c, Func Offset: 0xc
	// Line 734, Address: 0x1ffca0, Func Offset: 0x10
	// Line 107, Address: 0x1ffce0, Func Offset: 0x50
	// Line 734, Address: 0x1ffce8, Func Offset: 0x58
	// Line 113, Address: 0x1ffcf0, Func Offset: 0x60
	// Line 734, Address: 0x1ffcf4, Func Offset: 0x64
	// Line 121, Address: 0x1ffd14, Func Offset: 0x84
	// Line 123, Address: 0x1ffd1c, Func Offset: 0x8c
	// Line 734, Address: 0x1ffd20, Func Offset: 0x90
	// Line 132, Address: 0x1ffd44, Func Offset: 0xb4
	// Line 133, Address: 0x1ffd4c, Func Offset: 0xbc
	// Line 734, Address: 0x1ffd50, Func Offset: 0xc0
	// Line 142, Address: 0x1ffd68, Func Offset: 0xd8
	// Line 734, Address: 0x1ffd70, Func Offset: 0xe0
	// Line 147, Address: 0x1ffd78, Func Offset: 0xe8
	// Line 734, Address: 0x1ffd80, Func Offset: 0xf0
	// Line 153, Address: 0x1ffd98, Func Offset: 0x108
	// Line 734, Address: 0x1ffda0, Func Offset: 0x110
	// Line 164, Address: 0x1ffdb8, Func Offset: 0x128
	// Line 168, Address: 0x1ffdc0, Func Offset: 0x130
	// Line 734, Address: 0x1ffdcc, Func Offset: 0x13c
	// Line 175, Address: 0x1ffde4, Func Offset: 0x154
	// Line 179, Address: 0x1ffdec, Func Offset: 0x15c
	// Line 734, Address: 0x1ffdf0, Func Offset: 0x160
	// Line 187, Address: 0x1ffe10, Func Offset: 0x180
	// Line 734, Address: 0x1ffe18, Func Offset: 0x188
	// Line 196, Address: 0x1ffe30, Func Offset: 0x1a0
	// Line 734, Address: 0x1ffe38, Func Offset: 0x1a8
	// Line 206, Address: 0x1ffe50, Func Offset: 0x1c0
	// Line 210, Address: 0x1ffe58, Func Offset: 0x1c8
	// Line 734, Address: 0x1ffe60, Func Offset: 0x1d0
	// Func End, Address: 0x1ffe70, Func Offset: 0x1e0
}

// 
// Start address: 0x1ffe70
int sdVSync()
{
	int tmp;
	// Line 248, Address: 0x1ffe70, Func Offset: 0
	// Line 254, Address: 0x1ffe74, Func Offset: 0x4
	// Line 248, Address: 0x1ffe78, Func Offset: 0x8
	// Line 254, Address: 0x1ffe7c, Func Offset: 0xc
	// Line 257, Address: 0x1ffe84, Func Offset: 0x14
	// Line 260, Address: 0x1ffe8c, Func Offset: 0x1c
	// Line 273, Address: 0x1ffe94, Func Offset: 0x24
	// Line 268, Address: 0x1ffe98, Func Offset: 0x28
	// Line 273, Address: 0x1ffea0, Func Offset: 0x30
	// Func End, Address: 0x1ffea8, Func Offset: 0x38
}

// 
// Start address: 0x1ffeb0
int sdSetMVol(int vol)
{
	int tmp;
	// Line 282, Address: 0x1ffeb0, Func Offset: 0
	// Line 287, Address: 0x1ffebc, Func Offset: 0xc
	// Line 289, Address: 0x1ffecc, Func Offset: 0x1c
	// Line 291, Address: 0x1ffed4, Func Offset: 0x24
	// Line 293, Address: 0x1ffedc, Func Offset: 0x2c
	// Line 294, Address: 0x1ffee4, Func Offset: 0x34
	// Line 297, Address: 0x1ffee8, Func Offset: 0x38
	// Line 298, Address: 0x1ffef0, Func Offset: 0x40
	// Func End, Address: 0x1ffefc, Func Offset: 0x4c
}

// 
// Start address: 0x1fff00
int sdSetOutput(int output)
{
	int tmp;
	// Line 307, Address: 0x1fff00, Func Offset: 0
	// Line 312, Address: 0x1fff0c, Func Offset: 0xc
	// Line 314, Address: 0x1fff1c, Func Offset: 0x1c
	// Line 316, Address: 0x1fff24, Func Offset: 0x24
	// Line 318, Address: 0x1fff2c, Func Offset: 0x2c
	// Line 319, Address: 0x1fff34, Func Offset: 0x34
	// Line 322, Address: 0x1fff38, Func Offset: 0x38
	// Line 323, Address: 0x1fff40, Func Offset: 0x40
	// Func End, Address: 0x1fff4c, Func Offset: 0x4c
}

// 
// Start address: 0x1fff50
int sdSetReverb(int core, int type, int depth)
{
	int tmp;
	// Line 339, Address: 0x1fff50, Func Offset: 0
	// Line 334, Address: 0x1fff54, Func Offset: 0x4
	// Line 339, Address: 0x1fff58, Func Offset: 0x8
	// Line 334, Address: 0x1fff5c, Func Offset: 0xc
	// Line 339, Address: 0x1fff60, Func Offset: 0x10
	// Line 341, Address: 0x1fff70, Func Offset: 0x20
	// Line 343, Address: 0x1fff78, Func Offset: 0x28
	// Line 345, Address: 0x1fff80, Func Offset: 0x30
	// Line 349, Address: 0x1fff88, Func Offset: 0x38
	// Line 350, Address: 0x1fff90, Func Offset: 0x40
	// Func End, Address: 0x1fff9c, Func Offset: 0x4c
}

// 
// Start address: 0x1fffa0
int sdCallRpc(_anon2* data)
{
	int tmp;
	// Line 360, Address: 0x1fffa0, Func Offset: 0
	// Line 366, Address: 0x1fffb0, Func Offset: 0x10
	// Line 368, Address: 0x1fffbc, Func Offset: 0x1c
	// Line 374, Address: 0x1fffc4, Func Offset: 0x24
	// Line 375, Address: 0x1fffcc, Func Offset: 0x2c
	// Line 378, Address: 0x1fffd0, Func Offset: 0x30
	// Line 379, Address: 0x1fffe8, Func Offset: 0x48
	// Line 384, Address: 0x1ffff0, Func Offset: 0x50
	// Line 385, Address: 0x1ffffc, Func Offset: 0x5c
	// Line 388, Address: 0x200030, Func Offset: 0x90
	// Line 390, Address: 0x200038, Func Offset: 0x98
	// Line 391, Address: 0x200040, Func Offset: 0xa0
	// Line 390, Address: 0x200050, Func Offset: 0xb0
	// Line 391, Address: 0x200054, Func Offset: 0xb4
	// Line 396, Address: 0x200078, Func Offset: 0xd8
	// Line 398, Address: 0x200080, Func Offset: 0xe0
	// Line 400, Address: 0x200088, Func Offset: 0xe8
	// Line 404, Address: 0x200090, Func Offset: 0xf0
	// Line 405, Address: 0x200098, Func Offset: 0xf8
	// Func End, Address: 0x2000a8, Func Offset: 0x108
}

// 
// Start address: 0x2000b0
int sdEntryOperate(int command, int data1, int data2, int data3)
{
	// Line 415, Address: 0x2000b0, Func Offset: 0
	// Line 418, Address: 0x2000b8, Func Offset: 0x8
	// Line 425, Address: 0x2000c4, Func Offset: 0x14
	// Line 420, Address: 0x2000c8, Func Offset: 0x18
	// Line 421, Address: 0x2000d4, Func Offset: 0x24
	// Line 420, Address: 0x2000d8, Func Offset: 0x28
	// Line 421, Address: 0x2000dc, Func Offset: 0x2c
	// Line 422, Address: 0x2000e8, Func Offset: 0x38
	// Line 423, Address: 0x2000f4, Func Offset: 0x44
	// Line 422, Address: 0x2000f8, Func Offset: 0x48
	// Line 423, Address: 0x2000fc, Func Offset: 0x4c
	// Line 425, Address: 0x200108, Func Offset: 0x58
	// Line 426, Address: 0x200114, Func Offset: 0x64
	// Line 432, Address: 0x200120, Func Offset: 0x70
	// Line 436, Address: 0x200128, Func Offset: 0x78
	// Line 437, Address: 0x200130, Func Offset: 0x80
	// Func End, Address: 0x200138, Func Offset: 0x88
}

// 
// Start address: 0x200140
int sdSendOperate()
{
	int i;
	_anon2 data;
	int tmp;
	// Line 446, Address: 0x200140, Func Offset: 0
	// Line 455, Address: 0x200144, Func Offset: 0x4
	// Line 446, Address: 0x200148, Func Offset: 0x8
	// Line 455, Address: 0x200158, Func Offset: 0x18
	// Line 458, Address: 0x200164, Func Offset: 0x24
	// Line 457, Address: 0x200168, Func Offset: 0x28
	// Line 458, Address: 0x20016c, Func Offset: 0x2c
	// Line 457, Address: 0x20017c, Func Offset: 0x3c
	// Line 458, Address: 0x200180, Func Offset: 0x40
	// Line 460, Address: 0x200188, Func Offset: 0x48
	// Line 461, Address: 0x2001b0, Func Offset: 0x70
	// Line 463, Address: 0x2001c0, Func Offset: 0x80
	// Line 464, Address: 0x2001c8, Func Offset: 0x88
	// Line 463, Address: 0x2001d4, Func Offset: 0x94
	// Line 464, Address: 0x2001d8, Func Offset: 0x98
	// Line 466, Address: 0x2001e8, Func Offset: 0xa8
	// Line 468, Address: 0x2001f0, Func Offset: 0xb0
	// Line 478, Address: 0x2001f8, Func Offset: 0xb8
	// Line 475, Address: 0x200200, Func Offset: 0xc0
	// Line 477, Address: 0x200208, Func Offset: 0xc8
	// Line 476, Address: 0x20020c, Func Offset: 0xcc
	// Line 477, Address: 0x200210, Func Offset: 0xd0
	// Line 476, Address: 0x200214, Func Offset: 0xd4
	// Line 478, Address: 0x200218, Func Offset: 0xd8
	// Line 476, Address: 0x20021c, Func Offset: 0xdc
	// Line 480, Address: 0x200220, Func Offset: 0xe0
	// Line 481, Address: 0x200224, Func Offset: 0xe4
	// Line 484, Address: 0x200228, Func Offset: 0xe8
	// Line 478, Address: 0x20022c, Func Offset: 0xec
	// Line 481, Address: 0x200230, Func Offset: 0xf0
	// Line 478, Address: 0x200234, Func Offset: 0xf4
	// Line 479, Address: 0x200238, Func Offset: 0xf8
	// Line 480, Address: 0x20023c, Func Offset: 0xfc
	// Line 481, Address: 0x200240, Func Offset: 0x100
	// Line 484, Address: 0x200244, Func Offset: 0x104
	// Line 486, Address: 0x20024c, Func Offset: 0x10c
	// Line 491, Address: 0x200254, Func Offset: 0x114
	// Line 492, Address: 0x20025c, Func Offset: 0x11c
	// Line 495, Address: 0x200260, Func Offset: 0x120
	// Line 497, Address: 0x200270, Func Offset: 0x130
	// Line 498, Address: 0x200280, Func Offset: 0x140
	// Line 500, Address: 0x200284, Func Offset: 0x144
	// Line 503, Address: 0x200288, Func Offset: 0x148
	// Line 504, Address: 0x200290, Func Offset: 0x150
	// Func End, Address: 0x2002a8, Func Offset: 0x168
}

// 
// Start address: 0x2002b0
void sdInitFig()
{
	int i;
	// Line 550, Address: 0x2002b0, Func Offset: 0
	// Line 555, Address: 0x2002b4, Func Offset: 0x4
	// Line 550, Address: 0x2002b8, Func Offset: 0x8
	// Line 555, Address: 0x2002c0, Func Offset: 0x10
	// Line 559, Address: 0x2002c4, Func Offset: 0x14
	// Line 556, Address: 0x2002c8, Func Offset: 0x18
	// Line 557, Address: 0x2002d0, Func Offset: 0x20
	// Line 560, Address: 0x2002d8, Func Offset: 0x28
	// Line 561, Address: 0x2002e0, Func Offset: 0x30
	// Line 562, Address: 0x2002e8, Func Offset: 0x38
	// Line 563, Address: 0x2002f8, Func Offset: 0x48
	// Line 564, Address: 0x2002fc, Func Offset: 0x4c
	// Line 565, Address: 0x200304, Func Offset: 0x54
	// Line 566, Address: 0x20030c, Func Offset: 0x5c
	// Func End, Address: 0x20031c, Func Offset: 0x6c
}

// 
// Start address: 0x200320
int sdInitRpc()
{
	int tmp;
	// Line 575, Address: 0x200320, Func Offset: 0
	// Line 582, Address: 0x200328, Func Offset: 0x8
	// Line 586, Address: 0x200330, Func Offset: 0x10
	// Line 588, Address: 0x200348, Func Offset: 0x28
	// Line 590, Address: 0x200350, Func Offset: 0x30
	// Line 592, Address: 0x200358, Func Offset: 0x38
	// Line 603, Address: 0x200360, Func Offset: 0x40
	// Line 610, Address: 0x200370, Func Offset: 0x50
	// Func End, Address: 0x20037c, Func Offset: 0x5c
}

// 
// Start address: 0x200380
void sdInitOperateQue(int no)
{
	// Line 622, Address: 0x200384, Func Offset: 0x4
	// Line 621, Address: 0x200388, Func Offset: 0x8
	// Line 622, Address: 0x20038c, Func Offset: 0xc
	// Line 621, Address: 0x200390, Func Offset: 0x10
	// Line 622, Address: 0x200398, Func Offset: 0x18
	// Line 621, Address: 0x20039c, Func Offset: 0x1c
	// Line 623, Address: 0x2003a0, Func Offset: 0x20
	// Line 622, Address: 0x2003a4, Func Offset: 0x24
	// Line 623, Address: 0x2003a8, Func Offset: 0x28
	// Line 624, Address: 0x2003b4, Func Offset: 0x34
	// Line 625, Address: 0x2003c0, Func Offset: 0x40
	// Func End, Address: 0x2003c8, Func Offset: 0x48
}

// 
// Start address: 0x2003d0
void sdInitEntryQue(int no)
{
	// Line 637, Address: 0x2003d4, Func Offset: 0x4
	// Line 636, Address: 0x2003d8, Func Offset: 0x8
	// Line 637, Address: 0x2003dc, Func Offset: 0xc
	// Line 636, Address: 0x2003e0, Func Offset: 0x10
	// Line 637, Address: 0x2003e8, Func Offset: 0x18
	// Line 636, Address: 0x2003ec, Func Offset: 0x1c
	// Line 638, Address: 0x2003f0, Func Offset: 0x20
	// Line 637, Address: 0x2003f4, Func Offset: 0x24
	// Line 638, Address: 0x2003f8, Func Offset: 0x28
	// Line 639, Address: 0x200404, Func Offset: 0x34
	// Line 640, Address: 0x200410, Func Offset: 0x40
	// Func End, Address: 0x200418, Func Offset: 0x48
}

// 
// Start address: 0x200420
int sdSendDataPath()
{
	_anon2 data;
	int tmp;
	// Line 649, Address: 0x200420, Func Offset: 0
	// Line 656, Address: 0x200424, Func Offset: 0x4
	// Line 649, Address: 0x200428, Func Offset: 0x8
	// Line 665, Address: 0x20042c, Func Offset: 0xc
	// Line 656, Address: 0x200430, Func Offset: 0x10
	// Line 657, Address: 0x200434, Func Offset: 0x14
	// Line 660, Address: 0x200438, Func Offset: 0x18
	// Line 657, Address: 0x20043c, Func Offset: 0x1c
	// Line 663, Address: 0x200440, Func Offset: 0x20
	// Line 657, Address: 0x200444, Func Offset: 0x24
	// Line 658, Address: 0x200448, Func Offset: 0x28
	// Line 659, Address: 0x200450, Func Offset: 0x30
	// Line 661, Address: 0x200458, Func Offset: 0x38
	// Line 662, Address: 0x200460, Func Offset: 0x40
	// Line 665, Address: 0x200468, Func Offset: 0x48
	// Line 667, Address: 0x200470, Func Offset: 0x50
	// Line 669, Address: 0x200478, Func Offset: 0x58
	// Line 671, Address: 0x200480, Func Offset: 0x60
	// Line 675, Address: 0x200488, Func Offset: 0x68
	// Line 676, Address: 0x200490, Func Offset: 0x70
	// Func End, Address: 0x20049c, Func Offset: 0x7c
}

// 
// Start address: 0x2004a0
int sdSetWaveBlock()
{
	int i;
	int tmp;
	int block_size[6];
	// Line 685, Address: 0x2004a0, Func Offset: 0
	// Line 690, Address: 0x2004a4, Func Offset: 0x4
	// Line 685, Address: 0x2004a8, Func Offset: 0x8
	// Line 690, Address: 0x2004ac, Func Offset: 0xc
	// Line 685, Address: 0x2004b0, Func Offset: 0x10
	// Line 699, Address: 0x2004b8, Func Offset: 0x18
	// Line 690, Address: 0x2004bc, Func Offset: 0x1c
	// Line 700, Address: 0x2004d0, Func Offset: 0x30
	// Line 702, Address: 0x2004e8, Func Offset: 0x48
	// Line 704, Address: 0x2004f0, Func Offset: 0x50
	// Line 706, Address: 0x2004f8, Func Offset: 0x58
	// Line 708, Address: 0x200500, Func Offset: 0x60
	// Line 711, Address: 0x200510, Func Offset: 0x70
	// Line 712, Address: 0x200518, Func Offset: 0x78
	// Func End, Address: 0x20052c, Func Offset: 0x8c
}

// 
// Start address: 0x200530
void sdEndCallRpc(void* data)
{
	// Line 723, Address: 0x200530, Func Offset: 0
	// Line 726, Address: 0x200538, Func Offset: 0x8
	// Line 727, Address: 0x20053c, Func Offset: 0xc
	// Func End, Address: 0x200544, Func Offset: 0x14
}

// 
// Start address: 0x200550
void sdEndSendOperate(void* data)
{
	// Line 736, Address: 0x200554, Func Offset: 0x4
	// Line 739, Address: 0x200558, Func Offset: 0x8
	// Line 736, Address: 0x20055c, Func Offset: 0xc
	// Line 739, Address: 0x200560, Func Offset: 0x10
	// Line 742, Address: 0x20056c, Func Offset: 0x1c
	// Line 744, Address: 0x20057c, Func Offset: 0x2c
	// Line 745, Address: 0x200584, Func Offset: 0x34
	// Line 748, Address: 0x200588, Func Offset: 0x38
	// Line 749, Address: 0x200590, Func Offset: 0x40
	// Func End, Address: 0x20059c, Func Offset: 0x4c
}

