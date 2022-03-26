#include "Stack1.h"
void StackInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

void StackDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}

void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	//À©ÈÝ
	if (ps->top == ps->capacity)
	{
		STDataType newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		ps->a = (STDataType*)realloc(ps->a, newCapacity * sizeof(STDataType));
		if (ps->a == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->capacity = newCapacity;
	}
	ps->a[ps->top] = x;
	ps->top++;
}

void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}

bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}

STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}