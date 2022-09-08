#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
	node(int val)
	{
	    data=val;
	    left=right=NULL;
	}
};
int inorder(struct node* root)
{
	
	if(root==NULL)
	{
		return 0;
	}
	inorder(root->left);
	cout<<root->data<<"  ";
	inorder(root->right);
}
int main()
{
	struct node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	cout<<"Inorder-->";
	inorder(root);
	
}
