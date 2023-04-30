/*
----------------------------------------------------------------------------------------------------------------
------------------------
Function Name: test_play
Function Description: Test to press the button for correct number of times
Function Input: Input on which number is currently in test, Current Button Press Count
Function Return: VOID
Function Author: APS
----------------------------------------------------------------------------------------------------------------
-----------------------
*/
void test_play ( int i , int BUTTON_PRESS_COUNT) {

    sevenseg_double ( 0, BUTTON_PRESS_COUNT );

    if ( mode ){
        
        switch ( i ) {

            case ( 1 ): // Display one
            image_write( one );
            break;

            case ( 2 ): 
            // Display Two
            image_write ( two_two );
            break;
            case ( 3 ):

            // Display Three
            image_write ( three_three );
            break;

            case( 4 ):
            // Display Four
            image_write ( four_four );
            break;

            case ( 5 ):
            // Display Five
            image_write ( five_five );
            break;

            case ( 6 ):
            // Display Six
            image_write ( six_six );
            break;

            case ( 7 ) :
            // Display Seven
            image_write ( seven_seven);
            break;

            case ( 8 ):
            // Display Eight
            image_write ( eight_eight );
            break;

            case ( 9 ):
            // Display Nine`
            image_write ( nine_nine );
            break;

            case ( 10 ):
            // Display Ten
            image_write ( ten_ten );
            break;
        }
    }
}