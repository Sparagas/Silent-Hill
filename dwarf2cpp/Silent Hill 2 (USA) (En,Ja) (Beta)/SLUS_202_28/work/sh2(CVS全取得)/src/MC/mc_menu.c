typedef struct shBattleFight;
typedef struct MC_SAVEDATA;
typedef union fsFileIndex;
typedef struct _anon0;
typedef union fsFile;
typedef struct shBattleShot;
typedef struct MC_FILEINFO;
typedef struct MC_DIRDATA;
typedef struct SPACK_OT_DATA;
typedef struct Pad_KeyConfig;
typedef struct FONT_STREAM_DATA;
typedef struct WFONT_STREAM_DATA;
typedef struct MFONT_STREAM_DATA;
typedef struct Playing_Info;
typedef struct shAttackInfo;
typedef struct MC_JOBS;
typedef struct SPACK_ENV_DATA;
typedef struct MC_CODEC_DATA;
typedef struct MC_WORK2;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct SPACK_STATIC_DATA;
typedef struct MC_WORK;
typedef struct fsCdFile;
typedef struct _anon4;
typedef struct SPACK_DATA;
typedef struct fsMgcFile;
typedef struct _SH2_SYS;
typedef struct fsMgfFile;
typedef struct FONT_DATA;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon5;


typedef char type_0[3];
typedef char type_1[3];
typedef int type_2[2];
typedef unsigned short type_3[8];
typedef unsigned short type_4[400];
typedef unsigned short type_5[7];
typedef short type_6[400];
typedef char type_7[0];
typedef short type_8[400];
typedef char type_9[3];
typedef unsigned char type_10[8168];
typedef char type_11[7];
typedef char type_12[3];
typedef unsigned short type_13[4];
typedef unsigned short type_14[4];
typedef char type_15[8];
typedef unsigned short type_16[64];
typedef unsigned short type_17[64][10];
typedef unsigned int type_18[5];
typedef unsigned int type_19[5][3];
typedef char type_20[32];
typedef char type_21[64];
typedef char type_22[28];
typedef unsigned long type_23[2];
typedef MC_FILEINFO type_24[15];
typedef unsigned int type_25[4];
typedef unsigned int type_26[130];
typedef unsigned short type_27[256];
typedef short type_28[256];
typedef short type_29[256];
typedef unsigned char type_30[24];
typedef unsigned char type_31[16];
typedef char type_32[2];
typedef char type_33[2][5];
typedef int type_34[6];
typedef unsigned short type_35[0];
typedef fsFileIndex type_36[1];
typedef shAttackInfo type_37[66];
typedef char type_38[9];
typedef float type_39[7];
typedef unsigned int type_40[7];
typedef unsigned int type_41[8];
typedef _anon2 type_42[20];
typedef MC_FILEINFO type_43[75];
typedef MC_FILEINFO type_44[75];
typedef MC_FILEINFO type_45[75][3];
typedef unsigned char type_46[32];
typedef MC_JOBS type_47[16];
typedef unsigned int type_48[12];
typedef unsigned int type_49[12];
typedef unsigned int type_50[8];
typedef unsigned char type_51[131072];
typedef char type_52[9];
typedef int type_53[2];
typedef int type_54[2];
typedef unsigned int type_55[4];
typedef char type_56[2];
typedef int type_57[2];
typedef char type_58[2][4];
typedef int type_59[2];
typedef unsigned char type_60[2];
typedef char type_61[3];
typedef char type_62[5];
typedef char type_63[5][3];

struct shBattleFight
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

union fsFileIndex
{
	_anon0 index;
	unsigned long pack;
};

struct _anon0
{
	fsFile* fp;
	char* name;
};

