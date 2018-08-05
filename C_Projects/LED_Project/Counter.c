/* 
 * File:   Counter.c
 * Author: Paras
 *
 * Created on May 23, 2017, 8:15 PM
 */

#include "LED_header.h"

void Counter(void) {
    //setvbuf(stdout, NULL, _IONBF, 0);
    int currentState  = 1;
    int prevState     = 1;
    int counter = 0;
    
    int Button = 6;
    printf ("Raspberry Pi - Push Button Counter\r\n");
    wiringPiSetup();
    pinMode(Button, INPUT);
    pullUpDnControl(Button, PUD_UP);
    
    while(1){
        currentState = digitalRead(Button);
        delay(50);

        if((currentState == 0) && (currentState != prevState)){
                counter++;
                printf("Counter: %d\r\n", counter); 
        } 
        prevState = currentState;
    }
}