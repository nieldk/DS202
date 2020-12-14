#ifndef __FONT_H
#define __FONT_H


uc8 Run_ICO[12*8] = {
    0x00, 0x00, 0x3C, 0x66, 0xC3, 0x01, 0x01, 0xC3, 0x66, 0x3C, 0x00, 0x00,
    0x00, 0x00, 0x3C, 0x66, 0xC3, 0x81, 0x81, 0x03, 0x06, 0x1C, 0x00, 0x00,
    0x00, 0x00, 0x3C, 0x66, 0xC3, 0x81, 0x81, 0xC3, 0x62, 0x20, 0x00, 0x00,
    0x00, 0x00, 0x3C, 0x66, 0xC3, 0x81, 0x81, 0xC0, 0x64, 0x3C, 0x00, 0x00,
    0x00, 0x00, 0x3C, 0x66, 0xC2, 0x80, 0x80, 0xC3, 0x66, 0x3C, 0x00, 0x00,
    0x00, 0x00, 0x38, 0x60, 0xC1, 0x81, 0x81, 0xC3, 0x66, 0x3C, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x46, 0xC3, 0x81, 0x81, 0xC3, 0x66, 0x3C, 0x00, 0x00,
    0x00, 0x00, 0x3C, 0x26, 0x03, 0x81, 0x81, 0xC3, 0x66, 0x3C, 0x00, 0x00,
};


