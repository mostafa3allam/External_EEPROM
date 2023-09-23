/*
 * config.h
 *
 * Created: 10-Jun-23 06:12:05 AM
 *  Author: mosta
 */ 


#ifndef DIO_CONFIG_H_
#define DIO_CONFIG_H_

#include "DIOinterface.h"

void DIO_voidSetPinDirection(u8 portNumber, u8 pinNumber, u8 direction); /*initialize DIO direction*/
void DIO_voidSetPinValue(u8 portNumber, u8 pinNumber, u8 value); /*write data to DIO pin*/
void DIO_voidTogglePin(u8 portNumber, u8 pinNumber); /*toggle DIO pin*/

u8 DIO_voidGetPinValue(u8 portNumber, u8 pinNumber); /*read DIO pin*/

void DIO_voidSetPortDirection(u8 PORTID, u8 Direction);
void DIO_voidSetPortValue(u8 PORTID);

#endif /* CONFIG_H_ */