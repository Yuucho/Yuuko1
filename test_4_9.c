//#include <stdio.h>
//void BubbleSort(int* a, int size)
//{
//	for (int i = 0; i < size - 1; ++i)
//	{
//		int exchange = 0;
//		for (int j = 1; j < size - i; ++j)
//		{
//			if (a[j - 1] > a[j])
//			{
//				int temp = a[j - 1];
//				a[j - 1] = a[j];
//				a[j] = temp;
//				exchange = 1;
//			}
//		}
//		if (exchange == 0)
//			break;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,5,7,6,4,3,2,0,1 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, size);
//	for (int i = 0; i < size; ++i)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
// return 0;
//}

//#include <stdio.h>
//void Init(int* a, int sz, int x)
//{
//	for (int i = 0; i < sz; ++i)
//	{
//		a[i] = x;
//	}
//}
//
//void Print(int* a, int sz)
//{
//	for (int i = 0; i < sz; ++i)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int* a, int sz)
//{
//	int head = 0;
//	int rear = sz - 1;
//	while (head < rear)
//	{
//		int tmp = a[head];
//		a[head] = a[rear];
//		a[rear] = tmp;
//		++head;
//		--rear;
//	}
//}
//int main()
//{
//	int arr1[10] = { 9,9,9,9,9,9,9,9,9,9 };
//	int size1 = sizeof(arr1) / sizeof(arr1[0]);
//	Init(arr1, size1,0);
//	Print(arr1, size1);
//	int arr2[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int size2 = sizeof(arr2) / sizeof(arr2[0]);
//
//	Reverse(arr2, size2);
//	Print(arr2, size2);
//	return 0;
//}
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//void Print(int* a, int sz)
//{
//	for (int i = 0; i < sz; ++i)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	int i = 0;
//
//
//	printf("请输入10个数字:>");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	printf("请输入10个数字:>");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	Print(arr1, 10);
//	Print(arr2, 10);
//	//交换
//	for (i = 0; i < 10; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	Print(arr1, 10);
//	Print(arr2, 10);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//void Printbit(int num)
//{
//	//统计偶数位
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	//统计奇数位
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	Printbit(8);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 10;
//    int b = 20;
//    printf("交换前:a = %d b = %d\n", a, b);
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//    printf("交换后:a = %d b = %d\n", a, b);
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//
//
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int line = 0;
	int i = 0;
	scanf("%d", &line);//7
	//打印上半部分
	for (i = 0; i < line; i++)
	{
		//打印一行
		//打印空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	//打印下半部分
	for (i = 0; i < line - 1; i++)
	{
		//打印一行
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//判断i是否为水仙花数
//		//1. 求判断数字的位数
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. 计算每一位的次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. 判断
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}