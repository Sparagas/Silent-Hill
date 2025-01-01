typedef struct _sif_client_data;
typedef struct _anon0;
typedef struct _sif_serve_data;
typedef struct _sif_queue_data;
typedef struct _anon1;
typedef struct SdCallData;
typedef struct _sif_rpc_data;
typedef struct Sd3dDataStruct;

typedef void*(*type_0)(unsigned int, void*, int);
typedef void(*type_7)(void*);
typedef void(*type_13)(void*);
typedef void(*type_14)();

typedef int type_1[64];
typedef short type_2[409600];
typedef unsigned char type_3[24];
typedef short type_4[8192];
typedef unsigned char type_5[24];
typedef float type_6[4];
typedef int type_8[2];
typedef unsigned char* type_9[2];
typedef _anon0 type_10[8];
typedef SdCallData type_11[64];
typedef Sd3dDataStruct type_12[258];
typedef int type_15[64];
typedef _anon1 type_16[8];

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

struct _sif_queue_data
{
	int key;
	int active;
	_sif_serve_data* link;
	_sif_serve_data* start;
	_sif_serve_data* end;
	_sif_queue_data* next;
};

struct _anon1
{
	void* base;
	int size;
	int pointer;
	int mode;
};

struct SdCallData
{
	unsigned int call;
	unsigned int direct;
	unsigned int dist;
	unsigned int pitch;
};

struct _sif_rpc_data
{
	void* paddr;
	unsigned int pid;
	int tid;
	unsigned int mode;
};

struct Sd3dDataStruct
{
	unsigned char loop;
	unsigned long ofst;
	unsigned long size;
	unsigned long sr;
};

int dpath;
SdCallData sd_call_data[64];
int sd_que;
int sd_stat_timer;
int sd_read_status;
int sd_str_status[2];
void(*SdSifRet)(void*);
int sdsif_rdata[64];
_sif_client_data sdsif_bd;
int sdsif_idata[64];
unsigned char sd_stat_core1[24];
unsigned char sd_stat_core0[24];
Sd3dDataStruct Sd3dData[258];
int gDataTopAddr;
void(*Sd3dExec)();
_anon0 env3d[8];
_anon1 in_buf_env[8];
int idout;
_anon0 dmy_env;
_anon1 dmy_buf_env;
short ibuf[409600];
_anon1 out_buf_env;
short obuf[8192];
int gcount;
int se_stemono;
unsigned char* gDataIOPPtr[2];
int se_mvol;

int sd_call(int call, int direct, int dist, int pitch);
int sd_se_stop(int call);
int sd_se_change(int call, int direct, int dist, int pitch);
int sd_track(int track, int vol);
int sd_radio(int ch, int vol, int pan, int pitch);
int sd_stat();
void sd_setpath(char* dp);
void sd_sendpath();
void sd_vsync();
int SdSifInit();
int SdSifCall(int n, int ssize, int rsize);
void SdSifRet();
int Sd3dInit();
void Sd3dSteMono(int mode);
void Sd3dMode(int pmode);
int Sd3dMalloc();
void Sd3dExec();
void Sd3dSetMVol(int vol);
int sd_3d_call(int call, int arg1, int arg2, float arg3, float arg4);
int Sd3dPrePlay(int call, int arg1, int arg2, float arg3, float arg4);
void Sd3dPlay(int call, int arg1, int arg2, float arg3, int no);
int sd_3d_move(int no, int arg1, int arg2, float arg3);
void sd_3d_allstop();
void sd_3d_stop(int no);
void* sd_3d_adrs();

