#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//����ָ�뺯��ɾ���ַ����еĿո�
char * del_space(char * s);
int main()
{
	char * r;
	char str[] = "    how    are    you";
	r = del_space(str);
	printf("---%s---\n", r);
	puts(str);
	return 0;
}
char * del_space(char * s)
{
	char * r = s;
	char * p = s;
	while (*s)
	{
		if (*s == " ")
			s++;
		else
		{
			*p = *s;
			s++;
			p++;
		}
	}
	*p = '\0';
	return r;
}