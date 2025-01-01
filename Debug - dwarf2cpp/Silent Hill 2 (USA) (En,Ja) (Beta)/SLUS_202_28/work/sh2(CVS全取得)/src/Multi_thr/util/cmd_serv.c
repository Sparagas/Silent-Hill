typedef struct CmdServWork;
typedef union _anon0;
typedef struct CmdServStat;

typedef int(*type_0)();
typedef void(*type_2)(void*);
typedef int(*type_3)();
typedef int(*type_4)(<unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>, <unknown fundamental type (0xa510)>);
typedef int(*type_5)();
typedef int(*type_6)();
typedef int(*type_7)();
typedef int(*type_9)();
typedef int(*type_10)();
typedef int(*type_11)();
typedef int(*type_12)();
typedef int(*type_13)();

typedef int type_1[16];
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

union _anon0
{
	<unknown fundamental type (0xa510)> q;
	unsigned long w[4];
};

struct CmdServStat
{
	int qsize;
	int qlen;
	int id;
	int last_id;
	int clen;
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
// Start address: 0x189730
int CmdServFuncNull(<unknown fundamental type (0xa510)> a0, <unknown fundamental type (0xa510)> a1, <unknown fundamental type (0xa510)> a2, <unknown fundamental type (0xa510)> a3, <unknown fundamental type (0xa510)> a4, <unknown fundamental type (0xa510)> a5)
{
	int n;
	_anon0 t;
	// Line 87, Address: 0x189730, Func Offset: 0
	// Line 94, Address: 0x189770, Func Offset: 0x40
	// Line 95, Address: 0x18978c, Func Offset: 0x5c
	// Line 96, Address: 0x189790, Func Offset: 0x60
	// Line 98, Address: 0x1897c0, Func Offset: 0x90
	// Line 99, Address: 0x1897c4, Func Offset: 0x94
	// Line 101, Address: 0x1897e8, Func Offset: 0xb8
	// Line 102, Address: 0x1897ec, Func Offset: 0xbc
	// Line 104, Address: 0x189810, Func Offset: 0xe0
	// Line 105, Address: 0x189814, Func Offset: 0xe4
	// Line 107, Address: 0x189838, Func Offset: 0x108
	// Line 108, Address: 0x18983c, Func Offset: 0x10c
	// Line 110, Address: 0x189860, Func Offset: 0x130
	// Line 111, Address: 0x189864, Func Offset: 0x134
	// Line 114, Address: 0x189888, Func Offset: 0x158
	// Line 115, Address: 0x18988c, Func Offset: 0x15c
	// Func End, Address: 0x1898bc, Func Offset: 0x18c
}

// 
// Start address: 0x1898c0
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
	// Line 154, Address: 0x1898c0, Func Offset: 0
	// Line 160, Address: 0x1898e4, Func Offset: 0x24
	// Line 161, Address: 0x1898e8, Func Offset: 0x28
	// Line 162, Address: 0x1898ec, Func Offset: 0x2c
	// Line 164, Address: 0x1898f0, Func Offset: 0x30
	// Line 165, Address: 0x1898f4, Func Offset: 0x34
	// Line 166, Address: 0x1898fc, Func Offset: 0x3c
	// Line 167, Address: 0x189908, Func Offset: 0x48
	// Line 168, Address: 0x189910, Func Offset: 0x50
	// Line 178, Address: 0x18991c, Func Offset: 0x5c
	// Line 179, Address: 0x189924, Func Offset: 0x64
	// Line 180, Address: 0x189930, Func Offset: 0x70
	// Line 181, Address: 0x189938, Func Offset: 0x78
	// Line 182, Address: 0x18993c, Func Offset: 0x7c
	// Line 184, Address: 0x189944, Func Offset: 0x84
	// Line 185, Address: 0x18994c, Func Offset: 0x8c
	// Line 186, Address: 0x189954, Func Offset: 0x94
	// Line 187, Address: 0x189960, Func Offset: 0xa0
	// Line 188, Address: 0x189968, Func Offset: 0xa8
	// Line 189, Address: 0x189974, Func Offset: 0xb4
	// Line 190, Address: 0x18997c, Func Offset: 0xbc
	// Line 193, Address: 0x189984, Func Offset: 0xc4
	// Line 195, Address: 0x189988, Func Offset: 0xc8
	// Line 196, Address: 0x189998, Func Offset: 0xd8
	// Line 197, Address: 0x1899c0, Func Offset: 0x100
	// Line 198, Address: 0x1899d0, Func Offset: 0x110
	// Line 199, Address: 0x1899f8, Func Offset: 0x138
	// Line 200, Address: 0x189a00, Func Offset: 0x140
	// Line 201, Address: 0x189a0c, Func Offset: 0x14c
	// Line 204, Address: 0x189a14, Func Offset: 0x154
	// Line 205, Address: 0x189a20, Func Offset: 0x160
	// Line 206, Address: 0x189a28, Func Offset: 0x168
	// Line 208, Address: 0x189a30, Func Offset: 0x170
	// Line 210, Address: 0x189a48, Func Offset: 0x188
	// Line 211, Address: 0x189a60, Func Offset: 0x1a0
	// Line 212, Address: 0x189a74, Func Offset: 0x1b4
	// Line 216, Address: 0x189a78, Func Offset: 0x1b8
	// Line 217, Address: 0x189a94, Func Offset: 0x1d4
	// Line 218, Address: 0x189ac8, Func Offset: 0x208
	// Line 219, Address: 0x189ae8, Func Offset: 0x228
	// Line 220, Address: 0x189b20, Func Offset: 0x260
	// Line 221, Address: 0x189b40, Func Offset: 0x280
	// Line 222, Address: 0x189b78, Func Offset: 0x2b8
	// Line 223, Address: 0x189b98, Func Offset: 0x2d8
	// Line 224, Address: 0x189bd0, Func Offset: 0x310
	// Line 225, Address: 0x189bf0, Func Offset: 0x330
	// Line 226, Address: 0x189c28, Func Offset: 0x368
	// Line 227, Address: 0x189c48, Func Offset: 0x388
	// Line 228, Address: 0x189c80, Func Offset: 0x3c0
	// Line 229, Address: 0x189c8c, Func Offset: 0x3cc
	// Line 230, Address: 0x189c90, Func Offset: 0x3d0
	// Line 231, Address: 0x189c98, Func Offset: 0x3d8
	// Line 232, Address: 0x189ca4, Func Offset: 0x3e4
	// Line 234, Address: 0x189cac, Func Offset: 0x3ec
	// Line 235, Address: 0x189cb0, Func Offset: 0x3f0
	// Line 236, Address: 0x189cb4, Func Offset: 0x3f4
	// Line 237, Address: 0x189cb8, Func Offset: 0x3f8
	// Line 238, Address: 0x189cbc, Func Offset: 0x3fc
	// Line 239, Address: 0x189cc4, Func Offset: 0x404
	// Line 240, Address: 0x189ccc, Func Offset: 0x40c
	// Line 242, Address: 0x189ce0, Func Offset: 0x420
	// Line 243, Address: 0x189ce8, Func Offset: 0x428
	// Line 244, Address: 0x189d10, Func Offset: 0x450
	// Line 245, Address: 0x189d14, Func Offset: 0x454
	// Line 253, Address: 0x189d18, Func Offset: 0x458
	// Line 255, Address: 0x189d34, Func Offset: 0x474
	// Line 256, Address: 0x189d3c, Func Offset: 0x47c
	// Line 257, Address: 0x189d48, Func Offset: 0x488
	// Line 258, Address: 0x189d4c, Func Offset: 0x48c
	// Line 261, Address: 0x189d50, Func Offset: 0x490
	// Line 263, Address: 0x189d5c, Func Offset: 0x49c
	// Line 264, Address: 0x189d64, Func Offset: 0x4a4
	// Line 265, Address: 0x189d70, Func Offset: 0x4b0
	// Line 267, Address: 0x189d78, Func Offset: 0x4b8
	// Func End, Address: 0x189d80, Func Offset: 0x4c0
}

