typedef struct Playing_Info;
typedef struct _SH2_SYS;

typedef int(*type_0)();
typedef int(*type_1)(int(*)());
typedef int(*type_3)();

typedef unsigned int type_2[8];

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

struct _SH2_SYS
{
	unsigned int step[8];
	int main_status;
	unsigned int boot_first;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

_SH2_SYS Sh2sys;
int(*lisPutCmd0)(int(*)());
int(*connectMain)();
Playing_Info playing;

void GameMain();
void PlayableMain();

// 
// Start address: 0x20a790
void GameMain()
{
	// Line 47, Address: 0x20a790, Func Offset: 0
	// Line 48, Address: 0x20a798, Func Offset: 0x8
	// Line 49, Address: 0x20a7a0, Func Offset: 0x10
	// Line 50, Address: 0x20a7a8, Func Offset: 0x18
	// Line 51, Address: 0x20a7b0, Func Offset: 0x20
	// Line 52, Address: 0x20a7b8, Func Offset: 0x28
	// Line 54, Address: 0x20a7c0, Func Offset: 0x30
	// Line 57, Address: 0x20a7f0, Func Offset: 0x60
	// Line 58, Address: 0x20a7f8, Func Offset: 0x68
	// Line 60, Address: 0x20a800, Func Offset: 0x70
	// Line 63, Address: 0x20a808, Func Offset: 0x78
	// Line 64, Address: 0x20a810, Func Offset: 0x80
	// Line 65, Address: 0x20a818, Func Offset: 0x88
	// Line 66, Address: 0x20a85c, Func Offset: 0xcc
	// Line 69, Address: 0x20a864, Func Offset: 0xd4
	// Line 70, Address: 0x20a86c, Func Offset: 0xdc
	// Line 71, Address: 0x20a874, Func Offset: 0xe4
	// Line 72, Address: 0x20a8b8, Func Offset: 0x128
	// Line 75, Address: 0x20a8c0, Func Offset: 0x130
	// Line 76, Address: 0x20a8c8, Func Offset: 0x138
	// Line 77, Address: 0x20a8d0, Func Offset: 0x140
	// Line 78, Address: 0x20a914, Func Offset: 0x184
	// Line 99, Address: 0x20a91c, Func Offset: 0x18c
	// Line 100, Address: 0x20a92c, Func Offset: 0x19c
	// Line 102, Address: 0x20a968, Func Offset: 0x1d8
	// Line 103, Address: 0x20a970, Func Offset: 0x1e0
	// Line 106, Address: 0x20a978, Func Offset: 0x1e8
	// Line 107, Address: 0x20a980, Func Offset: 0x1f0
	// Line 110, Address: 0x20a988, Func Offset: 0x1f8
	// Line 111, Address: 0x20a9cc, Func Offset: 0x23c
	// Line 117, Address: 0x20a9d4, Func Offset: 0x244
	// Line 118, Address: 0x20a9e4, Func Offset: 0x254
	// Line 130, Address: 0x20aa1c, Func Offset: 0x28c
	// Func End, Address: 0x20aa2c, Func Offset: 0x29c
}

// 
// Start address: 0x20aa30
void PlayableMain()
{
	// Line 147, Address: 0x20aa30, Func Offset: 0
	// Line 148, Address: 0x20aa38, Func Offset: 0x8
	// Line 150, Address: 0x20aa40, Func Offset: 0x10
	// Line 154, Address: 0x20aa70, Func Offset: 0x40
	// Line 155, Address: 0x20aa78, Func Offset: 0x48
	// Line 156, Address: 0x20aa80, Func Offset: 0x50
	// Line 157, Address: 0x20aabc, Func Offset: 0x8c
	// Line 162, Address: 0x20aac4, Func Offset: 0x94
	// Line 163, Address: 0x20aadc, Func Offset: 0xac
	// Line 165, Address: 0x20ab18, Func Offset: 0xe8
	// Line 166, Address: 0x20ab6c, Func Offset: 0x13c
	// Line 170, Address: 0x20ab74, Func Offset: 0x144
	// Line 174, Address: 0x20ab80, Func Offset: 0x150
	// Line 178, Address: 0x20ab88, Func Offset: 0x158
	// Line 179, Address: 0x20ab9c, Func Offset: 0x16c
	// Line 180, Address: 0x20aba4, Func Offset: 0x174
	// Line 181, Address: 0x20abac, Func Offset: 0x17c
	// Line 183, Address: 0x20abb4, Func Offset: 0x184
	// Line 184, Address: 0x20abcc, Func Offset: 0x19c
	// Line 186, Address: 0x20abd4, Func Offset: 0x1a4
	// Line 189, Address: 0x20abdc, Func Offset: 0x1ac
	// Line 190, Address: 0x20abe4, Func Offset: 0x1b4
	// Line 191, Address: 0x20abec, Func Offset: 0x1bc
	// Line 194, Address: 0x20abf4, Func Offset: 0x1c4
	// Line 195, Address: 0x20abfc, Func Offset: 0x1cc
	// Line 196, Address: 0x20ac10, Func Offset: 0x1e0
	// Line 197, Address: 0x20ac18, Func Offset: 0x1e8
	// Line 200, Address: 0x20ac20, Func Offset: 0x1f0
	// Line 201, Address: 0x20ac28, Func Offset: 0x1f8
	// Line 202, Address: 0x20ac3c, Func Offset: 0x20c
	// Line 203, Address: 0x20ac44, Func Offset: 0x214
	// Line 206, Address: 0x20ac4c, Func Offset: 0x21c
	// Line 207, Address: 0x20ac54, Func Offset: 0x224
	// Line 208, Address: 0x20ac68, Func Offset: 0x238
	// Line 209, Address: 0x20ac70, Func Offset: 0x240
	// Line 215, Address: 0x20ac78, Func Offset: 0x248
	// Line 216, Address: 0x20ac80, Func Offset: 0x250
	// Line 217, Address: 0x20acd0, Func Offset: 0x2a0
	// Line 218, Address: 0x20acd8, Func Offset: 0x2a8
	// Line 221, Address: 0x20ace0, Func Offset: 0x2b0
	// Line 222, Address: 0x20ace8, Func Offset: 0x2b8
	// Line 223, Address: 0x20ad38, Func Offset: 0x308
	// Line 224, Address: 0x20ad40, Func Offset: 0x310
	// Line 226, Address: 0x20ad48, Func Offset: 0x318
	// Line 228, Address: 0x20ad84, Func Offset: 0x354
	// Line 229, Address: 0x20ad8c, Func Offset: 0x35c
	// Line 230, Address: 0x20ad9c, Func Offset: 0x36c
	// Line 235, Address: 0x20add0, Func Offset: 0x3a0
	// Line 236, Address: 0x20add8, Func Offset: 0x3a8
	// Func End, Address: 0x20ade8, Func Offset: 0x3b8
}

