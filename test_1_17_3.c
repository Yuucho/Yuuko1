#include<stdio.h>
#include<string.h>
#include<Windows.h>
#pragma warning(disable:4996)
void left_move(char* str, int k)//����str�ַ���
{
	while (k != 0)
	{
		char* cur = str;
		char tmp = *cur;
		while ((*(cur + 1)) != '\0')
		{
			*cur = *(cur + 1);
			cur++;
		}
		*(cur) = tmp;
		k--;
	}
}
int Judge_string(char* str, const char* p)//�жϺ���
{
	int i;
	if (strlen(str) != strlen(p))
	{
		return 0;
	}
	for (i = 1; i <= strlen(str); i++)
	{
		left_move(str, 1);
		if (strcmp(str, p) == 0)//strcmp�����ж�str�ַ����Ƿ���p�ַ�����ͬ		
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char str1[] = "abcd";
	char str2[] = "cdab";
	printf("%d\n", Judge_string(str1, str2));
	system("pause");
	return 0;
}