/*
----------------------------------------------------------------------------------------------------------------
------------------------
Function Name: mode_select_interrupt
Function Description: interrupt function to set the system to sleep or wake up mode
Function Input: NIL
Function Return: VOID
Function Author: APS
----------------------------------------------------------------------------------------------------------------
-----------------------
*/
void mode_select_interrupt (HPSIRQSource interruptID, bool isInit, void* initParams){
if(!isInit){
unsigned int press;
press = key_ptr[3]; // read push button interrupt register
key_ptr[3] = press; // set the value again to interrupt register to reset the register
HPS_ResetWatchdog(); // reset watchdog
set_do(); // Ask what to do!
temp_mode = 0; // Set temp mode to zero
mode = 0; // Reset the mode to MODE_SELECT
}
}