typedef enum PlayingInfoVibrationM : unsigned char;
typedef enum PlayingInfoAutoLoadM : unsigned char;
typedef enum PlayingInfoSoundM : unsigned char;
typedef enum PlayingInfoBloodColorM : unsigned char;
typedef enum PlayingInfoActionLevelM : unsigned char;
typedef struct GameResult;
typedef struct PlayingInfo;
typedef enum PlayingInfoViewControlM : unsigned char;
typedef enum PlayingInfoRiddleLevelM : unsigned char;
typedef enum PlayingInfoMapZoomM : unsigned char;
typedef enum PlayingInfoEndingM : unsigned char;
typedef enum PlayingInfoSubtitlesM : unsigned char;
typedef enum PlayingInfoLanguageM : unsigned char;
typedef enum PlayingInfoNoiseEffectM : unsigned char;



enum PlayingInfoVibrationM : unsigned char
{
	VIBRATION_OFF,
	VIBRATION_SOFT,
	VIBRATION_NORMAL,
	VIBRATION_HARD
};

enum PlayingInfoAutoLoadM : unsigned char
{
	AUTO_LOAD_OFF,
	AUTO_LOAD_ON
};

enum PlayingInfoSoundM : unsigned char
{
	SOUND_STEREO_SPEAKER,
	SOUND_STEREO_HEADPHONE,
	SOUND_MONAURAL
};

enum PlayingInfoBloodColorM : unsigned char
{
	BLOOD_COLOR_NORMAL,
	BLOOD_COLOR_GREEN,
	BLOOD_COLOR_VIOLET,
	BLOOD_COLOR_BLACK
};

enum PlayingInfoActionLevelM : unsigned char
{
	ACTION_LEVEL_BEGINNER,
	ACTION_LEVEL_EASY,
	ACTION_LEVEL_NORMAL,
	ACTION_LEVEL_HARD,
	ACTION_LEVEL_MANIA
};

struct GameResult
{
	int item_get;
	int hidden_item_get;
	int save_count;
	int kill_by_shot;
	int kill_by_fight;
	int kill_by_exorcise;
	float time;
	float walk_distance;
	float run_distance;
	float damage_total;
};

struct PlayingInfo
{
	unsigned char action_level;
	unsigned char riddle_level;
	unsigned char clear_kind;
	unsigned char clear_number;
	unsigned char clear_a_level;
	unsigned char clear_r_level;
	unsigned char last_game_score;
	float total_time;
	GameResult result;
	unsigned char language;
	unsigned char brightness_level;
	char screen_position_x;
	char screen_position_y;
	unsigned char vibration;
	unsigned char auto_load;
	unsigned char sound;
	unsigned char bgm_volume;
	unsigned char se_volume;
	unsigned char blood_color;
	unsigned char view_control;
	unsigned char map_zoom;
	unsigned char bullet_adjust;
	unsigned char subtitles;
	unsigned char noise_effect;
};

enum PlayingInfoViewControlM : unsigned char
{
	VIEW_CONTROL_NORMAL,
	VIEW_CONTROL_REVERSE_HORIZON,
	VIEW_CONTROL_REVERSE_VERTICAL,
	VIEW_CONTROL_REVERSE_ALL
};

enum PlayingInfoRiddleLevelM : unsigned char
{
	RIDDLE_LEVEL_BEGINNER,
	RIDDLE_LEVEL_EASY,
	RIDDLE_LEVEL_NORMAL,
	RIDDLE_LEVEL_HARD
};

enum PlayingInfoMapZoomM : unsigned char
{
	MAP_ZOOM_IN,
	MAP_ZOOM_OUT
};

enum PlayingInfoEndingM : unsigned char
{
	ENDING_A,
	ENDING_B,
	ENDING_C,
	ENDING_D,
	ENDING_E
};

enum PlayingInfoSubtitlesM : unsigned char
{
	SUBTITLES_OFF,
	SUBTITLES_ON
};

enum PlayingInfoLanguageM : unsigned char
{
	LANGUAGE_JAPANESE,
	LANGUAGE_ENGLISH,
	LANGUAGE_FRENCH,
	LANGUAGE_GERMAN,
	LANGUAGE_ITALIAN,
	LANGUAGE_SPANISH
};

enum PlayingInfoNoiseEffectM : unsigned char
{
	NOISE_EFFECT_OFF,
	NOISE_EFFECT_ON
};

PlayingInfo playing_info;

