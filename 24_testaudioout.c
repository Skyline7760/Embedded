/*
----------------------------------------------------------------------------------------------------------------
------------------------
Function Name: test_audio_out
Function Description: Out Function for each sound
Function Input: Input on which number to produce sound
Function Return: VOID
Function Author: APS
----------------------------------------------------------------------------------------------------------------
-----------------------
*/
void test_audio_out ( int COUNT ){
    switch ( COUNT ){ // What Sound should i Produce ?
        case ( 1 ):
        sound_out ( one_buffer, one_size ); // Sound One
        break;
        case ( 2 ):
        sound_out ( two_buffer, two_size ); // Sound 
        Two
        break;
        case ( 3 ):
        sound_out ( three_buffer, three_size ); // Sound 
        Three
        break;
        case ( 4 ):
        sound_out ( four_buffer, four_size ); // Sound 
        Four
        break;
        case ( 5 ):
        sound_out ( five_buffer, five_size ); // Sound 
        Five
        break;
        case ( 6 ):
        sound_out ( six_buffer, six_size ); // Sound Six
        break;
        case ( 7 ):
        sound_out ( seven_buffer, seven_size ); // Sound 
        Seven
        break;
        case ( 8 ):
        sound_out ( eight_buffer, eight_size ); // Sound 
        Eight
        break;
        case ( 9 ):
        sound_out ( nine_buffer, nine_size ); // Sound 
        Nine
        break;
        case ( 10 ):
        sound_out ( ten_buffer, ten_size ); // Sound Ten
        break;
    }
}