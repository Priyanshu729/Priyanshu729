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
	vector<vector<int>>vertical(struct node* root)
	{
		queue<pair<node*,pair<int,int>>>q;
		map<int,map<int,multiset<int>>>s;
		q.push({root,{0,0}});
		while(!q.empty())
		{
			auto p=q.front();
			q.pop();
			node* c=p.first;
			int x=p.second.first;int y=p.second.second;
			s[x][y].insert(c->data);
			if(c->left)
			{
				q.push({c->left,{x-1,y+1}});
			}if(c->right)
			{
				q.push({c->right,{x+1,y+1}});
			}
		}   
		vector<vector<int>>ans;
		for(auto k:s)
		{
			vector<int>col;
			for(auto m:k.second)
			{
					col.insert(col.end(),m.second.begin(),m.second.end());
			}
			ans.push_back(col);

		}return ans;
	}
};int main()
{
	struct node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(6);
	root->right->left=new node(5);
	root->right->right=new node(7);
	solution ob;
	vector<vector<int>> vec=ob.vertical(root);
    for(auto x:vec)
	{
		for(auto l:x)
		{
			cout<<l<<"  ";
		}
	}

}    