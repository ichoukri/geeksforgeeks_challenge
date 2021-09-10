/*
Given two Singly Linked List of N and M nodes respectively. 
The task is to check whether two linked lists are identical 
or not. 
Two Linked Lists are identical when they have same data and 
with same arrangement too.

Example 1:
Input:
LinkedList1: 1->2->3->4->5->6
LinkedList2: 99->59->42->20
Output: Not identical 

Example 2:
Input:
LinkedList1: 1->2->3->4->5
LinkedList2: 1->2->3->4->5
Output: Identical
*/

struct Node
{
    int data;
    struct Node *next;
};

bool areIdentical(struct Node *head1, struct Node *head2)
{
    struct Node *tmp1;
    struct Node *tmp2;

    tmp1 = head1;
    tmp2 = head2;
    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->data != tmp2->data)
            return (0);
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    if ((tmp1 != NULL || tmp2 != NULL))
        return (0);
    return (1);
}