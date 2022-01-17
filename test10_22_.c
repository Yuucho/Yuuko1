#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(int argc, int *argv[])
{
	int a[3][2] = { {1, 6}, {9, 12}, {61, 12} };
	int (*p)[2], i, j;
	p = a;
	printf("%p %p\n", p, p + 1);
	printf("%p %p\n", a, a + 1);
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
		printf("%d %d %d %d ", a[i][j], p[i][j], *(*(p+1) + j), *(*(a + 1) + j));
	puts("");
	return 0;
}