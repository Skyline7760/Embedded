/*
----------------------------------------------------------------------------------------------------------------
------------------------
Function Name: read_files
Function Description: Read All the Files to its Buffer
Function Input: NIL
Function Return: VOID
Function Author: APS
----------------------------------------------------------------------------------------------------------------
-----------------------
*/
void read_files(){
intro_buffer = fr_read_function ( intro_file, intro_buffer );
one_buffer = fr_read_function ( one_file , one_buffer );
two_buffer = fr_read_function ( two_file, two_buffer );
three_buffer = fr_read_function ( three_file, three_buffer );
four_buffer = fr_read_function ( four_file, four_buffer );
five_buffer = fr_read_function ( five_file, five_buffer );
six_buffer = fr_read_function ( six_file, six_buffer );
seven_buffer = fr_read_function ( seven_file, seven_buffer );
eight_buffer = fr_read_function ( eight_file, eight_buffer );
nine_buffer = fr_read_function ( nine_file, nine_buffer );
ten_buffer = fr_read_function ( ten_file, ten_buffer );
music_buffer = fr_read_function ( music_file, music_buffer );
}