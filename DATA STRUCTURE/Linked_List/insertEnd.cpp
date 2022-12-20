// O(1)
#include <iostream>
using namespace std;
class node
{
public:
 int data;
 node *next;
};

node *insertAtEnd(node *temp, int data)
{
 node *newNode = new node();
 newNode->data = data;
 newNode->next = NULL;
 temp->next = newNode;
 return newNode;
}

void create()
{
 node *head = NULL;
 head = new node();
 head->data = 15;
 head->next = NULL;

 node *temp = NULL;
 temp = new node();
 temp = head;

 temp = insertAtEnd(temp, 20);
 temp = insertAtEnd(temp, 25);
 temp = insertAtEnd(temp, 30);

 temp = head;
 while (temp != NULL)
 {
  cout << temp->data << " ";
  temp = temp->next;
 }
}

int main()
{
 create();
}
