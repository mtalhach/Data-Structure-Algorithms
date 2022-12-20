#include<iostream>
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

void pos(node* head){
	node* temp=head;
	int pos,count=1;
	cout<<"Enter The Position you want to insert: ";
	cin>>pos;
	while(count<pos-1){
		count++;
		temp=temp->next;
	}
	
	node* newNode=new node(0);
	int value;
	cout<<"Enter The Value: ";
	cin>>value;
	newNode->prev=NULL;
	newNode->data=value;
	newNode->next=NULL;
	
	newNode->prev=temp;
	newNode->next=temp->next;
	temp->next->prev=newNode;
	temp->next=newNode;
	return;
}

void print(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main(){
	int value;
	cout<<"Enter The Value: ";
	cin>>value;
	node* head=new node(value);
	int i;
	for(i=0;i<9;i++){
		insert(head);
	}
	pos(head);
	print(head);
}


