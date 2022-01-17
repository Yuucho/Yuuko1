//�������ս

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
//��ͼ ͼƬ
IMAGE map(MAP_WIDTH, MAP_HEIGHT);
//���������
POINT g_camreaPos;
struct Ball
{
	int x;
	int y;
	int r;
	bool flag;//�Ƿ���
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

	//���������
	srand((unsigned)time(NULL));
	//��ʼ�����
	player.x = rand()%MAP_WIDTH;
	player.y = rand()%MAP_HEIGHT;
	player.r = 10;
	player.flag = true;
	//��ʼ��ʳ��
	for (size_t i = 0; i <FOOD_NUM; i++)
	{
		creatFood(i);
	}
}

void gameDraw()
{
	//���û��Ƶ��豸��ͼƬ������Ҳ��һ��ͼƬ
	SetWorkingImage(&map);
	//���ñ�����ɫ
	setbkcolor(WHITE);
	cleardevice();
	//������
	setlinecolor(RGB(230, 231, 239));
	for (size_t i = 0; i < MAP_WIDTH; i+=10)
	{
		line(i, 0, i, MAP_HEIGHT);//����
		line(0, i, MAP_WIDTH, i);//����
	}
	//����ʳ��
	for (size_t i = 0; i < FOOD_NUM; i++)
	{
		if (!food[i].flag)//���������ڵ�ʳ��
			continue;
		setfillcolor(food[i].color);
		solidcircle(food[i].x, food[i].y, food[i].r);
	}
	//�������
	setfillcolor(RED);
	solidcircle(player.x, player.y, player.r);
	SetWorkingImage();
	//��map�����������
	//putimage(0, 0, &map);
	//void putimage(int dstX, int dstY, const IMAGE *pSrcImg, DWORD dwRop = SRCCOPY);
	putimage(0, 0, WIDTH, HEIGHT, &map, g_camreaPos.x, g_camreaPos.y);
	{
		//�����Ϊ���ļ��������������
		g_camreaPos.x = player.x - WIDTH / 2;
		g_camreaPos.y = player.y - HEIGHT / 2;
		//��ֹ�����Խ��
		if (g_camreaPos.x < 0) g_camreaPos.x = 0;
		if (g_camreaPos.y < 0) g_camreaPos.y = 0;
		if (g_camreaPos.x > MAP_WIDTH-WIDTH) g_camreaPos.x = MAP_WIDTH - WIDTH;
		if (g_camreaPos.y > MAP_HEIGHT-HEIGHT) g_camreaPos.y = MAP_HEIGHT - HEIGHT;


	}
}

//��������ƶ�
void movePlayer(int spead)
{
#if 0
	//�ֶ����ƣ���ȡ���̰���
	//_getch()   ���¼��ɴ���������Ҫ���س�  ��Ҫ����ͷ�ļ�conio.h
	char Key = _getch();
	//��������
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
	//getasynckeystate()  ��ȡ�첽����״̬  ���������_getch()�����������ҿ���֧��ͬʱ����
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
			//ʳ����������
			creatFood(i);
		}
	}
}
int main()
{
	//�ڴ���->ͼ�δ���
	initgraph(1024, 640,EW_SHOWCONSOLE);
	gameInit();
	printf("%d %d %d %d", player.x, player.y, player.r, player.flag);
	system("cls");
	//��������˫����
	BeginBatchDraw();//��ʼ
	while (1)
	{
		gameDraw();
		movePlayer(5);
		PlayerEatFood();
		FlushBatchDraw();//ˢ��
		//Sleep(50);
	}
	closegraph();
	return 0;
}