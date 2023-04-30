/*
------------------------------------------------------------------------------------------------------------------------------------
Function : Main
Function Author: APS
------------------------------------------------------------------------------------------------------------------------------------
*/

	int main (){
		board_initialise();
		int IS_START = 0; // If the count is starting for first time
		int i = 1; // Variable to pass to count function
		int CURRENT_COUNT = 10;
		int PRESS_COUNT = 0;
		HPS_ResetWatchdog();
		intro_out ( music_buffer, music_size ); // Say the application
		printf(" Initialising Interrupt \n");// IRQ interrupt handler for push button press
		HPS_IRQ_registerHandler( IRQ_LSC_KEYS,mode_select_interrupt);
		HPS_ResetWatchdog();
		
		// Enter the software based on modes
		while (1) {
			if ( mode == 0 ){
				HPS_ResetWatchdog(); // Resets the watch dog
				animation(); // Display Animation
				
				//intro_out 
				( music_buffer, music_size );
				key_pressed = getPressedKeys(); // Get which key is pressed
				if ( key_pressed & 0x2 ){ // Button 2 is pressed -
					Go to Play mode - 1
					set_count(); // Say that you are going to play counting
					temp_mode = 1; // Set temp mode to say you are ready to count
					HPS_ResetWatchdog(); // Reset the watchdog
					IS_START = 1;
				}else if ( key_pressed & 0x4 ) {// Button 3 is pressed
					set_test(); // Say that you are going to test counting
					temp_mode = 2; // set temp accordingly
					IS_START = 1;
					CURRENT_COUNT = 10;
					PRESS_COUNT = 0;
					HPS_ResetWatchdog(); // Reset the watchdog
				}else if ( key_pressed & 0x1 ){ // Button 1 is pressed
					mode = temp_mode; // Set the mode reset_interrupt();
					HPS_ResetWatchdog();
				}
			}else if ( mode == 1 ) {
				key_pressed = getPressedKeys();
				if ( IS_START ) {
					i = 1; // set the count to 1
					count_play ( i ); // Play Count 1
					IS_START = 0; // Reset IS_START
					i = i + 1; // increment i
					HPS_ResetWatchdog();
				}else if ( key_pressed & 0x1 ) { // Button 1 is pressed
					count_play ( i );
					if ( i < 10 ) {
						i = i + 1; // Go to next number
					}else {
						i = 1;
					}HPS_ResetWatchdog();
				}HPS_ResetWatchdog();
			}else if ( mode == 2 ) {
				key_pressed = getPressedKeys ();
				if ( IS_START ) { // Start of the program for first time
					i = 1;
					test_play ( i , PRESS_COUNT ); // Display Button Press Count
					if ( key_pressed & 0x1 ){ // Is Button Pressed?
						PRESS_COUNT = PRESS_COUNT + 1; // Increment PRESS_COUNT if button is pressed
						test_play ( i, PRESS_COUNT ); // Display updated PRESS_COUNT
						sound_out ( one_buffer, one_size); // Produce the sound
						i = i + 1; // Go to next count
						IS_START = 0; // Program ran, no longer initial run
						PRESS_COUNT = 0; // Reset PRESS_COUNT
						reset_interrupt(); // Reset Timer -> RUN AGAIN
						HPS_ResetWatchdog(); // Reset Watchdog
						CURRENT_COUNT = 10; // CURRENT_COUNT for Timer - Count for 10 seconds
					} else {
						if ( CURRENT_COUNT >= 0 ){ // Is count for seconds less than 10
							if( (*private_timer_interrupt_value & 0x1 ) ) { // Read Timer Interrupt Value, If YES, then Timer has ran for 1 seconds
								*LED_ptr = ( 1 << CURRENT_COUNT ); // Show it on RED LEDs
								CURRENT_COUNT = CURRENT_COUNT - 1; // Increase Count size
								reset_interrupt(); // Reset Timer -> RUN AGAIN
								HPS_ResetWatchdog(); // Reset Watchdog
							}
						}else{//
							*LED_ptr = ( 0 << CURRENT_COUNT ); // Reset RED LED
							mode = 0; // If timer counts for 10 seconds -> Reset to mode selector
							set_do(); // set the seven segment to mode display
						}
					}
				} else {
					test_play ( i , PRESS_COUNT ); // Ok, not initial run
					if ( ( key_pressed & 0x1 ) & (PRESS_COUNT < i)) { // check if button is pressed, and less than current number of count
						PRESS_COUNT = PRESS_COUNT + 1; // Increase Count for Button Press
						test_play ( i, PRESS_COUNT ); // Display PRESS_COUNT on SevenSeg
						reset_interrupt(); // Reset Timer Interrupt
						CURRENT_COUNT = 10; // CURRENT_COUNT for timer - Count for 10 seconds
					}else if ( PRESS_COUNT == i ) { // If Button Pressed for correct number of times
						test_audio_out ( i ); // Pass to test_audio_out to produce corresponding audio
						PRESS_COUNT = 0; // Reset PRESS_COUNT
						CURRENT_COUNT = 10; // Reset Timer Count
						reset_interrupt(); // Reset Timer Interrupt
						if ( i < 10 ){
							i = i + 1; // Increase counter count
						}else{
							IS_START = 1; // Counted for 10 times, set to Intial set count stage
							i = 0; // For debug purposes set.
						}
					} else{
						if ( CURRENT_COUNT >= 0 ){
							if( (*private_timer_interrupt_value & 0x1 ) ) { // Has timer ran for 1 second
							*LED_ptr = ( 1 << CURRENT_COUNT ); // Show it in RED LED
							CURRENT_COUNT = CURRENT_COUNT - 1; // Increase timer count
							reset_interrupt(); // Reset timer
							HPS_ResetWatchdog(); // Reset watchdog
						}
					}else{
						*LED_ptr = ( 0 << CURRENT_COUNT ); // Reset RED LED
						mode = 0; // Go to mode selector
						set_do(); // Set display for mode selector
					}
				}
			}
		}
	}
}