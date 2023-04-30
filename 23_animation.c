/*
----------------------------------------------------------------------------------------------------------------
------------------------
Function Name: animation
Function Description: Intro Image Animation
Function Input: NIL
Function Return: VOID
Function Author: APS
----------------------------------------------------------------------------------------------------------------
-----------------------
*/
void animation(){
    if ( anime_mode < 10 ){ // if to display animation image1
        image_write ( anime1 ); // Animation image 1 to display
        anime_mode = anime_mode + 1; // Increment display1
    }else if (anime_mode < 20 ){ //play animation image 2
        image_write ( anime2 ); // Write animation image 2 to display
        anime_mode = anime_mode + 1; // Increment display2
    }else{
        anime_mode = 0;
    }
}