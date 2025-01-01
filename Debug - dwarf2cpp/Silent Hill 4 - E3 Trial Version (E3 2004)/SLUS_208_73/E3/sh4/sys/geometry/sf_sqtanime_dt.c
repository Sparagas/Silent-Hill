typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;


typedef int type_0[2432];
typedef int type_1[2432];
typedef int type_2[2432][3];
typedef float type_3[4];
typedef int type_4[3];
typedef _anon1* type_5[3];
typedef int type_6[3];

struct _anon0
{
	unsigned short id;
	short version;
	short start_frame;
	short end_frame;
	int n_characters;
	int offset_to_characters;
	int frame_data_size;
	int offset_to_frames;
	float trans_offset[4];
};

struct _anon1
{
	unsigned short data_id;
	short frame_no;
	int pad[3];
};

struct _anon2
{
	_anon0* header_buffer;
	_anon1* frames_buffer[3];
	int header_ready;
	int frame_ready[3];
	int read_buffer;
	void* current_ptr;
	int left_data;
	int left_to_read;
	int current_buffer;
};

int frames_buffer[2432][3];
int header_buffer[2432];

void sfSqtAnimeDataControlConstruct(_anon2* data_ctrl);
void sfSqtAnimeDataControlSetHeader(_anon2* data_ctrl);
void sfSqtAnimeDataControlSetFrames(_anon2* data_ctrl);
int sfSqtAnimeDataControlSetData(_anon2* data_ctrl, void* data_addr, int data_size);
int sfSqtAnimeDataControlNeedNext(_anon2* data_ctrl);
_anon0* sfSqtAnimeDataControlGetHeader(_anon2* data_ctrl);
_anon1* sfSqtAnimeDataControlGetFrame(_anon2* data_ctrl, int offset);
void sfSqtAnimeDataControlDiscardCurrent(_anon2* data_ctrl);

// 
// Start address: 0x242e00
void sfSqtAnimeDataControlConstruct(_anon2* data_ctrl)
{
	// Line 126, Address: 0x242e00, Func Offset: 0
	// Line 129, Address: 0x242e0c, Func Offset: 0xc
	// Line 131, Address: 0x242e2c, Func Offset: 0x2c
	// Func End, Address: 0x242e34, Func Offset: 0x34
}

// 
// Start address: 0x242e40
void sfSqtAnimeDataControlSetHeader(_anon2* data_ctrl)
{
	_anon0* top_header;
	int header_size;
	// Line 138, Address: 0x242e40, Func Offset: 0
	// Line 146, Address: 0x242e58, Func Offset: 0x18
	// Line 147, Address: 0x242e5c, Func Offset: 0x1c
	// Line 154, Address: 0x242e60, Func Offset: 0x20
	// Line 155, Address: 0x242e64, Func Offset: 0x24
	// Line 157, Address: 0x242e68, Func Offset: 0x28
	// Line 160, Address: 0x242e74, Func Offset: 0x34
	// Line 162, Address: 0x242e84, Func Offset: 0x44
	// Line 165, Address: 0x242e8c, Func Offset: 0x4c
	// Line 167, Address: 0x242e98, Func Offset: 0x58
	// Line 169, Address: 0x242ea4, Func Offset: 0x64
	// Line 170, Address: 0x242eac, Func Offset: 0x6c
	// Func End, Address: 0x242ec4, Func Offset: 0x84
}

