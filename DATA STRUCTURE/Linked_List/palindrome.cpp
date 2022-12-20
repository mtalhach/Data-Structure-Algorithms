#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	node* prev;
	int data;
	node* next;
	
	node(int value){
		prev=NULL;
		data=value;
		next=NULL;
	}
};

void insert(node* head){
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	node* newNode=new node(0);
	int value;
	cout<<"Enter The Value: ";
	cin>>value;
	newNode->prev=NULL;
	newNode->data=value;
	newNode->next=NULL;
	
	temp->next=newNode;
	newNode->prev=temp;
	temp=newNode;
}


void print(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

bool palindrome(node* head){
	node* temp=head;
	stack <int> s;
	
	while(temp!=NULL){
		s.push(temp->data);
		temp=temp->next;
	}
	
	temp=head;
	while(temp!=NULL){
		int i=s.top();
		s.pop();
		
		if(temp->data!=i){
			return false;
		}
		temp=temp->next;
	}
	return true;
}

int main(){
	int value;
	cout<<"Enter The Value: ";
	cin>>value;
	node* head=new node(value);
	int i;
	for(i=0;i<4;i++){
		insert(head);
	}
	print(head);
	if(palindrome(head)){
		cout<<"\nis a palindrome";
	}
	else{
		cout<<"\nis not a palindrome";
	}
}


