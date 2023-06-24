#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *right,*left;
    public:
    Node(int val)
    {
        data=val;
        right=NULL;
        left=NULL;
    }
};
Node* constructfromPreorder(int preorder[],int *preorderIdx,int key,int min,int max,int n)
{
    if(*preorderIdx>=n)
    {
        return NULL;
    }
    Node* root=NULL;
    if(key>min && key<max)
    {
        root=new Node(key);
        *preorderIdx=*preorderIdx+1;
        if(*preorderIdx<n)
        {
            root->left=constructfromPreorder(preorder,preorderIdx,preorder[*preorderIdx],min,key,n);
        }
        if(*preorderIdx<n)
        {
            root->right=constructfromPreorder(preorder,preorderIdx,preorder[*preorderIdx],key,max,n);
        }
    }
    return root;
}
void printpreoder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    printpreoder(root->left);
    printpreoder(root->right);
}
int main()
{
    int preorder[]={7,5,4,6,8,9};
    int preorderIdx=0;
    int n=6;
    Node* root=constructfromPreorder(preorder,&preorderIdx,preorder[0],INT_MIN,INT_MAX,n);
    printpreoder(root);
    return 0;
}