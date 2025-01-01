typedef struct sfMessageRect;
typedef enum sfMessageType : unsigned char;
typedef struct MessageHandleWork;
typedef enum sfMessageAlignRow : unsigned char;
typedef enum _enum : unsigned char;
typedef enum sfMessageAlignColumn : unsigned char;
typedef enum MessageStatus : unsigned char;
typedef enum MessageSelectType : unsigned char;


typedef _enum type_0[3];
typedef sfMessageRect type_1[4];
typedef sfMessageRect type_2[5];
typedef int type_3[4];
typedef unsigned int type_4[12];

struct sfMessageRect
{
	short x;
	short y;
	short w;
	short h;
};

enum sfMessageType : unsigned char
{
	SF_MES_TYPE_NORMAL,
	SF_MES_TYPE_KEY,
	SF_MES_TYPE_TIME,
	SF_MES_TYPE_BOTH,
	SF_MES_TYPE_SELECT,
	SF_MES_TYPE_YESNO
};

struct MessageHandleWork
{
	MessageStatus status;
	sfMessageType type;
	float count;
	float count2;
	unsigned int flag;
	int max;
	unsigned short* mes_adr;
	unsigned short* next_adr;
	int width;
	int height;
	int exp_pos_x;
	int exp_pos_y;
	int select;
	MessageSelectType select_type;
	int select_max;
	sfMessageRect select_rect[4];
	sfMessageRect target_rect;
	sfMessageRect past_rect[5];
	unsigned int alpha;
	unsigned int demo_alpha;
	int decision_sound[4];
	int cancel_no;
	int page_no;
};

enum sfMessageAlignRow : unsigned char
{
	SF_MES_ALIGN_LEFT,
	SF_MES_ALIGN_CENTER,
	SF_MES_ALIGN_RIGHT,
	SF_MES_ALIGN_MAXLEFT,
	SF_MES_ALIGN_MAXRIGHT
};

enum _enum : unsigned char
{
	KEY_ACTION,
	KEY_CANCEL,
	KEY_MAP,
	KEY_PAUSE,
	KEY_ITEMINFO,
	KEY_ITEM_L,
	KEY_ITEM_R,
	KEY_PARALLEL_L,
	KEY_PARALLEL_R,
	KEY_SEARCHVIEW,
	KEY_FIGHTING_POSE,
	KEY_USEITEM,
	KEY_AVOIDANCE,
	KEY_DEMOSKIP,
	KEY_EVENT_TRG,
	KEY_3LDK_CAM_RESET,
	MAX_KEY_NUM
};

enum sfMessageAlignColumn : unsigned char
{
	SF_MES_ALIGN_TOP,
	SF_MES_ALIGN_MIDDLE,
	SF_MES_ALIGN_BOTTOM,
	SF_MES_ALIGN_MIDDLE_A
};

enum MessageStatus : unsigned char
{
	MES_STATUS_NOTHING,
	MES_STATUS_WAIT,
	MES_STATUS_END,
	MES_STATUS_SELECT,
	MES_STATUS_SELECT_END,
	MES_STATUS_EXPLANATION,
	MES_STATUS_MEMO,
	MES_STATUS_DEMO,
	MES_STATUS_PLAYABLE
};

enum MessageSelectType : unsigned char
{
	SELECT_TYPE_NOTHING,
	SELECT_TYPE_LENGTHWISE_2,
	SELECT_TYPE_LENGTHWISE_3,
	SELECT_TYPE_LENGTHWISE_4,
	SELECT_TYPE_CROSSWISE_2,
	SELECT_TYPE_CROSSWISE_3,
	SELECT_TYPE_CROSSWISE_4,
	SELECT_TYPE_TRIANGLE_V,
	SELECT_TYPE_TRIANGLE_A,
	SELECT_TYPE_RECTANGLE
};

MessageHandleWork m_handle_work;
unsigned int icon_num[12];
_enum key_num[3];

void MessageInit();
MessageStatus MessageStatusCheck();
void decision_sound_reset();
void MessageClear();
void set_select_type();
void MessageSubtitlesPut(int packid, int id);
int MessageSubtitlesNext();
void MessageDemoSubtitlesPut(int packid, int id);
void MessagePlayableSubtitlesPut(int packid, int id);
void MessageExplanationSetPos(int pos_x, int pos_y);
void MessageExplanationPut(int packid, int id);
int MessageExplanationNext();
void MessageMemoPut(int packid, int id);
int MessageMemoNext();
void MessagePut(int packid, int id, int pos_x, int pos_y);
void MessagePutAlign(int packid, int id, int pos_x, int pos_y, sfMessageAlignRow align1, sfMessageAlignColumn align2);
void MessageSetAlpha(unsigned int alpha);
void MessageSetDemoAlpha(unsigned int alpha);
void MessageChangeDecisionSound(int select_no, int se_no);
void MessageChangeButtonIcon();
int MessageGetWidth();
int MessageGetHeight();
int MessageNowPage();
void MessageSoundCallNext();
void MessageSoundCallCancel();
void MessageSoundCallDecision();
void MessageSoundCallSelect();
int MessageKeyCheckNext();
int MessageKeyCheckDecision();
int MessageKeyCheckCancel();
int MessageKeyCheck(unsigned int pad);
void MessageKeyCheckNormal();
void MessageKeyCheckSelect();
int roundup(float src);
void rect_move(sfMessageRect* rect, sfMessageRect* target);
void MessageUiSuspend();
void MessageUiResume();
int is_pausing();
void MessageHandle();
int MessageNowSelect();

// 
// Start address: 0x1b3a70
void MessageInit()
{
	// Line 107, Address: 0x1b3a70, Func Offset: 0
	// Line 108, Address: 0x1b3a74, Func Offset: 0x4
	// Line 107, Address: 0x1b3a78, Func Offset: 0x8
	// Line 108, Address: 0x1b3a7c, Func Offset: 0xc
	// Line 109, Address: 0x1b3a88, Func Offset: 0x18
	// Line 110, Address: 0x1b3a90, Func Offset: 0x20
	// Line 111, Address: 0x1b3a98, Func Offset: 0x28
	// Line 112, Address: 0x1b3aa0, Func Offset: 0x30
	// Line 113, Address: 0x1b3aa8, Func Offset: 0x38
	// Line 114, Address: 0x1b3ab0, Func Offset: 0x40
	// Func End, Address: 0x1b3abc, Func Offset: 0x4c
}

// 
// Start address: 0x1b3ac0
MessageStatus MessageStatusCheck()
{
	// Line 121, Address: 0x1b3ac0, Func Offset: 0
	// Line 122, Address: 0x1b3ac4, Func Offset: 0x4
	// Func End, Address: 0x1b3acc, Func Offset: 0xc
}

// 
// Start address: 0x1b3ad0
void decision_sound_reset()
{
	// Line 130, Address: 0x1b3ad0, Func Offset: 0
	// Line 132, Address: 0x1b3af0, Func Offset: 0x20
	// Func End, Address: 0x1b3af8, Func Offset: 0x28
}

