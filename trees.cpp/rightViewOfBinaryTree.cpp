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
void rightView(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        int s=q.size();
        for(int i=0;i<s;i++)
        {
            Node* node=q.front();
            q.pop();
            if(i==s-1)
            {
                cout<<node->data<<" ";
            }
            if(root->left!=NULL)
            {
                q.push(root->left);
            }
            if(root->right!=NULL)
            {
                q.push(node->right);
            }
        }
    }
}
int main()
{
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    root->right->left->right=new Node(8);
    rightView(root);
}




















































































































































































































































































































































































