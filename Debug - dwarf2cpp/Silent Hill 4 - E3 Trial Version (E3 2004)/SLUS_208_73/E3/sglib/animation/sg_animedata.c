typedef struct _anon0;
typedef struct _anon1;
typedef struct sgAnmKeyFrames;
typedef struct _anon2;
typedef struct _anon3;
typedef struct sgAnmKeys;
typedef struct sgAnmTimeTable;
typedef struct _anon4;


typedef unsigned int type_0[0];
typedef sgAnmKeys* type_1[0];
typedef unsigned short type_2[0];

struct _anon0
{
	unsigned int type_id;
	short n_connects;
	short n_ik_chains;
	int connects_offset;
	int ik_chains_offset;
	int pad;
};

struct _anon1
{
	unsigned int type_id;
	short total_time;
	short loop;
	int reserved_a;
	int reserved_b;
	unsigned int data[0];
};

struct sgAnmKeyFrames
{
	unsigned int type_id;
	short n_data;
	short relative;
	sgAnmKeys* data[0];
};

struct _anon2
{
	unsigned char bone_no;
	char parent_no;
};

struct _anon3
{
	unsigned char handle_no;
	char ikhandle_type;
	char start_no;
	char effector_no;
};

struct sgAnmKeys
{
	short key_type;
	short reserved;
	short nb_keys;
	short user_reserved;
	unsigned int time_table_offset;
	unsigned int keys_offset;
};

struct sgAnmTimeTable
{
	unsigned short t[0];
};

struct _anon4
{
	unsigned int type_id;
};


unsigned int sgAnmDataTypeId(_anon1* data);
int sgAnmDataTotalTime(_anon1* data);
int sgAnmDataIsLoop(_anon1* data);
_anon0* sgAnmDataBoneConnects(_anon1* data);
int sgAnmDataNAnime(_anon1* data);
_anon4* sgAnmDataNth(_anon1* data, int n);
int sgAnmNBoneConnects(_anon0* bconnects);
int sgAnmNIKBoneConnects(_anon0* bconnects);
_anon2* sgAnmBoneConnectsNth(_anon0* bconnects, int n);
_anon3* sgAnmIKBoneConnectsNth(_anon0* bconnects, int n);
int sgAnmKeyFramesNAnime(sgAnmKeyFrames* kframes);
sgAnmKeys* sgAnmKeyFramesNth(sgAnmKeyFrames* kframes, int n);
int sgAnmKeysNKeys(sgAnmKeys* keys);
int sgAnmKeysType(sgAnmKeys* keys);
unsigned short sgAnmKeysTime(sgAnmKeys* keys, int n);
void* sgAnmKeysSeries(sgAnmKeys* keys);
int FindKey(sgAnmTimeTable* table, int nb_keys, int time);
int sgAnmKeysFindKeyNo(sgAnmKeys* data, int time);

// 
// Start address: 0x144d00
unsigned int sgAnmDataTypeId(_anon1* data)
{
	// Line 16, Address: 0x144d00, Func Offset: 0
	// Func End, Address: 0x144d08, Func Offset: 0x8
}

// 
// Start address: 0x144d10
int sgAnmDataTotalTime(_anon1* data)
{
	// Line 22, Address: 0x144d10, Func Offset: 0
	// Func End, Address: 0x144d18, Func Offset: 0x8
}

// 
// Start address: 0x144d20
int sgAnmDataIsLoop(_anon1* data)
{
	// Line 28, Address: 0x144d20, Func Offset: 0
	// Func End, Address: 0x144d28, Func Offset: 0x8
}

// 
// Start address: 0x144d30
_anon0* sgAnmDataBoneConnects(_anon1* data)
{
	int n_anime;
	int n;
	void* target_data;
	// Line 32, Address: 0x144d30, Func Offset: 0
	// Line 37, Address: 0x144d48, Func Offset: 0x18
	// Line 38, Address: 0x144d54, Func Offset: 0x24
	// Line 39, Address: 0x144d60, Func Offset: 0x30
	// Line 40, Address: 0x144d70, Func Offset: 0x40
	// Line 41, Address: 0x144d88, Func Offset: 0x58
	// Line 42, Address: 0x144d90, Func Offset: 0x60
	// Line 43, Address: 0x144da0, Func Offset: 0x70
	// Line 44, Address: 0x144da8, Func Offset: 0x78
	// Func End, Address: 0x144dc4, Func Offset: 0x94
}

// 
// Start address: 0x144dd0
int sgAnmDataNAnime(_anon1* data)
{
	unsigned int* table;
	int n;
	// Line 54, Address: 0x144dd0, Func Offset: 0
	// Line 53, Address: 0x144dd4, Func Offset: 0x4
	// Line 54, Address: 0x144dd8, Func Offset: 0x8
	// Line 56, Address: 0x144e00, Func Offset: 0x30
	// Func End, Address: 0x144e08, Func Offset: 0x38
}

// 
// Start address: 0x144e10
_anon4* sgAnmDataNth(_anon1* data, int n)
{
	unsigned int* table_ptr;
	// Line 65, Address: 0x144e10, Func Offset: 0
	// Line 64, Address: 0x144e14, Func Offset: 0x4
	// Line 65, Address: 0x144e18, Func Offset: 0x8
	// Line 66, Address: 0x144e1c, Func Offset: 0xc
	// Line 67, Address: 0x144e20, Func Offset: 0x10
	// Func End, Address: 0x144e28, Func Offset: 0x18
}

