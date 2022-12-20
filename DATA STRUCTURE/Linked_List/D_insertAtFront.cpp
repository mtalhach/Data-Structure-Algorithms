#include <iostream>
using namespace std;
class node
{
public:
 node *prev;
 int data;
 node *next;
};

node *insertAtBeginning(node *head)
{
 node *temp = (node *)malloc(sizeof(node));
 temp->prev = NULL;
 temp->data = 5;
 temp->next = NULL;
 temp->next = head;
 head->prev = temp;
 head = temp;
 cout << head->data << " Insert SuccessFully at beginning\n";
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

void menu(node *head)
{
 int choice = 1;
 while (choice != 0)
 {
  cout << "Press 1:To Insert At beginning\n";
  cout << "Press 2:To display\n";
  cout << "Press 0:To Exit\n";
  cin >> choice;
  switch (choice)
  {
  case 1:
   head = insertAtBeginning(head);
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
 menu(head);
}

int main()
{
 create();
}