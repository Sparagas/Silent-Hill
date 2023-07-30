typedef union fsFile;
typedef struct fsMgcFile;
typedef struct _anon0;
typedef struct PicDraw_Data;
typedef struct sh2gfw_AREA_HEAD;
typedef struct MC_DIRDATA;
typedef struct SPACK_ENV_DATA;
typedef struct shAttackInfo;
typedef union fsFileIndex;
typedef struct _anon1;
typedef struct MC_FILEINFO;
typedef struct SPACK_STATIC_DATA;
typedef union _anon2;
typedef struct MC_JOBS;
typedef struct Playing_Info;
typedef struct SPACK_DATA;
typedef struct MC_CODEC_DATA;
typedef struct _SH2_SYS;
typedef struct SPACK_OT_DATA;
typedef struct _anon3;
typedef struct _anon4;
typedef struct MC_WORK2;
typedef struct _anon5;
typedef struct fsCdFile;
typedef struct shBattleFight;
typedef struct fsMgfFile;
typedef struct shBattleShot;
typedef struct MC_SAVEDATA;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct Pad_KeyConfig;


typedef char type_0[8];
typedef unsigned int type_1[5];
typedef unsigned int type_2[5][3];
typedef char type_3[28];
typedef MC_FILEINFO type_4[15];
typedef char type_5[64];
typedef fsFileIndex type_6[1];
typedef unsigned long type_7[2];
typedef unsigned int type_8[4];
typedef unsigned int type_9[130];
typedef int type_10[6];
typedef unsigned char type_11[24];
typedef unsigned int type_12[8];
typedef unsigned char type_13[16];
typedef fsFileIndex type_14[1];
typedef unsigned char type_15[3];
typedef shAttackInfo type_16[66];
typedef unsigned char type_17[32];
typedef _anon3 type_18[20];
typedef MC_FILEINFO type_19[75];
typedef MC_FILEINFO type_20[75];
typedef MC_FILEINFO type_21[75][3];
typedef MC_JOBS type_22[16];
typedef float type_23[7];
typedef unsigned int type_24[7];
typedef int type_25[2];
typedef int type_26[2];
typedef int type_27[2];
typedef int type_28[2];
typedef unsigned char type_29[2];
typedef fsFileIndex type_30[1];
typedef char type_31[3];
typedef char type_32[5];
typedef char type_33[5][3];
typedef char type_34[3];
typedef char type_35[3];
typedef int type_36[2];
typedef unsigned char type_37[8168];
typedef char type_38[3];
typedef fsFileIndex type_39[1];
typedef char type_40[3];
typedef unsigned short type_41[0];

union fsFile
{
	_anon0 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct fsMgcFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	char* start;
	char* end;
};

struct _anon0
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	int pad0;
	int pad1;
	int pad2;
};

struct PicDraw_Data
{
	sh2gfw_AREA_HEAD* ap;
	int tex;
	int clut;
	short x0;
	short y0;
	short x1;
	short y1;
	short x2;
	short y2;
	short x3;
	short y3;
	int us0;
	int vt0;
	int us1;
	int vt1;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
	unsigned char alpha_a;
	unsigned char alpha_b;
	unsigned char alpha_c;
	unsigned char alpha_d;
	unsigned char alpha_fix;
	unsigned char test_ate;
	unsigned char test_atst;
	unsigned char test_aref;
	unsigned char test_afail;
	unsigned char test_date;
	unsigned char test_datm;
	unsigned char test_zte;
	unsigned char test_ztst;
	unsigned char pad[3];
	short otp;
	short status;
};

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
};

struct MC_DIRDATA
{
	char message[28];
	unsigned int flag;
	MC_FILEINFO file[15];
	Playing_Info playing;
	int lastsave;
	unsigned int id;
	unsigned int csum[4];
	unsigned int pad[130];
	unsigned long csum_all;
};

struct SPACK_ENV_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int pad1;
	unsigned short VifQwc;
	unsigned char pad2;
	unsigned char VifDirect;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon2 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union fsFileIndex
{
	_anon1 index;
	unsigned long pack;
};

struct _anon1
{
	fsFile* fp;
	char* name;
};

