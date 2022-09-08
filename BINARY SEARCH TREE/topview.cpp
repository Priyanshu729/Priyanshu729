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
};
class solution
{
	public:
	vector<int>topview(node* root)
	{
		vector<int>ans;
		queue<pair<node*,int>>q;
		map<int,int>mpp;
		if(root==NULL)return {0};
		q.push({root,0});
		while(!q.empty())
		{
			auto it=q.front();
			q.pop();
			node* n=it.first;
			int line=it.second;
			if(mpp.find(line)==mpp.end())mpp[line]=n->data;
			if(n->left!=NULL)
			{
				q.push({n->left,line-1});
			}if(n->right!=NULL)
			{
				q.push({n->right,line+1});
			}
			
		}for(auto it:mpp)
		{
			ans.push_back(it.second);
		}
		return ans;
	}
};int main()
{
	struct node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->left=new node(6);
	root->right->right=new node(7);
	solution ob;
	vector<int> vec=ob.topview(root);
	for(int x : vec)
        cout<<x<<" ";
    cout<<endl;
}
