#define _CRT_SECURE_NO_WARNINGS 1
//序列删除指定数字
#include <stdio.h>
int main()
{
	int arr[50] = { 0 };
	int n = 0;
	int del = 0;
	int j = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &del);
	for (i = 0; i < n; i++)
	{
		if (arr[i] != del)
		{
			arr[j++] = arr[i];
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}