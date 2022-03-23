#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef int LTDataType;
typedef struct ListNode
{
	LTDataType data;
	struct ListNode* next;
	struct ListNode* prev;
}LTNode;

void ListPrint(LTNode* phead);
LTNode* ListInit();
void ListDestroy(LTNode* phead);
LTNode* BuyLTNode(LTDataType x);
void ListPushBack(LTNode* phead, LTDataType x);
void ListPopBack(LTNode* phead);

void ListPushFront(LTNode* phead, LTDataType x);
void ListPopFront(LTNode* phead);
LTNode* ListFind(LTNode* phead, LTDataType x);

// ��pos֮ǰ����
void ListInsert(LTNode* pos, LTDataType x);
//void ListInsert(int i, LTDataType x);

// ɾ��posλ�õĽڵ�
void ListErase(LTNode* pos);