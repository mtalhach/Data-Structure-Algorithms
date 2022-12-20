#include <iostream>
#include <queue>
using namespace std;
int main()
{
 priority_queue<int> pq;

 pq.push(10);
 pq.push(14);
 pq.push(5);

 // size
 cout << "\nThe Size is: " << pq.size() << endl;

 // display
 while (!pq.empty())
 {
  cout << pq.top() << " ";
  pq.pop();
 }
}