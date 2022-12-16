.n64 // Let armips know we're coding for the N64 architecture
.open "cv64.z64", "cv64.mod.z64", 0 // Open the ROM file
.include "asm/cv64.asm" // Include cv64.asm to tell armips' linker where to find the game's function(s)
.headersize 0x7FFFF400 // Set the displacement between ROM and RAM addresses. 0x80000400 - 0x1000 = 0x7FFFF400
// The address we're going to insert our custom code to. We are going to overwrite some unused strings in memory that are related to the unused crash screen.
.org 0x800A28F0
.importobj "play_sound.o" // Import and link the compiled C object, overwriting the useless function with our new code

/// Hooks and patches ///

.org 0x80015390		// Hook (i.e. insert a call to) our "mod_play_any_sound()" function inside the game loop, at 0x80015390
	jal mod_play_any_sound

// Make the money counter update even if no new money has been collected from money bags.
.org 0x800BA620
	nop
.org 0x800BA63C
	nop

.close // Close the ROM file
