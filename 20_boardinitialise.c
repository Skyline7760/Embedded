/*
----------------------------------------------------------------------------------------------------------------
------------------------
Function Name: board_initialise
Function Description: Initialise the board during startup
Function Input: NIL
Function Return: VOID
Function Author: APS
----------------------------------------------------------------------------------------------------------------
-----------------------
*/
void board_initialise(){
// Initialise LT24 Display
set_hello(); // Say hello
printf ("Initialising LT24 Display \n");
display_initialise(); // initialise display
HPS_ResetWatchdog(); // reset watchdog
// Initialise Audio on WM8731
printf (" Initialising WM8731 DAC \n");
audio_initialise(); // Initialise audio
HPS_ResetWatchdog(); // Reset watchdog
// Initialise A9 Private Timer
printf("Initialising Private Timer \n");
intialise_timer ( 225000000 ); // Initialise the Timer to Count One Second
// Initialise FileSystem to begin copying files
printf(" Initialising FAT SD Card on Board \n");
file_fetch_initialise(); // Initialise File System to copy files from SD Card
HPS_ResetWatchdog(); // Reset watchdog
set_load(); // Say that you are loading
// Read the files and its size
read_files();
HPS_ResetWatchdog();
initialise_buffer_size();
HPS_ResetWatchdog();
// Initialise IRQs
HPS_IRQ_initialise ( NULL );
// Configure button 4 to call interrupt
key_ptr[2] = 0x8;
printf ("Initialising Complete \n");
set_do(); // Ask what to do!
mode = MODE_SELECT; // set mode to select process
}