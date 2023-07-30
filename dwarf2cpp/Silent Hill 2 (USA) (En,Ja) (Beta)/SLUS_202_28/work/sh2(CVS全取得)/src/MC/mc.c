typedef struct _anon0;
typedef struct fsMgcFile;
typedef struct Pad_KeyConfig;
typedef union fsFile;
typedef struct fsMgfFile;
typedef struct MC_WORK2;
typedef struct MC_CODEC_DATA;
typedef struct MC_FILEINFO;
typedef struct fsHdFile;
typedef struct Item;
typedef struct _Character_Info;
typedef struct shBattleFight;
typedef struct fsMgpFile;
typedef struct MC_SAVEDATA;
typedef struct _anon1;
typedef struct shBattleShot;
typedef struct _anon2;
typedef struct Playing_Info;
typedef struct SAVE_DATA;
typedef struct _anon3;
typedef union fsFileIndex;
typedef struct _anon4;
typedef struct SAVE_DATA_ALL;
typedef struct _anon5;
typedef struct MC_DIRDATA;
typedef struct shAttackInfo;
typedef struct MC_JOBS;
typedef union _anon6;
typedef struct _anon7;
typedef struct MC_WORK;
typedef struct _anon8;
typedef struct fsCdFile;
typedef struct _CI_SubCharacter;


typedef int type_0[2];
typedef char type_1[19];
typedef int type_2[2];
typedef int type_3[2];
typedef int type_4[2];
typedef unsigned char type_5[2];
typedef char type_6[3];
typedef char type_7[5];
typedef char type_8[5][3];
typedef char type_9[3];
typedef unsigned int type_10[2];
typedef char type_11[3];
typedef unsigned short type_12[11];
typedef unsigned long type_13[16];
typedef int type_14[2];
typedef int type_15[6];
typedef unsigned short type_16[3];
typedef unsigned char type_17[8168];
typedef _CI_SubCharacter type_18[32];
typedef char type_19[3];
typedef char type_20[3];
typedef fsFileIndex type_21[1];
typedef fsFileIndex type_22[1];
typedef unsigned int type_23[255];
typedef int type_24[4];
typedef unsigned int type_25[32];
typedef float type_26[4];
typedef char type_27[28];
typedef char type_28[8];
typedef unsigned char type_29[4];
typedef int type_30[2];
typedef unsigned char type_31[4];
typedef char type_32[4];
typedef char type_33[1456];
typedef char type_34[14];
typedef char type_35[4];
typedef unsigned int type_36[5];
typedef unsigned int type_37[5][3];
typedef char type_38[4];
typedef char type_39[28];
typedef MC_FILEINFO type_40[15];
typedef char type_41[64];
typedef int type_42[4][4];
typedef char type_43[4];
typedef unsigned long type_44[2];
typedef float type_45[4][3];
typedef unsigned int type_46[4];
typedef float type_47[4][3];
typedef unsigned int type_48[130];
typedef char type_49[4];
typedef unsigned char type_50[68];
typedef float type_51[4];
typedef unsigned char type_52[64];
typedef unsigned char type_53[64];
typedef float type_54[7];
typedef unsigned char type_55[64];
typedef unsigned int type_56[7];
typedef unsigned char type_57[512];
typedef unsigned char type_58[24];
typedef unsigned char type_59[16];
typedef char type_60[0];
typedef shAttackInfo type_61[66];
typedef _anon0 type_62[20];
typedef unsigned char type_63[32];
typedef MC_FILEINFO type_64[75];
typedef MC_FILEINFO type_65[75];
typedef MC_FILEINFO type_66[75][3];
typedef MC_JOBS type_67[16];

