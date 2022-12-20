#include <iostream>
using namespace std;
class node
{
public:
 int data;
 node *next;

 node(int data) // constructor
 {
  this->data = data;
  this->next = NULL;
 }
};

int main()
{
 node *obj = new node(15);
 cout << obj->data;
}
