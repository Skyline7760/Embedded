/*
* SevenSeg.h
*
* 7-Segment Display Driver
*
* Created on: Mar 23, 2021
* Author: Arul Prakash Samathuvamani | Based on Driver design in Unit 1 Examples.
*/

#ifndef SEVENSEG_H_
#define SEVENSEG_H_

void sevenseg_write (unsigned int display , unsigned char value);
void sevenseg_single(unsigned int display, unsigned int value);
void sevenseg_double(unsigned int display, unsigned int value);

#endif /* SEVENSEG_H_ */

Truncated Image Files – Two files are given for sample due to lack of space. All image files are generated online and is in same format
#if defined(__AVR__)
#include <avr/pgmspace.h>
#elif defined(__PIC32MX__)
#define PROGMEM
#elif defined(__arm__)
#define PROGMEM
#endif
const unsigned short anime1[57600] ={...};
#if defined(__AVR__)
#include <avr/pgmspace.h>
#elif defined(__PIC32MX__)
#define PROGMEM
#elif defined(__arm__)
#define PROGMEM
#endif
const unsigned short anime2[57600] ={...};