struct _anon0
{
	_anon7 _Create;
	_anon8 _Modify;
	unsigned int FileSizeByte;
	unsigned short AttrFile;
	unsigned short Reserve1;
	unsigned int Reserve2;
	unsigned int PdaAplNo;
	unsigned char EntryName[32];
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

union fsFile
{
	_anon2 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
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

struct MC_WORK2
{
	MC_DIRDATA dirdata;
	MC_SAVEDATA savedata;
	_anon0 dirtbl[20];
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

struct Item
{
	unsigned int flag[2];
	unsigned short number[11];
	unsigned char light_switch;
	unsigned char radio_switch;
	unsigned char radio_volume;
	unsigned char equip;
	float ampoule_efficacy;
	unsigned short event_use[3];
	unsigned short short_pad;
	unsigned char last_cursor;
};

struct _Character_Info
{
	float spray_time;
	float running_time;
	int tired;
	int tired_max;
	int spirit;
	int weapon;
	unsigned char spray_set;
	_CI_SubCharacter ci_sc[32];
	char total;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct MC_SAVEDATA
{
	unsigned int csum1;
	unsigned int csum2;
	unsigned char data[8168];
	unsigned int csum3;
	unsigned int pad;
	unsigned long csum4;
};

struct _anon1
{
	float x;
	float y;
	float z;
	float w;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon2
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

struct SAVE_DATA
{
	unsigned int version;
	unsigned short scene;
	float jms_pos[4];
	Playing_Info playing;
	_anon3 game_flag;
	Item item;
	_Character_Info chara;
	Pad_KeyConfig key_config;
};

struct _anon3
{
	unsigned int flag[255];
	float time_deai;
	unsigned int enemy[32];
	unsigned char safe[4];
	char rotate[4];
	char guruguru[4];
	char cylinder[4];
	unsigned short clock;
	unsigned short carbon;
	char runaway[4];
	unsigned short hanging;
	short pad;
	char trunk[4];
};

union fsFileIndex
{
	_anon4 index;
	unsigned long pack;
};

struct _anon4
{
	fsFile* fp;
	char* name;
};

struct SAVE_DATA_ALL
{
	SAVE_DATA d;
	char pad[1456];
};

struct _anon5
{
	unsigned char Head[4];
	unsigned short Reserv1;
	unsigned short OffsLF;
	unsigned int Reserv2;
	unsigned int TransRate;
	int BgColor[4][4];
	float LightDir[4][3];
	float LightColor[4][3];
	float Ambient[4];
	unsigned char TitleName[68];
	unsigned char FnameView[64];
	unsigned char FnameCopy[64];
	unsigned char FnameDel[64];
	unsigned char Reserve3[512];
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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon6 hit_check;
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

union _anon6
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon7
{
	unsigned char Resv2;
	unsigned char Sec;
	unsigned char Min;
	unsigned char Hour;
	unsigned char Day;
	unsigned char Month;
	unsigned short Year;
};

struct MC_WORK
{
	unsigned short status;
	char ls_port;
	char ls_dir;
	char ls_file;
	unsigned int ls_dir_id;
};

struct _anon8
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

struct _CI_SubCharacter
{
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	_anon1 pos;
	_anon1 rot;
	_anon1 pos_spd;
	_anon1 rot_spd;
	_anon1 b_pos;
	_anon1 b_rot;
	int en_first_status;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float battle_hp;
	float battle_hp_max;
	float battle_hp_rate;
	unsigned int battle_status;
};

shAttackInfo sh2_attack_list[66];
_anon5 mc_IconSys;
_anon5 mc_IconSys2;
char mc_Dname[19];
char mc_Dname_Base[14];
char* mc_iconsysname;
char mc_message[28];
char sc1;
char sc2;
MC_WORK2* mcw;
MC_WORK mc;
char MemShare_gp_data_buf[0];
SAVE_DATA_ALL SaveDataAll;
Playing_Info playing;
fsFileIndex data_menu_mc_icondata2[1];
fsFileIndex data_menu_mc_icondata[1];

int cmpstr(char* str1, char* str2);
void print_sc1(char st);
void print_sc2(char st);
void mcNextJob();
void mcBreakJob();
void mcBreakJob2();
void mcPortError();
void mcDirBroken();
void mcPortAbnormal(char port);
MC_WORK* mcInit();
void mcExec();
void mcSetJob(char job, char port, short data);
void mcAutoInfo();
void mcSetGetInfo(char port);
void mcSetGetInfo2(char port);
void mcCheckAll();
void mcStepInit();
int mcStartCheck();
int mcStartCheck2();
void mcCheckDir(char port);
void mcJobCheckDir();
void mcSearchDir(char port);
void mcJobSearchDir();
void mcSearchDir2(char port);
void mcJobSearchDir2();
_anon0* mcGetDt(char* name);
void mcFormat(char port);
int mcCheckStatus(char port);
int mcCheckCanSave(char port);
void mcJobNewDir();
void mcOpenWO(char* name);
void mcOpenRO(char* name);
void mcOpenRW(char* name);
void mcSaveIconSys(char port, char dn);
void mcJobSaveIconSys();
void mcSaveIcon(char port, char dn);
void mcJobSaveIcon();
void mcSaveData(char port, char dn, char fn);
void mcJobSaveData();
void mcLoadData(char port, char dn, char fn);
void mcJobLoadData();
void mcLoadData2(char port, short n);
void mcDeleteData(char port, char dn, char fn);
void mcJobDeleteData();
void mcJobDeleteDir();
void mcJobSaveSystemData();
void mcJobSaveExtraData();
void mcJobLoadExtraData();
void mcSetDirName(char dn);
void mcJoinDirName(char dn);
void mcSetFileName(char dn, char fn);
void mcSetExtraDirName(char* name);
void mcSetExtraFileName(char* name);
void mcMakeSaveData();
int mcExtSaveData();
void mcEncodeStart();
void mcDecodeStart();
unsigned int mcRot(unsigned int n, int s);
void mcCodecAll();
void mcCodec();
void mcMakeDirData(char port, char dn, char fn);
void mcMakeDirData2(char port, char dn, char fn);
void mcMakeDirData3();
void mcMakeDirDataSub();
int mcExtDirData();
void mcLoadIconData();
int mcCheckEndLoadIconData();

// 
// Start address: 0x23acb0
int cmpstr(char* str1, char* str2)
{
	// Line 202, Address: 0x23acb0, Func Offset: 0
	// Line 203, Address: 0x23acb8, Func Offset: 0x8
	// Line 204, Address: 0x23accc, Func Offset: 0x1c
	// Line 205, Address: 0x23acd0, Func Offset: 0x20
	// Line 206, Address: 0x23acd4, Func Offset: 0x24
	// Line 207, Address: 0x23ace8, Func Offset: 0x38
	// Line 208, Address: 0x23acec, Func Offset: 0x3c
	// Func End, Address: 0x23acf4, Func Offset: 0x44
}

// 
// Start address: 0x23ad00
void print_sc1(char st)
{
	// Line 216, Address: 0x23ad00, Func Offset: 0
	// Line 217, Address: 0x23ad08, Func Offset: 0x8
	// Line 218, Address: 0x23ad20, Func Offset: 0x20
	// Line 219, Address: 0x23ad28, Func Offset: 0x28
	// Line 221, Address: 0x23ad54, Func Offset: 0x54
	// Line 222, Address: 0x23ad64, Func Offset: 0x64
	// Line 224, Address: 0x23ad6c, Func Offset: 0x6c
	// Line 225, Address: 0x23ad7c, Func Offset: 0x7c
	// Line 227, Address: 0x23ad84, Func Offset: 0x84
	// Line 228, Address: 0x23ad94, Func Offset: 0x94
	// Line 230, Address: 0x23ad9c, Func Offset: 0x9c
	// Line 231, Address: 0x23adac, Func Offset: 0xac
	// Line 233, Address: 0x23adb4, Func Offset: 0xb4
	// Line 234, Address: 0x23adc4, Func Offset: 0xc4
	// Line 236, Address: 0x23adcc, Func Offset: 0xcc
	// Line 237, Address: 0x23addc, Func Offset: 0xdc
	// Line 239, Address: 0x23ade4, Func Offset: 0xe4
	// Line 240, Address: 0x23adf4, Func Offset: 0xf4
	// Line 242, Address: 0x23adfc, Func Offset: 0xfc
	// Line 245, Address: 0x23ae0c, Func Offset: 0x10c
	// Func End, Address: 0x23ae1c, Func Offset: 0x11c
}

// 
// Start address: 0x23ae20
void print_sc2(char st)
{
	// Line 247, Address: 0x23ae20, Func Offset: 0
	// Line 248, Address: 0x23ae28, Func Offset: 0x8
	// Line 249, Address: 0x23ae40, Func Offset: 0x20
	// Line 250, Address: 0x23ae48, Func Offset: 0x28
	// Line 252, Address: 0x23ae7c, Func Offset: 0x5c
	// Line 253, Address: 0x23ae8c, Func Offset: 0x6c
	// Line 255, Address: 0x23ae94, Func Offset: 0x74
	// Line 256, Address: 0x23aea4, Func Offset: 0x84
	// Line 258, Address: 0x23aeac, Func Offset: 0x8c
	// Line 259, Address: 0x23aebc, Func Offset: 0x9c
	// Line 261, Address: 0x23aec4, Func Offset: 0xa4
	// Line 264, Address: 0x23aed4, Func Offset: 0xb4
	// Func End, Address: 0x23aee4, Func Offset: 0xc4
}

// 
// Start address: 0x23aef0
void mcNextJob()
{
	// Line 271, Address: 0x23aef0, Func Offset: 0
	// Line 272, Address: 0x23af08, Func Offset: 0x18
	// Line 273, Address: 0x23af2c, Func Offset: 0x3c
	// Func End, Address: 0x23af34, Func Offset: 0x44
}

// 
// Start address: 0x23af40
void mcBreakJob()
{
	// Line 279, Address: 0x23af40, Func Offset: 0
	// Line 281, Address: 0x23af50, Func Offset: 0x10
	// Line 282, Address: 0x23af6c, Func Offset: 0x2c
	// Line 283, Address: 0x23af7c, Func Offset: 0x3c
	// Line 284, Address: 0x23af84, Func Offset: 0x44
	// Line 285, Address: 0x23af98, Func Offset: 0x58
	// Func End, Address: 0x23afa8, Func Offset: 0x68
}

// 
// Start address: 0x23afb0
void mcBreakJob2()
{
	// Line 291, Address: 0x23afb0, Func Offset: 0
	// Line 293, Address: 0x23afc0, Func Offset: 0x10
	// Line 294, Address: 0x23afdc, Func Offset: 0x2c
	// Line 295, Address: 0x23afec, Func Offset: 0x3c
	// Line 296, Address: 0x23aff4, Func Offset: 0x44
	// Line 297, Address: 0x23b008, Func Offset: 0x58
	// Func End, Address: 0x23b018, Func Offset: 0x68
}

// 
// Start address: 0x23b020
void mcPortError()
{
	int i;
	// Line 303, Address: 0x23b020, Func Offset: 0
	// Line 306, Address: 0x23b030, Func Offset: 0x10
	// Line 307, Address: 0x23b050, Func Offset: 0x30
	// Line 308, Address: 0x23b058, Func Offset: 0x38
	// Line 309, Address: 0x23b064, Func Offset: 0x44
	// Line 310, Address: 0x23b084, Func Offset: 0x64
	// Line 311, Address: 0x23b0b0, Func Offset: 0x90
	// Line 312, Address: 0x23b0c4, Func Offset: 0xa4
	// Line 313, Address: 0x23b0d8, Func Offset: 0xb8
	// Line 314, Address: 0x23b0f8, Func Offset: 0xd8
	// Line 316, Address: 0x23b10c, Func Offset: 0xec
	// Func End, Address: 0x23b11c, Func Offset: 0xfc
}

// 
// Start address: 0x23b120
void mcDirBroken()
{
	int fn;
	// Line 321, Address: 0x23b120, Func Offset: 0
	// Line 323, Address: 0x23b130, Func Offset: 0x10
	// Line 324, Address: 0x23b148, Func Offset: 0x28
	// Line 325, Address: 0x23b158, Func Offset: 0x38
	// Line 326, Address: 0x23b180, Func Offset: 0x60
	// Line 327, Address: 0x23b1ac, Func Offset: 0x8c
	// Line 328, Address: 0x23b1c0, Func Offset: 0xa0
	// Line 329, Address: 0x23b1e8, Func Offset: 0xc8
	// Line 330, Address: 0x23b1f4, Func Offset: 0xd4
	// Line 331, Address: 0x23b208, Func Offset: 0xe8
	// Line 332, Address: 0x23b21c, Func Offset: 0xfc
	// Func End, Address: 0x23b22c, Func Offset: 0x10c
}

// 
// Start address: 0x23b230
void mcPortAbnormal(char port)
{
	int i;
	// Line 339, Address: 0x23b230, Func Offset: 0
	// Line 340, Address: 0x23b23c, Func Offset: 0xc
	// Line 341, Address: 0x23b264, Func Offset: 0x34
	// Line 342, Address: 0x23b284, Func Offset: 0x54
	// Line 343, Address: 0x23b294, Func Offset: 0x64
	// Line 344, Address: 0x23b2ac, Func Offset: 0x7c
	// Line 345, Address: 0x23b2bc, Func Offset: 0x8c
	// Line 346, Address: 0x23b2d0, Func Offset: 0xa0
	// Line 348, Address: 0x23b2e4, Func Offset: 0xb4
	// Func End, Address: 0x23b2ec, Func Offset: 0xbc
}

// 
// Start address: 0x23b2f0
MC_WORK* mcInit()
{
	// Line 365, Address: 0x23b2f0, Func Offset: 0
	// Line 367, Address: 0x23b2f8, Func Offset: 0x8
	// Line 368, Address: 0x23b300, Func Offset: 0x10
	// Line 369, Address: 0x23b310, Func Offset: 0x20
	// Line 376, Address: 0x23b324, Func Offset: 0x34
	// Line 377, Address: 0x23b32c, Func Offset: 0x3c
	// Func End, Address: 0x23b33c, Func Offset: 0x4c
}

// 
// Start address: 0x23b340
void mcExec()
{
	char n;
	short jd;
	char port;
	// Line 383, Address: 0x23b340, Func Offset: 0
	// Line 388, Address: 0x23b350, Func Offset: 0x10
	// Line 395, Address: 0x23b364, Func Offset: 0x24
	// Line 401, Address: 0x23b36c, Func Offset: 0x2c
	// Line 402, Address: 0x23b380, Func Offset: 0x40
	// Line 404, Address: 0x23b38c, Func Offset: 0x4c
	// Line 405, Address: 0x23b3a0, Func Offset: 0x60
	// Line 408, Address: 0x23b3ac, Func Offset: 0x6c
	// Line 409, Address: 0x23b3c0, Func Offset: 0x80
	// Line 410, Address: 0x23b3c4, Func Offset: 0x84
	// Line 411, Address: 0x23b3e4, Func Offset: 0xa4
	// Line 412, Address: 0x23b3f4, Func Offset: 0xb4
	// Line 413, Address: 0x23b410, Func Offset: 0xd0
	// Line 414, Address: 0x23b42c, Func Offset: 0xec
	// Line 416, Address: 0x23b46c, Func Offset: 0x12c
	// Line 417, Address: 0x23b490, Func Offset: 0x150
	// Line 418, Address: 0x23b4a8, Func Offset: 0x168
	// Line 420, Address: 0x23b4c0, Func Offset: 0x180
	// Line 421, Address: 0x23b4d0, Func Offset: 0x190
	// Line 423, Address: 0x23b4d8, Func Offset: 0x198
	// Line 424, Address: 0x23b4fc, Func Offset: 0x1bc
	// Line 425, Address: 0x23b514, Func Offset: 0x1d4
	// Line 427, Address: 0x23b52c, Func Offset: 0x1ec
	// Line 428, Address: 0x23b53c, Func Offset: 0x1fc
	// Line 430, Address: 0x23b544, Func Offset: 0x204
	// Line 431, Address: 0x23b564, Func Offset: 0x224
	// Line 432, Address: 0x23b578, Func Offset: 0x238
	// Line 433, Address: 0x23b588, Func Offset: 0x248
	// Line 441, Address: 0x23b590, Func Offset: 0x250
	// Line 442, Address: 0x23b598, Func Offset: 0x258
	// Line 447, Address: 0x23b5a0, Func Offset: 0x260
	// Line 448, Address: 0x23b5b4, Func Offset: 0x274
	// Line 449, Address: 0x23b5d4, Func Offset: 0x294
	// Line 450, Address: 0x23b5ec, Func Offset: 0x2ac
	// Line 452, Address: 0x23b5f4, Func Offset: 0x2b4
	// Line 455, Address: 0x23b5fc, Func Offset: 0x2bc
	// Line 456, Address: 0x23b618, Func Offset: 0x2d8
	// Line 457, Address: 0x23b620, Func Offset: 0x2e0
	// Line 461, Address: 0x23b624, Func Offset: 0x2e4
	// Line 463, Address: 0x23b650, Func Offset: 0x310
	// Line 464, Address: 0x23b65c, Func Offset: 0x31c
	// Line 465, Address: 0x23b664, Func Offset: 0x324
	// Line 466, Address: 0x23b66c, Func Offset: 0x32c
	// Line 469, Address: 0x23b674, Func Offset: 0x334
	// Line 470, Address: 0x23b684, Func Offset: 0x344
	// Line 471, Address: 0x23b690, Func Offset: 0x350
	// Line 472, Address: 0x23b698, Func Offset: 0x358
	// Line 473, Address: 0x23b6a0, Func Offset: 0x360
	// Line 475, Address: 0x23b6a8, Func Offset: 0x368
	// Line 476, Address: 0x23b6b0, Func Offset: 0x370
	// Line 477, Address: 0x23b6c8, Func Offset: 0x388
	// Line 478, Address: 0x23b6d0, Func Offset: 0x390
	// Line 480, Address: 0x23b6e8, Func Offset: 0x3a8
	// Line 485, Address: 0x23b710, Func Offset: 0x3d0
	// Line 486, Address: 0x23b744, Func Offset: 0x404
	// Line 487, Address: 0x23b74c, Func Offset: 0x40c
	// Line 489, Address: 0x23b754, Func Offset: 0x414
	// Line 490, Address: 0x23b760, Func Offset: 0x420
	// Line 491, Address: 0x23b778, Func Offset: 0x438
	// Line 493, Address: 0x23b7dc, Func Offset: 0x49c
	// Line 494, Address: 0x23b7f4, Func Offset: 0x4b4
	// Line 495, Address: 0x23b810, Func Offset: 0x4d0
	// Line 497, Address: 0x23b82c, Func Offset: 0x4ec
	// Line 498, Address: 0x23b838, Func Offset: 0x4f8
	// Line 501, Address: 0x23b854, Func Offset: 0x514
	// Line 503, Address: 0x23b85c, Func Offset: 0x51c
	// Line 504, Address: 0x23b860, Func Offset: 0x520
	// Line 506, Address: 0x23b8a4, Func Offset: 0x564
	// Line 507, Address: 0x23b8ac, Func Offset: 0x56c
	// Line 508, Address: 0x23b8b0, Func Offset: 0x570
	// Line 510, Address: 0x23b8b8, Func Offset: 0x578
	// Line 511, Address: 0x23b8c0, Func Offset: 0x580
	// Line 512, Address: 0x23b8c4, Func Offset: 0x584
	// Line 514, Address: 0x23b8cc, Func Offset: 0x58c
	// Line 515, Address: 0x23b8d4, Func Offset: 0x594
	// Line 516, Address: 0x23b8d8, Func Offset: 0x598
	// Line 518, Address: 0x23b8e0, Func Offset: 0x5a0
	// Line 519, Address: 0x23b8ec, Func Offset: 0x5ac
	// Line 520, Address: 0x23b8f4, Func Offset: 0x5b4
	// Line 521, Address: 0x23b8f8, Func Offset: 0x5b8
	// Line 522, Address: 0x23b90c, Func Offset: 0x5cc
	// Line 523, Address: 0x23b914, Func Offset: 0x5d4
	// Line 524, Address: 0x23b92c, Func Offset: 0x5ec
	// Line 525, Address: 0x23b93c, Func Offset: 0x5fc
	// Line 527, Address: 0x23b968, Func Offset: 0x628
	// Line 532, Address: 0x23b970, Func Offset: 0x630
	// Line 533, Address: 0x23b980, Func Offset: 0x640
	// Line 534, Address: 0x23b998, Func Offset: 0x658
	// Line 536, Address: 0x23b9a0, Func Offset: 0x660
	// Line 543, Address: 0x23b9a8, Func Offset: 0x668
	// Line 544, Address: 0x23b9b0, Func Offset: 0x670
	// Line 546, Address: 0x23b9b8, Func Offset: 0x678
	// Line 547, Address: 0x23b9c0, Func Offset: 0x680
	// Line 549, Address: 0x23b9c8, Func Offset: 0x688
	// Line 550, Address: 0x23b9d0, Func Offset: 0x690
	// Line 552, Address: 0x23b9d8, Func Offset: 0x698
	// Line 553, Address: 0x23b9e0, Func Offset: 0x6a0
	// Line 555, Address: 0x23b9e8, Func Offset: 0x6a8
	// Line 556, Address: 0x23b9f0, Func Offset: 0x6b0
	// Line 558, Address: 0x23b9f8, Func Offset: 0x6b8
	// Line 559, Address: 0x23ba00, Func Offset: 0x6c0
	// Line 561, Address: 0x23ba08, Func Offset: 0x6c8
	// Line 562, Address: 0x23ba10, Func Offset: 0x6d0
	// Line 564, Address: 0x23ba18, Func Offset: 0x6d8
	// Line 565, Address: 0x23ba20, Func Offset: 0x6e0
	// Line 567, Address: 0x23ba28, Func Offset: 0x6e8
	// Line 568, Address: 0x23ba30, Func Offset: 0x6f0
	// Line 570, Address: 0x23ba38, Func Offset: 0x6f8
	// Line 571, Address: 0x23ba40, Func Offset: 0x700
	// Line 573, Address: 0x23ba48, Func Offset: 0x708
	// Line 574, Address: 0x23ba50, Func Offset: 0x710
	// Line 576, Address: 0x23ba58, Func Offset: 0x718
	// Line 577, Address: 0x23ba60, Func Offset: 0x720
	// Line 579, Address: 0x23ba68, Func Offset: 0x728
	// Line 580, Address: 0x23ba70, Func Offset: 0x730
	// Line 582, Address: 0x23ba78, Func Offset: 0x738
	// Line 583, Address: 0x23ba98, Func Offset: 0x758
	// Line 584, Address: 0x23baa8, Func Offset: 0x768
	// Line 586, Address: 0x23bab0, Func Offset: 0x770
	// Line 588, Address: 0x23badc, Func Offset: 0x79c
	// Line 589, Address: 0x23baf0, Func Offset: 0x7b0
	// Line 591, Address: 0x23baf8, Func Offset: 0x7b8
	// Line 592, Address: 0x23bb00, Func Offset: 0x7c0
	// Line 595, Address: 0x23bb08, Func Offset: 0x7c8
	// Line 619, Address: 0x23bb10, Func Offset: 0x7d0
	// Line 622, Address: 0x23bb18, Func Offset: 0x7d8
	// Func End, Address: 0x23bb30, Func Offset: 0x7f0
}

// 
// Start address: 0x23bb30
void mcSetJob(char job, char port, short data)
{
	// Line 630, Address: 0x23bb30, Func Offset: 0
	// Line 631, Address: 0x23bb38, Func Offset: 0x8
	// Line 632, Address: 0x23bb74, Func Offset: 0x44
	// Line 633, Address: 0x23bb84, Func Offset: 0x54
	// Line 635, Address: 0x23bb8c, Func Offset: 0x5c
	// Line 636, Address: 0x23bb98, Func Offset: 0x68
	// Line 637, Address: 0x23bbb0, Func Offset: 0x80
	// Line 638, Address: 0x23bbd4, Func Offset: 0xa4
	// Line 639, Address: 0x23bbf8, Func Offset: 0xc8
	// Func End, Address: 0x23bc08, Func Offset: 0xd8
}

// 
// Start address: 0x23bc10
void mcAutoInfo()
{
	int cp[2];
	int job;
	int num;
	// Line 656, Address: 0x23bc10, Func Offset: 0
	// Line 659, Address: 0x23bc1c, Func Offset: 0xc
	// Line 660, Address: 0x23bc28, Func Offset: 0x18
	// Line 661, Address: 0x23bc34, Func Offset: 0x24
	// Line 662, Address: 0x23bc40, Func Offset: 0x30
	// Line 664, Address: 0x23bc48, Func Offset: 0x38
	// Line 665, Address: 0x23bc54, Func Offset: 0x44
	// Line 666, Address: 0x23bc64, Func Offset: 0x54
	// Line 668, Address: 0x23bc78, Func Offset: 0x68
	// Line 669, Address: 0x23bc94, Func Offset: 0x84
	// Line 670, Address: 0x23bca4, Func Offset: 0x94
	// Line 671, Address: 0x23bcc4, Func Offset: 0xb4
	// Line 672, Address: 0x23bce4, Func Offset: 0xd4
	// Func End, Address: 0x23bcf8, Func Offset: 0xe8
}

// 
// Start address: 0x23bd00
void mcSetGetInfo(char port)
{
	int job;
	int num;
	// Line 678, Address: 0x23bd00, Func Offset: 0
	// Line 680, Address: 0x23bd0c, Func Offset: 0xc
	// Line 681, Address: 0x23bd18, Func Offset: 0x18
	// Line 682, Address: 0x23bd24, Func Offset: 0x24
	// Line 683, Address: 0x23bd2c, Func Offset: 0x2c
	// Line 684, Address: 0x23bd48, Func Offset: 0x48
	// Line 685, Address: 0x23bd50, Func Offset: 0x50
	// Line 686, Address: 0x23bd5c, Func Offset: 0x5c
	// Line 687, Address: 0x23bd60, Func Offset: 0x60
	// Line 690, Address: 0x23bd74, Func Offset: 0x74
	// Line 691, Address: 0x23bd78, Func Offset: 0x78
	// Line 692, Address: 0x23bd94, Func Offset: 0x94
	// Line 693, Address: 0x23bdac, Func Offset: 0xac
	// Line 694, Address: 0x23bdbc, Func Offset: 0xbc
	// Func End, Address: 0x23bdcc, Func Offset: 0xcc
}

// 
// Start address: 0x23bdd0
void mcSetGetInfo2(char port)
{
	int job;
	int num;
	// Line 700, Address: 0x23bdd0, Func Offset: 0
	// Line 702, Address: 0x23bddc, Func Offset: 0xc
	// Line 703, Address: 0x23bde8, Func Offset: 0x18
	// Line 704, Address: 0x23bdf4, Func Offset: 0x24
	// Line 705, Address: 0x23bdfc, Func Offset: 0x2c
	// Line 706, Address: 0x23be18, Func Offset: 0x48
	// Line 707, Address: 0x23be1c, Func Offset: 0x4c
	// Line 710, Address: 0x23be2c, Func Offset: 0x5c
	// Line 711, Address: 0x23be30, Func Offset: 0x60
	// Line 712, Address: 0x23be4c, Func Offset: 0x7c
	// Line 713, Address: 0x23be5c, Func Offset: 0x8c
	// Line 714, Address: 0x23be6c, Func Offset: 0x9c
	// Func End, Address: 0x23be7c, Func Offset: 0xac
}

// 
// Start address: 0x23be80
void mcCheckAll()
{
	int i;
	int port;
	// Line 719, Address: 0x23be80, Func Offset: 0
	// Line 721, Address: 0x23be88, Func Offset: 0x8
	// Line 722, Address: 0x23beac, Func Offset: 0x2c
	// Line 723, Address: 0x23beb8, Func Offset: 0x38
	// Line 724, Address: 0x23bec8, Func Offset: 0x48
	// Line 725, Address: 0x23bed4, Func Offset: 0x54
	// Line 726, Address: 0x23bef4, Func Offset: 0x74
	// Line 727, Address: 0x23bf04, Func Offset: 0x84
	// Line 728, Address: 0x23bf14, Func Offset: 0x94
	// Line 729, Address: 0x23bf20, Func Offset: 0xa0
	// Line 730, Address: 0x23bf2c, Func Offset: 0xac
	// Line 731, Address: 0x23bf38, Func Offset: 0xb8
	// Line 732, Address: 0x23bf44, Func Offset: 0xc4
	// Line 733, Address: 0x23bf50, Func Offset: 0xd0
	// Func End, Address: 0x23bf60, Func Offset: 0xe0
}

// 
// Start address: 0x23bf60
void mcStepInit()
{
	// Line 739, Address: 0x23bf60, Func Offset: 0
	// Line 740, Address: 0x23bf74, Func Offset: 0x14
	// Func End, Address: 0x23bf7c, Func Offset: 0x1c
}

// 
// Start address: 0x23bf80
int mcStartCheck()
{
	char p2;
	char p1;
	int n;
	int i;
	// Line 749, Address: 0x23bf80, Func Offset: 0
	// Line 752, Address: 0x23bf8c, Func Offset: 0xc
	// Line 753, Address: 0x23bf94, Func Offset: 0x14
	// Line 754, Address: 0x23bfa8, Func Offset: 0x28
	// Line 755, Address: 0x23bfb0, Func Offset: 0x30
	// Line 757, Address: 0x23bfc4, Func Offset: 0x44
	// Line 759, Address: 0x23c014, Func Offset: 0x94
	// Line 760, Address: 0x23c020, Func Offset: 0xa0
	// Line 761, Address: 0x23c030, Func Offset: 0xb0
	// Line 762, Address: 0x23c044, Func Offset: 0xc4
	// Line 763, Address: 0x23c054, Func Offset: 0xd4
	// Line 764, Address: 0x23c064, Func Offset: 0xe4
	// Line 765, Address: 0x23c078, Func Offset: 0xf8
	// Line 767, Address: 0x23c080, Func Offset: 0x100
	// Line 768, Address: 0x23c084, Func Offset: 0x104
	// Line 769, Address: 0x23c088, Func Offset: 0x108
	// Line 770, Address: 0x23c094, Func Offset: 0x114
	// Line 771, Address: 0x23c0a0, Func Offset: 0x120
	// Line 773, Address: 0x23c0bc, Func Offset: 0x13c
	// Line 774, Address: 0x23c0cc, Func Offset: 0x14c
	// Line 775, Address: 0x23c0d4, Func Offset: 0x154
	// Line 776, Address: 0x23c0e8, Func Offset: 0x168
	// Line 778, Address: 0x23c0f4, Func Offset: 0x174
	// Line 780, Address: 0x23c100, Func Offset: 0x180
	// Line 782, Address: 0x23c10c, Func Offset: 0x18c
	// Line 783, Address: 0x23c120, Func Offset: 0x1a0
	// Line 785, Address: 0x23c12c, Func Offset: 0x1ac
	// Line 787, Address: 0x23c138, Func Offset: 0x1b8
	// Line 789, Address: 0x23c14c, Func Offset: 0x1cc
	// Line 791, Address: 0x23c160, Func Offset: 0x1e0
	// Line 793, Address: 0x23c174, Func Offset: 0x1f4
	// Line 794, Address: 0x23c190, Func Offset: 0x210
	// Line 795, Address: 0x23c19c, Func Offset: 0x21c
	// Line 797, Address: 0x23c1a0, Func Offset: 0x220
	// Line 799, Address: 0x23c1ac, Func Offset: 0x22c
	// Line 801, Address: 0x23c1b8, Func Offset: 0x238
	// Line 802, Address: 0x23c1c8, Func Offset: 0x248
	// Line 803, Address: 0x23c1d0, Func Offset: 0x250
	// Line 804, Address: 0x23c1e4, Func Offset: 0x264
	// Line 806, Address: 0x23c1f4, Func Offset: 0x274
	// Line 808, Address: 0x23c200, Func Offset: 0x280
	// Line 811, Address: 0x23c20c, Func Offset: 0x28c
	// Line 813, Address: 0x23c22c, Func Offset: 0x2ac
	// Line 814, Address: 0x23c238, Func Offset: 0x2b8
	// Line 816, Address: 0x23c248, Func Offset: 0x2c8
	// Line 818, Address: 0x23c278, Func Offset: 0x2f8
	// Line 819, Address: 0x23c284, Func Offset: 0x304
	// Line 821, Address: 0x23c294, Func Offset: 0x314
	// Line 823, Address: 0x23c29c, Func Offset: 0x31c
	// Line 824, Address: 0x23c2ac, Func Offset: 0x32c
	// Line 826, Address: 0x23c2bc, Func Offset: 0x33c
	// Line 827, Address: 0x23c2e0, Func Offset: 0x360
	// Line 828, Address: 0x23c2f0, Func Offset: 0x370
	// Line 829, Address: 0x23c300, Func Offset: 0x380
	// Line 830, Address: 0x23c30c, Func Offset: 0x38c
	// Line 832, Address: 0x23c318, Func Offset: 0x398
	// Line 833, Address: 0x23c31c, Func Offset: 0x39c
	// Line 834, Address: 0x23c328, Func Offset: 0x3a8
	// Line 835, Address: 0x23c340, Func Offset: 0x3c0
	// Line 836, Address: 0x23c350, Func Offset: 0x3d0
	// Line 837, Address: 0x23c364, Func Offset: 0x3e4
	// Line 838, Address: 0x23c370, Func Offset: 0x3f0
	// Line 840, Address: 0x23c390, Func Offset: 0x410
	// Line 841, Address: 0x23c3a8, Func Offset: 0x428
	// Line 842, Address: 0x23c3b4, Func Offset: 0x434
	// Line 844, Address: 0x23c3bc, Func Offset: 0x43c
	// Line 845, Address: 0x23c3d0, Func Offset: 0x450
	// Line 846, Address: 0x23c3e0, Func Offset: 0x460
	// Line 847, Address: 0x23c3e8, Func Offset: 0x468
	// Line 848, Address: 0x23c3fc, Func Offset: 0x47c
	// Line 850, Address: 0x23c408, Func Offset: 0x488
	// Line 852, Address: 0x23c414, Func Offset: 0x494
	// Line 853, Address: 0x23c420, Func Offset: 0x4a0
	// Line 854, Address: 0x23c42c, Func Offset: 0x4ac
	// Line 856, Address: 0x23c430, Func Offset: 0x4b0
	// Line 858, Address: 0x23c438, Func Offset: 0x4b8
	// Line 861, Address: 0x23c444, Func Offset: 0x4c4
	// Line 863, Address: 0x23c45c, Func Offset: 0x4dc
	// Line 866, Address: 0x23c474, Func Offset: 0x4f4
	// Line 868, Address: 0x23c494, Func Offset: 0x514
	// Line 872, Address: 0x23c49c, Func Offset: 0x51c
	// Line 873, Address: 0x23c4a8, Func Offset: 0x528
	// Line 874, Address: 0x23c4ac, Func Offset: 0x52c
	// Func End, Address: 0x23c4c0, Func Offset: 0x540
}

// 
// Start address: 0x23c4c0
int mcStartCheck2()
{
	char p2;
	char p1;
	int f;
	int n;
	int i;
	// Line 882, Address: 0x23c4c0, Func Offset: 0
	// Line 885, Address: 0x23c4cc, Func Offset: 0xc
	// Line 886, Address: 0x23c4d4, Func Offset: 0x14
	// Line 887, Address: 0x23c4e8, Func Offset: 0x28
	// Line 888, Address: 0x23c4f0, Func Offset: 0x30
	// Line 890, Address: 0x23c504, Func Offset: 0x44
	// Line 892, Address: 0x23c548, Func Offset: 0x88
	// Line 893, Address: 0x23c554, Func Offset: 0x94
	// Line 894, Address: 0x23c564, Func Offset: 0xa4
	// Line 895, Address: 0x23c578, Func Offset: 0xb8
	// Line 896, Address: 0x23c584, Func Offset: 0xc4
	// Line 897, Address: 0x23c5a4, Func Offset: 0xe4
	// Line 898, Address: 0x23c5b4, Func Offset: 0xf4
	// Line 899, Address: 0x23c5c4, Func Offset: 0x104
	// Line 900, Address: 0x23c5d0, Func Offset: 0x110
	// Line 901, Address: 0x23c5e4, Func Offset: 0x124
	// Line 902, Address: 0x23c5f4, Func Offset: 0x134
	// Line 903, Address: 0x23c5fc, Func Offset: 0x13c
	// Line 905, Address: 0x23c60c, Func Offset: 0x14c
	// Line 906, Address: 0x23c620, Func Offset: 0x160
	// Line 908, Address: 0x23c628, Func Offset: 0x168
	// Line 909, Address: 0x23c62c, Func Offset: 0x16c
	// Line 910, Address: 0x23c630, Func Offset: 0x170
	// Line 911, Address: 0x23c63c, Func Offset: 0x17c
	// Line 912, Address: 0x23c648, Func Offset: 0x188
	// Line 913, Address: 0x23c66c, Func Offset: 0x1ac
	// Line 916, Address: 0x23c674, Func Offset: 0x1b4
	// Line 917, Address: 0x23c688, Func Offset: 0x1c8
	// Line 918, Address: 0x23c69c, Func Offset: 0x1dc
	// Line 920, Address: 0x23c6c4, Func Offset: 0x204
	// Line 923, Address: 0x23c6cc, Func Offset: 0x20c
	// Line 924, Address: 0x23c6e8, Func Offset: 0x228
	// Line 925, Address: 0x23c6f8, Func Offset: 0x238
	// Line 926, Address: 0x23c700, Func Offset: 0x240
	// Line 927, Address: 0x23c70c, Func Offset: 0x24c
	// Line 928, Address: 0x23c720, Func Offset: 0x260
	// Line 931, Address: 0x23c76c, Func Offset: 0x2ac
	// Line 933, Address: 0x23c774, Func Offset: 0x2b4
	// Line 935, Address: 0x23c794, Func Offset: 0x2d4
	// Line 936, Address: 0x23c7a0, Func Offset: 0x2e0
	// Line 938, Address: 0x23c7b0, Func Offset: 0x2f0
	// Line 940, Address: 0x23c7e0, Func Offset: 0x320
	// Line 941, Address: 0x23c7ec, Func Offset: 0x32c
	// Line 943, Address: 0x23c7fc, Func Offset: 0x33c
	// Line 945, Address: 0x23c804, Func Offset: 0x344
	// Line 946, Address: 0x23c814, Func Offset: 0x354
	// Line 947, Address: 0x23c828, Func Offset: 0x368
	// Line 948, Address: 0x23c834, Func Offset: 0x374
	// Line 949, Address: 0x23c850, Func Offset: 0x390
	// Line 950, Address: 0x23c864, Func Offset: 0x3a4
	// Line 953, Address: 0x23c880, Func Offset: 0x3c0
	// Line 954, Address: 0x23c888, Func Offset: 0x3c8
	// Line 955, Address: 0x23c894, Func Offset: 0x3d4
	// Line 956, Address: 0x23c8b4, Func Offset: 0x3f4
	// Line 957, Address: 0x23c8d8, Func Offset: 0x418
	// Line 958, Address: 0x23c8e8, Func Offset: 0x428
	// Line 959, Address: 0x23c8fc, Func Offset: 0x43c
	// Line 960, Address: 0x23c910, Func Offset: 0x450
	// Line 961, Address: 0x23c928, Func Offset: 0x468
	// Line 962, Address: 0x23c93c, Func Offset: 0x47c
	// Line 964, Address: 0x23c958, Func Offset: 0x498
	// Line 965, Address: 0x23c970, Func Offset: 0x4b0
	// Line 966, Address: 0x23c97c, Func Offset: 0x4bc
	// Line 968, Address: 0x23c984, Func Offset: 0x4c4
	// Line 970, Address: 0x23c9a4, Func Offset: 0x4e4
	// Line 971, Address: 0x23c9b4, Func Offset: 0x4f4
	// Line 973, Address: 0x23c9bc, Func Offset: 0x4fc
	// Line 975, Address: 0x23c9c0, Func Offset: 0x500
	// Line 977, Address: 0x23c9ec, Func Offset: 0x52c
	// Line 978, Address: 0x23c9f4, Func Offset: 0x534
	// Line 979, Address: 0x23ca0c, Func Offset: 0x54c
	// Line 980, Address: 0x23ca20, Func Offset: 0x560
	// Line 981, Address: 0x23ca28, Func Offset: 0x568
	// Line 983, Address: 0x23ca30, Func Offset: 0x570
	// Line 986, Address: 0x23ca4c, Func Offset: 0x58c
	// Line 987, Address: 0x23ca5c, Func Offset: 0x59c
	// Line 989, Address: 0x23ca68, Func Offset: 0x5a8
	// Line 991, Address: 0x23ca74, Func Offset: 0x5b4
	// Line 994, Address: 0x23ca80, Func Offset: 0x5c0
	// Line 996, Address: 0x23ca8c, Func Offset: 0x5cc
	// Line 998, Address: 0x23ca98, Func Offset: 0x5d8
	// Line 999, Address: 0x23caa4, Func Offset: 0x5e4
	// Line 1001, Address: 0x23cab0, Func Offset: 0x5f0
	// Line 1003, Address: 0x23cabc, Func Offset: 0x5fc
	// Line 1006, Address: 0x23cac8, Func Offset: 0x608
	// Line 1008, Address: 0x23cad4, Func Offset: 0x614
	// Line 1013, Address: 0x23cae0, Func Offset: 0x620
	// Line 1015, Address: 0x23caf8, Func Offset: 0x638
	// Line 1017, Address: 0x23cb04, Func Offset: 0x644
	// Line 1019, Address: 0x23cb10, Func Offset: 0x650
	// Line 1020, Address: 0x23cb1c, Func Offset: 0x65c
	// Line 1021, Address: 0x23cb20, Func Offset: 0x660
	// Func End, Address: 0x23cb34, Func Offset: 0x674
}

// 
// Start address: 0x23cb40
void mcCheckDir(char port)
{
	int num;
	// Line 1027, Address: 0x23cb40, Func Offset: 0
	// Line 1028, Address: 0x23cb4c, Func Offset: 0xc
	// Line 1029, Address: 0x23cb58, Func Offset: 0x18
	// Line 1030, Address: 0x23cb60, Func Offset: 0x20
	// Line 1033, Address: 0x23cb8c, Func Offset: 0x4c
	// Line 1034, Address: 0x23cb90, Func Offset: 0x50
	// Line 1035, Address: 0x23cbac, Func Offset: 0x6c
	// Line 1036, Address: 0x23cbbc, Func Offset: 0x7c
	// Line 1037, Address: 0x23cbcc, Func Offset: 0x8c
	// Line 1038, Address: 0x23cbe0, Func Offset: 0xa0
	// Func End, Address: 0x23cbf0, Func Offset: 0xb0
}

// 
// Start address: 0x23cbf0
void mcJobCheckDir()
{
	char* ename;
	_anon0* dt;
	int f;
	int fn;
	int n;
	int i;
	char port;
	// Line 1043, Address: 0x23cbf0, Func Offset: 0
	// Line 1044, Address: 0x23cc0c, Func Offset: 0x1c
	// Line 1048, Address: 0x23cc18, Func Offset: 0x28
	// Line 1050, Address: 0x23cc4c, Func Offset: 0x5c
	// Line 1051, Address: 0x23cc50, Func Offset: 0x60
	// Line 1052, Address: 0x23cc5c, Func Offset: 0x6c
	// Line 1053, Address: 0x23cc68, Func Offset: 0x78
	// Line 1054, Address: 0x23cc78, Func Offset: 0x88
	// Line 1055, Address: 0x23cc9c, Func Offset: 0xac
	// Line 1056, Address: 0x23cca0, Func Offset: 0xb0
	// Line 1057, Address: 0x23ccac, Func Offset: 0xbc
	// Line 1058, Address: 0x23cccc, Func Offset: 0xdc
	// Line 1059, Address: 0x23ccdc, Func Offset: 0xec
	// Line 1060, Address: 0x23cce4, Func Offset: 0xf4
	// Line 1062, Address: 0x23ccec, Func Offset: 0xfc
	// Line 1063, Address: 0x23ccf8, Func Offset: 0x108
	// Line 1064, Address: 0x23cd18, Func Offset: 0x128
	// Line 1065, Address: 0x23cd2c, Func Offset: 0x13c
	// Line 1066, Address: 0x23cd44, Func Offset: 0x154
	// Line 1067, Address: 0x23cd58, Func Offset: 0x168
	// Line 1069, Address: 0x23cd60, Func Offset: 0x170
	// Line 1070, Address: 0x23cd6c, Func Offset: 0x17c
	// Line 1071, Address: 0x23cd74, Func Offset: 0x184
	// Line 1073, Address: 0x23cd7c, Func Offset: 0x18c
	// Line 1075, Address: 0x23cd88, Func Offset: 0x198
	// Line 1076, Address: 0x23cd9c, Func Offset: 0x1ac
	// Line 1077, Address: 0x23cdc0, Func Offset: 0x1d0
	// Line 1078, Address: 0x23cde4, Func Offset: 0x1f4
	// Line 1079, Address: 0x23cdf8, Func Offset: 0x208
	// Line 1081, Address: 0x23ce00, Func Offset: 0x210
	// Line 1082, Address: 0x23ce10, Func Offset: 0x220
	// Line 1084, Address: 0x23ce4c, Func Offset: 0x25c
	// Line 1085, Address: 0x23ce64, Func Offset: 0x274
	// Line 1086, Address: 0x23ce6c, Func Offset: 0x27c
	// Line 1088, Address: 0x23ce84, Func Offset: 0x294
	// Line 1089, Address: 0x23ce94, Func Offset: 0x2a4
	// Line 1090, Address: 0x23ce9c, Func Offset: 0x2ac
	// Line 1091, Address: 0x23cea4, Func Offset: 0x2b4
	// Line 1092, Address: 0x23ceac, Func Offset: 0x2bc
	// Line 1094, Address: 0x23ceb4, Func Offset: 0x2c4
	// Line 1095, Address: 0x23ceb8, Func Offset: 0x2c8
	// Line 1096, Address: 0x23cec4, Func Offset: 0x2d4
	// Line 1097, Address: 0x23ced8, Func Offset: 0x2e8
	// Line 1098, Address: 0x23cee4, Func Offset: 0x2f4
	// Line 1099, Address: 0x23cee8, Func Offset: 0x2f8
	// Line 1100, Address: 0x23cef4, Func Offset: 0x304
	// Line 1101, Address: 0x23cef8, Func Offset: 0x308
	// Line 1102, Address: 0x23cf08, Func Offset: 0x318
	// Line 1103, Address: 0x23cf20, Func Offset: 0x330
	// Line 1104, Address: 0x23cf30, Func Offset: 0x340
	// Line 1105, Address: 0x23cf34, Func Offset: 0x344
	// Line 1107, Address: 0x23cf3c, Func Offset: 0x34c
	// Line 1108, Address: 0x23cf40, Func Offset: 0x350
	// Line 1110, Address: 0x23cf48, Func Offset: 0x358
	// Line 1111, Address: 0x23cf64, Func Offset: 0x374
	// Line 1112, Address: 0x23cf74, Func Offset: 0x384
	// Line 1113, Address: 0x23cf78, Func Offset: 0x388
	// Line 1115, Address: 0x23cf80, Func Offset: 0x390
	// Line 1116, Address: 0x23cf84, Func Offset: 0x394
	// Line 1118, Address: 0x23cf8c, Func Offset: 0x39c
	// Line 1119, Address: 0x23cfa8, Func Offset: 0x3b8
	// Line 1121, Address: 0x23cfc8, Func Offset: 0x3d8
	// Line 1122, Address: 0x23cfcc, Func Offset: 0x3dc
	// Line 1124, Address: 0x23cfd4, Func Offset: 0x3e4
	// Line 1125, Address: 0x23cfd8, Func Offset: 0x3e8
	// Line 1127, Address: 0x23cfe0, Func Offset: 0x3f0
	// Line 1131, Address: 0x23d070, Func Offset: 0x480
	// Line 1132, Address: 0x23d074, Func Offset: 0x484
	// Line 1134, Address: 0x23d07c, Func Offset: 0x48c
	// Line 1135, Address: 0x23d094, Func Offset: 0x4a4
	// Line 1136, Address: 0x23d0a8, Func Offset: 0x4b8
	// Line 1137, Address: 0x23d0ac, Func Offset: 0x4bc
	// Line 1139, Address: 0x23d0b4, Func Offset: 0x4c4
	// Line 1140, Address: 0x23d0d8, Func Offset: 0x4e8
	// Line 1141, Address: 0x23d0e4, Func Offset: 0x4f4
	// Line 1142, Address: 0x23d0ec, Func Offset: 0x4fc
	// Line 1144, Address: 0x23d0f4, Func Offset: 0x504
	// Line 1145, Address: 0x23d108, Func Offset: 0x518
	// Line 1146, Address: 0x23d11c, Func Offset: 0x52c
	// Line 1147, Address: 0x23d130, Func Offset: 0x540
	// Line 1148, Address: 0x23d144, Func Offset: 0x554
	// Line 1150, Address: 0x23d14c, Func Offset: 0x55c
	// Line 1151, Address: 0x23d158, Func Offset: 0x568
	// Line 1152, Address: 0x23d160, Func Offset: 0x570
	// Line 1154, Address: 0x23d168, Func Offset: 0x578
	// Line 1155, Address: 0x23d174, Func Offset: 0x584
	// Line 1156, Address: 0x23d184, Func Offset: 0x594
	// Line 1157, Address: 0x23d198, Func Offset: 0x5a8
	// Line 1159, Address: 0x23d1a0, Func Offset: 0x5b0
	// Line 1160, Address: 0x23d1ac, Func Offset: 0x5bc
	// Line 1161, Address: 0x23d1b4, Func Offset: 0x5c4
	// Line 1163, Address: 0x23d1bc, Func Offset: 0x5cc
	// Line 1164, Address: 0x23d1c8, Func Offset: 0x5d8
	// Line 1166, Address: 0x23d1d8, Func Offset: 0x5e8
	// Line 1167, Address: 0x23d1e0, Func Offset: 0x5f0
	// Line 1169, Address: 0x23d1e8, Func Offset: 0x5f8
	// Line 1170, Address: 0x23d1fc, Func Offset: 0x60c
	// Line 1172, Address: 0x23d204, Func Offset: 0x614
	// Line 1173, Address: 0x23d210, Func Offset: 0x620
	// Line 1174, Address: 0x23d218, Func Offset: 0x628
	// Line 1176, Address: 0x23d220, Func Offset: 0x630
	// Line 1177, Address: 0x23d24c, Func Offset: 0x65c
	// Line 1178, Address: 0x23d250, Func Offset: 0x660
	// Line 1179, Address: 0x23d25c, Func Offset: 0x66c
	// Line 1180, Address: 0x23d268, Func Offset: 0x678
	// Line 1181, Address: 0x23d28c, Func Offset: 0x69c
	// Line 1182, Address: 0x23d2a0, Func Offset: 0x6b0
	// Line 1183, Address: 0x23d2b8, Func Offset: 0x6c8
	// Line 1184, Address: 0x23d2d0, Func Offset: 0x6e0
	// Line 1185, Address: 0x23d2e4, Func Offset: 0x6f4
	// Line 1186, Address: 0x23d2e8, Func Offset: 0x6f8
	// Line 1187, Address: 0x23d304, Func Offset: 0x714
	// Line 1189, Address: 0x23d318, Func Offset: 0x728
	// Line 1191, Address: 0x23d340, Func Offset: 0x750
	// Line 1193, Address: 0x23d390, Func Offset: 0x7a0
	// Line 1194, Address: 0x23d394, Func Offset: 0x7a4
	// Line 1195, Address: 0x23d398, Func Offset: 0x7a8
	// Line 1196, Address: 0x23d39c, Func Offset: 0x7ac
	// Line 1197, Address: 0x23d3a0, Func Offset: 0x7b0
	// Line 1198, Address: 0x23d3b4, Func Offset: 0x7c4
	// Line 1199, Address: 0x23d3c0, Func Offset: 0x7d0
	// Line 1200, Address: 0x23d3cc, Func Offset: 0x7dc
	// Line 1201, Address: 0x23d3f8, Func Offset: 0x808
	// Line 1202, Address: 0x23d41c, Func Offset: 0x82c
	// Line 1203, Address: 0x23d42c, Func Offset: 0x83c
	// Line 1204, Address: 0x23d434, Func Offset: 0x844
	// Line 1205, Address: 0x23d448, Func Offset: 0x858
	// Line 1206, Address: 0x23d464, Func Offset: 0x874
	// Line 1208, Address: 0x23d478, Func Offset: 0x888
	// Line 1210, Address: 0x23d480, Func Offset: 0x890
	// Line 1211, Address: 0x23d48c, Func Offset: 0x89c
	// Line 1212, Address: 0x23d494, Func Offset: 0x8a4
	// Line 1214, Address: 0x23d49c, Func Offset: 0x8ac
	// Line 1215, Address: 0x23d4a4, Func Offset: 0x8b4
	// Line 1216, Address: 0x23d4cc, Func Offset: 0x8dc
	// Line 1217, Address: 0x23d4d0, Func Offset: 0x8e0
	// Line 1218, Address: 0x23d4d8, Func Offset: 0x8e8
	// Line 1219, Address: 0x23d504, Func Offset: 0x914
	// Line 1221, Address: 0x23d508, Func Offset: 0x918
	// Line 1222, Address: 0x23d534, Func Offset: 0x944
	// Line 1223, Address: 0x23d54c, Func Offset: 0x95c
	// Line 1224, Address: 0x23d554, Func Offset: 0x964
	// Line 1227, Address: 0x23d56c, Func Offset: 0x97c
	// Line 1228, Address: 0x23d594, Func Offset: 0x9a4
	// Line 1229, Address: 0x23d5a4, Func Offset: 0x9b4
	// Line 1230, Address: 0x23d5b4, Func Offset: 0x9c4
	// Line 1232, Address: 0x23d5f0, Func Offset: 0xa00
	// Line 1233, Address: 0x23d5fc, Func Offset: 0xa0c
	// Line 1234, Address: 0x23d614, Func Offset: 0xa24
	// Line 1235, Address: 0x23d618, Func Offset: 0xa28
	// Line 1236, Address: 0x23d63c, Func Offset: 0xa4c
	// Line 1237, Address: 0x23d664, Func Offset: 0xa74
	// Line 1238, Address: 0x23d68c, Func Offset: 0xa9c
	// Line 1239, Address: 0x23d698, Func Offset: 0xaa8
	// Line 1240, Address: 0x23d69c, Func Offset: 0xaac
	// Line 1241, Address: 0x23d6a4, Func Offset: 0xab4
	// Line 1245, Address: 0x23d6ac, Func Offset: 0xabc
	// Line 1249, Address: 0x23d6b4, Func Offset: 0xac4
	// Func End, Address: 0x23d6d8, Func Offset: 0xae8
}

// 
// Start address: 0x23d6e0
void mcSearchDir(char port)
{
	// Line 1255, Address: 0x23d6e0, Func Offset: 0
	// Line 1256, Address: 0x23d6ec, Func Offset: 0xc
	// Line 1257, Address: 0x23d6f8, Func Offset: 0x18
	// Line 1258, Address: 0x23d708, Func Offset: 0x28
	// Func End, Address: 0x23d718, Func Offset: 0x38
}

// 
// Start address: 0x23d720
void mcJobSearchDir()
{
	char* ename;
	unsigned long dtime;
	unsigned long t;
	_anon0* dt;
	int tn;
	int n;
	int f;
	int fn;
	int i;
	char port;
	// Line 1263, Address: 0x23d720, Func Offset: 0
	// Line 1264, Address: 0x23d744, Func Offset: 0x24
	// Line 1269, Address: 0x23d750, Func Offset: 0x30
	// Line 1271, Address: 0x23d780, Func Offset: 0x60
	// Line 1272, Address: 0x23d784, Func Offset: 0x64
	// Line 1273, Address: 0x23d790, Func Offset: 0x70
	// Line 1274, Address: 0x23d7b8, Func Offset: 0x98
	// Line 1275, Address: 0x23d7cc, Func Offset: 0xac
	// Line 1276, Address: 0x23d7dc, Func Offset: 0xbc
	// Line 1277, Address: 0x23d7e8, Func Offset: 0xc8
	// Line 1278, Address: 0x23d7f4, Func Offset: 0xd4
	// Line 1279, Address: 0x23d800, Func Offset: 0xe0
	// Line 1281, Address: 0x23d814, Func Offset: 0xf4
	// Line 1282, Address: 0x23d828, Func Offset: 0x108
	// Line 1283, Address: 0x23d83c, Func Offset: 0x11c
	// Line 1284, Address: 0x23d850, Func Offset: 0x130
	// Line 1285, Address: 0x23d864, Func Offset: 0x144
	// Line 1287, Address: 0x23d86c, Func Offset: 0x14c
	// Line 1288, Address: 0x23d87c, Func Offset: 0x15c
	// Line 1290, Address: 0x23d8b8, Func Offset: 0x198
	// Line 1291, Address: 0x23d8d0, Func Offset: 0x1b0
	// Line 1292, Address: 0x23d8d8, Func Offset: 0x1b8
	// Line 1294, Address: 0x23d8f0, Func Offset: 0x1d0
	// Line 1295, Address: 0x23d900, Func Offset: 0x1e0
	// Line 1296, Address: 0x23d908, Func Offset: 0x1e8
	// Line 1297, Address: 0x23d910, Func Offset: 0x1f0
	// Line 1298, Address: 0x23d918, Func Offset: 0x1f8
	// Line 1300, Address: 0x23d920, Func Offset: 0x200
	// Line 1301, Address: 0x23d92c, Func Offset: 0x20c
	// Line 1302, Address: 0x23d93c, Func Offset: 0x21c
	// Line 1303, Address: 0x23d950, Func Offset: 0x230
	// Line 1305, Address: 0x23d958, Func Offset: 0x238
	// Line 1306, Address: 0x23d964, Func Offset: 0x244
	// Line 1307, Address: 0x23d96c, Func Offset: 0x24c
	// Line 1309, Address: 0x23d974, Func Offset: 0x254
	// Line 1310, Address: 0x23d980, Func Offset: 0x260
	// Line 1312, Address: 0x23d990, Func Offset: 0x270
	// Line 1313, Address: 0x23d998, Func Offset: 0x278
	// Line 1315, Address: 0x23d9a0, Func Offset: 0x280
	// Line 1316, Address: 0x23d9b4, Func Offset: 0x294
	// Line 1318, Address: 0x23d9bc, Func Offset: 0x29c
	// Line 1319, Address: 0x23d9c8, Func Offset: 0x2a8
	// Line 1320, Address: 0x23d9d0, Func Offset: 0x2b0
	// Line 1322, Address: 0x23d9d8, Func Offset: 0x2b8
	// Line 1323, Address: 0x23d9e4, Func Offset: 0x2c4
	// Line 1324, Address: 0x23da08, Func Offset: 0x2e8
	// Line 1325, Address: 0x23da2c, Func Offset: 0x30c
	// Line 1326, Address: 0x23da40, Func Offset: 0x320
	// Line 1328, Address: 0x23da48, Func Offset: 0x328
	// Line 1329, Address: 0x23da54, Func Offset: 0x334
	// Line 1330, Address: 0x23da5c, Func Offset: 0x33c
	// Line 1332, Address: 0x23da64, Func Offset: 0x344
	// Line 1333, Address: 0x23da68, Func Offset: 0x348
	// Line 1334, Address: 0x23da74, Func Offset: 0x354
	// Line 1335, Address: 0x23da78, Func Offset: 0x358
	// Line 1336, Address: 0x23da7c, Func Offset: 0x35c
	// Line 1337, Address: 0x23da80, Func Offset: 0x360
	// Line 1338, Address: 0x23da84, Func Offset: 0x364
	// Line 1339, Address: 0x23da98, Func Offset: 0x378
	// Line 1340, Address: 0x23daa4, Func Offset: 0x384
	// Line 1341, Address: 0x23daa8, Func Offset: 0x388
	// Line 1342, Address: 0x23dab8, Func Offset: 0x398
	// Line 1343, Address: 0x23dad0, Func Offset: 0x3b0
	// Line 1344, Address: 0x23dae0, Func Offset: 0x3c0
	// Line 1345, Address: 0x23dae4, Func Offset: 0x3c4
	// Line 1347, Address: 0x23daec, Func Offset: 0x3cc
	// Line 1348, Address: 0x23daf0, Func Offset: 0x3d0
	// Line 1350, Address: 0x23daf8, Func Offset: 0x3d8
	// Line 1351, Address: 0x23db14, Func Offset: 0x3f4
	// Line 1352, Address: 0x23db24, Func Offset: 0x404
	// Line 1353, Address: 0x23db28, Func Offset: 0x408
	// Line 1355, Address: 0x23db30, Func Offset: 0x410
	// Line 1356, Address: 0x23db34, Func Offset: 0x414
	// Line 1358, Address: 0x23db3c, Func Offset: 0x41c
	// Line 1359, Address: 0x23db58, Func Offset: 0x438
	// Line 1361, Address: 0x23db78, Func Offset: 0x458
	// Line 1362, Address: 0x23db7c, Func Offset: 0x45c
	// Line 1364, Address: 0x23db84, Func Offset: 0x464
	// Line 1365, Address: 0x23db88, Func Offset: 0x468
	// Line 1367, Address: 0x23db90, Func Offset: 0x470
	// Line 1371, Address: 0x23dc20, Func Offset: 0x500
	// Line 1372, Address: 0x23dc24, Func Offset: 0x504
	// Line 1374, Address: 0x23dc2c, Func Offset: 0x50c
	// Line 1375, Address: 0x23dc44, Func Offset: 0x524
	// Line 1376, Address: 0x23dc58, Func Offset: 0x538
	// Line 1377, Address: 0x23dc5c, Func Offset: 0x53c
	// Line 1379, Address: 0x23dc64, Func Offset: 0x544
	// Line 1380, Address: 0x23dc74, Func Offset: 0x554
	// Line 1381, Address: 0x23dc94, Func Offset: 0x574
	// Line 1383, Address: 0x23dc9c, Func Offset: 0x57c
	// Line 1385, Address: 0x23dcbc, Func Offset: 0x59c
	// Line 1386, Address: 0x23dcc0, Func Offset: 0x5a0
	// Line 1387, Address: 0x23dccc, Func Offset: 0x5ac
	// Line 1388, Address: 0x23dcd0, Func Offset: 0x5b0
	// Line 1390, Address: 0x23dcd4, Func Offset: 0x5b4
	// Line 1391, Address: 0x23dcf8, Func Offset: 0x5d8
	// Line 1392, Address: 0x23dd04, Func Offset: 0x5e4
	// Line 1393, Address: 0x23dd0c, Func Offset: 0x5ec
	// Line 1395, Address: 0x23dd1c, Func Offset: 0x5fc
	// Line 1396, Address: 0x23dd48, Func Offset: 0x628
	// Line 1397, Address: 0x23dd54, Func Offset: 0x634
	// Line 1398, Address: 0x23dd60, Func Offset: 0x640
	// Line 1399, Address: 0x23dd84, Func Offset: 0x664
	// Line 1400, Address: 0x23dd98, Func Offset: 0x678
	// Line 1401, Address: 0x23ddb4, Func Offset: 0x694
	// Line 1402, Address: 0x23ddcc, Func Offset: 0x6ac
	// Line 1401, Address: 0x23ddd0, Func Offset: 0x6b0
	// Line 1403, Address: 0x23ddd8, Func Offset: 0x6b8
	// Line 1405, Address: 0x23de00, Func Offset: 0x6e0
	// Line 1407, Address: 0x23de28, Func Offset: 0x708
	// Line 1408, Address: 0x23de2c, Func Offset: 0x70c
	// Line 1410, Address: 0x23de38, Func Offset: 0x718
	// Line 1411, Address: 0x23de3c, Func Offset: 0x71c
	// Line 1412, Address: 0x23de54, Func Offset: 0x734
	// Line 1413, Address: 0x23de60, Func Offset: 0x740
	// Line 1415, Address: 0x23de84, Func Offset: 0x764
	// Line 1416, Address: 0x23deac, Func Offset: 0x78c
	// Line 1417, Address: 0x23debc, Func Offset: 0x79c
	// Line 1418, Address: 0x23decc, Func Offset: 0x7ac
	// Line 1420, Address: 0x23df08, Func Offset: 0x7e8
	// Line 1421, Address: 0x23df14, Func Offset: 0x7f4
	// Line 1425, Address: 0x23df1c, Func Offset: 0x7fc
	// Func End, Address: 0x23df48, Func Offset: 0x828
}

// 
// Start address: 0x23df50
void mcSearchDir2(char port)
{
	// Line 1431, Address: 0x23df50, Func Offset: 0
	// Line 1432, Address: 0x23df5c, Func Offset: 0xc
	// Line 1433, Address: 0x23df68, Func Offset: 0x18
	// Line 1434, Address: 0x23df78, Func Offset: 0x28
	// Func End, Address: 0x23df88, Func Offset: 0x38
}

// 
// Start address: 0x23df90
void mcJobSearchDir2()
{
	char* ename;
	unsigned long dtime;
	unsigned long t;
	_anon0* dt;
	int tn;
	int n;
	int f;
	int fn;
	int i;
	char port;
	// Line 1439, Address: 0x23df90, Func Offset: 0
	// Line 1440, Address: 0x23dfb4, Func Offset: 0x24
	// Line 1445, Address: 0x23dfc0, Func Offset: 0x30
	// Line 1447, Address: 0x23dff0, Func Offset: 0x60
	// Line 1448, Address: 0x23dff4, Func Offset: 0x64
	// Line 1449, Address: 0x23e000, Func Offset: 0x70
	// Line 1450, Address: 0x23e028, Func Offset: 0x98
	// Line 1451, Address: 0x23e03c, Func Offset: 0xac
	// Line 1452, Address: 0x23e04c, Func Offset: 0xbc
	// Line 1453, Address: 0x23e058, Func Offset: 0xc8
	// Line 1454, Address: 0x23e070, Func Offset: 0xe0
	// Line 1455, Address: 0x23e07c, Func Offset: 0xec
	// Line 1456, Address: 0x23e088, Func Offset: 0xf8
	// Line 1457, Address: 0x23e0a0, Func Offset: 0x110
	// Line 1459, Address: 0x23e0b4, Func Offset: 0x124
	// Line 1460, Address: 0x23e0c8, Func Offset: 0x138
	// Line 1461, Address: 0x23e0dc, Func Offset: 0x14c
	// Line 1462, Address: 0x23e0f0, Func Offset: 0x160
	// Line 1463, Address: 0x23e104, Func Offset: 0x174
	// Line 1465, Address: 0x23e10c, Func Offset: 0x17c
	// Line 1466, Address: 0x23e11c, Func Offset: 0x18c
	// Line 1467, Address: 0x23e124, Func Offset: 0x194
	// Line 1468, Address: 0x23e130, Func Offset: 0x1a0
	// Line 1469, Address: 0x23e14c, Func Offset: 0x1bc
	// Line 1471, Address: 0x23e170, Func Offset: 0x1e0
	// Line 1472, Address: 0x23e180, Func Offset: 0x1f0
	// Line 1473, Address: 0x23e188, Func Offset: 0x1f8
	// Line 1474, Address: 0x23e190, Func Offset: 0x200
	// Line 1475, Address: 0x23e198, Func Offset: 0x208
	// Line 1477, Address: 0x23e1a0, Func Offset: 0x210
	// Line 1478, Address: 0x23e1ac, Func Offset: 0x21c
	// Line 1479, Address: 0x23e1bc, Func Offset: 0x22c
	// Line 1480, Address: 0x23e1d0, Func Offset: 0x240
	// Line 1482, Address: 0x23e1d8, Func Offset: 0x248
	// Line 1483, Address: 0x23e1e4, Func Offset: 0x254
	// Line 1484, Address: 0x23e1ec, Func Offset: 0x25c
	// Line 1486, Address: 0x23e1f4, Func Offset: 0x264
	// Line 1487, Address: 0x23e200, Func Offset: 0x270
	// Line 1489, Address: 0x23e210, Func Offset: 0x280
	// Line 1490, Address: 0x23e218, Func Offset: 0x288
	// Line 1492, Address: 0x23e220, Func Offset: 0x290
	// Line 1493, Address: 0x23e234, Func Offset: 0x2a4
	// Line 1495, Address: 0x23e23c, Func Offset: 0x2ac
	// Line 1496, Address: 0x23e248, Func Offset: 0x2b8
	// Line 1497, Address: 0x23e250, Func Offset: 0x2c0
	// Line 1499, Address: 0x23e258, Func Offset: 0x2c8
	// Line 1500, Address: 0x23e264, Func Offset: 0x2d4
	// Line 1501, Address: 0x23e288, Func Offset: 0x2f8
	// Line 1502, Address: 0x23e2ac, Func Offset: 0x31c
	// Line 1503, Address: 0x23e2c0, Func Offset: 0x330
	// Line 1505, Address: 0x23e2c8, Func Offset: 0x338
	// Line 1506, Address: 0x23e2d4, Func Offset: 0x344
	// Line 1507, Address: 0x23e2dc, Func Offset: 0x34c
	// Line 1509, Address: 0x23e2e4, Func Offset: 0x354
	// Line 1510, Address: 0x23e2e8, Func Offset: 0x358
	// Line 1511, Address: 0x23e2f4, Func Offset: 0x364
	// Line 1512, Address: 0x23e2f8, Func Offset: 0x368
	// Line 1516, Address: 0x23e2fc, Func Offset: 0x36c
	// Line 1518, Address: 0x23e31c, Func Offset: 0x38c
	// Line 1519, Address: 0x23e320, Func Offset: 0x390
	// Line 1520, Address: 0x23e334, Func Offset: 0x3a4
	// Line 1521, Address: 0x23e340, Func Offset: 0x3b0
	// Line 1522, Address: 0x23e344, Func Offset: 0x3b4
	// Line 1523, Address: 0x23e354, Func Offset: 0x3c4
	// Line 1524, Address: 0x23e36c, Func Offset: 0x3dc
	// Line 1525, Address: 0x23e37c, Func Offset: 0x3ec
	// Line 1526, Address: 0x23e380, Func Offset: 0x3f0
	// Line 1528, Address: 0x23e388, Func Offset: 0x3f8
	// Line 1529, Address: 0x23e38c, Func Offset: 0x3fc
	// Line 1531, Address: 0x23e394, Func Offset: 0x404
	// Line 1532, Address: 0x23e3b0, Func Offset: 0x420
	// Line 1533, Address: 0x23e3c0, Func Offset: 0x430
	// Line 1534, Address: 0x23e3c4, Func Offset: 0x434
	// Line 1536, Address: 0x23e3cc, Func Offset: 0x43c
	// Line 1537, Address: 0x23e3d0, Func Offset: 0x440
	// Line 1539, Address: 0x23e3d8, Func Offset: 0x448
	// Line 1540, Address: 0x23e3f4, Func Offset: 0x464
	// Line 1542, Address: 0x23e414, Func Offset: 0x484
	// Line 1543, Address: 0x23e418, Func Offset: 0x488
	// Line 1545, Address: 0x23e420, Func Offset: 0x490
	// Line 1546, Address: 0x23e424, Func Offset: 0x494
	// Line 1548, Address: 0x23e42c, Func Offset: 0x49c
	// Line 1552, Address: 0x23e4c0, Func Offset: 0x530
	// Line 1553, Address: 0x23e4c4, Func Offset: 0x534
	// Line 1555, Address: 0x23e4cc, Func Offset: 0x53c
	// Line 1556, Address: 0x23e4e4, Func Offset: 0x554
	// Line 1557, Address: 0x23e4f8, Func Offset: 0x568
	// Line 1558, Address: 0x23e4fc, Func Offset: 0x56c
	// Line 1560, Address: 0x23e504, Func Offset: 0x574
	// Line 1561, Address: 0x23e528, Func Offset: 0x598
	// Line 1562, Address: 0x23e538, Func Offset: 0x5a8
	// Line 1563, Address: 0x23e540, Func Offset: 0x5b0
	// Line 1565, Address: 0x23e548, Func Offset: 0x5b8
	// Line 1566, Address: 0x23e54c, Func Offset: 0x5bc
	// Line 1567, Address: 0x23e55c, Func Offset: 0x5cc
	// Line 1568, Address: 0x23e568, Func Offset: 0x5d8
	// Line 1569, Address: 0x23e56c, Func Offset: 0x5dc
	// Line 1571, Address: 0x23e570, Func Offset: 0x5e0
	// Line 1572, Address: 0x23e580, Func Offset: 0x5f0
	// Line 1573, Address: 0x23e58c, Func Offset: 0x5fc
	// Line 1574, Address: 0x23e590, Func Offset: 0x600
	// Line 1577, Address: 0x23e594, Func Offset: 0x604
	// Line 1578, Address: 0x23e5b8, Func Offset: 0x628
	// Line 1579, Address: 0x23e5c4, Func Offset: 0x634
	// Line 1580, Address: 0x23e5cc, Func Offset: 0x63c
	// Line 1582, Address: 0x23e5dc, Func Offset: 0x64c
	// Line 1583, Address: 0x23e608, Func Offset: 0x678
	// Line 1584, Address: 0x23e614, Func Offset: 0x684
	// Line 1585, Address: 0x23e620, Func Offset: 0x690
	// Line 1586, Address: 0x23e644, Func Offset: 0x6b4
	// Line 1587, Address: 0x23e658, Func Offset: 0x6c8
	// Line 1588, Address: 0x23e674, Func Offset: 0x6e4
	// Line 1589, Address: 0x23e68c, Func Offset: 0x6fc
	// Line 1588, Address: 0x23e690, Func Offset: 0x700
	// Line 1590, Address: 0x23e698, Func Offset: 0x708
	// Line 1592, Address: 0x23e6c0, Func Offset: 0x730
	// Line 1594, Address: 0x23e6e8, Func Offset: 0x758
	// Line 1595, Address: 0x23e6f8, Func Offset: 0x768
	// Line 1596, Address: 0x23e6fc, Func Offset: 0x76c
	// Line 1597, Address: 0x23e708, Func Offset: 0x778
	// Line 1598, Address: 0x23e710, Func Offset: 0x780
	// Line 1599, Address: 0x23e714, Func Offset: 0x784
	// Line 1602, Address: 0x23e720, Func Offset: 0x790
	// Line 1603, Address: 0x23e724, Func Offset: 0x794
	// Line 1604, Address: 0x23e73c, Func Offset: 0x7ac
	// Line 1605, Address: 0x23e748, Func Offset: 0x7b8
	// Line 1606, Address: 0x23e76c, Func Offset: 0x7dc
	// Line 1608, Address: 0x23e77c, Func Offset: 0x7ec
	// Line 1609, Address: 0x23e7a4, Func Offset: 0x814
	// Line 1610, Address: 0x23e7b4, Func Offset: 0x824
	// Line 1611, Address: 0x23e7c4, Func Offset: 0x834
	// Line 1613, Address: 0x23e800, Func Offset: 0x870
	// Line 1614, Address: 0x23e80c, Func Offset: 0x87c
	// Line 1616, Address: 0x23e814, Func Offset: 0x884
	// Line 1618, Address: 0x23e81c, Func Offset: 0x88c
	// Line 1619, Address: 0x23e828, Func Offset: 0x898
	// Line 1620, Address: 0x23e830, Func Offset: 0x8a0
	// Line 1621, Address: 0x23e838, Func Offset: 0x8a8
	// Line 1623, Address: 0x23e874, Func Offset: 0x8e4
	// Line 1624, Address: 0x23e88c, Func Offset: 0x8fc
	// Line 1625, Address: 0x23e894, Func Offset: 0x904
	// Line 1628, Address: 0x23e8ac, Func Offset: 0x91c
	// Line 1631, Address: 0x23e8bc, Func Offset: 0x92c
	// Func End, Address: 0x23e8e8, Func Offset: 0x958
}

// 
// Start address: 0x23e8f0
_anon0* mcGetDt(char* name)
{
	char* name2;
	char* str;
	int i;
	// Line 1639, Address: 0x23e8f0, Func Offset: 0
	// Line 1641, Address: 0x23e8f8, Func Offset: 0x8
	// Line 1642, Address: 0x23e8fc, Func Offset: 0xc
	// Line 1643, Address: 0x23e900, Func Offset: 0x10
	// Line 1644, Address: 0x23e928, Func Offset: 0x38
	// Line 1645, Address: 0x23e930, Func Offset: 0x40
	// Line 1646, Address: 0x23e940, Func Offset: 0x50
	// Line 1647, Address: 0x23e944, Func Offset: 0x54
	// Line 1649, Address: 0x23e94c, Func Offset: 0x5c
	// Line 1650, Address: 0x23e960, Func Offset: 0x70
	// Line 1651, Address: 0x23e96c, Func Offset: 0x7c
	// Line 1652, Address: 0x23e98c, Func Offset: 0x9c
	// Line 1653, Address: 0x23e9a4, Func Offset: 0xb4
	// Line 1654, Address: 0x23e9c0, Func Offset: 0xd0
	// Line 1655, Address: 0x23e9c4, Func Offset: 0xd4
	// Func End, Address: 0x23e9d4, Func Offset: 0xe4
}

// 
// Start address: 0x23e9e0
void mcFormat(char port)
{
	int num;
	// Line 1661, Address: 0x23e9e0, Func Offset: 0
	// Line 1663, Address: 0x23e9ec, Func Offset: 0xc
	// Line 1664, Address: 0x23e9f8, Func Offset: 0x18
	// Line 1665, Address: 0x23ea04, Func Offset: 0x24
	// Line 1666, Address: 0x23ea0c, Func Offset: 0x2c
	// Line 1667, Address: 0x23ea28, Func Offset: 0x48
	// Line 1668, Address: 0x23ea2c, Func Offset: 0x4c
	// Line 1669, Address: 0x23ea30, Func Offset: 0x50
	// Line 1670, Address: 0x23ea4c, Func Offset: 0x6c
	// Line 1671, Address: 0x23ea64, Func Offset: 0x84
	// Line 1672, Address: 0x23ea78, Func Offset: 0x98
	// Line 1673, Address: 0x23ea8c, Func Offset: 0xac
	// Line 1675, Address: 0x23eabc, Func Offset: 0xdc
	// Line 1677, Address: 0x23eac0, Func Offset: 0xe0
	// Line 1678, Address: 0x23ead0, Func Offset: 0xf0
	// Func End, Address: 0x23eae0, Func Offset: 0x100
}

// 
// Start address: 0x23eae0
int mcCheckStatus(char port)
{
	// Line 1706, Address: 0x23eae0, Func Offset: 0
	// Line 1713, Address: 0x23eb10, Func Offset: 0x30
	// Line 1715, Address: 0x23eb1c, Func Offset: 0x3c
	// Line 1716, Address: 0x23eb20, Func Offset: 0x40
	// Func End, Address: 0x23eb28, Func Offset: 0x48
}

// 
// Start address: 0x23eb30
int mcCheckCanSave(char port)
{
	int b;
	int s;
	int f;
	int i;
	// Line 1725, Address: 0x23eb30, Func Offset: 0
	// Line 1726, Address: 0x23eb60, Func Offset: 0x30
	// Line 1727, Address: 0x23eb6c, Func Offset: 0x3c
	// Line 1728, Address: 0x23eb8c, Func Offset: 0x5c
	// Line 1729, Address: 0x23eb90, Func Offset: 0x60
	// Line 1730, Address: 0x23eb94, Func Offset: 0x64
	// Line 1731, Address: 0x23eba0, Func Offset: 0x70
	// Line 1732, Address: 0x23ebb4, Func Offset: 0x84
	// Line 1733, Address: 0x23ebc0, Func Offset: 0x90
	// Line 1734, Address: 0x23ebcc, Func Offset: 0x9c
	// Line 1735, Address: 0x23ebd8, Func Offset: 0xa8
	// Line 1736, Address: 0x23ebdc, Func Offset: 0xac
	// Line 1737, Address: 0x23ebf4, Func Offset: 0xc4
	// Line 1738, Address: 0x23ebf8, Func Offset: 0xc8
	// Line 1739, Address: 0x23ec0c, Func Offset: 0xdc
	// Line 1740, Address: 0x23ec10, Func Offset: 0xe0
	// Line 1741, Address: 0x23ec30, Func Offset: 0x100
	// Line 1743, Address: 0x23ec3c, Func Offset: 0x10c
	// Line 1744, Address: 0x23ec4c, Func Offset: 0x11c
	// Line 1745, Address: 0x23ec58, Func Offset: 0x128
	// Line 1746, Address: 0x23ec64, Func Offset: 0x134
	// Line 1747, Address: 0x23ec70, Func Offset: 0x140
	// Line 1749, Address: 0x23ec7c, Func Offset: 0x14c
	// Line 1752, Address: 0x23ec98, Func Offset: 0x168
	// Func End, Address: 0x23eca0, Func Offset: 0x170
}

// 
// Start address: 0x23eca0
void mcJobNewDir()
{
	// Line 1757, Address: 0x23eca0, Func Offset: 0
	// Line 1758, Address: 0x23eca8, Func Offset: 0x8
	// Line 1760, Address: 0x23ece4, Func Offset: 0x44
	// Line 1761, Address: 0x23ed08, Func Offset: 0x68
	// Line 1763, Address: 0x23ed10, Func Offset: 0x70
	// Line 1764, Address: 0x23ed24, Func Offset: 0x84
	// Line 1765, Address: 0x23ed2c, Func Offset: 0x8c
	// Line 1767, Address: 0x23ed34, Func Offset: 0x94
	// Line 1768, Address: 0x23ed3c, Func Offset: 0x9c
	// Line 1769, Address: 0x23ed4c, Func Offset: 0xac
	// Line 1770, Address: 0x23ed58, Func Offset: 0xb8
	// Line 1771, Address: 0x23ed74, Func Offset: 0xd4
	// Line 1772, Address: 0x23ed88, Func Offset: 0xe8
	// Line 1774, Address: 0x23ed90, Func Offset: 0xf0
	// Line 1776, Address: 0x23edb0, Func Offset: 0x110
	// Line 1777, Address: 0x23edb8, Func Offset: 0x118
	// Line 1779, Address: 0x23edc0, Func Offset: 0x120
	// Line 1782, Address: 0x23edc8, Func Offset: 0x128
	// Func End, Address: 0x23edd8, Func Offset: 0x138
}

// 
// Start address: 0x23ede0
void mcOpenWO(char* name)
{
	_anon0* dt;
	// Line 1788, Address: 0x23ede0, Func Offset: 0
	// Line 1789, Address: 0x23edec, Func Offset: 0xc
	// Line 1791, Address: 0x23edf4, Func Offset: 0x14
	// Line 1792, Address: 0x23ee1c, Func Offset: 0x3c
	// Line 1793, Address: 0x23ee24, Func Offset: 0x44
	// Line 1795, Address: 0x23ee2c, Func Offset: 0x4c
	// Line 1796, Address: 0x23ee4c, Func Offset: 0x6c
	// Func End, Address: 0x23ee5c, Func Offset: 0x7c
}

// 
// Start address: 0x23ee60
void mcOpenRO(char* name)
{
	// Line 1802, Address: 0x23ee60, Func Offset: 0
	// Line 1803, Address: 0x23ee6c, Func Offset: 0xc
	// Line 1804, Address: 0x23ee88, Func Offset: 0x28
	// Func End, Address: 0x23ee98, Func Offset: 0x38
}

// 
// Start address: 0x23eea0
void mcOpenRW(char* name)
{
	// Line 1810, Address: 0x23eea0, Func Offset: 0
	// Line 1811, Address: 0x23eeac, Func Offset: 0xc
	// Line 1812, Address: 0x23eec8, Func Offset: 0x28
	// Func End, Address: 0x23eed8, Func Offset: 0x38
}

// 
// Start address: 0x23eee0
void mcSaveIconSys(char port, char dn)
{
	// Line 1819, Address: 0x23eee0, Func Offset: 0
	// Line 1820, Address: 0x23eeec, Func Offset: 0xc
	// Line 1821, Address: 0x23ef04, Func Offset: 0x24
	// Func End, Address: 0x23ef14, Func Offset: 0x34
}

// 
// Start address: 0x23ef20
void mcJobSaveIconSys()
{
	// Line 1826, Address: 0x23ef20, Func Offset: 0
	// Line 1827, Address: 0x23ef28, Func Offset: 0x8
	// Line 1829, Address: 0x23ef70, Func Offset: 0x50
	// Line 1830, Address: 0x23ef84, Func Offset: 0x64
	// Line 1831, Address: 0x23efa0, Func Offset: 0x80
	// Line 1832, Address: 0x23efb4, Func Offset: 0x94
	// Line 1834, Address: 0x23efbc, Func Offset: 0x9c
	// Line 1835, Address: 0x23efd0, Func Offset: 0xb0
	// Line 1836, Address: 0x23efd8, Func Offset: 0xb8
	// Line 1838, Address: 0x23efe0, Func Offset: 0xc0
	// Line 1840, Address: 0x23efe4, Func Offset: 0xc4
	// Line 1841, Address: 0x23eff8, Func Offset: 0xd8
	// Line 1842, Address: 0x23f004, Func Offset: 0xe4
	// Line 1843, Address: 0x23f01c, Func Offset: 0xfc
	// Line 1844, Address: 0x23f034, Func Offset: 0x114
	// Line 1845, Address: 0x23f03c, Func Offset: 0x11c
	// Line 1846, Address: 0x23f048, Func Offset: 0x128
	// Line 1847, Address: 0x23f060, Func Offset: 0x140
	// Line 1849, Address: 0x23f078, Func Offset: 0x158
	// Line 1851, Address: 0x23f080, Func Offset: 0x160
	// Line 1852, Address: 0x23f094, Func Offset: 0x174
	// Line 1853, Address: 0x23f09c, Func Offset: 0x17c
	// Line 1855, Address: 0x23f0a4, Func Offset: 0x184
	// Line 1856, Address: 0x23f0b0, Func Offset: 0x190
	// Line 1858, Address: 0x23f0b8, Func Offset: 0x198
	// Line 1859, Address: 0x23f0cc, Func Offset: 0x1ac
	// Line 1860, Address: 0x23f0d4, Func Offset: 0x1b4
	// Line 1862, Address: 0x23f0dc, Func Offset: 0x1bc
	// Line 1863, Address: 0x23f0f0, Func Offset: 0x1d0
	// Line 1864, Address: 0x23f0f8, Func Offset: 0x1d8
	// Line 1865, Address: 0x23f104, Func Offset: 0x1e4
	// Line 1867, Address: 0x23f10c, Func Offset: 0x1ec
	// Line 1870, Address: 0x23f114, Func Offset: 0x1f4
	// Func End, Address: 0x23f124, Func Offset: 0x204
}

// 
// Start address: 0x23f130
void mcSaveIcon(char port, char dn)
{
	// Line 1877, Address: 0x23f130, Func Offset: 0
	// Line 1878, Address: 0x23f13c, Func Offset: 0xc
	// Line 1879, Address: 0x23f154, Func Offset: 0x24
	// Func End, Address: 0x23f164, Func Offset: 0x34
}

// 
// Start address: 0x23f170
void mcJobSaveIcon()
{
	// Line 1884, Address: 0x23f170, Func Offset: 0
	// Line 1885, Address: 0x23f178, Func Offset: 0x8
	// Line 1889, Address: 0x23f188, Func Offset: 0x18
	// Line 1891, Address: 0x23f1d0, Func Offset: 0x60
	// Line 1892, Address: 0x23f1e4, Func Offset: 0x74
	// Line 1893, Address: 0x23f200, Func Offset: 0x90
	// Line 1894, Address: 0x23f214, Func Offset: 0xa4
	// Line 1896, Address: 0x23f21c, Func Offset: 0xac
	// Line 1897, Address: 0x23f230, Func Offset: 0xc0
	// Line 1898, Address: 0x23f238, Func Offset: 0xc8
	// Line 1900, Address: 0x23f240, Func Offset: 0xd0
	// Line 1901, Address: 0x23f244, Func Offset: 0xd4
	// Line 1902, Address: 0x23f258, Func Offset: 0xe8
	// Line 1903, Address: 0x23f278, Func Offset: 0x108
	// Line 1904, Address: 0x23f280, Func Offset: 0x110
	// Line 1906, Address: 0x23f2a4, Func Offset: 0x134
	// Line 1908, Address: 0x23f2ac, Func Offset: 0x13c
	// Line 1909, Address: 0x23f2c0, Func Offset: 0x150
	// Line 1910, Address: 0x23f2c8, Func Offset: 0x158
	// Line 1912, Address: 0x23f2d0, Func Offset: 0x160
	// Line 1913, Address: 0x23f2dc, Func Offset: 0x16c
	// Line 1914, Address: 0x23f2f0, Func Offset: 0x180
	// Line 1915, Address: 0x23f2fc, Func Offset: 0x18c
	// Line 1916, Address: 0x23f310, Func Offset: 0x1a0
	// Line 1917, Address: 0x23f31c, Func Offset: 0x1ac
	// Line 1918, Address: 0x23f330, Func Offset: 0x1c0
	// Line 1919, Address: 0x23f338, Func Offset: 0x1c8
	// Line 1921, Address: 0x23f340, Func Offset: 0x1d0
	// Line 1922, Address: 0x23f350, Func Offset: 0x1e0
	// Line 1924, Address: 0x23f360, Func Offset: 0x1f0
	// Line 1926, Address: 0x23f368, Func Offset: 0x1f8
	// Line 1927, Address: 0x23f37c, Func Offset: 0x20c
	// Line 1928, Address: 0x23f384, Func Offset: 0x214
	// Line 1930, Address: 0x23f38c, Func Offset: 0x21c
	// Line 1933, Address: 0x23f394, Func Offset: 0x224
	// Func End, Address: 0x23f3a4, Func Offset: 0x234
}

// 
// Start address: 0x23f3b0
void mcSaveData(char port, char dn, char fn)
{
	// Line 1941, Address: 0x23f3b0, Func Offset: 0
	// Line 1942, Address: 0x23f3d4, Func Offset: 0x24
	// Line 1943, Address: 0x23f3f0, Func Offset: 0x40
	// Line 1950, Address: 0x23f404, Func Offset: 0x54
	// Line 1951, Address: 0x23f43c, Func Offset: 0x8c
	// Line 1952, Address: 0x23f450, Func Offset: 0xa0
	// Line 1953, Address: 0x23f460, Func Offset: 0xb0
	// Line 1955, Address: 0x23f470, Func Offset: 0xc0
	// Line 1956, Address: 0x23f49c, Func Offset: 0xec
	// Func End, Address: 0x23f4bc, Func Offset: 0x10c
}

// 
// Start address: 0x23f4c0
void mcJobSaveData()
{
	// Line 1961, Address: 0x23f4c0, Func Offset: 0
	// Line 1962, Address: 0x23f4c8, Func Offset: 0x8
	// Line 1964, Address: 0x23f504, Func Offset: 0x44
	// Line 1965, Address: 0x23f528, Func Offset: 0x68
	// Line 1967, Address: 0x23f530, Func Offset: 0x70
	// Line 1968, Address: 0x23f544, Func Offset: 0x84
	// Line 1969, Address: 0x23f54c, Func Offset: 0x8c
	// Line 1971, Address: 0x23f558, Func Offset: 0x98
	// Line 1973, Address: 0x23f5a8, Func Offset: 0xe8
	// Line 1974, Address: 0x23f5bc, Func Offset: 0xfc
	// Line 1976, Address: 0x23f5c4, Func Offset: 0x104
	// Line 1977, Address: 0x23f5d8, Func Offset: 0x118
	// Line 1978, Address: 0x23f5e0, Func Offset: 0x120
	// Line 1980, Address: 0x23f5e8, Func Offset: 0x128
	// Line 1981, Address: 0x23f5ec, Func Offset: 0x12c
	// Line 1982, Address: 0x23f5f4, Func Offset: 0x134
	// Line 1983, Address: 0x23f60c, Func Offset: 0x14c
	// Line 1984, Address: 0x23f614, Func Offset: 0x154
	// Line 1986, Address: 0x23f61c, Func Offset: 0x15c
	// Line 1987, Address: 0x23f630, Func Offset: 0x170
	// Line 1989, Address: 0x23f638, Func Offset: 0x178
	// Line 1990, Address: 0x23f64c, Func Offset: 0x18c
	// Line 1991, Address: 0x23f654, Func Offset: 0x194
	// Line 1993, Address: 0x23f65c, Func Offset: 0x19c
	// Line 1994, Address: 0x23f668, Func Offset: 0x1a8
	// Line 1996, Address: 0x23f670, Func Offset: 0x1b0
	// Line 1997, Address: 0x23f684, Func Offset: 0x1c4
	// Line 1998, Address: 0x23f68c, Func Offset: 0x1cc
	// Line 2000, Address: 0x23f694, Func Offset: 0x1d4
	// Line 2001, Address: 0x23f6cc, Func Offset: 0x20c
	// Line 2002, Address: 0x23f70c, Func Offset: 0x24c
	// Line 2003, Address: 0x23f720, Func Offset: 0x260
	// Line 2005, Address: 0x23f728, Func Offset: 0x268
	// Line 2006, Address: 0x23f73c, Func Offset: 0x27c
	// Line 2007, Address: 0x23f744, Func Offset: 0x284
	// Line 2009, Address: 0x23f74c, Func Offset: 0x28c
	// Line 2010, Address: 0x23f75c, Func Offset: 0x29c
	// Line 2012, Address: 0x23f7b8, Func Offset: 0x2f8
	// Line 2013, Address: 0x23f7c8, Func Offset: 0x308
	// Line 2015, Address: 0x23f7d0, Func Offset: 0x310
	// Line 2016, Address: 0x23f7e4, Func Offset: 0x324
	// Line 2017, Address: 0x23f7ec, Func Offset: 0x32c
	// Line 2019, Address: 0x23f7f4, Func Offset: 0x334
	// Line 2020, Address: 0x23f800, Func Offset: 0x340
	// Line 2022, Address: 0x23f808, Func Offset: 0x348
	// Line 2023, Address: 0x23f81c, Func Offset: 0x35c
	// Line 2024, Address: 0x23f824, Func Offset: 0x364
	// Line 2025, Address: 0x23f82c, Func Offset: 0x36c
	// Line 2026, Address: 0x23f840, Func Offset: 0x380
	// Line 2027, Address: 0x23f848, Func Offset: 0x388
	// Line 2028, Address: 0x23f85c, Func Offset: 0x39c
	// Line 2029, Address: 0x23f864, Func Offset: 0x3a4
	// Line 2031, Address: 0x23f86c, Func Offset: 0x3ac
	// Line 2032, Address: 0x23f878, Func Offset: 0x3b8
	// Line 2033, Address: 0x23f884, Func Offset: 0x3c4
	// Line 2034, Address: 0x23f8b4, Func Offset: 0x3f4
	// Line 2035, Address: 0x23f8d4, Func Offset: 0x414
	// Line 2037, Address: 0x23f8e0, Func Offset: 0x420
	// Line 2038, Address: 0x23f8f4, Func Offset: 0x434
	// Line 2040, Address: 0x23f8fc, Func Offset: 0x43c
	// Line 2041, Address: 0x23f910, Func Offset: 0x450
	// Line 2042, Address: 0x23f924, Func Offset: 0x464
	// Line 2045, Address: 0x23f92c, Func Offset: 0x46c
	// Func End, Address: 0x23f93c, Func Offset: 0x47c
}

// 
// Start address: 0x23f940
void mcLoadData(char port, char dn, char fn)
{
	int i;
	MC_FILEINFO* fi;
	// Line 2053, Address: 0x23f940, Func Offset: 0
	// Line 2056, Address: 0x23f94c, Func Offset: 0xc
	// Line 2057, Address: 0x23f960, Func Offset: 0x20
	// Line 2058, Address: 0x23f980, Func Offset: 0x40
	// Line 2059, Address: 0x23f98c, Func Offset: 0x4c
	// Line 2060, Address: 0x23f9b4, Func Offset: 0x74
	// Line 2061, Address: 0x23f9b8, Func Offset: 0x78
	// Line 2063, Address: 0x23f9c0, Func Offset: 0x80
	// Line 2064, Address: 0x23f9d8, Func Offset: 0x98
	// Line 2065, Address: 0x23f9e4, Func Offset: 0xa4
	// Line 2066, Address: 0x23f9f8, Func Offset: 0xb8
	// Line 2068, Address: 0x23fa00, Func Offset: 0xc0
	// Line 2069, Address: 0x23fa10, Func Offset: 0xd0
	// Line 2070, Address: 0x23fa24, Func Offset: 0xe4
	// Line 2078, Address: 0x23fa2c, Func Offset: 0xec
	// Line 2079, Address: 0x23fa60, Func Offset: 0x120
	// Func End, Address: 0x23fa70, Func Offset: 0x130
}

// 
// Start address: 0x23fa70
void mcJobLoadData()
{
	// Line 2084, Address: 0x23fa70, Func Offset: 0
	// Line 2085, Address: 0x23fa78, Func Offset: 0x8
	// Line 2087, Address: 0x23facc, Func Offset: 0x5c
	// Line 2088, Address: 0x23faf0, Func Offset: 0x80
	// Line 2090, Address: 0x23faf8, Func Offset: 0x88
	// Line 2091, Address: 0x23fb0c, Func Offset: 0x9c
	// Line 2092, Address: 0x23fb14, Func Offset: 0xa4
	// Line 2094, Address: 0x23fb20, Func Offset: 0xb0
	// Line 2096, Address: 0x23fb70, Func Offset: 0x100
	// Line 2097, Address: 0x23fb84, Func Offset: 0x114
	// Line 2099, Address: 0x23fb8c, Func Offset: 0x11c
	// Line 2100, Address: 0x23fba0, Func Offset: 0x130
	// Line 2101, Address: 0x23fba8, Func Offset: 0x138
	// Line 2103, Address: 0x23fbb0, Func Offset: 0x140
	// Line 2104, Address: 0x23fbbc, Func Offset: 0x14c
	// Line 2105, Address: 0x23fbd0, Func Offset: 0x160
	// Line 2107, Address: 0x23fbd8, Func Offset: 0x168
	// Line 2108, Address: 0x23fbec, Func Offset: 0x17c
	// Line 2109, Address: 0x23fbf4, Func Offset: 0x184
	// Line 2111, Address: 0x23fbfc, Func Offset: 0x18c
	// Line 2112, Address: 0x23fc04, Func Offset: 0x194
	// Line 2113, Address: 0x23fc18, Func Offset: 0x1a8
	// Line 2115, Address: 0x23fc20, Func Offset: 0x1b0
	// Line 2116, Address: 0x23fc28, Func Offset: 0x1b8
	// Line 2117, Address: 0x23fc4c, Func Offset: 0x1dc
	// Line 2118, Address: 0x23fc54, Func Offset: 0x1e4
	// Line 2120, Address: 0x23fc5c, Func Offset: 0x1ec
	// Line 2121, Address: 0x23fc70, Func Offset: 0x200
	// Line 2122, Address: 0x23fc7c, Func Offset: 0x20c
	// Line 2123, Address: 0x23fcac, Func Offset: 0x23c
	// Line 2124, Address: 0x23fccc, Func Offset: 0x25c
	// Line 2126, Address: 0x23fd00, Func Offset: 0x290
	// Line 2129, Address: 0x23fd08, Func Offset: 0x298
	// Func End, Address: 0x23fd18, Func Offset: 0x2a8
}

// 
// Start address: 0x23fd20
void mcLoadData2(char port, short n)
{
	MC_FILEINFO* fi;
	// Line 2136, Address: 0x23fd20, Func Offset: 0
	// Line 2138, Address: 0x23fd2c, Func Offset: 0xc
	// Line 2139, Address: 0x23fd48, Func Offset: 0x28
	// Line 2140, Address: 0x23fd7c, Func Offset: 0x5c
	// Line 2141, Address: 0x23fd8c, Func Offset: 0x6c
	// Line 2142, Address: 0x23fda0, Func Offset: 0x80
	// Line 2144, Address: 0x23fda8, Func Offset: 0x88
	// Line 2145, Address: 0x23fdb4, Func Offset: 0x94
	// Line 2146, Address: 0x23fde0, Func Offset: 0xc0
	// Func End, Address: 0x23fdf0, Func Offset: 0xd0
}

// 
// Start address: 0x23fdf0
void mcDeleteData(char port, char dn, char fn)
{
	int i;
	// Line 2154, Address: 0x23fdf0, Func Offset: 0
	// Line 2156, Address: 0x23fdfc, Func Offset: 0xc
	// Line 2157, Address: 0x23fe10, Func Offset: 0x20
	// Line 2160, Address: 0x23fe24, Func Offset: 0x34
	// Line 2161, Address: 0x23fe54, Func Offset: 0x64
	// Line 2162, Address: 0x23fe60, Func Offset: 0x70
	// Line 2164, Address: 0x23fe9c, Func Offset: 0xac
	// Line 2165, Address: 0x23fec0, Func Offset: 0xd0
	// Line 2167, Address: 0x23fec8, Func Offset: 0xd8
	// Line 2168, Address: 0x23fee4, Func Offset: 0xf4
	// Line 2169, Address: 0x23fee8, Func Offset: 0xf8
	// Line 2170, Address: 0x23ff00, Func Offset: 0x110
	// Func End, Address: 0x23ff10, Func Offset: 0x120
}

// 
// Start address: 0x23ff10
void mcJobDeleteData()
{
	// Line 2175, Address: 0x23ff10, Func Offset: 0
	// Line 2176, Address: 0x23ff18, Func Offset: 0x8
	// Line 2178, Address: 0x23ff60, Func Offset: 0x50
	// Line 2180, Address: 0x23ffb8, Func Offset: 0xa8
	// Line 2181, Address: 0x23ffcc, Func Offset: 0xbc
	// Line 2183, Address: 0x23ffd4, Func Offset: 0xc4
	// Line 2184, Address: 0x23fff4, Func Offset: 0xe4
	// Line 2185, Address: 0x23fffc, Func Offset: 0xec
	// Line 2187, Address: 0x240004, Func Offset: 0xf4
	// Line 2188, Address: 0x24003c, Func Offset: 0x12c
	// Line 2189, Address: 0x24007c, Func Offset: 0x16c
	// Line 2190, Address: 0x240090, Func Offset: 0x180
	// Line 2192, Address: 0x240098, Func Offset: 0x188
	// Line 2193, Address: 0x2400ac, Func Offset: 0x19c
	// Line 2194, Address: 0x2400b4, Func Offset: 0x1a4
	// Line 2196, Address: 0x2400bc, Func Offset: 0x1ac
	// Line 2197, Address: 0x2400cc, Func Offset: 0x1bc
	// Line 2199, Address: 0x2400d4, Func Offset: 0x1c4
	// Line 2200, Address: 0x2400e8, Func Offset: 0x1d8
	// Line 2201, Address: 0x2400f0, Func Offset: 0x1e0
	// Line 2203, Address: 0x2400f8, Func Offset: 0x1e8
	// Line 2204, Address: 0x240108, Func Offset: 0x1f8
	// Line 2206, Address: 0x240110, Func Offset: 0x200
	// Line 2207, Address: 0x24012c, Func Offset: 0x21c
	// Line 2209, Address: 0x240134, Func Offset: 0x224
	// Line 2210, Address: 0x240148, Func Offset: 0x238
	// Line 2211, Address: 0x240150, Func Offset: 0x240
	// Line 2213, Address: 0x24015c, Func Offset: 0x24c
	// Line 2215, Address: 0x2401b8, Func Offset: 0x2a8
	// Line 2216, Address: 0x2401c8, Func Offset: 0x2b8
	// Line 2218, Address: 0x2401d0, Func Offset: 0x2c0
	// Line 2219, Address: 0x2401e4, Func Offset: 0x2d4
	// Line 2220, Address: 0x2401ec, Func Offset: 0x2dc
	// Line 2222, Address: 0x2401f4, Func Offset: 0x2e4
	// Line 2223, Address: 0x240200, Func Offset: 0x2f0
	// Line 2225, Address: 0x240208, Func Offset: 0x2f8
	// Line 2226, Address: 0x24021c, Func Offset: 0x30c
	// Line 2227, Address: 0x240230, Func Offset: 0x320
	// Line 2228, Address: 0x240238, Func Offset: 0x328
	// Line 2230, Address: 0x24024c, Func Offset: 0x33c
	// Line 2231, Address: 0x240258, Func Offset: 0x348
	// Line 2232, Address: 0x24026c, Func Offset: 0x35c
	// Line 2235, Address: 0x240274, Func Offset: 0x364
	// Func End, Address: 0x240284, Func Offset: 0x374
}

// 
// Start address: 0x240290
void mcJobDeleteDir()
{
	// Line 2240, Address: 0x240290, Func Offset: 0
	// Line 2241, Address: 0x240298, Func Offset: 0x8
	// Line 2243, Address: 0x2402d0, Func Offset: 0x40
	// Line 2244, Address: 0x2402d8, Func Offset: 0x48
	// Line 2245, Address: 0x2402ec, Func Offset: 0x5c
	// Line 2246, Address: 0x240308, Func Offset: 0x78
	// Line 2247, Address: 0x24031c, Func Offset: 0x8c
	// Line 2249, Address: 0x24033c, Func Offset: 0xac
	// Line 2250, Address: 0x240350, Func Offset: 0xc0
	// Line 2252, Address: 0x240358, Func Offset: 0xc8
	// Line 2253, Address: 0x240364, Func Offset: 0xd4
	// Line 2254, Address: 0x240370, Func Offset: 0xe0
	// Line 2255, Address: 0x240374, Func Offset: 0xe4
	// Line 2257, Address: 0x24037c, Func Offset: 0xec
	// Line 2258, Address: 0x240384, Func Offset: 0xf4
	// Line 2260, Address: 0x24038c, Func Offset: 0xfc
	// Line 2261, Address: 0x240390, Func Offset: 0x100
	// Line 2263, Address: 0x2403a4, Func Offset: 0x114
	// Line 2264, Address: 0x2403ac, Func Offset: 0x11c
	// Line 2265, Address: 0x2403d0, Func Offset: 0x140
	// Line 2266, Address: 0x2403e4, Func Offset: 0x154
	// Line 2268, Address: 0x2403ec, Func Offset: 0x15c
	// Line 2269, Address: 0x240418, Func Offset: 0x188
	// Line 2270, Address: 0x240434, Func Offset: 0x1a4
	// Line 2271, Address: 0x240458, Func Offset: 0x1c8
	// Line 2272, Address: 0x24046c, Func Offset: 0x1dc
	// Line 2273, Address: 0x240480, Func Offset: 0x1f0
	// Line 2275, Address: 0x240488, Func Offset: 0x1f8
	// Line 2276, Address: 0x2404a0, Func Offset: 0x210
	// Line 2277, Address: 0x2404a8, Func Offset: 0x218
	// Line 2279, Address: 0x2404b0, Func Offset: 0x220
	// Line 2280, Address: 0x2404d4, Func Offset: 0x244
	// Line 2281, Address: 0x2404e4, Func Offset: 0x254
	// Line 2284, Address: 0x2404ec, Func Offset: 0x25c
	// Line 2285, Address: 0x2404fc, Func Offset: 0x26c
	// Line 2286, Address: 0x240508, Func Offset: 0x278
	// Line 2287, Address: 0x240524, Func Offset: 0x294
	// Line 2288, Address: 0x240538, Func Offset: 0x2a8
	// Line 2289, Address: 0x240548, Func Offset: 0x2b8
	// Line 2291, Address: 0x240550, Func Offset: 0x2c0
	// Line 2292, Address: 0x240568, Func Offset: 0x2d8
	// Line 2293, Address: 0x240570, Func Offset: 0x2e0
	// Line 2295, Address: 0x240578, Func Offset: 0x2e8
	// Line 2296, Address: 0x24058c, Func Offset: 0x2fc
	// Line 2297, Address: 0x240598, Func Offset: 0x308
	// Line 2298, Address: 0x2405ac, Func Offset: 0x31c
	// Line 2301, Address: 0x2405b4, Func Offset: 0x324
	// Func End, Address: 0x2405c4, Func Offset: 0x334
}

// 
// Start address: 0x2405d0
void mcJobSaveSystemData()
{
	// Line 2319, Address: 0x2405d0, Func Offset: 0
	// Line 2320, Address: 0x2405d8, Func Offset: 0x8
	// Line 2322, Address: 0x240614, Func Offset: 0x44
	// Line 2323, Address: 0x240638, Func Offset: 0x68
	// Line 2324, Address: 0x24064c, Func Offset: 0x7c
	// Line 2325, Address: 0x240654, Func Offset: 0x84
	// Line 2327, Address: 0x24065c, Func Offset: 0x8c
	// Line 2328, Address: 0x24066c, Func Offset: 0x9c
	// Line 2329, Address: 0x24067c, Func Offset: 0xac
	// Line 2330, Address: 0x240690, Func Offset: 0xc0
	// Line 2332, Address: 0x240698, Func Offset: 0xc8
	// Line 2333, Address: 0x2406ac, Func Offset: 0xdc
	// Line 2334, Address: 0x2406c0, Func Offset: 0xf0
	// Line 2335, Address: 0x2406c8, Func Offset: 0xf8
	// Line 2337, Address: 0x2406d0, Func Offset: 0x100
	// Line 2338, Address: 0x2406e0, Func Offset: 0x110
	// Line 2340, Address: 0x2406e8, Func Offset: 0x118
	// Line 2341, Address: 0x2406fc, Func Offset: 0x12c
	// Line 2342, Address: 0x240704, Func Offset: 0x134
	// Line 2344, Address: 0x24070c, Func Offset: 0x13c
	// Line 2345, Address: 0x24071c, Func Offset: 0x14c
	// Line 2347, Address: 0x240724, Func Offset: 0x154
	// Line 2348, Address: 0x240740, Func Offset: 0x170
	// Line 2349, Address: 0x24074c, Func Offset: 0x17c
	// Line 2350, Address: 0x240760, Func Offset: 0x190
	// Line 2351, Address: 0x240768, Func Offset: 0x198
	// Line 2353, Address: 0x240770, Func Offset: 0x1a0
	// Line 2354, Address: 0x240784, Func Offset: 0x1b4
	// Line 2356, Address: 0x24078c, Func Offset: 0x1bc
	// Line 2357, Address: 0x2407a0, Func Offset: 0x1d0
	// Line 2358, Address: 0x2407a8, Func Offset: 0x1d8
	// Line 2360, Address: 0x2407b0, Func Offset: 0x1e0
	// Line 2361, Address: 0x2407c0, Func Offset: 0x1f0
	// Line 2362, Address: 0x2407d0, Func Offset: 0x200
	// Line 2364, Address: 0x2407d8, Func Offset: 0x208
	// Line 2365, Address: 0x2407ec, Func Offset: 0x21c
	// Line 2366, Address: 0x2407f4, Func Offset: 0x224
	// Line 2368, Address: 0x2407fc, Func Offset: 0x22c
	// Line 2369, Address: 0x240808, Func Offset: 0x238
	// Line 2371, Address: 0x240810, Func Offset: 0x240
	// Line 2372, Address: 0x240824, Func Offset: 0x254
	// Line 2373, Address: 0x240838, Func Offset: 0x268
	// Line 2374, Address: 0x240840, Func Offset: 0x270
	// Line 2375, Address: 0x240854, Func Offset: 0x284
	// Line 2376, Address: 0x24085c, Func Offset: 0x28c
	// Line 2377, Address: 0x240868, Func Offset: 0x298
	// Line 2378, Address: 0x24087c, Func Offset: 0x2ac
	// Line 2380, Address: 0x240884, Func Offset: 0x2b4
	// Line 2381, Address: 0x240890, Func Offset: 0x2c0
	// Line 2383, Address: 0x24089c, Func Offset: 0x2cc
	// Line 2386, Address: 0x2408a4, Func Offset: 0x2d4
	// Func End, Address: 0x2408b4, Func Offset: 0x2e4
}

// 
// Start address: 0x2408c0
void mcJobSaveExtraData()
{
	char* str2;
	char* str1;
	_anon0* dt;
	char port;
	// Line 2419, Address: 0x2408c0, Func Offset: 0
	// Line 2420, Address: 0x2408cc, Func Offset: 0xc
	// Line 2421, Address: 0x2408d8, Func Offset: 0x18
	// Line 2423, Address: 0x24090c, Func Offset: 0x4c
	// Line 2424, Address: 0x24092c, Func Offset: 0x6c
	// Line 2426, Address: 0x240934, Func Offset: 0x74
	// Line 2427, Address: 0x240948, Func Offset: 0x88
	// Line 2428, Address: 0x240950, Func Offset: 0x90
	// Line 2430, Address: 0x240958, Func Offset: 0x98
	// Line 2431, Address: 0x240964, Func Offset: 0xa4
	// Line 2432, Address: 0x240988, Func Offset: 0xc8
	// Line 2433, Address: 0x2409ac, Func Offset: 0xec
	// Line 2435, Address: 0x2409b4, Func Offset: 0xf4
	// Line 2438, Address: 0x2409c8, Func Offset: 0x108
	// Line 2439, Address: 0x2409d8, Func Offset: 0x118
	// Line 2440, Address: 0x2409f0, Func Offset: 0x130
	// Line 2441, Address: 0x2409f8, Func Offset: 0x138
	// Line 2443, Address: 0x240a00, Func Offset: 0x140
	// Line 2444, Address: 0x240a10, Func Offset: 0x150
	// Line 2445, Address: 0x240a28, Func Offset: 0x168
	// Line 2446, Address: 0x240a30, Func Offset: 0x170
	// Line 2448, Address: 0x240a38, Func Offset: 0x178
	// Line 2449, Address: 0x240a44, Func Offset: 0x184
	// Line 2450, Address: 0x240a4c, Func Offset: 0x18c
	// Line 2451, Address: 0x240a70, Func Offset: 0x1b0
	// Line 2452, Address: 0x240a7c, Func Offset: 0x1bc
	// Line 2453, Address: 0x240aa0, Func Offset: 0x1e0
	// Line 2454, Address: 0x240ab4, Func Offset: 0x1f4
	// Line 2455, Address: 0x240abc, Func Offset: 0x1fc
	// Line 2456, Address: 0x240ac4, Func Offset: 0x204
	// Line 2458, Address: 0x240acc, Func Offset: 0x20c
	// Line 2459, Address: 0x240adc, Func Offset: 0x21c
	// Line 2460, Address: 0x240ae4, Func Offset: 0x224
	// Line 2461, Address: 0x240af0, Func Offset: 0x230
	// Line 2462, Address: 0x240af8, Func Offset: 0x238
	// Line 2464, Address: 0x240b00, Func Offset: 0x240
	// Line 2468, Address: 0x240b64, Func Offset: 0x2a4
	// Line 2469, Address: 0x240b6c, Func Offset: 0x2ac
	// Line 2471, Address: 0x240b74, Func Offset: 0x2b4
	// Line 2472, Address: 0x240b80, Func Offset: 0x2c0
	// Line 2473, Address: 0x240b9c, Func Offset: 0x2dc
	// Line 2475, Address: 0x240ba4, Func Offset: 0x2e4
	// Line 2476, Address: 0x240bc4, Func Offset: 0x304
	// Line 2477, Address: 0x240bcc, Func Offset: 0x30c
	// Line 2479, Address: 0x240bd4, Func Offset: 0x314
	// Line 2480, Address: 0x240be0, Func Offset: 0x320
	// Line 2481, Address: 0x240bfc, Func Offset: 0x33c
	// Line 2482, Address: 0x240c10, Func Offset: 0x350
	// Line 2484, Address: 0x240c18, Func Offset: 0x358
	// Line 2485, Address: 0x240c2c, Func Offset: 0x36c
	// Line 2486, Address: 0x240c34, Func Offset: 0x374
	// Line 2488, Address: 0x240c3c, Func Offset: 0x37c
	// Line 2489, Address: 0x240c40, Func Offset: 0x380
	// Line 2490, Address: 0x240c4c, Func Offset: 0x38c
	// Line 2491, Address: 0x240c58, Func Offset: 0x398
	// Line 2492, Address: 0x240c78, Func Offset: 0x3b8
	// Line 2494, Address: 0x240c80, Func Offset: 0x3c0
	// Line 2495, Address: 0x240c94, Func Offset: 0x3d4
	// Line 2496, Address: 0x240c9c, Func Offset: 0x3dc
	// Line 2498, Address: 0x240ca4, Func Offset: 0x3e4
	// Line 2499, Address: 0x240cb0, Func Offset: 0x3f0
	// Line 2501, Address: 0x240cb8, Func Offset: 0x3f8
	// Line 2502, Address: 0x240ccc, Func Offset: 0x40c
	// Line 2503, Address: 0x240cd4, Func Offset: 0x414
	// Line 2505, Address: 0x240cdc, Func Offset: 0x41c
	// Line 2506, Address: 0x240ce8, Func Offset: 0x428
	// Line 2507, Address: 0x240d04, Func Offset: 0x444
	// Line 2508, Address: 0x240d18, Func Offset: 0x458
	// Line 2510, Address: 0x240d20, Func Offset: 0x460
	// Line 2511, Address: 0x240d34, Func Offset: 0x474
	// Line 2512, Address: 0x240d3c, Func Offset: 0x47c
	// Line 2514, Address: 0x240d44, Func Offset: 0x484
	// Line 2515, Address: 0x240d48, Func Offset: 0x488
	// Line 2516, Address: 0x240d6c, Func Offset: 0x4ac
	// Line 2518, Address: 0x240d74, Func Offset: 0x4b4
	// Line 2519, Address: 0x240d88, Func Offset: 0x4c8
	// Line 2520, Address: 0x240d90, Func Offset: 0x4d0
	// Line 2522, Address: 0x240d98, Func Offset: 0x4d8
	// Line 2523, Address: 0x240da4, Func Offset: 0x4e4
	// Line 2525, Address: 0x240dac, Func Offset: 0x4ec
	// Line 2526, Address: 0x240dc0, Func Offset: 0x500
	// Line 2527, Address: 0x240dc8, Func Offset: 0x508
	// Line 2529, Address: 0x240dd0, Func Offset: 0x510
	// Line 2531, Address: 0x240ddc, Func Offset: 0x51c
	// Line 2532, Address: 0x240df0, Func Offset: 0x530
	// Line 2533, Address: 0x240e04, Func Offset: 0x544
	// Line 2535, Address: 0x240e0c, Func Offset: 0x54c
	// Line 2536, Address: 0x240e20, Func Offset: 0x560
	// Line 2537, Address: 0x240e28, Func Offset: 0x568
	// Line 2539, Address: 0x240e30, Func Offset: 0x570
	// Line 2540, Address: 0x240e3c, Func Offset: 0x57c
	// Line 2541, Address: 0x240e50, Func Offset: 0x590
	// Line 2543, Address: 0x240e58, Func Offset: 0x598
	// Line 2544, Address: 0x240e6c, Func Offset: 0x5ac
	// Line 2545, Address: 0x240e74, Func Offset: 0x5b4
	// Line 2547, Address: 0x240e7c, Func Offset: 0x5bc
	// Line 2548, Address: 0x240e88, Func Offset: 0x5c8
	// Line 2550, Address: 0x240e90, Func Offset: 0x5d0
	// Line 2551, Address: 0x240ea4, Func Offset: 0x5e4
	// Line 2552, Address: 0x240eac, Func Offset: 0x5ec
	// Line 2554, Address: 0x240eb4, Func Offset: 0x5f4
	// Line 2555, Address: 0x240ec8, Func Offset: 0x608
	// Line 2558, Address: 0x240ed0, Func Offset: 0x610
	// Func End, Address: 0x240ee4, Func Offset: 0x624
}

// 
// Start address: 0x240ef0
void mcJobLoadExtraData()
{
	// Line 2580, Address: 0x240ef0, Func Offset: 0
	// Line 2581, Address: 0x240ef8, Func Offset: 0x8
	// Line 2583, Address: 0x240f4c, Func Offset: 0x5c
	// Line 2584, Address: 0x240f68, Func Offset: 0x78
	// Line 2586, Address: 0x240f88, Func Offset: 0x98
	// Line 2588, Address: 0x240f90, Func Offset: 0xa0
	// Line 2589, Address: 0x240fa4, Func Offset: 0xb4
	// Line 2590, Address: 0x240fac, Func Offset: 0xbc
	// Line 2592, Address: 0x240fb4, Func Offset: 0xc4
	// Line 2593, Address: 0x240fbc, Func Offset: 0xcc
	// Line 2594, Address: 0x240fd0, Func Offset: 0xe0
	// Line 2596, Address: 0x240fd8, Func Offset: 0xe8
	// Line 2597, Address: 0x240fec, Func Offset: 0xfc
	// Line 2598, Address: 0x240ff4, Func Offset: 0x104
	// Line 2600, Address: 0x240ffc, Func Offset: 0x10c
	// Line 2601, Address: 0x241008, Func Offset: 0x118
	// Line 2602, Address: 0x24101c, Func Offset: 0x12c
	// Line 2604, Address: 0x241024, Func Offset: 0x134
	// Line 2605, Address: 0x241038, Func Offset: 0x148
	// Line 2606, Address: 0x241040, Func Offset: 0x150
	// Line 2608, Address: 0x241048, Func Offset: 0x158
	// Line 2609, Address: 0x241054, Func Offset: 0x164
	// Line 2611, Address: 0x24105c, Func Offset: 0x16c
	// Line 2612, Address: 0x241070, Func Offset: 0x180
	// Line 2613, Address: 0x241078, Func Offset: 0x188
	// Line 2615, Address: 0x241080, Func Offset: 0x190
	// Line 2616, Address: 0x241094, Func Offset: 0x1a4
	// Line 2619, Address: 0x24109c, Func Offset: 0x1ac
	// Func End, Address: 0x2410ac, Func Offset: 0x1bc
}

// 
// Start address: 0x2410b0
void mcSetDirName(char dn)
{
	char* str2;
	char* str1;
	// Line 2700, Address: 0x2410b0, Func Offset: 0
	// Line 2701, Address: 0x2410bc, Func Offset: 0xc
	// Line 2702, Address: 0x2410c4, Func Offset: 0x14
	// Line 2703, Address: 0x2410d0, Func Offset: 0x20
	// Line 2704, Address: 0x2410f8, Func Offset: 0x48
	// Line 2705, Address: 0x241100, Func Offset: 0x50
	// Line 2706, Address: 0x241108, Func Offset: 0x58
	// Line 2707, Address: 0x24110c, Func Offset: 0x5c
	// Func End, Address: 0x241114, Func Offset: 0x64
}

// 
// Start address: 0x241120
void mcJoinDirName(char dn)
{
	char* str2;
	char* str1;
	// Line 2714, Address: 0x241120, Func Offset: 0
	// Line 2715, Address: 0x24112c, Func Offset: 0xc
	// Line 2716, Address: 0x241134, Func Offset: 0x14
	// Line 2717, Address: 0x241158, Func Offset: 0x38
	// Line 2718, Address: 0x241180, Func Offset: 0x60
	// Line 2719, Address: 0x241188, Func Offset: 0x68
	// Line 2720, Address: 0x24118c, Func Offset: 0x6c
	// Func End, Address: 0x241194, Func Offset: 0x74
}

// 
// Start address: 0x2411a0
void mcSetFileName(char dn, char fn)
{
	char* str2;
	char* str1;
	// Line 2727, Address: 0x2411a0, Func Offset: 0
	// Line 2728, Address: 0x2411ac, Func Offset: 0xc
	// Line 2729, Address: 0x2411b8, Func Offset: 0x18
	// Line 2730, Address: 0x2411c0, Func Offset: 0x20
	// Line 2731, Address: 0x2411c8, Func Offset: 0x28
	// Line 2732, Address: 0x2411f0, Func Offset: 0x50
	// Line 2733, Address: 0x241218, Func Offset: 0x78
	// Line 2734, Address: 0x241228, Func Offset: 0x88
	// Line 2735, Address: 0x241234, Func Offset: 0x94
	// Line 2736, Address: 0x24123c, Func Offset: 0x9c
	// Line 2737, Address: 0x241268, Func Offset: 0xc8
	// Line 2739, Address: 0x241288, Func Offset: 0xe8
	// Line 2740, Address: 0x24128c, Func Offset: 0xec
	// Func End, Address: 0x24129c, Func Offset: 0xfc
}

// 
// Start address: 0x2412a0
void mcSetExtraDirName(char* name)
{
	char* str2;
	char* str1;
	// Line 2746, Address: 0x2412a0, Func Offset: 0
	// Line 2747, Address: 0x2412b8, Func Offset: 0x18
	// Line 2748, Address: 0x2412c4, Func Offset: 0x24
	// Line 2749, Address: 0x2412cc, Func Offset: 0x2c
	// Line 2750, Address: 0x241304, Func Offset: 0x64
	// Line 2751, Address: 0x241310, Func Offset: 0x70
	// Line 2752, Address: 0x241338, Func Offset: 0x98
	// Line 2753, Address: 0x24133c, Func Offset: 0x9c
	// Line 2754, Address: 0x241360, Func Offset: 0xc0
	// Line 2755, Address: 0x241364, Func Offset: 0xc4
	// Func End, Address: 0x241380, Func Offset: 0xe0
}

// 
// Start address: 0x241380
void mcSetExtraFileName(char* name)
{
	char* str2;
	char* str1;
	// Line 2761, Address: 0x241380, Func Offset: 0
	// Line 2762, Address: 0x241398, Func Offset: 0x18
	// Line 2763, Address: 0x2413a4, Func Offset: 0x24
	// Line 2764, Address: 0x2413ac, Func Offset: 0x2c
	// Line 2765, Address: 0x2413e4, Func Offset: 0x64
	// Line 2766, Address: 0x2413f0, Func Offset: 0x70
	// Line 2767, Address: 0x241418, Func Offset: 0x98
	// Line 2768, Address: 0x24141c, Func Offset: 0x9c
	// Line 2769, Address: 0x241440, Func Offset: 0xc0
	// Line 2770, Address: 0x24144c, Func Offset: 0xcc
	// Line 2771, Address: 0x241454, Func Offset: 0xd4
	// Line 2772, Address: 0x241478, Func Offset: 0xf8
	// Line 2773, Address: 0x24147c, Func Offset: 0xfc
	// Line 2774, Address: 0x2414a0, Func Offset: 0x120
	// Line 2775, Address: 0x2414a4, Func Offset: 0x124
	// Func End, Address: 0x2414c0, Func Offset: 0x140
}

// 
// Start address: 0x2414c0
void mcMakeSaveData()
{
	// Line 2980, Address: 0x2414c0, Func Offset: 0
	// Line 2982, Address: 0x2414c8, Func Offset: 0x8
	// Line 2983, Address: 0x2414dc, Func Offset: 0x1c
	// Line 2985, Address: 0x2414fc, Func Offset: 0x3c
	// Line 2986, Address: 0x241504, Func Offset: 0x44
	// Func End, Address: 0x241514, Func Offset: 0x54
}

// 
// Start address: 0x241520
int mcExtSaveData()
{
	Playing_Info* pi;
	MC_FILEINFO* fi;
	SAVE_DATA* sd;
	// Line 2991, Address: 0x241520, Func Offset: 0
	// Line 2992, Address: 0x241528, Func Offset: 0x8
	// Line 2993, Address: 0x241534, Func Offset: 0x14
	// Line 2994, Address: 0x241538, Func Offset: 0x18
	// Line 2996, Address: 0x24153c, Func Offset: 0x1c
	// Line 3000, Address: 0x2415e8, Func Offset: 0xc8
	// Line 3001, Address: 0x2415f8, Func Offset: 0xd8
	// Line 3002, Address: 0x241608, Func Offset: 0xe8
	// Line 3003, Address: 0x24161c, Func Offset: 0xfc
	// Line 3006, Address: 0x241628, Func Offset: 0x108
	// Line 3007, Address: 0x241648, Func Offset: 0x128
	// Line 3008, Address: 0x24164c, Func Offset: 0x12c
	// Func End, Address: 0x24165c, Func Offset: 0x13c
}

// 
// Start address: 0x241660
void mcEncodeStart()
{
	unsigned char c;
	unsigned int csum;
	int zc;
	int i;
	// Line 3013, Address: 0x241660, Func Offset: 0
	// Line 3017, Address: 0x241674, Func Offset: 0x14
	// Line 3018, Address: 0x241684, Func Offset: 0x24
	// Line 3019, Address: 0x241698, Func Offset: 0x38
	// Line 3020, Address: 0x2416a0, Func Offset: 0x40
	// Line 3021, Address: 0x2416b0, Func Offset: 0x50
	// Line 3023, Address: 0x2416b8, Func Offset: 0x58
	// Line 3025, Address: 0x2416c4, Func Offset: 0x64
	// Line 3029, Address: 0x2416e4, Func Offset: 0x84
	// Line 3030, Address: 0x2416f8, Func Offset: 0x98
	// Line 3031, Address: 0x241700, Func Offset: 0xa0
	// Line 3032, Address: 0x241714, Func Offset: 0xb4
	// Line 3034, Address: 0x241720, Func Offset: 0xc0
	// Line 3038, Address: 0x241740, Func Offset: 0xe0
	// Line 3039, Address: 0x241750, Func Offset: 0xf0
	// Line 3040, Address: 0x241758, Func Offset: 0xf8
	// Line 3041, Address: 0x24176c, Func Offset: 0x10c
	// Line 3042, Address: 0x241788, Func Offset: 0x128
	// Line 3043, Address: 0x241798, Func Offset: 0x138
	// Line 3044, Address: 0x2417a0, Func Offset: 0x140
	// Line 3045, Address: 0x2417ac, Func Offset: 0x14c
	// Line 3046, Address: 0x2417c4, Func Offset: 0x164
	// Line 3047, Address: 0x2417f8, Func Offset: 0x198
	// Func End, Address: 0x241814, Func Offset: 0x1b4
}

// 
// Start address: 0x241820
void mcDecodeStart()
{
	// Line 3052, Address: 0x241820, Func Offset: 0
	// Line 3053, Address: 0x241828, Func Offset: 0x8
	// Line 3054, Address: 0x241838, Func Offset: 0x18
	// Line 3055, Address: 0x24184c, Func Offset: 0x2c
	// Line 3056, Address: 0x241854, Func Offset: 0x34
	// Line 3057, Address: 0x241864, Func Offset: 0x44
	// Line 3058, Address: 0x241870, Func Offset: 0x50
	// Line 3059, Address: 0x24187c, Func Offset: 0x5c
	// Line 3060, Address: 0x241888, Func Offset: 0x68
	// Line 3061, Address: 0x2418a4, Func Offset: 0x84
	// Func End, Address: 0x2418b4, Func Offset: 0x94
}

// 
// Start address: 0x2418c0
unsigned int mcRot(unsigned int n, int s)
{
	// Line 3071, Address: 0x2418c0, Func Offset: 0
	// Line 3072, Address: 0x2418d8, Func Offset: 0x18
	// Func End, Address: 0x2418e0, Func Offset: 0x20
}

// 
// Start address: 0x2418e0
void mcCodecAll()
{
	// Line 3084, Address: 0x2418e0, Func Offset: 0
	// Line 3085, Address: 0x2418e8, Func Offset: 0x8
	// Line 3087, Address: 0x2418fc, Func Offset: 0x1c
	// Line 3088, Address: 0x241904, Func Offset: 0x24
	// Line 3089, Address: 0x24191c, Func Offset: 0x3c
	// Line 3090, Address: 0x24192c, Func Offset: 0x4c
	// Line 3091, Address: 0x241940, Func Offset: 0x60
	// Line 3093, Address: 0x241948, Func Offset: 0x68
	// Line 3094, Address: 0x241958, Func Offset: 0x78
	// Func End, Address: 0x241968, Func Offset: 0x88
}

// 
// Start address: 0x241970
void mcCodec()
{
	unsigned char c;
	unsigned char* p;
	int csum2;
	int csum;
	int zcount;
	int ck2;
	int ck1;
	int count;
	int j;
	int i;
	unsigned long csum4;
	unsigned long key2[16];
	unsigned long* key1;
	unsigned long* pos;
	unsigned long n;
	MC_CODEC_DATA* cd;
	// Line 3099, Address: 0x241970, Func Offset: 0
	// Line 3100, Address: 0x24197c, Func Offset: 0xc
	// Line 3105, Address: 0x241988, Func Offset: 0x18
	// Line 3107, Address: 0x24198c, Func Offset: 0x1c
	// Line 3108, Address: 0x241998, Func Offset: 0x28
	// Line 3109, Address: 0x2419a8, Func Offset: 0x38
	// Line 3110, Address: 0x2419b4, Func Offset: 0x44
	// Line 3111, Address: 0x2419bc, Func Offset: 0x4c
	// Line 3112, Address: 0x2419d0, Func Offset: 0x60
	// Line 3114, Address: 0x2419e4, Func Offset: 0x74
	// Line 3116, Address: 0x241a54, Func Offset: 0xe4
	// Line 3117, Address: 0x241a58, Func Offset: 0xe8
	// Line 3118, Address: 0x241a5c, Func Offset: 0xec
	// Line 3119, Address: 0x241a60, Func Offset: 0xf0
	// Line 3120, Address: 0x241a64, Func Offset: 0xf4
	// Line 3121, Address: 0x241a68, Func Offset: 0xf8
	// Line 3123, Address: 0x241a70, Func Offset: 0x100
	// Line 3124, Address: 0x241a74, Func Offset: 0x104
	// Line 3125, Address: 0x241a94, Func Offset: 0x124
	// Line 3126, Address: 0x241a9c, Func Offset: 0x12c
	// Line 3127, Address: 0x241aac, Func Offset: 0x13c
	// Line 3128, Address: 0x241ab0, Func Offset: 0x140
	// Line 3129, Address: 0x241ac0, Func Offset: 0x150
	// Line 3131, Address: 0x241ac4, Func Offset: 0x154
	// Line 3132, Address: 0x241ac8, Func Offset: 0x158
	// Line 3133, Address: 0x241ad4, Func Offset: 0x164
	// Line 3134, Address: 0x241ae8, Func Offset: 0x178
	// Line 3135, Address: 0x241af0, Func Offset: 0x180
	// Line 3136, Address: 0x241af4, Func Offset: 0x184
	// Line 3137, Address: 0x241b04, Func Offset: 0x194
	// Line 3138, Address: 0x241b10, Func Offset: 0x1a0
	// Line 3139, Address: 0x241b1c, Func Offset: 0x1ac
	// Line 3140, Address: 0x241b38, Func Offset: 0x1c8
	// Line 3141, Address: 0x241b5c, Func Offset: 0x1ec
	// Line 3142, Address: 0x241b78, Func Offset: 0x208
	// Line 3143, Address: 0x241b88, Func Offset: 0x218
	// Line 3144, Address: 0x241b9c, Func Offset: 0x22c
	// Line 3145, Address: 0x241ba4, Func Offset: 0x234
	// Line 3147, Address: 0x241bac, Func Offset: 0x23c
	// Line 3148, Address: 0x241bbc, Func Offset: 0x24c
	// Line 3149, Address: 0x241bc0, Func Offset: 0x250
	// Line 3150, Address: 0x241bc4, Func Offset: 0x254
	// Line 3151, Address: 0x241bc8, Func Offset: 0x258
	// Line 3152, Address: 0x241bcc, Func Offset: 0x25c
	// Line 3154, Address: 0x241bd4, Func Offset: 0x264
	// Line 3155, Address: 0x241bd8, Func Offset: 0x268
	// Line 3156, Address: 0x241bdc, Func Offset: 0x26c
	// Line 3157, Address: 0x241be4, Func Offset: 0x274
	// Line 3158, Address: 0x241be8, Func Offset: 0x278
	// Line 3159, Address: 0x241bf0, Func Offset: 0x280
	// Line 3160, Address: 0x241c00, Func Offset: 0x290
	// Line 3161, Address: 0x241c0c, Func Offset: 0x29c
	// Line 3162, Address: 0x241c20, Func Offset: 0x2b0
	// Line 3163, Address: 0x241c34, Func Offset: 0x2c4
	// Line 3164, Address: 0x241c40, Func Offset: 0x2d0
	// Line 3166, Address: 0x241c48, Func Offset: 0x2d8
	// Line 3167, Address: 0x241c4c, Func Offset: 0x2dc
	// Line 3168, Address: 0x241c58, Func Offset: 0x2e8
	// Line 3169, Address: 0x241c64, Func Offset: 0x2f4
	// Line 3170, Address: 0x241c70, Func Offset: 0x300
	// Line 3171, Address: 0x241c84, Func Offset: 0x314
	// Line 3172, Address: 0x241c88, Func Offset: 0x318
	// Line 3173, Address: 0x241c90, Func Offset: 0x320
	// Line 3175, Address: 0x241c98, Func Offset: 0x328
	// Line 3176, Address: 0x241c9c, Func Offset: 0x32c
	// Line 3177, Address: 0x241ca0, Func Offset: 0x330
	// Line 3178, Address: 0x241ca4, Func Offset: 0x334
	// Line 3179, Address: 0x241ca8, Func Offset: 0x338
	// Line 3180, Address: 0x241cac, Func Offset: 0x33c
	// Line 3182, Address: 0x241cb0, Func Offset: 0x340
	// Line 3183, Address: 0x241cb8, Func Offset: 0x348
	// Line 3184, Address: 0x241cbc, Func Offset: 0x34c
	// Line 3185, Address: 0x241cc8, Func Offset: 0x358
	// Line 3186, Address: 0x241cd8, Func Offset: 0x368
	// Line 3187, Address: 0x241ce0, Func Offset: 0x370
	// Line 3188, Address: 0x241ce4, Func Offset: 0x374
	// Line 3189, Address: 0x241cf4, Func Offset: 0x384
	// Line 3190, Address: 0x241d00, Func Offset: 0x390
	// Line 3191, Address: 0x241d08, Func Offset: 0x398
	// Line 3192, Address: 0x241d18, Func Offset: 0x3a8
	// Line 3194, Address: 0x241d34, Func Offset: 0x3c4
	// Line 3195, Address: 0x241d44, Func Offset: 0x3d4
	// Line 3196, Address: 0x241d4c, Func Offset: 0x3dc
	// Line 3198, Address: 0x241d54, Func Offset: 0x3e4
	// Line 3200, Address: 0x241d60, Func Offset: 0x3f0
	// Line 3201, Address: 0x241d70, Func Offset: 0x400
	// Line 3202, Address: 0x241d78, Func Offset: 0x408
	// Line 3204, Address: 0x241d80, Func Offset: 0x410
	// Line 3206, Address: 0x241da4, Func Offset: 0x434
	// Line 3207, Address: 0x241da8, Func Offset: 0x438
	// Line 3208, Address: 0x241db4, Func Offset: 0x444
	// Line 3209, Address: 0x241dc8, Func Offset: 0x458
	// Line 3210, Address: 0x241dd4, Func Offset: 0x464
	// Line 3211, Address: 0x241ddc, Func Offset: 0x46c
	// Line 3212, Address: 0x241de0, Func Offset: 0x470
	// Line 3213, Address: 0x241df4, Func Offset: 0x484
	// Line 3214, Address: 0x241e04, Func Offset: 0x494
	// Line 3217, Address: 0x241e2c, Func Offset: 0x4bc
	// Line 3218, Address: 0x241e3c, Func Offset: 0x4cc
	// Line 3219, Address: 0x241e44, Func Offset: 0x4d4
	// Line 3221, Address: 0x241e4c, Func Offset: 0x4dc
	// Line 3223, Address: 0x241e6c, Func Offset: 0x4fc
	// Line 3224, Address: 0x241e7c, Func Offset: 0x50c
	// Line 3225, Address: 0x241e84, Func Offset: 0x514
	// Line 3227, Address: 0x241e8c, Func Offset: 0x51c
	// Line 3229, Address: 0x241eb0, Func Offset: 0x540
	// Line 3230, Address: 0x241ec0, Func Offset: 0x550
	// Line 3231, Address: 0x241ec8, Func Offset: 0x558
	// Line 3233, Address: 0x241ed0, Func Offset: 0x560
	// Line 3234, Address: 0x241ed4, Func Offset: 0x564
	// Line 3235, Address: 0x241ee0, Func Offset: 0x570
	// Line 3237, Address: 0x241ee8, Func Offset: 0x578
	// Line 3238, Address: 0x241ef8, Func Offset: 0x588
	// Line 3239, Address: 0x241efc, Func Offset: 0x58c
	// Line 3240, Address: 0x241f00, Func Offset: 0x590
	// Line 3241, Address: 0x241f04, Func Offset: 0x594
	// Line 3242, Address: 0x241f08, Func Offset: 0x598
	// Line 3243, Address: 0x241f0c, Func Offset: 0x59c
	// Line 3245, Address: 0x241f14, Func Offset: 0x5a4
	// Line 3246, Address: 0x241f18, Func Offset: 0x5a8
	// Line 3247, Address: 0x241f1c, Func Offset: 0x5ac
	// Line 3248, Address: 0x241f24, Func Offset: 0x5b4
	// Line 3249, Address: 0x241f2c, Func Offset: 0x5bc
	// Line 3250, Address: 0x241f30, Func Offset: 0x5c0
	// Line 3251, Address: 0x241f40, Func Offset: 0x5d0
	// Line 3252, Address: 0x241f50, Func Offset: 0x5e0
	// Line 3253, Address: 0x241f58, Func Offset: 0x5e8
	// Line 3254, Address: 0x241f64, Func Offset: 0x5f4
	// Line 3256, Address: 0x241f6c, Func Offset: 0x5fc
	// Line 3257, Address: 0x241f70, Func Offset: 0x600
	// Line 3258, Address: 0x241f74, Func Offset: 0x604
	// Line 3259, Address: 0x241f78, Func Offset: 0x608
	// Line 3261, Address: 0x241f80, Func Offset: 0x610
	// Line 3262, Address: 0x241f84, Func Offset: 0x614
	// Line 3263, Address: 0x241fa4, Func Offset: 0x634
	// Line 3264, Address: 0x241fac, Func Offset: 0x63c
	// Line 3265, Address: 0x241fbc, Func Offset: 0x64c
	// Line 3266, Address: 0x241fc0, Func Offset: 0x650
	// Line 3267, Address: 0x241fd0, Func Offset: 0x660
	// Line 3269, Address: 0x241fd4, Func Offset: 0x664
	// Line 3270, Address: 0x241fd8, Func Offset: 0x668
	// Line 3271, Address: 0x241fe4, Func Offset: 0x674
	// Line 3272, Address: 0x242008, Func Offset: 0x698
	// Line 3273, Address: 0x242024, Func Offset: 0x6b4
	// Line 3274, Address: 0x24202c, Func Offset: 0x6bc
	// Line 3275, Address: 0x242034, Func Offset: 0x6c4
	// Line 3276, Address: 0x24203c, Func Offset: 0x6cc
	// Line 3277, Address: 0x242040, Func Offset: 0x6d0
	// Line 3279, Address: 0x242048, Func Offset: 0x6d8
	// Line 3280, Address: 0x242058, Func Offset: 0x6e8
	// Line 3281, Address: 0x24205c, Func Offset: 0x6ec
	// Line 3284, Address: 0x242060, Func Offset: 0x6f0
	// Func End, Address: 0x242074, Func Offset: 0x704
}

// 
// Start address: 0x242080
void mcMakeDirData(char port, char dn, char fn)
{
	Playing_Info* pi;
	MC_FILEINFO* fi;
	unsigned int* pos2;
	unsigned int* pos1;
	unsigned int csum;
	unsigned int n;
	int j;
	int i;
	// Line 3289, Address: 0x242080, Func Offset: 0
	// Line 3294, Address: 0x2420a4, Func Offset: 0x24
	// Line 3295, Address: 0x2420ac, Func Offset: 0x2c
	// Line 3296, Address: 0x2420c0, Func Offset: 0x40
	// Line 3298, Address: 0x2420dc, Func Offset: 0x5c
	// Line 3299, Address: 0x2420fc, Func Offset: 0x7c
	// Line 3300, Address: 0x242108, Func Offset: 0x88
	// Line 3301, Address: 0x242128, Func Offset: 0xa8
	// Line 3302, Address: 0x242140, Func Offset: 0xc0
	// Line 3303, Address: 0x242144, Func Offset: 0xc4
	// Line 3304, Address: 0x242150, Func Offset: 0xd0
	// Line 3305, Address: 0x242160, Func Offset: 0xe0
	// Line 3306, Address: 0x242174, Func Offset: 0xf4
	// Line 3307, Address: 0x242178, Func Offset: 0xf8
	// Line 3308, Address: 0x24219c, Func Offset: 0x11c
	// Line 3309, Address: 0x2421b8, Func Offset: 0x138
	// Line 3310, Address: 0x2421bc, Func Offset: 0x13c
	// Line 3311, Address: 0x2421c0, Func Offset: 0x140
	// Line 3312, Address: 0x2421cc, Func Offset: 0x14c
	// Line 3313, Address: 0x2421d4, Func Offset: 0x154
	// Line 3314, Address: 0x2421dc, Func Offset: 0x15c
	// Line 3315, Address: 0x2421e4, Func Offset: 0x164
	// Line 3316, Address: 0x2421ec, Func Offset: 0x16c
	// Line 3317, Address: 0x2421f4, Func Offset: 0x174
	// Line 3318, Address: 0x242204, Func Offset: 0x184
	// Line 3319, Address: 0x242208, Func Offset: 0x188
	// Line 3320, Address: 0x242210, Func Offset: 0x190
	// Line 3321, Address: 0x24221c, Func Offset: 0x19c
	// Line 3322, Address: 0x242224, Func Offset: 0x1a4
	// Line 3323, Address: 0x24223c, Func Offset: 0x1bc
	// Line 3324, Address: 0x24224c, Func Offset: 0x1cc
	// Line 3325, Address: 0x242250, Func Offset: 0x1d0
	// Line 3326, Address: 0x24226c, Func Offset: 0x1ec
	// Line 3327, Address: 0x242278, Func Offset: 0x1f8
	// Line 3328, Address: 0x24228c, Func Offset: 0x20c
	// Line 3329, Address: 0x2422ac, Func Offset: 0x22c
	// Line 3330, Address: 0x2422bc, Func Offset: 0x23c
	// Line 3331, Address: 0x2422c0, Func Offset: 0x240
	// Line 3332, Address: 0x2422d4, Func Offset: 0x254
	// Line 3333, Address: 0x2422e8, Func Offset: 0x268
	// Line 3336, Address: 0x2422f4, Func Offset: 0x274
	// Line 3337, Address: 0x2422fc, Func Offset: 0x27c
	// Func End, Address: 0x24231c, Func Offset: 0x29c
}

// 
// Start address: 0x242320
void mcMakeDirData2(char port, char dn, char fn)
{
	unsigned int* pos;
	int i;
	// Line 3342, Address: 0x242320, Func Offset: 0
	// Line 3346, Address: 0x242328, Func Offset: 0x8
	// Line 3347, Address: 0x24234c, Func Offset: 0x2c
	// Line 3348, Address: 0x242358, Func Offset: 0x38
	// Line 3349, Address: 0x242360, Func Offset: 0x40
	// Line 3350, Address: 0x242378, Func Offset: 0x58
	// Line 3351, Address: 0x242390, Func Offset: 0x70
	// Line 3353, Address: 0x242398, Func Offset: 0x78
	// Line 3355, Address: 0x24240c, Func Offset: 0xec
	// Line 3357, Address: 0x242418, Func Offset: 0xf8
	// Line 3358, Address: 0x242420, Func Offset: 0x100
	// Func End, Address: 0x242430, Func Offset: 0x110
}

// 
// Start address: 0x242430
void mcMakeDirData3()
{
	Playing_Info* pi;
	// Line 3363, Address: 0x242430, Func Offset: 0
	// Line 3364, Address: 0x24243c, Func Offset: 0xc
	// Line 3365, Address: 0x242444, Func Offset: 0x14
	// Line 3366, Address: 0x242464, Func Offset: 0x34
	// Line 3367, Address: 0x242478, Func Offset: 0x48
	// Line 3368, Address: 0x242498, Func Offset: 0x68
	// Line 3369, Address: 0x2424a8, Func Offset: 0x78
	// Line 3370, Address: 0x2424ac, Func Offset: 0x7c
	// Line 3371, Address: 0x2424c0, Func Offset: 0x90
	// Line 3372, Address: 0x2424d4, Func Offset: 0xa4
	// Line 3375, Address: 0x2424e0, Func Offset: 0xb0
	// Line 3376, Address: 0x2424e8, Func Offset: 0xb8
	// Func End, Address: 0x2424fc, Func Offset: 0xcc
}

// 
// Start address: 0x242500
void mcMakeDirDataSub()
{
	unsigned long csum3;
	unsigned long* pos2;
	unsigned int* pos;
	unsigned int id;
	unsigned int csum2;
	unsigned int csum;
	unsigned int n;
	int i;
	// Line 3381, Address: 0x242500, Func Offset: 0
	// Line 3386, Address: 0x242520, Func Offset: 0x20
	// Line 3387, Address: 0x242554, Func Offset: 0x54
	// Line 3388, Address: 0x242560, Func Offset: 0x60
	// Line 3389, Address: 0x242564, Func Offset: 0x64
	// Line 3390, Address: 0x24256c, Func Offset: 0x6c
	// Line 3391, Address: 0x242578, Func Offset: 0x78
	// Line 3393, Address: 0x242584, Func Offset: 0x84
	// Line 3394, Address: 0x242588, Func Offset: 0x88
	// Line 3395, Address: 0x24258c, Func Offset: 0x8c
	// Line 3396, Address: 0x2425a8, Func Offset: 0xa8
	// Line 3397, Address: 0x2425c8, Func Offset: 0xc8
	// Line 3398, Address: 0x2425d4, Func Offset: 0xd4
	// Line 3399, Address: 0x2425d8, Func Offset: 0xd8
	// Line 3400, Address: 0x2425dc, Func Offset: 0xdc
	// Line 3401, Address: 0x2425e0, Func Offset: 0xe0
	// Line 3402, Address: 0x24260c, Func Offset: 0x10c
	// Line 3403, Address: 0x242614, Func Offset: 0x114
	// Line 3404, Address: 0x242620, Func Offset: 0x120
	// Line 3406, Address: 0x24262c, Func Offset: 0x12c
	// Line 3410, Address: 0x24265c, Func Offset: 0x15c
	// Line 3412, Address: 0x24266c, Func Offset: 0x16c
	// Line 3413, Address: 0x242690, Func Offset: 0x190
	// Line 3414, Address: 0x2426b8, Func Offset: 0x1b8
	// Line 3416, Address: 0x2426e0, Func Offset: 0x1e0
	// Line 3417, Address: 0x2426f0, Func Offset: 0x1f0
	// Line 3418, Address: 0x2426f4, Func Offset: 0x1f4
	// Line 3419, Address: 0x242700, Func Offset: 0x200
	// Line 3420, Address: 0x24270c, Func Offset: 0x20c
	// Line 3421, Address: 0x242718, Func Offset: 0x218
	// Line 3422, Address: 0x24272c, Func Offset: 0x22c
	// Line 3423, Address: 0x242730, Func Offset: 0x230
	// Line 3424, Address: 0x24273c, Func Offset: 0x23c
	// Func End, Address: 0x242764, Func Offset: 0x264
}

// 
// Start address: 0x242770
int mcExtDirData()
{
	MC_FILEINFO* fi;
	unsigned long csum3;
	unsigned long* pos2;
	unsigned int* pos;
	unsigned int fl;
	unsigned int csum2;
	unsigned int csum;
	unsigned int n;
	int j;
	int i;
	// Line 3430, Address: 0x242770, Func Offset: 0
	// Line 3435, Address: 0x242790, Func Offset: 0x20
	// Line 3436, Address: 0x242794, Func Offset: 0x24
	// Line 3437, Address: 0x2427a0, Func Offset: 0x30
	// Line 3438, Address: 0x2427ac, Func Offset: 0x3c
	// Line 3439, Address: 0x2427b8, Func Offset: 0x48
	// Line 3440, Address: 0x2427cc, Func Offset: 0x5c
	// Line 3441, Address: 0x2427d8, Func Offset: 0x68
	// Line 3442, Address: 0x2427e8, Func Offset: 0x78
	// Line 3444, Address: 0x2427f4, Func Offset: 0x84
	// Line 3445, Address: 0x2427f8, Func Offset: 0x88
	// Line 3446, Address: 0x242820, Func Offset: 0xb0
	// Line 3447, Address: 0x242830, Func Offset: 0xc0
	// Line 3449, Address: 0x24283c, Func Offset: 0xcc
	// Line 3450, Address: 0x242840, Func Offset: 0xd0
	// Line 3451, Address: 0x242844, Func Offset: 0xd4
	// Line 3452, Address: 0x24284c, Func Offset: 0xdc
	// Line 3453, Address: 0x242858, Func Offset: 0xe8
	// Line 3455, Address: 0x242864, Func Offset: 0xf4
	// Line 3456, Address: 0x242868, Func Offset: 0xf8
	// Line 3457, Address: 0x24286c, Func Offset: 0xfc
	// Line 3458, Address: 0x242878, Func Offset: 0x108
	// Line 3459, Address: 0x242898, Func Offset: 0x128
	// Line 3460, Address: 0x2428b8, Func Offset: 0x148
	// Line 3461, Address: 0x2428bc, Func Offset: 0x14c
	// Line 3462, Address: 0x2428c0, Func Offset: 0x150
	// Line 3463, Address: 0x2428c4, Func Offset: 0x154
	// Line 3464, Address: 0x2428ec, Func Offset: 0x17c
	// Line 3465, Address: 0x2428f4, Func Offset: 0x184
	// Line 3470, Address: 0x242984, Func Offset: 0x214
	// Line 3471, Address: 0x242994, Func Offset: 0x224
	// Line 3473, Address: 0x2429a0, Func Offset: 0x230
	// Line 3474, Address: 0x2429ac, Func Offset: 0x23c
	// Line 3475, Address: 0x2429cc, Func Offset: 0x25c
	// Line 3476, Address: 0x2429dc, Func Offset: 0x26c
	// Line 3478, Address: 0x2429e8, Func Offset: 0x278
	// Line 3479, Address: 0x2429fc, Func Offset: 0x28c
	// Line 3480, Address: 0x242a08, Func Offset: 0x298
	// Line 3481, Address: 0x242a24, Func Offset: 0x2b4
	// Line 3482, Address: 0x242a30, Func Offset: 0x2c0
	// Line 3483, Address: 0x242a40, Func Offset: 0x2d0
	// Line 3485, Address: 0x242a80, Func Offset: 0x310
	// Line 3486, Address: 0x242a94, Func Offset: 0x324
	// Line 3488, Address: 0x242aa0, Func Offset: 0x330
	// Line 3489, Address: 0x242aa8, Func Offset: 0x338
	// Line 3490, Address: 0x242aac, Func Offset: 0x33c
	// Line 3491, Address: 0x242ab8, Func Offset: 0x348
	// Line 3492, Address: 0x242ac0, Func Offset: 0x350
	// Line 3493, Address: 0x242ad8, Func Offset: 0x368
	// Line 3494, Address: 0x242aec, Func Offset: 0x37c
	// Line 3495, Address: 0x242af8, Func Offset: 0x388
	// Line 3496, Address: 0x242b0c, Func Offset: 0x39c
	// Line 3499, Address: 0x242b18, Func Offset: 0x3a8
	// Line 3500, Address: 0x242b1c, Func Offset: 0x3ac
	// Line 3501, Address: 0x242b28, Func Offset: 0x3b8
	// Line 3502, Address: 0x242b3c, Func Offset: 0x3cc
	// Line 3503, Address: 0x242b50, Func Offset: 0x3e0
	// Line 3505, Address: 0x242b5c, Func Offset: 0x3ec
	// Line 3507, Address: 0x242b6c, Func Offset: 0x3fc
	// Line 3508, Address: 0x242b84, Func Offset: 0x414
	// Line 3509, Address: 0x242b88, Func Offset: 0x418
	// Func End, Address: 0x242bb0, Func Offset: 0x440
}

// 
// Start address: 0x242bb0
void mcLoadIconData()
{
	// Line 3514, Address: 0x242bb0, Func Offset: 0
	// Line 3515, Address: 0x242bb8, Func Offset: 0x8
	// Line 3516, Address: 0x242bdc, Func Offset: 0x2c
	// Line 3517, Address: 0x242c00, Func Offset: 0x50
	// Func End, Address: 0x242c10, Func Offset: 0x60
}

// 
// Start address: 0x242c10
int mcCheckEndLoadIconData()
{
	// Line 3523, Address: 0x242c10, Func Offset: 0
	// Line 3524, Address: 0x242c18, Func Offset: 0x8
	// Line 3525, Address: 0x242c5c, Func Offset: 0x4c
	// Func End, Address: 0x242c6c, Func Offset: 0x5c
}

