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
		char *ws[] = { "��", "һ", "��", "��", "��", "��", "��" };
		printf("�����ڡ�\n");
		printf("�꣺ \n");	scanf("%d", &y);
		printf("�£� \n");	scanf("%d", &m);
		printf("�գ� \n");	scanf("%d", &d);
		w = dayofweek(y, m, d);
		printf("��һ��������%s��\n", ws[w]);
		return 0;
	}