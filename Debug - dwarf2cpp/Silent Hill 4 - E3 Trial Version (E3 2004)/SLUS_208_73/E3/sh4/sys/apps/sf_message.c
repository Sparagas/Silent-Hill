typedef struct sfMessageRect;
typedef struct sfListMan;
typedef struct sfMessageDataEx;
typedef struct sfMessageExternalCharacterData;
typedef struct _anon0;
typedef struct sfMessageData1;
typedef struct sfMessagePack;
typedef enum sfMessageAlignRow : unsigned char;
typedef struct sfList;
typedef struct sfMessageDataExtc;
typedef enum sfMessageAlignColumn : unsigned char;
typedef struct sfMessageLRUList;
typedef struct sfMessageWork;
typedef enum sfMessageFontType : unsigned char;
typedef enum sfMessageColor : unsigned char;
typedef enum sfMessageType : unsigned char;


typedef sfMessageExternalCharacterData type_0[20];
typedef int type_1[20];
typedef int type_2[20];
typedef int type_3[20];
typedef sfMessageRect type_4[5];
typedef unsigned short type_5[0];
typedef unsigned short type_6[6];
typedef short type_7[2];
typedef short type_8[2][2];
typedef char type_9[10];
typedef unsigned char type_10[131072];
typedef unsigned int type_11[8];
typedef sfMessageData1 type_12[640];
typedef unsigned int type_13[2];
typedef unsigned int type_14[2][11];
typedef sfMessageDataEx type_15[64];
typedef sfMessageDataExtc type_16[64];
typedef sfMessageLRUList type_17[425];
typedef unsigned char type_18[22784];
typedef unsigned int type_19[4];
typedef void* type_20[4];
typedef void* type_21[2];
typedef void* type_22[2];
typedef unsigned short* type_23[10];
typedef unsigned int type_24[2];
typedef sfMessageDataEx* type_25[64];
typedef unsigned int type_26[2];
typedef sfMessageDataEx* type_27[64];

struct sfMessageRect
{
	short x;
	short y;
	short w;
	short h;
};

struct sfListMan
{
	void* start;
	unsigned int size;
	int max;
	short free_top;
	short free_last;
};

struct sfMessageDataEx
{
	short x;
	short y;
	short w;
	short h;
	short u;
	short v;
	unsigned short tw;
	unsigned short th;
	unsigned int rgba_u;
	unsigned int rgba_l;
};

struct sfMessageExternalCharacterData
{
	unsigned short u;
	unsigned short v;
	unsigned short w;
	unsigned short h;
	unsigned char vw;
	unsigned char vh;
	char y_mergin;
	unsigned char page;
	unsigned char color_change;
	unsigned char shadow;
	unsigned int color;
};

struct _anon0
{
	short base;
	short buffer_w;
	unsigned char psm;
	unsigned char data_psm;
	short w;
	short h;
	short buffer_size;
	short w2;
	short h2;
};

struct sfMessageData1
{
	short x;
	short y;
	short w;
	short h;
	short u;
	short v;
	unsigned int rgba_u;
	unsigned int rgba_l;
};

struct sfMessagePack
{
	unsigned short maxnum;
	unsigned short offset[0];
};

enum sfMessageAlignRow : unsigned char
{
	SF_MES_ALIGN_LEFT,
	SF_MES_ALIGN_CENTER,
	SF_MES_ALIGN_RIGHT,
	SF_MES_ALIGN_MAXLEFT,
	SF_MES_ALIGN_MAXRIGHT
};

struct sfList
{
	short prev;
	short next;
};

struct sfMessageDataExtc
{
	short x;
	short y;
	short w;
	short h;
	short extc_code;
	unsigned int rgba_u;
	unsigned int rgba_l;
};

enum sfMessageAlignColumn : unsigned char
{
	SF_MES_ALIGN_TOP,
	SF_MES_ALIGN_MIDDLE,
	SF_MES_ALIGN_BOTTOM,
	SF_MES_ALIGN_MIDDLE_A
};

struct sfMessageLRUList
{
	sfList list;
	unsigned short code;
};

struct sfMessageWork
{
	unsigned char tex_data[131072];
	unsigned int clut_data[8];
	sfMessageData1 font_buff[640];
	sfMessageDataEx extra_buff[64];
	sfMessageDataExtc extc_buff[64];
	sfListMan listman;
	sfMessageLRUList lru_list[425];
	unsigned char list_hash[22784];
	unsigned int font_data_id[4];
	void* font_data[4];
	unsigned int extc_data_id;
	void* extc_tex[2];
	void* extc_clut[2];
	unsigned int skip_data_id;
	void* skip_tex;
	void* skip_clut;
	unsigned short* mes_v[10];
	unsigned int tex_id;
	unsigned int clut_id;
	unsigned int extc_id[2];
	unsigned int extcc_id[2];
	unsigned int extc_use;
	unsigned int skip_id;
	unsigned int skipc_id;
	int buff_count;
	int extra_count;
	int extc_count;
	sfMessageFontType type;
	int base_x;
	int base_y;
	unsigned short scissor_x0;
	unsigned short scissor_x1;
	unsigned short scissor_y0;
	unsigned short scissor_y1;
	unsigned int color_upper;
	unsigned int color_lower;
	unsigned int alpha;
	int space_x;
	int space_y;
	int message_width;
	int message_height;
	sfMessageRect bar_rect;
	unsigned int bar_color;
	unsigned int bar_alpha;
	sfMessageRect* bar_blur_rect;
	int bar_blur_rect_num;
	sfMessageType lasttype;
	int status;
	unsigned short* next;
	int x_bk[20];
	int y_bk[20];
	int w_bk[20];
	int lines_bk;
	sfMessageRect select_rect[5];
	int select_max;
	int select_default;
	char* packet_buffer;
	char* packet_buffer_t;
	int packet_buffer_size;
	int pk_area;
	unsigned long* pk_dmatag;
	unsigned long* pk_giftag;
	unsigned long* pk_pos;
	unsigned long pk_giftag1_bk;
	unsigned long pk_giftag2_bk;
	unsigned short skip_chara_x;
	unsigned short skip_chara_y;
	unsigned int skip_chara_color_u;
	unsigned int skip_chara_color_l;
	int skip_chara_enable;
	int extra_chara_enable;
	char extra_chara_map[10];
	char double_mode;
};

enum sfMessageFontType : unsigned char
{
	SF_MES_FONT_TYPE_NORMAL,
	SF_MES_FONT_TYPE_SMALL,
	SF_MES_FONT_TYPE_HANGUL,
	SF_MES_FONT_TYPE_HANGUL_S,
	SF_MES_FONT_TYPE_MAX
};

