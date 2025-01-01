typedef enum EnemyKind : unsigned char;
typedef enum _enum : unsigned char;


typedef int type_0[44];
typedef int type_1[5];
typedef int type_2[3];
typedef int type_3[50];
typedef int type_4[5];
typedef int type_5[4];
typedef int type_6[3];
typedef int type_7[38];
typedef int type_8[2];
typedef int type_9[27];
typedef int type_10[39];
typedef int type_11[5];
typedef int type_12[80];
typedef int type_13[10];
typedef int type_14[2];
typedef int type_15[41];
typedef int type_16[5];
typedef int type_17[29];
typedef int type_18[20];
typedef int type_19[23];
typedef int type_20[50];
typedef int type_21[5];
typedef int type_22[21];
typedef int type_23[2];
typedef int type_24[35];
typedef int type_25[2];
typedef int type_26[28];

enum EnemyKind : unsigned char
{
	ENEMY_KIND_NOTHING,
	ENEMY_KIND_CELL,
	ENEMY_KIND_MUSH,
	ENEMY_KIND_BUZZ,
	ENEMY_KIND_MM,
	ENEMY_KIND_WALLMAN,
	ENEMY_KIND_WHEEL,
	ENEMY_KIND_JINMEN,
	ENEMY_KIND_TWINS,
	ENEMY_KIND_HIL,
	ENEMY_KIND_HYENA,
	ENEMY_KIND_MULTI,
	ENEMY_KIND_PICKGIRL,
	ENEMY_KIND_FLAMES,
	ENEMY_KIND_FAT,
	ENEMY_KIND_SCRATCH,
	ENEMY_KIND_KILLER,
	ENEMY_KIND_NURSE,
	ENEMY_KIND_SAMPLE,
	ENEMY_KIND_MAX,
	ENEMY_KIND_TEST00 = 0,
	ENEMY_KIND_ALL = 0x13
};

enum _enum : unsigned char
{
	GAME_STAGE_DUMMY,
	GAME_STAGE_3LDK,
	GAME_STAGE_SUBWAY,
	GAME_STAGE_FOREST,
	GAME_STAGE_WATER,
	GAME_STAGE_BUILDING,
	GAME_STAGE_HOME,
	GAME_STAGE_HOSPITAL,
	GAME_STAGE_PAST_HOME,
	GAME_STAGE_LAST,
	GAME_STAGE_TUNNEL,
	GAME_STAGE_SPIRAL,
	GAME_STAGE_TEST,
	GAME_STAGE_MAX
};

int mush_anm[2];
int mush2_anm[2];
int buzz_anm[20];
int mmz_anm_sb05[5];
int mmz_anm_sb14[5];
int mmz_anm_fr03_1[5];
int mmz_anm_fr03_2[5];
int mmz_anm_mz32_1[2];
int mmz_anm_mz32_2[2];
int mmz_anm_mz32_3[3];
int mmz_anm_bd11[5];
int wallman_anm[28];
int wallman_dek_anm[27];
int kabeboss_anm[23];
int wheel_anm[3];
int jinmen_anm[80];
int twins_anm[21];
int hil_anm[4];
int multi_anm[41];
int pickgirl_anm[35];
int flames_anm[38];
int fat_anm[29];
int scratch_anm[44];
int hyena_anm[39];
int killer_anm[50];
int killl_anm[50];
int klsp_anm[10];

int check_mush_type();
int EnemyModelDataID(EnemyKind kind, int type);
int EnemyModelTextureID(EnemyKind kind, int type);
int EnemyModelShadowID(EnemyKind kind, int type);
int EnemyModelAnimeID(EnemyKind kind, int type, int anime);
int EnemyItemModelDataID(int item_kind);
int EnemyItemTextureDataID(int item_kind);
int EnemyWeaponModelDataID(int item_kind);
int EnemyWeaponTextureDataID(int item_kind);
int EnemyWeaponShadowDataID(int item_kind);
void* EnemyModelDataAddress(EnemyKind kind, int type);
void* EnemyModelTextureDataAddress(EnemyKind kind, int type);
void* EnemyModelShadowDataAddress(EnemyKind kind, int type);
void* EnemyModelAnimeDataAddress(EnemyKind kind, int type, int anime);
void* EnemyWeaponModelDataAddress(int item_kind);
void* EnemyWeaponTextureDataAddress(int item_kind);
void* EnemyWeaponShadowDataAddress(int item_kind);

// 
// Start address: 0x19e370
int check_mush_type()
{
	_enum stage;
	int scene;
	// Line 695, Address: 0x19e370, Func Offset: 0
	// Line 696, Address: 0x19e378, Func Offset: 0x8
	// Line 697, Address: 0x19e380, Func Offset: 0x10
	// Line 698, Address: 0x19e38c, Func Offset: 0x1c
	// Line 699, Address: 0x19e3a0, Func Offset: 0x30
	// Line 701, Address: 0x19e3a8, Func Offset: 0x38
	// Line 702, Address: 0x19e3bc, Func Offset: 0x4c
	// Line 703, Address: 0x19e3c4, Func Offset: 0x54
	// Line 704, Address: 0x19e3c8, Func Offset: 0x58
	// Line 705, Address: 0x19e3d0, Func Offset: 0x60
	// Func End, Address: 0x19e3e0, Func Offset: 0x70
}

