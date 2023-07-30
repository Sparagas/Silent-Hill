typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef union _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef union _anon10;
typedef struct _anon11;
typedef union _anon12;
typedef union _anon13;

typedef int(*type_1)(_anon0*);
typedef int(*type_2)(_anon0*);
typedef int(*type_4)(_anon0*);
typedef int(*type_7)(int, int);
typedef int(*type_9)(int, int);
typedef int(*type_10)(int, int);
typedef int(*type_15)(_anon0*);
typedef int(*type_19)(_anon0*);

typedef unsigned char type_0[12];
typedef int type_3[2];
typedef unsigned char type_5[4];
typedef _anon5 type_6[3];
typedef unsigned char type_8[6];
typedef unsigned char type_11[12];
typedef _anon4 type_12[6];
typedef _anon1 type_13[3];
typedef _anon2 type_14[4];
typedef unsigned char type_16[6];
typedef _anon7 type_17[6];
typedef unsigned char type_18[6];
typedef int(*type_20)(_anon0*)[3];
typedef _anon9 type_21[6];
typedef int type_22[2];
typedef unsigned char type_23[6];
typedef _anon3 type_24[3];
typedef unsigned char type_25[32];
typedef unsigned char type_26[4];
typedef <unknown fundamental type (0xa510)> type_27[16];
typedef _anon8 type_28[2];
typedef int type_29[2];
typedef unsigned char type_30[6];

struct _anon0
{
	unsigned short joy;
	unsigned short trg;
	unsigned short rpd;
	_anon4 ca;
	_anon4 ch;
	unsigned char press[12];
	_anon4 info_act[6];
	_anon4 info_mode;
	_anon1 rpd_set[3];
	_anon2 ch_adj[4];
	_anon7 act[6];
	unsigned int enable_id;
	int port;
	int slot;
	int req_port;
	int req_slot;
	int req_id;
	int req_id_lock;
	int req_id_error;
	int step;
	int stat;
	int main_step;
	int id;
	int error;
	int req_press_mode;
	int wait_timer;
	_anon9 act_align[6];
	unsigned int ctrl;
	_anon10 actuate_data;
	int receive_id;
	int receive_length;
	unsigned char receive[32];
	<unknown fundamental type (0xa510)> dma_buffer[16];
};

struct _anon1
{
	unsigned short bit;
	unsigned char cnt;
	unsigned char dly;
};

struct _anon2
{
	unsigned char kind;
	unsigned char min;
	unsigned char max;
	unsigned char center;
};

struct _anon3
{
	unsigned short bit;
	unsigned char delay;
	unsigned char interval;
};

union _anon4
{
	unsigned int i;
	unsigned char c[4];
};

struct _anon5
{
	unsigned char type;
	unsigned char sub;
};

struct _anon6
{
	_anon0* pad_work;
	int n_pad;
	int exclusive_sema_id;
	unsigned int work_allocated : 1;
};

struct _anon7
{
	unsigned char kind;
	unsigned char timer;
	unsigned char level;
};

struct _anon8
{
	unsigned int work;
	unsigned int trg;
	unsigned int repeat;
	unsigned int cross_dir;
	unsigned int cross_dir_trg;
	_anon11 stick;
};

struct _anon9
{
	unsigned char number;
	unsigned char offset;
};

union _anon10
{
	int i[2];
	unsigned char uc[6];
};

struct _anon11
{
	float lxf;
	float lyf;
	float power_l;
	float degree_l;
	float rxf;
	float ryf;
	float power_r;
	float degree_r;
};

union _anon12
{
	unsigned int i;
	unsigned char c[4];
};

union _anon13
{
	int i[2];
	unsigned char uc[6];
};

_anon5 actuater_kind_table[3];
int(*scePadExitPressMode)(int, int);
int(*scePadEnterPressMode)(int, int);
unsigned char zero_press[12];
int(*pad_PressMode)(_anon0*);
int(*pad_ActAlign)(_anon0*);
int(*pad_SetMode)(_anon0*);
_anon6 environment;
_anon8 pad_status[2];
int force_work[2];

void EnterExclusive();
void ExitExclusive();
void clear_act_align(_anon0* p);
void clear_info_act(_anon0* p);
void clear_info_mode(_anon0* p);
void clear_act(_anon0* p);
void pad_work_init2(_anon0* p);
void pad_work_init1(_anon0* p);
void pad_disc(_anon0* p);
void pad_find(_anon0* p);
void pad_ctp1(_anon0* p);
int PadRead_Fill(_anon0* p);
void enable_myrule(_anon0* p);
int get_PadInfoMode(_anon0* p);
void get_PadInfoAct(_anon0* p);
int is_change_mode(_anon0* p);
int detect_id(int port, int slot, int id);
void pad_request_ActAlign(_anon0* p);
int pad_SetMode(_anon0* p);
int is_act_align(_anon0* p);
int search_act(_anon4* info_act, int kind);
void pad_zeroActuate(int port, int slot);
void pad_actu(_anon0* p, int read_ok);
int pad_ActAlign(_anon0* p);
int request_press_mode(_anon0* p);
int enter_press_mode(_anon0* p);
int is_press_mode(int extended_id);
int request_force_press_mode(_anon0* p);
void clear_set_press_flag(_anon0* p);
int pad_PressMode(_anon0* p);
int get_analog(_anon0* p);
int is_analog(int id);
int adjust_sub(int value, int range, int min, int max);
unsigned char analog_adjust_edge(int source, int min, int max);
unsigned char analog_adjust_center(int source, int min, int max, int center);
unsigned char analog_adjust(int source, int kind, int min, int max, int center);
int is_myrule(_anon0* p);
void disable_myrule(_anon0* p);
void pad_button_set(_anon0* p, int joy, int trg, int rpd);
void pad_press_set(_anon0* p, unsigned char* src, int n_dat);
int pad_read(_anon0* p, int len);
void pad_stab_sub(_anon0* p, int stable);
void init_pad_status(_anon0* p);
void pad_work_init0(_anon0* p);
int pad_init(int mode, int n_pad, _anon0* p, int assign_mode);
void Pad_Read(_anon0* p);
int step_open(_anon0* p);
void pad_exec(_anon0* p);
void pad_stab(_anon0* p);
void pad_erro(_anon0* p);
int step_read(_anon0* p);
int step_close(_anon0* p);
int is_continuous_error();
int check_close(_anon0* p);
int pad_get_stable(_anon0* p);
int ktpoiPadInit(int mode, int n_pad, _anon0* p);
void ktpoiPadRead();
_anon0* ktpoiPadAddress(int number);
int ktpoiPadGetStatus(int pad_number);
void ktpoiPadSetID(int pad_number, int id, int lock);
void ktpoiPadSetAlign(int pad_number);
void ktpoiPadSetActKind(int pad_number, unsigned char* d);
void ktpoiPadEnableActuater(int pad_number);
void ktpoiPadSetActuater(int pad_number, int act_number, int level, int timer);
int ktpoiPadGetStable(int pad_number);
int ktpoiPadGetID(int pad_number);
unsigned int ktpoiPadGetAn0(int pad_number);
void ktpoiPadSetRapid_0(_anon0* p, int group, int bit, int delay, int interval);
void ktpoiPadSetRapid(int pad_number, _anon3* d, int n_rpd);
int ktpoiPadQuit();
unsigned int ktpoiPadGetJoy(int pad_number);
unsigned int ktpoiPadGetTrg(int pad_number);
unsigned int ktpoiPadGetRpd(int pad_number);
void PadSetDualShockMode(int port_no);
void PadActuatorInit(int pad_no);
void sfPadActuatorRun(int port_no, int act_no, int level, float time);
void sfPadActuatorStop(int port_no, int act_no);
void sfPadActuatorStopAll();
void PadAnalogClear(int port_no);
void PadAnalogGet(int pad_no);
unsigned int Analog2CrossKey(float degree);
void force_analogue_init();
int ktpoiPadDetectID(int pad_number, int id);
void force_analogue_on();
void sfPadInit();
void sfPadQuit();
void sfPadClearAll();
void sfPadRead();
unsigned int sfPadGet(int no);
unsigned int sfPadGetTrigger(int no);
unsigned int sfPadGetRepeat(int no);
unsigned int sfPadGetForMenu(int no);
unsigned int sfPadGetTriggerForMenu(int no);
float sfPadGetAnalogLX(int no);
float sfPadGetAnalogLY(int no);
float sfPadGetAnalogLPower(int no);
float sfPadGetAnalogLDegree(int no);
float sfPadGetAnalogRX(int no);
float sfPadGetAnalogRY(int no);
float sfPadGetAnalogRPower(int no);
int sfPadIsDisconnet(int no);

// 
// Start address: 0x2cb250
void EnterExclusive()
{
	// Line 97, Address: 0x2cb250, Func Offset: 0
	// Func End, Address: 0x2cb258, Func Offset: 0x8
}

// 
// Start address: 0x2cb260
void ExitExclusive()
{
	// Line 98, Address: 0x2cb260, Func Offset: 0
	// Func End, Address: 0x2cb268, Func Offset: 0x8
}

// 
// Start address: 0x2cb270
void clear_act_align(_anon0* p)
{
	// Line 103, Address: 0x2cb270, Func Offset: 0
	// Func End, Address: 0x2cb27c, Func Offset: 0xc
}

// 
// Start address: 0x2cb280
void clear_info_act(_anon0* p)
{
	// Line 107, Address: 0x2cb280, Func Offset: 0
	// Func End, Address: 0x2cb28c, Func Offset: 0xc
}

// 
// Start address: 0x2cb290
void clear_info_mode(_anon0* p)
{
	// Line 111, Address: 0x2cb290, Func Offset: 0
	// Func End, Address: 0x2cb29c, Func Offset: 0xc
}

// 
// Start address: 0x2cb2a0
void clear_act(_anon0* p)
{
	// Line 117, Address: 0x2cb2a0, Func Offset: 0
	// Line 118, Address: 0x2cb2a4, Func Offset: 0x4
	// Line 120, Address: 0x2cb2cc, Func Offset: 0x2c
	// Func End, Address: 0x2cb2d4, Func Offset: 0x34
}

// 
// Start address: 0x2cb2e0
void pad_work_init2(_anon0* p)
{
	// Line 126, Address: 0x2cb2e0, Func Offset: 0
	// Line 127, Address: 0x2cb2e4, Func Offset: 0x4
	// Line 128, Address: 0x2cb2e8, Func Offset: 0x8
	// Line 130, Address: 0x2cb2ec, Func Offset: 0xc
	// Line 131, Address: 0x2cb2f0, Func Offset: 0x10
	// Line 133, Address: 0x2cb2f4, Func Offset: 0x14
	// Line 134, Address: 0x2cb2f8, Func Offset: 0x18
	// Line 135, Address: 0x2cb2fc, Func Offset: 0x1c
	// Line 137, Address: 0x2cb300, Func Offset: 0x20
	// Line 139, Address: 0x2cb308, Func Offset: 0x28
	// Func End, Address: 0x2cb310, Func Offset: 0x30
}

// 
// Start address: 0x2cb310
void pad_work_init1(_anon0* p)
{
	// Line 143, Address: 0x2cb310, Func Offset: 0
	// Line 144, Address: 0x2cb31c, Func Offset: 0xc
	// Line 145, Address: 0x2cb324, Func Offset: 0x14
	// Line 146, Address: 0x2cb32c, Func Offset: 0x1c
	// Line 148, Address: 0x2cb334, Func Offset: 0x24
	// Line 150, Address: 0x2cb33c, Func Offset: 0x2c
	// Line 153, Address: 0x2cb340, Func Offset: 0x30
	// Line 154, Address: 0x2cb34c, Func Offset: 0x3c
	// Line 157, Address: 0x2cb358, Func Offset: 0x48
	// Func End, Address: 0x2cb368, Func Offset: 0x58
}

// 
// Start address: 0x2cb370
void pad_disc(_anon0* p)
{
	// Line 161, Address: 0x2cb370, Func Offset: 0
	// Func End, Address: 0x2cb378, Func Offset: 0x8
}

// 
// Start address: 0x2cb380
void pad_find(_anon0* p)
{
	// Line 165, Address: 0x2cb380, Func Offset: 0
	// Func End, Address: 0x2cb388, Func Offset: 0x8
}

// 
// Start address: 0x2cb390
void pad_ctp1(_anon0* p)
{
	// Line 169, Address: 0x2cb390, Func Offset: 0
	// Func End, Address: 0x2cb398, Func Offset: 0x8
}

// 
// Start address: 0x2cb3a0
int PadRead_Fill(_anon0* p)
{
	int len;
	int len_0;
	// Line 173, Address: 0x2cb3a0, Func Offset: 0
	// Line 179, Address: 0x2cb3b0, Func Offset: 0x10
	// Line 180, Address: 0x2cb3c0, Func Offset: 0x20
	// Line 182, Address: 0x2cb3c4, Func Offset: 0x24
	// Line 183, Address: 0x2cb3d0, Func Offset: 0x30
	// Line 184, Address: 0x2cb3dc, Func Offset: 0x3c
	// Line 186, Address: 0x2cb3f8, Func Offset: 0x58
	// Line 188, Address: 0x2cb3fc, Func Offset: 0x5c
	// Line 187, Address: 0x2cb400, Func Offset: 0x60
	// Line 188, Address: 0x2cb404, Func Offset: 0x64
	// Func End, Address: 0x2cb410, Func Offset: 0x70
}

