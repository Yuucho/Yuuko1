#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <time.h>
void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void _MergeSort(int* a, int left, int right, int* tmp)
{
	if (left >= right)
		return;

	int mid = left + ((right - left) >> 1);

	// [left, mid]
	// [mid+1, right]
	_MergeSort(a, left, mid, tmp);
	_MergeSort(a, mid + 1, right, tmp);

	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int index = left;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] <= a[begin2])
			tmp[index++] = a[begin1++];
		else
			tmp[index++] = a[begin2++];
	}

	while (begin1 <= end1)
	{
		tmp[index++] = a[begin1++];
	}

	while (begin2 <= end2)
	{
		tmp[index++] = a[begin2++];
	}

	memcpy(a + left, tmp + left, sizeof(int) * (right - left + 1));
}


void MergeSort(int* a, int n)
{
	assert(a);
	int* tmp = (int*)malloc(sizeof(int) * n);
	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
}

/*
非递归排序与递归排序相反，将一个元素与相邻元素构成有序数组，
再与旁边数组构成有序数组，直至整个数组有序。
要有mid指针传入，因为不足一组数据时，重新计算mid划分会有问题
需要指定mid的位置
*/
void merge(int* a, int left, int mid, int right, int* tmp)
{
	// [left, mid]
	// [mid+1, right]
	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int index = left;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] <= a[begin2])
			tmp[index++] = a[begin1++];
		else
			tmp[index++] = a[begin2++];
	}

	while (begin1 <= end1)
	{
		tmp[index++] = a[begin1++];
	}

	while (begin2 <= end2)
	{
		tmp[index++] = a[begin2++];
	}

	memcpy(a + left, tmp + left, sizeof(int) * (right - left + 1));
}

/*
k用来表示每次k个元素归并
*/
void mergePass(int* arr, int k, int n, int* temp)
{
	int i = 0;
	//从前往后,将2个长度为k的子序列合并为1个
	while (i < n - 2 * k + 1)
	{
		merge(arr, i, i + k - 1, i + 2 * k - 1, temp);
		i += 2 * k;
	}
	//合并区间[i, n - 1]有序的左半部分[i, i + k - 1]以及不及一个步长的右半部分[i + k, n - 1]
	if (i < n - k)
	{
		merge(arr, i, i + k - 1, n - 1, temp);
	}

}

// 归并排序非递归版
void MergeSortNonR(int* arr, int length)
{
	int k = 1;
	int* temp = (int*)malloc(sizeof(int) * length);
	while (k < length)
	{
		mergePass(arr, k, length, temp);
		k *= 2;
	}
	free(temp);
}

void TestMergeSort()
{
	int a[] = { 3, 4, 6, 1, 2, 8, 0, 5, 7 };
	MergeSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}

// O(Max(N, 范围))
// O(N+范围) 时间复杂度
// O(范围) 空间复杂度
void CountSort(int* a, int n)
{
	int max = a[0], min = a[0];
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > max)
			max = a[i];

		if (a[i] < min)
			min = a[i];
	}
	//找到数据的范围
	int range = max - min + 1;
	int* countArray = (int*)malloc(range * sizeof(int));
	memset(countArray, 0, sizeof(int) * range);
	//存放在相对位置，可以节省空间
	for (int i = 0; i < n; ++i)
	{
		countArray[a[i] - min]++;
	}
	//可能存在重复的数据，有几个存几个
	int index = 0;
	for (int i = 0; i < range; ++i)
	{
		while (countArray[i]--)
		{
			a[index++] = i + min;
		}
	}
}

void TestCountSort()
{
	int a[] = { 3, 4, 6, 2, 8, 5, 2, 2, 9, 9, 1000000, 99999 };
	CountSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}


void TestMergeSortNonR()
{
	int a[] = { 3, 4, 6, 2, 8, 5, 2, 2, 9, 9, 1000000, 99999 };
	MergeSortNonR(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}

void TestSortOP()
{
	const int n = 1000000;
	int* a1 = (int*)malloc(sizeof(int) * n);
	int* a2 = (int*)malloc(sizeof(int) * n);
	int* a3 = (int*)malloc(sizeof(int) * n);
	srand(time(0));
	for (int i = 0; i < n; ++i)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a1[i];
	}

	size_t begin1 = clock();
	TestMergeSort(a1, n);
	size_t end1 = clock();
	printf("%u\n", end1 - begin1);

	size_t begin2 = clock();
	TestMergeSortNonR(a2, n);
	size_t end2 = clock();
	printf("%u\n", end2 - begin2);

	size_t begin3 = clock();
	TestCountSort(a3, n);
	size_t end3 = clock();
	printf("%u\n", end3 - begin3);
}

int main()
{
	TestSortOP();
	return 0;
}