// 
// Start address: 0x190cc0
int sd_call(int call, int direct, int dist, int pitch)
{
	int sdinitflag;
	// Line 114, Address: 0x190cc0, Func Offset: 0
	// Line 120, Address: 0x190ce8, Func Offset: 0x28
	// Line 123, Address: 0x190d38, Func Offset: 0x78
	// Line 125, Address: 0x190d48, Func Offset: 0x88
	// Line 126, Address: 0x190d54, Func Offset: 0x94
	// Line 127, Address: 0x190d5c, Func Offset: 0x9c
	// Line 128, Address: 0x190d64, Func Offset: 0xa4
	// Line 129, Address: 0x190d70, Func Offset: 0xb0
	// Line 130, Address: 0x190d78, Func Offset: 0xb8
	// Line 131, Address: 0x190d80, Func Offset: 0xc0
	// Line 132, Address: 0x190d8c, Func Offset: 0xcc
	// Line 134, Address: 0x190da4, Func Offset: 0xe4
	// Line 136, Address: 0x190dac, Func Offset: 0xec
	// Line 137, Address: 0x190db8, Func Offset: 0xf8
	// Line 139, Address: 0x190dc0, Func Offset: 0x100
	// Line 140, Address: 0x190dcc, Func Offset: 0x10c
	// Line 142, Address: 0x190dd4, Func Offset: 0x114
	// Line 143, Address: 0x190de0, Func Offset: 0x120
	// Line 145, Address: 0x190de8, Func Offset: 0x128
	// Line 146, Address: 0x190df4, Func Offset: 0x134
	// Line 148, Address: 0x190dfc, Func Offset: 0x13c
	// Line 149, Address: 0x190e08, Func Offset: 0x148
	// Line 151, Address: 0x190e10, Func Offset: 0x150
	// Line 153, Address: 0x190e30, Func Offset: 0x170
	// Line 154, Address: 0x190e3c, Func Offset: 0x17c
	// Line 155, Address: 0x190e44, Func Offset: 0x184
	// Line 157, Address: 0x190e50, Func Offset: 0x190
	// Line 159, Address: 0x190e68, Func Offset: 0x1a8
	// Line 160, Address: 0x190e74, Func Offset: 0x1b4
	// Line 165, Address: 0x190e80, Func Offset: 0x1c0
	// Line 167, Address: 0x190e94, Func Offset: 0x1d4
	// Line 168, Address: 0x190eb0, Func Offset: 0x1f0
	// Line 169, Address: 0x190ecc, Func Offset: 0x20c
	// Line 170, Address: 0x190ee8, Func Offset: 0x228
	// Line 171, Address: 0x190f04, Func Offset: 0x244
	// Line 172, Address: 0x190f20, Func Offset: 0x260
	// Line 176, Address: 0x190f2c, Func Offset: 0x26c
	// Line 178, Address: 0x190f30, Func Offset: 0x270
	// Func End, Address: 0x190f50, Func Offset: 0x290
}

// 
// Start address: 0x190f50
int sd_se_stop(int call)
{
	// Line 184, Address: 0x190f50, Func Offset: 0
	// Line 186, Address: 0x190f58, Func Offset: 0x8
	// Line 187, Address: 0x190f7c, Func Offset: 0x2c
	// Line 188, Address: 0x190f94, Func Offset: 0x44
	// Func End, Address: 0x190fa4, Func Offset: 0x54
}

// 
// Start address: 0x190fb0
int sd_se_change(int call, int direct, int dist, int pitch)
{
	// Line 195, Address: 0x190fb0, Func Offset: 0
	// Line 197, Address: 0x190fb8, Func Offset: 0x8
	// Line 198, Address: 0x190fdc, Func Offset: 0x2c
	// Line 199, Address: 0x190fe8, Func Offset: 0x38
	// Func End, Address: 0x190ff8, Func Offset: 0x48
}

// 
// Start address: 0x191000
int sd_track(int track, int vol)
{
	// Line 205, Address: 0x191000, Func Offset: 0
	// Line 207, Address: 0x191010, Func Offset: 0x10
	// Line 208, Address: 0x191024, Func Offset: 0x24
	// Func End, Address: 0x191034, Func Offset: 0x34
}

// 
// Start address: 0x191040
int sd_radio(int ch, int vol, int pan, int pitch)
{
	// Line 215, Address: 0x191040, Func Offset: 0
	// Line 217, Address: 0x191048, Func Offset: 0x8
	// Line 218, Address: 0x191054, Func Offset: 0x14
	// Func End, Address: 0x191064, Func Offset: 0x24
}

