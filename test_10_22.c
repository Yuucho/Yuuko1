#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(int argc, char *argv[])
{
	int a[] = { 1, 6, 9, 12, 61, 12, 21 };
	int *p, *q, n, t;
	n = sizeof(a) / sizeof(int);
	p = a;
	q = &a[n - 1];
	while (p < q)
	{
		t = *p;
		*p = *q;
		*q = t;
		p++;
		q--;
	}
	for (t = 0; t < n; t++)
		printf("%d ", a[t]);
	puts("");
	return 0;
}