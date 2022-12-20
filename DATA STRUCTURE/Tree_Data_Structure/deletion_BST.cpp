#include<iostream>
using namespace std;
class node{
	public:
	int key;
	node* left;
	node* right;
};

node *getNewNode(int k){
	node* Node1=new node();
	Node1->left=NULL;
	Node1->key=k;
	Node1->right=NULL;
	return Node1;
}

node* search(node* root,int k){
	
	if(root==NULL || root->key==k){
		return root;
	}
	if(root->key<k){
		return search(root->right,k);
	}
	return search(root->left,k);
}

node* insert(node* root, int k){
	if(root==NULL){
		return getNewNode(k);
	}
	if(root->key<k){
		root->right=insert(root->right,k);
	}
	else if(root->key>k){
		root->left=insert(root->left,k);
	}
	return root;
}

//int getRightMin(node* root){
//	node* temp=root;
//	while(temp->left!=NULL){
//		temp=temp->left;
//	}
//	return temp->key;
//}

int getleftMin(node* root){
	node* temp=root;
	while(temp->right!=NULL){
		temp=temp->right;
	}
	return temp->key;
}

node *removeNode(node* root,int k){
	if(root==NULL){
		cout<<"NO Node Found So deletion Not possible, Press 1 to create Node\n";
		return NULL;
	}
	if(root->key<k){
		root->right=removeNode(root->right,k);
	}
	else if(root->key>k){
		root->left=removeNode(root->left,k);
	}
	else{
	if(root->left==NULL && root->right==NULL){
		delete(root);
		cout<<"SuccessFully Deleted\n";
		return NULL;
	}
	else if(root->left==NULL){
		node *temp=root->right;
		delete(root);
		cout<<"SuccessFully Deleted\n";
		return temp;
	}
	
	else if(root->right==NULL){
		node *temp=root->left;
		delete(root);
		cout<<"SuccessFully Deleted\n";
		return temp;
	}
//	else{
//		int rightMin=getRightMin(root->right);
//		root->key=rightMin;
//		root->right=removeNode(root->right,rightMin);
//	}
	else{
		int leftMin=getleftMin(root->left);
		root->key=leftMin;
		root->left=removeNode(root->left,leftMin);
	}
}
	return root;
}

void inOrder(node* root){
	if(root!=NULL){
		inOrder(root->left);
		cout<<root->key<<" ";
		inOrder(root->right);
	}
}

int main(){
	node* root=NULL;
	int k;
	int opt=1;
	while(opt!=0){
		cout<<"\nPress 1:to insert:\n";
		cout<<"Press 2:to Delete:\n";
		cout<<"Press 3:to display:\n";
		cout<<"Press 0:to exit\n";
		cout<<"Enter You Choice:  ";
		cin>>opt;
		switch(opt){
			case 1:
				cout<<"Enter The Value You Want to insert:";
				cin>>k;
				node* temp;
				temp=search(root,k);
				if(temp){
					cout<<"Value already exist, press 1 to insert another value\n";
					break;
				}
				else{
						root=insert(root,k);
						break;
				}
				break;
			case 2:
				cout<<"Enter The Value You Want to delete:";
				cin>>k;
				if(root==NULL){
					root=removeNode(root,k);
					break;
				}
				else{
				temp=search(root,k);
				if(temp){
				root=removeNode(root,k);	
				}
				else{
					cout<<"Value is Not in The List\n";
				}
				break;
				}
				break;
			case 3:
				inOrder(root);
				break;
			case 0:
				exit(0);
				break;
		}
	}
}