// 
// Start address: 0x189d80
int CmdServInit(<unknown fundamental type (0xa510)>* work, int workSize, void* stack, int stackSize, int prio)
{
	int exec_tid;
	int sync_sid;
	int kick_sid;
	int excl_sid;
	int header_size;
	int queue_size;
	CmdServWork* serv;
	// Line 287, Address: 0x189d80, Func Offset: 0
	// Line 301, Address: 0x189db4, Func Offset: 0x34
	// Line 302, Address: 0x189dcc, Func Offset: 0x4c
	// Line 303, Address: 0x189de0, Func Offset: 0x60
	// Line 304, Address: 0x189de4, Func Offset: 0x64
	// Line 306, Address: 0x189dec, Func Offset: 0x6c
	// Line 307, Address: 0x189df0, Func Offset: 0x70
	// Line 309, Address: 0x189df4, Func Offset: 0x74
	// Line 310, Address: 0x189e0c, Func Offset: 0x8c
	// Line 311, Address: 0x189e18, Func Offset: 0x98
	// Line 312, Address: 0x189e30, Func Offset: 0xb0
	// Line 313, Address: 0x189e3c, Func Offset: 0xbc
	// Line 314, Address: 0x189e54, Func Offset: 0xd4
	// Line 315, Address: 0x189e60, Func Offset: 0xe0
	// Line 316, Address: 0x189e64, Func Offset: 0xe4
	// Line 317, Address: 0x189e68, Func Offset: 0xe8
	// Line 318, Address: 0x189e6c, Func Offset: 0xec
	// Line 320, Address: 0x189e8c, Func Offset: 0x10c
	// Line 321, Address: 0x189e98, Func Offset: 0x118
	// Line 323, Address: 0x189e9c, Func Offset: 0x11c
	// Line 324, Address: 0x189ea0, Func Offset: 0x120
	// Line 325, Address: 0x189ea4, Func Offset: 0x124
	// Line 326, Address: 0x189ea8, Func Offset: 0x128
	// Line 327, Address: 0x189eac, Func Offset: 0x12c
	// Line 328, Address: 0x189eb0, Func Offset: 0x130
	// Line 329, Address: 0x189eb4, Func Offset: 0x134
	// Line 330, Address: 0x189eb8, Func Offset: 0x138
	// Line 331, Address: 0x189ebc, Func Offset: 0x13c
	// Line 332, Address: 0x189ec0, Func Offset: 0x140
	// Line 333, Address: 0x189edc, Func Offset: 0x15c
	// Line 335, Address: 0x189ee8, Func Offset: 0x168
	// Line 336, Address: 0x189f00, Func Offset: 0x180
	// Line 337, Address: 0x189f18, Func Offset: 0x198
	// Line 338, Address: 0x189f30, Func Offset: 0x1b0
	// Line 339, Address: 0x189f34, Func Offset: 0x1b4
	// Func End, Address: 0x189f60, Func Offset: 0x1e0
}