// 
// Start address: 0x2cb410
void enable_myrule(_anon0* p)
{
	// Line 192, Address: 0x2cb410, Func Offset: 0
	// Line 193, Address: 0x2cb41c, Func Offset: 0xc
	// Func End, Address: 0x2cb424, Func Offset: 0x14
}

// 
// Start address: 0x2cb430
int get_PadInfoMode(_anon0* p)
{
	int port;
	int slot;
	int i;
	int offset;
	int ret;
	_anon12 term;
	// Line 195, Address: 0x2cb430, Func Offset: 0
	// Line 207, Address: 0x2cb434, Func Offset: 0x4
	// Line 195, Address: 0x2cb438, Func Offset: 0x8
	// Line 208, Address: 0x2cb44c, Func Offset: 0x1c
	// Line 195, Address: 0x2cb450, Func Offset: 0x20
	// Line 208, Address: 0x2cb454, Func Offset: 0x24
	// Line 196, Address: 0x2cb458, Func Offset: 0x28
	// Line 197, Address: 0x2cb460, Func Offset: 0x30
	// Line 208, Address: 0x2cb464, Func Offset: 0x34
	// Line 213, Address: 0x2cb468, Func Offset: 0x38
	// Line 216, Address: 0x2cb47c, Func Offset: 0x4c
	// Line 215, Address: 0x2cb480, Func Offset: 0x50
	// Line 216, Address: 0x2cb484, Func Offset: 0x54
	// Line 220, Address: 0x2cb494, Func Offset: 0x64
	// Line 222, Address: 0x2cb4a0, Func Offset: 0x70
	// Line 223, Address: 0x2cb4a4, Func Offset: 0x74
	// Line 225, Address: 0x2cb4b0, Func Offset: 0x80
	// Line 226, Address: 0x2cb4b4, Func Offset: 0x84
	// Line 229, Address: 0x2cb4b8, Func Offset: 0x88
	// Func End, Address: 0x2cb4d8, Func Offset: 0xa8
}

// 
// Start address: 0x2cb4e0
void get_PadInfoAct(_anon0* p)
{
	int port;
	int slot;
	int n_act;
	int i;
	int j;
	// Line 231, Address: 0x2cb4e0, Func Offset: 0
	// Line 238, Address: 0x2cb4e4, Func Offset: 0x4
	// Line 231, Address: 0x2cb4e8, Func Offset: 0x8
	// Line 238, Address: 0x2cb4ec, Func Offset: 0xc
	// Line 231, Address: 0x2cb4f0, Func Offset: 0x10
	// Line 234, Address: 0x2cb50c, Func Offset: 0x2c
	// Line 233, Address: 0x2cb510, Func Offset: 0x30
	// Line 238, Address: 0x2cb514, Func Offset: 0x34
	// Line 240, Address: 0x2cb524, Func Offset: 0x44
	// Line 241, Address: 0x2cb530, Func Offset: 0x50
	// Line 243, Address: 0x2cb534, Func Offset: 0x54
	// Line 245, Address: 0x2cb538, Func Offset: 0x58
	// Line 246, Address: 0x2cb548, Func Offset: 0x68
	// Line 247, Address: 0x2cb550, Func Offset: 0x70
	// Line 248, Address: 0x2cb56c, Func Offset: 0x8c
	// Line 249, Address: 0x2cb57c, Func Offset: 0x9c
	// Line 252, Address: 0x2cb590, Func Offset: 0xb0
	// Func End, Address: 0x2cb5b4, Func Offset: 0xd4
}

// 
// Start address: 0x2cb5c0
int is_change_mode(_anon0* p)
{
	int ret;
	// Line 258, Address: 0x2cb5c0, Func Offset: 0
	// Line 259, Address: 0x2cb5d0, Func Offset: 0x10
	// Line 260, Address: 0x2cb5d4, Func Offset: 0x14
	// Line 263, Address: 0x2cb5d8, Func Offset: 0x18
	// Func End, Address: 0x2cb5e0, Func Offset: 0x20
}

// 
// Start address: 0x2cb5e0
int detect_id(int port, int slot, int id)
{
	int ret;
	int offset;
	int n_offset;
	int val;
	// Line 266, Address: 0x2cb5e0, Func Offset: 0
	// Line 267, Address: 0x2cb604, Func Offset: 0x24
	// Line 266, Address: 0x2cb608, Func Offset: 0x28
	// Line 280, Address: 0x2cb60c, Func Offset: 0x2c
	// Line 266, Address: 0x2cb614, Func Offset: 0x34
	// Line 280, Address: 0x2cb618, Func Offset: 0x38
	// Line 282, Address: 0x2cb620, Func Offset: 0x40
	// Line 283, Address: 0x2cb628, Func Offset: 0x48
	// Line 285, Address: 0x2cb630, Func Offset: 0x50
	// Line 288, Address: 0x2cb638, Func Offset: 0x58
	// Line 290, Address: 0x2cb63c, Func Offset: 0x5c
	// Line 291, Address: 0x2cb668, Func Offset: 0x88
	// Line 292, Address: 0x2cb66c, Func Offset: 0x8c
	// Func End, Address: 0x2cb690, Func Offset: 0xb0
}

// 
// Start address: 0x2cb690
void pad_request_ActAlign(_anon0* p)
{
	// Line 297, Address: 0x2cb690, Func Offset: 0
	// Line 299, Address: 0x2cb698, Func Offset: 0x8
	// Func End, Address: 0x2cb6a0, Func Offset: 0x10
}

// 
// Start address: 0x2cb6a0
int pad_SetMode(_anon0* p)
{
	int ret;
	int offset;
	int req_id;
	int req_lock;
	int port;
	int slot;
	int error;
	// Line 302, Address: 0x2cb6a0, Func Offset: 0
	// Line 305, Address: 0x2cb6c0, Func Offset: 0x20
	// Line 306, Address: 0x2cb6c4, Func Offset: 0x24
	// Line 307, Address: 0x2cb6c8, Func Offset: 0x28
	// Line 308, Address: 0x2cb6cc, Func Offset: 0x2c
	// Line 310, Address: 0x2cb6d0, Func Offset: 0x30
	// Line 313, Address: 0x2cb6e0, Func Offset: 0x40
	// Line 314, Address: 0x2cb6e8, Func Offset: 0x48
	// Line 317, Address: 0x2cb6f0, Func Offset: 0x50
	// Line 318, Address: 0x2cb6f8, Func Offset: 0x58
	// Line 319, Address: 0x2cb704, Func Offset: 0x64
	// Line 322, Address: 0x2cb708, Func Offset: 0x68
	// Line 324, Address: 0x2cb710, Func Offset: 0x70
	// Line 325, Address: 0x2cb720, Func Offset: 0x80
	// Line 328, Address: 0x2cb73c, Func Offset: 0x9c
	// Line 330, Address: 0x2cb748, Func Offset: 0xa8
	// Line 343, Address: 0x2cb74c, Func Offset: 0xac
	// Line 346, Address: 0x2cb758, Func Offset: 0xb8
	// Line 350, Address: 0x2cb760, Func Offset: 0xc0
	// Line 351, Address: 0x2cb76c, Func Offset: 0xcc
	// Line 354, Address: 0x2cb770, Func Offset: 0xd0
	// Line 356, Address: 0x2cb774, Func Offset: 0xd4
	// Line 362, Address: 0x2cb778, Func Offset: 0xd8
	// Line 363, Address: 0x2cb78c, Func Offset: 0xec
	// Line 369, Address: 0x2cb790, Func Offset: 0xf0
	// Line 370, Address: 0x2cb798, Func Offset: 0xf8
	// Line 371, Address: 0x2cb7a4, Func Offset: 0x104
	// Line 374, Address: 0x2cb7a8, Func Offset: 0x108
	// Line 375, Address: 0x2cb7b4, Func Offset: 0x114
	// Line 377, Address: 0x2cb7bc, Func Offset: 0x11c
	// Line 378, Address: 0x2cb7c0, Func Offset: 0x120
	// Line 379, Address: 0x2cb7c4, Func Offset: 0x124
	// Func End, Address: 0x2cb7e4, Func Offset: 0x144
}

// 
// Start address: 0x2cb7f0
int is_act_align(_anon0* p)
{
	int ret;
	// Line 385, Address: 0x2cb7f0, Func Offset: 0
	// Line 386, Address: 0x2cb800, Func Offset: 0x10
	// Line 387, Address: 0x2cb804, Func Offset: 0x14
	// Line 390, Address: 0x2cb808, Func Offset: 0x18
	// Func End, Address: 0x2cb810, Func Offset: 0x20
}

// 
// Start address: 0x2cb810
int search_act(_anon4* info_act, int kind)
{
	int ret;
	int i;
	int type;
	int sub;
	int act_sub;
	// Line 404, Address: 0x2cb810, Func Offset: 0
	// Line 405, Address: 0x2cb820, Func Offset: 0x10
	// Line 404, Address: 0x2cb82c, Func Offset: 0x1c
	// Line 405, Address: 0x2cb830, Func Offset: 0x20
	// Line 408, Address: 0x2cb834, Func Offset: 0x24
	// Line 410, Address: 0x2cb83c, Func Offset: 0x2c
	// Line 413, Address: 0x2cb840, Func Offset: 0x30
	// Line 415, Address: 0x2cb854, Func Offset: 0x44
	// Line 417, Address: 0x2cb85c, Func Offset: 0x4c
	// Line 420, Address: 0x2cb870, Func Offset: 0x60
	// Func End, Address: 0x2cb878, Func Offset: 0x68
}

// 
// Start address: 0x2cb880
void pad_zeroActuate(int port, int slot)
{
	unsigned char actdata[6];
	// Line 425, Address: 0x2cb880, Func Offset: 0
	// Func End, Address: 0x2cb88c, Func Offset: 0xc
}

// 
// Start address: 0x2cb890
void pad_actu(_anon0* p, int read_ok)
{
	int port;
	int slot;
	int i;
	int differ;
	_anon13 actuate_data;
	int number;
	int offset;
	int timer;
	unsigned long level;
	long length;
	// Line 429, Address: 0x2cb890, Func Offset: 0
	// Line 435, Address: 0x2cb8a8, Func Offset: 0x18
	// Line 429, Address: 0x2cb8ac, Func Offset: 0x1c
	// Line 431, Address: 0x2cb8c4, Func Offset: 0x34
	// Line 432, Address: 0x2cb8c8, Func Offset: 0x38
	// Line 435, Address: 0x2cb8cc, Func Offset: 0x3c
	// Line 446, Address: 0x2cb8e8, Func Offset: 0x58
	// Line 448, Address: 0x2cb8f0, Func Offset: 0x60
	// Line 447, Address: 0x2cb8f4, Func Offset: 0x64
	// Line 448, Address: 0x2cb8f8, Func Offset: 0x68
	// Line 447, Address: 0x2cb8fc, Func Offset: 0x6c
	// Line 448, Address: 0x2cb900, Func Offset: 0x70
	// Line 450, Address: 0x2cb90c, Func Offset: 0x7c
	// Line 451, Address: 0x2cb918, Func Offset: 0x88
	// Line 458, Address: 0x2cb91c, Func Offset: 0x8c
	// Line 453, Address: 0x2cb920, Func Offset: 0x90
	// Line 454, Address: 0x2cb924, Func Offset: 0x94
	// Line 458, Address: 0x2cb928, Func Offset: 0x98
	// Line 461, Address: 0x2cb930, Func Offset: 0xa0
	// Line 462, Address: 0x2cb938, Func Offset: 0xa8
	// Line 463, Address: 0x2cb93c, Func Offset: 0xac
	// Line 466, Address: 0x2cb940, Func Offset: 0xb0
	// Line 467, Address: 0x2cb950, Func Offset: 0xc0
	// Line 474, Address: 0x2cb958, Func Offset: 0xc8
	// Line 475, Address: 0x2cb964, Func Offset: 0xd4
	// Line 478, Address: 0x2cb980, Func Offset: 0xf0
	// Line 479, Address: 0x2cb988, Func Offset: 0xf8
	// Line 480, Address: 0x2cb98c, Func Offset: 0xfc
	// Line 482, Address: 0x2cb990, Func Offset: 0x100
	// Line 489, Address: 0x2cb998, Func Offset: 0x108
	// Line 491, Address: 0x2cb9ac, Func Offset: 0x11c
	// Line 504, Address: 0x2cb9b0, Func Offset: 0x120
	// Line 509, Address: 0x2cb9c8, Func Offset: 0x138
	// Line 511, Address: 0x2cb9d0, Func Offset: 0x140
	// Line 509, Address: 0x2cb9d4, Func Offset: 0x144
	// Line 510, Address: 0x2cb9d8, Func Offset: 0x148
	// Line 509, Address: 0x2cb9dc, Func Offset: 0x14c
	// Line 511, Address: 0x2cb9e0, Func Offset: 0x150
	// Line 512, Address: 0x2cb9e8, Func Offset: 0x158
	// Line 511, Address: 0x2cb9f0, Func Offset: 0x160
	// Line 512, Address: 0x2cb9f4, Func Offset: 0x164
	// Line 515, Address: 0x2cb9fc, Func Offset: 0x16c
	// Line 516, Address: 0x2cba00, Func Offset: 0x170
	// Line 517, Address: 0x2cba10, Func Offset: 0x180
	// Line 519, Address: 0x2cba20, Func Offset: 0x190
	// Line 521, Address: 0x2cba28, Func Offset: 0x198
	// Line 519, Address: 0x2cba30, Func Offset: 0x1a0
	// Line 521, Address: 0x2cba34, Func Offset: 0x1a4
	// Line 524, Address: 0x2cba40, Func Offset: 0x1b0
	// Line 526, Address: 0x2cba5c, Func Offset: 0x1cc
	// Line 530, Address: 0x2cba6c, Func Offset: 0x1dc
	// Line 531, Address: 0x2cba78, Func Offset: 0x1e8
	// Line 532, Address: 0x2cba7c, Func Offset: 0x1ec
	// Line 531, Address: 0x2cba84, Func Offset: 0x1f4
	// Line 532, Address: 0x2cba8c, Func Offset: 0x1fc
	// Line 533, Address: 0x2cba94, Func Offset: 0x204
	// Line 536, Address: 0x2cba98, Func Offset: 0x208
	// Func End, Address: 0x2cbac8, Func Offset: 0x238
}

