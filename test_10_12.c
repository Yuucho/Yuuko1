#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[50] = { 0 };
	int i = 0;
	int j = 0;
	int m = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	for (i = 0; i < n; i++)
	{
		if (arr[i] != m)
			arr[j++] = arr[i];
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}