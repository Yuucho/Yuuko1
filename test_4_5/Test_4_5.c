#include "Heap.h"
void TestHeap()
{
	HP hp;
	HeapInit(&hp);
	HeapPush(&hp, 1);
	HeapPush(&hp, 5);
	HeapPush(&hp, 0);
	HeapPush(&hp, 8);
	HeapPush(&hp, 3);
	HeapPush(&hp, 9);
	HeapPrint(&hp);

	HeapPop(&hp);
	HeapPrint(&hp);

	HeapDestroy(&hp);
}

// 升序 O(N*logN)   1000*10    100w*20
//      O(N*N)      1000*1000  100w*100w
// O(N)空间复杂度，还需要再优化--下节课再来讲解
void HeapSort(int* a, int size)
{
	HP hp;
	HeapInit(&hp);
	for (int i = 0; i < size; ++i)
	{
		HeapPush(&hp, a[i]);
	}

	size_t j = 0;
	while (!HeapEmpty(&hp))
	{
		a[j] = HeapTop(&hp);
		j++;
		HeapPop(&hp);
	}

	HeapDestroy(&hp);
}

int main()
{
	//TestHeap();
	int a[] = { 4, 2, 7, 8, 5, 1, 0, 6 };
	HeapSort(a, sizeof(a) / sizeof(int));

	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}