typedef struct _anon0;
typedef struct Model_List;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _SH2_SYS;
typedef struct _anon3;
typedef struct Playing_Info;

typedef void(*type_1)();
typedef int(*type_2)();

typedef float type_0[4];
typedef unsigned int type_3[8];

struct _anon0
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
};

struct _anon1
{
	_anon3* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon0* gi_list;
	Model_List* mdl_list;
	_anon2* en_list;
	void(*stage_init)();
	void(*room_init)();
	void(*alltime_func)();
	int glb_crd;
	int reserve_05;
	int reserve_06;
	int reserve_07;
	int reserve_08;
	int reserve_09;
	int reserve_10;
	int reserve_11;
};

struct _anon2
{
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	short condition;
};

struct _SH2_SYS
{
	unsigned int step[8];
	int main_status;
	unsigned int boot_first;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct _anon3
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
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

_SH2_SYS Sh2sys;
_anon1* stage;
Playing_Info playing;

void systemColdInit();
void systemHotInit();
void PlayingInfoInit();

// 
// Start address: 0x20a530
void systemColdInit()
{
	int sid;
	int fid;
	// Line 37, Address: 0x20a530, Func Offset: 0
	// Line 41, Address: 0x20a540, Func Offset: 0x10
	// Line 44, Address: 0x20a54c, Func Offset: 0x1c
	// Line 47, Address: 0x20a554, Func Offset: 0x24
	// Line 51, Address: 0x20a55c, Func Offset: 0x2c
	// Line 53, Address: 0x20a564, Func Offset: 0x34
	// Line 56, Address: 0x20a574, Func Offset: 0x44
	// Line 62, Address: 0x20a580, Func Offset: 0x50
	// Line 71, Address: 0x20a588, Func Offset: 0x58
	// Line 72, Address: 0x20a590, Func Offset: 0x60
	// Line 74, Address: 0x20a598, Func Offset: 0x68
	// Line 75, Address: 0x20a5a4, Func Offset: 0x74
	// Line 76, Address: 0x20a5ac, Func Offset: 0x7c
	// Line 77, Address: 0x20a5b4, Func Offset: 0x84
	// Line 82, Address: 0x20a5c0, Func Offset: 0x90
	// Line 84, Address: 0x20a5d4, Func Offset: 0xa4
	// Line 85, Address: 0x20a5e0, Func Offset: 0xb0
	// Line 88, Address: 0x20a5e8, Func Offset: 0xb8
	// Line 90, Address: 0x20a5f0, Func Offset: 0xc0
	// Line 91, Address: 0x20a5fc, Func Offset: 0xcc
	// Func End, Address: 0x20a614, Func Offset: 0xe4
}

// 
// Start address: 0x20a620
void systemHotInit()
{
	// Line 108, Address: 0x20a620, Func Offset: 0
	// Line 111, Address: 0x20a628, Func Offset: 0x8
	// Line 112, Address: 0x20a630, Func Offset: 0x10
	// Line 113, Address: 0x20a638, Func Offset: 0x18
	// Line 114, Address: 0x20a640, Func Offset: 0x20
	// Line 115, Address: 0x20a648, Func Offset: 0x28
	// Line 116, Address: 0x20a650, Func Offset: 0x30
	// Line 118, Address: 0x20a65c, Func Offset: 0x3c
	// Line 120, Address: 0x20a664, Func Offset: 0x44
	// Line 121, Address: 0x20a66c, Func Offset: 0x4c
	// Line 122, Address: 0x20a674, Func Offset: 0x54
	// Line 124, Address: 0x20a680, Func Offset: 0x60
	// Line 125, Address: 0x20a688, Func Offset: 0x68
	// Func End, Address: 0x20a698, Func Offset: 0x78
}

// 
// Start address: 0x20a6a0
void PlayingInfoInit()
{
	// Line 134, Address: 0x20a6a0, Func Offset: 0
	// Line 135, Address: 0x20a6a8, Func Offset: 0x8
	// Line 138, Address: 0x20a6b0, Func Offset: 0x10
	// Line 139, Address: 0x20a6bc, Func Offset: 0x1c
	// Line 141, Address: 0x20a6c8, Func Offset: 0x28
	// Line 143, Address: 0x20a6d0, Func Offset: 0x30
	// Line 144, Address: 0x20a6dc, Func Offset: 0x3c
	// Line 145, Address: 0x20a6e4, Func Offset: 0x44
	// Line 146, Address: 0x20a6ec, Func Offset: 0x4c
	// Line 147, Address: 0x20a6f8, Func Offset: 0x58
	// Line 148, Address: 0x20a704, Func Offset: 0x64
	// Line 149, Address: 0x20a70c, Func Offset: 0x6c
	// Line 150, Address: 0x20a718, Func Offset: 0x78
	// Line 151, Address: 0x20a724, Func Offset: 0x84
	// Line 152, Address: 0x20a72c, Func Offset: 0x8c
	// Line 153, Address: 0x20a734, Func Offset: 0x94
	// Line 154, Address: 0x20a73c, Func Offset: 0x9c
	// Line 155, Address: 0x20a744, Func Offset: 0xa4
	// Line 156, Address: 0x20a74c, Func Offset: 0xac
	// Line 157, Address: 0x20a758, Func Offset: 0xb8
	// Line 158, Address: 0x20a760, Func Offset: 0xc0
	// Line 164, Address: 0x20a76c, Func Offset: 0xcc
	// Line 165, Address: 0x20a778, Func Offset: 0xd8
	// Line 167, Address: 0x20a784, Func Offset: 0xe4
	// Func End, Address: 0x20a78c, Func Offset: 0xec
}

