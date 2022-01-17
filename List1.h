#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
typedef int LTDataType;

//��ͷ˫��������ɾ����O��1����
//ƽ����������AVL���ͺ����������ϣ��B�� B+��ϵ��
typedef struct ListNode
{
	struct ListNode*next;
	struct ListNode*prev;
	LTDataType data;
}ListNode;

ListNode* ListInit();
void ListDestory(ListNode*phead);
void ListPrint(ListNode*phead);
void ListPushBack(ListNode*phead, LTDataType x);
void ListPushFront(ListNode*phead, LTDataType x);
void ListPopFront(ListNode*phead);
void ListPopBack(ListNode*phead);
ListNode*ListFind(ListNode*phead, LTDataType x);
void ListInsert(ListNode*pos, LTDataType x);
void ListErase(ListNode*pos);

bool ListEmpty(ListNode*phead);
bool ListSize(ListNode*phead);