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
//��ɾ��ĵȽӿں���
// ʱ�临�Ӷ���O(1) β�壬βɾ
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);

// ʱ�临�Ӷ���O(N)
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);

// ��posλ�ò���x
void SeqListInsert(SL* ps, size_t pos, SLDataType x);
// ɾ��posλ�õ�����
void SeqListErase(SL* ps, size_t pos);

// ˳������
int SeqListFind(SL* ps, SLDataType x);

//˳����
void SeqListModify(SL* ps, size_t pos, SLDataType x);