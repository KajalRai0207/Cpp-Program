#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left,*right;
    public:
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
Node* leastCommonAncestor(Node* root,int a,int b)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==a || root->data==b)
    {
        return root;
    }
    Node* left=leastCommonAncestor(root->left,a,b);
    Node* right=leastCommonAncestor(root->right,a,b);
    if(left==NULL){
        return right;
    }
    if(right==NULL){
        return left;
    }
    else{
        return root;
    }
}
int main()
{
    Node* root=new Node(5);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->left->right=new Node(1);
    root->left->left->right->left=new Node(7);
    root->left->left->right->right=new Node(6);
    int a,b;
    cin>>a>>b;
    cout<<leastCommonAncestor(root,a,b)->data;
}