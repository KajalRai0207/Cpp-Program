
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *right,*left;
    Node(int val)
    {
        data=val;
        right=NULL;
        left=NULL;
    }
};
Node* lca(Node* root,int a,int b)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==a || root->data==b)
    {
        return root;
    }
    Node* left=lca(root->left,a,b);
    Node* right=lca(root->right,a,b);
    if(left==NULL)
    {
        return right;
    }
    if(right==NULL)
    {
        return left;
    }
    else{
        return root;
    }
}
int distance(Node* root,int x,int level)
{
    if(root==NULL)
    {
        return -1;
    }
    if(root->data==x)
    {
        return level;
    }
    int left=distance(root->left,x,level+1);
    if(left==-1)
    {
        return distance(root->right,x,level+1);
    }
    else{
        return left;
    }
}
int shortestdistance(Node* root,int a,int b)
{
    Node* least=lca(root,a,b);
    int d1=distance(least,a,0);
    int d2=distance(least,b,0);
    return d1+d2;
}
int main()
{
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<shortestdistance(root,5,6);
    return 0;
}