struct MC_FILEINFO
{
	unsigned char dirid;
	unsigned char fileid;
	unsigned char scene;
	unsigned char b_level;
	unsigned char r_level;
	unsigned char status;
	unsigned short savecount;
	float time;
	float total_time;
	unsigned int csum;
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
};

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
};

struct MC_JOBS
{
	char job;
	char port;
	short data;
};

struct Playing_Info
{
	unsigned char stage;
	unsigned char enemy_off;
	unsigned char voice_off;
	unsigned char memo_select;
	unsigned char clear_end_kind;
	unsigned char clear_end_number;
	unsigned char rank;
	unsigned char game_stage;
	unsigned char hidden_item_get;
	char spray_pow;
	unsigned short savecount;
	unsigned short clearcount;
	unsigned short item_get;
	unsigned short kill_by_shot;
	unsigned short kill_by_fight;
	float time;
	float walk_distance;
	float run_distance;
	float boat_clear_time;
	float boat_max_speed;
	float jms_damage_total;
	float mar_damage_by_enemy;
	float mar_damage_by_jms;
	float stage_check_point[7];
	unsigned int stage_score[7];
	unsigned int total_score;
	float total_time;
	unsigned char battle_level;
	unsigned char riddle_level;
	unsigned char brightness_level;
	char screen_position_x;
	char screen_position_y;
	unsigned char vibration;
	unsigned char auto_load;
	unsigned char sound;
	unsigned char bgm_volume;
	unsigned char se_volume;
	unsigned char weapon_control;
	unsigned char blood_color;
	unsigned char view_control;
	unsigned char retreat_turn;
	unsigned char walk_run_control;
	unsigned char auto_aiming;
	unsigned char view_mode;
	unsigned char bullet_adjust;
	unsigned char language;
	unsigned char subtitles;
	unsigned char control_type;
	unsigned char radar;
};

struct SPACK_DATA
{
	SPACK_OT_DATA** ot_top;
	SPACK_OT_DATA** ot_last;
	unsigned int ot_size;
	unsigned int ot_width;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int envid;
	SPACK_OT_DATA* dma_top;
	SPACK_OT_DATA* dmabuf_pos;
	SPACK_ENV_DATA* env_top;
	unsigned long* pk_last;
	unsigned long* pos;
	short* ot_max;
	<unknown fundamental type (0xa510)>* packet;
	SPACK_STATIC_DATA* ps_top;
	unsigned long* pgiftag;
	unsigned long giftag_b;
	unsigned int flag;
	void* kick_top;
	void* old_lastpos;
};

struct MC_CODEC_DATA
{
	unsigned char key1[24];
	unsigned char key2[16];
	int mode;
	int step;
	unsigned long* pos;
	int count;
	int zcount;
	unsigned int csum1;
	unsigned int csum2;
	unsigned long csum4;
};

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct SPACK_OT_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
};

struct _anon3
{
	_anon4 _Create;
	_anon5 _Modify;
	unsigned int FileSizeByte;
	unsigned short AttrFile;
	unsigned short Reserve1;
	unsigned int Reserve2;
	unsigned int PdaAplNo;
	unsigned char EntryName[32];
};

struct _anon4
{
	unsigned char Resv2;
	unsigned char Sec;
	unsigned char Min;
	unsigned char Hour;
	unsigned char Day;
	unsigned char Month;
	unsigned short Year;
};

struct MC_WORK2
{
	MC_DIRDATA dirdata;
	MC_SAVEDATA savedata;
	_anon3 dirtbl[20];
	MC_FILEINFO tmpinfo[75];
	MC_FILEINFO fileinfo[75][3];
	MC_JOBS jobs[16];
	char port;
	char dirnum;
	char files;
	char tbl_files;
	char job;
	char job_port;
	char job_data;
	char job_step;
	char job_num;
	char job_end;
	int result;
	int type[2];
	int free[2];
	int format[2];
	int info[2];
	unsigned char d_ent[2];
	char portstatus[3];
	char dirstatus[5][3];
	char filemax[3];
	char tmp_status[3];
	int type_old;
	short retry;
	short info_count;
	int fd;
	int fid[2];
	short autoload;
	char saveload;
	char menu_step;
	char menu_sstep;
	char menu_base[3];
	char menu_num[3];
	char tmp_num;
	char menu_info;
	char menu_infotype;
	char menu_timer;
	char menu_port;
	char menu_yesno;
	char menu_newdir;
	char menu_bk;
	float menu_scroll;
	float menu_count;
	float menu_an_count;
	char extra_name[8];
	char* extra_adr;
	int extra_size;
	unsigned int dirid[5][3];
	unsigned int dirid_new;
	char fname[64];
	unsigned long dtime[2];
	MC_FILEINFO* loaddata;
	MC_CODEC_DATA cd;
};

