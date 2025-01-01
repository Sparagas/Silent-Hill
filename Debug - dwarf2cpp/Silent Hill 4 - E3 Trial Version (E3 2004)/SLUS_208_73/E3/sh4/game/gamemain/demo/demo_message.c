typedef struct _anon0;
typedef struct _SubtitleMessageData;


typedef _anon0 type[367];

struct _anon0
{
	struct
	{
		unsigned int demo_id : 10;
		unsigned int stage : 6;
		unsigned int message_id : 10;
		unsigned int voice_flag : 1;
	};
	struct
	{
		unsigned int start_frame : 16;
		unsigned int end_frame : 16;
	};
};

struct _SubtitleMessageData
{
	short pack_id;
	short msg_id;
	float time;
};

_anon0 demo_message[367];

void DemoMessage(int demo_id);

// 
// Start address: 0x2b3a90
void DemoMessage(int demo_id)
{
	_SubtitleMessageData message_data;
	// Line 402, Address: 0x2b3a90, Func Offset: 0
	// Line 405, Address: 0x2b3a94, Func Offset: 0x4
	// Line 402, Address: 0x2b3a98, Func Offset: 0x8
	// Line 405, Address: 0x2b3aa4, Func Offset: 0x14
	// Line 406, Address: 0x2b3ac0, Func Offset: 0x30
	// Line 407, Address: 0x2b3ad0, Func Offset: 0x40
	// Line 410, Address: 0x2b3afc, Func Offset: 0x6c
	// Line 411, Address: 0x2b3b00, Func Offset: 0x70
	// Line 413, Address: 0x2b3b10, Func Offset: 0x80
	// Line 414, Address: 0x2b3b20, Func Offset: 0x90
	// Line 416, Address: 0x2b3b38, Func Offset: 0xa8
	// Line 417, Address: 0x2b3b50, Func Offset: 0xc0
	// Line 419, Address: 0x2b3b58, Func Offset: 0xc8
	// Line 421, Address: 0x2b3b60, Func Offset: 0xd0
	// Line 424, Address: 0x2b3b74, Func Offset: 0xe4
	// Line 427, Address: 0x2b3ba0, Func Offset: 0x110
	// Line 428, Address: 0x2b3ba8, Func Offset: 0x118
	// Line 429, Address: 0x2b3bb4, Func Offset: 0x124
	// Line 430, Address: 0x2b3bc4, Func Offset: 0x134
	// Line 431, Address: 0x2b3bcc, Func Offset: 0x13c
	// Line 432, Address: 0x2b3bd8, Func Offset: 0x148
	// Line 439, Address: 0x2b3be4, Func Offset: 0x154
	// Line 440, Address: 0x2b3bf8, Func Offset: 0x168
	// Func End, Address: 0x2b3c0c, Func Offset: 0x17c
}

