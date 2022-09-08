#include<iostream>
#include<bits/stdc++.h>
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
void level_order(struct node* root)
{
	queue<node*>q;
	q.push(root);
	while(!q.empty())
	{
		int size=q.size();
		for(int i=0;i<size;i++)
		{
			node* node=q.front();
			q.pop();
			cout<<node->data<<" ";
			if(node->left!=NULL)q.push(node->left);
			if(node->right!=NULL)q.push(node->right);
	    }	
	} 	
}
int main()
{
	struct node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->left=new node(6);
	root->right->right=new node(7);
	level_order(root);
	
}
