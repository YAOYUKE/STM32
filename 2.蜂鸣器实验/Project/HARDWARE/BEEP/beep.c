#include <stm32f10x.h>
#include "beep.h"


/*****************************************************************************
Function    : ������ IO��ʼ��
Description : ��ʼ��PB.5Ϊ�����  ��ʹ��������IO�ڵ�ʱ��
Input       : None
Output      : None
Return      : None
 *****************************************************************************/
 
 
void BEEP_Init(void)
{

	/* ʹ��IO��ʱ�� */
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);    // ʹ�� GPIOB ʱ��
	
	
	/* ����IO�� */
	GPIO_InitTypeDef GPIO_InitStructure;                    // ָ��GPIO InitTypeDef�ṹ��ָ�룬�ýṹ����ָ����GPIO��Χ�豸��������Ϣ
	
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;        // �������
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5;               // ����IO����� 5
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz;        // �ٶȣ�10MHz
	
	GPIO_Init(GPIOB,&GPIO_InitStructure);                   // ��ʼ��GPIOB.5������Ϣ���������ģʽ���ٶ�50MHz
	
	/* ��ʼ��IO�ڵ�ƽ */
	GPIO_SetBits(GPIOB,GPIO_Pin_5);                         // ��ʼ��GPIOB.5Ϊ�͵�ƽ
	
	
	
}

