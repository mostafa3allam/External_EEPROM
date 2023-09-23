/*
 * private.h
 *
 * Created: 10-Jun-23 05:32:37 AM
 *  Author: mosta
 */ 




#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_


#include "Registers.h"
#include "BIT_MATH.h"
#include "STD_TYPES.h"
/*


/ ************************************************************************ /
/ * Data Types                                                                     * /
/ ************************************************************************ /

typedef unsigned char u8;
typedef signed char s8;

typedef unsigned short u16;
typedef signed short s16;

typedef unsigned long u32;
typedef signed long s32;

typedef unsigned long long u64;
typedef signed long long s64;

/ ************************************************************************ /
/ * All microcontroller Registers                                        * /
/ ************************************************************************ /


/ ************************************************************************ /
/ * DIO Registers                                                        * /
/ ************************************************************************ /
/ *PORT A Registers* /
#define PORTA *((volatile u8 *) 0x3B) / * 8 bit register * /
#define DDRA *((volatile u8 *) 0x3A) / * 8 bit register * /
#define PINA *((volatile u8 *) 0x39) / * 8 bit register * /

/ *PORT B Registers* /
#define PORTB *((volatile u8 *) 0x38) / * 8 bit register * /
#define DDRB *((volatile u8 *) 0x37) / * 8 bit register * /
#define PINB *((volatile u8 *) 0x36) / * 8 bit register * /

/ *PORT C Registers* /
#define PORTC *((volatile u8 *) 0x35) / * 8 bit register * /
#define DDRC *((volatile u8 *) 0x34) / * 8 bit register * /
#define PINC *((volatile u8 *) 0x33) / * 8 bit register * /

/ *PORT D Registers* /
#define PORTD *((volatile u8 *) 0x32) / * 8 bit register * /
#define DDRD *((volatile u8 *) 0x31) / * 8 bit register * /
#define PIND *((volatile u8 *) 0x30) / * 8 bit register * /
*/

#endif /* PRIVATE_H_ */