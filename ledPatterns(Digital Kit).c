//******************************************************************************
//
//                  LED Test on ARM7 Development Board
//
//******************************************************************************
// Microcontroller: LPC2148
// Compiler:        Keil
// Target Hardware: ARM7 Universal Development Board
// Company:         ADVANCE TECH (I) PVT. LTD
// Author  : 		Prateek Gupta
//******************************************************************************
//                          Description                     
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// The firmware demonstrates the basic blinking LED experiment. All the LEDs 
// on-board blink at an interval of 1 second. 
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//                 Hardware Settings for ARM7 Development Board
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//  Microcontroller:LPC2148
//  Ext.Oscillator:	12 MHz
//
//
//	PINOUT:	LED    -   LPC2148 
//					------------------ 
//					LED1   -   	P1.16 
//					LED2   -   	P1.17 
//					LED3   -   	P1.18
//					LED4   -   	P1.19 
//					LED5   -   	P1.20 
//					LED6   -   	P1.21 
//					LED7   -   	P1.22
//					LED8   -	  P1.23
//***************************************************************************

//**************************INCLUDES********************************************
#include <LPC214x.h>
#include"delay.h"
//**********************End of INCLUDES*****************************************

//**********************Private Macro Definitions*******************************
#define LED_SET       		IOSET1
#define LED_CLR             IOCLR1
#define LED_DIR             IODIR1
#define LED_PIN             IOPIN1

#define LED7				23
#define LED6			    22
#define LED5				21
#define LED4				20
#define LED3				19
#define LED2				18
#define LED1				17
#define LED0				16
//Set data port pins
#define LED_PORT    				(unsigned long)((1<<LED7)|(1<<LED6)|(1<<LED5)|(1<<LED4))|((1<<LED3)|(1<<LED2)|(1<<LED1)|(1<<LED0))
//*******************End of Private Macro Definitions***************************

int i,a,b,x,y;

int main()
{	
	LED_DIR |= (unsigned long)(LED_PORT);		//initialize D0:D7 pins as output
	LED_CLR |= (unsigned long)(LED_PORT);		//initialize D0:D7 pins as output
	
	while(1)
	{
	//////////////////////////////////////////////////// nible on off
	    LED_CLR |= (0xf0) << LED0;
	    LED_SET |= (0x0f) << LED0;
	    delay_ms(500);    
	    LED_CLR |= (0x0f) << LED0;
	    LED_SET |= (0xf0) << LED0;
		delay_ms(500);
/////////////////////////////////////////////////// odd even on off
	    LED_CLR |= (0xff) << LED0;
	    LED_SET |= (0xaa) << LED0;
	    delay_ms(500);
	    LED_CLR |= (0xff) << LED0;
	    LED_SET |= (0x55) << LED0;
	    delay_ms(500);
	/////////////////////////////////////////////////// left shift
	    LED_PIN = (0x01) << LED0;
	    delay_ms(500);
		for(i=0;i<7;i++)
		{
			LED_PIN = LED_PIN << 1;
			delay_ms(500);
    }
/////////////////////////////////////////////////// rotate left
	    LED_PIN = (0x01) << LED0;
	    delay_ms(500);
		for(i=0;i<7;i++)
		{
			LED_PIN = LED_PIN << 1 | (0x01 << LED0);
			delay_ms(500);
    }
///////////////////////////////////////////////////	right shift
   		LED_PIN = (0x80) << LED0;
		delay_ms(500);

		for(i=0;i<7;i++)
		{
			LED_PIN = (LED_PIN >> 1) & (0X7F << LED0);
			delay_ms(500);
    }
///////////////////////////////////////////////////	rotate right
	    LED_PIN = (0x80) << LED0;
	    delay_ms(500);

		for(i=0;i<7;i++)
		{
			LED_PIN = (LED_PIN >> 1);
			delay_ms(500);
    }			
  }  		
}
