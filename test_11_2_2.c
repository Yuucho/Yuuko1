#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��д��������������ʱ���������ַ����ĳ��ȡ�
int Strlen(const char*str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + Strlen(str + 1);
}
int main()
{
	char *p = "abcdef";
	int len = Strlen(p);
	printf("%d\n", len);
	return 0;
}