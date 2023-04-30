/*
----------------------------------------------------------------------------------------------------------------
------------------------
Function Name: initialise_buffer_size
Function Description: Get size of all buffers by calling buffer_size 
Function Input: NIL
Function Return: VOID
Function Author: APS
----------------------------------------------------------------------------------------------------------------
-----------------------
*/
void initialise_buffer_size (){
intro_size = buffer_size ( intro_file );
one_size = buffer_size ( one_file );
two_size = buffer_size ( two_file );
three_size = buffer_size ( three_file );
four_size = buffer_size ( four_file );
five_size = buffer_size ( five_file);
six_size = buffer_size ( six_file );
seven_size = buffer_size ( seven_file );
eight_size = buffer_size ( eight_file );
nine_size = buffer_size ( nine_file );
ten_size = buffer_size ( ten_file );
music_size = buffer_size ( music_file );
printf ("Buffer Size of music : %d \n", music_size );
}