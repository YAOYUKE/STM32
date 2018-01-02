#include <stm32f10x.h>
#include "led.h"
#include "delay.h"
#include "beep.h"

/*****************************************************************************
- Project     : 蜂鸣器实验
- Description : NONE
- Author      : Y.
- Date        : 2017.12
 *****************************************************************************/


int main(void)
{
	/* LED IO初始化 */
	LED_Init();

	/* BEEP IO初始化 */
	BEEP_Init();
	
	while(1)
	{
		GPIO_SetBits(GPIOA,GPIO_Pin_8);          // 设置 LED1 为高电平
		GPIO_ResetBits(GPIOD,GPIO_Pin_2);        // 设置 LED2 为低电平
		
		GPIO_SetBits(GPIOB,GPIO_Pin_5);          // 设置 BEEP 为低电平
		
		delay_ms(500);                           // 延时 500 毫秒
		
		
		GPIO_ResetBits(GPIOA,GPIO_Pin_8);        // 设置 LED1 为低电平
		GPIO_SetBits(GPIOD,GPIO_Pin_2);          // 设置 LED2 为高电平

		GPIO_ResetBits(GPIOB,GPIO_Pin_5);        // 设置 BEEP 为高电平
		
		delay_ms(500);                           // 延时 500 毫秒
	}

}