// 
// Start address: 0x189f60
int CmdQueuePut0(<unknown fundamental type (0xa510)>* work, int(*func)())
{
	int qnext;
	int qlen;
	int kick_req;
	int id;
	<unknown fundamental type (0xa510)>* queue;
	int qsize;
	CmdServWork* serv;
	// Line 343, Address: 0x189f60, Func Offset: 0
	// Line 352, Address: 0x189f84, Func Offset: 0x24
	// Line 353, Address: 0x189f88, Func Offset: 0x28
	// Line 354, Address: 0x189f8c, Func Offset: 0x2c
	// Line 356, Address: 0x189f90, Func Offset: 0x30
	// Line 357, Address: 0x189f9c, Func Offset: 0x3c
	// Line 359, Address: 0x189fa0, Func Offset: 0x40
	// Line 360, Address: 0x189fa4, Func Offset: 0x44
	// Line 363, Address: 0x189fa8, Func Offset: 0x48
	// Line 365, Address: 0x189fb8, Func Offset: 0x58
	// Line 366, Address: 0x189fc0, Func Offset: 0x60
	// Line 367, Address: 0x189fc4, Func Offset: 0x64
	// Line 368, Address: 0x189fd4, Func Offset: 0x74
	// Line 369, Address: 0x189ff8, Func Offset: 0x98
	// Line 370, Address: 0x18a008, Func Offset: 0xa8
	// Line 371, Address: 0x18a030, Func Offset: 0xd0
	// Line 372, Address: 0x18a034, Func Offset: 0xd4
	// Line 373, Address: 0x18a040, Func Offset: 0xe0
	// Line 374, Address: 0x18a044, Func Offset: 0xe4
	// Line 375, Address: 0x18a04c, Func Offset: 0xec
	// Line 376, Address: 0x18a050, Func Offset: 0xf0
	// Line 377, Address: 0x18a054, Func Offset: 0xf4
	// Line 380, Address: 0x18a058, Func Offset: 0xf8
	// Line 381, Address: 0x18a064, Func Offset: 0x104
	// Line 382, Address: 0x18a078, Func Offset: 0x118
	// Line 383, Address: 0x18a07c, Func Offset: 0x11c
	// Func End, Address: 0x18a0a4, Func Offset: 0x144
}

