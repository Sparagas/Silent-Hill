typedef union fsFileIndex;
typedef union fsFile;
typedef struct fsCdFile;
typedef struct Playing_Info;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef struct _anon1;


typedef fsFileIndex* type_0[6];
typedef fsFileIndex* type_1[6];
typedef fsFileIndex* type_2[6][53];
typedef fsFileIndex* type_3[6];
typedef fsFileIndex* type_4[6];
typedef fsFileIndex* type_5[6];
typedef float type_6[7];
typedef unsigned int type_7[7];
typedef fsFileIndex* type_8[6];
typedef unsigned short type_9[2048];
typedef unsigned short type_10[32768];
typedef fsFileIndex* type_11[6];

union fsFileIndex
{
	_anon1 index;
	unsigned long pack;
};

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

struct _anon1
{
	fsFile* fp;
	char* name;
};

Playing_Info playing;
unsigned short msg_buffer[32768];
unsigned short msg_station[2048];

int DataLoadMessage(int msg);
void shMemCopy(void* ds, void* sr, int datasize);

// 
// Start address: 0x22d0e0
int DataLoadMessage(int msg)
{
	int fid;
	fsFileIndex* msg_buffer_on_memory;
	fsFileIndex* file_stage[6][53];
	fsFileIndex* file_result[6];
	fsFileIndex* file_m_card[6];
	fsFileIndex* file_memo[6];
	fsFileIndex* file_option[6];
	fsFileIndex* file_item[6];
	fsFileIndex* msg_station_on_memory;
	fsFileIndex* file_common[6];
	// Line 32, Address: 0x22d0e0, Func Offset: 0
	// Line 70, Address: 0x22d0e8, Func Offset: 0x8
	// Line 72, Address: 0x22d0ec, Func Offset: 0xc
	// Line 74, Address: 0x22d114, Func Offset: 0x34
	// Line 75, Address: 0x22d140, Func Offset: 0x60
	// Line 76, Address: 0x22d150, Func Offset: 0x70
	// Line 78, Address: 0x22d174, Func Offset: 0x94
	// Line 81, Address: 0x22d17c, Func Offset: 0x9c
	// Line 82, Address: 0x22d1a8, Func Offset: 0xc8
	// Line 83, Address: 0x22d1b8, Func Offset: 0xd8
	// Line 85, Address: 0x22d1dc, Func Offset: 0xfc
	// Line 88, Address: 0x22d1e4, Func Offset: 0x104
	// Line 89, Address: 0x22d210, Func Offset: 0x130
	// Line 90, Address: 0x22d220, Func Offset: 0x140
	// Line 92, Address: 0x22d244, Func Offset: 0x164
	// Line 95, Address: 0x22d24c, Func Offset: 0x16c
	// Line 96, Address: 0x22d278, Func Offset: 0x198
	// Line 97, Address: 0x22d288, Func Offset: 0x1a8
	// Line 99, Address: 0x22d2ac, Func Offset: 0x1cc
	// Line 102, Address: 0x22d2b4, Func Offset: 0x1d4
	// Line 103, Address: 0x22d2e0, Func Offset: 0x200
	// Line 104, Address: 0x22d2f0, Func Offset: 0x210
	// Line 106, Address: 0x22d314, Func Offset: 0x234
	// Line 109, Address: 0x22d31c, Func Offset: 0x23c
	// Line 110, Address: 0x22d348, Func Offset: 0x268
	// Line 111, Address: 0x22d358, Func Offset: 0x278
	// Line 113, Address: 0x22d37c, Func Offset: 0x29c
	// Line 116, Address: 0x22d384, Func Offset: 0x2a4
	// Line 118, Address: 0x22d3c8, Func Offset: 0x2e8
	// Line 120, Address: 0x22d3d8, Func Offset: 0x2f8
	// Line 127, Address: 0x22d414, Func Offset: 0x334
	// Func End, Address: 0x22d424, Func Offset: 0x344
}

// 
// Start address: 0x22d430
void shMemCopy(void* ds, void* sr, int datasize)
{
	int now;
	int bufpage;
	// Line 145, Address: 0x22d430, Func Offset: 0
	// Line 149, Address: 0x22d454, Func Offset: 0x24
	// Line 151, Address: 0x22d468, Func Offset: 0x38
	// Line 152, Address: 0x22d47c, Func Offset: 0x4c
	// Line 154, Address: 0x22d48c, Func Offset: 0x5c
	// Line 155, Address: 0x22d4a0, Func Offset: 0x70
	// Line 158, Address: 0x22d4b0, Func Offset: 0x80
	// Line 162, Address: 0x22d4b4, Func Offset: 0x84
	// Line 165, Address: 0x22d4d0, Func Offset: 0xa0
	// Line 166, Address: 0x22d4d8, Func Offset: 0xa8
	// Line 167, Address: 0x22d4f8, Func Offset: 0xc8
	// Line 168, Address: 0x22d508, Func Offset: 0xd8
	// Line 169, Address: 0x22d514, Func Offset: 0xe4
	// Line 170, Address: 0x22d518, Func Offset: 0xe8
	// Line 171, Address: 0x22d534, Func Offset: 0x104
	// Line 173, Address: 0x22d540, Func Offset: 0x110
	// Line 174, Address: 0x22d560, Func Offset: 0x130
	// Line 175, Address: 0x22d570, Func Offset: 0x140
	// Line 176, Address: 0x22d57c, Func Offset: 0x14c
	// Line 177, Address: 0x22d580, Func Offset: 0x150
	// Line 178, Address: 0x22d59c, Func Offset: 0x16c
	// Line 180, Address: 0x22d5a8, Func Offset: 0x178
	// Line 181, Address: 0x22d5bc, Func Offset: 0x18c
	// Line 182, Address: 0x22d5c0, Func Offset: 0x190
	// Line 184, Address: 0x22d5cc, Func Offset: 0x19c
	// Line 185, Address: 0x22d5d0, Func Offset: 0x1a0
	// Line 187, Address: 0x22d5ec, Func Offset: 0x1bc
	// Line 189, Address: 0x22d5f4, Func Offset: 0x1c4
	// Line 190, Address: 0x22d614, Func Offset: 0x1e4
	// Line 191, Address: 0x22d624, Func Offset: 0x1f4
	// Line 193, Address: 0x22d630, Func Offset: 0x200
	// Line 194, Address: 0x22d64c, Func Offset: 0x21c
	// Line 196, Address: 0x22d658, Func Offset: 0x228
	// Line 197, Address: 0x22d678, Func Offset: 0x248
	// Line 198, Address: 0x22d688, Func Offset: 0x258
	// Line 200, Address: 0x22d690, Func Offset: 0x260
	// Line 201, Address: 0x22d6ac, Func Offset: 0x27c
	// Line 204, Address: 0x22d6b8, Func Offset: 0x288
	// Line 208, Address: 0x22d6d4, Func Offset: 0x2a4
	// Func End, Address: 0x22d6f4, Func Offset: 0x2c4
}

