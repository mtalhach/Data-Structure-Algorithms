#include <iostream>
#define SIZE 6
using namespace std;
class circular_Queue
{
public:
 int queue[SIZE], front, rear;
 circular_Queue()
 {
  front = -1;
  rear = -1;
 }
 bool isFull()
 {
  if (front == 0 && rear == SIZE - 1)
  {
   return true;
  }
  if (front == rear + 1)
  {
   return true;
  }
  else
  {
   return false;
  }
 }

 bool isEmpty()
 {
  if (front == -1)
  {
   return true;
  }
  else
  {
   return false;
  }
 }

 void enque()
 {
  if (isFull())
  {
   cout << "Queue is Full\n";
  }
  else
  {
   if (front == -1)
   {
    front = 0;
   }
   int value;
   cout << "Enter The Value:";
   cin >> value;
   rear = (rear + 1) % SIZE;
   queue[rear] = value;
   cout << "Inserted Value is: " << value << endl;
  }
 }

 void deque()
 {
  if (isEmpty())
  {
   cout << "Queue is Empty\n";
  }
  else
  {
   int element = queue[front];
   if (front == rear)
   {
    front = -1;
    rear = -1;
   }
   else
   {
    front = (front + 1) % SIZE;
    cout << "Deleted Value is: " << element << endl;
   }
  }
 }

 void display()
 {
  int f = front, r = rear;
  if (isEmpty())
  {
   cout << "Queue is empty\n";
  }
  cout << "Front is: " << front << endl;
  cout << "rear is: " << rear << endl;
  cout << "Queue elements are :\n";
  if (f <= r)
  {
   while (f <= r)
   {
    cout << queue[f] << " ";
    f++;
   }
  }
  else
  {
   while (f <= SIZE - 1)
   {
    cout << queue[f] << " ";
    f++;
   }
   f = 0;
   while (f <= r)
   {
    cout << queue[f] << " ";
    f++;
   }
  }
  cout << endl;
 }
};

int main()
{
 circular_Queue cq;
 int option = -1;
 while (option != 0)
 {
  cout << "Press 1:For Insertion\n";
  cout << "Press 2:For Deletion\n";
  cout << "Press 3:For Display\n";
  cout << "Press 0:For EXIT\n";
  cout << "Enter Your Choice:\n";
  cin >> option;
  switch (option)
  {
  case 1:
   cq.enque();
   break;
  case 2:
   cq.deque();
   break;
  case 3:
   cq.display();
   break;
  case 0:
   exit(0);
   break;
  default:
   cout << "Plz Enter The Right Command";
   break;
  }
 }
}