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
Node* search(Node* root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    }
    if(key<root->data)
    {
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}
int main()
{
    Node* root=new Node(4);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);
    int key;
    cin>>key;
    Node* temp=search(root,key);
    if(temp==NULL)
    {
        cout<<"Node not found"<<endl;
    }
    else{
        cout<<"Node found"<<endl;
    }
    return 0;
}