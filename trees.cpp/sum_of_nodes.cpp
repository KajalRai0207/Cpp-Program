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
int sum(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return sum(root->left)+sum(root->right)+root->data;
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
    cout<<"Sum="<<sum(root)<<endl;
}