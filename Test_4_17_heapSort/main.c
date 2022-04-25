#include <stdio.h>

void Swap(int* pa, int* pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

//�����ֱ������飬�����С�����ڵ�λ��
void AdjustDown(int* a, size_t size, size_t root)
{
	size_t parent = root;
	size_t child = parent * 2 + 1;
	while (child < size)
	{
		// 1��ѡ�����Һ�����С���Ǹ�
		if (child + 1 < size && a[child + 1] < a[child])
		{
			++child;
		}

		// 2���������С�ڸ��ף��򽻻������������µ���
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
	//���µ������ѣ��ӵ����ĵ�һ����Ҷ�ӽ�㣨���һ���ڵ�ĸ��ף���ʼ����
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