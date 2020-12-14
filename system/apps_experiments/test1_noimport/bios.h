#include <stdint.h>
typedef uint8_t u8;
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint16_t uc16;

#define BITMAP          0xFFFC0000
#define INIT            0xFFFF0000
#define ENBL 1
extern "C" {
u32  __Bios(u8 Item, u32 Var);
}

enum
{
    SYSINFO, // ????????      Var: PRDT_SN  ???????  Rtn: (u16)???????
             //                   Var: PRODUCT  ??????  Rtn: ?????????
             //                   Var: PRDTNUM  ???????  Rtn: (u16)???????
             //                   Var: SCH_VER  ?????  Rtn: ????????
             //                   Var: MCU_TYP  MCU ???  Rtn: ?????????
             //                   Var: DFU_VER  DFU ??  Rtn: ????????
             //                   Var: OEM_NUM  OEM ????  Rtn: ??????????
             //                   Var: MANUFAC ???????? Rtn: ?????????
             //                   Var: LICENCE ??????? Rtn: SUCC/FAIL
             // ????????
    NIVCPTR, // ?????????????  Var: (u16)   ??????  Rtn: SUCC/FAIL
    SYSTICK, // ?????????????  Var: (u16)uS ??????  Rtn: SUCC/FAIL
    AF_RMAP, // ?? IO ???
    PWRCTRL, // ???????          Var: INIT  ??'??????  Rtn: SUCC/FAIL
             //                   Var: VIN_ST  ??????  Rtn: ENBL/DSBL
             //                   Var: VBAT    ??????  Rtn: (u16)mV
             //                   Var: DSBL    ??????  Rtn: SUCC/FAIL
    BUZZDEV, // ?????????        Var: INIT  ??'??????  Rtn: SUCC/FAIL
             //                   Var: (MUTE~100)  ????  Rtn: SUCC/FAIL
    KEYnDEV, // ????????????    Var: INIT  ??'??????  Rtn: SUCC/FAIL
             //                   Var: BITMAP  ??????  Rtn: (u16)?????
    DELAYuS, // ??????          Var: (u32)uS ??????  Rtn: SUCC/FAIL
             // ?????????
    DISPDEV, // LCD ?????      Var: STRING  g?????  Rtn: ?????????
             //                   Var: INIT  ??'??????  Rtn: SUCC/FAIL
             //                   Var: VALUE   ??L????  Rtn: (MaxX<<16+MaxY)
             //                   Var: (0~100) ????????  Rtn: SUCC/FAIL
             //                   Var: (MCU/FPGA)?????  Rtn: SUCC/FAIL
    BLOCK_X, // ????? x ??????   Var: (x1 << 16)+x2)    Rtn: SUCC/FAIL
    BLOCK_Y, // ????? y ??????   Var: (y1 << 16)+y2)    Rtn: SUCC/FAIL
    PIXEL_X, // ???? x ???       Var: (u16)???         Rtn: SUCC/FAIL
    PIXEL_Y, // ???? y ???       Var: (u16)???         Rtn: SUCC/FAIL
    WrPIXEL, // ????????        Var: (u16)???????     Rtn: SUCC/FAIL
    RdPIXEL, // ?????L????      Var:                   Rtn: (u16)???????
    FONTPTR, //                   Var: ASCII Code        Rtn: ptr ??????
             // FPGA ??????
    FPGADEV, // FPGA ??????     Var: STRING            Rtn: ?????????
             //                   Var: INIT  ??'??????  Rtn: SUCC/FAIL
             //                   Var: CNFG    ???????  Rtn: SUCC/FAIL
             //                   Var: COMM    ???g?  Rtn: SUCC/FAIL
             //                   Var: ENBL    ?????  Rtn: SUCC/FAIL
             //                   Var: (SPI_ParamDef*)   Rtn: SUCC/FAIL
             // ??????????????
    IN_PORT, // ???????????      Var: INIT  ??'??????  Rtn: SUCC/FAIL
             //                   Var: VREF ????????? Rtn: SUCC/FAIL
             // U ???????
    USBDEV,  // USB ??'??
    U_DISK,  // USB DISK ??     Var: INIT  ??'??????  Rtn: SUCC/FAIL
             //                   Var: STRING  U ?????  Rtn: U ???????????
             //                   Var: PAGE  ??????  Rtn: SUCC/FAIL
             //                   Var: SECTOR  ????????  Rtn: (u16)????????
             //                   Var: AMOUNT  ????????  Rtn: (u16)????????
             //                   Var: (SPI_ParamDef*)   Rtn: SUCC/FAIL
             // SPI ??????
    SPI_DEV, // SPI ?????      Var: (SPI_ParamDef*)   Rtn: SUCC/FAIL
    FLSHDEV, // Flash SPI
             // ??????????????
    EXT_INP, // ??? PIO ???     Var: PIOCFG+PinDef      Rtn: SUCC
    EXT_OUT, // ??? PIO ???     Var: PIOCFG+PinDef      Rtn: SUCC
             //                   Var: PINS_OUT+Status0~3 Rtn: SUCC
             //                   Var: PINS_IN+BitMask0~3 Rtn: PinStatus 0~3
    EXT_PWM, // ??? PWM ???     Var: PWM_PSC+Var[0~15]  Rtn: SUCC
             //                   Var: PWM_ARR+Var[0~15]  Rtn: SUCC
             //                   Var: CH1_CCR+Var[0~15]  Rtn: SUCC
             //                   Var: CH2_CCR+Var[0~15]  Rtn: SUCC
             //                   Var: CH1_CTRL+ENBL/DSBL Rtn: SUCC
             //                   Var: CH2_CTRL+ENBL/DSBL Rtn: SUCC
    EXT_INF, // ??? PIO ???     Var: INIT  ??'?????? ?????????????
    EXT_SPI, // ??? PIO ???     Var: INIT  ??'??????   Rtn: SUCC/FAIL
             //                   Var: (SPI_ParamDef*)    Rtn: SUCC/FAIL
    EXT_UART,// ??? PIO ???     Var: INIT  ??'??????   Rtn: SUCC/FAIL
             //                   Var: u8 Data            Rtn: SUCC/FAIL
    EXT_I2C, // ??? PIO ???
             //                   Var: 0x00&ID&REG&DATA   Rtn: SUCC/FAIL
    EXT_RXD, // ??? PIO ???     Var: PIOCFG+PinDef      Rtn: SUCC
    EXT_TXD, // ??? PIO ???     Var: PIOCFG+PinDef      Rtn: SUCC
};

void Set_Posi(u16 x, u16 y)
{
    __Bios(PIXEL_X, x);
    __Bios(PIXEL_Y, y);
}

void Set_Pixel(u16 Color)
{
    __Bios(WrPIXEL, Color);
}

bool AnyKey()
{
  return (~__Bios(KEYnDEV, BITMAP)) & 0x000f;
}