typedef struct shAnime3d;
typedef struct shClusterAnime;
typedef struct shSkelton;
typedef struct ClusterAnimeWork;
typedef struct Header;
typedef struct _AnimeInfo;
typedef struct shAttackInfo;
typedef union _anon0;
typedef struct Element1;
typedef struct Cluster1;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct _USXY;
typedef struct shBattleShot;
typedef struct _SXY;
typedef struct _anon2;
typedef struct _IXY;

typedef float(*type_8)(void*, int, int, short);
typedef float(*type_9)(void*, int, int, short);
typedef float(*type_12)(void*, int, int, short);

typedef unsigned char type_0[97];
typedef shClusterAnime type_1[32];
typedef unsigned int type_2[0];
typedef unsigned char type_3[20];
typedef float type_4[20];
typedef float type_5[20][32];
typedef shAttackInfo type_6[66];
typedef unsigned char type_7[14];
typedef unsigned char type_10[69];
typedef Element1 type_11[0];
typedef float(*type_13)(void*, int, int, short)[2];
typedef unsigned char type_14[14];
typedef float type_15[4];
typedef float type_16[4][4];

struct shAnime3d
{
	shSkelton* top;
	void* anime;
	void* frame_top;
	void* p_anime;
	void* p_frame_top;
	unsigned int frame_size;
	int total_count;
	_IXY c_count;
	_SXY c_speed;
	_SXY total_speed;
	_USXY cur_frame;
	char first_bone_type;
	char comp_type;
	_AnimeInfo* anim_a;
	_AnimeInfo* anim_b;
	_anon1 rot_neck;
	_anon1 rot_arms;
	_anon1 rot_body_neck;
	_anon1 rot_body;
	float scale;
};

struct shClusterAnime
{
	void* data;
	unsigned char used;
	unsigned char n_clusters;
	unsigned char is_repeat;
	unsigned char frame_updated;
	int frame_no;
	float* weights;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon2 src_m;
	_anon1 src_t;
	_anon2 des_m;
	_anon1 des_t;
	_anon1 axis;
	float theta;
	float xx;
	float yy;
	float zz;
	float xy;
	float yz;
	float zx;
	unsigned short c_count;
	unsigned short c_speed;
	char change;
	char reserved;
	char is_key;
	char pad;
	void* untouchable;
};

struct ClusterAnimeWork
{
	shClusterAnime ca[32];
};

struct Header
{
	unsigned int id;
	unsigned short revision;
	unsigned short flag;
	unsigned short n_clusters;
	unsigned short reserved_0;
	unsigned short n_frames;
	unsigned short reserved_1;
	unsigned int offsets[0];
};

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	char pad;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon0 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct Element1
{
	unsigned short frame;
	short weight;
};

struct Cluster1
{
	unsigned short n_keys;
	Element1 elements[0];
};