//================================ �ֿⶨ�� ====================================
uc16 Font8x14[] = {
//  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, // _ 0x20
    0x0000, 0x0000, 0x1C00, 0x3F60, 0x3F60, 0x1C00, 0x0000, 0x0000, // !
    0x0000, 0x7000, 0x7800, 0x0000, 0x0000, 0x0000, 0x7800, 0x7000, // "
    0x0000, 0x0880, 0x3FE0, 0x3FE0, 0x0880, 0x3FE0, 0x3FE0, 0x0880, // #
    0x0000, 0x1CC0, 0x3E60, 0x2220, 0xE238, 0xE238, 0x33E0, 0x19C0, // $
    0x0000, 0x0C20, 0x0C60, 0x00C0, 0x0180, 0x0300, 0x0660, 0x0C60, // %
    0x0000, 0x01C0, 0x1BE0, 0x3E20, 0x2720, 0x3DC0, 0x1BE0, 0x0220, // &
    0x0000, 0x0800, 0x7800, 0x7000, 0x0000, 0x0000, 0x0000, 0x0000, // '
    0x0000, 0x0000, 0x0F80, 0x1FC0, 0x3060, 0x2020, 0x0000, 0x0000, // (
    0x0000, 0x0000, 0x0000, 0x2020, 0x3060, 0x1FC0, 0x0F80, 0x0000, // )
    0x0200, 0x0A80, 0x0F80, 0x0700, 0x0700, 0x0F80, 0x0A80, 0x0200, // *
    0x0200, 0x0200, 0x0200, 0x1FC0, 0x1FC0, 0x0200, 0x0200, 0x0200, // +
    0x0000, 0x0000, 0x0010, 0x00F0, 0x00E0, 0x0000, 0x0000, 0x0000, // ,
    0x0200, 0x0200, 0x0200, 0x0200, 0x0200, 0x0200, 0x0200, 0x0200, // -
    0x0000, 0x0000, 0x0000, 0x0060, 0x0060, 0x0000, 0x0000, 0x0000, // .
    0x0000, 0x00C0, 0x0180, 0x0300, 0x0600, 0x0C00, 0x1800, 0x3000, // /
    0x0000, 0x1FC0, 0x3FE0, 0x2320, 0x2620, 0x2C20, 0x3FE0, 0x1FC0, // 0
    0x0000, 0x0000, 0x0820, 0x1820, 0x3FE0, 0x3FE0, 0x0020, 0x0020, // 1
    0x0000, 0x1060, 0x30E0, 0x21A0, 0x2320, 0x2620, 0x3C60, 0x1860, // 2
    0x0000, 0x1040, 0x3060, 0x2220, 0x2220, 0x2220, 0x3FE0, 0x1DC0, // 3
    0x0000, 0x0300, 0x0700, 0x0D00, 0x1920, 0x3FE0, 0x3FE0, 0x0120, // 4
    0x0000, 0x3E40, 0x3E60, 0x2220, 0x2220, 0x2220, 0x23E0, 0x21C0, // 5
    0x0000, 0x0FC0, 0x1FE0, 0x3220, 0x2220, 0x2220, 0x03E0, 0x01C0, // 6
    0x0000, 0x3000, 0x3000, 0x21E0, 0x23E0, 0x2600, 0x3C00, 0x3800, // 7
    0x0000, 0x1DC0, 0x3FE0, 0x2220, 0x2220, 0x2220, 0x3FE0, 0x1DC0, // 8
    0x0000, 0x1C00, 0x3E20, 0x2220, 0x2220, 0x2260, 0x3FC0, 0x1F80, // 9
    0x0000, 0x0000, 0x0000, 0x18C0, 0x18C0, 0x0000, 0x0000, 0x0000, // :
    0x0000, 0x0000, 0x0020, 0x18E0, 0x18C0, 0x0000, 0x0000, 0x0000, // ;
    0x0000, 0x0200, 0x0700, 0x0D80, 0x18C0, 0x3060, 0x2020, 0x0000, // <
    0x0000, 0x0480, 0x0480, 0x0480, 0x0480, 0x0480, 0x0480, 0x0000, // =
    0x0000, 0x2020, 0x3060, 0x18C0, 0x0D80, 0x0700, 0x0200, 0x0000, // >
    0x0000, 0x1800, 0x3800, 0x2000, 0x2360, 0x2760, 0x3C00, 0x1800, // ?
    0x0000, 0x1FC0, 0x3FE0, 0x2020, 0x27A0, 0x27A0, 0x3FA0, 0x1F00, // @
    0x0000, 0x07E0, 0x0FE0, 0x1900, 0x3100, 0x1900, 0x0FE0, 0x07E0, // A
    0x0000, 0x2020, 0x3FE0, 0x3FE0, 0x2220, 0x2220, 0x3FE0, 0x1DC0, // B
    0x0000, 0x0F80, 0x1FC0, 0x3060, 0x2020, 0x2020, 0x3060, 0x18C0, // C
    0x0000, 0x2020, 0x3FE0, 0x3FE0, 0x2020, 0x3060, 0x1FC0, 0x0F80, // D
    0x0000, 0x2020, 0x3FE0, 0x3FE0, 0x2220, 0x2720, 0x3060, 0x38E0, // E
    0x0000, 0x2020, 0x3FE0, 0x3FE0, 0x2220, 0x2700, 0x3000, 0x3800, // F
    0x0000, 0x0F80, 0x1FC0, 0x3060, 0x2120, 0x2120, 0x31C0, 0x19E0, // G
    0x0000, 0x3FE0, 0x3FE0, 0x0200, 0x0200, 0x0200, 0x3FE0, 0x3FE0, // H
    0x0000, 0x0000, 0x2020, 0x3FE0, 0x3FE0, 0x2020, 0x0000, 0x0000, // I
    0x0000, 0x00C0, 0x00E0, 0x0020, 0x2020, 0x3FE0, 0x3FC0, 0x2000, // J
    0x0000, 0x2020, 0x3FE0, 0x3FE0, 0x0200, 0x0F80, 0x3DE0, 0x3060, // K
    0x0000, 0x2020, 0x3FE0, 0x3FE0, 0x2020, 0x0020, 0x0060, 0x00E0, // L
    0x3FE0, 0x3FE0, 0x1800, 0x0C00, 0x0C00, 0x1800, 0x3FE0, 0x3FE0, // M
    0x0000, 0x3FE0, 0x3FE0, 0x1C00, 0x0E00, 0x0700, 0x3FE0, 0x3FE0, // N
    0x0000, 0x0F80, 0x1FC0, 0x3060, 0x2020, 0x3060, 0x1FC0, 0x0F80, // O
    0x0000, 0x2020, 0x3FE0, 0x3FE0, 0x2220, 0x2200, 0x3E00, 0x1C00, // P
    0x0000, 0x1F80, 0x3FC0, 0x2040, 0x21C0, 0x20F0, 0x3FF0, 0x1F90, // Q
    0x0000, 0x2020, 0x3FE0, 0x3FE0, 0x2200, 0x2300, 0x3FE0, 0x1CE0, // R
    0x0000, 0x18C0, 0x3CE0, 0x2620, 0x2220, 0x2320, 0x39E0, 0x18C0, // S
    0x3800, 0x3000, 0x2020, 0x3FE0, 0x3FE0, 0x2020, 0x3000, 0x3800, // T
    0x0000, 0x3FC0, 0x3FE0, 0x0020, 0x0020, 0x0020, 0x3FE0, 0x3FC0, // U
    0x3F00, 0x3F80, 0x00C0, 0x0060, 0x0060, 0x00C0, 0x3F80, 0x3F00, // V
    0x3F80, 0x3FE0, 0x00E0, 0x0380, 0x0380, 0x00E0, 0x3FE0, 0x3F80, // W
    0x3060, 0x38E0, 0x0D80, 0x0700, 0x0700, 0x0D80, 0x38E0, 0x3060, // X
    0x3800, 0x3C00, 0x0620, 0x03E0, 0x03E0, 0x0620, 0x3C00, 0x3800, // Y
    0x3860, 0x30E0, 0x21A0, 0x2320, 0x2620, 0x2C20, 0x3860, 0x30E0, // Z
    0x0000, 0x0000, 0x3FE0, 0x3FE0, 0x2020, 0x2020, 0x0000, 0x0000, // [
    0x0000, 0x3800, 0x1C00, 0x0E00, 0x0700, 0x0380, 0x01C0, 0x00E0, // '\'
    0x0000, 0x0000, 0x2020, 0x2020, 0x3FE0, 0x3FE0, 0x0000, 0x0000, // ]
    0x0000, 0x1000, 0x3000, 0x6000, 0xC000, 0x6000, 0x3000, 0x1000, // ^
    0x0008, 0x0008, 0x0008, 0x0008, 0x0008, 0x0008, 0x0008, 0x0008, // _
    0x0000, 0x0000, 0x0000, 0xC000, 0xE000, 0x2000, 0x0000, 0x0000, // `
    0x0000, 0x00C0, 0x05E0, 0x0520, 0x0520, 0x07C0, 0x03E0, 0x0020, // a
    0x0000, 0x2020, 0x3FE0, 0x3FC0, 0x0420, 0x0620, 0x03E0, 0x01C0, // b
    0x0000, 0x03C0, 0x07E0, 0x0420, 0x0420, 0x0420, 0x0660, 0x0240, // c
    0x0000, 0x01C0, 0x03E0, 0x0620, 0x2420, 0x3FC0, 0x3FE0, 0x0020, // d
    0x0000, 0x03C0, 0x07E0, 0x0520, 0x0520, 0x0520, 0x0760, 0x0340, // e
    0x0000, 0x0220, 0x1FE0, 0x3FE0, 0x2220, 0x3200, 0x1800, 0x0000, // f
    0x0000, 0x0390, 0x07D8, 0x0448, 0x0448, 0x03F8, 0x07F0, 0x0400, // g
    0x0000, 0x2020, 0x3FE0, 0x3FE0, 0x0200, 0x0400, 0x07E0, 0x03E0, // h
    0x0000, 0x0000, 0x0000, 0x0420, 0x37E0, 0x37E0, 0x0020, 0x0000, // i
    0x0000, 0x0030, 0x0038, 0x0008, 0x0408, 0x37F8, 0x37F0, 0x0000, // j
    0x0000, 0x2020, 0x3FE0, 0x3FE0, 0x0100, 0x0380, 0x06E0, 0x0460, // k
    0x0000, 0x0000, 0x0000, 0x2020, 0x3FE0, 0x3FE0, 0x0020, 0x0000, // l
    0x07E0, 0x07E0, 0x0600, 0x03E0, 0x03E0, 0x0600, 0x07E0, 0x03E0, // m
    0x0000, 0x0400, 0x07E0, 0x03E0, 0x0400, 0x0400, 0x07E0, 0x03E0, // n
    0x0000, 0x03C0, 0x07E0, 0x0420, 0x0420, 0x0420, 0x07E0, 0x03C0, // o
    0x0000, 0x0408, 0x07F8, 0x03F8, 0x0448, 0x0440, 0x07C0, 0x0380, // p
    0x0000, 0x0380, 0x07C0, 0x0440, 0x0448, 0x03F8, 0x07F8, 0x0408, // q
    0x0000, 0x0420, 0x07E0, 0x03E0, 0x0620, 0x0400, 0x0700, 0x0300, // r
    0x0000, 0x0240, 0x0760, 0x0520, 0x05A0, 0x04A0, 0x06E0, 0x0240, // s
    0x0000, 0x0400, 0x0400, 0x1FC0, 0x3FE0, 0x0420, 0x0460, 0x0040, // t
    0x0000, 0x07C0, 0x07E0, 0x0020, 0x0020, 0x07C0, 0x07E0, 0x0020, // u
    0x0700, 0x0780, 0x00C0, 0x0060, 0x0060, 0x00C0, 0x0780, 0x0700, // v
    0x07C0, 0x07E0, 0x0060, 0x01C0, 0x01C0, 0x0060, 0x07E0, 0x07C0, // w
    0x0000, 0x0420, 0x0660, 0x03C0, 0x0180, 0x03C0, 0x0660, 0x0420, // x
    0x0000, 0x0780, 0x07C8, 0x0048, 0x0048, 0x0058, 0x07F0, 0x07E0, // y
    0x0000, 0x0620, 0x0660, 0x04E0, 0x05A0, 0x0720, 0x0660, 0x0460, // z
    0x0000, 0x0200, 0x0200, 0x1FC0, 0x3DE0, 0x2020, 0x2020, 0x0000, // {
    0x0000, 0x0000, 0x0000, 0x3DE0, 0x3DE0, 0x0000, 0x0000, 0x0000, // |
    0x0000, 0x2020, 0x2020, 0x3DE0, 0x1FC0, 0x0200, 0x0200, 0x0000, // }
    0x0000, 0x1000, 0x3000, 0x2000, 0x3000, 0x1000, 0x3000, 0x2000, // ~
    0x0000, 0x01C0, 0x03C0, 0x0640, 0x0C40, 0x0640, 0x03C0, 0x01C0, // tri
};



