#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
typedef int LTDataType;

//带头双向链表，增删都是O（1）；
//平衡搜索树（AVL树和红黑数），哈希表，B树 B+树系列
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