// 
// Start address: 0x191070
int sd_stat()
{
	int stat;
	// Line 228, Address: 0x191070, Func Offset: 0
	// Line 229, Address: 0x191078, Func Offset: 0x8
	// Line 230, Address: 0x191088, Func Offset: 0x18
	// Line 235, Address: 0x191098, Func Offset: 0x28
	// Func End, Address: 0x1910a0, Func Offset: 0x30
}

// 
// Start address: 0x1910a0
void sd_setpath(char* dp)
{
	// Line 241, Address: 0x1910a0, Func Offset: 0
	// Line 242, Address: 0x1910ac, Func Offset: 0xc
	// Line 243, Address: 0x1910b8, Func Offset: 0x18
	// Line 246, Address: 0x1910c8, Func Offset: 0x28
	// Func End, Address: 0x1910d8, Func Offset: 0x38
}

// 
// Start address: 0x1910e0
void sd_sendpath()
{
	// Line 249, Address: 0x1910e0, Func Offset: 0
	// Line 250, Address: 0x1910e8, Func Offset: 0x8
	// Line 252, Address: 0x191108, Func Offset: 0x28
	// Line 263, Address: 0x19114c, Func Offset: 0x6c
	// Func End, Address: 0x19115c, Func Offset: 0x7c
}

// 
// Start address: 0x191160
void sd_vsync()
{
	int i;
	// Line 269, Address: 0x191160, Func Offset: 0
	// Line 283, Address: 0x19116c, Func Offset: 0xc
	// Line 285, Address: 0x191198, Func Offset: 0x38
	// Line 288, Address: 0x19119c, Func Offset: 0x3c
	// Line 291, Address: 0x1911a4, Func Offset: 0x44
	// Line 292, Address: 0x1911a8, Func Offset: 0x48
	// Line 293, Address: 0x1911bc, Func Offset: 0x5c
	// Line 295, Address: 0x1911f8, Func Offset: 0x98
	// Line 296, Address: 0x191204, Func Offset: 0xa4
	// Func End, Address: 0x191218, Func Offset: 0xb8
}

// 
// Start address: 0x191220
int SdSifInit()
{
	int i;
	// Line 304, Address: 0x191220, Func Offset: 0
	// Line 310, Address: 0x191228, Func Offset: 0x8
	// Line 318, Address: 0x191234, Func Offset: 0x14
	// Line 322, Address: 0x191254, Func Offset: 0x34
	// Line 324, Address: 0x191264, Func Offset: 0x44
	// Line 326, Address: 0x191274, Func Offset: 0x54
	// Line 327, Address: 0x191284, Func Offset: 0x64
	// Line 328, Address: 0x191288, Func Offset: 0x68
	// Line 329, Address: 0x1912a4, Func Offset: 0x84
	// Line 330, Address: 0x1912ac, Func Offset: 0x8c
	// Line 331, Address: 0x1912b8, Func Offset: 0x98
	// Line 332, Address: 0x1912bc, Func Offset: 0x9c
	// Func End, Address: 0x1912cc, Func Offset: 0xac
}

// 
// Start address: 0x1912d0
int SdSifCall(int n, int ssize, int rsize)
{
	// Line 338, Address: 0x1912d0, Func Offset: 0
	// Line 342, Address: 0x1912f0, Func Offset: 0x20
	// Line 364, Address: 0x191358, Func Offset: 0x88
	// Func End, Address: 0x191374, Func Offset: 0xa4
}

// 
// Start address: 0x191380
void SdSifRet()
{
	int i;
	// Line 374, Address: 0x191380, Func Offset: 0
	// Line 376, Address: 0x19138c, Func Offset: 0xc
	// Line 377, Address: 0x1913b0, Func Offset: 0x30
	// Line 378, Address: 0x1913c4, Func Offset: 0x44
	// Line 380, Address: 0x1913d0, Func Offset: 0x50
	// Line 381, Address: 0x1913f4, Func Offset: 0x74
	// Line 384, Address: 0x191404, Func Offset: 0x84
	// Line 385, Address: 0x191414, Func Offset: 0x94
	// Line 386, Address: 0x191428, Func Offset: 0xa8
	// Line 387, Address: 0x191438, Func Offset: 0xb8
	// Line 388, Address: 0x191448, Func Offset: 0xc8
	// Func End, Address: 0x191450, Func Offset: 0xd0
}

