typedef struct Cluster1;
typedef struct Header;
typedef struct _AnimeInfo;
typedef struct shClusterAnime;
typedef struct Element1;
typedef struct shAnime3d;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct _anon0;
typedef struct shSkelton;
typedef struct _USXY;
typedef struct ClusterAnimeWork;
typedef struct _SXY;
typedef struct _anon1;
typedef struct shAttackInfo;
typedef union _anon2;

typedef float(*type_0)(void*, int, int, short);
typedef float(*type_2)(void*, int, int, short);
typedef float(*type_7)(void*, int, int, short);

typedef Element1 type_1[0];
typedef unsigned char type_3[13];
typedef unsigned char type_4[34];
typedef unsigned char type_5[10];
typedef shAttackInfo type_6[46];
typedef shClusterAnime type_8[32];
typedef float type_9[4];
typedef float type_10[4][4];
typedef unsigned int type_11[0];
typedef unsigned char type_12[10];
typedef float type_13[20];
typedef float type_14[20][32];
typedef float(*type_15)(void*, int, int, short)[2];

struct Cluster1
{
	unsigned short n_keys;
	Element1 elements[0];
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
	unsigned char pad;
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

struct Element1
{
	unsigned short frame;
	short weight;
};

struct shAnime3d
{
	shSkelton* top;
	void* anime;
	void* frame_top;
	void* p_anime;
	void* p_frame_top;
	unsigned int frame_size;
	int total_count;
	_SXY c_count;
	_SXY c_speed;
	_SXY total_speed;
	_USXY cur_frame;
	char first_bone_type;
	char comp_type;
	_AnimeInfo* anim_a;
	_AnimeInfo* anim_b;
	_anon0 rot_neck;
	_anon0 rot_arms;
	_anon0 rot_body_neck;
	_anon0 rot_body;
	float scale;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon1 src_m;
	_anon0 src_t;
	_anon1 des_m;
	_anon0 des_t;
	_anon0 axis;
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

struct _USXY
{
	unsigned short x;
	unsigned short y;
};

struct ClusterAnimeWork
{
	shClusterAnime ca[32];
};

struct _SXY
{
	short x;
	short y;
};

struct _anon1
{
	float d[4][4];
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon2 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
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
// Start address: 0x12e430
unsigned int DataId(void* data)
{
	Header* header;
	// Line 74, Address: 0x12e430, Func Offset: 0
	// Line 75, Address: 0x12e43c, Func Offset: 0xc
	// Line 76, Address: 0x12e440, Func Offset: 0x10
	// Line 77, Address: 0x12e444, Func Offset: 0x14
	// Func End, Address: 0x12e454, Func Offset: 0x24
}

// 
// Start address: 0x12e460
unsigned int NClusters(void* data)
{
	Header* header;
	// Line 85, Address: 0x12e460, Func Offset: 0
	// Line 86, Address: 0x12e46c, Func Offset: 0xc
	// Line 87, Address: 0x12e470, Func Offset: 0x10
	// Line 88, Address: 0x12e478, Func Offset: 0x18
	// Func End, Address: 0x12e488, Func Offset: 0x28
}

// 
// Start address: 0x12e490
unsigned int NFrames(void* data)
{
	Header* header;
	// Line 96, Address: 0x12e490, Func Offset: 0
	// Line 97, Address: 0x12e49c, Func Offset: 0xc
	// Line 98, Address: 0x12e4a0, Func Offset: 0x10
	// Line 99, Address: 0x12e4a8, Func Offset: 0x18
	// Func End, Address: 0x12e4b8, Func Offset: 0x28
}

// 
// Start address: 0x12e4c0
void* NthCluster(void* data, int n)
{
	Header* header;
	// Line 107, Address: 0x12e4c0, Func Offset: 0
	// Line 108, Address: 0x12e4d0, Func Offset: 0x10
	// Line 109, Address: 0x12e4d4, Func Offset: 0x14
	// Line 110, Address: 0x12e4ec, Func Offset: 0x2c
	// Func End, Address: 0x12e4fc, Func Offset: 0x3c
}

// 
// Start address: 0x12e500
float CalcDummy()
{
	// Line 116, Address: 0x12e500, Func Offset: 0
	// Line 117, Address: 0x12e504, Func Offset: 0x4
	// Line 118, Address: 0x12e508, Func Offset: 0x8
	// Func End, Address: 0x12e514, Func Offset: 0x14
}

// 
// Start address: 0x12e520
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
	// Line 198, Address: 0x12e520, Func Offset: 0
	// Line 199, Address: 0x12e554, Func Offset: 0x34
	// Line 200, Address: 0x12e558, Func Offset: 0x38
	// Line 201, Address: 0x12e560, Func Offset: 0x40
	// Line 202, Address: 0x12e564, Func Offset: 0x44
	// Line 203, Address: 0x12e568, Func Offset: 0x48
	// Line 204, Address: 0x12e56c, Func Offset: 0x4c
	// Line 213, Address: 0x12e574, Func Offset: 0x54
	// Line 214, Address: 0x12e57c, Func Offset: 0x5c
	// Line 217, Address: 0x12e588, Func Offset: 0x68
	// Line 218, Address: 0x12e594, Func Offset: 0x74
	// Line 221, Address: 0x12e5bc, Func Offset: 0x9c
	// Line 224, Address: 0x12e5d0, Func Offset: 0xb0
	// Line 225, Address: 0x12e5d4, Func Offset: 0xb4
	// Line 226, Address: 0x12e5d8, Func Offset: 0xb8
	// Line 227, Address: 0x12e5e4, Func Offset: 0xc4
	// Line 228, Address: 0x12e5f4, Func Offset: 0xd4
	// Line 229, Address: 0x12e624, Func Offset: 0x104
	// Line 235, Address: 0x12e62c, Func Offset: 0x10c
	// Line 236, Address: 0x12e64c, Func Offset: 0x12c
	// Line 237, Address: 0x12e650, Func Offset: 0x130
	// Line 238, Address: 0x12e658, Func Offset: 0x138
	// Line 239, Address: 0x12e65c, Func Offset: 0x13c
	// Line 240, Address: 0x12e660, Func Offset: 0x140
	// Line 249, Address: 0x12e668, Func Offset: 0x148
	// Line 250, Address: 0x12e6ac, Func Offset: 0x18c
	// Line 251, Address: 0x12e6b0, Func Offset: 0x190
	// Line 253, Address: 0x12e6f4, Func Offset: 0x1d4
	// Line 254, Address: 0x12e6f8, Func Offset: 0x1d8
	// Line 256, Address: 0x12e6fc, Func Offset: 0x1dc
	// Line 257, Address: 0x12e758, Func Offset: 0x238
	// Line 259, Address: 0x12e7a4, Func Offset: 0x284
	// Line 268, Address: 0x12e7d4, Func Offset: 0x2b4
	// Line 269, Address: 0x12e834, Func Offset: 0x314
	// Func End, Address: 0x12e860, Func Offset: 0x340
}

// 
// Start address: 0x12e860
void shCharacterInitCluster()
{
	// Line 303, Address: 0x12e860, Func Offset: 0
	// Line 304, Address: 0x12e868, Func Offset: 0x8
	// Line 305, Address: 0x12e880, Func Offset: 0x20
	// Func End, Address: 0x12e890, Func Offset: 0x30
}

// 
// Start address: 0x12e890
shClusterAnime* ClusterAnimeNew(int n_clusters, int index)
{
	shClusterAnime* cap;
	// Line 336, Address: 0x12e890, Func Offset: 0
	// Line 356, Address: 0x12e8a4, Func Offset: 0x14
	// Line 358, Address: 0x12e8b8, Func Offset: 0x28
	// Line 359, Address: 0x12e8cc, Func Offset: 0x3c
	// Line 360, Address: 0x12e8d4, Func Offset: 0x44
	// Line 361, Address: 0x12e8e0, Func Offset: 0x50
	// Line 362, Address: 0x12e8ec, Func Offset: 0x5c
	// Line 363, Address: 0x12e90c, Func Offset: 0x7c
	// Line 365, Address: 0x12e93c, Func Offset: 0xac
	// Line 367, Address: 0x12e940, Func Offset: 0xb0
	// Func End, Address: 0x12e954, Func Offset: 0xc4
}

// 
// Start address: 0x12e960
void ClusterAnimeDelete(shClusterAnime* cap, int index)
{
	// Line 377, Address: 0x12e960, Func Offset: 0
	// Line 378, Address: 0x12e970, Func Offset: 0x10
	// Line 381, Address: 0x12e97c, Func Offset: 0x1c
	// Line 384, Address: 0x12e98c, Func Offset: 0x2c
	// Line 385, Address: 0x12e9b8, Func Offset: 0x58
	// Func End, Address: 0x12e9c8, Func Offset: 0x68
}

// 
// Start address: 0x12e9d0
void ClearWeights(shClusterAnime* cap)
{
	int i;
	float* weights;
	int n_clusters;
	// Line 391, Address: 0x12e9d0, Func Offset: 0
	// Line 396, Address: 0x12e9e4, Func Offset: 0x14
	// Line 400, Address: 0x12e9f0, Func Offset: 0x20
	// Line 401, Address: 0x12e9fc, Func Offset: 0x2c
	// Line 402, Address: 0x12ea04, Func Offset: 0x34
	// Line 403, Address: 0x12ea10, Func Offset: 0x40
	// Line 404, Address: 0x12ea20, Func Offset: 0x50
	// Line 405, Address: 0x12ea34, Func Offset: 0x64
	// Func End, Address: 0x12ea4c, Func Offset: 0x7c
}

// 
// Start address: 0x12ea50
void ClusterAnimeSet(shClusterAnime* cap, void* data)
{
	int data_id;
	int n_clusters;
	// Line 413, Address: 0x12ea50, Func Offset: 0
	// Line 417, Address: 0x12ea68, Func Offset: 0x18
	// Line 418, Address: 0x12ea98, Func Offset: 0x48
	// Line 420, Address: 0x12eacc, Func Offset: 0x7c
	// Line 421, Address: 0x12ead8, Func Offset: 0x88
	// Line 422, Address: 0x12eae0, Func Offset: 0x90
	// Line 423, Address: 0x12eaec, Func Offset: 0x9c
	// Line 426, Address: 0x12eaf4, Func Offset: 0xa4
	// Line 427, Address: 0x12eb04, Func Offset: 0xb4
	// Line 428, Address: 0x12eb24, Func Offset: 0xd4
	// Line 429, Address: 0x12eb34, Func Offset: 0xe4
	// Line 432, Address: 0x12eb3c, Func Offset: 0xec
	// Line 433, Address: 0x12eb4c, Func Offset: 0xfc
	// Line 434, Address: 0x12eb60, Func Offset: 0x110
	// Line 435, Address: 0x12eb70, Func Offset: 0x120
	// Line 438, Address: 0x12eb78, Func Offset: 0x128
	// Line 439, Address: 0x12eb84, Func Offset: 0x134
	// Line 440, Address: 0x12eb8c, Func Offset: 0x13c
	// Line 441, Address: 0x12eb98, Func Offset: 0x148
	// Func End, Address: 0x12ebb0, Func Offset: 0x160
}

// 
// Start address: 0x12ebb0
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
	// Line 464, Address: 0x12ebb0, Func Offset: 0
	// Line 473, Address: 0x12ebe4, Func Offset: 0x34
	// Line 492, Address: 0x12ebe8, Func Offset: 0x38
	// Line 495, Address: 0x12ebf4, Func Offset: 0x44
	// Line 498, Address: 0x12ec04, Func Offset: 0x54
	// Line 502, Address: 0x12ec14, Func Offset: 0x64
	// Line 503, Address: 0x12ec1c, Func Offset: 0x6c
	// Line 505, Address: 0x12ec2c, Func Offset: 0x7c
	// Line 507, Address: 0x12ec3c, Func Offset: 0x8c
	// Line 508, Address: 0x12ec44, Func Offset: 0x94
	// Line 509, Address: 0x12ec48, Func Offset: 0x98
	// Line 510, Address: 0x12ec4c, Func Offset: 0x9c
	// Line 512, Address: 0x12ec54, Func Offset: 0xa4
	// Line 513, Address: 0x12ec5c, Func Offset: 0xac
	// Line 514, Address: 0x12ec68, Func Offset: 0xb8
	// Line 518, Address: 0x12ec74, Func Offset: 0xc4
	// Line 519, Address: 0x12ec88, Func Offset: 0xd8
	// Line 520, Address: 0x12ec9c, Func Offset: 0xec
	// Line 521, Address: 0x12eca4, Func Offset: 0xf4
	// Line 523, Address: 0x12ecb4, Func Offset: 0x104
	// Line 524, Address: 0x12ecbc, Func Offset: 0x10c
	// Line 525, Address: 0x12ecd4, Func Offset: 0x124
	// Line 526, Address: 0x12ece0, Func Offset: 0x130
	// Line 527, Address: 0x12ecec, Func Offset: 0x13c
	// Line 531, Address: 0x12ecf0, Func Offset: 0x140
	// Line 533, Address: 0x12ed00, Func Offset: 0x150
	// Line 534, Address: 0x12ed08, Func Offset: 0x158
	// Line 537, Address: 0x12ed1c, Func Offset: 0x16c
	// Line 539, Address: 0x12ed24, Func Offset: 0x174
	// Line 540, Address: 0x12ed30, Func Offset: 0x180
	// Line 541, Address: 0x12ed40, Func Offset: 0x190
	// Line 543, Address: 0x12ed5c, Func Offset: 0x1ac
	// Line 544, Address: 0x12ed64, Func Offset: 0x1b4
	// Line 547, Address: 0x12ed6c, Func Offset: 0x1bc
	// Line 550, Address: 0x12ed7c, Func Offset: 0x1cc
	// Line 552, Address: 0x12ed88, Func Offset: 0x1d8
	// Line 553, Address: 0x12eda0, Func Offset: 0x1f0
	// Line 565, Address: 0x12edcc, Func Offset: 0x21c
	// Line 567, Address: 0x12eddc, Func Offset: 0x22c
	// Func End, Address: 0x12ee10, Func Offset: 0x260
}

// 
// Start address: 0x12ee10
float* ClusterAnimeGetWeights(shClusterAnime* cap, float* weights)
{
	int i;
	int n_clusters;
	// Line 614, Address: 0x12ee10, Func Offset: 0
	// Line 618, Address: 0x12ee28, Func Offset: 0x18
	// Line 619, Address: 0x12ee58, Func Offset: 0x48
	// Line 621, Address: 0x12ee8c, Func Offset: 0x7c
	// Line 622, Address: 0x12ee98, Func Offset: 0x88
	// Line 625, Address: 0x12eea4, Func Offset: 0x94
	// Line 626, Address: 0x12eec8, Func Offset: 0xb8
	// Line 628, Address: 0x12eedc, Func Offset: 0xcc
	// Line 629, Address: 0x12eee0, Func Offset: 0xd0
	// Func End, Address: 0x12eef8, Func Offset: 0xe8
}

