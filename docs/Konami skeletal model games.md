# List of Games That Use the Konami Skeletal Model Format

*Silent Hill 2*, *Silent Hill 3*, and *Silent Hill 4: The Room* use very similar skeletal model formats for characters, enemies, and other moving objects.  

Further inspection has revealed that many more Konami games use this format, meaning it is not exclusive to the Silent Hill series. Below is a list of identified games, along with their version information and platform details.

## List of games

| Version | Game | Platforms |
| ------- | ---------------------------------------------- | ------------------ |
| 3       | [Shadow of Destiny / Shadow of Memories](#shadow-of-destiny-usa-aka-shadow-of-memories-europe-japan) | PS2, PSP, Xbox, PC |
| 3       | [Tokimeki Memorial 3](#tokimeki-memorial-3) | PS2 |
| 3       | [Silent Hill 2](#silent-hill-2) | PS2 |
| 4       | [Silent Hill 2](#silent-hill-2) | Xbox, PC |
| 3       | [Silent Hill 3](#silent-hill-3) | PS2, PC |
| 3       | [Silent Hill HD (Silent Hill 2 game)](#silent-hill-hd-collection-usa-europe-aka-silent-hill-hd-edition-japan) | PS3, Xbox 360 |
| 3       | [Silent Hill HD (Silent Hill 3 game)](#silent-hill-hd-collection-usa-europe-aka-silent-hill-hd-edition-japan) | PS3, Xbox 360 |
| 4       | [Silent Hill 4: The Room](#silent-hill-4-the-room) | PS2, Xbox, PC |
| 7       | [Firefighter F.D.18](#firefighter-fd18) | PS2 |
| 7       | [J.League Winning Eleven Tactics](#jleague-winning-eleven-tactics) | PS2 |
| 8       | [European Club Soccer: Winning Eleven Tactics](#european-club-soccer-winning-eleven-tactics) | PS2 |
| 8       | [Pro Evolution Soccer Management](#pro-evolution-soccer-management) | PS2 |
| 7       | [PES 3 / Winning Eleven 7](#pro-evolution-soccer-3-europe-aka-winning-eleven-7-usa-asia) | PS2 |
| 8       | [PES 4 / Winning Eleven 8](#pro-evolution-soccer-4-europe-aka-winning-eleven-8-usa-asia) | PS2 |
| 8       | [PES 5 / Winning Eleven 9](#pro-evolution-soccer-5-europe-aka-winning-eleven-9-usa-asia) | PS2, PSP |
| 8       | [PES 6 / Winning Eleven 10 / PES 2007](#pro-evolution-soccer-6-europe-aka-winning-eleven-10-asia-aka-winning-eleven-pro-evolution-soccer-2007-usa) | PS2, PSP |
| 8       | [PES 2008 / Winning Eleven 2008](#pro-evolution-soccer-2008-usa-europe-aka-winning-eleven-2008-asia) | PS2, PSP |
| 8       | [PES 2009 / Winning Eleven 2009](#pro-evolution-soccer-2009-usa-europe-aka-winning-eleven-2009-asia) | PS2, PSP |
| 8       | [PES 2010 / Winning Eleven 2010](#pro-evolution-soccer-2010-usa-europe-aka-winning-eleven-2010-asia) | PS2, PSP |
| 8       | [PES 2011 / Winning Eleven 2011](#pro-evolution-soccer-2011-america-europe-aka-winning-eleven-2011-asia) | PS2, PSP |
| 8       | [PES 2012 / Winning Eleven 2012](#pro-evolution-soccer-2012-usa-europe-aka-winning-eleven-2012-asia) | PS2, PSP |
| 8       | [PES 2013 / Winning Eleven 2013](#pro-evolution-soccer-2013-usa-europe-aka-winning-eleven-2013-japan) | PS2, PSP |
| 8       | [PES 2014 / Winning Eleven 2014](#pro-evolution-soccer-2014-usa-europe-aka-winning-eleven-2014-japan) | PS2, PSP |
| 7       | [Contra: Shattered Soldier / Shin Contra](#contra-shattered-soldier-usa-europe-aka-shin-contra-asia) | PS2 |
| 8       | [Neo Contra](#neo-contra) | PS2 |
| 8       | [Castlevania: Lament of Innocence / Castlevania](#castlevania-lament-of-innocence-usa-aka-castlevania-europe-asia) | PS2 |
| 8       | [Castlevania: Curse of Darkness](#castlevania-curse-of-darkness) | PS2, Xbox |
| 8       | [Nanobreaker](#nanobreaker) | PS2 |

## File format specification

This is not a full specification, but a breaf introduction.

```C
uint32 magic = 0xFFFF0003;  // written 03 00 FF FF in little endian file
uint32 version;             // only 3, 4, 7 and 8 there found
uint32 matricesOffset;      // usualy 0x80, but could be 0x00 if no marices exist
uint32 matricesCount;
```

## Game series summary

### Shadow of Destiny / Shadow of Memories
The earliest game found using this format is *Shadow of Destiny* (also known as *Shadow of Memories*). In many games, the first offset to matrices is usually `0x80`, but in this game, the majority of the time it is `0x0`.

### Tokimeki Memorial 3
*Tokimeki Memorial 3* is the only game in the series that uses 3D graphics, and it uses this format for character models.

### Silent Hill series
*Silent Hill 2* is the only game that has a different version per platform: version 3 for *PS2* and version 4 for *Xbox* and *PC*. *Silent Hill 3* still uses version 3. *Silent Hill: HD Collection / Silent Hill: HD Edition* contains the *Sony - PlayStation 2* versions of *Silent Hill 2* and *Silent Hill 3*. Both games are in big endian, making them easier to reverse engineer.

### Firefighter F.D.18
This game has a different Magic ID: `21 06 02 20`.

### Pro Evolution Soccer / Winning Eleven series
*PES 1* (*Winning Eleven 5*) and *PES 2* (*Winning Eleven 6*) actually use RenderWare instead of the Konami skeletal format. Many other Konami non-*PES* football games do not appear to use this format either. Similarly, other handheld *PES* games for *Nintendo - Nintendo DS* and *Nintendo - Nintendo 3DS* seem to use different formats. Mobile versions like *Apple iOS*, *Google - Android*, and others were not tested, but it is unlikely they use this format. While not all Xbox 360 and PS3 *PES* games were tested, it appears they also use a different format. Additionally, *PES* games for PC and Wii have not been tested yet.

### Contra, Castlevania, and Nanobreaker
For *PS2* era games, these are the only *Contra* and *Castlevania* titles that use this format. *Nanobreaker* uses the Castlevania engine.

### Other tested games
It appears that the *Metal Gear Solid*, *Dance Dance Revolution*, and *Zone of the Enders* series for *PS2* do not use the Konami skeletal model format.

Below is a more detailed list of each game.

## Shadow of Destiny (USA) a.k.a. Shadow of Memories (Europe, Japan)
|Version|Platform|
|-------|--------|
| 3 | Sony - PlayStation 2 |
| 3 | Sony - PlayStation Portable |
| 3 | Microsoft - Xbox |
| 3 | Microsoft - Windows |

### Sony - PlayStation 2
- Shadow of Destiny (USA)
- Shadow of Memories (Europe) (En,Fr,De,Es,It)
- Shadow of Memories (Japan)

### Sony - PlayStation Portable
- Shadow of Destiny (USA)
- Shadow of Memories (Japan)

### Microsoft - Xbox
- Shadow of Memories (Europe) (En,Fr,De,Es,It)

### Microsoft - Windows
- Shadow of Destiny (USA)
- Shadow of Memories (Europe) (En,Fr,De,Es,It)

## Tokimeki Memorial 3
|Version|Platform|
|-------|--------|
| 3 | Sony - PlayStation 2 |

### Sony - PlayStation 2
- Tokimeki Memorial 3: Yakusoku no Ano Basho de (Japan)

## Silent Hill 2
|Version|Platform|
|-------|--------|
| 3 | Sony - PlayStation 2 |
| 4 | Microsoft - Xbox |
| 4 | Microsoft - Windows |

### Sony - PlayStation 2
Original version
- Silent Hill 2 (Europe) (En,Ja,Fr,De,Es,It)
- Silent Hill 2 (Japan) (En,Ja)
- Silent Hill 2 (Korea) (En,Fr,De,Es,It)
- Silent Hill 2 (USA) (En,Ja) (v1.20)

Updated version
- Silent Hill 2 (USA) (En,Ja,Fr,De,Es,It) (v2.01)
- Silent Hill 2: Director's Cut (Europe) (En,Fr,De,Es,It)
- Silent Hill 2: Saigo no Uta (Japan) (En,Ja)

### Microsoft - Xbox
Updated version
- Silent Hill 2: Inner Fears (Europe) (En,Ja,Fr,De,Es,It)
- Silent Hill 2: Restless Dreams (USA) (En,Ja)
- Silent Hill 2: Saigo no Uta (Japan) (En,Ja)

### Microsoft - Windows
Updated version
- Silent Hill 2 (USA)
- Silent Hill 2: Director's Cut (Europe) (En,Fr,De,Es,It)

## Silent Hill 3
|Version|Platform|
|-------|--------|
| 3 | Sony - PlayStation 2 |
| 3 | Microsoft - Windows |

### Sony - PlayStation 2
- Silent Hill 3 (Europe) (En,Fr,De,Es,It)
- Silent Hill 3 (USA) (En,Ja,Fr,De,Es,It,Zh,Ko)

### Microsoft - Windows
- Silent Hill 3 (Europe) (En,Fr,De,Es,It)
- Silent Hill 3 (USA) (En,Ja,Fr,De,Es,It,Zh,Ko)

## Silent Hill: HD Collection (USA, Europe) a.k.a. Silent Hill: HD Edition (Japan)
|Version|Platform|Game|
|-------|--------|----|
| 3 |Microsoft - Xbox 360 | Silent Hill 2 |
| 3 |Microsoft - Xbox 360 | Silent Hill 3 |
| 3 |Sony - PlayStation 3 | Silent Hill 2 |
| 3 |Sony - PlayStation 3 | Silent Hill 3 |

### Microsoft - Xbox 360
- Silent Hill: HD Collection (USA, Europe)

### Sony - PlayStation 3
- Silent Hill: HD Collection (Europe)
- Silent Hill: HD Collection (USA)
- Silent Hill: HD Edition (Japan)

## Silent Hill 4: The Room
|Version|Platform|
|-------|--------|
| 4 | Sony - PlayStation 2 |
| 4 | Microsoft - Xbox |
| 4 | Microsoft - Windows |

### Sony - PlayStation 2
- Silent Hill 4: The Room (Europe) (En,Fr,De,Es,It)
- Silent Hill 4: The Room (Japan) (En,Ja)
- Silent Hill 4: The Room (Korea) (En,Ko)
- Silent Hill 4: The Room (USA) (En,Ja)

### Microsoft - Xbox
- Silent Hill 4: The Room (Europe) (En,Fr,De,Es,It)
- Silent Hill 4: The Room (USA) (En,Ja,Ko)

### Microsoft - Windows
- Silent Hill 4: The Room (Europe) (En,Fr,De,Es,It)
- Silent Hill 4: The Room (USA) (En,Ja)

## Firefighter F.D.18
|Version|Platform|
|-------|--------|
| 7 | Sony - PlayStation 2 |

## J.League Winning Eleven Tactics
|Version|Platform|
|-------|--------|
| 7 | Sony - PlayStation 2 |

### Sony - PlayStation 2
- J.League Winning Eleven Tactics (Japan)

## European Club Soccer: Winning Eleven Tactics
|Version|Platform|
|-------|--------|
| 8 | Sony - PlayStation 2 |

### Sony - PlayStation 2
- European Club Soccer: Winning Eleven Tactics (Japan)

## Pro Evolution Soccer Management
|Version|Platform|
|-------|--------|
| 8 | Sony - PlayStation 2 |

### Sony - PlayStation 2
- Pro Evolution Soccer Management (Europe) (En,Fr,De,Es,It)

### Sony - PlayStation 2
- Firefighter F.D.18 (Europe) (En,Fr,De,Es,It)
- Firefighter F.D.18 (Japan)
- Firefighter F.D.18 (USA)

## Pro Evolution Soccer 3 (Europe) a.k.a. Winning Eleven 7 (USA, Asia)
|Version|Platform|
|-------|--------|
| 7 |Sony - PlayStation 2 |

### Sony - PlayStation 2
Original version
- World Soccer Winning Eleven 7 (Japan)

International version
- Pro Evolution Soccer 3 (Europe) (En,Fr,De,Es)
- Pro Evolution Soccer 3 (Italy)
- World Soccer Winning Eleven 7: International (China)
- World Soccer Winning Eleven 7: International (Japan) (En,Ja,Fr,De,Es,It)
- World Soccer Winning Eleven 7: International (Korea) (En,Ko)
- World Soccer Winning Eleven 7: International (USA) (En,Es)

## Pro Evolution Soccer 4 (Europe) a.k.a. Winning Eleven 8 (USA, Asia)
|Version|Platform|
|-------|--------|
| 8 | Sony - PlayStation 2 |

### Sony - PlayStation 2
Original and international versions
- Pro Evolution Soccer 4 (Europe) (En,Fr,De,Es) (v1.02)
- Pro Evolution Soccer 4 (Europe) (En,Fr,De,Es) (v2.00)
- Pro Evolution Soccer 4 (Italy)
- World Soccer Winning Eleven 8 (Japan)
- World Soccer Winning Eleven 8 (Korea)
- World Soccer Winning Eleven 8: International (Korea)
- World Soccer Winning Eleven 8: International (USA) (En,Es)

League version
- J.League Winning Eleven 8: Asia Championship (Japan)
- K-League Winning Eleven 8: Asia Championship (Korea)
- World Soccer Winning Eleven 8: Asia Championship (China)

Online version
- World Soccer Winning Eleven 8: Liveware Evolution (Japan)

## Pro Evolution Soccer 5 (Europe) a.k.a. Winning Eleven 9 (USA, Asia)
|Version|Platform|
|-------|--------|
| 8 | Sony - PlayStation 2 |
| 8 | Sony - PlayStation Portable |

### Sony - PlayStation 2
Original version
- Pro Evolution Soccer 5 (Europe) (En,Fr,De,Es)
- Pro Evolution Soccer 5 (Italy)
- World Soccer Winning Eleven 9 (Japan)
- World Soccer Winning Eleven 9 (Korea)
- World Soccer Winning Eleven 9 (USA) (En,Es)

League version
- J.League Winning Eleven 9: Asia Championship (Japan)
- K-League Winning Eleven 9: Asia Championship (Korea)

Online version
- World Soccer Winning Eleven 9: Liveware Evolution (Korea)

### Sony - PlayStation Portable
- Pro Evolution Soccer 5 (Europe) (En,Fr,De,Es,It)
- World Soccer Winning Eleven 9: Ubiquitous Evolution (Japan, Asia)
- World Tour Soccer: Winning Eleven 9 (USA)

## Pro Evolution Soccer 6 (Europe) a.k.a. Winning Eleven 10 (Asia) a.k.a. Winning Eleven: Pro Evolution Soccer 2007 (USA)
|Version|Platform|
|-------|--------|
| 8 | Sony - PlayStation 2 |
| 8 | Sony - PlayStation Portable |

### Sony - PlayStation 2
Original version
- Pro Evolution Soccer 6 (Europe) (It,Pl) (v1.01)
- Pro Evolution Soccer 6 (Europe) (It,Pl) (v2.00)
- Pro Evolution Soccer 6 (Europe)
- Pro Evolution Soccer 6 (France)
- Pro Evolution Soccer 6 (Germany)
- Pro Evolution Soccer 6 (Spain)
- Winning Eleven: Pro Evolution Soccer 2007 (USA) (En,Fr,De,Es,It)
- World Soccer Winning Eleven 10 (Japan)
- World Soccer Winning Eleven 10 (Korea)

League version
- J.League Winning Eleven 2007: Club Championship (Japan)
- J.League Winning Eleven 10 + Europe League '06-'07 (Japan) (v1.03)
- J.League Winning Eleven 10 + Europe League '06-'07 (Japan) (v2.01)

Online version
- World Soccer Winning Eleven 10: Liveware Evolution (Korea)

### Sony - PlayStation Portable
- Pro Evolution Soccer 6 (Europe) (En,Fr,De,Es,It)
- Winning Eleven: Pro Evolution Soccer 2007 (USA)
- World Soccer Winning Eleven 10: Ubiquitous Evolution (Japan, Asia)

## Pro Evolution Soccer 2008 (USA, Europe) a.k.a. Winning Eleven 2008 (Asia)
|Version|Platform|
|-------|--------|
| 8 | Sony - PlayStation 2 |
| 8 | Sony - PlayStation Portable |

### Sony - PlayStation 2
Original version
- PES 2008: Pro Evolution Soccer (Europe) (En,Es)
- PES 2008: Pro Evolution Soccer (Europe) (Fr,De)
- PES 2008: Pro Evolution Soccer (Europe) (It,Pt)
- PES 2008: Pro Evolution Soccer (USA)
- World Soccer Winning Eleven 2008 (Japan, Korea) (En,Ja)

League version
- J.League Winning Eleven 2008: Club Championship (Japan)

## Pro Evolution Soccer 2009 (USA, Europe) a.k.a. Winning Eleven 2009 (Asia)
|Version|Platform|
|-------|--------|
| 8 | Sony - PlayStation 2 |
| 8 | Sony - PlayStation Portable |

### Sony - PlayStation 2
Original version
- PES 2009: Pro Evolution Soccer (Europe) (En,Es,It,Pt)
- PES 2009: Pro Evolution Soccer (Europe) (Fr,De)
- PES 2009: Pro Evolution Soccer (USA) (En,Fr,Es,Pt)
- World Soccer Winning Eleven 2009 (Japan, Asia) (En,Ja)

League version
- J.League Winning Eleven 2009: Club Championship (Japan)

### Sony - PlayStation Portable
- PES 2009: Pro Evolution Soccer (Europe) (En,Fr,De,Es,It,Pt)
- PES 2009: Pro Evolution Soccer (USA)
- World Soccer Winning Eleven 2009 (Japan)

## Pro Evolution Soccer 2010 (USA, Europe) a.k.a. Winning Eleven 2010 (Asia)
|Version|Platform|
|-------|--------|
| 8 | Sony - PlayStation 2 |
| 8 | Sony - PlayStation Portable |

### Sony - PlayStation 2
Original version
- PES 2010: Pro Evolution Soccer (Europe) (En,Nl,Sv,Ru,El)
- PES 2010: Pro Evolution Soccer (Europe) (Es,It,Pt)
- PES 2010: Pro Evolution Soccer (Europe) (Fr,De)
- PES 2010: Pro Evolution Soccer (USA)
- World Soccer Winning Eleven 2010 (Japan, Asia) (En,Ja)

League version
- J.League Winning Eleven 2010 - Club Championship (Japan)

Challenge of Blue Samurai version
- World Soccer Winning Eleven 2010: Aoki Samurai no Chousen (Japan) (En,Ja)

### Sony - PlayStation Portable
Original version
- PES 2010: Pro Evolution Soccer (Europe) (En,Nl,Sv,Ru)
- PES 2010: Pro Evolution Soccer (Europe) (Fr,De,Es,It,Pt)
- PES 2010: Pro Evolution Soccer (USA) (En,Fr,Es,Pt)
- World Soccer Winning Eleven 2010 (Japan, Korea) (En,Ja)

Challenge of Blue Samurai version
- World Soccer Winning Eleven 2010: Aoki Samurai no Chousen (Japan)

## Pro Evolution Soccer 2011 (America, Europe) a.k.a. Winning Eleven 2011 (Asia)
|Version|Platform|
|-------|--------|
| 8 | Sony - PlayStation 2 |
| 8 | Sony - PlayStation Portable |

### Sony - PlayStation 2
- PES 2011: Pro Evolution Soccer (Europe) (En,Nl,Sv,Ru,Tr)
- PES 2011: Pro Evolution Soccer (Europe) (Es,It,Pt,El)
- PES 2011: Pro Evolution Soccer (Europe) (Fr,De)
- PES 2011: Pro Evolution Soccer (USA)
- World Soccer Winning Eleven 2011 (Asia) (En,Zh)
- World Soccer Winning Eleven 2011 (Japan) (En,Ja)

### Sony - PlayStation Portable
- PES 2011: Pro Evolution Soccer (Canada) (En,Fr)
- PES 2011: Pro Evolution Soccer (Europe) (En,Nl,Sv,Ru)
- PES 2011: Pro Evolution Soccer (Europe) (Es,Pt)
- PES 2011: Pro Evolution Soccer (Europe) (Fr,De)
- PES 2011: Pro Evolution Soccer (Europe) (It,El)
- PES 2011: Pro Evolution Soccer (Latin America) (Es,Pt)
- PES 2011: Pro Evolution Soccer (USA) (En,Es)
- World Soccer Winning Eleven 2011 (Asia) (En,Zh,Ko)
- World Soccer Winning Eleven 2011 (Japan)

## Pro Evolution Soccer 2012 (USA, Europe) a.k.a. Winning Eleven 2012 (Asia)
|Version|Platform|
|-------|--------|
| 8 | Sony - PlayStation 2 |
| 8 | Sony - PlayStation Portable |

### Sony - PlayStation 2
- PES 2012: Pro Evolution Soccer (Europe) (En,Nl,Sv,Ru,Tr)
- PES 2012: Pro Evolution Soccer (Europe) (Es,It,Pt,El)
- PES 2012: Pro Evolution Soccer (Europe) (Fr,De)
- PES 2012: Pro Evolution Soccer (USA)
- World Soccer Winning Eleven 2012 (Japan) (En,Ja)
- World Soccer Winning Eleven 2012 (Korea)

### Sony - PlayStation Portable
- PES 2012: Pro Evolution Soccer (Europe) (En,Nl,Sv,Ru,Tr)
- PES 2012: Pro Evolution Soccer (Europe) (Es,It,Pt,El)
- PES 2012: Pro Evolution Soccer (Europe) (Fr,De)
- PES 2012: Pro Evolution Soccer (USA)
- World Soccer Winning Eleven 2012 (Asia) (En,Zh)
- World Soccer Winning Eleven 2012 (Japan)

## Pro Evolution Soccer 2013 (USA, Europe) a.k.a. Winning Eleven 2013 (Japan)
|Version|Platform|
|-------|--------|
| 8 | Sony - PlayStation 2 |
| 8 | Sony - PlayStation Portable |

### Sony - PlayStation 2
- PES 2013: Pro Evolution Soccer (Europe) (En,Nl,Sv,Ru,Tr)
- PES 2013: Pro Evolution Soccer (Europe) (Es,Pt)
- PES 2013: Pro Evolution Soccer (Europe) (Fr,De)
- PES 2013: Pro Evolution Soccer (Europe) (It,El)
- PES 2013: Pro Evolution Soccer (USA)

### Sony - PlayStation Portable
- PES 2013: Pro Evolution Soccer (Europe) (En,Nl,Sv,Ru,Tr)
- PES 2013: Pro Evolution Soccer (Europe) (Es,Pt)
- PES 2013: Pro Evolution Soccer (Europe) (It,El)
- PES 2013: Pro Evolution Soccer (USA) (En,Fr,Es,Pt)
- Pro Evolution Soccer 2013 (Europe) (Fr,De)
- World Soccer Winning Eleven 2013 (Japan)

## Pro Evolution Soccer 2014 (USA, Europe) a.k.a. Winning Eleven 2014 (Japan)
|Version|Platform|
|-------|--------|
| 8 | Sony - PlayStation 2 |
| 8 | Sony - PlayStation Portable |

### Sony - PlayStation 2
- PES 2014: Pro Evolution Soccer (Europe) (En,Nl,Sv,Ru,Tr)
- PES 2014: Pro Evolution Soccer (Europe) (Es,Pt)
- PES 2014: Pro Evolution Soccer (Europe) (Fr,De)
- PES 2014: Pro Evolution Soccer (Europe) (It,El)

### Sony - PlayStation Portable
Original version
- PES 2014: Pro Evolution Soccer (Europe) (En,Nl,Sv,Ru,Tr)
- PES 2014: Pro Evolution Soccer (Europe) (Es,Pt)
- PES 2014: Pro Evolution Soccer (Europe) (Fr,De)
- PES 2014: Pro Evolution Soccer (Europe) (It,El)
- PES 2014: Pro Evolution Soccer (USA)
- World Soccer Winning Eleven 2014 (Japan)

Challenge of Blue Samurai version
- World Soccer Winning Eleven 2014 - Aoki Samurai no Chousen (Japan)

## Contra: Shattered Soldier (USA, Europe) a.k.a. Shin Contra (Asia)
|Version|Platform|
|-------|--------|
| 7 | Sony - PlayStation 2 |

### Sony - PlayStation 2
- Contra: Shattered Soldier (Europe) (En,Fr,De,Es,It)
- Contra: Shattered Soldier (USA) (En,Fr,Es)
- Shin Contra (Asia)
- Shin Contra (Japan)

## Neo Contra
|Version|Platform|
|-------|--------|
| 8 | Sony - PlayStation 2 |

### Sony - PlayStation 2
- Neo Contra (Europe) (En,Fr,De)
- Neo Contra (Japan)
- Neo Contra (USA)

## Castlevania: Lament of Innocence (USA) a.k.a. Castlevania (Europe, Asia)
|Version|Platform|
|-------|--------|
| 8 | Sony - PlayStation 2 |

### Sony - PlayStation 2
- Castlevania (Europe) (En,Fr,De,Es,It)
- Castlevania (Japan) (En,Ja) (Genteiban)
- Castlevania (Japan) (En,Ja)
- Castlevania (Korea) (En,Ko)
- Castlevania: Lament of Innocence (USA)

## Castlevania: Curse of Darkness
|Version|Platform|
|-------|--------|
| 8 | Sony - PlayStation 2 |
| 8 | Microsoft - Xbox |

### Sony - PlayStation 2
- Castlevania: Curse of Darkness (Europe) (En,Fr,De,Es,It)
- Castlevania: Curse of Darkness (USA)

### Microsoft - Xbox
- Castlevania: Curse of Darkness (Europe) (En,Fr,De,Es,It)
- Castlevania: Curse of Darkness (USA)

## Nanobreaker
|Version|Platform|
|-------|--------|
| 8 | Sony - PlayStation 2 |

### Sony - PlayStation 2
- Nanobreaker (Europe) (En,Fr,De,Es,It)
- Nanobreaker (Japan)
- Nanobreaker (USA)
