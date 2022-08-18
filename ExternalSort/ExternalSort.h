#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void Swap(int* pa, int* pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		int end = i;
		// 单趟排序：[0, end]有序 end+1位置的值，插入进入，保持他依旧有序
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}

int GetMidIndex(int* a, int left, int right)
{
	//int mid = (left + right) / 2;
	int mid = left + (right - left) / 2;
	// left mid right
	if (a[left] < a[mid])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		else if (a[left] > a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
	else // a[left] > a[mid]
	{
		if (a[mid] > a[right])
		{
			return mid;
		}
		else if (a[left] < a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
}

// 前后指针法
int PartSort(int* a, int left, int right)
{
	//int midi = GetMidIndex(a, left, right);
	//Swap(&a[midi], &a[left]);

	int keyi = left;
	int prev = left, cur = left + 1;
	while (cur <= right)
	{
		if (a[cur] < a[keyi] && a[++prev] != a[cur])
			Swap(&a[prev], &a[cur]);

		++cur;
	}
	Swap(&a[prev], &a[keyi]);

	return prev;
}

void QuickSort(int* a, int begin, int end)
{
	// 子区间相等只有一个值或者不存在那么就是递归结束的子问题
	if (begin >= end)
		return;

	// 小区间直接插入排序控制有序
	if (end - begin + 1 <= 10)
	{
		InsertSort(a + begin, end - begin + 1);
	}
	else
	{
		int keyi = PartSort(a, begin, end);
		// [begin, keyi-1]keyi[keyi+1, end]
		QuickSort(a, begin, keyi - 1);
		QuickSort(a, keyi + 1, end);
	}
}