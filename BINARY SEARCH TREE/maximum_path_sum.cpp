#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    public:
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
    int maxpath(struct node* root)
    {
        int maxi=0;
        max_path(root,maxi);
        return maxi;
    }private:
    int max_path(struct node* node,int &maxi)
    {
        if(node==NULL)
        {
            return 0;
        }int lh=max_path(node->left,maxi);
        int rh=max_path(node->right,maxi);
        maxi=max(maxi,((lh+rh)+node->data));
        return node->data+max(lh,rh);
    }


};int main()
{
  struct node * root = new node(-10);
  root -> left = new node(9);
  root -> right = new node(20);
  root -> right -> left = new node(15);
  root -> right -> right = new node(7);
  int answer=solution().maxpath(root);
  cout << "The Max Path Sum for this tree is"<< answer;
	
}
