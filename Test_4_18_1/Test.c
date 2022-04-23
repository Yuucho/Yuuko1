#include <stdio.h>
void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}


void swap(int* a , int left, int right)
{
	int tmp = a[left];
	a[left] = a[right];
	a[right] = tmp;
}

int partion3(int* a, int left, int right)
{
	int key = a[left];
	int prev = left;
	int cur = prev + 1;
	while(cur <= right)
	{
		if (a[cur] < key && ++prev != cur)
			swap(a, prev, cur);
		cur++;
	}
	swap(a, prev, left);
	return prev;
}
void quicksort(int* array, int begin, int end)
{
	if (begin >= end)
		return;
	int keypos = partion3(array, begin, end);
	quicksort(array, begin, keypos - 1);
	quicksort(array, keypos + 1, end);
}

//61279345108
int main()
{
	int a[] = { 6,1,2,7,9,3,4,5,10,8 };
	quicksort(a, 0, sizeof(a) / sizeof(int) - 1);

	PrintArray(a, sizeof(a) / sizeof(int));
	return 0;
}