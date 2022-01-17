#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void yanghuisanjiao(int n)
{
	int data[30] = { 1 };
	printf("1\n");
	int i, j;
	for (i = 1; i < n; i++)
	{
		for (j = i; j > 0; j--)
		{
			data[j] += data[j - 1];
		}
		for (j = 0; j <= i; j++)
		{
			printf("%d ", data[j]);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	yanghuisanjiao(n);
	return 0;
}