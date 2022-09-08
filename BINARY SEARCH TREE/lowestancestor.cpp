#include<iostream>
#include<bits/stdc++.h>
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
};class solution
{
	public:
    node* lowestancestor(node* root,int p,int q)
	{
		if(root==NULL||root->data==p||root->data==q)
		{
			return root;
		}	
		node* left=lowestancestor(root->left,p,q);
		node* right=lowestancestor(root->right,p,q);
		if(left==NULL)return right;
		else if(right==NULL)return left;
		else return root;


	}
};
int main()
{
    struct node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
    // root->left->right->right=new node(9);
    // root->left->right->left=new node(8);
	root->right->left=new node(6);
	root->right->right=new node(7);
	solution ob;
	node* vec=ob.lowestancestor(root,4,5);
	cout<<vec->data<<" ";
}   