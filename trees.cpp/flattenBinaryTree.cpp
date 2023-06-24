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
void flatten(Node* root)
{
    if(root==NULL || (root->right==NULL && root->left==NULL))
    {
        return;
    }
    if(root->left!=NULL)
    {
        flatten(root->left);
        Node* tempR=root->right;
        root->right=root->left;
        root->left=NULL;
        Node* temp=root->right;
        while(temp->right!=NULL)
        {
            temp=temp->right;
        }
        temp->right=tempR;
    }
    flatten(root->right);
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
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    inorder(root);
    flatten(root);
    inorder(root);
}