// 
// Start address: 0x19e3e0
int EnemyModelDataID(EnemyKind kind, int type)
{
	int id;
	// Line 715, Address: 0x19e3e0, Func Offset: 0
	// Line 713, Address: 0x19e3e4, Func Offset: 0x4
	// Line 715, Address: 0x19e3e8, Func Offset: 0x8
	// Line 713, Address: 0x19e3ec, Func Offset: 0xc
	// Line 715, Address: 0x19e3f0, Func Offset: 0x10
	// Line 716, Address: 0x19e414, Func Offset: 0x34
	// Line 717, Address: 0x19e418, Func Offset: 0x38
	// Line 719, Address: 0x19e420, Func Offset: 0x40
	// Line 720, Address: 0x19e434, Func Offset: 0x54
	// Line 721, Address: 0x19e438, Func Offset: 0x58
	// Line 722, Address: 0x19e43c, Func Offset: 0x5c
	// Line 723, Address: 0x19e444, Func Offset: 0x64
	// Line 724, Address: 0x19e448, Func Offset: 0x68
	// Line 727, Address: 0x19e44c, Func Offset: 0x6c
	// Line 728, Address: 0x19e454, Func Offset: 0x74
	// Line 729, Address: 0x19e458, Func Offset: 0x78
	// Line 730, Address: 0x19e474, Func Offset: 0x94
	// Line 731, Address: 0x19e478, Func Offset: 0x98
	// Line 732, Address: 0x19e47c, Func Offset: 0x9c
	// Line 733, Address: 0x19e484, Func Offset: 0xa4
	// Line 734, Address: 0x19e488, Func Offset: 0xa8
	// Line 737, Address: 0x19e48c, Func Offset: 0xac
	// Line 738, Address: 0x19e494, Func Offset: 0xb4
	// Line 739, Address: 0x19e498, Func Offset: 0xb8
	// Line 740, Address: 0x19e49c, Func Offset: 0xbc
	// Line 741, Address: 0x19e4a4, Func Offset: 0xc4
	// Line 742, Address: 0x19e4a8, Func Offset: 0xc8
	// Line 744, Address: 0x19e4e0, Func Offset: 0x100
	// Line 745, Address: 0x19e4e4, Func Offset: 0x104
	// Line 746, Address: 0x19e4ec, Func Offset: 0x10c
	// Line 747, Address: 0x19e4f0, Func Offset: 0x110
	// Line 748, Address: 0x19e4f4, Func Offset: 0x114
	// Line 749, Address: 0x19e4fc, Func Offset: 0x11c
	// Line 750, Address: 0x19e500, Func Offset: 0x120
	// Line 751, Address: 0x19e504, Func Offset: 0x124
	// Line 752, Address: 0x19e50c, Func Offset: 0x12c
	// Line 753, Address: 0x19e510, Func Offset: 0x130
	// Line 754, Address: 0x19e514, Func Offset: 0x134
	// Line 755, Address: 0x19e51c, Func Offset: 0x13c
	// Line 756, Address: 0x19e520, Func Offset: 0x140
	// Line 758, Address: 0x19e548, Func Offset: 0x168
	// Line 759, Address: 0x19e55c, Func Offset: 0x17c
	// Line 760, Address: 0x19e560, Func Offset: 0x180
	// Line 761, Address: 0x19e568, Func Offset: 0x188
	// Line 763, Address: 0x19e56c, Func Offset: 0x18c
	// Line 764, Address: 0x19e574, Func Offset: 0x194
	// Line 765, Address: 0x19e578, Func Offset: 0x198
	// Line 766, Address: 0x19e58c, Func Offset: 0x1ac
	// Line 767, Address: 0x19e590, Func Offset: 0x1b0
	// Line 768, Address: 0x19e598, Func Offset: 0x1b8
	// Line 770, Address: 0x19e59c, Func Offset: 0x1bc
	// Line 771, Address: 0x19e5a4, Func Offset: 0x1c4
	// Line 772, Address: 0x19e5a8, Func Offset: 0x1c8
	// Line 775, Address: 0x19e5ac, Func Offset: 0x1cc
	// Line 776, Address: 0x19e5b4, Func Offset: 0x1d4
	// Line 777, Address: 0x19e5b8, Func Offset: 0x1d8
	// Line 778, Address: 0x19e5d4, Func Offset: 0x1f4
	// Line 779, Address: 0x19e5d8, Func Offset: 0x1f8
	// Line 780, Address: 0x19e5dc, Func Offset: 0x1fc
	// Line 781, Address: 0x19e5e4, Func Offset: 0x204
	// Line 782, Address: 0x19e5e8, Func Offset: 0x208
	// Line 785, Address: 0x19e5ec, Func Offset: 0x20c
	// Line 786, Address: 0x19e5f4, Func Offset: 0x214
	// Line 787, Address: 0x19e5f8, Func Offset: 0x218
	// Line 789, Address: 0x19e620, Func Offset: 0x240
	// Line 790, Address: 0x19e624, Func Offset: 0x244
	// Line 791, Address: 0x19e62c, Func Offset: 0x24c
	// Line 792, Address: 0x19e630, Func Offset: 0x250
	// Line 793, Address: 0x19e634, Func Offset: 0x254
	// Line 794, Address: 0x19e63c, Func Offset: 0x25c
	// Line 795, Address: 0x19e640, Func Offset: 0x260
	// Line 798, Address: 0x19e644, Func Offset: 0x264
	// Line 799, Address: 0x19e64c, Func Offset: 0x26c
	// Line 800, Address: 0x19e650, Func Offset: 0x270
	// Line 801, Address: 0x19e66c, Func Offset: 0x28c
	// Line 802, Address: 0x19e670, Func Offset: 0x290
	// Line 803, Address: 0x19e674, Func Offset: 0x294
	// Line 804, Address: 0x19e67c, Func Offset: 0x29c
	// Line 805, Address: 0x19e680, Func Offset: 0x2a0
	// Line 808, Address: 0x19e684, Func Offset: 0x2a4
	// Line 809, Address: 0x19e68c, Func Offset: 0x2ac
	// Line 810, Address: 0x19e690, Func Offset: 0x2b0
	// Line 811, Address: 0x19e69c, Func Offset: 0x2bc
	// Line 812, Address: 0x19e6a0, Func Offset: 0x2c0
	// Line 813, Address: 0x19e6a8, Func Offset: 0x2c8
	// Line 815, Address: 0x19e6ac, Func Offset: 0x2cc
	// Line 816, Address: 0x19e6b4, Func Offset: 0x2d4
	// Line 817, Address: 0x19e6b8, Func Offset: 0x2d8
	// Line 818, Address: 0x19e6d4, Func Offset: 0x2f4
	// Line 819, Address: 0x19e6d8, Func Offset: 0x2f8
	// Line 820, Address: 0x19e6dc, Func Offset: 0x2fc
	// Line 821, Address: 0x19e6e4, Func Offset: 0x304
	// Line 822, Address: 0x19e6e8, Func Offset: 0x308
	// Line 825, Address: 0x19e6ec, Func Offset: 0x30c
	// Line 826, Address: 0x19e6f4, Func Offset: 0x314
	// Line 827, Address: 0x19e6f8, Func Offset: 0x318
	// Line 828, Address: 0x19e72c, Func Offset: 0x34c
	// Line 829, Address: 0x19e730, Func Offset: 0x350
	// Line 830, Address: 0x19e734, Func Offset: 0x354
	// Line 831, Address: 0x19e73c, Func Offset: 0x35c
	// Line 832, Address: 0x19e740, Func Offset: 0x360
	// Line 833, Address: 0x19e744, Func Offset: 0x364
	// Line 834, Address: 0x19e74c, Func Offset: 0x36c
	// Line 835, Address: 0x19e750, Func Offset: 0x370
	// Line 836, Address: 0x19e754, Func Offset: 0x374
	// Line 837, Address: 0x19e75c, Func Offset: 0x37c
	// Line 838, Address: 0x19e760, Func Offset: 0x380
	// Line 841, Address: 0x19e764, Func Offset: 0x384
	// Line 842, Address: 0x19e76c, Func Offset: 0x38c
	// Line 843, Address: 0x19e770, Func Offset: 0x390
	// Line 845, Address: 0x19e798, Func Offset: 0x3b8
	// Line 846, Address: 0x19e79c, Func Offset: 0x3bc
	// Line 847, Address: 0x19e7a4, Func Offset: 0x3c4
	// Line 848, Address: 0x19e7a8, Func Offset: 0x3c8
	// Line 849, Address: 0x19e7ac, Func Offset: 0x3cc
	// Line 850, Address: 0x19e7b4, Func Offset: 0x3d4
	// Line 851, Address: 0x19e7b8, Func Offset: 0x3d8
	// Line 854, Address: 0x19e7bc, Func Offset: 0x3dc
	// Line 855, Address: 0x19e7c4, Func Offset: 0x3e4
	// Line 856, Address: 0x19e7c8, Func Offset: 0x3e8
	// Line 857, Address: 0x19e7e4, Func Offset: 0x404
	// Line 858, Address: 0x19e7e8, Func Offset: 0x408
	// Line 859, Address: 0x19e7ec, Func Offset: 0x40c
	// Line 860, Address: 0x19e7f4, Func Offset: 0x414
	// Line 861, Address: 0x19e7f8, Func Offset: 0x418
	// Line 864, Address: 0x19e7fc, Func Offset: 0x41c
	// Line 865, Address: 0x19e804, Func Offset: 0x424
	// Line 866, Address: 0x19e808, Func Offset: 0x428
	// Line 867, Address: 0x19e80c, Func Offset: 0x42c
	// Line 868, Address: 0x19e814, Func Offset: 0x434
	// Line 869, Address: 0x19e818, Func Offset: 0x438
	// Line 870, Address: 0x19e81c, Func Offset: 0x43c
	// Line 871, Address: 0x19e824, Func Offset: 0x444
	// Line 872, Address: 0x19e828, Func Offset: 0x448
	// Line 873, Address: 0x19e82c, Func Offset: 0x44c
	// Line 874, Address: 0x19e834, Func Offset: 0x454
	// Line 875, Address: 0x19e838, Func Offset: 0x458
	// Line 877, Address: 0x19e858, Func Offset: 0x478
	// Line 878, Address: 0x19e85c, Func Offset: 0x47c
	// Line 879, Address: 0x19e864, Func Offset: 0x484
	// Line 880, Address: 0x19e868, Func Offset: 0x488
	// Line 881, Address: 0x19e86c, Func Offset: 0x48c
	// Line 882, Address: 0x19e874, Func Offset: 0x494
	// Line 883, Address: 0x19e878, Func Offset: 0x498
	// Line 885, Address: 0x19e87c, Func Offset: 0x49c
	// Line 886, Address: 0x19e884, Func Offset: 0x4a4
	// Line 889, Address: 0x19e888, Func Offset: 0x4a8
	// Line 893, Address: 0x19e890, Func Offset: 0x4b0
	// Func End, Address: 0x19e89c, Func Offset: 0x4bc
}

