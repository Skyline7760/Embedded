/*
----------------------------------------------------------------------------------------------------------------
---
Function: set_count
Function Usage: Prints count to seven segment display, written seperately to reduce runtime
Function Input : NIL
Function Returns: Void
Author: APS
----------------------------------------------------------------------------------------------------------------
---
*/
void set_count () {
// write count to seven seg display
sevenseg_write ( 5, 57 ) ; // set c to display 5
sevenseg_write ( 4, 63 ); // set o to display 4
sevenseg_write ( 3, 62); // set u to display 3
sevenseg_write (2, 55 ); // set n to display 2
sevenseg_write (1, 112); // set t to display 1
sevenseg_write ( 0, 0 ); // turns off other display
}