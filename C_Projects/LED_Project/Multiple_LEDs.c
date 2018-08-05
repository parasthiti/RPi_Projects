/* 
 * File:   Multiple_LEDs.c
 * Author: Paras
 *
 * Created on May 21, 2017, 10:57 AM
 */

#include "LED_header.h"

void MultipleLEDs (void)
{
  int i, led ;

  printf ("Raspberry Pi - 6-LED Sequencer\n") ;
  printf ("==============================\n") ;
  printf ("\n") ;
  printf ("Connect LEDs to the first 6 GPIO pins and watch ...\n") ;

  wiringPiSetup () ;

  for (i = 0 ; i < 6 ; i++)
    pinMode (i, OUTPUT) ;

  for (;;)
  {
    for (led = 0 ; led < 6 ; led++)
    {
      digitalWrite (led, 1) ;
      delay (50) ;
    }

    for (led = 0 ; led <6 ; led++)
    {
      digitalWrite (led, 0) ;
      delay (50) ;
    }
  }
}