// 
// Start address: 0x2cbad0
int pad_ActAlign(_anon0* p)
{
	int port;
	int slot;
	int i;
	int act_number;
	int offset;
	int length;
	int ret;
	unsigned char align_data[6];
	// Line 539, Address: 0x2cbad0, Func Offset: 0
	// Line 540, Address: 0x2cbaec, Func Offset: 0x1c
	// Line 541, Address: 0x2cbaf0, Func Offset: 0x20
	// Line 551, Address: 0x2cbaf4, Func Offset: 0x24
	// Line 560, Address: 0x2cbb04, Func Offset: 0x34
	// Line 563, Address: 0x2cbb08, Func Offset: 0x38
	// Line 560, Address: 0x2cbb0c, Func Offset: 0x3c
	// Line 564, Address: 0x2cbb10, Func Offset: 0x40
	// Line 560, Address: 0x2cbb14, Func Offset: 0x44
	// Line 567, Address: 0x2cbb30, Func Offset: 0x60
	// Line 570, Address: 0x2cbb34, Func Offset: 0x64
	// Line 572, Address: 0x2cbb40, Func Offset: 0x70
	// Line 576, Address: 0x2cbb4c, Func Offset: 0x7c
	// Line 577, Address: 0x2cbb58, Func Offset: 0x88
	// Line 581, Address: 0x2cbb68, Func Offset: 0x98
	// Line 588, Address: 0x2cbb78, Func Offset: 0xa8
	// Line 589, Address: 0x2cbb7c, Func Offset: 0xac
	// Line 590, Address: 0x2cbb80, Func Offset: 0xb0
	// Line 594, Address: 0x2cbb84, Func Offset: 0xb4
	// Line 597, Address: 0x2cbb90, Func Offset: 0xc0
	// Line 599, Address: 0x2cbb94, Func Offset: 0xc4
	// Line 597, Address: 0x2cbba0, Func Offset: 0xd0
	// Line 599, Address: 0x2cbba4, Func Offset: 0xd4
	// Line 602, Address: 0x2cbbac, Func Offset: 0xdc
	// Line 603, Address: 0x2cbbb8, Func Offset: 0xe8
	// Line 604, Address: 0x2cbbc0, Func Offset: 0xf0
	// Line 608, Address: 0x2cbbd8, Func Offset: 0x108
	// Line 609, Address: 0x2cbbec, Func Offset: 0x11c
	// Line 610, Address: 0x2cbbfc, Func Offset: 0x12c
	// Line 612, Address: 0x2cbc08, Func Offset: 0x138
	// Line 627, Address: 0x2cbc10, Func Offset: 0x140
	// Line 629, Address: 0x2cbc1c, Func Offset: 0x14c
	// Line 630, Address: 0x2cbc20, Func Offset: 0x150
	// Line 631, Address: 0x2cbc2c, Func Offset: 0x15c
	// Line 637, Address: 0x2cbc38, Func Offset: 0x168
	// Line 638, Address: 0x2cbc50, Func Offset: 0x180
	// Func End, Address: 0x2cbc6c, Func Offset: 0x19c
}

// 
// Start address: 0x2cbc70
int request_press_mode(_anon0* p)
{
	int ret;
	// Line 644, Address: 0x2cbc70, Func Offset: 0
	// Line 645, Address: 0x2cbc80, Func Offset: 0x10
	// Line 646, Address: 0x2cbc84, Func Offset: 0x14
	// Line 649, Address: 0x2cbc88, Func Offset: 0x18
	// Func End, Address: 0x2cbc90, Func Offset: 0x20
}

// 
// Start address: 0x2cbc90
int enter_press_mode(_anon0* p)
{
	int ret;
	// Line 653, Address: 0x2cbc90, Func Offset: 0
	// Line 655, Address: 0x2cbcac, Func Offset: 0x1c
	// Line 656, Address: 0x2cbcb8, Func Offset: 0x28
	// Line 657, Address: 0x2cbcc0, Func Offset: 0x30
	// Line 658, Address: 0x2cbcc4, Func Offset: 0x34
	// Line 660, Address: 0x2cbcc8, Func Offset: 0x38
	// Func End, Address: 0x2cbcd0, Func Offset: 0x40
}

// 
// Start address: 0x2cbcd0
int is_press_mode(int extended_id)
{
	int ret;
	// Line 664, Address: 0x2cbcd0, Func Offset: 0
	// Line 665, Address: 0x2cbcdc, Func Offset: 0xc
	// Line 668, Address: 0x2cbce0, Func Offset: 0x10
	// Func End, Address: 0x2cbce8, Func Offset: 0x18
}

// 
// Start address: 0x2cbcf0
int request_force_press_mode(_anon0* p)
{
	int ret;
	// Line 672, Address: 0x2cbcf0, Func Offset: 0
	// Line 674, Address: 0x2cbd0c, Func Offset: 0x1c
	// Line 675, Address: 0x2cbd18, Func Offset: 0x28
	// Line 676, Address: 0x2cbd20, Func Offset: 0x30
	// Line 677, Address: 0x2cbd24, Func Offset: 0x34
	// Line 679, Address: 0x2cbd28, Func Offset: 0x38
	// Func End, Address: 0x2cbd30, Func Offset: 0x40
}

// 
// Start address: 0x2cbd30
void clear_set_press_flag(_anon0* p)
{
	unsigned int ctrl;
	// Line 682, Address: 0x2cbd30, Func Offset: 0
	// Line 684, Address: 0x2cbd38, Func Offset: 0x8
	// Line 685, Address: 0x2cbd3c, Func Offset: 0xc
	// Func End, Address: 0x2cbd44, Func Offset: 0x14
}

// 
// Start address: 0x2cbd50
int pad_PressMode(_anon0* p)
{
	int ret;
	int port;
	int slot;
	int info_press;
	int force_mode;
	int enter_mode;
	int now_press_mode;
	int(*func)(int, int);
	unsigned int ctrl;
	// Line 688, Address: 0x2cbd50, Func Offset: 0
	// Line 689, Address: 0x2cbd68, Func Offset: 0x18
	// Line 688, Address: 0x2cbd6c, Func Offset: 0x1c
	// Line 691, Address: 0x2cbd70, Func Offset: 0x20
	// Line 690, Address: 0x2cbd74, Func Offset: 0x24
	// Line 702, Address: 0x2cbd78, Func Offset: 0x28
	// Line 708, Address: 0x2cbd84, Func Offset: 0x34
	// Line 702, Address: 0x2cbd88, Func Offset: 0x38
	// Line 708, Address: 0x2cbd90, Func Offset: 0x40
	// Line 709, Address: 0x2cbd94, Func Offset: 0x44
	// Line 710, Address: 0x2cbd9c, Func Offset: 0x4c
	// Line 712, Address: 0x2cbda0, Func Offset: 0x50
	// Line 718, Address: 0x2cbda4, Func Offset: 0x54
	// Line 720, Address: 0x2cbdb4, Func Offset: 0x64
	// Line 721, Address: 0x2cbdbc, Func Offset: 0x6c
	// Line 727, Address: 0x2cbdc8, Func Offset: 0x78
	// Line 729, Address: 0x2cbdd0, Func Offset: 0x80
	// Line 736, Address: 0x2cbdd8, Func Offset: 0x88
	// Line 738, Address: 0x2cbde0, Func Offset: 0x90
	// Line 739, Address: 0x2cbdec, Func Offset: 0x9c
	// Line 741, Address: 0x2cbdf8, Func Offset: 0xa8
	// Line 742, Address: 0x2cbe00, Func Offset: 0xb0
	// Line 743, Address: 0x2cbe04, Func Offset: 0xb4
	// Line 749, Address: 0x2cbe08, Func Offset: 0xb8
	// Line 750, Address: 0x2cbe10, Func Offset: 0xc0
	// Line 752, Address: 0x2cbe30, Func Offset: 0xe0
	// Line 754, Address: 0x2cbe38, Func Offset: 0xe8
	// Line 755, Address: 0x2cbe48, Func Offset: 0xf8
	// Line 758, Address: 0x2cbe4c, Func Offset: 0xfc
	// Line 762, Address: 0x2cbe50, Func Offset: 0x100
	// Line 763, Address: 0x2cbe58, Func Offset: 0x108
	// Line 766, Address: 0x2cbe60, Func Offset: 0x110
	// Line 767, Address: 0x2cbe64, Func Offset: 0x114
	// Func End, Address: 0x2cbe80, Func Offset: 0x130
}

// 
// Start address: 0x2cbe80
int get_analog(_anon0* p)
{
	// Line 771, Address: 0x2cbe80, Func Offset: 0
	// Line 772, Address: 0x2cbe84, Func Offset: 0x4
	// Func End, Address: 0x2cbe8c, Func Offset: 0xc
}

// 
// Start address: 0x2cbe90
int is_analog(int id)
{
	// Line 788, Address: 0x2cbe90, Func Offset: 0
	// Line 790, Address: 0x2cbe98, Func Offset: 0x8
	// Func End, Address: 0x2cbea0, Func Offset: 0x10
}

// 
// Start address: 0x2cbea0
int adjust_sub(int value, int range, int min, int max)
{
	// Line 794, Address: 0x2cbea0, Func Offset: 0
	// Line 796, Address: 0x2cbeac, Func Offset: 0xc
	// Line 798, Address: 0x2cbeb8, Func Offset: 0x18
	// Line 799, Address: 0x2cbed0, Func Offset: 0x30
	// Line 800, Address: 0x2cbedc, Func Offset: 0x3c
	// Line 804, Address: 0x2cbee0, Func Offset: 0x40
	// Func End, Address: 0x2cbee8, Func Offset: 0x48
}

// 
// Start address: 0x2cbef0
unsigned char analog_adjust_edge(int source, int min, int max)
{
	int value;
	// Line 806, Address: 0x2cbef0, Func Offset: 0
	// Line 809, Address: 0x2cbf00, Func Offset: 0x10
	// Line 811, Address: 0x2cbf0c, Func Offset: 0x1c
	// Line 810, Address: 0x2cbf10, Func Offset: 0x20
	// Line 811, Address: 0x2cbf14, Func Offset: 0x24
	// Func End, Address: 0x2cbf1c, Func Offset: 0x2c
}

// 
// Start address: 0x2cbf20
unsigned char analog_adjust_center(int source, int min, int max, int center)
{
	int adj_center;
	// Line 813, Address: 0x2cbf24, Func Offset: 0x4
	// Line 821, Address: 0x2cbf28, Func Offset: 0x8
	// Line 813, Address: 0x2cbf2c, Func Offset: 0xc
	// Line 821, Address: 0x2cbf34, Func Offset: 0x14
	// Line 823, Address: 0x2cbf4c, Func Offset: 0x2c
	// Line 827, Address: 0x2cbf5c, Func Offset: 0x3c
	// Line 829, Address: 0x2cbf60, Func Offset: 0x40
	// Line 831, Address: 0x2cbf88, Func Offset: 0x68
	// Line 833, Address: 0x2cbf98, Func Offset: 0x78
	// Line 832, Address: 0x2cbf9c, Func Offset: 0x7c
	// Line 833, Address: 0x2cbfa0, Func Offset: 0x80
	// Func End, Address: 0x2cbfa8, Func Offset: 0x88
}

// 
// Start address: 0x2cbfb0
unsigned char analog_adjust(int source, int kind, int min, int max, int center)
{
	unsigned char ret;
	// Line 835, Address: 0x2cbfb0, Func Offset: 0
	// Line 838, Address: 0x2cbfb4, Func Offset: 0x4
	// Line 839, Address: 0x2cbfcc, Func Offset: 0x1c
	// Line 840, Address: 0x2cbfd8, Func Offset: 0x28
	// Line 841, Address: 0x2cbff0, Func Offset: 0x40
	// Line 844, Address: 0x2cc000, Func Offset: 0x50
	// Func End, Address: 0x2cc00c, Func Offset: 0x5c
}

// 
// Start address: 0x2cc010
int is_myrule(_anon0* p)
{
	// Line 848, Address: 0x2cc010, Func Offset: 0
	// Line 849, Address: 0x2cc018, Func Offset: 0x8
	// Func End, Address: 0x2cc020, Func Offset: 0x10
}

// 
// Start address: 0x2cc020
void disable_myrule(_anon0* p)
{
	// Line 852, Address: 0x2cc020, Func Offset: 0
	// Line 853, Address: 0x2cc030, Func Offset: 0x10
	// Func End, Address: 0x2cc038, Func Offset: 0x18
}

