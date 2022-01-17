#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//指针函数实现整数转换字符串
char * itoa(char *p, int n);
int main()
{
	int n;
	char s[50], * r;
	printf("input:");
	scanf("%d", &n);
	r = itoa(s, n);
	puts(s);
	puts(r);

	return 0;
}
char * itoa(char *p, int n)
{
	int r, i = 0, j;
	//static char p[50];
	while (n)
	{
		r = n % 10;
		n /= 10;
		p[i] = r + '0';
		i++;
	}
	p[i] = '\0';
	j = i - 1;
	i = 0;
	while (i < j)
	{
		r = p[i];
		p[i] = p[j];
		p[j] = r;
		i++;
		j--;
	}
	return p;
}