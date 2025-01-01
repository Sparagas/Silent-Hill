typedef struct Playing_Info;


typedef unsigned char type_0[112];
typedef unsigned char type_1[72];
typedef unsigned char type_2[64];
typedef unsigned char type_3[112];
typedef unsigned char type_4[80];
typedef unsigned char type_5[112];
typedef unsigned char type_6[6];
typedef unsigned char type_7[6][2];
typedef unsigned char type_8[112];
typedef unsigned char type_9[72];

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

unsigned char _show_kodou_h_00[112];
unsigned char _show_kodou_h_01[112];
unsigned char _show_kodou_h_02[112];
unsigned char _show_kodou_h_03[112];
unsigned char _show_weapon_l_00[72];
unsigned char _show_weapon_l_01[80];
unsigned char _show_weapon_l_02[72];
unsigned char _show_weapon_l_03[64];
unsigned char _Peripheral_Controller_SendData[6][2];
unsigned int _edit_flag;
unsigned int _sequencer_init;
Playing_Info playing;

float DSS_Wrapper_AllVibrationRatio_Get();
int DSS_Wrapper_ActuaterData_Send(unsigned int ControllerID, unsigned int ActuaterType, unsigned int ActuaterLV);
int DSS_Wrapper_AllActuaterData_RealSend_to_Peripheral();
void DSS_Wrapper_DualShock2_Test();
void DSS_Wrapper_DualShock2_Sequencer();
unsigned int DSS_Wrapper_DualShock2_Send_ActuaterLV_Get(unsigned int ControllerID, unsigned int ActuaterType);
void DSS_Wrapper_DualShock2_Send_ActuaterLV_Claer(unsigned int ControllerID, unsigned int ActuaterType);

// 
// Start address: 0x24d750
float DSS_Wrapper_AllVibrationRatio_Get()
{
	float result;
	// Line 159, Address: 0x24d750, Func Offset: 0
	// Line 160, Address: 0x24d754, Func Offset: 0x4
	// Line 163, Address: 0x24d760, Func Offset: 0x10
	// Line 165, Address: 0x24d7a0, Func Offset: 0x50
	// Line 166, Address: 0x24d7b4, Func Offset: 0x64
	// Line 168, Address: 0x24d7bc, Func Offset: 0x6c
	// Line 169, Address: 0x24d7d0, Func Offset: 0x80
	// Line 171, Address: 0x24d7d8, Func Offset: 0x88
	// Line 181, Address: 0x24d7e8, Func Offset: 0x98
	// Line 182, Address: 0x24d7ec, Func Offset: 0x9c
	// Func End, Address: 0x24d7f8, Func Offset: 0xa8
}

// 
// Start address: 0x24d800
int DSS_Wrapper_ActuaterData_Send(unsigned int ControllerID, unsigned int ActuaterType, unsigned int ActuaterLV)
{
	int result;
	// Line 220, Address: 0x24d800, Func Offset: 0
	// Line 221, Address: 0x24d814, Func Offset: 0x14
	// Line 224, Address: 0x24d818, Func Offset: 0x18
	// Line 230, Address: 0x24d844, Func Offset: 0x44
	// Line 231, Address: 0x24d848, Func Offset: 0x48
	// Func End, Address: 0x24d858, Func Offset: 0x58
}

// 
// Start address: 0x24d860
int DSS_Wrapper_AllActuaterData_RealSend_to_Peripheral()
{
	int count;
	int result;
	// Line 240, Address: 0x24d860, Func Offset: 0
	// Line 241, Address: 0x24d86c, Func Offset: 0xc
	// Line 242, Address: 0x24d870, Func Offset: 0x10
	// Line 262, Address: 0x24d874, Func Offset: 0x14
	// Line 264, Address: 0x24d878, Func Offset: 0x18
	// Line 265, Address: 0x24d87c, Func Offset: 0x1c
	// Func End, Address: 0x24d890, Func Offset: 0x30
}

// 
// Start address: 0x24d890
void DSS_Wrapper_DualShock2_Test()
{
	// Line 364, Address: 0x24d890, Func Offset: 0
	// Func End, Address: 0x24d898, Func Offset: 0x8
}

// 
// Start address: 0x24d8a0
void DSS_Wrapper_DualShock2_Sequencer()
{
	// Line 367, Address: 0x24d8a0, Func Offset: 0
	// Line 368, Address: 0x24d8a8, Func Offset: 0x8
	// Line 370, Address: 0x24d8b8, Func Offset: 0x18
	// Line 371, Address: 0x24d8c8, Func Offset: 0x28
	// Line 372, Address: 0x24d8d0, Func Offset: 0x30
	// Line 373, Address: 0x24d8e4, Func Offset: 0x44
	// Line 375, Address: 0x24d8f0, Func Offset: 0x50
	// Line 377, Address: 0x24d8f8, Func Offset: 0x58
	// Line 378, Address: 0x24d900, Func Offset: 0x60
	// Func End, Address: 0x24d910, Func Offset: 0x70
}

// 
// Start address: 0x24d910
unsigned int DSS_Wrapper_DualShock2_Send_ActuaterLV_Get(unsigned int ControllerID, unsigned int ActuaterType)
{
	// Line 387, Address: 0x24d910, Func Offset: 0
	// Line 388, Address: 0x24d920, Func Offset: 0x10
	// Line 389, Address: 0x24d950, Func Offset: 0x40
	// Func End, Address: 0x24d960, Func Offset: 0x50
}

// 
// Start address: 0x24d960
void DSS_Wrapper_DualShock2_Send_ActuaterLV_Claer(unsigned int ControllerID, unsigned int ActuaterType)
{
	// Line 393, Address: 0x24d960, Func Offset: 0
	// Line 394, Address: 0x24d96c, Func Offset: 0xc
	// Line 395, Address: 0x24d994, Func Offset: 0x34
	// Func End, Address: 0x24d9a0, Func Offset: 0x40
}

