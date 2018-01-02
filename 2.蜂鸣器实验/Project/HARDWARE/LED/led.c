#include "stm32f10x.h"
#include "led.h"


/*****************************************************************************
Function    : LED IO初始化
Description : 初始化PA.8和PD.2为输出口  并使能这两个IO口的时钟
Input       : None
Output      : None
Return      : None
 *****************************************************************************/

void LED_Init(void)
{
    /* 使能IO口时钟 */
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOD, ENABLE);  // 使能 GPIOA GPIOD 时钟
    
	
	/* 配置IO口 A */
	GPIO_InitTypeDef GPIO_InitStructure;                   // 指向GPIO InitTypeDef结构的指针，该结构包含指定的GPIO外围设备的配置信息
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;              // 配置IO口针脚 8
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz;      // 速度：10MHz
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;       // 推挽输出

	
	GPIO_Init(GPIOA,&GPIO_InitStructure);                  // 初始化GPIOA.8配置信息：推挽输出模式；速度50MHz
	
    /* 配置IO口 B */
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;              // 配置IO口针脚 2
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz;      // 速度：10MHz
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;       // 推挽输出
	
	GPIO_Init(GPIOD,&GPIO_InitStructure);                  // 初始化GPIOD.2配置信息：推挽输出模式；速度50MHz
	
	
	/* 初始化IO口电平 */
	GPIO_SetBits(GPIOA,GPIO_Pin_8);                        // 初始化GPIOA.8为高电平
	GPIO_SetBits(GPIOD,GPIO_Pin_2);                        // 初始化GPIOD.2为高电平
}