// 
// Start address: 0x2cc040
void pad_button_set(_anon0* p, int joy, int trg, int rpd)
{
	// Line 857, Address: 0x2cc040, Func Offset: 0
	// Line 858, Address: 0x2cc044, Func Offset: 0x4
	// Line 860, Address: 0x2cc048, Func Offset: 0x8
	// Func End, Address: 0x2cc050, Func Offset: 0x10
}

// 
// Start address: 0x2cc050
void pad_press_set(_anon0* p, unsigned char* src, int n_dat)
{
	unsigned char* dest;
	// Line 869, Address: 0x2cc050, Func Offset: 0
	// Line 870, Address: 0x2cc058, Func Offset: 0x8
	// Line 873, Address: 0x2cc05c, Func Offset: 0xc
	// Line 870, Address: 0x2cc060, Func Offset: 0x10
	// Line 872, Address: 0x2cc064, Func Offset: 0x14
	// Line 871, Address: 0x2cc068, Func Offset: 0x18
	// Line 873, Address: 0x2cc06c, Func Offset: 0x1c
	// Line 875, Address: 0x2cc078, Func Offset: 0x28
	// Func End, Address: 0x2cc080, Func Offset: 0x30
}

// 
// Start address: 0x2cc080
int pad_read(_anon0* p, int len)
{
	int ret;
	unsigned char* rc;
	int pad_id;
	int pad_eid;
	int joy;
	int trg;
	int rpd;
	unsigned int analog_ch;
	unsigned int analog_ca;
	unsigned char* press_ptr;
	int bit;
	int cnt;
	int dly;
	int i;
	_anon1* rs;
	int i;
	unsigned char source;
	unsigned char converted;
	// Line 880, Address: 0x2cc080, Func Offset: 0
	// Line 891, Address: 0x2cc084, Func Offset: 0x4
	// Line 880, Address: 0x2cc088, Func Offset: 0x8
	// Line 888, Address: 0x2cc08c, Func Offset: 0xc
	// Line 880, Address: 0x2cc090, Func Offset: 0x10
	// Line 889, Address: 0x2cc094, Func Offset: 0x14
	// Line 880, Address: 0x2cc098, Func Offset: 0x18
	// Line 881, Address: 0x2cc0a4, Func Offset: 0x24
	// Line 880, Address: 0x2cc0a8, Func Offset: 0x28
	// Line 882, Address: 0x2cc0ac, Func Offset: 0x2c
	// Line 880, Address: 0x2cc0b0, Func Offset: 0x30
	// Line 883, Address: 0x2cc0b4, Func Offset: 0x34
	// Line 880, Address: 0x2cc0b8, Func Offset: 0x38
	// Line 890, Address: 0x2cc0bc, Func Offset: 0x3c
	// Line 880, Address: 0x2cc0c0, Func Offset: 0x40
	// Line 885, Address: 0x2cc0c4, Func Offset: 0x44
	// Line 887, Address: 0x2cc0c8, Func Offset: 0x48
	// Line 897, Address: 0x2cc0cc, Func Offset: 0x4c
	// Line 902, Address: 0x2cc0e0, Func Offset: 0x60
	// Line 908, Address: 0x2cc0e4, Func Offset: 0x64
	// Line 903, Address: 0x2cc0ec, Func Offset: 0x6c
	// Line 908, Address: 0x2cc0f4, Func Offset: 0x74
	// Line 916, Address: 0x2cc104, Func Offset: 0x84
	// Line 922, Address: 0x2cc10c, Func Offset: 0x8c
	// Line 916, Address: 0x2cc110, Func Offset: 0x90
	// Line 922, Address: 0x2cc11c, Func Offset: 0x9c
	// Line 929, Address: 0x2cc120, Func Offset: 0xa0
	// Line 934, Address: 0x2cc128, Func Offset: 0xa8
	// Line 935, Address: 0x2cc130, Func Offset: 0xb0
	// Line 937, Address: 0x2cc134, Func Offset: 0xb4
	// Line 938, Address: 0x2cc13c, Func Offset: 0xbc
	// Line 939, Address: 0x2cc148, Func Offset: 0xc8
	// Line 941, Address: 0x2cc150, Func Offset: 0xd0
	// Line 942, Address: 0x2cc154, Func Offset: 0xd4
	// Line 943, Address: 0x2cc164, Func Offset: 0xe4
	// Line 945, Address: 0x2cc168, Func Offset: 0xe8
	// Line 947, Address: 0x2cc170, Func Offset: 0xf0
	// Line 949, Address: 0x2cc178, Func Offset: 0xf8
	// Line 950, Address: 0x2cc17c, Func Offset: 0xfc
	// Line 951, Address: 0x2cc180, Func Offset: 0x100
	// Line 953, Address: 0x2cc184, Func Offset: 0x104
	// Line 954, Address: 0x2cc188, Func Offset: 0x108
	// Line 956, Address: 0x2cc18c, Func Offset: 0x10c
	// Line 963, Address: 0x2cc1a0, Func Offset: 0x120
	// Line 965, Address: 0x2cc1c4, Func Offset: 0x144
	// Line 966, Address: 0x2cc1c8, Func Offset: 0x148
	// Line 975, Address: 0x2cc1d0, Func Offset: 0x150
	// Line 966, Address: 0x2cc1d4, Func Offset: 0x154
	// Line 975, Address: 0x2cc1d8, Func Offset: 0x158
	// Line 966, Address: 0x2cc1dc, Func Offset: 0x15c
	// Line 975, Address: 0x2cc1e0, Func Offset: 0x160
	// Line 980, Address: 0x2cc1f4, Func Offset: 0x174
	// Line 979, Address: 0x2cc1f8, Func Offset: 0x178
	// Line 978, Address: 0x2cc1fc, Func Offset: 0x17c
	// Line 979, Address: 0x2cc200, Func Offset: 0x180
	// Line 978, Address: 0x2cc204, Func Offset: 0x184
	// Line 980, Address: 0x2cc208, Func Offset: 0x188
	// Line 978, Address: 0x2cc20c, Func Offset: 0x18c
	// Line 980, Address: 0x2cc210, Func Offset: 0x190
	// Line 981, Address: 0x2cc218, Func Offset: 0x198
	// Line 983, Address: 0x2cc220, Func Offset: 0x1a0
	// Line 984, Address: 0x2cc224, Func Offset: 0x1a4
	// Line 991, Address: 0x2cc228, Func Offset: 0x1a8
	// Line 992, Address: 0x2cc238, Func Offset: 0x1b8
	// Line 993, Address: 0x2cc23c, Func Offset: 0x1bc
	// Line 1003, Address: 0x2cc240, Func Offset: 0x1c0
	// Line 1005, Address: 0x2cc250, Func Offset: 0x1d0
	// Line 1009, Address: 0x2cc258, Func Offset: 0x1d8
	// Line 1010, Address: 0x2cc268, Func Offset: 0x1e8
	// Line 1011, Address: 0x2cc26c, Func Offset: 0x1ec
	// Line 1014, Address: 0x2cc270, Func Offset: 0x1f0
	// Line 1027, Address: 0x2cc278, Func Offset: 0x1f8
	// Line 1028, Address: 0x2cc27c, Func Offset: 0x1fc
	// Line 1022, Address: 0x2cc280, Func Offset: 0x200
	// Line 1023, Address: 0x2cc284, Func Offset: 0x204
	// Line 1024, Address: 0x2cc288, Func Offset: 0x208
	// Line 1025, Address: 0x2cc28c, Func Offset: 0x20c
	// Line 1026, Address: 0x2cc290, Func Offset: 0x210
	// Line 1027, Address: 0x2cc294, Func Offset: 0x214
	// Line 1028, Address: 0x2cc298, Func Offset: 0x218
	// Line 1033, Address: 0x2cc2a0, Func Offset: 0x220
	// Line 1034, Address: 0x2cc2b4, Func Offset: 0x234
	// Line 1035, Address: 0x2cc2c0, Func Offset: 0x240
	// Line 1045, Address: 0x2cc2c4, Func Offset: 0x244
	// Line 1036, Address: 0x2cc2c8, Func Offset: 0x248
	// Line 1037, Address: 0x2cc2cc, Func Offset: 0x24c
	// Line 1046, Address: 0x2cc2d0, Func Offset: 0x250
	// Func End, Address: 0x2cc2f8, Func Offset: 0x278
}

// 
// Start address: 0x2cc300
void pad_stab_sub(_anon0* p, int stable)
{
	int port;
	int slot;
	int step;
	int read_ok;
	int len;
	int mode_changed;
	int(*func)(_anon0*);
	int receive_id;
	unsigned int ctrl;
	int add_step;
	int next_step;
	int timer;
	// Line 1049, Address: 0x2cc300, Func Offset: 0
	// Line 1050, Address: 0x2cc328, Func Offset: 0x28
	// Line 1051, Address: 0x2cc32c, Func Offset: 0x2c
	// Line 1052, Address: 0x2cc330, Func Offset: 0x30
	// Line 1058, Address: 0x2cc334, Func Offset: 0x34
	// Line 1060, Address: 0x2cc340, Func Offset: 0x40
	// Line 1061, Address: 0x2cc348, Func Offset: 0x48
	// Line 1062, Address: 0x2cc34c, Func Offset: 0x4c
	// Line 1063, Address: 0x2cc360, Func Offset: 0x60
	// Line 1064, Address: 0x2cc364, Func Offset: 0x64
	// Line 1066, Address: 0x2cc368, Func Offset: 0x68
	// Line 1067, Address: 0x2cc36c, Func Offset: 0x6c
	// Line 1070, Address: 0x2cc370, Func Offset: 0x70
	// Line 1075, Address: 0x2cc398, Func Offset: 0x98
	// Line 1077, Address: 0x2cc39c, Func Offset: 0x9c
	// Line 1080, Address: 0x2cc3a8, Func Offset: 0xa8
	// Line 1082, Address: 0x2cc3b4, Func Offset: 0xb4
	// Line 1084, Address: 0x2cc3bc, Func Offset: 0xbc
	// Line 1087, Address: 0x2cc3c4, Func Offset: 0xc4
	// Line 1091, Address: 0x2cc3c8, Func Offset: 0xc8
	// Line 1092, Address: 0x2cc3d0, Func Offset: 0xd0
	// Line 1093, Address: 0x2cc3d8, Func Offset: 0xd8
	// Line 1094, Address: 0x2cc3dc, Func Offset: 0xdc
	// Line 1095, Address: 0x2cc3e0, Func Offset: 0xe0
	// Line 1106, Address: 0x2cc3e4, Func Offset: 0xe4
	// Line 1108, Address: 0x2cc3e8, Func Offset: 0xe8
	// Line 1111, Address: 0x2cc3ec, Func Offset: 0xec
	// Line 1112, Address: 0x2cc3f0, Func Offset: 0xf0
	// Line 1113, Address: 0x2cc3f4, Func Offset: 0xf4
	// Line 1118, Address: 0x2cc3fc, Func Offset: 0xfc
	// Line 1119, Address: 0x2cc400, Func Offset: 0x100
	// Line 1120, Address: 0x2cc404, Func Offset: 0x104
	// Line 1125, Address: 0x2cc40c, Func Offset: 0x10c
	// Line 1126, Address: 0x2cc410, Func Offset: 0x110
	// Line 1136, Address: 0x2cc418, Func Offset: 0x118
	// Line 1138, Address: 0x2cc438, Func Offset: 0x138
	// Line 1139, Address: 0x2cc440, Func Offset: 0x140
	// Line 1142, Address: 0x2cc448, Func Offset: 0x148
	// Line 1143, Address: 0x2cc450, Func Offset: 0x150
	// Line 1144, Address: 0x2cc454, Func Offset: 0x154
	// Line 1147, Address: 0x2cc458, Func Offset: 0x158
	// Line 1152, Address: 0x2cc460, Func Offset: 0x160
	// Line 1154, Address: 0x2cc464, Func Offset: 0x164
	// Line 1155, Address: 0x2cc498, Func Offset: 0x198
	// Line 1157, Address: 0x2cc4a0, Func Offset: 0x1a0
	// Line 1158, Address: 0x2cc4a8, Func Offset: 0x1a8
	// Line 1159, Address: 0x2cc4ac, Func Offset: 0x1ac
	// Line 1163, Address: 0x2cc4b0, Func Offset: 0x1b0
	// Line 1166, Address: 0x2cc4b8, Func Offset: 0x1b8
	// Line 1167, Address: 0x2cc4c0, Func Offset: 0x1c0
	// Line 1169, Address: 0x2cc4cc, Func Offset: 0x1cc
	// Line 1170, Address: 0x2cc500, Func Offset: 0x200
	// Line 1172, Address: 0x2cc508, Func Offset: 0x208
	// Line 1174, Address: 0x2cc510, Func Offset: 0x210
	// Line 1179, Address: 0x2cc520, Func Offset: 0x220
	// Line 1180, Address: 0x2cc524, Func Offset: 0x224
	// Func End, Address: 0x2cc548, Func Offset: 0x248
}

// 
// Start address: 0x2cc550
void init_pad_status(_anon0* p)
{
	// Line 1184, Address: 0x2cc550, Func Offset: 0
	// Line 1185, Address: 0x2cc554, Func Offset: 0x4
	// Func End, Address: 0x2cc55c, Func Offset: 0xc
}

