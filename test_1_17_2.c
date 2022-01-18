#include <stdio.h>
#include <Windows.h>
int find(int (*a)[3], int row, int col, int key)
{
	int i = 0;//从第0行开始找
	int j = col - 1;//从第0行的最后一位开始找
	while (i < row && j >= 0)//条件小于第row行,大于等于第0位
	{
		if (key > a[i][j])//大于最后一位，行数+1
		{
			i++;
		}
		else if (key < a[i][j])//小于最后一位，位数向前-1
		{
			j--;
		}
		else {
			return 1;//找到返回1值
		}
	}
	return 0;
}

int main()
{
	int a[3][3] = { { 1, 3, 5 }, { 3, 5, 7 }, { 5, 7, 9 } };
	int res = find(a, 3, 3, 7);
	if (res == 1)
	{
		printf("找到了。\n");
	}
	else {
		printf("没找到。\n");
	}

	system("pause");
	return 0;
}

