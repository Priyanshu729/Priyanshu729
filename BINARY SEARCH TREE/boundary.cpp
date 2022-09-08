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
    private:
    void traversalleft(node* root,vector<int>&ans)
    {
        if(root==NULL||(root->left==NULL&&root->right==NULL))
        {
            return;
        }ans.push_back(root->data);
        if(root->left)
        traversalleft(root->left,ans);
        else
        traversalleft(root->right,ans);

    }
    void traversalleaf(node* root,vector<int>&ans)
    {
        if(root==NULL)
        {
            return;
        }if(root->left==NULL&&root->right==NULL)
        {
            ans.push_back(root->data);
            return;
        }traversalleaf(root->left,ans);
        traversalleaf(root->right,ans);

    }
    void traversalright(node* root,vector<int>&ans)
    {
        if(root==NULL||(root->left==NULL&&root->right==NULL))
        {
            return;
        }ans.push_back(root->data);
        if(root->right)
        traversalright(root->right,ans);
        else
        traversalright(root->left,ans);
    }
    public:
    vector<int>boundary(node* root)
    {
        vector<int>ans;
        if(root==NULL)return ans;
        ans.push_back(root->data);
        traversalleft(root->left,ans);
        traversalleaf(root->left,ans);
        traversalleaf(root->right,ans);
        traversalright(root->right,ans);
        return ans;
    }




};int main()
{
	struct node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
    root->left->right->right=new node(9);
    root->left->right->left=new node(8);
	root->right->left=new node(6);
	root->right->right=new node(7);
	solution ob;
	vector<int> vec=ob.boundary(root);
	for(int x:vec)
	{
		cout<<x<<" ";
	}
}    