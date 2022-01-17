#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//∂‡º∂÷∏’Î
int main(int argc, char *argv[])
{
	int m = 10;
	int * p;
	int * * q;
	p = &m;
	q = &p;
	printf("%p %p\n", p, &m);
	printf("%p %p\n", q, &p);
	printf("%p %p %d\n", m, *p, **q);
	return 0;
}