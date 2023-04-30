/*
----------------------------------------------------------------------------------------------------------------
------------------
Function Name: audio_initialise
Function Description: Initialise Audio on WM8731
Function Input: NIL
Function Returns: VOID
Author: APS
----------------------------------------------------------------------------------------------------------------
------------------
*/
void audio_initialise(){
exitOnFail ( WM8731_initialise(0xFF203040) , WM8731_SUCCESS ); // Initialise WM8731 by calling initialise function in audio driver
WM8731_clearFIFO (true, true) ; // clear FIFO space
// Get memory addresses connecting to I2C bus
fifospace_ptr = WM8731_getFIFOSpacePtr();
audio_left_ptr = WM8731_getLeftFIFOPtr();
audio_right_ptr = WM8731_getRightFIFOPtr();
}
