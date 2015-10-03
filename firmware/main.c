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

#include "avr_compiler.h"
#include <stdint.h>
#include <stdlib.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <avr/io.h>
#include <math.h>
#include <string.h>
#include <util/delay.h>
#include <util/delay_basic.h>
#include "pattern.h"

#define LED7_ON PORTB |= (1<<PIN3)
#define LED6_ON PORTB |= (1<<PIN2)
#define LED5_ON PORTB |= (1<<PIN1)
#define LED4_ON PORTB |= (1<<PIN0)
#define LED3_ON PORTD |= (1<<PIN6)
#define LED2_ON PORTD |= (1<<PIN5)
#define LED1_ON PORTD |= (1<<PIN4)
#define LED0_ON PORTD |= (1<<PIN3)

#define LED7_OFF PORTB &= ~(1<<PIN3)
#define LED6_OFF PORTB &= ~(1<<PIN2)
#define LED5_OFF PORTB &= ~(1<<PIN1)
#define LED4_OFF PORTB &= ~(1<<PIN0)
#define LED3_OFF PORTD &= ~(1<<PIN6)
#define LED2_OFF PORTD &= ~(1<<PIN5)
#define LED1_OFF PORTD &= ~(1<<PIN4)
#define LED0_OFF PORTD &= ~(1<<PIN3)

#define DELAYUS 1200
#define NLEDS 8

void init_hardware();
void put_character(uint8_t c);
void write_led(const __flash uint8_t *pattern, int length);



int main(void)
{
    init_hardware();
    
    //available characters (pattern.h)
    // ABCDEFGHIJKLMNOPQRSTUVWXYZ!.+-'
    uint8_t sentence[] = "Step back - I'm doing Science!";
    int length = sizeof(sentence)/sizeof(sentence[0]);
    
    while(1){
        int i;
        for (i=0; i<length; i++) {
            put_character(sentence[i]);
        }
        //Spaces at the end of the sentence
        put_character(0);
        put_character(0);
    }
    return 0;
}

void init_hardware() {
    DDRB |= (1<<PIN3);
    DDRB |= (1<<PIN2);
    DDRB |= (1<<PIN1);
    DDRB |= (1<<PIN0);
    DDRD |= (1<<PIN6);
    DDRD |= (1<<PIN5);
    DDRD |= (1<<PIN4);
    DDRD |= (1<<PIN3);
}

void put_character(uint8_t c) {
    if (c == 'A' || c == 'a') {
        write_led(A,LENGTHA);
    } else if (c == 'B' || c == 'b') {
        write_led(B,LENGTHB);
    } else if (c == 'C' || c == 'c') {
        write_led(C,LENGTHC);
    } else if (c == 'D' || c == 'd') {
        write_led(D,LENGTHD);
    } else if (c == 'E' || c == 'e') {
        write_led(E,LENGTHE);
    } else if (c == 'F' || c == 'f') {
        write_led(F,LENGTHF);
    } else if (c == 'G' || c == 'g') {
        write_led(G,LENGTHG);
    } else if (c == 'H' || c == 'h') {
        write_led(H,LENGTHH);
    } else if (c == 'I' || c == 'i') {
        write_led(I,LENGTHI);
    } else if (c == 'J' || c == 'j') {
        write_led(J,LENGTHJ);
    } else if (c == 'K' || c == 'k') {
        write_led(K,LENGTHK);
    } else if (c == 'L' || c == 'l') {
        write_led(L,LENGTHL);
    } else if (c == 'M' || c == 'm') {
        write_led(M,LENGTHM);
    } else if (c == 'N' || c == 'n') {
        write_led(N,LENGTHN);
    } else if (c == 'O' || c == 'o') {
        write_led(O,LENGTHO);
    } else if (c == 'P' || c == 'p') {
        write_led(P,LENGTHP);
    } else if (c == 'Q' || c == 'q') {
        write_led(Q,LENGTHQ);
    } else if (c == 'R' || c == 'r') {
        write_led(R,LENGTHR);
    } else if (c == 'S' || c == 's') {
        write_led(S,LENGTHS);
    } else if (c == 'T' || c == 't') {
        write_led(T,LENGTHT);
    } else if (c == 'U' || c == 'u') {
        write_led(U,LENGTHU);
    } else if (c == 'V' || c == 'v') {
        write_led(V,LENGTHV);
    } else if (c == 'W' || c == 'w') {
        write_led(W,LENGTHW);
    } else if (c == 'X' || c == 'x') {
        write_led(X,LENGTHX);
    } else if (c == 'Y' || c == 'y') {
        write_led(Y,LENGTHY);
    } else if (c == 'Z' || c == 'z') {
        write_led(Z,LENGTHZ);
    } else if (c == ' ') {
        write_led(sp,LENGTHSP);
    } else if (c == '!') {
        write_led(esm,LENGTHESM);
    } else if (c == '.') {
        write_led(pnt,LENGTHPNT);
    } else if (c == '-') {
        write_led(min,LENGTHMIN);
    } else if (c == '+') {
        write_led(plu,LENGTHPLU);
    } else if (c == 0x27) {
        write_led(apo,LENGTHAPO);
    }
    write_led(sp,LENGTHSP);
}

void write_led(const __flash uint8_t *pattern, int length) {
    int i;
    for (i = 0; i<length; i++) {
        if ( (pattern[i] & 0b10000000) == 0b10000000) {
            LED0_ON;
        } else {
            LED0_OFF;
        }
        if ((pattern[i] & 0b01000000) == 0b01000000) {
            LED1_ON;
        } else {
            LED1_OFF;
        }
        if ((pattern[i] & 0b00100000) == 0b00100000) {
            LED2_ON;
        } else {
            LED2_OFF;
        }
        if ((pattern[i] & 0b00010000) == 0b00010000) {
            LED3_ON;
        } else {
            LED3_OFF;
        }
        if ((pattern[i] & 0b00001000) == 0b00001000) {
            LED4_ON;
        } else {
            LED4_OFF;
        }
        if ((pattern[i] & 0b00000100) == 0b00000100) {
            LED5_ON;
        } else {
            LED5_OFF;
        }
        if ((pattern[i] & 0b00000010) == 0b00000010) {
            LED6_ON;
        } else {
            LED6_OFF;
        }
        if ((pattern[i] & 0b00000001) == 0b00000001) {
            LED7_ON;
        } else {
            LED7_OFF;
        }
        _delay_us(DELAYUS);
    }
}
