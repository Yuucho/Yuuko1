#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//指针遍历二维数组
int main(int argc, int *argv[])
{
	int a[3][2] = { {1, 6}, {9, 12}, {61, 12} };
	int * p, i, n;
	n = sizeof(a) / sizeof(int);
	p = &a[0][0];
	printf("%p %p\n", p, p + 1);
	printf("%p %p\n", a, a + 1);
	for (i = 0; i < n; i++)
		printf("%d ", *(p + i));
	puts("");
	return 0;
}