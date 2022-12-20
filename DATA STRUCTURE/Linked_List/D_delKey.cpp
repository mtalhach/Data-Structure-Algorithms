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


void print(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

void delkey(node* head){
	node* temp=head;
	node* prev=head;
	int key;
	cout<<"\nEnter The Key you want to delete: ";
	cin>>key;
	while(temp!=NULL){
	if(temp->data==key){
	prev->next=temp->next;
	prev=temp->next->prev;
	delete(temp);
	temp=NULL;
	return;
	}
		prev=temp;
		temp=temp->next;
	}
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
	delkey(head);
	cout<<"\nSuccessfully deleted\n";
	print(head);
	
}


