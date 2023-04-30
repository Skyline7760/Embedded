/*
----------------------------------------------------------------------------------------------------------------
-------------------
Function Name: intro_out
Function Declaration: Checks if FIFO pointer is available, and passes the input WAV data to 
output -> Passes Only one sample to DAC
Function Input: Audio Data, Audio Size.
Function Return: VOID
Author: APS
----------------------------------------------------------------------------------------------------------------
---------------------
*/
void intro_out( int16_t *audio_buffer, unsigned int audio_size ){
int current_pt = 0; // data index
int volume = 10000; // Volume of audio output
//printf("Audio Size: %d", audio_size);
while ( current_pt < (audio_size/2) ){ // If the data passed onto FIFO buffer is less than file size
        if ((fifospace_ptr[2] > 0) && (fifospace_ptr[3] > 0)) { // Checks if FIFO pointer is free
            *audio_left_ptr = audio_buffer[current_pt] * volume; // Pass data onto buffer
            *audio_right_ptr = audio_buffer[current_pt+1] * volume; // Pass data onto buffer
            current_pt = current_pt +2;
        }
        HPS_ResetWatchdog(); // reset watchdog
    }
}