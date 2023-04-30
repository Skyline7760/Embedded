/*
----------------------------------------------------------------------------------------------------------------
------------------
Function Name: fr_read_function
Function Description: Reads the WAV file, understands data from wav header and places them 
into corresponding buffer pointer and 
 sends the output to sound out
Function Input: FIL Pointer.
Function Return: Address ?
Author: APS
Changelog :
Modified the functionality to call sound_out from here, Bug when passing malloc pointer back.
Removed Function Inputs
----------------------------------------------------------------------------------------------------------------
------------------
*/
unsigned int fr_read_function ( FIL *input_file, int16_t *copy_buffer ) {
WAV_Header_TypeDef wavHeader; // Cleares a WAV_Header variable to read wav header.
int file_size; // variable fir storing file size
unsigned int read_size =0;
file_size = f_size ( input_file ); // Read the total size of wav file
printf ( "File Size: %u \n", file_size); // Print the data to console
fr_status ( f_read ( input_file, &wavHeader, sizeof(wavHeader), &read_size)); // Read the WAV file header
// Print File Information on Console
printf("Read the file \n");
printf("Printing File Information Data \n");
printf("Frequency: %u \n", wavHeader.frequency);
printf("Bits per Sample : %u \n", wavHeader.bits_per_sample);
// Whats the actual wav data size ?
file_size = (file_size - sizeof(wavHeader));
// Buffer to copy to
HPS_ResetWatchdog(); // Reset watchdog
// Copy the file to its buffer
printf("Address of Copy_buffer: %d \n", &copy_buffer);
printf("Address Stored in Copy Buffer: %d \n", copy_buffer);
int16_t *temp_buffer;
temp_buffer = (int16_t *)malloc(sizeof(int16_t) *file_size); // Allocate the memory for WAV file data.
printf("Address stored in Temp Buffer after malloc: %d \n", temp_buffer);
printf(" To Read : %d \n", file_size);
// Begin Copy
fr_status ( f_read(input_file, temp_buffer, file_size, &read_size) ); // Read the file
printf("Read Size : %d \n", read_size );
printf("Address Stored in Copy Buffer before copy: %d \n", copy_buffer);
copy_buffer = temp_buffer;
printf("Address Stored in Copy Buffer after copy: %d \n", copy_buffer);
HPS_ResetWatchdog(); // Reset Watchdog.
//sound_out (copy_buffer, read_size); // Pass the function to sound_out function which calls audio driver
HPS_ResetWatchdog(); // Reset Watchdog.
return temp_buffer;
}