#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef int SLTDataType;
struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
};


typedef struct SListNode SLTNode;
//不会改变链表的头指针，传一级指针
void SListPrint(SLTNode*phead);
//可能会改变链表的头指针，传二级指针
void SListPushBack(SLTNode**pphead, SLTDataType x);
void SListPushFront(SLTNode**pphead, SLTDataType x);
void SListPopFront(SLTNode**pphead);
void SListPopBack(SLTNode**pphead);
SLTNode* SListFind(SLTNode*phead, SLTDataType x);
//在pos的前面插入x
void SListInsert(SLTNode**pphead, SLTNode*pos, SLTDataType x);
void SListErase(SLTNode**pphead, SLTNode*pos);