// 
// Start address: 0x144e30
int sgAnmNBoneConnects(_anon0* bconnects)
{
	// Line 76, Address: 0x144e30, Func Offset: 0
	// Func End, Address: 0x144e38, Func Offset: 0x8
}

// 
// Start address: 0x144e40
int sgAnmNIKBoneConnects(_anon0* bconnects)
{
	// Line 82, Address: 0x144e40, Func Offset: 0
	// Func End, Address: 0x144e48, Func Offset: 0x8
}

// 
// Start address: 0x144e50
_anon2* sgAnmBoneConnectsNth(_anon0* bconnects, int n)
{
	int offset;
	// Line 87, Address: 0x144e50, Func Offset: 0
	// Line 88, Address: 0x144e54, Func Offset: 0x4
	// Line 90, Address: 0x144e5c, Func Offset: 0xc
	// Func End, Address: 0x144e64, Func Offset: 0x14
}

// 
// Start address: 0x144e70
_anon3* sgAnmIKBoneConnectsNth(_anon0* bconnects, int n)
{
	int offset;
	// Line 95, Address: 0x144e70, Func Offset: 0
	// Line 96, Address: 0x144e74, Func Offset: 0x4
	// Line 98, Address: 0x144e7c, Func Offset: 0xc
	// Func End, Address: 0x144e84, Func Offset: 0x14
}

// 
// Start address: 0x144e90
int sgAnmKeyFramesNAnime(sgAnmKeyFrames* kframes)
{
	unsigned int* table_ptr;
	int n;
	// Line 108, Address: 0x144e90, Func Offset: 0
	// Line 106, Address: 0x144e94, Func Offset: 0x4
	// Line 108, Address: 0x144e98, Func Offset: 0x8
	// Line 110, Address: 0x144ec0, Func Offset: 0x30
	// Func End, Address: 0x144ec8, Func Offset: 0x38
}

// 
// Start address: 0x144ed0
sgAnmKeys* sgAnmKeyFramesNth(sgAnmKeyFrames* kframes, int n)
{
	unsigned int* table_ptr;
	// Line 115, Address: 0x144ed0, Func Offset: 0
	// Line 114, Address: 0x144ed4, Func Offset: 0x4
	// Line 115, Address: 0x144ed8, Func Offset: 0x8
	// Line 116, Address: 0x144edc, Func Offset: 0xc
	// Line 117, Address: 0x144ee0, Func Offset: 0x10
	// Func End, Address: 0x144ee8, Func Offset: 0x18
}

// 
// Start address: 0x144ef0
int sgAnmKeysNKeys(sgAnmKeys* keys)
{
	// Line 127, Address: 0x144ef0, Func Offset: 0
	// Func End, Address: 0x144ef8, Func Offset: 0x8
}

// 
// Start address: 0x144f00
int sgAnmKeysType(sgAnmKeys* keys)
{
	// Line 133, Address: 0x144f00, Func Offset: 0
	// Func End, Address: 0x144f08, Func Offset: 0x8
}

// 
// Start address: 0x144f10
unsigned short sgAnmKeysTime(sgAnmKeys* keys, int n)
{
	// Line 148, Address: 0x144f10, Func Offset: 0
	// Line 149, Address: 0x144f20, Func Offset: 0x10
	// Func End, Address: 0x144f28, Func Offset: 0x18
}

// 
// Start address: 0x144f30
void* sgAnmKeysSeries(sgAnmKeys* keys)
{
	// Line 155, Address: 0x144f30, Func Offset: 0
	// Line 156, Address: 0x144f34, Func Offset: 0x4
	// Func End, Address: 0x144f3c, Func Offset: 0xc
}

// 
// Start address: 0x144f40
int FindKey(sgAnmTimeTable* table, int nb_keys, int time)
{
	int n0;
	int n1;
	unsigned short* t;
	int n;
	// Line 171, Address: 0x144f40, Func Offset: 0
	// Line 173, Address: 0x144f44, Func Offset: 0x4
	// Line 174, Address: 0x144f5c, Func Offset: 0x1c
	// Line 177, Address: 0x144f64, Func Offset: 0x24
	// Line 178, Address: 0x144f68, Func Offset: 0x28
	// Line 179, Address: 0x144f70, Func Offset: 0x30
	// Line 181, Address: 0x144f88, Func Offset: 0x48
	// Line 182, Address: 0x144f90, Func Offset: 0x50
	// Line 184, Address: 0x144f94, Func Offset: 0x54
	// Line 182, Address: 0x144f98, Func Offset: 0x58
	// Line 184, Address: 0x144f9c, Func Offset: 0x5c
	// Line 187, Address: 0x144fa8, Func Offset: 0x68
	// Line 188, Address: 0x144fb0, Func Offset: 0x70
	// Func End, Address: 0x144fb8, Func Offset: 0x78
}

// 
// Start address: 0x144fc0
int sgAnmKeysFindKeyNo(sgAnmKeys* data, int time)
{
	int n0;
	int nb_keys;
	// Line 198, Address: 0x144fc0, Func Offset: 0
	// Line 205, Address: 0x144fd4, Func Offset: 0x14
	// Line 207, Address: 0x144fdc, Func Offset: 0x1c
	// Line 210, Address: 0x144ff0, Func Offset: 0x30
	// Func End, Address: 0x145004, Func Offset: 0x44
}