// 
// Start address: 0x18a0b0
int CmdQueuePut1(<unknown fundamental type (0xa510)>* work, int(*func)(), <unknown fundamental type (0xa510)> a0)
{
	int qnext;
	int qlen;
	int kick_req;
	int id;
	<unknown fundamental type (0xa510)>* queue;
	int qsize;
	CmdServWork* serv;
	// Line 388, Address: 0x18a0b0, Func Offset: 0
	// Line 397, Address: 0x18a0dc, Func Offset: 0x2c
	// Line 398, Address: 0x18a0e0, Func Offset: 0x30
	// Line 399, Address: 0x18a0e4, Func Offset: 0x34
	// Line 401, Address: 0x18a0e8, Func Offset: 0x38
	// Line 402, Address: 0x18a0f4, Func Offset: 0x44
	// Line 404, Address: 0x18a0f8, Func Offset: 0x48
	// Line 405, Address: 0x18a0fc, Func Offset: 0x4c
	// Line 408, Address: 0x18a100, Func Offset: 0x50
	// Line 410, Address: 0x18a110, Func Offset: 0x60
	// Line 411, Address: 0x18a118, Func Offset: 0x68
	// Line 412, Address: 0x18a11c, Func Offset: 0x6c
	// Line 413, Address: 0x18a12c, Func Offset: 0x7c
	// Line 414, Address: 0x18a150, Func Offset: 0xa0
	// Line 415, Address: 0x18a164, Func Offset: 0xb4
	// Line 416, Address: 0x18a188, Func Offset: 0xd8
	// Line 417, Address: 0x18a198, Func Offset: 0xe8
	// Line 418, Address: 0x18a1c0, Func Offset: 0x110
	// Line 419, Address: 0x18a1c4, Func Offset: 0x114
	// Line 420, Address: 0x18a1d0, Func Offset: 0x120
	// Line 421, Address: 0x18a1d4, Func Offset: 0x124
	// Line 422, Address: 0x18a1dc, Func Offset: 0x12c
	// Line 423, Address: 0x18a1e0, Func Offset: 0x130
	// Line 424, Address: 0x18a1e4, Func Offset: 0x134
	// Line 427, Address: 0x18a1e8, Func Offset: 0x138
	// Line 428, Address: 0x18a1f4, Func Offset: 0x144
	// Line 429, Address: 0x18a208, Func Offset: 0x158
	// Line 430, Address: 0x18a20c, Func Offset: 0x15c
	// Func End, Address: 0x18a238, Func Offset: 0x188
}

