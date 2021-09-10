/*
Given a singly linked list. The task is to find the 
length of the linked list, where length is defined 
as the number of nodes in the linked list.

Example:
Input:
LinkedList: 1->2->3->4->5
Output: 5
Explanation: Count of nodes in the 
linked list is 5, which is its length.
*/

struct Node
{
    int data;
    struct Node *next;
};

int getCount(struct Node *head)
{
    struct Node *tmp;
    int count = 0;
    tmp = head;

    while (tmp)
    {
        tmp = tmp->next;
        count++;
    }
    return (count);
}