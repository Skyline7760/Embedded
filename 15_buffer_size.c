/*
----------------------------------------------------------------------------------------------------------------
------------------------
Function Name: buffer_size
Function Description: Get Size of Data Buffer
Function Input: FIL Pointer
Function Return: File Size
Function Author: APS
----------------------------------------------------------------------------------------------------------------
-----------------------
*/
unsigned int buffer_size ( FIL *input_file ){
WAV_Header_TypeDef TempHeader ; // Declare Temp WAV Header to get its size
int file_size; // Variable for storing file size
file_size = f_size ( input_file ); // Get Size of the file
file_size = file_size - sizeof ( TempHeader ); // Subract the header to get actual data size
return file_size; // Returns the size
}