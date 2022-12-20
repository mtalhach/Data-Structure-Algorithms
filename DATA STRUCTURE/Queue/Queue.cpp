#include <iostream>
#define SIZE 5
using namespace std;
class Queue
{
private:
 int queue[SIZE], front, rear;

public:
 Queue() // construtor
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

 void enqueue(int value)
 {
  if (isFull())
  {
   cout << "Queue is Full";
  }
  else
  {
   if (front == -1)
   {
    front = 0;
   }
   rear++;
   queue[rear] = value;
   cout << "Value is: " << value << endl;
  }
 }
 void dequeue()
 {
  int value;
  if (isEmpty())
  {
   cout << "Queue  is Empty";
  }
  else
  {
   value = queue[front];
   if (front >= rear)
   {
    front = -1;
    rear = -1;
   }
   else
   {
    front++;
   }
   cout << "Deleted Value: " << value;
  }
 }
 void displayQueue()
 {
  if (isEmpty())
  {
   cout << "Queue is empty";
  }
  else
  {
   cout << "Front is: " << front << endl;
   for (int i = front; i <= rear; i++)
   {
    cout << queue[i] << " ";
   }
   cout << "\nrear is: " << rear << endl;
  }
 }
};

int main()
{
 Queue qu;
 qu.dequeue();
 cout << "\n===================\n";
 cout << "\n\t\t\tQueue Created: " << endl;
 qu.enqueue(10);
 qu.enqueue(20);
 qu.enqueue(30);
 qu.enqueue(40);
 qu.enqueue(50);
 qu.enqueue(60);
 cout << "\n===================\n";
 qu.displayQueue();
 cout << "\n===================\n";
 qu.dequeue();
 cout << "\n===================\n";
 qu.displayQueue();
}