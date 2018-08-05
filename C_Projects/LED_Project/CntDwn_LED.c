/* 
 * File:   CntDwn_LED.c
 * Author: Paras
 *
 * Created on May 21, 2017, 10:57 AM
 */

#include "LED_header.h"

void CntDwnLED(void) {
    //setvbuf(stdout, NULL, _IONBF, 0);
    int LED1 = 0, LED2 = 1;
    int count = 5;
    printf ("Raspberry Pi - Countdown Blink LED\n");
    fflush(stdout);
    wiringPiSetup();
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    
    digitalWrite (LED2, 0) ;       // OFF
    
    while(count>-1){
        digitalWrite (LED1, 1) ;     // ON           
        printf("%d\n", count);
        fflush(stdout);
        delay (500) ;
        digitalWrite (LED1, 0) ; 
        delay (500);
        count--;
    }
    digitalWrite (LED2, 1);
    delay(10000);
    digitalWrite (LED2, 0);
    
}


