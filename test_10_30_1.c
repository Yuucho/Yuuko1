#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//数组指针的理解
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
	print(arr, 3, 5);//arr数组名，表示数组首元素的地址即第一行的地址
	return 0;
}

//int arr[5];
//int *parr1[10];  整型指针的数组
//int (*parr2)[10]; 数组指针，该指针能够指向一个数组，数组10个元素，每个元素的类型是int
//int (*parr3[10])[5]; parr3是一个存储数组指针的数组，该数组能够存放10个数组指针，每个数组指针能够指向一个数组，数组5个元素，每个元素是int类型