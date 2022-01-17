#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//接受一个整型值（无符号），按照顺序打印它的每一位。
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}