#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("你这个年纪还打游戏？你怎么想的！如果输入：我以后一定好好学习，就取消关机!\n请输入:>");
		scanf("%s", input);
		if (0 == strcmp(input, "我以后一定好好学习"))
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}