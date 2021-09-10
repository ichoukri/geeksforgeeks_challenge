/*
Given a linked list. Print all the elements of the linked list.

Example:
Input:
N=2
LinkedList={1 , 2}
Output:
1 2
Explanation:
The linked list contains two elements 1 and 2.The elements are 
printed in a single line.
*/


struct Node
{
    int data;
    struct Node *next;
};

void
display(struct Node *head)
{
    struct Node *tmp = head;

    while (tmp != NULL)
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
}