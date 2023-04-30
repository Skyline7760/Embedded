/*
----------------------------------------------------------------------------------------------------------------
------------------
Function Name: getPressedKeys
Function Description: Get which key is pressed
Function Input: None
Function Return: Pressed Key
Author : APS
----------------------------------------------------------------------------------------------------------------
------------------
*/
unsigned int getPressedKeys () { // To find which key is pressed
 unsigned int key_current_state = *key_ptr; // find what key is pressed
 if( key_current_state != key_last_state){ // if the pressed key is different than previously pressed key
    key_last_state = key_current_state;
    key_pressed = key_current_state; // set the key_pressed to currently pressed key
    }
    else{
    key_pressed = 0; // if nothing is pressed, set the value to zero.
    }
return key_pressed;
}