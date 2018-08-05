/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "LED_header.h"

void pir_sensor(){
    setvbuf(stdout, NULL, _IONBF, 0);
    int PIRPIN = 1;
    int LEDPIN = 0;
    wiringPiSetup();
    pinMode(PIRPIN, INPUT);
    pinMode(LEDPIN, OUTPUT);
    
    int PIR_Status = 0;
    int calTime = 20;
    int i;
    int lcd = init_LCD();
    printf("Calibrating Sensor\r\n");
    for(i = 0; i < calTime; i++){
        printf(".");
        delay(1000);
    }
    printf("\r\nCalibration done.\r\n");
    delay(50); 
    
    while(1){
        PIR_Status = digitalRead(PIRPIN);
        if (PIR_Status == 1){
            printf("Motion detected\r\n");
            digitalWrite(LEDPIN, 1);
            Out_LCD(lcd, "Motion detected");
            //delay(1000);
        }
        else{
            printf("No Motion\r\n");
            digitalWrite(LEDPIN, 0);
            //Out_LCD("No Motion");
            delay(1000);
        }
    }
    
}
       
