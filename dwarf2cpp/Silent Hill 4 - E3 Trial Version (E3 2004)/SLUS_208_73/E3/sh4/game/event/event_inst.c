typedef struct sfObj;
typedef struct _EventInst;
typedef union _anon0;
typedef struct _EventDriver;

typedef int(*type_0)(sfObj*);
typedef int(*type_2)(sfObj*);
typedef int(*type_3)(sfObj*);
typedef int(*type_4)(sfObj*);
typedef void(*type_6)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef void(*type_8)(sfObj*);
typedef int(*type_9)(sfObj*);
typedef int(*type_14)(sfObj*);
typedef int(*type_15)(sfObj*);
typedef int(*type_18)(sfObj*);
typedef int(*type_19)(sfObj*);
typedef int(*type_20)(sfObj*);
typedef int(*type_21)(sfObj*);
typedef int(*type_22)(sfObj*);
typedef int(*type_23)(sfObj*);

typedef _anon0 type_1[4];
typedef _anon0 type_5[256];
typedef short type_10[2];
typedef unsigned short type_11[2];
typedef char type_12[4];
typedef unsigned char type_13[4];
typedef float type_16[1];
typedef int type_17[1];

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

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
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

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon0 val[4];
};


void EventInstSetDataFromDriver(_EventInst* inst, _EventDriver* drv);
int EventInstEventNumber(_EventInst* inst);
void* EventInstInitFunc(_EventInst* inst);
void* EventInstExecFunc(_EventInst* inst);
void* EventInstDrawFunc(_EventInst* inst);
void* EventInstEndFunc(_EventInst* inst);
void* EventInstDrawAfFunc(_EventInst* inst);
void* EventInstEndExitFunc(_EventInst* inst);
void* EventInstLoadfile(_EventInst* inst);
_anon0 EventInstVal(_EventInst* inst, int num);
unsigned int EventInstAttr(_EventInst* inst);
void EventInstSetEventNumber(_EventInst* inst, int evnum);
void EventInstSetTriggerCheckFunc(_EventInst* inst, int(*func)(sfObj*));
void EventInstSetInitFunc(_EventInst* inst, int(*func)(sfObj*));
void EventInstSetExecFunc(_EventInst* inst, int(*func)(sfObj*));
void EventInstSetDrawFunc(_EventInst* inst, int(*func)(sfObj*));
void EventInstSetEndFunc(_EventInst* inst, int(*func)(sfObj*));
void EventInstSetFileList(_EventInst* inst, unsigned int* filelist);
void EventInstSetVal(_EventInst* inst, int num, _anon0 uni);
void EventInstSetValAddr(_EventInst* inst, int num, _anon0* uni);
void EventInstSetStartFadeOut(_EventInst* inst, int flag);
void EventInstSetEndFadeIn(_EventInst* inst, int flag);
void EventInstSetFadeflag(_EventInst* inst, int flag);
void EventInstSetDisableFlagSetFinish(_EventInst* inst, int flag);
void EventInstSetPlayerStop(_EventInst* inst, int flag);
void EventInstSetPlayerMathless(_EventInst* inst, int flag);
void EventInstSetPlayerStopMatchless(_EventInst* inst, int flag);
void EventInstSetSubtitleDisable(_EventInst* inst, int flag);
void EventInstSetGuiDispOff(_EventInst* inst, int flag);
void EventInstSetSitRotMessage(_EventInst* inst, int flag);
void EventInstSetSitMessage(_EventInst* inst, int flag);
void EventInstSetGuiDispOnAtEndDisable(_EventInst* inst, int flag);
void EventInstSetGuiDispOn(_EventInst* inst, int flag);
void EventFadeSetFadeOutTime(float time);
void EventFadeSetFadeInTime(float time);

// 
// Start address: 0x27b3e0
void EventInstSetDataFromDriver(_EventInst* inst, _EventDriver* drv)
{
	// Line 53, Address: 0x27b3e0, Func Offset: 0
	// Func End, Address: 0x27b3e8, Func Offset: 0x8
}

// 
// Start address: 0x27b3f0
int EventInstEventNumber(_EventInst* inst)
{
	// Line 77, Address: 0x27b3f0, Func Offset: 0
	// Func End, Address: 0x27b3f8, Func Offset: 0x8
}

// 
// Start address: 0x27b400
void* EventInstInitFunc(_EventInst* inst)
{
	// Line 88, Address: 0x27b400, Func Offset: 0
	// Func End, Address: 0x27b408, Func Offset: 0x8
}

