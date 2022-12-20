#include <iostream>
using namespace std;
class node
{
public:
 int data;
 node *next;
};

void create()
{
 // node *head = new struct node();
 node *head = NULL;
 head = (node *)malloc(sizeof(node)); // allocate memory
 head->data = 15;
 head->next = NULL;
 cout << head->data;
}

int main()
{
 create();
}
