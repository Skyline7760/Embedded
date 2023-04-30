/*
----------------------------------------------------------------------------------------------------------------
--------------------
Function Name: image_write
Function Description: Writes to LT24 Display, Calls LT24_copyFrameBuffer with starting 
coordinates as (0,0)
Function Input: Image Array of size 240x240
Function Returns: VOID
Author: APS
----------------------------------------------------------------------------------------------------------------
--------------------
*/
void image_write(unsigned short image[57600]){
//LT24_copyFrameBuffer( IMAGE_DATA, STARTING_COORDINATES, ENDING_COORDINATES, IMAGE_HEIGHT, IMAGE_WIDTH);
exitOnFail (
 LT24_copyFrameBuffer 
(image,0,0,240,240), // Copies the input image to LT24 display using its driver.
LT24_SUCCESS);
}