// 
// Start address: 0x27b410
void* EventInstExecFunc(_EventInst* inst)
{
	// Line 99, Address: 0x27b410, Func Offset: 0
	// Func End, Address: 0x27b418, Func Offset: 0x8
}

// 
// Start address: 0x27b420
void* EventInstDrawFunc(_EventInst* inst)
{
	// Line 110, Address: 0x27b420, Func Offset: 0
	// Func End, Address: 0x27b428, Func Offset: 0x8
}

// 
// Start address: 0x27b430
void* EventInstEndFunc(_EventInst* inst)
{
	// Line 121, Address: 0x27b430, Func Offset: 0
	// Func End, Address: 0x27b438, Func Offset: 0x8
}

// 
// Start address: 0x27b440
void* EventInstDrawAfFunc(_EventInst* inst)
{
	// Line 132, Address: 0x27b440, Func Offset: 0
	// Func End, Address: 0x27b448, Func Offset: 0x8
}

// 
// Start address: 0x27b450
void* EventInstEndExitFunc(_EventInst* inst)
{
	// Line 143, Address: 0x27b450, Func Offset: 0
	// Func End, Address: 0x27b458, Func Offset: 0x8
}

// 
// Start address: 0x27b460
void* EventInstLoadfile(_EventInst* inst)
{
	// Line 154, Address: 0x27b460, Func Offset: 0
	// Func End, Address: 0x27b468, Func Offset: 0x8
}

// 
// Start address: 0x27b470
_anon0 EventInstVal(_EventInst* inst, int num)
{
	// Line 169, Address: 0x27b470, Func Offset: 0
	// Line 170, Address: 0x27b480, Func Offset: 0x10
	// Line 171, Address: 0x27b484, Func Offset: 0x14
	// Line 173, Address: 0x27b488, Func Offset: 0x18
	// Line 174, Address: 0x27b494, Func Offset: 0x24
	// Func End, Address: 0x27b49c, Func Offset: 0x2c
}

// 
// Start address: 0x27b4a0
unsigned int EventInstAttr(_EventInst* inst)
{
	// Line 185, Address: 0x27b4a0, Func Offset: 0
	// Func End, Address: 0x27b4a8, Func Offset: 0x8
}

// 
// Start address: 0x27b4b0
void EventInstSetEventNumber(_EventInst* inst, int evnum)
{
	// Line 197, Address: 0x27b4b0, Func Offset: 0
	// Func End, Address: 0x27b4b8, Func Offset: 0x8
}

// 
// Start address: 0x27b4c0
void EventInstSetTriggerCheckFunc(_EventInst* inst, int(*func)(sfObj*))
{
	// Line 209, Address: 0x27b4c0, Func Offset: 0
	// Func End, Address: 0x27b4c8, Func Offset: 0x8
}

// 
// Start address: 0x27b4d0
void EventInstSetInitFunc(_EventInst* inst, int(*func)(sfObj*))
{
	// Line 221, Address: 0x27b4d0, Func Offset: 0
	// Func End, Address: 0x27b4d8, Func Offset: 0x8
}

// 
// Start address: 0x27b4e0
void EventInstSetExecFunc(_EventInst* inst, int(*func)(sfObj*))
{
	// Line 233, Address: 0x27b4e0, Func Offset: 0
	// Func End, Address: 0x27b4e8, Func Offset: 0x8
}

// 
// Start address: 0x27b4f0
void EventInstSetDrawFunc(_EventInst* inst, int(*func)(sfObj*))
{
	// Line 245, Address: 0x27b4f0, Func Offset: 0
	// Func End, Address: 0x27b4f8, Func Offset: 0x8
}

// 
// Start address: 0x27b500
void EventInstSetEndFunc(_EventInst* inst, int(*func)(sfObj*))
{
	// Line 257, Address: 0x27b500, Func Offset: 0
	// Func End, Address: 0x27b508, Func Offset: 0x8
}

// 
// Start address: 0x27b510
void EventInstSetFileList(_EventInst* inst, unsigned int* filelist)
{
	// Line 269, Address: 0x27b510, Func Offset: 0
	// Func End, Address: 0x27b518, Func Offset: 0x8
}

