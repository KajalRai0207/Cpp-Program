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
bool checkBST(Node* root,int min,int max)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->data>max || root->data<min)
    {
        return false;
    }
    return checkBST(root->left,min,root->data) && checkBST(root->right,root->data,max);    
}
bool isBST(Node* root)
{
    return (checkBST(root,INT_MIN,INT_MAX));
}
int main()
{
    // Node* root=new Node(10);
    // root->right=new Node(20);
    // root->left=new Node(8);
    // root->left->left=new Node(6);
    // root->left->left->left=new Node(4);
    // root->left->left->right=new Node(9);
    Node* root=new Node(3);
    root->left=new Node(2);
    root->right=new Node(7);
    root->left->left=new Node(1);
    root->right->left=new Node(5);
    root->right->right=new Node(8);
    root->right->left->left=new Node(4);
    root->right->left->right=new Node(6);
    if(isBST(root))
    {
        cout<<"BST";
    }
    else{
        cout<<"NOT BST";
    }
    return 0;
}