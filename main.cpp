#include <stdio.h>
#include <easyx.h>
#include <time.h>
#include <mmsystem.h>
#include <Windows.h>
#include <conio.h>
#pragma comment(lib,"WINMM.LIB")
#define NUM 100
IMAGE img_bk[2];
IMAGE img_meteor[2];
struct Meteor
{
	int x;
	int y;
	int spead;
};
struct Meteor meteor[NUM];
void welcome()
{
	mciSendString(_T("open oh_my_love.mp3 alias bgm"), NULL, 0, NULL);
	mciSendString(_T("play bgm "), NULL, 0, NULL);
	//设置文字样式
	settextstyle(40, 0, _T("华文行楷"));
	setbkmode(TRANSPARENT);
	//按任意键退出循环
	while (_kbhit())
	{
		cleardevice();
		//贴背景图
		putimage(0, 0, img_bk);
		//设置文字颜色
		settextcolor(RGB(rand()%256, rand() % 256, rand() % 256));
		//输出文字
		outtextxy(450, 20, _T("xxx我喜欢你"));
		outtextxy(200, 100, _T(""));
		outtextxy(200, 150, _T(""));
		outtextxy(200, 200, _T(""));
		outtextxy(200, 250, _T(""));
		outtextxy(200, 300, _T(""));
		outtextxy(200, 350, _T(""));
		outtextxy(200, 400, _T(""));
		outtextxy(200, 450, _T("---------------------------------------爱你的"));
		for (size_t i = 0; i < 10; i++)
		{
			settextcolor(RGB(rand() % 256, rand() % 256, rand() % 256));
			outtextxy(rand() % 1200, rand() % 800, _T("♥"));
			outtextxy(rand() % 1200, rand() % 800, _T("❀"));
		}

		Sleep(1000);
	}
}

void initMeteor(int i)
{
	meteor[i].x = rand() % (1200 * 2) - 1200;
	meteor[i].y = rand() % 20 - 200;
	meteor[i].spead = rand() % 15 + 1;
}

void draw()
{
	for (size_t i = 0; i < NUM; i++)
	{
		if (rand() % 2)
			putimage(meteor[i].x, meteor[i].y, img_meteor, SRCPAINT);
		else
			putimage(meteor[i].x, meteor[i].y, img_meteor + 1, SRCPAINT);
	}
}

void move()
{
	for (size_t i = 0; i < NUM; i++)
	{
		meteor[i].x += meteor[i].spead;
		meteor[i].y += meteor[i].spead;
		if (meteor[i].y > getheight() || meteor[i].x > getwidth())
		{
			initMeteor(i);
		}
	}
}

int main()
{
	initgraph(1200, 800,EW_SHOWCONSOLE);
	loadimage(img_bk, _T("welcome.png"),1200,800);
	loadimage(img_bk + 1, _T("bk.png"),1200,800);
	loadimage(img_meteor, _T("1.png"), 50, 50);
	loadimage(img_meteor+1, _T("2.png"), 50, 50);
	welcome();
	for (size_t i = 0; i < NUM; i++)
	{
		initMeteor(i);
	}
	BeginBatchDraw();
	while (true)
	{
		int begin = clock();
		putimage(0, 0, img_bk + 1);
		draw();
		move();
		Sleep(50);
		FlushBatchDraw();
		int timeremaining = clock() - begin;
		int timeframe = 1000.0 / 60;
		int delay = timeframe - timeremaining;
		if (delay > 0)
		{
			printf("%d\n", delay);
			Sleep(delay);
		}
	}
	EndBatchDraw();
	getchar();
	return 0;
}