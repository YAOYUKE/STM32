#include <stm32f10x.h>
#include "led.h"
#include "delay.h"


/*****************************************************************************
-Project     : 跑马灯实验
-Description : LED1 LED2 交替闪烁
-Author      : Y.
-Date        : 2017.12
 *****************************************************************************/


int main(void)
{
	/* LED IO初始化 */
	LED_Init();

	while(1)
	{
		GPIO_SetBits(GPIOA,GPIO_Pin_8);          // 设置 PA.8 为高电平
		GPIO_ResetBits(GPIOD,GPIO_Pin_2);        // 设置 PD.2 为低电平
		
		delay_ms(500);                           // 延时 500 毫秒
		
		
		GPIO_ResetBits(GPIOA,GPIO_Pin_8);        // 设置 PA.8 为低电平
		GPIO_SetBits(GPIOD,GPIO_Pin_2);          // 设置 PD.2 为高电平

		delay_ms(500);                           // 延时 500 毫秒
	}

}



