#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//使用void指针遍历一维数组
int main(int argc, char *argv[])
{
	int a[] = { 5,9,1,6,9,10 };
	int i, n;
	void * p;
	p = a;
	n = sizeof(a) / sizeof(int);
	for (i = 0; i < n; i++)
		printf("%d ", *((int *)p + i));
	puts("");
	return 0;
}