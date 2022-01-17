#define _CRT_SECURE_NO_WARNINGS 1
#include  "game.h"

void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void Printboard(char board[ROWS][COLS], int row, int col)
{
	int j = 0, i = 0;
	for (j = 0; j <= col; j++)//打印序列号
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);//打印棋盘
		}
		printf("\n");
	}


}
void setmine(char mine[ROWS][COLS], int row, int col)//布置雷场
{
	int x = 0, y = 0;
	int count = MINE;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (x >= 1 && x <= row && y >= 1 && y <= col && mine[x][y] == '0')
		{
			count--;
			mine[x][y] = '1';
		}
	}
}

int Get_mine_count(char mine[ROWS][COLS], int x, int y)//获取周围8个格子是否有雷
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}

void Spread(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y)//传递
{
	show[x][y] = ' ';
	int i = 0, j = 0, ret = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (i > 0 && i <= ROW && j > 0 && j <= COL && mine[i][j] != '1' && show[i][j] == '*')
			{
				ret = Get_mine_count(mine, i, j);
				if (ret != 0)
				{
					show[i][j] = ret + '0';
				}
				if (!ret)
				{
					Spread(show, mine, i, j);
				}
				else if (show[i][j] == '*')
				{
					show[i][j] = ' ';
				}
			}
		}
	}
}

int Isblank(char show[ROWS][COLS], int row, int col)//计算已判断完的个数
{
	int i = 0, j = 0, n = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] != '*')n++;
		}
	}
	return n;
}

void showmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)//玩家所看到的棋盘
{
	int x = 0, y = 0;
	int n = 0;//记录已排除的个数
	while (SIZEX - n)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//欧皇测试仪
			if (n == 0 && mine[x][y] == '1')
			{
				mine[x][y] = '0';
				int a, b = 0;
				while (1)
				{
					a = rand() % row + 1;
					b = rand() % col + 1;
					if (a >= 1 && a <= row && b >= 1 && b <= col && mine[a][b] == '0'&&a != x && b != y)
					{
						mine[a][b] = '1';
						break;
					}
				}
			}
			//坐标合法
			//踩雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你扫到了雷\n");
				Printboard(mine, ROW, COL);
				break;
			}
			else//未踩雷
			{
				int count = 0;
				count = Get_mine_count(mine, x, y) + '0';
				if (count == '0')
				{
					Spread(show, mine, x, y);//递归传递空格
				}
				show[x][y] = count;
				n = Isblank(show, ROW, COL);
				system("cls");
				Printboard(show, row, col);
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入！！！\n");
		}
	}
	if (SIZEX - n == 0)
	{
		printf("恭喜你，扫雷成功\n");
		Printboard(mine, ROW, COL);
		system("pause");
	}
}