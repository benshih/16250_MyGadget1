#include "mg2.h"


int main(void)
{	
	initSystem();

	while(1)
	{	
		// Make the LED fade through a bunch of colors
		for(int i = 0; i < 255; i++)
		{
			setLED(255-i, i, 0);
			_delay_ms(1);
		}
		for(int i = 0; i < 255; i++)
		{
			setLED(0, 255-i, i);
			_delay_ms(1);
		}
		for(int i = 0; i < 255; i++)
		{
			setLED(i, 0, 255-i);
			_delay_ms(1);
		}
		
		// Check if the button has been pressed in the meantime, if so, nighty-night gadget!
		if(sleep_status == 1)
		{
		    /* Goodnight Moon:
			...Goodnight room
			Goodnight moon
			Good night cow jumping over the moon
			Goodnight light
			And the red balloon
			Goodnight bears
			Goodnight chairs
			Goodnight kittens
			And goodnight mittens
			Goodnight clocks
			And goodnight socks
			Goodnight little house
			And goodnight mouse
			Goodnight comb
			And goodnight brush
			Goodnight nobody
			Goodnight mush
			And goodnight to the old lady
			whispering "hush"
			Goodnight stars
			Goodnight air
			Goodnight noises everywhere */
			goToSleep(); 
		}
	}
	return 0;
}