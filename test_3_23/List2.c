#include"List2.h"

LTNode* BuyLTNode(LTDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}

void ListPrint(LTNode* phead)
{
	assert(phead);

	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n\n");
}

void ListDestroy(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		LTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
	phead = NULL;
}

LTNode* ListInit()
{
	LTNode* phead = BuyLTNode(0);
	phead->next = phead;
	phead->prev = phead;

	return phead;
}

void ListPushBack(LTNode* phead, LTDataType x)
{
	//assert(phead);

	//LTNode* tail = phead->prev;
	//LTNode* newnode = BuyLTNode(x);

	//tail->next = newnode;
	//newnode->prev = tail;

	//newnode->next = phead;
	//phead->prev = newnode;

	ListInsert(phead, x);
}

void ListPopBack(LTNode* phead)
{
	assert(phead);
	// Ϊ
	assert(phead->next != phead);

	LTNode* tail = phead->prev;
	LTNode* tailPrev = tail->prev;

	free(tail);
	tail = NULL;

	tailPrev->next = phead;
	phead->prev = tailPrev;

}

void ListPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* first = phead->next;
	LTNode* newnode = BuyLTNode(x);
	phead->next = newnode;
	newnode->prev = phead;
	newnode->next = first;
	first->prev = newnode;
}

void ListPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LTNode* first = phead->next;
	LTNode* second = first->next;
	free(first);
	phead->next = second;
	second->prev = phead;
}

LTNode* ListFind(LTNode* phead, LTDataType x)
{
	assert(phead);

	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}

		cur = cur->next;
	}

	return NULL;
}

void ListInsert(LTNode* pos, LTDataType x)
{
	assert(pos);
	/*LTNode* newnode = BuyLTNode(x);
	pos->prev->next = newnode;
	newnode->prev = pos->prev;

	pos->prev = newnode;
	newnode->next = pos;*/

	LTNode* newnode = BuyLTNode(x);
	LTNode* posPrev = pos->prev;

	newnode->next = pos;
	pos->prev = newnode;
	posPrev->next = newnode;
	newnode->prev = posPrev;
}

void ListErase(LTNode* pos)
{
	assert(pos);
	LTNode* prev = pos->prev;
	LTNode* next = pos->next;
	prev->next = next;
	next->prev = prev;
	free(pos);
}