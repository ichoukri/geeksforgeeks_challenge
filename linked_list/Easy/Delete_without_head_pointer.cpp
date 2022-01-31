#include <iostream>
#include <stdlib.h>
using namespace std;

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

void deleteNode(Node *del)
{
	Node *next_node;

	next_node = del->next;
	del->data = next_node->data;
	del->next = next_node->next;
	free(next_node);
}
