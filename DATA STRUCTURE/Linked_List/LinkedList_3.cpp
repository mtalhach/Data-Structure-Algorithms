#include <iostream>
using namespace std;
class node
{
public:
 int data;
 node *next;
};

void print(node *head)
{
 if (head == NULL)
 {
  cout << "List is empty\n";
  return;
 }
 node *temp = NULL;
 temp = head;
 while (temp != NULL)
 {
  cout << temp->data << " ";
  temp = temp->next;
 }
}

void create()
{
 node *head = NULL;
 head = (node *)malloc(sizeof(node)); // allocate memory
 head->data = 15;
 head->next = NULL;

 node *second = (node *)malloc(sizeof(node));
 second->data = 20;
 second->next = NULL;

 head->next = second;

 node *third = (node *)malloc(sizeof(node));
 third->data = 35;
 third->next = NULL;

 second->next = third;

 print(head);
}

int main()
{
 create();
}
