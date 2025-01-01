typedef union _anon0;
typedef struct _PlayableSubtitleHandler;
typedef struct _SubtitleMessageData;
typedef struct sfObj;
typedef enum _enum_0 : unsigned char;
typedef enum _enum_1 : unsigned char;

typedef void(*type_0)(sfObj*);
typedef void(*type_7)(sfObj*);
typedef void(*type_9)(sfObj*);

typedef short type_1[2];
typedef unsigned short type_2[2];
typedef char type_3[4];
typedef unsigned char type_4[4];
typedef float type_5[1];
typedef int type_6[1];
typedef _anon0 type_8[256];

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

struct _PlayableSubtitleHandler
{
	_enum_0 stat;
	short call;
	_enum_1 msg_stat;
	_SubtitleMessageData* msg_dt;
	short msg_idx;
	unsigned short msg_timer;
	unsigned int msg_alpha;
};

struct _SubtitleMessageData
{
	short pack_id;
	short msg_id;
	float time;
};

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

enum _enum_0 : unsigned char
{
	PHNDL_STAT_STOP,
	PHNDL_STAT_PAUSE,
	PHNDL_STAT_PLAY
};

enum _enum_1 : unsigned char
{
	PMSG_STAT_INIT,
	PMSG_STAT_PUT,
	PMSG_STAT_BLANK,
	PMSG_STAT_END
};

void(*NowLoadingMain)(sfObj*);
_PlayableSubtitleHandler active_handler;

int PlayableSubtitleIsEnable();
void PlayableSubtitleVariousInit();
void PlayableSubtitleHandlerInit();
void PlayableSubtitleMessageDataInit(_SubtitleMessageData* msg_dt);
int PlayableSubtitleCall();
int PlayableSubtitleMessageMain();
void PlayableSubtitleMain();
void PlayableSubtitleMessageEnd();
void PlayableSubtitleEnd();
int PlayableSubtitleMessageIsEnd();
_SubtitleMessageData* PlayableSubtitleMessageData();
void PlayableSubtitleMessageSetAlpha(unsigned int alpha);
int PlayableSubtitleMessageForceSetByTime(float time);

// 
// Start address: 0x2bdbb0
int PlayableSubtitleIsEnable()
{
	// Line 85, Address: 0x2bdbb0, Func Offset: 0
	// Line 100, Address: 0x2bdbb8, Func Offset: 0x8
	// Line 101, Address: 0x2bdbcc, Func Offset: 0x1c
	// Line 102, Address: 0x2bdbd4, Func Offset: 0x24
	// Line 105, Address: 0x2bdbd8, Func Offset: 0x28
	// Line 106, Address: 0x2bdbec, Func Offset: 0x3c
	// Line 107, Address: 0x2bdbf4, Func Offset: 0x44
	// Line 110, Address: 0x2bdbf8, Func Offset: 0x48
	// Line 111, Address: 0x2bdc18, Func Offset: 0x68
	// Line 116, Address: 0x2bdc20, Func Offset: 0x70
	// Line 120, Address: 0x2bdc38, Func Offset: 0x88
	// Func End, Address: 0x2bdc44, Func Offset: 0x94
}

// 
// Start address: 0x2bdc50
void PlayableSubtitleVariousInit()
{
	// Line 130, Address: 0x2bdc50, Func Offset: 0
	// Line 131, Address: 0x2bdc54, Func Offset: 0x4
	// Line 130, Address: 0x2bdc58, Func Offset: 0x8
	// Line 131, Address: 0x2bdc5c, Func Offset: 0xc
	// Line 132, Address: 0x2bdc60, Func Offset: 0x10
	// Func End, Address: 0x2bdc68, Func Offset: 0x18
}

// 
// Start address: 0x2bdc70
void PlayableSubtitleHandlerInit()
{
	// Line 154, Address: 0x2bdc70, Func Offset: 0
	// Line 155, Address: 0x2bdc78, Func Offset: 0x8
	// Line 158, Address: 0x2bdc80, Func Offset: 0x10
	// Line 159, Address: 0x2bdc88, Func Offset: 0x18
	// Line 160, Address: 0x2bdc8c, Func Offset: 0x1c
	// Func End, Address: 0x2bdc94, Func Offset: 0x24
}

