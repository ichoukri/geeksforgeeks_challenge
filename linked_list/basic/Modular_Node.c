/*Given a singly linked list and a number K, you are required 
to complete the function modularNode() which returns the modular 
node of the linked list.
A modular node is the last node of the linked list whose Index 
is divisible by the number K, i.e. i%k==0.
Note: If no such node is available, return -1.

Example 1:
Input: LinkedList: 1->2->3->4->5->6->7
k = 3
Output: 6
Explanation: Node from the last which 
is divisible by 3 is 6

Example 2:
Input: LinkedList: 19->28->37->46->55
k = 2
Output: 46
Explanation: Node from the last which
is divisible by 2 is 46S
*/

struct Node
{
    int data = x;
    struct Node *next = NULL;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int modularNode(Node *head, int k)
{
    Node *tmp;
    int i = 0;
    int best = -1;

    if (k <= 0 || head == NULL)
        return (-1);
    tmp = head;
    while (tmp != NULL)
    {
        i++;
        if (i % k == 0)
            best = tmp->data;
        tmp = tmp->next;
    }
    return (best);
}