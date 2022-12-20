#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* left;
	node* right;
};

node* newNode(node *root, int k){
	if(root == NULL){
		node* Node=new node();
		Node->data=k;
		Node->left=NULL;
		Node->right=NULL;
		return Node;
	}
	if(k > root->data){
		root->right = newNode(root->right, k);
	}
	if(k <= root->data){
		root->left = newNode(root->left, k);
	}
	return root;
}

node* search(node* root,int key){
	if(root==NULL || root->data==key){
		return root;
	}
	if(root->data<key){
		return search(root->right,key);
	}
	return search(root->left,key);
}
//void inOrder(node *root){
//	if(root != 	NULL){
//		inOrder(root->left);
//		cout<<root->data<<" ";
//		inOrder(root->right);
//	}

int main(){
	node* root=NULL;
	root=newNode(root, 10);
	newNode(root, 12);
	newNode(root, 8);
	newNode(root, 15);
	
//	inOrder(root);
	node* temp=search(root,50);
if(temp){
	cout<<"Found";
}
else{
	cout<<"Not Found";
}
	
	
}
