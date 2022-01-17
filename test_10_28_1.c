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
	printf("请猜一个0-99的整数。\n\n");
	do
	{
		printf("是多少呢:");
		scanf("%d", &no);
		if (no > ans)
		{
			printf("再小一点。\n");
		}
		else if (no < ans)
		{
			printf("再大一点。\n");
		}
	} while (no != ans);
	printf("回答正确。\n");
	return 0;
}