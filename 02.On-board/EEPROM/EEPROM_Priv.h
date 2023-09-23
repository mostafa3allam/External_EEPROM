/*
 * EEPROM_Priv.h
 *
 * Created: 24-Aug-23 03:27:52 AM
 *  Author: Mostafa Allam
 */ 


#ifndef EEPROM_PRIV_H_
#define EEPROM_PRIV_H_

#include "TWI_Conf.h"

#define	EEPROM_DEVICE_ADDRESS_ERROR			7
#define EEPROM_WORD_ADDRESS_ERROR			8
#define EEPROM_WRITE_BYTE_ERROR				9
#define EEPROM_START_ERROR					10
#define EEPROM_WRITE_PAGE_ERROR				11
#define EEPROM_READ_BYTE_ERROR				12
#define EEPROM_REPEATED_START_ERROR			13
#define EEPROM_READ_PAGE_ERROR				14
#define EEPROM_INCREMENT_ADDRESS_ERROR		15
#define EEPROM_MEM_FULL_READ_ERROR			18
#define EEPROM_MEM_FULL_ERROR				19
#define EEPROM_MEM_ADD_INC_ERROR			20
#define EEPROM_EMPTY_ERROR					21

#endif /* EEPROM_PRIV_H_ */