// 
// Start address: 0x1b3b00
void MessageClear()
{
	// Line 140, Address: 0x1b3b00, Func Offset: 0
	// Line 143, Address: 0x1b3b04, Func Offset: 0x4
	// Line 140, Address: 0x1b3b08, Func Offset: 0x8
	// Line 141, Address: 0x1b3b0c, Func Offset: 0xc
	// Line 143, Address: 0x1b3b14, Func Offset: 0x14
	// Line 144, Address: 0x1b3b1c, Func Offset: 0x1c
	// Line 146, Address: 0x1b3b20, Func Offset: 0x20
	// Line 144, Address: 0x1b3b24, Func Offset: 0x24
	// Line 145, Address: 0x1b3b28, Func Offset: 0x28
	// Line 146, Address: 0x1b3b30, Func Offset: 0x30
	// Line 147, Address: 0x1b3b38, Func Offset: 0x38
	// Line 148, Address: 0x1b3b40, Func Offset: 0x40
	// Line 150, Address: 0x1b3b44, Func Offset: 0x44
	// Func End, Address: 0x1b3b4c, Func Offset: 0x4c
}

// 
// Start address: 0x1b3b50
void set_select_type()
{
	MessageSelectType type;
	sfMessageRect* rect;
	// Line 172, Address: 0x1b3b50, Func Offset: 0
	// Line 171, Address: 0x1b3b54, Func Offset: 0x4
	// Line 172, Address: 0x1b3b58, Func Offset: 0x8
	// Line 167, Address: 0x1b3b60, Func Offset: 0x10
	// Line 172, Address: 0x1b3b64, Func Offset: 0x14
	// Line 174, Address: 0x1b3b88, Func Offset: 0x38
	// Line 176, Address: 0x1b3b98, Func Offset: 0x48
	// Line 179, Address: 0x1b3ba0, Func Offset: 0x50
	// Line 181, Address: 0x1b3bac, Func Offset: 0x5c
	// Line 182, Address: 0x1b3bb8, Func Offset: 0x68
	// Line 184, Address: 0x1b3bc4, Func Offset: 0x74
	// Line 187, Address: 0x1b3bd0, Func Offset: 0x80
	// Line 188, Address: 0x1b3bd8, Func Offset: 0x88
	// Line 190, Address: 0x1b3be4, Func Offset: 0x94
	// Line 194, Address: 0x1b3bf0, Func Offset: 0xa0
	// Line 196, Address: 0x1b3bfc, Func Offset: 0xac
	// Line 197, Address: 0x1b3c08, Func Offset: 0xb8
	// Line 199, Address: 0x1b3c14, Func Offset: 0xc4
	// Line 202, Address: 0x1b3c20, Func Offset: 0xd0
	// Line 203, Address: 0x1b3c28, Func Offset: 0xd8
	// Line 206, Address: 0x1b3c2c, Func Offset: 0xdc
	// Line 207, Address: 0x1b3c30, Func Offset: 0xe0
	// Line 208, Address: 0x1b3c34, Func Offset: 0xe4
	// Func End, Address: 0x1b3c3c, Func Offset: 0xec
}

// 
// Start address: 0x1b3c40
void MessageSubtitlesPut(int packid, int id)
{
	unsigned short* mes;
	// Line 215, Address: 0x1b3c40, Func Offset: 0
	// Line 218, Address: 0x1b3c48, Func Offset: 0x8
	// Line 219, Address: 0x1b3c50, Func Offset: 0x10
	// Line 220, Address: 0x1b3c54, Func Offset: 0x14
	// Line 219, Address: 0x1b3c58, Func Offset: 0x18
	// Line 222, Address: 0x1b3c5c, Func Offset: 0x1c
	// Line 221, Address: 0x1b3c60, Func Offset: 0x20
	// Line 222, Address: 0x1b3c64, Func Offset: 0x24
	// Line 221, Address: 0x1b3c68, Func Offset: 0x28
	// Line 220, Address: 0x1b3c70, Func Offset: 0x30
	// Line 223, Address: 0x1b3c80, Func Offset: 0x40
	// Line 224, Address: 0x1b3c88, Func Offset: 0x48
	// Line 225, Address: 0x1b3c90, Func Offset: 0x50
	// Func End, Address: 0x1b3c9c, Func Offset: 0x5c
}