// 
// Start address: 0x2bdca0
void PlayableSubtitleMessageDataInit(_SubtitleMessageData* msg_dt)
{
	// Line 171, Address: 0x2bdca0, Func Offset: 0
	// Line 170, Address: 0x2bdca8, Func Offset: 0x8
	// Line 172, Address: 0x2bdcb0, Func Offset: 0x10
	// Line 173, Address: 0x2bdcb8, Func Offset: 0x18
	// Line 174, Address: 0x2bdcbc, Func Offset: 0x1c
	// Func End, Address: 0x2bdcc4, Func Offset: 0x24
}

// 
// Start address: 0x2bdcd0
int PlayableSubtitleCall()
{
	// Line 186, Address: 0x2bdcd0, Func Offset: 0
	// Line 187, Address: 0x2bdce4, Func Offset: 0x14
	// Line 188, Address: 0x2bdcec, Func Offset: 0x1c
	// Line 190, Address: 0x2bdcf0, Func Offset: 0x20
	// Line 191, Address: 0x2bdcfc, Func Offset: 0x2c
	// Line 192, Address: 0x2bdd00, Func Offset: 0x30
	// Func End, Address: 0x2bdd08, Func Offset: 0x38
}

// 
// Start address: 0x2bdd10
int PlayableSubtitleMessageMain()
{
	_SubtitleMessageData* msg_dt;
	int wait;
	// Line 200, Address: 0x2bdd10, Func Offset: 0
	// Line 204, Address: 0x2bdd24, Func Offset: 0x14
	// Line 205, Address: 0x2bdd2c, Func Offset: 0x1c
	// Line 206, Address: 0x2bdd34, Func Offset: 0x24
	// Line 208, Address: 0x2bdd38, Func Offset: 0x28
	// Line 209, Address: 0x2bdd4c, Func Offset: 0x3c
	// Line 210, Address: 0x2bdd54, Func Offset: 0x44
	// Line 212, Address: 0x2bdd58, Func Offset: 0x48
	// Line 214, Address: 0x2bdd60, Func Offset: 0x50
	// Line 212, Address: 0x2bdd64, Func Offset: 0x54
	// Line 214, Address: 0x2bdd6c, Func Offset: 0x5c
	// Line 216, Address: 0x2bdd88, Func Offset: 0x78
	// Line 217, Address: 0x2bdd90, Func Offset: 0x80
	// Line 220, Address: 0x2bdd98, Func Offset: 0x88
	// Line 221, Address: 0x2bdda0, Func Offset: 0x90
	// Line 223, Address: 0x2bdda8, Func Offset: 0x98
	// Line 226, Address: 0x2bddb0, Func Offset: 0xa0
	// Line 228, Address: 0x2bdde8, Func Offset: 0xd8
	// Line 229, Address: 0x2bddf4, Func Offset: 0xe4
	// Line 234, Address: 0x2bde00, Func Offset: 0xf0
	// Line 235, Address: 0x2bde0c, Func Offset: 0xfc
	// Line 234, Address: 0x2bde10, Func Offset: 0x100
	// Line 235, Address: 0x2bde18, Func Offset: 0x108
	// Line 234, Address: 0x2bde1c, Func Offset: 0x10c
	// Line 235, Address: 0x2bde20, Func Offset: 0x110
	// Line 236, Address: 0x2bde2c, Func Offset: 0x11c
	// Line 234, Address: 0x2bde34, Func Offset: 0x124
	// Line 236, Address: 0x2bde40, Func Offset: 0x130
	// Line 238, Address: 0x2bde4c, Func Offset: 0x13c
	// Line 237, Address: 0x2bde50, Func Offset: 0x140
	// Line 239, Address: 0x2bde64, Func Offset: 0x154
	// Line 241, Address: 0x2bde68, Func Offset: 0x158
	// Line 242, Address: 0x2bde70, Func Offset: 0x160
	// Func End, Address: 0x2bde80, Func Offset: 0x170
}

// 
// Start address: 0x2bde80
void PlayableSubtitleMain()
{
	// Line 250, Address: 0x2bde80, Func Offset: 0
	// Line 251, Address: 0x2bde84, Func Offset: 0x4
	// Line 250, Address: 0x2bde88, Func Offset: 0x8
	// Line 251, Address: 0x2bde8c, Func Offset: 0xc
	// Line 258, Address: 0x2bde98, Func Offset: 0x18
	// Line 261, Address: 0x2bdea0, Func Offset: 0x20
	// Line 262, Address: 0x2bdeb0, Func Offset: 0x30
	// Line 264, Address: 0x2bdec0, Func Offset: 0x40
	// Line 267, Address: 0x2bdec8, Func Offset: 0x48
	// Line 268, Address: 0x2bded0, Func Offset: 0x50
	// Line 271, Address: 0x2bded8, Func Offset: 0x58
	// Line 273, Address: 0x2bdeec, Func Offset: 0x6c
	// Line 276, Address: 0x2bdef4, Func Offset: 0x74
	// Line 277, Address: 0x2bdef8, Func Offset: 0x78
	// Func End, Address: 0x2bdf04, Func Offset: 0x84
}

