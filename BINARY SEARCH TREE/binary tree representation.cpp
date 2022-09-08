#include<iostream>
using namespace std;
struct node
{
	int data;
	node* left;node* right;
};
struct node* newNode(int data)
{
	struct node* nod=new node();
	nod->data=data;
	nod->left=NULL;
	nod->right=NULL;
}int main()
{
	struct node* root=newNode(1);
	root->left=newNode(2);
	root->left->left=newNode(3);
	root->left->right=newNode(4);
	root->right=newNode(5);
	root->right->left=newNode(6);
	root->right->right=newNode(7);
	
}