// 
// Start address: 0x19e8a0
int EnemyModelTextureID(EnemyKind kind, int type)
{
	int id;
	// Line 903, Address: 0x19e8a0, Func Offset: 0
	// Line 901, Address: 0x19e8a4, Func Offset: 0x4
	// Line 903, Address: 0x19e8a8, Func Offset: 0x8
	// Line 901, Address: 0x19e8ac, Func Offset: 0xc
	// Line 903, Address: 0x19e8b0, Func Offset: 0x10
	// Line 904, Address: 0x19e8d4, Func Offset: 0x34
	// Line 905, Address: 0x19e8d8, Func Offset: 0x38
	// Line 907, Address: 0x19e8e0, Func Offset: 0x40
	// Line 908, Address: 0x19e8f4, Func Offset: 0x54
	// Line 909, Address: 0x19e8f8, Func Offset: 0x58
	// Line 910, Address: 0x19e8fc, Func Offset: 0x5c
	// Line 911, Address: 0x19e904, Func Offset: 0x64
	// Line 912, Address: 0x19e908, Func Offset: 0x68
	// Line 915, Address: 0x19e90c, Func Offset: 0x6c
	// Line 916, Address: 0x19e914, Func Offset: 0x74
	// Line 917, Address: 0x19e918, Func Offset: 0x78
	// Line 918, Address: 0x19e934, Func Offset: 0x94
	// Line 919, Address: 0x19e938, Func Offset: 0x98
	// Line 920, Address: 0x19e93c, Func Offset: 0x9c
	// Line 921, Address: 0x19e944, Func Offset: 0xa4
	// Line 922, Address: 0x19e948, Func Offset: 0xa8
	// Line 925, Address: 0x19e94c, Func Offset: 0xac
	// Line 926, Address: 0x19e954, Func Offset: 0xb4
	// Line 927, Address: 0x19e958, Func Offset: 0xb8
	// Line 928, Address: 0x19e95c, Func Offset: 0xbc
	// Line 929, Address: 0x19e964, Func Offset: 0xc4
	// Line 930, Address: 0x19e968, Func Offset: 0xc8
	// Line 932, Address: 0x19e9a0, Func Offset: 0x100
	// Line 933, Address: 0x19e9a4, Func Offset: 0x104
	// Line 934, Address: 0x19e9ac, Func Offset: 0x10c
	// Line 935, Address: 0x19e9b0, Func Offset: 0x110
	// Line 936, Address: 0x19e9b4, Func Offset: 0x114
	// Line 937, Address: 0x19e9bc, Func Offset: 0x11c
	// Line 938, Address: 0x19e9c0, Func Offset: 0x120
	// Line 939, Address: 0x19e9c4, Func Offset: 0x124
	// Line 940, Address: 0x19e9cc, Func Offset: 0x12c
	// Line 941, Address: 0x19e9d0, Func Offset: 0x130
	// Line 942, Address: 0x19e9d4, Func Offset: 0x134
	// Line 943, Address: 0x19e9dc, Func Offset: 0x13c
	// Line 944, Address: 0x19e9e0, Func Offset: 0x140
	// Line 946, Address: 0x19ea08, Func Offset: 0x168
	// Line 947, Address: 0x19ea1c, Func Offset: 0x17c
	// Line 948, Address: 0x19ea20, Func Offset: 0x180
	// Line 949, Address: 0x19ea28, Func Offset: 0x188
	// Line 951, Address: 0x19ea2c, Func Offset: 0x18c
	// Line 952, Address: 0x19ea34, Func Offset: 0x194
	// Line 953, Address: 0x19ea38, Func Offset: 0x198
	// Line 954, Address: 0x19ea4c, Func Offset: 0x1ac
	// Line 955, Address: 0x19ea50, Func Offset: 0x1b0
	// Line 956, Address: 0x19ea58, Func Offset: 0x1b8
	// Line 958, Address: 0x19ea5c, Func Offset: 0x1bc
	// Line 959, Address: 0x19ea64, Func Offset: 0x1c4
	// Line 960, Address: 0x19ea68, Func Offset: 0x1c8
	// Line 963, Address: 0x19ea6c, Func Offset: 0x1cc
	// Line 964, Address: 0x19ea74, Func Offset: 0x1d4
	// Line 965, Address: 0x19ea78, Func Offset: 0x1d8
	// Line 966, Address: 0x19ea94, Func Offset: 0x1f4
	// Line 967, Address: 0x19ea98, Func Offset: 0x1f8
	// Line 968, Address: 0x19ea9c, Func Offset: 0x1fc
	// Line 969, Address: 0x19eaa4, Func Offset: 0x204
	// Line 970, Address: 0x19eaa8, Func Offset: 0x208
	// Line 973, Address: 0x19eaac, Func Offset: 0x20c
	// Line 974, Address: 0x19eab4, Func Offset: 0x214
	// Line 975, Address: 0x19eab8, Func Offset: 0x218
	// Line 977, Address: 0x19eae0, Func Offset: 0x240
	// Line 978, Address: 0x19eae4, Func Offset: 0x244
	// Line 979, Address: 0x19eaec, Func Offset: 0x24c
	// Line 980, Address: 0x19eaf0, Func Offset: 0x250
	// Line 981, Address: 0x19eaf4, Func Offset: 0x254
	// Line 982, Address: 0x19eafc, Func Offset: 0x25c
	// Line 983, Address: 0x19eb00, Func Offset: 0x260
	// Line 986, Address: 0x19eb04, Func Offset: 0x264
	// Line 987, Address: 0x19eb0c, Func Offset: 0x26c
	// Line 988, Address: 0x19eb10, Func Offset: 0x270
	// Line 989, Address: 0x19eb2c, Func Offset: 0x28c
	// Line 990, Address: 0x19eb30, Func Offset: 0x290
	// Line 991, Address: 0x19eb34, Func Offset: 0x294
	// Line 992, Address: 0x19eb3c, Func Offset: 0x29c
	// Line 993, Address: 0x19eb40, Func Offset: 0x2a0
	// Line 996, Address: 0x19eb44, Func Offset: 0x2a4
	// Line 997, Address: 0x19eb4c, Func Offset: 0x2ac
	// Line 998, Address: 0x19eb50, Func Offset: 0x2b0
	// Line 999, Address: 0x19eb5c, Func Offset: 0x2bc
	// Line 1000, Address: 0x19eb60, Func Offset: 0x2c0
	// Line 1001, Address: 0x19eb68, Func Offset: 0x2c8
	// Line 1003, Address: 0x19eb6c, Func Offset: 0x2cc
	// Line 1004, Address: 0x19eb74, Func Offset: 0x2d4
	// Line 1005, Address: 0x19eb78, Func Offset: 0x2d8
	// Line 1006, Address: 0x19eb94, Func Offset: 0x2f4
	// Line 1007, Address: 0x19eb98, Func Offset: 0x2f8
	// Line 1008, Address: 0x19eb9c, Func Offset: 0x2fc
	// Line 1009, Address: 0x19eba4, Func Offset: 0x304
	// Line 1010, Address: 0x19eba8, Func Offset: 0x308
	// Line 1013, Address: 0x19ebac, Func Offset: 0x30c
	// Line 1014, Address: 0x19ebb4, Func Offset: 0x314
	// Line 1015, Address: 0x19ebb8, Func Offset: 0x318
	// Line 1016, Address: 0x19ebec, Func Offset: 0x34c
	// Line 1017, Address: 0x19ebf0, Func Offset: 0x350
	// Line 1018, Address: 0x19ebf4, Func Offset: 0x354
	// Line 1019, Address: 0x19ebfc, Func Offset: 0x35c
	// Line 1020, Address: 0x19ec00, Func Offset: 0x360
	// Line 1021, Address: 0x19ec04, Func Offset: 0x364
	// Line 1022, Address: 0x19ec0c, Func Offset: 0x36c
	// Line 1023, Address: 0x19ec10, Func Offset: 0x370
	// Line 1024, Address: 0x19ec14, Func Offset: 0x374
	// Line 1025, Address: 0x19ec1c, Func Offset: 0x37c
	// Line 1026, Address: 0x19ec20, Func Offset: 0x380
	// Line 1029, Address: 0x19ec24, Func Offset: 0x384
	// Line 1030, Address: 0x19ec2c, Func Offset: 0x38c
	// Line 1031, Address: 0x19ec30, Func Offset: 0x390
	// Line 1033, Address: 0x19ec58, Func Offset: 0x3b8
	// Line 1034, Address: 0x19ec5c, Func Offset: 0x3bc
	// Line 1035, Address: 0x19ec64, Func Offset: 0x3c4
	// Line 1036, Address: 0x19ec68, Func Offset: 0x3c8
	// Line 1037, Address: 0x19ec6c, Func Offset: 0x3cc
	// Line 1038, Address: 0x19ec74, Func Offset: 0x3d4
	// Line 1039, Address: 0x19ec78, Func Offset: 0x3d8
	// Line 1042, Address: 0x19ec7c, Func Offset: 0x3dc
	// Line 1043, Address: 0x19ec84, Func Offset: 0x3e4
	// Line 1044, Address: 0x19ec88, Func Offset: 0x3e8
	// Line 1045, Address: 0x19eca4, Func Offset: 0x404
	// Line 1046, Address: 0x19eca8, Func Offset: 0x408
	// Line 1047, Address: 0x19ecac, Func Offset: 0x40c
	// Line 1048, Address: 0x19ecb4, Func Offset: 0x414
	// Line 1049, Address: 0x19ecb8, Func Offset: 0x418
	// Line 1052, Address: 0x19ecbc, Func Offset: 0x41c
	// Line 1053, Address: 0x19ecc4, Func Offset: 0x424
	// Line 1054, Address: 0x19ecc8, Func Offset: 0x428
	// Line 1055, Address: 0x19eccc, Func Offset: 0x42c
	// Line 1056, Address: 0x19ecd4, Func Offset: 0x434
	// Line 1057, Address: 0x19ecd8, Func Offset: 0x438
	// Line 1058, Address: 0x19ecdc, Func Offset: 0x43c
	// Line 1059, Address: 0x19ece4, Func Offset: 0x444
	// Line 1060, Address: 0x19ece8, Func Offset: 0x448
	// Line 1061, Address: 0x19ecec, Func Offset: 0x44c
	// Line 1062, Address: 0x19ecf4, Func Offset: 0x454
	// Line 1063, Address: 0x19ecf8, Func Offset: 0x458
	// Line 1065, Address: 0x19ed18, Func Offset: 0x478
	// Line 1066, Address: 0x19ed1c, Func Offset: 0x47c
	// Line 1067, Address: 0x19ed24, Func Offset: 0x484
	// Line 1068, Address: 0x19ed28, Func Offset: 0x488
	// Line 1069, Address: 0x19ed2c, Func Offset: 0x48c
	// Line 1070, Address: 0x19ed34, Func Offset: 0x494
	// Line 1071, Address: 0x19ed38, Func Offset: 0x498
	// Line 1073, Address: 0x19ed3c, Func Offset: 0x49c
	// Line 1074, Address: 0x19ed44, Func Offset: 0x4a4
	// Line 1077, Address: 0x19ed48, Func Offset: 0x4a8
	// Line 1081, Address: 0x19ed50, Func Offset: 0x4b0
	// Func End, Address: 0x19ed5c, Func Offset: 0x4bc
}

