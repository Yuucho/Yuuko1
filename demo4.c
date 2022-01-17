#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void÷∏’Î
int main(int argc, char *argv[])
{
	int m = 10;
	double n = 3.14;
	void * p, *q;
	p = &m;//(void *)&m;
	printf("%d %d\n", m, *(int *)p);
	q = &n;//(void *)&n;
	printf("%.2lf %.2lf\n", n, *(double *)q);
	return 0;
}