uc8 CHAR6x8[] = {
    0x00, 0x00, 0xFA, 0xFA, 0x00, 0x00,    //!
    0x00, 0x00, 0xE0, 0x00, 0xE0, 0x00,    //"
    0x00, 0x28, 0xFE, 0x28, 0xFE, 0x28,    //#
//  0x00, 0x24, 0x74, 0xD6, 0xD6, 0x4C,    //$
    0x00, 0x0C, 0x06, 0x0E, 0x18, 0x30,    //$ �򹴡�
    0x00, 0x66, 0x6C, 0x18, 0x36, 0x66,    //%
    0x00, 0x4C, 0xFE, 0x92, 0x9E, 0x6A,    //&
    0x00, 0x00, 0x20, 0xE0, 0xC0, 0x00,    // '
    0x00, 0x00, 0x38, 0x7C, 0xC6, 0x82,    //(
    0x00, 0x00, 0x82, 0xC6, 0x7C, 0x38,    //)
    0x00, 0x54, 0x7C, 0x38, 0x7C, 0x54,    //*
    0x00, 0x10, 0x10, 0x7C, 0x10, 0x10,    //+
    0x00, 0x00, 0x01, 0x07, 0x06, 0x00,    //,
    0x00, 0x10, 0x10, 0x10, 0x10, 0x10,    //-
    0x00, 0x00, 0x00, 0x06, 0x06, 0x00,    //.
    0x00, 0x06, 0x0C, 0x18, 0x30, 0x60,    // /
    0x00, 0x7C, 0xFE, 0x82, 0xFE, 0x7C,    //0
    0x00, 0x00, 0x42, 0xFE, 0xFE, 0x02,    //1
    0x00, 0x46, 0xCE, 0x9A, 0xF2, 0x66,    //2
    0x00, 0x44, 0xC6, 0x92, 0xFE, 0x6C,    //3
    0x00, 0x18, 0x28, 0x48, 0xFE, 0xFE,    //4
    0x00, 0xE2, 0xA2, 0xA2, 0xBE, 0x9C,    //5
    0x00, 0x7C, 0xFE, 0xA2, 0xBE, 0x1C,    //6
    0x00, 0x80, 0x8E, 0xBE, 0xF0, 0xC0,    //7
    0x00, 0x6C, 0xFE, 0x92, 0xFE, 0x6C,    //8
    0x00, 0x70, 0xFA, 0x8A, 0xFE, 0x7C,    //9
    0x00, 0x00, 0x00, 0x24, 0x24, 0x00,    //:
    0x00, 0x00, 0x01, 0x27, 0x26, 0x00,    //;
//  0x00, 0x10, 0x38, 0x6C, 0xC6, 0x82,    //<
    0x00, 0x18, 0x3C, 0x7E, 0xFF, 0x00,    //������
    0x00, 0x28, 0x28, 0x28, 0x28, 0x28,    //=
//  0x00, 0x82, 0xC6, 0x6C, 0x38, 0x10,    //>
    0x00, 0xFF, 0x7E, 0x3C, 0x18, 0x00,    //������
    0x00, 0x40, 0xCA, 0x9A, 0xF0, 0x60,    //?
    0x00, 0x7C, 0xFE, 0x82, 0xB2, 0x74,    //@
    0x00, 0x3E, 0x7E, 0xC8, 0x7E, 0x3E,    //A
    0x00, 0xFE, 0xFE, 0x92, 0xFE, 0x6C,    //B
    0x00, 0x7C, 0xFE, 0x82, 0xC6, 0x44,    //C
    0x00, 0xFE, 0xFE, 0x82, 0xFE, 0x7C,    //D
    0x00, 0xFE, 0xFE, 0x92, 0x92, 0x92,    //E
    0x00, 0xFE, 0xFE, 0x90, 0x90, 0x90,    //F
    0x00, 0x7C, 0xFE, 0x82, 0x92, 0x5C,    //G
    0x00, 0xFE, 0xFE, 0x10, 0xFE, 0xFE,    //H
    0x00, 0x82, 0xFE, 0xFE, 0x82, 0x00,    //I
    0x00, 0x04, 0x82, 0xFE, 0xFC, 0x80,    //J
    0x00, 0xFE, 0xFE, 0x38, 0xEE, 0xC6,    //K
    0x00, 0xFE, 0xFE, 0x02, 0x02, 0x02,    //L
    0x00, 0xFE, 0x70, 0x3C, 0x70, 0xFE,    //M
    0x00, 0xFE, 0xFE, 0x70, 0x38, 0xFE,    //N
    0x00, 0x7C, 0xFE, 0x82, 0xFE, 0x7C,    //O
    0x00, 0xFE, 0xFE, 0x88, 0x88, 0x70,    //P
    0x00, 0x78, 0xFC, 0x86, 0xFE, 0x7A,    //Q
    0x00, 0xFE, 0xFE, 0x98, 0xFC, 0x66,    //R
    0x00, 0x64, 0xF6, 0x92, 0xDE, 0x4C,    //S
    0x80, 0x80, 0xFE, 0xFE, 0x80, 0x80,    //T
    0x00, 0xFC, 0xFE, 0x02, 0xFE, 0xFC,    //U
    0x00, 0xF8, 0xFC, 0x06, 0xFC, 0xF8,    //V
    0x00, 0xFE, 0x1C, 0x78, 0x1C, 0xFE,    //W
    0x00, 0xC6, 0xEE, 0x38, 0xEE, 0xC6,    //X
    0x00, 0xE0, 0xF2, 0x1E, 0xF2, 0xE0,    //Y
    0x00, 0xC6, 0x8E, 0x9A, 0xF2, 0xE6,    //Z
//  0x00, 0x00, 0xFE, 0x82, 0x82, 0x00,    //[
    0xFF, 0x83, 0x01, 0x7D, 0x01, 0x83,    //0 ����
    0x00, 0x60, 0x30, 0x18, 0x0C, 0x06,    //  "\"
//  0x00, 0x00, 0x82, 0x82, 0xFE, 0x00,    //]
    0xFF, 0xFF, 0xBD, 0x01, 0x01, 0xFD,    //1 ����
//  0x00, 0x30, 0x60, 0xC0, 0x60, 0x30,    //^
    0x00, 0x00, 0x2A, 0x2C, 0x28, 0x38,    //^ ���������
    0x00, 0x02, 0x02, 0x02, 0x02, 0x02,    //_
//  0x00, 0x40, 0x70, 0x30, 0x00, 0x00,    //`
    0x28, 0x68, 0xA8, 0x28, 0x00, 0x00,    //` �������ұ�
    0x00, 0x04, 0x2E, 0x2A, 0x2A, 0x1E,    //a
    0x00, 0x7E, 0x7E, 0x12, 0x1E, 0x0C,    //b
    0x00, 0x1C, 0x3E, 0x22, 0x22, 0x22,    //c
    0x00, 0x0C, 0x1E, 0x12, 0x7E, 0x7E,    //d
    0x00, 0x1C, 0x3E, 0x2A, 0x3A, 0x18,    //e
    0x00, 0x10, 0x3E, 0x7E, 0x50, 0x50,    //f
    0x00, 0x1A, 0x3D, 0x25, 0x3F, 0x1E,    //g
    0x00, 0x7E, 0x7E, 0x10, 0x1E, 0x0E,    //h
    0x00, 0x00, 0x12, 0x5E, 0x5E, 0x02,    //i
    0x00, 0x00, 0x01, 0x01, 0x5F, 0x5E,    //j
    0x00, 0x7E, 0x7E, 0x08, 0x1C, 0x36,    //k
    0x00, 0xFC, 0xFE, 0x02, 0x02, 0x00,    //l
    0x00, 0x3E, 0x30, 0x1E, 0x30, 0x3E,    //m
    0x00, 0x3E, 0x3E, 0x20, 0x3E, 0x1E,    //n
    0x00, 0x1C, 0x3E, 0x22, 0x3E, 0x1C,    //o
    0x00, 0x3F, 0x3F, 0x24, 0x3C, 0x18,    //p
    0x00, 0x18, 0x3C, 0x24, 0x3F, 0x3F,    //q
    0x00, 0x3E, 0x3E, 0x10, 0x20, 0x20,    //r
    0x00, 0x14, 0x3A, 0x2A, 0x2E, 0x04,    //s
    0x00, 0x20, 0x7C, 0x7E, 0x22, 0x02,    //t
    0x00, 0x3C, 0x3E, 0x02, 0x3E, 0x3E,    //u
    0x00, 0x38, 0x3C, 0x06, 0x3C, 0x38,    //v
    0x00, 0x3E, 0x0C, 0x18, 0x0C, 0x3E,    //w
    0x00, 0x22, 0x36, 0x1C, 0x36, 0x22,    //x
    0x00, 0x39, 0x3D, 0x05, 0x3F, 0x3E,    //y
    0x00, 0x32, 0x26, 0x2E, 0x3A, 0x36,    //z
    0x09, 0x19, 0xFF, 0x98, 0x88, 0x00,    //������ //{
    0x00, 0x00, 0x00, 0xFE, 0x00, 0x00,    //|
//  0x00, 0x00, 0x2A, 0x2C, 0x28, 0x38,    //{ ���������
//  0x28, 0x68, 0xA8, 0x28, 0x00, 0x00,    //| �������ұ�
    0x90, 0x98, 0xFF, 0x19, 0x11, 0x00,    //�½��� //}
    0x00, 0x30, 0x60, 0x30, 0x18, 0x30,    //~
};