struct _anon5
{
	unsigned char Resv2;
	unsigned char Sec;
	unsigned char Min;
	unsigned char Hour;
	unsigned char Day;
	unsigned char Month;
	unsigned short Year;
};

struct fsCdFile
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	char* name;
	int lsn;
	int size;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct fsMgfFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	int offset;
	int size;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct MC_SAVEDATA
{
	unsigned int csum1;
	unsigned int csum2;
	unsigned char data[8168];
	unsigned int csum3;
	unsigned int pad;
	unsigned long csum4;
};

struct fsHdFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	char* name;
	int offset;
	int size;
};

struct fsMgpFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* file;
	fsMgcFile* start;
	fsMgcFile* end;
};

struct Pad_KeyConfig
{
	int enter;
	int cancel;
	int skip;
	int front_move;
	int back_move;
	int right_turn;
	int left_turn;
	int right_move;
	int left_move;
	int action;
	int attack;
	int dash;
	int light;
	int item;
	int search_view;
	int ready;
	int pause;
	int map;
	int padding[6];
};

shAttackInfo sh2_attack_list[66];
_SH2_SYS Sh2sys;
int logoDispTimer;
MC_WORK2* mcw;
unsigned short msg_buffer[0];
Pad_KeyConfig key_config;
fsFileIndex data_pic_etc_cesa_tex[1];
fsFileIndex data_pic_etc_sce_tex[1];
fsFileIndex data_pic_etc_konami_r_tex[1];
fsFileIndex data_pic_etc_kcet_tex[1];
PicDraw_Data Pic0;
SPACK_DATA spack;

void logoCheckingMemcard();
void logoDrawWarningCESA();
void logoDrawWarningSCE();
void logoDrawKonamiLogo();
void logoDrawTexture();
int logoTellYesNo();

