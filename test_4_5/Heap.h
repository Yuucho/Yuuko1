#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef int HPDataType;

typedef struct Heap
{
	HPDataType* a;
	size_t size;
	size_t capacity;
}HP;

void Swap(HPDataType* pa, HPDataType* pb);
void HeapInit(HP* php);
void HeapDestroy(HP* php);
void HeapPrint(HP* php);

// 插入x以后，保持他依旧是(大/小)堆
void HeapPush(HP* php, HPDataType x);

// 删除堆顶的数据。(最小/最大)
void HeapPop(HP* php);
bool HeapEmpty(HP* php);
size_t HeapSize(HP* php);
HPDataType HeapTop(HP* php);