// 
// Start address: 0x242ed0
void sfSqtAnimeDataControlSetFrames(_anon2* data_ctrl)
{
	_anon0* top_header;
	int read_data_size;
	int n;
	void* set_buffer;
	// Line 178, Address: 0x242ed0, Func Offset: 0
	// Line 179, Address: 0x242ee4, Func Offset: 0x14
	// Line 182, Address: 0x242eec, Func Offset: 0x1c
	// Line 184, Address: 0x242ef8, Func Offset: 0x28
	// Line 186, Address: 0x242f04, Func Offset: 0x34
	// Line 189, Address: 0x242f0c, Func Offset: 0x3c
	// Line 192, Address: 0x242f1c, Func Offset: 0x4c
	// Line 197, Address: 0x242f28, Func Offset: 0x58
	// Line 192, Address: 0x242f2c, Func Offset: 0x5c
	// Line 199, Address: 0x242f30, Func Offset: 0x60
	// Line 197, Address: 0x242f34, Func Offset: 0x64
	// Line 199, Address: 0x242f3c, Func Offset: 0x6c
	// Line 201, Address: 0x242f44, Func Offset: 0x74
	// Line 205, Address: 0x242f48, Func Offset: 0x78
	// Line 201, Address: 0x242f4c, Func Offset: 0x7c
	// Line 209, Address: 0x242f50, Func Offset: 0x80
	// Line 201, Address: 0x242f54, Func Offset: 0x84
	// Line 203, Address: 0x242f5c, Func Offset: 0x8c
	// Line 205, Address: 0x242f60, Func Offset: 0x90
	// Line 207, Address: 0x242f64, Func Offset: 0x94
	// Line 209, Address: 0x242f6c, Func Offset: 0x9c
	// Line 210, Address: 0x242f84, Func Offset: 0xb4
	// Line 214, Address: 0x242f90, Func Offset: 0xc0
	// Line 216, Address: 0x242f98, Func Offset: 0xc8
	// Line 217, Address: 0x242fa8, Func Offset: 0xd8
	// Line 219, Address: 0x242fac, Func Offset: 0xdc
	// Line 221, Address: 0x242fb0, Func Offset: 0xe0
	// Line 222, Address: 0x242fc0, Func Offset: 0xf0
	// Line 223, Address: 0x242fc8, Func Offset: 0xf8
	// Func End, Address: 0x242fe0, Func Offset: 0x110
}

// 
// Start address: 0x242fe0
int sfSqtAnimeDataControlSetData(_anon2* data_ctrl, void* data_addr, int data_size)
{
	// Line 227, Address: 0x242fe0, Func Offset: 0
	// Line 230, Address: 0x242fec, Func Offset: 0xc
	// Line 231, Address: 0x242ff8, Func Offset: 0x18
	// Line 233, Address: 0x243000, Func Offset: 0x20
	// Line 235, Address: 0x243004, Func Offset: 0x24
	// Line 237, Address: 0x243008, Func Offset: 0x28
	// Line 238, Address: 0x243014, Func Offset: 0x34
	// Line 239, Address: 0x24301c, Func Offset: 0x3c
	// Line 241, Address: 0x243020, Func Offset: 0x40
	// Line 243, Address: 0x243028, Func Offset: 0x48
	// Line 244, Address: 0x243030, Func Offset: 0x50
	// Func End, Address: 0x243040, Func Offset: 0x60
}

// 
// Start address: 0x243040
int sfSqtAnimeDataControlNeedNext(_anon2* data_ctrl)
{
	// Line 251, Address: 0x243040, Func Offset: 0
	// Line 253, Address: 0x243048, Func Offset: 0x8
	// Func End, Address: 0x243050, Func Offset: 0x10
}

// 
// Start address: 0x243050
_anon0* sfSqtAnimeDataControlGetHeader(_anon2* data_ctrl)
{
	// Line 259, Address: 0x243050, Func Offset: 0
	// Line 261, Address: 0x243060, Func Offset: 0x10
	// Func End, Address: 0x243068, Func Offset: 0x18
}

// 
// Start address: 0x243070
_anon1* sfSqtAnimeDataControlGetFrame(_anon2* data_ctrl, int offset)
{
	int n;
	// Line 269, Address: 0x243070, Func Offset: 0
	// Line 270, Address: 0x24307c, Func Offset: 0xc
	// Line 271, Address: 0x243088, Func Offset: 0x18
	// Line 273, Address: 0x2430a4, Func Offset: 0x34
	// Line 276, Address: 0x2430c0, Func Offset: 0x50
	// Func End, Address: 0x2430c8, Func Offset: 0x58
}

// 
// Start address: 0x2430d0
void sfSqtAnimeDataControlDiscardCurrent(_anon2* data_ctrl)
{
	int current;
	// Line 282, Address: 0x2430d0, Func Offset: 0
	// Line 284, Address: 0x2430d4, Func Offset: 0x4
	// Line 283, Address: 0x2430d8, Func Offset: 0x8
	// Line 284, Address: 0x2430dc, Func Offset: 0xc
	// Line 283, Address: 0x2430e4, Func Offset: 0x14
	// Line 284, Address: 0x2430ec, Func Offset: 0x1c
	// Line 287, Address: 0x2430f0, Func Offset: 0x20
	// Func End, Address: 0x2430f8, Func Offset: 0x28
}

