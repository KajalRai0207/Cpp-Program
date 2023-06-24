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
int search(int inorder[],int current,int start,int end)
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
Node* buildtree(int postorder[],int inorder[],int start,int end)
{
    if(start>end)
    {
        return NULL;
    }
    static int idx=end;
    int current=postorder[idx];
    idx--;
    Node* newnode=new Node(current);
    if(start==end)
    {
        return newnode;
    }
    int pos=search(inorder,current,start,end);
    newnode->right=buildtree(postorder,inorder,pos+1,end);
    newnode->left=buildtree(postorder,inorder,start,pos-1);
    return newnode;
}
void printPostorder(Node* root)
{
    if(root==NULL)
    {
        return ;
    }
    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    Node *root=buildtree(postorder,inorder,0,4);
    printPostorder(root);
    return 0;
}