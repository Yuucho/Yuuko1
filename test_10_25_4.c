#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ì³²¨ÄÇÆõÊýÁÐ
int fib(int n);
int main()
{
	int n = 1;
	while (n <= 10)
	{
		printf("%d ", fib(n));
		n++;
	}
	printf("\n");
	return 0;
}
int fib(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return fib(n - 1) + fib(n - 2);
}