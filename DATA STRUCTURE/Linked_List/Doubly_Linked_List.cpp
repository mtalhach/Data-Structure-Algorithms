#include <iostream>
using namespace std;
class node
{
public:
 node *prev;
 int data;
 node *next;
};

node *create(node *head, int data)
{
 node *temp = (node *)malloc(sizeof(node));
 temp->prev = NULL;
 temp->data = data;
 temp->next = NULL;
 head = temp;
 return head;
}

int main()
{
 node *head = (node *)malloc(sizeof(node));
 head = create(head, 15);
 cout << head->data;
}