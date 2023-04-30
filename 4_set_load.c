/*
----------------------------------------------------------------------------------------------------------------
---
Function: set_load
Function Usage: Prints load to seven segment display, written seperately to reduce runtime
Function Input : NIL
Function Returns: Void
Author: APS
----------------------------------------------------------------------------------------------------------------
---
*/
void set_load () {
// write load to seven seg display
sevenseg_write ( 5, 56 ); // set l to display 5
sevenseg_write ( 4, 63 ); // set o to display 4
sevenseg_write ( 3, 119 ); // set a to display 3
sevenseg_write ( 2, 94 ); // set d to display 2
sevenseg_write ( 1, 0 ); // turns off other display
sevenseg_write ( 0, 0 ); // turns off other display
}