#include <iostream>
#define SIZE 5
using namespace std;
class Queue_1
{
public:
     int queue[SIZE], front, rear;
     Queue_1()
     {
          front = -1;
          rear = -1;
     }
     void insert()
     {
          int value;
          cout << "Enter The Value You want to insert: ";
          cin >> value;
          if (rear == SIZE - 1)
          {
               cout << "Queue is OverFlow\n";
          }
          else
          {
               if (front == -1)
               {
                    front = 0;
               }
               rear++;
               queue[rear] = value;
               cout << "Value inserted is: " << value << endl;
          }
     }
     void del()
     {
          if (front == -1)
          {
               cout << "Queue is underFlow\n";
          }
          else
          {
               int value = queue[front];
               if (front >= rear)
               {
                    front = -1;
                    rear = -1;
               }
               else
               {
                    front++;
               }
               cout << "Element delete fron queue is " << value << endl;
          }
     }
     void display()
     {
          if (front == -1)
          {
               cout << "Queue is empty\n";
          }
          else
          {
               for (int i = front; i <= rear; i++)
               {
                    cout << queue[i] << " " << endl;
               }
          }
     }
};

int main()
{
     Queue_1 t;
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
               t.insert();
               break;
          case 2:
               t.del();
               break;
          case 3:
               t.display();
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