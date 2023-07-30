typedef struct EnemyRwMotion;
typedef struct EnemyFmMotion;
typedef struct sfObj;
typedef struct EnemyRwMotionParameter;
typedef struct EnemyFmWork;
typedef struct EnemyRwWork;
typedef union _anon0;
typedef enum EnemyFmMotionParameterType : unsigned char;

typedef void(*type_2)(sfObj*);
typedef void(*type_4)(sfObj*);

typedef _anon0 type_0[256];
typedef EnemyRwMotionParameter type_1[0];
typedef float type_3[4];
typedef short type_5[2];
typedef unsigned short type_6[2];
typedef char type_7[4];
typedef unsigned char type_8[4];
typedef float type_9[1];
typedef int type_10[1];
typedef short type_11[0];
typedef float type_12[4];

struct EnemyRwMotion
{
	short right_foot;
	short left_foot;
	float rate;
	EnemyRwMotionParameter param[0];
};

struct EnemyFmMotion
{
	int max_frame;
	EnemyFmMotionParameterType param_type;
	short param[0];
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

struct EnemyRwMotionParameter
{
	short frame;
	short cond;
};

struct EnemyFmWork
{
	float frame;
	EnemyFmMotion* motion;
	int reset;
};

struct EnemyRwWork
{
	float br[4];
	float bl[4];
	float x;
	float z;
	short frame;
	short cond;
	EnemyRwMotion* motion;
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

enum EnemyFmMotionParameterType : unsigned char
{
	ENEMY_FM_PARAM_Z_ONLY,
	ENEMY_FM_PARAM_X_ONLY,
	ENEMY_FM_PARAM_XZ,
	ENEMY_FM_PARAM_XYZ
};


EnemyRwWork* EnemyRwWorkAllocate(sfObj* obj);
void EnemyRwMotionSet(EnemyRwWork* pw, EnemyRwMotion* pd);
void EnemyRwMove(sfObj* obj, EnemyRwWork* pw);
EnemyFmWork* EnemyFmWorkAllocate(sfObj* obj);
void EnemyFmMotionSet(EnemyFmWork* pw, EnemyFmMotion* pd);
void EnemyFmFrameReset(EnemyFmWork* pw);
void add_sum(float* move, short* param, EnemyFmMotionParameterType mtype, float start_f, float end_f, float max_f);
void EnemyFmMove(sfObj* obj, EnemyFmWork* pw);

// 
// Start address: 0x2010c0
EnemyRwWork* EnemyRwWorkAllocate(sfObj* obj)
{
	// Line 52, Address: 0x2010c0, Func Offset: 0
	// Func End, Address: 0x2010c8, Func Offset: 0x8
}

// 
// Start address: 0x2010d0
void EnemyRwMotionSet(EnemyRwWork* pw, EnemyRwMotion* pd)
{
	// Line 61, Address: 0x2010d0, Func Offset: 0
	// Line 62, Address: 0x2010d4, Func Offset: 0x4
	// Line 63, Address: 0x2010d8, Func Offset: 0x8
	// Line 64, Address: 0x2010dc, Func Offset: 0xc
	// Line 66, Address: 0x2010e0, Func Offset: 0x10
	// Func End, Address: 0x2010e8, Func Offset: 0x18
}

// 
// Start address: 0x2010f0
void EnemyRwMove(sfObj* obj, EnemyRwWork* pw)
{
	int fr;
	EnemyRwMotionParameter* pmp;
	float rpos[4];
	float bpos[4];
	float vec[4];
	float vec2[4];
	float rot[4];
	float rrot[4];
	// Line 73, Address: 0x2010f0, Func Offset: 0
	// Line 81, Address: 0x201108, Func Offset: 0x18
	// Line 83, Address: 0x201114, Func Offset: 0x24
	// Line 84, Address: 0x20111c, Func Offset: 0x2c
	// Line 96, Address: 0x201120, Func Offset: 0x30
	// Line 117, Address: 0x201128, Func Offset: 0x38
	// Line 118, Address: 0x20112c, Func Offset: 0x3c
	// Line 119, Address: 0x201130, Func Offset: 0x40
	// Line 120, Address: 0x201138, Func Offset: 0x48
	// Line 121, Address: 0x20113c, Func Offset: 0x4c
	// Line 122, Address: 0x201158, Func Offset: 0x68
	// Line 123, Address: 0x201164, Func Offset: 0x74
	// Line 125, Address: 0x201168, Func Offset: 0x78
	// Line 126, Address: 0x201170, Func Offset: 0x80
	// Line 127, Address: 0x201184, Func Offset: 0x94
	// Line 128, Address: 0x201190, Func Offset: 0xa0
	// Line 129, Address: 0x2011c4, Func Offset: 0xd4
	// Line 130, Address: 0x2011c8, Func Offset: 0xd8
	// Line 131, Address: 0x2011dc, Func Offset: 0xec
	// Line 132, Address: 0x2011e4, Func Offset: 0xf4
	// Line 133, Address: 0x2011e8, Func Offset: 0xf8
	// Line 134, Address: 0x2011fc, Func Offset: 0x10c
	// Line 136, Address: 0x201204, Func Offset: 0x114
	// Line 137, Address: 0x201208, Func Offset: 0x118
	// Line 138, Address: 0x20121c, Func Offset: 0x12c
	// Line 139, Address: 0x201230, Func Offset: 0x140
	// Line 142, Address: 0x201268, Func Offset: 0x178
	// Line 143, Address: 0x201278, Func Offset: 0x188
	// Line 151, Address: 0x20127c, Func Offset: 0x18c
	// Line 143, Address: 0x201288, Func Offset: 0x198
	// Line 144, Address: 0x20128c, Func Offset: 0x19c
	// Line 145, Address: 0x201290, Func Offset: 0x1a0
	// Line 151, Address: 0x201294, Func Offset: 0x1a4
	// Line 152, Address: 0x20129c, Func Offset: 0x1ac
	// Line 153, Address: 0x2012c8, Func Offset: 0x1d8
	// Line 154, Address: 0x2012d4, Func Offset: 0x1e4
	// Line 155, Address: 0x2012e8, Func Offset: 0x1f8
	// Line 156, Address: 0x201304, Func Offset: 0x214
	// Line 157, Address: 0x201314, Func Offset: 0x224
	// Line 160, Address: 0x201318, Func Offset: 0x228
	// Line 158, Address: 0x20131c, Func Offset: 0x22c
	// Line 160, Address: 0x201320, Func Offset: 0x230
	// Line 157, Address: 0x201328, Func Offset: 0x238
	// Line 158, Address: 0x20132c, Func Offset: 0x23c
	// Line 159, Address: 0x201330, Func Offset: 0x240
	// Line 160, Address: 0x201338, Func Offset: 0x248
	// Line 166, Address: 0x20134c, Func Offset: 0x25c
	// Line 167, Address: 0x20136c, Func Offset: 0x27c
	// Line 168, Address: 0x201370, Func Offset: 0x280
	// Line 169, Address: 0x201374, Func Offset: 0x284
	// Line 171, Address: 0x201378, Func Offset: 0x288
	// Line 172, Address: 0x201388, Func Offset: 0x298
	// Line 173, Address: 0x2013b4, Func Offset: 0x2c4
	// Line 179, Address: 0x2013c0, Func Offset: 0x2d0
	// Line 180, Address: 0x2013d0, Func Offset: 0x2e0
	// Line 181, Address: 0x2013d4, Func Offset: 0x2e4
	// Line 183, Address: 0x201400, Func Offset: 0x310
	// Line 184, Address: 0x201414, Func Offset: 0x324
	// Line 185, Address: 0x20141c, Func Offset: 0x32c
	// Line 186, Address: 0x201420, Func Offset: 0x330
	// Line 187, Address: 0x201434, Func Offset: 0x344
	// Line 189, Address: 0x20143c, Func Offset: 0x34c
	// Line 190, Address: 0x201440, Func Offset: 0x350
	// Line 191, Address: 0x201454, Func Offset: 0x364
	// Line 192, Address: 0x201468, Func Offset: 0x378
	// Line 193, Address: 0x2014a0, Func Offset: 0x3b0
	// Line 195, Address: 0x2014a8, Func Offset: 0x3b8
	// Line 196, Address: 0x2014b4, Func Offset: 0x3c4
	// Line 198, Address: 0x2014b8, Func Offset: 0x3c8
	// Line 199, Address: 0x2014c0, Func Offset: 0x3d0
	// Line 200, Address: 0x2014c8, Func Offset: 0x3d8
	// Line 202, Address: 0x2014cc, Func Offset: 0x3dc
	// Line 203, Address: 0x2014d4, Func Offset: 0x3e4
	// Line 204, Address: 0x2014d8, Func Offset: 0x3e8
	// Line 206, Address: 0x2014e4, Func Offset: 0x3f4
	// Line 207, Address: 0x2014f0, Func Offset: 0x400
	// Line 210, Address: 0x2014f8, Func Offset: 0x408
	// Line 212, Address: 0x201500, Func Offset: 0x410
	// Line 214, Address: 0x20150c, Func Offset: 0x41c
	// Line 215, Address: 0x201518, Func Offset: 0x428
	// Line 217, Address: 0x201520, Func Offset: 0x430
	// Line 220, Address: 0x201524, Func Offset: 0x434
	// Line 221, Address: 0x201528, Func Offset: 0x438
	// Line 222, Address: 0x201538, Func Offset: 0x448
	// Line 223, Address: 0x201554, Func Offset: 0x464
	// Line 224, Address: 0x201564, Func Offset: 0x474
	// Line 225, Address: 0x20156c, Func Offset: 0x47c
	// Line 226, Address: 0x201574, Func Offset: 0x484
	// Line 254, Address: 0x201578, Func Offset: 0x488
	// Func End, Address: 0x201590, Func Offset: 0x4a0
}

// 
// Start address: 0x201590
EnemyFmWork* EnemyFmWorkAllocate(sfObj* obj)
{
	// Line 264, Address: 0x201590, Func Offset: 0
	// Func End, Address: 0x201598, Func Offset: 0x8
}

// 
// Start address: 0x2015a0
void EnemyFmMotionSet(EnemyFmWork* pw, EnemyFmMotion* pd)
{
	// Line 273, Address: 0x2015a0, Func Offset: 0
	// Line 274, Address: 0x2015ac, Func Offset: 0xc
	// Line 275, Address: 0x2015b0, Func Offset: 0x10
	// Line 277, Address: 0x2015b8, Func Offset: 0x18
	// Func End, Address: 0x2015c0, Func Offset: 0x20
}

// 
// Start address: 0x2015c0
void EnemyFmFrameReset(EnemyFmWork* pw)
{
	// Line 284, Address: 0x2015c0, Func Offset: 0
	// Line 285, Address: 0x2015c4, Func Offset: 0x4
	// Func End, Address: 0x2015cc, Func Offset: 0xc
}

// 
// Start address: 0x2015d0
void add_sum(float* move, short* param, EnemyFmMotionParameterType mtype, float start_f, float end_f, float max_f)
{
	int sfi;
	int efi;
	int mfi;
	int sk;
	float d;
	short* pp;
	// Line 310, Address: 0x2015d0, Func Offset: 0
	// Line 311, Address: 0x201608, Func Offset: 0x38
	// Line 312, Address: 0x20162c, Func Offset: 0x5c
	// Line 313, Address: 0x201650, Func Offset: 0x80
	// Line 314, Address: 0x20166c, Func Offset: 0x9c
	// Line 315, Address: 0x201678, Func Offset: 0xa8
	// Line 316, Address: 0x20167c, Func Offset: 0xac
	// Line 317, Address: 0x201680, Func Offset: 0xb0
	// Line 318, Address: 0x201684, Func Offset: 0xb4
	// Line 319, Address: 0x201688, Func Offset: 0xb8
	// Line 320, Address: 0x201694, Func Offset: 0xc4
	// Line 323, Address: 0x2016b0, Func Offset: 0xe0
	// Line 326, Address: 0x2016b8, Func Offset: 0xe8
	// Line 331, Address: 0x2016c0, Func Offset: 0xf0
	// Line 332, Address: 0x2016c8, Func Offset: 0xf8
	// Line 334, Address: 0x2016d0, Func Offset: 0x100
	// Line 335, Address: 0x2016d8, Func Offset: 0x108
	// Line 336, Address: 0x2016e0, Func Offset: 0x110
	// Line 335, Address: 0x2016e4, Func Offset: 0x114
	// Line 336, Address: 0x2016f0, Func Offset: 0x120
	// Line 335, Address: 0x2016f4, Func Offset: 0x124
	// Line 336, Address: 0x2016f8, Func Offset: 0x128
	// Line 338, Address: 0x201728, Func Offset: 0x158
	// Line 339, Address: 0x201750, Func Offset: 0x180
	// Line 341, Address: 0x201758, Func Offset: 0x188
	// Line 342, Address: 0x201780, Func Offset: 0x1b0
	// Line 344, Address: 0x201788, Func Offset: 0x1b8
	// Line 345, Address: 0x2017b4, Func Offset: 0x1e4
	// Line 346, Address: 0x2017d4, Func Offset: 0x204
	// Line 347, Address: 0x2017dc, Func Offset: 0x20c
	// Line 348, Address: 0x2017e0, Func Offset: 0x210
	// Line 349, Address: 0x20180c, Func Offset: 0x23c
	// Line 350, Address: 0x201830, Func Offset: 0x260
	// Line 352, Address: 0x201854, Func Offset: 0x284
	// Line 353, Address: 0x201858, Func Offset: 0x288
	// Line 354, Address: 0x20185c, Func Offset: 0x28c
	// Line 353, Address: 0x201860, Func Offset: 0x290
	// Line 354, Address: 0x201864, Func Offset: 0x294
	// Line 355, Address: 0x201880, Func Offset: 0x2b0
	// Line 356, Address: 0x201890, Func Offset: 0x2c0
	// Line 358, Address: 0x2018b8, Func Offset: 0x2e8
	// Line 359, Address: 0x2018d4, Func Offset: 0x304
	// Line 360, Address: 0x2018dc, Func Offset: 0x30c
	// Line 361, Address: 0x2018e0, Func Offset: 0x310
	// Line 362, Address: 0x2018fc, Func Offset: 0x32c
	// Line 363, Address: 0x201904, Func Offset: 0x334
	// Line 364, Address: 0x201908, Func Offset: 0x338
	// Line 365, Address: 0x201928, Func Offset: 0x358
	// Line 366, Address: 0x201944, Func Offset: 0x374
	// Line 367, Address: 0x20194c, Func Offset: 0x37c
	// Line 368, Address: 0x201950, Func Offset: 0x380
	// Line 369, Address: 0x201970, Func Offset: 0x3a0
	// Line 370, Address: 0x201990, Func Offset: 0x3c0
	// Line 373, Address: 0x2019b0, Func Offset: 0x3e0
	// Line 374, Address: 0x2019b4, Func Offset: 0x3e4
	// Line 375, Address: 0x2019c8, Func Offset: 0x3f8
	// Line 376, Address: 0x2019d8, Func Offset: 0x408
	// Line 378, Address: 0x2019e8, Func Offset: 0x418
	// Line 379, Address: 0x2019fc, Func Offset: 0x42c
	// Line 380, Address: 0x201a34, Func Offset: 0x464
	// Line 381, Address: 0x201a38, Func Offset: 0x468
	// Line 382, Address: 0x201a60, Func Offset: 0x490
	// Line 384, Address: 0x201a68, Func Offset: 0x498
	// Line 385, Address: 0x201a90, Func Offset: 0x4c0
	// Line 387, Address: 0x201a98, Func Offset: 0x4c8
	// Line 388, Address: 0x201ac4, Func Offset: 0x4f4
	// Line 389, Address: 0x201ae4, Func Offset: 0x514
	// Line 390, Address: 0x201aec, Func Offset: 0x51c
	// Line 391, Address: 0x201af0, Func Offset: 0x520
	// Line 392, Address: 0x201b1c, Func Offset: 0x54c
	// Line 393, Address: 0x201b40, Func Offset: 0x570
	// Line 396, Address: 0x201b64, Func Offset: 0x594
	// Line 397, Address: 0x201b68, Func Offset: 0x598
	// Func End, Address: 0x201b70, Func Offset: 0x5a0
}

// 
// Start address: 0x201b70
void EnemyFmMove(sfObj* obj, EnemyFmWork* pw)
{
	float now_frame;
	float old_frame;
	float max_frame;
	float speed;
	float move[4];
	// Line 404, Address: 0x201b70, Func Offset: 0
	// Line 407, Address: 0x201b88, Func Offset: 0x18
	// Line 408, Address: 0x201b94, Func Offset: 0x24
	// Line 409, Address: 0x201b9c, Func Offset: 0x2c
	// Line 413, Address: 0x201ba8, Func Offset: 0x38
	// Line 414, Address: 0x201bb4, Func Offset: 0x44
	// Line 416, Address: 0x201bb8, Func Offset: 0x48
	// Line 418, Address: 0x201bc0, Func Offset: 0x50
	// Line 420, Address: 0x201bc8, Func Offset: 0x58
	// Line 419, Address: 0x201bcc, Func Offset: 0x5c
	// Line 420, Address: 0x201bd0, Func Offset: 0x60
	// Line 421, Address: 0x201bd8, Func Offset: 0x68
	// Line 422, Address: 0x201bec, Func Offset: 0x7c
	// Line 424, Address: 0x201bf8, Func Offset: 0x88
	// Line 426, Address: 0x201c08, Func Offset: 0x98
	// Line 427, Address: 0x201c10, Func Offset: 0xa0
	// Line 430, Address: 0x201c20, Func Offset: 0xb0
	// Line 431, Address: 0x201c34, Func Offset: 0xc4
	// Line 433, Address: 0x201c40, Func Offset: 0xd0
	// Line 435, Address: 0x201c54, Func Offset: 0xe4
	// Line 436, Address: 0x201c60, Func Offset: 0xf0
	// Line 438, Address: 0x201c74, Func Offset: 0x104
	// Line 439, Address: 0x201c78, Func Offset: 0x108
	// Line 444, Address: 0x201c90, Func Offset: 0x120
	// Line 445, Address: 0x201ca8, Func Offset: 0x138
	// Line 446, Address: 0x201cb4, Func Offset: 0x144
	// Line 456, Address: 0x201cb8, Func Offset: 0x148
	// Func End, Address: 0x201cd0, Func Offset: 0x160
}

