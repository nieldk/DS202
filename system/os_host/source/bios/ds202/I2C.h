#ifndef __I2C_H
#define __I2C_H

#include "stm32f30x.h"

u8   I2C_PageWrite(u8* pBuf, u16 NumByte,u8 DeviceAddr );
u8   I2C_PageRead(u8* pBuf,  u16 NumByte,u8 DeviceAddr, u8 ReadAddr);
u16  I2C_Write(u8 DevID, u8 Addr, u8 Data);
u16  I2C_Read(u8 DevID, u8 Addr, u8* pBuf, u16 n);
u32  Info(u8 Item);
void SPI_Config(void);
void Ctrl(u8 Item, u32 Val);
void TPIRQ_Config(void);
void Delay_uS(vu32 uS);

#endif
