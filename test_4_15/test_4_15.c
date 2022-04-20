#include "test_4_15.h"

void SeqListInit(SeqList* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListDestory(SeqList* ps)
{
	free(ps->a);
	ps->size = ps->capacity = 0;
}

void SeqListPrint(SeqList* ps)
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListCheckCapacity(SeqList* ps)
{
	if (ps->size == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDateType* tmp = (SLDateType*)realloc(ps->a, newCapacity * sizeof(SLDateType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newCapacity;
	}
}

void SeqListPushBack(SeqList* ps, SLDateType x)
{
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	++ps->size;
}

void SeqListPushFront(SeqList* ps, SLDateType x)
{
	SeqListCheckCapacity(ps);
	int end = ps->size;
	while (end > 0)
	{
		ps->a[end] = ps->a[end - 1];
		end--;
	}
	ps->a[0] = x;
	++ps->size;
}

void SeqListPopFront(SeqList* ps)
{
	int start = 1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		start++;
	}
	--ps->size;
}

void SeqListPopBack(SeqList* ps)
{
	assert(ps->size > 0);
	--ps->size;
}

// 顺序表查找
int SeqListFind(SeqList* ps, SLDateType x)
{
	for (int i = 0; i < ps->size; ++i)
	{
		if (ps->a[i] == x)
			return i;
	}
	return -1;
}

// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x)
{
	SeqListCheckCapacity(ps);
	assert(pos < ps->size);
	int end = ps->size;
	while (end > pos)
	{
		ps->a[end] = ps->a[end - 1];
		--end;
	}
	ps->a[pos] = x;
	++ps->size;
}

// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, size_t pos)
{
	int start = pos + 1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		++start;
	}
	--ps->size;
}