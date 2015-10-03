/*
 Persistence of Vision - October 2015
 http://deralchemist.wordpress.com/
 Copyright (c) 2015 Matthias Kesenheimer.  All rights reserved.
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef Pattern_h
#define Pattern_h

#define LENGTHMIN 4
const __flash uint8_t min[] = {
    0b00011000,
    0b00011000,
    0b00011000,
    0b00011000
};

#define LENGTHPLU 4
const __flash uint8_t plu[] = {
    0b00011000,
    0b01111110,
    0b01111110,
    0b00011000
};

#define LENGTHPNT 2
const __flash uint8_t pnt[] = {
    0b11000000,
    0b11000000
};

#define LENGTHESM 2
const __flash uint8_t esm[] = {
    0b11011111,
    0b11011111
};

#define LENGTHAPO 1
const __flash uint8_t apo[] = {
    0b00000111
};

#define LENGTHA 6
const __flash uint8_t A[] = {
    0b11111110,
    0b11111111,
    0b00011011,
    0b00011011,
    0b11111111,
    0b11111110
};

#define LENGTHB 6
const __flash uint8_t B[] = {
    0b11111111,
    0b11111111,
    0b10011001,
    0b10011001,
    0b11111111,
    0b01100110
};

#define LENGTHC 4
const __flash uint8_t C[] = {
    0b00111100,
    0b01111110,
    0b11000011,
    0b10000001
};

#define LENGTHD 6
const __flash uint8_t D[] = {
    0b11111111,
    0b11111111,
    0b10000001,
    0b11000011,
    0b01111110,
    0b00111100
};

#define LENGTHE 4
const __flash uint8_t E[] = {
    0b11111111,
    0b11111111,
    0b11011011,
    0b11011011
};

#define LENGTHF 4
const __flash uint8_t F[] = {
    0b11111111,
    0b11111111,
    0b00011011,
    0b00011011
};

#define LENGTHG 6
const __flash uint8_t G[] = {
    0b01111110,
    0b11111111,
    0b11000011,
    0b11011011,
    0b11111011,
    0b01111011
};

#define LENGTHH 6
const __flash uint8_t H[] = {
    0b11111111,
    0b11111111,
    0b00011000,
    0b00011000,
    0b11111111,
    0b11111111
};

#define LENGTHI 2
const __flash uint8_t I[] = {
    0b11111111,
    0b11111111
};

#define LENGTHJ 3
const __flash uint8_t J[] = {
    0b11000000,
    0b11111111,
    0b01111111
};

#define LENGTHK 5
const __flash uint8_t K[] = {
    0b11111111,
    0b11111111,
    0b00111100,
    0b01100110,
    0b11000011
};

#define LENGTHL 4
const __flash uint8_t L[] = {
    0b11111111,
    0b11111111,
    0b11000000,
    0b11000000
};

#define LENGTHM 7
const __flash uint8_t M[] = {
    0b11111111,
    0b11111111,
    0b00000110,
    0b00001100,
    0b00000110,
    0b11111111,
    0b11111111
};

#define LENGTHN 7
const __flash uint8_t N[] = {
    0b11111111,
    0b11111111,
    0b00001100,
    0b00011000,
    0b00110000,
    0b11111111,
    0b11111111
};

#define LENGTHO 6
const __flash uint8_t O[] = {
    0b01111110,
    0b11111111,
    0b11000011,
    0b11000011,
    0b11111111,
    0b01111110
};

#define LENGTHP 6
const __flash uint8_t P[] = {
    0b11111111,
    0b11111111,
    0b00011011,
    0b00011011,
    0b00001110,
    0b00001110
};

#define LENGTHQ 7
const __flash uint8_t Q[] = {
    0b01111110,
    0b11111111,
    0b11000011,
    0b11010011,
    0b11111111,
    0b01111110,
    0b10000000
};

#define LENGTHR 6
const __flash uint8_t R[] = {
    0b11111111,
    0b11111111,
    0b00011011,
    0b00111011,
    0b01101110,
    0b11001110
};

#define LENGTHS 6
const __flash uint8_t S[] = {
    0b11000100,
    0b11001110,
    0b11011111,
    0b11111011,
    0b01110011,
    0b00100011
};

#define LENGTHT 6
const __flash uint8_t T[] = {
    0b00000011,
    0b00000011,
    0b11111111,
    0b11111111,
    0b00000011,
    0b00000011
};

#define LENGTHU 6
const __flash uint8_t U[] = {
    0b01111111,
    0b11111111,
    0b11000000,
    0b11000000,
    0b11111111,
    0b01111111
};

#define LENGTHV 5
const __flash uint8_t V[] = {
    0b00111111,
    0b01111111,
    0b11000000,
    0b01111111,
    0b00111111
};

#define LENGTHW 7
const __flash uint8_t W[] = {
    0b11111111,
    0b11111111,
    0b01100000,
    0b00110000,
    0b01100000,
    0b11111111,
    0b11111111
};

#define LENGTHX 5
const __flash uint8_t X[] = {
    0b11000011,
    0b01100110,
    0b00111100,
    0b01100110,
    0b11000011
};

#define LENGTHY 6
const __flash uint8_t Y[] = {
    0b00000011,
    0b00000110,
    0b11111100,
    0b11111100,
    0b00000110,
    0b00000011
};

#define LENGTHZ 6
const __flash uint8_t Z[] = {
    0b00100011,
    0b01110011,
    0b11111011,
    0b11011111,
    0b11001110,
    0b11000100
};

#define LENGTHSP 2
const __flash uint8_t sp[] = {
    0b00000000,
    0b00000000
};

#endif
