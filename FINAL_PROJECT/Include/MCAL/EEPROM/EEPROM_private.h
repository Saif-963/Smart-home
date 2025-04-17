/*
 * EEPROM_private.h
 *
 *  Created on: Jan 31, 2024
 *      Author: pc
 */

#ifndef INCLUDE_MCAL_EEPROM_EEPROM_PRIVATE_H_
#define INCLUDE_MCAL_EEPROM_EEPROM_PRIVATE_H_

#define EEAR   (*(volatile u16 *)0x3E)
#define EEDR   (*(volatile u8 *)0x3D)
#define EECR   (*(volatile u8 *)0x3C)

#endif /* INCLUDE_MCAL_EEPROM_EEPROM_PRIVATE_H_ */
