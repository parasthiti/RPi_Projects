/* 
 * File:   Blink_LED.c
 * Author: Paras
 *
 * Created on May 21, 2017, 10:57 AM
 */

#include "LED_header.h"

void PushLED(void) {
    //setvbuf(stdout, NULL, _IONBF, 0);
    int LED6 = 5, Button = 6;
    printf ("Raspberry Pi - Push Button LED\n");
    fflush(stdout);
    wiringPiSetup();
    pinMode(LED6, OUTPUT);
    pinMode(Button, INPUT);
    pullUpDnControl(Button, PUD_UP); //pull up to 3.3V,make GPIO6 a stable level
    
    while(1){
        digitalWrite (LED6, LOW) ;      // LED OFF
        if(digitalRead(Button) == 0){   //indicate that button has pressed down
            digitalWrite(LED6, HIGH);   //LED ON
        }               
    }
}
