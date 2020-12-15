#include "BIOS.h"
#include "LCD.c"
#include "DS202V2_0.h"
#include "I2C.h"
#include "Flash.h"
#include "Drive.h"
#include "Flash.c"
#include "Version.h"
#include "Option.h"
#include "FAT12.h"
#include "Menu.h"

u16  Smpl[0x4000];
uc16 DEPTH[]     = { 1024 , 2048 , 4096 , 8192};

void SetPixel(u16 Color)
{
  asm("MOVS    R2, #0x0800     ");
  asm("MOVT    R2, #0x4800     "); // GPIO Port C Base 0x48000800
  asm("MOVS    R3, #0x0800     "); // GPIO_Pin_11
  asm("STRH    R0, [R2, #0x814]"); // GPIO Port E ODR  0x48001014  
  asm("STRH    R3, [R2, #0x028]"); // GPIO Port C BRR  0x48000828
  asm("NOP");
  asm("STRH    R3, [R2, #0x018]"); // GPIO Port C BSRR 0x48000818
  asm("BX      LR");
}

void ReadStart(void)
{
}

void ReadFinish(void)
{
}

u16 ReadPixel(void )
{
  u32 Tmp;

  LCD_CMD_W(0x2E);
  LCD_PORT_IN();
  LCD_nRD_LOW();
  asm("NOP");
  asm("NOP"); 
  LCD_nRD_HIGH();
  asm("NOP");
  asm("NOP"); 
  LCD_nRD_LOW();
  asm("NOP");
  asm("NOP");
  asm("NOP");
  asm("NOP"); 
  Tmp = READ_LCD();
  LCD_nRD_HIGH();
  Tmp = (Tmp & 0xF800)+((Tmp << 3)& 0x07E0);
  LCD_nRD_LOW();
  asm("NOP"); 
  asm("NOP"); 
  asm("NOP"); 
  asm("NOP"); 
  Tmp |= READ_LCD() >> 11;
  LCD_nRD_HIGH();
  LCD_PORT_OUT();
  return Tmp;
}

void Set_Block(u16 x1, u16 y1, u16 x2, u16 y2)
{
  LCD_CMD_W(0x2A);
  LCD_DAT_W(y1 >> 8);
  LCD_DAT_W(y1 & 255);
  LCD_DAT_W(y2 >> 8);
  LCD_DAT_W(y2 & 255);

  LCD_CMD_W(0x2B);
  LCD_DAT_W(x1 >> 8);
  LCD_DAT_W(x1 & 255);
  LCD_DAT_W(x2 >> 8);
  LCD_DAT_W(x2 & 255);

  LCD_CMD_W(0x2C);           // Ready to write GRAM
}

void xBeep(bool b)
{
}

void Set_Posi(uint_fast16_t x, uint_fast16_t y)
{
}

void SetPosi(u16 x0, u16 y0)
{
  LCD_CMD_W(0x2A);
  LCD_DAT_W(0x00);
  LCD_DAT_W(y0 & 255);
  LCD_DAT_W(0x00);
  LCD_DAT_W(239);

  LCD_CMD_W(0x2B);
  LCD_DAT_W(x0 >> 8);
  LCD_DAT_W(x0 & 255);
  LCD_DAT_W(0x01);
  LCD_DAT_W(0x3F);

  LCD_CMD_W(0x2C);
}

void EnableUsb(bool enable)
{
}

void HardwareInit()
{
  __Ctrl(SYS_CFG, RCC_DEV | TIM_DEV | GPIO_OPA | ADC_DAC  );
  SPI_Config();
  SysTick_Config(SystemCoreClock/1000);                 //SysTick = 1mS
  __Ctrl(B_LIGHT, 50);                                  //
  Ctrl(PM_CTRL, CHG_ACT);                               //
  __Ctrl(BUZZVOL, 50);                                  //
  xBeep(200);                                            //200mS
  Init_Fat_Value();
  TIM6_Config(); 
  __Ctrl(SMPL_ST, DISABLE);
  __Ctrl(SMPL_ST, SIMULTANEO);
  __Ctrl(SMPLBUF, (u32)Smpl);
  __Ctrl(SMPLNUM, DEPTH[PopMenu1_Value[WIN_Depth]]);
  __Ctrl(SMPL_ST, ENABLE);
}

uint32_t GetKeys()
{
  return 0;
}

uintptr_t GetAttribute(uintptr_t attribute)
{
  return 0;
}
/*
uintptr_t GetAttribute(enum EAttribute attribute)
{
  switch (attribute)
  {
    case DeviceType: return (uintptr_t)"CLEAN";
    case VersionDfu: return (uintptr_t)nullptr;
    case VersionHardware: return (uintptr_t)(char*)nullptr;
    case VersionSystem: return (uintptr_t)(char*)nullptr;
    case VersionFpga: return (uintptr_t)(char*)nullptr;
    case SerialNumber: return (uintptr_t)(uint32_t)0;
    case LicenseNumber: return (uintptr_t)0;
    case LicenseValid: return (uintptr_t)0;
    case DisplayType: return (uintptr_t)0;
    case DiskType: return (uintptr_t)0;
    default: return 0;
  }
}
*/
