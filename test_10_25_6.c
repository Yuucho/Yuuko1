#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//qsort��ʹ��
int compare(const void *, const void *);
int main()
{
	int s[] = { 89,23,10,8,7,61 }, n, i;
	n = sizeof(s) / sizeof(int);
	qsort(s, n, sizeof(int), compare);//������ʼ��ַ,Ԫ�ظ�����һ��Ԫ�صĴ�С�� �ȽϺ���
	for (i = 0; i < n; i++)
		printf("%d ", s[i]);
	puts("");
	return 0;
}
int compare(const void * p, const void * q)
{
	return (*(int *)p - *(int *)q);
}