typedef struct _sif_rpc_data;
typedef struct _sif_client_data;
typedef struct _anon0;
typedef struct _sif_serve_data;
typedef struct _anon1;
typedef struct Sd3dDataStruct;
typedef struct SdCallData;
typedef struct _sif_queue_data;

typedef void(*type_0)();
typedef void(*type_1)(void*);
typedef void(*type_10)(void*);
typedef void*(*type_12)(unsigned int, void*, int);

typedef int type_2[64];
typedef int type_3[64];
typedef unsigned char* type_4[2];
typedef unsigned char type_5[24];
typedef _anon0 type_6[8];
typedef unsigned char type_7[24];
typedef float type_8[4];
typedef _anon1 type_9[8];
typedef short type_11[468216];
typedef Sd3dDataStruct type_13[17];
typedef short type_14[8192];
typedef int type_15[2];
typedef SdCallData type_16[64];

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
	void* cbuff;
	void(*func)(void*);
	void* para;
	_sif_serve_data* serve;
};

struct _anon0
{
	int angle1;
	int angle2;
	int mode;
	float level;
	float minlevel;
	float pitch;
	float cutoff;
	float pos[4];
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

struct _anon1
{
	void* base;
	int size;
	int pointer;
	int mode;
};

struct Sd3dDataStruct
{
	unsigned char loop;
	unsigned long ofst;
	unsigned long size;
};

struct SdCallData
{
	unsigned int call;
	unsigned int direct;
	unsigned int dist;
	unsigned int pitch;
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

SdCallData sd_call_data[64];
int sd_que;
int sd_read_status;
int sd_str_status[2];
_sif_client_data sdsif_bd;
void(*SdSifRet)(void*);
int sdsif_rdata[64];
int sdsif_idata[64];
unsigned char sd_stat_core1[24];
unsigned char sd_stat_core0[24];
Sd3dDataStruct Sd3dData[17];
int gDataTopAddr;
void(*Sd3dExec)();
_anon0 env3d[8];
_anon1 in_buf_env[8];
int idout;
_anon0 dmy_env;
_anon1 dmy_buf_env;
short ibuf[468216];
_anon1 out_buf_env;
short obuf[8192];
int gcount;
unsigned char* gDataIOPPtr[2];

int sd_call(int call, int direct, int dist, int pitch);
int sd_se_stop(int call);
int sd_track(int track, int vol);
int sd_radio(int ch, int vol, int pan, int pitch);
int sd_stat();
void sd_vsync();
int SdSifInit();
int SdSifCall(int n, int ssize, int rsize);
void SdSifRet();
int Sd3dInit();
int Sd3dDataRead();
void Sd3dExec();
int sd_3d_call(int call, int arg1, int arg2);
int Sd3dPrePlay(int call, int arg1, int arg2);
void Sd3dPlay(int call, int arg1, int arg2, int no);
int sd_3d_move(int no, int arg1, int arg2);
void sd_3d_allstop();
void sd_3d_stop(int no);

// 
// Start address: 0x197970
int sd_call(int call, int direct, int dist, int pitch)
{
	int sdinitflag;
	// Line 101, Address: 0x197970, Func Offset: 0
	// Line 107, Address: 0x197988, Func Offset: 0x18
	// Line 110, Address: 0x1979a0, Func Offset: 0x30
	// Line 112, Address: 0x1979b0, Func Offset: 0x40
	// Line 113, Address: 0x1979bc, Func Offset: 0x4c
	// Line 114, Address: 0x1979c4, Func Offset: 0x54
	// Line 115, Address: 0x1979cc, Func Offset: 0x5c
	// Line 116, Address: 0x1979d8, Func Offset: 0x68
	// Line 117, Address: 0x1979e0, Func Offset: 0x70
	// Line 118, Address: 0x1979e8, Func Offset: 0x78
	// Line 120, Address: 0x1979f4, Func Offset: 0x84
	// Line 122, Address: 0x1979fc, Func Offset: 0x8c
	// Line 124, Address: 0x197a24, Func Offset: 0xb4
	// Line 125, Address: 0x197a30, Func Offset: 0xc0
	// Line 127, Address: 0x197a3c, Func Offset: 0xcc
	// Line 129, Address: 0x197a5c, Func Offset: 0xec
	// Line 134, Address: 0x197a68, Func Offset: 0xf8
	// Line 136, Address: 0x197a7c, Func Offset: 0x10c
	// Line 137, Address: 0x197a90, Func Offset: 0x120
	// Line 138, Address: 0x197ab0, Func Offset: 0x140
	// Line 139, Address: 0x197ad0, Func Offset: 0x160
	// Line 140, Address: 0x197af0, Func Offset: 0x180
	// Line 141, Address: 0x197b10, Func Offset: 0x1a0
	// Line 145, Address: 0x197b1c, Func Offset: 0x1ac
	// Line 147, Address: 0x197b20, Func Offset: 0x1b0
	// Func End, Address: 0x197b30, Func Offset: 0x1c0
}

// 
// Start address: 0x197b30
int sd_se_stop(int call)
{
	// Line 153, Address: 0x197b30, Func Offset: 0
	// Line 155, Address: 0x197b3c, Func Offset: 0xc
	// Line 156, Address: 0x197b68, Func Offset: 0x38
	// Line 157, Address: 0x197b84, Func Offset: 0x54
	// Func End, Address: 0x197b94, Func Offset: 0x64
}

// 
// Start address: 0x197ba0
int sd_track(int track, int vol)
{
	// Line 174, Address: 0x197ba0, Func Offset: 0
	// Line 176, Address: 0x197bb0, Func Offset: 0x10
	// Line 177, Address: 0x197bc8, Func Offset: 0x28
	// Func End, Address: 0x197bd8, Func Offset: 0x38
}

// 
// Start address: 0x197be0
int sd_radio(int ch, int vol, int pan, int pitch)
{
	// Line 184, Address: 0x197be0, Func Offset: 0
	// Line 186, Address: 0x197bf8, Func Offset: 0x18
	// Line 187, Address: 0x197c14, Func Offset: 0x34
	// Func End, Address: 0x197c24, Func Offset: 0x44
}

// 
// Start address: 0x197c30
int sd_stat()
{
	int stat;
	// Line 193, Address: 0x197c30, Func Offset: 0
	// Line 197, Address: 0x197c38, Func Offset: 0x8
	// Line 198, Address: 0x197c40, Func Offset: 0x10
	// Line 199, Address: 0x197c50, Func Offset: 0x20
	// Line 203, Address: 0x197c60, Func Offset: 0x30
	// Line 204, Address: 0x197c64, Func Offset: 0x34
	// Func End, Address: 0x197c74, Func Offset: 0x44
}

// 
// Start address: 0x197c80
void sd_vsync()
{
	int i;
	// Line 210, Address: 0x197c80, Func Offset: 0
	// Line 224, Address: 0x197c8c, Func Offset: 0xc
	// Line 227, Address: 0x197c90, Func Offset: 0x10
	// Line 230, Address: 0x197c98, Func Offset: 0x18
	// Line 231, Address: 0x197c9c, Func Offset: 0x1c
	// Line 232, Address: 0x197cb0, Func Offset: 0x30
	// Line 234, Address: 0x197ce8, Func Offset: 0x68
	// Line 235, Address: 0x197cf4, Func Offset: 0x74
	// Func End, Address: 0x197d08, Func Offset: 0x88
}

// 
// Start address: 0x197d10
int SdSifInit()
{
	int i;
	// Line 242, Address: 0x197d10, Func Offset: 0
	// Line 248, Address: 0x197d1c, Func Offset: 0xc
	// Line 256, Address: 0x197d28, Func Offset: 0x18
	// Line 260, Address: 0x197d48, Func Offset: 0x38
	// Line 262, Address: 0x197d58, Func Offset: 0x48
	// Line 264, Address: 0x197d64, Func Offset: 0x54
	// Line 265, Address: 0x197d74, Func Offset: 0x64
	// Line 266, Address: 0x197d78, Func Offset: 0x68
	// Line 267, Address: 0x197d94, Func Offset: 0x84
	// Line 268, Address: 0x197d9c, Func Offset: 0x8c
	// Line 269, Address: 0x197da8, Func Offset: 0x98
	// Line 270, Address: 0x197dac, Func Offset: 0x9c
	// Func End, Address: 0x197dc0, Func Offset: 0xb0
}

// 
// Start address: 0x197dc0
int SdSifCall(int n, int ssize, int rsize)
{
	// Line 276, Address: 0x197dc0, Func Offset: 0
	// Line 280, Address: 0x197dd4, Func Offset: 0x14
	// Line 286, Address: 0x197dfc, Func Offset: 0x3c
	// Line 302, Address: 0x197e40, Func Offset: 0x80
	// Func End, Address: 0x197e50, Func Offset: 0x90
}

// 
// Start address: 0x197e50
void SdSifRet()
{
	int i;
	// Line 308, Address: 0x197e50, Func Offset: 0
	// Line 311, Address: 0x197e58, Func Offset: 0x8
	// Line 312, Address: 0x197e6c, Func Offset: 0x1c
	// Line 313, Address: 0x197e84, Func Offset: 0x34
	// Line 315, Address: 0x197e9c, Func Offset: 0x4c
	// Line 317, Address: 0x197ea8, Func Offset: 0x58
	// Line 318, Address: 0x197ed4, Func Offset: 0x84
	// Line 319, Address: 0x197ee4, Func Offset: 0x94
	// Line 321, Address: 0x197ef0, Func Offset: 0xa0
	// Line 322, Address: 0x197f1c, Func Offset: 0xcc
	// Line 324, Address: 0x197f2c, Func Offset: 0xdc
	// Func End, Address: 0x197f3c, Func Offset: 0xec
}

// 
// Start address: 0x197f40
int Sd3dInit()
{
	int trans_flag;
	int gCallbackThreadID;
	int idvs;
	int i;
	void* gpbuffwork;
	// Line 383, Address: 0x197f40, Func Offset: 0
	// Line 388, Address: 0x197f58, Func Offset: 0x18
	// Line 389, Address: 0x197f64, Func Offset: 0x24
	// Line 392, Address: 0x197f70, Func Offset: 0x30
	// Line 393, Address: 0x197f80, Func Offset: 0x40
	// Line 394, Address: 0x197f8c, Func Offset: 0x4c
	// Line 395, Address: 0x197f94, Func Offset: 0x54
	// Line 398, Address: 0x197fa0, Func Offset: 0x60
	// Line 400, Address: 0x197fbc, Func Offset: 0x7c
	// Line 401, Address: 0x197fcc, Func Offset: 0x8c
	// Line 402, Address: 0x197fd4, Func Offset: 0x94
	// Line 403, Address: 0x197fe4, Func Offset: 0xa4
	// Line 404, Address: 0x197ff4, Func Offset: 0xb4
	// Line 405, Address: 0x197ffc, Func Offset: 0xbc
	// Line 407, Address: 0x198008, Func Offset: 0xc8
	// Line 410, Address: 0x198014, Func Offset: 0xd4
	// Line 411, Address: 0x198028, Func Offset: 0xe8
	// Line 412, Address: 0x19803c, Func Offset: 0xfc
	// Line 413, Address: 0x19805c, Func Offset: 0x11c
	// Line 414, Address: 0x198078, Func Offset: 0x138
	// Line 415, Address: 0x198094, Func Offset: 0x154
	// Line 416, Address: 0x1980b0, Func Offset: 0x170
	// Line 417, Address: 0x1980c4, Func Offset: 0x184
	// Line 419, Address: 0x1980dc, Func Offset: 0x19c
	// Line 420, Address: 0x1980f8, Func Offset: 0x1b8
	// Line 421, Address: 0x198114, Func Offset: 0x1d4
	// Line 422, Address: 0x198128, Func Offset: 0x1e8
	// Line 423, Address: 0x19813c, Func Offset: 0x1fc
	// Line 426, Address: 0x19814c, Func Offset: 0x20c
	// Line 431, Address: 0x198174, Func Offset: 0x234
	// Line 433, Address: 0x198198, Func Offset: 0x258
	// Line 436, Address: 0x1981a4, Func Offset: 0x264
	// Line 437, Address: 0x1981d8, Func Offset: 0x298
	// Line 440, Address: 0x1981ec, Func Offset: 0x2ac
	// Line 449, Address: 0x1981fc, Func Offset: 0x2bc
	// Line 451, Address: 0x198204, Func Offset: 0x2c4
	// Line 453, Address: 0x198214, Func Offset: 0x2d4
	// Line 455, Address: 0x198224, Func Offset: 0x2e4
	// Line 456, Address: 0x198234, Func Offset: 0x2f4
	// Line 459, Address: 0x198240, Func Offset: 0x300
	// Line 461, Address: 0x198254, Func Offset: 0x314
	// Line 463, Address: 0x198260, Func Offset: 0x320
	// Line 464, Address: 0x198278, Func Offset: 0x338
	// Line 465, Address: 0x198290, Func Offset: 0x350
	// Line 467, Address: 0x1982a8, Func Offset: 0x368
	// Line 471, Address: 0x1982bc, Func Offset: 0x37c
	// Line 472, Address: 0x1982c0, Func Offset: 0x380
	// Line 477, Address: 0x1982e0, Func Offset: 0x3a0
	// Line 479, Address: 0x198304, Func Offset: 0x3c4
	// Line 480, Address: 0x19831c, Func Offset: 0x3dc
	// Line 482, Address: 0x198334, Func Offset: 0x3f4
	// Line 483, Address: 0x198338, Func Offset: 0x3f8
	// Func End, Address: 0x198358, Func Offset: 0x418
}

// 
// Start address: 0x198360
int Sd3dDataRead()
{
	// Line 487, Address: 0x198360, Func Offset: 0
	// Line 488, Address: 0x198368, Func Offset: 0x8
	// Line 489, Address: 0x198370, Func Offset: 0x10
	// Line 491, Address: 0x198384, Func Offset: 0x24
	// Line 493, Address: 0x198394, Func Offset: 0x34
	// Line 494, Address: 0x1983a4, Func Offset: 0x44
	// Line 496, Address: 0x1983b0, Func Offset: 0x50
	// Line 497, Address: 0x1983c0, Func Offset: 0x60
	// Line 499, Address: 0x1983d4, Func Offset: 0x74
	// Line 501, Address: 0x1983ec, Func Offset: 0x8c
	// Line 503, Address: 0x19840c, Func Offset: 0xac
	// Line 506, Address: 0x19842c, Func Offset: 0xcc
	// Line 507, Address: 0x198430, Func Offset: 0xd0
	// Func End, Address: 0x198440, Func Offset: 0xe0
}

// 
// Start address: 0x198440
void Sd3dExec()
{
	// Line 513, Address: 0x198440, Func Offset: 0
	// Line 514, Address: 0x198448, Func Offset: 0x8
	// Line 515, Address: 0x19845c, Func Offset: 0x1c
	// Line 516, Address: 0x198470, Func Offset: 0x30
	// Line 517, Address: 0x19847c, Func Offset: 0x3c
	// Line 520, Address: 0x1984b0, Func Offset: 0x70
	// Func End, Address: 0x1984c0, Func Offset: 0x80
}

// 
// Start address: 0x1984c0
int sd_3d_call(int call, int arg1, int arg2)
{
	// Line 526, Address: 0x1984c0, Func Offset: 0
	// Line 530, Address: 0x1984d4, Func Offset: 0x14
	// Line 532, Address: 0x1984fc, Func Offset: 0x3c
	// Line 534, Address: 0x198518, Func Offset: 0x58
	// Line 535, Address: 0x19851c, Func Offset: 0x5c
	// Func End, Address: 0x19852c, Func Offset: 0x6c
}

// 
// Start address: 0x198530
int Sd3dPrePlay(int call, int arg1, int arg2)
{
	int i;
	int ret;
	// Line 539, Address: 0x198530, Func Offset: 0
	// Line 542, Address: 0x19854c, Func Offset: 0x1c
	// Line 543, Address: 0x198550, Func Offset: 0x20
	// Line 545, Address: 0x19855c, Func Offset: 0x2c
	// Line 547, Address: 0x198578, Func Offset: 0x48
	// Line 548, Address: 0x198590, Func Offset: 0x60
	// Line 549, Address: 0x198594, Func Offset: 0x64
	// Line 551, Address: 0x19859c, Func Offset: 0x6c
	// Line 552, Address: 0x1985b0, Func Offset: 0x80
	// Line 553, Address: 0x1985b4, Func Offset: 0x84
	// Func End, Address: 0x1985cc, Func Offset: 0x9c
}

// 
// Start address: 0x1985d0
void Sd3dPlay(int call, int arg1, int arg2, int no)
{
	unsigned long size;
	unsigned long ofst;
	unsigned char loop;
	// Line 558, Address: 0x1985d0, Func Offset: 0
	// Line 562, Address: 0x1985f4, Func Offset: 0x24
	// Line 563, Address: 0x198620, Func Offset: 0x50
	// Line 564, Address: 0x198648, Func Offset: 0x78
	// Line 569, Address: 0x198670, Func Offset: 0xa0
	// Line 570, Address: 0x1986a4, Func Offset: 0xd4
	// Line 571, Address: 0x1986e8, Func Offset: 0x118
	// Line 572, Address: 0x198700, Func Offset: 0x130
	// Line 574, Address: 0x198718, Func Offset: 0x148
	// Line 575, Address: 0x198730, Func Offset: 0x160
	// Line 576, Address: 0x19874c, Func Offset: 0x17c
	// Line 578, Address: 0x198794, Func Offset: 0x1c4
	// Line 581, Address: 0x1987ac, Func Offset: 0x1dc
	// Line 582, Address: 0x1987d0, Func Offset: 0x200
	// Line 584, Address: 0x1987d8, Func Offset: 0x208
	// Line 587, Address: 0x1987fc, Func Offset: 0x22c
	// Line 588, Address: 0x19881c, Func Offset: 0x24c
	// Line 589, Address: 0x198824, Func Offset: 0x254
	// Line 591, Address: 0x198848, Func Offset: 0x278
	// Line 594, Address: 0x198864, Func Offset: 0x294
	// Func End, Address: 0x198880, Func Offset: 0x2b0
}

// 
// Start address: 0x198880
int sd_3d_move(int no, int arg1, int arg2)
{
	// Line 601, Address: 0x198880, Func Offset: 0
	// Line 602, Address: 0x198890, Func Offset: 0x10
	// Line 604, Address: 0x1988bc, Func Offset: 0x3c
	// Line 605, Address: 0x1988d8, Func Offset: 0x58
	// Line 606, Address: 0x198920, Func Offset: 0xa0
	// Line 607, Address: 0x198924, Func Offset: 0xa4
	// Func End, Address: 0x198930, Func Offset: 0xb0
}

// 
// Start address: 0x198930
void sd_3d_allstop()
{
	int i;
	// Line 614, Address: 0x198930, Func Offset: 0
	// Line 616, Address: 0x19893c, Func Offset: 0xc
	// Line 618, Address: 0x198948, Func Offset: 0x18
	// Line 619, Address: 0x198954, Func Offset: 0x24
	// Line 620, Address: 0x198968, Func Offset: 0x38
	// Func End, Address: 0x19897c, Func Offset: 0x4c
}

// 
// Start address: 0x198980
void sd_3d_stop(int no)
{
	// Line 623, Address: 0x198980, Func Offset: 0
	// Line 624, Address: 0x19898c, Func Offset: 0xc
	// Line 625, Address: 0x1989a4, Func Offset: 0x24
	// Line 627, Address: 0x1989bc, Func Offset: 0x3c
	// Func End, Address: 0x1989cc, Func Offset: 0x4c
}

