#include<iostream> 
using namespace std;
class node {
public:
  int item;
  node *left;
  node *right;
};

node *newNode(int k) {
  node *Node = new node();
  Node->item = k;
  Node->left = NULL;
  Node->right = NULL;
  return Node;
}

bool checkHeightBalance(node *root, int *height) {
  int leftHeight = 0, rightHeight = 0;
  int l = 0, r = 0;
  if (root == NULL) {
    *height = 0;
    return 1;
  }

  l = checkHeightBalance(root->left, &leftHeight);
  r = checkHeightBalance(root->right, &rightHeight);

  *height = (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;

  if (leftHeight - rightHeight >= 2)
    {
    	return 0;
	}
  else
  {
  	return l && r;
  }
}

int main() {
  int height = 0;

  node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);

  if (checkHeightBalance(root, &height))
    cout << "The tree is balanced";
  else
    cout << "The tree is not balanced";
}
