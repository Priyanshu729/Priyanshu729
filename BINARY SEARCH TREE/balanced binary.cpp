#include<iostream>
using namespace std;
struct node
{
	int data;
	node* left;
	node* right;
	node(int val)
	{
		data=val;
		left=right=NULL;
	}
};
int dfsHeight(struct node* root)
{
	if(root==NULL)return 0;
	int lh=isbalanced(root->left);
	if(lh==-1)return -1;
	int rh=isbalanced(root->right);
	if(rh==-1)return -1;
	if(abs(lh-rh)>1)return -1;
	return 1+max(lh,rh);
}int isbalanced(struct node* roo)
{
	if(dfsHeight(roo))
	return;
	
}
struct node* newNode(int data){
	struct node* nod=new node(data);
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
  cout<<dfsHeight(root);
}
