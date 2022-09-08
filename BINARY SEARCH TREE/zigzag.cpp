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
		vector<int> zizagtraversal(struct node* root)
		{
			vector<int>result;
			if(root==NULL)return result;
			queue<node*>q;
			q.push(root);
			bool l=true;
			while(!q.empty())
			{
				int size=q.size();
				vector<int>ans(size);;
				for(int i=0;i<size;i++)
				{
					node* n=q.front();
					q.pop();
					int index=l?i:size-i-1;
					ans[index]=n->data;
					
					if(n->left!=NULL)q.push(n->left);
					if(n->right!=NULL)q.push(n->right);	
				}l=!l;
				for(auto f:ans)
                {
				    result.push_back(f);
                }
				
			}
			return result;
        }	
};
int main()
{
	struct node* root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->left=new node(6);
	root->right->right=new node(7);

    solution ob;
	vector<int>vec=ob.zizagtraversal(root);
	for(auto x:vec)
	{
		cout<<x<<" ";
	}
}
