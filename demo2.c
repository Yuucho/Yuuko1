#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ָ������
int main(int argc, char *argv[])
{
	int a[] = { 3, 6, 9 };
	int * p[2] = { &a[0], &a[1] };
	int * * q;
	q = &p[0];
	q = p;
	printf("%d %d\n", a[0], a[1]);
	printf("%d %d\n", *p[0], *p[1]);
	printf("%d %d %d\n", a[0], *p[1], **q);
	printf("%d %d %d\n", a[1], *p[1], **(q+1));
	return 0;
}