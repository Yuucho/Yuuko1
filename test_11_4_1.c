#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//字符串匹配算法 BF
//str：主串
//sub：子串
//返回值：返回子串在主串当中的下标。如果不存在返回-1
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
	if (j >= lenSub)//j走完了子串
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