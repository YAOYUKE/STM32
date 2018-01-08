#include <stm32f10x.h>
#include "led.h"
#include "delay.h"
#include "beep.h"

/*****************************************************************************
- Project     : ������ʵ��
- Description : NONE
- Author      : Y.
- Date        : 2017.12
 *****************************************************************************/


int main(void)
{
	/* LED IO��ʼ�� */
	LED_Init();

	/* BEEP IO��ʼ�� */
	BEEP_Init();
	
	while(1)
	{
		GPIO_SetBits(GPIOA,GPIO_Pin_8);          // ���� LED1 Ϊ�ߵ�ƽ
		GPIO_ResetBits(GPIOD,GPIO_Pin_2);        // ���� LED2 Ϊ�͵�ƽ
		
		GPIO_SetBits(GPIOB,GPIO_Pin_5);          // ���� BEEP Ϊ�͵�ƽ
		
		delay_ms(500);                           // ��ʱ 500 ����
		
		
		GPIO_ResetBits(GPIOA,GPIO_Pin_8);        // ���� LED1 Ϊ�͵�ƽ
		GPIO_SetBits(GPIOD,GPIO_Pin_2);          // ���� LED2 Ϊ�ߵ�ƽ

		GPIO_ResetBits(GPIOB,GPIO_Pin_5);        // ���� BEEP Ϊ�ߵ�ƽ
		
		delay_ms(500);                           // ��ʱ 500 ����
	}

}



