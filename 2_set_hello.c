/*
---------------------------------------------------------------------------------------------------------------
Function: set_hello 
Function Usage: Prints hello to directly to seven segment display, written seperately to reduce 
run time
Function Input : NONE
Function Returns: Void
Author: APS
----------------------------------------------------------------------------------------------------------------
*/

void set_hello () {
// write hello to seven segment display 
sevenseg_write ( 5, 116 ); // set h to display 5
sevenseg_write ( 4, 121 ); // set e to display 4
sevenseg_write ( 3 , 56 ); // set l to display 3
sevenseg_write ( 2, 56 ); // set l to display 2
sevenseg_write ( 1, 63 ); // set to display 1
sevenseg_write ( 0, 0 ); // turns off other display
}