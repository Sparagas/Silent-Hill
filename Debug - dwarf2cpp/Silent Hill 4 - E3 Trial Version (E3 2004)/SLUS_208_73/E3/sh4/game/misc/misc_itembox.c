typedef struct _anon0;
typedef struct _IconRing;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sfObj;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef enum _enum : unsigned char;
typedef struct _anon9;
typedef struct _sfMenuObjRect;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef enum EileenArmsTypeNo : unsigned char;
typedef enum GameItem : unsigned char;
typedef struct _anon14;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;

typedef void(*type_3)(sfObj*);
typedef void(*type_6)(sfObj*);

typedef unsigned int type_0[4];
typedef float type_1[9];
typedef _anon2 type_2[256];
typedef char type_4[8];
typedef _anon3 type_5[7];
typedef _anon6* type_7[3];
typedef unsigned int type_8[2];
typedef unsigned int type_9[2][2];
typedef unsigned short type_10[2];
typedef _IconRing type_11[136];
typedef unsigned char type_12[2];
typedef short type_13[2];
typedef unsigned short type_14[2];
typedef float type_15[4];
typedef char type_16[4];
typedef unsigned char type_17[4];
typedef float type_18[1];
typedef int type_19[1];
typedef _anon15 type_20[2];
typedef _anon8 type_21[3];
typedef _anon7 type_22[9];

struct _anon0
{
	_IconRing* free_head;
	_IconRing* ring_head;
	_IconRing* sel;
	_IconRing* start;
	_IconRing buf[136];
	int num;
};

struct _IconRing
{
	GameItem kind;
	short box_number;
	short buf_id;
	_IconRing* next;
	_IconRing* prev;
};

struct _anon1
{
	_anon4 box;
	_anon9 cursor;
	_anon8 arrow[3];
	sfObj* bg;
	_anon13 howtouse;
	int active;
	int disp_flag;
	int step;
	int s_step;
	int timer;
	_anon16 frame;
	_anon14 mes_fade;
	unsigned char end_ok;
	unsigned char is_box_to_possession_end;
};

union _anon2
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

struct _anon3
{
	_anon18 img;
	float pre_x;
	float pre_y;
	GameItem kind;
	int size;
	int poss_num;
	int pre_poss_num;
	int num_chg_cnt;
	int buru_timer;
	int buru_mode;
	int equip_cnt;
	int item_index;
	float durability;
	unsigned char flag;
	unsigned char id;
	unsigned char is_menu;
};

struct _anon4
{
	int max_item;
	short cur_id;
	short target_id;
	_anon0 icon_ring;
	int dir;
	int is_weapon;
};

