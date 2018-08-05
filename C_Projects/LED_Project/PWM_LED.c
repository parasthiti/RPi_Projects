/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "LED_header.h"
#define LedPin 0

void pwm_led(){
    int i;
    wiringPiSetup();

    pinMode(LedPin, PWM_OUTPUT);//pwm output mode
    while(1){
        for(i=0;i<1024;i++){
            pwmWrite(LedPin, i);
            delay(2);
            }
        delay(1000);
        for(i=1023;i>=0;i--){
            pwmWrite(LedPin, i);
            delay(2);
        }
    }
}

