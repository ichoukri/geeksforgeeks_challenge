/*
Given a singly linked list with N nodes and a number X. 
The task is to find the node at the given index (X)(1 based index) 
of linked list. 

Example:
Input:
1
6 5
1 2 3 4 657 76
Output:
657
Explanation:
Testcase 1: Element at 5th index in the linked list is 657 
(1-based indexing).
*/

struct node
{
    int data;
    struct node *next;

    node(int x)
    {
        data = x;
        next = NULL;
    }
};

int GetNth(struct node *head, int index)
{
    struct node *tmp;
    int count = 0;

    tmp = head;
    while (tmp != NULL)
    {
        if (++count == index)
            return (tmp->data);
        tmp = tmp->next;
    }
    return (-1);
}
