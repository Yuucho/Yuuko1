#include <REGX52.H>
#include "Delay.H"
#include "LCD1602.H"
#include "MatrixKey.H"

unsigned char KeyNum;
void main()
{
	LCD_Init();
	LCD_ShowString(1,1,"CET-4:");	
	LCD_ShowString(2,1,"Good lucky");
	while(1)
	{
		KeyNum=MatrixKey();
		if(KeyNum)
		{
			LCD_ShowNum(2,1,KeyNum,2);
		}
	}
}
