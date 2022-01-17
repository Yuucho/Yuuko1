#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
struct ListNode 
{
	int val;
	struct ListNode *next;
};

//思路1：反转指针法
struct ListNode *ReverseList(struct ListNode *head)
{
	if (head == NULL)
		return NULL;
	//初始条件
	struct ListNode *n1 = NULL, *n2 = head, *n3 = n2->next;
	//结束条件
	while (n2 != NULL)
	{
		n2->next = n1;
		n1 = n2;
		n2 = n3;
		if (n3 != NULL)
			n3 = n3->next;
	}
	return n1;
};

//思路2：头插法
struct ListNode * ReverseList(struct ListNode *head)
{
	struct ListNode *cur = head;
	struct ListNode *newhead = NULL;
	while (cur)
	{
		struct ListNode *next = cur->next;
		//头插
		cur->next = newhead;
		newhead = cur;
		cur = next;
	}
	return newhead;
}