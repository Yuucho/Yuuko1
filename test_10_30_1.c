#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����ָ������
void  print(int(*p)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d\n", *(*(p + i) + j));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr, 3, 5);//arr����������ʾ������Ԫ�صĵ�ַ����һ�еĵ�ַ
	return 0;
}

//int arr[5];
//int *parr1[10];  ����ָ�������
//int (*parr2)[10]; ����ָ�룬��ָ���ܹ�ָ��һ�����飬����10��Ԫ�أ�ÿ��Ԫ�ص�������int
//int (*parr3[10])[5]; parr3��һ���洢����ָ������飬�������ܹ����10������ָ�룬ÿ������ָ���ܹ�ָ��һ�����飬����5��Ԫ�أ�ÿ��Ԫ����int����