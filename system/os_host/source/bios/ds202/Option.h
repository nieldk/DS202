;/********************* (C) COPYRIGHT 2014 e-Design Co.,Ltd. *******************
; Option.h  For DFU Ver3.3x                                      Author : bure
;******************************************************************************/
;/*--------------------------- APP类型编译选项 ------------------------------*/
  #define APP1
//#define APP2
 /*同时要修改icf文件起始地址，APP1->0x8000,APP2->0x20000*/
;/*--------------------------- 机器类型编译选项 ------------------------------*/
  #define TYPE_DS202
  //#define TYPE_DS201
  //#define TYPE_DS203
;/*--------------------------- OEM 类型编译选项 ------------------------------*/
  #define GENERAL
  //#define SEEED
  //#define OEM_AES
;/*--------------------------- LCD 类型编译选项 ------------------------------*/
  #define LCD_ILI_9341
  //#define LCD_ST_7781
  //#define LCD_R61509
  //#define LCD_ILI_9327
;/*--------------------------- LCD 接口类型选项 ------------------------------*/
  //#define LCD_FSMC
  #define LCD_GPIO
;/*--------------------------- U 盘类型编译选项 ------------------------------*/
  #define FLASH_DISK_8M
  //#define FLASH_DISK_2M
  //#define MICRO_SD

;/*********************************  END OF FILE  *****************************/
