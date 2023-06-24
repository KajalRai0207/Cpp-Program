#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *right,*left;
    Node(int val)
    {
        data=val;
        right=NULL;
        left=NULL;
    }
};
int search(int inorder[],int start,int end,int current)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==current)
        {
            return i;
        }
    }
    return -1;
}
Node* buildTree(int preorder[],int inorder[],int start,int end)
{
    static int idx=0;
    if(start>end)
    {
        return NULL;
    }
    int current=preorder[idx];
    idx++;
    Node* newnode=new Node(current);
    if(start==end)
    {
        return newnode;
    }
    int pos=search(inorder,start,end,current);
    newnode->left=buildTree(preorder,inorder,start,pos-1);
    newnode->right=buildTree(preorder,inorder,pos+1,end);     
    return newnode;
}
void printInorder(struct Node* root)
{
    if(root==NULL)
    {
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}
void printPostorder(struct Node* root)
{
    if(root==NULL)
    {
        return;
    }
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    Node* root=buildTree(preorder,inorder,0,4);
    printInorder(root);
    printPostorder(root);
    return 0;
}