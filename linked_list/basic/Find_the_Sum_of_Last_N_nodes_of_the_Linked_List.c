/*
Given a single linked list of size M, your task is to 
complete the function sumOfLastN_Nodes(), which should 
return the sum of last N nodes of the linked list.

Example:
Input:
1
6 3
5 9 6 3 4 10
Output:
17
3
Explanation:
Testcase 1: Sum of last three nodes in the linked list 
is 3 + 4 + 10 = 17
*/

int sumOfLastN_Nodes(struct Node *head, int n)
{
    struct Node *tmp = head;
    int len = 0;
    int sum = 0;
    int i = 0;
    while (tmp)
    {
        len++;
        tmp = tmp->next;
    }
    tmp = head;
    while (tmp)
    {
        if (i >= len - n)
            sum += tmp->data;
        i++;
        tmp = tmp->next;
    }
    return (sum);
}