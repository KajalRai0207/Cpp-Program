#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *right,*left;
    public:
    Node(int val)
    {
        data=val;
        right=NULL;
        left=NULL;
    }
};
void subTree(Node* root,int k)
{
    if(root==NULL || k<0)
    {
        return;
    }
    if(k==0)
    {
        cout<<root->data<<" ";
    }
    subTree(root->left,k-1);
    subTree(root->right,k-1);
}
int nodesAtK(Node* root,Node* target,int k)
{
    if(root==NULL)
    {
        return -1;
    }
    if(root==target)
    {
        subTree(target,k);
        return 0;
    }
    int dl=nodesAtK(root->left,target,k);
    if(dl!=-1)
    {
        if(dl+1==k)
        {
            cout<<root->data<<" ";
        }
        else{
            subTree(root->right,k-dl-2);
        }
        return 1+dl;
    }
    int dr=nodesAtK(root->right,target,k);
    if(dr!=-1)
    {
        if(dr+1==k)
        {
            cout<<root->data<<" ";
        }
        else{
            subTree(root->left,k-dr-2);
        }
        return 1+dr;
    }
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
    nodesAtK(root,root->left,2);
}