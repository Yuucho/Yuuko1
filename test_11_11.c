#define _CRT_SECURE_NO_WARNINGS 1
//�жϴ�С���ֽ���
//��ǰ��д��
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

//�����������жϴ�С���ֽ���
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
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}