// 
// Start address: 0x191450
int Sd3dInit()
{
	int trans_flag;
	int gCallbackThreadID;
	int idvs;
	int i;
	void* gpbuffwork;
	// Line 443, Address: 0x191450, Func Offset: 0
	// Line 448, Address: 0x19145c, Func Offset: 0xc
	// Line 450, Address: 0x191468, Func Offset: 0x18
	// Line 451, Address: 0x191474, Func Offset: 0x24
	// Line 453, Address: 0x191488, Func Offset: 0x38
	// Line 454, Address: 0x191494, Func Offset: 0x44
	// Line 455, Address: 0x19149c, Func Offset: 0x4c
	// Line 458, Address: 0x1914a4, Func Offset: 0x54
	// Line 459, Address: 0x1914b4, Func Offset: 0x64
	// Line 460, Address: 0x1914c0, Func Offset: 0x70
	// Line 461, Address: 0x1914c8, Func Offset: 0x78
	// Line 464, Address: 0x1914d4, Func Offset: 0x84
	// Line 466, Address: 0x1914f0, Func Offset: 0xa0
	// Line 467, Address: 0x1914fc, Func Offset: 0xac
	// Line 468, Address: 0x191504, Func Offset: 0xb4
	// Line 469, Address: 0x191514, Func Offset: 0xc4
	// Line 470, Address: 0x191524, Func Offset: 0xd4
	// Line 471, Address: 0x19152c, Func Offset: 0xdc
	// Line 473, Address: 0x191538, Func Offset: 0xe8
	// Line 476, Address: 0x191544, Func Offset: 0xf4
	// Line 477, Address: 0x191558, Func Offset: 0x108
	// Line 478, Address: 0x191568, Func Offset: 0x118
	// Line 479, Address: 0x191580, Func Offset: 0x130
	// Line 480, Address: 0x191594, Func Offset: 0x144
	// Line 481, Address: 0x1915a4, Func Offset: 0x154
	// Line 482, Address: 0x1915b8, Func Offset: 0x168
	// Line 483, Address: 0x1915c8, Func Offset: 0x178
	// Line 485, Address: 0x1915dc, Func Offset: 0x18c
	// Line 486, Address: 0x1915f8, Func Offset: 0x1a8
	// Line 487, Address: 0x191610, Func Offset: 0x1c0
	// Line 488, Address: 0x191620, Func Offset: 0x1d0
	// Line 489, Address: 0x191630, Func Offset: 0x1e0
	// Line 491, Address: 0x191644, Func Offset: 0x1f4
	// Line 495, Address: 0x191668, Func Offset: 0x218
	// Line 497, Address: 0x19168c, Func Offset: 0x23c
	// Line 500, Address: 0x191698, Func Offset: 0x248
	// Line 501, Address: 0x1916cc, Func Offset: 0x27c
	// Line 504, Address: 0x1916dc, Func Offset: 0x28c
	// Line 513, Address: 0x1916e8, Func Offset: 0x298
	// Line 515, Address: 0x1916f0, Func Offset: 0x2a0
	// Line 517, Address: 0x1916fc, Func Offset: 0x2ac
	// Line 519, Address: 0x19170c, Func Offset: 0x2bc
	// Line 520, Address: 0x19171c, Func Offset: 0x2cc
	// Line 523, Address: 0x191728, Func Offset: 0x2d8
	// Line 525, Address: 0x19173c, Func Offset: 0x2ec
	// Line 527, Address: 0x191748, Func Offset: 0x2f8
	// Line 528, Address: 0x191760, Func Offset: 0x310
	// Line 529, Address: 0x191778, Func Offset: 0x328
	// Line 530, Address: 0x191790, Func Offset: 0x340
	// Line 534, Address: 0x1917a4, Func Offset: 0x354
	// Line 535, Address: 0x1917a8, Func Offset: 0x358
	// Line 540, Address: 0x1917c8, Func Offset: 0x378
	// Line 542, Address: 0x1917ec, Func Offset: 0x39c
	// Line 543, Address: 0x191804, Func Offset: 0x3b4
	// Line 545, Address: 0x19181c, Func Offset: 0x3cc
	// Line 546, Address: 0x191828, Func Offset: 0x3d8
	// Line 548, Address: 0x191834, Func Offset: 0x3e4
	// Line 549, Address: 0x191838, Func Offset: 0x3e8
	// Func End, Address: 0x19184c, Func Offset: 0x3fc
}