// 
// Start address: 0x20c250
void logoCheckingMemcard()
{
	int sts;
	short msg_id;
	int msg_fid;
	// Line 118, Address: 0x20c250, Func Offset: 0
	// Line 134, Address: 0x20c25c, Func Offset: 0xc
	// Line 137, Address: 0x20c2a4, Func Offset: 0x54
	// Line 138, Address: 0x20c2b4, Func Offset: 0x64
	// Line 139, Address: 0x20c2bc, Func Offset: 0x6c
	// Line 140, Address: 0x20c2f8, Func Offset: 0xa8
	// Line 142, Address: 0x20c300, Func Offset: 0xb0
	// Line 144, Address: 0x20c31c, Func Offset: 0xcc
	// Line 145, Address: 0x20c324, Func Offset: 0xd4
	// Line 146, Address: 0x20c32c, Func Offset: 0xdc
	// Line 148, Address: 0x20c368, Func Offset: 0x118
	// Line 158, Address: 0x20c370, Func Offset: 0x120
	// Line 159, Address: 0x20c37c, Func Offset: 0x12c
	// Line 160, Address: 0x20c384, Func Offset: 0x134
	// Line 163, Address: 0x20c3a4, Func Offset: 0x154
	// Line 165, Address: 0x20c3b4, Func Offset: 0x164
	// Line 168, Address: 0x20c3e0, Func Offset: 0x190
	// Line 170, Address: 0x20c3f4, Func Offset: 0x1a4
	// Line 171, Address: 0x20c400, Func Offset: 0x1b0
	// Line 172, Address: 0x20c434, Func Offset: 0x1e4
	// Line 174, Address: 0x20c46c, Func Offset: 0x21c
	// Line 175, Address: 0x20c4a0, Func Offset: 0x250
	// Line 177, Address: 0x20c4a8, Func Offset: 0x258
	// Line 179, Address: 0x20c4b0, Func Offset: 0x260
	// Line 180, Address: 0x20c4bc, Func Offset: 0x26c
	// Line 181, Address: 0x20c4f0, Func Offset: 0x2a0
	// Line 183, Address: 0x20c50c, Func Offset: 0x2bc
	// Line 186, Address: 0x20c534, Func Offset: 0x2e4
	// Line 187, Address: 0x20c568, Func Offset: 0x318
	// Line 189, Address: 0x20c570, Func Offset: 0x320
	// Line 195, Address: 0x20c578, Func Offset: 0x328
	// Line 198, Address: 0x20c5a4, Func Offset: 0x354
	// Line 199, Address: 0x20c5d8, Func Offset: 0x388
	// Line 202, Address: 0x20c5e0, Func Offset: 0x390
	// Line 203, Address: 0x20c5ec, Func Offset: 0x39c
	// Line 206, Address: 0x20c5f4, Func Offset: 0x3a4
	// Line 207, Address: 0x20c600, Func Offset: 0x3b0
	// Line 210, Address: 0x20c608, Func Offset: 0x3b8
	// Line 212, Address: 0x20c638, Func Offset: 0x3e8
	// Line 213, Address: 0x20c640, Func Offset: 0x3f0
	// Line 214, Address: 0x20c648, Func Offset: 0x3f8
	// Line 215, Address: 0x20c65c, Func Offset: 0x40c
	// Line 216, Address: 0x20c690, Func Offset: 0x440
	// Line 223, Address: 0x20c698, Func Offset: 0x448
	// Line 224, Address: 0x20c6a4, Func Offset: 0x454
	// Line 228, Address: 0x20c6b4, Func Offset: 0x464
	// Line 234, Address: 0x20c6bc, Func Offset: 0x46c
	// Line 235, Address: 0x20c6c8, Func Offset: 0x478
	// Line 239, Address: 0x20c6d8, Func Offset: 0x488
	// Line 245, Address: 0x20c6e0, Func Offset: 0x490
	// Line 246, Address: 0x20c6ec, Func Offset: 0x49c
	// Line 253, Address: 0x20c714, Func Offset: 0x4c4
	// Line 290, Address: 0x20c71c, Func Offset: 0x4cc
	// Line 292, Address: 0x20c730, Func Offset: 0x4e0
	// Line 293, Address: 0x20c738, Func Offset: 0x4e8
	// Line 295, Address: 0x20c750, Func Offset: 0x500
	// Line 297, Address: 0x20c764, Func Offset: 0x514
	// Line 298, Address: 0x20c790, Func Offset: 0x540
	// Line 299, Address: 0x20c798, Func Offset: 0x548
	// Line 306, Address: 0x20c7a8, Func Offset: 0x558
	// Line 310, Address: 0x20c7e4, Func Offset: 0x594
	// Line 312, Address: 0x20c7ec, Func Offset: 0x59c
	// Line 314, Address: 0x20c800, Func Offset: 0x5b0
	// Line 315, Address: 0x20c808, Func Offset: 0x5b8
	// Line 316, Address: 0x20c820, Func Offset: 0x5d0
	// Line 318, Address: 0x20c834, Func Offset: 0x5e4
	// Line 320, Address: 0x20c848, Func Offset: 0x5f8
	// Line 321, Address: 0x20c874, Func Offset: 0x624
	// Line 322, Address: 0x20c87c, Func Offset: 0x62c
	// Line 324, Address: 0x20c88c, Func Offset: 0x63c
	// Line 325, Address: 0x20c8c8, Func Offset: 0x678
	// Line 329, Address: 0x20c8fc, Func Offset: 0x6ac
	// Func End, Address: 0x20c910, Func Offset: 0x6c0
}

