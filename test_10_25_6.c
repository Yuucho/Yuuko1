#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//qsort的使用
int compare(const void *, const void *);
int main()
{
	int s[] = { 89,23,10,8,7,61 }, n, i;
	n = sizeof(s) / sizeof(int);
	qsort(s, n, sizeof(int), compare);//数组起始地址,元素个数，一个元素的大小， 比较函数
	for (i = 0; i < n; i++)
		printf("%d ", s[i]);
	puts("");
	return 0;
}
int compare(const void * p, const void * q)
{
	return (*(int *)p - *(int *)q);
}