// 
// Start address: 0x19ed60
int EnemyModelShadowID(EnemyKind kind, int type)
{
	int id;
	// Line 1091, Address: 0x19ed60, Func Offset: 0
	// Line 1089, Address: 0x19ed64, Func Offset: 0x4
	// Line 1091, Address: 0x19ed68, Func Offset: 0x8
	// Line 1089, Address: 0x19ed6c, Func Offset: 0xc
	// Line 1091, Address: 0x19ed70, Func Offset: 0x10
	// Line 1093, Address: 0x19ed94, Func Offset: 0x34
	// Line 1094, Address: 0x19ed98, Func Offset: 0x38
	// Line 1096, Address: 0x19eda0, Func Offset: 0x40
	// Line 1097, Address: 0x19edb4, Func Offset: 0x54
	// Line 1098, Address: 0x19edb8, Func Offset: 0x58
	// Line 1099, Address: 0x19edbc, Func Offset: 0x5c
	// Line 1100, Address: 0x19edc4, Func Offset: 0x64
	// Line 1101, Address: 0x19edc8, Func Offset: 0x68
	// Line 1104, Address: 0x19edcc, Func Offset: 0x6c
	// Line 1105, Address: 0x19edd4, Func Offset: 0x74
	// Line 1106, Address: 0x19edd8, Func Offset: 0x78
	// Line 1107, Address: 0x19edf4, Func Offset: 0x94
	// Line 1108, Address: 0x19edf8, Func Offset: 0x98
	// Line 1109, Address: 0x19edfc, Func Offset: 0x9c
	// Line 1110, Address: 0x19ee04, Func Offset: 0xa4
	// Line 1111, Address: 0x19ee08, Func Offset: 0xa8
	// Line 1114, Address: 0x19ee0c, Func Offset: 0xac
	// Line 1115, Address: 0x19ee14, Func Offset: 0xb4
	// Line 1116, Address: 0x19ee18, Func Offset: 0xb8
	// Line 1117, Address: 0x19ee1c, Func Offset: 0xbc
	// Line 1118, Address: 0x19ee24, Func Offset: 0xc4
	// Line 1119, Address: 0x19ee28, Func Offset: 0xc8
	// Line 1121, Address: 0x19ee60, Func Offset: 0x100
	// Line 1122, Address: 0x19ee64, Func Offset: 0x104
	// Line 1123, Address: 0x19ee6c, Func Offset: 0x10c
	// Line 1124, Address: 0x19ee70, Func Offset: 0x110
	// Line 1125, Address: 0x19ee74, Func Offset: 0x114
	// Line 1126, Address: 0x19ee7c, Func Offset: 0x11c
	// Line 1127, Address: 0x19ee80, Func Offset: 0x120
	// Line 1128, Address: 0x19ee84, Func Offset: 0x124
	// Line 1129, Address: 0x19ee8c, Func Offset: 0x12c
	// Line 1130, Address: 0x19ee90, Func Offset: 0x130
	// Line 1131, Address: 0x19ee94, Func Offset: 0x134
	// Line 1132, Address: 0x19ee9c, Func Offset: 0x13c
	// Line 1133, Address: 0x19eea0, Func Offset: 0x140
	// Line 1135, Address: 0x19eec8, Func Offset: 0x168
	// Line 1136, Address: 0x19eedc, Func Offset: 0x17c
	// Line 1137, Address: 0x19eee0, Func Offset: 0x180
	// Line 1138, Address: 0x19eee8, Func Offset: 0x188
	// Line 1140, Address: 0x19eeec, Func Offset: 0x18c
	// Line 1141, Address: 0x19eef4, Func Offset: 0x194
	// Line 1142, Address: 0x19eef8, Func Offset: 0x198
	// Line 1143, Address: 0x19ef0c, Func Offset: 0x1ac
	// Line 1144, Address: 0x19ef10, Func Offset: 0x1b0
	// Line 1145, Address: 0x19ef18, Func Offset: 0x1b8
	// Line 1147, Address: 0x19ef1c, Func Offset: 0x1bc
	// Line 1148, Address: 0x19ef24, Func Offset: 0x1c4
	// Line 1149, Address: 0x19ef28, Func Offset: 0x1c8
	// Line 1152, Address: 0x19ef2c, Func Offset: 0x1cc
	// Line 1153, Address: 0x19ef34, Func Offset: 0x1d4
	// Line 1154, Address: 0x19ef38, Func Offset: 0x1d8
	// Line 1155, Address: 0x19ef54, Func Offset: 0x1f4
	// Line 1156, Address: 0x19ef58, Func Offset: 0x1f8
	// Line 1157, Address: 0x19ef5c, Func Offset: 0x1fc
	// Line 1158, Address: 0x19ef64, Func Offset: 0x204
	// Line 1159, Address: 0x19ef68, Func Offset: 0x208
	// Line 1162, Address: 0x19ef6c, Func Offset: 0x20c
	// Line 1163, Address: 0x19ef74, Func Offset: 0x214
	// Line 1164, Address: 0x19ef78, Func Offset: 0x218
	// Line 1166, Address: 0x19efa0, Func Offset: 0x240
	// Line 1167, Address: 0x19efa4, Func Offset: 0x244
	// Line 1168, Address: 0x19efac, Func Offset: 0x24c
	// Line 1169, Address: 0x19efb0, Func Offset: 0x250
	// Line 1170, Address: 0x19efb4, Func Offset: 0x254
	// Line 1171, Address: 0x19efbc, Func Offset: 0x25c
	// Line 1172, Address: 0x19efc0, Func Offset: 0x260
	// Line 1175, Address: 0x19efc4, Func Offset: 0x264
	// Line 1176, Address: 0x19efcc, Func Offset: 0x26c
	// Line 1177, Address: 0x19efd0, Func Offset: 0x270
	// Line 1178, Address: 0x19efec, Func Offset: 0x28c
	// Line 1179, Address: 0x19eff0, Func Offset: 0x290
	// Line 1180, Address: 0x19eff4, Func Offset: 0x294
	// Line 1181, Address: 0x19effc, Func Offset: 0x29c
	// Line 1182, Address: 0x19f000, Func Offset: 0x2a0
	// Line 1185, Address: 0x19f004, Func Offset: 0x2a4
	// Line 1186, Address: 0x19f00c, Func Offset: 0x2ac
	// Line 1187, Address: 0x19f010, Func Offset: 0x2b0
	// Line 1188, Address: 0x19f01c, Func Offset: 0x2bc
	// Line 1189, Address: 0x19f020, Func Offset: 0x2c0
	// Line 1190, Address: 0x19f028, Func Offset: 0x2c8
	// Line 1192, Address: 0x19f02c, Func Offset: 0x2cc
	// Line 1193, Address: 0x19f034, Func Offset: 0x2d4
	// Line 1194, Address: 0x19f038, Func Offset: 0x2d8
	// Line 1195, Address: 0x19f054, Func Offset: 0x2f4
	// Line 1196, Address: 0x19f058, Func Offset: 0x2f8
	// Line 1197, Address: 0x19f05c, Func Offset: 0x2fc
	// Line 1198, Address: 0x19f064, Func Offset: 0x304
	// Line 1199, Address: 0x19f068, Func Offset: 0x308
	// Line 1202, Address: 0x19f06c, Func Offset: 0x30c
	// Line 1203, Address: 0x19f074, Func Offset: 0x314
	// Line 1204, Address: 0x19f078, Func Offset: 0x318
	// Line 1205, Address: 0x19f0ac, Func Offset: 0x34c
	// Line 1206, Address: 0x19f0b0, Func Offset: 0x350
	// Line 1207, Address: 0x19f0b4, Func Offset: 0x354
	// Line 1208, Address: 0x19f0bc, Func Offset: 0x35c
	// Line 1209, Address: 0x19f0c0, Func Offset: 0x360
	// Line 1210, Address: 0x19f0c4, Func Offset: 0x364
	// Line 1211, Address: 0x19f0cc, Func Offset: 0x36c
	// Line 1212, Address: 0x19f0d0, Func Offset: 0x370
	// Line 1213, Address: 0x19f0d4, Func Offset: 0x374
	// Line 1214, Address: 0x19f0dc, Func Offset: 0x37c
	// Line 1215, Address: 0x19f0e0, Func Offset: 0x380
	// Line 1218, Address: 0x19f0e4, Func Offset: 0x384
	// Line 1219, Address: 0x19f0ec, Func Offset: 0x38c
	// Line 1220, Address: 0x19f0f0, Func Offset: 0x390
	// Line 1221, Address: 0x19f124, Func Offset: 0x3c4
	// Line 1222, Address: 0x19f128, Func Offset: 0x3c8
	// Line 1223, Address: 0x19f12c, Func Offset: 0x3cc
	// Line 1224, Address: 0x19f134, Func Offset: 0x3d4
	// Line 1225, Address: 0x19f138, Func Offset: 0x3d8
	// Line 1226, Address: 0x19f13c, Func Offset: 0x3dc
	// Line 1228, Address: 0x19f144, Func Offset: 0x3e4
	// Line 1229, Address: 0x19f148, Func Offset: 0x3e8
	// Line 1233, Address: 0x19f150, Func Offset: 0x3f0
	// Line 1234, Address: 0x19f16c, Func Offset: 0x40c
	// Line 1235, Address: 0x19f170, Func Offset: 0x410
	// Line 1237, Address: 0x19f178, Func Offset: 0x418
	// Line 1240, Address: 0x19f17c, Func Offset: 0x41c
	// Line 1241, Address: 0x19f184, Func Offset: 0x424
	// Line 1242, Address: 0x19f188, Func Offset: 0x428
	// Line 1243, Address: 0x19f18c, Func Offset: 0x42c
	// Line 1244, Address: 0x19f194, Func Offset: 0x434
	// Line 1245, Address: 0x19f198, Func Offset: 0x438
	// Line 1246, Address: 0x19f19c, Func Offset: 0x43c
	// Line 1247, Address: 0x19f1a4, Func Offset: 0x444
	// Line 1248, Address: 0x19f1a8, Func Offset: 0x448
	// Line 1249, Address: 0x19f1ac, Func Offset: 0x44c
	// Line 1250, Address: 0x19f1b4, Func Offset: 0x454
	// Line 1251, Address: 0x19f1b8, Func Offset: 0x458
	// Line 1253, Address: 0x19f1d8, Func Offset: 0x478
	// Line 1254, Address: 0x19f1dc, Func Offset: 0x47c
	// Line 1255, Address: 0x19f1e4, Func Offset: 0x484
	// Line 1256, Address: 0x19f1e8, Func Offset: 0x488
	// Line 1258, Address: 0x19f1f0, Func Offset: 0x490
	// Line 1264, Address: 0x19f1f8, Func Offset: 0x498
	// Func End, Address: 0x19f204, Func Offset: 0x4a4
}

