#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int no;
	int ans;
	srand(time(NULL));
	ans = rand() % 100;
	printf("���һ��0-99��������\n\n");
	do
	{
		printf("�Ƕ�����:");
		scanf("%d", &no);
		if (no > ans)
		{
			printf("��Сһ�㡣\n");
		}
		else if (no < ans)
		{
			printf("�ٴ�һ�㡣\n");
		}
	} while (no != ans);
	printf("�ش���ȷ��\n");
	return 0;
}