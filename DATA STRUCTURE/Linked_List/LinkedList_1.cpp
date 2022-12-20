#include <iostream>
using namespace std;
struct node
{
 int data;
 struct node *next;
};

void create()
{
 struct node *head = NULL;
 // head = new struct node();
 head = (struct node *)malloc(sizeof(struct node)); // allocate memory
 head->data = 15;
 head->next = NULL;
 cout << head->data;
}

int main()
{
 create();
}