// 
// Start address: 0x19f210
int EnemyModelAnimeID(EnemyKind kind, int type, int anime)
{
	int id;
	int stage;
	int scene;
	// Line 1273, Address: 0x19f210, Func Offset: 0
	// Line 1276, Address: 0x19f238, Func Offset: 0x28
	// Line 1277, Address: 0x19f240, Func Offset: 0x30
	// Line 1278, Address: 0x19f248, Func Offset: 0x38
	// Line 1279, Address: 0x19f274, Func Offset: 0x64
	// Line 1280, Address: 0x19f278, Func Offset: 0x68
	// Line 1282, Address: 0x19f28c, Func Offset: 0x7c
	// Line 1283, Address: 0x19f2b8, Func Offset: 0xa8
	// Line 1285, Address: 0x19f2c0, Func Offset: 0xb0
	// Line 1288, Address: 0x19f2e8, Func Offset: 0xd8
	// Line 1290, Address: 0x19f2f0, Func Offset: 0xe0
	// Line 1291, Address: 0x19f318, Func Offset: 0x108
	// Line 1293, Address: 0x19f320, Func Offset: 0x110
	// Line 1295, Address: 0x19f358, Func Offset: 0x148
	// Line 1297, Address: 0x19f380, Func Offset: 0x170
	// Line 1298, Address: 0x19f3a8, Func Offset: 0x198
	// Line 1301, Address: 0x19f3b0, Func Offset: 0x1a0
	// Line 1304, Address: 0x19f3d8, Func Offset: 0x1c8
	// Line 1306, Address: 0x19f3e0, Func Offset: 0x1d0
	// Line 1308, Address: 0x19f3f0, Func Offset: 0x1e0
	// Line 1310, Address: 0x19f40c, Func Offset: 0x1fc
	// Line 1311, Address: 0x19f438, Func Offset: 0x228
	// Line 1313, Address: 0x19f440, Func Offset: 0x230
	// Line 1318, Address: 0x19f468, Func Offset: 0x258
	// Line 1320, Address: 0x19f470, Func Offset: 0x260
	// Line 1321, Address: 0x19f484, Func Offset: 0x274
	// Line 1322, Address: 0x19f488, Func Offset: 0x278
	// Line 1324, Address: 0x19f4b0, Func Offset: 0x2a0
	// Line 1325, Address: 0x19f4d8, Func Offset: 0x2c8
	// Line 1327, Address: 0x19f4e0, Func Offset: 0x2d0
	// Line 1328, Address: 0x19f508, Func Offset: 0x2f8
	// Line 1330, Address: 0x19f510, Func Offset: 0x300
	// Line 1335, Address: 0x19f538, Func Offset: 0x328
	// Line 1337, Address: 0x19f540, Func Offset: 0x330
	// Line 1339, Address: 0x19f554, Func Offset: 0x344
	// Line 1344, Address: 0x19f580, Func Offset: 0x370
	// Line 1346, Address: 0x19f588, Func Offset: 0x378
	// Line 1348, Address: 0x19f5a0, Func Offset: 0x390
	// Line 1349, Address: 0x19f5c8, Func Offset: 0x3b8
	// Line 1351, Address: 0x19f5d0, Func Offset: 0x3c0
	// Line 1352, Address: 0x19f5f8, Func Offset: 0x3e8
	// Line 1354, Address: 0x19f600, Func Offset: 0x3f0
	// Line 1357, Address: 0x19f628, Func Offset: 0x418
	// Line 1359, Address: 0x19f630, Func Offset: 0x420
	// Line 1360, Address: 0x19f658, Func Offset: 0x448
	// Line 1362, Address: 0x19f660, Func Offset: 0x450
	// Line 1363, Address: 0x19f688, Func Offset: 0x478
	// Line 1365, Address: 0x19f690, Func Offset: 0x480
	// Line 1366, Address: 0x19f6b8, Func Offset: 0x4a8
	// Line 1368, Address: 0x19f6c0, Func Offset: 0x4b0
	// Line 1369, Address: 0x19f6e8, Func Offset: 0x4d8
	// Line 1371, Address: 0x19f6f0, Func Offset: 0x4e0
	// Line 1372, Address: 0x19f718, Func Offset: 0x508
	// Line 1374, Address: 0x19f720, Func Offset: 0x510
	// Line 1375, Address: 0x19f748, Func Offset: 0x538
	// Line 1377, Address: 0x19f750, Func Offset: 0x540
	// Line 1378, Address: 0x19f778, Func Offset: 0x568
	// Line 1380, Address: 0x19f780, Func Offset: 0x570
	// Line 1381, Address: 0x19f7a8, Func Offset: 0x598
	// Line 1383, Address: 0x19f7b0, Func Offset: 0x5a0
	// Line 1384, Address: 0x19f7d8, Func Offset: 0x5c8
	// Line 1387, Address: 0x19f7e0, Func Offset: 0x5d0
	// Line 1388, Address: 0x19f808, Func Offset: 0x5f8
	// Line 1390, Address: 0x19f810, Func Offset: 0x600
	// Line 1392, Address: 0x19f830, Func Offset: 0x620
	// Line 1393, Address: 0x19f858, Func Offset: 0x648
	// Line 1395, Address: 0x19f860, Func Offset: 0x650
	// Line 1396, Address: 0x19f888, Func Offset: 0x678
	// Line 1398, Address: 0x19f890, Func Offset: 0x680
	// Line 1403, Address: 0x19f8b8, Func Offset: 0x6a8
	// Line 1404, Address: 0x19f8bc, Func Offset: 0x6ac
	// Func End, Address: 0x19f8dc, Func Offset: 0x6cc
}

