#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int> q;
	
	//add in queue
	q.push(8);
	q.push(7);
	q.push(6);
	q.push(11);
	q.push(5);
	q.push(2);
	
	//remove from queue
	q.pop();
	q.pop();
	
	//access front
	cout<<"Front is: "<<q.front()<<endl;
	
	//access last
	cout<<"Last is: "<<q.back()<<endl;
	
	//size od queue
	cout<<"Size of queue is: "<<q.size()<<endl;
	
	//print queue	
	while(!q.empty()){
		cout<<q.front()<<"  ";
		q.pop();
	}
}
