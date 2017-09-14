

/*
 *
 * courier
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : courier.h
 * Date                : 10.03.2016
 * Font size in bytes  : 6006
 * Font width          : 10
 * Font height         : 12
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

#ifndef COURIER_H
#define COURIER_H

#define COURIER_WIDTH 10
#define COURIER_HEIGHT 12

static const char PROGMEM courier[]  = {
    0x17, 0x76, // size
    0x0A, // width
    0x0C, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x01, 0x05, 0x05, 0x04, 0x05, 0x05, 0x01, 0x02, 0x02, 
    0x05, 0x07, 0x03, 0x05, 0x02, 0x05, 0x05, 0x05, 0x05, 0x05, 
    0x06, 0x05, 0x05, 0x05, 0x05, 0x05, 0x02, 0x03, 0x06, 0x05, 
    0x06, 0x04, 0x05, 0x07, 0x06, 0x05, 0x06, 0x06, 0x06, 0x06, 
    0x07, 0x05, 0x05, 0x07, 0x05, 0x07, 0x07, 0x05, 0x05, 0x05, 
    0x07, 0x05, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x05, 0x03, 
    0x04, 0x03, 0x05, 0x07, 0x02, 0x06, 0x06, 0x05, 0x06, 0x05, 
    0x05, 0x06, 0x07, 0x05, 0x04, 0x06, 0x05, 0x07, 0x07, 0x05, 
    0x06, 0x06, 0x05, 0x05, 0x06, 0x07, 0x07, 0x07, 0x06, 0x07, 
    0x05, 0x03, 0x01, 0x03, 0x05, 0x06, 
    
    // font data
    0x3E, 0x10, // 33
    0x0E, 0x02, 0x00, 0x0E, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x50, 0xF8, 0x56, 0xF8, 0x56, 0x30, 0x00, 0x30, 0x00, 0x00, // 35
    0xD8, 0xA4, 0xA6, 0x64, 0x00, 0x00, 0x30, 0x00, // 36
    0x24, 0x2A, 0xA4, 0x50, 0x90, 0x00, 0x00, 0x00, 0x10, 0x00, // 37
    0xC0, 0x30, 0x48, 0x88, 0x40, 0x00, 0x10, 0x10, 0x00, 0x10, // 38
    0x1E, 0x00, // 39
    0xF8, 0x06, 0x10, 0x60, // 40
    0x06, 0xF8, 0x60, 0x10, // 41
    0x04, 0x34, 0x0E, 0x34, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x20, 0x20, 0x20, 0xFC, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, // 43
    0x00, 0x80, 0x80, 0x60, 0x30, 0x00, // 44
    0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // 45
    0x80, 0x80, 0x10, 0x10, // 46
    0x00, 0x80, 0x60, 0x18, 0x06, 0x20, 0x10, 0x00, 0x00, 0x00, // 47
    0xFC, 0x02, 0x02, 0x02, 0xFC, 0x00, 0x10, 0x10, 0x10, 0x00, // 48
    0x00, 0x02, 0xFE, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, // 49
    0x84, 0x42, 0x22, 0x12, 0x8C, 0x10, 0x10, 0x10, 0x10, 0x10, // 50
    0x84, 0x02, 0x12, 0x12, 0xEC, 0x00, 0x10, 0x10, 0x10, 0x00, // 51
    0x60, 0x50, 0x4C, 0x42, 0xFE, 0x40, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, // 52
    0x80, 0x1E, 0x12, 0x12, 0xE2, 0x00, 0x10, 0x10, 0x10, 0x00, // 53
    0xF8, 0x14, 0x12, 0x12, 0xE2, 0x00, 0x10, 0x10, 0x10, 0x00, // 54
    0x06, 0x02, 0x82, 0x72, 0x0E, 0x00, 0x00, 0x10, 0x00, 0x00, // 55
    0xEC, 0x12, 0x12, 0x12, 0xEC, 0x00, 0x10, 0x10, 0x10, 0x00, // 56
    0x1C, 0x22, 0x22, 0xA2, 0x7C, 0x10, 0x10, 0x10, 0x00, 0x00, // 57
    0x98, 0x98, 0x10, 0x10, // 58
    0x00, 0x98, 0x98, 0x30, 0x10, 0x00, // 59
    0x20, 0x50, 0x50, 0x88, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, // 60
    0x50, 0x50, 0x50, 0x50, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0x04, 0x04, 0x88, 0x50, 0x50, 0x20, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, // 62
    0x08, 0x44, 0x24, 0x18, 0x10, 0x10, 0x00, 0x00, // 63
    0xFE, 0x01, 0x31, 0x49, 0x7E, 0x10, 0x20, 0x20, 0x20, 0x10, // 64
    0x00, 0xC0, 0x7A, 0x46, 0x78, 0xC0, 0x00, 0x10, 0x10, 0x10, 0x00, 0x10, 0x10, 0x10, // 65
    0x02, 0xFE, 0x12, 0x12, 0x12, 0xEC, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // 66
    0xFC, 0x02, 0x02, 0x02, 0x86, 0x00, 0x10, 0x10, 0x10, 0x00, // 67
    0x02, 0xFE, 0x02, 0x02, 0x84, 0x78, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, // 68
    0x02, 0xFE, 0x12, 0x3A, 0x02, 0x86, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 69
    0x02, 0xFE, 0x12, 0x3A, 0x02, 0x06, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, // 70
    0xFC, 0x02, 0x02, 0x22, 0xE6, 0x20, 0x00, 0x10, 0x10, 0x10, 0x00, 0x00, // 71
    0x02, 0xFE, 0x12, 0x10, 0x12, 0xFE, 0x02, 0x10, 0x10, 0x10, 0x00, 0x10, 0x10, 0x10, // 72
    0x02, 0x02, 0xFE, 0x02, 0x02, 0x10, 0x10, 0x10, 0x10, 0x10, // 73
    0xE0, 0x02, 0x02, 0xFE, 0x02, 0x00, 0x10, 0x10, 0x00, 0x00, // 74
    0x02, 0xFE, 0x22, 0x30, 0x4A, 0x86, 0x02, 0x10, 0x10, 0x10, 0x00, 0x00, 0x10, 0x10, // 75
    0x02, 0xFE, 0x02, 0x00, 0xC0, 0x10, 0x10, 0x10, 0x10, 0x10, // 76
    0x02, 0xFE, 0x0E, 0x30, 0x0E, 0xFE, 0x02, 0x10, 0x10, 0x10, 0x00, 0x10, 0x10, 0x10, // 77
    0x02, 0xFE, 0x0E, 0x70, 0x82, 0xFE, 0x02, 0x10, 0x10, 0x10, 0x00, 0x10, 0x10, 0x00, // 78
    0xFC, 0x02, 0x02, 0x02, 0xFC, 0x00, 0x10, 0x10, 0x10, 0x00, // 79
    0x02, 0xFE, 0x22, 0x22, 0x1C, 0x10, 0x10, 0x10, 0x00, 0x00, // 80
    0xFC, 0x02, 0x02, 0x02, 0xFC, 0x00, 0x10, 0x30, 0x30, 0x20, // 81
    0x02, 0xFE, 0x22, 0x22, 0x62, 0x9C, 0x00, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x10, // 82
    0x8C, 0x92, 0x12, 0x14, 0xE6, 0x10, 0x00, 0x10, 0x10, 0x00, // 83
    0x06, 0x02, 0x02, 0xFE, 0x02, 0x02, 0x06, 0x00, 0x00, 0x10, 0x10, 0x10, 0x00, 0x00, // 84
    0x02, 0xFE, 0x02, 0x00, 0x02, 0xFE, 0x02, 0x00, 0x00, 0x10, 0x10, 0x10, 0x00, 0x00, // 85
    0x02, 0x0E, 0x72, 0x80, 0x72, 0x0E, 0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, // 86
    0x02, 0xFE, 0x02, 0xF0, 0x02, 0xFE, 0x02, 0x00, 0x00, 0x10, 0x00, 0x10, 0x00, 0x00, // 87
    0x02, 0x86, 0x48, 0x30, 0x48, 0x86, 0x02, 0x10, 0x10, 0x00, 0x00, 0x00, 0x10, 0x10, // 88
    0x02, 0x06, 0x1A, 0xE0, 0x1A, 0x06, 0x02, 0x00, 0x00, 0x10, 0x10, 0x10, 0x00, 0x00, // 89
    0x86, 0x42, 0x32, 0x0A, 0x86, 0x10, 0x10, 0x10, 0x10, 0x10, // 90
    0xFE, 0x02, 0x02, 0x70, 0x40, 0x40, // 91
    0x02, 0x1C, 0x60, 0x80, 0x00, 0x00, 0x00, 0x30, // 92
    0x02, 0x02, 0xFE, 0x40, 0x40, 0x70, // 93
    0x10, 0x08, 0x06, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 95
    0x02, 0x04, 0x00, 0x00, // 96
    0xD0, 0x28, 0x28, 0x28, 0xF0, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, // 97
    0x02, 0xFE, 0x10, 0x08, 0x08, 0xF0, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, // 98
    0xF0, 0x08, 0x08, 0x08, 0x98, 0x00, 0x10, 0x10, 0x10, 0x00, // 99
    0xF0, 0x08, 0x08, 0x12, 0xFE, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, // 100
    0xF0, 0x28, 0x28, 0x28, 0x30, 0x00, 0x10, 0x10, 0x10, 0x10, // 101
    0x08, 0xFC, 0x0A, 0x0A, 0x0A, 0x10, 0x10, 0x10, 0x10, 0x10, // 102
    0xF0, 0x08, 0x08, 0x10, 0xF8, 0x08, 0x00, 0x50, 0x50, 0x50, 0x30, 0x00, // 103
    0x02, 0xFE, 0x10, 0x08, 0x08, 0xF0, 0x00, 0x10, 0x10, 0x10, 0x00, 0x10, 0x10, 0x10, // 104
    0x08, 0x08, 0xFA, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, // 105
    0x08, 0x08, 0x0A, 0xF8, 0x40, 0x40, 0x40, 0x30, // 106
    0x02, 0xFE, 0x20, 0x68, 0x98, 0x08, 0x10, 0x10, 0x00, 0x10, 0x10, 0x10, // 107
    0x00, 0x02, 0xFE, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, // 108
    0x08, 0xF8, 0x08, 0xF0, 0x08, 0xF0, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 109
    0x08, 0xF8, 0x10, 0x08, 0x08, 0xF0, 0x00, 0x10, 0x10, 0x10, 0x00, 0x10, 0x10, 0x10, // 110
    0xF0, 0x08, 0x08, 0x08, 0xF0, 0x00, 0x10, 0x10, 0x10, 0x00, // 111
    0x08, 0xF8, 0x10, 0x08, 0x08, 0xF0, 0x40, 0x70, 0x50, 0x10, 0x10, 0x00, // 112
    0xF0, 0x08, 0x08, 0x10, 0xF8, 0x08, 0x00, 0x10, 0x10, 0x50, 0x70, 0x40, // 113
    0x08, 0xF8, 0x10, 0x08, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, // 114
    0x90, 0x28, 0x28, 0x28, 0xD8, 0x10, 0x10, 0x10, 0x10, 0x00, // 115
    0x08, 0xFC, 0x08, 0x08, 0x08, 0x80, 0x00, 0x00, 0x10, 0x10, 0x10, 0x00, // 116
    0x08, 0xF8, 0x00, 0x00, 0x88, 0xF8, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x10, 0x10, // 117
    0x08, 0x38, 0xC8, 0x00, 0xC8, 0x38, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, // 118
    0x08, 0xF8, 0x08, 0xE0, 0x08, 0xF8, 0x08, 0x00, 0x00, 0x10, 0x00, 0x10, 0x00, 0x00, // 119
    0x08, 0x98, 0x60, 0x60, 0x98, 0x08, 0x10, 0x10, 0x00, 0x00, 0x10, 0x10, // 120
    0x08, 0x18, 0x68, 0x80, 0xC8, 0x38, 0x08, 0x00, 0x40, 0x40, 0x70, 0x40, 0x00, 0x00, // 121
    0x98, 0x48, 0x28, 0x18, 0x88, 0x10, 0x10, 0x10, 0x10, 0x10, // 122
    0x40, 0xBC, 0x02, 0x00, 0x30, 0x40, // 123
    0xFE, 0x30, // 124
    0x02, 0xBC, 0x40, 0x40, 0x30, 0x00, // 125
    0x40, 0x20, 0x40, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0xFE, 0x02, 0x02, 0x02, 0x02, 0xFE, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 // 127
    
};

#endif
