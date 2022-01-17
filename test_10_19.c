#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
	int dayofweek(int year, int month, int day)
	{
		if (month == 1 || month == 2)
		{
			year--;
			month += 12;
		}
		return (year + year / 4 - year / 100 + year / 400 + (13 * month + 8) / 5 + day) % 7;
	}
	int main()
	{
		int y, m, d, w;
		char *ws[] = { "日", "一", "二", "三", "四", "五", "六" };
		printf("求星期。\n");
		printf("年： \n");	scanf("%d", &y);
		printf("月： \n");	scanf("%d", &m);
		printf("日： \n");	scanf("%d", &d);
		w = dayofweek(y, m, d);
		printf("这一天是星期%s。\n", ws[w]);
		return 0;
	}