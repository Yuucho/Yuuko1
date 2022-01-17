#include <REGX52.H>
#include "LCD1602.H"
#include "Delay.H"
int Result=0;
void main()
{
	LCD_Init();
	//LCD_ShowString(1,1,"Next project:");
	//LCD_ShowString(2,1,"HoloCubic");
	while(1)
	{
		Result++;
		Delay(1000);
		LCD_ShowNum(1,1,Result,3);
	}
}