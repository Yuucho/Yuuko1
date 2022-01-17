#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//#define MAX 10
typedef int SQDataType;
typedef struct SeqList
{
	SQDataType *a;
	int size;
	int capacity;
}SL;

//��ɾ��ĵȽӿں���
void SeqListInit(SL*ps);

void SeqListPrint(SL*ps);
void SeqListDestory(SL*ps);
// ͷ�� β�� ͷɾ βɾ
void SeqListPushBack(SL*ps);
void SeqListPushFront(SL*ps);
void SeqListPopBack(SL*ps);
void SeqListPopFront(SL*ps);
void SeqListInsert(SL*ps, int pos, SQDataType x);
void SeqListInsert(SL*ps, int pos);
void SeqListFind(SL*ps, SQDataType x);
void SeqListModify(SL*ps, int pos, SQDataType x);