void PlayingInfoInit();
void PlayingInfoReset();
void PlayingInfoSetActionLevel(PlayingInfoActionLevelM level);
void PlayingInfoSetRiddleLevel(PlayingInfoRiddleLevelM level);
void PlayingInfoSetLanguage(PlayingInfoLanguageM language);
void PlayingInfoSetBrightnessLevel(int level);
void PlayingInfoSetScreenPositionX(int x);
void PlayingInfoSetScreenPositionY(int y);
void PlayingInfoSetVibration(PlayingInfoVibrationM vib);
void PlayingInfoSetAutoLoad(PlayingInfoAutoLoadM auto_load);
void PlayingInfoSetSound(PlayingInfoSoundM sound);
void PlayingInfoSetBgmVolume(int volume);
void PlayingInfoSetSeVolume(int volume);
void PlayingInfoSetBloodColor(PlayingInfoBloodColorM color);
void PlayingInfoSetViewControl(PlayingInfoViewControlM control);
void PlayingInfoSetMapZoom(PlayingInfoMapZoomM zoom);
void PlayingInfoSetBulletAdjust(int adjust);
void PlayingInfoSetSubtitles(PlayingInfoSubtitlesM subtitles);
void PlayingInfoSetNoiseEffect(PlayingInfoNoiseEffectM mode);

// 
// Start address: 0x1b14b0
void PlayingInfoInit()
{
	// Line 21, Address: 0x1b14b0, Func Offset: 0
	// Line 22, Address: 0x1b14b4, Func Offset: 0x4
	// Line 21, Address: 0x1b14b8, Func Offset: 0x8
	// Line 22, Address: 0x1b14bc, Func Offset: 0xc
	// Line 23, Address: 0x1b14c8, Func Offset: 0x18
	// Line 26, Address: 0x1b14d4, Func Offset: 0x24
	// Line 27, Address: 0x1b14dc, Func Offset: 0x2c
	// Line 28, Address: 0x1b14e4, Func Offset: 0x34
	// Line 29, Address: 0x1b14ec, Func Offset: 0x3c
	// Line 30, Address: 0x1b14f4, Func Offset: 0x44
	// Line 31, Address: 0x1b14fc, Func Offset: 0x4c
	// Line 32, Address: 0x1b1504, Func Offset: 0x54
	// Line 33, Address: 0x1b150c, Func Offset: 0x5c
	// Line 34, Address: 0x1b1514, Func Offset: 0x64
	// Line 35, Address: 0x1b151c, Func Offset: 0x6c
	// Line 36, Address: 0x1b1524, Func Offset: 0x74
	// Line 37, Address: 0x1b152c, Func Offset: 0x7c
	// Line 38, Address: 0x1b1534, Func Offset: 0x84
	// Line 39, Address: 0x1b153c, Func Offset: 0x8c
	// Line 40, Address: 0x1b1544, Func Offset: 0x94
	// Line 41, Address: 0x1b154c, Func Offset: 0x9c
	// Line 44, Address: 0x1b1554, Func Offset: 0xa4
	// Line 45, Address: 0x1b155c, Func Offset: 0xac
	// Func End, Address: 0x1b1568, Func Offset: 0xb8
}

// 
// Start address: 0x1b1570
void PlayingInfoReset()
{
	// Line 51, Address: 0x1b1570, Func Offset: 0
	// Func End, Address: 0x1b1580, Func Offset: 0x10
}

// 
// Start address: 0x1b1580
void PlayingInfoSetActionLevel(PlayingInfoActionLevelM level)
{
	// Line 67, Address: 0x1b1580, Func Offset: 0
	// Line 68, Address: 0x1b1584, Func Offset: 0x4
	// Func End, Address: 0x1b158c, Func Offset: 0xc
}

// 
// Start address: 0x1b1590
void PlayingInfoSetRiddleLevel(PlayingInfoRiddleLevelM level)
{
	// Line 83, Address: 0x1b1590, Func Offset: 0
	// Line 84, Address: 0x1b1594, Func Offset: 0x4
	// Func End, Address: 0x1b159c, Func Offset: 0xc
}

// 
// Start address: 0x1b15a0
void PlayingInfoSetLanguage(PlayingInfoLanguageM language)
{
	// Line 216, Address: 0x1b15a0, Func Offset: 0
	// Line 217, Address: 0x1b15a4, Func Offset: 0x4
	// Func End, Address: 0x1b15ac, Func Offset: 0xc
}

// 
// Start address: 0x1b15b0
void PlayingInfoSetBrightnessLevel(int level)
{
	// Line 232, Address: 0x1b15b0, Func Offset: 0
	// Line 233, Address: 0x1b15b4, Func Offset: 0x4
	// Func End, Address: 0x1b15bc, Func Offset: 0xc
}