// 
// Start address: 0x1b3ca0
int MessageSubtitlesNext()
{
	unsigned short* mes;
	sfMessageType type;
	MessageStatus status;
	int i;
	int mp;
	int* pos_x;
	int* pos_y;
	int* pos_w;
	int lines;
	// Line 231, Address: 0x1b3ca0, Func Offset: 0
	// Line 232, Address: 0x1b3ca4, Func Offset: 0x4
	// Line 231, Address: 0x1b3ca8, Func Offset: 0x8
	// Line 232, Address: 0x1b3cbc, Func Offset: 0x1c
	// Line 235, Address: 0x1b3cc0, Func Offset: 0x20
	// Line 237, Address: 0x1b3cc8, Func Offset: 0x28
	// Line 238, Address: 0x1b3cd0, Func Offset: 0x30
	// Line 239, Address: 0x1b3cd8, Func Offset: 0x38
	// Line 240, Address: 0x1b3ce4, Func Offset: 0x44
	// Line 242, Address: 0x1b3ce8, Func Offset: 0x48
	// Line 241, Address: 0x1b3cf0, Func Offset: 0x50
	// Line 243, Address: 0x1b3d00, Func Offset: 0x60
	// Line 244, Address: 0x1b3d08, Func Offset: 0x68
	// Line 245, Address: 0x1b3d14, Func Offset: 0x74
	// Line 248, Address: 0x1b3d5c, Func Offset: 0xbc
	// Line 249, Address: 0x1b3d64, Func Offset: 0xc4
	// Line 250, Address: 0x1b3d70, Func Offset: 0xd0
	// Line 251, Address: 0x1b3d7c, Func Offset: 0xdc
	// Line 252, Address: 0x1b3d88, Func Offset: 0xe8
	// Line 253, Address: 0x1b3d90, Func Offset: 0xf0
	// Line 252, Address: 0x1b3d94, Func Offset: 0xf4
	// Line 253, Address: 0x1b3d98, Func Offset: 0xf8
	// Line 254, Address: 0x1b3d9c, Func Offset: 0xfc
	// Line 255, Address: 0x1b3da0, Func Offset: 0x100
	// Line 256, Address: 0x1b3db4, Func Offset: 0x114
	// Line 258, Address: 0x1b3dc0, Func Offset: 0x120
	// Line 259, Address: 0x1b3dcc, Func Offset: 0x12c
	// Line 260, Address: 0x1b3de0, Func Offset: 0x140
	// Line 261, Address: 0x1b3dec, Func Offset: 0x14c
	// Line 262, Address: 0x1b3e00, Func Offset: 0x160
	// Line 263, Address: 0x1b3e04, Func Offset: 0x164
	// Line 264, Address: 0x1b3e0c, Func Offset: 0x16c
	// Line 265, Address: 0x1b3e18, Func Offset: 0x178
	// Line 264, Address: 0x1b3e1c, Func Offset: 0x17c
	// Line 268, Address: 0x1b3e20, Func Offset: 0x180
	// Line 265, Address: 0x1b3e24, Func Offset: 0x184
	// Line 268, Address: 0x1b3e30, Func Offset: 0x190
	// Line 265, Address: 0x1b3e40, Func Offset: 0x1a0
	// Line 268, Address: 0x1b3e48, Func Offset: 0x1a8
	// Line 265, Address: 0x1b3e5c, Func Offset: 0x1bc
	// Line 270, Address: 0x1b3e60, Func Offset: 0x1c0
	// Line 265, Address: 0x1b3e64, Func Offset: 0x1c4
	// Line 268, Address: 0x1b3e88, Func Offset: 0x1e8
	// Line 271, Address: 0x1b3f24, Func Offset: 0x284
	// Line 273, Address: 0x1b3f3c, Func Offset: 0x29c
	// Line 274, Address: 0x1b3f48, Func Offset: 0x2a8
	// Line 276, Address: 0x1b3f64, Func Offset: 0x2c4
	// Line 278, Address: 0x1b3f70, Func Offset: 0x2d0
	// Line 276, Address: 0x1b3f74, Func Offset: 0x2d4
	// Line 278, Address: 0x1b3f78, Func Offset: 0x2d8
	// Line 279, Address: 0x1b3f80, Func Offset: 0x2e0
	// Line 276, Address: 0x1b3f8c, Func Offset: 0x2ec
	// Line 280, Address: 0x1b3f90, Func Offset: 0x2f0
	// Line 276, Address: 0x1b3f94, Func Offset: 0x2f4
	// Line 282, Address: 0x1b3f98, Func Offset: 0x2f8
	// Line 283, Address: 0x1b3fa4, Func Offset: 0x304
	// Line 280, Address: 0x1b3fb0, Func Offset: 0x310
	// Line 284, Address: 0x1b3fbc, Func Offset: 0x31c
	// Line 285, Address: 0x1b3fc8, Func Offset: 0x328
	// Line 284, Address: 0x1b3fcc, Func Offset: 0x32c
	// Line 288, Address: 0x1b3fd0, Func Offset: 0x330
	// Line 285, Address: 0x1b3fd4, Func Offset: 0x334
	// Line 288, Address: 0x1b3fe0, Func Offset: 0x340
	// Line 285, Address: 0x1b3ff0, Func Offset: 0x350
	// Line 288, Address: 0x1b3ff8, Func Offset: 0x358
	// Line 285, Address: 0x1b400c, Func Offset: 0x36c
	// Line 291, Address: 0x1b4010, Func Offset: 0x370
	// Line 285, Address: 0x1b4014, Func Offset: 0x374
	// Line 291, Address: 0x1b4018, Func Offset: 0x378
	// Line 285, Address: 0x1b401c, Func Offset: 0x37c
	// Line 290, Address: 0x1b4020, Func Offset: 0x380
	// Line 285, Address: 0x1b4024, Func Offset: 0x384
	// Line 288, Address: 0x1b4040, Func Offset: 0x3a0
	// Line 292, Address: 0x1b40e0, Func Offset: 0x440
	// Line 293, Address: 0x1b40e8, Func Offset: 0x448
	// Line 297, Address: 0x1b40f0, Func Offset: 0x450
	// Line 299, Address: 0x1b40f8, Func Offset: 0x458
	// Line 300, Address: 0x1b4108, Func Offset: 0x468
	// Line 299, Address: 0x1b410c, Func Offset: 0x46c
	// Line 303, Address: 0x1b4128, Func Offset: 0x488
	// Line 305, Address: 0x1b4130, Func Offset: 0x490
	// Line 302, Address: 0x1b4134, Func Offset: 0x494
	// Line 304, Address: 0x1b413c, Func Offset: 0x49c
	// Line 305, Address: 0x1b414c, Func Offset: 0x4ac
	// Line 306, Address: 0x1b4154, Func Offset: 0x4b4
	// Line 307, Address: 0x1b415c, Func Offset: 0x4bc
	// Line 308, Address: 0x1b4160, Func Offset: 0x4c0
	// Func End, Address: 0x1b417c, Func Offset: 0x4dc
}

// 
// Start address: 0x1b4180
void MessageDemoSubtitlesPut(int packid, int id)
{
	unsigned short* mes;
	// Line 315, Address: 0x1b4180, Func Offset: 0
	// Line 318, Address: 0x1b418c, Func Offset: 0xc
	// Line 319, Address: 0x1b4198, Func Offset: 0x18
	// Line 324, Address: 0x1b41a0, Func Offset: 0x20
	// Line 325, Address: 0x1b41a8, Func Offset: 0x28
	// Line 326, Address: 0x1b41b0, Func Offset: 0x30
	// Line 329, Address: 0x1b41b8, Func Offset: 0x38
	// Line 328, Address: 0x1b41c0, Func Offset: 0x40
	// Line 330, Address: 0x1b41d0, Func Offset: 0x50
	// Line 331, Address: 0x1b41d8, Func Offset: 0x58
	// Line 332, Address: 0x1b41e4, Func Offset: 0x64
	// Line 335, Address: 0x1b422c, Func Offset: 0xac
	// Line 336, Address: 0x1b4238, Func Offset: 0xb8
	// Line 337, Address: 0x1b4244, Func Offset: 0xc4
	// Line 344, Address: 0x1b4250, Func Offset: 0xd0
	// Line 347, Address: 0x1b4254, Func Offset: 0xd4
	// Line 344, Address: 0x1b4258, Func Offset: 0xd8
	// Line 349, Address: 0x1b425c, Func Offset: 0xdc
	// Line 347, Address: 0x1b4260, Func Offset: 0xe0
	// Line 348, Address: 0x1b4268, Func Offset: 0xe8
	// Line 345, Address: 0x1b4274, Func Offset: 0xf4
	// Line 346, Address: 0x1b427c, Func Offset: 0xfc
	// Line 349, Address: 0x1b4280, Func Offset: 0x100
	// Line 350, Address: 0x1b4288, Func Offset: 0x108
	// Line 351, Address: 0x1b4290, Func Offset: 0x110
	// Func End, Address: 0x1b42a4, Func Offset: 0x124
}

