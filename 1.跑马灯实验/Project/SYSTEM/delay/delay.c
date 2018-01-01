#include <stm32f10x.h>
#include "delay.h"

/*****************************************************************************
Function    : 延时函数
Description : 延时 x 毫秒 (非精确延时)
Input       : xms
Output      : None
Return      : None
 *****************************************************************************/

void delay_ms(u16 xms)
{
	u16 x,y;
    for(x=xms;x>0;x--)
	{
	    for(y=125;y>0;y--);
	}
}

