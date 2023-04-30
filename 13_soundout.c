/*
----------------------------------------------------------------------------------------------------------------
-------------------
Function Name: sound_out
Function Declaration: Checks if FIFO pointer is available, and passes the input WAV data to 
output
Function Input: Audio Data, Read Size
Function Return: VOID
Author: APS
----------------------------------------------------------------------------------------------------------------
---------------------
*/
void sound_out( int16_t *audio_buffer, unsigned int audio_size ){
int current_pt = 0; // data index
int volume = 10000; // Volume of audio output
while ( current_pt < (audio_size/2) && mode){ // If the data passed onto FIFO buffer is less than file size
    if ((fifospace_ptr[2] > 0) && (fifospace_ptr[3] > 0)) { // Checks if FIFO pointer is free
        *audio_left_ptr = audio_buffer[current_pt] * volume; // Pass data onto buffer
        *audio_right_ptr = audio_buffer[current_pt+1] * volume; // Pass data onto buffer
        current_pt = current_pt +2;
        }   
    HPS_ResetWatchdog(); // reset watchdog
    }
}