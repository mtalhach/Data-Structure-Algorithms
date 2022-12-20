#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

void swapNodes(Node** head, int x, int y)
{
	if (x == y)
		return;

	Node *prevX = *head;
	Node *currX = *head;
	while (currX && currX->data != x) {
		prevX = currX;
		currX = currX->next;
	}

	Node *prevY = *head;
	Node *currY = *head;
	while (currY && currY->data != y) {
		prevY = currY;
		currY = currY->next;
	}

	if (currX == NULL || currY == NULL)
		return;

	if (prevX != NULL)
		{
			prevX->next = currY;
		}

	if (prevY != NULL)
		{
			prevY->next = currX;
		}

	// Swap next pointers
	Node* temp = currY->next;
	currY->next = currX->next;
	currX->next = temp;
}


void push(Node** head, int new_data)
{
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head);
	(*head) = new_node;
}

void printList(Node* node)
{
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
}

int main()
{
	Node* head = NULL;

	/* The constructed linked list is:
	1->2->3->4->5->6->7 */
	push(&head, 7);
	push(&head, 6);
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);

	cout << "Linked list before calling swapNodes() ";
	printList(head);

	swapNodes(&head, 3, 6);

	cout << "\nLinked list after calling swapNodes() ";
	printList(head);

	return 0;
}

