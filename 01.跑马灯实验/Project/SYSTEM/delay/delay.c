#include <stm32f10x.h>
#include "delay.h"

/*****************************************************************************
Function    : ��ʱ����
Description : ��ʱ x ���� (�Ǿ�ȷ��ʱ)
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

