#pragma once
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;
	int size;
	int capacity;
}SL;
void SeqListInit(SL* ps);
void SeqListPrint(SL* ps);
void SeqListDestroy(SL* ps);
void SeqListCheckCapacity(SL* ps);
//增删查改等接口函数
// 时间复杂度是O(1) 尾插，尾删
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);

// 时间复杂度是O(N)
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);

// 在pos位置插入x
void SeqListInsert(SL* ps, size_t pos, SLDataType x);
// 删除pos位置的数据
void SeqListErase(SL* ps, size_t pos);

// 顺序表查找
int SeqListFind(SL* ps, SLDataType x);

//顺序表改
void SeqListModify(SL* ps, size_t pos, SLDataType x);