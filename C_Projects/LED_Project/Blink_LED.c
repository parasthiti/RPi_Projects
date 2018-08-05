/* 
 * File:   Blink_LED.c
 * Author: Paras
 *
 * Created on May 21, 2017, 10:57 AM
 */

#include "LED_header.h"

#define LED 1

void BlinkLED() {
    //setvbuf(stdout, NULL, _IONBF, 0);
    printf ("Raspberry Pi - Blink LED\n");
    fflush(stdout);
    wiringPiSetup();
    pinMode(LED, OUTPUT);
    
    while(1){
        digitalWrite (LED, 1) ;     // On
        delay (500) ;               // mS
        digitalWrite (LED, 0) ;     // Off
        delay (500) ;
    }
}


