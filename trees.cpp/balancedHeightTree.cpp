// O(N^2) ALGO


// #include<bits/stdc++.h>
// using namespace std;
// struct Node
// {
//     int data;
//     Node *right,*left;
//     public:
//     Node(int val)
//     {
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// int height(Node* root)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }
//     return max(height(root->left),height(root->right))+1;
// }
// bool balancedTree(Node* root)
// {
//     if(root==NULL)
//     {
//         return true;
//     }
//     if(balancedTree(root->left)==false)
//     {
//         return false;
//     }
//     if(balancedTree(root->right)==false)
//     {
//         return false;
//     }
//     int l=height(root->left);
//     int r=height(root->right);
//     if(abs(l-r)>1)
//     {
//         return false;
//     }
//     else{
//         return true;
//     }
// }
// int main()
// {
//     Node* root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
//     root->left->left=new Node(4);
//     root->left->right=new Node(5);
//     root->left->left->left=new Node(6);
//     root->left->left->left->left=new Node(7);
//     if(balancedTree(root)==false)
//     {
//         cout<<"Tree is not balanced";
//     }
//     else{
//         cout<<"Tree is balanced";
//     }
// }

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
bool balancedTree(Node* root, int* height)
{
    int lh=0,rh=0;
    if(root==NULL)
    {
        return true;
    }
    if(balancedTree(root->left,&lh)==false)
    {
        return false;
    }
    if(balancedTree(root->right,&rh)==false)
    {
        return false;
    }
    *height=max(lh,rh)+1;
    if(abs(lh-rh)>1)
    {
        return false;
    }
    else{
        return true;
    }
}
int main()
{
    Node* root=new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->left->left->left = new Node(7);
    int height=0;
    if(balancedTree(root,&height)==false)
    {
        cout<<"Tree is not balanced";
    }
    else
    {
        cout<<"Tree is balanced";
    }
}