// 
// Start address: 0x20c910
void logoDrawWarningCESA()
{
	int wait_loop;
	int fid;
	// Line 346, Address: 0x20c910, Func Offset: 0
	// Line 360, Address: 0x20c918, Func Offset: 0x8
	// Line 363, Address: 0x20c960, Func Offset: 0x50
	// Line 372, Address: 0x20c968, Func Offset: 0x58
	// Line 373, Address: 0x20c970, Func Offset: 0x60
	// Line 375, Address: 0x20c980, Func Offset: 0x70
	// Line 376, Address: 0x20c9a4, Func Offset: 0x94
	// Line 377, Address: 0x20c9ac, Func Offset: 0x9c
	// Line 378, Address: 0x20c9e8, Func Offset: 0xd8
	// Line 381, Address: 0x20c9f0, Func Offset: 0xe0
	// Line 382, Address: 0x20ca04, Func Offset: 0xf4
	// Line 385, Address: 0x20ca48, Func Offset: 0x138
	// Line 386, Address: 0x20ca60, Func Offset: 0x150
	// Line 388, Address: 0x20ca70, Func Offset: 0x160
	// Line 390, Address: 0x20cae8, Func Offset: 0x1d8
	// Line 391, Address: 0x20cb24, Func Offset: 0x214
	// Line 393, Address: 0x20cb2c, Func Offset: 0x21c
	// Line 394, Address: 0x20cb44, Func Offset: 0x234
	// Line 396, Address: 0x20cb4c, Func Offset: 0x23c
	// Line 397, Address: 0x20cb70, Func Offset: 0x260
	// Line 399, Address: 0x20cba4, Func Offset: 0x294
	// Line 401, Address: 0x20cbac, Func Offset: 0x29c
	// Line 402, Address: 0x20cbd0, Func Offset: 0x2c0
	// Line 404, Address: 0x20cc04, Func Offset: 0x2f4
	// Line 406, Address: 0x20cc0c, Func Offset: 0x2fc
	// Line 409, Address: 0x20cc1c, Func Offset: 0x30c
	// Line 412, Address: 0x20cc24, Func Offset: 0x314
	// Line 414, Address: 0x20cc2c, Func Offset: 0x31c
	// Line 416, Address: 0x20cc3c, Func Offset: 0x32c
	// Line 417, Address: 0x20cc64, Func Offset: 0x354
	// Line 419, Address: 0x20cca0, Func Offset: 0x390
	// Line 422, Address: 0x20cca8, Func Offset: 0x398
	// Line 423, Address: 0x20ccb0, Func Offset: 0x3a0
	// Line 424, Address: 0x20ccc4, Func Offset: 0x3b4
	// Line 426, Address: 0x20ccd4, Func Offset: 0x3c4
	// Line 427, Address: 0x20ccec, Func Offset: 0x3dc
	// Line 429, Address: 0x20cd28, Func Offset: 0x418
	// Line 432, Address: 0x20cd30, Func Offset: 0x420
	// Line 433, Address: 0x20cd38, Func Offset: 0x428
	// Line 434, Address: 0x20cd48, Func Offset: 0x438
	// Line 437, Address: 0x20cd8c, Func Offset: 0x47c
	// Func End, Address: 0x20cd9c, Func Offset: 0x48c
}

// 
// Start address: 0x20cda0
void logoDrawWarningSCE()
{
	int wait_loop;
	int fid;
	// Line 454, Address: 0x20cda0, Func Offset: 0
	// Line 468, Address: 0x20cda8, Func Offset: 0x8
	// Line 479, Address: 0x20cdf0, Func Offset: 0x50
	// Line 481, Address: 0x20cdfc, Func Offset: 0x5c
	// Line 482, Address: 0x20ce20, Func Offset: 0x80
	// Line 483, Address: 0x20ce28, Func Offset: 0x88
	// Line 484, Address: 0x20ce64, Func Offset: 0xc4
	// Line 487, Address: 0x20ce6c, Func Offset: 0xcc
	// Line 488, Address: 0x20ce80, Func Offset: 0xe0
	// Line 491, Address: 0x20cec8, Func Offset: 0x128
	// Line 492, Address: 0x20cee0, Func Offset: 0x140
	// Line 494, Address: 0x20cef0, Func Offset: 0x150
	// Line 496, Address: 0x20cf68, Func Offset: 0x1c8
	// Line 497, Address: 0x20cfa4, Func Offset: 0x204
	// Line 499, Address: 0x20cfac, Func Offset: 0x20c
	// Line 500, Address: 0x20cfc4, Func Offset: 0x224
	// Line 502, Address: 0x20cfcc, Func Offset: 0x22c
	// Line 503, Address: 0x20cff0, Func Offset: 0x250
	// Line 505, Address: 0x20d024, Func Offset: 0x284
	// Line 507, Address: 0x20d02c, Func Offset: 0x28c
	// Line 508, Address: 0x20d050, Func Offset: 0x2b0
	// Line 510, Address: 0x20d084, Func Offset: 0x2e4
	// Line 512, Address: 0x20d08c, Func Offset: 0x2ec
	// Line 515, Address: 0x20d09c, Func Offset: 0x2fc
	// Line 518, Address: 0x20d0a4, Func Offset: 0x304
	// Line 520, Address: 0x20d0ac, Func Offset: 0x30c
	// Line 522, Address: 0x20d0bc, Func Offset: 0x31c
	// Line 523, Address: 0x20d0e4, Func Offset: 0x344
	// Line 525, Address: 0x20d120, Func Offset: 0x380
	// Line 528, Address: 0x20d128, Func Offset: 0x388
	// Line 529, Address: 0x20d130, Func Offset: 0x390
	// Line 530, Address: 0x20d144, Func Offset: 0x3a4
	// Line 532, Address: 0x20d154, Func Offset: 0x3b4
	// Line 533, Address: 0x20d16c, Func Offset: 0x3cc
	// Line 535, Address: 0x20d1a8, Func Offset: 0x408
	// Line 538, Address: 0x20d1b0, Func Offset: 0x410
	// Line 539, Address: 0x20d1b8, Func Offset: 0x418
	// Line 540, Address: 0x20d1c8, Func Offset: 0x428
	// Line 543, Address: 0x20d20c, Func Offset: 0x46c
	// Func End, Address: 0x20d21c, Func Offset: 0x47c
}

