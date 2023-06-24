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
        left=NULL;
        right=NULL;
    }
};
Node* insertBST(Node* root,int key)
{
    if(root==NULL)
    {
        return new Node(key);
    }
    if(key<root->data)
    {
        root->left=insertBST(root->left,key);
    }
    else if(key>root->data)
    {
        root->right=insertBST(root->right,key);
    }
    return root;
}
void inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    Node* root=NULL;
    root=insertBST(root,5);
    insertBST(root,3);
    insertBST(root,1);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    inorder(root);
    return 0;
}