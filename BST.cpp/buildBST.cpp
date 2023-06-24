#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *left,*right;
    public:
    Node(int val)
    {
        data=val;
        right=NULL;
        left=NULL;
    }  
};
Node* insertBST(Node* root,int val)
{
    if(root==NULL)
    {
        return new Node(val);
    }
    if(val>root->data)
    {
        root->right=insertBST(root->right,val);
    }
    if(val<root->data)
    {
        root->left=insertBST(root->left,val);
    }
    return root;
}
void preorder(Node* root)
{
    if(root==NULL)
    {
        return ;
    }
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
}
int main()
{
    Node* root=NULL;
    root=insertBST(root,3);  
    insertBST(root,2);   
    insertBST(root,7);   
    insertBST(root,1);   
    insertBST(root,5);   
    insertBST(root,8);   
    insertBST(root,4);   
    insertBST(root,6);   
    preorder(root);  
    return 0;
}