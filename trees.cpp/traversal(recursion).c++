#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *left , *right;
    public:
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
void inorder(struct Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(struct Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct Node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    struct Node* root=new Node(4);
    root->left=new Node(1);
    root->right=new Node(6);
    root->left->left=new Node(5);
    root->left->right=new Node(2);
    cout<<"Inorder Traversal :\n";
    inorder(root);
    cout<<"\nPre-order Traversal :\n";
    preorder(root);
    cout<<"\nPost-order Traversal :\n";
    postorder(root);
    return 0;
}