// 
// Start address: 0x18a240
int CmdQueuePut2(<unknown fundamental type (0xa510)>* work, int(*func)(), <unknown fundamental type (0xa510)> a0, <unknown fundamental type (0xa510)> a1)
{
	int qnext;
	int qlen;
	int kick_req;
	int id;
	<unknown fundamental type (0xa510)>* queue;
	int qsize;
	CmdServWork* serv;
	// Line 435, Address: 0x18a240, Func Offset: 0
	// Line 444, Address: 0x18a274, Func Offset: 0x34
	// Line 445, Address: 0x18a278, Func Offset: 0x38
	// Line 446, Address: 0x18a27c, Func Offset: 0x3c
	// Line 448, Address: 0x18a280, Func Offset: 0x40
	// Line 449, Address: 0x18a28c, Func Offset: 0x4c
	// Line 451, Address: 0x18a290, Func Offset: 0x50
	// Line 452, Address: 0x18a294, Func Offset: 0x54
	// Line 455, Address: 0x18a298, Func Offset: 0x58
	// Line 457, Address: 0x18a2a8, Func Offset: 0x68
	// Line 458, Address: 0x18a2b0, Func Offset: 0x70
	// Line 459, Address: 0x18a2b4, Func Offset: 0x74
	// Line 460, Address: 0x18a2c4, Func Offset: 0x84
	// Line 461, Address: 0x18a2e8, Func Offset: 0xa8
	// Line 462, Address: 0x18a2fc, Func Offset: 0xbc
	// Line 463, Address: 0x18a320, Func Offset: 0xe0
	// Line 464, Address: 0x18a330, Func Offset: 0xf0
	// Line 465, Address: 0x18a358, Func Offset: 0x118
	// Line 466, Address: 0x18a368, Func Offset: 0x128
	// Line 467, Address: 0x18a390, Func Offset: 0x150
	// Line 468, Address: 0x18a394, Func Offset: 0x154
	// Line 469, Address: 0x18a3a0, Func Offset: 0x160
	// Line 470, Address: 0x18a3a4, Func Offset: 0x164
	// Line 471, Address: 0x18a3ac, Func Offset: 0x16c
	// Line 472, Address: 0x18a3b0, Func Offset: 0x170
	// Line 473, Address: 0x18a3b4, Func Offset: 0x174
	// Line 476, Address: 0x18a3b8, Func Offset: 0x178
	// Line 477, Address: 0x18a3c4, Func Offset: 0x184
	// Line 478, Address: 0x18a3d8, Func Offset: 0x198
	// Line 479, Address: 0x18a3dc, Func Offset: 0x19c
	// Func End, Address: 0x18a40c, Func Offset: 0x1cc
}

