#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//ָ�뺯��
//����ֵ��1.ȫ�ֱ����ĵ�ַ 2.static�����ĵ�ַ  3.�ַ��������ĵ�ַ 4.�ѵĵ�ַ

char * getstring();
int main()
{
	printf("%s\n", getstring());
	return 0;
}
char * getstring()
{
	static char str[20];//staticʹ�������������䳤
	//char * str = "hello" �������д��12,14��Ҫɾȥ
	strcpy(str, "hello");
	return str;
}