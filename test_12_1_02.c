#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//С����ǰ����n�ˣ�����һ����12�ˣ�����һ��4���ӣ�С���ֶ��Ƿ��Ӻ���¥
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", n / 12 * 4 + 2);
	return 0;
}