#include "../include/cv64.h"

// This function will be called inside the game loop function, so that it can constantly check for inputs.
// More specifically, it will be called from 0x80015390 (see "main.asm")

void mod_play_any_sound()
{
	if (current_menu == PAUSE)
	{
		switch(controller.buttons_pressed)
		{
			case START_BUTTON:
				play_sound(sound_ID);
				break;
				
			case R_JPAD:
				sound_ID++;
				break;
			
			case L_JPAD:
				sound_ID--;
				break;
				
			case U_JPAD:
				sound_ID += 50;
				break;
				
			case D_JPAD:
				sound_ID -= 50;
				break;
				
			case L_TRIG:
				sound_ID = 0;
				break;
			
			// Stop sound			
			case R_TRIG:
				play_sound(1);
				break;
		}
	}
	// Original instruction at 0x80015390
	// We replaced the call to "controller_readData()" with "mod_play_any_sound()"
	// So in order to not break things up, we put the call we've replaced at the end of this function here,
	// as if we never replaced the call to "controller_readData()".
	controller_readData();
}
