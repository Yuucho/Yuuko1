#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
typedef int STDataType;
typedef struct Stack
{
	STDataType *a;
	int Top;
	int capacity;
}ST;

void StackInit(ST*ps);
void StackDestroy(ST*ps);
//��ջ
void StackPush(ST*ps, STDataType x);
//��ջ
void StackPop(ST*ps);
STDataType StackTop(ST *ps);
int StackSize(ST *ps);
bool StackEmpty(ST *ps);