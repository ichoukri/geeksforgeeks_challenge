/*
Given two string, represented as linked lists (every character is 
a node->data in the linked list). Write a function compare() that 
works similar to strcmp(), i.e., it returns 0 if both strings are 
same, 1 if first linked list is lexicographically greater, and -1 
if second is lexicographically greater.

Example:
Input:
2
5
a b a b a
4
a b a a
Output:
1
Explanation:
Testcase: String consisting of nodes of first linked list is 
lexicographically greater than the second one. So, the result is 1.
*/

int compare(Node *list1, Node *list2)
{
    while (list1->next != NULL && list2->next != NULL)
    {
        if (list1->c < list2->c)
            return (-1);
        else if (list1->c > list2->c)
            return (1);
        list1 = list1->next;
        list2 = list2->next;
    }
    if (list1->next == NULL && list2->next != NULL)
        return (-1);
    else if (list1->next != NULL && list2->next == NULL)
        return (1);
    return (0);
}