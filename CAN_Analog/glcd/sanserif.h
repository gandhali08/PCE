

/*
 *
 * sanserif_9
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : sanserif_9
 * Date                : 17.12.2015
 * Font size in bytes  : 3378
 * Font width          : 10
 * Font height         : 9
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
#include <avr/pgmspace.h>

#ifndef SANSERIF_9_H
#define SANSERIF_9_H

#define SANSERIF_9_WIDTH 10
#define SANSERIF_9_HEIGHT 9

static const uint8_t PROGMEM sanserif_9[]  = {
    0x0D, 0x32, // size
    0x0A, // width
    0x09, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x01, 0x03, 0x04, 0x05, 0x06, 0x06, 0x01, 0x03, 0x03, 
    0x03, 0x05, 0x01, 0x02, 0x01, 0x03, 0x04, 0x02, 0x04, 0x04, 
    0x05, 0x04, 0x04, 0x04, 0x04, 0x04, 0x01, 0x01, 0x03, 0x04, 
    0x03, 0x05, 0x08, 0x06, 0x04, 0x05, 0x05, 0x05, 0x04, 0x05, 
    0x05, 0x01, 0x04, 0x05, 0x04, 0x07, 0x05, 0x05, 0x04, 0x05, 
    0x05, 0x04, 0x05, 0x05, 0x06, 0x09, 0x05, 0x05, 0x06, 0x02, 
    0x03, 0x02, 0x03, 0x05, 0x02, 0x04, 0x04, 0x04, 0x04, 0x04, 
    0x03, 0x04, 0x04, 0x01, 0x01, 0x04, 0x01, 0x07, 0x04, 0x04, 
    0x04, 0x04, 0x03, 0x04, 0x02, 0x04, 0x05, 0x05, 0x04, 0x05, 
    0x03, 0x03, 0x01, 0x03, 0x04, 0x00, 
    
    // font data
    0x5F, 0x00, // 33
    0x03, 0x00, 0x03, 0x00, 0x00, 0x00, // 34
    0x7C, 0x17, 0x7C, 0x17, 0x00, 0x00, 0x00, 0x00, // 35
    0x26, 0x49, 0xFF, 0x49, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, // 36
    0x02, 0x05, 0x72, 0x2E, 0x51, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 37
    0x30, 0x4E, 0x49, 0x59, 0x26, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 38
    0x03, 0x00, // 39
    0x7C, 0x82, 0x01, 0x00, 0x00, 0x80, // 40
    0x01, 0x82, 0x7C, 0x80, 0x00, 0x00, // 41
    0x05, 0x03, 0x05, 0x00, 0x00, 0x00, // 42
    0x10, 0x10, 0x7C, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // 43
    0xC0, 0x00, // 44
    0x10, 0x10, 0x00, 0x00, // 45
    0x40, 0x00, // 46
    0x60, 0x1C, 0x03, 0x00, 0x00, 0x00, // 47
    0x7E, 0x41, 0x41, 0x3E, 0x00, 0x00, 0x00, 0x00, // 48
    0x02, 0x7F, 0x00, 0x00, // 49
    0x42, 0x61, 0x59, 0x46, 0x00, 0x00, 0x00, 0x00, // 50
    0x22, 0x41, 0x49, 0x36, 0x00, 0x00, 0x00, 0x00, // 51
    0x18, 0x14, 0x12, 0x7F, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // 52
    0x2C, 0x47, 0x45, 0x39, 0x00, 0x00, 0x00, 0x00, // 53
    0x3E, 0x45, 0x45, 0x3A, 0x00, 0x00, 0x00, 0x00, // 54
    0x01, 0x71, 0x0D, 0x03, 0x00, 0x00, 0x00, 0x00, // 55
    0x36, 0x49, 0x49, 0x36, 0x00, 0x00, 0x00, 0x00, // 56
    0x2E, 0x51, 0x51, 0x3E, 0x00, 0x00, 0x00, 0x00, // 57
    0x44, 0x00, // 58
    0xC4, 0x00, // 59
    0x08, 0x14, 0x22, 0x00, 0x00, 0x00, // 60
    0x14, 0x14, 0x14, 0x14, 0x00, 0x00, 0x00, 0x00, // 61
    0x22, 0x14, 0x08, 0x00, 0x00, 0x00, // 62
    0x02, 0x01, 0x59, 0x09, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, // 63
    0x7C, 0x82, 0x79, 0x45, 0x79, 0x4D, 0xA2, 0x9C, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, // 64
    0x40, 0x38, 0x16, 0x11, 0x16, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 65
    0x7F, 0x49, 0x49, 0x3E, 0x00, 0x00, 0x00, 0x00, // 66
    0x3E, 0x41, 0x41, 0x41, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, // 67
    0x7F, 0x41, 0x41, 0x41, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, // 68
    0x7F, 0x49, 0x49, 0x49, 0x49, 0x00, 0x00, 0x00, 0x00, 0x00, // 69
    0x7F, 0x09, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, // 70
    0x3E, 0x41, 0x41, 0x49, 0x3A, 0x00, 0x00, 0x00, 0x00, 0x00, // 71
    0x7F, 0x08, 0x08, 0x08, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, // 72
    0x7F, 0x00, // 73
    0x60, 0x40, 0x40, 0x3F, 0x00, 0x00, 0x00, 0x00, // 74
    0x7F, 0x08, 0x14, 0x22, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, // 75
    0x7F, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, // 76
    0x7F, 0x06, 0x38, 0x40, 0x38, 0x06, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 77
    0x7F, 0x06, 0x08, 0x30, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, // 78
    0x3E, 0x41, 0x41, 0x41, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, // 79
    0x7F, 0x09, 0x09, 0x0F, 0x00, 0x00, 0x00, 0x00, // 80
    0x3E, 0x41, 0x41, 0x61, 0x5E, 0x00, 0x00, 0x00, 0x00, 0x00, // 81
    0x7F, 0x09, 0x09, 0x19, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, // 82
    0x26, 0x49, 0x49, 0x32, 0x00, 0x00, 0x00, 0x00, // 83
    0x01, 0x01, 0x7F, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // 84
    0x3F, 0x40, 0x40, 0x40, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, // 85
    0x03, 0x0C, 0x30, 0x40, 0x30, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 86
    0x03, 0x3C, 0x40, 0x3E, 0x01, 0x3E, 0x40, 0x3C, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 87
    0x41, 0x36, 0x18, 0x26, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, // 88
    0x01, 0x06, 0x78, 0x06, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // 89
    0x61, 0x51, 0x49, 0x45, 0x43, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 90
    0xFF, 0x01, 0x80, 0x80, // 91
    0x03, 0x1C, 0x60, 0x00, 0x00, 0x00, // 92
    0x01, 0xFF, 0x80, 0x80, // 93
    0x06, 0x01, 0x06, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, // 95
    0x01, 0x02, 0x00, 0x00, // 96
    0x64, 0x54, 0x54, 0x7C, 0x00, 0x00, 0x00, 0x00, // 97
    0x7F, 0x44, 0x44, 0x38, 0x00, 0x00, 0x00, 0x00, // 98
    0x38, 0x44, 0x44, 0x28, 0x00, 0x00, 0x00, 0x00, // 99
    0x38, 0x44, 0x44, 0x7F, 0x00, 0x00, 0x00, 0x00, // 100
    0x38, 0x54, 0x54, 0x58, 0x00, 0x00, 0x00, 0x00, // 101
    0x04, 0x7E, 0x05, 0x00, 0x00, 0x00, // 102
    0xB8, 0x44, 0x44, 0xFC, 0x00, 0x80, 0x80, 0x00, // 103
    0x7F, 0x04, 0x04, 0x78, 0x00, 0x00, 0x00, 0x00, // 104
    0x7D, 0x00, // 105
    0xFD, 0x00, // 106
    0x7F, 0x10, 0x38, 0x44, 0x00, 0x00, 0x00, 0x00, // 107
    0x7F, 0x00, // 108
    0x7C, 0x04, 0x04, 0x7C, 0x04, 0x04, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 109
    0x7C, 0x04, 0x04, 0x78, 0x00, 0x00, 0x00, 0x00, // 110
    0x38, 0x44, 0x44, 0x38, 0x00, 0x00, 0x00, 0x00, // 111
    0xFC, 0x44, 0x44, 0x38, 0x80, 0x00, 0x00, 0x00, // 112
    0x38, 0x44, 0x44, 0xFC, 0x00, 0x00, 0x00, 0x80, // 113
    0x7C, 0x04, 0x04, 0x00, 0x00, 0x00, // 114
    0x48, 0x54, 0x54, 0x24, 0x00, 0x00, 0x00, 0x00, // 115
    0x7E, 0x44, 0x00, 0x00, // 116
    0x3C, 0x40, 0x40, 0x7C, 0x00, 0x00, 0x00, 0x00, // 117
    0x04, 0x38, 0x40, 0x38, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // 118
    0x3C, 0x40, 0x3C, 0x40, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, // 119
    0x44, 0x38, 0x28, 0x44, 0x00, 0x00, 0x00, 0x00, // 120
    0x04, 0x38, 0xC0, 0x38, 0x04, 0x00, 0x80, 0x00, 0x00, 0x00, // 121
    0x64, 0x54, 0x4C, 0x00, 0x00, 0x00, // 122
    0x10, 0xEF, 0x01, 0x00, 0x80, 0x80, // 123
    0xFF, 0x00, // 124
    0x01, 0xEF, 0x10, 0x80, 0x80, 0x00, // 125
    0x18, 0x08, 0x10, 0x18, 0x00, 0x00, 0x00, 0x00, // 126
    
};

#endif
