/*
Create a link list of size N according to the given input 
literals. Each integer input is accompanied by an indicator 
which can either be 0 or 1. If it is 0, insert the integer in 
the beginning of the link list. If it is 1, insert the integer 
at the end of the link list. 
Hint: When inserting at the end, make sure that you handle NULL 
explicitly.

Example:
Input:
LinkedList: 9->0->5->1->6->1->2->0->5->0
Output: 5 2 9 5 6
Explanation:
Length of Link List = N = 5
9 0 indicated that 9 should be
inserted in the beginning. Modified
Link List = 9.
5 1 indicated that 5 should be
inserted in the end. Modified Link
List = 9,5.
6 1 indicated that 6 should be
inserted in the end. Modified Link
List = 9,5,6.
2 0 indicated that 2 should be
inserted in the beginning. Modified
Link List = 2,9,5,6.
5 0 indicated that 5 should be
inserted in the beginning. Modified
Link List = 5,2,9,5,6. 
Final linked list = 5, 2, 9, 5, 6.
*/
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *insertAtBegining(struct Node *head, int x)
{
    struct Node *new_node;

    new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = x;
    new_node->next = head;
    head = new_node;
    return (head);
}

struct Node *insertAtEnd(struct Node *head, int x)
{
    struct Node *new_node;
    struct Node *last = head;

    new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = x;
    new_node->next = NULL;
    if (head == NULL)
    {
        head = new_node;
        return (head);
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return (head);
}