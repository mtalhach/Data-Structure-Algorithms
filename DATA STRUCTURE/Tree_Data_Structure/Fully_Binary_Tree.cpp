#include<stdlib.h>
#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* left;
	node* right;
};

node *createNode(int k){
	node *newNode= new node();
	newNode->data=k;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}

bool isFullyBinaryTree(node *root){
	if(root==NULL){
		return true;
	}
	if(root->left==NULL&&root->right==NULL){
		return true;
	}
	if((root->left)&&(root->right)){
		return (isFullyBinaryTree(root->left)&&isFullyBinaryTree(root->right));
	}
	return false;
}

int main(){
	node *root=NULL;
	root=createNode(1);
	root->left=createNode(2);
	root->right=createNode(3);
	root->left->left=createNode(4);
	root->left->right=createNode(5);
	root->left->left->left=createNode(6);
	root->left->left->right=createNode(7);
	
	if(isFullyBinaryTree(root)){
		cout<<"Fully binary Tree\n";
	}
	else{
		cout<<"Not a fully binary tree\n";
	}
	return 0;
}


