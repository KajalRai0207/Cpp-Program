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
Node* searchBST(Node* root,int val)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==val)
    {
        return root;
    }
    if(val>root->data)
    {
        return searchBST(root->right,val);
    }
    else{
        return searchBST(root->left,val);
    }
       
}
Node* inorderSucc(Node* root)
{
    Node* curr=root;
    while(curr && curr->left!=NULL)
    {
        curr=curr->left;
    }
    return curr;
}
Node* deleteBST(Node* root,int val)
{
    if(val>root->data)
    {
        root->right=deleteBST(root->right,val);
    }
    if(val<root->data)
    {
        root->left=deleteBST(root->left,val);
    }
    else{
        if(root->right==NULL)
        {
            Node* temp=root->left;
            free(root);
            return temp;
        }
        if(root->left==NULL)
        {
            Node* temp=root->right;
            free(root);
            return temp;
        }
        Node* temp=inorderSucc(root->right);
        root->data=temp->data;
        root->right=deleteBST(root->right,temp->data);
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
    Node* root=new Node(3);
    root->left=new Node(2);
    root->right=new Node(7);
    root->left->left=new Node(1);
    root->right->left=new Node(5);
    root->right->right=new Node(8);
    root->right->left->left=new Node(4);
    root->right->left->right=new Node(6);
    if(searchBST(root,8)==NULL)
    {
        cout<<"Doesn't exist";
    }
    else{
        cout<<"Exists";
    }
    root=deleteBST(root,5);
    inorder(root);
    return 0;
}