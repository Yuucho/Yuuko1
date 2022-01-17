#define _CRT_SECURE_NO_WARNINGS 1
//理解指针函数
#include <stdio.h>
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int main()
{
	int m = 18, n = 20;
	int(*p[20])(int, int);//int * p[3];
	p[0] = add;
	//printf("%d\n", add(m,n));
	printf("%d\n", (*p[0])(m, n));
	p[1] = sub;
	printf("%d\n", (*p[1])(m, n));
	return 0;
}