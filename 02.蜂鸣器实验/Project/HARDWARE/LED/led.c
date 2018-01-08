#include "stm32f10x.h"
#include "led.h"


/*****************************************************************************
Function    : LED IO��ʼ��
Description : ��ʼ��PA.8��PD.2Ϊ�����  ��ʹ��������IO�ڵ�ʱ��
Input       : None
Output      : None
Return      : None
 *****************************************************************************/

void LED_Init(void)
{
    /* ʹ��IO��ʱ�� */
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOD, ENABLE);  // ʹ�� GPIOA GPIOD ʱ��
    
	
	/* ����IO�� A */
	GPIO_InitTypeDef GPIO_InitStructure;                   // ָ��GPIO InitTypeDef�ṹ��ָ�룬�ýṹ����ָ����GPIO��Χ�豸��������Ϣ
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;              // ����IO����� 8
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz;      // �ٶȣ�10MHz
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;       // �������

	
	GPIO_Init(GPIOA,&GPIO_InitStructure);                  // ��ʼ��GPIOA.8������Ϣ���������ģʽ���ٶ�50MHz
	
    /* ����IO�� B */
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;              // ����IO����� 2
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz;      // �ٶȣ�10MHz
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;       // �������
	
	GPIO_Init(GPIOD,&GPIO_InitStructure);                  // ��ʼ��GPIOD.2������Ϣ���������ģʽ���ٶ�50MHz
	
	
	/* ��ʼ��IO�ڵ�ƽ */
	GPIO_SetBits(GPIOA,GPIO_Pin_8);                        // ��ʼ��GPIOA.8Ϊ�ߵ�ƽ
	GPIO_SetBits(GPIOD,GPIO_Pin_2);                        // ��ʼ��GPIOD.2Ϊ�ߵ�ƽ
}
