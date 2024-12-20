/*
|P0^0|B1|未知|        |P1^0|B1|未知|        |P2^0|B1|未知|          |P3^0|B1|串口1RXD      |P4^0|B1|未知       |P5^0|B1|未知  
|P0^1|B1|未知|        |P1^1|B1|未知|        |P2^1|B1|               |P3^1|B1|串口1TXD      |P4^1|B1|未知      |P5.1 B1|未知  
|P0^2|B1|未知|        |P1^2|B1|未知|        |P2^2|B1|             |P3^2|B1|未知          |P4^2|B1|未知      |P5.2 B1|未知  
|P0^3|B1|未知|        |P1^3|B1|未知|        |P2^3|B1|   |         |P3^3|B1|未知          |P4^3|B1|未知       |P5.3 B1|未知  
|P0^4|B1|未知|        |P1^4|B1|未知|        |P2^4|B1|未知|        |P3^4|B1|temPchannel1  |P4^4|B1|未知      |P5.4|蜂鸣器  
|P0^5|B1|未知|        |P1^5|B1|未知|        |P2^5|B1|未知|        |P3^5|B1|              |P4^5|B1|未知      |P5.5|B1|未知  
|P0^6|B1|未知|        |P1^6|B1|未知|        |P2^6|B1|未知|        |P3^6|B1|未知          |P4^6|B1|未知      |P5.6|B1|未知  
|P0^7|B1|未知|        |P1^7|B1|未知|        |P2^7|B1|未知|        |P3^7|B1|未知          |P4^7|B1|未知       |P5.7|B1|未知   
*/

#ifndef __GPIO_H_
#define __GPIO_H_

#include "sys.h"

sbit temPchannel1 = P1^7;
sbit temPchannel2 = P2^1;
sbit temPchannel3 = P2^2;

sbit TM1722_DIO   = P3^7;
sbit TM1722_CLK   = P4^1;
sbit TM1722_STB   = P3^6;

sbit buzzer       = P5^4;

sbit cooling_fan  = P0^5;
sbit external24   = P0^7;

sbit LED1         = P2^4;
sbit LED2         = P2^5;
sbit LED3         = P2^6;
sbit LED4         = P4^3;
sbit LED6         = P4^4;

sbit LED5         = P4^2;

sbit pwm_fan      = P2^3;
sbit lcd_bl       = P2^0;  
void GPIOInit( void );
    
#endif