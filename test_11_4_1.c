#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//�ַ���ƥ���㷨 BF
//str������
//sub���Ӵ�
//����ֵ�������Ӵ����������е��±ꡣ��������ڷ���-1
int BF(char*str, char*sub)
{
	assert(str&&sub);
	if (str == NULL || sub == NULL)
	{
		return -1;
	}
	int lenStr = strlen(str);
	int lenSub = strlen(sub);
	int i = 0;
	int j = 0;
	while (i < lenStr&&j < lenSub)
	{
		if (str[i] == sub[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	if (j >= lenSub)//j�������Ӵ�
	{
		return i - j;
	}
	else
	{
		return -1;
	}
}
int main()
{
	printf("%d\n", BF("ababcabcdabcde", "abcd"));
	printf("%d\n", BF("ababcabcdabcde", "bcde"));
	printf("%d\n", BF("ababcabcdabcde", "abca"));
	return 0;
}