// 
// Start address: 0x19f8e0
int EnemyItemModelDataID(int item_kind)
{
	int id;
	// Line 1411, Address: 0x19f8e0, Func Offset: 0
	// Line 1413, Address: 0x19f8e4, Func Offset: 0x4
	// Line 1411, Address: 0x19f8e8, Func Offset: 0x8
	// Line 1413, Address: 0x19f8ec, Func Offset: 0xc
	// Line 1414, Address: 0x19f91c, Func Offset: 0x3c
	// Line 1415, Address: 0x19f920, Func Offset: 0x40
	// Line 1416, Address: 0x19f924, Func Offset: 0x44
	// Line 1417, Address: 0x19f92c, Func Offset: 0x4c
	// Line 1418, Address: 0x19f930, Func Offset: 0x50
	// Line 1419, Address: 0x19f934, Func Offset: 0x54
	// Line 1420, Address: 0x19f93c, Func Offset: 0x5c
	// Line 1421, Address: 0x19f940, Func Offset: 0x60
	// Line 1422, Address: 0x19f944, Func Offset: 0x64
	// Line 1423, Address: 0x19f94c, Func Offset: 0x6c
	// Line 1424, Address: 0x19f950, Func Offset: 0x70
	// Line 1427, Address: 0x19f958, Func Offset: 0x78
	// Line 1428, Address: 0x19f960, Func Offset: 0x80
	// Line 1431, Address: 0x19f968, Func Offset: 0x88
	// Func End, Address: 0x19f974, Func Offset: 0x94
}

// 
// Start address: 0x19f980
int EnemyItemTextureDataID(int item_kind)
{
	int id;
	// Line 1438, Address: 0x19f980, Func Offset: 0
	// Line 1440, Address: 0x19f984, Func Offset: 0x4
	// Line 1438, Address: 0x19f988, Func Offset: 0x8
	// Line 1440, Address: 0x19f98c, Func Offset: 0xc
	// Line 1441, Address: 0x19f9bc, Func Offset: 0x3c
	// Line 1442, Address: 0x19f9c0, Func Offset: 0x40
	// Line 1443, Address: 0x19f9c4, Func Offset: 0x44
	// Line 1444, Address: 0x19f9cc, Func Offset: 0x4c
	// Line 1445, Address: 0x19f9d0, Func Offset: 0x50
	// Line 1446, Address: 0x19f9d4, Func Offset: 0x54
	// Line 1447, Address: 0x19f9dc, Func Offset: 0x5c
	// Line 1448, Address: 0x19f9e0, Func Offset: 0x60
	// Line 1449, Address: 0x19f9e4, Func Offset: 0x64
	// Line 1450, Address: 0x19f9ec, Func Offset: 0x6c
	// Line 1451, Address: 0x19f9f0, Func Offset: 0x70
	// Line 1454, Address: 0x19f9f8, Func Offset: 0x78
	// Line 1455, Address: 0x19fa00, Func Offset: 0x80
	// Line 1458, Address: 0x19fa08, Func Offset: 0x88
	// Func End, Address: 0x19fa14, Func Offset: 0x94
}

// 
// Start address: 0x19fa20
int EnemyWeaponModelDataID(int item_kind)
{
	int id;
	// Line 1465, Address: 0x19fa20, Func Offset: 0
	// Line 1467, Address: 0x19fa24, Func Offset: 0x4
	// Line 1465, Address: 0x19fa28, Func Offset: 0x8
	// Line 1467, Address: 0x19fa34, Func Offset: 0x14
	// Line 1469, Address: 0x19fa80, Func Offset: 0x60
	// Line 1470, Address: 0x19fa84, Func Offset: 0x64
	// Line 1471, Address: 0x19fa8c, Func Offset: 0x6c
	// Line 1472, Address: 0x19fa90, Func Offset: 0x70
	// Line 1473, Address: 0x19fa94, Func Offset: 0x74
	// Line 1474, Address: 0x19fa9c, Func Offset: 0x7c
	// Line 1475, Address: 0x19faa0, Func Offset: 0x80
	// Line 1476, Address: 0x19faa4, Func Offset: 0x84
	// Line 1477, Address: 0x19faac, Func Offset: 0x8c
	// Line 1478, Address: 0x19fab0, Func Offset: 0x90
	// Line 1479, Address: 0x19fab4, Func Offset: 0x94
	// Line 1480, Address: 0x19fabc, Func Offset: 0x9c
	// Line 1481, Address: 0x19fac0, Func Offset: 0xa0
	// Line 1482, Address: 0x19fad4, Func Offset: 0xb4
	// Line 1483, Address: 0x19fad8, Func Offset: 0xb8
	// Line 1484, Address: 0x19fae0, Func Offset: 0xc0
	// Line 1486, Address: 0x19fae4, Func Offset: 0xc4
	// Line 1487, Address: 0x19faec, Func Offset: 0xcc
	// Line 1488, Address: 0x19faf0, Func Offset: 0xd0
	// Line 1489, Address: 0x19fb04, Func Offset: 0xe4
	// Line 1490, Address: 0x19fb08, Func Offset: 0xe8
	// Line 1491, Address: 0x19fb10, Func Offset: 0xf0
	// Line 1493, Address: 0x19fb14, Func Offset: 0xf4
	// Line 1494, Address: 0x19fb1c, Func Offset: 0xfc
	// Line 1495, Address: 0x19fb20, Func Offset: 0x100
	// Line 1496, Address: 0x19fb34, Func Offset: 0x114
	// Line 1497, Address: 0x19fb38, Func Offset: 0x118
	// Line 1498, Address: 0x19fb40, Func Offset: 0x120
	// Line 1502, Address: 0x19fb48, Func Offset: 0x128
	// Line 1503, Address: 0x19fb50, Func Offset: 0x130
	// Line 1506, Address: 0x19fb58, Func Offset: 0x138
	// Func End, Address: 0x19fb68, Func Offset: 0x148
}

