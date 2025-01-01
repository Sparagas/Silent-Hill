


char* last_check;
unsigned long check_count;
unsigned long prv_check_count;
unsigned long warn_check_count;
unsigned long warn_wait;
int check_halt;
long sleep_timeout;
long sleep_time;
long sleep_check_interval;
long sleep_max;
long sleep_max_report;
long call_count;
int execEnv_auto_exit_time;

void ___dbFlowSetCheckPoint(char* check_point);
int dbFlowCheck();
void dbFlowStartCheck(int enable);
void dbFlowCheckSleepTime(int flow_ok);

// 
// Start address: 0x2105f0
void ___dbFlowSetCheckPoint(char* check_point)
{
	// Line 30, Address: 0x2105f0, Func Offset: 0
	// Line 31, Address: 0x210604, Func Offset: 0x14
	// Line 32, Address: 0x21060c, Func Offset: 0x1c
	// Func End, Address: 0x210614, Func Offset: 0x24
}

// 
// Start address: 0x210620
int dbFlowCheck()
{
	char* str;
	char* str;
	int ret;
	// Line 36, Address: 0x210620, Func Offset: 0
	// Line 37, Address: 0x21062c, Func Offset: 0xc
	// Line 38, Address: 0x210630, Func Offset: 0x10
	// Line 41, Address: 0x210640, Func Offset: 0x20
	// Line 43, Address: 0x210658, Func Offset: 0x38
	// Line 46, Address: 0x210668, Func Offset: 0x48
	// Line 47, Address: 0x21067c, Func Offset: 0x5c
	// Line 53, Address: 0x210688, Func Offset: 0x68
	// Line 54, Address: 0x210698, Func Offset: 0x78
	// Line 66, Address: 0x2106a8, Func Offset: 0x88
	// Line 69, Address: 0x2106b8, Func Offset: 0x98
	// Line 70, Address: 0x2106bc, Func Offset: 0x9c
	// Line 71, Address: 0x2106c4, Func Offset: 0xa4
	// Line 75, Address: 0x2106d4, Func Offset: 0xb4
	// Line 76, Address: 0x2106e4, Func Offset: 0xc4
	// Line 82, Address: 0x2106f4, Func Offset: 0xd4
	// Line 84, Address: 0x2106fc, Func Offset: 0xdc
	// Line 86, Address: 0x21070c, Func Offset: 0xec
	// Line 87, Address: 0x210710, Func Offset: 0xf0
	// Func End, Address: 0x210724, Func Offset: 0x104
}

// 
// Start address: 0x210730
void dbFlowStartCheck(int enable)
{
	// Line 101, Address: 0x210730, Func Offset: 0
	// Line 102, Address: 0x210738, Func Offset: 0x8
	// Line 103, Address: 0x210754, Func Offset: 0x24
	// Line 104, Address: 0x21075c, Func Offset: 0x2c
	// Line 106, Address: 0x210764, Func Offset: 0x34
	// Func End, Address: 0x21076c, Func Offset: 0x3c
}

// 
// Start address: 0x210770
void dbFlowCheckSleepTime(int flow_ok)
{
	int mode;
	int exec_timeout;
	// Line 110, Address: 0x210770, Func Offset: 0
	// Line 115, Address: 0x21077c, Func Offset: 0xc
	// Line 119, Address: 0x210790, Func Offset: 0x20
	// Line 121, Address: 0x210798, Func Offset: 0x28
	// Line 122, Address: 0x2107a0, Func Offset: 0x30
	// Line 124, Address: 0x2107a8, Func Offset: 0x38
	// Line 136, Address: 0x2107c4, Func Offset: 0x54
	// Line 138, Address: 0x2107d8, Func Offset: 0x68
	// Line 142, Address: 0x2107e0, Func Offset: 0x70
	// Line 144, Address: 0x2107fc, Func Offset: 0x8c
	// Line 147, Address: 0x210828, Func Offset: 0xb8
	// Line 148, Address: 0x210844, Func Offset: 0xd4
	// Line 160, Address: 0x21084c, Func Offset: 0xdc
	// Line 181, Address: 0x210854, Func Offset: 0xe4
	// Line 183, Address: 0x210868, Func Offset: 0xf8
	// Line 184, Address: 0x210874, Func Offset: 0x104
	// Line 193, Address: 0x210898, Func Offset: 0x128
	// Line 199, Address: 0x2108a4, Func Offset: 0x134
	// Func End, Address: 0x2108b8, Func Offset: 0x148
}

