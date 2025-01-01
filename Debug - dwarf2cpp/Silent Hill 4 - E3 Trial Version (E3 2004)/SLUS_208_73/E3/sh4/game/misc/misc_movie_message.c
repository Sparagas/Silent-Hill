typedef struct _anon0;


typedef _anon0 type[54];

struct _anon0
{
	struct
	{
		unsigned int movie_id : 8;
		unsigned int stage : 6;
		unsigned int message_id : 10;
	};
	struct
	{
		unsigned int start_frame : 16;
		unsigned int end_frame : 16;
	};
};

_anon0 movie_message[54];

void MovieMessage(int movie_id);

// 
// Start address: 0x335960
void MovieMessage(int movie_id)
{
	int i;
	int now_frame;
	int old_frame;
	// Line 89, Address: 0x335960, Func Offset: 0
	// Line 95, Address: 0x335978, Func Offset: 0x18
	// Line 99, Address: 0x33598c, Func Offset: 0x2c
	// Line 103, Address: 0x33599c, Func Offset: 0x3c
	// Line 109, Address: 0x3359a4, Func Offset: 0x44
	// Line 111, Address: 0x3359ac, Func Offset: 0x4c
	// Line 112, Address: 0x3359b4, Func Offset: 0x54
	// Line 113, Address: 0x3359bc, Func Offset: 0x5c
	// Line 115, Address: 0x3359c4, Func Offset: 0x64
	// Line 116, Address: 0x3359e0, Func Offset: 0x80
	// Line 117, Address: 0x3359ec, Func Offset: 0x8c
	// Line 118, Address: 0x3359f8, Func Offset: 0x98
	// Line 120, Address: 0x335a20, Func Offset: 0xc0
	// Line 122, Address: 0x335a38, Func Offset: 0xd8
	// Line 124, Address: 0x335a44, Func Offset: 0xe4
	// Line 126, Address: 0x335a60, Func Offset: 0x100
	// Line 129, Address: 0x335a6c, Func Offset: 0x10c
	// Line 131, Address: 0x335a80, Func Offset: 0x120
	// Line 134, Address: 0x335a84, Func Offset: 0x124
	// Line 136, Address: 0x335a8c, Func Offset: 0x12c
	// Line 137, Address: 0x335a94, Func Offset: 0x134
	// Line 138, Address: 0x335a9c, Func Offset: 0x13c
	// Line 139, Address: 0x335aa4, Func Offset: 0x144
	// Line 140, Address: 0x335aac, Func Offset: 0x14c
	// Line 141, Address: 0x335ab4, Func Offset: 0x154
	// Line 142, Address: 0x335abc, Func Offset: 0x15c
	// Func End, Address: 0x335adc, Func Offset: 0x17c
}

