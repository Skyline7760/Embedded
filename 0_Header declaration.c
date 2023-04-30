// Header Declaration
#include "DE1SoC_WM8731/DE1SoC_WM8731.h" // Audio Driver
#include "HPS_Watchdog/HPS_Watchdog.h" // HPS Watchdog driver
#include "DE1SoC_LT24/DE1SoC_LT24.h" // LT24 Display Driver
#include "HPS_usleep/HPS_usleep.h" // usleep driver
#include "Images/image.h" // Function header containing images
#include <stdbool.h> // C Bool Library
#include <stdio.h> // C STD Input/Output
#include <math.h> // C Math Header
#include <stdint.h>
#include "FatFS/ff.h" // FATFs Library
#include <stdlib.h> // C STD Library
#include "SevenSeg.h" // Drivers for seven segment display

// Drivers for Private Timer DMA
#include "PrivateTimer.h"
#include "HPS_IRQ\HPS_IRQ.h"

// Function Definitions
#define MODE_SELECT 0;
#define PLAY_MODE 1;
#define TEST_MODE 2;


// Global Variables Declaration
FATFS *fs; // Pointer that shows File system object
FIL *intro_file; // File pointer to point to "intro.wav" file.
FIL *one_file; // File pointer to point to "one.wav" file. Plays "One"
FIL *two_file; //File pointer to point to "two.wav" file. Plays "two"
FIL *three_file; // File Pointer to point to "three.wav" file. Plays "three"
FIL *four_file; // File pointer to point to "four.wav" file. Plays "Four"
FIL *five_file; // File pointer to point to "five.wav" file. Plays "five"
FIL *six_file; // File pointer to point to "six.wav" file. plays " six".
FIL *seven_file; // File pointer to point to "seven.wav" file. Plays "seven".
FIL *eight_file; // File pointer to point to "eight.wav" file. Plays "eight".
FIL *nine_file; // File pointer to point to "nine.wav" file. Plays "nine".
FIL *ten_file; // File pointer to point to "ten.wav" file. Plays "ten".
FIL *music_file; // File pointer to point to "music.wav" file. Plays "music"
FILINFO fno; // FILINFO TypeDef - Holds information about object read
FRESULT fr; // FATFS Return Enum - More information http://elm-chan.org/fsw/ff/doc/rc.html
int16_t *one_buffer;
int16_t *two_buffer;
int16_t *three_buffer;
int16_t *four_buffer;
int16_t *five_buffer;
int16_t *six_buffer;
int16_t *seven_buffer;
int16_t *eight_buffer;
int16_t *nine_buffer;
int16_t *ten_buffer;
int16_t *intro_buffer;
int16_t *music_buffer;
volatile unsigned char* fifospace_ptr; // FIFO I2C Free Space Pointer
volatile unsigned int* audio_right_ptr; // Right Audio Channel Pointer
volatile unsigned int* audio_left_ptr; // Left Audio Channel Pointer
volatile unsigned int* LED_ptr = (unsigned int *)0xFF200000; // LED Pointer Base Address

// set private timer interrupt to private timer interrupt base address
volatile unsigned int *private_timer_interrupt_value = (unsigned int *)0xFFFEC60C;
unsigned int volume =100000; // Variable to store current audio volume information

// Variables to store buffer file size
unsigned int one_size; // Size of one_buffer
unsigned int two_size; // Size of two_buffer
unsigned int three_size; // Size of three_buffer
unsigned int four_size; // Size of four_buffer
unsigned int five_size; // Size of five_buffer
unsigned int six_size; // Size of six_buffer
unsigned int seven_size; // Size of seven_buffer
unsigned int eight_size; // Size of eight_buffer
unsigned int nine_size; // size of nine_buffer
unsigned int ten_size; // size of ten_buffer
unsigned int intro_size; // size of intro_buffer
unsigned int music_size; // size of music buffer

// Declaration of Key_ptr pointer that points to key_press address. 4-bit address, changes accordingly to key press.
volatile unsigned int *key_ptr = (unsigned int *)0xFF200050;

// Function variables used to indentify the pressed key.
unsigned int key_last_state = 0; // Last key press
unsigned int key_pressed; // denotes what is the currently pressed key
unsigned int mode; // Used to select mode
int temp_mode = 0; // Temporary Mode Store Variable
unsigned int anime_mode = 0; // Variable used for animation mode