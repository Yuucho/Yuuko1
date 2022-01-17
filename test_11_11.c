#define _CRT_SECURE_NO_WARNINGS 1
//判断大小端字节序
//以前的写法
#include <stdio.h>
//int check_sys()
//{
//	int a = 1;
//	if (*((char *)&a) == 1)
//	{
//		return 1;
//	}
//	return 0;
//}

//利用联合体判断大小端字节序
int check_sys()
{
	union un
	{
		int i;
		char c;
	}un;
	un.i = 1;
	return un.c;
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}