// 
// Start address: 0x18a410
int CmdQueuePut3(<unknown fundamental type (0xa510)>* work, int(*func)(), <unknown fundamental type (0xa510)> a0, <unknown fundamental type (0xa510)> a1, <unknown fundamental type (0xa510)> a2)
{
	int qnext;
	int qlen;
	int kick_req;
	int id;
	<unknown fundamental type (0xa510)>* queue;
	int qsize;
	CmdServWork* serv;
	// Line 485, Address: 0x18a410, Func Offset: 0
	// Line 494, Address: 0x18a44c, Func Offset: 0x3c
	// Line 495, Address: 0x18a450, Func Offset: 0x40
	// Line 496, Address: 0x18a454, Func Offset: 0x44
	// Line 498, Address: 0x18a458, Func Offset: 0x48
	// Line 499, Address: 0x18a464, Func Offset: 0x54
	// Line 501, Address: 0x18a468, Func Offset: 0x58
	// Line 502, Address: 0x18a46c, Func Offset: 0x5c
	// Line 505, Address: 0x18a470, Func Offset: 0x60
	// Line 507, Address: 0x18a480, Func Offset: 0x70
	// Line 508, Address: 0x18a488, Func Offset: 0x78
	// Line 509, Address: 0x18a48c, Func Offset: 0x7c
	// Line 510, Address: 0x18a49c, Func Offset: 0x8c
	// Line 511, Address: 0x18a4c0, Func Offset: 0xb0
	// Line 512, Address: 0x18a4d4, Func Offset: 0xc4
	// Line 513, Address: 0x18a4f8, Func Offset: 0xe8
	// Line 514, Address: 0x18a508, Func Offset: 0xf8
	// Line 515, Address: 0x18a530, Func Offset: 0x120
	// Line 516, Address: 0x18a540, Func Offset: 0x130
	// Line 517, Address: 0x18a568, Func Offset: 0x158
	// Line 518, Address: 0x18a578, Func Offset: 0x168
	// Line 519, Address: 0x18a5a0, Func Offset: 0x190
	// Line 520, Address: 0x18a5a4, Func Offset: 0x194
	// Line 521, Address: 0x18a5b0, Func Offset: 0x1a0
	// Line 522, Address: 0x18a5b4, Func Offset: 0x1a4
	// Line 523, Address: 0x18a5bc, Func Offset: 0x1ac
	// Line 524, Address: 0x18a5c0, Func Offset: 0x1b0
	// Line 525, Address: 0x18a5c4, Func Offset: 0x1b4
	// Line 528, Address: 0x18a5c8, Func Offset: 0x1b8
	// Line 529, Address: 0x18a5d4, Func Offset: 0x1c4
	// Line 530, Address: 0x18a5e8, Func Offset: 0x1d8
	// Line 531, Address: 0x18a5ec, Func Offset: 0x1dc
	// Func End, Address: 0x18a620, Func Offset: 0x210
}

// 
// Start address: 0x18a620
int CmdQueuePut4(<unknown fundamental type (0xa510)>* work, int(*func)(), <unknown fundamental type (0xa510)> a0, <unknown fundamental type (0xa510)> a1, <unknown fundamental type (0xa510)> a2, <unknown fundamental type (0xa510)> a3)
{
	int qnext;
	int qlen;
	int kick_req;
	int id;
	<unknown fundamental type (0xa510)>* queue;
	int qsize;
	CmdServWork* serv;
	// Line 539, Address: 0x18a620, Func Offset: 0
	// Line 548, Address: 0x18a660, Func Offset: 0x40
	// Line 549, Address: 0x18a664, Func Offset: 0x44
	// Line 550, Address: 0x18a668, Func Offset: 0x48
	// Line 552, Address: 0x18a66c, Func Offset: 0x4c
	// Line 553, Address: 0x18a678, Func Offset: 0x58
	// Line 555, Address: 0x18a67c, Func Offset: 0x5c
	// Line 556, Address: 0x18a680, Func Offset: 0x60
	// Line 559, Address: 0x18a684, Func Offset: 0x64
	// Line 561, Address: 0x18a694, Func Offset: 0x74
	// Line 562, Address: 0x18a69c, Func Offset: 0x7c
	// Line 563, Address: 0x18a6a0, Func Offset: 0x80
	// Line 564, Address: 0x18a6b0, Func Offset: 0x90
	// Line 565, Address: 0x18a6d8, Func Offset: 0xb8
	// Line 566, Address: 0x18a6ec, Func Offset: 0xcc
	// Line 567, Address: 0x18a710, Func Offset: 0xf0
	// Line 568, Address: 0x18a720, Func Offset: 0x100
	// Line 569, Address: 0x18a748, Func Offset: 0x128
	// Line 570, Address: 0x18a758, Func Offset: 0x138
	// Line 571, Address: 0x18a780, Func Offset: 0x160
	// Line 572, Address: 0x18a790, Func Offset: 0x170
	// Line 573, Address: 0x18a7b8, Func Offset: 0x198
	// Line 574, Address: 0x18a7c8, Func Offset: 0x1a8
	// Line 575, Address: 0x18a7f0, Func Offset: 0x1d0
	// Line 576, Address: 0x18a7f4, Func Offset: 0x1d4
	// Line 577, Address: 0x18a800, Func Offset: 0x1e0
	// Line 578, Address: 0x18a804, Func Offset: 0x1e4
	// Line 579, Address: 0x18a80c, Func Offset: 0x1ec
	// Line 580, Address: 0x18a810, Func Offset: 0x1f0
	// Line 581, Address: 0x18a818, Func Offset: 0x1f8
	// Line 582, Address: 0x18a81c, Func Offset: 0x1fc
	// Line 584, Address: 0x18a820, Func Offset: 0x200
	// Line 585, Address: 0x18a82c, Func Offset: 0x20c
	// Line 586, Address: 0x18a844, Func Offset: 0x224
	// Line 587, Address: 0x18a848, Func Offset: 0x228
	// Func End, Address: 0x18a87c, Func Offset: 0x25c
}

