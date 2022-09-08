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
	   int maxdiameter(struct node* root)
    {
	    int diameter=0;
		height(root,diameter);
		return diameter-1;
    }private:
	    int height(struct node* nod,int &diameter)
    {
	    if(!nod)return 0;
		int lh=height(nod->left,diameter);
		int rh=height(nod->right,diameter);
		int temp=max(lh,rh)+1;
		int ans=max(temp,1+rh+lh);
	    diameter=max(diameter,ans);
	    return 1+max(lh,rh);
    }	
	
};
//int maxdiameter(struct node* root)
//{
//	int diameter=0;
//	height(root,diameter);
//	return diameter;
//}int height(struct node* nod,int &diameter)
//{
//	if(!nod)return 0;
//	int lh=height(nod->left,diameter);
//	int rh=height(nod->right,diameter);
//	diameter=max(diameter,(rh+lh));
//	return 1+max(lh,rh);
//}
int main()
{
	struct node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->left=new node(6);
	root->right->right=new node(7);
    cout<<solution().maxdiameter(root);
	
}
