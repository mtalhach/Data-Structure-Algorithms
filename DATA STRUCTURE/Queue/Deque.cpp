// Deque implementation in C++

#include <iostream>
using namespace std;
#define MAX 10

class Deque {
  int arr[MAX];
  int front;
  int rear;
  int size;

   public:
  Deque(int size) {
    front = -1;
    rear = 0;
    this->size = size;
  }

  void insertfront(int key);
  void insertrear(int key);
  void deletefront();
  void deleterear();
  bool isFull();
  bool isEmpty();
  int getFront();
  int getRear();
  void display();
};

bool Deque::isFull() {
  if ((front == 0 && rear == size - 1) ||front == rear + 1)
  {
  	return true;	
  }
  	return false;
}

bool Deque::isEmpty() {
  if (front == -1)
  {
  	return true;
  }
  return false;
}

void Deque::insertfront(int key) {
  if (isFull()) {
    cout << "Overflow\n";
    return;
  }

  if (front == -1) {
    front = 0;
  }

  else if (front == 0)
    front = size - 1;

  else
    front = front - 1;

  arr[front] = key;
}

void Deque ::insertrear(int key) {
  if (isFull()) {
    cout << " Overflow\n ";
    return;
  }

  if (front == -1) {
    front = 0;
  }

  else if (rear == size - 1)
    rear = 0;

  else
    rear = rear + 1;

  arr[rear] = key;
}

void Deque ::deletefront() {
  if (isEmpty()) {
    cout << "Queue Underflow\n";
  }

  if (front == rear) {
    front = -1;
    rear = -1;
  } 
  else if (front == size - 1)
    front = 0;

  else
    front = front + 1;
}

void Deque::deleterear() {
  if (isEmpty()) {
    cout << " Underflow\n";
    return;
  }

  if (front == rear) {
    front = -1;
    rear = -1;
  } else if (rear == 0)
    rear = size - 1;
  else
    rear = rear - 1;
}

int Deque::getFront() {
  if (isEmpty()) {
    cout << " Underflow\n";
    return -1;
  }
  return arr[front];
}

int Deque::getRear() {
  if (isEmpty() || rear < 0) {
    cout << " Underflow\n";
    return -1;
  }
  return arr[rear];
}

void Deque::display()
 {
  int f = front, r = rear;
  if (isEmpty())
  {
   cout << "Queue is empty\n";
  }
  cout << "Queue elements are :\n";
  if (f <= r)
  {
   while (f <= r)
   {
    cout << arr[f] << " ";
    f++;
   }
  }
  else
  {
   while (f <= size - 1)
   {
    cout << arr[f] << " ";
    f++;
   }
   f = 0;
   while (f <= r)
   {
    cout << arr[f] << " ";
    f++;
   }
  }
  cout << endl;
 }

int main() {
  Deque dq(5);
  int choice;
  int key,f,r;
  
	while(1){
	cout<<"\nPress 1: insertfront\n";
	cout<<"Press 2: insertrear\n";
  	cout<<"Press 3: deletefront\n";
  	cout<<"Press 4: deleterear\n";
  	cout<<"Press 5: getFront\n";
  	cout<<"Press 6: getRear\n";
  	cout<<"Press 7: to Display\n";
  	cout<<"-----Enter Your choice:  ";
  	cin>>choice;
  	
  	switch(choice){
  		case 1:
  			cout<<"\nEnter The Value You want to insert at Front:  ";
  			cin>>key;
  			dq.insertfront(key);
  			break;
  		case 2:
  			cout<<"\nEnter The Value You want to insert at rear:  ";
  			cin>>key;
  			dq.insertrear(key);
  			break;
  		case 3:
  			dq.deletefront();
  			cout<<"\nFront Deleted successfully:  ";
  			break;
  		case 4:
  			dq.deleterear();
  			cout<<"\nrear Deleted successfully:  ";
  			break;
  		case 5:
  			f=dq.getFront();
  			cout<<"\nFront element is:  "<<f;
  			break;
  		case 6:
  			r=dq.getRear();
  			cout<<"\nRear element is:  "<<r;
  			break;
  		case 7:
  			dq.display();
	  }
	}
  
}
