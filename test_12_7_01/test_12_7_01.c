#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
struct ListNode 
{
	int val;
	struct ListNode *next;
};

//˼·1����תָ�뷨
struct ListNode *ReverseList(struct ListNode *head)
{
	if (head == NULL)
		return NULL;
	//��ʼ����
	struct ListNode *n1 = NULL, *n2 = head, *n3 = n2->next;
	//��������
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

//˼·2��ͷ�巨
struct ListNode * ReverseList(struct ListNode *head)
{
	struct ListNode *cur = head;
	struct ListNode *newhead = NULL;
	while (cur)
	{
		struct ListNode *next = cur->next;
		//ͷ��
		cur->next = newhead;
		newhead = cur;
		cur = next;
	}
	return newhead;
}