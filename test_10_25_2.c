#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
char * mstrcat(char * dest, const char * src);
//ָ�뺯��ʵ���ַ������ӵĹ���
int main()
{
	char dest[50] = "welcome";
	char src[] = "makeru";
	puts(mstrcat(dest, src));
	puts(dest);
	return 0;
}
char * mstrcat(char * dest, const char * src)
{
	char * r = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return r;
}