// 
// Start address: 0x20d220
void logoDrawKonamiLogo()
{
	int wait_loop;
	int fid;
	// Line 560, Address: 0x20d220, Func Offset: 0
	// Line 574, Address: 0x20d228, Func Offset: 0x8
	// Line 585, Address: 0x20d270, Func Offset: 0x50
	// Line 592, Address: 0x20d27c, Func Offset: 0x5c
	// Line 595, Address: 0x20d2a0, Func Offset: 0x80
	// Line 596, Address: 0x20d2a8, Func Offset: 0x88
	// Line 597, Address: 0x20d2e4, Func Offset: 0xc4
	// Line 600, Address: 0x20d2ec, Func Offset: 0xcc
	// Line 601, Address: 0x20d300, Func Offset: 0xe0
	// Line 604, Address: 0x20d348, Func Offset: 0x128
	// Line 605, Address: 0x20d360, Func Offset: 0x140
	// Line 607, Address: 0x20d370, Func Offset: 0x150
	// Line 609, Address: 0x20d3e8, Func Offset: 0x1c8
	// Line 610, Address: 0x20d424, Func Offset: 0x204
	// Line 612, Address: 0x20d42c, Func Offset: 0x20c
	// Line 613, Address: 0x20d444, Func Offset: 0x224
	// Line 615, Address: 0x20d44c, Func Offset: 0x22c
	// Line 616, Address: 0x20d470, Func Offset: 0x250
	// Line 618, Address: 0x20d4a4, Func Offset: 0x284
	// Line 620, Address: 0x20d4ac, Func Offset: 0x28c
	// Line 621, Address: 0x20d4d0, Func Offset: 0x2b0
	// Line 623, Address: 0x20d504, Func Offset: 0x2e4
	// Line 625, Address: 0x20d50c, Func Offset: 0x2ec
	// Line 628, Address: 0x20d51c, Func Offset: 0x2fc
	// Line 631, Address: 0x20d524, Func Offset: 0x304
	// Line 633, Address: 0x20d52c, Func Offset: 0x30c
	// Line 635, Address: 0x20d53c, Func Offset: 0x31c
	// Line 636, Address: 0x20d564, Func Offset: 0x344
	// Line 638, Address: 0x20d5a0, Func Offset: 0x380
	// Line 641, Address: 0x20d5a8, Func Offset: 0x388
	// Line 642, Address: 0x20d5b0, Func Offset: 0x390
	// Line 643, Address: 0x20d5c4, Func Offset: 0x3a4
	// Line 645, Address: 0x20d5d4, Func Offset: 0x3b4
	// Line 646, Address: 0x20d5ec, Func Offset: 0x3cc
	// Line 648, Address: 0x20d628, Func Offset: 0x408
	// Line 651, Address: 0x20d630, Func Offset: 0x410
	// Line 652, Address: 0x20d638, Func Offset: 0x418
	// Line 653, Address: 0x20d648, Func Offset: 0x428
	// Line 656, Address: 0x20d68c, Func Offset: 0x46c
	// Func End, Address: 0x20d69c, Func Offset: 0x47c
}

