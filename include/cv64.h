/*
Here we create declarations for a few functions and variables in CV64 so they can be referenced from our custom C code.
Later we will tell armips their addresses by defining labels for them in "cv64.asm"
*/
#include "n64types.h"
#include "controller.h"
#include "menus.h"

// Actually the current gold amount. In this mod, we will use this variable as a sound ID
// for switching between the different sounds, as well as to be able to see the sound ID in the GOLD counter.
extern u32 sound_ID; // 0x80389C44

extern u16 current_menu; // 0x80389EEE. See "menus.h" for all possible values.
extern controller_struct controller; // 0x80387D7C
extern u8 play_sound(u16 song_ID); // 0x80013EAC
extern void controller_readData(); // 0x80016B6C