// 
// Start address: 0x1b42b0
void MessagePlayableSubtitlesPut(int packid, int id)
{
	unsigned short* mes;
	// Line 358, Address: 0x1b42b0, Func Offset: 0
	// Line 361, Address: 0x1b42bc, Func Offset: 0xc
	// Line 362, Address: 0x1b42c8, Func Offset: 0x18
	// Line 367, Address: 0x1b42d0, Func Offset: 0x20
	// Line 368, Address: 0x1b42d8, Func Offset: 0x28
	// Line 369, Address: 0x1b42e0, Func Offset: 0x30
	// Line 372, Address: 0x1b42e8, Func Offset: 0x38
	// Line 371, Address: 0x1b42f0, Func Offset: 0x40
	// Line 373, Address: 0x1b4300, Func Offset: 0x50
	// Line 374, Address: 0x1b4308, Func Offset: 0x58
	// Line 375, Address: 0x1b4314, Func Offset: 0x64
	// Line 378, Address: 0x1b435c, Func Offset: 0xac
	// Line 379, Address: 0x1b4368, Func Offset: 0xb8
	// Line 380, Address: 0x1b4374, Func Offset: 0xc4
	// Line 387, Address: 0x1b4380, Func Offset: 0xd0
	// Line 390, Address: 0x1b4384, Func Offset: 0xd4
	// Line 387, Address: 0x1b4388, Func Offset: 0xd8
	// Line 392, Address: 0x1b438c, Func Offset: 0xdc
	// Line 390, Address: 0x1b4390, Func Offset: 0xe0
	// Line 391, Address: 0x1b4398, Func Offset: 0xe8
	// Line 388, Address: 0x1b43a4, Func Offset: 0xf4
	// Line 389, Address: 0x1b43ac, Func Offset: 0xfc
	// Line 392, Address: 0x1b43b0, Func Offset: 0x100
	// Line 393, Address: 0x1b43b8, Func Offset: 0x108
	// Line 394, Address: 0x1b43c0, Func Offset: 0x110
	// Func End, Address: 0x1b43d4, Func Offset: 0x124
}

// 
// Start address: 0x1b43e0
void MessageExplanationSetPos(int pos_x, int pos_y)
{
	// Line 402, Address: 0x1b43e0, Func Offset: 0
	// Line 403, Address: 0x1b43e8, Func Offset: 0x8
	// Line 404, Address: 0x1b43ec, Func Offset: 0xc
	// Func End, Address: 0x1b43f4, Func Offset: 0x14
}

// 
// Start address: 0x1b4400
void MessageExplanationPut(int packid, int id)
{
	unsigned short* mes;
	// Line 411, Address: 0x1b4400, Func Offset: 0
	// Line 414, Address: 0x1b4408, Func Offset: 0x8
	// Line 415, Address: 0x1b4410, Func Offset: 0x10
	// Line 417, Address: 0x1b4418, Func Offset: 0x18
	// Line 416, Address: 0x1b441c, Func Offset: 0x1c
	// Line 417, Address: 0x1b4420, Func Offset: 0x20
	// Line 416, Address: 0x1b4424, Func Offset: 0x24
	// Line 418, Address: 0x1b4434, Func Offset: 0x34
	// Line 419, Address: 0x1b443c, Func Offset: 0x3c
	// Func End, Address: 0x1b4448, Func Offset: 0x48
}

// 
// Start address: 0x1b4450
int MessageExplanationNext()
{
	unsigned short* mes;
	// Line 425, Address: 0x1b4450, Func Offset: 0
	// Line 426, Address: 0x1b4454, Func Offset: 0x4
	// Line 425, Address: 0x1b4458, Func Offset: 0x8
	// Line 426, Address: 0x1b4464, Func Offset: 0x14
	// Line 427, Address: 0x1b4468, Func Offset: 0x18
	// Line 429, Address: 0x1b4470, Func Offset: 0x20
	// Line 430, Address: 0x1b4478, Func Offset: 0x28
	// Line 431, Address: 0x1b4480, Func Offset: 0x30
	// Line 432, Address: 0x1b448c, Func Offset: 0x3c
	// Line 434, Address: 0x1b4490, Func Offset: 0x40
	// Line 433, Address: 0x1b4498, Func Offset: 0x48
	// Line 435, Address: 0x1b44a8, Func Offset: 0x58
	// Line 436, Address: 0x1b44b0, Func Offset: 0x60
	// Line 437, Address: 0x1b44b8, Func Offset: 0x68
	// Line 438, Address: 0x1b44c4, Func Offset: 0x74
	// Line 442, Address: 0x1b451c, Func Offset: 0xcc
	// Line 443, Address: 0x1b4524, Func Offset: 0xd4
	// Line 444, Address: 0x1b452c, Func Offset: 0xdc
	// Line 445, Address: 0x1b4538, Func Offset: 0xe8
	// Line 446, Address: 0x1b4548, Func Offset: 0xf8
	// Line 447, Address: 0x1b4554, Func Offset: 0x104
	// Line 448, Address: 0x1b4558, Func Offset: 0x108
	// Line 452, Address: 0x1b4564, Func Offset: 0x114
	// Line 448, Address: 0x1b4568, Func Offset: 0x118
	// Line 450, Address: 0x1b456c, Func Offset: 0x11c
	// Line 449, Address: 0x1b4578, Func Offset: 0x128
	// Line 451, Address: 0x1b4580, Func Offset: 0x130
	// Line 452, Address: 0x1b4590, Func Offset: 0x140
	// Line 453, Address: 0x1b4598, Func Offset: 0x148
	// Line 454, Address: 0x1b45a0, Func Offset: 0x150
	// Func End, Address: 0x1b45b4, Func Offset: 0x164
}

// 
// Start address: 0x1b45c0
void MessageMemoPut(int packid, int id)
{
	unsigned short* mes;
	// Line 467, Address: 0x1b45c0, Func Offset: 0
	// Line 470, Address: 0x1b45c8, Func Offset: 0x8
	// Line 471, Address: 0x1b45d0, Func Offset: 0x10
	// Line 473, Address: 0x1b45d8, Func Offset: 0x18
	// Line 472, Address: 0x1b45dc, Func Offset: 0x1c
	// Line 473, Address: 0x1b45e0, Func Offset: 0x20
	// Line 472, Address: 0x1b45e4, Func Offset: 0x24
	// Line 474, Address: 0x1b45f4, Func Offset: 0x34
	// Line 475, Address: 0x1b45fc, Func Offset: 0x3c
	// Func End, Address: 0x1b4608, Func Offset: 0x48
}

// 
// Start address: 0x1b4610
int MessageMemoNext()
{
	unsigned short* mes;
	// Line 481, Address: 0x1b4610, Func Offset: 0
	// Line 482, Address: 0x1b4614, Func Offset: 0x4
	// Line 481, Address: 0x1b4618, Func Offset: 0x8
	// Line 482, Address: 0x1b4624, Func Offset: 0x14
	// Line 483, Address: 0x1b4628, Func Offset: 0x18
	// Line 485, Address: 0x1b4630, Func Offset: 0x20
	// Line 486, Address: 0x1b4638, Func Offset: 0x28
	// Line 487, Address: 0x1b4640, Func Offset: 0x30
	// Line 488, Address: 0x1b464c, Func Offset: 0x3c
	// Line 490, Address: 0x1b4650, Func Offset: 0x40
	// Line 489, Address: 0x1b4658, Func Offset: 0x48
	// Line 491, Address: 0x1b4668, Func Offset: 0x58
	// Line 492, Address: 0x1b4670, Func Offset: 0x60
	// Line 493, Address: 0x1b467c, Func Offset: 0x6c
	// Line 496, Address: 0x1b46c0, Func Offset: 0xb0
	// Line 497, Address: 0x1b46c8, Func Offset: 0xb8
	// Line 498, Address: 0x1b46d0, Func Offset: 0xc0
	// Line 499, Address: 0x1b46dc, Func Offset: 0xcc
	// Line 500, Address: 0x1b46ec, Func Offset: 0xdc
	// Line 501, Address: 0x1b46f8, Func Offset: 0xe8
	// Line 502, Address: 0x1b46fc, Func Offset: 0xec
	// Line 506, Address: 0x1b4708, Func Offset: 0xf8
	// Line 502, Address: 0x1b470c, Func Offset: 0xfc
	// Line 504, Address: 0x1b4710, Func Offset: 0x100
	// Line 503, Address: 0x1b471c, Func Offset: 0x10c
	// Line 505, Address: 0x1b4724, Func Offset: 0x114
	// Line 506, Address: 0x1b4734, Func Offset: 0x124
	// Line 507, Address: 0x1b473c, Func Offset: 0x12c
	// Line 508, Address: 0x1b4744, Func Offset: 0x134
	// Line 509, Address: 0x1b4748, Func Offset: 0x138
	// Func End, Address: 0x1b475c, Func Offset: 0x14c
}

