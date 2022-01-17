#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//不使用任何字符串函数，编程实现字符串连接函数的功能
int main(int argc, char *argv[])
{
	char ch[100] = "welcome";
	char * p = "hello world!", *q;
	int i = 0;
	q = p;
	while (*(ch + i) != '\0')
		i++;
	while (*p != '\0')
	{
		*(ch + i) = *p;
		i++;
		p++;
	}
	*(ch + i) = *p;
	p = q;
	puts(ch);
	puts(p);
	return 0;
}