struct sfObj
{
	_anon2 fwork[256];
	_anon2* work;
	void(*func)(sfObj*);
	_anon2* work_pt0;
	_anon2* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon2* sys_work;
	_anon2* scene_work;
	_anon2* event_work;
	_anon2* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon5
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

struct _anon6
{
	short x;
	short y;
};

struct _anon7
{
	float x;
	float y;
	float w;
	float h;
};

struct _anon8
{
	_anon18 img;
	float base_x;
	float base_y;
	int draw_flag;
	int dir;
	int timer;
};

enum _enum : unsigned char
{
	ITEM_ATTR_UNKNOWN,
	ITEM_ATTR_WEAPON,
	ITEM_ATTR_EIL_WEAPON,
	ITEM_ATTR_JOREI,
	ITEM_ATTR_RECOVERY,
	ITEM_ATTR_KEY,
	ITEM_ATTR_MEMO
};

struct _anon9
{
	_anon7 cur;
	int timer;
};

struct _sfMenuObjRect
{
	int x;
	int y;
	int w;
	int h;
	_sfMenuObjRect* next;
	_sfMenuObjRect* prev;
};

struct _anon10
{
	_anon5* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
};

struct _anon11
{
	unsigned int cbp;
	unsigned int ofs;
};

struct _anon12
{
	unsigned long reg_alpha;
	unsigned long reg_prim;
	unsigned long reg_test;
	_anon10 tex_data;
	_anon11 clut_data;
	unsigned short ot;
	unsigned short z;
};

struct _anon13
{
	int timer;
	unsigned char step;
	unsigned char index;
	unsigned char count;
};

enum EileenArmsTypeNo : unsigned char
{
	EIL_ARMS_NONE,
	EIL_ARMS_HANDBAG,
	EIL_ARMS_CLUB,
	EIL_ARMS_ROD,
	EIL_ARMS_CHAIN,
	EIL_ARMS_GUN,
	EIL_ARMS_MAX
};

enum GameItem : unsigned char
{
	ITEM_EMPTY,
	ITEM_SMALL_BULLET,
	ITEM_LARGE_BULLET,
	ITEM_SILVER_BULLET,
	ITEM_HOLY_CANDLE,
	ITEM_FINISHER,
	ITEM_RED_CHRISM,
	ITEM_LOADS_PRAYER,
	ITEM_SAINT_MEDALLION,
	ITEM_HEALTH_DRINK,
	ITEM_AMPLE,
	ITEM_FIRST_AID_KIT,
	ITEM_HANDGUN = 0x10,
	ITEM_REVOLVER,
	ITEM_IRON_PIPE,
	ITEM_CUTTER_KNIFE,
	ITEM_METAL_BAT,
	ITEM_DRIVER,
	ITEM_DRIVER_BROKEN,
	ITEM_SPOON,
	ITEM_SPOON_BROKEN,
	ITEM_MID_MASHY,
	ITEM_MID_MASHY_BROKEN,
	ITEM_MASHY_IRON,
	ITEM_MASHY_IRON_BROKEN,
	ITEM_MASHY,
	ITEM_MASHY_BROKEN,
	ITEM_SPADE_MASHY,
	ITEM_SPADE_MASHY_BROKEN,
	ITEM_MASHY_NIBLICK,
	ITEM_MASHY_NIBLICK_BROKEN,
	ITEM_PITCHER,
	ITEM_PITCHER_BROKEN,
	ITEM_NIBLICK,
	ITEM_NIBLICK_BROKEN,
	ITEM_PITCHING_WEDGE,
	ITEM_PITCHING_WEDGE_BROKEN,
	ITEM_SAND_WEDGE,
	ITEM_SAND_WEDGE_BROKEN,
	ITEM_PUTTER,
	ITEM_PUTTER_BROKEN,
	ITEM_WINE_BOTTLE,
	ITEM_WINE_BOTTLE_BROKEN,
	ITEM_SCOOP,
	ITEM_RUSTY_HATCHET,
	ITEM_PICK_OF_DESPAIR,
	ITEM_STUN_GUN,
	ITEM_SPRAY,
	ITEM_CLUB,
	ITEM_CHAIN_SAW,
	ITEM_KEY_OF_LIBERATION = 0x3c,
	ITEM_COIN_OF_LYNCHSTREETLINE,
	ITEM_CHOCOLATE_MILK,
	ITEM_SHOVEL_WITH_BLOOD_CHARACTER,
	ITEM_RUSTY_BLOODY_KEY,
	ITEM_RED_PAPER_1,
	ITEM_RED_PAPER_2,
	ITEM_RED_PAPER_3,
	ITEM_RED_PAPER_4,
	ITEM_RED_PAPER_5,
	ITEM_RED_PAPER_6,
	ITEM_TORN_RED_PAPER_1,
	ITEM_TORN_RED_PAPER_2,
	ITEM_TORN_RED_PAPER_MISS,
	ITEM_KEY_OF_SUPERINTENDANT,
	ITEM_KEY_ROCKER106,
	ITEM_CASSETTE_TAPE,
	ITEM_KEY_WITH_DOLL,
	ITEM_CHARM_OF_SUCCUBUS,
	ITEM_KEY_OF_SICKROOM,
	ITEM_RED_ENVELOPE,
	ITEM_SMALL_KEY,
	ITEM_CYNTHIAS_PASS,
	ITEM_OLD_DOLL,
	ITEM_MASTER_KEY_TO_APART,
	ITEM_ARMORIAL_MEDAL,
	ITEM_PICK_OF_HOPE,
	ITEM_NAVEL_STRING,
	ITEM_ALESSAS_SPEAR,
	ITEM_DIRTY_ENVELOPE,
	ITEM_TOY_KEY,
	ITEM_1SS_COIN_DIRTY,
	ITEM_1SS_COIN,
	ITEM_SB24_KEY,
	ITEM_HANDLE,
	ITEM_DOLLS_HEAD,
	ITEM_DOLLS_RIGHT_ARM,
	ITEM_DOLLS_LEFT_ARM,
	ITEM_DOLLS_RIGHT_LEG,
	ITEM_DOLLS_LEFT_LEG,
	ITEM_UNDERGROUND_KEY,
	ITEM_PRISONERS_SHIRT,
	ITEM_BILLIARD_BALL,
	ITEM_STUFFED_CAT,
	ITEM_VOLLEYBALL,
	ITEM_SMALL_CANDLE_PACKED,
	ITEM_SMALL_CANDLE,
	ITEM_GHOSTS_KEY,
	ITEM_DIRTY_STONE1,
	ITEM_DIRTY_STONE2,
	ITEM_DIRTY_STONE3,
	ITEM_DIRTY_STONE4,
	ITEM_DIRTY_STONE5,
	ITEM_CHANNELING_STONE1,
	ITEM_CHANNELING_STONE2,
	ITEM_CHANNELING_STONE3,
	ITEM_CHANNELING_STONE4,
	ITEM_CHANNELING_STONE5,
	ITEM_PLATE_OF_TEMPTATION,
	ITEM_PLATE_OF_ORIGIN,
	ITEM_PLATE_OF_SURVEILLANCE,
	ITEM_PLATE_OF_CHAOS,
	ITEM_ALBERT_SPORTS_KEY,
	ITEM_UNIFORM,
	ITEM_MZ_UPPER_KEY,
	ITEM_TRAILER_KEY,
	ITEM_HANDBAG = 0x80,
	ITEM_SUBMACHINEGUN,
	ITEM_BLACKJACK,
	ITEM_HORSEWHIP,
	ITEM_CHAIN,
	ITEM_FIRST_LETTER = 0x88,
	ITEM_SCRAP_OF_BOOK,
	ITEM_RED_DIARY_0408,
	ITEM_RED_DIARY_0404,
	ITEM_SCRAP_OF_BIBLE,
	ITEM_DIARY_OF_NEIGHBOUR,
	ITEM_SUPERINTENDANTS_MEMO,
	ITEM_SUPERINTENDANTS_DIARY,
	ITEM_RED_DIARY_0502,
	ITEM_RED_DIARY_0514,
	ITEM_RED_DIARY_0520,
	ITEM_SCRAP_OF_RED_DIARY,
	ITEM_SCRAP_OF_RED_DIARY_2,
	ITEM_MIKES_LOVELETTER,
	ITEM_RED_DIARY_0713,
	ITEM_RED_DIARY_0720,
	ITEM_HOLY_MOTHER_21_SACRAMENTS,
	ITEM_RED_BOOK,
	ITEM_PICTURE_BOOK,
	ITEM_RED_DIARY_0611,
	ITEM_RED_DIARY_0614,
	ITEM_RED_DIARY_SOMETIMEAGO,
	ITEM_RED_DIARY_0717,
	ITEM_RED_DIARY_0718,
	ITEM_RED_DIARY_0723,
	ITEM_RED_DIARY_0725,
	ITEM_RED_DIARY_0728,
	ITEM_RED_DIARY_0729,
	ITEM_RED_DIARY_0802,
	ITEM_RED_DIARY_0803,
	ITEM_RED_DIARY_0804,
	ITEM_RED_DIARY_0805,
	ITEM_RED_DIARY_0807,
	ITEM_SUPERINTENDANTS_DIARY_COUT,
	ITEM_JOSEPHS_LETTER,
	ITEM_JOSEPHS_REPORT,
	ITEM_NURSE_MEMO,
	ITEM_CHILD_LETTER,
	ITEM_BLOODY_SHIRT,
	ITEM_BARTENDERS_MEMO,
	ITEM_BARTENDERS_MEMO2,
	ITEM_MEMOIRS,
	ITEM_JASPERS_MEMO,
	ITEM_BURNED_OUT_MEMO,
	ITEM_DOLLS_TEXT,
	ITEM_EXPLORERS_MEMO,
	ITEM_SENTINELS_DIARY,
	ITEM_PLATE_ABOUT_WATERWHEEL,
	ITEM_PRISONERS_DIARY,
	ITEM_REPORT_1F,
	ITEM_REPORT_2F,
	ITEM_PASSWORD_MEMO,
	ITEM_BRICK = 0xe4,
	ITEM_KILLER_PIPE,
	ITEM_KILLER_GUN1,
	ITEM_KILLER_GUN2,
	ITEM_KIND_MAX
};

struct _anon14
{
	float ratio;
	int timer;
};

struct _anon15
{
	float x;
	float y;
	int u;
	int v;
	unsigned int col;
};

struct _anon16
{
	int kind;
	int timer;
};

struct _anon17
{
	_anon12 base;
	_anon15 v[2];
};

struct _anon18
{
	_anon12 base;
	float x;
	float y;
	float w;
	float h;
	int u0;
	int v0;
	int u1;
	int v1;
	unsigned int col[4];
	float rot;
	float scale_x;
	float scale_y;
	int ofs_x;
	int ofs_y;
	unsigned char sprite_flag;
};

_anon1 item_box;
_anon7 pos_tbl[9];
float alpha_tbl[9];
_anon3 dummy_icon_img;
_anon3 icon_img[7];

int miscItemBoxGetActive();
float get_ratio(int cnt, int max_cnt);
float get_ratio_linear(int cnt, int max_cnt);
int MesFadeIn();
int MesFadeOut();
void MakePositionTable();
float calc_alpha(int n, int max);
void MakeAlphaTable(int item_num);
void RingAdd(_IconRing* head, _IconRing* p);
void RingDel(_IconRing* p);
void MakeFreeRing(_anon0* mng);
_IconRing* RingBufAlloc(_anon0* mng);
void MakeItemRing(_anon4* bwk);
void ItemRingInit(_anon1* wk);
void ItemRingRoll(_anon0* mng, int dir);
int ItemRingCountHeadN(_anon0* mng);
int ItemRingCountAddNth(_anon0* mng, GameItem kind);
void IconImgConstruct(_anon1* wk);
void ArrowDispOn(_anon1* wk);
void ArrowDispOff(_anon1* wk);
void ArrowDraw(_anon1* wk);
void ArrowConstruct(_anon1* wk);
void BgDraw();
unsigned int GetAttrCol(_enum attr);
void miscItemBoxCursorSetRect(_anon1* wk);
void CursorConstruct(_anon1* wk);
void CursorDestruct();
void miscItemBoxConstruct();
void miscItemBoxDestruct();
void miscItemBoxExplanationDisp(_anon1* wk, int flag);
unsigned int ColLerp(unsigned int src, unsigned int dst, float ratio);
void OneItemSlide(_anon3* img, int from, int to, float ratio, int is_active);
void Slide_Del(_anon4* bw, int del_index, int dir, int cnt);
void Slide_Add(_anon4* bw, int add_index, int item_num, int dir, int cnt);
void CenterItemBuruburuGo();
void miscItemBoxDrawBox_Rest(_anon4* bw, int is_active);
void miscItemBoxDrawBox_Rest2(_anon4* bw, int is_active);
void miscItemBoxDrawBox_Move(_anon4* bw, int roll_cnt);
void miscItemBoxDrawBox_AttrChg(_anon4* bw, int is_active);
void miscItemBoxDrawBox_BoxToMenu(_anon4* bw);
int ActiveChange(_anon1* wk);
int BoxToPossession(_anon1* wk);
int miscItemBoxIsBoxToMenuEnd();
int PossessionToBox(_anon1* wk);
void ItemAttrChange(_anon1* wk, int cnt);
int is_handlestep_switch_ok();
int ItemmenuHandle(_anon1* wk);
int HandleStepFunc(_anon1* wk, unsigned int pad_cnt);
int MoveStepFunc(_anon1* wk, int cnt);
int AttrChgStepFunc(_anon1* wk);
void miscItemBoxHandle(_anon1* wk);
void IconDraw();
void miscItemDrawParts(_anon1* wk);
void miscItemBoxQuit(_anon1* wk);
int GetFrameLength(_anon6* pos);
void DrawFrame0(_anon6* pos, int max_length, float ratio);
void DrawFrame(_anon1* wk);
void HandlingInfoDisp(int y);
GameItem miscItemBoxGetKind();
int miscItemBoxExec(int mode);
void miscItemBoxDraw();

// 
// Start address: 0x1dfea0
int miscItemBoxGetActive()
{
	// Line 479, Address: 0x1dfea0, Func Offset: 0
	// Line 480, Address: 0x1dfea4, Func Offset: 0x4
	// Func End, Address: 0x1dfeac, Func Offset: 0xc
}

// 
// Start address: 0x1dfeb0
float get_ratio(int cnt, int max_cnt)
{
	float t;
	// Line 487, Address: 0x1dfeb0, Func Offset: 0
	// Line 489, Address: 0x1dfeb4, Func Offset: 0x4
	// Line 490, Address: 0x1dfec8, Func Offset: 0x18
	// Line 491, Address: 0x1dfee0, Func Offset: 0x30
	// Line 492, Address: 0x1dfef8, Func Offset: 0x48
	// Line 493, Address: 0x1dff00, Func Offset: 0x50
	// Func End, Address: 0x1dff08, Func Offset: 0x58
}

// 
// Start address: 0x1dff10
float get_ratio_linear(int cnt, int max_cnt)
{
	float t;
	// Line 498, Address: 0x1dff10, Func Offset: 0
	// Line 500, Address: 0x1dff14, Func Offset: 0x4
	// Line 501, Address: 0x1dff28, Func Offset: 0x18
	// Line 502, Address: 0x1dff40, Func Offset: 0x30
	// Line 503, Address: 0x1dff58, Func Offset: 0x48
	// Func End, Address: 0x1dff60, Func Offset: 0x50
}

// 
// Start address: 0x1dff60
int MesFadeIn()
{
	// Line 512, Address: 0x1dff60, Func Offset: 0
	// Line 513, Address: 0x1dff64, Func Offset: 0x4
	// Line 512, Address: 0x1dff68, Func Offset: 0x8
	// Line 513, Address: 0x1dff6c, Func Offset: 0xc
	// Line 514, Address: 0x1dff80, Func Offset: 0x20
	// Line 516, Address: 0x1dff94, Func Offset: 0x34
	// Line 518, Address: 0x1dffa0, Func Offset: 0x40
	// Line 519, Address: 0x1dffac, Func Offset: 0x4c
	// Line 520, Address: 0x1dffb0, Func Offset: 0x50
	// Func End, Address: 0x1dffbc, Func Offset: 0x5c
}

// 
// Start address: 0x1dffc0
int MesFadeOut()
{
	// Line 522, Address: 0x1dffc0, Func Offset: 0
	// Line 523, Address: 0x1dffc4, Func Offset: 0x4
	// Line 522, Address: 0x1dffc8, Func Offset: 0x8
	// Line 523, Address: 0x1dffcc, Func Offset: 0xc
	// Line 524, Address: 0x1dffd8, Func Offset: 0x18
	// Line 523, Address: 0x1dffdc, Func Offset: 0x1c
	// Line 524, Address: 0x1dffe0, Func Offset: 0x20
	// Line 523, Address: 0x1dffe4, Func Offset: 0x24
	// Line 524, Address: 0x1dfff4, Func Offset: 0x34
	// Line 525, Address: 0x1e0000, Func Offset: 0x40
	// Line 526, Address: 0x1e0004, Func Offset: 0x44
	// Line 528, Address: 0x1e0010, Func Offset: 0x50
	// Line 529, Address: 0x1e001c, Func Offset: 0x5c
	// Line 530, Address: 0x1e0020, Func Offset: 0x60
	// Func End, Address: 0x1e002c, Func Offset: 0x6c
}

// 
// Start address: 0x1e0030
void MakePositionTable()
{
	int i;
	float w;
	float h;
	float margin;
	int n;
	// Line 546, Address: 0x1e0030, Func Offset: 0
	// Line 554, Address: 0x1e0034, Func Offset: 0x4
	// Line 546, Address: 0x1e003c, Func Offset: 0xc
	// Line 555, Address: 0x1e0040, Func Offset: 0x10
	// Line 557, Address: 0x1e0044, Func Offset: 0x14
	// Line 555, Address: 0x1e0048, Func Offset: 0x18
	// Line 553, Address: 0x1e004c, Func Offset: 0x1c
	// Line 548, Address: 0x1e0050, Func Offset: 0x20
	// Line 552, Address: 0x1e0054, Func Offset: 0x24
	// Line 548, Address: 0x1e0058, Func Offset: 0x28
	// Line 557, Address: 0x1e005c, Func Offset: 0x2c
	// Line 547, Address: 0x1e0060, Func Offset: 0x30
	// Line 557, Address: 0x1e0064, Func Offset: 0x34
	// Line 552, Address: 0x1e0068, Func Offset: 0x38
	// Line 553, Address: 0x1e0070, Func Offset: 0x40
	// Line 560, Address: 0x1e0078, Func Offset: 0x48
	// Line 570, Address: 0x1e0084, Func Offset: 0x54
	// Line 560, Address: 0x1e0088, Func Offset: 0x58
	// Line 570, Address: 0x1e0090, Func Offset: 0x60
	// Line 560, Address: 0x1e009c, Func Offset: 0x6c
	// Line 570, Address: 0x1e00a4, Func Offset: 0x74
	// Line 575, Address: 0x1e00a8, Func Offset: 0x78
	// Line 561, Address: 0x1e00ac, Func Offset: 0x7c
	// Line 565, Address: 0x1e00b0, Func Offset: 0x80
	// Line 566, Address: 0x1e00b4, Func Offset: 0x84
	// Line 567, Address: 0x1e00b8, Func Offset: 0x88
	// Line 562, Address: 0x1e00c8, Func Offset: 0x98
	// Line 567, Address: 0x1e00cc, Func Offset: 0x9c
	// Line 568, Address: 0x1e00dc, Func Offset: 0xac
	// Line 571, Address: 0x1e00e0, Func Offset: 0xb0
	// Line 574, Address: 0x1e00e4, Func Offset: 0xb4
	// Line 572, Address: 0x1e00e8, Func Offset: 0xb8
	// Line 573, Address: 0x1e00ec, Func Offset: 0xbc
	// Line 575, Address: 0x1e0108, Func Offset: 0xd8
	// Line 576, Address: 0x1e0110, Func Offset: 0xe0
	// Func End, Address: 0x1e0118, Func Offset: 0xe8
}

// 
// Start address: 0x1e0120
float calc_alpha(int n, int max)
{
	float ratio;
	// Line 582, Address: 0x1e0120, Func Offset: 0
	// Line 584, Address: 0x1e012c, Func Offset: 0xc
	// Line 582, Address: 0x1e0130, Func Offset: 0x10
	// Line 584, Address: 0x1e0134, Func Offset: 0x14
	// Line 582, Address: 0x1e0138, Func Offset: 0x18
	// Line 584, Address: 0x1e013c, Func Offset: 0x1c
	// Line 582, Address: 0x1e0140, Func Offset: 0x20
	// Line 584, Address: 0x1e0144, Func Offset: 0x24
	// Line 585, Address: 0x1e015c, Func Offset: 0x3c
	// Func End, Address: 0x1e0164, Func Offset: 0x44
}

// 
// Start address: 0x1e0170
void MakeAlphaTable(int item_num)
{
	int i;
	int n0;
	float alpha;
	int n;
	// Line 594, Address: 0x1e0170, Func Offset: 0
	// Line 589, Address: 0x1e0174, Func Offset: 0x4
	// Line 595, Address: 0x1e0178, Func Offset: 0x8
	// Line 589, Address: 0x1e017c, Func Offset: 0xc
	// Line 595, Address: 0x1e0180, Func Offset: 0x10
	// Line 597, Address: 0x1e0190, Func Offset: 0x20
	// Line 600, Address: 0x1e0194, Func Offset: 0x24
	// Line 597, Address: 0x1e0198, Func Offset: 0x28
	// Line 602, Address: 0x1e019c, Func Offset: 0x2c
	// Line 600, Address: 0x1e01a0, Func Offset: 0x30
	// Line 602, Address: 0x1e01c4, Func Offset: 0x54
	// Line 605, Address: 0x1e01d0, Func Offset: 0x60
	// Line 606, Address: 0x1e01d8, Func Offset: 0x68
	// Line 607, Address: 0x1e01e0, Func Offset: 0x70
	// Line 608, Address: 0x1e01e4, Func Offset: 0x74
	// Line 609, Address: 0x1e01e8, Func Offset: 0x78
	// Line 610, Address: 0x1e01ec, Func Offset: 0x7c
	// Line 611, Address: 0x1e0200, Func Offset: 0x90
	// Line 612, Address: 0x1e0208, Func Offset: 0x98
	// Line 613, Address: 0x1e0214, Func Offset: 0xa4
	// Line 610, Address: 0x1e0218, Func Offset: 0xa8
	// Line 612, Address: 0x1e021c, Func Offset: 0xac
	// Line 610, Address: 0x1e0220, Func Offset: 0xb0
	// Line 612, Address: 0x1e0224, Func Offset: 0xb4
	// Line 610, Address: 0x1e0228, Func Offset: 0xb8
	// Line 612, Address: 0x1e0230, Func Offset: 0xc0
	// Line 610, Address: 0x1e0234, Func Offset: 0xc4
	// Line 612, Address: 0x1e023c, Func Offset: 0xcc
	// Line 613, Address: 0x1e024c, Func Offset: 0xdc
	// Line 614, Address: 0x1e0258, Func Offset: 0xe8
	// Func End, Address: 0x1e0264, Func Offset: 0xf4
}

// 
// Start address: 0x1e0270
void RingAdd(_IconRing* head, _IconRing* p)
{
	// Line 619, Address: 0x1e0270, Func Offset: 0
	// Line 620, Address: 0x1e0278, Func Offset: 0x8
	// Line 621, Address: 0x1e0280, Func Offset: 0x10
	// Line 623, Address: 0x1e0284, Func Offset: 0x14
	// Func End, Address: 0x1e028c, Func Offset: 0x1c
}

// 
// Start address: 0x1e0290
void RingDel(_IconRing* p)
{
	// Line 628, Address: 0x1e0290, Func Offset: 0
	// Line 629, Address: 0x1e029c, Func Offset: 0xc
	// Line 630, Address: 0x1e02a8, Func Offset: 0x18
	// Line 631, Address: 0x1e02ac, Func Offset: 0x1c
	// Line 633, Address: 0x1e02b0, Func Offset: 0x20
	// Func End, Address: 0x1e02b8, Func Offset: 0x28
}

// 
// Start address: 0x1e02c0
void MakeFreeRing(_anon0* mng)
{
	int i;
	_IconRing* p;
	// Line 637, Address: 0x1e02c0, Func Offset: 0
	// Line 641, Address: 0x1e02c4, Func Offset: 0x4
	// Line 637, Address: 0x1e02c8, Func Offset: 0x8
	// Line 641, Address: 0x1e02cc, Func Offset: 0xc
	// Line 637, Address: 0x1e02d0, Func Offset: 0x10
	// Line 641, Address: 0x1e02d4, Func Offset: 0x14
	// Line 643, Address: 0x1e02dc, Func Offset: 0x1c
	// Line 648, Address: 0x1e02e0, Func Offset: 0x20
	// Line 644, Address: 0x1e02e4, Func Offset: 0x24
	// Line 651, Address: 0x1e02e8, Func Offset: 0x28
	// Line 645, Address: 0x1e02ec, Func Offset: 0x2c
	// Line 646, Address: 0x1e02f4, Func Offset: 0x34
	// Line 647, Address: 0x1e02fc, Func Offset: 0x3c
	// Line 649, Address: 0x1e0300, Func Offset: 0x40
	// Line 647, Address: 0x1e0304, Func Offset: 0x44
	// Line 648, Address: 0x1e0308, Func Offset: 0x48
	// Line 652, Address: 0x1e0310, Func Offset: 0x50
	// Line 653, Address: 0x1e0314, Func Offset: 0x54
	// Line 655, Address: 0x1e0320, Func Offset: 0x60
	// Line 656, Address: 0x1e0330, Func Offset: 0x70
	// Func End, Address: 0x1e0340, Func Offset: 0x80
}

// 
// Start address: 0x1e0340
_IconRing* RingBufAlloc(_anon0* mng)
{
	_IconRing* rtv;
	// Line 660, Address: 0x1e0340, Func Offset: 0
	// Line 663, Address: 0x1e0350, Func Offset: 0x10
	// Line 666, Address: 0x1e0358, Func Offset: 0x18
	// Line 667, Address: 0x1e0360, Func Offset: 0x20
	// Line 670, Address: 0x1e0368, Func Offset: 0x28
	// Line 672, Address: 0x1e036c, Func Offset: 0x2c
	// Line 669, Address: 0x1e0370, Func Offset: 0x30
	// Line 673, Address: 0x1e0374, Func Offset: 0x34
	// Line 674, Address: 0x1e0378, Func Offset: 0x38
	// Line 675, Address: 0x1e037c, Func Offset: 0x3c
	// Line 678, Address: 0x1e0380, Func Offset: 0x40
	// Func End, Address: 0x1e038c, Func Offset: 0x4c
}

// 
// Start address: 0x1e0390
void MakeItemRing(_anon4* bwk)
{
	_anon0* mng;
	int i;
	GameItem kind;
	_IconRing* buf;
	int add_num;
	_IconRing* buf;
	// Line 682, Address: 0x1e0390, Func Offset: 0
	// Line 683, Address: 0x1e03a8, Func Offset: 0x18
	// Line 682, Address: 0x1e03ac, Func Offset: 0x1c
	// Line 690, Address: 0x1e03b0, Func Offset: 0x20
	// Line 687, Address: 0x1e03b4, Func Offset: 0x24
	// Line 690, Address: 0x1e03b8, Func Offset: 0x28
	// Line 691, Address: 0x1e03d0, Func Offset: 0x40
	// Line 695, Address: 0x1e03dc, Func Offset: 0x4c
	// Line 699, Address: 0x1e03fc, Func Offset: 0x6c
	// Line 702, Address: 0x1e0400, Func Offset: 0x70
	// Line 704, Address: 0x1e0450, Func Offset: 0xc0
	// Line 706, Address: 0x1e045c, Func Offset: 0xcc
	// Line 707, Address: 0x1e0464, Func Offset: 0xd4
	// Line 708, Address: 0x1e0468, Func Offset: 0xd8
	// Line 710, Address: 0x1e046c, Func Offset: 0xdc
	// Line 711, Address: 0x1e0478, Func Offset: 0xe8
	// Line 712, Address: 0x1e047c, Func Offset: 0xec
	// Line 713, Address: 0x1e0484, Func Offset: 0xf4
	// Line 714, Address: 0x1e0488, Func Offset: 0xf8
	// Line 716, Address: 0x1e0490, Func Offset: 0x100
	// Line 717, Address: 0x1e049c, Func Offset: 0x10c
	// Line 718, Address: 0x1e04a0, Func Offset: 0x110
	// Line 721, Address: 0x1e04ac, Func Offset: 0x11c
	// Line 724, Address: 0x1e04cc, Func Offset: 0x13c
	// Line 727, Address: 0x1e04d8, Func Offset: 0x148
	// Line 728, Address: 0x1e04dc, Func Offset: 0x14c
	// Line 729, Address: 0x1e04e4, Func Offset: 0x154
	// Line 730, Address: 0x1e04f0, Func Offset: 0x160
	// Line 732, Address: 0x1e04fc, Func Offset: 0x16c
	// Line 733, Address: 0x1e0504, Func Offset: 0x174
	// Line 735, Address: 0x1e0508, Func Offset: 0x178
	// Line 736, Address: 0x1e0514, Func Offset: 0x184
	// Line 737, Address: 0x1e0518, Func Offset: 0x188
	// Line 738, Address: 0x1e0520, Func Offset: 0x190
	// Line 739, Address: 0x1e0524, Func Offset: 0x194
	// Line 741, Address: 0x1e0530, Func Offset: 0x1a0
	// Line 742, Address: 0x1e053c, Func Offset: 0x1ac
	// Line 743, Address: 0x1e0540, Func Offset: 0x1b0
	// Line 745, Address: 0x1e054c, Func Offset: 0x1bc
	// Line 748, Address: 0x1e0560, Func Offset: 0x1d0
	// Func End, Address: 0x1e057c, Func Offset: 0x1ec
}

// 
// Start address: 0x1e0580
void ItemRingInit(_anon1* wk)
{
	int i;
	_anon0* mng;
	int num;
	// Line 752, Address: 0x1e0580, Func Offset: 0
	// Line 754, Address: 0x1e0594, Func Offset: 0x14
	// Line 758, Address: 0x1e0598, Func Offset: 0x18
	// Line 761, Address: 0x1e05a0, Func Offset: 0x20
	// Line 762, Address: 0x1e05a8, Func Offset: 0x28
	// Line 764, Address: 0x1e05b0, Func Offset: 0x30
	// Line 766, Address: 0x1e05b8, Func Offset: 0x38
	// Line 767, Address: 0x1e05bc, Func Offset: 0x3c
	// Line 768, Address: 0x1e05c8, Func Offset: 0x48
	// Line 769, Address: 0x1e05cc, Func Offset: 0x4c
	// Line 770, Address: 0x1e05d0, Func Offset: 0x50
	// Line 771, Address: 0x1e0610, Func Offset: 0x90
	// Line 770, Address: 0x1e068c, Func Offset: 0x10c
	// Line 771, Address: 0x1e0690, Func Offset: 0x110
	// Line 772, Address: 0x1e0694, Func Offset: 0x114
	// Line 771, Address: 0x1e069c, Func Offset: 0x11c
	// Line 772, Address: 0x1e06a4, Func Offset: 0x124
	// Line 775, Address: 0x1e06b0, Func Offset: 0x130
	// Line 777, Address: 0x1e06b8, Func Offset: 0x138
	// Line 778, Address: 0x1e06c0, Func Offset: 0x140
	// Func End, Address: 0x1e06d4, Func Offset: 0x154
}

// 
// Start address: 0x1e06e0
void ItemRingRoll(_anon0* mng, int dir)
{
	// Line 784, Address: 0x1e06e0, Func Offset: 0
	// Line 785, Address: 0x1e06ec, Func Offset: 0xc
	// Line 786, Address: 0x1e06f8, Func Offset: 0x18
	// Line 787, Address: 0x1e0700, Func Offset: 0x20
	// Line 788, Address: 0x1e0708, Func Offset: 0x28
	// Line 789, Address: 0x1e0714, Func Offset: 0x34
	// Line 790, Address: 0x1e0720, Func Offset: 0x40
	// Line 791, Address: 0x1e072c, Func Offset: 0x4c
	// Line 792, Address: 0x1e0730, Func Offset: 0x50
	// Func End, Address: 0x1e0738, Func Offset: 0x58
}

// 
// Start address: 0x1e0740
int ItemRingCountHeadN(_anon0* mng)
{
	int rtv;
	int i;
	_IconRing* b;
	// Line 851, Address: 0x1e0740, Func Offset: 0
	// Line 848, Address: 0x1e0744, Func Offset: 0x4
	// Line 850, Address: 0x1e0748, Func Offset: 0x8
	// Line 851, Address: 0x1e074c, Func Offset: 0xc
	// Line 852, Address: 0x1e0760, Func Offset: 0x20
	// Line 854, Address: 0x1e0768, Func Offset: 0x28
	// Line 857, Address: 0x1e0770, Func Offset: 0x30
	// Line 859, Address: 0x1e0780, Func Offset: 0x40
	// Func End, Address: 0x1e0788, Func Offset: 0x48
}

// 
// Start address: 0x1e0790
int ItemRingCountAddNth(_anon0* mng, GameItem kind)
{
	int i;
	_IconRing* buf;
	// Line 863, Address: 0x1e0790, Func Offset: 0
	// Line 867, Address: 0x1e07b4, Func Offset: 0x24
	// Line 865, Address: 0x1e07b8, Func Offset: 0x28
	// Line 867, Address: 0x1e07bc, Func Offset: 0x2c
	// Line 873, Address: 0x1e07c8, Func Offset: 0x38
	// Line 875, Address: 0x1e07f8, Func Offset: 0x68
	// Line 879, Address: 0x1e0800, Func Offset: 0x70
	// Line 881, Address: 0x1e0818, Func Offset: 0x88
	// Line 882, Address: 0x1e0820, Func Offset: 0x90
	// Func End, Address: 0x1e0840, Func Offset: 0xb0
}

// 
// Start address: 0x1e0840
void IconImgConstruct(_anon1* wk)
{
	int i;
	_anon3* img;
	_IconRing* ir;
	// Line 890, Address: 0x1e0840, Func Offset: 0
	// Line 895, Address: 0x1e0850, Func Offset: 0x10
	// Line 890, Address: 0x1e0854, Func Offset: 0x14
	// Line 892, Address: 0x1e0858, Func Offset: 0x18
	// Line 893, Address: 0x1e085c, Func Offset: 0x1c
	// Line 892, Address: 0x1e0860, Func Offset: 0x20
	// Line 895, Address: 0x1e0864, Func Offset: 0x24
	// Line 896, Address: 0x1e0868, Func Offset: 0x28
	// Line 897, Address: 0x1e0884, Func Offset: 0x44
	// Line 898, Address: 0x1e0890, Func Offset: 0x50
	// Line 899, Address: 0x1e08c0, Func Offset: 0x80
	// Line 900, Address: 0x1e08c8, Func Offset: 0x88
	// Line 901, Address: 0x1e08e0, Func Offset: 0xa0
	// Line 902, Address: 0x1e08f0, Func Offset: 0xb0
	// Line 904, Address: 0x1e0908, Func Offset: 0xc8
	// Line 906, Address: 0x1e0920, Func Offset: 0xe0
	// Line 908, Address: 0x1e0930, Func Offset: 0xf0
	// Line 909, Address: 0x1e0934, Func Offset: 0xf4
	// Line 912, Address: 0x1e0938, Func Offset: 0xf8
	// Line 909, Address: 0x1e0940, Func Offset: 0x100
	// Line 911, Address: 0x1e0944, Func Offset: 0x104
	// Line 912, Address: 0x1e0948, Func Offset: 0x108
	// Line 916, Address: 0x1e0950, Func Offset: 0x110
	// Line 915, Address: 0x1e0954, Func Offset: 0x114
	// Line 916, Address: 0x1e095c, Func Offset: 0x11c
	// Line 917, Address: 0x1e0970, Func Offset: 0x130
	// Line 918, Address: 0x1e0980, Func Offset: 0x140
	// Line 920, Address: 0x1e09a8, Func Offset: 0x168
	// Line 921, Address: 0x1e09b8, Func Offset: 0x178
	// Line 922, Address: 0x1e09d0, Func Offset: 0x190
	// Line 923, Address: 0x1e09e8, Func Offset: 0x1a8
	// Line 924, Address: 0x1e0a00, Func Offset: 0x1c0
	// Line 926, Address: 0x1e0a10, Func Offset: 0x1d0
	// Line 927, Address: 0x1e0a14, Func Offset: 0x1d4
	// Line 928, Address: 0x1e0a18, Func Offset: 0x1d8
	// Func End, Address: 0x1e0a30, Func Offset: 0x1f0
}

// 
// Start address: 0x1e0a30
void ArrowDispOn(_anon1* wk)
{
	_anon8* a;
	// Line 938, Address: 0x1e0a30, Func Offset: 0
	// Line 935, Address: 0x1e0a34, Func Offset: 0x4
	// Line 938, Address: 0x1e0a38, Func Offset: 0x8
	// Line 939, Address: 0x1e0a3c, Func Offset: 0xc
	// Line 938, Address: 0x1e0a40, Func Offset: 0x10
	// Line 941, Address: 0x1e0a44, Func Offset: 0x14
	// Func End, Address: 0x1e0a4c, Func Offset: 0x1c
}

// 
// Start address: 0x1e0a50
void ArrowDispOff(_anon1* wk)
{
	_anon8* a;
	// Line 950, Address: 0x1e0a50, Func Offset: 0
	// Line 947, Address: 0x1e0a54, Func Offset: 0x4
	// Line 950, Address: 0x1e0a58, Func Offset: 0x8
	// Line 951, Address: 0x1e0a5c, Func Offset: 0xc
	// Line 953, Address: 0x1e0a60, Func Offset: 0x10
	// Func End, Address: 0x1e0a68, Func Offset: 0x18
}

// 
// Start address: 0x1e0a70
void ArrowDraw(_anon1* wk)
{
	int i;
	_anon8* a;
	_anon5* tex;
	unsigned int cbp;
	float x;
	float y;
	float scale;
	// Line 957, Address: 0x1e0a70, Func Offset: 0
	// Line 961, Address: 0x1e0a80, Func Offset: 0x10
	// Line 957, Address: 0x1e0a84, Func Offset: 0x14
	// Line 959, Address: 0x1e0a88, Func Offset: 0x18
	// Line 957, Address: 0x1e0a8c, Func Offset: 0x1c
	// Line 961, Address: 0x1e0a9c, Func Offset: 0x2c
	// Line 962, Address: 0x1e0aa0, Func Offset: 0x30
	// Line 964, Address: 0x1e0aac, Func Offset: 0x3c
	// Line 965, Address: 0x1e0ac0, Func Offset: 0x50
	// Line 970, Address: 0x1e0ad4, Func Offset: 0x64
	// Line 971, Address: 0x1e0ae4, Func Offset: 0x74
	// Line 974, Address: 0x1e0ae8, Func Offset: 0x78
	// Line 975, Address: 0x1e0b1c, Func Offset: 0xac
	// Line 976, Address: 0x1e0b20, Func Offset: 0xb0
	// Line 977, Address: 0x1e0b28, Func Offset: 0xb8
	// Line 976, Address: 0x1e0b2c, Func Offset: 0xbc
	// Line 978, Address: 0x1e0b30, Func Offset: 0xc0
	// Line 980, Address: 0x1e0b38, Func Offset: 0xc8
	// Line 981, Address: 0x1e0b40, Func Offset: 0xd0
	// Line 980, Address: 0x1e0b44, Func Offset: 0xd4
	// Line 982, Address: 0x1e0b48, Func Offset: 0xd8
	// Line 985, Address: 0x1e0b50, Func Offset: 0xe0
	// Line 984, Address: 0x1e0b54, Func Offset: 0xe4
	// Line 985, Address: 0x1e0b58, Func Offset: 0xe8
	// Line 986, Address: 0x1e0b74, Func Offset: 0x104
	// Line 987, Address: 0x1e0b7c, Func Offset: 0x10c
	// Line 989, Address: 0x1e0b80, Func Offset: 0x110
	// Line 988, Address: 0x1e0b84, Func Offset: 0x114
	// Line 989, Address: 0x1e0b88, Func Offset: 0x118
	// Line 992, Address: 0x1e0ba8, Func Offset: 0x138
	// Line 994, Address: 0x1e0bb8, Func Offset: 0x148
	// Line 992, Address: 0x1e0bbc, Func Offset: 0x14c
	// Line 994, Address: 0x1e0bc4, Func Offset: 0x154
	// Line 992, Address: 0x1e0bcc, Func Offset: 0x15c
	// Line 994, Address: 0x1e0bd4, Func Offset: 0x164
	// Line 995, Address: 0x1e0bdc, Func Offset: 0x16c
	// Line 996, Address: 0x1e0be8, Func Offset: 0x178
	// Line 997, Address: 0x1e0bf4, Func Offset: 0x184
	// Line 998, Address: 0x1e0c0c, Func Offset: 0x19c
	// Line 999, Address: 0x1e0c20, Func Offset: 0x1b0
	// Line 1001, Address: 0x1e0c2c, Func Offset: 0x1bc
	// Line 1004, Address: 0x1e0c38, Func Offset: 0x1c8
	// Line 1005, Address: 0x1e0c48, Func Offset: 0x1d8
	// Func End, Address: 0x1e0c70, Func Offset: 0x200
}

// 
// Start address: 0x1e0c70
void ArrowConstruct(_anon1* wk)
{
	int i;
	_anon8* a;
	// Line 1009, Address: 0x1e0c70, Func Offset: 0
	// Line 1013, Address: 0x1e0c80, Func Offset: 0x10
	// Line 1011, Address: 0x1e0c84, Func Offset: 0x14
	// Line 1017, Address: 0x1e0c88, Func Offset: 0x18
	// Line 1018, Address: 0x1e0c98, Func Offset: 0x28
	// Line 1019, Address: 0x1e0cbc, Func Offset: 0x4c
	// Line 1020, Address: 0x1e0cc0, Func Offset: 0x50
	// Line 1021, Address: 0x1e0cc4, Func Offset: 0x54
	// Line 1022, Address: 0x1e0cc8, Func Offset: 0x58
	// Line 1021, Address: 0x1e0ccc, Func Offset: 0x5c
	// Line 1023, Address: 0x1e0cd0, Func Offset: 0x60
	// Line 1025, Address: 0x1e0cd8, Func Offset: 0x68
	// Line 1026, Address: 0x1e0ce0, Func Offset: 0x70
	// Line 1027, Address: 0x1e0ce8, Func Offset: 0x78
	// Line 1028, Address: 0x1e0cec, Func Offset: 0x7c
	// Line 1029, Address: 0x1e0cf4, Func Offset: 0x84
	// Line 1031, Address: 0x1e0cf8, Func Offset: 0x88
	// Line 1032, Address: 0x1e0d1c, Func Offset: 0xac
	// Line 1031, Address: 0x1e0d20, Func Offset: 0xb0
	// Line 1032, Address: 0x1e0d24, Func Offset: 0xb4
	// Line 1035, Address: 0x1e0d28, Func Offset: 0xb8
	// Line 1036, Address: 0x1e0d44, Func Offset: 0xd4
	// Line 1037, Address: 0x1e0d60, Func Offset: 0xf0
	// Line 1038, Address: 0x1e0d70, Func Offset: 0x100
	// Line 1039, Address: 0x1e0da4, Func Offset: 0x134
	// Line 1040, Address: 0x1e0da8, Func Offset: 0x138
	// Line 1043, Address: 0x1e0dc0, Func Offset: 0x150
	// Line 1045, Address: 0x1e0dc8, Func Offset: 0x158
	// Line 1048, Address: 0x1e0de0, Func Offset: 0x170
	// Line 1050, Address: 0x1e0de8, Func Offset: 0x178
	// Line 1053, Address: 0x1e0e00, Func Offset: 0x190
	// Line 1055, Address: 0x1e0e08, Func Offset: 0x198
	// Line 1060, Address: 0x1e0e20, Func Offset: 0x1b0
	// Line 1061, Address: 0x1e0e30, Func Offset: 0x1c0
	// Line 1062, Address: 0x1e0e40, Func Offset: 0x1d0
	// Line 1065, Address: 0x1e0e5c, Func Offset: 0x1ec
	// Line 1066, Address: 0x1e0e6c, Func Offset: 0x1fc
	// Func End, Address: 0x1e0e80, Func Offset: 0x210
}

// 
// Start address: 0x1e0e80
void BgDraw()
{
	_anon5* tex;
	unsigned int cbp;
	_anon18 img;
	int flag;
	// Line 1070, Address: 0x1e0e80, Func Offset: 0
	// Line 1073, Address: 0x1e0e84, Func Offset: 0x4
	// Line 1070, Address: 0x1e0e88, Func Offset: 0x8
	// Line 1073, Address: 0x1e0e8c, Func Offset: 0xc
	// Line 1070, Address: 0x1e0e90, Func Offset: 0x10
	// Line 1073, Address: 0x1e0e94, Func Offset: 0x14
	// Line 1070, Address: 0x1e0e98, Func Offset: 0x18
	// Line 1073, Address: 0x1e0e9c, Func Offset: 0x1c
	// Line 1074, Address: 0x1e0ea8, Func Offset: 0x28
	// Line 1076, Address: 0x1e0ebc, Func Offset: 0x3c
	// Line 1077, Address: 0x1e0ecc, Func Offset: 0x4c
	// Line 1079, Address: 0x1e0ed4, Func Offset: 0x54
	// Line 1077, Address: 0x1e0ed8, Func Offset: 0x58
	// Line 1079, Address: 0x1e0edc, Func Offset: 0x5c
	// Line 1080, Address: 0x1e0ee4, Func Offset: 0x64
	// Line 1084, Address: 0x1e0f18, Func Offset: 0x98
	// Line 1085, Address: 0x1e0f38, Func Offset: 0xb8
	// Line 1086, Address: 0x1e0f4c, Func Offset: 0xcc
	// Line 1089, Address: 0x1e0f68, Func Offset: 0xe8
	// Line 1090, Address: 0x1e0f84, Func Offset: 0x104
	// Line 1091, Address: 0x1e0f9c, Func Offset: 0x11c
	// Line 1092, Address: 0x1e0fac, Func Offset: 0x12c
	// Func End, Address: 0x1e0fc4, Func Offset: 0x144
}

// 
// Start address: 0x1e0fd0
unsigned int GetAttrCol(_enum attr)
{
	unsigned int rtv;
	// Line 1099, Address: 0x1e0fd4, Func Offset: 0x4
	// Line 1101, Address: 0x1e0fdc, Func Offset: 0xc
	// Line 1102, Address: 0x1e0fe8, Func Offset: 0x18
	// Line 1104, Address: 0x1e0ff4, Func Offset: 0x24
	// Line 1106, Address: 0x1e1000, Func Offset: 0x30
	// Line 1110, Address: 0x1e1008, Func Offset: 0x38
	// Func End, Address: 0x1e1010, Func Offset: 0x40
}

// 
// Start address: 0x1e1010
void miscItemBoxCursorSetRect(_anon1* wk)
{
	_anon9* c;
	// Line 1116, Address: 0x1e1010, Func Offset: 0
	// Line 1118, Address: 0x1e1030, Func Offset: 0x20
	// Func End, Address: 0x1e1044, Func Offset: 0x34
}

// 
// Start address: 0x1e1050
void CursorConstruct(_anon1* wk)
{
	_anon9* c;
	int menu_id;
	GameItem kind;
	_sfMenuObjRect rect;
	unsigned int col;
	// Line 1123, Address: 0x1e1050, Func Offset: 0
	// Line 1136, Address: 0x1e1064, Func Offset: 0x14
	// Line 1137, Address: 0x1e1070, Func Offset: 0x20
	// Line 1138, Address: 0x1e107c, Func Offset: 0x2c
	// Line 1139, Address: 0x1e1094, Func Offset: 0x44
	// Line 1138, Address: 0x1e1098, Func Offset: 0x48
	// Line 1139, Address: 0x1e10c0, Func Offset: 0x70
	// Line 1141, Address: 0x1e10d0, Func Offset: 0x80
	// Line 1143, Address: 0x1e10e0, Func Offset: 0x90
	// Line 1144, Address: 0x1e1108, Func Offset: 0xb8
	// Line 1145, Address: 0x1e1120, Func Offset: 0xd0
	// Line 1146, Address: 0x1e1124, Func Offset: 0xd4
	// Line 1148, Address: 0x1e1128, Func Offset: 0xd8
	// Line 1149, Address: 0x1e113c, Func Offset: 0xec
	// Line 1151, Address: 0x1e1144, Func Offset: 0xf4
	// Func End, Address: 0x1e115c, Func Offset: 0x10c
}

// 
// Start address: 0x1e1160
void CursorDestruct()
{
	// Line 1156, Address: 0x1e1160, Func Offset: 0
	// Func End, Address: 0x1e1168, Func Offset: 0x8
}

// 
// Start address: 0x1e1170
void miscItemBoxConstruct()
{
	// Line 1161, Address: 0x1e1170, Func Offset: 0
	// Line 1168, Address: 0x1e1174, Func Offset: 0x4
	// Line 1161, Address: 0x1e1178, Func Offset: 0x8
	// Line 1165, Address: 0x1e117c, Func Offset: 0xc
	// Line 1168, Address: 0x1e1180, Func Offset: 0x10
	// Line 1172, Address: 0x1e1184, Func Offset: 0x14
	// Line 1168, Address: 0x1e1188, Func Offset: 0x18
	// Line 1180, Address: 0x1e118c, Func Offset: 0x1c
	// Line 1168, Address: 0x1e1190, Func Offset: 0x20
	// Line 1165, Address: 0x1e1194, Func Offset: 0x24
	// Line 1172, Address: 0x1e119c, Func Offset: 0x2c
	// Line 1166, Address: 0x1e11a4, Func Offset: 0x34
	// Line 1167, Address: 0x1e11ac, Func Offset: 0x3c
	// Line 1169, Address: 0x1e11b4, Func Offset: 0x44
	// Line 1170, Address: 0x1e11bc, Func Offset: 0x4c
	// Line 1172, Address: 0x1e11c4, Func Offset: 0x54
	// Line 1175, Address: 0x1e11cc, Func Offset: 0x5c
	// Line 1176, Address: 0x1e11d4, Func Offset: 0x64
	// Line 1177, Address: 0x1e11dc, Func Offset: 0x6c
	// Line 1178, Address: 0x1e11e4, Func Offset: 0x74
	// Line 1180, Address: 0x1e11e8, Func Offset: 0x78
	// Line 1181, Address: 0x1e11f0, Func Offset: 0x80
	// Line 1184, Address: 0x1e11f8, Func Offset: 0x88
	// Line 1186, Address: 0x1e1200, Func Offset: 0x90
	// Line 1188, Address: 0x1e120c, Func Offset: 0x9c
	// Line 1189, Address: 0x1e1218, Func Offset: 0xa8
	// Line 1192, Address: 0x1e1224, Func Offset: 0xb4
	// Line 1194, Address: 0x1e122c, Func Offset: 0xbc
	// Line 1196, Address: 0x1e1234, Func Offset: 0xc4
	// Line 1199, Address: 0x1e1240, Func Offset: 0xd0
	// Line 1200, Address: 0x1e1250, Func Offset: 0xe0
	// Func End, Address: 0x1e125c, Func Offset: 0xec
}

// 
// Start address: 0x1e1260
void miscItemBoxDestruct()
{
	// Line 1204, Address: 0x1e1260, Func Offset: 0
	// Line 1209, Address: 0x1e1268, Func Offset: 0x8
	// Line 1214, Address: 0x1e1270, Func Offset: 0x10
	// Line 1217, Address: 0x1e1278, Func Offset: 0x18
	// Line 1218, Address: 0x1e1284, Func Offset: 0x24
	// Func End, Address: 0x1e1290, Func Offset: 0x30
}

// 
// Start address: 0x1e1290
void miscItemBoxExplanationDisp(_anon1* wk, int flag)
{
	// Line 1225, Address: 0x1e1290, Func Offset: 0
	// Line 1229, Address: 0x1e1298, Func Offset: 0x8
	// Line 1236, Address: 0x1e12a4, Func Offset: 0x14
	// Line 1237, Address: 0x1e12cc, Func Offset: 0x3c
	// Line 1238, Address: 0x1e12d4, Func Offset: 0x44
	// Line 1240, Address: 0x1e12e0, Func Offset: 0x50
	// Line 1241, Address: 0x1e12e8, Func Offset: 0x58
	// Line 1243, Address: 0x1e12f0, Func Offset: 0x60
	// Func End, Address: 0x1e12fc, Func Offset: 0x6c
}

// 
// Start address: 0x1e1300
unsigned int ColLerp(unsigned int src, unsigned int dst, float ratio)
{
	unsigned int rtv;
	int s;
	int d;
	int i;
	// Line 1248, Address: 0x1e1300, Func Offset: 0
	// Line 1251, Address: 0x1e1304, Func Offset: 0x4
	// Line 1252, Address: 0x1e1310, Func Offset: 0x10
	// Line 1253, Address: 0x1e1318, Func Offset: 0x18
	// Line 1252, Address: 0x1e131c, Func Offset: 0x1c
	// Line 1253, Address: 0x1e1320, Func Offset: 0x20
	// Line 1254, Address: 0x1e1324, Func Offset: 0x24
	// Line 1255, Address: 0x1e134c, Func Offset: 0x4c
	// Line 1254, Address: 0x1e1350, Func Offset: 0x50
	// Line 1255, Address: 0x1e1360, Func Offset: 0x60
	// Line 1257, Address: 0x1e1368, Func Offset: 0x68
	// Func End, Address: 0x1e1370, Func Offset: 0x70
}

// 
// Start address: 0x1e1370
void OneItemSlide(_anon3* img, int from, int to, float ratio, int is_active)
{
	_anon7* src;
	_anon7* dst;
	float* alpha_s;
	float* alpha_d;
	float alpha;
	unsigned int col;
	unsigned int a;
	unsigned int rgb;
	int dir;
	float s[4];
	float d[4];
	float vec[4];
	// Line 1261, Address: 0x1e1370, Func Offset: 0
	// Line 1269, Address: 0x1e1374, Func Offset: 0x4
	// Line 1261, Address: 0x1e1378, Func Offset: 0x8
	// Line 1272, Address: 0x1e1390, Func Offset: 0x20
	// Line 1274, Address: 0x1e13a0, Func Offset: 0x30
	// Line 1273, Address: 0x1e13a4, Func Offset: 0x34
	// Line 1274, Address: 0x1e13a8, Func Offset: 0x38
	// Line 1273, Address: 0x1e13ac, Func Offset: 0x3c
	// Line 1274, Address: 0x1e13b0, Func Offset: 0x40
	// Line 1275, Address: 0x1e13b4, Func Offset: 0x44
	// Line 1277, Address: 0x1e13b8, Func Offset: 0x48
	// Line 1274, Address: 0x1e13bc, Func Offset: 0x4c
	// Line 1275, Address: 0x1e13c0, Func Offset: 0x50
	// Line 1277, Address: 0x1e13c4, Func Offset: 0x54
	// Line 1278, Address: 0x1e13ec, Func Offset: 0x7c
	// Line 1277, Address: 0x1e13f4, Func Offset: 0x84
	// Line 1278, Address: 0x1e140c, Func Offset: 0x9c
	// Line 1279, Address: 0x1e1434, Func Offset: 0xc4
	// Line 1278, Address: 0x1e143c, Func Offset: 0xcc
	// Line 1279, Address: 0x1e1454, Func Offset: 0xe4
	// Line 1281, Address: 0x1e147c, Func Offset: 0x10c
	// Line 1279, Address: 0x1e1488, Func Offset: 0x118
	// Line 1281, Address: 0x1e14a4, Func Offset: 0x134
	// Line 1282, Address: 0x1e14c8, Func Offset: 0x158
	// Line 1283, Address: 0x1e14e0, Func Offset: 0x170
	// Line 1286, Address: 0x1e14e8, Func Offset: 0x178
	// Line 1287, Address: 0x1e14f0, Func Offset: 0x180
	// Line 1288, Address: 0x1e14f4, Func Offset: 0x184
	// Line 1289, Address: 0x1e14f8, Func Offset: 0x188
	// Line 1291, Address: 0x1e14fc, Func Offset: 0x18c
	// Line 1289, Address: 0x1e1500, Func Offset: 0x190
	// Line 1291, Address: 0x1e1504, Func Offset: 0x194
	// Line 1289, Address: 0x1e1508, Func Offset: 0x198
	// Line 1291, Address: 0x1e1514, Func Offset: 0x1a4
	// Line 1292, Address: 0x1e1570, Func Offset: 0x200
	// Line 1294, Address: 0x1e157c, Func Offset: 0x20c
	// Func End, Address: 0x1e1598, Func Offset: 0x228
}

// 
// Start address: 0x1e15a0
void Slide_Del(_anon4* bw, int del_index, int dir, int cnt)
{
	_IconRing* ir;
	_IconRing* head;
	_anon3* img;
	int i;
	int from;
	int to;
	float ratio;
	int item_num;
	// Line 1299, Address: 0x1e15a0, Func Offset: 0
	// Line 1304, Address: 0x1e15cc, Func Offset: 0x2c
	// Line 1299, Address: 0x1e15d0, Func Offset: 0x30
	// Line 1301, Address: 0x1e15dc, Func Offset: 0x3c
	// Line 1304, Address: 0x1e15e0, Func Offset: 0x40
	// Line 1305, Address: 0x1e15e8, Func Offset: 0x48
	// Line 1310, Address: 0x1e15ec, Func Offset: 0x4c
	// Line 1312, Address: 0x1e1610, Func Offset: 0x70
	// Line 1314, Address: 0x1e161c, Func Offset: 0x7c
	// Line 1315, Address: 0x1e1620, Func Offset: 0x80
	// Line 1316, Address: 0x1e1640, Func Offset: 0xa0
	// Line 1317, Address: 0x1e1684, Func Offset: 0xe4
	// Line 1318, Address: 0x1e16a0, Func Offset: 0x100
	// Line 1319, Address: 0x1e16b8, Func Offset: 0x118
	// Line 1318, Address: 0x1e16bc, Func Offset: 0x11c
	// Line 1319, Address: 0x1e16c4, Func Offset: 0x124
	// Line 1320, Address: 0x1e16d0, Func Offset: 0x130
	// Line 1323, Address: 0x1e16d4, Func Offset: 0x134
	// Line 1325, Address: 0x1e16f8, Func Offset: 0x158
	// Line 1328, Address: 0x1e1700, Func Offset: 0x160
	// Line 1330, Address: 0x1e1710, Func Offset: 0x170
	// Line 1332, Address: 0x1e1714, Func Offset: 0x174
	// Line 1335, Address: 0x1e1728, Func Offset: 0x188
	// Line 1336, Address: 0x1e172c, Func Offset: 0x18c
	// Line 1337, Address: 0x1e1740, Func Offset: 0x1a0
	// Line 1342, Address: 0x1e1750, Func Offset: 0x1b0
	// Line 1341, Address: 0x1e1754, Func Offset: 0x1b4
	// Line 1345, Address: 0x1e1758, Func Offset: 0x1b8
	// Line 1346, Address: 0x1e1764, Func Offset: 0x1c4
	// Line 1348, Address: 0x1e1770, Func Offset: 0x1d0
	// Line 1350, Address: 0x1e1774, Func Offset: 0x1d4
	// Line 1351, Address: 0x1e1790, Func Offset: 0x1f0
	// Line 1352, Address: 0x1e179c, Func Offset: 0x1fc
	// Line 1353, Address: 0x1e17ac, Func Offset: 0x20c
	// Line 1355, Address: 0x1e17b8, Func Offset: 0x218
	// Line 1357, Address: 0x1e17cc, Func Offset: 0x22c
	// Line 1359, Address: 0x1e17d0, Func Offset: 0x230
	// Line 1360, Address: 0x1e17d4, Func Offset: 0x234
	// Line 1361, Address: 0x1e17d8, Func Offset: 0x238
	// Line 1360, Address: 0x1e17dc, Func Offset: 0x23c
	// Line 1361, Address: 0x1e17e0, Func Offset: 0x240
	// Line 1362, Address: 0x1e17e8, Func Offset: 0x248
	// Line 1365, Address: 0x1e17ec, Func Offset: 0x24c
	// Line 1367, Address: 0x1e1810, Func Offset: 0x270
	// Line 1370, Address: 0x1e1818, Func Offset: 0x278
	// Line 1372, Address: 0x1e1828, Func Offset: 0x288
	// Line 1374, Address: 0x1e182c, Func Offset: 0x28c
	// Line 1377, Address: 0x1e1840, Func Offset: 0x2a0
	// Line 1378, Address: 0x1e1844, Func Offset: 0x2a4
	// Line 1379, Address: 0x1e1854, Func Offset: 0x2b4
	// Line 1382, Address: 0x1e1860, Func Offset: 0x2c0
	// Line 1383, Address: 0x1e1864, Func Offset: 0x2c4
	// Line 1384, Address: 0x1e1880, Func Offset: 0x2e0
	// Line 1385, Address: 0x1e18c4, Func Offset: 0x324
	// Line 1386, Address: 0x1e18e0, Func Offset: 0x340
	// Line 1387, Address: 0x1e1900, Func Offset: 0x360
	// Line 1391, Address: 0x1e1908, Func Offset: 0x368
	// Line 1388, Address: 0x1e190c, Func Offset: 0x36c
	// Line 1391, Address: 0x1e1910, Func Offset: 0x370
	// Line 1395, Address: 0x1e1918, Func Offset: 0x378
	// Line 1397, Address: 0x1e1928, Func Offset: 0x388
	// Line 1399, Address: 0x1e192c, Func Offset: 0x38c
	// Line 1402, Address: 0x1e1940, Func Offset: 0x3a0
	// Line 1403, Address: 0x1e1944, Func Offset: 0x3a4
	// Line 1404, Address: 0x1e1950, Func Offset: 0x3b0
	// Line 1409, Address: 0x1e1960, Func Offset: 0x3c0
	// Line 1408, Address: 0x1e1964, Func Offset: 0x3c4
	// Line 1409, Address: 0x1e1968, Func Offset: 0x3c8
	// Line 1412, Address: 0x1e196c, Func Offset: 0x3cc
	// Line 1413, Address: 0x1e1978, Func Offset: 0x3d8
	// Line 1415, Address: 0x1e1988, Func Offset: 0x3e8
	// Line 1417, Address: 0x1e198c, Func Offset: 0x3ec
	// Line 1418, Address: 0x1e19a8, Func Offset: 0x408
	// Line 1419, Address: 0x1e19b4, Func Offset: 0x414
	// Line 1420, Address: 0x1e19c4, Func Offset: 0x424
	// Line 1422, Address: 0x1e19d0, Func Offset: 0x430
	// Line 1424, Address: 0x1e19e4, Func Offset: 0x444
	// Line 1426, Address: 0x1e19e8, Func Offset: 0x448
	// Line 1427, Address: 0x1e19ec, Func Offset: 0x44c
	// Line 1428, Address: 0x1e19f0, Func Offset: 0x450
	// Line 1427, Address: 0x1e19f4, Func Offset: 0x454
	// Line 1426, Address: 0x1e19f8, Func Offset: 0x458
	// Line 1428, Address: 0x1e19fc, Func Offset: 0x45c
	// Line 1432, Address: 0x1e1a08, Func Offset: 0x468
	// Line 1429, Address: 0x1e1a0c, Func Offset: 0x46c
	// Line 1432, Address: 0x1e1a10, Func Offset: 0x470
	// Line 1436, Address: 0x1e1a18, Func Offset: 0x478
	// Line 1438, Address: 0x1e1a28, Func Offset: 0x488
	// Line 1440, Address: 0x1e1a2c, Func Offset: 0x48c
	// Line 1443, Address: 0x1e1a40, Func Offset: 0x4a0
	// Line 1444, Address: 0x1e1a44, Func Offset: 0x4a4
	// Line 1445, Address: 0x1e1a54, Func Offset: 0x4b4
	// Line 1446, Address: 0x1e1a58, Func Offset: 0x4b8
	// Func End, Address: 0x1e1a88, Func Offset: 0x4e8
}

// 
// Start address: 0x1e1a90
void Slide_Add(_anon4* bw, int add_index, int item_num, int dir, int cnt)
{
	_IconRing* ir;
	_anon3* img;
	int i;
	int from;
	int to;
	float ratio;
	// Line 1450, Address: 0x1e1a90, Func Offset: 0
	// Line 1454, Address: 0x1e1ac4, Func Offset: 0x34
	// Line 1459, Address: 0x1e1ad4, Func Offset: 0x44
	// Line 1461, Address: 0x1e1af8, Func Offset: 0x68
	// Line 1463, Address: 0x1e1b04, Func Offset: 0x74
	// Line 1464, Address: 0x1e1b08, Func Offset: 0x78
	// Line 1465, Address: 0x1e1b28, Func Offset: 0x98
	// Line 1466, Address: 0x1e1b6c, Func Offset: 0xdc
	// Line 1467, Address: 0x1e1b88, Func Offset: 0xf8
	// Line 1468, Address: 0x1e1ba8, Func Offset: 0x118
	// Line 1472, Address: 0x1e1bb0, Func Offset: 0x120
	// Line 1469, Address: 0x1e1bb4, Func Offset: 0x124
	// Line 1472, Address: 0x1e1bb8, Func Offset: 0x128
	// Line 1476, Address: 0x1e1bc0, Func Offset: 0x130
	// Line 1477, Address: 0x1e1bd0, Func Offset: 0x140
	// Line 1479, Address: 0x1e1bd4, Func Offset: 0x144
	// Line 1482, Address: 0x1e1be8, Func Offset: 0x158
	// Line 1483, Address: 0x1e1bec, Func Offset: 0x15c
	// Line 1484, Address: 0x1e1bf8, Func Offset: 0x168
	// Line 1487, Address: 0x1e1c00, Func Offset: 0x170
	// Line 1488, Address: 0x1e1c04, Func Offset: 0x174
	// Line 1489, Address: 0x1e1c20, Func Offset: 0x190
	// Line 1488, Address: 0x1e1c5c, Func Offset: 0x1cc
	// Line 1489, Address: 0x1e1c60, Func Offset: 0x1d0
	// Line 1490, Address: 0x1e1c64, Func Offset: 0x1d4
	// Line 1491, Address: 0x1e1c80, Func Offset: 0x1f0
	// Line 1492, Address: 0x1e1c88, Func Offset: 0x1f8
	// Line 1491, Address: 0x1e1c8c, Func Offset: 0x1fc
	// Line 1492, Address: 0x1e1ca0, Func Offset: 0x210
	// Line 1496, Address: 0x1e1cb0, Func Offset: 0x220
	// Line 1493, Address: 0x1e1cb4, Func Offset: 0x224
	// Line 1496, Address: 0x1e1cb8, Func Offset: 0x228
	// Line 1500, Address: 0x1e1cc0, Func Offset: 0x230
	// Line 1501, Address: 0x1e1cd0, Func Offset: 0x240
	// Line 1503, Address: 0x1e1cd4, Func Offset: 0x244
	// Line 1506, Address: 0x1e1ce8, Func Offset: 0x258
	// Line 1507, Address: 0x1e1cec, Func Offset: 0x25c
	// Line 1508, Address: 0x1e1d00, Func Offset: 0x270
	// Line 1513, Address: 0x1e1d0c, Func Offset: 0x27c
	// Line 1512, Address: 0x1e1d10, Func Offset: 0x280
	// Line 1513, Address: 0x1e1d14, Func Offset: 0x284
	// Line 1516, Address: 0x1e1d18, Func Offset: 0x288
	// Line 1517, Address: 0x1e1d24, Func Offset: 0x294
	// Line 1518, Address: 0x1e1d30, Func Offset: 0x2a0
	// Line 1520, Address: 0x1e1d34, Func Offset: 0x2a4
	// Line 1521, Address: 0x1e1d50, Func Offset: 0x2c0
	// Line 1522, Address: 0x1e1d5c, Func Offset: 0x2cc
	// Line 1523, Address: 0x1e1d6c, Func Offset: 0x2dc
	// Line 1525, Address: 0x1e1d78, Func Offset: 0x2e8
	// Line 1527, Address: 0x1e1d8c, Func Offset: 0x2fc
	// Line 1530, Address: 0x1e1d90, Func Offset: 0x300
	// Line 1532, Address: 0x1e1d94, Func Offset: 0x304
	// Line 1531, Address: 0x1e1d9c, Func Offset: 0x30c
	// Line 1532, Address: 0x1e1da0, Func Offset: 0x310
	// Line 1536, Address: 0x1e1da8, Func Offset: 0x318
	// Line 1533, Address: 0x1e1dac, Func Offset: 0x31c
	// Line 1536, Address: 0x1e1db0, Func Offset: 0x320
	// Line 1540, Address: 0x1e1db8, Func Offset: 0x328
	// Line 1541, Address: 0x1e1dc8, Func Offset: 0x338
	// Line 1543, Address: 0x1e1dcc, Func Offset: 0x33c
	// Line 1546, Address: 0x1e1de0, Func Offset: 0x350
	// Line 1547, Address: 0x1e1de4, Func Offset: 0x354
	// Line 1548, Address: 0x1e1df4, Func Offset: 0x364
	// Line 1549, Address: 0x1e1df8, Func Offset: 0x368
	// Func End, Address: 0x1e1e24, Func Offset: 0x394
}

// 
// Start address: 0x1e1e30
void CenterItemBuruburuGo()
{
	_anon3* icon;
	int time;
	// Line 1554, Address: 0x1e1e30, Func Offset: 0
	// Line 1555, Address: 0x1e1e3c, Func Offset: 0xc
	// Line 1557, Address: 0x1e1e44, Func Offset: 0x14
	// Line 1559, Address: 0x1e1e50, Func Offset: 0x20
	// Line 1561, Address: 0x1e1e6c, Func Offset: 0x3c
	// Line 1562, Address: 0x1e1e80, Func Offset: 0x50
	// Line 1563, Address: 0x1e1e8c, Func Offset: 0x5c
	// Line 1564, Address: 0x1e1e90, Func Offset: 0x60
	// Func End, Address: 0x1e1ea0, Func Offset: 0x70
}

// 
// Start address: 0x1e1ea0
void miscItemBoxDrawBox_Rest(_anon4* bw, int is_active)
{
	int i;
	_anon3* img;
	_IconRing* ir;
	_anon7* pos;
	float* alpha;
	int num;
	unsigned int col;
	unsigned char a;
	unsigned char rgb;
	// Line 1568, Address: 0x1e1ea0, Func Offset: 0
	// Line 1570, Address: 0x1e1ec0, Func Offset: 0x20
	// Line 1568, Address: 0x1e1ec4, Func Offset: 0x24
	// Line 1578, Address: 0x1e1ed8, Func Offset: 0x38
	// Line 1571, Address: 0x1e1edc, Func Offset: 0x3c
	// Line 1578, Address: 0x1e1ee0, Func Offset: 0x40
	// Line 1579, Address: 0x1e1f00, Func Offset: 0x60
	// Line 1580, Address: 0x1e1f04, Func Offset: 0x64
	// Line 1579, Address: 0x1e1f08, Func Offset: 0x68
	// Line 1580, Address: 0x1e1f0c, Func Offset: 0x6c
	// Line 1581, Address: 0x1e1f10, Func Offset: 0x70
	// Line 1583, Address: 0x1e1f18, Func Offset: 0x78
	// Line 1586, Address: 0x1e1f30, Func Offset: 0x90
	// Line 1587, Address: 0x1e1f38, Func Offset: 0x98
	// Line 1588, Address: 0x1e1f44, Func Offset: 0xa4
	// Line 1589, Address: 0x1e1f48, Func Offset: 0xa8
	// Line 1591, Address: 0x1e1f64, Func Offset: 0xc4
	// Line 1592, Address: 0x1e1fc8, Func Offset: 0x128
	// Line 1593, Address: 0x1e1fd8, Func Offset: 0x138
	// Line 1595, Address: 0x1e2008, Func Offset: 0x168
	// Line 1598, Address: 0x1e2014, Func Offset: 0x174
	// Line 1596, Address: 0x1e2018, Func Offset: 0x178
	// Line 1598, Address: 0x1e201c, Func Offset: 0x17c
	// Line 1600, Address: 0x1e2028, Func Offset: 0x188
	// Line 1602, Address: 0x1e2040, Func Offset: 0x1a0
	// Line 1603, Address: 0x1e2050, Func Offset: 0x1b0
	// Line 1605, Address: 0x1e2060, Func Offset: 0x1c0
	// Line 1606, Address: 0x1e2070, Func Offset: 0x1d0
	// Line 1608, Address: 0x1e2078, Func Offset: 0x1d8
	// Line 1609, Address: 0x1e208c, Func Offset: 0x1ec
	// Line 1614, Address: 0x1e2090, Func Offset: 0x1f0
	// Line 1611, Address: 0x1e2094, Func Offset: 0x1f4
	// Line 1612, Address: 0x1e2098, Func Offset: 0x1f8
	// Line 1613, Address: 0x1e209c, Func Offset: 0x1fc
	// Line 1615, Address: 0x1e20a0, Func Offset: 0x200
	// Line 1616, Address: 0x1e20b4, Func Offset: 0x214
	// Func End, Address: 0x1e20e8, Func Offset: 0x248
}

// 
// Start address: 0x1e20f0
void miscItemBoxDrawBox_Rest2(_anon4* bw, int is_active)
{
	int i;
	_anon3* img;
	_IconRing* ir;
	_anon7* pos;
	float* alpha;
	int num;
	unsigned int col;
	unsigned char a;
	unsigned char rgb;
	// Line 1620, Address: 0x1e20f0, Func Offset: 0
	// Line 1622, Address: 0x1e2110, Func Offset: 0x20
	// Line 1620, Address: 0x1e2114, Func Offset: 0x24
	// Line 1629, Address: 0x1e2128, Func Offset: 0x38
	// Line 1623, Address: 0x1e212c, Func Offset: 0x3c
	// Line 1629, Address: 0x1e2130, Func Offset: 0x40
	// Line 1630, Address: 0x1e2150, Func Offset: 0x60
	// Line 1631, Address: 0x1e2154, Func Offset: 0x64
	// Line 1630, Address: 0x1e2158, Func Offset: 0x68
	// Line 1631, Address: 0x1e215c, Func Offset: 0x6c
	// Line 1633, Address: 0x1e2160, Func Offset: 0x70
	// Line 1635, Address: 0x1e2168, Func Offset: 0x78
	// Line 1638, Address: 0x1e2180, Func Offset: 0x90
	// Line 1639, Address: 0x1e2188, Func Offset: 0x98
	// Line 1640, Address: 0x1e2194, Func Offset: 0xa4
	// Line 1641, Address: 0x1e2198, Func Offset: 0xa8
	// Line 1643, Address: 0x1e21b4, Func Offset: 0xc4
	// Line 1644, Address: 0x1e2218, Func Offset: 0x128
	// Line 1652, Address: 0x1e2228, Func Offset: 0x138
	// Line 1657, Address: 0x1e2234, Func Offset: 0x144
	// Line 1654, Address: 0x1e2238, Func Offset: 0x148
	// Line 1655, Address: 0x1e223c, Func Offset: 0x14c
	// Line 1656, Address: 0x1e2240, Func Offset: 0x150
	// Line 1658, Address: 0x1e2244, Func Offset: 0x154
	// Line 1659, Address: 0x1e2254, Func Offset: 0x164
	// Func End, Address: 0x1e2288, Func Offset: 0x198
}

// 
// Start address: 0x1e2290
void miscItemBoxDrawBox_Move(_anon4* bw, int roll_cnt)
{
	int i;
	_anon3* img;
	int from;
	int to;
	int dmy_from;
	int dmy_to;
	_IconRing* ir;
	float ratio;
	// Line 1663, Address: 0x1e2290, Func Offset: 0
	// Line 1669, Address: 0x1e2294, Func Offset: 0x4
	// Line 1663, Address: 0x1e2298, Func Offset: 0x8
	// Line 1665, Address: 0x1e22b8, Func Offset: 0x28
	// Line 1663, Address: 0x1e22bc, Func Offset: 0x2c
	// Line 1669, Address: 0x1e22c0, Func Offset: 0x30
	// Line 1663, Address: 0x1e22c4, Func Offset: 0x34
	// Line 1668, Address: 0x1e22d0, Func Offset: 0x40
	// Line 1669, Address: 0x1e22d4, Func Offset: 0x44
	// Line 1671, Address: 0x1e22e0, Func Offset: 0x50
	// Line 1677, Address: 0x1e22f0, Func Offset: 0x60
	// Line 1673, Address: 0x1e22f4, Func Offset: 0x64
	// Line 1674, Address: 0x1e22f8, Func Offset: 0x68
	// Line 1677, Address: 0x1e22fc, Func Offset: 0x6c
	// Line 1679, Address: 0x1e2314, Func Offset: 0x84
	// Line 1685, Address: 0x1e2320, Func Offset: 0x90
	// Line 1682, Address: 0x1e2324, Func Offset: 0x94
	// Line 1683, Address: 0x1e2328, Func Offset: 0x98
	// Line 1684, Address: 0x1e232c, Func Offset: 0x9c
	// Line 1689, Address: 0x1e2330, Func Offset: 0xa0
	// Line 1690, Address: 0x1e2338, Func Offset: 0xa8
	// Line 1692, Address: 0x1e2350, Func Offset: 0xc0
	// Line 1694, Address: 0x1e2360, Func Offset: 0xd0
	// Line 1696, Address: 0x1e2368, Func Offset: 0xd8
	// Line 1697, Address: 0x1e2378, Func Offset: 0xe8
	// Line 1699, Address: 0x1e23a8, Func Offset: 0x118
	// Line 1702, Address: 0x1e23b4, Func Offset: 0x124
	// Line 1700, Address: 0x1e23b8, Func Offset: 0x128
	// Line 1702, Address: 0x1e23bc, Func Offset: 0x12c
	// Line 1703, Address: 0x1e23d4, Func Offset: 0x144
	// Line 1704, Address: 0x1e23e8, Func Offset: 0x158
	// Line 1705, Address: 0x1e23f8, Func Offset: 0x168
	// Line 1707, Address: 0x1e2400, Func Offset: 0x170
	// Line 1708, Address: 0x1e2414, Func Offset: 0x184
	// Line 1709, Address: 0x1e2418, Func Offset: 0x188
	// Func End, Address: 0x1e2448, Func Offset: 0x1b8
}

// 
// Start address: 0x1e2450
void miscItemBoxDrawBox_AttrChg(_anon4* bw, int is_active)
{
	int i;
	_anon3* img;
	_IconRing* ir;
	_anon7* pos;
	float* alpha;
	int num;
	int cnt;
	float ratio;
	float fade_ratio;
	float move_y_ratio;
	int sign;
	int is_ring_initialized;
	float move_len;
	unsigned int col;
	unsigned char a;
	unsigned char rgb;
	// Line 1713, Address: 0x1e2450, Func Offset: 0
	// Line 1720, Address: 0x1e2454, Func Offset: 0x4
	// Line 1713, Address: 0x1e2458, Func Offset: 0x8
	// Line 1721, Address: 0x1e245c, Func Offset: 0xc
	// Line 1713, Address: 0x1e2460, Func Offset: 0x10
	// Line 1723, Address: 0x1e2468, Func Offset: 0x18
	// Line 1713, Address: 0x1e246c, Func Offset: 0x1c
	// Line 1715, Address: 0x1e247c, Func Offset: 0x2c
	// Line 1713, Address: 0x1e2480, Func Offset: 0x30
	// Line 1715, Address: 0x1e2484, Func Offset: 0x34
	// Line 1713, Address: 0x1e2488, Func Offset: 0x38
	// Line 1721, Address: 0x1e24a4, Func Offset: 0x54
	// Line 1725, Address: 0x1e24ac, Func Offset: 0x5c
	// Line 1720, Address: 0x1e24b0, Func Offset: 0x60
	// Line 1716, Address: 0x1e24b4, Func Offset: 0x64
	// Line 1725, Address: 0x1e24b8, Func Offset: 0x68
	// Line 1726, Address: 0x1e24d8, Func Offset: 0x88
	// Line 1727, Address: 0x1e24dc, Func Offset: 0x8c
	// Line 1729, Address: 0x1e24e0, Func Offset: 0x90
	// Line 1726, Address: 0x1e24e4, Func Offset: 0x94
	// Line 1729, Address: 0x1e24e8, Func Offset: 0x98
	// Line 1730, Address: 0x1e24f0, Func Offset: 0xa0
	// Line 1731, Address: 0x1e24fc, Func Offset: 0xac
	// Line 1733, Address: 0x1e2500, Func Offset: 0xb0
	// Line 1731, Address: 0x1e2504, Func Offset: 0xb4
	// Line 1732, Address: 0x1e250c, Func Offset: 0xbc
	// Line 1734, Address: 0x1e2510, Func Offset: 0xc0
	// Line 1735, Address: 0x1e2518, Func Offset: 0xc8
	// Line 1737, Address: 0x1e2524, Func Offset: 0xd4
	// Line 1738, Address: 0x1e2528, Func Offset: 0xd8
	// Line 1740, Address: 0x1e2534, Func Offset: 0xe4
	// Line 1741, Address: 0x1e2538, Func Offset: 0xe8
	// Line 1740, Address: 0x1e253c, Func Offset: 0xec
	// Line 1742, Address: 0x1e2540, Func Offset: 0xf0
	// Line 1739, Address: 0x1e2544, Func Offset: 0xf4
	// Line 1740, Address: 0x1e2548, Func Offset: 0xf8
	// Line 1743, Address: 0x1e254c, Func Offset: 0xfc
	// Line 1745, Address: 0x1e2550, Func Offset: 0x100
	// Line 1748, Address: 0x1e2558, Func Offset: 0x108
	// Line 1746, Address: 0x1e255c, Func Offset: 0x10c
	// Line 1748, Address: 0x1e2560, Func Offset: 0x110
	// Line 1751, Address: 0x1e2578, Func Offset: 0x128
	// Line 1752, Address: 0x1e2584, Func Offset: 0x134
	// Line 1755, Address: 0x1e2590, Func Offset: 0x140
	// Line 1757, Address: 0x1e2594, Func Offset: 0x144
	// Line 1755, Address: 0x1e2598, Func Offset: 0x148
	// Line 1757, Address: 0x1e25ac, Func Offset: 0x15c
	// Line 1755, Address: 0x1e25b0, Func Offset: 0x160
	// Line 1757, Address: 0x1e25b4, Func Offset: 0x164
	// Line 1755, Address: 0x1e25b8, Func Offset: 0x168
	// Line 1757, Address: 0x1e25bc, Func Offset: 0x16c
	// Line 1755, Address: 0x1e25c0, Func Offset: 0x170
	// Line 1757, Address: 0x1e25c4, Func Offset: 0x174
	// Line 1760, Address: 0x1e2628, Func Offset: 0x1d8
	// Line 1762, Address: 0x1e2638, Func Offset: 0x1e8
	// Line 1763, Address: 0x1e2640, Func Offset: 0x1f0
	// Line 1765, Address: 0x1e2670, Func Offset: 0x220
	// Line 1766, Address: 0x1e267c, Func Offset: 0x22c
	// Line 1768, Address: 0x1e2680, Func Offset: 0x230
	// Line 1767, Address: 0x1e2684, Func Offset: 0x234
	// Line 1768, Address: 0x1e2688, Func Offset: 0x238
	// Line 1770, Address: 0x1e2694, Func Offset: 0x244
	// Line 1773, Address: 0x1e26b8, Func Offset: 0x268
	// Line 1774, Address: 0x1e26c8, Func Offset: 0x278
	// Line 1779, Address: 0x1e26d8, Func Offset: 0x288
	// Line 1776, Address: 0x1e26dc, Func Offset: 0x28c
	// Line 1777, Address: 0x1e26e0, Func Offset: 0x290
	// Line 1778, Address: 0x1e26e4, Func Offset: 0x294
	// Line 1780, Address: 0x1e26e8, Func Offset: 0x298
	// Line 1783, Address: 0x1e26fc, Func Offset: 0x2ac
	// Line 1785, Address: 0x1e2704, Func Offset: 0x2b4
	// Line 1784, Address: 0x1e2708, Func Offset: 0x2b8
	// Line 1785, Address: 0x1e2710, Func Offset: 0x2c0
	// Line 1787, Address: 0x1e2714, Func Offset: 0x2c4
	// Line 1788, Address: 0x1e2720, Func Offset: 0x2d0
	// Line 1791, Address: 0x1e2750, Func Offset: 0x300
	// Line 1790, Address: 0x1e2754, Func Offset: 0x304
	// Line 1792, Address: 0x1e2758, Func Offset: 0x308
	// Line 1793, Address: 0x1e276c, Func Offset: 0x31c
	// Line 1794, Address: 0x1e2770, Func Offset: 0x320
	// Func End, Address: 0x1e27b0, Func Offset: 0x360
}

// 
// Start address: 0x1e27b0
void miscItemBoxDrawBox_BoxToMenu(_anon4* bw)
{
	int i;
	_anon3* img;
	_IconRing* ir;
	_anon7* pos;
	float* alpha;
	int num;
	float x;
	float y;
	float w;
	float h;
	unsigned int col;
	unsigned char a;
	float ratio;
	_sfMenuObjRect r;
	int n;
	int def_n;
	// Line 1798, Address: 0x1e27b0, Func Offset: 0
	// Line 1800, Address: 0x1e27d4, Func Offset: 0x24
	// Line 1798, Address: 0x1e27d8, Func Offset: 0x28
	// Line 1806, Address: 0x1e27fc, Func Offset: 0x4c
	// Line 1801, Address: 0x1e2800, Func Offset: 0x50
	// Line 1806, Address: 0x1e2804, Func Offset: 0x54
	// Line 1807, Address: 0x1e2820, Func Offset: 0x70
	// Line 1808, Address: 0x1e2824, Func Offset: 0x74
	// Line 1807, Address: 0x1e2828, Func Offset: 0x78
	// Line 1808, Address: 0x1e282c, Func Offset: 0x7c
	// Line 1809, Address: 0x1e2830, Func Offset: 0x80
	// Line 1810, Address: 0x1e2838, Func Offset: 0x88
	// Line 1811, Address: 0x1e283c, Func Offset: 0x8c
	// Line 1812, Address: 0x1e2840, Func Offset: 0x90
	// Line 1813, Address: 0x1e2844, Func Offset: 0x94
	// Line 1817, Address: 0x1e2848, Func Offset: 0x98
	// Line 1819, Address: 0x1e2850, Func Offset: 0xa0
	// Line 1817, Address: 0x1e2858, Func Offset: 0xa8
	// Line 1818, Address: 0x1e2868, Func Offset: 0xb8
	// Line 1819, Address: 0x1e288c, Func Offset: 0xdc
	// Line 1821, Address: 0x1e28a4, Func Offset: 0xf4
	// Line 1822, Address: 0x1e28b0, Func Offset: 0x100
	// Line 1821, Address: 0x1e28b4, Func Offset: 0x104
	// Line 1822, Address: 0x1e28b8, Func Offset: 0x108
	// Line 1823, Address: 0x1e28c4, Func Offset: 0x114
	// Line 1822, Address: 0x1e28c8, Func Offset: 0x118
	// Line 1823, Address: 0x1e28cc, Func Offset: 0x11c
	// Line 1822, Address: 0x1e28d0, Func Offset: 0x120
	// Line 1823, Address: 0x1e28d4, Func Offset: 0x124
	// Line 1822, Address: 0x1e28d8, Func Offset: 0x128
	// Line 1823, Address: 0x1e28e4, Func Offset: 0x134
	// Line 1822, Address: 0x1e28ec, Func Offset: 0x13c
	// Line 1823, Address: 0x1e2908, Func Offset: 0x158
	// Line 1825, Address: 0x1e2910, Func Offset: 0x160
	// Line 1823, Address: 0x1e2914, Func Offset: 0x164
	// Line 1825, Address: 0x1e2918, Func Offset: 0x168
	// Line 1826, Address: 0x1e2920, Func Offset: 0x170
	// Line 1825, Address: 0x1e2928, Func Offset: 0x178
	// Line 1826, Address: 0x1e2934, Func Offset: 0x184
	// Line 1825, Address: 0x1e293c, Func Offset: 0x18c
	// Line 1826, Address: 0x1e2950, Func Offset: 0x1a0
	// Line 1827, Address: 0x1e2964, Func Offset: 0x1b4
	// Line 1828, Address: 0x1e2970, Func Offset: 0x1c0
	// Line 1830, Address: 0x1e2978, Func Offset: 0x1c8
	// Line 1831, Address: 0x1e299c, Func Offset: 0x1ec
	// Line 1833, Address: 0x1e29a8, Func Offset: 0x1f8
	// Line 1835, Address: 0x1e29d4, Func Offset: 0x224
	// Line 1837, Address: 0x1e29d8, Func Offset: 0x228
	// Line 1839, Address: 0x1e29e8, Func Offset: 0x238
	// Line 1841, Address: 0x1e29ec, Func Offset: 0x23c
	// Line 1843, Address: 0x1e29fc, Func Offset: 0x24c
	// Line 1844, Address: 0x1e2a24, Func Offset: 0x274
	// Line 1845, Address: 0x1e2a2c, Func Offset: 0x27c
	// Line 1849, Address: 0x1e2a3c, Func Offset: 0x28c
	// Line 1851, Address: 0x1e2a48, Func Offset: 0x298
	// Line 1853, Address: 0x1e2a68, Func Offset: 0x2b8
	// Line 1854, Address: 0x1e2ae0, Func Offset: 0x330
	// Line 1855, Address: 0x1e2b20, Func Offset: 0x370
	// Line 1858, Address: 0x1e2b38, Func Offset: 0x388
	// Line 1859, Address: 0x1e2b3c, Func Offset: 0x38c
	// Line 1858, Address: 0x1e2b44, Func Offset: 0x394
	// Line 1859, Address: 0x1e2b48, Func Offset: 0x398
	// Line 1862, Address: 0x1e2b58, Func Offset: 0x3a8
	// Line 1867, Address: 0x1e2bb0, Func Offset: 0x400
	// Line 1864, Address: 0x1e2bb4, Func Offset: 0x404
	// Line 1865, Address: 0x1e2bb8, Func Offset: 0x408
	// Line 1866, Address: 0x1e2bbc, Func Offset: 0x40c
	// Line 1868, Address: 0x1e2bc0, Func Offset: 0x410
	// Line 1869, Address: 0x1e2bd4, Func Offset: 0x424
	// Func End, Address: 0x1e2c1c, Func Offset: 0x46c
}

// 
// Start address: 0x1e2c20
int ActiveChange(_anon1* wk)
{
	int rtv;
	float ratio;
	unsigned int col;
	int menu_id;
	_sfMenuObjRect rect;
	_anon7 cursor_target;
	GameItem kind_menu;
	GameItem kind_box;
	unsigned int dst_col;
	unsigned int src_col;
	float dst_h;
	float src_h;
	float dst_w;
	float src_w;
	float dst_y;
	float src_y;
	float dst_x;
	float src_x;
	// Line 1935, Address: 0x1e2c20, Func Offset: 0
	// Line 1950, Address: 0x1e2c24, Func Offset: 0x4
	// Line 1935, Address: 0x1e2c28, Func Offset: 0x8
	// Line 1950, Address: 0x1e2c2c, Func Offset: 0xc
	// Line 1935, Address: 0x1e2c30, Func Offset: 0x10
	// Line 1950, Address: 0x1e2c44, Func Offset: 0x24
	// Line 1951, Address: 0x1e2c6c, Func Offset: 0x4c
	// Line 1953, Address: 0x1e2c70, Func Offset: 0x50
	// Line 1954, Address: 0x1e2c78, Func Offset: 0x58
	// Line 1955, Address: 0x1e2c7c, Func Offset: 0x5c
	// Line 1954, Address: 0x1e2c80, Func Offset: 0x60
	// Line 1955, Address: 0x1e2c90, Func Offset: 0x70
	// Line 1956, Address: 0x1e2cac, Func Offset: 0x8c
	// Line 1957, Address: 0x1e2cb0, Func Offset: 0x90
	// Line 1958, Address: 0x1e2cc0, Func Offset: 0xa0
	// Line 1960, Address: 0x1e2cc8, Func Offset: 0xa8
	// Line 1961, Address: 0x1e2cd4, Func Offset: 0xb4
	// Line 1962, Address: 0x1e2cdc, Func Offset: 0xbc
	// Line 1964, Address: 0x1e2ce8, Func Offset: 0xc8
	// Line 1971, Address: 0x1e2cf8, Func Offset: 0xd8
	// Line 1972, Address: 0x1e2d04, Func Offset: 0xe4
	// Line 1974, Address: 0x1e2d10, Func Offset: 0xf0
	// Line 1973, Address: 0x1e2d14, Func Offset: 0xf4
	// Line 1974, Address: 0x1e2d1c, Func Offset: 0xfc
	// Line 1975, Address: 0x1e2d24, Func Offset: 0x104
	// Line 1976, Address: 0x1e2d30, Func Offset: 0x110
	// Line 1980, Address: 0x1e2d38, Func Offset: 0x118
	// Line 1977, Address: 0x1e2d3c, Func Offset: 0x11c
	// Line 1978, Address: 0x1e2d48, Func Offset: 0x128
	// Line 1979, Address: 0x1e2d54, Func Offset: 0x134
	// Line 1980, Address: 0x1e2d58, Func Offset: 0x138
	// Line 1982, Address: 0x1e2d68, Func Offset: 0x148
	// Line 1980, Address: 0x1e2d6c, Func Offset: 0x14c
	// Line 1983, Address: 0x1e2d74, Func Offset: 0x154
	// Line 1980, Address: 0x1e2d78, Func Offset: 0x158
	// Line 1982, Address: 0x1e2d7c, Func Offset: 0x15c
	// Line 1980, Address: 0x1e2d80, Func Offset: 0x160
	// Line 1986, Address: 0x1e2d84, Func Offset: 0x164
	// Line 1982, Address: 0x1e2d88, Func Offset: 0x168
	// Line 1983, Address: 0x1e2d98, Func Offset: 0x178
	// Line 1982, Address: 0x1e2d9c, Func Offset: 0x17c
	// Line 1984, Address: 0x1e2db0, Func Offset: 0x190
	// Line 1983, Address: 0x1e2db8, Func Offset: 0x198
	// Line 1985, Address: 0x1e2dbc, Func Offset: 0x19c
	// Line 1983, Address: 0x1e2dc0, Func Offset: 0x1a0
	// Line 1985, Address: 0x1e2dc4, Func Offset: 0x1a4
	// Line 1983, Address: 0x1e2dc8, Func Offset: 0x1a8
	// Line 1986, Address: 0x1e2dd0, Func Offset: 0x1b0
	// Line 1987, Address: 0x1e2de4, Func Offset: 0x1c4
	// Line 1989, Address: 0x1e2df0, Func Offset: 0x1d0
	// Line 1990, Address: 0x1e2df8, Func Offset: 0x1d8
	// Line 1994, Address: 0x1e2e04, Func Offset: 0x1e4
	// Line 1991, Address: 0x1e2e08, Func Offset: 0x1e8
	// Line 1992, Address: 0x1e2e14, Func Offset: 0x1f4
	// Line 1993, Address: 0x1e2e20, Func Offset: 0x200
	// Line 1994, Address: 0x1e2e24, Func Offset: 0x204
	// Line 1996, Address: 0x1e2e34, Func Offset: 0x214
	// Line 1994, Address: 0x1e2e38, Func Offset: 0x218
	// Line 1997, Address: 0x1e2e40, Func Offset: 0x220
	// Line 1994, Address: 0x1e2e44, Func Offset: 0x224
	// Line 1996, Address: 0x1e2e48, Func Offset: 0x228
	// Line 1994, Address: 0x1e2e4c, Func Offset: 0x22c
	// Line 2000, Address: 0x1e2e50, Func Offset: 0x230
	// Line 1996, Address: 0x1e2e54, Func Offset: 0x234
	// Line 1997, Address: 0x1e2e64, Func Offset: 0x244
	// Line 1996, Address: 0x1e2e68, Func Offset: 0x248
	// Line 1998, Address: 0x1e2e7c, Func Offset: 0x25c
	// Line 1997, Address: 0x1e2e84, Func Offset: 0x264
	// Line 1999, Address: 0x1e2e88, Func Offset: 0x268
	// Line 1997, Address: 0x1e2e8c, Func Offset: 0x26c
	// Line 1999, Address: 0x1e2e90, Func Offset: 0x270
	// Line 1997, Address: 0x1e2e94, Func Offset: 0x274
	// Line 2000, Address: 0x1e2e9c, Func Offset: 0x27c
	// Line 2001, Address: 0x1e2eb4, Func Offset: 0x294
	// Line 2002, Address: 0x1e2eb8, Func Offset: 0x298
	// Line 2005, Address: 0x1e2ecc, Func Offset: 0x2ac
	// Line 2006, Address: 0x1e2ed0, Func Offset: 0x2b0
	// Line 2012, Address: 0x1e2ee8, Func Offset: 0x2c8
	// Line 2007, Address: 0x1e2eec, Func Offset: 0x2cc
	// Line 2008, Address: 0x1e2f04, Func Offset: 0x2e4
	// Line 2007, Address: 0x1e2f0c, Func Offset: 0x2ec
	// Line 2008, Address: 0x1e2f14, Func Offset: 0x2f4
	// Line 2009, Address: 0x1e2f24, Func Offset: 0x304
	// Line 2008, Address: 0x1e2f2c, Func Offset: 0x30c
	// Line 2009, Address: 0x1e2f34, Func Offset: 0x314
	// Line 2010, Address: 0x1e2f44, Func Offset: 0x324
	// Line 2009, Address: 0x1e2f4c, Func Offset: 0x32c
	// Line 2012, Address: 0x1e2f54, Func Offset: 0x334
	// Line 2010, Address: 0x1e2f58, Func Offset: 0x338
	// Line 2012, Address: 0x1e2f5c, Func Offset: 0x33c
	// Line 2010, Address: 0x1e2f60, Func Offset: 0x340
	// Line 2012, Address: 0x1e2f64, Func Offset: 0x344
	// Line 2010, Address: 0x1e2f6c, Func Offset: 0x34c
	// Line 2012, Address: 0x1e2f70, Func Offset: 0x350
	// Line 2013, Address: 0x1e2f78, Func Offset: 0x358
	// Line 2014, Address: 0x1e2f80, Func Offset: 0x360
	// Line 2016, Address: 0x1e2f8c, Func Offset: 0x36c
	// Line 2018, Address: 0x1e2f90, Func Offset: 0x370
	// Line 2020, Address: 0x1e2fa4, Func Offset: 0x384
	// Line 2022, Address: 0x1e2fac, Func Offset: 0x38c
	// Line 2020, Address: 0x1e2fb0, Func Offset: 0x390
	// Line 2022, Address: 0x1e2fbc, Func Offset: 0x39c
	// Line 2024, Address: 0x1e2fd8, Func Offset: 0x3b8
	// Line 2025, Address: 0x1e2fe0, Func Offset: 0x3c0
	// Line 2028, Address: 0x1e2fe8, Func Offset: 0x3c8
	// Line 2031, Address: 0x1e2ff0, Func Offset: 0x3d0
	// Line 2032, Address: 0x1e2ff8, Func Offset: 0x3d8
	// Line 2034, Address: 0x1e3000, Func Offset: 0x3e0
	// Line 2035, Address: 0x1e3008, Func Offset: 0x3e8
	// Line 2037, Address: 0x1e3010, Func Offset: 0x3f0
	// Line 2039, Address: 0x1e3018, Func Offset: 0x3f8
	// Line 2041, Address: 0x1e3024, Func Offset: 0x404
	// Line 2042, Address: 0x1e3028, Func Offset: 0x408
	// Line 2043, Address: 0x1e302c, Func Offset: 0x40c
	// Line 2046, Address: 0x1e3030, Func Offset: 0x410
	// Line 2047, Address: 0x1e303c, Func Offset: 0x41c
	// Line 2049, Address: 0x1e3040, Func Offset: 0x420
	// Line 2047, Address: 0x1e3044, Func Offset: 0x424
	// Line 2050, Address: 0x1e3054, Func Offset: 0x434
	// Func End, Address: 0x1e3070, Func Offset: 0x450
}

// 
// Start address: 0x1e3070
int BoxToPossession(_anon1* wk)
{
	int rtv;
	GameItem kind;
	GameItem next_item;
	GameItem prev_item;
	_IconRing* s;
	int i;
	int result;
	int sel_buf_id;
	int dir;
	int box_sum;
	char tmp_box[8];
	// Line 2054, Address: 0x1e3070, Func Offset: 0
	// Line 2063, Address: 0x1e3074, Func Offset: 0x4
	// Line 2054, Address: 0x1e3078, Func Offset: 0x8
	// Line 2057, Address: 0x1e3098, Func Offset: 0x28
	// Line 2055, Address: 0x1e309c, Func Offset: 0x2c
	// Line 2063, Address: 0x1e30a0, Func Offset: 0x30
	// Line 2057, Address: 0x1e30a4, Func Offset: 0x34
	// Line 2066, Address: 0x1e30a8, Func Offset: 0x38
	// Line 2068, Address: 0x1e30b4, Func Offset: 0x44
	// Line 2070, Address: 0x1e30c0, Func Offset: 0x50
	// Line 2071, Address: 0x1e30ec, Func Offset: 0x7c
	// Line 2072, Address: 0x1e30f0, Func Offset: 0x80
	// Line 2074, Address: 0x1e30f8, Func Offset: 0x88
	// Line 2072, Address: 0x1e30fc, Func Offset: 0x8c
	// Line 2074, Address: 0x1e3100, Func Offset: 0x90
	// Line 2076, Address: 0x1e3108, Func Offset: 0x98
	// Line 2079, Address: 0x1e3114, Func Offset: 0xa4
	// Line 2081, Address: 0x1e3120, Func Offset: 0xb0
	// Line 2084, Address: 0x1e3134, Func Offset: 0xc4
	// Line 2085, Address: 0x1e3138, Func Offset: 0xc8
	// Line 2087, Address: 0x1e3148, Func Offset: 0xd8
	// Line 2088, Address: 0x1e314c, Func Offset: 0xdc
	// Line 2087, Address: 0x1e3150, Func Offset: 0xe0
	// Line 2088, Address: 0x1e3154, Func Offset: 0xe4
	// Line 2091, Address: 0x1e3158, Func Offset: 0xe8
	// Line 2095, Address: 0x1e3170, Func Offset: 0x100
	// Line 2098, Address: 0x1e3178, Func Offset: 0x108
	// Line 2099, Address: 0x1e3180, Func Offset: 0x110
	// Line 2100, Address: 0x1e318c, Func Offset: 0x11c
	// Line 2101, Address: 0x1e3190, Func Offset: 0x120
	// Line 2102, Address: 0x1e3198, Func Offset: 0x128
	// Line 2103, Address: 0x1e31a0, Func Offset: 0x130
	// Line 2104, Address: 0x1e31ac, Func Offset: 0x13c
	// Line 2105, Address: 0x1e31b0, Func Offset: 0x140
	// Line 2104, Address: 0x1e31b8, Func Offset: 0x148
	// Line 2106, Address: 0x1e31bc, Func Offset: 0x14c
	// Line 2109, Address: 0x1e31c8, Func Offset: 0x158
	// Line 2110, Address: 0x1e31cc, Func Offset: 0x15c
	// Line 2112, Address: 0x1e31d0, Func Offset: 0x160
	// Line 2113, Address: 0x1e31d8, Func Offset: 0x168
	// Line 2114, Address: 0x1e31e0, Func Offset: 0x170
	// Line 2116, Address: 0x1e31e4, Func Offset: 0x174
	// Line 2114, Address: 0x1e31ec, Func Offset: 0x17c
	// Line 2115, Address: 0x1e31f0, Func Offset: 0x180
	// Line 2116, Address: 0x1e31f4, Func Offset: 0x184
	// Line 2117, Address: 0x1e31fc, Func Offset: 0x18c
	// Line 2121, Address: 0x1e3210, Func Offset: 0x1a0
	// Line 2122, Address: 0x1e3218, Func Offset: 0x1a8
	// Line 2125, Address: 0x1e3220, Func Offset: 0x1b0
	// Line 2126, Address: 0x1e3234, Func Offset: 0x1c4
	// Line 2127, Address: 0x1e3244, Func Offset: 0x1d4
	// Line 2132, Address: 0x1e3248, Func Offset: 0x1d8
	// Line 2134, Address: 0x1e3258, Func Offset: 0x1e8
	// Line 2136, Address: 0x1e3260, Func Offset: 0x1f0
	// Line 2138, Address: 0x1e326c, Func Offset: 0x1fc
	// Line 2143, Address: 0x1e3280, Func Offset: 0x210
	// Line 2145, Address: 0x1e3288, Func Offset: 0x218
	// Line 2147, Address: 0x1e329c, Func Offset: 0x22c
	// Line 2148, Address: 0x1e32b0, Func Offset: 0x240
	// Line 2150, Address: 0x1e32b4, Func Offset: 0x244
	// Line 2152, Address: 0x1e32c0, Func Offset: 0x250
	// Line 2153, Address: 0x1e32d4, Func Offset: 0x264
	// Line 2158, Address: 0x1e32e4, Func Offset: 0x274
	// Line 2159, Address: 0x1e32f0, Func Offset: 0x280
	// Line 2160, Address: 0x1e32fc, Func Offset: 0x28c
	// Line 2164, Address: 0x1e3318, Func Offset: 0x2a8
	// Line 2166, Address: 0x1e3320, Func Offset: 0x2b0
	// Line 2168, Address: 0x1e332c, Func Offset: 0x2bc
	// Line 2171, Address: 0x1e3350, Func Offset: 0x2e0
	// Line 2173, Address: 0x1e3358, Func Offset: 0x2e8
	// Line 2174, Address: 0x1e335c, Func Offset: 0x2ec
	// Func End, Address: 0x1e3380, Func Offset: 0x310
}

// 
// Start address: 0x1e3380
int miscItemBoxIsBoxToMenuEnd()
{
	// Line 2182, Address: 0x1e3380, Func Offset: 0
	// Line 2183, Address: 0x1e3384, Func Offset: 0x4
	// Func End, Address: 0x1e338c, Func Offset: 0xc
}

// 
// Start address: 0x1e3390
int PossessionToBox(_anon1* wk)
{
	int rtv;
	int i;
	int box_num;
	_IconRing* ir;
	int num;
	_IconRing* ir;
	int sel_buf_id;
	int add_index;
	int total_index;
	int dir;
	int ring_init_flag;
	int item_num;
	int slide_flag;
	unsigned char is_attr_change;
	int menu_id;
	int head_index;
	GameItem kind;
	// Line 2189, Address: 0x1e3390, Func Offset: 0
	// Line 2201, Address: 0x1e3394, Func Offset: 0x4
	// Line 2189, Address: 0x1e3398, Func Offset: 0x8
	// Line 2209, Address: 0x1e339c, Func Offset: 0xc
	// Line 2189, Address: 0x1e33a0, Func Offset: 0x10
	// Line 2201, Address: 0x1e33b8, Func Offset: 0x28
	// Line 2209, Address: 0x1e33bc, Func Offset: 0x2c
	// Line 2211, Address: 0x1e33f0, Func Offset: 0x60
	// Line 2213, Address: 0x1e33f8, Func Offset: 0x68
	// Line 2211, Address: 0x1e33fc, Func Offset: 0x6c
	// Line 2213, Address: 0x1e3400, Func Offset: 0x70
	// Line 2214, Address: 0x1e3408, Func Offset: 0x78
	// Line 2217, Address: 0x1e341c, Func Offset: 0x8c
	// Line 2218, Address: 0x1e3420, Func Offset: 0x90
	// Line 2219, Address: 0x1e3434, Func Offset: 0xa4
	// Line 2221, Address: 0x1e3448, Func Offset: 0xb8
	// Line 2224, Address: 0x1e344c, Func Offset: 0xbc
	// Line 2221, Address: 0x1e3450, Func Offset: 0xc0
	// Line 2223, Address: 0x1e3454, Func Offset: 0xc4
	// Line 2224, Address: 0x1e345c, Func Offset: 0xcc
	// Line 2231, Address: 0x1e34a8, Func Offset: 0x118
	// Line 2229, Address: 0x1e34b0, Func Offset: 0x120
	// Line 2227, Address: 0x1e34b4, Func Offset: 0x124
	// Line 2231, Address: 0x1e34b8, Func Offset: 0x128
	// Line 2229, Address: 0x1e34bc, Func Offset: 0x12c
	// Line 2231, Address: 0x1e34c0, Func Offset: 0x130
	// Line 2232, Address: 0x1e34d0, Func Offset: 0x140
	// Line 2233, Address: 0x1e34d4, Func Offset: 0x144
	// Line 2236, Address: 0x1e34e4, Func Offset: 0x154
	// Line 2234, Address: 0x1e34ec, Func Offset: 0x15c
	// Line 2237, Address: 0x1e3508, Func Offset: 0x178
	// Line 2240, Address: 0x1e3514, Func Offset: 0x184
	// Line 2241, Address: 0x1e3518, Func Offset: 0x188
	// Line 2243, Address: 0x1e3540, Func Offset: 0x1b0
	// Line 2244, Address: 0x1e354c, Func Offset: 0x1bc
	// Line 2249, Address: 0x1e3580, Func Offset: 0x1f0
	// Line 2250, Address: 0x1e3588, Func Offset: 0x1f8
	// Line 2252, Address: 0x1e35a4, Func Offset: 0x214
	// Line 2254, Address: 0x1e35b0, Func Offset: 0x220
	// Line 2252, Address: 0x1e35b4, Func Offset: 0x224
	// Line 2254, Address: 0x1e35b8, Func Offset: 0x228
	// Line 2252, Address: 0x1e35c0, Func Offset: 0x230
	// Line 2255, Address: 0x1e35cc, Func Offset: 0x23c
	// Line 2256, Address: 0x1e35e0, Func Offset: 0x250
	// Line 2258, Address: 0x1e35e4, Func Offset: 0x254
	// Line 2260, Address: 0x1e35f0, Func Offset: 0x260
	// Line 2261, Address: 0x1e361c, Func Offset: 0x28c
	// Line 2262, Address: 0x1e362c, Func Offset: 0x29c
	// Line 2263, Address: 0x1e3634, Func Offset: 0x2a4
	// Line 2265, Address: 0x1e363c, Func Offset: 0x2ac
	// Line 2263, Address: 0x1e3640, Func Offset: 0x2b0
	// Line 2265, Address: 0x1e3644, Func Offset: 0x2b4
	// Line 2267, Address: 0x1e3668, Func Offset: 0x2d8
	// Line 2270, Address: 0x1e367c, Func Offset: 0x2ec
	// Line 2271, Address: 0x1e3680, Func Offset: 0x2f0
	// Line 2272, Address: 0x1e3684, Func Offset: 0x2f4
	// Line 2275, Address: 0x1e3690, Func Offset: 0x300
	// Line 2276, Address: 0x1e369c, Func Offset: 0x30c
	// Line 2278, Address: 0x1e36a0, Func Offset: 0x310
	// Line 2279, Address: 0x1e36b0, Func Offset: 0x320
	// Line 2280, Address: 0x1e36c0, Func Offset: 0x330
	// Line 2282, Address: 0x1e36c4, Func Offset: 0x334
	// Line 2285, Address: 0x1e36c8, Func Offset: 0x338
	// Line 2287, Address: 0x1e36d4, Func Offset: 0x344
	// Line 2292, Address: 0x1e36e8, Func Offset: 0x358
	// Line 2293, Address: 0x1e36f8, Func Offset: 0x368
	// Line 2294, Address: 0x1e3700, Func Offset: 0x370
	// Line 2295, Address: 0x1e370c, Func Offset: 0x37c
	// Line 2297, Address: 0x1e3718, Func Offset: 0x388
	// Line 2298, Address: 0x1e3724, Func Offset: 0x394
	// Line 2299, Address: 0x1e3728, Func Offset: 0x398
	// Line 2300, Address: 0x1e3734, Func Offset: 0x3a4
	// Line 2301, Address: 0x1e3740, Func Offset: 0x3b0
	// Line 2302, Address: 0x1e3750, Func Offset: 0x3c0
	// Line 2307, Address: 0x1e3758, Func Offset: 0x3c8
	// Line 2311, Address: 0x1e3760, Func Offset: 0x3d0
	// Line 2312, Address: 0x1e3780, Func Offset: 0x3f0
	// Line 2313, Address: 0x1e3790, Func Offset: 0x400
	// Line 2316, Address: 0x1e3794, Func Offset: 0x404
	// Line 2317, Address: 0x1e3798, Func Offset: 0x408
	// Line 2319, Address: 0x1e37a8, Func Offset: 0x418
	// Line 2320, Address: 0x1e37b0, Func Offset: 0x420
	// Line 2321, Address: 0x1e37c0, Func Offset: 0x430
	// Line 2323, Address: 0x1e37c4, Func Offset: 0x434
	// Line 2325, Address: 0x1e37d0, Func Offset: 0x440
	// Line 2324, Address: 0x1e37d4, Func Offset: 0x444
	// Line 2327, Address: 0x1e37d8, Func Offset: 0x448
	// Line 2328, Address: 0x1e37e0, Func Offset: 0x450
	// Line 2329, Address: 0x1e37ec, Func Offset: 0x45c
	// Line 2332, Address: 0x1e37f0, Func Offset: 0x460
	// Line 2336, Address: 0x1e3800, Func Offset: 0x470
	// Line 2337, Address: 0x1e3808, Func Offset: 0x478
	// Line 2338, Address: 0x1e381c, Func Offset: 0x48c
	// Line 2337, Address: 0x1e3820, Func Offset: 0x490
	// Line 2338, Address: 0x1e3824, Func Offset: 0x494
	// Line 2341, Address: 0x1e3844, Func Offset: 0x4b4
	// Line 2342, Address: 0x1e3850, Func Offset: 0x4c0
	// Line 2344, Address: 0x1e385c, Func Offset: 0x4cc
	// Line 2345, Address: 0x1e386c, Func Offset: 0x4dc
	// Line 2347, Address: 0x1e387c, Func Offset: 0x4ec
	// Line 2348, Address: 0x1e3888, Func Offset: 0x4f8
	// Line 2349, Address: 0x1e388c, Func Offset: 0x4fc
	// Line 2351, Address: 0x1e3898, Func Offset: 0x508
	// Line 2356, Address: 0x1e389c, Func Offset: 0x50c
	// Line 2357, Address: 0x1e38a8, Func Offset: 0x518
	// Line 2358, Address: 0x1e38b4, Func Offset: 0x524
	// Line 2362, Address: 0x1e38d0, Func Offset: 0x540
	// Line 2363, Address: 0x1e38d4, Func Offset: 0x544
	// Func End, Address: 0x1e38f4, Func Offset: 0x564
}

// 
// Start address: 0x1e3900
void ItemAttrChange(_anon1* wk, int cnt)
{
	float ratio;
	unsigned int dst_col;
	unsigned int src_col;
	// Line 2372, Address: 0x1e3904, Func Offset: 0x4
	// Line 2375, Address: 0x1e3910, Func Offset: 0x10
	// Line 2377, Address: 0x1e391c, Func Offset: 0x1c
	// Line 2378, Address: 0x1e3930, Func Offset: 0x30
	// Line 2379, Address: 0x1e3938, Func Offset: 0x38
	// Line 2380, Address: 0x1e3944, Func Offset: 0x44
	// Line 2381, Address: 0x1e3950, Func Offset: 0x50
	// Line 2382, Address: 0x1e3958, Func Offset: 0x58
	// Line 2384, Address: 0x1e3960, Func Offset: 0x60
	// Line 2385, Address: 0x1e3970, Func Offset: 0x70
	// Line 2387, Address: 0x1e3978, Func Offset: 0x78
	// Line 2388, Address: 0x1e3980, Func Offset: 0x80
	// Line 2390, Address: 0x1e398c, Func Offset: 0x8c
	// Line 2392, Address: 0x1e3990, Func Offset: 0x90
	// Line 2390, Address: 0x1e3994, Func Offset: 0x94
	// Line 2392, Address: 0x1e3998, Func Offset: 0x98
	// Line 2397, Address: 0x1e39a0, Func Offset: 0xa0
	// Line 2398, Address: 0x1e39c0, Func Offset: 0xc0
	// Func End, Address: 0x1e39d0, Func Offset: 0xd0
}

// 
// Start address: 0x1e39d0
int is_handlestep_switch_ok()
{
	// Line 2404, Address: 0x1e39d0, Func Offset: 0
	// Func End, Address: 0x1e39d8, Func Offset: 0x8
}

// 
// Start address: 0x1e39e0
int ItemmenuHandle(_anon1* wk)
{
	int rtv;
	int menu_id;
	_anon7 rect;
	GameItem kind;
	unsigned int col;
	GameItem kind;
	EileenArmsTypeNo arm;
	GameItem eil_weapon;
	int poss_n;
	int pre_id;
	// Line 2409, Address: 0x1e39e0, Func Offset: 0
	// Line 2411, Address: 0x1e39fc, Func Offset: 0x1c
	// Line 2417, Address: 0x1e3a08, Func Offset: 0x28
	// Line 2421, Address: 0x1e3a18, Func Offset: 0x38
	// Line 2418, Address: 0x1e3a1c, Func Offset: 0x3c
	// Line 2419, Address: 0x1e3a20, Func Offset: 0x40
	// Line 2421, Address: 0x1e3a24, Func Offset: 0x44
	// Line 2423, Address: 0x1e3a2c, Func Offset: 0x4c
	// Line 2424, Address: 0x1e3a30, Func Offset: 0x50
	// Line 2425, Address: 0x1e3a38, Func Offset: 0x58
	// Line 2426, Address: 0x1e3a48, Func Offset: 0x68
	// Line 2428, Address: 0x1e3a50, Func Offset: 0x70
	// Line 2429, Address: 0x1e3a64, Func Offset: 0x84
	// Line 2431, Address: 0x1e3a70, Func Offset: 0x90
	// Line 2433, Address: 0x1e3a78, Func Offset: 0x98
	// Line 2435, Address: 0x1e3a80, Func Offset: 0xa0
	// Line 2437, Address: 0x1e3a88, Func Offset: 0xa8
	// Line 2438, Address: 0x1e3a98, Func Offset: 0xb8
	// Line 2439, Address: 0x1e3aa0, Func Offset: 0xc0
	// Line 2441, Address: 0x1e3aa8, Func Offset: 0xc8
	// Line 2443, Address: 0x1e3ab4, Func Offset: 0xd4
	// Line 2445, Address: 0x1e3abc, Func Offset: 0xdc
	// Line 2450, Address: 0x1e3ac8, Func Offset: 0xe8
	// Line 2452, Address: 0x1e3ad0, Func Offset: 0xf0
	// Line 2453, Address: 0x1e3ad8, Func Offset: 0xf8
	// Line 2455, Address: 0x1e3ae0, Func Offset: 0x100
	// Line 2459, Address: 0x1e3af8, Func Offset: 0x118
	// Line 2461, Address: 0x1e3b00, Func Offset: 0x120
	// Line 2463, Address: 0x1e3b08, Func Offset: 0x128
	// Line 2472, Address: 0x1e3b34, Func Offset: 0x154
	// Line 2473, Address: 0x1e3b3c, Func Offset: 0x15c
	// Line 2475, Address: 0x1e3b40, Func Offset: 0x160
	// Line 2479, Address: 0x1e3b44, Func Offset: 0x164
	// Line 2480, Address: 0x1e3b48, Func Offset: 0x168
	// Line 2482, Address: 0x1e3b50, Func Offset: 0x170
	// Line 2483, Address: 0x1e3b6c, Func Offset: 0x18c
	// Line 2486, Address: 0x1e3b78, Func Offset: 0x198
	// Line 2483, Address: 0x1e3b7c, Func Offset: 0x19c
	// Line 2486, Address: 0x1e3b80, Func Offset: 0x1a0
	// Line 2483, Address: 0x1e3b84, Func Offset: 0x1a4
	// Line 2484, Address: 0x1e3b88, Func Offset: 0x1a8
	// Line 2485, Address: 0x1e3b90, Func Offset: 0x1b0
	// Line 2486, Address: 0x1e3b94, Func Offset: 0x1b4
	// Line 2488, Address: 0x1e3b9c, Func Offset: 0x1bc
	// Line 2489, Address: 0x1e3ba0, Func Offset: 0x1c0
	// Func End, Address: 0x1e3bbc, Func Offset: 0x1dc
}

// 
// Start address: 0x1e3bc0
int HandleStepFunc(_anon1* wk, unsigned int pad_cnt)
{
	int rtv;
	unsigned int trig;
	unsigned int rep;
	unsigned int pad;
	GameItem kind;
	unsigned int col;
	_anon7 rect;
	int menu_id;
	int id;
	int init_flag;
	int pre_menu_id;
	// Line 2493, Address: 0x1e3bc0, Func Offset: 0
	// Line 2495, Address: 0x1e3be4, Func Offset: 0x24
	// Line 2493, Address: 0x1e3be8, Func Offset: 0x28
	// Line 2494, Address: 0x1e3bec, Func Offset: 0x2c
	// Line 2495, Address: 0x1e3bf0, Func Offset: 0x30
	// Line 2496, Address: 0x1e3bfc, Func Offset: 0x3c
	// Line 2497, Address: 0x1e3c08, Func Offset: 0x48
	// Line 2500, Address: 0x1e3c14, Func Offset: 0x54
	// Line 2505, Address: 0x1e3c1c, Func Offset: 0x5c
	// Line 2500, Address: 0x1e3c20, Func Offset: 0x60
	// Line 2505, Address: 0x1e3c24, Func Offset: 0x64
	// Line 2500, Address: 0x1e3c28, Func Offset: 0x68
	// Line 2505, Address: 0x1e3c2c, Func Offset: 0x6c
	// Line 2507, Address: 0x1e3c3c, Func Offset: 0x7c
	// Line 2509, Address: 0x1e3c48, Func Offset: 0x88
	// Line 2511, Address: 0x1e3c50, Func Offset: 0x90
	// Line 2513, Address: 0x1e3c70, Func Offset: 0xb0
	// Line 2515, Address: 0x1e3c74, Func Offset: 0xb4
	// Line 2513, Address: 0x1e3c78, Func Offset: 0xb8
	// Line 2515, Address: 0x1e3c7c, Func Offset: 0xbc
	// Line 2517, Address: 0x1e3c8c, Func Offset: 0xcc
	// Line 2518, Address: 0x1e3c94, Func Offset: 0xd4
	// Line 2522, Address: 0x1e3ca0, Func Offset: 0xe0
	// Line 2523, Address: 0x1e3ca8, Func Offset: 0xe8
	// Line 2525, Address: 0x1e3cb0, Func Offset: 0xf0
	// Line 2528, Address: 0x1e3cb4, Func Offset: 0xf4
	// Line 2529, Address: 0x1e3cc0, Func Offset: 0x100
	// Line 2532, Address: 0x1e3ccc, Func Offset: 0x10c
	// Line 2533, Address: 0x1e3cd8, Func Offset: 0x118
	// Line 2535, Address: 0x1e3ce4, Func Offset: 0x124
	// Line 2537, Address: 0x1e3cec, Func Offset: 0x12c
	// Line 2535, Address: 0x1e3cf0, Func Offset: 0x130
	// Line 2537, Address: 0x1e3cf4, Func Offset: 0x134
	// Line 2539, Address: 0x1e3cfc, Func Offset: 0x13c
	// Line 2540, Address: 0x1e3d08, Func Offset: 0x148
	// Line 2541, Address: 0x1e3d14, Func Offset: 0x154
	// Line 2543, Address: 0x1e3d18, Func Offset: 0x158
	// Line 2545, Address: 0x1e3d1c, Func Offset: 0x15c
	// Line 2546, Address: 0x1e3d28, Func Offset: 0x168
	// Line 2547, Address: 0x1e3d30, Func Offset: 0x170
	// Line 2549, Address: 0x1e3d3c, Func Offset: 0x17c
	// Line 2551, Address: 0x1e3d40, Func Offset: 0x180
	// Line 2552, Address: 0x1e3d50, Func Offset: 0x190
	// Line 2553, Address: 0x1e3d58, Func Offset: 0x198
	// Line 2554, Address: 0x1e3d64, Func Offset: 0x1a4
	// Line 2556, Address: 0x1e3d6c, Func Offset: 0x1ac
	// Line 2557, Address: 0x1e3d70, Func Offset: 0x1b0
	// Line 2558, Address: 0x1e3d78, Func Offset: 0x1b8
	// Line 2559, Address: 0x1e3d84, Func Offset: 0x1c4
	// Line 2563, Address: 0x1e3d94, Func Offset: 0x1d4
	// Line 2560, Address: 0x1e3d98, Func Offset: 0x1d8
	// Line 2563, Address: 0x1e3d9c, Func Offset: 0x1dc
	// Line 2562, Address: 0x1e3da4, Func Offset: 0x1e4
	// Line 2565, Address: 0x1e3db0, Func Offset: 0x1f0
	// Line 2568, Address: 0x1e3dc0, Func Offset: 0x200
	// Line 2566, Address: 0x1e3dc4, Func Offset: 0x204
	// Line 2568, Address: 0x1e3dc8, Func Offset: 0x208
	// Line 2571, Address: 0x1e3dd0, Func Offset: 0x210
	// Line 2573, Address: 0x1e3ddc, Func Offset: 0x21c
	// Line 2577, Address: 0x1e3dec, Func Offset: 0x22c
	// Line 2579, Address: 0x1e3df8, Func Offset: 0x238
	// Line 2580, Address: 0x1e3e08, Func Offset: 0x248
	// Line 2582, Address: 0x1e3e0c, Func Offset: 0x24c
	// Line 2583, Address: 0x1e3e10, Func Offset: 0x250
	// Line 2585, Address: 0x1e3e1c, Func Offset: 0x25c
	// Line 2588, Address: 0x1e3e20, Func Offset: 0x260
	// Line 2589, Address: 0x1e3e2c, Func Offset: 0x26c
	// Line 2590, Address: 0x1e3e34, Func Offset: 0x274
	// Line 2591, Address: 0x1e3e3c, Func Offset: 0x27c
	// Line 2594, Address: 0x1e3e4c, Func Offset: 0x28c
	// Line 2596, Address: 0x1e3e50, Func Offset: 0x290
	// Line 2597, Address: 0x1e3e58, Func Offset: 0x298
	// Line 2598, Address: 0x1e3e60, Func Offset: 0x2a0
	// Line 2602, Address: 0x1e3e64, Func Offset: 0x2a4
	// Line 2598, Address: 0x1e3e68, Func Offset: 0x2a8
	// Line 2602, Address: 0x1e3e6c, Func Offset: 0x2ac
	// Line 2599, Address: 0x1e3e74, Func Offset: 0x2b4
	// Line 2603, Address: 0x1e3e7c, Func Offset: 0x2bc
	// Line 2604, Address: 0x1e3e80, Func Offset: 0x2c0
	// Line 2607, Address: 0x1e3e88, Func Offset: 0x2c8
	// Line 2604, Address: 0x1e3e8c, Func Offset: 0x2cc
	// Line 2607, Address: 0x1e3e98, Func Offset: 0x2d8
	// Line 2609, Address: 0x1e3ea8, Func Offset: 0x2e8
	// Line 2610, Address: 0x1e3eac, Func Offset: 0x2ec
	// Func End, Address: 0x1e3ed4, Func Offset: 0x314
}

// 
// Start address: 0x1e3ee0
int MoveStepFunc(_anon1* wk, int cnt)
{
	int rtv;
	// Line 2614, Address: 0x1e3ee0, Func Offset: 0
	// Line 2617, Address: 0x1e3ee4, Func Offset: 0x4
	// Line 2614, Address: 0x1e3ee8, Func Offset: 0x8
	// Line 2617, Address: 0x1e3eec, Func Offset: 0xc
	// Line 2614, Address: 0x1e3ef0, Func Offset: 0x10
	// Line 2617, Address: 0x1e3f04, Func Offset: 0x24
	// Line 2621, Address: 0x1e3f20, Func Offset: 0x40
	// Line 2626, Address: 0x1e3f28, Func Offset: 0x48
	// Line 2629, Address: 0x1e3f3c, Func Offset: 0x5c
	// Line 2631, Address: 0x1e3f40, Func Offset: 0x60
	// Line 2633, Address: 0x1e3f58, Func Offset: 0x78
	// Line 2635, Address: 0x1e3f6c, Func Offset: 0x8c
	// Line 2636, Address: 0x1e3f80, Func Offset: 0xa0
	// Line 2639, Address: 0x1e3f8c, Func Offset: 0xac
	// Line 2642, Address: 0x1e3f98, Func Offset: 0xb8
	// Line 2643, Address: 0x1e3fa0, Func Offset: 0xc0
	// Line 2646, Address: 0x1e3fa4, Func Offset: 0xc4
	// Line 2648, Address: 0x1e3fa8, Func Offset: 0xc8
	// Line 2649, Address: 0x1e3fac, Func Offset: 0xcc
	// Func End, Address: 0x1e3fc4, Func Offset: 0xe4
}

// 
// Start address: 0x1e3fd0
int AttrChgStepFunc(_anon1* wk)
{
	int rtv;
	// Line 2653, Address: 0x1e3fd0, Func Offset: 0
	// Line 2656, Address: 0x1e3fd4, Func Offset: 0x4
	// Line 2653, Address: 0x1e3fd8, Func Offset: 0x8
	// Line 2656, Address: 0x1e3fdc, Func Offset: 0xc
	// Line 2653, Address: 0x1e3fe0, Func Offset: 0x10
	// Line 2656, Address: 0x1e3fec, Func Offset: 0x1c
	// Line 2658, Address: 0x1e4008, Func Offset: 0x38
	// Line 2659, Address: 0x1e4014, Func Offset: 0x44
	// Line 2660, Address: 0x1e401c, Func Offset: 0x4c
	// Line 2662, Address: 0x1e4028, Func Offset: 0x58
	// Line 2664, Address: 0x1e4038, Func Offset: 0x68
	// Line 2666, Address: 0x1e403c, Func Offset: 0x6c
	// Line 2667, Address: 0x1e4048, Func Offset: 0x78
	// Line 2670, Address: 0x1e405c, Func Offset: 0x8c
	// Line 2671, Address: 0x1e4060, Func Offset: 0x90
	// Line 2673, Address: 0x1e4074, Func Offset: 0xa4
	// Line 2676, Address: 0x1e407c, Func Offset: 0xac
	// Line 2678, Address: 0x1e4084, Func Offset: 0xb4
	// Line 2680, Address: 0x1e4088, Func Offset: 0xb8
	// Line 2683, Address: 0x1e4098, Func Offset: 0xc8
	// Line 2685, Address: 0x1e40a4, Func Offset: 0xd4
	// Line 2689, Address: 0x1e40b8, Func Offset: 0xe8
	// Line 2690, Address: 0x1e40bc, Func Offset: 0xec
	// Func End, Address: 0x1e40d0, Func Offset: 0x100
}

// 
// Start address: 0x1e40d0
void miscItemBoxHandle(_anon1* wk)
{
	unsigned int trig;
	unsigned int pad;
	unsigned int pad_cnt;
	// Line 2694, Address: 0x1e40d0, Func Offset: 0
	// Line 2696, Address: 0x1e40e8, Func Offset: 0x18
	// Line 2697, Address: 0x1e40f4, Func Offset: 0x24
	// Line 2698, Address: 0x1e40fc, Func Offset: 0x2c
	// Line 2703, Address: 0x1e4104, Func Offset: 0x34
	// Line 2705, Address: 0x1e410c, Func Offset: 0x3c
	// Line 2707, Address: 0x1e4114, Func Offset: 0x44
	// Line 2709, Address: 0x1e411c, Func Offset: 0x4c
	// Line 2710, Address: 0x1e4128, Func Offset: 0x58
	// Line 2711, Address: 0x1e4134, Func Offset: 0x64
	// Line 2712, Address: 0x1e4144, Func Offset: 0x74
	// Line 2713, Address: 0x1e4148, Func Offset: 0x78
	// Line 2714, Address: 0x1e4174, Func Offset: 0xa4
	// Line 2715, Address: 0x1e4178, Func Offset: 0xa8
	// Line 2716, Address: 0x1e4188, Func Offset: 0xb8
	// Line 2718, Address: 0x1e4194, Func Offset: 0xc4
	// Line 2719, Address: 0x1e419c, Func Offset: 0xcc
	// Line 2720, Address: 0x1e41a0, Func Offset: 0xd0
	// Line 2721, Address: 0x1e41d4, Func Offset: 0x104
	// Line 2722, Address: 0x1e41f0, Func Offset: 0x120
	// Line 2723, Address: 0x1e4208, Func Offset: 0x138
	// Line 2724, Address: 0x1e4220, Func Offset: 0x150
	// Line 2725, Address: 0x1e4238, Func Offset: 0x168
	// Line 2726, Address: 0x1e4250, Func Offset: 0x180
	// Line 2727, Address: 0x1e4268, Func Offset: 0x198
	// Line 2729, Address: 0x1e4278, Func Offset: 0x1a8
	// Line 2732, Address: 0x1e4280, Func Offset: 0x1b0
	// Line 2733, Address: 0x1e4294, Func Offset: 0x1c4
	// Line 2735, Address: 0x1e42a0, Func Offset: 0x1d0
	// Line 2737, Address: 0x1e42a8, Func Offset: 0x1d8
	// Line 2738, Address: 0x1e42bc, Func Offset: 0x1ec
	// Line 2740, Address: 0x1e42c8, Func Offset: 0x1f8
	// Line 2743, Address: 0x1e42d0, Func Offset: 0x200
	// Line 2744, Address: 0x1e42e0, Func Offset: 0x210
	// Line 2746, Address: 0x1e42ec, Func Offset: 0x21c
	// Line 2747, Address: 0x1e42f4, Func Offset: 0x224
	// Line 2748, Address: 0x1e42f8, Func Offset: 0x228
	// Line 2749, Address: 0x1e4308, Func Offset: 0x238
	// Line 2751, Address: 0x1e4314, Func Offset: 0x244
	// Line 2752, Address: 0x1e431c, Func Offset: 0x24c
	// Line 2753, Address: 0x1e4320, Func Offset: 0x250
	// Line 2754, Address: 0x1e4330, Func Offset: 0x260
	// Line 2756, Address: 0x1e433c, Func Offset: 0x26c
	// Line 2757, Address: 0x1e4344, Func Offset: 0x274
	// Line 2758, Address: 0x1e4348, Func Offset: 0x278
	// Line 2759, Address: 0x1e4358, Func Offset: 0x288
	// Line 2761, Address: 0x1e4364, Func Offset: 0x294
	// Line 2762, Address: 0x1e436c, Func Offset: 0x29c
	// Line 2763, Address: 0x1e4370, Func Offset: 0x2a0
	// Line 2764, Address: 0x1e4380, Func Offset: 0x2b0
	// Line 2768, Address: 0x1e4388, Func Offset: 0x2b8
	// Func End, Address: 0x1e43a0, Func Offset: 0x2d0
}

// 
// Start address: 0x1e43a0
void IconDraw()
{
	int i;
	_anon3* img;
	// Line 2772, Address: 0x1e43a0, Func Offset: 0
	// Line 2777, Address: 0x1e43a4, Func Offset: 0x4
	// Line 2772, Address: 0x1e43a8, Func Offset: 0x8
	// Line 2777, Address: 0x1e43ac, Func Offset: 0xc
	// Line 2772, Address: 0x1e43b0, Func Offset: 0x10
	// Line 2777, Address: 0x1e43b4, Func Offset: 0x14
	// Line 2779, Address: 0x1e43bc, Func Offset: 0x1c
	// Line 2780, Address: 0x1e43c0, Func Offset: 0x20
	// Line 2779, Address: 0x1e43c4, Func Offset: 0x24
	// Line 2781, Address: 0x1e43c8, Func Offset: 0x28
	// Line 2783, Address: 0x1e43d0, Func Offset: 0x30
	// Line 2782, Address: 0x1e43d4, Func Offset: 0x34
	// Line 2783, Address: 0x1e43d8, Func Offset: 0x38
	// Line 2784, Address: 0x1e43e4, Func Offset: 0x44
	// Func End, Address: 0x1e43f8, Func Offset: 0x58
}

// 
// Start address: 0x1e4400
void miscItemDrawParts(_anon1* wk)
{
	int index;
	_anon5* tex;
	unsigned int cbp;
	_anon18 img;
	int flag;
	// Line 2843, Address: 0x1e4400, Func Offset: 0
	// Line 2846, Address: 0x1e4414, Func Offset: 0x14
	// Line 2847, Address: 0x1e4428, Func Offset: 0x28
	// Line 2848, Address: 0x1e443c, Func Offset: 0x3c
	// Line 2851, Address: 0x1e4450, Func Offset: 0x50
	// Line 2852, Address: 0x1e4460, Func Offset: 0x60
	// Line 2853, Address: 0x1e446c, Func Offset: 0x6c
	// Line 2854, Address: 0x1e4480, Func Offset: 0x80
	// Line 2855, Address: 0x1e4494, Func Offset: 0x94
	// Line 2856, Address: 0x1e44b4, Func Offset: 0xb4
	// Line 2858, Address: 0x1e44c8, Func Offset: 0xc8
	// Line 2859, Address: 0x1e44e4, Func Offset: 0xe4
	// Line 2861, Address: 0x1e44fc, Func Offset: 0xfc
	// Line 2863, Address: 0x1e4504, Func Offset: 0x104
	// Line 2865, Address: 0x1e450c, Func Offset: 0x10c
	// Line 2867, Address: 0x1e4518, Func Offset: 0x118
	// Line 2870, Address: 0x1e4530, Func Offset: 0x130
	// Line 2873, Address: 0x1e4554, Func Offset: 0x154
	// Line 2874, Address: 0x1e4574, Func Offset: 0x174
	// Line 2876, Address: 0x1e4584, Func Offset: 0x184
	// Line 2877, Address: 0x1e45ac, Func Offset: 0x1ac
	// Line 2880, Address: 0x1e45c0, Func Offset: 0x1c0
	// Line 2881, Address: 0x1e45e8, Func Offset: 0x1e8
	// Line 2883, Address: 0x1e45fc, Func Offset: 0x1fc
	// Line 2884, Address: 0x1e4604, Func Offset: 0x204
	// Line 2887, Address: 0x1e4610, Func Offset: 0x210
	// Line 2890, Address: 0x1e462c, Func Offset: 0x22c
	// Line 2893, Address: 0x1e4654, Func Offset: 0x254
	// Line 2894, Address: 0x1e4674, Func Offset: 0x274
	// Line 2896, Address: 0x1e4684, Func Offset: 0x284
	// Line 2897, Address: 0x1e46ac, Func Offset: 0x2ac
	// Line 2900, Address: 0x1e46c0, Func Offset: 0x2c0
	// Line 2901, Address: 0x1e46e8, Func Offset: 0x2e8
	// Line 2903, Address: 0x1e46fc, Func Offset: 0x2fc
	// Line 2904, Address: 0x1e4704, Func Offset: 0x304
	// Line 2906, Address: 0x1e4708, Func Offset: 0x308
	// Line 2908, Address: 0x1e4714, Func Offset: 0x314
	// Line 2911, Address: 0x1e472c, Func Offset: 0x32c
	// Line 2914, Address: 0x1e4754, Func Offset: 0x354
	// Line 2915, Address: 0x1e4774, Func Offset: 0x374
	// Line 2917, Address: 0x1e4784, Func Offset: 0x384
	// Line 2918, Address: 0x1e47ac, Func Offset: 0x3ac
	// Line 2922, Address: 0x1e47c0, Func Offset: 0x3c0
	// Line 2923, Address: 0x1e47e8, Func Offset: 0x3e8
	// Line 2926, Address: 0x1e47fc, Func Offset: 0x3fc
	// Line 2927, Address: 0x1e4804, Func Offset: 0x404
	// Line 2930, Address: 0x1e4810, Func Offset: 0x410
	// Line 2931, Address: 0x1e4838, Func Offset: 0x438
	// Line 2935, Address: 0x1e484c, Func Offset: 0x44c
	// Line 2938, Address: 0x1e4868, Func Offset: 0x468
	// Line 2941, Address: 0x1e4890, Func Offset: 0x490
	// Line 2942, Address: 0x1e48b0, Func Offset: 0x4b0
	// Line 2944, Address: 0x1e48c0, Func Offset: 0x4c0
	// Line 2945, Address: 0x1e48e8, Func Offset: 0x4e8
	// Line 2948, Address: 0x1e48fc, Func Offset: 0x4fc
	// Line 2949, Address: 0x1e4904, Func Offset: 0x504
	// Line 2952, Address: 0x1e4908, Func Offset: 0x508
	// Func End, Address: 0x1e4920, Func Offset: 0x520
}

// 
// Start address: 0x1e4920
void miscItemBoxQuit(_anon1* wk)
{
	int menu_id;
	GameItem kind;
	_sfMenuObjRect rect;
	_anon7 dst_pos;
	// Line 2956, Address: 0x1e4920, Func Offset: 0
	// Line 2962, Address: 0x1e4934, Func Offset: 0x14
	// Line 2963, Address: 0x1e4940, Func Offset: 0x20
	// Line 2964, Address: 0x1e494c, Func Offset: 0x2c
	// Line 2966, Address: 0x1e4958, Func Offset: 0x38
	// Line 2964, Address: 0x1e495c, Func Offset: 0x3c
	// Line 2971, Address: 0x1e4964, Func Offset: 0x44
	// Line 2967, Address: 0x1e4968, Func Offset: 0x48
	// Line 2966, Address: 0x1e496c, Func Offset: 0x4c
	// Line 2967, Address: 0x1e497c, Func Offset: 0x5c
	// Line 2966, Address: 0x1e4980, Func Offset: 0x60
	// Line 2968, Address: 0x1e4994, Func Offset: 0x74
	// Line 2967, Address: 0x1e4998, Func Offset: 0x78
	// Line 2969, Address: 0x1e49a4, Func Offset: 0x84
	// Line 2971, Address: 0x1e49a8, Func Offset: 0x88
	// Line 2972, Address: 0x1e49c0, Func Offset: 0xa0
	// Line 2974, Address: 0x1e49cc, Func Offset: 0xac
	// Line 2975, Address: 0x1e49d4, Func Offset: 0xb4
	// Func End, Address: 0x1e49ec, Func Offset: 0xcc
}

// 
// Start address: 0x1e49f0
int GetFrameLength(_anon6* pos)
{
	int rtv;
	int x;
	int y;
	// Line 2981, Address: 0x1e49f0, Func Offset: 0
	// Line 2985, Address: 0x1e49f4, Func Offset: 0x4
	// Line 2982, Address: 0x1e49f8, Func Offset: 0x8
	// Line 2985, Address: 0x1e49fc, Func Offset: 0xc
	// Line 2986, Address: 0x1e4a10, Func Offset: 0x20
	// Line 2990, Address: 0x1e4a18, Func Offset: 0x28
	// Line 2992, Address: 0x1e4a24, Func Offset: 0x34
	// Line 2993, Address: 0x1e4a54, Func Offset: 0x64
	// Line 2992, Address: 0x1e4a58, Func Offset: 0x68
	// Line 2994, Address: 0x1e4a5c, Func Offset: 0x6c
	// Line 2993, Address: 0x1e4a60, Func Offset: 0x70
	// Line 2994, Address: 0x1e4a64, Func Offset: 0x74
	// Line 2997, Address: 0x1e4a78, Func Offset: 0x88
	// Func End, Address: 0x1e4a80, Func Offset: 0x90
}

// 
// Start address: 0x1e4a80
void DrawFrame0(_anon6* pos, int max_length, float ratio)
{
	float x;
	float y;
	float len;
	float cur_max;
	float add_len;
	float xx;
	float yy;
	float tmp;
	_anon17 frame;
	char flag;
	// Line 3001, Address: 0x1e4a80, Func Offset: 0
	// Line 3002, Address: 0x1e4aa8, Func Offset: 0x28
	// Line 3003, Address: 0x1e4aac, Func Offset: 0x2c
	// Line 3007, Address: 0x1e4ab0, Func Offset: 0x30
	// Line 3002, Address: 0x1e4ab4, Func Offset: 0x34
	// Line 3009, Address: 0x1e4ab8, Func Offset: 0x38
	// Line 3007, Address: 0x1e4abc, Func Offset: 0x3c
	// Line 3009, Address: 0x1e4ac0, Func Offset: 0x40
	// Line 3003, Address: 0x1e4ac4, Func Offset: 0x44
	// Line 3009, Address: 0x1e4ad0, Func Offset: 0x50
	// Line 3002, Address: 0x1e4ad4, Func Offset: 0x54
	// Line 3009, Address: 0x1e4ad8, Func Offset: 0x58
	// Line 3003, Address: 0x1e4adc, Func Offset: 0x5c
	// Line 3006, Address: 0x1e4ae0, Func Offset: 0x60
	// Line 3009, Address: 0x1e4ae4, Func Offset: 0x64
	// Line 3010, Address: 0x1e4aec, Func Offset: 0x6c
	// Line 3011, Address: 0x1e4afc, Func Offset: 0x7c
	// Line 3012, Address: 0x1e4b14, Func Offset: 0x94
	// Line 3015, Address: 0x1e4b28, Func Offset: 0xa8
	// Line 3016, Address: 0x1e4b48, Func Offset: 0xc8
	// Line 3020, Address: 0x1e4b50, Func Offset: 0xd0
	// Line 3022, Address: 0x1e4b58, Func Offset: 0xd8
	// Line 3026, Address: 0x1e4bdc, Func Offset: 0x15c
	// Line 3029, Address: 0x1e4be4, Func Offset: 0x164
	// Line 3033, Address: 0x1e4bf4, Func Offset: 0x174
	// Line 3032, Address: 0x1e4bf8, Func Offset: 0x178
	// Line 3033, Address: 0x1e4bfc, Func Offset: 0x17c
	// Line 3034, Address: 0x1e4c10, Func Offset: 0x190
	// Line 3035, Address: 0x1e4c14, Func Offset: 0x194
	// Line 3037, Address: 0x1e4c18, Func Offset: 0x198
	// Line 3034, Address: 0x1e4c24, Func Offset: 0x1a4
	// Line 3035, Address: 0x1e4c2c, Func Offset: 0x1ac
	// Line 3034, Address: 0x1e4c30, Func Offset: 0x1b0
	// Line 3035, Address: 0x1e4c34, Func Offset: 0x1b4
	// Line 3034, Address: 0x1e4c40, Func Offset: 0x1c0
	// Line 3035, Address: 0x1e4c50, Func Offset: 0x1d0
	// Line 3037, Address: 0x1e4c60, Func Offset: 0x1e0
	// Line 3038, Address: 0x1e4c70, Func Offset: 0x1f0
	// Line 3040, Address: 0x1e4c80, Func Offset: 0x200
	// Line 3041, Address: 0x1e4ca4, Func Offset: 0x224
	// Line 3042, Address: 0x1e4cb4, Func Offset: 0x234
	// Line 3043, Address: 0x1e4cbc, Func Offset: 0x23c
	// Line 3045, Address: 0x1e4cc0, Func Offset: 0x240
	// Line 3046, Address: 0x1e4cc4, Func Offset: 0x244
	// Line 3047, Address: 0x1e4cc8, Func Offset: 0x248
	// Line 3045, Address: 0x1e4cd8, Func Offset: 0x258
	// Line 3046, Address: 0x1e4cdc, Func Offset: 0x25c
	// Line 3045, Address: 0x1e4ce0, Func Offset: 0x260
	// Line 3046, Address: 0x1e4ce4, Func Offset: 0x264
	// Line 3045, Address: 0x1e4ce8, Func Offset: 0x268
	// Line 3046, Address: 0x1e4cec, Func Offset: 0x26c
	// Line 3045, Address: 0x1e4cf4, Func Offset: 0x274
	// Line 3046, Address: 0x1e4cf8, Func Offset: 0x278
	// Line 3047, Address: 0x1e4cfc, Func Offset: 0x27c
	// Line 3048, Address: 0x1e4d08, Func Offset: 0x288
	// Line 3050, Address: 0x1e4d18, Func Offset: 0x298
	// Line 3051, Address: 0x1e4d3c, Func Offset: 0x2bc
	// Line 3053, Address: 0x1e4d4c, Func Offset: 0x2cc
	// Line 3054, Address: 0x1e4d50, Func Offset: 0x2d0
	// Line 3053, Address: 0x1e4d54, Func Offset: 0x2d4
	// Line 3054, Address: 0x1e4d58, Func Offset: 0x2d8
	// Line 3053, Address: 0x1e4d5c, Func Offset: 0x2dc
	// Line 3054, Address: 0x1e4d60, Func Offset: 0x2e0
	// Line 3056, Address: 0x1e4d64, Func Offset: 0x2e4
	// Line 3053, Address: 0x1e4d68, Func Offset: 0x2e8
	// Line 3054, Address: 0x1e4d6c, Func Offset: 0x2ec
	// Line 3053, Address: 0x1e4d74, Func Offset: 0x2f4
	// Line 3054, Address: 0x1e4d78, Func Offset: 0x2f8
	// Line 3057, Address: 0x1e4d7c, Func Offset: 0x2fc
	// Line 3058, Address: 0x1e4d9c, Func Offset: 0x31c
	// Func End, Address: 0x1e4dc8, Func Offset: 0x348
}

// 
// Start address: 0x1e4dd0
void DrawFrame(_anon1* wk)
{
	float ratio;
	_anon6* f;
	int len;
	_anon6* frame[3];
	// Line 3063, Address: 0x1e4dd0, Func Offset: 0
	// Line 3096, Address: 0x1e4ddc, Func Offset: 0xc
	// Line 3097, Address: 0x1e4df0, Func Offset: 0x20
	// Line 3098, Address: 0x1e4e0c, Func Offset: 0x3c
	// Line 3100, Address: 0x1e4e14, Func Offset: 0x44
	// Line 3101, Address: 0x1e4e24, Func Offset: 0x54
	// Func End, Address: 0x1e4e34, Func Offset: 0x64
}

// 
// Start address: 0x1e4e40
void HandlingInfoDisp(int y)
{
	int index;
	int x;
	float ratio;
	int count_index;
	unsigned char alpha;
	int next_index;
	int btn_id;
	unsigned int mes_id[2][2];
	unsigned short disp_count[2];
	_anon18 poly;
	char flag;
	// Line 3105, Address: 0x1e4e40, Func Offset: 0
	// Line 3128, Address: 0x1e4e44, Func Offset: 0x4
	// Line 3105, Address: 0x1e4e48, Func Offset: 0x8
	// Line 3125, Address: 0x1e4e60, Func Offset: 0x20
	// Line 3105, Address: 0x1e4e64, Func Offset: 0x24
	// Line 3128, Address: 0x1e4e68, Func Offset: 0x28
	// Line 3129, Address: 0x1e4e74, Func Offset: 0x34
	// Line 3130, Address: 0x1e4e84, Func Offset: 0x44
	// Line 3131, Address: 0x1e4eb8, Func Offset: 0x78
	// Line 3132, Address: 0x1e4ecc, Func Offset: 0x8c
	// Line 3133, Address: 0x1e4eec, Func Offset: 0xac
	// Line 3134, Address: 0x1e4f0c, Func Offset: 0xcc
	// Line 3136, Address: 0x1e4f20, Func Offset: 0xe0
	// Line 3138, Address: 0x1e4f30, Func Offset: 0xf0
	// Line 3139, Address: 0x1e4f34, Func Offset: 0xf4
	// Line 3138, Address: 0x1e4f38, Func Offset: 0xf8
	// Line 3139, Address: 0x1e4f3c, Func Offset: 0xfc
	// Line 3138, Address: 0x1e4f40, Func Offset: 0x100
	// Line 3139, Address: 0x1e4f44, Func Offset: 0x104
	// Line 3138, Address: 0x1e4f48, Func Offset: 0x108
	// Line 3139, Address: 0x1e4f4c, Func Offset: 0x10c
	// Line 3142, Address: 0x1e4f70, Func Offset: 0x130
	// Line 3143, Address: 0x1e4f84, Func Offset: 0x144
	// Line 3145, Address: 0x1e4f88, Func Offset: 0x148
	// Line 3146, Address: 0x1e4fb0, Func Offset: 0x170
	// Line 3147, Address: 0x1e4fb4, Func Offset: 0x174
	// Line 3149, Address: 0x1e4fc4, Func Offset: 0x184
	// Line 3150, Address: 0x1e4fcc, Func Offset: 0x18c
	// Line 3152, Address: 0x1e4fd0, Func Offset: 0x190
	// Line 3153, Address: 0x1e4fe4, Func Offset: 0x1a4
	// Line 3152, Address: 0x1e4fe8, Func Offset: 0x1a8
	// Line 3153, Address: 0x1e4fec, Func Offset: 0x1ac
	// Line 3152, Address: 0x1e4ff4, Func Offset: 0x1b4
	// Line 3153, Address: 0x1e4ff8, Func Offset: 0x1b8
	// Line 3154, Address: 0x1e5000, Func Offset: 0x1c0
	// Line 3153, Address: 0x1e5008, Func Offset: 0x1c8
	// Line 3154, Address: 0x1e500c, Func Offset: 0x1cc
	// Line 3153, Address: 0x1e5010, Func Offset: 0x1d0
	// Line 3154, Address: 0x1e5014, Func Offset: 0x1d4
	// Line 3156, Address: 0x1e501c, Func Offset: 0x1dc
	// Line 3155, Address: 0x1e5024, Func Offset: 0x1e4
	// Line 3158, Address: 0x1e502c, Func Offset: 0x1ec
	// Line 3155, Address: 0x1e5030, Func Offset: 0x1f0
	// Line 3158, Address: 0x1e5034, Func Offset: 0x1f4
	// Line 3155, Address: 0x1e5038, Func Offset: 0x1f8
	// Line 3159, Address: 0x1e503c, Func Offset: 0x1fc
	// Line 3158, Address: 0x1e5040, Func Offset: 0x200
	// Line 3159, Address: 0x1e5044, Func Offset: 0x204
	// Line 3157, Address: 0x1e5048, Func Offset: 0x208
	// Line 3159, Address: 0x1e504c, Func Offset: 0x20c
	// Line 3157, Address: 0x1e5050, Func Offset: 0x210
	// Line 3158, Address: 0x1e5054, Func Offset: 0x214
	// Line 3159, Address: 0x1e505c, Func Offset: 0x21c
	// Line 3161, Address: 0x1e5060, Func Offset: 0x220
	// Line 3164, Address: 0x1e5068, Func Offset: 0x228
	// Line 3165, Address: 0x1e5078, Func Offset: 0x238
	// Line 3166, Address: 0x1e507c, Func Offset: 0x23c
	// Line 3165, Address: 0x1e5080, Func Offset: 0x240
	// Line 3166, Address: 0x1e5084, Func Offset: 0x244
	// Line 3165, Address: 0x1e5088, Func Offset: 0x248
	// Line 3166, Address: 0x1e508c, Func Offset: 0x24c
	// Line 3165, Address: 0x1e5090, Func Offset: 0x250
	// Line 3166, Address: 0x1e50a0, Func Offset: 0x260
	// Line 3167, Address: 0x1e50a8, Func Offset: 0x268
	// Line 3168, Address: 0x1e50b0, Func Offset: 0x270
	// Line 3174, Address: 0x1e50b8, Func Offset: 0x278
	// Line 3176, Address: 0x1e50c0, Func Offset: 0x280
	// Line 3178, Address: 0x1e50c8, Func Offset: 0x288
	// Line 3179, Address: 0x1e5118, Func Offset: 0x2d8
	// Line 3180, Address: 0x1e5120, Func Offset: 0x2e0
	// Line 3181, Address: 0x1e5128, Func Offset: 0x2e8
	// Line 3185, Address: 0x1e5134, Func Offset: 0x2f4
	// Line 3186, Address: 0x1e5144, Func Offset: 0x304
	// Line 3187, Address: 0x1e5158, Func Offset: 0x318
	// Line 3190, Address: 0x1e517c, Func Offset: 0x33c
	// Line 3191, Address: 0x1e518c, Func Offset: 0x34c
	// Line 3192, Address: 0x1e51a0, Func Offset: 0x360
	// Line 3193, Address: 0x1e51c4, Func Offset: 0x384
	// Line 3195, Address: 0x1e51d0, Func Offset: 0x390
	// Line 3196, Address: 0x1e51f4, Func Offset: 0x3b4
	// Line 3198, Address: 0x1e5218, Func Offset: 0x3d8
	// Line 3199, Address: 0x1e5220, Func Offset: 0x3e0
	// Func End, Address: 0x1e5240, Func Offset: 0x400
}

// 
// Start address: 0x1e5240
GameItem miscItemBoxGetKind()
{
	// Line 3204, Address: 0x1e5240, Func Offset: 0
	// Line 3205, Address: 0x1e5248, Func Offset: 0x8
	// Func End, Address: 0x1e5250, Func Offset: 0x10
}

// 
// Start address: 0x1e5250
int miscItemBoxExec(int mode)
{
	int rtv;
	// Line 3210, Address: 0x1e5250, Func Offset: 0
	// Line 3217, Address: 0x1e525c, Func Offset: 0xc
	// Line 3210, Address: 0x1e5260, Func Offset: 0x10
	// Line 3217, Address: 0x1e5264, Func Offset: 0x14
	// Line 3219, Address: 0x1e5270, Func Offset: 0x20
	// Line 3220, Address: 0x1e5280, Func Offset: 0x30
	// Line 3224, Address: 0x1e5288, Func Offset: 0x38
	// Line 3225, Address: 0x1e528c, Func Offset: 0x3c
	// Line 3227, Address: 0x1e5290, Func Offset: 0x40
	// Line 3228, Address: 0x1e5294, Func Offset: 0x44
	// Func End, Address: 0x1e52a4, Func Offset: 0x54
}

// 
// Start address: 0x1e52b0
void miscItemBoxDraw()
{
	// Line 3232, Address: 0x1e52b0, Func Offset: 0
	// Line 3233, Address: 0x1e52b8, Func Offset: 0x8
	// Line 3235, Address: 0x1e52c0, Func Offset: 0x10
	// Line 3238, Address: 0x1e52cc, Func Offset: 0x1c
	// Line 3241, Address: 0x1e52d4, Func Offset: 0x24
	// Line 3244, Address: 0x1e52e0, Func Offset: 0x30
	// Line 3245, Address: 0x1e5314, Func Offset: 0x64
	// Line 3248, Address: 0x1e5318, Func Offset: 0x68
	// Line 3245, Address: 0x1e531c, Func Offset: 0x6c
	// Line 3248, Address: 0x1e5320, Func Offset: 0x70
	// Line 3245, Address: 0x1e5324, Func Offset: 0x74
	// Line 3248, Address: 0x1e532c, Func Offset: 0x7c
	// Line 3249, Address: 0x1e5334, Func Offset: 0x84
	// Line 3250, Address: 0x1e5348, Func Offset: 0x98
	// Func End, Address: 0x1e5354, Func Offset: 0xa4
}

