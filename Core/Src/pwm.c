#include "pwm.h"

#define CYCLE 4096

void PWM5Init( void )
{
    PWMCFG = 0x08;              //配置PWM5的输出初始电平为高电平
    PWMCKS = 0x0b;              //选择PWM的时钟为Fosc/12
    
    PWMC = CYCLE;               //设置PWM周期 PWMCH PWMCL
    
    PWM5T1 = 0;                 //设置PWM5第1次反转的PWM计数
    PWM5T2 = 10;                //设置PWM5第2次反转的PWM计数 占空比为(PWM5T2-PWM5T1)/PWMC
                         
    PWM5CR = 0x00;              //选择PWM5输出到P2.3,不使能PWM5中断          
}