struct _anon1
{
	float x;
	float y;
	float z;
	float w;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _USXY
{
	unsigned short x;
	unsigned short y;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _SXY
{
	short x;
	short y;
};

struct _anon2
{
	float d[4][4];
};

struct _IXY
{
	int x;
	int y;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
float(*calc_func_list)(void*, int, int, short)[2];
ClusterAnimeWork sh2cluster;
float cluster_weight_data[20][32];
float(*CalcDummy)(void*, int, int, short);

unsigned int DataId(void* data);
unsigned int NClusters(void* data);
unsigned int NFrames(void* data);
void* NthCluster(void* data, int n);
float CalcDummy();
float Calc1(void* cluster, int frame, int n_frames, short f_counter);
void shCharacterInitCluster();
shClusterAnime* ClusterAnimeNew(int n_clusters, int index);
void ClusterAnimeDelete(shClusterAnime* cap, int index);
void ClearWeights(shClusterAnime* cap);
void ClusterAnimeSet(shClusterAnime* cap, void* data);
void ClusterAnimeExec(shClusterAnime* cap, shAnime3d* ap);
float* ClusterAnimeGetWeights(shClusterAnime* cap, float* weights);

// 
// Start address: 0x1258c0
unsigned int DataId(void* data)
{
	Header* header;
	// Line 86, Address: 0x1258c0, Func Offset: 0
	// Line 87, Address: 0x1258c4, Func Offset: 0x4
	// Func End, Address: 0x1258cc, Func Offset: 0xc
}

// 
// Start address: 0x1258d0
unsigned int NClusters(void* data)
{
	Header* header;
	// Line 97, Address: 0x1258d0, Func Offset: 0
	// Line 98, Address: 0x1258d4, Func Offset: 0x4
	// Func End, Address: 0x1258dc, Func Offset: 0xc
}

// 
// Start address: 0x1258e0
unsigned int NFrames(void* data)
{
	Header* header;
	// Line 108, Address: 0x1258e0, Func Offset: 0
	// Line 109, Address: 0x1258e4, Func Offset: 0x4
	// Func End, Address: 0x1258ec, Func Offset: 0xc
}

// 
// Start address: 0x1258f0
void* NthCluster(void* data, int n)
{
	Header* header;
	// Line 119, Address: 0x1258f0, Func Offset: 0
	// Line 120, Address: 0x125900, Func Offset: 0x10
	// Func End, Address: 0x125908, Func Offset: 0x18
}

// 
// Start address: 0x125910
float CalcDummy()
{
	// Line 127, Address: 0x125910, Func Offset: 0
	// Line 128, Address: 0x125914, Func Offset: 0x4
	// Func End, Address: 0x12591c, Func Offset: 0xc
}

// 
// Start address: 0x125920
float Calc1(void* cluster, int frame, int n_frames, short f_counter)
{
	float t;
	float t_pre;
	int mid2;
	int mid;
	int i1;
	int i0;
	Element1* ep;
	int n_keys;
	Cluster1* cp;
	// Line 208, Address: 0x125920, Func Offset: 0
	// Line 210, Address: 0x125940, Func Offset: 0x20
	// Line 211, Address: 0x125944, Func Offset: 0x24
	// Line 212, Address: 0x125948, Func Offset: 0x28
	// Line 213, Address: 0x12594c, Func Offset: 0x2c
	// Line 214, Address: 0x125950, Func Offset: 0x30
	// Line 223, Address: 0x125954, Func Offset: 0x34
	// Line 224, Address: 0x12595c, Func Offset: 0x3c
	// Line 227, Address: 0x125968, Func Offset: 0x48
	// Line 228, Address: 0x125974, Func Offset: 0x54
	// Line 231, Address: 0x12599c, Func Offset: 0x7c
	// Line 234, Address: 0x1259a8, Func Offset: 0x88
	// Line 235, Address: 0x1259ac, Func Offset: 0x8c
	// Line 236, Address: 0x1259b0, Func Offset: 0x90
	// Line 238, Address: 0x1259b4, Func Offset: 0x94
	// Line 239, Address: 0x1259e0, Func Offset: 0xc0
	// Line 245, Address: 0x1259e8, Func Offset: 0xc8
	// Line 246, Address: 0x1259f4, Func Offset: 0xd4
	// Line 247, Address: 0x1259f8, Func Offset: 0xd8
	// Line 248, Address: 0x125a00, Func Offset: 0xe0
	// Line 249, Address: 0x125a04, Func Offset: 0xe4
	// Line 250, Address: 0x125a08, Func Offset: 0xe8
	// Line 259, Address: 0x125a10, Func Offset: 0xf0
	// Line 260, Address: 0x125a38, Func Offset: 0x118
	// Line 261, Address: 0x125a3c, Func Offset: 0x11c
	// Line 263, Address: 0x125a58, Func Offset: 0x138
	// Line 264, Address: 0x125a5c, Func Offset: 0x13c
	// Line 266, Address: 0x125a60, Func Offset: 0x140
	// Line 267, Address: 0x125aa8, Func Offset: 0x188
	// Line 269, Address: 0x125acc, Func Offset: 0x1ac
	// Line 278, Address: 0x125aec, Func Offset: 0x1cc
	// Line 279, Address: 0x125b44, Func Offset: 0x224
	// Func End, Address: 0x125b68, Func Offset: 0x248
}

// 
// Start address: 0x125b70
void shCharacterInitCluster()
{
	// Line 313, Address: 0x125b70, Func Offset: 0
	// Line 314, Address: 0x125b78, Func Offset: 0x8
	// Line 315, Address: 0x125b90, Func Offset: 0x20
	// Func End, Address: 0x125ba0, Func Offset: 0x30
}

// 
// Start address: 0x125ba0
shClusterAnime* ClusterAnimeNew(int n_clusters, int index)
{
	shClusterAnime* cap;
	// Line 346, Address: 0x125ba0, Func Offset: 0
	// Line 366, Address: 0x125bbc, Func Offset: 0x1c
	// Line 368, Address: 0x125bcc, Func Offset: 0x2c
	// Line 369, Address: 0x125be0, Func Offset: 0x40
	// Line 370, Address: 0x125be8, Func Offset: 0x48
	// Line 371, Address: 0x125bec, Func Offset: 0x4c
	// Line 372, Address: 0x125bf4, Func Offset: 0x54
	// Line 373, Address: 0x125c10, Func Offset: 0x70
	// Line 375, Address: 0x125c44, Func Offset: 0xa4
	// Line 377, Address: 0x125c48, Func Offset: 0xa8
	// Func End, Address: 0x125c64, Func Offset: 0xc4
}

// 
// Start address: 0x125c70
void ClusterAnimeDelete(shClusterAnime* cap, int index)
{
	// Line 387, Address: 0x125c70, Func Offset: 0
	// Line 388, Address: 0x125c78, Func Offset: 0x8
	// Line 391, Address: 0x125c80, Func Offset: 0x10
	// Line 394, Address: 0x125c8c, Func Offset: 0x1c
	// Line 395, Address: 0x125cb4, Func Offset: 0x44
	// Func End, Address: 0x125cc4, Func Offset: 0x54
}

// 
// Start address: 0x125cd0
void ClearWeights(shClusterAnime* cap)
{
	int i;
	float* weights;
	int n_clusters;
	// Line 406, Address: 0x125cd0, Func Offset: 0
	// Line 410, Address: 0x125cd8, Func Offset: 0x8
	// Line 411, Address: 0x125cdc, Func Offset: 0xc
	// Line 412, Address: 0x125ce0, Func Offset: 0x10
	// Line 413, Address: 0x125cec, Func Offset: 0x1c
	// Line 414, Address: 0x125cf8, Func Offset: 0x28
	// Line 415, Address: 0x125d0c, Func Offset: 0x3c
	// Func End, Address: 0x125d14, Func Offset: 0x44
}

// 
// Start address: 0x125d20
void ClusterAnimeSet(shClusterAnime* cap, void* data)
{
	int data_id;
	int n_clusters;
	// Line 423, Address: 0x125d20, Func Offset: 0
	// Line 429, Address: 0x125d2c, Func Offset: 0xc
	// Line 433, Address: 0x125d34, Func Offset: 0x14
	// Line 434, Address: 0x125d3c, Func Offset: 0x1c
	// Line 435, Address: 0x125d40, Func Offset: 0x20
	// Line 436, Address: 0x125d48, Func Offset: 0x28
	// Line 439, Address: 0x125d50, Func Offset: 0x30
	// Line 440, Address: 0x125d5c, Func Offset: 0x3c
	// Line 441, Address: 0x125d7c, Func Offset: 0x5c
	// Line 442, Address: 0x125d8c, Func Offset: 0x6c
	// Line 445, Address: 0x125d94, Func Offset: 0x74
	// Line 446, Address: 0x125da0, Func Offset: 0x80
	// Line 447, Address: 0x125dac, Func Offset: 0x8c
	// Line 448, Address: 0x125dbc, Func Offset: 0x9c
	// Line 451, Address: 0x125dc4, Func Offset: 0xa4
	// Line 452, Address: 0x125dc8, Func Offset: 0xa8
	// Line 453, Address: 0x125dcc, Func Offset: 0xac
	// Line 454, Address: 0x125dd4, Func Offset: 0xb4
	// Func End, Address: 0x125de4, Func Offset: 0xc4
}

// 
// Start address: 0x125df0
void ClusterAnimeExec(shClusterAnime* cap, shAnime3d* ap)
{
	void* cluster;
	int i;
	float(*calc_func)(void*, int, int, short);
	short frame_counter;
	int total_counter;
	int revision;
	int frame;
	int n_clusters;
	int n_frames;
	Header* header;
	// Line 477, Address: 0x125df0, Func Offset: 0
	// Line 486, Address: 0x125e18, Func Offset: 0x28
	// Line 511, Address: 0x125e1c, Func Offset: 0x2c
	// Line 514, Address: 0x125e24, Func Offset: 0x34
	// Line 517, Address: 0x125e30, Func Offset: 0x40
	// Line 522, Address: 0x125e3c, Func Offset: 0x4c
	// Line 524, Address: 0x125e48, Func Offset: 0x58
	// Line 526, Address: 0x125e54, Func Offset: 0x64
	// Line 528, Address: 0x125e58, Func Offset: 0x68
	// Line 529, Address: 0x125e5c, Func Offset: 0x6c
	// Line 531, Address: 0x125e64, Func Offset: 0x74
	// Line 532, Address: 0x125e68, Func Offset: 0x78
	// Line 533, Address: 0x125e74, Func Offset: 0x84
	// Line 537, Address: 0x125e7c, Func Offset: 0x8c
	// Line 538, Address: 0x125e8c, Func Offset: 0x9c
	// Line 540, Address: 0x125e9c, Func Offset: 0xac
	// Line 542, Address: 0x125ea4, Func Offset: 0xb4
	// Line 543, Address: 0x125eac, Func Offset: 0xbc
	// Line 544, Address: 0x125ec0, Func Offset: 0xd0
	// Line 546, Address: 0x125ec4, Func Offset: 0xd4
	// Line 550, Address: 0x125ec8, Func Offset: 0xd8
	// Line 552, Address: 0x125ed4, Func Offset: 0xe4
	// Line 553, Address: 0x125ed8, Func Offset: 0xe8
	// Line 556, Address: 0x125edc, Func Offset: 0xec
	// Line 558, Address: 0x125ee0, Func Offset: 0xf0
	// Line 559, Address: 0x125ee4, Func Offset: 0xf4
	// Line 560, Address: 0x125ef0, Func Offset: 0x100
	// Line 562, Address: 0x125f08, Func Offset: 0x118
	// Line 563, Address: 0x125f10, Func Offset: 0x120
	// Line 566, Address: 0x125f18, Func Offset: 0x128
	// Line 569, Address: 0x125f24, Func Offset: 0x134
	// Line 571, Address: 0x125f30, Func Offset: 0x140
	// Line 572, Address: 0x125f40, Func Offset: 0x150
	// Line 584, Address: 0x125f68, Func Offset: 0x178
	// Line 597, Address: 0x125f7c, Func Offset: 0x18c
	// Func End, Address: 0x125fa8, Func Offset: 0x1b8
}

// 
// Start address: 0x125fb0
float* ClusterAnimeGetWeights(shClusterAnime* cap, float* weights)
{
	int i;
	int n_clusters;
	// Line 644, Address: 0x125fb0, Func Offset: 0
	// Line 648, Address: 0x125fb8, Func Offset: 0x8
	// Line 649, Address: 0x125fe4, Func Offset: 0x34
	// Line 651, Address: 0x126014, Func Offset: 0x64
	// Line 652, Address: 0x126018, Func Offset: 0x68
	// Line 655, Address: 0x126028, Func Offset: 0x78
	// Line 656, Address: 0x12603c, Func Offset: 0x8c
	// Line 658, Address: 0x12604c, Func Offset: 0x9c
	// Line 659, Address: 0x126050, Func Offset: 0xa0
	// Func End, Address: 0x126060, Func Offset: 0xb0
}

