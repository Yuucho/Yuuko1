#include "test_4_15.h"
void Test()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushFront(&s, 0);
	SeqListPushFront(&s, -1);
	SeqListPrint(&s);
	SeqListPopBack(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);
	SeqListInsert(&s, 3, 20);
	SeqListErase(&s, 5);
	SeqListPrint(&s);
	SeqListFind(&s, 20);
	int ret= SeqListFind(&s, 20);
	printf("%d\n", ret);



	SeqListDestory(&s);
}

int main()
{
	Test();
	return 0;
}