// 
// Start address: 0x18a880
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
	// Line 800, Address: 0x18a880, Func Offset: 0
	// Line 813, Address: 0x18a8a4, Func Offset: 0x24
	// Line 817, Address: 0x18a8a8, Func Offset: 0x28
	// Line 818, Address: 0x18a8b0, Func Offset: 0x30
	// Line 826, Address: 0x18a8c8, Func Offset: 0x48
	// Line 827, Address: 0x18a8cc, Func Offset: 0x4c
	// Line 831, Address: 0x18a8d4, Func Offset: 0x54
	// Line 832, Address: 0x18a8dc, Func Offset: 0x5c
	// Line 833, Address: 0x18a8e8, Func Offset: 0x68
	// Line 834, Address: 0x18a8f0, Func Offset: 0x70
	// Line 835, Address: 0x18a8f4, Func Offset: 0x74
	// Line 837, Address: 0x18a8f8, Func Offset: 0x78
	// Line 838, Address: 0x18a8fc, Func Offset: 0x7c
	// Line 840, Address: 0x18a908, Func Offset: 0x88
	// Line 841, Address: 0x18a90c, Func Offset: 0x8c
	// Line 842, Address: 0x18a910, Func Offset: 0x90
	// Line 843, Address: 0x18a914, Func Offset: 0x94
	// Line 844, Address: 0x18a918, Func Offset: 0x98
	// Line 845, Address: 0x18a91c, Func Offset: 0x9c
	// Line 847, Address: 0x18a924, Func Offset: 0xa4
	// Line 848, Address: 0x18a928, Func Offset: 0xa8
	// Line 852, Address: 0x18a930, Func Offset: 0xb0
	// Line 853, Address: 0x18a938, Func Offset: 0xb8
	// Line 855, Address: 0x18a93c, Func Offset: 0xbc
	// Line 856, Address: 0x18a944, Func Offset: 0xc4
	// Line 857, Address: 0x18a94c, Func Offset: 0xcc
	// Line 860, Address: 0x18a95c, Func Offset: 0xdc
	// Line 861, Address: 0x18a960, Func Offset: 0xe0
	// Line 863, Address: 0x18a968, Func Offset: 0xe8
	// Line 866, Address: 0x18a970, Func Offset: 0xf0
	// Line 867, Address: 0x18a974, Func Offset: 0xf4
	// Line 870, Address: 0x18a97c, Func Offset: 0xfc
	// Line 874, Address: 0x18a980, Func Offset: 0x100
	// Line 875, Address: 0x18a988, Func Offset: 0x108
	// Line 876, Address: 0x18a990, Func Offset: 0x110
	// Line 877, Address: 0x18a994, Func Offset: 0x114
	// Line 880, Address: 0x18a9a8, Func Offset: 0x128
	// Line 881, Address: 0x18a9b0, Func Offset: 0x130
	// Line 882, Address: 0x18a9bc, Func Offset: 0x13c
	// Line 883, Address: 0x18a9c4, Func Offset: 0x144
	// Line 885, Address: 0x18a9cc, Func Offset: 0x14c
	// Line 886, Address: 0x18a9d4, Func Offset: 0x154
	// Line 887, Address: 0x18a9e0, Func Offset: 0x160
	// Line 890, Address: 0x18a9e8, Func Offset: 0x168
	// Line 891, Address: 0x18a9f0, Func Offset: 0x170
	// Line 892, Address: 0x18a9fc, Func Offset: 0x17c
	// Line 893, Address: 0x18aa08, Func Offset: 0x188
	// Line 894, Address: 0x18aa10, Func Offset: 0x190
	// Line 895, Address: 0x18aa18, Func Offset: 0x198
	// Line 896, Address: 0x18aa1c, Func Offset: 0x19c
	// Func End, Address: 0x18aa40, Func Offset: 0x1c0
}

