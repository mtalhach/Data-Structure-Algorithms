#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* left;
	node* right;
};

node* search(node* root,int k){
	
	if(root==NULL || root->data==k){
		return root;
	}
	if(root->data<k){
		return search(root->right,k);
	}
	return search(root->left,k);
}

node* insert(node *root, int k){
	if(root == NULL){
		node* Node=new node();
		Node->data=k;
		Node->left=NULL;
		Node->right=NULL;
		return Node;
}
	if(k > root->data){
		root->right = insert(root->right, k);
	}
	if(k <= root->data){
		root->left = insert(root->left, k);
	}
	return root;
}

void inOrder(node* root){
	if(root!=NULL){
		inOrder(root->left);
		cout<<root->data<<" ";
		inOrder(root->right);
	}
}

int main(){
	node* root=NULL;
	int opt=0,flag=0,k;
	while(opt!=3){
		cout<<"\nPress 1:to insert:\n";
		cout<<"Press 2:to display:\n";
		cout<<"Press 3:to exit\n";
		cout<<"Enter You Choice:  ";
		cin>>opt;
		switch(opt){
			case 1:
				cout<<"Enter The Value You Want to insert:";
				cin>>k;
				node* temp;
				temp=search(root,k);
				if(temp){
					flag=1;
				}
				else{
					flag=0;
				}
				if(flag==1){
					cout<<"Value already exist, press 1 to insert another value\n";
					break;
				}
				else{
						root=insert(root,k);
						break;
				}
				break;
			case 2:
				inOrder(root);
				break;
			case 3:
				exit(0);
				break;
		}
	}
}