// 
// Start address: 0x2cc560
void pad_work_init0(_anon0* p)
{
	// Line 1188, Address: 0x2cc560, Func Offset: 0
	// Line 1191, Address: 0x2cc564, Func Offset: 0x4
	// Line 1188, Address: 0x2cc568, Func Offset: 0x8
	// Line 1191, Address: 0x2cc570, Func Offset: 0x10
	// Line 1193, Address: 0x2cc578, Func Offset: 0x18
	// Line 1194, Address: 0x2cc57c, Func Offset: 0x1c
	// Line 1196, Address: 0x2cc580, Func Offset: 0x20
	// Line 1203, Address: 0x2cc584, Func Offset: 0x24
	// Line 1193, Address: 0x2cc588, Func Offset: 0x28
	// Line 1194, Address: 0x2cc590, Func Offset: 0x30
	// Line 1196, Address: 0x2cc594, Func Offset: 0x34
	// Line 1197, Address: 0x2cc598, Func Offset: 0x38
	// Line 1198, Address: 0x2cc59c, Func Offset: 0x3c
	// Line 1199, Address: 0x2cc5a0, Func Offset: 0x40
	// Line 1200, Address: 0x2cc5a4, Func Offset: 0x44
	// Line 1203, Address: 0x2cc5a8, Func Offset: 0x48
	// Line 1206, Address: 0x2cc5b0, Func Offset: 0x50
	// Line 1208, Address: 0x2cc5c8, Func Offset: 0x68
	// Func End, Address: 0x2cc5d8, Func Offset: 0x78
}

// 
// Start address: 0x2cc5e0
int pad_init(int mode, int n_pad, _anon0* p, int assign_mode)
{
	int n_assign;
	_anon0* pad;
	int i;
	// Line 1211, Address: 0x2cc5e0, Func Offset: 0
	// Line 1215, Address: 0x2cc604, Func Offset: 0x24
	// Line 1216, Address: 0x2cc61c, Func Offset: 0x3c
	// Line 1218, Address: 0x2cc630, Func Offset: 0x50
	// Line 1219, Address: 0x2cc648, Func Offset: 0x68
	// Line 1220, Address: 0x2cc650, Func Offset: 0x70
	// Line 1222, Address: 0x2cc668, Func Offset: 0x88
	// Line 1223, Address: 0x2cc670, Func Offset: 0x90
	// Line 1225, Address: 0x2cc678, Func Offset: 0x98
	// Line 1226, Address: 0x2cc6a8, Func Offset: 0xc8
	// Line 1227, Address: 0x2cc6ac, Func Offset: 0xcc
	// Line 1228, Address: 0x2cc6b0, Func Offset: 0xd0
	// Line 1229, Address: 0x2cc6b8, Func Offset: 0xd8
	// Line 1231, Address: 0x2cc6bc, Func Offset: 0xdc
	// Line 1234, Address: 0x2cc6c4, Func Offset: 0xe4
	// Line 1232, Address: 0x2cc6c8, Func Offset: 0xe8
	// Line 1234, Address: 0x2cc6cc, Func Offset: 0xec
	// Line 1235, Address: 0x2cc6d8, Func Offset: 0xf8
	// Line 1237, Address: 0x2cc6e0, Func Offset: 0x100
	// Line 1238, Address: 0x2cc6f4, Func Offset: 0x114
	// Line 1240, Address: 0x2cc6f8, Func Offset: 0x118
	// Line 1243, Address: 0x2cc708, Func Offset: 0x128
	// Func End, Address: 0x2cc728, Func Offset: 0x148
}

// 
// Start address: 0x2cc730
void Pad_Read(_anon0* p)
{
	int step;
	int(*func)(_anon0*)[3];
	// Line 1246, Address: 0x2cc730, Func Offset: 0
	// Line 1256, Address: 0x2cc734, Func Offset: 0x4
	// Line 1246, Address: 0x2cc738, Func Offset: 0x8
	// Line 1256, Address: 0x2cc73c, Func Offset: 0xc
	// Line 1246, Address: 0x2cc740, Func Offset: 0x10
	// Line 1257, Address: 0x2cc744, Func Offset: 0x14
	// Line 1246, Address: 0x2cc748, Func Offset: 0x18
	// Line 1257, Address: 0x2cc74c, Func Offset: 0x1c
	// Line 1252, Address: 0x2cc750, Func Offset: 0x20
	// Line 1256, Address: 0x2cc754, Func Offset: 0x24
	// Line 1257, Address: 0x2cc758, Func Offset: 0x28
	// Line 1256, Address: 0x2cc75c, Func Offset: 0x2c
	// Line 1257, Address: 0x2cc760, Func Offset: 0x30
	// Line 1256, Address: 0x2cc764, Func Offset: 0x34
	// Line 1257, Address: 0x2cc768, Func Offset: 0x38
	// Line 1258, Address: 0x2cc77c, Func Offset: 0x4c
	// Line 1259, Address: 0x2cc780, Func Offset: 0x50
	// Line 1260, Address: 0x2cc78c, Func Offset: 0x5c
	// Line 1264, Address: 0x2cc790, Func Offset: 0x60
	// Line 1265, Address: 0x2cc79c, Func Offset: 0x6c
	// Line 1266, Address: 0x2cc7a0, Func Offset: 0x70
	// Func End, Address: 0x2cc7b4, Func Offset: 0x84
}

// 
// Start address: 0x2cc7c0
int step_open(_anon0* p)
{
	int ret;
	int port;
	int slot;
	int req_port;
	int req_slot;
	// Line 1269, Address: 0x2cc7c0, Func Offset: 0
	// Line 1270, Address: 0x2cc7d0, Func Offset: 0x10
	// Line 1269, Address: 0x2cc7d4, Func Offset: 0x14
	// Line 1271, Address: 0x2cc7e4, Func Offset: 0x24
	// Line 1272, Address: 0x2cc7ec, Func Offset: 0x2c
	// Line 1273, Address: 0x2cc7f0, Func Offset: 0x30
	// Line 1274, Address: 0x2cc7f4, Func Offset: 0x34
	// Line 1276, Address: 0x2cc7f8, Func Offset: 0x38
	// Line 1277, Address: 0x2cc808, Func Offset: 0x48
	// Line 1280, Address: 0x2cc818, Func Offset: 0x58
	// Line 1282, Address: 0x2cc82c, Func Offset: 0x6c
	// Line 1283, Address: 0x2cc844, Func Offset: 0x84
	// Line 1285, Address: 0x2cc848, Func Offset: 0x88
	// Line 1284, Address: 0x2cc84c, Func Offset: 0x8c
	// Line 1290, Address: 0x2cc850, Func Offset: 0x90
	// Line 1291, Address: 0x2cc854, Func Offset: 0x94
	// Func End, Address: 0x2cc878, Func Offset: 0xb8
}

// 
// Start address: 0x2cc880
void pad_exec(_anon0* p)
{
	// Line 1295, Address: 0x2cc880, Func Offset: 0
	// Func End, Address: 0x2cc888, Func Offset: 0x8
}

// 
// Start address: 0x2cc890
void pad_stab(_anon0* p)
{
	// Line 1299, Address: 0x2cc890, Func Offset: 0
	// Func End, Address: 0x2cc898, Func Offset: 0x8
}

// 
// Start address: 0x2cc8a0
void pad_erro(_anon0* p)
{
	// Line 1303, Address: 0x2cc8a0, Func Offset: 0
	// Line 1304, Address: 0x2cc8a8, Func Offset: 0x8
	// Func End, Address: 0x2cc8b0, Func Offset: 0x10
}

// 
// Start address: 0x2cc8b0
int step_read(_anon0* p)
{
	int ret;
	int stat;
	// Line 1307, Address: 0x2cc8b0, Func Offset: 0
	// Line 1311, Address: 0x2cc8c4, Func Offset: 0x14
	// Line 1313, Address: 0x2cc8d4, Func Offset: 0x24
	// Line 1315, Address: 0x2cc8e0, Func Offset: 0x30
	// Line 1319, Address: 0x2cc8ec, Func Offset: 0x3c
	// Line 1320, Address: 0x2cc914, Func Offset: 0x64
	// Line 1321, Address: 0x2cc928, Func Offset: 0x78
	// Line 1322, Address: 0x2cc938, Func Offset: 0x88
	// Line 1323, Address: 0x2cc948, Func Offset: 0x98
	// Line 1324, Address: 0x2cc958, Func Offset: 0xa8
	// Line 1325, Address: 0x2cc968, Func Offset: 0xb8
	// Line 1326, Address: 0x2cc978, Func Offset: 0xc8
	// Line 1335, Address: 0x2cc980, Func Offset: 0xd0
	// Line 1336, Address: 0x2cc984, Func Offset: 0xd4
	// Func End, Address: 0x2cc998, Func Offset: 0xe8
}

// 
// Start address: 0x2cc9a0
int step_close(_anon0* p)
{
	int ret;
	// Line 1339, Address: 0x2cc9a0, Func Offset: 0
	// Line 1347, Address: 0x2cc9b4, Func Offset: 0x14
	// Line 1348, Address: 0x2cc9d0, Func Offset: 0x30
	// Line 1349, Address: 0x2cc9d4, Func Offset: 0x34
	// Line 1350, Address: 0x2cc9d8, Func Offset: 0x38
	// Line 1351, Address: 0x2cc9e0, Func Offset: 0x40
	// Line 1352, Address: 0x2cc9e8, Func Offset: 0x48
	// Line 1351, Address: 0x2cc9ec, Func Offset: 0x4c
	// Line 1352, Address: 0x2cc9f4, Func Offset: 0x54
	// Line 1353, Address: 0x2cc9f8, Func Offset: 0x58
	// Line 1354, Address: 0x2cc9fc, Func Offset: 0x5c
	// Line 1355, Address: 0x2cca00, Func Offset: 0x60
	// Line 1356, Address: 0x2cca04, Func Offset: 0x64
	// Func End, Address: 0x2cca18, Func Offset: 0x78
}

// 
// Start address: 0x2cca20
int is_continuous_error()
{
	// Line 1362, Address: 0x2cca20, Func Offset: 0
	// Func End, Address: 0x2cca28, Func Offset: 0x8
}

// 
// Start address: 0x2cca30
int check_close(_anon0* p)
{
	int ret;
	int need_close;
	// Line 1365, Address: 0x2cca30, Func Offset: 0
	// Line 1367, Address: 0x2cca40, Func Offset: 0x10
	// Line 1365, Address: 0x2cca44, Func Offset: 0x14
	// Line 1369, Address: 0x2cca4c, Func Offset: 0x1c
	// Line 1370, Address: 0x2cca60, Func Offset: 0x30
	// Line 1371, Address: 0x2cca64, Func Offset: 0x34
	// Line 1373, Address: 0x2cca68, Func Offset: 0x38
	// Line 1374, Address: 0x2cca78, Func Offset: 0x48
	// Line 1375, Address: 0x2cca7c, Func Offset: 0x4c
	// Line 1378, Address: 0x2cca80, Func Offset: 0x50
	// Line 1379, Address: 0x2ccaa0, Func Offset: 0x70
	// Line 1380, Address: 0x2ccaa4, Func Offset: 0x74
	// Line 1382, Address: 0x2ccaa8, Func Offset: 0x78
	// Line 1384, Address: 0x2ccab0, Func Offset: 0x80
	// Line 1385, Address: 0x2ccab4, Func Offset: 0x84
	// Line 1384, Address: 0x2ccab8, Func Offset: 0x88
	// Line 1387, Address: 0x2ccac0, Func Offset: 0x90
	// Line 1388, Address: 0x2ccac4, Func Offset: 0x94
	// Func End, Address: 0x2ccadc, Func Offset: 0xac
}

// 
// Start address: 0x2ccae0
int pad_get_stable(_anon0* p)
{
	// Line 1392, Address: 0x2ccae0, Func Offset: 0
	// Line 1393, Address: 0x2ccae8, Func Offset: 0x8
	// Func End, Address: 0x2ccaf0, Func Offset: 0x10
}

// 
// Start address: 0x2ccaf0
int ktpoiPadInit(int mode, int n_pad, _anon0* p)
{
	// Line 1398, Address: 0x2ccaf0, Func Offset: 0
	// Func End, Address: 0x2ccaf8, Func Offset: 0x8
}

// 
// Start address: 0x2ccb00
void ktpoiPadRead()
{
	int n_pad;
	_anon0* p;
	// Line 1402, Address: 0x2ccb00, Func Offset: 0
	// Line 1403, Address: 0x2ccb04, Func Offset: 0x4
	// Line 1402, Address: 0x2ccb08, Func Offset: 0x8
	// Line 1403, Address: 0x2ccb14, Func Offset: 0x14
	// Line 1404, Address: 0x2ccb18, Func Offset: 0x18
	// Line 1406, Address: 0x2ccb1c, Func Offset: 0x1c
	// Line 1407, Address: 0x2ccb24, Func Offset: 0x24
	// Line 1408, Address: 0x2ccb30, Func Offset: 0x30
	// Line 1409, Address: 0x2ccb38, Func Offset: 0x38
	// Line 1410, Address: 0x2ccb50, Func Offset: 0x50
	// Line 1411, Address: 0x2ccb58, Func Offset: 0x58
	// Func End, Address: 0x2ccb6c, Func Offset: 0x6c
}

// 
// Start address: 0x2ccb70
_anon0* ktpoiPadAddress(int number)
{
	_anon0* p;
	// Line 1415, Address: 0x2ccb70, Func Offset: 0
	// Line 1417, Address: 0x2ccb78, Func Offset: 0x8
	// Line 1418, Address: 0x2ccb98, Func Offset: 0x28
	// Line 1421, Address: 0x2ccba0, Func Offset: 0x30
	// Func End, Address: 0x2ccba8, Func Offset: 0x38
}

