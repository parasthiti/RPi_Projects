/* 
 * File:   LED_header.h
 * Author: Paras
 *
 * Created on May 21, 2017, 12:39 PM
 */

#ifndef LED_HEADER_H
#define LED_HEADER_H

#include <wiringPi.h>
#include <lcd.h>  
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//#include <string.h>

void BlinkLED(void);
void CntDwnLED(void);
void MultipleLEDs(void);
void PushLED(void);
void Counter(void);
void dht11_data(void);
int init_LCD(void);
void Out_LCD(int, char *);
void pwm_led(void);
void pir_sensor(void);
void ultrasonic_dist(void);

#endif /* LED_HEADER_H */

