//球球大作战

#include <stdio.h>
#include <windows.h>
#include <dsound.h>
#include <time.h>
#include <math.h>
#include <conio.h>
#include <stdbool.h>
#include <graphics.h>
#include <mmsystem.h>
#include <stdlib.h>
#pragma comment(lib,"WINMM.LIB")
#define WIDTH 1024
#define HEIGHT 640
#define MAP_WIDTH (WIDTH*3)
#define MAP_HEIGHT (HEIGHT*3)
#define FOOD_NUM 1000
//地图 图片
IMAGE map(MAP_WIDTH, MAP_HEIGHT);
//摄像机坐标
POINT g_camreaPos;
struct Ball
{
	int x;
	int y;
	int r;
	bool flag;//是否存活
	DWORD color;
};

struct Ball player;
struct Ball food[FOOD_NUM];

void creatFood(int i)
{
	food[i].x = rand() % MAP_WIDTH;
	food[i].y = rand() % MAP_HEIGHT;
	food[i].r = rand() % 5 + 1;//1 2 3 4 5
	food[i].flag = true;
	food[i].color = RGB(rand() % 256, rand() % 256, rand() % 256);
}
void gameInit()
{

	mciSendString(TEXT("open BallBGM.wma alias BGM"), NULL, NULL, NULL);
	mciSendString(TEXT("play BGM repeat"), NULL, NULL, NULL);

	//随机数种子
	srand((unsigned)time(NULL));
	//初始化玩家
	player.x = rand()%MAP_WIDTH;
	player.y = rand()%MAP_HEIGHT;
	player.r = 10;
	player.flag = true;
	//初始化食物
	for (size_t i = 0; i <FOOD_NUM; i++)
	{
		creatFood(i);
	}
}

void gameDraw()
{
	//设置绘制的设备（图片）窗口也是一张图片
	SetWorkingImage(&map);
	//设置背景颜色
	setbkcolor(WHITE);
	cleardevice();
	//画格子
	setlinecolor(RGB(230, 231, 239));
	for (size_t i = 0; i < MAP_WIDTH; i+=10)
	{
		line(i, 0, i, MAP_HEIGHT);//竖线
		line(0, i, MAP_WIDTH, i);//横线
	}
	//绘制食物
	for (size_t i = 0; i < FOOD_NUM; i++)
	{
		if (!food[i].flag)//跳过不存在的食物
			continue;
		setfillcolor(food[i].color);
		solidcircle(food[i].x, food[i].y, food[i].r);
	}
	//绘制玩家
	setfillcolor(RED);
	solidcircle(player.x, player.y, player.r);
	SetWorkingImage();
	//吧map输出到窗口上
	//putimage(0, 0, &map);
	//void putimage(int dstX, int dstY, const IMAGE *pSrcImg, DWORD dwRop = SRCCOPY);
	putimage(0, 0, WIDTH, HEIGHT, &map, g_camreaPos.x, g_camreaPos.y);
	{
		//以玩家为中心计算摄像机的坐标
		g_camreaPos.x = player.x - WIDTH / 2;
		g_camreaPos.y = player.y - HEIGHT / 2;
		//防止摄像机越界
		if (g_camreaPos.x < 0) g_camreaPos.x = 0;
		if (g_camreaPos.y < 0) g_camreaPos.y = 0;
		if (g_camreaPos.x > MAP_WIDTH-WIDTH) g_camreaPos.x = MAP_WIDTH - WIDTH;
		if (g_camreaPos.y > MAP_HEIGHT-HEIGHT) g_camreaPos.y = MAP_HEIGHT - HEIGHT;


	}
}

//控制玩家移动
void movePlayer(int spead)
{
#if 0
	//手动控制，获取键盘按键
	//_getch()   按下即可触发，不需要按回车  需要包含头文件conio.h
	char Key = _getch();
	//上下左右
	switch (Key)
	{
	case 72:
		player.y -= 2;
		break;
	case 80:
		player.y += 2;
		break;
	case 75:
		player.x -= 2;
		break;
	case 77:
		player.x += 2;
		break;
	}
}
#else
	//getasynckeystate()  获取异步按键状态  这个函数比_getch()更流畅，而且可以支持同时按键
	if (GetAsyncKeyState(VK_UP))
	{
		player.y -= spead;
	}
	if (GetAsyncKeyState(VK_DOWN))
	{
		player.y += spead;
	}
	if (GetAsyncKeyState(VK_LEFT))
	{
		player.x -= spead;
	}
	if (GetAsyncKeyState(VK_RIGHT))
	{
		player.x += spead;
	}
#endif
}
double distanse(struct Ball *b1, struct Ball *b2)
{
	return sqrt(b1->x - b2->x)*(b1->x - b2->x) + (b1->y - b2->y)*(b1->y - b2->y);
}
void PlayerEatFood()
{
	for (size_t i = 0; i < FOOD_NUM; i++)
	{
		if (food[i].flag&&  distanse(&food[i],&player)< player.r)
		{
			food[i].flag = false;
			player.r += food[i].r / 2;
			//食物重新生成
			creatFood(i);
		}
	}
}
int main()
{
	//黑窗口->图形窗口
	initgraph(1024, 640,EW_SHOWCONSOLE);
	gameInit();
	printf("%d %d %d %d", player.x, player.y, player.r, player.flag);
	system("cls");
	//闪屏现象，双缓冲
	BeginBatchDraw();//开始
	while (1)
	{
		gameDraw();
		movePlayer(5);
		PlayerEatFood();
		FlushBatchDraw();//刷新
		//Sleep(50);
	}
	closegraph();
	return 0;
}