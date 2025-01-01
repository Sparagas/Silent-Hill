typedef enum DB_FLOW_CHECK_POINT : unsigned char;



enum DB_FLOW_CHECK_POINT : unsigned char
{
	DB_FLOW_NO_CHECK,
	DB_FLOW_CHECK_POINT_1,
	DB_FLOW_CHECK_POINT_2,
	DB_FLOW_CHECK_POINT_3,
	DB_FLOW_CHECK_POINT_4,
	DB_FLOW_CHECK_POINT_5,
	DB_FLOW_CHECK_POINT_6,
	DB_FLOW_CHECK_POINT_7
};

DB_FLOW_CHECK_POINT last_check;
unsigned long check_count;
unsigned long prv_check_count;
unsigned long warn_check_count;
int check_halt;
long sleep_timeout;
long sleep_time;
long sleep_check_interval;
long sleep_max;
long sleep_max_report;
long call_count;
int execEnv_auto_exit_time;

int dbFlowCheck();
void dbFlowCheckSleepTime(int flow_ok);

// 
// Start address: 0x212d20
int dbFlowCheck()
{
	// Line 24, Address: 0x212d20, Func Offset: 0
	// Line 25, Address: 0x212d28, Func Offset: 0x8
	// Line 28, Address: 0x212d3c, Func Offset: 0x1c
	// Line 30, Address: 0x212d54, Func Offset: 0x34
	// Line 33, Address: 0x212d6c, Func Offset: 0x4c
	// Line 34, Address: 0x212d7c, Func Offset: 0x5c
	// Line 40, Address: 0x212dac, Func Offset: 0x8c
	// Line 43, Address: 0x212db8, Func Offset: 0x98
	// Line 46, Address: 0x212dc8, Func Offset: 0xa8
	// Line 47, Address: 0x212dcc, Func Offset: 0xac
	// Func End, Address: 0x212ddc, Func Offset: 0xbc
}

// 
// Start address: 0x212de0
void dbFlowCheckSleepTime(int flow_ok)
{
	int mode;
	int exec_timeout;
	// Line 66, Address: 0x212de0, Func Offset: 0
	// Line 69, Address: 0x212e00, Func Offset: 0x20
	// Line 71, Address: 0x212e08, Func Offset: 0x28
	// Line 75, Address: 0x212e1c, Func Offset: 0x3c
	// Line 77, Address: 0x212e28, Func Offset: 0x48
	// Line 78, Address: 0x212e30, Func Offset: 0x50
	// Line 80, Address: 0x212e38, Func Offset: 0x58
	// Line 83, Address: 0x212e4c, Func Offset: 0x6c
	// Line 89, Address: 0x212e7c, Func Offset: 0x9c
	// Line 92, Address: 0x212ed8, Func Offset: 0xf8
	// Line 94, Address: 0x212ef4, Func Offset: 0x114
	// Line 98, Address: 0x212f04, Func Offset: 0x124
	// Line 100, Address: 0x212f3c, Func Offset: 0x15c
	// Line 102, Address: 0x212f60, Func Offset: 0x180
	// Line 103, Address: 0x212f7c, Func Offset: 0x19c
	// Line 111, Address: 0x212f8c, Func Offset: 0x1ac
	// Line 115, Address: 0x212fe8, Func Offset: 0x208
	// Line 125, Address: 0x212ff0, Func Offset: 0x210
	// Line 134, Address: 0x212ff4, Func Offset: 0x214
	// Line 136, Address: 0x213074, Func Offset: 0x294
	// Line 138, Address: 0x213088, Func Offset: 0x2a8
	// Line 139, Address: 0x213094, Func Offset: 0x2b4
	// Line 141, Address: 0x2130b8, Func Offset: 0x2d8
	// Line 144, Address: 0x2130c0, Func Offset: 0x2e0
	// Line 146, Address: 0x2130c8, Func Offset: 0x2e8
	// Line 148, Address: 0x2130d0, Func Offset: 0x2f0
	// Line 154, Address: 0x2130dc, Func Offset: 0x2fc
	// Func End, Address: 0x213100, Func Offset: 0x320
}