// 
// Start address: 0x1b4760
void MessagePut(int packid, int id, int pos_x, int pos_y)
{
	// Line 518, Address: 0x1b4760, Func Offset: 0
	// Line 519, Address: 0x1b4774, Func Offset: 0x14
	// Line 520, Address: 0x1b478c, Func Offset: 0x2c
	// Line 521, Address: 0x1b4794, Func Offset: 0x34
	// Func End, Address: 0x1b47a8, Func Offset: 0x48
}

// 
// Start address: 0x1b47b0
void MessagePutAlign(int packid, int id, int pos_x, int pos_y, sfMessageAlignRow align1, sfMessageAlignColumn align2)
{
	// Line 531, Address: 0x1b47b0, Func Offset: 0
	// Line 532, Address: 0x1b47d4, Func Offset: 0x24
	// Line 534, Address: 0x1b47f4, Func Offset: 0x44
	// Line 535, Address: 0x1b47fc, Func Offset: 0x4c
	// Func End, Address: 0x1b4818, Func Offset: 0x68
}

// 
// Start address: 0x1b4820
void MessageSetAlpha(unsigned int alpha)
{
	// Line 543, Address: 0x1b4820, Func Offset: 0
	// Line 544, Address: 0x1b4824, Func Offset: 0x4
	// Func End, Address: 0x1b482c, Func Offset: 0xc
}

// 
// Start address: 0x1b4830
void MessageSetDemoAlpha(unsigned int alpha)
{
	// Line 552, Address: 0x1b4830, Func Offset: 0
	// Line 553, Address: 0x1b4834, Func Offset: 0x4
	// Func End, Address: 0x1b483c, Func Offset: 0xc
}

// 
// Start address: 0x1b4840
void MessageChangeDecisionSound(int select_no, int se_no)
{
	// Line 564, Address: 0x1b4840, Func Offset: 0
	// Line 565, Address: 0x1b4850, Func Offset: 0x10
	// Func End, Address: 0x1b4858, Func Offset: 0x18
}

// 
// Start address: 0x1b4860
void MessageChangeButtonIcon()
{
	int i;
	int j;
	unsigned int key;
	// Line 604, Address: 0x1b4860, Func Offset: 0
	// Line 607, Address: 0x1b4870, Func Offset: 0x10
	// Line 608, Address: 0x1b4880, Func Offset: 0x20
	// Line 609, Address: 0x1b4888, Func Offset: 0x28
	// Line 610, Address: 0x1b4898, Func Offset: 0x38
	// Line 611, Address: 0x1b48b0, Func Offset: 0x50
	// Line 612, Address: 0x1b48b8, Func Offset: 0x58
	// Line 614, Address: 0x1b48c0, Func Offset: 0x60
	// Line 615, Address: 0x1b48d0, Func Offset: 0x70
	// Line 616, Address: 0x1b48e0, Func Offset: 0x80
	// Func End, Address: 0x1b48f4, Func Offset: 0x94
}

// 
// Start address: 0x1b4900
int MessageGetWidth()
{
	// Line 623, Address: 0x1b4900, Func Offset: 0
	// Line 624, Address: 0x1b4904, Func Offset: 0x4
	// Func End, Address: 0x1b490c, Func Offset: 0xc
}

// 
// Start address: 0x1b4910
int MessageGetHeight()
{
	// Line 631, Address: 0x1b4910, Func Offset: 0
	// Line 632, Address: 0x1b4914, Func Offset: 0x4
	// Func End, Address: 0x1b491c, Func Offset: 0xc
}

// 
// Start address: 0x1b4920
int MessageNowPage()
{
	// Line 639, Address: 0x1b4920, Func Offset: 0
	// Line 640, Address: 0x1b4924, Func Offset: 0x4
	// Func End, Address: 0x1b492c, Func Offset: 0xc
}

// 
// Start address: 0x1b4930
void MessageSoundCallNext()
{
	// Line 647, Address: 0x1b4930, Func Offset: 0
	// Func End, Address: 0x1b4938, Func Offset: 0x8
}

// 
// Start address: 0x1b4940
void MessageSoundCallCancel()
{
	// Line 653, Address: 0x1b4940, Func Offset: 0
	// Func End, Address: 0x1b4948, Func Offset: 0x8
}

// 
// Start address: 0x1b4950
void MessageSoundCallDecision()
{
	// Line 659, Address: 0x1b4950, Func Offset: 0
	// Line 660, Address: 0x1b4974, Func Offset: 0x24
	// Line 661, Address: 0x1b497c, Func Offset: 0x2c
	// Line 662, Address: 0x1b4984, Func Offset: 0x34
	// Line 663, Address: 0x1b4988, Func Offset: 0x38
	// Func End, Address: 0x1b4994, Func Offset: 0x44
}

// 
// Start address: 0x1b49a0
void MessageSoundCallSelect()
{
	// Line 669, Address: 0x1b49a0, Func Offset: 0
	// Func End, Address: 0x1b49a8, Func Offset: 0x8
}

// 
// Start address: 0x1b49b0
int MessageKeyCheckNext()
{
	// Line 676, Address: 0x1b49b0, Func Offset: 0
	// Line 677, Address: 0x1b49b4, Func Offset: 0x4
	// Line 676, Address: 0x1b49b8, Func Offset: 0x8
	// Line 677, Address: 0x1b49bc, Func Offset: 0xc
	// Line 679, Address: 0x1b49e0, Func Offset: 0x30
	// Line 687, Address: 0x1b49e8, Func Offset: 0x38
	// Line 688, Address: 0x1b49f0, Func Offset: 0x40
	// Func End, Address: 0x1b49fc, Func Offset: 0x4c
}

// 
// Start address: 0x1b4a00
int MessageKeyCheckDecision()
{
	// Line 694, Address: 0x1b4a00, Func Offset: 0
	// Line 696, Address: 0x1b4a04, Func Offset: 0x4
	// Line 694, Address: 0x1b4a08, Func Offset: 0x8
	// Line 696, Address: 0x1b4a0c, Func Offset: 0xc
	// Line 699, Address: 0x1b4a14, Func Offset: 0x14
	// Line 696, Address: 0x1b4a18, Func Offset: 0x18
	// Line 699, Address: 0x1b4a1c, Func Offset: 0x1c
	// Func End, Address: 0x1b4a24, Func Offset: 0x24
}

