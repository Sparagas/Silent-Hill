typedef struct EventBeginTableFlag;
typedef struct EventFinishTableFlag;
typedef struct EventTableEventNumber;
typedef union EventBeginTable;
typedef union EventFinishTable;


typedef EventBeginTable type_0[25];
typedef EventFinishTable type_1[26];

struct EventBeginTableFlag
{
	struct
	{
		unsigned short flag : 12;
		unsigned short on_off : 1;
		unsigned short or_flag : 1;
		unsigned short data_type : 1;
		unsigned short end_bit : 1;
	};
};

struct EventFinishTableFlag
{
	struct
	{
		unsigned short flag : 12;
		unsigned short on_off : 1;
		unsigned short padding : 1;
		unsigned short data_type : 1;
		unsigned short end_bit : 1;
	};
};

struct EventTableEventNumber
{
	struct
	{
		unsigned short number : 12;
		unsigned short padding1 : 1;
		unsigned short padding2 : 1;
		unsigned short data_type : 1;
		unsigned short end_bit : 1;
	};
};

union EventBeginTable
{
	unsigned short direct;
	EventBeginTableFlag flag;
	EventTableEventNumber number;
};

union EventFinishTable
{
	unsigned short direct;
	EventFinishTableFlag flag;
	EventTableEventNumber number;
};

EventBeginTable event_begin_other[25];
EventFinishTable event_finish_other[26];


