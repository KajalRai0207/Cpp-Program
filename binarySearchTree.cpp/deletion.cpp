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
Node* rootsuccessor(Node* root)
{
    Node* curr=root;
    if(curr && curr->left!=NULL)
    {
        curr=curr->left;
    }
    return curr;
}
Node* del(Node* root,int key)
{
    if(key<root->data)
    {
        root->left=del(root->left,key);
    }
    else if(key>root->data)
    {
        root->right=del(root->right,key);
    }
    else{
        if(root->left==NULL)
        {
            Node* temp=root->right;
            free(root);
            return temp;
        }
        if(root->right==NULL)
        {
            Node* temp=root->left;
            free(root);
            return temp;
        }
        Node* temp=rootsuccessor(root->right);
        root->data=temp->data;
        root->right=del(root->right,temp->data);
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
    Node* root=new Node(4);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);
    cout<<"Before deletion"<<endl;
    inorder(root);
    cout<<"Enter value to be deleted"<<endl;
    int key;
    cin>>key;
    cout<<"After deletion"<<endl;
    del(root,key);
    inorder(root);
    return 0;    
}