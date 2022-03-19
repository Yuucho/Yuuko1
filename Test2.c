#define _CRT_SECURE_NO_WARNINGS 1
#include "SList1.h"

void TestSList1()
{
	/*SListNode* slist = NULL;
	SListNode* n1 = malloc(sizeof(SListNode));
	SListNode* n2 = malloc(sizeof(SListNode));
	SListNode* n3 = malloc(sizeof(SListNode));
	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n1->next = n3;
	n3->next = n2;
	n2->next = NULL;
	slist = n1;*/

	SListNode* slist = NULL;
	SListNode* n1 = malloc(sizeof(SListNode));
	SListNode* n2 = malloc(sizeof(SListNode));
	SListNode* n3 = malloc(sizeof(SListNode));
	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;
	slist = n1;

	SListPrint(slist);
}

void SwapInt(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void SwapPInt(int** pp1, int** pp2)
{
	int* tmp = *pp1;
	*pp1 = *pp2;
	*pp2 = tmp;
}

void TestSList2()
{
	SListNode* slist = NULL; //������
	//SListPushBack(slist, 1);
	//SListPushBack(slist, 2);
	//SListPushBack(slist, 3);
	//SListPushBack(slist, 4);
	for (int i = 0; i < 4; ++i)
	{
		SListPushBack(&slist, i);
	}
	SListPrint(slist);

	// ��������ı�ʵ��int������Ҫ��int*
	int a = 0, b = 1;
	SwapInt(&a, &b);

	// ��������ı�ʵ��int*������Ҫ��int**  
	int* pa = &a, * pb = &b;
	//SwapInt(pa, pb);
	SwapPInt(&pa, &pb);
}

void TestSList3()
{
	SListNode* slist = NULL; //������
	SListPushBack(&slist, 1);
	SListPushBack(&slist, 2);
	SListPushBack(&slist, 3);
	SListPushBack(&slist, 4);

	SListPopBack(&slist);
	SListPopBack(&slist);
	SListPopBack(&slist);
	SListPopBack(&slist);
	SListPopBack(&slist);
	SListPrint(slist);
}

void TestSList4()
{
	SListNode* slist = NULL; //������
	SListPushBack(&slist, 1);
	SListPushBack(&slist, 2);
	SListPushBack(&slist, 3);
	SListPushBack(&slist, 4);

	SListPopFront(&slist);

	SListNode* pos = SListFind(slist, 3);
	if (pos)
	{
		printf("�ҵ���:%p\n", pos);
		// �޸�
		pos->data *= 10;
	}

	SListPrint(slist);
}

void TestSList5()
{
	SListNode* slist = NULL; //������
	SListPushBack(&slist, 1);
	SListPushBack(&slist, 2);
	SListPushBack(&slist, 3);
	SListPushBack(&slist, 4);
	SListPrint(slist);

	SListNode* pos = SListFind(slist, 3);
	if (pos)
	{
		SListInsert(&slist, pos, 30);
	}
	SListPrint(slist);

	pos = SListFind(slist, 1);
	if (pos)
	{
		SListInsert(&slist, pos, 30);
	}
	SListPrint(slist);
}

void TestSList6()
{
	SListNode* slist = NULL; //������
	SListPushBack(&slist, 1);
	SListPushBack(&slist, 2);
	SListPushBack(&slist, 3);
	SListPushBack(&slist, 4);
	SListPushBack(&slist, 5);
	SListPrint(slist);

	SListNode* pos = SListFind(slist, 3);
	if (pos)
	{
		SListErase(&slist, pos);
	}
	SListPrint(slist);

	pos = SListFind(slist, 1);
	if (pos)
	{
		SListErase(&slist, pos);
	}
	SListPrint(slist);
}

int main()
{
	TestSList6();

	return 0;
}
