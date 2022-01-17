#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//写代码判断当前机器的字节序
//大端字节序：把数据的低位字节序的内容存放在高地址处，高位字节序的内容存放在低地址处
//小端字节序：把数据的低位字节序的内容存放在低地址处，高位字节序的内容存放在高地址处



//int main()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	return *p;//返回1是小端，返回0是大端
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	if (ret == 0)
	{
		printf("大端\n");
	}
	return 0;
}