// 
// Start address: 0x191850
void Sd3dSteMono(int mode)
{
	// Line 554, Address: 0x191850, Func Offset: 0
	// Line 555, Address: 0x191858, Func Offset: 0x8
	// Func End, Address: 0x191860, Func Offset: 0x10
}

// 
// Start address: 0x191860
void Sd3dMode(int pmode)
{
	// Line 559, Address: 0x191860, Func Offset: 0
	// Line 560, Address: 0x191868, Func Offset: 0x8
	// Line 561, Address: 0x191870, Func Offset: 0x10
	// Func End, Address: 0x191880, Func Offset: 0x20
}

// 
// Start address: 0x191880
int Sd3dMalloc()
{
	// Line 565, Address: 0x191880, Func Offset: 0
	// Line 566, Address: 0x191888, Func Offset: 0x8
	// Line 567, Address: 0x191890, Func Offset: 0x10
	// Line 569, Address: 0x1918a4, Func Offset: 0x24
	// Line 571, Address: 0x1918b4, Func Offset: 0x34
	// Line 572, Address: 0x1918c4, Func Offset: 0x44
	// Line 574, Address: 0x1918d0, Func Offset: 0x50
	// Line 575, Address: 0x1918d8, Func Offset: 0x58
	// Line 577, Address: 0x1918ec, Func Offset: 0x6c
	// Line 579, Address: 0x191904, Func Offset: 0x84
	// Line 581, Address: 0x191924, Func Offset: 0xa4
	// Line 584, Address: 0x191944, Func Offset: 0xc4
	// Line 585, Address: 0x191948, Func Offset: 0xc8
	// Func End, Address: 0x191958, Func Offset: 0xd8
}

// 
// Start address: 0x191960
void Sd3dExec()
{
	// Line 591, Address: 0x191960, Func Offset: 0
	// Line 592, Address: 0x191968, Func Offset: 0x8
	// Line 593, Address: 0x19197c, Func Offset: 0x1c
	// Line 594, Address: 0x191990, Func Offset: 0x30
	// Line 595, Address: 0x19199c, Func Offset: 0x3c
	// Line 598, Address: 0x1919d0, Func Offset: 0x70
	// Func End, Address: 0x1919e0, Func Offset: 0x80
}

// 
// Start address: 0x1919e0
void Sd3dSetMVol(int vol)
{
	// Line 605, Address: 0x1919e0, Func Offset: 0
	// Line 608, Address: 0x1919e8, Func Offset: 0x8
	// Func End, Address: 0x1919f0, Func Offset: 0x10
}

// 
// Start address: 0x1919f0
int sd_3d_call(int call, int arg1, int arg2, float arg3, float arg4)
{
	// Line 614, Address: 0x1919f0, Func Offset: 0
	// Line 618, Address: 0x1919f8, Func Offset: 0x8
	// Line 620, Address: 0x191a18, Func Offset: 0x28
	// Line 622, Address: 0x191a28, Func Offset: 0x38
	// Line 623, Address: 0x191a2c, Func Offset: 0x3c
	// Func End, Address: 0x191a3c, Func Offset: 0x4c
}

// 
// Start address: 0x191a40
int Sd3dPrePlay(int call, int arg1, int arg2, float arg3, float arg4)
{
	int i;
	int ret;
	// Line 628, Address: 0x191a40, Func Offset: 0
	// Line 631, Address: 0x191a4c, Func Offset: 0xc
	// Line 632, Address: 0x191a50, Func Offset: 0x10
	// Line 634, Address: 0x191a5c, Func Offset: 0x1c
	// Line 636, Address: 0x191a78, Func Offset: 0x38
	// Line 637, Address: 0x191a84, Func Offset: 0x44
	// Line 638, Address: 0x191a88, Func Offset: 0x48
	// Line 640, Address: 0x191a90, Func Offset: 0x50
	// Line 642, Address: 0x191aa8, Func Offset: 0x68
	// Func End, Address: 0x191abc, Func Offset: 0x7c
}