// 
// Start address: 0x2ccbb0
int ktpoiPadGetStatus(int pad_number)
{
	_anon0* p;
	int ret;
	// Line 1424, Address: 0x2ccbb0, Func Offset: 0
	// Line 1430, Address: 0x2ccbb8, Func Offset: 0x8
	// Line 1436, Address: 0x2ccbc0, Func Offset: 0x10
	// Line 1439, Address: 0x2ccbc8, Func Offset: 0x18
	// Line 1445, Address: 0x2ccbf4, Func Offset: 0x44
	// Line 1449, Address: 0x2ccbf8, Func Offset: 0x48
	// Line 1452, Address: 0x2ccc18, Func Offset: 0x68
	// Line 1457, Address: 0x2ccc20, Func Offset: 0x70
	// Line 1464, Address: 0x2ccc28, Func Offset: 0x78
	// Line 1471, Address: 0x2ccc30, Func Offset: 0x80
	// Line 1474, Address: 0x2ccc40, Func Offset: 0x90
	// Line 1477, Address: 0x2ccc48, Func Offset: 0x98
	// Line 1480, Address: 0x2ccc4c, Func Offset: 0x9c
	// Line 1482, Address: 0x2ccc50, Func Offset: 0xa0
	// Line 1484, Address: 0x2ccc58, Func Offset: 0xa8
	// Line 1483, Address: 0x2ccc5c, Func Offset: 0xac
	// Line 1484, Address: 0x2ccc60, Func Offset: 0xb0
	// Func End, Address: 0x2ccc68, Func Offset: 0xb8
}

// 
// Start address: 0x2ccc70
void ktpoiPadSetID(int pad_number, int id, int lock)
{
	_anon0* p;
	// Line 1487, Address: 0x2ccc70, Func Offset: 0
	// Line 1492, Address: 0x2ccc78, Func Offset: 0x8
	// Line 1494, Address: 0x2ccc80, Func Offset: 0x10
	// Line 1495, Address: 0x2ccc88, Func Offset: 0x18
	// Line 1496, Address: 0x2ccc8c, Func Offset: 0x1c
	// Line 1497, Address: 0x2ccc90, Func Offset: 0x20
	// Line 1498, Address: 0x2ccc98, Func Offset: 0x28
	// Line 1501, Address: 0x2ccca0, Func Offset: 0x30
	// Func End, Address: 0x2cccac, Func Offset: 0x3c
}

// 
// Start address: 0x2cccb0
void ktpoiPadSetAlign(int pad_number)
{
	_anon0* p;
	// Line 1504, Address: 0x2cccb0, Func Offset: 0
	// Line 1507, Address: 0x2cccb8, Func Offset: 0x8
	// Line 1509, Address: 0x2cccc0, Func Offset: 0x10
	// Line 1510, Address: 0x2cccc8, Func Offset: 0x18
	// Line 1511, Address: 0x2cccd0, Func Offset: 0x20
	// Line 1512, Address: 0x2cccd8, Func Offset: 0x28
	// Func End, Address: 0x2ccce4, Func Offset: 0x34
}

// 
// Start address: 0x2cccf0
void ktpoiPadSetActKind(int pad_number, unsigned char* d)
{
	_anon0* p;
	// Line 1515, Address: 0x2cccf0, Func Offset: 0
	// Line 1520, Address: 0x2cccf8, Func Offset: 0x8
	// Line 1522, Address: 0x2ccd00, Func Offset: 0x10
	// Line 1524, Address: 0x2ccd08, Func Offset: 0x18
	// Line 1526, Address: 0x2ccd34, Func Offset: 0x44
	// Line 1528, Address: 0x2ccd3c, Func Offset: 0x4c
	// Line 1531, Address: 0x2ccd44, Func Offset: 0x54
	// Func End, Address: 0x2ccd50, Func Offset: 0x60
}

// 
// Start address: 0x2ccd50
void ktpoiPadEnableActuater(int pad_number)
{
	_anon0* p;
	// Line 1534, Address: 0x2ccd50, Func Offset: 0
	// Line 1538, Address: 0x2ccd58, Func Offset: 0x8
	// Line 1540, Address: 0x2ccd60, Func Offset: 0x10
	// Line 1541, Address: 0x2ccd68, Func Offset: 0x18
	// Line 1542, Address: 0x2ccd70, Func Offset: 0x20
	// Line 1544, Address: 0x2ccd78, Func Offset: 0x28
	// Func End, Address: 0x2ccd84, Func Offset: 0x34
}

// 
// Start address: 0x2ccd90
void ktpoiPadSetActuater(int pad_number, int act_number, int level, int timer)
{
	_anon0* p;
	// Line 1547, Address: 0x2ccd90, Func Offset: 0
	// Line 1551, Address: 0x2ccd98, Func Offset: 0x8
	// Line 1555, Address: 0x2ccda0, Func Offset: 0x10
	// Line 1556, Address: 0x2ccdb0, Func Offset: 0x20
	// Line 1558, Address: 0x2ccdb8, Func Offset: 0x28
	// Line 1561, Address: 0x2ccdc0, Func Offset: 0x30
	// Func End, Address: 0x2ccdcc, Func Offset: 0x3c
}

// 
// Start address: 0x2ccdd0
int ktpoiPadGetStable(int pad_number)
{
	_anon0* p;
	int stable;
	// Line 1564, Address: 0x2ccdd0, Func Offset: 0
	// Line 1568, Address: 0x2ccdd8, Func Offset: 0x8
	// Line 1570, Address: 0x2ccde0, Func Offset: 0x10
	// Line 1571, Address: 0x2ccde8, Func Offset: 0x18
	// Line 1572, Address: 0x2ccdf0, Func Offset: 0x20
	// Line 1575, Address: 0x2ccdf8, Func Offset: 0x28
	// Func End, Address: 0x2cce04, Func Offset: 0x34
}

// 
// Start address: 0x2cce10
int ktpoiPadGetID(int pad_number)
{
	_anon0* p;
	int ret;
	// Line 1578, Address: 0x2cce10, Func Offset: 0
	// Line 1582, Address: 0x2cce18, Func Offset: 0x8
	// Line 1584, Address: 0x2cce20, Func Offset: 0x10
	// Line 1586, Address: 0x2cce28, Func Offset: 0x18
	// Line 1587, Address: 0x2cce3c, Func Offset: 0x2c
	// Line 1589, Address: 0x2cce40, Func Offset: 0x30
	// Line 1592, Address: 0x2cce48, Func Offset: 0x38
	// Line 1591, Address: 0x2cce4c, Func Offset: 0x3c
	// Line 1592, Address: 0x2cce50, Func Offset: 0x40
	// Func End, Address: 0x2cce58, Func Offset: 0x48
}

// 
// Start address: 0x2cce60
unsigned int ktpoiPadGetAn0(int pad_number)
{
	_anon0* p;
	int an0;
	// Line 1595, Address: 0x2cce60, Func Offset: 0
	// Line 1599, Address: 0x2cce68, Func Offset: 0x8
	// Line 1601, Address: 0x2cce70, Func Offset: 0x10
	// Line 1603, Address: 0x2cce78, Func Offset: 0x18
	// Line 1606, Address: 0x2cce80, Func Offset: 0x20
	// Func End, Address: 0x2cce8c, Func Offset: 0x2c
}

// 
// Start address: 0x2cce90
void ktpoiPadSetRapid_0(_anon0* p, int group, int bit, int delay, int interval)
{
	_anon1* ra;
	// Line 1609, Address: 0x2cce90, Func Offset: 0
	// Line 1610, Address: 0x2cce94, Func Offset: 0x4
	// Line 1609, Address: 0x2cce9c, Func Offset: 0xc
	// Line 1612, Address: 0x2ccea0, Func Offset: 0x10
	// Line 1613, Address: 0x2ccea8, Func Offset: 0x18
	// Line 1616, Address: 0x2cceac, Func Offset: 0x1c
	// Line 1618, Address: 0x2cceb0, Func Offset: 0x20
	// Line 1613, Address: 0x2cceb4, Func Offset: 0x24
	// Line 1617, Address: 0x2cceb8, Func Offset: 0x28
	// Line 1618, Address: 0x2ccebc, Func Offset: 0x2c
	// Line 1619, Address: 0x2ccec0, Func Offset: 0x30
	// Line 1620, Address: 0x2ccec8, Func Offset: 0x38
	// Func End, Address: 0x2cced4, Func Offset: 0x44
}

// 
// Start address: 0x2ccee0
void ktpoiPadSetRapid(int pad_number, _anon3* d, int n_rpd)
{
	_anon0* p;
	int i;
	// Line 1622, Address: 0x2ccee0, Func Offset: 0
	// Line 1629, Address: 0x2cceec, Func Offset: 0xc
	// Line 1633, Address: 0x2ccef4, Func Offset: 0x14
	// Line 1634, Address: 0x2ccf00, Func Offset: 0x20
	// Line 1635, Address: 0x2ccf18, Func Offset: 0x38
	// Line 1636, Address: 0x2ccf28, Func Offset: 0x48
	// Func End, Address: 0x2ccf34, Func Offset: 0x54
}

// 
// Start address: 0x2ccf40
int ktpoiPadQuit()
{
	int ret;
	int n_pad;
	int i;
	_anon0* p;
	int port;
	int slot;
	// Line 1639, Address: 0x2ccf40, Func Offset: 0
	// Line 1641, Address: 0x2ccf44, Func Offset: 0x4
	// Line 1639, Address: 0x2ccf48, Func Offset: 0x8
	// Line 1640, Address: 0x2ccf54, Func Offset: 0x14
	// Line 1639, Address: 0x2ccf58, Func Offset: 0x18
	// Line 1641, Address: 0x2ccf68, Func Offset: 0x28
	// Line 1645, Address: 0x2ccf6c, Func Offset: 0x2c
	// Line 1647, Address: 0x2ccf78, Func Offset: 0x38
	// Line 1648, Address: 0x2ccf80, Func Offset: 0x40
	// Line 1647, Address: 0x2ccf84, Func Offset: 0x44
	// Line 1649, Address: 0x2ccf88, Func Offset: 0x48
	// Line 1651, Address: 0x2ccf8c, Func Offset: 0x4c
	// Line 1654, Address: 0x2ccfa0, Func Offset: 0x60
	// Line 1655, Address: 0x2ccfb4, Func Offset: 0x74
	// Line 1656, Address: 0x2ccfbc, Func Offset: 0x7c
	// Line 1658, Address: 0x2ccfc0, Func Offset: 0x80
	// Line 1659, Address: 0x2ccfd8, Func Offset: 0x98
	// Line 1661, Address: 0x2ccfe0, Func Offset: 0xa0
	// Line 1663, Address: 0x2ccfe8, Func Offset: 0xa8
	// Line 1666, Address: 0x2ccfec, Func Offset: 0xac
	// Line 1667, Address: 0x2cd000, Func Offset: 0xc0
	// Line 1670, Address: 0x2cd008, Func Offset: 0xc8
	// Line 1672, Address: 0x2cd01c, Func Offset: 0xdc
	// Line 1673, Address: 0x2cd024, Func Offset: 0xe4
	// Line 1676, Address: 0x2cd028, Func Offset: 0xe8
	// Line 1677, Address: 0x2cd03c, Func Offset: 0xfc
	// Line 1678, Address: 0x2cd044, Func Offset: 0x104
	// Line 1679, Address: 0x2cd064, Func Offset: 0x124
	// Line 1682, Address: 0x2cd068, Func Offset: 0x128
	// Line 1684, Address: 0x2cd074, Func Offset: 0x134
	// Line 1685, Address: 0x2cd078, Func Offset: 0x138
	// Line 1686, Address: 0x2cd07c, Func Offset: 0x13c
	// Func End, Address: 0x2cd0a0, Func Offset: 0x160
}

// 
// Start address: 0x2cd0a0
unsigned int ktpoiPadGetJoy(int pad_number)
{
	_anon0* p;
	unsigned int joy;
	// Line 1689, Address: 0x2cd0a0, Func Offset: 0
	// Line 1693, Address: 0x2cd0a8, Func Offset: 0x8
	// Line 1695, Address: 0x2cd0b0, Func Offset: 0x10
	// Line 1697, Address: 0x2cd0b8, Func Offset: 0x18
	// Line 1700, Address: 0x2cd0c0, Func Offset: 0x20
	// Func End, Address: 0x2cd0cc, Func Offset: 0x2c
}

// 
// Start address: 0x2cd0d0
unsigned int ktpoiPadGetTrg(int pad_number)
{
	_anon0* p;
	unsigned int trg;
	// Line 1703, Address: 0x2cd0d0, Func Offset: 0
	// Line 1707, Address: 0x2cd0d8, Func Offset: 0x8
	// Line 1709, Address: 0x2cd0e0, Func Offset: 0x10
	// Line 1711, Address: 0x2cd0e8, Func Offset: 0x18
	// Line 1714, Address: 0x2cd0f0, Func Offset: 0x20
	// Func End, Address: 0x2cd0fc, Func Offset: 0x2c
}

// 
// Start address: 0x2cd100
unsigned int ktpoiPadGetRpd(int pad_number)
{
	_anon0* p;
	unsigned int rpd;
	// Line 1717, Address: 0x2cd100, Func Offset: 0
	// Line 1721, Address: 0x2cd108, Func Offset: 0x8
	// Line 1723, Address: 0x2cd110, Func Offset: 0x10
	// Line 1725, Address: 0x2cd118, Func Offset: 0x18
	// Line 1728, Address: 0x2cd120, Func Offset: 0x20
	// Func End, Address: 0x2cd12c, Func Offset: 0x2c
}

