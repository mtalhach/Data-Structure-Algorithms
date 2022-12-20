#include <iostream>
using namespace std;
class node
{
public:
 node *prev;
 int data;
 node *next;
};

node *insertBetweenNodes(node *head, node *head1)
{
 node *newNode = (node *)malloc(sizeof(node));
 newNode->prev = NULL;
 newNode->data = 12;
 newNode->next = NULL;

 // newNode->prev = head;
 // head->next = newNode;

 // newNode->next = head1;
 // head1->prev = newNode;

 newNode->prev = head;
 newNode->next = head->next;
 head->next->prev = newNode;
 head->next = newNode;

 cout << newNode->data << " Insert SuccessFully Between Nodes\n";
 return head;
}

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
 cout << endl;
}

void menu(node *head, node *head1)
{
 int choice = 1;
 while (choice != 0)
 {
  cout << "Press 1:To Insert Between Nodes\n";
  cout << "Press 2:To display\n";
  cout << "Press 0:To Exit\n";
  cin >> choice;
  switch (choice)
  {
  case 1:
   head = insertBetweenNodes(head, head1);
   break;
  case 2:
   print(head);
   break;
  case 0:
   exit(0);
   break;
  default:
   cout << "Plz Enter The right command\n";
   break;
  }
 }
}

void create()
{
 node *head = (node *)malloc(sizeof(node));
 head->prev = NULL;
 head->data = 10;
 head->next = NULL;

 node *head1 = (node *)malloc(sizeof(node));
 head1->prev = NULL;
 head1->data = 15;
 head1->next = NULL;

 head->next = head1;
 head1->prev = head;

 menu(head, head1);
}

int main()
{
 create();
}