// 
// Start address: 0x1b4a30
int MessageKeyCheckCancel()
{
	// Line 705, Address: 0x1b4a30, Func Offset: 0
	// Line 707, Address: 0x1b4a34, Func Offset: 0x4
	// Line 705, Address: 0x1b4a38, Func Offset: 0x8
	// Line 707, Address: 0x1b4a3c, Func Offset: 0xc
	// Line 710, Address: 0x1b4a44, Func Offset: 0x14
	// Line 707, Address: 0x1b4a48, Func Offset: 0x18
	// Line 710, Address: 0x1b4a4c, Func Offset: 0x1c
	// Func End, Address: 0x1b4a54, Func Offset: 0x24
}

// 
// Start address: 0x1b4a60
int MessageKeyCheck(unsigned int pad)
{
	// Line 719, Address: 0x1b4a60, Func Offset: 0
	// Line 720, Address: 0x1b4a70, Func Offset: 0x10
	// Line 721, Address: 0x1b4a90, Func Offset: 0x30
	// Line 723, Address: 0x1b4aa0, Func Offset: 0x40
	// Func End, Address: 0x1b4ab0, Func Offset: 0x50
}

// 
// Start address: 0x1b4ab0
void MessageKeyCheckNormal()
{
	int r;
	// Line 728, Address: 0x1b4ab0, Func Offset: 0
	// Line 730, Address: 0x1b4ab8, Func Offset: 0x8
	// Line 731, Address: 0x1b4ac8, Func Offset: 0x18
	// Line 732, Address: 0x1b4ae0, Func Offset: 0x30
	// Line 734, Address: 0x1b4aec, Func Offset: 0x3c
	// Line 735, Address: 0x1b4af4, Func Offset: 0x44
	// Line 737, Address: 0x1b4b0c, Func Offset: 0x5c
	// Line 738, Address: 0x1b4b14, Func Offset: 0x64
	// Line 740, Address: 0x1b4b20, Func Offset: 0x70
	// Line 742, Address: 0x1b4b28, Func Offset: 0x78
	// Func End, Address: 0x1b4b34, Func Offset: 0x84
}

// 
// Start address: 0x1b4b40
void MessageKeyCheckSelect()
{
	int up;
	int down;
	int right;
	int left;
	int s;
	int m;
	// Line 747, Address: 0x1b4b40, Func Offset: 0
	// Line 749, Address: 0x1b4b54, Func Offset: 0x14
	// Line 750, Address: 0x1b4b64, Func Offset: 0x24
	// Line 751, Address: 0x1b4b6c, Func Offset: 0x2c
	// Line 752, Address: 0x1b4b74, Func Offset: 0x34
	// Line 753, Address: 0x1b4b7c, Func Offset: 0x3c
	// Line 754, Address: 0x1b4b80, Func Offset: 0x40
	// Line 756, Address: 0x1b4b98, Func Offset: 0x58
	// Line 757, Address: 0x1b4ba0, Func Offset: 0x60
	// Line 758, Address: 0x1b4ba4, Func Offset: 0x64
	// Line 759, Address: 0x1b4bac, Func Offset: 0x6c
	// Line 760, Address: 0x1b4bb4, Func Offset: 0x74
	// Line 762, Address: 0x1b4bbc, Func Offset: 0x7c
	// Line 763, Address: 0x1b4bc0, Func Offset: 0x80
	// Line 764, Address: 0x1b4bcc, Func Offset: 0x8c
	// Line 765, Address: 0x1b4bd8, Func Offset: 0x98
	// Line 766, Address: 0x1b4be4, Func Offset: 0xa4
	// Line 769, Address: 0x1b4bf0, Func Offset: 0xb0
	// Line 766, Address: 0x1b4bf4, Func Offset: 0xb4
	// Line 768, Address: 0x1b4bf8, Func Offset: 0xb8
	// Line 769, Address: 0x1b4c00, Func Offset: 0xc0
	// Line 770, Address: 0x1b4c5c, Func Offset: 0x11c
	// Line 772, Address: 0x1b4c60, Func Offset: 0x120
	// Line 771, Address: 0x1b4c64, Func Offset: 0x124
	// Line 775, Address: 0x1b4c68, Func Offset: 0x128
	// Line 776, Address: 0x1b4c70, Func Offset: 0x130
	// Line 777, Address: 0x1b4c7c, Func Offset: 0x13c
	// Line 779, Address: 0x1b4c88, Func Offset: 0x148
	// Line 780, Address: 0x1b4c90, Func Offset: 0x150
	// Line 783, Address: 0x1b4c94, Func Offset: 0x154
	// Line 784, Address: 0x1b4c98, Func Offset: 0x158
	// Line 785, Address: 0x1b4ca0, Func Offset: 0x160
	// Line 786, Address: 0x1b4cb0, Func Offset: 0x170
	// Line 788, Address: 0x1b4cbc, Func Offset: 0x17c
	// Line 793, Address: 0x1b4cc8, Func Offset: 0x188
	// Line 795, Address: 0x1b4cd0, Func Offset: 0x190
	// Line 797, Address: 0x1b4cf8, Func Offset: 0x1b8
	// Line 799, Address: 0x1b4d08, Func Offset: 0x1c8
	// Line 802, Address: 0x1b4d20, Func Offset: 0x1e0
	// Line 804, Address: 0x1b4d28, Func Offset: 0x1e8
	// Line 806, Address: 0x1b4d38, Func Offset: 0x1f8
	// Line 809, Address: 0x1b4d50, Func Offset: 0x210
	// Line 811, Address: 0x1b4d58, Func Offset: 0x218
	// Line 816, Address: 0x1b4d68, Func Offset: 0x228
	// Line 818, Address: 0x1b4d70, Func Offset: 0x230
	// Line 820, Address: 0x1b4d98, Func Offset: 0x258
	// Line 823, Address: 0x1b4da8, Func Offset: 0x268
	// Line 825, Address: 0x1b4db0, Func Offset: 0x270
	// Line 827, Address: 0x1b4dc0, Func Offset: 0x280
	// Line 830, Address: 0x1b4dd8, Func Offset: 0x298
	// Line 832, Address: 0x1b4de0, Func Offset: 0x2a0
	// Line 834, Address: 0x1b4df0, Func Offset: 0x2b0
	// Line 839, Address: 0x1b4e08, Func Offset: 0x2c8
	// Line 841, Address: 0x1b4e10, Func Offset: 0x2d0
	// Line 842, Address: 0x1b4e44, Func Offset: 0x304
	// Line 843, Address: 0x1b4e48, Func Offset: 0x308
	// Line 844, Address: 0x1b4e74, Func Offset: 0x334
	// Line 845, Address: 0x1b4e7c, Func Offset: 0x33c
	// Line 846, Address: 0x1b4e80, Func Offset: 0x340
	// Line 847, Address: 0x1b4eb0, Func Offset: 0x370
	// Line 849, Address: 0x1b4eb8, Func Offset: 0x378
	// Line 850, Address: 0x1b4ee4, Func Offset: 0x3a4
	// Line 851, Address: 0x1b4eec, Func Offset: 0x3ac
	// Line 852, Address: 0x1b4ef0, Func Offset: 0x3b0
	// Line 857, Address: 0x1b4f28, Func Offset: 0x3e8
	// Line 858, Address: 0x1b4f30, Func Offset: 0x3f0
	// Line 859, Address: 0x1b4f38, Func Offset: 0x3f8
	// Line 861, Address: 0x1b4f40, Func Offset: 0x400
	// Func End, Address: 0x1b4f5c, Func Offset: 0x41c
}

