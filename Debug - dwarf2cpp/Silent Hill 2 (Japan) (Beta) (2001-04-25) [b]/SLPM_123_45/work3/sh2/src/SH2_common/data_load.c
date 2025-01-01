typedef union fsFileIndex;
typedef struct _anon0;
typedef struct Playing_Info;
typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon1;


typedef fsFileIndex* type_0[6];
typedef fsFileIndex* type_1[6];
typedef fsFileIndex* type_2[6];
typedef unsigned char type_3[8192];
typedef unsigned short type_4[2048];
typedef unsigned short type_5[32768];
typedef fsFileIndex* type_6[6];
typedef fsFileIndex* type_7[6][53];
typedef fsFileIndex* type_8[14];
typedef fsFileIndex* type_9[6];
typedef fsFileIndex* type_10[6];

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

struct Playing_Info
{
	unsigned char stage;
	unsigned char enemy_off;
	unsigned char memo_select;
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
};

union fsFile
{
	_anon1 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
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

struct _anon1
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

Playing_Info playing;
unsigned short msg_buffer[32768];
unsigned short msg_station[2048];
unsigned char snd_data_buffer[8192];

int DataLoadMessage(int msg);
void DataLoadSndData(int glb_crd);

// 
// Start address: 0x23df40
int DataLoadMessage(int msg)
{
	int fid;
	fsFileIndex* msg_buffer_on_memory;
	fsFileIndex* file_stage[6][53];
	fsFileIndex* file_m_card[6];
	fsFileIndex* file_memo[6];
	fsFileIndex* file_option[6];
	fsFileIndex* file_item[6];
	fsFileIndex* msg_station_on_memory;
	fsFileIndex* file_common[6];
	// Line 33, Address: 0x23df40, Func Offset: 0
	// Line 70, Address: 0x23df50, Func Offset: 0x10
	// Line 72, Address: 0x23df54, Func Offset: 0x14
	// Line 74, Address: 0x23df80, Func Offset: 0x40
	// Line 75, Address: 0x23dfb0, Func Offset: 0x70
	// Line 76, Address: 0x23dfe4, Func Offset: 0xa4
	// Line 78, Address: 0x23e00c, Func Offset: 0xcc
	// Line 81, Address: 0x23e014, Func Offset: 0xd4
	// Line 82, Address: 0x23e044, Func Offset: 0x104
	// Line 83, Address: 0x23e078, Func Offset: 0x138
	// Line 85, Address: 0x23e0a0, Func Offset: 0x160
	// Line 88, Address: 0x23e0a8, Func Offset: 0x168
	// Line 89, Address: 0x23e0d8, Func Offset: 0x198
	// Line 90, Address: 0x23e10c, Func Offset: 0x1cc
	// Line 92, Address: 0x23e134, Func Offset: 0x1f4
	// Line 95, Address: 0x23e13c, Func Offset: 0x1fc
	// Line 96, Address: 0x23e16c, Func Offset: 0x22c
	// Line 97, Address: 0x23e1a0, Func Offset: 0x260
	// Line 99, Address: 0x23e1c8, Func Offset: 0x288
	// Line 102, Address: 0x23e1d0, Func Offset: 0x290
	// Line 103, Address: 0x23e200, Func Offset: 0x2c0
	// Line 104, Address: 0x23e234, Func Offset: 0x2f4
	// Line 106, Address: 0x23e25c, Func Offset: 0x31c
	// Line 109, Address: 0x23e264, Func Offset: 0x324
	// Line 111, Address: 0x23e2b0, Func Offset: 0x370
	// Line 113, Address: 0x23e300, Func Offset: 0x3c0
	// Line 119, Address: 0x23e344, Func Offset: 0x404
	// Line 120, Address: 0x23e348, Func Offset: 0x408
	// Func End, Address: 0x23e35c, Func Offset: 0x41c
}

// 
// Start address: 0x23e360
void DataLoadSndData(int glb_crd)
{
	fsFileIndex* snd_data_on_memory;
	fsFileIndex* file_snd_data[14];
	// Line 130, Address: 0x23e360, Func Offset: 0
	// Line 149, Address: 0x23e36c, Func Offset: 0xc
	// Line 150, Address: 0x23e394, Func Offset: 0x34
	// Line 151, Address: 0x23e3a8, Func Offset: 0x48
	// Line 152, Address: 0x23e3d0, Func Offset: 0x70
	// Line 154, Address: 0x23e3f0, Func Offset: 0x90
	// Func End, Address: 0x23e400, Func Offset: 0xa0
}

