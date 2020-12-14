#ifndef __DISK_H
#define __DISK_H

#ifdef DS202
  #include "stm32f30x.h"
#else
  #include "stm32f10x.h"
#endif

#include "UsbTypes.h"

extern u8 DiskBuf[];

void Disk_Init(void);
void Write_Memory(u32 W_Offset, u32 W_Length);
void Read_Memory (u32 R_Offset, u32 R_Length);
void USB_Connect(u8 Status);

#endif
/*********************************  END OF FILE  ******************************/

