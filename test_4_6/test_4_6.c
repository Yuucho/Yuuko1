#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 161;
//	int b = 63;
//	int tmp = 0;
//	while (b != 0)
//	{
//		//不断减一个数，最后得到的就是a/b的余数
//		//此时tmp一定小于b，此时转换为求tmp与b的最大公约数
//		tmp = a % b;
//		//再用较大数不断减较小数，b%tmp
//		a = b;
//		b = tmp;//b最后为0
//	}
//	//此时a就是a和b的最大公约数
//	printf("%d ", a);
//	return 0;
//}
#include <math.h>
//int main()
//{
//	int count = 0;
//	for (int y = 101; y <= 200; y += 2)
//	{
//		int flag = 1;
//		for (int i = 2; i <= sqrt(y); i++)
//		{
//			if (y % i == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", y);
//			++count;
//		}
//	}
//	printf("\n");
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	double sum = 0.0;
//	int flag = 1;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum = sum + (flag) * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 9; ++i)
//	{
//		for (int j = 1; j <= i; ++j)
//		{
//			printf("%d*%d=%2d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int Bsearch(int* a, int n, int x)
//{
//	int begin = 0;
//	int end = n-1;
//
//	while (begin < end)
//	{
//		int ret = 0;
//		int mid = begin + ((end - begin) >> 1);
//		if (a[mid] < x)
//		{
//			begin = mid + 1;
//		}
//		else if (a[mid] > x)
//		{
//			end = mid;
//		}
//		else
//		{
//			return  mid;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int ret = Bsearch(arr, 10, 7);
//	printf("%d\n", ret);
//	return 0;
//}

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}

//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//
//int main()
//{
//	int ret = fac(5);
//	printf("%d", ret);
//}

//void revers_string(char* str)
//{
//	if (*str == '\0')
//		return;
//	revers_string(str + 1);
//	printf("%c", *str);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	revers_string(arr);
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 1729;
//	int ret = DigitSum(n);
//	printf("%d", ret);
//}

long long Fac(int N)
{
	if (N < 3)
		return 1;

	return Fac(N - 1) + Fac(N - 2);
}

int main()
{
	int ret = Fac(5);
	printf("%d", ret);
	return 0;
}