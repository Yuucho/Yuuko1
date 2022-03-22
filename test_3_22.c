
Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
 };

bool hasCycle(struct ListNode* head)
{
    struct ListNode* slow = head, * fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}


 Definition for singly-linked list.
 struct ListNode {
   int val;
    struct ListNode *next;
};

struct ListNode* detectCycle(struct ListNode* head)
{
    struct ListNode* slow = head, * fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            struct ListNode* meet = slow;
            while (meet != head)
            {
                head = head->next;
                meet = meet->next;
            }
            return meet;
        }
    }
    return NULL;
}



struct Node* copyRandomList(struct Node* head)
{
    struct Node* cur = head;
    //1.拷贝节点在原节点的后面
    while (cur)
    {
        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
        copy->val = cur->val;
        copy->next = cur->next;
        cur->next = copy;
        cur = cur->next->next;
    }
    //2.更新拷贝节点的random
    cur = head;
    while (cur)
    {
        struct Node* copy = cur->next;
        if (cur->random == NULL)
        {
            copy->random = NULL;
        }
        else
        {
            copy->random = cur->random->next;
        }
        cur = cur->next->next;
    }
    //3.拷贝节点解下来，链接
    //copy尾插到新节点
    cur = head;
    struct Node* copyHead = NULL, * copyTail = NULL;
    while (cur)
    {
        struct Node* copy = cur->next;
        struct Node* next = copy->next;
        cur->next = next;
        //第一次尾插
        if (copyTail == NULL)
        {
            copyHead = copyTail = copy;
        }
        else
        {
            copyTail->next = copy;
            copyTail = copyTail->next;
        }
        cur = next;
    }
    return copyHead;
}