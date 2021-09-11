/*
Given head, the head of a singly linked list, find if the 
linked list is circular or not. A linked list is called circular 
if it not NULL terminated and all nodes are connected in the 
form of a cycle. An empty linked list is considered as circular.
*/

#include <stdbool.h>

struct Node
{
    int data;
    struct Node *next;
};

bool isCircular(struct Node *head)
{
    struct Node *tmp;
    tmp = head;

    while (tmp->next != NULL)
    {
        if (tmp->next == head)
            return (1);
        tmp = tmp->next;
    }
    if (tmp->next != NULL)
        return (1);
    return (0);
}