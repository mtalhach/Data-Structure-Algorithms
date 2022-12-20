#include<iostream>
using namespace std;
class node{
	public:
	int key;
	node* left;
	node* right;
};

node *newNode(int k){
	node *n=new node();
	n->key=k;
	n->left=NULL;
	n->right=NULL;
	return n;
}

int depth(node* Node){
	int d=0;
	while(Node!=NULL){
		d++;
//		Node=Node->left;
		Node=Node->left;
	}
	return d;
}

bool isPerfect(node* root,int d,int level){
	if(root==NULL){
		return true;
	}
	if(root->left==NULL && root->right==NULL){
		return(d==level+1);
	}
	if(root->left==NULL || root->right==NULL){
		return false;
	}
	return isPerfect(root->left,d,level+1) && isPerfect(root->right,d,level+1);
}

bool isPerfectTree(node* root){
	int d=depth(root);
	return isPerfect(root,d,0);
}

int main(){
	node* root=NULL;
	root=newNode(1);
	root->left = newNode(2);
  	root->right = newNode(3);
  	root->left->left = newNode(4);
  	root->left->right = newNode(5);
  	root->right->left = newNode(6);
//  	root->right->right = newNode(7);
  	
  	if (isPerfectTree(root))
    cout << "The tree is a perfect binary tree\n";
  else
    cout << "The tree is not a perfect binary tree\n";

}
