#include <iostream>
using namespace std;
class node
{
public:
 node *prev;
 int data;
 node *next;
 node()
 {
  prev = NULL;
  this->data = 5;
  next = NULL;
 }
};

void insertAtLast(node *head)
{
 node *temp = head;
 while (temp->next != NULL)
 {
  temp = temp->next;
 }
 node *newNode = new node();
 int value;
 cout << "Enter The value: ";
 cin >> value;
 newNode->prev = NULL;
 newNode->data = value;
 newNode->next = NULL;
 temp->next = newNode;
 cout << newNode->data << " Insert SuccessFully at Last\n";
 return;
}

void print(node *head)
{
 if (head == NULL)
 {
  cout << "List is empty\n";
  return;
 }
 node *temp = head;
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
  cout << "Press 1:To Insert At Last\n";
  cout << "Press 2:To display\n";
  cout << "Press 0:To Exit\n";
  cin >> choice;
  switch (choice)
  {
  case 1:
   insertAtLast(head);
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

int main()
{
 node *head = new node();
 menu(head);
}