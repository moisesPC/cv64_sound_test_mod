# Castlevania 64 - Sound Test Mod

[Preview video](https://cdn.discordapp.com/attachments/1045877172956569641/1053098919275528242/1_video-converter.com.mp4)

This is a mod for Castlevania (Nintendo 64) that adds a sound test feature in the pause menu. The controls are as follows:

```
D-PAD Right = Advance +1 in sound ID
D-PAD Left = Go back -1 in sound ID
D-PAD Up = Advance +50 in sound ID
D-PAD Down = Go back -50 in sound ID
Start = Play sound
R = Stop sound
L = Set sound ID to 0
```

**NOTE 1**: This mod is not compatible with Easy mode, as the GOLD counter isn't displayed there. Use the mod on a Normal or Hard mode save file.

**NOTE 2**: If after playing a specific sound ID, and then trying to load another sounds, the game doesn't play them, you may have to reset the game in order for it to work again. </br>It's recommended to do a savestate before starting playing the sounds if using an emulator to prevent having to reset if this ever happens.

## Build Requirements

### The following tools are required to build:

* n64chain
* n64crc
* armips

[You can download the binaries for those here](https://drive.google.com/file/d/18yQu6WUJxSjZP76Vd2r573Cku3ZuT3U7/view?usp=share_link). Then, place them in `C:\n64chain\bin` (for example), and add that path to the "PATH" environment variable.

#### Sources
* n64chain: https://github.com/tj90241/n64chain
* n64crc: http://n64dev.org/n64crc.html
* armips: https://github.com/Kingcom/armips

## Building
* Place a Castlevania 64 (USA v1.0) ROM in the project's root, and rename it to `cv64.z64`. The SHA-1 for that ROM is `989A28782ED6B0BC489A1BBBD7BEC355D8F2707E`
* Run `build.dat`

The patched rom will be written to `cv64.mod.z64`.

## Project structure
```
src/
  play_sound.c ......... Custom C code for the mod

include/
  controller.h ..... Controller struct
  menus.h ..... Current opened submenu IDs
  n64types.h ......... N64 datatypes
  cv64.h .......... Declarations for game variables and functions

asm/
  cv64.asm .... address definitions for game variables and functions
  main.asm ... Linker tasks and hook inserts

build.dat .......... Build script
```

## Credits
* **shygoo**: For his [SM64 C code injection tutorial](https://hack64.net/Thread-Importing-C-Code-Into-SM64-Using-n64chain-and-armips) and [repo](https://github.com/shygoo/sm64-c-injection), which were used in the creation of this repo. 
