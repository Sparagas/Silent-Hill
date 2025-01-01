typedef struct CmdServWork;
typedef struct CmdServStat;
typedef union _anon0;

typedef int(*type_0)();
typedef void(*type_1)(void*);
typedef int(*type_2)();
typedef int(*type_4)(<unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
typedef int(*type_5)();
typedef int(*type_6)();
typedef int(*type_7)();
typedef int(*type_9)();
typedef int(*type_10)();
typedef int(*type_11)();
typedef int(*type_12)();
typedef int(*type_13)();

typedef int type_3[16];
typedef unsigned long type_8[4];

struct CmdServWork
{
	int exclusive_sid;
	int kick_sid;
	int sync_sid;
	int cmdexec_tid;
	int qsize;
	<unknown fundamental type (0xa510)>* queue;
	int next_id;
	int qlen;
	int qhead;
	int qnext;
	int oldest_id;
	int newest_id;
	int last_ret;
	int(*last_cmd)();
	int kick_req;
	int sync_req;
	int debug[16];
};

struct CmdServStat
{
	int qsize;
	int qlen;
	int id;
	int last_id;
	int clen;
};

union _anon0
{
	<unknown fundamental type (0xa510)> q;
	unsigned long w[4];
};

int(*CmdServFuncNull)(<unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
void(*CmdServThread)(void*);

int CmdServFuncNull(<unknown fundamental type (0xa510)> a0, <unknown fundamental type (0xa510)> a1, <unknown fundamental type (0xa510)> a2, <unknown fundamental type (0xa510)> a3, <unknown fundamental type (0xa510)> a4, <unknown fundamental type (0xa510)> a5);
void CmdServThread(void* arg);
int CmdServInit(<unknown fundamental type (0xa510)>* work, int workSize, void* stack, int stackSize, int prio);
int CmdQueuePut0(<unknown fundamental type (0xa510)>* work, int(*func)());
int CmdQueuePut1(<unknown fundamental type (0xa510)>* work, int(*func)(), <unknown fundamental type (0xa510)> a0);
int CmdQueuePut2(<unknown fundamental type (0xa510)>* work, int(*func)(), <unknown fundamental type (0xa510)> a0, <unknown fundamental type (0xa510)> a1);
int CmdQueuePut3(<unknown fundamental type (0xa510)>* work, int(*func)(), <unknown fundamental type (0xa510)> a0, <unknown fundamental type (0xa510)> a1, <unknown fundamental type (0xa510)> a2);
int CmdQueuePut4(<unknown fundamental type (0xa510)>* work, int(*func)(), <unknown fundamental type (0xa510)> a0, <unknown fundamental type (0xa510)> a1, <unknown fundamental type (0xa510)> a2, <unknown fundamental type (0xa510)> a3);
int CmdQueueSync(<unknown fundamental type (0xa510)>* work, int mode, int id);
int CmdQueueGetCurrentCommandId(<unknown fundamental type (0xa510)>* work);
int CmdQueueCmpCmdId(int cid0, int cid1);
int CmdServGetStat(<unknown fundamental type (0xa510)>* work, CmdServStat* stat);

// 
// Start address: 0x18fde0
int CmdServFuncNull(<unknown fundamental type (0xa510)> a0, <unknown fundamental type (0xa510)> a1, <unknown fundamental type (0xa510)> a2, <unknown fundamental type (0xa510)> a3, <unknown fundamental type (0xa510)> a4, <unknown fundamental type (0xa510)> a5)
{
	int n;
	_anon0 t;
	// Line 87, Address: 0x18fde0, Func Offset: 0
	// Line 94, Address: 0x18fe04, Func Offset: 0x24
	// Line 95, Address: 0x18fe20, Func Offset: 0x40
	// Line 96, Address: 0x18fe2c, Func Offset: 0x4c
	// Line 98, Address: 0x18fe50, Func Offset: 0x70
	// Line 99, Address: 0x18fe5c, Func Offset: 0x7c
	// Line 101, Address: 0x18fe80, Func Offset: 0xa0
	// Line 102, Address: 0x18fe8c, Func Offset: 0xac
	// Line 104, Address: 0x18feb0, Func Offset: 0xd0
	// Line 105, Address: 0x18febc, Func Offset: 0xdc
	// Line 107, Address: 0x18fee0, Func Offset: 0x100
	// Line 108, Address: 0x18feec, Func Offset: 0x10c
	// Line 110, Address: 0x18ff10, Func Offset: 0x130
	// Line 111, Address: 0x18ff1c, Func Offset: 0x13c
	// Line 114, Address: 0x18ff40, Func Offset: 0x160
	// Line 115, Address: 0x18ff44, Func Offset: 0x164
	// Func End, Address: 0x18ff58, Func Offset: 0x178
}

// 
// Start address: 0x18ff60
void CmdServThread(void* arg)
{
	int id;
	int ret;
	int idx;
	int argc;
	int(*func)();
	int qhead;
	int qlen;
	<unknown fundamental type (0xa510)> a5;
	<unknown fundamental type (0xa510)> a4;
	<unknown fundamental type (0xa510)> a3;
	<unknown fundamental type (0xa510)> a2;
	<unknown fundamental type (0xa510)> a1;
	<unknown fundamental type (0xa510)> a0;
	<unknown fundamental type (0xa510)>* queue;
	int kick_sid;
	int qsize;
	CmdServWork* serv;
	// Line 154, Address: 0x18ff60, Func Offset: 0
	// Line 160, Address: 0x18ff90, Func Offset: 0x30
	// Line 161, Address: 0x18ff94, Func Offset: 0x34
	// Line 162, Address: 0x18ff98, Func Offset: 0x38
	// Line 164, Address: 0x18ff9c, Func Offset: 0x3c
	// Line 165, Address: 0x18ffa4, Func Offset: 0x44
	// Line 166, Address: 0x18ffac, Func Offset: 0x4c
	// Line 167, Address: 0x18ffb8, Func Offset: 0x58
	// Line 168, Address: 0x18ffc0, Func Offset: 0x60
	// Line 178, Address: 0x18ffcc, Func Offset: 0x6c
	// Line 179, Address: 0x18ffd4, Func Offset: 0x74
	// Line 180, Address: 0x18ffe0, Func Offset: 0x80
	// Line 181, Address: 0x18ffe8, Func Offset: 0x88
	// Line 182, Address: 0x18fff0, Func Offset: 0x90
	// Line 184, Address: 0x18fffc, Func Offset: 0x9c
	// Line 185, Address: 0x190004, Func Offset: 0xa4
	// Line 186, Address: 0x19000c, Func Offset: 0xac
	// Line 187, Address: 0x190018, Func Offset: 0xb8
	// Line 188, Address: 0x190020, Func Offset: 0xc0
	// Line 189, Address: 0x19002c, Func Offset: 0xcc
	// Line 190, Address: 0x190034, Func Offset: 0xd4
	// Line 193, Address: 0x19003c, Func Offset: 0xdc
	// Line 194, Address: 0x190044, Func Offset: 0xe4
	// Line 195, Address: 0x190048, Func Offset: 0xe8
	// Line 196, Address: 0x19005c, Func Offset: 0xfc
	// Line 197, Address: 0x190080, Func Offset: 0x120
	// Line 198, Address: 0x190094, Func Offset: 0x134
	// Line 199, Address: 0x1900b8, Func Offset: 0x158
	// Line 200, Address: 0x1900c0, Func Offset: 0x160
	// Line 201, Address: 0x1900cc, Func Offset: 0x16c
	// Line 204, Address: 0x1900d4, Func Offset: 0x174
	// Line 205, Address: 0x1900e0, Func Offset: 0x180
	// Line 206, Address: 0x1900e8, Func Offset: 0x188
	// Line 207, Address: 0x1900f0, Func Offset: 0x190
	// Line 208, Address: 0x190108, Func Offset: 0x1a8
	// Line 209, Address: 0x19011c, Func Offset: 0x1bc
	// Line 210, Address: 0x190120, Func Offset: 0x1c0
	// Line 211, Address: 0x190138, Func Offset: 0x1d8
	// Line 212, Address: 0x19014c, Func Offset: 0x1ec
	// Line 216, Address: 0x190150, Func Offset: 0x1f0
	// Line 217, Address: 0x19016c, Func Offset: 0x20c
	// Line 218, Address: 0x1901a8, Func Offset: 0x248
	// Line 219, Address: 0x1901cc, Func Offset: 0x26c
	// Line 220, Address: 0x190208, Func Offset: 0x2a8
	// Line 221, Address: 0x190230, Func Offset: 0x2d0
	// Line 222, Address: 0x190270, Func Offset: 0x310
	// Line 223, Address: 0x19029c, Func Offset: 0x33c
	// Line 224, Address: 0x1902d8, Func Offset: 0x378
	// Line 225, Address: 0x190308, Func Offset: 0x3a8
	// Line 226, Address: 0x190348, Func Offset: 0x3e8
	// Line 227, Address: 0x19037c, Func Offset: 0x41c
	// Line 228, Address: 0x1903b8, Func Offset: 0x458
	// Line 229, Address: 0x1903dc, Func Offset: 0x47c
	// Line 230, Address: 0x1903e0, Func Offset: 0x480
	// Line 231, Address: 0x1903e8, Func Offset: 0x488
	// Line 232, Address: 0x1903f4, Func Offset: 0x494
	// Line 234, Address: 0x1903fc, Func Offset: 0x49c
	// Line 235, Address: 0x190400, Func Offset: 0x4a0
	// Line 236, Address: 0x190404, Func Offset: 0x4a4
	// Line 237, Address: 0x19040c, Func Offset: 0x4ac
	// Line 238, Address: 0x190414, Func Offset: 0x4b4
	// Line 239, Address: 0x190424, Func Offset: 0x4c4
	// Line 240, Address: 0x190430, Func Offset: 0x4d0
	// Line 241, Address: 0x190444, Func Offset: 0x4e4
	// Line 242, Address: 0x190448, Func Offset: 0x4e8
	// Line 243, Address: 0x190458, Func Offset: 0x4f8
	// Line 244, Address: 0x190480, Func Offset: 0x520
	// Line 245, Address: 0x190488, Func Offset: 0x528
	// Line 246, Address: 0x190490, Func Offset: 0x530
	// Line 250, Address: 0x19049c, Func Offset: 0x53c
	// Line 251, Address: 0x1904a4, Func Offset: 0x544
	// Line 253, Address: 0x1904ac, Func Offset: 0x54c
	// Line 254, Address: 0x1904b4, Func Offset: 0x554
	// Line 255, Address: 0x1904b8, Func Offset: 0x558
	// Line 256, Address: 0x1904c0, Func Offset: 0x560
	// Line 257, Address: 0x1904d4, Func Offset: 0x574
	// Line 258, Address: 0x1904dc, Func Offset: 0x57c
	// Line 261, Address: 0x1904e4, Func Offset: 0x584
	// Line 263, Address: 0x1904f0, Func Offset: 0x590
	// Line 264, Address: 0x1904f8, Func Offset: 0x598
	// Line 265, Address: 0x190504, Func Offset: 0x5a4
	// Line 267, Address: 0x19050c, Func Offset: 0x5ac
	// Func End, Address: 0x190514, Func Offset: 0x5b4
}

// 
// Start address: 0x190520
int CmdServInit(<unknown fundamental type (0xa510)>* work, int workSize, void* stack, int stackSize, int prio)
{
	int exec_tid;
	int sync_sid;
	int kick_sid;
	int excl_sid;
	int header_size;
	int queue_size;
	CmdServWork* serv;
	// Line 287, Address: 0x190520, Func Offset: 0
	// Line 295, Address: 0x190558, Func Offset: 0x38
	// Line 298, Address: 0x19055c, Func Offset: 0x3c
	// Line 300, Address: 0x19057c, Func Offset: 0x5c
	// Line 301, Address: 0x190580, Func Offset: 0x60
	// Line 302, Address: 0x190588, Func Offset: 0x68
	// Line 303, Address: 0x19059c, Func Offset: 0x7c
	// Line 304, Address: 0x1905a0, Func Offset: 0x80
	// Line 305, Address: 0x1905b0, Func Offset: 0x90
	// Line 306, Address: 0x1905b4, Func Offset: 0x94
	// Line 307, Address: 0x1905b8, Func Offset: 0x98
	// Line 309, Address: 0x1905bc, Func Offset: 0x9c
	// Line 310, Address: 0x1905d8, Func Offset: 0xb8
	// Line 311, Address: 0x1905e4, Func Offset: 0xc4
	// Line 312, Address: 0x190600, Func Offset: 0xe0
	// Line 313, Address: 0x19060c, Func Offset: 0xec
	// Line 314, Address: 0x190628, Func Offset: 0x108
	// Line 315, Address: 0x190634, Func Offset: 0x114
	// Line 316, Address: 0x190638, Func Offset: 0x118
	// Line 317, Address: 0x19063c, Func Offset: 0x11c
	// Line 318, Address: 0x190640, Func Offset: 0x120
	// Line 320, Address: 0x190668, Func Offset: 0x148
	// Line 321, Address: 0x190674, Func Offset: 0x154
	// Line 323, Address: 0x190678, Func Offset: 0x158
	// Line 324, Address: 0x19067c, Func Offset: 0x15c
	// Line 325, Address: 0x190680, Func Offset: 0x160
	// Line 326, Address: 0x190688, Func Offset: 0x168
	// Line 327, Address: 0x19068c, Func Offset: 0x16c
	// Line 328, Address: 0x190690, Func Offset: 0x170
	// Line 329, Address: 0x190694, Func Offset: 0x174
	// Line 330, Address: 0x190698, Func Offset: 0x178
	// Line 331, Address: 0x19069c, Func Offset: 0x17c
	// Line 332, Address: 0x1906a0, Func Offset: 0x180
	// Line 333, Address: 0x1906bc, Func Offset: 0x19c
	// Line 335, Address: 0x1906c8, Func Offset: 0x1a8
	// Line 336, Address: 0x1906e0, Func Offset: 0x1c0
	// Line 337, Address: 0x1906f8, Func Offset: 0x1d8
	// Line 338, Address: 0x190710, Func Offset: 0x1f0
	// Line 339, Address: 0x190714, Func Offset: 0x1f4
	// Func End, Address: 0x190740, Func Offset: 0x220
}

// 
// Start address: 0x190740
int CmdQueuePut0(<unknown fundamental type (0xa510)>* work, int(*func)())
{
	int qnext;
	int qlen;
	int kick_req;
	int id;
	<unknown fundamental type (0xa510)>* queue;
	int qsize;
	CmdServWork* serv;
	// Line 343, Address: 0x190740, Func Offset: 0
	// Line 352, Address: 0x19076c, Func Offset: 0x2c
	// Line 353, Address: 0x190770, Func Offset: 0x30
	// Line 354, Address: 0x190774, Func Offset: 0x34
	// Line 356, Address: 0x190778, Func Offset: 0x38
	// Line 357, Address: 0x190784, Func Offset: 0x44
	// Line 359, Address: 0x190788, Func Offset: 0x48
	// Line 360, Address: 0x19078c, Func Offset: 0x4c
	// Line 361, Address: 0x190790, Func Offset: 0x50
	// Line 363, Address: 0x190794, Func Offset: 0x54
	// Line 365, Address: 0x1907a0, Func Offset: 0x60
	// Line 366, Address: 0x1907ac, Func Offset: 0x6c
	// Line 367, Address: 0x1907b0, Func Offset: 0x70
	// Line 368, Address: 0x1907c8, Func Offset: 0x88
	// Line 369, Address: 0x1907f0, Func Offset: 0xb0
	// Line 370, Address: 0x190804, Func Offset: 0xc4
	// Line 371, Address: 0x190828, Func Offset: 0xe8
	// Line 372, Address: 0x19082c, Func Offset: 0xec
	// Line 373, Address: 0x190838, Func Offset: 0xf8
	// Line 374, Address: 0x19083c, Func Offset: 0xfc
	// Line 375, Address: 0x190840, Func Offset: 0x100
	// Line 376, Address: 0x190844, Func Offset: 0x104
	// Line 377, Address: 0x190848, Func Offset: 0x108
	// Line 378, Address: 0x19084c, Func Offset: 0x10c
	// Line 380, Address: 0x190850, Func Offset: 0x110
	// Line 381, Address: 0x19085c, Func Offset: 0x11c
	// Line 382, Address: 0x190870, Func Offset: 0x130
	// Line 383, Address: 0x190874, Func Offset: 0x134
	// Func End, Address: 0x1908a0, Func Offset: 0x160
}

// 
// Start address: 0x1908a0
int CmdQueuePut1(<unknown fundamental type (0xa510)>* work, int(*func)(), <unknown fundamental type (0xa510)> a0)
{
	int qnext;
	int qlen;
	int kick_req;
	int id;
	<unknown fundamental type (0xa510)>* queue;
	int qsize;
	CmdServWork* serv;
	// Line 388, Address: 0x1908a0, Func Offset: 0
	// Line 397, Address: 0x1908d0, Func Offset: 0x30
	// Line 398, Address: 0x1908d4, Func Offset: 0x34
	// Line 399, Address: 0x1908d8, Func Offset: 0x38
	// Line 401, Address: 0x1908dc, Func Offset: 0x3c
	// Line 402, Address: 0x1908e8, Func Offset: 0x48
	// Line 404, Address: 0x1908ec, Func Offset: 0x4c
	// Line 405, Address: 0x1908f0, Func Offset: 0x50
	// Line 406, Address: 0x1908f4, Func Offset: 0x54
	// Line 408, Address: 0x1908f8, Func Offset: 0x58
	// Line 410, Address: 0x190904, Func Offset: 0x64
	// Line 411, Address: 0x190910, Func Offset: 0x70
	// Line 412, Address: 0x190914, Func Offset: 0x74
	// Line 413, Address: 0x19092c, Func Offset: 0x8c
	// Line 414, Address: 0x190950, Func Offset: 0xb0
	// Line 415, Address: 0x190968, Func Offset: 0xc8
	// Line 416, Address: 0x190990, Func Offset: 0xf0
	// Line 417, Address: 0x1909a8, Func Offset: 0x108
	// Line 418, Address: 0x1909d0, Func Offset: 0x130
	// Line 419, Address: 0x1909d4, Func Offset: 0x134
	// Line 420, Address: 0x1909e0, Func Offset: 0x140
	// Line 421, Address: 0x1909e4, Func Offset: 0x144
	// Line 422, Address: 0x1909e8, Func Offset: 0x148
	// Line 423, Address: 0x1909ec, Func Offset: 0x14c
	// Line 424, Address: 0x1909f0, Func Offset: 0x150
	// Line 425, Address: 0x1909f4, Func Offset: 0x154
	// Line 427, Address: 0x1909f8, Func Offset: 0x158
	// Line 428, Address: 0x190a04, Func Offset: 0x164
	// Line 429, Address: 0x190a18, Func Offset: 0x178
	// Line 430, Address: 0x190a1c, Func Offset: 0x17c
	// Func End, Address: 0x190a48, Func Offset: 0x1a8
}

// 
// Start address: 0x190a50
int CmdQueuePut2(<unknown fundamental type (0xa510)>* work, int(*func)(), <unknown fundamental type (0xa510)> a0, <unknown fundamental type (0xa510)> a1)
{
	int qnext;
	int qlen;
	int kick_req;
	int id;
	<unknown fundamental type (0xa510)>* queue;
	int qsize;
	CmdServWork* serv;
	// Line 435, Address: 0x190a50, Func Offset: 0
	// Line 444, Address: 0x190a84, Func Offset: 0x34
	// Line 445, Address: 0x190a88, Func Offset: 0x38
	// Line 446, Address: 0x190a8c, Func Offset: 0x3c
	// Line 448, Address: 0x190a90, Func Offset: 0x40
	// Line 449, Address: 0x190a9c, Func Offset: 0x4c
	// Line 451, Address: 0x190aa0, Func Offset: 0x50
	// Line 452, Address: 0x190aa4, Func Offset: 0x54
	// Line 453, Address: 0x190aa8, Func Offset: 0x58
	// Line 455, Address: 0x190aac, Func Offset: 0x5c
	// Line 457, Address: 0x190ab8, Func Offset: 0x68
	// Line 458, Address: 0x190ac4, Func Offset: 0x74
	// Line 459, Address: 0x190ac8, Func Offset: 0x78
	// Line 460, Address: 0x190ae0, Func Offset: 0x90
	// Line 461, Address: 0x190b08, Func Offset: 0xb8
	// Line 462, Address: 0x190b20, Func Offset: 0xd0
	// Line 463, Address: 0x190b48, Func Offset: 0xf8
	// Line 464, Address: 0x190b60, Func Offset: 0x110
	// Line 465, Address: 0x190b88, Func Offset: 0x138
	// Line 466, Address: 0x190ba0, Func Offset: 0x150
	// Line 467, Address: 0x190bc8, Func Offset: 0x178
	// Line 468, Address: 0x190bcc, Func Offset: 0x17c
	// Line 469, Address: 0x190bd8, Func Offset: 0x188
	// Line 470, Address: 0x190bdc, Func Offset: 0x18c
	// Line 471, Address: 0x190be0, Func Offset: 0x190
	// Line 472, Address: 0x190be4, Func Offset: 0x194
	// Line 473, Address: 0x190be8, Func Offset: 0x198
	// Line 474, Address: 0x190bec, Func Offset: 0x19c
	// Line 476, Address: 0x190bf0, Func Offset: 0x1a0
	// Line 477, Address: 0x190bfc, Func Offset: 0x1ac
	// Line 478, Address: 0x190c10, Func Offset: 0x1c0
	// Line 479, Address: 0x190c14, Func Offset: 0x1c4
	// Func End, Address: 0x190c40, Func Offset: 0x1f0
}

// 
// Start address: 0x190c40
int CmdQueuePut3(<unknown fundamental type (0xa510)>* work, int(*func)(), <unknown fundamental type (0xa510)> a0, <unknown fundamental type (0xa510)> a1, <unknown fundamental type (0xa510)> a2)
{
	int qnext;
	int qlen;
	int kick_req;
	int id;
	<unknown fundamental type (0xa510)>* queue;
	int qsize;
	CmdServWork* serv;
	// Line 485, Address: 0x190c40, Func Offset: 0
	// Line 494, Address: 0x190c78, Func Offset: 0x38
	// Line 495, Address: 0x190c7c, Func Offset: 0x3c
	// Line 496, Address: 0x190c80, Func Offset: 0x40
	// Line 498, Address: 0x190c84, Func Offset: 0x44
	// Line 499, Address: 0x190c90, Func Offset: 0x50
	// Line 501, Address: 0x190c94, Func Offset: 0x54
	// Line 502, Address: 0x190c98, Func Offset: 0x58
	// Line 503, Address: 0x190c9c, Func Offset: 0x5c
	// Line 505, Address: 0x190ca0, Func Offset: 0x60
	// Line 507, Address: 0x190cac, Func Offset: 0x6c
	// Line 508, Address: 0x190cb8, Func Offset: 0x78
	// Line 509, Address: 0x190cbc, Func Offset: 0x7c
	// Line 510, Address: 0x190cd4, Func Offset: 0x94
	// Line 511, Address: 0x190cf8, Func Offset: 0xb8
	// Line 512, Address: 0x190d10, Func Offset: 0xd0
	// Line 513, Address: 0x190d38, Func Offset: 0xf8
	// Line 514, Address: 0x190d50, Func Offset: 0x110
	// Line 515, Address: 0x190d78, Func Offset: 0x138
	// Line 516, Address: 0x190d90, Func Offset: 0x150
	// Line 517, Address: 0x190db8, Func Offset: 0x178
	// Line 518, Address: 0x190dd0, Func Offset: 0x190
	// Line 519, Address: 0x190df8, Func Offset: 0x1b8
	// Line 520, Address: 0x190dfc, Func Offset: 0x1bc
	// Line 521, Address: 0x190e08, Func Offset: 0x1c8
	// Line 522, Address: 0x190e0c, Func Offset: 0x1cc
	// Line 523, Address: 0x190e10, Func Offset: 0x1d0
	// Line 524, Address: 0x190e14, Func Offset: 0x1d4
	// Line 525, Address: 0x190e18, Func Offset: 0x1d8
	// Line 526, Address: 0x190e1c, Func Offset: 0x1dc
	// Line 528, Address: 0x190e20, Func Offset: 0x1e0
	// Line 529, Address: 0x190e2c, Func Offset: 0x1ec
	// Line 530, Address: 0x190e40, Func Offset: 0x200
	// Line 531, Address: 0x190e44, Func Offset: 0x204
	// Func End, Address: 0x190e70, Func Offset: 0x230
}

// 
// Start address: 0x190e70
int CmdQueuePut4(<unknown fundamental type (0xa510)>* work, int(*func)(), <unknown fundamental type (0xa510)> a0, <unknown fundamental type (0xa510)> a1, <unknown fundamental type (0xa510)> a2, <unknown fundamental type (0xa510)> a3)
{
	int qnext;
	int qlen;
	int kick_req;
	int id;
	<unknown fundamental type (0xa510)>* queue;
	int qsize;
	CmdServWork* serv;
	// Line 539, Address: 0x190e70, Func Offset: 0
	// Line 548, Address: 0x190eac, Func Offset: 0x3c
	// Line 549, Address: 0x190eb0, Func Offset: 0x40
	// Line 550, Address: 0x190eb4, Func Offset: 0x44
	// Line 552, Address: 0x190eb8, Func Offset: 0x48
	// Line 553, Address: 0x190ec4, Func Offset: 0x54
	// Line 555, Address: 0x190ec8, Func Offset: 0x58
	// Line 556, Address: 0x190ecc, Func Offset: 0x5c
	// Line 557, Address: 0x190ed0, Func Offset: 0x60
	// Line 559, Address: 0x190ed4, Func Offset: 0x64
	// Line 561, Address: 0x190ee0, Func Offset: 0x70
	// Line 562, Address: 0x190eec, Func Offset: 0x7c
	// Line 563, Address: 0x190ef0, Func Offset: 0x80
	// Line 564, Address: 0x190f08, Func Offset: 0x98
	// Line 565, Address: 0x190f30, Func Offset: 0xc0
	// Line 566, Address: 0x190f48, Func Offset: 0xd8
	// Line 567, Address: 0x190f70, Func Offset: 0x100
	// Line 568, Address: 0x190f88, Func Offset: 0x118
	// Line 569, Address: 0x190fb0, Func Offset: 0x140
	// Line 570, Address: 0x190fc8, Func Offset: 0x158
	// Line 571, Address: 0x190ff0, Func Offset: 0x180
	// Line 572, Address: 0x191008, Func Offset: 0x198
	// Line 573, Address: 0x191030, Func Offset: 0x1c0
	// Line 574, Address: 0x191048, Func Offset: 0x1d8
	// Line 575, Address: 0x191070, Func Offset: 0x200
	// Line 576, Address: 0x191074, Func Offset: 0x204
	// Line 577, Address: 0x191080, Func Offset: 0x210
	// Line 578, Address: 0x191084, Func Offset: 0x214
	// Line 579, Address: 0x191088, Func Offset: 0x218
	// Line 580, Address: 0x19108c, Func Offset: 0x21c
	// Line 581, Address: 0x191090, Func Offset: 0x220
	// Line 582, Address: 0x191094, Func Offset: 0x224
	// Line 584, Address: 0x191098, Func Offset: 0x228
	// Line 585, Address: 0x1910a4, Func Offset: 0x234
	// Line 586, Address: 0x1910b8, Func Offset: 0x248
	// Line 587, Address: 0x1910bc, Func Offset: 0x24c
	// Func End, Address: 0x1910e8, Func Offset: 0x278
}

// 
// Start address: 0x1910f0
int CmdQueueSync(<unknown fundamental type (0xa510)>* work, int mode, int id)
{
	int older_than_newest;
	int newer_than_oldest;
	int oldest_id;
	int newest_id;
	int check_id;
	int curr_tid;
	int sync_sid;
	int excl_sid;
	int ret;
	CmdServWork* serv;
	// Line 800, Address: 0x1910f0, Func Offset: 0
	// Line 811, Address: 0x191128, Func Offset: 0x38
	// Line 813, Address: 0x191154, Func Offset: 0x64
	// Line 817, Address: 0x191158, Func Offset: 0x68
	// Line 818, Address: 0x191164, Func Offset: 0x74
	// Line 825, Address: 0x19117c, Func Offset: 0x8c
	// Line 826, Address: 0x191184, Func Offset: 0x94
	// Line 827, Address: 0x191188, Func Offset: 0x98
	// Line 831, Address: 0x191190, Func Offset: 0xa0
	// Line 832, Address: 0x191198, Func Offset: 0xa8
	// Line 833, Address: 0x1911a4, Func Offset: 0xb4
	// Line 834, Address: 0x1911ac, Func Offset: 0xbc
	// Line 835, Address: 0x1911b0, Func Offset: 0xc0
	// Line 837, Address: 0x1911b4, Func Offset: 0xc4
	// Line 838, Address: 0x1911b8, Func Offset: 0xc8
	// Line 840, Address: 0x1911c8, Func Offset: 0xd8
	// Line 841, Address: 0x1911cc, Func Offset: 0xdc
	// Line 842, Address: 0x1911d0, Func Offset: 0xe0
	// Line 843, Address: 0x1911d4, Func Offset: 0xe4
	// Line 844, Address: 0x1911d8, Func Offset: 0xe8
	// Line 845, Address: 0x1911dc, Func Offset: 0xec
	// Line 847, Address: 0x1911e4, Func Offset: 0xf4
	// Line 848, Address: 0x1911e8, Func Offset: 0xf8
	// Line 852, Address: 0x1911f0, Func Offset: 0x100
	// Line 853, Address: 0x1911fc, Func Offset: 0x10c
	// Line 855, Address: 0x191200, Func Offset: 0x110
	// Line 856, Address: 0x19120c, Func Offset: 0x11c
	// Line 857, Address: 0x191214, Func Offset: 0x124
	// Line 860, Address: 0x191224, Func Offset: 0x134
	// Line 861, Address: 0x191228, Func Offset: 0x138
	// Line 863, Address: 0x191230, Func Offset: 0x140
	// Line 866, Address: 0x191238, Func Offset: 0x148
	// Line 867, Address: 0x19123c, Func Offset: 0x14c
	// Line 870, Address: 0x191244, Func Offset: 0x154
	// Line 874, Address: 0x191248, Func Offset: 0x158
	// Line 875, Address: 0x191250, Func Offset: 0x160
	// Line 876, Address: 0x191258, Func Offset: 0x168
	// Line 877, Address: 0x19125c, Func Offset: 0x16c
	// Line 880, Address: 0x191270, Func Offset: 0x180
	// Line 881, Address: 0x191278, Func Offset: 0x188
	// Line 882, Address: 0x191284, Func Offset: 0x194
	// Line 883, Address: 0x19128c, Func Offset: 0x19c
	// Line 885, Address: 0x191294, Func Offset: 0x1a4
	// Line 886, Address: 0x19129c, Func Offset: 0x1ac
	// Line 887, Address: 0x1912a8, Func Offset: 0x1b8
	// Line 890, Address: 0x1912b0, Func Offset: 0x1c0
	// Line 891, Address: 0x1912b8, Func Offset: 0x1c8
	// Line 892, Address: 0x1912c4, Func Offset: 0x1d4
	// Line 893, Address: 0x1912d0, Func Offset: 0x1e0
	// Line 894, Address: 0x1912d8, Func Offset: 0x1e8
	// Line 895, Address: 0x1912e0, Func Offset: 0x1f0
	// Line 896, Address: 0x1912e4, Func Offset: 0x1f4
	// Func End, Address: 0x191318, Func Offset: 0x228
}

// 
// Start address: 0x191320
int CmdQueueGetCurrentCommandId(<unknown fundamental type (0xa510)>* work)
{
	CmdServWork* serv;
	// Line 913, Address: 0x191320, Func Offset: 0
	// Line 915, Address: 0x191338, Func Offset: 0x18
	// Line 916, Address: 0x19133c, Func Offset: 0x1c
	// Line 917, Address: 0x191364, Func Offset: 0x44
	// Func End, Address: 0x191380, Func Offset: 0x60
}

// 
// Start address: 0x191380
int CmdQueueCmpCmdId(int cid0, int cid1)
{
	int cmp;
	// Line 924, Address: 0x191380, Func Offset: 0
	// Line 926, Address: 0x191390, Func Offset: 0x10
	// Line 927, Address: 0x1913a4, Func Offset: 0x24
	// Line 928, Address: 0x1913a8, Func Offset: 0x28
	// Line 929, Address: 0x1913ac, Func Offset: 0x2c
	// Func End, Address: 0x1913bc, Func Offset: 0x3c
}

// 
// Start address: 0x1913c0
int CmdServGetStat(<unknown fundamental type (0xa510)>* work, CmdServStat* stat)
{
	int clen;
	int last_id;
	int id;
	int qlen;
	int qsize;
	CmdServWork* serv;
	int ret;
	// Line 934, Address: 0x1913c0, Func Offset: 0
	// Line 936, Address: 0x1913ec, Func Offset: 0x2c
	// Line 943, Address: 0x1913f8, Func Offset: 0x38
	// Line 944, Address: 0x1913fc, Func Offset: 0x3c
	// Line 945, Address: 0x191408, Func Offset: 0x48
	// Line 946, Address: 0x19140c, Func Offset: 0x4c
	// Line 947, Address: 0x191410, Func Offset: 0x50
	// Line 948, Address: 0x191414, Func Offset: 0x54
	// Line 949, Address: 0x191418, Func Offset: 0x58
	// Line 950, Address: 0x191424, Func Offset: 0x64
	// Line 951, Address: 0x191438, Func Offset: 0x78
	// Line 952, Address: 0x191444, Func Offset: 0x84
	// Line 953, Address: 0x19144c, Func Offset: 0x8c
	// Line 954, Address: 0x191454, Func Offset: 0x94
	// Line 955, Address: 0x19145c, Func Offset: 0x9c
	// Line 956, Address: 0x191468, Func Offset: 0xa8
	// Line 957, Address: 0x191470, Func Offset: 0xb0
	// Line 958, Address: 0x191474, Func Offset: 0xb4
	// Line 959, Address: 0x19147c, Func Offset: 0xbc
	// Line 961, Address: 0x191480, Func Offset: 0xc0
	// Line 962, Address: 0x191484, Func Offset: 0xc4
	// Func End, Address: 0x1914b0, Func Offset: 0xf0
}