// 
// Start address: 0x2cd130
void PadSetDualShockMode(int port_no)
{
	// Line 1761, Address: 0x2cd130, Func Offset: 0
	// Line 1762, Address: 0x2cd13c, Func Offset: 0xc
	// Line 1763, Address: 0x2cd174, Func Offset: 0x44
	// Line 1765, Address: 0x2cd178, Func Offset: 0x48
	// Line 1768, Address: 0x2cd180, Func Offset: 0x50
	// Line 1771, Address: 0x2cd188, Func Offset: 0x58
	// Line 1778, Address: 0x2cd190, Func Offset: 0x60
	// Line 1781, Address: 0x2cd198, Func Offset: 0x68
	// Line 1783, Address: 0x2cd1a0, Func Offset: 0x70
	// Line 1784, Address: 0x2cd1a8, Func Offset: 0x78
	// Line 1786, Address: 0x2cd1b0, Func Offset: 0x80
	// Line 1790, Address: 0x2cd1c4, Func Offset: 0x94
	// Line 1792, Address: 0x2cd1c8, Func Offset: 0x98
	// Line 1801, Address: 0x2cd1d8, Func Offset: 0xa8
	// Line 1804, Address: 0x2cd1e0, Func Offset: 0xb0
	// Line 1806, Address: 0x2cd1e8, Func Offset: 0xb8
	// Line 1808, Address: 0x2cd1f0, Func Offset: 0xc0
	// Line 1809, Address: 0x2cd1f8, Func Offset: 0xc8
	// Line 1811, Address: 0x2cd20c, Func Offset: 0xdc
	// Func End, Address: 0x2cd220, Func Offset: 0xf0
}

// 
// Start address: 0x2cd220
void PadActuatorInit(int pad_no)
{
	unsigned char actuater_init_data[6];
	// Line 1817, Address: 0x2cd220, Func Offset: 0
	// Line 1827, Address: 0x2cd224, Func Offset: 0x4
	// Line 1817, Address: 0x2cd228, Func Offset: 0x8
	// Line 1827, Address: 0x2cd22c, Func Offset: 0xc
	// Line 1817, Address: 0x2cd230, Func Offset: 0x10
	// Line 1827, Address: 0x2cd234, Func Offset: 0x14
	// Line 1828, Address: 0x2cd23c, Func Offset: 0x1c
	// Line 1829, Address: 0x2cd244, Func Offset: 0x24
	// Func End, Address: 0x2cd254, Func Offset: 0x34
}

// 
// Start address: 0x2cd260
void sfPadActuatorRun(int port_no, int act_no, int level, float time)
{
	int vib_time;
	// Line 1845, Address: 0x2cd260, Func Offset: 0
	// Line 1847, Address: 0x2cd27c, Func Offset: 0x1c
	// Line 1848, Address: 0x2cd288, Func Offset: 0x28
	// Line 1849, Address: 0x2cd28c, Func Offset: 0x2c
	// Line 1850, Address: 0x2cd290, Func Offset: 0x30
	// Func End, Address: 0x2cd298, Func Offset: 0x38
}

// 
// Start address: 0x2cd2a0
void sfPadActuatorStop(int port_no, int act_no)
{
	// Line 1862, Address: 0x2cd2a0, Func Offset: 0
	// Func End, Address: 0x2cd2ac, Func Offset: 0xc
}

// 
// Start address: 0x2cd2b0
void sfPadActuatorStopAll()
{
	int i;
	// Line 1869, Address: 0x2cd2b0, Func Offset: 0
	// Line 1871, Address: 0x2cd2bc, Func Offset: 0xc
	// Line 1872, Address: 0x2cd2c0, Func Offset: 0x10
	// Line 1873, Address: 0x2cd2d4, Func Offset: 0x24
	// Line 1874, Address: 0x2cd2e8, Func Offset: 0x38
	// Line 1875, Address: 0x2cd2f8, Func Offset: 0x48
	// Func End, Address: 0x2cd308, Func Offset: 0x58
}

// 
// Start address: 0x2cd310
void PadAnalogClear(int port_no)
{
	// Line 1882, Address: 0x2cd314, Func Offset: 0x4
	// Line 1881, Address: 0x2cd318, Func Offset: 0x8
	// Line 1883, Address: 0x2cd31c, Func Offset: 0xc
	// Line 1882, Address: 0x2cd324, Func Offset: 0x14
	// Line 1881, Address: 0x2cd328, Func Offset: 0x18
	// Line 1883, Address: 0x2cd32c, Func Offset: 0x1c
	// Line 1884, Address: 0x2cd334, Func Offset: 0x24
	// Line 1882, Address: 0x2cd338, Func Offset: 0x28
	// Line 1885, Address: 0x2cd33c, Func Offset: 0x2c
	// Line 1884, Address: 0x2cd340, Func Offset: 0x30
	// Line 1883, Address: 0x2cd344, Func Offset: 0x34
	// Line 1885, Address: 0x2cd348, Func Offset: 0x38
	// Line 1884, Address: 0x2cd34c, Func Offset: 0x3c
	// Line 1882, Address: 0x2cd350, Func Offset: 0x40
	// Line 1885, Address: 0x2cd354, Func Offset: 0x44
	// Line 1883, Address: 0x2cd358, Func Offset: 0x48
	// Line 1886, Address: 0x2cd35c, Func Offset: 0x4c
	// Line 1884, Address: 0x2cd360, Func Offset: 0x50
	// Line 1886, Address: 0x2cd364, Func Offset: 0x54
	// Line 1885, Address: 0x2cd368, Func Offset: 0x58
	// Line 1886, Address: 0x2cd36c, Func Offset: 0x5c
	// Line 1887, Address: 0x2cd374, Func Offset: 0x64
	// Line 1888, Address: 0x2cd380, Func Offset: 0x70
	// Line 1887, Address: 0x2cd384, Func Offset: 0x74
	// Line 1888, Address: 0x2cd388, Func Offset: 0x78
	// Line 1889, Address: 0x2cd394, Func Offset: 0x84
	// Line 1890, Address: 0x2cd3a0, Func Offset: 0x90
	// Func End, Address: 0x2cd3a8, Func Offset: 0x98
}

// 
// Start address: 0x2cd3b0
void PadAnalogGet(int pad_no)
{
	int bGetAnalog;
	int i;
	unsigned int input;
	float power;
	float degree;
	float x;
	float y;
	// Line 1894, Address: 0x2cd3b0, Func Offset: 0
	// Line 1899, Address: 0x2cd3cc, Func Offset: 0x1c
	// Line 1894, Address: 0x2cd3d0, Func Offset: 0x20
	// Line 1900, Address: 0x2cd3d8, Func Offset: 0x28
	// Line 1901, Address: 0x2cd3e8, Func Offset: 0x38
	// Line 1903, Address: 0x2cd40c, Func Offset: 0x5c
	// Line 1904, Address: 0x2cd410, Func Offset: 0x60
	// Line 1908, Address: 0x2cd414, Func Offset: 0x64
	// Line 1910, Address: 0x2cd418, Func Offset: 0x68
	// Line 1912, Address: 0x2cd420, Func Offset: 0x70
	// Line 1914, Address: 0x2cd428, Func Offset: 0x78
	// Line 1912, Address: 0x2cd42c, Func Offset: 0x7c
	// Line 1920, Address: 0x2cd430, Func Offset: 0x80
	// Line 1921, Address: 0x2cd438, Func Offset: 0x88
	// Line 1922, Address: 0x2cd444, Func Offset: 0x94
	// Line 1935, Address: 0x2cd45c, Func Offset: 0xac
	// Line 1936, Address: 0x2cd460, Func Offset: 0xb0
	// Line 1922, Address: 0x2cd464, Func Offset: 0xb4
	// Line 1935, Address: 0x2cd468, Func Offset: 0xb8
	// Line 1936, Address: 0x2cd474, Func Offset: 0xc4
	// Line 1937, Address: 0x2cd480, Func Offset: 0xd0
	// Line 1938, Address: 0x2cd494, Func Offset: 0xe4
	// Line 1939, Address: 0x2cd498, Func Offset: 0xe8
	// Line 1940, Address: 0x2cd4b0, Func Offset: 0x100
	// Line 1941, Address: 0x2cd4b8, Func Offset: 0x108
	// Line 1950, Address: 0x2cd4e4, Func Offset: 0x134
	// Line 1951, Address: 0x2cd4f8, Func Offset: 0x148
	// Line 1952, Address: 0x2cd504, Func Offset: 0x154
	// Line 1954, Address: 0x2cd50c, Func Offset: 0x15c
	// Line 1955, Address: 0x2cd518, Func Offset: 0x168
	// Line 1956, Address: 0x2cd524, Func Offset: 0x174
	// Line 1955, Address: 0x2cd528, Func Offset: 0x178
	// Line 1957, Address: 0x2cd52c, Func Offset: 0x17c
	// Line 1955, Address: 0x2cd530, Func Offset: 0x180
	// Line 1956, Address: 0x2cd53c, Func Offset: 0x18c
	// Line 1955, Address: 0x2cd540, Func Offset: 0x190
	// Line 1957, Address: 0x2cd544, Func Offset: 0x194
	// Line 1958, Address: 0x2cd548, Func Offset: 0x198
	// Line 1956, Address: 0x2cd54c, Func Offset: 0x19c
	// Line 1955, Address: 0x2cd550, Func Offset: 0x1a0
	// Line 1958, Address: 0x2cd554, Func Offset: 0x1a4
	// Line 1957, Address: 0x2cd558, Func Offset: 0x1a8
	// Line 1958, Address: 0x2cd55c, Func Offset: 0x1ac
	// Line 1956, Address: 0x2cd560, Func Offset: 0x1b0
	// Line 1957, Address: 0x2cd564, Func Offset: 0x1b4
	// Line 1959, Address: 0x2cd568, Func Offset: 0x1b8
	// Line 1960, Address: 0x2cd570, Func Offset: 0x1c0
	// Line 1961, Address: 0x2cd580, Func Offset: 0x1d0
	// Line 1960, Address: 0x2cd584, Func Offset: 0x1d4
	// Line 1962, Address: 0x2cd588, Func Offset: 0x1d8
	// Line 1960, Address: 0x2cd58c, Func Offset: 0x1dc
	// Line 1961, Address: 0x2cd594, Func Offset: 0x1e4
	// Line 1960, Address: 0x2cd598, Func Offset: 0x1e8
	// Line 1962, Address: 0x2cd59c, Func Offset: 0x1ec
	// Line 1963, Address: 0x2cd5a0, Func Offset: 0x1f0
	// Line 1961, Address: 0x2cd5a8, Func Offset: 0x1f8
	// Line 1960, Address: 0x2cd5ac, Func Offset: 0x1fc
	// Line 1962, Address: 0x2cd5b0, Func Offset: 0x200
	// Line 1961, Address: 0x2cd5b4, Func Offset: 0x204
	// Line 1963, Address: 0x2cd5b8, Func Offset: 0x208
	// Line 1962, Address: 0x2cd5bc, Func Offset: 0x20c
	// Line 1966, Address: 0x2cd5c0, Func Offset: 0x210
	// Line 1967, Address: 0x2cd5c8, Func Offset: 0x218
	// Line 1969, Address: 0x2cd5e4, Func Offset: 0x234
	// Line 1972, Address: 0x2cd5fc, Func Offset: 0x24c
	// Line 1973, Address: 0x2cd608, Func Offset: 0x258
	// Line 1975, Address: 0x2cd610, Func Offset: 0x260
	// Func End, Address: 0x2cd638, Func Offset: 0x288
}

// 
// Start address: 0x2cd640
unsigned int Analog2CrossKey(float degree)
{
	int pad_stat;
	float d;
	int di;
	// Line 1988, Address: 0x2cd640, Func Offset: 0
	// Line 1985, Address: 0x2cd64c, Func Offset: 0xc
	// Line 1988, Address: 0x2cd650, Func Offset: 0x10
	// Line 1989, Address: 0x2cd65c, Func Offset: 0x1c
	// Line 1991, Address: 0x2cd670, Func Offset: 0x30
	// Line 1992, Address: 0x2cd67c, Func Offset: 0x3c
	// Line 1991, Address: 0x2cd684, Func Offset: 0x44
	// Line 1992, Address: 0x2cd688, Func Offset: 0x48
	// Line 1994, Address: 0x2cd6a4, Func Offset: 0x64
	// Line 1995, Address: 0x2cd6b0, Func Offset: 0x70
	// Line 1996, Address: 0x2cd6b8, Func Offset: 0x78
	// Line 1997, Address: 0x2cd6bc, Func Offset: 0x7c
	// Line 1998, Address: 0x2cd6c0, Func Offset: 0x80
	// Line 1999, Address: 0x2cd6cc, Func Offset: 0x8c
	// Line 2001, Address: 0x2cd6d0, Func Offset: 0x90
	// Line 2002, Address: 0x2cd6f4, Func Offset: 0xb4
	// Line 2003, Address: 0x2cd6f8, Func Offset: 0xb8
	// Line 2005, Address: 0x2cd700, Func Offset: 0xc0
	// Line 2007, Address: 0x2cd708, Func Offset: 0xc8
	// Line 2009, Address: 0x2cd710, Func Offset: 0xd0
	// Line 2011, Address: 0x2cd718, Func Offset: 0xd8
	// Line 2013, Address: 0x2cd720, Func Offset: 0xe0
	// Line 2015, Address: 0x2cd728, Func Offset: 0xe8
	// Line 2016, Address: 0x2cd730, Func Offset: 0xf0
	// Line 2018, Address: 0x2cd734, Func Offset: 0xf4
	// Line 2021, Address: 0x2cd738, Func Offset: 0xf8
	// Func End, Address: 0x2cd740, Func Offset: 0x100
}