uc8 SYMB6x8[] = {
    0x00, 0x00, 0xFA, 0xFA, 0x00, 0x00,    //!
    0x18, 0x38, 0x38, 0x10, 0x10, 0x30,    //" usb��
    0x50, 0x90, 0x98, 0xD4, 0xD2, 0x12,    //# usb��
    0x17, 0x13, 0x10, 0x38, 0x30, 0x10,    //$ usb��
    0x00, 0x66, 0x6C, 0x18, 0x36, 0x66,    //%
    0x82, 0x82, 0x82, 0x82, 0xBA, 0xBA,    //& �յ����
    0x00, 0x11, 0x33, 0x76, 0xDC, 0x98,    // '����
    0x00, 0x7E, 0x81, 0xFF, 0xB1, 0x99,    // (�߿�M�����
    0xB1, 0xFF, 0x81, 0x7E, 0x00, 0x00,    // )�߿�M���ұ�
    0x82, 0xBA, 0xBA, 0xBA, 0xBA, 0xBA,    //*�������
    0x00, 0x10, 0x10, 0x7C, 0x10, 0x10,    //+
    0x00, 0x00, 0x01, 0x07, 0x06, 0x00,    //,
    0x00, 0x10, 0x10, 0x10, 0x10, 0x10,    //-
    0x00, 0x00, 0x00, 0x06, 0x06, 0x00,    //.
    0x00, 0x06, 0x0C, 0x18, 0x30, 0x60,    // /
    0x00, 0x7C, 0xFE, 0x82, 0xFE, 0x7C,    //0
    0x00, 0x00, 0x42, 0xFE, 0xFE, 0x02,    //1
    0x00, 0x46, 0xCE, 0x9A, 0xF2, 0x66,    //2
    0x00, 0x44, 0xC6, 0x92, 0xFE, 0x6C,    //3
    0x00, 0x18, 0x28, 0x48, 0xFE, 0xFE,    //4
    0x00, 0xE2, 0xA2, 0xA2, 0xBE, 0x9C,    //5
    0x00, 0x7C, 0xFE, 0xA2, 0xBE, 0x1C,    //6
    0x00, 0x80, 0x8E, 0xBE, 0xF0, 0xC0,    //7
    0x00, 0x6C, 0xFE, 0x92, 0xFE, 0x6C,    //8
    0x00, 0x70, 0xFA, 0x8A, 0xFE, 0x7C,    //9
    0x00, 0x00, 0x00, 0x24, 0x24, 0x00,    //:
    0x00, 0x38, 0xEE, 0x82, 0x82, 0x82,    //; �յ����
    0x82, 0x82, 0x82, 0x82, 0x82, 0x82,    //< �յ����
    0x82, 0x82, 0x82, 0x82, 0xFE, 0x00,    //= �յ����
    0x00, 0x38, 0xEE, 0x82, 0xBA, 0xBA,    //> �������
    0x00, 0x40, 0xCA, 0x9A, 0xF0, 0x60,    //?
    0xBA, 0xBA, 0xBA, 0x82, 0xFE, 0x00,    //@ �������
//  0x00, 0x3E, 0x7E, 0xC8, 0x7E, 0x3E,    //A
//  0x00, 0xFE, 0xFE, 0x92, 0xFE, 0x6C,    //B
    0x10, 0x11, 0x7D, 0x39, 0xFF, 0x80,    //  ������С��
    0x80, 0xFF, 0x39, 0x7D, 0x11, 0x10,
//  0x00, 0x7C, 0xFE, 0x82, 0xC6, 0x44,    //C
//  0x00, 0xFE, 0xFE, 0x82, 0xFE, 0x7C,    //D
    0x08, 0x88, 0xBE, 0x9C, 0xFF, 0x01,    //  ������С��
    0x01, 0xFF, 0x9C, 0xBE, 0x88, 0x08,
//  0x00, 0xFE, 0xFE, 0x92, 0x92, 0x92,    //E
//  0x00, 0xFE, 0xFE, 0x90, 0x90, 0x90,    //F
    0x01, 0x01, 0xFF, 0x9C, 0xBE, 0x88,    //  ����������
    0x88, 0xBE, 0x9C, 0xFF, 0x01, 0x01,
//  0x00, 0x7C, 0xFE, 0x82, 0x92, 0x5C,    //G
//  0x00, 0xFE, 0xFE, 0x10, 0xFE, 0xFE,    //H
    0x80, 0x80, 0xFF, 0x39, 0x7D, 0x11,    //  ����������
    0x11, 0x7D, 0x39, 0xFF, 0x80, 0x80,
//  0x00, 0x82, 0xFE, 0xFE, 0x82, 0x00,    //I
//  0x00, 0x04, 0x82, 0xFE, 0xFC, 0x80,    //J
    0x00, 0x00, 0x00, 0x01, 0x09, 0x19,    //  ������
    0xFF, 0x98, 0x88, 0x80, 0x00, 0x00,
//  0x00, 0xFE, 0xFE, 0x38, 0xEE, 0xC6,    //K
//  0x00, 0xFE, 0xFE, 0x02, 0x02, 0x02,    //L
    0x00, 0x00, 0x00, 0x80, 0x90, 0x98,    //  �½���
    0xFF, 0x19, 0x11, 0x01, 0x00, 0x00,
//  0x00, 0xFE, 0x70, 0x3C, 0x70, 0xFE,    //M
//  0x00, 0xFE, 0xFE, 0x70, 0x38, 0xFE,    //N
    0x00, 0x00, 0x00, 0xC6, 0xEE, 0x38,    //  ����
    0xEE, 0xC6, 0x00, 0x00, 0x00, 0x00,

    0x00, 0x7C, 0xFE, 0x82, 0xFE, 0x7C,    //O
    0x00, 0xFE, 0xFE, 0x88, 0x88, 0x70,    //P
    0x00, 0x78, 0xFC, 0x86, 0xFE, 0x7A,    //Q
    0x00, 0xFE, 0xFE, 0x98, 0xFC, 0x66,    //R
    0x00, 0x64, 0xF6, 0x92, 0xDE, 0x4C,    //S
    0x80, 0x80, 0xFE, 0xFE, 0x80, 0x80,    //T
    0x00, 0xFC, 0xFE, 0x02, 0xFE, 0xFC,    //U
    0x00, 0xF8, 0xFC, 0x06, 0xFC, 0xF8,    //V
    0x00, 0xFE, 0x1C, 0x78, 0x1C, 0xFE,    //W
    0x00, 0xC6, 0xEE, 0x38, 0xEE, 0xC6,    //X
    0x00, 0xE0, 0xF2, 0x1E, 0xF2, 0xE0,    //Y
    0x00, 0xC6, 0x8E, 0x9A, 0xF2, 0xE6,    //Z
    0x00, 0x7E, 0x81, 0xA5, 0xF3, 0xD3,    //[ �߿�S�����
//  0xCF, 0xA5, 0x81, 0x7E, 0x00, 0x00,    //  �߿�S���ұ�
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,    //\ ���ַ�
    0x00, 0x0C, 0x1C, 0x3C, 0x1C, 0x0C,    //] tri
    0x00, 0x50, 0x48, 0x7E, 0x0A, 0x12,    //  ������ //^
    0x00, 0x48, 0x50, 0x7E, 0x12, 0x0A,    //  �½��� //_
    0xBA, 0xBA, 0xBA, 0xBA, 0xBA, 0xBA,    //` �������
    0x00, 0x04, 0x2E, 0x2A, 0x2A, 0x1E,    //a
    0x00, 0x7E, 0x7E, 0x12, 0x1E, 0x0C,    //b
    0x00, 0x1C, 0x3E, 0x22, 0x22, 0x22,    //c
    0x00, 0x0C, 0x1E, 0x12, 0x7E, 0x7E,    //d
    0x00, 0x1C, 0x3E, 0x2A, 0x3A, 0x18,    //e
    0x00, 0x10, 0x3E, 0x7E, 0x50, 0x50,    //f
    0x00, 0x1A, 0x3D, 0x25, 0x3F, 0x1E,    //g
    0x00, 0x7E, 0x7E, 0x10, 0x1E, 0x0E,    //h
    0x00, 0x00, 0x12, 0x5E, 0x5E, 0x02,    //i
    0x00, 0x00, 0x01, 0x01, 0x5F, 0x5E,    //j
//  0x00, 0x7E, 0x7E, 0x08, 0x1C, 0x36,    //k
    0x81, 0xBD, 0x99, 0xAD, 0x81, 0xFF,    //  ok_kͼ��
    0x00, 0xFC, 0xFE, 0x02, 0x02, 0x00,    //l
//  0x00, 0x3E, 0x30, 0x1E, 0x30, 0x3E,    //m
    0xAA, 0x00, 0xAA, 0xAA, 0xAA, 0xAA,    //m �Ӳ˵�ͼ��
//  0x00, 0x3E, 0x3E, 0x20, 0x3E, 0x1E,    //n
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,    //n ��
//  0x00, 0x1C, 0x3E, 0x22, 0x3E, 0x1C,    //o
//  0x00, 0x78, 0x78, 0x78, 0x78, 0x00,    //o ����
    0x00, 0xFF, 0x81, 0xBD, 0xA5, 0xBD,    //  ok_oͼ��
    0x00, 0x3F, 0x3F, 0x24, 0x3C, 0x18,    //p
    0x00, 0x18, 0x3C, 0x24, 0x3F, 0x3F,    //q
    0x00, 0x3E, 0x3E, 0x10, 0x20, 0x20,    //r
    0x00, 0x14, 0x3A, 0x2A, 0x2E, 0x04,    //s
    0x00, 0x20, 0x7C, 0x7E, 0x22, 0x02,    //t
    0x00, 0x3C, 0x3E, 0x02, 0x3E, 0x3E,    //u
    0x00, 0x38, 0x3C, 0x06, 0x3C, 0x38,    //v
    0x00, 0x3E, 0x0C, 0x18, 0x0C, 0x3E,    //w
    0x00, 0x22, 0x36, 0x1C, 0x36, 0x22,    //x
    0x00, 0x39, 0x3D, 0x05, 0x3F, 0x3E,    //y
    0x00, 0x32, 0x26, 0x2E, 0x3A, 0x36,    //z
    0x00, 0x00, 0xFE, 0x7C, 0x38, 0x10,    //{ ����
    0xFE, 0xFE, 0x00, 0x00, 0xFE, 0xFE,    //| ||��ͣ
//  0x00, 0x1C, 0x3E, 0x63, 0x01, 0xF9,    //} �ػ���
//  0x01, 0x63, 0x3E, 0x1C, 0x00, 0x00,    //~ �ػ���
//  0x00, 0x00, 0x3C, 0x7E, 0xC3, 0xC3,
//  0xC3, 0xC3, 0x7E, 0x3C, 0x00, 0x00,
    0x14, 0x14, 0x14, 0x14, 0x14, 0x00,    //������
    0x15, 0x16, 0x1C, 0x34, 0x54, 0x00,    //~ ������

};
uc8 MiniChar6x8[] = {
    0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, // !
    0x00, 0x00, 0x07, 0x00, 0x07, 0x00, // "
    0x00, 0x14, 0x7f, 0x14, 0x7f, 0x14, // #
    0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12, // $
    0x00, 0x62, 0x64, 0x08, 0x13, 0x23, // %
    0x00, 0x36, 0x49, 0x55, 0x22, 0x50, // &
    0x00, 0x00, 0x05, 0x03, 0x00, 0x00, // '
    0x00, 0x00, 0x1c, 0x22, 0x41, 0x00, // (
    0x00, 0x00, 0x41, 0x22, 0x1c, 0x00, // )
    0x00, 0x14, 0x08, 0x3E, 0x08, 0x14, // *
    0x00, 0x08, 0x08, 0x3E, 0x08, 0x08, // +
    0x00, 0x00, 0x00, 0xA0, 0x60, 0x00, // ,
    0x00, 0x08, 0x08, 0x08, 0x08, 0x08, // -
    0x00, 0x00, 0x60, 0x60, 0x00, 0x00, // .
    0x00, 0x20, 0x10, 0x08, 0x04, 0x02, // /
    0x00, 0x3E, 0x51, 0x49, 0x45, 0x3E, // 0
    0x00, 0x00, 0x42, 0x7F, 0x40, 0x00, // 1
    0x00, 0x42, 0x61, 0x51, 0x49, 0x46, // 2
    0x00, 0x21, 0x41, 0x45, 0x4B, 0x31, // 3
    0x00, 0x18, 0x14, 0x12, 0x7F, 0x10, // 4
    0x00, 0x27, 0x45, 0x45, 0x45, 0x39, // 5
    0x00, 0x3C, 0x4A, 0x49, 0x49, 0x30, // 6
    0x00, 0x01, 0x71, 0x09, 0x05, 0x03, // 7
    0x00, 0x36, 0x49, 0x49, 0x49, 0x36, // 8
    0x00, 0x06, 0x49, 0x49, 0x29, 0x1E, // 9
    0x00, 0x00, 0x36, 0x36, 0x00, 0x00, // :
    0x00, 0x00, 0x56, 0x36, 0x00, 0x00, // ;
    0x00, 0x08, 0x14, 0x22, 0x41, 0x00, // <
    0x00, 0x14, 0x14, 0x14, 0x14, 0x14, // =
    0x00, 0x00, 0x41, 0x22, 0x14, 0x08, // >
    0x00, 0x02, 0x01, 0x51, 0x09, 0x06, // ?
    0x00, 0x32, 0x49, 0x59, 0x51, 0x3E, // @
    0x00, 0x7C, 0x12, 0x11, 0x12, 0x7C, // A
    0x00, 0x7F, 0x49, 0x49, 0x49, 0x36, // B
    0x00, 0x3E, 0x41, 0x41, 0x41, 0x22, // C
    0x00, 0x7F, 0x41, 0x41, 0x22, 0x1C, // D
    0x00, 0x7F, 0x49, 0x49, 0x49, 0x41, // E
    0x00, 0x7F, 0x09, 0x09, 0x09, 0x01, // F
    0x00, 0x3E, 0x41, 0x49, 0x49, 0x7A, // G
    0x00, 0x7F, 0x08, 0x08, 0x08, 0x7F, // H
    0x00, 0x00, 0x41, 0x7F, 0x41, 0x00, // I
    0x00, 0x20, 0x40, 0x41, 0x3F, 0x01, // J
    0x00, 0x7F, 0x08, 0x14, 0x22, 0x41, // K
    0x00, 0x7F, 0x40, 0x40, 0x40, 0x40, // L
    0x00, 0x7F, 0x02, 0x0C, 0x02, 0x7F, // M
    0x00, 0x7F, 0x04, 0x08, 0x10, 0x7F, // N
    0x00, 0x3E, 0x41, 0x41, 0x41, 0x3E, // O
    0x00, 0x7F, 0x09, 0x09, 0x09, 0x06, // P
    0x00, 0x3E, 0x41, 0x51, 0x21, 0x5E, // Q
    0x00, 0x7F, 0x09, 0x19, 0x29, 0x46, // R
    0x00, 0x46, 0x49, 0x49, 0x49, 0x31, // S
    0x00, 0x01, 0x01, 0x7F, 0x01, 0x01, // T
    0x00, 0x3F, 0x40, 0x40, 0x40, 0x3F, // U
    0x00, 0x1F, 0x20, 0x40, 0x20, 0x1F, // V
    0x00, 0x3F, 0x40, 0x38, 0x40, 0x3F, // W
    0x00, 0x63, 0x14, 0x08, 0x14, 0x63, // X
    0x00, 0x07, 0x08, 0x70, 0x08, 0x07, // Y
    0x00, 0x61, 0x51, 0x49, 0x45, 0x43, // Z
    0x00, 0x00, 0x7F, 0x41, 0x41, 0x00, // [
    0x00, 0x55, 0x2A, 0x55, 0x2A, 0x55, // 55
    0x00, 0x00, 0x41, 0x41, 0x7F, 0x00, // ]
    0x00, 0x04, 0x02, 0x01, 0x02, 0x04, // ^
    0x00, 0x40, 0x40, 0x40, 0x40, 0x40, // _
    0x00, 0x00, 0x01, 0x02, 0x04, 0x00, // '
    0x00, 0x20, 0x54, 0x54, 0x54, 0x78, // a
    0x00, 0x7F, 0x48, 0x44, 0x44, 0x38, // b
    0x00, 0x38, 0x44, 0x44, 0x44, 0x20, // c
    0x00, 0x38, 0x44, 0x44, 0x48, 0x7F, // d
    0x00, 0x38, 0x54, 0x54, 0x54, 0x18, // e
    0x00, 0x08, 0x7E, 0x09, 0x01, 0x02, // f
    0x00, 0x18, 0xA4, 0xA4, 0xA4, 0x7C, // g
    0x00, 0x7F, 0x08, 0x04, 0x04, 0x78, // h
    0x00, 0x00, 0x44, 0x7D, 0x40, 0x00, // i
    0x00, 0x40, 0x80, 0x84, 0x7D, 0x00, // j
    0x00, 0x7F, 0x10, 0x28, 0x44, 0x00, // k
    0x00, 0x00, 0x41, 0x7F, 0x40, 0x00, // l
    0x00, 0x7C, 0x04, 0x18, 0x04, 0x78, // m
    0x00, 0x7C, 0x08, 0x04, 0x04, 0x78, // n
    0x00, 0x38, 0x44, 0x44, 0x44, 0x38, // o
    0x00, 0xFC, 0x24, 0x24, 0x24, 0x18, // p
    0x00, 0x18, 0x24, 0x24, 0x18, 0xFC, // q
    0x00, 0x7C, 0x08, 0x04, 0x04, 0x08, // r
    0x00, 0x48, 0x54, 0x54, 0x54, 0x20, // s
    0x00, 0x04, 0x3F, 0x44, 0x40, 0x20, // t
    0x00, 0x3C, 0x40, 0x40, 0x20, 0x7C, // u
    0x00, 0x1C, 0x20, 0x40, 0x20, 0x1C, // v
    0x00, 0x3C, 0x40, 0x30, 0x40, 0x3C, // w
    0x00, 0x44, 0x28, 0x10, 0x28, 0x44, // x
    0x00, 0x1C, 0xA0, 0xA0, 0xA0, 0x7C, // y
    0x00, 0x44, 0x64, 0x54, 0x4C, 0x44, // z
    0x14, 0x14, 0x14, 0x14, 0x14, 0x14, // horiz lines
};

#endif