// 
// Start address: 0x1b4f60
int roundup(float src)
{
	int r;
	float t;
	// Line 871, Address: 0x1b4f60, Func Offset: 0
	// Line 872, Address: 0x1b4f70, Func Offset: 0x10
	// Line 873, Address: 0x1b4f7c, Func Offset: 0x1c
	// Line 874, Address: 0x1b4f88, Func Offset: 0x28
	// Line 876, Address: 0x1b4f90, Func Offset: 0x30
	// Line 877, Address: 0x1b4f98, Func Offset: 0x38
	// Line 879, Address: 0x1b4f9c, Func Offset: 0x3c
	// Line 881, Address: 0x1b4fa0, Func Offset: 0x40
	// Func End, Address: 0x1b4fa8, Func Offset: 0x48
}

// 
// Start address: 0x1b4fb0
void rect_move(sfMessageRect* rect, sfMessageRect* target)
{
	float x;
	float y;
	float tx;
	float ty;
	float dx;
	float dy;
	float d;
	float ms;
	// Line 888, Address: 0x1b4fb0, Func Offset: 0
	// Line 890, Address: 0x1b4fc4, Func Offset: 0x14
	// Line 892, Address: 0x1b4fd0, Func Offset: 0x20
	// Line 890, Address: 0x1b4fd4, Func Offset: 0x24
	// Line 892, Address: 0x1b4fe0, Func Offset: 0x30
	// Line 893, Address: 0x1b4fe4, Func Offset: 0x34
	// Line 895, Address: 0x1b4fe8, Func Offset: 0x38
	// Line 894, Address: 0x1b4fec, Func Offset: 0x3c
	// Line 892, Address: 0x1b4ff0, Func Offset: 0x40
	// Line 893, Address: 0x1b4ff4, Func Offset: 0x44
	// Line 895, Address: 0x1b4ff8, Func Offset: 0x48
	// Line 893, Address: 0x1b4ffc, Func Offset: 0x4c
	// Line 894, Address: 0x1b5000, Func Offset: 0x50
	// Line 895, Address: 0x1b5004, Func Offset: 0x54
	// Line 894, Address: 0x1b5008, Func Offset: 0x58
	// Line 893, Address: 0x1b5010, Func Offset: 0x60
	// Line 894, Address: 0x1b5014, Func Offset: 0x64
	// Line 895, Address: 0x1b5018, Func Offset: 0x68
	// Line 893, Address: 0x1b501c, Func Offset: 0x6c
	// Line 895, Address: 0x1b5020, Func Offset: 0x70
	// Line 896, Address: 0x1b5024, Func Offset: 0x74
	// Line 897, Address: 0x1b5028, Func Offset: 0x78
	// Line 898, Address: 0x1b502c, Func Offset: 0x7c
	// Line 899, Address: 0x1b5038, Func Offset: 0x88
	// Line 900, Address: 0x1b5044, Func Offset: 0x94
	// Line 901, Address: 0x1b5060, Func Offset: 0xb0
	// Line 903, Address: 0x1b5068, Func Offset: 0xb8
	// Line 904, Address: 0x1b5074, Func Offset: 0xc4
	// Line 906, Address: 0x1b5078, Func Offset: 0xc8
	// Line 907, Address: 0x1b508c, Func Offset: 0xdc
	// Line 906, Address: 0x1b5090, Func Offset: 0xe0
	// Line 907, Address: 0x1b5094, Func Offset: 0xe4
	// Line 909, Address: 0x1b50b0, Func Offset: 0x100
	// Line 911, Address: 0x1b50b4, Func Offset: 0x104
	// Line 910, Address: 0x1b50b8, Func Offset: 0x108
	// Line 912, Address: 0x1b50bc, Func Offset: 0x10c
	// Line 909, Address: 0x1b50c0, Func Offset: 0x110
	// Line 911, Address: 0x1b50c4, Func Offset: 0x114
	// Line 909, Address: 0x1b50c8, Func Offset: 0x118
	// Line 911, Address: 0x1b50cc, Func Offset: 0x11c
	// Line 910, Address: 0x1b50d0, Func Offset: 0x120
	// Line 909, Address: 0x1b50d4, Func Offset: 0x124
	// Line 912, Address: 0x1b50d8, Func Offset: 0x128
	// Line 911, Address: 0x1b50dc, Func Offset: 0x12c
	// Line 910, Address: 0x1b50e0, Func Offset: 0x130
	// Line 912, Address: 0x1b50e4, Func Offset: 0x134
	// Line 910, Address: 0x1b50e8, Func Offset: 0x138
	// Line 912, Address: 0x1b50ec, Func Offset: 0x13c
	// Line 909, Address: 0x1b50f0, Func Offset: 0x140
	// Line 911, Address: 0x1b50f4, Func Offset: 0x144
	// Line 913, Address: 0x1b50f8, Func Offset: 0x148
	// Line 910, Address: 0x1b50fc, Func Offset: 0x14c
	// Line 912, Address: 0x1b5100, Func Offset: 0x150
	// Line 914, Address: 0x1b5104, Func Offset: 0x154
	// Line 915, Address: 0x1b5108, Func Offset: 0x158
	// Line 917, Address: 0x1b510c, Func Offset: 0x15c
	// Line 918, Address: 0x1b5120, Func Offset: 0x170
	// Line 917, Address: 0x1b5124, Func Offset: 0x174
	// Line 918, Address: 0x1b5128, Func Offset: 0x178
	// Line 920, Address: 0x1b513c, Func Offset: 0x18c
	// Line 918, Address: 0x1b5140, Func Offset: 0x190
	// Line 920, Address: 0x1b5148, Func Offset: 0x198
	// Line 921, Address: 0x1b514c, Func Offset: 0x19c
	// Func End, Address: 0x1b5164, Func Offset: 0x1b4
}

// 
// Start address: 0x1b5170
void MessageUiSuspend()
{
	// Line 930, Address: 0x1b5170, Func Offset: 0
	// Func End, Address: 0x1b5178, Func Offset: 0x8
}

// 
// Start address: 0x1b5180
void MessageUiResume()
{
	// Line 936, Address: 0x1b5180, Func Offset: 0
	// Line 937, Address: 0x1b5194, Func Offset: 0x14
	// Func End, Address: 0x1b519c, Func Offset: 0x1c
}