union fsFile
{
	_anon5 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct FONT_STREAM_DATA
{
	unsigned short x;
	unsigned short y;
	unsigned short w;
	unsigned short h;
	unsigned short u;
	unsigned short v;
	unsigned int rgb_u;
	unsigned int rgb_d;
};

struct WFONT_STREAM_DATA
{
	unsigned short x;
	unsigned short y;
	unsigned short vw;
	unsigned short vh;
	unsigned short u;
	unsigned short v;
	unsigned int rgb_u;
	unsigned int rgb_d;
	unsigned short w;
	unsigned short h;
};

struct MFONT_STREAM_DATA
{
	unsigned short x;
	unsigned short y;
	unsigned short u;
	unsigned short v;
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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon1 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct MC_JOBS
{
	char job;
	char port;
	short data;
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

struct MC_WORK2
{
	MC_DIRDATA dirdata;
	MC_SAVEDATA savedata;
	_anon2 dirtbl[20];
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

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon2
{
	_anon3 _Create;
	_anon4 _Modify;
	unsigned int FileSizeByte;
	unsigned short AttrFile;
	unsigned short Reserve1;
	unsigned int Reserve2;
	unsigned int PdaAplNo;
	unsigned char EntryName[32];
};

struct _anon3
{
	unsigned char Resv2;
	unsigned char Sec;
	unsigned char Min;
	unsigned char Hour;
	unsigned char Day;
	unsigned char Month;
	unsigned short Year;
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
};

struct MC_WORK
{
	unsigned short status;
	char ls_port;
	char ls_dir;
	char ls_file;
	unsigned int ls_dir_id;
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

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
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

struct FONT_DATA
{
	unsigned int tex_head[12];
	unsigned int clut_head[12];
	unsigned int clut[8];
	unsigned char texbuf[131072];
	unsigned long tex0;
	int fonttype;
	unsigned int rgb_u;
	unsigned int rgb_d;
	unsigned int rgb_s[4];
	unsigned int alpha;
	unsigned int alpha_base;
	unsigned int flag;
	unsigned short x;
	unsigned short y;
	unsigned short wide_w;
	unsigned short wide_h;
	unsigned short right_x;
	unsigned short right_y;
	unsigned short wm;
	unsigned short hm;
	short wait_count;
	short wait_type;
	short page_sound;
	unsigned short code[400];
	short upper[400];
	short lower[400];
	short top;
	short bottom;
	short st_num;
	short w_st_num;
	short prl_count;
	short preload;
	short shadow_max;
	short shadow_now;
	unsigned short sel_xl;
	unsigned short sel_xr;
	unsigned short sel_yu[4];
	unsigned short sel_yd[4];
	short sel_max;
	short sel_now;
	unsigned short mes_v[64][10];
	unsigned short* mes_str_now;
	unsigned short* mes_str;
	unsigned short* prl_str;
	FONT_STREAM_DATA* stream;
	WFONT_STREAM_DATA* w_stream;
	MFONT_STREAM_DATA* m_stream;
	unsigned short stream_max;
	unsigned short w_stream_max;
	unsigned short m_stream_max;
	unsigned short m_code[256];
	short m_upper[256];
	short m_lower[256];
	short m_top;
	short m_bottom;
	short m_st_num;
	int m_base_x;
	int m_base_y;
	int m_base_z;
	unsigned int m_rgba;
	int m_sx;
	int m_sy;
	int m_w;
	int m_h;
	int m_x;
	int m_y;
	float bar_blink;
	unsigned long* pCur;
	int base_x;
	int base_y;
	int base_z;
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

struct _anon5
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

shAttackInfo sh2_attack_list[66];
char tag_curve1[2][5];
char tag_curve2[2][4];
char mc_cs_mes[7];
_SH2_SYS Sh2sys;
MC_WORK2* mcw;
MC_WORK mc;
Pad_KeyConfig key_config;
unsigned short msg_buffer[0];
FONT_DATA font;
Playing_Info playing;
SPACK_DATA spack;
char MemShare_gp_data_buf[0];
fsFileIndex data_menu_mc_savebg_raw[1];

int mcSaveMenu();
int mcLoadMenu();
int mcAfterLoadMenu();
int mcCheckTimer();
int mcMenuControl();
int mcTellYesNo();
int mcSelectData();
int mcGetBlinkAlpha();
int mcPutMes(short n, short x, short y, short align, short align2);
void mcPutMes2(short n, short x, short y);
void mcPutBigFont(short n, short y);
void mcDrawMenu();
void mcDrawFrame();
void mcDrawSlot();
void mcDrawPlace(short num, short y);
void mcDrawAddInfo(MC_FILEINFO* fi, short y);
void mcDrawWarning(short num);
void mcDrawStatus();
void mcDrawBG();
void mcDrawBGWord();
void mcDmaKick();
void mcLoadMenuData();
void mcSoundCursor();
void mcSoundDecide();
void mcSoundSelect();
void mcSoundCancel();
void mcSoundError();
void mcSoundStart();

// 
// Start address: 0x242c70
int mcSaveMenu()
{
	char n;
	char port;
	int i;
	// Line 249, Address: 0x242c70, Func Offset: 0
	// Line 251, Address: 0x242c84, Func Offset: 0x14
	// Line 253, Address: 0x242c90, Func Offset: 0x20
	// Line 254, Address: 0x242cb4, Func Offset: 0x44
	// Line 255, Address: 0x242cbc, Func Offset: 0x4c
	// Line 257, Address: 0x242cd0, Func Offset: 0x60
	// Line 259, Address: 0x242d08, Func Offset: 0x98
	// Line 260, Address: 0x242d0c, Func Offset: 0x9c
	// Line 261, Address: 0x242d14, Func Offset: 0xa4
	// Line 262, Address: 0x242d1c, Func Offset: 0xac
	// Line 263, Address: 0x242d24, Func Offset: 0xb4
	// Line 264, Address: 0x242d2c, Func Offset: 0xbc
	// Line 266, Address: 0x242d40, Func Offset: 0xd0
	// Line 267, Address: 0x242d5c, Func Offset: 0xec
	// Line 268, Address: 0x242d90, Func Offset: 0x120
	// Line 270, Address: 0x242d98, Func Offset: 0x128
	// Line 271, Address: 0x242dac, Func Offset: 0x13c
	// Line 272, Address: 0x242dc4, Func Offset: 0x154
	// Line 274, Address: 0x242dd8, Func Offset: 0x168
	// Line 275, Address: 0x242df8, Func Offset: 0x188
	// Line 276, Address: 0x242e0c, Func Offset: 0x19c
	// Line 277, Address: 0x242e20, Func Offset: 0x1b0
	// Line 278, Address: 0x242e34, Func Offset: 0x1c4
	// Line 279, Address: 0x242e50, Func Offset: 0x1e0
	// Line 281, Address: 0x242e58, Func Offset: 0x1e8
	// Line 289, Address: 0x242e60, Func Offset: 0x1f0
	// Line 293, Address: 0x242eb0, Func Offset: 0x240
	// Line 294, Address: 0x242eb8, Func Offset: 0x248
	// Line 296, Address: 0x242ec4, Func Offset: 0x254
	// Line 297, Address: 0x242ed4, Func Offset: 0x264
	// Line 298, Address: 0x242ee0, Func Offset: 0x270
	// Line 300, Address: 0x242f00, Func Offset: 0x290
	// Line 301, Address: 0x242f08, Func Offset: 0x298
	// Line 303, Address: 0x242f10, Func Offset: 0x2a0
	// Line 304, Address: 0x242f28, Func Offset: 0x2b8
	// Line 307, Address: 0x242f40, Func Offset: 0x2d0
	// Line 309, Address: 0x242f70, Func Offset: 0x300
	// Line 310, Address: 0x242f80, Func Offset: 0x310
	// Line 311, Address: 0x242f90, Func Offset: 0x320
	// Line 319, Address: 0x242f9c, Func Offset: 0x32c
	// Line 320, Address: 0x242fb0, Func Offset: 0x340
	// Line 321, Address: 0x242fb8, Func Offset: 0x348
	// Line 322, Address: 0x242fd8, Func Offset: 0x368
	// Line 323, Address: 0x242fe0, Func Offset: 0x370
	// Line 324, Address: 0x243000, Func Offset: 0x390
	// Line 327, Address: 0x24304c, Func Offset: 0x3dc
	// Line 328, Address: 0x243054, Func Offset: 0x3e4
	// Line 330, Address: 0x24305c, Func Offset: 0x3ec
	// Line 331, Address: 0x243070, Func Offset: 0x400
	// Line 333, Address: 0x243078, Func Offset: 0x408
	// Line 334, Address: 0x243080, Func Offset: 0x410
	// Line 335, Address: 0x243094, Func Offset: 0x424
	// Line 336, Address: 0x2430a0, Func Offset: 0x430
	// Line 337, Address: 0x2430bc, Func Offset: 0x44c
	// Line 338, Address: 0x2430c4, Func Offset: 0x454
	// Line 339, Address: 0x2430cc, Func Offset: 0x45c
	// Line 342, Address: 0x2430d4, Func Offset: 0x464
	// Line 350, Address: 0x2430dc, Func Offset: 0x46c
	// Line 351, Address: 0x2430f0, Func Offset: 0x480
	// Line 355, Address: 0x24310c, Func Offset: 0x49c
	// Line 388, Address: 0x243114, Func Offset: 0x4a4
	// Line 389, Address: 0x243134, Func Offset: 0x4c4
	// Line 390, Address: 0x243148, Func Offset: 0x4d8
	// Line 391, Address: 0x243150, Func Offset: 0x4e0
	// Line 392, Address: 0x243158, Func Offset: 0x4e8
	// Line 400, Address: 0x243160, Func Offset: 0x4f0
	// Line 402, Address: 0x243168, Func Offset: 0x4f8
	// Line 403, Address: 0x243174, Func Offset: 0x504
	// Line 404, Address: 0x243188, Func Offset: 0x518
	// Line 405, Address: 0x243190, Func Offset: 0x520
	// Line 406, Address: 0x2431a0, Func Offset: 0x530
	// Line 407, Address: 0x2431b4, Func Offset: 0x544
	// Line 408, Address: 0x2431c8, Func Offset: 0x558
	// Line 409, Address: 0x2431dc, Func Offset: 0x56c
	// Line 410, Address: 0x2431f0, Func Offset: 0x580
	// Line 412, Address: 0x2431f8, Func Offset: 0x588
	// Line 413, Address: 0x243218, Func Offset: 0x5a8
	// Line 414, Address: 0x243224, Func Offset: 0x5b4
	// Line 415, Address: 0x243244, Func Offset: 0x5d4
	// Line 416, Address: 0x243254, Func Offset: 0x5e4
	// Line 417, Address: 0x243270, Func Offset: 0x600
	// Line 418, Address: 0x243284, Func Offset: 0x614
	// Line 420, Address: 0x243298, Func Offset: 0x628
	// Line 422, Address: 0x2432a0, Func Offset: 0x630
	// Line 423, Address: 0x2432c4, Func Offset: 0x654
	// Line 424, Address: 0x2432d8, Func Offset: 0x668
	// Line 425, Address: 0x2432e4, Func Offset: 0x674
	// Line 427, Address: 0x2432ec, Func Offset: 0x67c
	// Line 429, Address: 0x243314, Func Offset: 0x6a4
	// Line 430, Address: 0x24331c, Func Offset: 0x6ac
	// Line 431, Address: 0x243328, Func Offset: 0x6b8
	// Line 432, Address: 0x243338, Func Offset: 0x6c8
	// Line 433, Address: 0x243348, Func Offset: 0x6d8
	// Line 435, Address: 0x243350, Func Offset: 0x6e0
	// Line 438, Address: 0x243368, Func Offset: 0x6f8
	// Line 440, Address: 0x243370, Func Offset: 0x700
	// Line 441, Address: 0x24337c, Func Offset: 0x70c
	// Line 442, Address: 0x243384, Func Offset: 0x714
	// Line 443, Address: 0x2433bc, Func Offset: 0x74c
	// Line 445, Address: 0x2433d8, Func Offset: 0x768
	// Line 446, Address: 0x2433e0, Func Offset: 0x770
	// Line 447, Address: 0x2433ec, Func Offset: 0x77c
	// Line 448, Address: 0x2433f8, Func Offset: 0x788
	// Line 450, Address: 0x243434, Func Offset: 0x7c4
	// Line 451, Address: 0x243438, Func Offset: 0x7c8
	// Line 453, Address: 0x243440, Func Offset: 0x7d0
	// Line 454, Address: 0x243458, Func Offset: 0x7e8
	// Line 455, Address: 0x243464, Func Offset: 0x7f4
	// Line 456, Address: 0x243474, Func Offset: 0x804
	// Line 458, Address: 0x24347c, Func Offset: 0x80c
	// Line 459, Address: 0x2434a0, Func Offset: 0x830
	// Line 461, Address: 0x2434d0, Func Offset: 0x860
	// Line 462, Address: 0x2434e4, Func Offset: 0x874
	// Line 463, Address: 0x2434f4, Func Offset: 0x884
	// Line 464, Address: 0x243504, Func Offset: 0x894
	// Line 466, Address: 0x243518, Func Offset: 0x8a8
	// Line 467, Address: 0x24352c, Func Offset: 0x8bc
	// Line 468, Address: 0x243548, Func Offset: 0x8d8
	// Line 469, Address: 0x24355c, Func Offset: 0x8ec
	// Line 471, Address: 0x243578, Func Offset: 0x908
	// Line 473, Address: 0x243580, Func Offset: 0x910
	// Line 474, Address: 0x243594, Func Offset: 0x924
	// Line 475, Address: 0x2435b0, Func Offset: 0x940
	// Line 476, Address: 0x2435bc, Func Offset: 0x94c
	// Line 478, Address: 0x2435c4, Func Offset: 0x954
	// Line 479, Address: 0x2435d8, Func Offset: 0x968
	// Line 480, Address: 0x2435e0, Func Offset: 0x970
	// Line 481, Address: 0x2435f0, Func Offset: 0x980
	// Line 483, Address: 0x243604, Func Offset: 0x994
	// Line 485, Address: 0x24362c, Func Offset: 0x9bc
	// Line 486, Address: 0x243648, Func Offset: 0x9d8
	// Line 488, Address: 0x243650, Func Offset: 0x9e0
	// Line 491, Address: 0x243668, Func Offset: 0x9f8
	// Line 493, Address: 0x243670, Func Offset: 0xa00
	// Line 494, Address: 0x243684, Func Offset: 0xa14
	// Line 495, Address: 0x2436a0, Func Offset: 0xa30
	// Line 497, Address: 0x2436a8, Func Offset: 0xa38
	// Line 498, Address: 0x2436bc, Func Offset: 0xa4c
	// Line 499, Address: 0x2436c8, Func Offset: 0xa58
	// Line 500, Address: 0x2436d0, Func Offset: 0xa60
	// Line 501, Address: 0x2436e0, Func Offset: 0xa70
	// Line 503, Address: 0x2436f4, Func Offset: 0xa84
	// Line 504, Address: 0x243704, Func Offset: 0xa94
	// Line 505, Address: 0x243710, Func Offset: 0xaa0
	// Line 508, Address: 0x243740, Func Offset: 0xad0
	// Line 509, Address: 0x243758, Func Offset: 0xae8
	// Line 510, Address: 0x243764, Func Offset: 0xaf4
	// Line 511, Address: 0x243774, Func Offset: 0xb04
	// Line 512, Address: 0x243788, Func Offset: 0xb18
	// Line 514, Address: 0x2437a4, Func Offset: 0xb34
	// Line 516, Address: 0x2437ac, Func Offset: 0xb3c
	// Line 517, Address: 0x2437b8, Func Offset: 0xb48
	// Line 518, Address: 0x2437c0, Func Offset: 0xb50
	// Line 519, Address: 0x2437cc, Func Offset: 0xb5c
	// Line 520, Address: 0x2437dc, Func Offset: 0xb6c
	// Line 521, Address: 0x2437ec, Func Offset: 0xb7c
	// Line 523, Address: 0x243800, Func Offset: 0xb90
	// Line 524, Address: 0x243810, Func Offset: 0xba0
	// Line 525, Address: 0x243824, Func Offset: 0xbb4
	// Line 527, Address: 0x243840, Func Offset: 0xbd0
	// Line 529, Address: 0x243848, Func Offset: 0xbd8
	// Line 530, Address: 0x243854, Func Offset: 0xbe4
	// Line 531, Address: 0x24385c, Func Offset: 0xbec
	// Line 532, Address: 0x243868, Func Offset: 0xbf8
	// Line 533, Address: 0x243878, Func Offset: 0xc08
	// Line 534, Address: 0x243888, Func Offset: 0xc18
	// Line 536, Address: 0x24389c, Func Offset: 0xc2c
	// Line 537, Address: 0x2438ac, Func Offset: 0xc3c
	// Line 538, Address: 0x2438c0, Func Offset: 0xc50
	// Line 540, Address: 0x2438dc, Func Offset: 0xc6c
	// Line 542, Address: 0x2438e4, Func Offset: 0xc74
	// Line 543, Address: 0x2438f8, Func Offset: 0xc88
	// Line 544, Address: 0x243914, Func Offset: 0xca4
	// Line 545, Address: 0x243920, Func Offset: 0xcb0
	// Line 547, Address: 0x243928, Func Offset: 0xcb8
	// Line 548, Address: 0x24393c, Func Offset: 0xccc
	// Line 549, Address: 0x243944, Func Offset: 0xcd4
	// Line 550, Address: 0x243954, Func Offset: 0xce4
	// Line 552, Address: 0x243968, Func Offset: 0xcf8
	// Line 554, Address: 0x243990, Func Offset: 0xd20
	// Line 555, Address: 0x2439ac, Func Offset: 0xd3c
	// Line 557, Address: 0x2439b4, Func Offset: 0xd44
	// Line 560, Address: 0x2439cc, Func Offset: 0xd5c
	// Line 562, Address: 0x2439d4, Func Offset: 0xd64
	// Line 563, Address: 0x2439e0, Func Offset: 0xd70
	// Line 564, Address: 0x243a10, Func Offset: 0xda0
	// Line 566, Address: 0x243a2c, Func Offset: 0xdbc
	// Line 567, Address: 0x243a40, Func Offset: 0xdd0
	// Line 568, Address: 0x243a50, Func Offset: 0xde0
	// Line 570, Address: 0x243a64, Func Offset: 0xdf4
	// Line 571, Address: 0x243a78, Func Offset: 0xe08
	// Line 572, Address: 0x243a94, Func Offset: 0xe24
	// Line 573, Address: 0x243aa8, Func Offset: 0xe38
	// Line 575, Address: 0x243b08, Func Offset: 0xe98
	// Line 577, Address: 0x243b14, Func Offset: 0xea4
	// Line 579, Address: 0x243b30, Func Offset: 0xec0
	// Line 581, Address: 0x243b38, Func Offset: 0xec8
	// Line 582, Address: 0x243b4c, Func Offset: 0xedc
	// Line 583, Address: 0x243b68, Func Offset: 0xef8
	// Line 585, Address: 0x243b70, Func Offset: 0xf00
	// Line 586, Address: 0x243b84, Func Offset: 0xf14
	// Line 587, Address: 0x243b90, Func Offset: 0xf20
	// Line 588, Address: 0x243b98, Func Offset: 0xf28
	// Line 589, Address: 0x243ba8, Func Offset: 0xf38
	// Line 591, Address: 0x243bbc, Func Offset: 0xf4c
	// Line 592, Address: 0x243bcc, Func Offset: 0xf5c
	// Line 593, Address: 0x243be0, Func Offset: 0xf70
	// Line 594, Address: 0x243bf0, Func Offset: 0xf80
	// Line 596, Address: 0x243c0c, Func Offset: 0xf9c
	// Line 598, Address: 0x243c14, Func Offset: 0xfa4
	// Line 599, Address: 0x243c20, Func Offset: 0xfb0
	// Line 600, Address: 0x243c28, Func Offset: 0xfb8
	// Line 601, Address: 0x243c34, Func Offset: 0xfc4
	// Line 602, Address: 0x243c44, Func Offset: 0xfd4
	// Line 603, Address: 0x243c54, Func Offset: 0xfe4
	// Line 605, Address: 0x243c68, Func Offset: 0xff8
	// Line 606, Address: 0x243c78, Func Offset: 0x1008
	// Line 607, Address: 0x243c8c, Func Offset: 0x101c
	// Line 609, Address: 0x243ca8, Func Offset: 0x1038
	// Line 611, Address: 0x243cb0, Func Offset: 0x1040
	// Line 612, Address: 0x243cbc, Func Offset: 0x104c
	// Line 613, Address: 0x243cc4, Func Offset: 0x1054
	// Line 615, Address: 0x243cd8, Func Offset: 0x1068
	// Line 617, Address: 0x243d00, Func Offset: 0x1090
	// Line 618, Address: 0x243d14, Func Offset: 0x10a4
	// Line 619, Address: 0x243d24, Func Offset: 0x10b4
	// Line 620, Address: 0x243d3c, Func Offset: 0x10cc
	// Line 622, Address: 0x243d44, Func Offset: 0x10d4
	// Line 626, Address: 0x243d5c, Func Offset: 0x10ec
	// Line 634, Address: 0x243d60, Func Offset: 0x10f0
	// Line 635, Address: 0x243d68, Func Offset: 0x10f8
	// Line 636, Address: 0x243d78, Func Offset: 0x1108
	// Line 637, Address: 0x243d80, Func Offset: 0x1110
	// Line 638, Address: 0x243db4, Func Offset: 0x1144
	// Line 639, Address: 0x243de0, Func Offset: 0x1170
	// Line 640, Address: 0x243de8, Func Offset: 0x1178
	// Line 642, Address: 0x243df4, Func Offset: 0x1184
	// Line 643, Address: 0x243dfc, Func Offset: 0x118c
	// Line 644, Address: 0x243e00, Func Offset: 0x1190
	// Func End, Address: 0x243e1c, Func Offset: 0x11ac
}

// 
// Start address: 0x243e20
int mcLoadMenu()
{
	char n;
	char port;
	int i;
	// Line 650, Address: 0x243e20, Func Offset: 0
	// Line 652, Address: 0x243e34, Func Offset: 0x14
	// Line 654, Address: 0x243e40, Func Offset: 0x20
	// Line 655, Address: 0x243e64, Func Offset: 0x44
	// Line 656, Address: 0x243e6c, Func Offset: 0x4c
	// Line 658, Address: 0x243e80, Func Offset: 0x60
	// Line 660, Address: 0x243eb4, Func Offset: 0x94
	// Line 661, Address: 0x243ebc, Func Offset: 0x9c
	// Line 662, Address: 0x243ecc, Func Offset: 0xac
	// Line 663, Address: 0x243ed4, Func Offset: 0xb4
	// Line 665, Address: 0x243ee8, Func Offset: 0xc8
	// Line 666, Address: 0x243ef8, Func Offset: 0xd8
	// Line 667, Address: 0x243f14, Func Offset: 0xf4
	// Line 668, Address: 0x243f48, Func Offset: 0x128
	// Line 670, Address: 0x243f50, Func Offset: 0x130
	// Line 671, Address: 0x243f64, Func Offset: 0x144
	// Line 672, Address: 0x243f7c, Func Offset: 0x15c
	// Line 674, Address: 0x243f90, Func Offset: 0x170
	// Line 675, Address: 0x243fb0, Func Offset: 0x190
	// Line 676, Address: 0x243fc4, Func Offset: 0x1a4
	// Line 677, Address: 0x243fd8, Func Offset: 0x1b8
	// Line 678, Address: 0x243fec, Func Offset: 0x1cc
	// Line 680, Address: 0x244008, Func Offset: 0x1e8
	// Line 682, Address: 0x244010, Func Offset: 0x1f0
	// Line 686, Address: 0x244060, Func Offset: 0x240
	// Line 687, Address: 0x244068, Func Offset: 0x248
	// Line 689, Address: 0x244074, Func Offset: 0x254
	// Line 690, Address: 0x244084, Func Offset: 0x264
	// Line 691, Address: 0x244090, Func Offset: 0x270
	// Line 693, Address: 0x2440b0, Func Offset: 0x290
	// Line 694, Address: 0x2440b8, Func Offset: 0x298
	// Line 696, Address: 0x2440c0, Func Offset: 0x2a0
	// Line 697, Address: 0x2440d8, Func Offset: 0x2b8
	// Line 700, Address: 0x2440f0, Func Offset: 0x2d0
	// Line 702, Address: 0x244120, Func Offset: 0x300
	// Line 703, Address: 0x244130, Func Offset: 0x310
	// Line 706, Address: 0x24415c, Func Offset: 0x33c
	// Line 707, Address: 0x244164, Func Offset: 0x344
	// Line 710, Address: 0x2441c0, Func Offset: 0x3a0
	// Line 711, Address: 0x2441c8, Func Offset: 0x3a8
	// Line 712, Address: 0x2441d0, Func Offset: 0x3b0
	// Line 713, Address: 0x2441d8, Func Offset: 0x3b8
	// Line 715, Address: 0x2441f4, Func Offset: 0x3d4
	// Line 717, Address: 0x2441fc, Func Offset: 0x3dc
	// Line 718, Address: 0x244210, Func Offset: 0x3f0
	// Line 719, Address: 0x24422c, Func Offset: 0x40c
	// Line 729, Address: 0x244234, Func Offset: 0x414
	// Line 736, Address: 0x24423c, Func Offset: 0x41c
	// Line 738, Address: 0x244244, Func Offset: 0x424
	// Line 739, Address: 0x244250, Func Offset: 0x430
	// Line 740, Address: 0x244280, Func Offset: 0x460
	// Line 742, Address: 0x24429c, Func Offset: 0x47c
	// Line 743, Address: 0x2442b0, Func Offset: 0x490
	// Line 744, Address: 0x2442c0, Func Offset: 0x4a0
	// Line 746, Address: 0x2442d4, Func Offset: 0x4b4
	// Line 747, Address: 0x2442e8, Func Offset: 0x4c8
	// Line 748, Address: 0x244304, Func Offset: 0x4e4
	// Line 749, Address: 0x244318, Func Offset: 0x4f8
	// Line 751, Address: 0x244334, Func Offset: 0x514
	// Line 753, Address: 0x24433c, Func Offset: 0x51c
	// Line 754, Address: 0x244348, Func Offset: 0x528
	// Line 755, Address: 0x244350, Func Offset: 0x530
	// Line 756, Address: 0x24435c, Func Offset: 0x53c
	// Line 757, Address: 0x24436c, Func Offset: 0x54c
	// Line 758, Address: 0x244380, Func Offset: 0x560
	// Line 759, Address: 0x244388, Func Offset: 0x568
	// Line 760, Address: 0x244390, Func Offset: 0x570
	// Line 762, Address: 0x2443ac, Func Offset: 0x58c
	// Line 764, Address: 0x2443b4, Func Offset: 0x594
	// Line 765, Address: 0x2443c0, Func Offset: 0x5a0
	// Line 766, Address: 0x2443c8, Func Offset: 0x5a8
	// Line 767, Address: 0x2443d4, Func Offset: 0x5b4
	// Line 768, Address: 0x2443e4, Func Offset: 0x5c4
	// Line 769, Address: 0x2443f4, Func Offset: 0x5d4
	// Line 771, Address: 0x244408, Func Offset: 0x5e8
	// Line 772, Address: 0x244418, Func Offset: 0x5f8
	// Line 773, Address: 0x24442c, Func Offset: 0x60c
	// Line 777, Address: 0x244448, Func Offset: 0x628
	// Line 778, Address: 0x244450, Func Offset: 0x630
	// Line 779, Address: 0x244460, Func Offset: 0x640
	// Line 780, Address: 0x244468, Func Offset: 0x648
	// Line 781, Address: 0x2444a4, Func Offset: 0x684
	// Line 782, Address: 0x2444ac, Func Offset: 0x68c
	// Line 784, Address: 0x2444b8, Func Offset: 0x698
	// Line 785, Address: 0x2444c0, Func Offset: 0x6a0
	// Line 786, Address: 0x2444ec, Func Offset: 0x6cc
	// Line 787, Address: 0x2444f4, Func Offset: 0x6d4
	// Line 788, Address: 0x244508, Func Offset: 0x6e8
	// Line 789, Address: 0x244510, Func Offset: 0x6f0
	// Line 790, Address: 0x244524, Func Offset: 0x704
	// Line 791, Address: 0x244560, Func Offset: 0x740
	// Line 793, Address: 0x244594, Func Offset: 0x774
	// Line 794, Address: 0x244598, Func Offset: 0x778
	// Func End, Address: 0x2445b4, Func Offset: 0x794
}

// 
// Start address: 0x2445c0
int mcAfterLoadMenu()
{
	// Line 800, Address: 0x2445c0, Func Offset: 0
	// Line 801, Address: 0x2445c8, Func Offset: 0x8
	// Line 802, Address: 0x2445e8, Func Offset: 0x28
	// Line 803, Address: 0x2445f8, Func Offset: 0x38
	// Line 804, Address: 0x24460c, Func Offset: 0x4c
	// Line 805, Address: 0x244614, Func Offset: 0x54
	// Line 807, Address: 0x24461c, Func Offset: 0x5c
	// Line 808, Address: 0x244628, Func Offset: 0x68
	// Line 810, Address: 0x244630, Func Offset: 0x70
	// Line 811, Address: 0x244634, Func Offset: 0x74
	// Func End, Address: 0x244644, Func Offset: 0x84
}

// 
// Start address: 0x244650
int mcCheckTimer()
{
	// Line 816, Address: 0x244650, Func Offset: 0
	// Line 817, Address: 0x244658, Func Offset: 0x8
	// Line 821, Address: 0x2446f0, Func Offset: 0xa0
	// Line 823, Address: 0x2446fc, Func Offset: 0xac
	// Line 824, Address: 0x244700, Func Offset: 0xb0
	// Func End, Address: 0x244710, Func Offset: 0xc0
}

// 
// Start address: 0x244710
int mcMenuControl()
{
	// Line 830, Address: 0x244710, Func Offset: 0
	// Line 831, Address: 0x244718, Func Offset: 0x8
	// Line 832, Address: 0x24473c, Func Offset: 0x2c
	// Line 833, Address: 0x244780, Func Offset: 0x70
	// Line 835, Address: 0x24478c, Func Offset: 0x7c
	// Line 836, Address: 0x2447a4, Func Offset: 0x94
	// Line 837, Address: 0x2447e8, Func Offset: 0xd8
	// Line 840, Address: 0x2447f4, Func Offset: 0xe4
	// Line 841, Address: 0x244810, Func Offset: 0x100
	// Line 842, Address: 0x24483c, Func Offset: 0x12c
	// Line 843, Address: 0x244850, Func Offset: 0x140
	// Line 844, Address: 0x244854, Func Offset: 0x144
	// Line 845, Address: 0x24485c, Func Offset: 0x14c
	// Line 848, Address: 0x244868, Func Offset: 0x158
	// Line 849, Address: 0x244884, Func Offset: 0x174
	// Line 850, Address: 0x244894, Func Offset: 0x184
	// Line 852, Address: 0x2448a0, Func Offset: 0x190
	// Line 853, Address: 0x2448a8, Func Offset: 0x198
	// Line 854, Address: 0x2448bc, Func Offset: 0x1ac
	// Line 855, Address: 0x2448cc, Func Offset: 0x1bc
	// Line 856, Address: 0x2448e0, Func Offset: 0x1d0
	// Line 857, Address: 0x2448e8, Func Offset: 0x1d8
	// Line 858, Address: 0x2448fc, Func Offset: 0x1ec
	// Line 859, Address: 0x244918, Func Offset: 0x208
	// Line 863, Address: 0x244920, Func Offset: 0x210
	// Line 864, Address: 0x244924, Func Offset: 0x214
	// Func End, Address: 0x244934, Func Offset: 0x224
}

// 
// Start address: 0x244940
int mcTellYesNo()
{
	int n;
	// Line 870, Address: 0x244940, Func Offset: 0
	// Line 871, Address: 0x24494c, Func Offset: 0xc
	// Line 872, Address: 0x24497c, Func Offset: 0x3c
	// Line 873, Address: 0x244984, Func Offset: 0x44
	// Line 874, Address: 0x2449a0, Func Offset: 0x60
	// Line 875, Address: 0x2449a8, Func Offset: 0x68
	// Line 876, Address: 0x2449b0, Func Offset: 0x70
	// Line 879, Address: 0x2449b4, Func Offset: 0x74
	// Line 880, Address: 0x2449d0, Func Offset: 0x90
	// Line 881, Address: 0x2449dc, Func Offset: 0x9c
	// Line 882, Address: 0x2449e4, Func Offset: 0xa4
	// Line 883, Address: 0x2449f0, Func Offset: 0xb0
	// Line 885, Address: 0x2449fc, Func Offset: 0xbc
	// Line 886, Address: 0x244a18, Func Offset: 0xd8
	// Line 887, Address: 0x244a20, Func Offset: 0xe0
	// Line 888, Address: 0x244a2c, Func Offset: 0xec
	// Line 890, Address: 0x244a38, Func Offset: 0xf8
	// Line 891, Address: 0x244a3c, Func Offset: 0xfc
	// Func End, Address: 0x244a50, Func Offset: 0x110
}

// 
// Start address: 0x244a50
int mcSelectData()
{
	int an;
	short base;
	short num;
	short fmax;
	char port;
	// Line 898, Address: 0x244a50, Func Offset: 0
	// Line 899, Address: 0x244a6c, Func Offset: 0x1c
	// Line 900, Address: 0x244a78, Func Offset: 0x28
	// Line 901, Address: 0x244a98, Func Offset: 0x48
	// Line 902, Address: 0x244a9c, Func Offset: 0x4c
	// Line 903, Address: 0x244aa0, Func Offset: 0x50
	// Line 904, Address: 0x244ab0, Func Offset: 0x60
	// Line 905, Address: 0x244acc, Func Offset: 0x7c
	// Line 906, Address: 0x244ad4, Func Offset: 0x84
	// Line 907, Address: 0x244ae0, Func Offset: 0x90
	// Line 908, Address: 0x244b08, Func Offset: 0xb8
	// Line 909, Address: 0x244b14, Func Offset: 0xc4
	// Line 910, Address: 0x244b20, Func Offset: 0xd0
	// Line 911, Address: 0x244b28, Func Offset: 0xd8
	// Line 912, Address: 0x244b34, Func Offset: 0xe4
	// Line 913, Address: 0x244b60, Func Offset: 0x110
	// Line 914, Address: 0x244b6c, Func Offset: 0x11c
	// Line 915, Address: 0x244b78, Func Offset: 0x128
	// Line 916, Address: 0x244b80, Func Offset: 0x130
	// Line 918, Address: 0x244b8c, Func Offset: 0x13c
	// Line 920, Address: 0x244b98, Func Offset: 0x148
	// Line 921, Address: 0x244bb4, Func Offset: 0x164
	// Line 923, Address: 0x244bb8, Func Offset: 0x168
	// Line 924, Address: 0x244bf8, Func Offset: 0x1a8
	// Line 926, Address: 0x244c04, Func Offset: 0x1b4
	// Line 927, Address: 0x244c3c, Func Offset: 0x1ec
	// Line 928, Address: 0x244c44, Func Offset: 0x1f4
	// Line 929, Address: 0x244c4c, Func Offset: 0x1fc
	// Line 930, Address: 0x244c60, Func Offset: 0x210
	// Line 932, Address: 0x244c64, Func Offset: 0x214
	// Line 933, Address: 0x244c74, Func Offset: 0x224
	// Line 934, Address: 0x244ca4, Func Offset: 0x254
	// Line 935, Address: 0x244cac, Func Offset: 0x25c
	// Line 936, Address: 0x244ccc, Func Offset: 0x27c
	// Line 937, Address: 0x244cd4, Func Offset: 0x284
	// Line 940, Address: 0x244ce0, Func Offset: 0x290
	// Line 942, Address: 0x244cf0, Func Offset: 0x2a0
	// Line 943, Address: 0x244d28, Func Offset: 0x2d8
	// Line 944, Address: 0x244d30, Func Offset: 0x2e0
	// Line 945, Address: 0x244d3c, Func Offset: 0x2ec
	// Line 946, Address: 0x244d4c, Func Offset: 0x2fc
	// Line 947, Address: 0x244d88, Func Offset: 0x338
	// Line 948, Address: 0x244d90, Func Offset: 0x340
	// Line 949, Address: 0x244db4, Func Offset: 0x364
	// Line 950, Address: 0x244dcc, Func Offset: 0x37c
	// Line 953, Address: 0x244dd8, Func Offset: 0x388
	// Line 955, Address: 0x244de8, Func Offset: 0x398
	// Line 956, Address: 0x244e10, Func Offset: 0x3c0
	// Line 957, Address: 0x244e18, Func Offset: 0x3c8
	// Line 958, Address: 0x244e30, Func Offset: 0x3e0
	// Line 959, Address: 0x244e44, Func Offset: 0x3f4
	// Line 960, Address: 0x244e50, Func Offset: 0x400
	// Line 961, Address: 0x244e58, Func Offset: 0x408
	// Line 962, Address: 0x244e6c, Func Offset: 0x41c
	// Line 965, Address: 0x244e70, Func Offset: 0x420
	// Line 966, Address: 0x244e78, Func Offset: 0x428
	// Line 967, Address: 0x244e84, Func Offset: 0x434
	// Line 968, Address: 0x244e98, Func Offset: 0x448
	// Line 969, Address: 0x244ea4, Func Offset: 0x454
	// Line 970, Address: 0x244ebc, Func Offset: 0x46c
	// Line 973, Address: 0x244ec0, Func Offset: 0x470
	// Line 975, Address: 0x244ed0, Func Offset: 0x480
	// Line 976, Address: 0x244f04, Func Offset: 0x4b4
	// Line 977, Address: 0x244f0c, Func Offset: 0x4bc
	// Line 978, Address: 0x244f1c, Func Offset: 0x4cc
	// Line 980, Address: 0x244f30, Func Offset: 0x4e0
	// Line 981, Address: 0x244f38, Func Offset: 0x4e8
	// Line 982, Address: 0x244f3c, Func Offset: 0x4ec
	// Line 984, Address: 0x244f40, Func Offset: 0x4f0
	// Line 985, Address: 0x244f48, Func Offset: 0x4f8
	// Line 986, Address: 0x244f6c, Func Offset: 0x51c
	// Line 987, Address: 0x244f7c, Func Offset: 0x52c
	// Line 988, Address: 0x244f80, Func Offset: 0x530
	// Line 989, Address: 0x244f88, Func Offset: 0x538
	// Line 991, Address: 0x244f94, Func Offset: 0x544
	// Line 992, Address: 0x244f9c, Func Offset: 0x54c
	// Line 995, Address: 0x244fa8, Func Offset: 0x558
	// Line 998, Address: 0x244fb8, Func Offset: 0x568
	// Line 999, Address: 0x244fc8, Func Offset: 0x578
	// Line 1000, Address: 0x244fe0, Func Offset: 0x590
	// Line 1001, Address: 0x244fec, Func Offset: 0x59c
	// Line 1002, Address: 0x245000, Func Offset: 0x5b0
	// Line 1003, Address: 0x245024, Func Offset: 0x5d4
	// Line 1004, Address: 0x245030, Func Offset: 0x5e0
	// Line 1005, Address: 0x245038, Func Offset: 0x5e8
	// Line 1007, Address: 0x245080, Func Offset: 0x630
	// Line 1008, Address: 0x245088, Func Offset: 0x638
	// Line 1009, Address: 0x2450ac, Func Offset: 0x65c
	// Line 1010, Address: 0x2450b8, Func Offset: 0x668
	// Line 1011, Address: 0x2450c0, Func Offset: 0x670
	// Line 1014, Address: 0x245104, Func Offset: 0x6b4
	// Line 1015, Address: 0x24513c, Func Offset: 0x6ec
	// Line 1016, Address: 0x245150, Func Offset: 0x700
	// Line 1017, Address: 0x245158, Func Offset: 0x708
	// Line 1018, Address: 0x245178, Func Offset: 0x728
	// Line 1019, Address: 0x245180, Func Offset: 0x730
	// Line 1022, Address: 0x24518c, Func Offset: 0x73c
	// Line 1024, Address: 0x24519c, Func Offset: 0x74c
	// Line 1025, Address: 0x2451e0, Func Offset: 0x790
	// Line 1026, Address: 0x2451e8, Func Offset: 0x798
	// Line 1027, Address: 0x2451f0, Func Offset: 0x7a0
	// Line 1028, Address: 0x245214, Func Offset: 0x7c4
	// Line 1029, Address: 0x24522c, Func Offset: 0x7dc
	// Line 1032, Address: 0x245238, Func Offset: 0x7e8
	// Line 1035, Address: 0x245248, Func Offset: 0x7f8
	// Line 1036, Address: 0x245260, Func Offset: 0x810
	// Line 1037, Address: 0x245270, Func Offset: 0x820
	// Line 1038, Address: 0x24528c, Func Offset: 0x83c
	// Line 1039, Address: 0x2452d8, Func Offset: 0x888
	// Line 1042, Address: 0x2452e4, Func Offset: 0x894
	// Line 1043, Address: 0x245300, Func Offset: 0x8b0
	// Line 1044, Address: 0x24530c, Func Offset: 0x8bc
	// Line 1045, Address: 0x245328, Func Offset: 0x8d8
	// Line 1046, Address: 0x245330, Func Offset: 0x8e0
	// Line 1047, Address: 0x24533c, Func Offset: 0x8ec
	// Line 1048, Address: 0x245354, Func Offset: 0x904
	// Line 1058, Address: 0x245360, Func Offset: 0x910
	// Line 1059, Address: 0x245388, Func Offset: 0x938
	// Line 1060, Address: 0x245394, Func Offset: 0x944
	// Line 1061, Address: 0x2453a0, Func Offset: 0x950
	// Line 1062, Address: 0x2453a8, Func Offset: 0x958
	// Line 1063, Address: 0x2453b4, Func Offset: 0x964
	// Line 1064, Address: 0x2453e0, Func Offset: 0x990
	// Line 1065, Address: 0x2453ec, Func Offset: 0x99c
	// Line 1066, Address: 0x2453f8, Func Offset: 0x9a8
	// Line 1067, Address: 0x245400, Func Offset: 0x9b0
	// Line 1069, Address: 0x24540c, Func Offset: 0x9bc
	// Line 1070, Address: 0x245410, Func Offset: 0x9c0
	// Func End, Address: 0x245434, Func Offset: 0x9e4
}

// 
// Start address: 0x245440
int mcGetBlinkAlpha()
{
	int a;
	// Line 1077, Address: 0x245440, Func Offset: 0
	// Line 1078, Address: 0x245468, Func Offset: 0x28
	// Line 1079, Address: 0x245494, Func Offset: 0x54
	// Line 1080, Address: 0x24549c, Func Offset: 0x5c
	// Line 1083, Address: 0x2454c0, Func Offset: 0x80
	// Func End, Address: 0x2454c8, Func Offset: 0x88
}

// 
// Start address: 0x2454d0
int mcPutMes(short n, short x, short y, short align, short align2)
{
	// Line 1093, Address: 0x2454d0, Func Offset: 0
	// Line 1095, Address: 0x2454f8, Func Offset: 0x28
	// Line 1100, Address: 0x245558, Func Offset: 0x88
	// Func End, Address: 0x245578, Func Offset: 0xa8
}

// 
// Start address: 0x245580
void mcPutMes2(short n, short x, short y)
{
	// Line 1107, Address: 0x245580, Func Offset: 0
	// Line 1108, Address: 0x2455a0, Func Offset: 0x20
	// Line 1109, Address: 0x2455b4, Func Offset: 0x34
	// Line 1110, Address: 0x2455bc, Func Offset: 0x3c
	// Line 1111, Address: 0x2455c4, Func Offset: 0x44
	// Line 1112, Address: 0x2455f4, Func Offset: 0x74
	// Line 1113, Address: 0x2455fc, Func Offset: 0x7c
	// Line 1115, Address: 0x245604, Func Offset: 0x84
	// Func End, Address: 0x245620, Func Offset: 0xa0
}

// 
// Start address: 0x245620
void mcPutBigFont(short n, short y)
{
	unsigned int bak;
	// Line 1122, Address: 0x245620, Func Offset: 0
	// Line 1123, Address: 0x245634, Func Offset: 0x14
	// Line 1124, Address: 0x245648, Func Offset: 0x28
	// Line 1125, Address: 0x245660, Func Offset: 0x40
	// Line 1126, Address: 0x24566c, Func Offset: 0x4c
	// Line 1128, Address: 0x2456a0, Func Offset: 0x80
	// Line 1130, Address: 0x2456a8, Func Offset: 0x88
	// Func End, Address: 0x2456c0, Func Offset: 0xa0
}

// 
// Start address: 0x2456c0
void mcDrawMenu()
{
	// Line 1135, Address: 0x2456c0, Func Offset: 0
	// Line 1136, Address: 0x2456c8, Func Offset: 0x8
	// Line 1137, Address: 0x2456d0, Func Offset: 0x10
	// Line 1138, Address: 0x2456e4, Func Offset: 0x24
	// Line 1140, Address: 0x2456ec, Func Offset: 0x2c
	// Line 1142, Address: 0x2456f4, Func Offset: 0x34
	// Line 1143, Address: 0x245704, Func Offset: 0x44
	// Line 1144, Address: 0x24570c, Func Offset: 0x4c
	// Line 1145, Address: 0x245714, Func Offset: 0x54
	// Line 1147, Address: 0x24571c, Func Offset: 0x5c
	// Line 1149, Address: 0x245724, Func Offset: 0x64
	// Line 1150, Address: 0x24572c, Func Offset: 0x6c
	// Line 1157, Address: 0x245734, Func Offset: 0x74
	// Line 1159, Address: 0x24573c, Func Offset: 0x7c
	// Line 1161, Address: 0x245744, Func Offset: 0x84
	// Line 1162, Address: 0x24574c, Func Offset: 0x8c
	// Line 1163, Address: 0x245760, Func Offset: 0xa0
	// Func End, Address: 0x245770, Func Offset: 0xb0
}

// 
// Start address: 0x245770
void mcDrawFrame()
{
	int d;
	int i;
	// Line 1168, Address: 0x245770, Func Offset: 0
	// Line 1170, Address: 0x245784, Func Offset: 0x14
	// Line 1171, Address: 0x24579c, Func Offset: 0x2c
	// Line 1174, Address: 0x2457bc, Func Offset: 0x4c
	// Line 1175, Address: 0x2457d8, Func Offset: 0x68
	// Line 1176, Address: 0x2457f8, Func Offset: 0x88
	// Line 1177, Address: 0x24580c, Func Offset: 0x9c
	// Line 1178, Address: 0x245818, Func Offset: 0xa8
	// Line 1180, Address: 0x245878, Func Offset: 0x108
	// Line 1182, Address: 0x2458c0, Func Offset: 0x150
	// Line 1183, Address: 0x2458d0, Func Offset: 0x160
	// Line 1184, Address: 0x2458f0, Func Offset: 0x180
	// Line 1185, Address: 0x245920, Func Offset: 0x1b0
	// Line 1187, Address: 0x245938, Func Offset: 0x1c8
	// Line 1188, Address: 0x245954, Func Offset: 0x1e4
	// Line 1189, Address: 0x24596c, Func Offset: 0x1fc
	// Line 1190, Address: 0x245978, Func Offset: 0x208
	// Line 1192, Address: 0x2459e0, Func Offset: 0x270
	// Line 1193, Address: 0x2459f0, Func Offset: 0x280
	// Line 1194, Address: 0x245a0c, Func Offset: 0x29c
	// Line 1196, Address: 0x245a28, Func Offset: 0x2b8
	// Line 1197, Address: 0x245a3c, Func Offset: 0x2cc
	// Line 1198, Address: 0x245a64, Func Offset: 0x2f4
	// Line 1199, Address: 0x245a70, Func Offset: 0x300
	// Line 1201, Address: 0x245ad4, Func Offset: 0x364
	// Line 1202, Address: 0x245ae4, Func Offset: 0x374
	// Line 1203, Address: 0x245af0, Func Offset: 0x380
	// Line 1205, Address: 0x245b4c, Func Offset: 0x3dc
	// Line 1206, Address: 0x245b58, Func Offset: 0x3e8
	// Line 1207, Address: 0x245b78, Func Offset: 0x408
	// Line 1208, Address: 0x245b84, Func Offset: 0x414
	// Line 1210, Address: 0x245bec, Func Offset: 0x47c
	// Line 1211, Address: 0x245bf8, Func Offset: 0x488
	// Line 1212, Address: 0x245c04, Func Offset: 0x494
	// Line 1214, Address: 0x245c70, Func Offset: 0x500
	// Line 1215, Address: 0x245c84, Func Offset: 0x514
	// Line 1216, Address: 0x245c90, Func Offset: 0x520
	// Line 1218, Address: 0x245cf8, Func Offset: 0x588
	// Line 1219, Address: 0x245d08, Func Offset: 0x598
	// Line 1220, Address: 0x245d20, Func Offset: 0x5b0
	// Line 1222, Address: 0x245d28, Func Offset: 0x5b8
	// Line 1223, Address: 0x245d30, Func Offset: 0x5c0
	// Line 1224, Address: 0x245d44, Func Offset: 0x5d4
	// Line 1225, Address: 0x245d5c, Func Offset: 0x5ec
	// Line 1226, Address: 0x245d64, Func Offset: 0x5f4
	// Line 1228, Address: 0x245d7c, Func Offset: 0x60c
	// Line 1230, Address: 0x245d98, Func Offset: 0x628
	// Line 1231, Address: 0x245db0, Func Offset: 0x640
	// Line 1232, Address: 0x245dc8, Func Offset: 0x658
	// Line 1233, Address: 0x245dd0, Func Offset: 0x660
	// Line 1235, Address: 0x245de8, Func Offset: 0x678
	// Line 1237, Address: 0x245e04, Func Offset: 0x694
	// Line 1238, Address: 0x245e0c, Func Offset: 0x69c
	// Func End, Address: 0x245e28, Func Offset: 0x6b8
}

// 
// Start address: 0x245e30
void mcDrawSlot()
{
	int i;
	int s;
	int n;
	int i;
	int fmax;
	char port;
	// Line 1281, Address: 0x245e30, Func Offset: 0
	// Line 1282, Address: 0x245e50, Func Offset: 0x20
	// Line 1283, Address: 0x245e5c, Func Offset: 0x2c
	// Line 1286, Address: 0x245e68, Func Offset: 0x38
	// Line 1287, Address: 0x245e78, Func Offset: 0x48
	// Line 1288, Address: 0x245e80, Func Offset: 0x50
	// Line 1291, Address: 0x245e88, Func Offset: 0x58
	// Line 1294, Address: 0x245eb4, Func Offset: 0x84
	// Line 1296, Address: 0x245ee4, Func Offset: 0xb4
	// Line 1298, Address: 0x245ef0, Func Offset: 0xc0
	// Line 1300, Address: 0x245ef8, Func Offset: 0xc8
	// Line 1301, Address: 0x245f1c, Func Offset: 0xec
	// Line 1302, Address: 0x245f28, Func Offset: 0xf8
	// Line 1304, Address: 0x245f30, Func Offset: 0x100
	// Line 1305, Address: 0x245f3c, Func Offset: 0x10c
	// Line 1308, Address: 0x245f44, Func Offset: 0x114
	// Line 1309, Address: 0x245f50, Func Offset: 0x120
	// Line 1311, Address: 0x245f58, Func Offset: 0x128
	// Line 1312, Address: 0x245f70, Func Offset: 0x140
	// Line 1313, Address: 0x245f7c, Func Offset: 0x14c
	// Line 1316, Address: 0x245f84, Func Offset: 0x154
	// Line 1317, Address: 0x245f9c, Func Offset: 0x16c
	// Line 1318, Address: 0x245fa0, Func Offset: 0x170
	// Line 1319, Address: 0x245fbc, Func Offset: 0x18c
	// Line 1320, Address: 0x245fe4, Func Offset: 0x1b4
	// Line 1322, Address: 0x245fec, Func Offset: 0x1bc
	// Line 1323, Address: 0x245ff8, Func Offset: 0x1c8
	// Line 1325, Address: 0x246028, Func Offset: 0x1f8
	// Line 1326, Address: 0x24602c, Func Offset: 0x1fc
	// Line 1327, Address: 0x246030, Func Offset: 0x200
	// Line 1329, Address: 0x246038, Func Offset: 0x208
	// Line 1330, Address: 0x246050, Func Offset: 0x220
	// Line 1331, Address: 0x246058, Func Offset: 0x228
	// Line 1332, Address: 0x246064, Func Offset: 0x234
	// Line 1333, Address: 0x24608c, Func Offset: 0x25c
	// Line 1334, Address: 0x246090, Func Offset: 0x260
	// Line 1335, Address: 0x246094, Func Offset: 0x264
	// Line 1337, Address: 0x24609c, Func Offset: 0x26c
	// Line 1339, Address: 0x2460ac, Func Offset: 0x27c
	// Line 1340, Address: 0x2460b0, Func Offset: 0x280
	// Line 1341, Address: 0x2460c4, Func Offset: 0x294
	// Line 1342, Address: 0x2460d0, Func Offset: 0x2a0
	// Line 1343, Address: 0x2460dc, Func Offset: 0x2ac
	// Line 1344, Address: 0x2460f0, Func Offset: 0x2c0
	// Line 1349, Address: 0x246118, Func Offset: 0x2e8
	// Line 1350, Address: 0x246128, Func Offset: 0x2f8
	// Line 1351, Address: 0x246134, Func Offset: 0x304
	// Line 1352, Address: 0x246140, Func Offset: 0x310
	// Line 1353, Address: 0x246158, Func Offset: 0x328
	// Line 1354, Address: 0x246160, Func Offset: 0x330
	// Line 1355, Address: 0x246178, Func Offset: 0x348
	// Line 1356, Address: 0x246188, Func Offset: 0x358
	// Line 1357, Address: 0x246198, Func Offset: 0x368
	// Line 1359, Address: 0x2461a0, Func Offset: 0x370
	// Line 1360, Address: 0x2461ac, Func Offset: 0x37c
	// Line 1361, Address: 0x2461c0, Func Offset: 0x390
	// Line 1362, Address: 0x2461d0, Func Offset: 0x3a0
	// Line 1363, Address: 0x2461e8, Func Offset: 0x3b8
	// Line 1364, Address: 0x2461f4, Func Offset: 0x3c4
	// Line 1365, Address: 0x2461fc, Func Offset: 0x3cc
	// Line 1367, Address: 0x24620c, Func Offset: 0x3dc
	// Line 1368, Address: 0x246214, Func Offset: 0x3e4
	// Line 1370, Address: 0x24621c, Func Offset: 0x3ec
	// Line 1371, Address: 0x246220, Func Offset: 0x3f0
	// Line 1372, Address: 0x246250, Func Offset: 0x420
	// Line 1377, Address: 0x246258, Func Offset: 0x428
	// Line 1378, Address: 0x246290, Func Offset: 0x460
	// Line 1379, Address: 0x246294, Func Offset: 0x464
	// Line 1381, Address: 0x2462c8, Func Offset: 0x498
	// Line 1382, Address: 0x2462ec, Func Offset: 0x4bc
	// Line 1383, Address: 0x2462f4, Func Offset: 0x4c4
	// Line 1385, Address: 0x246318, Func Offset: 0x4e8
	// Line 1386, Address: 0x246320, Func Offset: 0x4f0
	// Line 1387, Address: 0x246344, Func Offset: 0x514
	// Line 1388, Address: 0x246374, Func Offset: 0x544
	// Line 1389, Address: 0x246378, Func Offset: 0x548
	// Line 1391, Address: 0x246390, Func Offset: 0x560
	// Line 1392, Address: 0x2463a8, Func Offset: 0x578
	// Line 1393, Address: 0x2463c4, Func Offset: 0x594
	// Line 1395, Address: 0x2463e8, Func Offset: 0x5b8
	// Line 1396, Address: 0x246404, Func Offset: 0x5d4
	// Line 1397, Address: 0x246440, Func Offset: 0x610
	// Line 1398, Address: 0x24647c, Func Offset: 0x64c
	// Line 1399, Address: 0x2464ac, Func Offset: 0x67c
	// Line 1401, Address: 0x2464b4, Func Offset: 0x684
	// Line 1402, Address: 0x2464cc, Func Offset: 0x69c
	// Line 1404, Address: 0x2464f4, Func Offset: 0x6c4
	// Line 1405, Address: 0x246510, Func Offset: 0x6e0
	// Line 1406, Address: 0x24652c, Func Offset: 0x6fc
	// Line 1407, Address: 0x24654c, Func Offset: 0x71c
	// Line 1408, Address: 0x246568, Func Offset: 0x738
	// Line 1409, Address: 0x246588, Func Offset: 0x758
	// Line 1410, Address: 0x2465a4, Func Offset: 0x774
	// Line 1411, Address: 0x2465c0, Func Offset: 0x790
	// Line 1412, Address: 0x2465dc, Func Offset: 0x7ac
	// Line 1414, Address: 0x2465e4, Func Offset: 0x7b4
	// Line 1415, Address: 0x246600, Func Offset: 0x7d0
	// Line 1417, Address: 0x246618, Func Offset: 0x7e8
	// Line 1418, Address: 0x246630, Func Offset: 0x800
	// Line 1420, Address: 0x246658, Func Offset: 0x828
	// Line 1421, Address: 0x246674, Func Offset: 0x844
	// Line 1422, Address: 0x246690, Func Offset: 0x860
	// Line 1423, Address: 0x2466c8, Func Offset: 0x898
	// Line 1424, Address: 0x2466e4, Func Offset: 0x8b4
	// Line 1425, Address: 0x246710, Func Offset: 0x8e0
	// Line 1426, Address: 0x246730, Func Offset: 0x900
	// Line 1427, Address: 0x24674c, Func Offset: 0x91c
	// Line 1428, Address: 0x246768, Func Offset: 0x938
	// Line 1430, Address: 0x246770, Func Offset: 0x940
	// Func End, Address: 0x246798, Func Offset: 0x968
}

// 
// Start address: 0x2467a0
void mcDrawPlace(short num, short y)
{
	// Line 1437, Address: 0x2467a0, Func Offset: 0
	// Line 1439, Address: 0x2467b8, Func Offset: 0x18
	// Line 1441, Address: 0x2467e0, Func Offset: 0x40
	// Line 1442, Address: 0x2467fc, Func Offset: 0x5c
	// Line 1443, Address: 0x246818, Func Offset: 0x78
	// Line 1444, Address: 0x24684c, Func Offset: 0xac
	// Line 1445, Address: 0x24686c, Func Offset: 0xcc
	// Line 1446, Address: 0x246898, Func Offset: 0xf8
	// Line 1447, Address: 0x2468b4, Func Offset: 0x114
	// Line 1448, Address: 0x2468cc, Func Offset: 0x12c
	// Line 1450, Address: 0x2468d4, Func Offset: 0x134
	// Line 1451, Address: 0x2468f8, Func Offset: 0x158
	// Func End, Address: 0x246910, Func Offset: 0x170
}

// 
// Start address: 0x246910
void mcDrawAddInfo(MC_FILEINFO* fi, short y)
{
	int n;
	int i;
	unsigned short data[7];
	unsigned short buf[8];
	unsigned int itime;
	char buf[9];
	unsigned int itime;
	char buf[9];
	// Line 1456, Address: 0x246910, Func Offset: 0
	// Line 1457, Address: 0x246920, Func Offset: 0x10
	// Line 1461, Address: 0x246954, Func Offset: 0x44
	// Line 1462, Address: 0x246984, Func Offset: 0x74
	// Line 1463, Address: 0x2469a0, Func Offset: 0x90
	// Line 1464, Address: 0x2469e4, Func Offset: 0xd4
	// Line 1466, Address: 0x246a0c, Func Offset: 0xfc
	// Line 1470, Address: 0x246a14, Func Offset: 0x104
	// Line 1471, Address: 0x246a44, Func Offset: 0x134
	// Line 1472, Address: 0x246a60, Func Offset: 0x150
	// Line 1473, Address: 0x246aa4, Func Offset: 0x194
	// Line 1474, Address: 0x246abc, Func Offset: 0x1ac
	// Line 1476, Address: 0x246ae4, Func Offset: 0x1d4
	// Line 1480, Address: 0x246aec, Func Offset: 0x1dc
	// Line 1483, Address: 0x246b10, Func Offset: 0x200
	// Line 1484, Address: 0x246b14, Func Offset: 0x204
	// Line 1485, Address: 0x246b20, Func Offset: 0x210
	// Line 1486, Address: 0x246b38, Func Offset: 0x228
	// Line 1487, Address: 0x246b54, Func Offset: 0x244
	// Line 1488, Address: 0x246b58, Func Offset: 0x248
	// Line 1489, Address: 0x246b6c, Func Offset: 0x25c
	// Line 1490, Address: 0x246b74, Func Offset: 0x264
	// Line 1491, Address: 0x246b84, Func Offset: 0x274
	// Line 1496, Address: 0x246bb8, Func Offset: 0x2a8
	// Func End, Address: 0x246bcc, Func Offset: 0x2bc
}

// 
// Start address: 0x246bd0
void mcDrawWarning(short num)
{
	// Line 1501, Address: 0x246bd0, Func Offset: 0
	// Line 1502, Address: 0x246be0, Func Offset: 0x10
	// Line 1503, Address: 0x246bf8, Func Offset: 0x28
	// Line 1504, Address: 0x246c14, Func Offset: 0x44
	// Func End, Address: 0x246c28, Func Offset: 0x58
}

// 
// Start address: 0x246c30
void mcDrawStatus()
{
	int y;
	int x;
	int n;
	char buf[32];
	// Line 1509, Address: 0x246c30, Func Offset: 0
	// Line 1510, Address: 0x246c40, Func Offset: 0x10
	// Line 1512, Address: 0x246c58, Func Offset: 0x28
	// Line 1513, Address: 0x246c64, Func Offset: 0x34
	// Line 1514, Address: 0x246c74, Func Offset: 0x44
	// Line 1515, Address: 0x246c84, Func Offset: 0x54
	// Line 1516, Address: 0x246c90, Func Offset: 0x60
	// Line 1518, Address: 0x246ce4, Func Offset: 0xb4
	// Line 1519, Address: 0x246d00, Func Offset: 0xd0
	// Line 1521, Address: 0x246d30, Func Offset: 0x100
	// Line 1522, Address: 0x246d44, Func Offset: 0x114
	// Line 1523, Address: 0x246d58, Func Offset: 0x128
	// Line 1525, Address: 0x246d60, Func Offset: 0x130
	// Line 1526, Address: 0x246d74, Func Offset: 0x144
	// Line 1530, Address: 0x246d88, Func Offset: 0x158
	// Line 1532, Address: 0x246d90, Func Offset: 0x160
	// Line 1533, Address: 0x246dbc, Func Offset: 0x18c
	// Line 1534, Address: 0x246dcc, Func Offset: 0x19c
	// Line 1535, Address: 0x246dd8, Func Offset: 0x1a8
	// Line 1537, Address: 0x246dec, Func Offset: 0x1bc
	// Line 1539, Address: 0x246e2c, Func Offset: 0x1fc
	// Line 1540, Address: 0x246e38, Func Offset: 0x208
	// Line 1541, Address: 0x246e48, Func Offset: 0x218
	// Line 1542, Address: 0x246e64, Func Offset: 0x234
	// Line 1543, Address: 0x246e6c, Func Offset: 0x23c
	// Line 1544, Address: 0x246e74, Func Offset: 0x244
	// Line 1545, Address: 0x246eac, Func Offset: 0x27c
	// Line 1546, Address: 0x246ecc, Func Offset: 0x29c
	// Line 1547, Address: 0x246ed4, Func Offset: 0x2a4
	// Line 1549, Address: 0x246edc, Func Offset: 0x2ac
	// Line 1551, Address: 0x246ee4, Func Offset: 0x2b4
	// Line 1552, Address: 0x246efc, Func Offset: 0x2cc
	// Line 1553, Address: 0x246f08, Func Offset: 0x2d8
	// Line 1554, Address: 0x246f18, Func Offset: 0x2e8
	// Line 1555, Address: 0x246f34, Func Offset: 0x304
	// Line 1556, Address: 0x246f50, Func Offset: 0x320
	// Line 1557, Address: 0x246f6c, Func Offset: 0x33c
	// Line 1558, Address: 0x246f88, Func Offset: 0x358
	// Line 1559, Address: 0x246f90, Func Offset: 0x360
	// Line 1560, Address: 0x246f98, Func Offset: 0x368
	// Line 1561, Address: 0x246fd0, Func Offset: 0x3a0
	// Line 1562, Address: 0x246ff0, Func Offset: 0x3c0
	// Line 1563, Address: 0x247024, Func Offset: 0x3f4
	// Line 1564, Address: 0x247044, Func Offset: 0x414
	// Line 1565, Address: 0x247078, Func Offset: 0x448
	// Line 1567, Address: 0x24709c, Func Offset: 0x46c
	// Line 1568, Address: 0x2470e0, Func Offset: 0x4b0
	// Line 1569, Address: 0x2470e8, Func Offset: 0x4b8
	// Line 1570, Address: 0x2470f0, Func Offset: 0x4c0
	// Line 1571, Address: 0x2470f8, Func Offset: 0x4c8
	// Line 1572, Address: 0x247110, Func Offset: 0x4e0
	// Line 1573, Address: 0x247118, Func Offset: 0x4e8
	// Line 1574, Address: 0x247130, Func Offset: 0x500
	// Line 1575, Address: 0x247154, Func Offset: 0x524
	// Line 1578, Address: 0x247184, Func Offset: 0x554
	// Line 1579, Address: 0x2471a0, Func Offset: 0x570
	// Line 1582, Address: 0x2471a8, Func Offset: 0x578
	// Line 1587, Address: 0x2471b4, Func Offset: 0x584
	// Line 1592, Address: 0x2471d8, Func Offset: 0x5a8
	// Line 1595, Address: 0x2471f4, Func Offset: 0x5c4
	// Line 1596, Address: 0x247200, Func Offset: 0x5d0
	// Line 1598, Address: 0x247224, Func Offset: 0x5f4
	// Line 1599, Address: 0x247240, Func Offset: 0x610
	// Line 1600, Address: 0x24727c, Func Offset: 0x64c
	// Line 1601, Address: 0x2472b0, Func Offset: 0x680
	// Line 1602, Address: 0x2472e4, Func Offset: 0x6b4
	// Line 1604, Address: 0x2472ec, Func Offset: 0x6bc
	// Func End, Address: 0x247304, Func Offset: 0x6d4
}

// 
// Start address: 0x247310
void mcDrawBG()
{
	int base;
	int y;
	// Line 1609, Address: 0x247310, Func Offset: 0
	// Line 1611, Address: 0x247320, Func Offset: 0x10
	// Line 1612, Address: 0x24732c, Func Offset: 0x1c
	// Line 1613, Address: 0x247338, Func Offset: 0x28
	// Line 1614, Address: 0x247344, Func Offset: 0x34
	// Line 1616, Address: 0x247388, Func Offset: 0x78
	// Line 1617, Address: 0x24739c, Func Offset: 0x8c
	// Line 1618, Address: 0x2473a4, Func Offset: 0x94
	// Line 1619, Address: 0x2473c8, Func Offset: 0xb8
	// Line 1620, Address: 0x247400, Func Offset: 0xf0
	// Line 1621, Address: 0x247438, Func Offset: 0x128
	// Line 1622, Address: 0x24746c, Func Offset: 0x15c
	// Line 1623, Address: 0x2474b4, Func Offset: 0x1a4
	// Line 1624, Address: 0x2474e8, Func Offset: 0x1d8
	// Line 1626, Address: 0x247504, Func Offset: 0x1f4
	// Line 1627, Address: 0x247520, Func Offset: 0x210
	// Line 1629, Address: 0x247554, Func Offset: 0x244
	// Line 1630, Address: 0x247580, Func Offset: 0x270
	// Line 1631, Address: 0x247598, Func Offset: 0x288
	// Line 1632, Address: 0x2475b8, Func Offset: 0x2a8
	// Line 1633, Address: 0x2475e0, Func Offset: 0x2d0
	// Line 1634, Address: 0x247604, Func Offset: 0x2f4
	// Line 1635, Address: 0x24760c, Func Offset: 0x2fc
	// Func End, Address: 0x247624, Func Offset: 0x314
}

// 
// Start address: 0x247630
void mcDrawBGWord()
{
	int y;
	int n;
	int i;
	// Line 1640, Address: 0x247630, Func Offset: 0
	// Line 1642, Address: 0x247640, Func Offset: 0x10
	// Line 1643, Address: 0x247650, Func Offset: 0x20
	// Line 1644, Address: 0x247668, Func Offset: 0x38
	// Line 1645, Address: 0x247670, Func Offset: 0x40
	// Line 1647, Address: 0x247688, Func Offset: 0x58
	// Line 1648, Address: 0x2476d0, Func Offset: 0xa0
	// Line 1649, Address: 0x2476dc, Func Offset: 0xac
	// Line 1650, Address: 0x2476f4, Func Offset: 0xc4
	// Line 1652, Address: 0x247738, Func Offset: 0x108
	// Line 1653, Address: 0x247764, Func Offset: 0x134
	// Line 1654, Address: 0x247768, Func Offset: 0x138
	// Line 1655, Address: 0x24777c, Func Offset: 0x14c
	// Func End, Address: 0x247794, Func Offset: 0x164
}

// 
// Start address: 0x2477a0
void mcDmaKick()
{
	// Line 1660, Address: 0x2477a0, Func Offset: 0
	// Line 1661, Address: 0x2477a8, Func Offset: 0x8
	// Line 1662, Address: 0x2477bc, Func Offset: 0x1c
	// Line 1663, Address: 0x2477e0, Func Offset: 0x40
	// Line 1664, Address: 0x2477f4, Func Offset: 0x54
	// Line 1665, Address: 0x2477fc, Func Offset: 0x5c
	// Line 1666, Address: 0x247804, Func Offset: 0x64
	// Func End, Address: 0x247814, Func Offset: 0x74
}

// 
// Start address: 0x247820
void mcLoadMenuData()
{
	// Line 1671, Address: 0x247820, Func Offset: 0
	// Line 1672, Address: 0x247828, Func Offset: 0x8
	// Line 1673, Address: 0x24783c, Func Offset: 0x1c
	// Line 1675, Address: 0x247860, Func Offset: 0x40
	// Line 1677, Address: 0x247874, Func Offset: 0x54
	// Line 1678, Address: 0x247898, Func Offset: 0x78
	// Func End, Address: 0x2478a8, Func Offset: 0x88
}

// 
// Start address: 0x2478b0
void mcSoundCursor()
{
	// Line 1683, Address: 0x2478b0, Func Offset: 0
	// Line 1684, Address: 0x2478b8, Func Offset: 0x8
	// Line 1685, Address: 0x2478d0, Func Offset: 0x20
	// Func End, Address: 0x2478e0, Func Offset: 0x30
}

// 
// Start address: 0x2478e0
void mcSoundDecide()
{
	// Line 1690, Address: 0x2478e0, Func Offset: 0
	// Line 1691, Address: 0x2478e8, Func Offset: 0x8
	// Line 1692, Address: 0x247900, Func Offset: 0x20
	// Func End, Address: 0x247910, Func Offset: 0x30
}

// 
// Start address: 0x247910
void mcSoundSelect()
{
	// Line 1697, Address: 0x247910, Func Offset: 0
	// Line 1698, Address: 0x247918, Func Offset: 0x8
	// Line 1699, Address: 0x247930, Func Offset: 0x20
	// Func End, Address: 0x247940, Func Offset: 0x30
}

// 
// Start address: 0x247940
void mcSoundCancel()
{
	// Line 1704, Address: 0x247940, Func Offset: 0
	// Line 1705, Address: 0x247948, Func Offset: 0x8
	// Line 1706, Address: 0x247960, Func Offset: 0x20
	// Func End, Address: 0x247970, Func Offset: 0x30
}

// 
// Start address: 0x247970
void mcSoundError()
{
	// Line 1711, Address: 0x247970, Func Offset: 0
	// Line 1712, Address: 0x247978, Func Offset: 0x8
	// Line 1713, Address: 0x247990, Func Offset: 0x20
	// Func End, Address: 0x2479a0, Func Offset: 0x30
}

// 
// Start address: 0x2479a0
void mcSoundStart()
{
	// Line 1718, Address: 0x2479a0, Func Offset: 0
	// Line 1719, Address: 0x2479a8, Func Offset: 0x8
	// Line 1720, Address: 0x2479c0, Func Offset: 0x20
	// Func End, Address: 0x2479d0, Func Offset: 0x30
}