enum sfMessageColor : unsigned char
{
	SF_MES_COLOR_WHITE,
	SF_MES_COLOR_BLUE,
	SF_MES_COLOR_RED,
	SF_MES_COLOR_GREEN,
	SF_MES_COLOR_YELLOW,
	SF_MES_COLOR_CYAN,
	SF_MES_COLOR_MAGENTA,
	SF_MES_COLOR_BLACK,
	SF_MES_COLOR_GRAY,
	SF_MES_COLOR_GRADATION,
	SF_MES_COLOR_SALMON,
	SF_MES_COLOR_DEFAULT = 0
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

short font_size[2][2];
unsigned int message_colors[2][11];
sfMessageExternalCharacterData external_character_data[20];
unsigned short message_undefined[6];
sfMessageWork message_work;

void sfMessageWorkInit();
void sfMessageSetDataAddress();
void sfMessageSetFontDataID(unsigned int id, sfMessageFontType type);
void sfMessageSetExternalCharacterTextureID(unsigned int id);
void sfMessageSetSkipCharacterTextureID(unsigned int id);
void sfMessageBufferClear();
void sfMessageDefaultSetting();
void sfMessageSetFontType(sfMessageFontType type);
void sfMessageSetBasePos(int x, int y);
void sfMessageSetScissor(int x0, int x1, int y0, int y1);
void sfMessageSetSpace(int x, int y);
void sfMessageSetColor(sfMessageColor color);
void sfMessageSetColorDirect(unsigned int color);
void sfMessageSetColorDirect2(unsigned int color_upper, unsigned int color_lower);
void sfMessageSetAlpha(unsigned int alpha);
void sfMessageSetSelectColor(unsigned int color);
void sfMessageSetSelectColorAlpha(unsigned int alpha);
void sfMessageEnableDoubleMode();
void sfMessageDisableDoubleMode();
void sfMessageSetExtraCharaNumber(int set_num, int src_num);
unsigned char sfMessageGetData(unsigned int** p_pos, int* p_bp, unsigned long* p_d);
int sfMessageLoadExec(unsigned short code, int n);
int sfMessageLoad(unsigned short code);
int sfMessageLatinFontWidth(unsigned short code);
int sfMessageLatinFontOffset(unsigned short code);
int sfMessageLatinFontOffset2(unsigned short code);
unsigned int color_mix(unsigned int color1, unsigned int color2);
void sfMessageSetOne(unsigned short code, int x, int y);
void sfMessageSetExternalCharacter(int extc_code, int x, int y);
void sfMessageSetBlankBox(int x, int y, int w, int h);
void sfMessageSetHLine(int x, int y, int w);
void sfMessageSetSkipCharacterPos(int x, int y);
void sfMessageSetSkipCharacterEnable(int enable);
void sfMessagePrint(unsigned short* mes, int pos_x, int pos_y);
void sfMessagePrintAlign(unsigned short* mes, int pos_x, int pos_y, sfMessageAlignRow align1, sfMessageAlignColumn align2);
int sfMessageGetLastLines(int** p_x, int** p_y, int** p_w);
void sfMessageSetSkipCharacterPosAtLastLine();
sfMessageType sfMessageGetLastType();
unsigned short* sfMessageGetNextAddress();
int sfMessageGetWait();
int sfMessageGetMaxWidth();
int sfMessageGetHeight();
int sfMessageGetLineHeight();
int sfMessageGetSelectMax();
int sfMessageGetDefaultSelect();
void sfMessageGetSelectRect(sfMessageRect* rect, int num);
void sfMessageSetFontTexture();
unsigned long sfMessageTextureTEX0();
unsigned long sfMessageTextureExtcTEX0(int page);
unsigned long sfMessageTextureSkipTEX0();
unsigned short* sfMessageAddressInPack(sfMessagePack* mespack, int num);
int sfMessageDataTextLength(unsigned short* mes);
void sfMessageDataCopyTextOnly(unsigned short* dst, unsigned short* src);
int sfMessageDataLineNumber(unsigned short* mes);
void sfMessagePutSelectBarWithBlur(sfMessageRect* rect, int rect_num);
void sfMessageDmaWait();
void sfMessageDmaKick(void* adr);
void sfMessagePacketSwitch();
void sfMessagePacketInit();
void* sfMessagePacketOpenGiftag(unsigned long giftag1, unsigned long giftag2);
void sfMessagePacketCloseGiftag(unsigned long* pos);
void sfMessagePacketDmaKick();
void* sfMessagePacketCheck(void* pos, int use);
void sfMessagePacketFix();
void sfMessageDrawSelectBar();
void sfMessageDrawSelectBarBlur();
void sfMessageDrawExtra();
void sfMessageDrawExternalCharacter();
void sfMessageDrawSkipCharacter();
void sfMessageDrawFont();
void sfMessageDraw();

// 
// Start address: 0x16b300
void sfMessageWorkInit()
{
	int i;
	unsigned int* p_clut;
	// Line 325, Address: 0x16b300, Func Offset: 0
	// Line 330, Address: 0x16b304, Func Offset: 0x4
	// Line 325, Address: 0x16b30c, Func Offset: 0xc
	// Line 330, Address: 0x16b310, Func Offset: 0x10
	// Line 332, Address: 0x16b31c, Func Offset: 0x1c
	// Line 333, Address: 0x16b328, Func Offset: 0x28
	// Line 337, Address: 0x16b360, Func Offset: 0x60
	// Line 340, Address: 0x16b364, Func Offset: 0x64
	// Line 337, Address: 0x16b368, Func Offset: 0x68
	// Line 342, Address: 0x16b36c, Func Offset: 0x6c
	// Line 340, Address: 0x16b370, Func Offset: 0x70
	// Line 338, Address: 0x16b374, Func Offset: 0x74
	// Line 340, Address: 0x16b378, Func Offset: 0x78
	// Line 342, Address: 0x16b37c, Func Offset: 0x7c
	// Line 340, Address: 0x16b380, Func Offset: 0x80
	// Line 342, Address: 0x16b3bc, Func Offset: 0xbc
	// Line 345, Address: 0x16b3c8, Func Offset: 0xc8
	// Line 349, Address: 0x16b3e4, Func Offset: 0xe4
	// Line 350, Address: 0x16b3f0, Func Offset: 0xf0
	// Line 354, Address: 0x16b444, Func Offset: 0x144
	// Line 357, Address: 0x16b44c, Func Offset: 0x14c
	// Line 358, Address: 0x16b458, Func Offset: 0x158
	// Line 359, Address: 0x16b460, Func Offset: 0x160
	// Func End, Address: 0x16b46c, Func Offset: 0x16c
}

// 
// Start address: 0x16b470
void sfMessageSetDataAddress()
{
	int i;
	void* adr;
	// Line 363, Address: 0x16b470, Func Offset: 0
	// Line 366, Address: 0x16b484, Func Offset: 0x14
	// Line 367, Address: 0x16b49c, Func Offset: 0x2c
	// Line 368, Address: 0x16b4a4, Func Offset: 0x34
	// Line 369, Address: 0x16b4c0, Func Offset: 0x50
	// Line 372, Address: 0x16b4dc, Func Offset: 0x6c
	// Line 373, Address: 0x16b4f0, Func Offset: 0x80
	// Line 374, Address: 0x16b500, Func Offset: 0x90
	// Line 375, Address: 0x16b508, Func Offset: 0x98
	// Line 376, Address: 0x16b510, Func Offset: 0xa0
	// Line 377, Address: 0x16b520, Func Offset: 0xb0
	// Line 376, Address: 0x16b524, Func Offset: 0xb4
	// Line 377, Address: 0x16b528, Func Offset: 0xb8
	// Line 378, Address: 0x16b538, Func Offset: 0xc8
	// Line 377, Address: 0x16b53c, Func Offset: 0xcc
	// Line 378, Address: 0x16b544, Func Offset: 0xd4
	// Line 380, Address: 0x16b550, Func Offset: 0xe0
	// Line 381, Address: 0x16b560, Func Offset: 0xf0
	// Line 382, Address: 0x16b568, Func Offset: 0xf8
	// Line 383, Address: 0x16b574, Func Offset: 0x104
	// Line 382, Address: 0x16b578, Func Offset: 0x108
	// Line 383, Address: 0x16b57c, Func Offset: 0x10c
	// Line 384, Address: 0x16b58c, Func Offset: 0x11c
	// Line 385, Address: 0x16b590, Func Offset: 0x120
	// Func End, Address: 0x16b5a8, Func Offset: 0x138
}

// 
// Start address: 0x16b5b0
void sfMessageSetFontDataID(unsigned int id, sfMessageFontType type)
{
	// Line 393, Address: 0x16b5b0, Func Offset: 0
	// Line 394, Address: 0x16b5c4, Func Offset: 0x14
	// Func End, Address: 0x16b5cc, Func Offset: 0x1c
}

// 
// Start address: 0x16b5d0
void sfMessageSetExternalCharacterTextureID(unsigned int id)
{
	// Line 401, Address: 0x16b5d0, Func Offset: 0
	// Line 402, Address: 0x16b5d4, Func Offset: 0x4
	// Func End, Address: 0x16b5dc, Func Offset: 0xc
}

// 
// Start address: 0x16b5e0
void sfMessageSetSkipCharacterTextureID(unsigned int id)
{
	// Line 409, Address: 0x16b5e0, Func Offset: 0
	// Line 410, Address: 0x16b5e4, Func Offset: 0x4
	// Func End, Address: 0x16b5ec, Func Offset: 0xc
}

// 
// Start address: 0x16b5f0
void sfMessageBufferClear()
{
	// Line 415, Address: 0x16b5f0, Func Offset: 0
	// Line 416, Address: 0x16b5f4, Func Offset: 0x4
	// Line 415, Address: 0x16b5f8, Func Offset: 0x8
	// Line 421, Address: 0x16b5fc, Func Offset: 0xc
	// Line 416, Address: 0x16b600, Func Offset: 0x10
	// Line 417, Address: 0x16b604, Func Offset: 0x14
	// Line 421, Address: 0x16b60c, Func Offset: 0x1c
	// Line 418, Address: 0x16b614, Func Offset: 0x24
	// Line 419, Address: 0x16b61c, Func Offset: 0x2c
	// Line 420, Address: 0x16b624, Func Offset: 0x34
	// Line 424, Address: 0x16b628, Func Offset: 0x38
	// Line 425, Address: 0x16b630, Func Offset: 0x40
	// Line 428, Address: 0x16b63c, Func Offset: 0x4c
	// Line 429, Address: 0x16b644, Func Offset: 0x54
	// Func End, Address: 0x16b650, Func Offset: 0x60
}

// 
// Start address: 0x16b650
void sfMessageDefaultSetting()
{
	// Line 434, Address: 0x16b650, Func Offset: 0
	// Line 435, Address: 0x16b654, Func Offset: 0x4
	// Line 434, Address: 0x16b658, Func Offset: 0x8
	// Line 435, Address: 0x16b65c, Func Offset: 0xc
	// Line 436, Address: 0x16b664, Func Offset: 0x14
	// Line 437, Address: 0x16b670, Func Offset: 0x20
	// Line 438, Address: 0x16b678, Func Offset: 0x28
	// Line 439, Address: 0x16b680, Func Offset: 0x30
	// Line 441, Address: 0x16b6a4, Func Offset: 0x54
	// Func End, Address: 0x16b6b4, Func Offset: 0x64
}

// 
// Start address: 0x16b6c0
void sfMessageSetFontType(sfMessageFontType type)
{
	// Line 448, Address: 0x16b6c0, Func Offset: 0
	// Line 449, Address: 0x16b6c4, Func Offset: 0x4
	// Func End, Address: 0x16b6cc, Func Offset: 0xc
}

// 
// Start address: 0x16b6d0
void sfMessageSetBasePos(int x, int y)
{
	// Line 458, Address: 0x16b6d0, Func Offset: 0
	// Line 459, Address: 0x16b6e4, Func Offset: 0x14
	// Line 460, Address: 0x16b714, Func Offset: 0x44
	// Line 461, Address: 0x16b748, Func Offset: 0x78
	// Func End, Address: 0x16b75c, Func Offset: 0x8c
}

// 
// Start address: 0x16b760
void sfMessageSetScissor(int x0, int x1, int y0, int y1)
{
	// Line 471, Address: 0x16b760, Func Offset: 0
	// Line 472, Address: 0x16b764, Func Offset: 0x4
	// Line 471, Address: 0x16b768, Func Offset: 0x8
	// Line 473, Address: 0x16b76c, Func Offset: 0xc
	// Line 472, Address: 0x16b774, Func Offset: 0x14
	// Line 474, Address: 0x16b77c, Func Offset: 0x1c
	// Line 475, Address: 0x16b784, Func Offset: 0x24
	// Func End, Address: 0x16b78c, Func Offset: 0x2c
}

// 
// Start address: 0x16b790
void sfMessageSetSpace(int x, int y)
{
	// Line 483, Address: 0x16b790, Func Offset: 0
	// Line 484, Address: 0x16b798, Func Offset: 0x8
	// Line 485, Address: 0x16b79c, Func Offset: 0xc
	// Func End, Address: 0x16b7a4, Func Offset: 0x14
}

// 
// Start address: 0x16b7b0
void sfMessageSetColor(sfMessageColor color)
{
	unsigned int alpha;
	// Line 504, Address: 0x16b7b0, Func Offset: 0
	// Line 506, Address: 0x16b7bc, Func Offset: 0xc
	// Line 507, Address: 0x16b7d0, Func Offset: 0x20
	// Line 509, Address: 0x16b7dc, Func Offset: 0x2c
	// Line 510, Address: 0x16b7e0, Func Offset: 0x30
	// Line 509, Address: 0x16b7e4, Func Offset: 0x34
	// Line 510, Address: 0x16b7e8, Func Offset: 0x38
	// Line 509, Address: 0x16b7ec, Func Offset: 0x3c
	// Line 510, Address: 0x16b7f8, Func Offset: 0x48
	// Line 509, Address: 0x16b7fc, Func Offset: 0x4c
	// Line 510, Address: 0x16b804, Func Offset: 0x54
	// Line 511, Address: 0x16b814, Func Offset: 0x64
	// Func End, Address: 0x16b820, Func Offset: 0x70
}

// 
// Start address: 0x16b820
void sfMessageSetColorDirect(unsigned int color)
{
	// Line 519, Address: 0x16b820, Func Offset: 0
	// Line 521, Address: 0x16b844, Func Offset: 0x24
	// Func End, Address: 0x16b84c, Func Offset: 0x2c
}

// 
// Start address: 0x16b850
void sfMessageSetColorDirect2(unsigned int color_upper, unsigned int color_lower)
{
	unsigned int alpha;
	// Line 531, Address: 0x16b850, Func Offset: 0
	// Line 529, Address: 0x16b854, Func Offset: 0x4
	// Line 530, Address: 0x16b85c, Func Offset: 0xc
	// Line 531, Address: 0x16b864, Func Offset: 0x14
	// Line 529, Address: 0x16b868, Func Offset: 0x18
	// Line 530, Address: 0x16b86c, Func Offset: 0x1c
	// Line 531, Address: 0x16b874, Func Offset: 0x24
	// Line 530, Address: 0x16b878, Func Offset: 0x28
	// Line 531, Address: 0x16b87c, Func Offset: 0x2c
	// Line 532, Address: 0x16b880, Func Offset: 0x30
	// Func End, Address: 0x16b888, Func Offset: 0x38
}

// 
// Start address: 0x16b890
void sfMessageSetAlpha(unsigned int alpha)
{
	// Line 540, Address: 0x16b890, Func Offset: 0
	// Line 542, Address: 0x16b894, Func Offset: 0x4
	// Line 540, Address: 0x16b898, Func Offset: 0x8
	// Line 542, Address: 0x16b89c, Func Offset: 0xc
	// Line 543, Address: 0x16b8a4, Func Offset: 0x14
	// Line 542, Address: 0x16b8a8, Func Offset: 0x18
	// Line 543, Address: 0x16b8ac, Func Offset: 0x1c
	// Line 542, Address: 0x16b8b0, Func Offset: 0x20
	// Line 543, Address: 0x16b8b8, Func Offset: 0x28
	// Line 542, Address: 0x16b8bc, Func Offset: 0x2c
	// Line 543, Address: 0x16b8c0, Func Offset: 0x30
	// Line 542, Address: 0x16b8c4, Func Offset: 0x34
	// Line 543, Address: 0x16b8c8, Func Offset: 0x38
	// Line 544, Address: 0x16b8d0, Func Offset: 0x40
	// Func End, Address: 0x16b8d8, Func Offset: 0x48
}

// 
// Start address: 0x16b8e0
void sfMessageSetSelectColor(unsigned int color)
{
	// Line 551, Address: 0x16b8e0, Func Offset: 0
	// Line 552, Address: 0x16b8ec, Func Offset: 0xc
	// Func End, Address: 0x16b8f4, Func Offset: 0x14
}

// 
// Start address: 0x16b900
void sfMessageSetSelectColorAlpha(unsigned int alpha)
{
	// Line 559, Address: 0x16b900, Func Offset: 0
	// Line 560, Address: 0x16b904, Func Offset: 0x4
	// Func End, Address: 0x16b90c, Func Offset: 0xc
}

// 
// Start address: 0x16b910
void sfMessageEnableDoubleMode()
{
	// Line 566, Address: 0x16b910, Func Offset: 0
	// Line 567, Address: 0x16b918, Func Offset: 0x8
	// Func End, Address: 0x16b920, Func Offset: 0x10
}

// 
// Start address: 0x16b920
void sfMessageDisableDoubleMode()
{
	// Line 573, Address: 0x16b920, Func Offset: 0
	// Line 574, Address: 0x16b924, Func Offset: 0x4
	// Func End, Address: 0x16b92c, Func Offset: 0xc
}

// 
// Start address: 0x16b930
void sfMessageSetExtraCharaNumber(int set_num, int src_num)
{
	// Line 591, Address: 0x16b930, Func Offset: 0
	// Line 592, Address: 0x16b93c, Func Offset: 0xc
	// Func End, Address: 0x16b944, Func Offset: 0x14
}

// 
// Start address: 0x16b950
unsigned char sfMessageGetData(unsigned int** p_pos, int* p_bp, unsigned long* p_d)
{
	unsigned int* pos;
	int bp;
	unsigned long d;
	unsigned char c;
	// Line 602, Address: 0x16b950, Func Offset: 0
	// Line 603, Address: 0x16b954, Func Offset: 0x4
	// Line 605, Address: 0x16b958, Func Offset: 0x8
	// Line 606, Address: 0x16b964, Func Offset: 0x14
	// Line 607, Address: 0x16b970, Func Offset: 0x20
	// Line 606, Address: 0x16b974, Func Offset: 0x24
	// Line 612, Address: 0x16b980, Func Offset: 0x30
	// Line 613, Address: 0x16b984, Func Offset: 0x34
	// Line 609, Address: 0x16b988, Func Offset: 0x38
	// Line 613, Address: 0x16b98c, Func Offset: 0x3c
	// Line 614, Address: 0x16b990, Func Offset: 0x40
	// Line 616, Address: 0x16b994, Func Offset: 0x44
	// Func End, Address: 0x16b99c, Func Offset: 0x4c
}

// 
// Start address: 0x16b9a0
int sfMessageLoadExec(unsigned short code, int n)
{
	unsigned short adr;
	unsigned char* b;
	int y;
	int fw;
	int fh;
	unsigned int* pos;
	unsigned char* fontdata;
	unsigned short* adr_p;
	unsigned int c;
	int bp;
	int x;
	int L;
	unsigned long d;
	unsigned char c;
	unsigned char bd;
	// Line 629, Address: 0x16b9a0, Func Offset: 0
	// Line 624, Address: 0x16b9ac, Func Offset: 0xc
	// Line 629, Address: 0x16b9b0, Func Offset: 0x10
	// Line 624, Address: 0x16b9b4, Func Offset: 0x14
	// Line 629, Address: 0x16b9bc, Func Offset: 0x1c
	// Line 624, Address: 0x16b9c0, Func Offset: 0x20
	// Line 629, Address: 0x16b9c4, Func Offset: 0x24
	// Line 624, Address: 0x16b9c8, Func Offset: 0x28
	// Line 633, Address: 0x16b9cc, Func Offset: 0x2c
	// Line 629, Address: 0x16b9d0, Func Offset: 0x30
	// Line 624, Address: 0x16b9d4, Func Offset: 0x34
	// Line 629, Address: 0x16b9d8, Func Offset: 0x38
	// Line 624, Address: 0x16b9dc, Func Offset: 0x3c
	// Line 629, Address: 0x16b9e0, Func Offset: 0x40
	// Line 624, Address: 0x16b9e4, Func Offset: 0x44
	// Line 630, Address: 0x16b9e8, Func Offset: 0x48
	// Line 629, Address: 0x16b9ec, Func Offset: 0x4c
	// Line 634, Address: 0x16ba04, Func Offset: 0x64
	// Line 630, Address: 0x16ba08, Func Offset: 0x68
	// Line 634, Address: 0x16ba0c, Func Offset: 0x6c
	// Line 635, Address: 0x16ba20, Func Offset: 0x80
	// Line 636, Address: 0x16ba34, Func Offset: 0x94
	// Line 640, Address: 0x16ba48, Func Offset: 0xa8
	// Line 639, Address: 0x16ba54, Func Offset: 0xb4
	// Line 638, Address: 0x16ba58, Func Offset: 0xb8
	// Line 640, Address: 0x16ba64, Func Offset: 0xc4
	// Line 639, Address: 0x16ba68, Func Offset: 0xc8
	// Line 640, Address: 0x16ba6c, Func Offset: 0xcc
	// Line 639, Address: 0x16ba70, Func Offset: 0xd0
	// Line 640, Address: 0x16ba74, Func Offset: 0xd4
	// Line 639, Address: 0x16ba78, Func Offset: 0xd8
	// Line 640, Address: 0x16ba80, Func Offset: 0xe0
	// Line 648, Address: 0x16bac4, Func Offset: 0x124
	// Line 640, Address: 0x16bac8, Func Offset: 0x128
	// Line 648, Address: 0x16bacc, Func Offset: 0x12c
	// Line 640, Address: 0x16bad0, Func Offset: 0x130
	// Line 643, Address: 0x16bad4, Func Offset: 0x134
	// Line 648, Address: 0x16bae0, Func Offset: 0x140
	// Line 650, Address: 0x16bb10, Func Offset: 0x170
	// Line 653, Address: 0x16bb20, Func Offset: 0x180
	// Line 650, Address: 0x16bb28, Func Offset: 0x188
	// Line 653, Address: 0x16bb34, Func Offset: 0x194
	// Line 654, Address: 0x16bb38, Func Offset: 0x198
	// Line 655, Address: 0x16bb58, Func Offset: 0x1b8
	// Line 657, Address: 0x16bb68, Func Offset: 0x1c8
	// Line 665, Address: 0x16bb88, Func Offset: 0x1e8
	// Line 669, Address: 0x16bb8c, Func Offset: 0x1ec
	// Line 666, Address: 0x16bb90, Func Offset: 0x1f0
	// Line 667, Address: 0x16bb94, Func Offset: 0x1f4
	// Line 665, Address: 0x16bb98, Func Offset: 0x1f8
	// Line 668, Address: 0x16bb9c, Func Offset: 0x1fc
	// Line 669, Address: 0x16bba0, Func Offset: 0x200
	// Line 670, Address: 0x16bbc8, Func Offset: 0x228
	// Line 671, Address: 0x16bbd8, Func Offset: 0x238
	// Line 674, Address: 0x16bbe0, Func Offset: 0x240
	// Line 675, Address: 0x16bbe8, Func Offset: 0x248
	// Line 676, Address: 0x16bbfc, Func Offset: 0x25c
	// Line 679, Address: 0x16bc08, Func Offset: 0x268
	// Line 680, Address: 0x16bc14, Func Offset: 0x274
	// Line 681, Address: 0x16bc1c, Func Offset: 0x27c
	// Line 682, Address: 0x16bc28, Func Offset: 0x288
	// Line 681, Address: 0x16bc2c, Func Offset: 0x28c
	// Line 682, Address: 0x16bc30, Func Offset: 0x290
	// Line 683, Address: 0x16bc38, Func Offset: 0x298
	// Line 684, Address: 0x16bc44, Func Offset: 0x2a4
	// Line 683, Address: 0x16bc48, Func Offset: 0x2a8
	// Line 684, Address: 0x16bc4c, Func Offset: 0x2ac
	// Line 685, Address: 0x16bc54, Func Offset: 0x2b4
	// Line 686, Address: 0x16bc60, Func Offset: 0x2c0
	// Line 687, Address: 0x16bc70, Func Offset: 0x2d0
	// Line 686, Address: 0x16bc74, Func Offset: 0x2d4
	// Line 687, Address: 0x16bc78, Func Offset: 0x2d8
	// Line 688, Address: 0x16bc80, Func Offset: 0x2e0
	// Line 689, Address: 0x16bc8c, Func Offset: 0x2ec
	// Line 690, Address: 0x16bc9c, Func Offset: 0x2fc
	// Line 697, Address: 0x16bcb0, Func Offset: 0x310
	// Line 698, Address: 0x16bcbc, Func Offset: 0x31c
	// Line 699, Address: 0x16bccc, Func Offset: 0x32c
	// Line 700, Address: 0x16bcd8, Func Offset: 0x338
	// Line 702, Address: 0x16bcdc, Func Offset: 0x33c
	// Line 703, Address: 0x16bcf0, Func Offset: 0x350
	// Line 704, Address: 0x16bcfc, Func Offset: 0x35c
	// Line 706, Address: 0x16bd10, Func Offset: 0x370
	// Line 707, Address: 0x16bd18, Func Offset: 0x378
	// Func End, Address: 0x16bd3c, Func Offset: 0x39c
}

// 
// Start address: 0x16bd40
int sfMessageLoad(unsigned short code)
{
	short n;
	sfListMan* lm;
	unsigned char* phash;
	// Line 714, Address: 0x16bd40, Func Offset: 0
	// Line 718, Address: 0x16bd4c, Func Offset: 0xc
	// Line 714, Address: 0x16bd50, Func Offset: 0x10
	// Line 716, Address: 0x16bd60, Func Offset: 0x20
	// Line 714, Address: 0x16bd64, Func Offset: 0x24
	// Line 716, Address: 0x16bd68, Func Offset: 0x28
	// Line 718, Address: 0x16bd6c, Func Offset: 0x2c
	// Line 719, Address: 0x16bd74, Func Offset: 0x34
	// Line 721, Address: 0x16bd84, Func Offset: 0x44
	// Line 722, Address: 0x16bd88, Func Offset: 0x48
	// Line 723, Address: 0x16bd94, Func Offset: 0x54
	// Line 722, Address: 0x16bd9c, Func Offset: 0x5c
	// Line 723, Address: 0x16bda0, Func Offset: 0x60
	// Line 722, Address: 0x16bda8, Func Offset: 0x68
	// Line 723, Address: 0x16bdb4, Func Offset: 0x74
	// Line 725, Address: 0x16bdc4, Func Offset: 0x84
	// Line 726, Address: 0x16bddc, Func Offset: 0x9c
	// Line 727, Address: 0x16bdf8, Func Offset: 0xb8
	// Line 728, Address: 0x16be0c, Func Offset: 0xcc
	// Line 732, Address: 0x16be1c, Func Offset: 0xdc
	// Line 733, Address: 0x16be24, Func Offset: 0xe4
	// Line 735, Address: 0x16be30, Func Offset: 0xf0
	// Line 736, Address: 0x16be3c, Func Offset: 0xfc
	// Line 738, Address: 0x16be48, Func Offset: 0x108
	// Line 739, Address: 0x16be58, Func Offset: 0x118
	// Line 741, Address: 0x16be60, Func Offset: 0x120
	// Line 742, Address: 0x16be6c, Func Offset: 0x12c
	// Line 741, Address: 0x16be70, Func Offset: 0x130
	// Line 742, Address: 0x16be74, Func Offset: 0x134
	// Line 743, Address: 0x16be7c, Func Offset: 0x13c
	// Line 745, Address: 0x16be88, Func Offset: 0x148
	// Line 746, Address: 0x16bea0, Func Offset: 0x160
	// Line 747, Address: 0x16bea8, Func Offset: 0x168
	// Line 748, Address: 0x16bebc, Func Offset: 0x17c
	// Line 749, Address: 0x16bec8, Func Offset: 0x188
	// Line 750, Address: 0x16bedc, Func Offset: 0x19c
	// Line 751, Address: 0x16bee8, Func Offset: 0x1a8
	// Line 757, Address: 0x16bef4, Func Offset: 0x1b4
	// Line 758, Address: 0x16bef8, Func Offset: 0x1b8
	// Func End, Address: 0x16bf18, Func Offset: 0x1d8
}

// 
// Start address: 0x16bf20
int sfMessageLatinFontWidth(unsigned short code)
{
	// Line 765, Address: 0x16bf20, Func Offset: 0
	// Line 766, Address: 0x16bf44, Func Offset: 0x24
	// Func End, Address: 0x16bf4c, Func Offset: 0x2c
}

// 
// Start address: 0x16bf50
int sfMessageLatinFontOffset(unsigned short code)
{
	unsigned char c;
	// Line 773, Address: 0x16bf50, Func Offset: 0
	// Line 774, Address: 0x16bf7c, Func Offset: 0x2c
	// Line 776, Address: 0x16bf94, Func Offset: 0x44
	// Func End, Address: 0x16bf9c, Func Offset: 0x4c
}

// 
// Start address: 0x16bfa0
int sfMessageLatinFontOffset2(unsigned short code)
{
	unsigned char c;
	// Line 783, Address: 0x16bfa0, Func Offset: 0
	// Line 784, Address: 0x16bfd0, Func Offset: 0x30
	// Line 786, Address: 0x16bfe8, Func Offset: 0x48
	// Func End, Address: 0x16bff0, Func Offset: 0x50
}

// 
// Start address: 0x16bff0
unsigned int color_mix(unsigned int color1, unsigned int color2)
{
	unsigned int mixed_color;
	unsigned int tc;
	int i;
	// Line 797, Address: 0x16bff0, Func Offset: 0
	// Line 798, Address: 0x16bff4, Func Offset: 0x4
	// Line 799, Address: 0x16c000, Func Offset: 0x10
	// Line 800, Address: 0x16c00c, Func Offset: 0x1c
	// Line 801, Address: 0x16c01c, Func Offset: 0x2c
	// Line 802, Address: 0x16c030, Func Offset: 0x40
	// Line 805, Address: 0x16c038, Func Offset: 0x48
	// Line 803, Address: 0x16c040, Func Offset: 0x50
	// Line 804, Address: 0x16c044, Func Offset: 0x54
	// Line 805, Address: 0x16c048, Func Offset: 0x58
	// Line 807, Address: 0x16c050, Func Offset: 0x60
	// Func End, Address: 0x16c058, Func Offset: 0x68
}

// 
// Start address: 0x16c060
void sfMessageSetOne(unsigned short code, int x, int y)
{
	int num;
	sfMessageData1* pf;
	unsigned int col_u;
	unsigned int col_l;
	unsigned int a;
	// Line 815, Address: 0x16c060, Func Offset: 0
	// Line 820, Address: 0x16c064, Func Offset: 0x4
	// Line 815, Address: 0x16c068, Func Offset: 0x8
	// Line 820, Address: 0x16c080, Func Offset: 0x20
	// Line 821, Address: 0x16c090, Func Offset: 0x30
	// Line 827, Address: 0x16c098, Func Offset: 0x38
	// Line 822, Address: 0x16c09c, Func Offset: 0x3c
	// Line 827, Address: 0x16c0a0, Func Offset: 0x40
	// Line 822, Address: 0x16c0a4, Func Offset: 0x44
	// Line 825, Address: 0x16c0ac, Func Offset: 0x4c
	// Line 826, Address: 0x16c0b0, Func Offset: 0x50
	// Line 822, Address: 0x16c0b4, Func Offset: 0x54
	// Line 825, Address: 0x16c0b8, Func Offset: 0x58
	// Line 826, Address: 0x16c0bc, Func Offset: 0x5c
	// Line 828, Address: 0x16c0c0, Func Offset: 0x60
	// Line 831, Address: 0x16c0c4, Func Offset: 0x64
	// Line 822, Address: 0x16c0c8, Func Offset: 0x68
	// Line 828, Address: 0x16c0dc, Func Offset: 0x7c
	// Line 822, Address: 0x16c0e4, Func Offset: 0x84
	// Line 823, Address: 0x16c0f8, Func Offset: 0x98
	// Line 825, Address: 0x16c0fc, Func Offset: 0x9c
	// Line 824, Address: 0x16c100, Func Offset: 0xa0
	// Line 825, Address: 0x16c104, Func Offset: 0xa4
	// Line 826, Address: 0x16c10c, Func Offset: 0xac
	// Line 825, Address: 0x16c110, Func Offset: 0xb0
	// Line 826, Address: 0x16c11c, Func Offset: 0xbc
	// Line 829, Address: 0x16c124, Func Offset: 0xc4
	// Line 826, Address: 0x16c128, Func Offset: 0xc8
	// Line 827, Address: 0x16c130, Func Offset: 0xd0
	// Line 826, Address: 0x16c134, Func Offset: 0xd4
	// Line 828, Address: 0x16c138, Func Offset: 0xd8
	// Line 827, Address: 0x16c13c, Func Offset: 0xdc
	// Line 828, Address: 0x16c14c, Func Offset: 0xec
	// Line 829, Address: 0x16c168, Func Offset: 0x108
	// Line 830, Address: 0x16c16c, Func Offset: 0x10c
	// Line 831, Address: 0x16c174, Func Offset: 0x114
	// Line 834, Address: 0x16c180, Func Offset: 0x120
	// Line 835, Address: 0x16c198, Func Offset: 0x138
	// Line 836, Address: 0x16c1a8, Func Offset: 0x148
	// Line 837, Address: 0x16c1b4, Func Offset: 0x154
	// Line 836, Address: 0x16c1b8, Func Offset: 0x158
	// Line 838, Address: 0x16c1bc, Func Offset: 0x15c
	// Line 839, Address: 0x16c1d4, Func Offset: 0x174
	// Line 840, Address: 0x16c1e8, Func Offset: 0x188
	// Line 842, Address: 0x16c1f8, Func Offset: 0x198
	// Line 843, Address: 0x16c1fc, Func Offset: 0x19c
	// Line 844, Address: 0x16c200, Func Offset: 0x1a0
	// Func End, Address: 0x16c218, Func Offset: 0x1b8
}

// 
// Start address: 0x16c220
void sfMessageSetExternalCharacter(int extc_code, int x, int y)
{
	sfMessageDataExtc* pf;
	sfMessageExternalCharacterData* pecd;
	int oh;
	int h;
	// Line 852, Address: 0x16c220, Func Offset: 0
	// Line 857, Address: 0x16c224, Func Offset: 0x4
	// Line 852, Address: 0x16c228, Func Offset: 0x8
	// Line 857, Address: 0x16c22c, Func Offset: 0xc
	// Line 858, Address: 0x16c23c, Func Offset: 0x1c
	// Line 859, Address: 0x16c248, Func Offset: 0x28
	// Line 860, Address: 0x16c254, Func Offset: 0x34
	// Line 862, Address: 0x16c258, Func Offset: 0x38
	// Line 861, Address: 0x16c260, Func Offset: 0x40
	// Line 862, Address: 0x16c268, Func Offset: 0x48
	// Line 861, Address: 0x16c26c, Func Offset: 0x4c
	// Line 862, Address: 0x16c278, Func Offset: 0x58
	// Line 861, Address: 0x16c27c, Func Offset: 0x5c
	// Line 862, Address: 0x16c280, Func Offset: 0x60
	// Line 864, Address: 0x16c2a0, Func Offset: 0x80
	// Line 862, Address: 0x16c2a8, Func Offset: 0x88
	// Line 864, Address: 0x16c2cc, Func Offset: 0xac
	// Line 865, Address: 0x16c2d4, Func Offset: 0xb4
	// Line 864, Address: 0x16c2d8, Func Offset: 0xb8
	// Line 866, Address: 0x16c2e8, Func Offset: 0xc8
	// Line 867, Address: 0x16c300, Func Offset: 0xe0
	// Line 866, Address: 0x16c304, Func Offset: 0xe4
	// Line 867, Address: 0x16c308, Func Offset: 0xe8
	// Line 866, Address: 0x16c310, Func Offset: 0xf0
	// Line 867, Address: 0x16c318, Func Offset: 0xf8
	// Line 870, Address: 0x16c334, Func Offset: 0x114
	// Line 867, Address: 0x16c338, Func Offset: 0x118
	// Line 868, Address: 0x16c350, Func Offset: 0x130
	// Line 869, Address: 0x16c354, Func Offset: 0x134
	// Line 870, Address: 0x16c358, Func Offset: 0x138
	// Line 871, Address: 0x16c368, Func Offset: 0x148
	// Line 872, Address: 0x16c37c, Func Offset: 0x15c
	// Line 873, Address: 0x16c388, Func Offset: 0x168
	// Line 874, Address: 0x16c3a8, Func Offset: 0x188
	// Line 875, Address: 0x16c3c4, Func Offset: 0x1a4
	// Line 876, Address: 0x16c3c8, Func Offset: 0x1a8
	// Line 877, Address: 0x16c3e8, Func Offset: 0x1c8
	// Func End, Address: 0x16c3f4, Func Offset: 0x1d4
}

// 
// Start address: 0x16c400
void sfMessageSetBlankBox(int x, int y, int w, int h)
{
	sfMessageDataEx* pf;
	// Line 889, Address: 0x16c400, Func Offset: 0
	// Line 890, Address: 0x16c414, Func Offset: 0x14
	// Line 891, Address: 0x16c440, Func Offset: 0x40
	// Line 898, Address: 0x16c444, Func Offset: 0x44
	// Line 892, Address: 0x16c448, Func Offset: 0x48
	// Line 893, Address: 0x16c44c, Func Offset: 0x4c
	// Line 894, Address: 0x16c450, Func Offset: 0x50
	// Line 895, Address: 0x16c454, Func Offset: 0x54
	// Line 896, Address: 0x16c45c, Func Offset: 0x5c
	// Line 897, Address: 0x16c460, Func Offset: 0x60
	// Line 898, Address: 0x16c464, Func Offset: 0x64
	// Line 899, Address: 0x16c46c, Func Offset: 0x6c
	// Line 900, Address: 0x16c478, Func Offset: 0x78
	// Func End, Address: 0x16c480, Func Offset: 0x80
}

// 
// Start address: 0x16c480
void sfMessageSetHLine(int x, int y, int w)
{
	sfMessageDataEx* pf;
	// Line 911, Address: 0x16c480, Func Offset: 0
	// Line 912, Address: 0x16c494, Func Offset: 0x14
	// Line 914, Address: 0x16c49c, Func Offset: 0x1c
	// Line 912, Address: 0x16c4a0, Func Offset: 0x20
	// Line 916, Address: 0x16c4bc, Func Offset: 0x3c
	// Line 912, Address: 0x16c4c0, Func Offset: 0x40
	// Line 919, Address: 0x16c4c8, Func Offset: 0x48
	// Line 913, Address: 0x16c4cc, Func Offset: 0x4c
	// Line 920, Address: 0x16c4d0, Func Offset: 0x50
	// Line 914, Address: 0x16c4d4, Func Offset: 0x54
	// Line 915, Address: 0x16c4d8, Func Offset: 0x58
	// Line 916, Address: 0x16c4dc, Func Offset: 0x5c
	// Line 917, Address: 0x16c4e0, Func Offset: 0x60
	// Line 918, Address: 0x16c4e8, Func Offset: 0x68
	// Line 919, Address: 0x16c4ec, Func Offset: 0x6c
	// Line 920, Address: 0x16c4f0, Func Offset: 0x70
	// Line 921, Address: 0x16c4f8, Func Offset: 0x78
	// Line 922, Address: 0x16c504, Func Offset: 0x84
	// Func End, Address: 0x16c510, Func Offset: 0x90
}

// 
// Start address: 0x16c510
void sfMessageSetSkipCharacterPos(int x, int y)
{
	// Line 929, Address: 0x16c510, Func Offset: 0
	// Line 930, Address: 0x16c514, Func Offset: 0x4
	// Line 929, Address: 0x16c518, Func Offset: 0x8
	// Line 932, Address: 0x16c51c, Func Offset: 0xc
	// Line 930, Address: 0x16c520, Func Offset: 0x10
	// Line 931, Address: 0x16c524, Func Offset: 0x14
	// Line 932, Address: 0x16c52c, Func Offset: 0x1c
	// Line 934, Address: 0x16c544, Func Offset: 0x34
	// Line 936, Address: 0x16c560, Func Offset: 0x50
	// Func End, Address: 0x16c56c, Func Offset: 0x5c
}

// 
// Start address: 0x16c570
void sfMessageSetSkipCharacterEnable(int enable)
{
	// Line 943, Address: 0x16c570, Func Offset: 0
	// Line 944, Address: 0x16c574, Func Offset: 0x4
	// Func End, Address: 0x16c57c, Func Offset: 0xc
}

// 
// Start address: 0x16c580
void sfMessagePrint(unsigned short* mes, int pos_x, int pos_y)
{
	// Line 963, Address: 0x16c580, Func Offset: 0
	// Func End, Address: 0x16c58c, Func Offset: 0xc
}

// 
// Start address: 0x16c590
void sfMessagePrintAlign(unsigned short* mes, int pos_x, int pos_y, sfMessageAlignRow align1, sfMessageAlignColumn align2)
{
	unsigned short* pos;
	unsigned short* pos_stack;
	unsigned short d;
	unsigned short dh;
	unsigned char* pos_c;
	unsigned char* pos_stack_c;
	int x;
	int y;
	int sw;
	int sh;
	int sx;
	int w;
	int h;
	int wm;
	int ln;
	int bbx;
	int sln;
	int sn;
	unsigned int color_bk_u;
	unsigned int color_bk_l;
	sfMessageType type;
	// Line 976, Address: 0x16c590, Func Offset: 0
	// Line 983, Address: 0x16c5c4, Func Offset: 0x34
	// Line 984, Address: 0x16c5cc, Func Offset: 0x3c
	// Line 985, Address: 0x16c5d4, Func Offset: 0x44
	// Line 986, Address: 0x16c5dc, Func Offset: 0x4c
	// Line 987, Address: 0x16c5e4, Func Offset: 0x54
	// Line 988, Address: 0x16c5e8, Func Offset: 0x58
	// Line 992, Address: 0x16c5f0, Func Offset: 0x60
	// Line 993, Address: 0x16c5f8, Func Offset: 0x68
	// Line 994, Address: 0x16c5fc, Func Offset: 0x6c
	// Line 998, Address: 0x16c600, Func Offset: 0x70
	// Line 993, Address: 0x16c604, Func Offset: 0x74
	// Line 994, Address: 0x16c608, Func Offset: 0x78
	// Line 991, Address: 0x16c60c, Func Offset: 0x7c
	// Line 1000, Address: 0x16c610, Func Offset: 0x80
	// Line 999, Address: 0x16c614, Func Offset: 0x84
	// Line 1001, Address: 0x16c618, Func Offset: 0x88
	// Line 1000, Address: 0x16c61c, Func Offset: 0x8c
	// Line 1005, Address: 0x16c620, Func Offset: 0x90
	// Line 992, Address: 0x16c624, Func Offset: 0x94
	// Line 1006, Address: 0x16c628, Func Offset: 0x98
	// Line 992, Address: 0x16c62c, Func Offset: 0x9c
	// Line 1006, Address: 0x16c630, Func Offset: 0xa0
	// Line 994, Address: 0x16c63c, Func Offset: 0xac
	// Line 993, Address: 0x16c640, Func Offset: 0xb0
	// Line 994, Address: 0x16c644, Func Offset: 0xb4
	// Line 993, Address: 0x16c648, Func Offset: 0xb8
	// Line 1007, Address: 0x16c64c, Func Offset: 0xbc
	// Line 994, Address: 0x16c650, Func Offset: 0xc0
	// Line 995, Address: 0x16c658, Func Offset: 0xc8
	// Line 993, Address: 0x16c65c, Func Offset: 0xcc
	// Line 995, Address: 0x16c660, Func Offset: 0xd0
	// Line 993, Address: 0x16c664, Func Offset: 0xd4
	// Line 994, Address: 0x16c668, Func Offset: 0xd8
	// Line 1005, Address: 0x16c670, Func Offset: 0xe0
	// Line 1007, Address: 0x16c674, Func Offset: 0xe4
	// Line 1008, Address: 0x16c688, Func Offset: 0xf8
	// Line 1009, Address: 0x16c694, Func Offset: 0x104
	// Line 1010, Address: 0x16c69c, Func Offset: 0x10c
	// Line 1011, Address: 0x16c6a0, Func Offset: 0x110
	// Line 1012, Address: 0x16c6b0, Func Offset: 0x120
	// Line 1013, Address: 0x16c6bc, Func Offset: 0x12c
	// Line 1014, Address: 0x16c6d4, Func Offset: 0x144
	// Line 1018, Address: 0x16c6fc, Func Offset: 0x16c
	// Line 1019, Address: 0x16c71c, Func Offset: 0x18c
	// Line 1021, Address: 0x16c748, Func Offset: 0x1b8
	// Line 1022, Address: 0x16c74c, Func Offset: 0x1bc
	// Line 1023, Address: 0x16c754, Func Offset: 0x1c4
	// Line 1024, Address: 0x16c758, Func Offset: 0x1c8
	// Line 1025, Address: 0x16c788, Func Offset: 0x1f8
	// Line 1027, Address: 0x16c790, Func Offset: 0x200
	// Line 1031, Address: 0x16c798, Func Offset: 0x208
	// Line 1030, Address: 0x16c7ac, Func Offset: 0x21c
	// Line 1031, Address: 0x16c7b0, Func Offset: 0x220
	// Line 1032, Address: 0x16c7b8, Func Offset: 0x228
	// Line 1034, Address: 0x16c7c8, Func Offset: 0x238
	// Line 1033, Address: 0x16c7cc, Func Offset: 0x23c
	// Line 1035, Address: 0x16c7d0, Func Offset: 0x240
	// Line 1043, Address: 0x16c7d8, Func Offset: 0x248
	// Line 1048, Address: 0x16c7dc, Func Offset: 0x24c
	// Line 1050, Address: 0x16c7e4, Func Offset: 0x254
	// Line 1051, Address: 0x16c7e8, Func Offset: 0x258
	// Line 1052, Address: 0x16c7f0, Func Offset: 0x260
	// Line 1053, Address: 0x16c80c, Func Offset: 0x27c
	// Line 1056, Address: 0x16c820, Func Offset: 0x290
	// Line 1054, Address: 0x16c830, Func Offset: 0x2a0
	// Line 1056, Address: 0x16c834, Func Offset: 0x2a4
	// Line 1055, Address: 0x16c838, Func Offset: 0x2a8
	// Line 1056, Address: 0x16c83c, Func Offset: 0x2ac
	// Line 1057, Address: 0x16c848, Func Offset: 0x2b8
	// Line 1060, Address: 0x16c850, Func Offset: 0x2c0
	// Line 1063, Address: 0x16c858, Func Offset: 0x2c8
	// Line 1066, Address: 0x16c860, Func Offset: 0x2d0
	// Line 1069, Address: 0x16c868, Func Offset: 0x2d8
	// Line 1072, Address: 0x16c870, Func Offset: 0x2e0
	// Line 1074, Address: 0x16c878, Func Offset: 0x2e8
	// Line 1077, Address: 0x16c894, Func Offset: 0x304
	// Line 1078, Address: 0x16c898, Func Offset: 0x308
	// Line 1076, Address: 0x16c8a4, Func Offset: 0x314
	// Line 1078, Address: 0x16c8a8, Func Offset: 0x318
	// Line 1083, Address: 0x16c8b4, Func Offset: 0x324
	// Line 1084, Address: 0x16c8c0, Func Offset: 0x330
	// Line 1086, Address: 0x16c8f0, Func Offset: 0x360
	// Line 1087, Address: 0x16c8f8, Func Offset: 0x368
	// Line 1089, Address: 0x16c900, Func Offset: 0x370
	// Line 1090, Address: 0x16c904, Func Offset: 0x374
	// Line 1091, Address: 0x16c90c, Func Offset: 0x37c
	// Line 1092, Address: 0x16c910, Func Offset: 0x380
	// Line 1093, Address: 0x16c914, Func Offset: 0x384
	// Line 1094, Address: 0x16c91c, Func Offset: 0x38c
	// Line 1095, Address: 0x16c920, Func Offset: 0x390
	// Line 1097, Address: 0x16c97c, Func Offset: 0x3ec
	// Line 1098, Address: 0x16c984, Func Offset: 0x3f4
	// Line 1099, Address: 0x16c988, Func Offset: 0x3f8
	// Line 1100, Address: 0x16c994, Func Offset: 0x404
	// Line 1104, Address: 0x16c998, Func Offset: 0x408
	// Line 1105, Address: 0x16c9a0, Func Offset: 0x410
	// Line 1106, Address: 0x16c9f0, Func Offset: 0x460
	// Line 1107, Address: 0x16c9f8, Func Offset: 0x468
	// Line 1109, Address: 0x16ca00, Func Offset: 0x470
	// Line 1111, Address: 0x16ca1c, Func Offset: 0x48c
	// Line 1110, Address: 0x16ca20, Func Offset: 0x490
	// Line 1113, Address: 0x16ca24, Func Offset: 0x494
	// Line 1114, Address: 0x16ca30, Func Offset: 0x4a0
	// Line 1115, Address: 0x16ca88, Func Offset: 0x4f8
	// Line 1116, Address: 0x16ca90, Func Offset: 0x500
	// Line 1119, Address: 0x16ca9c, Func Offset: 0x50c
	// Line 1120, Address: 0x16caa8, Func Offset: 0x518
	// Line 1121, Address: 0x16cab0, Func Offset: 0x520
	// Line 1122, Address: 0x16cab4, Func Offset: 0x524
	// Line 1123, Address: 0x16cac0, Func Offset: 0x530
	// Line 1122, Address: 0x16cac4, Func Offset: 0x534
	// Line 1123, Address: 0x16cac8, Func Offset: 0x538
	// Line 1124, Address: 0x16cad8, Func Offset: 0x548
	// Line 1126, Address: 0x16cae0, Func Offset: 0x550
	// Line 1136, Address: 0x16cae8, Func Offset: 0x558
	// Line 1134, Address: 0x16caec, Func Offset: 0x55c
	// Line 1136, Address: 0x16caf0, Func Offset: 0x560
	// Line 1134, Address: 0x16caf4, Func Offset: 0x564
	// Line 1132, Address: 0x16caf8, Func Offset: 0x568
	// Line 1133, Address: 0x16cafc, Func Offset: 0x56c
	// Line 1135, Address: 0x16cb08, Func Offset: 0x578
	// Line 1136, Address: 0x16cb0c, Func Offset: 0x57c
	// Line 1138, Address: 0x16cb30, Func Offset: 0x5a0
	// Line 1139, Address: 0x16cb40, Func Offset: 0x5b0
	// Line 1142, Address: 0x16cb48, Func Offset: 0x5b8
	// Line 1144, Address: 0x16cb50, Func Offset: 0x5c0
	// Line 1146, Address: 0x16cb7c, Func Offset: 0x5ec
	// Line 1147, Address: 0x16cb80, Func Offset: 0x5f0
	// Line 1148, Address: 0x16cb84, Func Offset: 0x5f4
	// Line 1154, Address: 0x16cb88, Func Offset: 0x5f8
	// Line 1149, Address: 0x16cb8c, Func Offset: 0x5fc
	// Line 1150, Address: 0x16cb90, Func Offset: 0x600
	// Line 1153, Address: 0x16cb94, Func Offset: 0x604
	// Line 1152, Address: 0x16cb98, Func Offset: 0x608
	// Line 1154, Address: 0x16cb9c, Func Offset: 0x60c
	// Line 1156, Address: 0x16cbe8, Func Offset: 0x658
	// Line 1158, Address: 0x16cc20, Func Offset: 0x690
	// Line 1159, Address: 0x16cc50, Func Offset: 0x6c0
	// Line 1161, Address: 0x16cc58, Func Offset: 0x6c8
	// Line 1162, Address: 0x16cc7c, Func Offset: 0x6ec
	// Line 1163, Address: 0x16cc84, Func Offset: 0x6f4
	// Line 1164, Address: 0x16cc88, Func Offset: 0x6f8
	// Line 1165, Address: 0x16cc90, Func Offset: 0x700
	// Line 1167, Address: 0x16cc98, Func Offset: 0x708
	// Line 1170, Address: 0x16ccd0, Func Offset: 0x740
	// Line 1167, Address: 0x16ccd8, Func Offset: 0x748
	// Line 1171, Address: 0x16cce4, Func Offset: 0x754
	// Line 1170, Address: 0x16cce8, Func Offset: 0x758
	// Line 1171, Address: 0x16ccec, Func Offset: 0x75c
	// Line 1170, Address: 0x16ccf8, Func Offset: 0x768
	// Line 1171, Address: 0x16ccfc, Func Offset: 0x76c
	// Line 1172, Address: 0x16cd7c, Func Offset: 0x7ec
	// Line 1174, Address: 0x16cd88, Func Offset: 0x7f8
	// Line 1175, Address: 0x16cd94, Func Offset: 0x804
	// Line 1176, Address: 0x16cd9c, Func Offset: 0x80c
	// Line 1177, Address: 0x16cda8, Func Offset: 0x818
	// Line 1178, Address: 0x16cdb0, Func Offset: 0x820
	// Line 1179, Address: 0x16cdbc, Func Offset: 0x82c
	// Line 1181, Address: 0x16cdd0, Func Offset: 0x840
	// Line 1182, Address: 0x16cddc, Func Offset: 0x84c
	// Line 1183, Address: 0x16cde4, Func Offset: 0x854
	// Line 1184, Address: 0x16cdf8, Func Offset: 0x868
	// Line 1185, Address: 0x16ce00, Func Offset: 0x870
	// Line 1188, Address: 0x16ce10, Func Offset: 0x880
	// Line 1189, Address: 0x16ce1c, Func Offset: 0x88c
	// Line 1190, Address: 0x16ce20, Func Offset: 0x890
	// Line 1191, Address: 0x16ce34, Func Offset: 0x8a4
	// Line 1195, Address: 0x16ce50, Func Offset: 0x8c0
	// Line 1196, Address: 0x16ce6c, Func Offset: 0x8dc
	// Line 1198, Address: 0x16ceb0, Func Offset: 0x920
	// Line 1199, Address: 0x16ceb4, Func Offset: 0x924
	// Line 1200, Address: 0x16cebc, Func Offset: 0x92c
	// Line 1201, Address: 0x16cec0, Func Offset: 0x930
	// Line 1202, Address: 0x16cef0, Func Offset: 0x960
	// Line 1204, Address: 0x16cef8, Func Offset: 0x968
	// Line 1206, Address: 0x16cf04, Func Offset: 0x974
	// Line 1207, Address: 0x16cf10, Func Offset: 0x980
	// Line 1210, Address: 0x16cf28, Func Offset: 0x998
	// Line 1212, Address: 0x16cf30, Func Offset: 0x9a0
	// Line 1213, Address: 0x16cf34, Func Offset: 0x9a4
	// Line 1214, Address: 0x16cf3c, Func Offset: 0x9ac
	// Line 1215, Address: 0x16cf40, Func Offset: 0x9b0
	// Line 1216, Address: 0x16cf48, Func Offset: 0x9b8
	// Line 1217, Address: 0x16cf4c, Func Offset: 0x9bc
	// Line 1218, Address: 0x16cf54, Func Offset: 0x9c4
	// Line 1219, Address: 0x16cf58, Func Offset: 0x9c8
	// Line 1221, Address: 0x16cf5c, Func Offset: 0x9cc
	// Line 1219, Address: 0x16cf60, Func Offset: 0x9d0
	// Line 1221, Address: 0x16cf64, Func Offset: 0x9d4
	// Line 1224, Address: 0x16cf68, Func Offset: 0x9d8
	// Line 1219, Address: 0x16cf6c, Func Offset: 0x9dc
	// Line 1221, Address: 0x16cf74, Func Offset: 0x9e4
	// Line 1219, Address: 0x16cf80, Func Offset: 0x9f0
	// Line 1221, Address: 0x16cf88, Func Offset: 0x9f8
	// Line 1225, Address: 0x16cfd4, Func Offset: 0xa44
	// Line 1226, Address: 0x16cfdc, Func Offset: 0xa4c
	// Line 1227, Address: 0x16cfe0, Func Offset: 0xa50
	// Line 1228, Address: 0x16cff0, Func Offset: 0xa60
	// Line 1229, Address: 0x16d000, Func Offset: 0xa70
	// Line 1230, Address: 0x16d024, Func Offset: 0xa94
	// Line 1234, Address: 0x16d028, Func Offset: 0xa98
	// Line 1230, Address: 0x16d02c, Func Offset: 0xa9c
	// Line 1234, Address: 0x16d034, Func Offset: 0xaa4
	// Line 1231, Address: 0x16d03c, Func Offset: 0xaac
	// Line 1233, Address: 0x16d044, Func Offset: 0xab4
	// Line 1231, Address: 0x16d048, Func Offset: 0xab8
	// Line 1232, Address: 0x16d04c, Func Offset: 0xabc
	// Line 1234, Address: 0x16d050, Func Offset: 0xac0
	// Line 1238, Address: 0x16d054, Func Offset: 0xac4
	// Line 1239, Address: 0x16d060, Func Offset: 0xad0
	// Line 1241, Address: 0x16d090, Func Offset: 0xb00
	// Line 1242, Address: 0x16d0a4, Func Offset: 0xb14
	// Line 1243, Address: 0x16d0a8, Func Offset: 0xb18
	// Line 1245, Address: 0x16d0b0, Func Offset: 0xb20
	// Line 1246, Address: 0x16d0b4, Func Offset: 0xb24
	// Line 1247, Address: 0x16d0bc, Func Offset: 0xb2c
	// Line 1248, Address: 0x16d0c0, Func Offset: 0xb30
	// Line 1249, Address: 0x16d0c4, Func Offset: 0xb34
	// Line 1250, Address: 0x16d0cc, Func Offset: 0xb3c
	// Line 1251, Address: 0x16d0d4, Func Offset: 0xb44
	// Line 1252, Address: 0x16d0e4, Func Offset: 0xb54
	// Line 1254, Address: 0x16d13c, Func Offset: 0xbac
	// Line 1255, Address: 0x16d144, Func Offset: 0xbb4
	// Line 1256, Address: 0x16d148, Func Offset: 0xbb8
	// Line 1257, Address: 0x16d154, Func Offset: 0xbc4
	// Line 1262, Address: 0x16d158, Func Offset: 0xbc8
	// Line 1263, Address: 0x16d160, Func Offset: 0xbd0
	// Line 1264, Address: 0x16d1b0, Func Offset: 0xc20
	// Line 1265, Address: 0x16d1b8, Func Offset: 0xc28
	// Line 1267, Address: 0x16d1c0, Func Offset: 0xc30
	// Line 1271, Address: 0x16d1dc, Func Offset: 0xc4c
	// Line 1268, Address: 0x16d1e8, Func Offset: 0xc58
	// Line 1272, Address: 0x16d1ec, Func Offset: 0xc5c
	// Line 1269, Address: 0x16d1f8, Func Offset: 0xc68
	// Line 1273, Address: 0x16d1fc, Func Offset: 0xc6c
	// Line 1274, Address: 0x16d208, Func Offset: 0xc78
	// Line 1275, Address: 0x16d260, Func Offset: 0xcd0
	// Line 1276, Address: 0x16d268, Func Offset: 0xcd8
	// Line 1279, Address: 0x16d274, Func Offset: 0xce4
	// Line 1280, Address: 0x16d2a8, Func Offset: 0xd18
	// Line 1281, Address: 0x16d2c0, Func Offset: 0xd30
	// Line 1282, Address: 0x16d2cc, Func Offset: 0xd3c
	// Line 1283, Address: 0x16d2e0, Func Offset: 0xd50
	// Line 1282, Address: 0x16d2e4, Func Offset: 0xd54
	// Line 1283, Address: 0x16d2f0, Func Offset: 0xd60
	// Line 1284, Address: 0x16d310, Func Offset: 0xd80
	// Line 1286, Address: 0x16d320, Func Offset: 0xd90
	// Line 1287, Address: 0x16d344, Func Offset: 0xdb4
	// Line 1288, Address: 0x16d354, Func Offset: 0xdc4
	// Line 1289, Address: 0x16d388, Func Offset: 0xdf8
	// Line 1290, Address: 0x16d390, Func Offset: 0xe00
	// Line 1289, Address: 0x16d394, Func Offset: 0xe04
	// Line 1290, Address: 0x16d398, Func Offset: 0xe08
	// Line 1292, Address: 0x16d3a8, Func Offset: 0xe18
	// Line 1290, Address: 0x16d3ac, Func Offset: 0xe1c
	// Line 1293, Address: 0x16d3cc, Func Offset: 0xe3c
	// Line 1294, Address: 0x16d3d0, Func Offset: 0xe40
	// Line 1295, Address: 0x16d3dc, Func Offset: 0xe4c
	// Line 1296, Address: 0x16d3e0, Func Offset: 0xe50
	// Line 1297, Address: 0x16d3e4, Func Offset: 0xe54
	// Line 1298, Address: 0x16d3ec, Func Offset: 0xe5c
	// Line 1299, Address: 0x16d440, Func Offset: 0xeb0
	// Line 1300, Address: 0x16d448, Func Offset: 0xeb8
	// Line 1302, Address: 0x16d450, Func Offset: 0xec0
	// Line 1303, Address: 0x16d458, Func Offset: 0xec8
	// Line 1304, Address: 0x16d478, Func Offset: 0xee8
	// Line 1305, Address: 0x16d490, Func Offset: 0xf00
	// Line 1306, Address: 0x16d494, Func Offset: 0xf04
	// Line 1307, Address: 0x16d49c, Func Offset: 0xf0c
	// Line 1308, Address: 0x16d4f0, Func Offset: 0xf60
	// Line 1309, Address: 0x16d4f8, Func Offset: 0xf68
	// Line 1312, Address: 0x16d504, Func Offset: 0xf74
	// Line 1309, Address: 0x16d508, Func Offset: 0xf78
	// Line 1315, Address: 0x16d51c, Func Offset: 0xf8c
	// Line 1312, Address: 0x16d520, Func Offset: 0xf90
	// Line 1315, Address: 0x16d524, Func Offset: 0xf94
	// Line 1312, Address: 0x16d52c, Func Offset: 0xf9c
	// Line 1313, Address: 0x16d530, Func Offset: 0xfa0
	// Line 1314, Address: 0x16d53c, Func Offset: 0xfac
	// Line 1317, Address: 0x16d544, Func Offset: 0xfb4
	// Line 1318, Address: 0x16d558, Func Offset: 0xfc8
	// Line 1319, Address: 0x16d568, Func Offset: 0xfd8
	// Line 1320, Address: 0x16d56c, Func Offset: 0xfdc
	// Line 1319, Address: 0x16d570, Func Offset: 0xfe0
	// Line 1320, Address: 0x16d574, Func Offset: 0xfe4
	// Line 1321, Address: 0x16d57c, Func Offset: 0xfec
	// Line 1322, Address: 0x16d5b0, Func Offset: 0x1020
	// Line 1324, Address: 0x16d5c4, Func Offset: 0x1034
	// Line 1325, Address: 0x16d5f4, Func Offset: 0x1064
	// Line 1326, Address: 0x16d604, Func Offset: 0x1074
	// Line 1327, Address: 0x16d628, Func Offset: 0x1098
	// Line 1328, Address: 0x16d638, Func Offset: 0x10a8
	// Line 1327, Address: 0x16d63c, Func Offset: 0x10ac
	// Line 1328, Address: 0x16d640, Func Offset: 0x10b0
	// Line 1330, Address: 0x16d65c, Func Offset: 0x10cc
	// Line 1328, Address: 0x16d660, Func Offset: 0x10d0
	// Line 1333, Address: 0x16d678, Func Offset: 0x10e8
	// Line 1332, Address: 0x16d67c, Func Offset: 0x10ec
	// Line 1333, Address: 0x16d680, Func Offset: 0x10f0
	// Line 1334, Address: 0x16d68c, Func Offset: 0x10fc
	// Line 1335, Address: 0x16d6c4, Func Offset: 0x1134
	// Line 1337, Address: 0x16d6c8, Func Offset: 0x1138
	// Line 1340, Address: 0x16d6d0, Func Offset: 0x1140
	// Line 1342, Address: 0x16d6d8, Func Offset: 0x1148
	// Line 1345, Address: 0x16d6dc, Func Offset: 0x114c
	// Line 1346, Address: 0x16d6e0, Func Offset: 0x1150
	// Line 1347, Address: 0x16d6ec, Func Offset: 0x115c
	// Line 1348, Address: 0x16d708, Func Offset: 0x1178
	// Line 1349, Address: 0x16d70c, Func Offset: 0x117c
	// Line 1350, Address: 0x16d718, Func Offset: 0x1188
	// Line 1351, Address: 0x16d724, Func Offset: 0x1194
	// Line 1352, Address: 0x16d728, Func Offset: 0x1198
	// Func End, Address: 0x16d758, Func Offset: 0x11c8
}

// 
// Start address: 0x16d760
int sfMessageGetLastLines(int** p_x, int** p_y, int** p_w)
{
	// Line 1362, Address: 0x16d760, Func Offset: 0
	// Line 1365, Address: 0x16d764, Func Offset: 0x4
	// Line 1362, Address: 0x16d768, Func Offset: 0x8
	// Line 1363, Address: 0x16d770, Func Offset: 0x10
	// Line 1364, Address: 0x16d77c, Func Offset: 0x1c
	// Line 1366, Address: 0x16d788, Func Offset: 0x28
	// Func End, Address: 0x16d790, Func Offset: 0x30
}

// 
// Start address: 0x16d790
void sfMessageSetSkipCharacterPosAtLastLine()
{
	int p;
	// Line 1371, Address: 0x16d790, Func Offset: 0
	// Line 1373, Address: 0x16d794, Func Offset: 0x4
	// Line 1371, Address: 0x16d798, Func Offset: 0x8
	// Line 1373, Address: 0x16d79c, Func Offset: 0xc
	// Line 1374, Address: 0x16d7a4, Func Offset: 0x14
	// Line 1377, Address: 0x16d7ac, Func Offset: 0x1c
	// Line 1378, Address: 0x16d7ec, Func Offset: 0x5c
	// Func End, Address: 0x16d7fc, Func Offset: 0x6c
}

// 
// Start address: 0x16d800
sfMessageType sfMessageGetLastType()
{
	// Line 1385, Address: 0x16d800, Func Offset: 0
	// Line 1386, Address: 0x16d804, Func Offset: 0x4
	// Func End, Address: 0x16d80c, Func Offset: 0xc
}

// 
// Start address: 0x16d810
unsigned short* sfMessageGetNextAddress()
{
	// Line 1393, Address: 0x16d810, Func Offset: 0
	// Line 1394, Address: 0x16d814, Func Offset: 0x4
	// Func End, Address: 0x16d81c, Func Offset: 0xc
}

// 
// Start address: 0x16d820
int sfMessageGetWait()
{
	// Line 1401, Address: 0x16d820, Func Offset: 0
	// Line 1402, Address: 0x16d828, Func Offset: 0x8
	// Func End, Address: 0x16d830, Func Offset: 0x10
}

// 
// Start address: 0x16d830
int sfMessageGetMaxWidth()
{
	// Line 1409, Address: 0x16d830, Func Offset: 0
	// Line 1410, Address: 0x16d834, Func Offset: 0x4
	// Func End, Address: 0x16d83c, Func Offset: 0xc
}

// 
// Start address: 0x16d840
int sfMessageGetHeight()
{
	// Line 1417, Address: 0x16d840, Func Offset: 0
	// Line 1418, Address: 0x16d844, Func Offset: 0x4
	// Func End, Address: 0x16d84c, Func Offset: 0xc
}

// 
// Start address: 0x16d850
int sfMessageGetLineHeight()
{
	// Line 1425, Address: 0x16d850, Func Offset: 0
	// Line 1426, Address: 0x16d868, Func Offset: 0x18
	// Func End, Address: 0x16d870, Func Offset: 0x20
}

// 
// Start address: 0x16d870
int sfMessageGetSelectMax()
{
	// Line 1433, Address: 0x16d870, Func Offset: 0
	// Line 1434, Address: 0x16d874, Func Offset: 0x4
	// Func End, Address: 0x16d87c, Func Offset: 0xc
}

// 
// Start address: 0x16d880
int sfMessageGetDefaultSelect()
{
	// Line 1441, Address: 0x16d880, Func Offset: 0
	// Line 1442, Address: 0x16d884, Func Offset: 0x4
	// Func End, Address: 0x16d88c, Func Offset: 0xc
}

// 
// Start address: 0x16d890
void sfMessageGetSelectRect(sfMessageRect* rect, int num)
{
	// Line 1450, Address: 0x16d890, Func Offset: 0
	// Line 1451, Address: 0x16d8bc, Func Offset: 0x2c
	// Func End, Address: 0x16d8c4, Func Offset: 0x34
}

// 
// Start address: 0x16d8d0
void sfMessageSetFontTexture()
{
	int i;
	// Line 1456, Address: 0x16d8d0, Func Offset: 0
	// Line 1458, Address: 0x16d8d4, Func Offset: 0x4
	// Line 1456, Address: 0x16d8d8, Func Offset: 0x8
	// Line 1458, Address: 0x16d8e4, Func Offset: 0x14
	// Line 1459, Address: 0x16d900, Func Offset: 0x30
	// Line 1462, Address: 0x16d91c, Func Offset: 0x4c
	// Line 1459, Address: 0x16d920, Func Offset: 0x50
	// Line 1462, Address: 0x16d924, Func Offset: 0x54
	// Line 1465, Address: 0x16d938, Func Offset: 0x68
	// Line 1466, Address: 0x16d940, Func Offset: 0x70
	// Line 1467, Address: 0x16d948, Func Offset: 0x78
	// Line 1469, Address: 0x16d950, Func Offset: 0x80
	// Line 1470, Address: 0x16d960, Func Offset: 0x90
	// Line 1471, Address: 0x16d968, Func Offset: 0x98
	// Line 1472, Address: 0x16d984, Func Offset: 0xb4
	// Line 1474, Address: 0x16d99c, Func Offset: 0xcc
	// Line 1476, Address: 0x16d9b4, Func Offset: 0xe4
	// Line 1477, Address: 0x16d9c0, Func Offset: 0xf0
	// Line 1478, Address: 0x16d9cc, Func Offset: 0xfc
	// Line 1480, Address: 0x16d9d8, Func Offset: 0x108
	// Line 1481, Address: 0x16d9e8, Func Offset: 0x118
	// Line 1483, Address: 0x16d9f0, Func Offset: 0x120
	// Line 1484, Address: 0x16d9f8, Func Offset: 0x128
	// Line 1487, Address: 0x16da10, Func Offset: 0x140
	// Line 1488, Address: 0x16da2c, Func Offset: 0x15c
	// Line 1490, Address: 0x16da40, Func Offset: 0x170
	// Line 1492, Address: 0x16da50, Func Offset: 0x180
	// Line 1493, Address: 0x16da58, Func Offset: 0x188
	// Line 1494, Address: 0x16da60, Func Offset: 0x190
	// Line 1496, Address: 0x16da68, Func Offset: 0x198
	// Func End, Address: 0x16da7c, Func Offset: 0x1ac
}

// 
// Start address: 0x16da80
unsigned long sfMessageTextureTEX0()
{
	_anon0* tex;
	unsigned int cbp;
	// Line 1504, Address: 0x16da80, Func Offset: 0
	// Line 1507, Address: 0x16da84, Func Offset: 0x4
	// Line 1504, Address: 0x16da88, Func Offset: 0x8
	// Line 1507, Address: 0x16da90, Func Offset: 0x10
	// Line 1508, Address: 0x16da9c, Func Offset: 0x1c
	// Line 1509, Address: 0x16dab0, Func Offset: 0x30
	// Line 1510, Address: 0x16dac0, Func Offset: 0x40
	// Line 1509, Address: 0x16dac8, Func Offset: 0x48
	// Line 1510, Address: 0x16dacc, Func Offset: 0x4c
	// Line 1511, Address: 0x16dae0, Func Offset: 0x60
	// Func End, Address: 0x16daf0, Func Offset: 0x70
}

// 
// Start address: 0x16daf0
unsigned long sfMessageTextureExtcTEX0(int page)
{
	_anon0* tex;
	unsigned int cbp;
	// Line 1520, Address: 0x16daf0, Func Offset: 0
	// Line 1523, Address: 0x16daf4, Func Offset: 0x4
	// Line 1520, Address: 0x16daf8, Func Offset: 0x8
	// Line 1523, Address: 0x16dafc, Func Offset: 0xc
	// Line 1520, Address: 0x16db00, Func Offset: 0x10
	// Line 1523, Address: 0x16db0c, Func Offset: 0x1c
	// Line 1524, Address: 0x16db1c, Func Offset: 0x2c
	// Line 1525, Address: 0x16db34, Func Offset: 0x44
	// Line 1524, Address: 0x16db3c, Func Offset: 0x4c
	// Line 1525, Address: 0x16db40, Func Offset: 0x50
	// Line 1526, Address: 0x16db50, Func Offset: 0x60
	// Func End, Address: 0x16db64, Func Offset: 0x74
}

// 
// Start address: 0x16db70
unsigned long sfMessageTextureSkipTEX0()
{
	_anon0* tex;
	unsigned int cbp;
	// Line 1534, Address: 0x16db70, Func Offset: 0
	// Line 1537, Address: 0x16db74, Func Offset: 0x4
	// Line 1534, Address: 0x16db78, Func Offset: 0x8
	// Line 1537, Address: 0x16db80, Func Offset: 0x10
	// Line 1538, Address: 0x16db88, Func Offset: 0x18
	// Line 1539, Address: 0x16db9c, Func Offset: 0x2c
	// Line 1538, Address: 0x16dba4, Func Offset: 0x34
	// Line 1539, Address: 0x16dba8, Func Offset: 0x38
	// Line 1540, Address: 0x16dbb8, Func Offset: 0x48
	// Func End, Address: 0x16dbc8, Func Offset: 0x58
}

// 
// Start address: 0x16dbd0
unsigned short* sfMessageAddressInPack(sfMessagePack* mespack, int num)
{
	// Line 1550, Address: 0x16dbd0, Func Offset: 0
	// Line 1552, Address: 0x16dbe0, Func Offset: 0x10
	// Line 1553, Address: 0x16dc00, Func Offset: 0x30
	// Line 1554, Address: 0x16dc18, Func Offset: 0x48
	// Func End, Address: 0x16dc20, Func Offset: 0x50
}

// 
// Start address: 0x16dc20
int sfMessageDataTextLength(unsigned short* mes)
{
	unsigned short* pos;
	unsigned short* pos_stack;
	unsigned short* v_start;
	unsigned short d;
	unsigned char* pos_c;
	unsigned char* pos_stack_c;
	int len;
	// Line 1602, Address: 0x16dc20, Func Offset: 0
	// Line 1611, Address: 0x16dc24, Func Offset: 0x4
	// Line 1602, Address: 0x16dc28, Func Offset: 0x8
	// Line 1607, Address: 0x16dc2c, Func Offset: 0xc
	// Line 1602, Address: 0x16dc30, Func Offset: 0x10
	// Line 1608, Address: 0x16dc34, Func Offset: 0x14
	// Line 1609, Address: 0x16dc38, Func Offset: 0x18
	// Line 1606, Address: 0x16dc3c, Func Offset: 0x1c
	// Line 1608, Address: 0x16dc40, Func Offset: 0x20
	// Line 1609, Address: 0x16dc44, Func Offset: 0x24
	// Line 1611, Address: 0x16dc48, Func Offset: 0x28
	// Line 1613, Address: 0x16dc50, Func Offset: 0x30
	// Line 1638, Address: 0x16dc54, Func Offset: 0x34
	// Line 1649, Address: 0x16dc58, Func Offset: 0x38
	// Line 1613, Address: 0x16dc5c, Func Offset: 0x3c
	// Line 1643, Address: 0x16dc60, Func Offset: 0x40
	// Line 1645, Address: 0x16dc64, Func Offset: 0x44
	// Line 1638, Address: 0x16dc68, Func Offset: 0x48
	// Line 1631, Address: 0x16dc6c, Func Offset: 0x4c
	// Line 1627, Address: 0x16dc70, Func Offset: 0x50
	// Line 1612, Address: 0x16dc74, Func Offset: 0x54
	// Line 1613, Address: 0x16dc84, Func Offset: 0x64
	// Line 1623, Address: 0x16dcac, Func Offset: 0x8c
	// Line 1625, Address: 0x16dcb0, Func Offset: 0x90
	// Line 1627, Address: 0x16dcb8, Func Offset: 0x98
	// Line 1629, Address: 0x16dcc0, Func Offset: 0xa0
	// Line 1631, Address: 0x16dcc8, Func Offset: 0xa8
	// Line 1632, Address: 0x16dce0, Func Offset: 0xc0
	// Line 1634, Address: 0x16dce8, Func Offset: 0xc8
	// Line 1635, Address: 0x16dcf4, Func Offset: 0xd4
	// Line 1638, Address: 0x16dcf8, Func Offset: 0xd8
	// Line 1636, Address: 0x16dd04, Func Offset: 0xe4
	// Line 1638, Address: 0x16dd08, Func Offset: 0xe8
	// Line 1637, Address: 0x16dd10, Func Offset: 0xf0
	// Line 1639, Address: 0x16dd14, Func Offset: 0xf4
	// Line 1643, Address: 0x16dd18, Func Offset: 0xf8
	// Line 1645, Address: 0x16dd28, Func Offset: 0x108
	// Line 1646, Address: 0x16dd38, Func Offset: 0x118
	// Line 1647, Address: 0x16dd3c, Func Offset: 0x11c
	// Line 1648, Address: 0x16dd40, Func Offset: 0x120
	// Line 1649, Address: 0x16dd48, Func Offset: 0x128
	// Line 1650, Address: 0x16dd98, Func Offset: 0x178
	// Line 1651, Address: 0x16dda0, Func Offset: 0x180
	// Line 1653, Address: 0x16dda8, Func Offset: 0x188
	// Line 1656, Address: 0x16ddbc, Func Offset: 0x19c
	// Line 1655, Address: 0x16ddc0, Func Offset: 0x1a0
	// Line 1654, Address: 0x16ddc4, Func Offset: 0x1a4
	// Line 1658, Address: 0x16ddc8, Func Offset: 0x1a8
	// Line 1659, Address: 0x16ddd0, Func Offset: 0x1b0
	// Line 1660, Address: 0x16de20, Func Offset: 0x200
	// Line 1661, Address: 0x16de28, Func Offset: 0x208
	// Line 1664, Address: 0x16de34, Func Offset: 0x214
	// Line 1665, Address: 0x16de40, Func Offset: 0x220
	// Line 1666, Address: 0x16de50, Func Offset: 0x230
	// Line 1668, Address: 0x16de54, Func Offset: 0x234
	// Line 1666, Address: 0x16de58, Func Offset: 0x238
	// Line 1668, Address: 0x16de5c, Func Offset: 0x23c
	// Line 1666, Address: 0x16de60, Func Offset: 0x240
	// Line 1668, Address: 0x16de64, Func Offset: 0x244
	// Func End, Address: 0x16de6c, Func Offset: 0x24c
}

// 
// Start address: 0x16de70
void sfMessageDataCopyTextOnly(unsigned short* dst, unsigned short* src)
{
	unsigned short* pos;
	unsigned short* pos_stack;
	unsigned short d;
	unsigned char* pos_c;
	unsigned char* pos_stack_c;
	// Line 1678, Address: 0x16de70, Func Offset: 0
	// Line 1689, Address: 0x16de74, Func Offset: 0x4
	// Line 1678, Address: 0x16de78, Func Offset: 0x8
	// Line 1685, Address: 0x16de84, Func Offset: 0x14
	// Line 1678, Address: 0x16de88, Func Offset: 0x18
	// Line 1686, Address: 0x16de8c, Func Offset: 0x1c
	// Line 1678, Address: 0x16de90, Func Offset: 0x20
	// Line 1686, Address: 0x16de94, Func Offset: 0x24
	// Line 1687, Address: 0x16de98, Func Offset: 0x28
	// Line 1688, Address: 0x16de9c, Func Offset: 0x2c
	// Line 1687, Address: 0x16dea0, Func Offset: 0x30
	// Line 1689, Address: 0x16dea4, Func Offset: 0x34
	// Line 1691, Address: 0x16deac, Func Offset: 0x3c
	// Line 1718, Address: 0x16deb0, Func Offset: 0x40
	// Line 1730, Address: 0x16deb4, Func Offset: 0x44
	// Line 1691, Address: 0x16deb8, Func Offset: 0x48
	// Line 1712, Address: 0x16debc, Func Offset: 0x4c
	// Line 1713, Address: 0x16dec0, Func Offset: 0x50
	// Line 1723, Address: 0x16dec4, Func Offset: 0x54
	// Line 1725, Address: 0x16dec8, Func Offset: 0x58
	// Line 1718, Address: 0x16decc, Func Offset: 0x5c
	// Line 1709, Address: 0x16ded0, Func Offset: 0x60
	// Line 1694, Address: 0x16ded4, Func Offset: 0x64
	// Line 1754, Address: 0x16ded8, Func Offset: 0x68
	// Line 1749, Address: 0x16dedc, Func Offset: 0x6c
	// Line 1743, Address: 0x16dee0, Func Offset: 0x70
	// Line 1689, Address: 0x16dee4, Func Offset: 0x74
	// Line 1690, Address: 0x16dee8, Func Offset: 0x78
	// Line 1691, Address: 0x16def4, Func Offset: 0x84
	// Line 1692, Address: 0x16df1c, Func Offset: 0xac
	// Line 1693, Address: 0x16df20, Func Offset: 0xb0
	// Line 1695, Address: 0x16df24, Func Offset: 0xb4
	// Line 1705, Address: 0x16df2c, Func Offset: 0xbc
	// Line 1707, Address: 0x16df30, Func Offset: 0xc0
	// Line 1709, Address: 0x16df38, Func Offset: 0xc8
	// Line 1711, Address: 0x16df50, Func Offset: 0xe0
	// Line 1712, Address: 0x16df58, Func Offset: 0xe8
	// Line 1713, Address: 0x16df5c, Func Offset: 0xec
	// Line 1714, Address: 0x16df60, Func Offset: 0xf0
	// Line 1715, Address: 0x16df64, Func Offset: 0xf4
	// Line 1718, Address: 0x16df68, Func Offset: 0xf8
	// Line 1716, Address: 0x16df74, Func Offset: 0x104
	// Line 1718, Address: 0x16df78, Func Offset: 0x108
	// Line 1717, Address: 0x16df80, Func Offset: 0x110
	// Line 1723, Address: 0x16df84, Func Offset: 0x114
	// Line 1725, Address: 0x16df98, Func Offset: 0x128
	// Line 1727, Address: 0x16dfa8, Func Offset: 0x138
	// Line 1726, Address: 0x16dfac, Func Offset: 0x13c
	// Line 1727, Address: 0x16dfb0, Func Offset: 0x140
	// Line 1728, Address: 0x16dfb4, Func Offset: 0x144
	// Line 1729, Address: 0x16dfb8, Func Offset: 0x148
	// Line 1730, Address: 0x16dfc0, Func Offset: 0x150
	// Line 1731, Address: 0x16e048, Func Offset: 0x1d8
	// Line 1732, Address: 0x16e050, Func Offset: 0x1e0
	// Line 1733, Address: 0x16e054, Func Offset: 0x1e4
	// Line 1732, Address: 0x16e058, Func Offset: 0x1e8
	// Line 1733, Address: 0x16e05c, Func Offset: 0x1ec
	// Line 1735, Address: 0x16e060, Func Offset: 0x1f0
	// Line 1736, Address: 0x16e074, Func Offset: 0x204
	// Line 1738, Address: 0x16e078, Func Offset: 0x208
	// Line 1739, Address: 0x16e080, Func Offset: 0x210
	// Line 1740, Address: 0x16e08c, Func Offset: 0x21c
	// Line 1741, Address: 0x16e090, Func Offset: 0x220
	// Line 1742, Address: 0x16e094, Func Offset: 0x224
	// Line 1743, Address: 0x16e098, Func Offset: 0x228
	// Line 1744, Address: 0x16e09c, Func Offset: 0x22c
	// Line 1746, Address: 0x16e0a0, Func Offset: 0x230
	// Line 1747, Address: 0x16e0a8, Func Offset: 0x238
	// Line 1748, Address: 0x16e0ac, Func Offset: 0x23c
	// Line 1749, Address: 0x16e0b0, Func Offset: 0x240
	// Line 1750, Address: 0x16e0b4, Func Offset: 0x244
	// Line 1753, Address: 0x16e0b8, Func Offset: 0x248
	// Line 1754, Address: 0x16e0c0, Func Offset: 0x250
	// Line 1757, Address: 0x16e0c8, Func Offset: 0x258
	// Line 1758, Address: 0x16e0d0, Func Offset: 0x260
	// Line 1759, Address: 0x16e158, Func Offset: 0x2e8
	// Line 1760, Address: 0x16e160, Func Offset: 0x2f0
	// Line 1761, Address: 0x16e164, Func Offset: 0x2f4
	// Line 1760, Address: 0x16e168, Func Offset: 0x2f8
	// Line 1761, Address: 0x16e16c, Func Offset: 0x2fc
	// Line 1764, Address: 0x16e174, Func Offset: 0x304
	// Line 1765, Address: 0x16e180, Func Offset: 0x310
	// Line 1766, Address: 0x16e18c, Func Offset: 0x31c
	// Line 1767, Address: 0x16e194, Func Offset: 0x324
	// Line 1768, Address: 0x16e198, Func Offset: 0x328
	// Line 1773, Address: 0x16e19c, Func Offset: 0x32c
	// Func End, Address: 0x16e1b8, Func Offset: 0x348
}

// 
// Start address: 0x16e1c0
int sfMessageDataLineNumber(unsigned short* mes)
{
	unsigned short* pos;
	unsigned short d;
	unsigned char* pos_c;
	int lines;
	// Line 1788, Address: 0x16e1c0, Func Offset: 0
	// Line 1790, Address: 0x16e1c4, Func Offset: 0x4
	// Line 1787, Address: 0x16e1c8, Func Offset: 0x8
	// Line 1789, Address: 0x16e1cc, Func Offset: 0xc
	// Line 1790, Address: 0x16e1d0, Func Offset: 0x10
	// Line 1808, Address: 0x16e1d8, Func Offset: 0x18
	// Line 1792, Address: 0x16e1dc, Func Offset: 0x1c
	// Line 1802, Address: 0x16e1e8, Func Offset: 0x28
	// Line 1804, Address: 0x16e1ec, Func Offset: 0x2c
	// Line 1798, Address: 0x16e1f0, Func Offset: 0x30
	// Line 1791, Address: 0x16e1f4, Func Offset: 0x34
	// Line 1792, Address: 0x16e204, Func Offset: 0x44
	// Line 1794, Address: 0x16e224, Func Offset: 0x64
	// Line 1796, Address: 0x16e228, Func Offset: 0x68
	// Line 1798, Address: 0x16e230, Func Offset: 0x70
	// Line 1802, Address: 0x16e238, Func Offset: 0x78
	// Line 1804, Address: 0x16e248, Func Offset: 0x88
	// Line 1805, Address: 0x16e258, Func Offset: 0x98
	// Line 1806, Address: 0x16e25c, Func Offset: 0x9c
	// Line 1807, Address: 0x16e260, Func Offset: 0xa0
	// Line 1808, Address: 0x16e268, Func Offset: 0xa8
	// Line 1809, Address: 0x16e2b8, Func Offset: 0xf8
	// Line 1810, Address: 0x16e2c0, Func Offset: 0x100
	// Line 1812, Address: 0x16e2cc, Func Offset: 0x10c
	// Line 1814, Address: 0x16e2d8, Func Offset: 0x118
	// Func End, Address: 0x16e2e0, Func Offset: 0x120
}

// 
// Start address: 0x16e2e0
void sfMessagePutSelectBarWithBlur(sfMessageRect* rect, int rect_num)
{
	// Line 1833, Address: 0x16e2e0, Func Offset: 0
	// Line 1834, Address: 0x16e2f4, Func Offset: 0x14
	// Line 1833, Address: 0x16e2f8, Func Offset: 0x18
	// Line 1834, Address: 0x16e30c, Func Offset: 0x2c
	// Line 1835, Address: 0x16e310, Func Offset: 0x30
	// Line 1836, Address: 0x16e314, Func Offset: 0x34
	// Func End, Address: 0x16e31c, Func Offset: 0x3c
}

// 
// Start address: 0x16e320
void sfMessageDmaWait()
{
	// Line 1842, Address: 0x16e320, Func Offset: 0
	// Func End, Address: 0x16e328, Func Offset: 0x8
}

// 
// Start address: 0x16e330
void sfMessageDmaKick(void* adr)
{
	// Line 1849, Address: 0x16e330, Func Offset: 0
	// Line 1850, Address: 0x16e33c, Func Offset: 0xc
	// Line 1851, Address: 0x16e344, Func Offset: 0x14
	// Line 1852, Address: 0x16e350, Func Offset: 0x20
	// Func End, Address: 0x16e360, Func Offset: 0x30
}

// 
// Start address: 0x16e360
void sfMessagePacketSwitch()
{
	// Line 1858, Address: 0x16e360, Func Offset: 0
	// Line 1860, Address: 0x16e378, Func Offset: 0x18
	// Line 1858, Address: 0x16e37c, Func Offset: 0x1c
	// Line 1860, Address: 0x16e384, Func Offset: 0x24
	// Line 1858, Address: 0x16e38c, Func Offset: 0x2c
	// Line 1861, Address: 0x16e3a4, Func Offset: 0x44
	// Line 1862, Address: 0x16e3b4, Func Offset: 0x54
	// Line 1863, Address: 0x16e3bc, Func Offset: 0x5c
	// Func End, Address: 0x16e3c4, Func Offset: 0x64
}

// 
// Start address: 0x16e3d0
void sfMessagePacketInit()
{
	char* adr;
	int size;
	int n;
	// Line 1868, Address: 0x16e3d0, Func Offset: 0
	// Line 1871, Address: 0x16e3d4, Func Offset: 0x4
	// Line 1868, Address: 0x16e3d8, Func Offset: 0x8
	// Line 1871, Address: 0x16e3e0, Func Offset: 0x10
	// Line 1872, Address: 0x16e3ec, Func Offset: 0x1c
	// Line 1873, Address: 0x16e3f4, Func Offset: 0x24
	// Line 1875, Address: 0x16e3f8, Func Offset: 0x28
	// Line 1876, Address: 0x16e3fc, Func Offset: 0x2c
	// Line 1877, Address: 0x16e404, Func Offset: 0x34
	// Line 1878, Address: 0x16e408, Func Offset: 0x38
	// Line 1877, Address: 0x16e40c, Func Offset: 0x3c
	// Line 1879, Address: 0x16e414, Func Offset: 0x44
	// Line 1880, Address: 0x16e418, Func Offset: 0x48
	// Line 1882, Address: 0x16e420, Func Offset: 0x50
	// Line 1883, Address: 0x16e434, Func Offset: 0x64
	// Line 1884, Address: 0x16e43c, Func Offset: 0x6c
	// Line 1885, Address: 0x16e444, Func Offset: 0x74
	// Line 1886, Address: 0x16e448, Func Offset: 0x78
	// Line 1887, Address: 0x16e450, Func Offset: 0x80
	// Func End, Address: 0x16e464, Func Offset: 0x94
}

// 
// Start address: 0x16e470
void* sfMessagePacketOpenGiftag(unsigned long giftag1, unsigned long giftag2)
{
	unsigned long* pg;
	// Line 1897, Address: 0x16e470, Func Offset: 0
	// Line 1902, Address: 0x16e47c, Func Offset: 0xc
	// Line 1897, Address: 0x16e480, Func Offset: 0x10
	// Line 1898, Address: 0x16e484, Func Offset: 0x14
	// Line 1900, Address: 0x16e488, Func Offset: 0x18
	// Line 1899, Address: 0x16e48c, Func Offset: 0x1c
	// Line 1900, Address: 0x16e490, Func Offset: 0x20
	// Line 1901, Address: 0x16e494, Func Offset: 0x24
	// Line 1902, Address: 0x16e49c, Func Offset: 0x2c
	// Line 1903, Address: 0x16e4a0, Func Offset: 0x30
	// Func End, Address: 0x16e4a8, Func Offset: 0x38
}

// 
// Start address: 0x16e4b0
void sfMessagePacketCloseGiftag(unsigned long* pos)
{
	int n;
	int nreg;
	unsigned long* pg;
	unsigned long tag;
	// Line 1911, Address: 0x16e4b0, Func Offset: 0
	// Line 1914, Address: 0x16e4b4, Func Offset: 0x4
	// Line 1911, Address: 0x16e4b8, Func Offset: 0x8
	// Line 1912, Address: 0x16e4bc, Func Offset: 0xc
	// Line 1914, Address: 0x16e4c0, Func Offset: 0x10
	// Line 1915, Address: 0x16e4c8, Func Offset: 0x18
	// Line 1919, Address: 0x16e4d0, Func Offset: 0x20
	// Line 1918, Address: 0x16e4d8, Func Offset: 0x28
	// Line 1919, Address: 0x16e4dc, Func Offset: 0x2c
	// Line 1920, Address: 0x16e4e0, Func Offset: 0x30
	// Line 1921, Address: 0x16e4e8, Func Offset: 0x38
	// Line 1922, Address: 0x16e4f8, Func Offset: 0x48
	// Line 1924, Address: 0x16e500, Func Offset: 0x50
	// Line 1925, Address: 0x16e528, Func Offset: 0x78
	// Line 1926, Address: 0x16e538, Func Offset: 0x88
	// Line 1927, Address: 0x16e548, Func Offset: 0x98
	// Line 1929, Address: 0x16e568, Func Offset: 0xb8
	// Func End, Address: 0x16e570, Func Offset: 0xc0
}

// 
// Start address: 0x16e570
void sfMessagePacketDmaKick()
{
	int n;
	unsigned int* pd;
	// Line 1934, Address: 0x16e570, Func Offset: 0
	// Line 1937, Address: 0x16e574, Func Offset: 0x4
	// Line 1934, Address: 0x16e578, Func Offset: 0x8
	// Line 1937, Address: 0x16e57c, Func Offset: 0xc
	// Line 1938, Address: 0x16e580, Func Offset: 0x10
	// Line 1939, Address: 0x16e594, Func Offset: 0x24
	// Line 1947, Address: 0x16e59c, Func Offset: 0x2c
	// Line 1943, Address: 0x16e5a0, Func Offset: 0x30
	// Line 1947, Address: 0x16e5a4, Func Offset: 0x34
	// Line 1943, Address: 0x16e5a8, Func Offset: 0x38
	// Line 1944, Address: 0x16e5ac, Func Offset: 0x3c
	// Line 1946, Address: 0x16e5b0, Func Offset: 0x40
	// Line 1949, Address: 0x16e5b4, Func Offset: 0x44
	// Line 1951, Address: 0x16e5bc, Func Offset: 0x4c
	// Line 1952, Address: 0x16e5c4, Func Offset: 0x54
	// Func End, Address: 0x16e5d4, Func Offset: 0x64
}

// 
// Start address: 0x16e5e0
void* sfMessagePacketCheck(void* pos, int use)
{
	// Line 1962, Address: 0x16e5e0, Func Offset: 0
	// Line 1963, Address: 0x16e5e4, Func Offset: 0x4
	// Line 1962, Address: 0x16e5e8, Func Offset: 0x8
	// Line 1963, Address: 0x16e5ec, Func Offset: 0xc
	// Line 1965, Address: 0x16e610, Func Offset: 0x30
	// Line 1966, Address: 0x16e618, Func Offset: 0x38
	// Line 1967, Address: 0x16e620, Func Offset: 0x40
	// Line 1971, Address: 0x16e638, Func Offset: 0x58
	// Line 1970, Address: 0x16e63c, Func Offset: 0x5c
	// Line 1971, Address: 0x16e640, Func Offset: 0x60
	// Func End, Address: 0x16e648, Func Offset: 0x68
}

// 
// Start address: 0x16e650
void sfMessagePacketFix()
{
	// Line 1976, Address: 0x16e650, Func Offset: 0
	// Line 1977, Address: 0x16e658, Func Offset: 0x8
	// Line 1978, Address: 0x16e660, Func Offset: 0x10
	// Line 1979, Address: 0x16e674, Func Offset: 0x24
	// Func End, Address: 0x16e680, Func Offset: 0x30
}

// 
// Start address: 0x16e680
void sfMessageDrawSelectBar()
{
	unsigned long* pos;
	int x;
	int y;
	int w;
	int h;
	// Line 1987, Address: 0x16e680, Func Offset: 0
	// Line 1984, Address: 0x16e684, Func Offset: 0x4
	// Line 1987, Address: 0x16e688, Func Offset: 0x8
	// Line 1984, Address: 0x16e68c, Func Offset: 0xc
	// Line 1987, Address: 0x16e690, Func Offset: 0x10
	// Line 1990, Address: 0x16e6a4, Func Offset: 0x24
	// Line 1991, Address: 0x16e6ac, Func Offset: 0x2c
	// Line 1992, Address: 0x16e6b0, Func Offset: 0x30
	// Line 1991, Address: 0x16e6b4, Func Offset: 0x34
	// Line 1990, Address: 0x16e6b8, Func Offset: 0x38
	// Line 1992, Address: 0x16e6bc, Func Offset: 0x3c
	// Line 1997, Address: 0x16e6c0, Func Offset: 0x40
	// Line 1992, Address: 0x16e6c4, Func Offset: 0x44
	// Line 1993, Address: 0x16e6d4, Func Offset: 0x54
	// Line 1992, Address: 0x16e6d8, Func Offset: 0x58
	// Line 1993, Address: 0x16e6e4, Func Offset: 0x64
	// Line 1994, Address: 0x16e6f4, Func Offset: 0x74
	// Line 1993, Address: 0x16e6f8, Func Offset: 0x78
	// Line 1994, Address: 0x16e6fc, Func Offset: 0x7c
	// Line 1995, Address: 0x16e70c, Func Offset: 0x8c
	// Line 1994, Address: 0x16e710, Func Offset: 0x90
	// Line 1995, Address: 0x16e714, Func Offset: 0x94
	// Line 1996, Address: 0x16e718, Func Offset: 0x98
	// Line 1995, Address: 0x16e71c, Func Offset: 0x9c
	// Line 1996, Address: 0x16e720, Func Offset: 0xa0
	// Line 1998, Address: 0x16e728, Func Offset: 0xa8
	// Line 1997, Address: 0x16e730, Func Offset: 0xb0
	// Line 1998, Address: 0x16e734, Func Offset: 0xb4
	// Line 1997, Address: 0x16e738, Func Offset: 0xb8
	// Line 1998, Address: 0x16e73c, Func Offset: 0xbc
	// Line 1997, Address: 0x16e740, Func Offset: 0xc0
	// Line 1998, Address: 0x16e744, Func Offset: 0xc4
	// Line 2000, Address: 0x16e74c, Func Offset: 0xcc
	// Line 2001, Address: 0x16e754, Func Offset: 0xd4
	// Func End, Address: 0x16e760, Func Offset: 0xe0
}

// 
// Start address: 0x16e760
void sfMessageDrawSelectBarBlur()
{
	unsigned long* pos;
	int i;
	int m;
	int x0;
	int y0;
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
	unsigned int color0;
	unsigned int color1;
	sfMessageRect* rect;
	// Line 2006, Address: 0x16e760, Func Offset: 0
	// Line 2011, Address: 0x16e764, Func Offset: 0x4
	// Line 2006, Address: 0x16e768, Func Offset: 0x8
	// Line 2011, Address: 0x16e790, Func Offset: 0x30
	// Line 2012, Address: 0x16e798, Func Offset: 0x38
	// Line 2013, Address: 0x16e7a4, Func Offset: 0x44
	// Line 2015, Address: 0x16e7bc, Func Offset: 0x5c
	// Line 2016, Address: 0x16e7c8, Func Offset: 0x68
	// Line 2018, Address: 0x16e7d0, Func Offset: 0x70
	// Line 2019, Address: 0x16e7d4, Func Offset: 0x74
	// Line 2020, Address: 0x16e7dc, Func Offset: 0x7c
	// Line 2024, Address: 0x16e7f8, Func Offset: 0x98
	// Line 2030, Address: 0x16e7fc, Func Offset: 0x9c
	// Line 2024, Address: 0x16e800, Func Offset: 0xa0
	// Line 2020, Address: 0x16e804, Func Offset: 0xa4
	// Line 2025, Address: 0x16e808, Func Offset: 0xa8
	// Line 2026, Address: 0x16e814, Func Offset: 0xb4
	// Line 2027, Address: 0x16e818, Func Offset: 0xb8
	// Line 2028, Address: 0x16e81c, Func Offset: 0xbc
	// Line 2026, Address: 0x16e820, Func Offset: 0xc0
	// Line 2029, Address: 0x16e828, Func Offset: 0xc8
	// Line 2025, Address: 0x16e840, Func Offset: 0xe0
	// Line 2026, Address: 0x16e848, Func Offset: 0xe8
	// Line 2027, Address: 0x16e850, Func Offset: 0xf0
	// Line 2028, Address: 0x16e858, Func Offset: 0xf8
	// Line 2030, Address: 0x16e85c, Func Offset: 0xfc
	// Line 2032, Address: 0x16e868, Func Offset: 0x108
	// Line 2031, Address: 0x16e870, Func Offset: 0x110
	// Line 2032, Address: 0x16e874, Func Offset: 0x114
	// Line 2038, Address: 0x16e878, Func Offset: 0x118
	// Line 2037, Address: 0x16e87c, Func Offset: 0x11c
	// Line 2034, Address: 0x16e880, Func Offset: 0x120
	// Line 2039, Address: 0x16e884, Func Offset: 0x124
	// Line 2035, Address: 0x16e888, Func Offset: 0x128
	// Line 2040, Address: 0x16e88c, Func Offset: 0x12c
	// Line 2036, Address: 0x16e890, Func Offset: 0x130
	// Line 2032, Address: 0x16e894, Func Offset: 0x134
	// Line 2041, Address: 0x16e8ac, Func Offset: 0x14c
	// Line 2039, Address: 0x16e8b0, Func Offset: 0x150
	// Line 2032, Address: 0x16e8b8, Func Offset: 0x158
	// Line 2042, Address: 0x16e8bc, Func Offset: 0x15c
	// Line 2040, Address: 0x16e8c0, Func Offset: 0x160
	// Line 2032, Address: 0x16e8c8, Func Offset: 0x168
	// Line 2039, Address: 0x16e8cc, Func Offset: 0x16c
	// Line 2040, Address: 0x16e8d4, Func Offset: 0x174
	// Line 2043, Address: 0x16e8d8, Func Offset: 0x178
	// Line 2040, Address: 0x16e8dc, Func Offset: 0x17c
	// Line 2041, Address: 0x16e8e0, Func Offset: 0x180
	// Line 2042, Address: 0x16e8e8, Func Offset: 0x188
	// Line 2032, Address: 0x16e8ec, Func Offset: 0x18c
	// Line 2042, Address: 0x16e8f0, Func Offset: 0x190
	// Line 2032, Address: 0x16e8f4, Func Offset: 0x194
	// Line 2043, Address: 0x16e8f8, Func Offset: 0x198
	// Line 2044, Address: 0x16e900, Func Offset: 0x1a0
	// Line 2045, Address: 0x16e908, Func Offset: 0x1a8
	// Line 2044, Address: 0x16e90c, Func Offset: 0x1ac
	// Line 2045, Address: 0x16e910, Func Offset: 0x1b0
	// Line 2046, Address: 0x16e91c, Func Offset: 0x1bc
	// Line 2047, Address: 0x16e92c, Func Offset: 0x1cc
	// Line 2049, Address: 0x16e940, Func Offset: 0x1e0
	// Line 2048, Address: 0x16e944, Func Offset: 0x1e4
	// Line 2049, Address: 0x16e950, Func Offset: 0x1f0
	// Line 2050, Address: 0x16e95c, Func Offset: 0x1fc
	// Line 2051, Address: 0x16e96c, Func Offset: 0x20c
	// Line 2053, Address: 0x16e970, Func Offset: 0x210
	// Line 2054, Address: 0x16e97c, Func Offset: 0x21c
	// Line 2055, Address: 0x16e984, Func Offset: 0x224
	// Line 2056, Address: 0x16e988, Func Offset: 0x228
	// Line 2054, Address: 0x16e98c, Func Offset: 0x22c
	// Line 2055, Address: 0x16e990, Func Offset: 0x230
	// Line 2056, Address: 0x16e99c, Func Offset: 0x23c
	// Line 2057, Address: 0x16e9a8, Func Offset: 0x248
	// Line 2058, Address: 0x16e9b8, Func Offset: 0x258
	// Line 2059, Address: 0x16e9bc, Func Offset: 0x25c
	// Line 2058, Address: 0x16e9c0, Func Offset: 0x260
	// Line 2059, Address: 0x16e9c8, Func Offset: 0x268
	// Line 2060, Address: 0x16e9d4, Func Offset: 0x274
	// Line 2061, Address: 0x16e9e4, Func Offset: 0x284
	// Line 2063, Address: 0x16e9e8, Func Offset: 0x288
	// Line 2064, Address: 0x16e9f4, Func Offset: 0x294
	// Line 2065, Address: 0x16e9fc, Func Offset: 0x29c
	// Line 2066, Address: 0x16ea00, Func Offset: 0x2a0
	// Line 2064, Address: 0x16ea04, Func Offset: 0x2a4
	// Line 2065, Address: 0x16ea08, Func Offset: 0x2a8
	// Line 2066, Address: 0x16ea14, Func Offset: 0x2b4
	// Line 2067, Address: 0x16ea20, Func Offset: 0x2c0
	// Line 2069, Address: 0x16ea34, Func Offset: 0x2d4
	// Line 2068, Address: 0x16ea38, Func Offset: 0x2d8
	// Line 2069, Address: 0x16ea44, Func Offset: 0x2e4
	// Line 2070, Address: 0x16ea50, Func Offset: 0x2f0
	// Line 2071, Address: 0x16ea60, Func Offset: 0x300
	// Line 2072, Address: 0x16ea64, Func Offset: 0x304
	// Line 2073, Address: 0x16ea68, Func Offset: 0x308
	// Line 2074, Address: 0x16ea78, Func Offset: 0x318
	// Line 2075, Address: 0x16ea80, Func Offset: 0x320
	// Line 2074, Address: 0x16ea84, Func Offset: 0x324
	// Line 2076, Address: 0x16ea88, Func Offset: 0x328
	// Line 2075, Address: 0x16ea8c, Func Offset: 0x32c
	// Line 2076, Address: 0x16ea98, Func Offset: 0x338
	// Line 2077, Address: 0x16eaa0, Func Offset: 0x340
	// Line 2076, Address: 0x16eaa4, Func Offset: 0x344
	// Line 2077, Address: 0x16eaa8, Func Offset: 0x348
	// Line 2076, Address: 0x16eaac, Func Offset: 0x34c
	// Line 2077, Address: 0x16eab0, Func Offset: 0x350
	// Line 2078, Address: 0x16eabc, Func Offset: 0x35c
	// Line 2079, Address: 0x16eac0, Func Offset: 0x360
	// Line 2078, Address: 0x16eac4, Func Offset: 0x364
	// Line 2079, Address: 0x16eacc, Func Offset: 0x36c
	// Line 2080, Address: 0x16ead8, Func Offset: 0x378
	// Line 2081, Address: 0x16eae8, Func Offset: 0x388
	// Line 2083, Address: 0x16eaec, Func Offset: 0x38c
	// Line 2084, Address: 0x16eb14, Func Offset: 0x3b4
	// Line 2085, Address: 0x16eb1c, Func Offset: 0x3bc
	// Func End, Address: 0x16eb50, Func Offset: 0x3f0
}

// 
// Start address: 0x16eb50
void sfMessageDrawExtra()
{
	unsigned long* pos;
	sfMessageDataEx* blank[64];
	sfMessageDataEx* hline[64];
	int blank_count;
	int hline_count;
	int base_x;
	int base_y;
	int x;
	int y;
	int w;
	int h;
	int u;
	int v;
	int tw;
	int th;
	sfMessageDataEx* pf;
	int c;
	sfMessageDataEx* pf;
	sfMessageDataEx** ppf;
	int x;
	int y;
	int w;
	int h;
	sfMessageDataEx* pf;
	sfMessageDataEx** ppf;
	int x;
	int y;
	int w;
	int h;
	// Line 2090, Address: 0x16eb50, Func Offset: 0
	// Line 2097, Address: 0x16eb54, Func Offset: 0x4
	// Line 2090, Address: 0x16eb58, Func Offset: 0x8
	// Line 2097, Address: 0x16eb74, Func Offset: 0x24
	// Line 2100, Address: 0x16eb80, Func Offset: 0x30
	// Line 2104, Address: 0x16eb94, Func Offset: 0x44
	// Line 2100, Address: 0x16eb98, Func Offset: 0x48
	// Line 2104, Address: 0x16eb9c, Func Offset: 0x4c
	// Line 2107, Address: 0x16eba0, Func Offset: 0x50
	// Line 2105, Address: 0x16eba4, Func Offset: 0x54
	// Line 2108, Address: 0x16eba8, Func Offset: 0x58
	// Line 2111, Address: 0x16ebb0, Func Offset: 0x60
	// Line 2117, Address: 0x16ebb4, Func Offset: 0x64
	// Line 2111, Address: 0x16ebb8, Func Offset: 0x68
	// Line 2117, Address: 0x16ebbc, Func Offset: 0x6c
	// Line 2110, Address: 0x16ebcc, Func Offset: 0x7c
	// Line 2117, Address: 0x16ebd0, Func Offset: 0x80
	// Line 2110, Address: 0x16ebd4, Func Offset: 0x84
	// Line 2117, Address: 0x16ebd8, Func Offset: 0x88
	// Line 2112, Address: 0x16ebe0, Func Offset: 0x90
	// Line 2117, Address: 0x16ebe4, Func Offset: 0x94
	// Line 2112, Address: 0x16ebe8, Func Offset: 0x98
	// Line 2117, Address: 0x16ebec, Func Offset: 0x9c
	// Line 2124, Address: 0x16ebf4, Func Offset: 0xa4
	// Line 2123, Address: 0x16ebf8, Func Offset: 0xa8
	// Line 2124, Address: 0x16ebfc, Func Offset: 0xac
	// Line 2117, Address: 0x16ec00, Func Offset: 0xb0
	// Line 2125, Address: 0x16ec04, Func Offset: 0xb4
	// Line 2126, Address: 0x16ec10, Func Offset: 0xc0
	// Line 2127, Address: 0x16ec1c, Func Offset: 0xcc
	// Line 2128, Address: 0x16ec3c, Func Offset: 0xec
	// Line 2129, Address: 0x16ec40, Func Offset: 0xf0
	// Line 2130, Address: 0x16ec4c, Func Offset: 0xfc
	// Line 2131, Address: 0x16ec54, Func Offset: 0x104
	// Line 2132, Address: 0x16ec58, Func Offset: 0x108
	// Line 2135, Address: 0x16ec64, Func Offset: 0x114
	// Line 2136, Address: 0x16ec70, Func Offset: 0x120
	// Line 2137, Address: 0x16ec78, Func Offset: 0x128
	// Line 2136, Address: 0x16ec7c, Func Offset: 0x12c
	// Line 2138, Address: 0x16ec80, Func Offset: 0x130
	// Line 2147, Address: 0x16ec84, Func Offset: 0x134
	// Line 2141, Address: 0x16ec88, Func Offset: 0x138
	// Line 2139, Address: 0x16ec8c, Func Offset: 0x13c
	// Line 2140, Address: 0x16ec90, Func Offset: 0x140
	// Line 2142, Address: 0x16ec94, Func Offset: 0x144
	// Line 2137, Address: 0x16ec98, Func Offset: 0x148
	// Line 2145, Address: 0x16ec9c, Func Offset: 0x14c
	// Line 2137, Address: 0x16eca0, Func Offset: 0x150
	// Line 2138, Address: 0x16eca4, Func Offset: 0x154
	// Line 2143, Address: 0x16ecac, Func Offset: 0x15c
	// Line 2139, Address: 0x16ecb0, Func Offset: 0x160
	// Line 2146, Address: 0x16ecb4, Func Offset: 0x164
	// Line 2140, Address: 0x16ecb8, Func Offset: 0x168
	// Line 2144, Address: 0x16ecbc, Func Offset: 0x16c
	// Line 2146, Address: 0x16ecc0, Func Offset: 0x170
	// Line 2145, Address: 0x16ecc8, Func Offset: 0x178
	// Line 2146, Address: 0x16eccc, Func Offset: 0x17c
	// Line 2147, Address: 0x16ecd0, Func Offset: 0x180
	// Line 2148, Address: 0x16ecd8, Func Offset: 0x188
	// Line 2147, Address: 0x16ecdc, Func Offset: 0x18c
	// Line 2148, Address: 0x16ece0, Func Offset: 0x190
	// Line 2153, Address: 0x16ecf0, Func Offset: 0x1a0
	// Line 2148, Address: 0x16ecf4, Func Offset: 0x1a4
	// Line 2153, Address: 0x16ecf8, Func Offset: 0x1a8
	// Line 2148, Address: 0x16ecfc, Func Offset: 0x1ac
	// Line 2153, Address: 0x16ed00, Func Offset: 0x1b0
	// Line 2151, Address: 0x16ed04, Func Offset: 0x1b4
	// Line 2148, Address: 0x16ed08, Func Offset: 0x1b8
	// Line 2151, Address: 0x16ed0c, Func Offset: 0x1bc
	// Line 2148, Address: 0x16ed10, Func Offset: 0x1c0
	// Line 2151, Address: 0x16ed14, Func Offset: 0x1c4
	// Line 2153, Address: 0x16ed18, Func Offset: 0x1c8
	// Line 2149, Address: 0x16ed1c, Func Offset: 0x1cc
	// Line 2154, Address: 0x16ed24, Func Offset: 0x1d4
	// Line 2149, Address: 0x16ed28, Func Offset: 0x1d8
	// Line 2151, Address: 0x16ed30, Func Offset: 0x1e0
	// Line 2149, Address: 0x16ed34, Func Offset: 0x1e4
	// Line 2153, Address: 0x16ed38, Func Offset: 0x1e8
	// Line 2151, Address: 0x16ed3c, Func Offset: 0x1ec
	// Line 2153, Address: 0x16ed40, Func Offset: 0x1f0
	// Line 2151, Address: 0x16ed44, Func Offset: 0x1f4
	// Line 2152, Address: 0x16ed48, Func Offset: 0x1f8
	// Line 2151, Address: 0x16ed4c, Func Offset: 0x1fc
	// Line 2154, Address: 0x16ed50, Func Offset: 0x200
	// Line 2153, Address: 0x16ed54, Func Offset: 0x204
	// Line 2151, Address: 0x16ed58, Func Offset: 0x208
	// Line 2153, Address: 0x16ed5c, Func Offset: 0x20c
	// Line 2151, Address: 0x16ed64, Func Offset: 0x214
	// Line 2150, Address: 0x16ed68, Func Offset: 0x218
	// Line 2154, Address: 0x16ed6c, Func Offset: 0x21c
	// Line 2151, Address: 0x16ed70, Func Offset: 0x220
	// Line 2152, Address: 0x16ed74, Func Offset: 0x224
	// Line 2150, Address: 0x16ed78, Func Offset: 0x228
	// Line 2152, Address: 0x16ed7c, Func Offset: 0x22c
	// Line 2150, Address: 0x16ed80, Func Offset: 0x230
	// Line 2151, Address: 0x16ed84, Func Offset: 0x234
	// Line 2150, Address: 0x16ed88, Func Offset: 0x238
	// Line 2152, Address: 0x16ed8c, Func Offset: 0x23c
	// Line 2151, Address: 0x16ed90, Func Offset: 0x240
	// Line 2154, Address: 0x16ed94, Func Offset: 0x244
	// Line 2152, Address: 0x16ed98, Func Offset: 0x248
	// Line 2154, Address: 0x16ed9c, Func Offset: 0x24c
	// Line 2153, Address: 0x16eda0, Func Offset: 0x250
	// Line 2154, Address: 0x16eda4, Func Offset: 0x254
	// Line 2155, Address: 0x16eda8, Func Offset: 0x258
	// Line 2156, Address: 0x16edac, Func Offset: 0x25c
	// Line 2157, Address: 0x16edb0, Func Offset: 0x260
	// Line 2158, Address: 0x16edb4, Func Offset: 0x264
	// Line 2159, Address: 0x16edc4, Func Offset: 0x274
	// Line 2162, Address: 0x16edcc, Func Offset: 0x27c
	// Line 2165, Address: 0x16edd4, Func Offset: 0x284
	// Line 2170, Address: 0x16edf4, Func Offset: 0x2a4
	// Line 2171, Address: 0x16edf8, Func Offset: 0x2a8
	// Line 2172, Address: 0x16ee10, Func Offset: 0x2c0
	// Line 2173, Address: 0x16ee14, Func Offset: 0x2c4
	// Line 2172, Address: 0x16ee18, Func Offset: 0x2c8
	// Line 2174, Address: 0x16ee1c, Func Offset: 0x2cc
	// Line 2175, Address: 0x16ee20, Func Offset: 0x2d0
	// Line 2176, Address: 0x16ee24, Func Offset: 0x2d4
	// Line 2173, Address: 0x16ee28, Func Offset: 0x2d8
	// Line 2174, Address: 0x16ee2c, Func Offset: 0x2dc
	// Line 2173, Address: 0x16ee30, Func Offset: 0x2e0
	// Line 2174, Address: 0x16ee34, Func Offset: 0x2e4
	// Line 2175, Address: 0x16ee38, Func Offset: 0x2e8
	// Line 2177, Address: 0x16ee3c, Func Offset: 0x2ec
	// Line 2173, Address: 0x16ee40, Func Offset: 0x2f0
	// Line 2179, Address: 0x16ee44, Func Offset: 0x2f4
	// Line 2174, Address: 0x16ee48, Func Offset: 0x2f8
	// Line 2175, Address: 0x16ee4c, Func Offset: 0x2fc
	// Line 2173, Address: 0x16ee50, Func Offset: 0x300
	// Line 2174, Address: 0x16ee54, Func Offset: 0x304
	// Line 2175, Address: 0x16ee58, Func Offset: 0x308
	// Line 2181, Address: 0x16ee5c, Func Offset: 0x30c
	// Line 2176, Address: 0x16ee60, Func Offset: 0x310
	// Line 2180, Address: 0x16ee64, Func Offset: 0x314
	// Line 2179, Address: 0x16ee68, Func Offset: 0x318
	// Line 2176, Address: 0x16ee6c, Func Offset: 0x31c
	// Line 2181, Address: 0x16ee70, Func Offset: 0x320
	// Line 2179, Address: 0x16ee74, Func Offset: 0x324
	// Line 2176, Address: 0x16ee78, Func Offset: 0x328
	// Line 2179, Address: 0x16ee7c, Func Offset: 0x32c
	// Line 2180, Address: 0x16ee80, Func Offset: 0x330
	// Line 2183, Address: 0x16ee84, Func Offset: 0x334
	// Line 2184, Address: 0x16ee88, Func Offset: 0x338
	// Line 2180, Address: 0x16ee90, Func Offset: 0x340
	// Line 2181, Address: 0x16ee94, Func Offset: 0x344
	// Line 2184, Address: 0x16ee98, Func Offset: 0x348
	// Line 2181, Address: 0x16ee9c, Func Offset: 0x34c
	// Line 2182, Address: 0x16eea0, Func Offset: 0x350
	// Line 2183, Address: 0x16eea4, Func Offset: 0x354
	// Line 2182, Address: 0x16eeac, Func Offset: 0x35c
	// Line 2184, Address: 0x16eeb8, Func Offset: 0x368
	// Line 2183, Address: 0x16eebc, Func Offset: 0x36c
	// Line 2184, Address: 0x16eec0, Func Offset: 0x370
	// Line 2185, Address: 0x16eec4, Func Offset: 0x374
	// Line 2186, Address: 0x16eec8, Func Offset: 0x378
	// Line 2187, Address: 0x16eed4, Func Offset: 0x384
	// Line 2188, Address: 0x16eedc, Func Offset: 0x38c
	// Line 2190, Address: 0x16eee0, Func Offset: 0x390
	// Line 2193, Address: 0x16eee8, Func Offset: 0x398
	// Line 2198, Address: 0x16ef08, Func Offset: 0x3b8
	// Line 2199, Address: 0x16ef0c, Func Offset: 0x3bc
	// Line 2200, Address: 0x16ef28, Func Offset: 0x3d8
	// Line 2201, Address: 0x16ef2c, Func Offset: 0x3dc
	// Line 2200, Address: 0x16ef30, Func Offset: 0x3e0
	// Line 2202, Address: 0x16ef34, Func Offset: 0x3e4
	// Line 2203, Address: 0x16ef38, Func Offset: 0x3e8
	// Line 2204, Address: 0x16ef3c, Func Offset: 0x3ec
	// Line 2201, Address: 0x16ef40, Func Offset: 0x3f0
	// Line 2202, Address: 0x16ef48, Func Offset: 0x3f8
	// Line 2203, Address: 0x16ef4c, Func Offset: 0x3fc
	// Line 2201, Address: 0x16ef50, Func Offset: 0x400
	// Line 2204, Address: 0x16ef54, Func Offset: 0x404
	// Line 2202, Address: 0x16ef58, Func Offset: 0x408
	// Line 2203, Address: 0x16ef5c, Func Offset: 0x40c
	// Line 2204, Address: 0x16ef60, Func Offset: 0x410
	// Line 2202, Address: 0x16ef64, Func Offset: 0x414
	// Line 2201, Address: 0x16ef68, Func Offset: 0x418
	// Line 2203, Address: 0x16ef6c, Func Offset: 0x41c
	// Line 2202, Address: 0x16ef70, Func Offset: 0x420
	// Line 2209, Address: 0x16ef74, Func Offset: 0x424
	// Line 2204, Address: 0x16ef78, Func Offset: 0x428
	// Line 2209, Address: 0x16ef7c, Func Offset: 0x42c
	// Line 2205, Address: 0x16ef80, Func Offset: 0x430
	// Line 2207, Address: 0x16ef84, Func Offset: 0x434
	// Line 2208, Address: 0x16ef88, Func Offset: 0x438
	// Line 2211, Address: 0x16ef8c, Func Offset: 0x43c
	// Line 2207, Address: 0x16ef90, Func Offset: 0x440
	// Line 2211, Address: 0x16ef94, Func Offset: 0x444
	// Line 2207, Address: 0x16ef98, Func Offset: 0x448
	// Line 2212, Address: 0x16ef9c, Func Offset: 0x44c
	// Line 2207, Address: 0x16efa0, Func Offset: 0x450
	// Line 2208, Address: 0x16efa4, Func Offset: 0x454
	// Line 2212, Address: 0x16efa8, Func Offset: 0x458
	// Line 2208, Address: 0x16efac, Func Offset: 0x45c
	// Line 2209, Address: 0x16efb0, Func Offset: 0x460
	// Line 2212, Address: 0x16efb4, Func Offset: 0x464
	// Line 2209, Address: 0x16efb8, Func Offset: 0x468
	// Line 2210, Address: 0x16efbc, Func Offset: 0x46c
	// Line 2211, Address: 0x16efc0, Func Offset: 0x470
	// Line 2212, Address: 0x16efc4, Func Offset: 0x474
	// Line 2210, Address: 0x16efc8, Func Offset: 0x478
	// Line 2211, Address: 0x16efd4, Func Offset: 0x484
	// Line 2212, Address: 0x16efd8, Func Offset: 0x488
	// Line 2213, Address: 0x16efdc, Func Offset: 0x48c
	// Line 2214, Address: 0x16efe0, Func Offset: 0x490
	// Line 2215, Address: 0x16efec, Func Offset: 0x49c
	// Line 2216, Address: 0x16eff4, Func Offset: 0x4a4
	// Line 2217, Address: 0x16eff8, Func Offset: 0x4a8
	// Func End, Address: 0x16f01c, Func Offset: 0x4cc
}

// 
// Start address: 0x16f020
void sfMessageDrawExternalCharacter()
{
	unsigned long* pos;
	int x;
	int y;
	int w;
	int h;
	int u;
	int v;
	int base_x;
	int base_y;
	sfMessageDataExtc* pf;
	sfMessageExternalCharacterData* pecd;
	int c;
	// Line 2222, Address: 0x16f020, Func Offset: 0
	// Line 2229, Address: 0x16f024, Func Offset: 0x4
	// Line 2222, Address: 0x16f028, Func Offset: 0x8
	// Line 2229, Address: 0x16f050, Func Offset: 0x30
	// Line 2232, Address: 0x16f05c, Func Offset: 0x3c
	// Line 2235, Address: 0x16f074, Func Offset: 0x54
	// Line 2237, Address: 0x16f080, Func Offset: 0x60
	// Line 2235, Address: 0x16f084, Func Offset: 0x64
	// Line 2237, Address: 0x16f088, Func Offset: 0x68
	// Line 2240, Address: 0x16f08c, Func Offset: 0x6c
	// Line 2238, Address: 0x16f090, Func Offset: 0x70
	// Line 2241, Address: 0x16f094, Func Offset: 0x74
	// Line 2243, Address: 0x16f0a0, Func Offset: 0x80
	// Line 2251, Address: 0x16f0cc, Func Offset: 0xac
	// Line 2250, Address: 0x16f0d0, Func Offset: 0xb0
	// Line 2251, Address: 0x16f0d4, Func Offset: 0xb4
	// Line 2243, Address: 0x16f0d8, Func Offset: 0xb8
	// Line 2250, Address: 0x16f0dc, Func Offset: 0xbc
	// Line 2251, Address: 0x16f0e0, Func Offset: 0xc0
	// Line 2252, Address: 0x16f0e4, Func Offset: 0xc4
	// Line 2253, Address: 0x16f0f0, Func Offset: 0xd0
	// Line 2254, Address: 0x16f0f8, Func Offset: 0xd8
	// Line 2255, Address: 0x16f100, Func Offset: 0xe0
	// Line 2256, Address: 0x16f10c, Func Offset: 0xec
	// Line 2255, Address: 0x16f110, Func Offset: 0xf0
	// Line 2258, Address: 0x16f114, Func Offset: 0xf4
	// Line 2256, Address: 0x16f118, Func Offset: 0xf8
	// Line 2257, Address: 0x16f11c, Func Offset: 0xfc
	// Line 2256, Address: 0x16f120, Func Offset: 0x100
	// Line 2259, Address: 0x16f124, Func Offset: 0x104
	// Line 2260, Address: 0x16f128, Func Offset: 0x108
	// Line 2256, Address: 0x16f12c, Func Offset: 0x10c
	// Line 2258, Address: 0x16f134, Func Offset: 0x114
	// Line 2257, Address: 0x16f138, Func Offset: 0x118
	// Line 2256, Address: 0x16f13c, Func Offset: 0x11c
	// Line 2257, Address: 0x16f140, Func Offset: 0x120
	// Line 2256, Address: 0x16f144, Func Offset: 0x124
	// Line 2261, Address: 0x16f148, Func Offset: 0x128
	// Line 2259, Address: 0x16f14c, Func Offset: 0x12c
	// Line 2262, Address: 0x16f150, Func Offset: 0x130
	// Line 2257, Address: 0x16f154, Func Offset: 0x134
	// Line 2258, Address: 0x16f158, Func Offset: 0x138
	// Line 2263, Address: 0x16f160, Func Offset: 0x140
	// Line 2264, Address: 0x16f16c, Func Offset: 0x14c
	// Line 2265, Address: 0x16f178, Func Offset: 0x158
	// Line 2266, Address: 0x16f17c, Func Offset: 0x15c
	// Line 2265, Address: 0x16f180, Func Offset: 0x160
	// Line 2266, Address: 0x16f184, Func Offset: 0x164
	// Line 2267, Address: 0x16f188, Func Offset: 0x168
	// Line 2266, Address: 0x16f18c, Func Offset: 0x16c
	// Line 2267, Address: 0x16f190, Func Offset: 0x170
	// Line 2266, Address: 0x16f194, Func Offset: 0x174
	// Line 2267, Address: 0x16f198, Func Offset: 0x178
	// Line 2266, Address: 0x16f19c, Func Offset: 0x17c
	// Line 2265, Address: 0x16f1a8, Func Offset: 0x188
	// Line 2266, Address: 0x16f1b8, Func Offset: 0x198
	// Line 2267, Address: 0x16f1bc, Func Offset: 0x19c
	// Line 2269, Address: 0x16f1c8, Func Offset: 0x1a8
	// Line 2268, Address: 0x16f1cc, Func Offset: 0x1ac
	// Line 2269, Address: 0x16f1d8, Func Offset: 0x1b8
	// Line 2268, Address: 0x16f1dc, Func Offset: 0x1bc
	// Line 2269, Address: 0x16f1e0, Func Offset: 0x1c0
	// Line 2268, Address: 0x16f1ec, Func Offset: 0x1cc
	// Line 2270, Address: 0x16f1f4, Func Offset: 0x1d4
	// Line 2271, Address: 0x16f1f8, Func Offset: 0x1d8
	// Line 2268, Address: 0x16f1fc, Func Offset: 0x1dc
	// Line 2271, Address: 0x16f200, Func Offset: 0x1e0
	// Line 2268, Address: 0x16f204, Func Offset: 0x1e4
	// Line 2271, Address: 0x16f208, Func Offset: 0x1e8
	// Line 2268, Address: 0x16f20c, Func Offset: 0x1ec
	// Line 2272, Address: 0x16f214, Func Offset: 0x1f4
	// Line 2268, Address: 0x16f21c, Func Offset: 0x1fc
	// Line 2269, Address: 0x16f220, Func Offset: 0x200
	// Line 2272, Address: 0x16f224, Func Offset: 0x204
	// Line 2269, Address: 0x16f228, Func Offset: 0x208
	// Line 2272, Address: 0x16f22c, Func Offset: 0x20c
	// Line 2270, Address: 0x16f230, Func Offset: 0x210
	// Line 2272, Address: 0x16f234, Func Offset: 0x214
	// Line 2274, Address: 0x16f23c, Func Offset: 0x21c
	// Line 2270, Address: 0x16f244, Func Offset: 0x224
	// Line 2274, Address: 0x16f248, Func Offset: 0x228
	// Line 2270, Address: 0x16f24c, Func Offset: 0x22c
	// Line 2274, Address: 0x16f250, Func Offset: 0x230
	// Line 2270, Address: 0x16f254, Func Offset: 0x234
	// Line 2274, Address: 0x16f258, Func Offset: 0x238
	// Line 2270, Address: 0x16f25c, Func Offset: 0x23c
	// Line 2274, Address: 0x16f260, Func Offset: 0x240
	// Line 2271, Address: 0x16f264, Func Offset: 0x244
	// Line 2274, Address: 0x16f268, Func Offset: 0x248
	// Line 2275, Address: 0x16f26c, Func Offset: 0x24c
	// Line 2271, Address: 0x16f270, Func Offset: 0x250
	// Line 2275, Address: 0x16f278, Func Offset: 0x258
	// Line 2271, Address: 0x16f27c, Func Offset: 0x25c
	// Line 2272, Address: 0x16f290, Func Offset: 0x270
	// Line 2273, Address: 0x16f294, Func Offset: 0x274
	// Line 2275, Address: 0x16f2cc, Func Offset: 0x2ac
	// Line 2277, Address: 0x16f2d8, Func Offset: 0x2b8
	// Line 2279, Address: 0x16f2e0, Func Offset: 0x2c0
	// Line 2277, Address: 0x16f2e4, Func Offset: 0x2c4
	// Line 2279, Address: 0x16f2e8, Func Offset: 0x2c8
	// Line 2278, Address: 0x16f2ec, Func Offset: 0x2cc
	// Line 2279, Address: 0x16f2f0, Func Offset: 0x2d0
	// Line 2280, Address: 0x16f2f4, Func Offset: 0x2d4
	// Line 2279, Address: 0x16f2f8, Func Offset: 0x2d8
	// Line 2285, Address: 0x16f2fc, Func Offset: 0x2dc
	// Line 2279, Address: 0x16f300, Func Offset: 0x2e0
	// Line 2280, Address: 0x16f308, Func Offset: 0x2e8
	// Line 2281, Address: 0x16f30c, Func Offset: 0x2ec
	// Line 2279, Address: 0x16f310, Func Offset: 0x2f0
	// Line 2281, Address: 0x16f314, Func Offset: 0x2f4
	// Line 2282, Address: 0x16f318, Func Offset: 0x2f8
	// Line 2281, Address: 0x16f31c, Func Offset: 0x2fc
	// Line 2278, Address: 0x16f320, Func Offset: 0x300
	// Line 2280, Address: 0x16f324, Func Offset: 0x304
	// Line 2278, Address: 0x16f328, Func Offset: 0x308
	// Line 2287, Address: 0x16f32c, Func Offset: 0x30c
	// Line 2278, Address: 0x16f330, Func Offset: 0x310
	// Line 2282, Address: 0x16f334, Func Offset: 0x314
	// Line 2279, Address: 0x16f338, Func Offset: 0x318
	// Line 2280, Address: 0x16f33c, Func Offset: 0x31c
	// Line 2281, Address: 0x16f340, Func Offset: 0x320
	// Line 2282, Address: 0x16f344, Func Offset: 0x324
	// Line 2287, Address: 0x16f348, Func Offset: 0x328
	// Line 2282, Address: 0x16f34c, Func Offset: 0x32c
	// Line 2281, Address: 0x16f350, Func Offset: 0x330
	// Line 2284, Address: 0x16f354, Func Offset: 0x334
	// Line 2281, Address: 0x16f358, Func Offset: 0x338
	// Line 2284, Address: 0x16f35c, Func Offset: 0x33c
	// Line 2281, Address: 0x16f364, Func Offset: 0x344
	// Line 2285, Address: 0x16f36c, Func Offset: 0x34c
	// Line 2281, Address: 0x16f370, Func Offset: 0x350
	// Line 2287, Address: 0x16f37c, Func Offset: 0x35c
	// Line 2282, Address: 0x16f380, Func Offset: 0x360
	// Line 2283, Address: 0x16f384, Func Offset: 0x364
	// Line 2287, Address: 0x16f388, Func Offset: 0x368
	// Line 2283, Address: 0x16f390, Func Offset: 0x370
	// Line 2290, Address: 0x16f394, Func Offset: 0x374
	// Line 2283, Address: 0x16f398, Func Offset: 0x378
	// Line 2285, Address: 0x16f3a0, Func Offset: 0x380
	// Line 2288, Address: 0x16f3a4, Func Offset: 0x384
	// Line 2284, Address: 0x16f3a8, Func Offset: 0x388
	// Line 2285, Address: 0x16f3ac, Func Offset: 0x38c
	// Line 2288, Address: 0x16f3b0, Func Offset: 0x390
	// Line 2284, Address: 0x16f3b8, Func Offset: 0x398
	// Line 2285, Address: 0x16f3d4, Func Offset: 0x3b4
	// Line 2286, Address: 0x16f3d8, Func Offset: 0x3b8
	// Line 2287, Address: 0x16f410, Func Offset: 0x3f0
	// Line 2289, Address: 0x16f414, Func Offset: 0x3f4
	// Line 2291, Address: 0x16f418, Func Offset: 0x3f8
	// Line 2292, Address: 0x16f424, Func Offset: 0x404
	// Line 2293, Address: 0x16f42c, Func Offset: 0x40c
	// Func End, Address: 0x16f460, Func Offset: 0x440
}

// 
// Start address: 0x16f460
void sfMessageDrawSkipCharacter()
{
	unsigned long* pos;
	int x;
	int y;
	// Line 2298, Address: 0x16f460, Func Offset: 0
	// Line 2302, Address: 0x16f464, Func Offset: 0x4
	// Line 2298, Address: 0x16f468, Func Offset: 0x8
	// Line 2302, Address: 0x16f478, Func Offset: 0x18
	// Line 2305, Address: 0x16f484, Func Offset: 0x24
	// Line 2308, Address: 0x16f49c, Func Offset: 0x3c
	// Line 2310, Address: 0x16f4ac, Func Offset: 0x4c
	// Line 2311, Address: 0x16f4b0, Func Offset: 0x50
	// Line 2313, Address: 0x16f4b4, Func Offset: 0x54
	// Line 2311, Address: 0x16f4b8, Func Offset: 0x58
	// Line 2314, Address: 0x16f4bc, Func Offset: 0x5c
	// Line 2316, Address: 0x16f4c4, Func Offset: 0x64
	// Line 2323, Address: 0x16f4f4, Func Offset: 0x94
	// Line 2324, Address: 0x16f500, Func Offset: 0xa0
	// Line 2323, Address: 0x16f504, Func Offset: 0xa4
	// Line 2324, Address: 0x16f508, Func Offset: 0xa8
	// Line 2325, Address: 0x16f518, Func Offset: 0xb8
	// Line 2324, Address: 0x16f51c, Func Offset: 0xbc
	// Line 2325, Address: 0x16f520, Func Offset: 0xc0
	// Line 2326, Address: 0x16f530, Func Offset: 0xd0
	// Line 2327, Address: 0x16f53c, Func Offset: 0xdc
	// Line 2328, Address: 0x16f544, Func Offset: 0xe4
	// Line 2329, Address: 0x16f548, Func Offset: 0xe8
	// Line 2327, Address: 0x16f54c, Func Offset: 0xec
	// Line 2328, Address: 0x16f550, Func Offset: 0xf0
	// Line 2329, Address: 0x16f554, Func Offset: 0xf4
	// Line 2331, Address: 0x16f55c, Func Offset: 0xfc
	// Line 2329, Address: 0x16f560, Func Offset: 0x100
	// Line 2331, Address: 0x16f564, Func Offset: 0x104
	// Line 2330, Address: 0x16f56c, Func Offset: 0x10c
	// Line 2331, Address: 0x16f570, Func Offset: 0x110
	// Line 2334, Address: 0x16f574, Func Offset: 0x114
	// Line 2330, Address: 0x16f578, Func Offset: 0x118
	// Line 2334, Address: 0x16f57c, Func Offset: 0x11c
	// Line 2330, Address: 0x16f580, Func Offset: 0x120
	// Line 2331, Address: 0x16f584, Func Offset: 0x124
	// Line 2332, Address: 0x16f588, Func Offset: 0x128
	// Line 2336, Address: 0x16f58c, Func Offset: 0x12c
	// Line 2332, Address: 0x16f590, Func Offset: 0x130
	// Line 2336, Address: 0x16f594, Func Offset: 0x134
	// Line 2334, Address: 0x16f59c, Func Offset: 0x13c
	// Line 2333, Address: 0x16f5a0, Func Offset: 0x140
	// Line 2332, Address: 0x16f5a4, Func Offset: 0x144
	// Line 2334, Address: 0x16f5b0, Func Offset: 0x150
	// Line 2333, Address: 0x16f5b4, Func Offset: 0x154
	// Line 2336, Address: 0x16f5b8, Func Offset: 0x158
	// Line 2335, Address: 0x16f5bc, Func Offset: 0x15c
	// Line 2336, Address: 0x16f5c0, Func Offset: 0x160
	// Line 2334, Address: 0x16f5c4, Func Offset: 0x164
	// Line 2335, Address: 0x16f5c8, Func Offset: 0x168
	// Line 2336, Address: 0x16f5d0, Func Offset: 0x170
	// Line 2338, Address: 0x16f5d4, Func Offset: 0x174
	// Line 2339, Address: 0x16f5d8, Func Offset: 0x178
	// Line 2340, Address: 0x16f5e0, Func Offset: 0x180
	// Func End, Address: 0x16f5f8, Func Offset: 0x198
}

// 
// Start address: 0x16f600
void sfMessageDrawFont()
{
	unsigned long* pos;
	int x;
	int y;
	int w;
	int h;
	int u;
	int v;
	int base_x;
	int base_y;
	int datan;
	sfMessageData1* pf;
	int c;
	unsigned int a;
	// Line 2345, Address: 0x16f600, Func Offset: 0
	// Line 2351, Address: 0x16f604, Func Offset: 0x4
	// Line 2345, Address: 0x16f608, Func Offset: 0x8
	// Line 2351, Address: 0x16f620, Func Offset: 0x20
	// Line 2354, Address: 0x16f62c, Func Offset: 0x2c
	// Line 2358, Address: 0x16f644, Func Offset: 0x44
	// Line 2359, Address: 0x16f648, Func Offset: 0x48
	// Line 2361, Address: 0x16f64c, Func Offset: 0x4c
	// Line 2362, Address: 0x16f650, Func Offset: 0x50
	// Line 2364, Address: 0x16f658, Func Offset: 0x58
	// Line 2371, Address: 0x16f684, Func Offset: 0x84
	// Line 2370, Address: 0x16f688, Func Offset: 0x88
	// Line 2371, Address: 0x16f68c, Func Offset: 0x8c
	// Line 2364, Address: 0x16f690, Func Offset: 0x90
	// Line 2372, Address: 0x16f694, Func Offset: 0x94
	// Line 2373, Address: 0x16f69c, Func Offset: 0x9c
	// Line 2374, Address: 0x16f6a4, Func Offset: 0xa4
	// Line 2376, Address: 0x16f6b4, Func Offset: 0xb4
	// Line 2379, Address: 0x16f6c0, Func Offset: 0xc0
	// Line 2380, Address: 0x16f6c8, Func Offset: 0xc8
	// Line 2381, Address: 0x16f6d0, Func Offset: 0xd0
	// Line 2388, Address: 0x16f6d4, Func Offset: 0xd4
	// Line 2386, Address: 0x16f6d8, Func Offset: 0xd8
	// Line 2380, Address: 0x16f6dc, Func Offset: 0xdc
	// Line 2382, Address: 0x16f6e0, Func Offset: 0xe0
	// Line 2390, Address: 0x16f6e4, Func Offset: 0xe4
	// Line 2385, Address: 0x16f6e8, Func Offset: 0xe8
	// Line 2383, Address: 0x16f6ec, Func Offset: 0xec
	// Line 2384, Address: 0x16f6f0, Func Offset: 0xf0
	// Line 2381, Address: 0x16f6f4, Func Offset: 0xf4
	// Line 2388, Address: 0x16f6f8, Func Offset: 0xf8
	// Line 2381, Address: 0x16f6fc, Func Offset: 0xfc
	// Line 2382, Address: 0x16f700, Func Offset: 0x100
	// Line 2386, Address: 0x16f704, Func Offset: 0x104
	// Line 2382, Address: 0x16f708, Func Offset: 0x108
	// Line 2385, Address: 0x16f70c, Func Offset: 0x10c
	// Line 2383, Address: 0x16f710, Func Offset: 0x110
	// Line 2390, Address: 0x16f714, Func Offset: 0x114
	// Line 2384, Address: 0x16f718, Func Offset: 0x118
	// Line 2390, Address: 0x16f71c, Func Offset: 0x11c
	// Line 2388, Address: 0x16f720, Func Offset: 0x120
	// Line 2389, Address: 0x16f728, Func Offset: 0x128
	// Line 2388, Address: 0x16f72c, Func Offset: 0x12c
	// Line 2389, Address: 0x16f730, Func Offset: 0x130
	// Line 2388, Address: 0x16f734, Func Offset: 0x134
	// Line 2389, Address: 0x16f738, Func Offset: 0x138
	// Line 2390, Address: 0x16f73c, Func Offset: 0x13c
	// Line 2391, Address: 0x16f744, Func Offset: 0x144
	// Line 2390, Address: 0x16f748, Func Offset: 0x148
	// Line 2391, Address: 0x16f74c, Func Offset: 0x14c
	// Line 2395, Address: 0x16f750, Func Offset: 0x150
	// Line 2391, Address: 0x16f754, Func Offset: 0x154
	// Line 2395, Address: 0x16f758, Func Offset: 0x158
	// Line 2391, Address: 0x16f75c, Func Offset: 0x15c
	// Line 2399, Address: 0x16f760, Func Offset: 0x160
	// Line 2391, Address: 0x16f764, Func Offset: 0x164
	// Line 2392, Address: 0x16f76c, Func Offset: 0x16c
	// Line 2391, Address: 0x16f770, Func Offset: 0x170
	// Line 2392, Address: 0x16f774, Func Offset: 0x174
	// Line 2391, Address: 0x16f778, Func Offset: 0x178
	// Line 2392, Address: 0x16f77c, Func Offset: 0x17c
	// Line 2393, Address: 0x16f788, Func Offset: 0x188
	// Line 2392, Address: 0x16f78c, Func Offset: 0x18c
	// Line 2394, Address: 0x16f790, Func Offset: 0x190
	// Line 2392, Address: 0x16f794, Func Offset: 0x194
	// Line 2394, Address: 0x16f798, Func Offset: 0x198
	// Line 2393, Address: 0x16f79c, Func Offset: 0x19c
	// Line 2394, Address: 0x16f7a0, Func Offset: 0x1a0
	// Line 2395, Address: 0x16f7b4, Func Offset: 0x1b4
	// Line 2393, Address: 0x16f7b8, Func Offset: 0x1b8
	// Line 2395, Address: 0x16f7bc, Func Offset: 0x1bc
	// Line 2393, Address: 0x16f7c0, Func Offset: 0x1c0
	// Line 2395, Address: 0x16f7c4, Func Offset: 0x1c4
	// Line 2396, Address: 0x16f7c8, Func Offset: 0x1c8
	// Line 2393, Address: 0x16f7cc, Func Offset: 0x1cc
	// Line 2396, Address: 0x16f7d0, Func Offset: 0x1d0
	// Line 2393, Address: 0x16f7d4, Func Offset: 0x1d4
	// Line 2396, Address: 0x16f7d8, Func Offset: 0x1d8
	// Line 2394, Address: 0x16f7dc, Func Offset: 0x1dc
	// Line 2395, Address: 0x16f7e0, Func Offset: 0x1e0
	// Line 2396, Address: 0x16f7e4, Func Offset: 0x1e4
	// Line 2395, Address: 0x16f7f0, Func Offset: 0x1f0
	// Line 2396, Address: 0x16f7f4, Func Offset: 0x1f4
	// Line 2397, Address: 0x16f7fc, Func Offset: 0x1fc
	// Line 2396, Address: 0x16f804, Func Offset: 0x204
	// Line 2397, Address: 0x16f808, Func Offset: 0x208
	// Line 2399, Address: 0x16f81c, Func Offset: 0x21c
	// Line 2403, Address: 0x16f824, Func Offset: 0x224
	// Line 2401, Address: 0x16f830, Func Offset: 0x230
	// Line 2403, Address: 0x16f834, Func Offset: 0x234
	// Line 2404, Address: 0x16f840, Func Offset: 0x240
	// Line 2402, Address: 0x16f844, Func Offset: 0x244
	// Line 2404, Address: 0x16f848, Func Offset: 0x248
	// Line 2401, Address: 0x16f84c, Func Offset: 0x24c
	// Line 2404, Address: 0x16f850, Func Offset: 0x250
	// Line 2402, Address: 0x16f858, Func Offset: 0x258
	// Line 2401, Address: 0x16f85c, Func Offset: 0x25c
	// Line 2402, Address: 0x16f860, Func Offset: 0x260
	// Line 2405, Address: 0x16f864, Func Offset: 0x264
	// Line 2401, Address: 0x16f868, Func Offset: 0x268
	// Line 2405, Address: 0x16f86c, Func Offset: 0x26c
	// Line 2402, Address: 0x16f870, Func Offset: 0x270
	// Line 2405, Address: 0x16f874, Func Offset: 0x274
	// Line 2402, Address: 0x16f878, Func Offset: 0x278
	// Line 2405, Address: 0x16f87c, Func Offset: 0x27c
	// Line 2402, Address: 0x16f880, Func Offset: 0x280
	// Line 2405, Address: 0x16f884, Func Offset: 0x284
	// Line 2402, Address: 0x16f888, Func Offset: 0x288
	// Line 2405, Address: 0x16f890, Func Offset: 0x290
	// Line 2403, Address: 0x16f898, Func Offset: 0x298
	// Line 2404, Address: 0x16f89c, Func Offset: 0x29c
	// Line 2406, Address: 0x16f8a0, Func Offset: 0x2a0
	// Line 2405, Address: 0x16f8a8, Func Offset: 0x2a8
	// Line 2406, Address: 0x16f8ac, Func Offset: 0x2ac
	// Line 2409, Address: 0x16f8b4, Func Offset: 0x2b4
	// Line 2406, Address: 0x16f8b8, Func Offset: 0x2b8
	// Line 2409, Address: 0x16f8c0, Func Offset: 0x2c0
	// Line 2407, Address: 0x16f8c8, Func Offset: 0x2c8
	// Line 2408, Address: 0x16f8cc, Func Offset: 0x2cc
	// Line 2409, Address: 0x16f8d0, Func Offset: 0x2d0
	// Line 2410, Address: 0x16f8e0, Func Offset: 0x2e0
	// Line 2407, Address: 0x16f8e8, Func Offset: 0x2e8
	// Line 2408, Address: 0x16f8ec, Func Offset: 0x2ec
	// Line 2410, Address: 0x16f8f0, Func Offset: 0x2f0
	// Line 2407, Address: 0x16f8f4, Func Offset: 0x2f4
	// Line 2408, Address: 0x16f8f8, Func Offset: 0x2f8
	// Line 2410, Address: 0x16f8fc, Func Offset: 0x2fc
	// Line 2407, Address: 0x16f900, Func Offset: 0x300
	// Line 2411, Address: 0x16f904, Func Offset: 0x304
	// Line 2408, Address: 0x16f908, Func Offset: 0x308
	// Line 2411, Address: 0x16f90c, Func Offset: 0x30c
	// Line 2408, Address: 0x16f910, Func Offset: 0x310
	// Line 2411, Address: 0x16f914, Func Offset: 0x314
	// Line 2408, Address: 0x16f918, Func Offset: 0x318
	// Line 2411, Address: 0x16f91c, Func Offset: 0x31c
	// Line 2410, Address: 0x16f920, Func Offset: 0x320
	// Line 2408, Address: 0x16f924, Func Offset: 0x324
	// Line 2411, Address: 0x16f928, Func Offset: 0x328
	// Line 2408, Address: 0x16f92c, Func Offset: 0x32c
	// Line 2411, Address: 0x16f930, Func Offset: 0x330
	// Line 2409, Address: 0x16f938, Func Offset: 0x338
	// Line 2411, Address: 0x16f93c, Func Offset: 0x33c
	// Line 2410, Address: 0x16f940, Func Offset: 0x340
	// Line 2412, Address: 0x16f944, Func Offset: 0x344
	// Line 2411, Address: 0x16f948, Func Offset: 0x348
	// Line 2412, Address: 0x16f94c, Func Offset: 0x34c
	// Line 2417, Address: 0x16f95c, Func Offset: 0x35c
	// Line 2412, Address: 0x16f960, Func Offset: 0x360
	// Line 2414, Address: 0x16f968, Func Offset: 0x368
	// Line 2413, Address: 0x16f980, Func Offset: 0x380
	// Line 2416, Address: 0x16f984, Func Offset: 0x384
	// Line 2415, Address: 0x16f988, Func Offset: 0x388
	// Line 2416, Address: 0x16f98c, Func Offset: 0x38c
	// Line 2417, Address: 0x16f990, Func Offset: 0x390
	// Line 2416, Address: 0x16f994, Func Offset: 0x394
	// Line 2413, Address: 0x16f9a8, Func Offset: 0x3a8
	// Line 2419, Address: 0x16f9ac, Func Offset: 0x3ac
	// Line 2413, Address: 0x16f9b0, Func Offset: 0x3b0
	// Line 2419, Address: 0x16f9b8, Func Offset: 0x3b8
	// Line 2421, Address: 0x16f9bc, Func Offset: 0x3bc
	// Line 2414, Address: 0x16f9c0, Func Offset: 0x3c0
	// Line 2419, Address: 0x16f9c4, Func Offset: 0x3c4
	// Line 2421, Address: 0x16f9c8, Func Offset: 0x3c8
	// Line 2419, Address: 0x16f9cc, Func Offset: 0x3cc
	// Line 2421, Address: 0x16f9d0, Func Offset: 0x3d0
	// Line 2419, Address: 0x16f9d4, Func Offset: 0x3d4
	// Line 2421, Address: 0x16f9d8, Func Offset: 0x3d8
	// Line 2419, Address: 0x16f9e0, Func Offset: 0x3e0
	// Line 2421, Address: 0x16f9e4, Func Offset: 0x3e4
	// Line 2419, Address: 0x16f9e8, Func Offset: 0x3e8
	// Line 2421, Address: 0x16f9ec, Func Offset: 0x3ec
	// Line 2422, Address: 0x16f9f0, Func Offset: 0x3f0
	// Line 2421, Address: 0x16f9f4, Func Offset: 0x3f4
	// Line 2420, Address: 0x16f9f8, Func Offset: 0x3f8
	// Line 2422, Address: 0x16fa00, Func Offset: 0x400
	// Line 2415, Address: 0x16fa04, Func Offset: 0x404
	// Line 2417, Address: 0x16fa08, Func Offset: 0x408
	// Line 2415, Address: 0x16fa0c, Func Offset: 0x40c
	// Line 2420, Address: 0x16fa14, Func Offset: 0x414
	// Line 2417, Address: 0x16fa18, Func Offset: 0x418
	// Line 2416, Address: 0x16fa1c, Func Offset: 0x41c
	// Line 2417, Address: 0x16fa20, Func Offset: 0x420
	// Line 2422, Address: 0x16fa24, Func Offset: 0x424
	// Line 2418, Address: 0x16fa28, Func Offset: 0x428
	// Line 2422, Address: 0x16fa2c, Func Offset: 0x42c
	// Line 2420, Address: 0x16fa30, Func Offset: 0x430
	// Line 2418, Address: 0x16fa34, Func Offset: 0x434
	// Line 2422, Address: 0x16fa40, Func Offset: 0x440
	// Line 2419, Address: 0x16fa44, Func Offset: 0x444
	// Line 2420, Address: 0x16fa48, Func Offset: 0x448
	// Line 2421, Address: 0x16fa4c, Func Offset: 0x44c
	// Line 2423, Address: 0x16fa50, Func Offset: 0x450
	// Line 2425, Address: 0x16fa58, Func Offset: 0x458
	// Line 2424, Address: 0x16fa70, Func Offset: 0x470
	// Line 2427, Address: 0x16fa74, Func Offset: 0x474
	// Line 2426, Address: 0x16fa78, Func Offset: 0x478
	// Line 2427, Address: 0x16fa7c, Func Offset: 0x47c
	// Line 2428, Address: 0x16fa80, Func Offset: 0x480
	// Line 2427, Address: 0x16fa84, Func Offset: 0x484
	// Line 2424, Address: 0x16fa98, Func Offset: 0x498
	// Line 2425, Address: 0x16faa4, Func Offset: 0x4a4
	// Line 2428, Address: 0x16faa8, Func Offset: 0x4a8
	// Line 2426, Address: 0x16faac, Func Offset: 0x4ac
	// Line 2428, Address: 0x16fab4, Func Offset: 0x4b4
	// Line 2426, Address: 0x16fab8, Func Offset: 0x4b8
	// Line 2428, Address: 0x16fabc, Func Offset: 0x4bc
	// Line 2427, Address: 0x16fac0, Func Offset: 0x4c0
	// Line 2430, Address: 0x16fac4, Func Offset: 0x4c4
	// Line 2428, Address: 0x16fac8, Func Offset: 0x4c8
	// Line 2430, Address: 0x16facc, Func Offset: 0x4cc
	// Line 2432, Address: 0x16fad4, Func Offset: 0x4d4
	// Line 2430, Address: 0x16fad8, Func Offset: 0x4d8
	// Line 2432, Address: 0x16fae0, Func Offset: 0x4e0
	// Line 2430, Address: 0x16faf0, Func Offset: 0x4f0
	// Line 2432, Address: 0x16faf8, Func Offset: 0x4f8
	// Line 2429, Address: 0x16fb00, Func Offset: 0x500
	// Line 2432, Address: 0x16fb04, Func Offset: 0x504
	// Line 2433, Address: 0x16fb08, Func Offset: 0x508
	// Line 2431, Address: 0x16fb10, Func Offset: 0x510
	// Line 2433, Address: 0x16fb14, Func Offset: 0x514
	// Line 2431, Address: 0x16fb18, Func Offset: 0x518
	// Line 2429, Address: 0x16fb1c, Func Offset: 0x51c
	// Line 2431, Address: 0x16fb20, Func Offset: 0x520
	// Line 2429, Address: 0x16fb24, Func Offset: 0x524
	// Line 2431, Address: 0x16fb2c, Func Offset: 0x52c
	// Line 2430, Address: 0x16fb30, Func Offset: 0x530
	// Line 2433, Address: 0x16fb34, Func Offset: 0x534
	// Line 2431, Address: 0x16fb38, Func Offset: 0x538
	// Line 2433, Address: 0x16fb3c, Func Offset: 0x53c
	// Line 2432, Address: 0x16fb40, Func Offset: 0x540
	// Line 2433, Address: 0x16fb44, Func Offset: 0x544
	// Line 2436, Address: 0x16fb48, Func Offset: 0x548
	// Line 2435, Address: 0x16fb4c, Func Offset: 0x54c
	// Line 2437, Address: 0x16fb50, Func Offset: 0x550
	// Line 2436, Address: 0x16fb54, Func Offset: 0x554
	// Line 2438, Address: 0x16fb58, Func Offset: 0x558
	// Line 2439, Address: 0x16fb60, Func Offset: 0x560
	// Line 2440, Address: 0x16fb68, Func Offset: 0x568
	// Func End, Address: 0x16fb88, Func Offset: 0x588
}

// 
// Start address: 0x16fb90
void sfMessageDraw()
{
	unsigned long* pos;
	// Line 2445, Address: 0x16fb90, Func Offset: 0
	// Line 2448, Address: 0x16fb94, Func Offset: 0x4
	// Line 2445, Address: 0x16fb98, Func Offset: 0x8
	// Line 2448, Address: 0x16fba0, Func Offset: 0x10
	// Line 2452, Address: 0x16fbc4, Func Offset: 0x34
	// Line 2455, Address: 0x16fbcc, Func Offset: 0x3c
	// Line 2458, Address: 0x16fbe4, Func Offset: 0x54
	// Line 2459, Address: 0x16fbe8, Func Offset: 0x58
	// Line 2455, Address: 0x16fbec, Func Offset: 0x5c
	// Line 2461, Address: 0x16fbf0, Func Offset: 0x60
	// Line 2471, Address: 0x16fbfc, Func Offset: 0x6c
	// Line 2462, Address: 0x16fc00, Func Offset: 0x70
	// Line 2481, Address: 0x16fc04, Func Offset: 0x74
	// Line 2462, Address: 0x16fc08, Func Offset: 0x78
	// Line 2488, Address: 0x16fc0c, Func Offset: 0x7c
	// Line 2464, Address: 0x16fc10, Func Offset: 0x80
	// Line 2465, Address: 0x16fc18, Func Offset: 0x88
	// Line 2467, Address: 0x16fc20, Func Offset: 0x90
	// Line 2468, Address: 0x16fc28, Func Offset: 0x98
	// Line 2470, Address: 0x16fc30, Func Offset: 0xa0
	// Line 2473, Address: 0x16fc34, Func Offset: 0xa4
	// Line 2471, Address: 0x16fc38, Func Offset: 0xa8
	// Line 2473, Address: 0x16fc3c, Func Offset: 0xac
	// Line 2476, Address: 0x16fc44, Func Offset: 0xb4
	// Line 2478, Address: 0x16fc4c, Func Offset: 0xbc
	// Line 2479, Address: 0x16fc54, Func Offset: 0xc4
	// Line 2481, Address: 0x16fc5c, Func Offset: 0xcc
	// Line 2485, Address: 0x16fc60, Func Offset: 0xd0
	// Line 2481, Address: 0x16fc64, Func Offset: 0xd4
	// Line 2488, Address: 0x16fc98, Func Offset: 0x108
	// Line 2491, Address: 0x16fca0, Func Offset: 0x110
	// Line 2494, Address: 0x16fca8, Func Offset: 0x118
	// Line 2496, Address: 0x16fcb0, Func Offset: 0x120
	// Line 2498, Address: 0x16fccc, Func Offset: 0x13c
	// Line 2499, Address: 0x16fcd4, Func Offset: 0x144
	// Line 2500, Address: 0x16fcdc, Func Offset: 0x14c
	// Line 2503, Address: 0x16fce0, Func Offset: 0x150
	// Line 2506, Address: 0x16fce8, Func Offset: 0x158
	// Line 2509, Address: 0x16fcf0, Func Offset: 0x160
	// Line 2511, Address: 0x16fcf8, Func Offset: 0x168
	// Line 2513, Address: 0x16fd08, Func Offset: 0x178
	// Line 2517, Address: 0x16fd10, Func Offset: 0x180
	// Line 2518, Address: 0x16fd18, Func Offset: 0x188
	// Line 2519, Address: 0x16fd20, Func Offset: 0x190
	// Func End, Address: 0x16fd30, Func Offset: 0x1a0
}

