/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
        
#include "LED_header.h"
 
//USE WIRINGPI PIN NUMBERS
#define LCD_RS  25               //Register select pin
#define LCD_E   24               //Enable Pin
#define LCD_D4  23               //Data pin 4
#define LCD_D5  22               //Data pin 5
#define LCD_D6  21               //Data pin 6
#define LCD_D7  14               //Data pin 7

int init_LCD(){
    int lcd;               
    wiringPiSetup();        
    lcd = lcdInit(2, 16, 4, LCD_RS, LCD_E, LCD_D4, LCD_D5, LCD_D6, LCD_D7, 0, 0, 0, 0); 
    return lcd;
}
 
void Out_LCD(int lcd, char* output){          
    lcdPosition(lcd, 0, 0); 
    lcdPuts(lcd, output);  
    delay(1000);
    lcdClear(lcd);
    delay(50);
}