// 
// Start address: 0x18aa40
int CmdQueueGetCurrentCommandId(<unknown fundamental type (0xa510)>* work)
{
	CmdServWork* serv;
	// Line 913, Address: 0x18aa40, Func Offset: 0
	// Line 915, Address: 0x18aa50, Func Offset: 0x10
	// Line 916, Address: 0x18aa54, Func Offset: 0x14
	// Line 917, Address: 0x18aa78, Func Offset: 0x38
	// Func End, Address: 0x18aa90, Func Offset: 0x50
}

// 
// Start address: 0x18aa90
int CmdQueueCmpCmdId(int cid0, int cid1)
{
	int cmp;
	// Line 926, Address: 0x18aa90, Func Offset: 0
	// Line 928, Address: 0x18aa94, Func Offset: 0x4
	// Line 929, Address: 0x18aa9c, Func Offset: 0xc
	// Func End, Address: 0x18aaa4, Func Offset: 0x14
}

// 
// Start address: 0x18aab0
int CmdServGetStat(<unknown fundamental type (0xa510)>* work, CmdServStat* stat)
{
	int clen;
	int last_id;
	int id;
	int qlen;
	int qsize;
	CmdServWork* serv;
	int ret;
	// Line 934, Address: 0x18aab0, Func Offset: 0
	// Line 936, Address: 0x18aad4, Func Offset: 0x24
	// Line 943, Address: 0x18aadc, Func Offset: 0x2c
	// Line 944, Address: 0x18aae0, Func Offset: 0x30
	// Line 945, Address: 0x18aaec, Func Offset: 0x3c
	// Line 946, Address: 0x18aaf0, Func Offset: 0x40
	// Line 947, Address: 0x18aaf4, Func Offset: 0x44
	// Line 948, Address: 0x18aaf8, Func Offset: 0x48
	// Line 949, Address: 0x18aafc, Func Offset: 0x4c
	// Line 950, Address: 0x18ab08, Func Offset: 0x58
	// Line 951, Address: 0x18ab1c, Func Offset: 0x6c
	// Line 952, Address: 0x18ab28, Func Offset: 0x78
	// Line 953, Address: 0x18ab2c, Func Offset: 0x7c
	// Line 954, Address: 0x18ab30, Func Offset: 0x80
	// Line 955, Address: 0x18ab34, Func Offset: 0x84
	// Line 956, Address: 0x18ab3c, Func Offset: 0x8c
	// Line 957, Address: 0x18ab40, Func Offset: 0x90
	// Line 958, Address: 0x18ab44, Func Offset: 0x94
	// Line 959, Address: 0x18ab4c, Func Offset: 0x9c
	// Line 962, Address: 0x18ab50, Func Offset: 0xa0
	// Func End, Address: 0x18ab78, Func Offset: 0xc8
}

