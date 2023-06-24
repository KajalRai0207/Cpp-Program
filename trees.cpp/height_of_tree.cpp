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
int height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}
int main()
{
    Node* root=new Node(5);
    root->left=new Node(6);
    root->right=new Node(3);
    root->left->left=new Node(9);
    root->left->right=new Node(1);
    root->right->left=new Node(2);
    root->right->right=new Node(1);
    cout<<height(root)<<endl;
}