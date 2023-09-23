/*
 * functions.c
 *
 * Created: 10-Jun-23 06:04:24 AM
 *  Author: mostafa
 */ 
#include "DIOconfig.h"

void DIO_voidSetPinDirection(u8 portNumber, u8 pinNumber, u8 direction) /*initialize DIO direction*/
{
	switch(portNumber)
	{
		case PORT_A:	if(direction == IN)
						{
								DDRA &= ~(1<<pinNumber);/*input*/
						}
						else if (direction == OUT)
						{
								DDRA |= (1<<pinNumber); /*output*/
						}
						else
						{
							/*ERROR*/
						}
						break;
		case PORT_B:	if(direction == IN)
						{
							DDRB &= ~(1<<pinNumber);/*input*/
						}
						else if (direction == OUT)
						{
							DDRB |= (1<<pinNumber); /*output*/
						}
						else
						{
							/*ERROR*/
						}
						break;
		case PORT_C:	if(direction == IN)
						{
							DDRC &= ~(1<<pinNumber);/*input*/
						}
						else if (direction == OUT)
						{
							DDRC |= (1<<pinNumber); /*output*/
						}
						else
						{
							/*ERROR*/
						}
						break;
		case PORT_D:	if(direction == IN)
						{
							DDRD &= ~(1<<pinNumber);/*input*/
						}
						else if (direction == OUT)
						{
							DDRD |= (1<<pinNumber); /*output*/
						}
						else
						{
							/*ERROR*/
						}
						break;		
	}
}

void DIO_voidSetPinValue(u8 portNumber, u8 pinNumber, u8 value) /*write data to DIO pin*/
{
	switch(portNumber)
	{
		case PORT_A:	if(value == LOW)
						{
							PORTA &= ~(1<<pinNumber);/*write 0*/
						}
						else if (value == HIGH)
						{
							PORTA |= (1<<pinNumber); /*write 1*/
						}
						else
						{
							/*ERROR*/
						}
						break;
		case PORT_B:	if(value == LOW)
						{
							PORTB &= ~(1<<pinNumber);/*write 0*/
						}
						else if (value == HIGH)
						{
							PORTB |= (1<<pinNumber); /*write 1*/
						}
						else
						{
							/*ERROR*/
						}
						break;
		case PORT_C:	if(value == LOW)
						{
							PORTC &= ~(1<<pinNumber);/*write 0*/
						}
						else if (value == HIGH)
						{
							PORTC |= (1<<pinNumber); /*write 1*/
						}
						else
						{
							/*ERROR*/
						}
						break;
		case PORT_D:	if(value == LOW)
						{
							PORTD &= ~(1<<pinNumber);/*write 0*/
						}
						else if (value == HIGH)
						{
							PORTD |= (1<<pinNumber); /*write 1*/
						}
						else
						{
							/*ERROR*/
						}
						break;
	}
}

void DIO_voidTogglePin(u8 portNumber, u8 pinNumber) /*toggle DIO pin*/
{
	switch(portNumber)
	{
		case PORT_A:	PORTA ^= (1<<pinNumber); /*toggle pin*/
						break;
		case PORT_B:	PORTB ^= (1<<pinNumber); /*toggle pin*/
						break;
		case PORT_C:	PORTC ^= (1<<pinNumber); /*toggle pin*/
						break;
		case PORT_D:	PORTD ^= (1<<pinNumber); /*toggle pin*/
						break;
	}
}

u8 DIO_voidGetPinValue(u8 portNumber, u8 pinNumber) /*read DIO pin*/
{
	u8 val;
	switch(portNumber)
	{
		case PORT_A:	val= (PORTA>>pinNumber) & 1; /*read PORTA pinNumber into *value*/
						break;
		case PORT_B:	val = (PORTB>>pinNumber) & 1; /*read PORTB pinNumber into *value*/
						break;
		case PORT_C:	val = (PORTC>>pinNumber) & 1; /*read PORTC pinNumber into *value*/
						break;
		case PORT_D:	val = (PORTD>>pinNumber) & 1; /*read PORTD pinNumber into *value*/
						break;
	}
	return val;
}

void DIO_voidSetPortDirection(u8 PORTID, u8 Direction)
{
	switch(PORTID)
	{
		case PORT_A:	if (Direction == IN)
						{
							DDRA = 0x00;
						}
						else if (Direction == OUT)
						{
							DDRA = 0xff;
						}
						break;
		case PORT_B:	if (Direction == IN)
						{
							DDRB = 0x00;
						}
						else if (Direction == OUT)
						{
							DDRB = 0xff;
						}
						break;
		case PORT_C:	if (Direction == IN)
						{
							DDRC = 0x00;
						}
						else if (Direction == OUT)
						{
							DDRC = 0xff;
						}
						break;
		case PORT_D:	if (Direction == IN)
						{
							DDRD = 0x00;
						}
						else if (Direction == OUT)
						{
							DDRD = 0xff;
						}
						break;
	}
}


void DIO_voidSetPortValue(u8 PORTID)
{
	switch(PORTID)
	{
		case PORT_A:	PORTA = 0xff;
						break;
		case PORT_B:	PORTB = 0xff;
						break;
		case PORT_C:	PORTC = 0xff;
						break;
		case PORT_D:	PORTD = 0xff;
						break;
	}
}