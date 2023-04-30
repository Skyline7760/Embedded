/*
----------------------------------------------------------------------------------------------------------------
------------------
Function Name: LT24_initialise
Function Description: Initialises LT24 Display
Function Input: None
Function Return: VOID
Author : APS
----------------------------------------------------------------------------------------------------------------
------------------
*/
void display_initialise() {
exitOnFail(
 LT24_initialise(0xFF200060,0xFF200080), //Initialise LCD
 LT24_SUCCESS); //Exit if not successful
 HPS_ResetWatchdog();
}
