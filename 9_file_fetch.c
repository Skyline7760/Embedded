/*
-------------------------------------------------------------------------------------------------
Function: file_fetch_initialise
Function Usage: Initialises Files Pointer for FATFs Library
Function Input: NIL, fetches all variables and saves them to pre-set variable pointers known.
Function Working: Allocates the memory, Mounts the File System and Opens the File after 
allocating memory for the file
Function Returns: None
Author: APS
--------------------------------------------------------------------------------------------------
*/
void file_fetch_initialise (){
fs = malloc ( sizeof (FATFS) ); // allocate memory for FATFS pointer.
HPS_ResetWatchdog(); // Reset Watchdog
fr = f_mount ( fs , "" , 0); // Mount the drive to program
// Check if mounting is success
switch(fr){
    case FR_OK: // Mount Success
    printf ("Mount success \n");
break;
default: // For all other cases mount failed.
printf("error \n");
}
// Allocate size for FIL enum
// Allocate memory for all declared files above
intro_file = malloc ( sizeof (FIL));
one_file = malloc ( sizeof (FIL));
two_file = malloc ( sizeof (FIL));
three_file = malloc ( sizeof (FIL));
four_file = malloc ( sizeof (FIL));
five_file = malloc ( sizeof (FIL));
six_file = malloc ( sizeof (FIL));
seven_file = malloc ( sizeof (FIL));
eight_file = malloc ( sizeof (FIL));
nine_file = malloc ( sizeof (FIL));
ten_file = malloc ( sizeof (FIL));
music_file = malloc ( sizeof (FIL));
HPS_ResetWatchdog(); // Reset Watchdog
printf("Opening Files \n");
// open the corresponding files -> uses function f_open and passes the status to fr_status which prints the status onto console and resets watchdog
// Calls FATFs system to open the file and reset watchdog
printf("Opening intro.wav \n");
fr_status( f_open ( intro_file ,"intro.wav", FA_READ) ); // open intro.wav
HPS_ResetWatchdog(); // reset watchdog
printf("Opening one.wav \n");
fr_status( f_open ( one_file , "one.wav", FA_READ) ); // opens one.wav
HPS_ResetWatchdog(); // reset watchdog
printf("Opening two.wav \n");
fr_status( f_open ( two_file , "two.wav", FA_READ) ); // opens two.wav
HPS_ResetWatchdog(); // reset watchdog
printf("Opening three.wav \n");
fr_status( f_open (three_file, "three.wav", FA_READ) ); // opens three.wav
HPS_ResetWatchdog(); // reset watchdog
printf("Opening four.wav \n");
fr_status( f_open (four_file, "four.wav", FA_READ) ); // opens four.wav
HPS_ResetWatchdog(); // reset watchdog
printf("Opening five.wav \n");
fr_status( f_open (five_file, "five.wav", FA_READ) ); // opens five.wav
HPS_ResetWatchdog(); // reset watchdog
printf("Opening six.wav \n");
fr_status( f_open (six_file, "six.wav", FA_READ) ); // opens six.wav
HPS_ResetWatchdog(); // reset watchdog
printf("Opening seven.wav \n");
fr_status( f_open (seven_file, "seven.wav", FA_READ) ); // opens seven.wav
HPS_ResetWatchdog(); // reset watchdog
printf("Opening eight.wav \n");
fr_status( f_open (eight_file, "eight.wav", FA_READ) ); // opens eight.wav
HPS_ResetWatchdog(); // reset watchdog
printf("Opening nine.wav \n");
fr_status( f_open( nine_file, "nine.wav", FA_READ) ); // opens nine.wav
HPS_ResetWatchdog(); // resets watchdog
printf("Opening ten.wav \n");
fr_status( f_open( ten_file, "ten.wav", FA_READ) ); //opens ten.wav
HPS_ResetWatchdog(); // reset watchdog
printf("Opening music.wav \n");
fr_status ( f_open ( music_file, "music.wav", FA_READ ) 
); // opens music.wav
HPS_ResetWatchdog(); // reset watchdog
}