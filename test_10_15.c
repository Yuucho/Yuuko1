/*猜拳游戏（先赢满3局者胜/函数分割/显示成绩）*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
	int human;     /*玩家的手势*/
	int comp;      /*计算机的手势*/
	int win_no;    /*胜利次数*/
	int lose_no;   /*失败次数*/
	int draw_no;   /*平局次数*/
	char *hd[] = { "石头", "剪刀", "布" };
	/*---初始处理---*/
	void initialize(void)
	{
		win_no = 0;
		lose_no = 0;
		draw_no = 0;
		srand(time(NULL));     /*设定随机数种子*/
		printf("猜拳游戏开始！！\n");
	}
	/*---运行猜拳游戏（读取/生成手势）---*/
	void jyanken(void)
	{
		int i;
		comp = rand() % 3;
		do {
			printf("\n石头剪刀布...");
			for (i = 0; i < 3; i++)
				printf(" (%d)%s", i, hd[i]);
			printf(": ");
			scanf("%d", &human);     /*读取玩家的手势*/
		} while (human < 0 || human > 2);
	}
	/*---更新胜利/失败/平局次数---*/
	void count_no(int result)
	{
		switch (result)
		{
		case 0:		draw_no++;
			break;
		case 1:		lose_no++;
			break;
		case 2:		win_no++;
			break;
		}
	}
	/*---显示判断结果---*/
	void disp_result(int result)
	{
		switch (result)
		{
		case 0:		puts("平局。");
			break;
		case 1:		puts("你输了。");
			break;
		case 2:		puts("你赢了。");
			break;
		}
	}

	int main(void)
	{
		int judge;
		initialize();
		do {
			jyanken();
			/*显示计算机和玩家的手势*/
			printf("我出%s, 你出%s。\n", hd[comp], hd[human]);
			judge = (human - comp + 3) % 3;
			count_no(judge);
			disp_result(judge);
		} while (win_no < 3 && lose_no < 3);
		printf(win_no == 3 ? "\n 你赢了。\n" : "\n 我赢了。\n");
		printf("%d胜%d负%d平。\n", win_no, lose_no, draw_no);
		return 0;
	}