// 
// Start address: 0x20d6a0
void logoDrawTexture()
{
	// Line 772, Address: 0x20d6a0, Func Offset: 0
	// Line 773, Address: 0x20d6a8, Func Offset: 0x8
	// Line 775, Address: 0x20d6b0, Func Offset: 0x10
	// Line 779, Address: 0x20d6d0, Func Offset: 0x30
	// Line 783, Address: 0x20d6e4, Func Offset: 0x44
	// Line 784, Address: 0x20d71c, Func Offset: 0x7c
	// Line 785, Address: 0x20d724, Func Offset: 0x84
	// Line 787, Address: 0x20d734, Func Offset: 0x94
	// Line 788, Address: 0x20d748, Func Offset: 0xa8
	// Func End, Address: 0x20d758, Func Offset: 0xb8
}

// 
// Start address: 0x20d760
int logoTellYesNo()
{
	int n;
	int a;
	int y;
	int x;
	// Line 798, Address: 0x20d760, Func Offset: 0
	// Line 800, Address: 0x20d774, Func Offset: 0x14
	// Line 801, Address: 0x20d7ac, Func Offset: 0x4c
	// Line 803, Address: 0x20d7c0, Func Offset: 0x60
	// Line 804, Address: 0x20d7e8, Func Offset: 0x88
	// Line 805, Address: 0x20d814, Func Offset: 0xb4
	// Line 806, Address: 0x20d81c, Func Offset: 0xbc
	// Line 808, Address: 0x20d840, Func Offset: 0xe0
	// Line 809, Address: 0x20d844, Func Offset: 0xe4
	// Line 810, Address: 0x20d850, Func Offset: 0xf0
	// Line 811, Address: 0x20d85c, Func Offset: 0xfc
	// Line 812, Address: 0x20d88c, Func Offset: 0x12c
	// Line 813, Address: 0x20d8a4, Func Offset: 0x144
	// Line 814, Address: 0x20d8bc, Func Offset: 0x15c
	// Line 815, Address: 0x20d8c4, Func Offset: 0x164
	// Line 816, Address: 0x20d8cc, Func Offset: 0x16c
	// Line 819, Address: 0x20d8d0, Func Offset: 0x170
	// Line 820, Address: 0x20d8e8, Func Offset: 0x188
	// Line 821, Address: 0x20d8ec, Func Offset: 0x18c
	// Line 822, Address: 0x20d8f4, Func Offset: 0x194
	// Line 824, Address: 0x20d8f8, Func Offset: 0x198
	// Line 826, Address: 0x20d91c, Func Offset: 0x1bc
	// Line 827, Address: 0x20d938, Func Offset: 0x1d8
	// Line 828, Address: 0x20d96c, Func Offset: 0x20c
	// Line 829, Address: 0x20d9a0, Func Offset: 0x240
	// Line 830, Address: 0x20d9d4, Func Offset: 0x274
	// Line 831, Address: 0x20d9dc, Func Offset: 0x27c
	// Line 832, Address: 0x20d9f0, Func Offset: 0x290
	// Line 833, Address: 0x20da0c, Func Offset: 0x2ac
	// Line 834, Address: 0x20da18, Func Offset: 0x2b8
	// Line 835, Address: 0x20da30, Func Offset: 0x2d0
	// Line 836, Address: 0x20da3c, Func Offset: 0x2dc
	// Line 838, Address: 0x20da48, Func Offset: 0x2e8
	// Line 839, Address: 0x20da64, Func Offset: 0x304
	// Line 840, Address: 0x20da7c, Func Offset: 0x31c
	// Line 841, Address: 0x20da88, Func Offset: 0x328
	// Line 843, Address: 0x20da94, Func Offset: 0x334
	// Line 844, Address: 0x20da98, Func Offset: 0x338
	// Func End, Address: 0x20dab4, Func Offset: 0x354
}

