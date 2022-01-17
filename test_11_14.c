#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int tmp = 0;
	
	scanf("%d %d", &n, &m);
	int a = n;
	int b = m;
	while (tmp = n % m)
	{
		n = m;
		m = tmp;
	}
	printf("%d\n", m);//最大公约数
	//最小公倍数=m*n/最大公约数
	printf("%d\n", a*b / m);
}