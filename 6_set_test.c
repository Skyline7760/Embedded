/*
----------------------------------------------------------------------------------------------------------------
---
Function: set_test
Function Usage: Prints test to seven segment display, written seperately to reduce runtime
Function Input : NIL
Function Returns: Void
Author: APS
----------------------------------------------------------------------------------------------------------------
---
*/
void set_test () {
// write test to seven seg display
sevenseg_write ( 5, 112 ); // set t to display 5
sevenseg_write ( 4, 121 ); // set e to display 4
sevenseg_write ( 3, 109 ); // set s to display 3
sevenseg_write ( 2, 112 ); // set t to display 2
sevenseg_write ( 1, 0 ); // turns off other display
sevenseg_write ( 0, 0 ); // turns off other display
}