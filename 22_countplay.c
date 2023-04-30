/*
----------------------------------------------------------------------------------------------------------------
------------------------
Function Name: count_play
Function Description: Called to play counter from One to Ten.
Function Input: Input on which number to count
Function Return: VOID
Function Author: APS
----------------------------------------------------------------------------------------------------------------
-----------------------
*/
void count_play( int i ){
    // Okay to play, we read the files one by one and play it.
    printf("Counting From One to Ten \n");
    int i = 0; // To check which number is currently in count
    if ( mode ) {

        // To play one
        switch ( i ) {
            case ( 1 ): // Display one
            image_write( one );
            // Play One`
            sound_out ( one_buffer , one_size );
            // Play intro music
            sound_out ( intro_buffer, intro_size );
            break;

            case ( 2 ): 
            // To play Two
            // All functions have same structure -> Display the image, play the count and then at the end play the song, turn to count
            image_write ( two_two );
            sound_out ( two_buffer ,two_size );
            image_write ( two );
            sound_out ( one_buffer , one_size );
            image_write ( two_two );
            sound_out ( two_buffer, two_size );
            sound_out ( intro_buffer , intro_size );
            break;

            case ( 3 ):
            // To Play Three
            image_write ( three_three );
            sound_out ( three_buffer, three_size );
            image_write( three );
            sound_out ( one_buffer , one_size );
            image_write ( three_two );
            sound_out ( two_buffer, two_size );
            image_write ( three_three );
            sound_out ( three_buffer, three_size);
            sound_out ( intro_buffer, intro_size);
            break;

            case( 4 ):
            // To Play Four
            image_write ( four_four );
            sound_out ( four_buffer, four_size );
            image_write ( four );
            sound_out ( one_buffer, one_size );
            image_write ( four_two );
            sound_out ( two_buffer, two_size );
            image_write ( four_three );
            sound_out ( three_buffer, three_size );
            image_write ( four_four );
            sound_out ( four_buffer, four_size );
            sound_out ( intro_buffer, intro_size );
            break;

            case ( 5 ):
            // To Play Five
            image_write ( five_five );
            sound_out ( five_buffer, five_size );
            image_write ( five );
            sound_out ( one_buffer, one_size );
            image_write ( five_two );
            sound_out ( two_buffer, two_size );
            image_write ( five_three );
            sound_out ( three_buffer, three_size );
            image_write ( five_four );
            sound_out ( four_buffer, four_size );
            image_write ( five_five );
            sound_out ( five_buffer, five_size );
            sound_out ( intro_buffer, intro_size );
            break;

            case ( 6 ):
            // To Play Six
            image_write ( six_six );
            sound_out ( six_buffer, six_size );
            image_write ( six );
            sound_out ( one_buffer, one_size);
            image_write ( six_two );
            sound_out ( two_buffer, two_size );
            image_write ( six_three );
            sound_out ( three_buffer, three_size );
            image_write ( six_four );
            sound_out ( four_buffer, four_size );
            image_write ( six_five );
            sound_out ( five_buffer , five_size );
            image_write ( six_six );
            sound_out ( six_buffer, six_size );
            sound_out ( intro_buffer, intro_size );
            break;

            case ( 7 ) :
            // To Play Seven
            image_write ( seven_seven);
            sound_out ( seven_buffer , seven_size );
            image_write ( seven );
            sound_out ( one_buffer, one_size );
            image_write ( seven_two );
            sound_out ( two_buffer, two_size );
            image_write ( seven_three );
            sound_out ( three_buffer , three_size );
            image_write ( seven_four );
            sound_out ( four_buffer, four_size );
            image_write ( seven_five );
            sound_out ( five_buffer, five_size );
            image_write ( seven_six );
            sound_out ( six_buffer, six_size );
            image_write ( seven_seven );
            sound_out ( seven_buffer, seven_size );
            sound_out ( intro_buffer, intro_size );
            break;
            
            case ( 8 ):
            // To Play Eight
            image_write ( eight_eight );
            sound_out ( eight_buffer, eight_size );
            image_write ( eight );
            sound_out ( one_buffer, one_size );
            image_write ( eight_two );
            sound_out ( two_buffer, two_size );
            image_write ( eight_three );
            sound_out ( three_buffer, three_size );
            image_write ( eight_four );
            sound_out ( four_buffer, four_size );
            image_write ( eight_five );
            sound_out ( five_buffer, five_size );
            image_write ( eight_six );
            sound_out ( six_buffer, six_size );
            image_write ( eight_seven );
            sound_out ( seven_buffer, seven_size );
            image_write ( eight_eight );
            sound_out ( eight_buffer, eight_size );
            sound_out ( intro_buffer, intro_size );
            break;

            case ( 9 ):
            // To Play Nine
            image_write ( nine_nine );
            sound_out ( nine_buffer, nine_size );
            image_write ( nine );
            sound_out ( one_buffer, one_size );
            image_write ( nine_two );
            sound_out ( two_buffer, two_size );
            image_write ( nine_three );
            sound_out ( three_buffer, three_size );
            image_write ( nine_four );
            sound_out ( four_buffer, four_size );
            image_write ( nine_five );
            sound_out ( five_buffer, five_size);
            image_write ( nine_six );
            sound_out ( six_buffer, six_size );
            image_write ( nine_seven );
            sound_out ( seven_buffer, seven_size );
            image_write ( nine_eight );
            sound_out ( eight_buffer, eight_size );
            image_write ( nine_nine );
            sound_out ( nine_buffer, nine_size );
            sound_out ( intro_buffer, intro_size );
            break;
            
            case ( 10 ):
            // To Play Ten
            image_write ( ten_ten );
            sound_out ( ten_buffer, ten_size );
            image_write ( ten );
            sound_out ( one_buffer, one_size );
            image_write ( ten_two );
            sound_out ( two_buffer, two_size );
            image_write ( ten_three );
            sound_out ( three_buffer, three_size );
            image_write ( ten_four );
            sound_out ( four_buffer, four_size );
            image_write ( ten_five );
            sound_out ( five_buffer, five_size );
            image_write ( ten_six );
            sound_out ( six_buffer, six_size );
            image_write ( ten_seven );
            sound_out ( seven_buffer, seven_size );
            image_write ( ten_eight );
            sound_out ( eight_buffer, eight_size );
            image_write ( ten_nine );
            sound_out ( nine_buffer, nine_size );
            image_write ( ten_ten );
            sound_out ( ten_buffer, ten_size );
            sound_out ( intro_buffer, intro_size );
            break;
        }
    }
}