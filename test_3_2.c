#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>
#include <string.h>

//int main()
//{
//	FILE * pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//	ch = fgetc(pf);
//	printf("%c\n", ch);//b
//	
//	//定位文件指针
//	fseek(pf, 3, SEEK_CUR);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//f
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//	ch = fgetc(pf);
//	printf("%c\n", ch);//b
//
//	//定位文件指针
//	//fseek(pf, 3, SEEK_CUR);
//	//fseek(pf, 5, SEEK_SET);
//	fseek(pf, -1, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//f
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	int ch = 0;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//
//	//定位文件指针
//	
//	fseek(pf, -2, SEEK_END);
//	fputc('#', pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//	ch = fgetc(pf);
//	printf("%c\n", ch);//b
//	
//	int ret = ftell(pf);
//	printf("%d\n", ret);//2
//
//	rewind(pf);
//	//fseek(pf, 0, SEEK_SET);
//
//	ret = ftell(pf);
//	printf("%d\n", ret);//0
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//0000 0000 0000 0000 0010 0111 0001 0000
//0    0    0    0    2    7    1    0
// 0x 00 00 27 10
//小端描述：10 27 00 00 
//


#include <stdio.h>
#include <windows.h>
//VS2013 WIN10环境测试
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//先将代码放在输出缓冲区
	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
	Sleep(10000);
	printf("刷新缓冲区\n");
	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
	//注：fflush 在高版本的VS上不能使用了
	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
	Sleep(10000);
	fclose(pf);
	//注：fclose在关闭文件的时候，也会刷新缓冲区
	pf = NULL;
	return 0;
}


//#include <stdio.h>
//
//int main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//		Sleep(1000);
//	}
//	return 0;
//}