/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "raspi_header.h"

void ultrasonic_dist(){
    setvbuf(stdout, NULL, _IONBF, 0);
    int TRIGPIN = 0;
    int ECHOPIN = 1;
    float distance = 0;
    int lcd = init_LCD();
    wiringPiSetup();
    pinMode(ECHOPIN, INPUT);
    pinMode(TRIGPIN, OUTPUT);
    
    while(1){
        digitalWrite(TRIGPIN, LOW);
        delay(10);
        
        digitalWrite(TRIGPIN, HIGH);
        delayMicroseconds(20);
        digitalWrite(TRIGPIN, LOW);
        digitalRead(ECHOPIN);
        
        while(digitalRead(ECHOPIN) == LOW);
        
        float startTime = micros();
        while(digitalRead(ECHOPIN) == HIGH);
        float travelTime = micros() - startTime;
        
        distance = travelTime/148;
        lcdPosition(lcd, 0, 0);  
        lcdPrintf(lcd, "Dist:%.2fin", distance);
        delay(2000);
        lcdClear(lcd);
        //printf("Distance: %.2fin\r\n", distance);
        
    }
    
}