// 
// Start address: 0x1b15c0
void PlayingInfoSetScreenPositionX(int x)
{
	// Line 248, Address: 0x1b15c0, Func Offset: 0
	// Line 249, Address: 0x1b15c4, Func Offset: 0x4
	// Func End, Address: 0x1b15cc, Func Offset: 0xc
}

// 
// Start address: 0x1b15d0
void PlayingInfoSetScreenPositionY(int y)
{
	// Line 264, Address: 0x1b15d0, Func Offset: 0
	// Line 265, Address: 0x1b15d4, Func Offset: 0x4
	// Func End, Address: 0x1b15dc, Func Offset: 0xc
}

// 
// Start address: 0x1b15e0
void PlayingInfoSetVibration(PlayingInfoVibrationM vib)
{
	// Line 280, Address: 0x1b15e0, Func Offset: 0
	// Line 281, Address: 0x1b15e4, Func Offset: 0x4
	// Func End, Address: 0x1b15ec, Func Offset: 0xc
}

// 
// Start address: 0x1b15f0
void PlayingInfoSetAutoLoad(PlayingInfoAutoLoadM auto_load)
{
	// Line 296, Address: 0x1b15f0, Func Offset: 0
	// Line 297, Address: 0x1b15f4, Func Offset: 0x4
	// Func End, Address: 0x1b15fc, Func Offset: 0xc
}

// 
// Start address: 0x1b1600
void PlayingInfoSetSound(PlayingInfoSoundM sound)
{
	// Line 312, Address: 0x1b1600, Func Offset: 0
	// Line 313, Address: 0x1b1604, Func Offset: 0x4
	// Func End, Address: 0x1b160c, Func Offset: 0xc
}

// 
// Start address: 0x1b1610
void PlayingInfoSetBgmVolume(int volume)
{
	// Line 328, Address: 0x1b1610, Func Offset: 0
	// Line 329, Address: 0x1b1614, Func Offset: 0x4
	// Func End, Address: 0x1b161c, Func Offset: 0xc
}

// 
// Start address: 0x1b1620
void PlayingInfoSetSeVolume(int volume)
{
	// Line 344, Address: 0x1b1620, Func Offset: 0
	// Line 345, Address: 0x1b1624, Func Offset: 0x4
	// Func End, Address: 0x1b162c, Func Offset: 0xc
}

// 
// Start address: 0x1b1630
void PlayingInfoSetBloodColor(PlayingInfoBloodColorM color)
{
	// Line 360, Address: 0x1b1630, Func Offset: 0
	// Line 361, Address: 0x1b1634, Func Offset: 0x4
	// Func End, Address: 0x1b163c, Func Offset: 0xc
}

// 
// Start address: 0x1b1640
void PlayingInfoSetViewControl(PlayingInfoViewControlM control)
{
	// Line 376, Address: 0x1b1640, Func Offset: 0
	// Line 377, Address: 0x1b1644, Func Offset: 0x4
	// Func End, Address: 0x1b164c, Func Offset: 0xc
}

// 
// Start address: 0x1b1650
void PlayingInfoSetMapZoom(PlayingInfoMapZoomM zoom)
{
	// Line 392, Address: 0x1b1650, Func Offset: 0
	// Line 393, Address: 0x1b1654, Func Offset: 0x4
	// Func End, Address: 0x1b165c, Func Offset: 0xc
}

// 
// Start address: 0x1b1660
void PlayingInfoSetBulletAdjust(int adjust)
{
	// Line 408, Address: 0x1b1660, Func Offset: 0
	// Line 409, Address: 0x1b1664, Func Offset: 0x4
	// Func End, Address: 0x1b166c, Func Offset: 0xc
}

// 
// Start address: 0x1b1670
void PlayingInfoSetSubtitles(PlayingInfoSubtitlesM subtitles)
{
	// Line 424, Address: 0x1b1670, Func Offset: 0
	// Line 425, Address: 0x1b1674, Func Offset: 0x4
	// Func End, Address: 0x1b167c, Func Offset: 0xc
}

// 
// Start address: 0x1b1680
void PlayingInfoSetNoiseEffect(PlayingInfoNoiseEffectM mode)
{
	// Line 440, Address: 0x1b1680, Func Offset: 0
	// Line 441, Address: 0x1b1684, Func Offset: 0x4
	// Func End, Address: 0x1b168c, Func Offset: 0xc
}

