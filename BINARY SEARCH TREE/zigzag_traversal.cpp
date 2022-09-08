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
	vector<int>leftview(node* root)
	{
		vector<int>ans;
        if(root==NULL)
		return ans;
        queue<node*>q;
        q.push({root});
        bool leftoright=true;
        while(!q.empty())
        {
            int size=q.size();
            vector<int>result(size);
            for(int i=0;i<size;i++)
            {
                node* it=q.front();
                q.pop();
                int index=leftoright?i:size-i-1;
                result[index]=it->data;
                if(it->left!=NULL)q.push(it->left);
                if(it->right!=NULL)q.push(it->right);

            }leftoright=!leftoright;
            for(int i:result)
            {
                ans.push_back(i);
            }
        }
        return ans;
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
	vector<int> vec=ob.leftview(root);
	for(int x:vec)
	{
		cout<<x<<" ";
	}
}