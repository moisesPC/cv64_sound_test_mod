// Tell armips' linker where the functions and variables we declared in "cv64.h" are located in RAM during the game's execution

// Actually the current gold amount. In this mod, we will use this variable as a sound ID
// for switching between the different sounds, as well as to be able to see the sound ID in the GOLD counter.
.definelabel sound_ID, 0x80389C44

.definelabel current_menu, 0x80389EEE
.definelabel controller, 0x80387D7C
.definelabel play_sound, 0x80013EAC
.definelabel controller_readData, 0x80016B6C