// 
// Start address: 0x19fb70
int EnemyWeaponTextureDataID(int item_kind)
{
	int id;
	// Line 1513, Address: 0x19fb70, Func Offset: 0
	// Line 1515, Address: 0x19fb74, Func Offset: 0x4
	// Line 1513, Address: 0x19fb78, Func Offset: 0x8
	// Line 1515, Address: 0x19fb84, Func Offset: 0x14
	// Line 1517, Address: 0x19fbd0, Func Offset: 0x60
	// Line 1518, Address: 0x19fbd4, Func Offset: 0x64
	// Line 1519, Address: 0x19fbdc, Func Offset: 0x6c
	// Line 1520, Address: 0x19fbe0, Func Offset: 0x70
	// Line 1521, Address: 0x19fbe4, Func Offset: 0x74
	// Line 1522, Address: 0x19fbec, Func Offset: 0x7c
	// Line 1523, Address: 0x19fbf0, Func Offset: 0x80
	// Line 1524, Address: 0x19fbf4, Func Offset: 0x84
	// Line 1525, Address: 0x19fbfc, Func Offset: 0x8c
	// Line 1526, Address: 0x19fc00, Func Offset: 0x90
	// Line 1527, Address: 0x19fc04, Func Offset: 0x94
	// Line 1528, Address: 0x19fc0c, Func Offset: 0x9c
	// Line 1529, Address: 0x19fc10, Func Offset: 0xa0
	// Line 1530, Address: 0x19fc24, Func Offset: 0xb4
	// Line 1531, Address: 0x19fc28, Func Offset: 0xb8
	// Line 1532, Address: 0x19fc30, Func Offset: 0xc0
	// Line 1534, Address: 0x19fc34, Func Offset: 0xc4
	// Line 1535, Address: 0x19fc3c, Func Offset: 0xcc
	// Line 1536, Address: 0x19fc40, Func Offset: 0xd0
	// Line 1537, Address: 0x19fc54, Func Offset: 0xe4
	// Line 1538, Address: 0x19fc58, Func Offset: 0xe8
	// Line 1539, Address: 0x19fc60, Func Offset: 0xf0
	// Line 1541, Address: 0x19fc64, Func Offset: 0xf4
	// Line 1542, Address: 0x19fc6c, Func Offset: 0xfc
	// Line 1543, Address: 0x19fc70, Func Offset: 0x100
	// Line 1544, Address: 0x19fc84, Func Offset: 0x114
	// Line 1545, Address: 0x19fc88, Func Offset: 0x118
	// Line 1546, Address: 0x19fc90, Func Offset: 0x120
	// Line 1550, Address: 0x19fc98, Func Offset: 0x128
	// Line 1551, Address: 0x19fca0, Func Offset: 0x130
	// Line 1554, Address: 0x19fca8, Func Offset: 0x138
	// Func End, Address: 0x19fcb8, Func Offset: 0x148
}

// 
// Start address: 0x19fcc0
int EnemyWeaponShadowDataID(int item_kind)
{
	int id;
	// Line 1563, Address: 0x19fcc0, Func Offset: 0
	// Line 1564, Address: 0x19fe3c, Func Offset: 0x17c
	// Line 1565, Address: 0x19fe40, Func Offset: 0x180
	// Line 1566, Address: 0x19fe44, Func Offset: 0x184
	// Line 1567, Address: 0x19fe4c, Func Offset: 0x18c
	// Line 1568, Address: 0x19fe50, Func Offset: 0x190
	// Line 1569, Address: 0x19fe54, Func Offset: 0x194
	// Line 1570, Address: 0x19fe5c, Func Offset: 0x19c
	// Line 1571, Address: 0x19fe60, Func Offset: 0x1a0
	// Line 1572, Address: 0x19fe64, Func Offset: 0x1a4
	// Line 1573, Address: 0x19fe6c, Func Offset: 0x1ac
	// Line 1574, Address: 0x19fe70, Func Offset: 0x1b0
	// Line 1575, Address: 0x19fe74, Func Offset: 0x1b4
	// Line 1576, Address: 0x19fe7c, Func Offset: 0x1bc
	// Line 1577, Address: 0x19fe80, Func Offset: 0x1c0
	// Line 1578, Address: 0x19fe84, Func Offset: 0x1c4
	// Line 1579, Address: 0x19fe8c, Func Offset: 0x1cc
	// Line 1580, Address: 0x19fe90, Func Offset: 0x1d0
	// Line 1581, Address: 0x19fe94, Func Offset: 0x1d4
	// Line 1582, Address: 0x19fe9c, Func Offset: 0x1dc
	// Line 1583, Address: 0x19fea0, Func Offset: 0x1e0
	// Line 1584, Address: 0x19fea4, Func Offset: 0x1e4
	// Line 1585, Address: 0x19feac, Func Offset: 0x1ec
	// Line 1586, Address: 0x19feb0, Func Offset: 0x1f0
	// Line 1587, Address: 0x19feb4, Func Offset: 0x1f4
	// Line 1588, Address: 0x19febc, Func Offset: 0x1fc
	// Line 1589, Address: 0x19fec0, Func Offset: 0x200
	// Line 1590, Address: 0x19fec4, Func Offset: 0x204
	// Line 1591, Address: 0x19fecc, Func Offset: 0x20c
	// Line 1592, Address: 0x19fed0, Func Offset: 0x210
	// Line 1593, Address: 0x19fed4, Func Offset: 0x214
	// Line 1594, Address: 0x19fedc, Func Offset: 0x21c
	// Line 1595, Address: 0x19fee0, Func Offset: 0x220
	// Line 1596, Address: 0x19fee4, Func Offset: 0x224
	// Line 1597, Address: 0x19feec, Func Offset: 0x22c
	// Line 1598, Address: 0x19fef0, Func Offset: 0x230
	// Line 1599, Address: 0x19fef4, Func Offset: 0x234
	// Line 1600, Address: 0x19fefc, Func Offset: 0x23c
	// Line 1601, Address: 0x19ff00, Func Offset: 0x240
	// Line 1602, Address: 0x19ff04, Func Offset: 0x244
	// Line 1603, Address: 0x19ff0c, Func Offset: 0x24c
	// Line 1604, Address: 0x19ff10, Func Offset: 0x250
	// Line 1605, Address: 0x19ff14, Func Offset: 0x254
	// Line 1606, Address: 0x19ff1c, Func Offset: 0x25c
	// Line 1607, Address: 0x19ff20, Func Offset: 0x260
	// Line 1608, Address: 0x19ff24, Func Offset: 0x264
	// Line 1609, Address: 0x19ff2c, Func Offset: 0x26c
	// Line 1610, Address: 0x19ff30, Func Offset: 0x270
	// Line 1611, Address: 0x19ff34, Func Offset: 0x274
	// Line 1612, Address: 0x19ff3c, Func Offset: 0x27c
	// Line 1613, Address: 0x19ff40, Func Offset: 0x280
	// Line 1614, Address: 0x19ff44, Func Offset: 0x284
	// Line 1615, Address: 0x19ff4c, Func Offset: 0x28c
	// Line 1616, Address: 0x19ff50, Func Offset: 0x290
	// Line 1617, Address: 0x19ff54, Func Offset: 0x294
	// Line 1618, Address: 0x19ff5c, Func Offset: 0x29c
	// Line 1619, Address: 0x19ff60, Func Offset: 0x2a0
	// Line 1620, Address: 0x19ff64, Func Offset: 0x2a4
	// Line 1621, Address: 0x19ff6c, Func Offset: 0x2ac
	// Line 1622, Address: 0x19ff70, Func Offset: 0x2b0
	// Line 1623, Address: 0x19ff74, Func Offset: 0x2b4
	// Line 1624, Address: 0x19ff7c, Func Offset: 0x2bc
	// Line 1625, Address: 0x19ff80, Func Offset: 0x2c0
	// Line 1626, Address: 0x19ff84, Func Offset: 0x2c4
	// Line 1627, Address: 0x19ff8c, Func Offset: 0x2cc
	// Line 1628, Address: 0x19ff90, Func Offset: 0x2d0
	// Line 1629, Address: 0x19ff94, Func Offset: 0x2d4
	// Line 1630, Address: 0x19ff9c, Func Offset: 0x2dc
	// Line 1631, Address: 0x19ffa0, Func Offset: 0x2e0
	// Line 1632, Address: 0x19ffa4, Func Offset: 0x2e4
	// Line 1633, Address: 0x19ffac, Func Offset: 0x2ec
	// Line 1634, Address: 0x19ffb0, Func Offset: 0x2f0
	// Line 1635, Address: 0x19ffb4, Func Offset: 0x2f4
	// Line 1636, Address: 0x19ffbc, Func Offset: 0x2fc
	// Line 1637, Address: 0x19ffc0, Func Offset: 0x300
	// Line 1638, Address: 0x19ffc4, Func Offset: 0x304
	// Line 1639, Address: 0x19ffcc, Func Offset: 0x30c
	// Line 1640, Address: 0x19ffd0, Func Offset: 0x310
	// Line 1641, Address: 0x19ffd4, Func Offset: 0x314
	// Line 1642, Address: 0x19ffdc, Func Offset: 0x31c
	// Line 1643, Address: 0x19ffe0, Func Offset: 0x320
	// Line 1644, Address: 0x19ffe4, Func Offset: 0x324
	// Line 1645, Address: 0x19ffec, Func Offset: 0x32c
	// Line 1646, Address: 0x19fff0, Func Offset: 0x330
	// Line 1647, Address: 0x19fff4, Func Offset: 0x334
	// Line 1648, Address: 0x19fffc, Func Offset: 0x33c
	// Line 1649, Address: 0x1a0000, Func Offset: 0x340
	// Line 1650, Address: 0x1a0004, Func Offset: 0x344
	// Line 1651, Address: 0x1a000c, Func Offset: 0x34c
	// Line 1652, Address: 0x1a0010, Func Offset: 0x350
	// Line 1653, Address: 0x1a0014, Func Offset: 0x354
	// Line 1654, Address: 0x1a001c, Func Offset: 0x35c
	// Line 1655, Address: 0x1a0020, Func Offset: 0x360
	// Line 1656, Address: 0x1a0024, Func Offset: 0x364
	// Line 1657, Address: 0x1a002c, Func Offset: 0x36c
	// Line 1658, Address: 0x1a0030, Func Offset: 0x370
	// Line 1659, Address: 0x1a0034, Func Offset: 0x374
	// Line 1660, Address: 0x1a003c, Func Offset: 0x37c
	// Line 1661, Address: 0x1a0040, Func Offset: 0x380
	// Line 1662, Address: 0x1a0044, Func Offset: 0x384
	// Line 1663, Address: 0x1a004c, Func Offset: 0x38c
	// Line 1664, Address: 0x1a0050, Func Offset: 0x390
	// Line 1665, Address: 0x1a0054, Func Offset: 0x394
	// Line 1666, Address: 0x1a005c, Func Offset: 0x39c
	// Line 1667, Address: 0x1a0060, Func Offset: 0x3a0
	// Line 1668, Address: 0x1a0064, Func Offset: 0x3a4
	// Line 1670, Address: 0x1a006c, Func Offset: 0x3ac
	// Line 1671, Address: 0x1a0070, Func Offset: 0x3b0
	// Line 1675, Address: 0x1a0078, Func Offset: 0x3b8
	// Func End, Address: 0x1a0080, Func Offset: 0x3c0
}

