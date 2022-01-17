#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0;
	int a = 0;
	int sum = 0;
	scanf("%d %d", &n, &a);
	int i = 0;
	int item = 0;
	for (i = 0; i < n; i++)
	{
		item = item * 10 + a;
		sum += item;
	}
	printf("%d\n", sum);
	return 0;
}