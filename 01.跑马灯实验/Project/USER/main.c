#include <stm32f10x.h>
#include "led.h"
#include "delay.h"


/*****************************************************************************
-Project     : �����ʵ��
-Description : LED1 LED2 ������˸
-Author      : Y.
-Date        : 2017.12
 *****************************************************************************/


int main(void)
{
	/* LED IO��ʼ�� */
	LED_Init();

	while(1)
	{
		GPIO_SetBits(GPIOA,GPIO_Pin_8);          // ���� PA.8 Ϊ�ߵ�ƽ
		GPIO_ResetBits(GPIOD,GPIO_Pin_2);        // ���� PD.2 Ϊ�͵�ƽ
		
		delay_ms(500);                           // ��ʱ 500 ����
		
		
		GPIO_ResetBits(GPIOA,GPIO_Pin_8);        // ���� PA.8 Ϊ�͵�ƽ
		GPIO_SetBits(GPIOD,GPIO_Pin_2);          // ���� PD.2 Ϊ�ߵ�ƽ

		delay_ms(500);                           // ��ʱ 500 ����
	}

}



