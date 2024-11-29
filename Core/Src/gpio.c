#include "gpio.h"

void GPIOInit( void )
{
    P0M0 = 0x20;    P0M1 = 0x00;        //P0.5为推挽
    P1M0 = 0X80;    P1M1 = 0X00;        //P1.0 P1.1 P1.4为高阻输入
    P2M0 = 0x7f;    P2M1 = 0x00;        //P2.0 2.3  2.4 2.5 2.6为推挽      
    P3M0 = 0X00;    P3M1 = 0X00;       
    P4M0 = 0x1c;    P4M1 = 0x00;        //P4.2 4.3 4.4为推挽      
    P5M0 = 0X10;    P5M1 = 0X00;        //P5.4为推挽

    LED5        = 0;
    buzzer      = 1;
    pwm_fan     = 0;
    cooling_fan = 0;
}
  