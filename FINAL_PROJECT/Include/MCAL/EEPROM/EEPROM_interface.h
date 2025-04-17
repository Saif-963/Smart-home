/*
 * EEPROM_interface.h
 *
 *  Created on: Jan 31, 2024
 *      Author: pc
 */

#ifndef INCLUDE_MCAL_EEPROM_EEPROM_INTERFACE_H_
#define INCLUDE_MCAL_EEPROM_EEPROM_INTERFACE_H_

void MEEPROM_voidSendData (u16 A_u16Address, u8 A_u8Data);
u8 MEEPROM_u8ReceiveData (u16 A_u16Address);

#endif /* INCLUDE_MCAL_EEPROM_EEPROM_INTERFACE_H_ */