// 
// Start address: 0x2bdf10
void PlayableSubtitleMessageEnd()
{
	// Line 285, Address: 0x2bdf10, Func Offset: 0
	// Line 288, Address: 0x2bdf14, Func Offset: 0x4
	// Line 285, Address: 0x2bdf18, Func Offset: 0x8
	// Line 288, Address: 0x2bdf1c, Func Offset: 0xc
	// Line 292, Address: 0x2bdf34, Func Offset: 0x24
	// Line 293, Address: 0x2bdf4c, Func Offset: 0x3c
	// Line 294, Address: 0x2bdf50, Func Offset: 0x40
	// Line 297, Address: 0x2bdf58, Func Offset: 0x48
	// Func End, Address: 0x2bdf64, Func Offset: 0x54
}

// 
// Start address: 0x2bdf70
void PlayableSubtitleEnd()
{
	// Line 307, Address: 0x2bdf70, Func Offset: 0
	// Line 310, Address: 0x2bdf74, Func Offset: 0x4
	// Func End, Address: 0x2bdf7c, Func Offset: 0xc
}

// 
// Start address: 0x2bdf80
int PlayableSubtitleMessageIsEnd()
{
	// Line 321, Address: 0x2bdf80, Func Offset: 0
	// Line 322, Address: 0x2bdf8c, Func Offset: 0xc
	// Func End, Address: 0x2bdf94, Func Offset: 0x14
}

// 
// Start address: 0x2bdfa0
_SubtitleMessageData* PlayableSubtitleMessageData()
{
	// Line 332, Address: 0x2bdfa0, Func Offset: 0
	// Line 333, Address: 0x2bdfa4, Func Offset: 0x4
	// Func End, Address: 0x2bdfac, Func Offset: 0xc
}

// 
// Start address: 0x2bdfb0
void PlayableSubtitleMessageSetAlpha(unsigned int alpha)
{
	// Line 343, Address: 0x2bdfb0, Func Offset: 0
	// Line 344, Address: 0x2bdfb4, Func Offset: 0x4
	// Func End, Address: 0x2bdfbc, Func Offset: 0xc
}

// 
// Start address: 0x2bdfc0
int PlayableSubtitleMessageForceSetByTime(float time)
{
	int i;
	float wk_time;
	int ret;
	// Line 354, Address: 0x2bdfc0, Func Offset: 0
	// Line 360, Address: 0x2bdfd4, Func Offset: 0x14
	// Line 361, Address: 0x2bdfdc, Func Offset: 0x1c
	// Line 362, Address: 0x2bdfe4, Func Offset: 0x24
	// Line 364, Address: 0x2bdfe8, Func Offset: 0x28
	// Line 365, Address: 0x2bdffc, Func Offset: 0x3c
	// Line 366, Address: 0x2be004, Func Offset: 0x44
	// Line 369, Address: 0x2be008, Func Offset: 0x48
	// Line 370, Address: 0x2be00c, Func Offset: 0x4c
	// Line 379, Address: 0x2be010, Func Offset: 0x50
	// Line 372, Address: 0x2be014, Func Offset: 0x54
	// Line 374, Address: 0x2be024, Func Offset: 0x64
	// Line 373, Address: 0x2be028, Func Offset: 0x68
	// Line 374, Address: 0x2be02c, Func Offset: 0x6c
	// Line 376, Address: 0x2be034, Func Offset: 0x74
	// Line 377, Address: 0x2be03c, Func Offset: 0x7c
	// Line 376, Address: 0x2be040, Func Offset: 0x80
	// Line 379, Address: 0x2be044, Func Offset: 0x84
	// Line 381, Address: 0x2be054, Func Offset: 0x94
	// Line 382, Address: 0x2be068, Func Offset: 0xa8
	// Line 381, Address: 0x2be06c, Func Offset: 0xac
	// Line 383, Address: 0x2be078, Func Offset: 0xb8
	// Line 386, Address: 0x2be080, Func Offset: 0xc0
	// Line 388, Address: 0x2be088, Func Offset: 0xc8
	// Line 391, Address: 0x2be090, Func Offset: 0xd0
	// Func End, Address: 0x2be0a0, Func Offset: 0xe0
}