// 
// Start address: 0x191ac0
void Sd3dPlay(int call, int arg1, int arg2, float arg3, int no)
{
	unsigned long sr;
	unsigned long size;
	unsigned long ofst;
	unsigned char loop;
	// Line 647, Address: 0x191ac0, Func Offset: 0
	// Line 651, Address: 0x191adc, Func Offset: 0x1c
	// Line 652, Address: 0x191af0, Func Offset: 0x30
	// Line 653, Address: 0x191b00, Func Offset: 0x40
	// Line 654, Address: 0x191b10, Func Offset: 0x50
	// Line 659, Address: 0x191b20, Func Offset: 0x60
	// Line 660, Address: 0x191b50, Func Offset: 0x90
	// Line 661, Address: 0x191b74, Func Offset: 0xb4
	// Line 662, Address: 0x191b84, Func Offset: 0xc4
	// Line 664, Address: 0x191b94, Func Offset: 0xd4
	// Line 666, Address: 0x191ba8, Func Offset: 0xe8
	// Line 667, Address: 0x191bbc, Func Offset: 0xfc
	// Line 669, Address: 0x191bd4, Func Offset: 0x114
	// Line 671, Address: 0x191be4, Func Offset: 0x124
	// Line 672, Address: 0x191c40, Func Offset: 0x180
	// Line 673, Address: 0x191c6c, Func Offset: 0x1ac
	// Line 675, Address: 0x191c7c, Func Offset: 0x1bc
	// Line 676, Address: 0x191c84, Func Offset: 0x1c4
	// Line 678, Address: 0x191c94, Func Offset: 0x1d4
	// Line 681, Address: 0x191c9c, Func Offset: 0x1dc
	// Func End, Address: 0x191cbc, Func Offset: 0x1fc
}

// 
// Start address: 0x191cc0
int sd_3d_move(int no, int arg1, int arg2, float arg3)
{
	// Line 690, Address: 0x191cc0, Func Offset: 0
	// Line 692, Address: 0x191ce8, Func Offset: 0x28
	// Line 693, Address: 0x191cfc, Func Offset: 0x3c
	// Line 695, Address: 0x191d18, Func Offset: 0x58
	// Line 697, Address: 0x191d2c, Func Offset: 0x6c
	// Line 699, Address: 0x191d40, Func Offset: 0x80
	// Line 700, Address: 0x191d9c, Func Offset: 0xdc
	// Line 701, Address: 0x191da0, Func Offset: 0xe0
	// Func End, Address: 0x191da8, Func Offset: 0xe8
}

// 
// Start address: 0x191db0
void sd_3d_allstop()
{
	int i;
	// Line 708, Address: 0x191db0, Func Offset: 0
	// Line 710, Address: 0x191dbc, Func Offset: 0xc
	// Line 712, Address: 0x191dc8, Func Offset: 0x18
	// Line 713, Address: 0x191dd4, Func Offset: 0x24
	// Line 714, Address: 0x191de8, Func Offset: 0x38
	// Func End, Address: 0x191dfc, Func Offset: 0x4c
}

// 
// Start address: 0x191e00
void sd_3d_stop(int no)
{
	// Line 717, Address: 0x191e00, Func Offset: 0
	// Line 718, Address: 0x191e08, Func Offset: 0x8
	// Line 719, Address: 0x191e1c, Func Offset: 0x1c
	// Line 721, Address: 0x191e34, Func Offset: 0x34
	// Func End, Address: 0x191e44, Func Offset: 0x44
}

// 
// Start address: 0x191e50
void* sd_3d_adrs()
{
	// Line 744, Address: 0x191e50, Func Offset: 0
	// Line 745, Address: 0x191e58, Func Offset: 0x8
	// Func End, Address: 0x191e60, Func Offset: 0x10
}

