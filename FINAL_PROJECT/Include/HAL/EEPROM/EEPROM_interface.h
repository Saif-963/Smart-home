/*************************************************************************/
/* !File Name:         TWI_interface.h                                     */
/* !Layer    :         HAL                                              */
/* !Author   :         Abdullah M. Abdullah                              */
/* !Date     :         2 SEP, 2021                                       */
/* !Version  :         v1.0                                              */
/*************************************************************************/

#ifndef EEPROM_INTERFACE_H_
#define EEPROM_INTERFACE_H_
#define EEPROM_BLOCK_1 1
#define EEPROM_BLOCK_2 2

void MEEPROM_voidSendData(u16 Copy_u16LocationAddress, u8 Copy_u8DataByte);

u8 MEEPROM_u8ReceiveData(u16 Copy_u16LocationAddress);

void EEPROM_u8WriteByte(u16 address, u8 data, u8 block);

u8 EEPROM_u8ReadByte(u16 address, u8 *data, u8 block);

#endif