// 
// Start address: 0x27b520
void EventInstSetVal(_EventInst* inst, int num, _anon0 uni)
{
	// Line 280, Address: 0x27b520, Func Offset: 0
	// Line 282, Address: 0x27b524, Func Offset: 0x4
	// Line 283, Address: 0x27b538, Func Offset: 0x18
	// Line 284, Address: 0x27b53c, Func Offset: 0x1c
	// Line 286, Address: 0x27b540, Func Offset: 0x20
	// Line 287, Address: 0x27b554, Func Offset: 0x34
	// Func End, Address: 0x27b55c, Func Offset: 0x3c
}

// 
// Start address: 0x27b560
void EventInstSetValAddr(_EventInst* inst, int num, _anon0* uni)
{
	// Line 300, Address: 0x27b560, Func Offset: 0
	// Line 301, Address: 0x27b570, Func Offset: 0x10
	// Line 302, Address: 0x27b574, Func Offset: 0x14
	// Line 304, Address: 0x27b578, Func Offset: 0x18
	// Line 305, Address: 0x27b580, Func Offset: 0x20
	// Func End, Address: 0x27b588, Func Offset: 0x28
}

// 
// Start address: 0x27b590
void EventInstSetStartFadeOut(_EventInst* inst, int flag)
{
	// Line 358, Address: 0x27b590, Func Offset: 0
	// Line 359, Address: 0x27b59c, Func Offset: 0xc
	// Line 360, Address: 0x27b5a4, Func Offset: 0x14
	// Line 362, Address: 0x27b5b0, Func Offset: 0x20
	// Line 364, Address: 0x27b5c0, Func Offset: 0x30
	// Func End, Address: 0x27b5d4, Func Offset: 0x44
}

// 
// Start address: 0x27b5e0
void EventInstSetEndFadeIn(_EventInst* inst, int flag)
{
	// Line 377, Address: 0x27b5e0, Func Offset: 0
	// Line 378, Address: 0x27b5ec, Func Offset: 0xc
	// Line 379, Address: 0x27b5f4, Func Offset: 0x14
	// Line 381, Address: 0x27b600, Func Offset: 0x20
	// Line 383, Address: 0x27b610, Func Offset: 0x30
	// Func End, Address: 0x27b624, Func Offset: 0x44
}

// 
// Start address: 0x27b630
void EventInstSetFadeflag(_EventInst* inst, int flag)
{
	// Line 398, Address: 0x27b630, Func Offset: 0
	// Line 399, Address: 0x27b644, Func Offset: 0x14
	// Line 400, Address: 0x27b64c, Func Offset: 0x1c
	// Line 401, Address: 0x27b658, Func Offset: 0x28
	// Func End, Address: 0x27b66c, Func Offset: 0x3c
}

// 
// Start address: 0x27b670
void EventInstSetDisableFlagSetFinish(_EventInst* inst, int flag)
{
	// Line 431, Address: 0x27b670, Func Offset: 0
	// Line 432, Address: 0x27b67c, Func Offset: 0xc
	// Line 433, Address: 0x27b684, Func Offset: 0x14
	// Line 435, Address: 0x27b690, Func Offset: 0x20
	// Line 437, Address: 0x27b6a0, Func Offset: 0x30
	// Func End, Address: 0x27b6a8, Func Offset: 0x38
}

// 
// Start address: 0x27b6b0
void EventInstSetPlayerStop(_EventInst* inst, int flag)
{
	// Line 450, Address: 0x27b6b0, Func Offset: 0
	// Line 451, Address: 0x27b6bc, Func Offset: 0xc
	// Line 452, Address: 0x27b6c4, Func Offset: 0x14
	// Line 454, Address: 0x27b6d0, Func Offset: 0x20
	// Line 456, Address: 0x27b6e0, Func Offset: 0x30
	// Func End, Address: 0x27b6e8, Func Offset: 0x38
}

// 
// Start address: 0x27b6f0
void EventInstSetPlayerMathless(_EventInst* inst, int flag)
{
	// Line 469, Address: 0x27b6f0, Func Offset: 0
	// Line 470, Address: 0x27b6fc, Func Offset: 0xc
	// Line 471, Address: 0x27b704, Func Offset: 0x14
	// Line 473, Address: 0x27b710, Func Offset: 0x20
	// Line 475, Address: 0x27b720, Func Offset: 0x30
	// Func End, Address: 0x27b728, Func Offset: 0x38
}

