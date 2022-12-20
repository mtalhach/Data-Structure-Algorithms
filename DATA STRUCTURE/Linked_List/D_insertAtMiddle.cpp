#include <iostream>
using namespace std;
class node
{
public:
 node *prev;
 int data;
 node *next;

 node(int data)
 {
  prev = NULL;
  this->data = data;
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
 node *newNode = new node(0);
 int data;
 cout << "Enter The Value You want to insert: ";
 cin >> data;
 newNode->prev = NULL;
 newNode->data = data;
 newNode->next = NULL;

 temp->next = newNode;
 newNode->prev = temp;
 return;
}

void middle(node *head)
{
 int count = 0, pos;
 node *temp = head;
 while (temp != NULL)
 {
  count++;
  temp = temp->next;
 }
 pos = count / 2;
 count = 0;
 temp = head;
 while (count < pos - 1)
 {
  count++;
  temp = temp->next;
 }
 node *newNode = new node(0);
 int data;
 cout << "\n\nEnter The Value You want to insert: ";
 cin >> data;
 newNode->prev = NULL;
 newNode->data = data;
 newNode->next = NULL;

 newNode->prev = temp;
 newNode->next = temp->next;
 temp->next->prev = newNode;
 temp->next = newNode;
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

int main()
{
 int value;
 cout << "Enter The Value You want to insert: ";
 cin >> value;
 node *head = new node(value);
 for (int i = 0; i < 9; i++)
 {
  insertAtLast(head);
 }
 middle(head);
 print(head);
}