// 
// Start address: 0x1b51a0
int is_pausing()
{
	// Line 944, Address: 0x1b51a0, Func Offset: 0
	// Line 945, Address: 0x1b51ac, Func Offset: 0xc
	// Func End, Address: 0x1b51b4, Func Offset: 0x14
}

// 
// Start address: 0x1b51c0
void MessageHandle()
{
	float dt;
	float d;
	int i;
	int w;
	int h;
	// Line 950, Address: 0x1b51c0, Func Offset: 0
	// Line 952, Address: 0x1b51d0, Func Offset: 0x10
	// Line 954, Address: 0x1b51d8, Func Offset: 0x18
	// Line 955, Address: 0x1b51f8, Func Offset: 0x38
	// Line 956, Address: 0x1b5200, Func Offset: 0x40
	// Line 961, Address: 0x1b520c, Func Offset: 0x4c
	// Line 963, Address: 0x1b521c, Func Offset: 0x5c
	// Line 965, Address: 0x1b5240, Func Offset: 0x80
	// Line 966, Address: 0x1b5264, Func Offset: 0xa4
	// Line 968, Address: 0x1b526c, Func Offset: 0xac
	// Line 969, Address: 0x1b5270, Func Offset: 0xb0
	// Line 972, Address: 0x1b52a0, Func Offset: 0xe0
	// Line 973, Address: 0x1b52a8, Func Offset: 0xe8
	// Line 972, Address: 0x1b52b4, Func Offset: 0xf4
	// Line 973, Address: 0x1b52c0, Func Offset: 0x100
	// Line 975, Address: 0x1b52e0, Func Offset: 0x120
	// Line 976, Address: 0x1b52e8, Func Offset: 0x128
	// Line 977, Address: 0x1b52f0, Func Offset: 0x130
	// Line 980, Address: 0x1b5310, Func Offset: 0x150
	// Line 981, Address: 0x1b5318, Func Offset: 0x158
	// Line 980, Address: 0x1b5324, Func Offset: 0x164
	// Line 981, Address: 0x1b5328, Func Offset: 0x168
	// Line 982, Address: 0x1b5334, Func Offset: 0x174
	// Line 985, Address: 0x1b5338, Func Offset: 0x178
	// Line 984, Address: 0x1b5340, Func Offset: 0x180
	// Line 985, Address: 0x1b5344, Func Offset: 0x184
	// Line 986, Address: 0x1b5350, Func Offset: 0x190
	// Line 987, Address: 0x1b5358, Func Offset: 0x198
	// Line 988, Address: 0x1b5378, Func Offset: 0x1b8
	// Line 989, Address: 0x1b5394, Func Offset: 0x1d4
	// Line 990, Address: 0x1b53a0, Func Offset: 0x1e0
	// Line 991, Address: 0x1b53b4, Func Offset: 0x1f4
	// Line 992, Address: 0x1b53b8, Func Offset: 0x1f8
	// Line 997, Address: 0x1b53d8, Func Offset: 0x218
	// Line 999, Address: 0x1b5400, Func Offset: 0x240
	// Line 1001, Address: 0x1b543c, Func Offset: 0x27c
	// Line 1002, Address: 0x1b5440, Func Offset: 0x280
	// Line 1003, Address: 0x1b5448, Func Offset: 0x288
	// Line 1006, Address: 0x1b5450, Func Offset: 0x290
	// Line 1009, Address: 0x1b5458, Func Offset: 0x298
	// Line 1012, Address: 0x1b5480, Func Offset: 0x2c0
	// Line 1017, Address: 0x1b5488, Func Offset: 0x2c8
	// Line 1019, Address: 0x1b5498, Func Offset: 0x2d8
	// Line 1020, Address: 0x1b54b0, Func Offset: 0x2f0
	// Line 1021, Address: 0x1b54c0, Func Offset: 0x300
	// Line 1020, Address: 0x1b54c4, Func Offset: 0x304
	// Line 1021, Address: 0x1b54e0, Func Offset: 0x320
	// Line 1022, Address: 0x1b54e8, Func Offset: 0x328
	// Line 1028, Address: 0x1b5510, Func Offset: 0x350
	// Line 1029, Address: 0x1b5518, Func Offset: 0x358
	// Line 1030, Address: 0x1b552c, Func Offset: 0x36c
	// Line 1031, Address: 0x1b5538, Func Offset: 0x378
	// Line 1032, Address: 0x1b5540, Func Offset: 0x380
	// Line 1033, Address: 0x1b5558, Func Offset: 0x398
	// Line 1034, Address: 0x1b5570, Func Offset: 0x3b0
	// Line 1036, Address: 0x1b5590, Func Offset: 0x3d0
	// Line 1037, Address: 0x1b559c, Func Offset: 0x3dc
	// Line 1038, Address: 0x1b55a8, Func Offset: 0x3e8
	// Line 1039, Address: 0x1b55b4, Func Offset: 0x3f4
	// Line 1040, Address: 0x1b55b8, Func Offset: 0x3f8
	// Line 1041, Address: 0x1b55e4, Func Offset: 0x424
	// Line 1042, Address: 0x1b55e8, Func Offset: 0x428
	// Line 1045, Address: 0x1b5604, Func Offset: 0x444
	// Line 1046, Address: 0x1b560c, Func Offset: 0x44c
	// Line 1047, Address: 0x1b5610, Func Offset: 0x450
	// Line 1048, Address: 0x1b5618, Func Offset: 0x458
	// Line 1051, Address: 0x1b5644, Func Offset: 0x484
	// Line 1052, Address: 0x1b564c, Func Offset: 0x48c
	// Line 1053, Address: 0x1b5650, Func Offset: 0x490
	// Line 1056, Address: 0x1b566c, Func Offset: 0x4ac
	// Line 1057, Address: 0x1b5674, Func Offset: 0x4b4
	// Line 1058, Address: 0x1b5678, Func Offset: 0x4b8
	// Line 1062, Address: 0x1b5694, Func Offset: 0x4d4
	// Line 1063, Address: 0x1b5698, Func Offset: 0x4d8
	// Line 1065, Address: 0x1b56a0, Func Offset: 0x4e0
	// Line 1068, Address: 0x1b56c8, Func Offset: 0x508
	// Line 1069, Address: 0x1b56d4, Func Offset: 0x514
	// Line 1072, Address: 0x1b56f8, Func Offset: 0x538
	// Line 1075, Address: 0x1b571c, Func Offset: 0x55c
	// Line 1077, Address: 0x1b5724, Func Offset: 0x564
	// Line 1079, Address: 0x1b5728, Func Offset: 0x568
	// Line 1082, Address: 0x1b5738, Func Offset: 0x578
	// Func End, Address: 0x1b5750, Func Offset: 0x590
}

// 
// Start address: 0x1b5750
int MessageNowSelect()
{
	// Line 1089, Address: 0x1b5750, Func Offset: 0
	// Line 1090, Address: 0x1b5754, Func Offset: 0x4
	// Func End, Address: 0x1b575c, Func Offset: 0xc
}