// 
// Start address: 0x1a0080
void* EnemyModelDataAddress(EnemyKind kind, int type)
{
	int id;
	// Line 1683, Address: 0x1a0080, Func Offset: 0
	// Line 1685, Address: 0x1a0088, Func Offset: 0x8
	// Line 1686, Address: 0x1a0090, Func Offset: 0x10
	// Line 1688, Address: 0x1a00ac, Func Offset: 0x2c
	// Func End, Address: 0x1a00b8, Func Offset: 0x38
}

// 
// Start address: 0x1a00c0
void* EnemyModelTextureDataAddress(EnemyKind kind, int type)
{
	int id;
	// Line 1696, Address: 0x1a00c0, Func Offset: 0
	// Line 1698, Address: 0x1a00c8, Func Offset: 0x8
	// Line 1699, Address: 0x1a00d0, Func Offset: 0x10
	// Line 1701, Address: 0x1a00ec, Func Offset: 0x2c
	// Func End, Address: 0x1a00f8, Func Offset: 0x38
}

// 
// Start address: 0x1a0100
void* EnemyModelShadowDataAddress(EnemyKind kind, int type)
{
	int id;
	int stage;
	int scene;
	// Line 1709, Address: 0x1a0100, Func Offset: 0
	// Line 1712, Address: 0x1a0118, Func Offset: 0x18
	// Line 1713, Address: 0x1a0120, Func Offset: 0x20
	// Line 1714, Address: 0x1a0128, Func Offset: 0x28
	// Line 1715, Address: 0x1a013c, Func Offset: 0x3c
	// Line 1716, Address: 0x1a0140, Func Offset: 0x40
	// Line 1717, Address: 0x1a0154, Func Offset: 0x54
	// Line 1718, Address: 0x1a0158, Func Offset: 0x58
	// Line 1722, Address: 0x1a0160, Func Offset: 0x60
	// Line 1723, Address: 0x1a016c, Func Offset: 0x6c
	// Line 1724, Address: 0x1a0180, Func Offset: 0x80
	// Line 1725, Address: 0x1a0188, Func Offset: 0x88
	// Func End, Address: 0x1a01a0, Func Offset: 0xa0
}

// 
// Start address: 0x1a01a0
void* EnemyModelAnimeDataAddress(EnemyKind kind, int type, int anime)
{
	int id;
	// Line 1734, Address: 0x1a01a0, Func Offset: 0
	// Line 1736, Address: 0x1a01a8, Func Offset: 0x8
	// Line 1737, Address: 0x1a01b0, Func Offset: 0x10
	// Line 1739, Address: 0x1a01cc, Func Offset: 0x2c
	// Func End, Address: 0x1a01d8, Func Offset: 0x38
}

// 
// Start address: 0x1a01e0
void* EnemyWeaponModelDataAddress(int item_kind)
{
	int id;
	// Line 1770, Address: 0x1a01e0, Func Offset: 0
	// Line 1772, Address: 0x1a01e8, Func Offset: 0x8
	// Line 1773, Address: 0x1a01f0, Func Offset: 0x10
	// Line 1775, Address: 0x1a020c, Func Offset: 0x2c
	// Func End, Address: 0x1a0218, Func Offset: 0x38
}

// 
// Start address: 0x1a0220
void* EnemyWeaponTextureDataAddress(int item_kind)
{
	int id;
	// Line 1782, Address: 0x1a0220, Func Offset: 0
	// Line 1784, Address: 0x1a0228, Func Offset: 0x8
	// Line 1785, Address: 0x1a0230, Func Offset: 0x10
	// Line 1787, Address: 0x1a024c, Func Offset: 0x2c
	// Func End, Address: 0x1a0258, Func Offset: 0x38
}

// 
// Start address: 0x1a0260
void* EnemyWeaponShadowDataAddress(int item_kind)
{
	int id;
	// Line 1794, Address: 0x1a0260, Func Offset: 0
	// Line 1796, Address: 0x1a0268, Func Offset: 0x8
	// Line 1797, Address: 0x1a0270, Func Offset: 0x10
	// Line 1799, Address: 0x1a028c, Func Offset: 0x2c
	// Func End, Address: 0x1a0298, Func Offset: 0x38
}

