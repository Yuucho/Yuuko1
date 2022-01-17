#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void move(int *arr, int sz)
{
	int *left = arr;
	int *right = arr + sz - 1;
	while (left < right)
	{
		while ((*left) % 2 != 0 && (left < right))
		{
			left++;
		}
		while ((*right) % 2 == 0 && (left < right))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = *left;
			*left = *right;
			*right = tmp;
		}
	}
}

int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}