#include <iostream>
using namespace std;
class node {
	public:
  int key;
  node *left;
  node *right;
};

node *newNode(int k) {
  node *Node1 = new node();
  Node1->key = k;
  Node1->right =NULL;
  Node1->left = NULL;
  return Node1;
}

int countNumNodes(node *root) {
  if (root == NULL)
    return 0;
  return (1 + countNumNodes(root->left) + countNumNodes(root->right));
}


bool checkComplete(node *root, int index, int numberNodes) 
{
  if (root == NULL)
    return true;

  if (index >= numberNodes)
    return false;

  return (checkComplete(root->left, 2 * index + 1, numberNodes) && checkComplete(root->right, 2 * index + 2, numberNodes));
}

int main() {
  node *root = NULL;
  root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);
  root->right->left = newNode(6);

  int node_count = countNumNodes(root);
  int index = 0;

  if (checkComplete(root, index, node_count))
    cout << "The tree is a complete binary tree\n";
  else
    cout << "The tree is not a complete binary tree\n";
}

