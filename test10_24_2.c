#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//��ӡ100����200������
//�Ż�����Գ���
int prime(int i)
{
	int j = 0;
	for (j = 2; j <= sqrt(i); j++)
	{
		if (i%j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 101; i <= 200; i+=2)
	{
		if (prime(i))
			printf("%d ", i);
	}
	return 0;
}