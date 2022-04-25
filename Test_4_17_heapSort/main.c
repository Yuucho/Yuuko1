#include <stdio.h>

void Swap(int* pa, int* pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

//参数分别是数组，数组大小，根节点位置
void AdjustDown(int* a, size_t size, size_t root)
{
	size_t parent = root;
	size_t child = parent * 2 + 1;
	while (child < size)
	{
		// 1、选出左右孩子中小的那个
		if (child + 1 < size && a[child + 1] < a[child])
		{
			++child;
		}

		// 2、如果孩子小于父亲，则交换，并继续往下调整
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapSort(int* a, int n)
{
	//向下调整建堆，从倒数的第一个非叶子结点（最后一个节点的父亲）开始调整
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(a, n, i);
	}
	size_t end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		--end;
	}
}

int main()
{
	int arr[] = { 1,4,9,1,4,1,5,5,0,8,7,6,1,3,2 };
	int size = sizeof(arr) / sizeof(arr[0]);
	HeapSort(arr, size);
	for(int i = 0; i < size; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}