// 
// Start address: 0x27b730
void EventInstSetPlayerStopMatchless(_EventInst* inst, int flag)
{
	// Line 487, Address: 0x27b730, Func Offset: 0
	// Line 488, Address: 0x27b744, Func Offset: 0x14
	// Line 489, Address: 0x27b74c, Func Offset: 0x1c
	// Line 490, Address: 0x27b758, Func Offset: 0x28
	// Func End, Address: 0x27b76c, Func Offset: 0x3c
}

// 
// Start address: 0x27b770
void EventInstSetSubtitleDisable(_EventInst* inst, int flag)
{
	// Line 523, Address: 0x27b770, Func Offset: 0
	// Line 524, Address: 0x27b77c, Func Offset: 0xc
	// Line 525, Address: 0x27b784, Func Offset: 0x14
	// Line 527, Address: 0x27b790, Func Offset: 0x20
	// Line 529, Address: 0x27b7a0, Func Offset: 0x30
	// Func End, Address: 0x27b7a8, Func Offset: 0x38
}

// 
// Start address: 0x27b7b0
void EventInstSetGuiDispOff(_EventInst* inst, int flag)
{
	// Line 541, Address: 0x27b7b0, Func Offset: 0
	// Line 542, Address: 0x27b7bc, Func Offset: 0xc
	// Line 543, Address: 0x27b7c4, Func Offset: 0x14
	// Line 545, Address: 0x27b7d0, Func Offset: 0x20
	// Line 547, Address: 0x27b7e0, Func Offset: 0x30
	// Func End, Address: 0x27b7e8, Func Offset: 0x38
}

// 
// Start address: 0x27b7f0
void EventInstSetSitRotMessage(_EventInst* inst, int flag)
{
	// Line 560, Address: 0x27b7f0, Func Offset: 0
	// Line 561, Address: 0x27b7fc, Func Offset: 0xc
	// Line 562, Address: 0x27b804, Func Offset: 0x14
	// Line 564, Address: 0x27b810, Func Offset: 0x20
	// Line 566, Address: 0x27b820, Func Offset: 0x30
	// Func End, Address: 0x27b828, Func Offset: 0x38
}

// 
// Start address: 0x27b830
void EventInstSetSitMessage(_EventInst* inst, int flag)
{
	// Line 579, Address: 0x27b830, Func Offset: 0
	// Line 580, Address: 0x27b83c, Func Offset: 0xc
	// Line 581, Address: 0x27b844, Func Offset: 0x14
	// Line 583, Address: 0x27b850, Func Offset: 0x20
	// Line 585, Address: 0x27b860, Func Offset: 0x30
	// Func End, Address: 0x27b868, Func Offset: 0x38
}

// 
// Start address: 0x27b870
void EventInstSetGuiDispOnAtEndDisable(_EventInst* inst, int flag)
{
	// Line 597, Address: 0x27b870, Func Offset: 0
	// Line 598, Address: 0x27b87c, Func Offset: 0xc
	// Line 599, Address: 0x27b884, Func Offset: 0x14
	// Line 601, Address: 0x27b890, Func Offset: 0x20
	// Line 603, Address: 0x27b8a0, Func Offset: 0x30
	// Func End, Address: 0x27b8a8, Func Offset: 0x38
}

// 
// Start address: 0x27b8b0
void EventInstSetGuiDispOn(_EventInst* inst, int flag)
{
	// Line 615, Address: 0x27b8b0, Func Offset: 0
	// Line 616, Address: 0x27b8bc, Func Offset: 0xc
	// Line 617, Address: 0x27b8c4, Func Offset: 0x14
	// Line 619, Address: 0x27b8d0, Func Offset: 0x20
	// Line 621, Address: 0x27b8e0, Func Offset: 0x30
	// Func End, Address: 0x27b8e8, Func Offset: 0x38
}

// 
// Start address: 0x27b8f0
void EventFadeSetFadeOutTime(float time)
{
	// Line 630, Address: 0x27b8f0, Func Offset: 0
	// Line 631, Address: 0x27b8fc, Func Offset: 0xc
	// Line 632, Address: 0x27b908, Func Offset: 0x18
	// Func End, Address: 0x27b918, Func Offset: 0x28
}

// 
// Start address: 0x27b920
void EventFadeSetFadeInTime(float time)
{
	// Line 641, Address: 0x27b920, Func Offset: 0
	// Line 642, Address: 0x27b92c, Func Offset: 0xc
	// Line 643, Address: 0x27b938, Func Offset: 0x18
	// Func End, Address: 0x27b948, Func Offset: 0x28
}

