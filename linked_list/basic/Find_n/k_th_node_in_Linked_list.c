/*
Given a singly linked list and a number k. Write a function to 
find the (N/k)th element, where N is the number of elements in 
the list. We need to consider ceil value in case of decimals.

Example:
Input:
1
6
1 2 3 4 5 6
2
Output:
3
Explanation:
Testcase 1: 6/2th element is the 3rd(1-based indexing) element 
which is 3.
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

int fractional_node(struct Node *head, int k)
{
    struct Node *tmp = head;
    int len = 0;

    while (tmp != NULL)
    {
        len++;
        tmp = tmp->next;
    }
    if (len % k != 0)
        len = len / k;
    else
        len = len / k - 1;
    tmp = head;
    while (len > 0)
    {
        len--;
        tmp = tmp->next;
    }
    return (tmp->data);
}