// 
// Start address: 0x2cd740
void force_analogue_init()
{
	// Line 2034, Address: 0x2cd740, Func Offset: 0
	// Line 2036, Address: 0x2cd74c, Func Offset: 0xc
	// Func End, Address: 0x2cd754, Func Offset: 0x14
}

// 
// Start address: 0x2cd760
int ktpoiPadDetectID(int pad_number, int id)
{
	int ret;
	_anon0* p;
	// Line 2042, Address: 0x2cd760, Func Offset: 0
	// Line 2048, Address: 0x2cd778, Func Offset: 0x18
	// Line 2050, Address: 0x2cd780, Func Offset: 0x20
	// Line 2051, Address: 0x2cd790, Func Offset: 0x30
	// Line 2054, Address: 0x2cd798, Func Offset: 0x38
	// Line 2055, Address: 0x2cd7a8, Func Offset: 0x48
	// Line 2057, Address: 0x2cd7b0, Func Offset: 0x50
	// Line 2058, Address: 0x2cd7b4, Func Offset: 0x54
	// Func End, Address: 0x2cd7cc, Func Offset: 0x6c
}

// 
// Start address: 0x2cd7d0
void force_analogue_on()
{
	int port;
	int status;
	int ret;
	// Line 2062, Address: 0x2cd7d0, Func Offset: 0
	// Line 2066, Address: 0x2cd7e0, Func Offset: 0x10
	// Line 2067, Address: 0x2cd7f0, Func Offset: 0x20
	// Line 2068, Address: 0x2cd7f8, Func Offset: 0x28
	// Line 2070, Address: 0x2cd804, Func Offset: 0x34
	// Line 2071, Address: 0x2cd814, Func Offset: 0x44
	// Line 2072, Address: 0x2cd81c, Func Offset: 0x4c
	// Line 2074, Address: 0x2cd820, Func Offset: 0x50
	// Line 2075, Address: 0x2cd82c, Func Offset: 0x5c
	// Line 2076, Address: 0x2cd834, Func Offset: 0x64
	// Line 2077, Address: 0x2cd844, Func Offset: 0x74
	// Line 2078, Address: 0x2cd848, Func Offset: 0x78
	// Line 2080, Address: 0x2cd858, Func Offset: 0x88
	// Line 2081, Address: 0x2cd860, Func Offset: 0x90
	// Line 2082, Address: 0x2cd86c, Func Offset: 0x9c
	// Line 2083, Address: 0x2cd87c, Func Offset: 0xac
	// Line 2084, Address: 0x2cd880, Func Offset: 0xb0
	// Line 2087, Address: 0x2cd890, Func Offset: 0xc0
	// Line 2088, Address: 0x2cd8a0, Func Offset: 0xd0
	// Func End, Address: 0x2cd8b4, Func Offset: 0xe4
}

// 
// Start address: 0x2cd8c0
void sfPadInit()
{
	int i;
	int port;
	int status;
	_anon3 rapid[3];
	// Line 2098, Address: 0x2cd8c0, Func Offset: 0
	// Line 2115, Address: 0x2cd8c4, Func Offset: 0x4
	// Line 2098, Address: 0x2cd8c8, Func Offset: 0x8
	// Line 2115, Address: 0x2cd8cc, Func Offset: 0xc
	// Line 2116, Address: 0x2cd8dc, Func Offset: 0x1c
	// Line 2119, Address: 0x2cd8e4, Func Offset: 0x24
	// Line 2121, Address: 0x2cd8e8, Func Offset: 0x28
	// Line 2124, Address: 0x2cd8fc, Func Offset: 0x3c
	// Line 2125, Address: 0x2cd904, Func Offset: 0x44
	// Line 2131, Address: 0x2cd914, Func Offset: 0x54
	// Line 2137, Address: 0x2cd918, Func Offset: 0x58
	// Line 2140, Address: 0x2cd920, Func Offset: 0x60
	// Line 2142, Address: 0x2cd928, Func Offset: 0x68
	// Line 2144, Address: 0x2cd930, Func Offset: 0x70
	// Line 2145, Address: 0x2cd938, Func Offset: 0x78
	// Line 2146, Address: 0x2cd940, Func Offset: 0x80
	// Line 2147, Address: 0x2cd954, Func Offset: 0x94
	// Line 2150, Address: 0x2cd968, Func Offset: 0xa8
	// Line 2151, Address: 0x2cd970, Func Offset: 0xb0
	// Line 2152, Address: 0x2cd978, Func Offset: 0xb8
	// Line 2155, Address: 0x2cd98c, Func Offset: 0xcc
	// Func End, Address: 0x2cd99c, Func Offset: 0xdc
}

// 
// Start address: 0x2cd9a0
void sfPadQuit()
{
	// Line 2162, Address: 0x2cd9a0, Func Offset: 0
	// Func End, Address: 0x2cd9a8, Func Offset: 0x8
}

// 
// Start address: 0x2cd9b0
void sfPadClearAll()
{
	int pad_no;
	// Line 2167, Address: 0x2cd9b0, Func Offset: 0
	// Line 2171, Address: 0x2cd9b4, Func Offset: 0x4
	// Line 2167, Address: 0x2cd9b8, Func Offset: 0x8
	// Line 2171, Address: 0x2cd9bc, Func Offset: 0xc
	// Line 2172, Address: 0x2cd9c8, Func Offset: 0x18
	// Line 2173, Address: 0x2cd9cc, Func Offset: 0x1c
	// Line 2177, Address: 0x2cd9d0, Func Offset: 0x20
	// Line 2178, Address: 0x2cd9dc, Func Offset: 0x2c
	// Line 2179, Address: 0x2cd9ec, Func Offset: 0x3c
	// Func End, Address: 0x2cd9f8, Func Offset: 0x48
}

// 
// Start address: 0x2cda00
void sfPadRead()
{
	int pad_no;
	unsigned int pad_dir_old;
	unsigned int pad_dir;
	// Line 2188, Address: 0x2cda00, Func Offset: 0
	// Line 2192, Address: 0x2cda14, Func Offset: 0x14
	// Line 2194, Address: 0x2cda1c, Func Offset: 0x1c
	// Line 2196, Address: 0x2cda24, Func Offset: 0x24
	// Line 2198, Address: 0x2cda34, Func Offset: 0x34
	// Line 2199, Address: 0x2cda3c, Func Offset: 0x3c
	// Line 2201, Address: 0x2cda40, Func Offset: 0x40
	// Line 2202, Address: 0x2cda50, Func Offset: 0x50
	// Line 2203, Address: 0x2cda5c, Func Offset: 0x5c
	// Line 2204, Address: 0x2cda68, Func Offset: 0x68
	// Line 2206, Address: 0x2cda74, Func Offset: 0x74
	// Line 2207, Address: 0x2cda7c, Func Offset: 0x7c
	// Line 2210, Address: 0x2cda8c, Func Offset: 0x8c
	// Line 2211, Address: 0x2cda98, Func Offset: 0x98
	// Line 2212, Address: 0x2cdaa4, Func Offset: 0xa4
	// Line 2215, Address: 0x2cdab0, Func Offset: 0xb0
	// Line 2217, Address: 0x2cdab8, Func Offset: 0xb8
	// Line 2219, Address: 0x2cdac0, Func Offset: 0xc0
	// Line 2220, Address: 0x2cdac8, Func Offset: 0xc8
	// Line 2221, Address: 0x2cdae8, Func Offset: 0xe8
	// Line 2222, Address: 0x2cdafc, Func Offset: 0xfc
	// Line 2224, Address: 0x2cdb00, Func Offset: 0x100
	// Line 2223, Address: 0x2cdb08, Func Offset: 0x108
	// Line 2224, Address: 0x2cdb0c, Func Offset: 0x10c
	// Line 2227, Address: 0x2cdb10, Func Offset: 0x110
	// Line 2228, Address: 0x2cdb28, Func Offset: 0x128
	// Line 2227, Address: 0x2cdb2c, Func Offset: 0x12c
	// Line 2228, Address: 0x2cdb30, Func Offset: 0x130
	// Line 2229, Address: 0x2cdb44, Func Offset: 0x144
	// Line 2228, Address: 0x2cdb48, Func Offset: 0x148
	// Line 2229, Address: 0x2cdb4c, Func Offset: 0x14c
	// Line 2228, Address: 0x2cdb50, Func Offset: 0x150
	// Line 2229, Address: 0x2cdb58, Func Offset: 0x158
	// Line 2230, Address: 0x2cdb60, Func Offset: 0x160
	// Func End, Address: 0x2cdb7c, Func Offset: 0x17c
}

// 
// Start address: 0x2cdb80
unsigned int sfPadGet(int no)
{
	// Line 2238, Address: 0x2cdb80, Func Offset: 0
	// Line 2239, Address: 0x2cdba0, Func Offset: 0x20
	// Func End, Address: 0x2cdba8, Func Offset: 0x28
}

// 
// Start address: 0x2cdbb0
unsigned int sfPadGetTrigger(int no)
{
	// Line 2245, Address: 0x2cdbb0, Func Offset: 0
	// Line 2246, Address: 0x2cdbd0, Func Offset: 0x20
	// Func End, Address: 0x2cdbd8, Func Offset: 0x28
}

// 
// Start address: 0x2cdbe0
unsigned int sfPadGetRepeat(int no)
{
	// Line 2252, Address: 0x2cdbe0, Func Offset: 0
	// Line 2253, Address: 0x2cdc00, Func Offset: 0x20
	// Func End, Address: 0x2cdc08, Func Offset: 0x28
}

// 
// Start address: 0x2cdc10
unsigned int sfPadGetForMenu(int no)
{
	// Line 2261, Address: 0x2cdc10, Func Offset: 0
	// Line 2262, Address: 0x2cdc30, Func Offset: 0x20
	// Func End, Address: 0x2cdc38, Func Offset: 0x28
}

// 
// Start address: 0x2cdc40
unsigned int sfPadGetTriggerForMenu(int no)
{
	// Line 2269, Address: 0x2cdc40, Func Offset: 0
	// Line 2270, Address: 0x2cdc60, Func Offset: 0x20
	// Func End, Address: 0x2cdc68, Func Offset: 0x28
}

// 
// Start address: 0x2cdc70
float sfPadGetAnalogLX(int no)
{
	// Line 2274, Address: 0x2cdc70, Func Offset: 0
	// Line 2275, Address: 0x2cdc90, Func Offset: 0x20
	// Func End, Address: 0x2cdc98, Func Offset: 0x28
}

// 
// Start address: 0x2cdca0
float sfPadGetAnalogLY(int no)
{
	// Line 2278, Address: 0x2cdca0, Func Offset: 0
	// Line 2279, Address: 0x2cdcc0, Func Offset: 0x20
	// Func End, Address: 0x2cdcc8, Func Offset: 0x28
}

// 
// Start address: 0x2cdcd0
float sfPadGetAnalogLPower(int no)
{
	// Line 2282, Address: 0x2cdcd0, Func Offset: 0
	// Line 2283, Address: 0x2cdcf0, Func Offset: 0x20
	// Func End, Address: 0x2cdcf8, Func Offset: 0x28
}

// 
// Start address: 0x2cdd00
float sfPadGetAnalogLDegree(int no)
{
	// Line 2286, Address: 0x2cdd00, Func Offset: 0
	// Line 2287, Address: 0x2cdd20, Func Offset: 0x20
	// Func End, Address: 0x2cdd28, Func Offset: 0x28
}

// 
// Start address: 0x2cdd30
float sfPadGetAnalogRX(int no)
{
	// Line 2290, Address: 0x2cdd30, Func Offset: 0
	// Line 2291, Address: 0x2cdd50, Func Offset: 0x20
	// Func End, Address: 0x2cdd58, Func Offset: 0x28
}

// 
// Start address: 0x2cdd60
float sfPadGetAnalogRY(int no)
{
	// Line 2294, Address: 0x2cdd60, Func Offset: 0
	// Line 2295, Address: 0x2cdd80, Func Offset: 0x20
	// Func End, Address: 0x2cdd88, Func Offset: 0x28
}

// 
// Start address: 0x2cdd90
float sfPadGetAnalogRPower(int no)
{
	// Line 2298, Address: 0x2cdd90, Func Offset: 0
	// Line 2299, Address: 0x2cddb0, Func Offset: 0x20
	// Func End, Address: 0x2cddb8, Func Offset: 0x28
}

// 
// Start address: 0x2cddc0
int sfPadIsDisconnet(int no)
{
	// Line 2319, Address: 0x2cddc0, Func Offset: 0
	// Line 2320, Address: 0x2cddc8, Func Offset: 0x8
	// Line 2321, Address: 0x2cddd0, Func Offset: 0x10
	// Line 2320, Address: 0x2cddd4, Func Offset: 0x14
	// Line 2321, Address: 0x2cdddc, Func Offset: 0x1c
	// Func End, Address: 0x2cdde4, Func Offset: 0x24
}

