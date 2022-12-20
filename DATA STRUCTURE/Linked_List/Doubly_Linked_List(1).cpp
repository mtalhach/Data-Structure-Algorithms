#include<iostream>
using namespace std;
class node{
	public:
	node* prev;
	int data;
	node* next;
	
	node(){
		prev=NULL;
		data=2;
		next=NULL;
	}
};

void create(node* head){
	node* temp=head;
	node* newNode=new node();
	newNode->prev=NULL;
	newNode->data=5;
	newNode->next=NULL;
	
	temp->next=newNode;
	newNode->prev=temp;
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
	node* head=new node();
	create(head);
	print(head);
}


