#include <stm32f10x.h>
#include "beep.h"


/*****************************************************************************
Function    : 蜂鸣器 IO初始化
Description : 初始化PB.5为输出口  并使能这两个IO口的时钟
Input       : None
Output      : None
Return      : None
 *****************************************************************************/
 
 
void BEEP_Init(void)
{

	/* 使能IO口时钟 */
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);    // 使能 GPIOB 时钟
	
	
	/* 配置IO口 */
	GPIO_InitTypeDef GPIO_InitStructure;                    // 指向GPIO InitTypeDef结构的指针，该结构包含指定的GPIO外围设备的配置信息
	
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;        // 推挽输出
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5;               // 配置IO口针脚 5
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz;        // 速度：10MHz
	
	GPIO_Init(GPIOB,&GPIO_InitStructure);                   // 初始化GPIOB.5配置信息：推挽输出模式；速度50MHz
	
	/* 初始化IO口电平 */
	GPIO_SetBits(GPIOB,GPIO_Pin_5);                         // 初始化GPIOB.5为低电平
	
	
	
}

