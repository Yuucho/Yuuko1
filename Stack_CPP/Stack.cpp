#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"
void StackInit(ST*ps)
{
	ps->a = (STDataType*)malloc(sizeof(STDataType)*4);
	if (ps->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	ps->capacity = 4;
	ps->Top = 0;
}

void StackDestroy(ST*ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->Top = ps->capacity = 0;
}

//入栈
void StackPush(ST*ps, STDataType x)
{
	assert(ps);
	if (ps->Top == ps->capacity)
	{
		STDataType *tmp = (STDataType*)realloc(ps->a, ps->capacity * 2 * sizeof(STDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity *= 2;
		}
	}
	ps->a[ps->Top] = x;
	ps->Top++;
}

//出栈
void StackPop(ST*ps)
{
	assert(ps);
	//栈空了，条用pop直接报错
	assert(ps->Top > 0);
	ps->Top--;
}

//返回栈顶元素
STDataType StackTop(ST *ps)
{
	assert(ps);
	assert(ps->Top > 0);
	return ps->a[ps->Top - 1];
}

int StackSize(ST *ps)
{
	assert(ps);
	return ps->Top;
}

bool StackEmpty(ST *ps)
{
	assert(ps);
	return ps->Top == 0;
}

