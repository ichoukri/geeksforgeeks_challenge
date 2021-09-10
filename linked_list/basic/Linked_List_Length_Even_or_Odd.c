/*
Given a linked list of size N, your task is to 
complete the function isLengthEvenOrOdd() which 
contains head of the linked list and check whether 
the length of linked list is even or odd.

User Task:
Since this is a functional problem you don't have to 
worry about input, you just have to  complete the 
function isLengthEvenOrOdd() which takes head of the 
linked list as input parameter and returns 0 if the 
length of the linked list is even otherwise returns 1.
*/

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int isLengthEvenOrOdd(struct Node *head)
{
    struct Node *tmp = head;
    int len = 0;

    while (tmp)
    {
        len++;
        tmp = tmp->next;
    }
    return (len % 2 == 0 ? 0 : 1);
}