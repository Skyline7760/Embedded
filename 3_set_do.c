/*
----------------------------------------------------------------------------------------------------------------
---
Function: set_do
Function Usage: Prints do to seven segment display, written seperately to reduce runtime
Function Input : NIL
Function Returns: Void
Author: APS
----------------------------------------------------------------------------------------------------------------
---
*/
void set_do () {
// write do to seven seg display
sevenseg_write ( 5, 94); // set d to display 5
sevenseg_write ( 4, 63 ); // set o to display 4
sevenseg_write ( 3, 0 ); // turns off other display
sevenseg_write ( 2, 0 ); // turns off other display
sevenseg_write ( 1, 0 ); // turns off other display
sevenseg_write ( 0, 0 ); // turns off other display
}