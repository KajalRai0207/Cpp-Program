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
void inorder(struct Node* root)
{
    stack<Node *>s;
    Node *current=root;
    while(current!=NULL || s.empty()==false)
    {
        while(current!=NULL)
        {
            s.push(current);
            current=current->left;
        }
        current=s.top();
        s.pop();
        cout<<current->data<<" ";
        current=current->right;
    }
}
int main()
{
    struct Node* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    inorder(root);
    return 0;
}