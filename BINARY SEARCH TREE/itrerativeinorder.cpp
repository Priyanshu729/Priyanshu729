#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* left;
	node* right;
};void preorderTrav(node* curr,vector<int> &inOrder)
{
	if(curr==NULL)
	{
		return;
	}
	inOrder.push_back(curr->data);
	preorderTrav(curr->left,inOrder);
	preorderTrav(curr->right,inOrder);
}struct node* newNode(int data)
{
	struct node* nod=new node();
	nod->data=data;
	nod->left=NULL;
	nod->right=NULL;
	
	return (nod);
}
int main() {

  struct node * root = newNode(1);
  root -> left = newNode(2);
  root -> right = newNode(3);
  root -> left -> left = newNode(4);
  root -> left -> right = newNode(5);
  root -> left -> right -> left = newNode(8);
  root -> right -> left = newNode(6);
  root -> right -> right = newNode(7);
  root -> right -> right -> left = newNode(9);
  root -> right -> right -> right = newNode(10);

  vector < int > inOrder;
  preorderTrav(root, inOrder);

  cout << "The inOrder Traversal is : ";
  for (int i = 0; i < inOrder.size(); i++) {
    cout << inOrder[i] << " ";
  } 
}
