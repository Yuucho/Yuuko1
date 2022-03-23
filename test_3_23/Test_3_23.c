#define _CRT_SECURE_NO_WARNINGS 1
#include "List2.h"
void TestList1()
{
	LTNode* pList = ListInit();
	ListPushBack(pList, 1);
	ListPushBack(pList, 2);
	ListPushBack(pList, 3);
	ListPushBack(pList, 4);
	ListPrint(pList);
	ListPushFront(pList, 0);
	ListPushFront(pList, -1);
	ListPrint(pList);
	ListPopBack(pList);
	ListPrint(pList);


	LTNode* pos = ListFind(pList, 3);
	if (pos)
	{
		ListInsert(pos, 30);
	}
	ListPrint(pList);
	ListDestroy(pList);
}

int main()
{
	TestList1();

	return 0;
}