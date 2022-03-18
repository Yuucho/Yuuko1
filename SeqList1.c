#include "SeqList1.h"
void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
void SeqListPrint(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void SeqListDestroy(SL* ps)
{
	free(ps->a);
	ps ->a = NULL;
	ps->size = ps -> capacity = 0;
}
void SeqListCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		//我们把capacity初始化为0，直接写成newcapacity=ps->capacity*2就出bug了哦
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity = newcapacity;
		}
	}
}
void SeqListPushBack(SL* ps, SLDataType x)
{
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPopBack(SL* ps)
{
	assert(ps->size > 0);
	ps->size--;
}
void SeqListPushFront(SL* ps, SLDataType x)
{
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPopFront(SL* ps)
{
	assert(ps);
	if (ps->size > 0)
	{
		int start = 1;
		while (start < ps->size)
		{
			ps->a[start - 1] = ps->a[start];
			start++;
		}
		ps->size--;
	}
}
// 在pos位置插入x
void SeqListInsert(SL* ps, size_t pos, SLDataType x)
{
	assert(ps);
	if ((int)pos > ps->size)
	{
		printf("pos 越界:%d\n", pos);
		return;
	}
	SeqListCheckCapacity(ps);
	size_t end = ps->size;
	while (end > pos)
	{
		ps->a[end] = ps->a[end - 1];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}
// 删除pos位置的数据
void SeqListErase(SL* ps, size_t pos)
{
	assert((int)pos < ps->size);
	int start = pos + 1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		start++;
	}
	ps->size--;
}
// 顺序表查找
int SeqListFind(SL* ps, SLDataType x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
//顺序表改
void SeqListModify(SL* ps, size_t pos, SLDataType x)
{
	assert((int)pos < ps->size);
	ps->a[pos] = x;
}
